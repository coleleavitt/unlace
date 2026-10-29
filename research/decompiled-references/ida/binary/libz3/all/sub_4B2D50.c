__int64 __fastcall sub_4B2D50(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  char **v6; // rbp
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  char **v9; // rbp
  char **exception; // rbx
  __int64 v11; // r14
  _QWORD *v12; // rsi
  char *v18; // r8
  __m128i *v19; // r9
  _QWORD *v20; // rsi
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  __int64 *v23; // rax
  unsigned __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  _DWORD *v32; // rcx
  int v33; // eax
  __int64 v34; // r15
  _QWORD *v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __m128i *v39; // rdx
  __int64 v40; // rsi
  _QWORD *v41; // rcx
  __int64 v42; // rdi
  __m128i v43; // xmm1
  __int64 v44; // rdx
  __int32 v45; // r15d
  __m128i *v46; // rbp
  __int32 v47; // r11d
  __int64 v48; // r9
  __m128i *v49; // r10
  __int64 v50; // r11
  __m128i *v51; // rcx
  __m128i *v52; // rax
  __m128i *v53; // rsi
  _QWORD *v54; // rdx
  _QWORD *v55; // rax
  unsigned int v56; // ebp
  unsigned int v57; // eax
  unsigned int *v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rcx
  int v66; // ecx
  __int32 v67; // esi
  __int64 v68; // rdx
  __int64 *v69; // rcx
  unsigned int v70; // r9d
  __int64 *v71; // rdi
  __int64 v72; // r9
  __int64 *v73; // r8
  __int64 *v74; // rax
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // edx
  __int64 result; // rax
  unsigned int v79; // ebp
  _QWORD *v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r12
  unsigned int v83; // r15d
  size_t v84; // rsi
  unsigned int *v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rax
  _QWORD *v88; // rsi
  _QWORD *v89; // rdx
  _QWORD *v90; // rcx
  int v91; // ebx
  unsigned int v92; // edx
  unsigned int v93; // ebp
  _QWORD *v94; // rdx
  __int64 v95; // rbx
  _QWORD *v96; // rcx
  __int64 v97; // r12
  unsigned int v98; // r15d
  size_t v99; // rsi
  unsigned int *v100; // rax
  unsigned int v101; // ecx
  __int64 v102; // rax
  _QWORD *v103; // rsi
  _QWORD *v104; // rdx
  _QWORD *v105; // rcx
  int v106; // ebx
  unsigned int v107; // edx
  __int64 v108; // rbp
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rdx
  _DWORD *v112; // r15
  _DWORD *v113; // r12
  __int64 v114; // rax
  char *v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  char *v120; // rax
  int v121; // eax
  __int64 v122; // rbx
  unsigned int v123; // esi
  unsigned int v124; // r15d
  size_t v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rdi
  _DWORD *v128; // rsi
  __int64 v129; // r8
  unsigned __int64 v130; // rax
  __int64 v131; // r8
  unsigned int v132; // ebx
  size_t v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rdi
  _DWORD *v136; // rsi
  __int64 v137; // r9
  unsigned __int64 v138; // rax
  __int64 v139; // r9
  __int64 v140; // rbx
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  unsigned int v146; // ebp
  unsigned int v147; // edx
  unsigned int *v148; // rsi
  __int64 v149; // rcx
  __int64 v150; // rdx
  unsigned __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rcx
  _QWORD *v155; // rdx
  _QWORD *v156; // rcx
  int v157; // ebx
  __int64 v158; // rax
  int v159; // ebx
  __int64 v160; // rax
  unsigned int v161; // ecx
  unsigned __int64 v162; // rdx
  __m128i *v163; // rax
  const __m128i *v164; // rax
  __m128i *v165; // r8
  __int64 v166; // rdx
  __m128i *v167; // rsi
  __m128i *v168; // rdx
  __m128i v169; // xmm0
  __int64 v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // rax
  _QWORD *v173; // rax
  _QWORD *v174; // rax
  __int64 v175; // rcx
  char *v176; // rcx
  unsigned __int64 v177; // rbp
  unsigned __int64 v178; // r15
  int v179; // ecx
  int v180; // eax
  int v181; // esi
  char *v182; // rcx
  __int64 v183; // rax
  unsigned int v184; // edx
  __int64 *v185; // rdi
  __int64 v186; // rdx
  __int64 *i; // rax
  __int64 v188; // rdx
  unsigned int v189; // eax
  __int64 v190; // rcx
  int v191; // eax
  __m128i *v192; // rcx
  __int64 v193; // rax
  __int64 v194; // rbp
  int v195; // eax
  __int64 v196; // r15
  int v197; // esi
  __int32 v198; // ecx
  __int64 v199; // rax
  __int64 v200; // r11
  __m128i *v201; // r15
  __int64 v202; // rax
  __m128 v203; // xmm0
  __int64 v204; // rdi
  __m128 *v205; // rax
  __m128 *v206; // rsi
  _QWORD *v207; // rdx
  _QWORD *v208; // rax
  __int64 v209; // r15
  unsigned int v210; // eax
  char *v211; // rsi
  __int64 v212; // rax
  __int64 v213; // rbp
  char *v214; // rdi
  __int64 v215; // rdx
  __int64 v216; // rcx
  unsigned int v217; // eax
  char *v218; // r15
  _QWORD *v219; // rax
  unsigned int v220; // edi
  unsigned int v221; // edx
  _DWORD *v222; // rdx
  __int64 v223; // rsi
  __int64 v224; // rcx
  unsigned __int64 v225; // rax
  __int64 v226; // rcx
  int v227; // ebx
  char *v228; // rdi
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // rcx
  int v233; // eax
  __int64 v234; // rax
  unsigned int v235; // r8d
  int v236; // r9d
  unsigned __int64 v237; // rdx
  __int64 v238; // rax
  __m128i *v239; // rdi
  __int64 v240; // rdx
  const __m128i *v241; // rax
  const __m128i *v242; // r10
  __int64 v243; // rdx
  __m128i *v244; // rsi
  __m128i *v245; // rdx
  __int64 v246; // rax
  __int64 v247; // rax
  _QWORD *v248; // rax
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  int v252; // ebx
  int v253; // [rsp+0h] [rbp-168h]
  __int64 v254; // [rsp+8h] [rbp-160h]
  __m128i v255; // [rsp+10h] [rbp-158h] BYREF
  __int64 v256; // [rsp+20h] [rbp-148h]
  unsigned __int64 v257; // [rsp+28h] [rbp-140h]
  __int64 v258; // [rsp+30h] [rbp-138h] BYREF
  char *v259; // [rsp+38h] [rbp-130h]
  int v260[2]; // [rsp+40h] [rbp-128h]
  __m128i *v261; // [rsp+48h] [rbp-120h]
  __m128i v262; // [rsp+50h] [rbp-118h] BYREF
  __m128i *v263; // [rsp+60h] [rbp-108h]
  __int64 v264; // [rsp+68h] [rbp-100h]
  __int8 *v265; // [rsp+70h] [rbp-F8h]
  unsigned int v266; // [rsp+78h] [rbp-F0h]
  int v267; // [rsp+7Ch] [rbp-ECh]
  __int64 v268[4]; // [rsp+80h] [rbp-E8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  int v270[2]; // [rsp+A8h] [rbp-C0h]
  _BYTE v271[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v256 = a1;
  v254 = a3;
  sub_4B1E40(a1);
  if ( a2 == a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_4B1860(*a4, a4[1]);
    *a4 = a2;
    sub_FA3BF0(a5);
    return sub_FA3BF0(a6);
  }
  v20 = *(_QWORD **)(v256 + 24);
  if ( !v20 )
  {
    v174 = (_QWORD *)sub_186B270(0x28u);
    v175 = v256;
    v22 = 1;
    v20 = v174 + 1;
    v174[1] = a2;
    *(_QWORD *)(v175 + 24) = v174 + 1;
    v174[2] = v254;
    *v174 = 0x100000002LL;
    goto LABEL_5;
  }
  v21 = *((_DWORD *)v20 - 1);
  if ( v21 != *((_DWORD *)v20 - 2) )
  {
    v22 = v21 + 1;
    v23 = &v20[2 * v21];
    *v23 = a2;
    v23[1] = v254;
    *((_DWORD *)v20 - 1) = v21 + 1;
    goto LABEL_5;
  }
  v56 = (3 * v21 + 1) >> 1;
  v57 = 16 * v56 + 8;
  if ( 16 * v21 + 8 >= v57 || v21 >= v56 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    v255.m128i_i64[0] = (__int64)&ptr;
    sub_4B1880((__int64 *)&ptr, "Overflow encountered when expanding vector");
    goto LABEL_370;
  }
  v58 = (unsigned int *)sub_186B270(v57);
  v20 = v58 + 2;
  v59 = *(_QWORD *)(v256 + 24);
  if ( v59 )
  {
    v60 = *(unsigned int *)(v59 - 4);
    v61 = 0;
    v58[1] = v60;
    v62 = 16 * v60;
    if ( v62 )
    {
      do
      {
        *(__m128i *)&v58[v61 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v59 + v61));
        v61 += 16LL;
      }
      while ( v62 != v61 );
    }
    v255.m128i_i64[0] = (__int64)(v58 + 2);
    sub_186B220((void *)(v59 - 8));
    v20 = v58 + 2;
    v63 = v58[1];
    v64 = (__int64 *)&v58[4 * v63 + 2];
    v22 = v63 + 1;
  }
  else
  {
    v58[1] = 0;
    v64 = (__int64 *)(v58 + 2);
    v22 = 1;
  }
  v65 = v256;
  *v58 = v56;
  *(_QWORD *)(v65 + 24) = v20;
  *v64 = a2;
  v64[1] = v254;
  v58[1] = v22;
  if ( !v22 )
    goto LABEL_40;
  while ( 2 )
  {
    v24 = &v20[2 * v22 - 2];
    v25 = v24[1];
    v257 = *v24;
    v26 = *(unsigned int *)(v257 + 24);
    v258 = v25;
    if ( *(_QWORD *)(v25 + 16) != *(_QWORD *)(v257 + 16) || *(_DWORD *)(v25 + 24) != (_DWORD)v26 )
    {
      v27 = v256;
      *(_QWORD *)v260 = *(_QWORD *)v256;
      v28 = sub_15D1F10(v257);
      v29 = *(_QWORD *)(v27 + 56);
      if ( v29 )
        v30 = *(unsigned int *)(v29 - 4);
      else
        v30 = 0;
      v31 = sub_15DB5C0(*(_QWORD *)v260, v30, v28);
      v259 = (char *)v31;
      if ( v31 )
      {
        v32 = (_DWORD *)v31;
        v33 = *(_DWORD *)(v31 + 8);
        ptr = v32;
        v32[2] = v33 + 2;
      }
      else
      {
        ptr = nullptr;
      }
      v34 = v256;
      v255.m128i_i64[0] = (__int64)&ptr;
      sub_4B2920((_QWORD *)(v256 + 16), &ptr);
      v35 = *(_QWORD **)(v34 + 56);
      if ( v35 )
      {
        v36 = *((_DWORD *)v35 - 1);
        if ( v36 == *((_DWORD *)v35 - 2) )
        {
          v146 = (3 * v36 + 1) >> 1;
          v147 = 16 * v146 + 8;
          if ( 16 * v36 + 8 >= v147 || v36 >= v146 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_4B1880((__int64 *)v255.m128i_i64[0], "Overflow encountered when expanding vector");
            v7 = v255.m128i_i64[0];
            v8 = (_QWORD *)v255.m128i_i64[0];
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v8);
            sub_233E40(v7);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v148 = (unsigned int *)sub_186B270(v147);
          v35 = v148 + 2;
          v149 = *(_QWORD *)(v256 + 56);
          if ( v149 )
          {
            v150 = *(unsigned int *)(v149 - 4);
            v151 = 0;
            v148[1] = v150;
            v152 = 16 * v150;
            if ( v152 )
            {
              do
              {
                *(__m128i *)&v148[v151 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v149 + v151));
                v151 += 16LL;
              }
              while ( v151 != v152 );
            }
            v255.m128i_i64[0] = (__int64)v148;
            sub_186B220((void *)(v149 - 8));
            v148 = (unsigned int *)v255.m128i_i64[0];
            v39 = (__m128i *)&v35[2 * *(unsigned int *)(v255.m128i_i64[0] + 4)];
            v38 = *(_DWORD *)(v255.m128i_i64[0] + 4) + 1;
          }
          else
          {
            v148[1] = 0;
            v39 = (__m128i *)(v148 + 2);
            v38 = 1;
          }
          v153 = v256;
          *v148 = v146;
          *(_QWORD *)(v153 + 56) = v35;
        }
        else
        {
          v37 = v36;
          v38 = v36 + 1;
          v39 = (__m128i *)&v35[2 * v37];
        }
      }
      else
      {
        v219 = (_QWORD *)sub_186B270(0x28u);
        *v219 = 2;
        v35 = v219 + 1;
        *(_QWORD *)(v256 + 56) = v219 + 1;
        v39 = (__m128i *)(v219 + 1);
        v38 = 1;
      }
      v40 = v258;
      v41 = (_QWORD *)v257;
      v42 = v256;
      v43 = _mm_unpacklo_epi64((__m128i)v257, (__m128i)(unsigned __int64)v258);
      *v39 = v43;
      *((_DWORD *)v35 - 1) = v38;
      LODWORD(v41) = *((_DWORD *)v41 + 3);
      v255.m128i_i32[0] = *(_DWORD *)(v40 + 12);
      v44 = *(unsigned int *)(v42 + 40);
      v45 = (((v255.m128i_i32[0] - (_DWORD)v41)
            ^ ((_DWORD)v41 << 8)
            ^ (((_DWORD)v41 - ((v255.m128i_i32[0] - (_DWORD)v41) ^ ((_DWORD)v41 << 8))) << 16))
           + ((v255.m128i_i32[0] - (_DWORD)v41) ^ ((_DWORD)v41 << 8))
           - (_DWORD)v41)
          ^ (((_DWORD)v41 - ((v255.m128i_i32[0] - (_DWORD)v41) ^ ((_DWORD)v41 << 8))) << 10);
      if ( 3 * (int)v44 < (unsigned int)(4 * (*(_DWORD *)(v42 + 44) + *(_DWORD *)(v42 + 48))) )
      {
        LODWORD(v261) = 2 * v44;
        v262 = v43;
        v255.m128i_i64[0] = 32LL * (unsigned int)(2 * v44);
        v160 = sub_186B270(v255.m128i_u64[0]);
        v161 = (unsigned int)v261;
        v48 = v255.m128i_i64[0];
        v46 = (__m128i *)v160;
        v43 = _mm_load_si128(&v262);
        if ( (_DWORD)v261 )
        {
          v255.m128i_i32[0] = (_DWORD)v261 - 1;
          if ( (unsigned int)((_DWORD)v261 - 1) <= 2 )
          {
            *(_DWORD *)(v160 + 24) = 0;
            *(_DWORD *)(v160 + 56) = 0;
            *(_OWORD *)v160 = 0;
            *(_OWORD *)(v160 + 32) = 0;
          }
          else
          {
            v162 = v160 + ((unsigned __int64)((unsigned int)v261 >> 2) << 7);
            do
            {
              *(_DWORD *)(v160 + 24) = 0;
              v160 += 128;
              *(_OWORD *)(v160 - 128) = 0;
              *(_OWORD *)(v160 - 96) = 0;
              *(_OWORD *)(v160 - 64) = 0;
              *(_OWORD *)(v160 - 32) = 0;
              *(_DWORD *)(v160 - 72) = 0;
              *(_DWORD *)(v160 - 40) = 0;
              *(_DWORD *)(v160 - 8) = 0;
            }
            while ( v162 != v160 );
            if ( (v161 & 2) != 0 )
            {
              v163 = &v46[2 * (v161 & 0xFFFFFFFC)];
              v163[1].m128i_i32[2] = 0;
              v163[3].m128i_i32[2] = 0;
              *v163 = 0;
              v163[2] = 0;
              if ( v161 - (v161 & 0xFFFFFFFC) != 2 )
              {
                v163[5].m128i_i32[2] = 0;
                v163[4] = 0;
              }
            }
          }
        }
        else
        {
          v255.m128i_i32[0] = -1;
        }
        v47 = v255.m128i_i32[0];
        v49 = (__m128i *)((char *)v46 + v48);
        v164 = *(const __m128i **)(v256 + 32);
        v165 = (__m128i *)&v164[2 * *(unsigned int *)(v256 + 40)];
        if ( v164 != v165 )
        {
          do
          {
            while ( v164->m128i_i64[0] <= 1uLL )
            {
              v164 += 2;
              if ( v165 == v164 )
                goto LABEL_184;
            }
            v166 = 32LL * (unsigned int)(v164[1].m128i_i32[2] & v255.m128i_i32[0]);
            v167 = &v46[(unsigned __int64)v166 / 0x10];
            if ( v48 == v166 )
            {
LABEL_188:
              if ( v46 == v167 )
              {
LABEL_208:
                v267 = v161;
                v265 = &v46->m128i_i8[v48];
                v264 = v48;
                v266 = v47;
                v263 = v165;
                v261 = (__m128i *)v164;
                v262 = v43;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v168 = v46;
              while ( v168->m128i_i64[0] )
              {
                v168 += 2;
                if ( v167 == v168 )
                  goto LABEL_208;
              }
            }
            else
            {
              v168 = &v46[(unsigned __int64)v166 / 0x10];
              while ( v168->m128i_i64[0] )
              {
                v168 += 2;
                if ( v49 == v168 )
                  goto LABEL_188;
              }
            }
            v169 = _mm_loadu_si128(v164);
            v164 += 2;
            *v168 = v169;
            v168[1] = _mm_loadu_si128(v164 - 1);
          }
          while ( v165 != v164 );
LABEL_184:
          v165 = *(__m128i **)(v256 + 32);
        }
        if ( v165 )
        {
          v266 = v161;
          v263 = (__m128i *)((char *)v46 + v48);
          v262.m128i_i64[0] = v48;
          LODWORD(v261) = v47;
          v255 = v43;
          sub_186B220(v165);
          v161 = v266;
          v49 = v263;
          v48 = v262.m128i_i64[0];
          v47 = (int)v261;
          v43 = _mm_load_si128(&v255);
        }
        v170 = v256;
        *(_QWORD *)(v256 + 32) = v46;
        *(_DWORD *)(v170 + 40) = v161;
        *(_DWORD *)(v170 + 48) = 0;
      }
      else
      {
        v46 = *(__m128i **)(v42 + 32);
        v47 = v44 - 1;
        v48 = 32 * v44;
        v49 = &v46[2 * v44];
      }
      v50 = 32LL * (v45 & (unsigned int)v47);
      v51 = &v46[(unsigned __int64)v50 / 0x10];
      if ( v50 == v48 )
      {
        v53 = nullptr;
LABEL_25:
        if ( v51 == v46 )
        {
LABEL_200:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          v55 = (_QWORD *)v46->m128i_i64[0];
          if ( v46->m128i_i64[0] > 1uLL )
          {
            if ( v46[1].m128i_i32[2] == v45 && (_QWORD *)v257 == v55 && v258 == v46->m128i_i64[1] )
            {
              v158 = (__int64)v259;
              v46[1].m128i_i32[2] = v45;
              *v46 = v43;
              v46[1].m128i_i64[0] = v158;
              goto LABEL_147;
            }
          }
          else
          {
            if ( !v55 )
            {
              if ( !v53 )
              {
                v53 = v46;
                goto LABEL_203;
              }
LABEL_202:
              --*(_DWORD *)(v256 + 48);
              goto LABEL_203;
            }
            v53 = v46;
          }
          v46 += 2;
          if ( v51 == v46 )
            goto LABEL_200;
        }
      }
      v52 = &v46[(unsigned __int64)v50 / 0x10];
      v53 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v54 = (_QWORD *)v52->m128i_i64[0];
          if ( v52->m128i_i64[0] <= 1uLL )
            break;
          if ( v52[1].m128i_i32[2] == v45 && (_QWORD *)v257 == v54 && v258 == v52->m128i_i64[1] )
          {
            v154 = (__int64)v259;
            v52[1].m128i_i32[2] = v45;
            *v52 = v43;
            v52[1].m128i_i64[0] = v154;
            goto LABEL_147;
          }
          v52 += 2;
          if ( v52 == v49 )
            goto LABEL_25;
        }
        if ( !v54 )
          break;
        v53 = v52;
        v52 += 2;
        if ( v52 == v49 )
          goto LABEL_25;
      }
      if ( v53 )
        goto LABEL_202;
      v53 = v52;
LABEL_203:
      v171 = (__int64)v259;
      *v53 = v43;
      v53[1].m128i_i32[2] = v45;
      v53[1].m128i_i64[0] = v171;
      ++*(_DWORD *)(v256 + 44);
LABEL_147:
      sub_4B1860((__int64)v259, *(__int64 *)v260);
      goto LABEL_148;
    }
    v176 = v271;
    v259 = v271;
    ptr = v271;
    *(_QWORD *)v270 = 0x1000000000LL;
    if ( (_DWORD)v26 )
    {
      v19 = (__m128i *)&qword_20;
      v255.m128i_i64[0] = 8 * v26 + 32;
      do
      {
        v177 = *(unsigned __int64 *)((char *)v19->m128i_u64 + v257);
        v178 = *(unsigned __int64 *)((char *)v19->m128i_u64 + v258);
        if ( v178 == v177 )
        {
          v217 = v270[0];
          if ( v270[0] >= (unsigned int)v270[1] )
          {
            v262.m128i_i32[0] = v22;
            v260[0] = 2 * v270[1];
            v261 = v19;
            v218 = (char *)sub_186B270(8LL * (unsigned int)(2 * v270[1]));
            v19 = v261;
            v22 = v262.m128i_i32[0];
            v217 = v270[0];
            v228 = (char *)ptr;
            if ( v270[0] )
            {
              if ( (unsigned int)(v270[0] - 1) <= 2 || v218 == (char *)ptr + 8 )
              {
                v250 = 0;
                v251 = 8LL * (unsigned int)v270[0];
                do
                {
                  *(_QWORD *)&v218[v250] = *(_QWORD *)&v228[v250];
                  v250 += 8;
                }
                while ( v250 != v251 );
              }
              else
              {
                v229 = 0;
                v230 = 16LL * ((unsigned int)v270[0] >> 1);
                do
                {
                  *(__m128i *)&v218[v229] = _mm_loadu_si128((const __m128i *)&v228[v229]);
                  v229 += 16;
                }
                while ( v230 != v229 );
                if ( (v217 & 1) != 0 )
                  *(_QWORD *)&v218[8 * (v217 & 0xFFFFFFFE)] = *(_QWORD *)&v228[8 * (v217 & 0xFFFFFFFE)];
              }
            }
            if ( v228 != v259 && v228 )
            {
              v262.m128i_i32[0] = v22;
              v261 = v19;
              sub_186B220(v228);
              v217 = v270[0];
              v22 = v262.m128i_i32[0];
              v19 = v261;
            }
            ptr = v218;
            v270[1] = v260[0];
          }
          else
          {
            v218 = (char *)ptr;
          }
          *(_QWORD *)&v218[8 * v217] = v177;
          v270[0] = v217 + 1;
        }
        else
        {
          v179 = *(_DWORD *)(v177 + 12);
          v180 = (*(_DWORD *)(v178 + 12) - v179) ^ (v179 << 8);
          v181 = (v180 - v179 + (v180 ^ ((v179 - v180) << 16))) ^ ((v179 - v180) << 10);
          v182 = *(char **)(v256 + 32);
          v183 = *(unsigned int *)(v256 + 40);
          v184 = v183 - 1;
          v183 *= 32;
          v185 = (__int64 *)&v182[v183];
          v186 = 32LL * (v181 & v184);
          v18 = &v182[v186];
          if ( v186 != v183 )
          {
            for ( i = (__int64 *)&v182[v186]; v185 != i; i += 4 )
            {
              v188 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *((_DWORD *)i + 6) == v181 && v177 == v188 && v178 == i[1] )
                {
LABEL_249:
                  v209 = i[2];
                  v210 = v270[0];
                  v211 = (char *)ptr;
                  if ( v270[0] >= (unsigned int)v270[1] )
                  {
                    LODWORD(v261) = v22;
                    v213 = (unsigned int)(2 * v270[1]);
                    *(_QWORD *)v260 = v19;
                    v211 = (char *)sub_186B270(8 * v213);
                    v19 = *(__m128i **)v260;
                    v22 = (unsigned int)v261;
                    v210 = v270[0];
                    v214 = (char *)ptr;
                    if ( v270[0] )
                    {
                      if ( (unsigned int)(v270[0] - 1) <= 2 || v211 == (char *)ptr + 8 )
                      {
                        v231 = 0;
                        v232 = 8LL * (unsigned int)v270[0];
                        do
                        {
                          v18 = *(char **)&v214[v231];
                          *(_QWORD *)&v211[v231] = v18;
                          v231 += 8;
                        }
                        while ( v232 != v231 );
                      }
                      else
                      {
                        v215 = 0;
                        v216 = 16LL * ((unsigned int)v270[0] >> 1);
                        do
                        {
                          *(__m128i *)&v211[v215] = _mm_loadu_si128((const __m128i *)&v214[v215]);
                          v215 += 16;
                        }
                        while ( v215 != v216 );
                        if ( (v210 & 1) != 0 )
                          *(_QWORD *)&v211[8 * (v210 & 0xFFFFFFFE)] = *(_QWORD *)&v214[8 * (v210 & 0xFFFFFFFE)];
                      }
                    }
                    if ( v214 != v259 && v214 )
                    {
                      v262.m128i_i64[0] = (__int64)v211;
                      LODWORD(v261) = v22;
                      *(_QWORD *)v260 = v19;
                      sub_186B220(v214);
                      v210 = v270[0];
                      v211 = (char *)v262.m128i_i64[0];
                      v22 = (unsigned int)v261;
                      v19 = *(__m128i **)v260;
                    }
                    ptr = v211;
                    v270[1] = v213;
                  }
                  *(_QWORD *)&v211[8 * v210] = v209;
                  v270[0] = v210 + 1;
                  goto LABEL_225;
                }
              }
              else if ( !v188 )
              {
                goto LABEL_221;
              }
            }
          }
          for ( ; v18 != v182; v182 += 32 )
          {
            v212 = *(_QWORD *)v182;
            if ( *(_QWORD *)v182 > 1u )
            {
              if ( *((_DWORD *)v182 + 6) == v181 && v177 == v212 && v178 == *((_QWORD *)v182 + 1) )
              {
                i = (__int64 *)v182;
                goto LABEL_249;
              }
            }
            else if ( !v212 )
            {
              break;
            }
          }
LABEL_221:
          v18 = *(char **)(v256 + 24);
          if ( v18 )
          {
            v189 = *((_DWORD *)v18 - 1);
            if ( v189 == *((_DWORD *)v18 - 2) )
            {
              v220 = (3 * v189 + 1) >> 1;
              v260[0] = v220;
              v221 = 16 * v220 + 8;
              if ( 16 * v189 + 8 >= v221 || v189 >= v220 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_4B1880(v268, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v268);
                sub_233E40((__int64)v268);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v262.m128i_i32[0] = v22;
              v261 = v19;
              v222 = (_DWORD *)sub_186B270(v221);
              v19 = v261;
              v22 = v262.m128i_i32[0];
              v18 = (char *)(v222 + 2);
              v223 = *(_QWORD *)(v256 + 24);
              if ( v223 )
              {
                v224 = *(unsigned int *)(v223 - 4);
                v225 = 0;
                v222[1] = v224;
                v226 = 16 * v224;
                if ( v226 )
                {
                  do
                  {
                    *(__m128i *)&v222[v225 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v223 + v225));
                    v225 += 16LL;
                  }
                  while ( v226 != v225 );
                }
                v266 = v22;
                v263 = v19;
                v262.m128i_i64[0] = (__int64)v222;
                v261 = (__m128i *)(v222 + 2);
                sub_186B220((void *)(v223 - 8));
                v222 = (_DWORD *)v262.m128i_i64[0];
                v18 = (char *)v261;
                v19 = v263;
                v22 = v266;
                v192 = &v261[*(unsigned int *)(v262.m128i_i64[0] + 4)];
                v191 = *(_DWORD *)(v262.m128i_i64[0] + 4) + 1;
              }
              else
              {
                v222[1] = 0;
                v192 = (__m128i *)(v222 + 2);
                v191 = 1;
              }
              *(_QWORD *)(v256 + 24) = v18;
              *v222 = v260[0];
            }
            else
            {
              v190 = v189;
              v191 = v189 + 1;
              v192 = (__m128i *)&v18[16 * v190];
            }
          }
          else
          {
            LODWORD(v261) = v22;
            *(_QWORD *)v260 = v19;
            v248 = (_QWORD *)sub_186B270(0x28u);
            v18 = (char *)(v248 + 1);
            v19 = *(__m128i **)v260;
            v22 = (unsigned int)v261;
            *v248 = 2;
            v192 = (__m128i *)(v248 + 1);
            *(_QWORD *)(v256 + 24) = v248 + 1;
            v191 = 1;
          }
          *v192 = _mm_unpacklo_epi64((__m128i)v177, (__m128i)v178);
          *((_DWORD *)v18 - 1) = v191;
        }
LABEL_225:
        v19 = (__m128i *)((char *)v19 + 8);
      }
      while ( (__m128i *)v255.m128i_i64[0] != v19 );
      v176 = (char *)ptr;
    }
    v20 = *(_QWORD **)(v256 + 24);
    if ( v20 && v22 < *((_DWORD *)v20 - 1) )
    {
      if ( v176 == v259 )
        goto LABEL_149;
      if ( !v176 )
        goto LABEL_149;
      sub_186B220(v176);
      v20 = *(_QWORD **)(v256 + 24);
      if ( v20 )
        goto LABEL_149;
      break;
    }
    v193 = sub_15DC610(
             *(_QWORD *)v256,
             *(_QWORD *)(v257 + 16),
             v270[0],
             (int)v176,
             (int)v18,
             (int)v19,
             v253,
             v254,
             v255.m128i_i32[0],
             v255.m128i_i32[2],
             v256,
             v257,
             v258,
             (int)v259,
             *(_QWORD *)v256,
             v261);
    v194 = v193;
    if ( v193 )
    {
      v195 = *(_DWORD *)(v193 + 8);
      v268[0] = v194;
      *(_DWORD *)(v194 + 8) = v195 + 2;
    }
    else
    {
      v268[0] = 0;
    }
    v196 = v256;
    sub_4B2920((_QWORD *)(v256 + 16), v268);
    v197 = *(_DWORD *)(v257 + 12);
    v255.m128i_i32[0] = *(_DWORD *)(v258 + 12);
    v198 = (((v255.m128i_i32[0] - v197) ^ (v197 << 8) ^ ((v197 - ((v255.m128i_i32[0] - v197) ^ (v197 << 8))) << 16))
          + ((v255.m128i_i32[0] - v197) ^ (v197 << 8))
          - v197)
         ^ ((v197 - ((v255.m128i_i32[0] - v197) ^ (v197 << 8))) << 10);
    v199 = *(unsigned int *)(v196 + 40);
    if ( 3 * (int)v199 < (unsigned int)(4 * (*(_DWORD *)(v196 + 44) + *(_DWORD *)(v196 + 48))) )
    {
      v262.m128i_i32[0] = (((v255.m128i_i32[0] - v197)
                          ^ (v197 << 8)
                          ^ ((v197 - ((v255.m128i_i32[0] - v197) ^ (v197 << 8))) << 16))
                         + ((v255.m128i_i32[0] - v197) ^ (v197 << 8))
                         - v197)
                        ^ ((v197 - ((v255.m128i_i32[0] - v197) ^ (v197 << 8))) << 10);
      LODWORD(v261) = 2 * v199;
      v255.m128i_i64[0] = 32LL * (unsigned int)(2 * v199);
      v234 = sub_186B270(v255.m128i_u64[0]);
      v235 = (unsigned int)v261;
      v198 = v262.m128i_i32[0];
      v200 = v234;
      if ( (_DWORD)v261 )
      {
        v236 = (_DWORD)v261 - 1;
        if ( (unsigned int)((_DWORD)v261 - 1) <= 2 )
        {
          *(_DWORD *)(v234 + 24) = 0;
          *(_DWORD *)(v234 + 56) = 0;
          *(_OWORD *)v234 = 0;
          *(_OWORD *)(v234 + 32) = 0;
        }
        else
        {
          v237 = v234 + ((unsigned __int64)((unsigned int)v261 >> 2) << 7);
          do
          {
            *(_DWORD *)(v234 + 24) = 0;
            v234 += 128;
            *(_OWORD *)(v234 - 128) = 0;
            *(_OWORD *)(v234 - 96) = 0;
            *(_OWORD *)(v234 - 64) = 0;
            *(_OWORD *)(v234 - 32) = 0;
            *(_DWORD *)(v234 - 72) = 0;
            *(_DWORD *)(v234 - 40) = 0;
            *(_DWORD *)(v234 - 8) = 0;
          }
          while ( v237 != v234 );
          if ( (v235 & 2) != 0 )
          {
            v238 = v200 + 32LL * (v235 & 0xFFFFFFFC);
            *(_DWORD *)(v238 + 24) = 0;
            *(_DWORD *)(v238 + 56) = 0;
            *(_OWORD *)v238 = 0;
            *(_OWORD *)(v238 + 32) = 0;
            if ( v235 - (v235 & 0xFFFFFFFC) != 2 )
            {
              *(_DWORD *)(v238 + 88) = 0;
              *(_OWORD *)(v238 + 64) = 0;
            }
          }
        }
      }
      else
      {
        v236 = -1;
      }
      LODWORD(v261) = v236;
      v239 = *(__m128i **)(v256 + 32);
      v240 = 2LL * *(unsigned int *)(v256 + 40);
      v241 = v239;
      v242 = &v239[v240];
      v201 = (__m128i *)(v200 + v255.m128i_i64[0]);
      if ( v239 != &v239[v240] )
      {
        do
        {
          if ( v241->m128i_i64[0] > 1uLL )
          {
            v243 = 32LL * (v241[1].m128i_i32[2] & (unsigned int)v236);
            v244 = (__m128i *)(v200 + v243);
            if ( v255.m128i_i64[0] == v243 )
            {
LABEL_338:
              if ( (__m128i *)v200 == v244 )
              {
LABEL_352:
                v267 = v236;
                LODWORD(v265) = v235;
                v264 = (__int64)v242;
                v266 = v198;
                v263 = (__m128i *)v200;
                v262.m128i_i64[0] = (__int64)v241;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v245 = (__m128i *)v200;
              while ( v245->m128i_i64[0] )
              {
                v245 += 2;
                if ( v244 == v245 )
                  goto LABEL_352;
              }
            }
            else
            {
              v245 = (__m128i *)(v200 + v243);
              while ( v245->m128i_i64[0] )
              {
                v245 += 2;
                if ( v201 == v245 )
                  goto LABEL_338;
              }
            }
            *v245 = _mm_loadu_si128(v241);
            v245[1] = _mm_loadu_si128(v241 + 1);
          }
          v241 += 2;
        }
        while ( v242 != v241 );
        v239 = *(__m128i **)(v256 + 32);
      }
      if ( v239 )
      {
        v266 = v235;
        LODWORD(v263) = v198;
        v262.m128i_i64[0] = v200;
        sub_186B220(v239);
        v235 = v266;
        v198 = (int)v263;
        v200 = v262.m128i_i64[0];
      }
      v246 = v256;
      *(_QWORD *)(v256 + 32) = v200;
      *(_DWORD *)(v246 + 40) = v235;
      *(_DWORD *)(v246 + 48) = 0;
    }
    else
    {
      v200 = *(_QWORD *)(v196 + 32);
      LODWORD(v261) = v199 - 1;
      v255.m128i_i64[0] = 32 * v199;
      v201 = (__m128i *)(v200 + 32 * v199);
    }
    v202 = 32LL * (v198 & (unsigned int)v261);
    v203 = _mm_loadh_ps((const double *)&v258);
    v204 = v200 + v202;
    if ( v202 != v255.m128i_i64[0] )
    {
      v205 = (__m128 *)(v200 + v202);
      v206 = nullptr;
      while ( 1 )
      {
        v207 = (_QWORD *)v205->m128_u64[0];
        if ( v205->m128_u64[0] > 1 )
        {
          if ( v205[1].m128_i32[2] == v198 && (_QWORD *)v257 == v207 && v258 == v205->m128_u64[1] )
          {
            v205[1].m128_u64[0] = v194;
            v205[1].m128_i32[2] = v198;
            *v205 = v203;
            goto LABEL_303;
          }
        }
        else
        {
          if ( !v207 )
          {
            if ( v206 )
              --*(_DWORD *)(v256 + 48);
            else
              v206 = v205;
            v247 = v256;
            v206[1].m128_u64[0] = v194;
            v206[1].m128_i32[2] = v198;
            *v206 = v203;
            ++*(_DWORD *)(v247 + 44);
            goto LABEL_303;
          }
          v206 = v205;
        }
        v205 += 2;
        if ( v205 == (__m128 *)v201 )
          goto LABEL_244;
      }
    }
    v206 = nullptr;
    while ( 1 )
    {
LABEL_244:
      if ( v204 == v200 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v208 = *(_QWORD **)v200;
      if ( *(_QWORD *)v200 <= 1u )
        break;
      if ( *(_DWORD *)(v200 + 24) == v198 && (_QWORD *)v257 == v208 && v258 == *(_QWORD *)(v200 + 8) )
      {
        *(_QWORD *)(v200 + 16) = v194;
        *(_DWORD *)(v200 + 24) = v198;
        *(__m128 *)v200 = v203;
        goto LABEL_303;
      }
LABEL_243:
      v200 += 32;
    }
    if ( v208 )
    {
      v206 = (__m128 *)v200;
      goto LABEL_243;
    }
    if ( v206 )
    {
      v200 = (__int64)v206;
      --*(_DWORD *)(v256 + 48);
    }
    v249 = v256;
    *(_QWORD *)(v200 + 16) = v194;
    *(_DWORD *)(v200 + 24) = v198;
    *(__m128 *)v200 = v203;
    ++*(_DWORD *)(v249 + 44);
LABEL_303:
    sub_4B1860(v194, *(__int64 *)v260);
    if ( ptr != v259 && ptr )
      sub_186B220(ptr);
LABEL_148:
    v20 = *(_QWORD **)(v256 + 24);
    --*((_DWORD *)v20 - 1);
LABEL_149:
    v22 = *((_DWORD *)v20 - 1);
LABEL_5:
    if ( v22 )
      continue;
    break;
  }
LABEL_40:
  v66 = *(_DWORD *)(a2 + 12);
  v255.m128i_i32[0] = *(_DWORD *)(v254 + 12);
  v67 = (((v255.m128i_i32[0] - v66) ^ (v66 << 8) ^ ((v66 - ((v255.m128i_i32[0] - v66) ^ (v66 << 8))) << 16))
       + ((v255.m128i_i32[0] - v66) ^ (v66 << 8))
       - v66)
      ^ ((v66 - ((v255.m128i_i32[0] - v66) ^ (v66 << 8))) << 10);
  v68 = *(unsigned int *)(v256 + 40);
  v69 = *(__int64 **)(v256 + 32);
  v70 = v68 - 1;
  v68 *= 32;
  v71 = (__int64 *)((char *)v69 + v68);
  v72 = 32LL * (v67 & v70);
  v73 = &v69[(unsigned __int64)v72 / 8];
  v74 = &v69[(unsigned __int64)v72 / 8];
  if ( v72 == v68 )
  {
LABEL_119:
    while ( v73 != v69 )
    {
      v143 = *v69;
      if ( (unsigned __int64)*v69 > 1 )
      {
        if ( *((_DWORD *)v69 + 6) == v67 && a2 == v143 && v254 == v69[1] )
        {
          v74 = v69;
          goto LABEL_113;
        }
      }
      else if ( !v143 )
      {
        break;
      }
      v69 += 4;
    }
LABEL_47:
    sub_1872CE0("");
    sub_1873130(114, 162);
  }
  while ( 2 )
  {
    v75 = *v74;
    if ( (unsigned __int64)*v74 <= 1 )
    {
      if ( !v75 )
        goto LABEL_47;
      goto LABEL_44;
    }
    if ( *((_DWORD *)v74 + 6) != v67 || a2 != v75 || v254 != v74[1] )
    {
LABEL_44:
      v74 += 4;
      if ( v71 == v74 )
        goto LABEL_119;
      continue;
    }
    break;
  }
LABEL_113:
  v140 = v74[2];
  if ( v140 )
    ++*(_DWORD *)(v140 + 8);
  sub_4B1860(*a4, a4[1]);
  v76 = v256;
  *a4 = v140;
  v77 = *(_DWORD *)(a5 + 16);
  result = *(_QWORD *)(v76 + 56);
  if ( !result )
  {
    if ( v77 <= 1 )
    {
      v80 = *(_QWORD **)(a5 + 8);
      if ( v80 )
      {
        LODWORD(v81) = 0;
        v79 = 0;
        goto LABEL_195;
      }
      v79 = 0;
LABEL_64:
      v91 = *(_DWORD *)(a5 + 24);
      *(_DWORD *)(a5 + 20) = v79;
      *(_DWORD *)(a5 + 16) = 2;
      *(_DWORD *)(a5 + 24) = v91 + 1;
      if ( v91 == -2 )
        goto LABEL_132;
      goto LABEL_65;
    }
    v159 = *(_DWORD *)(a5 + 24);
    *(_DWORD *)(a5 + 24) = v159 + 1;
    if ( v159 == -2 )
      goto LABEL_132;
    v92 = *(_DWORD *)(a6 + 16);
    goto LABEL_164;
  }
  v79 = *(_DWORD *)(result - 4);
  if ( v77 <= 1 || *(_DWORD *)(a5 + 20) < v79 )
  {
    v80 = *(_QWORD **)(a5 + 8);
    v81 = 2 * v79;
    if ( v80 )
    {
      v82 = *((unsigned int *)v80 - 1);
      if ( (unsigned int)v82 < (unsigned int)v81 )
        goto LABEL_57;
LABEL_195:
      *((_DWORD *)v80 - 1) = v81;
    }
    else if ( (_DWORD)v81 )
    {
      v82 = 0;
      v172 = (_QWORD *)sub_186B270(0x38u);
      v80 = v172 + 1;
      *v172 = 2;
      *(_QWORD *)(a5 + 8) = v172 + 1;
LABEL_57:
      while ( 1 )
      {
        v86 = *((_DWORD *)v80 - 2);
        if ( v86 >= (unsigned int)v81 )
          break;
        v83 = (3 * v86 + 1) >> 1;
        v84 = 8 * (v83 + ((3 * v86 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v86 + 8 >= (unsigned int)v84 || v86 >= v83 )
        {
LABEL_372:
          exception = (char **)__cxa_allocate_exception(0x28u);
          v255.m128i_i64[0] = (__int64)&ptr;
          sub_4B1880((__int64 *)&ptr, "Overflow encountered when expanding vector");
LABEL_370:
          v11 = v255.m128i_i64[0];
          v12 = (_QWORD *)v255.m128i_i64[0];
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v12);
          sub_233E40(v11);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v85 = (unsigned int *)sub_186B300(v80 - 1, v84);
        v80 = v85 + 2;
        *v85 = v83;
        *(_QWORD *)(a5 + 8) = v85 + 2;
      }
      v87 = v256;
      *((_DWORD *)v80 - 1) = v81;
      v88 = &v80[3 * v82];
      result = *(_QWORD *)(v87 + 56);
      v89 = &v80[3 * v81];
      if ( 24 * v82 != 24 * v81 )
      {
        v90 = v88;
        do
        {
          *v90 = 0;
          v90 += 3;
          *((_DWORD *)v90 - 2) = 0;
        }
        while ( v89 != v90 );
        if ( (((_BYTE)v89 - (_BYTE)v88) & 8) == 0 || (*((_DWORD *)v88 + 2) = 0, v88 += 3, v89 != v88) )
        {
          do
          {
            *((_DWORD *)v88 + 2) = 0;
            v88 += 6;
            *((_DWORD *)v88 - 4) = 0;
          }
          while ( v89 != v88 );
        }
      }
    }
    goto LABEL_64;
  }
  v157 = *(_DWORD *)(a5 + 24);
  *(_DWORD *)(a5 + 24) = v157 + 1;
  if ( v157 != -2 )
  {
    v92 = *(_DWORD *)(a6 + 16);
    goto LABEL_66;
  }
LABEL_132:
  v144 = *(_QWORD *)(a5 + 8);
  if ( v144 )
  {
    v145 = v144 + 24LL * *(unsigned int *)(v144 - 4);
    if ( v144 != v145 )
    {
      if ( ((24 * (unsigned __int8)*(_DWORD *)(v144 - 4)) & 8) == 0
        || (*(_DWORD *)(v144 + 16) = 0, v144 += 24, v145 != v144) )
      {
        do
        {
          *(_DWORD *)(v144 + 16) = 0;
          v144 += 48;
          *(_DWORD *)(v144 - 8) = 0;
        }
        while ( v145 != v144 );
      }
    }
  }
  *(_DWORD *)(a5 + 24) = 1;
LABEL_65:
  v92 = *(_DWORD *)(a6 + 16);
  if ( !result )
  {
LABEL_164:
    if ( v92 > 1 )
    {
      result = (unsigned int)(*(_DWORD *)(a6 + 24) + 1);
      *(_DWORD *)(a6 + 24) = result;
      if ( (_DWORD)result != -1 )
        return result;
      v155 = *(_QWORD **)(a6 + 8);
      result = 0;
      if ( !v155 )
      {
        *(_DWORD *)(a6 + 24) = 1;
        return result;
      }
      goto LABEL_152;
    }
    v96 = *(_QWORD **)(a6 + 8);
    if ( v96 )
    {
      result = 0;
      LODWORD(v95) = 0;
      v93 = 0;
      goto LABEL_198;
    }
    v233 = *(_DWORD *)(a6 + 24);
    *(_QWORD *)(a6 + 16) = 2;
    result = (unsigned int)(v233 + 1);
    *(_DWORD *)(a6 + 24) = result;
    if ( (_DWORD)result != -1 )
      return result;
    result = 0;
    goto LABEL_151;
  }
LABEL_66:
  v93 = *(_DWORD *)(result - 4);
  if ( v92 > 1 && *(_DWORD *)(a6 + 20) >= v93 )
  {
    v252 = *(_DWORD *)(a6 + 24);
    *(_DWORD *)(a6 + 24) = v252 + 1;
    if ( v252 != -2 )
      goto LABEL_83;
    v155 = *(_QWORD **)(a6 + 8);
    if ( !v155 )
    {
      *(_DWORD *)(a6 + 24) = 1;
      goto LABEL_83;
    }
    goto LABEL_152;
  }
  v94 = *(_QWORD **)(a6 + 8);
  v95 = 2 * v93;
  v96 = v94;
  if ( !v94 )
  {
    if ( (_DWORD)v95 )
    {
      v97 = 0;
      v173 = (_QWORD *)sub_186B270(0x38u);
      v94 = v173 + 1;
      *v173 = 2;
      *(_QWORD *)(a6 + 8) = v173 + 1;
LABEL_74:
      while ( 1 )
      {
        v101 = *((_DWORD *)v94 - 2);
        if ( v101 >= (unsigned int)v95 )
          break;
        v98 = (3 * v101 + 1) >> 1;
        v99 = 8 * (v98 + ((3 * v101 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v101 + 8 >= (unsigned int)v99 || v101 >= v98 )
          goto LABEL_372;
        v100 = (unsigned int *)sub_186B300(v94 - 1, v99);
        v94 = v100 + 2;
        *v100 = v98;
        *(_QWORD *)(a6 + 8) = v100 + 2;
      }
      v102 = v256;
      *((_DWORD *)v94 - 1) = v95;
      v103 = &v94[3 * v97];
      result = *(_QWORD *)(v102 + 56);
      v104 = &v94[3 * v95];
      if ( 24 * v97 != 24 * v95 )
      {
        v105 = v103;
        do
        {
          *v105 = 0;
          v105 += 3;
          *((_DWORD *)v105 - 2) = 0;
        }
        while ( v104 != v105 );
        if ( (((_BYTE)v104 - (_BYTE)v103) & 8) == 0 || (*((_DWORD *)v103 + 2) = 0, v103 += 3, v104 != v103) )
        {
          do
          {
            *((_DWORD *)v103 + 2) = 0;
            v103 += 6;
            *((_DWORD *)v103 - 4) = 0;
          }
          while ( v104 != v103 );
        }
      }
      goto LABEL_81;
    }
    v227 = *(_DWORD *)(a6 + 24);
    *(_DWORD *)(a6 + 20) = v93;
    *(_DWORD *)(a6 + 16) = 2;
    *(_DWORD *)(a6 + 24) = v227 + 1;
    if ( v227 != -2 )
    {
LABEL_83:
      v107 = *(_DWORD *)(result - 4);
      if ( v107 )
      {
        v108 = 0;
        v258 = v107;
        v255.m128i_i64[0] = (__int64)&ptr;
        v257 = a5 + 48;
        while ( 1 )
        {
          v110 = 16 * v108 + result;
          v111 = *(_QWORD *)(a5 + 32);
          v112 = *(_DWORD **)v110;
          v113 = *(_DWORD **)(v110 + 8);
          if ( v111 )
          {
            v114 = *(unsigned int *)(v111 - 4);
            if ( (_DWORD)v114 == *(_DWORD *)(v111 - 8) )
            {
              v132 = (unsigned int)(3 * v114 + 1) >> 1;
              v133 = 8 * v132 + 8;
              if ( 8 * (int)v114 + 8 >= (unsigned int)v133 || (unsigned int)v114 >= v132 )
              {
LABEL_369:
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_4B1880((__int64 *)v255.m128i_i64[0], "Overflow encountered when expanding vector");
                goto LABEL_370;
              }
              v134 = sub_186B270(v133);
              v135 = *(_QWORD *)(a5 + 32);
              v136 = (_DWORD *)v134;
              v111 = v134 + 8;
              if ( v135 )
              {
                v137 = *(unsigned int *)(v135 - 4);
                *(_DWORD *)(v134 + 4) = v137;
                v138 = 0;
                v139 = 8 * v137;
                if ( v139 )
                {
                  do
                  {
                    *(_QWORD *)&v136[v138 / 4 + 2] = *(_QWORD *)(v135 + v138);
                    v138 += 8LL;
                  }
                  while ( v139 != v138 );
                }
                *(_QWORD *)v260 = v136;
                v259 = (char *)v111;
                sub_186B220((void *)(v135 - 8));
                v136 = *(_DWORD **)v260;
                v111 = (__int64)v259;
                v115 = &v259[8 * *(unsigned int *)(*(_QWORD *)v260 + 4LL)];
              }
              else
              {
                *(_DWORD *)(v134 + 4) = 0;
                v115 = (char *)(v134 + 8);
              }
              *(_QWORD *)(a5 + 32) = v111;
              *v136 = v132;
            }
            else
            {
              v115 = (char *)(v111 + 8 * v114);
            }
          }
          else
          {
            v142 = (_QWORD *)sub_186B270(0x18u);
            v111 = (__int64)(v142 + 1);
            *v142 = 2;
            *(_QWORD *)(a5 + 32) = v142 + 1;
            v115 = (char *)(v142 + 1);
          }
          *(_QWORD *)v115 = (unsigned int)v108;
          ++*(_DWORD *)(v111 - 4);
          ptr = v112;
          if ( v112 )
            ++v112[2];
          v116 = 24 * v108;
          sub_4B2920((_QWORD *)v257, v255.m128i_i64[0]);
          v117 = 24 * v108 + *(_QWORD *)(a5 + 8);
          *(_DWORD *)(v117 + 16) = *(_DWORD *)(a5 + 24);
          v118 = *(_QWORD *)(a6 + 32);
          *(_QWORD *)v117 = v112;
          *(_DWORD *)(v117 + 8) = 1;
          *(_DWORD *)(a5 + 120) = 2;
          if ( v118 )
          {
            v119 = *(unsigned int *)(v118 - 4);
            if ( (_DWORD)v119 == *(_DWORD *)(v118 - 8) )
            {
              v123 = (unsigned int)(3 * v119 + 1) >> 1;
              v124 = v123;
              v125 = 8 * v123 + 8;
              if ( 8 * (int)v119 + 8 >= (unsigned int)v125 || (unsigned int)v119 >= v123 )
                goto LABEL_369;
              v126 = sub_186B270(v125);
              v127 = *(_QWORD *)(a6 + 32);
              v128 = (_DWORD *)v126;
              v118 = v126 + 8;
              if ( v127 )
              {
                v129 = *(unsigned int *)(v127 - 4);
                *(_DWORD *)(v126 + 4) = v129;
                v130 = 0;
                v131 = 8 * v129;
                if ( v131 )
                {
                  do
                  {
                    *(_QWORD *)&v128[v130 / 4 + 2] = *(_QWORD *)(v127 + v130);
                    v130 += 8LL;
                  }
                  while ( v131 != v130 );
                }
                *(_QWORD *)v260 = v128;
                v259 = (char *)v118;
                sub_186B220((void *)(v127 - 8));
                v128 = *(_DWORD **)v260;
                v118 = (__int64)v259;
                v120 = &v259[8 * *(unsigned int *)(*(_QWORD *)v260 + 4LL)];
              }
              else
              {
                *(_DWORD *)(v126 + 4) = 0;
                v120 = (char *)(v126 + 8);
              }
              *(_QWORD *)(a6 + 32) = v118;
              *v128 = v124;
            }
            else
            {
              v120 = (char *)(v118 + 8 * v119);
            }
          }
          else
          {
            v141 = (_QWORD *)sub_186B270(0x18u);
            v118 = (__int64)(v141 + 1);
            *v141 = 2;
            *(_QWORD *)(a6 + 32) = v141 + 1;
            v120 = (char *)(v141 + 1);
          }
          *(_QWORD *)v120 = (unsigned int)v108;
          ++*(_DWORD *)(v118 - 4);
          ptr = v113;
          if ( v113 )
          {
            ++v113[2];
            ++v108;
            sub_4B2920((_QWORD *)(a6 + 48), v255.m128i_i64[0]);
            result = *(unsigned int *)(a6 + 24);
            v109 = *(_QWORD *)(a6 + 8) + v116;
            *(_QWORD *)v109 = v113;
            *(_DWORD *)(v109 + 8) = 1;
            *(_DWORD *)(v109 + 16) = result;
            *(_DWORD *)(a6 + 120) = 2;
            if ( v258 == v108 )
              return result;
          }
          else
          {
            ++v108;
            sub_4B2920((_QWORD *)(a6 + 48), v255.m128i_i64[0]);
            v121 = *(_DWORD *)(a6 + 24);
            v122 = *(_QWORD *)(a6 + 8) + v116;
            *(_QWORD *)v122 = 0;
            *(_DWORD *)(v122 + 16) = v121;
            result = v258;
            *(_DWORD *)(v122 + 8) = 1;
            *(_DWORD *)(a6 + 120) = 2;
            if ( v108 == result )
              return result;
          }
          result = *(_QWORD *)(v256 + 56);
        }
      }
      return result;
    }
LABEL_151:
    v155 = v96;
    if ( !v96 )
    {
LABEL_156:
      *(_DWORD *)(a6 + 24) = 1;
      goto LABEL_82;
    }
LABEL_152:
    v156 = &v155[3 * *((unsigned int *)v155 - 1)];
    if ( v155 != v156 )
    {
      if ( ((24 * (unsigned __int8)*((_DWORD *)v155 - 1)) & 8) == 0
        || (*((_DWORD *)v155 + 4) = 0, v155 += 3, v156 != v155) )
      {
        do
        {
          *((_DWORD *)v155 + 4) = 0;
          v155 += 6;
          *((_DWORD *)v155 - 2) = 0;
        }
        while ( v156 != v155 );
      }
    }
    goto LABEL_156;
  }
  v97 = *((unsigned int *)v94 - 1);
  if ( (unsigned int)v97 < (unsigned int)v95 )
    goto LABEL_74;
LABEL_198:
  *((_DWORD *)v96 - 1) = v95;
LABEL_81:
  v106 = *(_DWORD *)(a6 + 24);
  *(_DWORD *)(a6 + 20) = v93;
  *(_DWORD *)(a6 + 16) = 2;
  *(_DWORD *)(a6 + 24) = v106 + 1;
  if ( v106 == -2 )
  {
    v96 = *(_QWORD **)(a6 + 8);
    goto LABEL_151;
  }
LABEL_82:
  if ( result )
    goto LABEL_83;
  return result;
}

