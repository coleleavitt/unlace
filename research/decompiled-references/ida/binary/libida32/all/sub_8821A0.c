__int64 __fastcall sub_8821A0(unsigned __int64 *a1)
{
  int v1; // eax
  char *v2; // r13
  unsigned int v3; // eax
  __int64 v4; // r14
  size_t v5; // rbx
  char *v6; // rdi
  unsigned __int64 v7; // rbp
  const void *v8; // rsi
  unsigned int v9; // r13d
  char *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 license_manager; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // r15
  size_t v29; // rbx
  unsigned __int64 v30; // r14
  const void *v31; // rsi
  __int64 v32; // rdx
  void *v33; // rsi
  __int64 v34; // rdi
  char v35; // al
  char *v36; // r13
  signed __int64 v37; // rdx
  char v38; // al
  char *v39; // r12
  const char *v40; // rbp
  char *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  char *v44; // r14
  const char *v45; // rdi
  const char *v46; // rdi
  const char *v47; // rdi
  const char *v48; // rdi
  __int64 i; // rax
  unsigned __int64 v50; // rbp
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // rbp
  void *v53; // r14
  unsigned __int64 v54; // rbp
  void *v55; // rdi
  __m128i v56; // xmm0
  char *v57; // rdi
  __int64 v58; // r15
  char *v59; // r12
  void *v60; // rdi
  char *v61; // rdi
  __int64 v62; // r13
  __int64 v63; // rbp
  __int64 j; // rbx
  char *v65; // r14
  void *v66; // rdi
  void *v67; // rdi
  void *v68; // rdi
  void *v69; // rdi
  size_t v70; // rbx
  void *v71; // rbp
  void *v72; // rdi
  __m128i si128; // xmm0
  const char *v74; // rdi
  void *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  void *v78; // r14
  unsigned __int64 v79; // r8
  size_t v80; // r11
  void *v81; // rbp
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int16 v84; // cx
  __int64 v85; // rax
  int v86; // edx
  char *v87; // rax
  __m128i v88; // xmm0
  size_t v89; // rcx
  __m128i v90; // xmm0
  void *v91; // rax
  __int64 v92; // rax
  size_t v93; // rbp
  void *v94; // rax
  size_t v95; // r14
  void *v96; // rax
  size_t v97; // r14
  void *v98; // rax
  const char *v99; // rdi
  const char *v100; // rdi
  const char *v101; // r8
  void *v102; // rax
  const char *v103; // r8
  void *v104; // rax
  const char *v105; // r8
  void *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int32 v113; // eax
  void *v114; // rax
  size_t n[2]; // [rsp+0h] [rbp-258h] BYREF
  __m128i v116; // [rsp+18h] [rbp-240h] BYREF
  __m128i v117; // [rsp+28h] [rbp-230h] BYREF
  __int16 v118; // [rsp+3Eh] [rbp-21Ah]
  char **v119; // [rsp+40h] [rbp-218h]
  size_t v120; // [rsp+48h] [rbp-210h]
  unsigned __int64 v121; // [rsp+50h] [rbp-208h]
  size_t v122; // [rsp+58h] [rbp-200h]
  void *src[2]; // [rsp+60h] [rbp-1F8h] BYREF
  void *v124; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v125; // [rsp+78h] [rbp-1E0h]
  int v126; // [rsp+92h] [rbp-1C6h]
  __int16 v127; // [rsp+96h] [rbp-1C2h]
  void *v128; // [rsp+100h] [rbp-158h] BYREF
  __int128 v129; // [rsp+108h] [rbp-150h]
  __m128i v130; // [rsp+118h] [rbp-140h] BYREF
  __m128i v131; // [rsp+128h] [rbp-130h] BYREF
  __m128i v132; // [rsp+138h] [rbp-120h] BYREF
  __m128i v133; // [rsp+148h] [rbp-110h] BYREF
  __m128i v134; // [rsp+158h] [rbp-100h] BYREF
  __m128i v135; // [rsp+168h] [rbp-F0h] BYREF
  __m128i v136; // [rsp+178h] [rbp-E0h] BYREF
  __m128i v137; // [rsp+188h] [rbp-D0h] BYREF
  __m128i v138; // [rsp+198h] [rbp-C0h] BYREF
  __m128i v139; // [rsp+1A8h] [rbp-B0h] BYREF
  __m128i v140; // [rsp+1B8h] [rbp-A0h] BYREF
  __m128i v141; // [rsp+1C8h] [rbp-90h] BYREF
  __m128i v142; // [rsp+1D8h] [rbp-80h] BYREF
  __int64 v143; // [rsp+1E8h] [rbp-70h] BYREF
  __int64 v144; // [rsp+1F6h] [rbp-62h]
  void *ptr; // [rsp+200h] [rbp-58h]
  size_t v146[2]; // [rsp+208h] [rbp-50h]
  unsigned __int64 v147; // [rsp+218h] [rbp-40h]

  v147 = __readfsqword(0x28u);
  v129 = 0;
  v128 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v146 = 0;
  if ( (debug & 0x200) != 0 )
    sub_383DA0();
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)(*a1 + a1[1]));
  v1 = sub_87DDA0((__int64 *)src);
  if ( v1 == -1 )
    goto LABEL_13;
  if ( v1 > 1 )
  {
    v2 = (char *)src[1];
    v124 = nullptr;
    v125 = 0;
    v3 = unpack_dd(src);
    if ( v3 )
    {
      v4 = v125;
      v5 = v3;
      v6 = (char *)v124;
      v7 = v125 + v3;
      if ( *((_QWORD *)&v125 + 1) < v7 )
      {
        v124 = (void *)qvector_reserve(&v124, v124, v7, 1);
        v6 = (char *)v124;
      }
      v8 = src[0];
      *(_QWORD *)&v125 = v7;
      if ( __CFADD__(v5, src[0]) || v2 < (char *)src[0] + v5 )
        goto LABEL_11;
      src[0] = (char *)src[0] + v5;
      if ( !memcpy(&v6[v4], v8, v5) )
      {
        v6 = (char *)v124;
        goto LABEL_11;
      }
    }
    v23 = (const char *)&v124;
    v38 = sub_87DEF0((__int64)&v128, (unsigned __int64 *)&v124);
    v6 = (char *)v124;
    if ( v38 )
    {
      if ( v124 )
      {
        *(_QWORD *)&v125 = 0;
        qfree(v124);
      }
      goto LABEL_46;
    }
LABEL_11:
    if ( !v6 )
    {
LABEL_13:
      v9 = 0;
      goto LABEL_14;
    }
LABEL_12:
    *(_QWORD *)&v125 = 0;
    qfree(v6);
    goto LABEL_13;
  }
  license_manager = get_license_manager(src, "received licenses");
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  v22 = v21;
  if ( !v21 )
    goto LABEL_13;
  v23 = haystack;
  if ( *(_QWORD *)(v21 + 40) )
    v23 = *(const char **)(v21 + 32);
  qstrncpy((char *)&v137.m128i_u64[1] + 7, v23, 64);
  *(_DWORD *)((char *)&v144 + 2) = *(_DWORD *)v22;
  HIWORD(v144) = *(_WORD *)(v22 + 4);
  v131.m128i_i32[3] = *(_DWORD *)v22;
  v132.m128i_i16[0] = *(_WORD *)(v22 + 4);
  v24 = *(_QWORD *)(v22 + 24);
  v130.m128i_i64[1] = -1;
  v130.m128i_i16[3] = v24;
  v25 = *(_QWORD *)(v22 + 120);
  *(__int64 *)((char *)v136.m128i_i64 + 7) = 4095;
  v131.m128i_i32[0] = v25;
LABEL_34:
  v26 = (char *)src[1];
  if ( src[0] < src[1] )
  {
    while ( 1 )
    {
      v124 = nullptr;
      v125 = 0;
      v27 = unpack_dd(src);
      if ( v27 )
      {
        v28 = v125;
        v29 = v27;
        v6 = (char *)v124;
        v30 = v125 + v27;
        if ( *((_QWORD *)&v125 + 1) < v30 )
        {
          v124 = (void *)qvector_reserve(&v124, v124, v30, 1);
          v6 = (char *)v124;
        }
        v31 = src[0];
        *(_QWORD *)&v125 = v30;
        if ( __CFADD__(v29, src[0]) || v26 < (char *)src[0] + v29 )
          goto LABEL_174;
        src[0] = (char *)src[0] + v29;
        if ( !memcpy(&v6[v28], v31, v29) )
          break;
      }
      v32 = v129;
      v33 = v128;
      if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v129 + 1) )
      {
        v128 = (void *)qvector_reserve(&v128, v128, v129 + 1, 112);
        v32 = v129;
        v33 = v128;
      }
      v34 = (__int64)v33 + 112 * v32;
      v23 = (const char *)&v124;
      *(_QWORD *)v34 = 112;
      *(_QWORD *)(v34 + 8) = 0;
      *(_QWORD *)(v34 + 32) = 0;
      *(_QWORD *)(v34 + 56) = 0;
      *(_QWORD *)(v34 + 80) = 0;
      *(_QWORD *)(v34 + 88) = 0;
      *(_OWORD *)(v34 + 16) = 0;
      *(_OWORD *)(v34 + 40) = 0;
      *(_OWORD *)(v34 + 64) = 0;
      *(_OWORD *)(v34 + 96) = 0;
      *(_QWORD *)&v129 = v129 + 1;
      v35 = sub_87C8C0(v34, (unsigned __int64 *)&v124);
      v6 = (char *)v124;
      if ( !v35 )
        goto LABEL_174;
      if ( !v124 )
        goto LABEL_34;
      *(_QWORD *)&v125 = 0;
      qfree(v124);
      v26 = (char *)src[1];
      if ( src[0] >= src[1] )
        goto LABEL_46;
    }
    v6 = (char *)v124;
LABEL_174:
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_46:
  if ( (debug & 0x200) != 0 )
    sub_383DA0();
  v124 = nullptr;
  v119 = (char **)&v124;
  v125 = 0;
  if ( !(unsigned __int8)sub_880B40(&v124) )
    goto LABEL_58;
  v36 = (char *)v124;
  v23 = (char *)v124 + 280 * v125;
  v37 = 0xAF8AF8AF8AF8AF8BLL * ((280 * (__int64)v125) >> 3);
  if ( v37 >> 2 > 0 )
  {
    v37 = (signed __int64)v124 + 1120 * (v37 >> 2);
    while ( v131.m128i_i32[3] != *((_DWORD *)v36 + 13) || v132.m128i_i16[0] != *((_WORD *)v36 + 28) )
    {
      if ( v131.m128i_i32[3] == *((_DWORD *)v36 + 83) && v132.m128i_i16[0] == *((_WORD *)v36 + 168) )
      {
        v36 += 280;
        if ( v23 == v36 )
          goto LABEL_58;
        goto LABEL_64;
      }
      if ( v131.m128i_i32[3] == *((_DWORD *)v36 + 153) && v132.m128i_i16[0] == *((_WORD *)v36 + 308) )
      {
        v36 += 560;
        if ( v23 == v36 )
          goto LABEL_58;
        if ( *((_QWORD *)v36 + 33) )
          goto LABEL_65;
        goto LABEL_125;
      }
      if ( v131.m128i_i32[3] == *((_DWORD *)v36 + 223) && v132.m128i_i16[0] == *((_WORD *)v36 + 448) )
      {
        v36 += 840;
        if ( v23 != v36 )
          goto LABEL_64;
        goto LABEL_58;
      }
      v36 += 1120;
      if ( v36 == (char *)v37 )
      {
        v37 = 0xAF8AF8AF8AF8AF8BLL * ((v23 - v36) >> 3);
        goto LABEL_177;
      }
    }
    goto LABEL_56;
  }
LABEL_177:
  v113 = v131.m128i_i32[3];
  if ( v37 == 2 )
    goto LABEL_186;
  if ( v37 == 3 )
  {
    v113 = v131.m128i_i32[3];
    if ( v131.m128i_i32[3] == *((_DWORD *)v36 + 13) && v132.m128i_i16[0] == *((_WORD *)v36 + 28) )
      goto LABEL_56;
    v36 += 280;
LABEL_186:
    if ( v113 == *((_DWORD *)v36 + 13) && v132.m128i_i16[0] == *((_WORD *)v36 + 28) )
      goto LABEL_56;
    v36 += 280;
    goto LABEL_181;
  }
  if ( v37 != 1 )
  {
LABEL_58:
    v36 = sub_87F2A0(v119);
    *(__m128i *)(v36 + 24) = _mm_loadu_si128(&v130);
    *(__m128i *)(v36 + 40) = _mm_loadu_si128(&v131);
    *(__m128i *)(v36 + 56) = _mm_loadu_si128(&v132);
    *(__m128i *)(v36 + 72) = _mm_loadu_si128(&v133);
    *(__m128i *)(v36 + 88) = _mm_loadu_si128(&v134);
    *(__m128i *)(v36 + 104) = _mm_loadu_si128(&v135);
    *(__m128i *)(v36 + 120) = _mm_loadu_si128(&v136);
    *(__m128i *)(v36 + 136) = _mm_loadu_si128(&v137);
    *(__m128i *)(v36 + 152) = _mm_loadu_si128(&v138);
    *(__m128i *)(v36 + 168) = _mm_loadu_si128(&v139);
    *(__m128i *)(v36 + 184) = _mm_loadu_si128(&v140);
    *(__m128i *)(v36 + 200) = _mm_loadu_si128(&v141);
    *(__m128i *)(v36 + 216) = _mm_loadu_si128(&v142);
    *(__m128i *)(v36 + 232) = _mm_loadu_si128((const __m128i *)&v143);
    *(_QWORD *)(v36 + 246) = v144;
    goto LABEL_64;
  }
  v113 = v131.m128i_i32[3];
LABEL_181:
  v37 = (signed __int64)(v36 + 52);
  if ( v113 != *((_DWORD *)v36 + 13) || v132.m128i_i16[0] != *((_WORD *)v36 + 28) )
    goto LABEL_58;
LABEL_56:
  if ( v23 == v36 || !v36 )
    goto LABEL_58;
LABEL_64:
  if ( !*((_QWORD *)v36 + 33) )
  {
LABEL_125:
    v70 = v146[0];
    v71 = nullptr;
    if ( v146[0] )
    {
      v114 = (void *)qalloc_or_throw(v146[0], v23, v37);
      v23 = (const char *)ptr;
      v71 = v114;
      memcpy(v114, ptr, v70);
    }
    v72 = *((void **)v36 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v70);
    if ( v72 )
    {
      *((_QWORD *)v36 + 33) = 0;
      *(__m128i *)n = si128;
      qfree(v72);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    *((_QWORD *)v36 + 32) = v71;
    *(__m128i *)(v36 + 264) = si128;
  }
LABEL_65:
  v39 = (char *)v128;
  v116.m128i_i64[1] = (__int64)v128 + 112 * v129;
  if ( (void *)v116.m128i_i64[1] != v128 )
  {
    while ( 1 )
    {
      v40 = haystack;
      v116.m128i_i64[0] = *((_QWORD *)v39 + 2);
      if ( v116.m128i_i64[0] )
        v40 = *((const char **)v39 + 1);
      v41 = *(char **)v36;
      v42 = 112LL * *((_QWORD *)v36 + 1);
      n[0] = *(_QWORD *)v36 + v42;
      v43 = 0x6DB6DB6DB6DB6DB7LL * (v42 >> 4);
      if ( v43 >> 2 > 0 )
      {
        v44 = &v41[448 * (v43 >> 2)];
        while ( 1 )
        {
          v48 = haystack;
          if ( *((_QWORD *)v41 + 2) )
            v48 = *((const char **)v41 + 1);
          v23 = v40;
          if ( !strcmp(v48, v40) )
            goto LABEL_83;
          v45 = haystack;
          if ( *((_QWORD *)v41 + 16) )
            v45 = *((const char **)v41 + 15);
          v23 = v40;
          if ( !strcmp(v45, v40) )
          {
            v41 += 112;
            goto LABEL_83;
          }
          v46 = haystack;
          if ( *((_QWORD *)v41 + 30) )
            v46 = *((const char **)v41 + 29);
          v23 = v40;
          if ( !strcmp(v46, v40) )
          {
            v41 += 224;
            goto LABEL_83;
          }
          v47 = haystack;
          if ( *((_QWORD *)v41 + 44) )
            v47 = *((const char **)v41 + 43);
          v23 = v40;
          if ( !strcmp(v47, v40) )
          {
            v41 += 336;
            goto LABEL_83;
          }
          v41 += 448;
          if ( v41 == v44 )
          {
            v43 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(n[0] - (_QWORD)v41) >> 4);
            break;
          }
        }
      }
      if ( v43 == 2 )
        goto LABEL_158;
      if ( v43 == 3 )
        break;
      if ( v43 != 1 )
        goto LABEL_140;
LABEL_137:
      v74 = haystack;
      if ( *((_QWORD *)v41 + 2) )
        v74 = *((const char **)v41 + 1);
      v23 = v40;
      if ( strcmp(v74, v40) )
      {
LABEL_140:
        v75 = nullptr;
        v118 = *(_WORD *)v39;
        v126 = *(_DWORD *)(v39 + 2);
        v127 = *((_WORD *)v39 + 3);
        if ( v116.m128i_i64[0] )
        {
          v97 = v116.m128i_i64[0];
          v98 = (void *)qalloc_or_throw(v116.m128i_i64[0], v23);
          v23 = *((const char **)v39 + 1);
          v75 = v98;
          memcpy(v98, v23, v97);
        }
        v76 = *((_QWORD *)v39 + 5);
        n[0] = 0;
        v117.m128i_i64[0] = v76;
        if ( v76 )
        {
          v95 = v76;
          v96 = (void *)qalloc_or_throw(v76, v23);
          v23 = *((const char **)v39 + 4);
          n[0] = (size_t)v96;
          memcpy(v96, v23, v95);
        }
        v77 = *((_QWORD *)v39 + 8);
        v78 = nullptr;
        v117.m128i_i64[1] = v77;
        if ( v77 )
        {
          v93 = v77;
          v94 = (void *)qalloc_or_throw(v77, v23);
          v23 = *((const char **)v39 + 7);
          v78 = v94;
          memcpy(v94, v23, v93);
        }
        v79 = *((_QWORD *)v39 + 12);
        v80 = *((_QWORD *)v39 + 10);
        v81 = nullptr;
        if ( v79 )
        {
          v122 = *((_QWORD *)v39 + 10);
          v121 = v79;
          v120 = 40 * v79;
          v81 = (void *)qalloc_or_throw(40 * v79, v23);
          memcpy(v81, *((const void **)v39 + 11), v120);
          v80 = v122;
          v79 = v121;
        }
        v82 = *((_QWORD *)v36 + 1);
        v23 = *(const char **)v36;
        if ( *((_QWORD *)v36 + 2) < (unsigned __int64)(v82 + 1) )
        {
          v121 = v79;
          v120 = v80;
          v92 = qvector_reserve(v36, v23, v82 + 1, 112);
          v82 = *((_QWORD *)v36 + 1);
          v79 = v121;
          *(_QWORD *)v36 = v92;
          v23 = (const char *)v92;
          v80 = v120;
        }
        v83 = _mm_loadl_epi64(&v116);
        v84 = v118;
        v85 = 7 * v82;
        v86 = v126;
        v87 = (char *)&v23[16 * v85];
        *((__m128i *)v87 + 1) = _mm_unpacklo_epi64(v83, v83);
        v88 = _mm_loadl_epi64(&v117);
        *(_WORD *)v87 = v84;
        v89 = n[0];
        *(_DWORD *)(v87 + 2) = v86;
        LOWORD(v86) = v127;
        *(__m128i *)(v87 + 40) = _mm_unpacklo_epi64(v88, v88);
        v90 = _mm_loadl_epi64((const __m128i *)&v117.m128i_u64[1]);
        *((_WORD *)v87 + 3) = v86;
        *((_QWORD *)v87 + 1) = v75;
        *((__m128i *)v87 + 4) = _mm_unpacklo_epi64(v90, v90);
        *((_QWORD *)v87 + 4) = v89;
        *((_QWORD *)v87 + 7) = v78;
        *((_QWORD *)v87 + 10) = v80;
        *((_QWORD *)v87 + 11) = v81;
        *((__m128i *)v87 + 6) = _mm_unpacklo_epi64((__m128i)v79, (__m128i)v79);
        ++*((_QWORD *)v36 + 1);
        goto LABEL_100;
      }
LABEL_83:
      if ( (char *)n[0] == v41 )
        goto LABEL_140;
      *(_WORD *)v41 = *(_WORD *)v39;
      for ( i = 2; i != 8; ++i )
        v41[i] = v39[i];
      if ( v41 + 8 != v39 + 8 )
      {
        v50 = *((_QWORD *)v39 + 2);
        if ( v50 > 1 )
        {
          v105 = *((const char **)v39 + 1);
          v106 = *((void **)v41 + 1);
          if ( *((_QWORD *)v41 + 3) < v50 )
          {
            v107 = *((_QWORD *)v39 + 2);
            v108 = *((_QWORD *)v41 + 1);
            n[0] = *((_QWORD *)v39 + 1);
            v106 = (void *)qvector_reserve(v41 + 8, v108, v107, 1);
            *((_QWORD *)v41 + 1) = v106;
            v105 = (const char *)n[0];
          }
          *((_QWORD *)v41 + 2) = v50;
          v23 = v105;
          memmove(v106, v105, v50 - 1);
          *(_BYTE *)(*((_QWORD *)v41 + 1) + v50 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v41 + 2) = 0;
        }
      }
      if ( v41 + 32 != v39 + 32 )
      {
        v51 = *((_QWORD *)v39 + 5);
        if ( v51 > 1 )
        {
          v101 = *((const char **)v39 + 4);
          v102 = *((void **)v41 + 4);
          if ( *((_QWORD *)v41 + 6) < v51 )
          {
            v111 = *((_QWORD *)v39 + 5);
            v112 = *((_QWORD *)v41 + 4);
            n[0] = *((_QWORD *)v39 + 4);
            v102 = (void *)qvector_reserve(v41 + 32, v112, v111, 1);
            *((_QWORD *)v41 + 4) = v102;
            v101 = (const char *)n[0];
          }
          *((_QWORD *)v41 + 5) = v51;
          v23 = v101;
          memmove(v102, v101, v51 - 1);
          *(_BYTE *)(*((_QWORD *)v41 + 4) + v51 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v41 + 5) = 0;
        }
      }
      if ( v41 + 56 != v39 + 56 )
      {
        v52 = *((_QWORD *)v39 + 8);
        if ( v52 > 1 )
        {
          v103 = *((const char **)v39 + 7);
          v104 = *((void **)v41 + 7);
          if ( *((_QWORD *)v41 + 9) < v52 )
          {
            v109 = *((_QWORD *)v39 + 8);
            v110 = *((_QWORD *)v41 + 7);
            n[0] = *((_QWORD *)v39 + 7);
            v104 = (void *)qvector_reserve(v41 + 56, v110, v109, 1);
            *((_QWORD *)v41 + 7) = v104;
            v103 = (const char *)n[0];
          }
          *((_QWORD *)v41 + 8) = v52;
          v23 = v103;
          memmove(v104, v103, v52 - 1);
          *(_BYTE *)(*((_QWORD *)v41 + 7) + v52 - 1) = 0;
        }
        else
        {
          *((_QWORD *)v41 + 8) = 0;
        }
      }
      v53 = nullptr;
      *((_QWORD *)v41 + 10) = *((_QWORD *)v39 + 10);
      v54 = *((_QWORD *)v39 + 12);
      if ( v54 )
      {
        n[0] = 40 * v54;
        v91 = (void *)qalloc_or_throw(40 * v54, v23);
        v23 = *((const char **)v39 + 11);
        v53 = v91;
        memcpy(v91, v23, n[0]);
      }
      v55 = *((void **)v41 + 11);
      v56 = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
      if ( v55 )
      {
        *((_QWORD *)v41 + 12) = 0;
        *(__m128i *)n = v56;
        qfree(v55);
        v56 = _mm_load_si128((const __m128i *)n);
      }
      *((_QWORD *)v41 + 11) = v53;
      *((__m128i *)v41 + 6) = v56;
LABEL_100:
      v39 += 112;
      if ( (char *)v116.m128i_i64[1] == v39 )
        goto LABEL_101;
    }
    v99 = haystack;
    if ( *((_QWORD *)v41 + 2) )
      v99 = *((const char **)v41 + 1);
    v23 = v40;
    if ( !strcmp(v99, v40) )
      goto LABEL_83;
    v41 += 112;
LABEL_158:
    v100 = haystack;
    if ( *((_QWORD *)v41 + 2) )
      v100 = *((const char **)v41 + 1);
    v23 = v40;
    if ( !strcmp(v100, v40) )
      goto LABEL_83;
    v41 += 112;
    goto LABEL_137;
  }
LABEL_101:
  sub_87EAE0((__int64)v119);
  v57 = (char *)v124;
  if ( v124 )
  {
    if ( (_QWORD)v125 )
    {
      n[0] = 0;
      v58 = 0;
      v116.m128i_i64[0] = v125;
      do
      {
        v59 = &v57[v58];
        v60 = *(void **)&v57[v58 + 256];
        if ( v60 )
        {
          *((_QWORD *)v59 + 33) = 0;
          qfree(v60);
        }
        v61 = *(char **)v59;
        if ( *(_QWORD *)v59 )
        {
          v62 = *((_QWORD *)v59 + 1);
          if ( v62 )
          {
            v63 = 0;
            for ( j = 0; j != v62; ++j )
            {
              v65 = &v61[v63];
              v66 = *(void **)&v61[v63 + 88];
              if ( v66 )
              {
                *((_QWORD *)v65 + 12) = 0;
                qfree(v66);
              }
              v67 = *((void **)v65 + 7);
              if ( v67 )
              {
                *((_QWORD *)v65 + 8) = 0;
                qfree(v67);
              }
              v68 = *((void **)v65 + 4);
              if ( v68 )
              {
                *((_QWORD *)v65 + 5) = 0;
                qfree(v68);
              }
              v69 = *((void **)v65 + 1);
              if ( v69 )
              {
                *((_QWORD *)v65 + 2) = 0;
                qfree(v69);
              }
              v61 = *(char **)v59;
              v63 += 112;
            }
          }
          *((_QWORD *)v59 + 1) = 0;
          qfree(v61);
        }
        ++n[0];
        v57 = (char *)v124;
        v58 += 280;
      }
      while ( v116.m128i_i64[0] != n[0] );
    }
    *(_QWORD *)&v125 = 0;
    qfree(v57);
  }
  v9 = 1;
LABEL_14:
  if ( ptr )
  {
    v146[0] = 0;
    qfree(ptr);
  }
  v10 = (char *)v128;
  if ( v128 )
  {
    v11 = v129;
    if ( (_QWORD)v129 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = &v10[v12];
        v15 = *(void **)&v10[v12 + 88];
        if ( v15 )
        {
          *((_QWORD *)v14 + 12) = 0;
          qfree(v15);
        }
        v16 = *((void **)v14 + 7);
        if ( v16 )
        {
          *((_QWORD *)v14 + 8) = 0;
          qfree(v16);
        }
        v17 = *((void **)v14 + 4);
        if ( v17 )
        {
          *((_QWORD *)v14 + 5) = 0;
          qfree(v17);
        }
        v18 = *((void **)v14 + 1);
        if ( v18 )
        {
          *((_QWORD *)v14 + 2) = 0;
          qfree(v18);
        }
        ++v13;
        v10 = (char *)v128;
        v12 += 112;
      }
      while ( v11 != v13 );
    }
    *(_QWORD *)&v129 = 0;
    qfree(v10);
  }
  return v9;
}

