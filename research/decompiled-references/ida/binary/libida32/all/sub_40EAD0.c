unsigned __int64 __fastcall sub_40EAD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1448);
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1448);
  *(__m128i *)(v3 + 8) = _mm_loadu_si128((const __m128i *)(v2 + 8));
  *(__m128i *)(v3 + 24) = _mm_loadu_si128((const __m128i *)(v2 + 24));
  *(__m128i *)(v3 + 40) = _mm_loadu_si128((const __m128i *)(v2 + 40));
  *(__m128i *)(v3 + 56) = _mm_loadu_si128((const __m128i *)(v2 + 56));
  *(_DWORD *)(v3 + 72) = *(_DWORD *)(v2 + 72);
  return sub_40E9E0(v3);
}

