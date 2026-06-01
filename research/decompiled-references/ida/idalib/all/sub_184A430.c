__int64 __fastcall sub_184A430(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __m128i v3; // xmm1
  __m128 si128; // xmm0
  __m128 v5; // rax
  unsigned __int64 v6; // rsi
  __m128 v8; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+108h] [rbp-40h] BYREF

  v2 = 0;
  sub_EE9E50(&v8, a2);
  v3 = _mm_loadu_si128(&v9);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v8);
  v5 = v8;
LABEL_2:
  if ( v3.m128i_i64[0] == v5.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v5.m128_i8[8] & 3) == 0 )
      {
        v6 = *(_QWORD *)v5.m128_u64[0];
        if ( !*(_QWORD *)v5.m128_u64[0] )
          goto LABEL_12;
LABEL_5:
        v2 |= sub_1849E30(a1, v6, si128);
        goto LABEL_6;
      }
      v6 = *(_QWORD *)sub_EF2B30((__int64)&v8);
      if ( v6 )
        goto LABEL_5;
LABEL_6:
      v5.m128_u64[1] = v8.m128_u64[1];
      if ( (v8.m128_i8[8] & 3) == 0 )
      {
        v5.m128_u64[0] = v8.m128_u64[0];
LABEL_12:
        v5.m128_u64[0] += 8LL;
        v8.m128_u64[0] = v5.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v8.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v8, 1);
        v5 = v8;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v8);
      v5 = v8;
    }
    while ( v3.m128i_i64[0] != v8.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v3.m128i_i64[1] != v5.m128_u64[1] );
  return v2;
}
