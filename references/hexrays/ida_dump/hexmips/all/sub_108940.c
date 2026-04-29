unsigned __int64 __fastcall sub_108940(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  const __m128i **v19; // r15
  __int64 v20; // rbp
  const __m128i *v21; // rax
  __int64 v22; // r9
  __int64 m128i_i64; // rcx
  int v24; // ebp
  unsigned __int64 v25; // rdx
  __m128i *v26; // r12
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128i *v40; // rcx
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // r15
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rdx
  unsigned __int64 v52; // rbx
  _QWORD *v53; // rbx
  _QWORD *v54; // r12
  _QWORD *v55; // rdx
  __int64 *v56; // rax
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rbx
  __int64 *v65; // rbp
  __int64 v66; // rdx
  __int64 *v67; // rdi
  __int64 *v68; // rdi
  __int64 v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rbp
  __int64 v72; // rbx
  __int64 v73; // rbp
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdi
  __m128i si128; // xmm2
  unsigned __int64 v78; // rdx
  __m128i v79; // xmm1
  __int64 v80; // rdx
  __int64 v81; // rdi
  __m128i v82; // xmm1
  __m128i v83; // xmm2
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rdi
  __m128i v91; // xmm1
  __m128i v92; // xmm2
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __m128i *v98; // rbx
  __int64 v99; // r8
  __int64 v100; // r9
  __m128i *v101; // rbx
  __m128 v102; // xmm6
  int v103; // r15d
  __int64 v104; // rax
  int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdi
  __m128i v111; // xmm7
  __m128i v112; // xmm6
  unsigned __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdi
  __m128i v118; // xmm7
  __m128i v119; // xmm6
  unsigned __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  void (*v124)(); // rax
  unsigned __int64 v125; // rbp
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rbx
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rbx
  __int64 *v131; // rbp
  __int64 v132; // rax
  __int64 *v133; // rdi
  __int64 *v134; // rdi
  __int64 v135; // rax
  __m128i v136; // xmm0
  __int64 *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __m128i v141; // xmm0
  __int64 *v142; // rbx
  __int64 *v143; // rdi
  unsigned __int64 v144; // rdx
  _QWORD *v145; // rax
  _QWORD *v146; // rcx
  _QWORD *i; // rax
  __int64 *v148; // rbp
  __int64 v149; // rax
  __int64 *v150; // rdi
  __int64 *v151; // rdi
  unsigned __int64 v152; // r15
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  unsigned __int64 v155; // r12
  __int64 v156; // rdi
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rdx
  __int64 v159; // rdi
  __int64 v160; // rcx
  __int64 (__fastcall **v161)(); // rdx
  const __m128i *v162; // rdi
  __int64 v163; // rax
  __int64 v164; // r9
  __int64 v165; // rsi
  __m128i v166; // xmm0
  bool v167; // cf
  __int64 (__fastcall **v168)(); // rcx
  __int64 (__fastcall **v169)(); // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rdx
  __m128i v173; // xmm0
  unsigned __int64 v174; // rax
  __m128i v175; // xmm0
  unsigned __int64 v176; // rdx
  _QWORD *v177; // rdx
  __int64 v178; // rcx
  unsigned __int64 v179; // rsi
  _QWORD *v180; // rdx
  __int64 v181; // rcx
  _QWORD *v182; // rsi
  _QWORD *v183; // rax
  __int64 v184; // rdx
  unsigned __int64 v185; // rcx
  int v186; // r9d
  __int64 v187; // rdx
  __int64 v188; // r10
  unsigned __int64 v189; // rbp
  __int64 v190; // rax
  __m128i v191; // xmm0
  unsigned __int64 v192; // r12
  __int64 *v193; // rax
  __int64 v194; // rdi
  __int64 v195; // rax
  __m128i v196; // xmm0
  unsigned __int64 v197; // r11
  __int64 v198; // r13
  __int64 v199; // rax
  unsigned __int64 v200; // r15
  const __m128i *v201; // rdx
  __m128i *v202; // rdx
  unsigned __int64 v203; // rdx
  __int64 *v204; // r13
  __int64 v205; // rax
  __int64 *v206; // rdi
  __int64 *v207; // rdi
  __int64 v208; // rax
  __m128i v209; // xmm0
  __int64 v210; // rdi
  __int64 v211; // rdx
  __int64 v212; // rax
  __m128i *v213; // rcx
  const __m128i *v214; // rdi
  __int64 v215; // r11
  __int64 v216; // rax
  __int64 (__fastcall **v217)(); // r9
  char v218; // r8
  __int64 v219; // r10
  __int64 v220; // rsi
  __m128i v221; // xmm0
  _QWORD *v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rax
  __m128i *v225; // rcx
  const __m128i *v226; // rdi
  __int64 v227; // rax
  __int64 v228; // rdx
  __m128i v229; // xmm0
  __m128i *v230; // rcx
  __int64 v231; // rax
  __int64 v232; // r13
  const __m128i *v233; // rdi
  __int64 v234; // rax
  unsigned __int64 v235; // rdx
  __m128i v236; // xmm0
  __int64 v237; // rax
  __m128i v238; // xmm0
  __int64 v239; // rax
  const __m128i *v240; // rdi
  __int64 v241; // rdx
  __int64 v242; // rax
  __m128i *v243; // rsi
  const __m128i *v244; // rcx
  __int64 v245; // rax
  __m128i v246; // xmm0
  __int64 v247; // rax
  const __m128i *v248; // rdi
  __int64 v249; // rdx
  __int64 v250; // rax
  __int64 v251; // r13
  const __m128i *v252; // rcx
  __int64 v253; // rax
  __m128i v254; // xmm0
  __m128 v255; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v256; // [rsp+10h] [rbp-3A8h] BYREF
  __m128i *v257; // [rsp+28h] [rbp-390h] BYREF
  __int64 (__fastcall **v258)(); // [rsp+30h] [rbp-388h] BYREF
  __int64 (__fastcall **v259)(); // [rsp+38h] [rbp-380h]
  _OWORD *v260; // [rsp+40h] [rbp-378h]
  __int64 v261; // [rsp+48h] [rbp-370h]
  __int64 v262; // [rsp+50h] [rbp-368h]
  unsigned __int64 v263; // [rsp+58h] [rbp-360h]
  __int64 v264; // [rsp+60h] [rbp-358h]
  __m128i *v265; // [rsp+68h] [rbp-350h]
  __int64 *v266; // [rsp+70h] [rbp-348h]
  size_t n; // [rsp+78h] [rbp-340h]
  const __m128i *v268; // [rsp+88h] [rbp-330h] BYREF
  const __m128i *v269; // [rsp+90h] [rbp-328h] BYREF
  const __m128i *v270; // [rsp+98h] [rbp-320h] BYREF
  const __m128i *v271; // [rsp+A0h] [rbp-318h] BYREF
  const __m128i *v272; // [rsp+A8h] [rbp-310h] BYREF
  const __m128i *v273; // [rsp+B0h] [rbp-308h] BYREF
  const __m128i *v274; // [rsp+B8h] [rbp-300h] BYREF
  const __m128i *v275; // [rsp+C0h] [rbp-2F8h] BYREF
  const __m128i *v276; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v277; // [rsp+D0h] [rbp-2E8h] BYREF
  char v278; // [rsp+D8h] [rbp-2E0h]
  __int64 v279; // [rsp+E0h] [rbp-2D8h] BYREF
  char v280; // [rsp+E8h] [rbp-2D0h]
  __m128i v281; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v282; // [rsp+100h] [rbp-2B8h] BYREF
  char v283; // [rsp+108h] [rbp-2B0h]
  __int64 v284; // [rsp+110h] [rbp-2A8h] BYREF
  char v285; // [rsp+118h] [rbp-2A0h]
  __int64 v286; // [rsp+120h] [rbp-298h] BYREF
  char v287; // [rsp+128h] [rbp-290h]
  __int64 v288; // [rsp+130h] [rbp-288h] BYREF
  char v289; // [rsp+138h] [rbp-280h]
  __int64 v290; // [rsp+140h] [rbp-278h] BYREF
  char v291; // [rsp+148h] [rbp-270h]
  _OWORD *v292; // [rsp+150h] [rbp-268h] BYREF
  char v293; // [rsp+158h] [rbp-260h]
  __m128i v294; // [rsp+160h] [rbp-258h] BYREF
  __m128i v295; // [rsp+170h] [rbp-248h] BYREF
  __m128i v296; // [rsp+180h] [rbp-238h] BYREF
  __m128i v297; // [rsp+190h] [rbp-228h] BYREF
  _OWORD *v298; // [rsp+1A0h] [rbp-218h]
  __int64 v299; // [rsp+1B0h] [rbp-208h] BYREF
  __int128 v300; // [rsp+1B8h] [rbp-200h]
  __m128i v301; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v302; // [rsp+1E0h] [rbp-1D8h]
  int v303; // [rsp+1E8h] [rbp-1D0h]
  __m128i v304; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v305; // [rsp+200h] [rbp-1B8h]
  int v306; // [rsp+208h] [rbp-1B0h]
  __m128i v307; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v308; // [rsp+220h] [rbp-198h]
  int v309; // [rsp+228h] [rbp-190h]
  __m128i v310; // [rsp+230h] [rbp-188h] BYREF
  __m128i *v311; // [rsp+240h] [rbp-178h]
  __m128i v312; // [rsp+248h] [rbp-170h]
  __m128i v313; // [rsp+260h] [rbp-158h] BYREF
  __m128i *v314; // [rsp+270h] [rbp-148h]
  __m128i v315; // [rsp+278h] [rbp-140h]
  __m128i v316; // [rsp+290h] [rbp-128h] BYREF
  __m128i *v317; // [rsp+2A0h] [rbp-118h]
  __m128i v318; // [rsp+2A8h] [rbp-110h]
  __m128i v319; // [rsp+2C0h] [rbp-F8h] BYREF
  __m128i *v320; // [rsp+2D0h] [rbp-E8h]
  __m128i v321; // [rsp+2D8h] [rbp-E0h]
  __m128i v322; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i *v323; // [rsp+300h] [rbp-B8h]
  __m128i v324; // [rsp+308h] [rbp-B0h]
  char v325; // [rsp+318h] [rbp-A0h]
  __int64 v326; // [rsp+320h] [rbp-98h]
  __int64 v327[2]; // [rsp+328h] [rbp-90h] BYREF
  void *v328; // [rsp+338h] [rbp-80h]
  __int128 v329; // [rsp+340h] [rbp-78h]
  __m128i v330; // [rsp+350h] [rbp-68h] BYREF
  __int64 v331; // [rsp+360h] [rbp-58h]
  unsigned __int64 v332; // [rsp+368h] [rbp-50h]
  int v333; // [rsp+370h] [rbp-48h]
  char v334; // [rsp+374h] [rbp-44h]
  char v335; // [rsp+375h] [rbp-43h]
  unsigned __int64 v336; // [rsp+378h] [rbp-40h]

  v336 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 320);
  v297 = 0u;
  v8 = *(int *)(v7 + 64);
  v9 = v7;
  v261 = *(_QWORD *)(v7 + 1504);
  v262 = *(_QWORD *)(v7 + 136);
  v260 = (_OWORD *)*(int *)(v7 + 128);
  v298 = v260;
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
    goto LABEL_87;
  v10 = *(_QWORD *)(a1 + 88);
  v263 = (int)v8;
  if ( (int)v8 != v10 )
  {
    v299 = 0;
    v300 = 0;
    if ( (int)v8 < v10 )
    {
      v192 = (int)v8;
      do
      {
        v193 = (__int64 *)(*(_QWORD *)(a1 + 80) + 24 * v192);
        v194 = *v193;
        if ( *v193 )
        {
          v193[1] = 0;
          qfree(v194);
        }
        ++v192;
      }
      while ( v192 < v10 );
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(a1 + 96);
      v13 = a1 + 80;
      if ( (unsigned __int64)&v299 < v11 || (unsigned __int64)&v299 >= v11 + 24 * v12 )
      {
        if ( v12 < v263 )
        {
          v257 = &v297;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v13, v11, v263, 24);
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v263;
        if ( v10 < v263 )
        {
          v14 = 24 * v10;
          do
          {
            ++v10;
            v15 = v14 + *(_QWORD *)(a1 + 80);
            v14 += 24;
            *(_QWORD *)v15 = 0;
            *(_OWORD *)(v15 + 8) = 0;
          }
          while ( a4 != (_QWORD *)v10 );
        }
      }
      else
      {
        if ( v12 < v263 )
        {
          v257 = &v297;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v13, v11, v263, 24);
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v263;
        if ( v10 < v263 )
        {
          v171 = 24 * v10;
          do
          {
            ++v10;
            v172 = v171 + *(_QWORD *)(a1 + 80);
            v171 += 24;
            *(_QWORD *)v172 = 0;
            *(_OWORD *)(v172 + 8) = 0;
          }
          while ( a4 != (_QWORD *)v10 );
        }
      }
    }
    v7 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 88) = v263;
    v9 = v7;
    if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
      goto LABEL_87;
  }
  if ( !*(_QWORD *)(v7 + 440) )
    goto LABEL_26;
  a4 = &v277;
  v16 = 0;
  v17 = 0;
  v255.m128_u64[0] = (unsigned __int64)&v277;
  do
  {
    v18 = *(_QWORD *)(v7 + 432) + 104 * v17;
    if ( *(_DWORD *)(v18 + 92) )
      goto LABEL_14;
    if ( *(_DWORD *)v18 == 1 )
    {
      v19 = *(const __m128i ***)(a1 + 80);
      v20 = *(_QWORD *)(v18 + 8);
      v21 = *v19;
      v22 = (int)v20;
      m128i_i64 = (__int64)(*v19)[(_QWORD)v19[1]].m128i_i64;
      if ( *v19 == (const __m128i *)m128i_i64 )
        goto LABEL_130;
      while ( v21->m128i_i8[8] != 5 || (int)v20 != v21->m128i_i64[0] )
      {
        if ( (const __m128i *)m128i_i64 == ++v21 )
          goto LABEL_130;
      }
      if ( (const __m128i *)m128i_i64 == v21 )
      {
LABEL_130:
        v144 = (unsigned __int64)v19[1]->m128i_u64 + 1;
        if ( (unsigned __int64)v19[2] < v144 )
        {
          v159 = *(_QWORD *)(a1 + 80);
          v258 = (__int64 (__fastcall **)())v19[2];
          v256.m128i_i64[0] = (int)v20;
          v257 = &v297;
          v160 = qvector_reserve(v159, 0, v144, 16);
          v161 = (__int64 (__fastcall **)())v19[2];
          v162 = *v19;
          v163 = (__int64)&v19[1][-1].m128i_i64[1] + 7;
          v19[2] = (const __m128i *)v258;
          v164 = v256.m128i_i64[0];
          if ( v163 >= 0 )
          {
            v165 = v160;
            do
            {
              v166 = _mm_loadu_si128(v162);
              v165 += 16;
              ++v162;
              *(__m128i *)(v165 - 16) = v166;
              v167 = v163-- == 0;
            }
            while ( !v167 );
            v162 = *v19;
          }
          v259 = v161;
          v258 = (__int64 (__fastcall **)())v160;
          v256.m128i_i64[0] = v164;
          v257 = &v297;
          qfree(v162);
          v168 = v258;
          v169 = v259;
          v22 = v256.m128i_i64[0];
          v170 = 2LL * (_QWORD)v19[1];
          *v19 = (const __m128i *)v258;
          v19[2] = (const __m128i *)v169;
          m128i_i64 = (__int64)&v168[v170];
        }
        *(_QWORD *)m128i_i64 = v22;
        *(_BYTE *)(m128i_i64 + 8) = 5;
        v19[1] = (const __m128i *)((char *)v19[1] + 1);
      }
      v277 = v22;
      v278 = 5;
      v268 = (const __m128i *)v255.m128_u64[0];
      v257 = &v297;
      sub_1078A0(&v297, v255.m128_i64[0], &v268);
      v24 = *(_DWORD *)(v18 + 88) + v20;
      v280 = 5;
      v269 = (const __m128i *)&v279;
      v279 = v24;
      sub_1078A0(&v297, (__int64)&v279, &v269);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v18 != 2 )
      goto LABEL_14;
    v322 = 0u;
    v186 = *(_DWORD *)(a1 + 316);
    v323 = (__m128i *)v260;
    v187 = *(unsigned int *)(v18 + 88);
    v257 = &v297;
    sub_107D10((_QWORD *)v7, v18, v187, &v297, &v322, v186);
    v188 = v322.m128i_i64[0];
    if ( !v322.m128i_i64[0] )
      goto LABEL_24;
    if ( !v322.m128i_i64[1] )
    {
      v189 = *(_QWORD *)v322.m128i_i64[0];
LABEL_204:
      *(_QWORD *)v188 = v188 & 0xFFFFFFFFFFFFFFFCLL | v189 & 3;
      v190 = v322.m128i_i64[0];
      v191 = (__m128i)v322.m128i_u64[0];
      *(_QWORD *)v322.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v190 + 8) = _mm_unpacklo_epi64(v191, v191);
      *(_QWORD *)v322.m128i_i64[0] |= 2uLL;
      goto LABEL_232;
    }
    v197 = *(_QWORD *)(v322.m128i_i64[0] + 8);
    if ( v322.m128i_i64[0] == v197 )
    {
      v189 = *(_QWORD *)v322.m128i_i64[0];
    }
    else
    {
      do
      {
        v198 = *(_QWORD *)(a1 + 80);
        a6 = *(_QWORD *)(v197 + 24);
        a5 = *(unsigned __int8 *)(v197 + 32);
        v199 = *(_QWORD *)(v198 + 8);
        v200 = *(_QWORD *)(v198 + 16);
        if ( v200 < v199 + 1 )
        {
          v210 = *(_QWORD *)(a1 + 80);
          v264 = v188;
          LOBYTE(v259) = a5;
          v258 = (__int64 (__fastcall **)())a6;
          v256.m128i_i64[0] = v197;
          v211 = qvector_reserve(v210, 0, v199 + 1, 16);
          v212 = *(_QWORD *)(v198 + 8);
          v213 = *(__m128i **)(v198 + 16);
          *(_QWORD *)(v198 + 16) = v200;
          v214 = *(const __m128i **)v198;
          v215 = v256.m128i_i64[0];
          v216 = v212 - 1;
          v217 = v258;
          v218 = (char)v259;
          v219 = v264;
          if ( v216 >= 0 )
          {
            v220 = v211;
            do
            {
              v221 = _mm_loadu_si128(v214);
              v220 += 16;
              ++v214;
              *(__m128i *)(v220 - 16) = v221;
              v167 = v216-- == 0;
            }
            while ( !v167 );
            v214 = *(const __m128i **)v198;
          }
          v266 = (__int64 *)v219;
          v265 = v213;
          v264 = v211;
          LOBYTE(v259) = v218;
          v258 = v217;
          v256.m128i_i64[0] = v215;
          qfree(v214);
          v201 = (const __m128i *)v264;
          a4 = v265->m128i_i64;
          v199 = *(_QWORD *)(v198 + 8);
          v188 = (__int64)v266;
          a5 = (unsigned __int8)v259;
          a6 = (__int64)v258;
          *(_QWORD *)v198 = v264;
          *(_QWORD *)(v198 + 16) = a4;
          v197 = v256.m128i_i64[0];
        }
        else
        {
          v201 = *(const __m128i **)v198;
        }
        v202 = (__m128i *)&v201[v199];
        v202->m128i_i64[0] = a6;
        v202->m128i_i8[8] = a5;
        ++*(_QWORD *)(v198 + 8);
        if ( (*(_QWORD *)v197 & 2) == 0 )
        {
          v203 = *(_QWORD *)(v197 + 16);
          if ( (*(_BYTE *)v203 & 2) != 0 )
          {
            v222 = (_QWORD *)(*(_QWORD *)v197 & 0xFFFFFFFFFFFFFFFCLL);
            v223 = *v222;
            if ( (*v222 & 2) != 0 || v222[2] != v197 )
            {
LABEL_240:
              v197 = (unsigned __int64)v222;
            }
            else
            {
              while ( 1 )
              {
                v197 = v223 & 0xFFFFFFFFFFFFFFFCLL;
                v223 = *(_QWORD *)(v223 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v223 & 2) != 0 )
                  break;
                a4 = v222;
                v222 = (_QWORD *)v197;
                if ( *(_QWORD **)(v197 + 16) != a4 )
                  goto LABEL_240;
              }
            }
          }
          else
          {
            do
            {
              v197 = v203;
              v203 = *(_QWORD *)(v203 + 8);
            }
            while ( (*(_BYTE *)v203 & 2) == 0 );
          }
        }
      }
      while ( v188 != v197 );
      v188 = v322.m128i_i64[0];
      if ( !v322.m128i_i64[0] )
        goto LABEL_24;
      v189 = *(_QWORD *)v322.m128i_i64[0];
      if ( !v322.m128i_i64[1] )
        goto LABEL_204;
    }
    v204 = (__int64 *)(v189 & 0xFFFFFFFFFFFFFFFCLL);
    v205 = *(_QWORD *)(v189 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v205 & 2) == 0 )
    {
      v206 = (__int64 *)v204[1];
      if ( (*(_BYTE *)v206 & 2) != 0 )
      {
        v207 = (__int64 *)v204[2];
        if ( (*(_BYTE *)v207 & 2) != 0 )
          goto LABEL_271;
      }
      else
      {
        sub_FDE00(v206);
        v207 = (__int64 *)v204[2];
        if ( (*(_BYTE *)v207 & 2) != 0 )
          goto LABEL_227;
      }
      sub_FDE00(v207);
LABEL_227:
      v205 = *v204;
      if ( (*v204 & 2) != 0 )
      {
LABEL_228:
        if ( v189 > 3 )
          qfree(v189 & 0xFFFFFFFFFFFFFFFCLL);
        v188 = v322.m128i_i64[0];
        goto LABEL_231;
      }
LABEL_271:
      *v204 = v205 | 2;
      goto LABEL_228;
    }
LABEL_231:
    *(_QWORD *)v188 = v188 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v188 & 3LL;
    v208 = v322.m128i_i64[0];
    v209 = (__m128i)v322.m128i_u64[0];
    *(_QWORD *)v322.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v208 + 8) = _mm_unpacklo_epi64(v209, v209);
    *(_QWORD *)v322.m128i_i64[0] |= 2uLL;
    v322.m128i_i64[1] = 0;
LABEL_232:
    if ( v322.m128i_i64[0] )
      qfree(v322.m128i_i64[0]);
LABEL_24:
    v7 = *(_QWORD *)(a1 + 320);
LABEL_14:
    ++v16;
    v9 = v7;
    v17 = v16;
  }
  while ( (unsigned __int64)v16 < *(_QWORD *)(v7 + 440) );
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
  {
LABEL_87:
    v258 = &off_4BD9E0;
    v259 = &off_4BD9E0 - 6;
    v257 = &v297;
    v255 = _mm_loadh_ps((const double *)&v258);
    v256 = (__m128i)_mm_loadh_ps((const double *)&v257);
    if ( (int)v8 > 0 )
    {
      v71 = 5 * v8;
      v72 = 0;
      v73 = 8 * v71;
      do
      {
        v74 = *(_QWORD *)(v9 + 1440);
        v75 = *(_QWORD *)(v9 + 128);
        v302 = v9;
        v76 = *(_QWORD *)(a1 + 176);
        si128 = _mm_load_si128((const __m128i *)&v255);
        v303 = 4;
        v78 = v74 + v75;
        v79 = _mm_load_si128(&v256);
        v311 = &v301;
        v310 = si128;
        v301 = v79;
        v312 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v78);
        sub_3126D0(v72 + v76 + 16, &v310.m128i_u64[1], v78, a4, a5, a6, v255.m128_u64[0]);
        v80 = *(_QWORD *)(a1 + 320);
        v81 = *(_QWORD *)(a1 + 200);
        v306 = 4;
        v82 = _mm_load_si128(&v256);
        v83 = _mm_load_si128((const __m128i *)&v255);
        v314 = &v304;
        v84 = *(_QWORD *)(v80 + 1440);
        v85 = *(_QWORD *)(v80 + 128);
        v305 = v80;
        v304 = v82;
        v86 = v84 + v85;
        v313 = v83;
        v315 = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v86);
        sub_3126D0(v72 + v81 + 16, &v313.m128i_u64[1], v80, v86, v87, v88, v255.m128_u64[0]);
        v89 = *(_QWORD *)(a1 + 320);
        v90 = *(_QWORD *)(a1 + 224);
        v91 = _mm_load_si128(&v256);
        v92 = _mm_load_si128((const __m128i *)&v255);
        v309 = 4;
        v93 = *(_QWORD *)(v89 + 128);
        v308 = v89;
        v94 = *(_QWORD *)(v89 + 1440);
        v317 = &v307;
        v307 = v91;
        v95 = v94 + v93;
        v316 = v92;
        v318 = _mm_unpacklo_epi64((__m128i)v94, (__m128i)v95);
        sub_3126D0(v72 + v90 + 16, &v316.m128i_u64[1], v95, &v307, v96, v97, v255.m128_u64[0]);
        v72 += 40;
        v9 = *(_QWORD *)(a1 + 320);
      }
      while ( v73 != v72 );
    }
    v98 = v257;
    sub_FFC50((__int64)v257, v9, a1 + 264, 4, a5, a6);
    sub_FFC50((__int64)v98, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 320) + 208LL, 4, v99, v100);
    goto LABEL_91;
  }
LABEL_26:
  v319 = 0u;
  v320 = (__m128i *)v260;
  if ( (int)v8 > 0 )
  {
    v258 = nullptr;
    v256.m128i_i64[0] = (__int64)&v319;
    v255.m128_u64[0] = (unsigned __int64)&v322;
    while ( 2 )
    {
      if ( (unsigned int)v258 >= *(_DWORD *)(v9 + 64) )
      {
        v257 = &v297;
        v265 = &v319;
        sub_FDB70();
      }
      v25 = v319.m128i_i64[0];
      v26 = *(__m128i **)(*(_QWORD *)(v9 + 528) + 8LL * (_QWORD)v258);
      if ( !v319.m128i_i64[0] )
        goto LABEL_123;
      v27 = *(_QWORD *)v319.m128i_i64[0];
      if ( !v319.m128i_i64[1] )
      {
        *(_QWORD *)v319.m128i_i64[0] = *(_QWORD *)v319.m128i_i64[0] & 3LL | v319.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        v28 = v319.m128i_i64[0];
        v29 = (__m128i)v319.m128i_u64[0];
        *(_QWORD *)v319.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v29, v29);
        *(_QWORD *)v319.m128i_i64[0] |= 2uLL;
        goto LABEL_32;
      }
      v142 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      v139 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v139 & 2) == 0 )
      {
        v143 = (__int64 *)v142[1];
        if ( (*(_BYTE *)v143 & 2) != 0 )
        {
          v138 = (__int64 *)v142[2];
          if ( (*(_BYTE *)v138 & 2) == 0 )
            goto LABEL_117;
        }
        else
        {
          sub_FDE00(v143);
          v138 = (__int64 *)v142[2];
          if ( (*(_BYTE *)v138 & 2) == 0 )
LABEL_117:
            sub_FDE00(v138);
          v139 = *v142;
          if ( (*v142 & 2) != 0 )
          {
LABEL_119:
            if ( v27 > 3 )
              qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
            v25 = v319.m128i_i64[0];
            v27 = *(_QWORD *)v319.m128i_i64[0];
            goto LABEL_122;
          }
        }
        *v142 = v139 | 2;
        goto LABEL_119;
      }
LABEL_122:
      *(_QWORD *)v25 = v27 & 3 | v25 & 0xFFFFFFFFFFFFFFFCLL;
      v140 = v319.m128i_i64[0];
      v141 = (__m128i)v319.m128i_u64[0];
      *(_QWORD *)v319.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v140 + 8) = _mm_unpacklo_epi64(v141, v141);
      *(_QWORD *)v319.m128i_i64[0] |= 2uLL;
LABEL_123:
      v319.m128i_i64[1] = 0;
LABEL_32:
      v30 = *(_QWORD *)(a1 + 80);
      LODWORD(v259) = *(_DWORD *)(a1 + 316) ^ 1;
      v31 = (__int64 *)(v30 + 24LL * (_QWORD)v258);
      if ( (v26[1].m128i_i32[2] & 0x600) != 0x200 )
      {
        if ( !under_debugger )
        {
          v257 = &v297;
          v265 = &v319;
          sub_37E160(50139);
        }
        BUG();
      }
      v32 = 40LL * v26[4].m128i_i32[2];
      if ( ((unsigned __int8)v259 & 1) != 0 )
        v33 = *(_QWORD *)(a1 + 176) + v32;
      else
        v33 = *(_QWORD *)(a1 + 200) + v32;
      v34 = v26[4].m128i_i64[0];
      v257 = &v297;
      v265 = (__m128i *)v256.m128i_i64[0];
      sub_FFCF0(v256.m128i_i64[0], v34, (_QWORD *)v33, (int)v259);
      v35 = v26[4].m128i_i64[0];
      v36 = v26[4].m128i_i32[2];
      v323 = v26;
      v322.m128i_i64[1] = v35;
      LODWORD(v264) = v36;
      v326 = v256.m128i_i64[0];
      v324 = 0u;
      v325 = 0;
      v322.m128i_i64[0] = (__int64)off_4BDB40;
      v266 = v327;
      v257 = &v297;
      sub_5FE00(v327, v33);
      v328 = nullptr;
      v329 = 0;
      v40 = *(__m128i **)(v33 + 24);
      if ( v40 )
      {
        v257 = *(__m128i **)(v33 + 24);
        n = 16LL * (_QWORD)v40;
        v328 = (void *)qalloc_or_throw(16LL * (_QWORD)v40);
        *((_QWORD *)&v329 + 1) = v257;
        memcpy(v328, *(const void **)(v33 + 16), n);
        v40 = v257;
        *(_QWORD *)&v329 = v257;
      }
      v41 = *(_QWORD *)(v326 + 16);
      v330 = 0u;
      v331 = v41;
      v42 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v322.m128i_i64[1] + 1504) + 80LL));
      v334 = (unsigned __int8)v259 & 1;
      v335 = 0;
      v333 = (int)v259;
      v332 = _mm_unpacklo_epi32(v42, _mm_cvtsi32_si128(v264)).m128i_u64[0];
      v43 = v26[3].m128i_i64[0];
      if ( v43 )
      {
        if ( ((unsigned __int8)v259 & 1) != 0 || (v43 = v26[3].m128i_i64[1]) != 0 )
        {
          while ( 1 )
          {
            sub_11A700(v43, &v322, v37, v40, v38, v39);
            if ( ((unsigned __int8)v259 & 1) == 0 )
              break;
            if ( !*(_QWORD *)(v43 + 8) )
              goto LABEL_47;
            v43 = *(_QWORD *)(v43 + 8);
          }
          while ( 1 )
          {
            v43 = *(_QWORD *)(v43 + 16);
            if ( !v43 )
              break;
            sub_11A700(v43, &v322, v37, v40, v38, v39);
          }
LABEL_47:
          v44 = v26[4].m128i_i32[2];
          if ( ((unsigned __int8)v259 & 1) != 0 )
            v45 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 40 * v44);
          else
LABEL_48:
            v45 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 40 * v44);
          sub_FFCF0(v256.m128i_i64[0], v26[4].m128i_i64[0], v45, (int)v259);
          goto LABEL_50;
        }
        v44 = v26[4].m128i_i32[2];
        goto LABEL_48;
      }
      sub_107520(&v322, (__int64)v266, 0);
LABEL_50:
      v46 = v31[1];
      v47 = *v31;
      v48 = *v31;
      if ( 16 * v46 )
      {
        do
        {
          v316.m128i_i64[0] = v47;
          sub_106EE0(&v330, v47, (const __m128i **)&v316);
          v46 = v31[1];
          v48 = *v31;
          v47 += 16;
        }
        while ( v47 != *v31 + 16 * v46 );
      }
      v49 = v330.m128i_u64[1];
      if ( v330.m128i_i64[1] == v46 )
        goto LABEL_55;
      v281.m128i_i64[0] = -1;
      v281.m128i_i8[8] = 0;
      if ( v330.m128i_i64[1] < v46 )
      {
        v31[1] = v330.m128i_i64[1];
LABEL_55:
        v50 = v48;
        goto LABEL_56;
      }
      v152 = v31[2];
      if ( (unsigned __int64)&v281 < v48 || (unsigned __int64)&v281 >= v48 + 16 * v152 )
      {
        v50 = v48;
        if ( v152 < v330.m128i_i64[1] )
        {
          v50 = qvector_reserve(v31, 0, v330.m128i_i64[1], 16);
          v224 = v31[1];
          v225 = (__m128i *)v31[2];
          v31[2] = v152;
          v226 = (const __m128i *)*v31;
          v227 = v224 - 1;
          if ( v227 >= 0 )
          {
            v228 = v50;
            do
            {
              v229 = _mm_loadu_si128(v226);
              v228 += 16;
              ++v226;
              *(__m128i *)(v228 - 16) = v229;
              v167 = v227-- == 0;
            }
            while ( !v167 );
            v226 = (const __m128i *)*v31;
          }
          v257 = v225;
          qfree(v226);
          v230 = v257;
          v46 = v31[1];
          *v31 = v50;
          v31[2] = (__int64)v230;
        }
        if ( v46 < v49 )
        {
          v173 = _mm_load_si128(&v281);
          do
          {
            v174 = v46++;
            *(__m128i *)(v50 + 16 * v174) = v173;
            v50 = *v31;
          }
          while ( v49 != v46 );
        }
      }
      else
      {
        v50 = v48;
        if ( v152 < v330.m128i_i64[1] )
        {
          v239 = qvector_reserve(v31, 0, v330.m128i_i64[1], 16);
          v240 = (const __m128i *)*v31;
          v50 = v239;
          v241 = v239;
          v242 = v31[1];
          v243 = (__m128i *)v31[2];
          v31[2] = v152;
          v244 = v240;
          v245 = v242 - 1;
          if ( v245 >= 0 )
          {
            do
            {
              v246 = _mm_loadu_si128(v244);
              v241 += 16;
              ++v244;
              *(__m128i *)(v241 - 16) = v246;
              v167 = v245-- == 0;
            }
            while ( !v167 );
            v240 = (const __m128i *)*v31;
          }
          v257 = v243;
          qfree(v240);
          v46 = v31[1];
          *v31 = v50;
          v31[2] = (__int64)v243;
        }
        if ( v46 < v49 )
        {
          do
          {
            v153 = v46++;
            v154 = v50 + 16 * v153;
            *(_QWORD *)v154 = -1;
            *(_BYTE *)(v154 + 8) = 0;
            v50 = *v31;
          }
          while ( v49 != v46 );
        }
      }
      v31[1] = v49;
LABEL_56:
      v51 = v330.m128i_i64[0];
      if ( v330.m128i_i64[0] )
      {
        if ( !v330.m128i_i64[1] )
        {
          v322.m128i_i64[0] = (__int64)off_4BDB40;
          v52 = *(_QWORD *)v330.m128i_i64[0];
          goto LABEL_59;
        }
        v145 = *(_QWORD **)(v330.m128i_i64[0] + 8);
        if ( (_QWORD *)v330.m128i_i64[0] == v145 )
        {
          v322.m128i_i64[0] = (__int64)off_4BDB40;
          v52 = *(_QWORD *)v330.m128i_i64[0];
          goto LABEL_141;
        }
        do
        {
          v50 += 16;
          *(_QWORD *)(v50 - 16) = v145[3];
          *(_BYTE *)(v50 - 8) = *((_BYTE *)v145 + 32);
          if ( (*v145 & 2) == 0 )
          {
            v146 = (_QWORD *)v145[2];
            if ( (*(_BYTE *)v146 & 2) != 0 )
            {
              v177 = (_QWORD *)(*v145 & 0xFFFFFFFFFFFFFFFCLL);
              v178 = *v177;
              if ( (*v177 & 2) == 0 )
              {
                while ( (_QWORD *)v177[2] == v145 )
                {
                  v145 = v177;
                  v179 = v178 & 0xFFFFFFFFFFFFFFFCLL;
                  v178 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v178 & 2) != 0 )
                  {
                    v145 = (_QWORD *)v179;
                    goto LABEL_138;
                  }
                  v177 = (_QWORD *)v179;
                }
              }
              v145 = v177;
            }
            else
            {
              for ( i = (_QWORD *)v146[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v146 = i;
              v145 = v146;
            }
          }
LABEL_138:
          ;
        }
        while ( (_QWORD *)v330.m128i_i64[0] != v145 );
        v322.m128i_i64[0] = (__int64)off_4BDB40;
        if ( !v145 )
          goto LABEL_62;
        v52 = *v145;
        if ( v330.m128i_i64[1] )
        {
LABEL_141:
          v148 = (__int64 *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
          v149 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v149 & 2) != 0 )
            goto LABEL_148;
          v150 = (__int64 *)v148[1];
          if ( (*(_BYTE *)v150 & 2) != 0 )
          {
            v151 = (__int64 *)v148[2];
            if ( (*(_BYTE *)v151 & 2) == 0 )
            {
LABEL_144:
              sub_FDE00(v151);
              goto LABEL_145;
            }
          }
          else
          {
            sub_FDE00(v150);
            v151 = (__int64 *)v148[2];
            if ( (*(_BYTE *)v151 & 2) == 0 )
              goto LABEL_144;
LABEL_145:
            v149 = *v148;
            if ( (*v148 & 2) != 0 )
            {
LABEL_146:
              if ( v52 > 3 )
                qfree(v52 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_148:
              *(_QWORD *)v330.m128i_i64[0] = v330.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL
                                           | *(_QWORD *)v330.m128i_i64[0] & 3LL;
              *(__m128i *)(v330.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                      (__m128i)v330.m128i_u64[0],
                                                      (__m128i)v330.m128i_u64[0]);
              *(_QWORD *)v330.m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v330.m128i_i64[0] |= 2uLL;
              v330.m128i_i64[1] = 0;
LABEL_60:
              if ( v330.m128i_i64[0] )
                qfree(v330.m128i_i64[0]);
              goto LABEL_62;
            }
          }
          *v148 = v149 | 2;
          goto LABEL_146;
        }
        v51 = (__int64)v145;
LABEL_59:
        *(_QWORD *)v51 = v51 & 0xFFFFFFFFFFFFFFFCLL | v52 & 3;
        *(__m128i *)(v330.m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v330.m128i_u64[0], (__m128i)v330.m128i_u64[0]);
        *(_QWORD *)v330.m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v330.m128i_i64[0] |= 2uLL;
        goto LABEL_60;
      }
      v322.m128i_i64[0] = (__int64)off_4BDB40;
LABEL_62:
      if ( v328 )
      {
        *(_QWORD *)&v329 = 0;
        qfree(v328);
      }
      qfree(v327[0]);
      v53 = (_QWORD *)v319.m128i_i64[0];
      if ( v319.m128i_i64[0] )
      {
        if ( v319.m128i_i64[1] )
        {
          v54 = *(_QWORD **)(v319.m128i_i64[0] + 8);
          if ( v54 != (_QWORD *)v319.m128i_i64[0] )
          {
            v257 = &v297;
            do
            {
              v270 = (const __m128i *)(v54 + 3);
              sub_106EE0(v257, (__int64)(v54 + 3), &v270);
              if ( (*v54 & 2) == 0 )
              {
                v55 = (_QWORD *)v54[2];
                if ( (*(_BYTE *)v55 & 2) != 0 )
                {
                  v183 = (_QWORD *)(*v54 & 0xFFFFFFFFFFFFFFFCLL);
                  v184 = *v183;
                  if ( (*v183 & 2) == 0 )
                  {
                    while ( (_QWORD *)v183[2] == v54 )
                    {
                      v54 = v183;
                      v185 = v184 & 0xFFFFFFFFFFFFFFFCLL;
                      v184 = *(_QWORD *)(v184 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v184 & 2) != 0 )
                      {
                        v54 = (_QWORD *)v185;
                        goto LABEL_71;
                      }
                      v183 = (_QWORD *)v185;
                    }
                  }
                  v54 = v183;
                }
                else
                {
                  do
                  {
                    v54 = v55;
                    v55 = (_QWORD *)v55[1];
                  }
                  while ( (*(_BYTE *)v55 & 2) == 0 );
                }
              }
LABEL_71:
              ;
            }
            while ( v53 != v54 );
          }
        }
      }
      v258 = (__int64 (__fastcall **)())((char *)v258 + 1);
      v9 = *(_QWORD *)(a1 + 320);
      if ( (__int64 (__fastcall **)())v263 == v258 )
        break;
      continue;
    }
  }
  if ( !*(_DWORD *)(v9 + 64) )
  {
    v257 = &v297;
    v265 = &v319;
    sub_FDB70();
  }
  v56 = *(__int64 **)(v9 + 528);
  v57 = *(_DWORD *)(a1 + 316);
  v257 = &v297;
  v58 = *v56;
  v265 = &v319;
  sub_FFCF0((__int64)&v297, v9, (_QWORD *)(v58 + 240), v57);
  v59 = *(_QWORD *)(a1 + 320);
  v265 = &v319;
  v60 = sub_1D0DF0(v59);
  v61 = *(_DWORD *)(a1 + 316);
  v62 = *(_QWORD *)(a1 + 320);
  v265 = &v319;
  sub_FFCF0((__int64)&v297, v62, (_QWORD *)(v60 + 160), v61);
  v63 = v319.m128i_i64[0];
  if ( !v319.m128i_i64[0] )
  {
    v258 = &off_4BD9E0;
    v259 = &off_4BD9E0 - 6;
    goto LABEL_91;
  }
  v64 = *(_QWORD *)v319.m128i_i64[0];
  if ( !v319.m128i_i64[1] )
  {
    *(_QWORD *)v319.m128i_i64[0] = *(_QWORD *)v319.m128i_i64[0] & 3LL | v319.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v237 = v319.m128i_i64[0];
    v238 = (__m128i)v319.m128i_u64[0];
    *(_QWORD *)v319.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v237 + 8) = _mm_unpacklo_epi64(v238, v238);
    *(_QWORD *)v319.m128i_i64[0] |= 2uLL;
    goto LABEL_85;
  }
  v65 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
  v66 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v66 & 2) != 0 )
    goto LABEL_84;
  v67 = (__int64 *)v65[1];
  if ( (*(_BYTE *)v67 & 2) != 0 )
  {
    v68 = (__int64 *)v65[2];
    if ( (*(_BYTE *)v68 & 2) == 0 )
    {
LABEL_79:
      sub_FDE00(v68);
      goto LABEL_80;
    }
    goto LABEL_273;
  }
  sub_FDE00(v67);
  v68 = (__int64 *)v65[2];
  if ( (*(_BYTE *)v68 & 2) == 0 )
    goto LABEL_79;
LABEL_80:
  v66 = *v65;
  if ( (*v65 & 2) == 0 )
LABEL_273:
    *v65 = v66 | 2;
  if ( v64 > 3 )
    qfree(v64 & 0xFFFFFFFFFFFFFFFCLL);
  v63 = v319.m128i_i64[0];
  v64 = *(_QWORD *)v319.m128i_i64[0];
LABEL_84:
  *(_QWORD *)v63 = v64 & 3 | v63 & 0xFFFFFFFFFFFFFFFCLL;
  v69 = v319.m128i_i64[0];
  v70 = (__m128i)v319.m128i_u64[0];
  *(_QWORD *)v319.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v69 + 8) = _mm_unpacklo_epi64(v70, v70);
  *(_QWORD *)v319.m128i_i64[0] |= 2uLL;
  v319.m128i_i64[1] = 0;
LABEL_85:
  v258 = &off_4BD9E0;
  v259 = &off_4BD9E0 - 6;
  if ( v319.m128i_i64[0] )
    qfree(v319.m128i_i64[0]);
LABEL_91:
  v101 = v257;
  v282 = 0;
  v102 = _mm_loadh_ps((const double *)&v258);
  v283 = 5;
  v271 = (const __m128i *)&v282;
  v255 = v102;
  v256 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4BDB80, (__m128i)(unsigned __int64)v257);
  sub_1078A0(v257, (__int64)&v282, &v271);
  v103 = v262;
  v285 = 5;
  v272 = (const __m128i *)&v284;
  v284 = (int)v262;
  sub_1078A0(v101, (__int64)&v284, &v272);
  v104 = *(_QWORD *)(a1 + 320);
  v287 = 5;
  v105 = *(_DWORD *)(v104 + 116);
  v273 = (const __m128i *)&v286;
  v286 = v103 + v105;
  sub_1078A0(v101, (__int64)&v286, &v273);
  v106 = *(_QWORD *)(a1 + 320);
  v289 = 5;
  v107 = *(_QWORD *)(v106 + 144);
  v274 = (const __m128i *)&v288;
  v288 = v107;
  sub_1078A0(v101, (__int64)&v288, &v274);
  v108 = *(_QWORD *)(a1 + 320);
  v291 = 5;
  v109 = *(_QWORD *)(v108 + 168);
  v275 = (const __m128i *)&v290;
  v290 = v109;
  sub_1078A0(v101, (__int64)&v290, &v275);
  v293 = 5;
  v292 = v260;
  v276 = (const __m128i *)&v292;
  sub_1078A0(v101, (__int64)&v292, &v276);
  v110 = *(_QWORD *)(a1 + 320);
  v111 = _mm_load_si128(&v256);
  v112 = _mm_load_si128((const __m128i *)&v255);
  v113 = *(_QWORD *)(v110 + 1440);
  v320 = &v294;
  v294 = v111;
  v319 = v112;
  v321 = _mm_unpacklo_epi64((__m128i)v113, (__m128i)((unsigned __int64)v298 + v113));
  sub_3126D0(v110 + 232, &v319.m128i_u64[1], (char *)v298 + v113, v114, v115, v116, v255.m128_u64[0]);
  v117 = *(_QWORD *)(a1 + 320);
  v118 = _mm_load_si128(&v256);
  v119 = _mm_load_si128((const __m128i *)&v255);
  v120 = *(_QWORD *)(v117 + 1440);
  v323 = &v295;
  v295 = v118;
  v322 = v119;
  v324 = _mm_unpacklo_epi64((__m128i)v120, (__m128i)((unsigned __int64)v298 + v120));
  sub_3126D0(v117 + 184, &v322.m128i_u64[1], (char *)v298 + v120, v121, v122, v123, v255.m128_u64[0]);
  v124 = *(void (**)())(*(_QWORD *)v261 + 72LL);
  if ( v124 != nullsub_35 )
    ((void (__fastcall *)(__int64, _QWORD, __m128i *))v124)(v261, *(_QWORD *)(a1 + 320), v257);
  v125 = v297.m128i_u64[1];
  v126 = *(_QWORD *)(a1 + 112);
  v127 = *(_QWORD *)(a1 + 104);
  if ( v297.m128i_i64[1] != v126 )
  {
    v296.m128i_i64[0] = -1;
    v296.m128i_i8[8] = 0;
    if ( v297.m128i_i64[1] >= v126 )
    {
      v155 = *(_QWORD *)(a1 + 120);
      v156 = a1 + 104;
      if ( (unsigned __int64)&v296 < v127 || (unsigned __int64)&v296 >= v127 + 16 * v155 )
      {
        if ( v155 < v297.m128i_i64[1] )
        {
          v127 = qvector_reserve(v156, 0, v297.m128i_i64[1], 16);
          v231 = *(_QWORD *)(a1 + 112);
          v232 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v155;
          v233 = *(const __m128i **)(a1 + 104);
          v234 = v231 - 1;
          if ( v234 >= 0 )
          {
            v235 = v127;
            do
            {
              v236 = _mm_loadu_si128(v233);
              v235 += 16LL;
              ++v233;
              *(__m128i *)(v235 - 16) = v236;
              v167 = v234-- == 0;
            }
            while ( !v167 );
            v233 = *(const __m128i **)(a1 + 104);
          }
          qfree(v233);
          *(_QWORD *)(a1 + 104) = v127;
          v126 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v232;
        }
        if ( v126 < v125 )
        {
          v175 = _mm_load_si128(&v296);
          do
          {
            v176 = v126++;
            *(__m128i *)(v127 + 16 * v176) = v175;
            v127 = *(_QWORD *)(a1 + 104);
          }
          while ( v125 != v126 );
        }
      }
      else
      {
        if ( v155 < v297.m128i_i64[1] )
        {
          v247 = qvector_reserve(v156, 0, v297.m128i_i64[1], 16);
          v248 = *(const __m128i **)(a1 + 104);
          v127 = v247;
          v249 = v247;
          v250 = *(_QWORD *)(a1 + 112);
          v251 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v155;
          v252 = v248;
          v253 = v250 - 1;
          if ( v253 >= 0 )
          {
            do
            {
              v254 = _mm_loadu_si128(v252);
              v249 += 16;
              ++v252;
              *(__m128i *)(v249 - 16) = v254;
              v167 = v253-- == 0;
            }
            while ( !v167 );
            v248 = *(const __m128i **)(a1 + 104);
          }
          qfree(v248);
          *(_QWORD *)(a1 + 104) = v127;
          v126 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v251;
        }
        if ( v126 < v125 )
        {
          do
          {
            v157 = v126++;
            v158 = v127 + 16 * v157;
            *(_QWORD *)v158 = -1;
            *(_BYTE *)(v158 + 8) = 0;
            v127 = *(_QWORD *)(a1 + 104);
          }
          while ( v125 != v126 );
        }
      }
    }
    *(_QWORD *)(a1 + 112) = v125;
  }
  if ( !v297.m128i_i64[0] )
    return v336 - __readfsqword(0x28u);
  if ( !v297.m128i_i64[1] )
  {
    v130 = *(_QWORD *)v297.m128i_i64[0];
    v128 = v297.m128i_i64[0];
    goto LABEL_212;
  }
  v128 = *(_QWORD *)(v297.m128i_i64[0] + 8);
  if ( v297.m128i_i64[0] == v128 )
  {
    v130 = *(_QWORD *)v297.m128i_i64[0];
LABEL_105:
    v131 = (__int64 *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
    v132 = *(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v132 & 2) != 0 )
      goto LABEL_112;
    v133 = (__int64 *)v131[1];
    if ( (*(_BYTE *)v133 & 2) != 0 )
    {
      v134 = (__int64 *)v131[2];
      if ( (*(_BYTE *)v134 & 2) != 0 )
      {
LABEL_260:
        *v131 = v132 | 2;
LABEL_110:
        if ( v130 > 3 )
          qfree(v130 & 0xFFFFFFFFFFFFFFFCLL);
LABEL_112:
        *(_QWORD *)v297.m128i_i64[0] = v297.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v297.m128i_i64[0] & 3LL;
        v135 = v297.m128i_i64[0];
        v136 = (__m128i)v297.m128i_u64[0];
        *(_QWORD *)v297.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(v136, v136);
        *(_QWORD *)v297.m128i_i64[0] |= 2uLL;
        v297.m128i_i64[1] = 0;
        goto LABEL_113;
      }
    }
    else
    {
      sub_FDE00(v133);
      v134 = (__int64 *)v131[2];
      if ( (*(_BYTE *)v134 & 2) != 0 )
        goto LABEL_109;
    }
    sub_FDE00(v134);
LABEL_109:
    v132 = *v131;
    if ( (*v131 & 2) != 0 )
      goto LABEL_110;
    goto LABEL_260;
  }
  do
  {
    *(_QWORD *)v127 = *(_QWORD *)(v128 + 24);
    *(_BYTE *)(v127 + 8) = *(_BYTE *)(v128 + 32);
    if ( (*(_QWORD *)v128 & 2) == 0 )
    {
      v129 = *(_QWORD *)(v128 + 16);
      if ( (*(_BYTE *)v129 & 2) != 0 )
      {
        v180 = (_QWORD *)(*(_QWORD *)v128 & 0xFFFFFFFFFFFFFFFCLL);
        v181 = *v180;
        if ( (*v180 & 2) != 0 || v180[2] != v128 )
        {
LABEL_190:
          v128 = (unsigned __int64)v180;
        }
        else
        {
          while ( 1 )
          {
            v128 = v181 & 0xFFFFFFFFFFFFFFFCLL;
            v181 = *(_QWORD *)(v181 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v181 & 2) != 0 )
              break;
            v182 = v180;
            v180 = (_QWORD *)v128;
            if ( *(_QWORD **)(v128 + 16) != v182 )
              goto LABEL_190;
          }
        }
      }
      else
      {
        do
        {
          v128 = v129;
          v129 = *(_QWORD *)(v129 + 8);
        }
        while ( (*(_BYTE *)v129 & 2) == 0 );
      }
    }
    v127 += 16LL;
  }
  while ( v297.m128i_i64[0] != v128 );
  if ( v128 )
  {
    v130 = *(_QWORD *)v128;
    if ( v297.m128i_i64[1] )
      goto LABEL_105;
LABEL_212:
    *(_QWORD *)v128 = v130 & 3 | v128 & 0xFFFFFFFFFFFFFFFCLL;
    v195 = v297.m128i_i64[0];
    v196 = (__m128i)v297.m128i_u64[0];
    *(_QWORD *)v297.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v195 + 8) = _mm_unpacklo_epi64(v196, v196);
    *(_QWORD *)v297.m128i_i64[0] |= 2uLL;
LABEL_113:
    if ( v297.m128i_i64[0] )
      qfree(v297.m128i_i64[0]);
  }
  return v336 - __readfsqword(0x28u);
}
