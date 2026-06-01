__int64 __fastcall sub_522E10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        const __m128i **a5,
        unsigned int *a6,
        __m128 a7,
        char *a8,
        __int64 a9)
{
  char **v9; // r15
  char **exception; // rbx
  const __m128i *v11; // r12
  unsigned int v12; // eax
  unsigned int v14; // r14d
  __int64 v15; // rax
  const __m128i *v16; // rsi
  size_t v17; // rdx
  __m128i *v18; // rax
  __int32 *v19; // r13
  int v20; // r9d
  __int64 v21; // r14
  __int64 v22; // r11
  int v23; // r15d
  __int64 v24; // rcx
  _DWORD *v25; // rbx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rsi
  _DWORD *v29; // rax
  _DWORD *v30; // rcx
  int v31; // edx
  int v32; // ebx
  unsigned int v33; // r14d
  _DWORD *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rax
  _DWORD *v37; // rcx
  _DWORD *i; // rax
  int v39; // edx
  int *v40; // rax
  unsigned int *v41; // rsi
  unsigned int v42; // r13d
  __int64 v43; // rax
  unsigned int *v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rdx
  const __m128i *v47; // rax
  unsigned int v48; // r14d
  __int64 v49; // r15
  __int32 v50; // eax
  __int32 v51; // r13d
  int v52; // eax
  __int64 v53; // rcx
  __m128 *v54; // rbx
  __m128i *v55; // rdi
  __int64 v56; // rax
  __m128i *v57; // rsi
  __m128 *v58; // rax
  __m128 *v59; // rcx
  __int32 v60; // edx
  __m128i *v61; // rbx
  _QWORD *v62; // rax
  int *v63; // r13
  unsigned int v64; // r14d
  __int64 v65; // r15
  int v66; // ebx
  __int64 v67; // rsi
  __int64 v68; // rdi
  int *v69; // rdx
  size_t v70; // r8
  int *v71; // rcx
  int *k; // rax
  int v73; // r9d
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // eax
  _QWORD *v77; // rax
  int *v78; // rdx
  unsigned int v79; // eax
  int *v80; // rbx
  int v81; // edi
  __int8 *v82; // rcx
  __int64 v83; // rdx
  unsigned int v84; // r15d
  unsigned int v85; // ecx
  size_t v86; // rsi
  unsigned int *v87; // rax
  _DWORD *v88; // rax
  int v89; // edx
  int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // r8d
  _QWORD *v93; // rdx
  _QWORD *v94; // r10
  _DWORD *v95; // r14
  __int64 v96; // rdx
  __int64 v97; // rsi
  int v98; // edi
  __int64 v99; // rdx
  __int64 v100; // rsi
  unsigned int v101; // eax
  __int64 result; // rax
  _QWORD *v103; // rax
  int *v104; // rax
  int v105; // edi
  _DWORD *v106; // rax
  int v107; // edx
  unsigned int v108; // r9d
  int *v109; // rax
  int *v110; // rdi
  int v111; // esi
  unsigned int v112; // ecx
  size_t v113; // rsi
  unsigned int *v114; // rax
  __m128i *v115; // rbx
  __int64 v116; // rdx
  __int32 v117; // esi
  __int64 v118; // rax
  __m128i *v119; // rdi
  __m128i *v120; // rcx
  __m128i *j; // rax
  __int32 v122; // edx
  __int32 v123; // edx
  __int32 v124; // edx
  __m128 *v125; // rax
  unsigned int v126; // r8d
  __m128 *v127; // r11
  __m128 *v128; // rdx
  const __m128i *v129; // r9
  const __m128i *v130; // r15
  __int64 v131; // rdx
  __m128 *v132; // rsi
  __m128i *v133; // rdi
  __m128 *v134; // rdx
  int v135; // ecx
  char *v136; // rax
  unsigned int v137; // r9d
  char *v138; // r10
  char *v139; // rdx
  int *v140; // r14
  int *m; // rax
  __int64 v142; // rdx
  char *v143; // rsi
  int *v144; // rdi
  char *v145; // rdx
  __int64 v146; // rsi
  unsigned int v147; // edx
  unsigned int v148; // [rsp+8h] [rbp-F8h]
  __int64 v149; // [rsp+10h] [rbp-F0h]
  unsigned int v150; // [rsp+10h] [rbp-F0h]
  __m128 *v151; // [rsp+10h] [rbp-F0h]
  unsigned int v152; // [rsp+10h] [rbp-F0h]
  int *v155; // [rsp+20h] [rbp-E0h]
  int *v156; // [rsp+20h] [rbp-E0h]
  __int64 v157; // [rsp+28h] [rbp-D8h]
  unsigned int v158; // [rsp+28h] [rbp-D8h]
  char *v159; // [rsp+28h] [rbp-D8h]
  int v161; // [rsp+30h] [rbp-D0h]
  size_t v162; // [rsp+30h] [rbp-D0h]
  int v164; // [rsp+40h] [rbp-C0h]
  int v165; // [rsp+40h] [rbp-C0h]
  size_t v166; // [rsp+40h] [rbp-C0h]
  __int64 v167; // [rsp+40h] [rbp-C0h]
  unsigned int v168; // [rsp+40h] [rbp-C0h]
  size_t v169; // [rsp+40h] [rbp-C0h]
  __int64 *v170; // [rsp+48h] [rbp-B8h]
  __int64 v171; // [rsp+48h] [rbp-B8h]
  size_t v172; // [rsp+48h] [rbp-B8h]
  int v173; // [rsp+48h] [rbp-B8h]
  int *v174; // [rsp+50h] [rbp-B0h]
  __int64 v175; // [rsp+50h] [rbp-B0h]
  __m128i *v176; // [rsp+58h] [rbp-A8h]
  unsigned int ptr; // [rsp+60h] [rbp-A0h]
  int ptra; // [rsp+60h] [rbp-A0h]
  unsigned int ptrb; // [rsp+60h] [rbp-A0h]
  _QWORD *v180; // [rsp+68h] [rbp-98h]
  int v182; // [rsp+78h] [rbp-88h]
  unsigned int *v183; // [rsp+78h] [rbp-88h]
  unsigned int v184; // [rsp+80h] [rbp-80h]
  __int32 v185; // [rsp+80h] [rbp-80h]
  unsigned int v186; // [rsp+80h] [rbp-80h]
  unsigned int v187; // [rsp+88h] [rbp-78h]
  __int32 v188; // [rsp+88h] [rbp-78h]
  __int64 v189; // [rsp+88h] [rbp-78h]
  __m128i *v190; // [rsp+88h] [rbp-78h]
  int *m128i_i32; // [rsp+88h] [rbp-78h]
  __int64 n; // [rsp+88h] [rbp-78h]
  unsigned int v193; // [rsp+98h] [rbp-68h] BYREF
  int v194; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v195; // [rsp+A0h] [rbp-60h] BYREF
  int *v196; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v197[10]; // [rsp+B0h] [rbp-50h] BYREF

  v11 = *a5;
  if ( *a5 )
  {
    v12 = v11[-1].m128i_u32[3];
    v195 = 0;
    ptr = v12;
    v14 = v12;
    v193 = a4;
    if ( a4 == -1 )
    {
      v184 = 0;
      v170 = &v195;
    }
    else
    {
      v170 = (__int64 *)(*(_QWORD *)(a1 + 48) + 8LL * a4);
      if ( *v170 )
        v184 = *(_DWORD *)(*v170 - 4);
      else
        v184 = 0;
    }
    v187 = v11[-1].m128i_u32[2];
    v15 = sub_186B270(24LL * v187 + 8);
    v16 = *a5;
    v11 = (const __m128i *)(v15 + 8);
    a7.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v187), _mm_cvtsi32_si128(v14)).m128i_u64[0];
    *(_QWORD *)v15 = a7.m128_u64[0];
    if ( v16 )
    {
      v17 = 24LL * v16[-1].m128i_u32[3];
      if ( v17 <= 0x18 )
      {
        if ( v17 == 24 )
        {
          a7 = (__m128)_mm_loadu_si128(v16);
          *(__m128 *)(v15 + 8) = a7;
          *(_QWORD *)(v15 + 24) = v16[1].m128i_i64[0];
        }
      }
      else
      {
        memmove((void *)(v15 + 8), v16, v17);
      }
    }
  }
  else
  {
    v193 = a4;
    v195 = 0;
    if ( a4 == -1 )
    {
      v184 = 0;
      ptr = 0;
      v170 = &v195;
    }
    else
    {
      v170 = (__int64 *)(*(_QWORD *)(a1 + 48) + 8LL * a4);
      if ( *v170 )
      {
        ptr = 0;
        v184 = *(_DWORD *)(*v170 - 4);
      }
      else
      {
        v184 = 0;
        ptr = 0;
      }
    }
  }
  v18 = (__m128i *)sub_186B270(0x80u);
  v18->m128i_i64[0] = 0;
  v18[1].m128i_i64[0] = 0;
  v18[2].m128i_i64[0] = 0;
  v18[3].m128i_i64[0] = 0;
  v18[4].m128i_i64[0] = 0;
  v18[5].m128i_i64[0] = 0;
  v18[6].m128i_i64[0] = 0;
  v18[7].m128i_i64[0] = 0;
  v176 = v18;
  v180 = (_QWORD *)sub_186B270(0x60u);
  *v180 = 0;
  *(_QWORD *)((char *)v180 + 12) = 0;
  v180[3] = 0;
  *(_QWORD *)((char *)v180 + 36) = 0;
  v180[6] = 0;
  *(_QWORD *)((char *)v180 + 60) = 0;
  v180[9] = 0;
  *(_QWORD *)((char *)v180 + 84) = 0;
  if ( !ptr )
  {
    v194 = 0;
    v32 = 7;
    v189 = 96;
    if ( !v184 )
    {
      v183 = nullptr;
      v174 = nullptr;
      goto LABEL_66;
    }
    goto LABEL_25;
  }
  v19 = &v11->m128i_i32[2];
  v20 = 0;
  v21 = 8;
  v182 = 0;
  v22 = (__int64)&v11->m128i_i64[3 * ptr + 1];
  do
  {
    while ( *v19 )
    {
LABEL_10:
      v19 += 6;
      if ( v19 == (__int32 *)v22 )
        goto LABEL_23;
    }
    v188 = v19[2];
    if ( 3 * (int)v21 < (unsigned int)(4 * (v20 + v182)) )
    {
      v149 = v22;
      v166 = 12LL * (unsigned int)(2 * v21);
      v91 = sub_186B270(v166);
      v92 = 2 * v21;
      v24 = v166;
      v22 = v149;
      if ( 2 * (_DWORD)v21 )
      {
        v93 = (_QWORD *)v91;
        do
        {
          *v93 = 0;
          v93 += 3;
          *(_QWORD *)((char *)v93 - 12) = 0;
        }
        while ( v93 != (_QWORD *)(v91 + 24 * (v21 & 0x7FFFFFFE)) );
        v23 = v92 - 1;
        v25 = (_DWORD *)(v91 + v166);
        v94 = (_QWORD *)((char *)v180 + 12 * v21);
      }
      else
      {
        v25 = (_DWORD *)v91;
        v23 = -1;
        v94 = (_QWORD *)((char *)v180 + 12 * v21);
        if ( v94 == v180 )
        {
LABEL_114:
          if ( v180 )
          {
            v150 = v92;
            v157 = v22;
            v167 = v91;
            v175 = v24;
            sub_186B220(v180);
            v92 = v150;
            v22 = v157;
            v91 = v167;
            v24 = v175;
          }
          v180 = (_QWORD *)v91;
          v20 = 0;
          v21 = v92;
          v26 = (_QWORD *)v91;
          goto LABEL_14;
        }
      }
      v95 = v180;
      do
      {
        while ( v95[1] != 2 )
        {
          v95 += 3;
          if ( v95 == (_DWORD *)v94 )
            goto LABEL_114;
        }
        v96 = 12LL * (*v95 & (unsigned int)v23);
        v97 = v91 + v96;
        if ( v166 == v96 )
        {
LABEL_234:
          if ( v91 == v97 )
          {
LABEL_270:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v98 = v188;
          v99 = v91;
          while ( *(_DWORD *)(v99 + 4) )
          {
            v99 += 12;
            if ( v97 == v99 )
              goto LABEL_270;
          }
        }
        else
        {
          v98 = v188;
          v99 = v91 + v96;
          while ( *(_DWORD *)(v99 + 4) )
          {
            v99 += 12;
            if ( (_DWORD *)v99 == v25 )
              goto LABEL_234;
          }
        }
        v100 = *(_QWORD *)v95;
        v188 = v98;
        v95 += 3;
        *(_QWORD *)v99 = v100;
        *(_DWORD *)(v99 + 8) = *(v95 - 1);
      }
      while ( v95 != (_DWORD *)v94 );
      goto LABEL_114;
    }
    v23 = v21 - 1;
    v24 = 12LL * (unsigned int)v21;
    v25 = (_DWORD *)((char *)v180 + v24);
    v26 = v180;
LABEL_14:
    v27 = 12LL * (v188 & (unsigned int)v23);
    v28 = (_QWORD *)((char *)v26 + v27);
    if ( v24 == v27 )
    {
      v30 = nullptr;
LABEL_89:
      v88 = v180;
      if ( v28 == v180 )
      {
LABEL_218:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v89 = v88[1];
        if ( v89 == 2 )
        {
          if ( v188 == *v88 && v188 == v88[2] )
          {
            v88[2] = v188;
            v88[1] = 2;
            goto LABEL_10;
          }
        }
        else
        {
          if ( !v89 )
          {
            if ( v30 )
              --v20;
            else
              v30 = v88;
            v90 = v188;
            goto LABEL_101;
          }
          v30 = v88;
        }
        v88 += 3;
        if ( v28 == (_QWORD *)v88 )
          goto LABEL_218;
      }
    }
    v29 = v28;
    v30 = nullptr;
    while ( 1 )
    {
      v31 = v29[1];
      if ( v31 == 2 )
        break;
      if ( !v31 )
      {
        if ( v30 )
          --v20;
        else
          v30 = v29;
        v90 = v188;
LABEL_101:
        v30[2] = v90;
        v30[1] = 2;
        *v30 = v90;
        ++v182;
        goto LABEL_10;
      }
      v30 = v29;
LABEL_18:
      v29 += 3;
      if ( v25 == v29 )
        goto LABEL_89;
    }
    if ( v188 != *v29 || v188 != v29[2] )
      goto LABEL_18;
    v19 += 6;
    v29[2] = v188;
    v29[1] = 2;
  }
  while ( v19 != (__int32 *)v22 );
LABEL_23:
  v194 = 0;
  if ( !v184 )
  {
    v183 = nullptr;
    v174 = nullptr;
    goto LABEL_45;
  }
  v32 = v21 - 1;
  v189 = 12 * v21;
LABEL_25:
  v174 = nullptr;
  v33 = 0;
  v183 = nullptr;
  v34 = (_DWORD *)((char *)v180 + v189);
  while ( 2 )
  {
    v35 = v189;
    v36 = 12LL * (v33 & v32);
    v37 = (_DWORD *)((char *)v180 + v36);
    if ( v36 != v189 )
    {
      for ( i = (_DWORD *)((char *)v180 + v36); v34 != i; i += 3 )
      {
        v39 = i[1];
        if ( v39 == 2 )
        {
          if ( v33 == *i && v33 == i[2] )
          {
LABEL_33:
            v40 = v174;
            v189 = v35;
            if ( !v174 )
              goto LABEL_137;
            goto LABEL_34;
          }
        }
        else if ( !v39 )
        {
LABEL_135:
          v189 = v35;
          goto LABEL_136;
        }
      }
    }
    v106 = v180;
    if ( v37 != (_DWORD *)v180 )
    {
      v35 = v189;
      while ( 1 )
      {
        v107 = v106[1];
        if ( v107 == 2 )
        {
          if ( v33 == *v106 && v33 == v106[2] )
            goto LABEL_33;
        }
        else if ( !v107 )
        {
          goto LABEL_135;
        }
        v106 += 3;
        if ( v37 == v106 )
          goto LABEL_135;
      }
    }
LABEL_136:
    v196 = v174;
    sub_51E370(&v196, (unsigned int *)&v194);
    v174 = v196;
    v40 = v196;
    if ( v196 )
    {
LABEL_34:
      v41 = v183;
      v42 = *(v40 - 1);
      if ( !v183 )
        goto LABEL_138;
    }
    else
    {
LABEL_137:
      v41 = v183;
      v42 = 0;
      if ( !v183 )
      {
LABEL_138:
        v103 = (_QWORD *)sub_186B270(0x10u);
        *v103 = 2;
        v44 = (unsigned int *)(v103 + 1);
        v183 = v44;
        goto LABEL_37;
      }
    }
    v43 = *(v41 - 1);
    if ( (_DWORD)v43 == *(v41 - 2) )
    {
      v112 = (unsigned int)(3 * v43 + 1) >> 1;
      v113 = 4 * v112 + 8;
      if ( 4 * (int)v43 + 8 >= (unsigned int)v113 || (unsigned int)v43 >= v112 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v197, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v197);
        sub_233E40((__int64)v197);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v168 = (unsigned int)(3 * v43 + 1) >> 1;
      v114 = (unsigned int *)sub_186B300(v183 - 2, v113);
      v183 = v114 + 2;
      *v114 = v168;
      v44 = &v114[v114[1] + 2];
    }
    else
    {
      v44 = &v41[v43];
    }
LABEL_37:
    *v44 = v42;
    v194 = ++v33;
    ++*(v183 - 1);
    if ( v33 < v184 )
      continue;
    break;
  }
  if ( v174 && (v45 = *(v174 - 1)) != 0 )
  {
    sub_51FB70(a1, a4, v45, v174, &v193, *a8, a9);
    v46 = v193;
    *a8 = 1;
    v170 = (__int64 *)(*(_QWORD *)(a1 + 48) + 8 * v46);
    if ( !ptr )
      goto LABEL_66;
    v47 = v11 + 1;
    do
    {
      if ( !v47[-1].m128i_i32[2] )
        v47->m128i_i32[0] -= v183[v47->m128i_u32[0]];
      v47 = (const __m128i *)((char *)v47 + 24);
    }
    while ( v47 != (const __m128i *)((char *)&v11[1] + 24 * ptr) );
  }
  else if ( !ptr )
  {
    goto LABEL_66;
  }
LABEL_45:
  v190 = (__m128i *)v11;
  v48 = 0;
  v49 = 8;
  v164 = 0;
  v161 = 0;
  while ( 2 )
  {
    v50 = v190->m128i_i32[2];
    if ( !v50 )
      goto LABEL_65;
    if ( v50 == 1 )
    {
      v115 = v190;
      v116 = 16LL * (unsigned int)v49;
      v117 = v190[1].m128i_i32[0];
      v118 = 16LL * (v117 & (unsigned int)(v49 - 1));
      v119 = &v176[(unsigned __int64)v118 / 0x10];
      v120 = &v176[(unsigned __int64)v116 / 0x10];
      if ( v118 != v116 )
      {
        for ( j = &v176[(unsigned __int64)v118 / 0x10]; v120 != j; ++j )
        {
          v122 = j->m128i_i32[1];
          if ( v122 == 2 )
          {
            if ( v117 == j->m128i_i32[0] && v117 == j->m128i_i32[2] )
            {
LABEL_176:
              v190 = v115;
              v185 = j->m128i_i32[3];
              goto LABEL_64;
            }
          }
          else if ( !v122 )
          {
LABEL_177:
            v190 = v115;
            goto LABEL_178;
          }
        }
      }
      j = v176;
      if ( v176 != v119 )
      {
        v115 = v190;
        while ( 1 )
        {
          v124 = j->m128i_i32[1];
          if ( v124 == 2 )
          {
            if ( v117 == j->m128i_i32[0] && v117 == j->m128i_i32[2] )
              goto LABEL_176;
          }
          else if ( !v124 )
          {
            goto LABEL_177;
          }
          if ( v119 == ++j )
            goto LABEL_177;
        }
      }
LABEL_178:
      if ( *v170 )
        v185 = *(_DWORD *)(*v170 - 4);
      else
        v185 = 0;
    }
    else
    {
      if ( *v170 )
        v185 = *(_DWORD *)(*v170 - 4);
      else
        v185 = 0;
      if ( v50 == 2 )
      {
        sub_521500(a1, a3, v193, v190->m128i_i64[0], v190[1].m128i_u64[0], &v193, a8, a9);
        goto LABEL_63;
      }
    }
    sub_521C80((__int64 **)a1, a2, *(double *)a7.m128_u64, v48, a3, v193, v190->m128i_i64, &v193, a8, a9);
    v51 = v190[1].m128i_i32[0];
    if ( 3 * (int)v49 >= (unsigned int)(4 * (v161 + v164)) )
    {
      v52 = v49 - 1;
      v53 = 16LL * (unsigned int)v49;
      v54 = (__m128 *)&v176->m128i_i8[v53];
      v55 = v176;
      goto LABEL_53;
    }
    v172 = 16LL * (unsigned int)(2 * v49);
    v125 = (__m128 *)sub_186B270(v172);
    v126 = 2 * v49;
    v53 = v172;
    v127 = v125;
    if ( 2 * (_DWORD)v49 )
    {
      v128 = &v125[2 * (v49 & 0x7FFFFFFE)];
      do
      {
        v125->m128_u64[0] = 0;
        v125 += 2;
        v125[-1].m128_u64[0] = 0;
      }
      while ( v128 != v125 );
      v52 = v126 - 1;
      v129 = &v176[v49];
      v54 = &v127[v172 / 0x10];
      goto LABEL_207;
    }
    v54 = v125;
    v52 = -1;
    v129 = &v176[(unsigned int)v49];
    if ( v176 != v129 )
    {
LABEL_207:
      v130 = v176;
      do
      {
        while ( v130->m128i_i32[1] != 2 )
        {
          if ( ++v130 == v129 )
            goto LABEL_215;
        }
        v131 = 16LL * (v130->m128i_i32[0] & (unsigned int)v52);
        v132 = &v127[(unsigned __int64)v131 / 0x10];
        if ( v172 == v131 )
        {
LABEL_229:
          if ( v127 == v132 )
          {
LABEL_271:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v133 = v190;
          v134 = v127;
          while ( v134->m128_i32[1] )
          {
            if ( v132 == ++v134 )
              goto LABEL_271;
          }
        }
        else
        {
          v133 = v190;
          v134 = &v127[(unsigned __int64)v131 / 0x10];
          while ( v134->m128_i32[1] )
          {
            if ( ++v134 == v54 )
              goto LABEL_229;
          }
        }
        a7 = (__m128)_mm_loadu_si128(v130++);
        v190 = v133;
        *v134 = a7;
      }
      while ( v130 != v129 );
    }
LABEL_215:
    if ( v176 )
    {
      v148 = v126;
      v151 = v127;
      v169 = v172;
      v173 = v52;
      sub_186B220(v176);
      v126 = v148;
      v127 = v151;
      v53 = v169;
      v52 = v173;
    }
    v176 = (__m128i *)v127;
    v49 = v126;
    v55 = (__m128i *)v127;
    v164 = 0;
LABEL_53:
    v56 = 16LL * (v51 & (unsigned int)v52);
    v57 = &v55[(unsigned __int64)v56 / 0x10];
    if ( v56 != v53 )
    {
      v58 = (__m128 *)&v55[(unsigned __int64)v56 / 0x10];
      v59 = nullptr;
      while ( 1 )
      {
        v60 = v58->m128_i32[1];
        if ( v60 == 2 )
        {
          if ( v51 == v58->m128_i32[0] && v51 == v58->m128_i32[2] )
          {
            v61 = v190;
LABEL_62:
            v190 = v61;
            v58->m128_i32[2] = v51;
            v58->m128_i32[3] = v185;
            v58->m128_i32[1] = 2;
            goto LABEL_63;
          }
        }
        else
        {
          if ( !v60 )
          {
            if ( !v59 )
              goto LABEL_240;
            goto LABEL_201;
          }
          v59 = v58;
        }
        if ( v54 == ++v58 )
          goto LABEL_180;
      }
    }
    v59 = nullptr;
LABEL_180:
    v58 = (__m128 *)v176;
    if ( v176 == v57 )
    {
LABEL_189:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v61 = v190;
    while ( 2 )
    {
      while ( 1 )
      {
        v123 = v58->m128_i32[1];
        if ( v123 != 2 )
          break;
        if ( v51 != v58->m128_i32[0] )
          goto LABEL_184;
        if ( v51 == v58->m128_i32[2] )
          goto LABEL_62;
        if ( v57 == (__m128i *)++v58 )
          goto LABEL_189;
      }
      if ( v123 )
      {
        v59 = v58;
LABEL_184:
        if ( v57 == (__m128i *)++v58 )
          goto LABEL_189;
        continue;
      }
      break;
    }
    if ( v59 )
    {
LABEL_201:
      --v164;
      goto LABEL_202;
    }
LABEL_240:
    v59 = v58;
LABEL_202:
    v59->m128_i32[2] = v51;
    v59->m128_i32[1] = 2;
    v59->m128_i32[3] = v185;
    v59->m128_i32[0] = v51;
    ++v161;
LABEL_63:
    v170 = (__int64 *)(*(_QWORD *)(a1 + 48) + 8LL * v193);
LABEL_64:
    v190->m128i_i32[2] = 0;
    v190[1].m128i_i32[0] = v185;
LABEL_65:
    ++v48;
    v190 = (__m128i *)((char *)v190 + 24);
    if ( v48 != ptr )
      continue;
    break;
  }
LABEL_66:
  v62 = (_QWORD *)sub_186B270(0x60u);
  *v62 = 0;
  v63 = (int *)v62;
  *(_QWORD *)((char *)v62 + 12) = 0;
  v62[3] = 0;
  *(_QWORD *)((char *)v62 + 36) = 0;
  v62[6] = 0;
  *(_QWORD *)((char *)v62 + 60) = 0;
  v62[9] = 0;
  *(_QWORD *)((char *)v62 + 84) = 0;
  if ( ptr )
  {
    v64 = 8;
    v171 = ptr;
    v65 = (__int64)&v11[1].m128i_i64[3 * ptr];
    m128i_i32 = v11[1].m128i_i32;
    ptra = 0;
    v165 = 0;
    while ( 1 )
    {
      v66 = *m128i_i32;
      v67 = 12LL * (*m128i_i32 & (v64 - 1));
      v68 = 12LL * v64;
      v69 = &v63[(unsigned __int64)v67 / 4];
      v70 = v68;
      v71 = &v63[(unsigned __int64)v68 / 4];
      if ( v67 != v68 )
      {
        for ( k = &v63[(unsigned __int64)v67 / 4]; v71 != k; k += 3 )
        {
          v73 = k[1];
          if ( v73 == 2 )
          {
            if ( v66 == *k && v66 == k[2] )
            {
LABEL_75:
              sub_521210(a1, v193, v66, &v193, *a8, a9);
              v74 = v193;
              *a8 = 1;
              v75 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v74);
              if ( v75 )
                v76 = *(_DWORD *)(v75 - 4) - 1;
              else
                v76 = -1;
              *m128i_i32 = v76;
              goto LABEL_78;
            }
          }
          else if ( !v73 )
          {
LABEL_155:
            v108 = 2 * v64;
            if ( 3 * v64 >= 4 * (v165 + ptra) )
              goto LABEL_156;
            goto LABEL_250;
          }
        }
      }
      if ( v63 != v69 )
      {
        v104 = v63;
        while ( 1 )
        {
          v105 = v104[1];
          if ( v105 == 2 )
          {
            if ( v66 == *v104 && v66 == v104[2] )
              goto LABEL_75;
          }
          else if ( !v105 )
          {
            goto LABEL_155;
          }
          v104 += 3;
          if ( v69 == v104 )
            goto LABEL_155;
        }
      }
      v108 = 2 * v64;
      if ( 3 * v64 >= 4 * (v165 + ptra) )
      {
        if ( !v68 )
        {
LABEL_249:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
LABEL_157:
        v109 = v69;
        v110 = nullptr;
        while ( 1 )
        {
          v111 = v109[1];
          if ( v111 == 2 )
          {
            if ( v66 == *v109 && v66 == v109[2] )
            {
              v109[2] = v66;
              v109[1] = 2;
              goto LABEL_78;
            }
          }
          else
          {
            if ( !v111 )
            {
              if ( !v110 )
                goto LABEL_273;
              goto LABEL_247;
            }
            v110 = v109;
          }
          v109 += 3;
          if ( v109 == v71 )
            goto LABEL_219;
        }
      }
LABEL_250:
      v155 = v71;
      v158 = v108;
      v162 = 12LL * v108;
      v136 = (char *)sub_186B270(v162);
      v137 = v158;
      v138 = v136;
      v70 = v162;
      if ( v158 )
      {
        v139 = &v136[24 * (v64 & 0x7FFFFFFF)];
        do
        {
          *(_QWORD *)v136 = 0;
          v136 += 24;
          *(_QWORD *)(v136 - 12) = 0;
        }
        while ( v139 != v136 );
      }
      v140 = v63;
      ptrb = v158 - 1;
      for ( m = (int *)&v138[v162]; v155 != v140; *((_DWORD *)v145 + 2) = *(v140 - 1) )
      {
        while ( v140[1] != 2 )
        {
          v140 += 3;
          if ( v155 == v140 )
            goto LABEL_262;
        }
        v142 = 12LL * (*v140 & ptrb);
        v143 = &v138[v142];
        if ( v162 == v142 )
        {
LABEL_265:
          if ( v138 == v143 )
          {
LABEL_281:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v144 = m128i_i32;
          v145 = v138;
          while ( *((_DWORD *)v145 + 1) )
          {
            v145 += 12;
            if ( v143 == v145 )
              goto LABEL_281;
          }
        }
        else
        {
          v144 = m128i_i32;
          v145 = &v138[v142];
          while ( *((_DWORD *)v145 + 1) )
          {
            v145 += 12;
            if ( m == (int *)v145 )
              goto LABEL_265;
          }
        }
        v146 = *(_QWORD *)v140;
        m128i_i32 = v144;
        v140 += 3;
        *(_QWORD *)v145 = v146;
      }
LABEL_262:
      if ( v63 )
      {
        v152 = v158;
        v156 = (int *)&v138[v162];
        v159 = v138;
        sub_186B220(v63);
        v137 = v152;
        m = v156;
        v138 = v159;
        v70 = v162;
      }
      v147 = ptrb;
      v71 = m;
      v64 = v137;
      v63 = (int *)v138;
      ptra = 0;
      v67 = 12LL * (v66 & v147);
      v69 = (int *)&v138[v67];
LABEL_156:
      if ( v67 != v70 )
        goto LABEL_157;
      v110 = nullptr;
LABEL_219:
      if ( v63 == v69 )
        goto LABEL_249;
      v109 = v63;
      while ( 1 )
      {
        v135 = v109[1];
        if ( v135 != 2 )
          break;
        if ( v66 == *v109 && v66 == v109[2] )
        {
          v109[2] = v66;
          v109[1] = 2;
          goto LABEL_78;
        }
LABEL_223:
        v109 += 3;
        if ( v69 == v109 )
          goto LABEL_249;
      }
      if ( v135 )
        break;
      if ( v110 )
      {
LABEL_247:
        --ptra;
        goto LABEL_248;
      }
LABEL_273:
      v110 = v109;
LABEL_248:
      v110[2] = v66;
      v110[1] = 2;
      *v110 = v66;
      ++v165;
LABEL_78:
      m128i_i32 += 6;
      if ( (int *)v65 == m128i_i32 )
      {
        for ( n = 0; n != v171; ++n )
        {
          if ( v11[1].m128i_i32[6 * n] != (_DWORD)n )
          {
            v77 = (_QWORD *)sub_186B270(0x10u);
            v78 = (int *)(v77 + 1);
            *v77 = 2;
            v79 = n;
            v80 = v78;
            while ( 1 )
            {
              *v78 = v79;
              v81 = *(v80 - 1);
              v82 = &v11->m128i_i8[24 * v79];
              v83 = (unsigned int)(v81 + 1);
              v84 = *((_DWORD *)v82 + 4);
              *(v80 - 1) = v83;
              *((_DWORD *)v82 + 4) = v79;
              if ( v84 == (_DWORD)n )
                break;
              if ( (_DWORD)v83 == *(v80 - 2) )
              {
                v85 = (unsigned int)(3 * v83 + 1) >> 1;
                v86 = 4 * v85 + 8;
                if ( 4 * v81 + 12 >= (unsigned int)v86 || (unsigned int)v83 >= v85 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v197, "Overflow encountered when expanding vector");
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v197);
                  sub_233E40((__int64)v197);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v186 = (unsigned int)(3 * v83 + 1) >> 1;
                v87 = (unsigned int *)sub_186B300(v80 - 2, v86);
                v80 = (int *)(v87 + 2);
                *v87 = v186;
                v78 = (int *)&v87[v87[1] + 2];
              }
              else
              {
                v78 = &v80[v83];
              }
              v79 = v84;
            }
            sub_51F600(a1, v193, v83, v80, &v193, *a8, a9);
            *a8 = 1;
            sub_186B220(v80 - 2);
          }
        }
        v101 = v193;
        if ( v193 != -1 )
        {
LABEL_120:
          *a6 = v101;
          if ( v63 )
            goto LABEL_121;
          goto LABEL_122;
        }
LABEL_276:
        sub_51C670(a1, a3, &v195, &v193);
        *a8 = 0;
        v101 = v193;
        goto LABEL_120;
      }
    }
    v110 = v109;
    goto LABEL_223;
  }
  if ( v193 == -1 )
    goto LABEL_276;
  *a6 = v193;
LABEL_121:
  sub_186B220(v63);
LABEL_122:
  if ( v174 )
    sub_186B220(v174 - 2);
  if ( v183 )
    sub_186B220(v183 - 2);
  if ( v180 )
    sub_186B220(v180);
  if ( v176 )
    sub_186B220(v176);
  if ( v11 )
    sub_186B220(&v11[-1].m128i_u64[1]);
  result = v195;
  if ( v195 )
    return sub_186B220((void *)(v195 - 8));
  return result;
}

