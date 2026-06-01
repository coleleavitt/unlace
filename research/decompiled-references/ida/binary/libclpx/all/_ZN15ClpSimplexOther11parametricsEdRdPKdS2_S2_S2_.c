__int64 __fastcall ClpSimplexOther::parametrics(
        ClpSimplexOther *this,
        double a2,
        double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const double *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edx
  int v18; // ebp
  int v19; // ebp
  CoinIndexedVector *v20; // r12
  CoinIndexedVector *v21; // r12
  int v22; // edx
  int v23; // ecx
  int v24; // r13d
  int v25; // r15d
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  int v31; // r14d
  size_t v32; // r11
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  char *v36; // r12
  char *v37; // r9
  _DWORD *v38; // r13
  char *v39; // rbp
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r13
  int v44; // ecx
  double *v45; // r10
  __int64 v46; // rdi
  __int64 v47; // rax
  char *v48; // r9
  __int64 v49; // rdi
  char *v50; // r11
  char *v51; // r14
  char *v52; // rdi
  __int64 v53; // rax
  void *v54; // r9
  void *v55; // rax
  void *v56; // r11
  double *v57; // r10
  int v58; // r15d
  int v59; // r14d
  __int64 v60; // rsi
  __int64 v61; // rsi
  int v62; // ecx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rsi
  size_t v67; // r13
  const void *v68; // rsi
  __m128d v69; // xmm0
  ClpDualRowDantzig *v70; // r13
  __int64 v71; // rax
  int v72; // eax
  char *v73; // r13
  __int64 v74; // r8
  __int64 v75; // rsi
  char *v76; // rcx
  char *v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // r9
  __int64 v80; // rax
  double v81; // xmm1_8
  double v82; // xmm0_8
  double v83; // xmm1_8
  int v84; // eax
  __int64 v85; // rsi
  char *v86; // r10
  char *v87; // rdi
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rax
  double v92; // xmm1_8
  double v93; // xmm0_8
  double v94; // xmm1_8
  int v95; // r12d
  int v96; // ecx
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  double v101; // xmm0_8
  double *v102; // rsi
  int v103; // eax
  char v104; // bp
  void *v105; // rdi
  unsigned __int64 v106; // rdi
  char *v107; // rax
  void *v108; // rdi
  size_t v109; // rdx
  char *v110; // r14
  void *v111; // rdi
  char *v112; // rsi
  size_t v113; // rdx
  double v114; // xmm4_8
  double v115; // xmm5_8
  __int64 v116; // rdi
  CoinIndexedVector *v117; // r12
  CoinIndexedVector *v118; // r12
  double v119; // xmm0_8
  CoinMessageHandler *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  unsigned int v126; // ebx
  CoinMessageHandler *v128; // rax
  CoinMessageHandler *v129; // rax
  double v130; // xmm0_8
  __int64 v131; // rax
  int v132; // eax
  CoinMessageHandler *v133; // rax
  CoinMessageHandler *v134; // rax
  double v135; // xmm0_8
  __int64 v136; // rax
  CoinMessageHandler *v137; // rax
  CoinMessageHandler *v138; // rax
  __int64 v139; // rax
  int srcb; // [rsp+0h] [rbp-238h]
  int srcc; // [rsp+0h] [rbp-238h]
  int srcd; // [rsp+0h] [rbp-238h]
  void *srce; // [rsp+0h] [rbp-238h]
  double *srca; // [rsp+0h] [rbp-238h]
  void *srcf; // [rsp+0h] [rbp-238h]
  __int64 v147; // [rsp+8h] [rbp-230h]
  size_t v148; // [rsp+8h] [rbp-230h]
  char *dest; // [rsp+18h] [rbp-220h]
  char *v150; // [rsp+20h] [rbp-218h]
  double v151; // [rsp+28h] [rbp-210h]
  size_t v152; // [rsp+30h] [rbp-208h]
  char *v153; // [rsp+38h] [rbp-200h]
  char *v154; // [rsp+40h] [rbp-1F8h]
  _DWORD *v156; // [rsp+50h] [rbp-1E8h]
  void *v157; // [rsp+50h] [rbp-1E8h]
  char *v158; // [rsp+50h] [rbp-1E8h]
  void *v160; // [rsp+58h] [rbp-1E0h]
  __int64 n; // [rsp+60h] [rbp-1D8h]
  const void *na; // [rsp+60h] [rbp-1D8h]
  char *v163; // [rsp+68h] [rbp-1D0h]
  char *v164; // [rsp+68h] [rbp-1D0h]
  _DWORD *v165; // [rsp+70h] [rbp-1C8h]
  double v166; // [rsp+70h] [rbp-1C8h]
  _DWORD *v167; // [rsp+78h] [rbp-1C0h]
  double *v168; // [rsp+78h] [rbp-1C0h]
  int v169; // [rsp+80h] [rbp-1B8h]
  int v170; // [rsp+84h] [rbp-1B4h]
  void *v172; // [rsp+88h] [rbp-1B0h]
  int v173; // [rsp+88h] [rbp-1B0h]
  void *v175; // [rsp+90h] [rbp-1A8h]
  void *v176; // [rsp+90h] [rbp-1A8h]
  int v177; // [rsp+98h] [rbp-1A0h]
  double *v178; // [rsp+98h] [rbp-1A0h]
  void *v179; // [rsp+A0h] [rbp-198h]
  double *v180; // [rsp+A8h] [rbp-190h]
  char v181[80]; // [rsp+B0h] [rbp-188h] BYREF
  char s[8]; // [rsp+100h] [rbp-138h] BYREF
  __m128d v183; // [rsp+170h] [rbp-C8h] BYREF
  double v184; // [rsp+180h] [rbp-B8h]
  char *v185; // [rsp+190h] [rbp-A8h]
  _DWORD *v186; // [rsp+198h] [rbp-A0h]
  char *v187; // [rsp+1A0h] [rbp-98h]
  _DWORD *v188; // [rsp+1A8h] [rbp-90h]
  __int64 v189; // [rsp+1B0h] [rbp-88h]
  __int64 v190; // [rsp+1B8h] [rbp-80h]
  __int64 v191; // [rsp+1C0h] [rbp-78h]
  char *v192; // [rsp+1C8h] [rbp-70h]
  char *v193; // [rsp+1D0h] [rbp-68h]
  __int64 v194; // [rsp+1D8h] [rbp-60h]
  __int64 v195; // [rsp+1E0h] [rbp-58h]
  __int64 v196; // [rsp+1E8h] [rbp-50h]
  int v197; // [rsp+1F0h] [rbp-48h]
  char v198; // [rsp+1F4h] [rbp-44h]

  v14 = *((_DWORD *)this + 327);
  *((_DWORD *)this + 325) = -1;
  v15 = *((_QWORD *)this + 158);
  v151 = a2;
  *((_DWORD *)this + 327) = 102;
  v170 = v14;
  v16 = *(_QWORD *)(v15 + 8);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 64);
    v18 = *(_DWORD *)(v16 + 864);
  }
  else
  {
    v18 = 0;
    v17 = *(_DWORD *)(*(_QWORD *)(v15 + 16) + 48LL);
  }
  v19 = v17 + *((_DWORD *)this + 26) + v18;
  v20 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v20, v19);
  *((_QWORD *)this + 136) = v20;
  v21 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v21, v19);
  *((_QWORD *)this + 137) = v21;
  ClpSimplex::saveData((ClpSimplex *)v181);
  v22 = *((_DWORD *)this + 26);
  v23 = v22 + *((_DWORD *)this + 27);
  v24 = 4 * v23;
  v169 = v23;
  v25 = 4 * v23 + 3 * v23 + 2 + 2 * v22 + 1;
  v26 = v23 + v25;
  if ( v26 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v27 = 8 * v26;
  v153 = (char *)operator new[](v27);
  v28 = operator new[](v27);
  v29 = *((int *)this + 26);
  v154 = (char *)v28;
  v30 = v28;
  v198 = 1;
  v31 = v29;
  v147 = 8 * v29;
  v32 = 8LL * v169;
  v33 = 16LL * v169;
  v34 = 8 * (2 * (int)v29 + (__int64)v24);
  v35 = 4LL * v169 + 4;
  v36 = &v153[v32];
  v37 = &v153[v34];
  dest = &v153[v33];
  v38 = (_DWORD *)(v30 + v34);
  v150 = (char *)(v30 + v33);
  v163 = v37;
  v195 = v30 + v33 + v33;
  v39 = (char *)(v32 + v30);
  v165 = v38;
  v40 = (__int64)&v37[v35 + 8];
  v41 = (__int64)v38 + v35 + 8;
  v42 = 4LL * v169;
  v156 = v37 + 8;
  v186 = v37 + 8;
  v191 = v40;
  v192 = &v153[v33 + v33];
  v194 = v41;
  v190 = v41 + v42;
  v196 = v147 + v195;
  v193 = &v192[v147];
  v152 = v32;
  v167 = v38 + 2;
  v188 = v38 + 2;
  v189 = v40 + v42;
  v185 = &v153[v32];
  v187 = v39;
  v197 = v25 - v169;
  memset(&v153[v32], 0, v32);
  memset(v39, 0, 8LL * v169);
  v43 = *((int *)this + 27);
  v44 = *((_DWORD *)this + 27);
  n = 8 * v43;
  if ( a4 )
  {
    memcpy(v36, a4, 8 * v43);
    v44 = v43;
  }
  if ( a5 )
  {
    srcb = v44;
    memcpy(v39, a5, n);
    v44 = srcb;
  }
  if ( a6 )
  {
    srcc = v44;
    memcpy(&v36[n], a6, v147);
    v44 = srcc;
  }
  if ( a7 )
  {
    srcd = v44;
    memcpy(&v39[n], a7, v147);
    v44 = srcd;
  }
  v45 = *((double **)this + 18);
  v160 = *((void **)this + 19);
  if ( v31 > 0 )
  {
    a8 = -1.0e30;
    v46 = *((_QWORD *)this + 19);
    v47 = 0;
    do
    {
      a9 = *(double *)(v46 + 8 * v47);
      if ( v45[v47] < -1.0e30 )
        *(_QWORD *)&v36[8 * v44 + 8 * (int)v47] = 0;
      if ( a9 > 1.0e30 )
        *(_QWORD *)&v39[8 * v44 + 8 * (int)v47] = 0;
      ++v47;
    }
    while ( (unsigned int)(v31 - 1) + 1LL != v47 );
  }
  v48 = *((char **)this + 22);
  v49 = 8LL * v25;
  v50 = *((char **)this + 23);
  v51 = &v154[v49];
  v52 = &v153[v49];
  if ( v44 <= 0 )
  {
    v178 = v45;
    v176 = *((void **)this + 23);
    v173 = v44;
    srcf = *((void **)this + 22);
    memcpy(v52, v36, v152);
    memcpy(v51, v39, v152);
    v58 = 0;
    v59 = 0;
    v54 = srcf;
    v62 = v173;
    v56 = v176;
    v57 = v178;
  }
  else
  {
    a8 = -1.0e30;
    v53 = 0;
    do
    {
      a9 = *(double *)&v50[v53];
      if ( *(double *)&v48[v53] < -1.0e30 )
        *(_QWORD *)&v36[v53] = 0;
      if ( a9 > 1.0e30 )
        *(_QWORD *)&v39[v53] = 0;
      v53 += 8;
    }
    while ( 8 * ((unsigned int)(v44 - 1) + 1LL) != v53 );
    v180 = v45;
    v179 = v50;
    v177 = v44;
    v175 = v48;
    v172 = (void *)((unsigned int)(v44 - 1) + 1LL);
    memcpy(v52, v36, v152);
    memcpy(v51, v39, v152);
    v54 = v175;
    v55 = nullptr;
    v56 = v179;
    v57 = v180;
    v58 = 0;
    v59 = 0;
    do
    {
      if ( *(double *)&v36[8 * (_QWORD)v55] != 0.0 )
      {
        v60 = v59++;
        v156[v60] = (_DWORD)v55;
      }
      a13 = 0.0;
      if ( *(double *)&v39[8 * (_QWORD)v55] != 0.0 )
      {
        v61 = v58++;
        v167[v61] = (_DWORD)v55;
      }
      v55 = (char *)v55 + 1;
    }
    while ( v172 != v55 );
    v62 = v177;
  }
  *(_DWORD *)v163 = v59;
  *v165 = v58;
  if ( v169 > v62 )
  {
    v63 = v43 + 1;
    v64 = v43 + 1 + (unsigned int)(v169 - v62 - 1);
    while ( 1 )
    {
      if ( *(double *)&v36[8 * v43] != 0.0 )
      {
        v65 = v59++;
        v156[v65] = v43;
      }
      a10 = 0.0;
      if ( *(double *)&v39[8 * v43] != 0.0 )
      {
        v66 = v58++;
        v167[v66] = v43;
      }
      v43 = v63;
      if ( v64 == v63 )
        break;
      ++v63;
    }
  }
  v67 = n;
  v157 = v54;
  v168 = v57;
  srce = v56;
  *((_DWORD *)v163 + 1) = v59;
  v165[1] = v58;
  memcpy(dest, v54, n);
  na = srce;
  memcpy(v150, srce, v67);
  srca = v168;
  memcpy(&dest[v67], v168, v147);
  memcpy(&v150[v67], v160, v147);
  v68 = v157;
  v158 = &dest[v152];
  memcpy(&dest[v152], v68, v67);
  memcpy(&dest[v152 + v67], v168, v147);
  memcpy(&v150[v152], na, v67);
  memcpy(&v150[v152 + v67], v160, v147);
  v183.m128d_f64[0] = a2;
  v69.m128d_f64[0] = *a3;
  v183.m128d_f64[1] = v69.m128d_f64[0];
  v184 = v69.m128d_f64[0];
  ClpSimplexOther::computeRhsEtc(this, &v183);
  v148 = *((_QWORD *)this + 155);
  v70 = (ClpDualRowDantzig *)operator new(0x18u);
  ClpDualRowDantzig::ClpDualRowDantzig(v70);
  v71 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 155) = v70;
  *((_QWORD *)v70 + 1) = this;
  *(_DWORD *)(v71 + 16) = 2;
  v72 = ClpSimplexDual::startupSolve(this, 0, nullptr, 0);
  *(_DWORD *)(*((_QWORD *)this + 20) + 16LL) = 1;
  if ( v72 )
  {
    if ( *((_DWORD *)this + 80) != 2 )
      goto LABEL_78;
    v73 = v154;
    v104 = 0;
    v164 = v153;
  }
  else
  {
    v166 = *((double *)this + 98);
    v69.m128d_f64[0] = fmax(v166, 1.0e15);
    v164 = *((char **)this + 123);
    *((_QWORD *)this + 98) = *(_QWORD *)&v69.m128d_f64[0];
    memcpy(v153, v164, v152);
    *((_QWORD *)this + 123) = v153;
    v73 = *((char **)this + 126);
    memcpy(v154, v73, v152);
    v74 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 126) = v154;
    if ( v74 )
    {
      v75 = *((int *)this + 27);
      v76 = &v36[v152];
      v77 = &v39[v152];
      if ( (int)v75 > 0 )
      {
        v78 = *((_QWORD *)this + 31);
        a10 = -1.0e20;
        a9 = 1.0e20;
        v79 = 8LL * (unsigned int)(v75 - 1) + 8;
        v80 = 0;
        do
        {
          while ( 1 )
          {
            v81 = *(double *)&v76[v80];
            v82 = *(double *)(v78 + v80);
            if ( v81 > -1.0e20 )
              *(double *)&v76[v80] = v81 * v82;
            v83 = *(double *)&v77[v80];
            if ( v83 >= 1.0e20 )
              break;
            *(double *)&v77[v80] = v83 * v82;
            a8 = *(double *)&v36[v80] * v82;
            v69.m128d_f64[0] = v82 * *(double *)&v39[v80];
            *(double *)&v36[v80] = a8;
            *(double *)&v39[v80] = v69.m128d_f64[0];
            v80 += 8;
            if ( v80 == v79 )
              goto LABEL_49;
          }
          a8 = *(double *)&v36[v80] * v82;
          v69.m128d_f64[0] = v82 * *(double *)&v39[v80];
          *(double *)&v36[v80] = a8;
          *(double *)&v39[v80] = v69.m128d_f64[0];
          v80 += 8;
        }
        while ( v79 != v80 );
      }
LABEL_49:
      v84 = *((_DWORD *)this + 26);
      v85 = 8 * v75;
      if ( v84 > 0 )
      {
        v86 = &v76[v85];
        v87 = &v77[v85];
        a10 = -1.0e20;
        v88 = &v36[v85];
        a9 = 1.0e20;
        v89 = &v39[v85];
        v90 = 8LL * (unsigned int)(v84 - 1) + 8;
        v91 = 0;
        do
        {
          while ( 1 )
          {
            v92 = *(double *)&v86[v91];
            v93 = *(double *)(v74 + v91);
            if ( v92 > -1.0e20 )
              *(double *)&v86[v91] = v92 * v93;
            v94 = *(double *)&v87[v91];
            if ( v94 >= 1.0e20 )
              break;
            *(double *)&v87[v91] = v94 * v93;
            a8 = *(double *)&v88[v91] * v93;
            v69.m128d_f64[0] = v93 * *(double *)&v89[v91];
            *(double *)&v88[v91] = a8;
            *(double *)&v89[v91] = v69.m128d_f64[0];
            v91 += 8;
            if ( v91 == v90 )
              goto LABEL_55;
          }
          a8 = *(double *)&v88[v91] * v93;
          v69.m128d_f64[0] = v93 * *(double *)&v89[v91];
          *(double *)&v88[v91] = a8;
          *(double *)&v89[v91] = v69.m128d_f64[0];
          v91 += 8;
        }
        while ( v90 != v91 );
      }
    }
LABEL_55:
    *(_QWORD *)s = 0;
    ClpSimplexDual::gutsOfDual(this, 0, (double **)s, -1, (ClpDataSave *)v181);
    if ( *((_DWORD *)this + 308) )
    {
      v69.m128d_f64[0] = *((double *)this + 112);
      a8 = 0.0001;
      if ( v69.m128d_f64[0] < 0.0001 )
      {
        a13 = 0.0;
        v95 = 100;
        srca = nullptr;
        while ( 1 )
        {
          if ( v69.m128d_f64[0] == 0.0 )
            goto LABEL_68;
          if ( !--v95 )
            goto LABEL_68;
          v96 = *((_DWORD *)this + 27);
          *((_DWORD *)this + 80) = -1;
          if ( v169 > v96 )
            break;
LABEL_67:
          ClpSimplexDual::gutsOfDual(this, 1, (double **)s, -1, (ClpDataSave *)v181);
          v69.m128d_f64[0] = *((double *)this + 112);
        }
        v97 = *((_QWORD *)this + 150);
        v98 = *((_QWORD *)this + 123);
        v99 = 8LL * v96;
        v100 = 8 * (v96 + (unsigned __int64)(unsigned int)(v169 - v96 - 1) + 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v101 = *(double *)(v97 + v99);
            a9 = *(double *)(v98 + v99) - 0.000000001;
            if ( a9 <= v101 )
              break;
            a8 = *(double *)&dest[v99] + v101 - *(double *)(v98 + v99);
            *(double *)&dest[v99] = a8;
            *(double *)(v98 + v99) = v101;
LABEL_63:
            v99 += 8;
            if ( v99 == v100 )
              goto LABEL_67;
          }
          v102 = (double *)(v99 + *((_QWORD *)this + 126));
          a8 = *v102;
          a9 = *v102 + 0.000000001;
          if ( v101 <= a9 )
            goto LABEL_63;
          a13 = v101 - a8;
          a8 = *(double *)&v150[v99] + v101 - a8;
          *(double *)&v150[v99] = a8;
          v99 += 8;
          *v102 = v101;
          if ( v99 == v100 )
            goto LABEL_67;
        }
      }
    }
LABEL_68:
    v103 = *((_DWORD *)this + 80);
    if ( !v103 )
    {
      if ( v58 | v59 )
      {
        v128 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       87,
                                       (ClpSimplexOther *)((char *)this + 416));
        v129 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v128);
        v130 = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
        v131 = CoinMessageHandler::operator<<(v129);
        CoinMessageHandler::operator<<(v131, 0, v130);
        v69 = (__m128d)*(unsigned __int64 *)a3;
        while ( 1 )
        {
          v183 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v151, v69);
          v132 = ClpSimplexOther::parametricsLoop(this);
          v69.m128d_f64[0] = v183.m128d_f64[1];
          v151 = v183.m128d_f64[0];
          *a3 = v183.m128d_f64[1];
          if ( v132 )
            break;
          v133 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 43),
                                         87,
                                         (ClpSimplexOther *)((char *)this + 416));
          v134 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v133);
          v135 = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
          v136 = CoinMessageHandler::operator<<(v134);
          CoinMessageHandler::operator<<(v136, 0, v135);
          v69 = (__m128d)*(unsigned __int64 *)a3;
          v103 = *((_DWORD *)this + 80);
          a8 = *a3 - *((double *)this + 110);
          if ( v151 >= a8 )
            goto LABEL_103;
          if ( v103 == 2 )
          {
            v104 = 1;
            *((double *)this + 98) = v166;
            goto LABEL_71;
          }
        }
        if ( v132 == -1 )
          abort();
        v103 = *((_DWORD *)this + 80);
        if ( v103 != 1 )
        {
LABEL_103:
          *((double *)this + 98) = v166;
          goto LABEL_69;
        }
        v137 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       87,
                                       (ClpSimplexOther *)((char *)this + 416));
        v138 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v137);
        v69.m128d_f64[0] = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
        v139 = CoinMessageHandler::operator<<(v138);
        CoinMessageHandler::operator<<(v139, 0, v69.m128d_f64[0]);
        a13 = v166;
        *((_DWORD *)this + 80) = 0;
        *((double *)this + 98) = v166;
      }
      else
      {
        a10 = v166;
        *((double *)this + 98) = v166;
      }
LABEL_75:
      v153 = *((char **)this + 123);
      if ( v153 )
      {
        *((_QWORD *)this + 123) = v164;
        v107 = *((char **)this + 126);
        *((_QWORD *)this + 126) = v73;
        v154 = v107;
        goto LABEL_78;
      }
      goto LABEL_108;
    }
LABEL_69:
    if ( v103 != 2 )
      goto LABEL_75;
    v104 = 1;
  }
LABEL_71:
  v105 = *((void **)this + 27);
  if ( v105 )
    operator delete[](v105);
  v106 = *((int *)this + 27);
  if ( v106 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 27) = operator new[](8 * v106);
  if ( v104 )
    goto LABEL_75;
LABEL_108:
  v154 = v73;
  v153 = v164;
LABEL_78:
  ClpSimplexDual::finishSolve(this, 0);
  v108 = *((void **)this + 22);
  v109 = 8LL * *((int *)this + 27);
  if ( *((_DWORD *)this + 64) )
  {
    memcpy(v108, v158, v109);
    memcpy(*((void **)this + 18), &v158[8 * *((int *)this + 27)], 8LL * *((int *)this + 26));
    v110 = &v150[v152];
    v111 = *((void **)this + 23);
    v112 = &v150[v152];
    v113 = 8LL * *((int *)this + 27);
  }
  else
  {
    memcpy(v108, dest, v109);
    v110 = v150;
    memcpy(*((void **)this + 23), v150, 8LL * *((int *)this + 27));
    v111 = *((void **)this + 18);
    v112 = &dest[8 * *((int *)this + 27)];
    v113 = 8LL * *((int *)this + 26);
  }
  memcpy(v111, v112, v113);
  memcpy(*((void **)this + 19), &v110[8 * *((int *)this + 27)], 8LL * *((int *)this + 26));
  operator delete[](v153);
  if ( v154 )
    operator delete[](v154);
  if ( v148 )
  {
    v116 = *((_QWORD *)this + 155);
    if ( v116 )
      (*(void (__fastcall **)(__int64, double, double, double, double, double, double, double))(*(_QWORD *)v116 + 80LL))(
        v116,
        v69.m128d_f64[0],
        a8,
        a9,
        a10,
        v114,
        v115,
        a13);
    *((_QWORD *)this + 155) = v148;
  }
  ClpDataSave::ClpDataSave((ClpDataSave *)s, (const ClpDataSave *)v181);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)s);
  v117 = *((CoinIndexedVector **)this + 136);
  *((_DWORD *)this + 327) = v170;
  if ( v117 )
  {
    CoinIndexedVector::~CoinIndexedVector(v117);
    operator delete(v117);
  }
  v118 = *((CoinIndexedVector **)this + 137);
  *((_QWORD *)this + 136) = 0;
  if ( v118 )
  {
    CoinIndexedVector::~CoinIndexedVector(v118);
    operator delete(v118);
  }
  *((_QWORD *)this + 137) = 0;
  v119 = *a3;
  sprintf(s, "Ending theta %g\n", *a3);
  v120 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 92,
                                 (ClpSimplexOther *)((char *)this + 416));
  v125 = CoinMessageHandler::operator<<(v120, (__int64)s, v121, v122, v123, v124, (__int64)srca);
  CoinMessageHandler::operator<<(v125, 0, v119);
  v126 = *((_DWORD *)this + 80);
  ClpDataSave::~ClpDataSave((ClpDataSave *)v181);
  return v126;
}

