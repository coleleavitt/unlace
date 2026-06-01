// Alternative name is '_ZN11ClpDataSaveC1Ev'
void __fastcall ClpDataSave::ClpDataSave(ClpDataSave *this)
{
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)this = 0;
  *((_QWORD *)this + 6) = 0x3FF0000000000000LL;
  *((_OWORD *)this + 1) = xmmword_28C7A0;
  *((__m128i *)this + 2) = _mm_loadl_epi64((const __m128i *)&qword_28C7B0);
  *(__m128i *)((char *)this + 56) = _mm_load_si128((const __m128i *)&xmmword_28C7C0);
}

