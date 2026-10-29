__int64 sub_132600()
{
  int *v0; // rbx
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // r12d
  int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rax
  char v9; // al
  char v10; // dl
  bool v11; // zf
  int v12; // edx
  _BOOL4 v13; // eax
  __int64 v14; // rbx
  __m128i *v15; // rsi
  __m128i si128; // xmm0
  __int64 v17; // rbx
  __int64 v18; // r14
  void (__fastcall *v19)(const char **); // rax
  __int64 v20; // rdi
  size_t v21; // rbx
  void *v22; // r12
  _QWORD *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 i; // rbx
  _QWORD *v27; // r12
  __int64 *v28; // rbx
  __int64 v29; // r15
  size_t *v30; // r12
  size_t v31; // r13
  size_t v32; // rbx
  size_t v33; // rbx
  size_t v34; // rax
  __int64 v35; // r12
  size_t v36; // rax
  __int64 v37; // r12
  void *v38; // r13
  void *v39; // r12
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rsi
  __m128i v43; // xmm0
  size_t v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  void *v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // r14
  _QWORD *v56; // rbx
  const char *v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  __int64 v62; // rdx
  const char *v63; // rsi
  __int64 srclang_parser_internal; // r14
  void (__fastcall *v65)(const char *, const char *); // rax
  const char *v66; // rdi
  unsigned int v67; // r14d
  __int64 v68; // rdx
  __int64 v69; // r12
  __int64 v70; // rbx
  _QWORD *v71; // rax
  int *v72; // rdx
  __int64 v73; // r12
  __int64 v74; // rbx
  int *v75; // rax
  char *v76; // rdx
  __int64 v77; // r12
  __int64 v78; // rbx
  char *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r12
  __int64 v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r12
  __int64 v86; // rbx
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r12
  __int64 v90; // rbx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r12
  __int64 v94; // rbx
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r12
  __int64 v98; // rbx
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r12
  __int64 v102; // rbx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r12
  __int64 v106; // rbx
  _QWORD *v107; // rax
  size_t v109; // r13
  void *v110; // rax
  const void *v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // r12
  __int64 v114; // r14
  _QWORD *v115; // rbx
  __int64 v116; // rax
  char *v117; // r12
  __m128i v118; // xmm1
  int *v119; // rbx
  __m128i v120; // xmm0
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // r13
  size_t v124; // r14
  __int64 v125; // r12
  size_t v126; // r14
  void *v127; // rax
  void *v128; // rax
  __int64 v129; // [rsp+50h] [rbp-3D0h]
  __int64 v130; // [rsp+68h] [rbp-3B8h]
  __int64 v131; // [rsp+B0h] [rbp-370h]
  void *v132; // [rsp+B8h] [rbp-368h]
  void *v133; // [rsp+C0h] [rbp-360h]
  void *v134; // [rsp+C8h] [rbp-358h]
  void *src[2]; // [rsp+D0h] [rbp-350h] BYREF
  size_t n[2]; // [rsp+E0h] [rbp-340h] BYREF
  int v137; // [rsp+F4h] [rbp-32Ch] BYREF
  int v138; // [rsp+F8h] [rbp-328h] BYREF
  int v139; // [rsp+FCh] [rbp-324h] BYREF
  _BOOL4 v140; // [rsp+100h] [rbp-320h] BYREF
  int v141; // [rsp+104h] [rbp-31Ch] BYREF
  int v142; // [rsp+108h] [rbp-318h] BYREF
  int v143; // [rsp+10Ch] [rbp-314h] BYREF
  unsigned int v144; // [rsp+110h] [rbp-310h] BYREF
  int v145; // [rsp+114h] [rbp-30Ch] BYREF
  int v146; // [rsp+118h] [rbp-308h] BYREF
  int v147; // [rsp+11Ch] [rbp-304h] BYREF
  int v148; // [rsp+120h] [rbp-300h] BYREF
  int v149; // [rsp+124h] [rbp-2FCh] BYREF
  int v150; // [rsp+128h] [rbp-2F8h] BYREF
  int v151; // [rsp+12Ch] [rbp-2F4h] BYREF
  __int128 v152; // [rsp+130h] [rbp-2F0h]
  __int64 v153; // [rsp+140h] [rbp-2E0h]
  __int64 *v154; // [rsp+148h] [rbp-2D8h]
  __int128 v155; // [rsp+150h] [rbp-2D0h]
  __int64 v156; // [rsp+160h] [rbp-2C0h] BYREF
  __int128 v157; // [rsp+168h] [rbp-2B8h]
  __int64 v158; // [rsp+180h] [rbp-2A0h] BYREF
  __int128 v159; // [rsp+188h] [rbp-298h]
  __int64 v160; // [rsp+1A0h] [rbp-280h] BYREF
  __int128 v161; // [rsp+1A8h] [rbp-278h]
  __int64 v162; // [rsp+1C0h] [rbp-260h] BYREF
  __int128 v163; // [rsp+1C8h] [rbp-258h]
  __int64 v164; // [rsp+1E0h] [rbp-240h] BYREF
  __int128 v165; // [rsp+1E8h] [rbp-238h]
  __int64 v166; // [rsp+200h] [rbp-220h] BYREF
  __int128 v167; // [rsp+208h] [rbp-218h]
  __int64 v168; // [rsp+220h] [rbp-200h] BYREF
  __int128 v169; // [rsp+228h] [rbp-1F8h]
  __int64 v170; // [rsp+240h] [rbp-1E0h] BYREF
  __int128 v171; // [rsp+248h] [rbp-1D8h]
  const char *v172; // [rsp+260h] [rbp-1C0h] BYREF
  __int128 v173; // [rsp+268h] [rbp-1B8h]
  __int64 v174; // [rsp+280h] [rbp-1A0h] BYREF
  __int128 v175; // [rsp+288h] [rbp-198h]
  const char *v176; // [rsp+2A0h] [rbp-180h] BYREF
  __int128 v177; // [rsp+2A8h] [rbp-178h]
  const char *v178; // [rsp+2C0h] [rbp-160h] BYREF
  __int128 v179; // [rsp+2C8h] [rbp-158h]
  __int64 v180; // [rsp+2E0h] [rbp-140h] BYREF
  __int128 v181; // [rsp+2E8h] [rbp-138h]
  void *v182; // [rsp+300h] [rbp-120h] BYREF
  __m128i v183; // [rsp+308h] [rbp-118h] BYREF
  __int64 v184; // [rsp+318h] [rbp-108h]
  __m128i v185; // [rsp+320h] [rbp-100h] BYREF
  char *v186; // [rsp+330h] [rbp-F0h] BYREF
  __m128i v187; // [rsp+338h] [rbp-E8h]
  int *v188; // [rsp+348h] [rbp-D8h] BYREF
  __m128i v189; // [rsp+350h] [rbp-D0h]
  __int64 v190; // [rsp+360h] [rbp-C0h]
  __int64 v191; // [rsp+368h] [rbp-B8h]
  __int64 v192; // [rsp+378h] [rbp-A8h]
  __int64 v193; // [rsp+380h] [rbp-A0h]
  __int64 v194; // [rsp+390h] [rbp-90h]
  __int64 v195; // [rsp+398h] [rbp-88h]
  _QWORD v196[3]; // [rsp+3A8h] [rbp-78h] BYREF
  int v197[10]; // [rsp+3C0h] [rbp-60h] BYREF
  unsigned __int64 v198; // [rsp+3E8h] [rbp-38h]

  v198 = __readfsqword(0x28u);
  v156 = 0;
  v158 = 0;
  v157 = 0;
  v159 = 0;
  get_compilers();
  getinf();
  v0 = (int *)&unk_1D5C20;
  v1 = 0;
  v2 = 0;
  v137 = 0;
  v3 = 0;
  v160 = 0;
  v162 = 0;
  v161 = 0;
  v163 = 0;
  while ( 1 )
  {
    v4 = *v0;
    if ( v2 < v3 + 1 )
    {
      v162 = qvector_reserve();
      v3 = v163;
      v1 = v162;
    }
    *(_DWORD *)(v1 + 4 * v3) = v4;
    ++v0;
    v3 = v163 + 1;
    *(_QWORD *)&v163 = v163 + 1;
    if ( &unk_1D5C44 == (_UNKNOWN *)v0 )
      break;
    v2 = *((_QWORD *)&v163 + 1);
    v1 = v162;
  }
  sub_125C20(&v160, (const char **)&off_231580, 9);
  get_custom_callcnvs();
  v5 = getinf();
  v6 = (_DWORD *)(v162 + 4 * v163);
  if ( (_DWORD *)v162 == v6 )
  {
LABEL_11:
    LODWORD(v8) = -1;
  }
  else
  {
    v7 = (_DWORD *)v162;
    while ( v5 != *v7 )
    {
      if ( v6 == ++v7 )
        goto LABEL_11;
    }
    v8 = ((__int64)v7 - v162) >> 2;
  }
  v138 = v8;
  v164 = 0;
  v166 = 0;
  v165 = 0;
  v167 = 0;
  sub_125C20(&v164, (const char **)off_231560, 2);
  sub_125C20(&v166, (const char **)off_231570, 2);
  v9 = getinf();
  v10 = v9 & 0xC;
  if ( (v9 & 4) != 0 )
  {
    v11 = v10 == 12;
    v12 = 1;
    v13 = !v11;
  }
  else
  {
    v13 = v10 != 0;
    v12 = 0;
  }
  v140 = v13;
  v139 = v12;
  v168 = 0;
  v169 = 0;
  sub_125C20(&v168, (const char **)&off_231540, 4);
  if ( (unsigned __int8)getinf() > 2u )
  {
    v14 = v168;
    v15 = *(__m128i **)(v168 + 24);
    if ( *(_QWORD *)(v168 + 40) <= 0x14u )
    {
      v116 = qvector_reserve();
      *(_QWORD *)(v14 + 24) = v116;
      v15 = (__m128i *)v116;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D2720);
    *(_QWORD *)(v14 + 32) = 21;
    v15[1].m128i_i32[0] = 538976288;
    *v15 = si128;
    *(_BYTE *)(*(_QWORD *)(v14 + 24) + 20LL) = 0;
  }
  v141 = getinf() & 3;
  v152 = 0;
  getinf_buf();
  v170 = 0;
  v171 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  getinf_str();
  v172 = nullptr;
  v173 = 0;
  getinf_str();
  v174 = 0;
  v150 = 0;
  v176 = nullptr;
  v178 = nullptr;
  v175 = 0;
  v177 = 0;
  v179 = 0;
  v187.m128i_i64[0] = get_srclang_parser_internal();
  v17 = v187.m128i_i64[0];
  v18 = v187.m128i_i64[0];
  v187.m128i_i64[1] = (__int64)&v174;
  v188 = &v150;
  v186 = (char *)&off_231378;
  for_all_srclang_parsers();
  sub_1262D0((__int64 *)&v176, *(_DWORD *)(v17 + 24));
  v19 = *(void (__fastcall **)(const char **))(v17 + 48);
  if ( v19 )
    v19(&v178);
  if ( v18 )
    --*(_DWORD *)(v18 + 12);
  v153 = 0;
  v154 = nullptr;
  get_config_value();
  if ( (_DWORD)v153 == 3 )
  {
    v20 = qword_252E60;
    if ( qword_252E60 )
    {
      v21 = xmmword_252E68;
      if ( (_QWORD)xmmword_252E68 )
      {
        v22 = nullptr;
        do
        {
          v23 = (_QWORD *)(v20 + 48LL * (_QWORD)v22);
          v24 = v23[3];
          if ( v24 )
          {
            v25 = v23[4];
            if ( v25 )
            {
              src[0] = v22;
              n[0] = v21;
              for ( i = 0; i != v25; ++i )
              {
                v27 = (_QWORD *)(v24 + 48 * i);
                if ( v27[3] )
                {
                  v27[4] = 0;
                  qfree();
                }
                if ( *v27 )
                {
                  v27[1] = 0;
                  qfree();
                }
                v24 = v23[3];
              }
              v21 = n[0];
              v22 = src[0];
            }
            v23[4] = 0;
            qfree();
          }
          if ( *v23 )
          {
            v23[1] = 0;
            qfree();
          }
          v20 = qword_252E60;
          v22 = (char *)v22 + 1;
        }
        while ( (void *)v21 != v22 );
      }
      *(_QWORD *)&xmmword_252E68 = 0;
      qfree();
      qword_252E60 = 0;
      *((_QWORD *)&xmmword_252E68 + 1) = 0;
      if ( (_DWORD)v153 != 3 )
      {
LABEL_261:
        if ( !under_debugger )
        {
          interr();
LABEL_263:
          if ( !under_debugger )
            interr();
        }
LABEL_267:
        BUG();
      }
    }
    v129 = *v154 + 40 * v154[1];
    if ( *v154 != v129 )
    {
      v130 = *v154;
      do
      {
        if ( *(_DWORD *)(v130 + 24) != 4 )
          break;
        v28 = *(__int64 **)(v130 + 32);
        v181 = 0;
        v180 = 0;
        v186 = nullptr;
        v187 = 0;
        v186 = (char *)qvector_reserve();
        v187.m128i_i64[0] = 11;
        strcpy(v186, "Presets...");
        v189 = 0;
        v188 = nullptr;
        v188 = (int *)qvector_reserve();
        v189.m128i_i64[0] = 1;
        *(_BYTE *)v188 = 0;
        sub_132470(&v180, (__int64)&v186);
        if ( v188 )
        {
          v189.m128i_i64[0] = 0;
          qfree();
        }
        if ( v186 )
        {
          v187.m128i_i64[0] = 0;
          qfree();
        }
        v29 = *v28;
        v131 = *v28 + 16 * v28[1];
        if ( *v28 != v131 )
        {
          do
          {
            if ( *(_DWORD *)v29 != 3 )
            {
              v112 = v180;
              if ( v180 )
              {
                v113 = v181;
                if ( (_QWORD)v181 )
                {
                  v114 = 0;
                  do
                  {
                    v115 = (_QWORD *)(v112 + 48 * v114);
                    if ( v115[3] )
                    {
                      v115[4] = 0;
                      qfree();
                    }
                    if ( *v115 )
                    {
                      v115[1] = 0;
                      qfree();
                    }
                    v112 = v180;
                    ++v114;
                  }
                  while ( v113 != v114 );
                }
                *(_QWORD *)&v181 = 0;
                qfree();
              }
              goto LABEL_95;
            }
            v30 = *(size_t **)(v29 + 8);
            v31 = v30[1];
            if ( !v31 )
              goto LABEL_265;
            v32 = *v30;
            n[0] = 0;
            while ( !*(_QWORD *)(v32 + 8) || strcmp(*(const char **)v32, "name") )
            {
              ++n[0];
              v32 += 40LL;
              if ( v31 == n[0] )
                goto LABEL_265;
            }
            if ( *(_DWORD *)(v32 + 24) != 2 )
            {
LABEL_265:
              if ( !under_debugger )
                interr();
              goto LABEL_267;
            }
            n[0] = *(_QWORD *)(v32 + 32);
            v33 = *(_QWORD *)(n[0] + 8);
            if ( v33 )
            {
              v134 = (void *)qalloc_or_throw();
              memcpy(v134, *(const void **)n[0], v33);
              if ( *(_DWORD *)v29 != 3 )
              {
                if ( under_debugger )
                  goto LABEL_267;
                interr();
                goto LABEL_261;
              }
              v30 = *(size_t **)(v29 + 8);
              v31 = v30[1];
              if ( !v31 )
              {
LABEL_224:
                v36 = 0;
                goto LABEL_62;
              }
            }
            else
            {
              v134 = nullptr;
              v33 = 0;
            }
            v34 = *v30;
            v35 = 0;
            n[0] = v34;
            while ( !*(_QWORD *)(n[0] + 8) || strcmp(*(const char **)n[0], "argv") )
            {
              ++v35;
              n[0] += 40LL;
              if ( v35 == v31 )
                goto LABEL_224;
            }
            v36 = n[0] + 24;
LABEL_62:
            if ( *(_DWORD *)v36 != 2 )
              goto LABEL_263;
            v37 = *(_QWORD *)(v36 + 8);
            n[0] = *(_QWORD *)(v37 + 8);
            if ( n[0] )
            {
              v109 = n[0];
              v110 = (void *)qalloc_or_throw();
              v111 = *(const void **)v37;
              v39 = nullptr;
              src[0] = v110;
              memcpy(v110, v111, v109);
              v187.m128i_i64[1] = 0;
              if ( !v33 )
                goto LABEL_226;
            }
            else
            {
              v187.m128i_i64[1] = 0;
              if ( !v33 )
              {
                v189.m128i_i64[1] = 0;
                v38 = nullptr;
                v39 = nullptr;
                src[0] = nullptr;
                v133 = nullptr;
                v132 = nullptr;
                goto LABEL_66;
              }
              src[0] = nullptr;
            }
            v39 = (void *)qalloc_or_throw();
            v187.m128i_i64[1] = v33;
            memcpy(v39, v134, v33);
            v189.m128i_i64[1] = 0;
            if ( n[0] )
            {
LABEL_226:
              v38 = (void *)qalloc_or_throw();
              v189.m128i_i64[1] = n[0];
              memcpy(v38, src[0], n[0]);
              if ( v33 )
              {
                v133 = (void *)qalloc_or_throw();
                memcpy(v133, v39, v33);
              }
              else
              {
                v133 = nullptr;
              }
              v132 = (void *)qalloc_or_throw();
              memcpy(v132, v38, n[0]);
              goto LABEL_66;
            }
            v133 = (void *)qalloc_or_throw();
            memcpy(v133, v39, v33);
            v38 = nullptr;
            v132 = nullptr;
LABEL_66:
            v40 = v181;
            v41 = v180;
            if ( *((_QWORD *)&v181 + 1) < (unsigned __int64)(v181 + 1) )
            {
              v180 = qvector_reserve();
              v41 = v180;
              v40 = v181;
            }
            v42 = 48 * v40 + v41;
            *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
            v43 = _mm_loadl_epi64((const __m128i *)n);
            *(_QWORD *)v42 = v133;
            *(_QWORD *)(v42 + 24) = v132;
            *(__m128i *)(v42 + 32) = _mm_unpacklo_epi64(v43, v43);
            *(_QWORD *)&v181 = v181 + 1;
            if ( v38 )
              qfree();
            if ( v39 )
              qfree();
            if ( src[0] )
              qfree();
            if ( v134 )
              qfree();
            v29 += 16;
          }
          while ( v131 != v29 );
        }
        v182 = nullptr;
        v183 = 0;
        v44 = *(_QWORD *)(v130 + 8);
        if ( v44 )
        {
          v182 = (void *)qalloc_or_throw();
          v183.m128i_i64[1] = v44;
          memcpy(v182, *(const void **)v130, v44);
          v183.m128i_i64[0] = v44;
        }
        v184 = 0;
        v185 = 0;
        v45 = v181;
        if ( (_QWORD)v181 )
        {
          v184 = qalloc_or_throw();
          v122 = v184;
          v123 = 0;
          v185.m128i_i64[1] = v45;
          do
          {
            while ( 1 )
            {
              v125 = v180 + 48 * v123;
              *(_OWORD *)(v122 + 8) = 0;
              *(_QWORD *)v122 = 0;
              v126 = *(_QWORD *)(v125 + 8);
              if ( v126 )
              {
                v127 = (void *)qalloc_or_throw();
                *(_QWORD *)v122 = v127;
                *(_QWORD *)(v122 + 16) = v126;
                memcpy(v127, *(const void **)v125, v126);
                *(_QWORD *)(v122 + 8) = v126;
              }
              *(_QWORD *)(v122 + 24) = 0;
              *(_OWORD *)(v122 + 32) = 0;
              v124 = *(_QWORD *)(v125 + 32);
              if ( v124 )
                break;
              ++v123;
              v122 += 48;
              if ( v45 == v123 )
                goto LABEL_258;
            }
            v128 = (void *)qalloc_or_throw();
            *(_QWORD *)(v122 + 24) = v128;
            ++v123;
            *(_QWORD *)(v122 + 40) = v124;
            v122 += 48;
            memcpy(v128, *(const void **)(v125 + 24), v124);
            *(_QWORD *)(v122 - 16) = v124;
          }
          while ( v45 != v123 );
LABEL_258:
          v185.m128i_i64[0] = v45;
        }
        v46 = xmmword_252E68;
        v47 = qword_252E60;
        v48 = xmmword_252E68 + 1;
        if ( (unsigned __int64)&v182 >= qword_252E60
          && (unsigned __int64)&v182 < qword_252E60 + 48LL * *((_QWORD *)&xmmword_252E68 + 1) )
        {
          v117 = (char *)v182;
          v118 = _mm_loadu_si128(&v183);
          v182 = nullptr;
          v119 = (int *)v184;
          v120 = _mm_load_si128(&v185);
          v184 = 0;
          v186 = v117;
          v188 = v119;
          v187 = v118;
          v183 = 0;
          v189 = v120;
          v185 = 0;
          if ( *((_QWORD *)&xmmword_252E68 + 1) < v48 )
          {
            *(__m128i *)src = v118;
            *(__m128i *)n = v120;
            qword_252E60 = qvector_reserve();
            v47 = qword_252E60;
            v118 = _mm_load_si128((const __m128i *)src);
            v46 = xmmword_252E68;
            v120 = _mm_load_si128((const __m128i *)n);
          }
          v121 = v47 + 48 * v46;
          *(_QWORD *)v121 = v117;
          *(_QWORD *)(v121 + 24) = v119;
          *(__m128i *)(v121 + 8) = v118;
          *(__m128i *)(v121 + 32) = v120;
        }
        else
        {
          if ( *((_QWORD *)&xmmword_252E68 + 1) < v48 )
          {
            qword_252E60 = qvector_reserve();
            v47 = qword_252E60;
            v46 = xmmword_252E68;
          }
          v49 = 48 * v46 + v47;
          v50 = v182;
          *(__m128i *)(v49 + 8) = _mm_loadu_si128(&v183);
          v51 = _mm_load_si128(&v185);
          *(_QWORD *)v49 = v50;
          v52 = v184;
          *(__m128i *)(v49 + 32) = v51;
          *(_QWORD *)(v49 + 24) = v52;
        }
        v53 = v180;
        *(_QWORD *)&xmmword_252E68 = xmmword_252E68 + 1;
        if ( v180 )
        {
          v54 = v181;
          if ( (_QWORD)v181 )
          {
            v55 = 0;
            do
            {
              v56 = (_QWORD *)(v53 + 48 * v55);
              if ( v56[3] )
              {
                v56[4] = 0;
                qfree();
              }
              if ( *v56 )
              {
                v56[1] = 0;
                qfree();
              }
              v53 = v180;
              ++v55;
            }
            while ( v54 != v55 );
          }
          *(_QWORD *)&v181 = 0;
          qfree();
        }
        v130 += 40;
      }
      while ( v129 != v130 );
    }
  }
LABEL_95:
  v151 = 0;
  v180 = 0;
  v181 = 0;
  sub_126420(&v180, v174 + 24LL * v150);
  sub_12A400((__int64)&v186, (__int64)&v158, (__int64)&v174, (__int64)&v160, (__int64)&v162);
  getinf();
  sub_128F90((__int64 *)&v186);
  n[0] = (size_t)&v137;
  src[0] = &v138;
  while ( 1 )
  {
    v57 = s1;
    if ( (_QWORD)v177 )
      v57 = v176;
    if ( !(unsigned int)sub_8F730(
                          (__int64)"Compiler options\n"
                                   "%/%*<~C~ompiler           :b1:0:25::>\n"
                                   "<ABI ~n~ame           :b16:0:16::> <~O~ptions:B17:1:::>\n"
                                   "                   %18q\n"
                                   "<Callin~g~ convention :b2:0:25::>\n"
                                   "<~M~emory model       :b3:0:15::><:b4:0:15::>\n"
                                   "<Poin~t~er size       :b5:0:25::>\n"
                                   "\n"
                                   "<Default ~a~lignment  :D6:4:4::>\n"
                                   "\n"
                                   "<sizeof(~i~nt)        :D7:4:4::>  <sizeof(~s~hort)   :D8:4:4::>\n"
                                   "<sizeof(~b~ool)       :D9:4:4::>  <sizeof(~l~ong)    :D10:4:4::>\n"
                                   "<sizeof(~e~num)       :D11:4:4::>  <sizeof(l~o~nglong):D12:4:4::>\n"
                                   "<sizeof(long do~u~ble):D15:4:4::>\n"
                                   "\n"
                                   "<~P~redefined macros  :q13::31::>\n"
                                   "<Include ~d~irectories:q14::31::>\n"
                                   "\n"
                                   "<Source pa~r~ser      :b19:0:8::> Syntax:%20X\n"
                                   "Arguments          <:b23:0:8::><:q21::31::>\n"
                                   "                   <Parser specific options :B22:1:::>\n"
                                   "\n",
                          sub_12BDA0,
                          &v186,
                          &v156,
                          n[0],
                          &v188,
                          v197,
                          sub_124E70,
                          v196,
                          &v160,
                          src[0],
                          &v164,
                          &v139,
                          &v166,
                          &v140,
                          &v168,
                          &v141,
                          &v142,
                          &v144,
                          &v146,
                          &v143,
                          &v147,
                          &v145,
                          &v148,
                          &v149,
                          &v172,
                          &v170,
                          &v174,
                          &v150,
                          v57,
                          &v180,
                          &v151,
                          &v178,
                          sub_125130) )
    {
      v67 = -1;
      goto LABEL_125;
    }
    if ( v137 <= 0 )
      break;
    if ( (v142 & (v142 - 1)) != 0 )
    {
      sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong alignment value");
    }
    else if ( v143 )
    {
      if ( v144 )
      {
        if ( v145 )
        {
          if ( v146 )
          {
            if ( v147 )
            {
              if ( v148 )
              {
                if ( v149 )
                {
                  if ( v141 != 1 || (unsigned __int8)getinf() > 2u == v144 > 2 )
                    break;
                  sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nPointer size is not compatible with the integer size");
                }
                else
                {
                  sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "longdouble");
                }
              }
              else
              {
                sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "longlong");
              }
            }
            else
            {
              sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "long");
            }
          }
          else
          {
            sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "short");
          }
        }
        else
        {
          sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "enum");
        }
      }
      else
      {
        sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "int");
      }
    }
    else
    {
      sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nWrong sizeof(%s)", "bool");
    }
  }
  v155 = 0;
  getinf_buf();
  v58 = v137;
  if ( v137 < 0 )
    v58 = 0;
  LOBYTE(v155) = *(_BYTE *)(v158 + v58);
  v59 = *(_DWORD *)(v162 + 4LL * v138);
  if ( v139 )
  {
    v60 = (v141 | (!v140 ? 12 : 4)) & 0xF;
    if ( (v59 & 0xFFFFFF0F) != 0 )
    {
LABEL_220:
      v62 = v60 | 0xC0u;
      goto LABEL_116;
    }
  }
  else
  {
    v60 = (v141 | (8 * v140)) & 0xF;
    if ( (v59 & 0xFFFFFF0F) != 0 )
      goto LABEL_220;
  }
  if ( v59 == 192 )
    goto LABEL_220;
  v61 = v59 | v60;
  v59 = 0;
  v62 = v61;
LABEL_116:
  HIDWORD(v155) = v59;
  *(_QWORD *)((char *)&v155 + 1) = v62
                                 | (((unsigned __int8)v144
                                   | (((unsigned __int8)v143
                                     | (((unsigned __int8)v145
                                       | (((unsigned __int8)v142
                                         | (((unsigned __int8)v146
                                           | (((unsigned __int8)v147 | ((unsigned __int64)(unsigned __int8)v148 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  BYTE9(v155) = v149;
  set_compiler();
  setinf_buf();
  v63 = s1;
  if ( (_QWORD)v173 )
    v63 = v172;
  setinf_buf();
  select_parser_by_name();
  srclang_parser_internal = get_srclang_parser_internal();
  v65 = *(void (__fastcall **)(const char *, const char *))(srclang_parser_internal + 40);
  if ( v65 )
  {
    v66 = s1;
    if ( (_QWORD)v179 )
      v66 = v178;
    v65(v66, v63);
  }
  if ( srclang_parser_internal )
    --*(_DWORD *)(srclang_parser_internal + 12);
  setinf();
  setinf();
  setinf();
  setinf();
  setinf();
  setinf();
  setinf();
  v67 = 1;
LABEL_125:
  if ( v196[0] )
  {
    v196[1] = 0;
    qfree();
  }
  if ( v194 )
  {
    v195 = 0;
    qfree();
  }
  if ( v192 )
  {
    v193 = 0;
    qfree();
  }
  v68 = v190;
  if ( v190 )
  {
    v69 = v191;
    if ( v191 )
    {
      v70 = 0;
      do
      {
        v71 = (_QWORD *)(v68 + 24 * v70);
        if ( *v71 )
        {
          v71[1] = 0;
          qfree();
          v68 = v190;
        }
        ++v70;
      }
      while ( v69 != v70 );
    }
    v191 = 0;
    qfree();
  }
  v72 = v188;
  if ( v188 )
  {
    v73 = v189.m128i_i64[0];
    if ( v189.m128i_i64[0] )
    {
      v74 = 0;
      do
      {
        v75 = &v72[6 * v74];
        if ( *(_QWORD *)v75 )
        {
          *((_QWORD *)v75 + 1) = 0;
          qfree();
          v72 = v188;
        }
        ++v74;
      }
      while ( v73 != v74 );
    }
    v189.m128i_i64[0] = 0;
    qfree();
  }
  v76 = v186;
  if ( v186 )
  {
    v77 = v187.m128i_i64[0];
    if ( v187.m128i_i64[0] )
    {
      v78 = 0;
      do
      {
        v79 = &v76[24 * v78];
        if ( *(_QWORD *)v79 )
        {
          *((_QWORD *)v79 + 1) = 0;
          qfree();
          v76 = v186;
        }
        ++v78;
      }
      while ( v77 != v78 );
    }
    v187.m128i_i64[0] = 0;
    qfree();
  }
  v80 = v180;
  if ( v180 )
  {
    v81 = v181;
    if ( (_QWORD)v181 )
    {
      v82 = 0;
      do
      {
        v83 = (_QWORD *)(v80 + 24 * v82);
        if ( *v83 )
        {
          v83[1] = 0;
          qfree();
          v80 = v180;
        }
        ++v82;
      }
      while ( v81 != v82 );
    }
    *(_QWORD *)&v181 = 0;
    qfree();
  }
  jvalue_t_clear();
  if ( v178 )
  {
    *(_QWORD *)&v179 = 0;
    qfree();
  }
  if ( v176 )
  {
    *(_QWORD *)&v177 = 0;
    qfree();
  }
  v84 = v174;
  if ( v174 )
  {
    v85 = v175;
    if ( (_QWORD)v175 )
    {
      v86 = 0;
      do
      {
        v87 = (_QWORD *)(v84 + 24 * v86);
        if ( *v87 )
        {
          v87[1] = 0;
          qfree();
          v84 = v174;
        }
        ++v86;
      }
      while ( v85 != v86 );
    }
    *(_QWORD *)&v175 = 0;
    qfree();
  }
  if ( v172 )
  {
    *(_QWORD *)&v173 = 0;
    qfree();
  }
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree();
  }
  v88 = v168;
  if ( v168 )
  {
    v89 = v169;
    if ( (_QWORD)v169 )
    {
      v90 = 0;
      do
      {
        v91 = (_QWORD *)(v88 + 24 * v90);
        if ( *v91 )
        {
          v91[1] = 0;
          qfree();
          v88 = v168;
        }
        ++v90;
      }
      while ( v89 != v90 );
    }
    *(_QWORD *)&v169 = 0;
    qfree();
  }
  v92 = v166;
  if ( v166 )
  {
    v93 = v167;
    if ( (_QWORD)v167 )
    {
      v94 = 0;
      do
      {
        v95 = (_QWORD *)(v92 + 24 * v94);
        if ( *v95 )
        {
          v95[1] = 0;
          qfree();
          v92 = v166;
        }
        ++v94;
      }
      while ( v93 != v94 );
    }
    *(_QWORD *)&v167 = 0;
    qfree();
  }
  v96 = v164;
  if ( v164 )
  {
    v97 = v165;
    if ( (_QWORD)v165 )
    {
      v98 = 0;
      do
      {
        v99 = (_QWORD *)(v96 + 24 * v98);
        if ( *v99 )
        {
          v99[1] = 0;
          qfree();
          v96 = v164;
        }
        ++v98;
      }
      while ( v97 != v98 );
    }
    *(_QWORD *)&v165 = 0;
    qfree();
  }
  if ( v162 )
  {
    *(_QWORD *)&v163 = 0;
    qfree();
  }
  v100 = v160;
  if ( v160 )
  {
    v101 = v161;
    if ( (_QWORD)v161 )
    {
      v102 = 0;
      do
      {
        v103 = (_QWORD *)(v100 + 24 * v102);
        if ( *v103 )
        {
          v103[1] = 0;
          qfree();
          v100 = v160;
        }
        ++v102;
      }
      while ( v101 != v102 );
    }
    *(_QWORD *)&v161 = 0;
    qfree();
  }
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree();
  }
  v104 = v156;
  if ( v156 )
  {
    v105 = v157;
    if ( (_QWORD)v157 )
    {
      v106 = 0;
      do
      {
        v107 = (_QWORD *)(v104 + 24 * v106);
        if ( *v107 )
        {
          v107[1] = 0;
          qfree();
          v104 = v156;
        }
        ++v106;
      }
      while ( v105 != v106 );
    }
    *(_QWORD *)&v157 = 0;
    qfree();
  }
  return v67;
}

