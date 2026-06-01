// Alternative name is '_ZN25ClpPEPrimalColumnSteepestC2ERKS_'
void __fastcall ClpPEPrimalColumnSteepest::ClpPEPrimalColumnSteepest(
        ClpPEPrimalColumnSteepest *this,
        const ClpPEPrimalColumnSteepest *a2)
{
  __int64 v2; // xmm0_8

  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(this, a2);
  v2 = *((_QWORD *)a2 + 15);
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = v2;
  *(_QWORD *)this = &off_4D0B68;
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_BYTE *)this + 144) = *((_BYTE *)a2 + 144);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
}

