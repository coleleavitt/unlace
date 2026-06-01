__int64 __fastcall read_ioports(_QWORD *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  char *v7; // rbx
  char *v8; // rdi
  __int64 v9; // rbp
  __int64 i; // r15
  char *v11; // r14
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rax
  bool v18; // zf
  const char *v19; // rbx
  char *v20; // rax
  char v21; // r13
  __int64 *v22; // rax
  __int64 v23; // r12
  int v24; // ebx
  void *v25; // rbp
  int v26; // r9d
  char *v27; // rax
  char *v28; // r14
  const char *v29; // r15
  const char *v30; // rax
  const char *v31; // r14
  size_t v32; // rax
  size_t v33; // r15
  size_t v34; // rax
  __int64 v35; // r12
  size_t v36; // rbx
  __int64 v37; // rax
  char *v38; // rsi
  unsigned __int64 v39; // rdi
  void *v40; // rbp
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  char *v43; // rax
  char *v44; // rdx
  __int64 v45; // rbp
  __int64 v46; // rbx
  char *v47; // rax
  void *v48; // rdi
  __m128i v50; // xmm0
  char *v51; // rax
  size_t v52; // r13
  size_t v53; // rax
  bool v54; // r14
  const char *v55; // rbx
  const char *v56; // r15
  char *v57; // rbp
  char *v58; // rax
  bool v59; // dl
  const char *v60; // rax
  _BYTE *v61; // rcx
  void *v62; // rax
  char *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rbp
  size_t v66; // rax
  size_t v67; // r15
  const char *v68; // rdi
  __int64 v69; // r15
  int v70; // r8d
  __int64 v71; // rdx
  size_t v72; // r15
  _QWORD *v73; // r14
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rsi
  __int64 v76; // r15
  size_t v77; // rax
  _QWORD *v78; // r9
  size_t v79; // r8
  _QWORD *v80; // r15
  size_t v81; // rax
  size_t v82; // r14
  __int64 v83; // r12
  unsigned __int64 v84; // rax
  void *v85; // rdx
  char *v86; // rdi
  __int64 v87; // rcx
  const char *v88; // r14
  char *v89; // rax
  void *v90; // rdi
  char *v91; // rdx
  _DWORD *v92; // rax
  __int64 j; // r15
  unsigned __int64 v94; // rsi
  __int64 v95; // rdx
  _QWORD *v96; // rsi
  __int64 v97; // r15
  int v98; // eax
  size_t v99; // rax
  char *v100; // r8
  size_t v101; // rax
  size_t v102; // r14
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rsi
  unsigned __int64 v107; // rdi
  const char *v108; // rsi
  void *v109; // rdi
  _QWORD *v110; // rdx
  void *v111; // rdi
  char *v112; // rdx
  __int64 *v113; // r15
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rsi
  void *v118; // rdi
  char *v119; // rdx
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // rbx
  __int64 v122; // rax
  void *v123; // rdi
  __int64 v124; // rbp
  void *v125; // rdi
  void *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  char v134; // [rsp+0h] [rbp-948h]
  __m128i v135; // [rsp+8h] [rbp-940h] BYREF
  _QWORD *v136; // [rsp+18h] [rbp-930h]
  int *v137; // [rsp+20h] [rbp-928h]
  __int64 v138; // [rsp+28h] [rbp-920h]
  __int64 v139; // [rsp+30h] [rbp-918h]
  void *s2; // [rsp+38h] [rbp-910h]
  char *v141; // [rsp+40h] [rbp-908h]
  bool v142; // [rsp+4Eh] [rbp-8FAh]
  char v143; // [rsp+4Fh] [rbp-8F9h]
  char *s; // [rsp+50h] [rbp-8F8h]
  size_t v145; // [rsp+58h] [rbp-8F0h]
  _QWORD *v146; // [rsp+60h] [rbp-8E8h]
  size_t v147; // [rsp+68h] [rbp-8E0h]
  void *v148; // [rsp+70h] [rbp-8D8h]
  void *v149; // [rsp+78h] [rbp-8D0h]
  int v150; // [rsp+88h] [rbp-8C0h] BYREF
  int v151; // [rsp+8Ch] [rbp-8BCh] BYREF
  void *v152; // [rsp+90h] [rbp-8B8h] BYREF
  __int128 v153; // [rsp+98h] [rbp-8B0h]
  void *v154; // [rsp+B0h] [rbp-898h] BYREF
  __int128 v155; // [rsp+B8h] [rbp-890h]
  void *ptr; // [rsp+D0h] [rbp-878h] BYREF
  __m128i v157; // [rsp+D8h] [rbp-870h] BYREF
  __int64 v158; // [rsp+E8h] [rbp-860h]
  __int128 v159; // [rsp+F0h] [rbp-858h]
  char src[1024]; // [rsp+100h] [rbp-848h] BYREF
  _BYTE v161[1032]; // [rsp+500h] [rbp-448h] BYREF
  unsigned __int64 v162; // [rsp+908h] [rbp-40h]

  s = a3;
  v136 = a1;
  v138 = a2;
  v139 = a4;
  v162 = __readfsqword(0x28u);
  if ( a3 == nullptr || a1 == nullptr )
    sub_375400();
  v4 = (char *)*v136;
  if ( *v136 )
  {
    if ( v136[1] )
    {
      v135.m128i_i64[0] = v136[1];
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = &v4[v5];
        v8 = *(char **)&v4[v5 + 56];
        if ( v8 )
        {
          v9 = *((_QWORD *)v7 + 8);
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = &v8[48 * i];
              v12 = *((void **)v11 + 3);
              if ( v12 )
              {
                *((_QWORD *)v11 + 4) = 0;
                qfree(v12);
              }
              v13 = *(void **)v11;
              if ( *(_QWORD *)v11 )
              {
                *((_QWORD *)v11 + 1) = 0;
                qfree(v13);
              }
              v8 = *((char **)v7 + 7);
            }
          }
          *((_QWORD *)v7 + 8) = 0;
          qfree(v8);
        }
        v14 = *((void **)v7 + 4);
        if ( v14 )
        {
          *((_QWORD *)v7 + 5) = 0;
          qfree(v14);
        }
        v15 = *((void **)v7 + 1);
        if ( v15 )
        {
          *((_QWORD *)v7 + 2) = 0;
          qfree(v15);
        }
        ++v6;
        v5 += 88;
        v4 = (char *)*v136;
      }
      while ( v135.m128i_i64[0] != v6 );
    }
    v16 = v136;
    v136[1] = 0;
    qfree(v4);
    *v16 = 0;
    v16[2] = 0;
  }
  v152 = nullptr;
  v153 = 0;
  if ( !(unsigned __int8)qisabspath(s) )
  {
    sub_811EA0((__int64 *)&v152, (int)s);
    v17 = v153;
    goto LABEL_22;
  }
  ptr = nullptr;
  v157 = 0;
  v34 = strlen(s);
  v35 = v34 + 1;
  v36 = v34;
  ptr = (void *)qvector_reserve(&ptr, 0, v34 + 1, 1);
  v157.m128i_i64[0] = v35;
  memmove(ptr, s, v36);
  *((_BYTE *)ptr + v36) = 0;
  v37 = v153;
  v38 = (char *)v152;
  v39 = v153 + 1;
  if ( &ptr < v152 || &ptr >= (void **)((char *)v152 + 24 * *((_QWORD *)&v153 + 1)) )
  {
    if ( *((_QWORD *)&v153 + 1) < v39 )
    {
      v152 = (void *)qvector_reserve(&v152, v152, v153 + 1, 24);
      v38 = (char *)v152;
      v37 = v153;
    }
    v50 = _mm_loadu_si128(&v157);
    v51 = &v38[24 * v37];
    *(_QWORD *)v51 = ptr;
    *(__m128i *)(v51 + 8) = v50;
    v17 = v153 + 1;
    *(_QWORD *)&v153 = v153 + 1;
LABEL_22:
    if ( !v17 )
      goto LABEL_58;
    goto LABEL_23;
  }
  v40 = ptr;
  v41 = _mm_loadl_epi64(&v157);
  ptr = nullptr;
  v42 = _mm_loadl_epi64((const __m128i *)&v157.m128i_u64[1]);
  v157 = 0;
  if ( *((_QWORD *)&v153 + 1) < v39 )
  {
    v135.m128i_i64[1] = v42.m128i_i64[0];
    v135.m128i_i64[0] = v41.m128i_i64[0];
    v152 = (void *)qvector_reserve(&v152, v152, v153 + 1, 24);
    v38 = (char *)v152;
    v42 = _mm_loadl_epi64((const __m128i *)&v135.m128i_u64[1]);
    v37 = v153;
    v41 = _mm_loadl_epi64(&v135);
  }
  v43 = &v38[24 * v37];
  *(_QWORD *)v43 = v40;
  *(__m128i *)(v43 + 8) = _mm_unpacklo_epi64(v41, v42);
  v17 = v153 + 1;
  *(_QWORD *)&v153 = v153 + 1;
  if ( !ptr )
    goto LABEL_22;
  v157.m128i_i64[0] = 0;
  qfree(ptr);
  if ( !(_QWORD)v153 )
    goto LABEL_58;
LABEL_23:
  v142 = 0;
  if ( v138 )
  {
    v18 = *(_QWORD *)(v138 + 8) == 0;
    v142 = 1;
    if ( !v18 )
    {
      v19 = *(const char **)v138;
      v20 = strchr(*(const char **)v138, 47);
      if ( v20 )
        v142 = v20 - v19 == -1;
    }
  }
  v135.m128i_i64[0] = 0;
  v143 = 1;
  while ( 2 )
  {
    v135.m128i_i64[1] = (__int64)haystack;
    v22 = (__int64 *)((char *)v152 + 24 * v135.m128i_i64[0]);
    if ( v22[1] )
      v135.m128i_i64[1] = *v22;
    v23 = fopenRT(v135.m128i_i64[1]);
    if ( !v23 )
LABEL_58:
      sub_375400();
    v24 = 0;
    v154 = nullptr;
    v137 = &v151;
    v21 = 1;
    v25 = &v154;
    v155 = 0;
LABEL_40:
    while ( qgetline() >= 0 )
    {
      ++v24;
      if ( qcleanline(v25, 59, 7) > 0 )
      {
        v27 = &byte_2CA12E1;
        if ( (_QWORD)v155 )
          v27 = (char *)v154;
        if ( *v27 == 46 )
        {
          v28 = (char *)v154;
          v29 = (char *)v154 + 1;
          if ( !strncasecmp((const char *)v154 + 1, "default", 7u) )
          {
            if ( v138 && *(_QWORD *)(v138 + 8) <= 1u )
            {
              v30 = (const char *)skip_spaces(v28 + 8);
              v31 = v30;
              if ( !v30 || (v32 = strlen(v30), (v33 = v32) == 0) )
              {
                *(_QWORD *)(v138 + 8) = 0;
                goto LABEL_51;
              }
              v85 = (void *)(v32 + 1);
              v86 = *(char **)v138;
              if ( *(_QWORD *)(v138 + 16) < v32 + 1 )
              {
                v108 = *(const char **)v138;
                s2 = (void *)(v32 + 1);
                v86 = (char *)qvector_reserve(v138, v108, v85, 1);
                v85 = s2;
                *(_QWORD *)v138 = v86;
              }
              *(_QWORD *)(v138 + 8) = v85;
              memmove(v86, v31, v33);
              v87 = v138;
              *(_BYTE *)(*(_QWORD *)v138 + v33) = 0;
              if ( *(_QWORD *)(v87 + 8)
                && (v88 = *(const char **)v138, (v89 = strchr(*(const char **)v138, 47)) != nullptr) )
              {
                v142 = v89 - v88 == -1;
              }
              else
              {
LABEL_51:
                v142 = 1;
              }
            }
          }
          else
          {
            v21 = 1;
            if ( v138 )
            {
              v52 = *(_QWORD *)(v138 + 8);
              s2 = (void *)haystack;
              if ( v52 )
              {
                s2 = *(void **)v138;
                v53 = strlen((const char *)s2);
                LODWORD(v141) = v24;
                v54 = v142;
                v55 = v29;
                v52 = v53;
                v56 = (const char *)s2;
              }
              else
              {
                LODWORD(v141) = v24;
                v54 = v142;
                v55 = v29;
                v56 = haystack;
              }
              s2 = v25;
              while ( 1 )
              {
                v57 = strchr(v55, 44);
                if ( !v57 )
                  v57 = (char *)&v55[strlen(v55)];
                if ( v54 )
                {
                  v58 = strchr(v55, 47);
                  if ( v58 )
                  {
                    v59 = v58 < v57;
                    v60 = v58 + 1;
                    if ( v59 )
                      v55 = v60;
                  }
                }
                if ( v57 - v55 == v52 && !memcmp(v55, v56, v52) )
                {
                  v24 = (int)v141;
                  v25 = s2;
                  v21 = 1;
                  goto LABEL_40;
                }
                if ( !*v57 )
                  break;
                v55 = v57 + 1;
              }
              v24 = (int)v141;
              v25 = s2;
              v21 = 0;
            }
          }
        }
        else if ( v21 )
        {
          src[1023] = 0;
          v161[1023] = 0;
          v150 = 0;
          if ( (unsigned int)qsscanf((int)v154, (int)"%1023s %1023s%n", (int)src, (int)v161, (int)v137, v26, v134) == 2
            && (v21 = atoea(&v150, v161)) != 0 )
          {
            v61 = (_BYTE *)skip_spaces((char *)v154 + v151);
            v62 = nullptr;
            if ( *v61 )
              v62 = v61;
            s2 = v62;
            v63 = strchr(src, 46);
            v64 = v136[1];
            if ( v63 )
            {
              *v63 = 0;
              v141 = v63 + 1;
              if ( !v64 )
                goto LABEL_174;
              LOBYTE(v145) = v21;
              v148 = v25;
              v65 = 0;
              v66 = *v136;
              LODWORD(v146) = v150;
              v147 = v66;
              v67 = v66 + 8;
              while ( 1 )
              {
                v68 = haystack;
                if ( *(_QWORD *)(v67 + 8) )
                  v68 = *(const char **)v67;
                if ( !strcmp(v68, src) )
                  break;
                ++v65;
                v67 += 88LL;
                if ( v65 == v64 )
                  goto LABEL_174;
              }
              v69 = v65;
              v70 = (int)v146;
              v21 = v145;
              v25 = v148;
              if ( v64 == v69 )
LABEL_174:
                sub_375400();
              v71 = 11 * v69;
              v72 = (int)v146;
              v73 = (_QWORD *)(v147 + 8 * v71);
              v74 = v73[8];
              v75 = v73[7];
              if ( (int)v146 >= v74 )
              {
                v103 = (int)(((_DWORD)v146 + 8) & 0xFFFFFFF8);
                if ( v103 != v74 )
                {
                  ptr = nullptr;
                  v158 = 0;
                  v157 = 0;
                  v159 = 0;
                  if ( v103 < v74 )
                  {
                    v146 = (_QWORD *)(int)(((_DWORD)v146 + 8) & 0xFFFFFFF8);
                    LODWORD(v148) = v70;
                    v149 = v25;
                    v145 = v70;
                    v120 = v74;
                    LODWORD(v147) = v24;
                    v121 = (int)((v70 + 8) & 0xFFFFFFF8);
                    do
                    {
                      v122 = v73[7] + 48 * v121;
                      v123 = *(void **)(v122 + 24);
                      v124 = v122;
                      if ( v123 )
                      {
                        *(_QWORD *)(v122 + 32) = 0;
                        qfree(v123);
                      }
                      v125 = *(void **)v124;
                      if ( *(_QWORD *)v124 )
                      {
                        *(_QWORD *)(v124 + 8) = 0;
                        qfree(v125);
                      }
                      ++v121;
                    }
                    while ( v121 < v120 );
                    v72 = v145;
                    v24 = v147;
                    v25 = v149;
                    v75 = v73[7];
                    v73[8] = v146;
                  }
                  else
                  {
                    v104 = v73[9];
                    if ( (unsigned __int64)&ptr < v75 || (unsigned __int64)&ptr >= v75 + 48 * v104 )
                    {
                      if ( v104 < v103 )
                      {
                        v145 = (int)(((_DWORD)v146 + 8) & 0xFFFFFFF8);
                        v132 = qvector_reserve(v73 + 7, v75, v103, 48);
                        v73[7] = v132;
                        v75 = v132;
                        v74 = v73[8];
                        v103 = v145;
                      }
                      if ( v74 < v103 )
                      {
                        v116 = 48 * v74;
                        do
                        {
                          v117 = v116 + v75;
                          ++v74;
                          v116 += 48;
                          *(_QWORD *)v117 = 0;
                          *(_QWORD *)(v117 + 24) = 0;
                          *(_OWORD *)(v117 + 8) = 0;
                          *(_OWORD *)(v117 + 32) = 0;
                          v75 = v73[7];
                        }
                        while ( v103 != v74 );
                      }
                      v73[8] = v103;
                    }
                    else
                    {
                      if ( v104 < v103 )
                      {
                        v145 = (int)(((_DWORD)v146 + 8) & 0xFFFFFFF8);
                        v133 = qvector_reserve(v73 + 7, v75, v103, 48);
                        v73[7] = v133;
                        v75 = v133;
                        v74 = v73[8];
                        v103 = v145;
                      }
                      if ( v74 >= v103 )
                      {
                        v107 = v73[7];
                      }
                      else
                      {
                        v105 = 48 * v74;
                        do
                        {
                          v106 = v105 + v75;
                          ++v74;
                          v105 += 48;
                          *(_QWORD *)v106 = 0;
                          *(_QWORD *)(v106 + 24) = 0;
                          *(_OWORD *)(v106 + 8) = 0;
                          *(_OWORD *)(v106 + 32) = 0;
                          v75 = v73[7];
                          v107 = v75;
                        }
                        while ( v103 != v74 );
                      }
                      v73[8] = v103;
                      v75 = v107;
                    }
                  }
                }
              }
              v76 = 48 * v72;
              if ( *(_QWORD *)(v75 + v76 + 8) > 1u )
                sub_375400();
              v145 = v75 + v76;
              v77 = strlen(v141);
              v78 = (_QWORD *)v145;
              v79 = v77;
              if ( v77 )
              {
                v109 = *(void **)v145;
                v110 = (_QWORD *)(v77 + 1);
                if ( *(_QWORD *)(v145 + 16) < v77 + 1 )
                {
                  v126 = *(void **)v145;
                  v147 = v77;
                  v146 = (_QWORD *)(v77 + 1);
                  v127 = qvector_reserve(v145, v126, v110, 1);
                  v78 = (_QWORD *)v145;
                  v79 = v147;
                  v109 = (void *)v127;
                  v110 = v146;
                  *(_QWORD *)v145 = v127;
                }
                v78[1] = v110;
                v146 = v78;
                v145 = v79;
                memmove(v109, v141, v79);
                *(_BYTE *)(*v146 + v145) = 0;
              }
              else
              {
                *(_QWORD *)(v145 + 8) = 0;
              }
              v80 = (_QWORD *)(v73[7] + v76);
              if ( s2 && (v81 = strlen((const char *)s2), (v82 = v81) != 0) )
              {
                v90 = (void *)v80[3];
                v91 = (char *)(v81 + 1);
                if ( v80[5] < v81 + 1 )
                {
                  v128 = v80[3];
                  v141 = (char *)(v81 + 1);
                  v129 = qvector_reserve(v80 + 3, v128, v91, 1);
                  v80[3] = v129;
                  v91 = v141;
                  v90 = (void *)v129;
                }
                v80[4] = v91;
                memmove(v90, s2, v82);
                *(_BYTE *)(v80[3] + v82) = 0;
              }
              else
              {
                v80[4] = 0;
              }
            }
            else
            {
              if ( v64 )
              {
                v92 = (_DWORD *)*v136;
                for ( j = 0; j != v64; ++j )
                {
                  if ( *v92 == v150 )
                    sub_375400();
                  v92 += 22;
                }
              }
              v94 = v64 + 1;
              v95 = *v136;
              if ( v136[2] < v94 )
              {
                v113 = v136;
                v114 = qvector_reserve(v136, *v136, v94, 88);
                *v113 = v114;
                v95 = v114;
              }
              v96 = v136;
              v97 = v95 + 88LL * v136[1];
              v98 = v150;
              *(_QWORD *)v97 = 0;
              *(_QWORD *)(v97 + 8) = 0;
              *(_QWORD *)(v97 + 32) = 0;
              *(_QWORD *)(v97 + 56) = 0;
              *(_QWORD *)(v97 + 80) = 0;
              *(_OWORD *)(v97 + 16) = 0;
              *(_OWORD *)(v97 + 40) = 0;
              *(_OWORD *)(v97 + 64) = 0;
              ++v96[1];
              *(_DWORD *)v97 = v98;
              v99 = strlen(src);
              v100 = (char *)v99;
              if ( v99 )
              {
                v111 = *(void **)(v97 + 8);
                v112 = (char *)(v99 + 1);
                if ( *(_QWORD *)(v97 + 24) < v99 + 1 )
                {
                  v145 = v99;
                  v141 = (char *)(v99 + 1);
                  v115 = qvector_reserve(v97 + 8, v111, v112, 1);
                  *(_QWORD *)(v97 + 8) = v115;
                  v100 = (char *)v145;
                  v111 = (void *)v115;
                  v112 = v141;
                }
                *(_QWORD *)(v97 + 16) = v112;
                v141 = v100;
                memmove(v111, src, (size_t)v100);
                v141[*(_QWORD *)(v97 + 8)] = 0;
              }
              else
              {
                *(_QWORD *)(v97 + 16) = 0;
              }
              if ( s2 && (v101 = strlen((const char *)s2), (v102 = v101) != 0) )
              {
                v118 = *(void **)(v97 + 32);
                v119 = (char *)(v101 + 1);
                if ( *(_QWORD *)(v97 + 48) < v101 + 1 )
                {
                  v130 = *(_QWORD *)(v97 + 32);
                  v141 = (char *)(v101 + 1);
                  v131 = qvector_reserve(v97 + 32, v130, v119, 1);
                  *(_QWORD *)(v97 + 32) = v131;
                  v119 = v141;
                  v118 = (void *)v131;
                }
                *(_QWORD *)(v97 + 40) = v119;
                memmove(v118, s2, v102);
                *(_BYTE *)(*(_QWORD *)(v97 + 32) + v102) = 0;
              }
              else
              {
                *(_QWORD *)(v97 + 40) = 0;
              }
            }
          }
          else
          {
            ptr = nullptr;
            v157 = 0;
            if ( !v139 )
            {
              ptr = (void *)qvector_reserve(&ptr, 0, 13, 1);
              v157.m128i_i64[0] = 13;
              strcpy((char *)ptr, "syntax error");
LABEL_32:
              sub_375400();
            }
            v21 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD *, void *))(*(_QWORD *)v139 + 16LL))(
                    v139,
                    &ptr,
                    v136,
                    v154);
            if ( !v21 )
              goto LABEL_32;
            if ( ptr )
            {
              v157.m128i_i64[0] = 0;
              qfree(ptr);
            }
            v143 = 0;
          }
        }
      }
    }
    qfclose(v23);
    if ( v154 )
    {
      *(_QWORD *)&v155 = 0;
      qfree(v154);
    }
    if ( ++v135.m128i_i64[0] < (unsigned __int64)v153 )
      continue;
    break;
  }
  v83 = v136[1];
  if ( !v138 )
  {
    if ( v83 || !v143 )
      goto LABEL_59;
LABEL_121:
    sub_375400();
  }
  v84 = *(_QWORD *)(v138 + 8);
  if ( v84 <= 8 )
  {
    if ( v83 || !v143 )
      goto LABEL_59;
    goto LABEL_121;
  }
  if ( strncmp((const char *)(*(_QWORD *)v138 + v84 - 9), "/generic", 8u) && !v83 && v143 )
    goto LABEL_121;
LABEL_59:
  v44 = (char *)v152;
  if ( v152 )
  {
    v45 = v153;
    if ( (_QWORD)v153 )
    {
      v46 = 0;
      do
      {
        v47 = &v44[24 * v46];
        v48 = *(void **)v47;
        if ( *(_QWORD *)v47 )
        {
          *((_QWORD *)v47 + 1) = 0;
          qfree(v48);
          v44 = (char *)v152;
        }
        ++v46;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v153 = 0;
    qfree(v44);
  }
  return v83;
}

