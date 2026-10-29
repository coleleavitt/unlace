unsigned __int64 __fastcall sub_26CAA0(int a1, const char *a2, int a3, int a4, int a5, int a6, double a7)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  char *p_ptr; // rsi
  void *v15; // rdi
  __int64 v16; // rdi
  char *v17; // rsi
  _QWORD *v18; // r15
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  _QWORD *v25; // rbx
  __int64 v26; // rbp
  const char *v27; // r8
  size_t v28; // r14
  void *v29; // rax
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r14
  _QWORD *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rsi
  size_t v42; // rbp
  __int64 v43; // rax
  void *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rbx
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // r14
  __int64 v52; // rbp
  int v53; // r9d
  __int64 v54; // rbp
  char *v55; // rax
  char *v56; // r14
  char *v57; // rbp
  char *v58; // r13
  __int64 v59; // rdx
  __int64 v60; // r12
  __int64 i; // rbx
  __int64 *v62; // rax
  __int64 v63; // rdi
  const char *v64; // r13
  __int64 v65; // r14
  __int64 v66; // r15
  _QWORD *v67; // rbx
  __int64 v68; // rbp
  const char *v69; // rdi
  int v70; // esi
  _QWORD *v71; // rbx
  __int64 v72; // r12
  __int64 v73; // r14
  __int64 v74; // r13
  __int64 v75; // rbp
  int v76; // ecx
  __int64 v77; // rbp
  __int64 v78; // rdi
  __int64 v79; // r14
  __int64 v80; // r12
  __int64 *v81; // rbp
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // r13
  __int64 j; // rbx
  QT::QRegularExpression *v86; // rdi
  __int64 view_options; // rbx
  __int64 v88; // rax
  __int64 *v89; // r15
  __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rdx
  __m128 si128; // xmm0
  __int64 v94; // r14
  __int64 v95; // rsi
  __int64 v96; // r12
  __int64 v97; // rbp
  __int64 v98; // r14
  __int64 v99; // r13
  int v100; // eax
  __int64 v101; // r14
  __int64 v102; // r12
  __int64 v103; // rbp
  __int64 v104; // r14
  __int64 v105; // r13
  int v106; // eax
  __int64 v107; // r14
  __int64 v108; // r12
  __int64 v109; // rbp
  __int64 v110; // r14
  __int64 v111; // r13
  int v112; // eax
  __int64 v113; // r14
  __int64 v114; // r12
  __int64 v115; // rsi
  __int64 v116; // r14
  __int64 v117; // rbp
  int v118; // eax
  __int64 v119; // r13
  __int64 v120; // r14
  __int64 v121; // r12
  __int64 v122; // rsi
  __int64 v123; // r14
  __int64 v124; // rbp
  int v125; // ebp
  __int64 v126; // r13
  __int64 v127; // r14
  __int64 v128; // r12
  __int64 v129; // rbp
  __int64 v130; // r14
  __int64 v131; // r13
  int v132; // r10d
  __int64 v133; // r14
  const char *v134; // rbx
  __int64 v135; // r12
  _QWORD *v136; // rsi
  __int64 *v137; // r14
  __int64 v138; // rbp
  const char *v139; // rdi
  int v140; // r9d
  _QWORD *v141; // r14
  char v142; // r12
  __int64 v143; // r15
  __int64 v144; // rsi
  __int64 v145; // r13
  __int64 v146; // r14
  __int64 v147; // rbp
  __int64 v148; // rdi
  unsigned int *v149; // r13
  char v150; // r12
  __int64 v151; // r15
  __int64 v152; // rsi
  __int64 v153; // r13
  __int64 v154; // r14
  __int64 v155; // rbp
  int v156; // esi
  __int64 v157; // r13
  __int64 v158; // r14
  __int64 v159; // r15
  __int64 v160; // r12
  __int64 v161; // r13
  char *v162; // rsi
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // r12
  __int64 *v166; // rsi
  __int64 v168; // rax
  __int64 v169; // r13
  _DWORD *v170; // rsi
  size_t v171; // rax
  size_t v172; // r13
  int v173; // r9d
  __int64 v174; // r13
  void *v175; // rsi
  size_t v176; // rax
  size_t v177; // rbp
  __int64 v178; // r13
  void *v179; // rsi
  __int64 v180; // r13
  __int64 v181; // rsi
  char *v182; // rsi
  char *v183; // rsi
  char *v184; // rsi
  char *v185; // rsi
  __int64 v186; // rax
  void *v187; // rdi
  __int64 v188; // rdx
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  void *v193; // rdi
  size_t v194; // r14
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  struct _Unwind_Exception *v219; // rbx
  __int64 v220; // [rsp+0h] [rbp-108h]
  __int64 v221; // [rsp+0h] [rbp-108h]
  char **v222; // [rsp+0h] [rbp-108h]
  const void **v223; // [rsp+10h] [rbp-F8h]
  __int64 v224; // [rsp+10h] [rbp-F8h]
  const char *srch; // [rsp+18h] [rbp-F0h]
  void *src; // [rsp+18h] [rbp-F0h]
  unsigned __int16 srca; // [rsp+18h] [rbp-F0h]
  char srcb; // [rsp+18h] [rbp-F0h]
  unsigned __int8 srcc; // [rsp+18h] [rbp-F0h]
  unsigned __int8 srcd; // [rsp+18h] [rbp-F0h]
  unsigned __int8 srce; // [rsp+18h] [rbp-F0h]
  unsigned __int16 srcf; // [rsp+18h] [rbp-F0h]
  _QWORD *srcg; // [rsp+18h] [rbp-F0h]
  void *srci; // [rsp+18h] [rbp-F0h]
  QT::QString *v235; // [rsp+20h] [rbp-E8h]
  __int64 v236; // [rsp+28h] [rbp-E0h]
  char *v237; // [rsp+28h] [rbp-E0h]
  __int64 v238; // [rsp+30h] [rbp-D8h]
  __int64 v239; // [rsp+38h] [rbp-D0h]
  __int64 *v240; // [rsp+40h] [rbp-C8h]
  __int64 *v242; // [rsp+58h] [rbp-B0h]
  int v243; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v244; // [rsp+68h] [rbp-A0h]
  __int64 v245; // [rsp+70h] [rbp-98h] BYREF
  __int128 v246; // [rsp+78h] [rbp-90h]
  void *v247[4]; // [rsp+90h] [rbp-78h] BYREF
  void *ptr; // [rsp+B0h] [rbp-58h] BYREF
  char *s[2]; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v250; // [rsp+C8h] [rbp-40h]

  v250 = __readfsqword(0x28u);
  sub_4BD080(a1, (_DWORD)a2, a3, a4, a5, a6);
  v243 = 0;
  jvalue_t_copy(&v243, a2, v9, v10);
  if ( v243 != 3 )
  {
    v219 = (struct _Unwind_Exception *)sub_264AA0(a7, (__int64)&v243, (__int64)a2, v11, v12);
    v7 = *v8;
    if ( *v8 )
    {
      v8[1] = 0;
      qfree(v7, a2);
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v247[0] && !_InterlockedSub((volatile signed __int32 *)v247[0], 1u) )
      free(v247[0]);
    operator delete(v8, 0x18u);
    sub_26A7D0(v242, (const char *)&off_18);
    jvalue_t_clear(&v243);
    _Unwind_Resume(v219);
  }
  ptr = nullptr;
  *(_OWORD *)s = 0;
  v13 = (_QWORD *)qword_8CB508;
  v240 = v244;
  if ( !qword_8CB508 )
  {
    v191 = operator new(0x18u);
    *(_QWORD *)v191 = 0;
    v13 = (_QWORD *)v191;
    qword_8CB508 = v191;
    *(_OWORD *)(v191 + 8) = 0;
  }
  p_ptr = (char *)&ptr;
  sub_201D30(v13, (__int64 *)&ptr);
  if ( !s[0] )
  {
    v15 = ptr;
    if ( !ptr )
      goto LABEL_6;
    goto LABEL_63;
  }
  v235 = (QT::QString *)operator new(0x18u);
  *(_QWORD *)v235 = 0;
  *(_OWORD *)((char *)v235 + 8) = 0;
  src = nullptr;
  v237 = s[0];
  if ( s[0] )
  {
    do
    {
      v30 = (__int64 *)((char *)ptr + 24 * (_QWORD)src);
      v31 = operator new(0x18u);
      *(_QWORD *)v31 = 0;
      v32 = (__int64 *)v31;
      *(_OWORD *)(v31 + 8) = 0;
      v221 = v30[1];
      if ( v221 )
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        while ( 1 )
        {
          if ( v34 < v35 + 1 )
          {
            v43 = qvector_reserve(v32, v33, v35 + 1, 16);
            *v32 = v43;
            v33 = v43;
            v35 = v32[1];
          }
          v37 = (_QWORD *)(v33 + 16 * v35);
          *v37 = 0;
          v37[1] = 0;
          ++v32[1];
          v38 = operator new(0x18u);
          v39 = *v30;
          v40 = (_QWORD *)v38;
          *(_QWORD *)v38 = 0;
          v41 = v39 + 24 * v36;
          *(_OWORD *)(v38 + 8) = 0;
          v42 = *(_QWORD *)(v41 + 8);
          if ( v42 )
          {
            v223 = (const void **)(v39 + 24 * v36);
            v44 = (void *)qalloc_or_throw(*(_QWORD *)(v41 + 8));
            *v40 = v44;
            v40[2] = v42;
            memcpy(v44, *v223, v42);
            v40[1] = v42;
          }
          if ( *(_DWORD *)v37 )
            jvalue_t_clear(v37);
          *(_DWORD *)v37 = 2;
          ++v36;
          v37[1] = v40;
          if ( v221 == v36 )
            break;
          v35 = v32[1];
          v34 = v32[2];
          v33 = *v32;
        }
      }
      v46 = *((_QWORD *)v235 + 1);
      v47 = *(_QWORD *)v235;
      if ( *((_QWORD *)v235 + 2) < (unsigned __int64)(v46 + 1) )
      {
        v168 = qvector_reserve(v235, v47, v46 + 1, 16);
        *(_QWORD *)v235 = v168;
        v47 = v168;
        v46 = *((_QWORD *)v235 + 1);
      }
      v48 = (_QWORD *)(v47 + 16 * v46);
      *v48 = 0;
      v48[1] = 0;
      ++*((_QWORD *)v235 + 1);
      if ( *(_DWORD *)v48 )
        jvalue_t_clear(v48);
      src = (char *)src + 1;
      *(_DWORD *)v48 = 4;
      v48[1] = v32;
    }
    while ( src != v237 );
  }
  v49 = 0;
  v50 = *v240;
  v51 = v240[1];
  v52 = *v240;
  if ( v51 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v52 + 8) )
      {
        p_ptr = "synced";
        if ( !strcmp(*(const char **)v52, "synced") )
          break;
      }
      ++v49;
      v52 += 40;
      if ( v51 == v49 )
        goto LABEL_246;
    }
  }
  else
  {
LABEL_246:
    if ( v240[2] < (unsigned __int64)(v51 + 1) )
    {
      v216 = qvector_reserve(v240, v50, v51 + 1, 40);
      *v240 = v216;
      v51 = v240[1];
      v50 = v216;
    }
    v52 = v50 + 40 * v51;
    *(_QWORD *)v52 = 0;
    *(_OWORD *)(v52 + 8) = 0;
    *(_DWORD *)(v52 + 24) = 0;
    *(_QWORD *)(v52 + 32) = 0;
    ++v240[1];
    p_ptr = *(char **)v52;
    if ( *(_QWORD *)(v52 + 16) <= 6u )
    {
      v215 = qvector_reserve(v50 + 40 * v51, p_ptr, 7, 1);
      *(_QWORD *)v52 = v215;
      p_ptr = (char *)v215;
    }
    *(_QWORD *)(v52 + 8) = 7;
    *(_DWORD *)p_ptr = 1668184435;
    *((_WORD *)p_ptr + 2) = 25701;
    *(_BYTE *)(*(_QWORD *)v52 + 6LL) = 0;
  }
  v53 = *(_DWORD *)(v52 + 24);
  v54 = v52 + 24;
  if ( v53 )
    jvalue_t_clear(v54);
  *(_DWORD *)v54 = 4;
  *(_QWORD *)(v54 + 8) = v235;
  v55 = (char *)ptr;
  v15 = ptr;
  if ( ptr )
  {
    v56 = s[0];
    if ( s[0] )
    {
      v57 = nullptr;
      do
      {
        v58 = &v55[24 * (_QWORD)v57];
        v59 = *(_QWORD *)v58;
        if ( *(_QWORD *)v58 )
        {
          v60 = *((_QWORD *)v58 + 1);
          if ( v60 )
          {
            for ( i = 0; i != v60; ++i )
            {
              v62 = (__int64 *)(v59 + 24 * i);
              v63 = *v62;
              if ( *v62 )
              {
                v62[1] = 0;
                qfree(v63, p_ptr);
                v59 = *(_QWORD *)v58;
              }
            }
          }
          *((_QWORD *)v58 + 1) = 0;
          qfree(v59, p_ptr);
          v55 = (char *)ptr;
        }
        ++v57;
        v15 = v55;
      }
      while ( v56 != v57 );
    }
LABEL_63:
    s[0] = nullptr;
    qfree(v15, p_ptr);
  }
LABEL_6:
  v245 = 0;
  v246 = 0;
  v16 = unk_8CAC18;
  if ( !unk_8CAC18 )
  {
    v192 = operator new(0x18u);
    *(_QWORD *)v192 = 0;
    v16 = v192;
    unk_8CAC18 = v192;
    *(_OWORD *)(v192 + 8) = 0;
  }
  v17 = (char *)&v245;
  sub_193BD0(v16, &v245);
  if ( (_QWORD)v246 )
  {
    v238 = qalloc_or_throw(24);
    *(_QWORD *)v238 = 0;
    *(_OWORD *)(v238 + 8) = 0;
    v236 = 0;
    v239 = v246;
    if ( (_QWORD)v246 )
    {
      while ( 1 )
      {
        v18 = (_QWORD *)(v245 + 48 * v236);
        v19 = operator new(0x18u);
        *(_QWORD *)v19 = 0;
        v20 = (__int64 *)v19;
        *(_OWORD *)(v19 + 8) = 0;
        v220 = v18[1];
        if ( v220 )
          break;
LABEL_64:
        v64 = &s1;
        if ( v18[4] )
          v64 = (const char *)v18[3];
        v65 = *(_QWORD *)(v238 + 8);
        v66 = *(_QWORD *)v238;
        if ( v65 )
        {
          v67 = *(_QWORD **)v238;
          v68 = 0;
          while ( 1 )
          {
            v69 = &s1;
            if ( v67[1] )
              v69 = (const char *)*v67;
            if ( !strcmp(v69, v64) )
              break;
            ++v68;
            v67 += 5;
            if ( v65 == v68 )
              goto LABEL_189;
          }
        }
        else
        {
LABEL_189:
          if ( *(_QWORD *)(v238 + 16) < (unsigned __int64)(v65 + 1) )
          {
            v186 = qvector_reserve(v238, v66, v65 + 1, 40);
            *(_QWORD *)v238 = v186;
            v65 = *(_QWORD *)(v238 + 8);
            v66 = v186;
          }
          v67 = (_QWORD *)(v66 + 40 * v65);
          *v67 = 0;
          *((_DWORD *)v67 + 6) = 0;
          v67[4] = 0;
          *(_OWORD *)(v67 + 1) = 0;
          ++*(_QWORD *)(v238 + 8);
          if ( v64 && (v176 = strlen(v64), (v177 = v176) != 0) )
          {
            v193 = (void *)*v67;
            v194 = v176 + 1;
            if ( v67[2] < v176 + 1 )
            {
              v213 = qvector_reserve(v67, *v67, v176 + 1, 1);
              *v67 = v213;
              v193 = (void *)v213;
            }
            v67[1] = v194;
            memmove(v193, v64, v177);
            *(_BYTE *)(*v67 + v177) = 0;
          }
          else
          {
            v67[1] = 0;
          }
        }
        v70 = *((_DWORD *)v67 + 6);
        v71 = v67 + 3;
        if ( v70 )
          jvalue_t_clear(v71);
        ++v236;
        *(_DWORD *)v71 = 4;
        v71[1] = v20;
        if ( v236 == v239 )
          goto LABEL_75;
      }
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        if ( v22 < v23 + 1 )
        {
          v45 = qvector_reserve(v20, v21, v23 + 1, 16);
          *v20 = v45;
          v21 = v45;
          v23 = v20[1];
        }
        v25 = (_QWORD *)(v21 + 16 * v23);
        *v25 = 0;
        v25[1] = 0;
        ++v20[1];
        v26 = operator new(0x18u);
        QT::QRegularExpression::pattern((QT::QRegularExpression *)v247);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v247);
        v27 = s[0];
        *(_QWORD *)v26 = 0;
        if ( v27 )
        {
          *(_OWORD *)(v26 + 8) = 0;
        }
        else
        {
          v27 = (const char *)&QT::QByteArray::_empty;
          *(_OWORD *)(v26 + 8) = 0;
          if ( !&QT::QByteArray::_empty )
            goto LABEL_19;
        }
        srch = v27;
        v28 = strlen(v27);
        v29 = (void *)qvector_reserve(v26, 0, v28 + 1, 1);
        *(_QWORD *)v26 = v29;
        *(_QWORD *)(v26 + 8) = v28 + 1;
        memmove(v29, srch, v28);
        *(_BYTE *)(*(_QWORD *)v26 + v28) = 0;
LABEL_19:
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v247[0] && !_InterlockedSub((volatile signed __int32 *)v247[0], 1u) )
          free(v247[0]);
        if ( *(_DWORD *)v25 )
          jvalue_t_clear(v25);
        ++v24;
        *(_DWORD *)v25 = 2;
        v25[1] = v26;
        if ( v24 == v220 )
          goto LABEL_64;
        v23 = v20[1];
        v22 = v20[2];
        v21 = *v20;
      }
    }
LABEL_75:
    v72 = 0;
    v73 = *v240;
    v74 = v240[1];
    v75 = *v240;
    if ( v74 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v75 + 8) )
        {
          v17 = "history_groups";
          if ( !strcmp(*(const char **)v75, "history_groups") )
            break;
        }
        ++v72;
        v75 += 40;
        if ( v74 == v72 )
          goto LABEL_241;
      }
    }
    else
    {
LABEL_241:
      if ( v240[2] < (unsigned __int64)(v74 + 1) )
      {
        v214 = qvector_reserve(v240, v73, v74 + 1, 40);
        *v240 = v214;
        v74 = v240[1];
        v73 = v214;
      }
      v75 = v73 + 40 * v74;
      *(_QWORD *)v75 = 0;
      *(_OWORD *)(v75 + 8) = 0;
      *(_DWORD *)(v75 + 24) = 0;
      *(_QWORD *)(v75 + 32) = 0;
      ++v240[1];
      v17 = *(char **)v75;
      if ( *(_QWORD *)(v75 + 16) <= 0xEu )
      {
        v217 = qvector_reserve(v73 + 40 * v74, v17, 15, 1);
        *(_QWORD *)v75 = v217;
        v17 = (char *)v217;
      }
      *(_QWORD *)(v75 + 8) = 15;
      qmemcpy(v17, "history_groups", 14);
      *(_BYTE *)(*(_QWORD *)v75 + 14LL) = 0;
    }
    v76 = *(_DWORD *)(v75 + 24);
    v77 = v75 + 24;
    if ( v76 )
      jvalue_t_clear(v77);
    *(_DWORD *)v77 = 3;
    v78 = v245;
    *(_QWORD *)(v77 + 8) = v238;
    if ( !v78 )
      goto LABEL_94;
    v79 = v246;
    if ( (_QWORD)v246 )
    {
      v80 = 0;
      do
      {
        v81 = (__int64 *)(v78 + 48 * v80);
        v82 = v81[3];
        if ( v82 )
        {
          v81[4] = 0;
          qfree(v82, v17);
        }
        v83 = *v81;
        if ( *v81 )
        {
          v84 = v81[1];
          if ( v84 )
          {
            for ( j = 0; j != v84; ++j )
            {
              v86 = (QT::QRegularExpression *)(v83 + 8 * j);
              QT::QRegularExpression::~QRegularExpression(v86);
              v83 = *v81;
            }
          }
          v81[1] = 0;
          qfree(v83, v17);
        }
        ++v80;
        v78 = v245;
      }
      while ( v79 != v80 );
    }
  }
  else
  {
    v78 = v245;
    if ( !v245 )
      goto LABEL_94;
  }
  *(_QWORD *)&v246 = 0;
  qfree(v78, v17);
LABEL_94:
  v224 = qalloc_or_throw(24);
  *(_QWORD *)v224 = 0;
  *(_OWORD *)(v224 + 8) = 0;
  v222 = (char **)&unk_8603E0;
  do
  {
    view_options = get_view_options(*(unsigned __int8 *)v222);
    v88 = qalloc_or_throw(24);
    *(_QWORD *)v88 = 0;
    *(_OWORD *)(v88 + 8) = 0;
    v89 = (__int64 *)v88;
    v90 = *(unsigned __int8 *)(view_options + 8);
    v91 = qvector_reserve(v88, 0, 1, 40);
    v92 = v89[1];
    si128 = 0;
    *v89 = v91;
    v94 = v91 + 40 * v92;
    *(_QWORD *)v94 = 0;
    *(_OWORD *)(v94 + 8) = 0;
    *(_DWORD *)(v94 + 24) = 0;
    *(_QWORD *)(v94 + 32) = 0;
    ++v89[1];
    v95 = *(_QWORD *)v94;
    if ( *(_QWORD *)(v94 + 16) <= 6u )
    {
      v204 = qvector_reserve(v94, v95, 7, 1);
      *(_QWORD *)v94 = v204;
      v95 = v204;
    }
    *(_QWORD *)(v94 + 8) = 7;
    *(_DWORD *)v95 = 1701080681;
    *(_WORD *)(v95 + 4) = 29806;
    *(_BYTE *)(*(_QWORD *)v94 + 6LL) = 0;
    if ( *(_DWORD *)(v94 + 24) )
      jvalue_t_clear(v94 + 24);
    *(_DWORD *)(v94 + 24) = 1;
    *(_QWORD *)(v94 + 32) = v90;
    v96 = v89[1];
    v97 = *v89;
    srca = *(_WORD *)(view_options + 12);
    if ( v96 )
    {
      v98 = *v89;
      v99 = 0;
      while ( !*(_QWORD *)(v98 + 8) || strcmp(*(const char **)v98, "opcode_bytes") )
      {
        ++v99;
        v98 += 40;
        if ( v96 == v99 )
          goto LABEL_225;
      }
    }
    else
    {
LABEL_225:
      if ( v89[2] < (unsigned __int64)(v96 + 1) )
      {
        v197 = qvector_reserve(v89, v97, v96 + 1, 40);
        *v89 = v197;
        v96 = v89[1];
        v97 = v197;
      }
      si128 = 0;
      v98 = v97 + 40 * v96;
      *(_QWORD *)v98 = 0;
      *(_OWORD *)(v98 + 8) = 0;
      *(_DWORD *)(v98 + 24) = 0;
      *(_QWORD *)(v98 + 32) = 0;
      ++v89[1];
      v185 = *(char **)v98;
      if ( *(_QWORD *)(v98 + 16) <= 0xCu )
      {
        v196 = qvector_reserve(v97 + 40 * v96, v185, 13, 1);
        *(_QWORD *)v98 = v196;
        v185 = (char *)v196;
      }
      *(_QWORD *)(v98 + 8) = 13;
      qmemcpy(v185, "opcode_bytes", 12);
      *(_BYTE *)(*(_QWORD *)v98 + 12LL) = 0;
    }
    v100 = *(_DWORD *)(v98 + 24);
    v101 = v98 + 24;
    if ( v100 )
      jvalue_t_clear(v101);
    *(_DWORD *)v101 = 1;
    *(_QWORD *)(v101 + 8) = srca;
    v102 = v89[1];
    v103 = *v89;
    srcb = *(_BYTE *)(view_options + 6);
    if ( v102 )
    {
      v104 = *v89;
      v105 = 0;
      while ( !*(_QWORD *)(v104 + 8) || strcmp(*(const char **)v104, "show_line_prefix") )
      {
        ++v105;
        v104 += 40;
        if ( v102 == v105 )
          goto LABEL_210;
      }
    }
    else
    {
LABEL_210:
      if ( v89[2] < (unsigned __int64)(v102 + 1) )
      {
        v203 = qvector_reserve(v89, v103, v102 + 1, 40);
        *v89 = v203;
        v102 = v89[1];
        v103 = v203;
      }
      v104 = v103 + 40 * v102;
      *(_QWORD *)v104 = 0;
      *(_OWORD *)(v104 + 8) = 0;
      *(_DWORD *)(v104 + 24) = 0;
      *(_QWORD *)(v104 + 32) = 0;
      ++v89[1];
      v182 = *(char **)v104;
      if ( *(_QWORD *)(v104 + 16) <= 0x10u )
      {
        v202 = qvector_reserve(v103 + 40 * v102, v182, 17, 1);
        *(_QWORD *)v104 = v202;
        v182 = (char *)v202;
      }
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCC30);
      *(_QWORD *)(v104 + 8) = 17;
      *(__m128 *)v182 = si128;
      *(_BYTE *)(*(_QWORD *)v104 + 16LL) = 0;
    }
    v106 = *(_DWORD *)(v104 + 24);
    v107 = v104 + 24;
    if ( v106 )
      jvalue_t_clear(v107);
    *(_DWORD *)v107 = 5;
    *(_BYTE *)(v107 + 8) = srcb;
    v108 = v89[1];
    v109 = *v89;
    srcc = *(_BYTE *)(view_options + 9);
    if ( v108 )
    {
      v110 = *v89;
      v111 = 0;
      while ( !*(_QWORD *)(v110 + 8) || strcmp(*(const char **)v110, "limiter") )
      {
        ++v111;
        v110 += 40;
        if ( v108 == v111 )
          goto LABEL_220;
      }
    }
    else
    {
LABEL_220:
      if ( v89[2] < (unsigned __int64)(v108 + 1) )
      {
        v199 = qvector_reserve(v89, v109, v108 + 1, 40);
        *v89 = v199;
        v108 = v89[1];
        v109 = v199;
      }
      si128 = 0;
      v110 = v109 + 40 * v108;
      *(_QWORD *)v110 = 0;
      *(_OWORD *)(v110 + 8) = 0;
      *(_DWORD *)(v110 + 24) = 0;
      *(_QWORD *)(v110 + 32) = 0;
      ++v89[1];
      v184 = *(char **)v110;
      if ( *(_QWORD *)(v110 + 16) <= 7u )
      {
        v198 = qvector_reserve(v109 + 40 * v108, v184, 8, 1);
        *(_QWORD *)v110 = v198;
        v184 = (char *)v198;
      }
      *(_QWORD *)(v110 + 8) = 8;
      *(_DWORD *)v184 = 1768778092;
      *(_DWORD *)(v184 + 3) = 1919251561;
      *(_BYTE *)(*(_QWORD *)v110 + 7LL) = 0;
    }
    v112 = *(_DWORD *)(v110 + 24);
    v113 = v110 + 24;
    if ( v112 )
      jvalue_t_clear(v113);
    *(_DWORD *)v113 = 1;
    *(_QWORD *)(v113 + 8) = srcc;
    v114 = v89[1];
    v115 = *v89;
    srcd = *(_BYTE *)(view_options + 5);
    if ( v114 )
    {
      v116 = *v89;
      v117 = 0;
      while ( !*(_QWORD *)(v116 + 8) || strcmp(*(const char **)v116, "xrefnum") )
      {
        ++v117;
        v116 += 40;
        if ( v114 == v117 )
          goto LABEL_170;
      }
      v118 = *(_DWORD *)(v116 + 24);
      v119 = v116 + 24;
      v120 = srcd;
      if ( v118 )
LABEL_175:
        jvalue_t_clear(v119);
    }
    else
    {
LABEL_170:
      if ( v89[2] < (unsigned __int64)(v114 + 1) )
      {
        v207 = qvector_reserve(v89, v115, v114 + 1, 40);
        *v89 = v207;
        v114 = v89[1];
        v115 = v207;
      }
      si128 = 0;
      v169 = v115 + 40 * v114;
      *(_QWORD *)v169 = 0;
      *(_OWORD *)(v169 + 8) = 0;
      *(_DWORD *)(v169 + 24) = 0;
      *(_QWORD *)(v169 + 32) = 0;
      ++v89[1];
      v170 = *(_DWORD **)v169;
      if ( *(_QWORD *)(v169 + 16) <= 7u )
      {
        v206 = qvector_reserve(v169, v170, 8, 1);
        *(_QWORD *)v169 = v206;
        v170 = (_DWORD *)v206;
      }
      *(_QWORD *)(v169 + 8) = 8;
      v119 = v169 + 24;
      v120 = srcd;
      *v170 = 1717924472;
      *(_DWORD *)((char *)v170 + 3) = 1836412518;
      *(_BYTE *)(*(_QWORD *)(v119 - 24) + 7LL) = 0;
      if ( *(_DWORD *)v119 )
        goto LABEL_175;
    }
    *(_DWORD *)v119 = 1;
    *(_QWORD *)(v119 + 8) = v120;
    v121 = v89[1];
    v122 = *v89;
    srce = *(_BYTE *)(view_options + 7);
    if ( v121 )
    {
      v123 = *v89;
      v124 = 0;
      while ( !*(_QWORD *)(v123 + 8) || strcmp(*(const char **)v123, "cmt_indent") )
      {
        ++v124;
        v123 += 40;
        if ( v121 == v124 )
          goto LABEL_183;
      }
      v125 = *(_DWORD *)(v123 + 24);
      v126 = v123 + 24;
      v127 = srce;
      if ( v125 )
LABEL_188:
        jvalue_t_clear(v126);
    }
    else
    {
LABEL_183:
      if ( v89[2] < (unsigned __int64)(v121 + 1) )
      {
        v208 = qvector_reserve(v89, v122, v121 + 1, 40);
        *v89 = v208;
        v121 = v89[1];
        v122 = v208;
      }
      si128 = 0;
      v174 = v122 + 40 * v121;
      *(_QWORD *)v174 = 0;
      *(_OWORD *)(v174 + 8) = 0;
      *(_DWORD *)(v174 + 24) = 0;
      *(_QWORD *)(v174 + 32) = 0;
      ++v89[1];
      v175 = *(void **)v174;
      if ( *(_QWORD *)(v174 + 16) <= 0xAu )
      {
        v195 = qvector_reserve(v174, v175, 11, 1);
        *(_QWORD *)v174 = v195;
        v175 = (void *)v195;
      }
      *(_QWORD *)(v174 + 8) = 11;
      v126 = v174 + 24;
      qmemcpy(v175, "cmt_indent", 10);
      v127 = srce;
      *(_BYTE *)(*(_QWORD *)(v126 - 24) + 10LL) = 0;
      if ( *(_DWORD *)v126 )
        goto LABEL_188;
    }
    *(_DWORD *)v126 = 1;
    *(_QWORD *)(v126 + 8) = v127;
    v128 = v89[1];
    v129 = *v89;
    srcf = *(_WORD *)(view_options + 10);
    if ( v128 )
    {
      v130 = *v89;
      v131 = 0;
      while ( !*(_QWORD *)(v130 + 8) || strcmp(*(const char **)v130, "margin") )
      {
        ++v131;
        v130 += 40;
        if ( v128 == v131 )
          goto LABEL_215;
      }
    }
    else
    {
LABEL_215:
      if ( v89[2] < (unsigned __int64)(v128 + 1) )
      {
        v201 = qvector_reserve(v89, v129, v128 + 1, 40);
        *v89 = v201;
        v128 = v89[1];
        v129 = v201;
      }
      si128 = 0;
      v130 = v129 + 40 * v128;
      *(_QWORD *)v130 = 0;
      *(_OWORD *)(v130 + 8) = 0;
      *(_DWORD *)(v130 + 24) = 0;
      *(_QWORD *)(v130 + 32) = 0;
      ++v89[1];
      v183 = *(char **)v130;
      if ( *(_QWORD *)(v130 + 16) <= 6u )
      {
        v200 = qvector_reserve(v129 + 40 * v128, v183, 7, 1);
        *(_QWORD *)v130 = v200;
        v183 = (char *)v200;
      }
      *(_QWORD *)(v130 + 8) = 7;
      *(_DWORD *)v183 = 1735549293;
      *((_WORD *)v183 + 2) = 28265;
      *(_BYTE *)(*(_QWORD *)v130 + 6LL) = 0;
    }
    v132 = *(_DWORD *)(v130 + 24);
    v133 = v130 + 24;
    if ( v132 )
      jvalue_t_clear(v133);
    *(_DWORD *)v133 = 1;
    *(_QWORD *)(v133 + 8) = srcf;
    v134 = v222[1];
    v135 = *(_QWORD *)(v224 + 8);
    v136 = *(_QWORD **)v224;
    if ( v135 )
    {
      srcg = *(_QWORD **)v224;
      v137 = *(__int64 **)v224;
      v138 = 0;
      while ( 1 )
      {
        v139 = &s1;
        if ( v137[1] )
          v139 = (const char *)*v137;
        if ( !strcmp(v139, v134) )
          break;
        ++v138;
        v137 += 5;
        if ( v135 == v138 )
        {
          v136 = srcg;
          goto LABEL_177;
        }
      }
    }
    else
    {
LABEL_177:
      if ( *(_QWORD *)(v224 + 16) < (unsigned __int64)(v135 + 1) )
      {
        v205 = qvector_reserve(v224, v136, v135 + 1, 40);
        *(_QWORD *)v224 = v205;
        v135 = *(_QWORD *)(v224 + 8);
        v136 = (_QWORD *)v205;
      }
      si128 = 0;
      v137 = &v136[5 * v135];
      *v137 = 0;
      *((_DWORD *)v137 + 6) = 0;
      v137[4] = 0;
      *(_OWORD *)(v137 + 1) = 0;
      ++*(_QWORD *)(v224 + 8);
      if ( !v134 || (v171 = strlen(v134), (v172 = v171) == 0) )
      {
        v137[1] = 0;
        v173 = *((_DWORD *)v137 + 6);
        v141 = v137 + 3;
        if ( !v173 )
          goto LABEL_146;
        goto LABEL_182;
      }
      v187 = (void *)*v137;
      v188 = v171 + 1;
      if ( v137[2] < v171 + 1 )
      {
        srci = (void *)(v171 + 1);
        v218 = qvector_reserve(v137, *v137, v188, 1);
        *v137 = v218;
        v188 = (__int64)srci;
        v187 = (void *)v218;
      }
      v137[1] = v188;
      memmove(v187, v134, v172);
      *(_BYTE *)(*v137 + v172) = 0;
    }
    v140 = *((_DWORD *)v137 + 6);
    v141 = v137 + 3;
    if ( !v140 )
      goto LABEL_146;
LABEL_182:
    jvalue_t_clear(v141);
LABEL_146:
    v222 += 2;
    *(_DWORD *)v141 = 3;
    v141[1] = v89;
  }
  while ( off_860400 != v222 );
  v142 = getinf_flag(48, 4);
  v143 = *(_QWORD *)(v224 + 8);
  v144 = *(_QWORD *)v224;
  if ( v143 )
  {
    v145 = *(_QWORD *)v224;
    v146 = 0;
    v147 = *(_QWORD *)v224;
    while ( !*(_QWORD *)(v145 + 8) || strcmp(*(const char **)v145, "show_stack") )
    {
      ++v146;
      v145 += 40;
      if ( v143 == v146 )
      {
        v144 = v147;
        goto LABEL_197;
      }
    }
    v148 = *(unsigned int *)(v145 + 24);
    v149 = (unsigned int *)(v145 + 24);
    if ( (_DWORD)v148 )
      goto LABEL_202;
  }
  else
  {
LABEL_197:
    if ( *(_QWORD *)(v224 + 16) < (unsigned __int64)(v143 + 1) )
    {
      v190 = qvector_reserve(v224, v144, v143 + 1, 40);
      *(_QWORD *)v224 = v190;
      v143 = *(_QWORD *)(v224 + 8);
      v144 = v190;
    }
    si128 = 0;
    v178 = v144 + 40 * v143;
    *(_QWORD *)v178 = 0;
    *(_OWORD *)(v178 + 8) = 0;
    *(_DWORD *)(v178 + 24) = 0;
    *(_QWORD *)(v178 + 32) = 0;
    ++*(_QWORD *)(v224 + 8);
    v179 = *(void **)v178;
    if ( *(_QWORD *)(v178 + 16) <= 0xAu )
    {
      v209 = qvector_reserve(v178, v179, 11, 1);
      *(_QWORD *)v178 = v209;
      v179 = (void *)v209;
    }
    *(_QWORD *)(v178 + 8) = 11;
    v149 = (unsigned int *)(v178 + 24);
    qmemcpy(v179, "show_stack", 10);
    *(_BYTE *)(*((_QWORD *)v149 - 3) + 10LL) = 0;
    v148 = *v149;
    if ( (_DWORD)v148 )
    {
LABEL_202:
      v148 = (__int64)v149;
      jvalue_t_clear(v149);
    }
  }
  *((_BYTE *)v149 + 8) = v142;
  *v149 = 5;
  v150 = byte_8BA8DC;
  v151 = *(_QWORD *)(v224 + 8);
  v152 = *(_QWORD *)v224;
  if ( v151 )
  {
    v153 = *(_QWORD *)v224;
    v154 = 0;
    v155 = *(_QWORD *)v224;
    while ( 1 )
    {
      if ( *(_QWORD *)(v153 + 8) )
      {
        v148 = *(_QWORD *)v153;
        if ( !strcmp(*(const char **)v153, "show_graph_overview") )
          break;
      }
      ++v154;
      v153 += 40;
      if ( v151 == v154 )
      {
        v152 = v155;
        goto LABEL_204;
      }
    }
    v156 = *(_DWORD *)(v153 + 24);
    v157 = v153 + 24;
    if ( v156 )
      goto LABEL_209;
  }
  else
  {
LABEL_204:
    if ( *(_QWORD *)(v224 + 16) < (unsigned __int64)(v151 + 1) )
    {
      v148 = v224;
      v189 = qvector_reserve(v224, v152, v151 + 1, 40);
      *(_QWORD *)v224 = v189;
      v151 = *(_QWORD *)(v224 + 8);
      v152 = v189;
    }
    v180 = v152 + 40 * v151;
    *(_QWORD *)v180 = 0;
    *(_OWORD *)(v180 + 8) = 0;
    *(_DWORD *)(v180 + 24) = 0;
    *(_QWORD *)(v180 + 32) = 0;
    ++*(_QWORD *)(v224 + 8);
    v181 = *(_QWORD *)v180;
    if ( *(_QWORD *)(v180 + 16) <= 0x13u )
    {
      v148 = v180;
      v210 = qvector_reserve(v180, v181, 20, 1);
      *(_QWORD *)v180 = v210;
      v181 = v210;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCC40);
    *(_QWORD *)(v180 + 8) = 20;
    v157 = v180 + 24;
    *(__m128 *)v181 = si128;
    *(_DWORD *)(v181 + 15) = 2003134838;
    *(_BYTE *)(*(_QWORD *)(v157 - 24) + 19LL) = 0;
    if ( *(_DWORD *)v157 )
    {
LABEL_209:
      v148 = v157;
      jvalue_t_clear(v157);
    }
  }
  *(_DWORD *)v157 = 5;
  *(_BYTE *)(v157 + 8) = v150;
  v158 = v240[1];
  v159 = *v240;
  if ( v158 )
  {
    v160 = *v240;
    v161 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v160 + 8) )
      {
        v148 = *(_QWORD *)v160;
        v162 = "inf";
        if ( !strcmp(*(const char **)v160, "inf") )
          break;
      }
      ++v161;
      v160 += 40;
      if ( v158 == v161 )
        goto LABEL_233;
    }
  }
  else
  {
LABEL_233:
    if ( v240[2] < (unsigned __int64)(v158 + 1) )
    {
      v148 = (__int64)v240;
      v212 = qvector_reserve(v240, v159, v158 + 1, 40);
      *v240 = v212;
      v158 = v240[1];
      v159 = v212;
    }
    si128 = 0;
    v160 = v159 + 40 * v158;
    *(_QWORD *)v160 = 0;
    *(_OWORD *)(v160 + 8) = 0;
    *(_DWORD *)(v160 + 24) = 0;
    *(_QWORD *)(v160 + 32) = 0;
    ++v240[1];
    v162 = *(char **)v160;
    if ( *(_QWORD *)(v160 + 16) <= 3u )
    {
      v148 = v159 + 40 * v158;
      v211 = qvector_reserve(v148, v162, 4, 1);
      *(_QWORD *)v160 = v211;
      v162 = (char *)v211;
    }
    *(_QWORD *)(v160 + 8) = 4;
    v163 = 28265;
    *(_WORD *)v162 = 28265;
    v162[2] = 102;
    *(_BYTE *)(*(_QWORD *)v160 + 3LL) = 0;
  }
  v164 = *(unsigned int *)(v160 + 24);
  v165 = v160 + 24;
  if ( (_DWORD)v164 )
  {
    v148 = v165;
    jvalue_t_clear(v165);
  }
  *(_DWORD *)v165 = 3;
  *(_QWORD *)(v165 + 8) = v224;
  if ( dword_8CC5F0 )
  {
    v162 = (char *)&v243;
    v148 = (__int64)&ptr;
    LOBYTE(ptr) = 1;
    sub_265C00((char *)&ptr, &v243, si128);
  }
  LOBYTE(s[1]) = 0;
  ptr = nullptr;
  s[0] = nullptr;
  if ( v243 != 3 )
    sub_264AC0(*(double *)si128.m128_u64, v148, (__int64)v162, v164, v163);
  v166 = v244;
  v243 = 0;
  v244 = nullptr;
  sub_4B74C0(&ptr, v166);
  sub_4B7F50(a2, &ptr);
  jvalue_t_clear(&ptr);
  jvalue_t_clear(&v243);
  return v250 - __readfsqword(0x28u);
}
