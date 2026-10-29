__int64 __fastcall sub_56C7D0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6,
        __m128 a7,
        char a8,
        __int64 a9)
{
  char **exception; // rbp
  char **v10; // rbp
  char **v11; // rbp
  const char *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // r13
  unsigned int v23; // r14d
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rbp
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v42; // rbx
  _QWORD *v43; // rcx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r13
  unsigned __int64 *v48; // rax
  char *v49; // rdi
  char *v50; // rdx
  __m128 *v51; // rax
  __int64 v52; // r9
  __m128 *v53; // r15
  __m128 *v54; // rdx
  const __m128i *v55; // rbx
  __m128i *v56; // rbp
  __int64 v57; // rdx
  __m128 *v58; // rsi
  __m128 *v59; // rdx
  __int64 v60; // rax
  __m128i si128; // xmm1
  _QWORD *v62; // rax
  _DWORD *v63; // rdi
  unsigned int v64; // r13d
  unsigned int v65; // edx
  unsigned int *v66; // rax
  unsigned int v67; // eax
  __m128i v68; // xmm0
  char v69; // r9
  const char *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdi
  unsigned int *v74; // rax
  __int64 v75; // r10
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // r9
  __int64 v79; // rbx
  int v80; // ebx
  __int64 v81; // r13
  int v82; // r8d
  __int64 v83; // rax
  __int64 v84; // rbp
  unsigned int v85; // edx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rbx
  __int64 v90; // rbp
  __int64 v91; // r14
  __int64 v92; // r13
  __int64 v93; // r15
  int v94; // r12d
  int v95; // eax
  __int64 v96; // r13
  int v97; // ebx
  __int64 v98; // r15
  int v99; // eax
  int v100; // r8d
  __int64 v101; // r13
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rax
  int v106; // ecx
  _QWORD *v107; // rdx
  const __m128i *v108; // rbx
  __m128i *v109; // rbp
  __int64 v110; // rdx
  __int64 v111; // rsi
  __m128i *v112; // rdx
  __int64 j; // [rsp+0h] [rbp-F8h]
  const char *v114; // [rsp+0h] [rbp-F8h]
  __int64 v115; // [rsp+8h] [rbp-F0h]
  __int64 v116; // [rsp+8h] [rbp-F0h]
  __int64 v117; // [rsp+8h] [rbp-F0h]
  __int64 v118; // [rsp+8h] [rbp-F0h]
  size_t v119; // [rsp+8h] [rbp-F0h]
  __int64 v120; // [rsp+8h] [rbp-F0h]
  __int64 v123; // [rsp+20h] [rbp-D8h]
  __int64 v124; // [rsp+20h] [rbp-D8h]
  __int64 v125; // [rsp+28h] [rbp-D0h]
  __int64 v126; // [rsp+28h] [rbp-D0h]
  int v127; // [rsp+28h] [rbp-D0h]
  __int64 v129; // [rsp+38h] [rbp-C0h]
  __int64 v130; // [rsp+38h] [rbp-C0h]
  __int64 v131; // [rsp+40h] [rbp-B8h]
  const char *v132; // [rsp+40h] [rbp-B8h]
  unsigned int v133; // [rsp+4Ch] [rbp-ACh]
  char v134; // [rsp+4Ch] [rbp-ACh]
  __int64 v135; // [rsp+50h] [rbp-A8h]
  __int64 v136; // [rsp+58h] [rbp-A0h]
  unsigned int v138; // [rsp+70h] [rbp-88h]
  char *v139; // [rsp+78h] [rbp-80h]
  const char *i; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v141[16]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v142; // [rsp+A0h] [rbp-58h] BYREF
  _OWORD v143[5]; // [rsp+A8h] [rbp-50h] BYREF

  v14 = "join_project";
  v15 = a9;
  sub_644D80(v141, "join_project", 1);
  v138 = *(_DWORD *)(a1 + 64);
  v135 = *(_QWORD *)(a1 + 152);
  if ( v135 == 0xFFFFFFFFLL )
    v135 = *(_QWORD *)(a1 + 80);
  if ( a3 )
  {
    v62 = (_QWORD *)sub_186B270(0x18u);
    *v62 = 2;
    v63 = v62 + 1;
    for ( i = (const char *)(v62 + 1); ; i = (const char *)(v66 + 2) )
    {
      v67 = *(v63 - 2);
      if ( v67 >= a3 )
        break;
      v64 = (3 * v67 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v67 + 8 >= v65 || v67 >= v64 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v142, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v142);
        sub_233E40((__int64)&v142);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v63 - 2, v65);
      v63 = v66 + 2;
      *v66 = v64;
    }
    *(v63 - 1) = a3;
    v136 = a3;
    memset(v63, 0, 8LL * a3);
    v68.m128i_i64[0] = 0;
    v139 = (char *)sub_56C1C0(a2, a3, a5);
    v69 = 1;
    v142 = 0;
    v134 = 0;
    v124 = 0;
    v143[0] = 0;
    if ( !v135 )
      goto LABEL_101;
    while ( 1 )
    {
      v70 = i;
      v71 = 0;
      v72 = *(_QWORD *)(a1 + 40);
      v73 = *(_QWORD *)(a1 + 88) + v124;
      do
      {
        v74 = (unsigned int *)(v72 + 32LL * *(unsigned int *)(a4 + 4 * v71));
        v75 = *((_QWORD *)v74 + 1) & (*(_QWORD *)(v73 + *v74) >> v74[1]);
        if ( *(_QWORD *)&v70[8 * v71] != v75 )
        {
          *(_QWORD *)&v70[8 * v71] = v75;
          v69 = 1;
        }
        ++v71;
      }
      while ( v71 != v136 );
      if ( v69 )
      {
        v70 = v139;
        (*(void (__fastcall **)(__int64 *, char *, const char **))(*(_QWORD *)v139 + 24LL))(&v142, v139, &i);
        v134 = v142;
      }
      if ( v134 )
      {
        v114 = (const char *)v143;
        v132 = (char *)v143 + 8;
      }
      else
      {
        v132 = *((const char **)&v143[0] + 1);
        v114 = *(const char **)&v143[0];
        if ( *((_QWORD *)&v143[0] + 1) == *(_QWORD *)&v143[0] )
          goto LABEL_100;
      }
      v76 = *(_QWORD *)(v15 + 152);
      do
      {
        v77 = *(_QWORD *)v114;
        if ( v76 == 0xFFFFFFFFLL )
          goto LABEL_138;
        while ( 1 )
        {
          sub_56A5B0(v15, v70, *(double *)v68.m128i_i64);
          v78 = *(_QWORD *)(v15 + 88) + *(_QWORD *)(v15 + 152);
          v79 = *(_QWORD *)(a2 + 88) + v77;
          if ( a8 )
            sub_569B10((__int64 *)(a2 + 40), a1 + 40, (_QWORD *)(v15 + 40), v79, *(_QWORD *)(a1 + 88) + v124, v78, a6);
          else
            sub_569B10((__int64 *)(a1 + 40), a2 + 40, (_QWORD *)(v15 + 40), *(_QWORD *)(a1 + 88) + v124, v79, v78, a6);
          v80 = *(_DWORD *)(v15 + 136);
          v81 = *(_QWORD *)(v15 + 152);
          if ( 3 * v80 < (unsigned int)(4 * (*(_DWORD *)(v15 + 140) + *(_DWORD *)(v15 + 144))) )
          {
            v119 = 16LL * (unsigned int)(2 * v80);
            v105 = sub_186B270(v119);
            v106 = 2 * v80;
            if ( 2 * v80 )
            {
              v107 = (_QWORD *)v105;
              do
              {
                *v107 = 0;
                v107 += 4;
                *(v107 - 2) = 0;
              }
              while ( (_QWORD *)(32LL * (v80 & 0x7FFFFFFF) + v105) != v107 );
            }
            v108 = *(const __m128i **)(v15 + 128);
            v109 = (__m128i *)&v108[*(unsigned int *)(v15 + 136)];
            if ( v108 != v109 )
            {
              do
              {
                while ( v108->m128i_i32[1] != 2 )
                {
                  if ( v109 == ++v108 )
                    goto LABEL_151;
                }
                v110 = 16LL * (v108->m128i_i32[0] & (unsigned int)(v106 - 1));
                v111 = v105 + v110;
                if ( v119 == v110 )
                {
LABEL_155:
                  if ( v105 == v111 )
                  {
LABEL_162:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v112 = (__m128i *)v105;
                  while ( v112->m128i_i32[1] )
                  {
                    if ( (__m128i *)v111 == ++v112 )
                      goto LABEL_162;
                  }
                }
                else
                {
                  v112 = (__m128i *)(v105 + v110);
                  while ( v112->m128i_i32[1] )
                  {
                    if ( (__m128i *)(v105 + v119) == ++v112 )
                      goto LABEL_155;
                  }
                }
                v68 = _mm_loadu_si128(v108++);
                *v112 = v68;
              }
              while ( v109 != v108 );
LABEL_151:
              v109 = *(__m128i **)(v15 + 128);
            }
            if ( v109 )
            {
              v127 = v106;
              v120 = v105;
              sub_186B220(v109);
              v106 = v127;
              v105 = v120;
            }
            *(_QWORD *)(v15 + 128) = v105;
            *(_DWORD *)(v15 + 136) = v106;
            *(_DWORD *)(v15 + 144) = 0;
          }
          v82 = sub_17E8B20(v81 + **(_QWORD **)(v15 + 96), *(unsigned int *)(v15 + 104), 0);
          v83 = *(unsigned int *)(v15 + 136);
          v84 = *(_QWORD *)(v15 + 128);
          v85 = v83 - 1;
          v83 *= 16;
          v86 = v84 + v83;
          v87 = 16LL * (v82 & v85);
          v88 = v84 + v87;
          if ( v87 == v83 )
          {
            v91 = 0;
LABEL_122:
            if ( v84 == v88 )
            {
LABEL_131:
              sub_1872CE0("");
              sub_1873130(114, 461);
            }
            v118 = v81;
            v97 = v82;
            v98 = v88;
            while ( 2 )
            {
              while ( 1 )
              {
                v99 = *(_DWORD *)(v84 + 4);
                if ( v99 != 2 )
                  break;
                if ( v97 != *(_DWORD *)v84 )
                  goto LABEL_126;
                v96 = *(_QWORD *)(v84 + 8);
                if ( !memcmp(
                        (const void *)(v96 + **(_QWORD **)(v15 + 112)),
                        (const void *)(**(_QWORD **)(v15 + 112) + v118),
                        *(unsigned int *)(v15 + 120)) )
                  goto LABEL_118;
                v84 += 16;
                if ( v98 == v84 )
                  goto LABEL_131;
              }
              if ( !v99 )
              {
                v101 = v118;
                v100 = v97;
                if ( !v91 )
                {
                  v91 = v84;
                  goto LABEL_135;
                }
LABEL_134:
                --*(_DWORD *)(v15 + 144);
                goto LABEL_135;
              }
              v91 = v84;
LABEL_126:
              v84 += 16;
              if ( v98 == v84 )
                goto LABEL_131;
              continue;
            }
          }
          v130 = *(_QWORD *)(v15 + 128);
          v89 = v84 + v87;
          v90 = v81;
          v91 = 0;
          v92 = v15;
          v126 = v88;
          v93 = v86;
          v94 = v82;
LABEL_114:
          v95 = *(_DWORD *)(v89 + 4);
          if ( v95 != 2 )
            break;
          if ( v94 != *(_DWORD *)v89 )
            goto LABEL_113;
          v117 = *(_QWORD *)(v89 + 8);
          if ( memcmp(
                 (const void *)(v117 + **(_QWORD **)(v92 + 112)),
                 (const void *)(**(_QWORD **)(v92 + 112) + v90),
                 *(unsigned int *)(v92 + 120)) )
          {
            goto LABEL_113;
          }
          v15 = v92;
          v96 = v117;
LABEL_118:
          v76 = *(_QWORD *)(v15 + 152);
          if ( v76 != v96 )
            goto LABEL_119;
LABEL_136:
          v114 += 8;
          *(_QWORD *)(v15 + 152) = 0xFFFFFFFFLL;
          if ( v132 == v114 )
            goto LABEL_100;
          v77 = *(_QWORD *)v114;
LABEL_138:
          v103 = *(_QWORD *)(v15 + 80);
          v104 = *(unsigned int *)(v15 + 72);
          *(_QWORD *)(v15 + 152) = v103;
          v70 = (const char *)(v103 + v104);
          sub_5716E0(v15 + 72, v70);
        }
        if ( v95 )
        {
          v91 = v89;
LABEL_113:
          v89 += 16;
          if ( v93 == v89 )
          {
            v82 = v94;
            v88 = v126;
            v15 = v92;
            v81 = v90;
            v84 = v130;
            goto LABEL_122;
          }
          goto LABEL_114;
        }
        v100 = v94;
        v15 = v92;
        v101 = v90;
        if ( v91 )
          goto LABEL_134;
        v91 = v89;
LABEL_135:
        *(_DWORD *)v91 = v100;
        v102 = *(_DWORD *)(v15 + 140);
        *(_QWORD *)(v91 + 8) = v101;
        *(_DWORD *)(v91 + 4) = 2;
        *(_DWORD *)(v15 + 140) = v102 + 1;
        v76 = *(_QWORD *)(v15 + 152);
        if ( v76 == v101 )
          goto LABEL_136;
LABEL_119:
        v114 += 8;
        v70 = v132;
      }
      while ( v114 != v132 );
LABEL_100:
      v69 = 0;
      v124 += v138;
      if ( v135 == v124 )
      {
LABEL_101:
        if ( i )
          sub_186B220((void *)(i - 8));
        return sub_644EE0(v141);
      }
    }
  }
  v131 = *(_QWORD *)(a2 + 152);
  if ( v131 == 0xFFFFFFFFLL )
    v131 = *(_QWORD *)(a2 + 80);
  if ( !v135 )
    return sub_644EE0(v141);
  v129 = 0;
  v16 = 0;
  v133 = *(_DWORD *)(a2 + 64);
  if ( !v131 )
  {
    do
      v16 += v138;
    while ( v135 != v16 );
    return sub_644EE0(v141);
  }
  v18 = *(_QWORD *)(a9 + 152);
LABEL_11:
  while ( 2 )
  {
    for ( j = 0; j != v131; j += v133 )
    {
      if ( v18 == 0xFFFFFFFFLL )
        goto LABEL_45;
LABEL_13:
      sub_56A5B0(a9, v14, *(double *)a7.m128_u64);
      v19 = *(_QWORD *)(a9 + 88) + *(_QWORD *)(a9 + 152);
      v20 = *(_QWORD *)(a2 + 88) + j;
      if ( a8 )
        sub_569B10((__int64 *)(a2 + 40), a1 + 40, (_QWORD *)(a9 + 40), v20, *(_QWORD *)(a1 + 88) + v129, v19, a6);
      else
        sub_569B10((__int64 *)(a1 + 40), a2 + 40, (_QWORD *)(a9 + 40), *(_QWORD *)(a1 + 88) + v129, v20, v19, a6);
      v21 = *(_DWORD *)(a9 + 136);
      v22 = *(_QWORD *)(a9 + 152);
      v23 = 2 * v21;
      if ( 3 * v21 < (unsigned int)(4 * (*(_DWORD *)(a9 + 140) + *(_DWORD *)(a9 + 144))) )
      {
        v51 = (__m128 *)sub_186B270(16LL * v23);
        v52 = 16LL * v23;
        v53 = v51;
        if ( v23 )
        {
          v54 = &v51[2 * (v21 & 0x7FFFFFFF)];
          do
          {
            v51->m128_u64[0] = 0;
            v51 += 2;
            v51[-1].m128_u64[0] = 0;
          }
          while ( v54 != v51 );
        }
        v55 = *(const __m128i **)(a9 + 128);
        v56 = (__m128i *)&v55[*(unsigned int *)(a9 + 136)];
        if ( v55 != v56 )
        {
          do
          {
            while ( v55->m128i_i32[1] != 2 )
            {
              if ( v56 == ++v55 )
                goto LABEL_66;
            }
            v57 = 16LL * (v55->m128i_i32[0] & (v23 - 1));
            v58 = &v53[(unsigned __int64)v57 / 0x10];
            if ( v52 == v57 )
            {
LABEL_72:
              if ( v53 == v58 )
              {
LABEL_81:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v59 = v53;
              while ( v59->m128_i32[1] )
              {
                if ( v58 == ++v59 )
                  goto LABEL_81;
              }
            }
            else
            {
              v59 = &v53[(unsigned __int64)v57 / 0x10];
              while ( v59->m128_i32[1] )
              {
                if ( &v53[(unsigned __int64)v52 / 0x10] == ++v59 )
                  goto LABEL_72;
              }
            }
            a7 = (__m128)_mm_loadu_si128(v55++);
            *v59 = a7;
          }
          while ( v56 != v55 );
LABEL_66:
          v56 = *(__m128i **)(a9 + 128);
        }
        if ( v56 )
          sub_186B220(v56);
        *(_QWORD *)(a9 + 128) = v53;
        *(_DWORD *)(a9 + 136) = v23;
        *(_DWORD *)(a9 + 144) = 0;
      }
      v14 = (const char *)*(unsigned int *)(a9 + 104);
      v24 = sub_17E8B20(v22 + **(_QWORD **)(a9 + 96), v14, 0);
      v25 = *(unsigned int *)(a9 + 136);
      v26 = *(_QWORD *)(a9 + 128);
      v27 = v25 - 1;
      v28 = 16 * v25;
      v29 = 16LL * (v24 & v27);
      v30 = v26 + v29;
      if ( v29 == v28 )
      {
        v32 = 0;
LABEL_30:
        if ( v26 == v30 )
        {
LABEL_39:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v116 = v22;
        v37 = v30;
        while ( 2 )
        {
          while ( 1 )
          {
            v38 = *(_DWORD *)(v26 + 4);
            if ( v38 != 2 )
              break;
            if ( v24 != *(_DWORD *)v26 )
              goto LABEL_34;
            v36 = *(_QWORD *)(v26 + 8);
            v39 = **(_QWORD **)(a9 + 112);
            v14 = (const char *)(v39 + v116);
            if ( !memcmp((const void *)(v36 + v39), (const void *)(v39 + v116), *(unsigned int *)(a9 + 120)) )
              goto LABEL_25;
            v26 += 16;
            if ( v37 == v26 )
              goto LABEL_39;
          }
          if ( !v38 )
          {
            v22 = v116;
            if ( !v32 )
            {
              v32 = v26;
              goto LABEL_43;
            }
LABEL_42:
            --*(_DWORD *)(a9 + 144);
            goto LABEL_43;
          }
          v32 = v26;
LABEL_34:
          v26 += 16;
          if ( v37 == v26 )
            goto LABEL_39;
          continue;
        }
      }
      v31 = v26 + v29;
      v32 = 0;
      v125 = *(_QWORD *)(a9 + 128);
      v33 = v26 + v28;
      v123 = v30;
      while ( 1 )
      {
        v34 = *(_DWORD *)(v31 + 4);
        if ( v34 != 2 )
          break;
        if ( v24 == *(_DWORD *)v31 )
        {
          v35 = **(_QWORD **)(a9 + 112);
          v115 = *(_QWORD *)(v31 + 8);
          v14 = (const char *)(v35 + v22);
          if ( !memcmp((const void *)(v115 + v35), (const void *)(v35 + v22), *(unsigned int *)(a9 + 120)) )
          {
            v36 = v115;
LABEL_25:
            v18 = *(_QWORD *)(a9 + 152);
            if ( v18 != v36 )
              goto LABEL_26;
LABEL_44:
            *(_QWORD *)(a9 + 152) = 0xFFFFFFFFLL;
            j += v133;
            if ( v131 != j )
            {
LABEL_45:
              v41 = *(_QWORD *)(a9 + 80);
              v42 = v41 + *(unsigned int *)(a9 + 72);
              *(_QWORD *)(a9 + 152) = v41;
              *(_QWORD *)(a9 + 80) = v42;
              if ( v42 > 0xFFFFFFFFFFFFFFF7LL )
              {
                v11 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v142, "overflow resizing data section for sparse table");
                *v11 = (char *)off_1C63128;
                sub_2333C0(v11 + 1, &v142);
                sub_233E40((__int64)&v142);
                __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v43 = *(_QWORD **)(a9 + 88);
              v44 = v42 + 8;
              if ( !v43 )
              {
                v60 = sub_186B270(0x12u);
                si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
                v43 = (_QWORD *)(v60 + 16);
                v46 = 2;
                v45 = 0;
                *(_QWORD *)(a9 + 88) = v60 + 16;
                *(__m128i *)v60 = si128;
                if ( v44 > 2 )
                  goto LABEL_49;
                *(_QWORD *)(v60 + 8) = v44;
                v50 = (char *)v43 + v44;
                v49 = (char *)(v60 + 16);
                goto LABEL_53;
              }
              v45 = *(v43 - 1);
              if ( v45 >= v44 )
              {
                *(v43 - 1) = v44;
              }
              else
              {
                v46 = *(v43 - 2);
                if ( v46 >= v44 )
                {
                  *(v43 - 1) = v44;
                  v49 = (char *)v43 + v45;
                  v50 = (char *)v43 + v44;
                  goto LABEL_53;
                }
                do
                {
LABEL_49:
                  v47 = (3 * v46 + 1) >> 1;
                  v14 = (const char *)(v47 + 16);
                  if ( v46 + 16 >= v47 + 16 || v46 >= v47 )
                  {
                    v10 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v142, "Overflow encountered when expanding vector");
                    *v10 = (char *)off_1C63128;
                    sub_2333C0(v10 + 1, &v142);
                    sub_233E40((__int64)&v142);
                    __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v48 = (unsigned __int64 *)sub_186B300(v43 - 2, (size_t)v14);
                  v43 = v48 + 2;
                  *v48 = v47;
                  v46 = v47;
                  *(_QWORD *)(a9 + 88) = v48 + 2;
                }
                while ( v47 < v44 );
                v48[1] = v44;
                v49 = (char *)v43 + v45;
                v50 = (char *)v43 + v44;
                if ( v44 != v45 )
                {
LABEL_53:
                  v14 = nullptr;
                  memset(v49, 0, v50 - v49);
                }
              }
              goto LABEL_13;
            }
            v129 += v138;
            if ( v135 == v129 )
              return sub_644EE0(v141);
            v18 = 0xFFFFFFFFLL;
            goto LABEL_11;
          }
        }
LABEL_20:
        v31 += 16;
        if ( v33 == v31 )
        {
          v30 = v123;
          v26 = v125;
          goto LABEL_30;
        }
      }
      if ( v34 )
      {
        v32 = v31;
        goto LABEL_20;
      }
      if ( v32 )
        goto LABEL_42;
      v32 = v31;
LABEL_43:
      *(_DWORD *)v32 = v24;
      v40 = *(_DWORD *)(a9 + 140);
      *(_QWORD *)(v32 + 8) = v22;
      *(_DWORD *)(v32 + 4) = 2;
      *(_DWORD *)(a9 + 140) = v40 + 1;
      v18 = *(_QWORD *)(a9 + 152);
      if ( v18 == v22 )
        goto LABEL_44;
LABEL_26:
      ;
    }
    v129 += v138;
    if ( v135 != v129 )
      continue;
    return sub_644EE0(v141);
  }
}

