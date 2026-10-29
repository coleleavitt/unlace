void __fastcall sub_F61A00(__int64 *a1, char a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void **p_ptr; // rcx
  __int64 v15; // rax
  char *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbp
  _QWORD *v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  char *v31; // rsi
  char *v32; // r14
  __int64 v33; // rax
  __int64 *v34; // r13
  __int64 v35; // r12
  __int64 *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  _QWORD *v41; // rbx
  char *v42; // rsi
  __int64 v43; // rbp
  char *v44; // rbx
  unsigned __int64 v45; // rax
  char *v46; // rbp
  __int64 v47; // r10
  char *v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rdi
  _QWORD *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r13
  char *v61; // rbp
  __int64 v62; // r15
  __int64 v63; // rsi
  __int64 v64; // rdx
  size_t v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbp
  __int64 v69; // r10
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 *v77; // rdx
  _QWORD *v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 *v81; // rbx
  __int64 v82; // r13
  __int64 *v83; // r15
  __int64 *v84; // r14
  __int64 v85; // rsi
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdi
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdi
  __int64 v99; // rbp
  __int64 v100; // r14
  unsigned __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  _QWORD *v106; // rax
  char *v107; // rdi
  char *v108; // rax
  __int64 v109; // r15
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdx
  unsigned __int64 v118; // r15
  unsigned __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rsi
  _QWORD *v122; // r15
  _QWORD *v123; // rdi
  _QWORD *v124; // rdi
  _QWORD *v125; // rdi
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r14
  __m128i *v131; // rax
  __int64 v132; // rcx
  __m128i v133; // xmm0
  unsigned __int64 v134; // rcx
  __int64 v135; // rsi
  int v136; // eax
  void *v137; // rdi
  _QWORD *v138; // rbx
  _QWORD *v139; // rdi
  _QWORD *v140; // rdi
  _QWORD *v141; // rdi
  unsigned __int64 v142; // rbx
  __m128i v143; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v144; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v145; // [rsp+18h] [rbp-D0h]
  _QWORD *v146; // [rsp+20h] [rbp-C8h]
  char v147; // [rsp+2Fh] [rbp-B9h]
  char *v148; // [rsp+30h] [rbp-B8h]
  __int64 v149; // [rsp+38h] [rbp-B0h]
  __int64 *v150; // [rsp+40h] [rbp-A8h]
  char *v151; // [rsp+48h] [rbp-A0h]
  void *v152; // [rsp+50h] [rbp-98h] BYREF
  __int64 v153; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v155; // [rsp+78h] [rbp-70h]
  int v156; // [rsp+80h] [rbp-68h]
  char v157; // [rsp+84h] [rbp-64h]

  v8 = (__int64)a3;
  v150 = a1;
  v9 = a1[5];
  v151 = a3;
  v147 = a2;
  v10 = sub_EBA840(v9, a3, (__int64)a3, a4, a5, a6);
  p_ptr = &ptr;
  v146 = v10;
  v15 = v10[9];
  v143.m128i_i64[0] = (__int64)&ptr;
  if ( a2 )
  {
    if ( *(__int64 *)(v15 + 32) < 0 || *(_QWORD *)(v15 + 56) )
      goto LABEL_4;
LABEL_163:
    v131 = (__m128i *)operator new(0x70u);
    v132 = (__int64)v151;
    v131[1].m128i_i64[0] = 0;
    v143.m128i_i64[0] = v132;
    v133 = _mm_loadl_epi64(&v143);
    v131[1].m128i_i64[1] = (__int64)&v131[2].m128i_i64[1];
    v131[3].m128i_i64[0] = v132;
    v131[2].m128i_i64[0] = 0x100000000LL;
    v131[3].m128i_i64[1] = (__int64)&v131[4].m128i_i64[1];
    v131[4].m128i_i64[0] = 0x100000000LL;
    v131[5].m128i_i64[1] = 0x100000000LL;
    v11 = *(unsigned int *)(a4 + 8);
    v131[5].m128i_i64[0] = (__int64)v131[6].m128i_i64;
    v134 = *(unsigned int *)(a4 + 12);
    v135 = v11 + 1;
    *v131 = _mm_unpacklo_epi64(v133, v133);
    v131[6].m128i_i64[1] = 0;
    ptr = v131;
    v136 = v11;
    if ( v11 + 1 > v134 )
    {
      v142 = *(_QWORD *)a4;
      v143.m128i_i64[0] = (__int64)&ptr;
      if ( v142 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v142 + 8 * v11 )
      {
        sub_F5CA20(a4, v135);
        v11 = *(unsigned int *)(a4 + 8);
        v8 = *(_QWORD *)a4;
        p_ptr = &ptr;
        v136 = *(_DWORD *)(a4 + 8);
      }
      else
      {
        sub_F5CA20(a4, v135);
        v8 = *(_QWORD *)a4;
        v11 = *(unsigned int *)(a4 + 8);
        p_ptr = (void **)(*(_QWORD *)a4 + v143.m128i_i64[0] - v142);
        v136 = *(_DWORD *)(a4 + 8);
      }
    }
    else
    {
      p_ptr = &ptr;
      v8 = *(_QWORD *)a4;
      v143.m128i_i64[0] = (__int64)&ptr;
    }
    v137 = *p_ptr;
    *p_ptr = nullptr;
    *(_QWORD *)(v8 + 8 * v11) = v137;
    v138 = ptr;
    *(_DWORD *)(a4 + 8) = v136 + 1;
    if ( v138 )
    {
      v139 = (_QWORD *)v138[10];
      if ( v139 != v138 + 12 )
        free(v139);
      v140 = (_QWORD *)v138[7];
      if ( v140 != v138 + 9 )
        free(v140);
      v141 = (_QWORD *)v138[3];
      if ( v141 != v138 + 5 )
        free(v141);
      v8 = 112;
      operator delete(v138, 0x70u);
    }
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(v15 + 40) & 1) != 0 )
    goto LABEL_163;
LABEL_4:
  v155 = 4;
  v156 = 0;
  v157 = 1;
  ptr = (void *)(v143.m128i_i64[0] + 24);
  v19 = sub_A56850((__int64)v151, v8, v11, (__int64)p_ptr, v12, v13);
  v148 = v16;
  v143.m128i_i64[1] = (__int64)&v152;
  while ( (char *)v19 != v148 )
  {
    v20 = sub_F55F20(*(__int64 **)(v19 + 16), v8, (__int64)v16, (__int64)v17, v18);
    v25 = sub_F3F530(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL), v8, v21, v22, v23, v24);
    v27 = (__int64)v25;
    if ( (*(_BYTE *)(v19 + 12) & 1) != 0 )
    {
      if ( v157 )
      {
        v28 = ptr;
        v16 = (char *)ptr + 8 * HIDWORD(v155);
        if ( ptr != v16 )
        {
          while ( v27 != *v28 )
          {
            if ( v16 == (char *)++v28 )
              goto LABEL_69;
          }
          goto LABEL_11;
        }
      }
      else
      {
        v8 = (__int64)v25;
        if ( sub_2212830(v143.m128i_i64[0], v25) )
          goto LABEL_11;
      }
    }
LABEL_69:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), (__int64)v16, (__int64)v17, v18, v26);
    if ( (*(_BYTE *)(*(_QWORD *)(v27 + 128) + 1LL) & 4) != 0 )
    {
      if ( !v147 )
        goto LABEL_150;
    }
    else
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), v72, v73, v74, v75);
      v8 = *(unsigned int *)(*(_QWORD *)(v27 + 128) + 20LL);
      if ( !(_DWORD)v8 )
        goto LABEL_11;
      if ( !v147 )
      {
LABEL_150:
        v76 = sub_F60D20(v150, v27);
        goto LABEL_72;
      }
    }
    v76 = sub_F61460((__int64)v150, (char *)v27) + 24;
LABEL_72:
    v81 = *(__int64 **)v76;
    v144 = *(_QWORD *)v76 + 8LL * *(unsigned int *)(v76 + 8);
    if ( (__int64 *)v144 == v81 )
      goto LABEL_82;
    v145 = v19;
LABEL_74:
    while ( 2 )
    {
      v82 = *v81;
      v83 = *(__int64 **)(*v81 + 56);
      v84 = &v83[*(unsigned int *)(*v81 + 64)];
      if ( v83 != v84 )
      {
        while ( 1 )
        {
          v85 = *v83;
          if ( v157 )
          {
            v86 = ptr;
            v77 = (__int64 *)((char *)ptr + 8 * HIDWORD(v155));
            if ( ptr != v77 )
            {
              while ( v85 != *v86 )
              {
                if ( v77 == ++v86 )
                  goto LABEL_106;
              }
LABEL_80:
              if ( (__int64 *)v144 == ++v81 )
                goto LABEL_81;
              goto LABEL_74;
            }
          }
          else if ( sub_2212830(v143.m128i_i64[0], v85) )
          {
            goto LABEL_80;
          }
LABEL_106:
          if ( v84 == ++v83 )
          {
            v82 = *v81;
            break;
          }
        }
      }
      v109 = operator new(0x70u);
      *(__m128i *)v109 = _mm_loadu_si128((const __m128i *)v82);
      *(_QWORD *)(v109 + 16) = *(_QWORD *)(v82 + 16);
      *(_QWORD *)(v109 + 24) = v109 + 40;
      *(_QWORD *)(v109 + 32) = 0x100000000LL;
      if ( *(_DWORD *)(v82 + 32) )
        sub_F5C180((void **)(v109 + 24), (char **)(v82 + 24));
      v110 = *(_QWORD *)(v82 + 48);
      v80 = v109 + 72;
      *(_QWORD *)(v109 + 56) = v109 + 72;
      *(_QWORD *)(v109 + 48) = v110;
      *(_QWORD *)(v109 + 64) = 0x100000000LL;
      if ( *(_DWORD *)(v82 + 64) )
      {
        v149 = v109 + 72;
        sub_F5C180((void **)(v109 + 56), (char **)(v82 + 56));
        v80 = v149;
      }
      *(_QWORD *)(v109 + 80) = v109 + 96;
      *(_QWORD *)(v109 + 88) = 0x100000000LL;
      v111 = *(unsigned int *)(v82 + 88);
      if ( (_DWORD)v111 )
      {
        v149 = v80;
        sub_F5C180((void **)(v109 + 80), (char **)(v82 + 80));
        v80 = v149;
      }
      v112 = *(_QWORD *)(v82 + 104);
      v152 = (void *)v109;
      *(_QWORD *)(v109 + 104) = v112;
      v113 = *(unsigned int *)(v109 + 32);
      if ( !(_DWORD)v113 || (v111 = *(_QWORD *)(v109 + 24), *(_QWORD *)(v111 + 8 * v113 - 8) != v27) )
        *(_QWORD *)(v109 + 48) = v27;
      if ( *(_QWORD *)v109 == v27 )
      {
        v128 = v146[9];
        v129 = v147 ? *(_QWORD *)(v128 + 56) : *(_QWORD *)(v128 + 48) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v129 == v27 )
          *(_QWORD *)v109 = v151;
      }
      v114 = v145;
      v115 = *(unsigned int *)(v109 + 64);
      if ( (*(_BYTE *)(v145 + 12) & 1) != 0 )
      {
        v114 = *(unsigned int *)(v109 + 68);
        if ( v115 + 1 > v114 )
        {
          sub_22134E0(v109 + 56, v80, v115 + 1, 8);
          v115 = *(unsigned int *)(v109 + 64);
        }
        *(_QWORD *)(*(_QWORD *)(v109 + 56) + 8 * v115) = v27;
        v127 = *(_DWORD *)(v109 + 64) + 1;
        *(_DWORD *)(v109 + 64) = v127;
LABEL_139:
        v111 = *(_QWORD *)(v109 + 16);
        *(_QWORD *)(v109 + 104) = v111;
        if ( !v127 )
          goto LABEL_123;
        goto LABEL_121;
      }
      if ( !(_DWORD)v115 )
      {
        *(_QWORD *)(v109 + 16) += sub_F5D7C0(v146 + 9, v27, v111, v145, v79, v80);
        v127 = *(_DWORD *)(v109 + 64);
        goto LABEL_139;
      }
      *(_QWORD *)(v109 + 104) = *(_QWORD *)(v109 + 16);
LABEL_121:
      v116 = **(_QWORD **)(v109 + 56);
      if ( v116 )
        *(_QWORD *)(v109 + 104) += sub_F5E070(v146 + 9, v116, (__int64 *)v111, v114, v79, v80);
LABEL_123:
      v117 = *(unsigned int *)(a4 + 8);
      v118 = *(_QWORD *)a4;
      v119 = v117 + 1;
      LODWORD(v120) = *(_DWORD *)(a4 + 8);
      v78 = (_QWORD *)(*(_QWORD *)a4 + 8 * v117);
      v77 = (__int64 *)v143.m128i_i64[1];
      if ( v119 > *(unsigned int *)(a4 + 12) )
      {
        v130 = v143.m128i_i64[1];
        if ( v118 > v143.m128i_i64[1] || (unsigned __int64)v78 <= v143.m128i_i64[1] )
        {
          sub_F5CA20(a4, v119);
          v120 = *(unsigned int *)(a4 + 8);
          v78 = (_QWORD *)(*(_QWORD *)a4 + 8 * v120);
          v77 = (__int64 *)v143.m128i_i64[1];
        }
        else
        {
          sub_F5CA20(a4, v119);
          v77 = (__int64 *)(*(_QWORD *)a4 + v130 - v118);
          v120 = *(unsigned int *)(a4 + 8);
          v78 = (_QWORD *)(*(_QWORD *)a4 + 8 * v120);
        }
      }
      v121 = *v77;
      *v77 = 0;
      *v78 = v121;
      v122 = v152;
      *(_DWORD *)(a4 + 8) = v120 + 1;
      if ( !v122 )
        goto LABEL_80;
      v123 = (_QWORD *)v122[10];
      if ( v123 != v122 + 12 )
        free(v123);
      v124 = (_QWORD *)v122[7];
      if ( v124 != v122 + 9 )
        free(v124);
      v125 = (_QWORD *)v122[3];
      if ( v125 != v122 + 5 )
        free(v125);
      ++v81;
      operator delete(v122, 0x70u);
      if ( (__int64 *)v144 != v81 )
        continue;
      break;
    }
LABEL_81:
    v19 = v145;
LABEL_82:
    if ( (*(_BYTE *)(v19 + 12) & 1) != 0 )
      sub_EB4570((__m128 *)v143.m128i_i64[1], v143.m128i_i64[0], v27);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), (__int64)v77, (__int64)v78, v79, v80);
    v91 = *(_QWORD *)(v27 + 128);
    if ( (*(_BYTE *)(v91 + 32) & 1) != 0 )
      v92 = sub_B72C80(v91);
    else
      v92 = *(_QWORD *)(v91 + 32);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), v87, v88, v89, v90);
    v8 = *(_QWORD *)(v27 + 104);
    v93 = v92 + 24LL * *(unsigned int *)(*(_QWORD *)(v27 + 128) + 20LL);
    sub_6E4DB0((__int64 *)(v8 + 96), v8, v94, v95, v96, v97);
    v98 = *(_QWORD *)(v27 + 128);
    if ( (*(_BYTE *)(v98 + 32) & 1) != 0 )
      v99 = sub_B72C80(v98);
    else
      v99 = *(_QWORD *)(v98 + 32);
    v100 = v143.m128i_i64[0];
    if ( v93 != v99 )
    {
      while ( 1 )
      {
        v101 = sub_F55F20(*(__int64 **)(v99 + 16), v8, (__int64)v16, (__int64)v17, v18);
        v106 = sub_F3F530(*(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFF0LL), v8, v102, v103, v104, v105);
        if ( v157 )
        {
          v17 = ptr;
          v18 = HIDWORD(v155);
          v8 = 8LL * HIDWORD(v155);
          v107 = (char *)ptr + v8;
          if ( ptr != (char *)ptr + v8 )
          {
            v16 = (char *)ptr;
            if ( v106 == *(_QWORD **)ptr )
              goto LABEL_97;
            while ( 1 )
            {
              v16 += 8;
              if ( v107 == v16 )
                break;
              if ( v106 == *(_QWORD **)v16 )
                goto LABEL_97;
            }
          }
          if ( HIDWORD(v155) < (unsigned int)v155 )
            break;
        }
        v8 = (__int64)v106;
        v126 = sub_2212A20(v100, v106);
        v17 = ptr;
        v16 = (char *)v126;
        if ( v157 )
          goto LABEL_97;
        v108 = (char *)ptr + 8 * (unsigned int)v155;
LABEL_98:
        if ( v108 != v16 && *(_QWORD *)v16 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v16 += 8;
          do
          {
            v17 = v16;
            if ( v108 == v16 )
              break;
            v16 += 8;
          }
          while ( *v17 >= 0xFFFFFFFFFFFFFFFELL );
        }
        v99 += 24;
        if ( v99 == v93 )
          goto LABEL_11;
      }
      v18 = (unsigned int)++HIDWORD(v155);
      *(_QWORD *)v107 = v106;
      v17 = ptr;
      v16 = (char *)ptr + v8;
LABEL_97:
      v108 = (char *)&v17[HIDWORD(v155)];
      goto LABEL_98;
    }
LABEL_11:
    v19 += 24LL;
  }
  v144 = a4;
  while ( 2 )
  {
    v29 = *(_QWORD *)v144;
    v30 = *(unsigned int *)(v144 + 8);
    v31 = (char *)(v143.m128i_i64[1] + 16);
    v152 = (void *)(v143.m128i_i64[1] + 16);
    v32 = (char *)(v143.m128i_i64[1] + 16);
    v33 = 8 * v30;
    v153 = 0x200000000LL;
    v34 = (__int64 *)(v29 + v33);
    v35 = v33 >> 3;
    if ( v33 > 16 )
    {
      sub_22134E0(v143.m128i_i64[1], v31, v33 >> 3, 8);
      v32 = (char *)v152;
      LODWORD(v35) = v153 + v35;
      v31 = (char *)v152 + 8 * (unsigned int)v153;
    }
    if ( (__int64 *)v29 != v34 )
    {
      v36 = (__int64 *)v29;
      v37 = ((unsigned __int64)v34 - v29 - 8) >> 3;
      if ( ((unsigned __int64)v31 >= v29 + 16 || v29 >= (unsigned __int64)(v31 + 16))
        && (v37 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
      {
        v38 = v37 + 1;
        v39 = 0;
        do
        {
          *(__m128i *)&v31[v39] = _mm_loadu_si128((const __m128i *)(v29 + v39));
          v39 += 16;
        }
        while ( 16 * (v38 >> 1) != v39 );
        v40 = 8 * (v38 & 0xFFFFFFFFFFFFFFFELL);
        v41 = (_QWORD *)(v40 + v29);
        v42 = &v31[v40];
        if ( (v38 & 0xFFFFFFFFFFFFFFFELL) != v38 )
          *(_QWORD *)v42 = *v41;
      }
      else
      {
        do
        {
          v58 = *v36++;
          v31 += 8;
          *((_QWORD *)v31 - 1) = v58;
        }
        while ( v34 != v36 );
      }
      v32 = (char *)v152;
    }
    LODWORD(v153) = v35;
    v35 = (unsigned int)v35;
    v43 = 8LL * (unsigned int)v35;
    v44 = &v32[v43];
    if ( &v32[v43] != v32 )
    {
      _BitScanReverse64(&v45, v43 >> 3);
      sub_F5A260((__int64 *)v32, (__int64 *)&v32[v43], 2LL * (int)(63 - (v45 ^ 0x3F)));
      if ( (unsigned __int64)v43 > 0x80 )
      {
        v46 = v32 + 128;
        sub_F5A570(v32, v32 + 128);
        if ( v44 == v32 + 128 )
          goto LABEL_41;
        while ( 1 )
        {
          v47 = *(_QWORD *)v46;
          v48 = v46;
          v49 = 8LL * *(unsigned int *)(*(_QWORD *)v46 + 32LL);
          while ( 1 )
          {
            v50 = *((_QWORD *)v48 - 1);
            v51 = *(unsigned int *)(v50 + 32);
            v52 = *(_QWORD **)(v50 + 24);
            v53 = *(_QWORD **)(v47 + 24);
            v54 = 8 * v51;
            v55 = &v53[(unsigned __int64)v54 / 8];
            if ( v54 >= v49 )
              v55 = &v53[(unsigned __int64)v49 / 8];
            if ( v53 == v55 )
            {
              v56 = v52;
            }
            else
            {
              if ( *v52 > *v53 )
                goto LABEL_37;
              if ( *v52 < *v53 )
                break;
              v56 = v52;
              while ( 1 )
              {
                ++v53;
                ++v56;
                if ( v55 == v53 )
                  break;
                if ( *v53 < *v56 )
                  goto LABEL_37;
                if ( *v53 > *v56 )
                  goto LABEL_40;
              }
            }
            if ( v56 == &v52[(unsigned __int64)v54 / 8] )
              break;
LABEL_37:
            v57 = *((_QWORD *)v48 - 1);
            v48 -= 8;
            *((_QWORD *)v48 + 1) = v57;
          }
LABEL_40:
          v46 += 8;
          *(_QWORD *)v48 = v47;
          if ( v44 == v46 )
            goto LABEL_41;
        }
      }
      sub_F5A570(v32, &v32[v43]);
LABEL_41:
      v35 = (unsigned int)v153;
      v32 = (char *)v152;
    }
    if ( v35 )
    {
      v143.m128i_i8[0] = 0;
      v59 = 0;
LABEL_46:
      v60 = v59;
      v61 = &v32[8 * v59];
      v62 = v59 + 1;
      if ( v59 + 1 == v35 )
      {
LABEL_50:
        if ( (unsigned __int64)(v35 - v59) <= 1 )
          goto LABEL_61;
        v66 = v35;
      }
      else
      {
        while ( 1 )
        {
          v63 = *(_QWORD *)&v32[8 * v62];
          v64 = *(unsigned int *)(*(_QWORD *)v61 + 32LL);
          if ( v64 != *(_DWORD *)(v63 + 32) )
            break;
          v65 = 8 * v64;
          if ( v65 )
          {
            if ( memcmp(*(const void **)(*(_QWORD *)v61 + 24LL), *(const void **)(v63 + 24), v65) )
              break;
          }
          v60 = v62++;
          if ( v62 == v35 )
            goto LABEL_50;
        }
        if ( (unsigned __int64)(v62 - v59) <= 1 )
          goto LABEL_45;
        v66 = v62;
      }
      if ( v59 == v66 )
      {
        v62 = v59;
        if ( v59 != v35 )
          goto LABEL_45;
LABEL_61:
        if ( v32 != (char *)(v143.m128i_i64[1] + 16) )
          free(v32);
        if ( !v143.m128i_i8[0] )
        {
LABEL_64:
          if ( v157 )
            return;
LABEL_161:
          free(ptr);
          return;
        }
        continue;
      }
      while ( 1 )
      {
        v68 = *(_QWORD *)&v32[8 * v59];
        v69 = *(_QWORD *)(v68 + 48);
        if ( v69 )
        {
          v70 = *(unsigned int *)(v68 + 32);
          if ( v70 + 1 > (unsigned __int64)*(unsigned int *)(v68 + 36) )
          {
            v143.m128i_i64[0] = *(_QWORD *)(v68 + 48);
            sub_22134E0(v68 + 24, v68 + 40, v70 + 1, 8);
            v70 = *(unsigned int *)(v68 + 32);
            v69 = v143.m128i_i64[0];
          }
          v71 = *(_QWORD *)(v68 + 24);
          v143.m128i_i8[0] = 1;
          *(_QWORD *)(v71 + 8 * v70) = v69;
          v67 = v59 + 1;
          *(_QWORD *)(v68 + 48) = 0;
          v32 = (char *)v152;
          ++*(_DWORD *)(v68 + 32);
          if ( v59 == v60 )
          {
LABEL_60:
            if ( v62 == v35 )
              goto LABEL_61;
LABEL_45:
            v59 = v62;
            goto LABEL_46;
          }
        }
        else
        {
          v67 = v59 + 1;
          if ( v59 == v60 )
            goto LABEL_60;
        }
        v59 = v67;
      }
    }
    break;
  }
  if ( v32 == (char *)(v143.m128i_i64[1] + 16) )
    goto LABEL_64;
  free(v32);
  if ( !v157 )
    goto LABEL_161;
}

