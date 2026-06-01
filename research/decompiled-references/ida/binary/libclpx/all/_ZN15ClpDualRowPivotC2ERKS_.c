// Alternative name is '_ZN15ClpDualRowPivotC1ERKS_'
void __fastcall ClpDualRowPivot::ClpDualRowPivot(ClpDualRowPivot *this, const ClpDualRowPivot *a2)
{
  *(_QWORD *)this = &off_4D0108;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
}

