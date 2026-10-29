__int64 __fastcall sub_7F3AC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r13
  __int64 *v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // r9
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7EF1F0((__int64)a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), a4, a5, a6)
    || !(unsigned __int8)sub_7F0C20(a1, *(_QWORD *)(a2 + 40), *(__int64 **)(a2 + 80)) )
  {
    return 0;
  }
  v9 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v9 = sub_79AC10(a2);
  v7 = sub_7E1600(a1, v9);
  if ( !(_BYTE)v7 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = sub_79A2B0(a2);
    v11 = *v10 + 8LL * *((unsigned int *)v10 + 2);
    v12 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v12 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v11 != v12 )
    {
      v13 = v12;
      while ( 1 )
      {
        v14 = *a1;
        v15[0] = *v13;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v15[0], v15[0], v15, a1, v14) )
          break;
        if ( (__int64 *)v11 == ++v13 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}

