__int64 __fastcall CoinOslFactorization::gutsOfInitialize(CoinOslFactorization *this, char a2)
{
  __m128i si128; // xmm1
  __int64 result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_2948B0);
  *((_QWORD *)this + 11) = 0;
  *((_DWORD *)this + 24) = 0;
  *(__m128i *)((char *)this + 36) = si128;
  *(__m128i *)((char *)this + 52) = _mm_load_si128((const __m128i *)&xmmword_2948C0);
  *(_OWORD *)((char *)this + 8) = xmmword_2948A0;
  *(_OWORD *)((char *)this + 72) = 0;
  *((_QWORD *)this + 3) = 0x3FF0000000000000LL;
  if ( a2 )
  {
    *((_QWORD *)this + 61) = 0;
    memset(
      (void *)(((unsigned __int64)this + 112) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)this - (((_DWORD)this + 112) & 0xFFFFFFF8) + 496) >> 3));
    *((_DWORD *)this + 90) = 100;
    *((_QWORD *)this + 17) = 0x3FF0000000000000LL;
    *((_DWORD *)this + 95) = 100;
    *((_QWORD *)this + 13) = 0x3DDB7CDFD9D7BDBBLL;
    *((_QWORD *)this + 16) = 0x3D719799812DEA11LL;
    *((_QWORD *)this + 15) = 0x3FB999999999999ALL;
    return 0x3FB999999999999ALL;
  }
  return result;
}

