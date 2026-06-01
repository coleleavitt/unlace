// Alternative name is '_ZN12ClpNodeStuffC1Ev'
void __fastcall ClpNodeStuff::ClpNodeStuff(ClpNodeStuff *this)
{
  *((_QWORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 8) = xmmword_28D020;
  *((_DWORD *)this + 46) = -1;
  *((_OWORD *)this + 2) = 0;
  *(_QWORD *)this = off_4D0A00;
  *((_OWORD *)this + 3) = 0;
  *((_OWORD *)this + 4) = 0;
  *((_OWORD *)this + 5) = 0;
  *((_OWORD *)this + 6) = 0;
  *((_OWORD *)this + 7) = 0;
  *(_OWORD *)((char *)this + 136) = 0;
  *((_QWORD *)this + 3) = 0x3E45798EE2308C3ALL;
  *(__m128i *)((char *)this + 152) = _mm_load_si128((const __m128i *)&xmmword_28C7C0);
  *(__m128i *)((char *)this + 168) = _mm_load_si128((const __m128i *)&xmmword_28D030);
}

