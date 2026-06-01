__int64 __fastcall sub_172FD0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 result; // rax

  v4 = _mm_loadl_epi64((const __m128i *)(a4 + 264));
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 264));
  *a2 = v4.m128i_i64[0];
  result = (unsigned int)(*(_DWORD *)(a4 + 276) + _mm_cvtsi128_si32(_mm_shuffle_epi32(v4, 229)) - 1);
  *a3 = _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(result)).m128i_u64[0];
  return result;
}
