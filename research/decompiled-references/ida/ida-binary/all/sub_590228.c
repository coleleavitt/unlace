__int64 __fastcall sub_590228(__int64 a1, __int64 a2)
{
  const char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char s[4096]; // [rsp+10h] [rbp-1040h] BYREF
  char v9[48]; // [rsp+1010h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+1040h] [rbp-10h] BYREF

  if ( (unsigned __int8)sub_5AD7A6(v10) != 1 || (unsigned __int8)sub_5AD7C0(v10, v9, 37) != 1 )
    return 0;
  v4 = (const char *)std::string::c_str((std::string *)(a1 + 48));
  snprintf(s, 0x1000u, "%s/%s.dmp", v4, v9);
  ((void (__fastcall *)(__int64, char *, char *, __int64, __int64, __int64, __int64, __int64))std::string::operator=)(
    a2,
    s,
    s,
    v5,
    v6,
    v7,
    a2,
    a1);
  return 1;
}
