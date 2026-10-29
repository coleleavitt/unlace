// Alternative name is '_ZNSt11logic_errorC2EPKc'
unsigned __int64 __fastcall std::logic_error::logic_error(std::logic_error *this, const char *a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  *(_QWORD *)this = (char *)&`vtable for'std::logic_error + 16;
  std::string::string();
  return __readfsqword(0x28u) ^ v3;
}

