__int64 __fastcall sub_5E86D0(__int64 a1, __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // rbx
  char **v7; // rbx
  char **v8; // rbx
  char **v9; // rbx
  char **v10; // rbx
  char **v11; // r12
  char **v12; // rbx
  char **exception; // rbx
  char **v14; // rbx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  _QWORD *v18; // rax
  unsigned __int64 *v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 *v22; // rbp
  int i; // eax
  unsigned int v24; // eax
  __int64 v25; // r13
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r12
  _DWORD *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // edx
  unsigned int *v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r15d
  unsigned int v38; // edx
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbx
  _DWORD *v42; // rax
  int v43; // esi
  unsigned int v44; // r15d
  const __m128i *v45; // r14
  __int64 v46; // r9
  __m128i *v47; // rdi
  __m128i *j; // rax
  __int64 v49; // rdx
  unsigned int v50; // r12d
  __m128i *v51; // rax
  __m128i *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // r9d
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rsi
  unsigned __int64 v61; // r13
  unsigned int v62; // r14d
  __int64 *v63; // r15
  __int64 v64; // rax
  __int64 v65; // rsi
  bool v66; // zf
  unsigned __int64 v67; // r15
  __int64 v68; // r12
  unsigned int v69; // r13d
  __int64 v70; // rcx
  int v71; // eax
  __int64 *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  size_t v77; // rsi
  unsigned int *v78; // rax
  int v79; // edx
  unsigned int v80; // eax
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // rax
  __int64 *v85; // r14
  __int64 v86; // rdi
  __int64 *v87; // r15
  _QWORD *v88; // rbx
  __int64 v89; // rsi
  int v90; // eax
  _QWORD *v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // r12
  unsigned int v96; // eax
  unsigned int v97; // r8d
  size_t v98; // rsi
  unsigned int *v99; // rax
  __int64 v100; // rdi
  _QWORD *v101; // rax
  __int64 v102; // r12
  int v103; // r14d
  int v104; // eax
  int v105; // r9d
  __int64 *v106; // r14
  unsigned __int64 v107; // r12
  __int64 v108; // rsi
  __int64 *v109; // rbx
  unsigned __int64 v110; // r12
  __int64 v111; // rsi
  __int64 result; // rax
  __int64 *v113; // rbx
  unsigned __int64 v114; // r12
  __int64 v115; // rsi
  _QWORD *v116; // rax
  _QWORD *v117; // rbx
  int v118; // edi
  __int64 v119; // rsi
  __m128i *v120; // r9
  __m128i *m; // rax
  __int64 v122; // rdx
  unsigned __int32 v123; // ebx
  unsigned int v124; // r15d
  __m128i *v125; // rax
  __m128i *v126; // rdx
  __int64 v127; // rcx
  unsigned int *v128; // rsi
  unsigned __int32 v129; // eax
  unsigned int v130; // r14d
  __int64 v131; // rax
  unsigned int *v132; // rax
  __int64 v133; // rax
  unsigned int *v134; // rax
  unsigned int v135; // edx
  unsigned int v136; // eax
  unsigned int *v137; // rax
  unsigned int v138; // ecx
  unsigned int v139; // ecx
  unsigned __int32 v140; // edx
  unsigned __int32 v141; // ecx
  unsigned int v142; // r12d
  unsigned int v143; // eax
  unsigned int *v144; // rax
  unsigned int *v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rax
  unsigned int *v148; // rax
  __int64 v149; // rax
  unsigned int *v150; // rax
  unsigned int v151; // edx
  size_t v152; // rsi
  unsigned int *v153; // rax
  unsigned int v154; // r12d
  unsigned int v155; // edx
  unsigned int *v156; // rax
  unsigned int v157; // r12d
  unsigned int v158; // edx
  unsigned int *v159; // rax
  unsigned int v160; // edx
  size_t v161; // rsi
  unsigned int *v162; // rax
  _QWORD *v163; // rax
  unsigned int *v164; // rax
  unsigned int v165; // r15d
  __int64 v166; // rdx
  __int64 v167; // rax
  unsigned int *v168; // r8
  unsigned int v169; // edi
  unsigned int v170; // esi
  unsigned int *v171; // rdx
  int *v172; // rax
  unsigned int v173; // esi
  __int64 v174; // rdx
  __int64 v175; // rdx
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  _QWORD *v178; // rax
  _QWORD *v179; // rax
  __int64 v180; // rax
  _QWORD *v181; // rsi
  const __m128i *k; // r9
  __int64 v183; // rdx
  __m128i *v184; // rsi
  __m128i *v185; // rdx
  __int64 v186; // rcx
  unsigned int v187; // eax
  __int64 v188; // rdx
  int v189; // eax
  __int64 *v190; // rdx
  __int64 v191; // rax
  _QWORD *v192; // rsi
  const __m128i *n; // r9
  __int64 v194; // rdx
  __m128i *v195; // rsi
  __m128i *v196; // rdx
  unsigned int v197; // r14d
  unsigned int v198; // edx
  unsigned int *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  unsigned int v202; // eax
  __int64 v203; // rdx
  int v204; // eax
  __int64 *v205; // rdx
  unsigned int v206; // edx
  size_t v207; // rsi
  unsigned int *v208; // rax
  _DWORD *v209; // rdi
  _QWORD *v210; // rax
  _QWORD *v211; // rax
  void *v212; // [rsp+0h] [rbp-188h]
  unsigned int v214; // [rsp+10h] [rbp-178h]
  int v215[2]; // [rsp+10h] [rbp-178h]
  __int64 v216; // [rsp+10h] [rbp-178h]
  unsigned int *v217; // [rsp+18h] [rbp-170h]
  __int64 v218; // [rsp+20h] [rbp-168h]
  unsigned int ii; // [rsp+20h] [rbp-168h]
  __int64 v220; // [rsp+20h] [rbp-168h]
  unsigned int v221; // [rsp+20h] [rbp-168h]
  __int64 v222; // [rsp+20h] [rbp-168h]
  unsigned int v223; // [rsp+20h] [rbp-168h]
  _QWORD *v224; // [rsp+28h] [rbp-160h]
  size_t v225; // [rsp+30h] [rbp-158h]
  unsigned int v226; // [rsp+30h] [rbp-158h]
  __int64 v227; // [rsp+30h] [rbp-158h]
  unsigned int v228; // [rsp+30h] [rbp-158h]
  unsigned int v229; // [rsp+30h] [rbp-158h]
  unsigned int v230; // [rsp+38h] [rbp-150h]
  void *v231; // [rsp+38h] [rbp-150h]
  unsigned int v232; // [rsp+38h] [rbp-150h]
  unsigned int v233; // [rsp+38h] [rbp-150h]
  unsigned int v234; // [rsp+38h] [rbp-150h]
  unsigned int *v235; // [rsp+40h] [rbp-148h]
  const __m128i *v236; // [rsp+48h] [rbp-140h]
  const __m128i *v237; // [rsp+48h] [rbp-140h]
  int v238; // [rsp+50h] [rbp-138h]
  __int64 v239; // [rsp+50h] [rbp-138h]
  __int64 v240; // [rsp+50h] [rbp-138h]
  __int64 v241; // [rsp+58h] [rbp-130h]
  unsigned int *v242; // [rsp+68h] [rbp-120h]
  __m128i *ptr; // [rsp+70h] [rbp-118h]
  int v244; // [rsp+78h] [rbp-110h]
  int v245; // [rsp+84h] [rbp-104h]
  int v246; // [rsp+88h] [rbp-100h]
  unsigned int v247; // [rsp+8Ch] [rbp-FCh]
  __int64 v248; // [rsp+90h] [rbp-F8h]
  int v250[2]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v251; // [rsp+B0h] [rbp-D8h]
  int v252[4]; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v253; // [rsp+D0h] [rbp-B8h]
  __int64 v254; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v255; // [rsp+E8h] [rbp-A0h]
  __int64 v256[4]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v257[7]; // [rsp+110h] [rbp-78h] BYREF

  v244 = a2;
  *(_DWORD *)(a1 + 80) = sub_648530(*(_QWORD *)(a1 + 72) + 16LL, a2) + 1;
  v241 = *(_QWORD *)(a1 + 24);
  v251 = v241;
  v15 = *(_DWORD *)(a2 + 68);
  v214 = *(_DWORD *)(a2 + 56);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 80);
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 > 7 )
      ++*(_DWORD *)(v17 + 8);
    v18 = (_QWORD *)sub_186B270(0x18u);
    *v18 = 2;
    v19 = v18 + 1;
    v20 = a2 + 8LL * v15;
    v21 = a2;
    v22 = v18 + 1;
    for ( i = 1; ; i = (_DWORD)v39 + 1 )
    {
      v21 += 8;
      *v19 = v17;
      *((_DWORD *)v22 - 1) = i;
      if ( v20 == v21 )
        break;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v21 + 80) > 7u )
          ++*(_DWORD *)(v17 + 8);
        v24 = *((_DWORD *)v22 - 1);
        if ( v24 == *((_DWORD *)v22 - 2) )
          break;
        v21 += 8;
        v22[v24] = v17;
        *((_DWORD *)v22 - 1) = v24 + 1;
        if ( v20 == v21 )
          goto LABEL_10;
      }
      v37 = (3 * v24 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v24 + 8 >= v38 || v24 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v257, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v257);
        sub_233E40((__int64)v257);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v22 - 1, v38);
      v40 = v39[1];
      v22 = (__int64 *)(v39 + 2);
      *v39 = v37;
      LODWORD(v39) = v40;
      v19 = (unsigned __int64 *)&v22[v40];
    }
LABEL_10:
    v248 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v22 = nullptr;
    v248 = v241;
  }
  ptr = (__m128i *)sub_186B270(0x80u);
  ptr->m128i_i64[0] = 0;
  ptr->m128i_i32[2] = 0;
  ptr[1].m128i_i64[0] = 0;
  ptr[1].m128i_i32[2] = 0;
  ptr[2].m128i_i64[0] = 0;
  ptr[2].m128i_i32[2] = 0;
  ptr[3].m128i_i64[0] = 0;
  ptr[3].m128i_i32[2] = 0;
  ptr[4].m128i_i64[0] = 0;
  ptr[4].m128i_i32[2] = 0;
  ptr[5].m128i_i64[0] = 0;
  ptr[5].m128i_i32[2] = 0;
  ptr[6].m128i_i64[0] = 0;
  ptr[6].m128i_i32[2] = 0;
  ptr[7].m128i_i64[0] = 0;
  ptr[7].m128i_i32[2] = 0;
  v257[6] = v248;
  if ( v15 >= v214 )
  {
    v235 = nullptr;
    v242 = nullptr;
    v217 = nullptr;
    goto LABEL_161;
  }
  v224 = nullptr;
  v245 = 0;
  v235 = nullptr;
  v25 = a2 + 8LL * v15;
  v246 = 0;
  *(_QWORD *)v215 = a2 + 8 * (v15 + (unsigned __int64)(v214 - 1 - v15)) + 8;
  v247 = 8;
  v242 = nullptr;
  v217 = nullptr;
  do
  {
    v29 = *(_QWORD *)(v25 + 80);
    v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_WORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 4)
      || (v31 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL)) == nullptr
      || *v31
      || v31[1] != 2
      || *(_DWORD *)(v30 + 24) != 2
      || (v41 = *(_QWORD *)(v30 + 32),
          v218 = *(_QWORD *)(v30 + 40),
          (v42 = *(_DWORD **)(sub_15D1F10(v41) + 24)) == nullptr)
      || *(_DWORD *)(a1 + 40) != *v42
      || v42[1] )
    {
      if ( v29 > 7 )
        ++*(_DWORD *)(v30 + 8);
      if ( v22 )
      {
        v32 = *((_DWORD *)v22 - 1);
        if ( v32 == *((_DWORD *)v22 - 2) )
        {
          v33 = (3 * v32 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v32 + 8 >= v34 || v32 >= v33 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v256, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, v256);
            sub_233E40((__int64)v256);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v22 - 1, v34);
          v36 = v35[1];
          v22 = (__int64 *)(v35 + 2);
          *v35 = v33;
          LODWORD(v35) = v36;
          v28 = (unsigned __int64 *)&v22[v36];
          v27 = (_DWORD)v35 + 1;
        }
        else
        {
          v26 = v32;
          v27 = v32 + 1;
          v28 = (unsigned __int64 *)&v22[v26];
        }
      }
      else
      {
        v116 = (_QWORD *)sub_186B270(0x18u);
        v22 = v116 + 1;
        *v116 = 2;
        v27 = 1;
        v28 = (unsigned __int64 *)v22;
      }
      *v28 = v30;
      *((_DWORD *)v22 - 1) = v27;
      goto LABEL_15;
    }
    v43 = *(_DWORD *)(v41 + 12);
    v44 = v247 - 1;
    v225 = 16LL * v247;
    v45 = &ptr[v225 / 0x10];
    v46 = 16LL * ((v247 - 1) & v43);
    v47 = &ptr[(unsigned __int64)v46 / 0x10];
    if ( v46 != v225 )
    {
      for ( j = &ptr[(unsigned __int64)v46 / 0x10]; v45 != j; ++j )
      {
        v49 = j->m128i_i64[0];
        if ( j->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v49 + 12) == v43 && v41 == v49 )
          {
LABEL_163:
            v50 = j->m128i_u32[2];
            goto LABEL_164;
          }
        }
        else if ( !v49 )
        {
          goto LABEL_41;
        }
      }
    }
    for ( j = ptr; v47 != j; ++j )
    {
      v175 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v175 + 12) == v43 && v41 == v175 )
          goto LABEL_163;
      }
      else if ( !v175 )
      {
        break;
      }
    }
LABEL_41:
    if ( v224 )
      v50 = *((_DWORD *)v224 - 1);
    else
      v50 = 0;
    v230 = 2 * v247;
    if ( 3 * v247 < 4 * (v246 + v245) )
    {
      v225 = 16LL * v230;
      v180 = sub_186B270(v225);
      v181 = (_QWORD *)v180;
      if ( v230 )
      {
        do
        {
          *v181 = 0;
          v181 += 2;
          *((_DWORD *)v181 - 2) = 0;
        }
        while ( v181 != (_QWORD *)(v180 + 16LL * v230) );
      }
      v44 = v230 - 1;
      v236 = (const __m128i *)(v180 + v225);
      for ( k = ptr; v45 != k; ++k )
      {
        if ( k->m128i_i64[0] > 1uLL )
        {
          v183 = 16LL * (*(_DWORD *)(k->m128i_i64[0] + 12) & v44);
          v184 = (__m128i *)(v180 + v183);
          if ( v225 == v183 )
          {
LABEL_305:
            if ( (__m128i *)v180 == v184 )
            {
LABEL_346:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v185 = (__m128i *)v180;
            while ( v185->m128i_i64[0] )
            {
              if ( v184 == ++v185 )
                goto LABEL_346;
            }
          }
          else
          {
            v185 = (__m128i *)(v180 + v183);
            while ( v185->m128i_i64[0] )
            {
              if ( v236 == ++v185 )
                goto LABEL_305;
            }
          }
          *v185 = _mm_loadu_si128(k);
        }
      }
      if ( ptr )
      {
        v239 = v180;
        sub_186B220(ptr);
        v180 = v239;
      }
      v43 = *(_DWORD *)(v41 + 12);
      ptr = (__m128i *)v180;
      v245 = 0;
      v45 = v236;
      v247 *= 2;
      v46 = 16LL * (v43 & v44);
      v47 = (__m128i *)(v180 + v46);
    }
    if ( v46 == v225 )
    {
      v52 = nullptr;
LABEL_325:
      v51 = ptr;
      if ( ptr == v47 )
      {
LABEL_333:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v201 = v51->m128i_i64[0];
        if ( v51->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v201 + 12) == v43 && v41 == v201 )
            goto LABEL_349;
        }
        else
        {
          if ( !v201 )
            goto LABEL_338;
          v52 = v51;
        }
        if ( ++v51 == v47 )
          goto LABEL_333;
      }
    }
    v51 = v47;
    v52 = nullptr;
    while ( 1 )
    {
      v53 = v51->m128i_i64[0];
      if ( v51->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v53 + 12) == v43 && v41 == v53 )
      {
LABEL_349:
        v51->m128i_i64[0] = v41;
        v51->m128i_i32[2] = v50;
        goto LABEL_334;
      }
LABEL_48:
      if ( ++v51 == v45 )
        goto LABEL_325;
    }
    if ( v53 )
    {
      v52 = v51;
      goto LABEL_48;
    }
LABEL_338:
    if ( v52 )
    {
      --v245;
      v51 = v52;
    }
    v51->m128i_i64[0] = v41;
    v51->m128i_i32[2] = v50;
    ++v246;
LABEL_334:
    ++*(_DWORD *)(v41 + 8);
    if ( v224 )
    {
      v202 = *((_DWORD *)v224 - 1);
      if ( v202 == *((_DWORD *)v224 - 2) )
      {
        v206 = (3 * v202 + 1) >> 1;
        v207 = 8 * v206 + 8;
        if ( 8 * v202 + 8 >= (unsigned int)v207 || v202 >= v206 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v256, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v256);
          sub_233E40((__int64)v256);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v234 = (3 * v202 + 1) >> 1;
        v208 = (unsigned int *)sub_186B300(v224 - 1, v207);
        v209 = v208 + 2;
        v224 = v208 + 2;
        *v208 = v234;
        LODWORD(v208) = v208[1];
        v205 = (__int64 *)&v209[2 * (unsigned int)v208];
        v204 = (_DWORD)v208 + 1;
      }
      else
      {
        v203 = v202;
        v204 = v202 + 1;
        v205 = &v224[v203];
      }
    }
    else
    {
      v210 = (_QWORD *)sub_186B270(0x18u);
      *v210 = 2;
      v224 = v210 + 1;
      v205 = v210 + 1;
      v204 = 1;
    }
    *v205 = v41;
    *((_DWORD *)v224 - 1) = v204;
LABEL_164:
    v118 = *(_DWORD *)(v218 + 12);
    v119 = 16LL * (v118 & v44);
    v120 = &ptr[(unsigned __int64)v119 / 0x10];
    if ( v119 != v225 )
    {
      for ( m = &ptr[(unsigned __int64)v119 / 0x10]; m != v45; ++m )
      {
        v122 = m->m128i_i64[0];
        if ( m->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v122 + 12) == v118 && v218 == v122 )
          {
LABEL_182:
            v123 = m->m128i_u32[2];
            goto LABEL_183;
          }
        }
        else if ( !v122 )
        {
          goto LABEL_171;
        }
      }
    }
    for ( m = ptr; v120 != m; ++m )
    {
      v174 = m->m128i_i64[0];
      if ( m->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v174 + 12) == v118 && v218 == v174 )
          goto LABEL_182;
      }
      else if ( !v174 )
      {
        break;
      }
    }
LABEL_171:
    if ( v224 )
      v123 = *((_DWORD *)v224 - 1);
    else
      v123 = 0;
    v124 = 2 * v247;
    if ( 3 * v247 < 4 * (v245 + v246) )
    {
      v225 = 16LL * v124;
      v191 = sub_186B270(v225);
      v192 = (_QWORD *)v191;
      if ( v124 )
      {
        do
        {
          *v192 = 0;
          v192 += 2;
          *((_DWORD *)v192 - 2) = 0;
        }
        while ( v192 != (_QWORD *)(v191 + 16LL * v124) );
      }
      v233 = v124 - 1;
      v237 = (const __m128i *)(v191 + v225);
      for ( n = ptr; n != v45; ++n )
      {
        if ( n->m128i_i64[0] > 1uLL )
        {
          v194 = 16LL * (*(_DWORD *)(n->m128i_i64[0] + 12) & v233);
          v195 = (__m128i *)(v191 + v194);
          if ( v225 == v194 )
          {
LABEL_313:
            if ( (__m128i *)v191 == v195 )
            {
LABEL_347:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v196 = (__m128i *)v191;
            while ( v196->m128i_i64[0] )
            {
              if ( v195 == ++v196 )
                goto LABEL_347;
            }
          }
          else
          {
            v196 = (__m128i *)(v191 + v194);
            while ( v196->m128i_i64[0] )
            {
              if ( v237 == ++v196 )
                goto LABEL_313;
            }
          }
          *v196 = _mm_loadu_si128(n);
        }
      }
      if ( ptr )
      {
        v240 = v191;
        sub_186B220(ptr);
        v191 = v240;
      }
      ptr = (__m128i *)v191;
      v247 *= 2;
      v45 = v237;
      v245 = 0;
      v118 = *(_DWORD *)(v218 + 12);
      v119 = 16LL * (v118 & v233);
      v120 = (__m128i *)(v191 + v119);
    }
    if ( v119 == v225 )
    {
      v126 = nullptr;
LABEL_278:
      v125 = ptr;
      if ( ptr == v120 )
      {
LABEL_286:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v186 = v125->m128i_i64[0];
        if ( v125->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v186 + 12) == v118 && v218 == v186 )
            goto LABEL_350;
        }
        else
        {
          if ( !v186 )
            goto LABEL_291;
          v126 = v125;
        }
        if ( ++v125 == v120 )
          goto LABEL_286;
      }
    }
    v125 = v120;
    v126 = nullptr;
    while ( 2 )
    {
      v127 = v125->m128i_i64[0];
      if ( v125->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v127 + 12) == v118 && v218 == v127 )
        {
LABEL_350:
          v125->m128i_i32[2] = v123;
          v125->m128i_i64[0] = v218;
          goto LABEL_287;
        }
        goto LABEL_178;
      }
      if ( v127 )
      {
        v126 = v125;
LABEL_178:
        if ( ++v125 == v45 )
          goto LABEL_278;
        continue;
      }
      break;
    }
LABEL_291:
    if ( v126 )
    {
      --v245;
      v125 = v126;
    }
    v125->m128i_i32[2] = v123;
    v125->m128i_i64[0] = v218;
    ++v246;
LABEL_287:
    ++*(_DWORD *)(v218 + 8);
    if ( v224 )
    {
      v187 = *((_DWORD *)v224 - 1);
      if ( v187 == *((_DWORD *)v224 - 2) )
      {
        v197 = (3 * v187 + 1) >> 1;
        v198 = 8 * v197 + 8;
        if ( 8 * v187 + 8 >= v198 || v187 >= v197 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v256, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v256);
          sub_233E40((__int64)v256);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v199 = (unsigned int *)sub_186B300(v224 - 1, v198);
        v200 = v199[1];
        *v199 = v197;
        v224 = v199 + 2;
        LODWORD(v199) = v200;
        v190 = &v224[v200];
        v189 = (_DWORD)v199 + 1;
      }
      else
      {
        v188 = v187;
        v189 = v187 + 1;
        v190 = &v224[v188];
      }
    }
    else
    {
      v211 = (_QWORD *)sub_186B270(0x18u);
      *v211 = 2;
      v224 = v211 + 1;
      v190 = v211 + 1;
      v189 = 1;
    }
    *v190 = v218;
    *((_DWORD *)v224 - 1) = v189;
LABEL_183:
    v128 = v217;
    if ( !v217 )
      goto LABEL_186;
    v129 = *(v217 - 1);
    if ( v50 < v129 )
    {
      do
      {
        v138 = v50;
        v50 = v217[v50];
      }
      while ( v138 != v50 );
      if ( v123 < v129 )
      {
        v128 = v217;
        goto LABEL_213;
      }
      if ( v50 < v129 )
      {
        v223 = v123;
        goto LABEL_207;
      }
LABEL_186:
      v223 = v123;
      v130 = v50;
      goto LABEL_187;
    }
    if ( v123 >= v129 )
      goto LABEL_186;
    do
    {
LABEL_213:
      v141 = v123;
      v123 = v128[v123];
    }
    while ( v141 != v123 );
    v223 = v123;
    v130 = v50;
    if ( v50 < v129 )
    {
LABEL_207:
      v130 = v50;
      do
      {
        v139 = v130;
        v130 = v217[v130];
      }
      while ( v139 != v130 );
    }
    if ( v123 < v129 )
    {
      do
      {
        v140 = v123;
        v123 = v217[v123];
      }
      while ( v140 != v123 );
    }
LABEL_187:
    if ( v123 != v130 )
    {
      if ( !v217 )
      {
        v163 = (_QWORD *)sub_186B270(0x10u);
        *v163 = 2;
        v164 = (unsigned int *)(v163 + 1);
        v165 = 0;
        v217 = v164;
        goto LABEL_191;
      }
      while ( 1 )
      {
        v165 = *(v217 - 1);
        if ( v50 < v165 )
          break;
        if ( v165 == *(v217 - 2) )
        {
          v135 = (3 * v165 + 1) >> 1;
          v136 = 4 * v135 + 8;
          if ( 4 * v165 + 8 >= v136 || v165 >= v135 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v256, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v256);
            sub_233E40((__int64)v256);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v137 = (unsigned int *)sub_186B300(v217 - 2, v136);
          v217 = v137 + 2;
          *v137 = (3 * v165 + 1) >> 1;
          v164 = &v137[v137[1] + 2];
        }
        else
        {
          v164 = &v217[v165];
        }
LABEL_191:
        *v164 = v165;
        ++*(v217 - 1);
        if ( v242 )
        {
          v131 = *(v242 - 1);
          if ( (_DWORD)v131 == *(v242 - 2) )
          {
            v151 = (unsigned int)(3 * v131 + 1) >> 1;
            v152 = 4 * v151 + 8;
            if ( 4 * (int)v131 + 8 >= (unsigned int)v152 || (unsigned int)v131 >= v151 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v256, "Overflow encountered when expanding vector");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v256);
              sub_233E40((__int64)v256);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v228 = (unsigned int)(3 * v131 + 1) >> 1;
            v153 = (unsigned int *)sub_186B300(v242 - 2, v152);
            v242 = v153 + 2;
            *v153 = v228;
            v132 = &v153[v153[1] + 2];
          }
          else
          {
            v132 = &v242[v131];
          }
        }
        else
        {
          v177 = (_QWORD *)sub_186B270(0x10u);
          *v177 = 2;
          v132 = (unsigned int *)(v177 + 1);
          v242 = v132;
        }
        *v132 = 1;
        ++*(v242 - 1);
        if ( v235 )
        {
          v133 = *(v235 - 1);
          if ( (_DWORD)v133 == *(v235 - 2) )
          {
            v160 = (unsigned int)(3 * v133 + 1) >> 1;
            v161 = 4 * v160 + 8;
            if ( 4 * (int)v133 + 8 >= (unsigned int)v161 || (unsigned int)v133 >= v160 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v256, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v256);
              sub_233E40((__int64)v256);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v229 = (unsigned int)(3 * v133 + 1) >> 1;
            v162 = (unsigned int *)sub_186B300(v235 - 2, v161);
            v235 = v162 + 2;
            *v162 = v229;
            v134 = &v162[v162[1] + 2];
          }
          else
          {
            v134 = &v235[v133];
          }
        }
        else
        {
          v178 = (_QWORD *)sub_186B270(0x10u);
          *v178 = 2;
          v134 = (unsigned int *)(v178 + 1);
          v235 = v134;
        }
        *v134 = v165;
        ++*(v235 - 1);
      }
      while ( v223 >= v165 )
      {
        v146 = v165;
        if ( *(v217 - 2) == v165 )
        {
          v142 = (3 * v165 + 1) >> 1;
          v143 = 4 * v142 + 8;
          if ( 4 * v165 + 8 >= v143 || v165 >= v142 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v256, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v256);
            sub_233E40((__int64)v256);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v144 = (unsigned int *)sub_186B300(v217 - 2, v143);
          v145 = v144 + 2;
          *v144 = v142;
          v146 = v144[1];
          v217 = v145;
        }
        v217[v146] = v165;
        ++*(v217 - 1);
        if ( v242 )
        {
          v147 = *(v242 - 1);
          if ( (_DWORD)v147 == *(v242 - 2) )
          {
            v157 = (unsigned int)(3 * v147 + 1) >> 1;
            v158 = 4 * v157 + 8;
            if ( 4 * (int)v147 + 8 >= v158 || (unsigned int)v147 >= v157 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v256, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v256);
              sub_233E40((__int64)v256);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v159 = (unsigned int *)sub_186B300(v242 - 2, v158);
            *v159 = v157;
            v242 = v159 + 2;
            v148 = &v159[v159[1] + 2];
          }
          else
          {
            v148 = &v242[v147];
          }
        }
        else
        {
          v176 = (_QWORD *)sub_186B270(0x10u);
          *v176 = 2;
          v148 = (unsigned int *)(v176 + 1);
          v242 = v148;
        }
        *v148 = 1;
        ++*(v242 - 1);
        if ( v235 )
        {
          v149 = *(v235 - 1);
          if ( (_DWORD)v149 == *(v235 - 2) )
          {
            v154 = (unsigned int)(3 * v149 + 1) >> 1;
            v155 = 4 * v154 + 8;
            if ( 4 * (int)v149 + 8 >= v155 || (unsigned int)v149 >= v154 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v256, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v256);
              sub_233E40((__int64)v256);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v156 = (unsigned int *)sub_186B300(v235 - 2, v155);
            *v156 = v154;
            v235 = v156 + 2;
            v150 = &v156[v156[1] + 2];
          }
          else
          {
            v150 = &v235[v149];
          }
        }
        else
        {
          v179 = (_QWORD *)sub_186B270(0x10u);
          *v179 = 2;
          v150 = (unsigned int *)(v179 + 1);
          v235 = v150;
        }
        *v150 = v165;
        ++*(v235 - 1);
        v165 = *(v217 - 1);
      }
      v166 = v130;
      v167 = 4LL * v123;
      v168 = &v242[v166];
      v169 = v242[v166];
      v170 = *(unsigned int *)((char *)v242 + v167);
      if ( v170 >= v169 )
      {
        v168 = (unsigned int *)((char *)v242 + v167);
        v170 = v242[v130];
        v130 = v123;
        v169 = v242[v123];
        v167 = v166 * 4;
        v166 = v123;
      }
      *v168 = v169 + v170;
      *(unsigned int *)((char *)v217 + v167) = v130;
      v171 = &v235[v166];
      v172 = (int *)((char *)v235 + v167);
      v173 = *v172;
      *v172 = *v171;
      *v171 = v173;
    }
LABEL_15:
    v25 += 8;
  }
  while ( *(_QWORD *)v215 != v25 );
  if ( !v224 )
  {
LABEL_161:
    v224 = nullptr;
    goto LABEL_103;
  }
  v238 = *((_DWORD *)v224 - 1);
  if ( v238 )
  {
    if ( v217 )
    {
      v54 = 0;
      v55 = 0;
      do
      {
        if ( v55 >= *(v217 - 1) )
          break;
        if ( v217[v54] == v55 )
          break;
        v55 = ++v54;
      }
      while ( v54 != v238 );
      v226 = v55;
    }
    else
    {
      v226 = 0;
      while ( 1 )
      {
LABEL_59:
        v56 = -1;
        v57 = v226;
        v58 = v226 | 0x100000000LL;
        v216 = v224[v226];
        if ( (((v57 | 0x100000000LL) ^ v57) & 0xFFFFFFFFFFLL) != 0 )
        {
          v59 = v224[v226];
          v60 = v226;
          while ( *(_WORD *)(v59 + 4) == 1 )
          {
            if ( v217 && (unsigned int)v60 < *(v217 - 1) )
              LODWORD(v60) = v235[v60];
            v58 = (unsigned int)v60 | v58 & 0xFFFFFF0000000000LL;
            if ( ((v58 ^ v226) & 0xFFFFFFFFFFLL) == 0 )
              goto LABEL_158;
            v59 = v224[(unsigned int)v60];
          }
        }
        else
        {
LABEL_158:
          v59 = v224[v226];
        }
        v61 = v226 | 0x100000000LL;
        if ( ((v61 ^ v226) & 0xFFFFFFFFFFLL) != 0 )
        {
          for ( ii = v226; ; v216 = v224[ii] )
          {
            v62 = 0;
            if ( v22 )
            {
              while ( v62 < *((_DWORD *)v22 - 1) )
              {
                v63 = &v22[v62];
                v64 = sub_5E8520(a1, *v63, v59, v216, v57, v56);
                if ( v64 )
                  ++*(_DWORD *)(v64 + 8);
                v65 = *v63;
                if ( *v63 )
                {
                  v66 = (*(_DWORD *)(v65 + 8))-- == 1;
                  if ( v66 )
                  {
                    v231 = (void *)v64;
                    sub_15D7BC0(v241, v65);
                    v64 = (__int64)v231;
                  }
                }
                *v63 = v64;
                ++v62;
              }
            }
            if ( v217 && ii < *(v217 - 1) )
              ii = v235[ii];
            v61 = ii | v61 & 0xFFFFFF0000000000LL;
            if ( ((v61 ^ v226) & 0xFFFFFFFFFFLL) == 0 )
              break;
          }
        }
        v67 = v226 | 0x100000000LL;
        if ( ((v67 ^ v226) & 0xFFFFFFFFFFLL) != 0 )
        {
          v68 = v226;
          v69 = v226;
          do
          {
            v73 = sub_15E1B70(*(_QWORD *)(a1 + 24));
            v74 = v73;
            if ( v73 )
              ++*(_DWORD *)(v73 + 8);
            if ( v22 )
            {
              v75 = *((_DWORD *)v22 - 1);
              if ( v75 == *((_DWORD *)v22 - 2) )
              {
                v76 = (3 * v75 + 1) >> 1;
                v77 = 8 * v76 + 8;
                if ( 8 * v75 + 8 >= (unsigned int)v77 || v75 >= v76 )
                {
                  v14 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v256, "Overflow encountered when expanding vector");
                  *v14 = (char *)off_1C63128;
                  sub_2333C0(v14 + 1, v256);
                  sub_233E40((__int64)v256);
                  __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v232 = (3 * v75 + 1) >> 1;
                v220 = v74;
                v78 = (unsigned int *)sub_186B300(v22 - 1, v77);
                v22 = (__int64 *)(v78 + 2);
                v74 = v220;
                *v78 = v232;
                LODWORD(v78) = v78[1];
                v72 = &v22[(unsigned int)v78];
                v71 = (_DWORD)v78 + 1;
              }
              else
              {
                v70 = v75;
                v71 = v75 + 1;
                v72 = &v22[v70];
              }
            }
            else
            {
              v222 = v73;
              v101 = (_QWORD *)sub_186B270(0x18u);
              v22 = v101 + 1;
              *v101 = 2;
              v74 = v222;
              v71 = 1;
              v72 = v22;
            }
            *v72 = v74;
            *((_DWORD *)v22 - 1) = v71;
            if ( v217 && v69 < *(v217 - 1) )
            {
              v68 = v235[v68];
              v69 = v68;
            }
            v67 = v68 & 0xFFFFFF00FFFFFFFFLL | v67 & 0xFFFFFF0000000000LL;
          }
          while ( ((v67 ^ v226) & 0xFFFFFFFFFFLL) != 0 );
        }
        ++v226;
        v79 = *((_DWORD *)v224 - 1);
        v80 = v226;
        if ( v226 == v79 || !v217 )
          break;
        do
        {
          if ( v80 >= *(v217 - 1) )
            break;
          if ( v217[v80] == v80 )
            break;
          ++v80;
        }
        while ( v79 != v80 );
        v226 = v80;
        if ( v80 == v238 )
          goto LABEL_103;
      }
    }
    if ( v226 != v238 )
      goto LABEL_59;
  }
LABEL_103:
  *(_QWORD *)v250 = 0;
  sub_1862300(v250, "expand_select_store", 1);
  sub_14B7810((int)v252, *(_QWORD *)(a1 + 24), (int)v250, v81, v82, v83, v212);
  v84 = *(_QWORD *)(a1 + 24);
  v227 = v84;
  v253 = v84;
  if ( v22 )
  {
    v85 = &v22[*((unsigned int *)v22 - 1)];
    if ( v85 == v22 )
    {
      LODWORD(v86) = v84;
      v88 = nullptr;
      v102 = *(_QWORD *)(a1 + 72);
      v103 = v244 + 72;
    }
    else
    {
      v86 = v84;
      v87 = v22;
      v88 = nullptr;
      do
      {
        v94 = *v87;
        v255 = v86;
        v254 = 0;
        sub_14B9BF0(v252, v94, &v254);
        v95 = v254;
        if ( v254 )
          ++*(_DWORD *)(v254 + 8);
        if ( v88 )
        {
          v96 = *((_DWORD *)v88 - 1);
          if ( v96 == *((_DWORD *)v88 - 2) )
          {
            v97 = (3 * v96 + 1) >> 1;
            v98 = 8 * v97 + 8;
            if ( 8 * v96 + 8 >= (unsigned int)v98 || v96 >= v97 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v256, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, v256);
              sub_233E40((__int64)v256);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v221 = (3 * v96 + 1) >> 1;
            v99 = (unsigned int *)sub_186B300(v88 - 1, v98);
            v100 = v99[1];
            v88 = v99 + 2;
            v92 = v254;
            *v99 = v221;
            LODWORD(v99) = v100;
            v91 = &v88[v100];
            v90 = (_DWORD)v99 + 1;
          }
          else
          {
            v89 = v96;
            v90 = v96 + 1;
            v91 = &v88[v89];
            v92 = v95;
          }
        }
        else
        {
          v117 = (_QWORD *)sub_186B270(0x18u);
          *v117 = 2;
          v92 = v254;
          v90 = 1;
          v88 = v117 + 1;
          v91 = v88;
        }
        *v91 = v95;
        *((_DWORD *)v88 - 1) = v90;
        if ( v92 )
        {
          v93 = v255;
          v66 = (*(_DWORD *)(v92 + 8))-- == 1;
          if ( v66 )
            sub_15D7BC0(v93, v92);
        }
        ++v87;
        v86 = *(_QWORD *)(a1 + 24);
      }
      while ( v85 != v87 );
      v102 = *(_QWORD *)(a1 + 72);
      v103 = v244 + 72;
    }
  }
  else
  {
    LODWORD(v86) = v84;
    v88 = nullptr;
    v102 = *(_QWORD *)(a1 + 72);
    v103 = v244 + 72;
  }
  sub_15E1AF0(v86);
  v104 = sub_15E1B70(v86);
  sub_631ED0(v102, v104, 0, a3, v103, v105);
  if ( v88 )
  {
    v106 = v88;
    v107 = (unsigned __int64)&v88[*((unsigned int *)v88 - 1)];
    if ( (unsigned __int64)v88 < v107 )
    {
      do
      {
        while ( 1 )
        {
          v108 = *v106;
          if ( *v106 )
          {
            v66 = (*(_DWORD *)(v108 + 8))-- == 1;
            if ( v66 )
              break;
          }
          if ( (unsigned __int64)++v106 >= v107 )
            goto LABEL_127;
        }
        ++v106;
        sub_15D7BC0(v227, v108);
      }
      while ( (unsigned __int64)v106 < v107 );
    }
LABEL_127:
    sub_186B220(v88 - 1);
  }
  sub_14B63F0(v252);
  sub_18572D0(v250);
  v109 = v224;
  if ( v224 )
  {
    v110 = (unsigned __int64)&v224[*((unsigned int *)v224 - 1)];
    if ( (unsigned __int64)v224 < v110 )
    {
      do
      {
        while ( 1 )
        {
          v111 = *v109;
          if ( *v109 )
          {
            v66 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v66 )
              break;
          }
          if ( (unsigned __int64)++v109 >= v110 )
            goto LABEL_135;
        }
        ++v109;
        sub_15D7BC0(v248, v111);
      }
      while ( (unsigned __int64)v109 < v110 );
    }
LABEL_135:
    sub_186B220(v224 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  if ( v235 )
    sub_186B220(v235 - 2);
  if ( v242 )
    sub_186B220(v242 - 2);
  result = (__int64)v217;
  if ( v217 )
    result = sub_186B220(v217 - 2);
  if ( v22 )
  {
    v113 = v22;
    v114 = (unsigned __int64)&v22[*((unsigned int *)v22 - 1)];
    if ( (unsigned __int64)v22 < v114 )
    {
      do
      {
        while ( 1 )
        {
          v115 = *v113;
          if ( *v113 )
          {
            v66 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v66 )
              break;
          }
          if ( (unsigned __int64)++v113 >= v114 )
            return sub_186B220(v22 - 1);
        }
        ++v113;
        sub_15D7BC0(v241, v115);
      }
      while ( (unsigned __int64)v113 < v114 );
    }
    return sub_186B220(v22 - 1);
  }
  return result;
}

