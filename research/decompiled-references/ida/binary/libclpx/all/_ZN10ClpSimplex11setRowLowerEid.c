double *__fastcall ClpSimplex::setRowLower(ClpSimplex *this, int a2, double a3)
{
  double *result; // rax
  double *v4; // rdx
  int v5; // edx
  __int64 v6; // rdx
  double v7; // xmm0_8

  if ( a3 < -1.0e27 )
    a3 = -1.797693134862316e308;
  result = (double *)(8LL * a2);
  v4 = (double *)((char *)result + *((_QWORD *)this + 18));
  if ( a3 != *v4 )
  {
    *v4 = a3;
    v5 = *((_DWORD *)this + 79);
    if ( (v5 & 1) != 0 )
    {
      *((_DWORD *)this + 79) = v5 & 0xFFFFFFEF;
      result = (double *)((char *)result + *((_QWORD *)this + 124));
      if ( *(double *)(*((_QWORD *)this + 18) + 8LL * a2) == -1.797693134862316e308 )
      {
        *result = -1.797693134862316e308;
      }
      else
      {
        v6 = *((_QWORD *)this + 28);
        v7 = a3 * *((double *)this + 12);
        if ( v6 )
          v7 = v7 * *(double *)(v6 + 8LL * a2);
        *result = v7;
      }
    }
  }
  return result;
}

