double *__fastcall CoinSimpFactorization::findMaxInRrow(CoinSimpFactorization *this, int a2, double **a3)
{
  double *result; // rax
  double *v4; // rcx
  double v5; // xmm0_8
  int v6; // edx
  bool v7; // sf
  int v8; // esi
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  double v11; // xmm1_8

  result = *a3;
  v4 = &(*a3)[a2];
  v5 = *v4;
  if ( *v4 < 0.0 )
  {
    v6 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * a2);
    result = *((double **)this + 34);
    v7 = -*((_DWORD *)result + a2) < 0;
    v8 = v6 + *((_DWORD *)result + a2);
    if ( v7 != __OFSUB__(v6, v8) )
    {
      v9 = *((_QWORD *)this + 35);
      result = (double *)(v9 + 8LL * v6);
      v10 = v9 + 8 * (v6 + (unsigned __int64)(unsigned int)(v8 - v6 - 1)) + 8;
      do
      {
        v11 = *result++;
        v5 = fmax(fabs(v11), v5);
      }
      while ( result != (double *)v10 );
    }
    *v4 = v5;
  }
  return result;
}

