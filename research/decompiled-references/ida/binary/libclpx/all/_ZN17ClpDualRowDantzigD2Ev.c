// Alternative name is '_ZN17ClpDualRowDantzigD1Ev'
void __fastcall ClpDualRowDantzig::~ClpDualRowDantzig(ClpDualRowDantzig *this)
{
  *(_QWORD *)this = &off_4D0088;
  ClpDualRowPivot::~ClpDualRowPivot(this);
}

