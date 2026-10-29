// Alternative name is '_ZN16ClpNetworkMatrixD2Ev'
void __fastcall ClpNetworkMatrix::~ClpNetworkMatrix(ClpNetworkMatrix *this)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)this = off_4D07B8;
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((void **)this + 12);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 13);
  if ( v4 )
    operator delete[](v4);
  ClpMatrixBase::~ClpMatrixBase(this);
}

