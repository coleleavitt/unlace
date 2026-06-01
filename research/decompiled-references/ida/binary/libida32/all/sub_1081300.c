__int64 __fastcall sub_1081300(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rdx
  const __m128i *v4; // rbp
  const __m128i *v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  __m128i v14; // [rsp+10h] [rbp-38h] BYREF

  v3 = a3;
  v4 = &a2[v3];
  if ( a2 != &a2[v3] )
  {
    v5 = a2;
    while ( 1 )
    {
      v11 = _mm_loadu_si128(v5);
      LOBYTE(v13) = 59;
      v14 = v11;
      v10 = sub_2223100(&v14, &v13, 1);
      if ( v10 == -1 )
        break;
      v6 = v10 + 1;
      if ( v10 + 1 > v14.m128i_i64[1] )
      {
        v7 = v14.m128i_i64[0];
        if ( v10 > v14.m128i_i64[1] )
          v10 = v14.m128i_u64[1];
        v9 = v14.m128i_i64[0] + v14.m128i_i64[1];
        if ( v10 <= 8 )
          goto LABEL_10;
        v8 = 0;
        goto LABEL_14;
      }
      v7 = v14.m128i_i64[0];
      v8 = v14.m128i_i64[1] - v6;
      v9 = v14.m128i_i64[0] + v6;
      if ( v10 > v14.m128i_i64[1] )
        v10 = v14.m128i_u64[1];
      if ( v10 <= 8 || *(_QWORD *)v14.m128i_i64[0] != 0x797469726F697270LL )
      {
LABEL_8:
        if ( v8 <= 8 || *(_QWORD *)v9 != 0x797469726F697270LL || *(_BYTE *)(v9 + 8) != 61 )
          goto LABEL_10;
        v14.m128i_i64[0] = v9 + 9;
        v14.m128i_i64[1] = v8 - 9;
        goto LABEL_17;
      }
LABEL_15:
      if ( *(_BYTE *)(v7 + 8) != 61 )
        goto LABEL_8;
      v14.m128i_i64[0] = v7 + 9;
      v14.m128i_i64[1] = v10 - 9;
LABEL_17:
      if ( !(unsigned __int8)sub_2223C30(v14.m128i_i64[0], v14.m128i_i64[1], 0, &v13) )
        return v13;
LABEL_10:
      if ( v4 == ++v5 )
        return 0;
    }
    v10 = v14.m128i_u64[1];
    v7 = v14.m128i_i64[0];
    if ( v14.m128i_i64[1] <= 8uLL )
      goto LABEL_10;
    v9 = 0;
    v8 = 0;
LABEL_14:
    if ( *(_QWORD *)v7 != 0x797469726F697270LL )
      goto LABEL_8;
    goto LABEL_15;
  }
  return 0;
}

