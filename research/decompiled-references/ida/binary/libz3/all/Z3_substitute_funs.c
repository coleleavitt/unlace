__m128i *__fastcall Z3_substitute_funs(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        const __m128i *a5)
{
  char **v5; // r12
  char **v6; // r13
  char **v7; // r12
  char **exception; // r13
  char **v9; // r12
  char **v10; // r12
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rax
  __m128i *v16; // r15
  _OWORD *v17; // rax
  __int64 *v18; // rax
  unsigned __int64 *v19; // r14
  unsigned int v20; // ebp
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  __m128i v23; // xmm0
  int v24; // r13d
  char *v25; // rcx
  __m128i *v26; // rbx
  int v27; // esi
  __m128i v28; // xmm1
  __int64 v29; // r13
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 *v36; // r14
  _QWORD *v37; // rbx
  __int64 v38; // rsi
  unsigned int v39; // r8d
  __int32 v40; // ecx
  size_t v41; // r12
  __m128i *v42; // r13
  __int64 v43; // r11
  __int64 v44; // r9
  unsigned int v45; // esi
  __int64 v46; // r10
  __m128i *v47; // rdi
  char *i; // rax
  __int64 v49; // rdx
  __int16 v50; // ax
  __int64 v51; // r10
  unsigned int v52; // edi
  __int64 v53; // rax
  char *v54; // rsi
  char *j; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // esi
  __int64 v59; // rcx
  char *v60; // rdi
  char *n; // rdx
  char *v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rsi
  __int64 v65; // rdi
  bool v66; // zf
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 *v71; // r12
  unsigned __int64 v72; // r13
  __int64 v73; // rsi
  __int64 v74; // r14
  __int64 *v75; // r12
  unsigned __int64 v76; // r13
  __int64 v77; // rsi
  __int64 v79; // rax
  int v80; // r10d
  __int64 v81; // r11
  __int64 m128i_i64; // r8
  const __m128i *v83; // rbp
  __int64 v84; // rax
  __m128i *v85; // rdx
  __m128i *v86; // rax
  __m128i v87; // xmm1
  char *v88; // rax
  __int64 v89; // rdx
  _DWORD *v90; // rax
  unsigned int v91; // eax
  __int64 v92; // rdx
  int v93; // eax
  unsigned __int64 *v94; // rdx
  int v95; // edi
  int v96; // esi
  unsigned int v97; // esi
  __m128i v98; // xmm0
  __int64 v99; // rax
  __m128i *v100; // rdi
  __m128i *v101; // rax
  __m128i *v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  unsigned int v105; // edx
  unsigned int v106; // ecx
  __int64 v107; // rax
  unsigned int v108; // ecx
  __m128i v109; // xmm0
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  unsigned __int64 v113; // r10
  __int64 *v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rax
  unsigned int v117; // esi
  __int64 v118; // rax
  char *v119; // rdi
  char *k; // rax
  __int64 v121; // rdx
  unsigned int v122; // eax
  __int64 v123; // rdx
  int v124; // eax
  _QWORD *v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rsi
  __m128i *v128; // r8
  int v129; // ecx
  __int64 v130; // rax
  __m128i *v131; // rdi
  __m128i *m; // rax
  __int64 v133; // rdx
  unsigned int v134; // ecx
  unsigned int v135; // esi
  __int64 v136; // rax
  __m128i *v137; // rdi
  __int64 v138; // rcx
  __int64 v139; // rdx
  unsigned int v140; // eax
  __int64 v141; // rsi
  int v142; // eax
  __int64 *v143; // rsi
  __int64 v144; // rdx
  unsigned int v145; // r10d
  size_t v146; // rsi
  unsigned int *v147; // rax
  __int64 v148; // rsi
  unsigned int v149; // edx
  size_t v150; // rsi
  __int64 v151; // rax
  _DWORD *v152; // rdi
  _QWORD *v153; // rax
  int v154; // ecx
  unsigned int v155; // eax
  unsigned __int64 v156; // rsi
  __int64 v157; // rdi
  unsigned int v158; // edx
  unsigned int v159; // ecx
  _DWORD *v160; // rax
  _QWORD *v161; // rbx
  __m128i *v162; // rax
  __int32 v163; // ecx
  __m128i *v164; // rdx
  __int64 v165; // rdi
  __int64 v166; // rsi
  const __m128i *v167; // rcx
  __int64 v168; // rdx
  __m128i *v169; // rsi
  __m128i *v170; // rdx
  __m128i *v171; // rax
  __int32 v172; // ecx
  __m128i *v173; // rdx
  __int64 v174; // rdi
  __int64 v175; // rdi
  const __m128i *v176; // rcx
  __int64 v177; // rdx
  __m128i *v178; // rsi
  __m128i *v179; // rdx
  int v180; // edx
  _DWORD *v181; // rax
  unsigned int v182; // ecx
  int v183; // eax
  unsigned int v184; // edx
  unsigned int v185; // eax
  _DWORD *v186; // rax
  _QWORD *v187; // rax
  unsigned int v188; // r12d
  unsigned int v189; // eax
  unsigned int *v190; // rax
  __int64 v191; // rdx
  _QWORD *v192; // rax
  __int64 v193; // rcx
  _QWORD *v194; // rbx
  __m128i *v195; // rax
  __int32 v196; // ecx
  __m128i *v197; // rdx
  __int64 v198; // rsi
  __int64 v199; // rdi
  const __m128i *v200; // rcx
  __int64 v201; // rdx
  __m128i *v202; // rsi
  __m128i *v203; // rdx
  int v204; // [rsp+0h] [rbp-368h]
  const __m128i *v205; // [rsp+8h] [rbp-360h]
  __int64 v206; // [rsp+8h] [rbp-360h]
  __m128i v207; // [rsp+10h] [rbp-358h] BYREF
  __int64 *v208; // [rsp+20h] [rbp-348h]
  void *ptr; // [rsp+28h] [rbp-340h]
  __int64 v210; // [rsp+30h] [rbp-338h]
  __m128i v211; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int64 v212; // [rsp+48h] [rbp-320h] BYREF
  __int64 v213; // [rsp+50h] [rbp-318h]
  int v214[3]; // [rsp+58h] [rbp-310h]
  char v215; // [rsp+67h] [rbp-301h]
  __int64 v216; // [rsp+68h] [rbp-300h]
  __int64 v217; // [rsp+70h] [rbp-2F8h]
  _OWORD *v218; // [rsp+78h] [rbp-2F0h]
  __int64 v219; // [rsp+80h] [rbp-2E8h]
  __int64 v220; // [rsp+88h] [rbp-2E0h]
  __int32 v221; // [rsp+90h] [rbp-2D8h]
  unsigned int v222; // [rsp+94h] [rbp-2D4h]
  unsigned __int32 v223; // [rsp+98h] [rbp-2D0h]
  __int32 v224; // [rsp+9Ch] [rbp-2CCh]
  __int64 v225; // [rsp+B0h] [rbp-2B8h]
  __int64 v226; // [rsp+C0h] [rbp-2A8h]
  int v227[2]; // [rsp+D0h] [rbp-298h] BYREF
  __int64 v228; // [rsp+D8h] [rbp-290h]
  __int64 v229[4]; // [rsp+E0h] [rbp-288h] BYREF
  _QWORD v230[20]; // [rsp+100h] [rbp-268h] BYREF
  __int64 v231; // [rsp+1A0h] [rbp-1C8h]
  int *v232; // [rsp+1A8h] [rbp-1C0h] BYREF
  int *v233; // [rsp+248h] [rbp-120h] BYREF
  __int64 v234; // [rsp+2E0h] [rbp-88h]
  __int64 v235; // [rsp+2E8h] [rbp-80h]
  __int64 v236; // [rsp+2F0h] [rbp-78h]
  __int64 v237; // [rsp+2F8h] [rbp-70h]
  __int64 v238; // [rsp+300h] [rbp-68h]
  __int64 v239; // [rsp+308h] [rbp-60h]
  __int64 v240; // [rsp+310h] [rbp-58h]
  _BYTE v241[80]; // [rsp+318h] [rbp-50h] BYREF

  v13 = a3;
  v216 = a2;
  v213 = a1;
  v14 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v215 = v14;
  if ( v14 )
    sub_29B2D0(v213, v216, a3);
  v15 = v213;
  *(_DWORD *)(v213 + 1520) = 0;
  v211.m128i_i64[1] = *(_QWORD *)(v15 + 232);
  v225 = v211.m128i_i64[1];
  v226 = v211.m128i_i64[1];
  v16 = (__m128i *)sub_186B270(0x80u);
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[5] = 0;
  v16[6] = 0;
  v16[7] = 0;
  v17 = (_OWORD *)sub_186B270(0x80u);
  ptr = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  if ( (_DWORD)v13 )
  {
    v18 = (__int64 *)&a4[v13];
    v205 = a5;
    v19 = a4;
    v20 = 8;
    v208 = v18;
    v207.m128i_i32[0] = 0;
    v207.m128i_i32[2] = 0;
    while ( 1 )
    {
      v21 = *(_QWORD *)(*v19 + 40);
      if ( v21 != sub_15D1F10(v205->m128i_i64[0]) )
      {
        sub_24EA30(v213, 1u, nullptr);
        if ( v215 )
        {
          sub_2BB620(0);
          sub_186B220(ptr);
          if ( v16 )
          {
            v63 = 0;
            sub_186B220(v16);
            goto LABEL_95;
          }
        }
        else
        {
          sub_186B220(ptr);
          if ( !v16 )
            return v16;
          sub_186B220(v16);
        }
        v63 = 0;
        if ( !v215 )
          return (__m128i *)v63;
LABEL_135:
        byte_1C7EBA0 = 1;
        return (__m128i *)v63;
      }
      v22 = *v19;
      v23 = _mm_loadl_epi64(v205);
      if ( 3 * v20 >= 4 * (v207.m128i_i32[2] + v207.m128i_i32[0]) )
      {
        v24 = v20 - 1;
        v25 = (char *)(16LL * v20);
        v26 = (__m128i *)&v25[(_QWORD)v16];
        goto LABEL_8;
      }
      LODWORD(v210) = 2 * v20;
      v211.m128i_i64[0] = v23.m128i_i64[0];
      v207.m128i_i64[0] = 32LL * v20;
      v79 = sub_186B270(v207.m128i_u64[0]);
      v80 = v210;
      v25 = (char *)v207.m128i_i64[0];
      v81 = v79;
      v23 = _mm_loadl_epi64(&v211);
      v26 = (__m128i *)(v207.m128i_i64[0] + v79);
      if ( (_DWORD)v210 )
        break;
      v26 = (__m128i *)v79;
      v24 = -1;
      m128i_i64 = (__int64)v16[v20].m128i_i64;
      if ( (__m128i *)m128i_i64 != v16 )
        goto LABEL_103;
LABEL_111:
      if ( v16 )
      {
        LODWORD(v212) = v80;
        v211.m128i_i64[0] = (__int64)v25;
        v210 = v81;
        v207.m128i_i64[0] = v23.m128i_i64[0];
        sub_186B220(v16);
        v23 = _mm_loadl_epi64(&v207);
        v81 = v210;
        v25 = (char *)v211.m128i_i64[0];
        v80 = v212;
      }
      v207.m128i_i32[0] = 0;
      v20 = v80;
      v16 = (__m128i *)v81;
LABEL_8:
      v27 = *(_DWORD *)(v22 + 12);
      v28 = _mm_unpacklo_epi64((__m128i)v22, v23);
      v29 = 16LL * (v27 & (unsigned int)v24);
      v30 = &v16[(unsigned __int64)v29 / 0x10];
      if ( (char *)v29 == v25 )
      {
        v32 = nullptr;
LABEL_16:
        if ( v30 != v16 )
        {
          v31 = v16;
          do
          {
            while ( 1 )
            {
              v34 = v31->m128i_i64[0];
              if ( v31->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v34 + 12) == v27 && v22 == v34 )
                goto LABEL_120;
              if ( v30 == ++v31 )
                goto LABEL_24;
            }
            if ( !v34 )
              goto LABEL_25;
            v32 = v31++;
          }
          while ( v30 != v31 );
        }
LABEL_24:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v31 = &v16[(unsigned __int64)v29 / 0x10];
      v32 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v33 = v31->m128i_i64[0];
          if ( v31->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v33 + 12) == v27 && v22 == v33 )
          {
LABEL_120:
            *v31 = v28;
            goto LABEL_28;
          }
          if ( ++v31 == v26 )
            goto LABEL_16;
        }
        if ( !v33 )
          break;
        v32 = v31++;
        if ( v31 == v26 )
          goto LABEL_16;
      }
LABEL_25:
      if ( v32 )
        --v207.m128i_i32[0];
      else
        v32 = v31;
      *v32 = v28;
      ++v207.m128i_i32[2];
LABEL_28:
      ++v19;
      v205 = (const __m128i *)((char *)v205 + 8);
      if ( v19 == (unsigned __int64 *)v208 )
        goto LABEL_29;
    }
    if ( (v207.m128i_i8[0] & 0x10) == 0 || (v79 += 16, *(_OWORD *)(v79 - 16) = 0, v26 != (__m128i *)v79) )
    {
      do
      {
        v79 += 32;
        *(_OWORD *)(v79 - 32) = 0;
        *(_OWORD *)(v79 - 16) = 0;
      }
      while ( v26 != (__m128i *)v79 );
    }
    v24 = v80 - 1;
    m128i_i64 = (__int64)v16[v20].m128i_i64;
LABEL_103:
    v83 = v16;
    do
    {
      while ( v83->m128i_i64[0] <= 1uLL )
      {
        if ( ++v83 == (const __m128i *)m128i_i64 )
          goto LABEL_111;
      }
      v84 = 16LL * (*(_DWORD *)(v83->m128i_i64[0] + 12) & (unsigned int)v24);
      v85 = (__m128i *)(v81 + v84);
      if ( v25 == (char *)v84 )
      {
LABEL_114:
        if ( (__m128i *)v81 == v85 )
        {
LABEL_119:
          v214[0] = v80;
          v212 = (unsigned __int64)v25;
          v211.m128i_i64[0] = m128i_i64;
          v210 = v81;
          v207.m128i_i64[0] = v23.m128i_i64[0];
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v86 = (__m128i *)v81;
        while ( v86->m128i_i64[0] )
        {
          if ( v85 == ++v86 )
            goto LABEL_119;
        }
      }
      else
      {
        v86 = (__m128i *)(v81 + v84);
        while ( v86->m128i_i64[0] )
        {
          if ( ++v86 == v26 )
            goto LABEL_114;
        }
      }
      v87 = _mm_loadu_si128(v83++);
      *v86 = v87;
    }
    while ( v83 != (const __m128i *)m128i_i64 );
    goto LABEL_111;
  }
  v20 = 8;
LABEL_29:
  *(_QWORD *)v214 = v230;
  sub_633760(v230, v211.m128i_i64[1], 0, v241);
  v241[8] = 0;
  v230[0] = &off_1C4CA80;
  v35 = (_QWORD *)sub_186B270(0x18u);
  v36 = nullptr;
  v37 = nullptr;
  v206 = (__int64)(v35 + 1);
  v38 = v216;
  v39 = 1;
  v40 = 7;
  *v35 = 0x100000002LL;
  v35[1] = v38;
  v207.m128i_i32[2] = 0;
  LODWORD(v210) = 0;
  LODWORD(v208) = 8;
  v212 = 8;
LABEL_30:
  v211.m128i_i32[0] = v40;
  v41 = 16 * v212;
  v42 = (__m128i *)((char *)ptr + 16 * v212);
  if ( v39 )
  {
    v43 = v39 - 1;
    v44 = *(_QWORD *)(v206 + 8 * v43);
    v45 = *(_DWORD *)(v44 + 12);
    v207.m128i_i64[0] = v44;
    v46 = 16LL * (v40 & v45);
    v47 = (__m128i *)((char *)ptr + v46);
    if ( v46 != v41 )
    {
      for ( i = (char *)ptr + v46; i != (char *)v42; i += 16 )
      {
        v49 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v49 + 12) == v45 && v44 == v49 )
          {
LABEL_139:
            v57 = v206;
            *(_DWORD *)(v206 - 4) = v43;
            goto LABEL_140;
          }
        }
        else if ( !v49 )
        {
          goto LABEL_38;
        }
      }
    }
    v88 = (char *)ptr;
    if ( ptr != v47 )
    {
      LODWORD(v44) = v207.m128i_i32[0];
      do
      {
        v89 = *(_QWORD *)v88;
        if ( *(_QWORD *)v88 > 1u )
        {
          if ( *(_DWORD *)(v89 + 12) == v45 && v207.m128i_i64[0] == v89 )
            goto LABEL_139;
        }
        else if ( !v89 )
        {
          break;
        }
        v88 += 16;
      }
      while ( v47 != (__m128i *)v88 );
    }
LABEL_38:
    v50 = *(_WORD *)(v207.m128i_i64[0] + 4);
    if ( v50 )
    {
      if ( v50 == 1 )
      {
        v108 = 2 * (_DWORD)v208;
        if ( 3 * (int)v208 < (unsigned int)(4 * (v210 + v207.m128i_i32[2])) )
        {
          v211.m128i_i32[0] = 2 * (_DWORD)v208;
          LODWORD(v208) = 2 * (_DWORD)v208;
          v41 = 16LL * v108;
          v162 = (__m128i *)sub_186B270(v41);
          v163 = v211.m128i_i32[0];
          v164 = v162;
          v207.m128i_i64[1] = (__int64)v162[v41 / 0x10].m128i_i64;
          if ( v211.m128i_i32[0] )
          {
            if ( (v41 & 0x10) == 0
              || (v165 = v207.m128i_i64[1], v164 = v162 + 1, *v162 = 0, &v162[1] != (__m128i *)v165) )
            {
              do
              {
                v166 = v207.m128i_i64[1];
                *v164 = 0;
                v164 += 2;
                v164[-1] = 0;
              }
              while ( v164 != (__m128i *)v166 );
            }
          }
          v211.m128i_i32[0] = v163 - 1;
          v167 = (const __m128i *)ptr;
          if ( ptr != v42 )
          {
            do
            {
              if ( v167->m128i_i64[0] > 1uLL )
              {
                v168 = 16LL * (unsigned int)(*(_DWORD *)(v167->m128i_i64[0] + 12) & v211.m128i_i32[0]);
                v169 = &v162[(unsigned __int64)v168 / 0x10];
                if ( v41 == v168 )
                {
LABEL_305:
                  if ( v162 == v169 )
                  {
LABEL_390:
                    v217 = (__int64)v167;
                    v212 = (unsigned __int64)v162;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v170 = v162;
                  while ( v170->m128i_i64[0] )
                  {
                    if ( v169 == ++v170 )
                      goto LABEL_390;
                  }
                }
                else
                {
                  v170 = &v162[(unsigned __int64)v168 / 0x10];
                  while ( v170->m128i_i64[0] )
                  {
                    if ( (__m128i *)v207.m128i_i64[1] == ++v170 )
                      goto LABEL_305;
                  }
                }
                *v170 = _mm_loadu_si128(v167);
              }
              ++v167;
            }
            while ( v167 != v42 );
          }
          if ( ptr )
          {
            v212 = (unsigned __int64)v162;
            sub_186B220(ptr);
            v162 = (__m128i *)v212;
          }
          ptr = v162;
          v42 = (__m128i *)v207.m128i_i64[1];
          v207.m128i_i32[2] = 0;
          v45 = *(_DWORD *)(v207.m128i_i64[0] + 12);
          v46 = 16LL * (v45 & v211.m128i_i32[0]);
          v47 = &v162[(unsigned __int64)v46 / 0x10];
        }
        v109 = _mm_loadl_epi64(&v207);
        v98 = _mm_unpacklo_epi64(v109, v109);
        if ( v46 == v41 )
        {
          v102 = nullptr;
LABEL_195:
          v101 = (__m128i *)ptr;
          if ( ptr == v47 )
            goto LABEL_177;
          while ( 1 )
          {
            v111 = v101->m128i_i64[0];
            if ( v101->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v111 + 12) == v45 && v207.m128i_i64[0] == v111 )
                goto LABEL_291;
            }
            else
            {
              if ( !v111 )
                goto LABEL_179;
              v102 = v101;
            }
            if ( ++v101 == v47 )
              goto LABEL_177;
          }
        }
        v101 = v47;
        v102 = nullptr;
        while ( 1 )
        {
          v110 = v101->m128i_i64[0];
          if ( v101->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v110 + 12) == v45 && v207.m128i_i64[0] == v110 )
              goto LABEL_291;
          }
          else
          {
            if ( !v110 )
              goto LABEL_179;
            v102 = v101;
          }
          if ( ++v101 == v42 )
            goto LABEL_195;
        }
      }
      if ( v50 != 2 )
      {
        v207.m128i_i32[0] = v40;
        sub_1872CE0("");
        sub_1873130(114, 1001);
      }
      v51 = *(_QWORD *)(v207.m128i_i64[0] + 24);
      v52 = *(_DWORD *)(v51 + 12);
      v53 = 16LL * (v40 & v52);
      v54 = (char *)ptr + v53;
      if ( v53 != v41 )
      {
        for ( j = (char *)ptr + v53; j != (char *)v42; j += 16 )
        {
          v56 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v56 + 12) == v52 && v51 == v56 )
            {
LABEL_154:
              v90 = (_DWORD *)sub_15DBB60(v211.m128i_i64[1], v207.m128i_i64[0], *((_QWORD *)j + 1));
              v212 = (unsigned __int64)v90;
              if ( v90 )
                ++v90[2];
              if ( v37 )
              {
                v91 = *((_DWORD *)v37 - 1);
                if ( v91 == *((_DWORD *)v37 - 2) )
                {
                  v105 = (3 * v91 + 1) >> 1;
                  v106 = 8 * v105 + 8;
                  if ( 8 * v91 + 8 >= v106 || v91 >= v105 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v229, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v229);
                    sub_233E40((__int64)v229);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v217) = (3 * v91 + 1) >> 1;
                  v107 = sub_186B300(v37 - 1, v106);
                  v37 = (_QWORD *)(v107 + 8);
                  *(_DWORD *)v107 = v217;
                  LODWORD(v107) = *(_DWORD *)(v107 + 4);
                  v94 = &v37[(unsigned int)v107];
                  v93 = v107 + 1;
                }
                else
                {
                  v92 = v91;
                  v93 = v91 + 1;
                  v94 = &v37[v92];
                }
              }
              else
              {
                v194 = (_QWORD *)sub_186B270(0x18u);
                *v194 = 2;
                v93 = 1;
                v37 = v194 + 1;
                v94 = v37;
              }
              v95 = v210;
              *v94 = v212;
              v96 = (int)v208;
              *((_DWORD *)v37 - 1) = v93;
              if ( 3 * v96 < (unsigned int)(4 * (v95 + v207.m128i_i32[2])) )
              {
                v211.m128i_i32[0] = 2 * v96;
                LODWORD(v208) = 2 * v96;
                v41 = 16LL * (unsigned int)(2 * v96);
                v195 = (__m128i *)sub_186B270(v41);
                v196 = v211.m128i_i32[0];
                v197 = v195;
                v207.m128i_i64[1] = (__int64)v195[v41 / 0x10].m128i_i64;
                if ( v211.m128i_i32[0] )
                {
                  if ( (v41 & 0x10) == 0
                    || (v198 = v207.m128i_i64[1], v197 = v195 + 1, *v195 = 0, &v195[1] != (__m128i *)v198) )
                  {
                    do
                    {
                      v199 = v207.m128i_i64[1];
                      *v197 = 0;
                      v197 += 2;
                      v197[-1] = 0;
                    }
                    while ( v197 != (__m128i *)v199 );
                  }
                }
                v211.m128i_i32[0] = v196 - 1;
                v200 = (const __m128i *)ptr;
                if ( ptr != v42 )
                {
                  do
                  {
                    if ( v200->m128i_i64[0] > 1uLL )
                    {
                      v201 = 16LL * (unsigned int)(*(_DWORD *)(v200->m128i_i64[0] + 12) & v211.m128i_i32[0]);
                      v202 = &v195[(unsigned __int64)v201 / 0x10];
                      if ( v41 == v201 )
                      {
LABEL_381:
                        if ( v195 == v202 )
                        {
LABEL_389:
                          v218 = v195;
                          v217 = (__int64)v200;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v203 = v195;
                        while ( v203->m128i_i64[0] )
                        {
                          if ( v202 == ++v203 )
                            goto LABEL_389;
                        }
                      }
                      else
                      {
                        v203 = &v195[(unsigned __int64)v201 / 0x10];
                        while ( v203->m128i_i64[0] )
                        {
                          if ( (__m128i *)v207.m128i_i64[1] == ++v203 )
                            goto LABEL_381;
                        }
                      }
                      *v203 = _mm_loadu_si128(v200);
                    }
                    ++v200;
                  }
                  while ( v200 != v42 );
                }
                if ( ptr )
                {
                  v217 = (__int64)v195;
                  sub_186B220(ptr);
                  v195 = (__m128i *)v217;
                }
                v42 = (__m128i *)v207.m128i_i64[1];
                ptr = v195;
                v207.m128i_i32[2] = 0;
              }
              v97 = *(_DWORD *)(v207.m128i_i64[0] + 12);
              v98 = (__m128i)_mm_loadh_ps((const double *)&v212);
              v99 = 16LL * (v97 & v211.m128i_i32[0]);
              v100 = (__m128i *)((char *)ptr + v99);
              if ( v99 != v41 )
              {
                v101 = (__m128i *)((char *)ptr + v99);
                v102 = nullptr;
                while ( 1 )
                {
                  v103 = v101->m128i_i64[0];
                  if ( v101->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v103 + 12) == v97 && v207.m128i_i64[0] == v103 )
                      goto LABEL_291;
                  }
                  else
                  {
                    if ( !v103 )
                      goto LABEL_179;
                    v102 = v101;
                  }
                  if ( ++v101 == v42 )
                    goto LABEL_169;
                }
              }
              v102 = nullptr;
LABEL_169:
              v101 = (__m128i *)ptr;
              if ( v100 != ptr )
              {
                do
                {
                  v104 = v101->m128i_i64[0];
                  if ( v101->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v104 + 12) == v97 && v207.m128i_i64[0] == v104 )
                      goto LABEL_291;
                  }
                  else
                  {
                    if ( !v104 )
                      goto LABEL_179;
                    v102 = v101;
                  }
                  ++v101;
                }
                while ( v100 != v101 );
              }
LABEL_177:
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
          }
          else if ( !v56 )
          {
            goto LABEL_48;
          }
        }
      }
      j = (char *)ptr;
      if ( ptr != v54 )
      {
        do
        {
          v112 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v112 + 12) == v52 && v51 == v112 )
              goto LABEL_154;
          }
          else if ( !v112 )
          {
            break;
          }
          j += 16;
        }
        while ( v54 != j );
      }
LABEL_48:
      if ( *(_DWORD *)(v206 - 8) == v39 )
      {
        v188 = (3 * v39 + 1) >> 1;
        v189 = 8 * v188 + 8;
        if ( 8 * v39 + 8 >= v189 || v39 >= v188 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v229, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v229);
          sub_233E40((__int64)v229);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v211.m128i_i32[0] = v40;
        v207.m128i_i64[0] = v51;
        v190 = (unsigned int *)sub_186B300((void *)(v206 - 8), v189);
        v39 = v190[1];
        v51 = v207.m128i_i64[0];
        *v190 = v188;
        v206 = (__int64)(v190 + 2);
        v40 = v211.m128i_i32[0];
      }
      *(_QWORD *)(v206 + 8LL * v39) = v51;
      v57 = v206;
      *(_DWORD *)(v206 - 4) = v39 + 1;
      goto LABEL_140;
    }
    if ( v36 )
    {
      v113 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
      if ( (unsigned __int64)v36 < v113 )
      {
        v114 = v36;
        do
        {
          v115 = *v114;
          if ( *v114 )
          {
            v66 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v66 )
            {
              v221 = v40;
              v218 = (_OWORD *)v113;
              v217 = (__int64)v114;
              sub_15D7BC0(v211.m128i_i64[1], v115);
              v40 = v221;
              v113 = (unsigned __int64)v218;
              v114 = (__int64 *)v217;
            }
          }
          ++v114;
        }
        while ( (unsigned __int64)v114 < v113 );
        v39 = *(_DWORD *)(v206 - 4);
      }
      *((_DWORD *)v36 - 1) = 0;
    }
    v116 = 8LL * *(unsigned int *)(v207.m128i_i64[0] + 24);
    v219 = v207.m128i_i64[0] + 32 + v116;
    if ( v116 )
    {
      v217 = v207.m128i_i64[0] + 32;
      LOBYTE(v221) = 0;
      do
      {
        v44 = *(_QWORD *)v217;
        v117 = *(_DWORD *)(*(_QWORD *)v217 + 12LL);
        v218 = *(_OWORD **)v217;
        v118 = 16LL * (v40 & v117);
        v119 = (char *)ptr + v118;
        if ( v118 != v41 )
        {
          for ( k = (char *)ptr + v118; k != (char *)v42; k += 16 )
          {
            v121 = *(_QWORD *)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( *(_DWORD *)(v121 + 12) == v117 && v44 == v121 )
              {
LABEL_254:
                v139 = *((_QWORD *)k + 1);
                if ( v139 )
                  ++*(_DWORD *)(v139 + 8);
                if ( v36 )
                {
                  v140 = *((_DWORD *)v36 - 1);
                  if ( v140 == *((_DWORD *)v36 - 2) )
                  {
                    v145 = (3 * v140 + 1) >> 1;
                    v146 = 8 * v145 + 8;
                    if ( 8 * v140 + 8 >= (unsigned int)v146 || v140 >= v145 )
                    {
                      v5 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v229, "Overflow encountered when expanding vector");
                      *v5 = (char *)off_1C63128;
                      sub_2333C0(v5 + 1, v229);
                      sub_233E40((__int64)v229);
                      __cxa_throw(
                        v5,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v224 = v40;
                    v223 = v39;
                    v222 = (3 * v140 + 1) >> 1;
                    v220 = v139;
                    v147 = (unsigned int *)sub_186B300(v36 - 1, v146);
                    v148 = v147[1];
                    v36 = (__int64 *)(v147 + 2);
                    v139 = v220;
                    v39 = v223;
                    *v147 = v222;
                    LODWORD(v147) = v148;
                    v40 = v224;
                    v143 = &v36[v148];
                    v142 = (_DWORD)v147 + 1;
                  }
                  else
                  {
                    v141 = v140;
                    v142 = v140 + 1;
                    v143 = &v36[v141];
                  }
                }
                else
                {
                  v223 = v40;
                  v222 = v39;
                  v220 = v139;
                  v153 = (_QWORD *)sub_186B270(0x18u);
                  v36 = v153 + 1;
                  *v153 = 2;
                  v139 = v220;
                  v142 = 1;
                  v39 = v222;
                  v40 = v223;
                  v143 = v36;
                }
                v66 = v218 == (_OWORD *)v139;
                *v143 = v139;
                *((_DWORD *)v36 - 1) = v142;
                LOBYTE(v221) = !v66 | v221;
                goto LABEL_233;
              }
            }
            else if ( !v121 )
            {
              goto LABEL_229;
            }
          }
        }
        k = (char *)ptr;
        if ( ptr != v119 )
        {
          do
          {
            v144 = *(_QWORD *)k;
            if ( *(_QWORD *)k > 1u )
            {
              if ( *(_DWORD *)(v144 + 12) == v117 && v218 == (_OWORD *)v144 )
                goto LABEL_254;
            }
            else if ( !v144 )
            {
              break;
            }
            k += 16;
          }
          while ( v119 != k );
        }
LABEL_229:
        if ( v206 )
        {
          v122 = *(_DWORD *)(v206 - 4);
          if ( v122 == *(_DWORD *)(v206 - 8) )
          {
            v149 = (3 * v122 + 1) >> 1;
            v150 = 8 * v149 + 8;
            if ( 8 * v122 + 8 >= (unsigned int)v150 || v122 >= v149 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v229, "Overflow encountered when expanding vector");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v229);
              sub_233E40((__int64)v229);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v223 = v40;
            v222 = v39;
            LODWORD(v220) = (3 * v122 + 1) >> 1;
            v151 = sub_186B300((void *)(v206 - 8), v150);
            v152 = (_DWORD *)(v151 + 8);
            v39 = v222;
            v206 = v151 + 8;
            v40 = v223;
            *(_DWORD *)v151 = v220;
            LODWORD(v151) = *(_DWORD *)(v151 + 4);
            v125 = &v152[2 * (unsigned int)v151];
            v124 = v151 + 1;
          }
          else
          {
            v123 = v122;
            v124 = v122 + 1;
            v125 = (_QWORD *)(v206 + 8 * v123);
          }
        }
        else
        {
          v222 = v40;
          LODWORD(v220) = v39;
          v192 = (_QWORD *)sub_186B270(0x18u);
          *v192 = 2;
          v39 = v220;
          v206 = (__int64)(v192 + 1);
          v125 = v192 + 1;
          v40 = v222;
          v124 = 1;
        }
        *v125 = v218;
        *(_DWORD *)(v206 - 4) = v124;
LABEL_233:
        v217 += 8;
      }
      while ( v219 != v217 );
      v57 = v206;
      if ( v206 )
      {
        if ( v39 != *(_DWORD *)(v206 - 4) )
          goto LABEL_140;
      }
      else if ( v39 )
      {
        goto LABEL_51;
      }
    }
    else
    {
      LOBYTE(v221) = 0;
    }
    v126 = 16LL * v20;
    v127 = *(_QWORD *)(v207.m128i_i64[0] + 16);
    v128 = &v16[(unsigned __int64)v126 / 0x10];
    v129 = *(_DWORD *)(v127 + 12);
    v130 = 16LL * (v129 & (v20 - 1));
    v131 = &v16[(unsigned __int64)v130 / 0x10];
    if ( v130 != v126 )
    {
      for ( m = &v16[(unsigned __int64)v130 / 0x10]; v128 != m; ++m )
      {
        v133 = m->m128i_i64[0];
        if ( m->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v133 + 12) == v129 && v127 == v133 )
          {
LABEL_276:
            if ( v36 )
              v154 = *((_DWORD *)v36 - 1);
            else
              v154 = 0;
            sub_157BE40(
              (int)v227,
              v214[0],
              m->m128i_i64[1],
              v154,
              (int)v36,
              v44,
              v204,
              v206,
              v207.m128i_i32[0],
              v207.m128i_i32[2],
              (int)v208,
              (int)ptr,
              v210,
              (void *)v211.m128i_i64[0]);
            v212 = *(_QWORD *)v227;
            if ( *(_QWORD *)v227 )
              ++*(_DWORD *)(*(_QWORD *)v227 + 8LL);
            if ( v37 )
            {
              v155 = *((_DWORD *)v37 - 1);
              if ( v155 == *((_DWORD *)v37 - 2) )
              {
                v158 = (3 * v155 + 1) >> 1;
                v159 = 8 * v158 + 8;
                if ( 8 * v155 + 8 >= v159 || v155 >= v158 )
                {
                  v7 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v229, "Overflow encountered when expanding vector");
                  *v7 = (char *)off_1C63128;
                  sub_2333C0(v7 + 1, v229);
                  sub_233E40((__int64)v229);
                  __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v217) = (3 * v155 + 1) >> 1;
                v160 = (_DWORD *)sub_186B300(v37 - 1, v159);
                v37 = v160 + 2;
                v156 = *(_QWORD *)v227;
                *v160 = v217;
                v155 = v160[1];
              }
              else
              {
                v156 = v212;
              }
            }
            else
            {
              v161 = (_QWORD *)sub_186B270(0x18u);
              *v161 = 2;
              v156 = *(_QWORD *)v227;
              v155 = 0;
              v37 = v161 + 1;
            }
            v37[v155] = v212;
            *((_DWORD *)v37 - 1) = v155 + 1;
            if ( v156 )
            {
              v157 = v228;
              v66 = (*(_DWORD *)(v156 + 8))-- == 1;
              if ( v66 )
                sub_15D7BC0(v157, v156);
            }
            goto LABEL_245;
          }
        }
        else if ( !v133 )
        {
          goto LABEL_243;
        }
      }
    }
    if ( v131 != v16 )
    {
      for ( m = v16; v131 != m; ++m )
      {
        v191 = m->m128i_i64[0];
        if ( m->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v191 + 12) == v129 && v127 == v191 )
            goto LABEL_276;
        }
        else if ( !v191 )
        {
          break;
        }
      }
    }
LABEL_243:
    if ( (_BYTE)v221 )
    {
      if ( v36 )
        v180 = *((_DWORD *)v36 - 1);
      else
        v180 = 0;
      v181 = (_DWORD *)sub_15DC610(
                         v211.m128i_i32[2],
                         v127,
                         v180,
                         (int)v36,
                         (int)v128,
                         v44,
                         v204,
                         v206,
                         v207.m128i_i32[0],
                         v207.m128i_i32[2],
                         (int)v208,
                         (char)ptr,
                         v210,
                         v211.m128i_i32[0],
                         v211.m128i_i32[2],
                         (void *)v212);
      v212 = (unsigned __int64)v181;
      if ( v181 )
        ++v181[2];
      if ( v37 )
      {
        v182 = *((_DWORD *)v37 - 2);
        if ( *((_DWORD *)v37 - 1) == v182 )
        {
          v184 = (3 * v182 + 1) >> 1;
          v185 = 8 * v184 + 8;
          if ( 8 * v182 + 8 >= v185 || v182 >= v184 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v229, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v229);
            sub_233E40((__int64)v229);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v217) = (3 * v182 + 1) >> 1;
          v186 = (_DWORD *)sub_186B300(v37 - 1, v185);
          v37 = v186 + 2;
          *v186 = v217;
        }
      }
      else
      {
        v187 = (_QWORD *)sub_186B270(0x18u);
        *v187 = 2;
        v37 = v187 + 1;
      }
      v183 = *((_DWORD *)v37 - 1);
      v37[v183] = v212;
      *((_DWORD *)v37 - 1) = v183 + 1;
    }
    else
    {
      v212 = v207.m128i_i64[0];
    }
LABEL_245:
    v134 = 2 * (_DWORD)v208;
    if ( 3 * (int)v208 < (unsigned int)(4 * (v210 + v207.m128i_i32[2])) )
    {
      v211.m128i_i32[0] = 2 * (_DWORD)v208;
      LODWORD(v208) = 2 * (_DWORD)v208;
      v41 = 16LL * v134;
      v171 = (__m128i *)sub_186B270(v41);
      v172 = v211.m128i_i32[0];
      v173 = v171;
      v207.m128i_i64[1] = (__int64)v171[v41 / 0x10].m128i_i64;
      if ( v211.m128i_i32[0] )
      {
        if ( (v41 & 0x10) == 0 || (v174 = v207.m128i_i64[1], v173 = v171 + 1, *v171 = 0, &v171[1] != (__m128i *)v174) )
        {
          do
          {
            v175 = v207.m128i_i64[1];
            *v173 = 0;
            v173 += 2;
            v173[-1] = 0;
          }
          while ( v173 != (__m128i *)v175 );
        }
      }
      v211.m128i_i32[0] = v172 - 1;
      v176 = (const __m128i *)ptr;
      if ( ptr != v42 )
      {
        do
        {
          if ( v176->m128i_i64[0] > 1uLL )
          {
            v177 = 16LL * (unsigned int)(*(_DWORD *)(v176->m128i_i64[0] + 12) & v211.m128i_i32[0]);
            v178 = &v171[(unsigned __int64)v177 / 0x10];
            if ( v41 == v177 )
            {
LABEL_362:
              if ( v171 == v178 )
              {
LABEL_391:
                v218 = v176;
                v217 = (__int64)v171;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v179 = v171;
              while ( v179->m128i_i64[0] )
              {
                if ( v178 == ++v179 )
                  goto LABEL_391;
              }
            }
            else
            {
              v179 = &v171[(unsigned __int64)v177 / 0x10];
              while ( v179->m128i_i64[0] )
              {
                if ( (__m128i *)v207.m128i_i64[1] == ++v179 )
                  goto LABEL_362;
              }
            }
            *v179 = _mm_loadu_si128(v176);
          }
          ++v176;
        }
        while ( v176 != v42 );
      }
      if ( ptr )
      {
        v217 = (__int64)v171;
        sub_186B220(ptr);
        v171 = (__m128i *)v217;
      }
      v42 = (__m128i *)v207.m128i_i64[1];
      ptr = v171;
      v207.m128i_i32[2] = 0;
    }
    v135 = *(_DWORD *)(v207.m128i_i64[0] + 12);
    v98 = (__m128i)_mm_loadh_ps((const double *)&v212);
    v136 = 16LL * (v135 & v211.m128i_i32[0]);
    v137 = (__m128i *)((char *)ptr + v136);
    if ( v136 == v41 )
    {
      v102 = nullptr;
LABEL_354:
      v101 = (__m128i *)ptr;
      if ( ptr == v137 )
        goto LABEL_177;
      while ( 1 )
      {
        v193 = v101->m128i_i64[0];
        if ( v101->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v193 + 12) == v135 && v207.m128i_i64[0] == v193 )
            goto LABEL_291;
        }
        else
        {
          if ( !v193 )
            goto LABEL_179;
          v102 = v101;
        }
        if ( v137 == ++v101 )
          goto LABEL_177;
      }
    }
    v101 = (__m128i *)((char *)ptr + v136);
    v102 = nullptr;
    while ( 1 )
    {
      v138 = v101->m128i_i64[0];
      if ( v101->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v138 + 12) == v135 && v207.m128i_i64[0] == v138 )
        {
LABEL_291:
          *v101 = v98;
          goto LABEL_178;
        }
      }
      else
      {
        if ( !v138 )
        {
LABEL_179:
          if ( v102 )
          {
            --v207.m128i_i32[2];
            v101 = v102;
          }
          *v101 = v98;
          LODWORD(v210) = v210 + 1;
LABEL_178:
          --*(_DWORD *)(v206 - 4);
          v212 = (unsigned int)v208;
          v40 = (_DWORD)v208 - 1;
          v57 = v206;
LABEL_140:
          v39 = *(_DWORD *)(v57 - 4);
          goto LABEL_30;
        }
        v102 = v101;
      }
      if ( ++v101 == v42 )
        goto LABEL_354;
    }
  }
LABEL_51:
  v58 = *(_DWORD *)(v216 + 12);
  v59 = 16LL * (v58 & (unsigned int)v40);
  v60 = (char *)ptr + v59;
  if ( v59 != v41 )
  {
    for ( n = (char *)ptr + v59; n != (char *)v42; n += 16 )
    {
      v62 = *(char **)n;
      if ( *(_QWORD *)n > 1u )
      {
        if ( *((_DWORD *)v62 + 3) == v58 && (char *)v216 == v62 )
        {
LABEL_149:
          v62 = n;
          goto LABEL_58;
        }
      }
      else if ( !v62 )
      {
        goto LABEL_58;
      }
    }
  }
  if ( ptr != v60 )
  {
    n = (char *)ptr;
    do
    {
      while ( 1 )
      {
        v62 = *(char **)n;
        if ( *(_QWORD *)n <= 1u )
          break;
        if ( *((_DWORD *)v62 + 3) == v58 && (char *)v216 == v62 )
          goto LABEL_149;
        n += 16;
        if ( v60 == n )
          goto LABEL_130;
      }
      if ( !v62 )
        goto LABEL_58;
      n += 16;
    }
    while ( v60 != n );
  }
LABEL_130:
  v62 = nullptr;
LABEL_58:
  v63 = *((_QWORD *)v62 + 1);
  sub_251FD0(v213, v63);
  if ( v215 )
    sub_2BB620(v63);
  v230[0] = &off_1C4CA60;
  if ( v240 )
    sub_186B220((void *)(v240 - 8));
  v64 = v238;
  if ( v238 )
  {
    v65 = v239;
    v66 = (*(_DWORD *)(v238 + 8))-- == 1;
    if ( v66 )
      sub_15D7BC0(v65, v64);
  }
  v67 = v236;
  if ( v236 )
  {
    v68 = v237;
    v66 = (*(_DWORD *)(v236 + 8))-- == 1;
    if ( v66 )
      sub_15D7BC0(v68, v67);
  }
  v69 = v234;
  if ( v234 )
  {
    v70 = v235;
    v66 = (*(_DWORD *)(v234 + 8))-- == 1;
    if ( v66 )
      sub_15D7BC0(v70, v69);
  }
  v233 = &qword_1C637E8;
  sub_15841B0(&v233);
  v232 = &qword_1C637E8;
  sub_15841B0(&v232);
  if ( v231 )
    sub_186B220((void *)(v231 - 8));
  sub_15841B0(*(_QWORD *)v214);
  if ( ptr )
    sub_186B220(ptr);
  if ( v16 )
    sub_186B220(v16);
  if ( v206 )
    sub_186B220((void *)(v206 - 8));
  if ( v36 )
  {
    v71 = v36;
    v72 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
    if ( (unsigned __int64)v36 < v72 )
    {
      do
      {
        while ( 1 )
        {
          v73 = *v71;
          if ( *v71 )
          {
            v66 = (*(_DWORD *)(v73 + 8))-- == 1;
            if ( v66 )
              break;
          }
          if ( (unsigned __int64)++v71 >= v72 )
            goto LABEL_86;
        }
        ++v71;
        sub_15D7BC0(v211.m128i_i64[1], v73);
      }
      while ( (unsigned __int64)v71 < v72 );
    }
LABEL_86:
    sub_186B220(v36 - 1);
  }
  if ( v37 )
  {
    v74 = v211.m128i_i64[1];
    v75 = v37;
    v76 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
    if ( (unsigned __int64)v37 < v76 )
    {
      do
      {
        while ( 1 )
        {
          v77 = *v75;
          if ( *v75 )
          {
            v66 = (*(_DWORD *)(v77 + 8))-- == 1;
            if ( v66 )
              break;
          }
          if ( (unsigned __int64)++v75 >= v76 )
            goto LABEL_94;
        }
        ++v75;
        sub_15D7BC0(v74, v77);
      }
      while ( (unsigned __int64)v75 < v76 );
    }
LABEL_94:
    sub_186B220(v37 - 1);
  }
LABEL_95:
  if ( v215 )
    goto LABEL_135;
  return (__m128i *)v63;
}

