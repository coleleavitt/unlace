__int64 __fastcall ClpFactorization::saferTolerances(ClpFactorization *this, double a2, double a3)
{
  double *v4; // rdi
  CoinFactorization *v5; // rdi
  double v6; // xmm0_8
  double v7; // xmm1_8
  __int64 result; // rax
  double v9; // xmm0_8
  __int64 v10; // rax

  v4 = *((double **)this + 1);
  if ( v4 )
    CoinFactorization::zeroTolerance((CoinFactorization *)v4, fmin(v4[1], a2));
  else
    CoinOtherFactorization::zeroTolerance(
      *((CoinOtherFactorization **)this + 2),
      fmin(*(double *)(*((_QWORD *)this + 2) + 16LL), a2));
  v5 = *((CoinFactorization **)this + 1);
  if ( a3 <= 0.0 )
  {
    if ( v5 )
    {
      v9 = -*(double *)v5;
    }
    else
    {
      v10 = *((_QWORD *)this + 2);
      if ( v10 )
        v9 = -*(double *)(v10 + 8);
      else
        v9 = -0.00000001;
    }
    a3 = a3 * v9;
    if ( v5 )
      goto LABEL_5;
  }
  else if ( v5 )
  {
LABEL_5:
    v6 = *(double *)v5;
    goto LABEL_6;
  }
  result = *((_QWORD *)this + 2);
  if ( !result )
    return result;
  v6 = *(double *)(result + 8);
LABEL_6:
  v7 = fmin(fmax(v6, a3), 0.999);
  if ( v5 )
    return CoinFactorization::pivotTolerance(v5, v7);
  result = *((_QWORD *)this + 2);
  if ( result )
    return CoinOtherFactorization::pivotTolerance(*((CoinOtherFactorization **)this + 2), v7);
  return result;
}

