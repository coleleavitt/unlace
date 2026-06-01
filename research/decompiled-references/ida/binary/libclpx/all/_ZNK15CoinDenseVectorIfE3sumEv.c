double __fastcall CoinDenseVector<float>::sum(__int64 a1)
{
  float *v1; // rdx
  double result; // xmm0_8
  float *v3; // rax
  __int64 v4; // rcx

  if ( *(int *)a1 <= 0 )
    return 0.0;
  v1 = *(float **)(a1 + 8);
  result = 0.0;
  v3 = v1 + 1;
  v4 = (__int64)&v1[*(_DWORD *)a1 - 1 + 1];
  while ( 1 )
  {
    *(float *)&result = *(float *)&result + *v1;
    v1 = v3;
    if ( (float *)v4 == v3 )
      break;
    ++v3;
  }
  return result;
}

