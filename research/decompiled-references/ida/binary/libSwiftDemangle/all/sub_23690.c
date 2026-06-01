__int64 __fastcall sub_23690(std::string *this, _QWORD *a2)
{
  size_t v2; // rax
  char v4[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  std::string::append(this, "#", 1u);
  __snprintf_chk(v4, 32, 1, 32, "%llu", *a2);
  v2 = strlen(v4);
  std::string::append(this, v4, v2);
  return std::string::append(this, " ", 1u);
}

