double *__fastcall ClpNetworkMatrix::add(ClpNetworkMatrix *this, const ClpSimplex *a2, double *a3, double a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  double *result; // rax

  v5 = *((_QWORD *)this + 13);
  v6 = 2 * a5;
  v7 = *(int *)(v5 + 4 * v6);
  result = (double *)*(int *)(v5 + 4 * v6 + 4);
  if ( (int)v7 >= 0 )
    a3[v7] = a3[v7] - a4;
  if ( (int)result >= 0 )
  {
    result = &a3[(_QWORD)result];
    *result = a4 + *result;
  }
  return result;
}

