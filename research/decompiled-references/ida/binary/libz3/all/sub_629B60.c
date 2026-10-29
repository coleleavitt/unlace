void __fastcall sub_629B60(__int64 a1, _QWORD *a2)
{
  __m128i v2; // xmm1

  *a2 = 0;
  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 16));
  *a2 = v2.m128i_i64[0];
  *a2 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 24)), v2).m128i_u64[0];
}

