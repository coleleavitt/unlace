__int64 __fastcall sub_7FCE40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
  {
    v12 = sub_77BC00(a2);
    if ( !(unsigned __int8)sub_7EBA80(a1, v12) )
      return 0;
  }
  v7 = (__int64 *)(a2 + 104);
  v8 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
  if ( a2 + 104 != v8 )
  {
    do
    {
      v9 = *a1;
      v18[0] = *v7;
      if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v18[0], v18[0], v18, a1, v9) )
        return 0;
      ++v7;
    }
    while ( (__int64 *)v8 != v7 );
  }
  v13 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v13 = sub_79AC10(a2);
  v10 = sub_7E1600(a1, v13);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = nullptr;
    v15 = sub_79A2B0(a2);
    v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v14 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v16 != v14 )
    {
      while ( 1 )
      {
        v17 = *a1;
        v18[0] = *v14;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v18[0], v18[0], v18, a1, v17) )
          break;
        if ( (__int64 *)v16 == ++v14 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}

