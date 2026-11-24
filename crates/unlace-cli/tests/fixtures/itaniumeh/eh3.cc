// Fixture source for tests/stages/unlace-itaniumeh-clang.toml (eh3_x86_64_clang.so):
//   clang++ -O2 -fPIC -shared -o eh3_x86_64_clang.so eh3.cc   (clang 22.1.8)
// clang starts a call-site range at the call's argument set-up, not at the call.
struct Base { int c; Base(int v) : c(v) {} virtual ~Base(); virtual int code() const { return c; } };
struct Derived : Base { Derived(int v) : Base(v) {} ~Derived() override; int code() const override { return c * 2; } };
struct Guard { int *p; explicit Guard(int *q) : p(q) { ++*p; } ~Guard() { --*p; release(p); } static void release(int *); };
Base::~Base() {}
Derived::~Derived() {}

extern void work(int);
extern int compute(int);
extern void log_msg(const char *);
extern int g_count;

int f_single(int v) {
  try { work(v); } catch (int e) { return e; }
  return 0;
}

int f_multi(int v) {
  try { work(v); }
  catch (Derived &d) { return d.code() + 1; }
  catch (Base &b) { return b.code() + 2; }
  catch (int e) { return e + 3; }
  catch (...) { return -1; }
  return 0;
}

void f_rethrow(int v) {
  try { work(v); } catch (...) { log_msg("rethrow"); throw; }
}

int f_nested(int v) {
  try {
    try { work(v); } catch (int e) { work(e + 1); }
    work(v + 2);
  } catch (Base &b) { return -b.code(); }
  return v;
}

int f_dtor(int v) {
  Guard g(&g_count);
  work(v);
  return v + 1;
}

int f_dtor_catch(int v) {
  try { Guard g(&g_count); work(v); work(v + 1); }
  catch (const Base &b) { return b.code(); }
  return 0;
}

int f_loop(int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    try { work(i); sum += i; } catch (int e) { sum -= e; }
  }
  return sum;
}

int f_throw(int v) {
  if (v < 0) throw Derived(v);
  return compute(v);
}

int f_value(int v) {
  try { return compute(v) * 3; } catch (const Base &e) { return e.code(); }
}

int f_ifelse(int v) {
  int r;
  try { r = compute(v); } catch (int e) { r = e; log_msg("int"); }
  if (r > 10) log_msg("big");
  return r;
}
