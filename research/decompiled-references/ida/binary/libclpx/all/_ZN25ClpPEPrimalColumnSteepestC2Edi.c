// Alternative name is '_ZN25ClpPEPrimalColumnSteepestC1Edi'
void __fastcall ClpPEPrimalColumnSteepest::ClpPEPrimalColumnSteepest(
        ClpPEPrimalColumnSteepest *this,
        double a2,
        int a3)
{
  __m128i si128; // xmm0

  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(this, a3);
  *((_QWORD *)this + 14) = 0;
  *((double *)this + 15) = a2;
  *((_BYTE *)this + 144) = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_28D390);
  *(_QWORD *)this = &off_4D0B68;
  *((__m128i *)this + 8) = si128;
}

