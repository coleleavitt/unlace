__int64 __fastcall ClpSimplexOther::bestPivot(ClpSimplexOther *this, char a2)
{
  double v3; // xmm1_8
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  CoinIndexedVector *v7; // rdi
  double v9[4]; // [rsp+18h] [rbp-20h] BYREF

  v3 = 0.00000001;
  if ( *((int *)this + 77) <= 100 )
    v3 = 0.000000001;
  v4 = *((_QWORD *)this + 158);
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 68);
  else
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 52LL);
  if ( v6 > 10 )
    goto LABEL_13;
  if ( !v6 )
    goto LABEL_10;
  if ( *((double *)this + 111) == 0.0 )
  {
    if ( v6 <= 5 )
      v3 = 0.00000001;
    else
      v3 = 0.000001;
  }
  else
  {
LABEL_13:
    v3 = 0.00001;
  }
LABEL_10:
  v7 = *((CoinIndexedVector **)this + 132);
  v9[0] = (double)*((int *)this + 291);
  CoinIndexedVector::createPacked(v7, 1, (const int *)this + 292, v9);
  ClpFactorization::updateColumnTranspose(
    *((ClpFactorization **)this + 158),
    *((CoinIndexedVector **)this + 133),
    *((CoinIndexedVector **)this + 132));
  (*(void (__fastcall **)(_QWORD, ClpSimplexOther *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 392LL))(
    *((_QWORD *)this + 24),
    this,
    *((_QWORD *)this + 132),
    *((_QWORD *)this + 135),
    *((_QWORD *)this + 138),
    -1.0);
  *((_DWORD *)this + 288) = -1;
  if ( a2 )
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
  return ClpSimplexDual::dualColumn(
           this,
           *((CoinIndexedVector **)this + 132),
           *((CoinIndexedVector **)this + 138),
           *((CoinIndexedVector **)this + 139),
           *((CoinIndexedVector **)this + 135),
           v3,
           nullptr);
}

