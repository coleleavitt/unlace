__int64 __fastcall sub_FBBC0(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  __m128i v6; // xmm1

  result = *(_QWORD *)(a2 + 8);
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(result + 16));
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(result + 20));
  v5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v3, v3), _mm_unpacklo_epi32(v4, v4));
  v6 = _mm_cmpgt_epi32((__m128i)0LL, v5);
  *a1 = _mm_unpacklo_epi32(v5, v6);
  a1[1] = _mm_unpackhi_epi32(v5, v6);
  return result;
}

