void __fastcall ClpCholeskyBase::~ClpCholeskyBase(ClpCholeskyBase *this)
{
  ClpCholeskyBase::~ClpCholeskyBase(this);
  operator delete(this);
}

