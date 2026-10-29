// Alternative name is '_ZNSt11range_errorC1EPKc'
__int64 __fastcall std::range_error::range_error(std::range_error *this, const char *a2)
{
  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::range_error + 16;
  return (__int64)&`vtable for'std::range_error + 16;
}

