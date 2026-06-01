void *__fastcall sub_21DF7C0(__int64 a1)
{
  void *result; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  void *v4; // r9
  _BYTE *v5; // rdx
  void *v6; // [rsp+0h] [rbp-18h] BYREF
  void *v7; // [rsp+8h] [rbp-10h] BYREF

  result = sub_21D7980(a1);
  v6 = result;
  if ( result )
  {
    v5 = *(_BYTE **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v5 == 73 )
    {
      result = sub_21DEC40(a1, nullptr, (__int64)v5, v2, v3, v4);
      v7 = result;
      if ( result )
        return sub_21D5E20(a1 + 808, (unsigned __int64 *)&v6, (unsigned __int64 *)&v7);
    }
  }
  return result;
}
