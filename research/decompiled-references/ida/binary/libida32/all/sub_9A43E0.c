__int64 __fastcall sub_9A43E0(void **a1, const __m128i **a2, int a3)
{
  const __m128i *v4; // rbp
  __int64 v5; // rax
  __m128i v6; // xmm3

  if ( a3 == 2 )
  {
    v4 = *a2;
    v5 = operator new(0x40u);
    *(__m128i *)v5 = _mm_loadu_si128(v4);
    *(__m128i *)(v5 + 16) = _mm_loadu_si128(v4 + 1);
    *(__m128i *)(v5 + 32) = _mm_loadu_si128(v4 + 2);
    v6 = _mm_loadu_si128(v4 + 3);
    *a1 = (void *)v5;
    *(__m128i *)(v5 + 48) = v6;
    return 0;
  }
  else if ( a3 == 3 )
  {
    operator delete(*a1, 0x40u);
    return 0;
  }
  else
  {
    if ( a3 == 1 )
      *a1 = (void *)*a2;
    return 0;
  }
}

