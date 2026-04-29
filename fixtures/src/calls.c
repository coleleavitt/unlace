static int add(int a, int b) { return a + b; }
static int sub(int a, int b) { return a - b; }
static int mul(int a, int b) { return a * b; }
static int square(int x) { return mul(x, x); }
static int cube(int x) { return mul(square(x), x); }
static int abs_val(int x) { return x < 0 ? -x : x; }
static int max(int a, int b) { return a > b ? a : b; }
static int min(int a, int b) { return a < b ? a : b; }
static int clamp(int x, int lo, int hi) { return min(max(x, lo), hi); }

int compute(int x) {
    int a = add(x, 10);
    int b = sub(a, 3);
    int c = square(b);
    int d = cube(2);
    int e = abs_val(sub(c, d));
    return clamp(e, 0, 100);
}

int main(void) {
    return compute(5);
}
