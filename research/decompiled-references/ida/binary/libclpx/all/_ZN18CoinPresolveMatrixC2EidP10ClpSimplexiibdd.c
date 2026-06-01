// Alternative name is '_ZN18CoinPresolveMatrixC1EidP10ClpSimplexiibdd'
void __fastcall CoinPresolveMatrix::CoinPresolveMatrix(
        CoinPresolveMatrix *this,
        int a2,
        double a3,
        __int64 **a4,
        int a5,
        int a6,
        char a7,
        double a8,
        double a9,
        double a10)
{
  unsigned __int64 v10; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  void *v16; // rax
  size_t v17; // rdx
  void *v18; // rax
  size_t v19; // rdx
  __int64 *v20; // rdi
  __int64 (*v21)(void); // rax
  const CoinPackedMatrix *v22; // r12
  int *v23; // rbp
  __int64 v24; // r15
  const void *v25; // rsi
  void *v26; // rdi
  int v27; // esi
  __int64 v28; // r14
  int *v29; // rdi
  _DWORD *v30; // rsi
  __int64 v31; // r13
  int v32; // ebp
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // r9
  char *v37; // r8
  __int64 v38; // rdx
  double v39; // xmm0_8
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  CoinPackedMatrix *v43; // r15
  __m128i v44; // xmm0
  unsigned __int64 v45; // rdi
  void *v46; // r14
  void *v47; // r13
  void *v48; // r12
  void *v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  void *v52; // rax
  __int64 v53; // rdx
  void *v54; // rax
  __int64 v55; // r14
  _DWORD *v56; // rcx
  int v57; // eax
  void *v58; // rax
  __int64 v59; // rdx
  int v60; // r12d
  _DWORD *v61; // rax
  __int64 v62; // r14
  __int64 v63; // r11
  int v64; // edi
  int v65; // esi
  __int64 v66; // rbp
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // r8d
  int v71; // edx
  int v72; // edx
  __int64 *v73; // rcx
  int v74; // esi
  __int64 *v75; // rdi
  unsigned int v76; // r8d
  __int64 v77; // rax
  unsigned int v78; // edx
  __int64 v79; // rax
  __int64 *v80; // rdx
  __int64 *v81; // rax
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 *v84; // rdi
  _QWORD *v85; // rax
  double v86; // xmm7_8
  __int64 v87; // rax
  __int64 v88; // rsi
  int v89; // edx
  __int64 v90; // rax
  unsigned __int64 v91; // rdi
  __int64 *v92; // rax
  int v93; // esi
  __int64 *v94; // r8
  __int64 *v95; // rcx
  __int64 *v96; // rdx
  __int64 v97; // xmm0_8
  __int64 v98; // rdx
  int v99; // ecx
  __int64 v100; // r8
  __int64 v101; // r10
  __int64 v102; // r9
  int v103; // esi
  int v104; // eax
  bool v105; // bp
  __int64 v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  bool i; // zf
  __int64 v110; // rsi
  unsigned __int64 v111; // rdi
  __int64 *v112; // rax
  int v113; // esi
  __int64 *v114; // r9
  __int64 *v115; // rcx
  __int64 *v116; // rdx
  __int64 v117; // xmm0_8
  __int64 v118; // rdx
  unsigned __int64 v119; // rax
  __int64 v120; // r9
  __int64 *v121; // rsi
  int v122; // r8d
  unsigned int v123; // edi
  __int64 v124; // rdx
  unsigned int v125; // ecx
  __int64 v126; // rdx
  __int64 *v127; // rcx
  _BYTE *v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // rdx
  _BYTE *v131; // rdx
  double v132; // xmm4_8
  double v133; // xmm5_8
  double v134; // xmm4_8
  double v135; // xmm5_8
  int v136; // r11d
  int v137; // r8d
  unsigned __int64 v138; // r9
  __int64 v139; // rax
  int v140; // edi
  int v141; // r10d
  double *v142; // rcx
  unsigned int v143; // edx
  unsigned int v144; // r8d
  __int64 v145; // rax
  unsigned int v146; // r8d
  __int128 v147; // xmm0
  double *v148; // rax
  int v149; // edi
  __int64 *v150; // rdx
  __int64 *v151; // rax
  char v152; // r9
  __int64 *v153; // rcx
  unsigned __int64 v154; // rdx
  char v155; // r10
  double v156; // [rsp+0h] [rbp-68h]
  __int64 v158; // [rsp+10h] [rbp-58h]
  char *src; // [rsp+18h] [rbp-50h]
  void *srca; // [rsp+18h] [rbp-50h]
  int v161; // [rsp+20h] [rbp-48h]

  v10 = a5;
  v156 = a8;
  CoinPrePostsolveMatrix::CoinPrePostsolveMatrix(this, (const ClpSimplex *)a4, a2, a5, a6, a9);
  v12 = a2 + 1;
  if ( v12 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 32) = operator new[](8 * v12);
  v13 = (int)v10 + 1;
  if ( v13 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 33) = operator new[](8 * v13);
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 39) = operator new[](a2);
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 43) = 0xFFFFFFFFLL;
  *((_BYTE *)this + 321) = 0;
  *((_QWORD *)this + 41) = 0;
  *((_QWORD *)this + 42) = 0;
  if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v14 = 4LL * a2;
  *((_QWORD *)this + 46) = operator new[](v14);
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = operator new[](v14);
  *((_DWORD *)this + 98) = 0;
  if ( v10 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v158 = 4 * v10;
  *((_QWORD *)this + 51) = operator new[](4 * v10);
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = operator new[](4 * v10);
  *((_QWORD *)this + 54) = 0;
  v15 = *((int *)a4 + 26);
  v161 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 1) = v15;
  v16 = (void *)operator new[](v15);
  v17 = *((int *)this + 1);
  *((_QWORD *)this + 50) = v16;
  memset(v16, 0, v17);
  v18 = (void *)operator new[](*(int *)this);
  v19 = *(int *)this;
  *((_QWORD *)this + 45) = v18;
  memset(v18, 0, v19);
  v20 = a4[24];
  if ( !v20 )
    BUG();
  v21 = *(__int64 (**)(void))*v20;
  if ( (char *)v21 == (char *)ClpPackedMatrix::getPackedMatrix )
    v22 = (const CoinPackedMatrix *)v20[11];
  else
    v22 = (const CoinPackedMatrix *)v21();
  v23 = *((int **)v22 + 6);
  v24 = *((_QWORD *)v22 + 5);
  v25 = *((const void **)v22 + 7);
  v26 = *((void **)this + 6);
  src = *((char **)v22 + 4);
  **((_DWORD **)this + 5) = 0;
  memcpy(v26, v25, 4LL * *(int *)this);
  v27 = *(_DWORD *)this;
  if ( *(double *)a4 >= 0.0 )
  {
    if ( v27 > 0 )
      goto LABEL_10;
LABEL_136:
    v32 = 0;
    goto LABEL_17;
  }
  if ( v27 > 0 )
  {
    v138 = *((_QWORD *)this + 9);
    v139 = (v138 >> 3) & 1;
    v140 = 0;
    if ( v27 - 1 < 2 - (unsigned int)((_DWORD)v139 == 0) )
      goto LABEL_133;
    if ( (_DWORD)v139 )
    {
      v140 = 1;
      *(double *)v138 = -*(double *)v138;
    }
    a8 = -0.0;
    v141 = v27 - v139;
    v142 = (double *)(v138 + 8 * v139);
    v143 = 0;
    v144 = v27 - v139;
    v145 = 0;
    v146 = v144 >> 1;
    do
    {
      ++v143;
      *(double *)&v147 = -v142[v145];
      *((double *)&v147 + 1) = -v142[v145 + 1];
      *(_OWORD *)&v142[v145] = v147;
      v145 += 2;
    }
    while ( v146 > v143 );
    v140 += v141 & 0xFFFFFFFE;
    if ( v141 != (v141 & 0xFFFFFFFE) )
    {
LABEL_133:
      a8 = -0.0;
      v148 = (double *)(v138 + 8LL * v140);
      v149 = v140 + 1;
      *v148 = -*v148;
      if ( v27 > v149 )
        *(double *)(v138 + 8LL * v149) = -*(double *)(v138 + 8LL * v149);
    }
  }
  *((_QWORD *)this + 19) = 0x3FF0000000000000LL;
  if ( v27 <= 0 )
    goto LABEL_136;
LABEL_10:
  v28 = *((_QWORD *)this + 5);
  v29 = v23;
  v30 = *((_DWORD **)this + 6);
  v31 = 1;
  a10 = NAN;
  v32 = 0;
  a9 = 1.0e-12;
  do
  {
    v33 = *v29;
    if ( (int)v33 < (int)v33 + *v30 )
    {
      v34 = *((_QWORD *)this + 7);
      v35 = (int)v33 + 1;
      v36 = v24 + 4 * v33 - 4LL * (int)v35;
      v37 = &src[8 * v33 - 8LL * (int)v35];
      do
      {
        v38 = v32;
        while ( 1 )
        {
          v39 = *(double *)&v37[8 * v35];
          *(_DWORD *)(v34 + 4LL * v32) = *(_DWORD *)(v36 + 4 * v35);
          a8 = fabs(v39);
          if ( a8 > 1.0e-12 )
            break;
          v136 = v35++;
          if ( *v29 + *v30 <= v136 )
            goto LABEL_16;
        }
        ++v32;
        *(double *)(*((_QWORD *)this + 8) + 8 * v38) = v39;
        v40 = v35++;
      }
      while ( v40 < *v29 + *v30 );
    }
LABEL_16:
    v41 = v32 - *(_DWORD *)(v28 + 4 * v31 - 4);
    *(_DWORD *)(v28 + 4 * v31) = v32;
    ++v29;
    *v30++ = v41;
    v42 = v31++;
  }
  while ( *(_DWORD *)this > v42 );
LABEL_17:
  v43 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v43);
  CoinPackedMatrix::setExtraGap(v43, 0.0);
  v44.m128i_i64[0] = 0;
  CoinPackedMatrix::setExtraMajor(v43, 0.0);
  CoinPackedMatrix::reverseOrderedCopyOf(v43, v22);
  ClpModel::createEmptyMatrix((ClpModel *)a4);
  v45 = *((int *)this + 6);
  v46 = *((void **)v43 + 4);
  v47 = *((void **)v43 + 5);
  v48 = *((void **)v43 + 6);
  srca = *((void **)v43 + 7);
  if ( v45 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v49 = (void *)operator new[](8 * v45);
  v50 = *((int *)this + 2);
  *((_QWORD *)this + 37) = v49;
  memcpy(v49, v46, 8 * v50);
  *((_QWORD *)v43 + 4) = 0;
  operator delete[](v46);
  v51 = *((int *)this + 6);
  if ( v51 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v52 = (void *)operator new[](4 * v51);
  v53 = *((int *)this + 2);
  *((_QWORD *)this + 38) = v52;
  memcpy(v52, v47, 4 * v53);
  *((_QWORD *)v43 + 5) = 0;
  operator delete[](v47);
  v54 = (void *)operator new[](v158 + 4);
  v55 = *((int *)this + 1);
  *((_QWORD *)this + 35) = v54;
  v56 = memcpy(v54, v48, 4 * v55);
  v57 = *((_DWORD *)this + 2);
  *((_QWORD *)v43 + 6) = 0;
  v56[v55] = v57;
  operator delete[](v48);
  v58 = (void *)operator new[](v158 + 4);
  v59 = *((int *)this + 1);
  *((_QWORD *)this + 36) = v58;
  v60 = v59;
  v61 = memcpy(v58, srca, 4 * v59);
  if ( *((_DWORD *)this + 2) > v32 )
  {
    *((_DWORD *)this + 2) = v32;
    if ( v60 > 0 )
    {
      v62 = *((_QWORD *)this + 35);
      a10 = NAN;
      a9 = 1.0e-12;
      v63 = 1;
      v64 = 0;
      v65 = 0;
      do
      {
        if ( v64 < v64 + *v61 )
        {
          v66 = *((_QWORD *)this + 38);
          v67 = *((_QWORD *)this + 37);
          v68 = v64 + 1;
          v69 = v67 + 8LL * v64 - 8 * v68;
          do
          {
            while ( 1 )
            {
              v44.m128i_i64[0] = *(_QWORD *)(v69 + 8 * v68);
              *(_DWORD *)(v66 + 4LL * v65) = *(_DWORD *)(v66 + 4LL * v64 - 4LL * (v64 + 1) + 4 * v68);
              a8 = fabs(*(double *)v44.m128i_i64);
              if ( a8 <= 1.0e-12 )
                break;
              *(_QWORD *)(v67 + 8LL * v65) = v44.m128i_i64[0];
              v70 = v68;
              ++v65;
              ++v68;
              if ( v70 >= v64 + *v61 )
                goto LABEL_26;
            }
            v137 = v68++;
          }
          while ( v64 + *v61 > v137 );
        }
LABEL_26:
        v71 = v65 - *(_DWORD *)(v62 + 4 * v63 - 4);
        v64 = *(_DWORD *)(v62 + 4 * v63);
        ++v61;
        *(_DWORD *)(v62 + 4 * v63) = v65;
        *(v61 - 1) = v71;
        v72 = v63++;
      }
      while ( *((_DWORD *)this + 1) > v72 );
    }
  }
  (*(void (__fastcall **)(CoinPackedMatrix *, double, double, double, double))(*(_QWORD *)v43 + 8LL))(
    v43,
    *(double *)v44.m128i_i64,
    a8,
    a9,
    a10);
  v73 = a4[34];
  if ( v73 )
  {
    v74 = *(_DWORD *)this;
    v75 = *((__int64 **)this + 39);
    if ( *(_DWORD *)this && v75 != v73 )
    {
      v76 = v74 >> 3;
      if ( v74 >> 3 > 0 )
      {
        if ( (v73 >= v75 + 2 || v75 >= v73 + 2) && v76 > 1 )
        {
          v77 = 0;
          v78 = 0;
          do
          {
            v44 = _mm_loadu_si128((const __m128i *)&v73[v77]);
            ++v78;
            *(__m128i *)&v75[v77] = v44;
            v77 += 2;
          }
          while ( v78 < v76 >> 1 );
          v79 = v76 & 0xFFFFFFFE;
          v80 = &v73[v79];
          v81 = &v75[v79];
          if ( v76 != (v76 & 0xFFFFFFFE) )
          {
            *(_BYTE *)v81 = *(_BYTE *)v80;
            *((_BYTE *)v81 + 1) = *((_BYTE *)v80 + 1);
            *((_BYTE *)v81 + 2) = *((_BYTE *)v80 + 2);
            *((_BYTE *)v81 + 3) = *((_BYTE *)v80 + 3);
            *((_BYTE *)v81 + 4) = *((_BYTE *)v80 + 4);
            *((_BYTE *)v81 + 5) = *((_BYTE *)v80 + 5);
            *((_BYTE *)v81 + 6) = *((_BYTE *)v80 + 6);
            *((_BYTE *)v81 + 7) = *((_BYTE *)v80 + 7);
          }
          LODWORD(v82) = v76 - 1;
        }
        else
        {
          v150 = a4[34];
          v82 = v76 - 1;
          v151 = *((__int64 **)this + 39);
          do
          {
            v152 = *(_BYTE *)v150;
            ++v151;
            ++v150;
            *((_BYTE *)v151 - 8) = v152;
            *((_BYTE *)v151 - 7) = *((_BYTE *)v150 - 7);
            *((_BYTE *)v151 - 6) = *((_BYTE *)v150 - 6);
            *((_BYTE *)v151 - 5) = *((_BYTE *)v150 - 5);
            *((_BYTE *)v151 - 4) = *((_BYTE *)v150 - 4);
            *((_BYTE *)v151 - 3) = *((_BYTE *)v150 - 3);
            *((_BYTE *)v151 - 2) = *((_BYTE *)v150 - 2);
            *((_BYTE *)v151 - 1) = *((_BYTE *)v150 - 1);
          }
          while ( v151 != &v75[v82 + 1] );
        }
        v83 = 8LL * (int)v82 + 8;
        v73 = (__int64 *)((char *)v73 + v83);
        v75 = (__int64 *)((char *)v75 + v83);
      }
      switch ( v74 % 8 )
      {
        case 1:
          goto LABEL_143;
        case 2:
          goto LABEL_142;
        case 3:
          goto LABEL_141;
        case 4:
          goto LABEL_140;
        case 5:
          goto LABEL_139;
        case 6:
          goto LABEL_138;
        case 7:
          *((_BYTE *)v75 + 6) = *((_BYTE *)v73 + 6);
LABEL_138:
          *((_BYTE *)v75 + 5) = *((_BYTE *)v73 + 5);
LABEL_139:
          *((_BYTE *)v75 + 4) = *((_BYTE *)v73 + 4);
LABEL_140:
          *((_BYTE *)v75 + 3) = *((_BYTE *)v73 + 3);
LABEL_141:
          *((_BYTE *)v75 + 2) = *((_BYTE *)v73 + 2);
LABEL_142:
          *((_BYTE *)v75 + 1) = *((_BYTE *)v73 + 1);
LABEL_143:
          *(_BYTE *)v75 = *(_BYTE *)v73;
          break;
        default:
          break;
      }
    }
  }
  else if ( *(int *)this > 0 )
  {
    memset(*((void **)this + 39), 0, (unsigned int)(*(_DWORD *)this - 1) + 1LL);
  }
  v84 = a4[20];
  if ( v84 )
  {
    v85 = __dynamic_cast(
            v84,
            (const struct __class_type_info *)&`typeinfo for'ClpObjective,
            (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
            0);
    v86 = v156;
    if ( v156 == 0.0 )
    {
      if ( v85 )
      {
        v87 = v85[3];
        v88 = *(_QWORD *)(v87 + 56);
        v89 = *(_DWORD *)(v87 + 64);
        if ( !*(_BYTE *)(v87 + 8) )
          v89 = *(_DWORD *)(v87 + 68);
        *((_BYTE *)this + 440) = 1;
        if ( v89 > 0 )
        {
          v90 = 0;
          do
          {
            if ( *(_DWORD *)(v88 + 4 * v90) )
              *(_BYTE *)(v90 + *((_QWORD *)this + 45)) |= 2u;
            ++v90;
          }
          while ( (unsigned int)(v89 - 1) + 1LL != v90 );
        }
        goto LABEL_52;
      }
LABEL_144:
      *((_BYTE *)this + 440) = 0;
      goto LABEL_52;
    }
  }
  else
  {
    v86 = v156;
    if ( v156 == 0.0 )
      goto LABEL_144;
  }
  v99 = *(_DWORD *)this;
  *((_BYTE *)this + 440) = 1;
  if ( v99 > 0 )
  {
    v100 = *((_QWORD *)this + 5);
    v101 = 4;
    v102 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v103 = *(_DWORD *)(v100 + v101);
        v104 = *(_DWORD *)(v100 + 4 * v102);
        v105 = v156 == *(double *)(*((_QWORD *)this + 9) + 8 * v102);
        if ( v104 < v103 )
        {
          v106 = *((_QWORD *)this + 8);
          v107 = 8LL * v104;
          v108 = 4LL * v104;
          do
          {
            for ( i = v156 == *(double *)(v106 + v107); i; i = v156 == *(double *)(v106 + v107) )
            {
              ++v104;
              v107 += 8;
              v110 = *(int *)(*((_QWORD *)this + 7) + v108);
              v108 += 4;
              *(_BYTE *)(*((_QWORD *)this + 50) + v110) |= 2u;
              v100 = *((_QWORD *)this + 5);
              v103 = *(_DWORD *)(v100 + v101);
              if ( v103 <= v104 )
                goto LABEL_124;
              v106 = *((_QWORD *)this + 8);
              v105 = 1;
            }
            ++v104;
            v107 += 8;
            v108 += 4;
          }
          while ( v104 < v103 );
        }
        if ( v105 )
          break;
        v101 += 4;
        if ( *(_DWORD *)this <= (int)++v102 )
          goto LABEL_52;
      }
LABEL_124:
      v101 += 4;
      *(_BYTE *)(v102 + *((_QWORD *)this + 45)) |= 2u;
      if ( (int)++v102 >= *(_DWORD *)this )
        break;
      v100 = *((_QWORD *)this + 5);
    }
  }
LABEL_52:
  if ( a7 )
  {
    v91 = *(int *)this;
    if ( v91 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v92 = (__int64 *)operator new[](8 * v91);
    v93 = *(_DWORD *)this;
    *((_QWORD *)this + 20) = v92;
    v94 = a4[15];
    if ( v93 && v92 != v94 )
    {
      if ( v93 >> 3 > 0 )
      {
        v95 = v92;
        v96 = a4[15];
        do
        {
          v97 = *v96;
          v96 += 8;
          v95 += 8;
          *(v95 - 8) = v97;
          *(v95 - 7) = *(v96 - 7);
          *(v95 - 6) = *(v96 - 6);
          *(v95 - 5) = *(v96 - 5);
          *(v95 - 4) = *(v96 - 4);
          *(v95 - 3) = *(v96 - 3);
          *(v95 - 2) = *(v96 - 2);
          v44.m128i_i64[0] = *(v96 - 1);
          *(v95 - 1) = v44.m128i_i64[0];
        }
        while ( &v94[8 * (unsigned int)((v93 >> 3) - 1) + 8] != v96 );
        v98 = ((v93 >> 3) - 1 + 1LL) << 6;
        v94 = (__int64 *)((char *)v94 + v98);
        v92 = (__int64 *)((char *)v92 + v98);
      }
      switch ( v93 % 8 )
      {
        case 1:
          goto LABEL_80;
        case 2:
          goto LABEL_79;
        case 3:
          goto LABEL_78;
        case 4:
          goto LABEL_77;
        case 5:
          goto LABEL_76;
        case 6:
          goto LABEL_75;
        case 7:
          v92[6] = v94[6];
LABEL_75:
          v92[5] = v94[5];
LABEL_76:
          v92[4] = v94[4];
LABEL_77:
          v92[3] = v94[3];
LABEL_78:
          v92[2] = v94[2];
LABEL_79:
          v92[1] = v94[1];
LABEL_80:
          v44.m128i_i64[0] = *v94;
          *v92 = *v94;
          break;
        default:
          break;
      }
    }
    v111 = *((int *)this + 1);
    if ( v111 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v112 = (__int64 *)operator new[](8 * v111);
    v113 = *((_DWORD *)this + 1);
    *((_QWORD *)this + 22) = v112;
    v114 = a4[14];
    if ( v113 && v112 != v114 )
    {
      if ( v113 >> 3 > 0 )
      {
        v115 = a4[14];
        v116 = v112;
        do
        {
          v117 = *v115;
          v116 += 8;
          v115 += 8;
          *(v116 - 8) = v117;
          *(v116 - 7) = *(v115 - 7);
          *(v116 - 6) = *(v115 - 6);
          *(v116 - 5) = *(v115 - 5);
          *(v116 - 4) = *(v115 - 4);
          *(v116 - 3) = *(v115 - 3);
          *(v116 - 2) = *(v115 - 2);
          v44.m128i_i64[0] = *(v115 - 1);
          *(v116 - 1) = v44.m128i_i64[0];
        }
        while ( &v112[8 * (unsigned int)((v113 >> 3) - 1) + 8] != v116 );
        v118 = ((v113 >> 3) - 1 + 1LL) << 6;
        v114 = (__int64 *)((char *)v114 + v118);
        v112 = (__int64 *)((char *)v112 + v118);
      }
      switch ( v113 % 8 )
      {
        case 1:
          goto LABEL_95;
        case 2:
          goto LABEL_94;
        case 3:
          goto LABEL_93;
        case 4:
          goto LABEL_92;
        case 5:
          goto LABEL_91;
        case 6:
          goto LABEL_90;
        case 7:
          v112[6] = v114[6];
LABEL_90:
          v112[5] = v114[5];
LABEL_91:
          v112[4] = v114[4];
LABEL_92:
          v112[3] = v114[3];
LABEL_93:
          v112[2] = v114[2];
LABEL_94:
          v112[1] = v114[1];
LABEL_95:
          v44.m128i_i64[0] = *v114;
          *v112 = *v114;
          break;
        default:
          break;
      }
    }
    if ( !a4[33] )
    {
      ClpSimplex::createStatus((ClpSimplex *)a4);
      v113 = *((_DWORD *)this + 1);
    }
    v119 = operator new[](*(_DWORD *)this + v113);
    v120 = *(int *)this;
    *((_QWORD *)this + 24) = v119;
    v121 = a4[33];
    v122 = *((_DWORD *)this + 1) + v120;
    if ( v122 && (__int64 *)v119 != v121 )
    {
      v123 = v122 >> 3;
      if ( v122 >> 3 <= 0 )
      {
        v131 = (_BYTE *)v119;
      }
      else
      {
        if ( (v119 >= (unsigned __int64)(v121 + 2) || (unsigned __int64)v121 >= v119 + 16) && v123 > 1 )
        {
          v124 = 0;
          v125 = 0;
          do
          {
            v44 = _mm_loadu_si128((const __m128i *)&v121[v124]);
            ++v125;
            *(__m128i *)(v119 + v124 * 8) = v44;
            v124 += 2;
          }
          while ( v125 < v123 >> 1 );
          v126 = v123 & 0xFFFFFFFE;
          v127 = &v121[v126];
          v128 = (_BYTE *)(v119 + v126 * 8);
          if ( (v123 & 0xFFFFFFFE) != v123 )
          {
            *v128 = *(_BYTE *)v127;
            v128[1] = *((_BYTE *)v127 + 1);
            v128[2] = *((_BYTE *)v127 + 2);
            v128[3] = *((_BYTE *)v127 + 3);
            v128[4] = *((_BYTE *)v127 + 4);
            v128[5] = *((_BYTE *)v127 + 5);
            v128[6] = *((_BYTE *)v127 + 6);
            v128[7] = *((_BYTE *)v127 + 7);
          }
          LODWORD(v129) = v123 - 1;
        }
        else
        {
          v153 = a4[33];
          v129 = v123 - 1;
          v154 = v119;
          do
          {
            v155 = *(_BYTE *)v153;
            v154 += 8LL;
            ++v153;
            *(_BYTE *)(v154 - 8) = v155;
            *(_BYTE *)(v154 - 7) = *((_BYTE *)v153 - 7);
            *(_BYTE *)(v154 - 6) = *((_BYTE *)v153 - 6);
            *(_BYTE *)(v154 - 5) = *((_BYTE *)v153 - 5);
            *(_BYTE *)(v154 - 4) = *((_BYTE *)v153 - 4);
            *(_BYTE *)(v154 - 3) = *((_BYTE *)v153 - 3);
            *(_BYTE *)(v154 - 2) = *((_BYTE *)v153 - 2);
            *(_BYTE *)(v154 - 1) = *((_BYTE *)v153 - 1);
          }
          while ( v119 + 8 * v129 + 8 != v154 );
        }
        v130 = 8LL * (int)v129 + 8;
        v121 = (__int64 *)((char *)v121 + v130);
        v131 = (_BYTE *)(v119 + v130);
      }
      switch ( v122 % 8 )
      {
        case 1:
          goto LABEL_116;
        case 2:
          goto LABEL_115;
        case 3:
          goto LABEL_114;
        case 4:
          goto LABEL_113;
        case 5:
          goto LABEL_112;
        case 6:
          goto LABEL_111;
        case 7:
          v131[6] = *((_BYTE *)v121 + 6);
LABEL_111:
          v131[5] = *((_BYTE *)v121 + 5);
LABEL_112:
          v131[4] = *((_BYTE *)v121 + 4);
LABEL_113:
          v131[3] = *((_BYTE *)v121 + 3);
LABEL_114:
          v131[2] = *((_BYTE *)v121 + 2);
LABEL_115:
          v131[1] = *((_BYTE *)v121 + 1);
LABEL_116:
          *v131 = *(_BYTE *)v121;
          break;
        default:
          break;
      }
    }
    *((_QWORD *)this + 25) = v120 + v119;
  }
  ClpSimplex::resize((ClpSimplex *)a4, 0, 0);
  presolve_make_memlists(
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 32),
    *(unsigned int *)this,
    *(double *)v44.m128i_i64,
    a8,
    a9,
    a10,
    v132,
    v133,
    0.0,
    v86);
  presolve_make_memlists(
    *((_QWORD *)this + 36),
    *((_QWORD *)this + 33),
    *((unsigned int *)this + 1),
    *(double *)v44.m128i_i64,
    a8,
    a9,
    a10,
    v134,
    v135,
    0.0,
    v86);
  *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *(int *)this) = v161 - 1;
  *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * *((int *)this + 1)) = v161 - 1;
  CoinPresolveMatrix::initializeStuff(this);
}

