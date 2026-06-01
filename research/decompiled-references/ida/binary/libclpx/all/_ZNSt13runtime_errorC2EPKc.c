// Alternative name is '_ZNSt13runtime_errorC1EPKc'
unsigned __int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  *(_QWORD *)this = (char *)&`vtable for'std::runtime_error + 16;
  std::string::string();
  return __readfsqword(0x28u) ^ v3;
}

