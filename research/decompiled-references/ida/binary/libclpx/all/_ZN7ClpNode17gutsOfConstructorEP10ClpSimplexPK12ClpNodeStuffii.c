__int64 __fastcall ClpNode::gutsOfConstructor(ClpNode *this, ClpSimplex *a2, const ClpNodeStuff *a3, int a4, int a5)
{
  int v8; // r13d
  int v9; // esi
  int v10; // r12d
  double v11; // xmm1_8
  int v12; // eax
  double v13; // xmm0_8
  double v14; // xmm0_8
  int v15; // edx
  int v16; // r12d
  ClpFactorization *v17; // r15
  bool v18; // r15
  void *v19; // rcx
  void *v20; // rax
  unsigned __int64 v21; // r12
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  void *v25; // rcx
  const void *v26; // r12
  unsigned __int64 v27; // rdi
  void *v28; // rax
  void *v29; // rcx
  const void *v30; // rdi
  const ClpDualRowSteepest *v31; // r12
  ClpDualRowSteepest *v32; // r13
  int v33; // edx
  __int64 v35; // rdi
  int v36; // r12d
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // r8
  void *v42; // rax
  unsigned __int64 v43; // r12
  __int64 v44; // rax
  _QWORD *v45; // r9
  _QWORD *v46; // r8
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // xmm0_8
  __int64 v50; // rdi
  _BYTE *v51; // rcx
  _BYTE *v52; // rsi
  unsigned int v53; // edi
  __int64 v54; // rax
  unsigned int v55; // edx
  __int64 v56; // rax
  _BYTE *v57; // rdx
  _BYTE *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // r15
  __int64 v63; // r12
  __int64 v64; // rax
  double v65; // xmm5_8
  __int64 v66; // r11
  __int64 v67; // r10
  double v68; // xmm13_8
  double v69; // xmm7_8
  __int64 result; // rax
  int v71; // ebp
  double v72; // xmm10_8
  double v73; // xmm1_8
  int v74; // r8d
  double v75; // xmm2_8
  int v76; // r9d
  __m128d v77; // xmm8
  double v78; // xmm1_8
  double v79; // xmm8_8
  __m128d v80; // xmm2
  double v81; // xmm2_8
  double v82; // xmm3_8
  double v83; // xmm3_8
  int v84; // edx
  char v85; // dl
  __m128d v86; // xmm0
  __m128d v87; // xmm1
  __m128d v88; // xmm2
  double v89; // xmm1_8
  _BYTE *v90; // r8
  char v91; // si
  __int64 v92; // rsi
  double v93; // xmm0_8
  _QWORD *v94; // rdi
  __int64 *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // xmm0_8
  __int64 v98; // rdx
  _QWORD *v99; // rdx
  _QWORD *v100; // rdi
  _QWORD *v101; // rsi
  __int64 *v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // xmm0_8
  __int64 v105; // rax
  const void *v106; // rdi
  const ClpDualRowSteepest *v107; // r15
  ClpDualRowSteepest *v108; // r12
  unsigned __int64 v109; // rdi
  __m128i *v110; // rax
  __m128i *v111; // rcx
  __m128i *v112; // rcx
  __int64 v113; // rsi
  void *v114; // rdi
  int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // rbp
  __int64 v118; // r12
  __int64 v119; // rcx
  __int64 v120; // rsi
  double v121; // xmm0_8
  int v122; // esi
  double v123; // xmm6_8
  __int64 v124; // rcx
  __int64 v125; // rsi
  void *v126; // rdi
  double v127; // xmm5_8
  __int64 v128; // rax
  unsigned __int64 v129; // rdi
  void *v130; // rdi
  __int64 v131; // rax
  _QWORD *v132; // rsi
  _QWORD *v133; // rdi
  __int64 *v134; // rdx
  _QWORD *v135; // rax
  __int64 v136; // xmm0_8
  __int64 v137; // rax
  _QWORD *v138; // rdi
  _QWORD *v139; // rsi
  __int64 v140; // rdx
  __int64 *v141; // rax
  __int64 v142; // xmm0_8
  __int64 v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rsi
  _QWORD *v146; // rdi
  _QWORD *v147; // rdx
  __int64 *v148; // rax
  __int64 v149; // xmm0_8
  __int64 v150; // rax
  _QWORD *v151; // rdi
  _QWORD *v152; // r9
  __int64 *v153; // rdx
  _QWORD *v154; // rax
  __int64 v155; // xmm0_8
  __int64 v156; // rax
  _QWORD *v157; // rsi
  _QWORD *v158; // rdi
  __int64 *v159; // rdx
  _QWORD *v160; // rax
  __int64 v161; // xmm0_8
  __int64 v162; // rax
  unsigned int v163; // r8d
  __m128i *v164; // rsi
  const __m128i *v165; // rdi
  __int64 v166; // r9
  __m128i v167; // xmm1
  __m128i v168; // xmm0
  __int64 v169; // rsi
  _QWORD *v170; // rsi
  _QWORD *v171; // rdi
  _QWORD *v172; // rax
  __int64 *v173; // rdx
  __int64 v174; // r8
  __int64 v175; // xmm0_8
  __int64 v176; // rax
  _QWORD *v177; // rdi
  _QWORD *v178; // rsi
  __int64 v179; // rdx
  __int64 *v180; // rax
  __int64 v181; // xmm0_8
  __int64 v182; // rax
  const void *v183; // rdi
  const ClpDualRowSteepest *v184; // rax
  const ClpDualRowSteepest *v185; // r15
  ClpDualRowSteepest *v186; // rdi
  _DWORD *v187; // rsi
  _DWORD *v188; // rcx
  unsigned int v189; // edi
  __m128i *v190; // rax
  const __m128i *v191; // rdx
  __int64 v192; // rdi
  __m128i v193; // xmm1
  __m128i v194; // xmm0
  __int64 v195; // rax
  char *v196; // rdx
  _BYTE *v197; // rax
  char v198; // r8
  __m128i *v199; // rdi
  int *v200; // rsi
  int v201; // r10d
  ClpDualRowSteepest *v202; // r12
  __int64 v203; // rdx
  int *v204; // rax
  int v205; // r9d
  int n; // [rsp+8h] [rbp-90h]
  __int64 na; // [rsp+8h] [rbp-90h]
  size_t nb; // [rsp+8h] [rbp-90h]
  int v209; // [rsp+10h] [rbp-88h]
  __int64 v210; // [rsp+10h] [rbp-88h]
  const ClpFactorization *srce; // [rsp+18h] [rbp-80h]
  void *srcf; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-80h]
  void *srcg; // [rsp+18h] [rbp-80h]
  int srca; // [rsp+18h] [rbp-80h]
  double srcb; // [rsp+18h] [rbp-80h]
  double srcc; // [rsp+18h] [rbp-80h]
  double srcd; // [rsp+18h] [rbp-80h]
  double srch; // [rsp+18h] [rbp-80h]
  double srci; // [rsp+18h] [rbp-80h]
  __int64 v221; // [rsp+20h] [rbp-78h]
  __int64 v222; // [rsp+28h] [rbp-70h]
  int v223; // [rsp+28h] [rbp-70h]
  __int64 v224; // [rsp+30h] [rbp-68h]
  int v225; // [rsp+38h] [rbp-60h]
  int v226; // [rsp+3Ch] [rbp-5Ch]
  __int64 v227; // [rsp+40h] [rbp-58h]
  __int64 v228; // [rsp+48h] [rbp-50h]
  __int64 v229; // [rsp+50h] [rbp-48h]
  unsigned int v230; // [rsp+58h] [rbp-40h]
  unsigned int v231; // [rsp+5Ch] [rbp-3Ch]

  v8 = *((_DWORD *)a2 + 26);
  v9 = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 31) = a5;
  v10 = *((_DWORD *)this + 35);
  v11 = *(double *)a2;
  v209 = v9;
  n = v8 + v9;
  v12 = *((_DWORD *)this + 36);
  v13 = *((double *)a2 + 9) * *(double *)a2 - *((double *)a2 + 5);
  *((_DWORD *)this + 33) = 1;
  v14 = v13 * v11;
  *((double *)this + 2) = v14;
  *((double *)this + 4) = v14;
  if ( !a4 )
  {
    v15 = v10;
    if ( v10 < v8 )
      v15 = v8;
    if ( v12 < v9 )
      v12 = v9;
    *((_DWORD *)this + 35) = v15;
    *((_DWORD *)this + 36) = v12;
    v16 = v15 + v12;
    srce = *((const ClpFactorization **)a2 + 158);
    v17 = (ClpFactorization *)operator new(0x50u);
    ClpFactorization::ClpFactorization(v17, srce, v8);
    *((_QWORD *)this + 5) = v17;
    v18 = v16 != 0;
    if ( *((_QWORD *)a2 + 33) || (v19 = nullptr, v16) )
    {
      srcf = *((void **)a2 + 33);
      v20 = (void *)operator new[](v16);
      v19 = memcpy(v20, srcf, n);
    }
    *((_QWORD *)this + 7) = v19;
    if ( *((_QWORD *)a2 + 150) || v16 )
    {
      src = *((void **)a2 + 150);
      if ( (unsigned __int64)v16 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_343;
      v21 = 8LL * v16;
      v22 = (void *)operator new[](v21);
      na = 8LL * n;
      *((_QWORD *)this + 8) = memcpy(v22, src, na);
      v23 = *((const void **)a2 + 147);
      if ( v23 || v18 )
        goto LABEL_14;
    }
    else
    {
      *((_QWORD *)this + 8) = 0;
      v23 = *((const void **)a2 + 147);
      if ( v23 )
      {
        v21 = 0;
        na = 8LL * n;
LABEL_14:
        v24 = (void *)operator new[](v21);
        v25 = memcpy(v24, v23, na);
LABEL_15:
        *((_QWORD *)this + 9) = v25;
        v26 = *((const void **)a2 + 157);
        v27 = *((int *)this + 35);
        if ( v26 || (_DWORD)v27 )
        {
          if ( v27 > 0x1FFFFFFFFFFFFFFELL )
            goto LABEL_343;
          v28 = (void *)operator new[](4 * v27);
          v29 = memcpy(v28, v26, 4LL * v8);
        }
        else
        {
          v29 = nullptr;
        }
        *((_QWORD *)this + 12) = v29;
        v30 = *((const void **)a2 + 155);
        if ( v30 )
        {
          v31 = (const ClpDualRowSteepest *)__dynamic_cast(
                                              v30,
                                              (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
                                              (const struct __class_type_info *)&`typeinfo for'ClpDualRowSteepest,
                                              0);
          if ( v31 )
          {
            v32 = (ClpDualRowSteepest *)operator new(0x48u);
            ClpDualRowSteepest::ClpDualRowSteepest(v32, v31);
            *((_QWORD *)this + 6) = v32;
            v33 = *((_DWORD *)this + 33);
            goto LABEL_69;
          }
        }
        goto LABEL_68;
      }
    }
    v25 = nullptr;
    goto LABEL_15;
  }
  if ( v10 >= v8 )
  {
    if ( v12 >= v9 )
    {
      v51 = *((_BYTE **)this + 7);
      v52 = *((_BYTE **)a2 + 33);
      if ( v51 != v52 && n )
      {
        v53 = n >> 3;
        if ( n >> 3 > 0 )
        {
          if ( (v52 >= v51 + 16 || v51 >= v52 + 16) && v53 > 1 )
          {
            v54 = 0;
            v55 = 0;
            do
            {
              ++v55;
              *(__m128i *)&v51[v54] = _mm_loadu_si128((const __m128i *)&v52[v54]);
              v54 += 16;
            }
            while ( v55 < v53 >> 1 );
            v56 = 8LL * (v53 & 0xFFFFFFFE);
            v57 = &v52[v56];
            v58 = &v51[v56];
            if ( v53 != (v53 & 0xFFFFFFFE) )
            {
              *v58 = *v57;
              v58[1] = v57[1];
              v58[2] = v57[2];
              v58[3] = v57[3];
              v58[4] = v57[4];
              v58[5] = v57[5];
              v58[6] = v57[6];
              v58[7] = v57[7];
            }
            LODWORD(v59) = v53 - 1;
          }
          else
          {
            v196 = *((char **)a2 + 33);
            v59 = v53 - 1;
            v197 = v51;
            do
            {
              v198 = *v196;
              v197 += 8;
              v196 += 8;
              *(v197 - 8) = v198;
              *(v197 - 7) = *(v196 - 7);
              *(v197 - 6) = *(v196 - 6);
              *(v197 - 5) = *(v196 - 5);
              *(v197 - 4) = *(v196 - 4);
              *(v197 - 3) = *(v196 - 3);
              *(v197 - 2) = *(v196 - 2);
              *(v197 - 1) = *(v196 - 1);
            }
            while ( v197 != &v51[8 * v59 + 8] );
          }
          v60 = 8LL * (int)v59 + 8;
          v52 += v60;
          v51 += v60;
        }
        switch ( n % 8 )
        {
          case 1:
            goto LABEL_205;
          case 2:
            goto LABEL_204;
          case 3:
            goto LABEL_203;
          case 4:
            goto LABEL_202;
          case 5:
            goto LABEL_201;
          case 6:
            goto LABEL_200;
          case 7:
            v51[6] = v52[6];
LABEL_200:
            v51[5] = v52[5];
LABEL_201:
            v51[4] = v52[4];
LABEL_202:
            v51[3] = v52[3];
LABEL_203:
            v51[2] = v52[2];
LABEL_204:
            v51[1] = v52[1];
LABEL_205:
            *v51 = *v52;
            break;
          default:
            break;
        }
      }
      if ( a4 != 1 )
      {
        v132 = *((_QWORD **)this + 8);
        v133 = *((_QWORD **)a2 + 15);
        if ( v132 != v133 && v209 )
        {
          if ( v209 >> 3 > 0 )
          {
            v134 = *((__int64 **)a2 + 15);
            v135 = *((_QWORD **)this + 8);
            do
            {
              v136 = *v134;
              v135 += 8;
              v134 += 8;
              *(v135 - 8) = v136;
              *(v135 - 7) = *(v134 - 7);
              *(v135 - 6) = *(v134 - 6);
              *(v135 - 5) = *(v134 - 5);
              *(v135 - 4) = *(v134 - 4);
              *(v135 - 3) = *(v134 - 3);
              *(v135 - 2) = *(v134 - 2);
              *(v135 - 1) = *(v134 - 1);
            }
            while ( v135 != &v132[8 * (unsigned int)((v209 >> 3) - 1) + 8] );
            v137 = ((v209 >> 3) - 1 + 1LL) << 6;
            v133 = (_QWORD *)((char *)v133 + v137);
            v132 = (_QWORD *)((char *)v132 + v137);
          }
          switch ( v209 % 8 )
          {
            case 1:
              goto LABEL_227;
            case 2:
              goto LABEL_226;
            case 3:
              goto LABEL_225;
            case 4:
              goto LABEL_224;
            case 5:
              goto LABEL_223;
            case 6:
              goto LABEL_222;
            case 7:
              v132[6] = v133[6];
LABEL_222:
              v132[5] = v133[5];
LABEL_223:
              v132[4] = v133[4];
LABEL_224:
              v132[3] = v133[3];
LABEL_225:
              v132[2] = v133[2];
LABEL_226:
              v132[1] = v133[1];
LABEL_227:
              *v132 = *v133;
              break;
            default:
              break;
          }
        }
        v138 = *((_QWORD **)this + 9);
        v139 = *((_QWORD **)a2 + 17);
        if ( v138 != v139 && v209 )
        {
          if ( v209 >> 3 <= 0 )
          {
            v144 = *((_QWORD **)this + 9);
          }
          else
          {
            v140 = *((_QWORD *)this + 9);
            v141 = *((__int64 **)a2 + 17);
            do
            {
              v142 = *v141;
              v141 += 8;
              v140 += 64;
              *(_QWORD *)(v140 - 64) = v142;
              *(_QWORD *)(v140 - 56) = *(v141 - 7);
              *(_QWORD *)(v140 - 48) = *(v141 - 6);
              *(_QWORD *)(v140 - 40) = *(v141 - 5);
              *(_QWORD *)(v140 - 32) = *(v141 - 4);
              *(_QWORD *)(v140 - 24) = *(v141 - 3);
              *(_QWORD *)(v140 - 16) = *(v141 - 2);
              *(_QWORD *)(v140 - 8) = *(v141 - 1);
            }
            while ( v141 != &v139[8 * (unsigned int)((v209 >> 3) - 1) + 8] );
            v143 = ((v209 >> 3) - 1 + 1LL) << 6;
            v139 = (_QWORD *)((char *)v139 + v143);
            v144 = (_QWORD *)((char *)v138 + v143);
          }
          switch ( v209 % 8 )
          {
            case 1:
              goto LABEL_241;
            case 2:
              goto LABEL_240;
            case 3:
              goto LABEL_239;
            case 4:
              goto LABEL_238;
            case 5:
              goto LABEL_237;
            case 6:
              goto LABEL_236;
            case 7:
              v144[6] = v139[6];
LABEL_236:
              v144[5] = v139[5];
LABEL_237:
              v144[4] = v139[4];
LABEL_238:
              v144[3] = v139[3];
LABEL_239:
              v144[2] = v139[2];
LABEL_240:
              v144[1] = v139[1];
LABEL_241:
              *v144 = *v139;
              break;
            default:
              break;
          }
        }
        *((_DWORD *)this + 33) = 0;
        v145 = *((_QWORD **)a2 + 16);
        v146 = &v138[v209];
        if ( v8 && v146 != v145 )
        {
          if ( v8 >> 3 > 0 )
          {
            v147 = v146;
            v148 = *((__int64 **)a2 + 16);
            do
            {
              v149 = *v148;
              v148 += 8;
              v147 += 8;
              *(v147 - 8) = v149;
              *(v147 - 7) = *(v148 - 7);
              *(v147 - 6) = *(v148 - 6);
              *(v147 - 5) = *(v148 - 5);
              *(v147 - 4) = *(v148 - 4);
              *(v147 - 3) = *(v148 - 3);
              *(v147 - 2) = *(v148 - 2);
              *(v147 - 1) = *(v148 - 1);
            }
            while ( v148 != &v145[8 * (unsigned int)((v8 >> 3) - 1) + 8] );
            v150 = ((v8 >> 3) - 1 + 1LL) << 6;
            v145 = (_QWORD *)((char *)v145 + v150);
            v146 = (_QWORD *)((char *)v146 + v150);
          }
          switch ( v8 % 8 )
          {
            case 1:
              goto LABEL_174;
            case 2:
              goto LABEL_173;
            case 3:
              goto LABEL_172;
            case 4:
              goto LABEL_171;
            case 5:
              goto LABEL_170;
            case 6:
              goto LABEL_169;
            case 7:
              v146[6] = v145[6];
LABEL_169:
              v146[5] = v145[5];
LABEL_170:
              v146[4] = v145[4];
LABEL_171:
              v146[3] = v145[3];
LABEL_172:
              v146[2] = v145[2];
LABEL_173:
              v146[1] = v145[1];
LABEL_174:
              *v146 = *v145;
              break;
            default:
              break;
          }
        }
        *((_DWORD *)this + 32) = 0;
        v61 = *((_QWORD *)a2 + 22);
        v62 = *((_QWORD *)a2 + 15);
        v63 = *((_QWORD *)a2 + 34);
        nb = *((_QWORD *)a2 + 23);
        goto LABEL_176;
      }
      ClpFactorization::operator=(*((ClpFactorization **)this + 5), *((ClpFactorization **)a2 + 158));
      v170 = *((_QWORD **)this + 8);
      v171 = *((_QWORD **)a2 + 150);
      if ( v170 != v171 && n )
      {
        if ( n >> 3 > 0 )
        {
          v172 = *((_QWORD **)this + 8);
          v173 = *((__int64 **)a2 + 150);
          v174 = (unsigned int)((n >> 3) - 1);
          do
          {
            v175 = *v173;
            v172 += 8;
            v173 += 8;
            *(v172 - 8) = v175;
            *(v172 - 7) = *(v173 - 7);
            *(v172 - 6) = *(v173 - 6);
            *(v172 - 5) = *(v173 - 5);
            *(v172 - 4) = *(v173 - 4);
            *(v172 - 3) = *(v173 - 3);
            *(v172 - 2) = *(v173 - 2);
            *(v172 - 1) = *(v173 - 1);
          }
          while ( v172 != &v170[8 * v174 + 8] );
          v176 = ((int)v174 + 1LL) << 6;
          v171 = (_QWORD *)((char *)v171 + v176);
          v170 = (_QWORD *)((char *)v170 + v176);
        }
        switch ( n % 8 )
        {
          case 1:
            goto LABEL_303;
          case 2:
            goto LABEL_302;
          case 3:
            goto LABEL_301;
          case 4:
            goto LABEL_300;
          case 5:
            goto LABEL_299;
          case 6:
            goto LABEL_298;
          case 7:
            v170[6] = v171[6];
LABEL_298:
            v170[5] = v171[5];
LABEL_299:
            v170[4] = v171[4];
LABEL_300:
            v170[3] = v171[3];
LABEL_301:
            v170[2] = v171[2];
LABEL_302:
            v170[1] = v171[1];
LABEL_303:
            *v170 = *v171;
            break;
          default:
            break;
        }
      }
      v177 = *((_QWORD **)this + 9);
      v178 = *((_QWORD **)a2 + 147);
      if ( v177 != v178 && n )
      {
        if ( n >> 3 > 0 )
        {
          v179 = *((_QWORD *)this + 9);
          v180 = *((__int64 **)a2 + 147);
          do
          {
            v181 = *v180;
            v180 += 8;
            v179 += 64;
            *(_QWORD *)(v179 - 64) = v181;
            *(_QWORD *)(v179 - 56) = *(v180 - 7);
            *(_QWORD *)(v179 - 48) = *(v180 - 6);
            *(_QWORD *)(v179 - 40) = *(v180 - 5);
            *(_QWORD *)(v179 - 32) = *(v180 - 4);
            *(_QWORD *)(v179 - 24) = *(v180 - 3);
            *(_QWORD *)(v179 - 16) = *(v180 - 2);
            *(_QWORD *)(v179 - 8) = *(v180 - 1);
          }
          while ( v180 != &v178[8 * (unsigned int)((n >> 3) - 1) + 8] );
          v182 = ((n >> 3) - 1 + 1LL) << 6;
          v178 = (_QWORD *)((char *)v178 + v182);
          v177 = (_QWORD *)((char *)v177 + v182);
        }
        switch ( n % 8 )
        {
          case 1:
            goto LABEL_317;
          case 2:
            goto LABEL_316;
          case 3:
            goto LABEL_315;
          case 4:
            goto LABEL_314;
          case 5:
            goto LABEL_313;
          case 6:
            goto LABEL_312;
          case 7:
            v177[6] = v178[6];
LABEL_312:
            v177[5] = v178[5];
LABEL_313:
            v177[4] = v178[4];
LABEL_314:
            v177[3] = v178[3];
LABEL_315:
            v177[2] = v178[2];
LABEL_316:
            v177[1] = v178[1];
LABEL_317:
            *v177 = *v178;
            break;
          default:
            break;
        }
      }
      v183 = *((const void **)a2 + 155);
      if ( v183 )
      {
        v184 = (const ClpDualRowSteepest *)__dynamic_cast(
                                             v183,
                                             (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
                                             (const struct __class_type_info *)&`typeinfo for'ClpDualRowSteepest,
                                             0);
        v185 = v184;
        if ( v184 )
        {
          v186 = *((ClpDualRowSteepest **)this + 6);
          if ( v186 )
          {
            ClpDualRowSteepest::fill(v186, v184);
          }
          else
          {
            v202 = (ClpDualRowSteepest *)operator new(0x48u);
            ClpDualRowSteepest::ClpDualRowSteepest(v202, v185);
            *((_QWORD *)this + 6) = v202;
          }
        }
      }
      v187 = *((_DWORD **)this + 12);
      v188 = *((_DWORD **)a2 + 157);
      if ( v8 && v187 != v188 )
      {
        v189 = v8 >> 3;
        if ( v8 >> 3 > 0 )
        {
          if ( (v187 >= v188 + 8 || v188 >= v187 + 8) && v189 > 1 )
          {
            v190 = *((__m128i **)this + 12);
            v191 = *((const __m128i **)a2 + 157);
            v192 = v189 - 1;
            do
            {
              v193 = _mm_loadu_si128(v191);
              v190 += 2;
              v191 += 2;
              v194 = _mm_loadu_si128(v191 - 1);
              v190[-2] = v193;
              v190[-1] = v194;
            }
            while ( v190 != (__m128i *)&v187[8 * v192 + 8] );
          }
          else
          {
            v203 = *((_QWORD *)this + 12);
            v204 = *((int **)a2 + 157);
            v192 = v189 - 1;
            do
            {
              v205 = *v204;
              v204 += 8;
              v203 += 32;
              *(_DWORD *)(v203 - 32) = v205;
              *(_DWORD *)(v203 - 28) = *(v204 - 7);
              *(_DWORD *)(v203 - 24) = *(v204 - 6);
              *(_DWORD *)(v203 - 20) = *(v204 - 5);
              *(_DWORD *)(v203 - 16) = *(v204 - 4);
              *(_DWORD *)(v203 - 12) = *(v204 - 3);
              *(_DWORD *)(v203 - 8) = *(v204 - 2);
              *(_DWORD *)(v203 - 4) = *(v204 - 1);
            }
            while ( v204 != &v188[8 * v192 + 8] );
          }
          v195 = 32 * ((int)v192 + 1LL);
          v188 = (_DWORD *)((char *)v188 + v195);
          v187 = (_DWORD *)((char *)v187 + v195);
        }
        switch ( v8 % 8 )
        {
          case 1:
            goto LABEL_67;
          case 2:
            goto LABEL_66;
          case 3:
            goto LABEL_65;
          case 4:
            goto LABEL_64;
          case 5:
            goto LABEL_63;
          case 6:
            goto LABEL_62;
          case 7:
            v187[6] = v188[6];
LABEL_62:
            v187[5] = v188[5];
LABEL_63:
            v187[4] = v188[4];
LABEL_64:
            v187[3] = v188[3];
LABEL_65:
            v187[2] = v188[2];
LABEL_66:
            v187[1] = v188[1];
LABEL_67:
            *v187 = *v188;
            break;
          default:
            break;
        }
      }
LABEL_68:
      v33 = *((_DWORD *)this + 33);
      goto LABEL_69;
    }
  }
  else
  {
    v10 = v8;
  }
  v35 = *((_QWORD *)this + 6);
  *((_DWORD *)this + 35) = v10;
  if ( v12 < v9 )
    v12 = v9;
  *((_DWORD *)this + 36) = v12;
  v36 = v10 + v12;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 80LL))(v35);
  v37 = *((void **)this + 7);
  *((_QWORD *)this + 6) = 0;
  if ( v37 )
    operator delete[](v37);
  v38 = *((void **)this + 8);
  if ( v38 )
    operator delete[](v38);
  v39 = *((void **)this + 9);
  if ( v39 )
    operator delete[](v39);
  v40 = *((void **)this + 12);
  if ( v40 )
    operator delete[](v40);
  if ( *((_QWORD *)a2 + 33) || (v41 = nullptr, v36) )
  {
    srcg = *((void **)a2 + 33);
    v42 = (void *)operator new[](v36);
    v41 = memcpy(v42, srcg, n);
  }
  *((_QWORD *)this + 7) = v41;
  if ( (unsigned __int64)(8LL * v36) > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_343;
  v43 = (__int64)v36 << 6;
  *((_QWORD *)this + 8) = operator new[](v43);
  v44 = operator new[](v43);
  *((_QWORD *)this + 9) = v44;
  if ( a4 == 1 )
  {
    ClpFactorization::operator=(*((ClpFactorization **)this + 5), *((ClpFactorization **)a2 + 158));
    v151 = *((_QWORD **)this + 8);
    v152 = *((_QWORD **)a2 + 150);
    if ( v151 != v152 && n )
    {
      if ( n >> 3 > 0 )
      {
        v153 = *((__int64 **)a2 + 150);
        v154 = *((_QWORD **)this + 8);
        do
        {
          v155 = *v153;
          v154 += 8;
          v153 += 8;
          *(v154 - 8) = v155;
          *(v154 - 7) = *(v153 - 7);
          *(v154 - 6) = *(v153 - 6);
          *(v154 - 5) = *(v153 - 5);
          *(v154 - 4) = *(v153 - 4);
          *(v154 - 3) = *(v153 - 3);
          *(v154 - 2) = *(v153 - 2);
          *(v154 - 1) = *(v153 - 1);
        }
        while ( v154 != &v151[8 * (unsigned int)((n >> 3) - 1) + 8] );
        v156 = ((n >> 3) - 1 + 1LL) << 6;
        v152 = (_QWORD *)((char *)v152 + v156);
        v151 = (_QWORD *)((char *)v151 + v156);
      }
      switch ( n % 8 )
      {
        case 1:
          goto LABEL_262;
        case 2:
          goto LABEL_261;
        case 3:
          goto LABEL_260;
        case 4:
          goto LABEL_259;
        case 5:
          goto LABEL_258;
        case 6:
          goto LABEL_257;
        case 7:
          v151[6] = v152[6];
LABEL_257:
          v151[5] = v152[5];
LABEL_258:
          v151[4] = v152[4];
LABEL_259:
          v151[3] = v152[3];
LABEL_260:
          v151[2] = v152[2];
LABEL_261:
          v151[1] = v152[1];
LABEL_262:
          *v151 = *v152;
          break;
        default:
          break;
      }
    }
    v157 = *((_QWORD **)this + 9);
    v158 = *((_QWORD **)a2 + 147);
    if ( v157 != v158 && n )
    {
      if ( n >> 3 > 0 )
      {
        v159 = *((__int64 **)a2 + 147);
        v160 = *((_QWORD **)this + 9);
        do
        {
          v161 = *v159;
          v160 += 8;
          v159 += 8;
          *(v160 - 8) = v161;
          *(v160 - 7) = *(v159 - 7);
          *(v160 - 6) = *(v159 - 6);
          *(v160 - 5) = *(v159 - 5);
          *(v160 - 4) = *(v159 - 4);
          *(v160 - 3) = *(v159 - 3);
          *(v160 - 2) = *(v159 - 2);
          *(v160 - 1) = *(v159 - 1);
        }
        while ( v160 != &v157[8 * (unsigned int)((n >> 3) - 1) + 8] );
        v162 = ((n >> 3) - 1 + 1LL) << 6;
        v158 = (_QWORD *)((char *)v158 + v162);
        v157 = (_QWORD *)((char *)v157 + v162);
      }
      switch ( n % 8 )
      {
        case 1:
          goto LABEL_135;
        case 2:
          goto LABEL_134;
        case 3:
          goto LABEL_133;
        case 4:
          goto LABEL_132;
        case 5:
          goto LABEL_131;
        case 6:
          goto LABEL_130;
        case 7:
          v157[6] = v158[6];
LABEL_130:
          v157[5] = v158[5];
LABEL_131:
          v157[4] = v158[4];
LABEL_132:
          v157[3] = v158[3];
LABEL_133:
          v157[2] = v158[2];
LABEL_134:
          v157[1] = v158[1];
LABEL_135:
          *v157 = *v158;
          break;
        default:
          break;
      }
    }
    v106 = *((const void **)a2 + 155);
    if ( v106 )
    {
      v107 = (const ClpDualRowSteepest *)__dynamic_cast(
                                           v106,
                                           (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
                                           (const struct __class_type_info *)&`typeinfo for'ClpDualRowSteepest,
                                           0);
      if ( v107 )
      {
        v108 = (ClpDualRowSteepest *)operator new(0x48u);
        ClpDualRowSteepest::ClpDualRowSteepest(v108, v107);
        *((_QWORD *)this + 6) = v108;
      }
    }
  }
  else
  {
    v45 = *((_QWORD **)this + 8);
    v46 = *((_QWORD **)a2 + 15);
    if ( v45 != v46 && v9 )
    {
      if ( v9 >> 3 > 0 )
      {
        v47 = *((__int64 **)a2 + 15);
        v48 = *((_QWORD *)this + 8);
        do
        {
          v49 = *v47;
          v47 += 8;
          v48 += 64;
          *(_QWORD *)(v48 - 64) = v49;
          *(_QWORD *)(v48 - 56) = *(v47 - 7);
          *(_QWORD *)(v48 - 48) = *(v47 - 6);
          *(_QWORD *)(v48 - 40) = *(v47 - 5);
          *(_QWORD *)(v48 - 32) = *(v47 - 4);
          *(_QWORD *)(v48 - 24) = *(v47 - 3);
          *(_QWORD *)(v48 - 16) = *(v47 - 2);
          *(_QWORD *)(v48 - 8) = *(v47 - 1);
        }
        while ( v47 != &v46[8 * (unsigned int)((v9 >> 3) - 1) + 8] );
        v50 = ((v9 >> 3) - 1 + 1LL) << 6;
        v46 = (_QWORD *)((char *)v46 + v50);
        v45 = (_QWORD *)((char *)v45 + v50);
      }
      switch ( v9 % 8 )
      {
        case 1:
          goto LABEL_107;
        case 2:
          goto LABEL_106;
        case 3:
          goto LABEL_105;
        case 4:
          goto LABEL_104;
        case 5:
          goto LABEL_103;
        case 6:
          goto LABEL_102;
        case 7:
          v45[6] = v46[6];
LABEL_102:
          v45[5] = v46[5];
LABEL_103:
          v45[4] = v46[4];
LABEL_104:
          v45[3] = v46[3];
LABEL_105:
          v45[2] = v46[2];
LABEL_106:
          v45[1] = v46[1];
LABEL_107:
          *v45 = *v46;
          break;
        default:
          break;
      }
    }
    v94 = *((_QWORD **)a2 + 17);
    if ( (_QWORD *)v44 != v94 && v9 )
    {
      if ( v9 >> 3 <= 0 )
      {
        v99 = (_QWORD *)v44;
      }
      else
      {
        v95 = *((__int64 **)a2 + 17);
        v96 = v44;
        do
        {
          v97 = *v95;
          v96 += 64;
          v95 += 8;
          *(_QWORD *)(v96 - 64) = v97;
          *(_QWORD *)(v96 - 56) = *(v95 - 7);
          *(_QWORD *)(v96 - 48) = *(v95 - 6);
          *(_QWORD *)(v96 - 40) = *(v95 - 5);
          *(_QWORD *)(v96 - 32) = *(v95 - 4);
          *(_QWORD *)(v96 - 24) = *(v95 - 3);
          *(_QWORD *)(v96 - 16) = *(v95 - 2);
          *(_QWORD *)(v96 - 8) = *(v95 - 1);
        }
        while ( v96 != v44 + (((unsigned int)((v9 >> 3) - 1) + 1LL) << 6) );
        v98 = ((v9 >> 3) - 1 + 1LL) << 6;
        v94 = (_QWORD *)((char *)v94 + v98);
        v99 = (_QWORD *)(v44 + v98);
      }
      switch ( v9 % 8 )
      {
        case 1:
          goto LABEL_121;
        case 2:
          goto LABEL_120;
        case 3:
          goto LABEL_119;
        case 4:
          goto LABEL_118;
        case 5:
          goto LABEL_117;
        case 6:
          goto LABEL_116;
        case 7:
          v99[6] = v94[6];
LABEL_116:
          v99[5] = v94[5];
LABEL_117:
          v99[4] = v94[4];
LABEL_118:
          v99[3] = v94[3];
LABEL_119:
          v99[2] = v94[2];
LABEL_120:
          v99[1] = v94[1];
LABEL_121:
          *v99 = *v94;
          break;
        default:
          break;
      }
    }
    *((_DWORD *)this + 33) = 0;
    v100 = *((_QWORD **)a2 + 16);
    v101 = (_QWORD *)(v44 + 8LL * v9);
    if ( v8 && v101 != v100 )
    {
      if ( v8 >> 3 > 0 )
      {
        v102 = *((__int64 **)a2 + 16);
        v103 = (_QWORD *)(v44 + 8LL * v209);
        do
        {
          v104 = *v102;
          v103 += 8;
          v102 += 8;
          *(v103 - 8) = v104;
          *(v103 - 7) = *(v102 - 7);
          *(v103 - 6) = *(v102 - 6);
          *(v103 - 5) = *(v102 - 5);
          *(v103 - 4) = *(v102 - 4);
          *(v103 - 3) = *(v102 - 3);
          *(v103 - 2) = *(v102 - 2);
          *(v103 - 1) = *(v102 - 1);
        }
        while ( v103 != &v101[8 * (unsigned int)((v8 >> 3) - 1) + 8] );
        v105 = ((v8 >> 3) - 1 + 1LL) << 6;
        v100 = (_QWORD *)((char *)v100 + v105);
        v101 = (_QWORD *)((char *)v101 + v105);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_198;
        case 2:
          goto LABEL_197;
        case 3:
          goto LABEL_196;
        case 4:
          goto LABEL_195;
        case 5:
          goto LABEL_194;
        case 6:
          goto LABEL_193;
        case 7:
          v101[6] = v100[6];
LABEL_193:
          v101[5] = v100[5];
LABEL_194:
          v101[4] = v100[4];
LABEL_195:
          v101[3] = v100[3];
LABEL_196:
          v101[2] = v100[2];
LABEL_197:
          v101[1] = v100[1];
LABEL_198:
          *v101 = *v100;
          break;
        default:
          break;
      }
    }
  }
  v109 = *((int *)this + 35);
  if ( v109 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_343;
  v110 = (__m128i *)operator new[](4 * v109);
  *((_QWORD *)this + 12) = v110;
  v111 = *((__m128i **)a2 + 157);
  v33 = *((_DWORD *)this + 33);
  if ( v111 && v8 == *((_DWORD *)a2 + 26) )
  {
    if ( v8 && v110 != v111 )
    {
      v163 = v8 >> 3;
      if ( v8 >> 3 > 0 )
      {
        if ( (v111 >= &v110[2] || v110 >= &v111[2]) && v163 > 1 )
        {
          v164 = v110;
          v165 = *((const __m128i **)a2 + 157);
          v166 = v163 - 1;
          do
          {
            v167 = _mm_loadu_si128(v165);
            v164 += 2;
            v165 += 2;
            v168 = _mm_loadu_si128(v165 - 1);
            v164[-2] = v167;
            v164[-1] = v168;
          }
          while ( v164 != &v110[2 * v166 + 2] );
        }
        else
        {
          v199 = v110;
          v200 = *((int **)a2 + 157);
          v166 = v163 - 1;
          do
          {
            v201 = *v200;
            v200 += 8;
            v199 += 2;
            v199[-2].m128i_i32[0] = v201;
            v199[-2].m128i_i32[1] = *(v200 - 7);
            v199[-2].m128i_i32[2] = *(v200 - 6);
            v199[-2].m128i_i32[3] = *(v200 - 5);
            v199[-1].m128i_i32[0] = *(v200 - 4);
            v199[-1].m128i_i32[1] = *(v200 - 3);
            v199[-1].m128i_i32[2] = *(v200 - 2);
            v199[-1].m128i_i32[3] = *(v200 - 1);
          }
          while ( v200 != (int *)&v111[2 * v166 + 2] );
        }
        v169 = 32 * ((int)v166 + 1LL);
        v111 = (__m128i *)((char *)v111 + v169);
        v110 = (__m128i *)((char *)v110 + v169);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_285;
        case 2:
          goto LABEL_284;
        case 3:
          goto LABEL_283;
        case 4:
          goto LABEL_282;
        case 5:
          goto LABEL_281;
        case 6:
          goto LABEL_280;
        case 7:
          v110[1].m128i_i32[2] = v111[1].m128i_i32[2];
LABEL_280:
          v110[1].m128i_i32[1] = v111[1].m128i_i32[1];
LABEL_281:
          v110[1].m128i_i32[0] = v111[1].m128i_i32[0];
LABEL_282:
          v110->m128i_i32[3] = v111->m128i_i32[3];
LABEL_283:
          v110->m128i_i32[2] = v111->m128i_i32[2];
LABEL_284:
          v110->m128i_i32[1] = v111->m128i_i32[1];
LABEL_285:
          v110->m128i_i32[0] = v111->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  else if ( v8 )
  {
    if ( v8 / 8 > 0 )
    {
      v112 = v110;
      v113 = (unsigned int)(v8 / 8 - 1);
      do
      {
        *v112 = (__m128i)-1LL;
        v112 += 2;
        v112[-1] = (__m128i)-1LL;
      }
      while ( v112 != &v110[2 * v113 + 2] );
      v110 += 2 * (int)v113 + 2;
    }
    switch ( v8 % 8 )
    {
      case 1:
        goto LABEL_220;
      case 2:
        goto LABEL_219;
      case 3:
        goto LABEL_218;
      case 4:
        goto LABEL_217;
      case 5:
        goto LABEL_216;
      case 6:
        goto LABEL_215;
      case 7:
        v110[1].m128i_i32[2] = -1;
LABEL_215:
        v110[1].m128i_i32[1] = -1;
LABEL_216:
        v110[1].m128i_i32[0] = -1;
LABEL_217:
        v110->m128i_i32[3] = -1;
LABEL_218:
        v110->m128i_i32[2] = -1;
LABEL_219:
        v110->m128i_i32[1] = -1;
LABEL_220:
        v110->m128i_i32[0] = -1;
        break;
      default:
        break;
    }
  }
LABEL_69:
  *((_DWORD *)this + 32) = 0;
  v61 = *((_QWORD *)a2 + 22);
  v62 = *((_QWORD *)a2 + 15);
  v63 = *((_QWORD *)a2 + 34);
  nb = *((_QWORD *)a2 + 23);
  v227 = *((_QWORD *)a2 + 29);
  if ( !v33 )
LABEL_176:
    v227 = 0;
  v64 = *((_QWORD *)a3 + 7);
  v65 = *((double *)a3 + 1);
  *((_DWORD *)this + 29) = -1;
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 30) = 0;
  v66 = *((_QWORD *)a3 + 4);
  v221 = v64;
  v67 = *((_QWORD *)a3 + 5);
  v68 = *((double *)a3 + 3);
  v228 = *((_QWORD *)a3 + 9);
  v222 = *((_QWORD *)a3 + 6);
  v224 = *((_QWORD *)a3 + 8);
  v69 = fmax(*((double *)a2 + 1) - *((double *)this + 2), 0.0001);
  v229 = *((_QWORD *)a3 + 10);
  v225 = *((_DWORD *)a3 + 38);
  v226 = *((_DWORD *)a3 + 39);
  result = (unsigned int)v209;
  if ( v209 <= 0 )
  {
    v114 = *((void **)this + 10);
    if ( v114 )
    {
      result = *((unsigned int *)this + 37);
      if ( (int)result < 0 )
      {
        v230 = 0;
        v71 = 0;
        goto LABEL_184;
      }
    }
    return result;
  }
  result = 0;
  v71 = 0;
  v230 = 0;
  v231 = v209 - 1;
  srca = 0x7FFFFFFF;
  v72 = 0.0;
  do
  {
    if ( *(_BYTE *)(v63 + result) )
    {
      v86 = (__m128d)*(unsigned __int64 *)(v62 + 8 * result);
      v86.m128d_f64[0] = fmin(fmax(v86.m128d_f64[0], *(double *)(v61 + 8 * result)), *(double *)(nb + 8 * result));
      v87.m128d_f64[0] = v86.m128d_f64[0] + 0.5;
      if ( fabs(v86.m128d_f64[0] + 0.5) < 4.503599627370496e15 )
      {
        v88 = 0;
        v88.m128d_f64[0] = (double)(int)v87.m128d_f64[0];
        *(_QWORD *)&v87.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         v88.m128d_f64[0]
                                       - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v88, v87).m128d_f64[0] & 0x3FF0000000000000LL))
                                     | COERCE_UNSIGNED_INT64(v86.m128d_f64[0] + 0.5) & 0x8000000000000000LL;
      }
      v89 = fabs(v86.m128d_f64[0] - v87.m128d_f64[0]);
      if ( v89 > v65 )
      {
        v73 = v89 + *((double *)this + 3);
        ++*((_DWORD *)this + 30);
        v74 = *(_DWORD *)(v224 + 4LL * v71);
        v75 = v86.m128d_f64[0];
        v76 = *(_DWORD *)(v221 + 4LL * v71);
        *((double *)this + 3) = v73;
        if ( fabs(v86.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v77.m128d_f64[0] = (double)(int)v86.m128d_f64[0];
          *(_QWORD *)&v75 = COERCE_UNSIGNED_INT64(
                              COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v86, v77).m128d_f64[0] & 0x3FF0000000000000LL)
                            + v77.m128d_f64[0])
                          | *(_QWORD *)&v86.m128d_f64[0] & 0x8000000000000000LL;
        }
        v78 = *(double *)(v67 + 8LL * v71) / ((double)v74 + 1.0) * (v75 - v86.m128d_f64[0]);
        if ( v74 )
          v78 = v78 * ((double)*(int *)(v229 + 4LL * v71) / (double)v74 + 1.0);
        v79 = v86.m128d_f64[0];
        if ( fabs(v86.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v80 = 0;
          v80.m128d_f64[0] = (double)(int)v86.m128d_f64[0];
          *(_QWORD *)&v79 = COERCE_UNSIGNED_INT64(
                              v80.m128d_f64[0]
                            - COERCE_DOUBLE(
                                COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v80, v86).m128d_f64[0]))
                              & 0x3FF0000000000000LL))
                          | *(_QWORD *)&v86.m128d_f64[0] & 0x8000000000000000LL;
        }
        v81 = *(double *)(v66 + 8LL * v71) / ((double)v76 + 1.0) * (v86.m128d_f64[0] - v79);
        if ( v76 )
          v81 = v81 * ((double)*(int *)(v228 + 4LL * v71) / (double)v76 + 1.0);
        if ( v225 > v74 || v225 > v76 )
        {
          v78 = v78 * 10.0;
          v81 = v81 * 10.0;
        }
        v82 = fmax(v78, v81);
        if ( v226 > 2 )
          v83 = fmax(v82, v68) * fmax(fmin(v78, v81), v68);
        else
          v83 = fmin(v78, v81) * 0.2 + 0.8 * v82 + v65;
        v84 = *(_DWORD *)(v222 + 4LL * v71);
        *((double *)this + 4) = fmin(v78, v81) + *((double *)this + 4);
        if ( v84 < srca )
        {
          srca = v84;
          v72 = 0.0;
        }
        else if ( v84 > srca )
        {
          v83 = 0.0;
        }
        if ( v83 > v72 )
        {
          v85 = *((_BYTE *)this + 112);
          *((_DWORD *)this + 29) = result;
          *((_QWORD *)this + 1) = *(_QWORD *)&v86.m128d_f64[0];
          *((_BYTE *)this + 112) = v85 & 0xF9;
          v72 = v83;
          if ( v81 < v78 )
            *((_BYTE *)this + 112) = v85 & 0xF8;
          else
            *((_BYTE *)this + 112) = v85 & 0xF8 | 1;
        }
        goto LABEL_90;
      }
      v90 = (_BYTE *)(result + *((_QWORD *)a2 + 33));
      v91 = *v90 & 7;
      if ( v91 == 3 )
      {
        v93 = *(double *)(*((_QWORD *)this + 9) + 8 * result);
        v92 = v227;
        if ( v227 )
          goto LABEL_99;
      }
      else
      {
        if ( v91 != 2 )
          goto LABEL_90;
        v92 = v227;
        v93 = -*(double *)(*((_QWORD *)this + 9) + 8 * result);
        if ( v227 )
        {
LABEL_99:
          if ( v93 > *(double *)(v92 + 8 * result) * v69 )
          {
LABEL_100:
            ++v230;
            *v90 = *v90 & 0xF8 | 5;
          }
LABEL_90:
          ++v71;
          goto LABEL_91;
        }
      }
      if ( v93 <= v69 )
        goto LABEL_90;
      goto LABEL_100;
    }
LABEL_91:
    ++result;
  }
  while ( (unsigned int)(v209 - 1) + 1LL != result );
  v114 = *((void **)this + 10);
  if ( !v114 )
    goto LABEL_154;
  if ( v71 <= *((_DWORD *)this + 37) )
  {
LABEL_150:
    result = 0;
    v115 = 0;
    do
    {
      if ( *(_BYTE *)(v63 + result) )
      {
        v116 = v115++;
        *(_DWORD *)(*((_QWORD *)this + 10) + 4 * v116) = (int)*(double *)(v61 + 8 * result);
        *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v116) = (int)*(double *)(nb + 8 * result);
      }
      ++result;
    }
    while ( v231 + 1LL != result );
    goto LABEL_154;
  }
LABEL_184:
  srcc = v65;
  operator delete[](v114);
  v126 = *((void **)this + 11);
  v127 = srcc;
  if ( v126 )
  {
    operator delete[](v126);
    v127 = srcc;
  }
  *((_DWORD *)this + 37) = v71;
  srcd = v127;
  v128 = operator new[](4LL * v71);
  v129 = *((int *)this + 37);
  *((_QWORD *)this + 10) = v128;
  if ( v129 > 0x1FFFFFFFFFFFFFFELL )
LABEL_343:
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 11) = operator new[](4 * v129);
  result = (unsigned int)v209;
  v65 = srcd;
  if ( v209 > 0 )
  {
    v231 = v209 - 1;
    goto LABEL_150;
  }
LABEL_154:
  if ( *((int *)this + 29) >= 0 )
  {
    result = v230;
    if ( v230 )
    {
      if ( *((_DWORD *)this + 34) < (signed int)v230 )
      {
        v130 = *((void **)this + 13);
        if ( v130 )
        {
          srch = v65;
          operator delete[](v130);
          v65 = srch;
        }
        srci = v65;
        v131 = operator new[](4LL * (int)v230);
        *((_DWORD *)this + 34) = v230;
        *((_QWORD *)this + 13) = v131;
        v65 = srci;
      }
      result = (unsigned int)v209;
      *((_DWORD *)this + 32) = 0;
      v117 = *((_QWORD *)a2 + 33);
      if ( v209 > 0 )
      {
        srcb = v65;
        v118 = 0;
        v210 = (unsigned int)(v209 - 1) + 1LL;
        while ( 1 )
        {
          result = *(unsigned __int8 *)(*((_QWORD *)this + 7) + v118);
          if ( *(_BYTE *)(v117 + v118) == (_BYTE)result )
            goto LABEL_160;
          v121 = *(double *)(v61 + 8 * v118);
          if ( srcb + srcb + v121 >= *(double *)(v62 + 8 * v118) )
          {
            result = ClpSimplex::setColumnUpper(a2, v118, v121);
            v119 = *((int *)this + 32);
            v120 = *((_QWORD *)this + 13);
            *((_DWORD *)this + 32) = v119 + 1;
            *(_DWORD *)(v120 + 4 * v119) = v118;
LABEL_160:
            if ( v210 == ++v118 )
              return result;
          }
          else
          {
            v122 = v118;
            v223 = v118;
            v123 = *(double *)(nb + 8 * v118++);
            result = ClpSimplex::setColumnLower(a2, v122, v123);
            v124 = *((int *)this + 32);
            v125 = *((_QWORD *)this + 13);
            *((_DWORD *)this + 32) = v124 + 1;
            *(_DWORD *)(v125 + 4 * v124) = v223 | 0x10000000;
            if ( v210 == v118 )
              return result;
          }
        }
      }
    }
  }
  return result;
}

