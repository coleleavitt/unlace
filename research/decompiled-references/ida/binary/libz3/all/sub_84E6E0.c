__m128i *__fastcall sub_84E6E0(__m128i *a1, const __m128i *a2, __int64 a3, __int64 *a4, _QWORD *a5, int a6)
{
  char **v6; // rbx
  __int64 *v7; // r15
  __int64 *v8; // rsi
  char **exception; // rbp
  char **v10; // rbx
  __int64 *v11; // r15
  __int64 *v12; // rsi
  char **v13; // rbx
  char **v14; // rbp
  _QWORD *v17; // rbx
  _QWORD *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  int v23; // r8d
  int v24; // r9d
  _QWORD *v25; // rbx
  _QWORD *v26; // r13
  __int64 v27; // r14
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  unsigned int v33; // ebp
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  unsigned int *v38; // rsi
  __m128 **v39; // rdx
  __int64 (*v40)(); // rcx
  unsigned int v41; // r12d
  __int64 v42; // rbp
  unsigned int v43; // eax
  __int64 v44; // rsi
  int v45; // eax
  unsigned int *v46; // rsi
  _QWORD *v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __m128i v54; // xmm0
  unsigned int v55; // ebx
  unsigned int *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 (*v60)(); // rax
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rax
  _QWORD *v64; // rbx
  void *v65; // rdi
  __int64 *v66; // rbx
  unsigned __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // rbx
  unsigned __int64 v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rbx
  unsigned __int64 v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 *v78; // rbx
  unsigned __int64 v79; // rbp
  __int64 v80; // rsi
  __int64 *v81; // rbx
  unsigned __int64 v82; // rbp
  __int64 v83; // rsi
  unsigned int v85; // r13d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rcx
  unsigned int v89; // r12d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rcx
  __m128 **v93; // r13
  __m128 **v94; // rbx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rsi
  __int64 v98; // rdi
  __m128 *v99; // r12
  __int64 v100; // rsi
  __m128 *v101; // rdx
  _DWORD *v102; // rbp
  __int64 v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 v106; // r12
  unsigned int v107; // eax
  unsigned int v108; // ecx
  size_t v109; // rsi
  __int64 v110; // rax
  __m128 *v111; // rsi
  unsigned int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  __m128 *v115; // rdx
  size_t v116; // rdi
  __int64 v117; // rax
  _QWORD *v118; // rcx
  _DWORD *v119; // r8
  __int64 v120; // r10
  __int64 v121; // rdx
  int v122; // r11d
  _QWORD *v123; // rax
  _QWORD *v124; // r9
  __int64 v125; // rdi
  __int64 v126; // rdi
  __int64 v127; // rdi
  __int64 *v128; // r10
  __m128 *v129; // r12
  __int64 *v130; // rbp
  __int64 *v131; // rbx
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rsi
  __int64 v135; // rdi
  unsigned int v136; // ecx
  _QWORD *v137; // rax
  __int64 (*v138)(); // rax
  __int64 v139; // rax
  __m128i *v140; // rcx
  __int64 v141; // rsi
  unsigned int v142; // r12d
  __int64 v143; // r13
  _QWORD *v144; // rdx
  unsigned int v145; // eax
  __int64 v146; // rdi
  int v147; // eax
  _QWORD *v148; // rdi
  int v149; // r8d
  int v150; // r9d
  _QWORD *v151; // r12
  _QWORD *v152; // r13
  unsigned int v153; // r8d
  size_t v154; // rsi
  _DWORD *v155; // rax
  __int64 v156; // rsi
  __m128 *v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rsi
  __int64 *v160; // rbp
  unsigned __int64 v161; // r12
  __int64 v162; // rsi
  __int64 v163; // rdi
  __int64 *v164; // rbp
  unsigned __int64 v165; // r12
  __int64 v166; // rsi
  __int64 v167; // rdi
  __int64 *v168; // rbp
  unsigned __int64 v169; // r12
  __int64 v170; // rsi
  __int64 v171; // rdi
  _QWORD *v172; // rax
  __m128 *v173; // rcx
  _QWORD *v174; // rax
  __m128 *v175; // rcx
  _QWORD *v176; // rax
  __m128 *v177; // rcx
  _QWORD *v178; // rax
  _QWORD *v179; // [rsp+0h] [rbp-208h]
  __m128i *v180; // [rsp+8h] [rbp-200h] BYREF
  __m128 *v181; // [rsp+10h] [rbp-1F8h]
  __int64 *v182; // [rsp+18h] [rbp-1F0h]
  __m128i *v183; // [rsp+20h] [rbp-1E8h] BYREF
  int v184[2]; // [rsp+28h] [rbp-1E0h]
  __m128i *v185; // [rsp+30h] [rbp-1D8h]
  __int64 v186; // [rsp+38h] [rbp-1D0h]
  _QWORD *v187; // [rsp+40h] [rbp-1C8h]
  unsigned __int8 v188; // [rsp+4Bh] [rbp-1BDh]
  unsigned int v189; // [rsp+4Ch] [rbp-1BCh]
  __m128 *v190; // [rsp+50h] [rbp-1B8h]
  _DWORD *v191; // [rsp+58h] [rbp-1B0h]
  _DWORD *v192; // [rsp+60h] [rbp-1A8h]
  __m128 **v193; // [rsp+68h] [rbp-1A0h]
  __int64 v194; // [rsp+80h] [rbp-188h] BYREF
  _DWORD *v195; // [rsp+88h] [rbp-180h]
  int v196[2]; // [rsp+90h] [rbp-178h] BYREF
  __m128 **v197; // [rsp+98h] [rbp-170h]
  __int64 v198[2]; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v199; // [rsp+B0h] [rbp-158h] BYREF
  __int64 *v200; // [rsp+C0h] [rbp-148h]
  __int64 v201; // [rsp+C8h] [rbp-140h]
  __int64 *v202; // [rsp+D0h] [rbp-138h]
  __int64 v203; // [rsp+D8h] [rbp-130h]
  __int64 v204; // [rsp+E0h] [rbp-128h]
  __int64 v205; // [rsp+E8h] [rbp-120h]
  __int64 v206; // [rsp+F0h] [rbp-118h]
  __int64 *v207; // [rsp+F8h] [rbp-110h]
  void *s; // [rsp+100h] [rbp-108h]
  __int64 v209; // [rsp+108h] [rbp-100h]
  void *v210; // [rsp+110h] [rbp-F8h]
  __int64 v211; // [rsp+118h] [rbp-F0h]
  int v212; // [rsp+120h] [rbp-E8h]
  __int64 v213; // [rsp+128h] [rbp-E0h]
  _QWORD v214[2]; // [rsp+130h] [rbp-D8h] BYREF
  int v215[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v216; // [rsp+148h] [rbp-C0h]
  __int64 v217; // [rsp+158h] [rbp-B0h]
  void *v218[2]; // [rsp+160h] [rbp-A8h]
  __int64 v219; // [rsp+178h] [rbp-90h]
  void *v220; // [rsp+180h] [rbp-88h]
  __int64 v221; // [rsp+190h] [rbp-78h]
  void *ptr; // [rsp+198h] [rbp-70h]
  __int64 v223; // [rsp+1A0h] [rbp-68h]
  __int64 *v224; // [rsp+1A8h] [rbp-60h]
  __int64 v225; // [rsp+1B0h] [rbp-58h]
  __int64 *v226; // [rsp+1B8h] [rbp-50h]
  __int64 v227; // [rsp+1C0h] [rbp-48h]
  __int64 *v228; // [rsp+1C8h] [rbp-40h]

  v17 = (_QWORD *)a5[1];
  v185 = a1;
  v181 = (__m128 *)a4;
  v179 = a5;
  LODWORD(v182) = a6;
  LOBYTE(v183) = a6;
  if ( v17 )
  {
    v19 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v19 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v20 = *v17;
        if ( *v17 )
        {
          v21 = *a5;
          v22 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v17 >= v19 )
          goto LABEL_8;
      }
      sub_15D7BC0(v21, v20);
      ++v17;
    }
    while ( v17 < v19 );
LABEL_8:
    v17 = (_QWORD *)v179[1];
    if ( v17 )
LABEL_9:
      *((_DWORD *)v17 - 1) = 0;
  }
  v186 = a3 + 128;
  v188 = sub_13608A0(a3 + 128);
  sub_1360B80(a3 + 128, 1);
  sub_13744E0(a2[11].m128i_i64[0]);
  v25 = (_QWORD *)v181->m128_u64[1];
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v26 != v25 )
    {
      v180 = (__m128i *)v215;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          v28 = a2[11].m128i_i64[0];
          sub_1374250(v180, a3, *v25);
          sub_135F9B0(v28, *(_QWORD *)(v27 + 16), *(_QWORD *)v215);
          v29 = *(_QWORD *)v215;
          if ( *(_QWORD *)v215 )
          {
            v30 = v216;
            v22 = (*(_DWORD *)(*(_QWORD *)v215 + 8LL))-- == 1;
            if ( v22 )
              break;
          }
          if ( v26 == ++v25 )
            goto LABEL_17;
        }
        sub_15D7BC0(v30, v29);
        ++v25;
      }
      while ( v26 != v25 );
    }
  }
LABEL_17:
  v195 = nullptr;
  v31 = v181[3].m128_i64[0];
  v194 = v181[2].m128_i64[1];
  if ( v31 )
  {
    v32 = nullptr;
    v33 = 0;
    do
    {
      if ( v33 >= *(_DWORD *)(v31 - 4) )
        break;
      v34 = *(_QWORD *)(v31 + 8LL * v33);
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      if ( v32 )
      {
        v35 = *((_DWORD *)v32 - 1);
        if ( v35 == *((_DWORD *)v32 - 2) )
        {
          v89 = (3 * v35 + 1) >> 1;
          v90 = 8 * v89 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v90 || v35 >= v89 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v215, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v215);
            sub_233E40((__int64)v215);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v91 = (unsigned int *)sub_186B300(v32 - 1, v90);
          v92 = v91[1];
          v32 = v91 + 2;
          *v91 = v89;
          v195 = v91 + 2;
          v38 = &v91[2 * v92 + 2];
          v37 = v92 + 1;
          v31 = v181[3].m128_i64[0];
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = (unsigned int *)&v32[v36];
        }
      }
      else
      {
        v174 = (_QWORD *)sub_186B270(0x18u);
        v175 = v181;
        v32 = v174 + 1;
        *v174 = 2;
        v37 = 1;
        v195 = v32;
        v38 = (unsigned int *)v32;
        v31 = v175[3].m128_i64[0];
      }
      *(_QWORD *)v38 = v34;
      ++v33;
      *((_DWORD *)v32 - 1) = v37;
    }
    while ( v31 );
  }
  v39 = nullptr;
  v197 = nullptr;
  v40 = (__int64 (*)())v181->m128_u64[1];
  *(_QWORD *)v196 = v181->m128_u64[0];
  if ( v40 )
  {
    v41 = 0;
    do
    {
      if ( v41 >= *((_DWORD *)v40 - 1) )
        break;
      v42 = *((_QWORD *)v40 + v41);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      if ( v39 )
      {
        v43 = *((_DWORD *)v39 - 1);
        if ( v43 == *((_DWORD *)v39 - 2) )
        {
          v85 = (3 * v43 + 1) >> 1;
          v86 = 8 * v85 + 8;
          if ( 8 * v43 + 8 >= (unsigned int)v86 || v43 >= v85 )
          {
            v14 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v215, "Overflow encountered when expanding vector");
            *v14 = (char *)off_1C63128;
            sub_2333C0(v14 + 1, v215);
            sub_233E40((__int64)v215);
            __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v87 = (unsigned int *)sub_186B300(v39 - 1, v86);
          v88 = v87[1];
          v39 = (__m128 **)(v87 + 2);
          *v87 = v85;
          v197 = (__m128 **)(v87 + 2);
          v46 = &v87[2 * v88 + 2];
          v45 = v88 + 1;
          v40 = (__int64 (*)())v181->m128_u64[1];
        }
        else
        {
          v44 = v43;
          v45 = v43 + 1;
          v46 = (unsigned int *)&v39[v44];
        }
      }
      else
      {
        v172 = (_QWORD *)sub_186B270(0x18u);
        v173 = v181;
        v46 = (unsigned int *)(v172 + 1);
        *v172 = 2;
        v45 = 1;
        v197 = (__m128 **)v46;
        v39 = (__m128 **)v46;
        v40 = (__int64 (*)())v173->m128_u64[1];
      }
      *(_QWORD *)v46 = v42;
      ++v41;
      *((_DWORD *)v39 - 1) = v45;
    }
    while ( v40 );
  }
  v47 = (_QWORD *)a2[17].m128i_i64[1];
  if ( v47 )
  {
    v48 = *((unsigned int *)v47 - 1);
    if ( (_DWORD)v48 )
    {
      v49 = &v47[4 * v48];
      do
      {
        v52 = v47[2];
        if ( v52 )
        {
          v53 = v47[3];
          v22 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v53, v52);
        }
        v50 = *v47;
        if ( *v47 )
        {
          v51 = v47[1];
          v22 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v51, v50);
        }
        v47 += 4;
      }
      while ( v47 != v49 );
      v47 = (_QWORD *)a2[17].m128i_i64[1];
      v39 = v197;
    }
    *((_DWORD *)v47 - 1) = 0;
  }
  v54 = _mm_loadl_epi64(a2 + 1);
  v200 = nullptr;
  v202 = nullptr;
  v203 = 0;
  v204 = 0;
  v205 = 0;
  v207 = nullptr;
  v187 = v214;
  s = v214;
  v209 = 1;
  v210 = nullptr;
  v211 = 0;
  v212 = 1065353216;
  v213 = 0;
  v214[0] = 0;
  v199 = _mm_unpacklo_epi64(v54, v54);
  v201 = v54.m128i_i64[0];
  v206 = v54.m128i_i64[0];
  if ( (_BYTE)v182 )
  {
    if ( v39 )
    {
      *(_QWORD *)v184 = &v194;
LABEL_128:
      v93 = &v39[*((unsigned int *)v39 - 1)];
      if ( v93 != v39 )
      {
        v94 = v39;
        v182 = v198;
        v181 = (__m128 *)v215;
        do
        {
          v99 = *v94;
          v100 = a2[11].m128i_i64[0];
          v101 = *v94;
          v180 = (__m128i *)a2[1].m128i_i64[0];
          sub_1374250(v182, v100, v101);
          sub_848420(v181, (__int64)a2, v198[0]);
          v102 = *(_DWORD **)v215;
          sub_14EA0D0(&v199, v99, *(_QWORD *)v215);
          v103 = *(_QWORD *)(a2->m128i_i64[0] + 24);
          if ( v103 && *(_BYTE *)(v103 + 352) )
          {
            sub_7A4170(a2->m128i_i64[0]);
            v183 = (__m128i *)a2[1].m128i_i64[0];
            if ( v99 )
              ++v99->m128_i32[2];
            if ( v102 )
              ++v102[2];
            v111 = (__m128 *)a2[17].m128i_i64[1];
            if ( v111 )
            {
              v112 = v111[-1].m128_u32[3];
              if ( v112 == v111[-1].m128_i32[2] )
              {
                v189 = (3 * v112 + 1) >> 1;
                v116 = 32 * v189 + 8;
                if ( 32 * v112 + 8 >= (unsigned int)v116 || v112 >= (3 * v112 + 1) >> 1 )
                {
                  v6 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v181, "Overflow encountered when expanding vector");
                  v7 = (__int64 *)v181;
                  v8 = (__int64 *)v181;
                  *v6 = (char *)off_1C63128;
                  sub_2333C0(v6 + 1, v8);
                  sub_233E40((__int64)v7);
                  __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v117 = sub_186B270(v116);
                v118 = (_QWORD *)a2[17].m128i_i64[1];
                v119 = (_DWORD *)v117;
                v111 = (__m128 *)(v117 + 8);
                if ( v118 )
                {
                  v120 = *((unsigned int *)v118 - 1);
                  v121 = v117 + 8;
                  *(_DWORD *)(v117 + 4) = v120;
                  v122 = v120;
                  v123 = v118;
                  v124 = &v118[4 * v120];
                  if ( v124 != v118 )
                  {
                    do
                    {
                      v125 = v123[1];
                      v123 += 4;
                      v121 += 32;
                      *(_QWORD *)(v121 - 24) = v125;
                      v126 = *(v123 - 4);
                      *(v123 - 4) = 0;
                      *(_QWORD *)(v121 - 32) = v126;
                      *(_QWORD *)(v121 - 8) = *(v123 - 1);
                      v127 = *(v123 - 2);
                      *(v123 - 2) = 0;
                      *(_QWORD *)(v121 - 16) = v127;
                    }
                    while ( v123 != v124 );
                  }
                  v128 = &v118[4 * v120];
                  if ( v122 )
                  {
                    v190 = v99;
                    v129 = v111;
                    v191 = v102;
                    v130 = v128;
                    v193 = v94;
                    v131 = v118;
                    v192 = v119;
                    do
                    {
                      while ( 1 )
                      {
                        v134 = v131[2];
                        if ( v134 )
                        {
                          v135 = v131[3];
                          v22 = (*(_DWORD *)(v134 + 8))-- == 1;
                          if ( v22 )
                            sub_15D7BC0(v135, v134);
                        }
                        v132 = *v131;
                        if ( *v131 )
                        {
                          v133 = v131[1];
                          v22 = (*(_DWORD *)(v132 + 8))-- == 1;
                          if ( v22 )
                            break;
                        }
                        v131 += 4;
                        if ( v131 == v130 )
                          goto LABEL_170;
                      }
                      sub_15D7BC0(v133, v132);
                      v131 += 4;
                    }
                    while ( v131 != v130 );
LABEL_170:
                    v111 = v129;
                    v102 = v191;
                    v119 = v192;
                    v94 = v193;
                    v118 = (_QWORD *)a2[17].m128i_i64[1];
                  }
                  v191 = v119;
                  v190 = v111;
                  sub_186B220(v118 - 1);
                  v119 = v191;
                  v111 = v190;
                  v115 = &v190[2 * (unsigned int)v191[1]];
                  v114 = v191[1] + 1;
                }
                else
                {
                  *(_DWORD *)(v117 + 4) = 0;
                  v115 = (__m128 *)(v117 + 8);
                  v114 = 1;
                }
                v136 = v189;
                v104 = a2[1].m128i_i64[0];
                a2[17].m128i_i64[1] = (__int64)v111;
                *v119 = v136;
              }
              else
              {
                v113 = v112;
                LODWORD(v104) = (_DWORD)v183;
                v114 = v112 + 1;
                v115 = &v111[2 * v113];
              }
            }
            else
            {
              v178 = (_QWORD *)sub_186B270(0x48u);
              v111 = (__m128 *)(v178 + 1);
              *v178 = 2;
              v104 = a2[1].m128i_i64[0];
              v114 = 1;
              a2[17].m128i_i64[1] = (__int64)v111;
              v115 = v111;
            }
            *v115 = _mm_loadh_ps((const double *)&v183);
            v115[1] = _mm_loadh_ps((const double *)&v180);
            v111[-1].m128_i32[3] = v114;
          }
          else
          {
            v104 = a2[1].m128i_i64[0];
          }
          v105 = sub_15E1B70(v104);
          v106 = v105;
          if ( v105 )
            ++*(_DWORD *)(v105 + 8);
          v39 = (__m128 **)v179[1];
          if ( v39 )
          {
            v107 = *((_DWORD *)v39 - 1);
            if ( v107 == *((_DWORD *)v39 - 2) )
            {
              v108 = (3 * v107 + 1) >> 1;
              v109 = 8 * v108 + 8;
              if ( 8 * v107 + 8 >= (unsigned int)v109 || v107 >= v108 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v181, "Overflow encountered when expanding vector");
                v11 = (__int64 *)v181;
                v12 = (__int64 *)v181;
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, v12);
                sub_233E40((__int64)v11);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v183) = (3 * v107 + 1) >> 1;
              v110 = sub_186B300(v39 - 1, v109);
              v39 = (__m128 **)(v110 + 8);
              v179[1] = v110 + 8;
              *(_DWORD *)v110 = (_DWORD)v183;
              LODWORD(v110) = *(_DWORD *)(v110 + 4);
              v40 = (__int64 (*)())&v39[(unsigned int)v110];
              v96 = v110 + 1;
            }
            else
            {
              v95 = v107;
              v96 = v107 + 1;
              v40 = (__int64 (*)())&v39[v95];
            }
          }
          else
          {
            v137 = (_QWORD *)sub_186B270(0x18u);
            v39 = (__m128 **)(v137 + 1);
            *v137 = 2;
            v40 = (__int64 (*)())(v137 + 1);
            v179[1] = v137 + 1;
            v96 = 1;
          }
          *(_QWORD *)v40 = v106;
          v97 = v198[0];
          *((_DWORD *)v39 - 1) = v96;
          if ( v97 )
          {
            v98 = v198[1];
            v22 = (*(_DWORD *)(v97 + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v98, v97);
          }
          if ( v102 )
          {
            v22 = v102[2]-- == 1;
            if ( v22 )
              sub_15D7BC0(v180, v102);
          }
          ++v94;
        }
        while ( v93 != v94 );
      }
    }
    else
    {
      *(_QWORD *)v184 = &v194;
    }
  }
  else
  {
    v55 = 0;
    *(_QWORD *)v184 = &v194;
    if ( v39 )
    {
      do
      {
        if ( v55 >= *((_DWORD *)v39 - 1) )
          goto LABEL_128;
        v56 = *(unsigned int **)(sub_15D1F10(v39[v55]) + 24);
        v57 = a2[13].m128i_i64[0];
        if ( v56 )
        {
          v58 = *v56;
          if ( v57 )
          {
            if ( (unsigned int)v58 < *(_DWORD *)(v57 - 4) )
            {
              v182 = *(__int64 **)(v57 + 8 * v58);
              LOBYTE(v189) = ((unsigned __int8)v183 ^ 1) & (v182 != nullptr);
              if ( (_BYTE)v189 )
              {
                v141 = v181[4].m128_i64[0];
                if ( v141 )
                {
                  v183 = &v199;
                  v142 = 0;
                  do
                  {
                    if ( v142 >= *(_DWORD *)(v141 - 4) )
                      break;
                    v143 = *(_QWORD *)(v141 + 8LL * v142);
                    if ( v143 )
                      ++*(_DWORD *)(v143 + 8);
                    v144 = v195;
                    if ( v195 )
                    {
                      v145 = *(v195 - 1);
                      if ( v145 == *(v195 - 2) )
                      {
                        v153 = (3 * v145 + 1) >> 1;
                        v154 = 8 * v153 + 8;
                        if ( 8 * v145 + 8 >= (unsigned int)v154 || v145 >= v153 )
                        {
                          v13 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0((__int64 *)v215, "Overflow encountered when expanding vector");
                          *v13 = (char *)off_1C63128;
                          sub_2333C0(v13 + 1, v215);
                          sub_233E40((__int64)v215);
                          __cxa_throw(
                            v13,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        LODWORD(v180) = (3 * v145 + 1) >> 1;
                        v155 = (_DWORD *)sub_186B300(v195 - 2, v154);
                        v156 = (unsigned int)v155[1];
                        v144 = v155 + 2;
                        v157 = v181;
                        v195 = v155 + 2;
                        *v155 = (_DWORD)v180;
                        v148 = &v155[2 * v156 + 2];
                        v147 = v156 + 1;
                        v141 = v157[4].m128_i64[0];
                      }
                      else
                      {
                        v146 = v145;
                        v147 = v145 + 1;
                        v148 = &v195[2 * v146];
                      }
                    }
                    else
                    {
                      v176 = (_QWORD *)sub_186B270(0x18u);
                      v177 = v181;
                      v144 = v176 + 1;
                      *v176 = 2;
                      v147 = 1;
                      v195 = v144;
                      v148 = v144;
                      v141 = v177[4].m128_i64[0];
                    }
                    *v148 = v143;
                    ++v142;
                    *((_DWORD *)v144 - 1) = v147;
                  }
                  while ( v141 );
                }
                sub_84C0B0((__int64)a2, *(__int64 *)v184, (__int64)v181);
                if ( v195 )
                {
                  v151 = &v195[2 * *(v195 - 1)];
                  if ( v151 != (_QWORD *)v195 )
                  {
                    v152 = v195;
                    v180 = &v199;
                    while ( (unsigned __int8)sub_1374270(a2[11].m128i_i64[0], *v152) )
                    {
                      if ( v151 == ++v152 )
                        goto LABEL_195;
                    }
LABEL_176:
                    v139 = a2[1].m128i_i64[0];
                    v140 = v185;
                    v185->m128i_i64[0] = 0;
                    v140->m128i_i64[1] = v139;
                    goto LABEL_64;
                  }
                }
LABEL_195:
                v158 = a2[1].m128i_i64[0];
                v159 = a2[11].m128i_i64[0];
                v217 = 0;
                v216 = v158;
                v223 = v158;
                v225 = v158;
                v227 = v158;
                *(_QWORD *)v215 = &off_1C53478;
                v219 = 0;
                v220 = nullptr;
                v221 = 0;
                ptr = nullptr;
                v224 = nullptr;
                v226 = nullptr;
                v228 = nullptr;
                v180 = (__m128i *)v215;
                *(_OWORD *)v218 = 0;
                sub_EBF490((int)v215, v159, (int)v196, v184[0], v149, v150, v179);
                v160 = v228;
                *(_QWORD *)v215 = &off_1C53478;
                if ( v228 )
                {
                  v161 = (unsigned __int64)&v228[*((unsigned int *)v228 - 1)];
                  if ( (unsigned __int64)v228 >= v161 )
                    goto LABEL_203;
                  do
                  {
                    while ( 1 )
                    {
                      v162 = *v160;
                      if ( *v160 )
                      {
                        v163 = v227;
                        v22 = (*(_DWORD *)(v162 + 8))-- == 1;
                        if ( v22 )
                          break;
                      }
                      if ( (unsigned __int64)++v160 >= v161 )
                        goto LABEL_202;
                    }
                    sub_15D7BC0(v163, v162);
                    ++v160;
                  }
                  while ( (unsigned __int64)v160 < v161 );
LABEL_202:
                  v160 = v228;
                  if ( v228 )
LABEL_203:
                    sub_186B220(v160 - 1);
                }
                v164 = v226;
                if ( v226 )
                {
                  v165 = (unsigned __int64)&v226[*((unsigned int *)v226 - 1)];
                  if ( (unsigned __int64)v226 >= v165 )
                    goto LABEL_212;
                  do
                  {
                    while ( 1 )
                    {
                      v166 = *v164;
                      if ( *v164 )
                      {
                        v167 = v225;
                        v22 = (*(_DWORD *)(v166 + 8))-- == 1;
                        if ( v22 )
                          break;
                      }
                      if ( (unsigned __int64)++v164 >= v165 )
                        goto LABEL_211;
                    }
                    sub_15D7BC0(v167, v166);
                    ++v164;
                  }
                  while ( (unsigned __int64)v164 < v165 );
LABEL_211:
                  v164 = v226;
                  if ( v226 )
LABEL_212:
                    sub_186B220(v164 - 1);
                }
                v168 = v224;
                if ( v224 )
                {
                  v169 = (unsigned __int64)&v224[*((unsigned int *)v224 - 1)];
                  if ( (unsigned __int64)v224 >= v169 )
                    goto LABEL_221;
                  do
                  {
                    while ( 1 )
                    {
                      v170 = *v168;
                      if ( *v168 )
                      {
                        v171 = v223;
                        v22 = (*(_DWORD *)(v170 + 8))-- == 1;
                        if ( v22 )
                          break;
                      }
                      if ( (unsigned __int64)++v168 >= v169 )
                        goto LABEL_220;
                    }
                    sub_15D7BC0(v171, v170);
                    ++v168;
                  }
                  while ( (unsigned __int64)v168 < v169 );
LABEL_220:
                  v168 = v224;
                  if ( v224 )
LABEL_221:
                    sub_186B220(v168 - 1);
                }
                if ( ptr )
                  sub_186B220(ptr);
                if ( v220 )
                  sub_186B220(v220);
                if ( v218[1] )
                  sub_186B220((char *)v218[1] - 8);
                if ( v218[0] )
                  sub_186B220(v218[0]);
                LOBYTE(v183) = v189;
              }
              else if ( !v182 )
              {
                goto LABEL_59;
              }
              v59 = *(_QWORD *)(a2->m128i_i64[0] + 24);
              if ( v59 && *(_BYTE *)(v59 + 352) )
              {
                sub_7A4170(a2->m128i_i64[0]);
                v138 = *(__int64 (**)())(*v182 + 48);
                if ( v138 != sub_6F1030
                  && !((unsigned __int8 (__fastcall *)(__int64 *, __int64, int *, _QWORD, unsigned __int64 *))v138)(
                        v182,
                        a2[11].m128i_i64[0],
                        v196,
                        *(_QWORD *)v184,
                        &a2[17].m128i_u64[1]) )
                {
                  goto LABEL_176;
                }
              }
              else
              {
                v40 = sub_6F1020;
                v60 = *(__int64 (**)())(*v182 + 40);
                if ( v60 != sub_6F1020 )
                  ((void (__fastcall *)(__int64 *, __int64, int *, _QWORD))v60)(
                    v182,
                    a2[11].m128i_i64[0],
                    v196,
                    *(_QWORD *)v184);
              }
            }
          }
        }
LABEL_59:
        v39 = v197;
        ++v55;
      }
      while ( v197 );
    }
  }
  sub_14EC260((unsigned int)&v199, v184[0], (_DWORD)v39, (_DWORD)v40, v23, v24);
  v61 = v194;
  if ( v195 )
    v62 = (unsigned int)*(v195 - 1);
  else
    v62 = 0;
  v63 = sub_15EC1C0(v194, v62);
  *v185 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)v61);
  if ( v63 )
    ++*(_DWORD *)(v63 + 8);
LABEL_64:
  v64 = v210;
  if ( v210 )
  {
    do
    {
      v65 = v64;
      v64 = (_QWORD *)*v64;
      operator delete(v65, 0x18u);
    }
    while ( v64 );
  }
  memset(s, 0, 8 * v209);
  v211 = 0;
  v210 = nullptr;
  if ( s != v187 )
    operator delete(s, 8 * v209);
  v66 = v207;
  if ( v207 )
  {
    v67 = (unsigned __int64)&v207[*((unsigned int *)v207 - 1)];
    if ( (unsigned __int64)v207 >= v67 )
      goto LABEL_76;
    do
    {
      while ( 1 )
      {
        v68 = *v66;
        if ( *v66 )
        {
          v69 = v206;
          v22 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v66 >= v67 )
          goto LABEL_75;
      }
      sub_15D7BC0(v69, v68);
      ++v66;
    }
    while ( (unsigned __int64)v66 < v67 );
LABEL_75:
    v66 = v207;
    if ( v207 )
LABEL_76:
      sub_186B220(v66 - 1);
  }
  if ( v205 )
    sub_186B220((void *)(v205 - 8));
  if ( v204 )
    sub_186B220((void *)(v204 - 8));
  if ( v203 )
    sub_186B220((void *)(v203 - 8));
  v70 = v202;
  if ( v202 )
  {
    v71 = (unsigned __int64)&v202[*((unsigned int *)v202 - 1)];
    if ( (unsigned __int64)v202 >= v71 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v72 = *v70;
        if ( *v70 )
        {
          v73 = v201;
          v22 = (*(_DWORD *)(v72 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v70 >= v71 )
          goto LABEL_90;
      }
      sub_15D7BC0(v73, v72);
      ++v70;
    }
    while ( (unsigned __int64)v70 < v71 );
LABEL_90:
    v70 = v202;
    if ( v202 )
LABEL_91:
      sub_186B220(v70 - 1);
  }
  v74 = v200;
  if ( v200 )
  {
    v75 = (unsigned __int64)&v200[*((unsigned int *)v200 - 1)];
    if ( (unsigned __int64)v200 >= v75 )
      goto LABEL_100;
    do
    {
      while ( 1 )
      {
        v76 = *v74;
        if ( *v74 )
        {
          v77 = v199.m128i_i64[1];
          v22 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v74 >= v75 )
          goto LABEL_99;
      }
      sub_15D7BC0(v77, v76);
      ++v74;
    }
    while ( (unsigned __int64)v74 < v75 );
LABEL_99:
    v74 = v200;
    if ( v200 )
LABEL_100:
      sub_186B220(v74 - 1);
  }
  v78 = (__int64 *)v197;
  if ( v197 )
  {
    v79 = (unsigned __int64)&v197[*((unsigned int *)v197 - 1)];
    if ( (unsigned __int64)v197 >= v79 )
      goto LABEL_109;
    do
    {
      while ( 1 )
      {
        v80 = *v78;
        if ( *v78 )
        {
          v22 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v78 >= v79 )
          goto LABEL_108;
      }
      sub_15D7BC0(*(_QWORD *)v196, v80);
      ++v78;
    }
    while ( (unsigned __int64)v78 < v79 );
LABEL_108:
    v78 = (__int64 *)v197;
    if ( v197 )
LABEL_109:
      sub_186B220(v78 - 1);
  }
  v81 = (__int64 *)v195;
  if ( v195 )
  {
    v82 = (unsigned __int64)&v195[2 * *(v195 - 1)];
    if ( (unsigned __int64)v195 >= v82 )
      goto LABEL_118;
    do
    {
      while ( 1 )
      {
        v83 = *v81;
        if ( *v81 )
        {
          v22 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v81 >= v82 )
          goto LABEL_117;
      }
      sub_15D7BC0(v194, v83);
      ++v81;
    }
    while ( (unsigned __int64)v81 < v82 );
LABEL_117:
    v81 = (__int64 *)v195;
    if ( v195 )
LABEL_118:
      sub_186B220(v81 - 1);
  }
  sub_1360B80(v186, v188);
  return v185;
}

