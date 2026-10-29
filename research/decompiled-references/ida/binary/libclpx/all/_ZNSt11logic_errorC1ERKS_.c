// Alternative name is '_ZNSt11logic_errorC2ERKS_'
__int64 __fastcall std::logic_error::logic_error(std::logic_error *this, const std::logic_error *a2)
{
  std::string *v2; // rdi

  v2 = (std::logic_error *)((char *)this + 8);
  *((_QWORD *)v2 - 1) = (char *)&`vtable for'std::logic_error + 16;
  return std::string::string(v2, (const std::logic_error *)((char *)a2 + 8));
}

