unsigned __int64 __fastcall sub_422220(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1640);
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1640);
  *(__m128i *)(v3 + 8) = _mm_loadu_si128((const __m128i *)(v2 + 8));
  *(__m128i *)(v3 + 24) = _mm_loadu_si128((const __m128i *)(v2 + 24));
  *(__m128i *)(v3 + 40) = _mm_loadu_si128((const __m128i *)(v2 + 40));
  *(__m128i *)(v3 + 56) = _mm_loadu_si128((const __m128i *)(v2 + 56));
  *(__m128i *)(v3 + 72) = _mm_loadu_si128((const __m128i *)(v2 + 72));
  *(__m128i *)(v3 + 88) = _mm_loadu_si128((const __m128i *)(v2 + 88));
  *(__m128i *)(v3 + 104) = _mm_loadu_si128((const __m128i *)(v2 + 104));
  *(__m128i *)(v3 + 120) = _mm_loadu_si128((const __m128i *)(v2 + 120));
  *(_DWORD *)(v3 + 136) = *(_DWORD *)(v2 + 136);
  return sub_422110(v3);
}
