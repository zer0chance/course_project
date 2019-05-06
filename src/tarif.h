#ifndef TARIF_H
#define TARIF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int n = 6;

typedef struct tarifbook {
char company[10];
char tarif[10];
short gb;
short min;
short sms;
short min_mezhgorod;
int price;
} data;

typedef struct {
short min;
short sms;
short gb;
char min_mezhgorod;
} my_tarif;

void difference_gb(short *difference_gb_plus, short *difference_gb_minus, my_tarif my_list);
void difference_min(short *difference_min_plus, short *difference_min_minus, my_tarif my_list);
void difference_sms(short *difference_sms_plus, short *difference_sms_minus, my_tarif my_list);


#endif
