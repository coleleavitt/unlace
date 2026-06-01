// Alternative name is '_ZN21ClpPlusMinusOneMatrixD2Ev'
void __fastcall ClpPlusMinusOneMatrix::~ClpPlusMinusOneMatrix(ClpPlusMinusOneMatrix *this)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  *(_QWORD *)this = off_4D0E88;
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((void **)this + 13);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 14);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 12);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 15);
  if ( v6 )
    operator delete[](v6);
  ClpMatrixBase::~ClpMatrixBase(this);
}

