unsigned __int64 __fastcall sub_479780(_QWORD *a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  int v7; // r9d
  __int64 v8; // rbp
  char v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r13
  char *v13; // rdx
  __int64 v14; // r15
  __int64 j; // rbx
  char *v16; // rax
  void *v17; // rdi
  __int64 p_ptr; // rsi
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // r13
  __int64 v22; // rbx
  char *v23; // r13
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  void *v30; // rdi
  char *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rax
  size_t v37; // r9
  size_t v38; // r10
  char *v39; // rbp
  char *v40; // rdi
  __int64 v41; // r8
  const char *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  size_t v46; // r13
  __m128i v47; // xmm1
  const __m128i *v48; // rdx
  const __m128i *v49; // rax
  void *v50; // rcx
  __m128i v51; // xmm0
  void *v52; // rdx
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  const __m128i *v55; // rax
  __m128i v56; // xmm1
  void *v57; // rdx
  __m128i v58; // xmm0
  char *v59; // rdi
  __int64 v60; // rbp
  __int64 v61; // rbx
  char *v62; // rax
  void *v63; // rdx
  char *v64; // rdi
  __int64 v65; // rbp
  __int64 v66; // rbx
  char *v67; // rax
  void *v68; // rdx
  char *v69; // rdi
  __int64 v70; // rbp
  __int64 v71; // rbx
  char *v72; // rax
  void *v73; // rdx
  __int64 v74; // rbp
  char *v75; // rbx
  char *v76; // rdx
  __int64 v77; // r13
  __int64 m; // r12
  char *v79; // rax
  void *v80; // rdi
  char *v81; // rdx
  __int64 v82; // r13
  __int64 ii; // r12
  char *v84; // rax
  void *v85; // rdi
  __int64 v86; // r12
  char *v87; // rbp
  char *v88; // rdx
  __int64 v89; // r13
  __int64 jj; // rbx
  char *v91; // rax
  void *v92; // rdi
  char *v93; // rdx
  __int64 v94; // r13
  __int64 kk; // rbx
  char *v96; // rax
  void *v97; // rdi
  char *v98; // rdi
  __int64 v99; // r14
  __int64 v100; // rbp
  char *v101; // r13
  char *v102; // rdx
  __int64 v103; // r12
  __int64 mm; // rbx
  char *v105; // rax
  void *v106; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  char *v111; // rcx
  char *v112; // rax
  __int64 v113; // rax
  char *v114; // rcx
  char *v115; // rax
  void *v116; // rdi
  __int64 v117; // rcx
  __int64 v118; // rax
  void *v119; // rax
  __int64 v120; // r15
  __int64 v121; // r13
  char *v122; // rbx
  __int64 v123; // rbp
  __int64 v124; // rsi
  __m128i v125; // xmm0
  void *v126; // rdi
  bool v127; // cf
  __int64 v128; // rax
  char *v129; // rsi
  char *v130; // rax
  unsigned __int64 v131; // r8
  __int64 v132; // rax
  char *v133; // rsi
  char *v134; // rax
  unsigned __int64 v135; // r8
  __int64 v136; // rax
  char *v137; // rsi
  char *v138; // rax
  size_t v139; // rdx
  const void *v140; // r11
  void *v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rax
  void *v144; // rax
  __int64 v145; // r15
  __int64 v146; // r13
  char *v147; // rbx
  __int64 v148; // rbp
  __int64 v149; // rsi
  __m128i v150; // xmm0
  void *v151; // rdi
  __int64 v152; // rax
  void *v153; // rax
  __int64 v154; // r13
  char *v155; // rbx
  char *v156; // rbp
  __int64 v157; // rsi
  __m128i v158; // xmm0
  void *v159; // rdi
  __int64 v160; // rax
  void *v161; // rax
  char *v162; // r13
  char *v163; // rbx
  __int64 v164; // rbp
  __int64 v165; // rsi
  __m128i v166; // xmm0
  void *v167; // rdi
  __int64 v168; // rax
  void *v169; // rax
  char *v170; // r13
  char *v171; // rbx
  __int64 v172; // rbp
  __int64 v173; // rsi
  __m128i v174; // xmm0
  void *v175; // rdi
  __int64 v176; // rax
  void *v177; // rax
  __int64 v178; // r13
  char *v179; // rbx
  __int64 v180; // rbp
  __int64 v181; // rsi
  __m128i v182; // xmm0
  void *v183; // rdi
  size_t v184; // r12
  char *v185; // r12
  char *v186; // rbp
  char *v187; // r14
  __int64 k; // r15
  __int64 v189; // rdx
  void *v190; // rax
  const char *v191; // r12
  void *v192; // rdi
  void *v193; // rdi
  char *v194; // rbp
  char *v195; // r12
  char *v196; // r15
  __int64 v197; // r14
  __int64 v198; // rdx
  void *v199; // rax
  void *v200; // rdi
  __int64 v201; // r12
  char **v202; // r13
  char *v203; // rdx
  char *v204; // r14
  char *i; // rbx
  char *v206; // rax
  void *v207; // rdi
  size_t v208; // [rsp+8h] [rbp-1C8h]
  size_t v209; // [rsp+10h] [rbp-1C0h]
  size_t v210; // [rsp+10h] [rbp-1C0h]
  __int64 v211; // [rsp+18h] [rbp-1B8h]
  char *v212; // [rsp+20h] [rbp-1B0h]
  size_t v213; // [rsp+28h] [rbp-1A8h]
  size_t ng; // [rsp+30h] [rbp-1A0h]
  size_t nf; // [rsp+30h] [rbp-1A0h]
  size_t nh; // [rsp+30h] [rbp-1A0h]
  size_t ni; // [rsp+30h] [rbp-1A0h]
  size_t nj; // [rsp+30h] [rbp-1A0h]
  size_t n; // [rsp+30h] [rbp-1A0h]
  size_t no; // [rsp+30h] [rbp-1A0h]
  size_t na; // [rsp+30h] [rbp-1A0h]
  size_t nk; // [rsp+30h] [rbp-1A0h]
  size_t nl; // [rsp+30h] [rbp-1A0h]
  size_t nn; // [rsp+30h] [rbp-1A0h]
  size_t nm; // [rsp+30h] [rbp-1A0h]
  size_t nb; // [rsp+30h] [rbp-1A0h]
  size_t nc; // [rsp+30h] [rbp-1A0h]
  size_t nd; // [rsp+30h] [rbp-1A0h]
  size_t ne; // [rsp+30h] [rbp-1A0h]
  const void **v230; // [rsp+38h] [rbp-198h]
  __int64 v231; // [rsp+38h] [rbp-198h]
  char *v232; // [rsp+38h] [rbp-198h]
  char *v233; // [rsp+38h] [rbp-198h]
  int v234; // [rsp+38h] [rbp-198h]
  __int64 v235; // [rsp+38h] [rbp-198h]
  char *v236; // [rsp+38h] [rbp-198h]
  char *v237; // [rsp+38h] [rbp-198h]
  int v238; // [rsp+38h] [rbp-198h]
  __int64 v239; // [rsp+38h] [rbp-198h]
  char *v240; // [rsp+38h] [rbp-198h]
  __int64 v241; // [rsp+38h] [rbp-198h]
  char *v242; // [rsp+38h] [rbp-198h]
  __int64 v243; // [rsp+38h] [rbp-198h]
  char *v244; // [rsp+38h] [rbp-198h]
  __int64 v245; // [rsp+38h] [rbp-198h]
  char *v246; // [rsp+38h] [rbp-198h]
  __int64 v247; // [rsp+40h] [rbp-190h]
  __int64 v248; // [rsp+48h] [rbp-188h]
  __int64 v249; // [rsp+48h] [rbp-188h]
  size_t v250; // [rsp+48h] [rbp-188h]
  char *v251; // [rsp+48h] [rbp-188h]
  char *v252; // [rsp+48h] [rbp-188h]
  char *v253; // [rsp+48h] [rbp-188h]
  __int64 v254; // [rsp+48h] [rbp-188h]
  __int64 v255; // [rsp+50h] [rbp-180h]
  __int64 v256; // [rsp+50h] [rbp-180h]
  const void *v257; // [rsp+50h] [rbp-180h]
  __int64 v258; // [rsp+50h] [rbp-180h]
  __int64 v259; // [rsp+50h] [rbp-180h]
  __int64 v260; // [rsp+50h] [rbp-180h]
  __int64 v261; // [rsp+50h] [rbp-180h]
  char *v262; // [rsp+58h] [rbp-178h]
  char *v263; // [rsp+60h] [rbp-170h]
  __int64 v264; // [rsp+68h] [rbp-168h]
  __int64 v266; // [rsp+80h] [rbp-150h]
  __int64 v267; // [rsp+80h] [rbp-150h]
  __int64 v268; // [rsp+80h] [rbp-150h]
  __int64 v269; // [rsp+80h] [rbp-150h]
  void *v270; // [rsp+88h] [rbp-148h] BYREF
  __int128 v271; // [rsp+90h] [rbp-140h]
  char *v272; // [rsp+A8h] [rbp-128h] BYREF
  __int128 v273; // [rsp+B0h] [rbp-120h]
  char *v274; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v275; // [rsp+D0h] [rbp-100h]
  __int64 v276; // [rsp+D8h] [rbp-F8h]
  void *v277; // [rsp+E8h] [rbp-E8h] BYREF
  __m128i v278; // [rsp+F0h] [rbp-E0h] BYREF
  void *v279; // [rsp+108h] [rbp-C8h] BYREF
  __m128i v280; // [rsp+110h] [rbp-C0h] BYREF
  void *v281; // [rsp+128h] [rbp-A8h] BYREF
  __m128i v282; // [rsp+130h] [rbp-A0h] BYREF
  void *dest; // [rsp+148h] [rbp-88h] BYREF
  size_t v284[3]; // [rsp+150h] [rbp-80h]
  void *ptr; // [rsp+168h] [rbp-68h] BYREF
  __int128 v286; // [rsp+170h] [rbp-60h]
  char v287; // [rsp+180h] [rbp-50h]
  unsigned __int64 v288; // [rsp+190h] [rbp-40h]

  v288 = __readfsqword(0x28u);
  v1 = a1[1];
  v271 = 0;
  v270 = nullptr;
  v2 = *(int *)(v1 + 28);
  if ( !*(_DWORD *)(v1 + 28) )
    return v288 - __readfsqword(0x28u);
  v270 = (void *)qvector_reserve(&v270, 0, *(int *)(v1 + 28), 24);
  v3 = v270;
  v4 = v271;
  if ( (unsigned __int64)v271 < v2 )
  {
    v5 = 3 * v271;
    do
    {
      v6 = &v3[v5];
      ++v4;
      v5 += 3;
      *v6 = 0;
      v3 = v270;
      *(_OWORD *)(v6 + 1) = 0;
    }
    while ( v2 != v4 );
  }
  v7 = *(_DWORD *)(v1 + 28);
  *(_QWORD *)&v271 = v2;
  if ( v7 <= 0 )
  {
    if ( !v3 )
      return v288 - __readfsqword(0x28u);
LABEL_268:
    v201 = 0;
    do
    {
      v202 = (char **)&v3[3 * v201];
      v203 = *v202;
      if ( *v202 )
      {
        v204 = v202[1];
        if ( v204 )
        {
          for ( i = nullptr; i != v204; ++i )
          {
            v206 = &v203[24 * (_QWORD)i];
            v207 = *(void **)v206;
            if ( *(_QWORD *)v206 )
            {
              *((_QWORD *)v206 + 1) = 0;
              qfree(v207);
              v203 = *v202;
            }
          }
        }
        v202[1] = nullptr;
        qfree(v203);
      }
      ++v201;
      v3 = v270;
    }
    while ( v201 != v2 );
LABEL_277:
    *(_QWORD *)&v271 = 0;
    qfree(v3);
    return v288 - __readfsqword(0x28u);
  }
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = a1[v8 + 7];
    v11 = switch_dbctx(*(int *)(v10 + 8));
    ptr = nullptr;
    v286 = 0;
    sub_614990(v11, &ptr, 85);
    if ( (unsigned __int64)v286 <= 1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v286 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v12 = &v3[3 * v8];
      v13 = (char *)*v12;
      if ( *v12 )
      {
        v14 = v12[1];
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = &v13[24 * j];
            v17 = *(void **)v16;
            if ( *(_QWORD *)v16 )
            {
              *((_QWORD *)v16 + 1) = 0;
              qfree(v17);
              v13 = (char *)*v12;
            }
          }
        }
        v12[1] = 0;
        qfree(v13);
        *v12 = 0;
        v12[2] = 0;
      }
      *(_BYTE *)(v10 + 64) = sub_477A50(v12, (__int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v286 = 0;
        qfree(ptr);
      }
      v9 = 1;
    }
    v3 = v270;
    ++v8;
  }
  while ( *(_DWORD *)(v1 + 28) > (int)v8 );
  if ( !v9 )
  {
    if ( !v270 )
      return v288 - __readfsqword(0x28u);
    v2 = v271;
    if ( !(_QWORD)v271 )
      goto LABEL_277;
    goto LABEL_268;
  }
  p_ptr = (__int64)v270;
  v272 = nullptr;
  v19 = a1[9];
  v273 = 0;
  v211 = v19;
  sub_4774D0((void **)&v272, v270, (_QWORD *)v270 + 3);
  v20 = v3[4];
  v263 = v272;
  v264 = v273;
  if ( v20 )
  {
    v194 = (char *)qalloc_or_throw(24 * v20, (const char *)p_ptr);
    v195 = v194;
    v196 = v194;
    v197 = 0;
    do
    {
      while ( 1 )
      {
        v198 = v3[3];
        *(_QWORD *)v196 = 0;
        *(_OWORD *)(v196 + 8) = 0;
        p_ptr = v198 + 24 * v197;
        if ( *(_QWORD *)(p_ptr + 8) )
          break;
        ++v197;
        v196 += 24;
        if ( v20 == v197 )
          goto LABEL_262;
      }
      v210 = *(_QWORD *)(p_ptr + 8);
      v199 = (void *)qalloc_or_throw(v210, (const char *)p_ptr);
      *(_QWORD *)v196 = v199;
      ++v197;
      v196 += 24;
      *((_QWORD *)v196 - 1) = v210;
      p_ptr = *(_QWORD *)p_ptr;
      memcpy(v199, (const void *)p_ptr, v210);
      *((_QWORD *)v196 - 2) = v210;
    }
    while ( v20 != v197 );
LABEL_262:
    if ( v194 )
    {
      do
      {
        v200 = *(void **)v195;
        if ( *(_QWORD *)v195 )
        {
          *((_QWORD *)v195 + 1) = 0;
          qfree(v200);
        }
        v195 += 24;
      }
      while ( &v194[24 * v20] != v195 );
      qfree(v194);
    }
  }
  v276 = 0;
  if ( v211 )
  {
    p_ptr = (__int64)v3;
    v274 = nullptr;
    v275 = 0;
    sub_4774D0((void **)&v274, v3, (_QWORD *)v270 + 6);
    v21 = v270;
    v212 = v274;
    v22 = *((_QWORD *)v270 + 7);
    v247 = v275;
    if ( v22 )
    {
      v185 = (char *)qalloc_or_throw(24 * v22, (const char *)p_ptr);
      v186 = v185;
      v187 = v185;
      for ( k = 0; k != v22; ++k )
      {
        v189 = v21[6];
        *(_QWORD *)v187 = 0;
        *(_OWORD *)(v187 + 8) = 0;
        p_ptr = v189 + 24 * k;
        if ( *(_QWORD *)(p_ptr + 8) )
        {
          v213 = *(_QWORD *)(p_ptr + 8);
          v190 = (void *)qalloc_or_throw(v213, (const char *)p_ptr);
          *(_QWORD *)v187 = v190;
          *((_QWORD *)v187 + 2) = v213;
          p_ptr = *(_QWORD *)p_ptr;
          memcpy(v190, (const void *)p_ptr, v213);
          *((_QWORD *)v187 + 1) = v213;
        }
        v187 += 24;
      }
      if ( v185 )
      {
        do
        {
          v193 = *(void **)v186;
          if ( *(_QWORD *)v186 )
          {
            *((_QWORD *)v186 + 1) = 0;
            qfree(v193);
          }
          v186 += 24;
        }
        while ( &v185[24 * v22] != v186 );
        qfree(v185);
      }
    }
  }
  else
  {
    v212 = nullptr;
    v247 = 0;
  }
  v23 = v263;
  v277 = nullptr;
  v279 = nullptr;
  v278 = 0;
  v280 = 0;
  v282 = 0;
  v281 = nullptr;
  dest = nullptr;
  v262 = &v263[56 * v264];
  *(_OWORD *)v284 = 0;
  if ( v262 != v263 )
  {
    v24 = 0;
    v209 = (size_t)&v212[56 * v247];
    while ( 1 )
    {
      v25 = *(_QWORD *)v23;
      v208 = *(_QWORD *)v23 + 24LL * *((_QWORD *)v23 + 1);
      if ( v208 != *(_QWORD *)v23 )
        break;
LABEL_57:
      v23 += 56;
      if ( v262 == v23 )
        goto LABEL_58;
    }
    v26 = 0;
    while ( 1 )
    {
      v27 = *((_DWORD *)v23 + 12);
      if ( v27 )
      {
        switch ( v27 )
        {
          case 1:
            v110 = v278.m128i_i64[0];
            if ( v278.m128i_i64[1] < (unsigned __int64)(v278.m128i_i64[0] + 1) )
            {
              p_ptr = 0;
              v231 = v278.m128i_i64[1];
              v117 = qvector_reserve(&v277, 0, v278.m128i_i64[0] + 1, 32);
              v118 = v278.m128i_i64[1];
              v278.m128i_i64[1] = v231;
              n = v118;
              v119 = v277;
              if ( v278.m128i_i64[0] - 1 >= 0 )
              {
                v232 = v23;
                v120 = v117;
                v121 = v278.m128i_i64[0] - 1;
                v248 = v25;
                v122 = (char *)v277;
                v255 = v26;
                v123 = v117;
                do
                {
                  v124 = *(_QWORD *)v122;
                  v125 = _mm_loadu_si128((const __m128i *)(v122 + 8));
                  *(_QWORD *)v122 = 0;
                  *((_QWORD *)v122 + 2) = 0;
                  *(_QWORD *)v123 = v124;
                  *(__m128i *)(v123 + 8) = v125;
                  p_ptr = (unsigned __int8)v122[24];
                  *(_BYTE *)(v123 + 24) = p_ptr;
                  v126 = *(void **)v122;
                  if ( *(_QWORD *)v122 )
                  {
                    *((_QWORD *)v122 + 1) = 0;
                    qfree(v126);
                  }
                  v122 += 32;
                  v123 += 32;
                  v127 = v121-- == 0;
                }
                while ( !v127 );
                v23 = v232;
                v25 = v248;
                v117 = v120;
                v26 = v255;
                v119 = v277;
              }
              v233 = (char *)v117;
              qfree(v119);
              v111 = v233;
              v278.m128i_i64[1] = n;
              v110 = v278.m128i_i64[0];
              v277 = v233;
            }
            else
            {
              v111 = (char *)v277;
            }
            v112 = &v111[32 * v110];
            *(_QWORD *)v112 = 0;
            *(_OWORD *)(v112 + 8) = 0;
            v112[24] = 0;
            ++v278.m128i_i64[0];
            ptr = nullptr;
            v286 = 0;
            if ( *(_QWORD *)(v25 + 8) )
            {
              nj = *(_QWORD *)(v25 + 8);
              ptr = (void *)qalloc_or_throw(nj, (const char *)p_ptr);
              *((_QWORD *)&v286 + 1) = nj;
              memcpy(ptr, *(const void **)v25, nj);
              *(_QWORD *)&v286 = nj;
            }
            p_ptr = (__int64)&ptr;
            v287 = 1;
            sub_479510((__int64 *)&v279, (unsigned __int64)&ptr);
            v30 = ptr;
            if ( ptr )
              goto LABEL_38;
            break;
          case 2:
            ptr = nullptr;
            v286 = 0;
            if ( *(_QWORD *)(v25 + 8) )
            {
              nk = *(_QWORD *)(v25 + 8);
              ptr = (void *)qalloc_or_throw(nk, (const char *)p_ptr);
              *((_QWORD *)&v286 + 1) = nk;
              memcpy(ptr, *(const void **)v25, nk);
              *(_QWORD *)&v286 = nk;
            }
            p_ptr = (__int64)&ptr;
            v287 = 1;
            sub_479510((__int64 *)&v277, (unsigned __int64)&ptr);
            if ( ptr )
              qfree(ptr);
            v113 = v280.m128i_i64[0];
            if ( v280.m128i_i64[1] < (unsigned __int64)(v280.m128i_i64[0] + 1) )
            {
              p_ptr = 0;
              v235 = v280.m128i_i64[1];
              v142 = qvector_reserve(&v279, 0, v280.m128i_i64[0] + 1, 32);
              v143 = v280.m128i_i64[1];
              v280.m128i_i64[1] = v235;
              na = v143;
              v144 = v279;
              if ( v280.m128i_i64[0] - 1 >= 0 )
              {
                v236 = v23;
                v145 = v142;
                v146 = v280.m128i_i64[0] - 1;
                v249 = v25;
                v147 = (char *)v279;
                v256 = v26;
                v148 = v142;
                do
                {
                  v149 = *(_QWORD *)v147;
                  v150 = _mm_loadu_si128((const __m128i *)(v147 + 8));
                  *(_QWORD *)v147 = 0;
                  *((_QWORD *)v147 + 2) = 0;
                  *(_QWORD *)v148 = v149;
                  *(__m128i *)(v148 + 8) = v150;
                  p_ptr = (unsigned __int8)v147[24];
                  *(_BYTE *)(v148 + 24) = p_ptr;
                  v151 = *(void **)v147;
                  if ( *(_QWORD *)v147 )
                  {
                    *((_QWORD *)v147 + 1) = 0;
                    qfree(v151);
                  }
                  v147 += 32;
                  v148 += 32;
                  v127 = v146-- == 0;
                }
                while ( !v127 );
                v23 = v236;
                v25 = v249;
                v142 = v145;
                v26 = v256;
                v144 = v279;
              }
              v237 = (char *)v142;
              qfree(v144);
              v114 = v237;
              v280.m128i_i64[1] = na;
              v113 = v280.m128i_i64[0];
              v279 = v237;
            }
            else
            {
              v114 = (char *)v279;
            }
            v115 = &v114[32 * v113];
            *(_QWORD *)v115 = 0;
            *(_OWORD *)(v115 + 8) = 0;
            v115[24] = 0;
            ++v280.m128i_i64[0];
            break;
          case 3:
            v28 = *((_QWORD *)v23 + 3);
            ptr = nullptr;
            v286 = 0;
            v29 = v26 + v28;
            if ( *(_QWORD *)(v29 + 8) )
            {
              v230 = (const void **)v29;
              nf = *(_QWORD *)(v29 + 8);
              ptr = (void *)qalloc_or_throw(nf, (const char *)p_ptr);
              *((_QWORD *)&v286 + 1) = nf;
              memcpy(ptr, *v230, nf);
              *(_QWORD *)&v286 = nf;
            }
            v287 = 1;
            sub_479510((__int64 *)&v277, (unsigned __int64)&ptr);
            if ( ptr )
              qfree(ptr);
            ptr = nullptr;
            v286 = 0;
            if ( *(_QWORD *)(v25 + 8) )
            {
              ng = *(_QWORD *)(v25 + 8);
              ptr = (void *)qalloc_or_throw(ng, (const char *)&ptr);
              *((_QWORD *)&v286 + 1) = ng;
              memcpy(ptr, *(const void **)v25, ng);
              *(_QWORD *)&v286 = ng;
            }
            p_ptr = (__int64)&ptr;
            v287 = 1;
            sub_479510((__int64 *)&v279, (unsigned __int64)&ptr);
            v30 = ptr;
            if ( ptr )
              goto LABEL_38;
            break;
          default:
            if ( !under_debugger )
              interr(2350);
            BUG();
        }
      }
      else
      {
        ptr = nullptr;
        v286 = 0;
        if ( *(_QWORD *)(v25 + 8) )
        {
          nh = *(_QWORD *)(v25 + 8);
          ptr = (void *)qalloc_or_throw(nh, (const char *)p_ptr);
          *((_QWORD *)&v286 + 1) = nh;
          memcpy(ptr, *(const void **)v25, nh);
          *(_QWORD *)&v286 = nh;
        }
        v287 = 1;
        sub_479510((__int64 *)&v277, (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
        ptr = nullptr;
        v286 = 0;
        if ( *(_QWORD *)(v25 + 8) )
        {
          ni = *(_QWORD *)(v25 + 8);
          ptr = (void *)qalloc_or_throw(ni, (const char *)&ptr);
          *((_QWORD *)&v286 + 1) = ni;
          memcpy(ptr, *(const void **)v25, ni);
          *(_QWORD *)&v286 = ni;
        }
        p_ptr = (__int64)&ptr;
        v287 = 1;
        sub_479510((__int64 *)&v279, (unsigned __int64)&ptr);
        v30 = ptr;
        if ( ptr )
LABEL_38:
          qfree(v30);
      }
      if ( v211 && (char *)v209 != v212 )
      {
        v31 = v212;
        v32 = 0;
        while ( 1 )
        {
          p_ptr = *((_QWORD *)v31 + 1);
          v33 = 0;
          v34 = v24 - v32;
          if ( p_ptr )
            break;
LABEL_150:
          v31 += 56;
          if ( (char *)v209 == v31 )
            goto LABEL_56;
        }
        while ( v34 != v33 )
        {
          if ( p_ptr == v33 + 1 )
          {
            v32 += v33 + 1;
            goto LABEL_150;
          }
          ++v33;
        }
        v35 = *((_DWORD *)v31 + 12);
        if ( v35 == 2 )
        {
          if ( dest )
          {
            v284[0] = 0;
            qfree(dest);
            dest = nullptr;
            v284[1] = 0;
          }
          v108 = v282.m128i_i64[0];
          if ( v282.m128i_i64[1] < (unsigned __int64)(v282.m128i_i64[0] + 1) )
          {
            v245 = v282.m128i_i64[1];
            p_ptr = qvector_reserve(&v281, 0, v282.m128i_i64[0] + 1, 32);
            v176 = v282.m128i_i64[1];
            v282.m128i_i64[1] = v245;
            ne = v176;
            v177 = v281;
            if ( v282.m128i_i64[0] - 1 >= 0 )
            {
              v254 = p_ptr;
              v246 = v23;
              v178 = v282.m128i_i64[0] - 1;
              v261 = v25;
              v179 = (char *)v281;
              v269 = v26;
              v180 = p_ptr;
              do
              {
                v181 = *(_QWORD *)v179;
                v182 = _mm_loadu_si128((const __m128i *)(v179 + 8));
                *(_QWORD *)v179 = 0;
                *((_QWORD *)v179 + 2) = 0;
                *(_QWORD *)v180 = v181;
                *(__m128i *)(v180 + 8) = v182;
                *(_BYTE *)(v180 + 24) = v179[24];
                v183 = *(void **)v179;
                if ( *(_QWORD *)v179 )
                {
                  *((_QWORD *)v179 + 1) = 0;
                  qfree(v183);
                }
                v179 += 32;
                v180 += 32;
                v127 = v178-- == 0;
              }
              while ( !v127 );
              v23 = v246;
              p_ptr = v254;
              v25 = v261;
              v26 = v269;
              v177 = v281;
            }
            qfree(v177);
            v282.m128i_i64[1] = ne;
            v108 = v282.m128i_i64[0];
            v281 = (void *)p_ptr;
          }
          else
          {
            p_ptr = (__int64)v281;
          }
          v109 = p_ptr + 32 * v108;
          *(_QWORD *)v109 = 0;
          *(_OWORD *)(v109 + 8) = 0;
          *(_BYTE *)(v109 + 24) = 0;
          ++v282.m128i_i64[0];
        }
        else
        {
          p_ptr = (__int64)&dest;
          v36 = *(_QWORD *)v31 + 24 * v34;
          if ( (void **)v36 != &dest )
          {
            v37 = *(_QWORD *)(v36 + 8);
            if ( v37 && (v38 = v37 - 1, v37 != 1) )
            {
              v140 = *(const void **)v36;
              v141 = dest;
              if ( v284[1] < v37 )
              {
                v257 = *(const void **)v36;
                v250 = v37 - 1;
                v238 = v35;
                nn = *(_QWORD *)(v36 + 8);
                dest = (void *)qvector_reserve(&dest, dest, nn, 1);
                v140 = v257;
                v141 = dest;
                v38 = v250;
                v35 = v238;
                v37 = nn;
              }
              p_ptr = (__int64)v140;
              v234 = v35;
              v284[0] = v37;
              no = v37;
              memmove(v141, v140, v38);
              v35 = v234;
              *((char *)dest + no - 1) = 0;
            }
            else
            {
              v284[0] = 0;
            }
          }
          if ( !v35 || v35 == 3 )
          {
            ptr = nullptr;
            v286 = 0;
            if ( v284[0] )
            {
              nl = v284[0];
              ptr = (void *)qalloc_or_throw(v284[0], (const char *)p_ptr);
              *((_QWORD *)&v286 + 1) = nl;
              memcpy(ptr, dest, nl);
              *(_QWORD *)&v286 = nl;
            }
            p_ptr = (__int64)&ptr;
            v287 = 1;
            sub_479510((__int64 *)&v281, (unsigned __int64)&ptr);
            v116 = ptr;
            if ( ptr )
LABEL_181:
              qfree(v116);
          }
          else if ( v35 == 1 )
          {
            v128 = v282.m128i_i64[0];
            if ( v282.m128i_i64[1] < (unsigned __int64)(v282.m128i_i64[0] + 1) )
            {
              v243 = v282.m128i_i64[1];
              v129 = (char *)qvector_reserve(&v281, 0, v282.m128i_i64[0] + 1, 32);
              v168 = v282.m128i_i64[1];
              v282.m128i_i64[1] = v243;
              nd = v168;
              v169 = v281;
              if ( v282.m128i_i64[0] - 1 >= 0 )
              {
                v253 = v129;
                v244 = v23;
                v170 = v129;
                v260 = v25;
                v171 = (char *)v281;
                v268 = v26;
                v172 = v282.m128i_i64[0] - 1;
                do
                {
                  v173 = *(_QWORD *)v171;
                  v174 = _mm_loadu_si128((const __m128i *)(v171 + 8));
                  *(_QWORD *)v171 = 0;
                  *((_QWORD *)v171 + 2) = 0;
                  *(_QWORD *)v170 = v173;
                  *(__m128i *)(v170 + 8) = v174;
                  v170[24] = v171[24];
                  v175 = *(void **)v171;
                  if ( *(_QWORD *)v171 )
                  {
                    *((_QWORD *)v171 + 1) = 0;
                    qfree(v175);
                  }
                  v171 += 32;
                  v170 += 32;
                  v127 = v172-- == 0;
                }
                while ( !v127 );
                v23 = v244;
                v129 = v253;
                v25 = v260;
                v26 = v268;
                v169 = v281;
              }
              qfree(v169);
              v282.m128i_i64[1] = nd;
              v128 = v282.m128i_i64[0];
              v281 = v129;
            }
            else
            {
              v129 = (char *)v281;
            }
            v130 = &v129[32 * v128];
            *(_QWORD *)v130 = 0;
            *(_OWORD *)(v130 + 8) = 0;
            v131 = v278.m128i_u64[1];
            v130[24] = 0;
            v132 = v278.m128i_i64[0];
            ++v282.m128i_i64[0];
            if ( v131 < v278.m128i_i64[0] + 1 )
            {
              v241 = v131;
              v133 = (char *)qvector_reserve(&v277, 0, v278.m128i_i64[0] + 1, 32);
              v160 = v278.m128i_i64[1];
              v278.m128i_i64[1] = v241;
              nc = v160;
              v161 = v277;
              if ( v278.m128i_i64[0] - 1 >= 0 )
              {
                v252 = v133;
                v242 = v23;
                v162 = v133;
                v259 = v25;
                v163 = (char *)v277;
                v267 = v26;
                v164 = v278.m128i_i64[0] - 1;
                do
                {
                  v165 = *(_QWORD *)v163;
                  v166 = _mm_loadu_si128((const __m128i *)(v163 + 8));
                  *(_QWORD *)v163 = 0;
                  *((_QWORD *)v163 + 2) = 0;
                  *(_QWORD *)v162 = v165;
                  *(__m128i *)(v162 + 8) = v166;
                  v162[24] = v163[24];
                  v167 = *(void **)v163;
                  if ( *(_QWORD *)v163 )
                  {
                    *((_QWORD *)v163 + 1) = 0;
                    qfree(v167);
                  }
                  v163 += 32;
                  v162 += 32;
                  v127 = v164-- == 0;
                }
                while ( !v127 );
                v23 = v242;
                v133 = v252;
                v25 = v259;
                v26 = v267;
                v161 = v277;
              }
              qfree(v161);
              v278.m128i_i64[1] = nc;
              v132 = v278.m128i_i64[0];
              v277 = v133;
            }
            else
            {
              v133 = (char *)v277;
            }
            v134 = &v133[32 * v132];
            *(_QWORD *)v134 = 0;
            *(_OWORD *)(v134 + 8) = 0;
            v135 = v280.m128i_u64[1];
            v134[24] = 0;
            v136 = v280.m128i_i64[0];
            ++v278.m128i_i64[0];
            if ( v135 < v280.m128i_i64[0] + 1 )
            {
              v239 = v135;
              v137 = (char *)qvector_reserve(&v279, 0, v280.m128i_i64[0] + 1, 32);
              v152 = v280.m128i_i64[1];
              v280.m128i_i64[1] = v239;
              nb = v152;
              v153 = v279;
              if ( v280.m128i_i64[0] - 1 >= 0 )
              {
                v251 = v137;
                v240 = v23;
                v154 = v280.m128i_i64[0] - 1;
                v258 = v25;
                v155 = v137;
                v266 = v26;
                v156 = (char *)v279;
                do
                {
                  v157 = *(_QWORD *)v156;
                  v158 = _mm_loadu_si128((const __m128i *)(v156 + 8));
                  *(_QWORD *)v156 = 0;
                  *((_QWORD *)v156 + 2) = 0;
                  *(_QWORD *)v155 = v157;
                  *(__m128i *)(v155 + 8) = v158;
                  v155[24] = v156[24];
                  v159 = *(void **)v156;
                  if ( *(_QWORD *)v156 )
                  {
                    *((_QWORD *)v156 + 1) = 0;
                    qfree(v159);
                  }
                  v156 += 32;
                  v155 += 32;
                  v127 = v154-- == 0;
                }
                while ( !v127 );
                v23 = v240;
                v137 = v251;
                v25 = v258;
                v26 = v266;
                v153 = v279;
              }
              qfree(v153);
              v280.m128i_i64[1] = nb;
              v136 = v280.m128i_i64[0];
              v279 = v137;
            }
            else
            {
              v137 = (char *)v279;
            }
            v138 = &v137[32 * v136];
            *(_QWORD *)v138 = 0;
            *(_OWORD *)(v138 + 8) = 0;
            v139 = v284[0];
            v138[24] = 0;
            ++v280.m128i_i64[0];
            ptr = nullptr;
            v286 = 0;
            if ( v139 )
            {
              nm = v139;
              ptr = (void *)qalloc_or_throw(v139, v137);
              *((_QWORD *)&v286 + 1) = nm;
              memcpy(ptr, dest, nm);
              *(_QWORD *)&v286 = nm;
            }
            p_ptr = (__int64)&ptr;
            v287 = 1;
            sub_479510((__int64 *)&v281, (unsigned __int64)&ptr);
            v116 = ptr;
            if ( ptr )
              goto LABEL_181;
          }
        }
        ++v24;
      }
LABEL_56:
      v26 += 24;
      v25 += 24;
      if ( v208 == v25 )
        goto LABEL_57;
    }
  }
  v24 = 0;
LABEL_58:
  if ( v211 )
  {
    v39 = &v212[56 * v247];
    if ( v39 != v212 )
    {
      while ( 1 )
      {
        v40 = v212;
        v41 = 0;
        while ( 1 )
        {
          v42 = *((const char **)v40 + 1);
          v43 = 0;
          v44 = v24 - v41;
          if ( v42 )
            break;
LABEL_210:
          v40 += 56;
          if ( v39 == v40 )
            goto LABEL_73;
        }
        while ( v44 != v43 )
        {
          if ( (const char *)(v43 + 1) == v42 )
          {
            v41 += v43 + 1;
            goto LABEL_210;
          }
          ++v43;
        }
        if ( *((_DWORD *)v40 + 12) == 2 )
          break;
        v45 = *(_QWORD *)v40 + 24 * v44;
        if ( (void **)v45 == &dest )
          goto LABEL_244;
        v46 = *(_QWORD *)(v45 + 8);
        if ( v46 > 1 )
        {
          v191 = *(const char **)v45;
          v192 = dest;
          if ( v284[1] < v46 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v46, 1);
            v192 = dest;
          }
          v42 = v191;
          v284[0] = v46;
          memmove(v192, v191, v46 - 1);
          *((char *)dest + v46 - 1) = 0;
          v184 = v284[0];
          goto LABEL_242;
        }
        v284[0] = 0;
        ptr = nullptr;
        v286 = 0;
LABEL_70:
        v287 = 1;
        sub_479510((__int64 *)&v281, (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
        ++v24;
        if ( v39 == v212 )
          goto LABEL_73;
      }
      if ( dest )
      {
        v284[0] = 0;
        qfree(dest);
        dest = nullptr;
        v184 = v284[0];
        v284[1] = 0;
      }
      else
      {
LABEL_244:
        v184 = v284[0];
      }
LABEL_242:
      ptr = nullptr;
      v286 = 0;
      if ( v184 )
      {
        ptr = (void *)qalloc_or_throw(v184, v42);
        *((_QWORD *)&v286 + 1) = v184;
        memcpy(ptr, dest, v184);
        *(_QWORD *)&v286 = v184;
      }
      goto LABEL_70;
    }
  }
LABEL_73:
  v47 = _mm_loadu_si128(&v278);
  v48 = (const __m128i *)a1[7];
  v49 = (const __m128i *)a1[8];
  v50 = (void *)v48[2].m128i_i64[1];
  v51 = _mm_loadu_si128(v48 + 3);
  v48[2].m128i_i64[1] = (__int64)v277;
  v48[3] = v47;
  v52 = (void *)v49[2].m128i_i64[1];
  v53 = _mm_loadu_si128(&v280);
  v277 = v50;
  v278 = v51;
  v54 = _mm_loadu_si128(v49 + 3);
  v49[2].m128i_i64[1] = (__int64)v279;
  v279 = v52;
  v49[3] = v53;
  v280 = v54;
  if ( v211 )
  {
    v55 = (const __m128i *)a1[9];
    v56 = _mm_loadu_si128(&v282);
    v57 = (void *)v55[2].m128i_i64[1];
    v58 = _mm_loadu_si128(v55 + 3);
    v55[2].m128i_i64[1] = (__int64)v281;
    v55[3] = v56;
    v281 = v57;
    v282 = v58;
  }
  if ( dest )
  {
    v284[0] = 0;
    qfree(dest);
  }
  v59 = (char *)v281;
  if ( v281 )
  {
    v60 = v282.m128i_i64[0];
    if ( v282.m128i_i64[0] )
    {
      v61 = 0;
      do
      {
        v62 = &v59[32 * v61];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          qfree(v63);
          v59 = (char *)v281;
        }
        ++v61;
      }
      while ( v60 != v61 );
    }
    v282.m128i_i64[0] = 0;
    qfree(v59);
  }
  v64 = (char *)v279;
  if ( v279 )
  {
    v65 = v280.m128i_i64[0];
    if ( v280.m128i_i64[0] )
    {
      v66 = 0;
      do
      {
        v67 = &v64[32 * v66];
        v68 = *(void **)v67;
        if ( *(_QWORD *)v67 )
        {
          *((_QWORD *)v67 + 1) = 0;
          qfree(v68);
          v64 = (char *)v279;
        }
        ++v66;
      }
      while ( v65 != v66 );
    }
    v280.m128i_i64[0] = 0;
    qfree(v64);
  }
  v69 = (char *)v277;
  if ( v277 )
  {
    v70 = v278.m128i_i64[0];
    if ( v278.m128i_i64[0] )
    {
      v71 = 0;
      do
      {
        v72 = &v69[32 * v71];
        v73 = *(void **)v72;
        if ( *(_QWORD *)v72 )
        {
          *((_QWORD *)v72 + 1) = 0;
          qfree(v73);
          v69 = (char *)v277;
        }
        ++v71;
      }
      while ( v70 != v71 );
    }
    v278.m128i_i64[0] = 0;
    qfree(v69);
  }
  if ( v212 )
  {
    v74 = 0;
    v75 = v212;
    if ( v247 )
    {
      do
      {
        v76 = *((char **)v75 + 3);
        if ( v76 )
        {
          v77 = *((_QWORD *)v75 + 4);
          if ( v77 )
          {
            for ( m = 0; m != v77; ++m )
            {
              v79 = &v76[24 * m];
              v80 = *(void **)v79;
              if ( *(_QWORD *)v79 )
              {
                *((_QWORD *)v79 + 1) = 0;
                qfree(v80);
                v76 = *((char **)v75 + 3);
              }
            }
          }
          *((_QWORD *)v75 + 4) = 0;
          qfree(v76);
        }
        v81 = *(char **)v75;
        if ( *(_QWORD *)v75 )
        {
          v82 = *((_QWORD *)v75 + 1);
          if ( v82 )
          {
            for ( ii = 0; ii != v82; ++ii )
            {
              v84 = &v81[24 * ii];
              v85 = *(void **)v84;
              if ( *(_QWORD *)v84 )
              {
                *((_QWORD *)v84 + 1) = 0;
                qfree(v85);
                v81 = *(char **)v75;
              }
            }
          }
          *((_QWORD *)v75 + 1) = 0;
          qfree(v81);
        }
        ++v74;
        v75 += 56;
      }
      while ( v74 != v247 );
    }
    qfree(v212);
  }
  if ( v263 )
  {
    v86 = 0;
    v87 = v263;
    if ( v264 )
    {
      do
      {
        v88 = *((char **)v87 + 3);
        if ( v88 )
        {
          v89 = *((_QWORD *)v87 + 4);
          if ( v89 )
          {
            for ( jj = 0; jj != v89; ++jj )
            {
              v91 = &v88[24 * jj];
              v92 = *(void **)v91;
              if ( *(_QWORD *)v91 )
              {
                *((_QWORD *)v91 + 1) = 0;
                qfree(v92);
                v88 = *((char **)v87 + 3);
              }
            }
          }
          *((_QWORD *)v87 + 4) = 0;
          qfree(v88);
        }
        v93 = *(char **)v87;
        if ( *(_QWORD *)v87 )
        {
          v94 = *((_QWORD *)v87 + 1);
          if ( v94 )
          {
            for ( kk = 0; kk != v94; ++kk )
            {
              v96 = &v93[24 * kk];
              v97 = *(void **)v96;
              if ( *(_QWORD *)v96 )
              {
                *((_QWORD *)v96 + 1) = 0;
                qfree(v97);
                v93 = *(char **)v87;
              }
            }
          }
          *((_QWORD *)v87 + 1) = 0;
          qfree(v93);
        }
        ++v86;
        v87 += 56;
      }
      while ( v86 != v264 );
    }
    qfree(v263);
  }
  v98 = (char *)v270;
  if ( v270 )
  {
    v99 = v271;
    if ( (_QWORD)v271 )
    {
      v100 = 0;
      do
      {
        v101 = &v98[24 * v100];
        v102 = *(char **)v101;
        if ( *(_QWORD *)v101 )
        {
          v103 = *((_QWORD *)v101 + 1);
          if ( v103 )
          {
            for ( mm = 0; mm != v103; ++mm )
            {
              v105 = &v102[24 * mm];
              v106 = *(void **)v105;
              if ( *(_QWORD *)v105 )
              {
                *((_QWORD *)v105 + 1) = 0;
                qfree(v106);
                v102 = *(char **)v101;
              }
            }
          }
          *((_QWORD *)v101 + 1) = 0;
          qfree(v102);
          v98 = (char *)v270;
        }
        ++v100;
      }
      while ( v99 != v100 );
    }
    *(_QWORD *)&v271 = 0;
    qfree(v98);
  }
  return v288 - __readfsqword(0x28u);
}

