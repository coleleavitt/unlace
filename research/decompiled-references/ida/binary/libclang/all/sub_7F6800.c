__int64 __fastcall sub_7F6800(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // r9
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7ECC20(a1, *(_QWORD *)(a2 + 56)) || !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 64)) )
    return 0;
  v5 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v5 = sub_79AC10(a2);
  v3 = sub_7E1600(a1, v5);
  if ( !(_BYTE)v3 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v6 = sub_79A2B0(a2);
    v7 = *v6 + 8LL * *((unsigned int *)v6 + 2);
    v8 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v8 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v7 != v8 )
    {
      v9 = v8;
      while ( 1 )
      {
        v10 = *a1;
        v11[0] = *v9;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v11[0], v11[0], v11, a1, v10) )
          break;
        if ( (__int64 *)v7 == ++v9 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}

