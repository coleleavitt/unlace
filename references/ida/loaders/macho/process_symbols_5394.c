__int64 __fastcall sub_42E00(__int64 a1, __int64 a2, _QWORD *a3, char a4, char a5)
{
  int v5; // ebx
  const char *p_src; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD *v13; // r13
  const char *v14; // rax
  char *v15; // r12
  _BOOL8 v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  const char *v19; // rcx
  const char *v20; // rax
  char *v21; // rbx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  _QWORD *v26; // rdi
  __int64 v27; // rax
  const __m128i *v28; // r15
  char *v29; // r12
  size_t v30; // rax
  char *v31; // r8
  size_t v32; // r14
  __int8 v33; // al
  unsigned __int8 v34; // al
  size_t v35; // r14
  char *v36; // rax
  __int64 v37; // r12
  const char *v38; // r14
  __int64 v39; // rax
  __m128i v40; // xmm0
  char *v41; // rax
  const char *v42; // rbx
  char *v43; // rsi
  const char *v44; // r15
  const char *v45; // rdi
  int v46; // eax
  const char *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // rdi
  __int64 v51; // r15
  char *v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  char *v55; // rdx
  __int64 v56; // rdi
  void *v57; // rdi
  size_t v58; // rdx
  unsigned __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  __int64 v63; // r12
  __int64 *v64; // r12
  int v65; // r14d
  __int64 v66; // rax
  const char *v67; // rdi
  unsigned __int64 v68; // rcx
  void *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rax
  char *v72; // rax
  char *v73; // rbx
  const char *v74; // r14
  const char *v75; // rax
  __int64 v76; // rdi
  const char *v77; // r15
  char *v78; // rbx
  const char *v79; // rdx
  char *v80; // r14
  size_t v81; // r15
  void *v82; // rax
  char v83; // al
  unsigned __int8 v84; // dl
  size_t v85; // rax
  __int64 v86; // rdx
  char *v87; // r8
  char *v88; // rcx
  bool v89; // al
  __int16 v90; // si
  __int64 v91; // rsi
  __int64 v92; // r14
  const char *v93; // rsi
  int v94; // esi
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  int v98; // r9d
  __int64 v99; // r12
  __int64 v100; // rax
  const char *v101; // rdx
  __int64 v102; // rsi
  int v103; // ebx
  __int64 v104; // rsi
  __int64 v105; // r14
  __int64 v106; // rdx
  __int64 v107; // rcx
  const char *v108; // rdx
  __int64 v109; // r12
  __int64 v110; // rbx
  const char *v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // r12
  __int64 v115; // rbx
  __int64 *v116; // rax
  __int64 v117; // rdi
  const char *v119; // rsi
  char *v120; // rax
  unsigned int v121; // eax
  __int64 v122; // rax
  void *v123; // rdi
  char *v124; // rdx
  __int64 v125; // rax
  void *v126; // rsi
  const char *v127; // rbx
  int v128; // r12d
  __int64 v129; // r15
  const char *v130; // rsi
  __int64 v131; // rsi
  __int64 v132; // [rsp-8h] [rbp-298h]
  int v133; // [rsp+0h] [rbp-290h]
  int v134; // [rsp+1Ch] [rbp-274h]
  int v135; // [rsp+20h] [rbp-270h]
  __int64 v138; // [rsp+30h] [rbp-260h] BYREF
  char *v139; // [rsp+38h] [rbp-258h]
  char *v140; // [rsp+40h] [rbp-250h]
  __int64 v141; // [rsp+48h] [rbp-248h]
  _QWORD *v142; // [rsp+50h] [rbp-240h]
  __int64 v143; // [rsp+58h] [rbp-238h]
  const char *v144; // [rsp+60h] [rbp-230h]
  __int64 v145; // [rsp+68h] [rbp-228h]
  char *s2; // [rsp+70h] [rbp-220h]
  unsigned __int8 (__fastcall **v147)(__int64); // [rsp+78h] [rbp-218h]
  const char *v148; // [rsp+80h] [rbp-210h]
  char *v149; // [rsp+88h] [rbp-208h]
  __int64 v150; // [rsp+90h] [rbp-200h] BYREF
  __int64 v151; // [rsp+98h] [rbp-1F8h] BYREF
  __int64 v152; // [rsp+A0h] [rbp-1F0h] BYREF
  __int128 v153; // [rsp+A8h] [rbp-1E8h]
  const char *v154; // [rsp+C0h] [rbp-1D0h] BYREF
  __int128 v155; // [rsp+C8h] [rbp-1C8h]
  void *dest; // [rsp+E0h] [rbp-1B0h] BYREF
  __int128 v157; // [rsp+E8h] [rbp-1A8h]
  bool v158; // [rsp+F8h] [rbp-198h]
  unsigned __int8 v159; // [rsp+F9h] [rbp-197h]
  void *src; // [rsp+100h] [rbp-190h] BYREF
  __m128i n[2]; // [rsp+108h] [rbp-188h] BYREF
  char v162[8]; // [rsp+130h] [rbp-160h] BYREF
  int v163; // [rsp+138h] [rbp-158h] BYREF
  __int64 v164; // [rsp+140h] [rbp-150h]
  int *v165; // [rsp+148h] [rbp-148h]
  int *v166; // [rsp+150h] [rbp-140h]
  __int64 v167; // [rsp+158h] [rbp-138h]
  char v168[8]; // [rsp+160h] [rbp-130h] BYREF
  int v169; // [rsp+168h] [rbp-128h] BYREF
  const char *v170; // [rsp+170h] [rbp-120h]
  const char *v171; // [rsp+178h] [rbp-118h]
  int *v172; // [rsp+180h] [rbp-110h]
  __int64 v173; // [rsp+188h] [rbp-108h]
  _OWORD v174[2]; // [rsp+190h] [rbp-100h] BYREF
  __int64 v175; // [rsp+1B0h] [rbp-E0h]
  __int64 v176; // [rsp+1B8h] [rbp-D8h]
  __int64 selector; // [rsp+1C0h] [rbp-D0h]
  __int128 v178; // [rsp+1C8h] [rbp-C8h]
  __int128 v179; // [rsp+1D8h] [rbp-B8h]
  __int128 v180; // [rsp+1E8h] [rbp-A8h]
  __int128 v181; // [rsp+1F8h] [rbp-98h]
  __int128 v182; // [rsp+208h] [rbp-88h]
  __int128 v183; // [rsp+218h] [rbp-78h]
  __int128 v184; // [rsp+228h] [rbp-68h]
  __int128 v185; // [rsp+238h] [rbp-58h]
  unsigned __int64 v186; // [rsp+248h] [rbp-48h]
  unsigned __int64 v187; // [rsp+258h] [rbp-38h]

  v143 = a1;
  v141 = a2;
  v142 = a3;
  v187 = __readfsqword(0x28u);
  v134 = 4;
  if ( *(_BYTE *)(a1 + 13692) )
    v134 = 8;
  v165 = &v163;
  v166 = &v163;
  v163 = 0;
  v164 = 0;
  v167 = 0;
  v150 = -1;
  netnode_check(&v150, 0, 0, 1);
  v152 = 0;
  v153 = 0;
  v149 = *(char **)(v141 + 312);
  v5 = (_DWORD)v149 + 1;
  if ( (int)v149 + 1 < 256 )
    v5 = 256;
  p_src = 0;
  v152 = qvector_reserve(&v152, 0, v5, 24);
  if ( (unsigned __int64)v153 < v5 )
  {
    v7 = v153 + 1;
    v8 = 24 * v153;
    v9 = 24 * v153 + v152;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    if ( v7 < v5 )
    {
      v10 = v8 + 24;
      do
      {
        ++v7;
        v11 = v10 + v152;
        v10 += 24;
        *(_QWORD *)v11 = 0;
        *(_OWORD *)(v11 + 8) = 0;
      }
      while ( v5 != v7 );
    }
  }
  *(_QWORD *)&v153 = v5;
  v144 = (const char *)&v169;
  v171 = (const char *)&v169;
  v172 = &v169;
  v154 = 0;
  v12 = v142[1] == 0;
  v169 = 0;
  v170 = 0;
  v173 = 0;
  v155 = 0;
  if ( v12 )
  {
    v135 = 0;
    goto LABEL_133;
  }
  v149 = 0;
  v145 = 0;
  v135 = 0;
  while ( 2 )
  {
    v13 = (_QWORD *)(*v142 + 40 * v145);
    v14 = (const char *)v13[1];
    v15 = &v149[(_QWORD)v14];
    v148 = v14;
    v16 = __CFADD__(v14, v149);
    if ( v15 == v149 )
      goto LABEL_23;
    src = 0;
    n[0] = 0;
    if ( v16 )
    {
      v73 = v15;
      v74 = v149;
      do
      {
        v75 = &v154[24 * (_QWORD)v73];
        v76 = *(_QWORD *)v75;
        if ( *(_QWORD *)v75 )
        {
          *((_QWORD *)v75 + 1) = 0;
          qfree(v76, p_src);
        }
        ++v73;
        v20 = v74;
      }
      while ( v73 < v74 );
      goto LABEL_21;
    }
    p_src = v154;
    if ( &src < (void **)v154 || &src >= (void **)&v154[24 * *((_QWORD *)&v155 + 1)] )
    {
      v78 = v149;
      if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)v15 )
      {
        v154 = (const char *)qvector_reserve(&v154, v154, v15, 24);
        v78 = (char *)v155;
      }
      while ( v78 < v15 )
      {
        v79 = v154;
        v80 = (char *)&v154[24 * (_QWORD)v78];
        *(_QWORD *)v80 = 0;
        *(_OWORD *)(v80 + 8) = 0;
        v81 = n[0].m128i_i64[0];
        if ( n[0].m128i_i64[0] )
        {
          v82 = (void *)qalloc_or_throw(n[0].m128i_i64[0], p_src, v79);
          *(_QWORD *)v80 = v82;
          *((_QWORD *)v80 + 2) = v81;
          p_src = (const char *)src;
          memcpy(v82, src, v81);
          *((_QWORD *)v80 + 1) = v81;
        }
        ++v78;
      }
      goto LABEL_22;
    }
    v17 = v149;
    if ( *((_QWORD *)&v155 + 1) < (unsigned __int64)v15 )
    {
      v154 = (const char *)qvector_reserve(&v154, v154, v15, 24);
      v17 = (char *)v155;
    }
    if ( v17 < v15 )
    {
      p_src = v149;
      v18 = 24LL * (_QWORD)v17;
      do
      {
        ++v17;
        v19 = &v154[v18];
        v18 += 24;
        *(_QWORD *)v19 = 0;
        *(_OWORD *)(v19 + 8) = 0;
      }
      while ( v15 != v17 );
      v20 = p_src;
LABEL_21:
      v149 = (char *)v20;
    }
LABEL_22:
    *(_QWORD *)&v155 = v15;
LABEL_23:
    if ( !v148 )
      goto LABEL_67;
    v21 = 0;
    v149 = (char *)(24LL * (_QWORD)v149);
    v147 = (unsigned __int8 (__fastcall **)(__int64))&callui;
    do
    {
      if ( (*v147)(27) )
        sub_1A260((unsigned int)"Cancelled by user", (_DWORD)p_src, v22, v23, v24, v25);
      v26 = (_QWORD *)v13[3];
      if ( !v26 )
        goto LABEL_66;
      v27 = v26[2];
      if ( !v27 )
        goto LABEL_66;
      v28 = (const __m128i *)(*v13 + 16LL * (_QWORD)v21);
      p_src = (const char *)v28->m128i_u32[0];
      if ( (unsigned __int64)p_src >= v27 - 1 )
        goto LABEL_66;
      v29 = (char *)(*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      if ( !v29 || *v28 == 0 )
        goto LABEL_66;
      s2 = &v149[(_QWORD)v154];
      v30 = strlen(v29);
      v31 = s2;
      v32 = v30;
      if ( v30 )
      {
        v57 = *(void **)s2;
        v58 = v30 + 1;
        if ( *((_QWORD *)s2 + 2) < v30 + 1 )
        {
          v69 = *(void **)s2;
          v140 = (char *)(v30 + 1);
          v70 = qvector_reserve(s2, v69, v58, 1);
          v31 = s2;
          v58 = (size_t)v140;
          v57 = (void *)v70;
          *(_QWORD *)s2 = v70;
        }
        *((_QWORD *)v31 + 1) = v58;
        p_src = v29;
        s2 = v31;
        memmove(v57, v29, v32);
        *(_BYTE *)(*(_QWORD *)s2 + v32) = 0;
      }
      else
      {
        *((_QWORD *)s2 + 1) = 0;
      }
      v33 = v28->m128i_i8[4];
      if ( (unsigned __int8)v33 > 0x1Fu )
        goto LABEL_66;
      v34 = v33 & 0xE;
      if ( v34 == 10 )
        goto LABEL_66;
      if ( v34 == 12 )
        goto LABEL_81;
      if ( v34 > 0xCu )
      {
        if ( v34 == 14 )
        {
          p_src = (const char *)v143;
          v59 = *(_QWORD *)(*(_QWORD *)(v143 + 8) + 16LL) & (v28->m128i_i64[1] + *(_QWORD *)(v141 + 216));
          v60 = *(_QWORD *)(v141 + 240);
          if ( *(_QWORD *)(*(_QWORD *)(v141 + 8) + 16LL) == v60
            || v60 == -1
            || *(_QWORD *)(v141 + 184)
            && (p_src = (const char *)(*(_QWORD *)(*(_QWORD *)(v143 + 8) + 16LL)
                                     & (v28->m128i_i64[1] + *(_QWORD *)(v141 + 216))),
                rangeset_t_find_range(v141 + 176, p_src)) )
          {
            if ( *v29 && !(unsigned __int8)sub_11500(v29) )
            {
              LOBYTE(s2) = 0;
              dest = 0;
              v157 = 0;
              v83 = segtype(v59, p_src, v61);
              v84 = (unsigned __int8)s2;
              if ( v83 == 2 )
              {
                p_src = "__dtrace_probe$";
                v84 = strncmp(v29, "__dtrace_probe$", 0xFu) != 0;
              }
              v159 = v84;
              LOBYTE(s2) = v84;
              v85 = strlen(v29);
              v86 = (unsigned __int8)s2;
              v87 = (char *)v85;
              v88 = (char *)v85;
              if ( v85 )
              {
                v123 = dest;
                v124 = (char *)(v85 + 1);
                if ( *((_QWORD *)&v157 + 1) < v85 + 1 )
                {
                  v140 = (char *)v85;
                  s2 = (char *)(v85 + 1);
                  dest = (void *)qvector_reserve(&dest, dest, v124, 1);
                  v87 = v140;
                  v123 = dest;
                  v124 = s2;
                }
                *(_QWORD *)&v157 = v124;
                p_src = v29;
                s2 = v87;
                memmove(v123, v29, (size_t)v87);
                v87 = s2;
                s2[(_QWORD)dest] = 0;
                v86 = v159;
                v88 = (char *)v157;
              }
              else
              {
                *(_QWORD *)&v157 = 0;
              }
              v89 = (v28->m128i_i8[4] & 0x11) == 1;
              v158 = v89;
              if ( (_BYTE)v86 && (p_src = *(const char **)v143, (*(_BYTE *)(*(_QWORD *)v143 + 12LL) & 8) != 0) )
              {
                v90 = v28->m128i_i16[3];
                memset(n, 0, 24);
                v91 = v90 & 0xF;
                if ( (_WORD)v91 == 8 )
                  v59 |= 1u;
                src = (void *)v59;
                if ( v88 )
                {
                  s2 = v88;
                  n[0].m128i_i64[0] = qalloc_or_throw(v88, v91, v86);
                  n[1].m128i_i64[0] = (__int64)s2;
                  memcpy((void *)n[0].m128i_i64[0], dest, (size_t)s2);
                  v88 = s2;
                  v89 = v158;
                  v86 = v159;
                  n[0].m128i_i64[1] = (__int64)s2;
                }
                p_src = (const char *)&src;
                n[1].m128i_i8[8] = v89;
                n[1].m128i_i8[9] = v86;
                sub_414C0(v162, &src, v86, v88, v87);
                if ( n[0].m128i_i64[0] )
                  qfree(n[0].m128i_i64[0], &src);
                v59 &= ~1uLL;
              }
              else
              {
                src = (void *)v59;
                memset(n, 0, 24);
                if ( v88 )
                {
                  s2 = v88;
                  n[0].m128i_i64[0] = qalloc_or_throw(v88, p_src, v86);
                  n[1].m128i_i64[0] = (__int64)s2;
                  memcpy((void *)n[0].m128i_i64[0], dest, (size_t)s2);
                  v88 = s2;
                  v89 = v158;
                  v86 = v159;
                  n[0].m128i_i64[1] = (__int64)s2;
                }
                p_src = (const char *)&src;
                n[1].m128i_i8[8] = v89;
                n[1].m128i_i8[9] = v86;
                sub_414C0(v162, &src, v86, v88, v87);
                if ( n[0].m128i_i64[0] )
                  qfree(n[0].m128i_i64[0], &src);
              }
              if ( dest )
              {
                *(_QWORD *)&v157 = 0;
                qfree(dest, &src);
              }
            }
            if ( !v145 )
            {
              p_src = v21;
              dest = (void *)v59;
              netnode_supset(v150, v21, &dest, 8, 65);
            }
          }
        }
        goto LABEL_66;
      }
      if ( !v34 )
      {
LABEL_81:
        if ( a4 )
        {
          v62 = v28->m128i_u8[7];
          ++v135;
          if ( (unsigned __int16)(v62 - 254) > 1u && v28->m128i_i8[7] && *(_QWORD *)(v141 + 312) < v62 )
            v63 = 0;
          else
            v63 = 24 * v62;
          v64 = (__int64 *)(v152 + v63);
          LODWORD(src) = (_DWORD)v21;
          v65 = (int)v21;
          v66 = v64[1];
          v67 = (const char *)*v64;
          v68 = v64[2];
          p_src = (const char *)(v66 + 1);
          if ( (unsigned __int64)&src < *v64 || &src >= (void **)&v67[4 * v68] )
          {
            if ( v68 < (unsigned __int64)p_src )
            {
              p_src = (const char *)*v64;
              v71 = qvector_reserve(v64, *v64, v66 + 1, 4);
              *v64 = v71;
              v67 = (const char *)v71;
              v65 = (int)src;
              v66 = v64[1];
            }
          }
          else if ( v68 < (unsigned __int64)p_src )
          {
            p_src = (const char *)*v64;
            v122 = qvector_reserve(v64, *v64, v66 + 1, 4);
            *v64 = v122;
            v67 = (const char *)v122;
            v66 = v64[1];
          }
          *(_DWORD *)&v67[4 * v66] = v65;
          ++v64[1];
        }
        goto LABEL_66;
      }
      if ( v34 != 2 )
        goto LABEL_66;
      dest = 0;
      v157 = 0;
      v35 = strlen(v29);
      s2 = (char *)(v35 + 1);
      dest = (void *)qvector_reserve(&dest, 0, v35 + 1, 1);
      *(_QWORD *)&v157 = s2;
      memmove(dest, v29, v35);
      *((_BYTE *)dest + v35) = 0;
      v36 = (char *)dest;
      v37 = v157;
      v38 = v144;
      dest = 0;
      s2 = v36;
      v39 = *((_QWORD *)&v157 + 1);
      v157 = 0;
      v40 = _mm_loadu_si128(v28);
      v138 = v39;
      n[1] = v40;
      if ( !v170 )
        goto LABEL_59;
      v41 = (char *)s1;
      if ( v37 )
        v41 = s2;
      v140 = v21;
      v38 = v144;
      v42 = v170;
      v139 = v149;
      v149 = v41;
      while ( 1 )
      {
        v48 = *((_QWORD *)v42 + 5);
        if ( !v37 )
          break;
        if ( v48 )
          goto LABEL_52;
        v43 = s2;
        v44 = v42;
        v45 = s1;
LABEL_45:
        v46 = strcmp(v45, v43);
        v47 = (const char *)*((_QWORD *)v42 + 2);
        v42 = (const char *)*((_QWORD *)v42 + 3);
        if ( v46 >= 0 )
        {
          v38 = v44;
          v42 = v47;
        }
        if ( !v42 )
        {
          v21 = v140;
          v149 = v139;
          goto LABEL_54;
        }
      }
      if ( v48 )
      {
LABEL_52:
        v45 = (const char *)*((_QWORD *)v42 + 4);
        v43 = v149;
        v44 = v42;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v49 = *((_QWORD *)v42 + 2);
        if ( !v49 )
          break;
        v38 = v42;
        v42 = (const char *)*((_QWORD *)v42 + 2);
        if ( *(_QWORD *)(v49 + 40) )
          goto LABEL_52;
      }
      v77 = v42;
      v21 = v140;
      v38 = v77;
      v149 = v139;
LABEL_54:
      if ( v38 == v144 )
        goto LABEL_59;
      if ( *((_QWORD *)v38 + 5) )
      {
        p_src = (const char *)*((_QWORD *)v38 + 4);
        v50 = (char *)s1;
        if ( v37 )
          goto LABEL_57;
LABEL_58:
        if ( strcmp(v50, p_src) < 0 )
        {
LABEL_59:
          v51 = operator new(0x48u);
          v52 = s2;
          p_src = v38;
          *(__m128 *)(v51 + 40) = _mm_loadh_ps((const double *)&v138);
          v53 = _mm_loadu_si128(&n[1]);
          *(_QWORD *)(v51 + 32) = v52;
          *(__m128i *)(v51 + 56) = v53;
          v54 = sub_42C30(v168, v38, v51 + 32);
          if ( v55 )
          {
            if ( v54 || v55 == v144 )
            {
              v56 = 1;
            }
            else
            {
              v119 = s1;
              if ( *((_QWORD *)v55 + 5) )
                v119 = (const char *)*((_QWORD *)v55 + 4);
              v120 = (char *)s1;
              if ( v37 )
                v120 = s2;
              v140 = v55;
              v121 = strcmp(v120, v119);
              v55 = v140;
              v56 = v121 >> 31;
            }
            p_src = (const char *)v51;
            std::_Rb_tree_insert_and_rebalance(v56, v51, v55, v144);
            ++v173;
          }
          else if ( v51 )
          {
            v72 = s2;
            if ( s2 )
            {
              *(_QWORD *)(v51 + 40) = 0;
              qfree(v72, v38);
            }
            p_src = (const char *)&qword_48;
            operator delete((void *)v51, 0x48u);
          }
          goto LABEL_64;
        }
      }
      else
      {
        p_src = s1;
        if ( v37 )
        {
LABEL_57:
          v50 = s2;
          goto LABEL_58;
        }
      }
      if ( s2 )
        qfree(s2, p_src);
LABEL_64:
      if ( dest )
      {
        *(_QWORD *)&v157 = 0;
        qfree(dest, p_src);
      }
LABEL_66:
      v149 += 24;
      ++v21;
    }
    while ( v148 != v21 );
LABEL_67:
    if ( (unsigned __int64)++v145 < v142[1] )
    {
      v149 = (char *)v155;
      continue;
    }
    break;
  }
LABEL_133:
  v92 = (__int64)v165;
  if ( v165 != &v163 )
  {
    v147 = (unsigned __int8 (__fastcall **)(__int64))&callui;
    do
    {
      v94 = (int)v147;
      if ( (*v147)(27) )
        sub_1A260((unsigned int)"Cancelled by user", v94, v95, v96, v97, v98);
      v99 = *(_QWORD *)(v92 + 32);
      if ( (*(_BYTE *)(*(_QWORD *)v143 + 12LL) & 8) != 0 && *(_BYTE *)(v92 + 65) )
      {
        sub_1A010(87, *(_QWORD *)(v92 + 32), *(_DWORD *)(v92 + 32) & 1, v96, v97, v98, v133);
        v99 &= ~1uLL;
      }
      v100 = *(_QWORD *)(v92 + 48);
      if ( *(_BYTE *)(v92 + 64) && a5 )
      {
        v101 = s1;
        if ( v100 )
          v101 = *(const char **)(v92 + 40);
        add_entry(v99, v99, v101, *(unsigned __int8 *)(v92 + 65), 1);
      }
      else
      {
        v93 = s1;
        if ( v100 )
          v93 = *(const char **)(v92 + 40);
        set_name(v99, v93, 7168);
        if ( *(_BYTE *)(v92 + 65) )
        {
          auto_mark_range(v99, v99 + 1, 20);
          auto_mark_range(v99, v99 + 1, 30);
        }
      }
      v92 = std::_Rb_tree_increment(v92);
    }
    while ( (int *)v92 != &v163 );
  }
  v102 = 4;
  if ( *(_BYTE *)(v143 + 13692) )
    v102 = 8;
  setinf(9, v102);
  v103 = v173;
  if ( (_DWORD)v173 && (*(_BYTE *)(v141 + 364) & 0x50) == 0 && (*(_BYTE *)(v143 + 13689) & 8) == 0 )
  {
    v175 = 0;
    memset(v174, 0, sizeof(v174));
    v176 = 0;
    selector = 0;
    v186 = 0xFFFFFFFF00000000LL;
    v178 = -1;
    v179 = -1;
    v180 = -1;
    v181 = -1;
    v182 = -1;
    v183 = -1;
    v184 = -1;
    v185 = -1;
    v125 = getinf(20);
    LOBYTE(v186) = 10;
    BYTE2(v176) = 4;
    *(_QWORD *)&v174[0] = (v125 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    LOWORD(v176) = 515;
    *((_QWORD *)&v174[0] + 1) = *(_QWORD *)&v174[0] + v103 * v134;
    LOBYTE(v149) = *(_BYTE *)(v143 + 13692);
    BYTE3(v176) = (_BYTE)v149 + 1;
    selector = allocate_selector(0);
    sub_1CE50(&src, v141);
    sub_18750(&dest, "ABS", &src);
    if ( src )
    {
      n[0].m128i_i64[0] = 0;
      qfree(src, "ABS");
    }
    v126 = dest;
    add_segm_ex(v174, dest, "ABS", 2);
    v127 = v171;
    v128 = 0;
    v129 = *(_QWORD *)&v174[0];
    if ( v171 != v144 )
    {
      while ( 1 )
      {
        v130 = s1;
        if ( *((_QWORD *)v127 + 5) )
          v130 = (const char *)*((_QWORD *)v127 + 4);
        set_name(v129, v130, 1025);
        v131 = *((_QWORD *)v127 + 8);
        if ( *(_BYTE *)(v143 + 13692) )
          put_qword(v129, v131);
        else
          put_dword(v129, v131);
        v126 = (void *)v128;
        v151 = v129;
        netnode_supset(v150, v128, &v151, 8, 65);
        v129 += v134;
        v127 = (const char *)std::_Rb_tree_increment(v127);
        if ( v127 == v144 )
          break;
        ++v128;
      }
    }
    if ( dest )
    {
      *(_QWORD *)&v157 = 0;
      qfree(dest, v126);
    }
  }
  v104 = v141;
  sub_41820(
    v143,
    v141,
    v135,
    v134,
    (unsigned int)&v152,
    (unsigned int)&v154,
    (__int64)&v150,
    (__int64)"UNDEF",
    v133,
    (unsigned int)&v150,
    (unsigned int)&v152);
  v105 = v150;
  sub_14EA0(v170, v104, v106, v107, v132);
  v108 = v154;
  if ( v154 )
  {
    v109 = v155;
    if ( (_QWORD)v155 )
    {
      v110 = 0;
      do
      {
        v111 = &v108[24 * v110];
        v112 = *(_QWORD *)v111;
        if ( *(_QWORD *)v111 )
        {
          *((_QWORD *)v111 + 1) = 0;
          qfree(v112, v104);
          v108 = v154;
        }
        ++v110;
      }
      while ( v109 != v110 );
    }
    *(_QWORD *)&v155 = 0;
    qfree(v108, v104);
  }
  v113 = v152;
  if ( v152 )
  {
    v114 = v153;
    if ( (_QWORD)v153 )
    {
      v115 = 0;
      do
      {
        v116 = (__int64 *)(v113 + 24 * v115);
        v117 = *v116;
        if ( *v116 )
        {
          v116[1] = 0;
          qfree(v117, v104);
          v113 = v152;
        }
        ++v115;
      }
      while ( v114 != v115 );
    }
    *(_QWORD *)&v153 = 0;
    qfree(v113, v104);
  }
  sub_15160(v164);
  return v105;
}
