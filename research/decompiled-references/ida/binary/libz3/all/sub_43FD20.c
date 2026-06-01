__int64 __fastcall sub_43FD20(__int64 a1, unsigned int a2)
{
  __m128i *v2; // rax
  __m128i *v3; // rbp
  char *v4; // rax
  __m128i *exception; // rax
  __m128i *v6; // rbp
  char *v7; // rax
  __m128i *v8; // rax
  __m128i *v9; // rbp
  char *v10; // rax
  __m128i *v11; // rax
  __m128i *v12; // rbp
  char *v13; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 *v17; // rdx
  __int64 v18; // rdi
  int *v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 *v26; // rbp
  _QWORD *v27; // rcx
  __int64 *v28; // rbx
  __int64 v29; // r14
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  unsigned int v41; // r15d
  size_t v42; // rsi
  unsigned int *v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rdi
  int v47; // esi
  __int64 v48; // rbp
  __int64 v49; // rax
  int *v50; // rax
  int v51; // eax
  _QWORD *v52; // rbx
  _QWORD *v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned int v56; // r11d
  __int64 v57; // r14
  __int64 v58; // r12
  __int64 v59; // rsi
  int v60; // eax
  _QWORD *v61; // rsi
  __int64 v62; // rcx
  unsigned int v63; // eax
  unsigned int v64; // r8d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rsi
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  char v70; // cl
  __int64 *v71; // rbx
  _QWORD *v72; // r9
  __int64 *v73; // r11
  _QWORD *v74; // rsi
  __int64 v75; // rcx
  char v76; // al
  int v77; // edx
  int v78; // r14d
  char *v79; // rax
  _QWORD *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // r8
  _QWORD *v83; // rax
  __int64 *v84; // rbx
  __int64 v85; // rsi
  char *v86; // rdi
  __int64 v87; // r8
  char *v88; // rsi
  unsigned int v89; // edx
  __int64 v90; // rax
  int v91; // r11d
  __int64 v92; // r10
  __int64 v93; // r8
  char *i; // rax
  __int64 v95; // rdx
  unsigned int v96; // eax
  _QWORD *v97; // rbx
  _QWORD *v98; // rbp
  __int64 v99; // rsi
  __int64 v100; // rdi
  _QWORD *v101; // rax
  __int64 v102; // r14
  __int64 v103; // r15
  unsigned __int64 v104; // r14
  __int64 v105; // rdx
  int v106; // eax
  _QWORD *v107; // rdx
  __int64 v108; // rbp
  unsigned int v109; // eax
  unsigned int v110; // edx
  size_t v111; // rsi
  unsigned int *v112; // rax
  unsigned int v113; // eax
  _QWORD *v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // r8
  __int64 v117; // [rsp+0h] [rbp-128h]
  __int64 *v118; // [rsp+0h] [rbp-128h]
  __int64 v119; // [rsp+0h] [rbp-128h]
  unsigned int v120; // [rsp+0h] [rbp-128h]
  unsigned int v121; // [rsp+8h] [rbp-120h]
  __int64 v122; // [rsp+8h] [rbp-120h]
  __int64 v123; // [rsp+10h] [rbp-118h]
  unsigned int v124; // [rsp+1Ch] [rbp-10Ch]
  __int64 v125; // [rsp+20h] [rbp-108h]
  unsigned int v126; // [rsp+28h] [rbp-100h]
  unsigned int v127; // [rsp+2Ch] [rbp-FCh]
  _QWORD *v128; // [rsp+30h] [rbp-F8h]
  unsigned int v129; // [rsp+4Ch] [rbp-DCh] BYREF
  __int64 v130; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v131; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+68h] [rbp-C0h]
  _QWORD v134[23]; // [rsp+70h] [rbp-B8h] BYREF

  v15 = *(_QWORD *)(a1 + 296);
  v16 = *(_BYTE *)(a1 + 80) == 0;
  v125 = a2;
  v17 = (__int64 *)(v15 + 8LL * a2);
  v18 = *v17;
  v123 = *v17;
  if ( !v16 )
  {
    if ( *(_WORD *)(v18 + 4) )
      return 0;
    v19 = *(int **)(*(_QWORD *)(v18 + 16) + 24LL);
    if ( v19 )
      v20 = *v19;
    else
      v20 = -1;
    v124 = 0;
    if ( v20 != *(_DWORD *)(a1 + 104) )
      return v124;
  }
  v21 = *(_QWORD *)(a1 + 24);
  if ( v123 == v21 )
    return 0;
  if ( v15 )
    v127 = *(_DWORD *)(v15 - 4);
  else
    v127 = 0;
  v22 = *(_QWORD *)(a1 + 16);
  *v17 = v21;
  v131 = nullptr;
  v130 = v22;
  if ( v123 )
    ++*(_DWORD *)(v123 + 8);
  v23 = (_QWORD *)sub_186B270(0x18u);
  v24 = *(_QWORD *)(a1 + 16);
  v131 = v23 + 1;
  v23[1] = v123;
  *v23 = 0x100000002LL;
  sub_3D6250(v24, (__int64)&v130);
  v25 = *(_QWORD **)(a1 + 296);
  v26 = v131;
  v27 = v25;
  if ( v123 == *v131 )
  {
    v25[a2] = v123;
    if ( v25 )
      *((_DWORD *)v25 - 1) = v127;
    ++*(_DWORD *)(a1 + 48);
    v124 = 0;
    goto LABEL_95;
  }
  v28 = &v131[*((unsigned int *)v131 - 1)];
  if ( v131 != v28 )
  {
    do
    {
      v29 = *v26;
      if ( v25 )
      {
        v30 = *((_DWORD *)v27 - 1);
        if ( v30 == *((_DWORD *)v27 - 2) )
          goto LABEL_22;
LABEL_15:
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v27[v31];
        goto LABEL_16;
      }
      v69 = (_QWORD *)sub_186B270(0x18u);
      v27 = v69 + 1;
      *v69 = 2;
      v32 = 1;
      *(_QWORD *)(a1 + 296) = v27;
      v33 = v27;
      while ( 1 )
      {
LABEL_16:
        *v33 = v29;
        *((_DWORD *)v27 - 1) = v32;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v34 = *(_QWORD *)(a1 + 264);
        if ( !v34 )
        {
          v68 = (_QWORD *)sub_186B270(0x18u);
          v44 = v68 + 1;
          *v68 = 2;
          v47 = 1;
          v25 = *(_QWORD **)(a1 + 296);
          *(_QWORD *)(a1 + 264) = v44;
          v46 = v44;
          v27 = v25;
          goto LABEL_30;
        }
        v35 = *(_DWORD *)(v34 - 4);
        if ( v35 == *(_DWORD *)(v34 - 8) )
          break;
        ++v26;
        *(_QWORD *)(v34 + 8LL * v35) = v29;
        *(_DWORD *)(v34 - 4) = v35 + 1;
        if ( v28 == v26 )
          goto LABEL_31;
        v29 = *v26;
        v30 = *((_DWORD *)v27 - 1);
        if ( v30 != *((_DWORD *)v27 - 2) )
          goto LABEL_15;
LABEL_22:
        v36 = (3 * v30 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v37 || v30 >= v36 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          ptr = v134;
          v6 = exception;
          v7 = (char *)operator new(0x2Bu);
          strcpy(v7, "Overflow encountered when expanding vector");
          v6->m128i_i64[1] = (__int64)v7;
          v6->m128i_i64[0] = (__int64)off_1C63128;
          v6[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          ptr = v134;
          v133 = 0;
          v134[0] = 0;
          sub_233E40((__int64)&ptr);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v27 - 1, v37);
        v39 = v38[1];
        v27 = v38 + 2;
        *v38 = v36;
        *(_QWORD *)(a1 + 296) = v38 + 2;
        LODWORD(v38) = v39;
        v33 = &v27[v39];
        v32 = (_DWORD)v38 + 1;
      }
      v41 = (3 * v35 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v42 || v35 >= v41 )
      {
        v11 = (__m128i *)__cxa_allocate_exception(0x28u);
        ptr = v134;
        v12 = v11;
        v13 = (char *)operator new(0x2Bu);
        strcpy(v13, "Overflow encountered when expanding vector");
        v12->m128i_i64[1] = (__int64)v13;
        v12->m128i_i64[0] = (__int64)off_1C63128;
        v12[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        ptr = v134;
        v133 = 0;
        v134[0] = 0;
        sub_233E40((__int64)&ptr);
        __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300((void *)(v34 - 8), v42);
      v44 = v43 + 2;
      v45 = v43[1];
      *v43 = v41;
      *(_QWORD *)(a1 + 264) = v43 + 2;
      v25 = *(_QWORD **)(a1 + 296);
      v46 = &v44[v45];
      v47 = v45 + 1;
      v27 = v25;
LABEL_30:
      ++v26;
      *v46 = v29;
      *((_DWORD *)v44 - 1) = v47;
    }
    while ( v28 != v26 );
  }
LABEL_31:
  if ( !v27 )
  {
    if ( v127 != 0 && -v127 != 1 )
    {
      v26 = v131;
      *(_QWORD *)(8 * v125) = v123;
      goto LABEL_124;
    }
    v97 = *(_QWORD **)(a1 + 312);
    if ( !v97 )
      goto LABEL_150;
    v98 = &v97[*((unsigned int *)v97 - 1)];
    if ( v97 >= v98 )
    {
      v101 = *(_QWORD **)(a1 + 296);
      *((_DWORD *)v97 - 1) = 0;
      goto LABEL_151;
    }
    goto LABEL_130;
  }
  v126 = *((_DWORD *)v27 - 1);
  if ( v126 - v127 <= 1 )
  {
    v97 = *(_QWORD **)(a1 + 312);
    if ( !v97 )
    {
      v102 = v126;
      if ( v126 )
        goto LABEL_136;
      goto LABEL_150;
    }
    v98 = &v97[*((unsigned int *)v97 - 1)];
    if ( v97 >= v98 )
    {
      *((_DWORD *)v97 - 1) = 0;
      goto LABEL_135;
    }
    do
    {
LABEL_130:
      v99 = *v97;
      if ( *v97 )
      {
        v100 = *(_QWORD *)(a1 + 304);
        v16 = (*(_DWORD *)(v99 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(v100, v99);
      }
      ++v97;
    }
    while ( v97 < v98 );
    v101 = *(_QWORD **)(a1 + 296);
    v97 = *(_QWORD **)(a1 + 312);
    v27 = v101;
    if ( !v97 )
    {
      if ( !v101 )
        goto LABEL_151;
      v102 = *((unsigned int *)v101 - 1);
      if ( !(_DWORD)v102 )
        goto LABEL_151;
      goto LABEL_136;
    }
    *((_DWORD *)v97 - 1) = 0;
    if ( !v101 )
    {
LABEL_151:
      v26 = v131;
      v27 = v101;
      goto LABEL_122;
    }
LABEL_135:
    v102 = *((unsigned int *)v27 - 1);
    if ( (_DWORD)v102 )
    {
LABEL_136:
      v103 = 8 * v102;
      v104 = 0;
      while ( 1 )
      {
        v108 = v27[v104 / 8];
        if ( v108 != *(_QWORD *)(a1 + 24) )
        {
          if ( v108 )
            ++*(_DWORD *)(v108 + 8);
          if ( v97 )
          {
            v109 = *((_DWORD *)v97 - 1);
            if ( v109 == *((_DWORD *)v97 - 2) )
            {
              v110 = (3 * v109 + 1) >> 1;
              v111 = 8 * v110 + 8;
              if ( 8 * v109 + 8 >= (unsigned int)v111 || v109 >= v110 )
              {
                v2 = (__m128i *)__cxa_allocate_exception(0x28u);
                ptr = v134;
                v3 = v2;
                v4 = (char *)operator new(0x2Bu);
                strcpy(v4, "Overflow encountered when expanding vector");
                v3->m128i_i64[1] = (__int64)v4;
                v3->m128i_i64[0] = (__int64)off_1C63128;
                v3[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
                ptr = v134;
                v133 = 0;
                v134[0] = 0;
                sub_233E40((__int64)&ptr);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v120 = (3 * v109 + 1) >> 1;
              v112 = (unsigned int *)sub_186B300(v97 - 1, v111);
              v97 = v112 + 2;
              *(_QWORD *)(a1 + 312) = v112 + 2;
              *v112 = v120;
              LODWORD(v112) = v112[1];
              v107 = &v97[(unsigned int)v112];
              v106 = (_DWORD)v112 + 1;
            }
            else
            {
              v105 = v109;
              v106 = v109 + 1;
              v107 = &v97[v105];
            }
          }
          else
          {
            v114 = (_QWORD *)sub_186B270(0x18u);
            v97 = v114 + 1;
            *v114 = 2;
            v106 = 1;
            *(_QWORD *)(a1 + 312) = v97;
            v107 = v97;
          }
          *v107 = v108;
          *((_DWORD *)v97 - 1) = v106;
        }
        v104 += 8LL;
        if ( v103 == v104 )
          break;
        v27 = *(_QWORD **)(a1 + 296);
      }
      if ( v97 && *((_DWORD *)v97 - 1) )
      {
        if ( !(unsigned __int8)sub_40A830(
                                 *(_QWORD **)(a1 + 280),
                                 *(_DWORD *)(a1 + 292),
                                 a1 + 304,
                                 &ptr,
                                 *(_DWORD *)(a1 + 288)) )
          goto LABEL_121;
        v113 = *(_DWORD *)(a1 + 292);
        v124 = 1;
        if ( v113 < (unsigned int)ptr )
          v113 = (unsigned int)ptr;
        *(_DWORD *)(a1 + 292) = v113;
LABEL_93:
        ++*(_DWORD *)(a1 + 44);
        v26 = v131;
        goto LABEL_94;
      }
    }
LABEL_150:
    v101 = *(_QWORD **)(a1 + 296);
    goto LABEL_151;
  }
  if ( v127 >= v126 )
  {
    v26 = v131;
    v27[v125] = v123;
    goto LABEL_123;
  }
  v124 = 0;
  v48 = v127;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a1 + 80)
      || (v49 = v27[v48], !*(_WORD *)(v49 + 4))
      && ((v50 = *(int **)(*(_QWORD *)(v49 + 16) + 24LL)) == nullptr ? (v51 = -1) : (v51 = *v50),
          *(_DWORD *)(a1 + 104) == v51) )
    {
      v52 = *(_QWORD **)(a1 + 312);
      if ( v52 )
      {
        v53 = &v52[*((unsigned int *)v52 - 1)];
        if ( v52 >= v53 )
          goto LABEL_50;
        do
        {
          while ( 1 )
          {
            v54 = *v52;
            if ( *v52 )
            {
              v55 = *(_QWORD *)(a1 + 304);
              v16 = (*(_DWORD *)(v54 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( ++v52 >= v53 )
              goto LABEL_49;
          }
          sub_15D7BC0(v55, v54);
          ++v52;
        }
        while ( v52 < v53 );
LABEL_49:
        v52 = *(_QWORD **)(a1 + 312);
        v27 = *(_QWORD **)(a1 + 296);
        if ( v52 )
LABEL_50:
          *((_DWORD *)v52 - 1) = 0;
      }
      if ( v27 )
      {
        v56 = *((_DWORD *)v27 - 1);
        if ( v56 )
        {
          v57 = v56;
          v58 = 0;
          while ( 1 )
          {
            v62 = v27[v58];
            if ( *(_QWORD *)(a1 + 24) != v62 && (_DWORD)v48 != (_DWORD)v58 )
            {
              if ( v62 )
                ++*(_DWORD *)(v62 + 8);
              if ( v52 )
              {
                v63 = *((_DWORD *)v52 - 1);
                if ( v63 == *((_DWORD *)v52 - 2) )
                {
                  v64 = (3 * v63 + 1) >> 1;
                  v65 = 8 * v64 + 8;
                  if ( 8 * v63 + 8 >= (unsigned int)v65 || v63 >= v64 )
                  {
                    v8 = (__m128i *)__cxa_allocate_exception(0x28u);
                    ptr = v134;
                    v9 = v8;
                    v10 = (char *)operator new(0x2Bu);
                    strcpy(v10, "Overflow encountered when expanding vector");
                    v9->m128i_i64[1] = (__int64)v10;
                    v9->m128i_i64[0] = (__int64)off_1C63128;
                    v9[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
                    ptr = v134;
                    v133 = 0;
                    v134[0] = 0;
                    sub_233E40((__int64)&ptr);
                    __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v121 = (3 * v63 + 1) >> 1;
                  v117 = v62;
                  v66 = (unsigned int *)sub_186B300(v52 - 1, v65);
                  v67 = v66[1];
                  v52 = v66 + 2;
                  *(_QWORD *)(a1 + 312) = v66 + 2;
                  v62 = v117;
                  *v66 = v121;
                  LODWORD(v66) = v67;
                  v61 = &v52[v67];
                  v60 = (_DWORD)v66 + 1;
                }
                else
                {
                  v59 = v63;
                  v60 = v63 + 1;
                  v61 = &v52[v59];
                }
              }
              else
              {
                v119 = v62;
                v83 = (_QWORD *)sub_186B270(0x18u);
                v52 = v83 + 1;
                v62 = v119;
                *(_QWORD *)(a1 + 312) = v83 + 1;
                v61 = v83 + 1;
                *v83 = 2;
                v60 = 1;
              }
              *v61 = v62;
              *((_DWORD *)v52 - 1) = v60;
            }
            if ( v57 == ++v58 )
              break;
            v27 = *(_QWORD **)(a1 + 296);
          }
          if ( v52 )
          {
            if ( *((_DWORD *)v52 - 1) )
            {
              v70 = sub_40A830(*(_QWORD **)(a1 + 280), *(_DWORD *)(a1 + 292), a1 + 304, &v129, *(_DWORD *)(a1 + 288));
              if ( v70 )
              {
                v71 = *(__int64 **)(a1 + 312);
                v72 = v134;
                ptr = v134;
                v133 = 0x1000000000LL;
                if ( v71 && (v73 = &v71[*((unsigned int *)v71 - 1)], v71 != v73) )
                {
                  do
                  {
                    v75 = *v71;
                    v76 = *(_BYTE *)(*v71 + 6);
                    if ( (v76 & 2) == 0 )
                    {
                      *(_BYTE *)(v75 + 6) = v76 | 2;
                      v77 = v133;
                      if ( (unsigned int)v133 < HIDWORD(v133) )
                      {
                        v74 = ptr;
                      }
                      else
                      {
                        v128 = v72;
                        v78 = 2 * HIDWORD(v133);
                        v122 = v75;
                        v118 = v73;
                        v79 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v133)));
                        v77 = v133;
                        v80 = ptr;
                        v74 = v79;
                        v73 = v118;
                        v75 = v122;
                        v72 = v128;
                        if ( (_DWORD)v133 )
                        {
                          if ( (unsigned int)(v133 - 1) <= 2 || v79 == (char *)ptr + 8 )
                          {
                            v115 = 0;
                            v116 = 8LL * (unsigned int)v133;
                            do
                            {
                              v74[v115 / 8] = v80[v115 / 8];
                              v115 += 8LL;
                            }
                            while ( v115 != v116 );
                          }
                          else
                          {
                            v81 = 0;
                            v82 = 16LL * ((unsigned int)v133 >> 1);
                            do
                            {
                              *(__m128i *)&v74[v81 / 8] = _mm_loadu_si128((const __m128i *)&v80[v81 / 8]);
                              v81 += 16LL;
                            }
                            while ( v82 != v81 );
                            if ( (v77 & 1) != 0 )
                              v74[v77 & 0xFFFFFFFE] = v80[v77 & 0xFFFFFFFE];
                          }
                        }
                        if ( v80 != v128 && v80 )
                        {
                          sub_186B220(v80);
                          v77 = v133;
                          v72 = v128;
                          v75 = v122;
                          v73 = v118;
                        }
                        ptr = v74;
                        HIDWORD(v133) = v78;
                      }
                      v74[v77] = v75;
                      LODWORD(v133) = v77 + 1;
                    }
                    ++v71;
                  }
                  while ( v73 != v71 );
                  v86 = (char *)ptr;
                  v87 = *(_QWORD *)(a1 + 296);
                  v88 = (char *)ptr + 8 * (unsigned int)v133;
                  v70 = ptr == nullptr || ptr == v72;
                  if ( !v87 )
                    goto LABEL_114;
                  v89 = *(_DWORD *)(v87 - 4);
                  if ( (unsigned int)v48 >= v89 )
                    goto LABEL_114;
                }
                else
                {
                  v87 = *(_QWORD *)(a1 + 296);
                  if ( !v87
                    || (v89 = *(_DWORD *)(v87 - 4), v86 = (char *)v134, v88 = (char *)v134, (unsigned int)v48 >= v89) )
                  {
LABEL_118:
                    v96 = *(_DWORD *)(a1 + 292);
                    if ( v96 < v129 )
                      v96 = v129;
                    *(_DWORD *)(a1 + 292) = v96;
                    goto LABEL_39;
                  }
                }
                v90 = v87 + 8 * v48;
                v91 = 0;
                v92 = v87 + 8 * (v48 + v89 - 1 - (unsigned int)v48) + 8;
                do
                {
                  v93 = *(_QWORD *)(a1 + 24);
                  if ( *(_QWORD *)v90 != v93 && (*(_BYTE *)(*(_QWORD *)v90 + 6LL) & 2) == 0 )
                  {
                    *(_QWORD *)v90 = v93;
                    ++v91;
                  }
                  v90 += 8;
                }
                while ( v90 != v92 );
                v124 += v91;
LABEL_114:
                for ( i = v86; i != v88; *(_BYTE *)(v95 + 6) &= ~2u )
                {
                  v95 = *(_QWORD *)i;
                  i += 8;
                }
                LODWORD(v133) = 0;
                if ( !v70 )
                  sub_186B220(v86);
                goto LABEL_118;
              }
            }
          }
        }
      }
    }
LABEL_39:
    if ( (unsigned int)++v48 >= v126 )
      break;
    v27 = *(_QWORD **)(a1 + 296);
  }
  if ( v124 )
    goto LABEL_93;
LABEL_121:
  v26 = v131;
  v27 = *(_QWORD **)(a1 + 296);
LABEL_122:
  v27[v125] = v123;
  if ( v27 )
LABEL_123:
    *((_DWORD *)v27 - 1) = v127;
LABEL_124:
  ++*(_DWORD *)(a1 + 48);
  v124 = 0;
LABEL_94:
  if ( v26 )
  {
LABEL_95:
    v84 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v84 )
      goto LABEL_102;
    do
    {
      while ( 1 )
      {
        v85 = *v26;
        if ( *v26 )
        {
          v16 = (*(_DWORD *)(v85 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v26 >= v84 )
          goto LABEL_101;
      }
      sub_15D7BC0(v130, v85);
      ++v26;
    }
    while ( v26 < v84 );
LABEL_101:
    v26 = v131;
    if ( v131 )
LABEL_102:
      sub_186B220(v26 - 1);
  }
  return v124;
}

