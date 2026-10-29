double **__fastcall ClpPackedMatrix::transposeTimesByRow(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        double **a5,
        double **a6)
{
  __int64 v9; // rdx
  int *v10; // r12
  double *v11; // rbx
  int v12; // r10d
  double v13; // xmm4_8
  __int64 v14; // rax
  __int64 (__fastcall *v15)(ClpPackedMatrix *); // rcx
  __int64 v16; // r13
  __int64 (__fastcall *v17)(ClpPackedMatrix *); // rax
  int *v18; // r9
  char v19; // al
  __int64 v20; // rcx
  double *v21; // r14
  __int64 v22; // rax
  int *v23; // r15
  __int64 v24; // rdx
  int v25; // r8d
  double v26; // xmm3_8
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // rdx
  int v31; // edx
  int *v32; // rax
  __int64 v33; // rdi
  __int64 i; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // esi
  double *v38; // rcx
  __int64 v40; // rax
  int *v41; // rdx
  double *v42; // rcx
  int v43; // r8d
  __int64 v44; // rdi
  int v45; // eax
  int v46; // eax
  int v47; // edx
  __int64 v48; // rax
  _DWORD *v49; // rdi
  int v50; // esi
  double v51; // xmm2_8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  double v55; // xmm1_8
  __int64 v56; // rax
  int *v57; // r10
  int v58; // edx
  int v59; // edi
  double v60; // xmm1_8
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // r8
  double v64; // xmm2_8
  __int64 v65; // rsi
  double *v66; // rdx
  int v67; // edx
  int *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rcx
  __int64 v71; // rsi
  double *v72; // rcx
  int v73; // edx
  __int64 v74; // rax
  int *v75; // rsi
  __int64 v76; // rdx
  int v77; // ecx
  double v78; // xmm1_8
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // r9
  double v82; // xmm2_8
  __int64 v83; // rcx
  int v84; // edi
  int v85; // edx
  int v86; // edi
  __int64 v87; // [rsp+8h] [rbp-70h]
  int v88; // [rsp+8h] [rbp-70h]
  __int64 v89; // [rsp+10h] [rbp-68h]
  __int64 v91; // [rsp+20h] [rbp-58h]
  int v92; // [rsp+20h] [rbp-58h]
  double v93; // [rsp+20h] [rbp-58h]
  __int64 v94; // [rsp+28h] [rbp-50h]
  double v95; // [rsp+30h] [rbp-48h]

  CoinIndexedVector::clear((CoinIndexedVector *)a6);
  v9 = *((_QWORD *)this + 11);
  v10 = (int *)*a6;
  v11 = a6[1];
  v12 = *((_DWORD *)a4 + 4);
  v94 = *((_QWORD *)a4 + 1);
  v13 = *((double *)a2 + 88);
  v89 = *(_QWORD *)(v9 + 40);
  v14 = *(_QWORD *)this;
  v15 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)this + 56LL);
  if ( v15 == ClpPackedMatrix::getVectorStarts )
  {
    v16 = *(_QWORD *)(v9 + 48);
  }
  else
  {
    v88 = *((_DWORD *)a4 + 4);
    v93 = *((double *)a2 + 88);
    v16 = v15(this);
    v13 = v93;
    v14 = *(_QWORD *)this;
    v12 = v88;
  }
  v17 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v14 + 40);
  if ( v17 == ClpPackedMatrix::getElements )
  {
    v87 = *(_QWORD *)(*((_QWORD *)this + 11) + 32LL);
  }
  else
  {
    v92 = v12;
    v95 = v13;
    v87 = v17(this);
    v13 = v95;
    v12 = v92;
  }
  v18 = *(int **)a4;
  v19 = *((_BYTE *)a4 + 28);
  if ( v12 <= 2 )
  {
    if ( v12 == 2 )
    {
      if ( v19 )
      {
        ClpPackedMatrix::gutsOfTransposeTimesByRowEQ2(
          this,
          a4,
          (CoinIndexedVector *)a6,
          (CoinIndexedVector *)a5,
          v13,
          a3);
        LODWORD(i) = *((_DWORD *)a6 + 4);
        goto LABEL_18;
      }
      v48 = *v18;
      v49 = (_DWORD *)(v16 + 4 * v48 + 4);
      v50 = *(_DWORD *)(v16 + 4 * v48);
      v51 = *(double *)(v94 + 8 * v48) * a3;
      if ( v50 >= *v49 )
      {
        v54 = 0;
      }
      else
      {
        v52 = 1;
        do
        {
          v53 = *(int *)(v89 + 4LL * v50 + 4 * v52 - 4);
          v54 = (int)v52;
          v55 = *(double *)(v87 + 8LL * v50 + 8 * v52 - 8) * v51;
          v10[v52 - 1] = v53;
          v11[v53] = v55;
          LODWORD(v53) = v50 + v52++;
        }
        while ( *v49 > (int)v53 );
      }
      v56 = v18[1];
      v57 = (int *)(v16 + 4 * v56 + 4);
      v58 = *(_DWORD *)(v16 + 4 * v56);
      v59 = *v57;
      v60 = a3 * *(double *)(v94 + 8 * v56);
      if ( *v57 <= v58 )
      {
LABEL_46:
        if ( !(_DWORD)v54 )
          goto LABEL_22;
      }
      else
      {
        v61 = v58 + 1;
        v62 = v89 + -4 * v61 + 4LL * v58;
        v63 = v87 + -8 * v61 + 8LL * v58;
        while ( 1 )
        {
          while ( 1 )
          {
            v64 = *(double *)(v63 + 8 * v61) * v60;
            v65 = *(int *)(v62 + 4 * v61);
            v66 = &v11[v65];
            if ( *v66 == 0.0 )
              break;
            *v66 = *v66 + v64;
            v67 = v61++;
            if ( v67 >= v59 )
              goto LABEL_46;
          }
          v10[v54] = v65;
          v59 = *v57;
          *v66 = v64;
          v73 = v61++;
          if ( v73 >= v59 )
            break;
          v54 = (int)v54 + 1;
        }
        LODWORD(v54) = v54 + 1;
      }
      v68 = v10;
      v69 = (__int64)&v10[(unsigned int)(v54 - 1) + 1];
      LODWORD(i) = 0;
      do
      {
        v71 = *v68;
        v72 = &v11[v71];
        if ( fabs(*v72) > v13 )
        {
          v70 = (int)i;
          LODWORD(i) = i + 1;
          v10[v70] = v71;
        }
        else
        {
          *v72 = 0.0;
        }
        ++v68;
      }
      while ( (int *)v69 != v68 );
      goto LABEL_18;
    }
    if ( v12 != 1 )
      goto LABEL_22;
    if ( v19 )
    {
      ClpPackedMatrix::gutsOfTransposeTimesByRowEQ1(this, a4, (CoinIndexedVector *)a6, v13, a3);
      LODWORD(i) = *((_DWORD *)a6 + 4);
      goto LABEL_18;
    }
    v74 = *v18;
    v75 = (int *)(v16 + 4 * v74 + 4);
    v76 = *(int *)(v16 + 4 * v74);
    v77 = *v75;
    v78 = a3 * *(double *)(v94 + 8 * v74);
    if ( (int)v76 >= *v75 )
    {
LABEL_22:
      *((_DWORD *)a6 + 4) = 0;
LABEL_23:
      *((_BYTE *)a6 + 28) = 0;
      goto LABEL_24;
    }
    v79 = (int)v76 + 1;
    v80 = v87 + -8 * v79 + 8 * v76;
    v81 = v89 + 4 * v76 - 4 * v79;
    for ( i = 0; ; i = v84 )
    {
      while ( 1 )
      {
        v82 = *(double *)(v80 + 8 * v79) * v78;
        if ( fabs(v82) > v13 )
          break;
        v86 = v79++;
        if ( v86 >= v77 )
          goto LABEL_18;
      }
      v83 = *(int *)(v81 + 4 * v79);
      v84 = i + 1;
      v10[i] = v83;
      v11[v83] = v82;
      v77 = *v75;
      v85 = v79++;
      if ( v85 >= *v75 )
        break;
    }
    *((_DWORD *)a6 + 4) = v84;
  }
  else
  {
    if ( !v19 )
    {
      v20 = 0;
      v21 = a5[1];
      v91 = (__int64)&v18[v12 - 1 + 1];
      do
      {
        while ( 1 )
        {
          v22 = *v18;
          v23 = (int *)(v16 + 4 * v22 + 4);
          v24 = *(int *)(v16 + 4 * v22);
          v25 = *v23;
          v26 = *(double *)(v94 + 8 * v22) * a3;
          if ( *v23 > (int)v24 )
            break;
LABEL_12:
          if ( (int *)v91 == ++v18 )
            goto LABEL_13;
        }
        v27 = (int)v24 + 1;
        v28 = v87 + -8 * v27 + 8 * v24;
        v29 = v89 + -4 * v27 + 4 * v24;
        do
        {
          while ( 1 )
          {
            v30 = *(int *)(v29 + 4 * v27);
            if ( *((_BYTE *)v21 + v30) )
              break;
            *((_BYTE *)v21 + v30) = 1;
            v10[v20] = v30;
            v25 = *v23;
            v20 = (int)v20 + 1;
            v11[v30] = *(double *)(v28 + 8 * v27) * v26 + v11[v30];
            v31 = v27++;
            if ( v31 >= v25 )
              goto LABEL_12;
          }
          v11[v30] = *(double *)(v28 + 8 * v27) * v26 + v11[v30];
          v47 = v27++;
        }
        while ( v47 < v25 );
        ++v18;
      }
      while ( (int *)v91 != v18 );
LABEL_13:
      if ( (_DWORD)v20 )
      {
        v32 = v10;
        v33 = (__int64)&v10[(unsigned int)(v20 - 1) + 1];
        LODWORD(i) = 0;
        do
        {
          while ( 1 )
          {
            v36 = *v32;
            *((_BYTE *)v21 + v36) = 0;
            v37 = v36;
            v38 = &v11[v36];
            if ( fabs(*v38) <= v13 )
              break;
            ++v32;
            v35 = (int)i;
            LODWORD(i) = i + 1;
            v10[v35] = v37;
            if ( (int *)v33 == v32 )
              goto LABEL_18;
          }
          ++v32;
          *v38 = 0.0;
        }
        while ( (int *)v33 != v32 );
LABEL_18:
        *((_DWORD *)a6 + 4) = i;
        if ( (_DWORD)i )
          goto LABEL_24;
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    v40 = *((_QWORD *)this + 11);
    v41 = (int *)*a6;
    v42 = a6[1];
    v43 = *(_DWORD *)(v40 + 64);
    if ( !*(_BYTE *)(v40 + 8) )
      v43 = *(_DWORD *)(v40 + 68);
    v44 = (__int64)&v18[v12 - 1 + 1];
    v45 = 0;
    while ( 1 )
    {
      v45 = *(_DWORD *)(v16 + 4LL * *v18 + 4) + v45 - *(_DWORD *)(v16 + 4LL * *v18);
      if ( v43 < v45 )
        break;
      if ( (int *)v44 == ++v18 )
      {
        v46 = ClpPackedMatrix::gutsOfTransposeTimesByRowGE3(this, a4, v41, v42, a5[1], v13, a3);
        goto LABEL_31;
      }
    }
    v46 = ClpPackedMatrix::gutsOfTransposeTimesByRowGEK(this, a4, v41, v42, v43, v13, a3);
LABEL_31:
    *((_DWORD *)a6 + 4) = v46;
    if ( !v46 )
      goto LABEL_22;
  }
LABEL_24:
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  return a5;
}

