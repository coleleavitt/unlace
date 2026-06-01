__int64 __fastcall ClpPrimalColumnSteepest::partialPricing(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rax
  double v8; // xmm0_8
  ClpFactorization *v9; // rdi
  __int64 v10; // rcx
  double v11; // xmm2_8
  int v12; // edx
  double v13; // xmm1_8
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  double *v23; // rdx
  double v24; // xmm0_8
  int v25; // ebx
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edi
  double v31; // xmm3_8
  __int64 v32; // r8
  double v33; // xmm3_8
  double v34; // xmm0_8
  double v35; // xmm4_8
  bool v36; // r12
  int v37; // eax
  char v38; // bl
  int v39; // r15d
  __int64 v40; // r12
  double v41; // xmm0_8
  double v42; // xmm3_8
  unsigned int *v43; // rdi
  __int64 v44; // rcx
  int v45; // r10d
  unsigned int v46; // edi
  __int64 v47; // r13
  int v48; // r11d
  __int64 v49; // rax
  unsigned __int64 v50; // r15
  _BYTE *v51; // r11
  unsigned __int8 v52; // dl
  double v53; // xmm1_8
  double v54; // xmm1_8
  unsigned int v55; // edx
  __int64 v56; // rax
  double v57; // xmm0_8
  double v58; // xmm1_8
  double v60; // [rsp+8h] [rbp-100h]
  unsigned int v61; // [rsp+1Ch] [rbp-ECh]
  __int64 v62; // [rsp+20h] [rbp-E8h]
  int v64; // [rsp+38h] [rbp-D0h]
  int v65; // [rsp+3Ch] [rbp-CCh]
  double v66; // [rsp+48h] [rbp-C0h]
  __int64 v67; // [rsp+58h] [rbp-B0h]
  unsigned int v68; // [rsp+60h] [rbp-A8h]
  int v69; // [rsp+64h] [rbp-A4h]
  __int64 v70; // [rsp+68h] [rbp-A0h]
  __int64 v72; // [rsp+78h] [rbp-90h]
  double v73; // [rsp+80h] [rbp-88h]
  int v74; // [rsp+88h] [rbp-80h]
  unsigned int v75[4]; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v76; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v77[4]; // [rsp+A0h] [rbp-68h]
  _QWORD v78[11]; // [rsp+B0h] [rbp-58h]

  v6 = *((_QWORD *)this + 1);
  v75[0] = a4;
  v8 = *(double *)(v6 + 768);
  v9 = *(ClpFactorization **)(v6 + 1264);
  v73 = *(double *)(v6 + 872);
  v10 = *((_QWORD *)v9 + 1);
  v11 = fmin(0.01, v8) + v73;
  if ( *(_DWORD *)(v6 + 1328) + 199 >= *(_DWORD *)(v6 + 308) )
  {
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 52LL);
    v13 = 0.000001;
    if ( v12 )
      v13 = 0.00000001;
    if ( v8 > v13 )
      v11 = v11 * (v8 / v13);
    v11 = fmin(1000.0, v11);
  }
  if ( v10 )
    v14 = *(_DWORD *)(v10 + 68);
  else
    v14 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 52LL);
  if ( v14 && *(_DWORD *)(v6 + 1232) )
    v11 = fmax(v11, 1.0e-15 * *(double *)(v6 + 904));
  *(double *)(v6 + 872) = v11;
  ClpFactorization::updateColumnTranspose(v9, a3, a2);
  v15 = *(_QWORD *)a2;
  v16 = *((_QWORD *)a2 + 1);
  v17 = *((_QWORD *)this + 1);
  v18 = *(_QWORD *)(v17 + 128);
  v64 = *(_DWORD *)(v17 + 108);
  v19 = *((_DWORD *)a2 + 4);
  v67 = v18;
  if ( v19 > 0 )
  {
    v20 = (unsigned int)(v19 - 1);
    v21 = 0;
    v22 = v20 + 1;
    do
    {
      v23 = (double *)(v18 + 8LL * *(int *)(v15 + 4 * v21));
      v24 = *v23 - *(double *)(v16 + 8 * v21);
      *(_QWORD *)(v16 + 8 * v21++) = 0;
      *v23 = v24;
    }
    while ( v22 != v21 );
  }
  v25 = v75[0];
  v26 = *(_QWORD *)(v17 + 192);
  v27 = -1;
  v28 = *(_QWORD *)(v17 + 1048);
  v76 = -1;
  *(_DWORD *)(v26 + 40) = v75[0];
  v29 = *(_QWORD *)(v17 + 192);
  v74 = v25;
  v78[2] = 0;
  v65 = 0;
  *(_DWORD *)(v29 + 44) = v25;
  v30 = *(_DWORD *)(v17 + 104);
  LODWORD(v29) = 1664525 * *(_DWORD *)(v17 + 356);
  v68 = 0;
  v77[2] = v64;
  v77[1] = v30 + v64;
  v31 = (double)((int)v29 + 1013904223);
  v32 = *(unsigned int *)(v17 + 1160);
  LODWORD(v29) = 1664525 * (v29 + 1013904223) + 1013904223;
  *(_DWORD *)(v17 + 356) = v29;
  v72 = *(_QWORD *)(v17 + 1192);
  v33 = v31 * 2.328306436538696e-10;
  v34 = (double)(int)v29 * 2.328306436538696e-10;
  v35 = v11;
  *(double *)v78 = v34;
  *(double *)&v78[3] = v34;
  v77[0] = v64 + (int)((double)v30 * v33);
  v77[3] = v77[0];
  v70 = v67 - 8LL * v64;
  v78[1] = 0x3FF0000000000000LL;
  v36 = v33 > v34;
  v37 = 256;
  if ( (v30 + v64) / 32 >= 256 )
    v37 = (v30 + v64) / 32;
  if ( v37 > 1024 )
    v37 = 1024;
  v38 = 0;
  v69 = v37 >> 1;
  if ( v33 <= v34 )
    goto LABEL_22;
  while ( 2 )
  {
    v45 = v27;
    v46 = v75[0];
    v44 = (unsigned int)v77[v68];
    v47 = (int)(v68 + 1);
    v48 = v69 + v44;
    if ( v69 + (int)v44 > v77[v47] )
      v48 = v77[v47];
    a5 -= v48 - v44;
    if ( v48 <= (int)v44 )
    {
      if ( a5 >= 0 || v74 >= (signed int)(10 * (v74 - v75[0])) )
        goto LABEL_54;
LABEL_76:
      v75[0] = 0;
      v46 = 0;
      goto LABEL_52;
    }
    v49 = (int)v44;
    v50 = (int)v44 + (unsigned __int64)(unsigned int)(~(_DWORD)v44 + v48) + 1;
    do
    {
      v44 = (unsigned int)v49;
      if ( (_DWORD)v32 == (_DWORD)v49 )
        goto LABEL_48;
      v51 = (_BYTE *)(v49 + *(_QWORD *)(v17 + 264));
      v52 = *v51 & 7;
      if ( v52 == 2 )
      {
        v58 = *(double *)(v28 + 8 * v49) + *(double *)(v70 + 8 * v49);
        if ( v58 <= v11 )
          goto LABEL_48;
        v55 = v46 - 1;
        v75[0] = v46 - 1;
        if ( v58 <= v35 )
          goto LABEL_65;
        goto LABEL_61;
      }
      if ( v52 > 2u )
      {
        if ( v52 != 3 )
        {
          if ( v52 != 4 )
            goto LABEL_48;
          goto LABEL_44;
        }
        v58 = -(*(double *)(v28 + 8 * v49) + *(double *)(v70 + 8 * v49));
        if ( v58 <= v11 )
          goto LABEL_48;
        v55 = v46 - 1;
        v75[0] = v46 - 1;
        if ( v58 <= v35 )
        {
LABEL_65:
          v46 = v55;
          goto LABEL_48;
        }
LABEL_61:
        if ( (*v51 & 0x40) == 0 )
        {
          v76 = v49;
          v46 = v55;
          v35 = v58;
          goto LABEL_48;
        }
        goto LABEL_47;
      }
      if ( v52 )
        goto LABEL_48;
LABEL_44:
      v53 = fabs(*(double *)(v28 + 8 * v49) + *(double *)(v70 + 8 * v49));
      if ( v53 > v11 * 100.0 )
      {
        v54 = v53 * 10.0;
        v55 = v46 - 1;
        v75[0] = v46 - 1;
        if ( v54 <= v35 )
          goto LABEL_65;
        if ( (*v51 & 0x40) == 0 )
        {
          v76 = v49;
          --v46;
          v35 = v54;
          goto LABEL_48;
        }
LABEL_47:
        v75[0] = v46;
      }
LABEL_48:
      if ( !v46 )
        break;
      v44 = (unsigned int)++v49;
    }
    while ( v50 != v49 );
    if ( a5 < 0 )
    {
      v27 = v76;
      if ( v74 >= (int)(10 * (v74 - v46)) )
        goto LABEL_52;
      goto LABEL_76;
    }
    v27 = v76;
LABEL_52:
    if ( v27 != v45 )
    {
      v56 = 8LL * v27;
      v57 = *(double *)(v67 + 8LL * (v27 - v64)) + *(double *)(v28 + v56);
      *(double *)(v72 + v56) = v57;
      v46 = v75[0];
      *(_DWORD *)(*(_QWORD *)(v17 + 192) + 48LL) = v27;
      v35 = fabs(v57);
      *(double *)(*(_QWORD *)(v17 + 192) + 32LL) = v57;
    }
LABEL_54:
    *(_DWORD *)(*(_QWORD *)(v17 + 192) + 44LL) = v46;
    if ( !v46 )
      goto LABEL_74;
    v77[v68] = v44;
    if ( v77[v47] <= (int)v44 )
    {
      v44 = v68;
      if ( v68 )
      {
        if ( !v38 )
        {
          v38 = v36;
          goto LABEL_22;
        }
        goto LABEL_74;
      }
      v68 = 2;
      if ( !v38 )
        goto LABEL_22;
LABEL_33:
      v38 = 1;
LABEL_34:
      v36 = 1;
      continue;
    }
    break;
  }
  if ( v38 )
    goto LABEL_33;
LABEL_22:
  v60 = v35;
  v61 = v32;
  v62 = v28;
  while ( 2 )
  {
    v39 = v27;
    v40 = v65 + 1;
    v41 = *(double *)&v78[v65];
    v66 = *(double *)&v78[v40];
    (*(void (__fastcall **)(_QWORD, __int64, int *, unsigned int *, double, double))(**(_QWORD **)(v17 + 192) + 288LL))(
      *(_QWORD *)(v17 + 192),
      v17,
      &v76,
      v75,
      v41,
      v66);
    v42 = v66;
    v17 = *((_QWORD *)this + 1);
    v43 = *(unsigned int **)(v17 + 192);
    v44 = v43[11];
    v75[0] = v43[11];
    a5 -= (int)((v66 - v41) * (double)v64);
    if ( a5 >= 0 || v74 >= 10 * (v74 - (int)v44) )
    {
      if ( v39 != v76 )
        goto LABEL_70;
    }
    else
    {
      v75[0] = 0;
      if ( v76 == v39 )
        goto LABEL_74;
LABEL_70:
      ClpMatrixBase::reducedCost((ClpMatrixBase *)v43, (ClpSimplex *)v17, v76);
      v44 = v75[0];
      v17 = *((_QWORD *)this + 1);
      v42 = v66;
      v60 = fabs(v41);
    }
    if ( !(_DWORD)v44 )
      goto LABEL_74;
    *(double *)&v78[v65] = v42;
    if ( v42 < *(double *)&v78[v40] - 0.00000001 )
    {
LABEL_29:
      if ( !v38 )
      {
        v35 = v60;
        v32 = v61;
        v28 = v62;
        v27 = v76;
        goto LABEL_34;
      }
      v27 = v76;
      continue;
    }
    break;
  }
  if ( !v65 )
  {
    v65 = 2;
    goto LABEL_29;
  }
  v35 = v60;
  v32 = v61;
  v28 = v62;
  if ( !v38 )
  {
    v27 = v76;
    goto LABEL_33;
  }
LABEL_74:
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *(double *)(v17 + 872) = v73;
  (*(void (__fastcall **)(_QWORD, __int64, int *, __int64, __int64, __int64))(**(_QWORD **)(v17 + 192) + 336LL))(
    *(_QWORD *)(v17 + 192),
    v17,
    &v76,
    v44,
    v32,
    v28);
  return (unsigned int)v76;
}

