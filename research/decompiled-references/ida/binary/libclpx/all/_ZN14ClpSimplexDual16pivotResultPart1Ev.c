__int64 __fastcall ClpSimplexDual::pivotResultPart1(ClpSimplexDual *this)
{
  double v2; // xmm0_8
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  CoinIndexedVector *v6; // rdi
  CoinIndexedVector *v7; // rdi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rbp
  CoinIndexedVector *v12; // rcx
  CoinIndexedVector *v13; // rdx
  CoinIndexedVector *v14; // rsi
  CoinIndexedVector *v15; // r8
  double v17; // [rsp+8h] [rbp-30h]
  double v18[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = *((double *)this + 116);
  v17 = v2;
  if ( *((int *)this + 77) <= 100 )
    v17 = 0.1 * v2;
  v3 = *((_QWORD *)this + 158);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 68);
  else
    v5 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 52LL);
  if ( v5 <= 10 )
  {
    if ( v5 <= 5 )
    {
      if ( v5 )
        v17 = *((double *)this + 116);
    }
    else
    {
      v17 = v2 * 100.0;
    }
  }
  else
  {
    v17 = v2 * 1000.0;
  }
  v6 = *((CoinIndexedVector **)this + 133);
  v18[0] = (double)*((int *)this + 291);
  CoinIndexedVector::clear(v6);
  CoinIndexedVector::createPacked(*((CoinIndexedVector **)this + 132), 1, (const int *)this + 292, v18);
  ClpFactorization::updateColumnTranspose(
    *((ClpFactorization **)this + 158),
    *((CoinIndexedVector **)this + 133),
    *((CoinIndexedVector **)this + 132));
  if ( *((int *)this + 83) < -1 )
    *((_DWORD *)this + 431) = 1;
  v7 = *((CoinIndexedVector **)this + 135);
  *((double *)this + 218) = v17;
  CoinIndexedVector::clear(v7);
  v8 = *((_QWORD *)this + 26);
  *((_DWORD *)this + 288) = -1;
  if ( v8 )
  {
    v9 = (*((_BYTE *)this + 728) & 8) == 0;
    v10 = *((_QWORD *)this + 28);
    v11 = *((_QWORD *)this + 29);
    *((_QWORD *)this + 28) = 0;
    *((_QWORD *)this + 29) = 0;
    if ( !v9 )
      *((_DWORD *)this + 431) = 1;
    (*(void (__fastcall **)(__int64, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(*(_QWORD *)v8 + 392LL))(
      v8,
      this,
      *((_QWORD *)this + 132),
      *((_QWORD *)this + 133),
      *((_QWORD *)this + 138),
      -1.0);
    *((_QWORD *)this + 28) = v10;
    *((_QWORD *)this + 29) = v11;
  }
  else
  {
    if ( (*((_BYTE *)this + 728) & 8) != 0 && !*((_QWORD *)this + 28) )
      *((_DWORD *)this + 431) = 1;
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 392LL))(
      *((_QWORD *)this + 24),
      this,
      *((_QWORD *)this + 132),
      *((_QWORD *)this + 133),
      *((_QWORD *)this + 138),
      -1.0);
  }
  v12 = *((CoinIndexedVector **)this + 135);
  v13 = *((CoinIndexedVector **)this + 138);
  v14 = *((CoinIndexedVector **)this + 132);
  v15 = *((CoinIndexedVector **)this + 139);
  *((double *)this + 108) = 0.00000001 * *((double *)this + 108);
  ClpSimplexDual::dualColumn(this, v14, v13, v12, v15, v17, nullptr);
  *((double *)this + 108) = 100000000.0 * *((double *)this + 108);
  return (unsigned int)-(fabs(v17) < 0.000001);
}

