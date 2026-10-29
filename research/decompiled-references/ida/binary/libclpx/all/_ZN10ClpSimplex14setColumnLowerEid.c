__int64 __fastcall ClpSimplex::setColumnLower(ClpSimplex *this, int a2, double a3)
{
  __int64 result; // rax
  double *v4; // rdx
  int v5; // edx
  double v6; // xmm1_8
  __int64 v7; // rdx

  if ( a3 < -1.0e27 )
    a3 = -1.797693134862316e308;
  result = a2;
  v4 = (double *)(*((_QWORD *)this + 22) + 8LL * a2);
  if ( a3 != *v4 )
  {
    *v4 = a3;
    v5 = *((_DWORD *)this + 79);
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(v5) = v5 & 0x7F;
      v6 = -1.797693134862316e308;
      *((_DWORD *)this + 79) = v5;
      if ( *(double *)(*((_QWORD *)this + 22) + 8LL * a2) != -1.797693134862316e308 )
      {
        v7 = *((_QWORD *)this + 29);
        v6 = *((double *)this + 12) * a3;
        if ( v7 )
          v6 = v6 / *(double *)(v7 + 8LL * a2);
      }
      *(double *)(*((_QWORD *)this + 123) + 8LL * a2) = v6;
      result = *((unsigned int *)this + 121);
      if ( (int)result >= 0 )
      {
        result = *((_DWORD *)this + 120) + a2 + (int)result;
        *(double *)(*((_QWORD *)this + 123) + 8 * result) = v6;
      }
    }
  }
  return result;
}

