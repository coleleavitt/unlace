__m128i *__fastcall CoinShallowPackedVector::operator=(__m128i *this, const __m128i *a2)
{
  __int32 v2; // eax

  if ( a2 != this )
  {
    *(this + 2) = _mm_loadu_si128(a2 + 2);
    *((_DWORD *)this + 12) = a2[3].m128i_i32[0];
    CoinPackedVectorBase::clearBase((CoinPackedVectorBase *)this);
    v2 = a2->m128i_i32[3];
    this->m128i_i32[2] = a2->m128i_i32[2];
    this->m128i_i32[3] = v2;
    CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)this, nullptr, nullptr);
  }
  return this;
}

