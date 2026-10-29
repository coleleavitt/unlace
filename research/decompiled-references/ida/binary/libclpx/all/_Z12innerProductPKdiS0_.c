double __fastcall innerProduct(const double *a1, int a2, const double *a3)
{
  double result; // xmm0_8
  unsigned __int64 v4; // rax
  double v5; // xmm1_8

  if ( a2 <= 0 )
    return 0.0;
  result = 0.0;
  v4 = 0;
  do
  {
    v5 = a1[v4 / 8] * a3[v4 / 8];
    v4 += 8LL;
    result = result + v5;
  }
  while ( 8LL * (unsigned int)(a2 - 1) + 8 != v4 );
  return result;
}

