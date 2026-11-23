
#include <stdexcept>
#include <cstdio>
extern "C" int risky(int x);
extern "C" void release(int *p);
struct Guard { int *p; Guard(int *q):p(q){} ~Guard(){ release(p); } };
__attribute__((noinline)) int risky(int x){ if (x > 10) throw std::runtime_error("big"); return x * 2; }
__attribute__((noinline)) void release(int *p){ std::printf("release %d\n", *p); }
__attribute__((noinline)) int catcher(int x){
  try { return risky(x); }
  catch (const std::runtime_error &e) { std::puts(e.what()); return -1; }
  catch (...) { return -2; }
}
__attribute__((noinline)) int cleanup(int x){
  int n = x;
  { Guard g(&n); n += risky(x); n += risky(x + 1); }
  return n;
}
__attribute__((noinline)) int typed(int x){
  try { return risky(x); }
  catch (const std::runtime_error &e) { return -3; }
}
int main(int c, char **v){ return catcher(c) + cleanup(c) + typed(c); }
