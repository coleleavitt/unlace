// Alternative name is '_ZN18ClpDualRowSteepestC2Ei'
void __fastcall ClpDualRowSteepest::ClpDualRowSteepest(ClpDualRowSteepest *this, int a2)
{
  ClpDualRowPivot::ClpDualRowPivot(this);
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = (a2 << 6) + 2;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = &off_4D0190;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
}

