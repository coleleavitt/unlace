// Alternative name is '_ZNSt15underflow_errorC2EPKc'
__int64 __fastcall std::underflow_error::underflow_error(std::underflow_error *this, const char *a2)
{
  std::runtime_error::runtime_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::underflow_error + 16;
  return (__int64)&`vtable for'std::underflow_error + 16;
}
