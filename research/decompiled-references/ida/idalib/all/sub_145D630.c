__int64 __fastcall sub_145D630(_QWORD *a1, __int16 a2, __m128i a3, double a4)
{
  __int64 v5; // rsi
  __int16 v6; // dx
  unsigned int v7; // ebp
  __int64 v9; // r13
  __int64 i; // rbx
  __int64 v11; // rsi
  _BYTE v12[16]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v13; // [rsp+10h] [rbp-38h]
  unsigned __int8 v14; // [rsp+18h] [rbp-30h]

  v5 = a1[139];
  if ( v5 )
    sub_13DB670((__int64)v12, v5, a3, a4);
  else
    sub_14667F0(v12, a1[143]);
  v6 = v13;
  v7 = v14;
  if ( !v14 )
  {
    if ( a1[140] )
      return v7;
    v9 = a1[146];
    for ( i = a1[147]; v9 != i; i -= 56 )
    {
      v11 = *(_QWORD *)(i - 40);
      if ( v11 )
        sub_13DB670((__int64)v12, v11, a3, a4);
      else
        sub_14667F0(v12, *(_QWORD *)(i - 24));
      v6 = v13;
      if ( v14 )
        break;
      if ( *(_QWORD *)(i - 32) )
        return v7;
    }
  }
  LOBYTE(v7) = a2 == v6;
  return v7;
}
