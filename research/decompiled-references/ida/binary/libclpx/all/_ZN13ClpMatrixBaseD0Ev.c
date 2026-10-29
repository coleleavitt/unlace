void __fastcall ClpMatrixBase::~ClpMatrixBase(ClpMatrixBase *this)
{
  ClpMatrixBase::~ClpMatrixBase(this);
  operator delete(this);
}

