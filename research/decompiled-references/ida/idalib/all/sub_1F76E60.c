void __fastcall sub_1F76E60(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  size_t v4; // rax
  __int64 v5; // rdi
  size_t v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r15
  char *v16; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // cl
  unsigned int v22; // esi
  int v23; // eax
  bool v24; // si
  __int64 v25; // rax
  char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rax
  void *v29; // rax
  void **p_ptr; // rbp
  void *v31; // rax
  __int64 (__fastcall *v32)(_QWORD); // rdx
  _QWORD *v33; // rdi
  size_t **v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  size_t *v37; // rbp
  size_t **v38; // rbx
  size_t *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // r14
  unsigned __int64 v43; // rsi
  __int64 *v44; // rdx
  __int64 v45; // rdi
  void **v46; // rbx
  void *v47; // rdi
  char *v48; // rax
  _QWORD *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 i; // rdx
  unsigned __int64 v52; // rdx
  _BYTE *v53; // rsi
  __int64 v54; // r13
  size_t *v55; // r14
  __int64 v56; // r15
  __int64 v57; // r13
  __int64 v58; // rbx
  __int64 v59; // r14
  char *v60; // rsi
  __int64 v61; // rdi
  size_t v62; // rax
  unsigned int v63; // ebx
  void *v64; // r8
  __int64 v65; // rdi
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 j; // rdx
  unsigned __int64 v70; // rdx
  int v71; // r8d
  _QWORD *v72; // rax
  int v73; // edx
  __int64 v74; // r8
  size_t *v75; // rdi
  _DWORD *v76; // rax
  __int64 v77; // rbp
  __int64 v78; // rdi
  __int64 v79; // r14
  _QWORD *v80; // r15
  __int64 (__fastcall *v81)(__int64); // rax
  __int64 v82; // rax
  void *v83; // rax
  char *v84; // rsi
  void *v85; // rsi
  size_t *v86; // r14
  __m128i si128; // xmm4
  size_t v88; // rbp
  bool v89; // cf
  size_t *v90; // r14
  size_t m; // rax
  unsigned __int64 v92; // rax
  size_t v93; // rbp
  size_t v94; // rbp
  __int64 v95; // r14
  __int64 v96; // r8
  void *v97; // r15
  size_t *v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  size_t v101; // rdx
  size_t v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  size_t v106; // rax
  __int64 v107; // rdi
  char *v108; // rdi
  char *v109; // rdi
  int v110; // eax
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r15
  int v116; // r11d
  _QWORD *v117; // rcx
  _QWORD *v118; // rdx
  __int64 *v119; // r8
  __int64 v120; // rsi
  unsigned int v121; // ecx
  __int64 v122; // rdx
  __int64 v123; // rdi
  int v124; // ecx
  _QWORD *v125; // rcx
  int v126; // esi
  int v127; // esi
  unsigned int v128; // r10d
  size_t *v129; // r9
  int v130; // edi
  size_t **v131; // r8
  int v132; // r10d
  int v133; // r10d
  __int64 v134; // r9
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  int v139; // r11d
  _QWORD *v140; // rcx
  _QWORD *v141; // rdx
  __int64 *v142; // r8
  __int64 v143; // rsi
  unsigned int v144; // ecx
  __int64 v145; // rdx
  __int64 v146; // rdi
  int v147; // ecx
  _QWORD *v148; // rcx
  int v149; // r8d
  int v150; // r8d
  __int64 v151; // rsi
  size_t *v152; // r10
  int v153; // edi
  size_t **v154; // r9
  __int64 v155; // rcx
  _QWORD *v156; // rdx
  int v157; // r10d
  __int64 v158; // r9
  __int64 v159; // rcx
  _QWORD *v160; // rdx
  __int64 v161; // [rsp-10h] [rbp-358h]
  unsigned __int64 v162; // [rsp-8h] [rbp-350h]
  void *v163; // [rsp+10h] [rbp-338h]
  unsigned int v164; // [rsp+20h] [rbp-328h]
  void *v165; // [rsp+28h] [rbp-320h]
  unsigned int v166; // [rsp+38h] [rbp-310h]
  unsigned int v167; // [rsp+3Ch] [rbp-30Ch]
  void *v168; // [rsp+40h] [rbp-308h]
  void *v169; // [rsp+48h] [rbp-300h]
  __int64 v170; // [rsp+50h] [rbp-2F8h]
  _DWORD *v171; // [rsp+58h] [rbp-2F0h]
  __int64 v172; // [rsp+58h] [rbp-2F0h]
  __int64 v173; // [rsp+58h] [rbp-2F0h]
  unsigned int v174; // [rsp+58h] [rbp-2F0h]
  int v175; // [rsp+58h] [rbp-2F0h]
  unsigned int v176; // [rsp+58h] [rbp-2F0h]
  __int64 *v177; // [rsp+58h] [rbp-2F0h]
  __int64 v178; // [rsp+60h] [rbp-2E8h]
  __int64 v179; // [rsp+68h] [rbp-2E0h]
  __int64 v180; // [rsp+70h] [rbp-2D8h]
  unsigned int v181; // [rsp+78h] [rbp-2D0h]
  int k; // [rsp+78h] [rbp-2D0h]
  __int128 v183; // [rsp+80h] [rbp-2C8h] BYREF
  __int128 v184; // [rsp+90h] [rbp-2B8h] BYREF
  void *v185[2]; // [rsp+A0h] [rbp-2A8h] BYREF
  void *v186; // [rsp+B0h] [rbp-298h]
  void *v187[2]; // [rsp+C0h] [rbp-288h] BYREF
  void *v188; // [rsp+D0h] [rbp-278h]
  void *v189[2]; // [rsp+E0h] [rbp-268h] BYREF
  void *v190; // [rsp+F0h] [rbp-258h]
  void *v191; // [rsp+100h] [rbp-248h] BYREF
  void *v192; // [rsp+108h] [rbp-240h]
  void *v193; // [rsp+110h] [rbp-238h]
  void *v194; // [rsp+118h] [rbp-230h]
  void *v195[2]; // [rsp+120h] [rbp-228h] BYREF
  _WORD v196[16]; // [rsp+130h] [rbp-218h] BYREF
  __m128i v197; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 v198; // [rsp+160h] [rbp-1E8h]
  size_t v199; // [rsp+168h] [rbp-1E0h]
  __int16 v200; // [rsp+170h] [rbp-1D8h]
  __int64 v201[2]; // [rsp+180h] [rbp-1C8h] BYREF
  __int128 v202; // [rsp+190h] [rbp-1B8h]
  __int128 v203; // [rsp+1A0h] [rbp-1A8h]
  __int128 v204; // [rsp+1B0h] [rbp-198h]
  __int64 v205; // [rsp+1C0h] [rbp-188h]
  _BYTE s2[24]; // [rsp+1D0h] [rbp-178h] BYREF
  char v207[8]; // [rsp+1E8h] [rbp-160h] BYREF
  __int16 v208; // [rsp+1F0h] [rbp-158h]
  void *ptr; // [rsp+270h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+278h] [rbp-D0h]
  _QWORD v211[24]; // [rsp+288h] [rbp-C0h] BYREF

  v2 = a1;
  sub_A25970(*(_QWORD *)(a1 + 16), 0x10u, 4u);
  sub_1F6B880(&v183);
  sub_A1FE00(v183, 1, 1);
  sub_A1FE00(v183, 6, 4);
  sub_A1FE00(v183, 12, 4);
  sub_A1FE00(v183, 32, 4);
  sub_A1FE00(v183, 1, 2);
  sub_A1FE00(v183, 1, 2);
  sub_A1FE00(v183, 1, 2);
  sub_A1FE00(v183, 1, 2);
  sub_A1FE00(v183, 16, 4);
  sub_A1FE00(v183, 0, 10);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *((_QWORD *)&v183 + 1);
  ptr = (void *)v183;
  v183 = 0;
  n[0] = v4;
  v166 = sub_A22F90(v3, (__int64 *)&ptr);
  if ( n[0] )
    sub_4343A0((volatile signed __int32 *)n[0]);
  sub_1F6B880(&v184);
  sub_A1FE00(v184, 2, 1);
  sub_A1FE00(v184, 32, 2);
  sub_A1FE00(v184, 32, 2);
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *((_QWORD *)&v184 + 1);
  ptr = (void *)v184;
  v184 = 0;
  n[0] = v6;
  v167 = sub_A22F90(v5, (__int64 *)&ptr);
  if ( n[0] )
    sub_4343A0((volatile signed __int32 *)n[0]);
  v7 = *(_QWORD *)(v2 + 16);
  v8 = 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
  v10 = sub_A1F730(v7);
  v186 = nullptr;
  v11 = v10 + v9;
  v12 = *(unsigned int *)(v7 + 48);
  v13 = *(_DWORD *)(a2 + 192);
  *(_OWORD *)v185 = 0;
  *(_OWORD *)v187 = 0;
  v188 = nullptr;
  v170 = v12 + 8 * v11;
  if ( v13 != 1 )
  {
    v14 = v2;
    while ( 1 )
    {
      v17 = *(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v8;
      if ( *(char *)(v17 + 3) < 0 )
        goto LABEL_9;
      v18 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_QWORD *)(v18 + 8) )
        goto LABEL_9;
      v19 = *(_QWORD *)(*(_QWORD *)(v14 + 3216) + 8LL * ((unsigned int)v8 >> 6));
      if ( !_bittest64(&v19, v8) )
        goto LABEL_9;
      *(_QWORD *)s2 = *(_QWORD *)(v18 + 8);
      v20 = *(_QWORD *)(v17 + 16) & 7LL;
      s2[8] = (*(_QWORD *)(v17 + 16) & 7) != 0 && (*(_QWORD *)(v17 + 16) & 7) != 3;
      v21 = *(_BYTE *)(v18 + 48) >> 2;
      s2[10] = *(_BYTE *)(v18 + 48) & 1;
      s2[9] = v21 & 1;
      v22 = *(_DWORD *)(v17 + 8) & 0x7FFFFFFF;
      if ( v22 < *(_DWORD *)(a2 + 476) || v22 >= *(_DWORD *)(a2 + 480) )
      {
        v23 = sub_101D590(a2, v22);
        v24 = 1;
        v20 = *(_QWORD *)(v17 + 16) & 7LL;
        if ( v23 <= 0 )
          goto LABEL_16;
      }
      else
      {
        v23 = *(_DWORD *)(a2 + 472);
        v24 = 1;
        if ( v23 <= 0 )
          goto LABEL_16;
      }
      v24 = ((*(_QWORD *)(*(_QWORD *)(v14 + 3216) + 8LL * ((unsigned int)v23 >> 6)) >> v23) & 1) == 0;
LABEL_16:
      v25 = *(_QWORD *)(v14 + 40);
      s2[11] = v24;
      *(_QWORD *)&s2[16] = 0;
      s2[12] = (unsigned int)(v20 - 3) <= 1;
      if ( (*(_BYTE *)(**(_QWORD **)(v25 + 104) + 625LL) & 1) != 0 )
      {
        if ( *(_QWORD *)v18 )
        {
          sub_2230760(&ptr, *(_QWORD *)v18);
          *(_QWORD *)&s2[16] = sub_2287CD0(ptr, n[0]);
        }
        else
        {
          sub_FC70B0((__int64)&ptr, *(_QWORD *)(v25 + 48), 0, 935);
          v50 = *(_QWORD *)s2;
          for ( i = *(_QWORD *)(*(_QWORD *)s2 + 8LL); i; i = *(_QWORD *)(v52 + 8) )
          {
            if ( (i & 4) == 0 )
              break;
            v52 = i & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v52 )
              break;
            v50 = v52;
          }
          sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)(v50 + 32), *(_QWORD *)v50);
          sub_AEA040((__int64)&ptr);
        }
      }
      if ( s2[8] )
      {
        if ( v187[1] == v188 )
        {
          sub_1F6B4D0((__int64)v187, (const __m128i *)v187[1], (const __m128i *)s2);
        }
        else
        {
          v16 = (char *)v187[1] + 24;
          *(__m128i *)v187[1] = _mm_load_si128((const __m128i *)s2);
          *((_QWORD *)v16 - 1) = *(_QWORD *)&s2[16];
          v187[1] = v16;
        }
        goto LABEL_9;
      }
      if ( v185[1] == v186 )
      {
        sub_1F6B4D0((__int64)v185, (const __m128i *)v185[1], (const __m128i *)s2);
LABEL_9:
        v8 = (unsigned int)(v8 + 1);
        if ( (_DWORD)v8 == v13 )
          goto LABEL_22;
      }
      else
      {
        v26 = (char *)v185[1] + 24;
        v8 = (unsigned int)(v8 + 1);
        *(__m128i *)v185[1] = _mm_load_si128((const __m128i *)s2);
        *((_QWORD *)v26 - 1) = *(_QWORD *)&s2[16];
        v185[1] = v26;
        if ( (_DWORD)v8 == v13 )
        {
LABEL_22:
          v2 = v14;
          break;
        }
      }
    }
  }
  v27 = **(_QWORD **)(*(_QWORD *)(v2 + 40) + 104LL);
  v28 = *(_QWORD *)(v27 + 8);
  if ( v28 )
  {
    v53 = *(_BYTE **)v27;
    ptr = v211;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, v53, &v53[v28]);
    LOWORD(v203) = 257;
    v200 = 257;
    v195[0] = "SDKSettings.json";
    v208 = 257;
    v196[8] = 259;
    sub_228A3B0(&ptr, v195, &v197, v201, s2);
    v54 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 80LL);
    sub_FD9C70((__int64)s2, v54, ptr, n[0], 0, 1, 1);
    if ( (s2[8] & 1) != 0 )
    {
      v67 = *(_QWORD *)s2;
      *(_QWORD *)s2 = 0;
      v197.m128i_i64[0] = v67;
      sub_A05760(v201, &v197);
      if ( v197.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v197.m128i_i64[0] + 8LL))(v197.m128i_i64[0]);
      sub_A04D90((__int64 *)s2);
      goto LABEL_60;
    }
    v55 = *(size_t **)s2;
    sub_A04D90((__int64 *)s2);
    if ( !v55 )
    {
LABEL_60:
      if ( ptr != v211 )
        free(ptr);
      goto LABEL_24;
    }
    v56 = *(_QWORD *)(v2 + 40);
    v197.m128i_i64[0] = (__int64)v55;
    v197.m128i_i32[2] = 16777217;
    v197.m128i_i8[12] = 0;
    v198 = 0;
    if ( (*(_BYTE *)(**(_QWORD **)(v56 + 104) + 625LL) & 1) != 0 )
    {
      sub_FD8750((__int64)v201, v54, v55, 0, 1u, 1, 0, 0);
      if ( (v202 & 1) == 0 )
      {
        v57 = v201[0];
        v201[0] = 0;
        sub_2230760(s2, v57);
        v58 = *(_QWORD *)s2;
        v59 = *(_QWORD *)&s2[8];
        sub_FC2AF0(v201);
        v198 = sub_2287CD0(v58, v59);
        goto LABEL_56;
      }
      sub_FC2AF0(v201);
      sub_FC70B0((__int64)s2, *(_QWORD *)(v56 + 48), 0, 935);
      v68 = v197.m128i_i64[0];
      for ( j = *(_QWORD *)(v197.m128i_i64[0] + 8); j; j = *(_QWORD *)(v70 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v70 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v70 )
          break;
        v68 = v70;
      }
      sub_AEC220((unsigned __int8 **)s2, (_BYTE *)(v68 + 32), *(_QWORD *)v68);
      sub_AEA040((__int64)s2);
    }
    v57 = 0;
LABEL_56:
    if ( v187[1] == v188 )
    {
      sub_1F6B4D0((__int64)v187, (const __m128i *)v187[1], &v197);
    }
    else
    {
      v60 = (char *)v187[1] + 24;
      *(__m128i *)v187[1] = _mm_load_si128(&v197);
      *((_QWORD *)v60 - 1) = v198;
      v187[1] = v60;
    }
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
    goto LABEL_60;
  }
LABEL_24:
  v188 = nullptr;
  v29 = v185[0];
  v186 = nullptr;
  v168 = v187[0];
  v165 = v187[1];
  v191 = v187[0];
  v193 = v187[1];
  v169 = v185[0];
  v163 = v185[1];
  v190 = nullptr;
  v192 = v185[0];
  v194 = v185[1];
  v164 = 0;
  *(_OWORD *)v187 = 0;
  *(_OWORD *)v185 = 0;
  *(_OWORD *)v189 = 0;
LABEL_25:
  if ( v163 != v29 || v165 != v191 || v163 != v194 || v165 != v193 )
  {
    p_ptr = &ptr;
    n[0] = 0;
    ptr = sub_1F6A3E0;
    n[1] = (size_t)sub_1F6A400;
    v31 = nullptr;
    v211[0] = 0;
    while ( 1 )
    {
      v32 = (__int64 (__fastcall *)(_QWORD))*p_ptr;
      v33 = (void **)((char *)&v191 + (_QWORD)v31);
      if ( ((unsigned __int8)*p_ptr & 1) != 0 )
        v32 = *(__int64 (__fastcall **)(_QWORD))((char *)v32 + *v33 - 1);
      v34 = (size_t **)v32(v33);
      if ( v34 )
        break;
      p_ptr += 2;
      v31 = p_ptr[1];
    }
    v37 = *v34;
    v38 = v34;
    while ( 1 )
    {
      v39 = (size_t *)v37[1];
      if ( !v39 )
        break;
      v39 = (size_t *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFF8LL);
      v40 = v37[1] & 4;
      v37 = v39;
      if ( !v40 || !v39 )
        goto LABEL_35;
    }
    v37 = nullptr;
LABEL_35:
    v41 = *(unsigned int *)(v2 + 176);
    v42 = *(__int64 **)(v2 + 160);
    if ( !(_DWORD)v41 )
      goto LABEL_199;
    v43 = (unsigned int)(v41 - 1);
    v181 = ((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4);
    v36 = (unsigned int)v43 & v181;
    v44 = &v42[2 * v36];
    v45 = *v44;
    if ( (size_t *)*v44 == v37 )
    {
LABEL_37:
      v171 = v44 + 1;
      if ( !*((_DWORD *)v44 + 2) )
        goto LABEL_107;
      goto LABEL_38;
    }
    v71 = 1;
    v72 = nullptr;
    if ( v45 == -4096 )
      goto LABEL_100;
    while ( 1 )
    {
      if ( !v72 && v45 == -8192 )
        v72 = v44;
      v132 = v71 + 1;
      v35 = (unsigned int)(v36 + v71);
      v36 = (unsigned int)v43 & (unsigned int)v35;
      v44 = &v42[2 * v36];
      v45 = *v44;
      if ( (size_t *)*v44 == v37 )
        goto LABEL_37;
      if ( v45 == -4096 )
        break;
      v71 = v132;
    }
    if ( !v72 )
LABEL_100:
      v72 = v44;
    v73 = *(_DWORD *)(v2 + 168) + 1;
    v35 = (unsigned int)(4 * v73);
    if ( (unsigned int)v35 < 3 * (int)v41 )
    {
      v74 = (unsigned int)v41 >> 3;
      if ( (int)v41 - *(_DWORD *)(v2 + 172) - v73 > (unsigned int)v74 )
      {
        v75 = (size_t *)*v72;
        goto LABEL_104;
      }
      v174 = *(_DWORD *)(v2 + 176);
      v111 = ((((v43 | (v43 >> 1)) >> 2) | v43 | (v43 >> 1)) >> 4) | ((v43 | (v43 >> 1)) >> 2) | v43 | (v43 >> 1);
      v112 = ((((v111 >> 8) | v111) >> 16) | (v111 >> 8) | v111) + 1;
      if ( (unsigned int)v112 < 0x40 )
        LODWORD(v112) = 64;
      *(_DWORD *)(v2 + 176) = v112;
      v113 = sub_22300B0(16LL * (unsigned int)v112, 8, 64, v41, v74, v36);
      *(_QWORD *)(v2 + 160) = v113;
      if ( v42 )
      {
        v114 = *(unsigned int *)(v2 + 176);
        *(_QWORD *)(v2 + 168) = 0;
        v115 = 2LL * v174;
        v116 = v114;
        v117 = (_QWORD *)v113;
        v118 = (_QWORD *)(v113 + 16 * v114);
        if ( (_QWORD *)v113 != v118 )
        {
          do
          {
            *v117 = -4096;
            v117 += 2;
          }
          while ( v118 != v117 );
        }
        v119 = v42;
        v175 = v116 - 1;
        do
        {
          v120 = *v119;
          if ( *v119 != -4096 && v120 != -8192 )
          {
            if ( !v116 )
            {
              *(_QWORD *)&dword_0 = *v119;
              BUG();
            }
            v121 = v175 & (((unsigned int)v120 >> 9) ^ ((unsigned int)v120 >> 4));
            v122 = v113 + 16LL * v121;
            v123 = *(_QWORD *)v122;
            if ( *(_QWORD *)v122 != v120 )
            {
              v133 = 1;
              v134 = 0;
              if ( v123 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v134 && v123 == -8192 )
                    v134 = v122;
                  v121 = v175 & (v133 + v121);
                  v122 = v113 + 16LL * v121;
                  v123 = *(_QWORD *)v122;
                  if ( v120 == *(_QWORD *)v122 )
                    goto LABEL_168;
                  if ( v123 == -4096 )
                    break;
                  ++v133;
                }
                if ( v134 )
                  v122 = v134;
              }
            }
LABEL_168:
            v124 = *((_DWORD *)v119 + 2);
            *(_QWORD *)v122 = v120;
            ++*(_DWORD *)(v2 + 168);
            *(_DWORD *)(v122 + 8) = v124;
          }
          v119 += 2;
        }
        while ( &v42[v115] != v119 );
        operator delete(v42, v115 * 8, 8);
        v125 = *(_QWORD **)(v2 + 160);
        v126 = *(_DWORD *)(v2 + 176);
        v73 = *(_DWORD *)(v2 + 168) + 1;
      }
      else
      {
        v155 = *(unsigned int *)(v2 + 176);
        *(_QWORD *)(v2 + 168) = 0;
        v126 = v155;
        v125 = (_QWORD *)(v113 + 16 * v155);
        if ( (_QWORD *)v113 != v125 )
        {
          v156 = (_QWORD *)v113;
          do
          {
            *v156 = -4096;
            v156 += 2;
          }
          while ( v125 != v156 );
          v125 = (_QWORD *)v113;
        }
        v73 = 1;
      }
      if ( v126 )
      {
        v127 = v126 - 1;
        v75 = v37;
        v128 = v127 & v181;
        v72 = &v125[2 * (v127 & v181)];
        v129 = (size_t *)*v72;
        if ( (size_t *)*v72 != v37 )
        {
          v130 = 1;
          v131 = nullptr;
          if ( v129 != (size_t *)-4096LL )
          {
            while ( 1 )
            {
              if ( !v131 && v129 == (size_t *)-8192LL )
                v131 = (size_t **)v72;
              v128 = v127 & (v130 + v128);
              v72 = &v125[2 * v128];
              v129 = (size_t *)*v72;
              if ( (size_t *)*v72 == v37 )
                goto LABEL_198;
              if ( v129 == (size_t *)-4096LL )
                break;
              ++v130;
            }
            if ( v131 )
            {
              v75 = *v131;
              v72 = v131;
              goto LABEL_104;
            }
          }
          goto LABEL_174;
        }
        goto LABEL_104;
      }
    }
    else
    {
LABEL_199:
      v176 = *(_DWORD *)(v2 + 176);
      v135 = (((((((unsigned int)(2 * v41 - 1) | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v41 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v41 - 1) | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v41 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v41 - 1) | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v41 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v41 - 1) | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v41 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v41 - 1) >> 1);
      v136 = ((v135 >> 16) | v135) + 1;
      if ( (unsigned int)v136 < 0x40 )
        LODWORD(v136) = 64;
      *(_DWORD *)(v2 + 176) = v136;
      v137 = sub_22300B0(16LL * (unsigned int)v136, 8, 64, v41, v35, v36);
      *(_QWORD *)(v2 + 160) = v137;
      if ( v42 )
      {
        v138 = *(unsigned int *)(v2 + 176);
        *(_QWORD *)(v2 + 168) = 0;
        v180 = 2LL * v176;
        v139 = v138;
        v177 = &v42[v180];
        v140 = (_QWORD *)v137;
        v141 = (_QWORD *)(v137 + 16 * v138);
        if ( (_QWORD *)v137 != v141 )
        {
          do
          {
            *v140 = -4096;
            v140 += 2;
          }
          while ( v141 != v140 );
        }
        v142 = v42;
        for ( k = v139 - 1; v177 != v142; v142 += 2 )
        {
          v143 = *v142;
          if ( *v142 != -8192 && v143 != -4096 )
          {
            if ( !v139 )
            {
              *(_QWORD *)&dword_0 = *v142;
              BUG();
            }
            v144 = k & (((unsigned int)v143 >> 9) ^ ((unsigned int)v143 >> 4));
            v145 = v137 + 16LL * v144;
            v146 = *(_QWORD *)v145;
            if ( v143 != *(_QWORD *)v145 )
            {
              v157 = 1;
              v158 = 0;
              if ( v146 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v158 && v146 == -8192 )
                    v158 = v145;
                  v144 = k & (v157 + v144);
                  v145 = v137 + 16LL * v144;
                  v146 = *(_QWORD *)v145;
                  if ( v143 == *(_QWORD *)v145 )
                    goto LABEL_209;
                  if ( v146 == -4096 )
                    break;
                  ++v157;
                }
                if ( v158 )
                  v145 = v158;
              }
            }
LABEL_209:
            v147 = *((_DWORD *)v142 + 2);
            *(_QWORD *)v145 = v143;
            ++*(_DWORD *)(v2 + 168);
            *(_DWORD *)(v145 + 8) = v147;
          }
        }
        operator delete(v42, v180 * 8, 8);
        v148 = *(_QWORD **)(v2 + 160);
        v149 = *(_DWORD *)(v2 + 176);
        v73 = *(_DWORD *)(v2 + 168) + 1;
      }
      else
      {
        v159 = *(unsigned int *)(v2 + 176);
        *(_QWORD *)(v2 + 168) = 0;
        v149 = v159;
        v148 = (_QWORD *)(v137 + 16 * v159);
        if ( (_QWORD *)v137 != v148 )
        {
          v160 = (_QWORD *)v137;
          do
          {
            *v160 = -4096;
            v160 += 2;
          }
          while ( v148 != v160 );
          v148 = (_QWORD *)v137;
        }
        v73 = 1;
      }
      if ( v149 )
      {
        v150 = v149 - 1;
        v75 = v37;
        v151 = v150 & (((unsigned int)v39 >> 4) ^ ((unsigned int)v39 >> 9));
        v72 = &v148[2 * v151];
        v152 = (size_t *)*v72;
        if ( (size_t *)*v72 != v37 )
        {
          v153 = 1;
          v154 = nullptr;
          if ( v152 == (size_t *)-4096LL )
            goto LABEL_174;
          while ( 1 )
          {
            if ( v152 == (size_t *)-8192LL && !v154 )
              v154 = (size_t **)v72;
            LODWORD(v151) = v150 & (v153 + v151);
            v72 = &v148[2 * (unsigned int)v151];
            v152 = (size_t *)*v72;
            if ( (size_t *)*v72 == v37 )
              break;
            if ( v152 == (size_t *)-4096LL )
            {
              if ( v154 )
              {
                v75 = *v154;
                v72 = v154;
                goto LABEL_104;
              }
LABEL_174:
              *(_DWORD *)(v2 + 168) = v73;
LABEL_106:
              *v72 = v37;
              v76 = v72 + 1;
              *v76 = 0;
              v171 = v76;
LABEL_107:
              v77 = *(_QWORD *)(v2 + 16);
              v78 = *(_QWORD *)(v77 + 32);
              v79 = *(_QWORD *)(*(_QWORD *)(v77 + 24) + 8LL);
              if ( v78 && (unsigned __int8)sub_227D8A0(v78) )
              {
                v80 = *(_QWORD **)(v77 + 32);
                if ( !v80 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v77 + 32)) )
                  BUG();
                v81 = *(__int64 (__fastcall **)(__int64))(*v80 + 80LL);
                if ( v81 == sub_A1EA60 )
                  v82 = v80[11];
                else
                  v82 = v81((__int64)v80);
                v79 += v82 + v80[4] - v80[2];
              }
              v83 = (void *)(*(unsigned int *)(v77 + 48) - v170 + 8 * v79);
              v84 = (char *)v189[1];
              ptr = v83;
              if ( v189[1] == v190 )
              {
                sub_1418840((__int64)v189, v189[1], (__int64 *)&ptr);
                v85 = v189[1];
              }
              else
              {
                *(_QWORD *)v189[1] = v83;
                v85 = v84 + 8;
                v189[1] = v85;
              }
              v86 = *v38;
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              v88 = **v38;
              v89 = *((_BYTE *)v38 + 8) == 0;
              *v171 = (signed __int64)((__int64)v85 - (unsigned __int64)v189[0]) >> 3;
              v164 += v89;
              *(_QWORD *)s2 = v207;
              *(__m128i *)&s2[8] = si128;
              if ( v88 > 0x80 )
              {
                sub_2236E10(s2, v207, v88, 1);
                v109 = (char *)(*(_QWORD *)s2 + *(_QWORD *)&s2[8]);
              }
              else
              {
                if ( !v88 )
                  goto LABEL_118;
                v109 = v207;
              }
              memcpy(v109, v86 + 4, v88);
              v88 += *(_QWORD *)&s2[8];
LABEL_118:
              v90 = *v38;
              *(_QWORD *)&s2[8] = v88;
              for ( m = v90[1]; m; m = *(_QWORD *)(v92 + 8) )
              {
                if ( (m & 4) == 0 )
                  break;
                v92 = m & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v92 )
                  break;
                v90 = (size_t *)v92;
              }
              v93 = *v90;
              ptr = v211;
              *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              if ( v93 > 0x80 )
              {
                sub_2236E10(&ptr, v211, v93, 1);
                v108 = (char *)ptr + n[0];
              }
              else
              {
                if ( !v93 )
                  goto LABEL_124;
                v108 = (char *)v211;
              }
              memcpy(v108, v90 + 4, v93);
              v93 += n[0];
LABEL_124:
              n[0] = v93;
              sub_1F6E1D0((_QWORD *)v2, (__int64)s2);
              sub_1F6E1D0((_QWORD *)v2, (__int64)&ptr);
              v94 = n[0];
              v95 = *(_QWORD *)&s2[8];
              v96 = *(_QWORD *)s2;
              v97 = ptr;
              if ( n[0] == *(_QWORD *)&s2[8] )
              {
                if ( !n[0] || (v173 = *(_QWORD *)s2, v110 = memcmp(ptr, *(const void **)s2, n[0]), v96 = v173, !v110) )
                {
                  n[0] = 0;
                  v94 = 0;
                }
              }
              v205 = 0;
              v202 = 0;
              v201[1] = ((char *)v189[1] - (char *)v189[0]) >> 3;
              v98 = *v38;
              v201[0] = 1;
              v203 = 0;
              v99 = (unsigned __int64)v98;
              v204 = 0;
              while ( 1 )
              {
                v100 = *(_QWORD *)(v99 + 8);
                if ( !v100 )
                  break;
                v99 = v100 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v100 & 4) == 0 || !v99 )
                  goto LABEL_133;
              }
              v99 = 0;
LABEL_133:
              *(_QWORD *)&v202 = *(_QWORD *)(v99 + 32);
              while ( 1 )
              {
                v101 = v98[1];
                if ( !v101 )
                  break;
                v98 = (size_t *)(v101 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v101 & 4) == 0 || !v98 )
                  goto LABEL_139;
              }
              v98 = nullptr;
LABEL_139:
              v102 = 0;
              if ( *(_BYTE *)(v2 + 152) )
                v102 = v98[5];
              v103 = *((unsigned __int8 *)v38 + 10);
              *((_QWORD *)&v202 + 1) = v102;
              *(_QWORD *)&v203 = v103;
              *((_QWORD *)&v203 + 1) = *((unsigned __int8 *)v38 + 9);
              *(_QWORD *)&v204 = *((unsigned __int8 *)v38 + 11);
              v104 = *((unsigned __int8 *)v38 + 12);
              v199 = v94;
              *((_QWORD *)&v204 + 1) = v104;
              v105 = *(_QWORD *)(v2 + 16);
              v200 = 1285;
              v172 = v105;
              v205 = v95;
              v197.m128i_i64[0] = v96;
              v197.m128i_i64[1] = v95;
              v198 = (__int64)v97;
              sub_2253560(v195, &v197);
              v178 &= 0xFFFFFF00FFFFFFFFLL;
              sub_1F76680(v172, v166, (unsigned __int8 *)v201, 9, (unsigned __int64)v195[0], (__int64)v195[1]);
              if ( v195[0] != v196 )
                operator delete(v195[0]);
              if ( ptr != v211 )
                free(ptr);
              if ( *(char **)s2 != v207 )
                free(*(void **)s2);
              v106 = *((unsigned int *)v38 + 4);
              v107 = *(_QWORD *)(v2 + 16);
              ptr = &dword_0 + 2;
              n[0] = v106;
              n[1] = *((unsigned int *)v38 + 5);
              v179 &= 0xFFFFFF00FFFFFFFFLL;
              sub_1F763F0(v107, v167, &ptr, 3, 0, 0, v179);
              v41 = v161;
              v43 = v162;
LABEL_38:
              v46 = &ptr;
              v47 = nullptr;
              n[0] = 0;
              ptr = sub_1F6A380;
              n[1] = (size_t)sub_1F6A3B0;
              v211[0] = 0;
              while ( 1 )
              {
                v48 = (char *)*v46;
                v49 = (void **)((char *)&v191 + (_QWORD)v47);
                if ( ((unsigned __int8)*v46 & 1) != 0 )
                {
                  if ( (*(unsigned __int8 (**)(void))&v48[*v49 - 1])() )
                    goto LABEL_43;
                }
                else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, unsigned __int64, __int64 *, __int64, __int64, __int64))v48)(
                            v49,
                            v43,
                            v44,
                            v41,
                            v35,
                            v36) )
                {
LABEL_43:
                  v29 = v192;
                  goto LABEL_25;
                }
                v46 += 2;
                v47 = v46[1];
              }
            }
            ++v153;
          }
LABEL_198:
          v75 = v37;
        }
LABEL_104:
        *(_DWORD *)(v2 + 168) = v73;
        if ( v75 != (size_t *)-4096LL )
          --*(_DWORD *)(v2 + 172);
        goto LABEL_106;
      }
    }
    ++*(_DWORD *)(v2 + 168);
    BUG();
  }
  sub_A25550(*(_QWORD *)(v2 + 16));
  sub_1F6B880(s2);
  sub_A1FE00(*(__int64 *)s2, 5, 1);
  sub_A1FE00(*(__int64 *)s2, 6, 4);
  sub_A1FE00(*(__int64 *)s2, 6, 4);
  sub_A1FE00(*(__int64 *)s2, 0, 10);
  v61 = *(_QWORD *)(v2 + 16);
  ptr = *(void **)s2;
  v62 = *(_QWORD *)&s2[8];
  *(_OWORD *)s2 = 0;
  n[0] = v62;
  v63 = sub_A22F90(v61, (__int64 *)&ptr);
  if ( n[0] )
    sub_4343A0((volatile signed __int32 *)n[0]);
  ptr = &byte_5;
  v64 = v189[0];
  v65 = *(_QWORD *)(v2 + 16);
  n[1] = v164;
  v66 = (char *)v189[1] - (char *)v189[0];
  n[0] = ((char *)v189[1] - (char *)v189[0]) >> 3;
  if ( v189[0] == v189[1] )
  {
    v66 = 0;
    v64 = nullptr;
  }
  sub_1F76680(v65, v63, (unsigned __int8 *)&ptr, 3, (unsigned __int64)v64, v66);
  if ( *(_QWORD *)&s2[8] )
    sub_4343A0(*(volatile signed __int32 **)&s2[8]);
  if ( v189[0] )
    operator delete(v189[0]);
  if ( v169 )
    operator delete(v169);
  if ( v168 )
    operator delete(v168);
  if ( v187[0] )
    operator delete(v187[0]);
  if ( v185[0] )
    operator delete(v185[0]);
  if ( *((_QWORD *)&v184 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v184 + 1));
  if ( *((_QWORD *)&v183 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v183 + 1));
}
