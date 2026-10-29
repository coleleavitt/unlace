__int64 __fastcall sub_7F64E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned int v10; // r13d
  __int64 *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  v7 = *(_BYTE *)(a2 + 68);
  if ( (v7 & 1) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 72);
    if ( (~v7 & 0xC) != 0 && (v7 & 0xC) != 0 )
      v8 = *(_QWORD *)(v8 + 8);
    if ( !(unsigned __int8)sub_7EBA80(a1, v8) )
      return 0;
    v7 = *(_BYTE *)(a2 + 68);
  }
  if ( (~v7 & 0xC) != 0 && (v7 & 0xC) != 0 )
  {
    v16 = sub_781770(a2);
    if ( !(unsigned __int8)sub_7EBA80(a1, v16) )
      return 0;
  }
  v9 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v9 = sub_79AC10(a2);
  v10 = sub_7E1600(a1, v9);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v12 = nullptr;
    v13 = sub_79A2B0(a2);
    v14 = *v13 + 8LL * *((unsigned int *)v13 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v12 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v14 != v12 )
    {
      while ( 1 )
      {
        v15 = *a1;
        v17[0] = *v12;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v17[0], v17[0], v17, a1, v15) )
          break;
        if ( (__int64 *)v14 == ++v12 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}

