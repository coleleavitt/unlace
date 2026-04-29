unsigned __int64 __fastcall sub_5F4E0(char *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // r13
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v12; // rbx
  __int64 numbered_type_name; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  char *v16; // rax
  signed __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _BYTE *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rsi
  char *v26; // rax
  __int64 v27; // rdx
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // rdx
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // r8d
  int v40; // r9d
  const char *v41; // rdx
  const char *v42; // rsi
  unsigned int v43; // eax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdi
  char *v47; // rcx
  __int128 v48; // kr00_16
  char *v49; // rdi
  __int64 v50; // rsi
  __int64 v52; // rax
  unsigned int tinfo_property; // edx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 idati; // rax
  __int64 v62; // r8
  int v63; // r9d
  int v64; // r15d
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  char *v70; // rcx
  size_t v71; // rax
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // r12
  __int64 v76; // r13
  __int64 v77; // rbx
  __int64 v78; // rdi
  const char *v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // r12
  __int64 v82; // r13
  __int64 v83; // rbx
  __int64 v84; // rdi
  const char *v85; // rdi
  __int64 v86; // rdi
  char *v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r13
  __int64 v90; // rdi
  __int64 v91; // rdi
  const char *v92; // rax
  const char *v93; // rsi
  int v94; // ebx
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rdi
  char tinfo_details; // al
  __int64 v99; // rbx
  __int64 v100; // r13
  _QWORD *v101; // r15
  __int64 v102; // rdi
  __int64 v103; // rdi
  __int64 v104; // rbx
  __int64 v105; // r13
  __int64 v106; // rdi
  __int64 v107; // rdi
  const char *v108; // rsi
  const char *v109; // rsi
  char *v110; // rdi
  const char *v111; // rsi
  const char *v112; // rsi
  char *v113; // rdi
  __int64 v114; // rax
  char v115; // al
  const char *v116; // rsi
  const char *v117; // rdi
  int v118; // eax
  _QWORD *v119; // rdx
  const __m128i *v120; // rcx
  __int64 v121; // rax
  __int64 *v122; // rax
  __int64 v123; // rax
  char v124; // al
  __int64 v125; // [rsp-8h] [rbp-1E8h]
  __int64 v126; // [rsp+0h] [rbp-1E0h]
  __int64 v127; // [rsp+0h] [rbp-1E0h]
  unsigned __int64 v129; // [rsp+10h] [rbp-1D0h]
  const __m128i *v130; // [rsp+10h] [rbp-1D0h]
  const __m128i *v131; // [rsp+10h] [rbp-1D0h]
  __int64 *v133; // [rsp+28h] [rbp-1B8h]
  __int64 v134; // [rsp+28h] [rbp-1B8h]
  unsigned __int8 v135; // [rsp+28h] [rbp-1B8h]
  _QWORD *v136; // [rsp+28h] [rbp-1B8h]
  _QWORD *v137; // [rsp+28h] [rbp-1B8h]
  int v138; // [rsp+34h] [rbp-1ACh]
  __int64 v139; // [rsp+38h] [rbp-1A8h]
  unsigned int s1; // [rsp+40h] [rbp-1A0h]
  char *s1d; // [rsp+40h] [rbp-1A0h]
  char *s1f; // [rsp+40h] [rbp-1A0h]
  char *s1a; // [rsp+40h] [rbp-1A0h]
  char *s1b; // [rsp+40h] [rbp-1A0h]
  char *s1e; // [rsp+40h] [rbp-1A0h]
  int s1c; // [rsp+40h] [rbp-1A0h]
  __int64 *v147; // [rsp+48h] [rbp-198h]
  __int64 v148; // [rsp+50h] [rbp-190h]
  __int64 v149; // [rsp+58h] [rbp-188h]
  __int64 v150; // [rsp+60h] [rbp-180h]
  _DWORD *v151; // [rsp+70h] [rbp-170h]
  __int64 v152; // [rsp+70h] [rbp-170h]
  __int64 v153; // [rsp+70h] [rbp-170h]
  __int64 v154; // [rsp+78h] [rbp-168h]
  __int64 v155; // [rsp+78h] [rbp-168h]
  __int64 v156; // [rsp+78h] [rbp-168h]
  __int64 v157; // [rsp+78h] [rbp-168h]
  __int64 v158; // [rsp+78h] [rbp-168h]
  __int64 v159; // [rsp+78h] [rbp-168h]
  __int64 v160; // [rsp+78h] [rbp-168h]
  __int64 v161; // [rsp+88h] [rbp-158h] BYREF
  char *v162; // [rsp+90h] [rbp-150h] BYREF
  __int128 v163; // [rsp+98h] [rbp-148h]
  __int64 v164; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v165; // [rsp+B8h] [rbp-128h]
  __int64 v166; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v167; // [rsp+D8h] [rbp-108h]
  char *v168; // [rsp+F0h] [rbp-F0h] BYREF
  __int128 v169; // [rsp+F8h] [rbp-E8h]
  __int64 v170; // [rsp+110h] [rbp-D0h] BYREF
  __int128 i; // [rsp+118h] [rbp-C8h]
  __int64 v172; // [rsp+130h] [rbp-B0h] BYREF
  __int128 v173; // [rsp+138h] [rbp-A8h]
  _BYTE v174[24]; // [rsp+148h] [rbp-98h] BYREF
  int v175; // [rsp+160h] [rbp-80h]
  char v176; // [rsp+164h] [rbp-7Ch]
  __int64 v177; // [rsp+170h] [rbp-70h] BYREF
  __int128 v178; // [rsp+178h] [rbp-68h]
  _BYTE v179[24]; // [rsp+188h] [rbp-58h] BYREF
  int v180; // [rsp+1A0h] [rbp-40h]
  char v181; // [rsp+1A4h] [rbp-3Ch]
  unsigned __int64 v182; // [rsp+1A8h] [rbp-38h]

  v154 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v182 = __readfsqword(0x28u);
  v7 = 0;
  v148 = v6;
  v8 = *(_QWORD *)(v6 + 144);
  v9 = *(_DWORD *)(a3 + 272) == 2;
  v162 = nullptr;
  v139 = v8;
  v10 = *(_QWORD *)(v8 + 8);
  v163 = 0;
  v149 = v10;
  if ( v9 )
    v7 = a3;
  v150 = v7;
  if ( *(_DWORD *)(a3 + 336) != 1 )
  {
    v47 = nullptr;
    v48 = 0u;
    goto LABEL_69;
  }
  v138 = -1;
LABEL_5:
  v12 = (unsigned int)v138;
  numbered_type_name = (__int64)&v162;
  sub_9EF10(&v162, a4, (unsigned int)v138);
  if ( v138 >= 0 && (unsigned __int8)sub_84C00(&v162) && !(unsigned __int8)validate_name(&v162, 8, 1) )
  {
    if ( !under_debugger )
    {
      interr(0);
      goto LABEL_176;
    }
LABEL_281:
    BUG();
  }
  v164 = 0;
  v166 = 0;
  v165 = 0;
  v167 = 0;
  if ( (_QWORD)v163 )
  {
    v92 = v162;
    v5 = v162;
    if ( !v162 )
      goto LABEL_159;
    goto LABEL_8;
  }
  v5 = (char *)src;
  if ( src )
  {
LABEL_8:
    v14 = 0;
    v15 = 1;
LABEL_11:
    v18 = qvector_reserve(&v166, v14, v15, 24);
    v4 = v167;
    v166 = v18;
    v14 = v18;
    v15 = v167 + 1;
    while ( 1 )
    {
      *(_QWORD *)&v167 = v15;
      numbered_type_name = v14 + 24 * v4;
      *(_QWORD *)numbered_type_name = v5;
      *(_BYTE *)(numbered_type_name + 8) = *v5 == 36;
      v16 = strstr(v5, "::");
      v4 = v167;
      if ( !v16 )
        break;
      v14 = v166;
      v17 = v16 - v5;
      v5 = v16 + 2;
      *(_QWORD *)(numbered_type_name + 16) = v17;
      v15 = v4 + 1;
      if ( *((_QWORD *)&v167 + 1) < (unsigned __int64)(v4 + 1) )
        goto LABEL_11;
    }
    *(_QWORD *)(numbered_type_name + 16) = strlen(v5);
    if ( v4 )
    {
      v19 = nullptr;
      v20 = (_BYTE *)(v166 + 8);
      while ( !*v20 )
      {
        v19 = (_QWORD *)((char *)v19 + 1);
        v20 += 24;
        if ( v19 == (_QWORD *)v4 )
          goto LABEL_169;
      }
      v21 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 + 8) + 16LL) + 144LL) + 8LL);
      v147 = v21;
      s1 = get_ordinal_limit(v21);
      v4 = 1;
      if ( s1 > 1 )
      {
        do
        {
          v21 = v147;
          numbered_type_name = get_numbered_type_name(v147, (unsigned int)v4);
          if ( numbered_type_name )
          {
            v177 = 0;
            v24 = 1;
            v178 = 0;
            v25 = 0;
LABEL_21:
            v29 = qvector_reserve(&v177, v25, v24, 24);
            v27 = v178;
            v177 = v29;
            v25 = v29;
            v24 = v178 + 1;
            while ( 1 )
            {
              *(_QWORD *)&v178 = v24;
              v5 = (char *)(v25 + 24 * v27);
              *(_QWORD *)v5 = numbered_type_name;
              v5[8] = *(_BYTE *)numbered_type_name == 36;
              v26 = strstr((const char *)numbered_type_name, "::");
              v27 = v178;
              if ( !v26 )
                break;
              v24 = v178 + 1;
              v28 = &v26[-numbered_type_name];
              numbered_type_name = (__int64)(v26 + 2);
              *((_QWORD *)v5 + 2) = v28;
              v25 = v177;
              if ( *((_QWORD *)&v178 + 1) < (unsigned __int64)(v27 + 1) )
                goto LABEL_21;
            }
            v152 = v178;
            *((_QWORD *)v5 + 2) = strlen((const char *)numbered_type_name);
            if ( (int)v167 == v152 )
            {
              if ( (int)v167 > 0 )
              {
                v30 = v154;
                v133 = (__int64 *)v177;
                v155 = v177 + 24LL * (unsigned int)(v167 - 1) + 24;
                numbered_type_name = v166;
                v5 = (char *)v177;
                v153 = v30;
                do
                {
                  v32 = *(_BYTE *)(numbered_type_name + 8);
                  if ( v5[8] != v32
                    || !v32
                    && ((v31 = *(_QWORD *)(numbered_type_name + 16), *((_QWORD *)v5 + 2) != v31)
                     || strncmp(*(const char **)v5, *(const char **)numbered_type_name, v31)) )
                  {
                    v21 = v133;
                    v154 = v153;
                    goto LABEL_31;
                  }
                  v5 += 24;
                  numbered_type_name += 24;
                }
                while ( v5 != (char *)v155 );
                v154 = v153;
              }
              v56 = v165;
              v57 = v164;
              if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
              {
                v164 = qvector_reserve(&v164, v164, v165 + 1, 4);
                v57 = v164;
                v56 = v165;
              }
              *(_DWORD *)(v57 + 4 * v56) = v4;
              *(_QWORD *)&v165 = v165 + 1;
            }
            v21 = (__int64 *)v177;
LABEL_31:
            if ( v21 )
            {
              *(_QWORD *)&v178 = 0;
              qfree(v21);
            }
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( s1 != (_DWORD)v4 );
      }
      v33 = v165;
LABEL_35:
      if ( !v33 )
        goto LABEL_164;
      goto LABEL_36;
    }
LABEL_169:
    if ( !(_QWORD)v163 )
      goto LABEL_170;
    v92 = v162;
LABEL_159:
    v93 = v92;
    goto LABEL_160;
  }
LABEL_170:
  v93 = src;
LABEL_160:
  LODWORD(v177) = 0;
  v21 = *(__int64 **)(v139 + 8);
  get_named_type(v21, v93, 1, 0, 0, 0, 0, 0, &v177);
  v94 = v177;
  v33 = v165;
  if ( !(_DWORD)v177 )
    goto LABEL_35;
  v95 = v164;
  if ( *((_QWORD *)&v165 + 1) < (unsigned __int64)(v165 + 1) )
  {
    v21 = &v164;
    v164 = qvector_reserve(&v164, v164, v165 + 1, 4);
    v95 = v164;
    v33 = v165;
  }
  *(_DWORD *)(v95 + 4 * v33) = v94;
  v33 = v165 + 1;
  *(_QWORD *)&v165 = v33;
  if ( v33 )
  {
LABEL_36:
    v12 = v164;
    v34 = v164 + 4 * v33;
    v151 = (_DWORD *)v34;
    if ( *(_DWORD *)(v154 + 336) != 1 || v164 == v34 )
      goto LABEL_61;
    while ( 1 )
    {
      v35 = *(__int64 **)a1;
      v36 = *((_QWORD *)a1 + 1);
      LODWORD(v5) = *(_DWORD *)v12;
      v37 = *(_QWORD *)a1 + 8 * v36;
      if ( *(_QWORD *)a1 != v37 )
      {
        do
        {
          v36 = *v35;
          if ( *(_DWORD *)(*v35 + 336) == 3 && *(_DWORD *)(v36 + 276) == (_DWORD)v5 )
            goto LABEL_43;
          ++v35;
        }
        while ( (__int64 *)v37 != v35 );
      }
      v38 = *(_DWORD *)(v154 + 272);
      if ( !v38 )
        break;
      if ( v38 != 2 )
      {
        if ( under_debugger )
          goto LABEL_281;
        interr(734);
LABEL_278:
        clear_tinfo_t(numbered_type_name);
        v122 = (__int64 *)i;
LABEL_273:
        if ( v147 == v122 )
          goto LABEL_274;
LABEL_143:
        if ( v172 )
        {
          *(_QWORD *)&v173 = 0;
          qfree(v172);
        }
        if ( v170 )
        {
          *(_QWORD *)&i = 0;
          qfree(v170);
        }
        goto LABEL_147;
      }
      v4 = *(unsigned int *)(v150 + 408);
      if ( (unsigned __int8)sub_58160(*(_QWORD *)(v148 + 144), (unsigned int)v5, v36, v37, v22, v23) )
      {
        if ( (unsigned int)v5 < *(_DWORD *)(v139 + 200) )
          *(_DWORD *)(v139 + 200) = (_DWORD)v5;
        if ( !(unsigned __int8)sub_5B770(v150) )
        {
          *(_DWORD *)(v154 + 284) |= 4u;
          if ( (debug & 0x400000) != 0 )
          {
            v41 = src;
            if ( (_QWORD)v163 )
              LODWORD(v41) = (_DWORD)v162;
            v42 = "union";
            if ( (_DWORD)v4 != 3 )
            {
              v42 = "class";
              if ( (_DWORD)v4 == 1 )
                v42 = "structure";
            }
            sub_88B80(
              (unsigned int)"Overriding previously forward-decl %s '%s' (ordinal: %u).\n",
              (_DWORD)v42,
              (_DWORD)v41,
              (_DWORD)v5,
              v39,
              v40);
            if ( (debug & 0x400000) != 0 )
            {
              v43 = (unsigned int)sub_575D0((_DWORD *)v154);
              sub_88B80(
                (unsigned int)"%s::set_action(act=%s, ord=%u)\n",
                v43,
                (unsigned int)"act_replace",
                (_DWORD)v5,
                v44,
                v45);
            }
          }
          *(_DWORD *)(v154 + 336) = 3;
          *(_DWORD *)(v154 + 276) = (_DWORD)v5;
LABEL_61:
          v46 = v166;
          if ( (_QWORD)v167 && *(_BYTE *)(v166 + 24 * v167 - 16) )
            goto LABEL_165;
          if ( v166 )
          {
            *(_QWORD *)&v167 = 0;
            qfree(v166);
          }
          if ( v164 )
          {
            *(_QWORD *)&v165 = 0;
            qfree(v164);
          }
          ++v138;
          if ( *(_DWORD *)(v154 + 336) != 1 )
            goto LABEL_68;
          goto LABEL_5;
        }
        goto LABEL_88;
      }
      if ( !(unsigned __int8)sub_5B770(v150) )
      {
        WORD4(v178) = 257;
        v161 = 0;
        idati = v149;
        *(_QWORD *)&v178 = (unsigned int)v5;
        if ( !v149 )
          idati = get_idati(v150, (unsigned int)v5, v58, 0, v59, v60);
        v4 = (signed __int64)&v161;
        v177 = idati;
        if ( (unsigned __int8)create_tinfo(&v161, 61, 189, &v177) )
        {
          v177 = 0;
          v180 = 1;
          v178 = 0;
          memset(v179, 0, sizeof(v179));
          if ( (*(_BYTE *)(v150 + 412) & 1) == 0 )
          {
LABEL_176:
            numbered_type_name = *(_QWORD *)(v150 + 368);
            goto LABEL_95;
          }
          v147 = *(__int64 **)(v150 + 416);
          numbered_type_name = (unsigned __int64)v147 >> 3;
LABEL_95:
          if ( (get_tinfo_property(v161, 2) & 0x2F) == 0xD
            && (unsigned __int8)get_tinfo_details(v161, 13, &v177)
            && ((unsigned __int64)(numbered_type_name - 1) > 0xFFFFFFFFFFFFFFFDLL
             || numbered_type_name == get_tinfo_size(0, v161, 0)) )
          {
            v64 = 0;
            v65 = 0;
            v147 = &v172;
            v170 = 0;
            for ( i = 0; v64 < (unsigned __int64)v178; v65 = v64 )
            {
              v62 = v177 + 144 * v65;
              v69 = *(_QWORD *)(v62 + 24);
              if ( v69 )
              {
                v70 = *(char **)(v62 + 16);
                if ( v69 != 1 )
                {
                  if ( (*v70 != 103 || v70[1] != 97 || v70[2] != 112)
                    && (s1f = *(char **)(v62 + 16),
                        v134 = v62,
                        v71 = strlen("gap"),
                        v72 = strncmp(s1f, "gap", v71),
                        v70 = s1f,
                        v62 = v134,
                        v72)
                    || (s1d = (char *)v62, v66 = sub_2F340(v150, v70), v62 = (__int64)s1d, v66) )
                  {
                    v67 = i;
                    v172 = v62;
                    v68 = v170;
                    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
                    {
                      s1e = (char *)v62;
                      v170 = qvector_reserve(&v170, v170, i + 1, 8);
                      v68 = v170;
                      v62 = (__int64)s1e;
                      v67 = i;
                    }
                    *(_QWORD *)(v68 + 8 * v67) = v62;
                    *(_QWORD *)&i = i + 1;
                  }
                }
              }
              ++v64;
            }
            v173 = 0;
            v172 = 0;
            sub_2F400(v150, &v172, (int)a2, 0, v62, v63);
            numbered_type_name = i;
            if ( (_QWORD)i != (_QWORD)v173 )
              goto LABEL_143;
            if ( (_QWORD)i )
            {
              s1c = 0;
              v147 = nullptr;
              while ( 1 )
              {
                v119 = *(_QWORD **)(v170 + 8LL * (_QWORD)v147);
                v120 = *(const __m128i **)(v172 + 8LL * (_QWORD)v147);
                v123 = v120[1].m128i_i64[1];
                if ( v119[3] )
                {
                  v116 = (const char *)v119[2];
                  v117 = src;
                  if ( !v123 )
                    goto LABEL_257;
                }
                else
                {
                  v116 = src;
                  if ( !v123 )
                    goto LABEL_258;
                }
                v117 = (const char *)v120[1].m128i_i64[0];
LABEL_257:
                v130 = *(const __m128i **)(v172 + 8LL * (_QWORD)v147);
                v136 = *(_QWORD **)(v170 + 8LL * (_QWORD)v147);
                v118 = strcmp(v117, v116);
                v119 = v136;
                v120 = v130;
                if ( v118 )
                  goto LABEL_280;
LABEL_258:
                if ( v120[2].m128i_i64[1] != *v119 || (v121 = v120[5].m128i_i64[0]) != 0 && v121 != v119[1] )
                {
LABEL_280:
                  v122 = (__int64 *)numbered_type_name;
                  goto LABEL_273;
                }
                if ( (v120[4].m128i_i8[8] & 2) != 0 )
                {
                  v168 = nullptr;
                  numbered_type_name = (__int64)&v168;
                  *(_QWORD *)&v169 = 0;
                  v131 = v120;
                  v137 = v119;
                  if ( (get_tinfo_property(v119[8], 2) & 0xF) != 0xB )
                    goto LABEL_278;
                  numbered_type_name = (__int64)&v168;
                  if ( !(unsigned __int8)get_tinfo_details(v137[8], 11, &v168)
                    || DWORD1(v169) != (unsigned __int64)v131[5].m128i_i64[0] >> 3
                    || (unsigned __int8)get_tinfo_property(v168, 2) != 2 )
                  {
                    goto LABEL_278;
                  }
                  clear_tinfo_t(&v168);
                }
                else
                {
                  v124 = sub_5E430((__int64)a1, v148, a2, v120 + 3, v119 + 8, 0, 0, 0);
                  numbered_type_name = v125;
                  if ( !v124 )
                  {
                    v122 = (__int64 *)i;
                    goto LABEL_273;
                  }
                }
                ++s1c;
                numbered_type_name = i;
                v147 = (__int64 *)s1c;
                v122 = (__int64 *)i;
                if ( s1c >= (unsigned __int64)i )
                  goto LABEL_273;
              }
            }
LABEL_274:
            sub_59E30(v154, 2, (int)v5);
            goto LABEL_143;
          }
LABEL_147:
          v86 = v177;
          if ( v177 )
          {
            if ( (_QWORD)v178 )
            {
              v87 = (char *)v4;
              v147 = (__int64 *)v12;
              v88 = v178;
              v89 = v154;
              v158 = 0;
              v5 = v87;
              do
              {
                numbered_type_name = v86 + 144 * v158;
                clear_tinfo_t(numbered_type_name + 64);
                v90 = *(_QWORD *)(numbered_type_name + 40);
                if ( v90 )
                {
                  *(_QWORD *)(numbered_type_name + 48) = 0;
                  qfree(v90);
                }
                v91 = *(_QWORD *)(numbered_type_name + 16);
                if ( v91 )
                {
                  *(_QWORD *)(numbered_type_name + 24) = 0;
                  qfree(v91);
                }
                ++v158;
                v86 = v177;
              }
              while ( v88 != v158 );
              v12 = (__int64)v147;
              v154 = v89;
              v4 = (signed __int64)v5;
            }
            *(_QWORD *)&v178 = 0;
            qfree(v86);
          }
        }
LABEL_157:
        v21 = (__int64 *)v4;
        clear_tinfo_t(v4);
        goto LABEL_43;
      }
LABEL_88:
      v21 = (__int64 *)v154;
      sub_59E30(v154, 2, (int)v5);
LABEL_43:
      v12 += 4;
      if ( *(_DWORD *)(v154 + 336) != 1 || v151 == (_DWORD *)v12 )
        goto LABEL_61;
    }
    v161 = 0;
    WORD4(v178) = 257;
    v52 = v149;
    *(_QWORD *)&v178 = (unsigned int)v5;
    if ( !v149 )
      v52 = get_idati(v21, 0, v36, v37, v22, v23);
    v4 = (signed __int64)&v161;
    v177 = v52;
    if ( (unsigned __int8)create_tinfo(&v161, 61, 189, &v177) )
    {
      tinfo_property = get_tinfo_property(v161, 8);
      if ( !tinfo_property )
        goto LABEL_157;
      numbered_type_name = v154;
      sub_53580((__int64)&v161, *(_QWORD *)(*(_QWORD *)(v154 + 8) + 16LL), tinfo_property);
      v54 = v161;
      v55 = *(_QWORD *)(v154 + 384);
      if ( (_BYTE)v161 == 13 && (_BYTE)v55 == 13 )
      {
        if ( (unsigned __int16)sub_97BF0(v154 + 8) == 36 )
        {
          LOBYTE(v178) = 0;
          v177 = 0;
          v96 = *(_QWORD *)(v154 + 8);
          v172 = 0;
          LODWORD(v170) = 0;
          if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v154 + 264) + 112LL))(
                  *(_QWORD *)(v96 + 24),
                  62,
                  &v170)
            && (_DWORD)v170
            && (unsigned __int8)sub_96EC0(v154 + 8, &v177, 62)
            && v177 == 3 )
          {
            v172 = 0;
            v97 = *(_QWORD *)(v154 + 384);
            v175 = 1;
            v177 = 0;
            v180 = 1;
            v173 = 0;
            memset(v174, 0, sizeof(v174));
            v178 = 0;
            memset(v179, 0, sizeof(v179));
            if ( (unsigned __int8)get_tinfo_details(v97, 13, &v172) )
            {
              tinfo_details = get_tinfo_details(v161, 13, &v177);
              numbered_type_name = v177;
              if ( !tinfo_details )
                goto LABEL_184;
              if ( (_QWORD)v173 != 2 )
                goto LABEL_184;
              if ( (_QWORD)v178 != 2 )
                goto LABEL_184;
              if ( !*(_QWORD *)(v172 + 24) )
                goto LABEL_184;
              v147 = (__int64 *)v172;
              if ( strcmp(*(const char **)(v172 + 16), "real") )
                goto LABEL_184;
              if ( !*(_QWORD *)(numbered_type_name + 24) )
                goto LABEL_184;
              if ( strcmp(*(const char **)(numbered_type_name + 16), "real") )
                goto LABEL_184;
              if ( !v147[21] )
                goto LABEL_184;
              if ( strcmp((const char *)v147[20], "imag") )
                goto LABEL_184;
              if ( !*(_QWORD *)(numbered_type_name + 168) )
                goto LABEL_184;
              if ( strcmp(*(const char **)(numbered_type_name + 160), "imag") )
                goto LABEL_184;
              v115 = compare_tinfo(v147[8], *(_QWORD *)(numbered_type_name + 64), 0);
              numbered_type_name = v177;
              if ( !v115 )
                goto LABEL_184;
              if ( (unsigned __int8)compare_tinfo(*(_QWORD *)(v172 + 208), *(_QWORD *)(v177 + 208), 0) )
                sub_59E30(v154, 2, (int)v5);
            }
            numbered_type_name = v177;
LABEL_184:
            if ( numbered_type_name )
            {
              if ( (_QWORD)v178 )
              {
                v147 = (__int64 *)v12;
                v99 = v178;
                v100 = v154;
                v159 = 0;
                v5 = (char *)&v161;
                do
                {
                  v101 = (_QWORD *)(144 * v159 + numbered_type_name);
                  clear_tinfo_t(v101 + 8);
                  v102 = v101[5];
                  if ( v102 )
                  {
                    v101[6] = 0;
                    qfree(v102);
                  }
                  v103 = v101[2];
                  if ( v103 )
                  {
                    v101[3] = 0;
                    qfree(v103);
                  }
                  ++v159;
                  numbered_type_name = v177;
                }
                while ( v99 != v159 );
                v12 = (__int64)v147;
                v154 = v100;
                v4 = (signed __int64)&v161;
              }
              *(_QWORD *)&v178 = 0;
              qfree(numbered_type_name);
            }
            v80 = v172;
            if ( !v172 )
              goto LABEL_157;
            if ( (_QWORD)v173 )
            {
              v147 = (__int64 *)v12;
              v104 = v173;
              v105 = v154;
              v160 = 0;
              v5 = (char *)&v161;
              do
              {
                numbered_type_name = v80 + 144 * v160;
                clear_tinfo_t(numbered_type_name + 64);
                v106 = *(_QWORD *)(numbered_type_name + 40);
                if ( v106 )
                {
                  *(_QWORD *)(numbered_type_name + 48) = 0;
                  qfree(v106);
                }
                v107 = *(_QWORD *)(numbered_type_name + 16);
                if ( v107 )
                {
                  *(_QWORD *)(numbered_type_name + 24) = 0;
                  qfree(v107);
                }
                ++v160;
                v80 = v172;
              }
              while ( v104 != v160 );
              v12 = (__int64)v147;
              v154 = v105;
              v4 = (signed __int64)&v161;
            }
            goto LABEL_141;
          }
        }
LABEL_79:
        numbered_type_name = v154;
        if ( (unsigned __int8)sub_1FE00(
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 + 8) + 16LL) + 128LL),
                                0,
                                *(_QWORD *)(v154 + 312)) )
        {
LABEL_171:
          sub_59E30(v154, 2, (int)v5);
          goto LABEL_157;
        }
        v54 = v161;
        v55 = *(_QWORD *)(v154 + 384);
LABEL_81:
        if ( !(unsigned __int8)compare_tinfo(v55, v54, 0) )
          goto LABEL_157;
        goto LABEL_171;
      }
      if ( (_BYTE)v161 != (unsigned __int8)*(_QWORD *)(v154 + 384) )
        goto LABEL_81;
      if ( (_BYTE)v161 == 29 )
        goto LABEL_79;
      if ( (_BYTE)v161 != 45 )
        goto LABEL_81;
      numbered_type_name = get_tinfo_size(0, v161, 0);
      if ( numbered_type_name != get_tinfo_size(0, *(_QWORD *)(v154 + 384), 0) )
        goto LABEL_157;
      v176 = 0x80;
      v175 = 0;
      v73 = *(_QWORD *)(v154 + 384);
      v177 = 0;
      v172 = 0;
      memset(v174, 0, sizeof(v174));
      memset(v179, 0, sizeof(v179));
      v180 = 0;
      v181 = 0x80;
      v173 = 0;
      v178 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v73, 45, &v172)
        || (v135 = get_tinfo_details(v161, 45, &v177)) == 0
        || (v129 = v173, (unsigned __int64)v178 < (unsigned __int64)v173) )
      {
LABEL_118:
        if ( *(_QWORD *)v179 )
        {
          *(_QWORD *)&v179[8] = 0;
          qfree(*(_QWORD *)v179);
        }
        v74 = v177;
        if ( v177 )
        {
          if ( (_QWORD)v178 )
          {
            s1a = a1;
            v75 = 0;
            v5 = (char *)&v161;
            v76 = v154;
            v156 = 0;
            v147 = (__int64 *)v12;
            v77 = v178;
            do
            {
              numbered_type_name = v74 + v156;
              v78 = *(_QWORD *)(v74 + v156 + 24);
              if ( v78 )
              {
                *(_QWORD *)(numbered_type_name + 32) = 0;
                qfree(v78);
              }
              v79 = *(const char **)numbered_type_name;
              if ( *(_QWORD *)numbered_type_name )
              {
                *(_QWORD *)(numbered_type_name + 8) = 0;
                qfree(v79);
              }
              ++v75;
              v156 += 56;
              v74 = v177;
            }
            while ( v77 != v75 );
            v12 = (__int64)v147;
            a1 = s1a;
            v154 = v76;
            v4 = (signed __int64)&v161;
          }
          *(_QWORD *)&v178 = 0;
          qfree(v74);
        }
        if ( *(_QWORD *)v174 )
        {
          *(_QWORD *)&v174[8] = 0;
          qfree(*(_QWORD *)v174);
        }
        v80 = v172;
        if ( !v172 )
          goto LABEL_157;
        if ( (_QWORD)v173 )
        {
          s1b = a1;
          v81 = 0;
          v5 = (char *)&v161;
          v82 = v154;
          v157 = 0;
          v147 = (__int64 *)v12;
          v83 = v173;
          do
          {
            numbered_type_name = v80 + v157;
            v84 = *(_QWORD *)(v80 + v157 + 24);
            if ( v84 )
            {
              *(_QWORD *)(numbered_type_name + 32) = 0;
              qfree(v84);
            }
            v85 = *(const char **)numbered_type_name;
            if ( *(_QWORD *)numbered_type_name )
            {
              *(_QWORD *)(numbered_type_name + 8) = 0;
              qfree(v85);
            }
            ++v81;
            v157 += 56;
            v80 = v172;
          }
          while ( v83 != v81 );
          v12 = (__int64)v147;
          a1 = s1b;
          v154 = v82;
          v4 = (signed __int64)&v161;
        }
LABEL_141:
        *(_QWORD *)&v173 = 0;
        qfree(v80);
        goto LABEL_157;
      }
      v147 = nullptr;
      if ( !(_QWORD)v173 )
      {
LABEL_252:
        sub_59E30(v154, 2, (int)v5);
        goto LABEL_118;
      }
      while ( 1 )
      {
        v114 = 56LL * (_QWORD)v147 + v172;
        if ( *(_QWORD *)(v114 + 48) != *(_QWORD *)(v177 + 56LL * (_QWORD)v147 + 48) )
          goto LABEL_118;
        v108 = src;
        v168 = nullptr;
        v169 = 0;
        if ( *(_QWORD *)(v114 + 8) )
          v108 = *(const char **)v114;
        numbered_type_name = (__int64)&v168;
        v126 = v177 + 56LL * (_QWORD)v147;
        sub_852E0(&v168, v108);
        if ( *(_QWORD *)(v126 + 8) )
        {
          v109 = *(const char **)v126;
          v110 = (char *)src;
          if ( !(_QWORD)v169 )
            goto LABEL_221;
        }
        else
        {
          numbered_type_name = v135;
          v109 = src;
          if ( !(_QWORD)v169 )
            goto LABEL_230;
        }
        v110 = v168;
LABEL_221:
        if ( !strcmp(v110, v109) )
        {
          numbered_type_name = v135;
        }
        else
        {
          v170 = 0;
          v111 = src;
          i = 0;
          if ( *(_QWORD *)(v126 + 8) )
            v111 = *(const char **)v126;
          sub_852E0(&v170, v111);
          v112 = (const char *)v170;
          if ( !(_QWORD)i )
            v112 = src;
          v113 = (char *)src;
          if ( (_QWORD)v169 )
            v113 = v168;
          v127 = v170;
          LOBYTE(numbered_type_name) = strcmp(v113, v112) == 0;
          if ( v127 )
          {
            *(_QWORD *)&i = 0;
            qfree(v127);
          }
        }
LABEL_230:
        if ( v168 )
        {
          *(_QWORD *)&v169 = 0;
          qfree(v168);
        }
        v147 = (__int64 *)((char *)v147 + 1);
        if ( (unsigned __int64)v147 >= v129 )
        {
          if ( !(_BYTE)numbered_type_name )
            goto LABEL_118;
          goto LABEL_252;
        }
        if ( !(_BYTE)numbered_type_name )
          goto LABEL_118;
      }
    }
    clear_tinfo_t(&v161);
    if ( v166 )
    {
      *(_QWORD *)&v167 = 0;
      qfree(v166);
    }
    if ( v164 )
    {
      *(_QWORD *)&v165 = 0;
      qfree(v164);
    }
    v49 = v162;
    if ( v162 )
      goto LABEL_70;
    return v182 - __readfsqword(0x28u);
  }
LABEL_164:
  v46 = v166;
LABEL_165:
  if ( v46 )
  {
    *(_QWORD *)&v167 = 0;
    qfree(v46);
  }
  if ( v164 )
  {
    *(_QWORD *)&v165 = 0;
    qfree(v164);
  }
LABEL_68:
  v47 = v162;
  v48 = v163;
LABEL_69:
  v49 = *(char **)(v154 + 312);
  v50 = *(_QWORD *)(v154 + 328);
  *(_QWORD *)(v154 + 312) = v47;
  *(_OWORD *)(v154 + 320) = v48;
  v162 = v49;
  *((_QWORD *)&v163 + 1) = v50;
  if ( v49 )
  {
LABEL_70:
    *(_QWORD *)&v163 = 0;
    qfree(v49);
  }
  return v182 - __readfsqword(0x28u);
}
