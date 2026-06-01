__int64 __fastcall sub_9EAAF0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // r13
  __int64 v3; // rbp
  unsigned __int8 (__fastcall ***v4)(_QWORD, int *, __int64, __int64); // r13
  __int64 v5; // r15
  unsigned __int8 (__fastcall *v6)(_QWORD, int *, __int64, __int64); // r14
  char v7; // al
  bool v9; // zf
  __int64 v10; // [rsp+8h] [rbp-70h]
  int v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h]

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
  v3 = sub_C94CC0(a2);
  if ( v2 == sub_9E9FB0 )
  {
    if ( !v3 )
      return sub_BD44F0(a1, a2);
    v4 = *(unsigned __int8 (__fastcall ****)(_QWORD, int *, __int64, __int64))(a1 + 16);
    v5 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 40);
    v6 = **v4;
    v12 = v3;
    v11 = sub_AFA7A0(v3);
    if ( v6(v4, &v11, v5, v10) )
    {
      v9 = *(_BYTE *)(a1 + 24) == 0;
      *(_BYTE *)(a1 + 25) = 1;
      if ( v9 )
        return 0;
    }
    v7 = sub_BC97E0(a1, v3);
  }
  else
  {
    v7 = v2(a1, v3);
  }
  if ( !v7 )
    return 0;
  return sub_BD44F0(a1, a2);
}
