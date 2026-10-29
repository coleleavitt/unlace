double __fastcall CoinDenseVector<double>::sum(__int64 a1)
{
  double *v1; // rdx
  double result; // xmm0_8
  double *v3; // rax
  __int64 v4; // rcx

  if ( *(int *)a1 <= 0 )
    return 0.0;
  v1 = *(double **)(a1 + 8);
  result = 0.0;
  v3 = v1 + 1;
  v4 = (__int64)&v1[(unsigned int)(*(_DWORD *)a1 - 1) + 1];
  while ( 1 )
  {
    result = result + *v1;
    v1 = v3;
    if ( (double *)v4 == v3 )
      break;
    ++v3;
  }
  return result;
}

