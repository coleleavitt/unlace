__int64 __fastcall sub_1110810(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // rbp
  char *v8; // rbx
  __int64 v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  void **v12; // rdi
  void **v13; // r15
  void **v14; // r14
  void *v15; // rdi
  void *v16; // rdi
  const __m128i *v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rbp
  char *v22; // r13
  char *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // r12
  __int64 v33; // r14
  unsigned int v34; // eax
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned int v37; // eax
  char *v38; // r14
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  _BYTE *v41; // rax
  unsigned __int64 i; // rbx
  _BYTE *v43; // r14
  _BYTE *v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // rdx
  _BYTE *v47; // rax
  char *v48; // rdi
  __int64 v49; // rdx
  _BYTE *v50; // rax
  size_t *v51; // rdi
  __int64 v52; // rdx
  void **v53; // r12
  void **v54; // r13
  void **v55; // r15
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  _BYTE *v60; // rax
  _BYTE *v61; // rdi
  __int64 v62; // rdx
  bool v63; // zf
  void *v64; // rdi
  _BYTE *v65; // rdi
  __int64 v66; // rdx
  char *v67; // rdi
  __int64 v68; // rdx
  size_t *v69; // rdi
  __int64 v70; // rdx
  void **v71; // r15
  void **v72; // r13
  void **v73; // r12
  _BYTE *v74; // rdi
  __int64 v75; // rax
  _BYTE *v76; // rdi
  void **v77; // r13
  void **v78; // r12
  __int64 v79; // rdi
  __int64 v80; // rsi
  void *v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // r12
  char *v84; // rax
  _QWORD *v85; // rdi
  unsigned __int64 v86; // r13
  char v87; // si
  __int64 v88; // rax
  char *v89; // rsi
  unsigned __int64 v90; // r15
  signed __int64 v91; // r12
  __int64 v92; // rax
  __m128i v93; // xmm0
  char *v94; // rcx
  char *v95; // r14
  _QWORD *v96; // r12
  _QWORD *v97; // rdx
  _QWORD *v98; // rdi
  _BYTE *v99; // rdx
  void *v100; // rax
  size_t v101; // rdx
  size_t v102; // rdx
  size_t v103; // rdx
  size_t v104; // rdx
  size_t v105; // rdx
  size_t v106; // rdx
  size_t v107; // rdx
  size_t v108; // rdx
  __int64 v109; // r12
  __int64 v110; // r14
  unsigned int v111; // eax
  __int64 v112; // r12
  __int64 v113; // r14
  unsigned int v114; // eax
  __int64 v115; // r12
  __int64 v116; // r14
  unsigned int v117; // eax
  __int64 v118; // r9
  __m128i *v119; // rcx
  int v120; // eax
  int v121; // esi
  __int64 v122; // r8
  size_t *v123; // rax
  _BYTE *v124; // rax
  char *v125; // rax
  void **v126; // r12
  void **v127; // rbx
  unsigned int v129; // eax
  __int64 v130; // rdx
  unsigned __int64 v131; // rax
  int v132; // ebx
  __m128i *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // r8
  __m128i *v136; // rcx
  __m128i v137; // xmm5
  char *v138; // rcx
  __int64 v139; // rdx
  __int64 *v140; // r15
  __int64 v141; // rax
  char *v142; // r12
  __int64 v143; // r14
  char *v144; // r13
  __int64 v145; // r15
  __int64 v146; // rsi
  __int64 v147; // rdi
  char *v148; // r12
  int v149; // r12d
  __int64 *v150; // rax
  __m128i *v151; // rax
  __int64 v152; // rdx
  __m128i v153; // xmm6
  __int64 v154; // rcx
  __m128i v155; // [rsp+0h] [rbp-1F8h] BYREF
  void *src; // [rsp+10h] [rbp-1E8h]
  char *v157; // [rsp+18h] [rbp-1E0h]
  size_t *v158; // [rsp+20h] [rbp-1D8h]
  _BYTE *v159; // [rsp+28h] [rbp-1D0h]
  __int64 *v160; // [rsp+30h] [rbp-1C8h]
  char v161; // [rsp+3Fh] [rbp-1B9h]
  _BYTE *v162; // [rsp+40h] [rbp-1B8h]
  void **v163; // [rsp+48h] [rbp-1B0h]
  __m128i *v164; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v165; // [rsp+58h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+60h] [rbp-198h] BYREF
  int v167; // [rsp+68h] [rbp-190h]
  int v168; // [rsp+6Ch] [rbp-18Ch]
  __int64 v169; // [rsp+80h] [rbp-178h] BYREF
  __int64 v170; // [rsp+88h] [rbp-170h]
  unsigned int v171; // [rsp+90h] [rbp-168h]
  void *v172; // [rsp+A0h] [rbp-158h] BYREF
  void **v173; // [rsp+A8h] [rbp-150h]
  void *v174; // [rsp+B8h] [rbp-140h]
  __int64 v175; // [rsp+C0h] [rbp-138h]
  size_t v176[2]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v177; // [rsp+110h] [rbp-E8h] BYREF
  void *v178; // [rsp+120h] [rbp-D8h]
  size_t v179; // [rsp+128h] [rbp-D0h]
  __int64 v180; // [rsp+130h] [rbp-C8h] BYREF
  void *v181; // [rsp+140h] [rbp-B8h]
  size_t n; // [rsp+148h] [rbp-B0h]
  __int64 v183; // [rsp+150h] [rbp-A8h] BYREF
  void *v184; // [rsp+160h] [rbp-98h]
  void **v185; // [rsp+168h] [rbp-90h]
  __int64 j; // [rsp+170h] [rbp-88h]
  void *v187; // [rsp+178h] [rbp-80h]
  size_t v188; // [rsp+180h] [rbp-78h]
  _QWORD v189[2]; // [rsp+188h] [rbp-70h] BYREF
  void *v190[2]; // [rsp+198h] [rbp-60h] BYREF
  __m128i v191; // [rsp+1A8h] [rbp-50h] BYREF
  char v192; // [rsp+1B8h] [rbp-40h]

  v7 = a1;
  v160 = a4;
  v163 = &v172;
  sub_110BCB0((__int64)&v172, a1, a2, a3);
  v155.m128i_i64[0] = (__int64)&ptr;
  sub_11101E0((__int64)&ptr, a1, &v172);
  v8 = (char *)*a4;
  v9 = *a4 + 192LL * *((unsigned int *)a4 + 2);
  while ( (char *)v9 != v8 )
  {
    while ( 1 )
    {
      v9 -= 192;
      if ( *(_BYTE *)(v9 + 184) )
      {
        v10 = *(void **)(v9 + 152);
        if ( v10 != (void *)(v9 + 168) )
          operator delete(v10);
      }
      v11 = *(void **)(v9 + 120);
      if ( v11 != (void *)(v9 + 136) )
        operator delete(v11);
      v12 = *(void ***)(v9 + 96);
      v13 = *(void ***)(v9 + 104);
      v14 = v12;
      if ( v13 != v12 )
      {
        do
        {
          while ( *v14 != v14 + 2 )
          {
            operator delete(*v14);
            v14 += 4;
            if ( v13 == v14 )
              goto LABEL_11;
          }
          v14 += 4;
        }
        while ( v13 != v14 );
LABEL_11:
        v12 = *(void ***)(v9 + 96);
      }
      if ( v12 )
        operator delete(v12);
      v15 = *(void **)(v9 + 64);
      if ( v15 != (void *)(v9 + 80) )
        operator delete(v15);
      v16 = *(void **)(v9 + 32);
      if ( v16 != (void *)(v9 + 48) )
        operator delete(v16);
      if ( *(_QWORD *)v9 == v9 + 16 )
        break;
      operator delete(*(void **)v9);
      if ( (char *)v9 == v8 )
        goto LABEL_20;
    }
  }
LABEL_20:
  *((_DWORD *)v160 + 2) = 0;
  if ( a5 )
  {
    v17 = (const __m128i *)v174;
    if ( v174 == v163 + 5 )
    {
      v130 = (unsigned int)v175;
      v131 = *(unsigned int *)(a5 + 8);
      v132 = v175;
      if ( (unsigned int)v175 <= v131 )
      {
        if ( (_DWORD)v175 )
        {
          v151 = *(__m128i **)a5;
          v152 = *(_QWORD *)a5 + 16LL * (unsigned int)v175;
          do
          {
            v153 = _mm_loadu_si128(v17);
            ++v151;
            ++v17;
            v151[-1] = v153;
          }
          while ( v151 != (__m128i *)v152 );
        }
      }
      else
      {
        if ( (unsigned int)v175 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
        {
          *(_DWORD *)(a5 + 8) = 0;
          sub_2237220(a5, a5 + 16, v130, 16);
          v138 = (char *)v174;
          v133 = *(__m128i **)a5;
          v135 = 0;
          v130 = (unsigned int)v175;
          v17 = (const __m128i *)v174;
        }
        else
        {
          v133 = *(__m128i **)a5;
          if ( *(_DWORD *)(a5 + 8) )
          {
            v134 = 16 * v131;
            v135 = v134;
            v136 = &v133[(unsigned __int64)v134 / 0x10];
            do
            {
              v137 = _mm_loadu_si128(v17);
              ++v133;
              ++v17;
              v133[-1] = v137;
            }
            while ( v133 != v136 );
            v138 = (char *)v174;
            v17 = (const __m128i *)((char *)v174 + v134);
            v133 = (__m128i *)(*(_QWORD *)a5 + v134);
          }
          else
          {
            v135 = 0;
            v138 = (char *)v174;
          }
        }
        v139 = 16 * v130;
        if ( v17 != (const __m128i *)&v138[v139] )
          memcpy(v133, v17, v139 - v135);
      }
      *(_DWORD *)(a5 + 8) = v132;
      LODWORD(v175) = 0;
    }
    else
    {
      if ( *(_QWORD *)a5 != a5 + 16 )
      {
        free(*(void **)a5);
        v17 = (const __m128i *)v174;
      }
      v18 = v175;
      *(_QWORD *)a5 = v17;
      v175 = 0;
      *(_QWORD *)(a5 + 8) = v18;
      v174 = v163 + 5;
    }
  }
  v19 = *(void **)v7;
  v20 = *(_QWORD *)(v7 + 8);
  v169 = 0;
  v170 = 0;
  v171 = 0;
  src = v19;
  v161 = 0;
  if ( (void *)v20 == v19 )
  {
    v38 = (char *)*v160;
    v129 = *((_DWORD *)v160 + 2);
    v154 = *v160 + 192LL * v129;
    if ( v154 == *v160 )
    {
      v79 = 0;
      v80 = 0;
    }
    else
    {
      v40 = v154 - 192;
      if ( (unsigned __int64)v38 < v40 )
        goto LABEL_38;
      v80 = 0;
      v79 = 0;
    }
    goto LABEL_235;
  }
  v21 = v155.m128i_i64[0];
  v158 = v176;
  do
  {
    v20 -= 192LL;
    v22 = *(char **)(v20 + 104);
    v23 = *(char **)(v20 + 96);
    v24 = (v22 - v23) >> 7;
    v25 = (v22 - v23) >> 5;
    if ( v24 <= 0 )
    {
LABEL_125:
      if ( v25 != 2 )
      {
        if ( v25 != 3 )
        {
          if ( v25 != 1 )
            goto LABEL_128;
          goto LABEL_192;
        }
        v109 = *((_QWORD *)v23 + 1);
        v110 = *(_QWORD *)v23;
        v111 = sub_2244B30(*(_QWORD *)v23, v109);
        if ( (unsigned int)sub_2244E60(v21, v110, v109, v111) == -1 )
          goto LABEL_34;
        v23 += 32;
      }
      v112 = *((_QWORD *)v23 + 1);
      v113 = *(_QWORD *)v23;
      v114 = sub_2244B30(*(_QWORD *)v23, v112);
      if ( (unsigned int)sub_2244E60(v21, v113, v112, v114) == -1 )
        goto LABEL_34;
      v23 += 32;
LABEL_192:
      v115 = *((_QWORD *)v23 + 1);
      v116 = *(_QWORD *)v23;
      v117 = sub_2244B30(*(_QWORD *)v23, v115);
      if ( (unsigned int)sub_2244E60(v21, v116, v115, v117) == -1 )
        goto LABEL_34;
      if ( !*(_QWORD *)(v20 + 128) )
        goto LABEL_129;
LABEL_194:
      v176[0] = *(_QWORD *)(v20 + 120);
      v176[1] = *(_QWORD *)(v20 + 128);
      if ( (unsigned __int8)sub_10E92B0(&v169, v158, &v164) )
        continue;
      v119 = v164;
      v120 = v170 + 1;
      v121 = 2 * v171;
      v122 = (unsigned int)(4 * (v170 + 1));
      v165 = (__int64)v164;
      if ( (unsigned int)v122 < 3 * v171 )
      {
        if ( v171 - HIDWORD(v170) - v120 > v171 >> 3 )
        {
LABEL_197:
          v63 = v119->m128i_i64[0] == -1;
          LODWORD(v170) = v120;
          if ( !v63 )
            --HIDWORD(v170);
          *v119 = _mm_load_si128((const __m128i *)v176);
          goto LABEL_129;
        }
        v121 = v171;
      }
      sub_10FCC90((__int64)&v169, v121, v171, (__int64)v164, v122, v118);
      sub_10E92B0(&v169, v158, &v165);
      v119 = (__m128i *)v165;
      v120 = v170 + 1;
      goto LABEL_197;
    }
    v155.m128i_i64[0] = (__int64)&v23[128 * v24];
    while ( 1 )
    {
      v35 = *((_QWORD *)v23 + 1);
      v36 = *(_QWORD *)v23;
      v37 = sub_2244B30(*(_QWORD *)v23, v35);
      if ( (unsigned int)sub_2244E60(v21, v36, v35, v37) == -1 )
        break;
      v26 = *((_QWORD *)v23 + 5);
      v27 = *((_QWORD *)v23 + 4);
      v28 = sub_2244B30(v27, v26);
      if ( (unsigned int)sub_2244E60(v21, v27, v26, v28) == -1 )
      {
        v23 += 32;
        break;
      }
      v29 = *((_QWORD *)v23 + 9);
      v30 = *((_QWORD *)v23 + 8);
      v31 = sub_2244B30(v30, v29);
      if ( (unsigned int)sub_2244E60(v21, v30, v29, v31) == -1 )
      {
        v23 += 64;
        break;
      }
      v32 = *((_QWORD *)v23 + 13);
      v33 = *((_QWORD *)v23 + 12);
      v34 = sub_2244B30(v33, v32);
      if ( (unsigned int)sub_2244E60(v21, v33, v32, v34) == -1 )
      {
        v23 += 96;
        break;
      }
      v23 += 128;
      if ( (char *)v155.m128i_i64[0] == v23 )
      {
        v25 = (v22 - v23) >> 5;
        goto LABEL_125;
      }
    }
LABEL_34:
    if ( v22 != v23 )
      continue;
LABEL_128:
    if ( *(_QWORD *)(v20 + 128) )
      goto LABEL_194;
LABEL_129:
    v86 = v20;
    v87 = v161;
    if ( *(_BYTE *)(v20 + 184) )
      v87 = *(_BYTE *)(v20 + 184);
    v88 = *((unsigned int *)v160 + 2);
    v161 = v87;
    v89 = (char *)*v160;
    v90 = *v160 + 192 * v88;
    if ( v88 + 1 > (unsigned __int64)*((unsigned int *)v160 + 3) )
    {
      v155.m128i_i64[0] = -1;
      v155.m128i_i8[8] = 0;
      if ( (unsigned __int64)v89 <= v20 && v90 > v20 )
      {
        v155.m128i_i8[8] = 1;
        v155.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - (_QWORD)v89) >> 6);
      }
      v140 = v160;
      v157 = (char *)(v160 + 2);
      v141 = sub_2237400(v160, v160 + 2, v88 + 1, 192, v158);
      v142 = (char *)*v140;
      v143 = v141;
      v144 = (char *)(*v140 + 192LL * *((unsigned int *)v140 + 2));
      if ( (char *)*v140 != v144 )
      {
        v145 = v141;
        do
        {
          v146 = (__int64)v142;
          v147 = v145;
          v142 += 192;
          v145 += 192;
          sub_110E070(v147, v146);
        }
        while ( v144 != v142 );
        v148 = (char *)*v160;
        v144 = (char *)(*v160 + 192LL * *((unsigned int *)v160 + 2));
        if ( (char *)*v160 != v144 )
        {
          do
          {
            v144 -= 192;
            sub_110AEF0((__int64)v144);
          }
          while ( v148 != v144 );
          v144 = (char *)*v160;
        }
      }
      v149 = v176[0];
      if ( v157 != v144 )
        free(v144);
      v150 = v160;
      v86 = v20;
      *v160 = v143;
      *((_DWORD *)v150 + 3) = v149;
      v90 = v143 + 192LL * *((unsigned int *)v150 + 2);
      if ( v155.m128i_i8[8] )
        v86 = v143 + 192 * v155.m128i_i64[0];
    }
    *(_QWORD *)v90 = v90 + 16;
    sub_110A8B0((_QWORD *)v90, *(_BYTE **)v86, *(_QWORD *)v86 + *(_QWORD *)(v86 + 8));
    *(_QWORD *)(v90 + 32) = v90 + 48;
    sub_110A8B0((_QWORD *)(v90 + 32), *(_BYTE **)(v86 + 32), *(_QWORD *)(v86 + 32) + *(_QWORD *)(v86 + 40));
    *(_QWORD *)(v90 + 64) = v90 + 80;
    sub_110A8B0((_QWORD *)(v90 + 64), *(_BYTE **)(v86 + 64), *(_QWORD *)(v86 + 64) + *(_QWORD *)(v86 + 72));
    v91 = *(_QWORD *)(v86 + 104) - *(_QWORD *)(v86 + 96);
    *(_OWORD *)(v90 + 96) = 0;
    *(_QWORD *)(v90 + 112) = 0;
    if ( v91 >> 5 )
    {
      if ( (unsigned __int64)(v91 >> 5) > 0x7FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v155.m128i_i64[1] = operator new(v91);
    }
    else
    {
      v155.m128i_i64[1] = 0;
    }
    v92 = v155.m128i_i64[1];
    v155.m128i_i64[0] = v155.m128i_i64[1];
    v93 = _mm_loadl_epi64(&v155);
    *(_QWORD *)(v90 + 112) = v155.m128i_i64[1] + v91;
    *(__m128i *)(v90 + 96) = _mm_unpacklo_epi64(v93, v93);
    v94 = *(char **)(v86 + 96);
    v155.m128i_i64[0] = *(_QWORD *)(v86 + 104);
    v157 = v94;
    if ( (char *)v155.m128i_i64[0] != v94 )
    {
      v95 = v94;
      v96 = (_QWORD *)v92;
      do
      {
        v97 = v96 + 2;
        v98 = v96;
        v95 += 32;
        v96 += 4;
        *(v96 - 4) = v97;
        sub_110A8B0(v98, *((_BYTE **)v95 - 4), *((_QWORD *)v95 - 4) + *((_QWORD *)v95 - 3));
      }
      while ( (char *)v155.m128i_i64[0] != v95 );
      v155.m128i_i64[1] += ((v155.m128i_i64[0] - 32 - (_QWORD)v157) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    }
    *(_QWORD *)(v90 + 104) = v155.m128i_i64[1];
    *(_QWORD *)(v90 + 120) = v90 + 136;
    sub_110A8B0((_QWORD *)(v90 + 120), *(_BYTE **)(v86 + 120), *(_QWORD *)(v86 + 120) + *(_QWORD *)(v86 + 128));
    sub_10F33D0(v90 + 152, v86 + 152);
    ++*((_DWORD *)v160 + 2);
  }
  while ( src != (void *)v20 );
  v38 = (char *)*v160;
  v39 = *v160 + 192LL * *((unsigned int *)v160 + 2);
  if ( *v160 != v39 )
  {
    v40 = v39 - 192;
    if ( v40 > (unsigned __int64)v38 )
    {
LABEL_38:
      v155.m128i_i64[0] = (__int64)&v177;
      v155.m128i_i64[1] = (__int64)&v180;
      src = &v183;
      v41 = (_BYTE *)(v40 + 16);
      for ( i = (unsigned __int64)v38; i < (unsigned __int64)(v43 - 208); i += 192LL )
      {
        v43 = v41;
        sub_110E070((__int64)v176, i);
        v44 = *((_BYTE **)v43 - 2);
        v45 = *(_BYTE **)i;
        if ( v44 == v43 )
        {
          v107 = *((_QWORD *)v43 - 1);
          if ( v107 )
          {
            if ( v107 == 1 )
              *v45 = *v43;
            else
              memcpy(v45, v43, v107);
            v107 = *((_QWORD *)v43 - 1);
            v45 = *(_BYTE **)i;
          }
          *(_QWORD *)(i + 8) = v107;
          v45[v107] = 0;
          v45 = *((_BYTE **)v43 - 2);
        }
        else
        {
          if ( v45 == (_BYTE *)(i + 16) )
          {
            *(_QWORD *)i = v44;
            *(_QWORD *)(i + 8) = *((_QWORD *)v43 - 1);
            *(_QWORD *)(i + 16) = *(_QWORD *)v43;
          }
          else
          {
            *(_QWORD *)i = v44;
            v46 = *(_QWORD *)(i + 16);
            *(_QWORD *)(i + 8) = *((_QWORD *)v43 - 1);
            *(_QWORD *)(i + 16) = *(_QWORD *)v43;
            if ( v45 )
            {
              *((_QWORD *)v43 - 2) = v45;
              *(_QWORD *)v43 = v46;
              goto LABEL_43;
            }
          }
          *((_QWORD *)v43 - 2) = v43;
          v45 = v43;
        }
LABEL_43:
        *((_QWORD *)v43 - 1) = 0;
        *v45 = 0;
        v47 = *((_BYTE **)v43 + 2);
        v48 = *(char **)(i + 32);
        v157 = v43 + 32;
        if ( v43 + 32 == v47 )
        {
          v106 = *((_QWORD *)v43 + 3);
          if ( v106 )
          {
            if ( v106 == 1 )
              *v48 = v43[32];
            else
              memcpy(v48, v43 + 32, v106);
            v106 = *((_QWORD *)v43 + 3);
            v48 = *(char **)(i + 32);
          }
          *(_QWORD *)(i + 40) = v106;
          v48[v106] = 0;
          v48 = *((char **)v43 + 2);
        }
        else
        {
          if ( v48 == (char *)(i + 48) )
          {
            *(_QWORD *)(i + 32) = v47;
            *(_QWORD *)(i + 40) = *((_QWORD *)v43 + 3);
            *(_QWORD *)(i + 48) = *((_QWORD *)v43 + 4);
          }
          else
          {
            *(_QWORD *)(i + 32) = v47;
            v49 = *(_QWORD *)(i + 48);
            *(_QWORD *)(i + 40) = *((_QWORD *)v43 + 3);
            *(_QWORD *)(i + 48) = *((_QWORD *)v43 + 4);
            if ( v48 )
            {
              *((_QWORD *)v43 + 2) = v48;
              *((_QWORD *)v43 + 4) = v49;
              goto LABEL_47;
            }
          }
          v125 = v157;
          *((_QWORD *)v43 + 2) = v157;
          v48 = v125;
        }
LABEL_47:
        *((_QWORD *)v43 + 3) = 0;
        *v48 = 0;
        v50 = *((_BYTE **)v43 + 6);
        v51 = *(size_t **)(i + 64);
        v158 = (size_t *)(v43 + 64);
        if ( v43 + 64 == v50 )
        {
          v105 = *((_QWORD *)v43 + 7);
          if ( v105 )
          {
            if ( v105 == 1 )
              *(_BYTE *)v51 = v43[64];
            else
              memcpy(v51, v43 + 64, v105);
            v105 = *((_QWORD *)v43 + 7);
            v51 = *(size_t **)(i + 64);
          }
          *(_QWORD *)(i + 72) = v105;
          *((_BYTE *)v51 + v105) = 0;
          v51 = *((size_t **)v43 + 6);
        }
        else
        {
          if ( v51 == (size_t *)(i + 80) )
          {
            *(_QWORD *)(i + 64) = v50;
            *(_QWORD *)(i + 72) = *((_QWORD *)v43 + 7);
            *(_QWORD *)(i + 80) = *((_QWORD *)v43 + 8);
          }
          else
          {
            *(_QWORD *)(i + 64) = v50;
            v52 = *(_QWORD *)(i + 80);
            *(_QWORD *)(i + 72) = *((_QWORD *)v43 + 7);
            *(_QWORD *)(i + 80) = *((_QWORD *)v43 + 8);
            if ( v51 )
            {
              *((_QWORD *)v43 + 6) = v51;
              *((_QWORD *)v43 + 8) = v52;
              goto LABEL_51;
            }
          }
          v123 = v158;
          *((_QWORD *)v43 + 6) = v158;
          v51 = v123;
        }
LABEL_51:
        *((_QWORD *)v43 + 7) = 0;
        *(_BYTE *)v51 = 0;
        v53 = *(void ***)(i + 96);
        *(_QWORD *)(i + 112) = 0;
        v54 = *(void ***)(i + 104);
        *(_OWORD *)(i + 96) = 0;
        v55 = v53;
        *(_QWORD *)(i + 96) = *((_QWORD *)v43 + 10);
        v56 = *((_QWORD *)v43 + 11);
        *((_QWORD *)v43 + 10) = 0;
        v57 = *(_QWORD *)(i + 104);
        *(_QWORD *)(i + 104) = v56;
        v58 = *((_QWORD *)v43 + 12);
        *((_QWORD *)v43 + 11) = v57;
        v59 = *(_QWORD *)(i + 112);
        *(_QWORD *)(i + 112) = v58;
        for ( *((_QWORD *)v43 + 12) = v59; v54 != v55; v55 += 4 )
        {
          while ( *v55 != v55 + 2 )
          {
            operator delete(*v55);
            v55 += 4;
            if ( v54 == v55 )
              goto LABEL_54;
          }
        }
LABEL_54:
        if ( v53 )
          operator delete(v53);
        v60 = *((_BYTE **)v43 + 13);
        v61 = *(_BYTE **)(i + 120);
        v159 = v43 + 120;
        if ( v60 == v43 + 120 )
        {
          v103 = *((_QWORD *)v43 + 14);
          if ( v103 )
          {
            if ( v103 == 1 )
              *v61 = v43[120];
            else
              memcpy(v61, v43 + 120, v103);
            v103 = *((_QWORD *)v43 + 14);
            v61 = *(_BYTE **)(i + 120);
          }
          *(_QWORD *)(i + 128) = v103;
          v61[v103] = 0;
          v61 = *((_BYTE **)v43 + 13);
        }
        else
        {
          if ( v61 == (_BYTE *)(i + 136) )
          {
            *(_QWORD *)(i + 120) = v60;
            *(_QWORD *)(i + 128) = *((_QWORD *)v43 + 14);
            *(_QWORD *)(i + 136) = *((_QWORD *)v43 + 15);
          }
          else
          {
            *(_QWORD *)(i + 120) = v60;
            v62 = *(_QWORD *)(i + 136);
            *(_QWORD *)(i + 128) = *((_QWORD *)v43 + 14);
            *(_QWORD *)(i + 136) = *((_QWORD *)v43 + 15);
            if ( v61 )
            {
              *((_QWORD *)v43 + 13) = v61;
              *((_QWORD *)v43 + 15) = v62;
              goto LABEL_60;
            }
          }
          v124 = v159;
          *((_QWORD *)v43 + 13) = v159;
          v61 = v124;
        }
LABEL_60:
        *((_QWORD *)v43 + 14) = 0;
        *v61 = 0;
        v63 = *(_BYTE *)(i + 184) == 0;
        v162 = v43 + 136;
        if ( v63 )
        {
          if ( v43[168] )
          {
            *(_QWORD *)(i + 152) = i + 168;
            v99 = *((_BYTE **)v43 + 17);
            if ( v99 == v43 + 152 )
            {
              *(__m128i *)(i + 168) = _mm_loadu_si128((const __m128i *)(v43 + 152));
            }
            else
            {
              *(_QWORD *)(i + 152) = v99;
              *(_QWORD *)(i + 168) = *((_QWORD *)v43 + 19);
            }
            *(_QWORD *)(i + 160) = *((_QWORD *)v43 + 18);
            *((_QWORD *)v43 + 17) = v43 + 152;
            *((_QWORD *)v43 + 18) = 0;
            v43[152] = 0;
            *(_BYTE *)(i + 184) = 1;
          }
        }
        else if ( v43[168] )
        {
          sub_A0AAD0(i + 152, (_QWORD *)v43 + 17);
        }
        else
        {
          v64 = *(void **)(i + 152);
          *(_BYTE *)(i + 184) = 0;
          if ( v64 != (void *)(i + 168) )
            operator delete(v64);
        }
        v65 = *((_BYTE **)v43 - 2);
        if ( v176[0] == v155.m128i_i64[0] )
        {
          v102 = v176[1];
          if ( v176[1] )
          {
            if ( v176[1] == 1 )
              *v65 = v177;
            else
              memcpy(v65, (const void *)v155.m128i_i64[0], v176[1]);
            v102 = v176[1];
            v65 = *((_BYTE **)v43 - 2);
          }
          *((_QWORD *)v43 - 1) = v102;
          v65[v102] = 0;
          v65 = (_BYTE *)v176[0];
        }
        else
        {
          if ( v65 == v43 )
          {
            *((_QWORD *)v43 - 2) = v176[0];
            *((_QWORD *)v43 - 1) = v176[1];
            *(_QWORD *)v43 = v177;
          }
          else
          {
            *((_QWORD *)v43 - 2) = v176[0];
            v66 = *(_QWORD *)v43;
            *((_QWORD *)v43 - 1) = v176[1];
            *(_QWORD *)v43 = v177;
            if ( v65 )
            {
              v176[0] = (size_t)v65;
              v177 = v66;
              goto LABEL_68;
            }
          }
          v176[0] = v155.m128i_i64[0];
          v65 = (_BYTE *)v155.m128i_i64[0];
        }
LABEL_68:
        v176[1] = 0;
        *v65 = 0;
        v67 = *((char **)v43 + 2);
        if ( v178 == (void *)v155.m128i_i64[1] )
        {
          v108 = v179;
          if ( v179 )
          {
            if ( v179 == 1 )
              *v67 = v180;
            else
              memcpy(v67, (const void *)v155.m128i_i64[1], v179);
            v108 = v179;
            v67 = *((char **)v43 + 2);
          }
          *((_QWORD *)v43 + 3) = v108;
          v67[v108] = 0;
          v67 = (char *)v178;
        }
        else
        {
          if ( v157 == v67 )
          {
            *((_QWORD *)v43 + 2) = v178;
            *((_QWORD *)v43 + 3) = v179;
            *((_QWORD *)v43 + 4) = v180;
          }
          else
          {
            *((_QWORD *)v43 + 2) = v178;
            v68 = *((_QWORD *)v43 + 4);
            *((_QWORD *)v43 + 3) = v179;
            *((_QWORD *)v43 + 4) = v180;
            if ( v67 )
            {
              v178 = v67;
              v180 = v68;
              goto LABEL_72;
            }
          }
          v178 = (void *)v155.m128i_i64[1];
          v67 = (char *)v155.m128i_i64[1];
        }
LABEL_72:
        v179 = 0;
        *v67 = 0;
        v69 = *((size_t **)v43 + 6);
        if ( v181 == src )
        {
          v101 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)v69 = v183;
            else
              memcpy(v69, src, n);
            v101 = n;
            v69 = *((size_t **)v43 + 6);
          }
          *((_QWORD *)v43 + 7) = v101;
          *((_BYTE *)v69 + v101) = 0;
          v69 = (size_t *)v181;
        }
        else
        {
          if ( v158 == v69 )
          {
            *((_QWORD *)v43 + 6) = v181;
            *((_QWORD *)v43 + 7) = n;
            *((_QWORD *)v43 + 8) = v183;
          }
          else
          {
            *((_QWORD *)v43 + 6) = v181;
            v70 = *((_QWORD *)v43 + 8);
            *((_QWORD *)v43 + 7) = n;
            *((_QWORD *)v43 + 8) = v183;
            if ( v69 )
            {
              v181 = v69;
              v183 = v70;
              goto LABEL_76;
            }
          }
          v181 = src;
          v69 = (size_t *)src;
        }
LABEL_76:
        n = 0;
        *(_BYTE *)v69 = 0;
        v71 = *((void ***)v43 + 10);
        *((_QWORD *)v43 + 12) = 0;
        v72 = *((void ***)v43 + 11);
        *((_OWORD *)v43 + 5) = 0;
        v73 = v71;
        *((_QWORD *)v43 + 10) = v184;
        v184 = nullptr;
        *((_QWORD *)v43 + 11) = v185;
        v185 = nullptr;
        *((_QWORD *)v43 + 12) = j;
        for ( j = 0; v72 != v73; v73 += 4 )
        {
          while ( *v73 != v73 + 2 )
          {
            operator delete(*v73);
            v73 += 4;
            if ( v72 == v73 )
              goto LABEL_79;
          }
        }
LABEL_79:
        if ( v71 )
          operator delete(v71);
        v74 = *((_BYTE **)v43 + 13);
        if ( v187 == v189 )
        {
          v104 = v188;
          if ( v188 )
          {
            if ( v188 == 1 )
              *v74 = v189[0];
            else
              memcpy(v74, v187, v188);
            v104 = v188;
            v74 = *((_BYTE **)v43 + 13);
          }
          *((_QWORD *)v43 + 14) = v104;
          v74[v104] = 0;
          v74 = v187;
          goto LABEL_85;
        }
        if ( v159 == v74 )
        {
          *((_QWORD *)v43 + 13) = v187;
          *((_QWORD *)v43 + 14) = v188;
          *((_QWORD *)v43 + 15) = v189[0];
LABEL_216:
          v74 = v189;
          v187 = v189;
          goto LABEL_85;
        }
        *((_QWORD *)v43 + 13) = v187;
        v75 = *((_QWORD *)v43 + 15);
        *((_QWORD *)v43 + 14) = v188;
        *((_QWORD *)v43 + 15) = v189[0];
        if ( !v74 )
          goto LABEL_216;
        v187 = v74;
        v189[0] = v75;
LABEL_85:
        v188 = 0;
        *v74 = 0;
        if ( v43[168] )
        {
          if ( v192 )
          {
            sub_A0AAD0((__int64)v162, v190);
          }
          else
          {
            v76 = *((_BYTE **)v43 + 17);
            v43[168] = 0;
            if ( v76 != v43 + 152 )
              operator delete(v76);
          }
          if ( v192 && v190[0] != &v191 )
            operator delete(v190[0]);
        }
        else if ( v192 )
        {
          *((_QWORD *)v43 + 17) = v43 + 152;
          if ( v190[0] == &v191 )
          {
            *(__m128i *)(v43 + 152) = _mm_loadu_si128(&v191);
          }
          else
          {
            *((void **)v43 + 17) = v190[0];
            *((_QWORD *)v43 + 19) = v191.m128i_i64[0];
          }
          v100 = v190[1];
          v43[168] = 1;
          *((_QWORD *)v43 + 18) = v100;
        }
        if ( v187 != v189 )
          operator delete(v187);
        v77 = v185;
        v78 = (void **)v184;
        if ( v185 != v184 )
        {
          do
          {
            while ( *v78 != v78 + 2 )
            {
              operator delete(*v78);
              v78 += 4;
              if ( v77 == v78 )
                goto LABEL_97;
            }
            v78 += 4;
          }
          while ( v77 != v78 );
LABEL_97:
          v78 = (void **)v184;
        }
        if ( v78 )
          operator delete(v78);
        if ( v181 != src )
          operator delete(v181);
        if ( v178 != (void *)v155.m128i_i64[1] )
          operator delete(v178);
        if ( v176[0] != v155.m128i_i64[0] )
          operator delete((void *)v176[0]);
        v41 = v43 - 192;
      }
    }
  }
  LODWORD(v7) = 0;
  v79 = v169;
  v80 = 16LL * v171;
  if ( !v161 )
  {
    v129 = *((_DWORD *)v160 + 2);
LABEL_235:
    LOBYTE(v7) = v129 != 0;
  }
  operator delete(v79, v80, 8);
  if ( v168 )
  {
    v81 = ptr;
    if ( v167 )
    {
      v82 = 0;
      v83 = 8LL * (unsigned int)(v167 - 1) + 8;
      v84 = (char *)ptr;
      do
      {
        v85 = *(_QWORD **)&v84[v82];
        if ( v85 != (_QWORD *)-8LL && v85 )
        {
          operator delete(v85, *v85 + 9LL, 8);
          v84 = (char *)ptr;
        }
        v82 += 8;
      }
      while ( v82 != v83 );
      v81 = v84;
    }
  }
  else
  {
    v81 = ptr;
  }
  free(v81);
  if ( v174 != v163 + 5 )
    free(v174);
  v126 = v173;
  v127 = (void **)v172;
  if ( v173 != v172 )
  {
    do
    {
      while ( *v127 != v127 + 2 )
      {
        operator delete(*v127);
        v127 += 4;
        if ( v127 == v126 )
          goto LABEL_230;
      }
      v127 += 4;
    }
    while ( v126 != v127 );
LABEL_230:
    v127 = (void **)v172;
  }
  if ( v127 )
    operator delete(v127);
  return (unsigned int)v7;
}
