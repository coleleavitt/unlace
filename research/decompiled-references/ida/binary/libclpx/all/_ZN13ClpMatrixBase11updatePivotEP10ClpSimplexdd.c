__int64 __fastcall ClpMatrixBase::updatePivot(ClpMatrixBase *this, ClpSimplex *a2, double a3, double a4)
{
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r14
  int v7; // r13d

  if ( !*((_QWORD *)this + 1) )
    return 0;
  v4 = *((_DWORD *)a2 + 288);
  v5 = *((_DWORD *)a2 + 290);
  v6 = *((_QWORD *)a2 + 150);
  v7 = *((_DWORD *)a2 + 27);
  if ( v4 != v5 )
  {
    if ( v7 > v4 )
      (*(void (__fastcall **)(ClpMatrixBase *, double, double))(*(_QWORD *)this + 256LL))(this, a3, a4);
    if ( v7 > (int)v5 )
      (*(void (__fastcall **)(ClpMatrixBase *, ClpSimplex *, _QWORD, _QWORD, double, double))(*(_QWORD *)this + 256LL))(
        this,
        a2,
        *((_QWORD *)this + 1),
        v5,
        -*(double *)(v6 + 8LL * (int)v5),
        a4);
    return 0;
  }
  if ( v7 <= v4 )
    return 0;
  (*(void (__fastcall **)(ClpMatrixBase *, double, double))(*(_QWORD *)this + 256LL))(
    this,
    a3 - *(double *)(v6 + 8LL * v4),
    a4);
  return 0;
}

