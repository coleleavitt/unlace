double *__fastcall CoinLpIO::realloc_row(
        CoinLpIO *this,
        char ***a2,
        void **a3,
        double **a4,
        double **a5,
        double **a6,
        int *a7)
{
  void *v11; // rdi
  int v12; // eax
  double *v13; // rax
  int v14; // esi
  double *result; // rax

  v11 = *a2;
  v12 = *a7;
  *a7 *= 5;
  *a2 = (char **)realloc(v11, 8LL * (5 * v12 + 1));
  *a3 = realloc(*a3, 4LL * (*a7 + 1));
  *a4 = (double *)realloc(*a4, 8LL * (*a7 + 1));
  v13 = (double *)realloc(*a5, 8LL * (*a7 + 1));
  v14 = *a7;
  *a5 = v13;
  result = (double *)realloc(*a6, 8LL * (v14 + 1));
  *a6 = result;
  return result;
}

