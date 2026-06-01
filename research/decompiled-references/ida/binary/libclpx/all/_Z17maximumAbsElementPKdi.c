double __fastcall maximumAbsElement(const double *a1, int a2)
{
  double result; // xmm0_8
  const double *v3; // rax
  double v4; // xmm1_8

  if ( a2 <= 0 )
    return 0.0;
  result = 0.0;
  v3 = &a1[(unsigned int)(a2 - 1) + 1];
  do
  {
    v4 = *a1++;
    result = fmax(result, fabs(v4));
  }
  while ( a1 != v3 );
  return result;
}

