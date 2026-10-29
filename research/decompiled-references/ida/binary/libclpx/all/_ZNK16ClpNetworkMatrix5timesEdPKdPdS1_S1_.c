__int64 __fastcall ClpNetworkMatrix::times(
        ClpNetworkMatrix *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6)
{
  return (*(__int64 (__fastcall **)(ClpNetworkMatrix *, const double *, double *, const double *, const double *, double))(*(_QWORD *)this + 360LL))(
           this,
           a3,
           a4,
           a5,
           a6,
           a2);
}

