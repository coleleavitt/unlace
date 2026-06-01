__int64 __fastcall CoinDenseFactorization::gutsOfInitialize(CoinDenseFactorization *this)
{
  __m128i si128; // xmm0

  *((_QWORD *)this + 11) = 0;
  *(_OWORD *)((char *)this + 8) = xmmword_2948A0;
  *((_DWORD *)this + 24) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2948B0);
  *((_QWORD *)this + 3) = 0x3FF0000000000000LL;
  *(__m128i *)((char *)this + 36) = si128;
  *(__m128i *)((char *)this + 52) = _mm_load_si128((const __m128i *)&xmmword_2948C0);
  *(_OWORD *)((char *)this + 72) = 0;
  return 0x3FF0000000000000LL;
}

