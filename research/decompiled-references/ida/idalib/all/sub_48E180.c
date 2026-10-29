unsigned __int64 __fastcall sub_48E180(_QWORD *a1)
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
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // r13
  __int64 v21; // rbx
  char *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  void *v29; // rdi
  char *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rax
  size_t v37; // r9
  size_t v38; // r10
  char *v39; // rbp
  char *v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rsi
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
  char *v109; // rsi
  char *v110; // rax
  __int64 v111; // rax
  char *v112; // rcx
  char *v113; // rax
  __int64 v114; // rax
  char *v115; // rcx
  char *v116; // rax
  void *v117; // rdi
  __int64 v118; // rcx
  __int64 v119; // rax
  void *v120; // rax
  __int64 v121; // r15
  __int64 v122; // r13
  char *v123; // rbx
  __int64 v124; // rbp
  __int64 v125; // rsi
  __m128i v126; // xmm0
  void *v127; // rdi
  bool v128; // cf
  __int64 v129; // rax
  char *v130; // rsi
  char *v131; // rax
  unsigned __int64 v132; // r8
  __int64 v133; // rax
  char *v134; // rsi
  char *v135; // rax
  unsigned __int64 v136; // r8
  __int64 v137; // rax
  char *v138; // rsi
  char *v139; // rax
  size_t v140; // rdx
  const void *v141; // r11
  void *v142; // rdi
  __int64 v143; // rcx
  __int64 v144; // rax
  void *v145; // rax
  __int64 v146; // r15
  __int64 v147; // r13
  char *v148; // rbx
  __int64 v149; // rbp
  __int64 v150; // rsi
  __m128i v151; // xmm0
  void *v152; // rdi
  __int64 v153; // rax
  void *v154; // rax
  __int64 v155; // r13
  char *v156; // rbx
  char *v157; // rbp
  __int64 v158; // rsi
  __m128i v159; // xmm0
  void *v160; // rdi
  __int64 v161; // rax
  void *v162; // rax
  char *v163; // r13
  char *v164; // rbx
  __int64 v165; // rbp
  __int64 v166; // rsi
  __m128i v167; // xmm0
  void *v168; // rdi
  __int64 v169; // rax
  void *v170; // rax
  char *v171; // r13
  char *v172; // rbx
  __int64 v173; // rbp
  __int64 v174; // rsi
  __m128i v175; // xmm0
  void *v176; // rdi
  __int64 v177; // rax
  void *v178; // rax
  __int64 v179; // r13
  char *v180; // rbx
  char *v181; // rbp
  __int64 v182; // rsi
  __m128i v183; // xmm0
  void *v184; // rdi
  size_t v185; // r12
  char *v186; // r12
  char *v187; // rbp
  char *v188; // r14
  __int64 k; // r15
  __int64 v190; // rdx
  __int64 v191; // rsi
  void *v192; // rax
  const void *v193; // r12
  void *v194; // rdi
  void *v195; // rdi
  char *v196; // rbp
  char *v197; // r12
  char *v198; // r15
  __int64 v199; // r14
  __int64 v200; // rdx
  __int64 v201; // rsi
  void *v202; // rax
  void *v203; // rdi
  __int64 v204; // r12
  char **v205; // r13
  char *v206; // rdx
  char *v207; // r14
  char *i; // rbx
  char *v209; // rax
  void *v210; // rdi
  size_t v211; // [rsp+8h] [rbp-1C8h]
  size_t v212; // [rsp+10h] [rbp-1C0h]
  size_t v213; // [rsp+10h] [rbp-1C0h]
  __int64 v214; // [rsp+18h] [rbp-1B8h]
  char *v215; // [rsp+20h] [rbp-1B0h]
  size_t v216; // [rsp+28h] [rbp-1A8h]
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
  const void **v233; // [rsp+38h] [rbp-198h]
  __int64 v234; // [rsp+38h] [rbp-198h]
  char *v235; // [rsp+38h] [rbp-198h]
  char *v236; // [rsp+38h] [rbp-198h]
  int v237; // [rsp+38h] [rbp-198h]
  __int64 v238; // [rsp+38h] [rbp-198h]
  char *v239; // [rsp+38h] [rbp-198h]
  char *v240; // [rsp+38h] [rbp-198h]
  int v241; // [rsp+38h] [rbp-198h]
  __int64 v242; // [rsp+38h] [rbp-198h]
  char *v243; // [rsp+38h] [rbp-198h]
  __int64 v244; // [rsp+38h] [rbp-198h]
  char *v245; // [rsp+38h] [rbp-198h]
  __int64 v246; // [rsp+38h] [rbp-198h]
  char *v247; // [rsp+38h] [rbp-198h]
  __int64 v248; // [rsp+38h] [rbp-198h]
  char *v249; // [rsp+38h] [rbp-198h]
  __int64 v250; // [rsp+40h] [rbp-190h]
  __int64 v251; // [rsp+48h] [rbp-188h]
  __int64 v252; // [rsp+48h] [rbp-188h]
  size_t v253; // [rsp+48h] [rbp-188h]
  char *v254; // [rsp+48h] [rbp-188h]
  char *v255; // [rsp+48h] [rbp-188h]
  char *v256; // [rsp+48h] [rbp-188h]
  char *v257; // [rsp+48h] [rbp-188h]
  __int64 v258; // [rsp+50h] [rbp-180h]
  __int64 v259; // [rsp+50h] [rbp-180h]
  const void *v260; // [rsp+50h] [rbp-180h]
  __int64 v261; // [rsp+50h] [rbp-180h]
  __int64 v262; // [rsp+50h] [rbp-180h]
  __int64 v263; // [rsp+50h] [rbp-180h]
  __int64 v264; // [rsp+50h] [rbp-180h]
  char *v265; // [rsp+58h] [rbp-178h]
  char *v266; // [rsp+60h] [rbp-170h]
  __int64 v267; // [rsp+68h] [rbp-168h]
  __int64 v269; // [rsp+80h] [rbp-150h]
  __int64 v270; // [rsp+80h] [rbp-150h]
  __int64 v271; // [rsp+80h] [rbp-150h]
  __int64 v272; // [rsp+80h] [rbp-150h]
  void *v273; // [rsp+88h] [rbp-148h] BYREF
  __int128 v274; // [rsp+90h] [rbp-140h]
  char *v275; // [rsp+A8h] [rbp-128h] BYREF
  __int128 v276; // [rsp+B0h] [rbp-120h]
  char *v277; // [rsp+C8h] [rbp-108h] BYREF
  __int64 v278; // [rsp+D0h] [rbp-100h]
  __int64 v279; // [rsp+D8h] [rbp-F8h]
  void *v280; // [rsp+E8h] [rbp-E8h] BYREF
  __m128i v281; // [rsp+F0h] [rbp-E0h] BYREF
  void *v282; // [rsp+108h] [rbp-C8h] BYREF
  __m128i v283; // [rsp+110h] [rbp-C0h] BYREF
  void *v284; // [rsp+128h] [rbp-A8h] BYREF
  __m128i v285; // [rsp+130h] [rbp-A0h] BYREF
  void *dest; // [rsp+148h] [rbp-88h] BYREF
  size_t v287[3]; // [rsp+150h] [rbp-80h]
  void *ptr; // [rsp+168h] [rbp-68h] BYREF
  __int128 v289; // [rsp+170h] [rbp-60h]
  char v290; // [rsp+180h] [rbp-50h]
  unsigned __int64 v291; // [rsp+190h] [rbp-40h]

  v291 = __readfsqword(0x28u);
  v1 = a1[1];
  v274 = 0;
  v273 = nullptr;
  v2 = *(int *)(v1 + 28);
  if ( !*(_DWORD *)(v1 + 28) )
    return v291 - __readfsqword(0x28u);
  v273 = (void *)qvector_reserve(&v273, 0, *(int *)(v1 + 28), 24);
  v3 = v273;
  v4 = v274;
  if ( (unsigned __int64)v274 < v2 )
  {
    v5 = 3 * v274;
    do
    {
      v6 = &v3[v5];
      ++v4;
      v5 += 3;
      *v6 = 0;
      v3 = v273;
      *(_OWORD *)(v6 + 1) = 0;
    }
    while ( v2 != v4 );
  }
  v7 = *(_DWORD *)(v1 + 28);
  *(_QWORD *)&v274 = v2;
  if ( v7 <= 0 )
  {
    if ( !v3 )
      return v291 - __readfsqword(0x28u);
LABEL_268:
    v204 = 0;
    do
    {
      v205 = (char **)&v3[3 * v204];
      v206 = *v205;
      if ( *v205 )
      {
        v207 = v205[1];
        if ( v207 )
        {
          for ( i = nullptr; i != v207; ++i )
          {
            v209 = &v206[24 * (_QWORD)i];
            v210 = *(void **)v209;
            if ( *(_QWORD *)v209 )
            {
              *((_QWORD *)v209 + 1) = 0;
              qfree(v210);
              v206 = *v205;
            }
          }
        }
        v205[1] = nullptr;
        qfree(v206);
      }
      ++v204;
      v3 = v273;
    }
    while ( v204 != v2 );
LABEL_277:
    *(_QWORD *)&v274 = 0;
    qfree(v3);
    return v291 - __readfsqword(0x28u);
  }
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = a1[v8 + 7];
    v11 = switch_dbctx(*(int *)(v10 + 8));
    ptr = nullptr;
    v289 = 0;
    sub_631490(v11, &ptr, 85);
    if ( (unsigned __int64)v289 <= 1 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v289 = 0;
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
      *(_BYTE *)(v10 + 64) = sub_48C400(v12, (__int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v289 = 0;
        qfree(ptr);
      }
      v9 = 1;
    }
    v3 = v273;
    ++v8;
  }
  while ( *(_DWORD *)(v1 + 28) > (int)v8 );
  if ( !v9 )
  {
    if ( !v273 )
      return v291 - __readfsqword(0x28u);
    v2 = v274;
    if ( !(_QWORD)v274 )
      goto LABEL_277;
    goto LABEL_268;
  }
  v275 = nullptr;
  v18 = a1[9];
  v276 = 0;
  v214 = v18;
  sub_48BE80((void **)&v275, v273, (_QWORD *)v273 + 3);
  v19 = v3[4];
  v266 = v275;
  v267 = v276;
  if ( v19 )
  {
    v196 = (char *)qalloc_or_throw(24 * v19);
    v197 = v196;
    v198 = v196;
    v199 = 0;
    do
    {
      while ( 1 )
      {
        v200 = v3[3];
        *(_QWORD *)v198 = 0;
        *(_OWORD *)(v198 + 8) = 0;
        v201 = v200 + 24 * v199;
        if ( *(_QWORD *)(v201 + 8) )
          break;
        ++v199;
        v198 += 24;
        if ( v19 == v199 )
          goto LABEL_262;
      }
      v213 = *(_QWORD *)(v201 + 8);
      v202 = (void *)qalloc_or_throw(v213);
      *(_QWORD *)v198 = v202;
      ++v199;
      v198 += 24;
      *((_QWORD *)v198 - 1) = v213;
      memcpy(v202, *(const void **)v201, v213);
      *((_QWORD *)v198 - 2) = v213;
    }
    while ( v19 != v199 );
LABEL_262:
    if ( v196 )
    {
      do
      {
        v203 = *(void **)v197;
        if ( *(_QWORD *)v197 )
        {
          *((_QWORD *)v197 + 1) = 0;
          qfree(v203);
        }
        v197 += 24;
      }
      while ( &v196[24 * v19] != v197 );
      qfree(v196);
    }
  }
  v279 = 0;
  if ( v214 )
  {
    v277 = nullptr;
    v278 = 0;
    sub_48BE80((void **)&v277, v3, (_QWORD *)v273 + 6);
    v20 = v273;
    v215 = v277;
    v21 = *((_QWORD *)v273 + 7);
    v250 = v278;
    if ( v21 )
    {
      v186 = (char *)qalloc_or_throw(24 * v21);
      v187 = v186;
      v188 = v186;
      for ( k = 0; k != v21; ++k )
      {
        v190 = v20[6];
        *(_QWORD *)v188 = 0;
        *(_OWORD *)(v188 + 8) = 0;
        v191 = v190 + 24 * k;
        if ( *(_QWORD *)(v191 + 8) )
        {
          v216 = *(_QWORD *)(v191 + 8);
          v192 = (void *)qalloc_or_throw(v216);
          *(_QWORD *)v188 = v192;
          *((_QWORD *)v188 + 2) = v216;
          memcpy(v192, *(const void **)v191, v216);
          *((_QWORD *)v188 + 1) = v216;
        }
        v188 += 24;
      }
      if ( v186 )
      {
        do
        {
          v195 = *(void **)v187;
          if ( *(_QWORD *)v187 )
          {
            *((_QWORD *)v187 + 1) = 0;
            qfree(v195);
          }
          v187 += 24;
        }
        while ( &v186[24 * v21] != v187 );
        qfree(v186);
      }
    }
  }
  else
  {
    v215 = nullptr;
    v250 = 0;
  }
  v22 = v266;
  v280 = nullptr;
  v282 = nullptr;
  v281 = 0;
  v283 = 0;
  v285 = 0;
  v284 = nullptr;
  dest = nullptr;
  v265 = &v266[56 * v267];
  *(_OWORD *)v287 = 0;
  if ( v265 != v266 )
  {
    v23 = 0;
    v212 = (size_t)&v215[56 * v250];
    while ( 1 )
    {
      v24 = *(_QWORD *)v22;
      v211 = *(_QWORD *)v22 + 24LL * *((_QWORD *)v22 + 1);
      if ( v211 != *(_QWORD *)v22 )
        break;
LABEL_57:
      v22 += 56;
      if ( v265 == v22 )
        goto LABEL_58;
    }
    v25 = 0;
    while ( 1 )
    {
      v26 = *((_DWORD *)v22 + 12);
      if ( v26 )
      {
        switch ( v26 )
        {
          case 1:
            v111 = v281.m128i_i64[0];
            if ( v281.m128i_i64[1] < (unsigned __int64)(v281.m128i_i64[0] + 1) )
            {
              v234 = v281.m128i_i64[1];
              v118 = qvector_reserve(&v280, 0, v281.m128i_i64[0] + 1, 32);
              v119 = v281.m128i_i64[1];
              v281.m128i_i64[1] = v234;
              n = v119;
              v120 = v280;
              if ( v281.m128i_i64[0] - 1 >= 0 )
              {
                v235 = v22;
                v121 = v118;
                v122 = v281.m128i_i64[0] - 1;
                v251 = v24;
                v123 = (char *)v280;
                v258 = v25;
                v124 = v118;
                do
                {
                  v125 = *(_QWORD *)v123;
                  v126 = _mm_loadu_si128((const __m128i *)(v123 + 8));
                  *(_QWORD *)v123 = 0;
                  *((_QWORD *)v123 + 2) = 0;
                  *(_QWORD *)v124 = v125;
                  *(__m128i *)(v124 + 8) = v126;
                  *(_BYTE *)(v124 + 24) = v123[24];
                  v127 = *(void **)v123;
                  if ( *(_QWORD *)v123 )
                  {
                    *((_QWORD *)v123 + 1) = 0;
                    qfree(v127);
                  }
                  v123 += 32;
                  v124 += 32;
                  v128 = v122-- == 0;
                }
                while ( !v128 );
                v22 = v235;
                v24 = v251;
                v118 = v121;
                v25 = v258;
                v120 = v280;
              }
              v236 = (char *)v118;
              qfree(v120);
              v112 = v236;
              v281.m128i_i64[1] = n;
              v111 = v281.m128i_i64[0];
              v280 = v236;
            }
            else
            {
              v112 = (char *)v280;
            }
            v113 = &v112[32 * v111];
            *(_QWORD *)v113 = 0;
            *(_OWORD *)(v113 + 8) = 0;
            v113[24] = 0;
            ++v281.m128i_i64[0];
            ptr = nullptr;
            v289 = 0;
            if ( *(_QWORD *)(v24 + 8) )
            {
              nj = *(_QWORD *)(v24 + 8);
              ptr = (void *)qalloc_or_throw(nj);
              *((_QWORD *)&v289 + 1) = nj;
              memcpy(ptr, *(const void **)v24, nj);
              *(_QWORD *)&v289 = nj;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v282, (unsigned __int64)&ptr);
            v29 = ptr;
            if ( ptr )
              goto LABEL_38;
            break;
          case 2:
            ptr = nullptr;
            v289 = 0;
            if ( *(_QWORD *)(v24 + 8) )
            {
              nk = *(_QWORD *)(v24 + 8);
              ptr = (void *)qalloc_or_throw(nk);
              *((_QWORD *)&v289 + 1) = nk;
              memcpy(ptr, *(const void **)v24, nk);
              *(_QWORD *)&v289 = nk;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v280, (unsigned __int64)&ptr);
            if ( ptr )
              qfree(ptr);
            v114 = v283.m128i_i64[0];
            if ( v283.m128i_i64[1] < (unsigned __int64)(v283.m128i_i64[0] + 1) )
            {
              v238 = v283.m128i_i64[1];
              v143 = qvector_reserve(&v282, 0, v283.m128i_i64[0] + 1, 32);
              v144 = v283.m128i_i64[1];
              v283.m128i_i64[1] = v238;
              na = v144;
              v145 = v282;
              if ( v283.m128i_i64[0] - 1 >= 0 )
              {
                v239 = v22;
                v146 = v143;
                v147 = v283.m128i_i64[0] - 1;
                v252 = v24;
                v148 = (char *)v282;
                v259 = v25;
                v149 = v143;
                do
                {
                  v150 = *(_QWORD *)v148;
                  v151 = _mm_loadu_si128((const __m128i *)(v148 + 8));
                  *(_QWORD *)v148 = 0;
                  *((_QWORD *)v148 + 2) = 0;
                  *(_QWORD *)v149 = v150;
                  *(__m128i *)(v149 + 8) = v151;
                  *(_BYTE *)(v149 + 24) = v148[24];
                  v152 = *(void **)v148;
                  if ( *(_QWORD *)v148 )
                  {
                    *((_QWORD *)v148 + 1) = 0;
                    qfree(v152);
                  }
                  v148 += 32;
                  v149 += 32;
                  v128 = v147-- == 0;
                }
                while ( !v128 );
                v22 = v239;
                v24 = v252;
                v143 = v146;
                v25 = v259;
                v145 = v282;
              }
              v240 = (char *)v143;
              qfree(v145);
              v115 = v240;
              v283.m128i_i64[1] = na;
              v114 = v283.m128i_i64[0];
              v282 = v240;
            }
            else
            {
              v115 = (char *)v282;
            }
            v116 = &v115[32 * v114];
            *(_QWORD *)v116 = 0;
            *(_OWORD *)(v116 + 8) = 0;
            v116[24] = 0;
            ++v283.m128i_i64[0];
            break;
          case 3:
            v27 = *((_QWORD *)v22 + 3);
            ptr = nullptr;
            v289 = 0;
            v28 = v25 + v27;
            if ( *(_QWORD *)(v28 + 8) )
            {
              v233 = (const void **)v28;
              nf = *(_QWORD *)(v28 + 8);
              ptr = (void *)qalloc_or_throw(nf);
              *((_QWORD *)&v289 + 1) = nf;
              memcpy(ptr, *v233, nf);
              *(_QWORD *)&v289 = nf;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v280, (unsigned __int64)&ptr);
            if ( ptr )
              qfree(ptr);
            ptr = nullptr;
            v289 = 0;
            if ( *(_QWORD *)(v24 + 8) )
            {
              ng = *(_QWORD *)(v24 + 8);
              ptr = (void *)qalloc_or_throw(ng);
              *((_QWORD *)&v289 + 1) = ng;
              memcpy(ptr, *(const void **)v24, ng);
              *(_QWORD *)&v289 = ng;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v282, (unsigned __int64)&ptr);
            v29 = ptr;
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
        v289 = 0;
        if ( *(_QWORD *)(v24 + 8) )
        {
          nh = *(_QWORD *)(v24 + 8);
          ptr = (void *)qalloc_or_throw(nh);
          *((_QWORD *)&v289 + 1) = nh;
          memcpy(ptr, *(const void **)v24, nh);
          *(_QWORD *)&v289 = nh;
        }
        v290 = 1;
        sub_48DF10((__int64 *)&v280, (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
        ptr = nullptr;
        v289 = 0;
        if ( *(_QWORD *)(v24 + 8) )
        {
          ni = *(_QWORD *)(v24 + 8);
          ptr = (void *)qalloc_or_throw(ni);
          *((_QWORD *)&v289 + 1) = ni;
          memcpy(ptr, *(const void **)v24, ni);
          *(_QWORD *)&v289 = ni;
        }
        v290 = 1;
        sub_48DF10((__int64 *)&v282, (unsigned __int64)&ptr);
        v29 = ptr;
        if ( ptr )
LABEL_38:
          qfree(v29);
      }
      if ( v214 && (char *)v212 != v215 )
      {
        v30 = v215;
        v31 = 0;
        while ( 1 )
        {
          v32 = *((_QWORD *)v30 + 1);
          v33 = 0;
          v34 = v23 - v31;
          if ( v32 )
            break;
LABEL_150:
          v30 += 56;
          if ( (char *)v212 == v30 )
            goto LABEL_56;
        }
        while ( v34 != v33 )
        {
          if ( v32 == v33 + 1 )
          {
            v31 += v33 + 1;
            goto LABEL_150;
          }
          ++v33;
        }
        v35 = *((_DWORD *)v30 + 12);
        if ( v35 == 2 )
        {
          if ( dest )
          {
            v287[0] = 0;
            qfree(dest);
            dest = nullptr;
            v287[1] = 0;
          }
          v108 = v285.m128i_i64[0];
          if ( v285.m128i_i64[1] < (unsigned __int64)(v285.m128i_i64[0] + 1) )
          {
            v248 = v285.m128i_i64[1];
            v109 = (char *)qvector_reserve(&v284, 0, v285.m128i_i64[0] + 1, 32);
            v177 = v285.m128i_i64[1];
            v285.m128i_i64[1] = v248;
            ne = v177;
            v178 = v284;
            if ( v285.m128i_i64[0] - 1 >= 0 )
            {
              v257 = v109;
              v249 = v22;
              v179 = v285.m128i_i64[0] - 1;
              v264 = v24;
              v180 = (char *)v284;
              v272 = v25;
              v181 = v109;
              do
              {
                v182 = *(_QWORD *)v180;
                v183 = _mm_loadu_si128((const __m128i *)(v180 + 8));
                *(_QWORD *)v180 = 0;
                *((_QWORD *)v180 + 2) = 0;
                *(_QWORD *)v181 = v182;
                *(__m128i *)(v181 + 8) = v183;
                v181[24] = v180[24];
                v184 = *(void **)v180;
                if ( *(_QWORD *)v180 )
                {
                  *((_QWORD *)v180 + 1) = 0;
                  qfree(v184);
                }
                v180 += 32;
                v181 += 32;
                v128 = v179-- == 0;
              }
              while ( !v128 );
              v22 = v249;
              v109 = v257;
              v24 = v264;
              v25 = v272;
              v178 = v284;
            }
            qfree(v178);
            v285.m128i_i64[1] = ne;
            v108 = v285.m128i_i64[0];
            v284 = v109;
          }
          else
          {
            v109 = (char *)v284;
          }
          v110 = &v109[32 * v108];
          *(_QWORD *)v110 = 0;
          *(_OWORD *)(v110 + 8) = 0;
          v110[24] = 0;
          ++v285.m128i_i64[0];
        }
        else
        {
          v36 = *(_QWORD *)v30 + 24 * v34;
          if ( (void **)v36 != &dest )
          {
            v37 = *(_QWORD *)(v36 + 8);
            if ( v37 && (v38 = v37 - 1, v37 != 1) )
            {
              v141 = *(const void **)v36;
              v142 = dest;
              if ( v287[1] < v37 )
              {
                v260 = *(const void **)v36;
                v253 = v37 - 1;
                v241 = v35;
                nn = *(_QWORD *)(v36 + 8);
                dest = (void *)qvector_reserve(&dest, dest, nn, 1);
                v141 = v260;
                v142 = dest;
                v38 = v253;
                v35 = v241;
                v37 = nn;
              }
              v237 = v35;
              v287[0] = v37;
              no = v37;
              memmove(v142, v141, v38);
              v35 = v237;
              *((char *)dest + no - 1) = 0;
            }
            else
            {
              v287[0] = 0;
            }
          }
          if ( !v35 || v35 == 3 )
          {
            ptr = nullptr;
            v289 = 0;
            if ( v287[0] )
            {
              nl = v287[0];
              ptr = (void *)qalloc_or_throw(v287[0]);
              *((_QWORD *)&v289 + 1) = nl;
              memcpy(ptr, dest, nl);
              *(_QWORD *)&v289 = nl;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v284, (unsigned __int64)&ptr);
            v117 = ptr;
            if ( ptr )
LABEL_181:
              qfree(v117);
          }
          else if ( v35 == 1 )
          {
            v129 = v285.m128i_i64[0];
            if ( v285.m128i_i64[1] < (unsigned __int64)(v285.m128i_i64[0] + 1) )
            {
              v246 = v285.m128i_i64[1];
              v130 = (char *)qvector_reserve(&v284, 0, v285.m128i_i64[0] + 1, 32);
              v169 = v285.m128i_i64[1];
              v285.m128i_i64[1] = v246;
              nd = v169;
              v170 = v284;
              if ( v285.m128i_i64[0] - 1 >= 0 )
              {
                v256 = v130;
                v247 = v22;
                v171 = v130;
                v263 = v24;
                v172 = (char *)v284;
                v271 = v25;
                v173 = v285.m128i_i64[0] - 1;
                do
                {
                  v174 = *(_QWORD *)v172;
                  v175 = _mm_loadu_si128((const __m128i *)(v172 + 8));
                  *(_QWORD *)v172 = 0;
                  *((_QWORD *)v172 + 2) = 0;
                  *(_QWORD *)v171 = v174;
                  *(__m128i *)(v171 + 8) = v175;
                  v171[24] = v172[24];
                  v176 = *(void **)v172;
                  if ( *(_QWORD *)v172 )
                  {
                    *((_QWORD *)v172 + 1) = 0;
                    qfree(v176);
                  }
                  v172 += 32;
                  v171 += 32;
                  v128 = v173-- == 0;
                }
                while ( !v128 );
                v22 = v247;
                v130 = v256;
                v24 = v263;
                v25 = v271;
                v170 = v284;
              }
              qfree(v170);
              v285.m128i_i64[1] = nd;
              v129 = v285.m128i_i64[0];
              v284 = v130;
            }
            else
            {
              v130 = (char *)v284;
            }
            v131 = &v130[32 * v129];
            *(_QWORD *)v131 = 0;
            *(_OWORD *)(v131 + 8) = 0;
            v132 = v281.m128i_u64[1];
            v131[24] = 0;
            v133 = v281.m128i_i64[0];
            ++v285.m128i_i64[0];
            if ( v132 < v281.m128i_i64[0] + 1 )
            {
              v244 = v132;
              v134 = (char *)qvector_reserve(&v280, 0, v281.m128i_i64[0] + 1, 32);
              v161 = v281.m128i_i64[1];
              v281.m128i_i64[1] = v244;
              nc = v161;
              v162 = v280;
              if ( v281.m128i_i64[0] - 1 >= 0 )
              {
                v255 = v134;
                v245 = v22;
                v163 = v134;
                v262 = v24;
                v164 = (char *)v280;
                v270 = v25;
                v165 = v281.m128i_i64[0] - 1;
                do
                {
                  v166 = *(_QWORD *)v164;
                  v167 = _mm_loadu_si128((const __m128i *)(v164 + 8));
                  *(_QWORD *)v164 = 0;
                  *((_QWORD *)v164 + 2) = 0;
                  *(_QWORD *)v163 = v166;
                  *(__m128i *)(v163 + 8) = v167;
                  v163[24] = v164[24];
                  v168 = *(void **)v164;
                  if ( *(_QWORD *)v164 )
                  {
                    *((_QWORD *)v164 + 1) = 0;
                    qfree(v168);
                  }
                  v164 += 32;
                  v163 += 32;
                  v128 = v165-- == 0;
                }
                while ( !v128 );
                v22 = v245;
                v134 = v255;
                v24 = v262;
                v25 = v270;
                v162 = v280;
              }
              qfree(v162);
              v281.m128i_i64[1] = nc;
              v133 = v281.m128i_i64[0];
              v280 = v134;
            }
            else
            {
              v134 = (char *)v280;
            }
            v135 = &v134[32 * v133];
            *(_QWORD *)v135 = 0;
            *(_OWORD *)(v135 + 8) = 0;
            v136 = v283.m128i_u64[1];
            v135[24] = 0;
            v137 = v283.m128i_i64[0];
            ++v281.m128i_i64[0];
            if ( v136 < v283.m128i_i64[0] + 1 )
            {
              v242 = v136;
              v138 = (char *)qvector_reserve(&v282, 0, v283.m128i_i64[0] + 1, 32);
              v153 = v283.m128i_i64[1];
              v283.m128i_i64[1] = v242;
              nb = v153;
              v154 = v282;
              if ( v283.m128i_i64[0] - 1 >= 0 )
              {
                v254 = v138;
                v243 = v22;
                v155 = v283.m128i_i64[0] - 1;
                v261 = v24;
                v156 = v138;
                v269 = v25;
                v157 = (char *)v282;
                do
                {
                  v158 = *(_QWORD *)v157;
                  v159 = _mm_loadu_si128((const __m128i *)(v157 + 8));
                  *(_QWORD *)v157 = 0;
                  *((_QWORD *)v157 + 2) = 0;
                  *(_QWORD *)v156 = v158;
                  *(__m128i *)(v156 + 8) = v159;
                  v156[24] = v157[24];
                  v160 = *(void **)v157;
                  if ( *(_QWORD *)v157 )
                  {
                    *((_QWORD *)v157 + 1) = 0;
                    qfree(v160);
                  }
                  v157 += 32;
                  v156 += 32;
                  v128 = v155-- == 0;
                }
                while ( !v128 );
                v22 = v243;
                v138 = v254;
                v24 = v261;
                v25 = v269;
                v154 = v282;
              }
              qfree(v154);
              v283.m128i_i64[1] = nb;
              v137 = v283.m128i_i64[0];
              v282 = v138;
            }
            else
            {
              v138 = (char *)v282;
            }
            v139 = &v138[32 * v137];
            *(_QWORD *)v139 = 0;
            *(_OWORD *)(v139 + 8) = 0;
            v140 = v287[0];
            v139[24] = 0;
            ++v283.m128i_i64[0];
            ptr = nullptr;
            v289 = 0;
            if ( v140 )
            {
              nm = v140;
              ptr = (void *)qalloc_or_throw(v140);
              *((_QWORD *)&v289 + 1) = nm;
              memcpy(ptr, dest, nm);
              *(_QWORD *)&v289 = nm;
            }
            v290 = 1;
            sub_48DF10((__int64 *)&v284, (unsigned __int64)&ptr);
            v117 = ptr;
            if ( ptr )
              goto LABEL_181;
          }
        }
        ++v23;
      }
LABEL_56:
      v25 += 24;
      v24 += 24;
      if ( v211 == v24 )
        goto LABEL_57;
    }
  }
  v23 = 0;
LABEL_58:
  if ( v214 )
  {
    v39 = &v215[56 * v250];
    if ( v39 != v215 )
    {
      while ( 1 )
      {
        v40 = v215;
        v41 = 0;
        while ( 1 )
        {
          v42 = *((_QWORD *)v40 + 1);
          v43 = 0;
          v44 = v23 - v41;
          if ( v42 )
            break;
LABEL_210:
          v40 += 56;
          if ( v39 == v40 )
            goto LABEL_73;
        }
        while ( v44 != v43 )
        {
          if ( v43 + 1 == v42 )
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
          v193 = *(const void **)v45;
          v194 = dest;
          if ( v287[1] < v46 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v46, 1);
            v194 = dest;
          }
          v287[0] = v46;
          memmove(v194, v193, v46 - 1);
          *((char *)dest + v46 - 1) = 0;
          v185 = v287[0];
          goto LABEL_242;
        }
        v287[0] = 0;
        ptr = nullptr;
        v289 = 0;
LABEL_70:
        v290 = 1;
        sub_48DF10((__int64 *)&v284, (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
        ++v23;
        if ( v39 == v215 )
          goto LABEL_73;
      }
      if ( dest )
      {
        v287[0] = 0;
        qfree(dest);
        dest = nullptr;
        v185 = v287[0];
        v287[1] = 0;
      }
      else
      {
LABEL_244:
        v185 = v287[0];
      }
LABEL_242:
      ptr = nullptr;
      v289 = 0;
      if ( v185 )
      {
        ptr = (void *)qalloc_or_throw(v185);
        *((_QWORD *)&v289 + 1) = v185;
        memcpy(ptr, dest, v185);
        *(_QWORD *)&v289 = v185;
      }
      goto LABEL_70;
    }
  }
LABEL_73:
  v47 = _mm_loadu_si128(&v281);
  v48 = (const __m128i *)a1[7];
  v49 = (const __m128i *)a1[8];
  v50 = (void *)v48[2].m128i_i64[1];
  v51 = _mm_loadu_si128(v48 + 3);
  v48[2].m128i_i64[1] = (__int64)v280;
  v48[3] = v47;
  v52 = (void *)v49[2].m128i_i64[1];
  v53 = _mm_loadu_si128(&v283);
  v280 = v50;
  v281 = v51;
  v54 = _mm_loadu_si128(v49 + 3);
  v49[2].m128i_i64[1] = (__int64)v282;
  v282 = v52;
  v49[3] = v53;
  v283 = v54;
  if ( v214 )
  {
    v55 = (const __m128i *)a1[9];
    v56 = _mm_loadu_si128(&v285);
    v57 = (void *)v55[2].m128i_i64[1];
    v58 = _mm_loadu_si128(v55 + 3);
    v55[2].m128i_i64[1] = (__int64)v284;
    v55[3] = v56;
    v284 = v57;
    v285 = v58;
  }
  if ( dest )
  {
    v287[0] = 0;
    qfree(dest);
  }
  v59 = (char *)v284;
  if ( v284 )
  {
    v60 = v285.m128i_i64[0];
    if ( v285.m128i_i64[0] )
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
          v59 = (char *)v284;
        }
        ++v61;
      }
      while ( v60 != v61 );
    }
    v285.m128i_i64[0] = 0;
    qfree(v59);
  }
  v64 = (char *)v282;
  if ( v282 )
  {
    v65 = v283.m128i_i64[0];
    if ( v283.m128i_i64[0] )
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
          v64 = (char *)v282;
        }
        ++v66;
      }
      while ( v65 != v66 );
    }
    v283.m128i_i64[0] = 0;
    qfree(v64);
  }
  v69 = (char *)v280;
  if ( v280 )
  {
    v70 = v281.m128i_i64[0];
    if ( v281.m128i_i64[0] )
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
          v69 = (char *)v280;
        }
        ++v71;
      }
      while ( v70 != v71 );
    }
    v281.m128i_i64[0] = 0;
    qfree(v69);
  }
  if ( v215 )
  {
    v74 = 0;
    v75 = v215;
    if ( v250 )
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
      while ( v74 != v250 );
    }
    qfree(v215);
  }
  if ( v266 )
  {
    v86 = 0;
    v87 = v266;
    if ( v267 )
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
      while ( v86 != v267 );
    }
    qfree(v266);
  }
  v98 = (char *)v273;
  if ( v273 )
  {
    v99 = v274;
    if ( (_QWORD)v274 )
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
          v98 = (char *)v273;
        }
        ++v100;
      }
      while ( v99 != v100 );
    }
    *(_QWORD *)&v274 = 0;
    qfree(v98);
  }
  return v291 - __readfsqword(0x28u);
}
