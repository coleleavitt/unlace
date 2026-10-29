__int64 __fastcall sub_6A5960(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  _OWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r13
  __int64 v12; // r12
  const void *v13; // rdi
  const __m128i *v14; // r15
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // r8d
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rdx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *v33; // rdx
  _DWORD *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 *v39; // rsi
  __int64 v40; // r8
  int v41; // esi
  unsigned int v42; // r10d
  __int64 v43; // r8
  __int64 *m128i_i64; // rax
  int v45; // edi
  __int64 v46; // rdx
  __int64 *v47; // r9
  __int64 *v48; // rdx
  __int64 *v49; // r8
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 *v55; // r13
  __int64 *v56; // rbx
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  __int64 v60; // r15
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  unsigned int v63; // r14d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 i; // r15
  unsigned int v69; // r14d
  __int64 v70; // rsi
  __int64 *v71; // r13
  __int64 *v72; // rbx
  __int64 v73; // rcx
  int v74; // eax
  __int64 *v75; // rcx
  __int64 v76; // r15
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  unsigned int v79; // r14d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rcx
  __int64 *v83; // rbx
  __int64 *v84; // r14
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // r9d
  __int64 v88; // r8
  __int64 *v89; // r13
  __int64 *v90; // rdx
  int v91; // esi
  __int64 v92; // r9
  __int64 *v93; // rdi
  __int64 *v94; // rax
  __int64 *v95; // r8
  __int64 *v96; // r10
  __int64 v97; // rdx
  __int64 *v98; // rax
  __int64 *v99; // rdx
  __int64 v100; // rax
  unsigned int v102; // edi
  size_t v103; // rsi
  unsigned int *v104; // rax
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rdx
  unsigned int v108; // ecx
  size_t v109; // rsi
  unsigned int *v110; // rax
  __int64 v111; // rdx
  unsigned int v112; // ecx
  size_t v113; // rsi
  unsigned int *v114; // rax
  __int64 v115; // rdx
  __m128i *v116; // rax
  __m128i *v117; // rsi
  __m128i *v118; // r9
  const __m128i *v119; // rcx
  __m128i *v120; // r11
  __m128i *v121; // rdi
  __int64 v122; // rdx
  __m128i *v123; // rsi
  __m128i *v124; // rdx
  __m128i v125; // xmm0
  __int64 *v126; // rax
  __int64 v127; // rax
  int v128; // r10d
  __m128i *v129; // rdi
  __m128i *v130; // rdx
  __m128i *v131; // rax
  __m128i *v132; // rsi
  const __m128i *v133; // r15
  __m128i *v134; // r11
  __m128i *v135; // rdi
  __int64 v136; // rdx
  __m128i *v137; // rsi
  __m128i *v138; // rdx
  __m128i v139; // xmm0
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  char **v145; // r15
  char **exception; // rbx
  char **v147; // r15
  char **v148; // r15
  char **v149; // r15
  char **v150; // r15
  char **v151; // r15
  int v152; // [rsp+0h] [rbp-110h]
  __int64 *v153; // [rsp+18h] [rbp-F8h]
  __int64 v154; // [rsp+18h] [rbp-F8h]
  size_t v155; // [rsp+18h] [rbp-F8h]
  int v156; // [rsp+20h] [rbp-F0h]
  int v157; // [rsp+20h] [rbp-F0h]
  unsigned int v158; // [rsp+28h] [rbp-E8h]
  unsigned int v159; // [rsp+28h] [rbp-E8h]
  size_t v160; // [rsp+28h] [rbp-E8h]
  __int64 v161; // [rsp+28h] [rbp-E8h]
  _QWORD *v163; // [rsp+38h] [rbp-D8h]
  _QWORD *v164; // [rsp+38h] [rbp-D8h]
  unsigned int v165; // [rsp+38h] [rbp-D8h]
  __int64 v166; // [rsp+38h] [rbp-D8h]
  __int64 v167; // [rsp+48h] [rbp-C8h]
  _QWORD *v168; // [rsp+48h] [rbp-C8h]
  __m128i *v169; // [rsp+48h] [rbp-C8h]
  unsigned int v170; // [rsp+48h] [rbp-C8h]
  __m128i *v171; // [rsp+48h] [rbp-C8h]
  __int64 v172[4]; // [rsp+60h] [rbp-B0h] BYREF
  _OWORD v173[2]; // [rsp+80h] [rbp-90h] BYREF
  __int64 v174; // [rsp+A0h] [rbp-70h]
  void *ptr; // [rsp+A8h] [rbp-68h]
  __int64 v176; // [rsp+B0h] [rbp-60h]
  int v177; // [rsp+B8h] [rbp-58h]
  __int128 v178; // [rsp+C0h] [rbp-50h]
  int v179; // [rsp+D0h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 4376);
  if ( v4 && *(_DWORD *)(v4 - 4) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v173, "Cannot translate sat solver at non-base level");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v173);
    sub_233E40((__int64)v173);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v174 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v173[0] = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(unsigned __int64)a2);
  v173[1] = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  ptr = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v176 = 8;
  v177 = 0;
  v179 = 0;
  v178 = 0;
  if ( v5 != a2 )
  {
    sub_15DA640(DWORD2(v173[0]), v173[0], v7, v8, v9, v10, v152);
    sub_15D2280(*((_QWORD *)&v173[0] + 1), *(_QWORD *)&v173[0]);
  }
  v11 = a1 + 96;
  sub_11C7890(a1 + 96);
  v12 = sub_186B270(0x1290u);
  sub_6A5370(v12, a2, a3);
  v13 = *(const void **)(a1 + 624);
  if ( v13
    && (v14 = (const __m128i *)__dynamic_cast(
                                 v13,
                                 (const struct __class_type_info *)&`typeinfo for'sat::extension,
                                 (const struct __class_type_info *)&`typeinfo for'euf::solver,
                                 0)) != nullptr )
  {
    v15 = sub_7868E0((int)v12 + 4544, a2, (int)a1 + 4360, (int)v12 + 96, (int)v12 + 4648, (int)v12 + 4504, 1);
    v14[139].m128i_i64[1] = a2;
    v14[140].m128i_i64[0] = v15;
    sub_11CB970(v12 + 96, v11, 0);
    *(const __m128i *)((char *)&v14[139] + 8) = _mm_loadu_si128(v14 + 9);
  }
  else
  {
    sub_11CB970(v12 + 96, v11, 0);
  }
  v16 = *(__int64 **)(a1 + 4456);
  v17 = &v16[2 * *(unsigned int *)(a1 + 4464)];
  if ( v16 != v17 )
  {
    while ( (unsigned __int64)*v16 <= 1 )
    {
      v16 += 2;
      if ( v17 == v16 )
        goto LABEL_59;
    }
    if ( v17 != v16 )
    {
      v18 = *v16;
      while ( 1 )
      {
        if ( *(_QWORD *)&v173[0] == *((_QWORD *)&v173[0] + 1) )
        {
          v19 = v16[1];
        }
        else
        {
          v18 = sub_15CFF50(v173, v18);
          v19 = v16[1];
          if ( *(_QWORD *)&v173[0] != *((_QWORD *)&v173[0] + 1) )
            v19 = sub_15CFF50(v173, v16[1]);
        }
        v20 = *(_QWORD *)(v12 + 4448);
        v21 = v20 ? *(_DWORD *)(v20 - 4) : 0;
        v156 = v21;
        v163 = *(_QWORD **)(v12 + 4432);
        v167 = sub_180C100(v163 + 2, 24);
        *(_QWORD *)v167 = off_1C52DE0;
        v22 = (_QWORD *)*v163;
        *(_QWORD *)(v167 + 8) = v12 + 4440;
        *(_DWORD *)(v167 + 16) = v156;
        if ( v22 )
        {
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
          {
            v112 = (3 * v23 + 1) >> 1;
            v113 = 8 * v112 + 8;
            if ( 8 * v23 + 8 >= (unsigned int)v113 || v23 >= v112 )
            {
              v150 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v172, "Overflow encountered when expanding vector");
              *v150 = (char *)off_1C63128;
              sub_2333C0(v150 + 1, v172);
              sub_233E40((__int64)v172);
              __cxa_throw(v150, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v159 = (3 * v23 + 1) >> 1;
            v114 = (unsigned int *)sub_186B300(v22 - 1, v113);
            v22 = v114 + 2;
            *v163 = v114 + 2;
            v115 = v114[1];
            *v114 = v159;
            LODWORD(v114) = v115;
            v26 = &v22[v115];
            v25 = (_DWORD)v114 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v22[v24];
          }
        }
        else
        {
          v144 = (_QWORD *)sub_186B270(0x18u);
          v22 = v144 + 1;
          *v144 = 2;
          v25 = 1;
          *v163 = v22;
          v26 = v22;
        }
        *v26 = v167;
        v27 = *(_QWORD **)(v12 + 4432);
        *((_DWORD *)v22 - 1) = v25;
        v164 = v27;
        v28 = (_QWORD *)sub_180C100(v27 + 2, 24);
        v28[2] = v18;
        v168 = v28;
        v29 = (_QWORD *)*v164;
        *v28 = off_1C52E08;
        v28[1] = v12 + 4456;
        if ( v29 )
        {
          v30 = *((_DWORD *)v29 - 1);
          if ( v30 == *((_DWORD *)v29 - 2) )
          {
            v108 = (3 * v30 + 1) >> 1;
            v109 = 8 * v108 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v109 || v30 >= v108 )
            {
              v151 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v172, "Overflow encountered when expanding vector");
              *v151 = (char *)off_1C63128;
              sub_2333C0(v151 + 1, v172);
              sub_233E40((__int64)v172);
              __cxa_throw(v151, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v158 = (3 * v30 + 1) >> 1;
            v110 = (unsigned int *)sub_186B300(v29 - 1, v109);
            v29 = v110 + 2;
            *v164 = v110 + 2;
            v111 = v110[1];
            *v110 = v158;
            LODWORD(v110) = v111;
            v33 = &v29[v111];
            v32 = (_DWORD)v110 + 1;
          }
          else
          {
            v31 = v30;
            v32 = v30 + 1;
            v33 = &v29[v31];
          }
        }
        else
        {
          v143 = (_QWORD *)sub_186B270(0x18u);
          v29 = v143 + 1;
          *v143 = 2;
          v32 = 1;
          *v164 = v29;
          v33 = v29;
        }
        *v33 = v168;
        *((_DWORD *)v29 - 1) = v32;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v34 = *(_DWORD **)(v12 + 4448);
        if ( v34 )
          break;
        v142 = (_QWORD *)sub_186B270(0x18u);
        v34 = v142 + 1;
        v142[1] = v18;
        *v142 = 0x100000002LL;
        v38 = 1;
        *(_QWORD *)(v12 + 4448) = v34;
        if ( v19 )
          goto LABEL_32;
LABEL_34:
        *(_QWORD *)&v34[2 * v38] = v19;
        *(v34 - 1) = v38 + 1;
        v40 = *(unsigned int *)(v12 + 4464);
        v41 = *(_DWORD *)(v12 + 4472);
        v165 = 2 * v40;
        if ( 3 * (int)v40 < (unsigned int)(4 * (v41 + *(_DWORD *)(v12 + 4468))) )
        {
          v116 = (__m128i *)sub_186B270(16LL * v165);
          v43 = 16LL * v165;
          v169 = v116;
          v117 = v116;
          v118 = &v116[(unsigned __int64)v43 / 0x10];
          if ( v165 )
          {
            if ( ((16 * (_BYTE)v165) & 0x10) == 0 || (*v116 = 0, ++v116, v118 != v116) )
            {
              do
              {
                *v116 = 0;
                v116 += 2;
                v116[-1] = 0;
              }
              while ( v118 != v116 );
              v169 = v117;
            }
          }
          v119 = *(const __m128i **)(v12 + 4456);
          v120 = (__m128i *)&v119[*(unsigned int *)(v12 + 4464)];
          v42 = v165 - 1;
          m128i_i64 = (__int64 *)v118;
          if ( v119 != v120 )
          {
            do
            {
              while ( v119->m128i_i64[0] <= 1uLL )
              {
                if ( v120 == ++v119 )
                  goto LABEL_147;
              }
              v121 = v169;
              v122 = 16LL * (*(_DWORD *)(v119->m128i_i64[0] + 12) & v42);
              v123 = &v169[(unsigned __int64)v122 / 0x10];
              if ( v43 == v122 )
              {
LABEL_151:
                v121 = v169;
                if ( v169 == v123 )
                {
LABEL_160:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v124 = v169;
                while ( v124->m128i_i64[0] )
                {
                  if ( v123 == ++v124 )
                    goto LABEL_160;
                }
              }
              else
              {
                v124 = &v169[(unsigned __int64)v122 / 0x10];
                while ( v124->m128i_i64[0] )
                {
                  if ( v118 == ++v124 )
                    goto LABEL_151;
                }
              }
              v125 = _mm_loadu_si128(v119++);
              v169 = v121;
              *v124 = v125;
            }
            while ( v120 != v119 );
LABEL_147:
            v120 = *(__m128i **)(v12 + 4456);
          }
          if ( v120 )
          {
            v153 = (__int64 *)v118;
            sub_186B220(v120);
            m128i_i64 = v153;
            v43 = 16LL * v165;
            v42 = v165 - 1;
          }
          *(_DWORD *)(v12 + 4472) = 0;
          *(_QWORD *)(v12 + 4456) = v169;
          *(_DWORD *)(v12 + 4464) = v165;
          v41 = 0;
        }
        else
        {
          v42 = v40 - 1;
          v43 = 16 * v40;
          v169 = *(__m128i **)(v12 + 4456);
          m128i_i64 = v169[(unsigned __int64)v43 / 0x10].m128i_i64;
        }
        v45 = *(_DWORD *)(v18 + 12);
        v46 = 16LL * (v45 & v42);
        v47 = v169[(unsigned __int64)v46 / 0x10].m128i_i64;
        if ( v46 == v43 )
        {
          v49 = nullptr;
          v51 = (__int64 *)v169;
LABEL_45:
          if ( v47 == v51 )
          {
LABEL_53:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v52 = v51;
          while ( 1 )
          {
            while ( 1 )
            {
              v53 = *v52;
              if ( (unsigned __int64)*v52 <= 1 )
                break;
              if ( *(_DWORD *)(v53 + 12) == v45 && v53 == v18 )
              {
                *v52 = v18;
                v52[1] = v19;
                goto LABEL_54;
              }
              v52 += 2;
              if ( v47 == v52 )
                goto LABEL_53;
            }
            if ( !v53 )
              break;
            v49 = v52;
            v52 += 2;
            if ( v47 == v52 )
              goto LABEL_53;
          }
          if ( v49 )
            goto LABEL_158;
          v49 = v52;
        }
        else
        {
          v48 = v169[(unsigned __int64)v46 / 0x10].m128i_i64;
          v49 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v50 = *v48;
              if ( (unsigned __int64)*v48 <= 1 )
                break;
              if ( *(_DWORD *)(v50 + 12) == v45 && v50 == v18 )
              {
                *v48 = v18;
                v48[1] = v19;
                goto LABEL_54;
              }
              v48 += 2;
              if ( v48 == m128i_i64 )
                goto LABEL_44;
            }
            if ( !v50 )
              break;
            v49 = v48;
            v48 += 2;
            if ( v48 == m128i_i64 )
            {
LABEL_44:
              v51 = (__int64 *)v169;
              goto LABEL_45;
            }
          }
          if ( v49 )
LABEL_158:
            *(_DWORD *)(v12 + 4472) = v41 - 1;
          else
            v49 = v48;
        }
        *v49 = v18;
        v49[1] = v19;
        ++*(_DWORD *)(v12 + 4468);
LABEL_54:
        v54 = v16 + 2;
        if ( v17 != v16 + 2 )
        {
          while ( 1 )
          {
            v18 = *v54;
            v16 = v54;
            if ( (unsigned __int64)*v54 > 1 )
              break;
            v54 += 2;
            if ( v17 == v54 )
              goto LABEL_59;
          }
          if ( v17 != v54 )
            continue;
        }
        goto LABEL_59;
      }
      v35 = *(v34 - 1);
      v36 = *(v34 - 2);
      if ( v35 == v36 )
      {
        v170 = (3 * v35 + 1) >> 1;
        v105 = 8 * v170 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v105 || v35 >= (3 * v35 + 1) >> 1 )
        {
          v147 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v172, "Overflow encountered when expanding vector");
          *v147 = (char *)off_1C63128;
          sub_2333C0(v147 + 1, v172);
          sub_233E40((__int64)v172);
          __cxa_throw(v147, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (unsigned int *)sub_186B300(v34 - 2, v105);
        v107 = v106[1];
        v34 = v106 + 2;
        *(_QWORD *)(v12 + 4448) = v106 + 2;
        *v106 = v170;
        LODWORD(v106) = v107;
        v39 = (__int64 *)&v34[2 * v107];
        v36 = v170;
        v38 = (_DWORD)v106 + 1;
      }
      else
      {
        v37 = v35;
        v38 = v35 + 1;
        v39 = (__int64 *)&v34[2 * v37];
      }
      *v39 = v18;
      *(v34 - 1) = v38;
      if ( v19 )
      {
LABEL_32:
        ++*(_DWORD *)(v19 + 8);
        v38 = *(v34 - 1);
        v36 = *(v34 - 2);
      }
      if ( v38 == v36 )
      {
        v102 = (3 * v38 + 1) >> 1;
        v103 = 8 * v102 + 8;
        if ( 8 * v38 + 8 >= (unsigned int)v103 || v38 >= v102 )
        {
          v148 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v172, "Overflow encountered when expanding vector");
          *v148 = (char *)off_1C63128;
          sub_2333C0(v148 + 1, v172);
          sub_233E40((__int64)v172);
          __cxa_throw(v148, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v104 = (unsigned int *)sub_186B300(v34 - 2, v103);
        v34 = v104 + 2;
        *(_QWORD *)(v12 + 4448) = v104 + 2;
        *v104 = v102;
        v38 = v104[1];
      }
      goto LABEL_34;
    }
  }
LABEL_59:
  v55 = *(__int64 **)(a1 + 4576);
  if ( v55 )
  {
    v56 = &v55[*((unsigned int *)v55 - 1)];
    if ( v56 != v55 )
    {
      while ( 1 )
      {
        v60 = *v55;
        if ( *(_QWORD *)&v173[0] != *((_QWORD *)&v173[0] + 1) )
          v60 = sub_15CFF50(v173, *v55);
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        v61 = *(_QWORD **)(v12 + 4576);
        if ( !v61 )
          break;
        v62 = *((_DWORD *)v61 - 1);
        if ( v62 == *((_DWORD *)v61 - 2) )
        {
          v63 = (3 * v62 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
          {
            v149 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v172, "Overflow encountered when expanding vector");
            *v149 = (char *)off_1C63128;
            sub_2333C0(v149 + 1, v172);
            sub_233E40((__int64)v172);
            __cxa_throw(v149, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v61 - 1, v64);
          v66 = v65[1];
          *v65 = v63;
          ++v55;
          *(_QWORD *)(v12 + 4576) = v65 + 2;
          *(_QWORD *)&v65[2 * v66 + 2] = v60;
          v65[1] = v66 + 1;
          if ( v56 == v55 )
            goto LABEL_73;
        }
        else
        {
          v57 = v62;
          v58 = v62 + 1;
          v59 = &v61[v57];
LABEL_63:
          ++v55;
          *v59 = v60;
          *((_DWORD *)v61 - 1) = v58;
          if ( v56 == v55 )
            goto LABEL_73;
        }
      }
      v141 = (_QWORD *)sub_186B270(0x18u);
      v61 = v141 + 1;
      *v141 = 2;
      v58 = 1;
      *(_QWORD *)(v12 + 4576) = v61;
      v59 = v61;
      goto LABEL_63;
    }
  }
LABEL_73:
  v67 = *(_QWORD *)(a1 + 4664);
  if ( v67 )
  {
    for ( i = v67 + 16LL * *(unsigned int *)(v67 - 4); i != v67; v67 += 16 )
    {
      v69 = *(_DWORD *)(v67 + 8);
      v70 = *(_QWORD *)v67;
      if ( *(_QWORD *)&v173[0] != *((_QWORD *)&v173[0] + 1) )
        v70 = sub_15CFF50(v173, v70);
      sub_16238E0(v12 + 4648, v70, v69);
    }
  }
  v71 = *(__int64 **)(a1 + 4640);
  if ( v71 )
  {
    v72 = &v71[*((unsigned int *)v71 - 1)];
    if ( v72 != v71 )
    {
      while ( 1 )
      {
        v76 = *v71;
        if ( *(_QWORD *)&v173[0] != *((_QWORD *)&v173[0] + 1) )
          v76 = sub_15CFF50(v173, *v71);
        if ( v76 )
          ++*(_DWORD *)(v76 + 8);
        v77 = *(_QWORD **)(v12 + 4640);
        if ( !v77 )
          break;
        v78 = *((_DWORD *)v77 - 1);
        if ( v78 == *((_DWORD *)v77 - 2) )
        {
          v79 = (3 * v78 + 1) >> 1;
          v80 = 8 * v79 + 8;
          if ( 8 * v78 + 8 >= (unsigned int)v80 || v78 >= v79 )
          {
            v145 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v172, "Overflow encountered when expanding vector");
            *v145 = (char *)off_1C63128;
            sub_2333C0(v145 + 1, v172);
            sub_233E40((__int64)v172);
            __cxa_throw(v145, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v81 = (unsigned int *)sub_186B300(v77 - 1, v80);
          v82 = v81[1];
          *v81 = v79;
          ++v71;
          *(_QWORD *)(v12 + 4640) = v81 + 2;
          *(_QWORD *)&v81[2 * v82 + 2] = v76;
          v81[1] = v82 + 1;
          if ( v72 == v71 )
            goto LABEL_92;
        }
        else
        {
          v73 = v78;
          v74 = v78 + 1;
          v75 = &v77[v73];
LABEL_82:
          ++v71;
          *v75 = v76;
          *((_DWORD *)v77 - 1) = v74;
          if ( v72 == v71 )
            goto LABEL_92;
        }
      }
      v140 = (_QWORD *)sub_186B270(0x18u);
      v77 = v140 + 1;
      *v140 = 2;
      v74 = 1;
      *(_QWORD *)(v12 + 4640) = v77;
      v75 = v77;
      goto LABEL_82;
    }
  }
LABEL_92:
  v83 = *(__int64 **)(a1 + 4456);
  v84 = &v83[2 * *(unsigned int *)(a1 + 4464)];
  if ( v83 != v84 )
  {
    while ( (unsigned __int64)*v83 <= 1 )
    {
      v83 += 2;
      if ( v84 == v83 )
        goto LABEL_120;
    }
    while ( v84 != v83 )
    {
      v166 = v83[1];
      if ( *(_QWORD *)&v173[0] == *((_QWORD *)&v173[0] + 1) )
      {
        v85 = *v83;
      }
      else
      {
        v166 = sub_15CFF50(v173, v83[1]);
        v85 = *v83;
        if ( *(_QWORD *)&v173[0] != *((_QWORD *)&v173[0] + 1) )
          v85 = sub_15CFF50(v173, *v83);
      }
      v86 = *(unsigned int *)(v12 + 4464);
      if ( 3 * (int)v86 >= (unsigned int)(4 * (*(_DWORD *)(v12 + 4468) + *(_DWORD *)(v12 + 4472))) )
      {
        v87 = v86 - 1;
        v88 = 16 * v86;
        v89 = (__int64 *)(*(_QWORD *)(v12 + 4456) + v88);
        v90 = *(__int64 **)(v12 + 4456);
        goto LABEL_102;
      }
      v154 = v85;
      v157 = 2 * v86;
      v160 = 16LL * (unsigned int)(2 * v86);
      v127 = sub_186B270(v160);
      v128 = v157;
      v88 = v160;
      v129 = (__m128i *)v127;
      v130 = (__m128i *)v127;
      v171 = (__m128i *)v127;
      v85 = v154;
      v131 = (__m128i *)(v160 + v127);
      if ( v157 )
      {
        if ( (((_BYTE)v131 - (_BYTE)v129) & 0x10) == 0 )
        {
          v132 = v129;
          do
          {
LABEL_176:
            v130 += 2;
            v130[-2] = 0;
            v130[-1] = 0;
          }
          while ( v131 != v130 );
          v171 = v132;
          goto LABEL_178;
        }
        v130 = v129 + 1;
        v132 = v129;
        *v129 = 0;
        if ( v131 != &v129[1] )
          goto LABEL_176;
      }
LABEL_178:
      v133 = *(const __m128i **)(v12 + 4456);
      v87 = v157 - 1;
      v89 = (__int64 *)v131;
      v134 = (__m128i *)&v133[*(unsigned int *)(v12 + 4464)];
      if ( v133 != v134 )
      {
        do
        {
          while ( v133->m128i_i64[0] <= 1uLL )
          {
            if ( v134 == ++v133 )
              goto LABEL_187;
          }
          v135 = v171;
          v136 = 16LL * (*(_DWORD *)(v133->m128i_i64[0] + 12) & v87);
          v137 = &v171[(unsigned __int64)v136 / 0x10];
          if ( v160 == v136 )
          {
LABEL_191:
            v135 = v171;
            if ( v171 == v137 )
            {
LABEL_197:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v138 = v171;
            while ( v138->m128i_i64[0] )
            {
              if ( v137 == ++v138 )
                goto LABEL_197;
            }
          }
          else
          {
            v138 = &v171[(unsigned __int64)v136 / 0x10];
            while ( v138->m128i_i64[0] )
            {
              if ( v131 == ++v138 )
                goto LABEL_191;
            }
          }
          v139 = _mm_loadu_si128(v133++);
          v171 = v135;
          *v138 = v139;
        }
        while ( v134 != v133 );
LABEL_187:
        v134 = *(__m128i **)(v12 + 4456);
      }
      if ( v134 )
      {
        v155 = v160;
        v161 = v85;
        sub_186B220(v134);
        v128 = v157;
        v88 = v155;
        v87 = v157 - 1;
        v85 = v161;
      }
      *(_DWORD *)(v12 + 4464) = v128;
      *(_DWORD *)(v12 + 4472) = 0;
      *(_QWORD *)(v12 + 4456) = v171;
      v90 = (__int64 *)v171;
LABEL_102:
      v91 = *(_DWORD *)(v85 + 12);
      v92 = 16LL * (v91 & v87);
      v93 = &v90[(unsigned __int64)v92 / 8];
      if ( v92 == v88 )
      {
        v95 = nullptr;
        v98 = v90;
LABEL_111:
        if ( v93 == v98 )
        {
LABEL_119:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v99 = v98;
        while ( 1 )
        {
          while ( 1 )
          {
            v100 = *v99;
            if ( (unsigned __int64)*v99 > 1 )
              break;
            if ( !v100 )
            {
              v94 = v99;
              goto LABEL_165;
            }
            v95 = v99;
            v99 += 2;
            if ( v93 == v99 )
              goto LABEL_119;
          }
          if ( *(_DWORD *)(v100 + 12) == v91 && v85 == v100 )
            break;
          v99 += 2;
          if ( v93 == v99 )
            goto LABEL_119;
        }
        v94 = v99;
LABEL_199:
        *v94 = v85;
        v94[1] = v166;
      }
      else
      {
        v94 = &v90[(unsigned __int64)v92 / 8];
        v95 = nullptr;
        v96 = v90;
        while ( 1 )
        {
          while ( 1 )
          {
            v97 = *v94;
            if ( (unsigned __int64)*v94 <= 1 )
              break;
            if ( *(_DWORD *)(v97 + 12) == v91 && v85 == v97 )
              goto LABEL_199;
            v94 += 2;
            if ( v94 == v89 )
            {
LABEL_110:
              v98 = v96;
              goto LABEL_111;
            }
          }
          if ( !v97 )
            break;
          v95 = v94;
          v94 += 2;
          if ( v94 == v89 )
            goto LABEL_110;
        }
LABEL_165:
        if ( v95 )
          --*(_DWORD *)(v12 + 4472);
        else
          v95 = v94;
        *v95 = v85;
        v95[1] = v166;
        ++*(_DWORD *)(v12 + 4468);
      }
      v126 = v83 + 2;
      if ( v84 == v83 + 2 )
        break;
      while ( 1 )
      {
        v83 = v126;
        if ( (unsigned __int64)*v126 > 1 )
          break;
        v126 += 2;
        if ( v84 == v126 )
          goto LABEL_120;
      }
    }
  }
LABEL_120:
  *(_BYTE *)(v12 + 4744) = *(_BYTE *)(a1 + 4744);
  sub_15CE760(v173);
  return v12;
}

