__int64 __fastcall CoinFactorization::updateColumnU(CoinFactorization *this, CoinIndexedVector *a2, int *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  v3 = *((_DWORD *)this + 262);
  if ( v3 <= 0 )
    goto LABEL_8;
  v4 = *((_DWORD *)a2 + 4);
  if ( *((double *)this + 126) == 0.0 )
  {
    if ( v3 <= v4 )
      goto LABEL_8;
LABEL_10:
    CoinFactorization::updateColumnUSparse(this, a2, a3);
    result = *((unsigned int *)a2 + 4);
    goto LABEL_6;
  }
  v5 = (int)((double)v4 * *((double *)this + 127));
  if ( v3 > v5 )
    goto LABEL_10;
  if ( *((_DWORD *)this + 263) > v5 )
  {
    CoinFactorization::updateColumnUSparsish(this, a2, a3);
    result = *((unsigned int *)a2 + 4);
    goto LABEL_6;
  }
LABEL_8:
  result = CoinFactorization::updateColumnUDensish(this, *((double **)a2 + 1), *(int **)a2);
  *((_DWORD *)a2 + 4) = result;
  if ( !(_DWORD)result )
    *((_BYTE *)a2 + 28) = 0;
LABEL_6:
  *((double *)this + 119) = (double)(int)result + *((double *)this + 119);
  return result;
}

