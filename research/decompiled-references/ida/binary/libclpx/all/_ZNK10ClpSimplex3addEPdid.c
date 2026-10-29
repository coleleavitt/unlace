double *__fastcall ClpSimplex::add(ClpSimplex *this, double *a2, signed int a3, double a4)
{
  int v4; // ecx
  double *result; // rax

  v4 = *((_DWORD *)this + 27);
  if ( v4 > a3 || v4 + *((_DWORD *)this + 26) <= a3 )
    return (double *)(*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, double *, _QWORD, double))(**((_QWORD **)this + 24)
                                                                                               + 256LL))(
                       *((_QWORD *)this + 24),
                       this,
                       a2,
                       (unsigned int)a3,
                       a4);
  result = &a2[a3 - v4];
  *result = *result - a4;
  return result;
}

