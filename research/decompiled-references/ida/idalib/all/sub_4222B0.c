unsigned __int64 __fastcall sub_4222B0(int *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  __int64 v4; // rdi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 80LL);
  if ( (char *)v2 != (char *)sub_422220 )
    return v2();
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1640);
  v4 = *(_QWORD *)(switch_dbctx(a1[2]) + 1640);
  *(__m128i *)(v4 + 8) = _mm_loadu_si128((const __m128i *)(v3 + 8));
  *(__m128i *)(v4 + 24) = _mm_loadu_si128((const __m128i *)(v3 + 24));
  *(__m128i *)(v4 + 40) = _mm_loadu_si128((const __m128i *)(v3 + 40));
  *(__m128i *)(v4 + 56) = _mm_loadu_si128((const __m128i *)(v3 + 56));
  *(__m128i *)(v4 + 72) = _mm_loadu_si128((const __m128i *)(v3 + 72));
  *(__m128i *)(v4 + 88) = _mm_loadu_si128((const __m128i *)(v3 + 88));
  *(__m128i *)(v4 + 104) = _mm_loadu_si128((const __m128i *)(v3 + 104));
  *(__m128i *)(v4 + 120) = _mm_loadu_si128((const __m128i *)(v3 + 120));
  *(_DWORD *)(v4 + 136) = *(_DWORD *)(v3 + 136);
  return sub_422110(v4);
}
