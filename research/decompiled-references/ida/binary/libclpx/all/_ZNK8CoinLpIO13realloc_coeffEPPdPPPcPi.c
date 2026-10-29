double *__fastcall CoinLpIO::realloc_coeff(CoinLpIO *this, double **a2, char ***a3, int *a4)
{
  int v4; // eax
  void *v7; // rdi
  char **v9; // rax
  int v10; // esi
  void *v11; // rdi
  double *result; // rax

  v4 = *a4;
  v7 = *a3;
  *a4 *= 5;
  v9 = (char **)realloc(v7, 8LL * (5 * v4 + 1));
  v10 = *a4;
  v11 = *a2;
  *a3 = v9;
  result = (double *)realloc(v11, 8LL * (v10 + 1));
  *a2 = result;
  return result;
}

