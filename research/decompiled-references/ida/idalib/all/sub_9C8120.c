__int64 __fastcall sub_9C8120(void **a1, const __m128i **a2, int a3)
{
  const __m128i *v4; // rbp
  __m128i *v5; // rax
  __m128i v6; // xmm3

  if ( a3 == 2 )
  {
    v4 = *a2;
    v5 = (__m128i *)operator new(0x40u);
    *v5 = _mm_loadu_si128(v4);
    v5[1] = _mm_loadu_si128(v4 + 1);
    v5[2] = _mm_loadu_si128(v4 + 2);
    v6 = _mm_loadu_si128(v4 + 3);
    *a1 = v5;
    v5[3] = v6;
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
