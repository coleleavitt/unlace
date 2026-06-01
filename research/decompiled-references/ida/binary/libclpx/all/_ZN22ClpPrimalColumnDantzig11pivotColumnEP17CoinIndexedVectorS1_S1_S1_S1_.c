__int64 __fastcall ClpPrimalColumnDantzig::pivotColumn(
        ClpPrimalColumnDantzig *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  __int64 v6; // r10
  __int64 v7; // rdx
  double v8; // xmm0_8
  __int64 v9; // r11
  int v10; // r9d
  __int64 v11; // rdi
  int v12; // ebx
  double v13; // xmm2_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  char v17; // si
  unsigned __int8 v18; // si
  double v19; // xmm1_8
  double v20; // xmm1_8
  bool v21; // cc
  double v22; // xmm1_8
  char v23; // cl
  unsigned __int8 v24; // cl
  double v25; // xmm1_8
  double v26; // xmm1_8
  double v27; // xmm1_8
  double v28; // xmm1_8
  double v29; // xmm1_8
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rax
  double *v39; // rdx
  double v40; // xmm0_8

  v6 = *((_QWORD *)this + 1);
  if ( *((_DWORD *)a2 + 4) )
  {
    ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v6 + 1264), a4, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
      *((_QWORD *)this + 1),
      a2,
      a6,
      a5,
      -1.0);
    v6 = *((_QWORD *)this + 1);
    v33 = 0;
    v34 = *(_QWORD *)(v6 + 1184);
    while ( v33 )
    {
      v35 = *((_DWORD *)a5 + 4);
      v34 = *(_QWORD *)(v6 + 1192);
      v36 = *(_QWORD *)a5;
      v37 = *((_QWORD *)a5 + 1);
      if ( v35 > 0 )
        goto LABEL_48;
LABEL_50:
      if ( (_DWORD)v33 == 1 )
      {
        *((_DWORD *)a2 + 4) = 0;
        *((_BYTE *)a2 + 28) = 0;
        *((_DWORD *)a5 + 4) = 0;
        *((_BYTE *)a5 + 28) = 0;
        goto LABEL_2;
      }
      v34 = *(_QWORD *)(v6 + 1184);
LABEL_53:
      ++v33;
    }
    v35 = *((_DWORD *)a2 + 4);
    v36 = *(_QWORD *)a2;
    v37 = *((_QWORD *)a2 + 1);
    if ( v35 <= 0 )
      goto LABEL_53;
LABEL_48:
    v38 = 0;
    do
    {
      v39 = (double *)(v34 + 8LL * *(int *)(v36 + 4 * v38));
      v40 = *v39 - *(double *)(v37 + 8 * v38);
      *(_QWORD *)(v37 + 8 * v38++) = 0;
      *v39 = v40;
    }
    while ( v35 > (int)v38 );
    goto LABEL_50;
  }
LABEL_2:
  v7 = *(int *)(v6 + 108);
  v8 = *(double *)(v6 + 24);
  v9 = *(_QWORD *)(v6 + 1176);
  v10 = v7 + *(_DWORD *)(v6 + 104);
  if ( (int)v7 <= 0 )
  {
    result = 0xFFFFFFFFLL;
    if ( v10 <= 0 )
      return result;
    v11 = *(_QWORD *)(v6 + 264);
    v13 = *(double *)(v6 + 24);
    v7 = 0;
    v12 = -1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_14:
          v23 = *(_BYTE *)(v11 + v7);
          if ( (v23 & 0x40) != 0 )
            goto LABEL_22;
          v24 = v23 & 7;
          v25 = *(double *)(v9 + 8 * v7) * 1.01;
          if ( v24 != 2 )
            break;
          v21 = v25 <= v8;
          v28 = fmax(v25, v8);
          if ( !v21 )
            result = (unsigned int)v7;
          ++v7;
          v8 = v28;
          if ( v10 <= (int)v7 )
            goto LABEL_23;
        }
        if ( v24 > 2u )
          break;
        if ( !v24 )
        {
LABEL_19:
          v26 = fabs(v25);
          v21 = v26 <= v13;
          v27 = fmax(v26, v13);
          if ( !v21 )
            v12 = v7;
          v13 = v27;
        }
LABEL_22:
        if ( v10 <= (int)++v7 )
          goto LABEL_23;
      }
      if ( v24 != 3 )
      {
        if ( v24 == 4 )
          goto LABEL_19;
        goto LABEL_22;
      }
      if ( -v8 <= v25 )
        goto LABEL_22;
      result = (unsigned int)v7++;
      v8 = -v25;
      if ( v10 <= (int)v7 )
        goto LABEL_23;
    }
  }
  v11 = *(_QWORD *)(v6 + 264);
  v12 = -1;
  v13 = *(double *)(v6 + 24);
  v14 = 0;
  v15 = (unsigned int)(v7 - 1) + 1LL;
  result = 0xFFFFFFFFLL;
  do
  {
    while ( 1 )
    {
      v17 = *(_BYTE *)(v11 + v14);
      if ( (v17 & 0x40) != 0 )
        goto LABEL_12;
      v18 = v17 & 7;
      v19 = *(double *)(v9 + 8 * v14);
      if ( v18 == 2 )
        break;
      if ( v18 <= 2u )
      {
        if ( !v18 )
        {
LABEL_9:
          v20 = fabs(v19);
          v21 = v20 <= v13;
          v22 = fmax(v20, v13);
          if ( !v21 )
            v12 = v14;
          v13 = v22;
        }
LABEL_12:
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
      else
      {
        if ( v18 != 3 )
        {
          if ( v18 == 4 )
            goto LABEL_9;
          goto LABEL_12;
        }
        if ( -v8 <= v19 )
          goto LABEL_12;
        result = (unsigned int)v14++;
        v8 = -v19;
        if ( v15 == v14 )
          goto LABEL_13;
      }
    }
    v21 = v19 <= v8;
    v29 = fmax(v19, v8);
    if ( !v21 )
      result = (unsigned int)v14;
    ++v14;
    v8 = v29;
  }
  while ( v15 != v14 );
LABEL_13:
  if ( v10 > (int)v7 )
    goto LABEL_14;
LABEL_23:
  if ( v12 >= 0 && v13 > v8 * 0.1 )
    return (unsigned int)v12;
  return result;
}

