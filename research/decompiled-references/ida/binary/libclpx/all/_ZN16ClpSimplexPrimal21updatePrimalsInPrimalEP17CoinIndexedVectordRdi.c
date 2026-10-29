__int64 __fastcall ClpSimplexPrimal::updatePrimalsInPrimal(
        ClpSimplexPrimal *this,
        CoinIndexedVector *a2,
        double a3,
        double *a4,
        int a5)
{
  int v8; // eax
  double v9; // xmm2_8
  __int64 v10; // r15
  int v11; // esi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r10
  __int64 v15; // rax
  double v16; // xmm1_8
  double v17; // xmm1_8
  __int64 v18; // r14
  int v19; // r9d
  double *v20; // rdi
  int v21; // esi
  double v22; // xmm0_8
  char *v23; // rax
  double v24; // xmm1_8
  int v25; // eax
  double v26; // xmm0_8
  __int64 v28; // rbp
  __int64 v29; // rax
  double v30; // xmm1_8
  int v31; // eax
  __int64 v32; // rax
  double v33; // xmm1_8
  double v34; // xmm1_8
  __int64 v35; // r9
  int v36; // r14d
  double *v37; // rdi
  int v38; // esi
  double v39; // xmm0_8
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-7Ch]
  int v42; // [rsp+4h] [rbp-78h]
  __int64 v43; // [rsp+4h] [rbp-78h]
  __int64 v45; // [rsp+14h] [rbp-68h]
  int v46; // [rsp+1Ch] [rbp-60h]
  int v47; // [rsp+24h] [rbp-58h]
  __int64 v48; // [rsp+24h] [rbp-58h]
  double v49; // [rsp+34h] [rbp-48h]
  double v50; // [rsp+3Ch] [rbp-40h]

  v8 = *((_DWORD *)this + 292);
  v9 = 0.0;
  if ( v8 < 0 )
    v50 = 0.0;
  else
    v50 = *(double *)(*((_QWORD *)this + 129) + 8LL * *((int *)this + 290));
  v10 = *((_QWORD *)a2 + 1);
  v11 = *((_DWORD *)a2 + 4);
  v12 = *(_QWORD *)a2;
  **((_QWORD **)this + 165) = 0;
  v49 = 1.001 * *((double *)this + 110);
  if ( a5 )
  {
    if ( v11 <= 0 )
    {
      v41 = -1;
      a5 = 0;
      goto LABEL_17;
    }
    v28 = 0;
    v41 = -1;
    a5 = 0;
    v43 = (unsigned int)(v11 - 1) + 1LL;
    while ( 1 )
    {
      v32 = *(int *)(v12 + 4 * v28);
      v33 = *(double *)(v10 + 8 * v28);
      *(_QWORD *)(v10 + 8 * v28) = 0;
      v34 = v33 * a3;
      v35 = *(int *)(*((_QWORD *)this + 157) + 4 * v32);
      v36 = v32;
      v37 = (double *)(*((_QWORD *)this + 150) + 8 * v35);
      v38 = *(_DWORD *)(*((_QWORD *)this + 157) + 4 * v32);
      v39 = *v37 - v34;
      *v37 = v39;
      *(_BYTE *)(*((_QWORD *)this + 33) + v32) &= ~0x80u;
      if ( v34 > 0.0 )
      {
        v29 = *((_QWORD *)this + 123);
        v30 = *(double *)(v29 + 8 * v35);
        if ( *((double *)this + 110) + v30 >= v39 )
        {
          if ( *((_DWORD *)this + 290) == (_DWORD)v35 && v39 > v30 - v49 )
            v39 = *(double *)(v29 + 8 * v35);
          goto LABEL_27;
        }
      }
      else
      {
        v40 = *((_QWORD *)this + 126);
        if ( v39 >= *(double *)(v40 + 8 * v35) - *((double *)this + 110) )
        {
          if ( *((_DWORD *)this + 290) == (_DWORD)v35 && v49 + *(double *)(v40 + 8 * v35) > v39 )
            v39 = *(double *)(v40 + 8 * v35);
LABEL_27:
          v48 = v35;
          v46 = a5;
          ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v38, v39);
          a5 = v46;
          if ( v39 != 0.0 )
          {
            v31 = v41;
            if ( *((_DWORD *)this + 292) == v36 )
              v31 = v46;
            v41 = v31;
            a5 = v46 + 1;
            *(double *)(v10 + 8LL * v46) = v39;
            *(double *)(*((_QWORD *)this + 147) + 8 * v48) = -v39;
            *(_DWORD *)(v12 + 4LL * v46) = v36;
          }
        }
      }
      if ( v43 == ++v28 )
      {
LABEL_16:
        v8 = *((_DWORD *)this + 292);
        v9 = **((double **)this + 165);
        goto LABEL_17;
      }
    }
  }
  if ( v11 > 0 )
  {
    v13 = 0;
    v41 = -1;
    v14 = (unsigned int)(v11 - 1) + 1LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(int *)(v12 + 4 * v13);
        v16 = *(double *)(v10 + 8 * v13);
        *(_QWORD *)(v10 + 8 * v13) = 0;
        v17 = v16 * a3;
        v18 = *(int *)(*((_QWORD *)this + 157) + 4 * v15);
        v19 = v15;
        v20 = (double *)(*((_QWORD *)this + 150) + 8 * v18);
        v21 = *(_DWORD *)(*((_QWORD *)this + 157) + 4 * v15);
        v22 = *v20 - v17;
        *v20 = v22;
        v23 = (char *)(*((_QWORD *)this + 33) + v15);
        if ( *v23 >= 0 && *((double *)this + 100) >= 0.0 )
          goto LABEL_7;
        *v23 &= ~0x80u;
        if ( v17 > 0.0 )
          break;
        v24 = *(double *)(*((_QWORD *)this + 126) + 8 * v18);
        if ( v22 < v24 - *((double *)this + 110) )
          goto LABEL_7;
        if ( *((_DWORD *)this + 290) == v21 && v49 + v24 > v22 )
LABEL_40:
          v22 = v24;
LABEL_12:
        v47 = a5;
        v45 = v14;
        v42 = v19;
        ClpNonLinearCost::setOne(*((ClpNonLinearCost **)this + 165), v21, v22);
        v14 = v45;
        a5 = v47;
        if ( v22 == 0.0 )
          goto LABEL_7;
        v25 = v41;
        if ( *((_DWORD *)this + 292) == v42 )
          v25 = v47;
        ++v13;
        v41 = v25;
        a5 = v47 + 1;
        *(double *)(v10 + 8LL * v47) = v22;
        *(double *)(*((_QWORD *)this + 147) + 8 * v18) = -v22;
        *(_DWORD *)(v12 + 4LL * v47) = v42;
        if ( v45 == v13 )
          goto LABEL_16;
      }
      v24 = *(double *)(*((_QWORD *)this + 123) + 8 * v18);
      if ( *((double *)this + 110) + v24 >= v22 )
      {
        if ( *((_DWORD *)this + 290) == v21 && v22 >= v24 - v49 )
          goto LABEL_40;
        goto LABEL_12;
      }
LABEL_7:
      if ( v14 == ++v13 )
        goto LABEL_16;
    }
  }
  v41 = -1;
LABEL_17:
  *a4 = v9 + *a4;
  *((_BYTE *)a2 + 28) = 1;
  if ( v8 >= 0 )
  {
    v26 = v50 - *(double *)(*((_QWORD *)this + 129) + 8LL * *((int *)this + 290)) + *((double *)this + 104);
    if ( v41 == -1 )
    {
      *(double *)(v10 + 8LL * a5) = -v26;
      *(_DWORD *)(v12 + 4LL * a5) = v8;
      *((_DWORD *)a2 + 4) = a5 + 1;
      return 0;
    }
    *(double *)(v10 + 8LL * v41) = *(double *)(v10 + 8LL * v41) - v26;
  }
  *((_DWORD *)a2 + 4) = a5;
  if ( !a5 )
    *((_BYTE *)a2 + 28) = 0;
  return 0;
}

