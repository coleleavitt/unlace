__int64 __fastcall CoinPackedMatrix::timesMajor(CoinPackedMatrix *this, const double *a2, double *a3)
{
  double *v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  double v9; // xmm1_8
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  double v15; // xmm0_8

  v5 = (double *)memset(a3, 0, 8LL * *((int *)this + 17));
  result = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)result;
    v7 = 4LL * (int)result;
    v8 = 4 * ((int)result - (unsigned __int64)(unsigned int)result) - 4;
    do
    {
      while ( 1 )
      {
        v9 = a2[v7 / 4];
        if ( v9 != 0.0 )
        {
          result = *(int *)(*((_QWORD *)this + 6) + v7);
          v10 = *(_DWORD *)(*((_QWORD *)this + 7) + v7);
          if ( (int)result < (int)result + v10 )
            break;
        }
        v7 -= 4LL;
        if ( v8 == v7 )
          return result;
      }
      v11 = (unsigned int)(v10 - 1) + 1LL;
      v12 = *((_QWORD *)this + 5) + 4 * result;
      v13 = *((_QWORD *)this + 4) + 8 * result;
      result = 0;
      do
      {
        v14 = *(int *)(v12 + 4 * result);
        v15 = *(double *)(v13 + 8 * result++);
        v5[v14] = v15 * v9 + v5[v14];
      }
      while ( result != v11 );
      v7 -= 4LL;
    }
    while ( v8 != v7 );
  }
  return result;
}

