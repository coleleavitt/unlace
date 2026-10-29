void __fastcall ClpCholeskyDense::~ClpCholeskyDense(ClpCholeskyDense *this)
{
  ClpCholeskyDense::~ClpCholeskyDense(this);
  operator delete(this);
}

