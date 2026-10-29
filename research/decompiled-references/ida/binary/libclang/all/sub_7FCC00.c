__int64 __fastcall sub_7FCC00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // r9
  unsigned __int64 v15; // rax
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, a2, a3, a4, a5, a6) )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 )
  {
    v7 = sub_79B790(a2);
    v8 = 0;
    if ( !v7 )
      goto LABEL_5;
  }
  else
  {
    v15 = sub_77BC00(a2);
    if ( !(unsigned __int8)sub_7EBA80(a1, v15) )
      return 0;
    v8 = 0;
    if ( !(unsigned __int8)sub_79B790(a2) )
      goto LABEL_5;
  }
  v8 = sub_79AC10(a2);
LABEL_5:
  v9 = sub_7E1600(a1, v8);
  if ( !(_BYTE)v9 )
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
        v16[0] = *v10;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v16[0], v16[0], v16, a1, v13) )
          break;
        if ( (__int64 *)v12 == ++v10 )
          return v9;
      }
      return 0;
    }
  }
  return v9;
}

