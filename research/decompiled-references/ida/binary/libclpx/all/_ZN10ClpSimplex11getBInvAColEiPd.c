__int64 __fastcall ClpSimplex::getBInvACol(ClpSimplex *this, int a2, double *a3)
{
  CoinIndexedVector *v3; // r13
  int *v4; // rbp
  __int64 v7; // rax
  int v8; // edx
  int *v9; // rdi
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int v12; // esi
  double v13; // xmm0_8
  __int64 v14; // rax
  int v15; // edx
  int *v16; // rcx
  double v17; // xmm1_8
  int *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // edx
  double v23; // xmm0_8
  int v25; // eax

  v3 = *((CoinIndexedVector **)this + 132);
  if ( !v3 )
  {
    puts("ClpSimplexPrimal or ClpSimplexDual should have been called with correct startFinishOption");
    abort();
  }
  v4 = *((int **)this + 133);
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
  CoinIndexedVector::clear((CoinIndexedVector *)v4);
  v7 = *((_QWORD *)this + 28);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 27);
    if ( v8 > a2 )
    {
      ClpSimplex::unpack(this, (CoinIndexedVector *)v4, a2);
      v15 = v4[4];
      v16 = *((int **)v4 + 1);
      v17 = *(double *)(*((_QWORD *)this + 31) + 8LL * a2);
      v18 = *(int **)v4;
      if ( v15 > 0 )
      {
        v19 = (__int64)&v18[v15 - 1 + 1];
        do
        {
          v20 = *v18++;
          *(double *)&v16[2 * v20] = *(double *)&v16[2 * v20] * v17;
        }
        while ( v18 != (int *)v19 );
      }
    }
    else
    {
      CoinIndexedVector::insert((CoinIndexedVector *)v4, a2 - v8, *(double *)(v7 + 8LL * (a2 - v8)));
    }
  }
  else
  {
    v25 = *((_DWORD *)this + 27);
    if ( v25 <= a2 )
      CoinIndexedVector::insert((CoinIndexedVector *)v4, a2 - v25, 1.0);
    else
      ClpSimplex::unpack(this, (CoinIndexedVector *)v4, a2);
  }
  ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), v3, (CoinIndexedVector *)v4, 0);
  v9 = *((int **)v4 + 1);
  if ( *((_QWORD *)this + 28) )
  {
    if ( *((int *)this + 26) > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        while ( 1 )
        {
          v12 = *((_DWORD *)this + 27);
          v13 = *(double *)&v9[v10 / 2];
          v14 = *(int *)(*((_QWORD *)this + 157) + v10);
          if ( v12 <= (int)v14 )
            break;
          ++v11;
          a3[v10 / 4] = v13 * *(double *)(*((_QWORD *)this + 29) + 8 * v14);
          v10 += 4LL;
          if ( v11 >= *((_DWORD *)this + 26) )
            return CoinIndexedVector::clear((CoinIndexedVector *)v4);
        }
        ++v11;
        a3[v10 / 4] = -v13 / *(double *)(*((_QWORD *)this + 28) + 8LL * ((int)v14 - v12));
        v10 += 4LL;
      }
      while ( *((_DWORD *)this + 26) > v11 );
    }
  }
  else if ( *((int *)this + 26) > 0 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(double *)&v9[v21 / 2];
        if ( *((_DWORD *)this + 27) > *(_DWORD *)(*((_QWORD *)this + 157) + v21) )
          break;
        ++v22;
        a3[v21 / 4] = -v23;
        v21 += 4LL;
        if ( v22 >= *((_DWORD *)this + 26) )
          return CoinIndexedVector::clear((CoinIndexedVector *)v4);
      }
      a3[v21 / 4] = v23;
      ++v22;
      v21 += 4LL;
    }
    while ( *((_DWORD *)this + 26) > v22 );
  }
  return CoinIndexedVector::clear((CoinIndexedVector *)v4);
}

