#include <stdarg.h>

struct point { int x; int y; };
struct node { struct node *next; int value; };

int g_table[16];
volatile int g_sink;

int sum_array(const int *a, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int fib(int n);
unsigned str_len(const char *s);
int classify(int c) {
    switch (c) {
    case 0: return 13;
    case 1: return 7;
    case 2: return 99;
    case 3: return 42;
    case 4: return 5;
    case 5: return 81;
    case 6: return 3;
    case 7: return 64;
    default: return -1;
    }
}

int dispatch(int op, int a, int b) {
    switch (op) {
    case 0: return a + b;
    case 1: return a - b;
    case 2: return a * b;
    case 3: return a & b;
    case 4: return a | b;
    case 5: return a ^ b;
    case 6: return a << (b & 7);
    case 7: return fib(a);
    case 8: return (int)str_len("hello");
    default: return 0;
    }
}

#ifndef NO_AGGRET
struct point make_point(int x, int y) {
    struct point p;
    p.x = y;
    p.y = x;
    return p;
}
#endif

#ifndef NO_FLOAT
float scale(float v, int n) {
    return v * (float)n + 0.5f;
}
#endif

int point_dot(const struct point *a, const struct point *b) {
    return a->x * b->x + a->y * b->y;
}

int list_sum(const struct node *n) {
    int s = 0;
    while (n) {
        s += n->value;
        n = n->next;
    }
    return s;
}

#ifndef NO_VARARGS
int add_all(int count, ...) {
    va_list ap;
    int s = 0;
    va_start(ap, count);
    for (int i = 0; i < count; i++)
        s += va_arg(ap, int);
    va_end(ap);
    return s;
}
#endif

int fib(int n) {
    if (n < 2)
        return n;
    return fib(n - 1) + fib(n - 2);
}

unsigned str_len(const char *s) {
    unsigned n = 0;
    while (s[n])
        n++;
    return n;
}

void fill_table(int v) {
    for (int i = 0; i < 16; i++)
        g_table[i] = v * i;
}

int caller(int x) {
    struct point p = { x, x + 1 };
    struct point q = { 3, 4 };
    fill_table(x);
#ifndef NO_VARARGS
    g_sink = add_all(3, x, 2, 3);
#endif
    return point_dot(&p, &q) + classify(x & 7) + fib(5);
}

long long mul_wide(long long a, long long b) {
    return a * b + (a >> 3);
}
