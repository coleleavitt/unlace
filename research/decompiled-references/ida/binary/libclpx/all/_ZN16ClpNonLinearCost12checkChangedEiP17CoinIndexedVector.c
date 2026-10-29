CoinIndexedVector *__fastcall ClpNonLinearCost::checkChanged(ClpNonLinearCost *this, int a2, int **a3)
{
  int *v4; // r15
  __int64 v5; // rsi
  int v6; // eax
  double v7; // xmm2_8
  int *v8; // r9
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r11d
  double v14; // xmm3_8
  __int64 v15; // rcx
  signed int v16; // r12d
  __int64 v17; // r8
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r13
  double v21; // xmm0_8
  __int64 v22; // r10
  __int64 v23; // rbp
  __int64 v24; // r13
  signed int v25; // eax
  signed int *v26; // rcx
  signed int v27; // r10d
  __int64 v28; // r13
  __int64 v29; // r12
  int v30; // ebx
  _QWORD *v31; // r14
  _QWORD *v32; // r11
  _QWORD *v33; // r8
  __int64 v34; // rcx
  int v35; // edx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r8
  double v40; // xmm4_8
  double v41; // xmm5_8
  double v42; // xmm0_8
  double v43; // xmm1_8
  char v44; // r13
  int v45; // r9d
  double *v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // r11d
  _BYTE *v50; // rsi
  double v51; // xmm3_8
  double *v52; // r12
  double *v53; // r10
  unsigned __int8 v54; // r9
  int v55; // ebp
  double v56; // xmm5_8
  CoinIndexedVector *result; // rax
  int v58; // r10d
  __int64 v59; // [rsp+0h] [rbp-70h]
  double *v60; // [rsp+8h] [rbp-68h]
  __int64 v61; // [rsp+8h] [rbp-68h]
  int *v62; // [rsp+10h] [rbp-60h]
  int *v64; // [rsp+20h] [rbp-50h]
  __int64 v65; // [rsp+20h] [rbp-50h]
  __int64 v66; // [rsp+28h] [rbp-48h]
  __int64 v67; // [rsp+28h] [rbp-48h]
  int *v68; // [rsp+30h] [rbp-40h]
  CoinIndexedVector *v69; // [rsp+38h] [rbp-38h]

  v4 = *a3;
  v5 = *((_QWORD *)this + 12);
  v69 = (CoinIndexedVector *)a3;
  v62 = a3[1];
  v6 = *((_DWORD *)this + 36);
  v7 = *(double *)(v5 + 880);
  LODWORD(a3) = v6 & 1;
  v59 = *(_QWORD *)(v5 + 1256);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      v38 = *(_QWORD *)(v5 + 1200);
      v65 = *(_QWORD *)(v5 + 1008);
      v61 = *(_QWORD *)(v5 + 984);
      v67 = *(_QWORD *)(v5 + 1032);
      if ( a2 > 0 )
        goto LABEL_18;
    }
    goto LABEL_33;
  }
  if ( a2 <= 0 )
  {
LABEL_33:
    result = v69;
    *((_DWORD *)v69 + 4) = 0;
LABEL_34:
    *((_BYTE *)result + 28) = 0;
    return result;
  }
  v8 = v4;
  v68 = v4;
  a3 = nullptr;
  v66 = *((_QWORD *)this + 8);
  v9 = (__int64)&v4[a2 - 1 + 1];
  v10 = *((_QWORD *)this + 7);
  v64 = (int *)v9;
  do
  {
    v11 = *v8;
    v12 = *(int *)(v59 + 4 * v11);
    v13 = *v8;
    v14 = *(double *)(*(_QWORD *)(v5 + 1200) + 8 * v12);
    v15 = 4 * v12;
    v16 = *(_DWORD *)(v10 + 4 * v12);
    v17 = 8 * v12;
    v18 = *(_DWORD *)(v10 + 4 * v12 + 4);
    if ( v16 >= v18 - 1 )
    {
      v25 = *(_DWORD *)(v10 + 4 * v12);
    }
    else
    {
      v19 = *((_QWORD *)this + 10);
      v20 = 8 * (v16 + 1LL);
      v21 = *(double *)(v19 + v20);
      if ( v7 + v21 > v14 )
      {
        v25 = v16;
LABEL_38:
        if ( v14 >= v21 - v7 )
        {
          v58 = *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v25 >> 5));
          if ( _bittest(&v58, v25) )
            v25 -= (v16 != v25) - 1;
        }
      }
      else
      {
        v22 = v16 + 1;
        v23 = v22 + (unsigned int)(v18 - v16 - 2);
        v24 = v19 + v20 - 8 * v22 - 8;
        while ( 1 )
        {
          v25 = v22;
          if ( v23 == v22 )
            break;
          v21 = *(double *)(v24 + 8 * v22++ + 16);
          if ( v21 + v7 > v14 )
            goto LABEL_38;
        }
      }
    }
    v26 = (signed int *)(v66 + v15);
    v27 = *v26;
    if ( v25 != *v26 )
    {
      v28 = v25;
      v29 = 8LL * v25;
      v60 = (double *)(v29 + *((_QWORD *)this + 11));
      *(double *)&v62[2 * v11] = *(double *)(*((_QWORD *)this + 11) + 8LL * v27) - *v60;
      v30 = (_DWORD)a3 + 1;
      v68[(_QWORD)a3] = v13;
      v31 = (_QWORD *)(v17 + *(_QWORD *)(v5 + 984));
      v32 = (_QWORD *)(v17 + *(_QWORD *)(v5 + 1008));
      v33 = (_QWORD *)(*(_QWORD *)(v5 + 1032) + v17);
      *v26 = v25;
      v34 = *((_QWORD *)this + 13);
      v35 = *(_DWORD *)(v34 + 4LL * (v25 >> 5));
      if ( _bittest(&v35, v25) )
        ++*((_DWORD *)this + 28);
      v36 = *(_DWORD *)(v34 + 4LL * (v27 >> 5));
      if ( _bittest(&v36, v27) )
        --*((_DWORD *)this + 28);
      v37 = *((_QWORD *)this + 10);
      a3 = (int **)v30;
      *v31 = *(_QWORD *)(v37 + 8 * v28);
      *v32 = *(_QWORD *)(v37 + v29 + 8);
      *v33 = *(_QWORD *)v60;
    }
    ++v8;
  }
  while ( v64 != v8 );
  v4 = v68;
  if ( (*((_BYTE *)this + 144) & 2) != 0 )
  {
    v38 = *(_QWORD *)(v5 + 1200);
    v65 = *(_QWORD *)(v5 + 1008);
    v61 = *(_QWORD *)(v5 + 984);
    v67 = *(_QWORD *)(v5 + 1032);
LABEL_18:
    v39 = 0;
    while ( 1 )
    {
      v47 = v4[v39];
      v48 = *(int *)(v59 + 4 * v47);
      v49 = v4[v39];
      v50 = (_BYTE *)(v48 + *((_QWORD *)this + 15));
      v51 = *(double *)(v38 + 8 * v48);
      v52 = (double *)(v61 + 8 * v48);
      v53 = (double *)(v65 + 8 * v48);
      v42 = *v53;
      v43 = *(double *)(*((_QWORD *)this + 17) + 8 * v48);
      v54 = *v50 & 0xF;
      v55 = v54;
      if ( !v54 )
        break;
      v40 = *v52;
      if ( v54 != 2 )
        goto LABEL_20;
      v42 = *v52;
      v56 = *(double *)(*((_QWORD *)this + 16) + 8 * v48);
      --*((_DWORD *)this + 28);
      v40 = v56;
      if ( v7 >= v51 - v42 )
      {
LABEL_21:
        if ( v51 - v40 >= -v7 )
        {
          v44 = 1;
          v45 = 1;
        }
        else
        {
          v43 = v43 - *((double *)this + 2);
          ++*((_DWORD *)this + 28);
          v44 = 0;
          v45 = 0;
        }
        goto LABEL_23;
      }
LABEL_31:
      v43 = v43 + *((double *)this + 2);
      ++*((_DWORD *)this + 28);
      v44 = 2;
      v45 = 2;
LABEL_23:
      if ( v45 != v55 )
      {
        v46 = (double *)(v67 + 8 * v48);
        *(double *)&v62[2 * v47] = *v46 - v43;
        v4[(int)a3] = v49;
        *v50 = *v50 & 0xF0 | v44;
        if ( v45 )
        {
          if ( v45 == 2 )
          {
            *(double *)(*((_QWORD *)this + 16) + 8 * v48) = v40;
            v40 = v42;
            v42 = 1.797693134862316e308;
          }
        }
        else
        {
          *(double *)(*((_QWORD *)this + 16) + 8 * v48) = v42;
          v42 = v40;
          v40 = -1.797693134862316e308;
        }
        *v52 = v40;
        LODWORD(a3) = (_DWORD)a3 + 1;
        *v53 = v42;
        *v46 = v43;
      }
      if ( a2 <= (int)++v39 )
        goto LABEL_44;
    }
    v40 = *v53;
    v41 = *(double *)(*((_QWORD *)this + 16) + 8 * v48);
    --*((_DWORD *)this + 28);
    v42 = v41;
LABEL_20:
    if ( v7 >= v51 - v42 )
      goto LABEL_21;
    goto LABEL_31;
  }
LABEL_44:
  result = v69;
  *((_DWORD *)v69 + 4) = (_DWORD)a3;
  if ( !(_DWORD)a3 )
    goto LABEL_34;
  return result;
}

