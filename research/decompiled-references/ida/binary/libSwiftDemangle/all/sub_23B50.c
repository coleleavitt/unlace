std::string *__fastcall sub_23B50(std::string *this, __int64 a2)
{
  size_t v2; // rax
  char _0[40]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  __snprintf_chk(_0, 32, 1, 32, "%llu", a2);
  v2 = strlen(_0);
  std::string::append(this, _0, v2);
  return this;
}

