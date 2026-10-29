// Alternative name is '_ZN11ClpPresolveC2Ev'
void __fastcall ClpPresolve::ClpPresolve(ClpPresolve *this)
{
  char *v2; // rdi
  __m128i si128; // xmm0

  v2 = (char *)this + 88;
  *((_QWORD *)v2 - 10) = 0;
  *(_OWORD *)(v2 - 56) = 0;
  *((_QWORD *)v2 - 9) = 0;
  *((_QWORD *)v2 - 8) = 0;
  *(_OWORD *)(v2 - 40) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28EC20);
  *((_QWORD *)v2 - 11) = off_4D1098;
  *((_DWORD *)v2 - 2) = 3;
  *(__m128i *)(v2 - 24) = si128;
  std::string::string();
  *((_DWORD *)this + 24) = 0;
}

