char __fastcall sub_1AECDE0(__int64 *a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128 v3; // rax
  __int64 v4; // rsi
  char result; // al
  __m128 v6; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v7; // [rsp+108h] [rbp-40h] BYREF

  sub_EE9E50(&v6, a2);
  v2 = _mm_loadu_si128(&v7);
  v3 = v6;
LABEL_2:
  if ( v2.m128i_i64[0] == v3.m128_u64[0] )
    goto LABEL_9;
  do
  {
    do
    {
      if ( (v3.m128_i8[8] & 3) != 0 )
      {
        v4 = *(_QWORD *)sub_EF2B30((__int64)&v6);
        if ( !v4 )
          goto LABEL_6;
      }
      else
      {
        v4 = *(_QWORD *)v3.m128_u64[0];
        if ( !*(_QWORD *)v3.m128_u64[0] )
          goto LABEL_13;
      }
      result = sub_1AECC80(a1, v4);
      if ( result )
        return result;
LABEL_6:
      v3.m128_u64[1] = v6.m128_u64[1];
      if ( (v6.m128_i8[8] & 3) == 0 )
      {
        v3.m128_u64[0] = v6.m128_u64[0];
LABEL_13:
        v3.m128_u64[0] += 8LL;
        v6.m128_u64[0] = v3.m128_u64[0];
        goto LABEL_2;
      }
      if ( (v6.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_EF2750((unsigned __int64 *)&v6, 1);
        v3 = v6;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v6);
      v3 = v6;
    }
    while ( v2.m128i_i64[0] != v6.m128_u64[0] );
LABEL_9:
    ;
  }
  while ( v2.m128i_i64[1] != v3.m128_u64[1] );
  return 0;
}
