__int64 __fastcall sub_8ACF90(
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
  const char *v17; // rsi
  size_t v18; // r13
  __int64 v19; // r15
  void *v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  char *v23; // rdi
  __m128i *v24; // rax
  __m128i si128; // xmm0
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rcx
  char *v31; // rbp
  const char *v32; // r14
  _QWORD *v33; // rdi
  const char *v34; // rsi
  __int64 (***v35)(); // rax
  __int64 (*v36)(); // rdx
  __int64 (*v37)(); // rax
  const char *v38; // rdx
  const char *v39; // rdx
  __int64 (*v40)(); // rax
  __int32 v41; // eax
  __int32 v42; // r15d
  const char *error_string; // rax
  const char *v44; // r14
  size_t v45; // r13
  size_t v46; // r13
  __int64 v47; // r14
  void *v48; // rdx
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  char *v51; // rdi
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i *v54; // rdx
  void *v55; // rdi
  void *v56; // rdi
  _QWORD *v57; // rbp
  __int64 (__fastcall *v58)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v59; // rdi
  __int64 (*v60)(); // rax
  __int64 v61; // rax
  unsigned int v62; // eax
  void *v63; // r15
  const char *v64; // rcx
  int v65; // eax
  _QWORD *v66; // r13
  const char *v67; // rsi
  __int64 (__fastcall *v68)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v69; // rdi
  __int64 (*v70)(); // rax
  __int64 v71; // r8
  const char *v72; // rsi
  void *v73; // r14
  __int64 v74; // rdx
  __int64 v75; // rax
  char *v76; // rax
  void *v77; // r14
  size_t v78; // r8
  __int64 v79; // rdx
  char *v80; // rsi
  char *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rdi
  __int64 (*v84)(); // rax
  char *v85; // rdx
  __int64 v86; // r14
  __int64 v87; // r13
  char *v88; // rax
  void *v89; // rdi
  size_t v90; // r15
  const char *v91; // rsi
  size_t v92; // r13
  __int64 v93; // r15
  void *v94; // rdx
  __int64 v95; // rsi
  unsigned __int64 v96; // rax
  char *v97; // rdi
  __m128i *v98; // rax
  __m128i v99; // xmm0
  _QWORD *v100; // rbx
  __int64 (__fastcall *v101)(_QWORD *, unsigned __int8, __int64); // r8
  __int64 v102; // rdi
  __int32 v103; // ecx
  __int64 (*v104)(); // rax
  char *v105; // rdx
  __int64 v106; // rbp
  __int64 v107; // rbx
  char *v108; // rax
  void *v109; // rdi
  char *v110; // rdx
  __int64 v111; // rbp
  __int64 v112; // rbx
  char *v113; // rax
  void *v114; // rdi
  char *v115; // rdx
  __int64 v116; // rbp
  __int64 v117; // rbx
  char *v118; // rax
  void *v119; // rdi
  __m128i *v121; // rax
  __m128i v122; // xmm0
  __int64 v123; // rdx
  char *v124; // rsi
  char *v125; // rax
  const char *v126; // rcx
  const char *v127; // rdx
  __int64 v128; // rax
  __m128i v129; // xmm0
  __m128i v130; // xmm1
  __m128i *v131; // rdx
  __m128i v132; // xmm0
  __m128i v133; // xmm1
  __m128i *v134; // rdx
  __int64 v135; // rax
  _QWORD *v136; // rdi
  __int64 (*v137)(); // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __m128i *v142; // rax
  bool v143; // zf
  __int64 v144; // [rsp+0h] [rbp-1188h]
  int v145; // [rsp+0h] [rbp-1188h]
  unsigned __int32 v146; // [rsp+0h] [rbp-1188h]
  __int32 v147; // [rsp+0h] [rbp-1188h]
  int v148; // [rsp+0h] [rbp-1188h]
  int v149; // [rsp+8h] [rbp-1180h]
  int v150; // [rsp+8h] [rbp-1180h]
  const char *v151; // [rsp+10h] [rbp-1178h]
  __m128i v152; // [rsp+18h] [rbp-1170h] BYREF
  char *v153; // [rsp+28h] [rbp-1160h]
  char v154; // [rsp+37h] [rbp-1151h]
  __m128i v155; // [rsp+38h] [rbp-1150h] BYREF
  void **v156; // [rsp+48h] [rbp-1140h]
  __m128i v157; // [rsp+50h] [rbp-1138h] BYREF
  void *v158; // [rsp+60h] [rbp-1128h] BYREF
  __int128 v159; // [rsp+68h] [rbp-1120h]
  void *ptr; // [rsp+80h] [rbp-1108h] BYREF
  __int128 v161; // [rsp+88h] [rbp-1100h]
  void *v162; // [rsp+A0h] [rbp-10E8h] BYREF
  __int128 v163; // [rsp+A8h] [rbp-10E0h]
  void *v164; // [rsp+C0h] [rbp-10C8h] BYREF
  __int128 v165; // [rsp+C8h] [rbp-10C0h]
  void *v166; // [rsp+E0h] [rbp-10A8h] BYREF
  __int64 v167; // [rsp+E8h] [rbp-10A0h]
  void *src; // [rsp+100h] [rbp-1088h] BYREF
  size_t n[3]; // [rsp+108h] [rbp-1080h]
  void *v170; // [rsp+120h] [rbp-1068h] BYREF
  _BYTE v171[24]; // [rsp+128h] [rbp-1060h] BYREF
  _BYTE v172[4104]; // [rsp+140h] [rbp-1048h] BYREF
  unsigned __int64 v173; // [rsp+1148h] [rbp-40h]

  v8 = a2;
  v157.m128i_i64[1] = __PAIR64__(a5, a6);
  v154 = a6;
  v144 = (__int64)a1;
  v151 = a7;
  v173 = __readfsqword(0x28u);
  v9 = *a1;
  v156 = &v158;
  v158 = nullptr;
  v159 = 0;
  v155.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64 *, void **, void **, __int64, __int64, __int64))(v9 + 208))(
                        a1,
                        a2,
                        &v158,
                        a4,
                        4294967293LL,
                        2);
  if ( v155.m128i_i32[3] )
    goto LABEL_138;
  ptr = nullptr;
  v161 = 0;
  if ( !a7 )
  {
    v142 = (__m128i *)qvector_reserve(&ptr, 0, 38, 1);
    ptr = v142;
    *(_QWORD *)&v161 = 38;
    *v142 = _mm_load_si128((const __m128i *)&xmmword_2384B40);
    v143 = (_QWORD)v161 == 0;
    v142[1] = _mm_load_si128((const __m128i *)&xmmword_2384B50);
    *(__int64 *)((char *)&v142[1].m128i_i64[1] + 5) = 0x6C25207365793D65LL;
    v151 = (const char *)ptr;
    *((_BYTE *)ptr + 37) = 0;
    if ( v143 )
      v151 = haystack;
  }
  v12 = (const char **)v158;
  v162 = nullptr;
  v163 = 0;
  v13 = (const char **)((char *)v158 + 80 * v159);
  if ( v158 == v13 )
  {
    v28 = 0;
    v27 = 0;
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
        v123 = v163;
        v124 = (char *)v162;
        if ( *((_QWORD *)&v163 + 1) < (unsigned __int64)(v163 + 1) )
        {
          v162 = (void *)qvector_reserve(&v162, v162, v163 + 1, 24);
          v123 = v163;
          v124 = (char *)v162;
        }
        v125 = &v124[24 * v123];
        *(_OWORD *)(v125 + 8) = 0;
        *(_QWORD *)v125 = 0;
        *(_QWORD *)&v163 = v163 + 1;
        v126 = *(const char **)v125;
        v127 = *((const char **)v125 + 1);
        *(_QWORD *)v125 = *v12;
        *((_QWORD *)v125 + 1) = v12[1];
        *((_QWORD *)v125 + 2) = v12[2];
        *v12 = v126;
        v12[1] = v127;
        v12[2] = nullptr;
        goto LABEL_21;
      }
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v14 )
      {
        v16 = strlen(v14);
        v152.m128i_i64[0] = v16 + 1;
        v17 = v14;
        src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
        n[0] = v152.m128i_i64[0];
        memmove(src, v14, v16);
        *((_BYTE *)src + v16) = 0;
        v18 = n[0];
        v170 = &qword_18 + 5;
        memset(v171, 0, sizeof(v171));
        if ( n[0] )
        {
          *(_QWORD *)v171 = qalloc_or_throw(n[0], v17);
          *(_QWORD *)&v171[16] = v18;
          v19 = *(_QWORD *)v171;
          memcpy(*(void **)v171, src, v18);
          *(_QWORD *)&v171[8] = v18;
LABEL_14:
          v20 = v8[1];
          v21 = (__int64)*v8;
          v22 = (unsigned __int64)v8[2];
          v23 = (char *)v20 + 1;
          if ( &v170 >= *v8 && (unsigned __int64)&v170 < v21 + 32 * v22 )
          {
            v132 = _mm_loadl_epi64((const __m128i *)&v171[8]);
            v133 = _mm_loadl_epi64((const __m128i *)&v171[16]);
            memset(v171, 0, sizeof(v171));
            if ( v22 < (unsigned __int64)v23 )
            {
              v152.m128i_i64[1] = v133.m128i_i64[0];
              v152.m128i_i64[0] = v132.m128i_i64[0];
              v141 = qvector_reserve(v8, v21, (char *)v20 + 1, 32);
              *v8 = (void *)v141;
              v20 = v8[1];
              v21 = v141;
              v133 = _mm_loadl_epi64((const __m128i *)&v152.m128i_u64[1]);
              v132 = _mm_loadl_epi64(&v152);
            }
            v134 = (__m128i *)(v21 + 32LL * (_QWORD)v20);
            v134->m128i_i32[0] = 29;
            v134->m128i_i64[1] = v19;
            v134[1] = _mm_unpacklo_epi64(v132, v133);
          }
          else
          {
            if ( v22 < (unsigned __int64)v23 )
            {
              v138 = qvector_reserve(v8, v21, (char *)v20 + 1, 32);
              *v8 = (void *)v138;
              v20 = v8[1];
              v21 = v138;
            }
            v24 = (__m128i *)(v21 + 32LL * (_QWORD)v20);
            v24->m128i_i32[0] = 29;
            si128 = _mm_load_si128((const __m128i *)&v171[8]);
            v24->m128i_i64[1] = v19;
            v24[1] = si128;
          }
          v26 = src;
          v8[1] = (char *)v8[1] + 1;
          if ( v26 )
            goto LABEL_20;
          goto LABEL_21;
        }
      }
      else
      {
        v170 = &qword_18 + 5;
        memset(v171, 0, sizeof(v171));
      }
      v19 = 0;
      goto LABEL_14;
    }
    if ( !v8 )
      goto LABEL_21;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !v14 )
    {
      v170 = &word_36;
      memset(v171, 0, sizeof(v171));
LABEL_153:
      v93 = 0;
      goto LABEL_105;
    }
    v90 = strlen(v14);
    v152.m128i_i64[0] = v90 + 1;
    v91 = v14;
    src = (void *)qvector_reserve(&src, 0, v90 + 1, 1);
    n[0] = v152.m128i_i64[0];
    memmove(src, v14, v90);
    *((_BYTE *)src + v90) = 0;
    v92 = n[0];
    v170 = &word_36;
    memset(v171, 0, sizeof(v171));
    if ( !n[0] )
      goto LABEL_153;
    *(_QWORD *)v171 = qalloc_or_throw(n[0], v91);
    *(_QWORD *)&v171[16] = v92;
    v93 = *(_QWORD *)v171;
    memcpy(*(void **)v171, src, v92);
    *(_QWORD *)&v171[8] = v92;
LABEL_105:
    v94 = v8[1];
    v95 = (__int64)*v8;
    v96 = (unsigned __int64)v8[2];
    v97 = (char *)v94 + 1;
    if ( &v170 >= *v8 && (unsigned __int64)&v170 < v95 + 32 * v96 )
    {
      v129 = _mm_loadl_epi64((const __m128i *)&v171[8]);
      v130 = _mm_loadl_epi64((const __m128i *)&v171[16]);
      memset(v171, 0, sizeof(v171));
      if ( v96 < (unsigned __int64)v97 )
      {
        v152.m128i_i64[1] = v130.m128i_i64[0];
        v152.m128i_i64[0] = v129.m128i_i64[0];
        v140 = qvector_reserve(v8, v95, (char *)v94 + 1, 32);
        *v8 = (void *)v140;
        v94 = v8[1];
        v95 = v140;
        v130 = _mm_loadl_epi64((const __m128i *)&v152.m128i_u64[1]);
        v129 = _mm_loadl_epi64(&v152);
      }
      v131 = (__m128i *)(v95 + 32LL * (_QWORD)v94);
      v131->m128i_i32[0] = 54;
      v131->m128i_i64[1] = v93;
      v131[1] = _mm_unpacklo_epi64(v129, v130);
    }
    else
    {
      if ( v96 < (unsigned __int64)v97 )
      {
        v135 = qvector_reserve(v8, v95, (char *)v94 + 1, 32);
        *v8 = (void *)v135;
        v94 = v8[1];
        v95 = v135;
      }
      v98 = (__m128i *)(v95 + 32LL * (_QWORD)v94);
      v98->m128i_i32[0] = 54;
      v99 = _mm_load_si128((const __m128i *)&v171[8]);
      v98->m128i_i64[1] = v93;
      v98[1] = v99;
    }
    v26 = src;
    v8[1] = (char *)v8[1] + 1;
    if ( v26 )
    {
LABEL_20:
      n[0] = 0;
      qfree(v26);
    }
LABEL_21:
    v12 += 10;
  }
  while ( v13 != v12 );
  v27 = v163;
  v28 = v163;
LABEL_23:
  v29 = (_QWORD *)a3[7];
  v30 = *(_QWORD *)(*v29 + 200LL);
  if ( (__int64 (__fastcall *)(_QWORD *, unsigned __int8, __int64))v30 != sub_8A88C0
    || (v29 = (_QWORD *)v29[3]) != nullptr && (v30 = *(_QWORD *)(*v29 + 8LL), (__int64 (*)())v30 != sub_8A46A0) )
  {
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v30)(v29, 6, v28);
    v27 = v163;
  }
  v31 = (char *)v162;
  v164 = nullptr;
  v165 = 0;
  v153 = (char *)v162 + 24 * v27;
  if ( v153 != v162 )
  {
    v149 = 0;
    v152.m128i_i64[1] = (__int64)&v166;
    v155.m128i_i32[2] = 0;
    v152.m128i_i64[0] = (__int64)(a3 + 4);
    while ( 1 )
    {
      v150 = v149 + 1;
      v32 = haystack;
      v172[0] = 0;
      if ( *((_QWORD *)v31 + 1) )
        v32 = *(const char **)v31;
      sub_8DA120(v152.m128i_i32[2], v152.m128i_i32[0], (_DWORD)v32, v30, v10, v11, v144, v150, (__int64)v151);
      v33 = (_QWORD *)a3[7];
      v34 = haystack;
      if ( v167 )
        v34 = (const char *)v166;
      v35 = (__int64 (***)())v33[3];
      if ( v35 )
      {
        v36 = **v35;
        if ( v36 != sub_8AA4C0 )
        {
          ((void (__fastcall *)(_QWORD, const char *))v36)(v33[3], v34);
          v33 = (_QWORD *)a3[7];
        }
      }
      v37 = *(__int64 (**)())(*v33 + 200LL);
      if ( (char *)v37 != (char *)sub_8A88C0
        || (v33 = (_QWORD *)v33[3]) != nullptr && (v37 = *(__int64 (**)())(*v33 + 8LL), v37 != sub_8A46A0) )
      {
        LODWORD(v30) = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v37)(v33, 1, 1);
        if ( (_DWORD)v30 )
        {
LABEL_114:
          if ( v172[0] )
          {
            v145 = v30;
            qunlink(v172);
            LODWORD(v30) = v145;
          }
          v100 = (_QWORD *)a3[7];
          v146 = v30;
          v101 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v100 + 200LL);
          if ( v101 == sub_8A88C0 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v100 + 192LL))(v100);
            v102 = v100[3];
            v103 = v146;
            if ( !v102 || (v104 = *(__int64 (**)())(*(_QWORD *)v102 + 8LL), v104 == sub_8A46A0) )
            {
LABEL_119:
              if ( v166 )
              {
                v147 = v103;
                v167 = 0;
                qfree(v166);
                v103 = v147;
              }
              v155.m128i_i32[3] = v103;
              goto LABEL_122;
            }
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v104)(v102, 0, 0, v146);
          }
          else
          {
            v101(v100, 0, 0);
          }
          v103 = v146;
          goto LABEL_119;
        }
      }
      v38 = haystack;
      if ( v167 )
        v38 = (const char *)v166;
      set_file_ext(v172, 4096, v38, "i64");
      v39 = haystack;
      v40 = *(__int64 (**)())(*a3 + 24LL);
      if ( v167 )
        v39 = (const char *)v166;
      if ( v40 == j__lsite_launch_ida_for_cvt64 )
        v41 = lsite_launch_ida_for_cvt64(a3, v172, v39, v151);
      else
        v41 = ((__int64 (__fastcall *)(_QWORD *, _BYTE *, const char *, const char *))v40)(a3, v172, v39, v151);
      v42 = v41;
      if ( !v41 )
      {
        if ( v154 )
        {
          if ( !v157.m128i_i32[3] )
          {
            v62 = (*(__int64 (__fastcall **)(__int64, __int8 *, const char *))(*(_QWORD *)v144 + 224LL))(
                    v144,
                    &v157.m128i_i8[12],
                    "idb->i64 conversion");
            v30 = v62;
            if ( v62 )
              goto LABEL_114;
          }
        }
        if ( !v8 )
          v8 = &v164;
        v63 = v8[1];
        sub_8DAE80(&src, a3, v172, v30);
        v64 = haystack;
        if ( n[0] )
          v64 = (const char *)src;
        v65 = (*(__int64 (__fastcall **)(__int64, void **, const char *, const char *, _QWORD))(*(_QWORD *)v144 + 320LL))(
                v144,
                v8,
                v32,
                v64,
                v157.m128i_u32[3]);
        LODWORD(v30) = v65;
        if ( v65 )
        {
          if ( src )
          {
            v148 = v65;
            n[0] = 0;
            qfree(src);
            LODWORD(v30) = v148;
          }
          goto LABEL_114;
        }
        if ( v63 == v8[1] || *((_DWORD *)*v8 + 8 * (_QWORD)v63) == 50 )
        {
          ++v155.m128i_i32[2];
        }
        else
        {
          v66 = (_QWORD *)a3[7];
          v67 = (const char *)sub_8A88C0;
          v68 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v66 + 200LL);
          if ( v68 == sub_8A88C0 )
          {
            (*(void (__fastcall **)(_QWORD))(*v66 + 192LL))(a3[7]);
            v69 = v66[3];
            if ( v69 )
            {
              v67 = (const char *)sub_8A46A0;
              v70 = *(__int64 (**)())(*(_QWORD *)v69 + 8LL);
              if ( v70 != sub_8A46A0 )
              {
                v67 = nullptr;
                ((void (__fastcall *)(__int64, _QWORD, _QWORD))v70)(v69, 0, 0);
              }
            }
          }
          else
          {
            v67 = nullptr;
            v68((_QWORD *)a3[7], 0, 0);
          }
          v170 = nullptr;
          *(_OWORD *)v171 = 0;
          v71 = *((_QWORD *)v31 + 1);
          if ( !v71 )
          {
            v72 = nullptr;
            v73 = nullptr;
            v74 = 1;
            goto LABEL_82;
          }
          v155.m128i_i64[0] = *((_QWORD *)v31 + 1);
          v73 = (void *)qalloc_or_throw(v155.m128i_i64[0], v67);
          memcpy(v73, *(const void **)v31, v155.m128i_u64[0]);
          v75 = *(_QWORD *)v171;
          v71 = v155.m128i_i64[0];
          v72 = (const char *)v170;
          v74 = *(_QWORD *)v171 + 1LL;
          if ( *(_QWORD *)&v171[8] < (unsigned __int64)(*(_QWORD *)v171 + 1LL) )
          {
LABEL_82:
            v155.m128i_i64[0] = v71;
            v170 = (void *)qvector_reserve(&v170, v72, v74, 24);
            v72 = (const char *)v170;
            v71 = v155.m128i_i64[0];
            v75 = *(_QWORD *)v171;
          }
          v76 = (char *)&v72[24 * v75];
          *(_QWORD *)v76 = v73;
          v77 = nullptr;
          *(__m128i *)(v76 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
          v78 = n[0];
          v79 = ++*(_QWORD *)v171;
          if ( n[0] )
          {
            v155.m128i_i64[0] = n[0];
            v77 = (void *)qalloc_or_throw(n[0], v72);
            memcpy(v77, src, v155.m128i_u64[0]);
            v79 = *(_QWORD *)v171;
            v78 = v155.m128i_i64[0];
          }
          v80 = (char *)v170;
          if ( *(_QWORD *)&v171[8] < (unsigned __int64)(v79 + 1) )
          {
            v155.m128i_i64[0] = v78;
            v170 = (void *)qvector_reserve(&v170, v170, v79 + 1, 24);
            v79 = *(_QWORD *)v171;
            v80 = (char *)v170;
            v78 = v155.m128i_i64[0];
          }
          v81 = &v80[24 * v79];
          *(_QWORD *)v81 = v77;
          *(__m128i *)(v81 + 8) = _mm_unpacklo_epi64((__m128i)v78, (__m128i)v78);
          v82 = *(_QWORD *)v144;
          ++*(_QWORD *)v171;
          (*(void (__fastcall **)(__int64, void **, void **, _QWORD))(v82 + 328))(v144, &v164, &v170, 0);
          v83 = (_QWORD *)a3[7];
          v84 = *(__int64 (**)())(*v83 + 200LL);
          if ( (char *)v84 != (char *)sub_8A88C0
            || (v83 = (_QWORD *)v83[3]) != nullptr && (v84 = *(__int64 (**)())(*v83 + 8LL), v84 != sub_8A46A0) )
          {
            ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v84)(v83, 6, v163);
            v136 = (_QWORD *)a3[7];
            v137 = *(__int64 (**)())(*v136 + 200LL);
            if ( (char *)v137 != (char *)sub_8A88C0
              || (v136 = (_QWORD *)v136[3]) != nullptr
              && (v30 = (unsigned __int64)sub_8A46A0, v137 = *(__int64 (**)())(*v136 + 8LL), v137 != sub_8A46A0) )
            {
              ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v137)(v136, 1, v149);
            }
          }
          v85 = (char *)v170;
          if ( v170 )
          {
            v86 = *(_QWORD *)v171;
            if ( *(_QWORD *)v171 )
            {
              v87 = 0;
              do
              {
                v88 = &v85[24 * v87];
                v89 = *(void **)v88;
                if ( *(_QWORD *)v88 )
                {
                  *((_QWORD *)v88 + 1) = 0;
                  qfree(v89);
                  v85 = (char *)v170;
                }
                ++v87;
              }
              while ( v86 != v87 );
            }
            *(_QWORD *)v171 = 0;
            qfree(v85);
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        v56 = v166;
        if ( !v166 )
          goto LABEL_58;
LABEL_57:
        v167 = 0;
        qfree(v56);
        goto LABEL_58;
      }
      if ( v8 )
        break;
LABEL_56:
      v56 = v166;
      if ( v166 )
        goto LABEL_57;
LABEL_58:
      v31 += 24;
      if ( v153 == v31 )
        goto LABEL_59;
    }
    error_string = (const char *)get_error_string(0);
    v44 = error_string;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( error_string )
    {
      v45 = strlen(error_string);
      v155.m128i_i64[0] = v45 + 1;
      src = (void *)qvector_reserve(&src, 0, v45 + 1, 1);
      n[0] = v155.m128i_i64[0];
      memmove(src, v44, v45);
      *((_BYTE *)src + v45) = 0;
      v46 = n[0];
      LODWORD(v170) = v42;
      memset(v171, 0, sizeof(v171));
      if ( n[0] )
      {
        *(_QWORD *)v171 = qalloc_or_throw(n[0], v44);
        *(_QWORD *)&v171[16] = v46;
        v47 = *(_QWORD *)v171;
        memcpy(*(void **)v171, src, v46);
        *(_QWORD *)&v171[8] = v46;
        goto LABEL_49;
      }
    }
    else
    {
      LODWORD(v170) = v42;
      memset(v171, 0, sizeof(v171));
    }
    v47 = 0;
LABEL_49:
    v48 = v8[1];
    v49 = (__int64)*v8;
    v50 = (unsigned __int64)v8[2];
    v51 = (char *)v48 + 1;
    if ( &v170 < *v8 || (v30 = v49 + 32 * v50, (unsigned __int64)&v170 >= v30) )
    {
      if ( v50 < (unsigned __int64)v51 )
      {
        v128 = qvector_reserve(v8, v49, (char *)v48 + 1, 32);
        *v8 = (void *)v128;
        v48 = v8[1];
        v49 = v128;
      }
      v121 = (__m128i *)(v49 + 32LL * (_QWORD)v48);
      v121->m128i_i32[0] = v42;
      v122 = _mm_load_si128((const __m128i *)&v171[8]);
      v121->m128i_i64[1] = v47;
      v121[1] = v122;
    }
    else
    {
      v52 = _mm_loadl_epi64((const __m128i *)&v171[8]);
      v53 = _mm_loadl_epi64((const __m128i *)&v171[16]);
      memset(v171, 0, sizeof(v171));
      if ( v50 < (unsigned __int64)v51 )
      {
        v157.m128i_i64[0] = v53.m128i_i64[0];
        v155.m128i_i64[0] = v52.m128i_i64[0];
        v139 = qvector_reserve(v8, v49, (char *)v48 + 1, 32);
        *v8 = (void *)v139;
        v48 = v8[1];
        v49 = v139;
        v53 = _mm_loadl_epi64(&v157);
        v52 = _mm_loadl_epi64(&v155);
      }
      v54 = (__m128i *)(v49 + 32LL * (_QWORD)v48);
      v54->m128i_i32[0] = v42;
      v54->m128i_i64[1] = v47;
      v54[1] = _mm_unpacklo_epi64(v52, v53);
    }
    v55 = src;
    v8[1] = (char *)v8[1] + 1;
    if ( v55 )
    {
      n[0] = 0;
      qfree(v55);
    }
    goto LABEL_56;
  }
  v155.m128i_i32[2] = 0;
LABEL_59:
  v57 = (_QWORD *)a3[7];
  v58 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v57 + 200LL);
  if ( v58 == sub_8A88C0 )
  {
    (*(void (__fastcall **)(_QWORD))(*v57 + 192LL))(a3[7]);
    v59 = v57[3];
    if ( v59 )
    {
      v60 = *(__int64 (**)())(*(_QWORD *)v59 + 8LL);
      if ( v60 != sub_8A46A0 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v60)(v59, 0, 0);
    }
  }
  else
  {
    v58((_QWORD *)a3[7], 0, 0);
  }
  if ( v157.m128i_i8[8] )
  {
    v61 = *(_QWORD *)v144;
    if ( v155.m128i_i32[2] <= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(v61 + 232))(v144, v157.m128i_u32[3]);
    else
      v155.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64, void **, void **, const char *, _QWORD, _QWORD))(v61 + 248))(
                            v144,
                            v8,
                            &v170,
                            "idb->i64 conversion",
                            v157.m128i_u32[3],
                            0);
  }
LABEL_122:
  v105 = (char *)v164;
  if ( v164 )
  {
    v106 = v165;
    if ( (_QWORD)v165 )
    {
      v107 = 0;
      do
      {
        v108 = &v105[32 * v107];
        v109 = *((void **)v108 + 1);
        if ( v109 )
        {
          *((_QWORD *)v108 + 2) = 0;
          qfree(v109);
          v105 = (char *)v164;
        }
        ++v107;
      }
      while ( v106 != v107 );
    }
    *(_QWORD *)&v165 = 0;
    qfree(v105);
  }
  v110 = (char *)v162;
  if ( v162 )
  {
    v111 = v163;
    if ( (_QWORD)v163 )
    {
      v112 = 0;
      do
      {
        v113 = &v110[24 * v112];
        v114 = *(void **)v113;
        if ( *(_QWORD *)v113 )
        {
          *((_QWORD *)v113 + 1) = 0;
          qfree(v114);
          v110 = (char *)v162;
        }
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)&v163 = 0;
    qfree(v110);
  }
  if ( ptr )
  {
    *(_QWORD *)&v161 = 0;
    qfree(ptr);
  }
LABEL_138:
  v115 = (char *)v158;
  if ( v158 )
  {
    v116 = v159;
    if ( (_QWORD)v159 )
    {
      v117 = 0;
      do
      {
        v118 = &v115[80 * v117];
        v119 = *(void **)v118;
        if ( *(_QWORD *)v118 )
        {
          *((_QWORD *)v118 + 1) = 0;
          qfree(v119);
          v115 = (char *)v158;
        }
        ++v117;
      }
      while ( v116 != v117 );
    }
    *(_QWORD *)&v159 = 0;
    qfree(v115);
  }
  return v155.m128i_u32[3];
}

