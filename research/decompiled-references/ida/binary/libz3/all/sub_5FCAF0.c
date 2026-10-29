_BOOL8 __fastcall sub_5FCAF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  size_t ***v4; // rax
  __int64 v6; // rdx
  size_t ***v7; // rbx
  __int64 v8; // r12
  size_t *v9; // rax
  size_t *v10; // rdx
  size_t *v11; // rcx
  unsigned int v12; // eax
  int v13; // esi
  __m128i *v14; // rbp
  int v15; // ecx
  size_t v16; // r14
  __m128i *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __m128i *v20; // rdi
  __m128i *v21; // rdx
  size_t *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i *v25; // rax
  int v26; // edx
  __m128i *v27; // r10
  const __m128i *v28; // r13
  __m128i *v29; // r8
  __int64 v30; // rax
  __m128i *v31; // rdx
  __m128i *v32; // rax
  __m128i v33; // xmm0
  unsigned int v34; // esi
  int v35; // ecx
  __m128i *v36; // rbp
  int v37; // r8d
  size_t v38; // r14
  __m128i *v39; // r9
  __int64 v40; // r8
  __m128i *v41; // rdi
  __m128i *v42; // rdx
  size_t *v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rdx
  __m128i *v46; // rax
  int v47; // edx
  __m128i *v48; // r10
  const __m128i *v49; // r13
  __m128i *v50; // rcx
  __int64 v51; // rax
  __m128i *v52; // rdx
  __m128i *v53; // rax
  __m128i v54; // xmm0
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 *v57; // r13
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r13
  char v61; // r15
  unsigned int v62; // r9d
  int v63; // r11d
  __m128i *v64; // rbp
  int v65; // r10d
  __int64 v66; // r8
  __m128i *v67; // rbx
  unsigned int v68; // ecx
  __int64 v69; // rax
  __m128i *v70; // rdi
  __m128i *v71; // rax
  __int64 *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rbp
  __int64 v80; // rax
  __int64 v81; // r13
  char v82; // dl
  unsigned int v83; // eax
  int v84; // edi
  __m128i *v85; // rbx
  int v86; // r10d
  __int64 v87; // r8
  __int64 *v88; // r12
  int v89; // ecx
  __int64 v90; // r10
  __m128i *v91; // r11
  __m128i *v92; // rax
  __int64 *v93; // r8
  __int64 v94; // rsi
  __int64 v95; // rax
  unsigned int v96; // r11d
  __int64 v97; // r9
  int v98; // edx
  unsigned int v99; // r10d
  __int64 *v100; // rbx
  __int64 v101; // r9
  __int64 v102; // r10
  __int64 *v103; // rbp
  __int64 *v104; // rdi
  __int64 *v105; // rax
  __int64 *v106; // r8
  __int64 v107; // rsi
  __int64 v108; // rax
  __m128i *v109; // rax
  int v110; // edx
  __m128i *v111; // rcx
  __m128i *v112; // r11
  __m128i *v113; // rdi
  const __m128i *v114; // rbx
  __int64 v115; // rdx
  __m128i *v116; // rsi
  __m128i *v117; // rdx
  __m128i v118; // xmm0
  int v119; // edi
  unsigned int v120; // esi
  int v121; // ecx
  __int64 v122; // r10
  __m128i *v123; // rsi
  __m128i *i; // rax
  size_t *v125; // r13
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 *v129; // rax
  int v130; // r8d
  __int64 v131; // r9
  char *v132; // rcx
  unsigned int v133; // r10d
  char *v134; // r11
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // r14
  char *v138; // r12
  __int64 *v139; // r13
  __int64 v140; // r11
  char *v141; // rbx
  __int64 v142; // rax
  __int64 *v143; // rdx
  __int64 *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r10
  __m128i *v147; // rax
  int v148; // esi
  __m128i *v149; // rcx
  const __m128i *v150; // r13
  __m128i *v151; // rdi
  __int64 v152; // rdx
  __m128i *v153; // rsi
  __m128i *v154; // rdx
  __m128i v155; // xmm0
  int v156; // edx
  int v157; // r11d
  unsigned int v158; // r13d
  __m128i *v159; // rax
  size_t *v160; // r8
  __int64 v161; // rdx
  __int64 v162; // rax
  __m128i *v163; // rax
  __int64 v164; // r8
  __m128i *v165; // rcx
  __m128i *v166; // r9
  unsigned int v167; // r10d
  __m128i *v168; // r11
  const __m128i *v169; // rbx
  __int64 v170; // rax
  __m128i *v171; // rdx
  __m128i *v172; // rax
  __m128i v173; // xmm0
  __int64 v174; // r10
  int v175; // eax
  __int64 v176; // rax
  int v177; // esi
  size_t v178; // r15
  unsigned int v179; // ebp
  unsigned int v180; // r8d
  size_t *v181; // r13
  size_t *v182; // r14
  int v183; // ecx
  __int64 v184; // rax
  size_t *v185; // rdi
  size_t *v186; // rax
  size_t *v187; // r8
  size_t v188; // rdx
  size_t v189; // rax
  __m128i *v190; // rax
  int v191; // esi
  __m128i *v192; // rcx
  const __m128i *v193; // r15
  __m128i *v194; // r11
  __int64 v195; // rdx
  __m128i *v196; // rsi
  __m128i *v197; // rdx
  __m128i v198; // xmm0
  __int64 v199; // rax
  int v200; // edx
  unsigned int v201; // r12d
  __int64 *v202; // r15
  size_t v203; // rbx
  unsigned int v204; // r8d
  __int64 *v205; // r10
  __int64 v206; // rax
  __int64 *v207; // rdi
  __int64 *v208; // rax
  __int64 *v209; // r8
  __int64 v210; // rsi
  __int64 v211; // rax
  size_t *v212; // rax
  char *v213; // rax
  __int64 v214; // rdx
  char *v215; // rcx
  unsigned int v216; // r9d
  char *v217; // rbp
  char *v218; // rbx
  __int64 v219; // rdx
  size_t *v220; // rax
  size_t *v221; // rdx
  size_t v222; // rax
  __int64 *v223; // rax
  char *v224; // rcx
  char *v225; // r11
  char *v226; // rbx
  __int64 v227; // rax
  __int64 *v228; // rdx
  __int64 *v229; // rax
  __int64 v230; // rdx
  size_t v231; // r15
  int v232; // [rsp+8h] [rbp-C0h]
  int v233; // [rsp+8h] [rbp-C0h]
  int v234; // [rsp+8h] [rbp-C0h]
  size_t v235; // [rsp+8h] [rbp-C0h]
  size_t v236; // [rsp+8h] [rbp-C0h]
  __int64 v237; // [rsp+8h] [rbp-C0h]
  __int64 *v239; // [rsp+18h] [rbp-B0h]
  __int64 *v240; // [rsp+18h] [rbp-B0h]
  __int64 v241; // [rsp+18h] [rbp-B0h]
  bool v242; // [rsp+18h] [rbp-B0h]
  unsigned int v243; // [rsp+18h] [rbp-B0h]
  int v244; // [rsp+20h] [rbp-A8h]
  bool v245; // [rsp+20h] [rbp-A8h]
  __int64 v246; // [rsp+20h] [rbp-A8h]
  unsigned int v247; // [rsp+20h] [rbp-A8h]
  int v248; // [rsp+20h] [rbp-A8h]
  int v249; // [rsp+28h] [rbp-A0h]
  int v250; // [rsp+28h] [rbp-A0h]
  __int64 v251; // [rsp+28h] [rbp-A0h]
  __int64 n; // [rsp+30h] [rbp-98h]
  unsigned int nd; // [rsp+30h] [rbp-98h]
  __int64 na; // [rsp+30h] [rbp-98h]
  unsigned int ne; // [rsp+30h] [rbp-98h]
  int nb; // [rsp+30h] [rbp-98h]
  __int64 nc; // [rsp+30h] [rbp-98h]
  char nf; // [rsp+30h] [rbp-98h]
  unsigned int ng; // [rsp+30h] [rbp-98h]
  int v260; // [rsp+38h] [rbp-90h]
  int v261; // [rsp+38h] [rbp-90h]
  __int64 v262; // [rsp+38h] [rbp-90h]
  int v263; // [rsp+38h] [rbp-90h]
  int v264; // [rsp+38h] [rbp-90h]
  int v265; // [rsp+38h] [rbp-90h]
  __int64 *v266; // [rsp+38h] [rbp-90h]
  int v267; // [rsp+40h] [rbp-88h]
  __int64 v268; // [rsp+40h] [rbp-88h]
  int v269; // [rsp+40h] [rbp-88h]
  unsigned int v270; // [rsp+40h] [rbp-88h]
  __int64 v271; // [rsp+40h] [rbp-88h]
  char v272; // [rsp+40h] [rbp-88h]
  __int64 v273; // [rsp+40h] [rbp-88h]
  int v274; // [rsp+48h] [rbp-80h]
  bool v275; // [rsp+60h] [rbp-68h]
  __int64 *v276; // [rsp+68h] [rbp-60h]
  __int64 *v277; // [rsp+70h] [rbp-58h]
  size_t ***v278; // [rsp+78h] [rbp-50h]
  size_t ***v279; // [rsp+80h] [rbp-48h]
  __int64 v280; // [rsp+88h] [rbp-40h]

  v3 = a1;
  v4 = *(size_t ****)(*(_QWORD *)(a3 + 144) + 8LL);
  if ( v4 )
  {
    v6 = *((unsigned int *)v4 - 1);
    v275 = 0;
    if ( v4 == &v4[v6] )
      goto LABEL_122;
    v279 = &v4[v6];
    v7 = v4;
    v8 = a1;
    v280 = a3;
    while ( 1 )
    {
      v9 = **v7;
      v10 = &v9[*((unsigned int *)*v7 + 2)];
      if ( v9 == v10 )
      {
        v231 = *v9;
      }
      else
      {
        do
        {
          v231 = *v9;
          v11 = v9;
          if ( *v9 > 1 )
            goto LABEL_8;
          ++v9;
        }
        while ( v10 != v9 );
        v231 = v11[1];
      }
LABEL_8:
      v12 = *(_DWORD *)(v8 + 152);
      v13 = *(_DWORD *)(v8 + 160);
      if ( 3 * v12 < 4 * (v13 + *(_DWORD *)(v8 + 156)) )
      {
        v232 = 2 * v12;
        v16 = 32LL * v12;
        v25 = (__m128i *)sub_186B270(v16);
        v26 = v232;
        v14 = v25;
        v27 = &v25[v16 / 0x10];
        if ( v232 )
        {
          do
          {
            v25->m128i_i64[0] = 0;
            ++v25;
            v25[-1].m128i_i32[2] = 0;
          }
          while ( v25 != v27 );
        }
        v28 = *(const __m128i **)(v8 + 144);
        v15 = v232 - 1;
        v17 = v27;
        v29 = (__m128i *)&v28[*(unsigned int *)(v8 + 152)];
        if ( v28 != v29 )
        {
          do
          {
            while ( v28->m128i_i64[0] <= 1uLL )
            {
              if ( v29 == ++v28 )
                goto LABEL_37;
            }
            v30 = 16LL * (*(_DWORD *)(v28->m128i_i64[0] + 12) & (unsigned int)(v232 - 1));
            v31 = &v14[(unsigned __int64)v30 / 0x10];
            if ( v16 == v30 )
            {
LABEL_41:
              if ( v14 == v31 )
              {
LABEL_412:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v32 = v14;
              while ( v32->m128i_i64[0] )
              {
                if ( v31 == ++v32 )
                  goto LABEL_412;
              }
            }
            else
            {
              v32 = &v14[(unsigned __int64)v30 / 0x10];
              while ( v32->m128i_i64[0] )
              {
                if ( v27 == ++v32 )
                  goto LABEL_41;
              }
            }
            v33 = _mm_loadu_si128(v28++);
            *v32 = v33;
          }
          while ( v29 != v28 );
LABEL_37:
          v29 = *(__m128i **)(v8 + 144);
          v15 = v232 - 1;
          v26 = v232;
        }
        if ( v29 )
        {
          v244 = v26;
          v239 = (__int64 *)v27;
          v233 = v15;
          sub_186B220(v29);
          v26 = v244;
          v17 = (__m128i *)v239;
          v15 = v233;
        }
        *(_QWORD *)(v8 + 144) = v14;
        v13 = 0;
        *(_DWORD *)(v8 + 152) = v26;
        *(_DWORD *)(v8 + 160) = 0;
      }
      else
      {
        v14 = *(__m128i **)(v8 + 144);
        v15 = v12 - 1;
        v16 = 16LL * v12;
        v17 = &v14[v16 / 0x10];
      }
      v18 = *(_DWORD *)(v231 + 12);
      v19 = 16LL * (v18 & (unsigned int)v15);
      v20 = &v14[(unsigned __int64)v19 / 0x10];
      if ( v19 != v16 )
      {
        v21 = &v14[(unsigned __int64)v19 / 0x10];
        v22 = nullptr;
        while ( 1 )
        {
          v23 = v21->m128i_i64[0];
          if ( v21->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v23 + 12) == v18 && v23 == v231 )
            {
              v22 = (size_t *)v21;
              goto LABEL_49;
            }
          }
          else
          {
            if ( !v23 )
            {
              if ( v22 )
                goto LABEL_47;
              v22 = (size_t *)v21;
              goto LABEL_48;
            }
            v22 = (size_t *)v21;
          }
          if ( ++v21 == v17 )
            goto LABEL_21;
        }
      }
      v22 = nullptr;
      while ( 1 )
      {
LABEL_21:
        if ( v20 == v14 )
          goto LABEL_113;
        v24 = v14->m128i_i64[0];
        if ( v14->m128i_i64[0] > 1uLL )
          break;
        if ( !v24 )
        {
          if ( v22 )
LABEL_47:
            *(_DWORD *)(v8 + 160) = v13 - 1;
          else
            v22 = (size_t *)v14;
LABEL_48:
          *v22 = v231;
          *((_DWORD *)v22 + 2) = 0;
          ++*(_DWORD *)(v8 + 156);
          goto LABEL_49;
        }
        v22 = (size_t *)v14;
LABEL_20:
        ++v14;
      }
      if ( *(_DWORD *)(v24 + 12) != v18 || v24 != v231 )
        goto LABEL_20;
      v22 = (size_t *)v14;
LABEL_49:
      v34 = *(_DWORD *)(v8 + 200);
      v35 = *(_DWORD *)(v8 + 208);
      v245 = *((_DWORD *)v22 + 2) > 1;
      if ( 3 * v34 < 4 * (v35 + *(_DWORD *)(v8 + 204)) )
      {
        v38 = 32LL * v34;
        v46 = (__m128i *)sub_186B270(v38);
        v47 = 2 * v34;
        v36 = v46;
        v48 = &v46[v38 / 0x10];
        if ( 2 * v34 )
        {
          do
          {
            v46->m128i_i64[0] = 0;
            ++v46;
            v46[-1].m128i_i32[2] = 0;
          }
          while ( v46 != v48 );
        }
        v49 = *(const __m128i **)(v8 + 192);
        v37 = v47 - 1;
        v39 = v48;
        v50 = (__m128i *)&v49[*(unsigned int *)(v8 + 200)];
        if ( v49 != v50 )
        {
          do
          {
            while ( v49->m128i_i64[0] <= 1uLL )
            {
              if ( v50 == ++v49 )
                goto LABEL_77;
            }
            v51 = 16LL * (*(_DWORD *)(v49->m128i_i64[0] + 12) & (unsigned int)v37);
            v52 = &v36[(unsigned __int64)v51 / 0x10];
            if ( v38 == v51 )
            {
LABEL_81:
              if ( v36 == v52 )
              {
LABEL_411:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v53 = v36;
              while ( v53->m128i_i64[0] )
              {
                if ( v52 == ++v53 )
                  goto LABEL_411;
              }
            }
            else
            {
              v53 = &v36[(unsigned __int64)v51 / 0x10];
              while ( v53->m128i_i64[0] )
              {
                if ( v48 == ++v53 )
                  goto LABEL_81;
              }
            }
            v54 = _mm_loadu_si128(v49++);
            *v53 = v54;
          }
          while ( v50 != v49 );
LABEL_77:
          v50 = *(__m128i **)(v8 + 192);
          v47 = 2 * v34;
        }
        if ( v50 )
        {
          v249 = v47;
          v240 = (__int64 *)v48;
          v234 = v37;
          sub_186B220(v50);
          v47 = v249;
          v39 = (__m128i *)v240;
          v37 = v234;
        }
        *(_QWORD *)(v8 + 192) = v36;
        v18 = *(_DWORD *)(v231 + 12);
        v35 = 0;
        *(_DWORD *)(v8 + 200) = v47;
        *(_DWORD *)(v8 + 208) = 0;
      }
      else
      {
        v36 = *(__m128i **)(v8 + 192);
        v37 = v34 - 1;
        v38 = 16LL * v34;
        v39 = &v36[v38 / 0x10];
      }
      v40 = 16LL * (v18 & (unsigned int)v37);
      v41 = &v36[(unsigned __int64)v40 / 0x10];
      if ( v40 != v38 )
      {
        v42 = &v36[(unsigned __int64)v40 / 0x10];
        v43 = nullptr;
        while ( 1 )
        {
          v44 = v42->m128i_i64[0];
          if ( v42->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v44 + 12) == v18 && v44 == v231 )
            {
              v43 = (size_t *)v42;
              goto LABEL_89;
            }
          }
          else
          {
            if ( !v44 )
            {
              if ( v43 )
                goto LABEL_87;
              v43 = (size_t *)v42;
              goto LABEL_88;
            }
            v43 = (size_t *)v42;
          }
          if ( ++v42 == v39 )
            goto LABEL_62;
        }
      }
      v43 = nullptr;
LABEL_62:
      while ( 2 )
      {
        if ( v41 == v36 )
          goto LABEL_113;
        v45 = v36->m128i_i64[0];
        if ( v36->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v45 + 12) == v18 && v45 == v231 )
          {
            v43 = (size_t *)v36;
            goto LABEL_89;
          }
          goto LABEL_61;
        }
        if ( v45 )
        {
          v43 = (size_t *)v36;
LABEL_61:
          ++v36;
          continue;
        }
        break;
      }
      if ( v43 )
LABEL_87:
        *(_DWORD *)(v8 + 208) = v35 - 1;
      else
        v43 = (size_t *)v36;
LABEL_88:
      *v43 = v231;
      *((_DWORD *)v43 + 2) = 0;
      ++*(_DWORD *)(v8 + 204);
LABEL_89:
      v250 = *((_DWORD *)v43 + 2);
      v55 = *(__int64 **)sub_63BA90(v280, v231);
      if ( !v55 )
        goto LABEL_120;
      v56 = *((unsigned int *)v55 - 1);
      if ( &v55[v56] == v55 )
        goto LABEL_120;
      v235 = v231;
      v57 = v55;
      v277 = &v55[v56];
      v278 = v7;
LABEL_92:
      v58 = *v57;
      v59 = *(unsigned int *)(*v57 + 64);
      if ( !(_DWORD)v59 )
        goto LABEL_118;
      v276 = v57;
      v241 = v58 + 8 * v59;
LABEL_94:
      while ( 2 )
      {
        v60 = *(_QWORD *)((*(_QWORD *)(v58 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v61 = sub_5FBCB0(v8, a2, v60);
        if ( !v61 )
          goto LABEL_116;
        v62 = *(_DWORD *)(v8 + 152);
        v63 = *(_DWORD *)(v8 + 160);
        if ( 3 * v62 < 4 * (v63 + *(_DWORD *)(v8 + 156)) )
        {
          v267 = 2 * v62;
          v260 = 2 * v62;
          n = 32LL * v62;
          v109 = (__m128i *)sub_186B270(n);
          v110 = v260;
          v66 = n;
          v62 = v267;
          v64 = v109;
          v111 = &v109[(unsigned __int64)n / 0x10];
          if ( v260 )
          {
            do
            {
              v109->m128i_i64[0] = 0;
              ++v109;
              v109[-1].m128i_i32[2] = 0;
            }
            while ( v109 != v111 );
          }
          v112 = *(__m128i **)(v8 + 144);
          v65 = v260 - 1;
          v67 = v111;
          v113 = &v112[*(unsigned int *)(v8 + 152)];
          if ( v112 != v113 )
          {
            v114 = *(const __m128i **)(v8 + 144);
            do
            {
              while ( v114->m128i_i64[0] <= 1uLL )
              {
                if ( v113 == ++v114 )
                  goto LABEL_181;
              }
              v115 = 16LL * (*(_DWORD *)(v114->m128i_i64[0] + 12) & (unsigned int)v65);
              v116 = &v64[(unsigned __int64)v115 / 0x10];
              if ( n == v115 )
              {
LABEL_185:
                if ( v64 == v116 )
                {
LABEL_208:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v117 = v64;
                while ( v117->m128i_i64[0] )
                {
                  if ( v116 == ++v117 )
                    goto LABEL_208;
                }
              }
              else
              {
                v117 = &v64[(unsigned __int64)v115 / 0x10];
                while ( v117->m128i_i64[0] )
                {
                  if ( v111 == ++v117 )
                    goto LABEL_185;
                }
              }
              v118 = _mm_loadu_si128(v114++);
              *v117 = v118;
            }
            while ( v113 != v114 );
LABEL_181:
            v62 = v267;
            v67 = v111;
            v113 = *(__m128i **)(v8 + 144);
            v110 = v260;
          }
          if ( v113 )
          {
            v274 = v110;
            v268 = n;
            nd = v62;
            sub_186B220(v113);
            v110 = v274;
            v66 = v268;
            v65 = v260 - 1;
            v62 = nd;
          }
          *(_QWORD *)(v8 + 144) = v64;
          v63 = 0;
          *(_DWORD *)(v8 + 152) = v110;
          *(_DWORD *)(v8 + 160) = 0;
        }
        else
        {
          v64 = *(__m128i **)(v8 + 144);
          v65 = v62 - 1;
          v66 = 16LL * v62;
          v67 = (__m128i *)((char *)v64 + v66);
        }
        v68 = *(_DWORD *)(v60 + 12);
        v69 = 16LL * (v65 & v68);
        v70 = &v64[(unsigned __int64)v69 / 0x10];
        if ( v69 == v66 )
        {
          v72 = nullptr;
LABEL_105:
          if ( v70 == v64 )
            goto LABEL_113;
          v71 = v64;
          while ( 1 )
          {
            while ( 1 )
            {
              v74 = v71->m128i_i64[0];
              if ( v71->m128i_i64[0] > 1uLL )
                break;
              if ( !v74 )
                goto LABEL_148;
              v72 = (__int64 *)v71++;
              if ( v70 == v71 )
                goto LABEL_113;
            }
            if ( *(_DWORD *)(v74 + 12) == v68 && v60 == v74 )
              break;
            if ( v70 == ++v71 )
              goto LABEL_113;
          }
LABEL_218:
          v72 = (__int64 *)v71;
        }
        else
        {
          v71 = &v64[(unsigned __int64)v69 / 0x10];
          v72 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v73 = v71->m128i_i64[0];
              if ( v71->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v73 + 12) == v68 && v60 == v73 )
                goto LABEL_218;
              if ( ++v71 == v67 )
                goto LABEL_105;
            }
            if ( !v73 )
              break;
            v72 = (__int64 *)v71++;
            if ( v71 == v67 )
              goto LABEL_105;
          }
LABEL_148:
          if ( v72 )
            *(_DWORD *)(v8 + 160) = v63 - 1;
          else
            v72 = (__int64 *)v71;
          *v72 = v60;
          *((_DWORD *)v72 + 2) = 0;
          ++*(_DWORD *)(v8 + 156);
        }
        v96 = *((_DWORD *)v72 + 2);
        if ( v96 <= 1 )
          goto LABEL_116;
        if ( !v245 )
        {
          if ( v250 > 1 )
          {
            v97 = *(unsigned int *)(v8 + 80);
            v98 = *(_DWORD *)(v8 + 88);
            if ( 3 * (int)v97 < (unsigned int)(4 * (v98 + *(_DWORD *)(v8 + 84))) )
            {
              v261 = 2 * v97;
              na = 8LL * (unsigned int)(2 * v97);
              v129 = (__int64 *)sub_186B270(na);
              v130 = v261;
              v131 = na;
              v100 = v129;
              if ( v261 )
              {
                memset(v129, 0, na);
                v131 = na;
                v130 = v261;
              }
              v132 = *(char **)(v8 + 72);
              v133 = v130 - 1;
              v103 = (__int64 *)((char *)v100 + v131);
              v134 = &v132[8 * *(unsigned int *)(v8 + 80)];
              if ( v132 != v134 )
              {
                v135 = v58;
                v136 = v8;
                v137 = v60;
                v138 = &v132[8 * *(unsigned int *)(v8 + 80)];
                v139 = v100;
                v140 = v136;
                v141 = v132;
                do
                {
                  while ( *(_QWORD *)v141 <= 1u )
                  {
                    v141 += 8;
                    if ( v138 == v141 )
                      goto LABEL_231;
                  }
                  v142 = 8LL * (*(_DWORD *)(*(_QWORD *)v141 + 12LL) & v133);
                  v143 = &v139[(unsigned __int64)v142 / 8];
                  if ( v131 == v142 )
                  {
LABEL_236:
                    if ( v139 == v143 )
                    {
LABEL_311:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v144 = v139;
                    while ( *v144 )
                    {
                      if ( v143 == ++v144 )
                        goto LABEL_311;
                    }
                  }
                  else
                  {
                    v144 = &v139[(unsigned __int64)v142 / 8];
                    while ( *v144 )
                    {
                      if ( v103 == ++v144 )
                        goto LABEL_236;
                    }
                  }
                  v145 = *(_QWORD *)v141;
                  v141 += 8;
                  *v144 = v145;
                }
                while ( v138 != v141 );
LABEL_231:
                v8 = v140;
                v134 = *(char **)(v140 + 72);
                v100 = v139;
                v60 = v137;
                v58 = v135;
              }
              if ( v134 )
              {
                v269 = v130;
                v262 = v131;
                ne = v130 - 1;
                sub_186B220(v134);
                v130 = v269;
                v131 = v262;
                v133 = ne;
              }
              v68 = *(_DWORD *)(v60 + 12);
              *(_QWORD *)(v8 + 72) = v100;
              v98 = 0;
              *(_DWORD *)(v8 + 80) = v130;
              *(_DWORD *)(v8 + 88) = 0;
              v146 = 8LL * (v68 & v133);
              v104 = &v100[(unsigned __int64)v146 / 8];
              if ( v146 != v131 )
              {
LABEL_156:
                v105 = v104;
                v106 = nullptr;
                while ( 1 )
                {
                  v107 = *v105;
                  if ( (unsigned __int64)*v105 > 1 )
                  {
                    if ( *(_DWORD *)(v107 + 12) == v68 && v60 == v107 )
                    {
                      *v105 = v60;
                      goto LABEL_115;
                    }
                  }
                  else
                  {
                    if ( !v107 )
                    {
                      if ( v106 )
                        goto LABEL_242;
                      v106 = v105;
                      goto LABEL_243;
                    }
                    v106 = v105;
                  }
                  if ( ++v105 == v103 )
                    goto LABEL_166;
                }
              }
            }
            else
            {
              v99 = v97 - 1;
              v100 = *(__int64 **)(v8 + 72);
              v101 = 8 * v97;
              v102 = 8LL * (v68 & v99);
              v103 = &v100[(unsigned __int64)v101 / 8];
              v104 = &v100[(unsigned __int64)v102 / 8];
              if ( v102 != v101 )
                goto LABEL_156;
            }
            v106 = nullptr;
            while ( 1 )
            {
LABEL_166:
              if ( v104 == v100 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v108 = *v100;
              if ( (unsigned __int64)*v100 > 1 )
              {
                if ( *(_DWORD *)(v108 + 12) == v68 && v60 == v108 )
                {
                  *v100 = v60;
                  goto LABEL_115;
                }
              }
              else
              {
                if ( !v108 )
                {
                  if ( v106 )
LABEL_242:
                    *(_DWORD *)(v8 + 88) = v98 - 1;
                  else
                    v106 = v100;
LABEL_243:
                  *v106 = v60;
                  ++*(_DWORD *)(v8 + 84);
LABEL_115:
                  v275 = v61;
LABEL_116:
                  v58 += 8;
                  if ( v241 == v58 )
                  {
LABEL_117:
                    v57 = v276;
LABEL_118:
                    if ( v277 == ++v57 )
                    {
                      v7 = v278;
                      goto LABEL_120;
                    }
                    goto LABEL_92;
                  }
                  goto LABEL_94;
                }
                v106 = v100;
              }
              ++v100;
            }
          }
          v119 = *(_DWORD *)(v8 + 160);
          v120 = 2 * v62;
          if ( 3 * v62 < 4 * (v119 + *(_DWORD *)(v8 + 156)) )
          {
            v270 = v96;
            nb = 2 * v62;
            v263 = 2 * v62;
            v147 = (__m128i *)sub_186B270(16LL * v120);
            v62 = nb;
            v66 = 16LL * v120;
            v148 = v263;
            v96 = v270;
            v64 = v147;
            v149 = (__m128i *)((char *)v147 + v66);
            if ( nb )
            {
              do
              {
                v147->m128i_i64[0] = 0;
                ++v147;
                v147[-1].m128i_i32[2] = 0;
              }
              while ( v147 != v149 );
            }
            v150 = *(const __m128i **)(v8 + 144);
            v65 = v263 - 1;
            v67 = v149;
            v151 = (__m128i *)&v150[*(unsigned int *)(v8 + 152)];
            if ( v150 != v151 )
            {
              do
              {
                while ( v150->m128i_i64[0] <= 1uLL )
                {
                  if ( v151 == ++v150 )
                    goto LABEL_255;
                }
                v152 = 16LL * (*(_DWORD *)(v150->m128i_i64[0] + 12) & (unsigned int)v65);
                v153 = &v64[(unsigned __int64)v152 / 0x10];
                if ( v66 == v152 )
                {
LABEL_259:
                  if ( v64 == v153 )
                  {
LABEL_314:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v154 = v64;
                  while ( v154->m128i_i64[0] )
                  {
                    if ( v153 == ++v154 )
                      goto LABEL_314;
                  }
                }
                else
                {
                  v154 = &v64[(unsigned __int64)v152 / 0x10];
                  while ( v154->m128i_i64[0] )
                  {
                    if ( v149 == ++v154 )
                      goto LABEL_259;
                  }
                }
                v155 = _mm_loadu_si128(v150++);
                *v154 = v155;
              }
              while ( v151 != v150 );
LABEL_255:
              v148 = v263;
              v151 = *(__m128i **)(v8 + 144);
              v67 = v149;
              v96 = v270;
            }
            if ( v151 )
            {
              v271 = v66;
              v247 = v96;
              sub_186B220(v151);
              v66 = v271;
              v65 = v263 - 1;
              v62 = nb;
              v96 = v247;
            }
            *(_QWORD *)(v8 + 144) = v64;
            v119 = 0;
            *(_DWORD *)(v8 + 152) = v148;
            *(_DWORD *)(v8 + 160) = 0;
          }
          v121 = *(_DWORD *)(v235 + 12);
          v122 = 16LL * (v121 & (unsigned int)v65);
          v123 = &v64[(unsigned __int64)v122 / 0x10];
          if ( v122 == v66 )
          {
            v125 = nullptr;
            goto LABEL_200;
          }
          i = &v64[(unsigned __int64)v122 / 0x10];
          v125 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v126 = i->m128i_i64[0];
              if ( i->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v126 + 12) == v121 && v126 == v235 )
              {
                v123 = &v64[(unsigned __int64)v122 / 0x10];
                v156 = *(_DWORD *)(v8 + 156);
                v125 = (size_t *)i;
                goto LABEL_267;
              }
              if ( ++i == v67 )
                goto LABEL_199;
            }
            if ( !v126 )
              break;
            v125 = (size_t *)i++;
            if ( i == v67 )
            {
LABEL_199:
              v123 = &v64[(unsigned __int64)v122 / 0x10];
LABEL_200:
              if ( v123 != v64 )
              {
                for ( i = v64; v123 != i; ++i )
                {
                  v127 = i->m128i_i64[0];
                  if ( i->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v127 + 12) == v121 && v127 == v235 )
                    {
                      v156 = *(_DWORD *)(v8 + 156);
                      v125 = (size_t *)i;
                      goto LABEL_267;
                    }
                  }
                  else
                  {
                    if ( !v127 )
                    {
                      if ( v125 )
                        goto LABEL_265;
LABEL_319:
                      v125 = (size_t *)i;
                      goto LABEL_266;
                    }
                    v125 = (size_t *)i;
                  }
                }
              }
LABEL_113:
              sub_1872CE0("");
              sub_1873130(114, 461);
            }
          }
          v123 = &v64[(unsigned __int64)v122 / 0x10];
          if ( !v125 )
            goto LABEL_319;
LABEL_265:
          *(_DWORD *)(v8 + 160) = --v119;
LABEL_266:
          *((_DWORD *)v125 + 2) = 0;
          *v125 = v235;
          v156 = *(_DWORD *)(v8 + 156) + 1;
          *(_DWORD *)(v8 + 156) = v156;
LABEL_267:
          v157 = *((_DWORD *)v125 + 2) * v96;
          v158 = 2 * v62;
          v248 = v157;
          if ( 3 * v62 < 4 * (v119 + v156) )
          {
            v163 = (__m128i *)sub_186B270(16LL * v158);
            v164 = 16LL * v158;
            v64 = v163;
            v165 = &v163[(unsigned __int64)v164 / 0x10];
            if ( v158 )
            {
              do
              {
                v163->m128i_i64[0] = 0;
                ++v163;
                v163[-1].m128i_i32[2] = 0;
              }
              while ( v163 != v165 );
            }
            v166 = *(__m128i **)(v8 + 144);
            v167 = v158 - 1;
            v67 = v165;
            v168 = &v166[*(unsigned int *)(v8 + 152)];
            if ( v166 != v168 )
            {
              v169 = *(const __m128i **)(v8 + 144);
              do
              {
                while ( v169->m128i_i64[0] <= 1uLL )
                {
                  if ( v168 == ++v169 )
                    goto LABEL_296;
                }
                v170 = 16LL * (*(_DWORD *)(v169->m128i_i64[0] + 12) & v167);
                v171 = &v64[(unsigned __int64)v170 / 0x10];
                if ( v164 == v170 )
                {
LABEL_301:
                  if ( v64 == v171 )
                  {
LABEL_315:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v172 = v64;
                  while ( v172->m128i_i64[0] )
                  {
                    if ( v171 == ++v172 )
                      goto LABEL_315;
                  }
                }
                else
                {
                  v172 = &v64[(unsigned __int64)v170 / 0x10];
                  while ( v172->m128i_i64[0] )
                  {
                    if ( v165 == ++v172 )
                      goto LABEL_301;
                  }
                }
                v173 = _mm_loadu_si128(v169++);
                *v172 = v173;
              }
              while ( v168 != v169 );
LABEL_296:
              v168 = *(__m128i **)(v8 + 144);
              v67 = v165;
            }
            if ( v168 )
            {
              sub_186B220(v168);
              v164 = 16LL * v158;
              v167 = v158 - 1;
            }
            v119 = 0;
            *(_QWORD *)(v8 + 144) = v64;
            *(_DWORD *)(v8 + 152) = v158;
            *(_DWORD *)(v8 + 160) = 0;
            v121 = *(_DWORD *)(v235 + 12);
            v174 = 16LL * (v121 & v167);
            v123 = &v64[(unsigned __int64)v174 / 0x10];
            if ( v174 == v164 )
              goto LABEL_300;
LABEL_269:
            v159 = v123;
            v160 = nullptr;
            while ( 1 )
            {
              while ( 1 )
              {
                v161 = v159->m128i_i64[0];
                if ( v159->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v161 + 12) == v121 && v161 == v235 )
                {
                  v160 = (size_t *)v159;
                  goto LABEL_309;
                }
                if ( ++v159 == v67 )
                  goto LABEL_276;
              }
              if ( !v161 )
                break;
              v160 = (size_t *)v159++;
              if ( v159 == v67 )
                goto LABEL_276;
            }
            if ( v160 )
LABEL_307:
              *(_DWORD *)(v8 + 160) = v119 - 1;
            else
              v160 = (size_t *)v159;
          }
          else
          {
            if ( v122 != v66 )
              goto LABEL_269;
LABEL_300:
            v160 = nullptr;
LABEL_276:
            if ( v64 == v123 )
            {
LABEL_284:
              sub_1872CE0("");
              sub_1873130(114, 461);
            }
            while ( 1 )
            {
              while ( 1 )
              {
                v162 = v64->m128i_i64[0];
                if ( v64->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v162 + 12) == v121 && v162 == v235 )
                {
                  v160 = (size_t *)v64;
                  goto LABEL_309;
                }
                if ( ++v64 == v123 )
                  goto LABEL_284;
              }
              if ( !v162 )
                break;
              v160 = (size_t *)v64++;
              if ( v64 == v123 )
                goto LABEL_284;
            }
            if ( v160 )
              goto LABEL_307;
            v160 = (size_t *)v64;
          }
          *((_DWORD *)v160 + 2) = 0;
          *v160 = v235;
          ++*(_DWORD *)(v8 + 156);
LABEL_309:
          v175 = v248;
          v58 += 8;
          v245 = v61;
          *((_DWORD *)v160 + 2) = v175;
          if ( v241 == v58 )
            goto LABEL_117;
          continue;
        }
        break;
      }
      v176 = *(unsigned int *)(v8 + 80);
      v177 = *(_DWORD *)(v8 + 88);
      v178 = v235;
      v179 = 2 * v176;
      v7 = v278;
      if ( 3 * (int)v176 < (unsigned int)(4 * (v177 + *(_DWORD *)(v8 + 84))) )
      {
        v237 = 8LL * v179;
        v212 = (size_t *)sub_186B270(v237);
        v181 = v212;
        if ( v179 )
          memset(v212, 0, v237);
        v213 = *(char **)(v8 + 72);
        v214 = *(unsigned int *)(v8 + 80);
        v180 = v179 - 1;
        v215 = &v213[8 * v214];
        v182 = &v181[(unsigned __int64)v237 / 8];
        if ( v213 != v215 )
        {
          v216 = v179;
          v217 = &v213[8 * v214];
          v218 = *(char **)(v8 + 72);
          do
          {
            while ( *(_QWORD *)v218 <= 1u )
            {
              v218 += 8;
              if ( v217 == v218 )
                goto LABEL_399;
            }
            v219 = 8LL * (*(_DWORD *)(*(_QWORD *)v218 + 12LL) & v180);
            v220 = &v181[(unsigned __int64)v219 / 8];
            if ( v237 == v219 )
            {
LABEL_403:
              if ( v181 == v220 )
              {
LABEL_423:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v221 = v181;
              while ( *v221 )
              {
                if ( v220 == ++v221 )
                  goto LABEL_423;
              }
            }
            else
            {
              v221 = &v181[(unsigned __int64)v219 / 8];
              while ( *v221 )
              {
                if ( v182 == ++v221 )
                  goto LABEL_403;
              }
            }
            v222 = *(_QWORD *)v218;
            v218 += 8;
            *v221 = v222;
          }
          while ( v217 != v218 );
LABEL_399:
          v7 = v278;
          v179 = v216;
          v215 = *(char **)(v8 + 72);
        }
        if ( v215 )
        {
          v243 = v180;
          sub_186B220(v215);
          v180 = v243;
        }
        *(_QWORD *)(v8 + 72) = v181;
        v177 = 0;
        *(_DWORD *)(v8 + 80) = v179;
        *(_DWORD *)(v8 + 88) = 0;
      }
      else
      {
        v180 = v176 - 1;
        v181 = *(size_t **)(v8 + 72);
        v237 = 8 * v176;
        v182 = &v181[v176];
      }
      v183 = *(_DWORD *)(v178 + 12);
      v184 = 8LL * (v183 & v180);
      v185 = &v181[(unsigned __int64)v184 / 8];
      if ( v184 != v237 )
      {
        v186 = &v181[(unsigned __int64)v184 / 8];
        v187 = nullptr;
        while ( 1 )
        {
          v188 = *v186;
          if ( *v186 > 1 )
          {
            if ( *(_DWORD *)(v188 + 12) == v183 && v188 == v178 )
            {
              *v186 = v178;
              goto LABEL_387;
            }
          }
          else
          {
            if ( !v188 )
            {
              if ( v187 )
                goto LABEL_409;
              v187 = v186;
              goto LABEL_410;
            }
            v187 = v186;
          }
          if ( ++v186 == v182 )
            goto LABEL_333;
        }
      }
      v187 = nullptr;
LABEL_333:
      while ( 2 )
      {
        if ( v185 == v181 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v189 = *v181;
        if ( *v181 > 1 )
        {
          if ( *(_DWORD *)(v189 + 12) == v183 && v189 == v178 )
          {
            *v181 = v178;
            goto LABEL_387;
          }
          goto LABEL_332;
        }
        if ( v189 )
        {
          v187 = v181;
LABEL_332:
          ++v181;
          continue;
        }
        break;
      }
      if ( v187 )
LABEL_409:
        *(_DWORD *)(v8 + 88) = v177 - 1;
      else
        v187 = v181;
LABEL_410:
      *v187 = v178;
      ++*(_DWORD *)(v8 + 84);
LABEL_387:
      v275 = v245;
LABEL_120:
      if ( v279 == ++v7 )
      {
        v3 = v8;
        goto LABEL_122;
      }
    }
  }
  v275 = 0;
LABEL_122:
  v75 = *(_QWORD *)(a2 + 24);
  if ( !v75 )
    return v275;
  v76 = *(unsigned int *)(v75 - 4);
  if ( !(_DWORD)v76 )
    return v275;
  v77 = 8 * v76;
  v78 = 0;
LABEL_127:
  v79 = *(_QWORD *)(v75 + v78);
  if ( !(unsigned __int8)sub_5FBCB0(v3, a2, *(_QWORD *)(*(_QWORD *)(v79 + 40) + 16LL)) )
  {
    v80 = *(unsigned int *)(v79 + 64);
    if ( (_DWORD)v80 )
    {
      v242 = 0;
      v236 = v79 + 8 * v80;
      v246 = v78;
      v251 = v77;
      while ( 1 )
      {
        v81 = *(_QWORD *)((*(_QWORD *)(v79 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v82 = sub_5FBCB0(v3, a2, v81);
        if ( !v82 )
          goto LABEL_215;
        v83 = *(_DWORD *)(v3 + 152);
        v84 = *(_DWORD *)(v3 + 160);
        if ( 3 * v83 < 4 * (v84 + *(_DWORD *)(v3 + 156)) )
        {
          v272 = v82;
          v264 = 2 * v83;
          nc = 32LL * v83;
          v190 = (__m128i *)sub_186B270(nc);
          v191 = v264;
          v87 = nc;
          v82 = v272;
          v85 = v190;
          v192 = &v190[(unsigned __int64)nc / 0x10];
          if ( v264 )
          {
            do
            {
              v190->m128i_i64[0] = 0;
              ++v190;
              v190[-1].m128i_i32[2] = 0;
            }
            while ( v190 != v192 );
          }
          v193 = *(const __m128i **)(v3 + 144);
          v86 = v264 - 1;
          v88 = (__int64 *)v192;
          v194 = (__m128i *)&v193[*(unsigned int *)(v3 + 152)];
          if ( v193 != v194 )
          {
            do
            {
              while ( v193->m128i_i64[0] <= 1uLL )
              {
                if ( v194 == ++v193 )
                  goto LABEL_353;
              }
              v195 = 16LL * (*(_DWORD *)(v193->m128i_i64[0] + 12) & (unsigned int)(v264 - 1));
              v196 = &v85[(unsigned __int64)v195 / 0x10];
              if ( nc == v195 )
              {
LABEL_357:
                if ( v85 == v196 )
                {
LABEL_383:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v197 = v85;
                while ( v197->m128i_i64[0] )
                {
                  if ( v196 == ++v197 )
                    goto LABEL_383;
                }
              }
              else
              {
                v197 = &v85[(unsigned __int64)v195 / 0x10];
                while ( v197->m128i_i64[0] )
                {
                  if ( v192 == ++v197 )
                    goto LABEL_357;
                }
              }
              v198 = _mm_loadu_si128(v193++);
              *v197 = v198;
            }
            while ( v194 != v193 );
LABEL_353:
            v87 = nc;
            v191 = v264;
            v194 = *(__m128i **)(v3 + 144);
            v86 = v264 - 1;
            v82 = v272;
            v88 = (__int64 *)v192;
          }
          if ( v194 )
          {
            v273 = v87;
            v265 = v86;
            nf = v82;
            sub_186B220(v194);
            v87 = v273;
            v86 = v265;
            v82 = nf;
          }
          *(_QWORD *)(v3 + 144) = v85;
          v84 = 0;
          *(_DWORD *)(v3 + 152) = v191;
          *(_DWORD *)(v3 + 160) = 0;
        }
        else
        {
          v85 = *(__m128i **)(v3 + 144);
          v86 = v83 - 1;
          v87 = 16LL * v83;
          v88 = (__int64 *)((char *)v85->m128i_i64 + v87);
        }
        v89 = *(_DWORD *)(v81 + 12);
        v90 = 16LL * (v89 & (unsigned int)v86);
        v91 = &v85[(unsigned __int64)v90 / 0x10];
        if ( v90 != v87 )
        {
          v92 = &v85[(unsigned __int64)v90 / 0x10];
          v93 = nullptr;
          while ( 1 )
          {
            v94 = v92->m128i_i64[0];
            if ( v92->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v94 + 12) == v89 && v81 == v94 )
              {
                v93 = (__int64 *)v92;
                goto LABEL_212;
              }
            }
            else
            {
              if ( !v94 )
              {
                if ( v93 )
                  goto LABEL_210;
                v93 = (__int64 *)v92;
                goto LABEL_211;
              }
              v93 = (__int64 *)v92;
            }
            if ( ++v92 == (__m128i *)v88 )
              goto LABEL_144;
          }
        }
        v93 = nullptr;
        while ( 1 )
        {
LABEL_144:
          if ( v91 == v85 )
            goto LABEL_113;
          v95 = v85->m128i_i64[0];
          if ( v85->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v95 + 12) == v89 && v81 == v95 )
          {
            v93 = (__int64 *)v85;
            goto LABEL_212;
          }
LABEL_143:
          ++v85;
        }
        if ( v95 )
        {
          v93 = (__int64 *)v85;
          goto LABEL_143;
        }
        if ( v93 )
LABEL_210:
          *(_DWORD *)(v3 + 160) = v84 - 1;
        else
          v93 = (__int64 *)v85;
LABEL_211:
        *v93 = v81;
        *((_DWORD *)v93 + 2) = 0;
        ++*(_DWORD *)(v3 + 156);
LABEL_212:
        if ( *((int *)v93 + 2) > 1 )
        {
          if ( !v242 )
          {
            v242 = v82;
            goto LABEL_215;
          }
          v199 = *(unsigned int *)(v3 + 80);
          v200 = *(_DWORD *)(v3 + 88);
          v201 = 2 * v199;
          if ( 3 * (int)v199 < (unsigned int)(4 * (v200 + *(_DWORD *)(v3 + 84))) )
          {
            v203 = 8LL * v201;
            v223 = (__int64 *)sub_186B270(v203);
            v202 = v223;
            if ( v201 )
              memset(v223, 0, 8LL * v201);
            v224 = *(char **)(v3 + 72);
            v204 = v201 - 1;
            v205 = &v202[v203 / 8];
            v225 = &v224[8 * *(unsigned int *)(v3 + 80)];
            if ( v224 != v225 )
            {
              v226 = *(char **)(v3 + 72);
              do
              {
                while ( *(_QWORD *)v226 <= 1u )
                {
                  v226 += 8;
                  if ( v225 == v226 )
                    goto LABEL_440;
                }
                v227 = *(_DWORD *)(*(_QWORD *)v226 + 12LL) & (v201 - 1);
                v228 = &v202[v227];
                if ( v201 == v227 )
                {
LABEL_444:
                  if ( v202 == v228 )
                  {
LABEL_456:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v229 = v202;
                  while ( *v229 )
                  {
                    if ( v228 == ++v229 )
                      goto LABEL_456;
                  }
                }
                else
                {
                  v229 = &v202[v227];
                  while ( *v229 )
                  {
                    if ( v205 == ++v229 )
                      goto LABEL_444;
                  }
                }
                v230 = *(_QWORD *)v226;
                v226 += 8;
                *v229 = v230;
              }
              while ( v225 != v226 );
LABEL_440:
              v225 = *(char **)(v3 + 72);
              v203 = 8LL * v201;
              v204 = v201 - 1;
            }
            if ( v225 )
            {
              v266 = v205;
              ng = v204;
              sub_186B220(v225);
              v205 = v266;
              v204 = ng;
            }
            *(_QWORD *)(v3 + 72) = v202;
            v89 = *(_DWORD *)(v81 + 12);
            v200 = 0;
            *(_DWORD *)(v3 + 80) = v201;
            *(_DWORD *)(v3 + 88) = 0;
          }
          else
          {
            v202 = *(__int64 **)(v3 + 72);
            v203 = 8 * v199;
            v204 = v199 - 1;
            v205 = &v202[v199];
          }
          v206 = 8LL * (v89 & v204);
          v207 = &v202[(unsigned __int64)v206 / 8];
          if ( v206 != v203 )
          {
            v208 = &v202[(unsigned __int64)v206 / 8];
            v209 = nullptr;
            while ( 1 )
            {
              v210 = *v208;
              if ( (unsigned __int64)*v208 > 1 )
              {
                if ( *(_DWORD *)(v210 + 12) == v89 && v81 == v210 )
                {
                  *v208 = v81;
                  goto LABEL_420;
                }
              }
              else
              {
                if ( !v210 )
                {
                  if ( v209 )
                    goto LABEL_427;
                  v209 = v208;
                  goto LABEL_428;
                }
                v209 = v208;
              }
              if ( ++v208 == v205 )
                goto LABEL_377;
            }
          }
          v209 = nullptr;
LABEL_377:
          while ( 2 )
          {
            if ( v207 == v202 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v211 = *v202;
            if ( (unsigned __int64)*v202 > 1 )
            {
              if ( *(_DWORD *)(v211 + 12) == v89 && v81 == v211 )
              {
                *v202 = v81;
                goto LABEL_420;
              }
              goto LABEL_376;
            }
            if ( v211 )
            {
              v209 = v202;
LABEL_376:
              ++v202;
              continue;
            }
            break;
          }
          if ( v209 )
LABEL_427:
            *(_DWORD *)(v3 + 88) = v200 - 1;
          else
            v209 = v202;
LABEL_428:
          *v209 = v81;
          ++*(_DWORD *)(v3 + 84);
LABEL_420:
          v79 += 8;
          v275 = v242;
          if ( v79 == v236 )
          {
LABEL_216:
            v77 = v251;
            v78 = v246 + 8;
            if ( v246 + 8 == v251 )
              return v275;
LABEL_126:
            v75 = *(_QWORD *)(a2 + 24);
            goto LABEL_127;
          }
        }
        else
        {
LABEL_215:
          v79 += 8;
          if ( v79 == v236 )
            goto LABEL_216;
        }
      }
    }
  }
  v78 += 8;
  if ( v78 != v77 )
    goto LABEL_126;
  return v275;
}

