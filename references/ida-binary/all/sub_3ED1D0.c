__int64 __fastcall sub_3ED1D0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  __m128i v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v15 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)));
  v16.m128i_i64[0] = a1;
  v13 = qalloc_or_throw(280);
  v16.m128i_i64[1] = a2;
  sub_3ECEF0(v13, &v16);
  *(__m128i *)(v13 + 16) = _mm_load_si128(&v15);
  sub_3EBDF0(v13);
  return sub_4A0300(*(void **)(v13 + 40), a7, a8, a9, a10, a11, a12, a13);
}
