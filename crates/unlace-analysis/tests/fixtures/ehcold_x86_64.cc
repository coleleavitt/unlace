// ehcold fixture: g++ -O2 -o ehcold_x86_64 ehcold_x86_64.cc && strip
#include <string>
#include <vector>
__attribute__((noinline)) void may_throw(int x) { if (x == 42) throw x; }
__attribute__((noinline)) int work(int n) {
  std::vector<std::string> v;
  for (int i = 0; i < n; i++) { v.emplace_back(std::to_string(i)); may_throw(i); }
  std::string s;
  for (auto &e : v) { s += e; may_throw((int)s.size()); }
  return (int)s.size();
}
int main(int c, char **) { try { return work(c); } catch (int) { return 1; } }
