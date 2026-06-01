// Alternative name is '_ZN23ClpPrimalColumnSteepestC1Ei'
void __fastcall ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(ClpPrimalColumnSteepest *this, int a2)
{
  __m128i si128; // xmm0

  ClpPrimalColumnPivot::ClpPrimalColumnPivot(this);
  *((_DWORD *)this + 19) = a2;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_DWORD *)this + 18) = -1;
  *((_OWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = (a2 << 6) + 2;
  *((_DWORD *)this + 20) = 0;
  *((_OWORD *)this + 3) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28A190);
  *(_QWORD *)this = &off_4D1208;
  *((_DWORD *)this + 21) = 0;
  *(__m128i *)((char *)this + 88) = si128;
  *((_DWORD *)this + 27) = 0;
}

