__int64 __fastcall CoinSimpFactorization::Lxeqb(CoinSimpFactorization *this, double *a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rcx
  int *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdx
  double v8; // xmm1_8
  __int64 v9; // rcx
  __int64 v10; // r9
  double *v11; // rdx
  __int64 v12; // rcx
  double v13; // xmm2_8

  v2 = *((_DWORD *)this + 142);
  result = *((unsigned int *)this + 9);
  if ( v2 < (int)result )
  {
    v4 = *((_QWORD *)this + 53);
    result = v2 + (unsigned __int64)(unsigned int)(result - 1 - v2);
    v5 = (int *)(v4 + 4LL * v2);
    v6 = v4 + 4 * result + 4;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        v8 = a2[v7];
        if ( v8 != 0.0 )
        {
          v9 = *(int *)(*((_QWORD *)this + 28) + 4 * v7);
          result = *((_QWORD *)this + 31) + 4 * v9;
          v10 = result + 4LL * *(int *)(*((_QWORD *)this + 29) + 4 * v7);
          v11 = (double *)(*((_QWORD *)this + 30) + 8 * v9);
          if ( result != v10 )
            break;
        }
        if ( ++v5 == (int *)v6 )
          return result;
      }
      do
      {
        v12 = *(int *)result;
        v13 = *v11;
        result += 4;
        ++v11;
        a2[v12] = a2[v12] - v13 * v8;
      }
      while ( v10 != result );
      ++v5;
    }
    while ( v5 != (int *)v6 );
  }
  return result;
}

