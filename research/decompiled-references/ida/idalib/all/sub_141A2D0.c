bool __fastcall sub_141A2D0(_QWORD *a1, __int64 a2, __m128i a3, double a4)
{
  __int64 v4; // r8
  bool result; // al
  int v6; // eax
  __int64 v7; // rsi
  int v8; // r12d
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // r12
  __int64 i; // rbx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 j; // rbx
  __int64 v16; // rsi
  bool v17; // [rsp+1h] [rbp-49h]
  _BYTE v18[16]; // [rsp+2h] [rbp-48h] BYREF
  __int16 v19; // [rsp+12h] [rbp-38h]
  bool v20; // [rsp+1Ah] [rbp-30h]

  v4 = a1[7];
  if ( (*(_BYTE *)(v4 + 1) & 8) == 0 )
    return 0;
  if ( (int)sub_FBCDB0(2u, 0, a2, a1[8], v4, 0) <= 0 )
    return 0;
  v6 = sub_FA7130(a2);
  v7 = a1[139];
  v8 = v6;
  if ( v6 == 2 )
  {
    if ( v7 )
      sub_13DB670((__int64)v18, v7, a3, a4);
    else
      sub_14667F0(v18, a1[143]);
    v10 = v19;
    result = v20;
    if ( !v20 )
    {
      if ( a1[140] )
        return result;
      v11 = a1[146];
      for ( i = a1[147]; v11 != i; i -= 56 )
      {
        v13 = *(_QWORD *)(i - 40);
        v17 = result;
        if ( v13 )
          sub_13DB670((__int64)v18, v13, a3, a4);
        else
          sub_14667F0(v18, *(_QWORD *)(i - 24));
        v10 = v19;
        result = v17;
        if ( v20 )
          break;
        if ( *(_QWORD *)(i - 32) )
          return result;
      }
    }
    return v10 == 22;
  }
  if ( v7 )
    sub_13DB670((__int64)v18, v7, a3, a4);
  else
    sub_14667F0(v18, a1[143]);
  v9 = v19;
  if ( !v20 )
  {
    if ( a1[140] )
      return 1;
    v14 = a1[146];
    for ( j = a1[147]; v14 != j; j -= 56 )
    {
      v16 = *(_QWORD *)(j - 40);
      if ( v16 )
        sub_13DB670((__int64)v18, v16, a3, a4);
      else
        sub_14667F0(v18, *(_QWORD *)(j - 24));
      v9 = v19;
      if ( v20 )
        break;
      if ( *(_QWORD *)(j - 32) )
        return 1;
    }
  }
  return v8 == 1 || v9 != 22;
}
