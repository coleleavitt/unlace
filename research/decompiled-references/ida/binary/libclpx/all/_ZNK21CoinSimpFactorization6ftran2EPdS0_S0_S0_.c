__int64 __fastcall CoinSimpFactorization::ftran2(
        CoinSimpFactorization *this,
        double *a2,
        double *a3,
        double *a4,
        double *a5)
{
  int v9; // edx
  double *v10; // rcx
  int i; // eax
  double v12; // xmm0_8
  __int64 v13; // rsi
  __int64 v14; // rdi

  CoinSimpFactorization::Lxeqb2(this, a2, a4);
  CoinSimpFactorization::Hxeqb2(this, a2, a4);
  v9 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 44) = 0;
  if ( v9 > 0 )
  {
    v10 = a2;
    for ( i = 0; i < v9; ++i )
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *((double *)this + 2) > fabs(*v10) )
          break;
        v13 = *((int *)this + 44);
        ++v10;
        *(double *)(*((_QWORD *)this + 20) + 8 * v13) = v12;
        v14 = *((_QWORD *)this + 21);
        *((_DWORD *)this + 44) = v13 + 1;
        *(_DWORD *)(v14 + 4 * v13) = i;
        v9 = *((_DWORD *)this + 9);
        if ( ++i >= v9 )
          return CoinSimpFactorization::Uxeqb2(this, a2, a3, a4, a5);
      }
      ++v10;
    }
  }
  return CoinSimpFactorization::Uxeqb2(this, a2, a3, a4, a5);
}

