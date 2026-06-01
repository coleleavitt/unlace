void __fastcall sub_102E6A0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 i; // rcx

  if ( !a2 )
  {
    v2 = (_DWORD *)(a1 + 8);
    for ( i = 48; i; --i )
    {
      *v2 = *(_DWORD *)a2;
      a2 += 4;
      ++v2;
    }
    BUG();
  }
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(__m128i *)(a1 + 120) = _mm_loadu_si128((const __m128i *)(a2 + 120));
  *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(a2 + 136));
  *(__m128i *)(a1 + 152) = _mm_loadu_si128((const __m128i *)(a2 + 152));
  *(__m128i *)(a1 + 168) = _mm_loadu_si128((const __m128i *)(a2 + 168));
  *(__m128i *)(a1 + 184) = _mm_loadu_si128((const __m128i *)(a2 + 184));
}
