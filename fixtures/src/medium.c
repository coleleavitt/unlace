/* medium.c — ~50 small functions exercising varied control flow and operations.
   Used as a decompiler stress test: many call edges, mixed patterns. */

#include <stdint.h>

/* --- Arithmetic helpers (1-10) --- */
static int32_t f_add(int32_t a, int32_t b) { return a + b; }
static int32_t f_sub(int32_t a, int32_t b) { return a - b; }
static int32_t f_mul(int32_t a, int32_t b) { return a * b; }
static int32_t f_div(int32_t a, int32_t b) { return b ? a / b : 0; }
static int32_t f_mod(int32_t a, int32_t b) { return b ? a % b : 0; }
static int32_t f_neg(int32_t x) { return -x; }
static int32_t f_abs(int32_t x) { return x < 0 ? f_neg(x) : x; }
static int32_t f_min(int32_t a, int32_t b) { return a < b ? a : b; }
static int32_t f_max(int32_t a, int32_t b) { return a > b ? a : b; }
static int32_t f_clamp(int32_t x, int32_t lo, int32_t hi) {
    return f_min(f_max(x, lo), hi);
}

/* --- Bitwise helpers (11-16) --- */
static uint32_t f_and(uint32_t a, uint32_t b) { return a & b; }
static uint32_t f_or(uint32_t a, uint32_t b) { return a | b; }
static uint32_t f_xor(uint32_t a, uint32_t b) { return a ^ b; }
static uint32_t f_shl(uint32_t a, int n) { return a << n; }
static uint32_t f_shr(uint32_t a, int n) { return a >> n; }
static uint32_t f_rotl(uint32_t v, int n) {
    n &= 31;
    return (v << n) | (v >> (32 - n));
}

/* --- Branching functions (17-22) --- */
static int32_t f_sign(int32_t x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

static int32_t f_classify(int32_t x) {
    switch (f_mod(x, 5)) {
    case 0: return f_mul(x, 2);
    case 1: return f_add(x, 10);
    case 2: return f_sub(x, 5);
    case 3: return f_neg(x);
    default: return x;
    }
}

static int32_t f_ternary_chain(int32_t a, int32_t b, int32_t c) {
    return a > b ? (b > c ? c : b) : (a > c ? c : a);
}

static int32_t f_nested_if(int32_t x) {
    if (x < 10) {
        if (x < 5) return f_mul(x, 3);
        return f_add(x, 20);
    } else if (x < 100) {
        return f_sub(x, 10);
    }
    return f_div(x, 2);
}

static int32_t f_multi_switch(int32_t x) {
    switch (x & 0x7) {
    case 0: return 100;
    case 1: return 200;
    case 2: return 300;
    case 3: return 400;
    case 4: return 500;
    case 5: return 600;
    case 6: return 700;
    default: return 800;
    }
}

static int32_t f_bool_logic(int32_t a, int32_t b, int32_t c) {
    if (a > 0 && b > 0) return f_add(a, b);
    if (a > 0 || c > 0) return f_sub(a, c);
    return 0;
}

/* --- Loop functions (23-30) --- */
static int32_t f_sum_range(int32_t n) {
    int32_t s = 0;
    for (int32_t i = 0; i < n; i++)
        s = f_add(s, i);
    return s;
}

static int32_t f_factorial(int32_t n) {
    int32_t r = 1;
    while (n > 1) {
        r = f_mul(r, n);
        n = f_sub(n, 1);
    }
    return r;
}

static int32_t f_fib(int32_t n) {
    int32_t a = 0, b = 1;
    for (int32_t i = 0; i < n; i++) {
        int32_t t = f_add(a, b);
        a = b;
        b = t;
    }
    return a;
}

static int32_t f_gcd(int32_t a, int32_t b) {
    a = f_abs(a);
    b = f_abs(b);
    while (b) {
        int32_t t = f_mod(a, b);
        a = b;
        b = t;
    }
    return a;
}

static int32_t f_collatz_steps(int32_t n) {
    int32_t steps = 0;
    while (n > 1) {
        if (f_mod(n, 2) == 0)
            n = f_div(n, 2);
        else
            n = f_add(f_mul(n, 3), 1);
        steps++;
    }
    return steps;
}

static int32_t f_popcount(uint32_t x) {
    int32_t c = 0;
    while (x) {
        c += (int32_t)(x & 1);
        x = f_shr(x, 1);
    }
    return c;
}

static int32_t f_digit_sum(int32_t n) {
    n = f_abs(n);
    int32_t s = 0;
    do {
        s = f_add(s, f_mod(n, 10));
        n = f_div(n, 10);
    } while (n > 0);
    return s;
}

static int32_t f_count_down(int32_t n) {
    int32_t s = 0;
    do {
        s = f_add(s, n);
        n = f_sub(n, 1);
    } while (n > 0);
    return s;
}

/* --- Array / pointer functions (31-36) --- */
static void f_fill(int32_t *buf, int32_t n, int32_t val) {
    for (int32_t i = 0; i < n; i++)
        buf[i] = val;
}

static int32_t f_array_sum(const int32_t *buf, int32_t n) {
    int32_t s = 0;
    for (int32_t i = 0; i < n; i++)
        s = f_add(s, buf[i]);
    return s;
}

static int32_t f_array_max(const int32_t *buf, int32_t n) {
    int32_t m = buf[0];
    for (int32_t i = 1; i < n; i++)
        m = f_max(m, buf[i]);
    return m;
}

static int32_t f_array_min(const int32_t *buf, int32_t n) {
    int32_t m = buf[0];
    for (int32_t i = 1; i < n; i++)
        m = f_min(m, buf[i]);
    return m;
}

static int32_t f_dot_product(const int32_t *a, const int32_t *b, int32_t n) {
    int32_t s = 0;
    for (int32_t i = 0; i < n; i++)
        s = f_add(s, f_mul(a[i], b[i]));
    return s;
}

static int32_t f_linear_search(const int32_t *buf, int32_t n, int32_t key) {
    for (int32_t i = 0; i < n; i++)
        if (buf[i] == key) return i;
    return -1;
}

/* --- Compound / composition functions (37-46) --- */
static int32_t f_power(int32_t base, int32_t exp) {
    int32_t r = 1;
    for (int32_t i = 0; i < exp; i++)
        r = f_mul(r, base);
    return r;
}

static int32_t f_sum_of_squares(int32_t n) {
    int32_t s = 0;
    for (int32_t i = 1; i <= n; i++)
        s = f_add(s, f_mul(i, i));
    return s;
}

static int32_t f_is_prime(int32_t n) {
    if (n < 2) return 0;
    for (int32_t i = 2; f_mul(i, i) <= n; i++)
        if (f_mod(n, i) == 0) return 0;
    return 1;
}

static int32_t f_nth_prime(int32_t n) {
    int32_t count = 0, candidate = 2;
    while (count < n) {
        if (f_is_prime(candidate)) count++;
        if (count < n) candidate++;
    }
    return candidate;
}

static int32_t f_lcm(int32_t a, int32_t b) {
    int32_t g = f_gcd(a, b);
    return g ? f_div(f_mul(a, b), g) : 0;
}

static uint32_t f_hash_mix(uint32_t x) {
    x = f_xor(x, f_shr(x, 16));
    x = f_mul(x, 0x45d9f3b);
    x = f_xor(x, f_shr(x, 16));
    return x;
}

static int32_t f_reduce(const int32_t *buf, int32_t n) {
    int32_t acc = 0;
    for (int32_t i = 0; i < n; i++)
        acc = f_add(acc, f_classify(buf[i]));
    return acc;
}

static int32_t f_map_sum(int32_t n) {
    int32_t s = 0;
    for (int32_t i = 0; i < n; i++)
        s = f_add(s, f_nested_if(i));
    return s;
}

static int32_t f_chain(int32_t x) {
    x = f_add(x, 1);
    x = f_mul(x, 2);
    x = f_sub(x, 3);
    x = f_clamp(x, 0, 1000);
    x = f_abs(f_sub(x, 500));
    return x;
}

static int32_t f_multi_call(int32_t a, int32_t b) {
    int32_t s = f_sign(a);
    int32_t g = f_gcd(a, b);
    int32_t p = f_popcount((uint32_t)f_abs(a));
    return f_add(f_add(s, g), p);
}

/* --- Recursive functions (47-49) --- */
static int32_t f_rec_fib(int32_t n) {
    if (n <= 1) return n;
    return f_add(f_rec_fib(f_sub(n, 1)), f_rec_fib(f_sub(n, 2)));
}

static int32_t f_rec_power(int32_t base, int32_t exp) {
    if (exp == 0) return 1;
    if (f_mod(exp, 2) == 0) {
        int32_t half = f_rec_power(base, f_div(exp, 2));
        return f_mul(half, half);
    }
    return f_mul(base, f_rec_power(base, f_sub(exp, 1)));
}

static int32_t f_ackermann(int32_t m, int32_t n) {
    if (m == 0) return f_add(n, 1);
    if (n == 0) return f_ackermann(f_sub(m, 1), 1);
    return f_ackermann(f_sub(m, 1), f_ackermann(m, f_sub(n, 1)));
}

/* --- Entry point (50) --- */
int main(void) {
    int32_t buf[16];
    for (int32_t i = 0; i < 16; i++)
        buf[i] = f_mul(i, 3);

    int32_t r = 0;
    r = f_add(r, f_sum_range(20));
    r = f_add(r, f_factorial(6));
    r = f_add(r, f_fib(10));
    r = f_add(r, f_gcd(48, 36));
    r = f_add(r, f_collatz_steps(27));
    r = f_add(r, f_popcount(0xDEADBEEF));
    r = f_add(r, f_digit_sum(12345));
    r = f_add(r, f_count_down(10));
    r = f_add(r, f_array_sum(buf, 16));
    r = f_add(r, f_array_max(buf, 16));
    r = f_add(r, f_array_min(buf, 16));
    r = f_add(r, f_dot_product(buf, buf, 16));
    r = f_add(r, f_linear_search(buf, 16, 15));
    r = f_add(r, f_power(2, 10));
    r = f_add(r, f_sum_of_squares(10));
    r = f_add(r, f_nth_prime(10));
    r = f_add(r, f_lcm(12, 18));
    r = f_add(r, (int32_t)f_hash_mix(42));
    r = f_add(r, f_reduce(buf, 16));
    r = f_add(r, f_map_sum(20));
    r = f_add(r, f_chain(100));
    r = f_add(r, f_multi_call(48, 36));
    r = f_add(r, f_rec_fib(8));
    r = f_add(r, f_rec_power(2, 8));
    r = f_add(r, f_ackermann(2, 3));
    r = f_add(r, f_multi_switch(42));
    r = f_add(r, f_bool_logic(5, 10, 3));
    r = f_add(r, (int32_t)f_rotl(0xABCD, 4));
    r = f_add(r, f_ternary_chain(3, 1, 2));

    f_fill(buf, 16, 0);  /* side-effect to prevent dead-code elimination */

    return f_mod(r, 256);
}
