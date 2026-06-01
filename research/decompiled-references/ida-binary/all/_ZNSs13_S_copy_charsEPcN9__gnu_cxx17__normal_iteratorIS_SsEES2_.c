_BYTE *__fastcall std::string::_S_copy_chars(std::string *a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  char **v4; // rax
  __int64 v6; // [rsp+8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h] BYREF
  std::string *v8; // [rsp+18h] [rbp-18h]

  v8 = a1;
  v7 = a2;
  v6 = a3;
  v3 = *(char **)sub_596C30(&v6);
  v4 = (char **)sub_596C30(&v7);
  return std::string::_S_copy_chars(v8, *v4, v3, *v4);
}
