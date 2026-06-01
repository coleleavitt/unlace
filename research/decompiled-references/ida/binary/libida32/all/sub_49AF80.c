unsigned __int64 __fastcall sub_49AF80(_QWORD *a1)
{
  __int64 v1; // rax
  size_t v2; // rsi
  void **v3; // rax
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r14
  unsigned int v17; // ebx
  unsigned int v18; // r12d
  __int64 *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned int v22; // r13d
  __int128 v23; // xmm0
  unsigned int v24; // ebx
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm2
  __m128i v35; // xmm2
  __int64 v36; // rax
  __m128i v37; // xmm2
  __m128i v38; // xmm2
  __m128i v39; // xmm2
  __m128i v40; // xmm2
  __m128i v41; // xmm2
  __m128i v42; // xmm2
  __m128i v43; // xmm1
  __int64 v44; // rdx
  __m128i v45; // xmm2
  __m128i v46; // xmm2
  unsigned __int64 v47; // rax
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // r12
  __m128i v51; // xmm5
  __m128i v52; // xmm6
  _QWORD *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  const char *v56; // rsi
  _QWORD *v57; // r12
  int v58; // ebx
  const char *v59; // rdi
  __int64 v60; // rdx
  const char *v61; // rcx
  __int64 *v62; // rbx
  __int64 v63; // r15
  __int64 v64; // r14
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  __int64 v67; // rbp
  unsigned int v68; // ecx
  __int64 v69; // r15
  __int64 v70; // r14
  __int64 *v71; // rax
  unsigned int v72; // r13d
  __int64 v73; // rcx
  __int64 *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 *v78; // r14
  bool v79; // cf
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // r14
  __int64 v85; // rdi
  char *v86; // rdx
  __int64 v87; // rbp
  __int64 v88; // rbx
  char *v89; // rax
  void *v90; // rdi
  char *v91; // r12
  char *v92; // r14
  __int64 v93; // r13
  __int64 v94; // rbp
  __int64 v95; // rbx
  __int64 v96; // rdi
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  __int64 *v102; // r14
  __int64 v103; // rdx
  __int64 v104; // r12
  __int64 *v105; // rbx
  __int64 v106; // r14
  __int64 v107; // rbp
  __int64 v108; // rdi
  __int64 v109; // rcx
  __int64 v110; // rdi
  __int64 *v111; // r13
  __int64 v112; // r14
  const char *v113; // rsi
  __int64 v114; // r8
  __int64 v115; // rbp
  size_t v116; // rcx
  void *v117; // rdi
  __m128i si128; // xmm0
  __int64 v119; // rbp
  __int64 v120; // rcx
  void *v121; // rdi
  __m128i v122; // xmm0
  unsigned __int64 v123; // rbp
  size_t v124; // r9
  size_t v125; // r10
  char *v126; // rdx
  __m128i v127; // xmm0
  __int64 v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // rbp
  char *v131; // rax
  void *v132; // rdi
  size_t v133; // rax
  const __m128i *v134; // rsi
  size_t v135; // rcx
  __int64 v136; // rbp
  void *v137; // rdi
  __m128i v138; // xmm0
  __int64 v139; // rax
  __m128i v140; // xmm0
  char *v141; // rdi
  __m128i v142; // xmm0
  __int64 v143; // rdx
  __int64 v144; // rbp
  __int64 v145; // r12
  char *v146; // rbx
  void *v147; // rdi
  void *v148; // rdi
  __int64 v149; // rax
  unsigned int v150; // r8d
  __int64 v151; // r13
  __int64 v152; // rax
  __int64 v153; // rsi
  unsigned __int64 v154; // rdx
  __int64 *v155; // r14
  __int64 v156; // rdx
  __int64 v157; // r12
  __int64 v158; // rbx
  __int64 v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rdi
  unsigned int v162; // ecx
  size_t v163; // rbp
  __int64 v164; // r9
  size_t v165; // rdx
  __int64 v166; // rdi
  void *v167; // rax
  size_t v168; // rdx
  const void **v169; // rcx
  void *v170; // rax
  void *v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rbp
  void *v174; // rax
  void *v175; // rax
  __int64 v176; // rsi
  __m128i v177; // [rsp+0h] [rbp-698h] BYREF
  const char *v178; // [rsp+18h] [rbp-680h]
  __int64 *v179; // [rsp+20h] [rbp-678h]
  __int64 v180; // [rsp+28h] [rbp-670h]
  size_t v181[2]; // [rsp+30h] [rbp-668h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-658h] BYREF
  __int64 v183; // [rsp+50h] [rbp-648h]
  _QWORD *v184; // [rsp+58h] [rbp-640h]
  _QWORD *v185; // [rsp+60h] [rbp-638h]
  __m128i v186; // [rsp+68h] [rbp-630h] BYREF
  __int64 *v187; // [rsp+78h] [rbp-620h]
  _BYTE *v188; // [rsp+80h] [rbp-618h]
  void **v189; // [rsp+88h] [rbp-610h]
  __int64 v190; // [rsp+90h] [rbp-608h]
  __int64 v191; // [rsp+98h] [rbp-600h]
  void *ptr; // [rsp+A0h] [rbp-5F8h] BYREF
  __int128 v193; // [rsp+A8h] [rbp-5F0h]
  __int64 v194; // [rsp+C0h] [rbp-5D8h] BYREF
  __int128 v195; // [rsp+C8h] [rbp-5D0h]
  __int64 v196; // [rsp+D8h] [rbp-5C0h]
  __int128 v197; // [rsp+E0h] [rbp-5B8h]
  __int64 v198; // [rsp+F0h] [rbp-5A8h]
  __int128 v199; // [rsp+F8h] [rbp-5A0h]
  __int64 v200; // [rsp+108h] [rbp-590h]
  __int128 v201; // [rsp+110h] [rbp-588h]
  __int64 v202; // [rsp+120h] [rbp-578h]
  __int128 v203; // [rsp+128h] [rbp-570h]
  int v204; // [rsp+138h] [rbp-560h]
  __int64 v205; // [rsp+140h] [rbp-558h]
  __int128 v206; // [rsp+148h] [rbp-550h]
  __int64 v207; // [rsp+158h] [rbp-540h]
  __int128 v208; // [rsp+160h] [rbp-538h]
  __int64 v209; // [rsp+170h] [rbp-528h]
  char v210; // [rsp+178h] [rbp-520h]
  __int64 v211; // [rsp+180h] [rbp-518h]
  __int128 v212; // [rsp+188h] [rbp-510h]
  __int64 v213; // [rsp+198h] [rbp-500h]
  __int128 v214; // [rsp+1A0h] [rbp-4F8h]
  __int64 v215; // [rsp+1B0h] [rbp-4E8h]
  __int128 v216; // [rsp+1B8h] [rbp-4E0h]
  int v217; // [rsp+1C8h] [rbp-4D0h]
  __int16 v218; // [rsp+1CCh] [rbp-4CCh]
  char v219; // [rsp+1CEh] [rbp-4CAh]
  __int64 v220; // [rsp+1D0h] [rbp-4C8h]
  __int128 v221; // [rsp+1D8h] [rbp-4C0h]
  const char *v222; // [rsp+1E8h] [rbp-4B0h]
  __int64 v223; // [rsp+1F0h] [rbp-4A8h]
  __int64 v224; // [rsp+1F8h] [rbp-4A0h]
  __int64 v225; // [rsp+200h] [rbp-498h]
  __int64 v226; // [rsp+208h] [rbp-490h]
  __int64 v227; // [rsp+210h] [rbp-488h]
  _OWORD v228[2]; // [rsp+218h] [rbp-480h] BYREF
  __int64 v229; // [rsp+238h] [rbp-460h]
  __int128 v230; // [rsp+240h] [rbp-458h]
  __int64 v231; // [rsp+250h] [rbp-448h]
  __int16 v232; // [rsp+258h] [rbp-440h]
  __int64 v233; // [rsp+260h] [rbp-438h] BYREF
  __m128i v234; // [rsp+268h] [rbp-430h] BYREF
  __int64 v235; // [rsp+278h] [rbp-420h]
  __m128i v236; // [rsp+280h] [rbp-418h] BYREF
  __int64 v237; // [rsp+290h] [rbp-408h]
  __m128i v238; // [rsp+298h] [rbp-400h] BYREF
  __int64 v239; // [rsp+2A8h] [rbp-3F0h]
  __m128i v240; // [rsp+2B0h] [rbp-3E8h] BYREF
  __int64 v241; // [rsp+2C0h] [rbp-3D8h]
  __m128i v242; // [rsp+2C8h] [rbp-3D0h] BYREF
  int v243; // [rsp+2D8h] [rbp-3C0h]
  __int64 v244; // [rsp+2E0h] [rbp-3B8h]
  __m128i v245; // [rsp+2E8h] [rbp-3B0h] BYREF
  __int64 v246; // [rsp+2F8h] [rbp-3A0h]
  __m128i v247; // [rsp+300h] [rbp-398h] BYREF
  __int64 v248; // [rsp+310h] [rbp-388h]
  char v249; // [rsp+318h] [rbp-380h]
  __int64 v250; // [rsp+320h] [rbp-378h]
  __m128i v251; // [rsp+328h] [rbp-370h] BYREF
  __int64 v252; // [rsp+338h] [rbp-360h]
  __m128i v253; // [rsp+340h] [rbp-358h] BYREF
  __int64 v254; // [rsp+350h] [rbp-348h]
  __m128i v255; // [rsp+358h] [rbp-340h] BYREF
  int v256; // [rsp+368h] [rbp-330h]
  __int16 v257; // [rsp+36Ch] [rbp-32Ch]
  char v258; // [rsp+36Eh] [rbp-32Ah]
  __int64 v259; // [rsp+370h] [rbp-328h]
  __m128i v260; // [rsp+378h] [rbp-320h] BYREF
  __int128 *v261; // [rsp+388h] [rbp-310h]
  unsigned __int64 v262; // [rsp+390h] [rbp-308h]
  __int64 v263; // [rsp+398h] [rbp-300h]
  __int64 v264; // [rsp+3A0h] [rbp-2F8h]
  __m128i v265; // [rsp+3A8h] [rbp-2F0h] BYREF
  __int128 v266; // [rsp+3B8h] [rbp-2E0h] BYREF
  __m128i v267; // [rsp+3C8h] [rbp-2D0h] BYREF
  __int64 v268; // [rsp+3D8h] [rbp-2C0h]
  __m128i v269; // [rsp+3E0h] [rbp-2B8h] BYREF
  __int64 v270; // [rsp+3F0h] [rbp-2A8h]
  __int16 v271; // [rsp+3F8h] [rbp-2A0h]
  __int64 v272; // [rsp+400h] [rbp-298h]
  __int64 v273; // [rsp+410h] [rbp-288h] BYREF
  __m128i v274; // [rsp+418h] [rbp-280h]
  __int64 v275; // [rsp+428h] [rbp-270h]
  __m128i v276; // [rsp+430h] [rbp-268h]
  __int64 v277; // [rsp+440h] [rbp-258h]
  __m128i v278; // [rsp+448h] [rbp-250h]
  __int64 v279; // [rsp+458h] [rbp-240h]
  __m128i v280; // [rsp+460h] [rbp-238h]
  __int64 v281; // [rsp+470h] [rbp-228h]
  __m128i v282; // [rsp+478h] [rbp-220h]
  int v283; // [rsp+488h] [rbp-210h]
  __int64 v284; // [rsp+490h] [rbp-208h]
  __m128i v285; // [rsp+498h] [rbp-200h]
  __int64 v286; // [rsp+4A8h] [rbp-1F0h]
  __m128i v287; // [rsp+4B0h] [rbp-1E8h]
  __int64 v288; // [rsp+4C0h] [rbp-1D8h]
  char v289; // [rsp+4C8h] [rbp-1D0h]
  __int64 v290; // [rsp+4D0h] [rbp-1C8h]
  __m128i v291; // [rsp+4D8h] [rbp-1C0h]
  __int64 v292; // [rsp+4E8h] [rbp-1B0h]
  __m128i v293; // [rsp+4F0h] [rbp-1A8h]
  __int64 v294; // [rsp+500h] [rbp-198h]
  __m128i v295; // [rsp+508h] [rbp-190h]
  int v296; // [rsp+518h] [rbp-180h]
  __int16 v297; // [rsp+51Ch] [rbp-17Ch]
  char v298; // [rsp+51Eh] [rbp-17Ah]
  __int64 v299; // [rsp+520h] [rbp-178h]
  __m128i v300; // [rsp+528h] [rbp-170h]
  __int128 *v301; // [rsp+538h] [rbp-160h]
  unsigned __int64 v302; // [rsp+540h] [rbp-158h]
  _QWORD v303[2]; // [rsp+548h] [rbp-150h] BYREF
  __m128i v304; // [rsp+558h] [rbp-140h]
  _QWORD v305[2]; // [rsp+568h] [rbp-130h] BYREF
  __m128i v306; // [rsp+578h] [rbp-120h]
  __int64 v307; // [rsp+588h] [rbp-110h]
  __m128i v308; // [rsp+590h] [rbp-108h]
  __int64 v309; // [rsp+5A0h] [rbp-F8h]
  __int16 v310; // [rsp+5A8h] [rbp-F0h]
  __int64 v311; // [rsp+5B0h] [rbp-E8h]
  __m128i v312; // [rsp+5C0h] [rbp-D8h] BYREF
  __m128i v313; // [rsp+5D0h] [rbp-C8h]
  _QWORD v314[2]; // [rsp+5E0h] [rbp-B8h] BYREF
  _BYTE v315[48]; // [rsp+5F0h] [rbp-A8h] BYREF
  char v316; // [rsp+620h] [rbp-78h] BYREF
  void *v317; // [rsp+638h] [rbp-60h] BYREF
  __int128 v318; // [rsp+640h] [rbp-58h]
  __int64 v319; // [rsp+650h] [rbp-48h]
  unsigned __int64 v320; // [rsp+658h] [rbp-40h]

  v184 = a1;
  v320 = __readfsqword(0x28u);
  v189 = &v317;
  v1 = a1[1];
  v2 = *(int *)(v1 + 28);
  v183 = v1;
  v314[0] = v1;
  v185 = v314;
  v3 = (void **)v315;
  LODWORD(v178) = v2;
  v4 = (unsigned __int64 *)v315;
  n[0] = v2;
  v314[1] = v2;
  v188 = v315;
  do
  {
    *v3 = nullptr;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( &v317 != v3 );
  v5 = n[0];
  v317 = nullptr;
  v319 = 0;
  ptr = nullptr;
  v318 = 0;
  v193 = 0;
  if ( n[0] )
  {
    v6 = (char *)qvector_reserve(&ptr, 0, n[0], 24);
    v7 = v193;
    ptr = v6;
    if ( (unsigned __int64)v193 < n[0] )
    {
      v8 = 24 * v193;
      v9 = &v6[24 * v193];
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      v10 = v7 + 1;
      if ( v7 + 1 < v5 )
      {
        v11 = v8 + 24;
        do
        {
          ++v10;
          v12 = (char *)ptr + v11;
          v11 += 24;
          *(_QWORD *)v12 = 0;
          *(_OWORD *)(v12 + 8) = 0;
        }
        while ( v5 != v10 );
      }
    }
    *(_QWORD *)&v193 = n[0];
  }
  v13 = *(_QWORD **)(switch_dbctx(*(int *)(v183 + 16)) + 1480);
  v14 = switch_dbctx(*(int *)(v183 + 20));
  v15 = *(int *)(v183 + 24);
  v16 = nullptr;
  v177.m128i_i64[0] = *(_QWORD *)(v14 + 1480);
  if ( (_DWORD)v15 != -1 )
    v16 = *(_QWORD **)(switch_dbctx(v15) + 1480);
  v17 = 1;
  v18 = 1;
  do
  {
    v18 = sub_485AC0((__int64)v13, v177.m128i_i64[0], v16, v18);
    v17 = sub_485AC0(v177.m128i_i64[0], v13, v16, v17);
  }
  while ( v18 != (unsigned int)sub_630AA0(v13, v13[1]) );
  v19 = &v194;
  v180 = 0;
  if ( (int)v178 > 0 )
  {
    do
    {
      v20 = *(int *)(v183 + 4 * v180 + 16);
      v177.m128i_i32[0] = v180;
      v21 = *(_QWORD *)(switch_dbctx(v20) + 1480);
      v181[0] = 24 * v180;
      v22 = sub_630AA0(v21, 0);
      v23 = 0;
      v24 = 1;
      v178 = (const char *)v228;
      if ( v22 > 1 )
      {
        do
        {
          v210 = 0;
          v194 = 0;
          v196 = 0;
          v222 = v178;
          v198 = 0;
          v200 = 0;
          v202 = 0;
          v204 = 0;
          v205 = 0;
          v207 = 0;
          v209 = 0;
          v211 = 0;
          v213 = 0;
          v215 = 0;
          v217 = -1;
          v218 = 0;
          v219 = 0;
          v220 = 0;
          v223 = 1;
          v224 = 0;
          v195 = v23;
          v197 = v23;
          v199 = v23;
          v201 = v23;
          v203 = v23;
          v206 = v23;
          v208 = v23;
          v212 = v23;
          v214 = v23;
          v216 = v23;
          v221 = v23;
          v225 = 0;
          v226 = 1065353216;
          v227 = 0;
          v229 = 0;
          v231 = 0;
          v232 = 0;
          v228[0] = v23;
          v228[1] = v23;
          v230 = v23;
          if ( (unsigned __int8)sub_4845A0((__int64)v19, v177.m128i_u32[0], 0, v24, 1) )
          {
            if ( !HIDWORD(v209) )
            {
              v179 = &v233;
              sub_488720((__int64)&v233, (__int64)v19);
              v28 = *v4;
              v29 = v4[2];
              v272 = -1;
              if ( (unsigned __int64)&v233 < v28 || (unsigned __int64)&v233 >= v28 + 424 * v29 )
              {
                v49 = v4[1];
                if ( v29 < v49 + 1 )
                {
                  v99 = qvector_reserve(v4, 0, v49 + 1, 424);
                  v100 = v4[1];
                  v101 = v4[2];
                  v4[2] = v29;
                  v102 = (__int64 *)*v4;
                  v186.m128i_i64[0] = v101;
                  v103 = v100 - 1;
                  if ( v103 >= 0 )
                  {
                    v186.m128i_i32[2] = v24;
                    v104 = v99;
                    v105 = v102;
                    v106 = v99;
                    v187 = v19;
                    v107 = v103;
                    do
                    {
                      v108 = v104;
                      v104 += 424;
                      sub_486910(v108, v105);
                      v109 = v105[52];
                      v110 = (__int64)v105;
                      v105 += 53;
                      *(_QWORD *)(v104 - 8) = v109;
                      sub_481890(v110);
                      v79 = v107-- == 0;
                    }
                    while ( !v79 );
                    v99 = v106;
                    v24 = v186.m128i_u32[2];
                    v19 = v187;
                    v102 = (__int64 *)*v4;
                  }
                  v186.m128i_i64[1] = v99;
                  qfree(v102);
                  v28 = v186.m128i_u64[1];
                  v4[2] = v186.m128i_i64[0];
                  v49 = v4[1];
                  *v4 = v28;
                }
                v50 = v28 + 424 * v49;
                sub_486910(v50, v179);
                *(_QWORD *)(v50 + 416) = v272;
              }
              else
              {
                v30 = v233;
                v31 = _mm_load_si128(&v236);
                v233 = 0;
                v32 = _mm_loadu_si128(&v234);
                v273 = v30;
                v276 = v31;
                v33 = _mm_loadu_si128(&v238);
                v275 = v235;
                v278 = v33;
                v34 = _mm_load_si128(&v240);
                v277 = v237;
                v280 = v34;
                v35 = _mm_loadu_si128(&v242);
                v279 = v239;
                v274 = v32;
                v281 = v241;
                v234 = 0;
                v236 = 0;
                v238 = 0;
                v240 = 0;
                v282 = v35;
                v242 = 0;
                v235 = 0;
                v237 = 0;
                v239 = 0;
                v241 = 0;
                v283 = v243;
                v36 = v244;
                v37 = _mm_loadu_si128(&v245);
                v244 = 0;
                v284 = v36;
                v285 = v37;
                v38 = _mm_load_si128(&v247);
                v286 = v246;
                v287 = v38;
                v39 = _mm_loadu_si128(&v251);
                v288 = v248;
                v291 = v39;
                v40 = _mm_load_si128(&v253);
                v289 = v249;
                v293 = v40;
                v41 = _mm_loadu_si128(&v255);
                v290 = v250;
                v245 = 0;
                v292 = v252;
                v247 = 0;
                v294 = v254;
                v251 = 0;
                v253 = 0;
                v246 = 0;
                v250 = 0;
                v252 = 0;
                v254 = 0;
                v295 = v41;
                v255 = 0;
                v42 = _mm_loadu_si128(&v260);
                v296 = v256;
                v260 = 0;
                v43 = _mm_loadu_si128(&v265);
                v303[1] = v264;
                v297 = v257;
                v301 = v261;
                v298 = v258;
                v302 = v262;
                v299 = v259;
                v259 = 0;
                v303[0] = v263;
                v305[0] = 0;
                v300 = v42;
                v304 = v43;
                if ( v261 == &v266 )
                {
                  v301 = (__int128 *)v305;
                  v305[0] = v266;
                }
                v44 = -1;
                if ( v263 )
                {
                  *((_QWORD *)v301 + *(unsigned int *)(v263 + 8) % v262) = v303;
                  v44 = v272;
                  v29 = v4[2];
                }
                v45 = _mm_loadu_si128(&v267);
                v311 = v44;
                v265.m128i_i64[1] = 0;
                v305[1] = *((_QWORD *)&v266 + 1);
                v306 = v45;
                v46 = _mm_load_si128(&v269);
                v307 = v268;
                v262 = 1;
                v309 = v270;
                v261 = &v266;
                v310 = v271;
                v47 = v4[1];
                v263 = 0;
                v266 = 0;
                v264 = 0;
                v268 = 0;
                v267 = 0;
                v308 = v46;
                v269 = 0;
                if ( v29 < v47 + 1 )
                {
                  v152 = qvector_reserve(v4, 0, v47 + 1, 424);
                  v153 = v4[2];
                  v154 = v4[1];
                  v186.m128i_i64[0] = v152;
                  v4[2] = v29;
                  v155 = (__int64 *)*v4;
                  v186.m128i_i64[1] = v153;
                  v156 = v154 - 1;
                  if ( v156 >= 0 )
                  {
                    LODWORD(v187) = v24;
                    v157 = v152;
                    v158 = v156;
                    do
                    {
                      v159 = v157;
                      v157 += 424;
                      sub_486910(v159, v155);
                      v160 = v155[52];
                      v161 = (__int64)v155;
                      v155 += 53;
                      *(_QWORD *)(v157 - 8) = v160;
                      sub_481890(v161);
                      v79 = v158-- == 0;
                    }
                    while ( !v79 );
                    v24 = (unsigned int)v187;
                    v155 = (__int64 *)*v4;
                  }
                  qfree(v155);
                  *v4 = v186.m128i_i64[0];
                  v4[2] = v186.m128i_u64[1];
                  v47 = v4[1];
                }
                v48 = *v4 + 424 * v47;
                sub_486910(v48, &v273);
                *(_QWORD *)(v48 + 416) = v311;
                sub_481890((__int64)&v273);
              }
              ++v4[1];
              sub_481890((__int64)v179);
            }
          }
          else
          {
            v25 = (__int64 *)((char *)ptr + v181[0]);
            v26 = *(_QWORD *)((char *)ptr + v181[0] + 8);
            v27 = *(_QWORD *)((char *)ptr + v181[0]);
            if ( *(_QWORD *)((char *)ptr + v181[0] + 16) < (unsigned __int64)(v26 + 1) )
            {
              v98 = qvector_reserve((char *)ptr + v181[0], v27, v26 + 1, 4);
              *v25 = v98;
              v27 = v98;
              v26 = v25[1];
            }
            *(_DWORD *)(v27 + 4 * v26) = v24;
            ++v25[1];
          }
          ++v24;
          sub_481890((__int64)v19);
          v23 = 0;
        }
        while ( v24 != v22 );
      }
      ++v180;
      v4 += 3;
    }
    while ( n[0] != v180 );
  }
  v313 = 0u;
  v312 = 0;
  v177 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B02C10), (__m128i)(unsigned __int64)sub_47DC20);
  if ( sub_47DCE0 )
  {
    v51 = _mm_load_si128(&v177);
    v312.m128i_i64[0] = (__int64)sub_47DCE0;
    v313 = v51;
  }
  sub_4994E0(v185, &v312, 1);
  sub_374250((__int64)&v312);
  v313 = 0u;
  v312 = 0;
  if ( sub_47DE50 )
  {
    v52 = _mm_load_si128(&v177);
    v312.m128i_i64[0] = (__int64)sub_47DE50;
    v313 = v52;
  }
  v53 = v185;
  sub_4994E0(v185, &v312, 0);
  sub_374250((__int64)&v312);
  sub_4892A0(v53, v184 + 19, 1);
  v55 = v184[19];
  v56 = (const char *)v184[20];
  v57 = (_QWORD *)v184[21];
  v177.m128i_i64[0] = v55;
  v178 = v56;
  if ( v57 )
  {
    v180 = (__int64)(v57 + 5);
    v58 = *(_DWORD *)(v183 + 20);
    if ( get_dbctx_qty(v53, v56, v54, v55) )
    {
      v59 = (const char *)v58;
      LODWORD(v179) = get_dbctx_id();
      v274.m128i_i64[0] = switch_dbctx(v58);
      v62 = *(__int64 **)(v177.m128i_i64[0] + 48);
      if ( v62 )
        goto LABEL_41;
LABEL_49:
      if ( (_DWORD)v179 != -1 )
      {
        v66 = (int)v179;
        if ( v66 < get_dbctx_qty(v59, v56, v60, v61) )
        {
          if ( (unsigned __int8)sub_3E8690() )
            switch_dbctx(v66);
        }
      }
      v62 = *(__int64 **)(v177.m128i_i64[0] + 48);
    }
    else
    {
      v59 = (const char *)v58;
      v274.m128i_i64[0] = switch_dbctx(v58);
      LODWORD(v179) = -1;
      v62 = *(__int64 **)(v177.m128i_i64[0] + 48);
      if ( v62 )
      {
LABEL_41:
        v63 = 0;
        v186.m128i_i64[1] = v177.m128i_i64[0] + 40;
        v187 = (__int64 *)(v178 + 40);
        while ( 1 )
        {
          v56 = (const char *)v177.m128i_i64[0];
          v64 = 416 * v63;
          v65 = 416 * v63 + *(_QWORD *)(v177.m128i_i64[0] + 40);
          if ( !*(_DWORD *)(v65 + 176) )
            goto LABEL_48;
          v61 = v178;
          v60 = v64 + *((_QWORD *)v178 + 5);
          if ( !*(_DWORD *)(v60 + 176) )
            goto LABEL_48;
          v61 = (const char *)v57[5];
          if ( *(_DWORD *)&v61[v64 + 176] )
            goto LABEL_48;
          v61 = *(const char **)(v65 + 160);
          if ( *(_QWORD *)(v60 + 160) )
          {
            v56 = *(const char **)(v60 + 152);
            v59 = haystack;
            if ( !v61 )
            {
              if ( strcmp(haystack, v56) )
                goto LABEL_102;
              goto LABEL_48;
            }
          }
          else
          {
            v56 = haystack;
            if ( !v61 )
              goto LABEL_48;
          }
          v59 = *(const char **)(v65 + 152);
          if ( strcmp(v59, v56) )
          {
LABEL_102:
            sub_486C80(v186.m128i_i64[1]);
            sub_486C80(v180);
            v111 = sub_486C80((__int64)v187);
            v112 = *((_QWORD *)v178 + 5) + v64;
            sub_47EEB0((__int64)v111, v112);
            sub_47EE10((__int64)(v111 + 3), v112 + 24);
            sub_47EE10((__int64)(v111 + 6), v112 + 48);
            sub_47EEB0((__int64)(v111 + 9), v112 + 72);
            sub_47EE10((__int64)(v111 + 12), v112 + 96);
            *((_DWORD *)v111 + 30) = *(_DWORD *)(v112 + 120);
            sub_47EE10((__int64)(v111 + 16), v112 + 128);
            v113 = (const char *)(v112 + 152);
            sub_47EEB0((__int64)(v111 + 19), v112 + 152);
            v115 = 0;
            *((_DWORD *)v111 + 44) = *(_DWORD *)(v112 + 176);
            *((_DWORD *)v111 + 45) = *(_DWORD *)(v112 + 180);
            *((_BYTE *)v111 + 184) = *(_BYTE *)(v112 + 184);
            v116 = *(_QWORD *)(v112 + 200);
            if ( v116 )
            {
              n[0] = *(_QWORD *)(v112 + 200);
              v181[0] = 4 * v116;
              v171 = (void *)qalloc_or_throw(4 * v116, v113);
              v113 = *(const char **)(v112 + 192);
              v115 = (__int64)v171;
              memcpy(v171, v113, v181[0]);
              v116 = n[0];
            }
            v117 = (void *)v111[24];
            si128 = _mm_unpacklo_epi64((__m128i)v116, (__m128i)v116);
            if ( v117 )
            {
              v111[25] = 0;
              *(__m128i *)v181 = si128;
              qfree(v117);
              si128 = _mm_load_si128((const __m128i *)v181);
            }
            v111[24] = v115;
            v119 = 0;
            *(__m128i *)(v111 + 25) = si128;
            v120 = *(_QWORD *)(v112 + 224);
            if ( v120 )
            {
              n[0] = *(_QWORD *)(v112 + 224);
              v181[0] = 16 * v120;
              v170 = (void *)qalloc_or_throw(16 * v120, v113);
              v113 = *(const char **)(v112 + 216);
              v119 = (__int64)v170;
              memcpy(v170, v113, v181[0]);
              v120 = n[0];
            }
            v121 = (void *)v111[27];
            v122 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v120, (__m128i)(unsigned __int64)v120);
            if ( v121 )
            {
              v111[28] = 0;
              *(__m128i *)v181 = v122;
              qfree(v121);
              v122 = _mm_load_si128((const __m128i *)v181);
            }
            v111[27] = v119;
            *((__m128i *)v111 + 14) = v122;
            if ( v111 + 30 != (__int64 *)(v112 + 240) )
            {
              v123 = *(_QWORD *)(v112 + 248);
              if ( v123 && (v124 = v123 - 1, v123 != 1) )
              {
                v181[0] = *(_QWORD *)(v112 + 240);
                v175 = (void *)v111[30];
                if ( v111[32] < v123 )
                {
                  v176 = v111[30];
                  n[0] = v123 - 1;
                  v175 = (void *)qvector_reserve(v111 + 30, v176, v123, 1);
                  v111[30] = (__int64)v175;
                  v124 = n[0];
                }
                v111[31] = v123;
                v113 = (const char *)v181[0];
                memmove(v175, (const void *)v181[0], v124);
                *(_BYTE *)(v111[30] + v123 - 1) = 0;
              }
              else
              {
                v111[31] = 0;
              }
            }
            v181[0] = 0;
            *((_DWORD *)v111 + 66) = *(_DWORD *)(v112 + 264);
            *((_BYTE *)v111 + 268) = *(_BYTE *)(v112 + 268);
            *((_BYTE *)v111 + 269) = *(_BYTE *)(v112 + 269);
            *((_BYTE *)v111 + 270) = *(_BYTE *)(v112 + 270);
            v125 = *(_QWORD *)(v112 + 280);
            if ( v125 )
            {
              n[0] = *(_QWORD *)(v112 + 280);
              v181[0] = qalloc_or_throw(32 * v125, v113);
              v125 = n[0];
              v163 = v181[0];
              v164 = 0;
              do
              {
                v120 = *(_QWORD *)(v112 + 272) + 32 * v164;
                *(_OWORD *)(v163 + 8) = 0;
                *(_QWORD *)v163 = 0;
                v165 = *(_QWORD *)(v120 + 8);
                if ( v165 )
                {
                  v166 = *(_QWORD *)(v120 + 8);
                  v191 = v164;
                  v186.m128i_i64[0] = v120;
                  v190 = v125;
                  n[0] = v165;
                  v167 = (void *)qalloc_or_throw(v166, v113);
                  v168 = n[0];
                  v169 = (const void **)v186.m128i_i64[0];
                  *(_QWORD *)v163 = v167;
                  *(_QWORD *)(v163 + 16) = v168;
                  v113 = (const char *)*v169;
                  memcpy(v167, *v169, v168);
                  v120 = v186.m128i_i64[0];
                  v164 = v191;
                  v125 = v190;
                  *(_QWORD *)(v163 + 8) = n[0];
                }
                ++v164;
                v163 += 32LL;
                *(_DWORD *)(v163 - 8) = *(_DWORD *)(v120 + 24);
              }
              while ( v125 != v164 );
            }
            v126 = (char *)v111[34];
            v127 = _mm_unpacklo_epi64((__m128i)v125, (__m128i)v125);
            if ( v126 )
            {
              v128 = v111[35];
              if ( v128 )
              {
                v186.m128i_i64[0] = (__int64)v62;
                *(__m128i *)n = v127;
                v129 = 0;
                v130 = v128;
                do
                {
                  v131 = &v126[32 * v129];
                  v132 = *(void **)v131;
                  if ( *(_QWORD *)v131 )
                  {
                    *((_QWORD *)v131 + 1) = 0;
                    qfree(v132);
                    v126 = (char *)v111[34];
                  }
                  ++v129;
                }
                while ( v130 != v129 );
                v127 = _mm_load_si128((const __m128i *)n);
                v62 = (__int64 *)v186.m128i_i64[0];
              }
              v111[35] = 0;
              *(__m128i *)n = v127;
              qfree(v126);
              v127 = _mm_load_si128((const __m128i *)n);
            }
            v133 = v181[0];
            v134 = (const __m128i *)(v112 + 296);
            *(__m128i *)(v111 + 35) = v127;
            v111[34] = v133;
            if ( (__int64 *)(v112 + 296) != v111 + 37 )
              sub_48B2A0((unsigned __int64)(v111 + 37), v134, (__int64)v126, v120, v114);
            v135 = *(_QWORD *)(v112 + 360);
            v136 = 0;
            if ( v135 )
            {
              n[0] = *(_QWORD *)(v112 + 360);
              v181[0] = 8 * v135;
              v174 = (void *)qalloc_or_throw(8 * v135, v134->m128i_i8);
              v134 = *(const __m128i **)(v112 + 352);
              v136 = (__int64)v174;
              memcpy(v174, v134, v181[0]);
              v135 = n[0];
            }
            v137 = (void *)v111[44];
            v138 = _mm_unpacklo_epi64((__m128i)v135, (__m128i)v135);
            if ( v137 )
            {
              v111[45] = 0;
              *(__m128i *)v181 = v138;
              qfree(v137);
              v138 = _mm_load_si128((const __m128i *)v181);
            }
            v111[44] = v136;
            *(__m128i *)(v111 + 45) = v138;
            v139 = *(_QWORD *)(v112 + 384);
            v190 = 0;
            v186.m128i_i64[0] = v139;
            if ( v139 )
            {
              v190 = qalloc_or_throw(v139 << 7, v134->m128i_i8);
              v172 = v190;
              v173 = 0;
              do
              {
                v181[0] = v172;
                n[0] = *(_QWORD *)(v112 + 376) + (v173 << 7);
                sub_480B60(v172, (const __m128i *)n[0]);
                ++v173;
                v172 = v181[0] + 128;
                *(_DWORD *)(v181[0] + 124) = *(_DWORD *)(n[0] + 124);
              }
              while ( v186.m128i_i64[0] != v173 );
            }
            v140 = _mm_loadl_epi64(&v186);
            v141 = (char *)v111[47];
            v142 = _mm_unpacklo_epi64(v140, v140);
            if ( v141 )
            {
              v143 = v111[48];
              if ( v143 )
              {
                v186.m128i_i64[0] = (__int64)v62;
                v144 = 0;
                v181[0] = (size_t)v57;
                v145 = v143;
                *(__m128i *)n = v142;
                do
                {
                  v146 = &v141[128 * v144];
                  clear_tinfo_t(v146 + 64);
                  v147 = *((void **)v146 + 5);
                  if ( v147 )
                  {
                    *((_QWORD *)v146 + 6) = 0;
                    qfree(v147);
                  }
                  v148 = *((void **)v146 + 2);
                  if ( v148 )
                  {
                    *((_QWORD *)v146 + 3) = 0;
                    qfree(v148);
                  }
                  ++v144;
                  v141 = (char *)v111[47];
                }
                while ( v145 != v144 );
                v57 = (_QWORD *)v181[0];
                v142 = _mm_load_si128((const __m128i *)n);
                v62 = (__int64 *)v186.m128i_i64[0];
              }
              v111[48] = 0;
              *(__m128i *)v181 = v142;
              qfree(v141);
              v142 = _mm_load_si128((const __m128i *)v181);
            }
            v149 = v190;
            *((__m128i *)v111 + 24) = v142;
            v56 = nullptr;
            v59 = (const char *)v112;
            v111[47] = v149;
            *((_DWORD *)v111 + 100) = *(_DWORD *)(v112 + 400);
            *((_DWORD *)v111 + 101) = *(_DWORD *)(v112 + 404);
            *((_BYTE *)v111 + 408) = *(_BYTE *)(v112 + 408);
            *((_BYTE *)v111 + 409) = *(_BYTE *)(v112 + 409);
            sub_480DE0(v112, 0);
          }
LABEL_48:
          if ( (__int64 *)++v63 == v62 )
            goto LABEL_49;
        }
      }
    }
    v57 = (_QWORD *)v180;
  }
  else
  {
    v62 = *(__int64 **)(v55 + 48);
  }
  if ( v62 )
  {
    v67 = 416LL * (_QWORD)v62 - 416;
    while ( 1 )
    {
      v62 = (__int64 *)((char *)v62 - 1);
      v69 = 0;
      v70 = v67 + *(_QWORD *)(v177.m128i_i64[0] + 40);
      v71 = (__int64 *)(v67 + *((_QWORD *)v178 + 5));
      if ( v57 )
        v69 = v67 + *v57;
      v72 = *(_DWORD *)(v70 + 176);
      if ( v72 )
      {
        v68 = *((_DWORD *)v71 + 44);
        if ( v68 )
        {
          v180 = v67 + *((_QWORD *)v178 + 5);
          LODWORD(v179) = v68;
          sub_48BA20(*(_QWORD *)(v183 + 8), 1, 0, v68, v72, 1);
          sub_48C340(v183, 0, v72, 1, (unsigned __int32)v179, 1);
          v71 = (__int64 *)v180;
          if ( v69 )
          {
            v150 = *(_DWORD *)(v69 + 176);
            if ( v150 )
            {
              v162 = *(_DWORD *)(v180 + 176);
              v179 = (__int64 *)v180;
              sub_48C860(v183, 1, 2, v162, v150, 1);
              v71 = v179;
            }
          }
          if ( (*(_BYTE *)(v70 + 400) & 4) == 0 || (v71[50] & 4) == 0 )
            goto LABEL_146;
        }
        else if ( (*(_BYTE *)(v70 + 400) & 4) == 0 || (v71[50] & 4) == 0 )
        {
          goto LABEL_58;
        }
      }
      else if ( (*(_BYTE *)(v70 + 400) & 4) == 0 || (v71[50] & 4) == 0 )
      {
        goto LABEL_64;
      }
      v151 = v183;
      v179 = v71;
      sub_480900(v70, *(_DWORD *)(v183 + 16));
      sub_480900((__int64)v179, *(_DWORD *)(v151 + 20));
      v71 = v179;
LABEL_146:
      if ( *(_DWORD *)(v70 + 176) )
      {
LABEL_58:
        v67 -= 416;
        if ( !v62 )
          break;
      }
      else
      {
LABEL_64:
        if ( *((_DWORD *)v71 + 44) )
          goto LABEL_58;
        v179 = v71;
        sub_481890(v70);
        v73 = *(_QWORD *)(v177.m128i_i64[0] + 48);
        v74 = v179;
        v75 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(v177.m128i_i64[0] + 40) + 416 * v73 - v70) >> 5) - 2;
        if ( v75 >= 0 )
        {
          v179 = v62;
          v76 = v70;
          v77 = v75;
          v78 = v74;
          do
          {
            sub_486910(v76, (__int64 *)(v76 + 416));
            sub_481890(v76 + 416);
            v76 += 416;
            v79 = v77-- == 0;
          }
          while ( !v79 );
          v62 = v179;
          v74 = v78;
          v73 = *(_QWORD *)(v177.m128i_i64[0] + 48);
        }
        v179 = v74;
        *(_QWORD *)(v177.m128i_i64[0] + 48) = v73 - 1;
        sub_481890((__int64)v74);
        v80 = *((_QWORD *)v178 + 6);
        v81 = 0x4EC4EC4EC4EC4EC5LL * ((*((_QWORD *)v178 + 5) + 416 * v80 - (__int64)v179) >> 5) - 2;
        if ( v81 >= 0 )
        {
          v82 = v179;
          do
          {
            sub_486910((__int64)v82, v82 + 52);
            sub_481890((__int64)(v82 + 52));
            v82 += 52;
            v79 = v81-- == 0;
          }
          while ( !v79 );
          v80 = *((_QWORD *)v178 + 6);
        }
        *((_QWORD *)v178 + 6) = v80 - 1;
        if ( !v69 )
          goto LABEL_58;
        sub_480900(v69, *(_DWORD *)(v183 + 24));
        sub_481890(v69);
        v83 = v57[1];
        v84 = 0x4EC4EC4EC4EC4EC5LL * ((*v57 + 416 * v83 - v69) >> 5) - 2;
        if ( v84 >= 0 )
        {
          v85 = v69;
          do
          {
            sub_486910(v85, (__int64 *)(v85 + 416));
            sub_481890(v85 + 416);
            v85 += 416;
            v79 = v84-- == 0;
          }
          while ( !v79 );
          v83 = v57[1];
        }
        v67 -= 416;
        v57[1] = v83 - 1;
        if ( !v62 )
          break;
      }
    }
  }
  sub_48C170((__int64)v184, &ptr);
  v86 = (char *)ptr;
  if ( ptr )
  {
    v87 = v193;
    if ( (_QWORD)v193 )
    {
      v88 = 0;
      do
      {
        v89 = &v86[24 * v88];
        v90 = *(void **)v89;
        if ( *(_QWORD *)v89 )
        {
          *((_QWORD *)v89 + 1) = 0;
          qfree(v90);
          v86 = (char *)ptr;
        }
        ++v88;
      }
      while ( v87 != v88 );
    }
    *(_QWORD *)&v193 = 0;
    qfree(v86);
  }
  if ( v317 )
  {
    *(_QWORD *)&v318 = 0;
    qfree(v317);
  }
  v91 = &v316;
  v92 = (char *)(v185 - 1);
  do
  {
    if ( *(_QWORD *)v91 )
    {
      v93 = *((_QWORD *)v91 + 1);
      v94 = 0;
      v95 = 0;
      if ( v93 )
      {
        do
        {
          ++v95;
          v96 = v94 + *(_QWORD *)v91;
          v94 += 424;
          sub_481890(v96);
        }
        while ( v93 != v95 );
      }
      *((_QWORD *)v91 + 1) = 0;
      qfree(*(void **)v91);
    }
    v91 -= 24;
  }
  while ( v92 != v91 );
  return v320 - __readfsqword(0x28u);
}

