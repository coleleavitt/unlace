__int64 __fastcall CoinBuild::currentItem(
        CoinBuild *this,
        double *a2,
        double *a3,
        double *a4,
        const int **a5,
        const double **a6)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // xmm0_8

  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)(v6 + 12);
  v8 = *(_QWORD *)(v6 + 16);
  *a6 = (const double *)(v6 + 40);
  *a5 = (const int *)(v6 + 40 + 8LL * (int)result);
  *(_QWORD *)a4 = v8;
  *a2 = *(double *)(v6 + 24);
  *a3 = *(double *)(v6 + 32);
  return result;
}

