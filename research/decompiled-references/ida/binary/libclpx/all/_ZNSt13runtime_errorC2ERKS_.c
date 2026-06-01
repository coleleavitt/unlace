// Alternative name is '_ZNSt13runtime_errorC1ERKS_'
__int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *a2)
{
  std::string *v2; // rdi

  v2 = (std::runtime_error *)((char *)this + 8);
  *((_QWORD *)v2 - 1) = (char *)&`vtable for'std::runtime_error + 16;
  return std::string::string(v2, (const std::runtime_error *)((char *)a2 + 8));
}

