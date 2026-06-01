__int64 __fastcall sub_7F4640(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0270(a1, a2, a3, a4, a5, a6) )
    return 0;
  v7 = a2 + 64;
  if ( !a2 )
    v7 = 0;
  v8 = sub_7E1600(a1, v7);
  if ( !(_BYTE)v8 )
    return 0;
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
        v14[0] = *v10;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v14[0], v14[0], v14, a1, v13) )
          break;
        if ( (__int64 *)v12 == ++v10 )
          return v8;
      }
      return 0;
    }
  }
  return v8;
}

