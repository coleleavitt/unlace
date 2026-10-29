// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_88B9C0(__int64 *a1, __int64 a2, __m128i **a3, unsigned __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // edx
  __int64 v11; // r12
  const __m128i *v12; // roff
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i si128; // xmm1
  __int64 v17; // r13
  __m128i *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __m128i v21; // rax
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // r13d
  int i; // ebx
  char *v26; // r12
  __int64 *v27; // rdi
  __int64 v28; // rdx
  char v29; // al
  unsigned int v30; // r13d
  __m128i *v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  __m128i v36; // rax
  __int64 v37; // rax
  __int64 j; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // rsi
  int v44; // ebx
  __m128i *v45; // r13
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // rax
  unsigned int v49; // r15d
  int k; // ebx
  _QWORD *v51; // r14
  char v52; // al
  unsigned int v53; // r15d
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rdx
  char v57; // al
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // rax
  const __m128i *v60; // rbp
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int16 v63; // dx
  __int64 v64; // rbp
  __int64 v65; // rdi
  __int64 v66; // r13
  __m128i *v67; // r13
  unsigned __int8 v68; // al
  __int64 v69; // rbp
  __int64 v70; // rdx
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // r15
  unsigned __int64 v74; // rax
  const __m128i *v75; // rbp
  __int8 *v76; // rdi
  __m128i *v77; // rbx
  __m128i v78; // rax
  __m128i v79; // xmm1
  __m128i v80; // rax
  __int64 v81; // rax
  __int64 m; // rdx
  __m128i *v83; // rsi
  int v84; // eax
  __m128i v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rax
  _QWORD *v88; // rsi
  _QWORD *v89; // rdx
  __int64 v90; // rax
  char v91; // cl
  char v92; // dl
  _BYTE *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdi
  unsigned int v96; // ebp
  bool v97; // al
  __int64 v98; // rax
  unsigned __int64 v99; // r13
  __m128i *v100; // rbp
  __int64 v101; // r12
  unsigned __int8 v102; // al
  __int64 v103; // r14
  __m128i v104; // xmm0
  unsigned int v105; // r15d
  __int64 v106; // rdi
  __int16 v107; // dx
  __int64 v108; // rsi
  __int64 v109; // r15
  __int64 v110; // r14
  unsigned __int64 v111; // rax
  int v112; // ecx
  unsigned __int64 v113; // rdx
  int v114; // ebp
  int v115; // esi
  __int64 v116; // rdi
  __int64 v117; // rdi
  __int64 v118; // rbp
  __int64 v119; // rdi
  __int64 v120; // r13
  unsigned __int64 v121; // rbp
  const __m128i *v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rdx
  __int32 v125; // edi
  __int16 v126; // ax
  __int64 v127; // rdi
  __int64 v128; // rax
  _BYTE *v129; // rdx
  char v130; // al
  __int64 v131; // rdx
  _QWORD *v132; // rax
  _QWORD *v133; // rsi
  _QWORD *v134; // rdx
  _BYTE *v135; // rdi
  size_t v136; // rdx
  __int64 v137; // rdx
  __int64 *v138; // rax
  _QWORD *v139; // rdx
  _QWORD *v140; // rax
  _QWORD *v141; // rcx
  _QWORD *v142; // rdx
  char *v143; // r8
  __m128i *v144; // rbp
  unsigned __int64 v145; // rax
  __int64 v146; // rdi
  __m128i v147; // rax
  __int64 v148; // rax
  __int64 n; // rdx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 *v154; // rsi
  int v155; // ebx
  __m128i *v156; // r13
  __int64 v157; // rax
  __int64 v158; // rdx
  __m128i v159; // rax
  unsigned int v160; // r15d
  int ii; // ebx
  _QWORD *v162; // r14
  char v163; // al
  unsigned int v164; // r15d
  __int64 v165; // rdx
  _QWORD *v166; // rax
  _QWORD *v167; // rsi
  _QWORD *v168; // rdx
  __int64 v169; // rdx
  __int64 *v170; // rax
  _QWORD *v171; // rdx
  __int64 v172; // rdx
  _QWORD *v173; // rax
  _QWORD *v174; // rcx
  _QWORD *v175; // rdx
  __m128i v176; // rax
  __int64 v177; // rax
  __int64 jj; // rdx
  __int64 v179; // rdx
  _QWORD *v180; // rax
  _QWORD *v181; // rcx
  _QWORD *v182; // rdx
  __int64 v183; // rdx
  _QWORD *v184; // rax
  _QWORD *v185; // rcx
  _QWORD *v186; // rdx
  __int64 v187; // rdx
  _QWORD *v188; // rax
  _QWORD *v189; // rcx
  _QWORD *v190; // rdx
  __m128i *v191; // [rsp+8h] [rbp-270h]
  char *dest; // [rsp+18h] [rbp-260h]
  __int64 *desta; // [rsp+18h] [rbp-260h]
  void *destb; // [rsp+18h] [rbp-260h]
  __int64 *v196; // [rsp+20h] [rbp-258h]
  unsigned int v197; // [rsp+20h] [rbp-258h]
  __int64 v199; // [rsp+30h] [rbp-248h]
  int v201; // [rsp+40h] [rbp-238h]
  __int64 v202; // [rsp+40h] [rbp-238h]
  __int64 v203; // [rsp+40h] [rbp-238h]
  __int64 v204; // [rsp+40h] [rbp-238h]
  __int64 v205; // [rsp+40h] [rbp-238h]
  __m128i *v206; // [rsp+40h] [rbp-238h]
  __int64 v207; // [rsp+48h] [rbp-230h]
  unsigned __int8 v208; // [rsp+48h] [rbp-230h]
  int v209; // [rsp+48h] [rbp-230h]
  __int64 v210; // [rsp+48h] [rbp-230h]
  const __m128i *v211; // [rsp+50h] [rbp-228h]
  int v212; // [rsp+50h] [rbp-228h]
  __int64 v213; // [rsp+60h] [rbp-218h]
  __int64 v214; // [rsp+68h] [rbp-210h]
  __int64 v215; // [rsp+70h] [rbp-208h]
  __int64 *v216; // [rsp+78h] [rbp-200h]
  __int64 v217; // [rsp+78h] [rbp-200h]
  __m128i *v218; // [rsp+98h] [rbp-1E0h] BYREF
  __m128i v219; // [rsp+A0h] [rbp-1D8h]
  __m128i v220[3]; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v221; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v222; // [rsp+E8h] [rbp-190h]
  _QWORD *v223; // [rsp+F0h] [rbp-188h]
  __int64 v224; // [rsp+F8h] [rbp-180h]
  __int64 v225; // [rsp+100h] [rbp-178h] BYREF
  __int64 v226; // [rsp+108h] [rbp-170h]
  _QWORD *v227; // [rsp+110h] [rbp-168h]
  __int64 v228; // [rsp+118h] [rbp-160h]
  __int64 v229; // [rsp+120h] [rbp-158h] BYREF
  __int64 v230; // [rsp+128h] [rbp-150h]
  _QWORD *v231; // [rsp+130h] [rbp-148h]
  __int64 v232; // [rsp+138h] [rbp-140h]
  const __m128i *v233; // [rsp+140h] [rbp-138h]
  _OWORD v234[2]; // [rsp+148h] [rbp-130h] BYREF
  char v235; // [rsp+168h] [rbp-110h]
  __m128i v236; // [rsp+170h] [rbp-108h] BYREF
  __m128i v237; // [rsp+180h] [rbp-F8h] BYREF
  __m128i v238; // [rsp+1B0h] [rbp-C8h] BYREF
  __m128i v239; // [rsp+1C0h] [rbp-B8h] BYREF
  __int64 v240; // [rsp+1D0h] [rbp-A8h]
  __int64 v241; // [rsp+1D8h] [rbp-A0h]
  void *ptr; // [rsp+1E0h] [rbp-98h] BYREF
  __int64 v243; // [rsp+1E8h] [rbp-90h]
  _BYTE v244[64]; // [rsp+1F0h] [rbp-88h] BYREF
  __int16 v245; // [rsp+230h] [rbp-48h]

  v4 = a1;
  v5 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL));
  if ( *(char *)(v5 + 28) < 0 )
    return 0;
  v6 = v5;
  v7 = *(_QWORD *)(*a1 + 16);
  v199 = sub_AB4240(v7, v5);
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 57 > 2 )
  {
    v10 = 2;
    v9 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 104);
    v9 = v6;
    v7 = v8 + 96;
    sub_8226C0((__int64 *)(v8 + 96), v8);
    v10 = (*(_DWORD *)(*(_QWORD *)(v6 + 128) + 16LL) == 0) + 1;
  }
  v11 = *v4;
  v12 = (const __m128i *)v4[1];
  v13 = _mm_loadu_si128(v12);
  v14 = v12[3].m128i_i64[0];
  v233 = (const __m128i *)v11;
  v15 = v12[3].m128i_u32[2];
  LODWORD(v240) = v10;
  v220[0].m128i_i64[0] = v14;
  v220[0].m128i_i64[1] = v15;
  si128 = _mm_load_si128(v220);
  v238 = v13;
  v239 = si128;
  v17 = *(unsigned int *)(v11 + 888);
  v219 = v13;
  v220[1] = v13;
  v220[2] = si128;
  v234[0] = v13;
  v234[1] = si128;
  if ( !(_DWORD)v17 )
  {
    v218 = nullptr;
    desta = (__int64 *)(v11 + 872);
    goto LABEL_17;
  }
  v18 = nullptr;
  dest = *(char **)(v11 + 872);
  v19 = sub_69F620(v7, v14);
  v231 = nullptr;
  v229 = v19;
  v230 = v20;
  v232 = 0;
  v21.m128i_i64[0] = sub_69F630(v7, v14);
  v237 = 0u;
  v236 = v21;
  v22 = sub_84A6B0(v238.m128i_i64, (__int64)&v239);
  v207 = v11;
  v23 = v17 - 1;
  v201 = 1;
  v196 = v4;
  v24 = (v17 - 1) & v22;
  for ( i = v23; ; v24 = i & v30 )
  {
    v26 = &dest[40 * v24];
    if ( (unsigned __int8)sub_69F550(&v238, v26) && v239.m128i_i64[1] == *((_QWORD *)v26 + 3) )
    {
      v54 = (_QWORD *)v239.m128i_i64[0];
      v55 = v239.m128i_i64[0] + 8 * v239.m128i_i64[1];
      if ( v239.m128i_i64[0] == v55 )
      {
LABEL_39:
        v4 = v196;
        v57 = 0;
        goto LABEL_40;
      }
      v56 = *((_QWORD **)v26 + 2);
      while ( *v54 == *v56 )
      {
        ++v54;
        ++v56;
        if ( (_QWORD *)v55 == v54 )
          goto LABEL_39;
      }
    }
    v27 = (__int64 *)&dest[40 * v24];
    if ( !(unsigned __int8)sub_69F550(v26, &v229) )
      goto LABEL_10;
    v28 = *((_QWORD *)v26 + 3);
    if ( v28 != v232 )
      goto LABEL_10;
    v140 = *((_QWORD **)v26 + 2);
    v141 = &v140[v28];
    if ( v140 == v141 )
      break;
    v142 = v231;
    while ( *v140 == *v142 )
    {
      ++v140;
      ++v142;
      if ( v141 == v140 )
        goto LABEL_189;
    }
LABEL_10:
    v29 = sub_81F860(v26, &v236);
    if ( !v18 )
    {
      if ( v29 )
        v18 = (__m128i *)&dest[40 * v24];
    }
    v30 = v201 + v24;
    ++v201;
  }
LABEL_189:
  v143 = &dest[40 * v24];
  v4 = v196;
  v11 = v207;
  v17 = *(unsigned int *)(v207 + 888);
  if ( !v18 )
    v18 = (__m128i *)v143;
  v218 = v18;
  desta = (__int64 *)(v207 + 872);
  v84 = *(_DWORD *)(v207 + 880) + 1;
  if ( 4 * v84 >= (unsigned int)(3 * v17) )
  {
LABEL_17:
    v32 = *(__m128i **)(v11 + 872);
    v33 = (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v17 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v17 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v17 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v17 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1);
    v34 = ((v33 >> 16) | v33) + 1;
    if ( (unsigned int)v34 < 0x40 )
      LODWORD(v34) = 64;
    *(_DWORD *)(v11 + 888) = v34;
    v35 = 40LL * (unsigned int)v34;
    *(_QWORD *)(v11 + 872) = sub_25CC9C0(v35, 8);
    if ( v32 )
    {
      *(_QWORD *)(v11 + 880) = 0;
      v191 = (__m128i *)((char *)v32 + 40 * v17);
      v36.m128i_i64[0] = sub_69F620(v35, 8);
      v237 = 0u;
      v236 = v36;
      v37 = *(_QWORD *)(v11 + 872);
      for ( j = v37 + 40LL * *(unsigned int *)(v11 + 888); j != v37; *(__m128i *)(v37 - 24) = _mm_load_si128(&v237) )
      {
        v37 += 40;
        *(__m128i *)(v37 - 40) = _mm_load_si128(&v236);
      }
      v39 = sub_69F620(v35, 8);
      v223 = nullptr;
      v221 = v39;
      v222 = v40;
      v224 = 0;
      v41 = sub_69F630(v35, 8);
      v227 = nullptr;
      v225 = v41;
      v226 = v42;
      v228 = 0;
      if ( v32 != v191 )
      {
        v213 = v9;
        v214 = v6;
        v216 = v4;
        while ( 1 )
        {
          if ( (unsigned __int8)sub_69F550(v32, &v221) )
          {
            v131 = v32[1].m128i_i64[1];
            if ( v131 == v224 )
            {
              v132 = (_QWORD *)v32[1].m128i_i64[0];
              v133 = &v132[v131];
              v134 = v223;
              if ( v132 == v133 )
                goto LABEL_169;
              while ( *v132 == *v134 )
              {
                ++v132;
                ++v134;
                if ( v133 == v132 )
                  goto LABEL_169;
              }
            }
          }
          v43 = &v225;
          if ( (unsigned __int8)sub_69F550(v32, &v225) )
          {
            v137 = v32[1].m128i_i64[1];
            if ( v137 == v228 )
            {
              v138 = (__int64 *)v32[1].m128i_i64[0];
              v43 = &v138[v137];
              if ( v138 == v43 )
                goto LABEL_169;
              v139 = v227;
              while ( *v138 == *v139 )
              {
                ++v138;
                ++v139;
                if ( v43 == v138 )
                  goto LABEL_169;
              }
            }
          }
          v44 = *(_DWORD *)(v11 + 888);
          if ( !v44 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v32);
            *(__m128i *)&word_10 = _mm_loadu_si128(v32 + 1);
            BUG();
          }
          v45 = nullptr;
          v202 = *(_QWORD *)(v11 + 872);
          v46 = sub_69F620(v32, v43);
          v231 = nullptr;
          v229 = v46;
          v230 = v47;
          v232 = 0;
          v48.m128i_i64[0] = sub_69F630(v32, v43);
          v237 = 0u;
          v236 = v48;
          v209 = v44 - 1;
          v49 = sub_84A6B0(v32->m128i_i64, (__int64)v32[1].m128i_i64) & (v44 - 1);
          for ( k = 1; ; ++k )
          {
            v51 = (_QWORD *)(v202 + 40LL * v49);
            if ( (unsigned __int8)sub_69F550(v32, v51) )
            {
              v172 = v32[1].m128i_i64[1];
              if ( v172 == v51[3] )
              {
                v173 = (_QWORD *)v32[1].m128i_i64[0];
                v174 = &v173[v172];
                if ( v173 == v174 )
                  goto LABEL_232;
                v175 = (_QWORD *)v51[2];
                while ( *v173 == *v175 )
                {
                  ++v173;
                  ++v175;
                  if ( v174 == v173 )
                    goto LABEL_232;
                }
              }
            }
            if ( (unsigned __int8)sub_69F550(v51, &v229) )
            {
              v183 = v51[3];
              if ( v183 == v232 )
                break;
            }
LABEL_30:
            v52 = sub_81F860(v51, &v236);
            if ( !v45 && v52 )
              v45 = (__m128i *)(v202 + 40LL * v49);
            v53 = k + v49;
            v49 = v209 & v53;
          }
          v184 = (_QWORD *)v51[2];
          v185 = &v184[v183];
          if ( v184 != v185 )
            break;
LABEL_249:
          if ( !v45 )
LABEL_232:
            v45 = (__m128i *)(v202 + 40LL * v49);
          *v45 = _mm_loadu_si128(v32);
          v45[1] = _mm_loadu_si128(v32 + 1);
          v45[2].m128i_i32[0] = v32[2].m128i_i32[0];
          ++*(_DWORD *)(v11 + 880);
LABEL_169:
          v32 = (__m128i *)((char *)v32 + 40);
          if ( v191 == v32 )
          {
            v9 = v213;
            v6 = v214;
            v4 = v216;
            goto LABEL_171;
          }
        }
        v186 = v231;
        while ( *v184 == *v186 )
        {
          ++v184;
          ++v186;
          if ( v185 == v184 )
            goto LABEL_249;
        }
        goto LABEL_30;
      }
LABEL_171:
      operator delete();
    }
    else
    {
      *(_QWORD *)(v11 + 880) = 0;
      v80.m128i_i64[0] = sub_69F620(v35, 8);
      v237 = 0u;
      v236 = v80;
      v81 = *(_QWORD *)(v11 + 872);
      for ( m = v81 + 40LL * *(unsigned int *)(v11 + 888); m != v81; *(__m128i *)(v81 - 24) = _mm_load_si128(&v237) )
      {
        v81 += 40;
        *(__m128i *)(v81 - 40) = _mm_load_si128(&v236);
      }
    }
    v83 = &v238;
    goto LABEL_78;
  }
  v83 = (__m128i *)((unsigned int)v17 >> 3);
  if ( (unsigned int)v83 >= (int)v17 - (v84 + *(_DWORD *)(v207 + 884)) )
  {
    v144 = *(__m128i **)(v207 + 872);
    v145 = ((((((((((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
                | (unsigned int)(v17 - 1)
                | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 4)
              | (((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
              | (unsigned int)(v17 - 1)
              | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 8)
            | (((((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
              | (unsigned int)(v17 - 1)
              | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 4)
            | (((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
            | (unsigned int)(v17 - 1)
            | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 16)
          | (((((((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
              | (unsigned int)(v17 - 1)
              | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 4)
            | (((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
            | (unsigned int)(v17 - 1)
            | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
            | (unsigned int)(v17 - 1)
            | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 4)
          | (((unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1)) >> 2)
          | (unsigned int)(v17 - 1)
          | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1))
         + 1;
    if ( (unsigned int)v145 < 0x40 )
      LODWORD(v145) = 64;
    *(_DWORD *)(v207 + 888) = v145;
    v146 = 40LL * (unsigned int)v145;
    *(_QWORD *)(v207 + 872) = sub_25CC9C0(v146, 8);
    if ( v144 )
    {
      *(_QWORD *)(v207 + 880) = 0;
      v206 = (__m128i *)((char *)v144 + 40 * v17);
      v147.m128i_i64[0] = sub_69F620(v146, 8);
      v237 = 0u;
      v236 = v147;
      v148 = *(_QWORD *)(v207 + 872);
      for ( n = v148 + 40LL * *(unsigned int *)(v207 + 888); n != v148; *(__m128i *)(v148 - 24) = _mm_load_si128(&v237) )
      {
        v148 += 40;
        *(__m128i *)(v148 - 40) = _mm_load_si128(&v236);
      }
      v150 = sub_69F620(v146, 8);
      v223 = nullptr;
      v221 = v150;
      v222 = v151;
      v224 = 0;
      v152 = sub_69F630(v146, 8);
      v227 = nullptr;
      v225 = v152;
      v226 = v153;
      v228 = 0;
      if ( v144 != v206 )
      {
        v215 = v9;
        v217 = v6;
        while ( 1 )
        {
          if ( (unsigned __int8)sub_69F550(v144, &v221) )
          {
            v165 = v144[1].m128i_i64[1];
            if ( v165 == v224 )
            {
              v166 = (_QWORD *)v144[1].m128i_i64[0];
              v167 = &v166[v165];
              v168 = v223;
              if ( v166 == v167 )
                goto LABEL_214;
              while ( *v166 == *v168 )
              {
                ++v166;
                ++v168;
                if ( v167 == v166 )
                  goto LABEL_214;
              }
            }
          }
          v154 = &v225;
          if ( (unsigned __int8)sub_69F550(v144, &v225) )
          {
            v169 = v144[1].m128i_i64[1];
            if ( v169 == v228 )
            {
              v170 = (__int64 *)v144[1].m128i_i64[0];
              v154 = &v170[v169];
              if ( v170 == v154 )
                goto LABEL_214;
              v171 = v227;
              while ( *v170 == *v171 )
              {
                ++v170;
                ++v171;
                if ( v154 == v170 )
                  goto LABEL_214;
              }
            }
          }
          v155 = *(_DWORD *)(v11 + 888);
          if ( !v155 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v144);
            *(__m128i *)&word_10 = _mm_loadu_si128(v144 + 1);
            BUG();
          }
          v156 = nullptr;
          v210 = *(_QWORD *)(v11 + 872);
          v157 = sub_69F620(v144, v154);
          v231 = nullptr;
          v229 = v157;
          v230 = v158;
          v232 = 0;
          v159.m128i_i64[0] = sub_69F630(v144, v154);
          v237 = 0u;
          v236 = v159;
          v212 = v155 - 1;
          v160 = sub_84A6B0(v144->m128i_i64, (__int64)v144[1].m128i_i64) & (v155 - 1);
          for ( ii = 1; ; ++ii )
          {
            v162 = (_QWORD *)(v210 + 40LL * v160);
            if ( (unsigned __int8)sub_69F550(v144, v162) )
            {
              v179 = v144[1].m128i_i64[1];
              if ( v179 == v162[3] )
              {
                v180 = (_QWORD *)v144[1].m128i_i64[0];
                v181 = &v180[v179];
                if ( v180 == v181 )
                  goto LABEL_242;
                v182 = (_QWORD *)v162[2];
                while ( *v180 == *v182 )
                {
                  ++v180;
                  ++v182;
                  if ( v181 == v180 )
                    goto LABEL_242;
                }
              }
            }
            if ( (unsigned __int8)sub_69F550(v162, &v229) )
            {
              v187 = v162[3];
              if ( v187 == v232 )
                break;
            }
LABEL_206:
            v163 = sub_81F860(v162, &v236);
            if ( !v156 && v163 )
              v156 = (__m128i *)(v210 + 40LL * v160);
            v164 = ii + v160;
            v160 = v212 & v164;
          }
          v188 = (_QWORD *)v162[2];
          v189 = &v188[v187];
          if ( v188 != v189 )
            break;
LABEL_256:
          if ( !v156 )
LABEL_242:
            v156 = (__m128i *)(v210 + 40LL * v160);
          *v156 = _mm_loadu_si128(v144);
          v156[1] = _mm_loadu_si128(v144 + 1);
          v156[2].m128i_i32[0] = v144[2].m128i_i32[0];
          ++*(_DWORD *)(v11 + 880);
LABEL_214:
          v144 = (__m128i *)((char *)v144 + 40);
          if ( v206 == v144 )
          {
            v9 = v215;
            v6 = v217;
            v4 = v196;
            goto LABEL_216;
          }
        }
        v190 = v231;
        while ( *v188 == *v190 )
        {
          ++v188;
          ++v190;
          if ( v189 == v188 )
            goto LABEL_256;
        }
        goto LABEL_206;
      }
LABEL_216:
      operator delete();
    }
    else
    {
      *(_QWORD *)(v207 + 880) = 0;
      v176.m128i_i64[0] = sub_69F620(v146, 8);
      v237 = 0u;
      v236 = v176;
      v177 = *(_QWORD *)(v207 + 872);
      for ( jj = v177 + 40LL * *(unsigned int *)(v207 + 888); jj != v177; *(__m128i *)(v177 - 24) = _mm_load_si128(&v237) )
      {
        v177 += 40;
        *(__m128i *)(v177 - 40) = _mm_load_si128(&v236);
      }
    }
    v83 = &v238;
LABEL_78:
    v27 = desta;
    sub_84A8A0(desta, v238.m128i_i64, &v218);
    v18 = v218;
    v84 = *(_DWORD *)(v11 + 880) + 1;
  }
  *(_DWORD *)(v11 + 880) = v84;
  v85.m128i_i64[0] = sub_69F620(v27, v83);
  v237 = 0u;
  v236 = v85;
  if ( (unsigned __int8)sub_69F550(v18, &v236) && (v86 = v18[1].m128i_i64[1], v86 == v237.m128i_i64[1]) )
  {
    v87 = (_QWORD *)v18[1].m128i_i64[0];
    v88 = &v87[v86];
    if ( v87 != v88 )
    {
      v89 = (_QWORD *)v237.m128i_i64[0];
      while ( *v87 == *v89 )
      {
        ++v87;
        ++v89;
        if ( v88 == v87 )
          goto LABEL_86;
      }
      goto LABEL_85;
    }
  }
  else
  {
LABEL_85:
    --*(_DWORD *)(v11 + 884);
  }
LABEL_86:
  *v18 = _mm_load_si128(&v238);
  v18[1] = _mm_load_si128(&v239);
  v18[2].m128i_i32[0] = v240;
  v57 = 1;
LABEL_40:
  v235 = v57;
  if ( *(_BYTE *)(v6 + 73) >> 5 == 2 )
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x36 )
    {
      v98 = *(_QWORD *)(a2 + 56);
      v99 = 0;
      if ( !v98 )
        goto LABEL_111;
    }
    else
    {
      v98 = *(_QWORD *)(a2 + 40);
      v99 = 0;
      if ( !v98 )
        goto LABEL_111;
    }
    if ( (v98 & 2) != 0 )
      v99 = v98 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_111:
    v236.m128i_i8[4] &= ~1u;
    v238.m128i_i8[4] &= ~1u;
    v100 = &v236;
    v236.m128i_i32[0] = 0;
    v238.m128i_i32[0] = 0;
    sub_69F6D0(&v238.m128i_i64[1]);
    v238.m128i_i32[0] = 11;
    sub_6A6470((__int64)&v238, v99, (__int64)&v236);
    sub_6A01B0(v4[2], (__int64)&v238);
    if ( v238.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v238);
    if ( v236.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v236);
    v208 = 1;
    if ( !v99 )
      goto LABEL_72;
    v101 = *(_QWORD *)(v99 + 48);
    v236.m128i_i16[0] = v236.m128i_i16[0] & 0xFE00 | 0x37;
    if ( byte_4AD234C )
      sub_AC4570(55);
    v236.m128i_i64[1] = v101;
    *(__int16 *)((char *)v236.m128i_i16 + 1) &= 0xF801u;
    v102 = sub_76B710((__int64)&v236);
    v236.m128i_i8[1] = (v102 << 6) | v236.m128i_i8[1] & 0x3F;
    v236.m128i_i8[2] = v236.m128i_i8[2] & 0xF8 | (v102 >> 2) & 7;
    if ( a4 )
      v100 = *a3;
    v103 = v4[1];
    v104 = _mm_loadu_si128((const __m128i *)v103);
    v239.m128i_i64[0] = *(_QWORD *)(v103 + 16);
    v238 = v104;
    v239.m128i_i32[2] = *(_DWORD *)(v103 + 24);
    v240 = *(_QWORD *)(v103 + 32);
    v241 = *(_QWORD *)(v103 + 40);
    ptr = v244;
    v243 = 0x800000000LL;
    v105 = *(_DWORD *)(v103 + 56);
    if ( !v105 || &ptr == (void **)(v103 + 48) )
      goto LABEL_121;
    if ( v105 > 8 )
    {
      sub_25D6060(&ptr, v244, v105, 8);
      v136 = 8LL * *(unsigned int *)(v103 + 56);
      if ( !v136 )
        goto LABEL_176;
      v135 = ptr;
    }
    else
    {
      v135 = v244;
      v136 = 8LL * v105;
    }
    memcpy(v135, *(const void **)(v103 + 48), v136);
LABEL_176:
    LODWORD(v243) = v105;
LABEL_121:
    v106 = *v4;
    v107 = *(_WORD *)(v103 + 128);
    LOBYTE(v107) = v107 & 3;
    v245 = v107 | v245 & 0xFC;
    v208 = sub_825EA0(v106, (__int64)v100, (__int64)&v238, v99, v199);
    if ( v208 )
    {
      v108 = *v4;
      v109 = *(_QWORD *)(*v4 + 32);
      v110 = *(_QWORD *)(v109 + 32);
      if ( (v100->m128i_i16[0] & 0x1FF) == 0x70 )
      {
        *(_QWORD *)(v109 + 32) = v4[1];
        v108 = *v4;
      }
      v208 = sub_88A010(*(_QWORD *)(v4[2] + 16), v108, &v238, (unsigned __int64)v100, 0);
      if ( v208 && (*(_BYTE *)(v99 + 68) & 1) != 0 )
        v208 = sub_824FF0(*v4, (__int64)v100, *(_QWORD *)(v4[2] + 16), v99);
      *(_QWORD *)(v109 + 32) = v110;
    }
    if ( ptr != v244 )
      free(ptr);
    goto LABEL_72;
  }
  if ( *(_DWORD *)v4[2] <= 1u )
  {
    v111 = sub_7868A0(v6);
    if ( v111 )
    {
      v112 = 0;
      while ( 1 )
      {
        v113 = *(_QWORD *)(v111 + 8);
        v111 = v113 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v113 <= 7 )
          break;
        if ( (*(_BYTE *)(v111 + 28) & 0x7Fu) - 47 <= 2 )
          ++v112;
      }
      v114 = v112 + 1;
    }
    else
    {
      v114 = 0;
    }
    v115 = 0;
    if ( v9 )
    {
      sub_8226C0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104));
      v115 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 16LL);
    }
    v238.m128i_i8[4] &= ~1u;
    v238.m128i_i32[0] = 0;
    sub_69F640((__int64)&v238.m128i_i64[1], v115, v114);
    v116 = v4[2];
    v238.m128i_i32[0] = 10;
    sub_6A01B0(v116, (__int64)&v238);
    if ( v238.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v238);
  }
  if ( v9
    && (sub_8226C0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104)),
        *(_DWORD *)(*(_QWORD *)(v9 + 128) + 16LL)) )
  {
    sub_8226C0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104));
    v117 = *(_QWORD *)(v9 + 128);
    if ( (*(_BYTE *)(v117 + 24) & 1) != 0 )
      v118 = sub_7A2E20(v117);
    else
      v118 = *(_QWORD *)(v117 + 24);
    sub_8226C0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104));
    v205 = v118 + 24LL * *(unsigned int *)(*(_QWORD *)(v9 + 128) + 16LL);
    sub_8226C0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104));
    v119 = *(_QWORD *)(v9 + 128);
    if ( (*(_BYTE *)(v119 + 24) & 1) != 0 )
      v120 = sub_7A2E20(v119);
    else
      v120 = *(_QWORD *)(v119 + 24);
    v208 = 1;
    v197 = 0;
    if ( v120 != v205 )
    {
      while ( 1 )
      {
        v121 = (unsigned __int64)a3[v197];
        v122 = (const __m128i *)v4[1];
        v123 = _mm_loadu_si128(v122);
        v239.m128i_i64[0] = v122[1].m128i_i64[0];
        v238 = v123;
        v239.m128i_i32[2] = v122[1].m128i_i32[2];
        v240 = v122[2].m128i_i64[0];
        v124 = v122[2].m128i_i64[1];
        ptr = v244;
        v243 = 0x800000000LL;
        v125 = v122[3].m128i_i32[2];
        v241 = v124;
        if ( v125 )
        {
          v211 = v122;
          sub_820650((__int64)&ptr, (__int64)v122[3].m128i_i64);
          v122 = v211;
        }
        v126 = v122[8].m128i_i16[0];
        v127 = *v4;
        LOBYTE(v126) = v126 & 3;
        v245 = v245 & 0xFC | v126;
        if ( !(unsigned __int8)sub_82D840(v127, v121, (__int64)&v238, v9, v120) )
          goto LABEL_101;
        if ( !(unsigned __int8)sub_88A010(*(_QWORD *)(v4[2] + 8) + 56LL * v197, *v4, &v238, v121, 0) )
        {
          v128 = *v4;
          if ( !*(_DWORD *)(*v4 + 48) )
            goto LABEL_101;
          v129 = *(_BYTE **)(v128 + 24);
          if ( *(_BYTE *)(v128 + 962) )
          {
            *v129 = 1;
          }
          else
          {
            v130 = *(_BYTE *)(v128 + 963);
            *v129 |= v130;
            if ( !v130 )
              goto LABEL_101;
          }
          v208 = 0;
        }
        ++v197;
        if ( ptr == v244 )
        {
          v120 += 24;
          if ( v205 == v120 )
            break;
        }
        else
        {
          free(ptr);
          v120 += 24;
          if ( v205 == v120 )
            break;
        }
      }
    }
    *(_DWORD *)sub_84AAC0((__int64)&v233[54].m128i_i64[1], (__int64 *)v234) = 2;
  }
  else
  {
    v208 = 1;
    v197 = 0;
  }
  v58 = sub_7868A0(v6);
  if ( v58 )
  {
LABEL_46:
    if ( (*(_BYTE *)(v58 + 68) & 1) != 0 )
    {
      v59 = *(_QWORD *)(v58 + 40);
      if ( v59 <= 7 && !(_DWORD)v59 )
        goto LABEL_70;
    }
    v60 = (const __m128i *)v4[1];
    v61 = _mm_loadu_si128(v60);
    v239.m128i_i64[0] = v60[1].m128i_i64[0];
    v238 = v61;
    v239.m128i_i32[2] = v60[1].m128i_i32[2];
    v240 = v60[2].m128i_i64[0];
    v62 = v60[2].m128i_i64[1];
    ptr = v244;
    v241 = v62;
    v243 = 0x800000000LL;
    if ( v60[3].m128i_i32[2] )
      sub_820650((__int64)&ptr, (__int64)v60[3].m128i_i64);
    v63 = v60[8].m128i_i16[0];
    v64 = v197;
    v65 = *v4;
    LOBYTE(v63) = v63 & 3;
    v245 = v63 | v245 & 0xFC;
    if ( v197 >= a4 )
    {
      if ( !(unsigned __int8)sub_825EA0(v65, a2, (__int64)&v238, v58, v199) )
        goto LABEL_101;
      v66 = *(_QWORD *)(v58 + 48);
    }
    else
    {
      if ( !(unsigned __int8)sub_825EA0(v65, (__int64)a3[v197]->m128i_i64, (__int64)&v238, v58, v199) )
        goto LABEL_101;
      v66 = *(_QWORD *)(*(_QWORD *)(*v4 + 16) + 18560LL);
    }
    v236.m128i_i16[0] = v236.m128i_i16[0] & 0xFE00 | 0x37;
    if ( byte_4AD234C )
      sub_AC4570(55);
    v236.m128i_i64[1] = v66;
    v67 = &v236;
    *(__int16 *)((char *)v236.m128i_i16 + 1) &= 0xF801u;
    v68 = sub_76B710((__int64)&v236);
    v236.m128i_i8[1] = (v68 << 6) | v236.m128i_i8[1] & 0x3F;
    v236.m128i_i8[2] = v236.m128i_i8[2] & 0xF8 | (v68 >> 2) & 7;
    if ( v197 < a4 )
    {
      ++v197;
      v67 = a3[v64];
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 5 )
      goto LABEL_59;
    v94 = sub_6D9A50(*(_QWORD **)(*v4 + 16), v67->m128i_i64[1]);
    if ( !v94 || (unsigned __int8)(*(_BYTE *)(v94 + 16) - 2) > 1u )
      goto LABEL_59;
    if ( (*(_BYTE *)(v94 + 19) & 2) != 0 )
    {
      v95 = *(_QWORD *)(v94 + 40);
      v96 = *(_DWORD *)(v95 + 8);
      if ( v96 <= 0x40 )
      {
        if ( *(_QWORD *)v95 )
          goto LABEL_100;
        goto LABEL_59;
      }
      v97 = v96 == (unsigned int)sub_2587400(v95);
    }
    else
    {
      v97 = *(_QWORD *)(v94 + 40) == 0;
    }
    if ( !v97 )
    {
LABEL_100:
      sub_A2E130(*v4, v67, 2294, 0);
LABEL_101:
      if ( ptr != v244 )
        free(ptr);
      v208 = 0;
      goto LABEL_72;
    }
LABEL_59:
    v69 = *(_QWORD *)(*v4 + 32);
    destb = *(void **)(v69 + 32);
    if ( (v67->m128i_i16[0] & 0x1FF) == 0x70 )
      *(_QWORD *)(v69 + 32) = v4[1];
    v70 = v4[2];
    v71 = v58;
    if ( *(char *)(v58 + 29) < 0 )
    {
      v203 = v4[2];
      v72 = sub_77A0C0(v58);
      v70 = v203;
      v71 = v72;
    }
    if ( *(_DWORD *)(v71 + 68) <= 0xFu )
    {
      v204 = v70;
      sub_78B660(v71);
      v70 = v204;
    }
    v73 = *(_QWORD *)(v70 + 8) + 56LL * (unsigned int)((*(_DWORD *)(v71 + 68) >> 4) + *(_DWORD *)(v70 + 16) - 1);
    if ( (unsigned __int8)sub_88A010(v73, *v4, &v238, (unsigned __int64)v67, 0)
      && ((*(_BYTE *)(v58 + 68) & 1) == 0 || (unsigned __int8)sub_824FF0(*v4, (__int64)v67, v73, v58)) )
    {
LABEL_67:
      *(_QWORD *)(v69 + 32) = destb;
      if ( ptr != v244 )
        free(ptr);
LABEL_70:
      while ( 1 )
      {
        v74 = *(_QWORD *)(v58 + 8);
        v58 = v74 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v74 <= 7 )
          goto LABEL_71;
        if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_46;
      }
    }
    v90 = *v4;
    if ( *(_DWORD *)(*v4 + 48) )
    {
      v91 = *(_BYTE *)(v90 + 962);
      v92 = *(_BYTE *)(v90 + 963);
      v93 = *(_BYTE **)(v90 + 24);
      if ( v91 )
      {
        *v93 = 1;
LABEL_91:
        v208 = 0;
        goto LABEL_67;
      }
      *v93 |= v92;
      if ( v92 )
        goto LABEL_91;
    }
    *(_QWORD *)(v69 + 32) = destb;
    goto LABEL_101;
  }
LABEL_71:
  *(_DWORD *)sub_84AAC0((__int64)&v233[54].m128i_i64[1], (__int64 *)v234) = 3;
LABEL_72:
  if ( v235 )
  {
    v75 = v233;
    v76 = &v233[54].m128i_i8[8];
    v77 = (__m128i *)sub_84A740(&v233[54].m128i_i64[1], (__int64 *)v234);
    if ( v77 )
    {
      v78.m128i_i64[0] = sub_69F630(v76, v234);
      v239 = 0u;
      v79 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
      v238 = v78;
      *v77 = v78;
      v77[1] = _mm_load_si128(&v239);
      v75[55].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(v75 + 55), v79).m128i_u64[0];
    }
  }
  return v208;
}

