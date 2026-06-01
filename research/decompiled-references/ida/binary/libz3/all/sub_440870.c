void __fastcall sub_440870(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __m128i *v6; // r12
  char *v7; // rax
  __m128i *exception; // r12
  char *v9; // rax
  __m128i *v10; // r12
  char *v11; // rax
  std::chrono::_V2::steady_clock *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rax
  std::chrono::_V2::steady_clock *v21; // rdi
  __int64 *v22; // rbp
  __int64 *i; // r14
  unsigned int v24; // r13d
  __int64 v25; // rbp
  __int64 v26; // rax
  int *v27; // rax
  int v28; // eax
  _QWORD *v29; // r14
  _QWORD *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  unsigned int v34; // r11d
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rsi
  int v38; // eax
  _QWORD *v39; // rsi
  __int64 v40; // r8
  unsigned int v41; // eax
  unsigned int v42; // r10d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  _QWORD *v46; // rbp
  __int64 v47; // rdx
  int v48; // eax
  std::chrono::_V2::steady_clock *v49; // rdx
  __int64 v50; // r15
  unsigned int v51; // eax
  unsigned int v52; // r13d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rdx
  char v56; // cl
  __int64 *v57; // rdx
  __int64 *v58; // r10
  _QWORD *v59; // r8
  __int64 v60; // rsi
  char v61; // al
  int v62; // ecx
  int v63; // r13d
  char *v64; // rax
  _QWORD *v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // r11
  _QWORD *v68; // rax
  unsigned int v69; // r13d
  int v70; // r15d
  unsigned int v71; // ebp
  int v72; // eax
  unsigned int v73; // r15d
  int v74; // ebp
  int v75; // eax
  _QWORD *v76; // rbp
  _QWORD *v77; // r13
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 *v80; // rbp
  __int64 *k; // r15
  __int64 v82; // rcx
  int v83; // eax
  _QWORD *v84; // rcx
  __int64 v85; // r13
  _QWORD *v86; // rdx
  unsigned int v87; // eax
  unsigned int v88; // r14d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rbp
  _QWORD *v93; // r12
  __int64 v94; // rsi
  _QWORD *v95; // r12
  __int64 v96; // rsi
  __int64 v97; // rax
  char *v98; // rdi
  __int64 v99; // r8
  char *v100; // rsi
  unsigned int v101; // edx
  __int64 v102; // rax
  int v103; // r10d
  __int64 v104; // r9
  __int64 v105; // r8
  char *j; // rax
  __int64 v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  unsigned __int64 v112; // rax
  __int64 v113; // r11
  __int64 v114; // [rsp+8h] [rbp-110h]
  __int64 *v115; // [rsp+8h] [rbp-110h]
  __int64 v116; // [rsp+8h] [rbp-110h]
  unsigned int v117; // [rsp+10h] [rbp-108h]
  __int64 v118; // [rsp+18h] [rbp-100h]
  int v120; // [rsp+2Ch] [rbp-ECh]
  __int64 *v121; // [rsp+30h] [rbp-E8h]
  _QWORD *v122; // [rsp+30h] [rbp-E8h]
  __int64 *v123; // [rsp+38h] [rbp-E0h]
  unsigned int v124; // [rsp+4Ch] [rbp-CCh] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v126; // [rsp+58h] [rbp-C0h]
  _QWORD v127[23]; // [rsp+60h] [rbp-B8h] BYREF

  v13 = (std::chrono::_V2::steady_clock *)*a2;
  v14 = *(_QWORD *)(sub_4095A0(*a2, (__int64)a2, a3, a4, a5, a6) + 8);
  if ( !v14 || !*(_DWORD *)(v14 - 4) )
    return;
  ++*(_DWORD *)(a1 + 40);
  if ( !*(_BYTE *)(a1 + 72) )
  {
    v109 = std::chrono::_V2::steady_clock::now(v13);
    *(_BYTE *)(a1 + 72) = 1;
    *(_QWORD *)(a1 + 56) = v109;
  }
  v19 = *a2;
  *(__m128 *)(a1 + 272) = _mm_loadh_ps((const double *)(*(_QWORD *)(*a2 + 80) + 16LL));
  *(_QWORD *)(a1 + 288) = _mm_unpacklo_epi32(
                            _mm_cvtsi32_si128(*(unsigned __int16 *)(v19 + 106)),
                            _mm_cvtsi32_si128(*(_DWORD *)(v19 + 96))).m128i_u64[0];
  v20 = sub_4095A0(v19, (__int64)a2, v15, v16, v17, v18);
  v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
  if ( !v21 )
  {
    v22 = *(__int64 **)(v20 + 8);
    if ( !v22 )
      goto LABEL_112;
    i = &v22[*((unsigned int *)v22 - 1)];
    if ( i == v22 )
      goto LABEL_112;
    v50 = *v22;
    v110 = (_QWORD *)sub_186B270(0x18u);
    v21 = (std::chrono::_V2::steady_clock *)(v110 + 1);
    *v110 = 2;
    v48 = 1;
    *(_QWORD *)(a1 + 296) = v21;
    v49 = v21;
    goto LABEL_47;
  }
  v22 = *(__int64 **)(v20 + 8);
  *((_DWORD *)v21 - 1) = 0;
  if ( !v22 )
    goto LABEL_166;
  for ( i = &v22[*((unsigned int *)v22 - 1)]; v22 != i; *((_DWORD *)v21 - 1) = v48 )
  {
    v50 = *v22;
    v51 = *((_DWORD *)v21 - 1);
    if ( v51 == *((_DWORD *)v21 - 2) )
    {
      v52 = (3 * v51 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
      {
        exception = (__m128i *)__cxa_allocate_exception(0x28u);
        v9 = (char *)operator new(0x2Bu);
        strcpy(v9, "Overflow encountered when expanding vector");
        exception->m128i_i64[1] = (__int64)v9;
        exception->m128i_i64[0] = (__int64)off_1C63128;
        exception[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
        ptr = v127;
        v126 = 0;
        v127[0] = 0;
        sub_233E40((__int64)&ptr);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v54 = (unsigned int *)sub_186B300((char *)v21 - 8, v53);
      v55 = v54[1];
      v21 = (std::chrono::_V2::steady_clock *)(v54 + 2);
      *v54 = v52;
      *(_QWORD *)(a1 + 296) = v54 + 2;
      LODWORD(v54) = v55;
      v49 = (std::chrono::_V2::steady_clock *)((char *)v21 + 8 * v55);
      v48 = (_DWORD)v54 + 1;
    }
    else
    {
      v47 = v51;
      v48 = v51 + 1;
      v49 = (std::chrono::_V2::steady_clock *)((char *)v21 + 8 * v47);
    }
LABEL_47:
    ++v22;
    *(_QWORD *)v49 = v50;
  }
  v24 = *((_DWORD *)v21 - 1);
  if ( !v24 )
  {
LABEL_166:
    if ( *(_BYTE *)(a1 + 81) )
      v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
    goto LABEL_111;
  }
  v120 = 0;
  v25 = 0;
  v118 = v24;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a1 + 80)
      || (v26 = *((_QWORD *)v21 + v25), !*(_WORD *)(v26 + 4))
      && ((v27 = *(int **)(*(_QWORD *)(v26 + 16) + 24LL)) == nullptr ? (v28 = -1) : (v28 = *v27),
          *(_DWORD *)(a1 + 104) == v28) )
    {
      v29 = *(_QWORD **)(a1 + 312);
      if ( v29 )
      {
        v30 = &v29[*((unsigned int *)v29 - 1)];
        if ( v29 >= v30 )
          goto LABEL_25;
        do
        {
          while ( 1 )
          {
            v31 = *v29;
            if ( *v29 )
            {
              v32 = *(_QWORD *)(a1 + 304);
              v33 = (*(_DWORD *)(v31 + 8))-- == 1;
              if ( v33 )
                break;
            }
            if ( ++v29 >= v30 )
              goto LABEL_24;
          }
          sub_15D7BC0(v32, v31);
          ++v29;
        }
        while ( v29 < v30 );
LABEL_24:
        v29 = *(_QWORD **)(a1 + 312);
        v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
        if ( v29 )
LABEL_25:
          *((_DWORD *)v29 - 1) = 0;
      }
      if ( v21 )
      {
        v34 = *((_DWORD *)v21 - 1);
        if ( v34 )
        {
          v35 = v34;
          v36 = 0;
          while ( 1 )
          {
            v40 = *((_QWORD *)v21 + v36);
            if ( *(_QWORD *)(a1 + 24) != v40 && (_DWORD)v25 != (_DWORD)v36 )
            {
              if ( v40 )
                ++*(_DWORD *)(v40 + 8);
              if ( v29 )
              {
                v41 = *((_DWORD *)v29 - 1);
                if ( v41 == *((_DWORD *)v29 - 2) )
                {
                  v42 = (3 * v41 + 1) >> 1;
                  v43 = 8 * v42 + 8;
                  if ( 8 * v41 + 8 >= (unsigned int)v43 || v41 >= v42 )
                  {
                    v10 = (__m128i *)__cxa_allocate_exception(0x28u);
                    ptr = v127;
                    v11 = (char *)operator new(0x2Bu);
                    strcpy(v11, "Overflow encountered when expanding vector");
                    v10->m128i_i64[1] = (__int64)v11;
                    v10->m128i_i64[0] = (__int64)off_1C63128;
                    v10[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
                    ptr = v127;
                    v126 = 0;
                    v127[0] = 0;
                    sub_233E40((__int64)&ptr);
                    __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v117 = (3 * v41 + 1) >> 1;
                  v114 = v40;
                  v44 = (unsigned int *)sub_186B300(v29 - 1, v43);
                  v45 = v44[1];
                  v29 = v44 + 2;
                  *(_QWORD *)(a1 + 312) = v44 + 2;
                  v40 = v114;
                  *v44 = v117;
                  LODWORD(v44) = v45;
                  v39 = &v29[v45];
                  v38 = (_DWORD)v44 + 1;
                }
                else
                {
                  v37 = v41;
                  v38 = v41 + 1;
                  v39 = &v29[v37];
                }
              }
              else
              {
                v116 = v40;
                v68 = (_QWORD *)sub_186B270(0x18u);
                v29 = v68 + 1;
                v40 = v116;
                *(_QWORD *)(a1 + 312) = v68 + 1;
                v39 = v68 + 1;
                *v68 = 2;
                v38 = 1;
              }
              *v39 = v40;
              *((_DWORD *)v29 - 1) = v38;
            }
            if ( v35 == ++v36 )
              break;
            v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
          }
          if ( v29 )
          {
            if ( *((_DWORD *)v29 - 1) )
            {
              v56 = sub_40A830(*(_QWORD **)(a1 + 280), *(_DWORD *)(a1 + 292), a1 + 304, &v124, *(_DWORD *)(a1 + 288));
              if ( v56 )
              {
                v57 = *(__int64 **)(a1 + 312);
                ptr = v127;
                v126 = 0x1000000000LL;
                if ( v57 && (v58 = &v57[*((unsigned int *)v57 - 1)], v57 != v58) )
                {
                  do
                  {
                    v60 = *v57;
                    v61 = *(_BYTE *)(*v57 + 6);
                    if ( (v61 & 2) == 0 )
                    {
                      *(_BYTE *)(v60 + 6) = v61 | 2;
                      v62 = v126;
                      if ( (unsigned int)v126 < HIDWORD(v126) )
                      {
                        v59 = ptr;
                      }
                      else
                      {
                        v121 = v57;
                        v63 = 2 * HIDWORD(v126);
                        v115 = v58;
                        v64 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v126)));
                        v62 = v126;
                        v65 = ptr;
                        v59 = v64;
                        v58 = v115;
                        v57 = v121;
                        if ( (_DWORD)v126 )
                        {
                          if ( (unsigned int)(v126 - 1) <= 2 || v64 == (char *)ptr + 8 )
                          {
                            v112 = 0;
                            v113 = 8LL * (unsigned int)v126;
                            do
                            {
                              v59[v112 / 8] = v65[v112 / 8];
                              v112 += 8LL;
                            }
                            while ( v113 != v112 );
                          }
                          else
                          {
                            v66 = 0;
                            v67 = 16LL * ((unsigned int)v126 >> 1);
                            do
                            {
                              *(__m128i *)&v59[v66 / 8] = _mm_loadu_si128((const __m128i *)&v65[v66 / 8]);
                              v66 += 16LL;
                            }
                            while ( v66 != v67 );
                            if ( (v62 & 1) != 0 )
                              v59[v62 & 0xFFFFFFFE] = v65[v62 & 0xFFFFFFFE];
                          }
                        }
                        if ( v65 && v65 != v127 )
                        {
                          v123 = v121;
                          v122 = v59;
                          sub_186B220(v65);
                          v62 = v126;
                          v57 = v123;
                          v59 = v122;
                          v58 = v115;
                        }
                        ptr = v59;
                        HIDWORD(v126) = v63;
                      }
                      v59[v62] = v60;
                      LODWORD(v126) = v62 + 1;
                    }
                    ++v57;
                  }
                  while ( v58 != v57 );
                  v98 = (char *)ptr;
                  v99 = *(_QWORD *)(a1 + 296);
                  v100 = (char *)ptr + 8 * (unsigned int)v126;
                  v56 = ptr == nullptr || ptr == v127;
                  if ( !v99 )
                    goto LABEL_137;
                  v101 = *(_DWORD *)(v99 - 4);
                  if ( (unsigned int)v25 >= v101 )
                    goto LABEL_137;
                }
                else
                {
                  v99 = *(_QWORD *)(a1 + 296);
                  if ( !v99
                    || (v101 = *(_DWORD *)(v99 - 4), v98 = (char *)v127, v100 = (char *)v127, (unsigned int)v25 >= v101) )
                  {
LABEL_141:
                    v108 = *(_DWORD *)(a1 + 292);
                    if ( v108 < v124 )
                      v108 = v124;
                    *(_DWORD *)(a1 + 292) = v108;
                    goto LABEL_14;
                  }
                }
                v102 = v99 + 8 * v25;
                v103 = 0;
                v104 = v99 + 8 * (v25 + v101 - 1 - (unsigned int)v25) + 8;
                do
                {
                  v105 = *(_QWORD *)(a1 + 24);
                  if ( *(_QWORD *)v102 != v105 && (*(_BYTE *)(*(_QWORD *)v102 + 6LL) & 2) == 0 )
                  {
                    *(_QWORD *)v102 = v105;
                    ++v103;
                  }
                  v102 += 8;
                }
                while ( v104 != v102 );
                v120 += v103;
LABEL_137:
                for ( j = v98; v100 != j; *(_BYTE *)(v107 + 6) &= ~2u )
                {
                  v107 = *(_QWORD *)j;
                  j += 8;
                }
                LODWORD(v126) = 0;
                if ( !v56 )
                  sub_186B220(v98);
                goto LABEL_141;
              }
            }
          }
        }
      }
    }
LABEL_14:
    if ( ++v25 == v118 )
      break;
    v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
  }
  if ( !*(_BYTE *)(a1 + 81) )
    goto LABEL_85;
  v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
  if ( !v21 )
    goto LABEL_156;
  v69 = *((_DWORD *)v21 - 1);
  if ( !v69 )
    goto LABEL_148;
  v70 = 0;
  v71 = 0;
  do
  {
    v72 = sub_43FD20(a1, v71++);
    v70 += v72;
  }
  while ( v71 != v69 );
  v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
  v120 += v70;
  if ( !v21 )
  {
LABEL_156:
    if ( v120 )
      goto LABEL_86;
    goto LABEL_112;
  }
  v73 = *((_DWORD *)v21 - 1);
  if ( v69 >= v73 )
  {
LABEL_148:
    if ( v120 )
      goto LABEL_86;
    goto LABEL_111;
  }
  v74 = 0;
  do
  {
    v75 = sub_43FD20(a1, v69++);
    v74 += v75;
  }
  while ( v73 != v69 );
  v120 += v74;
LABEL_85:
  if ( v120 )
  {
LABEL_86:
    v76 = *(_QWORD **)(a1 + 312);
    if ( v76 )
    {
      v77 = &v76[*((unsigned int *)v76 - 1)];
      if ( v76 >= v77 )
        goto LABEL_94;
      do
      {
        while ( 1 )
        {
          v78 = *v76;
          if ( *v76 )
          {
            v79 = *(_QWORD *)(a1 + 304);
            v33 = (*(_DWORD *)(v78 + 8))-- == 1;
            if ( v33 )
              break;
          }
          if ( ++v76 >= v77 )
            goto LABEL_93;
        }
        sub_15D7BC0(v79, v78);
        ++v76;
      }
      while ( v76 < v77 );
LABEL_93:
      v76 = *(_QWORD **)(a1 + 312);
      if ( v76 )
LABEL_94:
        *((_DWORD *)v76 - 1) = 0;
    }
    v80 = *(__int64 **)(a1 + 296);
    if ( v80 )
    {
      for ( k = &v80[*((unsigned int *)v80 - 1)]; k != v80; ++v80 )
      {
        v85 = *v80;
        if ( *v80 != *(_QWORD *)(a1 + 24) )
        {
          if ( v85 )
            ++*(_DWORD *)(v85 + 8);
          v86 = *(_QWORD **)(a1 + 312);
          if ( v86 )
          {
            v87 = *((_DWORD *)v86 - 1);
            if ( v87 == *((_DWORD *)v86 - 2) )
            {
              v88 = (3 * v87 + 1) >> 1;
              v89 = 8 * v88 + 8;
              if ( 8 * v87 + 8 >= (unsigned int)v89 || v87 >= v88 )
              {
                v6 = (__m128i *)__cxa_allocate_exception(0x28u);
                ptr = v127;
                v7 = (char *)operator new(0x2Bu);
                strcpy(v7, "Overflow encountered when expanding vector");
                v6->m128i_i64[1] = (__int64)v7;
                v6->m128i_i64[0] = (__int64)off_1C63128;
                v6[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
                ptr = v127;
                v126 = 0;
                v127[0] = 0;
                sub_233E40((__int64)&ptr);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v90 = (unsigned int *)sub_186B300(v86 - 1, v89);
              v91 = v90[1];
              v86 = v90 + 2;
              *v90 = v88;
              *(_QWORD *)(a1 + 312) = v90 + 2;
              LODWORD(v90) = v91;
              v84 = &v86[v91];
              v83 = (_DWORD)v90 + 1;
            }
            else
            {
              v82 = v87;
              v83 = v87 + 1;
              v84 = &v86[v82];
            }
          }
          else
          {
            v111 = (_QWORD *)sub_186B270(0x18u);
            v86 = v111 + 1;
            *v111 = 2;
            v83 = 1;
            *(_QWORD *)(a1 + 312) = v86;
            v84 = v86;
          }
          *v84 = v85;
          *((_DWORD *)v86 - 1) = v83;
        }
      }
    }
    sub_40ABA0(*a2, *a2 + 80, a1 + 304);
    sub_3FE9B0(*a2, *(_DWORD *)(a1 + 292));
  }
  v21 = *(std::chrono::_V2::steady_clock **)(a1 + 296);
  if ( v21 )
LABEL_111:
    *((_DWORD *)v21 - 1) = 0;
LABEL_112:
  v92 = *(_QWORD **)(a1 + 264);
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  if ( v92 )
  {
    v93 = &v92[*((unsigned int *)v92 - 1)];
    if ( v92 >= v93 )
      goto LABEL_120;
    do
    {
      while ( 1 )
      {
        v94 = *v92;
        if ( *v92 )
        {
          v21 = *(std::chrono::_V2::steady_clock **)(a1 + 256);
          v33 = (*(_DWORD *)(v94 + 8))-- == 1;
          if ( v33 )
            break;
        }
        if ( ++v92 >= v93 )
          goto LABEL_119;
      }
      sub_15D7BC0(v21, v94);
      ++v92;
    }
    while ( v92 < v93 );
LABEL_119:
    v92 = *(_QWORD **)(a1 + 264);
    if ( v92 )
LABEL_120:
      *((_DWORD *)v92 - 1) = 0;
  }
  v46 = *(_QWORD **)(a1 + 312);
  if ( v46 )
  {
    v95 = &v46[*((unsigned int *)v46 - 1)];
    if ( v46 >= v95 )
      goto LABEL_43;
    do
    {
      v96 = *v46;
      if ( *v46 )
      {
        v21 = *(std::chrono::_V2::steady_clock **)(a1 + 304);
        v33 = (*(_DWORD *)(v96 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v21, v96);
      }
      ++v46;
    }
    while ( v46 < v95 );
    v46 = *(_QWORD **)(a1 + 312);
    if ( v46 )
LABEL_43:
      *((_DWORD *)v46 - 1) = 0;
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v97 = std::chrono::_V2::steady_clock::now(v21);
    *(_BYTE *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 64) += v97 - *(_QWORD *)(a1 + 56);
  }
}

