__int64 __fastcall sub_15868B0(__m128 *a1, __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9[2]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1[3].m128_u64[0];
  v3 = (__int64 *)a1[4].m128_u64[1];
  if ( v2 == a1[4].m128_u64[0] - 8 )
  {
    if ( a1->m128_u64[1] - ((__int64)((__int64)v3 - a1->m128_u64[0]) >> 3) <= 1 )
    {
      sub_1586730((__int64)a1, 1u, 0);
      v3 = (__int64 *)a1[4].m128_u64[1];
    }
    v6 = operator new(0x200u);
    v7 = *a2;
    v3[1] = v6;
    *(_QWORD *)a1[3].m128_u64[0] = v7;
    v3 = (__int64 *)(a1[4].m128_u64[1] + 8);
    v9[0].m128i_i64[0] = *v3;
    v8 = _mm_loadl_epi64(v9);
    a1[3] = (__m128)_mm_unpacklo_epi64(v8, v8);
    v9[0].m128i_i64[0] = (__int64)v3;
    a1[4] = _mm_loadh_ps((const double *)v9[0].m128i_i64);
  }
  else
  {
    v4 = v2 + 8;
    *(_QWORD *)(v4 - 8) = *a2;
    a1[3].m128_u64[0] = v4;
    if ( v4 != a1[3].m128_u64[1] )
      return v4 - 8;
  }
  return *(v3 - 1) + 504;
}
