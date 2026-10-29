__int64 __fastcall sub_8A5B20(unsigned __int64 *a1)
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
  char *v37; // rsi
  signed __int64 v38; // rdx
  char v39; // al
  char *v40; // r12
  const char *v41; // rbp
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r14
  const char *v46; // rdi
  const char *v47; // rdi
  const char *v48; // rdi
  const char *v49; // rdi
  __int64 i; // rax
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rbp
  void *v54; // r14
  unsigned __int64 v55; // rbp
  void *v56; // rdi
  __m128i v57; // xmm0
  char *v58; // rdi
  __int64 v59; // r15
  char *v60; // r12
  void *v61; // rdi
  char *v62; // rdi
  __int64 v63; // r13
  __int64 v64; // rbp
  __int64 j; // rbx
  char *v66; // r14
  void *v67; // rdi
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  size_t v71; // rbx
  void *v72; // rbp
  void *v73; // rdi
  __m128i si128; // xmm0
  const char *v75; // rdi
  void *v76; // r15
  __int64 v77; // rax
  __int64 v78; // rax
  void *v79; // r14
  unsigned __int64 v80; // r8
  size_t v81; // r11
  void *v82; // rbp
  __int64 v83; // rdx
  __int64 v84; // rsi
  __m128i v85; // xmm0
  __int16 v86; // cx
  __int64 v87; // rax
  int v88; // edx
  __int64 v89; // rax
  __m128i v90; // xmm0
  size_t v91; // rcx
  __m128i v92; // xmm0
  __int64 v93; // rax
  size_t v94; // rbp
  size_t v95; // r14
  void *v96; // rax
  const void *v97; // rsi
  size_t v98; // r14
  const char *v99; // rdi
  const char *v100; // rdi
  const void *v101; // r8
  void *v102; // rax
  const void *v103; // r8
  void *v104; // rax
  const void *v105; // r8
  void *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int32 v113; // eax
  size_t n[2]; // [rsp+0h] [rbp-258h] BYREF
  __m128i v115; // [rsp+18h] [rbp-240h] BYREF
  __m128i v116; // [rsp+28h] [rbp-230h] BYREF
  __int16 v117; // [rsp+3Eh] [rbp-21Ah]
  char **v118; // [rsp+40h] [rbp-218h]
  size_t v119; // [rsp+48h] [rbp-210h]
  unsigned __int64 v120; // [rsp+50h] [rbp-208h]
  size_t v121; // [rsp+58h] [rbp-200h]
  void *src[2]; // [rsp+60h] [rbp-1F8h] BYREF
  void *v123; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v124; // [rsp+78h] [rbp-1E0h]
  int v125; // [rsp+92h] [rbp-1C6h]
  __int16 v126; // [rsp+96h] [rbp-1C2h]
  void *v127; // [rsp+100h] [rbp-158h] BYREF
  __int128 v128; // [rsp+108h] [rbp-150h]
  __m128i v129; // [rsp+118h] [rbp-140h] BYREF
  __m128i v130; // [rsp+128h] [rbp-130h] BYREF
  __m128i v131; // [rsp+138h] [rbp-120h] BYREF
  __m128i v132; // [rsp+148h] [rbp-110h] BYREF
  __m128i v133; // [rsp+158h] [rbp-100h] BYREF
  __m128i v134; // [rsp+168h] [rbp-F0h] BYREF
  __m128i v135; // [rsp+178h] [rbp-E0h] BYREF
  __m128i v136; // [rsp+188h] [rbp-D0h] BYREF
  __m128i v137; // [rsp+198h] [rbp-C0h] BYREF
  __m128i v138; // [rsp+1A8h] [rbp-B0h] BYREF
  __m128i v139; // [rsp+1B8h] [rbp-A0h] BYREF
  __m128i v140; // [rsp+1C8h] [rbp-90h] BYREF
  __m128i v141; // [rsp+1D8h] [rbp-80h] BYREF
  __int64 v142; // [rsp+1E8h] [rbp-70h] BYREF
  __int64 v143; // [rsp+1F6h] [rbp-62h]
  void *ptr; // [rsp+200h] [rbp-58h]
  size_t v145[2]; // [rsp+208h] [rbp-50h]
  unsigned __int64 v146; // [rsp+218h] [rbp-40h]

  v146 = __readfsqword(0x28u);
  v128 = 0;
  v127 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v145 = 0;
  if ( (debug & 0x200) != 0 )
    sub_3879F0();
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)(*a1 + a1[1]));
  v1 = sub_8A1720((__int64 *)src);
  if ( v1 == -1 )
    goto LABEL_13;
  if ( v1 > 1 )
  {
    v2 = (char *)src[1];
    v123 = nullptr;
    v124 = 0;
    v3 = unpack_dd(src);
    if ( v3 )
    {
      v4 = v124;
      v5 = v3;
      v6 = (char *)v123;
      v7 = v124 + v3;
      if ( *((_QWORD *)&v124 + 1) < v7 )
      {
        v123 = (void *)qvector_reserve(&v123, v123, v7, 1);
        v6 = (char *)v123;
      }
      v8 = src[0];
      *(_QWORD *)&v124 = v7;
      if ( __CFADD__(v5, src[0]) || v2 < (char *)src[0] + v5 )
        goto LABEL_11;
      src[0] = (char *)src[0] + v5;
      if ( !memcpy(&v6[v4], v8, v5) )
      {
        v6 = (char *)v123;
        goto LABEL_11;
      }
    }
    v39 = sub_8A1870((__int64)&v127, (unsigned __int64 *)&v123);
    v6 = (char *)v123;
    if ( v39 )
    {
      if ( v123 )
      {
        *(_QWORD *)&v124 = 0;
        qfree(v123);
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
    *(_QWORD *)&v124 = 0;
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
  qstrncpy((char *)&v136.m128i_u64[1] + 7, v23, 64);
  *(_DWORD *)((char *)&v143 + 2) = *(_DWORD *)v22;
  HIWORD(v143) = *(_WORD *)(v22 + 4);
  v130.m128i_i32[3] = *(_DWORD *)v22;
  v131.m128i_i16[0] = *(_WORD *)(v22 + 4);
  v24 = *(_QWORD *)(v22 + 24);
  v129.m128i_i64[1] = -1;
  v129.m128i_i16[3] = v24;
  v25 = *(_QWORD *)(v22 + 120);
  *(__int64 *)((char *)v135.m128i_i64 + 7) = 4095;
  v130.m128i_i32[0] = v25;
LABEL_34:
  v26 = (char *)src[1];
  if ( src[0] < src[1] )
  {
    while ( 1 )
    {
      v123 = nullptr;
      v124 = 0;
      v27 = unpack_dd(src);
      if ( v27 )
      {
        v28 = v124;
        v29 = v27;
        v6 = (char *)v123;
        v30 = v124 + v27;
        if ( *((_QWORD *)&v124 + 1) < v30 )
        {
          v123 = (void *)qvector_reserve(&v123, v123, v30, 1);
          v6 = (char *)v123;
        }
        v31 = src[0];
        *(_QWORD *)&v124 = v30;
        if ( __CFADD__(v29, src[0]) || v26 < (char *)src[0] + v29 )
          goto LABEL_174;
        src[0] = (char *)src[0] + v29;
        if ( !memcpy(&v6[v28], v31, v29) )
          break;
      }
      v32 = v128;
      v33 = v127;
      if ( *((_QWORD *)&v128 + 1) < (unsigned __int64)(v128 + 1) )
      {
        v127 = (void *)qvector_reserve(&v127, v127, v128 + 1, 112);
        v32 = v128;
        v33 = v127;
      }
      v34 = (__int64)v33 + 112 * v32;
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
      *(_QWORD *)&v128 = v128 + 1;
      v35 = sub_8A0240(v34, (unsigned __int64 *)&v123);
      v6 = (char *)v123;
      if ( !v35 )
        goto LABEL_174;
      if ( !v123 )
        goto LABEL_34;
      *(_QWORD *)&v124 = 0;
      qfree(v123);
      v26 = (char *)src[1];
      if ( src[0] >= src[1] )
        goto LABEL_46;
    }
    v6 = (char *)v123;
LABEL_174:
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_46:
  if ( (debug & 0x200) != 0 )
    sub_3879F0();
  v123 = nullptr;
  v118 = (char **)&v123;
  v124 = 0;
  if ( !(unsigned __int8)sub_8A44C0(&v123) )
    goto LABEL_58;
  v36 = (char *)v123;
  v37 = (char *)v123 + 280 * v124;
  v38 = 0xAF8AF8AF8AF8AF8BLL * ((280 * (__int64)v124) >> 3);
  if ( v38 >> 2 > 0 )
  {
    while ( v130.m128i_i32[3] != *((_DWORD *)v36 + 13) || v131.m128i_i16[0] != *((_WORD *)v36 + 28) )
    {
      if ( v130.m128i_i32[3] == *((_DWORD *)v36 + 83) && v131.m128i_i16[0] == *((_WORD *)v36 + 168) )
      {
        v36 += 280;
        if ( v37 == v36 )
          goto LABEL_58;
        goto LABEL_64;
      }
      if ( v130.m128i_i32[3] == *((_DWORD *)v36 + 153) && v131.m128i_i16[0] == *((_WORD *)v36 + 308) )
      {
        v36 += 560;
        if ( v37 == v36 )
          goto LABEL_58;
        if ( *((_QWORD *)v36 + 33) )
          goto LABEL_65;
        goto LABEL_125;
      }
      if ( v130.m128i_i32[3] == *((_DWORD *)v36 + 223) && v131.m128i_i16[0] == *((_WORD *)v36 + 448) )
      {
        v36 += 840;
        if ( v37 != v36 )
          goto LABEL_64;
        goto LABEL_58;
      }
      v36 += 1120;
      if ( v36 == (char *)v123 + 1120 * (v38 >> 2) )
      {
        v38 = 0xAF8AF8AF8AF8AF8BLL * ((v37 - v36) >> 3);
        goto LABEL_177;
      }
    }
    goto LABEL_56;
  }
LABEL_177:
  v113 = v130.m128i_i32[3];
  if ( v38 == 2 )
    goto LABEL_186;
  if ( v38 == 3 )
  {
    v113 = v130.m128i_i32[3];
    if ( v130.m128i_i32[3] == *((_DWORD *)v36 + 13) && v131.m128i_i16[0] == *((_WORD *)v36 + 28) )
      goto LABEL_56;
    v36 += 280;
LABEL_186:
    if ( v113 == *((_DWORD *)v36 + 13) && v131.m128i_i16[0] == *((_WORD *)v36 + 28) )
      goto LABEL_56;
    v36 += 280;
    goto LABEL_181;
  }
  if ( v38 != 1 )
  {
LABEL_58:
    v36 = sub_8A2C20(v118);
    *(__m128i *)(v36 + 24) = _mm_loadu_si128(&v129);
    *(__m128i *)(v36 + 40) = _mm_loadu_si128(&v130);
    *(__m128i *)(v36 + 56) = _mm_loadu_si128(&v131);
    *(__m128i *)(v36 + 72) = _mm_loadu_si128(&v132);
    *(__m128i *)(v36 + 88) = _mm_loadu_si128(&v133);
    *(__m128i *)(v36 + 104) = _mm_loadu_si128(&v134);
    *(__m128i *)(v36 + 120) = _mm_loadu_si128(&v135);
    *(__m128i *)(v36 + 136) = _mm_loadu_si128(&v136);
    *(__m128i *)(v36 + 152) = _mm_loadu_si128(&v137);
    *(__m128i *)(v36 + 168) = _mm_loadu_si128(&v138);
    *(__m128i *)(v36 + 184) = _mm_loadu_si128(&v139);
    *(__m128i *)(v36 + 200) = _mm_loadu_si128(&v140);
    *(__m128i *)(v36 + 216) = _mm_loadu_si128(&v141);
    *(__m128i *)(v36 + 232) = _mm_loadu_si128((const __m128i *)&v142);
    *(_QWORD *)(v36 + 246) = v143;
    goto LABEL_64;
  }
  v113 = v130.m128i_i32[3];
LABEL_181:
  if ( v113 != *((_DWORD *)v36 + 13) || v131.m128i_i16[0] != *((_WORD *)v36 + 28) )
    goto LABEL_58;
LABEL_56:
  if ( v37 == v36 || !v36 )
    goto LABEL_58;
LABEL_64:
  if ( !*((_QWORD *)v36 + 33) )
  {
LABEL_125:
    v71 = v145[0];
    v72 = nullptr;
    if ( v145[0] )
    {
      v72 = (void *)qalloc_or_throw(v145[0]);
      memcpy(v72, ptr, v71);
    }
    v73 = *((void **)v36 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)v71, (__m128i)v71);
    if ( v73 )
    {
      *((_QWORD *)v36 + 33) = 0;
      *(__m128i *)n = si128;
      qfree(v73);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    *((_QWORD *)v36 + 32) = v72;
    *(__m128i *)(v36 + 264) = si128;
  }
LABEL_65:
  v40 = (char *)v127;
  v115.m128i_i64[1] = (__int64)v127 + 112 * v128;
  if ( (void *)v115.m128i_i64[1] != v127 )
  {
    while ( 1 )
    {
      v41 = haystack;
      v115.m128i_i64[0] = *((_QWORD *)v40 + 2);
      if ( v115.m128i_i64[0] )
        v41 = *((const char **)v40 + 1);
      v42 = *(_QWORD *)v36;
      v43 = 112LL * *((_QWORD *)v36 + 1);
      n[0] = *(_QWORD *)v36 + v43;
      v44 = 0x6DB6DB6DB6DB6DB7LL * (v43 >> 4);
      if ( v44 >> 2 > 0 )
      {
        v45 = v42 + 448 * (v44 >> 2);
        while ( 1 )
        {
          v49 = haystack;
          if ( *(_QWORD *)(v42 + 16) )
            v49 = *(const char **)(v42 + 8);
          if ( !strcmp(v49, v41) )
            goto LABEL_83;
          v46 = haystack;
          if ( *(_QWORD *)(v42 + 128) )
            v46 = *(const char **)(v42 + 120);
          if ( !strcmp(v46, v41) )
          {
            v42 += 112;
            goto LABEL_83;
          }
          v47 = haystack;
          if ( *(_QWORD *)(v42 + 240) )
            v47 = *(const char **)(v42 + 232);
          if ( !strcmp(v47, v41) )
          {
            v42 += 224;
            goto LABEL_83;
          }
          v48 = haystack;
          if ( *(_QWORD *)(v42 + 352) )
            v48 = *(const char **)(v42 + 344);
          if ( !strcmp(v48, v41) )
          {
            v42 += 336;
            goto LABEL_83;
          }
          v42 += 448;
          if ( v42 == v45 )
          {
            v44 = 0x6DB6DB6DB6DB6DB7LL * ((signed __int64)(n[0] - v42) >> 4);
            break;
          }
        }
      }
      if ( v44 == 2 )
        goto LABEL_158;
      if ( v44 == 3 )
        break;
      if ( v44 != 1 )
        goto LABEL_140;
LABEL_137:
      v75 = haystack;
      if ( *(_QWORD *)(v42 + 16) )
        v75 = *(const char **)(v42 + 8);
      if ( strcmp(v75, v41) )
      {
LABEL_140:
        v76 = nullptr;
        v117 = *(_WORD *)v40;
        v125 = *(_DWORD *)(v40 + 2);
        v126 = *((_WORD *)v40 + 3);
        if ( v115.m128i_i64[0] )
        {
          v98 = v115.m128i_i64[0];
          v76 = (void *)qalloc_or_throw(v115.m128i_i64[0]);
          memcpy(v76, *((const void **)v40 + 1), v98);
        }
        v77 = *((_QWORD *)v40 + 5);
        n[0] = 0;
        v116.m128i_i64[0] = v77;
        if ( v77 )
        {
          v95 = v77;
          v96 = (void *)qalloc_or_throw(v77);
          v97 = *((const void **)v40 + 4);
          n[0] = (size_t)v96;
          memcpy(v96, v97, v95);
        }
        v78 = *((_QWORD *)v40 + 8);
        v79 = nullptr;
        v116.m128i_i64[1] = v78;
        if ( v78 )
        {
          v94 = v78;
          v79 = (void *)qalloc_or_throw(v78);
          memcpy(v79, *((const void **)v40 + 7), v94);
        }
        v80 = *((_QWORD *)v40 + 12);
        v81 = *((_QWORD *)v40 + 10);
        v82 = nullptr;
        if ( v80 )
        {
          v121 = *((_QWORD *)v40 + 10);
          v120 = v80;
          v119 = 40 * v80;
          v82 = (void *)qalloc_or_throw(40 * v80);
          memcpy(v82, *((const void **)v40 + 11), v119);
          v81 = v121;
          v80 = v120;
        }
        v83 = *((_QWORD *)v36 + 1);
        v84 = *(_QWORD *)v36;
        if ( *((_QWORD *)v36 + 2) < (unsigned __int64)(v83 + 1) )
        {
          v120 = v80;
          v119 = v81;
          v93 = qvector_reserve(v36, v84, v83 + 1, 112);
          v83 = *((_QWORD *)v36 + 1);
          v80 = v120;
          *(_QWORD *)v36 = v93;
          v84 = v93;
          v81 = v119;
        }
        v85 = _mm_loadl_epi64(&v115);
        v86 = v117;
        v87 = 7 * v83;
        v88 = v125;
        v89 = v84 + 16 * v87;
        *(__m128i *)(v89 + 16) = _mm_unpacklo_epi64(v85, v85);
        v90 = _mm_loadl_epi64(&v116);
        *(_WORD *)v89 = v86;
        v91 = n[0];
        *(_DWORD *)(v89 + 2) = v88;
        LOWORD(v88) = v126;
        *(__m128i *)(v89 + 40) = _mm_unpacklo_epi64(v90, v90);
        v92 = _mm_loadl_epi64((const __m128i *)&v116.m128i_u64[1]);
        *(_WORD *)(v89 + 6) = v88;
        *(_QWORD *)(v89 + 8) = v76;
        *(__m128i *)(v89 + 64) = _mm_unpacklo_epi64(v92, v92);
        *(_QWORD *)(v89 + 32) = v91;
        *(_QWORD *)(v89 + 56) = v79;
        *(_QWORD *)(v89 + 80) = v81;
        *(_QWORD *)(v89 + 88) = v82;
        *(__m128i *)(v89 + 96) = _mm_unpacklo_epi64((__m128i)v80, (__m128i)v80);
        ++*((_QWORD *)v36 + 1);
        goto LABEL_100;
      }
LABEL_83:
      if ( n[0] == v42 )
        goto LABEL_140;
      *(_WORD *)v42 = *(_WORD *)v40;
      for ( i = 2; i != 8; ++i )
        *(_BYTE *)(v42 + i) = v40[i];
      if ( (char *)(v42 + 8) != v40 + 8 )
      {
        v51 = *((_QWORD *)v40 + 2);
        if ( v51 > 1 )
        {
          v105 = *((const void **)v40 + 1);
          v106 = *(void **)(v42 + 8);
          if ( *(_QWORD *)(v42 + 24) < v51 )
          {
            v107 = *((_QWORD *)v40 + 2);
            v108 = *(_QWORD *)(v42 + 8);
            n[0] = *((_QWORD *)v40 + 1);
            v106 = (void *)qvector_reserve(v42 + 8, v108, v107, 1);
            *(_QWORD *)(v42 + 8) = v106;
            v105 = (const void *)n[0];
          }
          *(_QWORD *)(v42 + 16) = v51;
          memmove(v106, v105, v51 - 1);
          *(_BYTE *)(*(_QWORD *)(v42 + 8) + v51 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v42 + 16) = 0;
        }
      }
      if ( (char *)(v42 + 32) != v40 + 32 )
      {
        v52 = *((_QWORD *)v40 + 5);
        if ( v52 > 1 )
        {
          v101 = *((const void **)v40 + 4);
          v102 = *(void **)(v42 + 32);
          if ( *(_QWORD *)(v42 + 48) < v52 )
          {
            v111 = *((_QWORD *)v40 + 5);
            v112 = *(_QWORD *)(v42 + 32);
            n[0] = *((_QWORD *)v40 + 4);
            v102 = (void *)qvector_reserve(v42 + 32, v112, v111, 1);
            *(_QWORD *)(v42 + 32) = v102;
            v101 = (const void *)n[0];
          }
          *(_QWORD *)(v42 + 40) = v52;
          memmove(v102, v101, v52 - 1);
          *(_BYTE *)(*(_QWORD *)(v42 + 32) + v52 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v42 + 40) = 0;
        }
      }
      if ( (char *)(v42 + 56) != v40 + 56 )
      {
        v53 = *((_QWORD *)v40 + 8);
        if ( v53 > 1 )
        {
          v103 = *((const void **)v40 + 7);
          v104 = *(void **)(v42 + 56);
          if ( *(_QWORD *)(v42 + 72) < v53 )
          {
            v109 = *((_QWORD *)v40 + 8);
            v110 = *(_QWORD *)(v42 + 56);
            n[0] = *((_QWORD *)v40 + 7);
            v104 = (void *)qvector_reserve(v42 + 56, v110, v109, 1);
            *(_QWORD *)(v42 + 56) = v104;
            v103 = (const void *)n[0];
          }
          *(_QWORD *)(v42 + 64) = v53;
          memmove(v104, v103, v53 - 1);
          *(_BYTE *)(*(_QWORD *)(v42 + 56) + v53 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v42 + 64) = 0;
        }
      }
      v54 = nullptr;
      *(_QWORD *)(v42 + 80) = *((_QWORD *)v40 + 10);
      v55 = *((_QWORD *)v40 + 12);
      if ( v55 )
      {
        n[0] = 40 * v55;
        v54 = (void *)qalloc_or_throw(40 * v55);
        memcpy(v54, *((const void **)v40 + 11), n[0]);
      }
      v56 = *(void **)(v42 + 88);
      v57 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
      if ( v56 )
      {
        *(_QWORD *)(v42 + 96) = 0;
        *(__m128i *)n = v57;
        qfree(v56);
        v57 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v42 + 88) = v54;
      *(__m128i *)(v42 + 96) = v57;
LABEL_100:
      v40 += 112;
      if ( (char *)v115.m128i_i64[1] == v40 )
        goto LABEL_101;
    }
    v99 = haystack;
    if ( *(_QWORD *)(v42 + 16) )
      v99 = *(const char **)(v42 + 8);
    if ( !strcmp(v99, v41) )
      goto LABEL_83;
    v42 += 112;
LABEL_158:
    v100 = haystack;
    if ( *(_QWORD *)(v42 + 16) )
      v100 = *(const char **)(v42 + 8);
    if ( !strcmp(v100, v41) )
      goto LABEL_83;
    v42 += 112;
    goto LABEL_137;
  }
LABEL_101:
  sub_8A2460((__int64)v118);
  v58 = (char *)v123;
  if ( v123 )
  {
    if ( (_QWORD)v124 )
    {
      n[0] = 0;
      v59 = 0;
      v115.m128i_i64[0] = v124;
      do
      {
        v60 = &v58[v59];
        v61 = *(void **)&v58[v59 + 256];
        if ( v61 )
        {
          *((_QWORD *)v60 + 33) = 0;
          qfree(v61);
        }
        v62 = *(char **)v60;
        if ( *(_QWORD *)v60 )
        {
          v63 = *((_QWORD *)v60 + 1);
          if ( v63 )
          {
            v64 = 0;
            for ( j = 0; j != v63; ++j )
            {
              v66 = &v62[v64];
              v67 = *(void **)&v62[v64 + 88];
              if ( v67 )
              {
                *((_QWORD *)v66 + 12) = 0;
                qfree(v67);
              }
              v68 = *((void **)v66 + 7);
              if ( v68 )
              {
                *((_QWORD *)v66 + 8) = 0;
                qfree(v68);
              }
              v69 = *((void **)v66 + 4);
              if ( v69 )
              {
                *((_QWORD *)v66 + 5) = 0;
                qfree(v69);
              }
              v70 = *((void **)v66 + 1);
              if ( v70 )
              {
                *((_QWORD *)v66 + 2) = 0;
                qfree(v70);
              }
              v62 = *(char **)v60;
              v64 += 112;
            }
          }
          *((_QWORD *)v60 + 1) = 0;
          qfree(v62);
        }
        ++n[0];
        v58 = (char *)v123;
        v59 += 280;
      }
      while ( v115.m128i_i64[0] != n[0] );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v58);
  }
  v9 = 1;
LABEL_14:
  if ( ptr )
  {
    v145[0] = 0;
    qfree(ptr);
  }
  v10 = (char *)v127;
  if ( v127 )
  {
    v11 = v128;
    if ( (_QWORD)v128 )
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
        v10 = (char *)v127;
        v12 += 112;
      }
      while ( v11 != v13 );
    }
    *(_QWORD *)&v128 = 0;
    qfree(v10);
  }
  return v9;
}
