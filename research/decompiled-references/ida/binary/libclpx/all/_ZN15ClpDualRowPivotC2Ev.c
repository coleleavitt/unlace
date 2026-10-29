// Alternative name is '_ZN15ClpDualRowPivotC1Ev'
void __fastcall ClpDualRowPivot::ClpDualRowPivot(ClpDualRowPivot *this)
{
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = -1;
  *(_QWORD *)this = &off_4D0108;
}

