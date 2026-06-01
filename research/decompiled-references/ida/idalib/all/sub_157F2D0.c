unsigned __int64 __fastcall sub_157F2D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm1
  __m128 v6; // rax
  __int64 v7; // rsi
  __m128i v9; // [rsp+0h] [rbp-148h]
  __int64 v10; // [rsp+10h] [rbp-138h]
  __m128 v11; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+108h] [rbp-40h] BYREF
  __int64 v13; // [rsp+118h] [rbp-30h]

  sub_EE9E50(&v11, a2);
  v5 = _mm_loadu_si128(&v12);
  v9 = v5;
  v10 = v13;
  v6 = v11;
LABEL_2:
  if ( v5.m128i_i64[0] == v6.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v6.m128_i8[8] & 3) == 0 )
      {
        v7 = *(_QWORD *)v6.m128_u64[0];
        if ( !*(_QWORD *)v6.m128_u64[0] )
          goto LABEL_12;
LABEL_5:
        sub_157F500(a1, v7, v6.m128_u64[1], v2, v3, v4, v9.m128i_i64[0], v9.m128i_i64[1], v10);
        goto LABEL_6;
      }
      v7 = *(_QWORD *)sub_EF2B30((__int64)&v11);
      if ( v7 )
        goto LABEL_5;
LABEL_6:
      v6.m128_u64[1] = v11.m128_u64[1];
      if ( (v11.m128_i8[8] & 3) == 0 )
      {
        v6.m128_u64[0] = v11.m128_u64[0];
LABEL_12:
        v6.m128_u64[0] += 8LL;
        v11.m128_u64[0] = v6.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v11.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v11, 1);
        v6 = v11;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v11);
      v6 = v11;
    }
    while ( v5.m128i_i64[0] != v11.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v5.m128i_i64[1] != v6.m128_u64[1] );
  return v6.m128_u64[0];
}
