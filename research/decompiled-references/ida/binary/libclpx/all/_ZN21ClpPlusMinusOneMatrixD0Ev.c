void __fastcall ClpPlusMinusOneMatrix::~ClpPlusMinusOneMatrix(ClpPlusMinusOneMatrix *this)
{
  ClpPlusMinusOneMatrix::~ClpPlusMinusOneMatrix(this);
  operator delete(this);
}

