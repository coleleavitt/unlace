__m128 __fastcall ClpQuadraticObjective::stepLength(
        ClpQuadraticObjective *this,
        ClpSimplex *a2,
        const double *a3,
        const double *a4,
        __m128 a5,
        double *a6,
        double *a7,
        double *a8)
{
  __m128 v8; // xmm8
  __int64 v9; // r10
  int v10; // eax
  char v11; // bl
  int v12; // ebp
  double v13; // xmm6_8
  double v14; // xmm1_8
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  double v17; // xmm0_8
  double v18; // xmm2_8
  double v19; // xmm0_8
  _QWORD *v20; // rax
  __int64 v21; // r10
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rbp
  double v25; // xmm12_8
  int v26; // eax
  double v27; // xmm2_8
  double v28; // xmm0_8
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r14
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // esi
  double v35; // xmm7_8
  double v36; // xmm9_8
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // rsi
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v44; // xmm3_8
  double v45; // xmm6_8
  double v46; // xmm4_8
  double v47; // xmm3_8
  __int128 v48; // xmm4
  int v50; // eax
  __int64 v51; // r14
  __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // rax
  int v55; // esi
  double v56; // xmm7_8
  double v57; // xmm9_8
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // r10
  __int64 v62; // rdi
  double v63; // xmm3_8
  double v64; // xmm12_8
  double v65; // xmm4_8
  double v66; // xmm6_8
  double v67; // xmm2_8
  double v68; // xmm0_8
  __int64 v69; // r12
  unsigned __int64 v70; // r11
  __int64 v71; // rsi
  __int64 v72; // rax
  int v73; // edi
  double v74; // xmm7_8
  __int64 v75; // rbp
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r10
  __int64 v79; // rdi
  double v80; // xmm3_8
  double v81; // xmm5_8
  __int64 v82; // r14
  __int64 v83; // rbx
  __int64 v84; // r8
  __int64 v85; // rax
  int v86; // esi
  double v87; // xmm7_8
  double v88; // xmm9_8
  __int64 v89; // r12
  __int64 v90; // rbp
  __int64 v91; // rax
  __int64 v92; // r10
  __int64 v93; // rdi
  double v94; // xmm3_8
  double v95; // xmm4_8
  double v96; // xmm5_8
  __int64 v97; // [rsp+0h] [rbp-58h]
  ClpSimplex *v98; // [rsp+0h] [rbp-58h]
  unsigned __int64 v99; // [rsp+0h] [rbp-58h]
  ClpSimplex *v100; // [rsp+0h] [rbp-58h]
  __int64 v101; // [rsp+8h] [rbp-50h]
  double *v102; // [rsp+8h] [rbp-50h]
  ClpSimplex *v103; // [rsp+10h] [rbp-48h]
  double *v104; // [rsp+10h] [rbp-48h]
  double *v105; // [rsp+18h] [rbp-40h]
  double *v106; // [rsp+18h] [rbp-40h]

  v8 = a5;
  v9 = *((_QWORD *)a2 + 129);
  v10 = *((_DWORD *)a2 + 27);
  if ( v9 )
  {
    v10 += *((_DWORD *)a2 + 26);
    v11 = 1;
  }
  else
  {
    v9 = *((_QWORD *)this + 4);
    v11 = 0;
  }
  *a6 = 0.0;
  v12 = *((_DWORD *)this + 5);
  *a8 = 0.0;
  if ( v10 > 0 )
  {
    v13 = 0.0;
    v14 = 0.0;
    v15 = 8LL * (unsigned int)(v10 - 1) + 8;
    v16 = 0;
    do
    {
      v17 = *(double *)(v9 + v16);
      v18 = a4[v16 / 8] * v17;
      v19 = v17 * a3[v16 / 8];
      v16 += 8LL;
      v14 = v14 + v18;
      v13 = v13 + v19;
    }
    while ( v15 != v16 );
    if ( v12 )
    {
      v20 = *((_QWORD **)this + 3);
      if ( v20 )
        goto LABEL_8;
    }
    *a6 = v13;
    *a8 = v13 + v14 * *(double *)v8.m128_u64;
    if ( v14 < 0.0 )
      return v8;
    return (__m128)0LL;
  }
  if ( !v12 || (v20 = *((_QWORD **)this + 3)) == nullptr )
  {
    *a6 = 0.0;
    *a8 = *(double *)a5.m128_u64 * 0.0 + 0.0;
    return (__m128)0LL;
  }
  v14 = 0.0;
  v13 = 0.0;
LABEL_8:
  v21 = v20[4];
  v101 = v20[5];
  v22 = v20[6];
  v23 = v20[7];
  if ( !*((_QWORD *)a2 + 28) && *((double *)a2 + 11) == 1.0 && *(double *)a2 == 1.0 || !v11 )
  {
    v50 = *((_DWORD *)this + 12);
    if ( *((_BYTE *)this + 56) )
    {
      if ( v50 > 0 )
      {
        v67 = 0.0;
        v68 = 0.0;
        v69 = 4LL * (unsigned int)(v50 - 1) + 4;
        v100 = a2;
        v70 = 0;
        v71 = v21;
        do
        {
          v72 = *(int *)(v22 + v70);
          v73 = *(_DWORD *)(v23 + v70);
          v74 = a4[v70 / 4];
          if ( (int)v72 + v73 > (int)v72 )
          {
            v75 = v101 + 4 * v72;
            v76 = v71 + 8 * v72;
            v77 = 0;
            v78 = (unsigned int)(v73 - 1) + 1LL;
            do
            {
              v79 = *(int *)(v75 + 4 * v77);
              v80 = *(double *)(v76 + 8 * v77++);
              v81 = a3[v79] * v80;
              v68 = v68 + v80 * (a4[v79] * v74);
              v14 = v14 + v74 * v81;
              v67 = v67 + v81 * a3[v70 / 4];
            }
            while ( v78 != v77 );
          }
          v70 += 4LL;
        }
        while ( v69 != v70 );
        a2 = v100;
        v28 = v68 * 0.5;
        v27 = v67 * 0.5;
        goto LABEL_22;
      }
LABEL_47:
      v66 = v13 + 0.0;
      v46 = v14 * *(double *)v8.m128_u64;
      v27 = 0.0;
      *a6 = v66;
      v28 = 0.0;
      v47 = *(double *)v8.m128_u64 * 0.0 * *(double *)v8.m128_u64;
      *a8 = v66 + v47 + v14 * *(double *)v8.m128_u64;
LABEL_48:
      *a7 = v47 + *a6 + v46;
      if ( v14 <= 0.0 || (*(_BYTE *)(*((_QWORD *)a2 + 43) + 104LL) & 0x20) == 0 )
        return v8;
      *(_QWORD *)&v48 = v8.m128_u64[0];
      goto LABEL_51;
    }
    if ( v50 <= 0 )
      goto LABEL_47;
    v106 = a7;
    v27 = 0.0;
    v104 = a6;
    v28 = 0.0;
    v51 = (unsigned int)(v50 - 1) + 1LL;
    v52 = 0;
    v98 = a2;
    v53 = v21;
    do
    {
      v54 = *(int *)(v22 + 4 * v52);
      v55 = *(_DWORD *)(v23 + 4 * v52);
      v56 = a3[v52];
      v57 = a4[v52];
      if ( (int)v54 < (int)v54 + v55 )
      {
        v58 = v101 + 4 * v54;
        v59 = v53 + 8 * v54;
        v60 = 0;
        v61 = (unsigned int)(v55 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v62 = *(int *)(v58 + 4 * v60);
            v63 = *(double *)(v59 + 8 * v60);
            v64 = a3[v62];
            v65 = a4[v62];
            if ( (_DWORD)v62 == (_DWORD)v52 )
              break;
            ++v60;
            v28 = v28 + v57 * v65 * v63;
            v14 = v14 + (v65 * v56 + v57 * v64) * v63;
            v27 = v27 + v63 * (v64 * v56);
            if ( v61 == v60 )
              goto LABEL_41;
          }
          ++v60;
          v28 = v28 + v57 * 0.5 * v57 * v63;
          v14 = v14 + v56 * v57 * v63;
          v27 = v27 + v63 * (v56 * 0.5 * v56);
        }
        while ( v61 != v60 );
      }
LABEL_41:
      ++v52;
    }
    while ( v51 != v52 );
LABEL_42:
    a2 = v98;
    a6 = v104;
    a7 = v106;
    goto LABEL_22;
  }
  v24 = *((_QWORD *)a2 + 29);
  v25 = *(double *)a2 * *((double *)a2 + 11);
  if ( v25 != 0.0 )
    v25 = 1.0 / v25;
  v26 = *((_DWORD *)this + 12);
  if ( !v24 )
  {
    if ( v26 <= 0 )
      goto LABEL_47;
    v106 = a7;
    v27 = 0.0;
    v104 = a6;
    v28 = 0.0;
    v82 = (unsigned int)(v26 - 1) + 1LL;
    v83 = 0;
    v98 = a2;
    v84 = v21;
    do
    {
      v85 = *(int *)(v22 + 4 * v83);
      v86 = *(_DWORD *)(v23 + 4 * v83);
      v87 = a3[v83];
      v88 = a4[v83];
      if ( (int)v85 < (int)v85 + v86 )
      {
        v89 = v101 + 4 * v85;
        v90 = v84 + 8 * v85;
        v91 = 0;
        v92 = (unsigned int)(v86 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v93 = *(int *)(v89 + 4 * v91);
            v94 = *(double *)(v90 + 8 * v91) * v25;
            v95 = a3[v93];
            v96 = a4[v93];
            if ( (_DWORD)v93 == (_DWORD)v83 )
              break;
            ++v91;
            v28 = v28 + v88 * v96 * v94;
            v14 = v14 + (v96 * v87 + v88 * v95) * v94;
            v27 = v27 + v94 * (v95 * v87);
            if ( v92 == v91 )
              goto LABEL_66;
          }
          ++v91;
          v28 = v28 + v88 * 0.5 * v88 * v94;
          v14 = v14 + v87 * v88 * v94;
          v27 = v27 + v94 * (v87 * 0.5 * v87);
        }
        while ( v92 != v91 );
      }
LABEL_66:
      ++v83;
    }
    while ( v82 != v83 );
    goto LABEL_42;
  }
  if ( v26 <= 0 )
    goto LABEL_47;
  v27 = 0.0;
  v28 = 0.0;
  v105 = a6;
  v97 = (unsigned int)(v26 - 1) + 1LL;
  v29 = v101;
  v30 = 0;
  v102 = a7;
  v31 = v22;
  v103 = a2;
  v32 = v21;
  do
  {
    v33 = *(int *)(v31 + 4 * v30);
    v34 = *(_DWORD *)(v23 + 4 * v30);
    v35 = a3[v30];
    v36 = a4[v30];
    if ( (int)v33 < (int)v33 + v34 )
    {
      v37 = v29 + 4 * v33;
      v38 = v32 + 8 * v33;
      v39 = 0;
      v40 = (unsigned int)(v34 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          v41 = *(int *)(v37 + 4 * v39);
          v42 = a3[v41];
          v43 = a4[v41];
          v44 = *(double *)(v24 + 8 * v41) * (*(double *)(v24 + 8 * v30) * v25) * *(double *)(v38 + 8 * v39);
          if ( (_DWORD)v41 == (_DWORD)v30 )
            break;
          ++v39;
          v28 = v28 + v36 * v43 * v44;
          v14 = v14 + (v43 * v35 + v36 * v42) * v44;
          v27 = v27 + v44 * (v42 * v35);
          if ( v40 == v39 )
            goto LABEL_20;
        }
        ++v39;
        v28 = v28 + v36 * 0.5 * v36 * v44;
        v14 = v14 + v35 * v36 * v44;
        v27 = v27 + v44 * (v35 * 0.5 * v35);
      }
      while ( v40 != v39 );
    }
LABEL_20:
    ++v30;
  }
  while ( v97 != v30 );
  a2 = v103;
  a6 = v105;
  a7 = v102;
LABEL_22:
  v45 = v13 + v27;
  v46 = v14 * *(double *)v8.m128_u64;
  *a6 = v45;
  v47 = v28 * *(double *)v8.m128_u64 * *(double *)v8.m128_u64;
  *a8 = v45 + v47 + v14 * *(double *)v8.m128_u64;
  if ( v28 <= 0.0 )
    goto LABEL_48;
  v48 = 0xBFE0000000000000LL;
  *(double *)&v48 = -0.5 * v14 / v28;
  *a7 = v28 * *(double *)&v48 * *(double *)&v48 + *a6 + v14 * *(double *)&v48;
  if ( v14 > 0.0 && (*(_BYTE *)(*((_QWORD *)a2 + 43) + 104LL) & 0x20) != 0 )
  {
LABEL_51:
    v99 = v48;
    printf("a %g b %g c %g => %g\n", v28, v14, v27, *(double *)&v48);
    v8 = (__m128)v8.m128_u64[0];
    v48 = v99;
  }
  if ( *(double *)v8.m128_u64 <= *(double *)&v48 )
    return v8;
  return (__m128)v48;
}

