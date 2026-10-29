__int64 __fastcall sub_34DCC0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  __int64 *v14; // rsi
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 m128i_i64; // rdx
  __m128i *v18; // r8
  __int64 *i; // rax
  _QWORD *v20; // r14
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __m128i *v25; // r12
  unsigned int v26; // r11d
  __int64 v27; // rcx
  __int64 *v28; // r13
  int v29; // esi
  __int64 v30; // r11
  __m128i *v31; // rdi
  __int64 *v32; // rax
  __int64 v33; // rax
  bool v34; // zf
  _QWORD *v35; // rbx
  _QWORD *v36; // r12
  __int64 v37; // rcx
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // r15d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // r12
  __int64 v50; // rsi
  __int64 v51; // rdi
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // r15
  __int64 v58; // r13
  __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 *v62; // r12
  __int64 v63; // rax
  __int64 *v64; // rbx
  _QWORD *v65; // rax
  _QWORD *v66; // rcx
  unsigned int v67; // eax
  _DWORD *v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rcx
  unsigned int v71; // r13d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  void *v75; // r12
  int v76; // eax
  unsigned int v77; // r12d
  _QWORD *v78; // rax
  _QWORD *v79; // rsi
  size_t v80; // rdx
  void *v81; // r12
  __int64 v82; // rax
  __int64 *v83; // r15
  __int64 *v84; // r14
  __int64 v85; // rdi
  int v86; // edx
  __int64 v87; // r12
  __int64 *v88; // rsi
  __int64 *v89; // r12
  __int64 *v90; // r13
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  void *v101; // rbp
  void *v102; // rbp
  void *v103; // rbp
  __int64 v104; // rbp
  __int64 v105; // rax
  __int64 v106; // r12
  __int64 v107; // rdi
  __int64 v108; // rbp
  __int64 v109; // rax
  __int64 v110; // r13
  void *v111; // r12
  __int64 v112; // rsi
  __int64 v114; // rax
  __int64 v115; // rdx
  char *v116; // r13
  __int64 v117; // rax
  char *v118; // r12
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 *v121; // rsi
  __int64 *v122; // rax
  __int64 v123; // rdx
  int v124; // edx
  int v125; // edx
  __int64 v126; // rsi
  __int64 v127; // rdx
  char v128; // di
  char v129; // di
  __int64 v130; // rsi
  __int64 v131; // rdx
  char v132; // di
  char v133; // di
  char *v134; // r13
  void *v135; // rbp
  __int64 v136; // rdi
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rax
  char v140; // dl
  char v141; // cl
  __int64 v142; // rax
  char v143; // dl
  char v144; // cl
  __int64 v145; // rax
  int v146; // eax
  __int64 v147; // rax
  char v148; // dl
  char v149; // cl
  __int64 v150; // rax
  char v151; // dl
  char v152; // cl
  __m128i *v153; // rax
  int v154; // r10d
  const __m128i *v155; // r15
  __int64 v156; // rax
  __m128i *v157; // r9
  __int64 v158; // rax
  __m128i *v159; // rax
  char **v160; // rbx
  char **exception; // rbx
  __int64 *v162; // [rsp+0h] [rbp-148h]
  unsigned int v163; // [rsp+0h] [rbp-148h]
  unsigned int v164; // [rsp+0h] [rbp-148h]
  int v165; // [rsp+0h] [rbp-148h]
  _QWORD *v166; // [rsp+8h] [rbp-140h]
  size_t v167; // [rsp+8h] [rbp-140h]
  char *v168; // [rsp+8h] [rbp-140h]
  size_t v169; // [rsp+8h] [rbp-140h]
  unsigned int v170; // [rsp+8h] [rbp-140h]
  __int64 v171; // [rsp+10h] [rbp-138h]
  int v172; // [rsp+10h] [rbp-138h]
  size_t v173; // [rsp+10h] [rbp-138h]
  __int64 v175; // [rsp+18h] [rbp-130h]
  __int64 *v177; // [rsp+20h] [rbp-128h]
  __int64 v178; // [rsp+20h] [rbp-128h]
  __int64 v179; // [rsp+28h] [rbp-120h]
  int v180; // [rsp+38h] [rbp-110h]
  unsigned int v182; // [rsp+40h] [rbp-108h]
  __int64 v183; // [rsp+58h] [rbp-F0h] BYREF
  void *src; // [rsp+60h] [rbp-E8h]
  int v185; // [rsp+68h] [rbp-E0h]
  _QWORD v186[2]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v187[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v188; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD *v189; // [rsp+98h] [rbp-B0h] BYREF
  int v190; // [rsp+A0h] [rbp-A8h]
  __int64 v191; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v192; // [rsp+B0h] [rbp-98h]
  __int64 v193; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v194; // [rsp+C0h] [rbp-88h]
  __int64 v195; // [rsp+D0h] [rbp-78h] BYREF
  int v196; // [rsp+D8h] [rbp-70h]
  __int128 v197; // [rsp+E0h] [rbp-68h]
  _QWORD v198[2]; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD v199[9]; // [rsp+100h] [rbp-48h] BYREF

  v4 = a1;
  v195 = *(_QWORD *)(a1 + 8);
  v5 = v195;
  v162 = &v188;
  sub_180C5A0(&v188, "pb");
  v6 = sub_15DA4C0(v5 + 560, &v188);
  v7 = *(_QWORD *)(a2 + 8);
  v198[0] = 0;
  v196 = v6;
  v8 = *(_QWORD *)(a1 + 8);
  v198[1] = 0;
  v199[0] = 1;
  v199[1] = 0;
  v179 = v8;
  v197 = 0;
  if ( v7 )
    v9 = *(unsigned int *)(v7 - 4);
  else
    v9 = 0;
  v10 = sub_168D9F0(&v195, v9, v7, 0);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(unsigned int *)(a1 + 680);
  v13 = *(_DWORD *)(v11 + 12);
  v14 = *(__int64 **)(v4 + 672);
  v15 = v12 - 1;
  v12 *= 16;
  v16 = (__int64 *)((char *)v14 + v12);
  m128i_i64 = 16LL * (v13 & v15);
  v18 = (__m128i *)((char *)v14 + m128i_i64);
  if ( m128i_i64 != v12 )
  {
    for ( i = (__int64 *)((char *)v14 + m128i_i64); v16 != i; i += 2 )
    {
      m128i_i64 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(m128i_i64 + 12) == v13 && v11 == m128i_i64 )
          goto LABEL_23;
      }
      else if ( !m128i_i64 )
      {
        goto LABEL_12;
      }
    }
  }
  for ( ; v18 != (__m128i *)v14; v14 += 2 )
  {
    v99 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
    {
      if ( *(_DWORD *)(v99 + 12) == v13 && v11 == v99 )
      {
        i = v14;
LABEL_23:
        v20 = (_QWORD *)i[1];
        goto LABEL_24;
      }
    }
    else if ( !v99 )
    {
      break;
    }
  }
LABEL_12:
  ++*(_DWORD *)(v11 + 8);
  v183 = v11;
  sub_349180((_QWORD *)(v4 + 272), &v183);
  v20 = (_QWORD *)sub_186B270(0x38u);
  sub_35B700((_DWORD)v20, a2, v21, v22, v23, v24, (unsigned int)&v188);
  m128i_i64 = *(unsigned int *)(v4 + 680);
  if ( 3 * (int)m128i_i64 < (unsigned int)(4 * (*(_DWORD *)(v4 + 684) + *(_DWORD *)(v4 + 688))) )
  {
    v172 = 2 * m128i_i64;
    v169 = 16LL * (unsigned int)(2 * m128i_i64);
    v153 = (__m128i *)sub_186B270(v169);
    v27 = v169;
    v154 = v172;
    v25 = v153;
    v18 = &v153[v169 / 0x10];
    if ( v172 )
    {
      m128i_i64 = v169 & 0x10;
      if ( (v169 & 0x10) == 0 || (*v153 = 0, ++v153, v18 != v153) )
      {
        do
        {
          *v153 = 0;
          v153 += 2;
          v153[-1] = 0;
        }
        while ( v18 != v153 );
      }
    }
    v155 = *(const __m128i **)(v4 + 672);
    v26 = v172 - 1;
    v28 = (__int64 *)v18;
    v156 = *(unsigned int *)(v4 + 680);
    v157 = (__m128i *)&v155[v156];
    if ( v155 != &v155[v156] )
    {
      do
      {
        if ( v155->m128i_i64[0] > 1uLL )
        {
          v158 = 16LL * (*(_DWORD *)(v155->m128i_i64[0] + 12) & v26);
          m128i_i64 = (__int64)v25[(unsigned __int64)v158 / 0x10].m128i_i64;
          if ( v169 == v158 )
          {
LABEL_221:
            if ( v25 == (__m128i *)m128i_i64 )
            {
LABEL_235:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v159 = v25;
            while ( v159->m128i_i64[0] )
            {
              if ( (__m128i *)m128i_i64 == ++v159 )
                goto LABEL_235;
            }
          }
          else
          {
            v159 = &v25[(unsigned __int64)v158 / 0x10];
            while ( v159->m128i_i64[0] )
            {
              if ( v18 == ++v159 )
                goto LABEL_221;
            }
          }
          *v159 = _mm_loadu_si128(v155);
        }
        ++v155;
      }
      while ( v157 != v155 );
      v157 = *(__m128i **)(v4 + 672);
    }
    if ( v157 )
    {
      v180 = v172;
      v173 = v169;
      v170 = v154 - 1;
      sub_186B220(v157);
      v26 = v170;
      v27 = v173;
      v154 = v180;
    }
    *(_QWORD *)(v4 + 672) = v25;
    *(_DWORD *)(v4 + 680) = v154;
    *(_DWORD *)(v4 + 688) = 0;
  }
  else
  {
    v25 = *(__m128i **)(v4 + 672);
    v26 = m128i_i64 - 1;
    v27 = 16LL * (unsigned int)m128i_i64;
    v28 = (__int64 *)((char *)v25->m128i_i64 + v27);
  }
  v29 = *(_DWORD *)(v11 + 12);
  v30 = 16LL * (v29 & v26);
  v31 = &v25[(unsigned __int64)v30 / 0x10];
  if ( v30 != v27 )
  {
    v32 = v25[(unsigned __int64)v30 / 0x10].m128i_i64;
    v16 = nullptr;
    while ( 1 )
    {
      m128i_i64 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
      {
        if ( *(_DWORD *)(m128i_i64 + 12) == v29 && v11 == m128i_i64 )
        {
          *v32 = v11;
          v32[1] = (__int64)v20;
          goto LABEL_24;
        }
      }
      else
      {
        if ( !m128i_i64 )
        {
          if ( v16 )
            goto LABEL_232;
          v16 = v32;
          goto LABEL_233;
        }
        v16 = v32;
      }
      v32 += 2;
      if ( v32 == v28 )
        goto LABEL_125;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_125:
    if ( v31 == v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v100 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v100 + 12) == v29 && v11 == v100 )
    {
      v25->m128i_i64[0] = v11;
      v25->m128i_i64[1] = (__int64)v20;
      goto LABEL_24;
    }
LABEL_124:
    ++v25;
  }
  if ( v100 )
  {
    v16 = (__int64 *)v25;
    goto LABEL_124;
  }
  if ( v16 )
LABEL_232:
    --*(_DWORD *)(v4 + 688);
  else
    v16 = (__int64 *)v25;
LABEL_233:
  *v16 = v11;
  v16[1] = (__int64)v20;
  ++*(_DWORD *)(v4 + 684);
LABEL_24:
  sub_35B690(v20, (unsigned int)(a3 + 1), m128i_i64, v16, v18);
  v33 = sub_15E1A70(*(_QWORD *)(v4 + 8));
  v171 = v33;
  if ( v33 )
  {
    ++*(_DWORD *)(v33 + 8);
    v34 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v179, v11);
    v188 = v171;
    ++*(_DWORD *)(v171 + 8);
  }
  else
  {
    v34 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v34 )
      sub_15D7BC0(v179, v11);
    v188 = 0;
  }
  sub_349180((_QWORD *)(v4 + 272), v162);
  v35 = (_QWORD *)v20[5];
  if ( !v35 )
    goto LABEL_49;
  v36 = &v35[*((unsigned int *)v35 - 1)];
  if ( v36 == v35 )
    goto LABEL_48;
  while ( 2 )
  {
    while ( 2 )
    {
      v40 = *v35;
      v41 = sub_2FF8B0(v4);
      sub_E5EBF0(v41, v40);
      v42 = *v35;
      if ( *v35 )
        ++*(_DWORD *)(v42 + 8);
      v43 = *(_QWORD **)(v4 + 208);
      if ( !v43 )
      {
        v98 = (_QWORD *)sub_186B270(0x18u);
        v43 = v98 + 1;
        *v98 = 2;
        v38 = 1;
        *(_QWORD *)(v4 + 208) = v43;
        v39 = v43;
LABEL_32:
        ++v35;
        *v39 = v42;
        *((_DWORD *)v43 - 1) = v38;
        if ( v36 == v35 )
          goto LABEL_40;
        continue;
      }
      break;
    }
    v44 = *((_DWORD *)v43 - 1);
    if ( v44 != *((_DWORD *)v43 - 2) )
    {
      v37 = v44;
      v38 = v44 + 1;
      v39 = &v43[v37];
      goto LABEL_32;
    }
    v45 = (3 * v44 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v162, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v162);
      sub_233E40((__int64)v162);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v47 = (unsigned int *)sub_186B300(v43 - 1, v46);
    v48 = v47[1];
    *v47 = v45;
    ++v35;
    *(_QWORD *)(v4 + 208) = v47 + 2;
    *(_QWORD *)&v47[2 * v48 + 2] = v42;
    v47[1] = v48 + 1;
    if ( v36 != v35 )
      continue;
    break;
  }
LABEL_40:
  v35 = (_QWORD *)v20[5];
  if ( v35 )
  {
    v49 = &v35[*((unsigned int *)v35 - 1)];
    if ( v35 >= v49 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v50 = *v35;
        if ( *v35 )
        {
          v51 = v20[4];
          v34 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( ++v35 >= v49 )
          goto LABEL_47;
      }
      sub_15D7BC0(v51, v50);
      ++v35;
    }
    while ( v35 < v49 );
LABEL_47:
    v35 = (_QWORD *)v20[5];
    if ( v35 )
LABEL_48:
      *((_DWORD *)v35 - 1) = 0;
  }
LABEL_49:
  v52 = (_QWORD *)v20[6];
  if ( v52 )
  {
    v53 = *((unsigned int *)v52 - 1);
    v166 = &v52[4 * v53];
    if ( v166 == v52 )
    {
LABEL_104:
      if ( (_DWORD)v53 )
      {
        v93 = &v52[4 * v53];
        do
        {
          v96 = v52[2];
          if ( v96 )
          {
            v97 = v52[3];
            v34 = (*(_DWORD *)(v96 + 8))-- == 1;
            if ( v34 )
              sub_15D7BC0(v97, v96);
          }
          v94 = *v52;
          if ( *v52 )
          {
            v95 = v52[1];
            v34 = (*(_DWORD *)(v94 + 8))-- == 1;
            if ( v34 )
              sub_15D7BC0(v95, v94);
          }
          v52 += 4;
        }
        while ( v52 != v93 );
        v52 = (_QWORD *)v20[6];
      }
      *((_DWORD *)v52 - 1) = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v57 = *(_QWORD *)(v4 + 320);
          v58 = v52[2];
          v59 = *v52;
          if ( v57 )
          {
            sub_1374250(v162, *(_QWORD *)(v4 + 320), v52[2]);
            sub_135F9B0(v57, *(_QWORD *)(v59 + 16), v188);
            v60 = v188;
            if ( v188 )
            {
              v61 = (__int64)v189;
              v34 = (*(_DWORD *)(v188 + 8))-- == 1;
              if ( v34 )
                sub_15D7BC0(v61, v60);
            }
          }
          v54 = *(_QWORD *)(v4 + 136);
          if ( v54 )
          {
            sub_1374250(v162, *(_QWORD *)(v4 + 136), v58);
            sub_135F9B0(v54, *(_QWORD *)(v59 + 16), v188);
            v55 = v188;
            if ( v188 )
            {
              v56 = (__int64)v189;
              v34 = (*(_DWORD *)(v188 + 8))-- == 1;
              if ( v34 )
                break;
            }
          }
          v52 += 4;
          if ( v166 == v52 )
            goto LABEL_102;
        }
        sub_15D7BC0(v56, v55);
        v52 += 4;
      }
      while ( v166 != v52 );
LABEL_102:
      v52 = (_QWORD *)v20[6];
      if ( v52 )
      {
        v53 = *((unsigned int *)v52 - 1);
        goto LABEL_104;
      }
    }
  }
  v62 = *(__int64 **)(a2 + 8);
  if ( v62 )
  {
    v63 = *((unsigned int *)v62 - 1);
    src = nullptr;
    if ( (_DWORD)v63 )
    {
      v64 = &v62[v63];
      v65 = (_QWORD *)sub_186B270(0x18u);
      v66 = v65 + 1;
      *v65 = 2;
      v67 = 1;
      src = v66;
      v68 = v66;
      while ( 1 )
      {
        v69 = *v62++;
        *v66 = v69;
        *(v68 - 1) = v67;
        if ( v64 == v62 )
          break;
        if ( *(v68 - 2) == v67 )
        {
          v71 = (3 * v67 + 1) >> 1;
          v72 = 8 * v71 + 8;
          if ( 8 * v67 + 8 >= (unsigned int)v72 || v67 >= v71 )
          {
            v160 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v162, "Overflow encountered when expanding vector");
            *v160 = (char *)off_1C63128;
            sub_2333C0(v160 + 1, v162);
            sub_233E40((__int64)v162);
            __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v73 = (unsigned int *)sub_186B300(v68 - 2, v72);
          v74 = v73[1];
          v68 = v73 + 2;
          *v73 = v71;
          src = v68;
          LODWORD(v73) = v74;
          v66 = &v68[2 * v74];
          v67 = (_DWORD)v73 + 1;
        }
        else
        {
          v70 = v67++;
          v66 = &v68[2 * v70];
        }
      }
    }
  }
  else
  {
    src = nullptr;
  }
  v186[0] = 0;
  v186[1] = 0;
  v185 = a3;
  v187[0] = 1;
  v75 = qword_1C7F2C0;
  v187[1] = 0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v186, a4);
  else
    LODWORD(v186[0]) = *(_DWORD *)a4;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
  {
    sub_182C690(v75, v187, a4 + 16);
  }
  else
  {
    v76 = *(_DWORD *)(a4 + 16);
    BYTE4(v187[0]) &= ~1u;
    LODWORD(v187[0]) = v76;
  }
  v189 = nullptr;
  v188 = v171;
  if ( src )
  {
    v77 = *((_DWORD *)src - 1);
    v163 = *((_DWORD *)src - 2);
    v78 = (_QWORD *)sub_186B270(8LL * v163 + 8);
    v79 = src;
    v189 = v78 + 1;
    *v78 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v163), _mm_cvtsi32_si128(v77)).m128i_u64[0];
    if ( v79 )
    {
      v80 = 8LL * *((unsigned int *)v79 - 1);
      if ( v80 <= 8 )
      {
        if ( v80 == 8 )
          v78[1] = *v79;
      }
      else
      {
        memmove(v78 + 1, v79, v80);
      }
    }
  }
  v81 = qword_1C7F2C0;
  v191 = 0;
  v192 = 0;
  v190 = v185;
  v193 = 1;
  v194 = 0;
  if ( (v186[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v191, v186);
  else
    LODWORD(v191) = v186[0];
  if ( (v187[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v81, &v193, v187);
  }
  else
  {
    BYTE4(v193) &= ~1u;
    LODWORD(v193) = v187[0];
  }
  v82 = *(unsigned int *)(v4 + 624);
  v182 = 2 * v82;
  if ( 3 * (int)v82 >= (unsigned int)(4 * (*(_DWORD *)(v4 + 628) + *(_DWORD *)(v4 + 632))) )
  {
    v83 = *(__int64 **)(v4 + 616);
    v164 = v82 - 1;
    v175 = 56 * v82;
    v84 = &v83[7 * v82];
    goto LABEL_86;
  }
  v167 = 56LL * v182;
  v175 = v167;
  v114 = sub_186B270(v167);
  v83 = (__int64 *)v114;
  if ( v182 )
  {
    v115 = v114 + 56LL * v182;
    do
    {
      *(_OWORD *)(v114 + 40) = 0;
      v114 += 56;
      *(_OWORD *)(v114 - 32) = 0;
      *(_QWORD *)(v114 - 56) = 0;
      *(_OWORD *)(v114 - 48) = 0;
      *(_BYTE *)(v114 - 28) = 0;
      *(_DWORD *)(v114 - 16) = 1;
      *(_BYTE *)(v114 - 12) = 0;
    }
    while ( v115 != v114 );
  }
  v116 = *(char **)(v4 + 616);
  v117 = *(unsigned int *)(v4 + 624);
  v164 = v182 - 1;
  v118 = &v116[56 * v117];
  v84 = &v83[v167 / 8];
  if ( v116 != v118 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v119 = *(_QWORD *)v116;
        if ( *(_QWORD *)v116 > 1u )
          break;
        v116 += 56;
        if ( v118 == v116 )
          goto LABEL_168;
      }
      v120 = 56LL * (*(_DWORD *)(v119 + 12) & v164);
      v121 = &v83[(unsigned __int64)v120 / 8];
      if ( v167 != v120 )
        break;
LABEL_177:
      if ( v83 == v121 )
      {
LABEL_195:
        sub_1872CE0("");
        sub_1873130(114, 213);
      }
      v122 = v83;
      while ( *v122 )
      {
        v122 += 7;
        if ( v121 == v122 )
          goto LABEL_195;
      }
      *v122 = v119;
      if ( v122 + 1 == (__int64 *)(v116 + 8) )
        goto LABEL_167;
      v123 = v122[1];
      if ( v123 )
        goto LABEL_165;
LABEL_166:
      v122[1] = 0;
      v122[1] = *((_QWORD *)v116 + 1);
      *((_QWORD *)v116 + 1) = 0;
LABEL_167:
      v124 = *((_DWORD *)v116 + 4);
      v116 += 56;
      *((_DWORD *)v122 + 4) = v124;
      v125 = *((_DWORD *)v122 + 6);
      *((_DWORD *)v122 + 6) = *((_DWORD *)v116 - 8);
      v126 = *((_QWORD *)v116 - 3);
      *((_DWORD *)v116 - 8) = v125;
      v127 = v122[4];
      v122[4] = v126;
      v128 = *(v116 - 28);
      *((_QWORD *)v116 - 3) = v127;
      LOBYTE(v126) = *((_BYTE *)v122 + 28);
      *((_BYTE *)v122 + 28) = v128 & 2 | v126 & 0xFD;
      LOBYTE(v127) = v126 & 2 | *(v116 - 28) & 0xFD;
      *(v116 - 28) = v127;
      v129 = *((_BYTE *)v122 + 28);
      *((_BYTE *)v122 + 28) = v127 & 1 | v129 & 0xFE;
      LODWORD(v126) = *((_DWORD *)v116 - 4);
      *(v116 - 28) = v129 & 1 | *(v116 - 28) & 0xFE;
      LODWORD(v127) = *((_DWORD *)v122 + 10);
      *((_DWORD *)v122 + 10) = v126;
      v130 = *((_QWORD *)v116 - 1);
      *((_DWORD *)v116 - 4) = v127;
      v131 = v122[6];
      v122[6] = v130;
      v132 = *(v116 - 12);
      *((_QWORD *)v116 - 1) = v131;
      LOBYTE(v130) = *((_BYTE *)v122 + 44);
      *((_BYTE *)v122 + 44) = v132 & 2 | v130 & 0xFD;
      LOBYTE(v131) = v130 & 2 | *(v116 - 12) & 0xFD;
      *(v116 - 12) = v131;
      v133 = *((_BYTE *)v122 + 44) & 1;
      *((_BYTE *)v122 + 44) = v131 & 1 | *((_BYTE *)v122 + 44) & 0xFE;
      *(v116 - 12) = v133 | *(v116 - 12) & 0xFE;
      if ( v118 == v116 )
      {
LABEL_168:
        v117 = *(unsigned int *)(v4 + 624);
        v118 = *(char **)(v4 + 616);
        goto LABEL_169;
      }
    }
    v122 = &v83[(unsigned __int64)v120 / 8];
    while ( *v122 )
    {
      v122 += 7;
      if ( v84 == v122 )
        goto LABEL_177;
    }
    *v122 = v119;
    if ( v122 + 1 == (__int64 *)(v116 + 8) )
      goto LABEL_167;
    v123 = v122[1];
    if ( !v123 )
      goto LABEL_166;
LABEL_165:
    v177 = v122;
    sub_186B220((void *)(v123 - 8));
    v122 = v177;
    goto LABEL_166;
  }
LABEL_169:
  if ( v118 )
  {
    if ( (_DWORD)v117 )
    {
      v178 = v4;
      v134 = v118;
      v168 = &v118[56 * v117];
      do
      {
        while ( 1 )
        {
          v135 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v134 + 24);
          sub_182CBA0(v135, v134 + 40);
          v136 = *((_QWORD *)v134 + 1);
          if ( !v136 )
            break;
          v134 += 56;
          sub_186B220((void *)(v136 - 8));
          if ( v168 == v134 )
            goto LABEL_174;
        }
        v134 += 56;
      }
      while ( v168 != v134 );
LABEL_174:
      v4 = v178;
    }
    sub_186B220(v118);
  }
  *(_QWORD *)(v4 + 616) = v83;
  *(_DWORD *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 624) = v182;
LABEL_86:
  v85 = v188;
  v86 = *(_DWORD *)(v188 + 12);
  v87 = v86 & v164;
  v88 = &v83[7 * v87];
  if ( 56 * v87 != v175 )
  {
    v89 = &v83[7 * v87];
    v90 = nullptr;
    while ( 1 )
    {
      v91 = *v89;
      if ( (unsigned __int64)*v89 > 1 )
      {
        if ( *(_DWORD *)(v91 + 12) == v86 && v188 == v91 )
        {
          *v89 = v188;
          if ( &v189 != (_QWORD **)(v89 + 1) )
          {
            v145 = v89[1];
            if ( v145 )
              sub_186B220((void *)(v145 - 8));
            v89[1] = 0;
            v89[1] = (__int64)v189;
            v189 = nullptr;
          }
          *((_DWORD *)v89 + 4) = v190;
          v146 = *((_DWORD *)v89 + 6);
          *((_DWORD *)v89 + 6) = v191;
          LODWORD(v191) = v146;
          v147 = v89[4];
          v89[4] = v192;
          v192 = v147;
          v148 = *((_BYTE *)v89 + 28);
          *((_BYTE *)v89 + 28) = BYTE4(v191) & 2 | v148 & 0xFD;
          BYTE4(v191) = v148 & 2 | BYTE4(v191) & 0xFD;
          v149 = *((_BYTE *)v89 + 28);
          *((_BYTE *)v89 + 28) = BYTE4(v191) & 1 | v149 & 0xFE;
          BYTE4(v191) = v149 & 1 | BYTE4(v191) & 0xFE;
          LODWORD(v147) = *((_DWORD *)v89 + 10);
          *((_DWORD *)v89 + 10) = v193;
          LODWORD(v193) = v147;
          v150 = v89[6];
          v89[6] = v194;
          v194 = v150;
          v151 = *((_BYTE *)v89 + 44);
          *((_BYTE *)v89 + 44) = BYTE4(v193) & 2 | v151 & 0xFD;
          BYTE4(v193) = v151 & 2 | BYTE4(v193) & 0xFD;
          v152 = *((_BYTE *)v89 + 44) & 1;
          *((_BYTE *)v89 + 44) = BYTE4(v193) & 1 | *((_BYTE *)v89 + 44) & 0xFE;
          BYTE4(v193) = v152 | BYTE4(v193) & 0xFE;
          goto LABEL_130;
        }
      }
      else
      {
        if ( !v91 )
        {
          if ( v90 )
            --*(_DWORD *)(v4 + 632);
          else
            v90 = v89;
          *v90 = v85;
          if ( &v189 == (_QWORD **)(v90 + 1) )
            goto LABEL_194;
          v137 = v90[1];
          if ( !v137 )
            goto LABEL_193;
LABEL_192:
          sub_186B220((void *)(v137 - 8));
LABEL_193:
          v90[1] = 0;
          v90[1] = (__int64)v189;
          v189 = nullptr;
          goto LABEL_194;
        }
        v90 = v89;
      }
      v89 += 7;
      if ( v89 == v84 )
        goto LABEL_97;
    }
  }
  v90 = nullptr;
LABEL_97:
  while ( 2 )
  {
    if ( v88 == v83 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v92 = *v83;
    if ( (unsigned __int64)*v83 > 1 )
    {
      if ( *(_DWORD *)(v92 + 12) == v86 && v188 == v92 )
      {
        *v83 = v188;
        sub_349020(v83 + 1, (__int64 *)&v189);
        goto LABEL_130;
      }
      goto LABEL_96;
    }
    if ( v92 )
    {
      v90 = v83;
LABEL_96:
      v83 += 7;
      continue;
    }
    break;
  }
  if ( v90 )
    --*(_DWORD *)(v4 + 632);
  else
    v90 = v83;
  *v90 = v85;
  if ( &v189 != (_QWORD **)(v90 + 1) )
  {
    v137 = v90[1];
    if ( v137 )
      goto LABEL_192;
    goto LABEL_193;
  }
LABEL_194:
  *((_DWORD *)v90 + 4) = v190;
  v138 = *((_DWORD *)v90 + 6);
  *((_DWORD *)v90 + 6) = v191;
  LODWORD(v191) = v138;
  v139 = v90[4];
  v90[4] = v192;
  v192 = v139;
  v140 = *((_BYTE *)v90 + 28);
  *((_BYTE *)v90 + 28) = BYTE4(v191) & 2 | v140 & 0xFD;
  BYTE4(v191) = v140 & 2 | BYTE4(v191) & 0xFD;
  v141 = *((_BYTE *)v90 + 28);
  *((_BYTE *)v90 + 28) = BYTE4(v191) & 1 | v141 & 0xFE;
  BYTE4(v191) = v141 & 1 | BYTE4(v191) & 0xFE;
  LODWORD(v139) = *((_DWORD *)v90 + 10);
  *((_DWORD *)v90 + 10) = v193;
  LODWORD(v193) = v139;
  v142 = v90[6];
  v90[6] = v194;
  v194 = v142;
  v143 = *((_BYTE *)v90 + 44);
  *((_BYTE *)v90 + 44) = BYTE4(v193) & 2 | v143 & 0xFD;
  BYTE4(v193) = v143 & 2 | BYTE4(v193) & 0xFD;
  v144 = *((_BYTE *)v90 + 44) & 1;
  *((_BYTE *)v90 + 44) = BYTE4(v193) & 1 | *((_BYTE *)v90 + 44) & 0xFE;
  LOBYTE(v142) = BYTE4(v193);
  ++*(_DWORD *)(v4 + 628);
  BYTE4(v193) = v144 | v142 & 0xFE;
LABEL_130:
  v101 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v191);
  sub_182CBA0(v101, &v193);
  if ( v189 )
    sub_186B220(v189 - 1);
  v102 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v186);
  sub_182CBA0(v102, v187);
  if ( src )
    sub_186B220((char *)src - 8);
  if ( v171 )
  {
    v165 = *(_DWORD *)(v171 + 8);
    *(_DWORD *)(v171 + 8) = v165 - 1;
    if ( v165 == 1 )
      sub_15D7BC0(v179, v171);
  }
  v103 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v198);
  sub_182CBA0(v103, v199);
  v104 = *((_QWORD *)&v197 + 1);
  if ( *((_QWORD *)&v197 + 1) )
  {
    v105 = *(unsigned int *)(*((_QWORD *)&v197 + 1) - 4LL);
    if ( (_DWORD)v105 )
    {
      v106 = *((_QWORD *)&v197 + 1) + 16 * v105;
      do
      {
        v107 = v104;
        v104 += 16;
        sub_15D0DF0(v107);
      }
      while ( v104 != v106 );
      v104 = *((_QWORD *)&v197 + 1);
    }
    sub_186B220((void *)(v104 - 8));
  }
  v108 = v197;
  if ( (_QWORD)v197 )
  {
    v109 = *(unsigned int *)(v197 - 4);
    if ( (_DWORD)v109 )
    {
      v110 = v197 + 32 * v109;
      do
      {
        v111 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v108);
        v112 = v108 + 16;
        v108 += 32;
        sub_182CBA0(v111, v112);
      }
      while ( v108 != v110 );
      v108 = v197;
    }
    sub_186B220((void *)(v108 - 8));
  }
  return v171;
}

