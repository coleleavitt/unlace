_BOOL8 __fastcall sub_FB090(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  _OWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 16));
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 20));
  v7 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v5, v5), _mm_unpacklo_epi32(v6, v6));
  v8 = _mm_cmpgt_epi32((__m128i)0LL, v7);
  v10[0] = _mm_unpacklo_epi32(v7, v8);
  v10[1] = _mm_unpackhi_epi32(v7, v8);
  return sub_FAD30(a1 + 80, a2, a3, (__int64)v10, a4);
}

