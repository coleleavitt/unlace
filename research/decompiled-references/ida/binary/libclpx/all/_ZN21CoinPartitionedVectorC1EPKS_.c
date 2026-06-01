// Alternative name is '_ZN21CoinPartitionedVectorC2EPKS_'
void __fastcall CoinPartitionedVector::CoinPartitionedVector(CoinPartitionedVector *this, const __m128i *a2)
{
  CoinIndexedVector::CoinIndexedVector(this, (const CoinIndexedVector *)a2);
  *((__m128i *)this + 2) = _mm_loadu_si128(a2 + 2);
  *((__m128i *)this + 3) = _mm_loadu_si128(a2 + 3);
  *((__m128i *)this + 4) = _mm_loadu_si128(a2 + 4);
  *((__m128i *)this + 5) = _mm_loadu_si128(a2 + 5);
  *((_QWORD *)this + 12) = a2[6].m128i_i64[0];
}

