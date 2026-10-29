// Alternative name is '_ZN20ClpPEDualRowSteepestC2ERKS_'
void __fastcall ClpPEDualRowSteepest::ClpPEDualRowSteepest(ClpPEDualRowSteepest *this, const ClpPEDualRowSteepest *a2)
{
  __int64 v2; // xmm0_8

  ClpDualRowSteepest::ClpDualRowSteepest(this, a2);
  v2 = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = v2;
  *(_QWORD *)this = &off_4D0AE0;
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
}

