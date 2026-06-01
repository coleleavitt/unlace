__int64 __fastcall ClpSimplex::dualRanging(
        ClpSimplex *this,
        int a2,
        const int *a3,
        double *a4,
        int *a5,
        double *a6,
        int *a7,
        double *a8,
        double *a9)
{
  int v13; // ebx
  int v14; // eax
  double v16; // xmm0_8
  __int64 v17; // xmm1_8
  char v18; // [rsp+7h] [rbp-51h]
  _BYTE v19[60]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v13 = *((_DWORD *)this + 327);
  *((_DWORD *)this + 327) = 100;
  ClpSimplexPrimal::primal(this, 0, 1);
  v14 = *((_DWORD *)this + 80);
  if ( v14 != 10 )
    goto LABEL_2;
  v18 = ClpSimplex::initialDenseFactorization(this);
  ClpSimplex::setInitialDenseFactorization(this, 1);
  if ( ((*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, _BYTE *))(**((_QWORD **)this + 24) + 320LL))(
          *((_QWORD *)this + 24),
          this,
          4,
          v19)
      & 2) != 0 )
  {
    v16 = *((double *)this + 107);
    v17 = *((_QWORD *)this + 98);
    if ( v16 > 0.0 )
      *((double *)this + 98) = v16 + v16;
    ClpSimplexDual::dual(this, 0, 1);
    *((_QWORD *)this + 98) = v17;
  }
  else
  {
    ClpSimplexPrimal::primal(this, 0, 1);
  }
  ClpSimplex::setInitialDenseFactorization(this, v18);
  v14 = *((_DWORD *)this + 80);
  if ( v14 == 10 )
  {
    *((_DWORD *)this + 80) = 0;
    *((_DWORD *)this + 327) = v13;
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 327) = v13;
    if ( v14 )
      goto LABEL_5;
  }
  if ( *((_DWORD *)this + 81) != 6 )
  {
    ClpSimplexOther::dualRanging(this, a2, a3, a4, a5, a6, a7, a8, a9);
    ClpSimplex::finish(this, 0);
    return 0;
  }
LABEL_5:
  ClpSimplex::finish(this, 0);
  return 1;
}

