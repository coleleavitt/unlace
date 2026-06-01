void __fastcall sub_1A5E3E0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        int a8)
{
  _QWORD *v8; // r11
  __m128i *v9; // rax
  unsigned __int64 v10; // rbx
  __m128i si128; // xmm0
  _DWORD **v12; // rbp
  _QWORD *v13; // r15
  _DWORD **i; // rbx
  __int64 v15; // r10
  unsigned int v16; // ecx
  _QWORD *v17; // rsi
  _QWORD *v18; // rdx
  _DWORD *v19; // rax
  char v20; // di
  __int64 v21; // r10
  unsigned __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned int v24; // esi
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  void **v29; // rcx
  __int64 v30; // r8
  int v31; // ebx
  int v32; // ebp
  __m128i *v33; // rax
  __m128i *v34; // rdi
  size_t v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  void *v43; // rax
  _QWORD *v44; // rax
  bool v45; // bp
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  unsigned int v54; // esi
  __int64 v55; // rcx
  _QWORD *v56; // rsi
  _QWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 *v61; // rbp
  int v62; // r13d
  char *v63; // rsi
  __int64 v64; // rbx
  unsigned __int64 v65; // rax
  void *v66; // rdi
  char *v67; // r14
  unsigned __int64 v68; // rdx
  _BYTE *v69; // rdi
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  _BYTE *v74; // rsi
  __int64 v75; // rdx
  size_t v76; // r8
  _BYTE *v77; // rcx
  _BYTE *v78; // rdi
  size_t v79; // rbx
  unsigned __int64 v80; // rax
  _BYTE *v81; // rdi
  __int64 *v82; // rbx
  int v83; // eax
  size_t v84; // rax
  char *v85; // rcx
  int v86; // r10d
  _QWORD *v87; // r11
  unsigned __int64 v88; // r12
  __int64 v89; // rax
  _QWORD *v90; // r13
  size_t v91; // rdx
  _BYTE *v92; // rax
  size_t v93; // rdx
  bool v94; // zf
  unsigned int v95; // esi
  __int64 v96; // rax
  __int64 v97; // rbp
  __int64 v98; // r13
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rax
  int v102; // eax
  char *v103; // r15
  size_t v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rbx
  __int64 v108; // r8
  __int64 v109; // r9
  void *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rbp
  __int64 v115; // r8
  __int64 v116; // r9
  void *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r12
  void *v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rbp
  __int64 v129; // r8
  __int64 v130; // r9
  void *v131; // rax
  _QWORD *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rbp
  __int64 v136; // r8
  __int64 v137; // r9
  void *v138; // rax
  _QWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rbp
  __int64 v143; // r8
  __int64 v144; // r9
  void *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rbp
  __int64 v150; // r8
  __int64 v151; // r9
  void *v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  _BYTE *v156; // rsi
  __int64 v157; // rdx
  __int8 v158; // dl
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // r13
  void *v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // r13
  void *v171; // rax
  _QWORD *v172; // rax
  size_t v173; // rdx
  _BYTE *v174; // rax
  size_t v175; // rdx
  _DWORD *v176; // rax
  _DWORD *v177; // rdx
  __int64 v178; // rax
  __int64 v179; // [rsp+0h] [rbp-238h] BYREF
  char *v180; // [rsp+8h] [rbp-230h] BYREF
  __int64 v181; // [rsp+10h] [rbp-228h]
  __int64 *v182; // [rsp+18h] [rbp-220h]
  unsigned int v183; // [rsp+24h] [rbp-214h]
  _QWORD *v184; // [rsp+28h] [rbp-210h]
  __int64 v185; // [rsp+30h] [rbp-208h]
  unsigned int v186; // [rsp+38h] [rbp-200h]
  int v187; // [rsp+3Ch] [rbp-1FCh]
  void **p_dest; // [rsp+40h] [rbp-1F8h]
  void **p_ptr; // [rsp+48h] [rbp-1F0h]
  __int64 v190; // [rsp+50h] [rbp-1E8h]
  __int64 **v191; // [rsp+58h] [rbp-1E0h]
  int v192; // [rsp+6Ch] [rbp-1CCh] BYREF
  void *dest; // [rsp+70h] [rbp-1C8h] BYREF
  __m128 v194; // [rsp+78h] [rbp-1C0h] BYREF
  void *v195; // [rsp+90h] [rbp-1A8h] BYREF
  size_t v196; // [rsp+98h] [rbp-1A0h]
  __m128i v197; // [rsp+A0h] [rbp-198h] BYREF
  void *v198; // [rsp+B0h] [rbp-188h] BYREF
  size_t v199; // [rsp+B8h] [rbp-180h]
  _QWORD v200[2]; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v201; // [rsp+D0h] [rbp-168h] BYREF
  _QWORD *v202; // [rsp+D8h] [rbp-160h] BYREF
  unsigned int v203; // [rsp+E0h] [rbp-158h]
  void *ptr; // [rsp+120h] [rbp-118h] BYREF
  __int64 v205; // [rsp+128h] [rbp-110h]
  char v206; // [rsp+130h] [rbp-108h] BYREF
  __m128 src; // [rsp+170h] [rbp-C8h] BYREF
  _QWORD v208[2]; // [rsp+180h] [rbp-B8h] BYREF
  unsigned __int8 *v209[11]; // [rsp+190h] [rbp-A8h] BYREF
  char v210; // [rsp+1E8h] [rbp-50h]
  unsigned int v211; // [rsp+1F0h] [rbp-48h]
  char v212; // [rsp+1F4h] [rbp-44h]

  v187 = a8;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x18 )
    return;
  v201 = 1;
  v8 = &v202;
  p_ptr = &ptr;
  ptr = &v206;
  v205 = 0x800000000LL;
  v9 = (__m128i *)&v202;
  v10 = ((unsigned __int64)((char *)(&v179 + 34) - (char *)&v202) >> 3) + 1;
  if ( &v179 + 34 == (__int64 *)&v202 )
    goto LABEL_6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  do
    *v9++ = si128;
  while ( &(&v202)[2 * (v10 >> 1)] != (_QWORD **)v9 );
  v8 = &(&v202)[v10 & 0xFFFFFFFFFFFFFFFELL];
  if ( (v10 & 0xFFFFFFFFFFFFFFFELL) != v10 )
LABEL_6:
    *v8 = -4096;
  v12 = (_DWORD **)&a5[2 * a6];
  v13 = a5;
  v186 = a4;
  v190 = a3;
  v183 = a2;
  v181 = a1;
  if ( a5 != (_DWORD *)v12 )
  {
    for ( i = (_DWORD **)a5; v12 != i; ++i )
    {
      v19 = *i;
      v198 = v19;
      if ( (unsigned int)(v19[9] - 6) <= 1 )
        continue;
      v20 = v201 & 1;
      if ( (v201 & 1) != 0 )
      {
        v15 = 8;
        a6 = 7;
        v16 = ((unsigned __int8)((unsigned int)v19 >> 9) ^ (unsigned __int8)((unsigned int)v19 >> 4)) & 7;
        v17 = &(&v202)[((unsigned __int8)((unsigned int)v19 >> 9) ^ (unsigned __int8)((unsigned int)v19 >> 4)) & 7];
        v18 = &v202;
        a5 = (_DWORD *)*v17;
        if ( v19 != (_DWORD *)*v17 )
          goto LABEL_136;
      }
      else
      {
        v21 = v203;
        if ( !v203 )
        {
          src.m128_u64[0] = 0;
          v53 = ((unsigned int)v201 >> 1) + 1;
          goto LABEL_71;
        }
        a6 = v203 - 1;
        v18 = v202;
        v16 = a6 & (((unsigned int)v19 >> 4) ^ ((unsigned int)v19 >> 9));
        v17 = &v202[v16];
        a5 = (_DWORD *)*v17;
        if ( v19 != (_DWORD *)*v17 )
        {
LABEL_136:
          v86 = 1;
          v87 = nullptr;
          if ( a5 == (_DWORD *)-4096LL )
          {
LABEL_137:
            src.m128_u64[0] = (unsigned __int64)v17;
            v53 = ((unsigned int)v201 >> 1) + 1;
            if ( v20 )
            {
              v54 = 24;
              LODWORD(v21) = 8;
LABEL_72:
              v55 = (unsigned int)(4 * v53);
              if ( v54 <= (unsigned int)v55 )
              {
                v95 = 2 * v21;
              }
              else
              {
                v55 = (unsigned int)(v21 - HIDWORD(v201) - v53);
                if ( (unsigned int)v55 > (unsigned int)v21 >> 3 )
                {
LABEL_74:
                  v56 = (_QWORD *)src.m128_u64[0];
                  LODWORD(v201) = v201 & 1 | (2 * v53);
                  if ( *(_QWORD *)src.m128_u64[0] != -4096 )
                    --HIDWORD(v201);
                  *(_QWORD *)src.m128_u64[0] = v19;
                  if ( (v201 & 1) != 0 )
                  {
                    v58 = 8;
                    v57 = &v202;
                  }
                  else
                  {
                    v57 = v202;
                    v58 = v203;
                  }
                  sub_A8BB00(&src, v56, &v57[v58], (__int64)&v201, 1);
                  v59 = (unsigned int)v205;
                  a5 = v198;
                  v60 = (unsigned int)v205 + 1LL;
                  if ( v60 > HIDWORD(v205) )
                  {
                    v180 = (char *)v198;
                    sub_2237220(p_ptr, p_ptr + 2, v60, 8);
                    v59 = (unsigned int)v205;
                    a5 = v180;
                  }
                  *((_QWORD *)ptr + v59) = a5;
                  LODWORD(v205) = v205 + 1;
                  continue;
                }
                v95 = v21;
              }
              sub_1A5DDF0((__int64)&v201, v95, v53, v55, (__int64)a5, a6);
              sub_1A3B5E0((__int64)&v201, (__int64 *)&v198, &src);
              v19 = v198;
              LODWORD(v53) = ((unsigned int)v201 >> 1) + 1;
              goto LABEL_74;
            }
            LODWORD(v21) = v203;
LABEL_71:
            v54 = 3 * v21;
            goto LABEL_72;
          }
          while ( 1 )
          {
            if ( a5 == (_DWORD *)-8192LL && !v87 )
              v87 = v17;
            v16 = a6 & (v86 + v16);
            LODWORD(v180) = v86 + 1;
            v17 = &v18[v16];
            a5 = (_DWORD *)*v17;
            if ( v19 == (_DWORD *)*v17 )
              break;
            if ( a5 == (_DWORD *)-4096LL )
            {
              if ( v87 )
                v17 = v87;
              goto LABEL_137;
            }
            v86 = (int)v180;
          }
          if ( !v20 )
          {
            v18 = v202;
            v21 = v203;
            goto LABEL_16;
          }
          v15 = 8;
          v18 = &v202;
          goto LABEL_10;
        }
LABEL_16:
        v15 = v21;
      }
LABEL_10:
      sub_A8BB00(&src, v17, &v18[v15], (__int64)&v201, 1);
    }
  }
  v194.m128_u64[0] = 0;
  p_dest = &dest;
  dest = &v194.m128_u16[4];
  v194.m128_i8[8] = 0;
  v22 = sub_141E640(*(_QWORD **)(v181 + 240), v183, v186);
  if ( !v22 )
    goto LABEL_43;
  v23 = *(_QWORD *)(v181 + 272);
  v24 = v183 & 0x7FFFFFFF;
  if ( (v183 & 0x7FFFFFFF) >= *(_DWORD *)(v23 + 476) && v24 < *(_DWORD *)(v23 + 480) )
    v25 = *(_DWORD *)(v23 + 472);
  else
    v25 = sub_101D590(*(_QWORD *)(v181 + 272), v24);
  src.m128_i8[0] = 0;
  if ( (unsigned int)(v25 + 1) <= 1 )
    goto LABEL_43;
  if ( v25 < 0 )
  {
    v88 = (unsigned int)(-2 - v25);
    v89 = *(_QWORD *)(*(_QWORD *)(v23 + 320) + 8LL * ((unsigned int)(-2 - v25) >> 6));
    if ( _bittest64(&v89, v88) )
    {
      v90 = (_QWORD *)(*(_QWORD *)(v23 + 272) + 8 * ((unsigned __int64)(int)v88 >> 5));
      if ( *v90 )
      {
        v26 = *v90 + 24 * (v88 & 0x1F);
        goto LABEL_24;
      }
      v176 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v23 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v90 = v176;
      v177 = v176 + 192;
      do
      {
        *v176 = 0;
        v176 += 6;
        *((_OWORD *)v176 - 1) = 0;
        *((_QWORD *)v176 - 1) = 0;
      }
      while ( v177 != v176 );
      v158 = src.m128_i8[0];
      v26 = *v90 + 24 * (v88 & 0x1F);
    }
    else
    {
      v26 = sub_101F930(v23, v88, &src);
      v158 = src.m128_i8[0];
    }
    if ( v158 )
      goto LABEL_43;
    goto LABEL_24;
  }
  v26 = *(_QWORD *)(v23 + 184) + 24LL * (unsigned int)v25;
LABEL_24:
  if ( v26 && *(char *)(v26 + 3) >= 0 )
  {
    v27 = *(_QWORD *)((*(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    do
    {
      if ( !v27 )
        goto LABEL_43;
      v28 = *(_QWORD *)(v27 + 8);
      if ( !v28 )
        goto LABEL_43;
      v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v28 & 4) != 0 );
    if ( !v27 )
      goto LABEL_43;
    v29 = *(void ***)v27;
    v30 = *(_QWORD *)(v27 + 8);
    LOBYTE(v192) = 0;
    sub_13C0E80((__int64)&v198, *(_QWORD *)(*(_QWORD *)(v181 + 240) + 104LL), v22, v29, v30, (bool *)&v192);
    src.m128_u64[0] = (unsigned __int64)v208;
    LOBYTE(v208[0]) = 0;
    v31 = (_BYTE)v192 == 0 ? 34 : 62;
    src.m128_u64[1] = 0;
    v32 = -((_BYTE)v192 == 0);
    sub_995C30((__int64)&src, v199 + 1);
    sub_998CE0(&src, src.m128_u64[1], 0, 1u, (v32 & 0xE6) + 60);
    sub_9EE560(&src, v198, v199);
    v33 = (__m128i *)sub_998CE0(&src, src.m128_u64[1], 0, 1u, v31);
    v195 = &v197;
    if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
    {
      v197 = _mm_loadu_si128(v33 + 1);
    }
    else
    {
      v195 = (void *)v33->m128i_i64[0];
      v197.m128i_i64[0] = v33[1].m128i_i64[0];
    }
    v196 = v33->m128i_u64[1];
    v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
    v33->m128i_i64[1] = 0;
    v33[1].m128i_i8[0] = 0;
    if ( (_QWORD *)src.m128_u64[0] != v208 )
      operator delete((void *)src.m128_u64[0]);
    if ( v198 != v200 )
      operator delete(v198);
    v34 = (__m128i *)dest;
    v35 = v196;
    if ( v195 == &v197 )
    {
      if ( v196 )
      {
        if ( v196 == 1 )
          *(_BYTE *)dest = v197.m128i_i8[0];
        else
          memcpy(dest, v195, v196);
        v35 = v196;
        v34 = (__m128i *)dest;
      }
      v194.m128_u64[0] = v35;
      v34->m128i_i8[v35] = 0;
      v34 = (__m128i *)v195;
      goto LABEL_41;
    }
    if ( dest == p_dest + 2 )
    {
      v180 = (char *)v197.m128i_i64[0];
      dest = v195;
      v194 = _mm_loadh_ps((const double *)&v180);
    }
    else
    {
      v180 = (char *)v197.m128i_i64[0];
      v36 = v194.m128_i64[1];
      dest = v195;
      v194 = _mm_loadh_ps((const double *)&v180);
      if ( v34 )
      {
        v195 = v34;
        v197.m128i_i64[0] = v36;
        goto LABEL_41;
      }
    }
    v34 = &v197;
    v195 = &v197;
LABEL_41:
    v196 = 0;
    v34->m128i_i8[0] = 0;
    if ( v195 != &v197 )
      operator delete(v195);
  }
LABEL_43:
  if ( v194.m128_u64[0] || !(_DWORD)v205 )
  {
    v37 = (__int64 *)(v181 + 8);
    sub_168B9F0((__int64)&src, (__int64 *)(v181 + 8), v183, 0x1078u, 0);
    if ( v210 )
    {
      sub_AE9DF0(v209, a7, 2u);
    }
    else
    {
      if ( !v212 )
        goto LABEL_56;
      v40 = sub_168B9E0(&src);
      v43 = (void *)v208[0];
      if ( v208[0] )
        v43 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
      v198 = v43;
      v44 = sub_1587BC0(v40, (__int64 *)&v198, v38, v39, v41, v42);
      sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v211 + 8), a7, 2u);
    }
    if ( v210 )
    {
      sub_AE9DF0(v209, v190, 0xAu);
    }
    else
    {
      if ( !v212 )
        goto LABEL_56;
      v128 = sub_168B9E0(&src);
      v131 = (void *)v208[0];
      if ( v208[0] )
        v131 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
      v198 = v131;
      v132 = sub_1587BC0(v128, (__int64 *)&v198, v126, v127, v129, v130);
      sub_AE9DF0((unsigned __int8 **)(*v132 + 32LL * v211 + 8), v190, 0xAu);
    }
    v45 = v194.m128_u64[0] != 0;
    if ( v210 )
    {
      sub_AE9DF0(v209, v45, 2u);
LABEL_54:
      if ( v210 )
      {
        sub_AEC220(v209, dest, v194.m128_i64[0]);
      }
      else if ( v212 )
      {
        v114 = sub_168B9E0(&src);
        v117 = (void *)v208[0];
        if ( v208[0] )
          v117 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
        v198 = v117;
        v118 = sub_1587BC0(v114, (__int64 *)&v198, v112, v113, v115, v116);
        sub_AEC220((unsigned __int8 **)(*v118 + 32LL * v211 + 8), dest, v194.m128_i64[0]);
      }
      goto LABEL_56;
    }
    if ( v212 )
    {
      v123 = sub_168B9E0(&src);
      v124 = (void *)v208[0];
      if ( v208[0] )
        v124 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
      v198 = v124;
      v125 = sub_1587BC0(v123, (__int64 *)&v198, v119, v120, v121, v122);
      sub_AE9DF0((unsigned __int8 **)(*v125 + 32LL * v211 + 8), v45, 2u);
      goto LABEL_54;
    }
LABEL_56:
    sub_15F7200(&src);
    sub_168B9F0((__int64)&src, v37, v186, 0x1926u, 0);
    if ( v210 )
    {
      sub_AE9DF0(v209, a7, 2u);
    }
    else if ( v212 )
    {
      v48 = sub_168B9E0(&src);
      v51 = (void *)v208[0];
      if ( v208[0] )
        v51 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
      v198 = v51;
      v52 = sub_1587BC0(v48, (__int64 *)&v198, v46, v47, v49, v50);
      sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v211 + 8), a7, 2u);
    }
    sub_15F7200(&src);
    if ( (_BYTE)v187 )
      sub_1A7E280(v181, v183, *v13);
    goto LABEL_63;
  }
  v185 = (unsigned int)v205;
  v191 = (__int64 **)ptr;
  if ( (unsigned int)v205 == 1 )
  {
    v82 = (__int64 *)(v181 + 8);
    sub_168B9F0((__int64)&src, (__int64 *)(v181 + 8), v183, 0x1077u, 0);
    v192 = a7;
    v96 = sub_1587D10((__int64)&src, &v192);
    v97 = v96;
    if ( *(_BYTE *)(v96 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v96 + 32), v190, 0xAu);
    }
    else if ( *(_BYTE *)(v96 + 132) )
    {
      v163 = sub_168B9E0((_QWORD *)v96);
      v164 = *(void **)(v97 + 16);
      if ( v164 )
        v164 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v164 + 32LL))(*(_QWORD *)(v97 + 16));
      v198 = v164;
      v165 = sub_1587BC0(v163, (__int64 *)&v198, v159, v160, v161, v162);
      sub_AE9DF0((unsigned __int8 **)(*v165 + 32LL * *(unsigned int *)(v97 + 128) + 8), v190, 0xAu);
    }
    v98 = (__int64)*v191;
    v99 = *((_DWORD *)*v191 + 9);
    if ( !v99 )
    {
      sub_FEEE60((__int64)&v198, *v191, 0);
      goto LABEL_168;
    }
    if ( v99 == 8 )
      v98 = sub_FEEE40((__int64)*v191);
    v100 = 0;
    v101 = *(unsigned int *)(v181 + 10152);
    if ( (_DWORD)v101 )
      v100 = *(_QWORD *)(*(_QWORD *)(v181 + 10144) + 48 * v101 - 40);
    if ( sub_A956B0(*(_QWORD *)(v181 + 248), v98, v100) )
    {
      v155 = sub_FEEE40(v98);
      v156 = *(_BYTE **)v155;
      if ( *(_QWORD *)v155 )
      {
        v157 = *(_QWORD *)(v155 + 8);
        v198 = v200;
        sub_1A38CC0(&v198, v156, (__int64)&v156[v157]);
        goto LABEL_168;
      }
    }
    else
    {
      v102 = *(_DWORD *)(v98 + 36);
      if ( ((v102 - 6) & 0xFFFFFFFD) == 0 )
      {
        v103 = "<global>";
        v104 = j__strlen("<global>");
        goto LABEL_167;
      }
      if ( (unsigned int)(v102 - 4) <= 1 )
      {
        v173 = *(_QWORD *)(v98 + 8);
        v103 = *(char **)v98;
        if ( v173 )
        {
          v174 = memchr(*(const void **)v98, 58, v173);
          v175 = v174 - v103;
          v94 = v174 == nullptr;
          v104 = -1;
          if ( !v94 )
            v104 = v175;
          goto LABEL_167;
        }
        v104 = -1;
      }
      else if ( v102 == 7 )
      {
        v178 = sub_FEEE40(v98);
        v103 = *(char **)v178;
        v104 = *(_QWORD *)(v178 + 8);
      }
      else
      {
        v103 = *(char **)v98;
        v104 = *(_QWORD *)(v98 + 8);
      }
      if ( v103 )
      {
LABEL_167:
        v198 = v200;
        sub_1A38CC0(&v198, v103, (__int64)&v103[v104]);
LABEL_168:
        if ( *(_BYTE *)(v97 + 120) )
        {
          sub_AEC220((unsigned __int8 **)(v97 + 32), v198, v199);
        }
        else if ( *(_BYTE *)(v97 + 132) )
        {
          v170 = sub_168B9E0((_QWORD *)v97);
          v171 = *(void **)(v97 + 16);
          if ( v171 )
            v171 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v171 + 32LL))(*(_QWORD *)(v97 + 16));
          v195 = v171;
          v172 = sub_1587BC0(v170, (__int64 *)&v195, v166, v167, v168, v169);
          sub_AEC220((unsigned __int8 **)(*v172 + 32LL * *(unsigned int *)(v97 + 128) + 8), v198, v199);
        }
        if ( v198 != v200 )
          operator delete(v198);
        sub_15F7200(&src);
        goto LABEL_117;
      }
    }
    LOBYTE(v200[0]) = 0;
    v198 = v200;
    v199 = 0;
    goto LABEL_168;
  }
  v61 = (__int64 *)ptr;
  v62 = 0;
  v63 = nullptr;
  v199 = 0;
  v198 = v200;
  LOBYTE(v200[0]) = 0;
  v182 = (__int64 *)((char *)ptr + 8 * v185);
  v184 = v208;
  while ( 1 )
  {
    v180 = v63;
    v64 = *v61;
    v65 = j__strlen("\n        ");
    if ( v65 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v180 )
      std::__throw_length_error("basic_string::append");
    v66 = v198;
    v67 = &v180[v65];
    v68 = v198 == v200 ? 15LL : v200[0];
    if ( (unsigned __int64)v67 > v68 )
    {
      sub_998B30((__int64)&v198, (size_t)v180, 0, "\n        ", v65);
      v66 = v198;
    }
    else if ( v65 )
    {
      v69 = (char *)v198 + (_QWORD)v180;
      if ( v65 == 1 )
        *v69 = 10;
      else
        memcpy(v69, "\n        ", v65);
      v66 = v198;
    }
    ++v62;
    v199 = (size_t)v67;
    v67[(_QWORD)v66] = 0;
    if ( v62 == 5 && v185 != 5 )
      break;
    v70 = *(_DWORD *)(v64 + 36);
    if ( v70 )
    {
      if ( v70 == 8 )
        v64 = sub_FEEE40(v64);
      v71 = 0;
      v72 = *(unsigned int *)(v181 + 10152);
      if ( (_DWORD)v72 )
        v71 = *(_QWORD *)(*(_QWORD *)(v181 + 10144) + 48 * v72 - 40);
      if ( sub_A956B0(*(_QWORD *)(v181 + 248), v64, v71) )
      {
        v73 = sub_FEEE40(v64);
        v74 = *(_BYTE **)v73;
        if ( *(_QWORD *)v73 )
        {
          v75 = (__int64)&v74[*(_QWORD *)(v73 + 8)];
          src.m128_u64[0] = (unsigned __int64)v184;
          sub_1A38CC0(&src, v74, v75);
          v76 = src.m128_u64[1];
          v77 = (_BYTE *)src.m128_u64[0];
          goto LABEL_104;
        }
      }
      else
      {
        v83 = *(_DWORD *)(v64 + 36);
        if ( ((v83 - 6) & 0xFFFFFFFD) == 0 )
        {
          v84 = j__strlen("<global>");
          v85 = "<global>";
LABEL_124:
          src.m128_u64[0] = (unsigned __int64)v184;
          sub_1A38CC0(&src, v85, (__int64)&v85[v84]);
          v76 = src.m128_u64[1];
          v77 = (_BYTE *)src.m128_u64[0];
          goto LABEL_104;
        }
        if ( (unsigned int)(v83 - 4) <= 1 )
        {
          v91 = *(_QWORD *)(v64 + 8);
          v85 = *(char **)v64;
          if ( v91 )
          {
            v180 = *(char **)v64;
            v92 = memchr(v180, 58, v91);
            v85 = v180;
            v93 = v92 - v180;
            v94 = v92 == nullptr;
            v84 = -1;
            if ( !v94 )
              v84 = v93;
            goto LABEL_124;
          }
          v84 = -1;
        }
        else if ( v83 == 7 )
        {
          v154 = sub_FEEE40(v64);
          v85 = *(char **)v154;
          v84 = *(_QWORD *)(v154 + 8);
        }
        else
        {
          v85 = *(char **)v64;
          v84 = *(_QWORD *)(v64 + 8);
        }
        if ( v85 )
          goto LABEL_124;
      }
      v77 = v184;
      v76 = 0;
      LOBYTE(v208[0]) = 0;
      src = (__m128)(unsigned __int64)v184;
    }
    else
    {
      sub_FEEE60((__int64)&src, (__int64 *)v64, 0);
      v76 = src.m128_u64[1];
      v77 = (_BYTE *)src.m128_u64[0];
    }
LABEL_104:
    v78 = v198;
    v79 = v199 + v76;
    if ( v198 == v200 )
      v80 = 15;
    else
      v80 = v200[0];
    if ( v79 > v80 )
    {
      sub_998B30((__int64)&v198, v199, 0, v77, v76);
      v78 = v198;
    }
    else if ( v76 )
    {
      v81 = (char *)v198 + v199;
      if ( v76 == 1 )
        *v81 = *v77;
      else
        memcpy(v81, v77, v76);
      v78 = v198;
    }
    v199 = v79;
    v78[v79] = 0;
    if ( (_QWORD *)src.m128_u64[0] == v208 )
    {
      if ( v182 == ++v61 )
        goto LABEL_113;
    }
    else
    {
      operator delete((void *)src.m128_u64[0]);
      if ( v182 == ++v61 )
        goto LABEL_113;
    }
    v63 = (char *)v199;
  }
  sub_9EE7C0(&v198, "[...]");
LABEL_113:
  v82 = (__int64 *)(v181 + 8);
  sub_168B9F0((__int64)&src, (__int64 *)(v181 + 8), v183, 0x1079u, 0);
  if ( v210 )
  {
    sub_AE9DF0(v209, a7, 2u);
  }
  else
  {
    if ( !v212 )
      goto LABEL_115;
    v135 = sub_168B9E0(&src);
    v138 = (void *)v208[0];
    if ( v208[0] )
      v138 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
    v195 = v138;
    v139 = sub_1587BC0(v135, (__int64 *)&v195, v133, v134, v136, v137);
    sub_AE9DF0((unsigned __int8 **)(*v139 + 32LL * v211 + 8), a7, 2u);
  }
  if ( v210 )
  {
    sub_AE9DF0(v209, v190, 0xAu);
  }
  else
  {
    if ( !v212 )
      goto LABEL_115;
    v149 = sub_168B9E0(&src);
    v152 = (void *)v208[0];
    if ( v208[0] )
      v152 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
    v195 = v152;
    v153 = sub_1587BC0(v149, (__int64 *)&v195, v147, v148, v150, v151);
    sub_AE9DF0((unsigned __int8 **)(*v153 + 32LL * v211 + 8), v190, 0xAu);
  }
  if ( v210 )
  {
    sub_AEC220(v209, v198, v199);
  }
  else if ( v212 )
  {
    v142 = sub_168B9E0(&src);
    v145 = (void *)v208[0];
    if ( v208[0] )
      v145 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
    v195 = v145;
    v146 = sub_1587BC0(v142, (__int64 *)&v195, v140, v141, v143, v144);
    sub_AEC220((unsigned __int8 **)(*v146 + 32LL * v211 + 8), v198, v199);
  }
LABEL_115:
  sub_15F7200(&src);
  if ( v198 != v200 )
    operator delete(v198);
LABEL_117:
  sub_168B9F0((__int64)&src, v82, v186, 0x1926u, 0);
  if ( v210 )
  {
    sub_AE9DF0(v209, a7, 2u);
  }
  else if ( v212 )
  {
    v107 = sub_168B9E0(&src);
    v110 = (void *)v208[0];
    if ( v208[0] )
      v110 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v208[0] + 32LL))(v208[0]);
    v198 = v110;
    v111 = sub_1587BC0(v107, (__int64 *)&v198, v105, v106, v108, v109);
    sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * v211 + 8), a7, 2u);
  }
  sub_15F7200(&src);
  if ( (_BYTE)v187 )
    sub_1A7E280(v181, v183, *v191);
LABEL_63:
  if ( dest != p_dest + 2 )
    operator delete(dest);
  if ( (v201 & 1) == 0 )
    operator delete(v202, 8LL * v203, 8);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
