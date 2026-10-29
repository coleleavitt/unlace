__int64 __fastcall ClpSimplex::primalRanging(
        ClpSimplex *this,
        int a2,
        const int *a3,
        double *a4,
        int *a5,
        double *a6,
        int *a7)
{
  int v11; // ebx
  int v12; // eax
  double v14; // xmm0_8
  __int64 v15; // xmm1_8
  char v16; // [rsp+7h] [rbp-51h]
  _BYTE v17[60]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v11 = *((_DWORD *)this + 327);
  *((_DWORD *)this + 327) = 100;
  ClpSimplexPrimal::primal(this, 0, 1);
  v12 = *((_DWORD *)this + 80);
  if ( v12 != 10 )
    goto LABEL_2;
  v16 = ClpSimplex::initialDenseFactorization(this);
  ClpSimplex::setInitialDenseFactorization(this, 1);
  if ( ((*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, _BYTE *))(**((_QWORD **)this + 24) + 320LL))(
          *((_QWORD *)this + 24),
          this,
          4,
          v17)
      & 2) != 0 )
  {
    v14 = *((double *)this + 107);
    v15 = *((_QWORD *)this + 98);
    if ( v14 > 0.0 )
      *((double *)this + 98) = v14 + v14;
    ClpSimplexDual::dual(this, 0, 1);
    *((_QWORD *)this + 98) = v15;
  }
  else
  {
    ClpSimplexPrimal::primal(this, 0, 1);
  }
  ClpSimplex::setInitialDenseFactorization(this, v16);
  v12 = *((_DWORD *)this + 80);
  if ( v12 == 10 )
  {
    *((_DWORD *)this + 80) = 0;
    *((_DWORD *)this + 327) = v11;
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 327) = v11;
    if ( v12 )
      goto LABEL_5;
  }
  if ( *((_DWORD *)this + 81) != 6 )
  {
    ClpSimplexOther::primalRanging(this, a2, a3, a4, a5, a6, a7);
    ClpSimplex::finish(this, 0);
    return 0;
  }
LABEL_5:
  ClpSimplex::finish(this, 0);
  return 1;
}

