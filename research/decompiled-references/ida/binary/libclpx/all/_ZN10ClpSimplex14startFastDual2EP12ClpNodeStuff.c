__int64 __fastcall ClpSimplex::startFastDual2(ClpSimplex *this, ClpNodeStuff *a2)
{
  int v4; // eax
  bool v5; // zf
  CoinFactorization *v6; // rdi
  int v7; // eax
  CoinFactorization **v8; // rdi
  int v9; // ebp
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r13
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi
  __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  _QWORD *v18; // rsi
  int v19; // r15d
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  int v30; // [rsp+Ch] [rbp-3Ch]

  v4 = *((_DWORD *)this + 84);
  *((_DWORD *)a2 + 36) |= 0x10000u;
  *((_DWORD *)a2 + 35) = v4;
  v5 = (*((_BYTE *)this + 338) & 1) == 0;
  v6 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
  if ( v5 )
  {
    if ( v6 )
      CoinFactorization::setPersistenceFlag(v6, 2);
  }
  else
  {
    if ( v6 )
      CoinFactorization::setPersistenceFlag(v6, 2);
    ClpSimplex::startPermanentArrays(this);
  }
  ClpSimplex::createRim(this, 63, 1, 0);
  *((_DWORD *)this + 79) = 0x3FFFFFF;
  v7 = ClpSimplex::internalFactorize(this, 0);
  if ( v7 < 0 || v7 && *((_DWORD *)this + 26) >= v7 )
  {
    ClpSimplex::dual(this, 0, 7);
    ClpSimplex::createRim(this, 63, 1, 0);
    if ( (unsigned int)ClpSimplex::internalFactorize(this, 0) )
      abort();
  }
  v8 = *((CoinFactorization ***)this + 158);
  if ( v8[1] )
  {
    CoinFactorization::sparseThreshold(v8[1], 0);
    v8 = *((CoinFactorization ***)this + 158);
  }
  ClpFactorization::goSparse((ClpFactorization *)v8);
  v9 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v10 = 4 * v9;
  if ( v10 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v11 = (_QWORD *)operator new[](8 * v10);
  v12 = *((_QWORD **)this + 129);
  v13 = &v11[3 * v9];
  if ( v13 != v12 && v9 )
  {
    if ( v9 >> 3 <= 0 )
    {
      v18 = *((_QWORD **)this + 129);
    }
    else
    {
      v14 = *((__int64 **)this + 129);
      v15 = &v11[3 * v9];
      do
      {
        v16 = *v14;
        v15 += 8;
        v14 += 8;
        *(v15 - 8) = v16;
        *(v15 - 7) = *(v14 - 7);
        *(v15 - 6) = *(v14 - 6);
        *(v15 - 5) = *(v14 - 5);
        *(v15 - 4) = *(v14 - 4);
        *(v15 - 3) = *(v14 - 3);
        *(v15 - 2) = *(v14 - 2);
        *(v15 - 1) = *(v14 - 1);
      }
      while ( v15 != &v13[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
      v17 = ((v9 >> 3) - 1 + 1LL) << 6;
      v18 = (_QWORD *)((char *)v12 + v17);
      v13 = (_QWORD *)((char *)v13 + v17);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_22;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_19;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_17;
      case 7:
        v13[6] = v18[6];
LABEL_17:
        v13[5] = v18[5];
LABEL_18:
        v13[4] = v18[4];
LABEL_19:
        v13[3] = v18[3];
LABEL_20:
        v13[2] = v18[2];
LABEL_21:
        v13[1] = v18[1];
LABEL_22:
        *v13 = *v18;
        break;
      default:
        break;
    }
  }
  v19 = *((_DWORD *)this + 327);
  if ( v19 <= 99 )
  {
    v20 = *((_DWORD *)this + 27);
    v21 = *((_DWORD *)this + 77);
    *((_DWORD *)this + 77) = 0;
    if ( v20 <= 0 )
    {
LABEL_29:
      *((_DWORD *)this + 327) = 58;
    }
    else
    {
      v22 = 8LL * (unsigned int)(v20 - 1) + 8;
      v23 = 0;
      while ( *(double *)&v12[v23 / 8] == 0.0
           || *(double *)(*((_QWORD *)this + 126) + v23) <= *(double *)(*((_QWORD *)this + 123) + v23) )
      {
        v23 += 8LL;
        if ( v23 == v22 )
          goto LABEL_29;
      }
    }
    v30 = v21;
    ClpSimplexDual::perturb(this);
    *((_DWORD *)this + 327) = v19;
    *((_DWORD *)this + 77) = v30;
  }
  *((_QWORD *)a2 + 11) = v11;
  v24 = *((_QWORD **)this + 129);
  if ( v24 != v11 && v9 )
  {
    if ( v9 >> 3 > 0 )
    {
      v25 = v11;
      v26 = *((__int64 **)this + 129);
      do
      {
        v27 = *v26;
        v26 += 8;
        v25 += 8;
        *(v25 - 8) = v27;
        *(v25 - 7) = *(v26 - 7);
        *(v25 - 6) = *(v26 - 6);
        *(v25 - 5) = *(v26 - 5);
        *(v25 - 4) = *(v26 - 4);
        *(v25 - 3) = *(v26 - 3);
        *(v25 - 2) = *(v26 - 2);
        *(v25 - 1) = *(v26 - 1);
      }
      while ( v26 != &v24[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
      v28 = ((v9 >> 3) - 1 + 1LL) << 6;
      v24 = (_QWORD *)((char *)v24 + v28);
      v11 = (_QWORD *)((char *)v11 + v28);
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_44;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_42;
      case 4:
        goto LABEL_41;
      case 5:
        goto LABEL_40;
      case 6:
        goto LABEL_39;
      case 7:
        v11[6] = v24[6];
LABEL_39:
        v11[5] = v24[5];
LABEL_40:
        v11[4] = v24[4];
LABEL_41:
        v11[3] = v24[3];
LABEL_42:
        v11[2] = v24[2];
LABEL_43:
        v11[1] = v24[1];
LABEL_44:
        *v11 = *v24;
        break;
      default:
        return 0;
    }
  }
  return 0;
}

