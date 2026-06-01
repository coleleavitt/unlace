__int64 __fastcall ClpNetworkMatrix::partialPricing(
        ClpNetworkMatrix *this,
        ClpSimplex *a2,
        double a3,
        double a4,
        int *a5,
        int *a6)
{
  int v6; // r8d
  int v7; // ebx
  int v8; // ebp
  __int64 v9; // r9
  __int64 v10; // r11
  int v11; // r12d
  __int64 result; // rax
  double v13; // xmm1_8
  double v14; // xmm2_8
  int v15; // r10d
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int8 v18; // bl
  __int64 v19; // r14
  double v20; // xmm0_8
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rbx
  double v24; // xmm0_8
  double v25; // xmm0_8
  int v26; // ebx
  __int64 v27; // r10
  double v28; // xmm0_8
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r14
  double v33; // xmm0_8
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  unsigned __int8 v43; // bl
  double v44; // xmm0_8
  double v45; // xmm0_8
  int v46; // ebx
  double v47; // xmm0_8
  int v48; // r8d
  double v49; // xmm0_8
  __int64 v50; // [rsp+0h] [rbp-38h]

  v6 = *((_DWORD *)this + 11);
  *a6 = v6;
  v7 = *((_DWORD *)this + 29);
  v8 = *a5;
  v9 = *((_QWORD *)a2 + 16);
  v10 = *((_QWORD *)a2 + 129);
  v50 = *((_QWORD *)a2 + 147);
  v11 = (int)(a3 * (double)v7);
  result = (unsigned int)(int)(a4 * (double)v7 + 1.0);
  v13 = *((double *)a2 + 109);
  v14 = v13;
  if ( (int)result <= v7 )
    v7 = result;
  if ( v8 >= 0 )
  {
    result = v8;
    v14 = fabs(*(double *)(*((_QWORD *)a2 + 147) + 8LL * v8));
  }
  v15 = *((_DWORD *)a2 + 290);
  if ( !*((_BYTE *)this + 120) )
  {
    if ( v11 >= v7 )
      goto LABEL_28;
    v16 = v11;
    v17 = v11 + (unsigned __int64)(unsigned int)(~v11 + v7) + 1;
    while ( 1 )
    {
      if ( v15 == (_DWORD)v16 )
        goto LABEL_20;
      v18 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v16) & 7;
      if ( v18 == 2 )
      {
        v37 = *((_QWORD *)this + 13);
        v25 = *(double *)(v10 + 8 * v16);
        v38 = 2 * (int)v16;
        v39 = *(int *)(v37 + 4 * v38);
        v40 = *(int *)(v37 + 4 * v38 + 4);
        if ( (int)v39 >= 0 )
          v25 = v25 + *(double *)(v9 + 8 * v39);
        if ( (int)v40 >= 0 )
          v25 = v25 - *(double *)(v9 + 8 * v40);
      }
      else
      {
        if ( v18 <= 2u )
        {
          if ( !v18 )
            goto LABEL_13;
          goto LABEL_20;
        }
        if ( v18 != 3 )
        {
          if ( v18 != 4 )
            goto LABEL_20;
LABEL_13:
          v19 = *((_QWORD *)this + 13);
          v20 = *(double *)(v10 + 8 * v16);
          v21 = 2 * (int)v16;
          v22 = *(int *)(v19 + 4 * v21);
          v23 = *(int *)(v19 + 4 * v21 + 4);
          if ( (int)v22 >= 0 )
            v20 = v20 + *(double *)(v9 + 8 * v22);
          if ( (int)v23 >= 0 )
            v20 = v20 - *(double *)(v9 + 8 * v23);
          v24 = fabs(v20);
          if ( v24 <= v13 * 100.0 )
            goto LABEL_20;
          v25 = v24 * 10.0;
          v26 = v6 - 1;
          *a6 = v6 - 1;
          if ( v25 > v14 )
          {
LABEL_36:
            if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v16) & 0x40) != 0 )
            {
              *a6 = v6;
            }
            else
            {
              *a5 = v16;
              v14 = v25;
              v6 = *a6;
            }
            goto LABEL_20;
          }
LABEL_19:
          v6 = v26;
          goto LABEL_20;
        }
        v32 = *((_QWORD *)this + 13);
        v33 = *(double *)(v10 + 8 * v16);
        v34 = 2 * (int)v16;
        v35 = *(int *)(v32 + 4 * v34);
        v36 = *(int *)(v32 + 4 * v34 + 4);
        if ( (int)v35 >= 0 )
          v33 = v33 + *(double *)(v9 + 8 * v35);
        if ( (int)v36 >= 0 )
          v33 = v33 - *(double *)(v9 + 8 * v36);
        v25 = -v33;
      }
      if ( v25 > v13 )
      {
        v26 = v6 - 1;
        *a6 = v6 - 1;
        if ( v25 > v14 )
          goto LABEL_36;
        goto LABEL_19;
      }
LABEL_20:
      if ( v6 )
      {
        if ( v17 != ++v16 )
          continue;
      }
      result = (unsigned int)*a5;
      if ( v8 != (_DWORD)result )
      {
        v27 = *((_QWORD *)this + 13);
        v28 = *(double *)(v10 + 8LL * (int)result);
        v29 = 2 * (int)result;
        v30 = *(int *)(v27 + 4 * v29);
        v31 = *(int *)(v27 + 4 * v29 + 4);
        if ( (int)v30 >= 0 )
          v28 = v28 + *(double *)(v9 + 8 * v30);
        if ( (int)v31 >= 0 )
          v28 = v28 - *(double *)(v9 + 8 * v31);
        *(double *)(v50 + 8LL * (int)result) = v28;
        *((_DWORD *)this + 12) = result;
        v6 = *a6;
        *((double *)this + 4) = v28;
      }
LABEL_28:
      *((_DWORD *)this + 11) = v6;
      return result;
    }
  }
  if ( v11 >= v7 )
    goto LABEL_28;
  v41 = v11;
  v42 = v11 + (unsigned __int64)(unsigned int)(~v11 + v7) + 1;
  do
  {
    if ( v15 == (_DWORD)v41 )
      goto LABEL_54;
    v43 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v41) & 7;
    if ( v43 == 2 )
    {
      v49 = *(double *)(v10 + 8 * v41)
          + *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41))
          - *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41 + 4));
      if ( v49 <= v13 )
        goto LABEL_54;
      goto LABEL_59;
    }
    if ( v43 > 2u )
    {
      if ( v43 != 3 )
      {
        if ( v43 != 4 )
          goto LABEL_54;
        goto LABEL_51;
      }
      v49 = -(*(double *)(v10 + 8 * v41)
            + *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41))
            - *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41 + 4)));
      if ( v49 <= v13 )
        goto LABEL_54;
LABEL_59:
      v46 = v6 - 1;
      *a6 = v6 - 1;
      if ( v49 <= v14 )
        goto LABEL_53;
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v41) & 0x40) != 0 )
        goto LABEL_62;
      *a5 = v41;
      v14 = v49;
      v6 = *a6;
      goto LABEL_54;
    }
    if ( v43 )
      goto LABEL_54;
LABEL_51:
    v44 = fabs(
            *(double *)(v10 + 8 * v41)
          + *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41))
          - *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)v41 + 4)));
    if ( v44 > v13 * 100.0 )
    {
      v45 = v44 * 10.0;
      v46 = v6 - 1;
      *a6 = v6 - 1;
      if ( v45 > v14 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v41) & 0x40) == 0 )
        {
          *a5 = v41;
          v14 = v45;
          v6 = *a6;
          goto LABEL_54;
        }
LABEL_62:
        *a6 = v6;
        goto LABEL_54;
      }
LABEL_53:
      v6 = v46;
    }
LABEL_54:
    if ( !v6 )
      break;
    ++v41;
  }
  while ( v42 != v41 );
  result = (unsigned int)*a5;
  if ( v8 == (_DWORD)result )
    goto LABEL_28;
  v47 = *(double *)(v10 + 8LL * (int)result)
      + *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)result))
      - *(double *)(v9 + 8LL * *(int *)(*((_QWORD *)this + 13) + 8LL * (_DWORD)result + 4));
  *(double *)(v50 + 8LL * (int)result) = v47;
  *((_DWORD *)this + 12) = result;
  v48 = *a6;
  *((double *)this + 4) = v47;
  *((_DWORD *)this + 11) = v48;
  return result;
}

