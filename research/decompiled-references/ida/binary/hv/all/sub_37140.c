__int64 __fastcall sub_37140(
        __int64 *a1,
        void **a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char *a7)
{
  void **v8; // rbx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  const char **v12; // rbp
  const char **v13; // r14
  const char *v14; // r13
  const char *v15; // rdi
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
  __int64 (*v29)(); // rcx
  char *v30; // rbp
  const char *v31; // r14
  _QWORD *v32; // rdi
  const char *v33; // rsi
  __int64 (***v34)(); // rax
  __int64 (*v35)(); // rdx
  __int64 (*v36)(); // rax
  const char *v37; // rdx
  const char *v38; // rdx
  __int64 (*v39)(); // rax
  __int32 v40; // eax
  __int32 v41; // r15d
  const char *v42; // rax
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
  void *v61; // r15
  const char *v62; // rcx
  int v63; // eax
  _QWORD *v64; // r13
  __int64 (__fastcall *v65)(_QWORD *, unsigned __int8, __int64); // rcx
  __int64 v66; // rdi
  __int64 (*v67)(); // rax
  __int64 v68; // r8
  char *v69; // rsi
  void *v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rax
  char *v73; // rax
  void *v74; // r14
  size_t v75; // r8
  __int64 v76; // rdx
  char *v77; // rsi
  char *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rdi
  __int64 (*v81)(); // rax
  char *v82; // rdx
  __int64 v83; // r14
  __int64 v84; // r13
  char *v85; // rax
  void *v86; // rdi
  size_t v87; // r15
  size_t v88; // r13
  __int64 v89; // r15
  void *v90; // rdx
  __int64 v91; // rsi
  unsigned __int64 v92; // rax
  char *v93; // rdi
  __m128i *v94; // rax
  __m128i v95; // xmm0
  _QWORD *v96; // rbx
  __int64 (__fastcall *v97)(_QWORD *, unsigned __int8, __int64); // r8
  __int64 v98; // rdi
  __int32 v99; // ecx
  __int64 (*v100)(); // rax
  char *v101; // rdx
  __int64 v102; // rbp
  __int64 v103; // rbx
  char *v104; // rax
  void *v105; // rdi
  char *v106; // rdx
  __int64 v107; // rbp
  __int64 v108; // rbx
  char *v109; // rax
  void *v110; // rdi
  char *v111; // rdx
  __int64 v112; // rbp
  __int64 v113; // rbx
  char *v114; // rax
  void *v115; // rdi
  __m128i *v117; // rax
  __m128i v118; // xmm0
  __int64 v119; // rdx
  char *v120; // rsi
  char *v121; // rax
  const char *v122; // rcx
  const char *v123; // rdx
  __int64 v124; // rax
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i *v127; // rdx
  __m128i v128; // xmm0
  __m128i v129; // xmm1
  __m128i *v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // rdi
  __int64 (*v133)(); // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __m128i *v138; // rax
  bool v139; // zf
  __int64 v140; // [rsp+0h] [rbp-1188h]
  int v141; // [rsp+0h] [rbp-1188h]
  unsigned __int32 v142; // [rsp+0h] [rbp-1188h]
  __int32 v143; // [rsp+0h] [rbp-1188h]
  int v144; // [rsp+0h] [rbp-1188h]
  int v145; // [rsp+8h] [rbp-1180h]
  int v146; // [rsp+8h] [rbp-1180h]
  char *v147; // [rsp+10h] [rbp-1178h]
  __m128i v148; // [rsp+18h] [rbp-1170h] BYREF
  char *v149; // [rsp+28h] [rbp-1160h]
  char v150; // [rsp+37h] [rbp-1151h]
  __m128i v151; // [rsp+38h] [rbp-1150h] BYREF
  void **v152; // [rsp+48h] [rbp-1140h]
  __m128i v153; // [rsp+50h] [rbp-1138h] BYREF
  void *v154; // [rsp+60h] [rbp-1128h] BYREF
  __int128 v155; // [rsp+68h] [rbp-1120h]
  void *v156; // [rsp+80h] [rbp-1108h] BYREF
  __int128 v157; // [rsp+88h] [rbp-1100h]
  void *v158; // [rsp+A0h] [rbp-10E8h] BYREF
  __int128 v159; // [rsp+A8h] [rbp-10E0h]
  void *v160; // [rsp+C0h] [rbp-10C8h] BYREF
  __int128 v161; // [rsp+C8h] [rbp-10C0h]
  void *v162; // [rsp+E0h] [rbp-10A8h] BYREF
  __int64 v163; // [rsp+E8h] [rbp-10A0h]
  void *ptr; // [rsp+100h] [rbp-1088h] BYREF
  size_t n[3]; // [rsp+108h] [rbp-1080h]
  void *v166; // [rsp+120h] [rbp-1068h] BYREF
  _BYTE v167[24]; // [rsp+128h] [rbp-1060h] BYREF
  _BYTE v168[4104]; // [rsp+140h] [rbp-1048h] BYREF
  unsigned __int64 v169; // [rsp+1148h] [rbp-40h]

  v8 = a2;
  v153.m128i_i64[1] = __PAIR64__(a5, a6);
  v150 = a6;
  v140 = (__int64)a1;
  v147 = a7;
  v169 = __readfsqword(0x28u);
  v9 = *a1;
  v152 = &v154;
  v154 = nullptr;
  v155 = 0;
  v151.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64 *, void **, void **, __int64, __int64, __int64))(v9 + 208))(
                        a1,
                        a2,
                        &v154,
                        a4,
                        4294967293LL,
                        2);
  if ( v151.m128i_i32[3] )
    goto LABEL_138;
  v156 = nullptr;
  v157 = 0;
  if ( !a7 )
  {
    v138 = (__m128i *)sub_96080(&v156, 0, 38, 1);
    v156 = v138;
    *(_QWORD *)&v157 = 38;
    *v138 = _mm_load_si128((const __m128i *)&xmmword_1302B0);
    v139 = (_QWORD)v157 == 0;
    v138[1] = _mm_load_si128((const __m128i *)&xmmword_1302C0);
    *(__int64 *)((char *)&v138[1].m128i_i64[1] + 5) = 0x6C25207365793D65LL;
    v147 = (char *)v156;
    *((_BYTE *)v156 + 37) = 0;
    if ( v139 )
      v147 = (char *)haystack;
  }
  v12 = (const char **)v154;
  v158 = nullptr;
  v159 = 0;
  v13 = (const char **)((char *)v154 + 80 * v155);
  if ( v154 == v13 )
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
    v15 = (const char *)sub_910F0(v14);
    if ( v15 && !strcasecmp(v15, "idb") )
    {
      if ( *((_DWORD *)v12 + 15) == *((_DWORD *)v12 + 16) )
      {
        v119 = v159;
        v120 = (char *)v158;
        if ( *((_QWORD *)&v159 + 1) < (unsigned __int64)(v159 + 1) )
        {
          v158 = (void *)sub_96080(&v158, v158, v159 + 1, 24);
          v119 = v159;
          v120 = (char *)v158;
        }
        v121 = &v120[24 * v119];
        *(_OWORD *)(v121 + 8) = 0;
        *(_QWORD *)v121 = 0;
        *(_QWORD *)&v159 = v159 + 1;
        v122 = *(const char **)v121;
        v123 = *((const char **)v121 + 1);
        *(_QWORD *)v121 = *v12;
        *((_QWORD *)v121 + 1) = v12[1];
        *((_QWORD *)v121 + 2) = v12[2];
        *v12 = v122;
        v12[1] = v123;
        v12[2] = nullptr;
        goto LABEL_21;
      }
      ptr = nullptr;
      *(_OWORD *)n = 0;
      if ( v14 )
      {
        v16 = strlen(v14);
        v148.m128i_i64[0] = v16 + 1;
        ptr = (void *)sub_96080(&ptr, 0, v16 + 1, 1);
        n[0] = v148.m128i_i64[0];
        memmove(ptr, v14, v16);
        *((_BYTE *)ptr + v16) = 0;
        v17 = n[0];
        v166 = &off_18 + 5;
        memset(v167, 0, sizeof(v167));
        if ( n[0] )
        {
          *(_QWORD *)v167 = sub_96030(n[0]);
          *(_QWORD *)&v167[16] = v17;
          v18 = *(_QWORD *)v167;
          memcpy(*(void **)v167, ptr, v17);
          *(_QWORD *)&v167[8] = v17;
LABEL_14:
          v19 = v8[1];
          v20 = (__int64)*v8;
          v21 = (unsigned __int64)v8[2];
          v22 = (char *)v19 + 1;
          if ( &v166 >= *v8 && (unsigned __int64)&v166 < v20 + 32 * v21 )
          {
            v128 = _mm_loadl_epi64((const __m128i *)&v167[8]);
            v129 = _mm_loadl_epi64((const __m128i *)&v167[16]);
            memset(v167, 0, sizeof(v167));
            if ( v21 < (unsigned __int64)v22 )
            {
              v148.m128i_i64[1] = v129.m128i_i64[0];
              v148.m128i_i64[0] = v128.m128i_i64[0];
              v137 = sub_96080(v8, v20, (char *)v19 + 1, 32);
              *v8 = (void *)v137;
              v19 = v8[1];
              v20 = v137;
              v129 = _mm_loadl_epi64((const __m128i *)&v148.m128i_u64[1]);
              v128 = _mm_loadl_epi64(&v148);
            }
            v130 = (__m128i *)(v20 + 32LL * (_QWORD)v19);
            v130->m128i_i32[0] = 29;
            v130->m128i_i64[1] = v18;
            v130[1] = _mm_unpacklo_epi64(v128, v129);
          }
          else
          {
            if ( v21 < (unsigned __int64)v22 )
            {
              v134 = sub_96080(v8, v20, (char *)v19 + 1, 32);
              *v8 = (void *)v134;
              v19 = v8[1];
              v20 = v134;
            }
            v23 = (__m128i *)(v20 + 32LL * (_QWORD)v19);
            v23->m128i_i32[0] = 29;
            si128 = _mm_load_si128((const __m128i *)&v167[8]);
            v23->m128i_i64[1] = v18;
            v23[1] = si128;
          }
          v25 = ptr;
          v8[1] = (char *)v8[1] + 1;
          if ( v25 )
            goto LABEL_20;
          goto LABEL_21;
        }
      }
      else
      {
        v166 = &off_18 + 5;
        memset(v167, 0, sizeof(v167));
      }
      v18 = 0;
      goto LABEL_14;
    }
    if ( !v8 )
      goto LABEL_21;
    ptr = nullptr;
    *(_OWORD *)n = 0;
    if ( !v14 )
    {
      v166 = &word_36;
      memset(v167, 0, sizeof(v167));
LABEL_153:
      v89 = 0;
      goto LABEL_105;
    }
    v87 = strlen(v14);
    v148.m128i_i64[0] = v87 + 1;
    ptr = (void *)sub_96080(&ptr, 0, v87 + 1, 1);
    n[0] = v148.m128i_i64[0];
    memmove(ptr, v14, v87);
    *((_BYTE *)ptr + v87) = 0;
    v88 = n[0];
    v166 = &word_36;
    memset(v167, 0, sizeof(v167));
    if ( !n[0] )
      goto LABEL_153;
    *(_QWORD *)v167 = sub_96030(n[0]);
    *(_QWORD *)&v167[16] = v88;
    v89 = *(_QWORD *)v167;
    memcpy(*(void **)v167, ptr, v88);
    *(_QWORD *)&v167[8] = v88;
LABEL_105:
    v90 = v8[1];
    v91 = (__int64)*v8;
    v92 = (unsigned __int64)v8[2];
    v93 = (char *)v90 + 1;
    if ( &v166 >= *v8 && (unsigned __int64)&v166 < v91 + 32 * v92 )
    {
      v125 = _mm_loadl_epi64((const __m128i *)&v167[8]);
      v126 = _mm_loadl_epi64((const __m128i *)&v167[16]);
      memset(v167, 0, sizeof(v167));
      if ( v92 < (unsigned __int64)v93 )
      {
        v148.m128i_i64[1] = v126.m128i_i64[0];
        v148.m128i_i64[0] = v125.m128i_i64[0];
        v136 = sub_96080(v8, v91, (char *)v90 + 1, 32);
        *v8 = (void *)v136;
        v90 = v8[1];
        v91 = v136;
        v126 = _mm_loadl_epi64((const __m128i *)&v148.m128i_u64[1]);
        v125 = _mm_loadl_epi64(&v148);
      }
      v127 = (__m128i *)(v91 + 32LL * (_QWORD)v90);
      v127->m128i_i32[0] = 54;
      v127->m128i_i64[1] = v89;
      v127[1] = _mm_unpacklo_epi64(v125, v126);
    }
    else
    {
      if ( v92 < (unsigned __int64)v93 )
      {
        v131 = sub_96080(v8, v91, (char *)v90 + 1, 32);
        *v8 = (void *)v131;
        v90 = v8[1];
        v91 = v131;
      }
      v94 = (__m128i *)(v91 + 32LL * (_QWORD)v90);
      v94->m128i_i32[0] = 54;
      v95 = _mm_load_si128((const __m128i *)&v167[8]);
      v94->m128i_i64[1] = v89;
      v94[1] = v95;
    }
    v25 = ptr;
    v8[1] = (char *)v8[1] + 1;
    if ( v25 )
    {
LABEL_20:
      n[0] = 0;
      j__free(v25);
    }
LABEL_21:
    v12 += 10;
  }
  while ( v13 != v12 );
  v26 = v159;
  v27 = v159;
LABEL_23:
  v28 = (_QWORD *)a3[7];
  v29 = *(__int64 (**)())(*v28 + 200LL);
  if ( (char *)v29 != (char *)sub_34880
    || (v28 = (_QWORD *)v28[3]) != nullptr && (v29 = *(__int64 (**)())(*v28 + 8LL), v29 != sub_34740) )
  {
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v29)(v28, 6, v27);
    v26 = v159;
  }
  v30 = (char *)v158;
  v160 = nullptr;
  v161 = 0;
  v149 = (char *)v158 + 24 * v26;
  if ( v149 != v158 )
  {
    v145 = 0;
    v148.m128i_i64[1] = (__int64)&v162;
    v151.m128i_i32[2] = 0;
    v148.m128i_i64[0] = (__int64)(a3 + 4);
    while ( 1 )
    {
      v146 = v145 + 1;
      v31 = haystack;
      v168[0] = 0;
      if ( *((_QWORD *)v30 + 1) )
        v31 = *(const char **)v30;
      sub_64590(v148.m128i_i32[2], v148.m128i_i32[0], (_DWORD)v31, (_DWORD)v29, v10, v11, v140, v146, (__int64)v147);
      v32 = (_QWORD *)a3[7];
      v33 = haystack;
      if ( v163 )
        v33 = (const char *)v162;
      v34 = (__int64 (***)())v32[3];
      if ( v34 )
      {
        v35 = **v34;
        if ( v35 != sub_16350 )
        {
          ((void (__fastcall *)(_QWORD, const char *))v35)(v32[3], v33);
          v32 = (_QWORD *)a3[7];
        }
      }
      v36 = *(__int64 (**)())(*v32 + 200LL);
      if ( (char *)v36 != (char *)sub_34880
        || (v32 = (_QWORD *)v32[3]) != nullptr && (v36 = *(__int64 (**)())(*v32 + 8LL), v36 != sub_34740) )
      {
        LODWORD(v29) = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v36)(v32, 1, 1);
        if ( (_DWORD)v29 )
        {
LABEL_114:
          if ( v168[0] )
          {
            v141 = (int)v29;
            sub_95A30(v168);
            LODWORD(v29) = v141;
          }
          v96 = (_QWORD *)a3[7];
          v142 = (unsigned int)v29;
          v97 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v96 + 200LL);
          if ( v97 == sub_34880 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v96 + 192LL))(v96);
            v98 = v96[3];
            v99 = v142;
            if ( !v98 || (v100 = *(__int64 (**)())(*(_QWORD *)v98 + 8LL), v100 == sub_34740) )
            {
LABEL_119:
              if ( v162 )
              {
                v143 = v99;
                v163 = 0;
                j__free(v162);
                v99 = v143;
              }
              v151.m128i_i32[3] = v99;
              goto LABEL_122;
            }
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v100)(v98, 0, 0, v142);
          }
          else
          {
            v97(v96, 0, 0);
          }
          v99 = v142;
          goto LABEL_119;
        }
      }
      v37 = haystack;
      if ( v163 )
        v37 = (const char *)v162;
      sub_99F60(v168, 4096, v37, "i64");
      v38 = haystack;
      v39 = *(__int64 (**)())(*a3 + 24LL);
      if ( v163 )
        v38 = (const char *)v162;
      if ( v39 == sub_17FB0 )
        v40 = sub_37130((__int64)a3, (__int64)v168, (__int64)v38, v147);
      else
        v40 = ((__int64 (__fastcall *)(_QWORD *, _BYTE *, const char *, char *))v39)(a3, v168, v38, v147);
      v41 = v40;
      if ( !v40 )
      {
        if ( v150 )
        {
          if ( !v153.m128i_i32[3] )
          {
            LODWORD(v29) = (*(__int64 (__fastcall **)(__int64, __int8 *, const char *))(*(_QWORD *)v140 + 224LL))(
                             v140,
                             &v153.m128i_i8[12],
                             "idb->i64 conversion");
            if ( (_DWORD)v29 )
              goto LABEL_114;
          }
        }
        if ( !v8 )
          v8 = &v160;
        v61 = v8[1];
        sub_652F0(&ptr, a3, v168);
        v62 = haystack;
        if ( n[0] )
          v62 = (const char *)ptr;
        v63 = (*(__int64 (__fastcall **)(__int64, void **, const char *, const char *, _QWORD))(*(_QWORD *)v140 + 320LL))(
                v140,
                v8,
                v31,
                v62,
                v153.m128i_u32[3]);
        LODWORD(v29) = v63;
        if ( v63 )
        {
          if ( ptr )
          {
            v144 = v63;
            n[0] = 0;
            j__free(ptr);
            LODWORD(v29) = v144;
          }
          goto LABEL_114;
        }
        if ( v61 == v8[1] || *((_DWORD *)*v8 + 8 * (_QWORD)v61) == 50 )
        {
          ++v151.m128i_i32[2];
        }
        else
        {
          v64 = (_QWORD *)a3[7];
          v65 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v64 + 200LL);
          if ( v65 == sub_34880 )
          {
            (*(void (__fastcall **)(_QWORD))(*v64 + 192LL))(a3[7]);
            v66 = v64[3];
            if ( v66 )
            {
              v67 = *(__int64 (**)())(*(_QWORD *)v66 + 8LL);
              if ( v67 != sub_34740 )
                ((void (__fastcall *)(__int64, _QWORD, _QWORD))v67)(v66, 0, 0);
            }
          }
          else
          {
            v65((_QWORD *)a3[7], 0, 0);
          }
          v166 = nullptr;
          *(_OWORD *)v167 = 0;
          v68 = *((_QWORD *)v30 + 1);
          if ( !v68 )
          {
            v69 = nullptr;
            v70 = nullptr;
            v71 = 1;
            goto LABEL_82;
          }
          v151.m128i_i64[0] = *((_QWORD *)v30 + 1);
          v70 = (void *)sub_96030(v151.m128i_i64[0]);
          memcpy(v70, *(const void **)v30, v151.m128i_u64[0]);
          v72 = *(_QWORD *)v167;
          v68 = v151.m128i_i64[0];
          v69 = (char *)v166;
          v71 = *(_QWORD *)v167 + 1LL;
          if ( *(_QWORD *)&v167[8] < (unsigned __int64)(*(_QWORD *)v167 + 1LL) )
          {
LABEL_82:
            v151.m128i_i64[0] = v68;
            v166 = (void *)sub_96080(&v166, v69, v71, 24);
            v69 = (char *)v166;
            v68 = v151.m128i_i64[0];
            v72 = *(_QWORD *)v167;
          }
          v73 = &v69[24 * v72];
          *(_QWORD *)v73 = v70;
          v74 = nullptr;
          *(__m128i *)(v73 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v68);
          v75 = n[0];
          v76 = ++*(_QWORD *)v167;
          if ( n[0] )
          {
            v151.m128i_i64[0] = n[0];
            v74 = (void *)sub_96030(n[0]);
            memcpy(v74, ptr, v151.m128i_u64[0]);
            v76 = *(_QWORD *)v167;
            v75 = v151.m128i_i64[0];
          }
          v77 = (char *)v166;
          if ( *(_QWORD *)&v167[8] < (unsigned __int64)(v76 + 1) )
          {
            v151.m128i_i64[0] = v75;
            v166 = (void *)sub_96080(&v166, v166, v76 + 1, 24);
            v76 = *(_QWORD *)v167;
            v77 = (char *)v166;
            v75 = v151.m128i_i64[0];
          }
          v78 = &v77[24 * v76];
          *(_QWORD *)v78 = v74;
          *(__m128i *)(v78 + 8) = _mm_unpacklo_epi64((__m128i)v75, (__m128i)v75);
          v79 = *(_QWORD *)v140;
          ++*(_QWORD *)v167;
          (*(void (__fastcall **)(__int64, void **, void **, _QWORD))(v79 + 328))(v140, &v160, &v166, 0);
          v80 = (_QWORD *)a3[7];
          v81 = *(__int64 (**)())(*v80 + 200LL);
          if ( (char *)v81 != (char *)sub_34880
            || (v80 = (_QWORD *)v80[3]) != nullptr && (v81 = *(__int64 (**)())(*v80 + 8LL), v81 != sub_34740) )
          {
            ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v81)(v80, 6, v159);
            v132 = (_QWORD *)a3[7];
            v133 = *(__int64 (**)())(*v132 + 200LL);
            if ( (char *)v133 != (char *)sub_34880
              || (v132 = (_QWORD *)v132[3]) != nullptr
              && (v29 = sub_34740, v133 = *(__int64 (**)())(*v132 + 8LL), v133 != sub_34740) )
            {
              ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v133)(v132, 1, v145);
            }
          }
          v82 = (char *)v166;
          if ( v166 )
          {
            v83 = *(_QWORD *)v167;
            if ( *(_QWORD *)v167 )
            {
              v84 = 0;
              do
              {
                v85 = &v82[24 * v84];
                v86 = *(void **)v85;
                if ( *(_QWORD *)v85 )
                {
                  *((_QWORD *)v85 + 1) = 0;
                  j__free(v86);
                  v82 = (char *)v166;
                }
                ++v84;
              }
              while ( v83 != v84 );
            }
            *(_QWORD *)v167 = 0;
            j__free(v82);
          }
        }
        if ( ptr )
        {
          n[0] = 0;
          j__free(ptr);
        }
        v55 = v162;
        if ( !v162 )
          goto LABEL_58;
LABEL_57:
        v163 = 0;
        j__free(v55);
        goto LABEL_58;
      }
      if ( v8 )
        break;
LABEL_56:
      v55 = v162;
      if ( v162 )
        goto LABEL_57;
LABEL_58:
      v30 += 24;
      if ( v149 == v30 )
        goto LABEL_59;
    }
    v42 = (const char *)sub_8FA30(0);
    v43 = v42;
    ptr = nullptr;
    *(_OWORD *)n = 0;
    if ( v42 )
    {
      v44 = strlen(v42);
      v151.m128i_i64[0] = v44 + 1;
      ptr = (void *)sub_96080(&ptr, 0, v44 + 1, 1);
      n[0] = v151.m128i_i64[0];
      memmove(ptr, v43, v44);
      *((_BYTE *)ptr + v44) = 0;
      v45 = n[0];
      LODWORD(v166) = v41;
      memset(v167, 0, sizeof(v167));
      if ( n[0] )
      {
        *(_QWORD *)v167 = sub_96030(n[0]);
        *(_QWORD *)&v167[16] = v45;
        v46 = *(_QWORD *)v167;
        memcpy(*(void **)v167, ptr, v45);
        *(_QWORD *)&v167[8] = v45;
        goto LABEL_49;
      }
    }
    else
    {
      LODWORD(v166) = v41;
      memset(v167, 0, sizeof(v167));
    }
    v46 = 0;
LABEL_49:
    v47 = v8[1];
    v48 = (__int64)*v8;
    v49 = (unsigned __int64)v8[2];
    v50 = (char *)v47 + 1;
    if ( &v166 < *v8 || (v29 = (__int64 (*)())(v48 + 32 * v49), &v166 >= (void **)v29) )
    {
      if ( v49 < (unsigned __int64)v50 )
      {
        v124 = sub_96080(v8, v48, (char *)v47 + 1, 32);
        *v8 = (void *)v124;
        v47 = v8[1];
        v48 = v124;
      }
      v117 = (__m128i *)(v48 + 32LL * (_QWORD)v47);
      v117->m128i_i32[0] = v41;
      v118 = _mm_load_si128((const __m128i *)&v167[8]);
      v117->m128i_i64[1] = v46;
      v117[1] = v118;
    }
    else
    {
      v51 = _mm_loadl_epi64((const __m128i *)&v167[8]);
      v52 = _mm_loadl_epi64((const __m128i *)&v167[16]);
      memset(v167, 0, sizeof(v167));
      if ( v49 < (unsigned __int64)v50 )
      {
        v153.m128i_i64[0] = v52.m128i_i64[0];
        v151.m128i_i64[0] = v51.m128i_i64[0];
        v135 = sub_96080(v8, v48, (char *)v47 + 1, 32);
        *v8 = (void *)v135;
        v47 = v8[1];
        v48 = v135;
        v52 = _mm_loadl_epi64(&v153);
        v51 = _mm_loadl_epi64(&v151);
      }
      v53 = (__m128i *)(v48 + 32LL * (_QWORD)v47);
      v53->m128i_i32[0] = v41;
      v53->m128i_i64[1] = v46;
      v53[1] = _mm_unpacklo_epi64(v51, v52);
    }
    v54 = ptr;
    v8[1] = (char *)v8[1] + 1;
    if ( v54 )
    {
      n[0] = 0;
      j__free(v54);
    }
    goto LABEL_56;
  }
  v151.m128i_i32[2] = 0;
LABEL_59:
  v56 = (_QWORD *)a3[7];
  v57 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int8, __int64))(*v56 + 200LL);
  if ( v57 == sub_34880 )
  {
    (*(void (__fastcall **)(_QWORD))(*v56 + 192LL))(a3[7]);
    v58 = v56[3];
    if ( v58 )
    {
      v59 = *(__int64 (**)())(*(_QWORD *)v58 + 8LL);
      if ( v59 != sub_34740 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v59)(v58, 0, 0);
    }
  }
  else
  {
    v57((_QWORD *)a3[7], 0, 0);
  }
  if ( v153.m128i_i8[8] )
  {
    v60 = *(_QWORD *)v140;
    if ( v151.m128i_i32[2] <= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(v60 + 232))(v140, v153.m128i_u32[3]);
    else
      v151.m128i_i32[3] = (*(__int64 (__fastcall **)(__int64, void **, void **, const char *, _QWORD, _QWORD))(v60 + 248))(
                            v140,
                            v8,
                            &v166,
                            "idb->i64 conversion",
                            v153.m128i_u32[3],
                            0);
  }
LABEL_122:
  v101 = (char *)v160;
  if ( v160 )
  {
    v102 = v161;
    if ( (_QWORD)v161 )
    {
      v103 = 0;
      do
      {
        v104 = &v101[32 * v103];
        v105 = *((void **)v104 + 1);
        if ( v105 )
        {
          *((_QWORD *)v104 + 2) = 0;
          j__free(v105);
          v101 = (char *)v160;
        }
        ++v103;
      }
      while ( v102 != v103 );
    }
    *(_QWORD *)&v161 = 0;
    j__free(v101);
  }
  v106 = (char *)v158;
  if ( v158 )
  {
    v107 = v159;
    if ( (_QWORD)v159 )
    {
      v108 = 0;
      do
      {
        v109 = &v106[24 * v108];
        v110 = *(void **)v109;
        if ( *(_QWORD *)v109 )
        {
          *((_QWORD *)v109 + 1) = 0;
          j__free(v110);
          v106 = (char *)v158;
        }
        ++v108;
      }
      while ( v107 != v108 );
    }
    *(_QWORD *)&v159 = 0;
    j__free(v106);
  }
  if ( v156 )
  {
    *(_QWORD *)&v157 = 0;
    j__free(v156);
  }
LABEL_138:
  v111 = (char *)v154;
  if ( v154 )
  {
    v112 = v155;
    if ( (_QWORD)v155 )
    {
      v113 = 0;
      do
      {
        v114 = &v111[80 * v113];
        v115 = *(void **)v114;
        if ( *(_QWORD *)v114 )
        {
          *((_QWORD *)v114 + 1) = 0;
          j__free(v115);
          v111 = (char *)v154;
        }
        ++v113;
      }
      while ( v112 != v113 );
    }
    *(_QWORD *)&v155 = 0;
    j__free(v111);
  }
  return v151.m128i_u32[3];
}

