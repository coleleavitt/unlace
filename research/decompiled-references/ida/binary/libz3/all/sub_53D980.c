char *__fastcall sub_53D980(__int64 a1, const void *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r14
  _QWORD *(__fastcall *v5)(__int64, __int64, _QWORD *); // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  size_t v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r13
  void *v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rbx
  void *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 i; // rax
  _QWORD *v30; // rbp
  __int64 v31; // r9
  unsigned int v32; // r15d
  unsigned int v33; // r12d
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // r14
  void *v37; // r13
  int v38; // eax
  size_t v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r10
  _DWORD *v43; // rsi
  __int64 v44; // r9
  __int64 v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  int v48; // ecx
  char v49; // r8
  __int64 v50; // rcx
  char v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rbx
  _DWORD *v54; // r14
  _QWORD *v55; // rbx
  void *v56; // r12
  _QWORD *v57; // rsi
  __int64 v58; // r14
  unsigned __int64 v59; // r12
  __int64 v60; // rax
  __int64 *v61; // r13
  unsigned int v62; // r12d
  __int64 v63; // rax
  _QWORD *v64; // r14
  __int64 v65; // rbx
  _QWORD *v66; // r12
  int v67; // eax
  void *v68; // r15
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 v71; // rax
  _QWORD *v72; // r15
  void *v73; // r12
  int v74; // eax
  _QWORD *v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  _BYTE *v79; // rcx
  __int64 v80; // rax
  _QWORD *v81; // r12
  _QWORD *v82; // rbx
  void *v83; // r14
  _QWORD *v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdi
  unsigned int v90; // r12d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rcx
  unsigned int v94; // r12d
  size_t v95; // rdi
  unsigned int *v96; // rdx
  _DWORD *v97; // r8
  int *v98; // r15
  __int64 v99; // rax
  _DWORD *v100; // rcx
  int *v101; // rdi
  int *j; // rax
  int v103; // esi
  char v104; // r9
  __int64 v105; // rsi
  char v106; // r9
  __int64 v107; // rsi
  __int64 v108; // rax
  int *v109; // rbx
  int *v110; // rbp
  _DWORD *v111; // r15
  void *v112; // r12
  int *v113; // rsi
  unsigned int v114; // r14d
  size_t v115; // rdi
  unsigned int *v116; // rdx
  unsigned __int64 v117; // r15
  __int64 v118; // r8
  __int64 *v119; // r9
  unsigned __int64 v120; // rsi
  __int64 *v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rsi
  __m128i v124; // xmm0
  unsigned __int64 v125; // rsi
  __int64 *v126; // rax
  __int64 v127; // rcx
  __int64 *v128; // r12
  __int64 *v129; // r15
  __int64 v130; // r14
  __int64 v131; // rbx
  __int64 v132; // rbx
  void *v133; // rbp
  __int64 v134; // rsi
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  _DWORD *v138; // rcx
  __int64 v139; // rsi
  char **exception; // r13
  char **v141; // r13
  char **v142; // r13
  char **v143; // r13
  char *lpsrc; // [rsp+0h] [rbp-C8h]
  _QWORD *v145; // [rsp+8h] [rbp-C0h]
  unsigned int v146; // [rsp+18h] [rbp-B0h]
  _QWORD *v147; // [rsp+18h] [rbp-B0h]
  unsigned int *v148; // [rsp+18h] [rbp-B0h]
  _QWORD *v149; // [rsp+18h] [rbp-B0h]
  unsigned int *v150; // [rsp+18h] [rbp-B0h]
  unsigned int v151; // [rsp+20h] [rbp-A8h]
  unsigned int v152; // [rsp+24h] [rbp-A4h]
  __int64 v153; // [rsp+28h] [rbp-A0h]
  unsigned int v154; // [rsp+30h] [rbp-98h]
  __int64 v155; // [rsp+30h] [rbp-98h]
  unsigned int v156; // [rsp+30h] [rbp-98h]
  _DWORD *v157; // [rsp+30h] [rbp-98h]
  unsigned int v158; // [rsp+30h] [rbp-98h]
  __int64 v159; // [rsp+30h] [rbp-98h]
  unsigned int *v160; // [rsp+38h] [rbp-90h]
  __int64 v161; // [rsp+40h] [rbp-88h]
  unsigned int v162; // [rsp+40h] [rbp-88h]
  __int64 v163; // [rsp+40h] [rbp-88h]
  unsigned int *v164; // [rsp+40h] [rbp-88h]
  __int64 v165; // [rsp+48h] [rbp-80h]
  _DWORD *v166; // [rsp+48h] [rbp-80h]
  _QWORD *v167; // [rsp+50h] [rbp-78h]
  _QWORD *v168; // [rsp+50h] [rbp-78h]
  __int64 v169; // [rsp+58h] [rbp-70h]
  __int64 v170[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  v145 = v3;
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3[4];
  v5 = *(_QWORD *(__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v4 + 64LL);
  if ( v5 == sub_536B50 )
  {
    lpsrc = (char *)sub_186B270(0x98u);
    *(_QWORD *)lpsrc = qword_1C665B0;
    *((_QWORD *)lpsrc + 1) = v4;
    *((_QWORD *)lpsrc + 2) = 0;
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = _mm_loadl_epi64((const __m128i *)(v6 - 8));
      v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v7) + 8);
      v9 = *(_QWORD **)(a1 + 8);
      *((_QWORD *)lpsrc + 2) = v8 + 1;
      *v8 = v7.m128i_i64[0];
      if ( v9 )
      {
        v10 = 8LL * *((unsigned int *)v9 - 1);
        if ( v10 <= 8 )
        {
          if ( v10 == 8 )
            v8[1] = *v9;
        }
        else
        {
          memmove(v8 + 1, v9, v10);
        }
      }
    }
    v11 = *(_QWORD *)(v4 + 24);
    *((_DWORD *)lpsrc + 6) = *(_DWORD *)(v4 + 8);
    *(_QWORD *)lpsrc = &off_1C67178;
    *((_QWORD *)lpsrc + 4) = v4;
    v12 = sub_4D6490(v11);
    *((_QWORD *)lpsrc + 5) = v12;
    sub_16669D0(lpsrc + 48, v12);
    v13 = *((_QWORD *)lpsrc + 5);
    *((_QWORD *)lpsrc + 8) = 0;
    lpsrc[80] = 0;
    *((_QWORD *)lpsrc + 9) = v13;
    *((_QWORD *)lpsrc + 13) = 0;
    lpsrc[112] = 1;
    *((_QWORD *)lpsrc + 17) = 0;
    lpsrc[144] = 0;
    *(_OWORD *)(lpsrc + 88) = 0;
    *(_OWORD *)(lpsrc + 120) = 0;
  }
  else
  {
    lpsrc = (char *)v5(v4, 0, (_QWORD *)(a1 + 8));
    if ( !lpsrc )
    {
      v14 = *(_QWORD *)(a1 + 16);
      v153 = v14;
      if ( v14 )
        goto LABEL_9;
      goto LABEL_142;
    }
  }
  lpsrc = (char *)__dynamic_cast(
                    lpsrc,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
                    0);
  v14 = *(_QWORD *)(a1 + 16);
  v153 = v14;
  if ( v14 )
  {
LABEL_9:
    v151 = *(_DWORD *)(v14 - 4);
    goto LABEL_10;
  }
LABEL_142:
  v151 = 0;
LABEL_10:
  if ( *((_BYTE *)v145 + 80) )
  {
    lpsrc[80] = 1;
    return lpsrc;
  }
  if ( *((_BYTE *)v145 + 144) )
  {
    v15 = *((_QWORD **)lpsrc + 15);
    if ( v15 )
    {
LABEL_13:
      v16 = *((unsigned int *)v15 - 1);
      if ( (_DWORD)v16 )
      {
        v17 = &v15[v16];
        do
        {
          v18 = *v15;
          if ( *v15 )
          {
            v19 = *(unsigned int *)(v18 - 4);
            if ( (_DWORD)v19 )
            {
              v20 = v18 + 32 * v19;
              do
              {
                v21 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v18);
                v22 = v18 + 16;
                v18 += 32;
                sub_182CBA0(v21, v22);
              }
              while ( v18 != v20 );
              v18 = *v15;
            }
            sub_186B220((void *)(v18 - 8));
          }
          ++v15;
        }
        while ( v15 != v17 );
        v15 = *((_QWORD **)lpsrc + 15);
      }
      *((_DWORD *)v15 - 1) = 0;
    }
  }
  else if ( (unsigned __int8)sub_537E40(v145[4], v145 + 15, (std::chrono::_V2::steady_clock *)(v145 + 11)) )
  {
    *((_BYTE *)v145 + 144) = 1;
    v15 = *((_QWORD **)lpsrc + 15);
    if ( v15 )
      goto LABEL_13;
  }
  else
  {
    *((_BYTE *)v145 + 80) = 1;
    v15 = *((_QWORD **)lpsrc + 15);
    if ( v15 )
      goto LABEL_13;
  }
  v23 = *((_QWORD *)lpsrc + 16);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 32 * v24;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23);
        v27 = v23 + 16;
        v23 += 32;
        sub_182CBA0(v26, v27);
      }
      while ( v23 != v25 );
      v23 = *((_QWORD *)lpsrc + 16);
    }
    *(_DWORD *)(v23 - 4) = 0;
  }
  v28 = *((_QWORD *)lpsrc + 17);
  if ( v28 )
    *(_DWORD *)(v28 - 4) = 0;
  v152 = 0;
  for ( i = v145[15]; i; i = v145[15] )
  {
    if ( v152 >= *(_DWORD *)(i - 4) )
      break;
    v30 = nullptr;
    v31 = *(_QWORD *)(i + 8LL * v152);
    if ( v31 )
    {
      v32 = 0;
      v33 = 0;
      while ( v32 < *(_DWORD *)(v31 - 4) )
      {
        if ( v33 >= v151 )
          goto LABEL_39;
LABEL_38:
        if ( *(_DWORD *)(v153 + 4LL * v33) != v32 )
        {
LABEL_39:
          v34 = 32LL * v32 + v31;
          if ( v30 )
          {
            v35 = *((unsigned int *)v30 - 1);
            if ( (_DWORD)v35 == *((_DWORD *)v30 - 2) )
              goto LABEL_50;
LABEL_41:
            v36 = &v30[4 * v35];
            goto LABEL_42;
          }
          v159 = v34;
          v135 = (_QWORD *)sub_186B270(0x48u);
          v36 = v135 + 1;
          *v135 = 2;
          v34 = v159;
          v30 = v135 + 1;
LABEL_42:
          while ( 1 )
          {
            *v36 = 0;
            v36[1] = 0;
            v36[2] = 1;
            v37 = qword_1C7F2C0;
            v36[3] = 0;
            if ( (*(_BYTE *)(v34 + 4) & 1) != 0 )
            {
              v155 = v34;
              sub_182C690(v37, v36, v34);
              v34 = v155;
            }
            else
            {
              *(_DWORD *)v36 = *(_DWORD *)v34;
            }
            if ( (*(_BYTE *)(v34 + 20) & 1) != 0 )
            {
              sub_182C690(v37, v36 + 2, v34 + 16);
            }
            else
            {
              v38 = *(_DWORD *)(v34 + 16);
              *((_BYTE *)v36 + 20) &= ~1u;
              *((_DWORD *)v36 + 4) = v38;
            }
            ++v32;
            ++*((_DWORD *)v30 - 1);
            v31 = *(_QWORD *)(v145[15] + 8LL * v152);
            if ( !v31 || v32 >= *(_DWORD *)(v31 - 4) )
              goto LABEL_59;
            if ( v33 < v151 )
              goto LABEL_38;
            v34 = 32LL * v32 + v31;
            v35 = *((unsigned int *)v30 - 1);
            if ( (_DWORD)v35 != *((_DWORD *)v30 - 2) )
              goto LABEL_41;
LABEL_50:
            v154 = (unsigned int)(3 * v35 + 1) >> 1;
            v39 = 32 * v154 + 8;
            if ( 32 * (int)v35 + 8 >= (unsigned int)v39 || (unsigned int)v35 >= (unsigned int)(3 * v35 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v170, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v170);
              sub_233E40((__int64)v170);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v161 = v34;
            v40 = sub_186B270(v39);
            v41 = *((unsigned int *)v30 - 1);
            v42 = v40 + 8;
            v43 = (_DWORD *)v40;
            v44 = v161;
            v45 = v40 + 8;
            *(_DWORD *)(v40 + 4) = v41;
            v46 = v30;
            v47 = &v30[4 * v41];
            if ( v47 != v30 )
            {
              do
              {
                v48 = *(_DWORD *)v46;
                v49 = *((_BYTE *)v46 + 4);
                v46 += 4;
                v45 += 32;
                *(_DWORD *)(v45 - 32) = v48;
                *(_BYTE *)(v45 - 28) = v49 & 3 | *(_BYTE *)(v45 - 28) & 0xFC;
                v50 = *(v46 - 3);
                *(v46 - 3) = 0;
                *(_QWORD *)(v45 - 24) = v50;
                v51 = *((_BYTE *)v46 - 12);
                *(_DWORD *)(v45 - 16) = *((_DWORD *)v46 - 4);
                *(_BYTE *)(v45 - 12) = v51 & 3 | *(_BYTE *)(v45 - 12) & 0xFC;
                v52 = *(v46 - 1);
                *(v46 - 1) = 0;
                *(_QWORD *)(v45 - 8) = v52;
              }
              while ( v46 != v47 );
            }
            v53 = *((unsigned int *)v30 - 1);
            if ( (_DWORD)v53 )
            {
              v162 = v33;
              v54 = v43;
              v165 = v44;
              v55 = &v30[4 * v53];
              v167 = v30;
              v169 = v42;
              do
              {
                v56 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v30);
                v57 = v30 + 2;
                v30 += 4;
                sub_182CBA0(v56, v57);
              }
              while ( v55 != v30 );
              v33 = v162;
              v44 = v165;
              v43 = v54;
              v30 = v167;
              v42 = v169;
            }
            v168 = (_QWORD *)v42;
            v163 = v44;
            sub_186B220(v30 - 1);
            v34 = v163;
            v58 = (unsigned int)v43[1];
            v30 = v168;
            *v43 = v154;
            v36 = &v168[4 * v58];
          }
        }
        ++v33;
        ++v32;
      }
    }
LABEL_59:
    v59 = *((_QWORD *)lpsrc + 15);
    if ( v59 )
    {
      LODWORD(v60) = *(_DWORD *)(v59 - 4);
      v61 = (__int64 *)(v59 + 8LL * (unsigned int)v60);
      if ( (_DWORD)v60 == *(_DWORD *)(v59 - 8) )
      {
        v114 = (unsigned int)(3 * v60 + 1) >> 1;
        v115 = 8 * v114 + 8;
        if ( 8 * (int)v60 + 8 >= (unsigned int)v115 || (unsigned int)v60 >= v114 )
        {
          v141 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v170, "Overflow encountered when expanding vector");
          *v141 = (char *)off_1C63128;
          sub_2333C0(v141 + 1, v170);
          sub_233E40((__int64)v170);
          __cxa_throw(v141, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v116 = (unsigned int *)sub_186B270(v115);
        v59 = (unsigned __int64)(v116 + 2);
        v117 = *((_QWORD *)lpsrc + 15);
        if ( v117 )
        {
          v118 = *(unsigned int *)(v117 - 4);
          v116[1] = v118;
          v119 = (__int64 *)(v117 + 8 * v118);
          if ( (__int64 *)v117 != v119 )
          {
            v120 = 8 * v118 - 8;
            v121 = (__int64 *)v117;
            if ( v120 <= 8 || v59 < v117 + 16 && v117 < (unsigned __int64)(v116 + 6) )
            {
              v138 = v116 + 2;
              do
              {
                v139 = *v121;
                *v121++ = 0;
                v138 += 2;
                *((_QWORD *)v138 - 1) = v139;
              }
              while ( v121 != v119 );
            }
            else
            {
              v122 = 0;
              v123 = (v120 >> 3) + 1;
              do
              {
                v124 = _mm_loadu_si128((const __m128i *)(v117 + v122 * 4));
                *(_OWORD *)(v117 + v122 * 4) = 0;
                *(__m128i *)&v116[v122 + 2] = v124;
                v122 += 4;
              }
              while ( 4 * (v123 >> 1) != v122 );
              if ( (v123 & 1) != 0 )
              {
                v125 = v123 & 0xFFFFFFFFFFFFFFFELL;
                v126 = (__int64 *)(v117 + 8 * v125);
                v127 = *v126;
                *v126 = 0;
                *(_QWORD *)(v59 + 8 * v125) = v127;
              }
            }
          }
          if ( (_DWORD)v118 )
          {
            v149 = v30;
            v158 = v114;
            v164 = v116;
            v166 = v116 + 2;
            v128 = (__int64 *)v117;
            v129 = (__int64 *)(v117 + 8 * v118);
            do
            {
              v130 = *v128;
              if ( *v128 )
              {
                v131 = *(unsigned int *)(v130 - 4);
                if ( (_DWORD)v131 )
                {
                  v132 = v130 + 32 * v131;
                  do
                  {
                    v133 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v130);
                    v134 = v130 + 16;
                    v130 += 32;
                    sub_182CBA0(v133, v134);
                  }
                  while ( v130 != v132 );
                  v130 = *v128;
                }
                sub_186B220((void *)(v130 - 8));
              }
              ++v128;
            }
            while ( v128 != v129 );
            v30 = v149;
            v114 = v158;
            v116 = v164;
            v59 = (unsigned __int64)v166;
            v117 = *((_QWORD *)lpsrc + 15);
          }
          v150 = v116;
          sub_186B220((void *)(v117 - 8));
          v116 = v150;
          v60 = v150[1];
          v61 = (__int64 *)(v59 + 8 * v60);
        }
        else
        {
          v116[1] = 0;
          v61 = (__int64 *)(v116 + 2);
          LODWORD(v60) = 0;
        }
        *((_QWORD *)lpsrc + 15) = v59;
        *v116 = v114;
      }
    }
    else
    {
      v60 = sub_186B270(0x18u);
      v59 = v60 + 8;
      *(_QWORD *)v60 = 2;
      v61 = (__int64 *)(v60 + 8);
      *((_QWORD *)lpsrc + 15) = v60 + 8;
      LODWORD(v60) = 0;
    }
    *v61 = 0;
    if ( v30 )
    {
      v62 = *((_DWORD *)v30 - 1);
      v146 = *((_DWORD *)v30 - 2);
      v63 = sub_186B270(32LL * v146 + 8) + 8;
      v64 = &v30[4 * *((unsigned int *)v30 - 1)];
      *(_QWORD *)(v63 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v146), _mm_cvtsi32_si128(v62)).m128i_u64[0];
      *v61 = v63;
      if ( v64 != v30 )
      {
        v65 = v63;
        v66 = v30;
        while ( 1 )
        {
          *(_BYTE *)(v65 + 4) &= 0xFCu;
          v68 = qword_1C7F2C0;
          *(_BYTE *)(v65 + 20) &= 0xFCu;
          *(_DWORD *)v65 = 0;
          *(_QWORD *)(v65 + 8) = 0;
          *(_DWORD *)(v65 + 16) = 1;
          *(_QWORD *)(v65 + 24) = 0;
          if ( (*((_BYTE *)v66 + 4) & 1) != 0 )
          {
            sub_182C690(v68, v65, v66);
            if ( (*((_BYTE *)v66 + 20) & 1) != 0 )
              goto LABEL_68;
LABEL_65:
            v67 = *((_DWORD *)v66 + 4);
            v66 += 4;
            *(_BYTE *)(v65 + 20) &= ~1u;
            v65 += 32;
            *(_DWORD *)(v65 - 16) = v67;
            if ( v64 == v66 )
              break;
          }
          else
          {
            *(_DWORD *)v65 = *(_DWORD *)v66;
            if ( (*((_BYTE *)v66 + 20) & 1) == 0 )
              goto LABEL_65;
LABEL_68:
            sub_182C690(v68, v65 + 16, v66 + 2);
            v66 += 4;
            v65 += 32;
            if ( v64 == v66 )
              break;
          }
        }
      }
      v59 = *((_QWORD *)lpsrc + 15);
      LODWORD(v60) = *(_DWORD *)(v59 - 4);
    }
    *(_DWORD *)(v59 - 4) = v60 + 1;
    v69 = v145[16] + 32LL * v152;
    v70 = *((_QWORD *)lpsrc + 16);
    if ( v70 )
    {
      v71 = *(unsigned int *)(v70 - 4);
      if ( (_DWORD)v71 == *(_DWORD *)(v70 - 8) )
      {
        v94 = (unsigned int)(3 * v71 + 1) >> 1;
        v95 = 32 * v94 + 8;
        if ( 32 * (int)v71 + 8 >= (unsigned int)v95 || (unsigned int)v71 >= v94 )
        {
          v142 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v170, "Overflow encountered when expanding vector");
          *v142 = (char *)off_1C63128;
          sub_2333C0(v142 + 1, v170);
          sub_233E40((__int64)v170);
          __cxa_throw(v142, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (unsigned int *)sub_186B270(v95);
        v97 = v96 + 2;
        v98 = *((int **)lpsrc + 16);
        if ( v98 )
        {
          v99 = (unsigned int)*(v98 - 1);
          v100 = v96 + 2;
          v96[1] = v99;
          v101 = &v98[8 * v99];
          for ( j = v98; j != v101; *((_QWORD *)v100 - 1) = v107 )
          {
            v103 = *j;
            v104 = *((_BYTE *)j + 4);
            j += 8;
            v100 += 8;
            *(v100 - 8) = v103;
            *((_BYTE *)v100 - 28) = v104 & 3 | *(_BYTE *)(v100 - 7) & 0xFC;
            v105 = *((_QWORD *)j - 3);
            *((_QWORD *)j - 3) = 0;
            *((_QWORD *)v100 - 3) = v105;
            v106 = *((_BYTE *)j - 12);
            *(v100 - 4) = *(j - 4);
            *((_BYTE *)v100 - 12) = v106 & 3 | *(_BYTE *)(v100 - 3) & 0xFC;
            v107 = *((_QWORD *)j - 1);
            *((_QWORD *)j - 1) = 0;
          }
          v108 = (unsigned int)*(v98 - 1);
          if ( (_DWORD)v108 )
          {
            v156 = v94;
            v160 = v96;
            v109 = &v98[8 * v108];
            v147 = v30;
            v110 = v98;
            v111 = v96 + 2;
            do
            {
              v112 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v110);
              v113 = v110 + 4;
              v110 += 8;
              sub_182CBA0(v112, v113);
            }
            while ( v110 != v109 );
            v97 = v111;
            v30 = v147;
            v94 = v156;
            v96 = v160;
            v98 = *((int **)lpsrc + 16);
          }
          v157 = v97;
          v148 = v96;
          sub_186B220(v98 - 2);
          v96 = v148;
          v97 = v157;
          v72 = &v157[8 * v148[1]];
        }
        else
        {
          v96[1] = 0;
          v72 = v96 + 2;
        }
        *((_QWORD *)lpsrc + 16) = v97;
        *v96 = v94;
      }
      else
      {
        v72 = (_QWORD *)(32 * v71 + v70);
      }
    }
    else
    {
      v136 = (_QWORD *)sub_186B270(0x48u);
      v72 = v136 + 1;
      *v136 = 2;
      *((_QWORD *)lpsrc + 16) = v136 + 1;
    }
    *v72 = 0;
    v72[1] = 0;
    v72[2] = 1;
    v73 = qword_1C7F2C0;
    v72[3] = 0;
    if ( (*(_BYTE *)(v69 + 4) & 1) != 0 )
      sub_182C690(v73, v72, v69);
    else
      *(_DWORD *)v72 = *(_DWORD *)v69;
    if ( (*(_BYTE *)(v69 + 20) & 1) != 0 )
    {
      sub_182C690(v73, v72 + 2, v69 + 16);
    }
    else
    {
      v74 = *(_DWORD *)(v69 + 16);
      *((_BYTE *)v72 + 20) &= ~1u;
      *((_DWORD *)v72 + 4) = v74;
    }
    v75 = *((_QWORD **)lpsrc + 17);
    ++*(_DWORD *)(*((_QWORD *)lpsrc + 16) - 4LL);
    if ( v75 )
    {
      v76 = *((_DWORD *)v75 - 1);
      if ( v76 == *((_DWORD *)v75 - 2) )
      {
        v90 = (3 * v76 + 1) >> 1;
        v91 = v90 + 8;
        if ( v76 + 8 >= (unsigned int)v91 || v76 >= v90 )
        {
          v143 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v170, "Overflow encountered when expanding vector");
          *v143 = (char *)off_1C63128;
          sub_2333C0(v143 + 1, v170);
          sub_233E40((__int64)v170);
          __cxa_throw(v143, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v92 = (unsigned int *)sub_186B300(v75 - 1, v91);
        v93 = v92[1];
        v75 = v92 + 2;
        *((_QWORD *)lpsrc + 17) = v92 + 2;
        *v92 = v90;
        LODWORD(v92) = v93;
        v79 = (char *)v75 + v93;
        v78 = (_DWORD)v92 + 1;
      }
      else
      {
        v77 = v76;
        v78 = v76 + 1;
        v79 = (char *)v75 + v77;
      }
    }
    else
    {
      v137 = (_QWORD *)sub_186B270(0xAu);
      v75 = v137 + 1;
      *v137 = 2;
      v79 = v137 + 1;
      *((_QWORD *)lpsrc + 17) = v137 + 1;
      v78 = 1;
    }
    *v79 = 1;
    *((_DWORD *)v75 - 1) = v78;
    if ( v30 )
    {
      v80 = *((unsigned int *)v30 - 1);
      if ( (_DWORD)v80 )
      {
        v81 = v30;
        v82 = &v30[4 * v80];
        do
        {
          v83 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v81);
          v84 = v81 + 2;
          v81 += 4;
          sub_182CBA0(v83, v84);
        }
        while ( v81 != v82 );
      }
      sub_186B220(v30 - 1);
    }
    ++v152;
  }
  lpsrc[144] = 1;
  v85 = *((_QWORD *)lpsrc + 8);
  lpsrc[112] = 0;
  lpsrc[80] = 0;
  v86 = v145[8];
  if ( v85 != v86 )
  {
    if ( v85 )
    {
      v87 = *((_QWORD *)lpsrc + 9);
      if ( (*(_DWORD *)(v85 + 8))-- == 1 )
      {
        sub_15D7BC0(v87, v85);
        v86 = v145[8];
      }
    }
    *((_QWORD *)lpsrc + 8) = v86;
    if ( v86 )
      ++*(_DWORD *)(v86 + 8);
  }
  return lpsrc;
}

