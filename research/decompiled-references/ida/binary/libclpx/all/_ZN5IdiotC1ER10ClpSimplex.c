// Alternative name is '_ZN5IdiotC2ER10ClpSimplex'
void __fastcall Idiot::Idiot(Idiot *this, ClpSimplex *a2)
{
  __m128i si128; // xmm0
  double v3; // xmm1_8

  si128 = _mm_load_si128((const __m128i *)&xmmword_294630);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 36) = 8;
  *((__m128i *)this + 7) = si128;
  *((_QWORD *)this + 13) = 0;
  *((__m128i *)this + 8) = _mm_load_si128((const __m128i *)&xmmword_294640);
  *(_OWORD *)((char *)this + 8) = xmmword_294650;
  *(_OWORD *)((char *)this + 24) = xmmword_294660;
  *(_OWORD *)((char *)this + 40) = xmmword_294670;
  *(_OWORD *)((char *)this + 56) = xmmword_2946B0;
  *(_OWORD *)((char *)this + 72) = xmmword_294690;
  *(_OWORD *)((char *)this + 88) = xmmword_2946A0;
  v3 = (double)*((int *)a2 + 26);
  if ( v3 < 0.0 )
    sqrt(v3);
  *((_DWORD *)this + 35) = 100;
  *((_DWORD *)this + 37) = 0;
  *((double *)this + 7) = v3 * 0.05;
}

