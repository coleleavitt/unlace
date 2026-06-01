// Alternative name is '_ZN17ClpDualRowDantzigC1Ev'
void __fastcall ClpDualRowDantzig::ClpDualRowDantzig(ClpDualRowDantzig *this)
{
  ClpDualRowPivot::ClpDualRowPivot(this);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &off_4D0088;
}

