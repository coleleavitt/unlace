float fadd(float a, float b) { return a + b; }
float fmul(float a, float b) { return a * b; }
double dadd(double a, double b) { return a + b; }
double ddiv(double a, double b) { return a / b; }
int flt(float a, float b) { return a < b; }
int dlt(double a, double b) { return a < b; }
int toint(float a) { return (int)a; }
unsigned dtou(double a) { return (unsigned)a; }
double i2d(int a) { return a; }
double f2d(float a) { return a; }
float d2f(double a) { return a; }
long long d2l(double a) { return (long long)a; }
double l2d(long long a) { return a; }
float u2f(unsigned a) { return a; }
double dscale(double v, int n) { return v * n; }
void cp(char *d, const char *s, unsigned n) { __builtin_memcpy(d, s, n); }
void fill(char *d, unsigned n) { __builtin_memset(d, 7, n); }
long long shl(long long a, int n) { return a << n; }

unsigned long long mul_wide(unsigned a, unsigned b) { return (unsigned long long)a * b; }
