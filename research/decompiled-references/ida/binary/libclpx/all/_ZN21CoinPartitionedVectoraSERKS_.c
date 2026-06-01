__m128i *__fastcall CoinPartitionedVector::operator=(__m128i *a1, const __m128i *a2)
{
  if ( a1 != a2 )
  {
    CoinIndexedVector::operator=((CoinIndexedVector *)a1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[6].m128i_i64[0] = a2[6].m128i_i64[0];
  }
  return a1;
}

