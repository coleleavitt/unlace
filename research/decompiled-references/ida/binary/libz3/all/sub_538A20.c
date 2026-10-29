__int64 __fastcall sub_538A20(_DWORD *a1, unsigned __int64 *a2, __int64 *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r13
  void *v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  void *v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 result; // rax
  _QWORD *v21; // rax
  __int64 *v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // r12
  _QWORD *v25; // rax
  __m128i v26; // xmm0
  int *v27; // r13
  __int64 v28; // rbp
  __int64 v29; // r15
  _QWORD *v30; // rbx
  int v31; // eax
  void *v32; // r14
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rbx
  void *v36; // rbp
  int v37; // eax
  void *v38; // rdi
  bool v39; // zf
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  void *v43; // rbp
  int *v44; // rbp
  __int64 v45; // rbx
  __int64 v46; // rbx
  void *v47; // r13
  _QWORD *v48; // rsi
  unsigned int v49; // ebx
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  int *v54; // rbx
  __int64 v55; // rbp
  __int64 v56; // rbp
  unsigned __int64 v57; // rbx
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  void *v60; // r13
  int v61; // eax
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  _BYTE *v66; // rcx
  __int64 v67; // rdx
  void *v68; // rbp
  __int64 v69; // rbx
  int *v70; // rax
  _QWORD *v71; // rdx
  __int64 v72; // rcx
  unsigned int v73; // esi
  _QWORD *v74; // rbp
  unsigned int v75; // ebx
  _QWORD *v76; // rax
  _QWORD *v77; // rbp
  __int64 v78; // r14
  int v79; // eax
  void *v80; // r13
  __int64 v81; // rax
  int *v82; // rbp
  void *v83; // r13
  _QWORD *v84; // rsi
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  unsigned int v88; // ebp
  size_t v89; // rdi
  __int64 v90; // rax
  int *v91; // r13
  _DWORD *v92; // r15
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  int *v96; // rsi
  int *i; // rax
  int v98; // ecx
  char v99; // di
  __int64 v100; // rcx
  char v101; // di
  __int64 v102; // rcx
  __int64 v103; // rax
  int *v104; // rbx
  int *v105; // rbp
  void *v106; // r13
  _QWORD *v107; // rsi
  _QWORD *v108; // rax
  unsigned int v109; // r13d
  size_t v110; // rdi
  unsigned int *v111; // rbx
  unsigned __int64 v112; // r14
  unsigned __int64 v113; // r15
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 *v116; // r8
  __int64 *v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rdi
  __m128i v120; // xmm0
  unsigned __int64 v121; // rdi
  __int64 *v122; // rax
  __int64 v123; // rdx
  __int64 *v124; // r13
  __int64 *v125; // r15
  __int64 v126; // r14
  __int64 v127; // rcx
  __int64 v128; // rbp
  void *v129; // rbx
  __int64 v130; // rsi
  __int64 v131; // rdx
  unsigned int v132; // ebx
  size_t v133; // rsi
  unsigned int *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  _DWORD *v137; // rdx
  __int64 v138; // rdi
  int v139; // [rsp+0h] [rbp-B8h]
  __int64 *v140; // [rsp+8h] [rbp-B0h]
  unsigned __int64 *v141; // [rsp+10h] [rbp-A8h]
  unsigned int v142; // [rsp+1Ch] [rbp-9Ch]
  int v143; // [rsp+1Ch] [rbp-9Ch]
  std::chrono::_V2::steady_clock *v144; // [rsp+28h] [rbp-90h]
  __m128i v145; // [rsp+38h] [rbp-80h] BYREF
  _DWORD *v146; // [rsp+48h] [rbp-70h]
  char v147; // [rsp+56h] [rbp-62h] BYREF
  int v148[2]; // [rsp+58h] [rbp-60h] BYREF
  int v149[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v150; // [rsp+68h] [rbp-50h]
  _QWORD v151[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = (_QWORD *)*a2;
  v146 = a1;
  v141 = a2;
  v140 = a3;
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = &v6[v7];
      do
      {
        v9 = *v6;
        if ( *v6 )
        {
          v10 = *(unsigned int *)(v9 - 4);
          if ( (_DWORD)v10 )
          {
            v11 = v9 + 32 * v10;
            do
            {
              v12 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v9);
              v13 = v9 + 16;
              v9 += 32;
              sub_182CBA0(v12, v13);
            }
            while ( v9 != v11 );
            v9 = *v6;
          }
          sub_186B220((void *)(v9 - 8));
        }
        ++v6;
      }
      while ( v6 != v8 );
      v6 = (_QWORD *)*v141;
    }
    *((_DWORD *)v6 - 1) = 0;
  }
  v14 = v141[1];
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = v14 + 32 * v15;
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14);
        v18 = v14 + 16;
        v14 += 32LL;
        sub_182CBA0(v17, v18);
      }
      while ( v14 != v16 );
      v14 = v141[1];
    }
    *(_DWORD *)(v14 - 4) = 0;
  }
  v19 = v141[2];
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  result = *v140;
  if ( !*v140 )
    return result;
  result = *(unsigned int *)(result - 4);
  if ( !(_DWORD)result )
    return result;
  v144 = (std::chrono::_V2::steady_clock *)(v146 + 10);
  sub_1729EA0(v146 + 10);
  v21 = (_QWORD *)*v140;
  if ( !*v140 )
    goto LABEL_53;
  v142 = 0;
  do
  {
    if ( v142 >= *((_DWORD *)v21 - 1) )
      goto LABEL_54;
    *(_QWORD *)v148 = 0;
    v22 = &v21[v142];
    if ( !*v22 )
    {
      v33 = v140[1] + 32LL * v142;
LABEL_112:
      v108 = (_QWORD *)sub_186B270(0x48u);
      v35 = (__int64)(v108 + 1);
      *v108 = 2;
      *(_QWORD *)v148 = v108 + 1;
      goto LABEL_40;
    }
    v23 = _mm_loadl_epi64((const __m128i *)(*v22 - 8));
    v145.m128i_i64[0] = v23.m128i_i64[0];
    v24 = (unsigned int)_mm_cvtsi128_si32(v23);
    v25 = (_QWORD *)sub_186B270(32 * v24 + 8);
    v26 = _mm_loadl_epi64(&v145);
    v27 = (int *)(v25 + 1);
    *(_QWORD *)v148 = v25 + 1;
    v28 = *v22;
    *v25 = v26.m128i_i64[0];
    if ( !v28 || (v29 = v28 + 32LL * *(unsigned int *)(v28 - 4), v28 == v29) )
    {
      v34 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v26, 229));
      v33 = v140[1] + 32LL * v142;
      goto LABEL_38;
    }
    v30 = v25 + 1;
    do
    {
      while ( 1 )
      {
        *((_BYTE *)v30 + 4) &= 0xFCu;
        v32 = qword_1C7F2C0;
        *((_BYTE *)v30 + 20) &= 0xFCu;
        *(_DWORD *)v30 = 0;
        v30[1] = 0;
        *((_DWORD *)v30 + 4) = 1;
        v30[3] = 0;
        if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
          break;
        *(_DWORD *)v30 = *(_DWORD *)v28;
        if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
          goto LABEL_35;
LABEL_32:
        v31 = *(_DWORD *)(v28 + 16);
        v28 += 32;
        *((_BYTE *)v30 + 20) &= ~1u;
        v30 += 4;
        *((_DWORD *)v30 - 4) = v31;
        if ( v29 == v28 )
          goto LABEL_36;
      }
      sub_182C690(v32, v30, v28);
      if ( (*(_BYTE *)(v28 + 20) & 1) == 0 )
        goto LABEL_32;
LABEL_35:
      sub_182C690(v32, v30 + 2, v28 + 16);
      v28 += 32;
      v30 += 4;
    }
    while ( v29 != v28 );
LABEL_36:
    v27 = *(int **)v148;
    v33 = v140[1] + 32LL * v142;
    if ( !*(_QWORD *)v148 )
      goto LABEL_112;
    v34 = *(unsigned int *)(*(_QWORD *)v148 - 4LL);
    LODWORD(v24) = *(_DWORD *)(*(_QWORD *)v148 - 8LL);
LABEL_38:
    if ( (_DWORD)v34 == (_DWORD)v24 )
    {
      v88 = (unsigned int)(3 * v34 + 1) >> 1;
      v89 = 32 * v88 + 8;
      if ( 32 * (int)v34 + 8 >= (unsigned int)v89 || (unsigned int)v34 >= v88 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v149);
        sub_233E40((__int64)v149);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v90 = sub_186B270(v89);
      v91 = *(int **)v148;
      v92 = (_DWORD *)v90;
      v93 = v90 + 8;
      if ( *(_QWORD *)v148 )
      {
        v94 = *(unsigned int *)(*(_QWORD *)v148 - 4LL);
        v95 = v93;
        v92[1] = v94;
        v96 = &v91[8 * v94];
        for ( i = v91; i != v96; *(_QWORD *)(v95 - 8) = v102 )
        {
          v98 = *i;
          v99 = *((_BYTE *)i + 4);
          i += 8;
          v95 += 32;
          *(_DWORD *)(v95 - 32) = v98;
          *(_BYTE *)(v95 - 28) = v99 & 3 | *(_BYTE *)(v95 - 28) & 0xFC;
          v100 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(_QWORD *)(v95 - 24) = v100;
          v101 = *((_BYTE *)i - 12);
          *(_DWORD *)(v95 - 16) = *(i - 4);
          *(_BYTE *)(v95 - 12) = v101 & 3 | *(_BYTE *)(v95 - 12) & 0xFC;
          v102 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v103 = (unsigned int)*(v91 - 1);
        if ( (_DWORD)v103 )
        {
          v145.m128i_i64[1] = v93;
          v145.m128i_i32[0] = (unsigned int)(3 * v34 + 1) >> 1;
          v104 = &v91[8 * v103];
          v105 = v91;
          do
          {
            v106 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v105);
            v107 = v105 + 4;
            v105 += 8;
            sub_182CBA0(v106, v107);
          }
          while ( v104 != v105 );
          v88 = v145.m128i_i32[0];
          v93 = v145.m128i_i64[1];
          v91 = *(int **)v148;
        }
        v145.m128i_i64[0] = v93;
        sub_186B220(v91 - 2);
        v93 = v145.m128i_i64[0];
        v35 = v145.m128i_i64[0] + 32LL * (unsigned int)v92[1];
      }
      else
      {
        *(_DWORD *)(v90 + 4) = 0;
        v35 = v90 + 8;
      }
      *(_QWORD *)v148 = v93;
      *v92 = v88;
    }
    else
    {
      v35 = (__int64)&v27[8 * v34];
    }
LABEL_40:
    *(_QWORD *)v35 = 0;
    *(_QWORD *)(v35 + 8) = 0;
    *(_QWORD *)(v35 + 16) = 1;
    v36 = qword_1C7F2C0;
    *(_QWORD *)(v35 + 24) = 0;
    if ( (*(_BYTE *)(v33 + 4) & 1) != 0 )
      sub_182C690(v36, v35, v33);
    else
      *(_DWORD *)v35 = *(_DWORD *)v33;
    if ( (*(_BYTE *)(v33 + 20) & 1) != 0 )
    {
      sub_182C690(v36, v35 + 16, v33 + 16);
    }
    else
    {
      v37 = *(_DWORD *)(v33 + 16);
      *(_BYTE *)(v35 + 20) &= ~1u;
      *(_DWORD *)(v35 + 16) = v37;
    }
    v38 = qword_1C7F2C0;
    ++*(_DWORD *)(*(_QWORD *)v148 - 4LL);
    v39 = *(_BYTE *)(v140[2] + v142) == 0;
    *(_QWORD *)v149 = 0;
    v150 = 0;
    v151[0] = 1;
    v151[1] = 0;
    if ( v39 )
    {
      sub_182CBA0(v38, v151);
      BYTE4(v151[0]) &= ~1u;
      LODWORD(v151[0]) = 1;
      sub_1728620((int)v144, (int)v148, (int)v149, v85, v86, v87, v139, (int)v140, v141);
    }
    else
    {
      sub_182CBA0(v38, v151);
      BYTE4(v151[0]) &= ~1u;
      LODWORD(v151[0]) = 1;
      sub_1728F40((int)v144, (int)v148, (int)v149, v40, v41, v42, v139, (int)v140, v141);
    }
    v43 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v149);
    sub_182CBA0(v43, v151);
    v44 = *(int **)v148;
    if ( *(_QWORD *)v148 )
    {
      v45 = *(unsigned int *)(*(_QWORD *)v148 - 4LL);
      if ( (_DWORD)v45 )
      {
        v46 = *(_QWORD *)v148 + 32 * v45;
        do
        {
          v47 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v44);
          v48 = v44 + 4;
          v44 += 8;
          sub_182CBA0(v47, v48);
        }
        while ( (int *)v46 != v44 );
        v44 = *(int **)v148;
      }
      sub_186B220(v44 - 2);
    }
    ++v142;
    v21 = (_QWORD *)*v140;
  }
  while ( *v140 );
LABEL_53:
  v21 = nullptr;
LABEL_54:
  v49 = 0;
  while ( 2 )
  {
    v51 = *v21;
    if ( v51 )
    {
      if ( v49 >= *(_DWORD *)(v51 - 4) + 1 )
        break;
      goto LABEL_56;
    }
    if ( !v49 )
    {
LABEL_56:
      v50 = v49++;
      sub_1728560(v144, v50);
      v21 = (_QWORD *)*v140;
      continue;
    }
    break;
  }
  result = sub_172C520(v144);
  if ( (_DWORD)result != 1 )
    return result;
  result = *((_QWORD *)v146 + 9);
  if ( !result )
    return result;
  result = *(unsigned int *)(result - 4);
  v143 = result;
  if ( !(_DWORD)result )
    return result;
  LODWORD(v140) = 0;
  while ( 2 )
  {
    *(_QWORD *)v148 = 0;
    sub_17275D0((int)v144, (int)v140, (int)v148, (int)&v147, v52, v53, v139, v140);
    v54 = *(int **)v148;
    if ( v147 )
      goto LABEL_89;
    v55 = 0x1FFFFFFFE0LL;
    if ( *(_QWORD *)v148 )
      v55 = 32LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v148 - 4LL) - 1);
    v56 = *(_QWORD *)v148 + v55;
    v57 = v141[1];
    if ( !v57 || (v58 = *(unsigned int *)(v57 - 4), (_DWORD)v58 == *(_DWORD *)(v57 - 8)) )
    {
      sub_53D790(v141 + 1);
      v57 = v141[1];
      v58 = *(unsigned int *)(v57 - 4);
    }
    v59 = 32 * v58 + v57;
    *(_QWORD *)v59 = 0;
    v60 = qword_1C7F2C0;
    *(_QWORD *)(v59 + 8) = 0;
    *(_QWORD *)(v59 + 16) = 1;
    *(_QWORD *)(v59 + 24) = 0;
    if ( (*(_BYTE *)(v56 + 4) & 1) != 0 )
      sub_182C690(v60, v59, v56);
    else
      *(_DWORD *)v59 = *(_DWORD *)v56;
    if ( (*(_BYTE *)(v56 + 20) & 1) != 0 )
    {
      sub_182C690(v60, v59 + 16, v56 + 16);
    }
    else
    {
      v61 = *(_DWORD *)(v56 + 16);
      *(_BYTE *)(v59 + 20) &= ~1u;
      *(_DWORD *)(v59 + 16) = v61;
    }
    v62 = (_QWORD *)v141[2];
    ++*(_DWORD *)(v141[1] - 4);
    if ( v62 )
    {
      v63 = *((_DWORD *)v62 - 1);
      if ( v63 == *((_DWORD *)v62 - 2) )
      {
        v132 = (3 * v63 + 1) >> 1;
        v133 = v132 + 8;
        if ( v63 + 8 >= (unsigned int)v133 || v63 >= v132 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v149);
          sub_233E40((__int64)v149);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v134 = (unsigned int *)sub_186B300(v62 - 1, v133);
        v62 = v134 + 2;
        *v134 = v132;
        v141[2] = (unsigned __int64)(v134 + 2);
        LODWORD(v134) = v134[1];
        v66 = (char *)v62 + (unsigned int)v134;
        v65 = (_DWORD)v134 + 1;
      }
      else
      {
        v64 = v63;
        v65 = v63 + 1;
        v66 = (char *)v62 + v64;
      }
    }
    else
    {
      v135 = (_QWORD *)sub_186B270(0xAu);
      v62 = v135 + 1;
      *v135 = 2;
      v66 = v135 + 1;
      v141[2] = (unsigned __int64)(v135 + 1);
      v65 = 1;
    }
    *v66 = 1;
    *((_DWORD *)v62 - 1) = v65;
    v67 = 0x1FFFFFFFE0LL;
    if ( *(_QWORD *)v148 )
      v67 = 32LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v148 - 4LL) - 1);
    v68 = qword_1C7F2C0;
    v69 = *(_QWORD *)v148 + v67;
    sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v148 + v67);
    sub_182CBA0(v68, v69 + 16);
    v70 = *(int **)v148;
    v71 = (_QWORD *)*v141;
    --*(_DWORD *)(*(_QWORD *)v148 - 4LL);
    if ( v71 )
    {
      v72 = *((unsigned int *)v71 - 1);
      v73 = *((_DWORD *)v71 - 2);
      if ( v73 != (_DWORD)v72 )
      {
        v74 = &v71[v72];
        *v74 = 0;
        goto LABEL_80;
      }
      v109 = (3 * v73 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * v73 + 8 >= (unsigned int)v110 || v73 >= v109 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v149, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v149);
        sub_233E40((__int64)v149);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v111 = (unsigned int *)sub_186B270(v110);
      v112 = (unsigned __int64)(v111 + 2);
      v113 = *v141;
      if ( *v141 )
      {
        v114 = *(unsigned int *)(v113 - 4);
        v115 = 8 * v114;
        v111[1] = v114;
        v116 = (__int64 *)(v113 + 8 * v114);
        if ( (__int64 *)v113 != v116 )
        {
          v117 = (__int64 *)v113;
          if ( (unsigned __int64)(v115 - 8) <= 8 || v113 < (unsigned __int64)(v111 + 6) && v112 < v113 + 16 )
          {
            v137 = v111 + 2;
            do
            {
              v138 = *v117;
              *v117++ = 0;
              v137 += 2;
              *((_QWORD *)v137 - 1) = v138;
            }
            while ( v117 != v116 );
          }
          else
          {
            v118 = 0;
            v119 = ((unsigned __int64)(v115 - 8) >> 3) + 1;
            do
            {
              v120 = _mm_loadu_si128((const __m128i *)(v113 + v118 * 4));
              *(_OWORD *)(v113 + v118 * 4) = 0;
              *(__m128i *)&v111[v118 + 2] = v120;
              v118 += 4;
            }
            while ( 4 * (v119 >> 1) != v118 );
            if ( (v119 & 1) != 0 )
            {
              v121 = v119 & 0xFFFFFFFFFFFFFFFELL;
              v122 = (__int64 *)(v113 + 8 * v121);
              v123 = *v122;
              *v122 = 0;
              *(_QWORD *)(v112 + 8 * v121) = v123;
            }
          }
        }
        if ( (_DWORD)v114 )
        {
          v145.m128i_i64[1] = (__int64)v111;
          v146 = v111 + 2;
          v145.m128i_i32[0] = v109;
          v124 = (__int64 *)v113;
          v125 = (__int64 *)(v113 + 8 * v114);
          do
          {
            v126 = *v124;
            if ( *v124 )
            {
              v127 = *(unsigned int *)(v126 - 4);
              if ( (_DWORD)v127 )
              {
                v128 = v126 + 32 * v127;
                do
                {
                  v129 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v126);
                  v130 = v126 + 16;
                  v126 += 32;
                  sub_182CBA0(v129, v130);
                }
                while ( v128 != v126 );
                v126 = *v124;
              }
              sub_186B220((void *)(v126 - 8));
            }
            ++v124;
          }
          while ( v124 != v125 );
          v109 = v145.m128i_i32[0];
          v111 = (unsigned int *)v145.m128i_i64[1];
          v112 = (unsigned __int64)v146;
          v113 = *v141;
        }
        sub_186B220((void *)(v113 - 8));
        v131 = v111[1];
        v74 = (_QWORD *)(v112 + 8 * v131);
      }
      else
      {
        v111[1] = 0;
        v74 = v111 + 2;
        LODWORD(v131) = 0;
      }
      *v111 = v109;
      *v141 = v112;
      v70 = *(int **)v148;
    }
    else
    {
      v136 = (_QWORD *)sub_186B270(0x18u);
      v112 = (unsigned __int64)(v136 + 1);
      *v136 = 2;
      LODWORD(v131) = 0;
      v74 = v136 + 1;
      *v141 = (unsigned __int64)(v136 + 1);
      v70 = *(int **)v148;
    }
    *v74 = 0;
    if ( !v70 )
    {
      *(_DWORD *)(v112 - 4) = v131 + 1;
      goto LABEL_95;
    }
LABEL_80:
    v75 = *(v70 - 1);
    v145.m128i_i32[0] = *(v70 - 2);
    v76 = (_QWORD *)sub_186B270(32LL * v145.m128i_u32[0] + 8);
    *v76 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v145.m128i_u32[0]), _mm_cvtsi32_si128(v75)).m128i_u64[0];
    *v74 = v76 + 1;
    v54 = *(int **)v148;
    if ( !*(_QWORD *)v148 )
    {
      ++*(_DWORD *)(*v141 - 4);
      goto LABEL_95;
    }
    v77 = v76 + 1;
    v78 = *(_QWORD *)v148 + 32LL * *(unsigned int *)(*(_QWORD *)v148 - 4LL);
    if ( *(_QWORD *)v148 == v78 )
    {
      ++*(_DWORD *)(*v141 - 4);
      goto LABEL_90;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        *((_BYTE *)v77 + 4) &= 0xFCu;
        v80 = qword_1C7F2C0;
        *((_BYTE *)v77 + 20) &= 0xFCu;
        *(_DWORD *)v77 = 0;
        v77[1] = 0;
        *((_DWORD *)v77 + 4) = 1;
        v77[3] = 0;
        if ( (v54[1] & 1) == 0 )
        {
          *(_DWORD *)v77 = *v54;
          if ( (v54[5] & 1) != 0 )
            break;
          goto LABEL_84;
        }
        sub_182C690(v80, v77, v54);
        if ( (v54[5] & 1) == 0 )
        {
LABEL_84:
          v79 = v54[4];
          v54 += 8;
          *((_BYTE *)v77 + 20) &= ~1u;
          v77 += 4;
          *((_DWORD *)v77 - 4) = v79;
          if ( (int *)v78 == v54 )
            goto LABEL_88;
          continue;
        }
        break;
      }
      sub_182C690(v80, v77 + 2, v54 + 4);
      v54 += 8;
      v77 += 4;
      if ( (int *)v78 != v54 )
        continue;
      break;
    }
LABEL_88:
    v54 = *(int **)v148;
    ++*(_DWORD *)(*v141 - 4);
LABEL_89:
    if ( v54 )
    {
LABEL_90:
      v81 = (unsigned int)*(v54 - 1);
      if ( (_DWORD)v81 )
      {
        v82 = &v54[8 * v81];
        do
        {
          v83 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v54);
          v84 = v54 + 4;
          v54 += 8;
          sub_182CBA0(v83, v84);
        }
        while ( v54 != v82 );
        v54 = *(int **)v148;
      }
      sub_186B220(v54 - 2);
    }
LABEL_95:
    LODWORD(v140) = (_DWORD)v140 + 1;
    result = (unsigned int)v140;
    if ( (_DWORD)v140 != v143 )
      continue;
    return result;
  }
}

