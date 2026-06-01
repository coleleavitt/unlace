void __fastcall ClpPrimalColumnPivot::~ClpPrimalColumnPivot(ClpPrimalColumnPivot *this)
{
  ClpPrimalColumnPivot::~ClpPrimalColumnPivot(this);
  operator delete(this);
}

