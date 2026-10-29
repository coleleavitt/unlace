void __fastcall sub_1589560(__int64 a1, __int64 *a2, int a3, __m128 a4)
{
  char v4; // r14
  __int64 (__fastcall ***v5)(); // rbx
  __int64 v6; // rax
  void **v7; // r13
  void *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rdi
  void **v11; // rdx
  void **v12; // rax
  char *v13; // rcx
  char *v14; // rax
  char *v15; // rdx
  _QWORD *v16; // rbp
  _QWORD *v17; // r15
  __int64 v18; // r12
  _WORD *v19; // rax
  char v20; // dl
  char *v21; // rsi
  __int64 v22; // rdi
  char *v23; // rcx
  char *v24; // rax
  char *v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // r12
  _QWORD *v29; // r15
  _QWORD *v30; // r14
  __int64 v31; // rbx
  char v32; // dl
  char *v33; // rcx
  __int64 v34; // rdi
  char *v35; // rsi
  char *v36; // rax
  char *v37; // rsi
  char *v38; // rax
  char *v39; // rcx
  __int64 v40; // rax
  void *v41; // rdi
  void **v42; // r14
  unsigned __int64 v43; // rbp
  void *v44; // rdi
  __int64 v45; // rax
  char *v46; // r13
  _QWORD *v47; // rbp
  _WORD *v48; // r12
  __int64 v49; // rdi
  char *v50; // rbx
  char *v51; // r15
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 j; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  char *v62; // r15
  _QWORD *v63; // rax
  __int64 ***v64; // rax
  int v65; // r15d
  __int64 **v66; // rbx
  _WORD *v67; // rdx
  __int64 *v68; // rdi
  unsigned __int16 v69; // cx
  __int64 v70; // r8
  __int64 ***v71; // rax
  __int64 ***v72; // rcx
  __int64 *v73; // rdi
  __int64 *v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 *v77; // rdx
  __int64 v78; // rax
  int v79; // eax
  _WORD *v80; // rcx
  unsigned __int16 v81; // ax
  __int64 *v82; // rax
  unsigned __int64 v83; // rdx
  __int64 *v84; // rdx
  __int64 v85; // rcx
  void *v86; // rdi
  void **v87; // rbx
  unsigned __int64 v88; // r14
  void *v89; // rdi
  __int64 v90; // r14
  unsigned int v91; // eax
  int v92; // r12d
  _WORD *v93; // rdx
  __int64 v94; // rdx
  _QWORD *v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rbx
  size_t v98; // rax
  __int64 v99; // rax
  size_t v100; // rax
  __int64 v101; // rax
  size_t v102; // rax
  __int64 v103; // rax
  _BYTE *v104; // rax
  unsigned __int64 v105; // rdx
  char *v106; // r15
  size_t v107; // rbp
  __int16 *v108; // rdi
  __int64 (__fastcall ***v109)(); // rsi
  char *v110; // rcx
  __int64 *v111; // rax
  __int64 *v112; // rcx
  __int64 *v113; // r8
  char *v114; // rdx
  __int64 *v115; // r9
  size_t v116; // rax
  __m128 *v117; // rbx
  _QWORD *v118; // rbx
  unsigned __int64 *v119; // r12
  unsigned __int64 v120; // rdx
  unsigned __int64 *v121; // rax
  __int64 i; // rax
  __int64 v123; // rax
  char *v124; // rdx
  _QWORD *v125; // rax
  unsigned __int64 v126; // r12
  __m128i v127; // xmm0
  __int64 *v128; // rcx
  int v129; // eax
  _DWORD *v130; // rbx
  __int64 *v131; // rax
  unsigned __int64 v132; // rdx
  __int64 *v133; // rdx
  __int64 v134; // rdi
  char *v135; // rdx
  int v136; // ecx
  _QWORD *v137; // rax
  __m128i v138; // xmm0
  __m128i v139; // xmm0
  __int64 *v140; // rdx
  unsigned __int16 v141; // ax
  __int64 v142; // rax
  unsigned __int64 *v143; // rbx
  __int64 v144; // r14
  unsigned __int64 v145; // rax
  __int64 v146; // rdx
  __m128i v147; // xmm0
  __int64 v148; // rbp
  unsigned __int64 *v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rbx
  __int64 v155; // r8
  void *v156; // rax
  _QWORD *v157; // rax
  __m128i v158; // [rsp+8h] [rbp-2C0h] BYREF
  __m128 *v159; // [rsp+18h] [rbp-2B0h]
  __int64 *v160; // [rsp+20h] [rbp-2A8h]
  __int64 v161; // [rsp+28h] [rbp-2A0h]
  __int64 (__fastcall ***v162)(); // [rsp+30h] [rbp-298h]
  __m128i v163; // [rsp+38h] [rbp-290h] BYREF
  unsigned int v164; // [rsp+4Ch] [rbp-27Ch]
  __int64 v165[3]; // [rsp+50h] [rbp-278h] BYREF
  void *v166; // [rsp+68h] [rbp-260h]
  void *ptr[4]; // [rsp+90h] [rbp-238h] BYREF
  __m128 v168; // [rsp+B0h] [rbp-218h]
  __int64 ***v169; // [rsp+C0h] [rbp-208h]
  unsigned __int64 v170; // [rsp+C8h] [rbp-200h]
  __int64 v171; // [rsp+D0h] [rbp-1F8h]
  unsigned __int64 v172; // [rsp+D8h] [rbp-1F0h]
  __m128 v173; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v174[2]; // [rsp+100h] [rbp-1C8h]
  __m128 v175; // [rsp+110h] [rbp-1B8h] BYREF
  __m128i v176; // [rsp+120h] [rbp-1A8h]
  __m128 v177; // [rsp+130h] [rbp-198h]
  __int16 v178; // [rsp+140h] [rbp-188h]
  __int64 v179; // [rsp+148h] [rbp-180h]
  __int16 v180; // [rsp+150h] [rbp-178h]
  __int64 v181; // [rsp+158h] [rbp-170h]
  char v182; // [rsp+168h] [rbp-160h]
  unsigned int v183; // [rsp+170h] [rbp-158h]
  char v184; // [rsp+174h] [rbp-154h]
  __int64 (__fastcall **v185)(); // [rsp+180h] [rbp-148h] BYREF
  char v186; // [rsp+188h] [rbp-140h]
  char v187; // [rsp+189h] [rbp-13Fh]
  __int16 v188; // [rsp+18Ah] [rbp-13Eh]
  char v189; // [rsp+18Ch] [rbp-13Ch]
  void *v190; // [rsp+190h] [rbp-138h]
  __int64 v191; // [rsp+198h] [rbp-130h]
  int v192; // [rsp+1A0h] [rbp-128h]
  char v193; // [rsp+1A4h] [rbp-124h]
  __int64 v194; // [rsp+1A8h] [rbp-120h] BYREF
  __int64 v195; // [rsp+1E8h] [rbp-E0h]
  void *v196; // [rsp+1F0h] [rbp-D8h] BYREF
  __int64 v197; // [rsp+1F8h] [rbp-D0h]
  int v198; // [rsp+200h] [rbp-C8h]
  char v199; // [rsp+204h] [rbp-C4h]
  __int64 v200; // [rsp+208h] [rbp-C0h] BYREF

  v4 = a3;
  v5 = &v185;
  v185 = off_2C44B38;
  v188 = 256;
  v161 = a1;
  v190 = &v194;
  v195 = a1;
  v158.m128i_i64[1] = (__int64)a2;
  LODWORD(v160) = a3;
  v186 = 0;
  v189 = 0;
  v191 = 8;
  v192 = 0;
  v193 = 1;
  v196 = &v200;
  v197 = 16;
  v198 = 0;
  v199 = 1;
  v187 = 0;
  v6 = sub_9846A0(a2);
  sub_BC97E0((__int64 *)&v185, v6);
  if ( !v189 || v4 && v192 == HIDWORD(v191) )
    goto LABEL_172;
  v7 = (void **)sub_986B70(v158.m128i_i64[1]);
  if ( !v7 )
    goto LABEL_172;
  v173 = 0u;
  v174[0] = nullptr;
  v174[1] = nullptr;
  v175 = 0u;
  v176 = 0u;
  v177 = 0u;
  sub_9B5210((__int64)&v173, 0);
  v8 = *v7;
  if ( v199 )
  {
    v9 = (char *)v196;
    v10 = 8LL * HIDWORD(v197);
    v11 = (void **)((char *)v196 + v10);
    if ( v196 != (char *)v196 + v10 )
    {
      v12 = (void **)v196;
      if ( v8 == *(void **)v196 )
        goto LABEL_13;
      while ( v11 != ++v12 )
      {
        if ( v8 == *v12 )
          goto LABEL_13;
      }
    }
    if ( HIDWORD(v197) < (unsigned int)v197 )
    {
      ++HIDWORD(v197);
      *v11 = v8;
      v9 = (char *)v196;
      v8 = *v7;
      v12 = (void **)((char *)v196 + v10);
LABEL_13:
      v13 = &v9[8 * HIDWORD(v197)];
      goto LABEL_14;
    }
  }
  v12 = (void **)sub_2236760(&v196, v8);
  v8 = *v7;
  v9 = (char *)v196;
  if ( v199 )
    goto LABEL_13;
  v13 = (char *)v196 + 8 * (unsigned int)v197;
LABEL_14:
  if ( v13 != (char *)v12 && (unsigned __int64)*v12 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v14 = (char *)(v12 + 1);
    do
    {
      v15 = v14;
      if ( v13 == v14 )
        break;
      v14 += 8;
    }
    while ( *(_QWORD *)v15 >= 0xFFFFFFFFFFFFFFFELL );
  }
  ptr[0] = v8;
  v159 = (__m128 *)ptr;
  sub_15868B0(&v173, (__int64 *)ptr);
  v16 = v7[6];
  v17 = v7[5];
  if ( v17 != v16 )
  {
    while ( 1 )
    {
      v18 = *v17;
      v19 = *(_WORD **)(*v17 + 24LL);
      if ( v19 )
      {
        if ( (*v19 & 0x1FFu) - 132 <= 1 )
          break;
      }
LABEL_39:
      if ( v16 == ++v17 )
        goto LABEL_40;
    }
    v20 = v199;
    if ( !v199 )
      goto LABEL_206;
    v21 = (char *)v196;
    v22 = 8LL * HIDWORD(v197);
    v23 = (char *)v196 + v22;
    if ( v196 != (char *)v196 + v22 )
    {
      v24 = (char *)v196;
      if ( v18 == *(_QWORD *)v196 )
      {
LABEL_236:
        v20 = 0;
        goto LABEL_30;
      }
      while ( 1 )
      {
        v24 += 8;
        if ( v23 == v24 )
          break;
        if ( v18 == *(_QWORD *)v24 )
          goto LABEL_236;
      }
    }
    if ( HIDWORD(v197) < (unsigned int)v197 )
    {
      ++HIDWORD(v197);
      *(_QWORD *)v23 = v18;
      v21 = (char *)v196;
      v24 = (char *)v196 + v22;
    }
    else
    {
LABEL_206:
      v24 = (char *)sub_2236760(&v196, *v17);
      v21 = (char *)v196;
      if ( !v199 )
      {
        v25 = (char *)v196 + 8 * (unsigned int)v197;
LABEL_31:
        if ( v25 != v24 && (unsigned __int64)(*(_QWORD *)v24 + 2LL) <= 1 )
        {
          do
            v24 += 8;
          while ( v25 != v24 && *(_QWORD *)v24 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v20 )
        {
          v26 = v176.m128i_i64[0];
          if ( v176.m128i_i64[0] == v177.m128_u64[0] - 8 )
          {
            v146 = v177.m128_i64[1];
            if ( v173.m128_u64[1] - ((__int64)(v177.m128_u64[1] - v173.m128_u64[0]) >> 3) <= 1 )
            {
              sub_1586730((__int64)&v173, 1u, 0);
              v146 = v177.m128_i64[1];
            }
            v158.m128i_i64[0] = v146;
            *(_QWORD *)(v146 + 8) = operator new(0x200u);
            *(_QWORD *)v176.m128i_i64[0] = v18;
            v158.m128i_i64[0] = *(_QWORD *)(v177.m128_u64[1] + 8);
            v147 = _mm_loadl_epi64(&v158);
            v176 = _mm_unpacklo_epi64(v147, v147);
            v158.m128i_i64[0] = v177.m128_u64[1] + 8;
            a4 = _mm_loadh_ps((const double *)v158.m128i_i64);
            v177 = a4;
          }
          else
          {
            *(_QWORD *)v176.m128i_i64[0] = v18;
            v176.m128i_i64[0] = v26 + 8;
          }
        }
        goto LABEL_39;
      }
    }
LABEL_30:
    v25 = &v21[8 * HIDWORD(v197)];
    goto LABEL_31;
  }
LABEL_40:
  v27 = (__int64 *)v174[0];
  if ( (void *)v176.m128i_i64[0] != v174[0] )
  {
    v162 = &v185;
    while ( 1 )
    {
      v28 = *v27;
      if ( v27 == (__int64 *)(v175.m128_u64[0] - 8) )
      {
        operator delete(v174[1]);
        v27 = *(__int64 **)(v175.m128_u64[1] + 8);
        v158.m128i_i64[0] = (__int64)v27;
        v138 = _mm_loadl_epi64(&v158);
        *(__m128i *)v174 = _mm_unpacklo_epi64(v138, v138);
        v158.m128i_i64[0] = v175.m128_u64[1] + 8;
        a4 = _mm_loadh_ps((const double *)v158.m128i_i64);
        v175 = a4;
      }
      else
      {
        v174[0] = ++v27;
      }
      v29 = *(_QWORD **)(v28 + 88);
      v30 = *(_QWORD **)(v28 + 80);
      if ( v29 != v30 )
        break;
LABEL_65:
      if ( (__int64 *)v176.m128i_i64[0] == v27 )
      {
        v5 = v162;
        goto LABEL_67;
      }
    }
    while ( 1 )
    {
      v31 = *v30;
      if ( *v30 )
        break;
LABEL_63:
      v30 += 2;
      if ( v29 == v30 )
      {
        v27 = (__int64 *)v174[0];
        goto LABEL_65;
      }
    }
    v32 = v199;
    if ( !v199 )
      goto LABEL_192;
    v33 = (char *)v196;
    v34 = 8LL * HIDWORD(v197);
    v35 = (char *)v196 + v34;
    if ( v196 != (char *)v196 + v34 )
    {
      v36 = (char *)v196;
      if ( v31 == *(_QWORD *)v196 )
      {
LABEL_194:
        v32 = 0;
        goto LABEL_54;
      }
      while ( 1 )
      {
        v36 += 8;
        if ( v35 == v36 )
          break;
        if ( v31 == *(_QWORD *)v36 )
          goto LABEL_194;
      }
    }
    if ( HIDWORD(v197) < (unsigned int)v197 )
    {
      ++HIDWORD(v197);
      *(_QWORD *)v35 = v31;
      v33 = (char *)v196;
      v36 = (char *)v196 + v34;
    }
    else
    {
LABEL_192:
      v36 = (char *)sub_2236760(&v196, *v30);
      v33 = (char *)v196;
      if ( !v199 )
      {
        v37 = (char *)v196 + 8 * (unsigned int)v197;
LABEL_55:
        if ( v37 != v36 && *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v38 = v36 + 8;
          do
          {
            v39 = v38;
            if ( v37 == v38 )
              break;
            v38 += 8;
          }
          while ( *(_QWORD *)v39 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v32 )
        {
          v40 = v176.m128i_i64[0];
          if ( v176.m128i_i64[0] == v177.m128_u64[0] - 8 )
          {
            v126 = v177.m128_u64[1];
            if ( v173.m128_u64[1] - ((__int64)(v177.m128_u64[1] - v173.m128_u64[0]) >> 3) <= 1 )
            {
              sub_1586730((__int64)&v173, 1u, 0);
              v126 = v177.m128_u64[1];
            }
            *(_QWORD *)(v126 + 8) = operator new(0x200u);
            *(_QWORD *)v176.m128i_i64[0] = v31;
            v158.m128i_i64[0] = *(_QWORD *)(v177.m128_u64[1] + 8);
            v127 = _mm_loadl_epi64(&v158);
            v176 = _mm_unpacklo_epi64(v127, v127);
            v158.m128i_i64[0] = v177.m128_u64[1] + 8;
            a4 = _mm_loadh_ps((const double *)v158.m128i_i64);
            v177 = a4;
          }
          else
          {
            *(_QWORD *)v176.m128i_i64[0] = v31;
            v176.m128i_i64[0] = v40 + 8;
          }
        }
        goto LABEL_63;
      }
    }
LABEL_54:
    v37 = &v33[8 * HIDWORD(v197)];
    goto LABEL_55;
  }
LABEL_67:
  v41 = (void *)v173.m128_u64[0];
  if ( v173.m128_u64[0] )
  {
    v42 = (void **)v175.m128_u64[1];
    v43 = v177.m128_u64[1] + 8;
    if ( v177.m128_u64[1] + 8 > v175.m128_u64[1] )
    {
      do
      {
        v44 = *v42++;
        operator delete(v44);
      }
      while ( v43 > (unsigned __int64)v42 );
      v41 = (void *)v173.m128_u64[0];
    }
    operator delete(v41);
  }
  v45 = (__int64)v7[5];
  v46 = (char *)v7[6];
  v158.m128i_i64[0] = v45;
  if ( v46 != (char *)v45 )
  {
    v163.m128i_i64[1] = (__int64)v5;
    v164 = 7461 - ((_BYTE)v160 == 0);
    while ( 1 )
    {
      v47 = *((_QWORD **)v46 - 1);
      v48 = (_WORD *)v47[3];
      if ( v48 )
      {
        if ( (*v48 & 0x1FFu) - 132 <= 1 )
        {
          LOBYTE(v160) = 0;
          v49 = *(_QWORD *)(v158.m128i_i64[1] + 8);
          if ( (*(_BYTE *)(v49 + 28) & 0x7Fu) - 34 <= 5 )
            LOBYTE(v160) = sub_B77D90(v49);
          v50 = (char *)v47[8];
          v51 = (char *)v47[7];
          memset(ptr, 0, sizeof(ptr));
          v168 = 0u;
          v52 = (v50 - v51) >> 4;
          v169 = nullptr;
          v170 = 0;
          v171 = 0;
          v172 = 0;
          sub_9B5210((__int64)v159, v52);
          v53 = v168.m128_u64[1];
          v54 = v172;
          if ( v168.m128_u64[1] < v172 )
          {
            v55 = (unsigned __int64)v51;
            v52 = v168.m128_u64[1];
            do
            {
              v56 = *(_QWORD *)v52;
              if ( *(_QWORD *)v52 < v55 + 1016 && v56 + 512 > v55 )
              {
                for ( i = 0; i != 512; i += 8 )
                  *(_QWORD *)(v56 + i) = *(_QWORD *)(v55 + 2 * i);
              }
              else
              {
                for ( j = 0; j != 496; j += 16 )
                {
                  a4 = (__m128)_mm_unpacklo_epi64(
                                 _mm_loadu_si128((const __m128i *)(v55 + 2 * j)),
                                 _mm_loadu_si128((const __m128i *)(v55 + 2 * j + 16)));
                  *(__m128 *)(v56 + j) = a4;
                }
                *(_QWORD *)(v56 + 496) = *(_QWORD *)(v55 + 992);
                *(_QWORD *)(v56 + 504) = *(_QWORD *)(v55 + 1008);
              }
              v52 += 8LL;
              v55 += 1024LL;
            }
            while ( v52 < v54 );
            v51 += 1024 * ((v54 - 1 - v53) >> 3) + 1024;
          }
          v58 = v170;
          if ( v50 != v51 )
          {
            v59 = v50 - 16 - v51;
            v52 = v59 >> 4;
            if ( (v170 >= (unsigned __int64)(v50 - 8) || (unsigned __int64)v51 >= v170 + 8 * (v59 >> 4) + 8)
              && v59 > 0x50 )
            {
              v60 = 0;
              v61 = 16 * (v59 >> 5);
              do
              {
                a4 = (__m128)_mm_unpacklo_epi64(
                               _mm_loadu_si128((const __m128i *)&v51[2 * v60]),
                               _mm_loadu_si128((const __m128i *)&v51[2 * v60 + 16]));
                *(__m128 *)(v58 + v60) = a4;
                v60 += 16;
              }
              while ( v61 != v60 );
              v52 &= ~1uLL;
              v62 = &v51[16 * v52];
              v63 = (_QWORD *)(v58 + 8 * v52);
              *v63 = *(_QWORD *)v62;
              if ( v50 != v62 + 16 )
                v63[1] = *((_QWORD *)v62 + 2);
            }
            else
            {
              do
              {
                v123 = *(_QWORD *)v51;
                v51 += 16;
                v58 += 8LL;
                *(_QWORD *)(v58 - 8) = v123;
              }
              while ( v50 != v51 );
            }
          }
          LODWORD(v162) = 0;
          v64 = (__int64 ***)ptr[2];
          v65 = 0;
LABEL_95:
          if ( v169 != v64 )
          {
            while ( 1 )
            {
              v66 = *v64;
              if ( v64 == (__int64 ***)(v168.m128_u64[0] - 8) )
              {
                operator delete(ptr[3]);
                v64 = *(__int64 ****)(v168.m128_u64[1] + 8);
                v163.m128i_i64[0] = (__int64)v64;
                v139 = _mm_loadl_epi64(&v163);
                *(__m128i *)&ptr[2] = _mm_unpacklo_epi64(v139, v139);
                v163.m128i_i64[0] = v168.m128_u64[1] + 8;
                a4 = _mm_loadh_ps((const double *)v163.m128i_i64);
                v168 = a4;
              }
              else
              {
                ptr[2] = ++v64;
              }
              if ( !v66 )
                goto LABEL_95;
              v67 = (_WORD *)((unsigned __int64)v66[4] & 0xFFFFFFFFFFFFFFF8LL);
              v52 = (unsigned __int64)v67;
              if ( v67 )
              {
                if ( (*v67 & 0x1FF) == 0x83 )
                  goto LABEL_95;
              }
              v68 = v66[3];
              if ( !v68 )
                break;
              v69 = *(_WORD *)v68 & 0x1FF;
              if ( (unsigned int)v69 - 132 <= 1 )
              {
                if ( v69 == 133 )
                  v70 = v68[(unsigned int)((*(_WORD *)v68 & 0x200) != 0) + 4];
                else
                  v70 = v68[3];
                if ( v47[3] != v70 )
                  break;
                if ( *v66 == v66[1] )
                  goto LABEL_95;
              }
              if ( v69 != 2 || v68[2] != v47[3] )
                break;
              if ( *v66 == v66[1] )
                goto LABEL_95;
              if ( v199 )
              {
LABEL_107:
                v71 = (__int64 ***)v196;
                v72 = (__int64 ***)((char *)v196 + 8 * HIDWORD(v197));
                if ( v196 == v72 )
                  goto LABEL_208;
                while ( v66 != *v71 )
                {
                  if ( v72 == ++v71 )
                    goto LABEL_208;
                }
                if ( v67 )
                  goto LABEL_205;
                goto LABEL_112;
              }
LABEL_203:
              if ( !sub_2236570(v163.m128i_i64[1] + 112, v66) )
              {
LABEL_208:
                v52 = (unsigned __int64)v66[1];
                v128 = *v66;
                if ( (__int64 *)v52 != *v66 )
                {
                  while ( 1 )
                  {
                    v129 = *(_DWORD *)v128 & 3 | (4 * (v128[1] & 3));
                    if ( (unsigned int)v129 > 5 && v129 <= 8 )
                    {
                      v130 = (_DWORD *)(*v128 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( v130 )
                      {
                        if ( (*(_WORD *)v130 & 0x1FF) == 0x82 )
                        {
                          v131 = (__int64 *)(v130 + 4);
                          v132 = (unsigned __int64)&v130[2 * (*v130 >> 9) + 4];
                          if ( (unsigned __int64)(v130 + 4) < v132 )
                          {
                            while ( *(_WORD *)(*v131 + 36) != 46 )
                            {
                              if ( (__int64 *)v132 == ++v131 )
                                goto LABEL_210;
                            }
                            if ( (__int64 *)v132 != v131 )
                            {
LABEL_221:
                              if ( !(_BYTE)v160 )
                              {
                                sub_168B9F0(&v173, v195 + 8, (unsigned int)v130[1], 7499, 0);
                                sub_15F7200(&v173);
                              }
                              if ( v193 )
                              {
                                v52 = (unsigned __int64)v190;
                                v135 = (char *)v190 + 8 * HIDWORD(v191);
                                v136 = HIDWORD(v191);
                                if ( v190 != v135 )
                                {
                                  v137 = v190;
                                  if ( v130 == *(_DWORD **)v190 )
                                  {
LABEL_226:
                                    --HIDWORD(v191);
                                    *v137 = *((_QWORD *)v190 + (unsigned int)(v136 - 1));
                                  }
                                  else
                                  {
                                    while ( v135 != (char *)++v137 )
                                    {
                                      if ( v130 == (_DWORD *)*v137 )
                                        goto LABEL_226;
                                    }
                                  }
                                }
                                goto LABEL_191;
                              }
                              v52 = (unsigned __int64)v130;
                              v150 = (_QWORD *)sub_2236570(v163.m128i_i64[1] + 16, v130);
                              if ( !v150 )
                                goto LABEL_191;
LABEL_261:
                              *v150 = -2;
                              ++v192;
                              goto LABEL_191;
                            }
                          }
                          else if ( v130 + 4 != (_DWORD *)v132 )
                          {
                            if ( *(_WORD *)(*(_QWORD *)v132 + 36LL) == 46 )
                              goto LABEL_221;
                            v133 = (__int64 *)(v132 + 8);
                            while ( v131 != v133 )
                            {
                              v134 = *v133++;
                              if ( *(_WORD *)(v134 + 36) == 46 )
                                goto LABEL_221;
                            }
                          }
                        }
                      }
                    }
LABEL_210:
                    v128 += 2;
                    if ( (__int64 *)v52 == v128 )
                      goto LABEL_129;
                  }
                }
                goto LABEL_129;
              }
              v67 = (_WORD *)((unsigned __int64)v66[4] & 0xFFFFFFFFFFFFFFF8LL);
              v52 = (unsigned __int64)v67;
              if ( v67 )
              {
LABEL_205:
                v81 = *v67 & 0x1FF;
                goto LABEL_121;
              }
LABEL_112:
              v73 = v66[1];
              v74 = *v66;
              if ( v73 == *v66 )
                goto LABEL_237;
              v75 = *v74;
              v52 = *v74 & 3;
              v76 = v52 | (4 * (v74[1] & 3));
              if ( v76 > 8 || (unsigned int)v76 <= 5 )
              {
                v77 = v74 + 2;
                while ( v73 != v77 )
                {
                  v78 = v77[1];
                  v75 = *v77;
                  v77 += 2;
                  v52 = v75 & 3;
                  v79 = v52 | (4 * (v78 & 3));
                  if ( v79 <= 8 && (unsigned int)v79 > 5 )
                    goto LABEL_119;
                }
LABEL_237:
                v140 = v66[3];
                if ( !v140
                  || (v141 = *(_WORD *)v140 & 0x1FF, (unsigned int)v141 - 132 > 1)
                  || (v141 != 133 ? (v52 = v140[3]) : (v52 = v140[(unsigned int)((*(_WORD *)v140 & 0x200) != 0) + 4]),
                      v81 = *(_WORD *)v52 & 0x1FF,
                      (unsigned int)v81 - 132 <= 1) )
                {
LABEL_242:
                  v142 = (char *)v66[8] - (char *)v66[7];
                  if ( v142 > 0 )
                  {
                    v143 = (unsigned __int64 *)v66[7];
                    v144 = v142 >> 4;
                    do
                    {
                      v145 = *v143;
                      v52 = (unsigned __int64)&v173;
                      v143 += 2;
                      v173.m128_u64[0] = v145;
                      sub_15868B0(v159, (__int64 *)&v173);
                      --v144;
                    }
                    while ( v144 );
                  }
                  goto LABEL_129;
                }
                goto LABEL_121;
              }
LABEL_119:
              v80 = (_WORD *)(v75 & 0xFFFFFFFFFFFFFFFCLL);
              v52 = (unsigned __int64)v80;
              if ( !v80 )
                goto LABEL_242;
              v81 = *v80 & 0x1FF;
LABEL_121:
              if ( v81 == 130 )
              {
                v82 = (__int64 *)(v52 + 16);
                v83 = v52 + 16 + 8LL * (*(_DWORD *)v52 >> 9);
                if ( v52 + 16 < v83 )
                {
                  if ( *(_WORD *)(*v82 + 36) == 46 )
                  {
LABEL_184:
                    if ( (__int64 *)v83 != v82 )
                    {
LABEL_185:
                      if ( !v193 )
                      {
                        v150 = (_QWORD *)sub_2236570(v163.m128i_i64[1] + 16, v52);
                        if ( !v150 )
                          goto LABEL_191;
                        goto LABEL_261;
                      }
                      v124 = (char *)v190 + 8 * HIDWORD(v191);
                      if ( v190 == v124 )
                        goto LABEL_191;
                      v125 = v190;
                      while ( *v125 != v52 )
                      {
                        if ( v124 == (char *)++v125 )
                          goto LABEL_191;
                      }
                      v151 = *((_QWORD *)v190 + (unsigned int)--HIDWORD(v191));
                      *v125 = v151;
LABEL_191:
                      LODWORD(v162) = (_DWORD)v162 + 1;
                      v64 = (__int64 ***)ptr[2];
                      goto LABEL_95;
                    }
                  }
                  else
                  {
                    while ( (__int64 *)v83 != ++v82 )
                    {
                      if ( *(_WORD *)(*v82 + 36) == 46 )
                        goto LABEL_184;
                    }
                  }
                }
                else if ( v52 + 16 != v83 )
                {
                  if ( *(_WORD *)(*(_QWORD *)v83 + 36LL) == 46 )
                    goto LABEL_185;
                  v84 = (__int64 *)(v83 + 8);
                  while ( v82 != v84 )
                  {
                    v85 = *v84++;
                    if ( *(_WORD *)(v85 + 36) == 46 )
                      goto LABEL_185;
                  }
                }
              }
              ++v65;
LABEL_129:
              v64 = (__int64 ***)ptr[2];
              if ( v169 == ptr[2] )
                goto LABEL_130;
            }
            if ( v199 )
              goto LABEL_107;
            goto LABEL_203;
          }
LABEL_130:
          v86 = ptr[0];
          if ( ptr[0] )
          {
            v87 = (void **)v168.m128_u64[1];
            v88 = v172 + 8;
            if ( v172 + 8 > v168.m128_u64[1] )
            {
              do
              {
                v89 = *v87++;
                operator delete(v89);
              }
              while ( v88 > (unsigned __int64)v87 );
              v86 = ptr[0];
            }
            operator delete(v86);
          }
          if ( v65 )
          {
            v90 = v161 + 8;
            v91 = sub_EEB7E0((unsigned __int64)v48, v52, *(double *)a4.m128_u64);
            sub_168B9F0(&v173, v90, v91, v164, 0);
            sub_15F7200(&v173);
            if ( !(_DWORD)v162 )
            {
              v92 = sub_EEB7E0((unsigned __int64)v48, v90, *(double *)a4.m128_u64);
              if ( v92 >= 0 )
                break;
            }
          }
        }
      }
LABEL_164:
      v46 -= 8;
      if ( (char *)v158.m128i_i64[0] == v46 )
        goto LABEL_165;
    }
    v93 = (_WORD *)(v47[4] & 0xFFFFFFFFFFFFFFF8LL);
    if ( v47[1] == *v47 )
    {
      if ( v93 )
      {
LABEL_267:
        if ( (*v93 & 0x1FF) == 0xFE )
        {
LABEL_161:
          sub_168B9F0(&v173, v90, (unsigned int)v92, 6048, 0);
          v116 = j__strlen("break; ");
          v117 = v159;
          sub_9EC740((__int64)v159, v92, "break; ", v116, 0);
          sub_1589170((__int64)&v173, v117);
          if ( ptr[3] != &v117[2].m128_u16[4] )
            operator delete(ptr[3]);
          sub_15F7200(&v173);
          goto LABEL_164;
        }
      }
      else
      {
        v94 = v47[10];
        if ( (unsigned int)((v47[11] - v94) >> 4) == 1 )
        {
          do
          {
            v95 = *(_QWORD **)v94;
            v96 = *(_QWORD *)(*(_QWORD *)v94 + 8LL);
            v93 = (_WORD *)(*(_QWORD *)(*(_QWORD *)v94 + 32LL) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *v95 != v96 )
              break;
            if ( v93 )
              goto LABEL_267;
            v94 = v95[10];
          }
          while ( (unsigned int)((v95[11] - v94) >> 4) == 1 );
        }
      }
    }
    ptr[1] = nullptr;
    LOWORD(ptr[2]) = 20;
    v97 = *(_QWORD *)(v161 + 240);
    ptr[3] = nullptr;
    LOWORD(ptr[0]) = 20;
    v98 = j__strlen("fallthrough");
    v99 = sub_6F3470(v97 + 552, "fallthrough", v98);
    LOWORD(v171) = 21;
    v168.m128_i16[0] = 5;
    v173.m128_i16[0] = 20;
    LOWORD(v174[0]) = 20;
    LOWORD(v169) = 21;
    v168.m128_u64[1] = v99;
    v170 = 0;
    v172 = 0;
    v173.m128_u64[1] = 0;
    v174[1] = nullptr;
    v100 = j__strlen("clang");
    v101 = sub_6F3470(v97 + 552, "clang", v100);
    v175.m128_i16[0] = 5;
    v176.m128i_i16[0] = 72;
    v175.m128_u64[1] = v101;
    v176.m128i_i64[1] = 0;
    v102 = j__strlen("fallthrough");
    v103 = sub_6F3470(v97 + 552, "fallthrough", v102);
    v177.m128_i16[0] = 5;
    v177.m128_u64[1] = v103;
    v178 = 21;
    v179 = 0;
    v180 = 21;
    v181 = 0;
    v104 = *(_BYTE **)(v97 + 56);
    if ( (v104[1] & 0x40) != 0 || (*v104 & 8) != 0 )
    {
      v106 = (char *)sub_145F790(v97, v92, v159, 5);
      v107 = v105;
      if ( !v105 )
      {
        v106 = (char *)sub_145F790(v97, v92, &v173, 7);
        v107 = v105;
        if ( !v105 )
        {
          v106 = "[[fallthrough]]";
          v110 = (char *)j__strlen("[[fallthrough]]");
LABEL_273:
          v108 = &v159[1].m128_i16[4];
          *(__m128i *)&ptr[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
          ptr[0] = &v159[1].m128_u16[4];
          if ( (unsigned __int64)v110 <= 0x40 )
          {
            if ( !v110 )
            {
              v107 = 0;
              v109 = (__int64 (__fastcall ***)())&dword_40;
              goto LABEL_151;
            }
            v107 = (size_t)v110;
LABEL_150:
            memcpy(v108, v106, v107);
            v109 = (__int64 (__fastcall ***)())ptr[2];
            v110 = (char *)ptr[1] + v107;
LABEL_151:
            v162 = v109;
            ptr[1] = v110;
            v160 = (__int64 *)v110;
            v111 = (__int64 *)j__strlen("; ");
            v112 = v160;
            v113 = v111;
            v114 = (char *)v160 + (_QWORD)v111;
            if ( (char *)v160 + (unsigned __int64)v111 > (char *)v162 )
            {
              v160 = v111;
              sub_2236E10(v159, &v159[1].m128_u16[4], v114, 1);
              v112 = (__int64 *)ptr[1];
              v113 = v160;
            }
            if ( v113 )
            {
              v160 = v113;
              memcpy((char *)v112 + (unsigned __int64)ptr[0], "; ", (size_t)v113);
              v112 = (__int64 *)ptr[1];
              v113 = v160;
            }
            ptr[1] = (char *)v112 + (_QWORD)v113;
            sub_168B9F0(&v173, v90, (unsigned int)v92, 6049, 0);
            if ( v182 )
            {
              sub_AEC220((unsigned __int8 **)&v175, v106, v107);
              v115 = v165;
            }
            else
            {
              v115 = v165;
              if ( v184 )
              {
                v154 = sub_168B9E0(&v173);
                v156 = v174[0];
                if ( v174[0] )
                  v156 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v174[0] + 32LL))(v174[0]);
                v165[0] = (__int64)v156;
                v160 = v165;
                v157 = sub_1587BC0(v154, v165, v152, v153, v155, (__int64)v165);
                sub_AEC220((unsigned __int8 **)(*v157 + 32LL * v183 + 8), v106, v107);
                v115 = v160;
              }
            }
            v160 = v115;
            sub_9EC740((__int64)v115, v92, (_BYTE *)ptr[0], (__int64)ptr[1], 0);
            sub_1589170((__int64)&v173, v160);
            if ( v166 != v160 + 5 )
              operator delete(v166);
            sub_15F7200(&v173);
            if ( ptr[0] != &v159[1].m128_u16[4] )
              free(ptr[0]);
            goto LABEL_161;
          }
          v107 = (size_t)v110;
LABEL_149:
          sub_2236E10(v159, &v159[1].m128_u16[4], v107, 1);
          v108 = (__int16 *)((char *)ptr[0] + (unsigned __int64)ptr[1]);
          goto LABEL_150;
        }
      }
    }
    else
    {
      v106 = (char *)sub_145F790(v97, v92, &v173, 7);
      v107 = v105;
      if ( !v105 )
      {
        v106 = (char *)sub_145F790(v97, v92, v159, 5);
        v107 = v105;
        if ( !v105 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v97 + 56) + 1LL) & 8) != 0 )
          {
            v106 = "[[clang::fallthrough]]";
            v110 = (char *)j__strlen("[[clang::fallthrough]]");
          }
          else
          {
            v106 = "__attribute__((fallthrough))";
            v110 = (char *)j__strlen("__attribute__((fallthrough))");
          }
          goto LABEL_273;
        }
      }
    }
    v108 = &v159[1].m128_i16[4];
    *(__m128i *)&ptr[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    ptr[0] = &v159[1].m128_u16[4];
    if ( v105 <= 0x40 )
      goto LABEL_150;
    goto LABEL_149;
  }
LABEL_165:
  v118 = v190;
  if ( v193 )
    v119 = (unsigned __int64 *)((char *)v190 + 8 * HIDWORD(v191));
  else
    v119 = (unsigned __int64 *)((char *)v190 + 8 * (unsigned int)v191);
  if ( v190 != v119 )
  {
    v120 = *(_QWORD *)v190;
    if ( *(_QWORD *)v190 < 0xFFFFFFFFFFFFFFFELL )
    {
LABEL_253:
      v148 = v161 + 8;
LABEL_254:
      while ( 1 )
      {
        sub_168B9F0(&v173, v148, *(unsigned int *)(v120 + 4), 3805, 0);
        sub_15F7200(&v173);
        if ( v118 + 1 == v119 )
          break;
        v120 = v118[1];
        if ( v120 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v149 = v118 + 2;
          while ( 1 )
          {
            v118 = v149;
            if ( v149 == v119 )
              goto LABEL_172;
            v120 = *v149++;
            if ( v120 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_254;
          }
        }
        ++v118;
      }
    }
    else
    {
      v121 = (unsigned __int64 *)((char *)v190 + 8);
      while ( 1 )
      {
        v118 = v121;
        if ( v119 == v121 )
          break;
        v120 = *v121++;
        if ( v120 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_253;
      }
    }
  }
LABEL_172:
  v185 = off_2C44B38;
  if ( !v199 )
    free(v196);
  if ( !v193 )
    free(v190);
}
