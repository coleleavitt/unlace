unsigned __int64 __fastcall sub_20EAA90(unsigned int *a1, __int64 a2)
{
  __m128i v2; // xmm1
  unsigned int *v4; // rax
  __m128i v5; // xmm2
  __m128i v6; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned int *)a2 == a1 )
  {
LABEL_6:
    v6.m128i_i64[0] = a2;
    v2 = _mm_loadl_epi64(&v6);
    return _mm_unpacklo_epi64(v2, v2).m128i_u64[0];
  }
  while ( byte_26F0DA0[*a1] != 3 )
  {
    if ( ++a1 == (unsigned int *)a2 )
      goto LABEL_6;
  }
  v4 = a1 + 1;
  if ( (unsigned int *)a2 == a1 + 1 )
  {
LABEL_12:
    v6.m128i_i64[0] = a2;
    v5 = _mm_loadl_epi64(&v6);
    return _mm_unpacklo_epi64(v5, v5).m128i_u64[0];
  }
  if ( byte_26F0DA0[a1[1]] != 3 )
  {
    while ( 1 )
    {
      if ( (unsigned int *)a2 == ++v4 )
        goto LABEL_12;
      if ( byte_26F0DA0[*v4] == 3 )
        goto LABEL_14;
    }
  }
  do
LABEL_14:
    ++v4;
  while ( (unsigned int *)a2 != v4 && byte_26F0DA0[*v4] == 3 );
  v6.m128i_i64[0] = (__int64)v4;
  return _mm_loadh_ps((const double *)v6.m128i_i64).m128_u64[0];
}
