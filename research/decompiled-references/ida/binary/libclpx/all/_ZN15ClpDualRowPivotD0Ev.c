void __fastcall ClpDualRowPivot::~ClpDualRowPivot(ClpDualRowPivot *this)
{
  ClpDualRowPivot::~ClpDualRowPivot(this);
  operator delete(this);
}

