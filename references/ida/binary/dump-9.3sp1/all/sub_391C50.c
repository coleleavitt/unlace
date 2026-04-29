__int64 __fastcall sub_391C50(__m128i *a1, __int64 *a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rax
  int v10; // edx
  __int64 v11; // rbp
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 m128i_i64; // rdi
  char *v20; // rax
  unsigned __int64 v21; // r14
  char *v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r14
  char *v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  const char *v28; // rax
  const char *v29; // rbp
  size_t v30; // rax
  __int64 v31; // r15
  size_t v32; // r14
  __int64 v33; // rax
  const char *v34; // rbp
  __int64 v35; // rbp
  char v36; // al
  const char *v37; // r13
  size_t v38; // rax
  __int64 v39; // rbp
  size_t v40; // r15
  size_t v41; // r8
  __int64 v42; // rsi
  void *v43; // rdx
  char *v44; // rdi
  __int64 v45; // r15
  __int64 v46; // r14
  char *v47; // r13
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  char *v51; // rbp
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __int64 v54; // rdi
  __int64 v55; // rsi
  __m128i si128; // xmm0
  __int64 v57; // rsi
  __int64 v58; // rdx
  int v59; // ebp
  int v60; // r14d
  int v61; // r13d
  _QWORD *v62; // r15
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // rdx
  const void **v66; // rbp
  size_t v67; // r9
  __int64 v68; // r8
  char *v69; // r10
  __int64 v70; // rsi
  __int64 v71; // rbp
  void *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rsi
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // r8
  void *v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // r15
  __int64 v83; // r15
  __int64 v84; // r8
  void *v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // r15
  __int64 v88; // r8
  void *v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // r15
  __int64 v92; // r15
  __int64 v93; // r8
  void *v94; // rdx
  __int64 v95; // rsi
  _DWORD *v96; // r15
  __int64 v97; // r13
  void *v98; // r8
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  void *v108; // rdi
  const void *v109; // rsi
  void *src[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v111; // [rsp+10h] [rbp-D8h]
  __int64 v112; // [rsp+18h] [rbp-D0h]
  size_t v113; // [rsp+20h] [rbp-C8h]
  __int64 v114; // [rsp+28h] [rbp-C0h]
  int v115; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v116; // [rsp+38h] [rbp-B0h] BYREF
  char *v117; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v118; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v119; // [rsp+58h] [rbp-90h]
  __int64 v120; // [rsp+60h] [rbp-88h]
  __int64 v121; // [rsp+68h] [rbp-80h]
  __int128 v122; // [rsp+70h] [rbp-78h]
  __int64 v123; // [rsp+80h] [rbp-68h]
  __int128 v124; // [rsp+88h] [rbp-60h]
  char v125; // [rsp+98h] [rbp-50h]
  unsigned __int64 v126; // [rsp+A8h] [rbp-40h]

  v8 = a1->m128i_i64[1];
  v126 = __readfsqword(0x28u);
  v10 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 == 1 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    v14 = *(_DWORD *)(v11 + 8);
    if ( v14 > 69 )
      goto LABEL_33;
    if ( (*(_BYTE *)(v11 + 56) & 0x40) != 0 )
    {
      v55 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] <= 0x1CuLL )
      {
        v76 = qvector_reserve((__int64)&a1[1].m128i_i64[1], v55, 29, 1);
        a1[1].m128i_i64[1] = v76;
        v55 = v76;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_424A20);
      a1[2].m128i_i64[0] = 29;
      *(__m128i *)v55 = si128;
      a3 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424A30);
      *(__m128 *)(v55 + 12) = a3;
      *(_BYTE *)(a1[1].m128i_i64[1] + 28) = 0;
      v11 = *(_QWORD *)(a1->m128i_i64[1] + 8);
    }
    v15 = *(_QWORD *)(a1->m128i_i64[0] + 32);
    v16 = sub_256D70(v15 + 16, v11);
    v17 = v16;
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 8) == 57 && *(_QWORD *)(v16 + 24) != v11 )
      {
        v18 = sub_284360(v16, v11, &v115);
        if ( v18 )
        {
          if ( !*(_BYTE *)(v18 + 60) )
          {
            v116 = 0;
            sub_386760(*(_QWORD *)(v15 + 216), *(_QWORD *)(v17 + 24), &v116);
            a3.m128_u64[0] = 0;
            v118 = 0;
            v117 = nullptr;
            v119 = 0;
            v120 = 0;
            v121 = 0;
            v123 = 0;
            v125 = 16;
            v122 = 0;
            v124 = 0;
            if ( (unsigned __int8)get_tinfo_details() && (unsigned __int64)v115 < v118.m128i_i64[0] )
            {
              m128i_i64 = (__int64)a1[3].m128i_i64;
              v20 = &v117[80 * v115];
              if ( &a1[3] != (__m128i *)(v20 + 16) )
              {
                v21 = *((_QWORD *)v20 + 3);
                if ( v21 > 1 )
                {
                  src[0] = *((void **)v20 + 2);
                  if ( a1[4].m128i_i64[0] < v21 )
                    a1[3].m128i_i64[0] = qvector_reserve(m128i_i64, a1[3].m128i_i64[0], v21, 1);
                  v108 = (void *)a1[3].m128i_i64[0];
                  v109 = src[0];
                  a1[3].m128i_i64[1] = v21;
                  memmove(v108, v109, v21 - 1);
                  *(_BYTE *)(a1[3].m128i_i64[0] + v21 - 1) = 0;
                }
                else
                {
                  a1[3].m128i_i64[1] = 0;
                }
              }
              if ( v123 )
              {
                *(_QWORD *)&v124 = 0;
                qfree(v123);
              }
              cleanup_argloc();
              clear_tinfo_t();
              v22 = v117;
              if ( v117 )
              {
                v23 = v118.m128i_i64[0];
                v24 = 0;
                if ( v118.m128i_i64[0] )
                {
                  do
                  {
                    v25 = &v22[80 * v24];
                    clear_tinfo_t();
                    v26 = *((_QWORD *)v25 + 5);
                    if ( v26 )
                    {
                      *((_QWORD *)v25 + 6) = 0;
                      qfree(v26);
                    }
                    v27 = *((_QWORD *)v25 + 2);
                    if ( v27 )
                    {
                      *((_QWORD *)v25 + 3) = 0;
                      qfree(v27);
                    }
                    ++v24;
                    cleanup_argloc();
                    v22 = v117;
                  }
                  while ( v23 != v24 );
                }
                v118.m128i_i64[0] = 0;
                qfree((__int64)v22);
              }
              clear_tinfo_t();
              v8 = a1->m128i_i64[1];
              v10 = *(_DWORD *)v8;
              goto LABEL_72;
            }
            if ( v123 )
            {
              *(_QWORD *)&v124 = 0;
              qfree(v123);
            }
            cleanup_argloc();
            clear_tinfo_t();
            v44 = v117;
            if ( v117 )
            {
              v45 = v118.m128i_i64[0];
              v46 = 0;
              if ( v118.m128i_i64[0] )
              {
                do
                {
                  v47 = &v44[80 * v46];
                  clear_tinfo_t();
                  v48 = *((_QWORD *)v47 + 5);
                  if ( v48 )
                  {
                    *((_QWORD *)v47 + 6) = 0;
                    qfree(v48);
                  }
                  v49 = *((_QWORD *)v47 + 2);
                  if ( v49 )
                  {
                    *((_QWORD *)v47 + 3) = 0;
                    qfree(v49);
                  }
                  ++v46;
                  cleanup_argloc();
                  v44 = v117;
                }
                while ( v45 != v46 );
              }
              v118.m128i_i64[0] = 0;
              qfree((__int64)v44);
            }
            clear_tinfo_t();
          }
        }
      }
    }
    v8 = a1->m128i_i64[1];
    v10 = *(_DWORD *)v8;
LABEL_72:
    if ( v10 != 1 )
      goto LABEL_2;
    v11 = *(_QWORD *)(v8 + 8);
    v14 = *(_DWORD *)(v11 + 8);
    if ( v14 == 65 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 432LL) + 104LL * *(int *)(v11 + 32);
      if ( v11 )
      {
LABEL_4:
        if ( !(unsigned __int8)sub_387970((__int64)&a1[4].m128i_i64[1], 0) )
        {
          sub_2604A0((__int64)&v117, *(_QWORD **)(a1->m128i_i64[0] + 24), v11, 0);
          v50 = a1[4].m128i_i64[1];
          v51 = v117;
          v117 = nullptr;
          v52 = _mm_loadu_si128(&v118);
          v118 = 0;
          if ( v50 )
          {
            a1[5].m128i_i64[0] = 0;
            *(__m128i *)src = v52;
            qfree(v50);
            v53 = _mm_load_si128((const __m128i *)src);
            v54 = (__int64)v117;
            a1[4].m128i_i64[1] = (__int64)v51;
            a1[5] = v53;
            if ( v54 )
            {
              v118.m128i_i64[0] = 0;
              qfree(v54);
            }
          }
          else
          {
            a1[4].m128i_i64[1] = (__int64)v51;
            a1[5] = v52;
          }
          v117 = nullptr;
          copy_tinfo_t();
          sub_38DD50();
          clear_tinfo_t();
        }
        goto LABEL_5;
      }
      goto LABEL_75;
    }
    if ( v14 <= 69 )
    {
LABEL_75:
      sub_38E2E0(a1->m128i_i64);
      goto LABEL_5;
    }
LABEL_33:
    v13 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v13 + 123) & 0x40) != 0 )
      goto LABEL_38;
    if ( v14 == 81 )
    {
      v57 = **(unsigned int **)(v11 + 24);
      v59 = sub_38BBF0(*(_QWORD *)(v13 + 32), v57);
      if ( v59 != -1 )
      {
        v60 = 5;
        v61 = v59 + 5;
        v62 = (_QWORD *)sub_2581E0(*(_QWORD *)(a1->m128i_i64[0] + 32), v57, v58);
        while ( 1 )
        {
          v63 = v61 - v60;
          if ( v63 >= v62[1] )
            break;
          v64 = *v62 + 32 * v63;
          v65 = *(char **)(v64 + 8);
          v66 = (const void **)v64;
          if ( v65 )
          {
            v67 = (size_t)(v65 - 1);
            if ( v65 != &byte_1 )
            {
              v68 = a1[5].m128i_i64[0];
              v69 = v65 - 1;
              if ( v68 )
              {
                --v68;
                v69 = (char *)(v67 + v68);
                v65 += v68;
              }
              v70 = a1[4].m128i_i64[1];
              if ( a1[5].m128i_i64[1] < (unsigned __int64)v65 )
              {
                v114 = v68;
                v113 = v67;
                v112 = (__int64)v69;
                src[0] = v65;
                v101 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v70, (__int64)v65, 1);
                v68 = v114;
                v67 = v113;
                v69 = (char *)v112;
                v65 = (char *)src[0];
                a1[4].m128i_i64[1] = v101;
                v70 = v101;
              }
              a1[5].m128i_i64[0] = (__int64)v65;
              v69[v70] = 0;
              memcpy((void *)(v68 + a1[4].m128i_i64[1]), *v66, v67);
            }
          }
          v71 = a1[5].m128i_i64[0];
          if ( v71 )
          {
            v72 = (void *)(v71 + 1);
            v73 = a1[5].m128i_i64[0];
            --v71;
          }
          else
          {
            v73 = 1;
            v72 = &word_2;
          }
          v74 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v72 )
          {
            v112 = v73;
            src[0] = v72;
            v77 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v74, (__int64)v72, 1);
            v73 = v112;
            v72 = src[0];
            a1[4].m128i_i64[1] = v77;
            v74 = v77;
          }
          a1[5].m128i_i64[0] = (__int64)v72;
          *(_BYTE *)(v74 + v71) = 10;
          *(_BYTE *)(a1[4].m128i_i64[1] + v73) = 0;
          if ( !--v60 )
          {
            v75 = 5;
            goto LABEL_104;
          }
        }
        v75 = 5 - v60;
LABEL_104:
        a1[1].m128i_i32[0] = v75;
        goto LABEL_5;
      }
    }
    return 0;
  }
LABEL_2:
  if ( v10 != 2 )
  {
    v13 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 104) == 4 && (*(_BYTE *)(v13 + 123) & 0x40) != 0 )
    {
      v11 = *(_QWORD *)(v8 + 8);
LABEL_38:
      if ( *(_DWORD *)(v11 + 8) != 77 )
      {
        if ( !under_debugger )
          sub_383060(0xCAADu, *(double *)a3.m128_u64);
        BUG();
      }
      v28 = (const char *)callui(70, *(_QWORD *)(v13 + 8), 1, &callui, a6, a7, src[0], src[1], v111, v112);
      v117 = nullptr;
      v29 = v28;
      v118 = 0;
      if ( !v28 )
        goto LABEL_87;
      v30 = strlen(v28);
      v31 = v30 + 1;
      v32 = v30;
      v117 = (char *)qvector_reserve((__int64)&v117, 0, v30 + 1, 1);
      v118.m128i_i64[0] = v31;
      memmove(v117, v29, v32);
      v117[v32] = 0;
      v33 = v118.m128i_i64[0];
      if ( v118.m128i_i64[0] > 1uLL )
      {
        tag_remove();
        v33 = v118.m128i_i64[0];
      }
      v34 = v117;
      if ( !v33 )
LABEL_87:
        v34 = s1;
      if ( skip_spaces() - (__int64)v34 + 4 < (unsigned __int64)*(int *)(a1->m128i_i64[0] + 48) )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 8) + 24LL);
        v36 = *(_BYTE *)(v35 + 77);
        if ( (v36 & 1) != 0 )
        {
          v92 = a1[5].m128i_i64[0];
          if ( v92 )
          {
            v93 = v92 + 6;
            v94 = (void *)(v92 + 7);
            --v92;
          }
          else
          {
            v94 = &byte_8;
            v93 = 7;
          }
          v95 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v94 )
          {
            v112 = v93;
            src[0] = v94;
            v103 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v95, (__int64)v94, 1);
            v93 = v112;
            v94 = src[0];
            a1[4].m128i_i64[1] = v103;
            v95 = v103;
          }
          a1[5].m128i_i64[0] = (__int64)v94;
          *(_BYTE *)(v95 + v93) = 0;
          v96 = (_DWORD *)(a1[4].m128i_i64[1] + v92);
          *v96 = 1702390118;
          *(_DWORD *)((char *)v96 + 3) = 540763237;
          v36 = *(_BYTE *)(v35 + 77);
        }
        if ( (v36 & 8) != 0 )
        {
          v87 = a1[5].m128i_i64[0];
          if ( v87 )
          {
            v88 = v87 + 8;
            v89 = (void *)(v87 + 9);
            --v87;
          }
          else
          {
            v89 = byte_9 + 1;
            v88 = 9;
          }
          v90 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v89 )
          {
            v112 = v88;
            src[0] = v89;
            v106 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v90, (__int64)v89, 1);
            v88 = v112;
            v89 = src[0];
            a1[4].m128i_i64[1] = v106;
            v90 = v106;
          }
          a1[5].m128i_i64[0] = (__int64)v89;
          *(_BYTE *)(v90 + v88) = 0;
          v91 = a1[4].m128i_i64[1] + v87;
          *(_QWORD *)v91 = 0x3B6465746167656ELL;
          *(_BYTE *)(v91 + 8) = 32;
          v36 = *(_BYTE *)(v35 + 77);
        }
        if ( (v36 & 0x10) != 0 )
        {
          v83 = a1[5].m128i_i64[0];
          if ( v83 )
          {
            v84 = v83 + 7;
            v85 = (void *)(v83 + 8);
            --v83;
          }
          else
          {
            v85 = byte_9;
            v84 = 8;
          }
          v86 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v85 )
          {
            v112 = v84;
            src[0] = v85;
            v102 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v86, (__int64)v85, 1);
            v84 = v112;
            v85 = src[0];
            a1[4].m128i_i64[1] = v102;
            v86 = v102;
          }
          a1[5].m128i_i64[0] = (__int64)v85;
          *(_BYTE *)(v86 + v84) = 0;
          *(_QWORD *)(a1[4].m128i_i64[1] + v83) = 0x203B746F6E746962LL;
        }
        if ( (*(_QWORD *)(v35 + 104) & 0x20000) != 0 )
        {
          v78 = a1[5].m128i_i64[0];
          if ( v78 )
          {
            v79 = v78 + 8;
            v80 = (void *)(v78 + 9);
            --v78;
          }
          else
          {
            v80 = byte_9 + 1;
            v79 = 9;
          }
          v81 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < (unsigned __int64)v80 )
          {
            v112 = v79;
            src[0] = v80;
            v104 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v81, (__int64)v80, 1);
            v79 = v112;
            v80 = src[0];
            a1[4].m128i_i64[1] = v104;
            v81 = v104;
          }
          a1[5].m128i_i64[0] = (__int64)v80;
          *(_BYTE *)(v81 + v79) = 0;
          v82 = a1[4].m128i_i64[1] + v78;
          *(_QWORD *)v82 = 0x3B6E676973766E69LL;
          *(_BYTE *)(v82 + 8) = 32;
        }
        if ( (unsigned __int8)is_enum() )
        {
          sub_385E90(&a1[4].m128i_i64[1]);
          v97 = a1[5].m128i_i64[0];
          if ( v97 )
          {
            v98 = (void *)(v97 + 1);
            v99 = v97 + 2;
            --v97;
          }
          else
          {
            v99 = 3;
            v98 = &word_2;
          }
          v100 = a1[4].m128i_i64[1];
          if ( a1[5].m128i_i64[1] < v99 )
          {
            src[0] = v98;
            v105 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v100, v99, 1);
            a1[4].m128i_i64[1] = v105;
            v98 = src[0];
            v100 = v105;
          }
          a1[5].m128i_i64[0] = v99;
          *((_BYTE *)v98 + v100) = 0;
          *(_WORD *)(a1[4].m128i_i64[1] + v97) = 8251;
        }
        if ( (unsigned __int8)is_enum() )
        {
          v37 = s1;
          if ( *(_QWORD *)(v35 + 88) )
            v37 = *(const char **)(v35 + 80);
          if ( v37 )
          {
            v38 = strlen(v37);
            v39 = a1[5].m128i_i64[0];
            v40 = v38;
            v41 = v38;
            if ( v39 )
            {
              --v39;
              v41 = v38 + v39;
            }
            v42 = a1[4].m128i_i64[1];
            v43 = (void *)(v41 + 1);
            if ( a1[5].m128i_i64[1] < v41 + 1 )
            {
              v112 = v41;
              src[0] = (void *)(v41 + 1);
              v107 = qvector_reserve((__int64)&a1[4].m128i_i64[1], v42, (__int64)v43, 1);
              v41 = v112;
              v43 = src[0];
              a1[4].m128i_i64[1] = v107;
              v42 = v107;
            }
            a1[5].m128i_i64[0] = (__int64)v43;
            *(_BYTE *)(v42 + v41) = 0;
            memmove((void *)(v39 + a1[4].m128i_i64[1]), v37, v40);
          }
        }
      }
      if ( v117 )
      {
        v118.m128i_i64[0] = 0;
        qfree((__int64)v117);
      }
      goto LABEL_5;
    }
    if ( v10 == 3 )
    {
      v116 = 0;
      sub_3767A0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL));
      v117 = nullptr;
      copy_tinfo_t();
      sub_38DD50();
      clear_tinfo_t();
      clear_tinfo_t();
LABEL_5:
      sub_6B870(a2);
      ++a1[1].m128i_i32[0];
      return 1;
    }
    return 0;
  }
  v11 = *(_QWORD *)(v8 + 8);
  if ( v11 )
    goto LABEL_4;
  v13 = a1->m128i_i64[0];
  if ( *(_DWORD *)(a1->m128i_i64[0] + 104) != 4 )
    return 0;
  if ( (*(_BYTE *)(v13 + 123) & 0x40) != 0 )
    goto LABEL_38;
  return 0;
}
