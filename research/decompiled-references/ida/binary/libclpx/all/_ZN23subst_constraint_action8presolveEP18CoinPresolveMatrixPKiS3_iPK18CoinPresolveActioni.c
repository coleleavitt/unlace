__int64 __fastcall subst_constraint_action::presolve(
        subst_constraint_action *this,
        CoinPresolveMatrix *a2,
        const int *a3,
        const int *a4,
        __int64 a5,
        const CoinPresolveAction *a6)
{
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r15
  const int *v13; // rax
  __int64 v14; // r11
  int v15; // ebx
  bool v16; // di
  __int64 v17; // rbp
  int v18; // r12d
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // r9
  int *v22; // rax
  double *v23; // r8
  __int64 v24; // rbx
  double *v25; // rcx
  __int64 v26; // rsi
  int v27; // edi
  unsigned __int64 v28; // rdx
  int v29; // r13d
  int *v30; // rdi
  __int64 v31; // rax
  int v32; // ecx
  char *v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rsi
  int v36; // r13d
  __int64 v37; // rax
  _BYTE *v38; // r10
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r11
  int *v43; // r8
  __int64 v44; // r12
  __int64 v45; // rbp
  _DWORD *v46; // rdx
  _DWORD *v47; // rcx
  int v48; // eax
  bool v49; // r15
  unsigned int v50; // r11d
  __int64 v51; // rbp
  unsigned __int64 v52; // r11
  __int64 v53; // r12
  __int64 v54; // rbp
  __m128i v55; // xmm0
  __int64 v56; // r11
  __int64 *v57; // r8
  __int64 *v58; // r9
  unsigned __int64 v59; // rcx
  __int64 *v60; // rdx
  __int64 v61; // r11
  __int64 v62; // xmm0_8
  __int64 v63; // rdx
  int v64; // r13d
  __int64 v65; // r8
  int v66; // eax
  int v67; // ebx
  __int64 v68; // rbp
  __int64 v69; // rdx
  int *v70; // rbx
  _DWORD *v71; // r12
  int v72; // ebx
  int v73; // r12d
  double *v74; // rdx
  double v75; // xmm0_8
  double v76; // xmm1_8
  int v77; // r8d
  int v78; // r10d
  __int64 v79; // r11
  __int64 v80; // r15
  int v81; // ebp
  __m128d v82; // xmm0
  __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rsi
  __int64 v86; // rdi
  const char *v87; // rdx
  int v88; // esi
  __int64 v89; // rdx
  __int64 v90; // rdx
  int *v91; // r12
  _DWORD *v92; // r13
  __int64 v93; // r15
  int *v94; // rbx
  _DWORD *v95; // rbp
  int v96; // r14d
  int minor1; // eax
  int v98; // eax
  __int64 v99; // rax
  _DWORD *v100; // rdx
  int v101; // edi
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // xmm0_8
  int v105; // esi
  __int64 v106; // r8
  int *v107; // rdx
  __int64 v108; // rax
  int *v109; // rcx
  unsigned int v110; // edi
  __int64 v111; // rax
  __int64 v112; // rdi
  __m128i v113; // xmm0
  __int64 v114; // rax
  double *v115; // rax
  __m128d v116; // rt1
  int *v117; // r8
  __int64 v118; // rbp
  _DWORD *v119; // r11
  __int64 v120; // rsi
  int v121; // r10d
  int *v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // xmm0_8
  int *v127; // rax
  int v128; // ecx
  __int64 v129; // rdx
  int v130; // edx
  __int64 v131; // rax
  int v132; // ecx
  __int64 v133; // rdx
  int *v134; // rbp
  _DWORD *v135; // r11
  int v136; // r15d
  double v137; // xmm0_8
  __int64 v138; // r10
  __int64 v139; // rax
  __int64 v140; // rbx
  __int64 v141; // r9
  __int64 v142; // rcx
  char v143; // dl
  __int64 v144; // rdx
  __int64 v145; // r9
  int *v146; // rdx
  double v147; // xmm2_8
  int *v148; // rdx
  double v149; // xmm2_8
  int *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rbx
  int *v154; // rax
  int *v155; // r8
  int v156; // r10d
  void *v157; // rbp
  __int64 v158; // rax
  const CoinPresolveAction *v159; // r8
  int v160; // [rsp+0h] [rbp-1B8h]
  __int64 v161; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v162; // [rsp+0h] [rbp-1B8h]
  int v163; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v164; // [rsp+0h] [rbp-1B8h]
  int v165; // [rsp+8h] [rbp-1B0h]
  int *v166; // [rsp+10h] [rbp-1A8h]
  __int64 v167; // [rsp+18h] [rbp-1A0h]
  __int64 v168; // [rsp+20h] [rbp-198h]
  __int64 v169; // [rsp+28h] [rbp-190h]
  __int64 v170; // [rsp+30h] [rbp-188h]
  __int64 v171; // [rsp+30h] [rbp-188h]
  __int64 v172; // [rsp+30h] [rbp-188h]
  __int64 v173; // [rsp+38h] [rbp-180h]
  __int64 v174; // [rsp+38h] [rbp-180h]
  __int64 v175; // [rsp+40h] [rbp-178h]
  int v176; // [rsp+40h] [rbp-178h]
  int v177; // [rsp+40h] [rbp-178h]
  int *v178; // [rsp+48h] [rbp-170h]
  double v179; // [rsp+48h] [rbp-170h]
  __int64 v180; // [rsp+48h] [rbp-170h]
  __int64 v181; // [rsp+50h] [rbp-168h]
  int *v182; // [rsp+50h] [rbp-168h]
  double *v183; // [rsp+58h] [rbp-160h]
  __int64 v184; // [rsp+58h] [rbp-160h]
  _DWORD *v185; // [rsp+60h] [rbp-158h]
  __int64 v186; // [rsp+68h] [rbp-150h]
  double v187; // [rsp+70h] [rbp-148h]
  int *v188; // [rsp+70h] [rbp-148h]
  __int64 v189; // [rsp+78h] [rbp-140h]
  int *v190; // [rsp+80h] [rbp-138h]
  __int64 v191; // [rsp+88h] [rbp-130h]
  int *v192; // [rsp+88h] [rbp-130h]
  __int64 v193; // [rsp+90h] [rbp-128h]
  __int64 v194; // [rsp+98h] [rbp-120h]
  int v195; // [rsp+A0h] [rbp-118h]
  int v196; // [rsp+A4h] [rbp-114h]
  const int *v197; // [rsp+A8h] [rbp-110h]
  double v198; // [rsp+B0h] [rbp-108h]
  int v199; // [rsp+B8h] [rbp-100h]
  int v200; // [rsp+BCh] [rbp-FCh]
  __int64 *v201; // [rsp+C0h] [rbp-F8h]
  int v202; // [rsp+C8h] [rbp-F0h]
  int v203; // [rsp+D0h] [rbp-E8h]
  int v204; // [rsp+D4h] [rbp-E4h]
  __int64 v205; // [rsp+D8h] [rbp-E0h]
  __int64 v206; // [rsp+E0h] [rbp-D8h]
  double *v208; // [rsp+F0h] [rbp-C8h]
  double v209; // [rsp+F8h] [rbp-C0h]
  __int64 v210; // [rsp+100h] [rbp-B8h]
  _DWORD *v211; // [rsp+108h] [rbp-B0h]
  int v212; // [rsp+110h] [rbp-A8h]
  const int *v213; // [rsp+118h] [rbp-A0h]
  int v215; // [rsp+128h] [rbp-90h]
  unsigned int v216; // [rsp+12Ch] [rbp-8Ch]
  int *v217; // [rsp+130h] [rbp-88h]
  double v218; // [rsp+140h] [rbp-78h]
  char *src; // [rsp+148h] [rbp-70h]
  CoinPresolveMatrix *v220; // [rsp+150h] [rbp-68h]
  __int64 v221; // [rsp+158h] [rbp-60h]
  int v222; // [rsp+160h] [rbp-58h]
  int v223; // [rsp+164h] [rbp-54h]
  int *v224; // [rsp+170h] [rbp-48h]

  v7 = *((_QWORD *)this + 37);
  v8 = *((_QWORD *)this + 38);
  v215 = (int)a6;
  v195 = *((_DWORD *)this + 1);
  v196 = *(_DWORD *)this;
  v189 = *((_QWORD *)this + 35);
  v186 = *((_QWORD *)this + 36);
  v193 = *((_QWORD *)this + 33);
  v168 = *((_QWORD *)this + 5);
  v167 = *((_QWORD *)this + 6);
  v169 = *((_QWORD *)this + 8);
  v166 = *((int **)this + 7);
  v194 = *((_QWORD *)this + 32);
  v205 = *((_QWORD *)this + 13);
  v206 = *((_QWORD *)this + 14);
  v210 = *((_QWORD *)this + 22);
  v218 = *((double *)this + 42);
  v217 = *((int **)this + 9);
  if ( (unsigned __int64)*(int *)this > 0x199999999999999LL )
LABEL_177:
    __cxa_throw_bad_array_new_length();
  v9 = 4LL * *(int *)this;
  v10 = (int)a4;
  src = (char *)operator new[](80LL * *(int *)this);
  v220 = (CoinPresolveMatrix *)operator new[](v9);
  v185 = (_DWORD *)operator new[](v9);
  v224 = *((int **)this + 56);
  if ( v10 <= 0 )
  {
LABEL_170:
    v152 = a5;
    goto LABEL_171;
  }
  v11 = (unsigned int)(v10 - 1);
  v197 = a3;
  v222 = 0;
  v216 = 0;
  v12 = v7;
  v160 = 0;
  v213 = &a3[v11 + 1];
  v13 = a3;
  do
  {
    v204 = *v13;
    v14 = *v13;
    v15 = *(_DWORD *)(v167 + 4 * v14);
    v211 = (_DWORD *)(v167 + 4 * v14);
    v199 = v15;
    v16 = v15 > v215 || v15 <= 1;
    if ( v16 )
      goto LABEL_4;
    v17 = *(int *)(v168 + 4 * v14);
    v203 = *(_DWORD *)a2;
    v18 = v15 + v17;
    if ( (int)v17 >= v15 + (int)v17 )
    {
      v198 = 0.0;
    }
    else
    {
      v19 = v166[(int)v17];
      v20 = v166[(int)v17];
      if ( *(int *)(v186 + 4 * v19) <= 1 )
        goto LABEL_4;
      v21 = *((_QWORD *)this + 50);
      if ( (*(_BYTE *)(v21 + v19) & 4) != 0 )
        goto LABEL_4;
      v22 = &v166[(int)v17 + 1];
      v23 = (double *)(v169 + 8LL * (int)v17);
      v198 = 0.0;
      v24 = (unsigned int)(v15 - 1) + (__int64)(int)v17;
      v25 = v23;
      while ( 1 )
      {
        if ( fabs(*v25) <= 1.0e-10 )
          goto LABEL_4;
        if ( v203 == v20 )
          v198 = *v25;
        if ( &v166[v24 + 1] == v22 )
          break;
        v26 = *v22;
        v20 = *v22;
        if ( *(int *)(v186 + 4 * v26) > 1 )
        {
          ++v25;
          ++v22;
          if ( (*(_BYTE *)(v21 + v26) & 4) == 0 )
            continue;
        }
        goto LABEL_4;
      }
      do
      {
        if ( fabs(*v23 / v198) > 10.0 )
          v16 = 1;
        ++v23;
      }
      while ( (double *)(v169 + 8 * v24 + 8) != v23 );
      if ( v16 )
        goto LABEL_4;
    }
    v191 = 4LL * v203;
    v27 = *(_DWORD *)(v191 + v186);
    v190 = (int *)(v191 + v186);
    v212 = v27;
    if ( (int)(v27 + v216) >= v196 )
      goto LABEL_4;
    v221 = 8 * v14;
    v183 = (double *)&v217[2 * v14];
    v187 = fabs(*v183);
    if ( v187 <= v218 )
    {
      v181 = 0;
      if ( (int)v17 >= v18 )
        goto LABEL_155;
    }
    else
    {
      if ( (unsigned __int64)v27 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_177;
      v181 = operator new[](8LL * v27);
      if ( (int)v17 >= v18 )
      {
LABEL_155:
        v29 = 0;
        goto LABEL_27;
      }
    }
    v28 = 0;
    v29 = 0;
    v30 = &v166[(int)v17];
    do
    {
      v31 = v30[v28 / 4];
      v29 += *(_DWORD *)(v186 + 4 * v31);
      v32 = v30[v28 / 4];
      *(_BYTE *)(*((_QWORD *)this + 50) + v31) |= 4u;
      v224[v222 + v28 / 4] = v32;
      v28 += 4LL;
    }
    while ( 4LL * (unsigned int)(v18 - v17 - 1) + 4 != v28 );
    v222 += v18 - v17;
LABEL_27:
    v33 = &src[80 * v160];
    v223 = v160 + 1;
    *((_DWORD *)v33 + 16) = v204;
    v201 = (__int64 *)v33;
    *((_DWORD *)v33 + 17) = v203;
    *((_DWORD *)v33 + 18) = v199;
    v34 = 8LL * v199;
    v161 = 4LL * v199;
    *((_QWORD *)v33 + 3) = operator new[](v161);
    *v201 = operator new[](v34);
    v201[1] = operator new[](v34);
    v201[7] = v181;
    v201[2] = operator new[](v34);
    v201[4] = operator new[](v161);
    if ( (unsigned __int64)v29 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_177;
    v201[5] = operator new[](4LL * v29);
    v162 = operator new[](8LL * v29);
    v201[6] = v162;
    if ( (int)v17 < v18 )
    {
      v35 = 0;
      v36 = 0;
      v170 = v12;
      v175 = 4LL * (unsigned int)(v18 - v17 - 1) + 4;
      v178 = &v166[v17];
      v173 = v169 + 8 * v17;
      do
      {
        v37 = v178[v35 / 4];
        v38 = (_BYTE *)(v37 + *((_QWORD *)this + 50));
        v39 = *(int *)(v189 + 4 * v37);
        v40 = v178[v35 / 4];
        if ( (*v38 & 1) == 0 )
        {
          *v38 |= 1u;
          v41 = *((int *)this + 108);
          v42 = *((_QWORD *)this + 53);
          *((_DWORD *)this + 108) = v41 + 1;
          *(_DWORD *)(v42 + 4 * v41) = v37;
          v162 = v201[6];
        }
        v43 = (int *)(v186 + 4 * v37);
        v44 = v201[5];
        v45 = 4LL * v36;
        *(_DWORD *)(v201[3] + v35) = v40;
        *(_DWORD *)(v201[4] + v35) = *v43;
        *(_QWORD *)(*v201 + 2 * v35) = *(_QWORD *)(v205 + 8 * v37);
        v46 = (_DWORD *)(v44 + v45);
        *(_QWORD *)(v201[1] + 2 * v35) = *(_QWORD *)(v206 + 8 * v37);
        v47 = (_DWORD *)(4 * v39 + v8);
        *(_QWORD *)(v201[2] + 2 * v35) = *(_QWORD *)(v173 + 2 * v35);
        v48 = *v43;
        v49 = *v43 == 0;
        if ( (_DWORD *)(v44 + v45) != v47 && v48 )
        {
          v50 = v48 >> 3;
          if ( v48 >> 3 > 0 )
          {
            if ( ((unsigned __int64)v47 >= v44 + v45 + 32 || (unsigned __int64)v46 >= v8 + 4 * v39 + 32) && v50 > 1 )
            {
              v51 = v50 - 1;
              v52 = 0;
              LODWORD(v53) = v51;
              v54 = 32 * (v51 + 1);
              do
              {
                v55 = _mm_loadu_si128((const __m128i *)&v47[v52 / 4 + 4]);
                *(__m128i *)&v46[v52 / 4] = _mm_loadu_si128((const __m128i *)&v47[v52 / 4]);
                *(__m128i *)&v46[v52 / 4 + 4] = v55;
                v52 += 32LL;
              }
              while ( v54 != v52 );
            }
            else
            {
              v134 = (int *)(4 * v39 + v8);
              v53 = v50 - 1;
              v135 = v46;
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
              while ( &v46[8 * v53 + 8] != v135 );
            }
            v56 = 32 * ((int)v53 + 1LL);
            v47 = (_DWORD *)((char *)v47 + v56);
            v46 = (_DWORD *)((char *)v46 + v56);
          }
          switch ( v48 % 8 )
          {
            case 1:
              goto LABEL_47;
            case 2:
              goto LABEL_46;
            case 3:
              goto LABEL_45;
            case 4:
              goto LABEL_44;
            case 5:
              goto LABEL_43;
            case 6:
              goto LABEL_42;
            case 7:
              v46[6] = v47[6];
LABEL_42:
              v46[5] = v47[5];
LABEL_43:
              v46[4] = v47[4];
LABEL_44:
              v46[3] = v47[3];
LABEL_45:
              v46[2] = v47[2];
LABEL_46:
              v46[1] = v47[1];
LABEL_47:
              *v46 = *v47;
              break;
            default:
              break;
          }
          v48 = *v43;
          v49 = *v43 == 0;
        }
        v57 = (__int64 *)(v162 + 8LL * v36);
        v58 = (__int64 *)(v170 + 8 * v39);
        if ( v57 != v58 && !v49 )
        {
          if ( v48 >> 3 > 0 )
          {
            v59 = v162 + 8LL * v36;
            v60 = v58;
            v61 = (unsigned int)((v48 >> 3) - 1);
            do
            {
              v62 = *v60;
              v60 += 8;
              v59 += 64LL;
              *(_QWORD *)(v59 - 64) = v62;
              *(_QWORD *)(v59 - 56) = *(v60 - 7);
              *(_QWORD *)(v59 - 48) = *(v60 - 6);
              *(_QWORD *)(v59 - 40) = *(v60 - 5);
              *(_QWORD *)(v59 - 32) = *(v60 - 4);
              *(_QWORD *)(v59 - 24) = *(v60 - 3);
              *(_QWORD *)(v59 - 16) = *(v60 - 2);
              *(_QWORD *)(v59 - 8) = *(v60 - 1);
            }
            while ( v60 != &v58[8 * v61 + 8] );
            v63 = ((int)v61 + 1LL) << 6;
            v58 = (__int64 *)((char *)v58 + v63);
            v57 = (__int64 *)((char *)v57 + v63);
          }
          switch ( v48 % 8 )
          {
            case 1:
              goto LABEL_62;
            case 2:
              goto LABEL_61;
            case 3:
              goto LABEL_60;
            case 4:
              goto LABEL_59;
            case 5:
              goto LABEL_58;
            case 6:
              goto LABEL_57;
            case 7:
              v57[6] = v58[6];
LABEL_57:
              v57[5] = v58[5];
LABEL_58:
              v57[4] = v58[4];
LABEL_59:
              v57[3] = v58[3];
LABEL_60:
              v57[2] = v58[2];
LABEL_61:
              v57[1] = v58[1];
LABEL_62:
              *v57 = *v58;
              break;
            default:
              break;
          }
        }
        v36 += v48;
        v35 += 4LL;
      }
      while ( v175 != v35 );
      v12 = v170;
    }
    v64 = *(_DWORD *)(v189 + 4LL * v203);
    v192 = (int *)(v189 + v191);
    v65 = v64;
    v200 = v64 + *v190;
    v208 = (double *)(8LL * v203 + v205);
    if ( v187 > v218 )
    {
      v65 = v64;
      v137 = *v183;
      if ( v64 < v200 )
      {
        v65 = v64;
        v138 = v12 + 8LL * v64;
        v139 = 0;
        v140 = (unsigned int)(*v190 - 1) + 1LL;
        do
        {
          v141 = *((_QWORD *)this + 45);
          while ( 1 )
          {
            v142 = *(int *)(v8 + 4LL * v64 + 4 * v139);
            v143 = *(_BYTE *)(v141 + v142);
            if ( (v143 & 1) == 0 )
              break;
            v148 = &v217[2 * v142];
            *(_QWORD *)(v181 + 8 * v139) = *(_QWORD *)v148;
            v149 = *(double *)(v138 + 8 * v139++);
            *(double *)v148 = *(double *)v148 - v149 * v137 / v198;
            if ( v140 == v139 )
              goto LABEL_161;
          }
          *(_BYTE *)(v141 + v142) = v143 | 1;
          v144 = *((int *)this + 98);
          v145 = *((_QWORD *)this + 48);
          *((_DWORD *)this + 98) = v144 + 1;
          *(_DWORD *)(v145 + 4 * v144) = v142;
          v146 = &v217[2 * v142];
          *(_QWORD *)(v181 + 8 * v139) = *(_QWORD *)v146;
          v147 = *(double *)(v138 + 8 * v139++);
          *(double *)v146 = *(double *)v146 - v147 * v137 / v198;
        }
        while ( v139 != v140 );
      }
LABEL_161:
      *((double *)this + 34) = v137 * *v208 / v198 + *((double *)this + 34);
      *v183 = 0.0;
    }
    v66 = (*((int *)this + 109) >> 17) & 3;
    if ( v66 )
    {
      if ( v66 == 1 )
      {
        v209 = 9.999999999999999e-12;
      }
      else
      {
        v209 = 9.999999999999999e-10;
        if ( v66 == 2 )
          v209 = 9.999999999999999e-11;
      }
    }
    else
    {
      v209 = 1.0e-12;
    }
    CoinSort_2<int,double>(v8 + 4 * v65, v8 + 4LL * v200, v12 + 8 * v65);
    v184 = 0;
    do
    {
      v67 = *(_DWORD *)(v201[3] + 4 * v184);
      v165 = v67;
      if ( v203 != v67 )
      {
        v68 = v67;
        v69 = 4LL * v67;
        v70 = (int *)(v189 + v69);
        v188 = (int *)(v189 + v69);
        v71 = (_DWORD *)(v186 + v69);
        v182 = (int *)(v186 + v69);
        v179 = -*(double *)(v201[2] + 8 * v184) / v198;
        CoinSort_2<int,double>(
          v8 + 4LL * *(int *)(v189 + v69),
          v8 + 4LL * (*(_DWORD *)(v186 + v69) + *(_DWORD *)(v189 + v69)),
          v12 + 8LL * *(int *)(v189 + v69));
        v72 = *v70;
        v64 = *v192;
        v73 = v72 + *v71;
        v200 = *v192 + *v190;
        v74 = (double *)(v205 + 8 * v68);
        v75 = *v208 * v179;
        if ( *v74 > -1.797693134862316e308 )
          *v74 = *v74 + v75;
        v76 = *(double *)(v206 + 8 * v68);
        if ( v76 < 1.797693134862316e308 )
          *(double *)(v206 + 8 * v68) = v76 + v75;
        if ( v210 )
          *(double *)(v210 + 8 * v68) = v75 + *(double *)(v210 + 8 * v68);
        v77 = v200;
        if ( v64 < v200 )
        {
          v163 = v64;
          v78 = v72;
          v79 = v12;
          v80 = 0;
          while ( 1 )
          {
            v82 = (__m128d)*(unsigned __int64 *)&v179;
            v81 = *(_DWORD *)(v8 + 4LL * v64);
            v82.m128d_f64[0] = v179 * *(double *)(v79 + 8LL * v64);
            if ( v72 >= v73 )
              goto LABEL_86;
            v83 = v72;
            v84 = *(_DWORD *)(v8 + 4LL * v72);
            if ( v81 > v84 )
              break;
LABEL_114:
            if ( v81 != v84 )
              goto LABEL_86;
            v115 = (double *)(v79 + 8 * v83);
            v82.m128d_f64[0] = v82.m128d_f64[0] + *v115;
            v116.m128d_f64[0] = v179 * v209;
            *(_QWORD *)v115 = *(_QWORD *)&v82.m128d_f64[0]
                            & *(_QWORD *)&_mm_cmpge_sd(_mm_and_pd(v82, (__m128d)xmmword_289DB0), v116).m128d_f64[0];
            LODWORD(v115) = v72++;
            v185[v80] = (_DWORD)v115 - v78;
LABEL_88:
            ++v64;
            ++v80;
            if ( v64 >= v77 )
            {
              v12 = v79;
              v72 = *v188;
              v64 = *v192;
              v200 = *v192 + *v190;
              goto LABEL_90;
            }
          }
          v83 = v72 + 1;
          v85 = v83 + (unsigned int)(v73 - 1 - v72);
          v86 = v8 + 4LL * v72 - 4 * v83;
          while ( 1 )
          {
            v72 = v83;
            if ( v85 == v83 )
              break;
            v84 = *(_DWORD *)(v86 + 4 * (v83 + 1));
            if ( v81 <= v84 )
              goto LABEL_114;
            ++v83;
          }
LABEL_86:
          v176 = v78;
          v171 = v79;
          if ( (unsigned __int8)presolve_expand_major(v189, v79, v8, v186, v193, v195, v165) )
LABEL_148:
            CoinPresolveAction::throwCoinError((CoinPresolveAction *)"out of memory", "CoinImpliedFree::presolve", v87);
          v79 = v171;
          v88 = *v182;
          v64 = *v192 + v64 - v163;
          v163 = *v192;
          v77 = *v192 + *v190;
          v72 = *v188 + v72 - v176;
          v73 = *v188 + v73 - v176;
          v78 = *v188;
          v89 = *v188 + *v182;
          *(_DWORD *)(v8 + 4 * v89) = v81;
          *(double *)(v171 + 8 * v89) = v82.m128d_f64[0];
          v185[v80] = v88;
          ++*v182;
          goto LABEL_88;
        }
LABEL_90:
        if ( v212 > 0 )
        {
          v90 = v64;
          v202 = v64;
          v91 = (int *)(v8 + 4LL * v64);
          v172 = v12;
          v180 = v8;
          v177 = v72;
          v92 = v185;
          v174 = v8 + 4 * (v90 + (unsigned int)(v212 - 1)) + 4;
          do
          {
            while ( 1 )
            {
              v93 = *v91;
              v94 = (int *)(v168 + 4 * v93);
              v95 = (_DWORD *)(v167 + 4 * v93);
              v96 = *v94 + *v95;
              v164 = *(_QWORD *)(v172 + 8LL * (*v92 + v177));
              minor1 = presolve_find_minor1(v165, *v94, v96, v166);
              if ( v96 <= minor1 )
                break;
              ++v91;
              ++v92;
              *(_QWORD *)(v169 + 8LL * minor1) = v164;
              if ( (int *)v174 == v91 )
                goto LABEL_96;
            }
            if ( (unsigned __int8)presolve_expand_major(v168, v169, (int)v166, v167, v194, v196, v93) )
              goto LABEL_148;
            ++v91;
            ++v92;
            v98 = *v95 + *v94;
            v166[v98] = v165;
            *(_QWORD *)(v169 + 8LL * v98) = v164;
            ++*v95;
          }
          while ( (int *)v174 != v91 );
LABEL_96:
          v12 = v172;
          v8 = v180;
          v64 = v202;
          v72 = *v188;
        }
        v99 = 4LL * v72;
        v100 = (_DWORD *)(v8 + v99);
        v101 = v72 + *v182;
        if ( v101 <= v72 || v204 == *v100 )
        {
          v102 = v72;
        }
        else
        {
          v102 = v72 + 1LL;
          v103 = v8 + v99 + 4;
          while ( 1 )
          {
            v100 = (_DWORD *)v103;
            if ( v8 + 4 * ((unsigned int)(*v182 - 1) + (__int64)v72) + 4 == v103 )
              break;
            v103 += 4;
            if ( v204 == *v100 )
              break;
            ++v102;
          }
        }
        v104 = *(_QWORD *)(v12 + 8LL * v101 - 8);
        *v100 = *(_DWORD *)(v8 + 4LL * v101 - 4);
        *(_QWORD *)(v12 + 8 * v102) = v104;
        --*v182;
      }
      ++v184;
    }
    while ( v199 > (int)v184 );
    v105 = *v190;
    v106 = 4LL * (int)v216;
    v107 = (int *)((char *)v220 + v106);
    v108 = 4LL * *v192;
    v109 = (int *)(v8 + v108);
    if ( *v190 && v107 != v109 )
    {
      v110 = v105 >> 3;
      if ( v105 >> 3 > 0 )
      {
        if ( ((unsigned __int64)v107 >= v8 + v108 + 32 || v109 >= (int *)((char *)v220 + v106 + 32)) && v110 > 1 )
        {
          v111 = 0;
          v112 = v110 - 1;
          do
          {
            v113 = _mm_loadu_si128((const __m128i *)&v109[v111 + 4]);
            *(__m128i *)&v107[v111] = _mm_loadu_si128((const __m128i *)&v109[v111]);
            *(__m128i *)&v107[v111 + 4] = v113;
            v111 += 8;
          }
          while ( 8 * (v112 + 1) != v111 );
        }
        else
        {
          v154 = (int *)((char *)v220 + v106);
          v155 = v109;
          v112 = v110 - 1;
          do
          {
            v156 = *v155;
            v154 += 8;
            v155 += 8;
            *(v154 - 8) = v156;
            *(v154 - 7) = *(v155 - 7);
            *(v154 - 6) = *(v155 - 6);
            *(v154 - 5) = *(v155 - 5);
            *(v154 - 4) = *(v155 - 4);
            *(v154 - 3) = *(v155 - 3);
            *(v154 - 2) = *(v155 - 2);
            *(v154 - 1) = *(v155 - 1);
          }
          while ( &v107[8 * v112 + 8] != v154 );
        }
        v114 = 32 * ((int)v112 + 1LL);
        v109 = (int *)((char *)v109 + v114);
        v107 = (int *)((char *)v107 + v114);
      }
      switch ( v105 % 8 )
      {
        case 1:
          goto LABEL_122;
        case 2:
          goto LABEL_121;
        case 3:
          goto LABEL_120;
        case 4:
          goto LABEL_119;
        case 5:
          goto LABEL_118;
        case 6:
          goto LABEL_117;
        case 7:
          v107[6] = v109[6];
LABEL_117:
          v107[5] = v109[5];
LABEL_118:
          v107[4] = v109[4];
LABEL_119:
          v107[3] = v109[3];
LABEL_120:
          v107[2] = v109[2];
LABEL_121:
          v107[1] = v109[1];
LABEL_122:
          *v107 = *v109;
          break;
        default:
          break;
      }
      v105 = *v190;
    }
    v216 += v105;
    if ( v64 < v200 )
    {
      v117 = (int *)(v8 + 4LL * v64);
      do
      {
        v118 = *v117;
        v119 = (_DWORD *)(v167 + 4 * v118);
        v120 = *(int *)(v168 + 4 * v118);
        v121 = v120 + *v119;
        v122 = &v166[v120];
        if ( (int)v120 >= v121 || v203 == *v122 )
        {
          v123 = *(int *)(v168 + 4 * v118);
        }
        else
        {
          v123 = v120 + 1;
          v124 = (__int64)&v166[v120 + 1];
          while ( 1 )
          {
            v122 = (int *)v124;
            if ( &v166[v120 + 1 + (unsigned int)(*v119 - 1)] == (int *)v124 )
              break;
            v124 += 4;
            if ( v203 == *v122 )
              break;
            ++v123;
          }
        }
        v125 = *(_QWORD *)(v169 + 8LL * v121 - 8);
        *v122 = v166[v121 - 1];
        *(_QWORD *)(v169 + 8 * v123) = v125;
        if ( (*v119)-- == 1 )
        {
          v127 = (int *)(v194 + 8 * v118);
          v128 = *v127;
          v129 = v127[1];
          if ( *v127 >= 0 )
            *(_DWORD *)(v194 + 8LL * v128 + 4) = v129;
          if ( (int)v129 >= 0 )
            *(_DWORD *)(v194 + 8 * v129) = v128;
          *(_QWORD *)v127 = 0xFC06BF56FC06BF56LL;
        }
        ++v117;
      }
      while ( v117 != (int *)(v8 + 4 * (v64 + (unsigned __int64)(unsigned int)(v200 - 1 - v64)) + 4) );
    }
    v130 = *(_DWORD *)(v194 + v221);
    v131 = *(int *)(v194 + v221 + 4);
    if ( v130 >= 0 )
      *(_DWORD *)(v194 + 8LL * v130 + 4) = v131;
    if ( (int)v131 >= 0 )
      *(_DWORD *)(v194 + 8 * v131) = v130;
    *(_QWORD *)(v194 + v221) = 0xFC06BF56FC06BF56LL;
    *v211 = 0;
    v132 = *(_DWORD *)(v193 + 8LL * v203);
    v133 = *(int *)(v193 + 8LL * v203 + 4);
    if ( v132 >= 0 )
      *(_DWORD *)(v193 + 8LL * v132 + 4) = v133;
    if ( (int)v133 >= 0 )
      *(_DWORD *)(v193 + 8 * v133) = v132;
    *(_QWORD *)(v193 + 8LL * v203) = 0xFC06BF56FC06BF56LL;
    *v190 = 0;
    *v208 = 0.0;
    *(_QWORD *)(v206 + 8LL * v203) = 0;
    v160 = v223;
LABEL_4:
    ++v197;
    a2 = (CoinPresolveMatrix *)((char *)a2 + 4);
    v13 = v197;
  }
  while ( v213 != v197 );
  if ( v222 )
  {
    v150 = v224;
    do
    {
      v151 = *v150++;
      *(_BYTE *)(*((_QWORD *)this + 50) + v151) &= ~4u;
    }
    while ( &v224[v222 - 1 + 1] != v150 );
  }
  if ( !v160 )
    goto LABEL_170;
  v157 = (void *)operator new[](80LL * v160);
  memcpy(v157, src, 80LL * v160);
  v158 = operator new(0x20u);
  *(_DWORD *)(v158 + 16) = v160;
  *(_QWORD *)(v158 + 24) = v157;
  *(_QWORD *)(v158 + 8) = a5;
  *(_QWORD *)v158 = &off_4D1FF8;
  v152 = drop_zero_coefficients_action::presolve(this, v220, (int *)v216, v158, v159);
LABEL_171:
  operator delete[](src);
  operator delete[](v185);
  operator delete[](v220);
  return v152;
}

