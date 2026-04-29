int sum_for(int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += i;
    return s;
}

int sum_while(int n) {
    int s = 0, i = 0;
    while (i < n) {
        s += i;
        i++;
    }
    return s;
}

int sum_do(int n) {
    int s = 0, i = 0;
    do {
        s += i;
        i++;
    } while (i < n);
    return s;
}

int main(void) {
    return sum_for(10) + sum_while(10) + sum_do(10);
}
