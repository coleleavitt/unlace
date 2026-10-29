__int64 __fastcall ClpMatrixBase::times(
        ClpMatrixBase *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6,
        __int64 a7)
{
  if ( a5 )
    sub_8EB60(this, a3, a4, a5, a6, a7, a2);
  return (*(__int64 (__fastcall **)(ClpMatrixBase *, const double *, double *, _QWORD, const double *, double))(*(_QWORD *)this + 360LL))(
           this,
           a3,
           a4,
           0,
           a6,
           a2);
}

