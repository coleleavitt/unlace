__int64 __fastcall sub_102580(
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
  const __m128i *v23; // rax
  __int64 *v24; // rdi
  _QWORD *m128i_i64; // r13
  unsigned __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 *v28; // rsi
  unsigned __int64 v29; // r12
  void *v30; // rbp
  _QWORD *v31; // rdi
  const void **v32; // r14
  unsigned __int8 v33; // al
  unsigned int v34; // ecx
  unsigned int v36; // r12d
  int v37; // eax
  int v38; // r13d
  __int64 i; // rax
  _DWORD *v40; // rbp
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  unsigned __int8 v45; // al
  _QWORD *v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // r9
  _QWORD *v50; // r11
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int32 *v53; // rsi
  __int64 v54; // rcx
  __int32 v55; // ebx
  __int32 *v56; // rdx
  __int32 *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  void *v61; // rbx
  __int64 v62; // rax
  size_t v63; // rbp
  int v64; // eax
  __int64 v65; // r14
  _QWORD *v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  __int64 j; // rcx
  unsigned __int64 v70; // rsi
  void *v71; // rbx
  __m128i v72; // xmm0
  _QWORD *v73; // rbx
  int v74; // esi
  int v75; // ecx
  __int64 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rdx
  _QWORD *v82; // rax
  _QWORD *v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rbp
  __int64 v86; // r14
  __int8 v87; // si
  __int64 v88; // rax
  int v89; // esi
  __int64 v90; // rbp
  unsigned __int64 *v91; // r13
  unsigned int v92; // edx
  _QWORD *v93; // rax
  unsigned __int8 v94; // cl
  unsigned int v95; // edx
  _QWORD *v96; // r14
  __int64 v97; // rax
  unsigned __int8 v98; // dl
  _DWORD **v99; // rbp
  __int8 v100; // si
  __int64 v101; // rdx
  __int64 v102; // rdx
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // r10
  _DWORD *v105; // rdi
  __int64 v106; // rax
  int *v107; // rbp
  int *k; // r13
  _DWORD *v109; // r14
  int v110; // ebx
  __int64 v111; // rdx
  _DWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // r8
  _DWORD *v115; // rsi
  _DWORD *v116; // rax
  _DWORD *v117; // rdx
  __int8 v118; // si
  __int64 v119; // rax
  __int64 v120; // rdx
  unsigned __int64 *v121; // [rsp+8h] [rbp-160h]
  _QWORD *v122; // [rsp+8h] [rbp-160h]
  _QWORD *v123; // [rsp+8h] [rbp-160h]
  int v124; // [rsp+8h] [rbp-160h]
  unsigned __int64 *v125; // [rsp+8h] [rbp-160h]
  _QWORD *v126; // [rsp+8h] [rbp-160h]
  __int64 v128; // [rsp+18h] [rbp-150h]
  _QWORD *v129; // [rsp+18h] [rbp-150h]
  _QWORD *v130; // [rsp+18h] [rbp-150h]
  int v131; // [rsp+18h] [rbp-150h]
  int v132; // [rsp+18h] [rbp-150h]
  __int64 v133; // [rsp+18h] [rbp-150h]
  __int64 v134; // [rsp+20h] [rbp-148h]
  __int64 v135; // [rsp+20h] [rbp-148h]
  __int8 v136; // [rsp+30h] [rbp-138h]
  __int64 v137; // [rsp+30h] [rbp-138h]
  __int64 v138; // [rsp+38h] [rbp-130h]
  int v139; // [rsp+44h] [rbp-124h]
  unsigned __int8 v140; // [rsp+44h] [rbp-124h]
  _QWORD *v141; // [rsp+48h] [rbp-120h]
  unsigned __int64 v142; // [rsp+48h] [rbp-120h]
  __int64 v143; // [rsp+50h] [rbp-118h]
  __int8 v144; // [rsp+50h] [rbp-118h]
  void *src; // [rsp+58h] [rbp-110h]
  _DWORD *v146; // [rsp+68h] [rbp-100h]
  __m128i v147; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v148; // [rsp+80h] [rbp-E8h]
  unsigned int v149; // [rsp+84h] [rbp-E4h]
  __int64 v150; // [rsp+88h] [rbp-E0h]
  int v151; // [rsp+90h] [rbp-D8h]
  char v152; // [rsp+96h] [rbp-D2h]
  char v153; // [rsp+97h] [rbp-D1h]
  _QWORD *v154; // [rsp+98h] [rbp-D0h]
  __int64 v155; // [rsp+A0h] [rbp-C8h]
  int v156; // [rsp+A8h] [rbp-C0h]
  int v157; // [rsp+ACh] [rbp-BCh]
  __int64 v158; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int8 v159; // [rsp+B8h] [rbp-B0h]
  void **v160; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v161; // [rsp+C8h] [rbp-A0h]
  __int64 v162; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v163; // [rsp+D8h] [rbp-90h]
  __int64 v164; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v165; // [rsp+F8h] [rbp-70h]
  __m128i v166; // [rsp+108h] [rbp-60h]
  unsigned __int64 v167; // [rsp+118h] [rbp-50h]
  char v168; // [rsp+120h] [rbp-48h]
  unsigned __int64 v169; // [rsp+128h] [rbp-40h]

  v147.m128i_i64[1] = a4;
  v154 = a5;
  v169 = __readfsqword(0x28u);
  v146 = *(_DWORD **)(a4 + 1504);
  if ( a1 != (__m128i *)(*a5 + 24LL * a1[1].m128i_i32[0]) )
  {
    if ( !under_debugger )
      sub_37B760(50988);
    goto LABEL_202;
  }
  if ( *(_BYTE *)(a3 + 8) != *(_BYTE *)(a2 + 32) )
  {
    if ( !under_debugger )
      sub_37B760(51891);
    goto LABEL_202;
  }
  sub_FDF20((unsigned __int64 *)a1, (__int64)v146);
  v12 = *(_BYTE *)(a2 + 32);
  v13 = *(_BYTE *)(a3 + 8);
  v136 = v12;
  if ( v12 < v13 || v13 < v12 )
LABEL_182:
    sub_FB690();
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)a3;
  v138 = v14;
  if ( v14 < *(_QWORD *)a3 )
  {
    v156 = -1;
  }
  else
  {
    if ( v14 > v15 )
    {
      v17 = v14 + *(int *)(a2 + 40);
      v18 = v15 + *(int *)(a3 + 12);
      v143 = v18;
      if ( v17 < v18 || v17 <= v18 )
      {
        v136 = *(_BYTE *)(a3 + 8);
        v138 = *(_QWORD *)a3;
        LOBYTE(v148) = v136;
        v156 = 1;
        goto LABEL_15;
      }
      v118 = v136;
      v138 = *(_QWORD *)a3;
      v136 = *(_BYTE *)(a3 + 8);
      LOBYTE(v148) = v118;
      v143 = v17;
      v156 = 1;
      goto LABEL_181;
    }
    v156 = 0;
  }
  v143 = *(_QWORD *)a3 + *(int *)(a3 + 12);
  v16 = v14 + *(int *)(a2 + 40);
  if ( *(_QWORD *)a3 < v14 )
  {
    if ( v143 < v16 )
    {
      v143 = v14 + *(int *)(a2 + 40);
      LOBYTE(v148) = v12;
      goto LABEL_15;
    }
  }
  else if ( v143 <= v16 )
  {
    if ( !under_debugger )
      sub_37B760(51972);
    goto LABEL_202;
  }
  LOBYTE(v148) = v13;
LABEL_181:
  if ( (_BYTE)v148 != v136 )
    goto LABEL_182;
LABEL_15:
  v155 = v143 - v138;
  v139 = v143 - v138;
  if ( v136 == 1 )
  {
    if ( (a7 & 1) == 0 && (int)sub_12D230(v146, 0, (unsigned int)v138, 0x7FFFFFFF, 0) < (int)v155
      || (unsigned __int8)sub_5E4E0((_QWORD *)(v147.m128i_i64[1] + 296), v138, v139)
      && !(unsigned __int8)sub_5E490((_QWORD *)(v147.m128i_i64[1] + 296), v138, v139) )
    {
      goto LABEL_56;
    }
    v64 = v146[17];
    if ( v64 > (int)v138 )
    {
      if ( v64 <= (int)v143 - 1 )
      {
        if ( !under_debugger )
          sub_37B760(51962);
        goto LABEL_202;
      }
      v65 = (*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v146 + 184LL))(v146, (unsigned int)v138);
      v131 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v146 + 32LL))(v146, v65);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v146 + 264LL))(v146, (unsigned int)v65) )
      {
        if ( !v131
          || (int)v138 < (unsigned __int64)(int)v65
          || v131 + (__int64)(int)v65 - 1 < (unsigned __int64)((int)v138 + (__int64)(int)v155 - 1) )
        {
          goto LABEL_56;
        }
      }
      else
      {
        v36 = v65 + v131;
        if ( (int)v143 > (int)v65 + v131 )
        {
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v146 + 264LL))(v146, v36) )
              goto LABEL_56;
            v37 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v146 + 32LL))(v146, v36);
            if ( v37 <= 0 )
              break;
            v36 += v37;
            if ( (int)v143 <= (int)v36 )
              goto LABEL_100;
          }
          if ( !under_debugger )
            sub_37B760(51963);
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
    if ( *(int *)(v147.m128i_i64[1] + 116) > 0 )
    {
      v21 = *(_QWORD *)(v147.m128i_i64[1] + 136);
      if ( v21 != v19 && v21 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v21 )
        goto LABEL_56;
    }
    v22 = *(_QWORD *)(v147.m128i_i64[1] + 144);
    if ( v22 != v19 && v22 >= v19 && (_DWORD)v20 && (int)v20 + v19 - 1 >= v22 )
      goto LABEL_56;
    if ( (unsigned __int8)sub_2217C0(v147.m128i_i64[1], v19, v20, 0) )
      goto LABEL_56;
  }
  v164 = 0;
  v168 = 1;
  v166.m128i_i64[0] = v138;
  v165 = 0;
  v166.m128i_i8[8] = v136;
  v167 = 0xFFFFFFFF00000001LL;
  v23 = (const __m128i *)sub_FDAE0((unsigned __int64 *)a1, (__int64)&v164);
  v24 = (__int64 *)a1->m128i_i64[0];
  m128i_i64 = v23->m128i_i64;
  if ( (const __m128i *)a1->m128i_i64[0] != v23 )
  {
    v26 = (unsigned __int64)&v23[1].m128i_u64[1];
    if ( v23[3].m128i_i8[8] == v136 && v23[3].m128i_i64[0] == v138 )
      goto LABEL_38;
    if ( !v23[2].m128i_i64[0] )
    {
      v164 = 0;
      v165 = 0;
      v27 = _mm_loadu_si128(v23 + 3);
      v167 = 0xFFFFFFFF00000001LL;
      v168 = 1;
      v166 = v27;
      v28 = sub_FC480(v24, (__int64)&v164);
      if ( v24 != v28 )
        sub_1017F0((unsigned __int64 **)a1, v28);
      goto LABEL_32;
    }
LABEL_56:
    v160 = nullptr;
    v161 = 0;
    sub_328120(a2 + 24, &v160);
    v164 = 0;
    v165.m128i_i64[0] = 0;
    sub_328120(a3, &v164);
    sub_1E8690(v146, a8, &v160, *(unsigned int *)(a2 + 40), &v164, *(unsigned int *)(a3 + 12));
    sub_100820(v147.m128i_i64[1], a2, (__int64)v154, a6);
    cleanup_argloc(&v164);
    cleanup_argloc(&v160);
    return 0;
  }
LABEL_32:
  v29 = *(_QWORD *)(a2 + 8);
  v30 = nullptr;
  v164 = 0;
  v166.m128i_i64[0] = v138;
  v165 = 0;
  v166.m128i_i8[8] = v136;
  v167 = *(_QWORD *)(a2 + 40);
  v168 = *(_BYTE *)(a2 + 48);
  if ( v29 )
  {
    v30 = (void *)qalloc_or_throw(4 * v29);
    memcpy(v30, *(const void **)a2, 4 * v29);
    if ( v164 )
    {
      v165.m128i_i64[0] = 0;
      qfree(v164);
    }
  }
  v164 = (__int64)v30;
  v160 = (void **)&v164;
  v165 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
  m128i_i64 = (_QWORD *)sub_1011F0(a1, (__int64)&v164, (__int64 **)&v160);
  if ( v164 )
  {
    v165.m128i_i64[0] = 0;
    qfree(v164);
  }
  if ( a9 )
    sub_5DC10(a9, a1[1].m128i_i32[0]);
  v26 = (unsigned __int64)(m128i_i64 + 3);
LABEL_38:
  v157 = *(_DWORD *)(v26 + 40);
  *(_DWORD *)(v26 + 40) = v155;
  v141 = sub_100600(m128i_i64);
  v31 = (_QWORD *)a1->m128i_i64[0];
  if ( v141 != (_QWORD *)a1->m128i_i64[0] )
  {
    v153 = 1;
    v151 = -1;
    v149 = 0;
    v152 = 0;
    v150 = -1;
    v147.m128i_i64[0] = 0;
    src = nullptr;
    while ( 1 )
    {
      v32 = (const void **)(v141 + 3);
      v33 = *((_BYTE *)v141 + 56);
      if ( v33 >= (unsigned __int8)v148 && ((unsigned __int8)v148 < v33 || v141[6] >= v143) )
        break;
      v38 = 0;
      for ( i = 0; (unsigned __int64)v38 < v141[4]; i = v38 )
      {
        v40 = *(_DWORD **)v26;
        v41 = *((_DWORD *)*v32 + i);
        v42 = *(_QWORD *)(v26 + 8);
        v43 = *(_QWORD *)v26 + 4 * v42;
        if ( *(_QWORD *)v26 == v43 )
          goto LABEL_73;
        v44 = *(_DWORD **)v26;
        while ( v41 != *v44 )
        {
          if ( (_DWORD *)v43 == ++v44 )
            goto LABEL_73;
        }
        if ( v44 == (_DWORD *)v43 )
        {
LABEL_73:
          v134 = *(_QWORD *)v26 + 4 * v42;
          v47 = *a6;
          v128 = *(_QWORD *)(v26 + 8);
          v164 = 0;
          HIDWORD(v167) = -1;
          v121 = (unsigned __int64 *)(v47 + 24LL * v41);
          v166.m128i_i64[0] = v138;
          v168 = 1;
          v166.m128i_i8[8] = v136;
          v165 = 0;
          LODWORD(v167) = v143 - v138;
          v48 = sub_FDAE0(v121, (__int64)&v164);
          v49 = v48;
          if ( v48 != (_QWORD *)*v121 )
          {
            v50 = v48 + 3;
            if ( v48 != (_QWORD *)-24LL )
            {
              v51 = (_DWORD *)v134;
              v52 = v128 + 1;
              if ( *(_QWORD *)(v26 + 16) < (unsigned __int64)(v128 + 1) )
              {
                v129 = v48;
                v122 = v48 + 3;
                v58 = qvector_reserve(v26, v40, v52, 4);
                v59 = *(_QWORD *)(v26 + 8);
                v49 = v129;
                *(_QWORD *)v26 = v58;
                v50 = v122;
                v51 = (_DWORD *)(v58 + 4 * v59);
              }
              *v51 = v41;
              ++*(_QWORD *)(v26 + 8);
              v53 = (__int32 *)v49[3];
              v54 = v50[1];
              v55 = a1[1].m128i_i32[0];
              v56 = &v53[v54];
              if ( v53 == v56 )
                goto LABEL_82;
              v57 = (__int32 *)v49[3];
              while ( v55 != *v57 )
              {
                if ( v56 == ++v57 )
                  goto LABEL_82;
              }
              if ( v56 == v57 )
              {
LABEL_82:
                if ( v50[2] < (unsigned __int64)(v54 + 1) )
                {
                  v130 = v49;
                  v123 = v50;
                  v62 = qvector_reserve(v50, v53, v54 + 1, 4);
                  v50 = v123;
                  v130[3] = v62;
                  v56 = (__int32 *)(v62 + 4LL * v123[1]);
                }
                *v56 = v55;
                ++v50[1];
              }
            }
          }
        }
        ++v38;
      }
      if ( (v141[9] & 4) != 0 )
        *(_BYTE *)(v26 + 48) |= 4u;
      v45 = *((_BYTE *)v141 + 56);
      if ( v45 >= (unsigned __int8)v148 && ((unsigned __int8)v148 < v45 || v141[6] + *((int *)v141 + 16) > v143) )
      {
        v60 = v141[4];
        v61 = nullptr;
        v147.m128i_i64[0] = v60;
        if ( v60 )
        {
          v63 = 4 * v60;
          v61 = (void *)qalloc_or_throw(4 * v60);
          memcpy(v61, *v32, v63);
        }
        if ( src )
          qfree(src);
        src = v61;
        v150 = v141[6];
        v152 = *((_BYTE *)v141 + 56);
        v149 = *((_DWORD *)v141 + 16);
        v151 = *((_DWORD *)v141 + 17);
        v153 = *((_BYTE *)v141 + 72);
      }
      v46 = sub_100600(v141);
      sub_1017F0((unsigned __int64 **)a1, v141);
      if ( a9 )
        sub_5DC10(a9, a1[1].m128i_i32[0]);
      v31 = (_QWORD *)a1->m128i_i64[0];
      if ( (_QWORD *)a1->m128i_i64[0] == v46 )
        break;
      v141 = v46;
    }
    if ( v156 != 1 )
    {
LABEL_44:
      v140 = 0;
      if ( !v152 )
        goto LABEL_45;
      v71 = nullptr;
      v164 = 0;
      v166.m128i_i64[0] = v143;
      v165 = 0;
      v166.m128i_i8[8] = v148;
      v167 = __PAIR64__(v151, v149);
      v168 = v153;
      if ( v147.m128i_i64[0] )
      {
        v71 = (void *)qalloc_or_throw(4 * v147.m128i_i64[0]);
        memcpy(v71, src, 4 * v147.m128i_i64[0]);
        if ( v164 )
        {
          v165.m128i_i64[0] = 0;
          qfree(v164);
        }
      }
      v72 = _mm_loadl_epi64(&v147);
      v164 = (__int64)v71;
      v160 = (void **)&v164;
      v165 = _mm_unpacklo_epi64(v72, v72);
      v142 = sub_1011F0(a1, (__int64)&v164, (__int64 **)&v160);
      if ( v164 )
      {
        v165.m128i_i64[0] = 0;
        qfree(v164);
      }
      v73 = (_QWORD *)(v142 + 24);
      if ( v152 != (_BYTE)v148 )
        sub_FB690();
      v74 = v150;
      *(_DWORD *)(v142 + 68) = -1;
      v75 = *(_DWORD *)(v142 + 64);
      *(_BYTE *)(v142 + 72) &= ~2u;
      v76 = v147.m128i_i64[1];
      v77 = (unsigned int)(v75 - (v143 - v74));
      *(_DWORD *)(v142 + 64) = v77;
      v78 = *(_QWORD *)(v76 + 1440);
      v160 = nullptr;
      v163 = 0;
      v161 = 0;
      v162 = 0;
      sub_327EF0(v142 + 48, v78, &v160, v77);
      v79 = a1[1].m128i_u32[0];
      if ( (unsigned int)v79 >= *(_DWORD *)(v76 + 64) )
        sub_FB6B0();
      v80 = *(_QWORD *)(*(_QWORD *)(v147.m128i_i64[1] + 528) + 8 * v79);
      v81 = (_QWORD *)(v80 + 240);
      v82 = (_QWORD *)(v80 + 160);
      if ( (a7 & 2) == 0 )
        v81 = v82;
      v83 = v81;
      if ( (unsigned __int8)sub_5E200(&v160, v81) )
      {
        v84 = *(_QWORD *)(v142 + 32);
      }
      else
      {
        v140 = sub_3110F0(&v162, v83 + 2);
        v84 = *(_QWORD *)(v142 + 32);
        v89 = v84 - 1;
        v124 = v84 - 1;
        if ( !v140 )
        {
          v137 = 4LL * (unsigned int)v89;
          if ( v89 >= 0 )
          {
            do
            {
              v90 = *(_QWORD *)(v142 + 48);
              v132 = *(_DWORD *)(*v73 + v137);
              v91 = (unsigned __int64 *)(*a6 + 24LL * v132);
              v92 = *(_DWORD *)(v142 + 64);
              v166.m128i_i8[8] = *(_BYTE *)(v142 + 56);
              v144 = v166.m128i_i8[8];
              v164 = 0;
              v167 = v92 | 0xFFFFFFFF00000000LL;
              v148 = v92;
              v166.m128i_i64[0] = v90;
              v168 = 1;
              v165 = 0;
              v93 = sub_FDAE0(v91, (__int64)&v164);
              v94 = v144;
              v95 = v148;
              v96 = v93;
              if ( (_QWORD *)*v91 != v93 )
              {
                while ( 1 )
                {
                  v97 = v90 + (int)v95;
                  v98 = *((_BYTE *)v96 + 56);
                  v99 = (_DWORD **)(v96 + 3);
                  if ( v98 >= v94 && (v94 < v98 || v97 <= v96[6]) )
                    break;
                  if ( *(_BYTE *)(v26 + 32) != *((_BYTE *)v96 + 56)
                    || !*(_DWORD *)(v26 + 40)
                    || !*((_DWORD *)v96 + 16)
                    || (v103 = *(_QWORD *)(v26 + 24), v104 = v96[6], *(int *)(v26 + 40) + v103 - 1 < v104)
                    || *((int *)v96 + 16) + v104 - 1 < v103 )
                  {
                    v100 = *((_BYTE *)v96 + 56);
                    v101 = *((int *)v96 + 16);
                    v159 = v94;
                    v102 = v96[6] + v101;
                    v158 = v97;
                    v164 = v102;
                    v165.m128i_i8[0] = v100;
                    if ( !(unsigned __int8)sub_FDD80((unsigned __int64 *)a1, &v158, &v164, v132) )
                    {
                      v105 = *v99;
                      v106 = v96[3] + 4LL * v96[4];
                      if ( *v99 != (_DWORD *)v106 )
                      {
                        while ( a1[1].m128i_i32[0] != *v105 )
                        {
                          if ( (_DWORD *)v106 == ++v105 )
                            goto LABEL_146;
                        }
                        if ( (_DWORD *)v106 != v105 )
                        {
                          memmove(v105, v105 + 1, v106 - (_QWORD)v105 - 4);
                          --v96[4];
                        }
                      }
                    }
                  }
LABEL_146:
                  v96 = sub_100600(v96);
                  if ( v96 == (_QWORD *)*v91 )
                    break;
                  v95 = *(_DWORD *)(v142 + 64);
                  v90 = *(_QWORD *)(v142 + 48);
                  v94 = *(_BYTE *)(v142 + 56);
                }
              }
              --v124;
              v137 -= 4;
            }
            while ( v124 != -1 );
          }
          sub_1017F0((unsigned __int64 **)a1, (__int64 *)v142);
          goto LABEL_131;
        }
      }
      v85 = (unsigned int)(v84 - 1);
      v86 = 4 * v85;
      if ( (int)v85 >= 0 )
      {
        do
        {
          v87 = *(_BYTE *)(v142 + 56);
          v88 = *(int *)(*v73 + v86);
          v164 = *(_QWORD *)(v142 + 48) + *(int *)(v142 + 64);
          v165.m128i_i8[0] = v87;
          if ( !(unsigned __int8)sub_FDD80(
                                   (unsigned __int64 *)(*a6 + 24 * v88),
                                   (__int64 *)(v142 + 48),
                                   &v164,
                                   a1[1].m128i_i32[0]) )
          {
            memmove(
              (void *)(v86 + *(_QWORD *)(v142 + 24)),
              (const void *)(v86 + *(_QWORD *)(v142 + 24) + 4),
              4LL * *(_QWORD *)(v142 + 32) - 4 - v86);
            --*(_QWORD *)(v142 + 32);
          }
          LODWORD(v85) = v85 - 1;
          v86 -= 4;
        }
        while ( (_DWORD)v85 != -1 );
      }
      v140 = sub_FE1E0(v147.m128i_i64[1], v154, a6, a1[1].m128i_u32[0], (__int64)v73, 0);
LABEL_131:
      sub_8D480(&v160);
      goto LABEL_45;
    }
    goto LABEL_104;
  }
  if ( v156 == 1 )
  {
    v153 = 1;
    v149 = 0;
    v150 = -1;
    v152 = 0;
    v151 = -1;
    src = nullptr;
    v147.m128i_i64[0] = 0;
LABEL_104:
    v164 = 0;
    v168 = 1;
    v166.m128i_i64[0] = v138;
    v165 = 0;
    v166.m128i_i8[8] = v136;
    v167 = 0xFFFFFFFF00000001LL;
    v66 = sub_FC480(v31, (__int64)&v164);
    if ( v66 != v31 )
    {
      if ( v31 )
      {
        if ( !a1->m128i_i64[1] )
        {
LABEL_109:
          if ( (*v66 & 2) != 0 )
          {
            v68 = (_QWORD *)v66[2];
          }
          else
          {
            v67 = (_QWORD *)v66[1];
            if ( (*(_BYTE *)v67 & 2) != 0 )
            {
              v68 = (_QWORD *)(*v66 & 0xFFFFFFFFFFFFFFFCLL);
              for ( j = *v68; (j & 2) == 0; v68 = (_QWORD *)v70 )
              {
                if ( v66 != (_QWORD *)v68[1] )
                  break;
                v66 = v68;
                v70 = j & 0xFFFFFFFFFFFFFFFCLL;
                j = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              do
              {
                v68 = v67;
                v67 = (_QWORD *)v67[2];
              }
              while ( (*(_BYTE *)v67 & 2) == 0 );
            }
          }
          v107 = (int *)v68[3];
          for ( k = &v107[v68[4]]; k != v107; ++v107 )
          {
            v109 = *(_DWORD **)v26;
            v110 = *v107;
            v111 = *(_QWORD *)v26 + 4LL * *(_QWORD *)(v26 + 8);
            if ( *(_QWORD *)v26 == v111 )
              goto LABEL_169;
            v112 = *(_DWORD **)v26;
            while ( v110 != *v112 )
            {
              if ( (_DWORD *)v111 == ++v112 )
                goto LABEL_169;
            }
            if ( (_DWORD *)v111 == v112 )
            {
LABEL_169:
              v135 = *(_QWORD *)(v26 + 8);
              v133 = *(_QWORD *)v26 + 4 * v135;
              v125 = (unsigned __int64 *)(*a6 + 24LL * v110);
              v113 = sub_FDAE0(v125, v26);
              if ( v113 != (_QWORD *)*v125 )
              {
                v114 = v113 + 3;
                if ( v113 != (_QWORD *)-24LL )
                {
                  v115 = (_DWORD *)v113[3];
                  v116 = &v115[v113[4]];
                  if ( v115 != v116 )
                  {
                    v117 = (_DWORD *)v133;
                    while ( a1[1].m128i_i32[0] != *v115 )
                    {
                      if ( v116 == ++v115 )
                        goto LABEL_167;
                    }
                    if ( v115 != v116 )
                    {
                      if ( *(_QWORD *)(v26 + 16) < (unsigned __int64)(v135 + 1) )
                      {
                        v126 = v114;
                        v119 = qvector_reserve(v26, v109, v135 + 1, 4);
                        v120 = *(_QWORD *)(v26 + 8);
                        v114 = v126;
                        *(_QWORD *)v26 = v119;
                        v117 = (_DWORD *)(v119 + 4 * v120);
                      }
                      *v117 = v110;
                      ++*(_QWORD *)(v26 + 8);
                      if ( (v114[6] & 4) != 0 )
                        *(_BYTE *)(v26 + 48) |= 4u;
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
        v31 = (_QWORD *)v31[1];
      }
      if ( v66 == v31 )
        goto LABEL_44;
      goto LABEL_109;
    }
    if ( !under_debugger )
      sub_37B760(52035);
LABEL_202:
    BUG();
  }
  src = nullptr;
  v140 = 0;
LABEL_45:
  v34 = a1[1].m128i_u32[0];
  if ( v34 && v157 < (int)v155 )
    v140 |= sub_FE1E0(v147.m128i_i64[1], v154, a6, v34, v26, v157);
  sub_1008B0(v147.m128i_i64[1], v26, (__int64)v154, a6);
  sub_FDF20((unsigned __int64 *)a1, (__int64)v146);
  if ( src )
    qfree(src);
  return (unsigned int)v140 + 1;
}
