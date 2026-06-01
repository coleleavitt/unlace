__int64 __fastcall CoinFactorization::factorizePart1(
        CoinFactorization *this,
        int a2,
        int a3,
        int a4,
        int **a5,
        int **a6,
        double a7,
        double **a8)
{
  int v11; // ebp
  int *v12; // rax
  bool v13; // cc
  int *v14; // rax
  double *v15; // rax

  CoinFactorization::gutsOfDestructor(this, 1);
  CoinFactorization::gutsOfInitialize(this, 2);
  if ( a7 != 0.0 )
    *((double *)this + 2) = a7;
  v11 = 3 * (a2 + a4) + 20000;
  CoinFactorization::getAreas(this, a2, a2, v11, 2 * v11);
  v12 = *((int **)this + 78);
  if ( *((int *)this + 158) <= -2 )
    v12 = nullptr;
  v13 = *((_DWORD *)this + 128) <= -2;
  *a5 = v12;
  v14 = *((int **)this + 63);
  if ( v13 )
    v14 = nullptr;
  v13 = *((_DWORD *)this + 152) <= -2;
  *a6 = v14;
  v15 = *((double **)this + 75);
  if ( v13 )
    v15 = nullptr;
  *a8 = v15;
  *((_DWORD *)this + 147) = a4;
  *((_DWORD *)this + 146) = v11;
  return 0;
}

