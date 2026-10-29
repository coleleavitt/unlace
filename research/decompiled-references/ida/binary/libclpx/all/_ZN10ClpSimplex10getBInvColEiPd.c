__int64 __fastcall ClpSimplex::getBInvCol(ClpSimplex *this, int a2, double *a3)
{
  CoinIndexedVector *v3; // r13
  CoinIndexedVector *v4; // rbp
  __int64 v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int v12; // esi
  double v13; // xmm0_8
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // edx
  double v17; // xmm0_8

  v3 = *((CoinIndexedVector **)this + 132);
  if ( !v3 )
  {
    puts("ClpSimplexPrimal or ClpSimplexDual must have been called with correct startFinishOption");
    abort();
  }
  v4 = *((CoinIndexedVector **)this + 133);
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
  CoinIndexedVector::clear(v4);
  v7 = *((_QWORD *)this + 28);
  if ( v7 )
    v8 = *(double *)(v7 + 8LL * a2);
  else
    v8 = 1.0;
  CoinIndexedVector::insert(v4, a2, v8);
  ClpFactorization::updateColumn(*((ClpFactorization **)this + 158), v3, v4, 0);
  v9 = *((_QWORD *)v4 + 1);
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
          v13 = *(double *)(v9 + 2 * v10);
          v14 = *(int *)(*((_QWORD *)this + 157) + v10);
          if ( v12 <= (int)v14 )
            break;
          ++v11;
          a3[v10 / 4] = v13 * *(double *)(*((_QWORD *)this + 29) + 8 * v14);
          v10 += 4LL;
          if ( v11 >= *((_DWORD *)this + 26) )
            return CoinIndexedVector::clear(v4);
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
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = *(double *)(v9 + 2 * v15);
      if ( *((_DWORD *)this + 27) <= *(_DWORD *)(*((_QWORD *)this + 157) + v15) )
        v17 = -v17;
      a3[v15 / 4] = v17;
      ++v16;
      v15 += 4LL;
    }
    while ( *((_DWORD *)this + 26) > v16 );
  }
  return CoinIndexedVector::clear(v4);
}

