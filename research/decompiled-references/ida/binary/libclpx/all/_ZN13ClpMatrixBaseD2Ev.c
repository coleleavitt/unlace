// Alternative name is '_ZN13ClpMatrixBaseD1Ev'
void __fastcall ClpMatrixBase::~ClpMatrixBase(ClpMatrixBase *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D05A8;
  v1 = *((void **)this + 1);
  if ( v1 )
    operator delete[](v1);
}

