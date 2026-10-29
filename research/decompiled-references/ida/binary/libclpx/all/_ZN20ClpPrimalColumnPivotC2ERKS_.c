// Alternative name is '_ZN20ClpPrimalColumnPivotC1ERKS_'
void __fastcall ClpPrimalColumnPivot::ClpPrimalColumnPivot(ClpPrimalColumnPivot *this, const ClpPrimalColumnPivot *a2)
{
  *(_QWORD *)this = &off_4D1178;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_BYTE *)this + 20) = *((_BYTE *)a2 + 20);
}

