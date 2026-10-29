_QWORD *__fastcall sub_61A670(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **v4; // r14
  char **v5; // rbx
  char **v6; // rbp
  char **v7; // rbx
  char **v8; // r14
  char **v9; // r15
  char **v10; // r14
  char **exception; // rbp
  char **v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  _DWORD *v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rsi
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  _QWORD *v36; // rbp
  __int64 v37; // rsi
  bool v38; // zf
  __int64 v39; // r13
  unsigned int v40; // ebp
  _QWORD *v41; // rax
  _DWORD *k; // rbx
  unsigned int v43; // r12d
  size_t v44; // rsi
  unsigned int *v45; // rax
  unsigned int v46; // eax
  _QWORD *v47; // rbp
  unsigned int m; // r15d
  __int64 v49; // rdx
  int v50; // eax
  _QWORD *v51; // rdx
  __int64 v52; // r14
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  _QWORD *v57; // rbx
  _QWORD *v58; // rbx
  unsigned int j; // ebp
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  __int64 v63; // r14
  unsigned int v64; // eax
  unsigned int v65; // ecx
  size_t v66; // rsi
  unsigned int *v67; // rax
  unsigned int v68; // ebp
  unsigned int v69; // edx
  __int64 v70; // rdx
  char *v71; // rcx
  __int64 v72; // r12
  __int64 *v73; // rax
  __int64 v74; // rsi
  int v75; // r9d
  __int64 *v76; // r8
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 *v79; // r12
  __int64 *v80; // rbx
  __int64 *v81; // rbp
  __int64 *v82; // r13
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rbp
  int v86; // edx
  int v87; // eax
  __int64 v88; // r14
  _QWORD *v89; // rdx
  unsigned int v90; // eax
  __int64 v91; // rcx
  int v92; // eax
  __int64 *v93; // rcx
  unsigned int v94; // edx
  unsigned int *v95; // rsi
  __int64 v96; // rax
  unsigned int v97; // ecx
  __int64 *v98; // r14
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  _QWORD *v101; // rax
  __m128i *v102; // r14
  unsigned int v103; // ecx
  unsigned int i; // eax
  unsigned int v105; // ebp
  size_t v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r12
  __int64 v109; // rsi
  _DWORD *v110; // rcx
  __int64 v111; // rdx
  int v112; // r9d
  __int64 *v113; // rax
  __m128i *v114; // r8
  __int64 v115; // rdi
  __int64 v116; // rdi
  __m128i *v117; // r12
  __int64 *v118; // rbx
  __int64 *v119; // rbp
  __int64 *v120; // r13
  __int64 v121; // rsi
  __int64 v122; // rdi
  __m128i v123; // xmm1
  __m128i *v124; // rax
  __m128i v125; // xmm2
  __int64 v126; // r12
  __int64 *v127; // rbx
  unsigned __int64 v128; // rbp
  __int64 v129; // rsi
  __int64 *v130; // rcx
  __m128i *v131; // r13
  unsigned int v132; // ebp
  unsigned int v133; // eax
  char *v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rsi
  _QWORD *v137; // rcx
  unsigned int v138; // edx
  __int64 v139; // r12
  unsigned int v140; // eax
  __int64 v141; // rdi
  int v142; // eax
  _QWORD *v143; // rdi
  __int64 v144; // rax
  _QWORD *v145; // rdx
  __int64 v146; // rax
  unsigned int *v147; // rbp
  __int64 v148; // r13
  _QWORD *v149; // rax
  void *v150; // r8
  _QWORD *v151; // rsi
  int v152; // eax
  _DWORD *v153; // rcx
  __int64 v154; // rax
  unsigned int v155; // eax
  __int64 v156; // rsi
  unsigned int v157; // eax
  __int64 *v158; // r12
  __m128i *v159; // rbx
  __int64 *v160; // rbp
  __int64 *v161; // r13
  __int64 v162; // rsi
  __int64 v163; // rdi
  unsigned int v164; // r15d
  unsigned int v165; // ecx
  unsigned int *v166; // rax
  _DWORD *v167; // rdx
  __int64 *v168; // r12
  unsigned __int64 v169; // r14
  __int64 v170; // rsi
  unsigned int v171; // eax
  __int64 *v172; // r12
  __int64 *v173; // rbp
  __int64 *v174; // rbx
  __int64 *v175; // r13
  __int64 v176; // rsi
  __int64 v177; // rdi
  _QWORD *v179; // rax
  _QWORD *v180; // rbp
  _QWORD *v181; // rbx
  unsigned int v182; // r8d
  size_t v183; // rsi
  unsigned int *v184; // rax
  __int64 v185; // rsi
  unsigned int v186; // edx
  __int64 v187; // rdx
  char *v188; // rcx
  __int64 v189; // rbx
  __int64 *v190; // rax
  __int64 v191; // rsi
  int v192; // r9d
  __int64 *v193; // r8
  __int64 v194; // rdi
  __int64 v195; // rdi
  __int64 *v196; // rbx
  __int64 *v197; // rbp
  __int64 *v198; // r12
  __int64 *v199; // r13
  __int64 v200; // rsi
  __int64 v201; // rdi
  __int64 v202; // rbx
  _QWORD *v203; // rax
  unsigned int v204; // r9d
  size_t v205; // rsi
  unsigned int *v206; // rax
  __int64 v207; // rsi
  unsigned __int64 v208; // rbp
  __int64 *v209; // rbx
  _QWORD *v210; // r13
  __int64 v211; // rsi
  _QWORD *v212; // rax
  unsigned int v213; // ebx
  unsigned int v214; // ecx
  unsigned int *v215; // r13
  _DWORD *v216; // rcx
  __int64 v217; // r10
  __int64 *v218; // rax
  __int64 *v219; // r8
  void *v220; // rdx
  __int64 v221; // rsi
  __int64 v222; // rsi
  __int64 *v223; // rbx
  __int64 *v224; // rbp
  __int64 *v225; // r12
  __int64 v226; // rsi
  __int64 v227; // rdi
  __int64 v228; // rcx
  int v229; // eax
  int v230; // ecx
  _QWORD *v231; // rax
  __int64 *v232; // rbp
  unsigned __int64 v233; // r12
  __int64 v234; // rsi
  _QWORD *v235; // rax
  __int64 *v236; // [rsp+8h] [rbp-110h]
  char **v237; // [rsp+10h] [rbp-108h]
  _QWORD *v238; // [rsp+10h] [rbp-108h]
  unsigned int v239; // [rsp+10h] [rbp-108h]
  __int64 v241; // [rsp+20h] [rbp-F8h]
  __int64 v242; // [rsp+20h] [rbp-F8h]
  unsigned int v243; // [rsp+20h] [rbp-F8h]
  unsigned int v244; // [rsp+20h] [rbp-F8h]
  unsigned int v245; // [rsp+20h] [rbp-F8h]
  __int64 *v246; // [rsp+20h] [rbp-F8h]
  unsigned int v247; // [rsp+20h] [rbp-F8h]
  unsigned int v248; // [rsp+20h] [rbp-F8h]
  unsigned int v249; // [rsp+20h] [rbp-F8h]
  __int64 v250; // [rsp+28h] [rbp-F0h]
  _QWORD *v251; // [rsp+28h] [rbp-F0h]
  __int64 v252; // [rsp+28h] [rbp-F0h]
  _DWORD *v253; // [rsp+28h] [rbp-F0h]
  __int64 v254; // [rsp+28h] [rbp-F0h]
  unsigned int v255; // [rsp+28h] [rbp-F0h]
  unsigned int v256; // [rsp+28h] [rbp-F0h]
  _DWORD *v257; // [rsp+28h] [rbp-F0h]
  unsigned int ptrd; // [rsp+30h] [rbp-E8h]
  unsigned int ptr; // [rsp+30h] [rbp-E8h]
  _QWORD *ptra; // [rsp+30h] [rbp-E8h]
  char *ptre; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrf; // [rsp+30h] [rbp-E8h]
  void *ptrb; // [rsp+30h] [rbp-E8h]
  char *ptrg; // [rsp+30h] [rbp-E8h]
  void *ptrh; // [rsp+30h] [rbp-E8h]
  void *ptri; // [rsp+30h] [rbp-E8h]
  __int64 *ptrc; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrj; // [rsp+30h] [rbp-E8h]
  _QWORD *ptrk; // [rsp+30h] [rbp-E8h]
  __int64 v270; // [rsp+40h] [rbp-D8h]
  _QWORD *v271; // [rsp+48h] [rbp-D0h]
  __int64 v272; // [rsp+50h] [rbp-C8h]
  __int64 v273; // [rsp+50h] [rbp-C8h]
  _QWORD *v274; // [rsp+50h] [rbp-C8h]
  __int64 v275; // [rsp+58h] [rbp-C0h]
  _QWORD *v276; // [rsp+58h] [rbp-C0h]
  unsigned int *v277; // [rsp+58h] [rbp-C0h]
  __m128i *v278; // [rsp+58h] [rbp-C0h]
  unsigned int v279; // [rsp+58h] [rbp-C0h]
  void *v280; // [rsp+58h] [rbp-C0h]
  _DWORD *v281; // [rsp+60h] [rbp-B8h]
  unsigned int v282; // [rsp+60h] [rbp-B8h]
  __int64 v283; // [rsp+68h] [rbp-B0h]
  __m128i v285; // [rsp+78h] [rbp-A0h] BYREF
  __int64 *v286; // [rsp+88h] [rbp-90h]
  _QWORD v287[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v288; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD *v289; // [rsp+B8h] [rbp-60h]
  __int64 v290; // [rsp+C0h] [rbp-58h] BYREF

  v13 = *(unsigned int *)(a3 + 24);
  v285.m128i_i64[1] = a3;
  if ( !(_DWORD)v13 )
  {
    v39 = *(_QWORD *)(a2 + 24);
    *a1 = v39;
    a1[1] = 0;
    goto LABEL_263;
  }
  v238 = (_QWORD *)a3;
  v271 = (_QWORD *)(a3 + 8 * v13);
  v236 = nullptr;
  do
  {
    while ( 1 )
    {
      v270 = *(_QWORD *)(a2 + 24);
      v14 = v238[4];
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v15 = *(_DWORD **)(sub_15D1F10(v14) + 24);
      if ( !v15 || *(_DWORD *)(a2 + 40) != *v15 || v15[1] )
      {
        v16 = *(_QWORD *)(a2 + 24);
        ++*(_DWORD *)(v14 + 8);
        v288 = v16;
        v17 = (_QWORD *)sub_186B270(0x18u);
        v17[1] = v14;
        v18 = v17;
        v19 = v17 + 1;
        *v17 = 0x100000002LL;
        if ( v236 )
        {
          v20 = *((unsigned int *)v236 - 1);
          if ( (_DWORD)v20 != *((_DWORD *)v236 - 2) )
          {
            v21 = &v236[2 * v20];
            *v21 = v16;
            v21[1] = 0;
            goto LABEL_10;
          }
          v68 = (unsigned int)(3 * v20 + 1) >> 1;
          v244 = v68;
          v69 = 16 * v68 + 8;
          if ( 16 * (int)v20 + 8 >= v69 || (unsigned int)v20 >= v68 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v290, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v290);
            sub_233E40((__int64)&v290);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = sub_186B270(v69);
          v71 = (char *)(v70 + 8);
          v72 = *((unsigned int *)v236 - 1);
          v73 = v236;
          v74 = v70 + 8;
          *(_DWORD *)(v70 + 4) = v72;
          v75 = v72;
          v76 = &v236[2 * v72];
          if ( v236 != v76 )
          {
            do
            {
              v77 = *v73;
              v73 += 2;
              v74 += 16;
              *(_QWORD *)(v74 - 16) = v77;
              v78 = *(v73 - 1);
              *(v73 - 1) = 0;
              *(_QWORD *)(v74 - 8) = v78;
            }
            while ( v73 != v76 );
          }
          v79 = &v236[2 * v72];
          if ( v75 )
          {
            v252 = v16;
            v272 = v70;
            v275 = v70 + 8;
            ptra = v19;
            v80 = v236;
            do
            {
              v81 = (__int64 *)v80[1];
              if ( v81 )
              {
                v82 = &v81[*((unsigned int *)v81 - 1)];
                if ( v81 >= v82 )
                  goto LABEL_77;
                do
                {
                  while ( 1 )
                  {
                    v83 = *v81;
                    if ( *v81 )
                    {
                      v84 = *v80;
                      v38 = (*(_DWORD *)(v83 + 8))-- == 1;
                      if ( v38 )
                        break;
                    }
                    if ( ++v81 >= v82 )
                      goto LABEL_76;
                  }
                  sub_15D7BC0(v84, v83);
                  ++v81;
                }
                while ( v81 < v82 );
LABEL_76:
                v81 = (__int64 *)v80[1];
                if ( v81 )
LABEL_77:
                  sub_186B220(v81 - 1);
              }
              v80 += 2;
            }
            while ( v79 != v80 );
            v16 = v252;
            v19 = ptra;
            v70 = v272;
            v71 = (char *)v275;
          }
          ptre = v71;
          v253 = (_DWORD *)v70;
          sub_186B220(v236 - 1);
          v85 = (unsigned int)v253[1];
          v236 = (__int64 *)ptre;
          *v253 = v244;
          v86 = *((_DWORD *)v18 + 1);
          v87 = v85;
          v21 = (__int64 *)&ptre[16 * v85];
        }
        else
        {
          v179 = (_QWORD *)sub_186B270(0x28u);
          *v179 = 2;
          v86 = *((_DWORD *)v18 + 1);
          v236 = v179 + 1;
          v21 = v179 + 1;
          v87 = 0;
        }
        *v21 = v16;
        v21[1] = 0;
        if ( !v86 )
        {
          *((_DWORD *)v236 - 1) = v87 + 1;
LABEL_27:
          sub_186B220(v18);
          goto LABEL_28;
        }
LABEL_10:
        v22 = v18[1];
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v241 = v22;
        v23 = (_QWORD *)sub_186B270(0x18u);
        v24 = v23 + 1;
        v25 = v241;
        v21[1] = (__int64)(v23 + 1);
        v26 = v23 + 1;
        *v23 = 2;
        v27 = 0;
        v28 = 1;
        while ( 1 )
        {
          *v24 = v25;
          ++v27;
          *((_DWORD *)v26 - 1) = v28;
          v29 = *((unsigned int *)v18 + 1);
          if ( (unsigned int)v27 >= (unsigned int)v29 )
            break;
          v25 = v18[v27 + 1];
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          v30 = *((_DWORD *)v26 - 1);
          if ( v30 == *((_DWORD *)v26 - 2) )
          {
            v32 = (3 * v30 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v33 || v30 >= v32 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v290, "Overflow encountered when expanding vector");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, &v290);
              sub_233E40((__int64)&v290);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            ptrd = (3 * v30 + 1) >> 1;
            v250 = v27;
            v242 = v25;
            v34 = (unsigned int *)sub_186B300(v26 - 1, v33);
            v35 = v34[1];
            v26 = v34 + 2;
            v25 = v242;
            v27 = v250;
            v21[1] = (__int64)(v34 + 2);
            *v34 = ptrd;
            LODWORD(v34) = v35;
            v24 = &v26[v35];
            v28 = (_DWORD)v34 + 1;
          }
          else
          {
            v31 = v30;
            v28 = v30 + 1;
            v24 = &v26[v31];
          }
        }
        v36 = &v19[v29];
        ++*((_DWORD *)v236 - 1);
        while ( v19 < v36 )
        {
          while ( 1 )
          {
            v37 = *v19;
            if ( *v19 )
            {
              v38 = (*(_DWORD *)(v37 + 8))-- == 1;
              if ( v38 )
                break;
            }
            if ( ++v19 >= v36 )
              goto LABEL_27;
          }
          ++v19;
          sub_15D7BC0(v16, v37);
        }
        goto LABEL_27;
      }
      v286 = &v288;
      sub_6191A0(&v288, a2, v14);
      v57 = v289;
      v251 = v289;
      ptr = sub_1859980(
              **(_QWORD **)(*(_QWORD *)(a2 + 32) + 32LL),
              "xform.instantiate_arrays.nb_quantifier",
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
              1);
      v285.m128i_i64[0] = v288;
      if ( !v57 )
      {
        if ( !ptr )
          goto LABEL_149;
        v58 = nullptr;
LABEL_104:
        v101 = (_QWORD *)sub_186B270(0x28u);
        v102 = (__m128i *)(v101 + 1);
        *v101 = 2;
        v103 = ptr;
        for ( i = *(_DWORD *)v101; i < ptr; i = *(_DWORD *)(v109 - 8) )
        {
          v105 = (3 * i + 1) >> 1;
          v245 = v105;
          v106 = 16 * v105 + 8;
          if ( 16 * i + 8 >= (unsigned int)v106 || i >= v105 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v290, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &v290);
            sub_233E40((__int64)&v290);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v107 = sub_186B270(v106);
          v108 = v102[-1].m128i_u32[3];
          v109 = v107 + 8;
          v110 = (_DWORD *)v107;
          v111 = v107 + 8;
          *(_DWORD *)(v107 + 4) = v108;
          v112 = v108;
          v113 = (__int64 *)v102;
          v114 = &v102[v108];
          if ( v102 != v114 )
          {
            do
            {
              v115 = *v113;
              v113 += 2;
              v111 += 16;
              *(_QWORD *)(v111 - 16) = v115;
              v116 = *(v113 - 1);
              *(v113 - 1) = 0;
              *(_QWORD *)(v111 - 8) = v116;
            }
            while ( v114 != (__m128i *)v113 );
          }
          v117 = &v102[v108];
          if ( v112 )
          {
            v281 = v110;
            v283 = v109;
            v276 = v58;
            v118 = (__int64 *)v102;
            do
            {
              v119 = (__int64 *)v118[1];
              if ( v119 )
              {
                v120 = &v119[*((unsigned int *)v119 - 1)];
                if ( v119 >= v120 )
                  goto LABEL_119;
                do
                {
                  while ( 1 )
                  {
                    v121 = *v119;
                    if ( *v119 )
                    {
                      v122 = *v118;
                      v38 = (*(_DWORD *)(v121 + 8))-- == 1;
                      if ( v38 )
                        break;
                    }
                    if ( ++v119 >= v120 )
                      goto LABEL_118;
                  }
                  sub_15D7BC0(v122, v121);
                  ++v119;
                }
                while ( v119 < v120 );
LABEL_118:
                v119 = (__int64 *)v118[1];
                if ( v119 )
LABEL_119:
                  sub_186B220(v119 - 1);
              }
              v118 += 2;
            }
            while ( v117 != (__m128i *)v118 );
            v58 = v276;
            v110 = v281;
            v109 = v283;
          }
          v277 = v110;
          sub_186B220(&v102[-1].m128i_u64[1]);
          v102 = (__m128i *)v109;
          *v277 = v245;
          v103 = ptr;
        }
        v123 = _mm_loadl_epi64(&v285);
        v124 = v102;
        v102[-1].m128i_i32[3] = v103;
        do
        {
          v125 = (__m128i)(unsigned __int64)v58;
          ++v124;
          v58 = nullptr;
          v124[-1] = _mm_unpacklo_epi64(v123, v125);
        }
        while ( &v102[v103] != v124 );
        if ( !v251 )
          goto LABEL_133;
        goto LABEL_126;
      }
      v58 = nullptr;
      for ( j = 0; j < *((_DWORD *)v251 - 1); ++j )
      {
        v63 = v251[j];
        if ( v63 )
          ++*(_DWORD *)(v63 + 8);
        if ( v58 )
        {
          v64 = *((_DWORD *)v58 - 1);
          if ( v64 == *((_DWORD *)v58 - 2) )
          {
            v65 = (3 * v64 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v64 + 8 >= (unsigned int)v66 || v64 >= v65 )
            {
              v12 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v290, "Overflow encountered when expanding vector");
              *v12 = (char *)off_1C63128;
              sub_2333C0(v12 + 1, &v290);
              sub_233E40((__int64)&v290);
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v243 = (3 * v64 + 1) >> 1;
            v67 = (unsigned int *)sub_186B300(v58 - 1, v66);
            v58 = v67 + 2;
            *v67 = v243;
            LODWORD(v67) = v67[1];
            v62 = &v58[(unsigned int)v67];
            v61 = (_DWORD)v67 + 1;
          }
          else
          {
            v60 = v64;
            v61 = v64 + 1;
            v62 = &v58[v60];
          }
        }
        else
        {
          v181 = (_QWORD *)sub_186B270(0x18u);
          *v181 = 2;
          v61 = 1;
          v58 = v181 + 1;
          v62 = v58;
        }
        *v62 = v63;
        *((_DWORD *)v58 - 1) = v61;
      }
      if ( ptr )
        goto LABEL_104;
      if ( v58 )
      {
        v232 = v58;
        v233 = (unsigned __int64)&v58[*((unsigned int *)v58 - 1)];
        if ( (unsigned __int64)v58 < v233 )
        {
          do
          {
            while ( 1 )
            {
              v234 = *v232;
              if ( *v232 )
              {
                v38 = (*(_DWORD *)(v234 + 8))-- == 1;
                if ( v38 )
                  break;
              }
              if ( (unsigned __int64)++v232 >= v233 )
                goto LABEL_275;
            }
            ++v232;
            sub_15D7BC0(v285.m128i_i64[0], v234);
          }
          while ( (unsigned __int64)v232 < v233 );
        }
LABEL_275:
        sub_186B220(v58 - 1);
      }
      v102 = nullptr;
LABEL_126:
      v126 = v285.m128i_i64[0];
      v127 = v251;
      v128 = (unsigned __int64)&v251[*((unsigned int *)v251 - 1)];
      if ( (unsigned __int64)v251 < v128 )
      {
        do
        {
          while ( 1 )
          {
            v129 = *v127;
            if ( *v127 )
            {
              v38 = (*(_DWORD *)(v129 + 8))-- == 1;
              if ( v38 )
                break;
            }
            if ( (unsigned __int64)++v127 >= v128 )
              goto LABEL_132;
          }
          ++v127;
          sub_15D7BC0(v126, v129);
        }
        while ( (unsigned __int64)v127 < v128 );
      }
LABEL_132:
      sub_186B220(v251 - 1);
      if ( !v102 )
      {
LABEL_149:
        v102 = nullptr;
        goto LABEL_150;
      }
LABEL_133:
      if ( v102[-1].m128i_i32[3] )
      {
        if ( v236 )
        {
          v130 = v236;
          v131 = v102;
          v132 = 0;
          goto LABEL_136;
        }
        v212 = (_QWORD *)sub_186B270(0x28u);
        *v212 = 2;
        v131 = v102;
        v132 = 0;
        v236 = v212 + 1;
        v134 = (char *)(v212 + 1);
        v133 = 0;
        while ( 1 )
        {
          v135 = v131->m128i_i64[0];
          v136 = v131->m128i_i64[1];
          *((_QWORD *)v134 + 1) = 0;
          *(_QWORD *)v134 = v135;
          if ( v136 )
          {
            v137 = nullptr;
            v138 = 0;
            do
            {
              if ( v138 >= *(_DWORD *)(v136 - 4) )
                break;
              v139 = *(_QWORD *)(v136 + 8LL * v138);
              if ( v139 )
                ++*(_DWORD *)(v139 + 8);
              if ( v137 )
              {
                v140 = *((_DWORD *)v137 - 1);
                if ( v140 == *((_DWORD *)v137 - 2) )
                {
                  v182 = (3 * v140 + 1) >> 1;
                  v183 = 8 * v182 + 8;
                  if ( 8 * v140 + 8 >= (unsigned int)v183 || v140 >= v182 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v290, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, &v290);
                    sub_233E40((__int64)&v290);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v255 = (3 * v140 + 1) >> 1;
                  v247 = v138;
                  v184 = (unsigned int *)sub_186B300(v137 - 1, v183);
                  v185 = v184[1];
                  v137 = v184 + 2;
                  *((_QWORD *)v134 + 1) = v184 + 2;
                  v138 = v247;
                  *v184 = v255;
                  LODWORD(v184) = v185;
                  v143 = &v137[v185];
                  v136 = v131->m128i_i64[1];
                  v142 = (_DWORD)v184 + 1;
                }
                else
                {
                  v141 = v140;
                  v142 = v140 + 1;
                  v143 = &v137[v141];
                }
              }
              else
              {
                v249 = v138;
                v203 = (_QWORD *)sub_186B270(0x18u);
                v137 = v203 + 1;
                *v203 = 2;
                v136 = v131->m128i_i64[1];
                v142 = 1;
                *((_QWORD *)v134 + 1) = v137;
                v138 = v249;
                v143 = v137;
              }
              *v143 = v139;
              ++v138;
              *((_DWORD *)v137 - 1) = v142;
            }
            while ( v136 );
            v133 = *((_DWORD *)v236 - 1);
          }
          v130 = v236;
          ++v132;
          *((_DWORD *)v236 - 1) = v133 + 1;
          if ( v132 >= v102[-1].m128i_i32[3] )
            break;
          v131 = &v102[v132];
LABEL_136:
          v133 = *((_DWORD *)v130 - 1);
          v134 = (char *)&v130[2 * v133];
          if ( v133 == *((_DWORD *)v130 - 2) )
          {
            v248 = (3 * v133 + 1) >> 1;
            v186 = 16 * v248 + 8;
            if ( 16 * v133 + 8 >= v186 || v133 >= (3 * v133 + 1) >> 1 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v290, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, &v290);
              sub_233E40((__int64)&v290);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v187 = sub_186B270(v186);
            v188 = (char *)(v187 + 8);
            v189 = *((unsigned int *)v236 - 1);
            v190 = v236;
            v191 = v187 + 8;
            *(_DWORD *)(v187 + 4) = v189;
            v192 = v189;
            v193 = &v236[2 * v189];
            if ( v193 != v236 )
            {
              do
              {
                v194 = *v190;
                v190 += 2;
                v191 += 16;
                *(_QWORD *)(v191 - 16) = v194;
                v195 = *(v190 - 1);
                *(v190 - 1) = 0;
                *(_QWORD *)(v191 - 8) = v195;
              }
              while ( v193 != v190 );
            }
            v196 = &v236[2 * v189];
            if ( v192 )
            {
              ptrb = (void *)v187;
              v273 = v187 + 8;
              v278 = v131;
              v256 = v132;
              v197 = v236;
              do
              {
                v198 = (__int64 *)v197[1];
                if ( v198 )
                {
                  v199 = &v198[*((unsigned int *)v198 - 1)];
                  if ( v198 >= v199 )
                    goto LABEL_227;
                  do
                  {
                    while ( 1 )
                    {
                      v200 = *v198;
                      if ( *v198 )
                      {
                        v201 = *v197;
                        v38 = (*(_DWORD *)(v200 + 8))-- == 1;
                        if ( v38 )
                          break;
                      }
                      if ( ++v198 >= v199 )
                        goto LABEL_226;
                    }
                    sub_15D7BC0(v201, v200);
                    ++v198;
                  }
                  while ( v198 < v199 );
LABEL_226:
                  v198 = (__int64 *)v197[1];
                  if ( v198 )
LABEL_227:
                    sub_186B220(v198 - 1);
                }
                v197 += 2;
              }
              while ( v196 != v197 );
              v132 = v256;
              v187 = (__int64)ptrb;
              v188 = (char *)v273;
              v131 = v278;
            }
            ptrg = v188;
            v257 = (_DWORD *)v187;
            sub_186B220(v236 - 1);
            v202 = (unsigned int)v257[1];
            *v257 = v248;
            v236 = (__int64 *)ptrg;
            v133 = v202;
            v134 = &ptrg[16 * v202];
          }
        }
      }
LABEL_150:
      if ( (unsigned __int8)sub_1859630(
                              **(_QWORD **)(*(_QWORD *)(a2 + 32) + 32LL),
                              "xform.instantiate_arrays.enforce",
                              *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 8LL,
                              0) )
        goto LABEL_164;
      v144 = *(_QWORD *)(a2 + 24);
      ++*(_DWORD *)(v14 + 8);
      v254 = v144;
      v288 = v144;
      v145 = (_QWORD *)sub_186B270(0x18u);
      v246 = v145 + 1;
      v145[1] = v14;
      *v145 = 0x100000002LL;
      if ( v236 )
      {
        v146 = *((unsigned int *)v236 - 1);
        if ( (_DWORD)v146 != *((_DWORD *)v236 - 2) )
        {
          v147 = (unsigned int *)&v236[2 * v146];
          *((_QWORD *)v147 + 1) = 0;
          *(_QWORD *)v147 = v254;
LABEL_154:
          v148 = v145[1];
          if ( v148 )
            ++*(_DWORD *)(v148 + 8);
          ptrf = v145;
          v149 = (_QWORD *)sub_186B270(0x18u);
          v145 = ptrf;
          v150 = nullptr;
          v151 = v149 + 1;
          *v149 = 2;
          v152 = 1;
          *((_QWORD *)v147 + 1) = v151;
          v153 = v151;
          while ( 1 )
          {
            *v151 = v148;
            v150 = (char *)v150 + 1;
            *(v153 - 1) = v152;
            v154 = *((unsigned int *)v145 + 1);
            if ( (unsigned int)v150 >= (unsigned int)v154 )
              break;
            v148 = v145[(_QWORD)v150 + 1];
            if ( v148 )
              ++*(_DWORD *)(v148 + 8);
            v155 = *(v153 - 1);
            if ( v155 == *(v153 - 2) )
            {
              v204 = (3 * v155 + 1) >> 1;
              v205 = 8 * v204 + 8;
              if ( 8 * v155 + 8 >= (unsigned int)v205 || v155 >= v204 )
              {
                v237 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v290, "Overflow encountered when expanding vector");
                *v237 = (char *)off_1C63128;
                sub_2333C0(v237 + 1, &v290);
                sub_233E40((__int64)&v290);
                __cxa_throw(v237, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v279 = (3 * v155 + 1) >> 1;
              v274 = v145;
              ptrh = v150;
              v206 = (unsigned int *)sub_186B300(v153 - 2, v205);
              v207 = v206[1];
              v153 = v206 + 2;
              v150 = ptrh;
              v145 = v274;
              *((_QWORD *)v147 + 1) = v206 + 2;
              *v206 = v279;
              LODWORD(v206) = v207;
              v151 = &v153[2 * v207];
              v152 = (_DWORD)v206 + 1;
            }
            else
            {
              v156 = v155;
              v152 = v155 + 1;
              v151 = &v153[2 * v156];
            }
          }
          ++*((_DWORD *)v236 - 1);
          v208 = (unsigned __int64)&v246[v154];
          if ( (unsigned __int64)v246 < v208 )
          {
            v209 = v246;
            v210 = v145;
            do
            {
              v211 = *v209;
              if ( *v209 )
              {
                v38 = (*(_DWORD *)(v211 + 8))-- == 1;
                if ( v38 )
                  sub_15D7BC0(v254, v211);
              }
              ++v209;
            }
            while ( (unsigned __int64)v209 < v208 );
            v145 = v210;
          }
          goto LABEL_163;
        }
        v213 = (unsigned int)(3 * v146 + 1) >> 1;
        v214 = 16 * v213 + 8;
        if ( 16 * (int)v146 + 8 >= v214 || (unsigned int)v146 >= v213 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v290, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v290);
          sub_233E40((__int64)&v290);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptri = v145;
        v215 = (unsigned int *)sub_186B270(v214);
        v216 = v215 + 2;
        v217 = *((unsigned int *)v236 - 1);
        v218 = v236;
        v215[1] = v217;
        v219 = &v236[2 * v217];
        v220 = ptri;
        if ( v236 != v219 )
        {
          do
          {
            v221 = *v218;
            v218 += 2;
            v216 += 4;
            *((_QWORD *)v216 - 2) = v221;
            v222 = *(v218 - 1);
            *(v218 - 1) = 0;
            *((_QWORD *)v216 - 1) = v222;
          }
          while ( v218 != v219 );
        }
        ptrc = &v236[2 * v217];
        if ( (_DWORD)v217 )
        {
          v280 = v220;
          v282 = v213;
          v223 = v236;
          do
          {
            v224 = (__int64 *)v223[1];
            if ( v224 )
            {
              v225 = &v224[*((unsigned int *)v224 - 1)];
              if ( v224 >= v225 )
                goto LABEL_256;
              do
              {
                while ( 1 )
                {
                  v226 = *v224;
                  if ( *v224 )
                  {
                    v227 = *v223;
                    v38 = (*(_DWORD *)(v226 + 8))-- == 1;
                    if ( v38 )
                      break;
                  }
                  if ( ++v224 >= v225 )
                    goto LABEL_255;
                }
                sub_15D7BC0(v227, v226);
                ++v224;
              }
              while ( v224 < v225 );
LABEL_255:
              v224 = (__int64 *)v223[1];
              if ( v224 )
LABEL_256:
                sub_186B220(v224 - 1);
            }
            v223 += 2;
          }
          while ( v223 != ptrc );
          v220 = v280;
          v213 = v282;
        }
        ptrj = v220;
        sub_186B220(v236 - 1);
        v228 = v215[1];
        v145 = ptrj;
        *v215 = v213;
        v229 = v228;
        v236 = (__int64 *)(v215 + 2);
        v147 = &v215[4 * v228 + 2];
        v230 = *((_DWORD *)ptrj + 1);
      }
      else
      {
        ptrk = v145;
        v235 = (_QWORD *)sub_186B270(0x28u);
        v145 = ptrk;
        v147 = (unsigned int *)(v235 + 1);
        *v235 = 2;
        v229 = 0;
        v236 = (__int64 *)v147;
        v230 = *((_DWORD *)ptrk + 1);
      }
      *((_QWORD *)v147 + 1) = 0;
      *(_QWORD *)v147 = v254;
      if ( v230 )
        goto LABEL_154;
      *((_DWORD *)v236 - 1) = v229 + 1;
LABEL_163:
      sub_186B220(v145);
LABEL_164:
      if ( v102 )
      {
        v157 = v102[-1].m128i_u32[3];
        if ( v157 )
        {
          v158 = (__int64 *)v102;
          v159 = &v102[v157];
          do
          {
            v160 = (__int64 *)v158[1];
            if ( v160 )
            {
              v161 = &v160[*((unsigned int *)v160 - 1)];
              if ( v160 >= v161 )
                goto LABEL_175;
              do
              {
                while ( 1 )
                {
                  v162 = *v160;
                  if ( *v160 )
                  {
                    v163 = *v158;
                    v38 = (*(_DWORD *)(v162 + 8))-- == 1;
                    if ( v38 )
                      break;
                  }
                  if ( ++v160 >= v161 )
                    goto LABEL_174;
                }
                sub_15D7BC0(v163, v162);
                ++v160;
              }
              while ( v160 < v161 );
LABEL_174:
              v160 = (__int64 *)v158[1];
              if ( v160 )
LABEL_175:
                sub_186B220(v160 - 1);
            }
            v158 += 2;
          }
          while ( v159 != (__m128i *)v158 );
        }
        sub_186B220(&v102[-1].m128i_u64[1]);
      }
LABEL_28:
      v38 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v38 )
        break;
      if ( v271 == ++v238 )
        goto LABEL_30;
    }
    sub_15D7BC0(v270, v14);
    ++v238;
  }
  while ( v238 != v271 );
LABEL_30:
  v39 = *(_QWORD *)(a2 + 24);
  *a1 = v39;
  a1[1] = 0;
  if ( !v236 )
  {
LABEL_263:
    v236 = nullptr;
    k = nullptr;
    goto LABEL_38;
  }
  v40 = *((_DWORD *)v236 - 1);
  if ( v40 )
  {
    v41 = (_QWORD *)sub_186B270(0x10u);
    *v41 = 2;
    for ( k = v41 + 1; ; k = v45 + 2 )
    {
      v46 = *(k - 2);
      if ( v46 >= v40 )
        break;
      v43 = (3 * v46 + 1) >> 1;
      v44 = 4 * v43 + 8;
      if ( 4 * v46 + 8 >= (unsigned int)v44 || v46 >= v43 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v290, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v290);
        sub_233E40((__int64)&v290);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v45 = (unsigned int *)sub_186B300(k - 2, v44);
      *v45 = v43;
    }
    *(k - 1) = v40;
    memset(k, 0, 4LL * v40);
    v39 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    k = nullptr;
  }
LABEL_38:
  v287[0] = v39;
  if ( k )
  {
LABEL_39:
    v47 = nullptr;
    for ( m = 0; m < *(k - 1); ++m )
    {
      v52 = *(_QWORD *)(v236[2 * m + 1] + 8LL * (unsigned int)k[m]);
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      if ( v47 )
      {
        v53 = *((_DWORD *)v47 - 1);
        if ( v53 == *((_DWORD *)v47 - 2) )
        {
          v54 = (3 * v53 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v53 + 8 >= v55 || v53 >= v54 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v290, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v290);
            sub_233E40((__int64)&v290);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v239 = (3 * v53 + 1) >> 1;
          v56 = (unsigned int *)sub_186B300(v47 - 1, v55);
          v47 = v56 + 2;
          *v56 = v239;
          LODWORD(v56) = v56[1];
          v51 = &v47[(unsigned int)v56];
          v50 = (_DWORD)v56 + 1;
        }
        else
        {
          v49 = v53;
          v50 = v53 + 1;
          v51 = &v47[v49];
        }
      }
      else
      {
        v180 = (_QWORD *)sub_186B270(0x18u);
        *v180 = 2;
        v50 = 1;
        v47 = v180 + 1;
        v51 = v47;
      }
      *v51 = v52;
      *((_DWORD *)v47 - 1) = v50;
    }
  }
  else
  {
    v47 = nullptr;
  }
  v287[1] = v47;
  sub_617C70(&v288, a2, (_QWORD *)v285.m128i_i64[1], (__int64)v287);
  v88 = v288;
  v89 = (_QWORD *)a1[1];
  if ( v89 )
  {
    v90 = *((_DWORD *)v89 - 1);
    if ( v90 != *((_DWORD *)v89 - 2) )
    {
      v91 = v90;
      v92 = v90 + 1;
      v93 = &v89[v91];
      goto LABEL_87;
    }
    v164 = (3 * v90 + 1) >> 1;
    v165 = 8 * v164 + 8;
    if ( 8 * v90 + 8 >= v165 || v90 >= v164 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v290, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, &v290);
      sub_233E40((__int64)&v290);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v166 = (unsigned int *)sub_186B300(v89 - 1, v165);
    v167 = v166 + 2;
    *v166 = v164;
    a1[1] = v166 + 2;
    LODWORD(v166) = v166[1];
    *(_QWORD *)&v167[2 * (unsigned int)v166] = v88;
    *(v167 - 1) = (_DWORD)v166 + 1;
    if ( !k )
    {
LABEL_181:
      if ( !v47 )
        goto LABEL_192;
      goto LABEL_184;
    }
  }
  else
  {
    v231 = (_QWORD *)sub_186B270(0x18u);
    *v231 = 2;
    v89 = v231 + 1;
    a1[1] = v231 + 1;
    v93 = v231 + 1;
    v92 = 1;
LABEL_87:
    *v93 = v88;
    *((_DWORD *)v89 - 1) = v92;
    if ( !k )
      goto LABEL_181;
  }
  v94 = -1;
  while ( *(k - 1) != ++v94 )
  {
    v95 = &k[v94];
    v96 = v236[2 * v94 + 1];
    v97 = *v95 + 1;
    if ( v96 && v97 < *(_DWORD *)(v96 - 4) )
    {
      *v95 = v97;
      if ( v47 )
      {
        v98 = v47;
        v99 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
        if ( (unsigned __int64)v47 < v99 )
        {
          do
          {
            while ( 1 )
            {
              v100 = *v98;
              if ( *v98 )
              {
                v38 = (*(_DWORD *)(v100 + 8))-- == 1;
                if ( v38 )
                  break;
              }
              if ( (unsigned __int64)++v98 >= v99 )
                goto LABEL_99;
            }
            ++v98;
            sub_15D7BC0(v39, v100);
          }
          while ( (unsigned __int64)v98 < v99 );
        }
LABEL_99:
        sub_186B220(v47 - 1);
      }
      v39 = *(_QWORD *)(a2 + 24);
      v287[0] = v39;
      goto LABEL_39;
    }
  }
  if ( !v47 )
    goto LABEL_191;
LABEL_184:
  v168 = v47;
  v169 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
  if ( (unsigned __int64)v47 < v169 )
  {
    do
    {
      while ( 1 )
      {
        v170 = *v168;
        if ( *v168 )
        {
          v38 = (*(_DWORD *)(v170 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( (unsigned __int64)++v168 >= v169 )
          goto LABEL_190;
      }
      ++v168;
      sub_15D7BC0(v39, v170);
    }
    while ( (unsigned __int64)v168 < v169 );
  }
LABEL_190:
  sub_186B220(v47 - 1);
  if ( k )
LABEL_191:
    sub_186B220(k - 2);
LABEL_192:
  if ( v236 )
  {
    v171 = *((_DWORD *)v236 - 1);
    if ( v171 )
    {
      v172 = v236;
      v173 = &v236[2 * v171];
      do
      {
        v174 = (__int64 *)v172[1];
        if ( v174 )
        {
          v175 = &v174[*((unsigned int *)v174 - 1)];
          if ( v174 >= v175 )
            goto LABEL_203;
          do
          {
            while ( 1 )
            {
              v176 = *v174;
              if ( *v174 )
              {
                v177 = *v172;
                v38 = (*(_DWORD *)(v176 + 8))-- == 1;
                if ( v38 )
                  break;
              }
              if ( ++v174 >= v175 )
                goto LABEL_202;
            }
            sub_15D7BC0(v177, v176);
            ++v174;
          }
          while ( v174 < v175 );
LABEL_202:
          v174 = (__int64 *)v172[1];
          if ( v174 )
LABEL_203:
            sub_186B220(v174 - 1);
        }
        v172 += 2;
      }
      while ( v173 != v172 );
    }
    sub_186B220(v236 - 1);
  }
  return a1;
}

