__int64 __fastcall sub_21293C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdi
  void (*v4)(); // rcx
  __int64 v5; // [rsp+18h] [rbp-50h] BYREF
  const char *v6; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 184);
  if ( (unsigned __int8)sub_2153CB0(a1, &v5) )
  {
    v6 = "expected symbol name";
    v7 = 259;
    return sub_21543E0(a1, &v6, 0, 0);
  }
  else
  {
    result = sub_21544B0(a1);
    if ( !(_BYTE)result )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(void (**)())(*(_QWORD *)v3 + 816LL);
      if ( v4 != nullsub_1411 )
      {
        ((void (__fastcall *)(__int64, __int64, __int64))v4)(v3, v5, v1);
        return 0;
      }
    }
  }
  return result;
}
