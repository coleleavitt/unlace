// Alternative name is '_ZN16ClpNetworkMatrixC1Ev'
void __fastcall ClpNetworkMatrix::ClpNetworkMatrix(ClpNetworkMatrix *this)
{
  ClpMatrixBase::ClpMatrixBase(this);
  *((_DWORD *)this + 13) = 11;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)this = off_4D07B8;
}

