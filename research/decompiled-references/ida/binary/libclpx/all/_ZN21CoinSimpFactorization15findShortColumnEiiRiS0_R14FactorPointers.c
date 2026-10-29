__int64 __fastcall CoinSimpFactorization::findShortColumn(
        CoinSimpFactorization *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        FactorPointers *a6,
        double a7)
{
  int v11; // r14d
  int v12; // r15d
  int v13; // r15d
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rdx
  int *v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  int *v21; // rdi

  v11 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * a2);
  v12 = *(_DWORD *)(*((_QWORD *)this + 34) + 4LL * a2);
  *a4 = -1;
  *a5 = 0x7FFFFFFF;
  CoinSimpFactorization::findMaxInRrow(this, a2, a6);
  v13 = v11 + v12;
  if ( v11 >= v13 )
    return 1;
  v14 = *((_QWORD *)this + 36);
  v15 = *((_QWORD *)this + 42);
  v16 = *a5;
  v17 = 8LL * v11;
  v18 = (int *)(v14 + 4LL * v11);
  v19 = v14 + 4 * (v11 + (unsigned __int64)(unsigned int)(v13 - v11 - 1)) + 4;
  while ( 1 )
  {
    v20 = *v18;
    v21 = (int *)(v15 + 4 * v20);
    if ( *v21 < v16 && *((double *)this + 1) * a7 <= fabs(*(double *)(*((_QWORD *)this + 35) + v17)) )
    {
      *a4 = v20;
      v16 = *v21;
      *a5 = *v21;
      if ( v16 <= a3 )
        break;
    }
    ++v18;
    v17 += 8;
    if ( (int *)v19 == v18 )
      return 1;
  }
  return 0;
}

