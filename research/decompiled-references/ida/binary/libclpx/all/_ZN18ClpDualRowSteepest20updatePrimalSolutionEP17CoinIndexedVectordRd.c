double *__fastcall ClpDualRowSteepest::updatePrimalSolution(
        ClpDualRowSteepest *this,
        CoinIndexedVector *a2,
        double a3,
        double *a4)
{
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // eax
  int *v7; // rdx
  double v8; // xmm3_8
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  double v17; // xmm2_8
  __int64 v18; // rsi
  double v19; // xmm1_8
  __int64 v20; // rdi
  double v21; // xmm5_8
  __int64 v22; // rcx
  int v23; // r15d
  double *v24; // r14
  double v25; // xmm6_8
  double v26; // xmm1_8
  double v27; // xmm9_8
  double v28; // xmm1_8
  double v29; // xmm5_8
  double *v30; // rcx
  double v31; // xmm6_8
  bool v32; // di
  __int64 v33; // rsi
  double v34; // xmm1_8
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r14d
  double *v38; // rdi
  double *v39; // rax
  double *v40; // r15
  double v41; // xmm9_8
  double v42; // xmm5_8
  double v43; // xmm1_8
  double v44; // xmm5_8
  double v45; // xmm6_8
  bool v46; // cl
  double *v47; // rax
  __int64 *v50; // [rsp+8h] [rbp-50h]
  CoinIndexedVector *v51; // [rsp+10h] [rbp-48h]
  __int64 v52; // [rsp+18h] [rbp-40h]
  __int64 v53; // [rsp+18h] [rbp-40h]
  int v54; // [rsp+24h] [rbp-34h]
  int v55; // [rsp+24h] [rbp-34h]

  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v7 = *(int **)a2;
  v8 = *(double *)(v4 + 880);
  v50 = *((__int64 **)this + 5);
  v9 = v50[1];
  v10 = *(_QWORD *)(v4 + 1256);
  v11 = *(_QWORD *)(v4 + 1200);
  v12 = *(_QWORD *)(v4 + 1032);
  v13 = *(_QWORD *)(v4 + 984);
  v14 = *(_QWORD *)(v4 + 1008);
  if ( !*((_BYTE *)a2 + 28) )
  {
    if ( v6 <= 0 )
      goto LABEL_38;
    v51 = a2;
    v17 = 0.0;
    v33 = (__int64)&v7[v6 - 1 + 1];
    while ( 1 )
    {
      v35 = *v7;
      v36 = *(int *)(v10 + 4 * v35);
      v37 = *v7;
      v35 *= 8;
      v38 = (double *)(v5 + v35);
      v39 = (double *)(v9 + v35);
      v40 = (double *)(v11 + 8 * v36);
      v41 = *(double *)(v14 + 8 * v36);
      v42 = *v38 * a3;
      v43 = *v40 - v42;
      v17 = v17 - v42 * *(double *)(v12 + 8 * v36);
      v44 = *(double *)(v13 + 8 * v36);
      *v40 = v43;
      if ( v44 - v8 > v43 )
      {
        v34 = (v43 - v44) * (v43 - v44);
        if ( *v39 != 0.0 )
          goto LABEL_17;
        if ( v34 <= 0.0 )
        {
          v46 = v34 <= -1.0e-50;
          goto LABEL_24;
        }
      }
      else
      {
        v45 = *v39;
        if ( v43 <= v41 + v8 )
        {
          if ( v45 != 0.0 )
            *v39 = 1.0e-100;
          goto LABEL_18;
        }
        v34 = (v43 - v41) * (v43 - v41);
        if ( v45 != 0.0 )
          goto LABEL_17;
        if ( v34 <= 0.0 )
        {
          v46 = v34 <= -1.0e-50;
          goto LABEL_24;
        }
      }
      v46 = v34 >= 1.0e-50;
LABEL_24:
      if ( !v46 )
        goto LABEL_18;
      v53 = *v50;
      v55 = *((_DWORD *)v50 + 4);
      *((_DWORD *)v50 + 4) = v55 + 1;
      *(_DWORD *)(v53 + 4LL * v55) = v37;
LABEL_17:
      *v39 = v34;
LABEL_18:
      ++v7;
      *v38 = 0.0;
      if ( (int *)v33 == v7 )
      {
LABEL_26:
        a2 = v51;
        goto LABEL_27;
      }
    }
  }
  if ( v6 > 0 )
  {
    v51 = a2;
    v15 = (unsigned int)(v6 - 1) + 1LL;
    v16 = 0;
    v17 = 0.0;
    v18 = v15;
    while ( 1 )
    {
      v20 = v7[v16];
      v21 = *(double *)(v5 + 8 * v16) * a3;
      v22 = *(int *)(v10 + 4 * v20);
      v23 = v7[v16];
      v24 = (double *)(v11 + 8 * v22);
      v25 = *(double *)(v12 + 8 * v22);
      v26 = *v24;
      *(_QWORD *)(v5 + 8 * v16) = 0;
      v27 = *(double *)(v14 + 8 * v22);
      v28 = v26 - v21;
      v17 = v17 - v21 * v25;
      v29 = *(double *)(v13 + 8 * v22);
      *v24 = v28;
      v30 = (double *)(v9 + 8 * v20);
      if ( v29 - v8 > v28 )
      {
        v19 = (v28 - v29) * (v28 - v29);
        if ( *v30 != 0.0 )
          goto LABEL_5;
        if ( v19 <= 0.0 )
        {
          v32 = v19 <= -1.0e-50;
          goto LABEL_12;
        }
      }
      else
      {
        v31 = *v30;
        if ( v28 <= v27 + v8 )
        {
          if ( v31 != 0.0 )
            *v30 = 1.0e-100;
          goto LABEL_6;
        }
        v19 = (v28 - v27) * (v28 - v27);
        if ( v31 != 0.0 )
          goto LABEL_5;
        if ( v19 <= 0.0 )
        {
          v32 = v19 <= -1.0e-50;
          goto LABEL_12;
        }
      }
      v32 = v19 >= 1.0e-50;
LABEL_12:
      if ( !v32 )
        goto LABEL_6;
      v52 = *v50;
      v54 = *((_DWORD *)v50 + 4);
      *((_DWORD *)v50 + 4) = v54 + 1;
      *(_DWORD *)(v52 + 4LL * v54) = v23;
LABEL_5:
      *v30 = v19;
LABEL_6:
      if ( v18 == ++v16 )
        goto LABEL_26;
    }
  }
LABEL_38:
  v17 = 0.0;
LABEL_27:
  v47 = (double *)(v9 + 8LL * *(int *)(v4 + 1168));
  if ( *v47 != 0.0 )
    *v47 = 1.0e-100;
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *a4 = v17 + *a4;
  return a4;
}

