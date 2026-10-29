__int64 __fastcall std::deque<std::vector<double>>::_M_insert_aux<std::_Deque_iterator<std::vector<double>,std::vector<double> const&,std::vector<double> const*>>(
        __m128 *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int64 a10,
        __int64 a11)
{
  const __m128i *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  const __m128i *v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  bool v30; // sf
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __m128i *v37; // rax
  signed __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  const __m128i *v44; // rbx
  __int64 *v45; // rdx
  __int64 *v46; // r9
  const __m128i *v47; // rsi
  __int64 **v48; // r10
  __int64 *k; // rax
  const __m128i *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbx
  const __m128i *v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rbx
  _QWORD *v67; // rsi
  _QWORD *v68; // rdi
  unsigned __int64 v69; // r10
  __int64 v70; // rcx
  __int64 v71; // rax
  _QWORD *m128i_i64; // r9
  __int64 v73; // r8
  _QWORD *v74; // rdx
  _QWORD **v75; // r10
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned __int64 *v79; // rax
  __int64 v80; // rsi
  const __m128i *v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdx
  unsigned __int64 v85; // r13
  __int64 v86; // r10
  __int64 v87; // rbx
  _QWORD *v88; // r15
  __int64 v89; // rcx
  __int64 v90; // r12
  __int64 v91; // r13
  void *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  _QWORD *v101; // rdi
  __m128 *v102; // rdi
  __m128 *v103; // rsi
  __int64 v105; // r12
  __int64 v106; // r14
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rax
  const __m128i *v110; // r9
  const __m128i *v111; // r15
  __m128i *v112; // rbx
  __int64 *v113; // rax
  __int64 *v114; // rdi
  unsigned __int64 v115; // r8
  __int64 v116; // rdx
  __int64 v117; // rdx
  __m128i *v118; // rdx
  _QWORD *v119; // rsi
  signed __int64 v120; // r13
  char *v121; // rcx
  _QWORD *v122; // rax
  __int64 v123; // r13
  __int64 v124; // rcx
  __int64 v125; // rax
  _QWORD *v126; // r15
  _QWORD *v127; // r12
  _QWORD *v128; // rbx
  __int64 v129; // r14
  unsigned __int64 v130; // rax
  _QWORD *i; // rax
  signed __int64 v132; // r13
  char *v133; // rcx
  __int64 v134; // r13
  _QWORD *v135; // rdi
  _QWORD **v136; // rsi
  _QWORD *v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rdx
  unsigned __int64 v140; // rdx
  __int64 v142; // rdi
  __int64 v143; // rax
  const __m128i *v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rdx
  unsigned __int64 *v154; // rax
  _QWORD *v155; // rsi
  _QWORD *v156; // rdi
  __int64 *v157; // rsi
  __int64 v158; // r8
  __int64 v159; // rdi
  unsigned __int64 v160; // rax
  __int64 v161; // r12
  const __m128i *v162; // r11
  __int64 v163; // r15
  __int64 v164; // rbx
  __int64 v165; // r14
  __int64 *v166; // r13
  void *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  unsigned __int64 v171; // rdx
  const __m128i *v172; // rdi
  __int64 v173; // rcx
  unsigned __int64 v174; // rdx
  __int64 v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rax
  __m128 *v180; // rax
  __m128 v181; // xmm0
  __m128 v182; // xmm1
  __m128 *v183; // rax
  __m128 v184; // xmm0
  __int64 v185; // rdx
  __int128 v186; // [rsp-20h] [rbp-1A0h]
  __m128 v187; // [rsp-10h] [rbp-190h]
  __int128 v188; // [rsp+20h] [rbp-160h] BYREF
  __int64 v189; // [rsp+30h] [rbp-150h] BYREF
  _QWORD *v190; // [rsp+38h] [rbp-148h] BYREF
  _QWORD *v191; // [rsp+40h] [rbp-140h] BYREF
  __int64 v192; // [rsp+48h] [rbp-138h]
  const __m128i *v193; // [rsp+50h] [rbp-130h] BYREF
  __int64 v194; // [rsp+58h] [rbp-128h]
  const __m128i *v195; // [rsp+60h] [rbp-120h] BYREF
  unsigned __int64 v196; // [rsp+68h] [rbp-118h] BYREF
  __int64 v197; // [rsp+70h] [rbp-110h] BYREF
  __m128i *j; // [rsp+78h] [rbp-108h]
  __m128 *v199; // [rsp+80h] [rbp-100h]
  const __m128i *v200; // [rsp+88h] [rbp-F8h]
  __int128 v201; // [rsp+90h] [rbp-F0h]
  __int128 v202; // [rsp+A0h] [rbp-E0h] BYREF
  __int128 v203; // [rsp+B0h] [rbp-D0h]
  _OWORD v204[2]; // [rsp+C0h] [rbp-C0h] BYREF
  __m128i v205; // [rsp+E0h] [rbp-A0h]
  __m128i v206; // [rsp+F0h] [rbp-90h]
  __m128i v207; // [rsp+100h] [rbp-80h]
  __m128 v208; // [rsp+110h] [rbp-70h] BYREF
  __m128 v209; // [rsp+120h] [rbp-60h]
  __m128 v210; // [rsp+130h] [rbp-50h] BYREF
  __m128 v211; // [rsp+140h] [rbp-40h]

  v12 = (const __m128i *)a1[2].m128_u64[0];
  v13 = a1[1].m128_i64[0];
  v14 = a1[2].m128_i64[1];
  *(_QWORD *)&v201 = a3;
  v15 = a2->m128i_i64[0] - a2->m128i_i64[1];
  v200 = v12;
  v16 = a1[3].m128_i64[0];
  v17 = (__int64)v12->m128i_i64 - v13;
  v18 = a2[1].m128i_i64[1];
  v19 = (const __m128i *)a1[4].m128_u64[1];
  j = (__m128i *)a2;
  v199 = a1;
  *(_QWORD *)&v202 = v14;
  *(_QWORD *)&v203 = v13;
  v20 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 3);
  v21 = v20 + 21 * (((v18 - v14) >> 3) - 1) - 0x5555555555555555LL * (v15 >> 3);
  v22 = v16 - a1[3].m128_u64[1];
  *(_QWORD *)&v204[0] = a1[3].m128_u64[1];
  v23 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
  v24 = v23 + 21 * ((((__int64)v19->m128i_i64 - v14) >> 3) - 1) + v20;
  if ( v24 >> 1 <= v21 )
  {
    *(_QWORD *)&v203 = a1[4].m128_u64[0];
    v53 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v203 - v16) >> 3) - 1;
    if ( (unsigned __int64)v201 > v53 )
    {
      std::deque<std::vector<double>>::_M_new_elements_at_back(v199, a3 - v53);
      v16 = v199[3].m128_i64[0];
      v140 = v199[4].m128_u64[0];
      v19 = (const __m128i *)v199[4].m128_u64[1];
      *(_QWORD *)&v204[0] = v199[3].m128_u64[1];
      *(_QWORD *)&v203 = v140;
      v23 = 0xAAAAAAAAAAAAAAABLL * ((v16 - *(_QWORD *)&v204[0]) >> 3);
      v54 = v201;
      v55 = v23 + v201;
      if ( (__int64)(v23 + v201) >= 0 )
        goto LABEL_25;
    }
    else
    {
      v54 = v201;
      v55 = v23 + v201;
      if ( (__int64)(v23 + v201) >= 0 )
      {
LABEL_25:
        if ( v55 <= 20 )
        {
          v193 = v19;
          v59 = v24 - v21;
          v60 = v23 - (v24 - v21);
          v194 = v16 + 24 * v54;
          v192 = v203;
          v195 = *(const __m128i **)&v204[0];
          if ( v60 >= 0 )
            goto LABEL_28;
          goto LABEL_126;
        }
        v56 = v55 / 21;
LABEL_27:
        v193 = (const __m128i *)((char *)v19 + 8 * v56);
        v57 = v193->m128i_i64[0] + 504;
        v195 = (const __m128i *)v193->m128i_i64[0];
        v192 = v57;
        v58 = 3 * (v55 - 21 * v56);
        v59 = v24 - v21;
        v60 = v23 - (v24 - v21);
        v194 = (__int64)&v195->m128i_i64[v58];
        if ( v60 >= 0 )
        {
LABEL_28:
          if ( v60 <= 20 )
          {
            v197 = (__int64)v19;
            v62 = *(_QWORD *)&v204[0];
            v200 = (const __m128i *)(v16 - 24 * v59);
            v63 = (__int64)v200;
LABEL_31:
            v64 = j;
            v65 = v203;
            j->m128i_i64[0] = v63;
            v66 = v197;
            v64->m128i_i64[1] = v62;
            v64[1].m128i_i64[0] = v65;
            v64[1].m128i_i64[1] = v66;
            if ( v59 > (__int64)v201 )
            {
              v67 = (_QWORD *)v199[3].m128_u64[0];
              v68 = (_QWORD *)v199[4].m128_u64[0];
              v69 = v199[4].m128_u64[1];
              v197 = v199[3].m128_i64[1];
              v70 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v67 - v197) >> 3) - v201;
              if ( v70 < 0 )
              {
                v153 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v70) >> 64;
                v71 = ~((v153 + ((unsigned __int64)(~v70 - v153) >> 1)) >> 4);
              }
              else
              {
                if ( v70 <= 20 )
                {
                  v200 = (const __m128i *)v69;
                  v73 = (__int64)v68;
                  m128i_i64 = (_QWORD *)v69;
                  *(_QWORD *)&v203 = &v67[-3 * v201];
                  v74 = (_QWORD *)v203;
LABEL_36:
                  v75 = (_QWORD **)(v69 + 8);
                  v76 = v67;
                  while ( v67 != v74 )
                  {
                    if ( v76 )
                    {
                      v76[1] = 0;
                      v76[2] = 0;
                      *v76 = 0;
                      *v76 = *v74;
                      *v74 = 0;
                      v77 = v76[1];
                      v76[1] = v74[1];
                      v74[1] = v77;
                      v78 = v76[2];
                      v76[2] = v74[2];
                      v74[2] = v78;
                    }
                    v74 += 3;
                    if ( v74 == (_QWORD *)v73 )
                    {
                      v74 = (_QWORD *)m128i_i64[1];
                      v76 += 3;
                      ++m128i_i64;
                      v73 = (__int64)(v74 + 63);
                      if ( v68 != v76 )
                        continue;
                    }
                    else
                    {
                      v76 += 3;
                      if ( v68 != v76 )
                        continue;
                    }
                    v76 = *v75++;
                    v68 = v76 + 63;
                  }
                  v79 = (unsigned __int64 *)v199;
                  v80 = v192;
                  v199[3].m128_u64[0] = v194;
                  v81 = v195;
                  v79[8] = v80;
                  v79[7] = (unsigned __int64)v81;
                  v79[9] = (unsigned __int64)v193;
                  v82 = j->m128i_i64[0];
                  v83 = j[1].m128i_i64[0];
                  v84 = j[1].m128i_i64[1];
                  v85 = 0xAAAAAAAAAAAAAAABLL * ((v83 - j->m128i_i64[0]) >> 3);
                  if ( (__int64)(v85
                               + 21 * ((((__int64)v200->m128i_i64 - v84) >> 3) - 1)
                               - 0x5555555555555555LL * (((__int64)v203 - v197) >> 3)) <= 0 )
                    goto LABEL_68;
                  v196 = 0xAAAAAAAAAAAAAAABLL;
                  v86 = v85
                      + 21 * ((((__int64)v200->m128i_i64 - v84) >> 3) - 1)
                      - 0x5555555555555555LL * (((__int64)v203 - v197) >> 3);
                  v195 = v19;
                  while ( 1 )
                  {
                    *(_QWORD *)&v202 = v196 * (((__int64)v203 - v197) >> 3);
                    *(_QWORD *)&v201 = v196 * ((v16 - *(_QWORD *)&v204[0]) >> 3);
                    if ( (_QWORD)v203 == v197 )
                    {
                      v87 = 21;
                      v88 = (_QWORD *)(v200[-1].m128i_i64[1] + 504);
                      v194 = v200[-1].m128i_i64[1];
                    }
                    else
                    {
                      v88 = (_QWORD *)v203;
                      v87 = v202;
                    }
                    if ( v16 == *(_QWORD *)&v204[0] )
                    {
                      v89 = 21;
                      v90 = v195[-1].m128i_i64[1] + 504;
                      v194 = v195[-1].m128i_i64[1];
                    }
                    else
                    {
                      v89 = v201;
                      v90 = v16;
                    }
                    if ( v86 <= v87 )
                      v87 = v86;
                    if ( v87 > v89 )
                      v87 = v89;
                    v91 = v196 * ((24 * v87) >> 3);
                    if ( 24 * v87 > 0 )
                    {
                      v194 = v86;
                      do
                      {
                        v90 -= 24;
                        v88 -= 3;
                        *(_QWORD *)(v90 + 8) = 0;
                        *(_QWORD *)(v90 + 16) = 0;
                        v92 = *(void **)v90;
                        *(_QWORD *)v90 = 0;
                        *(_QWORD *)v90 = *v88;
                        *v88 = 0;
                        v93 = *(_QWORD *)(v90 + 8);
                        *(_QWORD *)(v90 + 8) = v88[1];
                        v88[1] = v93;
                        v94 = *(_QWORD *)(v90 + 16);
                        *(_QWORD *)(v90 + 16) = v88[2];
                        v88[2] = v94;
                        if ( v92 )
                          operator delete(v92);
                        --v91;
                      }
                      while ( v91 );
                      v86 = v194;
                    }
                    v95 = v202 - v87;
                    if ( (__int64)v202 - v87 < 0 )
                      break;
                    if ( v95 > 20 )
                    {
                      v96 = v95 / 21;
                      goto LABEL_62;
                    }
                    v99 = v201 - v87;
                    *(_QWORD *)&v203 = v203 - 24 * v87;
                    if ( (__int64)v201 - v87 < 0 )
                    {
LABEL_173:
                      v100 = ~(~v99 / 0x15uLL);
                      goto LABEL_65;
                    }
LABEL_63:
                    if ( v99 <= 20 )
                    {
                      v16 -= 24 * v87;
                      goto LABEL_66;
                    }
                    v100 = v99 / 21;
LABEL_65:
                    v101 = (_QWORD *)v195->m128i_i64[v100];
                    v195 = (const __m128i *)((char *)v195 + 8 * v100);
                    *(_QWORD *)&v204[0] = v101;
                    v16 = (__int64)&v101[3 * (v99 - 21 * v100)];
LABEL_66:
                    v86 -= v87;
                    if ( v86 <= 0 )
                    {
                      v82 = j->m128i_i64[0];
                      v83 = j[1].m128i_i64[0];
                      v84 = j[1].m128i_i64[1];
LABEL_68:
                      v210.m128_u64[0] = v82;
                      v102 = &v208;
                      v103 = &v210;
                      v211.m128_u64[0] = v83;
                      v211.m128_u64[1] = v84;
                      v187.m128_u64[1] = a11;
                      v187.m128_i32[0] = a10;
                      v186 = a9;
                      v210.m128_u64[1] = j->m128i_u64[1];
                      return std::copy<std::vector<double>>(
                               (int)v102,
                               (int)v103,
                               v84,
                               v83,
                               v73,
                               (int)m128i_i64,
                               a7,
                               *((__int64 *)&a7 + 1),
                               a8,
                               *((__int64 *)&a8 + 1),
                               v186,
                               *((__int64 *)&v186 + 1),
                               v187.m128_i32[0],
                               v187.m128_i64[1]);
                    }
                  }
                  v96 = ~(~v95 / 0x15uLL);
LABEL_62:
                  v97 = v200->m128i_i64[v96];
                  v200 = (const __m128i *)((char *)v200 + 8 * v96);
                  v197 = v97;
                  v98 = v97 + 24 * (v95 - 21 * v96);
                  v99 = v201 - v87;
                  *(_QWORD *)&v203 = v98;
                  if ( (__int64)v201 - v87 < 0 )
                    goto LABEL_173;
                  goto LABEL_63;
                }
                v71 = v70 / 21;
              }
              v200 = (const __m128i *)(v69 + 8 * v71);
              m128i_i64 = v200->m128i_i64;
              v73 = v200->m128i_i64[0] + 504;
              v197 = v200->m128i_i64[0];
              *(_QWORD *)&v203 = v197 + 24 * (v70 - 21 * v71);
              v74 = (_QWORD *)v203;
              goto LABEL_36;
            }
            v191 = (_QWORD *)a8;
            v189 = *((_QWORD *)&a7 + 1);
            v196 = *((_QWORD *)&a8 + 1);
            v206 = _mm_loadu_si128((const __m128i *)&a7);
            v124 = v59 - 0x5555555555555555LL * ((__int64)(a7 - *((_QWORD *)&a7 + 1)) >> 3);
            v207 = _mm_loadu_si128((const __m128i *)&a8);
            if ( v124 < 0 )
            {
              v151 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v124) >> 64;
              v125 = ~((v151 + ((unsigned __int64)(~v124 - v151) >> 1)) >> 4);
            }
            else
            {
              if ( v124 <= 20 )
              {
                v126 = v191;
                v190 = (_QWORD *)(a7 + 24 * v59);
                v127 = v190;
                goto LABEL_98;
              }
              v125 = v124 / 21;
            }
            v196 += 8 * v125;
            v189 = *(_QWORD *)v196;
            v191 = (_QWORD *)(v189 + 504);
            v190 = (_QWORD *)(v189 + 24 * (v124 - 21 * v125));
            v126 = (_QWORD *)(v189 + 504);
            v127 = v190;
LABEL_98:
            v128 = (_QWORD *)v199[3].m128_u64[0];
            v129 = v199[4].m128_i64[0];
            *(_QWORD *)&v204[0] = a9;
            v130 = v199[4].m128_u64[1];
            *((_QWORD *)&v188 + 1) = v128;
            *(_QWORD *)&v202 = v196;
            *(_QWORD *)&v201 = v130;
LABEL_99:
            for ( i = v128; v127 != *(_QWORD **)&v204[0]; i = *(_QWORD **)v201 )
            {
              if ( v128 )
              {
                v132 = v127[1] - *v127;
                v133 = nullptr;
                *v128 = 0;
                v128[1] = 0;
                v128[2] = 0;
                if ( v132 >> 3 )
                {
                  if ( (unsigned __int64)(v132 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
                    std::__throw_bad_alloc();
                  v133 = (char *)operator new(v132);
                }
                *v128 = v133;
                v128[1] = v133;
                v128[2] = &v133[v132];
                v134 = v127[1] - *v127;
                if ( v127[1] != *v127 )
                  v133 = (char *)memmove(v133, (const void *)*v127, v127[1] - *v127);
                v128[1] = &v133[v134];
              }
              v127 += 3;
              if ( v127 == v126 )
              {
                v128 += 3;
                v127 = *(_QWORD **)(v202 + 8);
                *(_QWORD *)&v202 = v202 + 8;
                v126 = v127 + 63;
                if ( (_QWORD *)v129 != v128 )
                  goto LABEL_99;
              }
              else
              {
                v128 += 3;
                if ( (_QWORD *)v129 != v128 )
                  goto LABEL_99;
              }
              *(_QWORD *)&v201 = v201 + 8;
              v128 = *(_QWORD **)v201;
              v129 = *(_QWORD *)v201 + 504LL;
            }
            v73 = *((_QWORD *)&v188 + 1);
            m128i_i64 = (_QWORD *)v197;
            v83 = (__int64)v200;
            v135 = (_QWORD *)v203;
            v136 = (_QWORD **)(v201 + 8);
LABEL_111:
            v137 = (_QWORD *)v83;
            while ( 1 )
            {
              if ( (_QWORD *)v73 == v137 )
              {
LABEL_184:
                v183 = v199;
                v102 = &v210;
                v103 = &v208;
                v199[3] = _mm_loadh_ps((const double *)&v195);
                v183[4] = _mm_loadh_ps((const double *)&v193);
                v209 = (__m128)_mm_loadu_si128(j + 1);
                v184 = _mm_loadh_ps((const double *)&v196);
                v208 = (__m128)_mm_loadu_si128(j);
                v204[0] = v184;
                v207 = (__m128i)v184;
                v187 = v184;
                v204[0] = _mm_loadh_ps((const double *)&v189);
                LODWORD(v84) = DWORD2(v204[0]);
                v206 = (__m128i)v204[0];
                v186 = v204[0];
                return std::copy<std::vector<double>>(
                         (int)v102,
                         (int)v103,
                         v84,
                         v83,
                         v73,
                         (int)m128i_i64,
                         a7,
                         *((__int64 *)&a7 + 1),
                         a8,
                         *((__int64 *)&a8 + 1),
                         v186,
                         *((__int64 *)&v186 + 1),
                         v187.m128_i32[0],
                         v187.m128_i64[1]);
              }
              while ( 1 )
              {
                if ( i )
                {
                  i[1] = 0;
                  i[2] = 0;
                  *i = 0;
                  *i = *v137;
                  *v137 = 0;
                  v138 = i[1];
                  i[1] = v137[1];
                  v137[1] = v138;
                  v139 = i[2];
                  i[2] = v137[2];
                  v137[2] = v139;
                }
                v83 = (__int64)(v137 + 3);
                v137 += 3;
                if ( v137 != v135 )
                  break;
                i += 3;
                v137 = (_QWORD *)m128i_i64[1];
                v135 = v137 + 63;
                if ( (_QWORD *)v129 == i )
                {
                  v83 = m128i_i64[1];
                  ++m128i_i64;
LABEL_117:
                  i = *v136++;
                  v129 = (__int64)(i + 63);
                  goto LABEL_111;
                }
                ++m128i_i64;
                if ( (_QWORD *)v73 == v137 )
                  goto LABEL_184;
              }
              i += 3;
              if ( (_QWORD *)v129 == i )
                goto LABEL_117;
            }
          }
          v61 = v60 / 21;
LABEL_30:
          v62 = v19->m128i_i64[v61];
          v197 = (__int64)&v19->m128i_i64[v61];
          *(_QWORD *)&v203 = v62 + 504;
          v200 = (const __m128i *)(v62 + 24 * (v60 - 21 * v61));
          v63 = (__int64)v200;
          goto LABEL_31;
        }
LABEL_126:
        v148 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v60) >> 64;
        v61 = ~((v148 + ((unsigned __int64)(~v60 - v148) >> 1)) >> 4);
        goto LABEL_30;
      }
    }
    v146 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v55) >> 64;
    v56 = ~((v146 + ((unsigned __int64)(~v55 - v146) >> 1)) >> 4);
    goto LABEL_27;
  }
  v197 = a1[1].m128_i64[1];
  v25 = 0xAAAAAAAAAAAAAAABLL * ((v13 - v197) >> 3);
  if ( a3 <= v25 )
  {
    v26 = v201;
    v27 = v25 - v201;
    if ( (__int64)(v25 - v201) >= 0 )
      goto LABEL_4;
LABEL_123:
    v147 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v27) >> 64;
    v28 = ~((v147 + ((unsigned __int64)(~v27 - v147) >> 1)) >> 4);
LABEL_6:
    v191 = (_QWORD *)(v202 + 8 * v28);
    v29 = *v191 + 504LL;
    v190 = (_QWORD *)*v191;
    v193 = (const __m128i *)v29;
    v30 = (__int64)(v21 + v25) < 0;
    v31 = v21 + v25;
    v192 = (__int64)&v190[3 * (v27 - 21 * v28)];
    if ( !v30 )
      goto LABEL_7;
LABEL_129:
    v149 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v31) >> 64;
    v32 = ~((v149 + ((unsigned __int64)(~v31 - v149) >> 1)) >> 4);
    goto LABEL_9;
  }
  std::deque<std::vector<double>>::_M_new_elements_at_front(a1, a3 - v25);
  v142 = a1[1].m128_i64[1];
  v143 = a1[2].m128_i64[1];
  v144 = (const __m128i *)a1[2].m128_u64[0];
  *(_QWORD *)&v203 = a1[1].m128_u64[0];
  v197 = v142;
  *(_QWORD *)&v202 = v143;
  v145 = ((__int64)v203 - v142) >> 3;
  v26 = v201;
  v200 = v144;
  v25 = 0xAAAAAAAAAAAAAAABLL * v145;
  v27 = v25 - v201;
  if ( (__int64)(v25 - v201) < 0 )
    goto LABEL_123;
LABEL_4:
  if ( v27 > 20 )
  {
    v28 = v27 / 21;
    goto LABEL_6;
  }
  v30 = (__int64)(v21 + v25) < 0;
  v31 = v21 + v25;
  v192 = v203 - 24 * v26;
  v191 = (_QWORD *)v202;
  v193 = v200;
  v190 = (_QWORD *)v197;
  if ( v30 )
    goto LABEL_129;
LABEL_7:
  if ( v31 > 20 )
  {
    v32 = v31 / 21;
LABEL_9:
    v33 = (__int64 *)(v202 + 8 * v32);
    v34 = *v33;
    v35 = *v33 + 504;
    v36 = *v33 + 24 * (v31 - 21 * v32);
    goto LABEL_10;
  }
  v35 = (__int64)v200;
  v34 = v197;
  v36 = v203 + 24 * v21;
  v33 = (__int64 *)v202;
LABEL_10:
  v37 = j;
  j->m128i_i64[1] = v34;
  v38 = v201;
  v37->m128i_i64[0] = v36;
  v37[1].m128i_i64[0] = v35;
  v37[1].m128i_i64[1] = (__int64)v33;
  if ( (__int64)v21 < v38 )
  {
    v105 = a7;
    v106 = a8;
    v189 = *((_QWORD *)&a7 + 1);
    v196 = *((_QWORD *)&a8 + 1);
    v204[1] = _mm_loadu_si128((const __m128i *)&a7);
    v107 = v38 - v21 - 0x5555555555555555LL * ((__int64)(a7 - *((_QWORD *)&a7 + 1)) >> 3);
    v205 = _mm_loadu_si128((const __m128i *)&a8);
    if ( v107 < 0 )
    {
      v152 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v107) >> 64;
      v108 = *((_QWORD *)&a8 + 1);
      v109 = ~((v152 + ((unsigned __int64)(~v107 - v152) >> 1)) >> 4);
    }
    else
    {
      if ( v107 <= 20 )
      {
        *((_QWORD *)&v188 + 1) = *((_QWORD *)&a8 + 1);
        *(_QWORD *)&v201 = a7 + 24 * (v38 - v21);
LABEL_74:
        v110 = (const __m128i *)v191;
        v111 = v193;
        v112 = (__m128i *)v192;
        v113 = (__int64 *)v199[1].m128_u64[0];
        v114 = (__int64 *)v199[2].m128_u64[0];
        v115 = v199[2].m128_u64[1];
        v194 = (__int64)v190;
LABEL_75:
        if ( (__int64 *)v36 == v113 )
        {
LABEL_81:
          v118 = v112;
          v195 = v110;
          for ( j = (__m128i *)v111; ; j = (__m128i *)(v195->m128i_i64[0] + 504) )
          {
            *(_QWORD *)&v204[0] = v118;
            do
            {
              if ( v105 == (_QWORD)v201 )
              {
LABEL_177:
                v180 = v199;
                v181 = _mm_loadh_ps((const double *)&v190);
                v182 = _mm_loadh_ps((const double *)&v188 + 1);
                *(_QWORD *)&v204[0] = v105;
                v199[1] = v181;
                v205 = (__m128i)v182;
                v180[2] = _mm_loadh_ps((const double *)&v191);
                v208 = _mm_loadh_ps((const double *)&v197);
                v209 = _mm_loadh_ps((const double *)&v202);
                v204[0] = v182;
                v204[0] = _mm_loadh_ps((const double *)&v189);
                return std::copy<std::vector<double>>(
                         (int)&v210,
                         (int)&v208,
                         SDWORD2(v204[0]),
                         v36,
                         v115,
                         (int)v110,
                         *(__int64 *)&v204[0],
                         *((__int64 *)&v204[0] + 1),
                         v182.m128_i64[0],
                         v182.m128_i64[1],
                         a9,
                         *((__int64 *)&a9 + 1),
                         a10,
                         a11);
              }
              while ( 1 )
              {
                v119 = *(_QWORD **)&v204[0];
                if ( *(_QWORD *)&v204[0] )
                {
                  v120 = *(_QWORD *)(v105 + 8) - *(_QWORD *)v105;
                  **(_QWORD **)&v204[0] = 0;
                  v119[1] = 0;
                  v119[2] = 0;
                  if ( v120 >> 3 )
                  {
                    if ( (unsigned __int64)(v120 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
                      std::__throw_bad_alloc();
                    v121 = (char *)operator new(v120);
                    v122 = *(_QWORD **)&v204[0];
                  }
                  else
                  {
                    v121 = nullptr;
                    v122 = v119;
                  }
                  *v122 = v121;
                  v122[1] = v121;
                  v122[2] = &v121[v120];
                  v123 = *(_QWORD *)(v105 + 8) - *(_QWORD *)v105;
                  if ( *(_QWORD *)(v105 + 8) != *(_QWORD *)v105 )
                    v121 = (char *)memmove(v121, *(const void **)v105, *(_QWORD *)(v105 + 8) - *(_QWORD *)v105);
                  v36 = (__int64)&v121[v123];
                  *(_QWORD *)(*(_QWORD *)&v204[0] + 8LL) = v36;
                }
                v105 += 24;
                if ( v106 != v105 )
                  break;
                *(_QWORD *)&v204[0] += 24LL;
                v105 = *(_QWORD *)(v196 + 8);
                v196 += 8LL;
                v106 = v105 + 504;
                if ( j == *(__m128i **)&v204[0] )
                  goto LABEL_93;
                if ( v105 == (_QWORD)v201 )
                  goto LABEL_177;
              }
              *(_QWORD *)&v204[0] += 24LL;
            }
            while ( j != *(__m128i **)&v204[0] );
LABEL_93:
            v195 = (const __m128i *)((char *)v195 + 8);
            v118 = (__m128i *)v195->m128i_i64[0];
          }
        }
        while ( 1 )
        {
          if ( v112 )
          {
            v112->m128i_i64[1] = 0;
            v112[1].m128i_i64[0] = 0;
            v112->m128i_i64[0] = 0;
            v112->m128i_i64[0] = *v113;
            *v113 = 0;
            v116 = v112->m128i_i64[1];
            v112->m128i_i64[1] = v113[1];
            v113[1] = v116;
            v117 = v112[1].m128i_i64[0];
            v112[1].m128i_i64[0] = v113[2];
            v113[2] = v117;
          }
          v113 += 3;
          if ( v113 == v114 )
          {
            v113 = *(__int64 **)(v115 + 8);
            v112 = (__m128i *)((char *)v112 + 24);
            v115 += 8LL;
            v114 = v113 + 63;
            if ( v111 != v112 )
              goto LABEL_75;
          }
          else
          {
            v112 = (__m128i *)((char *)v112 + 24);
            if ( v111 != v112 )
              goto LABEL_75;
          }
          v110 = (const __m128i *)((char *)v110 + 8);
          v112 = (__m128i *)v110->m128i_i64[0];
          v111 = (const __m128i *)(v110->m128i_i64[0] + 504);
          v194 = v110->m128i_i64[0];
          if ( (__int64 *)v36 == v113 )
            goto LABEL_81;
        }
      }
      v108 = *((_QWORD *)&a8 + 1);
      v109 = v107 / 21;
    }
    *((_QWORD *)&v188 + 1) = v108 + 8 * v109;
    v189 = **((_QWORD **)&v188 + 1);
    *(_QWORD *)&v201 = v189 + 24 * (v107 - 21 * v109);
    goto LABEL_74;
  }
  v39 = (__int64 *)v199[1].m128_u64[0];
  v40 = (__int64 *)v199[2].m128_u64[0];
  v41 = v199[2].m128_i64[1];
  v195 = (const __m128i *)v199[1].m128_u64[1];
  v42 = v38 - 0x5555555555555555LL * (((char *)v39 - (char *)v195) >> 3);
  if ( v42 < 0 )
  {
    v150 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v42) >> 64;
    v43 = ~((v150 + ((unsigned __int64)(~v42 - v150) >> 1)) >> 4);
    goto LABEL_14;
  }
  if ( v42 > 20 )
  {
    v43 = v42 / 21;
LABEL_14:
    v44 = *(const __m128i **)(v41 + 8 * v43);
    v194 = v41 + 8 * v43;
    v195 = v44;
    v196 = (unsigned __int64)&v44[31].m128i_u64[1];
    v45 = &v44->m128i_i64[3 * (v42 - 21 * v43)];
    goto LABEL_15;
  }
  v194 = v41;
  v196 = (unsigned __int64)v40;
  v45 = &v39[3 * v38];
LABEL_15:
  v46 = (__int64 *)v193;
  v47 = (const __m128i *)v45;
  v48 = (__int64 **)(v191 + 1);
  for ( k = (__int64 *)v192; ; v46 = k + 63 )
  {
    v50 = v47;
LABEL_17:
    if ( v47 == (const __m128i *)v39 )
      break;
    while ( 1 )
    {
      if ( k )
      {
        k[1] = 0;
        k[2] = 0;
        *k = 0;
        *k = *v39;
        *v39 = 0;
        v51 = k[1];
        k[1] = v39[1];
        v39[1] = v51;
        v52 = k[2];
        k[2] = v39[2];
        v39[2] = v52;
      }
      v39 += 3;
      if ( v39 != v40 )
        break;
      v39 = *(__int64 **)(v41 + 8);
      k += 3;
      v40 = v39 + 63;
      if ( v46 == k )
      {
        v41 += 8;
        goto LABEL_22;
      }
      v41 += 8;
      if ( v47 == (const __m128i *)v39 )
        goto LABEL_138;
    }
    k += 3;
    if ( v46 != k )
      goto LABEL_17;
LABEL_22:
    k = *v48++;
  }
LABEL_138:
  v154 = (unsigned __int64 *)v199;
  v155 = v191;
  v199[1].m128_u64[0] = v192;
  v156 = v190;
  v154[5] = (unsigned __int64)v155;
  v154[3] = (unsigned __int64)v156;
  v154[4] = (unsigned __int64)v193;
  v157 = (__int64 *)j[1].m128i_i64[1];
  v158 = j->m128i_i64[0];
  v159 = j->m128i_i64[1];
  v160 = 0xAAAAAAAAAAAAAAABLL * ((j->m128i_i64[0] - v159) >> 3);
  v161 = 21 * ((((__int64)v157 - v194) >> 3) - 1)
       - 0x5555555555555555LL * ((j->m128i_i64[0] - v159) >> 3)
       - 0x5555555555555555LL * ((__int64)(v196 - (_QWORD)v50) >> 3);
  if ( v161 <= 0 )
    goto LABEL_160;
  *(_QWORD *)&v204[0] = 0xAAAAAAAAAAAAAAABLL;
  v162 = v50;
  do
  {
    v163 = v203;
    v164 = *(_QWORD *)&v204[0] * ((__int64)(v196 - (_QWORD)v162) >> 3);
    if ( *(_QWORD *)&v204[0] * ((__int64)((__int64)v200->m128i_i64 - v203) >> 3) <= v164 )
      v164 = *(_QWORD *)&v204[0] * ((__int64)((__int64)v200->m128i_i64 - v203) >> 3);
    if ( v164 > v161 )
      v164 = v161;
    v192 = 24 * v164;
    v165 = *(_QWORD *)&v204[0] * ((24 * v164) >> 3);
    if ( 24 * v164 > 0 )
    {
      v166 = (__int64 *)v162;
      v193 = v162;
      do
      {
        *(_QWORD *)(v163 + 8) = 0;
        *(_QWORD *)(v163 + 16) = 0;
        v167 = *(void **)v163;
        *(_QWORD *)v163 = 0;
        *(_QWORD *)v163 = *v166;
        *v166 = 0;
        v168 = *(_QWORD *)(v163 + 8);
        *(_QWORD *)(v163 + 8) = v166[1];
        v166[1] = v168;
        v169 = *(_QWORD *)(v163 + 16);
        *(_QWORD *)(v163 + 16) = v166[2];
        v166[2] = v169;
        if ( v167 )
          operator delete(v167);
        v166 += 3;
        v163 += 24;
        --v165;
      }
      while ( v165 );
      v162 = v193;
    }
    v170 = v164 + *(_QWORD *)&v204[0] * (((char *)v162 - (char *)v195) >> 3);
    if ( v170 < 0 )
    {
      v171 = ~(~v170 / 0x15uLL);
      goto LABEL_153;
    }
    if ( v170 > 20 )
    {
      v171 = v170 / 21;
LABEL_153:
      v172 = *(const __m128i **)(v194 + 8 * v171);
      v194 += 8 * v171;
      v195 = v172;
      v196 = (unsigned __int64)&v172[31].m128i_u64[1];
      v162 = (const __m128i *)((char *)v172 + 24 * (v170 - 21 * v171));
      goto LABEL_154;
    }
    v162 = (const __m128i *)((char *)v162 + v192);
LABEL_154:
    v173 = v164 + *(_QWORD *)&v204[0] * (((__int64)v203 - v197) >> 3);
    if ( v173 < 0 )
    {
      v174 = ~(~v173 / 0x15uLL);
      goto LABEL_157;
    }
    if ( v173 > 20 )
    {
      v174 = v173 / 21;
LABEL_157:
      v175 = *(_QWORD *)(v202 + 8 * v174);
      *(_QWORD *)&v202 = v202 + 8 * v174;
      v197 = v175;
      v200 = (const __m128i *)(v175 + 504);
      *(_QWORD *)&v203 = v175 + 24 * (v173 - 21 * v174);
      goto LABEL_158;
    }
    *(_QWORD *)&v203 = v192 + v203;
LABEL_158:
    v161 -= v164;
  }
  while ( v161 > 0 );
  v158 = j->m128i_i64[0];
  v159 = j->m128i_i64[1];
  v157 = (__int64 *)j[1].m128i_i64[1];
  v160 = 0xAAAAAAAAAAAAAAABLL * ((j->m128i_i64[0] - v159) >> 3);
LABEL_160:
  v176 = v160 - v201;
  v177 = j[1].m128i_i64[0];
  v178 = v176;
  if ( v176 < 0 )
  {
    v185 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v176) >> 64;
    v179 = ~((v185 + ((unsigned __int64)(~v176 - v185) >> 1)) >> 4);
LABEL_163:
    LODWORD(v158) = 5 * v179;
    v157 += v179;
    v159 = *v157;
    v178 -= 21 * v179;
    v177 = *v157 + 504;
    *(_QWORD *)&v204[0] = *v157 + 24 * v178;
  }
  else
  {
    if ( v176 > 20 )
    {
      v179 = v176 / 21;
      goto LABEL_163;
    }
    *(_QWORD *)&v204[0] = v158 - 24 * v201;
  }
  *(_QWORD *)&v204[0] = v159;
  v210 = _mm_loadh_ps((const double *)v204);
  *(_QWORD *)&v204[0] = v157;
  v211 = _mm_loadh_ps((const double *)v204);
  return std::copy<std::vector<double>>(
           (int)&v208,
           (int)&v210,
           v177,
           v178,
           v158,
           (int)v46,
           a7,
           *((__int64 *)&a7 + 1),
           a8,
           *((__int64 *)&a8 + 1),
           a9,
           *((__int64 *)&a9 + 1),
           a10,
           a11);
}

