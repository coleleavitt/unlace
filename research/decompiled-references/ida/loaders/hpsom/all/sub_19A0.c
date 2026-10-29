__int64 __fastcall sub_19A0(unsigned int *a1)
{
  __int64 result; // rax

  result = _byteswap_ulong(a1[3]);
  *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(_byteswap_ulong(a1[1])),
                             _mm_cvtsi32_si128(_byteswap_ulong(a1[2]))),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128(_byteswap_ulong(a1[4]))));
  return result;
}

