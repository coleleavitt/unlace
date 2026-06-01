void __fastcall sub_4DECB0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __m128i v3; // xmm1

  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 1680));
  *a1 = a2;
  *(_DWORD *)(a2 + 1680) |= a3;
  a1[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), v3).m128i_u64[0];
}
