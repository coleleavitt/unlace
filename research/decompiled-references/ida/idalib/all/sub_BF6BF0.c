__int64 __fastcall sub_BF6BF0(const __m128i *a1)
{
  __m128 v1; // xmm1
  unsigned __int64 v2; // rax
  char v3; // cl
  unsigned __int64 v5; // [rsp+0h] [rbp-20h] BYREF
  __m128 v6; // [rsp+8h] [rbp-18h] BYREF

  if ( !a1->m128i_i64[0] )
    return 0;
  v1 = (__m128)_mm_loadu_si128(a1);
  v6 = v1;
  if ( v1.m128_u64[0] )
  {
    v2 = *(_QWORD *)(v1.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v2 )
    {
      v3 = 0;
      v5 = v6.m128_u64[1];
      v6 = _mm_loadh_ps((const double *)&v5);
      while ( (*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v3 = 1;
        v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( v3 )
        v6.m128_u64[0] = v2;
    }
  }
  return sub_E90530(&v6);
}
