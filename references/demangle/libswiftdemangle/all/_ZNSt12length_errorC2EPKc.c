// Alternative name is '_ZNSt12length_errorC1EPKc'
__int64 __fastcall std::length_error::length_error(std::length_error *this, const char *a2)
{
  std::logic_error::logic_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::length_error + 16;
  return (__int64)&`vtable for'std::length_error + 16;
}
