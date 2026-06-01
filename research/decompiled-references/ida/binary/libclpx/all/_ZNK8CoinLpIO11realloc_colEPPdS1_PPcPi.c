__int64 __fastcall CoinLpIO::realloc_col(CoinLpIO *this, double **a2, double **a3, char **a4, int *a5, double a6)
{
  void *v9; // rdi
  __int64 v12; // rsi
  int v13; // esi
  __int64 v14; // rdi
  __int64 result; // rax

  v9 = *a2;
  v12 = *a5 + 101;
  *a5 += 100;
  *a2 = (double *)realloc(v9, 8 * v12);
  *a3 = (double *)realloc(*a3, 8LL * (*a5 + 1));
  *a4 = (char *)realloc(*a4, *a5 + 1);
  CoinLpIO::getInfinity(this);
  v13 = *a5 - 100;
  v14 = v13;
  result = v13;
  do
  {
    ++v13;
    (*a2)[result] = 0.0;
    (*a3)[result++] = a6;
    (*a4)[v14++] = 0;
  }
  while ( *a5 > v13 );
  return result * 8;
}

