__int64 __fastcall ClpSimplex::getBInvRow(ClpSimplex *this, int a2, double *a3)
{
  CoinIndexedVector *v3; // r13
  CoinIndexedVector *v4; // r12
  ClpFactorization *v5; // r14
  __int64 v7; // rax
  int v8; // edx
  double v9; // xmm0_8
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 v15; // rcx
  int v16; // ecx
  double *v17; // rdi
  double *v18; // rdx
  double *v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rax

  v3 = *((CoinIndexedVector **)this + 132);
  if ( !v3 )
  {
    puts("ClpSimplexPrimal or ClpSimplexDual must have been called with correct startFinishOption");
    abort();
  }
  v4 = *((CoinIndexedVector **)this + 133);
  v5 = *((ClpFactorization **)this + 158);
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
  CoinIndexedVector::clear(v4);
  v7 = *(int *)(*((_QWORD *)this + 157) + 4LL * a2);
  v8 = *((_DWORD *)this + 27);
  if ( (int)v7 >= v8 )
  {
    v15 = *((_QWORD *)this + 28);
    v9 = -1.0;
    if ( v15 )
      v9 = -1.0 / *(double *)(v15 + 8LL * ((int)v7 - v8));
  }
  else
  {
    v9 = 1.0;
    if ( *((_QWORD *)this + 28) )
      v9 = *(double *)(*((_QWORD *)this + 29) + 8 * v7);
  }
  CoinIndexedVector::insert(v4, a2, v9);
  ClpFactorization::updateColumnTranspose(v5, v3, v4);
  v10 = *((_QWORD *)this + 28);
  if ( v10 )
  {
    v11 = *((_QWORD *)v4 + 1);
    if ( *((int *)this + 26) > 0 )
    {
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        ++v13;
        a3[v12] = *(double *)(v10 + v12 * 8) * *(double *)(v11 + v12 * 8);
        ++v12;
        if ( *((_DWORD *)this + 26) <= v13 )
          break;
        v10 = *((_QWORD *)this + 28);
      }
    }
  }
  else
  {
    v16 = *((_DWORD *)this + 26);
    v17 = *((double **)v4 + 1);
    if ( v16 && a3 != v17 )
    {
      if ( v16 >> 3 > 0 )
      {
        v18 = *((double **)v4 + 1);
        v19 = a3;
        do
        {
          v20 = *v18;
          v19 += 8;
          v18 += 8;
          *(v19 - 8) = v20;
          *(v19 - 7) = *(v18 - 7);
          *(v19 - 6) = *(v18 - 6);
          *(v19 - 5) = *(v18 - 5);
          *(v19 - 4) = *(v18 - 4);
          *(v19 - 3) = *(v18 - 3);
          *(v19 - 2) = *(v18 - 2);
          *(v19 - 1) = *(v18 - 1);
        }
        while ( v19 != &a3[8 * (unsigned int)((v16 >> 3) - 1) + 8] );
        v21 = ((v16 >> 3) - 1 + 1LL) << 6;
        v17 = (double *)((char *)v17 + v21);
        a3 = (double *)((char *)a3 + v21);
      }
      switch ( v16 % 8 )
      {
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_24;
        case 4:
          goto LABEL_23;
        case 5:
          goto LABEL_22;
        case 6:
          goto LABEL_21;
        case 7:
          a3[6] = v17[6];
LABEL_21:
          a3[5] = v17[5];
LABEL_22:
          a3[4] = v17[4];
LABEL_23:
          a3[3] = v17[3];
LABEL_24:
          a3[2] = v17[2];
LABEL_25:
          a3[1] = v17[1];
LABEL_26:
          *a3 = *v17;
          break;
        default:
          return CoinIndexedVector::clear(v4);
      }
    }
  }
  return CoinIndexedVector::clear(v4);
}

