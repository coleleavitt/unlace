// Alternative name is '_ZN22ClpPrimalColumnDantzigC1Ev'
void __fastcall ClpPrimalColumnDantzig::ClpPrimalColumnDantzig(ClpPrimalColumnDantzig *this)
{
  ClpPrimalColumnPivot::ClpPrimalColumnPivot(this);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &off_4D10F0;
}

