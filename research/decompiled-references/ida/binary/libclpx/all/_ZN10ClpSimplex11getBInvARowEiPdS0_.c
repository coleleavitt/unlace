__int64 __fastcall ClpSimplex::getBInvARow(ClpSimplex *this, int a2, double *a3, double *a4)
{
  CoinIndexedVector *v4; // r12
  CoinIndexedVector *v5; // rbp
  CoinIndexedVector *v6; // r13
  __int64 v9; // rax
  int v10; // edx
  double v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  int v20; // ecx
  double *v21; // rsi
  double *v22; // rax
  double *v23; // rdx
  __int64 v24; // r8
  double v25; // xmm0_8
  __int64 v26; // rax
  int v27; // ecx
  double *v28; // rdi
  double *v29; // rdx
  double *v30; // rax
  double v31; // xmm0_8
  __int64 v32; // rax
  CoinIndexedVector *v33; // [rsp+0h] [rbp-48h]

  v4 = *((CoinIndexedVector **)this + 132);
  if ( !v4 )
  {
    puts("ClpSimplexPrimal or ClpSimplexDual must have been called with correct startFinishOption");
    abort();
  }
  v5 = *((CoinIndexedVector **)this + 133);
  v6 = *((CoinIndexedVector **)this + 138);
  v33 = *((CoinIndexedVector **)this + 139);
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
  CoinIndexedVector::clear(v5);
  CoinIndexedVector::clear(v6);
  CoinIndexedVector::clear(v33);
  v9 = *(int *)(*((_QWORD *)this + 157) + 4LL * a2);
  if ( *((_QWORD *)this + 28) )
  {
    v10 = *((_DWORD *)this + 27);
    if ( v10 > (int)v9 )
      v11 = *(double *)(*((_QWORD *)this + 29) + 8 * v9);
    else
      v11 = -*(double *)(*((_QWORD *)this + 30) + 8LL * ((int)v9 - v10));
  }
  else if ( *((_DWORD *)this + 27) <= (int)v9 )
  {
    v11 = -1.0;
  }
  else
  {
    v11 = 1.0;
  }
  CoinIndexedVector::insert(v5, a2, v11);
  ClpFactorization::updateColumnTranspose(*((ClpFactorization **)this + 158), v4, v5);
  (*(void (__fastcall **)(_QWORD, ClpSimplex *, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**((_QWORD **)this + 24) + 392LL))(
    *((_QWORD *)this + 24),
    this,
    v5,
    v33,
    v6,
    1.0);
  v12 = *((_QWORD *)this + 28);
  if ( v12 )
  {
    v13 = *((_QWORD *)v6 + 1);
    if ( *((int *)this + 27) <= 0 )
    {
      if ( !a4 )
        goto LABEL_15;
LABEL_11:
      v16 = *((_QWORD *)v5 + 1);
      if ( *((int *)this + 26) > 0 )
      {
        v17 = 0;
        v18 = 0;
        while ( 1 )
        {
          ++v18;
          a4[v17] = *(double *)(v12 + v17 * 8) * *(double *)(v16 + v17 * 8);
          ++v17;
          if ( *((_DWORD *)this + 26) <= v18 )
            break;
          v12 = *((_QWORD *)this + 28);
        }
      }
      goto LABEL_15;
    }
    v14 = 0;
    v15 = 0;
    do
    {
      ++v15;
      a3[v14] = *(double *)(*((_QWORD *)this + 31) + v14 * 8) * *(double *)(v13 + v14 * 8);
      ++v14;
    }
    while ( *((_DWORD *)this + 27) > v15 );
  }
  else
  {
    v20 = *((_DWORD *)this + 27);
    v21 = *((double **)v6 + 1);
    if ( !v20 || a3 == v21 )
    {
      if ( !a4 )
        goto LABEL_15;
      goto LABEL_37;
    }
    if ( v20 >> 3 > 0 )
    {
      v22 = a3;
      v23 = *((double **)v6 + 1);
      v24 = (unsigned int)((v20 >> 3) - 1);
      do
      {
        v25 = *v23;
        v22 += 8;
        v23 += 8;
        *(v22 - 8) = v25;
        *(v22 - 7) = *(v23 - 7);
        *(v22 - 6) = *(v23 - 6);
        *(v22 - 5) = *(v23 - 5);
        *(v22 - 4) = *(v23 - 4);
        *(v22 - 3) = *(v23 - 3);
        *(v22 - 2) = *(v23 - 2);
        *(v22 - 1) = *(v23 - 1);
      }
      while ( v22 != &a3[8 * v24 + 8] );
      v26 = ((int)v24 + 1LL) << 6;
      v21 = (double *)((char *)v21 + v26);
      a3 = (double *)((char *)a3 + v26);
    }
    switch ( v20 % 8 )
    {
      case 1:
        goto LABEL_33;
      case 2:
        goto LABEL_32;
      case 3:
        goto LABEL_31;
      case 4:
        goto LABEL_30;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_28;
      case 7:
        a3[6] = v21[6];
LABEL_28:
        a3[5] = v21[5];
LABEL_29:
        a3[4] = v21[4];
LABEL_30:
        a3[3] = v21[3];
LABEL_31:
        a3[2] = v21[2];
LABEL_32:
        a3[1] = v21[1];
LABEL_33:
        *a3 = *v21;
        break;
      default:
        break;
    }
  }
  if ( !a4 )
    goto LABEL_15;
  v12 = *((_QWORD *)this + 28);
  if ( v12 )
    goto LABEL_11;
LABEL_37:
  v27 = *((_DWORD *)this + 26);
  v28 = *((double **)v5 + 1);
  if ( v27 && a4 != v28 )
  {
    if ( v27 >> 3 > 0 )
    {
      v29 = *((double **)v5 + 1);
      v30 = a4;
      do
      {
        v31 = *v29;
        v30 += 8;
        v29 += 8;
        *(v30 - 8) = v31;
        *(v30 - 7) = *(v29 - 7);
        *(v30 - 6) = *(v29 - 6);
        *(v30 - 5) = *(v29 - 5);
        *(v30 - 4) = *(v29 - 4);
        *(v30 - 3) = *(v29 - 3);
        *(v30 - 2) = *(v29 - 2);
        *(v30 - 1) = *(v29 - 1);
      }
      while ( v30 != &a4[8 * (unsigned int)((v27 >> 3) - 1) + 8] );
      v32 = ((v27 >> 3) - 1 + 1LL) << 6;
      v28 = (double *)((char *)v28 + v32);
      a4 = (double *)((char *)a4 + v32);
    }
    switch ( v27 % 8 )
    {
      case 1:
        goto LABEL_50;
      case 2:
        goto LABEL_49;
      case 3:
        goto LABEL_48;
      case 4:
        goto LABEL_47;
      case 5:
        goto LABEL_46;
      case 6:
        goto LABEL_45;
      case 7:
        a4[6] = v28[6];
LABEL_45:
        a4[5] = v28[5];
LABEL_46:
        a4[4] = v28[4];
LABEL_47:
        a4[3] = v28[3];
LABEL_48:
        a4[2] = v28[2];
LABEL_49:
        a4[1] = v28[1];
LABEL_50:
        *a4 = *v28;
        break;
      default:
        break;
    }
  }
LABEL_15:
  CoinIndexedVector::clear(v4);
  CoinIndexedVector::clear(v5);
  CoinIndexedVector::clear(v6);
  return CoinIndexedVector::clear(v33);
}

