__int64 __fastcall sub_108C40(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        char a7,
        __int64 a8,
        __int64 *a9)
{
  unsigned __int8 v12; // si
  unsigned __int8 v13; // al
  signed __int64 v14; // rdi
  signed __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 *v23; // rsi
  const __m128i *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  _QWORD *m128i_i64; // r13
  unsigned __int64 v29; // r12
  __m128i v30; // xmm0
  unsigned __int64 v31; // r12
  void *v32; // rbp
  __int64 v33; // rdx
  __int64 j; // rcx
  _QWORD *v35; // rdi
  unsigned __int64 v36; // rsi
  const void **v37; // r14
  unsigned __int8 v38; // al
  unsigned int v39; // ecx
  unsigned int v41; // r12d
  int v42; // eax
  int v43; // r13d
  __int64 i; // rax
  __int64 v45; // rbp
  int v46; // ebx
  _DWORD *v47; // rax
  unsigned __int8 v48; // al
  __int64 v49; // rsi
  _QWORD *v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // r9
  __int64 v54; // r11
  _DWORD *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int32 v58; // ebx
  _DWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  void *v63; // rbx
  __int64 v64; // rax
  size_t v65; // rbp
  int v66; // eax
  __int64 v67; // r14
  __int64 *v68; // rax
  void *v69; // rbx
  __m128i v70; // xmm0
  _QWORD *v71; // rbx
  int v72; // esi
  int v73; // ecx
  __int64 v74; // r14
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rbp
  __int64 v82; // rax
  __int64 v83; // rbp
  __int64 v84; // r14
  __int8 v85; // si
  __int64 v86; // rax
  int v87; // esi
  __int64 v88; // rbp
  unsigned __int64 *v89; // r13
  unsigned int v90; // edx
  _QWORD *v91; // rax
  unsigned __int8 v92; // cl
  unsigned int v93; // edx
  _QWORD *v94; // r14
  __int64 v95; // rax
  unsigned __int8 v96; // dl
  _DWORD **v97; // rbp
  __int8 v98; // si
  __int64 v99; // rdx
  __int64 v100; // rdx
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // r10
  _DWORD *v103; // rdi
  __int64 v104; // rax
  int *v105; // rbp
  int *k; // r13
  __int64 v107; // r14
  int v108; // ebx
  _DWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // r8
  unsigned __int64 v112; // rax
  __int8 v113; // si
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned __int64 *v116; // [rsp+8h] [rbp-160h]
  _QWORD *v117; // [rsp+8h] [rbp-160h]
  __int64 v118; // [rsp+8h] [rbp-160h]
  int v119; // [rsp+8h] [rbp-160h]
  unsigned __int64 *v120; // [rsp+8h] [rbp-160h]
  _QWORD *v121; // [rsp+8h] [rbp-160h]
  __int64 v123; // [rsp+18h] [rbp-150h]
  _QWORD *v124; // [rsp+18h] [rbp-150h]
  _QWORD *v125; // [rsp+18h] [rbp-150h]
  int v126; // [rsp+18h] [rbp-150h]
  int v127; // [rsp+18h] [rbp-150h]
  __int64 v128; // [rsp+18h] [rbp-150h]
  __int64 v129; // [rsp+20h] [rbp-148h]
  __int64 v130; // [rsp+20h] [rbp-148h]
  __int8 v131; // [rsp+30h] [rbp-138h]
  __int64 v132; // [rsp+30h] [rbp-138h]
  __int64 v133; // [rsp+38h] [rbp-130h]
  int v134; // [rsp+44h] [rbp-124h]
  unsigned __int8 v135; // [rsp+44h] [rbp-124h]
  _QWORD *v136; // [rsp+48h] [rbp-120h]
  unsigned __int64 v137; // [rsp+48h] [rbp-120h]
  __int64 v138; // [rsp+50h] [rbp-118h]
  __int8 v139; // [rsp+50h] [rbp-118h]
  void *src; // [rsp+58h] [rbp-110h]
  _DWORD *v141; // [rsp+68h] [rbp-100h]
  __m128i v142; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v143; // [rsp+80h] [rbp-E8h]
  unsigned int v144; // [rsp+84h] [rbp-E4h]
  __int64 v145; // [rsp+88h] [rbp-E0h]
  int v146; // [rsp+90h] [rbp-D8h]
  char v147; // [rsp+96h] [rbp-D2h]
  char v148; // [rsp+97h] [rbp-D1h]
  _QWORD *v149; // [rsp+98h] [rbp-D0h]
  __int64 v150; // [rsp+A0h] [rbp-C8h]
  int v151; // [rsp+A8h] [rbp-C0h]
  int v152; // [rsp+ACh] [rbp-BCh]
  __int64 v153; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 v154; // [rsp+B8h] [rbp-B0h]
  void **v155; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+C8h] [rbp-A0h]
  __int64 v157; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v158; // [rsp+D8h] [rbp-90h]
  __int64 v159; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v160; // [rsp+F8h] [rbp-70h]
  __m128i v161; // [rsp+108h] [rbp-60h]
  unsigned __int64 v162; // [rsp+118h] [rbp-50h]
  char v163; // [rsp+120h] [rbp-48h]
  unsigned __int64 v164; // [rsp+128h] [rbp-40h]

  v142.m128i_i64[1] = a4;
  v149 = a5;
  v164 = __readfsqword(0x28u);
  v141 = *(_DWORD **)(a4 + 1504);
  if ( a1 != (__m128i *)(*a5 + 24LL * a1[1].m128i_i32[0]) )
  {
    if ( !under_debugger )
      sub_383060(50988);
    goto LABEL_202;
  }
  if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(a2 + 32) )
  {
    if ( !under_debugger )
      sub_383060(51891);
    goto LABEL_202;
  }
  sub_1045E0((unsigned __int64 *)a1, (__int64)v141);
  v12 = *(_BYTE *)(a2 + 32);
  v13 = *(_BYTE *)(a3 + 8);
  v131 = v12;
  if ( v12 < v13 || v13 < v12 )
LABEL_182:
    sub_101D50();
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)a3;
  v133 = v14;
  if ( v14 < *(_QWORD *)a3 )
  {
    v151 = -1;
  }
  else
  {
    if ( v14 > v15 )
    {
      v17 = v14 + *(int *)(a2 + 40);
      v18 = v15 + *(int *)(a3 + 12);
      v138 = v18;
      if ( v17 < v18 || v17 <= v18 )
      {
        v131 = *(_BYTE *)(a3 + 8);
        v133 = *(_QWORD *)a3;
        LOBYTE(v143) = v131;
        v151 = 1;
        goto LABEL_15;
      }
      v113 = v131;
      v133 = *(_QWORD *)a3;
      v131 = *(_BYTE *)(a3 + 8);
      LOBYTE(v143) = v113;
      v138 = v17;
      v151 = 1;
      goto LABEL_181;
    }
    v151 = 0;
  }
  v138 = *(_QWORD *)a3 + *(int *)(a3 + 12);
  v16 = v14 + *(int *)(a2 + 40);
  if ( *(_QWORD *)a3 < v14 )
  {
    if ( v138 < v16 )
    {
      v138 = v14 + *(int *)(a2 + 40);
      LOBYTE(v143) = v12;
      goto LABEL_15;
    }
  }
  else if ( v138 <= v16 )
  {
    if ( !under_debugger )
      sub_383060(51972);
    goto LABEL_202;
  }
  LOBYTE(v143) = v13;
LABEL_181:
  if ( (_BYTE)v143 != v131 )
    goto LABEL_182;
LABEL_15:
  v150 = v138 - v133;
  v134 = v138 - v133;
  if ( v131 == 1 )
  {
    if ( (a7 & 1) == 0 && (int)sub_1338F0(v141, 0, (unsigned int)v133, 0x7FFFFFFF, 0) < (int)v150
      || (unsigned __int8)sub_64A60((_QWORD *)(v142.m128i_i64[1] + 296), v133, v134)
      && !(unsigned __int8)sub_64A10((_QWORD *)(v142.m128i_i64[1] + 296), v133, v134) )
    {
      goto LABEL_56;
    }
    v66 = v141[17];
    if ( v66 > (int)v133 )
    {
      if ( v66 <= (int)v138 - 1 )
      {
        if ( !under_debugger )
          sub_383060(51962);
        goto LABEL_202;
      }
      v67 = (*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v141 + 184LL))(v141, (unsigned int)v133);
      v126 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v141 + 32LL))(v141, v67);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v141 + 264LL))(v141, (unsigned int)v67) )
      {
        if ( !v126
          || (int)v133 < (unsigned __int64)(int)v67
          || v126 + (__int64)(int)v67 - 1 < (unsigned __int64)((int)v133 + (__int64)(int)v150 - 1) )
        {
          goto LABEL_56;
        }
      }
      else
      {
        v41 = v67 + v126;
        if ( (int)v138 > (int)v67 + v126 )
        {
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v141 + 264LL))(v141, v41) )
              goto LABEL_56;
            v42 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v141 + 32LL))(v141, v41);
            if ( v42 <= 0 )
              break;
            v41 += v42;
            if ( (int)v138 <= (int)v41 )
              goto LABEL_100;
          }
          if ( !under_debugger )
            sub_383060(51963);
          goto LABEL_202;
        }
      }
    }
LABEL_100:
    v13 = *(_BYTE *)(a3 + 8);
  }
  if ( v13 == 5 )
  {
    v19 = *(_QWORD *)a3;
    v20 = *(unsigned int *)(a3 + 12);
    if ( *(int *)(v142.m128i_i64[1] + 116) > 0 )
    {
      v21 = *(_QWORD *)(v142.m128i_i64[1] + 136);
      if ( v21 != v19 && v21 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v21 )
        goto LABEL_56;
    }
    v22 = *(_QWORD *)(v142.m128i_i64[1] + 144);
    if ( v22 != v19 && v22 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v22 )
      goto LABEL_56;
    if ( (unsigned __int8)sub_228B40(v142.m128i_i64[1], v19, v20, 0) )
      goto LABEL_56;
  }
  v159 = 0;
  v163 = 1;
  v161.m128i_i64[0] = v133;
  v160 = 0;
  v161.m128i_i8[8] = v131;
  v162 = 0xFFFFFFFF00000001LL;
  v23 = &v159;
  v24 = (const __m128i *)sub_1041A0((unsigned __int64 *)a1, (__int64)&v159);
  v27 = (__int64 *)a1->m128i_i64[0];
  m128i_i64 = v24->m128i_i64;
  if ( (const __m128i *)a1->m128i_i64[0] != v24 )
  {
    v29 = (unsigned __int64)&v24[1].m128i_u64[1];
    if ( v24[3].m128i_i8[8] == v131 && v24[3].m128i_i64[0] == v133 )
      goto LABEL_38;
    if ( !v24[2].m128i_i64[0] )
    {
      v159 = 0;
      v160 = 0;
      v30 = _mm_loadu_si128(v24 + 3);
      v162 = 0xFFFFFFFF00000001LL;
      v163 = 1;
      v161 = v30;
      v23 = sub_102B40(v27, (__int64)&v159);
      if ( v27 != v23 )
        sub_107EB0((unsigned __int64 **)a1, v23);
      goto LABEL_32;
    }
LABEL_56:
    v155 = nullptr;
    v156 = 0;
    sub_32F770(a2 + 24, &v155);
    v159 = 0;
    v160.m128i_i64[0] = 0;
    sub_32F770(a3, &v159);
    sub_1EFA10(v141, a8, &v155, *(unsigned int *)(a2 + 40), &v159, *(unsigned int *)(a3 + 12));
    sub_106EE0(v142.m128i_i64[1], a2, (__int64)v149, a6);
    cleanup_argloc();
    cleanup_argloc();
    return 0;
  }
LABEL_32:
  v31 = *(_QWORD *)(a2 + 8);
  v32 = nullptr;
  v159 = 0;
  v161.m128i_i64[0] = v133;
  v160 = 0;
  v161.m128i_i8[8] = v131;
  v162 = *(_QWORD *)(a2 + 40);
  v163 = *(_BYTE *)(a2 + 48);
  if ( v31 )
  {
    v32 = (void *)qalloc_or_throw(4 * v31, (__int64)v23, v25, v26);
    memcpy(v32, *(const void **)a2, 4 * v31);
    if ( v159 )
    {
      v160.m128i_i64[0] = 0;
      qfree(v159);
    }
  }
  v159 = (__int64)v32;
  v155 = (void **)&v159;
  v160 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
  m128i_i64 = (_QWORD *)sub_1078B0(a1, (__int64)&v159, (__int64 **)&v155);
  if ( v159 )
  {
    v160.m128i_i64[0] = 0;
    qfree(v159);
  }
  if ( a9 )
    sub_64190(a9, a1[1].m128i_i32[0]);
  v29 = (unsigned __int64)(m128i_i64 + 3);
LABEL_38:
  v152 = *(_DWORD *)(v29 + 40);
  *(_DWORD *)(v29 + 40) = v150;
  v136 = sub_106CC0(m128i_i64);
  v35 = (_QWORD *)a1->m128i_i64[0];
  if ( v136 != (_QWORD *)a1->m128i_i64[0] )
  {
    v148 = 1;
    v146 = -1;
    v144 = 0;
    v147 = 0;
    v145 = -1;
    v142.m128i_i64[0] = 0;
    src = nullptr;
    while ( 1 )
    {
      v36 = (unsigned __int8)v143;
      v37 = (const void **)(v136 + 3);
      v38 = *((_BYTE *)v136 + 56);
      if ( v38 >= (unsigned __int8)v143 && ((unsigned __int8)v143 < v38 || v136[6] >= v138) )
        break;
      v43 = 0;
      for ( i = 0; (unsigned __int64)v43 < v136[4]; i = v43 )
      {
        v45 = *(_QWORD *)v29;
        v46 = *((_DWORD *)*v37 + i);
        v33 = *(_QWORD *)(v29 + 8);
        j = *(_QWORD *)v29 + 4 * v33;
        if ( *(_QWORD *)v29 == j )
          goto LABEL_73;
        v47 = *(_DWORD **)v29;
        while ( v46 != *v47 )
        {
          if ( (_DWORD *)j == ++v47 )
            goto LABEL_73;
        }
        if ( v47 == (_DWORD *)j )
        {
LABEL_73:
          v129 = *(_QWORD *)v29 + 4 * v33;
          v51 = *a6;
          v123 = *(_QWORD *)(v29 + 8);
          v159 = 0;
          HIDWORD(v162) = -1;
          v116 = (unsigned __int64 *)(v51 + 24LL * v46);
          v161.m128i_i64[0] = v133;
          v163 = 1;
          v161.m128i_i8[8] = v131;
          v160 = 0;
          LODWORD(v162) = v138 - v133;
          v52 = sub_1041A0(v116, (__int64)&v159);
          v53 = v52;
          if ( v52 != (_QWORD *)*v116 )
          {
            v54 = (__int64)(v52 + 3);
            if ( v52 != (_QWORD *)-24LL )
            {
              v55 = (_DWORD *)v129;
              v56 = v123 + 1;
              if ( *(_QWORD *)(v29 + 16) < (unsigned __int64)(v123 + 1) )
              {
                v124 = v52;
                v117 = v52 + 3;
                v60 = qvector_reserve(v29, v45, v56, 4);
                v61 = *(_QWORD *)(v29 + 8);
                v53 = v124;
                *(_QWORD *)v29 = v60;
                v54 = (__int64)v117;
                v55 = (_DWORD *)(v60 + 4 * v61);
              }
              *v55 = v46;
              ++*(_QWORD *)(v29 + 8);
              v57 = v53[3];
              j = *(_QWORD *)(v54 + 8);
              v58 = a1[1].m128i_i32[0];
              v33 = v57 + 4 * j;
              if ( v57 == v33 )
                goto LABEL_82;
              v59 = (_DWORD *)v53[3];
              while ( v58 != *v59 )
              {
                if ( (_DWORD *)v33 == ++v59 )
                  goto LABEL_82;
              }
              if ( (_DWORD *)v33 == v59 )
              {
LABEL_82:
                if ( *(_QWORD *)(v54 + 16) < (unsigned __int64)(j + 1) )
                {
                  v125 = v53;
                  v118 = v54;
                  v64 = qvector_reserve(v54, v57, j + 1, 4);
                  v54 = v118;
                  v125[3] = v64;
                  v33 = v64 + 4LL * *(_QWORD *)(v118 + 8);
                }
                *(_DWORD *)v33 = v58;
                ++*(_QWORD *)(v54 + 8);
              }
            }
          }
        }
        ++v43;
      }
      if ( (v136[9] & 4) != 0 )
        *(_BYTE *)(v29 + 48) |= 4u;
      v48 = *((_BYTE *)v136 + 56);
      v49 = (unsigned __int8)v143;
      if ( v48 >= (unsigned __int8)v143 )
      {
        if ( (unsigned __int8)v143 < v48 || (v49 = v138, v136[6] + *((int *)v136 + 16) > v138) )
        {
          v62 = v136[4];
          v63 = nullptr;
          v142.m128i_i64[0] = v62;
          if ( v62 )
          {
            v65 = 4 * v62;
            v63 = (void *)qalloc_or_throw(4 * v62, v49, v33, j);
            memcpy(v63, *v37, v65);
          }
          if ( src )
            qfree((__int64)src);
          src = v63;
          v145 = v136[6];
          v147 = *((_BYTE *)v136 + 56);
          v144 = *((_DWORD *)v136 + 16);
          v146 = *((_DWORD *)v136 + 17);
          v148 = *((_BYTE *)v136 + 72);
        }
      }
      v36 = (unsigned __int64)v136;
      v50 = sub_106CC0(v136);
      sub_107EB0((unsigned __int64 **)a1, v136);
      if ( a9 )
      {
        v36 = a1[1].m128i_u32[0];
        sub_64190(a9, v36);
      }
      v35 = (_QWORD *)a1->m128i_i64[0];
      if ( (_QWORD *)a1->m128i_i64[0] == v50 )
        break;
      v136 = v50;
    }
    if ( v151 != 1 )
    {
LABEL_44:
      v135 = 0;
      if ( !v147 )
        goto LABEL_45;
      v69 = nullptr;
      v159 = 0;
      v161.m128i_i64[0] = v138;
      v160 = 0;
      v161.m128i_i8[8] = v143;
      v162 = __PAIR64__(v146, v144);
      v163 = v148;
      if ( v142.m128i_i64[0] )
      {
        v69 = (void *)qalloc_or_throw(4 * v142.m128i_i64[0], v36, v33, j);
        memcpy(v69, src, 4 * v142.m128i_i64[0]);
        if ( v159 )
        {
          v160.m128i_i64[0] = 0;
          qfree(v159);
        }
      }
      v70 = _mm_loadl_epi64(&v142);
      v159 = (__int64)v69;
      v155 = (void **)&v159;
      v160 = _mm_unpacklo_epi64(v70, v70);
      v137 = sub_1078B0(a1, (__int64)&v159, (__int64 **)&v155);
      if ( v159 )
      {
        v160.m128i_i64[0] = 0;
        qfree(v159);
      }
      v71 = (_QWORD *)(v137 + 24);
      if ( v147 != (_BYTE)v143 )
        sub_101D50();
      v72 = v145;
      *(_DWORD *)(v137 + 68) = -1;
      v73 = *(_DWORD *)(v137 + 64);
      *(_BYTE *)(v137 + 72) &= ~2u;
      v74 = v142.m128i_i64[1];
      v75 = (unsigned int)(v73 - (v138 - v72));
      *(_DWORD *)(v137 + 64) = v75;
      v76 = *(_QWORD *)(v74 + 1440);
      v155 = nullptr;
      v158 = 0;
      v156 = 0;
      v157 = 0;
      sub_32F540(v137 + 48, v76, &v155, v75);
      v77 = a1[1].m128i_u32[0];
      if ( (unsigned int)v77 >= *(_DWORD *)(v74 + 64) )
        sub_101D70();
      v78 = *(_QWORD *)(*(_QWORD *)(v142.m128i_i64[1] + 528) + 8 * v77);
      v79 = (_QWORD *)(v78 + 240);
      v80 = (_QWORD *)(v78 + 160);
      if ( (a7 & 2) == 0 )
        v79 = v80;
      v81 = v79;
      if ( (unsigned __int8)sub_64780(&v155, v79) )
      {
        v82 = *(_QWORD *)(v137 + 32);
      }
      else
      {
        v135 = sub_318470(&v157, v81 + 2);
        v82 = *(_QWORD *)(v137 + 32);
        v87 = v82 - 1;
        v119 = v82 - 1;
        if ( !v135 )
        {
          v132 = 4LL * (unsigned int)v87;
          if ( v87 >= 0 )
          {
            do
            {
              v88 = *(_QWORD *)(v137 + 48);
              v127 = *(_DWORD *)(*v71 + v132);
              v89 = (unsigned __int64 *)(*a6 + 24LL * v127);
              v90 = *(_DWORD *)(v137 + 64);
              v161.m128i_i8[8] = *(_BYTE *)(v137 + 56);
              v139 = v161.m128i_i8[8];
              v159 = 0;
              v162 = v90 | 0xFFFFFFFF00000000LL;
              v143 = v90;
              v161.m128i_i64[0] = v88;
              v163 = 1;
              v160 = 0;
              v91 = sub_1041A0(v89, (__int64)&v159);
              v92 = v139;
              v93 = v143;
              v94 = v91;
              if ( (_QWORD *)*v89 != v91 )
              {
                while ( 1 )
                {
                  v95 = v88 + (int)v93;
                  v96 = *((_BYTE *)v94 + 56);
                  v97 = (_DWORD **)(v94 + 3);
                  if ( v96 >= v92 && (v92 < v96 || v95 <= v94[6]) )
                    break;
                  if ( *(_BYTE *)(v29 + 32) != *((_BYTE *)v94 + 56)
                    || !*(_DWORD *)(v29 + 40)
                    || !*((_DWORD *)v94 + 16)
                    || (v101 = *(_QWORD *)(v29 + 24), v102 = v94[6], *(int *)(v29 + 40) + v101 - 1 < v102)
                    || *((int *)v94 + 16) + v102 - 1 < v101 )
                  {
                    v98 = *((_BYTE *)v94 + 56);
                    v99 = *((int *)v94 + 16);
                    v154 = v92;
                    v100 = v94[6] + v99;
                    v153 = v95;
                    v159 = v100;
                    v160.m128i_i8[0] = v98;
                    if ( !(unsigned __int8)sub_104440((unsigned __int64 *)a1, &v153, &v159, v127) )
                    {
                      v103 = *v97;
                      v104 = v94[3] + 4LL * v94[4];
                      if ( *v97 != (_DWORD *)v104 )
                      {
                        while ( a1[1].m128i_i32[0] != *v103 )
                        {
                          if ( (_DWORD *)v104 == ++v103 )
                            goto LABEL_146;
                        }
                        if ( (_DWORD *)v104 != v103 )
                        {
                          memmove(v103, v103 + 1, v104 - (_QWORD)v103 - 4);
                          --v94[4];
                        }
                      }
                    }
                  }
LABEL_146:
                  v94 = sub_106CC0(v94);
                  if ( v94 == (_QWORD *)*v89 )
                    break;
                  v93 = *(_DWORD *)(v137 + 64);
                  v88 = *(_QWORD *)(v137 + 48);
                  v92 = *(_BYTE *)(v137 + 56);
                }
              }
              --v119;
              v132 -= 4;
            }
            while ( v119 != -1 );
          }
          sub_107EB0((unsigned __int64 **)a1, (__int64 *)v137);
          goto LABEL_131;
        }
      }
      v83 = (unsigned int)(v82 - 1);
      v84 = 4 * v83;
      if ( (int)v83 >= 0 )
      {
        do
        {
          v85 = *(_BYTE *)(v137 + 56);
          v86 = *(int *)(*v71 + v84);
          v159 = *(_QWORD *)(v137 + 48) + *(int *)(v137 + 64);
          v160.m128i_i8[0] = v85;
          if ( !(unsigned __int8)sub_104440(
                                   (unsigned __int64 *)(*a6 + 24 * v86),
                                   (__int64 *)(v137 + 48),
                                   &v159,
                                   a1[1].m128i_i32[0]) )
          {
            memmove(
              (void *)(v84 + *(_QWORD *)(v137 + 24)),
              (const void *)(v84 + *(_QWORD *)(v137 + 24) + 4),
              4LL * *(_QWORD *)(v137 + 32) - 4 - v84);
            --*(_QWORD *)(v137 + 32);
          }
          LODWORD(v83) = v83 - 1;
          v84 -= 4;
        }
        while ( (_DWORD)v83 != -1 );
      }
      v135 = sub_1048A0(v142.m128i_i64[1], v149, a6, a1[1].m128i_u32[0], (__int64)v71, 0);
LABEL_131:
      sub_93B40((__int64 *)&v155);
      goto LABEL_45;
    }
    goto LABEL_104;
  }
  if ( v151 == 1 )
  {
    v148 = 1;
    v144 = 0;
    v145 = -1;
    v147 = 0;
    v146 = -1;
    src = nullptr;
    v142.m128i_i64[0] = 0;
LABEL_104:
    v36 = (unsigned __int64)&v159;
    v159 = 0;
    v163 = 1;
    v161.m128i_i64[0] = v133;
    v160 = 0;
    v161.m128i_i8[8] = v131;
    v162 = 0xFFFFFFFF00000001LL;
    v33 = (__int64)sub_102B40(v35, (__int64)&v159);
    if ( (_QWORD *)v33 != v35 )
    {
      if ( v35 )
      {
        if ( !a1->m128i_i64[1] )
        {
LABEL_109:
          if ( (*(_QWORD *)v33 & 2) != 0 )
          {
            v68 = *(__int64 **)(v33 + 16);
          }
          else
          {
            j = *(_QWORD *)(v33 + 8);
            if ( (*(_BYTE *)j & 2) != 0 )
            {
              v68 = (__int64 *)(*(_QWORD *)v33 & 0xFFFFFFFFFFFFFFFCLL);
              for ( j = *v68; (j & 2) == 0; v68 = (__int64 *)v36 )
              {
                if ( v33 != v68[1] )
                  break;
                v33 = (__int64)v68;
                v36 = j & 0xFFFFFFFFFFFFFFFCLL;
                j = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              do
              {
                v68 = (__int64 *)j;
                j = *(_QWORD *)(j + 16);
              }
              while ( (*(_BYTE *)j & 2) == 0 );
            }
          }
          v105 = (int *)v68[3];
          for ( k = &v105[v68[4]]; k != v105; ++v105 )
          {
            v107 = *(_QWORD *)v29;
            j = *(_QWORD *)(v29 + 8);
            v108 = *v105;
            v33 = *(_QWORD *)v29 + 4 * j;
            if ( *(_QWORD *)v29 == v33 )
              goto LABEL_169;
            v109 = *(_DWORD **)v29;
            while ( v108 != *v109 )
            {
              if ( (_DWORD *)v33 == ++v109 )
                goto LABEL_169;
            }
            if ( (_DWORD *)v33 == v109 )
            {
LABEL_169:
              v130 = *(_QWORD *)(v29 + 8);
              v128 = *(_QWORD *)v29 + 4 * j;
              v36 = v29;
              v120 = (unsigned __int64 *)(*a6 + 24LL * v108);
              v110 = sub_1041A0(v120, v29);
              if ( v110 != (_QWORD *)*v120 )
              {
                v111 = v110 + 3;
                if ( v110 != (_QWORD *)-24LL )
                {
                  v36 = v110[3];
                  v112 = v36 + 4LL * v110[4];
                  if ( v36 != v112 )
                  {
                    v33 = v128;
                    j = v130;
                    while ( a1[1].m128i_i32[0] != *(_DWORD *)v36 )
                    {
                      v36 += 4LL;
                      if ( v112 == v36 )
                        goto LABEL_167;
                    }
                    if ( v36 != v112 )
                    {
                      if ( *(_QWORD *)(v29 + 16) < (unsigned __int64)(v130 + 1) )
                      {
                        v36 = v107;
                        v121 = v111;
                        v114 = qvector_reserve(v29, v107, v130 + 1, 4);
                        v115 = *(_QWORD *)(v29 + 8);
                        v111 = v121;
                        *(_QWORD *)v29 = v114;
                        v33 = v114 + 4 * v115;
                      }
                      *(_DWORD *)v33 = v108;
                      ++*(_QWORD *)(v29 + 8);
                      if ( (v111[6] & 4) != 0 )
                        *(_BYTE *)(v29 + 48) |= 4u;
                    }
                  }
                }
              }
            }
LABEL_167:
            ;
          }
          goto LABEL_44;
        }
        v35 = (_QWORD *)v35[1];
      }
      if ( (_QWORD *)v33 == v35 )
        goto LABEL_44;
      goto LABEL_109;
    }
    if ( !under_debugger )
      sub_383060(52035);
LABEL_202:
    BUG();
  }
  src = nullptr;
  v135 = 0;
LABEL_45:
  v39 = a1[1].m128i_u32[0];
  if ( v39 && v152 < (int)v150 )
    v135 |= sub_1048A0(v142.m128i_i64[1], v149, a6, v39, v29, v152);
  sub_106F70(v142.m128i_i64[1], v29, (__int64)v149, a6);
  sub_1045E0((unsigned __int64 *)a1, (__int64)v141);
  if ( src )
    qfree((__int64)src);
  return (unsigned int)v135 + 1;
}
