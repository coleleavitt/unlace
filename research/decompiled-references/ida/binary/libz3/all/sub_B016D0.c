__int64 *__fastcall sub_B016D0(__int64 a1, __int64 *a2)
{
  char **v2; // rbx
  char **v3; // r12
  char **v4; // r13
  char **v5; // r12
  char **v6; // r14
  char **v7; // r12
  char **v8; // r12
  char **exception; // rbx
  int v10; // eax
  __int64 v11; // r12
  int v12; // r13d
  unsigned int v13; // ebp
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  __int64 *result; // rax
  _QWORD *v26; // rdx
  char v27; // bl
  __int64 *v28; // rdx
  __int64 *v29; // r12
  _QWORD *v30; // rbx
  unsigned int v31; // r13d
  __int64 v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  unsigned int v37; // r14d
  unsigned int v38; // edx
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // r12
  __int64 *v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  void *v48; // rdi
  bool v49; // zf
  _OWORD *v50; // rax
  _OWORD *v51; // rax
  unsigned int *v52; // r15
  __m128 v53; // xmm0
  void *v54; // rax
  unsigned int v55; // r13d
  unsigned int *v56; // r14
  __int64 v57; // rcx
  int *v58; // rdx
  __int16 v59; // ax
  int *v60; // r13
  unsigned int v61; // r8d
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int *v64; // r15
  unsigned int v65; // ecx
  __int16 v66; // ax
  _DWORD *v67; // rdx
  char *v68; // rdx
  void *v69; // r11
  char *v70; // r10
  __int64 v71; // rsi
  __int64 v72; // r13
  unsigned int v73; // r8d
  __int64 v74; // rax
  char *v75; // r9
  __int64 *kk; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rsi
  unsigned int v79; // r8d
  _QWORD *v80; // rax
  char *v81; // rax
  unsigned int v82; // ecx
  unsigned int v83; // eax
  _DWORD *v84; // r9
  unsigned int v85; // edi
  unsigned int v86; // edx
  int *v87; // r8
  unsigned int v88; // r15d
  __int64 v89; // rcx
  int *v90; // rax
  __int64 v91; // rax
  int v92; // ecx
  __int64 v93; // rax
  int *v94; // rax
  __int64 v95; // rcx
  int *v96; // rax
  __int64 v97; // r8
  __int64 v98; // r13
  unsigned __int64 v99; // rax
  char *v100; // rdi
  __int64 v101; // rsi
  __int64 *v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rax
  int v105; // r8d
  _QWORD *v106; // rax
  __int64 v107; // r13
  char *v108; // rdi
  unsigned __int64 v109; // rax
  __int64 v110; // rsi
  _OWORD *v111; // rdi
  __int64 *v112; // r15
  void **v113; // rbx
  __int64 *v114; // r13
  __int64 v115; // rbp
  int v116; // edi
  __int64 *v117; // rcx
  __int64 v118; // rax
  unsigned int v119; // edx
  __int64 *v120; // rsi
  __int64 v121; // rdx
  __int64 *v122; // r8
  __int64 *v123; // rax
  __int64 v124; // rdx
  __int64 *v125; // rbp
  __int64 *v126; // r12
  __int64 v127; // r13
  unsigned int v128; // ecx
  _QWORD *v129; // rax
  __int64 v130; // rdx
  _QWORD *v131; // rdx
  __int64 *v132; // rax
  __int64 v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // rbp
  int *v136; // r12
  int *v137; // r13
  _QWORD *v138; // rax
  _QWORD *v139; // rcx
  int v140; // eax
  unsigned int v141; // eax
  int *v142; // rbp
  int *v143; // r12
  __int64 v144; // rsi
  __int64 v145; // r12
  __int64 v146; // rax
  unsigned int v147; // r14d
  unsigned int v148; // ecx
  unsigned int *v149; // rax
  __int64 v150; // rcx
  unsigned __int64 v151; // r13
  __int64 v152; // rsi
  __int64 v153; // rdi
  _QWORD *v154; // r14
  __int64 v155; // rax
  _QWORD *v156; // r13
  _QWORD *v157; // r14
  _QWORD *v158; // r15
  __int64 v159; // rsi
  __int64 v160; // rdi
  unsigned int i; // r14d
  __int64 v162; // rcx
  int v163; // eax
  _QWORD *v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rbp
  _QWORD *v167; // rdx
  unsigned int v168; // eax
  unsigned int v169; // r15d
  unsigned int v170; // ecx
  unsigned int *v171; // rax
  __int64 v172; // rcx
  unsigned __int64 v173; // r13
  void *v174; // rbp
  __int64 *j; // r12
  __int64 v176; // rsi
  __int64 v177; // rax
  void **v178; // r12
  void **v179; // rbp
  int *v180; // rbx
  void *v181; // r12
  int *v182; // rbp
  __int64 v183; // rsi
  __int64 v184; // r14
  _QWORD *v185; // rax
  unsigned int k; // edx
  unsigned int v187; // r13d
  unsigned int v188; // eax
  unsigned int v189; // r13d
  unsigned int v190; // eax
  unsigned int *v191; // rbp
  __int64 v192; // rax
  _DWORD *v193; // rdx
  void **v194; // rsi
  void **m; // rax
  int v196; // ecx
  __int64 v197; // rcx
  __int64 v198; // rax
  void **v199; // r15
  void **v200; // r12
  __int64 v201; // rax
  void **v202; // r14
  void **v203; // rbp
  _OWORD *v204; // rax
  void *v205; // rax
  __int64 *v206; // r14
  __int64 v207; // rdx
  unsigned int v208; // r15d
  _QWORD *v209; // rax
  __int64 v210; // rcx
  _QWORD *v211; // rcx
  __int64 *v212; // rax
  char *v213; // rdx
  char *v214; // r10
  void **v215; // rax
  __int64 *v216; // r11
  __int64 v217; // rax
  __int64 v218; // rsi
  __int64 v219; // r14
  int v220; // r15d
  __int64 *v221; // rdi
  unsigned int v222; // r9d
  __int64 v223; // rax
  __int64 *v224; // r13
  __int64 *n; // rax
  __int64 v226; // r8
  char *v227; // rax
  __int64 *ii; // rax
  __int64 v229; // r8
  void **v230; // r13
  int *v231; // rdi
  unsigned int v232; // eax
  __int64 v233; // rdx
  int v234; // eax
  int *v235; // rdx
  unsigned int v236; // r14d
  unsigned int v237; // edx
  unsigned int *v238; // rax
  __int64 v239; // rdx
  int *v240; // rdi
  char *v241; // rsi
  char *v242; // rax
  __int64 v243; // rdx
  _QWORD *v244; // r14
  _QWORD *v245; // r15
  __int64 v246; // rsi
  __int64 v247; // rdi
  unsigned int v248; // r15d
  __int64 v249; // rbp
  __int64 v250; // rdi
  unsigned int v251; // eax
  unsigned int v252; // r14d
  unsigned int v253; // ecx
  unsigned int *v254; // rcx
  _QWORD *v255; // rax
  __int64 v256; // rsi
  _QWORD *v257; // rsi
  int v258; // ecx
  _QWORD *v259; // rcx
  _QWORD *v260; // rdx
  __int64 v261; // rdx
  _DWORD *v262; // rdi
  char *v263; // rcx
  char *jj; // rax
  __int64 v265; // rdx
  void *v266; // rdi
  __int64 v267; // r13
  char *v268; // rdi
  unsigned __int64 v269; // rcx
  __int64 v270; // rsi
  _QWORD *v271; // rax
  _QWORD *v272; // rax
  __int64 v273; // rax
  unsigned int v274; // r13d
  unsigned int *v275; // rax
  __int64 v276; // rax
  int v277; // r8d
  int v280[2]; // [rsp+10h] [rbp-298h] BYREF
  int *v281; // [rsp+18h] [rbp-290h]
  int v282[2]; // [rsp+20h] [rbp-288h]
  int v283[2]; // [rsp+28h] [rbp-280h]
  __int64 v284; // [rsp+30h] [rbp-278h]
  char v285[8]; // [rsp+38h] [rbp-270h] BYREF
  int v286[2]; // [rsp+40h] [rbp-268h]
  void *v287; // [rsp+48h] [rbp-260h]
  char v288[16]; // [rsp+50h] [rbp-258h] BYREF
  int v289[2]; // [rsp+60h] [rbp-248h] BYREF
  void **v290; // [rsp+68h] [rbp-240h]
  void *v291; // [rsp+70h] [rbp-238h] BYREF
  int v292[2]; // [rsp+78h] [rbp-230h]
  int v293; // [rsp+80h] [rbp-228h]
  void *v294; // [rsp+90h] [rbp-218h] BYREF
  int v295[2]; // [rsp+98h] [rbp-210h]
  int v296; // [rsp+A0h] [rbp-208h]
  int v297[4]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v298; // [rsp+C0h] [rbp-1E8h]
  void *v299[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _DWORD v300[32]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v301[2]; // [rsp+160h] [rbp-148h] BYREF
  int v302[2]; // [rsp+170h] [rbp-138h] BYREF
  int v303; // [rsp+178h] [rbp-130h]

  v284 = a1 + 880;
  v10 = sub_8E37A0(a1 + 880);
  if ( v10 )
  {
    v11 = v284;
    v12 = v10;
    v13 = 0;
    while ( 1 )
    {
      v17 = sub_8E37C0(v11, v13);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = (_QWORD *)a2[1];
      if ( !v19 )
        break;
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v301);
          sub_233E40((__int64)v301);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v13;
        v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
        v24 = v23[1];
        *v23 = v21;
        a2[1] = (__int64)(v23 + 2);
        *(_QWORD *)&v23[2 * v24 + 2] = v18;
        v23[1] = v24 + 1;
        if ( v12 == v13 )
          goto LABEL_12;
      }
      else
      {
        v14 = v20;
        v15 = v20 + 1;
        v16 = &v19[v14];
LABEL_4:
        ++v13;
        *v16 = v18;
        *((_DWORD *)v19 - 1) = v15;
        if ( v12 == v13 )
          goto LABEL_12;
      }
    }
    v26 = (_QWORD *)sub_186B270(0x18u);
    *v26 = 2;
    v15 = 1;
    v19 = v26 + 1;
    a2[1] = (__int64)v19;
    v16 = v19;
    goto LABEL_4;
  }
LABEL_12:
  if ( !*(_BYTE *)(a1 + 904) )
  {
    v301[0] = (void *)(a1 + 80);
    sub_17F9A60(&v301[1], "smt");
    v27 = sub_1859630(a1 + 80, "core.minimize", &v301[1], 0);
    sub_18572D0(&v301[1]);
    if ( v27 )
    {
      v28 = *(__int64 **)(a1 + 104);
      *(_QWORD *)v280 = *(_QWORD *)(a1 + 96);
      v29 = v28;
      *(__m128 *)v299 = _mm_loadh_ps((const double *)v280);
      if ( v28 )
      {
        v30 = nullptr;
        v31 = 0;
        while ( v31 < *((_DWORD *)v28 - 1) )
        {
          v32 = v28[v31];
          if ( v32 )
            ++*(_DWORD *)(v32 + 8);
          if ( v30 )
          {
            v33 = *((_DWORD *)v30 - 1);
            if ( v33 == *((_DWORD *)v30 - 2) )
            {
              v37 = (3 * v33 + 1) >> 1;
              v38 = 8 * v37 + 8;
              if ( 8 * v33 + 8 >= v38 || v33 >= v37 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v301);
                sub_233E40((__int64)v301);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300(v30 - 1, v38);
              v40 = v39[1];
              v30 = v39 + 2;
              *v39 = v37;
              LODWORD(v39) = v40;
              v36 = &v30[v40];
              v28 = *(__int64 **)(a1 + 104);
              v35 = (_DWORD)v39 + 1;
            }
            else
            {
              v34 = v33;
              v35 = v33 + 1;
              v36 = &v30[v34];
            }
          }
          else
          {
            v259 = (_QWORD *)sub_186B270(0x18u);
            *v259 = 2;
            v35 = 1;
            v36 = v259 + 1;
            v28 = *(__int64 **)(a1 + 104);
            v30 = v36;
          }
          *v36 = v32;
          ++v31;
          v29 = v28;
          *((_DWORD *)v30 - 1) = v35;
          if ( !v28 )
          {
            *(_BYTE *)(a1 + 904) = 1;
            goto LABEL_237;
          }
        }
        *(_BYTE *)(a1 + 904) = 1;
        v151 = (unsigned __int64)&v28[*((unsigned int *)v28 - 1)];
        if ( (unsigned __int64)v28 < v151 )
        {
          do
          {
            while ( 1 )
            {
              v152 = *v29;
              if ( *v29 )
              {
                v153 = *(_QWORD *)(a1 + 96);
                v49 = (*(_DWORD *)(v152 + 8))-- == 1;
                if ( v49 )
                  break;
              }
              if ( (unsigned __int64)++v29 >= v151 )
                goto LABEL_234;
            }
            sub_15D7BC0(v153, v152);
            ++v29;
          }
          while ( (unsigned __int64)v29 < v151 );
LABEL_234:
          v28 = *(__int64 **)(a1 + 104);
        }
        if ( v28 )
          *((_DWORD *)v28 - 1) = 0;
      }
      else
      {
        v30 = nullptr;
        *(_BYTE *)(a1 + 904) = 1;
      }
LABEL_237:
      sub_E1FF20(&v294, a1);
      v154 = (_QWORD *)a2[1];
      if ( v154 )
      {
        v155 = *((unsigned int *)v154 - 1);
        if ( (_DWORD)v155 )
        {
          v156 = &v154[v155];
          do
            sub_E20700(&v294, *v154++);
          while ( v156 != v154 );
        }
      }
      *(_QWORD *)&v297[2] = 0;
      *(_QWORD *)v297 = *(_QWORD *)(a1 + 8);
      if ( (unsigned int)sub_E20AD0(&v294, v297) == 1 )
      {
        v244 = (_QWORD *)a2[1];
        if ( v244 )
        {
          v245 = &v244[*((unsigned int *)v244 - 1)];
          if ( v244 >= v245 )
            goto LABEL_372;
          do
          {
            v246 = *v244;
            if ( *v244 )
            {
              v247 = *a2;
              v49 = (*(_DWORD *)(v246 + 8))-- == 1;
              if ( v49 )
                sub_15D7BC0(v247, v246);
            }
            ++v244;
          }
          while ( v244 < v245 );
          v244 = (_QWORD *)a2[1];
          if ( v244 )
LABEL_372:
            *((_DWORD *)v244 - 1) = 0;
        }
        v157 = *(_QWORD **)&v297[2];
        v248 = 0;
        if ( *(_QWORD *)&v297[2] )
        {
          while ( v248 < *((_DWORD *)v157 - 1) )
          {
            while ( 1 )
            {
              v249 = v157[v248];
              if ( v249 )
                ++*(_DWORD *)(v249 + 8);
              v250 = a2[1];
              if ( !v250 )
              {
                v271 = (_QWORD *)sub_186B270(0x18u);
                *v271 = 2;
                v255 = v271 + 1;
                v258 = 1;
                v157 = *(_QWORD **)&v297[2];
                v257 = v255;
                a2[1] = (__int64)v255;
                goto LABEL_384;
              }
              v251 = *(_DWORD *)(v250 - 4);
              if ( v251 == *(_DWORD *)(v250 - 8) )
                break;
              ++v248;
              *(_QWORD *)(v250 + 8LL * v251) = v249;
              *(_DWORD *)(v250 - 4) = v251 + 1;
              if ( v248 >= *((_DWORD *)v157 - 1) )
                goto LABEL_243;
            }
            v252 = (3 * v251 + 1) >> 1;
            v253 = 8 * v252 + 8;
            if ( 8 * v251 + 8 >= v253 || v251 >= v252 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v301);
              sub_233E40((__int64)v301);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v254 = (unsigned int *)sub_186B300((void *)(v250 - 8), v253);
            v255 = v254 + 2;
            v256 = v254[1];
            *v254 = v252;
            a2[1] = (__int64)(v254 + 2);
            v157 = *(_QWORD **)&v297[2];
            LODWORD(v254) = v256;
            v257 = &v255[v256];
            v258 = (_DWORD)v254 + 1;
LABEL_384:
            *v257 = v249;
            *((_DWORD *)v255 - 1) = v258;
            if ( !v157 )
              goto LABEL_251;
            ++v248;
          }
          goto LABEL_243;
        }
      }
      else
      {
        v157 = *(_QWORD **)&v297[2];
        if ( *(_QWORD *)&v297[2] )
        {
LABEL_243:
          v158 = &v157[*((unsigned int *)v157 - 1)];
          if ( v157 >= v158 )
            goto LABEL_250;
          do
          {
            while ( 1 )
            {
              v159 = *v157;
              if ( *v157 )
              {
                v160 = *(_QWORD *)v297;
                v49 = (*(_DWORD *)(v159 + 8))-- == 1;
                if ( v49 )
                  break;
              }
              if ( ++v157 >= v158 )
                goto LABEL_249;
            }
            sub_15D7BC0(v160, v159);
            ++v157;
          }
          while ( v157 < v158 );
LABEL_249:
          v157 = *(_QWORD **)&v297[2];
          if ( *(_QWORD *)&v297[2] )
LABEL_250:
            sub_186B220(v157 - 1);
        }
      }
LABEL_251:
      sub_E1FA60(&v294);
      *(_BYTE *)(a1 + 904) = 0;
      if ( v30 )
      {
        for ( i = 0; ; ++i )
        {
          v165 = *((unsigned int *)v30 - 1);
          if ( i >= (unsigned int)v165 )
            break;
          v166 = v30[i];
          if ( v166 )
            ++*(_DWORD *)(v166 + 8);
          v167 = *(_QWORD **)(a1 + 104);
          if ( v167 )
          {
            v168 = *((_DWORD *)v167 - 1);
            if ( v168 == *((_DWORD *)v167 - 2) )
            {
              v169 = (3 * v168 + 1) >> 1;
              v170 = 8 * v169 + 8;
              if ( 8 * v168 + 8 >= v170 || v168 >= v169 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, v301);
                sub_233E40((__int64)v301);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v171 = (unsigned int *)sub_186B300(v167 - 1, v170);
              v172 = v171[1];
              v167 = v171 + 2;
              *v171 = v169;
              *(_QWORD *)(a1 + 104) = v171 + 2;
              LODWORD(v171) = v172;
              v164 = &v167[v172];
              v163 = (_DWORD)v171 + 1;
            }
            else
            {
              v162 = v168;
              v163 = v168 + 1;
              v164 = &v167[v162];
            }
          }
          else
          {
            v260 = (_QWORD *)sub_186B270(0x18u);
            *v260 = 2;
            v163 = 1;
            v167 = v260 + 1;
            *(_QWORD *)(a1 + 104) = v167;
            v164 = v167;
          }
          *v164 = v166;
          *((_DWORD *)v167 - 1) = v163;
        }
        v173 = (unsigned __int64)&v30[v165];
        v174 = *(void **)v280;
        for ( j = v30; (unsigned __int64)j < v173; ++j )
        {
          while ( 1 )
          {
            v176 = *j;
            if ( *j )
            {
              v49 = (*(_DWORD *)(v176 + 8))-- == 1;
              if ( v49 )
                break;
            }
            if ( (unsigned __int64)++j >= v173 )
              goto LABEL_269;
          }
          sub_15D7BC0(v174, v176);
        }
LABEL_269:
        sub_186B220(v30 - 1);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 905) )
    goto LABEL_14;
  *(_QWORD *)v280 = sub_8E35C0(v284);
  v294 = *(void **)v280;
  v111 = (_OWORD *)sub_186B270(0x40u);
  v299[0] = v111;
  *v111 = 0;
  v111[1] = 0;
  v111[2] = 0;
  v111[3] = 0;
  v300[0] = 0;
  *(_QWORD *)v283 = 8;
  v299[1] = &byte_8;
  if ( !*(_DWORD *)(a1 + 908) )
  {
LABEL_388:
    sub_186B220(v111);
    goto LABEL_14;
  }
  v112 = (__int64 *)a2[1];
  if ( !v112 )
  {
LABEL_387:
    v111 = v299[0];
    if ( !v299[0] )
      goto LABEL_14;
    goto LABEL_388;
  }
  *(_DWORD *)v285 = 0;
  v113 = nullptr;
  v281 = nullptr;
  while ( 2 )
  {
    v114 = &v112[*((unsigned int *)v112 - 1)];
    if ( v114 == v112 )
      goto LABEL_169;
    do
    {
      v115 = *v112;
      if ( *v112 )
        ++*(_DWORD *)(v115 + 8);
      v116 = *(_DWORD *)(v115 + 12);
      v117 = *(__int64 **)(a1 + 920);
      v118 = *(unsigned int *)(a1 + 928);
      v119 = v118 - 1;
      v118 *= 16;
      v120 = (__int64 *)((char *)v117 + v118);
      v121 = 16LL * (v116 & v119);
      v122 = &v117[(unsigned __int64)v121 / 8];
      if ( v121 == v118 )
      {
LABEL_216:
        while ( v122 != v117 )
        {
          v146 = *v117;
          if ( (unsigned __int64)*v117 > 1 )
          {
            if ( *(_DWORD *)(v146 + 12) == v116 && v115 == v146 )
            {
              v123 = v117;
              goto LABEL_212;
            }
          }
          else if ( !v146 )
          {
            break;
          }
          v117 += 2;
        }
LABEL_167:
        v49 = (*(_DWORD *)(v115 + 8))-- == 1;
        if ( v49 )
          goto LABEL_215;
        goto LABEL_168;
      }
      v123 = &v117[(unsigned __int64)v121 / 8];
      while ( 1 )
      {
        v124 = *v123;
        if ( (unsigned __int64)*v123 > 1 )
          break;
        if ( !v124 )
          goto LABEL_167;
LABEL_164:
        v123 += 2;
        if ( v120 == v123 )
          goto LABEL_216;
      }
      if ( *(_DWORD *)(v124 + 12) != v116 || v115 != v124 )
        goto LABEL_164;
LABEL_212:
      v145 = v123[1];
      *(__m128 *)v301 = _mm_loadh_ps((const double *)v280);
      if ( !v145 )
      {
        sub_B01030(a1, (unsigned int **)v301, (__int64)v299);
        goto LABEL_167;
      }
      ++*(_DWORD *)(v145 + 8);
      sub_B01030(a1, (unsigned int **)v301, (__int64)v299);
      v49 = (*(_DWORD *)(v145 + 8))-- == 1;
      if ( !v49 )
        goto LABEL_167;
      sub_15D7BC0(*(_QWORD *)v280, v145);
      v49 = (*(_DWORD *)(v115 + 8))-- == 1;
      if ( v49 )
LABEL_215:
        sub_15D7BC0(*(_QWORD *)v280, v115);
LABEL_168:
      ++v112;
    }
    while ( v114 != v112 );
LABEL_169:
    if ( HIDWORD(v299[1]) )
      goto LABEL_170;
LABEL_189:
    if ( !v281 )
    {
      if ( v113 )
        goto LABEL_271;
      goto LABEL_387;
    }
LABEL_190:
    v133 = (unsigned int)*(v281 - 1);
    if ( !(_DWORD)v133 )
      goto LABEL_270;
    v134 = (_QWORD *)a2[1];
    v135 = *(_QWORD *)v281;
    v136 = v281;
    v137 = &v281[2 * v133];
    if ( *(_QWORD *)v281 )
      ++*(_DWORD *)(v135 + 8);
    if ( !v134 )
    {
      v138 = (_QWORD *)sub_186B270(0x18u);
      *v138 = 2;
      v134 = v138 + 1;
      a2[1] = (__int64)(v138 + 1);
      v139 = v138 + 1;
      v140 = 1;
      goto LABEL_195;
    }
    while ( 1 )
    {
      v141 = *((_DWORD *)v134 - 1);
      if ( v141 == *((_DWORD *)v134 - 2) )
        break;
      v136 += 2;
      v134[v141] = v135;
      *((_DWORD *)v134 - 1) = v141 + 1;
      if ( v136 == v137 )
        goto LABEL_200;
LABEL_196:
      v135 = *(_QWORD *)v136;
      if ( *(_QWORD *)v136 )
        ++*(_DWORD *)(v135 + 8);
    }
    v147 = (3 * v141 + 1) >> 1;
    v148 = 8 * v147 + 8;
    if ( 8 * v141 + 8 >= v148 || v141 >= v147 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v301);
      sub_233E40((__int64)v301);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v149 = (unsigned int *)sub_186B300(v134 - 1, v148);
    v150 = v149[1];
    v134 = v149 + 2;
    *v149 = v147;
    LODWORD(v149) = v150;
    a2[1] = (__int64)v134;
    v139 = &v134[v150];
    v140 = (_DWORD)v149 + 1;
LABEL_195:
    v136 += 2;
    *v139 = v135;
    *((_DWORD *)v134 - 1) = v140;
    if ( v136 != v137 )
      goto LABEL_196;
LABEL_200:
    if ( !*(v281 - 1) )
    {
LABEL_270:
      if ( !v113 )
      {
        v266 = v299[0];
        if ( v299[0] )
          goto LABEL_397;
        goto LABEL_284;
      }
      goto LABEL_271;
    }
    if ( ++*(_DWORD *)v285 < *(_DWORD *)(a1 + 908) )
    {
      v142 = v281;
      v143 = &v281[2 * *(v281 - 1)];
      if ( v281 < v143 )
      {
        do
        {
          while ( 1 )
          {
            v144 = *(_QWORD *)v142;
            if ( *(_QWORD *)v142 )
            {
              v49 = (*(_DWORD *)(v144 + 8))-- == 1;
              if ( v49 )
                break;
            }
            v142 += 2;
            if ( v142 >= v143 )
              goto LABEL_208;
          }
          sub_15D7BC0(*(_QWORD *)v280, v144);
          v142 += 2;
        }
        while ( v142 < v143 );
      }
LABEL_208:
      *(v281 - 1) = 0;
      v112 = (__int64 *)a2[1];
      if ( v112 )
        continue;
      if ( !HIDWORD(v299[1]) )
        goto LABEL_190;
LABEL_170:
      if ( !v113 )
      {
        v184 = *(unsigned int *)(a1 + 932);
        if ( !(_DWORD)v184 )
        {
          v113 = nullptr;
          goto LABEL_300;
        }
        v185 = (_QWORD *)sub_186B270(0x38u);
        *v185 = 2;
        v113 = (void **)(v185 + 1);
LABEL_288:
        for ( k = *((_DWORD *)v113 - 2); k < (unsigned int)v184; k = *((_DWORD *)v113 - 2) )
        {
          v187 = 3 * k + 1;
          v188 = v187 & 0xFFFFFFFE;
          v189 = v187 >> 1;
          v190 = 8 * (v189 + v188) + 8;
          if ( 24 * k + 8 >= v190 || k >= v189 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v301);
            sub_233E40((__int64)v301);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v191 = (unsigned int *)sub_186B270(v190);
          v192 = *((unsigned int *)v113 - 1);
          v193 = v191 + 2;
          v191[1] = v192;
          v194 = &v113[3 * v192];
          *(_QWORD *)v282 = v191 + 2;
          for ( m = v113; v194 != m; *(v193 - 2) = *((_DWORD *)m - 2) )
          {
            v196 = *((_DWORD *)m + 2);
            m += 3;
            v193 += 6;
            *(v193 - 4) = v196;
            v197 = (__int64)*(m - 3);
            *(m - 3) = nullptr;
            *((_QWORD *)v193 - 3) = v197;
            *(v193 - 3) = *((_DWORD *)m - 3);
          }
          v198 = *((unsigned int *)v113 - 1);
          if ( (_DWORD)v198 )
          {
            v199 = v113;
            v200 = &v113[3 * v198];
            do
            {
              while ( *v199 )
              {
                sub_186B220(*v199);
                v199 += 3;
                if ( v199 == v200 )
                  goto LABEL_297;
              }
              v199 += 3;
            }
            while ( v200 != v199 );
          }
LABEL_297:
          sub_186B220(v113 - 1);
          v113 = *(void ***)v282;
          *v191 = v189;
        }
        v201 = 3 * v184;
        *((_DWORD *)v113 - 1) = v184;
        v202 = v113;
        v203 = &v113[v201];
        do
        {
          v204 = (_OWORD *)sub_186B270(0x40u);
          *v202 = v204;
          v202 += 3;
          *v204 = 0;
          v204[1] = 0;
          v204[2] = 0;
          v204[3] = 0;
          v205 = *(void **)v283;
          *((_DWORD *)v202 - 2) = 0;
          *(v202 - 2) = v205;
        }
        while ( v203 != v202 );
        goto LABEL_300;
      }
      if ( *((_DWORD *)v113 - 1) )
      {
        v125 = *(__int64 **)(a1 + 920);
        v126 = &v125[2 * *(unsigned int *)(a1 + 928)];
        goto LABEL_173;
      }
      v184 = *(unsigned int *)(a1 + 932);
      if ( (_DWORD)v184 )
        goto LABEL_288;
LABEL_300:
      v125 = *(__int64 **)(a1 + 920);
      v126 = &v125[2 * *(unsigned int *)(a1 + 928)];
      if ( v125 != v126 )
      {
        v206 = *(__int64 **)(a1 + 920);
        while ( (unsigned __int64)*v206 <= 1 )
        {
          v206 += 2;
          if ( v126 == v206 )
            goto LABEL_176;
        }
        if ( v126 == v206 )
        {
LABEL_176:
          while ( (unsigned __int64)*v125 <= 1 )
          {
            v125 += 2;
            if ( v125 == v126 )
              goto LABEL_189;
          }
          if ( v125 != v126 )
          {
            v127 = *v125;
            v128 = 0;
            do
            {
              v129 = (_QWORD *)a2[1];
              if ( v129 && (v130 = *((unsigned int *)v129 - 1), (_DWORD)v130) )
              {
                v131 = &v129[v130];
                while ( *v129 != v127 )
                {
                  if ( v131 == ++v129 )
                    goto LABEL_319;
                }
              }
              else
              {
LABEL_319:
                v213 = (char *)v299[0];
                v214 = (char *)v299[0] + 8 * LODWORD(v299[1]);
                v215 = &v113[3 * v128];
                if ( v299[0] != v214 )
                {
                  while ( *(_QWORD *)v213 <= 1u )
                  {
                    v213 += 8;
                    if ( v214 == v213 )
                      goto LABEL_184;
                  }
                  if ( v214 != v213 )
                  {
                    v216 = (__int64 *)*v215;
                    v217 = *((unsigned int *)v215 + 2);
                    *(_QWORD *)v282 = v127;
                    v218 = *(_QWORD *)v213;
                    v219 = 8 * v217;
                    v220 = v217 - 1;
                    v221 = &v216[v217];
                    do
                    {
                      v222 = *(_DWORD *)(v218 + 12);
                      v223 = 8LL * (v220 & v222);
                      v224 = &v216[(unsigned __int64)v223 / 8];
                      if ( v223 != v219 )
                      {
                        for ( n = &v216[(unsigned __int64)v223 / 8]; v221 != n; ++n )
                        {
                          v226 = *n;
                          if ( (unsigned __int64)*n > 1 )
                          {
                            if ( *(_DWORD *)(v226 + 12) == v222 && v226 == v218 )
                            {
LABEL_346:
                              v230 = *(void ***)v282;
                              if ( *(_QWORD *)v282 )
                                ++*(_DWORD *)(*(_QWORD *)v282 + 8LL);
                              v231 = v281;
                              if ( v281 )
                              {
                                v232 = *(v281 - 1);
                                if ( v232 == *(v281 - 2) )
                                {
                                  v236 = (3 * v232 + 1) >> 1;
                                  v237 = 8 * v236 + 8;
                                  if ( 8 * v232 + 8 >= v237 || v232 >= v236 )
                                  {
                                    v7 = (char **)__cxa_allocate_exception(0x28u);
                                    sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
                                    *v7 = (char *)off_1C63128;
                                    sub_2333C0(v7 + 1, v301);
                                    sub_233E40((__int64)v301);
                                    __cxa_throw(
                                      v7,
                                      (struct type_info *)&`typeinfo for'default_exception,
                                      (void (*)(void *))sub_230E50);
                                  }
                                  v282[0] = v128;
                                  v238 = (unsigned int *)sub_186B300(v281 - 2, v237);
                                  v239 = v238[1];
                                  v231 = (int *)(v238 + 2);
                                  v128 = v282[0];
                                  *v238 = v236;
                                  v281 = v231;
                                  LODWORD(v238) = v239;
                                  v235 = &v231[2 * v239];
                                  v234 = (_DWORD)v238 + 1;
                                }
                                else
                                {
                                  v233 = v232;
                                  v234 = v232 + 1;
                                  v235 = &v281[2 * v233];
                                }
                              }
                              else
                              {
                                v282[0] = v128;
                                v272 = (_QWORD *)sub_186B270(0x18u);
                                *v272 = 2;
                                v128 = v282[0];
                                v281 = (int *)(v272 + 1);
                                v235 = (int *)(v272 + 1);
                                v231 = (int *)(v272 + 1);
                                v234 = 1;
                              }
                              *(_QWORD *)v235 = v230;
                              *(v231 - 1) = v234;
                              goto LABEL_184;
                            }
                          }
                          else if ( !v226 )
                          {
                            goto LABEL_332;
                          }
                        }
                      }
                      if ( v216 != v224 )
                      {
                        for ( ii = v216; v224 != ii; ++ii )
                        {
                          v229 = *ii;
                          if ( (unsigned __int64)*ii > 1 )
                          {
                            if ( *(_DWORD *)(v229 + 12) == v222 && v229 == v218 )
                              goto LABEL_346;
                          }
                          else if ( !v229 )
                          {
                            break;
                          }
                        }
                      }
LABEL_332:
                      v227 = v213 + 8;
                      if ( v214 == v213 + 8 )
                        break;
                      while ( 1 )
                      {
                        v218 = *(_QWORD *)v227;
                        v213 = v227;
                        if ( *(_QWORD *)v227 > 1u )
                          break;
                        v227 += 8;
                        if ( v214 == v227 )
                          goto LABEL_184;
                      }
                    }
                    while ( v214 != v227 );
                  }
                }
              }
LABEL_184:
              v132 = v125 + 2;
              ++v128;
              if ( v125 + 2 == v126 )
                break;
              while ( 1 )
              {
                v127 = *v132;
                v125 = v132;
                if ( (unsigned __int64)*v132 > 1 )
                  break;
                v132 += 2;
                if ( v126 == v132 )
                  goto LABEL_189;
              }
            }
            while ( v132 != v126 );
          }
        }
        else
        {
          v207 = *v206;
          v208 = 0;
          do
          {
            v209 = (_QWORD *)a2[1];
            if ( v209 && (v210 = *((unsigned int *)v209 - 1), (_DWORD)v210) )
            {
              v211 = &v209[v210];
              while ( *v209 != v207 )
              {
                if ( ++v209 == v211 )
                  goto LABEL_357;
              }
            }
            else
            {
LABEL_357:
              v301[0] = v302;
              *(_QWORD *)v282 = *(_QWORD *)(a1 + 8);
              v301[1] = (void *)0x1000000000LL;
              *(__m128i *)v297 = _mm_unpacklo_epi64(
                                   (__m128i)*(unsigned __int64 *)v282,
                                   (__m128i)(unsigned __int64)&v113[3 * v208]);
              sub_AFDA10((__int64)v297, (char **)v301, v206[1]);
              v240 = (int *)v301[0];
              v241 = (char *)v301[0] + 8 * LODWORD(v301[1]);
              v242 = (char *)v301[0];
              if ( v301[0] != v241 )
              {
                do
                {
                  v243 = *(_QWORD *)v242;
                  v242 += 8;
                  *(_BYTE *)(v243 + 6) &= ~1u;
                }
                while ( v241 != v242 );
              }
              LODWORD(v301[1]) = 0;
              if ( v240 != v302 && v240 )
                sub_186B220(v240);
            }
            v212 = v206 + 2;
            ++v208;
            if ( v126 == v206 + 2 )
              break;
            while ( 1 )
            {
              v207 = *v212;
              v206 = v212;
              if ( (unsigned __int64)*v212 > 1 )
                break;
              v212 += 2;
              if ( v126 == v212 )
                goto LABEL_316;
            }
          }
          while ( v126 != v212 );
LABEL_316:
          v125 = *(__int64 **)(a1 + 920);
          v126 = &v125[2 * *(unsigned int *)(a1 + 928)];
LABEL_173:
          if ( v125 != v126 )
            goto LABEL_176;
        }
      }
      goto LABEL_189;
    }
    break;
  }
  if ( v113 )
  {
LABEL_271:
    v177 = *((unsigned int *)v113 - 1);
    if ( (_DWORD)v177 )
    {
      v178 = v113;
      v179 = &v113[3 * v177];
      do
      {
        while ( *v178 )
        {
          sub_186B220(*v178);
          v178 += 3;
          if ( v178 == v179 )
            goto LABEL_275;
        }
        v178 += 3;
      }
      while ( v178 != v179 );
    }
LABEL_275:
    sub_186B220(v113 - 1);
    if ( v299[0] )
      sub_186B220(v299[0]);
    if ( v281 )
      goto LABEL_278;
    goto LABEL_14;
  }
  v266 = v299[0];
  if ( !v299[0] )
    goto LABEL_278;
LABEL_397:
  sub_186B220(v266);
LABEL_278:
  v180 = v281;
  v181 = *(void **)v280;
  v182 = &v281[2 * *(v281 - 1)];
  if ( v281 < v182 )
  {
    do
    {
      while ( 1 )
      {
        v183 = *(_QWORD *)v180;
        if ( *(_QWORD *)v180 )
        {
          v49 = (*(_DWORD *)(v183 + 8))-- == 1;
          if ( v49 )
            break;
        }
        v180 += 2;
        if ( v180 >= v182 )
          goto LABEL_284;
      }
      v180 += 2;
      sub_15D7BC0(v181, v183);
    }
    while ( v180 < v182 );
  }
LABEL_284:
  sub_186B220(v281 - 2);
LABEL_14:
  result = (__int64 *)a1;
  if ( *(_BYTE *)(a1 + 912) )
  {
    *(_QWORD *)v285 = sub_8E35C0(v284);
    result = (__int64 *)a1;
    v41 = *(__int64 **)(a1 + 920);
    v42 = &v41[2 * *(unsigned int *)(a1 + 928)];
    if ( v41 != v42 )
    {
      while ( (unsigned __int64)*v41 <= 1 )
      {
        v41 += 2;
        if ( v42 == v41 )
          return result;
      }
      if ( v42 != v41 )
      {
        v43 = *v41;
        if ( !*v41 )
          goto LABEL_38;
        while ( 1 )
        {
          ++*(_DWORD *)(v43 + 8);
LABEL_38:
          v44 = v41[1];
          *(_QWORD *)v280 = v44;
          if ( v44 )
            ++*(_DWORD *)(v44 + 8);
          v45 = (_QWORD *)a2[1];
          if ( v45 )
          {
            v46 = *((unsigned int *)v45 - 1);
            if ( (_DWORD)v46 )
            {
              v47 = &v45[v46];
              while ( *v45 != v43 )
              {
                if ( v47 == ++v45 )
                  goto LABEL_57;
              }
              if ( !*(_QWORD *)v280 )
                goto LABEL_48;
              goto LABEL_46;
            }
          }
LABEL_57:
          v50 = (_OWORD *)sub_186B270(0x40u);
          v291 = v50;
          *v50 = 0;
          v50[1] = 0;
          v50[2] = 0;
          v50[3] = 0;
          *(_QWORD *)v292 = 8;
          v293 = 0;
          v51 = (_OWORD *)sub_186B270(0x40u);
          *(_QWORD *)v295 = 8;
          v52 = *(unsigned int **)v280;
          *v51 = 0;
          v51[1] = 0;
          v51[2] = 0;
          v51[3] = 0;
          v53 = _mm_loadh_ps((const double *)v285);
          v294 = v51;
          v296 = 0;
          *(__m128 *)v288 = v53;
          sub_B01030(a1, (unsigned int **)v288, (__int64)&v291);
          v54 = (void *)sub_8E35C0(v284);
          *(_QWORD *)&v297[2] = 0;
          v55 = *v52;
          v287 = v54;
          *(_QWORD *)v283 = &v297[2];
          v298 = nullptr;
          sub_186B510(&v297[2], v55 + 1, 0);
          v56 = v52;
          LODWORD(v57) = 0;
          *((_DWORD *)v298 + (v55 >> 5)) |= 1 << v55;
          v58 = v302;
          *(_QWORD *)v286 = v302;
          v301[0] = v302;
          *(_QWORD *)v302 = v52;
          v303 = 0;
          v301[1] = (void *)0x1000000001LL;
          while ( 1 )
          {
            while ( 1 )
            {
              v59 = *((_WORD *)v56 + 2);
              v60 = &v58[4 * (unsigned int)v57];
              if ( v59 != 1 )
                break;
LABEL_69:
              LODWORD(v301[1]) = v57;
              if ( !(_DWORD)v57 )
                goto LABEL_76;
LABEL_70:
              v57 = (unsigned int)(v57 - 1);
              v56 = *(unsigned int **)&v58[4 * v57];
            }
            if ( v59 != 2 )
            {
              if ( v59 )
              {
                sub_1872CE0("");
                sub_1873130(114, 100);
              }
              v61 = v56[6];
              v62 = v60[2];
              if ( v62 < v61 )
              {
                while ( 1 )
                {
                  v63 = v62++;
                  v64 = *(unsigned int **)&v56[2 * v63 + 8];
                  v60[2] = v62;
                  v65 = *v64;
                  if ( *v64 >= v297[2] )
                    break;
                  v67 = (char *)v298 + 4 * (v65 >> 5);
                  if ( ((1 << v65) & *v67) == 0 )
                  {
                    *v67 |= 1 << v65;
                    v66 = *((_WORD *)v64 + 2);
                    if ( v66 == 1 )
                      goto LABEL_73;
                    goto LABEL_64;
                  }
LABEL_67:
                  if ( v62 >= v61 )
                  {
                    v58 = (int *)v301[0];
                    LODWORD(v57) = LODWORD(v301[1]) - 1;
                    goto LABEL_69;
                  }
                }
                v282[0] = v61;
                LODWORD(v281) = v65;
                sub_186B510(*(_QWORD *)v283, v65 + 1, 0);
                v61 = v282[0];
                *((_DWORD *)v298 + ((unsigned int)v281 >> 5)) |= 1 << (char)v281;
                v66 = *((_WORD *)v64 + 2);
                if ( v66 == 1 )
                {
LABEL_73:
                  v62 = v60[2];
                  goto LABEL_67;
                }
LABEL_64:
                if ( v66 == 2 )
                {
                  v95 = LODWORD(v301[1]);
                  if ( LODWORD(v301[1]) >= HIDWORD(v301[1]) )
                  {
                    v107 = (unsigned int)(2 * HIDWORD(v301[1]));
                    v58 = (int *)sub_186B270(16 * v107);
                    v108 = (char *)v301[0];
                    v109 = 0;
                    v95 = LODWORD(v301[1]);
                    v110 = 16LL * LODWORD(v301[1]);
                    if ( LODWORD(v301[1]) )
                    {
                      do
                      {
                        *(__m128i *)&v58[v109 / 4] = _mm_loadu_si128((const __m128i *)&v108[v109]);
                        v109 += 16LL;
                      }
                      while ( v109 != v110 );
                    }
                    if ( v108 != *(char **)v286 && v108 )
                    {
                      v281 = v58;
                      sub_186B220(v108);
                      v95 = LODWORD(v301[1]);
                      v58 = v281;
                    }
                    v301[0] = v58;
                    HIDWORD(v301[1]) = v107;
                  }
                  else
                  {
                    v58 = (int *)v301[0];
                  }
                  v96 = &v58[4 * v95];
                  *(_QWORD *)v96 = v64;
                  v96[2] = 0;
                  v91 = LODWORD(v301[1]);
                  v92 = LODWORD(v301[1]) + 1;
                  goto LABEL_116;
                }
                if ( v66 )
                {
                  LODWORD(v281) = v61;
                  sub_1872CE0("");
                  sub_1873130(114, 73);
                }
                if ( v64[6] )
                {
                  v93 = LODWORD(v301[1]);
                  if ( LODWORD(v301[1]) >= HIDWORD(v301[1]) )
                  {
                    v267 = (unsigned int)(2 * HIDWORD(v301[1]));
                    v58 = (int *)sub_186B270(16 * v267);
                    v268 = (char *)v301[0];
                    v269 = 0;
                    v93 = LODWORD(v301[1]);
                    v270 = 16LL * LODWORD(v301[1]);
                    if ( LODWORD(v301[1]) )
                    {
                      do
                      {
                        *(__m128i *)&v58[v269 / 4] = _mm_loadu_si128((const __m128i *)&v268[v269]);
                        v269 += 16LL;
                      }
                      while ( v269 != v270 );
                    }
                    if ( v268 != *(char **)v286 && v268 )
                    {
                      v281 = v58;
                      sub_186B220(v268);
                      v93 = LODWORD(v301[1]);
                      v58 = v281;
                    }
                    v301[0] = v58;
                    HIDWORD(v301[1]) = v267;
                  }
                  else
                  {
                    v58 = (int *)v301[0];
                  }
                  v94 = &v58[4 * v93];
                  *(_QWORD *)v94 = v64;
                  v94[2] = 0;
                  v91 = LODWORD(v301[1]);
                  v92 = LODWORD(v301[1]) + 1;
                  goto LABEL_116;
                }
                goto LABEL_73;
              }
              goto LABEL_69;
            }
            v82 = v56[18];
            v83 = v60[2];
            v84 = v298;
            v85 = v297[2];
            v86 = v82 + v56[19] + 1;
            if ( v83 >= v86 )
              break;
            if ( !v83 )
            {
              v87 = *((int **)v56 + 3);
              goto LABEL_111;
            }
            while ( 1 )
            {
              v97 = v83 - 1;
              if ( v82 < v83 )
                v97 = (unsigned int)v97 - v82;
              v87 = *(int **)&v56[4 * v56[5] + 20 + 2 * v97];
LABEL_111:
              v88 = *v87;
              v60[2] = ++v83;
              if ( v88 >= v85 )
                break;
              if ( (v84[v88 >> 5] & (1 << v88)) == 0 )
                goto LABEL_113;
              if ( v83 >= v86 )
                goto LABEL_391;
              v82 = v56[18];
            }
            v281 = v87;
            sub_186B510(*(_QWORD *)v283, v88 + 1, 0);
            v87 = v281;
LABEL_113:
            *((_DWORD *)v298 + (v88 >> 5)) |= 1 << v88;
            v89 = LODWORD(v301[1]);
            if ( LODWORD(v301[1]) >= HIDWORD(v301[1]) )
            {
              v281 = v87;
              v98 = (unsigned int)(2 * HIDWORD(v301[1]));
              v58 = (int *)sub_186B270(16 * v98);
              v99 = 0;
              v100 = (char *)v301[0];
              v87 = v281;
              v89 = LODWORD(v301[1]);
              v101 = 16LL * LODWORD(v301[1]);
              if ( LODWORD(v301[1]) )
              {
                do
                {
                  *(__m128i *)&v58[v99 / 4] = _mm_loadu_si128((const __m128i *)&v100[v99]);
                  v99 += 16LL;
                }
                while ( v99 != v101 );
              }
              if ( v100 && v100 != *(char **)v286 )
              {
                *(_QWORD *)v282 = v58;
                v281 = v87;
                sub_186B220(v100);
                v89 = LODWORD(v301[1]);
                v58 = *(int **)v282;
                v87 = v281;
              }
              v301[0] = v58;
              HIDWORD(v301[1]) = v98;
            }
            else
            {
              v58 = (int *)v301[0];
            }
            v90 = &v58[4 * v89];
            *(_QWORD *)v90 = v87;
            v90[2] = 0;
            v91 = LODWORD(v301[1]);
            v92 = LODWORD(v301[1]) + 1;
LABEL_116:
            LODWORD(v301[1]) = v92;
            LODWORD(v57) = v92 - 1;
            v56 = *(unsigned int **)&v58[4 * v91];
          }
LABEL_391:
          v261 = *((_QWORD *)v56 + 3);
          --LODWORD(v301[1]);
          *(_QWORD *)v289 = v287;
          v290 = &v294;
          v299[0] = v300;
          v299[1] = (void *)0x1000000000LL;
          sub_AFDA10((__int64)v289, (char **)v299, v261);
          v262 = v299[0];
          v263 = (char *)v299[0] + 8 * LODWORD(v299[1]);
          for ( jj = (char *)v299[0]; jj != v263; *(_BYTE *)(v265 + 6) &= ~1u )
          {
            v265 = *(_QWORD *)jj;
            jj += 8;
          }
          LODWORD(v299[1]) = 0;
          if ( v262 && v262 != v300 )
            sub_186B220(v262);
          LODWORD(v57) = v301[1];
          v58 = (int *)v301[0];
          if ( LODWORD(v301[1]) )
            goto LABEL_70;
LABEL_76:
          if ( v58 && v58 != *(int **)v286 )
            sub_186B220(v58);
          if ( v298 )
            sub_186B220(v298);
          v68 = (char *)v291;
          v69 = v294;
          v70 = (char *)v291 + 8 * (unsigned int)v292[0];
          if ( v291 != v70 )
          {
            while ( *(_QWORD *)v68 <= 1u )
            {
              v68 += 8;
              if ( v70 == v68 )
                goto LABEL_104;
            }
            if ( v70 != v68 )
              break;
          }
LABEL_104:
          if ( v69 )
            sub_186B220(v69);
          if ( v291 )
            sub_186B220(v291);
LABEL_46:
          v48 = *(void **)v280;
          LODWORD(v281) = *(_DWORD *)(*(_QWORD *)v280 + 8LL);
          v49 = (_DWORD)v281 == 1;
          *(_DWORD *)(*(_QWORD *)v280 + 8LL) = (_DWORD)v281 - 1;
          if ( v49 )
            sub_15D7BC0(*(_QWORD *)v285, v48);
LABEL_48:
          if ( v43 )
          {
            v49 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v49 )
              sub_15D7BC0(*(_QWORD *)v285, v43);
          }
          result = v41 + 2;
          if ( v42 != v41 + 2 )
          {
            while ( 1 )
            {
              v43 = *result;
              v41 = result;
              if ( (unsigned __int64)*result > 1 )
                break;
              result += 2;
              if ( v42 == result )
                return result;
            }
            if ( v42 != result )
              continue;
          }
          return result;
        }
        v71 = *(_QWORD *)v68;
        v72 = 8LL * (unsigned int)v295[0];
LABEL_87:
        v73 = *(_DWORD *)(v71 + 12);
        v74 = 8LL * ((v295[0] - 1) & v73);
        v75 = (char *)v294 + v74;
        if ( v74 != v72 )
        {
          for ( kk = (__int64 *)((char *)v294 + v74); (char *)v294 + v72 != (char *)kk; ++kk )
          {
            v77 = *kk;
            if ( (unsigned __int64)*kk > 1 )
            {
              if ( *(_DWORD *)(v77 + 12) == v73 && v77 == v71 )
                goto LABEL_99;
            }
            else if ( !v77 )
            {
              goto LABEL_94;
            }
          }
        }
        if ( v75 == v294 )
        {
LABEL_94:
          v78 = (_QWORD *)a2[1];
          if ( !v78 )
            goto LABEL_144;
          goto LABEL_95;
        }
        v102 = (__int64 *)v294;
        while ( 1 )
        {
          v103 = *v102;
          if ( (unsigned __int64)*v102 > 1 )
          {
            if ( *(_DWORD *)(v103 + 12) == v73 && v103 == v71 )
              goto LABEL_99;
          }
          else if ( !v103 )
          {
            v78 = (_QWORD *)a2[1];
            if ( !v78 )
            {
LABEL_144:
              if ( v43 )
                ++*(_DWORD *)(v43 + 8);
              v104 = (_QWORD *)sub_186B270(0x18u);
              *v104 = 2;
              v105 = 1;
              v78 = v104 + 1;
              v69 = v294;
              a2[1] = (__int64)(v104 + 1);
              v106 = v104 + 1;
LABEL_147:
              *v106 = v43;
              *((_DWORD *)v78 - 1) = v105;
              goto LABEL_104;
            }
LABEL_95:
            v79 = *((_DWORD *)v78 - 1);
            if ( !v79 )
            {
LABEL_411:
              if ( v43 )
              {
                ++*(_DWORD *)(v43 + 8);
                v79 = *((_DWORD *)v78 - 1);
              }
              if ( v79 == *((_DWORD *)v78 - 2) )
              {
                v274 = (3 * v79 + 1) >> 1;
                if ( 8 * v79 + 8 >= 8 * v274 + 8 || v79 >= v274 )
                {
                  v8 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v301, "Overflow encountered when expanding vector");
                  *v8 = (char *)off_1C63128;
                  sub_2333C0(v8 + 1, v301);
                  sub_233E40((__int64)v301);
                  __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v275 = (unsigned int *)sub_186B300(v78 - 1, 8 * v274 + 8);
                v78 = v275 + 2;
                *v275 = v274;
                v276 = v275[1];
                v69 = v294;
                v277 = v276;
                v106 = &v78[v276];
                a2[1] = (__int64)v78;
                v105 = v277 + 1;
              }
              else
              {
                v273 = v79;
                v105 = v79 + 1;
                v106 = &v78[v273];
              }
              goto LABEL_147;
            }
            v80 = v78;
            while ( *v80 != v43 )
            {
              if ( ++v80 == &v78[v79] )
                goto LABEL_411;
            }
LABEL_99:
            v81 = v68 + 8;
            if ( v70 == v68 + 8 )
              goto LABEL_104;
            while ( 1 )
            {
              v71 = *(_QWORD *)v81;
              v68 = v81;
              if ( *(_QWORD *)v81 > 1u )
                break;
              v81 += 8;
              if ( v70 == v81 )
                goto LABEL_104;
            }
            if ( v70 == v81 )
              goto LABEL_104;
            goto LABEL_87;
          }
          if ( v75 == (char *)++v102 )
            goto LABEL_94;
        }
      }
    }
  }
  return result;
}

