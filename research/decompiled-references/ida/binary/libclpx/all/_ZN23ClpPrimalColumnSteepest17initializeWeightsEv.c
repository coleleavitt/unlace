void __fastcall ClpPrimalColumnSteepest::initializeWeights(ClpPrimalColumnSteepest *this)
{
  __int64 v2; // rax
  int v3; // r13d
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  int *v9; // r11
  int v10; // edx
  int v11; // r12d
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  CoinIndexedVector *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // esi
  int **v20; // rsi
  int *v21; // r15
  int *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // r14
  ClpSimplex *v27; // rdi
  __int64 v28; // r9
  int v29; // edx
  int *v30; // rax
  double v31; // xmm1_8
  __int64 v32; // rcx
  __int64 v33; // rdx
  double *v34; // rdx
  double v35; // xmm0_8

  v2 = *((_QWORD *)this + 1);
  v3 = *(_DWORD *)(v2 + 104);
  v4 = v3 + *(_DWORD *)(v2 + 108);
  if ( *((_DWORD *)this + 19) == 1 )
  {
    v16 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v16);
    v17 = *(_QWORD *)(*((_QWORD *)this + 1) + 1264LL);
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
      v19 = *(_DWORD *)(v18 + 64);
    else
      v19 = *(_DWORD *)(*(_QWORD *)(v17 + 16) + 48LL);
    CoinIndexedVector::reserve(v16, v3 + v19);
    v20 = *((int ***)this + 6);
    v21 = v20[1];
    v22 = *v20;
    if ( v4 > 0 )
    {
      v23 = (unsigned int)(v4 - 1);
      v24 = *((_QWORD *)this + 4);
      v25 = 0;
      v26 = v23 + 1;
      do
      {
        while ( 1 )
        {
          v27 = *((ClpSimplex **)this + 1);
          *(_QWORD *)(v24 + 8 * v25) = 0x4000000000000000LL;
          if ( (*(_BYTE *)(*((_QWORD *)v27 + 33) + v25) & 3) != 1 )
            break;
          if ( v26 == ++v25 )
            goto LABEL_28;
        }
        ClpSimplex::unpack(v27, (CoinIndexedVector *)v20, v25);
        ClpFactorization::updateColumn(
          *(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL),
          v16,
          *((CoinIndexedVector **)this + 6),
          0);
        v20 = *((int ***)this + 6);
        v28 = 8 * v25;
        v29 = *((_DWORD *)v20 + 4);
        if ( v29 <= 0 )
        {
          v31 = 1.0;
        }
        else
        {
          v30 = v22;
          v31 = 1.0;
          v32 = (__int64)&v22[v29 - 1 + 1];
          do
          {
            v33 = *v30++;
            v34 = (double *)&v21[2 * v33];
            v35 = *v34;
            *v34 = 0.0;
            v31 = v31 + v35 * v35;
          }
          while ( (int *)v32 != v30 );
        }
        v24 = *((_QWORD *)this + 4);
        ++v25;
        *((_DWORD *)v20 + 4) = 0;
        *((_BYTE *)v20 + 28) = 0;
        *(double *)(v24 + v28) = v31;
      }
      while ( v26 != v25 );
    }
LABEL_28:
    CoinIndexedVector::~CoinIndexedVector(v16);
    operator delete(v16);
  }
  else
  {
    v5 = *((_QWORD *)this + 8);
    if ( !v5 )
    {
      v11 = (v4 + 31) >> 5;
      if ( (unsigned __int64)v11 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v5 = operator new[](4LL * v11);
      *((_QWORD *)this + 8) = v5;
      if ( v11 )
      {
        v12 = v11 + 7;
        v13 = v5;
        if ( v11 >= 0 )
          v12 = (v4 + 31) >> 5;
        v14 = v12 >> 3;
        if ( v14 > 0 )
        {
          v15 = (unsigned int)(v14 - 1);
          do
          {
            *(_OWORD *)v13 = 0;
            v13 += 32;
            *(_OWORD *)(v13 - 16) = 0;
          }
          while ( v13 != v5 + 32 * v15 + 32 );
          v13 = v5 + 32 * ((int)v15 + 1LL);
        }
        switch ( v11 % 8 )
        {
          case 1:
            goto LABEL_36;
          case 2:
            goto LABEL_35;
          case 3:
            goto LABEL_34;
          case 4:
            goto LABEL_33;
          case 5:
            goto LABEL_32;
          case 6:
            goto LABEL_31;
          case 7:
            *(_DWORD *)(v13 + 24) = 0;
LABEL_31:
            *(_DWORD *)(v13 + 20) = 0;
LABEL_32:
            *(_DWORD *)(v13 + 16) = 0;
LABEL_33:
            *(_DWORD *)(v13 + 12) = 0;
LABEL_34:
            *(_DWORD *)(v13 + 8) = 0;
LABEL_35:
            *(_DWORD *)(v13 + 4) = 0;
LABEL_36:
            *(_DWORD *)v13 = 0;
            break;
          default:
            break;
        }
      }
    }
    if ( v4 > 0 )
    {
      v6 = *((_QWORD *)this + 4);
      v7 = *((_QWORD *)this + 1);
      v8 = 0;
      do
      {
        *(_QWORD *)(v6 + 8 * v8) = 0x3FF0000000000000LL;
        v9 = (int *)(v5 + 4LL * ((int)v8 >> 5));
        v10 = *v9 & ~(1 << v8);
        if ( (*(_BYTE *)(*(_QWORD *)(v7 + 264) + v8) & 7) != 1 )
          v10 = *v9 | (1 << v8);
        ++v8;
        *v9 = v10;
      }
      while ( (unsigned int)(v4 - 1) + 1LL != v8 );
    }
  }
}

