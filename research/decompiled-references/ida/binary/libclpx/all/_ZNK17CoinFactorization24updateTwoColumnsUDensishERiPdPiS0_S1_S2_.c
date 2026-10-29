int *__fastcall CoinFactorization::updateTwoColumnsUDensish(
        CoinFactorization *this,
        int *a2,
        double *a3,
        int *a4,
        int *a5,
        double *a6,
        int *a7)
{
  __int64 v7; // r15
  int v8; // esi
  double v9; // xmm6_8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // r11d
  int v15; // r12d
  double v16; // xmm0_8
  double v17; // xmm4_8
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rbp
  int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // r10
  double v26; // xmm2_8
  __int64 v27; // rsi
  int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r10
  double v33; // xmm1_8
  __int64 v34; // rbx
  __int64 v35; // r10
  __int64 v36; // rbx
  int v37; // ebp
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // r10
  double v44; // xmm1_8
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // r14
  double v49; // xmm1_8
  __int64 v50; // rsi
  double *v51; // r10
  double *v52; // rsi
  double v53; // xmm2_8
  __int64 v54; // rsi
  double v55; // xmm1_8
  __int64 v56; // rsi
  __int64 v58; // [rsp+0h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-58h]
  __int64 v60; // [rsp+10h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-48h]

  v7 = *((_QWORD *)this + 29);
  v8 = *((_DWORD *)this + 144);
  v9 = *((double *)this + 1);
  v10 = *((_QWORD *)this + 81);
  v11 = 0;
  if ( *((int *)this + 164) <= -2 )
    v10 = 0;
  v59 = v10;
  v12 = *((_QWORD *)this + 78);
  if ( *((int *)this + 158) <= -2 )
    v12 = 0;
  v61 = v12;
  v13 = *((_QWORD *)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v13 = 0;
  v60 = v13;
  if ( *((int *)this + 60) <= -2 )
    v7 = 0;
  if ( *((int *)this + 140) > -2 )
    v11 = *((_QWORD *)this + 69);
  v58 = v11;
  LODWORD(v11) = *((_DWORD *)this + 145) - 1;
  if ( (int)v11 < v8 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v11 = (int)v11;
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = a6[v11];
      a6[v11] = 0.0;
      v17 = a3[v11];
      a3[v11] = 0.0;
      if ( fabs(v16) <= v9 )
      {
        if ( fabs(v17) > v9 )
        {
          v34 = *(int *)(v59 + 4 * v11);
          v35 = 8 * v34;
          v36 = 4 * v34;
          v37 = *(_DWORD *)(v7 + 4 * v11) - 1;
          if ( v37 >= 0 )
          {
            v38 = v37;
            v39 = v37 - 1LL;
            v40 = v39 - (unsigned int)v37;
            v41 = v36 + v61;
            v42 = v35 + v60;
            while ( 1 )
            {
              v43 = *(int *)(v41 + 4 * v38);
              v44 = *(double *)(v42 + 8 * v38);
              v38 = v39;
              a3[v43] = a3[v43] - v44 * v17;
              if ( v40 == v39 )
                break;
              --v39;
            }
          }
          v45 = v15++;
          a3[v11] = v17 * *(double *)(v58 + 8 * v11);
          a4[v45] = v11;
          v8 = *((_DWORD *)this + 144);
        }
      }
      else
      {
        v18 = *(int *)(v59 + 4 * v11);
        v19 = v60 + 8 * v18;
        v20 = v61 + 4 * v18;
        v21 = *(_DWORD *)(v7 + 4 * v11) - 1;
        if ( v9 < fabs(v17) )
        {
          if ( v21 >= 0 )
          {
            v46 = v21;
            v47 = v21 - 1LL;
            v48 = v47 - (unsigned int)v21;
            while ( 1 )
            {
              v49 = *(double *)(v19 + 8 * v46);
              v50 = *(int *)(v20 + 4 * v46);
              v51 = &a3[v50];
              v52 = &a6[v50];
              v53 = *v52 - v49 * v16;
              *v51 = *v51 - v17 * v49;
              *v52 = v53;
              v46 = v47;
              if ( v48 == v47 )
                break;
              --v47;
            }
          }
          v54 = v15++;
          v55 = *(double *)(v58 + 8 * v11);
          a3[v11] = v17 * v55;
          a4[v54] = v11;
          v56 = v14;
          a6[v11] = v16 * v55;
          ++v14;
          a7[v56] = v11;
          v8 = *((_DWORD *)this + 144);
        }
        else
        {
          if ( v21 >= 0 )
          {
            v22 = v21;
            v23 = v21 - 1LL;
            v24 = v23 - (unsigned int)v21;
            while ( 1 )
            {
              v25 = *(int *)(v20 + 4 * v22);
              v26 = *(double *)(v19 + 8 * v22);
              v22 = v23;
              a6[v25] = a6[v25] - v26 * v16;
              if ( v24 == v23 )
                break;
              --v23;
            }
          }
          v27 = v14++;
          a6[v11] = v16 * *(double *)(v58 + 8 * v11);
          a7[v27] = v11;
          v8 = *((_DWORD *)this + 144);
        }
      }
      --v11;
    }
    while ( (int)v11 >= v8 );
  }
  v28 = v8 - 1;
  if ( v28 >= 0 )
  {
    v29 = v28;
    v30 = v28 - 1LL;
    v31 = v30 - (unsigned int)v28;
    while ( 1 )
    {
      v33 = a3[v29];
      if ( fabs(a6[v29]) > v9 )
      {
        v32 = v14++;
        a6[v29] = -a6[v29];
        a7[v32] = v29;
      }
      else
      {
        a6[v29] = 0.0;
      }
      if ( v33 == 0.0 )
        goto LABEL_27;
      a4[v15] = v29;
      if ( fabs(v33) > v9 )
        break;
      a3[v29] = 0.0;
      v29 = v30;
      if ( v31 == v30 )
        goto LABEL_43;
LABEL_28:
      --v30;
    }
    ++v15;
    a3[v29] = -v33;
LABEL_27:
    v29 = v30;
    if ( v31 == v30 )
      goto LABEL_43;
    goto LABEL_28;
  }
LABEL_43:
  *a2 = v15;
  *a5 = v14;
  return a5;
}

