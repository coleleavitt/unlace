__int64 __fastcall sub_1B13160(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128 si128; // xmm0
  __m128 v4; // rax
  _WORD *v5; // rsi
  __int64 result; // rax
  __m128 v7; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v8; // [rsp+108h] [rbp-40h] BYREF

  sub_EE9E50(&v7, a2);
  v2 = _mm_loadu_si128(&v8);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v7);
  v4 = v7;
LABEL_2:
  if ( v2.m128i_i64[0] == v4.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v4.m128_i8[8] & 3) != 0 )
      {
        v5 = *(_WORD **)sub_EF2B30((__int64)&v7);
        if ( !v5 )
          goto LABEL_6;
      }
      else
      {
        v5 = *(_WORD **)v4.m128_u64[0];
        if ( !*(_QWORD *)v4.m128_u64[0] )
          goto LABEL_13;
      }
      result = sub_1B13100(a1, v5, si128);
      if ( (_BYTE)result )
        return result;
LABEL_6:
      v4.m128_u64[1] = v7.m128_u64[1];
      if ( (v7.m128_i8[8] & 3) == 0 )
      {
        v4.m128_u64[0] = v7.m128_u64[0];
LABEL_13:
        v4.m128_u64[0] += 8LL;
        v7.m128_u64[0] = v4.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v7.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v7, 1);
        v4 = v7;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v7);
      v4 = v7;
    }
    while ( v2.m128i_i64[0] != v7.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v2.m128i_i64[1] != v4.m128_u64[1] );
  return 0;
}
