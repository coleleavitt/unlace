// Alternative name is '_ZN16ClpCholeskyDenseC1ERKS_'
void __fastcall ClpCholeskyDense::ClpCholeskyDense(ClpCholeskyDense *this, const ClpCholeskyDense *a2)
{
  ClpCholeskyBase::ClpCholeskyBase(this, a2);
  *(_QWORD *)this = &off_4D0020;
  *((_BYTE *)this + 980) = *((_BYTE *)a2 + 980);
}

