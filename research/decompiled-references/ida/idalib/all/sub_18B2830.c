__int64 __fastcall sub_18B2830(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128 v6; // xmm1
  double v7; // xmm0_8
  __m128 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  __m128 v12; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+108h] [rbp-40h] BYREF

  v2 = 0;
  sub_EE9E50(&v12, a2);
  v6 = (__m128)_mm_loadu_si128(&v13);
  *(_QWORD *)&v7 = _mm_load_si128((const __m128i *)&v12).m128i_u64[0];
  v8 = v12;
LABEL_2:
  if ( v6.m128_u64[0] == v8.m128_u64[0] )
  {
LABEL_11:
    if ( v6.m128_u64[1] == v8.m128_u64[1] )
      return v2;
  }
  while ( (v8.m128_i8[8] & 3) != 0 )
  {
    v9 = *(_QWORD *)sub_EF2B30((__int64)&v12);
    if ( v9 )
      goto LABEL_5;
LABEL_8:
    v8.m128_u64[1] = v12.m128_u64[1];
    if ( (v12.m128_i8[8] & 3) == 0 )
    {
      v8.m128_u64[0] = v12.m128_u64[0];
LABEL_14:
      v8.m128_u64[0] += 8LL;
      v12.m128_u64[0] = v8.m128_u64[0];
      goto LABEL_2;
    }
    if ( (v12.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      sub_EF2750((unsigned __int64 *)&v12, 1);
      v8 = v12;
      goto LABEL_2;
    }
    sub_EF2960((__int64)&v12);
    v8 = v12;
    if ( v6.m128_u64[0] == v12.m128_u64[0] )
      goto LABEL_11;
  }
  v9 = *(_QWORD *)v8.m128_u64[0];
  if ( !*(_QWORD *)v8.m128_u64[0] )
    goto LABEL_14;
LABEL_5:
  v10 = sub_18B2030(a1, v9, v7, v6, v8.m128_i64[1], v3, v4, v5);
  if ( (int)v2 > v10 )
    goto LABEL_8;
  if ( v10 != 2 )
  {
    v2 = v10;
    goto LABEL_8;
  }
  return 2;
}
