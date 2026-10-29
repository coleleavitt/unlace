// Alternative name is '_ZN16ClpFactorizationC2ERK22CoinOtherFactorization'
void __fastcall ClpFactorization::ClpFactorization(ClpFactorization *this, const CoinOtherFactorization *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __m128i si128; // xmm0

  v2 = *(_QWORD *)a2;
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  v3 = (*(__int64 (__fastcall **)(const CoinOtherFactorization *))(v2 + 16))(a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_28A190);
  *((_QWORD *)this + 2) = v3;
  *((_BYTE *)this + 76) = 1;
  *(__m128i *)((char *)this + 24) = si128;
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
}

