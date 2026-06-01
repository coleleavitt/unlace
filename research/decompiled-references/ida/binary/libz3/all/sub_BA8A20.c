__int64 __fastcall sub_BA8A20(_QWORD *a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **v5; // rbp
  char **exception; // rbx
  char **v7; // rbx
  char **v8; // rbx
  char **v9; // rbx
  char **v10; // rbp
  char **v11; // rbp
  char **v12; // rbx
  char **v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // rbp
  unsigned int v17; // r12d
  __int64 v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rsi
  int v21; // edx
  _QWORD *v22; // rsi
  unsigned int v23; // edx
  __int64 v24; // r12
  unsigned int v25; // ebp
  size_t v26; // rdi
  unsigned int *v27; // rax
  __int64 *v28; // r14
  __int64 v29; // rbx
  __int64 *v30; // rsi
  _DWORD *v31; // rdi
  int v32; // r10d
  __int64 *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 *v36; // rbx
  __int64 *v37; // rbp
  unsigned int *v38; // r14
  __int64 *v39; // r12
  __int64 *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  __int64 result; // rax
  _QWORD *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // r14d
  unsigned int v49; // edx
  unsigned int *v50; // rax
  __int64 *v51; // rbx
  unsigned int *v52; // r12
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 *v55; // r9
  unsigned __int64 v56; // rcx
  __int64 *v57; // r8
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 *v61; // rax
  __int64 v62; // r8
  __int64 *v63; // r13
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // r12
  unsigned int v68; // eax
  __int64 v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rbx
  unsigned int v72; // edx
  __int64 v73; // rcx
  int v74; // edx
  _QWORD *v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rax
  _QWORD *v79; // rdx
  __int64 v80; // rbx
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 *v84; // rcx
  __int64 v85; // rbx
  unsigned int v86; // ebp
  _QWORD *v87; // rax
  __int64 v88; // r12
  __int64 v89; // rcx
  int v90; // eax
  __int64 *v91; // rcx
  int v92; // eax
  unsigned int v93; // edx
  __int64 v94; // rax
  __int64 v95; // r14
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  unsigned int v98; // ecx
  size_t v99; // rsi
  unsigned int v100; // r15d
  unsigned int *v101; // rax
  __int64 v102; // rcx
  unsigned int **v103; // rsi
  unsigned int v104; // edx
  unsigned int **v105; // rbp
  int *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rbx
  unsigned int **v109; // r15
  int *v110; // rdx
  int v111; // r13d
  __int64 v112; // rdx
  unsigned int v113; // r14d
  size_t v114; // rsi
  unsigned int *v115; // rdx
  int *v116; // r13
  int *v117; // r12
  __int64 v118; // rbp
  unsigned int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rax
  unsigned int *v124; // r13
  __int64 v125; // rbx
  __int64 v126; // rbp
  int v127; // eax
  unsigned int v128; // ebx
  _QWORD *v129; // rax
  _QWORD *v130; // r12
  __int64 v131; // rbx
  __m128i v132; // xmm0
  _QWORD *v133; // rax
  unsigned int v134; // edx
  __int64 v135; // rcx
  int v136; // edx
  __int64 *v137; // rcx
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  unsigned int v140; // r12d
  unsigned int v141; // ecx
  unsigned int *v142; // rax
  __int64 v143; // rcx
  unsigned __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  unsigned int **v147; // rbp
  unsigned int **v148; // r14
  __int64 v149; // rcx
  int v150; // edx
  unsigned int **v151; // rcx
  int v152; // r12d
  __int64 v153; // rdx
  unsigned int *v154; // rdx
  unsigned int *v155; // r12
  _QWORD *v156; // rax
  unsigned int v157; // edx
  unsigned int v158; // ecx
  size_t v159; // rsi
  unsigned int v160; // r13d
  unsigned int *v161; // rdx
  __int64 v162; // rcx
  unsigned int v163; // ebx
  unsigned int v164; // ecx
  unsigned int *v165; // rdx
  __int64 v166; // rcx
  unsigned int v167; // r12d
  unsigned int v168; // ecx
  unsigned int v169; // r12d
  unsigned int v170; // ecx
  unsigned int *v171; // rdx
  __int64 v172; // rcx
  _QWORD *v173; // rdx
  _QWORD *v174; // rax
  unsigned int v175; // ecx
  size_t v176; // rsi
  unsigned int v177; // r13d
  unsigned int *v178; // rdx
  _QWORD *v179; // rax
  _QWORD *v180; // rax
  _QWORD *v181; // rax
  unsigned int v182; // [rsp+8h] [rbp-F0h]
  __int64 v183; // [rsp+8h] [rbp-F0h]
  __int64 v184; // [rsp+8h] [rbp-F0h]
  unsigned int v185; // [rsp+8h] [rbp-F0h]
  __int64 v186; // [rsp+8h] [rbp-F0h]
  unsigned int v187; // [rsp+10h] [rbp-E8h]
  unsigned int v188; // [rsp+10h] [rbp-E8h]
  unsigned int *v189; // [rsp+10h] [rbp-E8h]
  _QWORD *v190; // [rsp+10h] [rbp-E8h]
  __int64 v191; // [rsp+18h] [rbp-E0h]
  unsigned int v192; // [rsp+18h] [rbp-E0h]
  _DWORD *v193; // [rsp+20h] [rbp-D8h]
  __int64 v194; // [rsp+20h] [rbp-D8h]
  __int64 v195; // [rsp+28h] [rbp-D0h]
  _QWORD *v196; // [rsp+28h] [rbp-D0h]
  __int64 v197; // [rsp+30h] [rbp-C8h]
  _QWORD *v198; // [rsp+30h] [rbp-C8h]
  __int64 v199; // [rsp+38h] [rbp-C0h]
  __int64 v200; // [rsp+38h] [rbp-C0h]
  __int64 v201; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v202; // [rsp+58h] [rbp-A0h]
  __int64 *v203; // [rsp+70h] [rbp-88h] BYREF
  char v204; // [rsp+78h] [rbp-80h]
  int v205; // [rsp+7Ch] [rbp-7Ch]
  __int64 v206; // [rsp+80h] [rbp-78h]
  int v207; // [rsp+88h] [rbp-70h]
  __int64 v208; // [rsp+90h] [rbp-68h]
  int v209; // [rsp+98h] [rbp-60h]
  __int64 v210; // [rsp+A0h] [rbp-58h]
  __m128i v211; // [rsp+A8h] [rbp-50h] BYREF

  v14 = (__int64)a1;
  v15 = 8LL * a2;
  v16 = a1[24];
  v182 = a2;
  v197 = a2;
  if ( !v16 )
  {
    v195 = **(_QWORD **)(a1[4] + 8LL * a2);
    v187 = a2 + 1;
    if ( a2 == -1 )
    {
      v19 = (_QWORD *)a1[25];
      if ( v19 )
      {
        v182 = -1;
        v23 = *((_DWORD *)v19 - 1);
        v197 = 0xFFFFFFFFLL;
        v199 = 0x7FFFFFFF8LL;
        goto LABEL_9;
      }
      v182 = -1;
      v197 = 0xFFFFFFFFLL;
      v199 = 0x7FFFFFFF8LL;
      goto LABEL_71;
    }
    v17 = 0;
    v45 = (_QWORD *)sub_186B270(0x18u);
    v16 = (unsigned __int64)(v45 + 1);
    *v45 = 2;
    a1[24] = v45 + 1;
    goto LABEL_33;
  }
  v17 = *(_DWORD *)(v16 - 4);
  if ( a2 >= v17 )
  {
    v195 = **(_QWORD **)(a1[4] + 8LL * a2);
    v187 = a2 + 1;
    if ( v17 >= a2 + 1 )
      goto LABEL_4;
LABEL_33:
    v192 = v17;
    while ( 1 )
    {
      v46 = *(_DWORD *)(v16 - 8);
      v47 = v187;
      if ( v46 >= v187 )
        break;
      while ( 1 )
      {
        v48 = (3 * v46 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v46 + 8 >= v49 || v46 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v203);
          sub_233E40((__int64)&v203);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B270(v49);
        v51 = *(__int64 **)(v14 + 192);
        v52 = v50;
        v16 = (unsigned __int64)(v50 + 2);
        if ( !v51 )
          break;
        v53 = *((unsigned int *)v51 - 1);
        v50[1] = v53;
        v54 = 8 * v53;
        v55 = &v51[v53];
        if ( v55 != v51 )
        {
          v56 = v54 - 8;
          v57 = v51;
          if ( (unsigned __int64)(v54 - 8) <= 8 || v16 < (unsigned __int64)(v51 + 2) && v51 < (__int64 *)v52 + 3 )
          {
            v144 = v16;
            do
            {
              v145 = *v57;
              *v57++ = 0;
              v144 += 8LL;
              *(_QWORD *)(v144 - 8) = v145;
            }
            while ( v57 != v55 );
          }
          else
          {
            v58 = 0;
            v59 = (v56 >> 3) + 1;
            do
            {
              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v51[v58 / 2]);
              a4 = 0;
              *(_OWORD *)&v51[v58 / 2] = 0;
              *(__m128 *)&v52[v58 + 2] = a3;
              v58 += 4LL;
            }
            while ( 4 * (v59 >> 1) != v58 );
            if ( (v59 & 1) != 0 )
            {
              v60 = v59 & 0xFFFFFFFFFFFFFFFELL;
              v61 = &v51[v60];
              v62 = *v61;
              *v61 = 0;
              *(_QWORD *)(v16 + 8 * v60) = v62;
            }
          }
        }
        v63 = &v51[v53];
        if ( (_DWORD)v53 )
        {
          do
          {
            while ( *v51 )
            {
              v64 = (void *)(*v51++ - 8);
              sub_186B220(v64);
              if ( v63 == v51 )
                goto LABEL_49;
            }
            ++v51;
          }
          while ( v51 != v63 );
LABEL_49:
          v51 = *(__int64 **)(v14 + 192);
        }
        sub_186B220(v51 - 1);
        *v52 = v48;
        v47 = v187;
        v46 = *(_DWORD *)(v16 - 8);
        *(_QWORD *)(v14 + 192) = v16;
        if ( v46 >= v187 )
          goto LABEL_51;
      }
      v50[1] = 0;
      *(_QWORD *)(v14 + 192) = v16;
      *v50 = v48;
    }
LABEL_51:
    v15 = 8LL * a2;
    *(_DWORD *)(v16 - 4) = v47;
    v65 = 8LL * v47;
    v66 = 8LL * v192;
    if ( v66 != v65 )
      memset((void *)(v16 + v66), 0, v65 - v66);
    goto LABEL_4;
  }
  result = *(_QWORD *)(v16 + 8LL * a2);
  if ( result && *(_DWORD *)(result - 4) )
    return result;
  v195 = **(_QWORD **)(a1[4] + 8LL * a2);
  v187 = a2 + 1;
  if ( v17 < a2 + 1 )
    goto LABEL_33;
LABEL_4:
  v18 = v16 + v15;
  v19 = *(_QWORD **)(v14 + 200);
  v199 = v18;
  if ( v19 )
    goto LABEL_8;
LABEL_71:
  v24 = *(_QWORD *)(v14 + 24);
  v202 = 0;
  v76 = (_QWORD *)sub_186B270(0x28u);
  v19 = v76 + 1;
  *v76 = 2;
  v21 = 1;
  *(_QWORD *)(v14 + 200) = v76 + 1;
  v22 = v76 + 1;
  while ( 1 )
  {
    *v22 = v24;
    v22[1] = 0;
    *((_DWORD *)v19 - 1) = v21;
LABEL_8:
    v23 = *((_DWORD *)v19 - 1);
    if ( v182 < v23 )
      break;
LABEL_9:
    v202 = 0;
    v24 = *(_QWORD *)(v14 + 24);
    if ( *((_DWORD *)v19 - 2) == v23 )
    {
      v25 = (3 * v23 + 1) >> 1;
      v26 = 16 * v25 + 8;
      if ( 16 * v23 + 8 >= (unsigned int)v26 || v23 >= v25 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v203);
        sub_233E40((__int64)&v203);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B270(v26);
      v28 = *(__int64 **)(v14 + 200);
      v19 = v27 + 2;
      if ( v28 )
      {
        v29 = *((unsigned int *)v28 - 1);
        v30 = *(__int64 **)(v14 + 200);
        v31 = v27 + 2;
        v27[1] = v29;
        v32 = v29;
        v33 = &v28[2 * v29];
        if ( v28 != v33 )
        {
          do
          {
            v34 = *v30;
            v30 += 2;
            v31 += 4;
            *((_QWORD *)v31 - 2) = v34;
            v35 = *(v30 - 1);
            *(v30 - 1) = 0;
            *((_QWORD *)v31 - 1) = v35;
          }
          while ( v30 != v33 );
        }
        v36 = &v28[2 * v29];
        if ( v32 )
        {
          v191 = v24;
          v193 = v27 + 2;
          v188 = v25;
          v37 = v28;
          v38 = v27;
          do
          {
            v39 = (__int64 *)v37[1];
            if ( v39 )
            {
              v40 = &v39[*((unsigned int *)v39 - 1)];
              if ( v39 >= v40 )
                goto LABEL_25;
              do
              {
                while ( 1 )
                {
                  v41 = *v39;
                  if ( *v39 )
                  {
                    v42 = *v37;
                    v43 = (*(_DWORD *)(v41 + 8))-- == 1;
                    if ( v43 )
                      break;
                  }
                  if ( ++v39 >= v40 )
                    goto LABEL_24;
                }
                sub_15D7BC0(v42, v41);
                ++v39;
              }
              while ( v39 < v40 );
LABEL_24:
              v39 = (__int64 *)v37[1];
              if ( v39 )
LABEL_25:
                sub_186B220(v39 - 1);
            }
            v37 += 2;
          }
          while ( v37 != v36 );
          v27 = v38;
          v25 = v188;
          v24 = v191;
          v19 = v193;
          v28 = *(__int64 **)(v14 + 200);
        }
        v189 = v27;
        sub_186B220(v28 - 1);
        v27 = v189;
        v22 = &v19[2 * v189[1]];
        v21 = v189[1] + 1;
      }
      else
      {
        v27[1] = 0;
        v22 = v27 + 2;
        v21 = 1;
      }
      *(_QWORD *)(v14 + 200) = v19;
      *v27 = v25;
    }
    else
    {
      v20 = v23;
      v21 = v23 + 1;
      v22 = &v19[2 * v20];
    }
  }
  v77 = *(_QWORD *)(v14 + 16);
  v78 = sub_180C100(v77 + 8400, 24);
  v79 = *(_QWORD **)(v77 + 9456);
  v80 = v78;
  *(_QWORD *)v78 = off_1C57CA8;
  *(_QWORD *)(v78 + 8) = v14;
  *(_DWORD *)(v78 + 16) = v182;
  if ( v79 )
  {
    v81 = *((_DWORD *)v79 - 1);
    if ( v81 == *((_DWORD *)v79 - 2) )
    {
      v140 = (3 * v81 + 1) >> 1;
      v141 = 8 * v140 + 8;
      if ( 8 * v81 + 8 >= v141 || v81 >= v140 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, &v203);
        sub_233E40((__int64)&v203);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v142 = (unsigned int *)sub_186B300(v79 - 1, v141);
      v143 = v142[1];
      v79 = v142 + 2;
      *(_QWORD *)(v77 + 9456) = v142 + 2;
      *v142 = v140;
      LODWORD(v142) = v143;
      v84 = &v79[v143];
      v83 = (_DWORD)v142 + 1;
    }
    else
    {
      v82 = v81;
      v83 = v81 + 1;
      v84 = &v79[v82];
    }
  }
  else
  {
    v173 = (_QWORD *)sub_186B270(0x18u);
    *v173 = 2;
    v83 = 1;
    v79 = v173 + 1;
    *(_QWORD *)(v77 + 9456) = v79;
    v84 = v79;
  }
  *v84 = v80;
  *((_DWORD *)v79 - 1) = v83;
  v85 = *(_QWORD *)(v14 + 200) + 16 * v197;
  if ( *(_WORD *)(v195 + 4) )
  {
    v86 = 0;
  }
  else
  {
    v86 = 0;
    v87 = *(_QWORD **)(*(_QWORD *)(v195 + 16) + 24LL);
    if ( v87 && *v87 == (*(unsigned int *)(v14 + 80) | 0x4300000000LL) )
    {
      v146 = v87[1];
      if ( *(_BYTE *)(v146 + 8) != 2 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      if ( *(_QWORD *)v146 == *(_QWORD *)(v14 + 512) )
      {
        v147 = (unsigned int **)(v195 + 32);
        result = 8LL * *(unsigned int *)(v195 + 24);
        v148 = (unsigned int **)(v195 + 32 + result);
        if ( result )
        {
          do
          {
            v155 = *v147;
            if ( *v147 )
              ++v155[2];
            v156 = *(_QWORD **)(v85 + 8);
            if ( v156 )
            {
              v157 = *((_DWORD *)v156 - 1);
              if ( v157 == *((_DWORD *)v156 - 2) )
              {
                v158 = (3 * v157 + 1) >> 1;
                v159 = 8 * v158 + 8;
                v160 = v158;
                if ( 8 * v157 + 8 >= (unsigned int)v159 || v157 >= v158 )
                {
                  v12 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
                  *v12 = (char *)off_1C63128;
                  sub_2333C0(v12 + 1, &v203);
                  sub_233E40((__int64)&v203);
                  __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v161 = (unsigned int *)sub_186B300(v156 - 1, v159);
                v156 = v161 + 2;
                v162 = v161[1];
                *(_QWORD *)(v85 + 8) = v161 + 2;
                *v161 = v160;
                LODWORD(v161) = v162;
                v151 = (unsigned int **)&v156[v162];
                v150 = (_DWORD)v161 + 1;
              }
              else
              {
                v149 = v157;
                v150 = v157 + 1;
                v151 = (unsigned int **)&v156[v149];
              }
            }
            else
            {
              v181 = (_QWORD *)sub_186B270(0x18u);
              v150 = 1;
              *v181 = 2;
              v156 = v181 + 1;
              *(_QWORD *)(v85 + 8) = v156;
              v151 = (unsigned int **)v156;
            }
            *v151 = v155;
            *((_DWORD *)v156 - 1) = v150;
            result = *(_QWORD *)v199;
            v152 = 2 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 8832LL) + 4LL * *v155);
            if ( *(_QWORD *)v199 )
            {
              v153 = *(unsigned int *)(result - 4);
              if ( (_DWORD)v153 == *(_DWORD *)(result - 8) )
              {
                v175 = (unsigned int)(3 * v153 + 1) >> 1;
                v176 = 4 * v175 + 8;
                v177 = v175;
                if ( 4 * (int)v153 + 8 >= (unsigned int)v176 || (unsigned int)v153 >= v175 )
                {
                  v13 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
                  *v13 = (char *)off_1C63128;
                  sub_2333C0(v13 + 1, &v203);
                  sub_233E40((__int64)&v203);
                  __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v178 = (unsigned int *)sub_186B300((void *)(result - 8), v176);
                result = (__int64)(v178 + 2);
                *(_QWORD *)v199 = v178 + 2;
                *v178 = v177;
                v154 = &v178[v178[1] + 2];
              }
              else
              {
                v154 = (unsigned int *)(result + 4 * v153);
              }
            }
            else
            {
              v180 = (_QWORD *)sub_186B270(0x10u);
              *v180 = 2;
              result = (__int64)(v180 + 1);
              *(_QWORD *)v199 = result;
              v154 = (unsigned int *)result;
            }
            ++v147;
            *v154 = v152;
            ++*(_DWORD *)(result - 4);
          }
          while ( v148 != v147 );
        }
        goto LABEL_68;
      }
    }
  }
  v183 = v14;
  v88 = v14 + 56;
  while ( 1 )
  {
    v92 = sub_18002C0();
    v93 = 8;
    if ( v92 )
      v93 = 2 * (v92 != 2) + 16;
    if ( v86 >= v93 )
      break;
    v94 = sub_163B190(v88, v195, v86);
    v95 = v94;
    if ( v94 )
      ++*(_DWORD *)(v94 + 8);
    v96 = *(_QWORD **)(v85 + 8);
    if ( v96 )
    {
      v97 = *((_DWORD *)v96 - 1);
      if ( v97 == *((_DWORD *)v96 - 2) )
      {
        v98 = (3 * v97 + 1) >> 1;
        v99 = 8 * v98 + 8;
        v100 = v98;
        if ( 8 * v97 + 8 >= (unsigned int)v99 || v97 >= v98 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, &v203);
          sub_233E40((__int64)&v203);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v101 = (unsigned int *)sub_186B300(v96 - 1, v99);
        v102 = v101[1];
        v96 = v101 + 2;
        *(_QWORD *)(v85 + 8) = v101 + 2;
        *v101 = v100;
        LODWORD(v101) = v102;
        v91 = &v96[v102];
        v90 = (_DWORD)v101 + 1;
      }
      else
      {
        v89 = v97;
        v90 = v97 + 1;
        v91 = &v96[v89];
      }
    }
    else
    {
      v139 = (_QWORD *)sub_186B270(0x18u);
      v96 = v139 + 1;
      *v139 = 2;
      v90 = 1;
      *(_QWORD *)(v85 + 8) = v96;
      v91 = v96;
    }
    *v91 = v95;
    ++v86;
    *((_DWORD *)v96 - 1) = v90;
  }
  v14 = v183;
  v103 = *(unsigned int ***)(v85 + 8);
  if ( v103 )
    v104 = *((_DWORD *)v103 - 1);
  else
    v104 = 0;
  sub_B6E740(*(_QWORD **)(v183 + 16), v103, v104, 1u, a3, a4, a5);
  v105 = *(unsigned int ***)(v85 + 8);
  v106 = *(int **)v199;
  if ( !v105 || (v107 = *((unsigned int *)v105 - 1), &v105[v107] == v105) )
  {
    if ( v106 )
      goto LABEL_104;
    goto LABEL_107;
  }
  v184 = v85;
  v108 = v14;
  v109 = &v105[v107];
  do
  {
    while ( 1 )
    {
      v111 = 2 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v108 + 16) + 8832LL) + 4LL * **v105);
      if ( !v106 )
      {
        v138 = (_QWORD *)sub_186B270(0x10u);
        *v138 = 2;
        v106 = (int *)(v138 + 1);
        *(_QWORD *)v199 = v106;
        v110 = v106;
        goto LABEL_97;
      }
      v112 = (unsigned int)*(v106 - 1);
      if ( (_DWORD)v112 == *(v106 - 2) )
        break;
      v110 = &v106[v112];
LABEL_97:
      ++v105;
      *v110 = v111;
      ++*(v106 - 1);
      if ( v109 == v105 )
        goto LABEL_103;
    }
    v113 = (unsigned int)(3 * v112 + 1) >> 1;
    v114 = 4 * v113 + 8;
    if ( 4 * (int)v112 + 8 >= (unsigned int)v114 || (unsigned int)v112 >= v113 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, &v203);
      sub_233E40((__int64)&v203);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    ++v105;
    v115 = (unsigned int *)sub_186B300(v106 - 2, v114);
    v106 = (int *)(v115 + 2);
    *(_QWORD *)v199 = v115 + 2;
    *v115 = v113;
    v115[v115[1]++ + 2] = v111;
  }
  while ( v109 != v105 );
LABEL_103:
  v14 = v108;
  v85 = v184;
LABEL_104:
  v116 = &v106[*(v106 - 1)];
  if ( v116 != v106 )
  {
    v117 = v106;
    do
    {
      v118 = *(_QWORD *)(v14 + 16);
      v119 = *v117++;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v118 + 7488) + 48LL))(
        *(_QWORD *)(v118 + 7488),
        *(_QWORD *)(*(_QWORD *)(v118 + 8840) + 8LL * (v119 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v118 + 7488) + 64LL))(*(_QWORD *)(v118 + 7488));
    }
    while ( v116 != v117 );
  }
LABEL_107:
  v200 = *(_QWORD *)(v14 + 24);
  v120 = sub_15D1F10(v195);
  v121 = *(_QWORD *)(v85 + 8);
  if ( v121 )
    v122 = *(unsigned int *)(v121 - 4);
  else
    v122 = 0;
  v123 = sub_163B030(v14 + 56, v14 + 512, v122, v121, v120);
  v124 = (unsigned int *)v123;
  if ( v123 )
    ++*(_DWORD *)(v123 + 8);
  v125 = *(_QWORD *)(v14 + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v125 + 7488) + 48LL))(*(_QWORD *)(v125 + 7488), v123);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v125 + 7488) + 64LL))(*(_QWORD *)(v125 + 7488));
  v196 = sub_966570(v14, (unsigned int *)v195);
  v190 = sub_966570(v14, v124);
  v194 = *(_QWORD *)(v14 + 16);
  LODWORD(v125) = *(_DWORD *)(v14 + 8);
  sub_B72D60((__int64)&v203, v194, 0, nullptr, 0, 0);
  v209 = v125;
  v210 = 0;
  v211.m128i_i64[0] = (__int64)v196;
  v203 = (__int64 *)&off_1C579E8;
  v211.m128i_i64[1] = (__int64)v190;
  nullsub_687();
  v126 = sub_180C100(v194 + 8400, 72);
  *(_BYTE *)(v126 + 8) = v204 & 3 | *(_BYTE *)(v126 + 8) & 0xFC;
  *(_DWORD *)(v126 + 12) = v205;
  *(_QWORD *)(v126 + 16) = v206;
  *(_DWORD *)(v126 + 24) = v207;
  *(_QWORD *)(v126 + 32) = v208;
  *(_QWORD *)v126 = qword_1C6E7C8;
  v127 = v209;
  *(_QWORD *)(v126 + 48) = 0;
  *(_DWORD *)(v126 + 40) = v127;
  if ( v210 )
  {
    v128 = *(_DWORD *)(v210 - 4);
    v185 = *(_DWORD *)(v210 - 8);
    v129 = (_QWORD *)sub_186B270(16LL * v185 + 8);
    v130 = v129 + 1;
    v198 = v129 + 1;
    *v129 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v185), _mm_cvtsi32_si128(v128)).m128i_u64[0];
    *(_QWORD *)(v126 + 48) = v129 + 1;
    v131 = v210;
    if ( !v210 || (v186 = v210 + 16LL * *(unsigned int *)(v210 - 4), v210 == v186) )
    {
      *(__m128i *)(v126 + 56) = _mm_loadu_si128(&v211);
      *(_QWORD *)v126 = &off_1C579E8;
LABEL_116:
      if ( *((_DWORD *)v198 - 1) )
      {
        v133 = *(_QWORD **)(v194 + 8600);
        if ( v133 )
        {
          v134 = *((_DWORD *)v133 - 1);
          if ( v134 == *((_DWORD *)v133 - 2) )
          {
            v163 = (3 * v134 + 1) >> 1;
            v164 = 8 * v163 + 8;
            if ( 8 * v134 + 8 >= v164 || v134 >= v163 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v201, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, &v201);
              sub_233E40((__int64)&v201);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v165 = (unsigned int *)sub_186B300(v133 - 1, v164);
            v133 = v165 + 2;
            *(_QWORD *)(v194 + 8600) = v165 + 2;
            v166 = v165[1];
            *v165 = v163;
            LODWORD(v165) = v166;
            v137 = &v133[v166];
            v136 = (_DWORD)v165 + 1;
          }
          else
          {
            v135 = v134;
            v136 = v134 + 1;
            v137 = &v133[v135];
          }
        }
        else
        {
          v179 = (_QWORD *)sub_186B270(0x18u);
          *v179 = 2;
          v133 = v179 + 1;
          v136 = 1;
          *(_QWORD *)(v194 + 8600) = v133;
          v137 = v133;
        }
        *v137 = v126;
        *((_DWORD *)v133 - 1) = v136;
      }
    }
    else
    {
      do
      {
        sub_15D0E50(v130, v131);
        v131 += 16;
        v130 += 2;
      }
      while ( v186 != v131 );
      v132 = _mm_loadu_si128(&v211);
      v198 = *(_QWORD **)(v126 + 48);
      *(_QWORD *)v126 = &off_1C579E8;
      *(__m128i *)(v126 + 56) = v132;
      if ( v198 )
        goto LABEL_116;
    }
  }
  else
  {
    *(__m128i *)(v126 + 56) = _mm_loadu_si128(&v211);
    *(_QWORD *)v126 = &off_1C579E8;
  }
  v67 = v210;
  v203 = qword_1C6E7C8;
  if ( v210 )
  {
    v68 = *(_DWORD *)(v210 - 4);
    if ( v68 )
    {
      v69 = v210 + 16LL * v68;
      do
      {
        v70 = v67;
        v67 += 16;
        sub_15D0DF0(v70);
      }
      while ( v67 != v69 );
      v67 = v210;
    }
    sub_186B220((void *)(v67 - 8));
  }
  result = (__int64)v196;
  if ( v196[1] != v190[1] )
  {
    v71 = *(_QWORD *)(v14 + 16);
    result = *(_QWORD *)(v71 + 8760);
    if ( result )
    {
      v72 = *(_DWORD *)(result - 4);
      if ( v72 == *(_DWORD *)(result - 8) )
      {
        v167 = 3 * v72 + 1;
        v168 = v167 & 0xFFFFFFFE;
        v169 = v167 >> 1;
        v170 = 8 * (v169 + v168) + 8;
        if ( 24 * v72 + 8 >= v170 || v72 >= v169 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v203, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, &v203);
          sub_233E40((__int64)&v203);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v171 = (unsigned int *)sub_186B300((void *)(result - 8), v170);
        result = (__int64)(v171 + 2);
        v172 = v171[1];
        *(_QWORD *)(v71 + 8760) = v171 + 2;
        *v171 = v169;
        LODWORD(v171) = v172;
        v75 = (_QWORD *)(result + 24 * v172);
        v74 = (_DWORD)v171 + 1;
      }
      else
      {
        v73 = v72;
        v74 = v72 + 1;
        v75 = (_QWORD *)(result + 24 * v73);
      }
    }
    else
    {
      v174 = (_QWORD *)sub_186B270(0x38u);
      *v174 = 2;
      result = (__int64)(v174 + 1);
      v74 = 1;
      *(_QWORD *)(v71 + 8760) = result;
      v75 = (_QWORD *)result;
    }
    v75[2] = v126 | 3;
    *v75 = v196;
    v75[1] = v190;
    *(_DWORD *)(result - 4) = v74;
  }
  if ( v124 )
  {
    v43 = v124[2]-- == 1;
    if ( v43 )
      result = sub_15D7BC0(v200, v124);
  }
LABEL_68:
  ++*(_DWORD *)(v14 + 504);
  return result;
}

