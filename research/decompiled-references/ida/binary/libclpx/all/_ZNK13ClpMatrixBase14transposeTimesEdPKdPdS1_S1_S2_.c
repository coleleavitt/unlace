__int64 __fastcall ClpMatrixBase::transposeTimes(
        ClpMatrixBase *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6,
        double *a7)
{
  if ( a5 )
    sub_8EB60(this, a3, a4, a5, a6, a7, a2);
  return (*(__int64 (__fastcall **)(ClpMatrixBase *, const double *, double *, _QWORD, const double *, double *, double))(*(_QWORD *)this + 376LL))(
           this,
           a3,
           a4,
           0,
           a6,
           a7,
           a2);
}

