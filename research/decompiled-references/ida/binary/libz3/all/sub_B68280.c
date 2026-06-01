__m128i *__fastcall sub_B68280(
        __int64 a1,
        unsigned int *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        double a6,
        double a7,
        __m128 a8)
{
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
  char **v20; // rbp
  __int64 v21; // rdx
  char **exception; // rbp
  __int64 v23; // rdx
  __int64 v28; // rbx
  __int64 v29; // r13
  int v30; // r8d
  __int64 v31; // rax
  char *v32; // rcx
  unsigned int v33; // edi
  int v34; // edx
  char *v35; // rsi
  __int64 v36; // rdx
  char *v37; // rbp
  char *i; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __m128i *v41; // rbp
  __int64 v42; // rcx
  unsigned int v43; // edx
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rcx
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __m128i **v58; // rcx
  __int8 v59; // al
  __int64 v60; // rax
  unsigned int v62; // r12d
  unsigned int v63; // ebx
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // r13
  int v71; // eax
  unsigned int v72; // r15d
  unsigned __int32 v73; // eax
  unsigned __int32 v74; // eax
  unsigned __int32 v75; // ebx
  unsigned int v76; // r12d
  size_t v77; // rdi
  unsigned int *v78; // rax
  __int64 *v79; // rbp
  unsigned int *v80; // rbx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 *v83; // r10
  unsigned __int64 v84; // rsi
  __int64 *v85; // r9
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rsi
  __m128i v88; // xmm0
  unsigned __int64 v89; // rsi
  __int64 v90; // r9
  __int64 *v91; // r15
  void *v92; // rdi
  __int64 v93; // rax
  unsigned int v94; // r12d
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rcx
  unsigned int v98; // r13d
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rcx
  unsigned int v102; // r12d
  size_t v103; // rsi
  unsigned int *v104; // rax
  __int64 v105; // rcx
  __m128 v106; // xmm0
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  _QWORD *v111; // r12
  _QWORD *v112; // rdx
  unsigned int v113; // eax
  __int64 v114; // rcx
  int v115; // eax
  __m128i **v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // r12
  unsigned __int8 v122; // dl
  unsigned __int8 v123; // r15
  __m128i *v124; // rax
  unsigned int v125; // ecx
  __int64 v126; // rsi
  int v127; // ecx
  __m128i *v128; // rsi
  _DWORD *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 *v133; // r12
  __int64 *v134; // r13
  __int64 v135; // rax
  unsigned int v136; // r13d
  unsigned int v137; // ecx
  unsigned int *v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rdx
  int v141; // r12d
  __int64 v142; // rax
  __m128i si128; // xmm0
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rsi
  char v147; // dl
  unsigned __int64 v148; // r12
  __m128i *v149; // rax
  unsigned int v150; // edx
  __int64 v151; // rcx
  int v152; // edx
  __m128i *v153; // rcx
  _QWORD *v154; // rax
  _QWORD *v155; // rdx
  unsigned int v156; // r13d
  unsigned int v157; // esi
  unsigned int v158; // r13d
  size_t v159; // rsi
  unsigned int *v160; // rcx
  __int64 v161; // rsi
  unsigned int v162; // r13d
  unsigned int v163; // ecx
  unsigned int v164; // r13d
  unsigned int v165; // ecx
  unsigned int *v166; // rdx
  __int64 v167; // rcx
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  __m128 v170; // [rsp+0h] [rbp-88h] BYREF
  __int64 v171; // [rsp+10h] [rbp-78h]
  __int64 v172; // [rsp+18h] [rbp-70h]
  __m128i *v173; // [rsp+20h] [rbp-68h]
  __int64 v174; // [rsp+28h] [rbp-60h]
  __int64 v175[11]; // [rsp+30h] [rbp-58h] BYREF

  v28 = (__int64)a2;
  v29 = *a2;
  v30 = *(_DWORD *)(a1 + 9496);
  if ( *(_DWORD *)(a1 + 9044) )
  {
    v31 = *(unsigned int *)(a1 + 9040);
    v32 = *(char **)(a1 + 9032);
    v33 = a2[3];
    v34 = v31 - 1;
    v31 *= 16;
    v35 = &v32[v31];
    v36 = 16LL * (v33 & v34);
    v37 = &v32[v36];
    if ( v36 != v31 )
    {
      for ( i = &v32[v36]; v35 != i; i += 16 )
      {
        v39 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v39 + 12) == v33 && v28 == v39 )
          {
LABEL_77:
            v30 = *((_DWORD *)i + 2);
            goto LABEL_9;
          }
        }
        else if ( !v39 )
        {
          goto LABEL_9;
        }
      }
    }
    for ( ; v37 != v32; v32 += 16 )
    {
      v93 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 > 1u )
      {
        if ( *(_DWORD *)(v93 + 12) == v33 && v28 == v93 )
        {
          i = v32;
          goto LABEL_77;
        }
      }
      else if ( !v93 )
      {
        break;
      }
    }
  }
LABEL_9:
  v40 = *(_QWORD *)(a1 + 104);
  v172 = a1 + 8400;
  v41 = (__m128i *)sub_B3A240(v40, a1 + 8400, (_QWORD *)(a1 + 8656), v28, v30, a3, a4, *(_DWORD *)(a1 + 9464), a5, 1);
  if ( (unsigned __int8)sub_15D2710(*(_QWORD *)(a1 + 104), v28) )
    v41[2].m128i_i8[12] |= 4u;
  v42 = *(_QWORD *)(a1 + 8656);
  if ( v42 )
  {
    v43 = *(_DWORD *)(v42 - 4);
    if ( (unsigned int)v29 < v43 )
      goto LABEL_13;
    v62 = v29 + 1;
    if ( v43 >= (int)v29 + 1 )
    {
      *(_DWORD *)(v42 - 4) = v62;
      goto LABEL_13;
    }
    v170.m128_i32[0] = *(_DWORD *)(v42 - 4);
    v171 = v28;
  }
  else
  {
    v62 = v29 + 1;
    if ( (_DWORD)v29 == -1 )
      goto LABEL_13;
    v107 = (_QWORD *)sub_186B270(0x18u);
    v171 = v28;
    v42 = (__int64)(v107 + 1);
    *v107 = 2;
    *(_QWORD *)(a1 + 8656) = v107 + 1;
    v170.m128_i32[0] = 0;
  }
  while ( 1 )
  {
    v66 = *(_DWORD *)(v42 - 8);
    if ( v66 >= v62 )
      break;
    v63 = (3 * v66 + 1) >> 1;
    v64 = 8 * v63 + 8;
    if ( 8 * v66 + 8 >= (unsigned int)v64 || v66 >= v63 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v175, "Overflow encountered when expanding vector", v23);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v175);
      sub_233E40((__int64)v175);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v65 = (unsigned int *)sub_186B300((void *)(v42 - 8), v64);
    v42 = (__int64)(v65 + 2);
    *v65 = v63;
    *(_QWORD *)(a1 + 8656) = v65 + 2;
  }
  v67 = v170.m128_u32[0];
  v28 = v171;
  *(_DWORD *)(v42 - 4) = v62;
  v68 = 8 * v67;
  v69 = 8LL * v62;
  if ( v68 != v69 )
  {
    v170.m128_u64[0] = v42;
    memset((void *)(v42 + v68), 0, v69 - v68);
    v42 = v170.m128_u64[0];
  }
LABEL_13:
  v44 = *(_QWORD **)(a1 + 8576);
  *(_QWORD *)(v42 + 8 * v29) = v41;
  ++*(_DWORD *)(v28 + 8);
  if ( v44 )
  {
    v45 = *((_DWORD *)v44 - 1);
    if ( v45 == *((_DWORD *)v44 - 2) )
    {
      v102 = (3 * v45 + 1) >> 1;
      v103 = 8 * v102 + 8;
      if ( 8 * v45 + 8 >= (unsigned int)v103 || v45 >= v102 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v175, "Overflow encountered when expanding vector", v15);
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v175);
        sub_233E40((__int64)v175);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v104 = (unsigned int *)sub_186B300(v44 - 1, v103);
      v105 = v104[1];
      v44 = v104 + 2;
      *v104 = v102;
      *(_QWORD *)(a1 + 8576) = v104 + 2;
      LODWORD(v104) = v105;
      v48 = &v44[v105];
      v47 = (_DWORD)v104 + 1;
    }
    else
    {
      v46 = v45;
      v47 = v45 + 1;
      v48 = &v44[v46];
    }
  }
  else
  {
    v118 = (_QWORD *)sub_186B270(0x18u);
    v44 = v118 + 1;
    *v118 = 2;
    v47 = 1;
    *(_QWORD *)(a1 + 8576) = v44;
    v48 = v44;
  }
  *v48 = v28;
  *((_DWORD *)v44 - 1) = v47;
  v49 = *(_QWORD **)(a1 + 9456);
  if ( v49 )
  {
    v50 = *((_DWORD *)v49 - 1);
    if ( v50 == *((_DWORD *)v49 - 2) )
    {
      v98 = (3 * v50 + 1) >> 1;
      v99 = 8 * v98 + 8;
      if ( 8 * v50 + 8 >= (unsigned int)v99 || v50 >= v98 )
      {
        v12 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v175, "Overflow encountered when expanding vector", v13);
        *v12 = (char *)off_1C63128;
        sub_2333C0(v12 + 1, v175);
        sub_233E40((__int64)v175);
        __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v100 = (unsigned int *)sub_186B300(v49 - 1, v99);
      v101 = v100[1];
      v49 = v100 + 2;
      *v100 = v98;
      *(_QWORD *)(a1 + 9456) = v100 + 2;
      LODWORD(v100) = v101;
      v53 = &v49[v101];
      v52 = (_DWORD)v100 + 1;
    }
    else
    {
      v51 = v50;
      v52 = v50 + 1;
      v53 = &v49[v51];
    }
  }
  else
  {
    v119 = (_QWORD *)sub_186B270(0x18u);
    v49 = v119 + 1;
    *v119 = 2;
    v52 = 1;
    *(_QWORD *)(a1 + 9456) = v49;
    v53 = v49;
  }
  *v53 = a1 + 9568;
  *((_DWORD *)v49 - 1) = v52;
  v54 = *(_QWORD **)(a1 + 8664);
  if ( v54 )
  {
    v55 = *((_DWORD *)v54 - 1);
    if ( v55 == *((_DWORD *)v54 - 2) )
    {
      v94 = (3 * v55 + 1) >> 1;
      v95 = 8 * v94 + 8;
      if ( 8 * v55 + 8 >= (unsigned int)v95 || v55 >= v94 )
      {
        v20 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142(v175, "Overflow encountered when expanding vector", v21);
        *v20 = (char *)off_1C63128;
        sub_2333C0(v20 + 1, v175);
        sub_233E40((__int64)v175);
        __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v96 = (unsigned int *)sub_186B300(v54 - 1, v95);
      v97 = v96[1];
      v54 = v96 + 2;
      *v96 = v94;
      *(_QWORD *)(a1 + 8664) = v96 + 2;
      LODWORD(v96) = v97;
      v58 = (__m128i **)&v54[v97];
      v57 = (_DWORD)v96 + 1;
    }
    else
    {
      v56 = v55;
      v57 = v55 + 1;
      v58 = (__m128i **)&v54[v56];
    }
  }
  else
  {
    v117 = (_QWORD *)sub_186B270(0x18u);
    v54 = v117 + 1;
    *v117 = 2;
    v57 = 1;
    *(_QWORD *)(a1 + 8664) = v54;
    v58 = (__m128i **)v54;
  }
  *v58 = v41;
  *((_DWORD *)v54 - 1) = v57;
  v59 = v41[2].m128i_i8[12];
  if ( (v59 & 8) == 0 && *(_DWORD *)(v41->m128i_i64[0] + 24) )
  {
    if ( (v59 & 0x10) != 0 )
    {
      v106 = (__m128)_mm_loadu_si128(v41 + 7);
      if ( *(_QWORD *)(v41[7].m128i_i64[0] + 8) == *(_QWORD *)(_mm_movehl_ps(a8, v106).m128_u64[0] + 8) )
      {
        v140 = *(unsigned int *)v41->m128i_i64[0];
        v170 = v106;
        v141 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4 * v140);
        v142 = sub_180C100(v172, 32);
        si128 = _mm_load_si128((const __m128i *)&v170);
        *(_QWORD *)(v142 + 8) = 2;
        v144 = *(_QWORD *)(a1 + 8848);
        *(__m128i *)(v142 + 16) = si128;
        *(_QWORD *)v142 = off_1C57780;
        v145 = v142 | 3;
        v175[0] = v145;
        v146 = (unsigned int)(2 * v141);
        v147 = *(_BYTE *)(v144 + v146);
        if ( v147 == -1 )
        {
          sub_8E8670(a1, v175, v146 ^ 1);
        }
        else if ( !v147 )
        {
          sub_8F28B0(a1, v146, v145, 0);
        }
        v41[1].m128i_i64[1] = (__int64)v41;
        v148 = *(_QWORD *)(a1 + 8640);
        if ( v41->m128i_i64[1] != *(_QWORD *)(v148 + 8) )
        {
          v149 = *(__m128i **)(a1 + 8760);
          if ( v149 )
          {
            v150 = v149[-1].m128i_u32[3];
            if ( v150 == v149[-1].m128i_i32[2] )
            {
              v162 = 3 * v150 + 1;
              v163 = v162 & 0xFFFFFFFE;
              v164 = v162 >> 1;
              v165 = 8 * (v164 + v163) + 8;
              if ( 24 * v150 + 8 >= v165 || v150 >= v164 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_14E142(v175, "Overflow encountered when expanding vector", v9);
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v175);
                sub_233E40((__int64)v175);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v166 = (unsigned int *)sub_186B300(&v149[-1].m128i_u64[1], v165);
              v149 = (__m128i *)(v166 + 2);
              v167 = v166[1];
              *v166 = v164;
              *(_QWORD *)(a1 + 8760) = v166 + 2;
              LODWORD(v166) = v167;
              v153 = (__m128i *)((char *)v149 + 24 * v167);
              v152 = (_DWORD)v166 + 1;
            }
            else
            {
              v151 = v150;
              v152 = v150 + 1;
              v153 = (__m128i *)((char *)v149 + 24 * v151);
            }
          }
          else
          {
            v169 = (_QWORD *)sub_186B270(0x38u);
            v152 = 1;
            *v169 = 2;
            v149 = (__m128i *)(v169 + 1);
            *(_QWORD *)(a1 + 8760) = v149;
            v153 = v149;
          }
          v153[1].m128i_i64[0] = 0;
          *v153 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)v148);
          v149[-1].m128i_i32[3] = v152;
        }
LABEL_102:
        if ( (v41[2].m128i_i8[12] & 0x10) != 0 )
          goto LABEL_24;
LABEL_38:
        v70 = *(_QWORD *)(a1 + 8696);
        v71 = **(_DWORD **)(v28 + 16);
        LODWORD(v171) = v71 + 0x80000000;
        if ( v70 )
        {
          v72 = *(_DWORD *)(v70 - 4);
          if ( (unsigned int)v171 >= v72 )
          {
            v73 = v71 - 0x7FFFFFFF;
            v170.m128_i32[0] = v73;
            if ( v72 >= v73 )
            {
              v131 = 8LL * v73;
              v132 = 8LL * v72;
              v133 = (__int64 *)(v70 + v132);
              if ( v131 != v132 )
              {
                v134 = (__int64 *)(v70 + v131);
                do
                {
                  while ( 1 )
                  {
                    v135 = *v134;
                    if ( !*v134 )
                      break;
                    ++v134;
                    sub_186B220((void *)(v135 - 8));
                    if ( v133 == v134 )
                      goto LABEL_112;
                  }
                  ++v134;
                }
                while ( v133 != v134 );
LABEL_112:
                v70 = *(_QWORD *)(a1 + 8696);
              }
              *(_DWORD *)(v70 - 4) = v170.m128_i32[0];
              goto LABEL_88;
            }
            goto LABEL_41;
          }
        }
        else
        {
          v170.m128_i32[0] = v71 - 0x7FFFFFFF;
          if ( v71 != 0x7FFFFFFF )
          {
            v72 = 0;
            v154 = (_QWORD *)sub_186B270(0x18u);
            *v154 = 2;
            v70 = (unsigned __int64)(v154 + 1);
            *(_QWORD *)(a1 + 8696) = v154 + 1;
LABEL_41:
            LODWORD(v172) = v72;
            v173 = v41;
            v174 = v28;
            while ( 1 )
            {
              v74 = *(_DWORD *)(v70 - 8);
              v75 = v170.m128_i32[0];
              if ( v74 >= v170.m128_i32[0] )
                break;
              v76 = (3 * v74 + 1) >> 1;
              v77 = 8 * v76 + 8;
              if ( 8 * v74 + 8 >= (unsigned int)v77 || v74 >= v76 )
              {
                v16 = (char **)__cxa_allocate_exception(0x28u);
                sub_14E142(v175, "Overflow encountered when expanding vector", v17);
                *v16 = (char *)off_1C63128;
                sub_2333C0(v16 + 1, v175);
                sub_233E40((__int64)v175);
                __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v78 = (unsigned int *)sub_186B270(v77);
              v79 = *(__int64 **)(a1 + 8696);
              v80 = v78;
              v70 = (unsigned __int64)(v78 + 2);
              if ( v79 )
              {
                v81 = *((unsigned int *)v79 - 1);
                v82 = 8 * v81;
                v78[1] = v81;
                v83 = &v79[v81];
                if ( v83 != v79 )
                {
                  v84 = v82 - 8;
                  v85 = v79;
                  if ( (unsigned __int64)(v82 - 8) <= 8 || v79 < (__int64 *)v78 + 3 && v70 < (unsigned __int64)(v79 + 2) )
                  {
                    v129 = v78 + 2;
                    do
                    {
                      v130 = *v85;
                      *v85++ = 0;
                      v129 += 2;
                      *((_QWORD *)v129 - 1) = v130;
                    }
                    while ( v85 != v83 );
                  }
                  else
                  {
                    v86 = 0;
                    v87 = (v84 >> 3) + 1;
                    do
                    {
                      v88 = _mm_loadu_si128((const __m128i *)&v79[v86 / 2]);
                      *(_OWORD *)&v79[v86 / 2] = 0;
                      *(__m128i *)&v78[v86 + 2] = v88;
                      v86 += 4LL;
                    }
                    while ( 4 * (v87 >> 1) != v86 );
                    if ( (v87 & 1) != 0 )
                    {
                      v89 = 2 * (v87 & 0xFFFFFFFFFFFFFFFELL);
                      v90 = v79[v89 / 2];
                      v79[v89 / 2] = 0;
                      *(_QWORD *)&v78[v89 + 2] = v90;
                    }
                  }
                }
                v91 = &v79[v81];
                if ( (_DWORD)v81 )
                {
                  do
                  {
                    while ( *v79 )
                    {
                      v92 = (void *)(*v79++ - 8);
                      sub_186B220(v92);
                      if ( v91 == v79 )
                        goto LABEL_57;
                    }
                    ++v79;
                  }
                  while ( v79 != v91 );
LABEL_57:
                  v79 = *(__int64 **)(a1 + 8696);
                }
                sub_186B220(v79 - 1);
                *(_QWORD *)(a1 + 8696) = v70;
                *v80 = v76;
              }
              else
              {
                v78[1] = 0;
                *(_QWORD *)(a1 + 8696) = v70;
                *v78 = v76;
              }
            }
            v108 = (unsigned int)v172;
            v41 = v173;
            *(_DWORD *)(v70 - 4) = v170.m128_i32[0];
            v109 = 8LL * v75;
            v110 = 8 * v108;
            if ( v110 != v109 )
              memset((void *)(v70 + v110), 0, v109 - v110);
          }
        }
LABEL_88:
        v111 = (_QWORD *)(v70 + 8LL * (unsigned int)v171);
        v112 = (_QWORD *)*v111;
        if ( *v111 )
        {
          v113 = *((_DWORD *)v112 - 1);
          if ( v113 == *((_DWORD *)v112 - 2) )
          {
            v136 = (3 * v113 + 1) >> 1;
            v137 = 8 * v136 + 8;
            if ( 8 * v113 + 8 >= v137 || v113 >= v136 )
            {
              v18 = (char **)__cxa_allocate_exception(0x28u);
              sub_14E142(v175, "Overflow encountered when expanding vector", v19);
              *v18 = (char *)off_1C63128;
              sub_2333C0(v18 + 1, v175);
              sub_233E40((__int64)v175);
              __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v138 = (unsigned int *)sub_186B300(v112 - 1, v137);
            v139 = v138[1];
            v112 = v138 + 2;
            *v111 = v138 + 2;
            *v138 = v136;
            LODWORD(v138) = v139;
            v116 = (__m128i **)&v112[v139];
            v115 = (_DWORD)v138 + 1;
          }
          else
          {
            v114 = v113;
            v115 = v113 + 1;
            v116 = (__m128i **)&v112[v114];
          }
        }
        else
        {
          v155 = (_QWORD *)sub_186B270(0x18u);
          *v155 = 2;
          v115 = 1;
          v112 = v155 + 1;
          *v111 = v112;
          v116 = (__m128i **)v112;
        }
        *v116 = v41;
        *((_DWORD *)v112 - 1) = v115;
        goto LABEL_24;
      }
      if ( !a5 )
      {
        v41[1].m128i_i64[1] = (__int64)v41;
        goto LABEL_24;
      }
    }
    else if ( !a5 )
    {
      v41[1].m128i_i64[1] = (__int64)v41;
      goto LABEL_38;
    }
    v120 = sub_97A910(a1 + 8712, v41);
    v121 = v120;
    v123 = v122;
    if ( v41 == (__m128i *)v120 )
    {
      v41[1].m128i_i64[1] = (__int64)v41;
    }
    else
    {
      v41[1].m128i_i64[1] = v120;
      if ( v41->m128i_i64[1] != *(_QWORD *)(v120 + 8) )
      {
        v124 = *(__m128i **)(a1 + 8760);
        if ( v124 )
        {
          v125 = v124[-1].m128i_u32[3];
          if ( v125 == v124[-1].m128i_i32[2] )
          {
            v156 = 3 * v125 + 1;
            v157 = v156 & 0xFFFFFFFE;
            v158 = v156 >> 1;
            v159 = 8 * (v158 + v157) + 8;
            if ( 24 * v125 + 8 >= (unsigned int)v159 || v125 >= v158 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_14E142(v175, "Overflow encountered when expanding vector", v11);
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v175);
              sub_233E40((__int64)v175);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v160 = (unsigned int *)sub_186B300(&v124[-1].m128i_u64[1], v159);
            v124 = (__m128i *)(v160 + 2);
            v161 = v160[1];
            *v160 = v158;
            *(_QWORD *)(a1 + 8760) = v160 + 2;
            LODWORD(v160) = v161;
            v128 = (__m128i *)((char *)v124 + 24 * v161);
            v127 = (_DWORD)v160 + 1;
          }
          else
          {
            v126 = v125;
            v127 = v125 + 1;
            v128 = (__m128i *)((char *)v124 + 24 * v126);
          }
        }
        else
        {
          v168 = (_QWORD *)sub_186B270(0x38u);
          v127 = 1;
          *v168 = 2;
          v124 = (__m128i *)(v168 + 1);
          *(_QWORD *)(a1 + 8760) = v124;
          v128 = v124;
        }
        v128[1].m128i_i64[0] = 8LL * v123 + 1;
        *v128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v121);
        v124[-1].m128i_i32[3] = v127;
      }
    }
    goto LABEL_102;
  }
LABEL_24:
  v60 = *(_QWORD *)(a1 + 104);
  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)(v60 + 912) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return v41;
}

