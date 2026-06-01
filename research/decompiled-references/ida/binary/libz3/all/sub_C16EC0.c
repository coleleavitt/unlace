void __fastcall sub_C16EC0(__int64 a1, double a2, double a3, __m128 a4)
{
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **v7; // r13
  char **exception; // r13
  const __m128i *v9; // rbp
  __int64 v10; // rcx
  const __m128i *v11; // rdx
  const __m128i *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // r14
  __m128i *v16; // rdi
  __int64 v17; // rsi
  __m128i v18; // xmm0
  const __m128i *v19; // r15
  __int64 v20; // rax
  _DWORD *v21; // rsi
  __int64 v22; // rsi
  unsigned int v23; // ecx
  size_t v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  const __m128i *v30; // rcx
  const __m128i *j; // rax
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // r12
  const __m128i *v36; // rbp
  __int64 v37; // r13
  __int64 v38; // rsi
  bool v39; // zf
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rdi
  _DWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __m128i si128; // xmm0
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  __m128i *v53; // rdx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  unsigned int v57; // eax
  __m128i *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 *v61; // r13
  __int64 *v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned int v66; // r15d
  const __m128i *v67; // r14
  __m128 *v68; // rsi
  __m128 v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // esi
  size_t v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // r12
  _DWORD *v76; // r9
  __int64 v77; // rdi
  __int64 v78; // rcx
  __int64 *v79; // rsi
  __int64 *i; // rax
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 *v84; // rbx
  __int64 *v85; // r13
  const __m128i *v86; // r12
  __int64 *v87; // rbp
  _DWORD *v88; // r13
  __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 *v93; // r12
  __int64 *v94; // r13
  __int64 v95; // rsi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 *v99; // rbp
  __int64 *v100; // r12
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rdi
  _QWORD *v104; // rax
  __int64 v105; // rdi
  _DWORD *v106; // r8
  __int64 v107; // rdi
  _DWORD *v108; // r8
  const __m128i *v109; // r8
  _DWORD *v110; // rdi
  __int64 v111; // r13
  __int64 v112; // rax
  __int64 v113; // r15
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rax
  __m128i v117; // xmm5
  __int64 v118; // r15
  unsigned __int32 v119; // eax
  __m128i *v120; // rdx
  __m128i v121; // xmm7
  unsigned int v122; // edi
  unsigned int v123; // edx
  unsigned int v124; // edi
  unsigned int v125; // edx
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // r9
  _DWORD *v129; // r15
  __m128i v130; // xmm0
  __int64 v131; // rdx
  const __m128i *v132; // rsi
  const __m128i *n; // rax
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 *v137; // r12
  __int64 *v138; // rbx
  __int64 v139; // r13
  __int64 v140; // rsi
  __int64 v141; // rsi
  __int64 v142; // rdi
  const __m128i *v143; // r9
  unsigned int v144; // edi
  unsigned int v145; // edx
  unsigned int v146; // edi
  unsigned int v147; // edx
  __int64 v148; // rax
  __int64 v149; // r10
  __int64 v150; // rcx
  __int64 v151; // r8
  __m128i v152; // xmm0
  __int64 v153; // rdx
  const __m128i *v154; // rdi
  const __m128i *m; // rax
  __int64 v156; // rsi
  __int64 v157; // rsi
  __int64 v158; // rsi
  __int64 v159; // r12
  const __m128i *v160; // rbp
  __int64 v161; // r15
  __int64 v162; // rsi
  __int64 v163; // rsi
  __int64 v164; // rdi
  const __m128i *v165; // rcx
  __int64 v166; // rdx
  int v167; // eax
  _QWORD *v168; // rax
  _DWORD *v169; // rdi
  _DWORD *v170; // r11
  int v171; // r10d
  _QWORD *v172; // rdx
  unsigned int v173; // edi
  unsigned int v174; // edx
  unsigned __int32 v175; // edi
  unsigned int v176; // edx
  __int64 v177; // rax
  __int64 v178; // r8
  __int64 v179; // rdx
  __m128i *v180; // rcx
  const __m128i *v181; // rdi
  const __m128i *k; // rax
  __int64 v183; // rsi
  __int64 v184; // rsi
  __int64 v185; // rsi
  const __m128i *v186; // r12
  const __m128i *v187; // rbp
  __int64 v188; // rsi
  __int64 v189; // rsi
  __int64 v190; // rdi
  __int64 v191; // rdx
  _DWORD *v192; // r10
  int v193; // edi
  __int64 v194; // r10
  _QWORD *v195; // rbx
  __int64 v196; // rdi
  const __m128i *v197; // rdi
  unsigned __int64 v198; // [rsp+8h] [rbp-E0h]
  unsigned int v199; // [rsp+8h] [rbp-E0h]
  int v200[4]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v201; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v202; // [rsp+30h] [rbp-B8h] BYREF
  const __m128i *v203; // [rsp+40h] [rbp-A8h]
  const __m128i *v204; // [rsp+48h] [rbp-A0h]
  __m128i v205; // [rsp+50h] [rbp-98h] BYREF
  __m128i *v206; // [rsp+60h] [rbp-88h]
  __m128i *v207; // [rsp+68h] [rbp-80h]
  __m128i v208; // [rsp+70h] [rbp-78h] BYREF
  __int64 v209; // [rsp+80h] [rbp-68h]
  __int64 v210[11]; // [rsp+90h] [rbp-58h] BYREF

  v197 = *(const __m128i **)(a1 + 8);
  if ( *(_DWORD *)(v197->m128i_i64[0] + 712) )
  {
    nullsub_1157();
    return;
  }
  v9 = v197;
  v10 = v197[58].m128i_i64[1];
  v11 = (const __m128i *)v10;
  if ( v10 )
  {
    v12 = nullptr;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v10 - 4);
      v14 = v9[59].m128i_u32[0];
      if ( v14 < (unsigned int)v13 )
        break;
      v202.m128i_i8[0] = 0;
LABEL_57:
      v59 = 24 * v13;
      v60 = 24LL * v14;
      v61 = (__int64 *)(v10 + v59);
      v62 = (__int64 *)(v10 + v60);
      if ( v60 != v59 )
      {
        do
        {
          while ( 1 )
          {
            v64 = v62[1];
            v65 = *v62;
            if ( v64 )
            {
              v39 = (*(_DWORD *)(v64 + 8))-- == 1;
              if ( v39 )
              {
                sub_15D7BC0(v65, v64);
                v65 = *v62;
              }
            }
            v63 = v62[2];
            if ( v63 )
            {
              v39 = (*(_DWORD *)(v63 + 8))-- == 1;
              if ( v39 )
                break;
            }
            v62 += 3;
            if ( v61 == v62 )
              goto LABEL_66;
          }
          sub_15D7BC0(v65, v63);
          v62 += 3;
        }
        while ( v61 != v62 );
LABEL_66:
        v10 = v9[58].m128i_i64[1];
        v11 = (const __m128i *)v10;
      }
      *(_DWORD *)(v10 - 4) = v14;
LABEL_68:
      if ( v12 )
      {
        if ( v12[-1].m128i_i32[3] )
        {
          if ( v10 )
          {
            v66 = 0;
            v67 = v12;
            goto LABEL_79;
          }
          v168 = (_QWORD *)sub_186B270(0x38u);
          v11 = (const __m128i *)(v168 + 1);
          *v168 = 2;
          v66 = 0;
          v67 = v12;
          v9[58].m128i_i64[1] = (__int64)(v168 + 1);
          v68 = (__m128 *)(v168 + 1);
          while ( 1 )
          {
            v69 = (__m128)_mm_loadu_si128(v67);
            v70 = v67[1].m128i_i64[0];
            a4 = _mm_movehl_ps(a4, v69);
            v68[1].m128_u64[0] = v70;
            *v68 = v69;
            if ( a4.m128_u64[0] )
              ++*(_DWORD *)(a4.m128_u64[0] + 8);
            if ( v70 )
              ++*(_DWORD *)(v70 + 8);
            ++v11[-1].m128i_i32[3];
            if ( ++v66 >= v12[-1].m128i_i32[3] )
              break;
            v67 = (const __m128i *)((char *)v12 + 24 * v66);
LABEL_79:
            v71 = v11[-1].m128i_u32[3];
            if ( (_DWORD)v71 == v11[-1].m128i_i32[2] )
            {
              v72 = (unsigned int)(3 * v71 + 1) >> 1;
              v199 = v72;
              v73 = 8 * (v72 + ((3 * (_DWORD)v71 + 1) & 0xFFFFFFFE)) + 8;
              if ( 24 * (int)v71 + 8 >= (unsigned int)v73 || (unsigned int)v71 >= v72 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_C0E620(v210, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v210);
                sub_233E40((__int64)v210);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v74 = sub_186B270(v73);
              v75 = (__int64 *)v9[58].m128i_i64[1];
              v76 = (_DWORD *)v74;
              v11 = (const __m128i *)(v74 + 8);
              if ( v75 )
              {
                v77 = *((unsigned int *)v75 - 1);
                v78 = v74 + 8;
                *(_DWORD *)(v74 + 4) = v77;
                v79 = &v75[3 * v77];
                for ( i = v75; v79 != i; *(_QWORD *)(v78 - 8) = v83 )
                {
                  v81 = *i;
                  i += 3;
                  v78 += 24;
                  *(_QWORD *)(v78 - 24) = v81;
                  v82 = *(i - 2);
                  *(i - 2) = 0;
                  *(_QWORD *)(v78 - 16) = v82;
                  v83 = *(i - 1);
                  *(i - 1) = 0;
                }
                if ( (_DWORD)v77 )
                {
                  v203 = v12;
                  v84 = v75;
                  v85 = &v75[3 * v77];
                  *(_QWORD *)v200 = v9;
                  v86 = v11;
                  v87 = v85;
                  v88 = v76;
                  do
                  {
                    while ( 1 )
                    {
                      v90 = v84[1];
                      v91 = *v84;
                      if ( v90 )
                      {
                        v39 = (*(_DWORD *)(v90 + 8))-- == 1;
                        if ( v39 )
                        {
                          sub_15D7BC0(v91, v90);
                          v91 = *v84;
                        }
                      }
                      v89 = v84[2];
                      if ( v89 )
                      {
                        v39 = (*(_DWORD *)(v89 + 8))-- == 1;
                        if ( v39 )
                          break;
                      }
                      v84 += 3;
                      if ( v84 == v87 )
                        goto LABEL_94;
                    }
                    sub_15D7BC0(v91, v89);
                    v84 += 3;
                  }
                  while ( v84 != v87 );
LABEL_94:
                  v9 = *(const __m128i **)v200;
                  v11 = v86;
                  v12 = v203;
                  v76 = v88;
                  v75 = *(__int64 **)(*(_QWORD *)v200 + 936LL);
                }
                *(_QWORD *)v200 = v76;
                v203 = v11;
                sub_186B220(v75 - 1);
                v76 = *(_DWORD **)v200;
                v11 = v203;
                v68 = (__m128 *)((char *)v203 + 24 * *(unsigned int *)(*(_QWORD *)v200 + 4LL));
              }
              else
              {
                *(_DWORD *)(v74 + 4) = 0;
                v68 = (__m128 *)(v74 + 8);
              }
              v9[58].m128i_i64[1] = (__int64)v11;
              *v76 = v199;
            }
            else
            {
              v68 = (__m128 *)((char *)v11 + 24 * v71);
            }
          }
        }
        if ( !v202.m128i_i8[0] )
          goto LABEL_108;
        v92 = v12[-1].m128i_u32[3];
        if ( (_DWORD)v92 )
        {
          v93 = (__int64 *)v12;
          v94 = &v12->m128i_i64[3 * v92];
          do
          {
            while ( 1 )
            {
              v96 = v93[1];
              v97 = *v93;
              if ( v96 )
              {
                v39 = (*(_DWORD *)(v96 + 8))-- == 1;
                if ( v39 )
                {
                  sub_15D7BC0(v97, v96);
                  v97 = *v93;
                }
              }
              v95 = v93[2];
              if ( v95 )
              {
                v39 = (*(_DWORD *)(v95 + 8))-- == 1;
                if ( v39 )
                  break;
              }
              v93 += 3;
              if ( v93 == v94 )
                goto LABEL_107;
            }
            sub_15D7BC0(v97, v95);
            v93 += 3;
          }
          while ( v93 != v94 );
        }
LABEL_107:
        v10 = v9[58].m128i_i64[1];
        v12[-1].m128i_i32[3] = 0;
        v11 = (const __m128i *)v10;
        if ( !v10 )
        {
LABEL_108:
          v98 = v12[-1].m128i_u32[3];
          if ( (_DWORD)v98 )
          {
            v99 = (__int64 *)v12;
            v100 = &v12->m128i_i64[3 * v98];
            do
            {
              while ( 1 )
              {
                v102 = v99[1];
                v103 = *v99;
                if ( v102 )
                {
                  v39 = (*(_DWORD *)(v102 + 8))-- == 1;
                  if ( v39 )
                  {
                    sub_15D7BC0(v103, v102);
                    v103 = *v99;
                  }
                }
                v101 = v99[2];
                if ( v101 )
                {
                  v39 = (*(_DWORD *)(v101 + 8))-- == 1;
                  if ( v39 )
                    break;
                }
                v99 += 3;
                if ( v99 == v100 )
                  goto LABEL_199;
              }
              sub_15D7BC0(v103, v101);
              v99 += 3;
            }
            while ( v99 != v100 );
          }
LABEL_199:
          sub_186B220(&v12[-1].m128i_u64[1]);
          return;
        }
      }
      else
      {
        if ( !v202.m128i_i8[0] )
          return;
        v11 = (const __m128i *)v10;
        if ( !v10 )
          return;
      }
    }
    v202.m128i_i8[0] = 0;
    v15 = 24LL * v14;
    v198 = 24 * (v14 + (unsigned __int64)((unsigned int)v13 - v14 - 1) + 1);
    while ( 1 )
    {
      v19 = (const __m128i *)(v10 + v15);
      v20 = *(_QWORD *)(v10 + v15 + 8);
      if ( *(_WORD *)(v20 + 4) || (v21 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL)) == nullptr || *v21 )
      {
LABEL_22:
        if ( v12 )
        {
          v22 = v12[-1].m128i_u32[3];
          if ( (_DWORD)v22 == v12[-1].m128i_i32[2] )
          {
            v23 = (unsigned int)(3 * v22 + 1) >> 1;
            LODWORD(v203) = v23;
            v24 = 8 * (v23 + ((3 * (_DWORD)v22 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * (int)v22 + 8 >= (unsigned int)v24 || (unsigned int)v22 >= v23 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(v210, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v210);
              sub_233E40((__int64)v210);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = sub_186B270(v24);
            v26 = v12[-1].m128i_u32[3];
            v27 = v25 + 8;
            v28 = v25;
            v29 = v25 + 8;
            *(_DWORD *)(v25 + 4) = v26;
            v30 = (const __m128i *)((char *)v12 + 24 * v26);
            for ( j = v12; v30 != j; *(_QWORD *)(v29 - 8) = v34 )
            {
              v32 = j->m128i_i64[0];
              j = (const __m128i *)((char *)j + 24);
              v29 += 24;
              *(_QWORD *)(v29 - 24) = v32;
              v33 = j[-1].m128i_i64[0];
              j[-1].m128i_i64[0] = 0;
              *(_QWORD *)(v29 - 16) = v33;
              v34 = j[-1].m128i_i64[1];
              j[-1].m128i_i64[1] = 0;
            }
            if ( (_DWORD)v26 )
            {
              v201.m128i_i64[0] = (__int64)v9;
              v35 = v28;
              *(_QWORD *)v200 = v12;
              v36 = (const __m128i *)((char *)v12 + 24 * v26);
              v37 = v27;
              do
              {
                while ( 1 )
                {
                  v40 = v12->m128i_i64[1];
                  v41 = v12->m128i_i64[0];
                  if ( v40 )
                  {
                    v39 = (*(_DWORD *)(v40 + 8))-- == 1;
                    if ( v39 )
                    {
                      sub_15D7BC0(v41, v40);
                      v41 = v12->m128i_i64[0];
                    }
                  }
                  v38 = v12[1].m128i_i64[0];
                  if ( v38 )
                  {
                    v39 = (*(_DWORD *)(v38 + 8))-- == 1;
                    if ( v39 )
                      break;
                  }
                  v12 = (const __m128i *)((char *)v12 + 24);
                  if ( v12 == v36 )
                    goto LABEL_37;
                }
                sub_15D7BC0(v41, v38);
                v12 = (const __m128i *)((char *)v12 + 24);
              }
              while ( v12 != v36 );
LABEL_37:
              v12 = *(const __m128i **)v200;
              v9 = (const __m128i *)v201.m128i_i64[0];
              v28 = v35;
              v27 = v37;
            }
            v201.m128i_i64[0] = v27;
            *(_QWORD *)v200 = v28;
            sub_186B220(&v12[-1].m128i_u64[1]);
            v42 = *(_QWORD *)v200;
            v43 = v201.m128i_i64[0];
            v10 = v9[58].m128i_i64[1];
            **(_DWORD **)v200 = (_DWORD)v203;
            v11 = (const __m128i *)v10;
            v12 = (const __m128i *)v43;
            v16 = (__m128i *)(v43 + 24LL * *(unsigned int *)(v42 + 4));
            v20 = v19->m128i_i64[1];
          }
          else
          {
            v16 = (__m128i *)((char *)v12 + 24 * v22);
          }
        }
        else
        {
          v104 = (_QWORD *)sub_186B270(0x38u);
          v10 = v9[58].m128i_i64[1];
          v12 = (const __m128i *)(v104 + 1);
          *v104 = 2;
          v16 = (__m128i *)(v104 + 1);
          v20 = v19->m128i_i64[1];
          v11 = (const __m128i *)v10;
        }
        v17 = v19[1].m128i_i64[0];
        v18 = _mm_unpacklo_epi64(_mm_loadl_epi64(v19), (__m128i)(unsigned __int64)v20);
        v16[1].m128i_i64[0] = v17;
        *v16 = v18;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        ++v12[-1].m128i_i32[3];
        goto LABEL_18;
      }
      if ( v21[1] != 6 || *(_DWORD *)(v20 + 24) != 2 )
        goto LABEL_40;
      v105 = *(_QWORD *)(v20 + 40);
      if ( *(_WORD *)(v105 + 4)
        || (v106 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL)) == nullptr
        || *v106
        || v106[1] != 8
        || *(_DWORD *)(v105 + 24) != 1
        || (v109 = *(const __m128i **)(v105 + 32), v109->m128i_i16[2])
        || (v169 = *(_DWORD **)(v109[1].m128i_i64[0] + 24)) == nullptr
        || *v169 )
      {
        v107 = *(_QWORD *)(v20 + 32);
      }
      else
      {
        v39 = v169[1] == 6;
        v107 = *(_QWORD *)(v20 + 32);
        if ( v39 )
        {
          if ( v109->m128i_i32[2] == 1 || *(_WORD *)(v107 + 4) )
            goto LABEL_133;
          v170 = *(_DWORD **)(*(_QWORD *)(v107 + 16) + 24LL);
          v171 = *(_DWORD *)(v107 + 24);
          if ( v170 && !*v170 && v170[1] == 8 && v171 == 1 )
          {
            v194 = *(_QWORD *)(v107 + 32);
            if ( *(_WORD *)(v194 + 4) )
              goto LABEL_133;
            v171 = *(_DWORD *)(v194 + 24);
          }
          if ( !v171 )
            goto LABEL_133;
        }
      }
      if ( *(_WORD *)(v107 + 4) )
        goto LABEL_40;
      v108 = *(_DWORD **)(*(_QWORD *)(v107 + 16) + 24LL);
      if ( !v108 )
        goto LABEL_40;
      if ( *v108 )
        goto LABEL_40;
      if ( v108[1] != 8 )
        goto LABEL_40;
      if ( *(_DWORD *)(v107 + 24) != 1 )
        goto LABEL_40;
      v109 = *(const __m128i **)(v107 + 32);
      if ( v109->m128i_i16[2] )
        goto LABEL_40;
      v110 = *(_DWORD **)(v109[1].m128i_i64[0] + 24);
      if ( !v110 || *v110 || v110[1] != 6 )
        goto LABEL_40;
      v111 = *(_QWORD *)(v20 + 40);
      if ( v109->m128i_i32[2] == 1 || *(_WORD *)(v111 + 4) )
        goto LABEL_133;
      v192 = *(_DWORD **)(*(_QWORD *)(v111 + 16) + 24LL);
      v193 = *(_DWORD *)(v111 + 24);
      if ( v192 && !*v192 && v192[1] == 8 && v193 == 1 )
      {
        v196 = *(_QWORD *)(v111 + 32);
        if ( *(_WORD *)(v196 + 4) )
          goto LABEL_133;
        v193 = *(_DWORD *)(v196 + 24);
      }
      if ( !v193 )
      {
LABEL_133:
        v112 = v109[1].m128i_u32[2];
        if ( v112 * 8 )
        {
          v203 = v109 + 2;
          v201.m128i_i64[0] = (__int64)&v109[2].m128i_i64[v112];
          *(_QWORD *)v200 = v210;
          do
          {
            v113 = v9->m128i_i64[0];
            v114 = v203->m128i_i64[0];
            if ( *(_WORD *)(v203->m128i_i64[0] + 4)
              || (v115 = *(_DWORD **)(*(_QWORD *)(v114 + 16) + 24LL)) == nullptr
              || *v115
              || v115[1] != 8
              || *(_DWORD *)(v114 + 24) != 1 )
            {
              sub_15E1A70(v9->m128i_i64[0]);
            }
            v116 = sub_15E1B70(v113);
            v117 = _mm_loadl_epi64(v9);
            v118 = v116;
            v209 = 0;
            v205 = _mm_unpacklo_epi64(v117, (__m128i)(unsigned __int64)v116);
            v208 = v205;
            if ( v116 )
              ++*(_DWORD *)(v116 + 8);
            if ( v12 )
            {
              v119 = v12[-1].m128i_u32[3];
              if ( v119 == v12[-1].m128i_i32[2] )
              {
                v173 = 3 * v119 + 1;
                v174 = v173 & 0xFFFFFFFE;
                v175 = v173 >> 1;
                v202.m128i_i32[0] = v175;
                v176 = 8 * (v175 + v174) + 8;
                if ( 24 * v119 + 8 >= v176 || v119 >= v175 )
                {
                  v7 = (char **)__cxa_allocate_exception(0x28u);
                  sub_C0E620(v210, "Overflow encountered when expanding vector");
                  *v7 = (char *)off_1C63128;
                  sub_2333C0(v7 + 1, v210);
                  sub_233E40((__int64)v210);
                  __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v177 = sub_186B270(v176);
                v178 = v12[-1].m128i_u32[3];
                v179 = v177 + 8;
                v180 = (__m128i *)v177;
                v204 = (const __m128i *)(v177 + 8);
                *(_DWORD *)(v177 + 4) = v178;
                v181 = (const __m128i *)((char *)v12 + 24 * v178);
                for ( k = v12; v181 != k; *(_QWORD *)(v179 - 8) = v185 )
                {
                  v183 = k->m128i_i64[0];
                  k = (const __m128i *)((char *)k + 24);
                  v179 += 24;
                  *(_QWORD *)(v179 - 24) = v183;
                  v184 = k[-1].m128i_i64[0];
                  k[-1].m128i_i64[0] = 0;
                  *(_QWORD *)(v179 - 16) = v184;
                  v185 = k[-1].m128i_i64[1];
                  k[-1].m128i_i64[1] = 0;
                }
                if ( (_DWORD)v178 )
                {
                  v186 = v9;
                  v206 = (__m128i *)v12;
                  v207 = v180;
                  v187 = (const __m128i *)((char *)v12 + 24 * v178);
                  do
                  {
                    v189 = v12->m128i_i64[1];
                    v190 = v12->m128i_i64[0];
                    if ( v189 )
                    {
                      v39 = (*(_DWORD *)(v189 + 8))-- == 1;
                      if ( v39 )
                      {
                        sub_15D7BC0(v190, v189);
                        v190 = v12->m128i_i64[0];
                      }
                    }
                    v188 = v12[1].m128i_i64[0];
                    if ( v188 )
                    {
                      v39 = (*(_DWORD *)(v188 + 8))-- == 1;
                      if ( v39 )
                        sub_15D7BC0(v190, v188);
                    }
                    v12 = (const __m128i *)((char *)v12 + 24);
                  }
                  while ( v12 != v187 );
                  v12 = v206;
                  v180 = v207;
                  v9 = v186;
                }
                v206 = v180;
                sub_186B220(&v12[-1].m128i_u64[1]);
                v12 = v204;
                v191 = v206->m128i_u32[1];
                v206->m128i_i32[0] = v202.m128i_i32[0];
                v119 = v191;
                v120 = (__m128i *)((char *)v12 + 24 * v191);
              }
              else
              {
                v120 = (__m128i *)((char *)v12 + 24 * v119);
              }
            }
            else
            {
              v195 = (_QWORD *)sub_186B270(0x38u);
              *v195 = 2;
              v119 = 0;
              v12 = (const __m128i *)(v195 + 1);
              v120 = (__m128i *)v12;
            }
            v121 = _mm_load_si128(&v205);
            v120[1].m128i_i64[0] = 0;
            *v120 = v121;
            if ( v118 )
            {
              ++*(_DWORD *)(v118 + 8);
              ++v12[-1].m128i_i32[3];
            }
            else
            {
              v12[-1].m128i_i32[3] = v119 + 1;
            }
            sub_C16530(v208.m128i_i64);
            v203 = (const __m128i *)((char *)v203 + 8);
          }
          while ( (const __m128i *)v201.m128i_i64[0] != v203 );
          goto LABEL_54;
        }
        v202.m128i_i8[0] = 1;
LABEL_18:
        v15 += 24;
        if ( v198 == v15 )
          goto LABEL_55;
      }
      else
      {
LABEL_40:
        if ( v21[1] != 4 )
          goto LABEL_22;
        v44 = *(_QWORD *)(v20 + 32);
        v45 = v9->m128i_i64[0];
        v39 = *(_WORD *)(v44 + 4) == 0;
        v203 = *(const __m128i **)(v20 + 48);
        if ( !v39
          || (v46 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL)) == nullptr
          || *v46
          || v46[1] != 8
          || *(_DWORD *)(v44 + 24) != 1 )
        {
          *(_QWORD *)v200 = v45;
          sub_15E1A70(v45);
          LODWORD(v45) = v200[0];
        }
        v47 = sub_15E1B70(v45);
        v48 = v9->m128i_i64[0];
        v209 = 0;
        si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)(unsigned __int64)v47);
        v208 = si128;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        if ( v12 )
        {
          v50 = v12[-1].m128i_u32[3];
          if ( v50 == v12[-1].m128i_i32[2] )
          {
            v144 = 3 * v50 + 1;
            v145 = v144 & 0xFFFFFFFE;
            v146 = v144 >> 1;
            v200[0] = v146;
            v147 = 8 * (v146 + v145) + 8;
            if ( 24 * v50 + 8 >= v147 || v50 >= v146 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_C0E620(v210, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v210);
              sub_233E40((__int64)v210);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v201 = si128;
            v148 = sub_186B270(v147);
            v149 = v12[-1].m128i_u32[3];
            v150 = v148 + 8;
            v151 = v148;
            v152 = _mm_load_si128(&v201);
            v153 = v148 + 8;
            *(_DWORD *)(v148 + 4) = v149;
            v154 = (const __m128i *)((char *)v12 + 24 * v149);
            for ( m = v12; v154 != m; *(_QWORD *)(v153 - 8) = v158 )
            {
              v156 = m->m128i_i64[0];
              m = (const __m128i *)((char *)m + 24);
              v153 += 24;
              *(_QWORD *)(v153 - 24) = v156;
              v157 = m[-1].m128i_i64[0];
              m[-1].m128i_i64[0] = 0;
              *(_QWORD *)(v153 - 16) = v157;
              v158 = m[-1].m128i_i64[1];
              m[-1].m128i_i64[1] = 0;
            }
            if ( (_DWORD)v149 )
            {
              v204 = v9;
              v159 = v151;
              v201.m128i_i64[0] = (__int64)v12;
              v160 = (const __m128i *)((char *)v12 + 24 * v149);
              v202 = v152;
              v161 = v150;
              do
              {
                while ( 1 )
                {
                  v163 = v12->m128i_i64[1];
                  v164 = v12->m128i_i64[0];
                  if ( v163 )
                  {
                    v39 = (*(_DWORD *)(v163 + 8))-- == 1;
                    if ( v39 )
                    {
                      sub_15D7BC0(v164, v163);
                      v164 = v12->m128i_i64[0];
                    }
                  }
                  v162 = v12[1].m128i_i64[0];
                  if ( v162 )
                  {
                    v39 = (*(_DWORD *)(v162 + 8))-- == 1;
                    if ( v39 )
                      break;
                  }
                  v12 = (const __m128i *)((char *)v12 + 24);
                  if ( v12 == v160 )
                    goto LABEL_176;
                }
                sub_15D7BC0(v164, v162);
                v12 = (const __m128i *)((char *)v12 + 24);
              }
              while ( v12 != v160 );
LABEL_176:
              v12 = (const __m128i *)v201.m128i_i64[0];
              v9 = v204;
              v151 = v159;
              v150 = v161;
              v152 = _mm_load_si128(&v202);
            }
            v204 = (const __m128i *)v150;
            v202.m128i_i64[0] = v151;
            v201 = v152;
            sub_186B220(&v12[-1].m128i_u64[1]);
            v165 = v204;
            si128 = _mm_load_si128(&v201);
            v166 = *(unsigned int *)(v202.m128i_i64[0] + 4);
            v48 = v9->m128i_i64[0];
            *(_DWORD *)v202.m128i_i64[0] = v200[0];
            v12 = v165;
            v167 = v166;
            v53 = (__m128i *)((char *)v165 + 24 * v166);
            v52 = v167 + 1;
          }
          else
          {
            v51 = v50;
            v52 = v50 + 1;
            v53 = (__m128i *)((char *)v12 + 24 * v51);
          }
        }
        else
        {
          *(__m128i *)v200 = si128;
          v172 = (_QWORD *)sub_186B270(0x38u);
          v48 = v9->m128i_i64[0];
          *v172 = 2;
          v52 = 1;
          v53 = (__m128i *)(v172 + 1);
          si128 = _mm_load_si128((const __m128i *)v200);
          v12 = v53;
        }
        *v53 = si128;
        v53[1].m128i_i64[0] = 0;
        v12[-1].m128i_i32[3] = v52;
        v54 = sub_15E1B70(v48);
        v55 = _mm_loadl_epi64(v9);
        v209 = 0;
        v56 = _mm_unpacklo_epi64(v55, (__m128i)(unsigned __int64)v54);
        v208 = v56;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        v57 = v12[-1].m128i_u32[3];
        if ( v57 == v12[-1].m128i_i32[2] )
        {
          v122 = 3 * v57 + 1;
          v123 = v122 & 0xFFFFFFFE;
          v124 = v122 >> 1;
          LODWORD(v203) = v124;
          v125 = 8 * (v124 + v123) + 8;
          if ( 24 * v57 + 8 >= v125 || v57 >= v124 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_C0E620(v210, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v210);
            sub_233E40((__int64)v210);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          *(__m128i *)v200 = v56;
          v126 = sub_186B270(v125);
          v127 = v12[-1].m128i_u32[3];
          v128 = v126 + 8;
          v129 = (_DWORD *)v126;
          v130 = _mm_load_si128((const __m128i *)v200);
          v131 = v126 + 8;
          *(_DWORD *)(v126 + 4) = v127;
          v132 = (const __m128i *)((char *)v12 + 24 * v127);
          for ( n = v12; v132 != n; *(_QWORD *)(v131 - 8) = v136 )
          {
            v134 = n->m128i_i64[0];
            n = (const __m128i *)((char *)n + 24);
            v131 += 24;
            *(_QWORD *)(v131 - 24) = v134;
            v135 = n[-1].m128i_i64[0];
            n[-1].m128i_i64[0] = 0;
            *(_QWORD *)(v131 - 16) = v135;
            v136 = n[-1].m128i_i64[1];
            n[-1].m128i_i64[1] = 0;
          }
          if ( (_DWORD)v127 )
          {
            *(_QWORD *)v200 = v12;
            v137 = (__int64 *)v12;
            v201 = v130;
            v138 = &v12->m128i_i64[3 * v127];
            v139 = v128;
            do
            {
              while ( 1 )
              {
                v141 = v137[1];
                v142 = *v137;
                if ( v141 )
                {
                  v39 = (*(_DWORD *)(v141 + 8))-- == 1;
                  if ( v39 )
                  {
                    sub_15D7BC0(v142, v141);
                    v142 = *v137;
                  }
                }
                v140 = v137[2];
                if ( v140 )
                {
                  v39 = (*(_DWORD *)(v140 + 8))-- == 1;
                  if ( v39 )
                    break;
                }
                v137 += 3;
                if ( v137 == v138 )
                  goto LABEL_161;
              }
              sub_15D7BC0(v142, v140);
              v137 += 3;
            }
            while ( v137 != v138 );
LABEL_161:
            v12 = *(const __m128i **)v200;
            v130 = _mm_load_si128(&v201);
            v128 = v139;
          }
          *(_QWORD *)v200 = v128;
          v201 = v130;
          sub_186B220(&v12[-1].m128i_u64[1]);
          v143 = *(const __m128i **)v200;
          v56 = _mm_load_si128(&v201);
          *v129 = (_DWORD)v203;
          v12 = v143;
          v57 = v129[1];
        }
        v58 = (__m128i *)((char *)v12 + 24 * v57);
        v58[1].m128i_i64[0] = 0;
        *v58 = v56;
        v12[-1].m128i_i32[3] = v57 + 1;
LABEL_54:
        v10 = v9[58].m128i_i64[1];
        v202.m128i_i8[0] = 1;
        v15 += 24;
        v11 = (const __m128i *)v10;
        if ( v198 == v15 )
        {
LABEL_55:
          v14 = v9[59].m128i_u32[0];
          if ( v10 )
          {
            v13 = *(unsigned int *)(v10 - 4);
            goto LABEL_57;
          }
          goto LABEL_68;
        }
      }
    }
  }
}

