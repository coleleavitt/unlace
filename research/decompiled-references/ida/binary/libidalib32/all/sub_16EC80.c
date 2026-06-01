__m128i *__fastcall sub_16EC80(const __m128i *a1)
{
  __m128i *result; // rax

  result = (__m128i *)qalloc();
  if ( !result )
    sub_98F10((__int64)"watchplace");
  *result = _mm_loadu_si128(a1);
  return result;
}

