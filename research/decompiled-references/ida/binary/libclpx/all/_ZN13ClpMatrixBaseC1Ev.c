// Alternative name is '_ZN13ClpMatrixBaseC2Ev'
void __fastcall ClpMatrixBase::ClpMatrixBase(ClpMatrixBase *this)
{
  __m128i si128; // xmm0

  *((_QWORD *)this + 1) = 0;
  *((_OWORD *)this + 1) = xmmword_28AAE0;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 18) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28AAF0);
  *(_QWORD *)this = &off_4D05A8;
  *((_DWORD *)this + 19) = -1;
  *(__m128i *)((char *)this + 40) = si128;
  *((_BYTE *)this + 80) = 0;
  *(__m128i *)((char *)this + 56) = _mm_load_si128((const __m128i *)&xmmword_28AB00);
}

