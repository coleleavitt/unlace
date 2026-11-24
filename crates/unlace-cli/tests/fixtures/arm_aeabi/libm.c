double fmod(double x, double y);
double sin(double x);
double wrap(double a, double b) { return fmod(a, b) + 1.0; }
double wave(double t) { return sin(t) * 2.0; }
