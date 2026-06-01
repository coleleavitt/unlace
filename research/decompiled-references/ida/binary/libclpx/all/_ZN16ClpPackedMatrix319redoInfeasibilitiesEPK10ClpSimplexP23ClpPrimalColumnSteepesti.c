__int64 __fastcall ClpPackedMatrix3::redoInfeasibilities(
        ClpPackedMatrix3 *this,
        const ClpSimplex *a2,
        ClpPrimalColumnSteepest *a3,
        int a4)
{
  int v5; // r13d
  __int64 *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r15
  double v10; // xmm1_8
  double v11; // xmm2_8
  __int64 result; // rax
  __int64 v13; // rax
  double v14; // xmm0_8
  char v15; // cl
  double v16; // xmm0_8
  double *v17; // rsi
  double v18; // xmm0_8
  bool v19; // dl
  __int64 v20; // rdx
  double v21; // xmm5_8
  __int64 v22; // rdi
  double v23; // xmm0_8
  char v24; // si
  double v25; // xmm0_8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdx
  double v29; // xmm0_8
  char v30; // si
  double v31; // xmm0_8
  double v32; // xmm0_8
  double *v33; // r8
  double v34; // xmm0_8
  double v35; // xmm6_8
  bool v36; // cl
  __int64 v37; // rdx
  double v38; // xmm0_8
  char v39; // si
  double v40; // xmm0_8
  double v41; // xmm0_8
  bool v42; // cl
  __int64 v43; // rcx
  __int64 v44; // rsi
  bool v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rcx

  v5 = *((_DWORD *)a2 + 26) + *((_DWORD *)a2 + 27);
  v6 = *((__int64 **)a3 + 5);
  v7 = *((_QWORD *)a2 + 147);
  v8 = *((_QWORD *)a2 + 33);
  v9 = *((_QWORD *)a3 + 4);
  v10 = fmin(0.01, *((double *)a2 + 96)) + *((double *)a2 + 109);
  v11 = -v10;
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
    {
      if ( a4 == 1 )
      {
        CoinIndexedVector::clear(*((CoinIndexedVector **)a3 + 5));
        if ( v5 > 0 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = *(double *)(v7 + 8 * v13);
            v15 = *(_BYTE *)(v8 + v13) & 7;
            if ( v15 == 3 )
              goto LABEL_13;
            if ( (*(_BYTE *)(v8 + v13) & 1) == 0 )
              break;
            v14 = 0.0;
            if ( v11 <= 0.0 )
              goto LABEL_14;
LABEL_17:
            v17 = (double *)(v6[1] + 8 * v13);
            v18 = v14 * v14;
            if ( *v17 == 0.0 )
            {
              if ( v18 <= 0.0 )
                v45 = v18 <= -1.0e-50;
              else
                v45 = v18 >= 1.0e-50;
              if ( !v45 )
                goto LABEL_14;
              v46 = *((int *)v6 + 4);
              v47 = *v6;
              *((_DWORD *)v6 + 4) = v46 + 1;
              *(_DWORD *)(v47 + 4 * v46) = v13;
LABEL_72:
              *v17 = v18;
              goto LABEL_14;
            }
            v18 = v18 + *v17;
            if ( v18 <= 0.0 )
              v19 = v18 <= -1.0e-50;
            else
              v19 = v18 >= 1.0e-50;
            if ( v19 )
              goto LABEL_72;
            *v17 = 1.0e-100;
LABEL_14:
            if ( (unsigned int)(v5 - 1) + 1LL == ++v13 )
              return 0xFFFFFFFFLL;
          }
          if ( v15 == 2 )
          {
            v14 = -v14;
          }
          else
          {
            v16 = fabs(v14);
            if ( v16 <= v10 * 100.0 )
              v14 = 0.0;
            else
              v14 = -v16 * 10.0;
          }
LABEL_13:
          if ( v11 <= v14 )
            goto LABEL_14;
          goto LABEL_17;
        }
      }
      return 0xFFFFFFFFLL;
    }
    CoinIndexedVector::clear(*((CoinIndexedVector **)a3 + 5));
    if ( v5 > 0 )
    {
      v20 = 0;
      result = 0xFFFFFFFFLL;
      v21 = 0.0;
      v22 = (unsigned int)(v5 - 1);
      while ( 1 )
      {
        v23 = *(double *)(v7 + 8 * v20);
        v24 = *(_BYTE *)(v8 + v20) & 7;
        if ( v24 != 3 )
        {
          if ( (*(_BYTE *)(v8 + v20) & 1) != 0 )
            goto LABEL_28;
          if ( v24 == 2 )
          {
            v23 = -v23;
            goto LABEL_29;
          }
          v25 = fabs(v23);
          if ( v25 <= v10 * 100.0 )
LABEL_28:
            v23 = 0.0;
          else
            v23 = -v25 * 10.0;
        }
LABEL_29:
        if ( v11 > v23 )
        {
          v33 = (double *)(v6[1] + 8 * v20);
          v34 = v23 * v23;
          if ( *v33 == 0.0 )
          {
            if ( v34 <= 0.0 )
              v42 = v34 <= -1.0e-50;
            else
              v42 = v34 >= 1.0e-50;
            if ( v42 )
            {
              v43 = *((int *)v6 + 4);
              v44 = *v6;
              *((_DWORD *)v6 + 4) = v43 + 1;
              *(_DWORD *)(v44 + 4 * v43) = v20;
              *v33 = v34;
            }
          }
          else
          {
            v35 = *v33 + v34;
            if ( v35 <= 0.0 )
              v36 = v35 <= -1.0e-50;
            else
              v36 = v35 >= 1.0e-50;
            if ( v36 )
              *v33 = v35;
            else
              *v33 = 1.0e-100;
          }
          if ( v34 > *(double *)(v9 + 8 * v20) * v21 )
          {
            result = (unsigned int)v20;
            v21 = v34 / *(double *)(v9 + 8 * v20);
          }
        }
        if ( v22 + 1 == ++v20 )
          goto LABEL_31;
      }
    }
    return 0xFFFFFFFFLL;
  }
  CoinIndexedVector::clear(*((CoinIndexedVector **)a3 + 5));
  if ( v5 <= 0 )
    return 0xFFFFFFFFLL;
  v21 = 0.0;
  v37 = 0;
  v22 = (unsigned int)(v5 - 1);
  result = 0xFFFFFFFFLL;
  do
  {
    v38 = *(double *)(v7 + 8 * v37);
    v39 = *(_BYTE *)(v8 + v37) & 7;
    if ( v39 != 3 )
    {
      if ( (*(_BYTE *)(v8 + v37) & 1) != 0 )
        goto LABEL_58;
      if ( v39 == 2 )
      {
        v38 = -v38;
        goto LABEL_59;
      }
      v40 = fabs(v38);
      if ( v40 <= v10 * 100.0 )
LABEL_58:
        v38 = 0.0;
      else
        v38 = -v40 * 10.0;
    }
LABEL_59:
    if ( v11 > v38 )
    {
      v41 = v38 * v38;
      if ( v41 > *(double *)(v9 + 8 * v37) * v21 )
      {
        result = (unsigned int)v37;
        v21 = v41 / *(double *)(v9 + 8 * v37);
      }
    }
    ++v37;
  }
  while ( v22 + 1 != v37 );
LABEL_31:
  if ( (_DWORD)result != -1 )
  {
    v26 = *((_QWORD *)a2 + 33);
    if ( (*(_BYTE *)(v26 + (int)result) & 0x40) != 0 )
    {
      v27 = v22 + 1;
      v28 = 0;
      result = 0xFFFFFFFFLL;
      while ( 1 )
      {
        v29 = *(double *)(v7 + 8 * v28);
        v30 = *(_BYTE *)(v8 + v28) & 7;
        if ( v30 == 3 )
          goto LABEL_39;
        if ( (*(_BYTE *)(v8 + v28) & 1) != 0 )
          break;
        if ( v30 == 2 )
        {
          v29 = -v29;
        }
        else
        {
          v31 = fabs(v29);
          if ( v31 <= v10 * 100.0 )
            break;
          v29 = -v31 * 10.0;
        }
LABEL_39:
        if ( v11 > v29 )
        {
          v32 = v29 * v29;
          if ( v32 > *(double *)(v9 + 8 * v28) * v21 && (*(_BYTE *)(v26 + v28) & 0x40) == 0 )
          {
            result = (unsigned int)v28;
            v21 = v32 / *(double *)(v9 + 8 * v28);
          }
        }
        if ( v27 == ++v28 )
          return result;
      }
      v29 = 0.0;
      goto LABEL_39;
    }
  }
  return result;
}

