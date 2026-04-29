unsigned __int64 __fastcall sub_10CB40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
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
  __int64 v40; // rcx
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
  __int64 v186; // r10
  unsigned __int64 v187; // rbp
  __int64 v188; // rax
  __m128i v189; // xmm0
  unsigned __int64 v190; // r12
  __int64 *v191; // rax
  __int64 v192; // rdi
  __int64 v193; // rax
  __m128i v194; // xmm0
  unsigned __int64 v195; // r11
  __int64 v196; // r13
  __int64 v197; // rax
  unsigned __int64 v198; // r15
  const __m128i *v199; // rdx
  __m128i *v200; // rdx
  unsigned __int64 v201; // rdx
  __int64 *v202; // r13
  __int64 v203; // rax
  __int64 *v204; // rdi
  __int64 *v205; // rdi
  __int64 v206; // rax
  __m128i v207; // xmm0
  __int64 v208; // rdi
  __int64 v209; // rdx
  __int64 v210; // rax
  __m128i *v211; // rcx
  const __m128i *v212; // rdi
  __int64 v213; // r11
  __int64 v214; // rax
  __int64 (__fastcall **v215)(); // r9
  char v216; // r8
  __int64 v217; // r10
  __int64 v218; // rsi
  __m128i v219; // xmm0
  _QWORD *v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rax
  __m128i *v223; // rcx
  const __m128i *v224; // rdi
  __int64 v225; // rax
  __int64 v226; // rdx
  __m128i v227; // xmm0
  __m128i *v228; // rcx
  __int64 v229; // rax
  __int64 v230; // r13
  const __m128i *v231; // rdi
  __int64 v232; // rax
  unsigned __int64 v233; // rdx
  __m128i v234; // xmm0
  __int64 v235; // rax
  __m128i v236; // xmm0
  __int64 v237; // rax
  __int64 v238; // rdi
  __int64 v239; // rdx
  __int64 v240; // rax
  __m128i *v241; // rsi
  const __m128i *v242; // rcx
  __int64 v243; // rax
  __m128i v244; // xmm0
  __int64 v245; // rax
  __int64 v246; // rdi
  __int64 v247; // rdx
  __int64 v248; // rax
  __int64 v249; // r13
  const __m128i *v250; // rcx
  __int64 v251; // rax
  __m128i v252; // xmm0
  __m128 v253; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v254; // [rsp+10h] [rbp-3A8h] BYREF
  __m128i *v255; // [rsp+28h] [rbp-390h] BYREF
  __int64 (__fastcall **v256)(); // [rsp+30h] [rbp-388h] BYREF
  __int64 (__fastcall **v257)(); // [rsp+38h] [rbp-380h]
  _OWORD *v258; // [rsp+40h] [rbp-378h]
  __int64 v259; // [rsp+48h] [rbp-370h]
  __int64 v260; // [rsp+50h] [rbp-368h]
  unsigned __int64 v261; // [rsp+58h] [rbp-360h]
  __int64 v262; // [rsp+60h] [rbp-358h]
  __m128i *v263; // [rsp+68h] [rbp-350h]
  __int64 *v264; // [rsp+70h] [rbp-348h]
  size_t n; // [rsp+78h] [rbp-340h]
  const __m128i *v266; // [rsp+88h] [rbp-330h] BYREF
  const __m128i *v267; // [rsp+90h] [rbp-328h] BYREF
  const __m128i *v268; // [rsp+98h] [rbp-320h] BYREF
  const __m128i *v269; // [rsp+A0h] [rbp-318h] BYREF
  const __m128i *v270; // [rsp+A8h] [rbp-310h] BYREF
  const __m128i *v271; // [rsp+B0h] [rbp-308h] BYREF
  const __m128i *v272; // [rsp+B8h] [rbp-300h] BYREF
  const __m128i *v273; // [rsp+C0h] [rbp-2F8h] BYREF
  const __m128i *v274; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v275; // [rsp+D0h] [rbp-2E8h] BYREF
  char v276; // [rsp+D8h] [rbp-2E0h]
  __int64 v277; // [rsp+E0h] [rbp-2D8h] BYREF
  char v278; // [rsp+E8h] [rbp-2D0h]
  __m128i v279; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v280; // [rsp+100h] [rbp-2B8h] BYREF
  char v281; // [rsp+108h] [rbp-2B0h]
  __int64 v282; // [rsp+110h] [rbp-2A8h] BYREF
  char v283; // [rsp+118h] [rbp-2A0h]
  __int64 v284; // [rsp+120h] [rbp-298h] BYREF
  char v285; // [rsp+128h] [rbp-290h]
  __int64 v286; // [rsp+130h] [rbp-288h] BYREF
  char v287; // [rsp+138h] [rbp-280h]
  __int64 v288; // [rsp+140h] [rbp-278h] BYREF
  char v289; // [rsp+148h] [rbp-270h]
  _OWORD *v290; // [rsp+150h] [rbp-268h] BYREF
  char v291; // [rsp+158h] [rbp-260h]
  __m128i v292; // [rsp+160h] [rbp-258h] BYREF
  __m128i v293; // [rsp+170h] [rbp-248h] BYREF
  __m128i v294; // [rsp+180h] [rbp-238h] BYREF
  __m128i v295; // [rsp+190h] [rbp-228h] BYREF
  _OWORD *v296; // [rsp+1A0h] [rbp-218h]
  __int64 v297; // [rsp+1B0h] [rbp-208h] BYREF
  __int128 v298; // [rsp+1B8h] [rbp-200h]
  __m128i v299; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v300; // [rsp+1E0h] [rbp-1D8h]
  int v301; // [rsp+1E8h] [rbp-1D0h]
  __m128i v302; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v303; // [rsp+200h] [rbp-1B8h]
  int v304; // [rsp+208h] [rbp-1B0h]
  __m128i v305; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v306; // [rsp+220h] [rbp-198h]
  int v307; // [rsp+228h] [rbp-190h]
  __m128i v308; // [rsp+230h] [rbp-188h] BYREF
  __m128i *v309; // [rsp+240h] [rbp-178h]
  __m128i v310; // [rsp+248h] [rbp-170h]
  __m128i v311; // [rsp+260h] [rbp-158h] BYREF
  __m128i *v312; // [rsp+270h] [rbp-148h]
  __m128i v313; // [rsp+278h] [rbp-140h]
  __m128i v314; // [rsp+290h] [rbp-128h] BYREF
  __m128i *v315; // [rsp+2A0h] [rbp-118h]
  __m128i v316; // [rsp+2A8h] [rbp-110h]
  __m128i v317; // [rsp+2C0h] [rbp-F8h] BYREF
  __m128i *v318; // [rsp+2D0h] [rbp-E8h]
  __m128i v319; // [rsp+2D8h] [rbp-E0h]
  __m128i v320; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i *v321; // [rsp+300h] [rbp-B8h]
  __m128i v322; // [rsp+308h] [rbp-B0h]
  char v323; // [rsp+318h] [rbp-A0h]
  __int64 v324; // [rsp+320h] [rbp-98h]
  __int64 v325[2]; // [rsp+328h] [rbp-90h] BYREF
  void *v326; // [rsp+338h] [rbp-80h]
  __int128 v327; // [rsp+340h] [rbp-78h]
  __m128i v328; // [rsp+350h] [rbp-68h] BYREF
  __int64 v329; // [rsp+360h] [rbp-58h]
  unsigned __int64 v330; // [rsp+368h] [rbp-50h]
  int v331; // [rsp+370h] [rbp-48h]
  char v332; // [rsp+374h] [rbp-44h]
  char v333; // [rsp+375h] [rbp-43h]
  unsigned __int64 v334; // [rsp+378h] [rbp-40h]

  v334 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 320);
  v295 = 0u;
  v8 = *(int *)(v7 + 64);
  v9 = v7;
  v259 = *(_QWORD *)(v7 + 1504);
  v260 = *(_QWORD *)(v7 + 136);
  v258 = (_OWORD *)*(int *)(v7 + 128);
  v296 = v258;
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
    goto LABEL_87;
  v10 = *(_QWORD *)(a1 + 88);
  v261 = (int)v8;
  if ( (int)v8 != v10 )
  {
    v297 = 0;
    v298 = 0;
    if ( (int)v8 < v10 )
    {
      v190 = (int)v8;
      do
      {
        v191 = (__int64 *)(*(_QWORD *)(a1 + 80) + 24 * v190);
        v192 = *v191;
        if ( *v191 )
        {
          v191[1] = 0;
          qfree(v192);
        }
        ++v190;
      }
      while ( v190 < v10 );
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(a1 + 96);
      v13 = a1 + 80;
      if ( (unsigned __int64)&v297 < v11 || (unsigned __int64)&v297 >= v11 + 24 * v12 )
      {
        if ( v12 < v261 )
        {
          v255 = &v295;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v13, v11, v261, 24);
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v261;
        if ( v10 < v261 )
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
        if ( v12 < v261 )
        {
          v255 = &v295;
          *(_QWORD *)(a1 + 80) = qvector_reserve(v13, v11, v261, 24);
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (_QWORD *)v261;
        if ( v10 < v261 )
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
    *(_QWORD *)(a1 + 88) = v261;
    v9 = v7;
    if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
      goto LABEL_87;
  }
  if ( !*(_QWORD *)(v7 + 440) )
    goto LABEL_26;
  a4 = &v275;
  v16 = 0;
  v17 = 0;
  v253.m128_u64[0] = (unsigned __int64)&v275;
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
          v256 = (__int64 (__fastcall **)())v19[2];
          v254.m128i_i64[0] = (int)v20;
          v255 = &v295;
          v160 = qvector_reserve(v159, 0, v144, 16);
          v161 = (__int64 (__fastcall **)())v19[2];
          v162 = *v19;
          v163 = (__int64)&v19[1][-1].m128i_i64[1] + 7;
          v19[2] = (const __m128i *)v256;
          v164 = v254.m128i_i64[0];
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
          v257 = v161;
          v256 = (__int64 (__fastcall **)())v160;
          v254.m128i_i64[0] = v164;
          v255 = &v295;
          qfree((__int64)v162);
          v168 = v256;
          v169 = v257;
          v22 = v254.m128i_i64[0];
          v170 = 2LL * (_QWORD)v19[1];
          *v19 = (const __m128i *)v256;
          v19[2] = (const __m128i *)v169;
          m128i_i64 = (__int64)&v168[v170];
        }
        *(_QWORD *)m128i_i64 = v22;
        *(_BYTE *)(m128i_i64 + 8) = 5;
        v19[1] = (const __m128i *)((char *)v19[1] + 1);
      }
      v275 = v22;
      v276 = 5;
      v266 = (const __m128i *)v253.m128_u64[0];
      v255 = &v295;
      sub_10BAA0(&v295, v253.m128_i64[0], &v266);
      v24 = *(_DWORD *)(v18 + 88) + v20;
      v278 = 5;
      v267 = (const __m128i *)&v277;
      v277 = v24;
      sub_10BAA0(&v295, (__int64)&v277, &v267);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v18 != 2 )
      goto LABEL_14;
    v320 = 0u;
    v321 = (__m128i *)v258;
    v255 = &v295;
    sub_10BF10();
    v186 = v320.m128i_i64[0];
    if ( !v320.m128i_i64[0] )
      goto LABEL_24;
    if ( !v320.m128i_i64[1] )
    {
      v187 = *(_QWORD *)v320.m128i_i64[0];
LABEL_204:
      *(_QWORD *)v186 = v186 & 0xFFFFFFFFFFFFFFFCLL | v187 & 3;
      v188 = v320.m128i_i64[0];
      v189 = (__m128i)v320.m128i_u64[0];
      *(_QWORD *)v320.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v188 + 8) = _mm_unpacklo_epi64(v189, v189);
      *(_QWORD *)v320.m128i_i64[0] |= 2uLL;
      goto LABEL_232;
    }
    v195 = *(_QWORD *)(v320.m128i_i64[0] + 8);
    if ( v320.m128i_i64[0] == v195 )
    {
      v187 = *(_QWORD *)v320.m128i_i64[0];
    }
    else
    {
      do
      {
        v196 = *(_QWORD *)(a1 + 80);
        a6 = *(_QWORD *)(v195 + 24);
        a5 = *(unsigned __int8 *)(v195 + 32);
        v197 = *(_QWORD *)(v196 + 8);
        v198 = *(_QWORD *)(v196 + 16);
        if ( v198 < v197 + 1 )
        {
          v208 = *(_QWORD *)(a1 + 80);
          v262 = v186;
          LOBYTE(v257) = a5;
          v256 = (__int64 (__fastcall **)())a6;
          v254.m128i_i64[0] = v195;
          v209 = qvector_reserve(v208, 0, v197 + 1, 16);
          v210 = *(_QWORD *)(v196 + 8);
          v211 = *(__m128i **)(v196 + 16);
          *(_QWORD *)(v196 + 16) = v198;
          v212 = *(const __m128i **)v196;
          v213 = v254.m128i_i64[0];
          v214 = v210 - 1;
          v215 = v256;
          v216 = (char)v257;
          v217 = v262;
          if ( v214 >= 0 )
          {
            v218 = v209;
            do
            {
              v219 = _mm_loadu_si128(v212);
              v218 += 16;
              ++v212;
              *(__m128i *)(v218 - 16) = v219;
              v167 = v214-- == 0;
            }
            while ( !v167 );
            v212 = *(const __m128i **)v196;
          }
          v264 = (__int64 *)v217;
          v263 = v211;
          v262 = v209;
          LOBYTE(v257) = v216;
          v256 = v215;
          v254.m128i_i64[0] = v213;
          qfree((__int64)v212);
          v199 = (const __m128i *)v262;
          a4 = v263->m128i_i64;
          v197 = *(_QWORD *)(v196 + 8);
          v186 = (__int64)v264;
          a5 = (unsigned __int8)v257;
          a6 = (__int64)v256;
          *(_QWORD *)v196 = v262;
          *(_QWORD *)(v196 + 16) = a4;
          v195 = v254.m128i_i64[0];
        }
        else
        {
          v199 = *(const __m128i **)v196;
        }
        v200 = (__m128i *)&v199[v197];
        v200->m128i_i64[0] = a6;
        v200->m128i_i8[8] = a5;
        ++*(_QWORD *)(v196 + 8);
        if ( (*(_QWORD *)v195 & 2) == 0 )
        {
          v201 = *(_QWORD *)(v195 + 16);
          if ( (*(_BYTE *)v201 & 2) != 0 )
          {
            v220 = (_QWORD *)(*(_QWORD *)v195 & 0xFFFFFFFFFFFFFFFCLL);
            v221 = *v220;
            if ( (*v220 & 2) != 0 || v220[2] != v195 )
            {
LABEL_240:
              v195 = (unsigned __int64)v220;
            }
            else
            {
              while ( 1 )
              {
                v195 = v221 & 0xFFFFFFFFFFFFFFFCLL;
                v221 = *(_QWORD *)(v221 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v221 & 2) != 0 )
                  break;
                a4 = v220;
                v220 = (_QWORD *)v195;
                if ( *(_QWORD **)(v195 + 16) != a4 )
                  goto LABEL_240;
              }
            }
          }
          else
          {
            do
            {
              v195 = v201;
              v201 = *(_QWORD *)(v201 + 8);
            }
            while ( (*(_BYTE *)v201 & 2) == 0 );
          }
        }
      }
      while ( v186 != v195 );
      v186 = v320.m128i_i64[0];
      if ( !v320.m128i_i64[0] )
        goto LABEL_24;
      v187 = *(_QWORD *)v320.m128i_i64[0];
      if ( !v320.m128i_i64[1] )
        goto LABEL_204;
    }
    v202 = (__int64 *)(v187 & 0xFFFFFFFFFFFFFFFCLL);
    v203 = *(_QWORD *)(v187 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v203 & 2) == 0 )
    {
      v204 = (__int64 *)v202[1];
      if ( (*(_BYTE *)v204 & 2) != 0 )
      {
        v205 = (__int64 *)v202[2];
        if ( (*(_BYTE *)v205 & 2) != 0 )
          goto LABEL_271;
      }
      else
      {
        sub_102000(v204);
        v205 = (__int64 *)v202[2];
        if ( (*(_BYTE *)v205 & 2) != 0 )
          goto LABEL_227;
      }
      sub_102000(v205);
LABEL_227:
      v203 = *v202;
      if ( (*v202 & 2) != 0 )
      {
LABEL_228:
        if ( v187 > 3 )
          qfree(v187 & 0xFFFFFFFFFFFFFFFCLL);
        v186 = v320.m128i_i64[0];
        goto LABEL_231;
      }
LABEL_271:
      *v202 = v203 | 2;
      goto LABEL_228;
    }
LABEL_231:
    *(_QWORD *)v186 = v186 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v186 & 3LL;
    v206 = v320.m128i_i64[0];
    v207 = (__m128i)v320.m128i_u64[0];
    *(_QWORD *)v320.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v206 + 8) = _mm_unpacklo_epi64(v207, v207);
    *(_QWORD *)v320.m128i_i64[0] |= 2uLL;
    v320.m128i_i64[1] = 0;
LABEL_232:
    if ( v320.m128i_i64[0] )
      qfree(v320.m128i_i64[0]);
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
    v256 = &off_4DD260;
    v257 = &off_4DD260 - 6;
    v255 = &v295;
    v253 = _mm_loadh_ps((const double *)&v256);
    v254 = (__m128i)_mm_loadh_ps((const double *)&v255);
    if ( (int)v8 > 0 )
    {
      v71 = 5 * v8;
      v72 = 0;
      v73 = 8 * v71;
      do
      {
        v74 = *(_QWORD *)(v9 + 1440);
        v75 = *(_QWORD *)(v9 + 128);
        v300 = v9;
        v76 = *(_QWORD *)(a1 + 176);
        si128 = _mm_load_si128((const __m128i *)&v253);
        v301 = 4;
        v78 = v74 + v75;
        v79 = _mm_load_si128(&v254);
        v309 = &v299;
        v308 = si128;
        v299 = v79;
        v310 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v78);
        sub_317450(v72 + v76 + 16, &v308.m128i_u64[1], v78, a4, a5, a6, v253.m128_u64[0]);
        v80 = *(_QWORD *)(a1 + 320);
        v81 = *(_QWORD *)(a1 + 200);
        v304 = 4;
        v82 = _mm_load_si128(&v254);
        v83 = _mm_load_si128((const __m128i *)&v253);
        v312 = &v302;
        v84 = *(_QWORD *)(v80 + 1440);
        v85 = *(_QWORD *)(v80 + 128);
        v303 = v80;
        v302 = v82;
        v86 = v84 + v85;
        v311 = v83;
        v313 = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v86);
        sub_317450(v72 + v81 + 16, &v311.m128i_u64[1], v80, v86, v87, v88, v253.m128_u64[0]);
        v89 = *(_QWORD *)(a1 + 320);
        v90 = *(_QWORD *)(a1 + 224);
        v91 = _mm_load_si128(&v254);
        v92 = _mm_load_si128((const __m128i *)&v253);
        v307 = 4;
        v93 = *(_QWORD *)(v89 + 128);
        v306 = v89;
        v94 = *(_QWORD *)(v89 + 1440);
        v315 = &v305;
        v305 = v91;
        v95 = v94 + v93;
        v314 = v92;
        v316 = _mm_unpacklo_epi64((__m128i)v94, (__m128i)v95);
        sub_317450(v72 + v90 + 16, &v314.m128i_u64[1], v95, &v305, v96, v97, v253.m128_u64[0]);
        v72 += 40;
        v9 = *(_QWORD *)(a1 + 320);
      }
      while ( v73 != v72 );
    }
    v98 = v255;
    sub_103E50((__int64)v255, v9, a1 + 264, 4, a5, a6);
    sub_103E50((__int64)v98, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 320) + 208LL, 4, v99, v100);
    goto LABEL_91;
  }
LABEL_26:
  v317 = 0u;
  v318 = (__m128i *)v258;
  if ( (int)v8 > 0 )
  {
    v256 = nullptr;
    v254.m128i_i64[0] = (__int64)&v317;
    v253.m128_u64[0] = (unsigned __int64)&v320;
    while ( 2 )
    {
      if ( (unsigned int)v256 >= *(_DWORD *)(v9 + 64) )
      {
        v255 = &v295;
        v263 = &v317;
        sub_101D70();
      }
      v25 = v317.m128i_i64[0];
      v26 = *(__m128i **)(*(_QWORD *)(v9 + 528) + 8LL * (_QWORD)v256);
      if ( !v317.m128i_i64[0] )
        goto LABEL_123;
      v27 = *(_QWORD *)v317.m128i_i64[0];
      if ( !v317.m128i_i64[1] )
      {
        *(_QWORD *)v317.m128i_i64[0] = *(_QWORD *)v317.m128i_i64[0] & 3LL | v317.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        v28 = v317.m128i_i64[0];
        v29 = (__m128i)v317.m128i_u64[0];
        *(_QWORD *)v317.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v29, v29);
        *(_QWORD *)v317.m128i_i64[0] |= 2uLL;
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
          sub_102000(v143);
          v138 = (__int64 *)v142[2];
          if ( (*(_BYTE *)v138 & 2) == 0 )
LABEL_117:
            sub_102000(v138);
          v139 = *v142;
          if ( (*v142 & 2) != 0 )
          {
LABEL_119:
            if ( v27 > 3 )
              qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
            v25 = v317.m128i_i64[0];
            v27 = *(_QWORD *)v317.m128i_i64[0];
            goto LABEL_122;
          }
        }
        *v142 = v139 | 2;
        goto LABEL_119;
      }
LABEL_122:
      *(_QWORD *)v25 = v27 & 3 | v25 & 0xFFFFFFFFFFFFFFFCLL;
      v140 = v317.m128i_i64[0];
      v141 = (__m128i)v317.m128i_u64[0];
      *(_QWORD *)v317.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v140 + 8) = _mm_unpacklo_epi64(v141, v141);
      *(_QWORD *)v317.m128i_i64[0] |= 2uLL;
LABEL_123:
      v317.m128i_i64[1] = 0;
LABEL_32:
      v30 = *(_QWORD *)(a1 + 80);
      LODWORD(v257) = *(_DWORD *)(a1 + 316) ^ 1;
      v31 = (__int64 *)(v30 + 24LL * (_QWORD)v256);
      if ( (v26[1].m128i_i32[2] & 0x600) != 0x200 )
      {
        if ( !under_debugger )
        {
          v255 = &v295;
          v263 = &v317;
          sub_383060(50139);
        }
        BUG();
      }
      v32 = 40LL * v26[4].m128i_i32[2];
      if ( ((unsigned __int8)v257 & 1) != 0 )
        v33 = *(_QWORD *)(a1 + 176) + v32;
      else
        v33 = *(_QWORD *)(a1 + 200) + v32;
      v34 = v26[4].m128i_i64[0];
      v255 = &v295;
      v263 = (__m128i *)v254.m128i_i64[0];
      sub_103EF0(v254.m128i_i64[0], v34, (_QWORD *)v33, (int)v257);
      v35 = v26[4].m128i_i64[0];
      v36 = v26[4].m128i_i32[2];
      v321 = v26;
      v320.m128i_i64[1] = v35;
      LODWORD(v262) = v36;
      v324 = v254.m128i_i64[0];
      v322 = 0u;
      v323 = 0;
      v320.m128i_i64[0] = (__int64)off_4DD3C0;
      v264 = v325;
      v255 = &v295;
      sub_64000(v325, v33);
      v326 = nullptr;
      v327 = 0;
      v40 = *(_QWORD *)(v33 + 24);
      if ( v40 )
      {
        v255 = *(__m128i **)(v33 + 24);
        n = 16 * v40;
        v326 = (void *)qalloc_or_throw(16 * v40, v33, 16 * v40, v40);
        *((_QWORD *)&v327 + 1) = v255;
        memcpy(v326, *(const void **)(v33 + 16), n);
        v40 = (__int64)v255;
        *(_QWORD *)&v327 = v255;
      }
      v41 = *(_QWORD *)(v324 + 16);
      v328 = 0u;
      v329 = v41;
      v42 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v320.m128i_i64[1] + 1504) + 80LL));
      v332 = (unsigned __int8)v257 & 1;
      v333 = 0;
      v331 = (int)v257;
      v330 = _mm_unpacklo_epi32(v42, _mm_cvtsi32_si128(v262)).m128i_u64[0];
      v43 = v26[3].m128i_i64[0];
      if ( v43 )
      {
        if ( ((unsigned __int8)v257 & 1) != 0 || (v43 = v26[3].m128i_i64[1]) != 0 )
        {
          while ( 1 )
          {
            sub_11E900(v43, &v320, v37, v40, v38, v39);
            if ( ((unsigned __int8)v257 & 1) == 0 )
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
            sub_11E900(v43, &v320, v37, v40, v38, v39);
          }
LABEL_47:
          v44 = v26[4].m128i_i32[2];
          if ( ((unsigned __int8)v257 & 1) != 0 )
            v45 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 40 * v44);
          else
LABEL_48:
            v45 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 40 * v44);
          sub_103EF0(v254.m128i_i64[0], v26[4].m128i_i64[0], v45, (int)v257);
          goto LABEL_50;
        }
        v44 = v26[4].m128i_i32[2];
        goto LABEL_48;
      }
      sub_10B720(&v320, (__int64)v264, 0);
LABEL_50:
      v46 = v31[1];
      v47 = *v31;
      v48 = *v31;
      if ( 16 * v46 )
      {
        do
        {
          v314.m128i_i64[0] = v47;
          sub_10B0E0(&v328, v47, (const __m128i **)&v314);
          v46 = v31[1];
          v48 = *v31;
          v47 += 16;
        }
        while ( v47 != *v31 + 16 * v46 );
      }
      v49 = v328.m128i_u64[1];
      if ( v328.m128i_i64[1] == v46 )
        goto LABEL_55;
      v279.m128i_i64[0] = -1;
      v279.m128i_i8[8] = 0;
      if ( v328.m128i_i64[1] < v46 )
      {
        v31[1] = v328.m128i_i64[1];
LABEL_55:
        v50 = v48;
        goto LABEL_56;
      }
      v152 = v31[2];
      if ( (unsigned __int64)&v279 < v48 || (unsigned __int64)&v279 >= v48 + 16 * v152 )
      {
        v50 = v48;
        if ( v152 < v328.m128i_i64[1] )
        {
          v50 = qvector_reserve((__int64)v31, 0, v328.m128i_i64[1], 16);
          v222 = v31[1];
          v223 = (__m128i *)v31[2];
          v31[2] = v152;
          v224 = (const __m128i *)*v31;
          v225 = v222 - 1;
          if ( v225 >= 0 )
          {
            v226 = v50;
            do
            {
              v227 = _mm_loadu_si128(v224);
              v226 += 16;
              ++v224;
              *(__m128i *)(v226 - 16) = v227;
              v167 = v225-- == 0;
            }
            while ( !v167 );
            v224 = (const __m128i *)*v31;
          }
          v255 = v223;
          qfree((__int64)v224);
          v228 = v255;
          v46 = v31[1];
          *v31 = v50;
          v31[2] = (__int64)v228;
        }
        if ( v46 < v49 )
        {
          v173 = _mm_load_si128(&v279);
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
        if ( v152 < v328.m128i_i64[1] )
        {
          v237 = qvector_reserve((__int64)v31, 0, v328.m128i_i64[1], 16);
          v238 = *v31;
          v50 = v237;
          v239 = v237;
          v240 = v31[1];
          v241 = (__m128i *)v31[2];
          v31[2] = v152;
          v242 = (const __m128i *)v238;
          v243 = v240 - 1;
          if ( v243 >= 0 )
          {
            do
            {
              v244 = _mm_loadu_si128(v242);
              v239 += 16;
              ++v242;
              *(__m128i *)(v239 - 16) = v244;
              v167 = v243-- == 0;
            }
            while ( !v167 );
            v238 = *v31;
          }
          v255 = v241;
          qfree(v238);
          v46 = v31[1];
          *v31 = v50;
          v31[2] = (__int64)v241;
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
      v51 = v328.m128i_i64[0];
      if ( v328.m128i_i64[0] )
      {
        if ( !v328.m128i_i64[1] )
        {
          v320.m128i_i64[0] = (__int64)off_4DD3C0;
          v52 = *(_QWORD *)v328.m128i_i64[0];
          goto LABEL_59;
        }
        v145 = *(_QWORD **)(v328.m128i_i64[0] + 8);
        if ( (_QWORD *)v328.m128i_i64[0] == v145 )
        {
          v320.m128i_i64[0] = (__int64)off_4DD3C0;
          v52 = *(_QWORD *)v328.m128i_i64[0];
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
        while ( (_QWORD *)v328.m128i_i64[0] != v145 );
        v320.m128i_i64[0] = (__int64)off_4DD3C0;
        if ( !v145 )
          goto LABEL_62;
        v52 = *v145;
        if ( v328.m128i_i64[1] )
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
              sub_102000(v151);
              goto LABEL_145;
            }
          }
          else
          {
            sub_102000(v150);
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
              *(_QWORD *)v328.m128i_i64[0] = v328.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL
                                           | *(_QWORD *)v328.m128i_i64[0] & 3LL;
              *(__m128i *)(v328.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                      (__m128i)v328.m128i_u64[0],
                                                      (__m128i)v328.m128i_u64[0]);
              *(_QWORD *)v328.m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v328.m128i_i64[0] |= 2uLL;
              v328.m128i_i64[1] = 0;
LABEL_60:
              if ( v328.m128i_i64[0] )
                qfree(v328.m128i_i64[0]);
              goto LABEL_62;
            }
          }
          *v148 = v149 | 2;
          goto LABEL_146;
        }
        v51 = (__int64)v145;
LABEL_59:
        *(_QWORD *)v51 = v51 & 0xFFFFFFFFFFFFFFFCLL | v52 & 3;
        *(__m128i *)(v328.m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v328.m128i_u64[0], (__m128i)v328.m128i_u64[0]);
        *(_QWORD *)v328.m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v328.m128i_i64[0] |= 2uLL;
        goto LABEL_60;
      }
      v320.m128i_i64[0] = (__int64)off_4DD3C0;
LABEL_62:
      if ( v326 )
      {
        *(_QWORD *)&v327 = 0;
        qfree((__int64)v326);
      }
      qfree(v325[0]);
      v53 = (_QWORD *)v317.m128i_i64[0];
      if ( v317.m128i_i64[0] )
      {
        if ( v317.m128i_i64[1] )
        {
          v54 = *(_QWORD **)(v317.m128i_i64[0] + 8);
          if ( v54 != (_QWORD *)v317.m128i_i64[0] )
          {
            v255 = &v295;
            do
            {
              v268 = (const __m128i *)(v54 + 3);
              sub_10B0E0(v255, (__int64)(v54 + 3), &v268);
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
      v256 = (__int64 (__fastcall **)())((char *)v256 + 1);
      v9 = *(_QWORD *)(a1 + 320);
      if ( (__int64 (__fastcall **)())v261 == v256 )
        break;
      continue;
    }
  }
  if ( !*(_DWORD *)(v9 + 64) )
  {
    v255 = &v295;
    v263 = &v317;
    sub_101D70();
  }
  v56 = *(__int64 **)(v9 + 528);
  v57 = *(_DWORD *)(a1 + 316);
  v255 = &v295;
  v58 = *v56;
  v263 = &v317;
  sub_103EF0((__int64)&v295, v9, (_QWORD *)(v58 + 240), v57);
  v59 = *(_QWORD *)(a1 + 320);
  v263 = &v317;
  v60 = sub_1D5170(v59);
  v61 = *(_DWORD *)(a1 + 316);
  v62 = *(_QWORD *)(a1 + 320);
  v263 = &v317;
  sub_103EF0((__int64)&v295, v62, (_QWORD *)(v60 + 160), v61);
  v63 = v317.m128i_i64[0];
  if ( !v317.m128i_i64[0] )
  {
    v256 = &off_4DD260;
    v257 = &off_4DD260 - 6;
    goto LABEL_91;
  }
  v64 = *(_QWORD *)v317.m128i_i64[0];
  if ( !v317.m128i_i64[1] )
  {
    *(_QWORD *)v317.m128i_i64[0] = *(_QWORD *)v317.m128i_i64[0] & 3LL | v317.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v235 = v317.m128i_i64[0];
    v236 = (__m128i)v317.m128i_u64[0];
    *(_QWORD *)v317.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v235 + 8) = _mm_unpacklo_epi64(v236, v236);
    *(_QWORD *)v317.m128i_i64[0] |= 2uLL;
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
      sub_102000(v68);
      goto LABEL_80;
    }
    goto LABEL_273;
  }
  sub_102000(v67);
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
  v63 = v317.m128i_i64[0];
  v64 = *(_QWORD *)v317.m128i_i64[0];
LABEL_84:
  *(_QWORD *)v63 = v64 & 3 | v63 & 0xFFFFFFFFFFFFFFFCLL;
  v69 = v317.m128i_i64[0];
  v70 = (__m128i)v317.m128i_u64[0];
  *(_QWORD *)v317.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v69 + 8) = _mm_unpacklo_epi64(v70, v70);
  *(_QWORD *)v317.m128i_i64[0] |= 2uLL;
  v317.m128i_i64[1] = 0;
LABEL_85:
  v256 = &off_4DD260;
  v257 = &off_4DD260 - 6;
  if ( v317.m128i_i64[0] )
    qfree(v317.m128i_i64[0]);
LABEL_91:
  v101 = v255;
  v280 = 0;
  v102 = _mm_loadh_ps((const double *)&v256);
  v281 = 5;
  v269 = (const __m128i *)&v280;
  v253 = v102;
  v254 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4DD400, (__m128i)(unsigned __int64)v255);
  sub_10BAA0(v255, (__int64)&v280, &v269);
  v103 = v260;
  v283 = 5;
  v270 = (const __m128i *)&v282;
  v282 = (int)v260;
  sub_10BAA0(v101, (__int64)&v282, &v270);
  v104 = *(_QWORD *)(a1 + 320);
  v285 = 5;
  v105 = *(_DWORD *)(v104 + 116);
  v271 = (const __m128i *)&v284;
  v284 = v103 + v105;
  sub_10BAA0(v101, (__int64)&v284, &v271);
  v106 = *(_QWORD *)(a1 + 320);
  v287 = 5;
  v107 = *(_QWORD *)(v106 + 144);
  v272 = (const __m128i *)&v286;
  v286 = v107;
  sub_10BAA0(v101, (__int64)&v286, &v272);
  v108 = *(_QWORD *)(a1 + 320);
  v289 = 5;
  v109 = *(_QWORD *)(v108 + 168);
  v273 = (const __m128i *)&v288;
  v288 = v109;
  sub_10BAA0(v101, (__int64)&v288, &v273);
  v291 = 5;
  v290 = v258;
  v274 = (const __m128i *)&v290;
  sub_10BAA0(v101, (__int64)&v290, &v274);
  v110 = *(_QWORD *)(a1 + 320);
  v111 = _mm_load_si128(&v254);
  v112 = _mm_load_si128((const __m128i *)&v253);
  v113 = *(_QWORD *)(v110 + 1440);
  v318 = &v292;
  v292 = v111;
  v317 = v112;
  v319 = _mm_unpacklo_epi64((__m128i)v113, (__m128i)((unsigned __int64)v296 + v113));
  sub_317450(v110 + 232, &v317.m128i_u64[1], (char *)v296 + v113, v114, v115, v116, v253.m128_u64[0]);
  v117 = *(_QWORD *)(a1 + 320);
  v118 = _mm_load_si128(&v254);
  v119 = _mm_load_si128((const __m128i *)&v253);
  v120 = *(_QWORD *)(v117 + 1440);
  v321 = &v293;
  v293 = v118;
  v320 = v119;
  v322 = _mm_unpacklo_epi64((__m128i)v120, (__m128i)((unsigned __int64)v296 + v120));
  sub_317450(v117 + 184, &v320.m128i_u64[1], (char *)v296 + v120, v121, v122, v123, v253.m128_u64[0]);
  v124 = *(void (**)())(*(_QWORD *)v259 + 72LL);
  if ( v124 != nullsub_35 )
    ((void (__fastcall *)(__int64, _QWORD, __m128i *))v124)(v259, *(_QWORD *)(a1 + 320), v255);
  v125 = v295.m128i_u64[1];
  v126 = *(_QWORD *)(a1 + 112);
  v127 = *(_QWORD *)(a1 + 104);
  if ( v295.m128i_i64[1] != v126 )
  {
    v294.m128i_i64[0] = -1;
    v294.m128i_i8[8] = 0;
    if ( v295.m128i_i64[1] >= v126 )
    {
      v155 = *(_QWORD *)(a1 + 120);
      v156 = a1 + 104;
      if ( (unsigned __int64)&v294 < v127 || (unsigned __int64)&v294 >= v127 + 16 * v155 )
      {
        if ( v155 < v295.m128i_i64[1] )
        {
          v127 = qvector_reserve(v156, 0, v295.m128i_i64[1], 16);
          v229 = *(_QWORD *)(a1 + 112);
          v230 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v155;
          v231 = *(const __m128i **)(a1 + 104);
          v232 = v229 - 1;
          if ( v232 >= 0 )
          {
            v233 = v127;
            do
            {
              v234 = _mm_loadu_si128(v231);
              v233 += 16LL;
              ++v231;
              *(__m128i *)(v233 - 16) = v234;
              v167 = v232-- == 0;
            }
            while ( !v167 );
            v231 = *(const __m128i **)(a1 + 104);
          }
          qfree((__int64)v231);
          *(_QWORD *)(a1 + 104) = v127;
          v126 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v230;
        }
        if ( v126 < v125 )
        {
          v175 = _mm_load_si128(&v294);
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
        if ( v155 < v295.m128i_i64[1] )
        {
          v245 = qvector_reserve(v156, 0, v295.m128i_i64[1], 16);
          v246 = *(_QWORD *)(a1 + 104);
          v127 = v245;
          v247 = v245;
          v248 = *(_QWORD *)(a1 + 112);
          v249 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = v155;
          v250 = (const __m128i *)v246;
          v251 = v248 - 1;
          if ( v251 >= 0 )
          {
            do
            {
              v252 = _mm_loadu_si128(v250);
              v247 += 16;
              ++v250;
              *(__m128i *)(v247 - 16) = v252;
              v167 = v251-- == 0;
            }
            while ( !v167 );
            v246 = *(_QWORD *)(a1 + 104);
          }
          qfree(v246);
          *(_QWORD *)(a1 + 104) = v127;
          v126 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 120) = v249;
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
  if ( !v295.m128i_i64[0] )
    return v334 - __readfsqword(0x28u);
  if ( !v295.m128i_i64[1] )
  {
    v130 = *(_QWORD *)v295.m128i_i64[0];
    v128 = v295.m128i_i64[0];
    goto LABEL_212;
  }
  v128 = *(_QWORD *)(v295.m128i_i64[0] + 8);
  if ( v295.m128i_i64[0] == v128 )
  {
    v130 = *(_QWORD *)v295.m128i_i64[0];
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
        *(_QWORD *)v295.m128i_i64[0] = v295.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v295.m128i_i64[0] & 3LL;
        v135 = v295.m128i_i64[0];
        v136 = (__m128i)v295.m128i_u64[0];
        *(_QWORD *)v295.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(v136, v136);
        *(_QWORD *)v295.m128i_i64[0] |= 2uLL;
        v295.m128i_i64[1] = 0;
        goto LABEL_113;
      }
    }
    else
    {
      sub_102000(v133);
      v134 = (__int64 *)v131[2];
      if ( (*(_BYTE *)v134 & 2) != 0 )
        goto LABEL_109;
    }
    sub_102000(v134);
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
  while ( v295.m128i_i64[0] != v128 );
  if ( v128 )
  {
    v130 = *(_QWORD *)v128;
    if ( v295.m128i_i64[1] )
      goto LABEL_105;
LABEL_212:
    *(_QWORD *)v128 = v130 & 3 | v128 & 0xFFFFFFFFFFFFFFFCLL;
    v193 = v295.m128i_i64[0];
    v194 = (__m128i)v295.m128i_u64[0];
    *(_QWORD *)v295.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v193 + 8) = _mm_unpacklo_epi64(v194, v194);
    *(_QWORD *)v295.m128i_i64[0] |= 2uLL;
LABEL_113:
    if ( v295.m128i_i64[0] )
      qfree(v295.m128i_i64[0]);
  }
  return v334 - __readfsqword(0x28u);
}
