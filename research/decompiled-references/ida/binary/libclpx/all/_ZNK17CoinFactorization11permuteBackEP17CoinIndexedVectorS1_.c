unsigned __int64 __fastcall CoinFactorization::permuteBack(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  int v5; // r13d
  int *v6; // rcx
  __int64 v7; // r9
  _DWORD *v8; // rbp
  __int64 v9; // r12
  int v10; // r8d
  __int64 v11; // r11
  __int64 v12; // r10
  double *v13; // rcx
  double v14; // xmm1_8
  __int64 v15; // rcx
  double v16; // xmm1_8
  __int64 v17; // r15
  __int64 v18; // r14
  double *v19; // r11
  double *v20; // r10
  double v21; // xmm3_8
  double v22; // xmm2_8
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // r10
  double *v28; // r8
  double v29; // xmm2_8
  __int64 v30; // r8

  result = 0;
  v4 = *((_QWORD *)this + 19);
  v5 = *((_DWORD *)a2 + 4);
  v6 = *(int **)a2;
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(_DWORD **)a3;
  if ( *((int *)this + 40) <= -2 )
    v4 = 0;
  v9 = *((_QWORD *)a3 + 1);
  if ( *((_BYTE *)a3 + 28) )
  {
    if ( v5 > 0 )
    {
      result = *(_QWORD *)a2;
      v10 = 0;
      v11 = *(_QWORD *)a2 + 4LL * (unsigned int)(v5 - 1) + 4;
      do
      {
        v12 = *(int *)result;
        v13 = (double *)(v7 + 8 * v12);
        v14 = *v13;
        *v13 = 0.0;
        if ( fabs(v14) > *((double *)this + 1) )
        {
          v15 = v10++;
          v8[v15] = *(_DWORD *)(v4 + 4 * v12);
          *(double *)(v9 + 8 * v15) = v14;
        }
        result += 4LL;
      }
      while ( v11 != result );
      goto LABEL_9;
    }
LABEL_28:
    *((_DWORD *)a3 + 4) = 0;
    goto LABEL_10;
  }
  result = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v27 = *v6;
    v28 = (double *)(v7 + 8 * v27);
    v29 = *v28;
    *v28 = 0.0;
    v16 = *((double *)this + 1);
    if ( fabs(v29) <= v16 )
    {
      if ( v5 <= 1 )
        goto LABEL_28;
      v10 = 0;
    }
    else
    {
      v30 = *(int *)(v4 + 4 * v27);
      *v8 = v30;
      *(double *)(v9 + 8 * v30) = v29;
      if ( v5 <= 1 )
      {
        *((_DWORD *)a3 + 4) = 1;
        goto LABEL_11;
      }
      v16 = *((double *)this + 1);
      v10 = v5 & 1;
    }
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_28;
    v16 = *((double *)this + 1);
    v10 = 0;
  }
  result = v5 & 1;
  while ( 1 )
  {
    v17 = v6[result];
    v18 = v6[result + 1];
    v19 = (double *)(v7 + 8 * v17);
    v20 = (double *)(v7 + 8 * v18);
    v21 = *v19;
    v22 = *v20;
    *v19 = 0.0;
    *v20 = 0.0;
    if ( fabs(v21) > v16 )
    {
      v23 = *(int *)(v4 + 4 * v17);
      v24 = v10++;
      v8[v24] = v23;
      *(double *)(v9 + 8 * v23) = v21;
    }
    if ( fabs(v22) > v16 )
    {
      v25 = *(int *)(v4 + 4 * v18);
      v26 = v10++;
      v8[v26] = v25;
      *(double *)(v9 + 8 * v25) = v22;
    }
    result += 2LL;
    if ( v5 <= (int)result )
      break;
    v16 = *((double *)this + 1);
  }
LABEL_9:
  *((_DWORD *)a3 + 4) = v10;
  if ( !v10 )
LABEL_10:
    *((_BYTE *)a3 + 28) = 0;
LABEL_11:
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  return result;
}

