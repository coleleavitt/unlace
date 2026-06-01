unsigned __int64 __fastcall sub_10B740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // r8
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r12d
  __m128i *v23; // r13
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 *v29; // rbp
  __int64 v30; // r12
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rax
  __int32 v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // r14
  __int64 i; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // r13
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // rdx
  unsigned __int64 v51; // rbp
  _QWORD *v52; // rbp
  _QWORD *v53; // r13
  _QWORD *v54; // rdx
  __int64 *v55; // rax
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rbp
  __int64 *v64; // r12
  __int64 v65; // rdx
  __int64 *v66; // rdi
  __int64 *v67; // rdi
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // r12
  __int64 v71; // rbp
  __int64 v72; // r12
  unsigned __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdi
  __m128i si128; // xmm2
  unsigned __int64 v77; // rdx
  __m128i v78; // xmm1
  __int64 v79; // rdx
  __int64 v80; // rdi
  __m128i v81; // xmm1
  __m128i v82; // xmm2
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdi
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __m128i *v97; // r15
  __int64 v98; // r8
  __int64 v99; // r9
  __m128i *v100; // r15
  __m128 v101; // xmm6
  int v102; // r14d
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdi
  __m128i v110; // xmm7
  __m128i v111; // xmm6
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdi
  __m128i v117; // xmm7
  __m128i v118; // xmm6
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  void (*v123)(); // rax
  unsigned __int64 v124; // rbp
  bool v125; // cf
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  unsigned __int64 v129; // rsi
  unsigned __int64 v130; // rbx
  __int64 *v131; // rbp
  __int64 v132; // rax
  __int64 *v133; // rdi
  __int64 *v134; // rdi
  __int64 v135; // rax
  __m128i v136; // xmm0
  __int64 *v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rax
  __m128i v141; // xmm0
  __int64 *v142; // r12
  __int64 *v143; // rdi
  _QWORD *v144; // rax
  _QWORD *v145; // rcx
  _QWORD *j; // rax
  __int64 *v147; // r12
  __int64 v148; // rax
  __int64 *v149; // rdi
  __int64 *v150; // rdi
  unsigned __int64 v151; // r8
  unsigned __int64 v152; // rdx
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rdi
  unsigned __int64 v156; // rdx
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  const __m128i **v160; // r8
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 (__fastcall **v163)(); // rdx
  const __m128i *v164; // rdi
  __int64 v165; // rax
  __int64 v166; // rsi
  __m128i v167; // xmm0
  __int64 v168; // rcx
  __int64 (__fastcall **v169)(); // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rdx
  __m128i v173; // xmm0
  unsigned __int64 v174; // rax
  unsigned __int64 v175; // rax
  __m128i v176; // xmm0
  unsigned __int64 v177; // rdx
  _QWORD *v178; // rdx
  __int64 v179; // rcx
  unsigned __int64 v180; // rsi
  _QWORD *v181; // rcx
  __int64 v182; // rsi
  _QWORD *v183; // rdi
  _QWORD *v184; // rax
  __int64 v185; // rdx
  unsigned __int64 v186; // rcx
  __int64 v187; // r11
  unsigned __int64 v188; // r12
  __int64 v189; // rax
  __m128i v190; // xmm0
  unsigned __int64 v191; // r13
  _QWORD *v192; // rax
  __int64 v193; // rax
  __m128i v194; // xmm0
  unsigned __int64 v195; // r15
  __int64 v196; // r14
  __int64 v197; // r10
  __int64 v198; // rax
  const __m128i *v199; // rdx
  __m128i *v200; // rdx
  unsigned __int64 v201; // rdx
  __int64 *v202; // r14
  __int64 v203; // rax
  __int64 *v204; // rdi
  __int64 *v205; // rdi
  __int64 v206; // rax
  __m128i v207; // xmm0
  __int64 v208; // rdx
  __int64 (__fastcall **v209)(); // rcx
  const __m128i *v210; // rdi
  __int64 v211; // rax
  __int64 v212; // r10
  char v213; // r9
  __int64 (__fastcall **v214)(); // r11
  __int64 v215; // rsi
  __m128i v216; // xmm0
  __int64 *v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rax
  __int64 v220; // rcx
  const __m128i *v221; // rdi
  __int64 v222; // rax
  __int64 v223; // rdx
  __m128i v224; // xmm0
  __int64 v225; // rcx
  __int64 v226; // rax
  __m128i v227; // xmm0
  __m128 v228; // [rsp+0h] [rbp-3B8h] BYREF
  __m128i v229; // [rsp+10h] [rbp-3A8h] BYREF
  __m128i *v230; // [rsp+28h] [rbp-390h] BYREF
  __int64 (__fastcall **v231)(); // [rsp+30h] [rbp-388h] BYREF
  __int64 (__fastcall **v232)(); // [rsp+38h] [rbp-380h]
  __int64 v233; // [rsp+40h] [rbp-378h]
  _OWORD *v234; // [rsp+48h] [rbp-370h]
  __int64 v235; // [rsp+50h] [rbp-368h]
  __int64 v236; // [rsp+58h] [rbp-360h]
  unsigned __int64 v237; // [rsp+60h] [rbp-358h]
  __int64 (__fastcall **v238)(); // [rsp+68h] [rbp-350h]
  __int64 *v239; // [rsp+70h] [rbp-348h]
  size_t n; // [rsp+78h] [rbp-340h]
  const __m128i *v241; // [rsp+88h] [rbp-330h] BYREF
  const __m128i *v242; // [rsp+90h] [rbp-328h] BYREF
  const __m128i *v243; // [rsp+98h] [rbp-320h] BYREF
  const __m128i *v244; // [rsp+A0h] [rbp-318h] BYREF
  const __m128i *v245; // [rsp+A8h] [rbp-310h] BYREF
  const __m128i *v246; // [rsp+B0h] [rbp-308h] BYREF
  const __m128i *v247; // [rsp+B8h] [rbp-300h] BYREF
  const __m128i *v248; // [rsp+C0h] [rbp-2F8h] BYREF
  const __m128i *v249; // [rsp+C8h] [rbp-2F0h] BYREF
  __int64 v250; // [rsp+D0h] [rbp-2E8h] BYREF
  char v251; // [rsp+D8h] [rbp-2E0h]
  __int64 v252; // [rsp+E0h] [rbp-2D8h] BYREF
  char v253; // [rsp+E8h] [rbp-2D0h]
  __m128i v254; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v255; // [rsp+100h] [rbp-2B8h] BYREF
  char v256; // [rsp+108h] [rbp-2B0h]
  __int64 v257; // [rsp+110h] [rbp-2A8h] BYREF
  char v258; // [rsp+118h] [rbp-2A0h]
  __int64 v259; // [rsp+120h] [rbp-298h] BYREF
  char v260; // [rsp+128h] [rbp-290h]
  __int64 v261; // [rsp+130h] [rbp-288h] BYREF
  char v262; // [rsp+138h] [rbp-280h]
  __int64 v263; // [rsp+140h] [rbp-278h] BYREF
  char v264; // [rsp+148h] [rbp-270h]
  _OWORD *v265; // [rsp+150h] [rbp-268h] BYREF
  char v266; // [rsp+158h] [rbp-260h]
  __m128i v267; // [rsp+160h] [rbp-258h] BYREF
  __m128i v268; // [rsp+170h] [rbp-248h] BYREF
  __m128i v269; // [rsp+180h] [rbp-238h] BYREF
  __m128i v270; // [rsp+190h] [rbp-228h] BYREF
  _OWORD *v271; // [rsp+1A0h] [rbp-218h]
  __int64 v272; // [rsp+1B0h] [rbp-208h] BYREF
  __int128 v273; // [rsp+1B8h] [rbp-200h]
  __m128i v274; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v275; // [rsp+1E0h] [rbp-1D8h]
  int v276; // [rsp+1E8h] [rbp-1D0h]
  __m128i v277; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 v278; // [rsp+200h] [rbp-1B8h]
  int v279; // [rsp+208h] [rbp-1B0h]
  __m128i v280; // [rsp+210h] [rbp-1A8h] BYREF
  __int64 v281; // [rsp+220h] [rbp-198h]
  int v282; // [rsp+228h] [rbp-190h]
  __m128i v283; // [rsp+230h] [rbp-188h] BYREF
  __m128i *v284; // [rsp+240h] [rbp-178h]
  __m128i v285; // [rsp+248h] [rbp-170h]
  __m128i v286; // [rsp+260h] [rbp-158h] BYREF
  __m128i *v287; // [rsp+270h] [rbp-148h]
  __m128i v288; // [rsp+278h] [rbp-140h]
  __m128i v289; // [rsp+290h] [rbp-128h] BYREF
  __m128i *v290; // [rsp+2A0h] [rbp-118h]
  __m128i v291; // [rsp+2A8h] [rbp-110h]
  __m128i v292; // [rsp+2C0h] [rbp-F8h] BYREF
  __m128i *v293; // [rsp+2D0h] [rbp-E8h]
  __m128i v294; // [rsp+2D8h] [rbp-E0h]
  __m128i v295; // [rsp+2F0h] [rbp-C8h] BYREF
  __m128i *v296; // [rsp+300h] [rbp-B8h]
  __m128i v297; // [rsp+308h] [rbp-B0h]
  char v298; // [rsp+318h] [rbp-A0h]
  __int64 v299; // [rsp+320h] [rbp-98h]
  __int64 v300[2]; // [rsp+328h] [rbp-90h] BYREF
  void *v301; // [rsp+338h] [rbp-80h]
  __int128 v302; // [rsp+340h] [rbp-78h]
  __m128i v303; // [rsp+350h] [rbp-68h] BYREF
  __int64 v304; // [rsp+360h] [rbp-58h]
  unsigned __int64 v305; // [rsp+368h] [rbp-50h]
  int v306; // [rsp+370h] [rbp-48h]
  char v307; // [rsp+374h] [rbp-44h]
  char v308; // [rsp+375h] [rbp-43h]
  unsigned __int64 v309; // [rsp+378h] [rbp-40h]

  v309 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 320);
  v270 = 0u;
  v8 = *(int *)(v7 + 64);
  v9 = v7;
  v235 = *(_QWORD *)(v7 + 1504);
  v236 = *(_QWORD *)(v7 + 136);
  v234 = (_OWORD *)*(int *)(v7 + 128);
  v271 = v234;
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
    goto LABEL_88;
  v10 = *(_QWORD *)(a1 + 88);
  v237 = (int)v8;
  if ( (int)v8 != v10 )
  {
    v272 = 0;
    v273 = 0;
    if ( (int)v8 < v10 )
    {
      v191 = (int)v8;
      do
      {
        v192 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 24 * v191);
        if ( *v192 )
        {
          v192[1] = 0;
          qfree();
        }
        ++v191;
      }
      while ( v191 < v10 );
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(a1 + 96);
      if ( (unsigned __int64)&v272 < v11 || (unsigned __int64)&v272 >= v11 + 24 * v12 )
      {
        if ( v12 < v237 )
        {
          v230 = &v270;
          *(_QWORD *)(a1 + 80) = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (__int64 *)v237;
        if ( v10 < v237 )
        {
          v13 = 24 * v10;
          do
          {
            ++v10;
            v14 = v13 + *(_QWORD *)(a1 + 80);
            v13 += 24;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
          }
          while ( a4 != (__int64 *)v10 );
        }
      }
      else
      {
        if ( v12 < v237 )
        {
          v230 = &v270;
          *(_QWORD *)(a1 + 80) = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 88);
        }
        a4 = (__int64 *)v237;
        if ( v10 < v237 )
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
          while ( a4 != (__int64 *)v10 );
        }
      }
    }
    v7 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 88) = v237;
    v9 = v7;
    if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
      goto LABEL_88;
  }
  if ( !*(_QWORD *)(v7 + 440) )
    goto LABEL_26;
  a4 = &v250;
  v15 = 0;
  v16 = 0;
  v228.m128_u64[0] = (unsigned __int64)&v250;
  do
  {
    v17 = *(_QWORD *)(v7 + 432) + 104 * v16;
    a5 = *(unsigned int *)(v17 + 92);
    if ( (_DWORD)a5 )
      goto LABEL_14;
    if ( *(_DWORD *)v17 == 1 )
    {
      v18 = *(__int64 **)(a1 + 80);
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *v18;
      v21 = *v18 + 16 * v18[1];
      if ( *v18 == v21 )
        goto LABEL_132;
      while ( *(_BYTE *)(v20 + 8) != 5 || (int)v19 != *(_QWORD *)v20 )
      {
        v20 += 16;
        if ( v21 == v20 )
          goto LABEL_132;
      }
      if ( v21 == v20 )
      {
LABEL_132:
        if ( v18[2] < (unsigned __int64)(v18[1] + 1) )
        {
          v231 = (__int64 (__fastcall **)())v18[2];
          v229.m128i_i64[0] = (__int64)v18;
          v230 = &v270;
          v159 = qvector_reserve();
          v160 = (const __m128i **)v229.m128i_i64[0];
          v161 = v159;
          v162 = *(_QWORD *)(v229.m128i_i64[0] + 8);
          v163 = *(__int64 (__fastcall ***)())(v229.m128i_i64[0] + 16);
          *(_QWORD *)(v229.m128i_i64[0] + 16) = v231;
          v164 = *v160;
          v165 = v162 - 1;
          if ( v165 >= 0 )
          {
            v166 = v161;
            do
            {
              v167 = _mm_loadu_si128(v164);
              v166 += 16;
              ++v164;
              *(__m128i *)(v166 - 16) = v167;
              v125 = v165-- == 0;
            }
            while ( !v125 );
          }
          v232 = v163;
          v231 = (__int64 (__fastcall **)())v161;
          v229.m128i_i64[0] = (__int64)v160;
          v230 = &v270;
          qfree();
          v18 = (__int64 *)v229.m128i_i64[0];
          v168 = (__int64)v231;
          v169 = v232;
          v170 = *(_QWORD *)(v229.m128i_i64[0] + 8);
          *(_QWORD *)v229.m128i_i64[0] = v231;
          v18[2] = (__int64)v169;
          v21 = 16 * v170 + v168;
        }
        *(_QWORD *)v21 = (int)v19;
        *(_BYTE *)(v21 + 8) = 5;
        ++v18[1];
      }
      v250 = (int)v19;
      v251 = 5;
      v241 = (const __m128i *)v228.m128_u64[0];
      v230 = &v270;
      sub_10A690(&v270, v228.m128_i64[0], &v241);
      v22 = *(_DWORD *)(v17 + 88) + v19;
      v253 = 5;
      v242 = (const __m128i *)&v252;
      v252 = v22;
      sub_10A690(&v270, (__int64)&v252, &v242);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v17 != 2 )
      goto LABEL_14;
    v295 = 0u;
    v296 = (__m128i *)v234;
    v230 = &v270;
    sub_10AB00();
    v187 = v295.m128i_i64[0];
    if ( !v295.m128i_i64[0] )
      goto LABEL_24;
    if ( !v295.m128i_i64[1] )
    {
      v188 = *(_QWORD *)v295.m128i_i64[0];
LABEL_202:
      *(_QWORD *)v187 = v187 & 0xFFFFFFFFFFFFFFFCLL | v188 & 3;
      v189 = v295.m128i_i64[0];
      v190 = (__m128i)v295.m128i_u64[0];
      *(_QWORD *)v295.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v189 + 8) = _mm_unpacklo_epi64(v190, v190);
      *(_QWORD *)v295.m128i_i64[0] |= 2uLL;
      goto LABEL_230;
    }
    v195 = *(_QWORD *)(v295.m128i_i64[0] + 8);
    if ( v295.m128i_i64[0] == v195 )
    {
      v188 = *(_QWORD *)v295.m128i_i64[0];
    }
    else
    {
      do
      {
        v196 = *(_QWORD *)(a1 + 80);
        v197 = *(_QWORD *)(v195 + 24);
        a6 = *(unsigned __int8 *)(v195 + 32);
        v198 = *(_QWORD *)(v196 + 8);
        a5 = *(_QWORD *)(v196 + 16);
        if ( a5 < v198 + 1 )
        {
          v233 = v187;
          v232 = (__int64 (__fastcall **)())a5;
          LOBYTE(v231) = a6;
          v229.m128i_i64[0] = v197;
          v208 = qvector_reserve();
          v209 = *(__int64 (__fastcall ***)())(v196 + 16);
          v210 = *(const __m128i **)v196;
          v211 = *(_QWORD *)(v196 + 8) - 1LL;
          *(_QWORD *)(v196 + 16) = v232;
          v212 = v229.m128i_i64[0];
          v213 = (char)v231;
          v214 = (__int64 (__fastcall **)())v233;
          if ( v211 >= 0 )
          {
            v215 = v208;
            do
            {
              v216 = _mm_loadu_si128(v210);
              v215 += 16;
              ++v210;
              *(__m128i *)(v215 - 16) = v216;
              v125 = v211-- == 0;
            }
            while ( !v125 );
          }
          v238 = v214;
          v233 = v208;
          v232 = v209;
          LOBYTE(v231) = v213;
          v229.m128i_i64[0] = v212;
          qfree();
          v199 = (const __m128i *)v233;
          a4 = (__int64 *)v232;
          v198 = *(_QWORD *)(v196 + 8);
          v187 = (__int64)v238;
          a6 = (unsigned __int8)v231;
          v197 = v229.m128i_i64[0];
          *(_QWORD *)v196 = v233;
          *(_QWORD *)(v196 + 16) = a4;
        }
        else
        {
          v199 = *(const __m128i **)v196;
        }
        v200 = (__m128i *)&v199[v198];
        v200->m128i_i64[0] = v197;
        v200->m128i_i8[8] = a6;
        ++*(_QWORD *)(v196 + 8);
        if ( (*(_QWORD *)v195 & 2) == 0 )
        {
          v201 = *(_QWORD *)(v195 + 16);
          if ( (*(_BYTE *)v201 & 2) != 0 )
          {
            v217 = (__int64 *)(*(_QWORD *)v195 & 0xFFFFFFFFFFFFFFFCLL);
            v218 = *v217;
            if ( (*v217 & 2) != 0 || v195 != v217[2] )
            {
LABEL_237:
              v195 = (unsigned __int64)v217;
            }
            else
            {
              while ( 1 )
              {
                v195 = v218 & 0xFFFFFFFFFFFFFFFCLL;
                v218 = *(_QWORD *)(v218 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v218 & 2) != 0 )
                  break;
                a4 = v217;
                v217 = (__int64 *)v195;
                if ( a4 != *(__int64 **)(v195 + 16) )
                  goto LABEL_237;
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
      while ( v187 != v195 );
      v187 = v295.m128i_i64[0];
      if ( !v295.m128i_i64[0] )
        goto LABEL_24;
      v188 = *(_QWORD *)v295.m128i_i64[0];
      if ( !v295.m128i_i64[1] )
        goto LABEL_202;
    }
    v202 = (__int64 *)(v188 & 0xFFFFFFFFFFFFFFFCLL);
    v203 = *(_QWORD *)(v188 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v203 & 2) == 0 )
    {
      v204 = (__int64 *)v202[1];
      if ( (*(_BYTE *)v204 & 2) != 0 )
      {
        v205 = (__int64 *)v202[2];
        if ( (*(_BYTE *)v205 & 2) != 0 )
          goto LABEL_254;
      }
      else
      {
        sub_100880(v204);
        v205 = (__int64 *)v202[2];
        if ( (*(_BYTE *)v205 & 2) != 0 )
          goto LABEL_225;
      }
      sub_100880(v205);
LABEL_225:
      v203 = *v202;
      if ( (*v202 & 2) != 0 )
      {
LABEL_226:
        if ( v188 > 3 )
          qfree();
        v187 = v295.m128i_i64[0];
        goto LABEL_229;
      }
LABEL_254:
      *v202 = v203 | 2;
      goto LABEL_226;
    }
LABEL_229:
    *(_QWORD *)v187 = v187 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v187 & 3LL;
    v206 = v295.m128i_i64[0];
    v207 = (__m128i)v295.m128i_u64[0];
    *(_QWORD *)v295.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v206 + 8) = _mm_unpacklo_epi64(v207, v207);
    *(_QWORD *)v295.m128i_i64[0] |= 2uLL;
    v295.m128i_i64[1] = 0;
LABEL_230:
    if ( v295.m128i_i64[0] )
      qfree();
LABEL_24:
    v7 = *(_QWORD *)(a1 + 320);
LABEL_14:
    ++v15;
    v9 = v7;
    v16 = v15;
  }
  while ( (unsigned __int64)v15 < *(_QWORD *)(v7 + 440) );
  if ( (*(_BYTE *)(a1 + 316) & 2) == 0 )
  {
LABEL_88:
    v231 = &off_4DCA80;
    v232 = &off_4DCA80 - 6;
    v230 = &v270;
    v228 = _mm_loadh_ps((const double *)&v231);
    v229 = (__m128i)_mm_loadh_ps((const double *)&v230);
    if ( (int)v8 > 0 )
    {
      v70 = 5 * v8;
      v71 = 0;
      v72 = 8 * v70;
      do
      {
        v73 = *(_QWORD *)(v9 + 1440);
        v74 = *(_QWORD *)(v9 + 128);
        v275 = v9;
        v75 = *(_QWORD *)(a1 + 176);
        si128 = _mm_load_si128((const __m128i *)&v228);
        v276 = 4;
        v77 = v73 + v74;
        v78 = _mm_load_si128(&v229);
        v284 = &v274;
        v283 = si128;
        v274 = v78;
        v285 = _mm_unpacklo_epi64((__m128i)v73, (__m128i)v77);
        sub_313F00(v71 + v75 + 16, &v283.m128i_u64[1], v77, a4, a5, a6, v228.m128_u64[0]);
        v79 = *(_QWORD *)(a1 + 320);
        v80 = *(_QWORD *)(a1 + 200);
        v279 = 4;
        v81 = _mm_load_si128(&v229);
        v82 = _mm_load_si128((const __m128i *)&v228);
        v287 = &v277;
        v83 = *(_QWORD *)(v79 + 1440);
        v84 = *(_QWORD *)(v79 + 128);
        v278 = v79;
        v277 = v81;
        v85 = v83 + v84;
        v286 = v82;
        v288 = _mm_unpacklo_epi64((__m128i)v83, (__m128i)v85);
        sub_313F00(v71 + v80 + 16, &v286.m128i_u64[1], v79, v85, v86, v87, v228.m128_u64[0]);
        v88 = *(_QWORD *)(a1 + 320);
        v89 = *(_QWORD *)(a1 + 224);
        v90 = _mm_load_si128(&v229);
        v91 = _mm_load_si128((const __m128i *)&v228);
        v282 = 4;
        v92 = *(_QWORD *)(v88 + 128);
        v281 = v88;
        v93 = *(_QWORD *)(v88 + 1440);
        v290 = &v280;
        v280 = v90;
        v94 = v93 + v92;
        v289 = v91;
        v291 = _mm_unpacklo_epi64((__m128i)v93, (__m128i)v94);
        sub_313F00(v71 + v89 + 16, &v289.m128i_u64[1], v94, &v280, v95, v96, v228.m128_u64[0]);
        v71 += 40;
        v9 = *(_QWORD *)(a1 + 320);
      }
      while ( v72 != v71 );
    }
    v97 = v230;
    sub_1025F0((__int64)v230, v9, a1 + 264, 4, a5, a6);
    sub_1025F0((__int64)v97, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 320) + 208LL, 4, v98, v99);
    goto LABEL_92;
  }
LABEL_26:
  v292 = 0u;
  v293 = (__m128i *)v234;
  if ( (int)v8 > 0 )
  {
    v232 = 0;
    v231 = (__int64 (__fastcall **)())&v292;
    while ( 2 )
    {
      if ( (unsigned int)v232 >= *(_DWORD *)(v9 + 64) )
      {
        v230 = &v270;
        v238 = (__int64 (__fastcall **)())&v292;
        sub_100560();
      }
      v23 = *(__m128i **)(*(_QWORD *)(v9 + 528) + 8LL * (_QWORD)v232);
      v24 = v292.m128i_i64[0];
      if ( !v292.m128i_i64[0] )
        goto LABEL_125;
      v25 = *(_QWORD *)v292.m128i_i64[0];
      if ( !v292.m128i_i64[1] )
      {
        *(_QWORD *)v292.m128i_i64[0] = v292.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v292.m128i_i64[0] & 3LL;
        v26 = v292.m128i_i64[0];
        v27 = (__m128i)v292.m128i_u64[0];
        *(_QWORD *)v292.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v27, v27);
        *(_QWORD *)v292.m128i_i64[0] |= 2uLL;
        goto LABEL_32;
      }
      v142 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      v139 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v139 & 2) == 0 )
      {
        v143 = (__int64 *)v142[1];
        if ( (*(_BYTE *)v143 & 2) != 0 )
        {
          v138 = (__int64 *)v142[2];
          if ( (*(_BYTE *)v138 & 2) == 0 )
            goto LABEL_119;
        }
        else
        {
          sub_100880(v143);
          v138 = (__int64 *)v142[2];
          if ( (*(_BYTE *)v138 & 2) == 0 )
LABEL_119:
            sub_100880(v138);
          v139 = *v142;
          if ( (*v142 & 2) != 0 )
          {
LABEL_121:
            if ( v25 > 3 )
              qfree();
            v24 = v292.m128i_i64[0];
            v25 = *(_QWORD *)v292.m128i_i64[0];
            goto LABEL_124;
          }
        }
        *v142 = v139 | 2;
        goto LABEL_121;
      }
LABEL_124:
      *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | v25 & 3;
      v140 = v292.m128i_i64[0];
      v141 = (__m128i)v292.m128i_u64[0];
      *(_QWORD *)v292.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v140 + 8) = _mm_unpacklo_epi64(v141, v141);
      *(_QWORD *)v292.m128i_i64[0] |= 2uLL;
LABEL_125:
      v292.m128i_i64[1] = 0;
LABEL_32:
      v28 = *(_QWORD *)(a1 + 80);
      LODWORD(v233) = *(_DWORD *)(a1 + 316) ^ 1;
      v29 = (__int64 *)(v28 + 24LL * (_QWORD)v232);
      if ( (v23[1].m128i_i32[2] & 0x600) != 0x200 )
      {
        if ( !under_debugger )
        {
          v230 = &v270;
          v238 = (__int64 (__fastcall **)())&v292;
          sub_37EA20(50139);
        }
        BUG();
      }
      v228.m128_i32[0] = v233 & 1;
      v30 = 40LL * v23[4].m128i_i32[2];
      if ( (v233 & 1) != 0 )
        v31 = *(_QWORD *)(a1 + 176) + v30;
      else
        v31 = *(_QWORD *)(a1 + 200) + v30;
      v32 = v23[4].m128i_i64[0];
      v230 = &v270;
      v238 = v231;
      sub_102690((__int64)v231, v32, (_QWORD *)v31, v233);
      v33 = v23[4].m128i_i64[0];
      v34 = v23[4].m128i_i32[2];
      v296 = v23;
      v295.m128i_i64[1] = v33;
      v229.m128i_i32[0] = v34;
      v299 = (__int64)v231;
      v297 = 0u;
      v298 = 0;
      v295.m128i_i64[0] = (__int64)off_4DCB20;
      v239 = v300;
      v230 = &v270;
      sub_63700(v300, v31);
      v301 = 0;
      v302 = 0;
      v38 = *(_QWORD *)(v31 + 24);
      if ( v38 )
      {
        v230 = *(__m128i **)(v31 + 24);
        n = 16 * v38;
        v301 = (void *)qalloc_or_throw();
        *((_QWORD *)&v302 + 1) = v230;
        memcpy(v301, *(const void **)(v31 + 16), n);
        v38 = (unsigned __int64)v230;
        *(_QWORD *)&v302 = v230;
      }
      v39 = *(_QWORD *)(v299 + 16);
      v303 = 0u;
      v304 = v39;
      v40 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v295.m128i_i64[1] + 1504) + 80LL));
      v307 = v233 & 1;
      v308 = 0;
      v306 = v233;
      v305 = _mm_unpacklo_epi32(v40, _mm_cvtsi32_si128(v229.m128i_u32[0])).m128i_u64[0];
      v41 = v23[3].m128i_i64[0];
      if ( v41 )
      {
        if ( v228.m128_i32[0] || (v41 = v23[3].m128i_i64[1]) != 0 )
        {
          while ( 1 )
          {
            sub_11C4C0(v41, &v295, v35, v38, v36, v37);
            v38 = v228.m128_u32[0];
            if ( !v228.m128_i32[0] )
              break;
            if ( !*(_QWORD *)(v41 + 8) )
              goto LABEL_47;
            v41 = *(_QWORD *)(v41 + 8);
          }
          for ( i = *(_QWORD *)(v41 + 16); i; i = *(_QWORD *)(v229.m128i_i64[0] + 16) )
          {
            v229.m128i_i64[0] = i;
            sub_11C4C0(i, &v295, i, v38, v36, v37);
          }
LABEL_47:
          v43 = v23[4].m128i_i32[2];
          if ( v228.m128_i32[0] )
            v44 = (_QWORD *)(*(_QWORD *)(a1 + 200) + 40 * v43);
          else
LABEL_48:
            v44 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 40 * v43);
          sub_102690((__int64)v231, v23[4].m128i_i64[0], v44, v233);
          goto LABEL_50;
        }
        v43 = v23[4].m128i_i32[2];
        goto LABEL_48;
      }
      sub_10A310(&v295, (__int64)v239, 0);
LABEL_50:
      v45 = v29[1];
      v46 = *v29;
      v47 = *v29;
      if ( 16 * v45 )
      {
        v228.m128_u64[0] = (unsigned __int64)&v289;
        do
        {
          v289.m128i_i64[0] = v46;
          sub_109CD0(&v303, v46, (const __m128i **)v228.m128_u64[0]);
          v45 = v29[1];
          v47 = *v29;
          v46 += 16;
        }
        while ( v46 != *v29 + 16 * v45 );
      }
      v48 = v303.m128i_u64[1];
      if ( v303.m128i_i64[1] == v45 )
        goto LABEL_56;
      v254.m128i_i64[0] = -1;
      v254.m128i_i8[8] = 0;
      if ( v303.m128i_i64[1] < v45 )
      {
        v29[1] = v303.m128i_i64[1];
LABEL_56:
        v49 = v47;
        goto LABEL_57;
      }
      v151 = v29[2];
      if ( (unsigned __int64)&v254 < v47 || (unsigned __int64)&v254 >= v47 + 16 * v151 )
      {
        v49 = v47;
        if ( v151 < v303.m128i_i64[1] )
        {
          v228.m128_u64[0] = v29[2];
          v49 = qvector_reserve();
          v219 = v29[1];
          v220 = v29[2];
          v221 = (const __m128i *)*v29;
          v29[2] = v228.m128_u64[0];
          v222 = v219 - 1;
          if ( v222 >= 0 )
          {
            v223 = v49;
            do
            {
              v224 = _mm_loadu_si128(v221);
              v223 += 16;
              ++v221;
              *(__m128i *)(v223 - 16) = v224;
              v125 = v222-- == 0;
            }
            while ( !v125 );
          }
          v228.m128_u64[0] = v220;
          qfree();
          v225 = v228.m128_u64[0];
          v45 = v29[1];
          *v29 = v49;
          v29[2] = v225;
        }
        if ( v45 < v48 )
        {
          v173 = _mm_load_si128(&v254);
          do
          {
            v174 = v45++;
            *(__m128i *)(v49 + 16 * v174) = v173;
            v49 = *v29;
          }
          while ( v48 != v45 );
        }
        v29[1] = v48;
      }
      else
      {
        sub_105760((__int64)v29, v303.m128i_u64[1]);
        v152 = v29[1];
        if ( v152 < v48 )
        {
          do
          {
            v153 = v152++;
            v154 = *v29 + 16 * v153;
            *(_QWORD *)v154 = -1;
            *(_BYTE *)(v154 + 8) = 0;
          }
          while ( v48 != v152 );
        }
        v29[1] = v48;
        v49 = *v29;
      }
LABEL_57:
      v50 = v303.m128i_i64[0];
      if ( v303.m128i_i64[0] )
      {
        if ( !v303.m128i_i64[1] )
        {
          v295.m128i_i64[0] = (__int64)off_4DCB20;
          v51 = *(_QWORD *)v303.m128i_i64[0];
          goto LABEL_60;
        }
        v144 = *(_QWORD **)(v303.m128i_i64[0] + 8);
        if ( (_QWORD *)v303.m128i_i64[0] == v144 )
        {
          v295.m128i_i64[0] = (__int64)off_4DCB20;
          v51 = *(_QWORD *)v303.m128i_i64[0];
          goto LABEL_143;
        }
        do
        {
          v49 += 16;
          *(_QWORD *)(v49 - 16) = v144[3];
          *(_BYTE *)(v49 - 8) = *((_BYTE *)v144 + 32);
          if ( (*v144 & 2) == 0 )
          {
            v145 = (_QWORD *)v144[2];
            if ( (*(_BYTE *)v145 & 2) != 0 )
            {
              v178 = (_QWORD *)(*v144 & 0xFFFFFFFFFFFFFFFCLL);
              v179 = *v178;
              if ( (*v178 & 2) == 0 )
              {
                while ( v144 == (_QWORD *)v178[2] )
                {
                  v144 = v178;
                  v180 = v179 & 0xFFFFFFFFFFFFFFFCLL;
                  v179 = *(_QWORD *)(v179 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v179 & 2) != 0 )
                  {
                    v144 = (_QWORD *)v180;
                    goto LABEL_140;
                  }
                  v178 = (_QWORD *)v180;
                }
              }
              v144 = v178;
            }
            else
            {
              for ( j = (_QWORD *)v145[1]; (*(_BYTE *)j & 2) == 0; j = (_QWORD *)j[1] )
                v145 = j;
              v144 = v145;
            }
          }
LABEL_140:
          ;
        }
        while ( (_QWORD *)v303.m128i_i64[0] != v144 );
        v295.m128i_i64[0] = (__int64)off_4DCB20;
        if ( !v144 )
          goto LABEL_63;
        v51 = *v144;
        if ( v303.m128i_i64[1] )
        {
LABEL_143:
          v147 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
          v148 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v148 & 2) != 0 )
            goto LABEL_150;
          v149 = (__int64 *)v147[1];
          if ( (*(_BYTE *)v149 & 2) != 0 )
          {
            v150 = (__int64 *)v147[2];
            if ( (*(_BYTE *)v150 & 2) == 0 )
            {
LABEL_146:
              sub_100880(v150);
              goto LABEL_147;
            }
          }
          else
          {
            sub_100880(v149);
            v150 = (__int64 *)v147[2];
            if ( (*(_BYTE *)v150 & 2) == 0 )
              goto LABEL_146;
LABEL_147:
            v148 = *v147;
            if ( (*v147 & 2) != 0 )
            {
LABEL_148:
              if ( v51 > 3 )
                qfree();
LABEL_150:
              *(_QWORD *)v303.m128i_i64[0] = v303.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL
                                           | *(_QWORD *)v303.m128i_i64[0] & 3LL;
              *(__m128i *)(v303.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                      (__m128i)v303.m128i_u64[0],
                                                      (__m128i)v303.m128i_u64[0]);
              *(_QWORD *)v303.m128i_i64[0] &= ~1uLL;
              *(_QWORD *)v303.m128i_i64[0] |= 2uLL;
              v303.m128i_i64[1] = 0;
LABEL_61:
              if ( v303.m128i_i64[0] )
                qfree();
              goto LABEL_63;
            }
          }
          *v147 = v148 | 2;
          goto LABEL_148;
        }
        v50 = (__int64)v144;
LABEL_60:
        *(_QWORD *)v50 = v50 & 0xFFFFFFFFFFFFFFFCLL | v51 & 3;
        *(__m128i *)(v303.m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v303.m128i_u64[0], (__m128i)v303.m128i_u64[0]);
        *(_QWORD *)v303.m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v303.m128i_i64[0] |= 2uLL;
        goto LABEL_61;
      }
      v295.m128i_i64[0] = (__int64)off_4DCB20;
LABEL_63:
      if ( v301 )
      {
        *(_QWORD *)&v302 = 0;
        qfree();
      }
      qfree();
      v52 = (_QWORD *)v292.m128i_i64[0];
      if ( v292.m128i_i64[0] )
      {
        if ( v292.m128i_i64[1] )
        {
          v53 = *(_QWORD **)(v292.m128i_i64[0] + 8);
          if ( v53 != (_QWORD *)v292.m128i_i64[0] )
          {
            v230 = &v270;
            do
            {
              v243 = (const __m128i *)(v53 + 3);
              sub_109CD0(v230, (__int64)(v53 + 3), &v243);
              if ( (*v53 & 2) == 0 )
              {
                v54 = (_QWORD *)v53[2];
                if ( (*(_BYTE *)v54 & 2) != 0 )
                {
                  v184 = (_QWORD *)(*v53 & 0xFFFFFFFFFFFFFFFCLL);
                  v185 = *v184;
                  if ( (*v184 & 2) == 0 )
                  {
                    while ( v53 == (_QWORD *)v184[2] )
                    {
                      v53 = v184;
                      v186 = v185 & 0xFFFFFFFFFFFFFFFCLL;
                      v185 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v185 & 2) != 0 )
                      {
                        v53 = (_QWORD *)v186;
                        goto LABEL_72;
                      }
                      v184 = (_QWORD *)v186;
                    }
                  }
                  v53 = v184;
                }
                else
                {
                  do
                  {
                    v53 = v54;
                    v54 = (_QWORD *)v54[1];
                  }
                  while ( (*(_BYTE *)v54 & 2) == 0 );
                }
              }
LABEL_72:
              ;
            }
            while ( v52 != v53 );
          }
        }
      }
      v232 = (__int64 (__fastcall **)())((char *)v232 + 1);
      v9 = *(_QWORD *)(a1 + 320);
      if ( (__int64 (__fastcall **)())v237 == v232 )
        break;
      continue;
    }
  }
  if ( !*(_DWORD *)(v9 + 64) )
  {
    v230 = &v270;
    v238 = (__int64 (__fastcall **)())&v292;
    sub_100560();
  }
  v55 = *(__int64 **)(v9 + 528);
  v56 = *(_DWORD *)(a1 + 316);
  v230 = &v270;
  v57 = *v55;
  v238 = (__int64 (__fastcall **)())&v292;
  sub_102690((__int64)&v270, v9, (_QWORD *)(v57 + 240), v56);
  v58 = *(_QWORD *)(a1 + 320);
  v238 = (__int64 (__fastcall **)())&v292;
  v59 = sub_1D25F0(v58);
  v60 = *(_DWORD *)(a1 + 316);
  v61 = *(_QWORD *)(a1 + 320);
  v238 = (__int64 (__fastcall **)())&v292;
  sub_102690((__int64)&v270, v61, (_QWORD *)(v59 + 160), v60);
  v62 = v292.m128i_i64[0];
  if ( !v292.m128i_i64[0] )
  {
    v231 = &off_4DCA80;
    v232 = &off_4DCA80 - 6;
    goto LABEL_92;
  }
  v63 = *(_QWORD *)v292.m128i_i64[0];
  if ( !v292.m128i_i64[1] )
  {
    *(_QWORD *)v292.m128i_i64[0] = *(_QWORD *)v292.m128i_i64[0] & 3LL | v292.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v226 = v292.m128i_i64[0];
    v227 = (__m128i)v292.m128i_u64[0];
    *(_QWORD *)v292.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v226 + 8) = _mm_unpacklo_epi64(v227, v227);
    *(_QWORD *)v292.m128i_i64[0] |= 2uLL;
    goto LABEL_86;
  }
  v64 = (__int64 *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
  v65 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v65 & 2) != 0 )
    goto LABEL_85;
  v66 = (__int64 *)v64[1];
  if ( (*(_BYTE *)v66 & 2) != 0 )
  {
    v67 = (__int64 *)v64[2];
    if ( (*(_BYTE *)v67 & 2) == 0 )
    {
LABEL_80:
      sub_100880(v67);
      goto LABEL_81;
    }
    goto LABEL_256;
  }
  sub_100880(v66);
  v67 = (__int64 *)v64[2];
  if ( (*(_BYTE *)v67 & 2) == 0 )
    goto LABEL_80;
LABEL_81:
  v65 = *v64;
  if ( (*v64 & 2) == 0 )
LABEL_256:
    *v64 = v65 | 2;
  if ( v63 > 3 )
    qfree();
  v62 = v292.m128i_i64[0];
  v63 = *(_QWORD *)v292.m128i_i64[0];
LABEL_85:
  *(_QWORD *)v62 = v63 & 3 | v62 & 0xFFFFFFFFFFFFFFFCLL;
  v68 = v292.m128i_i64[0];
  v69 = (__m128i)v292.m128i_u64[0];
  *(_QWORD *)v292.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v68 + 8) = _mm_unpacklo_epi64(v69, v69);
  *(_QWORD *)v292.m128i_i64[0] |= 2uLL;
  v292.m128i_i64[1] = 0;
LABEL_86:
  v231 = &off_4DCA80;
  v232 = &off_4DCA80 - 6;
  if ( v292.m128i_i64[0] )
    qfree();
LABEL_92:
  v100 = v230;
  v255 = 0;
  v101 = _mm_loadh_ps((const double *)&v231);
  v256 = 5;
  v244 = (const __m128i *)&v255;
  v228 = v101;
  v229 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4DCB60, (__m128i)(unsigned __int64)v230);
  sub_10A690(v230, (__int64)&v255, &v244);
  v102 = v236;
  v258 = 5;
  v245 = (const __m128i *)&v257;
  v257 = (int)v236;
  sub_10A690(v100, (__int64)&v257, &v245);
  v103 = *(_QWORD *)(a1 + 320);
  v260 = 5;
  v104 = *(_DWORD *)(v103 + 116);
  v246 = (const __m128i *)&v259;
  v259 = v102 + v104;
  sub_10A690(v100, (__int64)&v259, &v246);
  v105 = *(_QWORD *)(a1 + 320);
  v262 = 5;
  v106 = *(_QWORD *)(v105 + 144);
  v247 = (const __m128i *)&v261;
  v261 = v106;
  sub_10A690(v100, (__int64)&v261, &v247);
  v107 = *(_QWORD *)(a1 + 320);
  v264 = 5;
  v108 = *(_QWORD *)(v107 + 168);
  v248 = (const __m128i *)&v263;
  v263 = v108;
  sub_10A690(v100, (__int64)&v263, &v248);
  v266 = 5;
  v265 = v234;
  v249 = (const __m128i *)&v265;
  sub_10A690(v100, (__int64)&v265, &v249);
  v109 = *(_QWORD *)(a1 + 320);
  v110 = _mm_load_si128(&v229);
  v111 = _mm_load_si128((const __m128i *)&v228);
  v112 = *(_QWORD *)(v109 + 1440);
  v293 = &v267;
  v267 = v110;
  v292 = v111;
  v294 = _mm_unpacklo_epi64((__m128i)v112, (__m128i)((unsigned __int64)v271 + v112));
  sub_313F00(v109 + 232, &v292.m128i_u64[1], (char *)v271 + v112, v113, v114, v115, v228.m128_u64[0]);
  v116 = *(_QWORD *)(a1 + 320);
  v117 = _mm_load_si128(&v229);
  v118 = _mm_load_si128((const __m128i *)&v228);
  v119 = *(_QWORD *)(v116 + 1440);
  v296 = &v268;
  v268 = v117;
  v295 = v118;
  v297 = _mm_unpacklo_epi64((__m128i)v119, (__m128i)((unsigned __int64)v271 + v119));
  sub_313F00(v116 + 184, &v295.m128i_u64[1], (char *)v271 + v119, v120, v121, v122, v228.m128_u64[0]);
  v123 = *(void (**)())(*(_QWORD *)v235 + 72LL);
  if ( v123 != nullsub_33 )
    ((void (__fastcall *)(__int64, _QWORD, __m128i *))v123)(v235, *(_QWORD *)(a1 + 320), v230);
  v124 = v270.m128i_u64[1];
  v125 = v270.m128i_i64[1] < *(_QWORD *)(a1 + 112);
  if ( v270.m128i_i64[1] != *(_QWORD *)(a1 + 112) )
  {
    v269.m128i_i64[0] = -1;
    v126 = *(_QWORD *)(a1 + 104);
    v269.m128i_i8[8] = 0;
    if ( !v125 )
    {
      v155 = a1 + 104;
      if ( (unsigned __int64)&v269 < v126 || (unsigned __int64)&v269 >= 16LL * *(_QWORD *)(a1 + 120) + v126 )
      {
        sub_105760(v155, v270.m128i_u64[1]);
        v175 = *(_QWORD *)(a1 + 112);
        if ( v175 < v124 )
        {
          v176 = _mm_load_si128(&v269);
          do
          {
            v177 = v175++;
            *(__m128i *)(*(_QWORD *)(a1 + 104) + 16 * v177) = v176;
          }
          while ( v124 != v175 );
        }
      }
      else
      {
        sub_105760(v155, v270.m128i_u64[1]);
        v156 = *(_QWORD *)(a1 + 112);
        if ( v156 < v124 )
        {
          do
          {
            v157 = v156++;
            v158 = *(_QWORD *)(a1 + 104) + 16 * v157;
            *(_QWORD *)v158 = -1;
            *(_BYTE *)(v158 + 8) = 0;
          }
          while ( v124 != v156 );
        }
      }
    }
    *(_QWORD *)(a1 + 112) = v124;
  }
  if ( !v270.m128i_i64[0] )
    return v309 - __readfsqword(0x28u);
  if ( !v270.m128i_i64[1] )
  {
    v130 = *(_QWORD *)v270.m128i_i64[0];
    v127 = v270.m128i_i64[0];
    goto LABEL_210;
  }
  v127 = *(_QWORD *)(v270.m128i_i64[0] + 8);
  if ( v270.m128i_i64[0] == v127 )
  {
    v130 = *(_QWORD *)v270.m128i_i64[0];
LABEL_107:
    v131 = (__int64 *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
    v132 = *(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v132 & 2) != 0 )
      goto LABEL_114;
    v133 = (__int64 *)v131[1];
    if ( (*(_BYTE *)v133 & 2) != 0 )
    {
      v134 = (__int64 *)v131[2];
      if ( (*(_BYTE *)v134 & 2) != 0 )
      {
LABEL_251:
        *v131 = v132 | 2;
LABEL_112:
        if ( v130 > 3 )
          qfree();
LABEL_114:
        *(_QWORD *)v270.m128i_i64[0] = v270.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v270.m128i_i64[0] & 3LL;
        v135 = v270.m128i_i64[0];
        v136 = (__m128i)v270.m128i_u64[0];
        *(_QWORD *)v270.m128i_i64[0] &= ~1uLL;
        *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(v136, v136);
        *(_QWORD *)v270.m128i_i64[0] |= 2uLL;
        v270.m128i_i64[1] = 0;
        goto LABEL_115;
      }
    }
    else
    {
      sub_100880(v133);
      v134 = (__int64 *)v131[2];
      if ( (*(_BYTE *)v134 & 2) != 0 )
        goto LABEL_111;
    }
    sub_100880(v134);
LABEL_111:
    v132 = *v131;
    if ( (*v131 & 2) != 0 )
      goto LABEL_112;
    goto LABEL_251;
  }
  v128 = *(_QWORD *)(a1 + 104);
  do
  {
    *(_QWORD *)v128 = *(_QWORD *)(v127 + 24);
    *(_BYTE *)(v128 + 8) = *(_BYTE *)(v127 + 32);
    if ( (*(_QWORD *)v127 & 2) == 0 )
    {
      v129 = *(_QWORD *)(v127 + 16);
      if ( (*(_BYTE *)v129 & 2) != 0 )
      {
        v181 = (_QWORD *)(*(_QWORD *)v127 & 0xFFFFFFFFFFFFFFFCLL);
        v182 = *v181;
        if ( (*v181 & 2) != 0 || v127 != v181[2] )
        {
LABEL_188:
          v127 = (unsigned __int64)v181;
        }
        else
        {
          while ( 1 )
          {
            v127 = v182 & 0xFFFFFFFFFFFFFFFCLL;
            v182 = *(_QWORD *)(v182 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v182 & 2) != 0 )
              break;
            v183 = v181;
            v181 = (_QWORD *)v127;
            if ( v183 != *(_QWORD **)(v127 + 16) )
              goto LABEL_188;
          }
        }
      }
      else
      {
        do
        {
          v127 = v129;
          v129 = *(_QWORD *)(v129 + 8);
        }
        while ( (*(_BYTE *)v129 & 2) == 0 );
      }
    }
    v128 += 16;
  }
  while ( v270.m128i_i64[0] != v127 );
  if ( v127 )
  {
    v130 = *(_QWORD *)v127;
    if ( v270.m128i_i64[1] )
      goto LABEL_107;
LABEL_210:
    *(_QWORD *)v127 = v130 & 3 | v127 & 0xFFFFFFFFFFFFFFFCLL;
    v193 = v270.m128i_i64[0];
    v194 = (__m128i)v270.m128i_u64[0];
    *(_QWORD *)v270.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v193 + 8) = _mm_unpacklo_epi64(v194, v194);
    *(_QWORD *)v270.m128i_i64[0] |= 2uLL;
LABEL_115:
    if ( v270.m128i_i64[0] )
      qfree();
  }
  return v309 - __readfsqword(0x28u);
}
