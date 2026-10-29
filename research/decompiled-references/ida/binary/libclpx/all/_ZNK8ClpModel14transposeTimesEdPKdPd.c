__int64 __fastcall ClpModel::transposeTimes(ClpModel *this, double a2, const double *a3, double *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx

  v5 = *((_QWORD *)this + 26);
  v6 = *((_QWORD *)this + 28);
  if ( v5 )
  {
    if ( v6 )
      return (*(__int64 (__fastcall **)(__int64, const double *, double *, double))(*(_QWORD *)v5 + 376LL))(
               v5,
               a3,
               a4,
               a2);
    return (*(__int64 (__fastcall **)(_QWORD, const double *, double *, double))(**((_QWORD **)this + 24) + 376LL))(
             *((_QWORD *)this + 24),
             a3,
             a4,
             a2);
  }
  else
  {
    v5 = *((_QWORD *)this + 24);
    if ( !v6 )
      return (*(__int64 (__fastcall **)(__int64, const double *, double *, double))(*(_QWORD *)v5 + 376LL))(
               v5,
               a3,
               a4,
               a2);
    return (*(__int64 (__fastcall **)(__int64, const double *, double *, __int64, _QWORD, _QWORD, double))(*(_QWORD *)v5 + 384LL))(
             v5,
             a3,
             a4,
             v6,
             *((_QWORD *)this + 29),
             0,
             a2);
  }
}

