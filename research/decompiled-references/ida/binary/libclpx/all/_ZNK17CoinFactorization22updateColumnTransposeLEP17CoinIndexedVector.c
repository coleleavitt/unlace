__int64 __fastcall CoinFactorization::updateColumnTransposeL(CoinFactorization *this, CoinIndexedVector *a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // eax
  double v5; // xmm1_8
  int v6; // ecx

  v2 = *((_DWORD *)a2 + 4);
  if ( *((_DWORD *)this + 174)
    || (result = *((unsigned int *)this + 216), (_DWORD)result)
    || (*((int *)this + 284) < -1 || !*((_QWORD *)this + 141)) && *((_DWORD *)this + 8) <= v2 )
  {
    v4 = *((_DWORD *)this + 262);
    if ( v4 <= 0 )
      return CoinFactorization::updateColumnTransposeLDensish(this, a2);
    v5 = *((double *)this + 130);
    if ( v5 == 0.0 )
    {
      if ( v4 <= v2 )
        return CoinFactorization::updateColumnTransposeLByRow(this, a2);
    }
    else
    {
      v6 = (int)((double)v2 * v5);
      if ( v4 <= v6 )
      {
        if ( *((_DWORD *)this + 263) > v6 && v2 <= *((_DWORD *)this + 8) )
          return CoinFactorization::updateColumnTransposeLSparsish(this, a2);
        return CoinFactorization::updateColumnTransposeLByRow(this, a2);
      }
    }
    if ( v2 <= *((_DWORD *)this + 8) )
      return CoinFactorization::updateColumnTransposeLSparse(this, a2);
    return CoinFactorization::updateColumnTransposeLByRow(this, a2);
  }
  return result;
}

