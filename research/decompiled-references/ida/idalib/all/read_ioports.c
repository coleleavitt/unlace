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
  _QWORD *v66; // r8
  const char **v67; // r15
  const char *v68; // rdi
  __int64 v69; // r15
  __int64 v70; // rdx
  size_t v71; // r15
  _QWORD *v72; // r14
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  __int64 v75; // r15
  size_t v76; // rax
  _QWORD *v77; // r9
  size_t v78; // r8
  _QWORD *v79; // r15
  size_t v80; // rax
  size_t v81; // r14
  __int64 v82; // r12
  unsigned __int64 v83; // rax
  void *v84; // rdx
  char *v85; // rdi
  __int64 v86; // rcx
  const char *v87; // r14
  char *v88; // rax
  void *v89; // rdi
  char *v90; // rdx
  _QWORD *v91; // rax
  __int64 j; // r15
  unsigned __int64 v93; // rsi
  __int64 v94; // rdx
  _QWORD *v95; // rsi
  __int64 v96; // r15
  __int64 v97; // rax
  size_t v98; // rax
  char *v99; // r8
  size_t v100; // rax
  size_t v101; // r14
  int v102; // eax
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // r8
  _QWORD *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rsi
  unsigned __int64 v108; // rdi
  const char *v109; // rsi
  void *v110; // rdi
  _QWORD *v111; // rdx
  void *v112; // rdi
  char *v113; // rdx
  __int64 *v114; // r15
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rsi
  void *v119; // rdi
  char *v120; // rdx
  unsigned __int64 v121; // r15
  unsigned __int64 v122; // rbx
  __int64 v123; // rax
  void *v124; // rdi
  __int64 v125; // rbp
  void *v126; // rdi
  void *v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __m128i v135; // [rsp+0h] [rbp-938h] BYREF
  _QWORD *v136; // [rsp+10h] [rbp-928h]
  int *v137; // [rsp+18h] [rbp-920h]
  __int64 v138; // [rsp+20h] [rbp-918h]
  __int64 v139; // [rsp+28h] [rbp-910h]
  void *s2; // [rsp+30h] [rbp-908h]
  char *v141; // [rsp+38h] [rbp-900h]
  char *s; // [rsp+40h] [rbp-8F8h]
  size_t v143; // [rsp+48h] [rbp-8F0h]
  _QWORD *v144; // [rsp+50h] [rbp-8E8h]
  __int64 v145; // [rsp+58h] [rbp-8E0h]
  void *v146; // [rsp+60h] [rbp-8D8h]
  bool v147; // [rsp+6Ah] [rbp-8CEh]
  char v148; // [rsp+6Bh] [rbp-8CDh]
  int v149; // [rsp+6Ch] [rbp-8CCh]
  int v150; // [rsp+74h] [rbp-8C4h] BYREF
  __int64 v151; // [rsp+78h] [rbp-8C0h] BYREF
  void *v152; // [rsp+80h] [rbp-8B8h] BYREF
  __int128 v153; // [rsp+88h] [rbp-8B0h]
  void *v154; // [rsp+A0h] [rbp-898h] BYREF
  __int128 v155; // [rsp+A8h] [rbp-890h]
  void *ptr; // [rsp+C0h] [rbp-878h] BYREF
  __m128i v157; // [rsp+C8h] [rbp-870h] BYREF
  __int64 v158; // [rsp+D8h] [rbp-860h]
  __int128 v159; // [rsp+E0h] [rbp-858h]
  char src[1024]; // [rsp+F0h] [rbp-848h] BYREF
  char v161[1032]; // [rsp+4F0h] [rbp-448h] BYREF
  unsigned __int64 v162; // [rsp+8F8h] [rbp-40h]

  s = a3;
  v136 = a1;
  v138 = a2;
  v139 = a4;
  v162 = __readfsqword(0x28u);
  if ( a3 == nullptr || a1 == nullptr )
    sub_378D50();
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
    sub_835260((__int64 *)&v152, (int)s);
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
    v38 = (char *)qvector_reserve(&v152, v152, v153 + 1, 24);
    v152 = v38;
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
  v147 = 0;
  if ( v138 )
  {
    v18 = *(_QWORD *)(v138 + 8) == 0;
    v147 = 1;
    if ( !v18 )
    {
      v19 = *(const char **)v138;
      v20 = strchr(*(const char **)v138, 47);
      if ( v20 )
        v147 = v20 - v19 == -1;
    }
  }
  v135.m128i_i64[0] = 0;
  v148 = 1;
  while ( 2 )
  {
    v135.m128i_i64[1] = (__int64)haystack;
    v22 = (__int64 *)((char *)v152 + 24 * v135.m128i_i64[0]);
    if ( v22[1] )
      v135.m128i_i64[1] = *v22;
    v23 = fopenRT(v135.m128i_i64[1]);
    if ( !v23 )
LABEL_58:
      sub_378D50();
    v24 = 0;
    v154 = nullptr;
    v137 = &v150;
    v21 = 1;
    v25 = &v154;
    v155 = 0;
LABEL_40:
    while ( qgetline(v25) >= 0 )
    {
      ++v24;
      if ( qcleanline(v25, 59, 7) > 0 )
      {
        v27 = &byte_2CCB1E1;
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
              v84 = (void *)(v32 + 1);
              v85 = *(char **)v138;
              if ( *(_QWORD *)(v138 + 16) < v32 + 1 )
              {
                v109 = *(const char **)v138;
                s2 = (void *)(v32 + 1);
                v85 = (char *)qvector_reserve(v138, v109, v84, 1);
                v84 = s2;
                *(_QWORD *)v138 = v85;
              }
              *(_QWORD *)(v138 + 8) = v84;
              memmove(v85, v31, v33);
              v86 = v138;
              *(_BYTE *)(*(_QWORD *)v138 + v33) = 0;
              if ( *(_QWORD *)(v86 + 8)
                && (v87 = *(const char **)v138, (v88 = strchr(*(const char **)v138, 47)) != nullptr) )
              {
                v147 = v88 - v87 == -1;
              }
              else
              {
LABEL_51:
                v147 = 1;
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
                v54 = v147;
                v55 = v29;
                v52 = v53;
                v56 = (const char *)s2;
              }
              else
              {
                LODWORD(v141) = v24;
                v54 = v147;
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
          v151 = 0;
          if ( (unsigned int)qsscanf(
                               (_DWORD)v154,
                               (unsigned int)"%1023s %1023s%n",
                               (unsigned int)src,
                               (unsigned int)v161,
                               (_DWORD)v137,
                               v26) == 2
            && (v21 = atoea(&v151, v161)) != 0 )
          {
            v61 = (_BYTE *)skip_spaces((char *)v154 + v150);
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
              v149 = v151;
              if ( !v64 )
                goto LABEL_174;
              LOBYTE(v143) = v21;
              v146 = v25;
              v65 = 0;
              v66 = (_QWORD *)*v136;
              v145 = v151;
              v144 = v66;
              v67 = (const char **)(v66 + 1);
              while ( 1 )
              {
                v68 = haystack;
                if ( v67[1] )
                  v68 = *v67;
                if ( !strcmp(v68, src) )
                  break;
                ++v65;
                v67 += 11;
                if ( v65 == v64 )
                  goto LABEL_174;
              }
              v69 = v65;
              v21 = v143;
              v25 = v146;
              if ( v64 == v69 )
LABEL_174:
                sub_378D50();
              v70 = 11 * v69;
              v71 = (int)v145;
              v72 = &v144[v70];
              v73 = v72[8];
              v74 = v72[7];
              if ( (int)v145 >= v73 )
              {
                v102 = (v145 + 8) & 0xFFFFFFF8;
                v103 = v102;
                if ( v102 != v73 )
                {
                  ptr = nullptr;
                  v158 = 0;
                  v157 = 0;
                  v159 = 0;
                  if ( v102 < v73 )
                  {
                    v144 = (_QWORD *)v102;
                    v143 = (int)v145;
                    v121 = v73;
                    LODWORD(v145) = v24;
                    v122 = v102;
                    do
                    {
                      v123 = v72[7] + 48 * v122;
                      v124 = *(void **)(v123 + 24);
                      v125 = v123;
                      if ( v124 )
                      {
                        *(_QWORD *)(v123 + 32) = 0;
                        qfree(v124);
                      }
                      v126 = *(void **)v125;
                      if ( *(_QWORD *)v125 )
                      {
                        *(_QWORD *)(v125 + 8) = 0;
                        qfree(v126);
                      }
                      ++v122;
                    }
                    while ( v122 < v121 );
                    v71 = v143;
                    v24 = v145;
                    v25 = v146;
                    v72[8] = v144;
                    v74 = v72[7];
                  }
                  else
                  {
                    v104 = v72[9];
                    v105 = v72 + 7;
                    if ( (unsigned __int64)&ptr < v74 || (unsigned __int64)&ptr >= v74 + 48 * v104 )
                    {
                      if ( v104 < v102 )
                      {
                        v143 = v102;
                        v133 = qvector_reserve(v105, v74, v102, 48);
                        v73 = v72[8];
                        v103 = v143;
                        v72[7] = v133;
                        v74 = v133;
                      }
                      if ( v73 < v103 )
                      {
                        v117 = 48 * v73;
                        do
                        {
                          v118 = v117 + v74;
                          ++v73;
                          v117 += 48;
                          *(_QWORD *)v118 = 0;
                          *(_QWORD *)(v118 + 24) = 0;
                          *(_OWORD *)(v118 + 8) = 0;
                          *(_OWORD *)(v118 + 32) = 0;
                          v74 = v72[7];
                        }
                        while ( v103 != v73 );
                      }
                      v72[8] = v103;
                    }
                    else
                    {
                      if ( v104 < v102 )
                      {
                        v143 = v102;
                        v134 = qvector_reserve(v105, v74, v102, 48);
                        v73 = v72[8];
                        v103 = v143;
                        v72[7] = v134;
                        v74 = v134;
                      }
                      if ( v73 >= v103 )
                      {
                        v108 = v72[7];
                      }
                      else
                      {
                        v106 = 48 * v73;
                        do
                        {
                          v107 = v106 + v74;
                          ++v73;
                          v106 += 48;
                          *(_QWORD *)v107 = 0;
                          *(_QWORD *)(v107 + 24) = 0;
                          *(_OWORD *)(v107 + 8) = 0;
                          *(_OWORD *)(v107 + 32) = 0;
                          v74 = v72[7];
                          v108 = v74;
                        }
                        while ( v103 != v73 );
                      }
                      v72[8] = v103;
                      v74 = v108;
                    }
                  }
                }
              }
              v75 = 48 * v71;
              if ( *(_QWORD *)(v74 + v75 + 8) > 1u )
                sub_378D50();
              v143 = v74 + v75;
              v76 = strlen(v141);
              v77 = (_QWORD *)v143;
              v78 = v76;
              if ( v76 )
              {
                v110 = *(void **)v143;
                v111 = (_QWORD *)(v76 + 1);
                if ( *(_QWORD *)(v143 + 16) < v76 + 1 )
                {
                  v127 = *(void **)v143;
                  v145 = v76;
                  v144 = (_QWORD *)(v76 + 1);
                  v128 = qvector_reserve(v143, v127, v111, 1);
                  v77 = (_QWORD *)v143;
                  v78 = v145;
                  v110 = (void *)v128;
                  v111 = v144;
                  *(_QWORD *)v143 = v128;
                }
                v77[1] = v111;
                v144 = v77;
                v143 = v78;
                memmove(v110, v141, v78);
                *(_BYTE *)(*v144 + v143) = 0;
              }
              else
              {
                *(_QWORD *)(v143 + 8) = 0;
              }
              v79 = (_QWORD *)(v72[7] + v75);
              if ( s2 && (v80 = strlen((const char *)s2), (v81 = v80) != 0) )
              {
                v89 = (void *)v79[3];
                v90 = (char *)(v80 + 1);
                if ( v79[5] < v80 + 1 )
                {
                  v129 = v79[3];
                  v141 = (char *)(v80 + 1);
                  v130 = qvector_reserve(v79 + 3, v129, v90, 1);
                  v79[3] = v130;
                  v90 = v141;
                  v89 = (void *)v130;
                }
                v79[4] = v90;
                memmove(v89, s2, v81);
                *(_BYTE *)(v79[3] + v81) = 0;
              }
              else
              {
                v79[4] = 0;
              }
            }
            else
            {
              if ( v64 )
              {
                v91 = (_QWORD *)*v136;
                for ( j = 0; j != v64; ++j )
                {
                  if ( *v91 == v151 )
                    sub_378D50();
                  v91 += 11;
                }
              }
              v93 = v64 + 1;
              v94 = *v136;
              if ( v136[2] < v93 )
              {
                v114 = v136;
                v115 = qvector_reserve(v136, *v136, v93, 88);
                *v114 = v115;
                v94 = v115;
              }
              v95 = v136;
              v96 = v94 + 88LL * v136[1];
              *(_QWORD *)v96 = 0;
              v97 = v151;
              *(_QWORD *)(v96 + 8) = 0;
              *(_QWORD *)(v96 + 32) = 0;
              *(_QWORD *)(v96 + 56) = 0;
              *(_QWORD *)(v96 + 80) = 0;
              *(_OWORD *)(v96 + 16) = 0;
              *(_OWORD *)(v96 + 40) = 0;
              *(_OWORD *)(v96 + 64) = 0;
              ++v95[1];
              *(_QWORD *)v96 = v97;
              v98 = strlen(src);
              v99 = (char *)v98;
              if ( v98 )
              {
                v112 = *(void **)(v96 + 8);
                v113 = (char *)(v98 + 1);
                if ( *(_QWORD *)(v96 + 24) < v98 + 1 )
                {
                  v143 = v98;
                  v141 = (char *)(v98 + 1);
                  v116 = qvector_reserve(v96 + 8, v112, v113, 1);
                  *(_QWORD *)(v96 + 8) = v116;
                  v99 = (char *)v143;
                  v112 = (void *)v116;
                  v113 = v141;
                }
                *(_QWORD *)(v96 + 16) = v113;
                v141 = v99;
                memmove(v112, src, (size_t)v99);
                v141[*(_QWORD *)(v96 + 8)] = 0;
              }
              else
              {
                *(_QWORD *)(v96 + 16) = 0;
              }
              if ( s2 && (v100 = strlen((const char *)s2), (v101 = v100) != 0) )
              {
                v119 = *(void **)(v96 + 32);
                v120 = (char *)(v100 + 1);
                if ( *(_QWORD *)(v96 + 48) < v100 + 1 )
                {
                  v131 = *(_QWORD *)(v96 + 32);
                  v141 = (char *)(v100 + 1);
                  v132 = qvector_reserve(v96 + 32, v131, v120, 1);
                  *(_QWORD *)(v96 + 32) = v132;
                  v120 = v141;
                  v119 = (void *)v132;
                }
                *(_QWORD *)(v96 + 40) = v120;
                memmove(v119, s2, v101);
                *(_BYTE *)(*(_QWORD *)(v96 + 32) + v101) = 0;
              }
              else
              {
                *(_QWORD *)(v96 + 40) = 0;
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
              sub_378D50();
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
            v148 = 0;
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
  v82 = v136[1];
  if ( !v138 )
  {
    if ( v82 || !v148 )
      goto LABEL_59;
LABEL_121:
    sub_378D50();
  }
  v83 = *(_QWORD *)(v138 + 8);
  if ( v83 <= 8 )
  {
    if ( v82 || !v148 )
      goto LABEL_59;
    goto LABEL_121;
  }
  if ( strncmp((const char *)(*(_QWORD *)v138 + v83 - 9), "/generic", 8u) && !v82 && v148 )
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
  return v82;
}
