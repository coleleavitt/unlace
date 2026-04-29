unsigned __int64 __fastcall sub_3618E0(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        const __m128i *a14)
{
  __m128i *v14; // rcx
  signed __int64 v15; // rbp
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r10
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rsi
  bool v24; // cf
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  __m128 v33; // xmm2
  __m128i v34; // xmm0
  __m128i *v35; // xmm3_8
  __int64 v36; // xmm4_8
  _QWORD *v37; // r14
  __int64 v38; // r8
  __int64 v39; // r11
  __int64 v40; // r8
  __int64 v41; // rax
  __m128i **v42; // r15
  __m128i *v43; // r13
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r9
  __int64 v48; // r11
  __m128i v49; // xmm0
  __int64 v50; // r9
  __int64 v51; // rax
  __m128i si128; // xmm2
  __int64 v53; // r10
  __m128i *v54; // rax
  __m128i v55; // xmm1
  __int64 v56; // rcx
  __m128i *v57; // rdx
  unsigned __int64 v59; // rax
  __m128i v60; // xmm0
  __m128 v61; // xmm2
  __int64 v62; // xmm5_8
  __m128i *v63; // xmm6_8
  __m128i *v64; // r14
  __m128i *v65; // r9
  __int64 v66; // rsi
  signed __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  __int64 v69; // r8
  __m128i *v70; // r13
  __int64 *v71; // r12
  __m128i *v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 *v77; // r8
  __int64 v78; // r10
  __int64 v79; // rcx
  __int64 v80; // rsi
  __int64 *v81; // r8
  _QWORD *v82; // rsi
  __m128 v83; // xmm2
  __m128 v84; // xmm0
  __int64 v85; // rax
  __m128 v86; // xmm2
  double v87; // xmm1_8
  __m128i v88; // xmm0
  __m128i *v89; // r13
  __int64 *v90; // rbp
  __int64 v91; // r14
  __int64 v92; // rsi
  __m128i v93; // xmm1
  __int64 v94; // rax
  __m128i *v95; // rax
  __m128i *v96; // r9
  unsigned __int64 v97; // rax
  __m128i *v98; // rsi
  __int64 v99; // rax
  __m128i v100; // xmm0
  __int64 v101; // rdx
  __int64 v102; // r8
  __m128i **v103; // rdi
  __int64 v104; // r8
  __m128i **v105; // rcx
  __m128i *v106; // rax
  __m128i v107; // xmm0
  __int64 v108; // rdx
  __int64 *v109; // rax
  __int64 v110; // rdi
  __m128i **v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 *v114; // rdx
  __m128i **v115; // rsi
  __m128i k; // xmm0
  __m128i *v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __m128i **v120; // rsi
  __m128i *v121; // rcx
  __int64 v122; // rax
  __m128i **v123; // r12
  __m128i n; // xmm0
  __m128i *v125; // rdx
  __int64 v126; // rdi
  __m128i *v127; // rax
  unsigned __int64 v128; // rdx
  __m128i **v129; // rdi
  __m128i v130; // xmm0
  __int64 v131; // rdx
  __int64 m128i_i64; // r8
  __m128i *v133; // r11
  __m128i *v134; // rdx
  __m128i **v135; // r9
  __int64 *v136; // r10
  __int64 v137; // rdx
  _QWORD *v138; // rdi
  _QWORD *v139; // rsi
  __int64 v140; // rax
  __int64 v141; // r11
  __m128i v142; // xmm1
  _QWORD *v143; // r10
  __int64 v144; // r8
  __m128i **v145; // rdx
  __m128i j; // xmm0
  __m128i *v147; // rdi
  __int64 v148; // r8
  __int64 v149; // rdi
  __m128i **v150; // r12
  __m128i v151; // xmm0
  __m128i *v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rcx
  __m128i **v155; // rsi
  __m128i *v156; // rbp
  __int64 v157; // r8
  _QWORD *v158; // rax
  __m128i **v159; // r10
  __m128i *v160; // rax
  __int64 v161; // rcx
  __int64 *v162; // rax
  unsigned __int64 v163; // r11
  __m128i *v164; // r9
  __m128i v165; // xmm1
  __m128i **v166; // r12
  __m128i m; // xmm0
  __m128i *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // r15
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rsi
  __int64 v176; // rdx
  __int64 *v177; // rdx
  __m128i **i; // rsi
  __m128i *v179; // rdx
  __m128i v180; // xmm0
  __int64 v181; // rbp
  __int64 v182; // [rsp-38h] [rbp-190h]
  _BYTE v183[24]; // [rsp+8h] [rbp-150h] BYREF
  __int64 v184; // [rsp+20h] [rbp-138h]
  __m128i *v185; // [rsp+28h] [rbp-130h]
  _QWORD *v186; // [rsp+30h] [rbp-128h]
  __int64 v187; // [rsp+38h] [rbp-120h] BYREF
  __m128 v188; // [rsp+40h] [rbp-118h] BYREF
  __m128i v189; // [rsp+50h] [rbp-108h] BYREF
  __m128i v190; // [rsp+60h] [rbp-F8h] BYREF
  __m128 v191; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v192; // [rsp+80h] [rbp-D8h] BYREF
  __m128 v193[2]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v194[2]; // [rsp+B0h] [rbp-A8h] BYREF
  __m128 v195; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v196; // [rsp+E0h] [rbp-78h]
  __m128 v197; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v198; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v199; // [rsp+118h] [rbp-40h]

  v14 = a2;
  v15 = a13;
  v17 = a1[1].m128i_i64[0];
  v199 = __readfsqword(0x28u);
  if ( (__m128i *)v17 == a2 )
  {
    v127 = (__m128i *)a1[1].m128i_i64[1];
    v128 = ((char *)a2 - (char *)v127) >> 3;
    if ( v128 < a13 )
    {
      sub_35FE40(a1, a13 - v128);
      v14 = (__m128i *)a1[1].m128i_i64[0];
      v127 = (__m128i *)a1[1].m128i_i64[1];
    }
    v129 = (__m128i **)a1[2].m128i_i64[1];
    v130 = _mm_loadl_epi64(a14);
    v131 = (((char *)v14 - (char *)v127) >> 3) - v15;
    if ( v131 < 0 )
    {
      v175 = ~((unsigned __int64)~v131 >> 6);
    }
    else
    {
      if ( v131 <= 63 )
      {
        m128i_i64 = a1[2].m128i_i64[0];
        v133 = (__m128i *)((char *)v14 - 8 * v15);
        v134 = v133;
        if ( v133 != v14 )
        {
          if ( ((8 * (_BYTE)v15) & 8) == 0
            || (v134 = (__m128i *)&v133->m128i_u64[1],
                v133->m128i_i64[0] = v130.m128i_i64[0],
                &v133->m128i_u64[1] != (unsigned __int64 *)v14) )
          {
            do
            {
              v134->m128i_i64[0] = v130.m128i_i64[0];
              ++v134;
              v134[-1].m128i_i64[1] = v130.m128i_i64[0];
            }
            while ( v134 != v14 );
          }
        }
        v135 = v129;
        v136 = (__int64 *)v127;
LABEL_114:
        a1[1].m128i_i64[0] = (__int64)v133;
        a1[1].m128i_i64[1] = (__int64)v136;
        a1[2].m128i_i64[0] = m128i_i64;
        a1[2].m128i_i64[1] = (__int64)v135;
        return v199 - __readfsqword(0x28u);
      }
      v175 = v131 >> 6;
    }
    v135 = &v129[v175];
    v136 = (__int64 *)*v135;
    v176 = v131 - (v175 << 6);
    m128i_i64 = (__int64)(*v135)[32].m128i_i64;
    v133 = (__m128i *)((char *)*v135 + v176 * 8);
    if ( v176 != 64 )
    {
      v177 = &(*v135)->m128i_i64[v176];
      if ( ((*(_BYTE *)v135 - (_BYTE)v133) & 8) == 0
        || (v177 = &v133->m128i_i64[1],
            v133->m128i_i64[0] = v130.m128i_i64[0],
            (unsigned __int64 *)m128i_i64 != &v133->m128i_u64[1]) )
      {
        do
        {
          *v177 = v130.m128i_i64[0];
          v177 += 2;
          *(v177 - 1) = v130.m128i_i64[0];
        }
        while ( (__int64 *)m128i_i64 != v177 );
      }
      v130 = _mm_loadl_epi64(a14);
    }
    for ( i = v135 + 1; i < v129; v130 = _mm_loadl_epi64(a14) )
    {
      v179 = *i;
      v180 = _mm_unpacklo_epi64(v130, v130);
      v181 = (__int64)(*i)[32].m128i_i64;
      do
      {
        *v179 = v180;
        v179 += 2;
        v179[-1] = v180;
      }
      while ( v179 != (__m128i *)v181 );
      ++i;
    }
    if ( v127 != v14 )
    {
      if ( (((_BYTE)v14 - (_BYTE)v127) & 8) == 0
        || (v127->m128i_i64[0] = v130.m128i_i64[0], v127 = (__m128i *)((char *)v127 + 8), v127 != v14) )
      {
        do
        {
          v127->m128i_i64[0] = v130.m128i_i64[0];
          ++v127;
          v127[-1].m128i_i64[1] = v130.m128i_i64[0];
        }
        while ( v127 != v14 );
      }
    }
    goto LABEL_114;
  }
  v18 = a1[3].m128i_i64[0];
  if ( (__m128i *)v18 == a2 )
  {
    v96 = (__m128i *)a1[4].m128i_i64[0];
    v97 = (((char *)v96 - (char *)a2) >> 3) - 1;
    if ( v97 < v15 )
    {
      sub_35FF70(a1, v15 - v97);
      v14 = (__m128i *)a1[3].m128i_i64[0];
      v96 = (__m128i *)a1[4].m128i_i64[0];
    }
    v98 = (__m128i *)a1[3].m128i_i64[1];
    v99 = a1[4].m128i_i64[1];
    v100 = _mm_loadl_epi64(a14);
    v101 = v15 + (((char *)v14 - (char *)v98) >> 3);
    if ( v101 < 0 )
    {
      v104 = ~((unsigned __int64)~v101 >> 6);
    }
    else
    {
      if ( v101 <= 63 )
      {
        v102 = (__int64)&v14->m128i_i64[v15];
        if ( (__m128i *)v102 != v14 )
        {
          if ( ((8 * (_BYTE)v15) & 8) == 0
            || (v14->m128i_i64[0] = v100.m128i_i64[0], v14 = (__m128i *)((char *)v14 + 8), (__m128i *)v102 != v14) )
          {
            do
            {
              v14->m128i_i64[0] = v100.m128i_i64[0];
              ++v14;
              v14[-1].m128i_i64[1] = v100.m128i_i64[0];
            }
            while ( (__m128i *)v102 != v14 );
          }
        }
        v103 = (__m128i **)v99;
LABEL_74:
        a1[3].m128i_i64[0] = v102;
        a1[3].m128i_i64[1] = (__int64)v98;
        a1[4].m128i_i64[0] = (__int64)v96;
        a1[4].m128i_i64[1] = (__int64)v103;
        return v199 - __readfsqword(0x28u);
      }
      v104 = v101 >> 6;
    }
    v103 = (__m128i **)(v99 + 8 * v104);
    v98 = *v103;
    v102 = (__int64)&(*v103)->m128i_i64[v101 - (v104 << 6)];
    if ( v96 != v14 )
    {
      if ( (((_BYTE)v96 - (_BYTE)v14) & 8) == 0
        || (v14->m128i_i64[0] = v100.m128i_i64[0], v14 = (__m128i *)((char *)v14 + 8), v14 != v96) )
      {
        do
        {
          v14->m128i_i64[0] = v100.m128i_i64[0];
          ++v14;
          v14[-1].m128i_i64[1] = v100.m128i_i64[0];
        }
        while ( v14 != v96 );
      }
      v100 = _mm_loadl_epi64(a14);
    }
    v105 = (__m128i **)(v99 + 8);
    if ( v99 + 8 < (unsigned __int64)v103 )
    {
      do
      {
        v106 = *v105;
        v107 = _mm_unpacklo_epi64(v100, v100);
        v108 = (__int64)(*v105)[32].m128i_i64;
        do
        {
          *v106 = v107;
          v106 += 2;
          v106[-1] = v107;
        }
        while ( (__m128i *)v108 != v106 );
        ++v105;
        v100 = _mm_loadl_epi64(a14);
      }
      while ( v105 < v103 );
    }
    if ( v98 != (__m128i *)v102 )
    {
      v109 = (__int64 *)v98;
      if ( (((_BYTE)v102 - (_BYTE)v98) & 8) == 0
        || (v109 = &v98->m128i_i64[1],
            v98->m128i_i64[0] = v100.m128i_i64[0],
            (unsigned __int64 *)v102 != &v98->m128i_u64[1]) )
      {
        do
        {
          *v109 = v100.m128i_i64[0];
          v109 += 2;
          *(v109 - 1) = v100.m128i_i64[0];
        }
        while ( (__int64 *)v102 != v109 );
      }
    }
    v96 = v98 + 32;
    goto LABEL_74;
  }
  v19 = a1[2].m128i_i64[1];
  v21 = _mm_loadl_epi64(a14);
  v22 = (a12 - v19) >> 3;
  v23 = (a1[2].m128i_i64[0] - v17) >> 3;
  v24 = a12 == 0;
  v25 = a1[4].m128i_i64[1];
  v26 = (__int64)v14->m128i_i64 - a3;
  v27 = a1[3].m128i_i64[1];
  v28 = v23 + (v26 >> 3) + ((v24 + v22 - 1) << 6);
  v29 = (v18 - v27) >> 3;
  v30 = v29 + v23 + (((v25 == 0) + ((v25 - v19) >> 3) - 1) << 6);
  if ( (__int64)(v30 >> 1) > v28 )
  {
    v31 = a1[1].m128i_i64[1];
    v32 = (v17 - v31) >> 3;
    if ( v32 < a13 )
    {
      *(_QWORD *)&v183[8] = v28;
      *(_QWORD *)v183 = v21.m128i_i64[0];
      sub_35FE40(a1, a13 - v32);
      v34 = _mm_loadu_si128(a1 + 1);
      v33 = (__m128)_mm_loadu_si128(a1 + 2);
      v32 = (a1[1].m128i_i64[0] - a1[1].m128i_i64[1]) >> 3;
      v28 = *(_QWORD *)&v183[8];
    }
    else
    {
      v33 = (__m128)_mm_unpacklo_epi64((__m128i)a1[2].m128i_u64[0], (__m128i)(unsigned __int64)v19);
      v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v31);
    }
    v35 = (__m128i *)_mm_movehl_ps(a7, v33).m128_u64[0];
    v36 = _mm_movehl_ps(a8, (__m128)v34).m128_u64[0];
    v37 = (_QWORD *)v36;
    v38 = v32 - v15;
    if ( (__int64)(v32 - v15) < 0 )
    {
      v174 = ~((unsigned __int64)~v38 >> 6);
    }
    else
    {
      if ( v38 <= 63 )
      {
        *(_QWORD *)v183 = v35;
        v39 = v36;
        *(_QWORD *)&v183[8] = v33.m128_u64[0];
        *(_QWORD *)&v183[16] = v34.m128i_i64[0] - 8 * v15;
        v40 = v32 + v28;
        if ( (__int64)(v32 + v28) >= 0 )
        {
LABEL_9:
          if ( v40 <= 63 )
          {
            v184 = v33.m128_u64[0];
            v41 = v34.m128i_i64[0] + 8 * v28;
            v42 = (__m128i **)v35;
            v43 = (__m128i *)v36;
            goto LABEL_11;
          }
          v173 = v40 >> 6;
LABEL_178:
          v42 = (__m128i **)v35 + v173;
          v43 = *v42;
          v41 = (__int64)&(*v42)->m128i_i64[v40 - (v173 << 6)];
          v184 = (__int64)(*v42)[32].m128i_i64;
LABEL_11:
          if ( v28 < v15 )
          {
            v188.m128_u64[0] = v34.m128i_i64[0];
            v190.m128i_i64[0] = v21.m128i_i64[0];
            v187 = v39;
            v182 = v184;
            v186 = (_QWORD *)v41;
            v185 = (__m128i *)v33.m128_u64[0];
            v184 = v34.m128i_i64[0];
            sub_361650(
              (__m128i *)&v197,
              v34.m128i_i64[0],
              v36,
              v33.m128_i64[0],
              (__int64)v35,
              v41,
              (__int64)v43,
              v182,
              (__int64)v42,
              v34,
              *(__int64 *)&v183[16],
              v39);
            v137 = v198.m128i_i64[1];
            v138 = (_QWORD *)v197.m128_u64[0];
            v139 = (_QWORD *)v34.m128i_i64[0];
            v140 = (__int64)v186;
            v141 = v187;
            v142 = _mm_loadl_epi64(&v190);
            v143 = (_QWORD *)v34.m128i_i64[0];
            if ( (__m128i *)v198.m128i_i64[1] == v35 )
            {
              if ( v197.m128_u64[0] != v184 )
              {
                if ( (((_BYTE)v184 - v197.m128_i8[0]) & 8) == 0
                  || (*(_QWORD *)v197.m128_u64[0] = v142.m128i_i64[0], ++v138, (_QWORD *)v34.m128i_i64[0] != v138) )
                {
                  do
                  {
                    *v138 = v142.m128i_i64[0];
                    v138 += 2;
                    *(v138 - 1) = v142.m128i_i64[0];
                  }
                  while ( (_QWORD *)v34.m128i_i64[0] != v138 );
                }
              }
            }
            else
            {
              v144 = v198.m128i_i64[0];
              if ( v197.m128_u64[0] != v198.m128i_i64[0] )
              {
                if ( ((v198.m128i_i8[0] - v197.m128_i8[0]) & 8) == 0
                  || (*(_QWORD *)v197.m128_u64[0] = v142.m128i_i64[0], ++v138, (_QWORD *)v144 != v138) )
                {
                  do
                  {
                    *v138 = v142.m128i_i64[0];
                    v138 += 2;
                    *(v138 - 1) = v142.m128i_i64[0];
                  }
                  while ( (_QWORD *)v144 != v138 );
                }
              }
              v145 = (__m128i **)(v137 + 8);
              for ( j = _mm_unpacklo_epi64(v142, v142); v145 < (__m128i **)v35; ++v145 )
              {
                v147 = *v145;
                v148 = (__int64)(*v145)[32].m128i_i64;
                do
                {
                  *v147 = j;
                  v147 += 2;
                  v147[-1] = j;
                }
                while ( v147 != (__m128i *)v148 );
              }
              if ( v37 != v139 )
              {
                if ( (((_BYTE)v139 - (_BYTE)v37) & 8) == 0 || (*v37 = v142.m128i_i64[0], ++v37, v37 != v139) )
                {
                  do
                  {
                    *v37 = v142.m128i_i64[0];
                    v37 += 2;
                    *(v37 - 1) = v142.m128i_i64[0];
                  }
                  while ( v37 != v139 );
                }
              }
            }
            v149 = *(_QWORD *)&v183[16];
            a1[1].m128i_i64[1] = v141;
            a1[1].m128i_i64[0] = v149;
            a1[2].m128i_i64[0] = *(_QWORD *)&v183[8];
            a1[2].m128i_i64[1] = *(_QWORD *)v183;
            if ( v35 == (__m128i *)v42 )
            {
              if ( v139 != (_QWORD *)v140 )
              {
                if ( (((_BYTE)v140 - (_BYTE)v139) & 8) == 0
                  || (v143 = v139 + 1, *v139 = v142.m128i_i64[0], v139 + 1 != (_QWORD *)v140) )
                {
                  do
                  {
                    *v143 = v142.m128i_i64[0];
                    v143 += 2;
                    *(v143 - 1) = v142.m128i_i64[0];
                  }
                  while ( v143 != (_QWORD *)v140 );
                }
              }
            }
            else
            {
              if ( (_QWORD *)v33.m128_u64[0] != v139 )
              {
                if ( ((v33.m128_i8[0] - (_BYTE)v139) & 8) == 0
                  || (v143 = v139 + 1, *v139 = v142.m128i_i64[0], v139 + 1 != (_QWORD *)v33.m128_u64[0]) )
                {
                  do
                  {
                    *v143 = v142.m128i_i64[0];
                    v143 += 2;
                    *(v143 - 1) = v142.m128i_i64[0];
                  }
                  while ( v143 != (_QWORD *)v33.m128_u64[0] );
                }
              }
              v150 = (__m128i **)&v35->m128i_i64[1];
              v151 = _mm_unpacklo_epi64(v142, v142);
              if ( &v35->m128i_u64[1] < (unsigned __int64 *)v42 )
              {
                do
                {
                  v152 = *v150;
                  v153 = (__int64)(*v150)[32].m128i_i64;
                  do
                  {
                    *v152 = v151;
                    v152 += 2;
                    v152[-1] = v151;
                  }
                  while ( (__m128i *)v153 != v152 );
                  ++v150;
                }
                while ( v150 < v42 );
              }
              if ( v43 != (__m128i *)v140 )
              {
                if ( (((_BYTE)v140 - (_BYTE)v43) & 8) == 0
                  || (v43->m128i_i64[0] = v142.m128i_i64[0], v43 = (__m128i *)((char *)v43 + 8), v43 != (__m128i *)v140) )
                {
                  do
                  {
                    v43->m128i_i64[0] = v142.m128i_i64[0];
                    ++v43;
                    v43[-1].m128i_i64[1] = v142.m128i_i64[0];
                  }
                  while ( v43 != (__m128i *)v140 );
                }
              }
            }
            return v199 - __readfsqword(0x28u);
          }
          v44 = v15 + v32;
          if ( v44 < 0 )
          {
            v45 = ~((unsigned __int64)~v44 >> 6);
          }
          else
          {
            if ( v44 <= 63 )
            {
              v185 = v35;
              v47 = v34.m128i_i64[0] + 8 * v15;
              v46 = v36;
              v186 = (_QWORD *)v33.m128_u64[0];
              goto LABEL_16;
            }
            v45 = v44 >> 6;
          }
          v46 = v35->m128i_i64[v45];
          v185 = (__m128i *)((char *)v35 + 8 * v45);
          v186 = (_QWORD *)(v46 + 512);
          v47 = v46 + 8 * (v44 - (v45 << 6));
LABEL_16:
          v190.m128i_i64[1] = v41;
          v189.m128i_i64[0] = v21.m128i_i64[0];
          v192 = v34;
          v191 = v33;
          v188.m128_u64[0] = v39;
          v190.m128i_i64[0] = v46;
          v187 = v47;
          sub_361650(
            (__m128i *)&v197,
            v34.m128i_i64[0],
            v36,
            v33.m128_i64[0],
            (__int64)v35,
            v47,
            v46,
            (__int64)v186,
            (__int64)v185,
            v34,
            *(__int64 *)&v183[16],
            v39);
          v48 = v188.m128_u64[0];
          v49 = _mm_load_si128(&v192);
          v50 = v187;
          v195.m128_u64[1] = (unsigned __int64)v43;
          a1[1].m128i_i64[0] = *(_QWORD *)&v183[16];
          v51 = *(_QWORD *)&v183[8];
          si128 = _mm_load_si128((const __m128i *)&v191);
          v53 = v190.m128i_i64[0];
          a1[1].m128i_i64[1] = v48;
          a1[2].m128i_i64[0] = v51;
          v196.m128i_i64[1] = (__int64)v42;
          a1[2].m128i_i64[1] = *(_QWORD *)v183;
          v197.m128_u64[0] = v50;
          v195.m128_u64[0] = v190.m128i_u64[1];
          *(_QWORD *)v183 = v190.m128i_i64[1];
          v196.m128i_i64[0] = v184;
          v198.m128i_i64[0] = (__int64)v186;
          v197.m128_u64[1] = v53;
          v198.m128i_i64[1] = (__int64)v185;
          v194[0] = v49;
          v194[1] = si128;
          sub_361510(v193, (__int64)&v197, (__int64 *)&v195, v194);
          v54 = *(__m128i **)v183;
          v55 = _mm_loadl_epi64(&v189);
          v56 = ((__int64)(*(_QWORD *)v183 - (_QWORD)v43) >> 3) - v15;
          if ( v56 < 0 )
          {
            v110 = ~((unsigned __int64)~v56 >> 6);
          }
          else
          {
            if ( v56 <= 63 )
            {
              v57 = (__m128i *)(*(_QWORD *)v183 - 8 * v15);
              if ( v57 != *(__m128i **)v183 )
              {
                if ( ((8 * (_BYTE)v15) & 8) == 0
                  || (v57->m128i_i64[0] = v55.m128i_i64[0], v57 = (__m128i *)((char *)v57 + 8), v57 != v54) )
                {
                  do
                  {
                    v57->m128i_i64[0] = v55.m128i_i64[0];
                    ++v57;
                    v57[-1].m128i_i64[1] = v55.m128i_i64[0];
                  }
                  while ( v57 != v54 );
                }
              }
              return v199 - __readfsqword(0x28u);
            }
            v110 = v56 >> 6;
          }
          v111 = &v42[v110];
          v112 = v56 - (v110 << 6);
          v113 = (__int64)(*v111)[32].m128i_i64;
          v114 = &(*v111)->m128i_i64[v112];
          if ( v112 != 64 )
          {
            if ( (-(char)(v112 * 8) & 8) == 0 || (*v114 = v55.m128i_i64[0], ++v114, (__int64 *)v113 != v114) )
            {
              do
              {
                *v114 = v55.m128i_i64[0];
                v114 += 2;
                *(v114 - 1) = v55.m128i_i64[0];
              }
              while ( (__int64 *)v113 != v114 );
            }
          }
          v115 = v111 + 1;
          for ( k = _mm_unpacklo_epi64(v55, v55); v115 < v42; ++v115 )
          {
            v117 = *v115;
            v118 = (__int64)(*v115)[32].m128i_i64;
            do
            {
              *v117 = k;
              v117 += 2;
              v117[-1] = k;
            }
            while ( v117 != (__m128i *)v118 );
          }
          if ( v43 != v54 )
          {
            if ( (((_BYTE)v54 - (_BYTE)v43) & 8) == 0
              || (v43->m128i_i64[0] = v55.m128i_i64[0], v43 = (__m128i *)((char *)v43 + 8), v43 != v54) )
            {
              do
              {
                v43->m128i_i64[0] = v55.m128i_i64[0];
                ++v43;
                v43[-1].m128i_i64[1] = v55.m128i_i64[0];
              }
              while ( v43 != v54 );
            }
          }
          return v199 - __readfsqword(0x28u);
        }
LABEL_181:
        v173 = ~((unsigned __int64)~v40 >> 6);
        goto LABEL_178;
      }
      v174 = v38 >> 6;
    }
    v39 = v35->m128i_i64[v174];
    *(_QWORD *)v183 = (char *)v35 + 8 * v174;
    *(_QWORD *)&v183[8] = v39 + 512;
    *(_QWORD *)&v183[16] = v39 + 8 * (v38 - (v174 << 6));
    v40 = v32 + v28;
    if ( (__int64)(v32 + v28) >= 0 )
      goto LABEL_9;
    goto LABEL_181;
  }
  v59 = ((a1[4].m128i_i64[0] - v18) >> 3) - 1;
  if ( v59 < a13 )
  {
    *(_QWORD *)&v183[8] = v28;
    *(_QWORD *)v183 = v21.m128i_i64[0];
    sub_35FF70(a1, a13 - v59);
    v60 = _mm_loadu_si128(a1 + 3);
    v61 = (__m128)_mm_loadu_si128(a1 + 4);
    v29 = (a1[3].m128i_i64[0] - a1[3].m128i_i64[1]) >> 3;
    v28 = *(_QWORD *)&v183[8];
    v21 = _mm_loadl_epi64((const __m128i *)v183);
  }
  else
  {
    v60 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v27);
    v61 = (__m128)_mm_unpacklo_epi64((__m128i)a1[4].m128i_u64[0], (__m128i)(unsigned __int64)v25);
  }
  v62 = _mm_movehl_ps(a9, v61).m128_u64[0];
  v63 = (__m128i *)_mm_movehl_ps(a10, (__m128)v60).m128_u64[0];
  v64 = v63;
  v65 = (__m128i *)v60.m128i_i64[0];
  v66 = v29 + v15;
  if ( v29 + v15 < 0 )
  {
    v171 = ~((unsigned __int64)~v66 >> 6);
  }
  else
  {
    if ( v66 <= 63 )
    {
      *(_QWORD *)v183 = v62;
      v184 = v60.m128i_i64[0] + 8 * v15;
      *(_QWORD *)&v183[16] = v61.m128_u64[0];
      *(_QWORD *)&v183[8] = v63;
      goto LABEL_28;
    }
    v171 = v66 >> 6;
  }
  v172 = *(_QWORD *)(v62 + 8 * v171);
  *(_QWORD *)v183 = v62 + 8 * v171;
  *(_QWORD *)&v183[8] = v172;
  *(_QWORD *)&v183[16] = v172 + 512;
  v184 = v172 + 8 * (v66 - (v171 << 6));
LABEL_28:
  v67 = v30 - v28;
  v68 = v28 - v30;
  v69 = v29 + v68;
  if ( (__int64)(v29 + v68) < 0 )
  {
    v170 = ~((unsigned __int64)~v69 >> 6);
  }
  else
  {
    if ( v69 <= 63 )
    {
      v70 = (__m128i *)(v60.m128i_i64[0] + 8 * v68);
      v71 = (__int64 *)v62;
      v72 = (__m128i *)v61.m128_u64[0];
      v73 = (__int64)v63;
      goto LABEL_31;
    }
    v170 = v69 >> 6;
  }
  v71 = (__int64 *)(v62 + 8 * v170);
  v73 = *v71;
  v72 = (__m128i *)(*v71 + 512);
  v70 = (__m128i *)(*v71 + 8 * (v69 - (v170 << 6)));
LABEL_31:
  v74 = v15 + (((__int64)v70->m128i_i64 - v73) >> 3);
  if ( v67 <= v15 )
  {
    if ( v74 < 0 )
    {
      v154 = ~((unsigned __int64)~v74 >> 6);
    }
    else
    {
      if ( v74 <= 63 )
      {
        v157 = (__int64)&v70->m128i_i64[v15];
        v185 = v72;
        v155 = (__m128i **)v71;
        v156 = (__m128i *)v73;
        goto LABEL_146;
      }
      v154 = v74 >> 6;
    }
    v155 = (__m128i **)&v71[v154];
    v156 = *v155;
    v157 = (__int64)&(*v155)->m128i_i64[v74 - (v154 << 6)];
    v185 = *v155 + 32;
LABEL_146:
    v158 = (_QWORD *)v60.m128i_i64[0];
    if ( v155 == (__m128i **)v62 )
    {
      if ( v60.m128i_i64[0] != v157 )
      {
        if ( (((_BYTE)v157 - v60.m128i_i8[0]) & 8) == 0
          || (v158 = (_QWORD *)(v60.m128i_i64[0] + 8),
              *(_QWORD *)v60.m128i_i64[0] = v21.m128i_i64[0],
              v60.m128i_i64[0] + 8 != v157) )
        {
          do
          {
            *v158 = v21.m128i_i64[0];
            v158 += 2;
            *(v158 - 1) = v21.m128i_i64[0];
          }
          while ( v158 != (_QWORD *)v157 );
        }
      }
    }
    else
    {
      if ( v61.m128_u64[0] != v60.m128i_i64[0] )
      {
        if ( ((v61.m128_i8[0] - v60.m128i_i8[0]) & 8) == 0
          || (v158 = (_QWORD *)(v60.m128i_i64[0] + 8),
              *(_QWORD *)v60.m128i_i64[0] = v21.m128i_i64[0],
              v60.m128i_i64[0] + 8 != v61.m128_u64[0]) )
        {
          do
          {
            *v158 = v21.m128i_i64[0];
            v158 += 2;
            *(v158 - 1) = v21.m128i_i64[0];
          }
          while ( v158 != (_QWORD *)v61.m128_u64[0] );
        }
      }
      v159 = (__m128i **)(v62 + 8);
      v60 = _mm_unpacklo_epi64(v21, v21);
      if ( v62 + 8 < (unsigned __int64)v155 )
      {
        do
        {
          v160 = *v159;
          v161 = (__int64)(*v159)[32].m128i_i64;
          do
          {
            *v160 = v60;
            v160 += 2;
            v160[-1] = v60;
          }
          while ( v160 != (__m128i *)v161 );
          ++v159;
        }
        while ( v159 < v155 );
      }
      v162 = (__int64 *)v156;
      if ( (__m128i *)v157 != v156 )
      {
        if ( (((_BYTE)v157 - (_BYTE)v156) & 8) == 0
          || (v162 = &v156->m128i_i64[1],
              v156->m128i_i64[0] = v21.m128i_i64[0],
              &v156->m128i_u64[1] != (unsigned __int64 *)v157) )
        {
          do
          {
            *v162 = v21.m128i_i64[0];
            v162 += 2;
            *(v162 - 1) = v21.m128i_i64[0];
          }
          while ( v162 != (__int64 *)v157 );
        }
      }
    }
    v187 = v21.m128i_i64[0];
    v186 = (_QWORD *)v62;
    v185 = v65;
    sub_361650(
      (__m128i *)&v197,
      (__int64)v70,
      v73,
      (__int64)v72,
      (__int64)v71,
      (__int64)v65,
      (__int64)v63,
      v61.m128_i64[0],
      v62,
      v60,
      v157,
      (__int64)v156);
    a1[3].m128i_i64[0] = v184;
    a1[3].m128i_i64[1] = *(_QWORD *)&v183[8];
    a1[4].m128i_i64[0] = *(_QWORD *)&v183[16];
    v163 = (unsigned __int64)v186;
    v164 = v185;
    a1[4].m128i_i64[1] = *(_QWORD *)v183;
    v165 = _mm_loadl_epi64((const __m128i *)&v187);
    if ( v71 == (__int64 *)v163 )
    {
      if ( v70 != v164 )
      {
        if ( (((_BYTE)v164 - (_BYTE)v70) & 8) == 0
          || (v70->m128i_i64[0] = v165.m128i_i64[0], v70 = (__m128i *)((char *)v70 + 8), v70 != v164) )
        {
          do
          {
            v70->m128i_i64[0] = v165.m128i_i64[0];
            ++v70;
            v70[-1].m128i_i64[1] = v165.m128i_i64[0];
          }
          while ( v70 != v164 );
        }
      }
    }
    else
    {
      if ( v72 != v70 )
      {
        if ( (((_BYTE)v72 - (_BYTE)v70) & 8) == 0
          || (v70->m128i_i64[0] = v165.m128i_i64[0], v70 = (__m128i *)((char *)v70 + 8), v72 != v70) )
        {
          do
          {
            v70->m128i_i64[0] = v165.m128i_i64[0];
            ++v70;
            v70[-1].m128i_i64[1] = v165.m128i_i64[0];
          }
          while ( v72 != v70 );
        }
      }
      v166 = (__m128i **)(v71 + 1);
      for ( m = _mm_unpacklo_epi64(v165, v165); (unsigned __int64)v166 < v163; ++v166 )
      {
        v168 = *v166;
        v169 = (__int64)(*v166)[32].m128i_i64;
        do
        {
          *v168 = m;
          v168 += 2;
          v168[-1] = m;
        }
        while ( (__m128i *)v169 != v168 );
      }
      if ( v63 != v164 )
      {
        if ( (((_BYTE)v164 - (_BYTE)v63) & 8) == 0
          || (v63->m128i_i64[0] = v165.m128i_i64[0],
              v64 = (__m128i *)&v63->m128i_u64[1],
              &v63->m128i_u64[1] != (unsigned __int64 *)v164) )
        {
          do
          {
            v64->m128i_i64[0] = v165.m128i_i64[0];
            ++v64;
            v64[-1].m128i_i64[1] = v165.m128i_i64[0];
          }
          while ( v64 != v164 );
        }
      }
    }
    return v199 - __readfsqword(0x28u);
  }
  v75 = v29 - v15;
  if ( v29 - v15 < 0 )
  {
    v76 = ~((unsigned __int64)~v75 >> 6);
  }
  else
  {
    if ( v75 <= 63 )
    {
      v77 = (__int64 *)v62;
      v79 = v61.m128_u64[0];
      v78 = (__int64)v63;
      v80 = v60.m128i_i64[0] - 8 * v15;
      goto LABEL_36;
    }
    v76 = v75 >> 6;
  }
  v77 = (__int64 *)(v62 + 8 * v76);
  v78 = *v77;
  v79 = *v77 + 512;
  v80 = *v77 + 8 * (v75 - (v76 << 6));
LABEL_36:
  v190.m128i_i64[1] = v74;
  v189 = v60;
  v188 = v61;
  v190.m128i_i64[0] = v21.m128i_i64[0];
  v185 = (__m128i *)&v197;
  v187 = (__int64)v77;
  v191.m128_u64[0] = v78;
  v186 = (_QWORD *)v80;
  sub_361650(
    (__m128i *)&v197,
    v80,
    v78,
    v79,
    (__int64)v77,
    v60.m128i_i64[0],
    (__int64)v63,
    v61.m128_i64[0],
    v62,
    v60,
    v60.m128i_i64[0],
    (__int64)v63);
  a1[3].m128i_i64[0] = v184;
  a1[3].m128i_i64[1] = *(_QWORD *)&v183[8];
  a1[4].m128i_i64[0] = *(_QWORD *)&v183[16];
  v81 = (__int64 *)v187;
  v82 = v186;
  v83 = (__m128)_mm_load_si128((const __m128i *)&v188);
  v84 = (__m128)_mm_load_si128(&v189);
  a1[4].m128i_i64[1] = *(_QWORD *)v183;
  *(_QWORD *)v183 = v81;
  if ( v81 == v71 )
  {
    *(__m128i *)v183 = v190;
    v197 = v84;
    v198 = (__m128i)v83;
    sub_361730((__m128i *)&v195, (__int64)v70, v82, v185, *(double *)v84.m128_u64, *(double *)v190.m128i_i64, v83);
    v94 = *(_QWORD *)&v183[8];
    v93 = _mm_loadl_epi64((const __m128i *)v183);
  }
  else
  {
    v185 = (__m128i *)&v197;
    *(__m128i *)&v183[8] = v190;
    v195 = v84;
    v196 = (__m128i)v83;
    sub_361730(
      (__m128i *)&v197,
      v191.m128_i64[0],
      v82,
      (__m128i *)&v195,
      *(double *)v84.m128_u64,
      *(double *)v190.m128i_i64,
      v83);
    v85 = *(_QWORD *)&v183[16];
    v86 = (__m128)_mm_load_si128((const __m128i *)&v197);
    v87 = *(double *)&v183[8];
    v88 = _mm_load_si128(&v198);
    if ( (__int64 *)(*(_QWORD *)v183 - 8LL) != v71 )
    {
      *(_QWORD *)&v183[8] = v70;
      v89 = v185;
      *(_QWORD *)&v183[16] = v15;
      v90 = (__int64 *)(*(_QWORD *)v183 - 8LL);
      v91 = v85;
      *(double *)v183 = v87;
      do
      {
        v92 = *v90--;
        v195 = v86;
        v196 = v88;
        sub_361730(v89, v92, (_QWORD *)(v92 + 512), (__m128i *)&v195, *(double *)v88.m128i_i64, v87, v86);
        v86 = (__m128)_mm_load_si128((const __m128i *)&v197);
        v88 = _mm_load_si128(&v198);
      }
      while ( v90 != v71 );
      v87 = *(double *)v183;
      v70 = *(__m128i **)&v183[8];
      v85 = v91;
      v15 = *(_QWORD *)&v183[16];
    }
    *(_QWORD *)&v183[8] = v85;
    *(double *)v183 = v87;
    v197 = v86;
    v198 = v88;
    sub_361730((__m128i *)&v195, (__int64)v70, v72, v185, *(double *)v88.m128i_i64, v87, v86);
    v93 = _mm_loadl_epi64((const __m128i *)v183);
    v94 = *(_QWORD *)&v183[8];
  }
  if ( v94 < 0 )
  {
    v119 = ~((unsigned __int64)~v94 >> 6);
  }
  else
  {
    if ( v94 <= 63 )
    {
      v95 = (__m128i *)((char *)v70 + 8 * v15);
      if ( v95 != v70 )
      {
        if ( ((8 * (_BYTE)v15) & 8) == 0
          || (v70->m128i_i64[0] = v93.m128i_i64[0], v70 = (__m128i *)((char *)v70 + 8), v95 != v70) )
        {
          do
          {
            v70->m128i_i64[0] = v93.m128i_i64[0];
            ++v70;
            v70[-1].m128i_i64[1] = v93.m128i_i64[0];
          }
          while ( v95 != v70 );
        }
      }
      return v199 - __readfsqword(0x28u);
    }
    v119 = v94 >> 6;
  }
  v120 = (__m128i **)&v71[v119];
  v121 = *v120;
  v122 = (__int64)&(*v120)->m128i_i64[v94 - (v119 << 6)];
  if ( v72 != v70 )
  {
    if ( (((_BYTE)v72 - (_BYTE)v70) & 8) == 0
      || (v70->m128i_i64[0] = v93.m128i_i64[0], v70 = (__m128i *)((char *)v70 + 8), v70 != v72) )
    {
      do
      {
        v70->m128i_i64[0] = v93.m128i_i64[0];
        ++v70;
        v70[-1].m128i_i64[1] = v93.m128i_i64[0];
      }
      while ( v70 != v72 );
    }
  }
  v123 = (__m128i **)(v71 + 1);
  for ( n = _mm_unpacklo_epi64(v93, v93); v123 < v120; ++v123 )
  {
    v125 = *v123;
    v126 = (__int64)(*v123)[32].m128i_i64;
    do
    {
      *v125 = n;
      v125 += 2;
      v125[-1] = n;
    }
    while ( (__m128i *)v126 != v125 );
  }
  if ( v121 != (__m128i *)v122 )
  {
    if ( (((_BYTE)v122 - (_BYTE)v121) & 8) == 0
      || (v121->m128i_i64[0] = v93.m128i_i64[0], v121 = (__m128i *)((char *)v121 + 8), (__m128i *)v122 != v121) )
    {
      do
      {
        v121->m128i_i64[0] = v93.m128i_i64[0];
        ++v121;
        v121[-1].m128i_i64[1] = v93.m128i_i64[0];
      }
      while ( (__m128i *)v122 != v121 );
    }
  }
  return v199 - __readfsqword(0x28u);
}
