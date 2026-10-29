double *__fastcall ClpSimplex::setColumnBounds(ClpSimplex *this, int a2, double a3, double a4)
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
  result = (double *)(8LL * a2);
  v5 = (double *)((char *)result + *((_QWORD *)this + 22));
  if ( a3 != *v5 )
  {
    *v5 = a3;
    v10 = *((_DWORD *)this + 79);
    if ( (v10 & 1) != 0 )
    {
      LOBYTE(v10) = v10 & 0x7F;
      v11 = *((_QWORD *)this + 123);
      *((_DWORD *)this + 79) = v10;
      v12 = (double *)((char *)result + v11);
      if ( *(double *)(*((_QWORD *)this + 22) + 8LL * a2) == -1.797693134862316e308 )
      {
        *v12 = -1.797693134862316e308;
      }
      else
      {
        v13 = *((_QWORD *)this + 29);
        v14 = a3 * *((double *)this + 12);
        if ( v13 )
          v14 = v14 / *(double *)(v13 + 8LL * a2);
        *v12 = v14;
      }
    }
  }
  if ( a4 > 1.0e27 )
    a4 = 1.797693134862316e308;
  v6 = (double *)((char *)result + *((_QWORD *)this + 23));
  if ( a4 != *v6 )
  {
    *v6 = a4;
    v7 = *((_DWORD *)this + 79);
    if ( (v7 & 1) != 0 )
    {
      BYTE1(v7) &= ~1u;
      *((_DWORD *)this + 79) = v7;
      result = (double *)((char *)result + *((_QWORD *)this + 126));
      if ( *(double *)(*((_QWORD *)this + 23) + 8LL * a2) == 1.797693134862316e308 )
      {
        *result = 1.797693134862316e308;
      }
      else
      {
        v8 = *((_QWORD *)this + 29);
        v9 = a4 * *((double *)this + 12);
        if ( v8 )
          v9 = v9 / *(double *)(v8 + 8LL * a2);
        *result = v9;
      }
    }
  }
  return result;
}

