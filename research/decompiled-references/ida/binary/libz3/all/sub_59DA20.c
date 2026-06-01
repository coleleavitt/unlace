__int64 __fastcall sub_59DA20(__int64 a1, const void **a2, char *a3)
{
  __int64 v3; // r13
  _QWORD *v5; // rbx
  char *v6; // rbp
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  int v11; // r8d
  __int64 v12; // rax
  char *v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // r9
  char *v18; // r14
  char *v19; // r15
  void *v20; // r12
  int v22; // ebx
  int v23; // eax
  _DWORD *v24; // rdi
  int v25; // edx
  __int64 v26; // rax
  void *v27; // r13
  char *v28; // rcx
  char *v29; // rcx
  char *v30; // r15
  int v31; // ebp
  int v32; // eax
  _DWORD *v33; // rdi
  int v34; // edx
  __int64 v35; // rax
  int v36; // eax
  char *v37; // r15
  _DWORD *v38; // r14
  _QWORD *v39; // rax
  char *v40; // rbp
  size_t v41; // rbp
  __int64 v42; // r13
  _QWORD *v43; // rsi
  size_t v44; // rdx
  __int64 *v45; // rax
  size_t v46; // rdx
  int v47; // edx
  int v48; // eax
  unsigned int v49; // esi
  unsigned int v50; // eax
  int v51; // r9d
  __int64 v52; // rax
  __int64 *v53; // r11
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  char *v57; // r10
  char *v58; // rsi
  char *v59; // r13
  char *v60; // rbp
  _DWORD *v61; // r12
  int v62; // ebx
  __int64 v63; // r14
  int v64; // eax
  _DWORD *v65; // rdi
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 *v70; // r13
  char *v71; // r14
  __int64 v72; // rbx
  int v73; // r12d
  int v74; // eax
  _DWORD *v75; // rdi
  int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // r9d
  void *v80; // r14
  __int64 v81; // rax
  char *v82; // rbp
  __int64 v83; // r13
  unsigned int v84; // r15d
  size_t v85; // r14
  __int64 *v86; // rax
  char *v87; // rsi
  size_t v88; // rdx
  int v89; // r8d
  __int64 v90; // r9
  int v91; // r8d
  size_t v92; // rdx
  int v93; // eax
  int v94; // r8d
  void *v95; // r9
  int v96; // r14d
  __int64 v97; // rsi
  char *v98; // r15
  int v99; // eax
  unsigned int v100; // r9d
  char *v101; // rdx
  __int64 v102; // r9
  char *v103; // rdi
  char *v104; // r14
  int v105; // ecx
  _BYTE *v106; // rcx
  __int64 v107; // rsi
  _BYTE *v108; // r9
  char *v109; // rsi
  __int64 v110; // rbp
  __int64 v112; // rax
  int v113; // eax
  char *v114; // rcx
  __m128i v115; // xmm0
  __int64 v116; // rax
  char *v117; // rsi
  size_t v118; // rdx
  int v119; // eax
  _QWORD *v120; // rbp
  __m128i v121; // xmm0
  unsigned int v122; // r14d
  size_t v123; // r15
  __int64 v124; // r13
  _QWORD *v125; // rsi
  size_t v126; // rdx
  char *v127; // r15
  char *v128; // rdi
  size_t v129; // rdx
  int v130; // r8d
  __int64 v131; // rax
  __int64 *v132; // r14
  unsigned int v133; // edx
  __int64 *v134; // r15
  __int64 v135; // rdx
  __int64 *v136; // r9
  __int64 *v137; // r13
  char *v138; // r14
  _QWORD *v139; // r12
  int v140; // ebx
  int v141; // eax
  unsigned int *v142; // rdi
  __int64 v143; // rax
  int v144; // edx
  _BYTE *v145; // rdx
  __int64 v146; // rcx
  _BYTE *v147; // rsi
  char *v148; // rcx
  int v149; // r15d
  __int64 *v150; // r13
  int v151; // eax
  unsigned int *v152; // rdi
  __int64 v153; // rax
  _QWORD *v154; // rdi
  __int64 v155; // r15
  int v156; // r13d
  __int64 v157; // rax
  __m128i v158; // xmm0
  __int64 v159; // rax
  char *v160; // rsi
  size_t v161; // rdx
  unsigned int v162; // edx
  int v163; // esi
  int v164; // eax
  __int64 *v165; // rax
  size_t v166; // r12
  __int64 *v167; // rcx
  __int64 v168; // rdx
  __int64 *v169; // rdi
  __int64 *v170; // r12
  __int64 *v171; // r14
  int v172; // edx
  __int64 v173; // rax
  int v174; // edx
  __int64 v175; // rdx
  __int64 v176; // rsi
  __int64 v177; // rax
  int v178; // eax
  __int64 *v179; // rdx
  __int64 *v180; // rsi
  __int64 v181; // rdx
  __int64 v182; // r14
  __int64 *v183; // r10
  int v184; // edi
  __int64 v185; // rdx
  __int64 *v186; // rsi
  __int64 *v187; // rdx
  int v188; // esi
  __int64 v189; // rsi
  __int64 *v190; // r14
  __int64 *v191; // rbp
  __int64 *v192; // rbx
  __int64 v193; // rdi
  int v194; // esi
  int v195; // esi
  __int64 v196; // rsi
  int v197; // r14d
  _DWORD *v198; // rax
  __int64 v199; // rdx
  _DWORD *v200; // rdx
  __int64 v201; // r13
  _QWORD *v202; // rax
  void *v203; // rcx
  char *v204; // rdi
  __m128i v205; // xmm0
  _QWORD *v206; // rax
  _QWORD *v207; // rsi
  size_t v208; // rdx
  char *v209; // rax
  size_t v210; // r13
  _QWORD *v211; // rax
  _QWORD *v212; // rdx
  __int64 v213; // rdx
  char *v214; // rsi
  char *v215; // rcx
  char *v216; // r8
  char *v217; // rax
  int v218; // edi
  __int64 v219; // rdx
  char *v220; // rsi
  char *v221; // rdx
  __int64 v222; // rsi
  char *v223; // r13
  _QWORD *v224; // r12
  char *v225; // rbx
  __int64 v226; // rax
  void *v227; // rax
  unsigned int v228; // r15d
  unsigned int v229; // ecx
  unsigned int *v230; // rdx
  __int64 v231; // rdx
  int v232; // eax
  char v233; // al
  unsigned __int8 **v234; // rdi
  _QWORD *v235; // rax
  char **exception; // rbx
  __int64 *v237; // r15
  __int64 *v238; // rsi
  __int64 v239; // [rsp+8h] [rbp-B0h]
  __int64 *v240; // [rsp+10h] [rbp-A8h]
  void *v241; // [rsp+18h] [rbp-A0h]
  void **v242; // [rsp+20h] [rbp-98h]
  void *ptr; // [rsp+28h] [rbp-90h]
  char *v244; // [rsp+30h] [rbp-88h]
  __int64 *v245; // [rsp+38h] [rbp-80h]
  __int64 *v246; // [rsp+40h] [rbp-78h]
  char *v247; // [rsp+48h] [rbp-70h]
  char *v248; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *v249; // [rsp+68h] [rbp-50h]
  int v250; // [rsp+70h] [rbp-48h]

  v3 = -8;
  v5 = (_QWORD *)a1;
  v6 = (char *)*a2;
  v242 = (void **)a2;
  v249 = nullptr;
  if ( v6 )
  {
    v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
    v239 = v7.m128i_i64[0];
    v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
    v9 = *a2;
    v3 = (__int64)v8;
    v6 = (char *)(v8 + 1);
    *v8 = v7.m128i_i64[0];
    if ( v9 )
    {
      v10 = 8LL * *((unsigned int *)v9 - 1);
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
          v8[1] = *v9;
      }
      else
      {
        memmove(v8 + 1, v9, v10);
      }
    }
  }
  v248 = v6;
  v240 = (__int64 *)&v248;
  v11 = sub_57E150(&v248);
  v12 = *(unsigned int *)(a1 + 24);
  v13 = *(char **)(a1 + 16);
  v14 = v12 - 1;
  v15 = 24 * v12;
  v16 = 24LL * (v11 & v14);
  v17 = &v13[v16];
  if ( v16 == v15 )
  {
LABEL_18:
    if ( v13 == v17 )
      goto LABEL_31;
    v29 = v6;
    v30 = v17;
    v31 = v11;
    while ( 1 )
    {
      v32 = *((_DWORD *)v13 + 1);
      if ( v32 != 2 )
      {
        if ( !v32 )
          goto LABEL_30;
        goto LABEL_21;
      }
      if ( v31 == *(_DWORD *)v13 )
        break;
LABEL_21:
      v13 += 24;
      if ( v30 == v13 )
      {
LABEL_30:
        v6 = v29;
        goto LABEL_31;
      }
    }
    v33 = *((_DWORD **)v13 + 1);
    if ( v33 )
    {
      v34 = *(v33 - 1);
      if ( !v29 )
      {
        v35 = 0;
        goto LABEL_27;
      }
    }
    else
    {
      if ( !v29 )
      {
        v28 = v13;
        goto LABEL_80;
      }
      v34 = 0;
    }
    v35 = *((unsigned int *)v29 - 1);
LABEL_27:
    if ( (_DWORD)v35 == v34 )
    {
      v239 = (__int64)v29;
      v36 = memcmp(v33, v29, 8 * v35);
      v29 = (char *)v239;
      if ( !v36 )
      {
        sub_186B220((void *)v3);
        v28 = v13;
        goto LABEL_80;
      }
    }
    goto LABEL_21;
  }
  ptr = *(void **)(a1 + 16);
  v18 = &v13[v15];
  v19 = v17;
  v239 = (__int64)a3;
  v20 = (void *)v3;
  v22 = v11;
  v241 = v17;
  while ( 1 )
  {
    v23 = *((_DWORD *)v19 + 1);
    if ( v23 != 2 )
      break;
    if ( v22 == *(_DWORD *)v19 )
    {
      v24 = *((_DWORD **)v19 + 1);
      if ( v24 )
      {
        v25 = *(v24 - 1);
        if ( v6 )
          goto LABEL_13;
        v26 = 0;
      }
      else
      {
        if ( !v6 )
        {
          a3 = (char *)v239;
          v28 = v19;
          v5 = (_QWORD *)a1;
          goto LABEL_80;
        }
        v25 = 0;
LABEL_13:
        v26 = *((unsigned int *)v6 - 1);
      }
      if ( (_DWORD)v26 == v25 && !memcmp(v24, v6, 8 * v26) )
      {
        v5 = (_QWORD *)a1;
        v27 = v20;
        a3 = (char *)v239;
        v239 = (__int64)v19;
        sub_186B220(v27);
        v28 = v19;
        goto LABEL_80;
      }
    }
LABEL_8:
    v19 += 24;
    if ( v18 == v19 )
    {
      v11 = v22;
      v17 = (char *)v241;
      v5 = (_QWORD *)a1;
      v13 = (char *)ptr;
      v3 = (__int64)v20;
      a3 = (char *)v239;
      goto LABEL_18;
    }
  }
  if ( v23 )
    goto LABEL_8;
  v5 = (_QWORD *)a1;
  v3 = (__int64)v20;
  a3 = (char *)v239;
LABEL_31:
  if ( v6 )
    sub_186B220((void *)v3);
  v37 = nullptr;
  v38 = (_DWORD *)sub_186B270(0x18u);
  v39 = (_QWORD *)sub_186B270(0x100u);
  v38[4] = 0;
  *v39 = 0;
  v39[1] = 0;
  v39[4] = 0;
  v39[5] = 0;
  v39[8] = 0;
  v39[9] = 0;
  v39[12] = 0;
  v39[13] = 0;
  v39[16] = 0;
  v39[17] = 0;
  v39[20] = 0;
  v39[21] = 0;
  v39[24] = 0;
  v39[25] = 0;
  v39[28] = 0;
  v39[29] = 0;
  *(_QWORD *)v38 = v39;
  *((_QWORD *)v38 + 1) = 8;
  v40 = (char *)*v242;
  if ( *v242 )
  {
    v239 = *((_QWORD *)v40 - 1);
    v41 = 8LL * (unsigned int)_mm_cvtsi128_si32((__m128i)(unsigned __int64)v239) + 8;
    v42 = sub_186B270(v41);
    v37 = (char *)(v42 + 8);
    *(_QWORD *)v42 = v239;
    v43 = *v242;
    if ( *v242 )
    {
      v44 = 8LL * *((unsigned int *)v43 - 1);
      if ( v44 <= 8 )
      {
        if ( v44 == 8 )
          *(_QWORD *)(v42 + 8) = *v43;
      }
      else
      {
        memmove(v37, v43, v44);
      }
    }
    v45 = (__int64 *)sub_186B270(v41);
    v40 = (char *)(v45 + 1);
    v46 = 8LL * *(unsigned int *)(v42 + 4);
    *v45 = v239;
    if ( v46 <= 8 )
    {
      if ( v46 == 8 )
        v45[1] = *(_QWORD *)(v42 + 8);
    }
    else
    {
      memcpy(v45 + 1, v37, v46);
    }
  }
  v47 = *((_DWORD *)v5 + 6);
  v48 = *((_DWORD *)v5 + 8);
  v249 = v38;
  v49 = 2 * v47;
  v50 = 4 * (*((_DWORD *)v5 + 7) + v48);
  LODWORD(v241) = 2 * v47;
  if ( 3 * v47 < v50 )
  {
    v239 = v49;
    v210 = 24LL * v49;
    v211 = (_QWORD *)sub_186B270(v210);
    ptr = v211;
    if ( (_DWORD)v241 )
    {
      v212 = &v211[3 * v239];
      do
      {
        *v211 = 0;
        v211 += 3;
        *(v211 - 2) = 0;
      }
      while ( v211 != v212 );
    }
    v213 = *((unsigned int *)v5 + 6);
    v214 = (char *)v5[2];
    LODWORD(v239) = (_DWORD)v241 - 1;
    v215 = &v214[24 * (unsigned int)v213];
    v216 = (char *)ptr + v210;
    v217 = v214 + 8;
    if ( v214 == v215 )
    {
LABEL_283:
      if ( v215 )
      {
        if ( (_DWORD)v213 )
        {
          v244 = a3;
          v223 = v215;
          v224 = v5;
          v225 = v215;
          v239 = (__int64)&v215[24 * v213];
          do
          {
            while ( 1 )
            {
              v226 = *((_QWORD *)v223 + 1);
              if ( !v226 )
                break;
              v223 += 24;
              sub_186B220((void *)(v226 - 8));
              if ( (char *)v239 == v223 )
                goto LABEL_288;
            }
            v223 += 24;
          }
          while ( v223 != (char *)v239 );
LABEL_288:
          v215 = v225;
          v5 = v224;
          a3 = v244;
        }
        sub_186B220(v215);
      }
      v227 = ptr;
      *((_DWORD *)v5 + 8) = 0;
      v5[2] = v227;
      *((_DWORD *)v5 + 6) = (_DWORD)v241;
      goto LABEL_40;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v217 - 1) != 2 )
        goto LABEL_270;
      v218 = *((_DWORD *)v217 - 2);
      v219 = 24LL * (v218 & (unsigned int)v239);
      v220 = (char *)ptr + v219;
      if ( v210 != v219 )
        break;
LABEL_312:
      v221 = (char *)ptr;
      if ( ptr == v220 )
      {
LABEL_332:
        v246 = (__int64 *)v217;
        v245 = (__int64 *)v215;
        v244 = v216;
        sub_1872CE0("");
        sub_1873130(114, 213);
      }
      while ( *((_DWORD *)v221 + 1) )
      {
        v221 += 24;
        if ( v220 == v221 )
          goto LABEL_332;
      }
      *(_DWORD *)v221 = v218;
      *((_DWORD *)v221 + 1) = 2;
      if ( v217 == v221 + 8 )
        goto LABEL_281;
      v222 = *((_QWORD *)v221 + 1);
      if ( v222 )
        goto LABEL_279;
LABEL_280:
      *((_QWORD *)v221 + 1) = 0;
      *((_QWORD *)v221 + 1) = *(_QWORD *)v217;
      *(_QWORD *)v217 = 0;
LABEL_281:
      *((_QWORD *)v221 + 2) = *((_QWORD *)v217 + 1);
LABEL_270:
      if ( v215 == v217 + 16 )
      {
        v213 = *((unsigned int *)v5 + 6);
        v215 = (char *)v5[2];
        goto LABEL_283;
      }
      v217 += 24;
    }
    v221 = (char *)ptr + v219;
    while ( *((_DWORD *)v221 + 1) )
    {
      v221 += 24;
      if ( v216 == v221 )
        goto LABEL_312;
    }
    *(_DWORD *)v221 = v218;
    *((_DWORD *)v221 + 1) = 2;
    if ( v217 == v221 + 8 )
      goto LABEL_281;
    v222 = *((_QWORD *)v221 + 1);
    if ( !v222 )
      goto LABEL_280;
LABEL_279:
    v247 = v217;
    v246 = (__int64 *)v215;
    v245 = (__int64 *)v221;
    v244 = v216;
    sub_186B220((void *)(v222 - 8));
    v217 = v247;
    v215 = (char *)v246;
    v221 = (char *)v245;
    v216 = v244;
    goto LABEL_280;
  }
LABEL_40:
  v248 = v40;
  v51 = sub_57E150(v240);
  v52 = *((unsigned int *)v5 + 6);
  v53 = (__int64 *)v5[2];
  v54 = v52 - 1;
  v55 = 24 * v52;
  v56 = 24LL * (v51 & v54);
  v57 = (char *)&v53[(unsigned __int64)v56 / 8];
  if ( v56 == v55 )
  {
    v69 = 0;
LABEL_61:
    if ( v53 == (__int64 *)v57 )
    {
LABEL_255:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    ptr = v38;
    v70 = v53;
    v71 = v57;
    v239 = (__int64)v5;
    v72 = v69;
    v241 = a3;
    v73 = v51;
    while ( 1 )
    {
      v74 = *((_DWORD *)v70 + 1);
      if ( v74 == 2 )
        break;
      if ( !v74 )
      {
        v78 = v72;
        v79 = v73;
        v80 = ptr;
        v5 = (_QWORD *)v239;
        a3 = (char *)v241;
        if ( v78 )
          --*(_DWORD *)(v239 + 32);
        else
          v78 = (__int64)v70;
        v81 = *(_QWORD *)(v78 + 8);
        if ( v81 )
          goto LABEL_77;
        goto LABEL_78;
      }
      v72 = (__int64)v70;
LABEL_65:
      v70 += 3;
      if ( v71 == (char *)v70 )
        goto LABEL_255;
    }
    if ( v73 != *(_DWORD *)v70 )
      goto LABEL_65;
    v75 = (_DWORD *)v70[1];
    if ( v75 )
    {
      v76 = *(v75 - 1);
      if ( !v40 )
      {
        v77 = 0;
        goto LABEL_71;
      }
    }
    else
    {
      if ( !v40 )
      {
        v5 = (_QWORD *)v239;
        a3 = (char *)v241;
        v78 = (__int64)v70;
        goto LABEL_257;
      }
      v76 = 0;
    }
    v77 = *((unsigned int *)v40 - 1);
LABEL_71:
    if ( (_DWORD)v77 == v76 && !memcmp(v75, v40, 8 * v77) )
    {
      v5 = (_QWORD *)v239;
      a3 = (char *)v241;
      v68 = (__int64)v70;
      goto LABEL_256;
    }
    goto LABEL_65;
  }
  v239 = (__int64)v5;
  v58 = v40;
  v59 = (char *)&v53[(unsigned __int64)v56 / 8];
  v241 = a3;
  v60 = (char *)&v53[(unsigned __int64)v55 / 8];
  v61 = v38;
  v62 = v51;
  v244 = (char *)&v53[(unsigned __int64)v56 / 8];
  v63 = 0;
  v245 = v53;
  while ( 1 )
  {
    v64 = *((_DWORD *)v59 + 1);
    if ( v64 != 2 )
      break;
    if ( v62 == *(_DWORD *)v59 )
    {
      v65 = *((_DWORD **)v59 + 1);
      if ( v65 )
      {
        v66 = *(v65 - 1);
        if ( v58 )
          goto LABEL_49;
        v67 = 0;
      }
      else
      {
        if ( !v58 )
        {
          v5 = (_QWORD *)v239;
          a3 = (char *)v241;
          v78 = (__int64)v59;
          goto LABEL_257;
        }
        v66 = 0;
LABEL_49:
        v67 = *((unsigned int *)v58 - 1);
      }
      if ( (_DWORD)v67 == v66 )
      {
        ptr = v58;
        if ( !memcmp(v65, v58, 8 * v67) )
        {
          v5 = (_QWORD *)v239;
          a3 = (char *)v241;
          v40 = (char *)ptr;
          v68 = (__int64)v59;
LABEL_256:
          v239 = v68;
          sub_186B220(v40 - 8);
          v78 = v239;
          goto LABEL_257;
        }
      }
    }
LABEL_44:
    v59 += 24;
    if ( v60 == v59 )
    {
      v69 = v63;
      v51 = v62;
      v38 = v61;
      v57 = v244;
      v53 = v245;
      v5 = (_QWORD *)v239;
      v40 = v58;
      a3 = (char *)v241;
      goto LABEL_61;
    }
  }
  if ( v64 )
  {
    v63 = (__int64)v59;
    goto LABEL_44;
  }
  v78 = v63;
  v79 = v62;
  v80 = v61;
  v5 = (_QWORD *)v239;
  a3 = (char *)v241;
  v40 = v58;
  if ( v78 )
    --*(_DWORD *)(v239 + 32);
  else
    v78 = (__int64)v59;
  v81 = *(_QWORD *)(v78 + 8);
  if ( v81 )
  {
LABEL_77:
    LODWORD(v241) = v79;
    v239 = v78;
    sub_186B220((void *)(v81 - 8));
    v79 = (int)v241;
    v78 = v239;
  }
LABEL_78:
  *(_QWORD *)(v78 + 8) = v40;
  *(_QWORD *)(v78 + 16) = v80;
  *(_DWORD *)(v78 + 4) = 2;
  *(_DWORD *)v78 = v79;
  ++*((_DWORD *)v5 + 7);
LABEL_257:
  if ( v37 )
  {
    v239 = v78;
    sub_186B220(v37 - 8);
    v78 = v239;
  }
  v239 = v78;
  v201 = sub_186B270(0x18u);
  v202 = (_QWORD *)sub_186B270(0x100u);
  *(_DWORD *)(v201 + 16) = 0;
  v203 = (void *)v239;
  *v202 = 0;
  v202[2] = 0;
  v202[4] = 0;
  v202[6] = 0;
  v202[8] = 0;
  v202[10] = 0;
  v202[12] = 0;
  v202[14] = 0;
  v202[16] = 0;
  v202[18] = 0;
  v202[20] = 0;
  v202[22] = 0;
  v202[24] = 0;
  v202[26] = 0;
  v202[28] = 0;
  v202[30] = 0;
  *(_QWORD *)v201 = v202;
  *(_QWORD *)(v201 + 8) = 8;
  v204 = (char *)*v242;
  if ( *v242 )
  {
    v205 = _mm_loadl_epi64((const __m128i *)(v204 - 8));
    v241 = v203;
    v239 = v205.m128i_i64[0];
    v206 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v205) + 8);
    v203 = v241;
    v204 = (char *)(v206 + 1);
    v207 = *v242;
    *v206 = v205.m128i_i64[0];
    if ( v207 )
    {
      v208 = 8LL * *((unsigned int *)v207 - 1);
      if ( v208 <= 8 )
      {
        if ( v208 == 8 )
          v206[1] = *v207;
      }
      else
      {
        v239 = (__int64)v203;
        v209 = (char *)memmove(v204, v207, v208);
        v203 = (void *)v239;
        v204 = v209;
      }
    }
  }
  v248 = v204;
  v239 = (__int64)v203;
  v249 = (_DWORD *)v201;
  sub_59CD40((_DWORD *)v5 + 10, (char **)v240);
  v28 = (char *)v239;
  if ( v248 )
  {
    sub_186B220(v248 - 8);
    v28 = (char *)v239;
  }
LABEL_80:
  v82 = *(char **)a3;
  v83 = *((_QWORD *)v28 + 2);
  if ( *(_QWORD *)a3 )
  {
    v239 = *((_QWORD *)v82 - 1);
    v84 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)(unsigned __int64)v239, 229));
    v85 = (unsigned int)_mm_cvtsi128_si32((__m128i)(unsigned __int64)v239) + 8LL;
    v86 = (__int64 *)sub_186B270(v85);
    v241 = v86;
    v82 = (char *)(v86 + 1);
    *v86 = v239;
    v87 = *(char **)a3;
    if ( *(_QWORD *)a3 )
    {
      v88 = *((unsigned int *)v87 - 1);
      if ( v88 <= 1 )
      {
        if ( v88 == 1 )
          *((_BYTE *)v241 + 8) = *v87;
      }
      else
      {
        memmove(v86 + 1, v87, v88);
      }
    }
    v89 = *((_DWORD *)a3 + 2);
    if ( v84 )
    {
      LODWORD(ptr) = *((_DWORD *)a3 + 2);
      v90 = sub_186B270(v85);
      v91 = (int)ptr;
      *(_QWORD *)v90 = v239;
      v248 = (char *)(v90 + 8);
      v92 = *((unsigned int *)v241 + 1);
      if ( v92 <= 1 )
      {
        if ( v92 == 1 )
        {
          v233 = *((_BYTE *)v241 + 8);
          v234 = (unsigned __int8 **)v240;
          LODWORD(ptr) = v91;
          v239 = v90;
          *(_BYTE *)(v90 + 8) = v233;
          v232 = sub_5963C0(v234, v84);
          v95 = (void *)v239;
          v94 = (int)ptr;
        }
        else
        {
          ptr = (void *)v90;
          LODWORD(v239) = v91;
          v232 = sub_5963C0((unsigned __int8 **)v240, v84);
          v95 = ptr;
          v94 = v239;
        }
        v96 = v232;
      }
      else
      {
        ptr = (void *)v90;
        LODWORD(v239) = v91;
        memcpy((void *)(v90 + 8), v82, v92);
        v93 = sub_5963C0((unsigned __int8 **)v240, v84);
        v94 = v239;
        v95 = ptr;
        v96 = v93;
      }
      LODWORD(v239) = v94;
      sub_186B220(v95);
      v89 = v239;
    }
    else
    {
      v96 = 778;
    }
  }
  else
  {
    v241 = (void *)-8LL;
    v89 = *((_DWORD *)a3 + 2);
    v96 = 778;
  }
  v97 = *(unsigned int *)(v83 + 8);
  v98 = *(char **)v83;
  v99 = v89 ^ v96;
  v100 = v97 - 1;
  v97 *= 32;
  v101 = (char *)(*(_QWORD *)v83 + v97);
  v102 = 32LL * ((v89 ^ v96) & v100);
  v103 = (char *)(*(_QWORD *)v83 + v102);
  if ( v102 != v97 )
  {
    v104 = (char *)(*(_QWORD *)v83 + v102);
    do
    {
      v105 = *((_DWORD *)v104 + 1);
      if ( v105 == 2 )
      {
        if ( v99 == *(_DWORD *)v104 && v89 == *((_DWORD *)v104 + 4) )
        {
          v106 = *((_BYTE **)v104 + 1);
          if ( v106 )
          {
            v107 = *((unsigned int *)v106 - 1);
            if ( v82 )
            {
              if ( (_DWORD)v107 == *((_DWORD *)v82 - 1) )
              {
                v108 = &v106[v107];
                if ( v106 == &v106[v107] )
                {
                  v98 = v104;
                  goto LABEL_238;
                }
                v109 = v82;
                while ( *v106 == *v109 )
                {
                  ++v106;
                  ++v109;
                  if ( v108 == v106 )
                    goto LABEL_102;
                }
              }
            }
            else if ( !(_DWORD)v107 )
            {
              v98 = v104;
              goto LABEL_239;
            }
          }
          else
          {
            if ( !v82 )
              goto LABEL_103;
            if ( !*((_DWORD *)v82 - 1) )
              goto LABEL_102;
          }
        }
      }
      else if ( !v105 )
      {
        goto LABEL_105;
      }
      v104 += 32;
    }
    while ( v101 != v104 );
  }
  for ( ; v103 != v98; v98 += 32 )
  {
    v144 = *((_DWORD *)v98 + 1);
    if ( v144 == 2 )
    {
      if ( v99 == *(_DWORD *)v98 && v89 == *((_DWORD *)v98 + 4) )
      {
        v145 = *((_BYTE **)v98 + 1);
        if ( v145 )
        {
          v146 = *((unsigned int *)v145 - 1);
          if ( v82 )
          {
            if ( (_DWORD)v146 == *((_DWORD *)v82 - 1) )
            {
              v147 = &v145[v146];
              if ( v145 != &v145[v146] )
              {
                v148 = v82;
                do
                {
                  if ( *v145 != *v148 )
                    goto LABEL_137;
                  ++v145;
                  ++v148;
                }
                while ( v147 != v145 );
                v104 = v98;
LABEL_102:
                sub_186B220(v241);
LABEL_103:
                v110 = 4LL * *((unsigned int *)v104 + 6);
                return *(unsigned int *)(v5[1] + v110);
              }
LABEL_238:
              sub_186B220(v241);
LABEL_239:
              v104 = v98;
              goto LABEL_103;
            }
          }
          else if ( !(_DWORD)v146 )
          {
            goto LABEL_239;
          }
        }
        else
        {
          if ( !v82 )
            goto LABEL_239;
          if ( !*((_DWORD *)v82 - 1) )
            goto LABEL_238;
        }
      }
    }
    else if ( !v144 )
    {
      break;
    }
LABEL_137:
    ;
  }
LABEL_105:
  if ( v82 )
    sub_186B220(v241);
  LODWORD(v239) = *(_DWORD *)(v83 + 12);
  v112 = v5[1];
  if ( v112 )
    v113 = *(_DWORD *)(v112 - 4);
  else
    v113 = 0;
  if ( v113 == (_DWORD)v239 )
  {
    v197 = sub_4C2940(*(_QWORD *)(*v5 + 24LL), *v5);
    v198 = (_DWORD *)v5[1];
    if ( v198 )
    {
      v199 = (unsigned int)*(v198 - 1);
      if ( (_DWORD)v199 == *(v198 - 2) )
      {
        v228 = (unsigned int)(3 * v199 + 1) >> 1;
        v229 = 4 * v228 + 8;
        if ( 4 * (int)v199 + 8 >= v229 || (unsigned int)v199 >= v228 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v240, "Overflow encountered when expanding vector");
          v237 = v240;
          v238 = v240;
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v238);
          sub_233E40((__int64)v237);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v230 = (unsigned int *)sub_186B300(v198 - 2, v229);
        v198 = v230 + 2;
        *v230 = v228;
        v231 = v230[1];
        v5[1] = v198;
        v200 = &v198[v231];
      }
      else
      {
        v200 = &v198[v199];
      }
    }
    else
    {
      v235 = (_QWORD *)sub_186B270(0x10u);
      *v235 = 2;
      v198 = v235 + 1;
      v5[1] = v198;
      v200 = v198;
    }
    *v200 = v197;
    ++*(v198 - 1);
  }
  v114 = *(char **)a3;
  if ( *(_QWORD *)a3 )
  {
    v115 = _mm_loadl_epi64((const __m128i *)(v114 - 8));
    v241 = (void *)v115.m128i_i64[0];
    v116 = sub_186B270((unsigned int)_mm_cvtsi128_si32(v115) + 8LL);
    v117 = *(char **)a3;
    v114 = (char *)(v116 + 8);
    *(_QWORD *)v116 = v115.m128i_i64[0];
    if ( v117 )
    {
      v118 = *((unsigned int *)v117 - 1);
      if ( v118 <= 1 )
      {
        if ( v118 == 1 )
          *(_BYTE *)(v116 + 8) = *v117;
      }
      else
      {
        v114 = (char *)memmove((void *)(v116 + 8), v117, v118);
      }
    }
  }
  v119 = *((_DWORD *)a3 + 2);
  v248 = v114;
  LODWORD(v249) = v119;
  v250 = v239;
  sub_59D320((char **)v83, (__int64)v240);
  if ( v248 )
    sub_186B220(v248 - 8);
  v120 = *v242;
  if ( *v242 )
  {
    v121 = _mm_loadl_epi64((const __m128i *)(v120 - 1));
    v122 = *((_DWORD *)v120 - 1);
    LODWORD(v241) = _mm_cvtsi128_si32(v121);
    ptr = (void *)v121.m128i_i64[0];
    v123 = 8LL * (unsigned int)v241 + 8;
    v124 = sub_186B270(v123);
    v120 = (_QWORD *)(v124 + 8);
    *(_QWORD *)v124 = v121.m128i_i64[0];
    v125 = *v242;
    if ( *v242 )
    {
      v126 = 8LL * *((unsigned int *)v125 - 1);
      if ( v126 <= 8 )
      {
        if ( v126 == 8 )
          *(_QWORD *)(v124 + 8) = *v125;
      }
      else
      {
        memmove(v120, v125, v126);
      }
    }
    v127 = (char *)sub_186B270(v123);
    v128 = v127 + 8;
    v129 = 8LL * *(unsigned int *)(v124 + 4);
    *(_QWORD *)v127 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v241), _mm_cvtsi32_si128(v122)).m128i_u64[0];
    if ( v129 <= 8 )
    {
      if ( v129 == 8 )
        *((_QWORD *)v127 + 1) = *(_QWORD *)(v124 + 8);
    }
    else
    {
      v128 = (char *)memcpy(v128, v120, v129);
    }
    v248 = v128;
    LODWORD(v240) = sub_5966B0((__int64)v240, v122);
    sub_186B220(v127);
    v130 = (int)v240;
  }
  else
  {
    v248 = nullptr;
    v130 = sub_5966B0((__int64)v240, 0);
  }
  v131 = *((unsigned int *)v5 + 12);
  v132 = (__int64 *)v5[5];
  v133 = v131 - 1;
  v131 *= 24;
  v134 = (__int64 *)((char *)v132 + v131);
  v135 = 24LL * (v130 & v133);
  v136 = &v132[(unsigned __int64)v135 / 8];
  if ( v135 == v131 )
  {
LABEL_152:
    if ( v132 == v136 )
      goto LABEL_164;
    v149 = v130;
    v150 = v136;
    while ( 1 )
    {
      v151 = *((_DWORD *)v132 + 1);
      if ( v151 != 2 )
      {
        if ( !v151 )
          goto LABEL_164;
        goto LABEL_155;
      }
      if ( *(_DWORD *)v132 == v149 )
      {
        v152 = (unsigned int *)v132[1];
        if ( v152 )
        {
          v153 = *(v152 - 1);
          if ( !v120 )
          {
            if ( !(_DWORD)v153 )
              goto LABEL_165;
            goto LABEL_155;
          }
        }
        else
        {
          if ( !v120 )
          {
            v120 = v132;
            goto LABEL_166;
          }
          v153 = 0;
        }
        if ( (_DWORD)v153 == *((_DWORD *)v120 - 1) && !memcmp(v152, v120, 8 * v153) )
          goto LABEL_165;
      }
LABEL_155:
      v132 += 3;
      if ( v150 == v132 )
        goto LABEL_164;
    }
  }
  v240 = (__int64 *)v5[5];
  v137 = &v132[(unsigned __int64)v135 / 8];
  v138 = a3;
  v139 = v5;
  v241 = v136;
  v140 = v130;
  while ( 1 )
  {
    v141 = *((_DWORD *)v137 + 1);
    if ( v141 != 2 )
      break;
    if ( *(_DWORD *)v137 == v140 )
    {
      v142 = (unsigned int *)v137[1];
      if ( !v142 )
      {
        if ( !v120 )
        {
          v5 = v139;
          v120 = v137;
          a3 = v138;
          goto LABEL_166;
        }
        v143 = 0;
LABEL_131:
        if ( *((_DWORD *)v120 - 1) == (_DWORD)v143 && !memcmp(v142, v120, 8 * v143) )
        {
LABEL_133:
          v5 = v139;
          a3 = v138;
          v132 = v137;
          goto LABEL_165;
        }
        goto LABEL_126;
      }
      v143 = *(v142 - 1);
      if ( v120 )
        goto LABEL_131;
      if ( !(_DWORD)v143 )
        goto LABEL_133;
    }
LABEL_126:
    v137 += 3;
    if ( v134 == v137 )
    {
      v130 = v140;
      v136 = (__int64 *)v241;
      v5 = v139;
      a3 = v138;
      v132 = v240;
      goto LABEL_152;
    }
  }
  if ( v141 )
    goto LABEL_126;
  v5 = v139;
  a3 = v138;
LABEL_164:
  v132 = nullptr;
  if ( v120 )
  {
LABEL_165:
    v154 = v120 - 1;
    v120 = v132;
    sub_186B220(v154);
  }
LABEL_166:
  v155 = v120[2];
  v156 = *(_DWORD *)(v5[1] + 4LL * (unsigned int)v239);
  v110 = 4LL * (unsigned int)v239;
  v157 = *(_QWORD *)a3;
  v239 = v157;
  if ( v157 )
  {
    v158 = _mm_loadl_epi64((const __m128i *)(v157 - 8));
    v239 = v158.m128i_i64[0];
    v159 = sub_186B270((unsigned int)_mm_cvtsi128_si32(v158) + 8LL);
    v158.m128i_i64[0] = v239;
    v160 = *(char **)a3;
    v239 = v159 + 8;
    *(_QWORD *)v159 = v158.m128i_i64[0];
    if ( v160 )
    {
      v161 = *((unsigned int *)v160 - 1);
      if ( v161 <= 1 )
      {
        if ( v161 == 1 )
          *(_BYTE *)(v159 + 8) = *v160;
      }
      else
      {
        memmove((void *)(v159 + 8), v160, v161);
      }
    }
  }
  v162 = *(_DWORD *)(v155 + 8);
  v163 = *(_DWORD *)(v155 + 16);
  LODWORD(v244) = *((_DWORD *)a3 + 2);
  v164 = *(_DWORD *)(v155 + 12);
  LODWORD(v242) = 2 * v162;
  if ( 3 * v162 >= 4 * (v163 + v164) )
  {
    LODWORD(v241) = v162 - 1;
    v165 = *(__int64 **)v155;
    v166 = 32LL * v162;
    v167 = (__int64 *)(*(_QWORD *)v155 + v166);
    goto LABEL_172;
  }
  v166 = 32LL * (unsigned int)v242;
  v165 = (__int64 *)sub_186B270(v166);
  v179 = v165;
  if ( (_DWORD)v242 )
  {
    do
    {
      *v179 = 0;
      v179 += 4;
      *(v179 - 2) = 0;
    }
    while ( v179 != &v165[v166 / 8] );
  }
  v180 = *(__int64 **)v155;
  v167 = &v165[v166 / 8];
  v181 = *(unsigned int *)(v155 + 8);
  v182 = *(_QWORD *)v155 + 16LL;
  v183 = (__int64 *)(*(_QWORD *)v155 + 32 * v181);
  LODWORD(v241) = (_DWORD)v242 - 1;
  if ( v180 != v183 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v182 - 12) != 2 )
        goto LABEL_206;
      v184 = *(_DWORD *)(v182 - 16);
      v185 = 32LL * (v184 & (unsigned int)v241);
      v186 = &v165[(unsigned __int64)v185 / 8];
      if ( v166 == v185 )
      {
LABEL_240:
        if ( v165 == v186 )
        {
LABEL_326:
          v245 = v167;
          ptr = v183;
          v240 = v165;
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v187 = v165;
        while ( *((_DWORD *)v187 + 1) )
        {
          v187 += 4;
          if ( v186 == v187 )
            goto LABEL_326;
        }
        *(_DWORD *)v187 = v184;
        v195 = *(_DWORD *)(v182 - 8);
        *((_DWORD *)v187 + 1) = 2;
        *((_DWORD *)v187 + 2) = v195;
        if ( (__int64 *)v182 == v187 + 2 )
          goto LABEL_217;
        v196 = v187[2];
        if ( v196 )
        {
          v246 = v167;
          v245 = v183;
          ptr = v165;
          v240 = v187;
          sub_186B220((void *)(v196 - 8));
          v167 = v246;
          v183 = v245;
          v165 = (__int64 *)ptr;
          v187 = v240;
        }
      }
      else
      {
        v187 = &v165[(unsigned __int64)v185 / 8];
        while ( *((_DWORD *)v187 + 1) )
        {
          v187 += 4;
          if ( v167 == v187 )
            goto LABEL_240;
        }
        *(_DWORD *)v187 = v184;
        v188 = *(_DWORD *)(v182 - 8);
        *((_DWORD *)v187 + 1) = 2;
        *((_DWORD *)v187 + 2) = v188;
        if ( (__int64 *)v182 == v187 + 2 )
          goto LABEL_217;
        v189 = v187[2];
        if ( v189 )
        {
          v246 = v167;
          v245 = v183;
          ptr = v187;
          v240 = v165;
          sub_186B220((void *)(v189 - 8));
          v167 = v246;
          v183 = v245;
          v187 = (__int64 *)ptr;
          v165 = v240;
        }
      }
      v187[2] = 0;
      v187[2] = *(_QWORD *)v182;
      *(_QWORD *)v182 = 0;
LABEL_217:
      *((_DWORD *)v187 + 6) = *(_DWORD *)(v182 + 8);
LABEL_206:
      if ( v183 == (__int64 *)(v182 + 16) )
      {
        v181 = *(unsigned int *)(v155 + 8);
        v183 = *(__int64 **)v155;
        break;
      }
      v182 += 32;
    }
  }
  if ( v183 )
  {
    if ( (_DWORD)v181 )
    {
      v245 = (__int64 *)v110;
      v190 = v183;
      v191 = v183;
      v246 = v5;
      v192 = v165;
      v240 = &v183[4 * v181];
      do
      {
        while ( 1 )
        {
          v193 = v190[2];
          if ( !v193 )
            break;
          ptr = v167;
          v190 += 4;
          sub_186B220((void *)(v193 - 8));
          v167 = (__int64 *)ptr;
          if ( v240 == v190 )
            goto LABEL_224;
        }
        v190 += 4;
      }
      while ( v190 != v240 );
LABEL_224:
      v165 = v192;
      v183 = v191;
      v5 = v246;
      v110 = (__int64)v245;
    }
    ptr = v167;
    v240 = v165;
    sub_186B220(v183);
    v165 = v240;
    v167 = (__int64 *)ptr;
  }
  v194 = (int)v242;
  *(_QWORD *)v155 = v165;
  *(_DWORD *)(v155 + 16) = 0;
  *(_DWORD *)(v155 + 8) = v194;
  v163 = 0;
LABEL_172:
  v168 = 32LL * (v156 & (unsigned int)v241);
  v169 = &v165[(unsigned __int64)v168 / 8];
  if ( v168 == v166 )
  {
    v171 = nullptr;
    while ( 1 )
    {
LABEL_186:
      if ( v169 == v165 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v174 = *((_DWORD *)v165 + 1);
      if ( v174 == 2 )
      {
        if ( v156 == *(_DWORD *)v165 && v156 == *((_DWORD *)v165 + 2) )
        {
          v175 = v165[2];
          if ( v175 )
          {
            v240 = v165;
            sub_186B220((void *)(v175 - 8));
            v165 = v240;
          }
          v176 = v239;
          *((_DWORD *)v165 + 1) = 2;
          v165[2] = v176;
          *((_DWORD *)v165 + 6) = (_DWORD)v244;
          return *(unsigned int *)(v5[1] + v110);
        }
      }
      else
      {
        if ( !v174 )
        {
          if ( v171 )
            *(_DWORD *)(v155 + 16) = v163 - 1;
          else
            v171 = v165;
          v177 = v171[2];
          *((_DWORD *)v171 + 2) = v156;
          if ( v177 )
            goto LABEL_200;
          goto LABEL_201;
        }
        v171 = v165;
      }
      v165 += 4;
    }
  }
  v170 = &v165[(unsigned __int64)v168 / 8];
  v171 = nullptr;
  while ( 2 )
  {
    v172 = *((_DWORD *)v170 + 1);
    if ( v172 == 2 )
    {
      if ( v156 == *(_DWORD *)v170 && v156 == *((_DWORD *)v170 + 2) )
      {
        v173 = v170[2];
        if ( v173 )
          sub_186B220((void *)(v173 - 8));
        *((_DWORD *)v170 + 1) = 2;
        v170[2] = v239;
        *((_DWORD *)v170 + 6) = (_DWORD)v244;
        return *(unsigned int *)(v5[1] + v110);
      }
      goto LABEL_176;
    }
    if ( v172 )
    {
      v171 = v170;
LABEL_176:
      v170 += 4;
      if ( v170 == v167 )
        goto LABEL_186;
      continue;
    }
    break;
  }
  if ( v171 )
    *(_DWORD *)(v155 + 16) = v163 - 1;
  else
    v171 = v170;
  v177 = v171[2];
  *((_DWORD *)v171 + 2) = v156;
  if ( !v177 )
    goto LABEL_201;
LABEL_200:
  sub_186B220((void *)(v177 - 8));
LABEL_201:
  v171[2] = v239;
  v178 = (int)v244;
  *((_DWORD *)v171 + 1) = 2;
  *((_DWORD *)v171 + 6) = v178;
  *(_DWORD *)v171 = v156;
  ++*(_DWORD *)(v155 + 12);
  return *(unsigned int *)(v5[1] + v110);
}

