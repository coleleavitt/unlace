__int64 __fastcall sub_7F5F30(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 i; // r13
  __int64 v9; // rsi
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(__int64 **)(a2 + 96);
  if ( v3 && !(unsigned __int8)sub_7EEDC0((__int64)a1, *v3, (__int64)(v3 + 1)) )
    return 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  v5 = v4 == sub_5F7B90 ? *(_QWORD *)(a2 + 88) : v4(a2);
  v6 = sub_7EBA80(a1, v5);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = *(_QWORD *)(a2 + 104);
  for ( i = v7 + 16LL * *(unsigned int *)(a2 + 112); i != v7; v7 += 16 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
    {
      if ( !(unsigned __int8)sub_7EBA80(a1, v9) )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = nullptr;
    v11 = sub_79A2B0(a2);
    v12 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v10 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v12 != v10 )
    {
      while ( 1 )
      {
        v13 = *a1;
        v15[0] = *v10;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v15[0], v15[0], v15, a1, v13) )
          break;
        if ( (__int64 *)v12 == ++v10 )
          return v6;
      }
      return 0;
    }
  }
  return v6;
}

