// Alternative name is '_ZNSt14overflow_errorC1EPKc'
__int64 __fastcall std::overflow_error::overflow_error(std::overflow_error *this, const char *a2)
{
  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::overflow_error + 16;
  return (__int64)&`vtable for'std::overflow_error + 16;
}
