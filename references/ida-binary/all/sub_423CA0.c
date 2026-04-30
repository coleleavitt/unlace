__int64 __fastcall sub_423CA0(
        char *a1,
        const void *a2,
        bool a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *v11; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v15; // r14
  __int64 v16; // r15
  size_t v17; // r14
  size_t v18; // r14
  size_t v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  char *v23; // rsi
  const char *v24; // rdi
  bool v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // r12
  __int64 v29; // rsi
  const char *v30; // rax
  const char *v31; // rcx
  char *v32; // rdx
  __m128 v33; // xmm0
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // r13
  char *v37; // rsi
  const char *v38; // r14
  const char *v39; // rsi
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  size_t v42; // rax
  size_t v43; // r13
  size_t v44; // r13
  _BYTE *v45; // r14
  const char *v46; // rsi
  const char *v47; // rsi
  char *v48; // rdi
  __int64 (__fastcall *v49)(__int64, __int64, unsigned __int8); // rax
  __int64 *v50; // rdi
  __int64 v51; // rax
  __int64 (*v52)(); // rdx
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // ebx
  char *v57; // rdx
  __int64 (__fastcall *v58)(__int64); // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  const char *v61; // rsi
  __int64 (*v62)(void); // rcx
  int v63; // eax
  const char *vault_filter_explanations; // rax
  size_t v65; // rax
  size_t v66; // r13
  const char *v67; // rdx
  __int64 v68; // r13
  __int64 v69; // r14
  const char *v70; // rax
  __int64 v71; // rdi
  char *v72; // rdi
  size_t v73; // r14
  char *v74; // rax
  __int64 v75; // rax
  const char *v76; // rdi
  char *v77; // rdx
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 *v79; // rdi
  __int64 v80; // rax
  __int64 (*v81)(); // rcx
  unsigned int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r13
  __int64 v85; // r15
  __int64 *v86; // rax
  __int64 v87; // rdi
  char *v88; // rdx
  __int64 (__fastcall *v89)(__int64); // rax
  __int64 *v90; // rdi
  __int64 v91; // rax
  __int64 (*v92)(); // rcx
  unsigned int v93; // eax
  __int64 v94; // rax
  __m128i v95; // xmm0
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rax
  void *v102; // rax
  __m128i v103; // xmm0
  void *v104; // r14
  __m128i si128; // xmm0
  const char *v106; // rsi
  char v107; // al
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // r13
  __int64 *v111; // rcx
  __int64 v112; // rdi
  void *v113; // rdi
  size_t v114; // r14
  char v115; // al
  char *v116; // rdi
  char *v117; // rdx
  __int64 (__fastcall *v118)(__int64); // rax
  __int64 *v119; // rdi
  __int64 v120; // rax
  __int64 (*v121)(); // rcx
  int v122; // eax
  const char *v123; // r14
  char *v124; // rdx
  const char *v125; // rsi
  __int64 (__fastcall *v126)(_QWORD *, __int64, unsigned int, unsigned int); // rax
  __int64 v127; // rdi
  unsigned __int8 (*v128)(void); // rax
  __int64 v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // r15
  __int64 v132; // r13
  __int64 v133; // rax
  __int64 v134; // rdi
  const char *v135; // rdx
  __int64 v136; // r15
  __int64 v137; // r13
  const char *v138; // rax
  __int64 v139; // rdi
  char v140; // al
  char v141; // al
  size_t v142; // [rsp+8h] [rbp-1208h]
  bool v143; // [rsp+10h] [rbp-1200h]
  char *v144; // [rsp+10h] [rbp-1200h]
  __int64 v145; // [rsp+10h] [rbp-1200h]
  char *v146; // [rsp+30h] [rbp-11E0h]
  char *v147; // [rsp+30h] [rbp-11E0h]
  char *v148; // [rsp+30h] [rbp-11E0h]
  int v149; // [rsp+38h] [rbp-11D8h]
  bool v150; // [rsp+3Fh] [rbp-11D1h]
  void *src[2]; // [rsp+40h] [rbp-11D0h] BYREF
  _BYTE v152[4]; // [rsp+58h] [rbp-11B8h] BYREF
  int v153; // [rsp+5Ch] [rbp-11B4h]
  __int64 v154; // [rsp+60h] [rbp-11B0h] BYREF
  __int128 v155; // [rsp+68h] [rbp-11A8h]
  void *v156; // [rsp+80h] [rbp-1190h] BYREF
  __int128 v157; // [rsp+88h] [rbp-1188h]
  const char *v158; // [rsp+A0h] [rbp-1170h] BYREF
  __int128 v159; // [rsp+A8h] [rbp-1168h]
  __int64 v160; // [rsp+C0h] [rbp-1150h]
  void *dest; // [rsp+C8h] [rbp-1148h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-1140h]
  int v163; // [rsp+E0h] [rbp-1130h]
  char *s2; // [rsp+F0h] [rbp-1120h] BYREF
  __int128 v165; // [rsp+F8h] [rbp-1118h]
  char *s1; // [rsp+108h] [rbp-1108h] BYREF
  __int128 v167; // [rsp+110h] [rbp-1100h]
  char *v168; // [rsp+120h] [rbp-10F0h] BYREF
  __int128 v169; // [rsp+128h] [rbp-10E8h]
  char *v170; // [rsp+138h] [rbp-10D8h] BYREF
  __int128 v171; // [rsp+140h] [rbp-10D0h]
  __int64 v172; // [rsp+150h] [rbp-10C0h]
  void *v173; // [rsp+160h] [rbp-10B0h] BYREF
  __m128i v174; // [rsp+168h] [rbp-10A8h] BYREF
  __int64 v175; // [rsp+178h] [rbp-1098h]
  __m128i v176; // [rsp+180h] [rbp-1090h]
  __int64 v177; // [rsp+190h] [rbp-1080h]
  __m128 v178; // [rsp+198h] [rbp-1078h]
  __int64 v179; // [rsp+1A8h] [rbp-1068h]
  __int128 v180; // [rsp+1B0h] [rbp-1060h]
  __int64 v181; // [rsp+1C0h] [rbp-1050h]
  char s[4104]; // [rsp+1D0h] [rbp-1040h] BYREF
  unsigned __int64 v183; // [rsp+11D8h] [rbp-38h]

  v11 = a1;
  v150 = a3;
  v183 = __readfsqword(0x28u);
  v165 = 0;
  s2 = nullptr;
  v13 = 104LL * (_QWORD)a2;
  v14 = 104LL * (_QWORD)a2 + *((_QWORD *)a1 + 42);
  v15 = *(_QWORD *)(v14 + 8);
  v16 = v14;
  if ( v15 )
  {
    v74 = (char *)qalloc_or_throw(*(_QWORD *)(v14 + 8));
    *((_QWORD *)&v165 + 1) = v15;
    s2 = v74;
    a2 = *(const void **)v16;
    a1 = v74;
    memcpy(v74, *(const void **)v16, v15);
    *(_QWORD *)&v165 = v15;
  }
  s1 = nullptr;
  v167 = 0;
  v17 = *(_QWORD *)(v16 + 32);
  if ( v17 )
  {
    s1 = (char *)qalloc_or_throw(*(_QWORD *)(v16 + 32));
    a1 = s1;
    *((_QWORD *)&v167 + 1) = v17;
    a2 = *(const void **)(v16 + 24);
    memcpy(s1, a2, v17);
    *(_QWORD *)&v167 = v17;
  }
  v168 = nullptr;
  v169 = 0;
  v18 = *(_QWORD *)(v16 + 56);
  if ( v18 )
  {
    v168 = (char *)qalloc_or_throw(*(_QWORD *)(v16 + 56));
    a1 = v168;
    *((_QWORD *)&v169 + 1) = v18;
    a2 = *(const void **)(v16 + 48);
    memcpy(v168, a2, v18);
    *(_QWORD *)&v169 = v18;
  }
  v170 = nullptr;
  v171 = 0;
  v19 = *(_QWORD *)(v16 + 80);
  if ( v19 )
  {
    v170 = (char *)qalloc_or_throw(*(_QWORD *)(v16 + 80));
    a1 = v170;
    *((_QWORD *)&v171 + 1) = v19;
    a2 = *(const void **)(v16 + 72);
    memcpy(v170, a2, v19);
    *(_QWORD *)&v171 = v19;
  }
  v20 = *((_QWORD *)v11 + 42) + v13;
  v172 = *(_QWORD *)(v16 + 96);
  v21 = sub_426230(a1, (const char *)a2);
  v22 = sub_4170A0(v21);
  v23 = (char *)&::s1;
  if ( (_QWORD)v165 )
    v23 = s2;
  v24 = &::s1;
  if ( *(_QWORD *)(v22 + 8) )
    v24 = *(const char **)v22;
  v149 = strcmp(v24, v23);
  v25 = a3 && v149 != 0;
  if ( !a3 )
  {
    v75 = sub_4170C0(v21);
    v23 = (char *)&::s1;
    if ( (_QWORD)v167 )
    {
      v23 = s1;
      v24 = &::s1;
      if ( !*(_QWORD *)(v75 + 8) )
        goto LABEL_114;
    }
    else
    {
      v24 = &::s1;
      if ( !*(_QWORD *)(v75 + 8) )
      {
LABEL_114:
        v150 = strcmp(&::s1, v23) == 0;
        goto LABEL_14;
      }
    }
    v24 = *(const char **)v75;
    v150 = strcmp(*(const char **)v75, v23) == 0;
  }
LABEL_14:
  v26 = sub_426230(v24, v23);
  v27 = sub_417080(v26);
  v28 = (_QWORD *)v27;
  v160 = 40;
  v29 = v165;
  *(_OWORD *)n = 0;
  dest = nullptr;
  v163 = 0;
  if ( v150 )
  {
    v159 = 0;
    v57 = (char *)&::s1;
    v158 = nullptr;
    v58 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 208LL);
    if ( (_QWORD)v165 )
    {
      v57 = s2;
      if ( v58 == vault_with_events_t__::vfunc_26 )
        goto LABEL_78;
    }
    else if ( v58 == vault_with_events_t__::vfunc_26 )
    {
LABEL_78:
      v59 = (_QWORD *)v28[1];
      if ( !v59 )
        goto LABEL_213;
      v60 = *v59;
      v61 = (const char *)sub_178B60;
      v62 = *(__int64 (**)(void))(*v59 + 480LL);
      if ( v62 != sub_178B60 )
      {
        v148 = v57;
        src[0] = &v158;
        v115 = v62();
        v57 = v148;
        if ( v115 )
        {
LABEL_190:
          v67 = v158;
          if ( v158 )
          {
            v150 = 0;
            goto LABEL_87;
          }
          v29 = v165;
LABEL_213:
          v150 = 0;
          v30 = (const char *)&unk_5C2F25;
          v154 = 0;
          v155 = 0;
          goto LABEL_16;
        }
        v59 = (_QWORD *)v28[1];
        v60 = *v59;
      }
      src[0] = &v158;
      v61 = (const char *)&v158;
      v63 = (*(__int64 (__fastcall **)(_QWORD *, const char **, char *))(v60 + 176))(v59, &v158, v57);
LABEL_81:
      if ( !v63 )
      {
        if ( (_QWORD)v159 )
        {
          v61 = (const char *)src[0];
          sub_2E5140((__int64 *)&v173, (__int64 *)src[0], "\n");
          v102 = v173;
          a5 = 0;
          v173 = nullptr;
          v103 = _mm_loadu_si128(&v174);
          v174 = 0;
          v104 = v102;
          if ( dest )
          {
            *(__m128i *)src = v103;
            n[0] = 0;
            qfree(dest, v61);
            si128 = _mm_load_si128((const __m128i *)src);
            dest = v104;
            *(__m128i *)n = si128;
            if ( v173 )
            {
              v174.m128i_i64[0] = 0;
              qfree(v173, v61);
            }
          }
          else
          {
            dest = v102;
            *(__m128i *)n = v103;
          }
        }
        else
        {
          vault_filter_explanations = (const char *)get_vault_filter_explanations(v59, (const char *)&v158);
          v147 = (char *)vault_filter_explanations;
          if ( vault_filter_explanations )
          {
            v65 = strlen(vault_filter_explanations);
            v66 = v65;
            if ( v65 )
            {
              v113 = dest;
              v114 = v65 + 1;
              if ( n[1] < v65 + 1 )
              {
                dest = (void *)qvector_reserve(&dest, dest, v114, 1);
                v113 = dest;
              }
              v61 = v147;
              n[0] = v114;
              memmove(v113, v147, v66);
              *((_BYTE *)dest + v66) = 0;
              v67 = v158;
              if ( v158 )
                goto LABEL_87;
              goto LABEL_186;
            }
          }
          n[0] = 0;
        }
        v67 = v158;
        if ( v158 )
        {
LABEL_87:
          v68 = v159;
          if ( (_QWORD)v159 )
          {
            v69 = 0;
            do
            {
              v70 = &v67[24 * v69];
              v71 = *(_QWORD *)v70;
              if ( *(_QWORD *)v70 )
              {
                *((_QWORD *)v70 + 1) = 0;
                qfree(v71, v61);
                v67 = v158;
              }
              ++v69;
            }
            while ( v68 != v69 );
          }
          *(_QWORD *)&v159 = 0;
          qfree(v67, v61);
          v30 = (const char *)&unk_5C2F25;
          v29 = v165;
          v154 = 0;
          if ( v150 )
            v30 = "<#One path per line.\n"
                  "To hide a path, prepend it with an exclamation mark.#Path ~f~ilters will be applied to all operations:t5::60:::>";
          v155 = 0;
          goto LABEL_16;
        }
LABEL_186:
        v29 = v165;
        v154 = 0;
        v30 = "<#One path per line.\n"
              "To hide a path, prepend it with an exclamation mark.#Path ~f~ilters will be applied to all operations:t5::60:::>";
        v155 = 0;
        goto LABEL_16;
      }
      goto LABEL_190;
    }
    v59 = v28;
    src[0] = &v158;
    v61 = (const char *)&v158;
    v63 = ((__int64 (__fastcall *)(_QWORD *, const char **, char *))v58)(v28, &v158, v57);
    goto LABEL_81;
  }
  v155 = 0;
  v30 = (const char *)&unk_5C2F25;
  v154 = 0;
LABEL_16:
  v31 = "User:%q";
  if ( v25 )
    v31 = "<~U~ser       :q2:1000:50::>";
  v32 = (char *)&::s1;
  if ( v29 )
    v32 = s2;
  sub_169A50(
    &v154,
    (__int64)"Edit site %s\n\n%%/%%*Last used: %%q\n%s\n%s\n%s\n%s\n\n",
    v32,
    v31,
    "<~R~ootdir    :F3:0:50::>",
    "<Client ~h~ost:q4:1000:50::>",
    v30);
  qstrftime64(s, 20, "%F %T", v172);
  v33 = 0;
  src[0] = s;
  v156 = nullptr;
  v157 = 0;
  v34 = strlen(s);
  v35 = v34 + 1;
  v36 = v34;
  v156 = (void *)qvector_reserve(&v156, 0, v34 + 1, 1);
  *(_QWORD *)&v157 = v35;
  memmove(v156, src[0], v36);
  *((_BYTE *)v156 + v36) = 0;
  v142 = n[0];
  if ( n[0] )
  {
    v146 = (char *)qalloc_or_throw(n[0]);
    memcpy(v146, dest, v142);
  }
  else
  {
    v146 = nullptr;
  }
  while ( 1 )
  {
    v152[0] = v25;
    v37 = (char *)&::s1;
    v152[1] = 0;
    v153 = 1;
    s[0] = 0;
    if ( (_QWORD)v169 )
      v37 = v168;
    v38 = (const char *)src[0];
    QT::qstrcpy((char *)src[0], v37);
    v39 = (const char *)sub_421D90;
    if ( !(unsigned int)sub_1697D0(
                          v154,
                          (__int64)sub_421D90,
                          (__int64)v152,
                          (__int64)&v156,
                          (__int64)&s1,
                          (__int64)v38,
                          v33,
                          a5,
                          a6,
                          a7,
                          v40,
                          v41,
                          a10,
                          a11,
                          (char)&v170) )
      goto LABEL_58;
    v42 = strlen(v38);
    v43 = v42;
    if ( v42 )
    {
      v72 = v168;
      v73 = v42 + 1;
      if ( *((_QWORD *)&v169 + 1) < v42 + 1 )
      {
        v168 = (char *)qvector_reserve(&v168, v168, v73, 1);
        v72 = v168;
      }
      *(_QWORD *)&v169 = v73;
      memmove(v72, src[0], v43);
      v168[v43] = 0;
    }
    else
    {
      *(_QWORD *)&v169 = 0;
    }
    v44 = n[0];
    v45 = nullptr;
    *((_QWORD *)&v159 + 1) = 0;
    if ( n[0] )
    {
      v45 = (_BYTE *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v159 + 1) = v44;
      memcpy(v45, dest, v44);
    }
    if ( !v25 )
      goto LABEL_33;
    if ( !*(_QWORD *)(v20 + 32) )
    {
      v46 = &::s1;
      if ( !(_QWORD)v167 )
        goto LABEL_33;
LABEL_32:
      if ( strcmp(s1, v46) )
        goto LABEL_37;
      goto LABEL_33;
    }
    v46 = *(const char **)(v20 + 24);
    if ( (_QWORD)v167 )
      goto LABEL_32;
    if ( strcmp(&::s1, v46) )
      goto LABEL_37;
LABEL_33:
    if ( *(_QWORD *)(v20 + 56) )
    {
      v47 = *(const char **)(v20 + 48);
      v48 = (char *)&::s1;
      if ( !(_QWORD)v169 )
        goto LABEL_36;
      goto LABEL_35;
    }
    v47 = &::s1;
    if ( !(_QWORD)v169 )
    {
LABEL_96:
      if ( *(_QWORD *)(v20 + 80) )
      {
        v39 = *(const char **)(v20 + 72);
        if ( !(_QWORD)v171 )
        {
          if ( !strcmp(&::s1, v39) )
            goto LABEL_55;
LABEL_99:
          if ( !v150 )
            goto LABEL_100;
LABEL_38:
          if ( !v142 )
          {
            v143 = 0;
            if ( v44 )
              v143 = *v45 != 0;
            goto LABEL_41;
          }
          v143 = v150;
          goto LABEL_116;
        }
      }
      else
      {
        v39 = &::s1;
        if ( !(_QWORD)v171 )
          goto LABEL_55;
      }
      if ( strcmp(v170, v39) )
        goto LABEL_99;
LABEL_55:
      if ( !v150 )
        goto LABEL_56;
      if ( !v142 )
      {
        if ( !v44 || !*v45 )
        {
LABEL_56:
          if ( v45 )
            *(double *)v33.m128_u64 = qfree(v45, v39);
LABEL_58:
          v55 = 0;
          goto LABEL_59;
        }
        goto LABEL_120;
      }
      v143 = 0;
LABEL_116:
      v76 = &::s1;
      v39 = v146;
      if ( v44 )
        v76 = v45;
      if ( strcmp(v76, v146) )
      {
        if ( !v143 )
          goto LABEL_120;
        goto LABEL_41;
      }
      if ( !v143 )
        goto LABEL_56;
      goto LABEL_100;
    }
LABEL_35:
    v48 = v168;
LABEL_36:
    if ( !strcmp(v48, v47) )
      goto LABEL_96;
LABEL_37:
    if ( v150 )
      goto LABEL_38;
LABEL_100:
    v143 = 0;
LABEL_41:
    v49 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8))(*v28 + 160LL);
    if ( v49 == vault_with_events_t__::vfunc_20 )
    {
      v50 = (__int64 *)v28[1];
      if ( !v50 )
        goto LABEL_169;
      v51 = *v50;
      v52 = *(__int64 (**)())(*v50 + 480);
      if ( v52 != sub_178B60 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64 *))v52)(v50) )
        {
LABEL_169:
          v53 = 52;
LABEL_170:
          v106 = "Failed to change site";
          sub_4168C0(v53, (__int64)"Failed to change site");
          goto LABEL_171;
        }
        v50 = (__int64 *)v28[1];
        v51 = *v50;
      }
      v53 = (*(__int64 (__fastcall **)(__int64 *, char **, _QWORD))(v51 + 128))(v50, &s2, 0);
    }
    else
    {
      v53 = v49((__int64)v28, (__int64)&s2, 0);
    }
    if ( v53 )
      goto LABEL_170;
    if ( !v143 )
    {
      if ( v45 )
        *(double *)v33.m128_u64 = qfree(v45, (const char *)&s2);
      if ( v149 )
        goto LABEL_140;
      v54 = v169;
      if ( *(_QWORD *)(v20 + 56) )
        goto LABEL_194;
      if ( !(_QWORD)v169 || !*v168 )
        goto LABEL_140;
LABEL_197:
      v117 = (char *)&::s1;
      v118 = *(__int64 (__fastcall **)(__int64))(*v28 + 192LL);
      if ( (_QWORD)v165 )
        v117 = s2;
      if ( v118 != sub_415C30 )
      {
        v122 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, char *, char *, double))v118)(
                 v28,
                 0,
                 v117,
                 "*",
                 *(double *)v33.m128_u64);
LABEL_203:
        LODWORD(v123) = v122;
        if ( !v122 )
        {
          v124 = (char *)&::s1;
          if ( (_QWORD)v169 )
            v124 = v168;
          v125 = "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you want to sync all files to '%s'?";
          if ( (unsigned int)sub_1698A0(
                               1,
                               (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you want to sync all files to '%s'?",
                               v124) != 1 )
          {
LABEL_207:
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
              QT::QCoreApplication::self + 2,
              0,
              2,
              1);
            if ( !(_DWORD)v123 )
              goto LABEL_209;
            goto LABEL_208;
          }
          v158 = nullptr;
          v159 = 0;
          v126 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int, unsigned int))(*v28 + 376LL);
          if ( v126 == sub_418E80 )
          {
            v127 = v28[1];
            LODWORD(v123) = 52;
            if ( !v127 )
              goto LABEL_207;
            v128 = *(unsigned __int8 (**)(void))(*(_QWORD *)v127 + 480LL);
            if ( (char *)v128 != (char *)sub_178B60 )
            {
              src[0] = &v158;
              if ( v128() )
              {
                v135 = v158;
                LODWORD(v123) = 52;
LABEL_230:
                if ( v135 )
                {
                  v136 = v159;
                  if ( (_QWORD)v159 )
                  {
                    v137 = 0;
                    do
                    {
                      v138 = &v135[24 * v137];
                      v139 = *(_QWORD *)v138;
                      if ( *(_QWORD *)v138 )
                      {
                        *((_QWORD *)v138 + 1) = 0;
                        qfree(v139, v125);
                        v135 = v158;
                      }
                      ++v137;
                    }
                    while ( v136 != v137 );
                  }
                  *(_QWORD *)&v159 = 0;
                  qfree(v135, v125);
                }
                goto LABEL_207;
              }
            }
            v173 = nullptr;
            v174 = 0;
            v129 = v28[1];
            src[0] = &v158;
            v123 = (const char *)(*(unsigned int (__fastcall **)(__int64, void **, const char **, __int64, __int64))(*(_QWORD *)v129 + 344LL))(
                                   v129,
                                   &v173,
                                   &v158,
                                   0xFFFFFFFFLL,
                                   5);
            v125 = v123;
            (*(void (__fastcall **)(_QWORD *, const char *, void **))(*v28 + 24LL))(v28, v123, &v173);
            v130 = (__int64)v173;
            if ( v173 )
            {
              v131 = v174.m128i_i64[0];
              if ( v174.m128i_i64[0] )
              {
                v132 = 0;
                do
                {
                  v133 = v130 + 32 * v132;
                  v134 = *(_QWORD *)(v133 + 8);
                  if ( v134 )
                  {
                    *(_QWORD *)(v133 + 16) = 0;
                    qfree(v134, v123);
                    v130 = (__int64)v173;
                  }
                  ++v132;
                }
                while ( v131 != v132 );
              }
              v174.m128i_i64[0] = 0;
              qfree(v130, v123);
            }
          }
          else
          {
            src[0] = &v158;
            v125 = (const char *)&v158;
            LODWORD(v123) = v126(v28, (__int64)&v158, 0xFFFFFFFF, 5u);
          }
          v135 = v158;
          goto LABEL_230;
        }
LABEL_208:
        sub_416980((unsigned int)v123, (__int64)"Failed to use the current local site after editing it");
        goto LABEL_209;
      }
      v119 = (__int64 *)v28[1];
      if ( v119 )
      {
        v120 = *v119;
        v121 = *(__int64 (**)())(*v119 + 480);
        if ( v121 == sub_178B60 )
        {
LABEL_202:
          v122 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *, char *, double))(v120 + 160))(
                   v119,
                   0,
                   v117,
                   "*",
                   *(double *)v33.m128_u64);
          goto LABEL_203;
        }
        src[0] = v117;
        v140 = ((__int64 (__fastcall *)(double))v121)(*(double *)v33.m128_u64);
        v117 = (char *)src[0];
        if ( !v140 )
        {
          v119 = (__int64 *)v28[1];
          v120 = *v119;
          goto LABEL_202;
        }
      }
      LODWORD(v123) = 52;
      goto LABEL_208;
    }
LABEL_120:
    *(_QWORD *)&v159 = v44;
    v33 = 0;
    v173 = nullptr;
    v158 = v45;
    v174 = 0;
    sub_421E30((__int64)&v173, &v158);
    v77 = (char *)&::s1;
    v78 = *(__int64 (__fastcall **)(__int64))(*v28 + 200LL);
    if ( (_QWORD)v165 )
      v77 = s2;
    if ( v78 != sub_415630 )
      break;
    v79 = (__int64 *)v28[1];
    if ( v79 )
    {
      v80 = *v79;
      v81 = *(__int64 (**)())(*v79 + 480);
      if ( v81 == sub_178B60 )
        goto LABEL_125;
      v144 = v77;
      v107 = v81();
      v77 = v144;
      if ( !v107 )
      {
        v79 = (__int64 *)v28[1];
        v80 = *v79;
LABEL_125:
        v82 = (*(__int64 (__fastcall **)(__int64 *, void **, char *))(v80 + 168))(v79, &v173, v77);
        goto LABEL_126;
      }
    }
    v82 = 52;
LABEL_175:
    v106 = "Failed to set filters";
    sub_4168C0(v82, (__int64)"Failed to set filters");
    v108 = (__int64)v173;
    if ( v173 )
    {
      if ( v174.m128i_i64[0] )
      {
        v145 = v20;
        v109 = 0;
        v110 = v174.m128i_i64[0];
        do
        {
          v111 = (__int64 *)(v108 + 24 * v109);
          v112 = *v111;
          if ( *v111 )
          {
            v111[1] = 0;
            qfree(v112, "Failed to set filters");
            v108 = (__int64)v173;
          }
          ++v109;
        }
        while ( v110 != v109 );
        v20 = v145;
      }
      v174.m128i_i64[0] = 0;
      *(double *)v33.m128_u64 = qfree(v108, "Failed to set filters");
    }
LABEL_171:
    if ( v45 )
      *(double *)v33.m128_u64 = qfree(v45, v106);
  }
  v82 = ((__int64 (__fastcall *)(_QWORD *, void **, char *))v78)(v28, &v173, v77);
LABEL_126:
  if ( v82 )
    goto LABEL_175;
  v83 = (__int64)v173;
  if ( v173 )
  {
    v84 = v174.m128i_i64[0];
    if ( v174.m128i_i64[0] )
    {
      v85 = 0;
      do
      {
        v86 = (__int64 *)(v83 + 24 * v85);
        v87 = *v86;
        if ( *v86 )
        {
          v86[1] = 0;
          qfree(v87, (const char *)&v173);
          v83 = (__int64)v173;
        }
        ++v85;
      }
      while ( v84 != v85 );
    }
    v174.m128i_i64[0] = 0;
    *(double *)v33.m128_u64 = qfree(v83, (const char *)&v173);
  }
  if ( v45 )
    *(double *)v33.m128_u64 = qfree(v45, (const char *)&v173);
  if ( v149 )
    goto LABEL_139;
  v54 = v169;
  if ( !*(_QWORD *)(v20 + 56) )
  {
    if ( !(_QWORD)v169 )
      goto LABEL_139;
    v143 = 1;
    if ( !*v168 )
      goto LABEL_139;
    goto LABEL_197;
  }
  v143 = 1;
LABEL_194:
  v116 = (char *)&::s1;
  if ( v54 )
    v116 = v168;
  if ( strcmp(v116, *(const char **)(v20 + 48)) )
    goto LABEL_197;
LABEL_209:
  if ( v143 )
LABEL_139:
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
      QT::QCoreApplication::self + 2,
      0x8000000000000000LL,
      1,
      1);
LABEL_140:
  v33.m128_u64[0] = 0;
  v173 = nullptr;
  v88 = (char *)&::s1;
  v175 = 0;
  v177 = 0;
  v179 = 0;
  v181 = 0;
  v174 = 0;
  v176 = 0;
  v178 = 0;
  v180 = 0;
  v89 = *(__int64 (__fastcall **)(__int64))(*v28 + 184LL);
  if ( (_QWORD)v165 )
    v88 = s2;
  if ( v89 != vault_with_events_t__::vfunc_23 )
  {
    v39 = (const char *)&v173;
    v93 = ((__int64 (__fastcall *)(_QWORD *, void **, char *))v89)(v28, &v173, v88);
    goto LABEL_146;
  }
  v90 = (__int64 *)v28[1];
  if ( !v90 )
    goto LABEL_187;
  v91 = *v90;
  v92 = *(__int64 (**)())(*v90 + 480);
  if ( v92 == sub_178B60 )
    goto LABEL_145;
  src[0] = v88;
  v141 = v92();
  v88 = (char *)src[0];
  if ( v141 )
  {
LABEL_187:
    v93 = 52;
LABEL_188:
    v39 = "Failed to retrieve local site after editing it";
    sub_4168C0(v93, (__int64)"Failed to retrieve local site after editing it");
    v100 = v179;
    v55 = 0;
    goto LABEL_148;
  }
  v90 = (__int64 *)v28[1];
  v91 = *v90;
LABEL_145:
  v39 = (const char *)&v173;
  v93 = (*(__int64 (__fastcall **)(__int64 *, void **, char *))(v91 + 152))(v90, &v173, v88);
LABEL_146:
  if ( v93 )
    goto LABEL_188;
  v94 = *(_QWORD *)v20;
  v95 = _mm_loadu_si128((const __m128i *)(v20 + 8));
  *(_QWORD *)v20 = v173;
  *(__m128i *)(v20 + 8) = v174;
  v173 = (void *)v94;
  v174 = v95;
  v96 = *(_QWORD *)(v20 + 24);
  v97 = _mm_loadu_si128((const __m128i *)(v20 + 32));
  *(_QWORD *)(v20 + 24) = v175;
  *(__m128i *)(v20 + 32) = v176;
  v175 = v96;
  v176 = v97;
  v98 = *(_QWORD *)(v20 + 48);
  v33 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + 56));
  *(_QWORD *)(v20 + 48) = v177;
  *(__m128 *)(v20 + 56) = v178;
  v177 = v98;
  v178 = v33;
  v99 = *(_QWORD *)(v20 + 88);
  v100 = *(_QWORD *)(v20 + 72);
  *(_QWORD *)(v20 + 72) = v179;
  *(_OWORD *)(v20 + 80) = v180;
  v179 = v100;
  *((_QWORD *)&v180 + 1) = v99;
  v101 = *(_QWORD *)(v20 + 96);
  *(_QWORD *)(v20 + 96) = v181;
  v55 = 1;
  v181 = v101;
LABEL_148:
  if ( v100 )
  {
    *(_QWORD *)&v180 = 0;
    *(double *)v33.m128_u64 = qfree(v100, v39);
  }
  if ( v177 )
  {
    v178.m128_u64[0] = 0;
    *(double *)v33.m128_u64 = qfree(v177, v39, *(double *)v33.m128_u64);
  }
  if ( v175 )
  {
    v176.m128i_i64[0] = 0;
    *(double *)v33.m128_u64 = qfree(v175, v39, *(double *)v33.m128_u64);
  }
  if ( v173 )
  {
    v174.m128i_i64[0] = 0;
    *(double *)v33.m128_u64 = qfree(v173, v39, *(double *)v33.m128_u64);
  }
LABEL_59:
  if ( v146 )
    *(double *)v33.m128_u64 = qfree(v146, v39, *(double *)v33.m128_u64);
  if ( v156 )
  {
    *(_QWORD *)&v157 = 0;
    *(double *)v33.m128_u64 = qfree(v156, v39, *(double *)v33.m128_u64);
  }
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    *(double *)v33.m128_u64 = qfree(v154, v39, *(double *)v33.m128_u64);
  }
  if ( dest )
  {
    n[0] = 0;
    *(double *)v33.m128_u64 = qfree(dest, v39, *(double *)v33.m128_u64);
  }
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    *(double *)v33.m128_u64 = qfree(v170, v39, *(double *)v33.m128_u64);
  }
  if ( v168 )
  {
    *(_QWORD *)&v169 = 0;
    *(double *)v33.m128_u64 = qfree(v168, v39, *(double *)v33.m128_u64);
  }
  if ( s1 )
  {
    *(_QWORD *)&v167 = 0;
    *(double *)v33.m128_u64 = qfree(s1, v39, *(double *)v33.m128_u64);
  }
  if ( s2 )
  {
    *(_QWORD *)&v165 = 0;
    qfree(s2, v39, *(double *)v33.m128_u64);
  }
  return v55;
}
