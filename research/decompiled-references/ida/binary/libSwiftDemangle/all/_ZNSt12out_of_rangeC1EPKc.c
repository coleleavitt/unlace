// Alternative name is '_ZNSt12out_of_rangeC2EPKc'
__int64 __fastcall std::out_of_range::out_of_range(std::out_of_range *this, const char *a2)
{
  std::logic_error::logic_error(this, a2);
  *(_QWORD *)this = (char *)&`vtable for'std::out_of_range + 16;
  return (__int64)&`vtable for'std::out_of_range + 16;
}

