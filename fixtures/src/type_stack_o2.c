#include <stdint.h>

struct Pair {
    int left;
    int right;
};

__attribute__((noinline))
int pair_score(struct Pair *p, int bias) {
    int sum = p->left + p->right;
    int scaled = sum * 3;
    return scaled - bias;
}

__attribute__((noinline))
int array_mix(int *buf, int n) {
    int acc = 0;
    for (int i = 0; i < n; i++)
        acc += buf[i] * (i + 1);
    return acc;
}

int main(void) {
    int values[3] = {2, 4, 6};
    struct Pair p = {7, 11};
    return (pair_score(&p, 5) + array_mix(values, 3)) & 0xff;
}
