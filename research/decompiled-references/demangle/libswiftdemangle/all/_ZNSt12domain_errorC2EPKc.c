// Alternative name is '_ZNSt12domain_errorC1EPKc'
__int64 __fastcall std::domain_error::domain_error(std::domain_error *this, const char *a2)
{
  std::logic_error::logic_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::domain_error + 16;
  return (__int64)&`vtable for'std::domain_error + 16;
}
