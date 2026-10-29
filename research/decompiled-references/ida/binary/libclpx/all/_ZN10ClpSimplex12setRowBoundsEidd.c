double *__fastcall ClpSimplex::setRowBounds(ClpSimplex *this, int a2, double a3, double a4)
{
  double *result; // rax
  double *v5; // rdx
  double *v6; // rdx
  int v7; // edx
  __int64 v8; // rdx
  double v9; // xmm1_8
  int v10; // edx
  __int64 v11; // rcx
  double *v12; // rcx
  __int64 v13; // rdx
  double v14; // xmm0_8

  if ( a3 < -1.0e27 )
    a3 = -1.797693134862316e308;
  if ( a4 > 1.0e27 )
    a4 = 1.797693134862316e308;
  result = (double *)(8LL * a2);
  v5 = (double *)((char *)result + *((_QWORD *)this + 18));
  if ( a3 != *v5 )
  {
    *v5 = a3;
    v10 = *((_DWORD *)this + 79);
    if ( (v10 & 1) != 0 )
    {
      v11 = *((_QWORD *)this + 124);
      *((_DWORD *)this + 79) = v10 & 0xFFFFFFEF;
      v12 = (double *)((char *)result + v11);
      if ( *(double *)(*((_QWORD *)this + 18) + 8LL * a2) == -1.797693134862316e308 )
      {
        *v12 = -1.797693134862316e308;
      }
      else
      {
        v13 = *((_QWORD *)this + 28);
        v14 = a3 * *((double *)this + 12);
        if ( v13 )
          v14 = v14 * *(double *)(v13 + 8LL * a2);
        *v12 = v14;
      }
    }
  }
  v6 = (double *)((char *)result + *((_QWORD *)this + 19));
  if ( a4 != *v6 )
  {
    *v6 = a4;
    v7 = *((_DWORD *)this + 79);
    if ( (v7 & 1) != 0 )
    {
      *((_DWORD *)this + 79) = v7 & 0xFFFFFFDF;
      result = (double *)((char *)result + *((_QWORD *)this + 127));
      if ( *(double *)(*((_QWORD *)this + 19) + 8LL * a2) == 1.797693134862316e308 )
      {
        *result = 1.797693134862316e308;
      }
      else
      {
        v8 = *((_QWORD *)this + 28);
        v9 = a4 * *((double *)this + 12);
        if ( v8 )
          v9 = v9 * *(double *)(v8 + 8LL * a2);
        *result = v9;
      }
    }
  }
  return result;
}

