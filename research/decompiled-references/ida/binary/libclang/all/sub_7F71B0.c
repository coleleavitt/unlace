__int64 __fastcall sub_7F71B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // r9
  unsigned int v4; // r13d
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // rbp
  __int64 v11; // r9
  __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v12[0] = *(_QWORD *)(a2 + 48);
  if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v12[0], v12[0], v12, a1, v3)
    || !(unsigned __int8)sub_7ECC20(a1, *(_QWORD *)(a2 + 56)) )
  {
    return 0;
  }
  v6 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v6 = sub_79AC10(a2);
  v4 = sub_7E1600(a1, v6);
  if ( !(_BYTE)v4 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v7 = sub_79A2B0(a2);
    v8 = *v7 + 8LL * *((unsigned int *)v7 + 2);
    v9 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v9 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v8 != v9 )
    {
      v10 = v9;
      while ( 1 )
      {
        v11 = *a1;
        v12[0] = *v10;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v12[0], v12[0], v12, a1, v11) )
          break;
        if ( (__int64 *)v8 == ++v10 )
          return v4;
      }
      return 0;
    }
  }
  return v4;
}

