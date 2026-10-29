__int64 __fastcall sub_974680(_QWORD *a1, __int64 a2, __int64 **a3)
{
  char **v3; // r12
  char **v4; // r15
  char **v5; // r12
  char **v6; // r15
  char **v7; // r12
  char **v8; // r12
  char **exception; // rbx
  char **v10; // r12
  char **v11; // r15
  char **v12; // r12
  unsigned int **v13; // rbx
  unsigned int **v14; // rbp
  __int64 v15; // rdx
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  _DWORD *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // rax
  __m128i *v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int *v29; // rbp
  unsigned int v30; // r12d
  int v31; // r14d
  _QWORD *v32; // r14
  _QWORD *v33; // r13
  __int64 v34; // rax
  unsigned int *v35; // rax
  _QWORD *v36; // r12
  _QWORD *v37; // rdx
  __int64 v38; // rax
  unsigned int *v39; // rax
  unsigned int v40; // eax
  unsigned int i; // ecx
  unsigned int v42; // r13d
  size_t v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdi
  _DWORD *v46; // r15
  __int64 v47; // rax
  __int64 *v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __m128i v52; // xmm0
  unsigned __int64 v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // r8
  _QWORD *v56; // r14
  _QWORD *v57; // r13
  void *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r14d
  unsigned int v62; // eax
  unsigned int j; // ecx
  unsigned int v64; // r13d
  size_t v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdi
  _DWORD *v68; // r14
  __int64 v69; // rax
  __int64 *v70; // r8
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __m128i v74; // xmm0
  unsigned __int64 v75; // rdx
  __int64 v76; // r8
  _QWORD *v77; // r13
  _QWORD *v78; // r15
  void *v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned int v82; // r13d
  size_t v83; // rsi
  unsigned int *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r15d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int32 *v92; // rsi
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rcx
  const __m128i *v95; // rax
  __m128i v96; // xmm4
  __m128i v97; // xmm5
  __m128i v98; // xmm2
  __m128i v99; // xmm3
  __m128i v100; // xmm1
  __m128i v101; // xmm0
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __m128i v104; // xmm1
  __m128i v105; // xmm0
  __m128i v106; // xmm0
  __m128i v107; // xmm3
  __m128i v108; // xmm1
  unsigned int v109; // ebp
  const __m128i *v110; // rdx
  unsigned int v111; // eax
  unsigned int v112; // eax
  unsigned int v113; // eax
  unsigned int v114; // eax
  unsigned int v115; // edx
  int v116; // eax
  unsigned int v117; // eax
  unsigned int *k; // r13
  __int64 v119; // rbx
  __int64 *v120; // r13
  __int128 v121; // kr00_16
  void *v122; // r12
  char *v123; // r14
  char *v124; // rbp
  __int64 v125; // rdi
  __int64 v126; // r12
  __int64 v127; // rdx
  unsigned int *v128; // rbp
  unsigned int *v129; // r14
  unsigned int *v130; // r15
  __int64 v131; // rcx
  int v132; // edx
  bool v133; // zf
  unsigned int v134; // eax
  __int64 v135; // rdx
  int v136; // eax
  __int64 *v137; // rdx
  unsigned int v138; // eax
  __int64 v139; // rax
  unsigned __int64 v140; // rax
  __int64 v141; // r8
  _QWORD *v142; // r13
  _QWORD *v143; // r15
  void *v144; // rdi
  unsigned int v145; // eax
  unsigned int v146; // r12d
  unsigned int v147; // edx
  __int64 v148; // rax
  __int64 v149; // rdi
  _DWORD *v150; // r14
  __int64 v151; // rax
  __int64 *v152; // r8
  unsigned __int64 v153; // rdx
  __int64 v154; // rax
  unsigned __int64 v155; // rdx
  __m128i v156; // xmm0
  unsigned __int64 v157; // rdx
  __int64 *v158; // rax
  __int64 v159; // rcx
  unsigned __int64 v160; // rdx
  __int64 *v161; // rax
  __int64 v162; // rcx
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  unsigned int v165; // r13d
  unsigned int v166; // edx
  unsigned int *v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  unsigned int v170; // edx
  size_t v171; // rsi
  unsigned int *v172; // rax
  __int64 *v173; // rax
  __int64 v174; // rdx
  __int64 *v175; // r14
  _QWORD *v176; // rdx
  unsigned int m; // ecx
  __int64 v178; // rsi
  int v179; // eax
  _QWORD *v180; // rsi
  __int64 v181; // r15
  unsigned int v182; // eax
  unsigned int v183; // r8d
  size_t v184; // rsi
  unsigned int *v185; // rax
  __int64 v186; // rsi
  _QWORD *v187; // rax
  __int64 *v188; // r14
  unsigned __int64 v189; // r15
  __int64 v190; // rsi
  __int64 *v191; // rbp
  __int64 *v192; // r14
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 *v195; // rbp
  __int64 *v196; // r12
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 *v199; // rbp
  __int64 *v200; // r12
  __int64 v201; // rax
  size_t v203; // rdi
  unsigned int *v204; // rcx
  __int64 *v205; // r15
  __int64 v206; // r14
  __int64 *v207; // rsi
  _DWORD *v208; // rdi
  int v209; // r10d
  __int64 *v210; // r9
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 *v213; // r14
  __int64 *v214; // rbx
  unsigned int *v215; // r15
  __int64 *v216; // rbp
  __int64 *v217; // r12
  __int64 v218; // rsi
  __int64 v219; // rdi
  _QWORD *v220; // rax
  _QWORD *v221; // rax
  _QWORD *v222; // rax
  unsigned __int64 v223; // rdx
  __int64 *v224; // rax
  __int64 v225; // rcx
  __int64 v226; // rax
  __int64 v227; // rcx
  _QWORD *v228; // r13
  unsigned int v229; // eax
  unsigned int v230; // r12d
  unsigned int v231; // edx
  __int64 v232; // rax
  __int64 v233; // rdi
  _DWORD *v234; // r14
  __int64 v235; // rax
  unsigned int *v236; // r8
  unsigned __int64 v237; // rdx
  __int64 v238; // rax
  unsigned __int64 v239; // rdx
  __m128i v240; // xmm0
  unsigned __int64 v241; // rax
  __int64 v242; // r8
  unsigned int *v243; // r12
  unsigned int *v244; // r15
  void *v245; // rdi
  unsigned __int64 v246; // rdx
  unsigned int *v247; // rax
  __int64 v248; // rcx
  _QWORD *v249; // rax
  unsigned __int64 v251; // [rsp+8h] [rbp-160h]
  unsigned __int64 v252; // [rsp+8h] [rbp-160h]
  unsigned __int64 v253; // [rsp+8h] [rbp-160h]
  unsigned int v254; // [rsp+8h] [rbp-160h]
  unsigned int v255; // [rsp+8h] [rbp-160h]
  __int64 v256; // [rsp+8h] [rbp-160h]
  __int64 v257; // [rsp+8h] [rbp-160h]
  unsigned int v258; // [rsp+8h] [rbp-160h]
  unsigned int v259; // [rsp+8h] [rbp-160h]
  unsigned __int64 v260; // [rsp+8h] [rbp-160h]
  unsigned int v261; // [rsp+10h] [rbp-158h]
  unsigned int v262; // [rsp+10h] [rbp-158h]
  unsigned int v263; // [rsp+10h] [rbp-158h]
  unsigned int **v264; // [rsp+10h] [rbp-158h]
  unsigned int v265; // [rsp+10h] [rbp-158h]
  unsigned int v266; // [rsp+18h] [rbp-150h]
  unsigned int v267; // [rsp+18h] [rbp-150h]
  __int64 v268; // [rsp+18h] [rbp-150h]
  unsigned int v269; // [rsp+20h] [rbp-148h]
  unsigned int v270; // [rsp+20h] [rbp-148h]
  __int64 v271; // [rsp+20h] [rbp-148h]
  __int64 *v272; // [rsp+20h] [rbp-148h]
  unsigned int *v273; // [rsp+28h] [rbp-140h]
  __int64 v274; // [rsp+28h] [rbp-140h]
  unsigned int v275; // [rsp+30h] [rbp-138h]
  unsigned int **v276; // [rsp+30h] [rbp-138h]
  unsigned int v278; // [rsp+40h] [rbp-128h]
  const __m128i *v279; // [rsp+48h] [rbp-120h]
  __int64 v280; // [rsp+50h] [rbp-118h]
  __int64 v281; // [rsp+60h] [rbp-108h]
  __int128 v282; // [rsp+68h] [rbp-100h]
  unsigned int *v283; // [rsp+80h] [rbp-E8h]
  unsigned int *v284; // [rsp+80h] [rbp-E8h]
  __int64 v285; // [rsp+88h] [rbp-E0h]
  __int64 *v286; // [rsp+90h] [rbp-D8h]
  const __m128i *v287; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v288[2]; // [rsp+B8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v290; // [rsp+D8h] [rbp-90h]
  int v291; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v292; // [rsp+F0h] [rbp-78h] BYREF
  unsigned int *v293; // [rsp+F8h] [rbp-70h]
  __int128 v294; // [rsp+100h] [rbp-68h]
  __int128 v295; // [rsp+110h] [rbp-58h]
  __int64 v296; // [rsp+120h] [rbp-48h]

  v13 = *(unsigned int ***)(a2 + 8);
  v280 = a1[13];
  if ( !v13 || (v14 = &v13[*((unsigned int *)v13 - 1)], v14 == v13) )
  {
    v279 = nullptr;
  }
  else
  {
    v279 = nullptr;
    v15 = a1[1104];
    do
    {
      v16 = *v13;
      v17 = 0;
      if ( !*((_WORD *)*v13 + 2) )
      {
LABEL_5:
        v18 = *(_DWORD **)(*((_QWORD *)v16 + 2) + 24LL);
        if ( v18 && !*v18 && v18[1] == 8 )
        {
          v17 = v16[6];
          if ( v17 == 1 )
            v16 = *((unsigned int **)v16 + 4);
          else
            v17 = 0;
        }
      }
      v19 = *v16;
      if ( !v15 )
        break;
      while ( (unsigned int)v19 < *(_DWORD *)(v15 - 4) )
      {
        v20 = *(_DWORD *)(v15 + 4 * v19);
        if ( v20 != 0x7FFFFFFF )
        {
          v21 = v17 + 2 * v20;
          if ( v279 )
          {
            v22 = v279[-1].m128i_u32[3];
            if ( (_DWORD)v22 == v279[-1].m128i_i32[2] )
            {
              v165 = (unsigned int)(3 * v22 + 1) >> 1;
              v166 = 4 * v165 + 8;
              if ( 4 * (int)v22 + 8 >= v166 || (unsigned int)v22 >= v165 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v292);
                sub_233E40((__int64)&v292);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v167 = (unsigned int *)sub_186B300(&v279[-1].m128i_u64[1], v166);
              *v167 = v165;
              v279 = (const __m128i *)(v167 + 2);
              v23 = (__m128i *)&v167[v167[1] + 2];
            }
            else
            {
              v23 = (__m128i *)((char *)v279 + 4 * v22);
            }
          }
          else
          {
            v222 = (_QWORD *)sub_186B270(0x10u);
            *v222 = 2;
            v23 = (__m128i *)(v222 + 1);
            v279 = v23;
          }
          v23->m128i_i32[0] = v21;
          ++v279[-1].m128i_i32[3];
        }
        if ( v14 != ++v13 )
        {
          v17 = 0;
          v15 = a1[1104];
          v16 = *v13;
          if ( !*((_WORD *)*v13 + 2) )
            goto LABEL_5;
          v19 = *v16;
          if ( v15 )
            continue;
        }
        goto LABEL_17;
      }
      ++v13;
    }
    while ( v14 != v13 );
  }
LABEL_17:
  v24 = 0;
  v25 = a1[1107];
  if ( v25 )
  {
    v278 = 0;
LABEL_19:
    if ( v278 >= *(_DWORD *)(v25 - 4) )
      goto LABEL_90;
    v26 = *(_QWORD *)(v25 + 8LL * v278);
    if ( !v26 )
      goto LABEL_89;
    v27 = *(unsigned int *)(v26 - 4);
    v28 = *(unsigned int *)(v26 - 8);
    v29 = (unsigned int *)(v26 + v28);
    v273 = (unsigned int *)(v27 + v26);
    if ( (_DWORD)v27 == (_DWORD)v28 )
      goto LABEL_89;
    v269 = v278 ^ 1;
    while ( 1 )
    {
      v30 = *v29;
      if ( v269 < *v29 )
      {
        v261 = v30 + 1;
        if ( v24 )
        {
          v275 = *(_DWORD *)(v24 - 4);
          if ( v275 < v261 )
            goto LABEL_39;
LABEL_27:
          v31 = v30 ^ 1;
          if ( (v30 ^ 1) < v278 )
            v31 = v278;
          v266 = v31 + 1;
          if ( v275 < v31 + 1 )
            goto LABEL_59;
          goto LABEL_30;
        }
        if ( v30 == -1 )
        {
          v163 = (_QWORD *)sub_186B270(0x18u);
          v275 = 0;
          v30 = -1;
          v266 = -1;
          *v163 = 2;
          v24 = (unsigned __int64)(v163 + 1);
          goto LABEL_59;
        }
        v164 = (_QWORD *)sub_186B270(0x18u);
        v275 = 0;
        *v164 = 2;
        v24 = (unsigned __int64)(v164 + 1);
        while ( 1 )
        {
LABEL_39:
          v40 = *(_DWORD *)(v24 - 8);
          for ( i = v261; v40 < v261; v40 = *(_DWORD *)(v251 - 8) )
          {
            v42 = (3 * v40 + 1) >> 1;
            v43 = 8 * v42 + 8;
            v267 = v42;
            if ( 8 * v40 + 8 >= (unsigned int)v43 || v40 >= v42 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, &v292);
              sub_233E40((__int64)&v292);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v44 = sub_186B270(v43);
            v45 = *(unsigned int *)(v24 - 4);
            v46 = (_DWORD *)v44;
            v44 += 8;
            *(_DWORD *)(v44 - 4) = v45;
            v251 = v44;
            v47 = 8 * v45;
            v48 = (__int64 *)(v24 + 8 * v45);
            if ( v48 != (__int64 *)v24 )
            {
              v49 = v47 - 8;
              if ( (unsigned __int64)(v47 - 8) <= 8 || v251 < v24 + 16 && v24 < (unsigned __int64)(v46 + 6) )
              {
                v160 = v251;
                v161 = (__int64 *)v24;
                do
                {
                  v162 = *v161;
                  *v161++ = 0;
                  v160 += 8LL;
                  *(_QWORD *)(v160 - 8) = v162;
                }
                while ( v161 != v48 );
              }
              else
              {
                v50 = 0;
                v51 = (v49 >> 3) + 1;
                do
                {
                  v52 = _mm_loadu_si128((const __m128i *)(v24 + v50 * 4));
                  *(_OWORD *)(v24 + v50 * 4) = 0;
                  *(__m128i *)&v46[v50 + 2] = v52;
                  v50 += 4;
                }
                while ( 4 * (v51 >> 1) != v50 );
                if ( (v51 & 1) != 0 )
                {
                  v53 = v51 & 0xFFFFFFFFFFFFFFFELL;
                  v54 = (__int64 *)(v24 + 8 * v53);
                  v55 = *v54;
                  *v54 = 0;
                  *(_QWORD *)(v251 + 8 * v53) = v55;
                }
              }
            }
            v56 = (_QWORD *)(v24 + 8 * v45);
            v57 = (_QWORD *)v24;
            if ( (_DWORD)v45 )
            {
              do
              {
                while ( *v57 )
                {
                  v58 = (void *)(*v57++ - 8LL);
                  sub_186B220(v58);
                  if ( v56 == v57 )
                    goto LABEL_53;
                }
                ++v57;
              }
              while ( v56 != v57 );
            }
LABEL_53:
            sub_186B220((void *)(v24 - 8));
            v24 = v251;
            i = v261;
            *v46 = v267;
          }
          *(_DWORD *)(v24 - 4) = i;
          v59 = 8LL * i;
          v60 = 8LL * v275;
          if ( v60 != v59 )
            memset((void *)(v24 + v60), 0, v59 - v60);
          v61 = v30 ^ 1;
          if ( (v30 ^ 1) < v278 )
            v61 = v278;
          v266 = v61 + 1;
          v275 = v261;
          if ( v261 < v61 + 1 )
          {
LABEL_59:
            v62 = *(_DWORD *)(v24 - 8);
            for ( j = v266; v62 < v266; v62 = *(_DWORD *)(v252 - 8) )
            {
              v64 = (3 * v62 + 1) >> 1;
              v65 = 8 * v64 + 8;
              v262 = v64;
              if ( 8 * v62 + 8 >= (unsigned int)v65 || v62 >= v64 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, &v292);
                sub_233E40((__int64)&v292);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v66 = sub_186B270(v65);
              v67 = *(unsigned int *)(v24 - 4);
              v68 = (_DWORD *)v66;
              v66 += 8;
              *(_DWORD *)(v66 - 4) = v67;
              v252 = v66;
              v69 = 8 * v67;
              v70 = (__int64 *)(v24 + 8 * v67);
              if ( v70 != (__int64 *)v24 )
              {
                v71 = v69 - 8;
                if ( (unsigned __int64)(v69 - 8) <= 8 || v252 < v24 + 16 && v24 < (unsigned __int64)(v68 + 6) )
                {
                  v157 = v252;
                  v158 = (__int64 *)v24;
                  do
                  {
                    v159 = *v158;
                    *v158++ = 0;
                    v157 += 8LL;
                    *(_QWORD *)(v157 - 8) = v159;
                  }
                  while ( v70 != v158 );
                }
                else
                {
                  v72 = 0;
                  v73 = (v71 >> 3) + 1;
                  do
                  {
                    v74 = _mm_loadu_si128((const __m128i *)(v24 + v72 * 4));
                    *(_OWORD *)(v24 + v72 * 4) = 0;
                    *(__m128i *)&v68[v72 + 2] = v74;
                    v72 += 4;
                  }
                  while ( 4 * (v73 >> 1) != v72 );
                  if ( (v73 & 1) != 0 )
                  {
                    v75 = 8 * (v73 & 0xFFFFFFFFFFFFFFFELL);
                    v76 = *(_QWORD *)(v24 + v75);
                    *(_QWORD *)(v24 + v75) = 0;
                    *(_QWORD *)&v68[v75 / 4 + 2] = v76;
                  }
                }
              }
              v77 = (_QWORD *)(v24 + 8 * v67);
              v78 = (_QWORD *)v24;
              if ( (_DWORD)v67 )
              {
                do
                {
                  while ( *v78 )
                  {
                    v79 = (void *)(*v78++ - 8LL);
                    sub_186B220(v79);
                    if ( v77 == v78 )
                      goto LABEL_73;
                  }
                  ++v78;
                }
                while ( v78 != v77 );
              }
LABEL_73:
              sub_186B220((void *)(v24 - 8));
              v24 = v252;
              j = v266;
              *v68 = v262;
            }
            *(_DWORD *)(v24 - 4) = j;
            v80 = 8LL * j;
            v81 = 8LL * v275;
            if ( v81 != v80 )
              memset((void *)(v24 + v81), 0, v80 - v81);
          }
LABEL_30:
          v32 = (_QWORD *)(v24 + 8LL * (v278 ^ 1));
          v33 = (_QWORD *)*v32;
          if ( *v32 )
          {
            v34 = *((unsigned int *)v33 - 1);
            if ( (_DWORD)v34 == *((_DWORD *)v33 - 2) )
            {
              v86 = (unsigned int)(3 * v34 + 1) >> 1;
              v87 = 4 * v86 + 8;
              if ( 4 * (int)v34 + 8 >= (unsigned int)v87 || (unsigned int)v34 >= v86 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, &v292);
                sub_233E40((__int64)&v292);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v88 = (unsigned int *)sub_186B300(v33 - 1, v87);
              v33 = v88 + 2;
              *v88 = v86;
              v89 = v88[1];
              *v32 = v33;
              v35 = (unsigned int *)v33 + v89;
            }
            else
            {
              v35 = (unsigned int *)v33 + v34;
            }
          }
          else
          {
            v169 = (_QWORD *)sub_186B270(0x10u);
            v33 = v169 + 1;
            *v169 = 2;
            *v32 = v169 + 1;
            v35 = (unsigned int *)(v169 + 1);
          }
          *v35 = v30;
          v36 = (_QWORD *)(v24 + 8LL * v30);
          ++*((_DWORD *)v33 - 1);
          v37 = (_QWORD *)*v36;
          if ( *v36 )
          {
            v38 = *((unsigned int *)v37 - 1);
            if ( (_DWORD)v38 == *((_DWORD *)v37 - 2) )
            {
              v82 = (unsigned int)(3 * v38 + 1) >> 1;
              v83 = 4 * v82 + 8;
              if ( 4 * (int)v38 + 8 >= (unsigned int)v83 || (unsigned int)v38 >= v82 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, &v292);
                sub_233E40((__int64)&v292);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v84 = (unsigned int *)sub_186B300(v37 - 1, v83);
              v37 = v84 + 2;
              *v84 = v82;
              v85 = v84[1];
              *v36 = v37;
              v39 = (unsigned int *)v37 + v85;
            }
            else
            {
              v39 = (unsigned int *)v37 + v38;
            }
          }
          else
          {
            v168 = (_QWORD *)sub_186B270(0x10u);
            v37 = v168 + 1;
            *v168 = 2;
            *v36 = v168 + 1;
            v39 = (unsigned int *)(v168 + 1);
          }
          ++v29;
          *v39 = v269;
          ++*((_DWORD *)v37 - 1);
          if ( v273 == v29 )
          {
LABEL_88:
            v25 = a1[1107];
LABEL_89:
            ++v278;
            if ( !v25 )
              goto LABEL_90;
            goto LABEL_19;
          }
          v30 = *v29;
          if ( v269 >= *v29 )
            break;
          v261 = v30 + 1;
          v275 = *(_DWORD *)(v24 - 4);
          if ( v275 >= v30 + 1 )
            goto LABEL_27;
        }
      }
      if ( ++v29 == v273 )
        goto LABEL_88;
    }
  }
LABEL_90:
  v90 = (_QWORD *)sub_186B270(0xC0u);
  *v90 = 0;
  v90[2] = 0;
  v90[3] = 0;
  v90[5] = 0;
  v90[6] = 0;
  v90[8] = 0;
  v90[9] = 0;
  v90[11] = 0;
  v90[12] = 0;
  v90[14] = 0;
  v90[15] = 0;
  v90[17] = 0;
  v90[18] = 0;
  v90[20] = 0;
  v90[21] = 0;
  v90[23] = 0;
  ptr = v90;
  v290 = 8;
  v291 = 0;
  if ( v279 )
  {
    v91 = 4LL * v279[-1].m128i_u32[3];
    v92 = &v279->m128i_i32[(unsigned __int64)v91 / 4];
    if ( &v279->m128i_i8[v91] != (__int8 *)v279 )
    {
      v93 = v91 - 4;
      v94 = (v93 >> 2) + 1;
      if ( v93 <= 8 )
      {
        v110 = v279;
        v109 = 0;
      }
      else
      {
        v95 = v279;
        v96 = 0;
        v97 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        v98 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
        do
        {
          v99 = _mm_loadu_si128(v95++);
          v100 = _mm_xor_si128(v99, v97);
          v101 = _mm_cmpgt_epi32(_mm_sub_epi32(v100, v98), _mm_sub_epi32(v99, v98));
          v102 = _mm_add_epi32(_mm_or_si128(_mm_andnot_si128(v101, v99), _mm_and_si128(v100, v101)), v97);
          v103 = _mm_cmpgt_epi32(_mm_sub_epi32(v102, v98), _mm_sub_epi32(v96, v98));
          v96 = _mm_or_si128(_mm_andnot_si128(v103, v96), _mm_and_si128(v102, v103));
        }
        while ( &v279[v94 >> 2] != v95 );
        v104 = _mm_srli_si128(v96, 8);
        v105 = _mm_cmpgt_epi32(_mm_sub_epi32(v104, v98), _mm_sub_epi32(v96, v98));
        v106 = _mm_or_si128(_mm_andnot_si128(v105, v96), _mm_and_si128(v104, v105));
        v107 = _mm_srli_si128(v106, 4);
        v108 = _mm_cmpgt_epi32(_mm_sub_epi32(v107, v98), _mm_sub_epi32(v106, v98));
        v109 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v108, v106), _mm_and_si128(v107, v108)));
        if ( (v94 & 3) == 0 )
          goto LABEL_111;
        v110 = (const __m128i *)((char *)v279 + 4 * (v94 & 0xFFFFFFFFFFFFFFFCLL));
      }
      v111 = v110->m128i_i32[0] ^ 1;
      if ( v111 < v110->m128i_i32[0] )
        v111 = v110->m128i_i32[0];
      v112 = v111 + 1;
      if ( v109 < v112 )
        v109 = v112;
      if ( v92 != (__int32 *)((char *)v110->m128i_i64 + 4) )
      {
        v113 = v110->m128i_i32[1] ^ 1;
        if ( v113 < v110->m128i_i32[1] )
          v113 = v110->m128i_u32[1];
        v114 = v113 + 1;
        if ( v109 < v114 )
          v109 = v114;
        if ( v92 != (__int32 *)&v110->m128i_u64[1] )
        {
          v115 = v110->m128i_u32[2];
          v116 = v115 ^ 1;
          if ( (v115 ^ 1) < v115 )
            v116 = v115;
          v117 = v116 + 1;
          if ( v109 < v117 )
            v109 = v117;
        }
      }
LABEL_111:
      if ( v24 )
      {
        v263 = *(_DWORD *)(v24 - 4);
        if ( v263 >= v109 )
          goto LABEL_113;
      }
      else
      {
        if ( !v109 )
          goto LABEL_114;
        v249 = (_QWORD *)sub_186B270(0x18u);
        *v249 = 2;
        v263 = 0;
        v24 = (unsigned __int64)(v249 + 1);
      }
      while ( 1 )
      {
        v145 = *(_DWORD *)(v24 - 8);
        if ( v145 >= v109 )
          break;
        v146 = (3 * v145 + 1) >> 1;
        v147 = 8 * v146 + 8;
        if ( 8 * v145 + 8 >= v147 || v145 >= v146 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, &v292);
          sub_233E40((__int64)&v292);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v148 = sub_186B270(v147);
        v149 = *(unsigned int *)(v24 - 4);
        v150 = (_DWORD *)v148;
        v148 += 8;
        *(_DWORD *)(v148 - 4) = v149;
        v253 = v148;
        v151 = 8 * v149;
        v152 = (__int64 *)(v24 + 8 * v149);
        if ( v152 != (__int64 *)v24 )
        {
          v153 = v151 - 8;
          if ( (unsigned __int64)(v151 - 8) <= 8 || v24 < (unsigned __int64)(v150 + 6) && v253 < v24 + 16 )
          {
            v223 = v253;
            v224 = (__int64 *)v24;
            do
            {
              v225 = *v224;
              *v224++ = 0;
              v223 += 8LL;
              *(_QWORD *)(v223 - 8) = v225;
            }
            while ( v152 != v224 );
          }
          else
          {
            v154 = 0;
            v155 = (v153 >> 3) + 1;
            do
            {
              v156 = _mm_loadu_si128((const __m128i *)(v24 + v154 * 4));
              *(_OWORD *)(v24 + v154 * 4) = 0;
              *(__m128i *)&v150[v154 + 2] = v156;
              v154 += 4;
            }
            while ( v154 != 4 * (v155 >> 1) );
            if ( (v155 & 1) != 0 )
            {
              v140 = 8 * (v155 & 0xFFFFFFFFFFFFFFFELL);
              v141 = *(_QWORD *)(v24 + v140);
              *(_QWORD *)(v24 + v140) = 0;
              *(_QWORD *)&v150[v140 / 4 + 2] = v141;
            }
          }
        }
        v142 = (_QWORD *)(v24 + 8 * v149);
        v143 = (_QWORD *)v24;
        if ( (_DWORD)v149 )
        {
          do
          {
            while ( *v143 )
            {
              v144 = (void *)(*v143++ - 8LL);
              sub_186B220(v144);
              if ( v142 == v143 )
                goto LABEL_146;
            }
            ++v143;
          }
          while ( v143 != v142 );
        }
LABEL_146:
        sub_186B220((void *)(v24 - 8));
        *v150 = v146;
        v24 = v253;
      }
      *(_DWORD *)(v24 - 4) = v109;
      v226 = 8LL * v109;
      v227 = 8LL * v263;
      if ( v227 != v226 )
        memset((void *)(v24 + v227), 0, v226 - v227);
      goto LABEL_282;
    }
  }
  if ( !v24 )
    goto LABEL_114;
  v263 = *(_DWORD *)(v24 - 4);
LABEL_113:
  if ( v263 )
  {
    v109 = v263;
LABEL_282:
    v228 = (_QWORD *)sub_186B270(0x18u);
    *v228 = 2;
    v229 = *(_DWORD *)v228;
    for ( k = (unsigned int *)(v228 + 1); v229 < v109; v229 = *(_DWORD *)(v260 - 8) )
    {
      v230 = (3 * v229 + 1) >> 1;
      v231 = 8 * v230 + 8;
      v265 = v230;
      if ( 8 * v229 + 8 >= v231 || v229 >= v230 )
      {
        v12 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v292, "Overflow encountered when expanding vector");
        *v12 = (char *)off_1C63128;
        sub_2333C0(v12 + 1, &v292);
        sub_233E40((__int64)&v292);
        __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v232 = sub_186B270(v231);
      v233 = *(k - 1);
      v234 = (_DWORD *)v232;
      v232 += 8;
      *(_DWORD *)(v232 - 4) = v233;
      v260 = v232;
      v235 = 8 * v233;
      v236 = &k[2 * v233];
      if ( v236 != k )
      {
        v237 = v235 - 8;
        if ( (unsigned __int64)(v235 - 8) <= 8 || v260 < (unsigned __int64)(k + 4) && k < v234 + 6 )
        {
          v246 = v260;
          v247 = k;
          do
          {
            v248 = *(_QWORD *)v247;
            *(_QWORD *)v247 = 0;
            v247 += 2;
            v246 += 8LL;
            *(_QWORD *)(v246 - 8) = v248;
          }
          while ( v247 != v236 );
        }
        else
        {
          v238 = 0;
          v239 = (v237 >> 3) + 1;
          do
          {
            v240 = _mm_loadu_si128((const __m128i *)&k[v238]);
            *(_OWORD *)&k[v238] = 0;
            *(__m128i *)&v234[v238 + 2] = v240;
            v238 += 4;
          }
          while ( 4 * (v239 >> 1) != v238 );
          if ( (v239 & 1) != 0 )
          {
            v241 = 2 * (v239 & 0xFFFFFFFFFFFFFFFELL);
            v242 = *(_QWORD *)&k[v241];
            *(_QWORD *)&k[v241] = 0;
            *(_QWORD *)&v234[v241 + 2] = v242;
          }
        }
      }
      v243 = &k[2 * v233];
      v244 = k;
      if ( (_DWORD)v233 )
      {
        do
        {
          while ( *(_QWORD *)v244 )
          {
            v245 = (void *)(*(_QWORD *)v244 - 8LL);
            v244 += 2;
            sub_186B220(v245);
            if ( v244 == v243 )
              goto LABEL_296;
          }
          v244 += 2;
        }
        while ( v244 != v243 );
      }
LABEL_296:
      sub_186B220(k - 2);
      k = (unsigned int *)v260;
      *v234 = v265;
    }
    *(k - 1) = v109;
    memset(k, 0, 8LL * v109);
    goto LABEL_115;
  }
LABEL_114:
  k = nullptr;
LABEL_115:
  v292 = v24;
  v293 = k;
  v296 = 0;
  v287 = v279;
  v294 = 0;
  v295 = 0;
  sub_976D40(&v292, &v287, &ptr);
  v119 = v292;
  v120 = (__int64 *)v293;
  v288[0] = 0;
  v282 = v294;
  v121 = v295;
  v281 = v296;
  sub_971220(&v287, (__int64)&ptr, v288);
  v122 = ptr;
  v274 = v288[0];
  if ( ptr )
  {
    if ( (_DWORD)v290 )
    {
      v123 = (char *)ptr;
      v124 = (char *)ptr + 24 * (unsigned int)v290;
      do
      {
        while ( 1 )
        {
          v125 = *((_QWORD *)v123 + 2);
          if ( !v125 )
            break;
          v123 += 24;
          sub_186B220((void *)(v125 - 8));
          if ( v124 == v123 )
            goto LABEL_120;
        }
        v123 += 24;
      }
      while ( v124 != v123 );
    }
LABEL_120:
    sub_186B220(v122);
  }
  if ( !v274 )
    goto LABEL_219;
  v126 = 0;
  v127 = *(unsigned int *)(v274 - 4);
  v264 = (unsigned int **)v274;
  v276 = (unsigned int **)(v274 + 8 * v127);
  if ( (unsigned int **)v274 == v276 )
  {
    if ( (_DWORD)v127 )
      goto LABEL_213;
    sub_186B220((void *)(v274 - 8));
    goto LABEL_219;
  }
  do
  {
    v268 = a1[13];
    v288[1] = v268;
    v128 = *v264;
    if ( *v264 )
    {
      v129 = &v128[*(v128 - 1)];
      if ( v129 != v128 )
      {
        v130 = *v264;
        v128 = nullptr;
        while ( 1 )
        {
          v138 = *v130;
          if ( *v130 == dword_1C7EC8C )
          {
            v139 = *(_QWORD *)(a1[13] + 856LL);
            if ( v139 )
              goto LABEL_138;
          }
          else if ( v138 == dword_1C7EC88 )
          {
            v139 = *(_QWORD *)(a1[13] + 864LL);
            if ( v139 )
              goto LABEL_138;
          }
          else
          {
            v131 = *(_QWORD *)(a1[1105] + 8LL * (v138 >> 1));
            if ( (v138 & 1) != 0 )
            {
              v139 = sub_15E1A70(a1[13]);
              if ( v139 )
              {
LABEL_138:
                v132 = *(_DWORD *)(v139 + 8) + 1;
                *(_DWORD *)(v139 + 8) = v132;
                if ( v126 )
                {
                  v133 = (*(_DWORD *)(v126 + 8))-- == 1;
                  if ( !v133 )
                  {
                    v132 = *(_DWORD *)(v139 + 8);
                    v126 = v139;
                    goto LABEL_132;
                  }
                  v256 = v139;
                  sub_15D7BC0(v280, v126);
                  v126 = v256;
LABEL_203:
                  v132 = *(_DWORD *)(v126 + 8);
                }
                else
                {
                  v126 = v139;
                }
                goto LABEL_132;
              }
            }
            else if ( v131 )
            {
              v132 = *(_DWORD *)(v131 + 8) + 1;
              *(_DWORD *)(v131 + 8) = v132;
              if ( v126 )
              {
                v133 = (*(_DWORD *)(v126 + 8))-- == 1;
                if ( !v133 )
                {
                  v132 = *(_DWORD *)(v131 + 8);
                  v126 = v131;
                  goto LABEL_132;
                }
                v257 = v131;
                sub_15D7BC0(v280, v126);
                v126 = v257;
                goto LABEL_203;
              }
              v126 = v131;
LABEL_132:
              *(_DWORD *)(v126 + 8) = v132 + 1;
              if ( !v128 )
                goto LABEL_198;
              goto LABEL_133;
            }
          }
          if ( v126 )
          {
            v133 = (*(_DWORD *)(v126 + 8))-- == 1;
            if ( v133 )
              sub_15D7BC0(v280, v126);
          }
          v126 = 0;
          if ( !v128 )
          {
LABEL_198:
            v187 = (_QWORD *)sub_186B270(0x18u);
            v128 = (unsigned int *)(v187 + 1);
            v137 = v187 + 1;
            *v187 = 2;
            v136 = 1;
            goto LABEL_135;
          }
LABEL_133:
          v134 = *(v128 - 1);
          if ( v134 == *(v128 - 2) )
          {
            v170 = (3 * v134 + 1) >> 1;
            v171 = 8 * v170 + 8;
            if ( 8 * v134 + 8 >= (unsigned int)v171 || v134 >= v170 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &ptr);
              sub_233E40((__int64)&ptr);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v254 = (3 * v134 + 1) >> 1;
            v172 = (unsigned int *)sub_186B300(v128 - 2, v171);
            v128 = v172 + 2;
            ++v130;
            *v172 = v254;
            LODWORD(v172) = v172[1];
            *(_QWORD *)&v128[2 * (unsigned int)v172] = v126;
            *(v128 - 1) = (_DWORD)v172 + 1;
            if ( v129 == v130 )
              goto LABEL_179;
          }
          else
          {
            v135 = v134;
            v136 = v134 + 1;
            v137 = (__int64 *)&v128[2 * v135];
LABEL_135:
            ++v130;
            *v137 = v126;
            *(v128 - 1) = v136;
            if ( v129 == v130 )
              goto LABEL_179;
          }
        }
      }
      v128 = nullptr;
    }
LABEL_179:
    v173 = *a3;
    if ( *a3 )
    {
      LODWORD(v174) = *((_DWORD *)v173 - 1);
      v175 = &v173[2 * (unsigned int)v174];
      if ( (_DWORD)v174 == *((_DWORD *)v173 - 2) )
      {
        v258 = (unsigned int)(3 * v174 + 1) >> 1;
        v203 = 16 * v258 + 8;
        if ( 16 * (int)v174 + 8 >= (unsigned int)v203 || (unsigned int)v174 >= (unsigned int)(3 * v174 + 1) >> 1 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v204 = (unsigned int *)sub_186B270(v203);
        v205 = *a3;
        v173 = (__int64 *)(v204 + 2);
        if ( *a3 )
        {
          v206 = *((unsigned int *)v205 - 1);
          v207 = *a3;
          v208 = v204 + 2;
          v204[1] = v206;
          v209 = v206;
          v210 = &v205[2 * v206];
          if ( v210 != v205 )
          {
            do
            {
              v211 = *v207;
              v207 += 2;
              v208 += 4;
              *((_QWORD *)v208 - 2) = v211;
              v212 = *(v207 - 1);
              *(v207 - 1) = 0;
              *((_QWORD *)v208 - 1) = v212;
            }
            while ( v207 != v210 );
          }
          v213 = &v205[2 * v206];
          if ( v209 )
          {
            v283 = v128;
            v285 = v126;
            v286 = (__int64 *)(v204 + 2);
            v271 = v119;
            v214 = v205;
            v215 = v204;
            do
            {
              v216 = (__int64 *)v214[1];
              if ( v216 )
              {
                v217 = &v216[*((unsigned int *)v216 - 1)];
                if ( v216 >= v217 )
                  goto LABEL_261;
                do
                {
                  while ( 1 )
                  {
                    v218 = *v216;
                    if ( *v216 )
                    {
                      v219 = *v214;
                      v133 = (*(_DWORD *)(v218 + 8))-- == 1;
                      if ( v133 )
                        break;
                    }
                    if ( ++v216 >= v217 )
                      goto LABEL_260;
                  }
                  sub_15D7BC0(v219, v218);
                  ++v216;
                }
                while ( v216 < v217 );
LABEL_260:
                v216 = (__int64 *)v214[1];
                if ( v216 )
LABEL_261:
                  sub_186B220(v216 - 1);
              }
              v214 += 2;
            }
            while ( v214 != v213 );
            v204 = v215;
            v119 = v271;
            v128 = v283;
            v126 = v285;
            v173 = v286;
            v205 = *a3;
          }
          v284 = v204;
          v272 = v173;
          sub_186B220(v205 - 1);
          v204 = v284;
          v173 = v272;
          v174 = v284[1];
          v175 = &v272[2 * v174];
        }
        else
        {
          v204[1] = 0;
          v175 = (__int64 *)(v204 + 2);
          LODWORD(v174) = 0;
        }
        *a3 = v173;
        *v204 = v258;
      }
    }
    else
    {
      v221 = (_QWORD *)sub_186B270(0x28u);
      *v221 = 2;
      v173 = v221 + 1;
      LODWORD(v174) = 0;
      v175 = v173;
      *a3 = v173;
    }
    v175[1] = 0;
    *v175 = v268;
    if ( v128 )
    {
      v176 = nullptr;
      for ( m = 0; m < *(v128 - 1); ++m )
      {
        v181 = *(_QWORD *)&v128[2 * m];
        if ( v181 )
          ++*(_DWORD *)(v181 + 8);
        if ( v176 )
        {
          v182 = *((_DWORD *)v176 - 1);
          if ( v182 == *((_DWORD *)v176 - 2) )
          {
            v183 = (3 * v182 + 1) >> 1;
            v184 = 8 * v183 + 8;
            if ( 8 * v182 + 8 >= (unsigned int)v184 || v182 >= v183 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, &ptr);
              sub_233E40((__int64)&ptr);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v270 = (3 * v182 + 1) >> 1;
            v255 = m;
            v185 = (unsigned int *)sub_186B300(v176 - 1, v184);
            v186 = v185[1];
            v176 = v185 + 2;
            v175[1] = (__int64)(v185 + 2);
            m = v255;
            *v185 = v270;
            LODWORD(v185) = v186;
            v180 = &v176[v186];
            v179 = (_DWORD)v185 + 1;
          }
          else
          {
            v178 = v182;
            v179 = v182 + 1;
            v180 = &v176[v178];
          }
        }
        else
        {
          v259 = m;
          v220 = (_QWORD *)sub_186B270(0x18u);
          v176 = v220 + 1;
          v180 = v176;
          *v220 = 2;
          m = v259;
          v179 = 1;
          v175[1] = (__int64)v176;
        }
        *v180 = v181;
        *((_DWORD *)v176 - 1) = v179;
      }
      v188 = (__int64 *)v128;
      ++*((_DWORD *)*a3 - 1);
      v189 = (unsigned __int64)&v128[2 * *(v128 - 1)];
      if ( (unsigned __int64)v128 < v189 )
      {
        do
        {
          while ( 1 )
          {
            v190 = *v188;
            if ( *v188 )
            {
              v133 = (*(_DWORD *)(v190 + 8))-- == 1;
              if ( v133 )
                break;
            }
            if ( (unsigned __int64)++v188 >= v189 )
              goto LABEL_210;
          }
          ++v188;
          sub_15D7BC0(v268, v190);
        }
        while ( (unsigned __int64)v188 < v189 );
      }
LABEL_210:
      sub_186B220(v128 - 2);
    }
    else
    {
      *((_DWORD *)v173 - 1) = v174 + 1;
    }
    ++v264;
  }
  while ( v276 != v264 );
  v127 = *(unsigned int *)(v274 - 4);
  if ( (_DWORD)v127 )
  {
LABEL_213:
    v191 = (__int64 *)v274;
    v192 = (__int64 *)(v274 + 8 * v127);
    do
    {
      while ( 1 )
      {
        v193 = *v191;
        if ( !*v191 )
          break;
        ++v191;
        sub_186B220((void *)(v193 - 8));
        if ( v191 == v192 )
          goto LABEL_216;
      }
      ++v191;
    }
    while ( v191 != v192 );
  }
LABEL_216:
  sub_186B220((void *)(v274 - 8));
  if ( v126 )
  {
    v133 = (*(_DWORD *)(v126 + 8))-- == 1;
    if ( v133 )
      sub_15D7BC0(v280, v126);
  }
LABEL_219:
  if ( v281 )
    sub_186B220((void *)(v281 - 8));
  if ( *((_QWORD *)&v121 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v121 + 1) - 8LL));
  if ( (_QWORD)v121 )
    sub_186B220((void *)(v121 - 8));
  if ( *((_QWORD *)&v282 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v282 + 1) - 8LL));
  if ( (_QWORD)v282 )
    sub_186B220((void *)(v282 - 8));
  if ( v120 )
  {
    v194 = *((unsigned int *)v120 - 1);
    v195 = v120;
    v196 = &v120[v194];
    if ( (_DWORD)v194 )
    {
      do
      {
        while ( 1 )
        {
          v197 = *v195;
          if ( !*v195 )
            break;
          ++v195;
          sub_186B220((void *)(v197 - 8));
          if ( v196 == v195 )
            goto LABEL_233;
        }
        ++v195;
      }
      while ( v195 != v196 );
    }
LABEL_233:
    sub_186B220(v120 - 1);
  }
  if ( v119 )
  {
    v198 = *(unsigned int *)(v119 - 4);
    v199 = (__int64 *)v119;
    v200 = (__int64 *)(v119 + 8 * v198);
    if ( (_DWORD)v198 )
    {
      do
      {
        while ( 1 )
        {
          v201 = *v199;
          if ( !*v199 )
            break;
          ++v199;
          sub_186B220((void *)(v201 - 8));
          if ( v200 == v199 )
            goto LABEL_238;
        }
        ++v199;
      }
      while ( v199 != v200 );
    }
LABEL_238:
    sub_186B220((void *)(v119 - 8));
  }
  if ( v279 )
    sub_186B220(&v279[-1].m128i_u64[1]);
  return 1;
}

