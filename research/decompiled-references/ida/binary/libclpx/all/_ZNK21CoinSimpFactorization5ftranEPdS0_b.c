__int64 __fastcall CoinSimpFactorization::ftran(CoinSimpFactorization *this, double *a2, double *a3, char a4)
{
  double *v5; // rbp
  int v8; // edx
  int i; // eax
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rdi

  v5 = a2;
  CoinSimpFactorization::Lxeqb(this, a2);
  CoinSimpFactorization::Hxeqb(this, a2);
  if ( a4 )
  {
    v8 = *((_DWORD *)this + 9);
    *((_DWORD *)this + 44) = 0;
    if ( v8 > 0 )
    {
      for ( i = 0; i < v8; ++i )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)a2;
          if ( *((double *)this + 2) > fabs(*a2) )
            break;
          v11 = *((int *)this + 44);
          ++a2;
          *(_QWORD *)(*((_QWORD *)this + 20) + 8 * v11) = v10;
          v12 = *((_QWORD *)this + 21);
          *((_DWORD *)this + 44) = v11 + 1;
          *(_DWORD *)(v12 + 4 * v11) = i;
          v8 = *((_DWORD *)this + 9);
          if ( ++i >= v8 )
            return CoinSimpFactorization::Uxeqb(this, v5, a3);
        }
        ++a2;
      }
    }
  }
  return CoinSimpFactorization::Uxeqb(this, v5, a3);
}

