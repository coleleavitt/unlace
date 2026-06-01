__int64 __fastcall CoinDenseVector<float>::setConstant(__int64 a1, int a2, float a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // edx
  int v8; // ecx
  float *v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __m128 v12; // xmm0
  int v13; // edx

  result = CoinDenseVector<float>::resize(0.0);
  if ( a2 <= 0 )
    return result;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = -(int)(v5 >> 2) & 3;
  v7 = v6 + 3;
  if ( (unsigned int)(v6 + 3) < 5 )
    v7 = 5;
  if ( a2 - 1 < v7 )
  {
    result = 0;
LABEL_12:
    *(float *)(v5 + 4LL * (int)result) = a3;
    if ( a2 > (int)result + 1 )
    {
      *(float *)(v5 + 4LL * ((int)result + 1)) = a3;
      if ( a2 > (int)result + 2 )
      {
        *(float *)(v5 + 4LL * ((int)result + 2)) = a3;
        if ( a2 > (int)result + 3 )
        {
          *(float *)(v5 + 4LL * ((int)result + 3)) = a3;
          v13 = result + 4;
          if ( a2 > (int)result + 4 )
          {
            result = (unsigned int)(result + 5);
            *(float *)(v5 + 4LL * v13) = a3;
            if ( a2 > (int)result )
            {
              result = (int)result;
              *(float *)(v5 + 4LL * (int)result) = a3;
            }
          }
        }
      }
    }
    return result;
  }
  v8 = 0;
  if ( (_DWORD)v6 )
  {
    *(float *)v5 = a3;
    v8 = 1;
    if ( (_DWORD)v6 != 1 )
    {
      *(float *)(v5 + 4) = a3;
      v8 = 2;
      if ( (_DWORD)v6 != 2 )
      {
        *(float *)(v5 + 8) = a3;
        v8 = 3;
      }
    }
  }
  v9 = (float *)(v5 + 4 * v6);
  v10 = a2 - v6;
  v11 = 0;
  v12 = _mm_shuffle_ps((__m128)LODWORD(a3), (__m128)LODWORD(a3), 0);
  do
  {
    ++v11;
    v9 += 4;
    *((__m128 *)v9 - 1) = v12;
  }
  while ( v11 < v10 >> 2 );
  result = (v10 & 0xFFFFFFFC) + v8;
  if ( v10 != (v10 & 0xFFFFFFFC) )
    goto LABEL_12;
  return result;
}

