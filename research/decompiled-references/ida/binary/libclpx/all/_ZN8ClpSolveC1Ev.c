// Alternative name is '_ZN8ClpSolveC2Ev'
void __fastcall ClpSolve::ClpSolve(ClpSolve *this)
{
  __m128i si128; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_293C00);
  *(_DWORD *)this = 5;
  *((_DWORD *)this + 1) = 0;
  *(__m128i *)((char *)this + 8) = si128;
  *((_DWORD *)this + 18) = 512;
  *((_DWORD *)this + 19) = 3;
  *(__m128i *)((char *)this + 24) = _mm_load_si128((const __m128i *)&xmmword_28D000);
  *(_OWORD *)((char *)this + 40) = -1;
  *(__m128i *)((char *)this + 56) = _mm_load_si128((const __m128i *)&xmmword_293C10);
}

