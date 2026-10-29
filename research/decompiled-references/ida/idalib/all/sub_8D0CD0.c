__int64 __fastcall sub_8D0CD0(
        __int64 *a1,
        void **a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        const char *a7)
{
  void **v8; // rbx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  const char **v12; // rbp
  const char **v13; // r14
  const char *v14; // r13
  const char *file_ext; // rdi
  size_t v16; // r15
  size_t v17; // r13
  __int64 v18; // r15
  void *v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  char *v22; // rdi
  __m128i *v23; // rax
  __m128i si128; // xmm0
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rcx
  char *v30; // rbp
  const char *v31; // r14
  _QWORD *v32; // rdi
  const char *v33; // rsi
  __int64 (***v34)(); // rax
  __int64 (*v35)(); // rdx
  __int64 (*v36)(); // rax
  const char *v37; // rdx
  const char *v38; // rdx
  __int64 (__fastcall *v39)(_QWORD *, _BYTE *, const char *, const char *); // rax
  __int32 v40; // eax
  __int32 v41; // r15d
  const char *error_string; // rax
  const char *v43; // r14
  size_t v44; // r13
  size_t v45; // r13
  __int64 v46; // r14
  void *v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  char *v50; // rdi
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i *v53; // rdx
  void *v54; // rdi
  void *v55; // rdi
  _QWORD *v56; // rbp
  __int64 (__fastcall *v57)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v58; // rdi
  __int64 (*v59)(); // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  void *v62; // r15
  const char *v63; // rcx
  int v64; // eax
  _QWORD *v65; // r13
  __int64 (__fastcall *v66)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v67; // rdi
  __int64 (*v68)(); // rax
  __int64 v69; // r8
  char *v70; // rsi
  void *v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rax
  char *v74; // rax
  void *v75; // r14
  size_t v76; // r8
  __int64 v77; // rdx
  char *v78; // rsi
  char *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rdi
  __int64 (*v82)(); // rax
  char *v83; // rdx
  __int64 v84; // r14
  __int64 v85; // r13
  char *v86; // rax
  void *v87; // rdi
  size_t v88; // r15
  size_t v89; // r13
  __int64 v90; // r15
  void *v91; // rdx
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  char *v94; // rdi
  __m128i *v95; // rax
  __m128i v96; // xmm0
  _QWORD *v97; // rbx
  __int64 (__fastcall *v98)(_QWORD *, unsigned __int8, __int64); // r8
  __int64 v99; // rdi
  __int32 v100; // ecx
  __int64 (*v101)(); // rax
  char *v102; // rdx
  __int64 v103; // rbp
  __int64 v104; // rbx
  char *v105; // rax
  void *v106; // rdi
  char *v107; // rdx
  __int64 v108; // rbp
  __int64 v109; // rbx
  char *v110; // rax
  void *v111; // rdi
  char *v112; // rdx
  __int64 v113; // rbp
  __int64 v114; // rbx
  char *v115; // rax
  void *v116; // rdi
  __m128i *v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // rdx
  char *v121; // rsi
  char *v122; // rax
  const char *v123; // rcx
  const char *v124; // rdx
  __int64 v125; // rax
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __m128i *v128; // rdx
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  __m128i *v131; // rdx
  __int64 v132; // rax
  _QWORD *v133; // rdi
  __int64 (*v134)(); // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __m128i *v139; // rax
  bool v140; // zf
  __int64 v141; // [rsp+0h] [rbp-1188h]
  int v142; // [rsp+0h] [rbp-1188h]
  unsigned __int32 v143; // [rsp+0h] [rbp-1188h]
  __int32 v144; // [rsp+0h] [rbp-1188h]
  int v145; // [rsp+0h] [rbp-1188h]
  int v146; // [rsp+8h] [rbp-1180h]
  int v147; // [rsp+8h] [rbp-1180h]
  const char *v148; // [rsp+10h] [rbp-1178h]
  __m128i v149; // [rsp+18h] [rbp-1170h] BYREF
  char *v150; // [rsp+28h] [rbp-1160h]
  char v151; // [rsp+37h] [rbp-1151h]
  __m128i v152; // [rsp+38h] [rbp-1150h] BYREF
  void **v153; // [rsp+48h] [rbp-1140h]
  __m128i v154; // [rsp+50h] [rbp-1138h] BYREF
  void *v155; // [rsp+60h] [rbp-1128h] BYREF
  __int128 v156; // [rsp+68h] [rbp-1120h]
  void *ptr; // [rsp+80h] [rbp-1108h] BYREF
  __int128 v158; // [rsp+88h] [rbp-1100h]
  void *v159; // [rsp+A0h] [rbp-10E8h] BYREF
  __int128 v160; // [rsp+A8h] [rbp-10E0h]
  void *v161; // [rsp+C0h] [rbp-10C8h] BYREF
  __int128 v162; // [rsp+C8h] [rbp-10C0h]
  void *v163; // [rsp+E0h] [rbp-10A8h] BYREF
  __int64 v164; // [rsp+E8h] [rbp-10A0h]
  void *src; // [rsp+100h] [rbp-1088h] BYREF
  size_t n[3]; // [rsp+108h] [rbp-1080h]
  void *v167; // [rsp+120h] [rbp-1068h] BYREF
  _BYTE v168[24]; // [rsp+128h] [rbp-1060h] BYREF
  _BYTE v169[4104]; // [rsp+140h] [rbp-1048h] BYREF
  unsigned __int64 v170; // [rsp+1148h] [rbp-40h]

  v8 = a2;
  v154.m128i_i64[1] = __PAIR64__(a5, a6);
  v151 = a6;
  v141 = (__int64)a1;
  v148 = a7;
  v170 = __readfsqword(0x28u);
  v9 = *a1;
  v153 = &v155;
  v155 = nullptr;
  v156 = 0;
  v152.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64 *, void **, void **, __int64, __int64, __int64))(v9 + 208))(
                        a1,
                        a2,
                        &v155,
                        a4,
                        4294967293LL,
                        2);
  if ( v152.m128i_i32[3] )
    goto LABEL_138;
  ptr = nullptr;
  v158 = 0;
  if ( !a7 )
  {
    v139 = (__m128i *)qvector_reserve(&ptr, 0, 38, 1);
    ptr = v139;
    *(_QWORD *)&v158 = 38;
    *v139 = _mm_load_si128((const __m128i *)&xmmword_23A8B80);
    v140 = (_QWORD)v158 == 0;
    v139[1] = _mm_load_si128((const __m128i *)&xmmword_23A8B90);
    *(__int64 *)((char *)&v139[1].m128i_i64[1] + 5) = 0x6C25207365793D65LL;
    v148 = (const char *)ptr;
    *((_BYTE *)ptr + 37) = 0;
    if ( v140 )
      v148 = haystack;
  }
  v12 = (const char **)v155;
  v159 = nullptr;
  v160 = 0;
  v13 = (const char **)((char *)v155 + 80 * v156);
  if ( v155 == v13 )
  {
    v27 = 0;
    v26 = 0;
    goto LABEL_23;
  }
  do
  {
    v14 = haystack;
    if ( v12[1] )
      v14 = *v12;
    file_ext = (const char *)get_file_ext(v14);
    if ( file_ext && !strcasecmp(file_ext, "idb") )
    {
      if ( *((_DWORD *)v12 + 15) == *((_DWORD *)v12 + 16) )
      {
        v120 = v160;
        v121 = (char *)v159;
        if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)(v160 + 1) )
        {
          v159 = (void *)qvector_reserve(&v159, v159, v160 + 1, 24);
          v120 = v160;
          v121 = (char *)v159;
        }
        v122 = &v121[24 * v120];
        *(_OWORD *)(v122 + 8) = 0;
        *(_QWORD *)v122 = 0;
        *(_QWORD *)&v160 = v160 + 1;
        v123 = *(const char **)v122;
        v124 = *((const char **)v122 + 1);
        *(_QWORD *)v122 = *v12;
        *((_QWORD *)v122 + 1) = v12[1];
        *((_QWORD *)v122 + 2) = v12[2];
        *v12 = v123;
        v12[1] = v124;
        v12[2] = nullptr;
        goto LABEL_21;
      }
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v14 )
      {
        v16 = strlen(v14);
        v149.m128i_i64[0] = v16 + 1;
        src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
        n[0] = v149.m128i_i64[0];
        memmove(src, v14, v16);
        *((_BYTE *)src + v16) = 0;
        v17 = n[0];
        v167 = &qword_18 + 5;
        memset(v168, 0, sizeof(v168));
        if ( n[0] )
        {
          *(_QWORD *)v168 = qalloc_or_throw(n[0]);
          *(_QWORD *)&v168[16] = v17;
          v18 = *(_QWORD *)v168;
          memcpy(*(void **)v168, src, v17);
          *(_QWORD *)&v168[8] = v17;
LABEL_14:
          v19 = v8[1];
          v20 = (__int64)*v8;
          v21 = (unsigned __int64)v8[2];
          v22 = (char *)v19 + 1;
          if ( &v167 >= *v8 && (unsigned __int64)&v167 < v20 + 32 * v21 )
          {
            v129 = _mm_loadl_epi64((const __m128i *)&v168[8]);
            v130 = _mm_loadl_epi64((const __m128i *)&v168[16]);
            memset(v168, 0, sizeof(v168));
            if ( v21 < (unsigned __int64)v22 )
            {
              v149.m128i_i64[1] = v130.m128i_i64[0];
              v149.m128i_i64[0] = v129.m128i_i64[0];
              v138 = qvector_reserve(v8, v20, (char *)v19 + 1, 32);
              *v8 = (void *)v138;
              v19 = v8[1];
              v20 = v138;
              v130 = _mm_loadl_epi64((const __m128i *)&v149.m128i_u64[1]);
              v129 = _mm_loadl_epi64(&v149);
            }
            v131 = (__m128i *)(v20 + 32LL * (_QWORD)v19);
            v131->m128i_i32[0] = 29;
            v131->m128i_i64[1] = v18;
            v131[1] = _mm_unpacklo_epi64(v129, v130);
          }
          else
          {
            if ( v21 < (unsigned __int64)v22 )
            {
              v135 = qvector_reserve(v8, v20, (char *)v19 + 1, 32);
              *v8 = (void *)v135;
              v19 = v8[1];
              v20 = v135;
            }
            v23 = (__m128i *)(v20 + 32LL * (_QWORD)v19);
            v23->m128i_i32[0] = 29;
            si128 = _mm_load_si128((const __m128i *)&v168[8]);
            v23->m128i_i64[1] = v18;
            v23[1] = si128;
          }
          v25 = src;
          v8[1] = (char *)v8[1] + 1;
          if ( v25 )
            goto LABEL_20;
          goto LABEL_21;
        }
      }
      else
      {
        v167 = &qword_18 + 5;
        memset(v168, 0, sizeof(v168));
      }
      v18 = 0;
      goto LABEL_14;
    }
    if ( !v8 )
      goto LABEL_21;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !v14 )
    {
      v167 = &word_36;
      memset(v168, 0, sizeof(v168));
LABEL_153:
      v90 = 0;
      goto LABEL_105;
    }
    v88 = strlen(v14);
    v149.m128i_i64[0] = v88 + 1;
    src = (void *)qvector_reserve(&src, 0, v88 + 1, 1);
    n[0] = v149.m128i_i64[0];
    memmove(src, v14, v88);
    *((_BYTE *)src + v88) = 0;
    v89 = n[0];
    v167 = &word_36;
    memset(v168, 0, sizeof(v168));
    if ( !n[0] )
      goto LABEL_153;
    *(_QWORD *)v168 = qalloc_or_throw(n[0]);
    *(_QWORD *)&v168[16] = v89;
    v90 = *(_QWORD *)v168;
    memcpy(*(void **)v168, src, v89);
    *(_QWORD *)&v168[8] = v89;
LABEL_105:
    v91 = v8[1];
    v92 = (__int64)*v8;
    v93 = (unsigned __int64)v8[2];
    v94 = (char *)v91 + 1;
    if ( &v167 >= *v8 && (unsigned __int64)&v167 < v92 + 32 * v93 )
    {
      v126 = _mm_loadl_epi64((const __m128i *)&v168[8]);
      v127 = _mm_loadl_epi64((const __m128i *)&v168[16]);
      memset(v168, 0, sizeof(v168));
      if ( v93 < (unsigned __int64)v94 )
      {
        v149.m128i_i64[1] = v127.m128i_i64[0];
        v149.m128i_i64[0] = v126.m128i_i64[0];
        v137 = qvector_reserve(v8, v92, (char *)v91 + 1, 32);
        *v8 = (void *)v137;
        v91 = v8[1];
        v92 = v137;
        v127 = _mm_loadl_epi64((const __m128i *)&v149.m128i_u64[1]);
        v126 = _mm_loadl_epi64(&v149);
      }
      v128 = (__m128i *)(v92 + 32LL * (_QWORD)v91);
      v128->m128i_i32[0] = 54;
      v128->m128i_i64[1] = v90;
      v128[1] = _mm_unpacklo_epi64(v126, v127);
    }
    else
    {
      if ( v93 < (unsigned __int64)v94 )
      {
        v132 = qvector_reserve(v8, v92, (char *)v91 + 1, 32);
        *v8 = (void *)v132;
        v91 = v8[1];
        v92 = v132;
      }
      v95 = (__m128i *)(v92 + 32LL * (_QWORD)v91);
      v95->m128i_i32[0] = 54;
      v96 = _mm_load_si128((const __m128i *)&v168[8]);
      v95->m128i_i64[1] = v90;
      v95[1] = v96;
    }
    v25 = src;
    v8[1] = (char *)v8[1] + 1;
    if ( v25 )
    {
LABEL_20:
      n[0] = 0;
      qfree(v25);
    }
LABEL_21:
    v12 += 10;
  }
  while ( v13 != v12 );
  v26 = v160;
  v27 = v160;
LABEL_23:
  v28 = (_QWORD *)a3[7];
  v29 = *(_QWORD *)(*v28 + 200LL);
  if ( (__int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64))v29 != sub_8CC600
    || (v28 = (_QWORD *)v28[3]) != nullptr && (v29 = *(_QWORD *)(*v28 + 8LL), (__int64 (*)())v29 != sub_8C83E0) )
  {
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v29)(v28, 6, v27);
    v26 = v160;
  }
  v30 = (char *)v159;
  v161 = nullptr;
  v162 = 0;
  v150 = (char *)v159 + 24 * v26;
  if ( v150 != v159 )
  {
    v146 = 0;
    v149.m128i_i64[1] = (__int64)&v163;
    v152.m128i_i32[2] = 0;
    v149.m128i_i64[0] = (__int64)(a3 + 4);
    while ( 1 )
    {
      v147 = v146 + 1;
      v31 = haystack;
      v169[0] = 0;
      if ( *((_QWORD *)v30 + 1) )
        v31 = *(const char **)v30;
      sub_8FDE60(v149.m128i_i32[2], v149.m128i_i32[0], (_DWORD)v31, v29, v10, v11, v141, v147, (__int64)v148);
      v32 = (_QWORD *)a3[7];
      v33 = haystack;
      if ( v164 )
        v33 = (const char *)v163;
      v34 = (__int64 (***)())v32[3];
      if ( v34 )
      {
        v35 = **v34;
        if ( v35 != sub_8CE200 )
        {
          ((void (__fastcall *)(_QWORD, const char *))v35)(v32[3], v33);
          v32 = (_QWORD *)a3[7];
        }
      }
      v36 = *(__int64 (**)())(*v32 + 200LL);
      if ( (char *)v36 != (char *)sub_8CC600
        || (v32 = (_QWORD *)v32[3]) != nullptr && (v36 = *(__int64 (**)())(*v32 + 8LL), v36 != sub_8C83E0) )
      {
        LODWORD(v29) = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v36)(v32, 1, 1);
        if ( (_DWORD)v29 )
        {
LABEL_114:
          if ( v169[0] )
          {
            v142 = v29;
            qunlink(v169);
            LODWORD(v29) = v142;
          }
          v97 = (_QWORD *)a3[7];
          v143 = v29;
          v98 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v97 + 200LL);
          if ( v98 == sub_8CC600 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v97 + 192LL))(v97);
            v99 = v97[3];
            v100 = v143;
            if ( !v99 || (v101 = *(__int64 (**)())(*(_QWORD *)v99 + 8LL), v101 == sub_8C83E0) )
            {
LABEL_119:
              if ( v163 )
              {
                v144 = v100;
                v164 = 0;
                qfree(v163);
                v100 = v144;
              }
              v152.m128i_i32[3] = v100;
              goto LABEL_122;
            }
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v101)(v99, 0, 0, v143);
          }
          else
          {
            v98(v97, 0, 0);
          }
          v100 = v143;
          goto LABEL_119;
        }
      }
      v37 = haystack;
      if ( v164 )
        v37 = (const char *)v163;
      set_file_ext(v169, 4096, v37, "i64");
      v38 = haystack;
      v39 = *(__int64 (__fastcall **)(_QWORD *, _BYTE *, const char *, const char *))(*a3 + 24LL);
      if ( v164 )
        v38 = (const char *)v163;
      if ( (char *)v39 == (char *)j__lsite_launch_ida_for_cvt64 )
        v40 = lsite_launch_ida_for_cvt64(a3, v169, v38, v148);
      else
        v40 = v39(a3, v169, v38, v148);
      v41 = v40;
      if ( !v40 )
      {
        if ( v151 )
        {
          if ( !v154.m128i_i32[3] )
          {
            v61 = (*(__int64 (__fastcall **)(__int64, __int8 *, const char *))(*(_QWORD *)v141 + 224LL))(
                    v141,
                    &v154.m128i_i8[12],
                    "idb->i64 conversion");
            v29 = v61;
            if ( v61 )
              goto LABEL_114;
          }
        }
        if ( !v8 )
          v8 = &v161;
        v62 = v8[1];
        sub_8FEBC0(&src, a3, v169, v29);
        v63 = haystack;
        if ( n[0] )
          v63 = (const char *)src;
        v64 = (*(__int64 (__fastcall **)(__int64, void **, const char *, const char *, _QWORD))(*(_QWORD *)v141 + 320LL))(
                v141,
                v8,
                v31,
                v63,
                v154.m128i_u32[3]);
        LODWORD(v29) = v64;
        if ( v64 )
        {
          if ( src )
          {
            v145 = v64;
            n[0] = 0;
            qfree(src);
            LODWORD(v29) = v145;
          }
          goto LABEL_114;
        }
        if ( v62 == v8[1] || *((_DWORD *)*v8 + 8 * (_QWORD)v62) == 50 )
        {
          ++v152.m128i_i32[2];
        }
        else
        {
          v65 = (_QWORD *)a3[7];
          v66 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v65 + 200LL);
          if ( v66 == sub_8CC600 )
          {
            (*(void (__fastcall **)(_QWORD))(*v65 + 192LL))(a3[7]);
            v67 = v65[3];
            if ( v67 )
            {
              v68 = *(__int64 (**)())(*(_QWORD *)v67 + 8LL);
              if ( v68 != sub_8C83E0 )
                ((void (__fastcall *)(__int64, _QWORD, _QWORD))v68)(v67, 0, 0);
            }
          }
          else
          {
            v66((_QWORD *)a3[7], 0, 0);
          }
          v167 = nullptr;
          *(_OWORD *)v168 = 0;
          v69 = *((_QWORD *)v30 + 1);
          if ( !v69 )
          {
            v70 = nullptr;
            v71 = nullptr;
            v72 = 1;
            goto LABEL_82;
          }
          v152.m128i_i64[0] = *((_QWORD *)v30 + 1);
          v71 = (void *)qalloc_or_throw(v152.m128i_i64[0]);
          memcpy(v71, *(const void **)v30, v152.m128i_u64[0]);
          v73 = *(_QWORD *)v168;
          v69 = v152.m128i_i64[0];
          v70 = (char *)v167;
          v72 = *(_QWORD *)v168 + 1LL;
          if ( *(_QWORD *)&v168[8] < (unsigned __int64)(*(_QWORD *)v168 + 1LL) )
          {
LABEL_82:
            v152.m128i_i64[0] = v69;
            v167 = (void *)qvector_reserve(&v167, v70, v72, 24);
            v70 = (char *)v167;
            v69 = v152.m128i_i64[0];
            v73 = *(_QWORD *)v168;
          }
          v74 = &v70[24 * v73];
          *(_QWORD *)v74 = v71;
          v75 = nullptr;
          *(__m128i *)(v74 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v69);
          v76 = n[0];
          v77 = ++*(_QWORD *)v168;
          if ( n[0] )
          {
            v152.m128i_i64[0] = n[0];
            v75 = (void *)qalloc_or_throw(n[0]);
            memcpy(v75, src, v152.m128i_u64[0]);
            v77 = *(_QWORD *)v168;
            v76 = v152.m128i_i64[0];
          }
          v78 = (char *)v167;
          if ( *(_QWORD *)&v168[8] < (unsigned __int64)(v77 + 1) )
          {
            v152.m128i_i64[0] = v76;
            v167 = (void *)qvector_reserve(&v167, v167, v77 + 1, 24);
            v77 = *(_QWORD *)v168;
            v78 = (char *)v167;
            v76 = v152.m128i_i64[0];
          }
          v79 = &v78[24 * v77];
          *(_QWORD *)v79 = v75;
          *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
          v80 = *(_QWORD *)v141;
          ++*(_QWORD *)v168;
          (*(void (__fastcall **)(__int64, void **, void **, _QWORD))(v80 + 328))(v141, &v161, &v167, 0);
          v81 = (_QWORD *)a3[7];
          v82 = *(__int64 (**)())(*v81 + 200LL);
          if ( (char *)v82 != (char *)sub_8CC600
            || (v81 = (_QWORD *)v81[3]) != nullptr && (v82 = *(__int64 (**)())(*v81 + 8LL), v82 != sub_8C83E0) )
          {
            ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v82)(v81, 6, v160);
            v133 = (_QWORD *)a3[7];
            v134 = *(__int64 (**)())(*v133 + 200LL);
            if ( (char *)v134 != (char *)sub_8CC600
              || (v133 = (_QWORD *)v133[3]) != nullptr
              && (v29 = (unsigned __int64)sub_8C83E0, v134 = *(__int64 (**)())(*v133 + 8LL), v134 != sub_8C83E0) )
            {
              ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v134)(v133, 1, v146);
            }
          }
          v83 = (char *)v167;
          if ( v167 )
          {
            v84 = *(_QWORD *)v168;
            if ( *(_QWORD *)v168 )
            {
              v85 = 0;
              do
              {
                v86 = &v83[24 * v85];
                v87 = *(void **)v86;
                if ( *(_QWORD *)v86 )
                {
                  *((_QWORD *)v86 + 1) = 0;
                  qfree(v87);
                  v83 = (char *)v167;
                }
                ++v85;
              }
              while ( v84 != v85 );
            }
            *(_QWORD *)v168 = 0;
            qfree(v83);
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        v55 = v163;
        if ( !v163 )
          goto LABEL_58;
LABEL_57:
        v164 = 0;
        qfree(v55);
        goto LABEL_58;
      }
      if ( v8 )
        break;
LABEL_56:
      v55 = v163;
      if ( v163 )
        goto LABEL_57;
LABEL_58:
      v30 += 24;
      if ( v150 == v30 )
        goto LABEL_59;
    }
    error_string = (const char *)get_error_string(0);
    v43 = error_string;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( error_string )
    {
      v44 = strlen(error_string);
      v152.m128i_i64[0] = v44 + 1;
      src = (void *)qvector_reserve(&src, 0, v44 + 1, 1);
      n[0] = v152.m128i_i64[0];
      memmove(src, v43, v44);
      *((_BYTE *)src + v44) = 0;
      v45 = n[0];
      LODWORD(v167) = v41;
      memset(v168, 0, sizeof(v168));
      if ( n[0] )
      {
        *(_QWORD *)v168 = qalloc_or_throw(n[0]);
        *(_QWORD *)&v168[16] = v45;
        v46 = *(_QWORD *)v168;
        memcpy(*(void **)v168, src, v45);
        *(_QWORD *)&v168[8] = v45;
        goto LABEL_49;
      }
    }
    else
    {
      LODWORD(v167) = v41;
      memset(v168, 0, sizeof(v168));
    }
    v46 = 0;
LABEL_49:
    v47 = v8[1];
    v48 = (__int64)*v8;
    v49 = (unsigned __int64)v8[2];
    v50 = (char *)v47 + 1;
    if ( &v167 < *v8 || (v29 = v48 + 32 * v49, (unsigned __int64)&v167 >= v29) )
    {
      if ( v49 < (unsigned __int64)v50 )
      {
        v125 = qvector_reserve(v8, v48, (char *)v47 + 1, 32);
        *v8 = (void *)v125;
        v47 = v8[1];
        v48 = v125;
      }
      v118 = (__m128i *)(v48 + 32LL * (_QWORD)v47);
      v118->m128i_i32[0] = v41;
      v119 = _mm_load_si128((const __m128i *)&v168[8]);
      v118->m128i_i64[1] = v46;
      v118[1] = v119;
    }
    else
    {
      v51 = _mm_loadl_epi64((const __m128i *)&v168[8]);
      v52 = _mm_loadl_epi64((const __m128i *)&v168[16]);
      memset(v168, 0, sizeof(v168));
      if ( v49 < (unsigned __int64)v50 )
      {
        v154.m128i_i64[0] = v52.m128i_i64[0];
        v152.m128i_i64[0] = v51.m128i_i64[0];
        v136 = qvector_reserve(v8, v48, (char *)v47 + 1, 32);
        *v8 = (void *)v136;
        v47 = v8[1];
        v48 = v136;
        v52 = _mm_loadl_epi64(&v154);
        v51 = _mm_loadl_epi64(&v152);
      }
      v53 = (__m128i *)(v48 + 32LL * (_QWORD)v47);
      v53->m128i_i32[0] = v41;
      v53->m128i_i64[1] = v46;
      v53[1] = _mm_unpacklo_epi64(v51, v52);
    }
    v54 = src;
    v8[1] = (char *)v8[1] + 1;
    if ( v54 )
    {
      n[0] = 0;
      qfree(v54);
    }
    goto LABEL_56;
  }
  v152.m128i_i32[2] = 0;
LABEL_59:
  v56 = (_QWORD *)a3[7];
  v57 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v56 + 200LL);
  if ( v57 == sub_8CC600 )
  {
    (*(void (__fastcall **)(_QWORD))(*v56 + 192LL))(a3[7]);
    v58 = v56[3];
    if ( v58 )
    {
      v59 = *(__int64 (**)())(*(_QWORD *)v58 + 8LL);
      if ( v59 != sub_8C83E0 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v59)(v58, 0, 0);
    }
  }
  else
  {
    v57((_QWORD *)a3[7], 0, 0);
  }
  if ( v154.m128i_i8[8] )
  {
    v60 = *(_QWORD *)v141;
    if ( v152.m128i_i32[2] <= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(v60 + 232))(v141, v154.m128i_u32[3]);
    else
      v152.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64, void **, void **, const char *, _QWORD, _QWORD))(v60 + 248))(
                            v141,
                            v8,
                            &v167,
                            "idb->i64 conversion",
                            v154.m128i_u32[3],
                            0);
  }
LABEL_122:
  v102 = (char *)v161;
  if ( v161 )
  {
    v103 = v162;
    if ( (_QWORD)v162 )
    {
      v104 = 0;
      do
      {
        v105 = &v102[32 * v104];
        v106 = *((void **)v105 + 1);
        if ( v106 )
        {
          *((_QWORD *)v105 + 2) = 0;
          qfree(v106);
          v102 = (char *)v161;
        }
        ++v104;
      }
      while ( v103 != v104 );
    }
    *(_QWORD *)&v162 = 0;
    qfree(v102);
  }
  v107 = (char *)v159;
  if ( v159 )
  {
    v108 = v160;
    if ( (_QWORD)v160 )
    {
      v109 = 0;
      do
      {
        v110 = &v107[24 * v109];
        v111 = *(void **)v110;
        if ( *(_QWORD *)v110 )
        {
          *((_QWORD *)v110 + 1) = 0;
          qfree(v111);
          v107 = (char *)v159;
        }
        ++v109;
      }
      while ( v108 != v109 );
    }
    *(_QWORD *)&v160 = 0;
    qfree(v107);
  }
  if ( ptr )
  {
    *(_QWORD *)&v158 = 0;
    qfree(ptr);
  }
LABEL_138:
  v112 = (char *)v155;
  if ( v155 )
  {
    v113 = v156;
    if ( (_QWORD)v156 )
    {
      v114 = 0;
      do
      {
        v115 = &v112[80 * v114];
        v116 = *(void **)v115;
        if ( *(_QWORD *)v115 )
        {
          *((_QWORD *)v115 + 1) = 0;
          qfree(v116);
          v112 = (char *)v155;
        }
        ++v114;
      }
      while ( v113 != v114 );
    }
    *(_QWORD *)&v156 = 0;
    qfree(v112);
  }
  return v152.m128i_u32[3];
}
