__int64 __fastcall sub_7F4070(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  char v9; // al
  __int64 v10; // rsi
  __int64 *v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // r13
  __int64 v14; // r9
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  v9 = sub_79B790(a2);
  v10 = 0;
  if ( v9 )
    v10 = sub_79AC10(a2);
  v7 = sub_7E1600(a1, v10);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = nullptr;
    v12 = sub_79A2B0(a2);
    v13 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v11 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v13 != v11 )
    {
      while ( 1 )
      {
        v14 = *a1;
        v15[0] = *v11;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v15[0], v15[0], v15, a1, v14) )
          break;
        if ( (__int64 *)v13 == ++v11 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}

