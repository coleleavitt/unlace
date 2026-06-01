void __fastcall ClpPackedMatrix3::~ClpPackedMatrix3(ClpPackedMatrix3 *this)
{
  ClpPackedMatrix3::~ClpPackedMatrix3(this);
  operator delete(this);
}

