void __fastcall ClpPackedMatrix::~ClpPackedMatrix(ClpPackedMatrix *this)
{
  ClpPackedMatrix::~ClpPackedMatrix(this);
  operator delete(this);
}

