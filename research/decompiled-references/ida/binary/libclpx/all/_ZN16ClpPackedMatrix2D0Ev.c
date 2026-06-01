void __fastcall ClpPackedMatrix2::~ClpPackedMatrix2(ClpPackedMatrix2 *this)
{
  ClpPackedMatrix2::~ClpPackedMatrix2(this);
  operator delete(this);
}

