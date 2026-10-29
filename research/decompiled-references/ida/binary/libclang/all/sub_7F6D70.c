__int64 __fastcall sub_7F6D70(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 64)) )
    return 0;
  v5 = sub_7A8C80(a2);
  if ( v5 )
  {
    v6 = *a1;
    v12[0] = v5;
    if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v5, v5, v12, a1, v6) )
      return 0;
  }
  v7 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v7 = sub_79AC10(a2);
  v3 = sub_7E1600(a1, v7);
  if ( !(_BYTE)v3 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v8 = nullptr;
    v9 = sub_79A2B0(a2);
    v10 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v8 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v10 != v8 )
    {
      while ( 1 )
      {
        v11 = *a1;
        v12[0] = *v8;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v12[0], v12[0], v12, a1, v11) )
          break;
        if ( (__int64 *)v10 == ++v8 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}

