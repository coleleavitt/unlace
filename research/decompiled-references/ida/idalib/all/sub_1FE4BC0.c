_BYTE **__fastcall sub_1FE4BC0(
        _BYTE **a1,
        _BYTE *a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        int a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        __int32 a10)
{
  __int64 v11; // r8
  __m128i si128; // xmm0
  size_t v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // rdi
  unsigned __int64 v20; // rbp
  __int8 *v21; // r12
  unsigned __int64 v22; // r9
  __int64 v23; // rsi
  __int8 *v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  _BYTE *v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // r14
  unsigned __int64 v37; // rbp
  __int8 v38; // r13
  __int8 v39; // r14
  __int64 v40; // rbp
  _BYTE *v41; // r15
  __int64 v42; // rsi
  __int8 *v43; // rax
  bool v44; // al
  __int64 v46; // r9
  __int64 v47; // rsi
  unsigned __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rax
  __int8 *v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int8 v54; // r12
  __int8 v55; // r13
  __int8 v56; // r14
  __int64 v57; // rbp
  signed __int64 v58; // rdx
  __int8 *v59; // rax
  __int64 v60; // r10
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  __int8 *v63; // r12
  __int64 v64; // rsi
  unsigned __int64 v65; // rdi
  __int64 v66; // rcx
  __int8 *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rsi
  unsigned __int64 v70; // rdi
  __int8 *v71; // rax
  __int64 v72; // r12
  unsigned __int64 v73; // r11
  unsigned __int8 v74; // r14
  unsigned __int8 v75; // r15
  __int64 v76; // r10
  unsigned __int8 v77; // r9
  unsigned __int64 v78; // rdx
  __m128i *v79; // r13
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rbp
  unsigned __int64 v82; // rdi
  __m128i *v83; // rax
  unsigned __int64 v84; // rdx
  __m128i v85; // xmm6
  __m128i v86; // xmm1
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // r11
  __int64 v90; // rax
  __m128i v91; // xmm4
  __m128i v92; // xmm7
  unsigned __int64 v93; // rax
  unsigned __int8 v94; // r11
  unsigned __int64 v95; // rbp
  __int64 v96; // rbp
  __int64 v97; // rax
  unsigned __int8 *v98; // r14
  unsigned __int8 *v99; // r13
  size_t v100; // rdx
  unsigned __int64 v101; // r15
  __int64 v102; // rbp
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rsi
  unsigned __int8 *v105; // rax
  __m128i v106; // xmm5
  __m128i v107; // xmm6
  unsigned __int64 v108; // rax
  unsigned __int8 v109; // di
  unsigned __int8 v110; // dl
  unsigned __int64 v111; // rbp
  unsigned __int8 *v112; // rax
  __m128i v113; // xmm2
  __m128i v114; // xmm3
  unsigned __int64 v115; // rax
  unsigned __int8 v116; // di
  unsigned __int8 v117; // dl
  __int8 v118; // r10
  __int8 v119; // r15
  unsigned __int64 v120; // rbp
  __int8 v121; // r14
  __int64 v122; // rbp
  __int64 v123; // rsi
  __int8 *v124; // rax
  unsigned __int64 v125; // rbp
  __int8 v126; // r14
  __int8 v127; // r13
  __int64 v128; // rsi
  unsigned __int64 v129; // rdi
  __int8 *v130; // rdx
  __int64 v131; // rcx
  __int8 *v132; // rcx
  __int64 v133; // r13
  unsigned __int8 *v134; // r14
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // r10
  unsigned __int64 v137; // rdx
  __m128i *v138; // rax
  __m128i v139; // xmm3
  __m128i v140; // xmm7
  unsigned __int64 v141; // rax
  unsigned __int8 *v142; // rsi
  unsigned __int8 v143; // dl
  unsigned __int8 *v144; // rsi
  unsigned __int8 v145; // dl
  unsigned __int8 v146; // r10
  __int8 *v147; // rcx
  __int64 v148; // rbp
  __int64 v149; // rbp
  __int64 v150; // rbp
  __int64 v151; // rdi
  unsigned __int8 *v152; // r15
  __int8 *v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rax
  unsigned __int64 v157; // rdx
  __int64 v158; // rax
  unsigned __int64 v159; // rax
  unsigned __int8 *v160; // rdx
  unsigned __int8 *v161; // rax
  __m128i v162; // xmm3
  __m128i v163; // xmm7
  unsigned __int64 v164; // rax
  unsigned __int8 *v165; // rsi
  unsigned __int8 v166; // di
  unsigned __int8 *v167; // rsi
  unsigned __int8 v168; // di
  unsigned __int8 v169; // dl
  __int8 *v170; // rcx
  __int8 *v171; // rcx
  __int64 v172; // r13
  __m128i *v173; // rcx
  unsigned __int64 v174; // rdi
  __m128i *v175; // rax
  unsigned __int64 v176; // rdx
  __m128i v177; // xmm6
  __m128i v178; // xmm4
  unsigned __int64 v179; // rsi
  unsigned __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int8 *v183; // rax
  unsigned __int64 v184; // rbp
  __int64 v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rdx
  unsigned __int64 v188; // rcx
  __int64 v189; // rdx
  __m128i *v190; // rax
  __m128i v191; // xmm5
  __m128i v192; // xmm6
  unsigned __int64 v193; // rax
  __int8 *v194; // rcx
  __int64 v195; // rbp
  __int64 v196; // rsi
  __int64 v197; // rbp
  __int64 v198; // rbp
  unsigned __int8 v199; // si
  unsigned __int8 v200; // di
  __m128i v201; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v202; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v203; // [rsp+20h] [rbp-98h] BYREF
  __m128i v204; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v205; // [rsp+40h] [rbp-78h]
  __int8 *v206; // [rsp+48h] [rbp-70h]
  __int64 v207; // [rsp+50h] [rbp-68h]
  __int64 v208; // [rsp+58h] [rbp-60h]
  int v209; // [rsp+60h] [rbp-58h]
  unsigned __int8 v210; // [rsp+67h] [rbp-51h]
  __int64 v211; // [rsp+68h] [rbp-50h]
  __int16 v212; // [rsp+7Dh] [rbp-3Bh]
  char v213; // [rsp+7Fh] [rbp-39h]

  v11 = (__int64)(a1 + 3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB30);
  v209 = a6;
  *a1 = a1 + 3;
  v201.m128i_i32[0] = a10;
  v17 = 3 * a3;
  v18 = 0;
  *(__m128i *)(a1 + 1) = si128;
  v19 = a1 + 3;
  if ( a3 > 0xD )
  {
    v203.m128i_i64[0] = v17;
    v202.m128i_i64[0] = v11;
    sub_2236E10(a1, v11, a3, 3);
    v18 = (__int64)a1[1];
    v17 = v203.m128i_i64[0];
    v11 = v202.m128i_i64[0];
    v19 = &(*a1)[3 * v18];
  }
  if ( v17 )
  {
    v202.m128i_i64[0] = v11;
    memcpy(v19, a2, v17);
    v18 = (__int64)a1[1];
    v11 = v202.m128i_i64[0];
  }
  v20 = v18 + a3;
  a1[1] = (_BYTE *)v20;
  if ( a4 )
  {
    v21 = *a1;
    v22 = (unsigned __int64)a1[2];
    v23 = 3 * v20;
    v24 = *a1;
    v25 = (__int64)&(*a1)[3 * v20];
    v26 = v22;
    if ( !a5 )
    {
LABEL_7:
      v27 = v21 + 3;
      goto LABEL_8;
    }
    if ( a9 == 0x100000001LL )
    {
      if ( a7 <= 1 )
        goto LABEL_7;
      if ( v201.m128i_i8[0] )
      {
        v41 = v21 + 3;
        goto LABEL_35;
      }
      v201.m128i_i64[0] = 3LL * a7 + 3;
      v60 = (__int64)&v21[v201.m128i_i64[0]];
      goto LABEL_52;
    }
    if ( a7 == 1 )
    {
      v118 = *v24;
      v119 = v24[1];
      v120 = v20 + 1;
      v121 = v24[2];
      if ( (__int8 *)v25 == v24 + 3 )
      {
        if ( v120 > v22 )
        {
          v202.m128i_i8[0] = *v24;
          v201.m128i_i64[0] = v11;
          sub_2236E10(a1, v11, v120, 3);
          v24 = *a1;
          v118 = v202.m128i_i8[0];
          v11 = v201.m128i_i64[0];
        }
        v170 = &v24[3 * (_QWORD)a1[1]];
        *v170 = v118;
        v170[1] = v119;
        v170[2] = v121;
        v21 = *a1;
        v22 = (unsigned __int64)a1[2];
        v20 = (unsigned __int64)(a1[1] + 1);
        a1[1] = (_BYTE *)v20;
        v27 = v21 + 3;
      }
      else
      {
        if ( v120 > v22 )
        {
          v202.m128i_i8[0] = *v24;
          v201.m128i_i64[0] = v11;
          sub_2236E10(a1, v11, v120, 3);
          v22 = (unsigned __int64)a1[2];
          v24 = *a1;
          v118 = v202.m128i_i8[0];
          v11 = v201.m128i_i64[0];
        }
        v122 = (__int64)a1[1];
        v21 = v24;
        v27 = v24 + 3;
        v123 = (__int64)&v24[3 * v122 - 3];
        v124 = &v24[3 * v122];
        *(_WORD *)v124 = *(_WORD *)v123;
        v124[2] = *(_BYTE *)(v123 + 2);
        if ( 3 * v122 - 6 > 0 )
        {
          v204.m128i_i64[0] = (__int64)v24;
          v203.m128i_i64[0] = v22;
          v202.m128i_i64[0] = v11;
          v201.m128i_i8[0] = v118;
          memmove(&v124[-3 * v122 + 6], (const void *)(v123 - (3 * v122 - 6)), 3 * v122 - 6);
          v118 = v201.m128i_i8[0];
          v11 = v202.m128i_i64[0];
          v22 = v203.m128i_i64[0];
          v24 = (__int8 *)v204.m128i_i64[0];
        }
        v20 = v122 + 1;
        a1[1] = (_BYTE *)v20;
        v24[3] = v118;
        v24[4] = v119;
        v24[5] = v121;
      }
      v23 = 3 * v20;
      v25 = (__int64)&v21[3 * v20];
    }
    else
    {
      if ( a7 > 1 )
      {
        if ( v201.m128i_i8[0] )
        {
          v36 = a2[5];
          v37 = v20 + 1;
          v38 = a7 + 32;
          v39 = v36 & 0xFE;
          if ( (__int8 *)v25 == v24 + 3 )
          {
            if ( v37 > v22 )
            {
              v201.m128i_i64[0] = v11;
              sub_2236E10(a1, v11, v37, 3);
              v24 = *a1;
              v11 = v201.m128i_i64[0];
            }
            v132 = &v24[3 * (_QWORD)a1[1]];
            *v132 = 2;
            v132[1] = v38;
            v132[2] = v39;
            v21 = *a1;
            v22 = (unsigned __int64)a1[2];
            v20 = (unsigned __int64)(a1[1] + 1);
            a1[1] = (_BYTE *)v20;
            v41 = v21 + 3;
          }
          else
          {
            if ( v37 > v22 )
            {
              v201.m128i_i64[0] = v11;
              sub_2236E10(a1, v11, v37, 3);
              v22 = (unsigned __int64)a1[2];
              v24 = *a1;
              v11 = v201.m128i_i64[0];
            }
            v40 = (__int64)a1[1];
            v21 = v24;
            v41 = v24 + 3;
            v42 = (__int64)&v24[3 * v40 - 3];
            v43 = &v24[3 * v40];
            *(_WORD *)v43 = *(_WORD *)v42;
            v43[2] = *(_BYTE *)(v42 + 2);
            if ( 3 * v40 - 6 > 0 )
            {
              v203.m128i_i64[0] = (__int64)v24;
              v202.m128i_i64[0] = v22;
              v201.m128i_i64[0] = v11;
              memmove(&v43[-3 * v40 + 6], (const void *)(v42 - (3 * v40 - 6)), 3 * v40 - 6);
              v11 = v201.m128i_i64[0];
              v22 = v202.m128i_i64[0];
              v24 = (__int8 *)v203.m128i_i64[0];
            }
            v20 = v40 + 1;
            a1[1] = (_BYTE *)v20;
            v24[3] = 2;
            v24[4] = v38;
            v24[5] = v39;
          }
          v23 = 3 * v20;
          v25 = (__int64)&v21[3 * v20];
LABEL_35:
          v28 = v20 + 1;
          if ( v41 != (_BYTE *)v25 )
          {
            if ( v28 > v22 )
            {
              v201.m128i_i64[0] = v11;
              sub_2236E10(a1, v11, v28, 3);
              v148 = (__int64)a1[1];
              v21 = *a1;
              v11 = v201.m128i_i64[0];
              v23 = 3 * v148;
              v28 = v148 + 1;
              v25 = (__int64)&(*a1)[3 * v148];
            }
            v46 = (__int64)&v21[v23 - 3];
            v47 = v23 - 6;
            v48 = 0xAAAAAAAAAAAAAAABLL * v47;
            *(_WORD *)v25 = *(_WORD *)v46;
            *(_BYTE *)(v25 + 2) = *(_BYTE *)(v46 + 2);
            v49 = -3;
            if ( v47 > 0 )
            {
              do
              {
                *(_WORD *)(v25 + v49) = *(_WORD *)(v46 + v49);
                *(_BYTE *)(v25 + v49 + 2) = *(_BYTE *)(v46 + v49 + 2);
                v49 -= 3;
                --v48;
              }
              while ( v48 );
            }
LABEL_13:
            a1[1] = (_BYTE *)v28;
            v33 = (_BYTE)v209 == 0;
            *(_WORD *)(v21 + 3) = 1026;
            v21[5] = 0;
            if ( v33 )
              return a1;
            goto LABEL_14;
          }
          goto LABEL_41;
        }
        v94 = v24[3];
        LOBYTE(v207) = v24[4];
        LOBYTE(v206) = v24[5] & 0xFE;
        v205 = a7;
        v95 = a7 + v20;
        v208 = 3LL * a7 + 3;
        v201.m128i_i64[0] = v208;
        if ( (__int8 *)v25 != &v24[v208] )
        {
          if ( v95 > v22 )
          {
            v203.m128i_i8[0] = v94;
            v202.m128i_i64[0] = v11;
            sub_2236E10(a1, v11, v95, 3);
            v24 = *a1;
            v94 = v203.m128i_i8[0];
            v11 = v202.m128i_i64[0];
          }
          v96 = (__int64)a1[1];
          v21 = v24;
          v97 = 3 * v96;
          v98 = (unsigned __int8 *)&v24[v208];
          v99 = (unsigned __int8 *)&v24[3 * v96];
          v100 = 3 * v96 - v208;
          v101 = 0xAAAAAAAAAAAAAAABLL * v100;
          if ( v205 <= 0xAAAAAAAAAAAAAAABLL * v100 )
          {
            v22 = (unsigned __int64)a1[2];
            v60 = (__int64)&v24[v208];
            v151 = 3 * (v96 - v205);
            v202.m128i_i64[0] = v151;
            v152 = (unsigned __int8 *)&v24[v151];
            v153 = &v24[3 * v96];
            v20 = 0xAAAAAAAAAAAAAAABLL * (v97 - v151) + v96;
            v203.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * (v97 - v151);
            if ( v20 > v22 )
            {
              v211 = v97;
              v210 = v94;
              v204.m128i_i64[0] = v11;
              sub_2236E10(a1, v11, v20, 3);
              v195 = (__int64)a1[1];
              v24 = *a1;
              v22 = (unsigned __int64)a1[2];
              v196 = 3 * v195;
              v21 = *a1;
              v20 = v203.m128i_i64[0] + v195;
              v94 = v210;
              v60 = (__int64)&(*a1)[v208];
              v153 = &(*a1)[v196];
              v97 = v211;
              v11 = v204.m128i_i64[0];
            }
            v154 = v97 - v202.m128i_i64[0];
            v155 = 0;
            if ( v99 != v152 )
            {
              do
              {
                *(_WORD *)&v153[v155] = *(_WORD *)&v152[v155];
                v153[v155 + 2] = v152[v155 + 2];
                v155 += 3;
              }
              while ( v155 != v154 );
            }
            v156 = v202.m128i_i64[0] - v208;
            a1[1] = (_BYTE *)v20;
            v157 = 0xAAAAAAAAAAAAAAABLL * v156;
            if ( v156 > 0 )
            {
              v158 = -3;
              do
              {
                *(_WORD *)&v99[v158] = *(_WORD *)&v152[v158];
                v99[v158 + 2] = v152[v158 + 2];
                v158 -= 3;
                --v157;
              }
              while ( v157 );
            }
            v159 = v205 - 1;
            if ( v205 - 1 <= 0xE )
            {
              v200 = v207;
              *v98 = v94;
              v167 = v98 + 3;
              v98[1] = v200;
              v98[2] = (unsigned __int8)v206;
            }
            else
            {
              v202.m128i_i64[0] = (unsigned __int8)v206
                                | ((v94
                                  | (((unsigned __int8)v207
                                    | (((unsigned __int8)v206
                                      | ((v94
                                        | (((unsigned __int8)v207
                                          | (((unsigned __int8)v206 | ((unsigned __int64)v94 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v202.m128i_i64[1] = (unsigned __int8)v207
                                | (((unsigned __int8)v206
                                  | ((v94
                                    | (((unsigned __int8)v207
                                      | (((unsigned __int8)v206
                                        | ((v94
                                          | (((unsigned __int8)v207 | ((unsigned __int64)(unsigned __int8)v206 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v203.m128i_i64[0] = v202.m128i_i64[1];
              v204.m128i_i64[1] = v202.m128i_i64[0];
              v203.m128i_i64[1] = v94
                                | (((unsigned __int8)v207
                                  | (((unsigned __int8)v206
                                    | ((v94
                                      | (((unsigned __int8)v207
                                        | (((unsigned __int8)v206
                                          | ((v94 | ((unsigned __int64)(unsigned __int8)v207 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v160 = &v98[48 * (v205 >> 4)];
              v204.m128i_i64[0] = v203.m128i_i64[1];
              v161 = v98;
              do
              {
                v162 = _mm_load_si128(&v203);
                v161 += 48;
                v163 = _mm_load_si128(&v202);
                *((__m128i *)v161 - 3) = _mm_load_si128(&v204);
                *((__m128i *)v161 - 2) = v162;
                *((__m128i *)v161 - 1) = v163;
              }
              while ( v160 != v161 );
              v164 = v205 - (v205 & 0xFFFFFFFFFFFFFFF0LL);
              v165 = &v98[3 * (v205 & 0xFFFFFFFFFFFFFFF0LL)];
              if ( v205 == (v205 & 0xFFFFFFFFFFFFFFF0LL) )
                goto LABEL_151;
              v166 = v207;
              *v165 = v94;
              v167 = v165 + 3;
              *(v167 - 2) = v166;
              *(v167 - 1) = (unsigned __int8)v206;
              v159 = v164 - 1;
              if ( !v159 )
                goto LABEL_151;
            }
            v168 = v207;
            v169 = (unsigned __int8)v206;
            *v167 = v94;
            v167[1] = v168;
            v167[2] = v169;
            if ( v159 != 1 )
            {
              v167[3] = v94;
              v167[4] = v168;
              v167[5] = v169;
              if ( v159 != 2 )
              {
                v167[6] = v94;
                v167[7] = v168;
                v167[8] = v169;
                if ( v159 != 3 )
                {
                  v167[9] = v94;
                  v167[10] = v168;
                  v167[11] = v169;
                  if ( v159 != 4 )
                  {
                    v167[12] = v94;
                    v167[13] = v168;
                    v167[14] = v169;
                    if ( v159 != 5 )
                    {
                      v167[15] = v94;
                      v167[16] = v168;
                      v167[17] = v169;
                      if ( v159 != 6 )
                      {
                        v167[18] = v94;
                        v167[19] = v168;
                        v167[20] = v169;
                        if ( v159 != 7 )
                        {
                          v167[21] = v94;
                          v167[22] = v168;
                          v167[23] = v169;
                          if ( v159 != 8 )
                          {
                            v167[24] = v94;
                            v167[25] = v168;
                            v167[26] = v169;
                            if ( v159 != 9 )
                            {
                              v167[27] = v94;
                              v167[28] = v168;
                              v167[29] = v169;
                              if ( v159 != 10 )
                              {
                                v167[30] = v94;
                                v167[31] = v168;
                                v167[32] = v169;
                                if ( v159 != 11 )
                                {
                                  v167[33] = v94;
                                  v167[34] = v168;
                                  v167[35] = v169;
                                  if ( v159 != 12 )
                                  {
                                    v167[36] = v94;
                                    v167[37] = v168;
                                    v167[38] = v169;
                                    if ( v159 != 13 )
                                    {
                                      v167[39] = v94;
                                      v167[40] = v168;
                                      v167[41] = v169;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_151;
          }
          v102 = v205 + v96;
          a1[1] = (_BYTE *)v102;
          if ( v98 != v99 )
          {
            v203.m128i_i8[0] = v94;
            v202.m128i_i64[0] = v11;
            memcpy(&v24[3 * v102 - v100], v98, v100);
            v24 = *a1;
            v94 = v203.m128i_i8[0];
            v11 = v202.m128i_i64[0];
          }
          if ( v101 )
          {
            if ( v101 - 1 <= 0xE )
            {
              v108 = v101;
            }
            else
            {
              v103 = ((v101 - 16) >> 4) + 1;
              v202.m128i_i64[0] = (unsigned __int8)v206
                                | ((v94
                                  | (((unsigned __int8)v207
                                    | (((unsigned __int8)v206
                                      | ((v94
                                        | (((unsigned __int8)v207
                                          | (((unsigned __int8)v206 | ((unsigned __int64)v94 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v204.m128i_i64[1] = v202.m128i_i64[0];
              v202.m128i_i64[1] = (unsigned __int8)v207
                                | (((unsigned __int8)v206
                                  | ((v94
                                    | (((unsigned __int8)v207
                                      | (((unsigned __int8)v206
                                        | ((v94
                                          | (((unsigned __int8)v207 | ((unsigned __int64)(unsigned __int8)v206 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v203.m128i_i64[0] = v202.m128i_i64[1];
              v104 = 0;
              v203.m128i_i64[1] = v94
                                | (((unsigned __int8)v207
                                  | (((unsigned __int8)v206
                                    | ((v94
                                      | (((unsigned __int8)v207
                                        | (((unsigned __int8)v206
                                          | ((v94 | ((unsigned __int64)(unsigned __int8)v207 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
              v204.m128i_i64[0] = v203.m128i_i64[1];
              v105 = v98;
              do
              {
                v106 = _mm_load_si128(&v203);
                ++v104;
                v105 += 48;
                v107 = _mm_load_si128(&v202);
                *((__m128i *)v105 - 3) = _mm_load_si128(&v204);
                *((__m128i *)v105 - 2) = v106;
                *((__m128i *)v105 - 1) = v107;
              }
              while ( v103 > v104 );
              v108 = v101 - 16 * v103;
              v98 += 48 * v103;
              if ( 16 * v103 == v101 )
                goto LABEL_131;
            }
            v109 = v207;
            v110 = (unsigned __int8)v206;
            *v98 = v94;
            v98[1] = v109;
            v98[2] = v110;
            if ( v108 != 1 )
            {
              v98[3] = v94;
              v98[4] = v109;
              v98[5] = v110;
              if ( v108 != 2 )
              {
                v98[6] = v94;
                v98[7] = v109;
                v98[8] = v110;
                if ( v108 != 3 )
                {
                  v98[9] = v94;
                  v98[10] = v109;
                  v98[11] = v110;
                  if ( v108 != 4 )
                  {
                    v98[12] = v94;
                    v98[13] = v109;
                    v98[14] = v110;
                    if ( v108 != 5 )
                    {
                      v98[15] = v94;
                      v98[16] = v109;
                      v98[17] = v110;
                      if ( v108 != 6 )
                      {
                        v98[18] = v94;
                        v98[19] = v109;
                        v98[20] = v110;
                        if ( v108 != 7 )
                        {
                          v98[21] = v94;
                          v98[22] = v109;
                          v98[23] = v110;
                          if ( v108 != 8 )
                          {
                            v98[24] = v94;
                            v98[25] = v109;
                            v98[26] = v110;
                            if ( v108 != 9 )
                            {
                              v98[27] = v94;
                              v98[28] = v109;
                              v98[29] = v110;
                              if ( v108 != 10 )
                              {
                                v98[30] = v94;
                                v98[31] = v109;
                                v98[32] = v110;
                                if ( v108 != 11 )
                                {
                                  v98[33] = v94;
                                  v98[34] = v109;
                                  v98[35] = v110;
                                  if ( v108 != 12 )
                                  {
                                    v98[36] = v94;
                                    v98[37] = v109;
                                    v98[38] = v110;
                                    if ( v108 != 13 )
                                    {
                                      v98[39] = v94;
                                      v98[40] = v109;
                                      v98[41] = v110;
                                      if ( v108 != 14 )
                                      {
                                        v98[42] = v94;
                                        v98[43] = v109;
                                        v98[44] = v110;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_131:
          v111 = v205 - v101;
          if ( v205 - v101 - 1 <= 0xE )
          {
            v115 = v205 - v101;
          }
          else
          {
            v202.m128i_i64[0] = (unsigned __int8)v206
                              | ((v94
                                | (((unsigned __int8)v207
                                  | (((unsigned __int8)v206
                                    | ((v94
                                      | (((unsigned __int8)v207
                                        | (((unsigned __int8)v206 | ((unsigned __int64)v94 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
            v204.m128i_i64[1] = v202.m128i_i64[0];
            v112 = v99;
            v202.m128i_i64[1] = (unsigned __int8)v207
                              | (((unsigned __int8)v206
                                | ((v94
                                  | (((unsigned __int8)v207
                                    | (((unsigned __int8)v206
                                      | ((v94
                                        | (((unsigned __int8)v207 | ((unsigned __int64)(unsigned __int8)v206 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
            v203.m128i_i64[0] = v202.m128i_i64[1];
            v203.m128i_i64[1] = v94
                              | (((unsigned __int8)v207
                                | (((unsigned __int8)v206
                                  | ((v94
                                    | (((unsigned __int8)v207
                                      | (((unsigned __int8)v206
                                        | ((v94 | ((unsigned __int64)(unsigned __int8)v207 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
            v204.m128i_i64[0] = v203.m128i_i64[1];
            do
            {
              v113 = _mm_load_si128(&v203);
              v112 += 48;
              v114 = _mm_load_si128(&v202);
              *((__m128i *)v112 - 3) = _mm_load_si128(&v204);
              *((__m128i *)v112 - 2) = v113;
              *((__m128i *)v112 - 1) = v114;
            }
            while ( v112 != &v99[48 * (v111 >> 4)] );
            v115 = v111 - (v111 & 0xFFFFFFFFFFFFFFF0LL);
            v99 += 3 * (v111 & 0xFFFFFFFFFFFFFFF0LL);
            if ( v111 == (v111 & 0xFFFFFFFFFFFFFFF0LL) )
            {
LABEL_150:
              v20 = (unsigned __int64)a1[1];
              v21 = v24;
              v22 = (unsigned __int64)a1[2];
              v60 = (__int64)&v24[v208];
LABEL_151:
              v23 = 3 * v20;
              v25 = (__int64)&v24[3 * v20];
LABEL_52:
              v61 = v20 + 1;
              if ( v60 == v25 )
              {
                if ( v61 > v22 )
                {
                  v201.m128i_i64[0] = v11;
                  sub_2236E10(a1, v11, v61, 3);
                  v24 = *a1;
                  v11 = v201.m128i_i64[0];
                }
                v147 = &v24[3 * (_QWORD)a1[1]];
                *(_WORD *)v147 = 1026;
                v147[2] = 0;
                ++a1[1];
              }
              else
              {
                if ( v61 > v22 )
                {
                  v202.m128i_i64[0] = v11;
                  sub_2236E10(a1, v11, v61, 3);
                  v149 = (__int64)a1[1];
                  v21 = *a1;
                  v11 = v202.m128i_i64[0];
                  v23 = 3 * v149;
                  v61 = v149 + 1;
                  v60 = (__int64)&(*a1)[v201.m128i_i64[0]];
                  v25 = (__int64)&(*a1)[3 * v149];
                }
                v62 = v23 - 3;
                v63 = &v21[v62];
                v64 = v62 - v201.m128i_i64[0];
                v65 = 0xAAAAAAAAAAAAAAABLL * v64;
                *(_WORD *)v25 = *(_WORD *)v63;
                *(_BYTE *)(v25 + 2) = v63[2];
                v66 = -3;
                if ( v64 > 0 )
                {
                  do
                  {
                    *(_WORD *)(v25 + v66) = *(_WORD *)&v63[v66];
                    *(_BYTE *)(v25 + v66 + 2) = v63[v66 + 2];
                    v66 -= 3;
                    --v65;
                  }
                  while ( v65 );
                }
                a1[1] = (_BYTE *)v61;
                *(_WORD *)v60 = 1026;
                *(_BYTE *)(v60 + 2) = 0;
              }
              goto LABEL_30;
            }
          }
          v116 = v207;
          v117 = (unsigned __int8)v206;
          *v99 = v94;
          v99[1] = v116;
          v99[2] = v117;
          if ( v115 != 1 )
          {
            v99[3] = v94;
            v99[4] = v116;
            v99[5] = v117;
            if ( v115 != 2 )
            {
              v99[6] = v94;
              v99[7] = v116;
              v99[8] = v117;
              if ( v115 != 3 )
              {
                v99[9] = v94;
                v99[10] = v116;
                v99[11] = v117;
                if ( v115 != 4 )
                {
                  v99[12] = v94;
                  v99[13] = v116;
                  v99[14] = v117;
                  if ( v115 != 5 )
                  {
                    v99[15] = v94;
                    v99[16] = v116;
                    v99[17] = v117;
                    if ( v115 != 6 )
                    {
                      v99[18] = v94;
                      v99[19] = v116;
                      v99[20] = v117;
                      if ( v115 != 7 )
                      {
                        v99[21] = v94;
                        v99[22] = v116;
                        v99[23] = v117;
                        if ( v115 != 8 )
                        {
                          v99[24] = v94;
                          v99[25] = v116;
                          v99[26] = v117;
                          if ( v115 != 9 )
                          {
                            v99[27] = v94;
                            v99[28] = v116;
                            v99[29] = v117;
                            if ( v115 != 10 )
                            {
                              v99[30] = v94;
                              v99[31] = v116;
                              v99[32] = v117;
                              if ( v115 != 11 )
                              {
                                v99[33] = v94;
                                v99[34] = v116;
                                v99[35] = v117;
                                if ( v115 != 12 )
                                {
                                  v99[36] = v94;
                                  v99[37] = v116;
                                  v99[38] = v117;
                                  if ( v115 != 13 )
                                  {
                                    v99[39] = v94;
                                    v99[40] = v116;
                                    v99[41] = v117;
                                    if ( v115 != 14 )
                                    {
                                      v99[42] = v94;
                                      v99[43] = v116;
                                      v99[44] = v117;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_150;
        }
        if ( v95 > v22 )
        {
          v203.m128i_i8[0] = v94;
          v202.m128i_i64[0] = v11;
          sub_2236E10(a1, v11, v95, 3);
          v24 = *a1;
          v26 = (unsigned __int64)a1[2];
          v94 = v203.m128i_i8[0];
          v11 = v202.m128i_i64[0];
        }
        v133 = (__int64)a1[1];
        v21 = v24;
        v134 = (unsigned __int8 *)&v24[3 * v133];
        v135 = v205 - 1;
        if ( v205 - 1 <= 0xE )
        {
          v199 = v207;
          *v134 = v94;
          v134[1] = v199;
          v134[2] = (unsigned __int8)v206;
          v144 = v134 + 3;
        }
        else
        {
          v136 = ((v205 - 16) >> 4) + 1;
          v202.m128i_i64[0] = (unsigned __int8)v206
                            | ((v94
                              | (((unsigned __int8)v207
                                | (((unsigned __int8)v206
                                  | ((v94
                                    | (((unsigned __int8)v207
                                      | (((unsigned __int8)v206 | ((unsigned __int64)v94 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v204.m128i_i64[1] = v202.m128i_i64[0];
          v202.m128i_i64[1] = (unsigned __int8)v207
                            | (((unsigned __int8)v206
                              | ((v94
                                | (((unsigned __int8)v207
                                  | (((unsigned __int8)v206
                                    | ((v94
                                      | (((unsigned __int8)v207 | ((unsigned __int64)(unsigned __int8)v206 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v203.m128i_i64[0] = v202.m128i_i64[1];
          v137 = 0;
          v138 = (__m128i *)&v24[3 * v133];
          v203.m128i_i64[1] = v94
                            | (((unsigned __int8)v207
                              | (((unsigned __int8)v206
                                | ((v94
                                  | (((unsigned __int8)v207
                                    | (((unsigned __int8)v206
                                      | ((v94 | ((unsigned __int64)(unsigned __int8)v207 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v204.m128i_i64[0] = v203.m128i_i64[1];
          do
          {
            v139 = _mm_load_si128(&v203);
            ++v137;
            v138 += 3;
            v140 = _mm_load_si128(&v202);
            v138[-3] = _mm_load_si128(&v204);
            v138[-2] = v139;
            v138[-1] = v140;
          }
          while ( v136 > v137 );
          v141 = v205 - 16 * v136;
          v142 = &v134[48 * v136];
          if ( v205 == 16 * v136
            || (v143 = v207,
                *v142 = v94,
                v144 = v142 + 3,
                *(v144 - 2) = v143,
                *(v144 - 1) = (unsigned __int8)v206,
                (v135 = v141 - 1) == 0) )
          {
LABEL_189:
            v22 = v26;
            v20 = v133 + v205;
            v60 = (__int64)&v24[v208];
            a1[1] = (_BYTE *)(v133 + v205);
            goto LABEL_151;
          }
        }
        v145 = v207;
        v146 = (unsigned __int8)v206;
        *v144 = v94;
        v144[1] = v145;
        v144[2] = v146;
        if ( v135 != 1 )
        {
          v144[3] = v94;
          v144[4] = v145;
          v144[5] = v146;
          if ( v135 != 2 )
          {
            v144[6] = v94;
            v144[7] = v145;
            v144[8] = v146;
            if ( v135 != 3 )
            {
              v144[9] = v94;
              v144[10] = v145;
              v144[11] = v146;
              if ( v135 != 4 )
              {
                v144[12] = v94;
                v144[13] = v145;
                v144[14] = v146;
                if ( v135 != 5 )
                {
                  v144[15] = v94;
                  v144[16] = v145;
                  v144[17] = v146;
                  if ( v135 != 6 )
                  {
                    v144[18] = v94;
                    v144[19] = v145;
                    v144[20] = v146;
                    if ( v135 != 7 )
                    {
                      v144[21] = v94;
                      v144[22] = v145;
                      v144[23] = v146;
                      if ( v135 != 8 )
                      {
                        v144[24] = v94;
                        v144[25] = v145;
                        v144[26] = v146;
                        if ( v135 != 9 )
                        {
                          v144[27] = v94;
                          v144[28] = v145;
                          v144[29] = v146;
                          if ( v135 != 10 )
                          {
                            v144[30] = v94;
                            v144[31] = v145;
                            v144[32] = v146;
                            if ( v135 != 11 )
                            {
                              v144[33] = v94;
                              v144[34] = v145;
                              v144[35] = v146;
                              if ( v135 != 12 )
                              {
                                v144[36] = v94;
                                v144[37] = v145;
                                v144[38] = v146;
                                if ( v135 != 13 )
                                {
                                  v144[39] = v94;
                                  v144[40] = v145;
                                  v144[41] = v146;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_189;
      }
      v27 = v24 + 3;
    }
LABEL_8:
    v28 = v20 + 1;
    if ( (_BYTE *)v25 != v27 )
    {
      if ( v28 > v22 )
      {
        v201.m128i_i64[0] = v11;
        sub_2236E10(a1, v11, v28, 3);
        v150 = (__int64)a1[1];
        v21 = *a1;
        v11 = v201.m128i_i64[0];
        v23 = 3 * v150;
        v28 = v150 + 1;
        v25 = (__int64)&(*a1)[3 * v150];
      }
      v29 = (__int64)&v21[v23 - 3];
      v30 = v23 - 6;
      v31 = 0xAAAAAAAAAAAAAAABLL * v30;
      *(_WORD *)v25 = *(_WORD *)v29;
      *(_BYTE *)(v25 + 2) = *(_BYTE *)(v29 + 2);
      v32 = -3;
      if ( v30 > 0 )
      {
        do
        {
          *(_WORD *)(v25 + v32) = *(_WORD *)(v29 + v32);
          *(_BYTE *)(v25 + v32 + 2) = *(_BYTE *)(v29 + v32 + 2);
          v32 -= 3;
          --v31;
        }
        while ( v31 );
      }
      goto LABEL_13;
    }
LABEL_41:
    if ( v28 > v22 )
    {
      v201.m128i_i64[0] = v11;
      sub_2236E10(a1, v11, v28, 3);
      v11 = v201.m128i_i64[0];
    }
    v50 = (__int64)&(*a1)[3 * (_QWORD)a1[1]];
    *(_WORD *)v50 = 1026;
    *(_BYTE *)(v50 + 2) = 0;
    ++a1[1];
    goto LABEL_30;
  }
  v44 = a8 == 1 && (_DWORD)a9 == 0;
  if ( a7 == 1 )
  {
    if ( v44 )
    {
      v51 = *a1;
      v52 = v20 + 1;
      v53 = (unsigned __int64)a1[2];
      v54 = **a1;
      v55 = (*a1)[1];
      v56 = (*a1)[2];
      if ( 3 * v20 )
      {
        if ( v52 > v53 )
        {
          v201.m128i_i64[0] = v11;
          sub_2236E10(a1, v11, v52, 3);
          v51 = *a1;
          v11 = v201.m128i_i64[0];
        }
        v57 = (__int64)a1[1];
        v58 = 3 * v57 - 3;
        v59 = &v51[3 * v57];
        *(_WORD *)v59 = *(_WORD *)&v51[v58];
        v59[2] = v51[v58 + 2];
        if ( v58 > 0 )
        {
          v202.m128i_i64[0] = (__int64)v51;
          v201.m128i_i64[0] = v11;
          memmove(&v59[-v58], v51, v58);
          v11 = v201.m128i_i64[0];
          v51 = (__int8 *)v202.m128i_i64[0];
        }
        a1[1] = (_BYTE *)(v57 + 1);
        *v51 = v54;
        v51[1] = v55;
        v51[2] = v56;
      }
      else
      {
        if ( v52 > v53 )
        {
          v201.m128i_i64[0] = v11;
          sub_2236E10(a1, v11, v52, 3);
          v51 = *a1;
          v11 = v201.m128i_i64[0];
        }
        v194 = &v51[3 * (_QWORD)a1[1]];
        *v194 = v54;
        v194[1] = v55;
        v194[2] = v56;
        ++a1[1];
      }
    }
    goto LABEL_30;
  }
  if ( !v44 )
    goto LABEL_30;
  v67 = *a1;
  v68 = 3 * v20;
  v69 = 3 * v20;
  v70 = (unsigned __int64)a1[2];
  v71 = *a1;
  v72 = (__int64)&(*a1)[3 * v20];
  if ( v201.m128i_i8[0] )
  {
    v125 = v20 + 1;
    v126 = a2[2] & 0xFE;
    v127 = a7 + 32;
    if ( v68 )
    {
      if ( v125 > v70 )
      {
        v201.m128i_i64[0] = v11;
        sub_2236E10(a1, v11, v125, 3);
        v197 = (__int64)a1[1];
        v71 = *a1;
        v11 = v201.m128i_i64[0];
        v69 = 3 * v197;
        v125 = v197 + 1;
        v72 = (__int64)&(*a1)[v69];
      }
      v128 = v69 - 3;
      v129 = 0xAAAAAAAAAAAAAAABLL * v128;
      v130 = &v71[v128];
      *(_WORD *)v72 = *(_WORD *)&v71[v128];
      *(_BYTE *)(v72 + 2) = v71[v128 + 2];
      v131 = -3;
      if ( v128 > 0 )
      {
        do
        {
          *(_WORD *)(v72 + v131) = *(_WORD *)&v130[v131];
          *(_BYTE *)(v72 + v131 + 2) = v130[v131 + 2];
          v131 -= 3;
          --v129;
        }
        while ( v129 );
      }
      a1[1] = (_BYTE *)v125;
      *v71 = 2;
      v71[1] = v127;
      v71[2] = v126;
    }
    else
    {
      if ( v125 > v70 )
      {
        v201.m128i_i64[0] = v11;
        sub_2236E10(a1, v11, v125, 3);
        v67 = *a1;
        v11 = v201.m128i_i64[0];
      }
      v171 = &v67[3 * (_QWORD)a1[1]];
      *v171 = 2;
      v171[1] = v127;
      v171[2] = v126;
      ++a1[1];
    }
    goto LABEL_30;
  }
  v73 = a7;
  v74 = a2[3];
  v75 = a2[4];
  v76 = 3LL * a7 + 3;
  v77 = a2[5] & 0xFE;
  v78 = a7 + v20;
  v79 = (__m128i *)&v67[v76];
  if ( &v67[v76] == (__int8 *)v72 )
  {
    if ( v78 > v70 )
    {
      v203.m128i_i64[0] = a7;
      v202.m128i_i8[0] = v77;
      v201.m128i_i64[0] = v11;
      sub_2236E10(a1, v11, v78, 3);
      v67 = *a1;
      v73 = a7;
      v77 = v202.m128i_i8[0];
      v11 = v201.m128i_i64[0];
    }
    v172 = (__int64)a1[1];
    v173 = (__m128i *)&v67[3 * v172];
    if ( !v73 )
      goto LABEL_247;
    if ( v73 - 1 <= 0xE )
    {
      v180 = v73;
    }
    else
    {
      v174 = ((v73 - 16) >> 4) + 1;
      v201.m128i_i64[0] = v77
                        | ((v74
                          | ((v75
                            | ((v77 | ((v74 | ((v75 | ((v77 | ((unsigned __int64)v74 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v201.m128i_i64[1] = v75
                        | ((v77
                          | ((v74
                            | ((v75 | ((v77 | ((v74 | ((v75 | ((unsigned __int64)v77 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v202.m128i_i64[0] = v201.m128i_i64[1];
      v203.m128i_i64[1] = v201.m128i_i64[0];
      v175 = v173;
      v202.m128i_i64[1] = v74
                        | ((v75
                          | ((v77
                            | ((v74 | ((v75 | ((v77 | ((v74 | ((unsigned __int64)v75 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v203.m128i_i64[0] = v202.m128i_i64[1];
      v176 = 0;
      do
      {
        v177 = _mm_load_si128(&v202);
        ++v176;
        v175 += 3;
        v178 = _mm_load_si128(&v201);
        v175[-3] = _mm_load_si128(&v203);
        v175[-2] = v177;
        v175[-1] = v178;
      }
      while ( v174 > v176 );
      v179 = 16 * (((v73 - 16) >> 4) + 1);
      v180 = v73 - v179;
      v173 = (__m128i *)((char *)v173 + 32 * v174 + v179);
      if ( v73 == v179 )
      {
LABEL_247:
        a1[1] = (_BYTE *)(v172 + v73);
        goto LABEL_30;
      }
    }
    v173->m128i_i8[0] = v74;
    v173->m128i_i8[1] = v75;
    v173->m128i_i8[2] = v77;
    if ( v180 != 1 )
    {
      v173->m128i_i8[3] = v74;
      v173->m128i_i8[4] = v75;
      v173->m128i_i8[5] = v77;
      if ( v180 != 2 )
      {
        v173->m128i_i8[6] = v74;
        v173->m128i_i8[7] = v75;
        v173->m128i_i8[8] = v77;
        if ( v180 != 3 )
        {
          v173->m128i_i8[9] = v74;
          v173->m128i_i8[10] = v75;
          v173->m128i_i8[11] = v77;
          if ( v180 != 4 )
          {
            v173->m128i_i8[12] = v74;
            v173->m128i_i8[13] = v75;
            v173->m128i_i8[14] = v77;
            if ( v180 != 5 )
            {
              v173->m128i_i8[15] = v74;
              v173[1].m128i_i8[0] = v75;
              v173[1].m128i_i8[1] = v77;
              if ( v180 != 6 )
              {
                v173[1].m128i_i8[2] = v74;
                v173[1].m128i_i8[3] = v75;
                v173[1].m128i_i8[4] = v77;
                if ( v180 != 7 )
                {
                  v173[1].m128i_i8[5] = v74;
                  v173[1].m128i_i8[6] = v75;
                  v173[1].m128i_i8[7] = v77;
                  if ( v180 != 8 )
                  {
                    v173[1].m128i_i8[8] = v74;
                    v173[1].m128i_i8[9] = v75;
                    v173[1].m128i_i8[10] = v77;
                    if ( v180 != 9 )
                    {
                      v173[1].m128i_i8[11] = v74;
                      v173[1].m128i_i8[12] = v75;
                      v173[1].m128i_i8[13] = v77;
                      if ( v180 != 10 )
                      {
                        v173[1].m128i_i8[14] = v74;
                        v173[1].m128i_i8[15] = v75;
                        v173[2].m128i_i8[0] = v77;
                        if ( v180 != 11 )
                        {
                          v173[2].m128i_i8[1] = v74;
                          v173[2].m128i_i8[2] = v75;
                          v173[2].m128i_i8[3] = v77;
                          if ( v180 != 12 )
                          {
                            v173[2].m128i_i8[4] = v74;
                            v173[2].m128i_i8[5] = v75;
                            v173[2].m128i_i8[6] = v77;
                            if ( v180 != 13 )
                            {
                              v173[2].m128i_i8[7] = v74;
                              v173[2].m128i_i8[8] = v75;
                              v173[2].m128i_i8[9] = v77;
                              if ( v180 != 14 )
                              {
                                v173[2].m128i_i8[10] = v74;
                                v173[2].m128i_i8[11] = v75;
                                v173[2].m128i_i8[12] = v77;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_247;
  }
  if ( v78 > v70 )
  {
    v204.m128i_i64[0] = 3LL * a7 + 3;
    v203.m128i_i64[0] = a7;
    v202.m128i_i8[0] = v77;
    v201.m128i_i64[0] = v11;
    sub_2236E10(a1, v11, v78, 3);
    v20 = (unsigned __int64)a1[1];
    v71 = *a1;
    v76 = v204.m128i_i64[0];
    v73 = a7;
    v69 = 3 * v20;
    v77 = v202.m128i_i8[0];
    v11 = v201.m128i_i64[0];
    v79 = (__m128i *)&(*a1)[v204.m128i_i64[0]];
    v72 = (__int64)&(*a1)[3 * v20];
  }
  v80 = 0xAAAAAAAAAAAAAAABLL * (v69 - v76);
  if ( v73 > v80 )
  {
    v81 = v73 + v20;
    a1[1] = (_BYTE *)v81;
    if ( (__m128i *)v72 != v79 )
    {
      v204.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * (v69 - v76);
      v203.m128i_i64[0] = v11;
      v202.m128i_i64[0] = v73;
      v201.m128i_i8[0] = v77;
      memcpy(&v71[3 * v81 - (v69 - v76)], v79, v69 - v76);
      v80 = v204.m128i_i64[0];
      v11 = v203.m128i_i64[0];
      v73 = v202.m128i_i64[0];
      v77 = v201.m128i_i8[0];
    }
    if ( !v80 )
      goto LABEL_86;
    if ( v80 - 1 <= 0xE )
    {
      v88 = v80;
    }
    else
    {
      v82 = ((v80 - 16) >> 4) + 1;
      v201.m128i_i64[0] = v77
                        | ((v74
                          | ((v75
                            | ((v77 | ((v74 | ((v75 | ((v77 | ((unsigned __int64)v74 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v201.m128i_i64[1] = v75
                        | ((v77
                          | ((v74
                            | ((v75 | ((v77 | ((v74 | ((v75 | ((unsigned __int64)v77 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v203.m128i_i64[1] = v201.m128i_i64[0];
      v83 = v79;
      v202.m128i_i64[0] = v201.m128i_i64[1];
      v202.m128i_i64[1] = v74
                        | ((v75
                          | ((v77
                            | ((v74 | ((v75 | ((v77 | ((v74 | ((unsigned __int64)v75 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v203.m128i_i64[0] = v202.m128i_i64[1];
      v84 = 0;
      do
      {
        v85 = _mm_load_si128(&v202);
        ++v84;
        v83 += 3;
        v86 = _mm_load_si128(&v201);
        v83[-3] = _mm_load_si128(&v203);
        v83[-2] = v85;
        v83[-1] = v86;
      }
      while ( v82 > v84 );
      v87 = 16 * (((v80 - 16) >> 4) + 1);
      v88 = v80 - v87;
      v79 = (__m128i *)((char *)v79 + 32 * v82 + v87);
      if ( v87 == v80 )
      {
LABEL_86:
        v89 = v73 - v80;
        if ( v89 - 1 <= 0xE )
        {
          v93 = v89;
        }
        else
        {
          v201.m128i_i64[0] = v77
                            | ((v74
                              | ((v75
                                | ((v77 | ((v74 | ((v75 | ((v77 | ((unsigned __int64)v74 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v201.m128i_i64[1] = v75
                            | ((v77
                              | ((v74
                                | ((v75 | ((v77 | ((v74 | ((v75 | ((unsigned __int64)v77 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v202.m128i_i64[0] = v201.m128i_i64[1];
          v203.m128i_i64[1] = v201.m128i_i64[0];
          v90 = v72;
          v202.m128i_i64[1] = v74
                            | ((v75
                              | ((v77
                                | ((v74 | ((v75 | ((v77 | ((v74 | ((unsigned __int64)v75 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
          v203.m128i_i64[0] = v202.m128i_i64[1];
          do
          {
            v91 = _mm_load_si128(&v201);
            v90 += 48;
            *(__m128i *)(v90 - 48) = _mm_load_si128(&v203);
            v92 = _mm_load_si128(&v202);
            *(__m128i *)(v90 - 16) = v91;
            *(__m128i *)(v90 - 32) = v92;
          }
          while ( v90 != v72 + 48 * (v89 >> 4) );
          v93 = v89 - (v89 & 0xFFFFFFFFFFFFFFF0LL);
          v72 += 3 * (v89 & 0xFFFFFFFFFFFFFFF0LL);
          if ( v89 == (v89 & 0xFFFFFFFFFFFFFFF0LL) )
            goto LABEL_30;
        }
        *(_BYTE *)v72 = v74;
        *(_BYTE *)(v72 + 1) = v75;
        *(_BYTE *)(v72 + 2) = v77;
        if ( v93 != 1 )
        {
          *(_BYTE *)(v72 + 3) = v74;
          *(_BYTE *)(v72 + 4) = v75;
          *(_BYTE *)(v72 + 5) = v77;
          if ( v93 != 2 )
          {
            *(_BYTE *)(v72 + 6) = v74;
            *(_BYTE *)(v72 + 7) = v75;
            *(_BYTE *)(v72 + 8) = v77;
            if ( v93 != 3 )
            {
              *(_BYTE *)(v72 + 9) = v74;
              *(_BYTE *)(v72 + 10) = v75;
              *(_BYTE *)(v72 + 11) = v77;
              if ( v93 != 4 )
              {
                *(_BYTE *)(v72 + 12) = v74;
                *(_BYTE *)(v72 + 13) = v75;
                *(_BYTE *)(v72 + 14) = v77;
                if ( v93 != 5 )
                {
                  *(_BYTE *)(v72 + 15) = v74;
                  *(_BYTE *)(v72 + 16) = v75;
                  *(_BYTE *)(v72 + 17) = v77;
                  if ( v93 != 6 )
                  {
                    *(_BYTE *)(v72 + 18) = v74;
                    *(_BYTE *)(v72 + 19) = v75;
                    *(_BYTE *)(v72 + 20) = v77;
                    if ( v93 != 7 )
                    {
                      *(_BYTE *)(v72 + 21) = v74;
                      *(_BYTE *)(v72 + 22) = v75;
                      *(_BYTE *)(v72 + 23) = v77;
                      if ( v93 != 8 )
                      {
                        *(_BYTE *)(v72 + 24) = v74;
                        *(_BYTE *)(v72 + 25) = v75;
                        *(_BYTE *)(v72 + 26) = v77;
                        if ( v93 != 9 )
                        {
                          *(_BYTE *)(v72 + 27) = v74;
                          *(_BYTE *)(v72 + 28) = v75;
                          *(_BYTE *)(v72 + 29) = v77;
                          if ( v93 != 10 )
                          {
                            *(_BYTE *)(v72 + 30) = v74;
                            *(_BYTE *)(v72 + 31) = v75;
                            *(_BYTE *)(v72 + 32) = v77;
                            if ( v93 != 11 )
                            {
                              *(_BYTE *)(v72 + 33) = v74;
                              *(_BYTE *)(v72 + 34) = v75;
                              *(_BYTE *)(v72 + 35) = v77;
                              if ( v93 != 12 )
                              {
                                *(_BYTE *)(v72 + 36) = v74;
                                *(_BYTE *)(v72 + 37) = v75;
                                *(_BYTE *)(v72 + 38) = v77;
                                if ( v93 != 13 )
                                {
                                  *(_BYTE *)(v72 + 39) = v74;
                                  *(_BYTE *)(v72 + 40) = v75;
                                  *(_BYTE *)(v72 + 41) = v77;
                                  if ( v93 != 14 )
                                  {
                                    *(_BYTE *)(v72 + 42) = v74;
                                    *(_BYTE *)(v72 + 43) = v75;
                                    *(_BYTE *)(v72 + 44) = v77;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_30;
      }
    }
    v79->m128i_i8[0] = v74;
    v79->m128i_i8[1] = v75;
    v79->m128i_i8[2] = v77;
    if ( v88 != 1 )
    {
      v79->m128i_i8[3] = v74;
      v79->m128i_i8[4] = v75;
      v79->m128i_i8[5] = v77;
      if ( v88 != 2 )
      {
        v79->m128i_i8[6] = v74;
        v79->m128i_i8[7] = v75;
        v79->m128i_i8[8] = v77;
        if ( v88 != 3 )
        {
          v79->m128i_i8[9] = v74;
          v79->m128i_i8[10] = v75;
          v79->m128i_i8[11] = v77;
          if ( v88 != 4 )
          {
            v79->m128i_i8[12] = v74;
            v79->m128i_i8[13] = v75;
            v79->m128i_i8[14] = v77;
            if ( v88 != 5 )
            {
              v79->m128i_i8[15] = v74;
              v79[1].m128i_i8[0] = v75;
              v79[1].m128i_i8[1] = v77;
              if ( v88 != 6 )
              {
                v79[1].m128i_i8[2] = v74;
                v79[1].m128i_i8[3] = v75;
                v79[1].m128i_i8[4] = v77;
                if ( v88 != 7 )
                {
                  v79[1].m128i_i8[5] = v74;
                  v79[1].m128i_i8[6] = v75;
                  v79[1].m128i_i8[7] = v77;
                  if ( v88 != 8 )
                  {
                    v79[1].m128i_i8[8] = v74;
                    v79[1].m128i_i8[9] = v75;
                    v79[1].m128i_i8[10] = v77;
                    if ( v88 != 9 )
                    {
                      v79[1].m128i_i8[11] = v74;
                      v79[1].m128i_i8[12] = v75;
                      v79[1].m128i_i8[13] = v77;
                      if ( v88 != 10 )
                      {
                        v79[1].m128i_i8[14] = v74;
                        v79[1].m128i_i8[15] = v75;
                        v79[2].m128i_i8[0] = v77;
                        if ( v88 != 11 )
                        {
                          v79[2].m128i_i8[1] = v74;
                          v79[2].m128i_i8[2] = v75;
                          v79[2].m128i_i8[3] = v77;
                          if ( v88 != 12 )
                          {
                            v79[2].m128i_i8[4] = v74;
                            v79[2].m128i_i8[5] = v75;
                            v79[2].m128i_i8[6] = v77;
                            if ( v88 != 13 )
                            {
                              v79[2].m128i_i8[7] = v74;
                              v79[2].m128i_i8[8] = v75;
                              v79[2].m128i_i8[9] = v77;
                              if ( v88 != 14 )
                              {
                                v79[2].m128i_i8[10] = v74;
                                v79[2].m128i_i8[11] = v75;
                                v79[2].m128i_i8[12] = v77;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_86;
  }
  v181 = v72;
  v182 = 3 * (v20 - v73);
  v201.m128i_i64[0] = v182;
  v183 = &v71[v182];
  v202.m128i_i64[0] = 0xAAAAAAAAAAAAAAABLL * (v69 - v182);
  v184 = v202.m128i_i64[0] + v20;
  if ( v184 > (unsigned __int64)a1[2] )
  {
    v207 = v76;
    v206 = v183;
    v205 = v73;
    v204.m128i_i8[0] = v77;
    v203.m128i_i64[0] = v11;
    sub_2236E10(a1, v11, v184, 3);
    v198 = (__int64)a1[1];
    v76 = v207;
    v183 = v206;
    v73 = v205;
    v77 = v204.m128i_i8[0];
    v181 = (__int64)&(*a1)[3 * v198];
    v184 = v202.m128i_i64[0] + v198;
    v11 = v203.m128i_i64[0];
  }
  v185 = 0;
  if ( v183 != (__int8 *)v72 )
  {
    do
    {
      *(_WORD *)(v181 + v185) = *(_WORD *)&v183[v185];
      *(_BYTE *)(v181 + v185 + 2) = v183[v185 + 2];
      v185 += 3;
    }
    while ( v185 != v72 - (_QWORD)v183 );
  }
  v186 = v201.m128i_i64[0];
  a1[1] = (_BYTE *)v184;
  v187 = v186 - v76;
  v188 = 0xAAAAAAAAAAAAAAABLL * v187;
  if ( v187 > 0 )
  {
    v189 = -3;
    do
    {
      *(_WORD *)(v72 + v189) = *(_WORD *)&v183[v189];
      *(_BYTE *)(v72 + v189 + 2) = v183[v189 + 2];
      v189 -= 3;
      --v188;
    }
    while ( v188 );
  }
  if ( v73 )
  {
    if ( v73 - 1 <= 0xE )
    {
      v193 = v73;
    }
    else
    {
      v201.m128i_i64[0] = v77
                        | ((v74
                          | ((v75
                            | ((v77 | ((v74 | ((v75 | ((v77 | ((unsigned __int64)v74 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v201.m128i_i64[1] = v75
                        | ((v77
                          | ((v74
                            | ((v75 | ((v77 | ((v74 | ((v75 | ((unsigned __int64)v77 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v202.m128i_i64[0] = v201.m128i_i64[1];
      v203.m128i_i64[1] = v201.m128i_i64[0];
      v202.m128i_i64[1] = v74
                        | ((v75
                          | ((v77
                            | ((v74 | ((v75 | ((v77 | ((v74 | ((unsigned __int64)v75 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
      v203.m128i_i64[0] = v202.m128i_i64[1];
      v190 = v79;
      do
      {
        v191 = _mm_load_si128(&v202);
        v190 += 3;
        v192 = _mm_load_si128(&v201);
        v190[-3] = _mm_load_si128(&v203);
        v190[-2] = v191;
        v190[-1] = v192;
      }
      while ( v190 != &v79[3 * (v73 >> 4)] );
      v193 = v73 - (v73 & 0xFFFFFFFFFFFFFFF0LL);
      v79 = (__m128i *)((char *)v79 + 3 * (v73 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v73 == (v73 & 0xFFFFFFFFFFFFFFF0LL) )
        goto LABEL_30;
    }
    v79->m128i_i8[0] = v74;
    v79->m128i_i8[1] = v75;
    v79->m128i_i8[2] = v77;
    if ( v193 != 1 )
    {
      v79->m128i_i8[3] = v74;
      v79->m128i_i8[4] = v75;
      v79->m128i_i8[5] = v77;
      if ( v193 != 2 )
      {
        v79->m128i_i8[6] = v74;
        v79->m128i_i8[7] = v75;
        v79->m128i_i8[8] = v77;
        if ( v193 != 3 )
        {
          v79->m128i_i8[9] = v74;
          v79->m128i_i8[10] = v75;
          v79->m128i_i8[11] = v77;
          if ( v193 != 4 )
          {
            v79->m128i_i8[12] = v74;
            v79->m128i_i8[13] = v75;
            v79->m128i_i8[14] = v77;
            if ( v193 != 5 )
            {
              v79->m128i_i8[15] = v74;
              v79[1].m128i_i8[0] = v75;
              v79[1].m128i_i8[1] = v77;
              if ( v193 != 6 )
              {
                v79[1].m128i_i8[2] = v74;
                v79[1].m128i_i8[3] = v75;
                v79[1].m128i_i8[4] = v77;
                if ( v193 != 7 )
                {
                  v79[1].m128i_i8[5] = v74;
                  v79[1].m128i_i8[6] = v75;
                  v79[1].m128i_i8[7] = v77;
                  if ( v193 != 8 )
                  {
                    v79[1].m128i_i8[8] = v74;
                    v79[1].m128i_i8[9] = v75;
                    v79[1].m128i_i8[10] = v77;
                    if ( v193 != 9 )
                    {
                      v79[1].m128i_i8[11] = v74;
                      v79[1].m128i_i8[12] = v75;
                      v79[1].m128i_i8[13] = v77;
                      if ( v193 != 10 )
                      {
                        v79[1].m128i_i8[14] = v74;
                        v79[1].m128i_i8[15] = v75;
                        v79[2].m128i_i8[0] = v77;
                        if ( v193 != 11 )
                        {
                          v79[2].m128i_i8[1] = v74;
                          v79[2].m128i_i8[2] = v75;
                          v79[2].m128i_i8[3] = v77;
                          if ( v193 != 12 )
                          {
                            v79[2].m128i_i8[4] = v74;
                            v79[2].m128i_i8[5] = v75;
                            v79[2].m128i_i8[6] = v77;
                            if ( v193 != 13 )
                            {
                              v79[2].m128i_i8[7] = v74;
                              v79[2].m128i_i8[8] = v75;
                              v79[2].m128i_i8[9] = v77;
                              if ( v193 != 14 )
                              {
                                v79[2].m128i_i8[10] = v74;
                                v79[2].m128i_i8[11] = v75;
                                v79[2].m128i_i8[12] = v77;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_30:
  if ( !(_BYTE)v209 )
    return a1;
LABEL_14:
  v213 = unk_2671F7A;
  v34 = (__int64)a1[1];
  v212 = unk_2671F78;
  if ( v34 + 1 > (unsigned __int64)a1[2] )
  {
    sub_2236E10(a1, v11, v34 + 1, 3);
    v34 = (__int64)a1[1];
  }
  v35 = (__int64)&(*a1)[3 * v34];
  *(_WORD *)v35 = v212;
  *(_BYTE *)(v35 + 2) = v213;
  ++a1[1];
  return a1;
}
