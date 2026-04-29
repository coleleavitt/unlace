__int64 __fastcall sub_38CD50(__m128i *a1, __int64 *a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rax
  __int64 *v9; // r12
  int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  const char *v15; // r9
  const char *v16; // r8
  const char *v17; // rcx
  const char *v18; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __m128i *v26; // rdi
  char *v27; // rax
  unsigned __int64 v28; // r14
  char *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // r14
  char *v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rdi
  const char *v35; // rax
  const char *v36; // rbp
  size_t v37; // rax
  __int64 v38; // r15
  size_t v39; // r14
  __int64 v40; // rax
  const char *v41; // rbp
  int v42; // edx
  unsigned int v43; // ecx
  __int64 v44; // rbp
  char v45; // al
  signed int v46; // r13d
  __int64 v47; // rdi
  const char *v48; // r13
  size_t v49; // rax
  __int64 v50; // rbp
  size_t v51; // r15
  size_t v52; // r8
  __int64 v53; // rsi
  void *v54; // rdx
  char *v55; // rdi
  __int64 v56; // r15
  __int64 v57; // r14
  char *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  char *v62; // rbp
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  char *v65; // rdi
  __int64 v66; // rsi
  __m128i si128; // xmm0
  __int64 v68; // rsi
  __int64 v69; // rdx
  int v70; // ebp
  int v71; // r14d
  int v72; // r13d
  _QWORD *v73; // r15
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  char *v76; // rdx
  const void **v77; // rbp
  size_t v78; // r9
  __int64 v79; // r8
  char *v80; // r10
  __int64 v81; // rsi
  __int64 v82; // rbp
  void *v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rsi
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r15
  __int64 v90; // r8
  void *v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // r15
  __int64 v94; // r15
  __int64 v95; // r8
  void *v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // r15
  __int64 v99; // r8
  void *v100; // rdx
  __int64 v101; // rsi
  __int64 v102; // r15
  __int64 v103; // r15
  __int64 v104; // r8
  void *v105; // rdx
  __int64 v106; // rsi
  _DWORD *v107; // r15
  __int64 v108; // r13
  void *v109; // r8
  unsigned __int64 v110; // r15
  __int64 v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  void *v119; // rdi
  void *src[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v121; // [rsp+10h] [rbp-D8h]
  __int64 v122; // [rsp+18h] [rbp-D0h]
  size_t v123; // [rsp+20h] [rbp-C8h]
  __int64 v124; // [rsp+28h] [rbp-C0h]
  int v125; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v126; // [rsp+38h] [rbp-B0h] BYREF
  char *v127; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v128; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v129; // [rsp+58h] [rbp-90h]
  __int64 v130; // [rsp+60h] [rbp-88h] BYREF
  __int64 v131; // [rsp+68h] [rbp-80h] BYREF
  __int128 v132; // [rsp+70h] [rbp-78h]
  __int64 v133; // [rsp+80h] [rbp-68h]
  __int128 v134; // [rsp+88h] [rbp-60h]
  char v135; // [rsp+98h] [rbp-50h]
  unsigned __int64 v136; // [rsp+A8h] [rbp-40h]

  v8 = a1->m128i_i64[1];
  v136 = __readfsqword(0x28u);
  v9 = a2;
  v10 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 == 1 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    v21 = *(_DWORD *)(v11 + 8);
    if ( v21 > 69 )
      goto LABEL_43;
    if ( (*(_BYTE *)(v11 + 56) & 0x40) != 0 )
    {
      v66 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] <= 0x1CuLL )
      {
        v87 = qvector_reserve(&a1[1].m128i_u64[1], v66, 29, 1);
        a1[1].m128i_i64[1] = v87;
        v66 = v87;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_407460);
      a1[2].m128i_i64[0] = 29;
      *(__m128i *)v66 = si128;
      a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_407470);
      *(__m128 *)(v66 + 12) = a3;
      *(_BYTE *)(a1[1].m128i_i64[1] + 28) = 0;
      v11 = *(_QWORD *)(a1->m128i_i64[1] + 8);
    }
    a2 = (__int64 *)v11;
    v22 = *(_QWORD *)(a1->m128i_i64[0] + 32);
    v23 = sub_2524F0(v22 + 16, v11);
    v24 = v23;
    if ( v23 )
    {
      if ( *(_DWORD *)(v23 + 8) == 57 && *(_QWORD *)(v23 + 24) != v11 )
      {
        a2 = (__int64 *)v11;
        v25 = sub_27FAE0(v23, v11, &v125);
        if ( v25 )
        {
          if ( !*(_BYTE *)(v25 + 60) )
          {
            v126 = 0;
            sub_381860(*(_QWORD *)(v22 + 216), *(_QWORD *)(v24 + 24), &v126);
            a3.m128_u64[0] = 0;
            a2 = (_QWORD *)(byte_9 + 3);
            v128 = 0;
            v127 = nullptr;
            v129 = 0;
            v130 = 0;
            v131 = 0;
            v133 = 0;
            v135 = 16;
            v132 = 0;
            v134 = 0;
            if ( (unsigned __int8)get_tinfo_details(v126, 12, &v127) && (unsigned __int64)v125 < v128.m128i_i64[0] )
            {
              v26 = a1 + 3;
              v27 = &v127[80 * v125];
              if ( &a1[3] != (__m128i *)(v27 + 16) )
              {
                v28 = *((_QWORD *)v27 + 3);
                if ( v28 > 1 )
                {
                  src[0] = *((void **)v27 + 2);
                  if ( a1[4].m128i_i64[0] < v28 )
                    a1[3].m128i_i64[0] = qvector_reserve(v26, a1[3].m128i_i64[0], v28, 1);
                  v119 = (void *)a1[3].m128i_i64[0];
                  a2 = (__int64 *)src[0];
                  a1[3].m128i_i64[1] = v28;
                  memmove(v119, a2, v28 - 1);
                  *(_BYTE *)(a1[3].m128i_i64[0] + v28 - 1) = 0;
                }
                else
                {
                  a1[3].m128i_i64[1] = 0;
                }
              }
              if ( v133 )
              {
                *(_QWORD *)&v134 = 0;
                qfree(v133);
              }
              cleanup_argloc(&v131);
              clear_tinfo_t(&v130);
              v29 = v127;
              if ( v127 )
              {
                v30 = v128.m128i_i64[0];
                v31 = 0;
                if ( v128.m128i_i64[0] )
                {
                  do
                  {
                    v32 = &v29[80 * v31];
                    clear_tinfo_t(v32 + 64);
                    v33 = *((_QWORD *)v32 + 5);
                    if ( v33 )
                    {
                      *((_QWORD *)v32 + 6) = 0;
                      qfree(v33);
                    }
                    v34 = *((_QWORD *)v32 + 2);
                    if ( v34 )
                    {
                      *((_QWORD *)v32 + 3) = 0;
                      qfree(v34);
                    }
                    ++v31;
                    cleanup_argloc(v32);
                    v29 = v127;
                  }
                  while ( v30 != v31 );
                }
                v128.m128i_i64[0] = 0;
                qfree(v29);
              }
              clear_tinfo_t(&v126);
              v8 = a1->m128i_i64[1];
              v10 = *(_DWORD *)v8;
              goto LABEL_84;
            }
            if ( v133 )
            {
              *(_QWORD *)&v134 = 0;
              qfree(v133);
            }
            cleanup_argloc(&v131);
            clear_tinfo_t(&v130);
            v55 = v127;
            if ( v127 )
            {
              v56 = v128.m128i_i64[0];
              v57 = 0;
              if ( v128.m128i_i64[0] )
              {
                do
                {
                  v58 = &v55[80 * v57];
                  clear_tinfo_t(v58 + 64);
                  v59 = *((_QWORD *)v58 + 5);
                  if ( v59 )
                  {
                    *((_QWORD *)v58 + 6) = 0;
                    qfree(v59);
                  }
                  v60 = *((_QWORD *)v58 + 2);
                  if ( v60 )
                  {
                    *((_QWORD *)v58 + 3) = 0;
                    qfree(v60);
                  }
                  ++v57;
                  cleanup_argloc(v58);
                  v55 = v127;
                }
                while ( v56 != v57 );
              }
              v128.m128i_i64[0] = 0;
              qfree(v55);
            }
            clear_tinfo_t(&v126);
          }
        }
      }
    }
    v8 = a1->m128i_i64[1];
    v10 = *(_DWORD *)v8;
LABEL_84:
    if ( v10 != 1 )
      goto LABEL_2;
    v11 = *(_QWORD *)(v8 + 8);
    v21 = *(_DWORD *)(v11 + 8);
    if ( v21 == 65 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 432LL) + 104LL * *(int *)(v11 + 32);
      if ( v11 )
      {
LABEL_4:
        v12 = v11 + 80;
        if ( !(unsigned __int8)sub_382A70((__int64)&a1[4].m128i_i64[1], 0, v11 + 80) )
        {
          sub_25BC20((__int64 *)&v127, *(_QWORD **)(a1->m128i_i64[0] + 24), v11, 0);
          v61 = a1[4].m128i_i64[1];
          v62 = v127;
          v127 = nullptr;
          v63 = _mm_loadu_si128(&v128);
          v128 = 0;
          if ( v61 )
          {
            a1[5].m128i_i64[0] = 0;
            *(__m128i *)src = v63;
            qfree(v61);
            v64 = _mm_load_si128((const __m128i *)src);
            v65 = v127;
            a1[4].m128i_i64[1] = (__int64)v62;
            a1[5] = v64;
            if ( v65 )
            {
              v128.m128i_i64[0] = 0;
              qfree(v65);
            }
          }
          else
          {
            a1[4].m128i_i64[1] = (__int64)v62;
            a1[5] = v63;
          }
          v127 = nullptr;
          copy_tinfo_t(&v127, v12);
          sub_388E50((__int64)a1, (__int64 *)&v127);
          clear_tinfo_t(&v127);
        }
        goto LABEL_5;
      }
LABEL_87:
      sub_3893E0(a1->m128i_i64);
      goto LABEL_5;
    }
    if ( v21 <= 69 )
      goto LABEL_87;
LABEL_43:
    v20 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) != 4 || (*(_BYTE *)(v20 + 123) & 0x40) == 0 )
    {
      if ( v21 == 81 )
      {
        v68 = **(unsigned int **)(v11 + 24);
        v70 = sub_386CF0(*(_QWORD *)(v20 + 32), v68);
        if ( v70 != -1 )
        {
          v71 = 5;
          v72 = v70 + 5;
          v73 = (_QWORD *)sub_253960(*(_QWORD *)(a1->m128i_i64[0] + 32), v68, v69);
          while ( 1 )
          {
            v74 = v72 - v71;
            if ( v74 >= v73[1] )
              break;
            v75 = *v73 + 32 * v74;
            v76 = *(char **)(v75 + 8);
            v77 = (const void **)v75;
            if ( v76 )
            {
              v78 = (size_t)(v76 - 1);
              if ( v76 != &byte_1 )
              {
                v79 = a1[5].m128i_i64[0];
                v80 = v76 - 1;
                if ( v79 )
                {
                  --v79;
                  v80 = (char *)(v78 + v79);
                  v76 += v79;
                }
                v81 = a1[4].m128i_i64[1];
                if ( a1[5].m128i_i64[1] < (unsigned __int64)v76 )
                {
                  v124 = v79;
                  v123 = v78;
                  v122 = (__int64)v80;
                  src[0] = v76;
                  v112 = qvector_reserve(&a1[4].m128i_u64[1], v81, v76, 1);
                  v79 = v124;
                  v78 = v123;
                  v80 = (char *)v122;
                  v76 = (char *)src[0];
                  a1[4].m128i_i64[1] = v112;
                  v81 = v112;
                }
                a1[5].m128i_i64[0] = (__int64)v76;
                v80[v81] = 0;
                memcpy((void *)(v79 + a1[4].m128i_i64[1]), *v77, v78);
              }
            }
            v82 = a1[5].m128i_i64[0];
            if ( v82 )
            {
              v83 = (void *)(v82 + 1);
              v84 = a1[5].m128i_i64[0];
              --v82;
            }
            else
            {
              v84 = 1;
              v83 = &word_2;
            }
            v85 = a1[4].m128i_i64[1];
            if ( a1[5].m128i_i64[1] < (unsigned __int64)v83 )
            {
              v122 = v84;
              src[0] = v83;
              v88 = qvector_reserve(&a1[4].m128i_u64[1], v85, v83, 1);
              v84 = v122;
              v83 = src[0];
              a1[4].m128i_i64[1] = v88;
              v85 = v88;
            }
            a1[5].m128i_i64[0] = (__int64)v83;
            *(_BYTE *)(v85 + v82) = 10;
            *(_BYTE *)(a1[4].m128i_i64[1] + v84) = 0;
            if ( !--v71 )
            {
              v86 = 5;
              goto LABEL_116;
            }
          }
          v86 = 5 - v71;
LABEL_116:
          a1[1].m128i_i32[0] = v86;
LABEL_5:
          v13 = a1[5].m128i_i64[0];
          v14 = a1[3].m128i_u64[1];
          if ( v13 )
            goto LABEL_6;
LABEL_16:
          v15 = s1;
LABEL_17:
          v16 = (const char *)&unk_3FC793;
          v17 = s1;
          if ( !v14 )
            goto LABEL_10;
          goto LABEL_9;
        }
      }
      return 0;
    }
LABEL_48:
    if ( *(_DWORD *)(v11 + 8) != 77 )
    {
      if ( !under_debugger )
        sub_37E160(0xCAADu, (__int64)a2, *(double *)a3.m128_u64);
      BUG();
    }
    v35 = (const char *)callui(70, *(_QWORD *)(v20 + 8), 1, &callui, a6, a7, src[0], src[1], v121, v122);
    v127 = nullptr;
    v36 = v35;
    v128 = 0;
    if ( !v35 )
      goto LABEL_99;
    v37 = strlen(v35);
    v38 = v37 + 1;
    v39 = v37;
    v127 = (char *)qvector_reserve(&v127, 0, v37 + 1, 1);
    v128.m128i_i64[0] = v38;
    memmove(v127, v36, v39);
    v127[v39] = 0;
    v40 = v128.m128i_i64[0];
    if ( v128.m128i_i64[0] > 1uLL )
    {
      tag_remove(&v127, v127, 0);
      v40 = v128.m128i_i64[0];
    }
    v41 = v127;
    if ( !v40 )
LABEL_99:
      v41 = s1;
    if ( skip_spaces(v41) - (__int64)v41 + 4 < (unsigned __int64)*(int *)(a1->m128i_i64[0] + 48) )
    {
      v42 = *(_DWORD *)(a1->m128i_i64[0] + 120);
      v43 = v42 & 0xBFFFFFFF;
      v44 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 8) + 24LL);
      if ( (v42 & 0x20000000) != 0 )
        v43 = (2 * v42) >> 1;
      v45 = *(_BYTE *)(v44 + 77);
      v46 = v43;
      if ( (v45 & 1) != 0 )
      {
        v103 = a1[5].m128i_i64[0];
        if ( v103 )
        {
          v104 = v103 + 6;
          v105 = (void *)(v103 + 7);
          --v103;
        }
        else
        {
          v105 = &byte_8;
          v104 = 7;
        }
        v106 = a1[4].m128i_i64[1];
        if ( a1[5].m128i_i64[1] < (unsigned __int64)v105 )
        {
          v122 = v104;
          src[0] = v105;
          v114 = qvector_reserve(&a1[4].m128i_u64[1], v106, v105, 1);
          v104 = v122;
          v105 = src[0];
          a1[4].m128i_i64[1] = v114;
          v106 = v114;
        }
        a1[5].m128i_i64[0] = (__int64)v105;
        *(_BYTE *)(v106 + v104) = 0;
        v107 = (_DWORD *)(a1[4].m128i_i64[1] + v103);
        *v107 = 1702390118;
        *(_DWORD *)((char *)v107 + 3) = 540763237;
        v45 = *(_BYTE *)(v44 + 77);
      }
      if ( (v45 & 8) != 0 )
      {
        v98 = a1[5].m128i_i64[0];
        if ( v98 )
        {
          v99 = v98 + 8;
          v100 = (void *)(v98 + 9);
          --v98;
        }
        else
        {
          v100 = byte_9 + 1;
          v99 = 9;
        }
        v101 = a1[4].m128i_i64[1];
        if ( a1[5].m128i_i64[1] < (unsigned __int64)v100 )
        {
          v122 = v99;
          src[0] = v100;
          v117 = qvector_reserve(&a1[4].m128i_u64[1], v101, v100, 1);
          v99 = v122;
          v100 = src[0];
          a1[4].m128i_i64[1] = v117;
          v101 = v117;
        }
        a1[5].m128i_i64[0] = (__int64)v100;
        *(_BYTE *)(v101 + v99) = 0;
        v102 = a1[4].m128i_i64[1] + v98;
        *(_QWORD *)v102 = 0x3B6465746167656ELL;
        *(_BYTE *)(v102 + 8) = 32;
        v45 = *(_BYTE *)(v44 + 77);
      }
      if ( (v45 & 0x10) != 0 )
      {
        v94 = a1[5].m128i_i64[0];
        if ( v94 )
        {
          v95 = v94 + 7;
          v96 = (void *)(v94 + 8);
          --v94;
        }
        else
        {
          v96 = byte_9;
          v95 = 8;
        }
        v97 = a1[4].m128i_i64[1];
        if ( a1[5].m128i_i64[1] < (unsigned __int64)v96 )
        {
          v122 = v95;
          src[0] = v96;
          v113 = qvector_reserve(&a1[4].m128i_u64[1], v97, v96, 1);
          v95 = v122;
          v96 = src[0];
          a1[4].m128i_i64[1] = v113;
          v97 = v113;
        }
        a1[5].m128i_i64[0] = (__int64)v96;
        *(_BYTE *)(v97 + v95) = 0;
        *(_QWORD *)(a1[4].m128i_i64[1] + v94) = 0x203B746F6E746962LL;
      }
      v47 = *(_QWORD *)(v44 + 104);
      if ( (v47 & 0x20000) != 0 )
      {
        v89 = a1[5].m128i_i64[0];
        if ( v89 )
        {
          v90 = v89 + 8;
          v91 = (void *)(v89 + 9);
          --v89;
        }
        else
        {
          v91 = byte_9 + 1;
          v90 = 9;
        }
        v92 = a1[4].m128i_i64[1];
        if ( a1[5].m128i_i64[1] < (unsigned __int64)v91 )
        {
          v122 = v90;
          src[0] = v91;
          v115 = qvector_reserve(&a1[4].m128i_u64[1], v92, v91, 1);
          v90 = v122;
          v91 = src[0];
          a1[4].m128i_i64[1] = v115;
          v92 = v115;
        }
        a1[5].m128i_i64[0] = (__int64)v91;
        *(_BYTE *)(v92 + v90) = 0;
        v93 = a1[4].m128i_i64[1] + v89;
        *(_QWORD *)v93 = 0x3B6E676973766E69LL;
        *(_BYTE *)(v93 + 8) = 32;
        v47 = *(_QWORD *)(v44 + 104);
      }
      if ( (unsigned __int8)is_enum(v47, (unsigned int)*(char *)(v44 + 76)) )
      {
        sub_380F90(&a1[4].m128i_i64[1], v46, 0, *(char *)(v44 + 79), 1u);
        v108 = a1[5].m128i_i64[0];
        if ( v108 )
        {
          v109 = (void *)(v108 + 1);
          v110 = v108 + 2;
          --v108;
        }
        else
        {
          v110 = 3;
          v109 = &word_2;
        }
        v111 = a1[4].m128i_i64[1];
        if ( a1[5].m128i_i64[1] < v110 )
        {
          src[0] = v109;
          v116 = qvector_reserve(&a1[4].m128i_u64[1], v111, v110, 1);
          a1[4].m128i_i64[1] = v116;
          v109 = src[0];
          v111 = v116;
        }
        a1[5].m128i_i64[0] = v110;
        *((_BYTE *)v109 + v111) = 0;
        *(_WORD *)(a1[4].m128i_i64[1] + v108) = 8251;
      }
      if ( (unsigned __int8)is_enum(*(_QWORD *)(v44 + 104), (unsigned int)*(char *)(v44 + 76)) )
      {
        v48 = s1;
        if ( *(_QWORD *)(v44 + 88) )
          v48 = *(const char **)(v44 + 80);
        if ( v48 )
        {
          v49 = strlen(v48);
          v50 = a1[5].m128i_i64[0];
          v51 = v49;
          v52 = v49;
          if ( v50 )
          {
            --v50;
            v52 = v49 + v50;
          }
          v53 = a1[4].m128i_i64[1];
          v54 = (void *)(v52 + 1);
          if ( a1[5].m128i_i64[1] < v52 + 1 )
          {
            v122 = v52;
            src[0] = (void *)(v52 + 1);
            v118 = qvector_reserve(&a1[4].m128i_u64[1], v53, v54, 1);
            v52 = v122;
            v54 = src[0];
            a1[4].m128i_i64[1] = v118;
            v53 = v118;
          }
          a1[5].m128i_i64[0] = (__int64)v54;
          *(_BYTE *)(v53 + v52) = 0;
          memmove((void *)(v50 + a1[4].m128i_i64[1]), v48, v51);
        }
      }
    }
    if ( v127 )
    {
      v128.m128i_i64[0] = 0;
      qfree(v127);
    }
    goto LABEL_5;
  }
LABEL_2:
  if ( v10 == 2 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    if ( v11 )
      goto LABEL_4;
    v20 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 )
    {
      if ( (*(_BYTE *)(v20 + 123) & 0x40) == 0 )
        return 0;
      goto LABEL_48;
    }
    return 0;
  }
  v20 = a1->m128i_i64[0];
  if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v20 + 123) & 0x40) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    goto LABEL_48;
  }
  if ( v10 != 3 )
    return 0;
  v126 = 0;
  sub_3718A0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL), &v126);
  v127 = nullptr;
  copy_tinfo_t(&v127, &v126);
  sub_388E50((__int64)a1, (__int64 *)&v127);
  clear_tinfo_t(&v127);
  clear_tinfo_t(&v126);
  v13 = a1[5].m128i_i64[0];
  v14 = a1[3].m128i_u64[1];
  if ( !v13 )
    goto LABEL_16;
LABEL_6:
  v15 = (const char *)a1[4].m128i_i64[1];
  if ( v14 <= 1 )
    goto LABEL_17;
  v16 = (const char *)&unk_3FC793;
  if ( v13 != 1 )
    v16 = ": ";
LABEL_9:
  v17 = (const char *)a1[3].m128i_i64[0];
LABEL_10:
  v18 = s1;
  if ( a1[2].m128i_i64[0] )
    v18 = (const char *)a1[1].m128i_i64[1];
  sub_67670(v9, (__int64)"%s%s%s%s", v18, v17, v16, v15);
  ++a1[1].m128i_i32[0];
  return 1;
}
