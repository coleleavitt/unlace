__int64 __fastcall CoinDenseVector<double>::setConstant(__int64 a1, int a2, double a3)
{
  __int64 result; // rax
  double *v5; // rdi
  __int64 v6; // rax
  int v7; // ecx
  double *v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  __m128d v11; // xmm0
  int v12; // edx

  result = CoinDenseVector<double>::resize(0.0);
  if ( a2 <= 0 )
    return result;
  v5 = *(double **)(a1 + 8);
  v6 = (*(_QWORD *)(a1 + 8) >> 3) & 1LL;
  if ( (unsigned int)(a2 - 1) <= 4 )
  {
    result = 0;
LABEL_8:
    v5[(int)result] = a3;
    if ( a2 > (int)result + 1 )
    {
      v5[(int)result + 1] = a3;
      if ( a2 > (int)result + 2 )
      {
        v5[(int)result + 2] = a3;
        v12 = result + 3;
        if ( a2 > (int)result + 3 )
        {
          result = (unsigned int)(result + 4);
          v5[v12] = a3;
          if ( a2 > (int)result )
          {
            result = (int)result;
            v5[(int)result] = a3;
          }
        }
      }
    }
    return result;
  }
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    *v5 = a3;
    v7 = 1;
  }
  v8 = &v5[v6];
  v9 = a2 - v6;
  v10 = 0;
  v11 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&a3, (__m128d)*(unsigned __int64 *)&a3);
  do
  {
    ++v10;
    v8 += 2;
    *((__m128d *)v8 - 1) = v11;
  }
  while ( v10 < v9 >> 1 );
  result = (v9 & 0xFFFFFFFE) + v7;
  if ( v9 != (v9 & 0xFFFFFFFE) )
    goto LABEL_8;
  return result;
}

