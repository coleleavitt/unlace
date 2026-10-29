// Alternative name is '_ZN15ClpPackedMatrixC2Ev'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(ClpPackedMatrix *this)
{
  ClpMatrixBase::ClpMatrixBase(this);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = off_4D0C20;
  *((_QWORD *)this + 12) = 0x200000000LL;
}

