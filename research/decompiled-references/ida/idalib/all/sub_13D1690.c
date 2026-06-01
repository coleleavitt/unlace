unsigned __int64 __fastcall sub_13D1690(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int8 v7; // cl
  __int64 v8; // rsi
  unsigned __int8 v9; // dl
  char v10; // cl
  _BYTE *v11; // rbx
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // rax
  unsigned __int8 v15; // [rsp+Fh] [rbp-89h] BYREF
  unsigned __int8 *v16[17]; // [rsp+10h] [rbp-88h] BYREF

  v5 = *a2;
  if ( (_BYTE)v5 == 92 )
  {
    v11 = a2 + 1;
    v12 = 1;
  }
  else
  {
    if ( (_BYTE)v5 != 63 || a2[1] != 63 )
      return v5 | 0x100000000LL;
    v7 = a2[2];
    v8 = 0;
    if ( a3 )
      v8 = a1;
    if ( (unsigned __int8)(v7 - 33) > 0x1Du )
      return v5 | 0x100000000LL;
    v9 = byte_26115F0[(unsigned __int8)(v7 - 33)];
    v10 = *(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL);
    v15 = v9;
    if ( !v9 )
      return v5 | 0x100000000LL;
    if ( (v10 & 1) == 0 )
    {
      if ( v8 && !*(_BYTE *)(v8 + 26) )
      {
        sub_13D1530((__int64)v16, v8, (__int64)a2, 1306);
        sub_AEA040((__int64)v16);
        v5 = *a2;
      }
      return v5 | 0x100000000LL;
    }
    if ( v8 )
    {
      if ( !*(_BYTE *)(v8 + 26) )
      {
        sub_13D1530((__int64)v16, v8, (__int64)a2, 1304);
        sub_AEC220(v16, &v15, 1);
        sub_AEA040((__int64)v16);
        v9 = v15;
        if ( !v15 )
        {
          v5 = *a2;
          return v5 | 0x100000000LL;
        }
      }
    }
    if ( a3 )
      *(_WORD *)(a3 + 18) |= 8u;
    v11 = a2 + 3;
    v12 = 3;
    if ( v9 != 92 )
      return v9 | 0x300000000LL;
  }
  if ( (byte_2411740[2 * (unsigned __int8)*v11] & 7) == 0 )
    return (v12 << 32) | 0x5C;
  v13 = sub_13D1580((__int64)v11);
  if ( !v13 )
    return (v12 << 32) | 0x5C;
  if ( a3 )
  {
    *(_WORD *)(a3 + 18) |= 8u;
    if ( *v11 != 10 && *v11 != 13 && !*(_BYTE *)(a1 + 26) )
    {
      sub_13D1530((__int64)v16, a1, (__int64)v11, 1021);
      sub_AEA040((__int64)v16);
    }
  }
  v14 = sub_13D1690(a1, &v11[v13], a3);
  return ((unsigned __int64)(unsigned int)(HIDWORD(v14) + v12 + v13) << 32) | (unsigned int)v14;
}
