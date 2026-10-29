// Alternative name is '_ZN16ClpFactorizationC2ERK17CoinFactorization'
void __fastcall ClpFactorization::ClpFactorization(ClpFactorization *this, const CoinFactorization *a2)
{
  CoinFactorization *v2; // rbp
  __m128i si128; // xmm0

  *(_QWORD *)this = 0;
  v2 = (CoinFactorization *)operator new(0x488u);
  CoinFactorization::CoinFactorization(v2, a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_28A190);
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 2) = 0;
  *(__m128i *)((char *)this + 24) = si128;
  *((_BYTE *)this + 76) = 1;
  *(_OWORD *)((char *)this + 40) = 0;
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
}

