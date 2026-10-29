// Alternative name is '_ZN20ClpPEDualRowSteepestC2Edi'
void __fastcall ClpPEDualRowSteepest::ClpPEDualRowSteepest(ClpPEDualRowSteepest *this, double a2, int a3)
{
  ClpDualRowSteepest::ClpDualRowSteepest(this, a3);
  *((_QWORD *)this + 9) = 0;
  *((_BYTE *)this + 96) = 1;
  *(_QWORD *)((char *)this + 100) = 0;
  *((double *)this + 10) = a2;
  *(_QWORD *)this = &off_4D0AE0;
  *((_QWORD *)this + 11) = 0x6400000000LL;
}

