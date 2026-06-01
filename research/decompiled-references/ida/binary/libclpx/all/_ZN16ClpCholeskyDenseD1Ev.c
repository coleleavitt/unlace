// Alternative name is '_ZN16ClpCholeskyDenseD2Ev'
void __fastcall ClpCholeskyDense::~ClpCholeskyDense(ClpCholeskyDense *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 980) == 0;
  *(_QWORD *)this = &off_4D0020;
  if ( !v1 )
  {
    *((_QWORD *)this + 11) = 0;
    *((_QWORD *)this + 16) = 0;
    *((_QWORD *)this + 15) = 0;
  }
  ClpCholeskyBase::~ClpCholeskyBase(this);
}

