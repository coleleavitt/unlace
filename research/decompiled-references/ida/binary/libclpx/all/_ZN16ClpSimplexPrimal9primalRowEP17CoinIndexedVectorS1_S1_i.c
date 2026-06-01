__int64 __fastcall ClpSimplexPrimal::primalRow(
        ClpSimplexPrimal *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        int a5)
{
  ClpSimplexPrimal *v7; // rbx
  bool v8; // cc
  double v9; // xmm7_8
  double v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // r14
  __int64 v15; // r15
  const __m128i *v16; // r12
  __int64 v17; // r13
  double v18; // xmm9_8
  double v19; // xmm6_8
  double v20; // xmm10_8
  bool v21; // r10
  double v22; // xmm0_8
  double v23; // xmm2_8
  __int64 v24; // rdi
  double v25; // xmm1_8
  __int64 v26; // rax
  double v27; // xmm4_8
  int v28; // r8d
  double v29; // xmm11_8
  double v30; // xmm1_8
  bool v31; // cl
  __int64 v32; // rcx
  __int64 v33; // rdx
  double v34; // xmm0_8
  __int64 v35; // rcx
  __int32 v36; // esi
  double v37; // xmm5_8
  __int64 v38; // rdi
  double v39; // xmm5_8
  double v40; // xmm0_8
  double v41; // xmm1_8
  double v42; // xmm8_8
  double v43; // xmm5_8
  double v44; // xmm14_8
  __int64 v45; // rax
  double v46; // xmm14_8
  double v47; // xmm15_8
  ClpSimplexPrimal *v48; // r15
  double v49; // xmm8_8
  __int64 v50; // rdx
  double v51; // xmm0_8
  int v52; // ebx
  double v53; // xmm1_8
  double v54; // xmm8_8
  __int64 v55; // rax
  double v56; // xmm13_8
  int v57; // r12d
  double v58; // xmm1_8
  double v59; // xmm2_8
  int v60; // esi
  double v61; // xmm4_8
  double v62; // xmm5_8
  double v63; // xmm10_8
  __int64 v64; // r11
  __int64 v65; // rdi
  __int64 v66; // rcx
  int v67; // r8d
  int *v68; // rbp
  __int64 v69; // r9
  int v70; // r8d
  __int64 v71; // r10
  __int64 v72; // rbx
  _BYTE *v73; // r10
  int v74; // r8d
  __int64 v75; // r9
  double v76; // xmm11_8
  double v77; // xmm5_8
  char v78; // r8
  __int64 v79; // rax
  bool v80; // zf
  double v81; // xmm1_8
  __int64 v82; // rdi
  double v83; // xmm5_8
  __int64 v84; // rdx
  double v85; // xmm1_8
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rsi
  double v90; // xmm0_8
  __int64 v91; // rdx
  double v92; // xmm4_8
  __int64 v93; // rdx
  double v94; // xmm5_8
  double v95; // xmm11_8
  double v96; // xmm8_8
  double v97; // xmm5_8
  double v98; // xmm2_8
  double v99; // xmm4_8
  int *v100; // rdx
  __int64 v101; // rax
  double v102; // xmm0_8
  double v103; // xmm1_8
  int v105; // r9d
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __m128i *v108; // rsi
  __m128i *v109; // rax
  const __m128i *v110; // rdx
  __int64 v111; // rcx
  __m128i v112; // xmm1
  __m128i v113; // xmm0
  __int64 v114; // rcx
  __int64 v115; // rax
  double v116; // xmm5_8
  double v117; // xmm0_8
  double v118; // xmm1_8
  __int64 v119; // rdx
  double v120; // xmm0_8
  __int64 v121; // rsi
  double v122; // xmm1_8
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  double v127; // xmm0_8
  double v128; // xmm0_8
  __int64 v129; // xmm1_8
  int v130; // eax
  double v131; // xmm0_8
  double v132; // xmm1_8
  double v133; // xmm6_8
  __m128i *v134; // rax
  const __m128i *v135; // rdx
  __int32 v136; // r9d
  double v137; // xmm0_8
  double v138; // xmm0_8
  __int64 v139; // [rsp+10h] [rbp-A8h]
  double v140; // [rsp+18h] [rbp-A0h]
  __int64 v141; // [rsp+20h] [rbp-98h]
  __int64 v142; // [rsp+20h] [rbp-98h]
  const __m128i *v143; // [rsp+28h] [rbp-90h]
  int v144; // [rsp+30h] [rbp-88h]
  int v145; // [rsp+34h] [rbp-84h]
  __int64 v146; // [rsp+40h] [rbp-78h]
  __int64 v147; // [rsp+48h] [rbp-70h]
  int v148; // [rsp+54h] [rbp-64h]
  int *v150; // [rsp+60h] [rbp-58h]
  int v151; // [rsp+70h] [rbp-48h]
  double v153; // [rsp+78h] [rbp-40h]

  v7 = this;
  v141 = *((_QWORD *)this + 104);
  if ( a5 && *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 )
  {
    v121 = *((_QWORD *)this + 129);
    v122 = *(double *)(v121 + 8LL * *((int *)this + 288));
    *((double *)this + 104) = v122;
    v123 = *((_DWORD *)a2 + 4);
    if ( v123 > 0 )
    {
      v124 = (unsigned int)(v123 - 1);
      v125 = 0;
      v126 = v124 + 1;
      do
      {
        v127 = *(double *)(v121 + 8LL * *(int *)(*((_QWORD *)this + 157) + 4LL * *(int *)(*(_QWORD *)a2 + 4 * v125)))
             * *(double *)(*((_QWORD *)a2 + 1) + 8 * v125);
        ++v125;
        v122 = v122 - v127;
      }
      while ( v126 != v125 );
      *((double *)this + 104) = v122;
    }
    v128 = *((double *)this + 109);
    if ( -v128 <= v122 )
    {
      if ( v122 > v128 )
      {
        *((_DWORD *)this + 289) = -1;
      }
      else if ( *((double *)this + 103) - *((double *)this + 102) <= *((double *)this + 102) - *((double *)this + 101) )
      {
        *((_DWORD *)this + 289) = 1;
        *((double *)this + 104) = -v128;
      }
      else
      {
        *((_DWORD *)this + 289) = -1;
        *((double *)this + 104) = v128;
      }
    }
    else
    {
      *((_DWORD *)this + 289) = 1;
    }
  }
  v8 = *((_DWORD *)this + 77) <= 100;
  v9 = *((double *)this + 116);
  *((_DWORD *)this + 292) = -1;
  v10 = v9;
  if ( v8 )
    v10 = 0.1 * v9;
  v11 = *((_QWORD *)this + 158);
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 68);
  else
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 52LL);
  if ( v13 <= 10 )
  {
    if ( v13 <= 5 )
    {
      if ( !v13 )
        v9 = v10;
    }
    else
    {
      v9 = v9 * 100.0;
    }
  }
  else
  {
    v9 = v9 * 1000.0;
  }
  CoinIndexedVector::clear(a4);
  v14 = *((_QWORD **)a4 + 1);
  v15 = *((_QWORD *)a2 + 1);
  v16 = *(const __m128i **)a4;
  v17 = *((_QWORD *)a3 + 1);
  v18 = (double)*((int *)this + 289);
  v139 = *(_QWORD *)a3;
  v148 = *((_DWORD *)a2 + 4);
  v150 = *(int **)a2;
  if ( v18 <= 0.0 )
  {
    v19 = *((double *)this + 102) - *((double *)this + 101);
    if ( v19 > 1.0e30 )
      goto LABEL_11;
  }
  else
  {
    v19 = *((double *)this + 103) - *((double *)this + 102);
    if ( v19 > 1.0e30 )
    {
LABEL_11:
      v20 = 10.0 * *(double *)(*((_QWORD *)this + 165) + 40LL);
      if ( v20 >= 1.0e30 || v20 > 5.0e29 )
      {
        v19 = 1.0e30;
        v21 = 1;
        v20 = 1.0e30;
      }
      else
      {
        v19 = 1.0e30;
        v21 = v20 == 1.0e30;
      }
      goto LABEL_19;
    }
  }
  v20 = fmin(10.0 * *(double *)(*((_QWORD *)this + 165) + 40LL), v19);
  if ( v20 > 0.5 * v19 )
    v20 = v19;
  v21 = v19 == v20;
  if ( v19 < 1.0 )
    v20 = v20 * 1.1;
LABEL_19:
  v22 = fabs(*((double *)this + 104));
  v23 = v19;
  v140 = fmax(v22 - 100.0 * *((double *)this + 109), 0.99 * v22);
  while ( 1 )
  {
    v24 = *((_QWORD *)v7 + 129);
    v25 = *(double *)(v24 + 8LL * *((int *)v7 + 288));
    *((double *)v7 + 104) = v25;
    if ( v148 <= 0 )
    {
      v27 = 0.0;
      v28 = 0;
    }
    else
    {
      v26 = 0;
      v27 = 0.0;
      v28 = 0;
      while ( 1 )
      {
        v33 = v150[v26];
        v34 = *(double *)(v15 + 8 * v26);
        v35 = *(int *)(*((_QWORD *)v7 + 157) + 4 * v33);
        v36 = v150[v26];
        v37 = *(double *)(v24 + 8 * v35);
        v38 = *((_QWORD *)v7 + 150);
        v39 = v37 * v34;
        v40 = v34 * v18;
        *((double *)v7 + 104) = v25 - v39;
        v41 = *(double *)(v38 + 8 * v35);
        v42 = v41 - v20 * v40;
        v43 = *((double *)v7 + 110);
        if ( v40 > 0.0 )
        {
          v29 = *(double *)(*((_QWORD *)v7 + 123) + 8 * v35);
          v30 = v41 - v29;
          v31 = v29 + v43 >= v42;
        }
        else
        {
          v40 = -v40;
          v44 = *(double *)(*((_QWORD *)v7 + 126) + 8 * v35);
          v30 = v44 - v41;
          v31 = v42 >= v44 - v43;
        }
        if ( v31 )
        {
          if ( -v43 > v30 - v23 * v40 && v40 >= v9 )
            v23 = (v43 + v30) / v40;
          v32 = v28;
          v27 = v27 + v40;
          *(double *)&v14[v28++] = v40;
          *(double *)(v17 + 8 * v32) = v30;
          *(_DWORD *)(v139 + 4 * v32) = v26;
          v16->m128i_i32[v32] = v36;
          *(_BYTE *)(*((_QWORD *)v7 + 33) + v33) |= 0x80u;
        }
        if ( (unsigned int)(v148 - 1) + 1LL == ++v26 )
          break;
        v24 = *((_QWORD *)v7 + 129);
        v25 = *((double *)v7 + 104);
      }
    }
    if ( v19 > v23 && v27 * *((double *)v7 + 113) >= v140 * 1.0001 || v21 )
      break;
    v21 = 1;
    v20 = v19;
  }
  v45 = *((_QWORD *)v7 + 20);
  *((double *)v7 + 100) = v19;
  v144 = v28;
  if ( *(int *)(v45 + 16) > 1 )
    *((_QWORD *)v7 + 104) = v141;
  if ( !v28 || v19 <= v23 )
  {
    v79 = *((int *)v7 + 292);
    if ( (int)v79 >= 0 )
      goto LABEL_89;
    if ( v19 <= 1.0e20 )
    {
      v82 = *((_QWORD *)v7 + 165);
      goto LABEL_165;
    }
    v82 = *((_QWORD *)v7 + 165);
    *((_QWORD *)v7 + 106) = 0x7FEFFFFFFFFFFFFFLL;
    if ( !*(_DWORD *)(v82 + 112) )
      goto LABEL_165;
    if ( v148 <= 0 )
    {
      if ( *((double *)v7 + 101) >= -1.0e20 )
        goto LABEL_165;
      v116 = 1.0e50;
    }
    else
    {
      v115 = 0;
      v116 = 1.0e50;
      do
      {
        v118 = *(double *)(v15 + 8 * v115) * v18;
        v119 = *(int *)(*((_QWORD *)v7 + 157) + 4LL * v150[v115]);
        v120 = *(double *)(*((_QWORD *)v7 + 150) + 8 * v119);
        if ( v118 > 0.0 )
        {
          v117 = v120 - *(double *)(*((_QWORD *)v7 + 123) + 8 * v119);
        }
        else
        {
          v118 = -v118;
          v117 = *(double *)(*((_QWORD *)v7 + 126) + 8 * v119) - v120;
        }
        if ( v117 - v116 * v118 < 0.0 )
          v116 = v117 / v118;
        ++v115;
      }
      while ( (unsigned int)(v148 - 1) + 1LL != v115 );
      if ( *((double *)v7 + 101) >= -1.0e20 )
        goto LABEL_190;
    }
    if ( *((double *)v7 + 103) > 1.0e20 )
    {
      v137 = *((double *)v7 + 102);
      if ( *((double *)v7 + 104) * v137 > 0.0 )
      {
        v138 = fabs(v137);
        if ( v138 < 0.01 && (v138 > v116 || v116 > 1.0e20) )
          v116 = v138;
      }
    }
LABEL_190:
    if ( v116 < 1.0e10 )
      *((double *)v7 + 106) = v116 * v18 + *((double *)v7 + 102);
LABEL_165:
    if ( v19 >= 1.0e20 )
    {
      v19 = *((double *)v7 + 100);
    }
    else
    {
      v129 = *((_QWORD *)v7 + 104);
      v130 = *((_DWORD *)v7 + 288);
      v131 = *((double *)v7 + 102);
      *((_DWORD *)v7 + 292) = -2;
      *((_QWORD *)v7 + 108) = v129;
      *((_DWORD *)v7 + 290) = v130;
      *((_QWORD *)v7 + 99) = 0;
      v132 = *((double *)v7 + 101);
      v133 = *((double *)v7 + 103);
      *((double *)v7 + 106) = v131;
      *((double *)v7 + 105) = v132;
      *((double *)v7 + 107) = v133;
      if ( v18 < 0.0 )
      {
        *((_DWORD *)v7 + 291) = 1;
        v19 = v132 - v131;
        *((double *)v7 + 100) = v132 - v131;
      }
      else
      {
        v19 = v133 - v131;
        *((_DWORD *)v7 + 291) = -1;
        *((double *)v7 + 100) = v19;
      }
    }
    goto LABEL_110;
  }
  v142 = v15;
  v46 = 0.0;
  v153 = v20;
  v147 = 0x4A511B0EC57E649ALL;
  v47 = v9;
  v48 = v7;
  v151 = 1000;
  v145 = -1;
  v143 = v16;
  while ( 1 )
  {
    v49 = *((double *)v48 + 110);
    v50 = 0;
    v51 = v19;
    v52 = -1;
    do
    {
      v53 = *(double *)&v14[v50];
      if ( -v49 > *(double *)(v17 + 8 * v50) - v53 * v51 && v53 >= v9 )
      {
        v52 = v50;
        v51 = (*(double *)(v17 + 8 * v50) + v49) / v53;
      }
      ++v50;
    }
    while ( (unsigned int)(v144 - 1) + 1LL != v50 );
    *((_DWORD *)v48 + 292) = -1;
    v54 = v9;
    v55 = 0;
    v56 = 0.0;
    v57 = v52;
    do
    {
      while ( 1 )
      {
        v58 = *(double *)&v14[v55];
        v59 = *(double *)(v17 + 8 * v55);
        v60 = v55;
        v61 = v59 - v51 * v58;
        if ( v61 <= 0.0 || v57 == (_DWORD)v55 )
          break;
LABEL_52:
        if ( v50 == ++v55 )
          goto LABEL_66;
      }
      v62 = 0.0;
      v63 = *(double *)(v142 + 8LL * *(int *)(v139 + 4 * v55)) * v18;
      v64 = v143->m128i_i32[v55];
      v65 = *(int *)(*((_QWORD *)v48 + 157) + 4 * v64);
      v66 = *((_QWORD *)v48 + 165);
      v67 = *(_DWORD *)(v66 + 144);
      if ( (v67 & 1) != 0 )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 72) + 4LL * (int)v65);
        v69 = *(_QWORD *)(v66 + 88);
        v70 = *v68;
        v71 = 8LL * (*v68 + *(_DWORD *)(*(_QWORD *)(v66 + 64) + 4LL * (int)v65));
        v146 = *v68 + *(_DWORD *)(*(_QWORD *)(v66 + 64) + 4LL * (int)v65);
        v72 = *(_QWORD *)(v66 + 80);
        if ( v63 <= 0.0 )
        {
          v83 = *(double *)(v72 + v71 + 16);
          *v68 = v70 + 1;
          v67 = *(_DWORD *)(v66 + 144);
          *(double *)(v17 + 8 * v55) = v83 - *(double *)(v72 + v71 + 8) + v59;
          v62 = (*(double *)(v69 + v71) - *(double *)(v69 + v71 + 8)) * v63;
        }
        else
        {
          *v68 = v70 - 1;
          v67 = *(_DWORD *)(v66 + 144);
          *(double *)(v17 + 8 * v55) = *(double *)(v72 + 8 * v146) - *(double *)(v72 + v71 - 8) + v59;
          v62 = (*(double *)(v69 + v71) - *(double *)(v69 + v71 - 8)) * v63;
        }
      }
      if ( (v67 & 2) != 0 )
      {
        v73 = (_BYTE *)(v65 + *(_QWORD *)(v66 + 120));
        v74 = (int)(unsigned __int8)*v73 >> 4;
        if ( v74 == 4 )
          v74 = *v73 & 0xF;
        if ( v74 == 1 )
        {
          v78 = 0;
          *(_QWORD *)(v17 + 8 * v55) = 0x7FEFFFFFFFFFFFFFLL;
          if ( v63 <= 0.0 )
            v78 = 32;
        }
        else
        {
          v75 = *(_QWORD *)(v66 + 96);
          v76 = *(double *)(v17 + 8 * v55);
          v77 = *(double *)(*(_QWORD *)(v66 + 128) + 8 * v65);
          if ( v74 )
          {
            v78 = 16;
            *(double *)(v17 + 8 * v55) = *(double *)(*(_QWORD *)(v75 + 984) + 8 * v65) - v77 + v76;
          }
          else
          {
            v78 = 16;
            *(double *)(v17 + 8 * v55) = v77 - *(double *)(*(_QWORD *)(v75 + 1008) + 8 * v65) + v76;
          }
        }
        *v73 = v78 | *v73 & 0xF;
        v62 = fabs(v63) * *(double *)(v66 + 16);
      }
      v46 = v46 + v62;
      *(_BYTE *)(v64 + *((_QWORD *)v48 + 33)) |= 0x80u;
      if ( v58 <= v54 )
      {
        if ( v9 > v58 )
        {
          v81 = *((double *)v48 + 110);
          if ( -v81 > v61 )
            v56 = v56 + -v61 - v81;
        }
        goto LABEL_52;
      }
      ++v55;
      *((_DWORD *)v48 + 292) = v60;
      v54 = v58;
      *((double *)v48 + 100) = v59 / v58;
    }
    while ( v50 != v55 );
LABEL_66:
    if ( 0.1 * v47 > v54 && v47 > 0.000001 && v54 < 0.001 )
    {
      v7 = v48;
      v16 = v143;
      v15 = v142;
      v20 = v153;
      goto LABEL_175;
    }
    v79 = *((int *)v48 + 292);
    if ( (_DWORD)v79 == -1 && v51 > *((double *)v48 + 94) )
      break;
    if ( v46 >= v140 )
    {
      v7 = v48;
      v20 = v153;
      v8 = v56 <= *((double *)v48 + 110);
      v16 = v143;
      v15 = v142;
      if ( !v8 && !*(_DWORD *)(*((_QWORD *)v7 + 165) + 112LL) )
      {
        if ( v9 < 0.0 )
          goto LABEL_175;
        *((_QWORD *)v7 + 104) = 0;
      }
LABEL_73:
      if ( (int)v79 < 0 && v145 >= 0 )
        goto LABEL_175;
      goto LABEL_75;
    }
    v80 = v151-- == 1;
    v145 = *((_DWORD *)v48 + 292);
    v147 = *((_QWORD *)v48 + 100);
    v47 = fmax(v54, v47);
    if ( v80 )
    {
      v7 = v48;
      v16 = v143;
      v15 = v142;
      v20 = v153;
      goto LABEL_73;
    }
  }
  v7 = v48;
  v20 = v153;
  v16 = v143;
  v15 = v142;
  if ( v9 >= 0.0 && v145 < 0 )
  {
LABEL_83:
    v82 = *((_QWORD *)v7 + 165);
    goto LABEL_165;
  }
LABEL_175:
  v79 = v145;
  *((_QWORD *)v7 + 100) = v147;
  *((_DWORD *)v7 + 292) = v145;
LABEL_75:
  if ( (int)v79 < 0 )
    goto LABEL_83;
  v19 = *((double *)v7 + 100);
LABEL_89:
  v84 = v16->m128i_i32[v79];
  *((_DWORD *)v7 + 292) = v84;
  v85 = *(double *)(v15 + 8LL * *(int *)(v139 + 4 * v79));
  v86 = *((_QWORD *)v7 + 157);
  *((double *)v7 + 99) = v85;
  v87 = *(int *)(v86 + 4 * v84);
  v88 = *((_QWORD *)v7 + 150);
  *((_DWORD *)v7 + 290) = v87;
  v89 = v87;
  v90 = *(double *)(v88 + 8 * v87);
  v91 = *((_QWORD *)v7 + 123);
  *((double *)v7 + 106) = v90;
  v92 = *(double *)(v91 + 8 * v87);
  v93 = *((_QWORD *)v7 + 126);
  *((double *)v7 + 105) = v92;
  v94 = *(double *)(v93 + 8 * v87);
  *((double *)v7 + 107) = v94;
  if ( v94 <= v92 )
    v95 = 0.0;
  else
    v95 = 1.0e-12;
  v96 = v85 * v18;
  if ( v85 * v18 <= 0.0 )
    v97 = v94 - v90;
  else
    v97 = v90 - v92;
  v98 = *((double *)v7 + 110);
  v99 = fabs(v85);
  if ( -v98 > v97 - v99 * v95 )
    v95 = fmax(0.0, (v98 * 0.5 + v97) / v99);
  if ( v95 > v19 && !(*((_DWORD *)v7 + 84) & 4 | a5) )
  {
    *((double *)v7 + 100) = v95;
    v19 = v95;
  }
  if ( v19 > v20 && v148 > 0 )
  {
    v100 = v150;
    do
    {
      v101 = *v100++;
      *(_BYTE *)(*((_QWORD *)v7 + 33) + v101) |= 0x80u;
    }
    while ( &v150[v148 - 1 + 1] != v100 );
    v85 = *((double *)v7 + 99);
    v89 = *((int *)v7 + 290);
    v96 = v18 * v85;
    v19 = *((double *)v7 + 100);
    v90 = *((double *)v7 + 106);
  }
  if ( v18 < 0.0 )
  {
    v19 = -v19;
    *((double *)v7 + 100) = v19;
  }
  v102 = v90 - v85 * v19;
  v103 = fabs(v19);
  if ( v96 < 0.0 )
  {
    *((_DWORD *)v7 + 291) = -1;
    if ( v103 > 0.000001 || (*((_BYTE *)v7 + 336) & 4) != 0 )
    {
      ClpNonLinearCost::nearest(*((ClpNonLinearCost **)v7 + 165), v89, v102);
      v19 = *((double *)v7 + 100);
      v89 = *((int *)v7 + 290);
      *((double *)v7 + 107) = v102;
    }
    else
    {
      *((double *)v7 + 107) = v102;
    }
  }
  else
  {
    *((_DWORD *)v7 + 291) = 1;
    if ( v103 > 0.000001 || (*((_BYTE *)v7 + 336) & 4) != 0 )
    {
      ClpNonLinearCost::nearest(*((ClpNonLinearCost **)v7 + 165), v89, v102);
      v89 = *((int *)v7 + 290);
      *((double *)v7 + 105) = v102;
      v19 = *((double *)v7 + 100);
    }
    else
    {
      *((double *)v7 + 105) = v102;
    }
  }
  v82 = *((_QWORD *)v7 + 165);
  *((_QWORD *)v7 + 108) = *(_QWORD *)(*((_QWORD *)v7 + 147) + 8 * v89);
LABEL_110:
  *(double *)(v82 + 40) = (fmax(v19, 1.0e-12) + (double)*((int *)v7 + 77) * *(double *)(v82 + 40))
                        / (double)(*((_DWORD *)v7 + 77) + 1);
  if ( v144 )
  {
    v105 = v144 >> 3;
    if ( v144 >> 3 > 0 )
    {
      v106 = v14;
      v107 = (unsigned int)(v105 - 1);
      do
      {
        *v106 = 0;
        v106[1] = 0;
        v106 += 8;
        *(v106 - 6) = 0;
        *(v106 - 5) = 0;
        *(v106 - 4) = 0;
        *(v106 - 3) = 0;
        *(v106 - 2) = 0;
        *(v106 - 1) = 0;
      }
      while ( v106 != &v14[8 * v107 + 8] );
      v14 += 8 * (int)v107 + 8;
    }
    switch ( v144 & 7 )
    {
      case 0:
        goto LABEL_126;
      case 1:
        goto LABEL_125;
      case 2:
        goto LABEL_124;
      case 3:
        goto LABEL_123;
      case 4:
        goto LABEL_122;
      case 5:
        goto LABEL_121;
      case 6:
        goto LABEL_120;
      case 7:
        v14[6] = 0;
LABEL_120:
        v14[5] = 0;
LABEL_121:
        v14[4] = 0;
LABEL_122:
        v14[3] = 0;
LABEL_123:
        v14[2] = 0;
LABEL_124:
        v14[1] = 0;
LABEL_125:
        *v14 = 0;
LABEL_126:
        v108 = *(__m128i **)a3;
        if ( v16 != *(const __m128i **)a3 )
        {
          if ( v105 > 0 )
          {
            if ( (v108 >= &v16[2] || v16 >= &v108[2]) && (unsigned int)v105 > 1 )
            {
              v109 = *(__m128i **)a3;
              v110 = v16;
              v111 = (unsigned int)(v105 - 1);
              do
              {
                v112 = _mm_loadu_si128(v110);
                v109 += 2;
                v110 += 2;
                v113 = _mm_loadu_si128(v110 - 1);
                v109[-2] = v112;
                v109[-1] = v113;
              }
              while ( v109 != &v108[2 * v111 + 2] );
            }
            else
            {
              v134 = *(__m128i **)a3;
              v135 = v16;
              v111 = (unsigned int)(v105 - 1);
              do
              {
                v136 = v135->m128i_i32[0];
                v134 += 2;
                v135 += 2;
                v134[-2].m128i_i32[0] = v136;
                v134[-2].m128i_i32[1] = v135[-2].m128i_i32[1];
                v134[-2].m128i_i32[2] = v135[-2].m128i_i32[2];
                v134[-2].m128i_i32[3] = v135[-2].m128i_i32[3];
                v134[-1].m128i_i32[0] = v135[-1].m128i_i32[0];
                v134[-1].m128i_i32[1] = v135[-1].m128i_i32[1];
                v134[-1].m128i_i32[2] = v135[-1].m128i_i32[2];
                v134[-1].m128i_i32[3] = v135[-1].m128i_i32[3];
              }
              while ( &v108[2 * v111 + 2] != v134 );
            }
            v114 = 32 * ((int)v111 + 1LL);
            v16 = (const __m128i *)((char *)v16 + v114);
            v108 = (__m128i *)((char *)v108 + v114);
          }
          switch ( v144 & 7 )
          {
            case 0:
              goto LABEL_111;
            case 1:
              goto LABEL_140;
            case 2:
              goto LABEL_139;
            case 3:
              goto LABEL_138;
            case 4:
              goto LABEL_137;
            case 5:
              goto LABEL_136;
            case 6:
              goto LABEL_135;
            case 7:
              v108[1].m128i_i32[2] = v16[1].m128i_i32[2];
LABEL_135:
              v108[1].m128i_i32[1] = v16[1].m128i_i32[1];
LABEL_136:
              v108[1].m128i_i32[0] = v16[1].m128i_i32[0];
LABEL_137:
              v108->m128i_i32[3] = v16->m128i_i32[3];
LABEL_138:
              v108->m128i_i32[2] = v16->m128i_i32[2];
LABEL_139:
              v108->m128i_i32[1] = v16->m128i_i32[1];
LABEL_140:
              v108->m128i_i32[0] = v16->m128i_i32[0];
              break;
          }
        }
        break;
    }
  }
LABEL_111:
  *((_BYTE *)a3 + 28) = 1;
  *((_DWORD *)a3 + 4) = v144;
  ClpNonLinearCost::goBackAll((ClpNonLinearCost *)v82, a3);
  return CoinIndexedVector::clear(a3);
}

