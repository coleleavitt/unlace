// Fixture for the msvceh pass (msvceh_x64.exe), linked without a C runtime:
//   clang-cl --target=x86_64-pc-windows-msvc /c /O1 /EHsc /GR /GS- msvceh_x64.cpp msvceh_stubs.c
//   lld-link /lib /def:msvceh_vcruntime140.def /machine:x64 /out:vcruntime140.lib
//   lld-link /nodefaultlib /entry:entry /subsystem:console msvceh_x64.obj msvceh_stubs.obj \
//     vcruntime140.lib /out:msvceh_x64.exe
struct Err {
  int code;
};
struct Base {
  virtual ~Base() {}
  int v;
};
struct Derived : Base {};

void operator delete(void *, unsigned long long) noexcept {}

__declspec(noinline) int thrower(int x) {
  if (x == 1) throw Err{x};
  if (x == 2) throw Derived();
  if (x == 3) throw 7;
  return 0;
}

__declspec(noinline) int catcher(int x) {
  try {
    return thrower(x);
  } catch (Err &e) {
    return e.code;
  } catch (Base &) {
    return 2;
  } catch (...) {
    return -1;
  }
}

__declspec(noinline) int rethrower(int x) {
  try {
    thrower(x);
  } catch (...) {
    throw;
  }
  return 0;
}

extern "C" int entry() { return catcher(1) + rethrower(0); }
