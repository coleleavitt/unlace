__int64 __fastcall sub_2B5C0(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // r13
  void *v5; // rbx
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdi
  void *v9; // rbx
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __m128i *v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 i; // r14
  __int64 *v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm5
  bool v24; // zf
  __int64 v25; // r14
  __int64 *v26; // r15
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  __m128i v31; // xmm0
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  size_t v35; // rax
  __m128i *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  size_t v39; // rbx
  void *v40; // rdi
  size_t v41; // r14
  int v42; // eax
  _QWORD *v43; // rdx
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int16 v47; // ax
  int v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  unsigned __int64 v52; // r8
  int v53; // r9d
  int v54; // ebx
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // esi
  unsigned __int64 v59; // rax
  _BOOL4 v60; // eax
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  __int64 v63; // r14
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rbx
  __int64 v66; // r15
  unsigned __int64 v67; // r8
  __int32 v68; // ecx
  bool v69; // cf
  __int64 v70; // rdx
  unsigned __int64 v71; // r14
  __int32 v72; // edx
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  int v77; // edx
  int v78; // ecx
  __int64 v79; // rax
  int v80; // esi
  __int64 v81; // rcx
  int v82; // eax
  int v83; // eax
  int v84; // r8d
  int v85; // eax
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // r14
  __int64 v91; // rsi
  int v92; // eax
  unsigned __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // rdx
  unsigned int v96; // ebx
  __int32 v97; // esi
  __int64 v98; // r14
  __int32 v99; // edx
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  char byte; // al
  unsigned __int64 j; // rdi
  __int64 v104; // rbx
  __int64 v105; // rax
  int v106; // ecx
  int v107; // r9d
  unsigned __int64 v108; // r10
  __int64 v109; // r8
  const __m128i *v110; // rdi
  const __m128i *v111; // rcx
  const __m128i *v112; // rax
  __m128i v113; // xmm0
  __m128i v114; // xmm1
  unsigned __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdi
  size_t v120; // r14
  __int64 v121; // r15
  char *v122; // r14
  __int64 v123; // rdx
  void *v124; // rax
  __m128i v125; // xmm0
  size_t v126; // r14
  __int64 v127; // r8
  __int64 v128; // rdx
  _QWORD *v129; // rax
  __m128i v130; // xmm1
  unsigned __int64 v131; // rdx
  __int64 v132; // rbx
  unsigned __int64 v133; // xmm0_8
  __m128i v134; // xmm1
  __int64 v135; // rax
  __int64 v136; // rbx
  unsigned __int64 v137; // rax
  __m128i *v138; // [rsp-8h] [rbp-238h]
  unsigned __int64 v139; // [rsp+0h] [rbp-230h]
  int v140; // [rsp+8h] [rbp-228h]
  char v141; // [rsp+Eh] [rbp-222h]
  char v142; // [rsp+Fh] [rbp-221h]
  __int64 v143; // [rsp+10h] [rbp-220h]
  __int64 v144; // [rsp+18h] [rbp-218h]
  __int64 v145; // [rsp+20h] [rbp-210h]
  unsigned __int64 v146; // [rsp+28h] [rbp-208h]
  __m128i *v147; // [rsp+30h] [rbp-200h]
  __int64 *v148; // [rsp+38h] [rbp-1F8h]
  unsigned __int64 v149; // [rsp+40h] [rbp-1F0h]
  _BYTE *v150; // [rsp+48h] [rbp-1E8h]
  char *src; // [rsp+50h] [rbp-1E0h]
  const char *srca; // [rsp+50h] [rbp-1E0h]
  size_t n; // [rsp+58h] [rbp-1D8h]
  size_t na; // [rsp+58h] [rbp-1D8h]
  __m128i v155; // [rsp+60h] [rbp-1D0h] BYREF
  __m128i v156; // [rsp+70h] [rbp-1C0h] BYREF
  __m128i v157; // [rsp+80h] [rbp-1B0h] BYREF
  unsigned __int64 v158; // [rsp+90h] [rbp-1A0h] BYREF
  unsigned __int64 v159; // [rsp+98h] [rbp-198h]
  __int64 v160; // [rsp+A0h] [rbp-190h] BYREF
  unsigned __int64 v161; // [rsp+A8h] [rbp-188h]
  __int64 v162; // [rsp+B0h] [rbp-180h] BYREF
  __int128 v163; // [rsp+B8h] [rbp-178h]
  int v164; // [rsp+C8h] [rbp-168h]
  __int64 v165; // [rsp+D0h] [rbp-160h] BYREF
  __int128 v166; // [rsp+D8h] [rbp-158h]
  int v167; // [rsp+E8h] [rbp-148h]
  _OWORD v168[3]; // [rsp+F0h] [rbp-140h] BYREF
  __int128 v169; // [rsp+120h] [rbp-110h]
  __int64 v170; // [rsp+130h] [rbp-100h]
  __m128i v171; // [rsp+140h] [rbp-F0h] BYREF
  __m128i v172; // [rsp+150h] [rbp-E0h] BYREF
  __m128i v173; // [rsp+160h] [rbp-D0h]
  __m128i v174; // [rsp+170h] [rbp-C0h]
  __m128i v175; // [rsp+180h] [rbp-B0h]
  _BYTE v176[104]; // [rsp+190h] [rbp-A0h] BYREF
  unsigned __int64 v177; // [rsp+1F8h] [rbp-38h]

  v3 = a2;
  v144 = a3;
  v177 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a3 + 440) )
    sub_28840(a3);
  v5 = 0;
  v6 = *(_QWORD *)(v144 + 256);
  v7 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v156 = v7;
    v120 = 80 * v6;
    v5 = (void *)qalloc_or_throw(80 * v6, a2, a3);
    a2 = *(char **)(v144 + 248);
    memcpy(v5, a2, v120);
    v7 = _mm_load_si128(&v156);
  }
  v8 = *((_QWORD *)v3 + 32);
  if ( v8 )
  {
    *((_QWORD *)v3 + 33) = 0;
    v156 = v7;
    qfree(v8, a2);
    v7 = _mm_load_si128(&v156);
  }
  *((_QWORD *)v3 + 32) = v5;
  *(__m128i *)(v3 + 264) = v7;
  if ( !*(_BYTE *)(v144 + 440) )
    sub_28840(v144);
  v9 = 0;
  v10 = *(_QWORD *)(v144 + 232);
  v11 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v10 )
  {
    v156 = v11;
    v126 = 72 * v10;
    v9 = (void *)qalloc_or_throw(72 * v10, a2, a3);
    a2 = *(char **)(v144 + 224);
    memcpy(v9, a2, v126);
    v11 = _mm_load_si128(&v156);
  }
  v12 = *((_QWORD *)v3 + 35);
  if ( v12 )
  {
    *((_QWORD *)v3 + 36) = 0;
    v156 = v11;
    qfree(v12, a2);
    v11 = _mm_load_si128(&v156);
  }
  *((_QWORD *)v3 + 35) = v9;
  v13 = v144;
  *((__m128i *)v3 + 18) = v11;
  v148 = &v165;
  sub_2B040(&v165, v144, 0);
  v17 = v166;
  v155.m128i_i64[0] = v165;
  if ( (_QWORD)v166 )
  {
    src = (char *)qalloc_or_throw(24 * v166, v144, v14);
    v121 = v155.m128i_i64[0];
    v122 = src;
    v156.m128i_i64[0] = 0;
    do
    {
      *(_QWORD *)v122 = 0;
      *(_OWORD *)(v122 + 8) = 0;
      v123 = *(_QWORD *)(v121 + 8);
      if ( v123 )
      {
        na = *(_QWORD *)(v121 + 8);
        v124 = (void *)qalloc_or_throw(na, v13, v123);
        *(_QWORD *)v122 = v124;
        *((_QWORD *)v122 + 2) = na;
        v13 = *(_QWORD *)v121;
        memcpy(v124, *(const void **)v121, na);
        *((_QWORD *)v122 + 1) = na;
      }
      ++v156.m128i_i64[0];
      v122 += 24;
      v121 += 24;
    }
    while ( v17 != v156.m128i_i64[0] );
    v18 = *((_QWORD *)v3 + 38);
    v125 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
    v156 = v125;
    if ( !v18 )
    {
      v24 = v155.m128i_i64[0] == 0;
      *(__m128i *)(v3 + 312) = v125;
      *((_QWORD *)v3 + 38) = src;
      if ( v24 )
        goto LABEL_28;
      goto LABEL_23;
    }
  }
  else
  {
    v18 = *((_QWORD *)v3 + 38);
    if ( !v18 )
    {
      v24 = v155.m128i_i64[0] == 0;
      *(_OWORD *)(v3 + 312) = 0;
      if ( v24 )
        goto LABEL_28;
      goto LABEL_27;
    }
    src = 0;
    v156 = 0;
  }
  v19 = *((_QWORD *)v3 + 39);
  if ( v19 )
  {
    for ( i = 0; i != v19; ++i )
    {
      v21 = (__int64 *)(v18 + 24 * i);
      v22 = *v21;
      if ( *v21 )
      {
        v21[1] = 0;
        qfree(v22, v13);
        v18 = *((_QWORD *)v3 + 38);
      }
    }
  }
  *((_QWORD *)v3 + 39) = 0;
  qfree(v18, v13);
  v23 = _mm_load_si128(&v156);
  v24 = v155.m128i_i64[0] == 0;
  *((_QWORD *)v3 + 38) = src;
  *(__m128i *)(v3 + 312) = v23;
  if ( !v24 )
  {
    if ( !v17 )
    {
LABEL_27:
      qfree(v155.m128i_i64[0], v13);
      goto LABEL_28;
    }
LABEL_23:
    v25 = 0;
    v26 = (__int64 *)v155.m128i_i64[0];
    do
    {
      v27 = *v26;
      if ( *v26 )
      {
        v26[1] = 0;
        qfree(v27, v13);
      }
      ++v25;
      v26 += 3;
    }
    while ( v17 != v25 );
    goto LABEL_27;
  }
LABEL_28:
  v162 = 0;
  v163 = 0;
  v28 = *(_QWORD *)(v144 + 128);
  memset(v168, 0, sizeof(v168));
  v170 = 0;
  v139 = v28;
  v146 = *((_QWORD *)v3 + 36);
  LODWORD(v28) = *((_DWORD *)v3 + 91);
  v169 = 0;
  if ( (~(_BYTE)v28 & 0x60) == 0 )
  {
    v127 = *((_QWORD *)v3 + 4);
    if ( v127 )
    {
      if ( v146 > 1 )
      {
        v16 = *((_QWORD *)v3 + 35);
        v128 = 0;
        v15 = *(__m128i **)(v16 + 24);
        v129 = (_QWORD *)(v16 + 32);
        do
        {
          ++v128;
          v13 = (unsigned __int64)v15->m128i_u64 + *v129;
          v15 = (__m128i *)v129[8];
          if ( (__m128i *)v13 != v15 )
            goto LABEL_31;
          v129 += 9;
        }
        while ( v146 - 1 != v128 );
      }
      v130 = _mm_loadu_si128((const __m128i *)(v127 + 8));
      v131 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v132 = v130.m128i_i64[0];
      v156 = _mm_srli_si128(v130, 8);
      v133 = _mm_add_epi64(v156, v130).m128i_u64[0];
      v165 = v130.m128i_i64[0] & v131;
      *(_QWORD *)&v166 = v131 & v133;
      if ( (v130.m128i_i64[0] & v131) < (v131 & v133) )
      {
        v155 = v130;
        sub_122C0(&v162, &v165);
        v130 = _mm_load_si128(&v155);
      }
      v13 = (unsigned __int64)"GAP";
      v155 = v130;
      qstrncpy((char *)v168 + 8, "GAP", 16, v15, v127, v16);
      v134 = _mm_load_si128(&v155);
      *((_QWORD *)&v168[2] + 1) = 0;
      *(_QWORD *)&v169 = v156.m128i_i64[0];
      v135 = *(_QWORD *)(a1 + 8);
      *(__m128i *)((char *)&v168[1] + 8) = v134;
      v136 = *(_QWORD *)(v135 + 16) & v132;
      v137 = *((_QWORD *)v3 + 36);
      *((_QWORD *)v3 + 31) = v136;
      v146 = v137;
    }
  }
  if ( v146 )
  {
    v16 = *((_QWORD *)v3 + 35);
LABEL_31:
    v145 = 0;
    v149 = 0;
    while ( 1 )
    {
      v155.m128i_i64[0] = v16 + v145;
      srca = (const char *)(v16 + v145 + 8);
      v35 = strlen(srca);
      v39 = v35;
      if ( v35 )
      {
        v40 = (void *)*((_QWORD *)v3 + 19);
        v41 = v35 + 1;
        if ( *((_QWORD *)v3 + 21) < v35 + 1 )
        {
          v100 = qvector_reserve(v3 + 152, *((_QWORD *)v3 + 19), v41, 1);
          *((_QWORD *)v3 + 19) = v100;
          v40 = (void *)v100;
        }
        *((_QWORD *)v3 + 20) = v41;
        v13 = (unsigned __int64)srca;
        memmove(v40, srca, v39);
        *(_BYTE *)(*((_QWORD *)v3 + 19) + v39) = 0;
      }
      else
      {
        *((_QWORD *)v3 + 20) = 0;
      }
      v29 = *(_QWORD *)(a1 + 8);
      v30 = *((_QWORD *)v3 + 1);
      v31 = _mm_loadu_si128((const __m128i *)(v155.m128i_i64[0] + 24));
      v32 = *(_QWORD *)(v29 + 16) & v31.m128i_i64[0];
      v157.m128i_i64[0] = v32;
      v157.m128i_i64[1] = *(_QWORD *)(v29 + 16) & _mm_add_epi64(_mm_srli_si128(v31, 8), v31).m128i_u64[0];
      v33 = v157.m128i_u64[1];
      v34 = *((_QWORD *)v3 + 30);
      if ( *(_QWORD *)(v30 + 16) != v34 && v34 != -1 && (v34 >= v157.m128i_i64[1] || v34 < v32) )
        goto LABEL_37;
      if ( *((_DWORD *)v3 + 85) == 12 )
      {
        v37 = *(unsigned int *)(v155.m128i_i64[0] + 64);
        if ( !(_DWORD)v37 && v32 < v157.m128i_i64[1] )
        {
          v13 = (unsigned __int64)"__BRANCH_STUBS";
          if ( !strcmp(srca, "__BRANCH_STUBS") )
          {
            *(__m128i *)(a1 + 13560) = _mm_load_si128(&v157);
          }
          else
          {
            v13 = (unsigned __int64)"__BRANCH_GOTS";
            if ( !strcmp(srca, "__BRANCH_GOTS") )
              *(__m128i *)(a1 + 13576) = _mm_load_si128(&v157);
          }
        }
      }
      v42 = *((_DWORD *)v3 + 91);
      if ( (v42 & 0x20) != 0 )
      {
        v43 = (_QWORD *)*((_QWORD *)v3 + 4);
        if ( v43 )
        {
          v13 = *(_QWORD *)(v29 + 16);
          if ( !v32 && v43[2] >= v33 )
          {
            v32 = v13 & (v43[1] + *(_QWORD *)(v155.m128i_i64[0] + 40));
            v44 = v32 + *(_QWORD *)(v155.m128i_i64[0] + 32);
            v157.m128i_i64[0] = v32;
            v157.m128i_i64[1] = v13 & v44;
            v33 = v13 & v44;
          }
          v36 = (__m128i *)*((_QWORD *)v3 + 31);
          if ( v36 == (__m128i *)-1LL || v36 == (__m128i *)v13 )
          {
            v36 = *(__m128i **)(v155.m128i_i64[0] + 24);
            if ( v36 == (__m128i *)v43[3] )
            {
              v36 = (__m128i *)(v13 & (unsigned __int64)v36);
              *((_QWORD *)v3 + 31) = v36;
            }
          }
        }
      }
      LODWORD(n) = 0;
      if ( (v42 & 0x50) != 0 )
        n = *((_QWORD *)v3 + 3);
      if ( v33 < v32 )
      {
        v13 = v32;
        sub_196C0(
          (unsigned int)"%a: bad segment size %llx",
          v32,
          *(_QWORD *)(v155.m128i_i64[0] + 32),
          (_DWORD)v36,
          v37,
          v38,
          v139);
        goto LABEL_37;
      }
      if ( (_QWORD)v163 && v33 != v32 )
      {
        v13 = (unsigned __int64)&v157;
        sub_132E0(&v162, &v157);
      }
      v45 = *((_QWORD *)v3 + 31);
      v46 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( (v45 == v46 || v45 == -1) && !*(_QWORD *)(v155.m128i_i64[0] + 40) )
      {
        if ( *(_QWORD *)(v155.m128i_i64[0] + 48) )
        {
          v36 = (__m128i *)*((_QWORD *)v3 + 4);
          v95 = *(_QWORD *)(v155.m128i_i64[0] + 24) & v46;
          *((_QWORD *)v3 + 31) = v95;
          if ( v36 )
          {
            if ( v95 != (v36->m128i_i64[1] & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL)) )
            {
              sub_19510(
                (unsigned int)"Subfile is not at the expected load address!",
                v13,
                v95,
                (_DWORD)v36,
                v37,
                v38,
                v139);
              v96 = 0;
              goto LABEL_246;
            }
          }
        }
      }
      v47 = *(_WORD *)(a1 + 13688);
      if ( (v47 & 0x2000) != 0 )
        goto LABEL_67;
      if ( (v47 & 8) != 0 )
        break;
      v142 = 0;
LABEL_68:
      v13 = (unsigned __int64)srca;
      v150 = v176;
      qstrncpy(v176, srca, 100, v36, v37, v38);
      if ( (v3[365] & 1) != 0 )
      {
        v13 = (unsigned __int64)v176;
        netnode_hashset(*(_QWORD *)(a1 + 24), v176, &v157, 8, 115);
      }
      if ( (*(_BYTE *)(a1 + 5200) & 2) != 0 && *((_QWORD *)v3 + 15) )
      {
        if ( !*(_QWORD *)(v155.m128i_i64[0] + 32) )
        {
          v104 = v155.m128i_i64[0];
          sub_112F0(
            (unsigned int)"segment: \"%s\" (vm: 0x%llx) has vmsize of 0, loading entire mapping\n",
            (_DWORD)srca,
            *(_QWORD *)(v155.m128i_i64[0] + 24),
            v51,
            v52,
            v53);
          v105 = sub_1C420(*((_QWORD *)v3 + 15), *(_QWORD *)(v104 + 24));
          v109 = v105;
          if ( !v105 )
          {
            v13 = (unsigned __int64)srca;
            sub_112F0(
              (unsigned int)"ERROR: segment: \"%s\" (vm: 0x%llx), couldn't find subcache for segment\n",
              (_DWORD)srca,
              v108,
              v106,
              0,
              v107);
            goto LABEL_37;
          }
          v110 = *(const __m128i **)(v105 + 528);
          v111 = &v110[2 * *(_QWORD *)(v105 + 536)];
          if ( v110 == v111 )
            goto LABEL_229;
          v112 = *(const __m128i **)(v105 + 528);
          while ( v108 < v112->m128i_i64[0] || v108 >= v112->m128i_i64[1] + v112->m128i_i64[0] )
          {
            v112 += 2;
            if ( v111 == v112 )
              goto LABEL_229;
          }
          if ( !v112 )
          {
LABEL_229:
            v13 = (unsigned __int64)srca;
            sub_112F0(
              (unsigned int)"ERROR: segment: \"%s\" (vm: 0x%llx), couldn't find mapping info for segment\n",
              (_DWORD)srca,
              v108,
              (_DWORD)v111,
              v109,
              v107,
              v139);
            goto LABEL_37;
          }
          v113 = _mm_loadu_si128(v112);
          v114 = _mm_add_epi64(_mm_srli_si128(v113, 8), v113);
          v157 = _mm_unpacklo_epi64(v113, v114);
          v115 = v112->m128i_i64[0];
          do
          {
            v116 = v110->m128i_i64[0];
            if ( v115 >= v110->m128i_i64[0] && v110->m128i_i64[1] >= v115 - v116 )
            {
              v117 = v110[1].m128i_i64[0] + v115 - v116;
              goto LABEL_236;
            }
            v110 += 2;
          }
          while ( v111 != v110 );
          v117 = -1;
LABEL_236:
          file2base(*(_QWORD *)(v109 + 8), v117, v115, v114.m128i_i64[0], 1);
          v13 = (unsigned __int64)&v157;
          rangeset_t_add(v3 + 176, &v157);
LABEL_203:
          v141 = 1;
          goto LABEL_98;
        }
        if ( v142 )
        {
LABEL_201:
          v52 = *(_QWORD *)(v155.m128i_i64[0] + 48);
          if ( !v52 )
            goto LABEL_203;
          v54 = *((_DWORD *)v3 + 91);
          if ( (v54 & 0x40) != 0 )
            goto LABEL_203;
LABEL_77:
          if ( *((_DWORD *)v3 + 85) == 1
            || (v55 = *((_QWORD *)v3 + 30), *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) != v55)
            && v55 != -1
            && *(_DWORD *)(v155.m128i_i64[0] + 64) )
          {
            v141 = v142;
            goto LABEL_98;
          }
          v56 = *(_QWORD *)(v155.m128i_i64[0] + 40);
          v156.m128i_i32[0] = *(_DWORD *)(v155.m128i_i64[0] + 68);
          if ( v56 )
          {
            v60 = 0;
            if ( (v156.m128i_i8[0] & 8) != 0 )
            {
              if ( *(_QWORD *)(v155.m128i_i64[0] + 32) )
              {
                v60 = 1;
                if ( v56 <= 0x3000 )
                {
                  v58 = v52;
                  goto LABEL_92;
                }
              }
            }
          }
          else
          {
            v57 = 28;
            if ( *(_BYTE *)(v144 + 161) )
              v57 = 32;
            v58 = v139;
            v59 = (v57 + *((unsigned int *)v3 + 87) + 4095) & 0xFFFFFFFFFFFFF000LL;
            if ( v139 > v59 )
              v58 = v59;
            if ( v52 >= v59 )
              v58 = v52;
            if ( v157.m128i_i64[1] - v157.m128i_i64[0] < v59 )
              v157.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v157.m128i_i64[0] + v59);
            if ( (v156.m128i_i8[0] & 8) != 0 && *(_QWORD *)(v155.m128i_i64[0] + 32) )
            {
LABEL_92:
              v52 += v56;
              v69 = v52 < 0x3000;
              v24 = v52 == 12288;
              LODWORD(v52) = v58;
              v60 = !v69 && !v24;
            }
            else
            {
              LODWORD(v52) = v58;
              v60 = 0;
            }
          }
          if ( (v54 & 0x20) != 0 )
          {
            v61 = *((_QWORD *)v3 + 9);
            v62 = *(_QWORD *)(v155.m128i_i64[0] + 24);
            if ( v62 >= v61 && v62 < v61 + *((_QWORD *)v3 + 10) )
              LODWORD(v56) = v62 + *((_DWORD *)v3 + 22) - v61;
          }
          v13 = (unsigned __int64)v3;
          LODWORD(n) = sub_22160(a1, (_DWORD)v3, v144, v56, v52, (unsigned int)&v157, 1, v60, (__int64)v176);
          v141 = v142;
          goto LABEL_98;
        }
        v54 = *((_DWORD *)v3 + 91);
        if ( (v54 & 0x40) != 0 )
          goto LABEL_184;
      }
      else
      {
        if ( v142 )
          goto LABEL_201;
        if ( !*(_QWORD *)(v155.m128i_i64[0] + 32) )
          goto LABEL_37;
        v54 = *((_DWORD *)v3 + 91);
        if ( (v54 & 0x40) != 0 )
        {
LABEL_184:
          v141 = 0;
          goto LABEL_98;
        }
      }
      v13 = (unsigned __int64)v3;
      v141 = sub_21030(a1, v3, srca);
      if ( v141 )
        goto LABEL_37;
      v52 = *(_QWORD *)(v155.m128i_i64[0] + 48);
      if ( v52 )
        goto LABEL_77;
LABEL_98:
      v165 = 0;
      v166 = 0;
      if ( v157.m128i_i64[0] < (unsigned __int64)v157.m128i_i64[1] )
      {
        v13 = (unsigned __int64)&v157;
        sub_122C0(v148, &v157);
      }
      v63 = *(int *)(*(_QWORD *)(v144 + 272) + 4 * v149);
      v64 = *((_QWORD *)v3 + 33) - v63;
      v156.m128i_i64[0] = *(unsigned int *)(v155.m128i_i64[0] + 64);
      if ( v64 < v156.m128i_i64[0] )
      {
        v13 = v156.m128i_i64[0];
        sub_196C0((unsigned int)"Inconsistent section count (%zu vs %zu)", v156.m128i_i32[0], v64, v51, v52, v53, v139);
        v156.m128i_i64[0] = v64;
      }
      if ( v156.m128i_i64[0] )
      {
        v65 = 0;
        v66 = 80 * v63;
        v143 = v145 + 72;
        while ( 1 )
        {
          if ( (unsigned __int8)callui(27) )
            sub_1A260(0, v13, v77, v78, v67, v86);
          v79 = *((_QWORD *)v3 + 32);
          v171 = _mm_loadu_si128((const __m128i *)(v79 + v66));
          v172 = _mm_loadu_si128((const __m128i *)(v79 + v66 + 16));
          v173 = _mm_loadu_si128((const __m128i *)(v79 + v66 + 32));
          v174 = _mm_loadu_si128((const __m128i *)(v79 + v66 + 48));
          v175 = _mm_loadu_si128((const __m128i *)(v79 + v66 + 64));
          v70 = v173.m128i_i64[1];
          if ( (v3[364] & 0x50) == 0 && *((_DWORD *)v3 + 85) == 1 )
            break;
          if ( !v173.m128i_i64[1] )
            goto LABEL_122;
          v67 = v157.m128i_u64[1];
          v68 = v157.m128i_i32[2] - v157.m128i_i32[0];
          if ( v157.m128i_i64[1] - v157.m128i_i64[0] < (unsigned __int64)v173.m128i_i64[1] )
            goto LABEL_145;
LABEL_106:
          v13 = v173.m128i_i64[0];
          v69 = __CFADD__(v173.m128i_i64[0], v70);
          v70 += v173.m128i_i64[0];
          v71 = v70;
          if ( *((_DWORD *)v3 + 85) != 1 )
          {
            if ( v69 )
            {
              v147 = (__m128i *)v173.m128i_i64[0];
              sub_196C0(
                (unsigned int)"%a-%a: section size overflow, adjusting it.",
                v173.m128i_i32[0],
                v70,
                v68,
                v67,
                v86,
                v139);
              v67 = v157.m128i_u64[1];
              v13 = (unsigned __int64)v147;
              v71 = v157.m128i_u64[1];
              v173.m128i_i64[1] = v157.m128i_i64[1] - (_QWORD)v147;
            }
            v72 = v157.m128i_i32[0];
            if ( v71 < v157.m128i_i64[0] || v67 < v13 )
            {
              sub_196C0(
                (unsigned int)"%a-%a: the whole section is outside of the parent segment (%a..%a), skip it",
                v13,
                v71,
                v157.m128i_i32[0],
                v67,
                v86,
                v139);
              goto LABEL_122;
            }
            if ( v13 < v157.m128i_i64[0] )
            {
              sub_196C0(
                (unsigned int)"%a: section starts outside of the parent segment (%a..%a), adjusting it",
                v13,
                v157.m128i_i32[0],
                v67,
                v67,
                v86,
                v139);
              v67 = v157.m128i_u64[1];
              v72 = v157.m128i_i32[0];
              v13 = v157.m128i_i64[0];
              v173 = _mm_unpacklo_epi64(
                       (__m128i)v157.m128i_u64[0],
                       (__m128i)(unsigned __int64)(v173.m128i_i64[1] + v173.m128i_i64[0] - v157.m128i_i64[0]));
            }
            if ( v71 < v13 || v67 < v71 )
            {
              LODWORD(v147) = v13;
              sub_196C0(
                (unsigned int)"%a-%a: section ends outside of the parent segment (%a..%a), adjusting it",
                v13,
                v71,
                v72,
                v67,
                v86,
                v139);
              v71 = v157.m128i_u64[1];
              v173.m128i_i64[1] = v157.m128i_i64[1] - v173.m128i_i64[0];
            }
            goto LABEL_116;
          }
LABEL_128:
          if ( v71 < v13 )
            sub_1A260((unsigned int)"Cannot create section bigger then segment", v13, v70, v68, v67, v86);
LABEL_116:
          v73 = *((_QWORD *)v3 + 30);
          v74 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v75 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
          v76 = v74 & v71;
          v13 &= v74;
          v158 = v13;
          v159 = v74 & v71;
          if ( v73 == v75 || v73 == -1 )
          {
            v80 = *((_DWORD *)v3 + 91);
            if ( *((_DWORD *)v3 + 85) != 1 )
            {
              if ( (v80 & 0x40) != 0 || (v80 & 0x10) != 0 )
              {
                LODWORD(n) = v173.m128i_i32[2];
              }
              else if ( v175.m128i_u8[0] == 1 || v175.m128i_u8[0] == 18 )
              {
                v101 = v173.m128i_i64[0];
                if ( v173.m128i_i64[0] < v71 )
                {
                  do
                  {
                    v147 = (__m128i *)v101;
                    byte = get_byte(v101);
                    v101 = (unsigned __int64)v147;
                    if ( byte )
                      break;
                    v101 = (unsigned __int64)v147->m128i_u64 + 1;
                  }
                  while ( (unsigned __int64)v147->m128i_u64 + 1 < v71 );
                }
                if ( v71 == v101 || v157.m128i_i64[0] + *(_QWORD *)(v155.m128i_i64[0] + 48) == v101 )
                {
                  for ( j = v173.m128i_i64[0]; j < v101; ++j )
                  {
                    v147 = (__m128i *)v101;
                    del_value();
                    v101 = (unsigned __int64)v147;
                  }
                }
              }
              else if ( v173.m128i_i64[1] )
              {
                v97 = v173.m128i_i32[0];
                v98 = *(_QWORD *)(v155.m128i_i64[0] + 40) + v173.m128i_i64[0] - v157.m128i_i64[0];
                v99 = v174.m128i_i32[0];
                if ( v174.m128i_u32[0] != v98 )
                {
                  if ( !byte_66C38 )
                  {
                    sub_19D90(
                      (unsigned int)"AUTOHIDE REGISTRY\n"
                                    "The input file has invalid section file offsets.\n"
                                    "Usually it means that it has been modified to hide its contents.\n",
                      v173.m128i_i32[0],
                      v174.m128i_i32[0],
                      v74,
                      v67,
                      v86,
                      v139);
                    byte_66C38 = 1;
                    v99 = v174.m128i_i32[0];
                    v97 = v173.m128i_i32[0];
                  }
                  sub_112F0(
                    (unsigned int)"0x%a: section file offset invalid: (%X; expected %llX); possibly the file was modified"
                                  " to hinder analysis!\n",
                    v97,
                    v99,
                    v98,
                    v67,
                    v86,
                    v139);
                }
              }
LABEL_134:
              if ( v65 >= v156.m128i_i64[0] - 1 )
              {
                if ( v149 < v146 - 1 && (v81 = *((_QWORD *)v3 + 35) + v143, *(_QWORD *)(v81 + 32)) )
                {
                  v147 = (__m128i *)(*((_QWORD *)v3 + 35) + v143);
                  if ( !(unsigned __int8)sub_21030(a1, v3, v81 + 8) )
                    sub_11960(&v158, v147[1].m128i_i64[1]);
                  v82 = *((_DWORD *)v3 + 91);
                  if ( (v82 & 0x10) == 0 )
                  {
LABEL_140:
                    if ( (~(_BYTE)v82 & 0x60) != 0 )
                      goto LABEL_141;
                  }
                }
                else
                {
                  v82 = *((_DWORD *)v3 + 91);
                  if ( (v82 & 0x10) == 0 )
                    goto LABEL_140;
                }
                if ( (*(_BYTE *)(v155.m128i_i64[0] + 60) & 4) != 0 )
                {
                  v87 = -4096;
                  v88 = 4095;
                }
                else
                {
                  v87 = -64;
                  v88 = 63;
                }
                sub_11960(&v158, v87 & (v157.m128i_i64[1] + v88));
                goto LABEL_141;
              }
              sub_11960(&v158, *(_QWORD *)(*((_QWORD *)v3 + 32) + v66 + 112));
LABEL_141:
              v83 = strcmp(srca, "__DATA_CONST");
              v84 = 1;
              if ( v83 )
              {
                LODWORD(v147) = 1;
                v85 = strcmp(srca, "__OBJC_RO");
                v84 = 1;
                if ( v85 )
                  v84 = *(_DWORD *)(v155.m128i_i64[0] + 60);
              }
              sub_1D380(
                a1,
                (_DWORD)v3,
                (unsigned int)&v171,
                (unsigned int)&v158,
                v84,
                n,
                (__int64)v148,
                (_DWORD)v138,
                v139,
                v140,
                v143,
                v144,
                v145,
                v146,
                (_DWORD)v147,
                (_DWORD)v148,
                v149,
                (_DWORD)v150,
                (_DWORD)srca,
                n,
                v155.m128i_i32[0],
                v155.m128i_i32[2],
                v156.m128i_i32[0],
                v156.m128i_i32[2],
                v157.m128i_i32[0],
                v157.m128i_i32[2],
                v158,
                v159,
                v160,
                v161,
                v162,
                v163,
                DWORD2(v163),
                v164,
                v165,
                v166,
                DWORD2(v166),
                v167,
                v168[0],
                DWORD2(v168[0]),
                v168[1],
                DWORD2(v168[1]),
                v168[2],
                DWORD2(v168[2]),
                v169,
                DWORD2(v169),
                v170);
              v13 = (unsigned __int64)v138;
              goto LABEL_122;
            }
            v89 = v173.m128i_u64[1];
            LODWORD(n) = v173.m128i_i32[2];
            if ( (v80 & 0x50) != 0 || (v175.m128i_u8[0] == 1 || v175.m128i_u8[0] == 18) && (v73 == -1 || v73 == v75) )
              goto LABEL_134;
            v90 = v174.m128i_u32[0];
            v91 = v173.m128i_i64[0];
LABEL_164:
            if ( v90 < v174.m128i_u32[2] )
            {
              v67 = v90 + v89;
              if ( v90 + v89 >= v174.m128i_u32[2] )
                v89 = v174.m128i_u32[2] - v90;
            }
            v160 = v91 & v74;
            v161 = v74 & (v91 + v89);
            qstrncpy(v150, &v172, 100, v74, v67, v86);
            qstrncat(v150, ".", 100);
            qstrncat(v150, &v171, 100);
            if ( (v3[364] & 0x20) != 0 )
            {
              v93 = *((_QWORD *)v3 + 9);
              if ( v173.m128i_i64[0] >= v93 && v173.m128i_i64[0] < v93 + *((_QWORD *)v3 + 10) )
                LODWORD(v90) = v173.m128i_i32[0] + *((_DWORD *)v3 + 22) - v93;
            }
            LODWORD(n) = sub_22160(
                           a1,
                           (_DWORD)v3,
                           v144,
                           v90,
                           v173.m128i_i32[2],
                           (unsigned int)&v160,
                           0,
                           0,
                           (__int64)v150);
            goto LABEL_134;
          }
          if ( v73 < v76 && v73 >= v13 )
          {
            v92 = *((_DWORD *)v3 + 91);
            if ( *((_DWORD *)v3 + 85) == 1 || (v92 & 0x40) != 0 || (v92 & 0x10) != 0 )
            {
              v90 = v174.m128i_u32[0];
              v91 = v173.m128i_i64[0];
              if ( !v174.m128i_i32[0] && (*((_DWORD *)v3 + 91) & 0x10) != 0 )
                v90 = v173.m128i_i64[0] + *(_QWORD *)(v155.m128i_i64[0] + 40) - *(_QWORD *)(v155.m128i_i64[0] + 24);
              v89 = v173.m128i_u64[1];
            }
            else
            {
              v90 = v174.m128i_u32[0];
              v89 = v173.m128i_u64[1];
              v91 = v173.m128i_i64[0];
            }
            goto LABEL_164;
          }
          if ( v13 < v76 )
          {
            v13 = (unsigned __int64)&v158;
            sub_132E0(v148, &v158);
          }
LABEL_122:
          ++v65;
          v66 += 80;
          if ( v156.m128i_i64[0] == v65 )
            goto LABEL_173;
        }
        v68 = v157.m128i_i32[2] - v157.m128i_i32[0];
        if ( v157.m128i_i64[1] - v157.m128i_i64[0] >= (unsigned __int64)v173.m128i_i64[1] )
        {
          v13 = v173.m128i_i64[0];
          v71 = v173.m128i_i64[0] + v173.m128i_i64[1];
          goto LABEL_128;
        }
LABEL_145:
        sub_196C0(
          (unsigned int)"The size of section (%llx) is bigger then the size of segment (%a), adjusting it",
          v173.m128i_i32[2],
          v68,
          v68,
          v67,
          v86,
          v139);
        v67 = v157.m128i_u64[1];
        v70 = v157.m128i_i64[1] - v157.m128i_i64[0];
        v173.m128i_i64[1] = v157.m128i_i64[1] - v157.m128i_i64[0];
        goto LABEL_106;
      }
LABEL_173:
      if ( (*((_DWORD *)v3 + 85) != 1 || (v3[364] & 0x40) != 0) && (v141 || *(_QWORD *)(v155.m128i_i64[0] + 48)) )
      {
        if ( v142 || (v3[364] & 0x10) == 0 || (v13 = (unsigned __int64)"__LINKEDIT", strcmp(srca, "__LINKEDIT")) )
        {
          v13 = (unsigned __int64)v3;
          sub_224F0(a1, v3, v144, v148, v155.m128i_i64[0]);
          v94 = v165;
          if ( !v165 )
            goto LABEL_37;
LABEL_180:
          *(_QWORD *)&v166 = 0;
          qfree(v94, v13);
          goto LABEL_37;
        }
      }
      v94 = v165;
      if ( v165 )
        goto LABEL_180;
LABEL_37:
      ++v149;
      v145 += 72;
      if ( v149 == v146 )
        goto LABEL_241;
      v16 = *((_QWORD *)v3 + 35);
    }
    v48 = 1;
    if ( (v3[364] & 0x40) == 0 )
      v48 = (unsigned __int8)sub_21030(a1, v3, srca) ^ 1;
    v13 = (unsigned __int64)"AUTOHIDE DATABASE\nLoad segment '%s' (start 0x%08llX, size 0x%08llX)?";
    v49 = sub_19F30(
            v48,
            (unsigned int)"AUTOHIDE DATABASE\nLoad segment '%s' (start 0x%08llX, size 0x%08llX)?",
            (_DWORD)srca,
            *(_QWORD *)(v155.m128i_i64[0] + 24),
            *(_QWORD *)(v155.m128i_i64[0] + 48),
            v38,
            v139);
    if ( v49 < 0 )
      sub_1A260(
        0,
        (unsigned int)"AUTOHIDE DATABASE\nLoad segment '%s' (start 0x%08llX, size 0x%08llX)?",
        v50,
        (_DWORD)v36,
        v37,
        v38);
    if ( !v49 )
      goto LABEL_37;
LABEL_67:
    v142 = 1;
    goto LABEL_68;
  }
LABEL_241:
  v118 = *((_QWORD *)v3 + 19);
  if ( v118 )
  {
    *((_QWORD *)v3 + 20) = 0;
    qfree(v118, v13);
    *((_QWORD *)v3 + 19) = 0;
    *((_QWORD *)v3 + 21) = 0;
  }
  if ( (_QWORD)v163 )
  {
    v13 = (unsigned __int64)v3;
    sub_224F0(a1, v3, v144, &v162, v168);
  }
  v96 = 1;
LABEL_246:
  if ( v162 )
  {
    *(_QWORD *)&v163 = 0;
    qfree(v162, v13);
  }
  return v96;
}
