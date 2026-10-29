// Alternative name is '_ZN5IdiotC1Ev'
void __fastcall Idiot::Idiot(Idiot *this)
{
  __m128i si128; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_294630);
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 36) = 8;
  *((__m128i *)this + 7) = si128;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 37) = 0;
  *((__m128i *)this + 8) = _mm_load_si128((const __m128i *)&xmmword_294640);
  *(_OWORD *)((char *)this + 8) = xmmword_294650;
  *(_OWORD *)((char *)this + 24) = xmmword_294660;
  *(_OWORD *)((char *)this + 40) = xmmword_294670;
  *(_OWORD *)((char *)this + 56) = xmmword_294680;
  *(_OWORD *)((char *)this + 72) = xmmword_294690;
  *(_OWORD *)((char *)this + 88) = xmmword_2946A0;
}

