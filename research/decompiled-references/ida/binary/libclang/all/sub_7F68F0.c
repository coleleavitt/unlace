__int64 __fastcall sub_7F68F0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rsi
  __int64 *v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r13
  __int64 v9; // r9
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 40)) )
    return 0;
  v5 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v5 = sub_79AC10(a2);
  v3 = sub_7E1600(a1, v5);
  if ( !(_BYTE)v3 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v6 = nullptr;
    v7 = sub_79A2B0(a2);
    v8 = *v7 + 8LL * *((unsigned int *)v7 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v6 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v8 != v6 )
    {
      while ( 1 )
      {
        v9 = *a1;
        v10[0] = *v6;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v10[0], v10[0], v10, a1, v9) )
          break;
        if ( (__int64 *)v8 == ++v6 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}

