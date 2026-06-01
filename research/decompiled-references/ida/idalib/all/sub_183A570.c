unsigned __int64 __fastcall sub_183A570(__m128i *a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __m128 v4; // xmm1
  unsigned __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __m128 v9; // [rsp+10h] [rbp-28h] BYREF

  v1 = sub_E90530(a1->m128i_i64);
  v2 = 0;
  v3 = HIDWORD(v1);
  if ( a1->m128i_i64[0] )
  {
    v4 = (__m128)_mm_loadu_si128(a1);
    v9 = v4;
    if ( v4.m128_u64[0] )
    {
      v5 = *(_QWORD *)(v4.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
      {
        v6 = 0;
        v8 = v9.m128_u64[1];
        v9 = _mm_loadh_ps((const double *)&v8);
        while ( (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v6 = 1;
          v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v6 )
          v9.m128_u64[0] = v5;
      }
    }
    v2 = sub_E90530((__int64 *)&v9);
  }
  return (v3 << 32) | v2;
}
