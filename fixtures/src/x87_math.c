long double sum_squares_x87(long double a, long double b) {
    long double aa = a * a;
    long double bb = b * b;
    return aa + bb;
}

int compare_floats_x87(long double a, long double b) {
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

long double mix_ops_x87(long double a, long double b, long double c) {
    long double t1 = a + b;
    long double t2 = t1 * c;
    long double t3 = t2 - a;
    return t3 / b;
}

int main(void) {
    long double s = sum_squares_x87(3.0L, 4.0L);
    long double m = mix_ops_x87(1.5L, 2.5L, 3.5L);
    int cmp = compare_floats_x87(s, m);
    return cmp;
}
