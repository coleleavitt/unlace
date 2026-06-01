__int64 __fastcall sub_B67520(__int64 a1, _DWORD *a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  char **v10; // rbp
  __int64 v11; // rdx
  char **v12; // rbp
  __int64 v13; // rdx
  char **v14; // rbp
  __int64 v15; // rdx
  char **v16; // rbp
  __int64 v17; // rdx
  char **v18; // rbp
  __int64 v19; // rdx
  _DWORD *v21; // r12
  __int64 v22; // rax
  unsigned int v23; // r14d
  unsigned int v24; // r13d
  _QWORD *v25; // rax
  unsigned int v26; // ebp
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int v30; // ebp
  unsigned int *v31; // rdx
  unsigned int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __m128i *v35; // r9
  __m128i *v36; // rsi
  __m128i *v37; // rdx
  unsigned __int64 v38; // rdi
  __int64 v39; // r10
  __m128i v40; // xmm0
  __m128i *v41; // r8
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r14
  _QWORD *v45; // rax
  unsigned int v46; // r14d
  _QWORD *v47; // r14
  unsigned int v48; // ebp
  _DWORD *v49; // rdi
  unsigned int v50; // r8d
  unsigned int v51; // ebx
  __int64 v52; // r14
  unsigned int v53; // esi
  _QWORD *v54; // rbp
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rax
  int v58; // edx
  _QWORD *v59; // r8
  unsigned int v60; // ebp
  __int64 v61; // rsi
  __int64 *v62; // rdx
  int v63; // eax
  int v64; // eax
  _QWORD *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rsi
  int v68; // eax
  _QWORD *v69; // rsi
  _QWORD *v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rsi
  int v73; // eax
  _QWORD *v74; // rsi
  unsigned int v76; // ebp
  size_t v77; // rsi
  unsigned int *v78; // rdx
  unsigned int v79; // edx
  __int64 v80; // r14
  __int64 v81; // rsi
  _QWORD *v82; // rdx
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // edx
  unsigned int v86; // ebp
  size_t v87; // rsi
  unsigned int *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdx
  _QWORD *v91; // rax
  unsigned int v92; // edx
  size_t v93; // rsi
  unsigned int v94; // ebp
  unsigned int *v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rax
  _QWORD *v99; // rax
  unsigned int v100; // edx
  size_t v101; // rsi
  unsigned int v102; // ebp
  unsigned int *v103; // rax
  unsigned int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rax
  _QWORD *v107; // rax
  unsigned __int64 v108; // r12
  unsigned int v109; // eax
  unsigned int v110; // ebx
  size_t v111; // rdi
  unsigned int *v112; // rax
  unsigned __int64 v113; // r14
  unsigned int *v114; // r13
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 *v117; // r10
  unsigned __int64 v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // rcx
  __m128i v121; // xmm0
  unsigned __int64 v122; // rcx
  __int64 v123; // r10
  unsigned __int64 v124; // rbp
  __int64 *v125; // rdi
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rsi
  unsigned int v129; // eax
  unsigned int v130; // ebx
  size_t v131; // rsi
  unsigned int *v132; // rax
  __int64 v133; // rsi
  unsigned int v134; // ebx
  size_t v135; // rsi
  unsigned int *v136; // rax
  __int64 v137; // rsi
  __int64 *v138; // rax
  unsigned __int64 v139; // rcx
  __int64 v140; // rdx
  unsigned int v141; // edx
  unsigned int v142; // ecx
  size_t v143; // rsi
  unsigned int v144; // ebp
  unsigned int *v145; // rax
  char *v146; // rdx
  char *v147; // r9
  __int64 v148; // rdx
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  unsigned int v154; // [rsp+8h] [rbp-90h]
  __int64 v155; // [rsp+8h] [rbp-90h]
  unsigned int v156; // [rsp+8h] [rbp-90h]
  unsigned int v157; // [rsp+8h] [rbp-90h]
  unsigned int v158; // [rsp+8h] [rbp-90h]
  unsigned int v159; // [rsp+10h] [rbp-88h]
  _QWORD *v160; // [rsp+10h] [rbp-88h]
  unsigned int v161; // [rsp+10h] [rbp-88h]
  unsigned int v162; // [rsp+10h] [rbp-88h]
  __int64 v163; // [rsp+18h] [rbp-80h]
  __int64 v164; // [rsp+20h] [rbp-78h]
  __int64 v165; // [rsp+28h] [rbp-70h]
  unsigned int v166; // [rsp+30h] [rbp-68h]
  unsigned int v167; // [rsp+34h] [rbp-64h]
  _DWORD *v168; // [rsp+38h] [rbp-60h]
  __int64 v169[11]; // [rsp+40h] [rbp-58h] BYREF

  v21 = a2;
  v22 = *(_QWORD *)(a1 + 8560);
  v23 = *a2;
  if ( !v22 )
  {
    v25 = *(_QWORD **)(a1 + 8832);
    v24 = 0;
    if ( v25 )
      goto LABEL_3;
LABEL_122:
    v27 = v23 + 1;
    if ( v23 == -1 )
      goto LABEL_19;
    v150 = (_QWORD *)sub_186B270(0x10u);
    v154 = 0;
    *v150 = 2;
    v25 = v150 + 1;
    *(_QWORD *)(a1 + 8832) = v25;
    goto LABEL_9;
  }
  v24 = *(_DWORD *)(v22 - 4);
  v25 = *(_QWORD **)(a1 + 8832);
  if ( !v25 )
    goto LABEL_122;
LABEL_3:
  v26 = *((_DWORD *)v25 - 1);
  if ( v23 < v26 )
    goto LABEL_19;
  v27 = v23 + 1;
  if ( v26 >= v23 + 1 )
  {
    *((_DWORD *)v25 - 1) = v27;
    goto LABEL_19;
  }
  v154 = *((_DWORD *)v25 - 1);
LABEL_9:
  while ( 1 )
  {
    v32 = *((_DWORD *)v25 - 2);
    if ( v32 >= v27 )
      break;
    v28 = (3 * v32 + 1) >> 1;
    v29 = 4 * v28 + 8;
    v30 = v28;
    if ( 4 * v32 + 8 >= (unsigned int)v29 || v32 >= v28 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v169, "Overflow encountered when expanding vector", v7);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v169);
      sub_233E40((__int64)v169);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = (unsigned int *)sub_186B300(v25 - 1, v29);
    v25 = v31 + 2;
    *(_QWORD *)(a1 + 8832) = v31 + 2;
    *v31 = v30;
  }
  *((_DWORD *)v25 - 1) = v27;
  v33 = 4LL * v27;
  v34 = 4LL * v154;
  v35 = (__m128i *)((char *)v25 + v33);
  v36 = (__m128i *)((char *)v25 + v34);
  if ( v34 != v33 )
  {
    v37 = (__m128i *)((char *)v25 + v34);
    v38 = ((unsigned __int64)((char *)&v35[-1].m128i_u64[1] + 4 - (char *)v36) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v35[-1].m128i_u64[1] + 4 - (char *)v36) <= 8 )
      goto LABEL_16;
    v39 = v38 >> 2;
    v40 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0);
    v41 = &v36[v39];
    if ( ((v39 * 16) & 0x10) == 0 || (v37 = v36 + 1, *v36 = v40, v41 != &v36[1]) )
    {
      do
      {
        *v37 = v40;
        v37 += 2;
        v37[-1] = v40;
      }
      while ( v41 != v37 );
    }
    v36 = (__m128i *)((char *)v36 + 4 * (v38 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v38 & 3) != 0 )
    {
LABEL_16:
      v36->m128i_i32[0] = 0x7FFFFFFF;
      if ( v35 != (__m128i *)((char *)v36->m128i_i64 + 4) )
      {
        v36->m128i_i32[1] = 0x7FFFFFFF;
        if ( v35 != (__m128i *)&v36->m128i_u64[1] )
          v36->m128i_i32[2] = 0x7FFFFFFF;
      }
    }
  }
LABEL_19:
  v42 = v24 + 1;
  *((_DWORD *)v25 + v23) = v24;
  v43 = *(_QWORD **)(a1 + 8872);
  if ( v43 )
  {
    v44 = *((unsigned int *)v43 - 1);
    if ( (unsigned int)v44 >= v42 )
    {
      v45 = *(_QWORD **)(a1 + 8880);
      if ( v45 )
        goto LABEL_22;
      if ( v24 == -1 )
      {
LABEL_132:
        v47 = *(_QWORD **)(a1 + 8840);
        goto LABEL_25;
      }
LABEL_52:
      v46 = 0;
      v84 = (_QWORD *)sub_186B270(0x18u);
      *v84 = 2;
      v85 = *(_DWORD *)v84;
      v45 = v84 + 1;
      *(_QWORD *)(a1 + 8880) = v45;
      if ( v85 < v42 )
        goto LABEL_53;
      goto LABEL_57;
    }
  }
  else
  {
    if ( v24 == -1 )
    {
      if ( *(_QWORD *)(a1 + 8880) )
      {
        v47 = *(_QWORD **)(a1 + 8840);
        if ( v47 )
          goto LABEL_25;
LABEL_118:
        v148 = *(_QWORD *)(a1 + 8848);
        MEMORY[0x7FFFFFFF8] = v21;
        if ( v148 )
        {
          v52 = 0xFFFFFFFFLL;
          v164 = 0x7FFFFFFF8LL;
          v51 = 0;
          *(_BYTE *)(v148 + 4294967294LL) = 0;
          v155 = 4294967294LL;
          v163 = 0xFFFFFFFFLL;
          *(_BYTE *)(*(_QWORD *)(a1 + 8848) + 0xFFFFFFFFLL) = 0;
          v54 = *(_QWORD **)(a1 + 8856);
          goto LABEL_29;
        }
        v164 = 0x7FFFFFFF8LL;
        v50 = -2;
        v52 = 0xFFFFFFFFLL;
        v163 = 0xFFFFFFFFLL;
        goto LABEL_125;
      }
      goto LABEL_132;
    }
    v44 = 0;
    v149 = (_QWORD *)sub_186B270(0x28u);
    *v149 = 2;
    v43 = v149 + 1;
    *(_QWORD *)(a1 + 8872) = v43;
  }
  while ( 1 )
  {
    v79 = *((_DWORD *)v43 - 2);
    if ( v79 >= v42 )
      break;
    v76 = (3 * v79 + 1) >> 1;
    v77 = 16 * v76 + 8;
    if ( 16 * v79 + 8 >= (unsigned int)v77 || v79 >= v76 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v169, "Overflow encountered when expanding vector", v5);
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v169);
      sub_233E40((__int64)v169);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v78 = (unsigned int *)sub_186B300(v43 - 1, v77);
    v43 = v78 + 2;
    *(_QWORD *)(a1 + 8872) = v78 + 2;
    *v78 = v76;
  }
  v80 = 16 * v44;
  *((_DWORD *)v43 - 1) = v42;
  v81 = 16LL * v42;
  v82 = &v43[(unsigned __int64)v80 / 8];
  v83 = &v43[(unsigned __int64)v81 / 8];
  if ( v80 == v81 )
  {
    v45 = *(_QWORD **)(a1 + 8880);
    if ( v45 )
    {
      v46 = *((_DWORD *)v45 - 1);
      if ( v46 >= v42 )
        goto LABEL_137;
      goto LABEL_56;
    }
    goto LABEL_52;
  }
  do
  {
    v82 += 2;
    *((_OWORD *)v82 - 1) = 0;
    *(v82 - 2) = 2;
  }
  while ( v83 != v82 );
  v45 = *(_QWORD **)(a1 + 8880);
  if ( !v45 )
    goto LABEL_52;
LABEL_22:
  v46 = *((_DWORD *)v45 - 1);
  if ( v46 < v42 )
  {
LABEL_56:
    while ( 1 )
    {
      v85 = *((_DWORD *)v45 - 2);
      if ( v85 >= v42 )
        break;
LABEL_53:
      v86 = (3 * v85 + 1) >> 1;
      v87 = 8 * v86 + 8;
      if ( 8 * v85 + 8 >= (unsigned int)v87 || v85 >= v86 )
      {
        v16 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v169, "Overflow encountered when expanding vector", v17);
        *v16 = (char *)off_1C63128;
        sub_2333C0(v16 + 1, v169);
        sub_233E40((__int64)v169);
        __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v88 = (unsigned int *)sub_186B300(v45 - 1, v87);
      v45 = v88 + 2;
      *(_QWORD *)(a1 + 8880) = v88 + 2;
      *v88 = v86;
    }
LABEL_57:
    *((_DWORD *)v45 - 1) = v42;
    v89 = 8LL * v46;
    v90 = 8LL * v42;
    if ( v89 != v90 )
    {
      memset(&v45[(unsigned __int64)v89 / 8], 0, v90 - v89);
      v47 = *(_QWORD **)(a1 + 8840);
      if ( !v47 )
        goto LABEL_59;
LABEL_24:
      v48 = *((_DWORD *)v47 - 1);
      if ( v48 >= v42 )
        goto LABEL_25;
      goto LABEL_61;
    }
LABEL_137:
    v47 = *(_QWORD **)(a1 + 8840);
    if ( !v47 )
      goto LABEL_60;
    goto LABEL_24;
  }
  v47 = *(_QWORD **)(a1 + 8840);
  if ( v47 )
    goto LABEL_24;
LABEL_59:
  if ( v24 == -1 )
    goto LABEL_118;
LABEL_60:
  v48 = 0;
  v91 = (_QWORD *)sub_186B270(0x18u);
  v47 = v91 + 1;
  *v91 = 2;
  *(_QWORD *)(a1 + 8840) = v91 + 1;
LABEL_61:
  v156 = v48;
  while ( 1 )
  {
    v96 = *((_DWORD *)v47 - 2);
    if ( v96 >= v42 )
      break;
    v92 = (3 * v96 + 1) >> 1;
    v93 = 8 * v92 + 8;
    v94 = v92;
    if ( 8 * v96 + 8 >= (unsigned int)v93 || v96 >= v92 )
    {
      v8 = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v169, "Overflow encountered when expanding vector", v9);
      *v8 = (char *)off_1C63128;
      sub_2333C0(v8 + 1, v169);
      sub_233E40((__int64)v169);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v95 = (unsigned int *)sub_186B300(v47 - 1, v93);
    v47 = v95 + 2;
    *v95 = v94;
    *(_QWORD *)(a1 + 8840) = v95 + 2;
  }
  *((_DWORD *)v47 - 1) = v42;
  v97 = 8LL * v42;
  v98 = 8LL * v156;
  if ( v98 != v97 )
    memset(&v47[(unsigned __int64)v98 / 8], 0, v97 - v98);
LABEL_25:
  v49 = *(_DWORD **)(a1 + 8848);
  v50 = 2 * v24;
  v47[v24] = v21;
  v51 = 2 * v24 + 2;
  v163 = v24;
  v52 = 2 * v24 + 1;
  v164 = 8LL * v24;
  if ( !v49 )
  {
    if ( 2 * v24 != -2 )
    {
      v151 = sub_186B270(0xAu);
      v141 = 2;
      v53 = 0;
      v50 = 2 * v24;
      v49 = (_DWORD *)(v151 + 8);
      *(_QWORD *)v151 = 2;
      *(_QWORD *)(a1 + 8848) = v151 + 8;
      if ( v51 > 2 )
        goto LABEL_109;
      *(_DWORD *)(v151 + 4) = v51;
      v147 = (char *)(v151 + 8);
      v146 = (char *)v49 + v51;
LABEL_114:
      v158 = v50;
      memset(v147, 0, v146 - v147);
      v49 = *(_DWORD **)(a1 + 8848);
      v50 = v158;
      goto LABEL_27;
    }
LABEL_125:
    *(_BYTE *)v50 = 0;
    v51 = 0;
    v155 = v50;
    *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v52) = 0;
    v54 = *(_QWORD **)(a1 + 8856);
    goto LABEL_29;
  }
  v53 = *(v49 - 1);
  if ( v53 >= v51 )
  {
LABEL_27:
    *((_BYTE *)v49 + v50) = 0;
    v155 = v50;
    *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v52) = 0;
    v54 = *(_QWORD **)(a1 + 8856);
    if ( v54 )
      goto LABEL_28;
    if ( 2 * v24 == -2 )
      goto LABEL_29;
    goto LABEL_129;
  }
  v141 = *(v49 - 2);
  if ( v141 >= v51 )
  {
    *(v49 - 1) = v51;
    v147 = (char *)v49 + v53;
    v146 = (char *)v49 + v51;
    goto LABEL_114;
  }
LABEL_109:
  v157 = v53;
  v162 = v50;
  do
  {
    v142 = (3 * v141 + 1) >> 1;
    v143 = v142 + 8;
    v144 = v142;
    if ( v141 + 8 >= (unsigned int)v143 || v141 >= v142 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v169, "Overflow encountered when expanding vector", v3);
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v169);
      sub_233E40((__int64)v169);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v145 = (unsigned int *)sub_186B300(v49 - 2, v143);
    v141 = v144;
    v49 = v145 + 2;
    *v145 = v144;
    *(_QWORD *)(a1 + 8848) = v145 + 2;
  }
  while ( v144 < v51 );
  v50 = v162;
  v145[1] = v51;
  v146 = (char *)v49 + v51;
  v147 = (char *)v49 + v157;
  if ( v51 != v157 )
    goto LABEL_114;
  *((_BYTE *)v145 + v162 + 8) = 0;
  v155 = v162;
  *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v52) = 0;
  v54 = *(_QWORD **)(a1 + 8856);
  if ( v54 )
  {
LABEL_28:
    v166 = *((_DWORD *)v54 - 1);
    if ( v166 >= v51 )
      goto LABEL_29;
    goto LABEL_77;
  }
LABEL_129:
  v166 = 0;
  v107 = (_QWORD *)sub_186B270(0x18u);
  v54 = v107 + 1;
  *v107 = 2;
  *(_QWORD *)(a1 + 8856) = v107 + 1;
LABEL_77:
  v165 = 2 * v24 + 1;
  v161 = 2 * v24 + 2;
  v167 = v24;
  v168 = v21;
  v108 = (unsigned __int64)v54;
  while ( 1 )
  {
    v109 = *(_DWORD *)(v108 - 8);
    v51 = v161;
    if ( v109 >= v161 )
      break;
    while ( 1 )
    {
      v110 = (3 * v109 + 1) >> 1;
      v111 = 8 * v110 + 8;
      if ( 8 * v109 + 8 >= (unsigned int)v111 || v109 >= v110 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v169, "Overflow encountered when expanding vector", v15);
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v169);
        sub_233E40((__int64)v169);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v112 = (unsigned int *)sub_186B270(v111);
      v113 = *(_QWORD *)(a1 + 8856);
      v114 = v112;
      v108 = (unsigned __int64)(v112 + 2);
      if ( !v113 )
        break;
      v115 = *(unsigned int *)(v113 - 4);
      v112[1] = v115;
      v116 = 8 * v115;
      v117 = (__int64 *)(v113 + 8 * v115);
      if ( (__int64 *)v113 != v117 )
      {
        v118 = v116 - 8;
        if ( (unsigned __int64)(v116 - 8) <= 8 || v108 < v113 + 16 && v113 < (unsigned __int64)(v114 + 6) )
        {
          v138 = (__int64 *)v113;
          v139 = v108;
          do
          {
            v140 = *v138;
            *v138++ = 0;
            v139 += 8LL;
            *(_QWORD *)(v139 - 8) = v140;
          }
          while ( v138 != v117 );
        }
        else
        {
          v119 = 0;
          v120 = (v118 >> 3) + 1;
          do
          {
            v121 = _mm_loadu_si128((const __m128i *)(v113 + v119 * 4));
            *(_OWORD *)(v113 + v119 * 4) = 0;
            *(__m128i *)&v114[v119 + 2] = v121;
            v119 += 4;
          }
          while ( v119 != 4 * (v120 >> 1) );
          if ( (v120 & 1) != 0 )
          {
            v122 = 8 * (v120 & 0xFFFFFFFFFFFFFFFELL);
            v123 = *(_QWORD *)(v113 + v122);
            *(_QWORD *)(v113 + v122) = 0;
            *(_QWORD *)&v114[v122 / 4 + 2] = v123;
          }
        }
      }
      v124 = v113 + 8 * v115;
      if ( (_DWORD)v115 )
      {
        do
        {
          v125 = (__int64 *)v113;
          v113 += 8LL;
          sub_9676C0(v125);
        }
        while ( v113 != v124 );
        v113 = *(_QWORD *)(a1 + 8856);
      }
      sub_186B220((void *)(v113 - 8));
      *v114 = v110;
      v51 = v161;
      v109 = *(_DWORD *)(v108 - 8);
      *(_QWORD *)(a1 + 8856) = v108;
      if ( v109 >= v161 )
        goto LABEL_94;
    }
    v112[1] = 0;
    *(_QWORD *)(a1 + 8856) = v108;
    *v112 = v110;
  }
LABEL_94:
  v54 = (_QWORD *)v108;
  v52 = v165;
  v126 = 8LL * v51;
  *(_DWORD *)(v108 - 4) = v51;
  v24 = v167;
  v127 = 8LL * v166;
  v21 = v168;
  if ( v127 != v126 )
    memset(&v54[(unsigned __int64)v127 / 8], 0, v126 - v127);
LABEL_29:
  v55 = v54[v155];
  if ( v55 )
  {
    v56 = *(_DWORD *)(v55 - 4);
    *(_DWORD *)(v55 - 12) = 0;
    *(_DWORD *)(v55 - 8) = v56;
  }
  v57 = v54[v52];
  if ( v57 )
  {
    v58 = *(_DWORD *)(v57 - 4);
    *(_DWORD *)(v57 - 12) = 0;
    *(_DWORD *)(v57 - 8) = v58;
  }
  v59 = *(_QWORD **)(a1 + 8864);
  if ( v59 )
  {
    v60 = *((_DWORD *)v59 - 1);
    if ( v60 >= v51 )
      goto LABEL_35;
  }
  else
  {
    if ( !v51 )
      goto LABEL_35;
    v60 = 0;
    v99 = (_QWORD *)sub_186B270(0x10u);
    v59 = v99 + 1;
    *v99 = 2;
    *(_QWORD *)(a1 + 8864) = v99 + 1;
  }
  v159 = v60;
  while ( 1 )
  {
    v104 = *((_DWORD *)v59 - 2);
    if ( v104 >= v51 )
      break;
    v100 = (3 * v104 + 1) >> 1;
    v101 = 4 * v100 + 8;
    v102 = v100;
    if ( 4 * v104 + 8 >= (unsigned int)v101 || v104 >= v100 )
    {
      v12 = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v169, "Overflow encountered when expanding vector", v13);
      *v12 = (char *)off_1C63128;
      sub_2333C0(v12 + 1, v169);
      sub_233E40((__int64)v169);
      __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v103 = (unsigned int *)sub_186B300(v59 - 1, v101);
    v59 = v103 + 2;
    *v103 = v102;
    *(_QWORD *)(a1 + 8864) = v103 + 2;
  }
  *((_DWORD *)v59 - 1) = v51;
  v105 = 4LL * v51;
  v106 = 4LL * v159;
  if ( v106 != v105 )
  {
    v160 = v59;
    memset((char *)v59 + v106, 0, v105 - v106);
    v59 = v160;
  }
LABEL_35:
  v61 = qword_1C7ED60;
  *((_DWORD *)v59 + v155) = 0;
  v62 = (__int64 *)(*(_QWORD *)(a1 + 8872) + 16 * v163);
  *((_DWORD *)v59 + v52) = 0;
  v63 = *(_DWORD *)(a1 + 9464);
  *v62 = v61;
  v62[1] = (unsigned __int64)(v63 & 0x7FFFFF) << 32;
  v64 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 508LL);
  if ( v64 == 2 || v64 == 1 && *(_BYTE *)(a1 + 10320) )
  {
    v128 = *(_QWORD *)(a1 + 8880);
    v129 = 214013 * *(_DWORD *)(a1 + 7504) + 2531011;
    *(_DWORD *)(a1 + 7504) = v129;
    *(double *)(v128 + v164) = -((double)((HIWORD(v129) & 0x7FFF) % 0x3E8u) / 1000.0);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8880) + v164) = 0;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8952) + 16LL))(*(_QWORD *)(a1 + 8952), v24);
  v65 = *(_QWORD **)(a1 + 8560);
  ++v21[2];
  if ( v65 )
  {
    v66 = *((_DWORD *)v65 - 1);
    if ( v66 == *((_DWORD *)v65 - 2) )
    {
      v130 = (3 * v66 + 1) >> 1;
      v131 = 8 * v130 + 8;
      if ( 8 * v66 + 8 >= (unsigned int)v131 || v66 >= v130 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v169, "Overflow encountered when expanding vector", v11);
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v169);
        sub_233E40((__int64)v169);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v132 = (unsigned int *)sub_186B300(v65 - 1, v131);
      v133 = v132[1];
      v65 = v132 + 2;
      *v132 = v130;
      *(_QWORD *)(a1 + 8560) = v132 + 2;
      LODWORD(v132) = v133;
      v69 = &v65[v133];
      v68 = (_DWORD)v132 + 1;
    }
    else
    {
      v67 = v66;
      v68 = v66 + 1;
      v69 = &v65[v67];
    }
  }
  else
  {
    v152 = (_QWORD *)sub_186B270(0x18u);
    v65 = v152 + 1;
    *v152 = 2;
    v68 = 1;
    *(_QWORD *)(a1 + 8560) = v65;
    v69 = v65;
  }
  *v69 = v21;
  *((_DWORD *)v65 - 1) = v68;
  v70 = *(_QWORD **)(a1 + 9456);
  if ( v70 )
  {
    v71 = *((_DWORD *)v70 - 1);
    if ( v71 == *((_DWORD *)v70 - 2) )
    {
      v134 = (3 * v71 + 1) >> 1;
      v135 = 8 * v134 + 8;
      if ( 8 * v71 + 8 >= (unsigned int)v135 || v71 >= v134 )
      {
        v18 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v169, "Overflow encountered when expanding vector", v19);
        *v18 = (char *)off_1C63128;
        sub_2333C0(v18 + 1, v169);
        sub_233E40((__int64)v169);
        __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = (unsigned int *)sub_186B300(v70 - 1, v135);
      v137 = v136[1];
      v70 = v136 + 2;
      *v136 = v134;
      *(_QWORD *)(a1 + 9456) = v136 + 2;
      LODWORD(v136) = v137;
      v74 = &v70[v137];
      v73 = (_DWORD)v136 + 1;
    }
    else
    {
      v72 = v71;
      v73 = v71 + 1;
      v74 = &v70[v72];
    }
  }
  else
  {
    v153 = (_QWORD *)sub_186B270(0x18u);
    v70 = v153 + 1;
    *v153 = 2;
    v73 = 1;
    *(_QWORD *)(a1 + 9456) = v70;
    v74 = v70;
  }
  *v74 = a1 + 9552;
  *((_DWORD *)v70 - 1) = v73;
  ++*(_DWORD *)(a1 + 40);
  return v24;
}

