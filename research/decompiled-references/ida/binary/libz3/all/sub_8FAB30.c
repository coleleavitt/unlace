__int64 __fastcall sub_8FAB30(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r13
  char **v8; // r12
  _QWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r12d
  int *v13; // r15
  int *v14; // r14
  unsigned int v15; // ebp
  int v16; // edx
  _DWORD *v17; // rbp
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  unsigned int *v26; // rax
  _QWORD *v27; // r8
  unsigned int v28; // r14d
  unsigned int v29; // eax
  unsigned int v30; // r12d
  unsigned int i; // eax
  unsigned int v32; // edx
  size_t v33; // rsi
  unsigned int v34; // r15d
  unsigned int *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // edx
  size_t v40; // rsi
  unsigned int *v41; // rax
  unsigned int v42; // ecx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _DWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned __int64 v47; // r12
  __int64 v48; // rax
  _QWORD *v49; // r15
  _QWORD *v50; // rax
  size_t v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // r12
  unsigned int v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  unsigned int *v58; // r14
  unsigned int v59; // r12d
  unsigned int v60; // r8d
  _DWORD *v61; // r13
  __int64 v62; // r11
  __int64 v63; // r9
  _DWORD *v64; // rdi
  _DWORD *v65; // rcx
  _DWORD *v66; // rdx
  int v67; // eax
  _DWORD *v68; // r15
  int v69; // eax
  unsigned __int64 v70; // r13
  __int64 v71; // rax
  _QWORD *v72; // rdx
  unsigned int v73; // r13d
  _QWORD *v74; // rax
  __m128i v75; // xmm3
  size_t v76; // rdx
  int v77; // eax
  _DWORD *v78; // rdx
  int v79; // eax
  unsigned int v80; // r10d
  unsigned int v81; // edx
  _DWORD *v82; // r12
  unsigned int *v83; // r15
  int v84; // eax
  unsigned int v85; // r12d
  size_t v86; // rdi
  unsigned __int64 v87; // rdx
  _DWORD *v88; // r12
  __int64 v89; // r9
  __int64 v90; // rax
  int v91; // r8d
  __int64 *v92; // r10
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  unsigned __int64 v95; // rdi
  __m128i v96; // xmm0
  unsigned __int64 v97; // rdi
  __int64 *v98; // rax
  __int64 v99; // r10
  unsigned __int64 v100; // r9
  _DWORD *v101; // r13
  _DWORD *v102; // r12
  _QWORD *v103; // rbp
  _QWORD *v104; // rbx
  void *v105; // rdi
  int v106; // eax
  __int64 *v107; // r12
  __int64 v108; // rax
  __int64 *v109; // r13
  unsigned int v110; // ebx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r12
  __int64 v114; // rax
  unsigned int v115; // r10d
  _QWORD *v116; // rdx
  char *v117; // rsi
  __int64 v118; // rdx
  _QWORD *v119; // r15
  char *v120; // r11
  _QWORD *v121; // rdx
  int v122; // edi
  __int64 v123; // rdx
  _DWORD *v124; // rsi
  _DWORD *v125; // r12
  int v126; // esi
  __int64 *v127; // rsi
  __int64 v128; // rdi
  unsigned int v129; // r12d
  _DWORD *v130; // r14
  _DWORD *v131; // r15
  __int64 v132; // r13
  __int64 *v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rsi
  char *v136; // r15
  char *v137; // r12
  char *v138; // r15
  _QWORD *v139; // rbx
  __int64 v140; // rdx
  _QWORD *v141; // rbp
  void *v142; // rdi
  _QWORD *v143; // rax
  _DWORD *v144; // r12
  int v145; // edx
  __int64 v146; // rax
  __int64 *v147; // r13
  unsigned int v148; // ebx
  __int64 v149; // rax
  __int64 *v150; // rax
  unsigned __int64 v151; // rdi
  __int64 v152; // rcx
  unsigned int v153; // r14d
  unsigned int v154; // ecx
  unsigned int *v155; // rax
  __int64 v156; // rcx
  unsigned int v157; // r12d
  unsigned int v158; // edx
  __int64 *v159; // r15
  _DWORD *v160; // rsi
  __int64 v161; // r9
  __int64 *v162; // r10
  unsigned __int64 v163; // rdi
  unsigned __int64 v164; // rax
  unsigned __int64 v165; // rdi
  __m128i v166; // xmm0
  unsigned __int64 v167; // rdi
  __int64 *v168; // rax
  __int64 v169; // r10
  __int64 v170; // rax
  _QWORD *v171; // rdx
  __int64 *v172; // rax
  unsigned __int64 v173; // rdi
  __int64 v174; // rdx
  unsigned int *v175; // [rsp+0h] [rbp-B8h]
  unsigned int v176; // [rsp+0h] [rbp-B8h]
  _QWORD *v177; // [rsp+0h] [rbp-B8h]
  unsigned int v178; // [rsp+0h] [rbp-B8h]
  unsigned int v179; // [rsp+0h] [rbp-B8h]
  _QWORD *v180; // [rsp+0h] [rbp-B8h]
  unsigned int v181; // [rsp+0h] [rbp-B8h]
  unsigned int v182; // [rsp+0h] [rbp-B8h]
  _QWORD *v183; // [rsp+0h] [rbp-B8h]
  __int64 *v184; // [rsp+0h] [rbp-B8h]
  unsigned int v185; // [rsp+8h] [rbp-B0h]
  unsigned int v186; // [rsp+8h] [rbp-B0h]
  unsigned int v187; // [rsp+8h] [rbp-B0h]
  unsigned int v188; // [rsp+8h] [rbp-B0h]
  unsigned int *v189; // [rsp+8h] [rbp-B0h]
  unsigned int v190; // [rsp+8h] [rbp-B0h]
  unsigned int v191; // [rsp+10h] [rbp-A8h]
  _QWORD *v192; // [rsp+10h] [rbp-A8h]
  unsigned int v193; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v194; // [rsp+10h] [rbp-A8h]
  size_t v195; // [rsp+10h] [rbp-A8h]
  _DWORD *v196; // [rsp+10h] [rbp-A8h]
  unsigned int v197; // [rsp+10h] [rbp-A8h]
  unsigned int *v198; // [rsp+18h] [rbp-A0h]
  _QWORD *v199; // [rsp+18h] [rbp-A0h]
  unsigned int v200; // [rsp+18h] [rbp-A0h]
  __int64 *v201; // [rsp+18h] [rbp-A0h]
  unsigned int v202; // [rsp+18h] [rbp-A0h]
  unsigned int v203; // [rsp+18h] [rbp-A0h]
  __int64 v204; // [rsp+18h] [rbp-A0h]
  unsigned int v205; // [rsp+18h] [rbp-A0h]
  unsigned int v206; // [rsp+20h] [rbp-98h]
  char *v207; // [rsp+20h] [rbp-98h]
  __int64 v208; // [rsp+20h] [rbp-98h]
  __int64 v209; // [rsp+20h] [rbp-98h]
  _DWORD *v210; // [rsp+20h] [rbp-98h]
  __int64 v211; // [rsp+20h] [rbp-98h]
  unsigned int v213; // [rsp+28h] [rbp-90h]
  _DWORD *v214; // [rsp+28h] [rbp-90h]
  _DWORD *v215; // [rsp+28h] [rbp-90h]
  unsigned int v216; // [rsp+28h] [rbp-90h]
  _DWORD *v217; // [rsp+28h] [rbp-90h]
  _DWORD *v218; // [rsp+30h] [rbp-88h]
  char *v219; // [rsp+30h] [rbp-88h]
  char *v220; // [rsp+30h] [rbp-88h]
  char *v221; // [rsp+30h] [rbp-88h]
  unsigned int *v222; // [rsp+38h] [rbp-80h]
  unsigned int v223; // [rsp+38h] [rbp-80h]
  _QWORD *v224; // [rsp+38h] [rbp-80h]
  unsigned int v225; // [rsp+38h] [rbp-80h]
  _QWORD *v226; // [rsp+40h] [rbp-78h]
  unsigned int v227; // [rsp+40h] [rbp-78h]
  _QWORD *v228; // [rsp+48h] [rbp-70h]
  __int64 v229[11]; // [rsp+60h] [rbp-58h] BYREF

  v10 = a1;
  if ( !*(_BYTE *)(a1[14] + 589LL) )
  {
    result = a1[13];
    if ( !*(_DWORD *)(result + 712) && a2 >= 2 )
    {
      v12 = 1;
      v13 = (int *)(a3 + 1);
      do
      {
        v14 = v13;
        v15 = v12;
        do
        {
          v16 = *v14;
          ++v15;
          ++v14;
          result = sub_B69F80(a1, *(v13 - 1) ^ 1u, v16 ^ 1u, 0);
        }
        while ( v15 < a2 );
        ++v12;
        ++v13;
      }
      while ( a2 != v12 );
    }
    return result;
  }
  if ( a2 )
  {
    v175 = a3;
    v17 = nullptr;
    v198 = &a3[a2];
    while ( 1 )
    {
      v27 = (_QWORD *)a1[1175];
      v28 = *v175;
      v29 = *v175 >> 5;
      v185 = v29;
      if ( !v27 )
        break;
      v30 = v29 + 1;
      v191 = *((_DWORD *)v27 - 1);
      if ( v29 < v191 )
        goto LABEL_11;
      for ( i = *((_DWORD *)v27 - 2); i < v30; i = *((_DWORD *)v27 - 2) )
      {
        v32 = (3 * i + 1) >> 1;
        v33 = 4 * v32 + 8;
        v34 = v32;
        if ( 4 * i + 8 >= (unsigned int)v33 || i >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v229, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v229);
          sub_233E40((__int64)v229);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v27 - 1, v33);
        v27 = v35 + 2;
        *v35 = v34;
        a1[1175] = v35 + 2;
LABEL_24:
        ;
      }
      *((_DWORD *)v27 - 1) = v30;
      v36 = 4LL * v30;
      v37 = 4LL * v191;
      if ( v37 != v36 )
      {
        v192 = v27;
        memset((char *)v27 + v37, 0, v36 - v37);
        v27 = v192;
      }
LABEL_11:
      *((_DWORD *)v27 + v185) |= 1 << v28;
      v18 = sub_180C100(a1 + 1050, 24);
      v19 = (__int64 *)a1[1182];
      v20 = v18;
      *(_QWORD *)v18 = off_1C55B68;
      *(_QWORD *)(v18 + 8) = a1;
      *(_DWORD *)(v18 + 16) = v28;
      if ( !v19 )
      {
        v143 = (_QWORD *)sub_186B270(0x18u);
        v19 = v143 + 1;
        *v143 = 2;
        v23 = 1;
        a1[1182] = v19;
        v24 = v19;
LABEL_14:
        *v24 = v20;
        *((_DWORD *)v19 - 1) = v23;
        if ( v17 )
          goto LABEL_15;
        goto LABEL_34;
      }
      v21 = *((_DWORD *)v19 - 1);
      if ( v21 != *((_DWORD *)v19 - 2) )
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v19[v22];
        goto LABEL_14;
      }
      v42 = (3 * v21 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v43 || v21 >= v42 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v229, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v229);
        sub_233E40((__int64)v229);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v187 = (3 * v21 + 1) >> 1;
      v44 = (unsigned int *)sub_186B300(v19 - 1, v43);
      v45 = v44 + 2;
      a1[1182] = v44 + 2;
      *v44 = v187;
      LODWORD(v44) = v44[1];
      *(_QWORD *)&v45[2 * (unsigned int)v44] = v20;
      *(v45 - 1) = (_DWORD)v44 + 1;
      if ( v17 )
      {
LABEL_15:
        v25 = (unsigned int)*(v17 - 1);
        if ( (_DWORD)v25 == *(v17 - 2) )
        {
          v39 = (unsigned int)(3 * v25 + 1) >> 1;
          v40 = 4 * v39 + 8;
          if ( 4 * (int)v25 + 8 >= (unsigned int)v40 || (unsigned int)v25 >= v39 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v229, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v229);
            sub_233E40((__int64)v229);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v186 = (unsigned int)(3 * v25 + 1) >> 1;
          v41 = (unsigned int *)sub_186B300(v17 - 2, v40);
          v17 = v41 + 2;
          *v41 = v186;
          v26 = &v41[v41[1] + 2];
        }
        else
        {
          v26 = &v17[v25];
        }
        goto LABEL_17;
      }
LABEL_34:
      v46 = (_QWORD *)sub_186B270(0x10u);
      v17 = v46 + 1;
      *v46 = 2;
      v26 = (unsigned int *)(v46 + 1);
LABEL_17:
      *v26 = v28;
      ++v175;
      ++*(v17 - 1);
      if ( v198 == v175 )
        goto LABEL_36;
    }
    v30 = v29 + 1;
    v38 = (_QWORD *)sub_186B270(0x10u);
    v27 = v38 + 1;
    v191 = 0;
    a1[1175] = v38 + 1;
    *v38 = 2;
    goto LABEL_24;
  }
  v17 = nullptr;
LABEL_36:
  v47 = a1[1176];
  if ( v47 )
  {
    LODWORD(v48) = *(_DWORD *)(v47 - 4);
    v49 = (_QWORD *)(v47 + 8LL * (unsigned int)v48);
    if ( (_DWORD)v48 == *(_DWORD *)(v47 - 8) )
    {
      v157 = (unsigned int)(3 * v48 + 1) >> 1;
      v158 = 8 * v157 + 8;
      v190 = v157;
      if ( 8 * (int)v48 + 8 >= v158 || (unsigned int)v48 >= v157 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v229, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v229);
        sub_233E40((__int64)v229);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = sub_186B270(v158);
      v159 = (__int64 *)a1[1176];
      v160 = (_DWORD *)v48;
      v47 = v48 + 8;
      if ( v159 )
      {
        v161 = *((unsigned int *)v159 - 1);
        *(_DWORD *)(v48 + 4) = v161;
        v162 = &v159[v161];
        if ( v159 != v162 )
        {
          v163 = 8 * v161 - 8;
          if ( v163 <= 8 || v47 < (unsigned __int64)(v159 + 2) && (unsigned __int64)v159 < v48 + 24 )
          {
            v172 = v159;
            v173 = v47;
            do
            {
              v174 = *v172;
              *v172++ = 0;
              v173 += 8LL;
              *(_QWORD *)(v173 - 8) = v174;
            }
            while ( v162 != v172 );
          }
          else
          {
            v164 = 0;
            v165 = (v163 >> 3) + 1;
            do
            {
              v166 = _mm_loadu_si128((const __m128i *)&v159[v164 / 2]);
              *(_OWORD *)&v159[v164 / 2] = 0;
              *(__m128i *)&v160[v164 + 2] = v166;
              v164 += 4LL;
            }
            while ( 4 * (v165 >> 1) != v164 );
            if ( (v165 & 1) != 0 )
            {
              v167 = v165 & 0xFFFFFFFFFFFFFFFELL;
              v168 = &v159[v167];
              v169 = *v168;
              *v168 = 0;
              *(_QWORD *)(v47 + 8 * v167) = v169;
            }
          }
        }
        v184 = &v159[v161];
        if ( (_DWORD)v161 )
        {
          do
          {
            while ( 1 )
            {
              v170 = *v159;
              if ( !*v159 )
                break;
              ++v159;
              sub_186B220((void *)(v170 - 8));
              if ( v184 == v159 )
                goto LABEL_221;
            }
            ++v159;
          }
          while ( v159 != v184 );
LABEL_221:
          v159 = (__int64 *)v10[1176];
        }
        sub_186B220(v159 - 1);
        v48 = (unsigned int)v160[1];
        v49 = (_QWORD *)(v47 + 8 * v48);
      }
      else
      {
        *(_DWORD *)(v48 + 4) = 0;
        v49 = (_QWORD *)(v48 + 8);
        LODWORD(v48) = 0;
      }
      v10[1176] = v47;
      *v160 = v190;
    }
  }
  else
  {
    v48 = sub_186B270(0x18u);
    v47 = v48 + 8;
    *(_QWORD *)v48 = 2;
    LODWORD(v48) = 0;
    a1[1176] = v47;
    v49 = (_QWORD *)v47;
  }
  *v49 = 0;
  if ( v17 )
  {
    v176 = *(v17 - 2);
    v188 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(v17 - 1)));
    v50 = (_QWORD *)sub_186B270(4LL * v176 + 8);
    v47 = v10[1176];
    v51 = 4LL * (unsigned int)*(v17 - 1);
    *v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v176), _mm_cvtsi32_si128(v188)).m128i_u64[0];
    *v49 = v50 + 1;
    if ( v51 )
      memcpy(v50 + 1, v17, v51);
    LODWORD(v48) = *(_DWORD *)(v47 - 4);
  }
  *(_DWORD *)(v47 - 4) = v48 + 1;
  v52 = (_QWORD *)sub_180C100(v10 + 1050, 16);
  v53 = (_QWORD *)v10[1182];
  v54 = v52;
  *v52 = off_1C547B8;
  v52[1] = v10 + 1176;
  if ( v53 )
  {
    v55 = *((_DWORD *)v53 - 1);
    if ( v55 == *((_DWORD *)v53 - 2) )
    {
      v153 = (3 * v55 + 1) >> 1;
      v154 = 8 * v153 + 8;
      if ( 8 * v55 + 8 >= v154 || v55 >= v153 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v229, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v229);
        sub_233E40((__int64)v229);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v155 = (unsigned int *)sub_186B300(v53 - 1, v154);
      v156 = v155[1];
      v53 = v155 + 2;
      *v155 = v153;
      v10[1182] = v155 + 2;
      LODWORD(v155) = v156;
      v57 = &v53[v156];
      result = (unsigned int)((_DWORD)v155 + 1);
    }
    else
    {
      v56 = v55;
      result = v55 + 1;
      v57 = &v53[v56];
    }
  }
  else
  {
    v171 = (_QWORD *)sub_186B270(0x18u);
    *v171 = 2;
    result = 1;
    v53 = v171 + 1;
    v10[1182] = v53;
    v57 = v53;
  }
  *v57 = v54;
  *((_DWORD *)v53 - 1) = result;
  if ( !a2 )
    goto LABEL_68;
  v58 = a3;
  v189 = &a3[a2];
  do
  {
    v59 = *((_DWORD *)v10 + 2356);
    v60 = *v58;
    v61 = (_DWORD *)v10[1177];
    v62 = 24LL * (*v58 & (v59 - 1));
    v63 = 24LL * v59;
    v64 = &v61[(unsigned __int64)v62 / 4];
    v65 = (_DWORD *)((char *)v61 + v63);
    if ( v62 != v63 )
    {
      v66 = &v61[(unsigned __int64)v62 / 4];
      do
      {
        v67 = v66[1];
        if ( v67 == 2 )
        {
          if ( v60 == *v66 && v60 == v66[2] )
            goto LABEL_54;
        }
        else if ( !v67 )
        {
          goto LABEL_86;
        }
        v66 += 6;
      }
      while ( v65 != v66 );
    }
    if ( v61 != v64 )
    {
      v78 = (_DWORD *)v10[1177];
      while ( 1 )
      {
        v79 = v78[1];
        if ( v79 != 2 )
          break;
        if ( v60 == *v78 )
        {
          if ( v60 == v78[2] )
            goto LABEL_54;
          v78 += 6;
          if ( v64 == v78 )
            goto LABEL_86;
        }
        else
        {
LABEL_81:
          v78 += 6;
          if ( v64 == v78 )
            goto LABEL_86;
        }
      }
      if ( !v79 )
        goto LABEL_86;
      goto LABEL_81;
    }
LABEL_86:
    v80 = 2 * v59;
    v81 = 4 * (*((_DWORD *)v10 + 2357) + *((_DWORD *)v10 + 2358));
    LODWORD(v229[0]) = *v58;
    v229[1] = 0;
    if ( 3 * v59 >= v81 )
      goto LABEL_87;
    v113 = v80;
    v206 = v60;
    v200 = v80;
    v195 = 24LL * v80;
    v114 = sub_186B270(v195);
    v115 = v200;
    v63 = v195;
    v61 = (_DWORD *)v114;
    v60 = v206;
    if ( v200 )
    {
      v116 = (_QWORD *)v114;
      do
      {
        *v116 = 0;
        v116 += 3;
        *(v116 - 1) = 0;
      }
      while ( v116 != (_QWORD *)(v114 + 24 * v113) );
    }
    v117 = (char *)v10[1177];
    v182 = v200 - 1;
    v118 = *((unsigned int *)v10 + 2356);
    v119 = v117 + 16;
    v120 = &v117[24 * v118];
    v65 = (_DWORD *)(v114 + v195);
    if ( v117 != v120 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v119 - 3) != 2 )
          goto LABEL_142;
        v122 = *((_DWORD *)v119 - 4);
        v123 = 24LL * (v122 & v182);
        v124 = &v61[(unsigned __int64)v123 / 4];
        if ( v195 == v123 )
          break;
        v125 = &v61[(unsigned __int64)v123 / 4];
        while ( v125[1] )
        {
          v125 += 6;
          if ( v65 == v125 )
            goto LABEL_179;
        }
        *v125 = v122;
        v126 = *((_DWORD *)v119 - 2);
        v125[1] = 2;
        v125[2] = v126;
        if ( v119 == (_QWORD *)(v125 + 4) )
          goto LABEL_142;
        v127 = *((__int64 **)v125 + 2);
        if ( v127 )
        {
          v128 = *((unsigned int *)v127 - 1);
          if ( (_DWORD)v128 )
          {
            v218 = v125;
            v129 = v60;
            v201 = &v127[v128];
            v222 = v58;
            v130 = v65;
            v226 = v119;
            v131 = v61;
            v132 = v63;
            v228 = v10;
            v133 = v127;
            do
            {
              while ( 1 )
              {
                v134 = *v133;
                if ( !*v133 )
                  break;
                v213 = v115;
                ++v133;
                v207 = v120;
                sub_186B220((void *)(v134 - 8));
                v120 = v207;
                v115 = v213;
                if ( v201 == v133 )
                  goto LABEL_155;
              }
              ++v133;
            }
            while ( v133 != v201 );
LABEL_155:
            v60 = v129;
            v125 = v218;
            v63 = v132;
            v65 = v130;
            v61 = v131;
            v58 = v222;
            v119 = v226;
            v10 = v228;
            v127 = *((__int64 **)v218 + 2);
          }
          v223 = v115;
          v219 = v120;
          v214 = v65;
          v208 = v63;
          v202 = v60;
          sub_186B220(v127 - 1);
          v115 = v223;
          v120 = v219;
          v65 = v214;
          v63 = v208;
          v60 = v202;
        }
        *((_QWORD *)v125 + 2) = 0;
        v135 = *v119;
        v121 = v119 + 3;
        v136 = (char *)(v119 + 1);
        *((_QWORD *)v125 + 2) = v135;
        *((_QWORD *)v136 - 1) = 0;
        if ( v120 == v136 )
        {
LABEL_158:
          v118 = *((unsigned int *)v10 + 2356);
          v120 = (char *)v10[1177];
          goto LABEL_159;
        }
LABEL_143:
        v119 = v121;
      }
LABEL_179:
      if ( v61 == v124 )
      {
LABEL_227:
        sub_1872CE0("");
        sub_1873130(114, 213);
      }
      v144 = v61;
      while ( v144[1] )
      {
        v144 += 6;
        if ( v124 == v144 )
          goto LABEL_227;
      }
      *v144 = v122;
      v145 = *((_DWORD *)v119 - 2);
      v144[1] = 2;
      v144[2] = v145;
      if ( v144 + 4 != (_DWORD *)v119 )
      {
        v225 = v115;
        v221 = v120;
        v217 = v65;
        v211 = v63;
        v205 = v60;
        sub_693490((_QWORD **)v144 + 2);
        v60 = v205;
        v63 = v211;
        *((_QWORD *)v144 + 2) = 0;
        v65 = v217;
        v120 = v221;
        v115 = v225;
        *((_QWORD *)v144 + 2) = *v119;
        *v119 = 0;
      }
LABEL_142:
      v121 = v119 + 3;
      if ( v120 == (char *)(v119 + 1) )
        goto LABEL_158;
      goto LABEL_143;
    }
LABEL_159:
    if ( v120 )
    {
      if ( (_DWORD)v118 )
      {
        v196 = v17;
        v137 = v120;
        v203 = v60;
        v138 = &v120[24 * v118];
        v209 = v63;
        v215 = v65;
        v220 = v120;
        v224 = v10;
        v227 = v115;
        do
        {
          v139 = *((_QWORD **)v137 + 2);
          if ( v139 )
          {
            v140 = *((unsigned int *)v139 - 1);
            if ( (_DWORD)v140 )
            {
              v141 = &v139[v140];
              do
              {
                while ( *v139 )
                {
                  v142 = (void *)(*v139++ - 8LL);
                  sub_186B220(v142);
                  if ( v139 == v141 )
                    goto LABEL_167;
                }
                ++v139;
              }
              while ( v139 != v141 );
LABEL_167:
              v139 = *((_QWORD **)v137 + 2);
            }
            sub_186B220(v139 - 1);
          }
          v137 += 24;
        }
        while ( v137 != v138 );
        v17 = v196;
        v60 = v203;
        v63 = v209;
        v65 = v215;
        v120 = v220;
        v10 = v224;
        v115 = v227;
      }
      v216 = v115;
      v210 = v65;
      v204 = v63;
      v197 = v60;
      sub_186B220(v120);
      v60 = v197;
      v63 = v204;
      v65 = v210;
      v115 = v216;
    }
    v10[1177] = v61;
    *((_DWORD *)v10 + 2356) = v115;
    *((_DWORD *)v10 + 2358) = 0;
    v62 = 24LL * (v60 & v182);
    v64 = &v61[(unsigned __int64)v62 / 4];
LABEL_87:
    if ( v62 == v63 )
    {
      v83 = nullptr;
    }
    else
    {
      v82 = v64;
      v83 = nullptr;
      do
      {
        v84 = v82[1];
        if ( v84 == 2 )
        {
          if ( v60 == *v82 && v60 == v82[2] )
          {
LABEL_95:
            v82[2] = v60;
            v178 = v60;
            sub_693490((_QWORD **)v82 + 2);
            v61 = (_DWORD *)v10[1177];
            v60 = v178;
            *((_QWORD *)v82 + 2) = 0;
            v82[1] = 2;
            goto LABEL_136;
          }
        }
        else
        {
          if ( !v84 )
          {
            if ( v83 )
              --*((_DWORD *)v10 + 2358);
            else
              v83 = v82;
            v107 = *((__int64 **)v83 + 2);
            v83[2] = v60;
            if ( !v107 )
              goto LABEL_135;
            v108 = *((unsigned int *)v107 - 1);
            if ( !(_DWORD)v108 )
              goto LABEL_134;
            v180 = v10;
            v109 = &v107[v108];
            v110 = v60;
            while ( 1 )
            {
              v111 = *v107;
              if ( *v107 )
              {
                ++v107;
                sub_186B220((void *)(v111 - 8));
                if ( v109 == v107 )
                  goto LABEL_133;
              }
              else if ( ++v107 == v109 )
              {
LABEL_133:
                v60 = v110;
                v107 = *((__int64 **)v83 + 2);
                v10 = v180;
                goto LABEL_134;
              }
            }
          }
          v83 = v82;
        }
        v82 += 6;
      }
      while ( v82 != v65 );
    }
    if ( v61 == v64 )
    {
LABEL_175:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v82 = v61;
    while ( 1 )
    {
      v106 = v82[1];
      if ( v106 != 2 )
        break;
      if ( v60 == *v82 && v60 == v82[2] )
        goto LABEL_95;
LABEL_121:
      v82 += 6;
      if ( v82 == v64 )
        goto LABEL_175;
    }
    if ( v106 )
    {
      v83 = v82;
      goto LABEL_121;
    }
    if ( v83 )
      --*((_DWORD *)v10 + 2358);
    else
      v83 = v82;
    v107 = *((__int64 **)v83 + 2);
    v83[2] = v60;
    if ( v107 )
    {
      v146 = *((unsigned int *)v107 - 1);
      if ( (_DWORD)v146 )
      {
        v183 = v10;
        v147 = &v107[v146];
        v148 = v60;
        do
        {
          while ( 1 )
          {
            v149 = *v107;
            if ( !*v107 )
              break;
            ++v107;
            sub_186B220((void *)(v149 - 8));
            if ( v107 == v147 )
              goto LABEL_192;
          }
          ++v107;
        }
        while ( v107 != v147 );
LABEL_192:
        v60 = v148;
        v107 = *((__int64 **)v83 + 2);
        v10 = v183;
      }
LABEL_134:
      v181 = v60;
      sub_186B220(v107 - 1);
      v61 = (_DWORD *)v10[1177];
      v60 = v181;
    }
LABEL_135:
    *((_QWORD *)v83 + 2) = 0;
    v83[1] = 2;
    *v83 = v60;
    ++*((_DWORD *)v10 + 2357);
LABEL_136:
    v112 = *((unsigned int *)v10 + 2356);
    v63 = 24 * v112;
    v65 = &v61[6 * v112];
    v62 = 24LL * (v60 & ((_DWORD)v112 - 1));
    v64 = &v61[(unsigned __int64)v62 / 4];
LABEL_54:
    if ( v62 == v63 )
    {
LABEL_70:
      while ( v61 != v64 )
      {
        v77 = v61[1];
        if ( v77 == 2 )
        {
          if ( v60 == *v61 && v60 == v61[2] )
          {
            v68 = v61;
            goto LABEL_61;
          }
        }
        else if ( !v77 )
        {
          break;
        }
        v61 += 6;
      }
LABEL_240:
      BUG();
    }
    v68 = v64;
    while ( 2 )
    {
      v69 = v68[1];
      if ( v69 != 2 )
      {
        if ( !v69 )
          goto LABEL_240;
LABEL_57:
        v68 += 6;
        if ( v68 == v65 )
          goto LABEL_70;
        continue;
      }
      break;
    }
    if ( v60 != *v68 || v60 != v68[2] )
      goto LABEL_57;
LABEL_61:
    v70 = *((_QWORD *)v68 + 2);
    if ( v70 )
    {
      LODWORD(v71) = *(_DWORD *)(v70 - 4);
      v72 = (_QWORD *)(v70 + 8LL * (unsigned int)v71);
      if ( (_DWORD)v71 == *(_DWORD *)(v70 - 8) )
      {
        v85 = (unsigned int)(3 * v71 + 1) >> 1;
        v86 = 8 * v85 + 8;
        v179 = v85;
        if ( 8 * (int)v71 + 8 >= (unsigned int)v86 || (unsigned int)v71 >= v85 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v229, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v229);
          sub_233E40((__int64)v229);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = sub_186B270(v86);
        v87 = *((_QWORD *)v68 + 2);
        v88 = (_DWORD *)v71;
        v70 = v71 + 8;
        if ( v87 )
        {
          v89 = *(unsigned int *)(v87 - 4);
          *(_DWORD *)(v71 + 4) = v89;
          v90 = 8 * v89;
          v91 = v89;
          v92 = (__int64 *)(v87 + 8 * v89);
          if ( v92 != (__int64 *)v87 )
          {
            v93 = v90 - 8;
            if ( (unsigned __int64)(v90 - 8) <= 8 || v70 < v87 + 16 && v87 < (unsigned __int64)(v88 + 6) )
            {
              v150 = (__int64 *)v87;
              v151 = v70;
              do
              {
                v152 = *v150;
                *v150++ = 0;
                v151 += 8LL;
                *(_QWORD *)(v151 - 8) = v152;
              }
              while ( v92 != v150 );
            }
            else
            {
              v94 = 0;
              v95 = (v93 >> 3) + 1;
              do
              {
                v96 = _mm_loadu_si128((const __m128i *)(v87 + v94 * 4));
                *(_OWORD *)(v87 + v94 * 4) = 0;
                *(__m128i *)&v88[v94 + 2] = v96;
                v94 += 4;
              }
              while ( 4 * (v95 >> 1) != v94 );
              if ( (v95 & 1) != 0 )
              {
                v97 = v95 & 0xFFFFFFFFFFFFFFFELL;
                v98 = (__int64 *)(v87 + 8 * v97);
                v99 = *v98;
                *v98 = 0;
                *(_QWORD *)(v70 + 8 * v97) = v99;
              }
            }
          }
          v100 = v87 + 8 * v89;
          if ( v91 )
          {
            v194 = v70;
            v101 = v88;
            v102 = v17;
            v103 = (_QWORD *)v100;
            v199 = v10;
            v104 = (_QWORD *)v87;
            do
            {
              while ( *v104 )
              {
                v105 = (void *)(*v104++ - 8LL);
                sub_186B220(v105);
                if ( v103 == v104 )
                  goto LABEL_111;
              }
              ++v104;
            }
            while ( v104 != v103 );
LABEL_111:
            v17 = v102;
            v10 = v199;
            v88 = v101;
            v87 = *((_QWORD *)v68 + 2);
            v70 = v194;
          }
          sub_186B220((void *)(v87 - 8));
          v71 = (unsigned int)v88[1];
          v72 = (_QWORD *)(v70 + 8 * v71);
        }
        else
        {
          *(_DWORD *)(v71 + 4) = 0;
          v72 = (_QWORD *)(v71 + 8);
          LODWORD(v71) = 0;
        }
        *((_QWORD *)v68 + 2) = v70;
        *v88 = v179;
      }
    }
    else
    {
      v71 = sub_186B270(0x18u);
      v70 = v71 + 8;
      *(_QWORD *)v71 = 2;
      LODWORD(v71) = 0;
      *((_QWORD *)v68 + 2) = v70;
      v72 = (_QWORD *)v70;
    }
    *v72 = 0;
    v177 = v72;
    if ( v17 )
    {
      v73 = *(v17 - 1);
      v193 = *(v17 - 2);
      v74 = (_QWORD *)sub_186B270(4LL * v193 + 8);
      v75 = _mm_cvtsi32_si128(v73);
      v70 = *((_QWORD *)v68 + 2);
      *v74 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v193), v75).m128i_u64[0];
      *v177 = v74 + 1;
      v76 = 4LL * (unsigned int)*(v17 - 1);
      if ( v76 )
        memcpy(v74 + 1, v17, v76);
      LODWORD(v71) = *(_DWORD *)(v70 - 4);
    }
    result = (unsigned int)(v71 + 1);
    ++v58;
    *(_DWORD *)(v70 - 4) = result;
  }
  while ( v189 != v58 );
LABEL_68:
  if ( v17 )
    return sub_186B220(v17 - 2);
  return result;
}

