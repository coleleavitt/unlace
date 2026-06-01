_QWORD *__fastcall sub_5B1320(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **v9; // r13
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  char **exception; // r13
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  __int64 v17; // r13
  _BYTE *v18; // rax
  __int64 v19; // rbp
  void **v20; // r14
  _QWORD *v21; // rax
  _OWORD *v23; // rax
  __m128i v24; // xmm0
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 *v28; // rax
  __int64 v29; // r13
  int v30; // r14d
  int v31; // r10d
  unsigned int v32; // r15d
  __m128i *v33; // rcx
  char *v34; // r8
  int v35; // edi
  __int64 v36; // rax
  __m128i *v37; // r9
  char *v38; // rax
  char *v39; // rsi
  int v40; // edx
  int v41; // eax
  __int64 v42; // rdx
  int *v43; // rcx
  size_t v44; // r15
  char *v45; // r8
  __int64 v46; // rax
  int *v47; // r9
  char *v48; // rax
  int *v49; // rsi
  int v50; // edx
  __int64 *v51; // rax
  char *v52; // rax
  const __m128i *v53; // rax
  __int64 v54; // r11
  __int64 v55; // r12
  unsigned int v56; // r14d
  __int64 v57; // r9
  int v58; // esi
  unsigned int v59; // ecx
  __int64 v60; // r13
  __int64 *v61; // rbx
  int v62; // ebp
  __int64 v63; // r15
  __int64 *v64; // rax
  int v65; // edi
  __int64 v66; // rbp
  __int64 *v67; // r8
  __int64 *v68; // rcx
  __int64 *v69; // rdx
  int v70; // r10d
  char *v71; // rax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rbp
  int v77; // edi
  size_t v78; // rcx
  int *v79; // rbx
  int v80; // r15d
  __int64 v81; // r8
  int *v82; // rax
  int v83; // esi
  __int64 v84; // r15
  int *v85; // r9
  int *v86; // rdx
  int *v87; // r8
  int v88; // r10d
  int v89; // eax
  __int64 v90; // rbp
  unsigned int v91; // ecx
  size_t v92; // r8
  __int64 *v93; // rdx
  __m128i *v94; // r10
  const __m128i *v95; // r12
  __int64 v96; // rdx
  __int64 *v97; // rsi
  __int64 *v98; // rdx
  size_t v99; // rdi
  int v100; // eax
  __int64 v101; // rdi
  int v102; // r9d
  int *v103; // rdx
  __m128i *v104; // r10
  __int64 v105; // r13
  const __m128i *v106; // rbp
  __int64 v107; // rdx
  int *v108; // rsi
  int *v109; // rdx
  __int64 v110; // rdi
  int v111; // edx
  char *v112; // rdi
  __int64 v113; // rbp
  char *v114; // rcx
  char *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rdx
  _QWORD *v118; // rsi
  __int64 v119; // rax
  char *v120; // rdi
  __int64 v121; // rax
  _QWORD *v122; // r14
  __int64 v123; // rsi
  __int64 v124; // rdx
  double v125; // xmm4_8
  double v126; // xmm5_8
  __int64 v127; // rax
  __int64 v128; // rcx
  __m128i *v129; // rdi
  int v130; // r12d
  int v131; // r15d
  unsigned int v132; // r13d
  size_t v133; // rbp
  __int64 v134; // rbx
  int v135; // edx
  __int64 v136; // rax
  char *v137; // rsi
  __int64 *v138; // rcx
  __int64 v139; // rdi
  unsigned int v140; // ecx
  char *v141; // rax
  char *v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // rdi
  __int64 v145; // rax
  char *v146; // r8
  __int64 v147; // rsi
  char *v148; // rdi
  char *v149; // rax
  int v150; // esi
  _QWORD *v151; // rax
  _QWORD *v152; // rbp
  _QWORD *v153; // rbx
  __int64 v154; // rdx
  __int64 v155; // rax
  int v156; // eax
  __int64 v157; // r15
  __m128i *v158; // rbx
  __m128i v159; // xmm0
  int v160; // ecx
  int v161; // r8d
  int v162; // r9d
  char *v163; // rax
  size_t *v164; // r13
  __m128i *v165; // rbp
  size_t v166; // rdi
  __int64 v167; // rcx
  unsigned int v168; // edx
  unsigned __int64 v169; // r15
  _QWORD *v170; // rax
  unsigned __int64 *v171; // rdi
  int v172; // edx
  _QWORD *v173; // r12
  unsigned int i; // eax
  unsigned int v175; // edx
  unsigned int v176; // eax
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r15
  __int64 v181; // rdx
  unsigned int v182; // eax
  __int64 v183; // rcx
  int v184; // eax
  __int64 *v185; // rcx
  bool v186; // zf
  __int64 v187; // rsi
  size_t v188; // rdi
  __int64 v189; // rsi
  size_t v190; // rdi
  __int64 *v191; // r15
  _QWORD *v192; // rdx
  _QWORD *v193; // r14
  const __m128i *v194; // r12
  __m128i *v195; // rbp
  unsigned __int64 v196; // rbx
  __int64 v197; // rsi
  __int64 *v198; // rcx
  __int64 v199; // rdi
  __int32 v200; // eax
  int v201; // eax
  int v202; // eax
  int *v203; // rax
  unsigned int v204; // edx
  int *v205; // rsi
  __m128i *v206; // r9
  const __m128i *v207; // rax
  const __m128i *v208; // r10
  __int64 v209; // rdx
  int *v210; // rsi
  __m128i *v211; // rdx
  __m128i *v212; // rax
  __int64 *v213; // rdx
  __m128i *v214; // r9
  int *v215; // r10
  const __m128i *v216; // r13
  __int64 v217; // rax
  __m128i *v218; // rdx
  char *v219; // rax
  int v220; // eax
  char *v221; // rax
  int v222; // ecx
  char *v223; // r12
  char *v224; // rax
  __int64 v225; // rdx
  char *v226; // rcx
  char *v227; // rdx
  __int64 v228; // rcx
  int v229; // ecx
  __int64 *v230; // rax
  __int64 *v231; // rsi
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // rdi
  char *v235; // rbp
  char *v236; // rbx
  _QWORD *v238; // r12
  char *v239; // rax
  char *v240; // rdi
  int v241; // esi
  __int64 v242; // rax
  char *v243; // rdi
  _QWORD *v244; // rax
  _QWORD *v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // rax
  unsigned int v248; // r8d
  size_t v249; // rsi
  _DWORD *v250; // rax
  __int64 v251; // rsi
  __int64 v252; // rsi
  __int64 v253; // rax
  int v254; // ecx
  int v255; // r8d
  int v256; // r9d
  __int64 v257; // r12
  __int64 *v258; // r12
  unsigned __int64 v259; // r15
  __int64 v260; // rsi
  size_t *v261; // rax
  __int64 v262; // r12
  __int64 v263; // rax
  __int64 v264; // rbx
  void (__fastcall ***v265)(void *); // rbp
  __int64 *v266; // rbx
  unsigned __int64 v267; // rbp
  __int64 v268; // rsi
  void *v269; // rdi
  _QWORD *v270; // rax
  unsigned int v271; // ecx
  size_t v272; // rsi
  __int64 v273; // rax
  __int64 *v274; // rbx
  unsigned __int64 v275; // rbp
  __int64 v276; // rsi
  void *v277; // rdi
  __int64 *v278; // rbx
  unsigned __int64 v279; // rbp
  __int64 v280; // rsi
  __int64 v281; // rdi
  __int64 *v282; // rbx
  unsigned __int64 v283; // rbp
  __int64 v284; // rsi
  __int64 v285; // rdi
  __int64 v286; // rbx
  __int64 v287; // rcx
  __int64 *v288; // rax
  __int64 *v289; // rbp
  __int64 *v290; // r13
  __int64 v291; // rdx
  __int64 *v292; // rcx
  __int64 *v293; // rdx
  __int64 v294; // rax
  void *v295; // [rsp+0h] [rbp-248h]
  __int64 v296; // [rsp+8h] [rbp-240h]
  __int64 v297; // [rsp+10h] [rbp-238h]
  __int64 v298; // [rsp+18h] [rbp-230h]
  __int64 v299; // [rsp+20h] [rbp-228h]
  size_t v300; // [rsp+28h] [rbp-220h]
  __m128i *v301; // [rsp+30h] [rbp-218h]
  const __m128i *v302; // [rsp+38h] [rbp-210h]
  void *v303; // [rsp+40h] [rbp-208h]
  void *v304; // [rsp+48h] [rbp-200h]
  int *v305; // [rsp+50h] [rbp-1F8h]
  __int64 v306; // [rsp+58h] [rbp-1F0h]
  __m128i *v307; // [rsp+60h] [rbp-1E8h]
  void *v308; // [rsp+68h] [rbp-1E0h]
  char *v309; // [rsp+70h] [rbp-1D8h]
  __int64 v310; // [rsp+78h] [rbp-1D0h]
  const __m128i *v311; // [rsp+80h] [rbp-1C8h]
  char *v312; // [rsp+88h] [rbp-1C0h]
  __int64 v313; // [rsp+90h] [rbp-1B8h]
  char *v314; // [rsp+98h] [rbp-1B0h]
  size_t v315; // [rsp+B0h] [rbp-198h]
  size_t v316; // [rsp+C0h] [rbp-188h]
  __int64 v317; // [rsp+D0h] [rbp-178h] BYREF
  size_t v318; // [rsp+D8h] [rbp-170h]
  __int64 v319; // [rsp+E0h] [rbp-168h] BYREF
  size_t v320; // [rsp+E8h] [rbp-160h]
  int v321[2]; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v322; // [rsp+110h] [rbp-138h] BYREF
  void *v323; // [rsp+118h] [rbp-130h]
  __int64 v324; // [rsp+120h] [rbp-128h]
  int v325; // [rsp+128h] [rbp-120h]
  void *v326; // [rsp+130h] [rbp-118h] BYREF
  unsigned int v327; // [rsp+138h] [rbp-110h]
  int v328; // [rsp+13Ch] [rbp-10Ch]
  int v329; // [rsp+140h] [rbp-108h]
  void *v330; // [rsp+148h] [rbp-100h]
  int v331; // [rsp+160h] [rbp-E8h]
  __int64 v332; // [rsp+168h] [rbp-E0h]
  _OWORD *v333; // [rsp+170h] [rbp-D8h]
  __int64 v334; // [rsp+178h] [rbp-D0h]
  int v335; // [rsp+180h] [rbp-C8h]
  __int64 (__fastcall **v336)(); // [rsp+190h] [rbp-B8h] BYREF
  int v337; // [rsp+198h] [rbp-B0h]
  __int64 v338; // [rsp+1A0h] [rbp-A8h]
  char v339; // [rsp+1A8h] [rbp-A0h]
  __m128i v340; // [rsp+1B0h] [rbp-98h]
  __int64 *v341; // [rsp+1C0h] [rbp-88h]
  __int64 v342; // [rsp+1C8h] [rbp-80h]
  __int64 *v343; // [rsp+1D0h] [rbp-78h]
  int v344[4]; // [rsp+1D8h] [rbp-70h] BYREF
  void *v345; // [rsp+1E8h] [rbp-60h]
  __int64 *v346; // [rsp+1F0h] [rbp-58h]
  void *v347; // [rsp+1F8h] [rbp-50h]
  __int64 *v348; // [rsp+200h] [rbp-48h]

  v313 = a1;
  v310 = a2;
  v15 = (_OWORD *)sub_186B270(0x40u);
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v304 = v15;
  v16 = (_OWORD *)sub_186B270(0x40u);
  v308 = v16;
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  v322 = a2;
  v17 = sub_63B440(a2);
  v18 = (_BYTE *)sub_186B270(0xC0u);
  v18[16] = 0;
  *(_QWORD *)v18 = 0;
  v19 = 1;
  v20 = &v326;
  *((_QWORD *)v18 + 3) = 0;
  v18[40] = 0;
  *((_QWORD *)v18 + 6) = 0;
  v18[64] = 0;
  *((_QWORD *)v18 + 9) = 0;
  v18[88] = 0;
  *((_QWORD *)v18 + 12) = 0;
  v18[112] = 0;
  *((_QWORD *)v18 + 15) = 0;
  v18[136] = 0;
  *((_QWORD *)v18 + 18) = 0;
  v18[160] = 0;
  *((_QWORD *)v18 + 21) = 0;
  v18[184] = 0;
  v323 = v18;
  v324 = 8;
  v325 = 0;
  do
  {
    v21 = (_QWORD *)sub_186B270(0x80u);
    *v20 = v21;
    v20 += 3;
    *(v20 - 2) = &byte_8;
    *((_DWORD *)v20 - 2) = 0;
    *v21 = 0;
    v21[2] = 0;
    v21[4] = 0;
    v21[6] = 0;
    v21[8] = 0;
    v21[10] = 0;
    v21[12] = 0;
    v21[14] = 0;
  }
  while ( v19-- != 0 );
  v332 = v17;
  v331 = 0;
  v23 = (_OWORD *)sub_186B270(0x80u);
  v24.m128i_i64[0] = 0;
  v303 = v23;
  v333 = v23;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = 0;
  v23[3] = 0;
  v23[4] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v23[7] = 0;
  v334 = 8;
  v25 = *(__int64 **)(v310 + 152);
  v26 = *(unsigned int *)(v310 + 160);
  v335 = 0;
  v295 = &v25[v26];
  if ( v25 != v295 )
  {
    while ( (unsigned __int64)*v25 <= 1 )
    {
      if ( v295 == ++v25 )
        goto LABEL_40;
    }
    if ( v295 != v25 )
    {
      v27 = *v25;
      while ( 1 )
      {
        v302 = (const __m128i *)&v322;
        v28 = *(__int64 **)sub_63BA90(v310, v27);
        if ( !v28 )
          goto LABEL_35;
        v300 = (size_t)&v28[*((unsigned int *)v28 - 1)];
        if ( v28 == (__int64 *)v300 )
          goto LABEL_35;
        v298 = (__int64)v28;
        v29 = (unsigned int)v324;
        v30 = HIDWORD(v324);
        do
        {
          v31 = v325;
          v32 = 2 * v29;
          if ( 3 * (int)v29 < (unsigned int)(4 * (v325 + v30)) )
          {
            v302 = (const __m128i *)&v322;
            v296 = v32;
            v299 = 24LL * v32;
            v297 = v299;
            v212 = (__m128i *)sub_186B270(v299);
            v33 = v212;
            if ( v32 )
            {
              v213 = &v212->m128i_i64[3 * v296];
              do
              {
                v212->m128i_i64[0] = 0;
                v212 = (__m128i *)((char *)v212 + 24);
                v212[-1].m128i_i8[8] = 0;
              }
              while ( v212 != (__m128i *)v213 );
              v214 = (__m128i *)v323;
              LODWORD(v296) = v32 - 1;
              v215 = (int *)((char *)v323 + 24 * v29);
              v34 = &v33->m128i_i8[v299];
              goto LABEL_326;
            }
            v214 = (__m128i *)v323;
            LODWORD(v296) = -1;
            v34 = (char *)v212;
            v215 = (int *)((char *)v323 + 24 * (unsigned int)v29);
            if ( v323 != v215 )
            {
LABEL_326:
              v216 = v214;
              do
              {
                while ( v216->m128i_i32[1] != 2 )
                {
                  v216 = (const __m128i *)((char *)v216 + 24);
                  if ( v216 == (const __m128i *)v215 )
                    goto LABEL_334;
                }
                v217 = 24LL * (v216->m128i_i32[0] & (unsigned int)v296);
                v218 = (__m128i *)((char *)v33 + v217);
                if ( v299 == v217 )
                {
LABEL_338:
                  if ( v33 == v218 )
                  {
LABEL_354:
                    v307 = v214;
                    v306 = (__int64)v34;
                    v305 = v215;
                    v301 = v33;
                    sub_1872CE0("");
                    v302 = (const __m128i *)&v322;
                    sub_1873130(114, 213);
                  }
                  v219 = (char *)v33;
                  while ( *((_DWORD *)v219 + 1) )
                  {
                    v219 += 24;
                    if ( v218 == (__m128i *)v219 )
                      goto LABEL_354;
                  }
                }
                else
                {
                  v219 = &v33->m128i_i8[v217];
                  while ( *((_DWORD *)v219 + 1) )
                  {
                    v219 += 24;
                    if ( v219 == v34 )
                      goto LABEL_338;
                  }
                }
                v24 = _mm_loadu_si128(v216);
                v216 = (const __m128i *)((char *)v216 + 24);
                *(__m128i *)v219 = v24;
                *((_QWORD *)v219 + 2) = v216[-1].m128i_i64[1];
              }
              while ( v216 != (const __m128i *)v215 );
            }
LABEL_334:
            if ( v214 )
            {
              v301 = (__m128i *)v34;
              v299 = (__int64)v33;
              v302 = (const __m128i *)&v322;
              sub_186B220(v214);
              v34 = (char *)v301;
              v33 = (__m128i *)v299;
            }
            v323 = v33;
            v29 = v32;
            v31 = 0;
            LODWORD(v324) = v32;
            v325 = 0;
            goto LABEL_14;
          }
          v33 = (__m128i *)v323;
          LODWORD(v296) = v29 - 1;
          v297 = 24LL * (unsigned int)v29;
          v34 = (char *)v323 + v297;
LABEL_14:
          v35 = *(_DWORD *)(v27 + 12);
          v36 = 24LL * (v35 & (unsigned int)v296);
          v37 = (__m128i *)((char *)v33 + v36);
          if ( v36 != v297 )
          {
            v38 = &v33->m128i_i8[v36];
            v39 = nullptr;
            while ( 1 )
            {
              v40 = *((_DWORD *)v38 + 1);
              if ( v40 == 2 )
              {
                if ( v35 == *(_DWORD *)v38 && *((_QWORD *)v38 + 1) == v27 )
                {
                  v33 = (__m128i *)v38;
                  goto LABEL_23;
                }
              }
              else
              {
                if ( !v40 )
                {
                  v33 = (__m128i *)v38;
                  if ( v39 )
                    goto LABEL_301;
                  goto LABEL_302;
                }
                v39 = v38;
              }
              v38 += 24;
              if ( v38 == v34 )
                goto LABEL_287;
            }
          }
          v39 = nullptr;
          while ( 1 )
          {
LABEL_287:
            if ( v37 == v33 )
            {
              sub_1872CE0("");
              v302 = (const __m128i *)&v322;
              sub_1873130(114, 461);
            }
            v200 = v33->m128i_i32[1];
            if ( v200 != 2 )
              break;
            if ( v35 == v33->m128i_i32[0] && v33->m128i_i64[1] == v27 )
              goto LABEL_23;
LABEL_286:
            v33 = (__m128i *)((char *)v33 + 24);
          }
          if ( v200 )
          {
            v39 = (char *)v33;
            goto LABEL_286;
          }
          if ( v39 )
          {
LABEL_301:
            v33 = (__m128i *)v39;
            v325 = v31 - 1;
          }
LABEL_302:
          ++v30;
          v33->m128i_i64[1] = v27;
          v33[1].m128i_i8[0] = 0;
          v33->m128i_i32[1] = 2;
          v33->m128i_i32[0] = v35;
          HIDWORD(v324) = v30;
LABEL_23:
          v41 = v328;
          v42 = v327;
          v33[1].m128i_i8[0] = 1;
          LODWORD(v299) = v41;
          LODWORD(v297) = 2 * v42;
          if ( 3 * (int)v42 >= (unsigned int)(4 * (v329 + v41)) )
          {
            v43 = (int *)v326;
            LODWORD(v296) = v42 - 1;
            v44 = 16 * v42;
            v45 = (char *)v326 + 16 * v42;
            goto LABEL_25;
          }
          LODWORD(v296) = v42;
          v302 = (const __m128i *)&v322;
          v44 = 16LL * (unsigned int)v297;
          v203 = (int *)sub_186B270(v44);
          v204 = v296;
          v43 = v203;
          if ( (_DWORD)v297 )
          {
            v205 = &v203[8 * (v296 & 0x7FFFFFFF)];
            do
            {
              *(_QWORD *)v203 = 0;
              v203 += 8;
              *((_QWORD *)v203 - 2) = 0;
            }
            while ( v203 != v205 );
            v206 = (__m128i *)v326;
            v45 = (char *)&v43[v44 / 4];
            LODWORD(v296) = v297 - 1;
            v207 = (const __m128i *)((char *)v326 + 16 * v204);
            goto LABEL_311;
          }
          v206 = (__m128i *)v326;
          LODWORD(v296) = -1;
          v45 = (char *)v203;
          v207 = (const __m128i *)((char *)v326 + 16 * v204);
          if ( v326 != v207 )
          {
LABEL_311:
            v208 = v206;
            do
            {
              while ( v208->m128i_i32[1] != 2 )
              {
                if ( v207 == ++v208 )
                  goto LABEL_319;
              }
              v209 = 16LL * (v208->m128i_i32[0] & (unsigned int)v296);
              v210 = &v43[(unsigned __int64)v209 / 4];
              if ( v44 == v209 )
              {
LABEL_346:
                if ( v43 == v210 )
                {
LABEL_355:
                  v309 = v45;
                  v307 = v206;
                  v306 = (__int64)v208;
                  v305 = v43;
                  v301 = (__m128i *)v207;
                  sub_1872CE0("");
                  v302 = (const __m128i *)&v322;
                  sub_1873130(114, 213);
                }
                v211 = (__m128i *)v43;
                while ( v211->m128i_i32[1] )
                {
                  if ( v210 == (int *)++v211 )
                    goto LABEL_355;
                }
              }
              else
              {
                v211 = (__m128i *)&v43[(unsigned __int64)v209 / 4];
                while ( v211->m128i_i32[1] )
                {
                  if ( ++v211 == (__m128i *)v45 )
                    goto LABEL_346;
                }
              }
              v24 = _mm_loadu_si128(v208++);
              *v211 = v24;
            }
            while ( v207 != v208 );
          }
LABEL_319:
          if ( v206 )
          {
            v305 = (int *)v45;
            v301 = (__m128i *)v43;
            v302 = (const __m128i *)&v322;
            sub_186B220(v206);
            v45 = (char *)v305;
            v43 = (int *)v301;
          }
          v35 = *(_DWORD *)(v27 + 12);
          v326 = v43;
          v329 = 0;
          v327 = v297;
LABEL_25:
          v46 = 16LL * (v35 & (unsigned int)v296);
          v47 = &v43[(unsigned __int64)v46 / 4];
          if ( v46 != v44 )
          {
            v48 = (char *)&v43[(unsigned __int64)v46 / 4];
            v49 = nullptr;
            while ( 1 )
            {
              v50 = *((_DWORD *)v48 + 1);
              if ( v50 == 2 )
              {
                if ( *(_DWORD *)v48 == v35 && *((_QWORD *)v48 + 1) == v27 )
                {
                  *((_QWORD *)v48 + 1) = v27;
                  *((_DWORD *)v48 + 1) = 2;
                  goto LABEL_34;
                }
              }
              else
              {
                if ( !v50 )
                {
                  if ( v49 )
                    --v329;
                  else
                    v49 = (int *)v48;
                  v202 = v299;
                  *((_QWORD *)v49 + 1) = v27;
                  v49[1] = 2;
                  *v49 = v35;
                  v328 = v202 + 1;
                  goto LABEL_34;
                }
                v49 = (int *)v48;
              }
              v48 += 16;
              if ( v48 == v45 )
                goto LABEL_295;
            }
          }
          v49 = nullptr;
LABEL_295:
          while ( 2 )
          {
            if ( v47 == v43 )
            {
              sub_1872CE0("");
              v302 = (const __m128i *)&v322;
              sub_1873130(114, 405);
            }
            v201 = v43[1];
            if ( v201 == 2 )
            {
              if ( *v43 == v35 && *((_QWORD *)v43 + 1) == v27 )
              {
                *((_QWORD *)v43 + 1) = v27;
                v43[1] = 2;
                goto LABEL_34;
              }
              goto LABEL_294;
            }
            if ( v201 )
            {
              v49 = v43;
LABEL_294:
              v43 += 4;
              continue;
            }
            break;
          }
          if ( v49 )
          {
            --v329;
            v43 = v49;
          }
          v220 = v299;
          *((_QWORD *)v43 + 1) = v27;
          v43[1] = 2;
          *v43 = v35;
          v328 = v220 + 1;
LABEL_34:
          v298 += 8;
        }
        while ( v300 != v298 );
LABEL_35:
        v51 = v25 + 1;
        if ( v295 != v25 + 1 )
        {
          while ( 1 )
          {
            v27 = *v51;
            v25 = v51;
            if ( (unsigned __int64)*v51 > 1 )
              break;
            if ( v295 == ++v51 )
              goto LABEL_40;
          }
          if ( v295 != v51 )
            continue;
        }
        break;
      }
    }
  }
LABEL_40:
  if ( v328 )
  {
    LODWORD(v309) = 0;
    v52 = (char *)v326;
    v312 = (char *)v326 + 16 * v327;
    if ( v326 == v312 )
    {
      v286 = 0;
      goto LABEL_164;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v52 + 1) != 2 )
      {
        v52 += 16;
        if ( v52 != v312 )
          continue;
LABEL_182:
        v286 = (unsigned int)v309;
        goto LABEL_164;
      }
      v314 = v52;
      if ( v52 == v312 )
        goto LABEL_182;
      v302 = (const __m128i *)&v322;
      v297 = (__int64)&v326 + (-((unsigned int)v309 ^ 1) & 0x18);
      do
      {
        v53 = *(const __m128i **)sub_63BA90(v310, *((_QWORD *)v314 + 1));
        if ( v53 )
        {
          v311 = (const __m128i *)((char *)v53 + 8 * v53[-1].m128i_u32[3]);
          if ( v53 != v311 )
          {
            v301 = (__m128i *)v53;
            do
            {
              v54 = v301->m128i_i64[0];
              if ( !*(_DWORD *)(v301->m128i_i64[0] + 68) )
                goto LABEL_64;
              v55 = (unsigned int)v324;
              v56 = 0;
              LODWORD(v295) = HIDWORD(v324);
              do
              {
                v57 = v56;
                v58 = v325;
                v59 = 2 * v55;
                v60 = *(_QWORD *)((*(_QWORD *)(v54 + 8LL * v56 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
                if ( 3 * (int)v55 < (unsigned int)(4 * (v325 + (_DWORD)v295)) )
                {
                  v90 = v59;
                  v300 = v56;
                  v299 = v54;
                  LODWORD(v298) = 2 * v55;
                  v296 = 24LL * v59;
                  v63 = v296;
                  v64 = (__int64 *)sub_186B270(v296);
                  v91 = 2 * v55;
                  v92 = v296;
                  v61 = v64;
                  v54 = v299;
                  v57 = v56;
                  if ( 2 * (_DWORD)v55 )
                  {
                    v93 = &v64[3 * v90];
                    do
                    {
                      *v64 = 0;
                      v64 += 3;
                      *((_BYTE *)v64 - 8) = 0;
                    }
                    while ( v64 != v93 );
                    v94 = (__m128i *)v323;
                    v62 = v91 - 1;
                    v296 = (__int64)v323 + 24 * v55;
                    v64 = (__int64 *)((char *)v61 + v92);
                    goto LABEL_106;
                  }
                  v94 = (__m128i *)v323;
                  v62 = -1;
                  v296 = (__int64)v323 + 24 * v55;
                  if ( v323 != (void *)v296 )
                  {
LABEL_106:
                    v95 = v94;
                    do
                    {
                      while ( v95->m128i_i32[1] != 2 )
                      {
                        v95 = (const __m128i *)((char *)v95 + 24);
                        if ( v95 == (const __m128i *)v296 )
                          goto LABEL_114;
                      }
                      v96 = 24LL * (v95->m128i_i32[0] & (unsigned int)v62);
                      v97 = &v61[(unsigned __int64)v96 / 8];
                      if ( v92 == v96 )
                      {
LABEL_118:
                        if ( v61 == v97 )
                        {
LABEL_128:
                          v307 = (__m128i *)v56;
                          v306 = v92;
                          LODWORD(v305) = v91;
                          v300 = (size_t)v64;
                          v299 = (__int64)v94;
                          v298 = v54;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v98 = v61;
                        while ( *((_DWORD *)v98 + 1) )
                        {
                          v98 += 3;
                          if ( v97 == v98 )
                            goto LABEL_128;
                        }
                      }
                      else
                      {
                        v98 = &v61[(unsigned __int64)v96 / 8];
                        while ( *((_DWORD *)v98 + 1) )
                        {
                          v98 += 3;
                          if ( v98 == v64 )
                            goto LABEL_118;
                        }
                      }
                      v24 = _mm_loadu_si128(v95);
                      v99 = v296;
                      v95 = (const __m128i *)((char *)v95 + 24);
                      *(__m128i *)v98 = v24;
                      v98[2] = v95[-1].m128i_i64[1];
                    }
                    while ( v95 != (const __m128i *)v99 );
                  }
LABEL_114:
                  if ( v94 )
                  {
                    v300 = v56;
                    LODWORD(v299) = v91;
                    v298 = (__int64)v64;
                    v296 = v54;
                    sub_186B220(v94);
                    v57 = v56;
                    v91 = v299;
                    v64 = (__int64 *)v298;
                    v54 = v296;
                  }
                  v323 = v61;
                  v55 = v91;
                  v58 = 0;
                  LODWORD(v324) = v91;
                  v325 = 0;
                  goto LABEL_54;
                }
                v61 = (__int64 *)v323;
                v62 = v55 - 1;
                v63 = 24LL * (unsigned int)v55;
                v64 = (__int64 *)((char *)v323 + v63);
LABEL_54:
                v65 = *(_DWORD *)(v60 + 12);
                v66 = v65 & (unsigned int)v62;
                v67 = &v61[3 * v66];
                if ( 24 * v66 != v63 )
                {
                  v68 = &v61[3 * v66];
                  v69 = nullptr;
                  while ( 1 )
                  {
                    v70 = *((_DWORD *)v68 + 1);
                    if ( v70 == 2 )
                    {
                      if ( v65 == *(_DWORD *)v68 && v60 == v68[1] )
                      {
                        if ( *((_BYTE *)v68 + 16) )
                          goto LABEL_63;
                        goto LABEL_79;
                      }
                    }
                    else
                    {
                      if ( !v70 )
                      {
                        if ( v69 )
                          goto LABEL_81;
                        v69 = v68;
                        goto LABEL_82;
                      }
                      v69 = v68;
                    }
                    v68 += 3;
                    if ( v68 == v64 )
                      goto LABEL_74;
                  }
                }
                v69 = nullptr;
                while ( 1 )
                {
LABEL_74:
                  if ( v67 == v61 )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 461);
                  }
                  v73 = *((_DWORD *)v61 + 1);
                  if ( v73 != 2 )
                    break;
                  if ( v65 == *(_DWORD *)v61 && v60 == v61[1] )
                  {
                    v68 = v61;
                    if ( *((_BYTE *)v61 + 16) )
                      goto LABEL_63;
LABEL_79:
                    v69 = v68;
                    goto LABEL_83;
                  }
LABEL_73:
                  v61 += 3;
                }
                if ( v73 )
                {
                  v69 = v61;
                  goto LABEL_73;
                }
                if ( v69 )
LABEL_81:
                  v325 = v58 - 1;
                else
                  v69 = v61;
LABEL_82:
                v69[1] = v60;
                *((_BYTE *)v69 + 16) = 0;
                *((_DWORD *)v69 + 1) = 2;
                *(_DWORD *)v69 = v65;
                LODWORD(v295) = (_DWORD)v295 + 1;
                HIDWORD(v324) = (_DWORD)v295;
LABEL_83:
                v74 = *(_QWORD *)(v54 + 8 * v57 + 80);
                v75 = v297;
                *((_BYTE *)v69 + 16) = 1;
                v76 = *(unsigned int *)(v75 + 8);
                v77 = *(_DWORD *)(v75 + 16);
                v78 = *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                LODWORD(v296) = *(_DWORD *)(v75 + 12);
                if ( 3 * (int)v76 >= (unsigned int)(4 * (v77 + v296)) )
                {
                  v79 = *(int **)v75;
                  v80 = v76 - 1;
                  v81 = 16 * v76;
                  v82 = (int *)(*(_QWORD *)v75 + 16 * v76);
                  goto LABEL_85;
                }
                v305 = (int *)v78;
                v300 = v54;
                LODWORD(v299) = 2 * v76;
                v298 = 16LL * (unsigned int)(2 * v76);
                v82 = (int *)sub_186B270(v298);
                v102 = 2 * v76;
                v81 = v298;
                v79 = v82;
                v54 = v300;
                v78 = (size_t)v305;
                if ( 2 * (_DWORD)v76 )
                {
                  v103 = &v82[8 * (v76 & 0x7FFFFFFF)];
                  do
                  {
                    *(_QWORD *)v82 = 0;
                    v82 += 8;
                    *((_QWORD *)v82 - 2) = 0;
                  }
                  while ( v103 != v82 );
                  v80 = v102 - 1;
                  v104 = *(__m128i **)v297;
                  v82 = (int *)((char *)v79 + v81);
                  v105 = *(_QWORD *)v297 + 16 * v76;
                  goto LABEL_134;
                }
                v80 = -1;
                v104 = *(__m128i **)v297;
                v105 = *(_QWORD *)v297 + 16LL * (unsigned int)v76;
                if ( *(_QWORD *)v297 != v105 )
                {
LABEL_134:
                  v106 = v104;
                  do
                  {
                    while ( v106->m128i_i32[1] != 2 )
                    {
                      if ( (const __m128i *)v105 == ++v106 )
                        goto LABEL_142;
                    }
                    v107 = 16LL * (v106->m128i_i32[0] & (unsigned int)v80);
                    v108 = &v79[(unsigned __int64)v107 / 4];
                    if ( v81 == v107 )
                    {
LABEL_146:
                      if ( v79 == v108 )
                      {
LABEL_153:
                        LODWORD(v307) = v102;
                        v306 = v81;
                        v305 = v82;
                        v300 = (size_t)v104;
                        v299 = v78;
                        v298 = v54;
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v109 = v79;
                      while ( v109[1] )
                      {
                        v109 += 4;
                        if ( v108 == v109 )
                          goto LABEL_153;
                      }
                    }
                    else
                    {
                      v109 = &v79[(unsigned __int64)v107 / 4];
                      while ( v109[1] )
                      {
                        v109 += 4;
                        if ( v109 == v82 )
                          goto LABEL_146;
                      }
                    }
                    v24 = _mm_loadu_si128(v106++);
                    *(__m128i *)v109 = v24;
                  }
                  while ( (const __m128i *)v105 != v106 );
                }
LABEL_142:
                if ( v104 )
                {
                  LODWORD(v306) = v102;
                  v305 = (int *)v81;
                  v300 = (size_t)v82;
                  v299 = v78;
                  v298 = v54;
                  sub_186B220(v104);
                  v102 = v306;
                  v81 = (__int64)v305;
                  v82 = (int *)v300;
                  v78 = v299;
                  v54 = v298;
                }
                v110 = v297;
                *(_QWORD *)v297 = v79;
                *(_DWORD *)(v110 + 8) = v102;
                *(_DWORD *)(v110 + 16) = 0;
                v77 = 0;
LABEL_85:
                v83 = *(_DWORD *)(v78 + 12);
                v84 = 16LL * (v83 & (unsigned int)v80);
                v85 = &v79[(unsigned __int64)v84 / 4];
                if ( v84 != v81 )
                {
                  v86 = &v79[(unsigned __int64)v84 / 4];
                  v87 = nullptr;
                  while ( 1 )
                  {
                    v88 = v86[1];
                    if ( v88 == 2 )
                    {
                      if ( v83 == *v86 && v78 == *((_QWORD *)v86 + 1) )
                      {
                        *((_QWORD *)v86 + 1) = v78;
                        v86[1] = 2;
                        goto LABEL_63;
                      }
                    }
                    else
                    {
                      if ( !v88 )
                      {
                        if ( v87 )
                          goto LABEL_126;
                        v87 = v86;
                        goto LABEL_127;
                      }
                      v87 = v86;
                    }
                    v86 += 4;
                    if ( v86 == v82 )
                      goto LABEL_97;
                  }
                }
                v87 = nullptr;
LABEL_97:
                while ( 2 )
                {
                  if ( v85 == v79 )
                  {
                    v296 = v54;
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  v89 = v79[1];
                  if ( v89 == 2 )
                  {
                    if ( v83 == *v79 && v78 == *((_QWORD *)v79 + 1) )
                    {
                      *((_QWORD *)v79 + 1) = v78;
                      v79[1] = 2;
                      goto LABEL_63;
                    }
                    goto LABEL_96;
                  }
                  if ( v89 )
                  {
                    v87 = v79;
LABEL_96:
                    v79 += 4;
                    continue;
                  }
                  break;
                }
                if ( v87 )
LABEL_126:
                  *(_DWORD *)(v297 + 16) = v77 - 1;
                else
                  v87 = v79;
LABEL_127:
                v100 = v296;
                v101 = v297;
                *((_QWORD *)v87 + 1) = v78;
                v87[1] = 2;
                *v87 = v83;
                *(_DWORD *)(v101 + 12) = v100 + 1;
LABEL_63:
                ++v56;
              }
              while ( v56 < *(_DWORD *)(v54 + 68) );
LABEL_64:
              v301 = (__m128i *)((char *)v301 + 8);
            }
            while ( v311 != v301 );
          }
        }
        v71 = v314 + 16;
        if ( v314 + 16 == v312 )
        {
LABEL_161:
          v286 = (unsigned int)v309;
          v72 = *(&v328 + 6 * (unsigned int)v309);
          goto LABEL_162;
        }
        while ( *((_DWORD *)v71 + 1) != 2 )
        {
          v71 += 16;
          if ( v312 == v71 )
            goto LABEL_161;
        }
        v314 = v71;
      }
      while ( v71 != v312 );
      v286 = (unsigned int)v309;
      v72 = *(&v328 + 6 * (unsigned int)v309);
LABEL_162:
      if ( v72 || *(&v329 + 6 * v286) )
      {
LABEL_164:
        v111 = 0;
        v112 = (char *)*(&v326 + 3 * v286);
        v113 = *(&v327 + 6 * v286);
        v114 = v112;
        v115 = &v112[16 * v113];
        if ( v112 == v115 )
          goto LABEL_178;
        while ( 1 )
        {
          if ( *((_DWORD *)v114 + 1) )
          {
            *((_DWORD *)v114 + 1) = 0;
            v114 += 16;
            if ( v115 == v114 )
              goto LABEL_169;
          }
          else
          {
            v114 += 16;
            ++v111;
            if ( v115 == v114 )
            {
LABEL_169:
              if ( (unsigned int)v113 > 0x10 && 3 * (int)v113 < (unsigned int)(4 * v111) )
              {
                if ( v112 )
                {
                  v302 = (const __m128i *)&v322;
                  sub_186B220(v112);
                }
                v116 = 24 * v286;
                *(unsigned int *)((char *)&v327 + v116) = (unsigned int)v113 >> 1;
                *(void **)((char *)&v326 + v116) = nullptr;
                v302 = (const __m128i *)&v322;
                v117 = (_QWORD *)sub_186B270(16LL * ((unsigned int)v113 >> 1));
                v118 = v117;
                do
                {
                  *v118 = 0;
                  v118 += 4;
                  *(v118 - 2) = 0;
                }
                while ( &v117[4 * ((unsigned int)v113 >> 2)] != v118 );
                v119 = 2 * ((unsigned int)v113 >> 2);
                if ( (unsigned int)v113 >> 1 != (_DWORD)v119 )
                  v117[2 * v119] = 0;
                *(&v326 + 3 * v286) = v117;
              }
              goto LABEL_178;
            }
          }
        }
      }
      while ( 1 )
      {
        LODWORD(v309) = (unsigned int)v309 ^ 1;
        LODWORD(v286) = (_DWORD)v309;
        v331 = (int)v309;
        if ( !*(&v328 + 6 * (unsigned int)v309) )
          goto LABEL_183;
        v120 = (char *)*(&v326 + 3 * (unsigned int)v309);
        v121 = 16LL * *(&v327 + 6 * (unsigned int)v309);
        v314 = v120;
        v312 = &v120[v121];
        if ( v120 != &v120[v121] )
          break;
LABEL_178:
        *(_QWORD *)((char *)&v328 + (-(int)v286 & 0x18)) = 0;
      }
      v52 = v120;
    }
  }
LABEL_183:
  v302 = (const __m128i *)&v322;
  v122 = (_QWORD *)sub_186B270(0xF8u);
  v123 = *(_QWORD *)(v313 + 32);
  v302 = (const __m128i *)&v322;
  sub_63D370(v122, v123);
  sub_63DFA0(v122, v310, v124, *(double *)v24.m128i_i64, a4, a5, a6, v125, v126, a9);
  v127 = *(_QWORD *)(v310 + 24);
  if ( !v127 )
  {
    v247 = v122[3];
    if ( !v247 || !*(_DWORD *)(v247 - 4) )
      goto LABEL_394;
    goto LABEL_395;
  }
  v128 = *(unsigned int *)(v127 - 4);
  v129 = (__m128i *)(v127 + 8 * v128);
  v307 = v129;
  if ( v129 == (__m128i *)v127 )
  {
    v294 = v122[3];
    if ( v294 )
    {
      if ( *(_DWORD *)(v294 - 4) == v129[-1].m128i_i32[3] )
        goto LABEL_394;
    }
    else if ( !(_DWORD)v128 )
    {
      goto LABEL_394;
    }
    goto LABEL_395;
  }
  v297 = v127;
  v130 = 0;
  v131 = 8;
  v132 = 8;
  LODWORD(v295) = 0;
  LODWORD(v298) = 0;
  LODWORD(v299) = 0;
  LODWORD(v305) = 7;
  v306 = 8;
  do
  {
    v133 = 8 * v306;
    v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v297 + 40LL) + 16LL);
    v135 = *(_DWORD *)(v134 + 12);
    v136 = 8LL * (v135 & (unsigned int)v305);
    v137 = (char *)v308 + v136;
    v296 = (__int64)v308 + 8 * v306;
    if ( v136 == 8 * v306 )
    {
      v198 = (__int64 *)v308;
      if ( v308 != v137 )
      {
        while ( 1 )
        {
LABEL_281:
          v199 = *v198;
          if ( (unsigned __int64)*v198 > 1 )
          {
            if ( *(_DWORD *)(v199 + 12) == v135 && v134 == v199 )
              goto LABEL_223;
          }
          else if ( !v199 )
          {
LABEL_193:
            v140 = 2 * v131;
            if ( 3 * v131 >= (unsigned int)(4 * (v130 + (_DWORD)v295)) )
              goto LABEL_194;
            goto LABEL_364;
          }
          if ( v137 == (char *)++v198 )
            goto LABEL_193;
        }
      }
      v140 = 2 * v131;
      if ( 3 * v131 >= (unsigned int)(4 * (v130 + (_DWORD)v295)) )
      {
LABEL_451:
        v142 = nullptr;
LABEL_202:
        v141 = (char *)v308;
        if ( v308 != v137 )
        {
          do
          {
            while ( 1 )
            {
              v144 = *(_QWORD *)v141;
              if ( *(_QWORD *)v141 <= 1u )
                break;
              if ( *(_DWORD *)(v144 + 12) == v135 && v134 == v144 )
                goto LABEL_444;
              v141 += 8;
              if ( v141 == v137 )
                goto LABEL_210;
            }
            if ( !v144 )
              goto LABEL_435;
            v142 = v141;
            v141 += 8;
          }
          while ( v141 != v137 );
        }
LABEL_210:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
LABEL_364:
      LODWORD(v300) = v140;
      v131 = v140;
      v133 = 8LL * v140;
      v306 = v140;
      v221 = (char *)sub_186B270(v133);
      v222 = v300;
      v223 = v221;
      if ( (_DWORD)v300 )
      {
        memset(v221, 0, 8 * v306);
        v222 = v300;
      }
      LODWORD(v305) = v222 - 1;
      v300 = (size_t)&v223[v133];
      v224 = (char *)v308;
      if ( v308 != (void *)v296 )
      {
        do
        {
          while ( *(_QWORD *)v224 <= 1u )
          {
            v224 += 8;
            if ( (char *)v296 == v224 )
              goto LABEL_375;
          }
          v225 = 8LL * (*(_DWORD *)(*(_QWORD *)v224 + 12LL) & (unsigned int)v305);
          v226 = &v223[v225];
          if ( v133 == v225 )
          {
LABEL_438:
            if ( v223 == v226 )
            {
LABEL_443:
              v301 = (__m128i *)v224;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v227 = v223;
            while ( *(_QWORD *)v227 )
            {
              v227 += 8;
              if ( v226 == v227 )
                goto LABEL_443;
            }
          }
          else
          {
            v227 = &v223[v225];
            while ( *(_QWORD *)v227 )
            {
              v227 += 8;
              if ( (char *)v300 == v227 )
                goto LABEL_438;
            }
          }
          v228 = *(_QWORD *)v224;
          v224 += 8;
          *(_QWORD *)v227 = v228;
        }
        while ( (char *)v296 != v224 );
      }
LABEL_375:
      if ( v308 )
        sub_186B220(v308);
      v135 = *(_DWORD *)(v134 + 12);
      v308 = v223;
      v136 = 8LL * (v135 & (unsigned int)v305);
      v296 = v300;
      v137 = &v223[v136];
      v130 = 0;
LABEL_194:
      if ( v136 == v133 )
        goto LABEL_451;
      goto LABEL_195;
    }
    v138 = (__int64 *)((char *)v308 + v136);
    do
    {
      v139 = *v138;
      if ( (unsigned __int64)*v138 > 1 )
      {
        if ( *(_DWORD *)(v139 + 12) == v135 && v134 == v139 )
          goto LABEL_223;
      }
      else if ( !v139 )
      {
        goto LABEL_193;
      }
      ++v138;
    }
    while ( (__int64 *)v296 != v138 );
    v198 = (__int64 *)v308;
    if ( v308 != v137 )
      goto LABEL_281;
    v140 = 2 * v131;
    if ( 3 * v131 < (unsigned int)(4 * (v130 + (_DWORD)v295)) )
      goto LABEL_364;
    if ( !v133 )
      goto LABEL_210;
LABEL_195:
    v141 = v137;
    v142 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v143 = *(_QWORD *)v141;
        if ( *(_QWORD *)v141 <= 1u )
          break;
        if ( *(_DWORD *)(v143 + 12) == v135 && v134 == v143 )
        {
LABEL_444:
          *(_QWORD *)v141 = v134;
          goto LABEL_211;
        }
        v141 += 8;
        if ( v141 == (char *)v296 )
          goto LABEL_202;
      }
      if ( !v143 )
        break;
      v142 = v141;
      v141 += 8;
      if ( v141 == (char *)v296 )
        goto LABEL_202;
    }
LABEL_435:
    if ( v142 )
    {
      --v130;
      v141 = v142;
    }
    *(_QWORD *)v141 = v134;
    LODWORD(v295) = (_DWORD)v295 + 1;
LABEL_211:
    v145 = 24LL * (unsigned int)v324;
    v146 = (char *)v323 + v145;
    v147 = 24LL * (v135 & (unsigned int)(v324 - 1));
    v148 = (char *)v323 + v147;
    if ( v147 == v145 )
    {
LABEL_378:
      if ( v323 == v148 )
      {
LABEL_386:
        if ( byte_1C7EBB4 )
          goto LABEL_219;
        goto LABEL_387;
      }
      v149 = (char *)v323;
      while ( 2 )
      {
        while ( 1 )
        {
          v229 = *((_DWORD *)v149 + 1);
          if ( v229 != 2 )
            break;
          if ( *(_DWORD *)v149 != v135 )
            goto LABEL_381;
          if ( v134 == *((_QWORD *)v149 + 1) )
            goto LABEL_218;
          v149 += 24;
          if ( v148 == v149 )
            goto LABEL_386;
        }
        if ( !v229 )
          goto LABEL_386;
LABEL_381:
        v149 += 24;
        if ( v148 == v149 )
          goto LABEL_386;
        continue;
      }
    }
    v149 = (char *)v323 + v147;
    while ( 1 )
    {
      v150 = *((_DWORD *)v149 + 1);
      if ( v150 != 2 )
      {
        if ( !v150 )
          goto LABEL_386;
        goto LABEL_214;
      }
      if ( *(_DWORD *)v149 == v135 && v134 == *((_QWORD *)v149 + 1) )
        break;
LABEL_214:
      v149 += 24;
      if ( v146 == v149 )
        goto LABEL_378;
    }
LABEL_218:
    if ( v149[16] )
    {
LABEL_219:
      v151 = *(_QWORD **)sub_63BA90(v310, v134);
      if ( v151 )
      {
        v152 = &v151[*((unsigned int *)v151 - 1)];
        if ( v152 != v151 )
        {
          v153 = v151;
          do
            sub_63DAD0(v122, *v153++, *(double *)v24.m128i_i64);
          while ( v152 != v153 );
        }
      }
      goto LABEL_223;
    }
LABEL_387:
    if ( !*(_QWORD *)(*(_QWORD *)(v313 + 32) + 2952LL) )
      goto LABEL_223;
    v230 = *(__int64 **)sub_63BA90(v310, v134);
    if ( v230 )
    {
      v231 = &v230[*((unsigned int *)v230 - 1)];
      if ( v231 != v230 )
      {
        while ( 1 )
        {
          v232 = *v230;
          v233 = *(unsigned int *)(*v230 + 68);
          if ( (_DWORD)v233 )
            break;
LABEL_424:
          if ( v231 == ++v230 )
            goto LABEL_425;
        }
        v234 = v232 + 8 * v233;
        while ( v134 == *(_QWORD *)((*(_QWORD *)(v232 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16) )
        {
          v232 += 8;
          if ( v232 == v234 )
            goto LABEL_424;
        }
LABEL_394:
        sub_63D960(v122);
        sub_186B220(v122);
        v122 = nullptr;
        goto LABEL_395;
      }
    }
LABEL_425:
    LODWORD(v302) = 2 * v132;
    if ( 3 * v132 >= 4 * ((int)v299 + (int)v298) )
    {
      v240 = (char *)v304;
      LODWORD(v301) = v132 - 1;
      v296 = 8LL * v132;
      v300 = (size_t)v304 + v296;
      goto LABEL_427;
    }
    v298 = (unsigned int)v302;
    v296 = 8LL * (unsigned int)v302;
    v288 = (__int64 *)sub_186B270(v296);
    v289 = v288;
    if ( (_DWORD)v302 )
    {
      memset(v288, 0, 8 * v298);
      LODWORD(v301) = (_DWORD)v302 - 1;
      v298 = (__int64)v304 + 8 * v132;
      v300 = (size_t)v289 + v296;
LABEL_538:
      v290 = (__int64 *)v304;
      do
      {
        if ( (unsigned __int64)*v290 > 1 )
        {
          v291 = 8LL * (*(_DWORD *)(*v290 + 12) & (unsigned int)v301);
          v292 = &v289[(unsigned __int64)v291 / 8];
          if ( v296 == v291 )
          {
LABEL_558:
            if ( v289 == v292 )
            {
LABEL_563:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v293 = v289;
            while ( *v293 )
            {
              if ( v292 == ++v293 )
                goto LABEL_563;
            }
          }
          else
          {
            v293 = &v289[(unsigned __int64)v291 / 8];
            while ( *v293 )
            {
              if ( ++v293 == (__int64 *)v300 )
                goto LABEL_558;
            }
          }
          *v293 = *v290;
        }
        ++v290;
      }
      while ( (__int64 *)v298 != v290 );
    }
    else
    {
      v300 = (size_t)v288;
      LODWORD(v301) = -1;
      v298 = (__int64)v304 + 8 * v132;
      if ( v304 != (void *)v298 )
        goto LABEL_538;
    }
    if ( v304 )
      sub_186B220(v304);
    v304 = v289;
    v132 = (unsigned int)v302;
    v240 = (char *)v289;
    LODWORD(v298) = 0;
LABEL_427:
    v241 = *(_DWORD *)(v134 + 12);
    v242 = 8LL * (v241 & (unsigned int)v301);
    v243 = &v240[v242];
    if ( v242 == v296 )
    {
      v245 = nullptr;
LABEL_526:
      v244 = v304;
      if ( v304 == v243 )
      {
LABEL_534:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v287 = *v244;
        if ( *v244 > 1u )
        {
          if ( *(_DWORD *)(v287 + 12) == v241 && v134 == v287 )
            goto LABEL_535;
        }
        else
        {
          if ( !v287 )
            goto LABEL_522;
          v245 = v244;
        }
        if ( v243 == (char *)++v244 )
          goto LABEL_534;
      }
    }
    v244 = v243;
    v245 = nullptr;
    while ( 2 )
    {
      v246 = *v244;
      if ( *v244 > 1u )
      {
        if ( *(_DWORD *)(v246 + 12) == v241 && v134 == v246 )
        {
LABEL_535:
          *v244 = v134;
          goto LABEL_223;
        }
        goto LABEL_431;
      }
      if ( v246 )
      {
        v245 = v244;
LABEL_431:
        if ( ++v244 == (_QWORD *)v300 )
          goto LABEL_526;
        continue;
      }
      break;
    }
LABEL_522:
    if ( v245 )
    {
      LODWORD(v298) = v298 - 1;
      v244 = v245;
    }
    *v244 = v134;
    LODWORD(v299) = v299 + 1;
LABEL_223:
    v297 += 8;
  }
  while ( v307 != (__m128i *)v297 );
  v154 = v122[3];
  v155 = *(_QWORD *)(v310 + 24);
  if ( !v154 )
  {
    if ( v155 )
    {
LABEL_226:
      v156 = *(_DWORD *)(v155 - 4);
      goto LABEL_227;
    }
    goto LABEL_394;
  }
  LODWORD(v154) = *(_DWORD *)(v154 - 4);
  if ( v155 )
    goto LABEL_226;
  v156 = 0;
LABEL_227:
  if ( v156 == (_DWORD)v154 )
    goto LABEL_394;
  v157 = v313;
  if ( *(_QWORD *)(*(_QWORD *)(v313 + 32) + 2952LL) && (_DWORD)v299 )
  {
    v158 = (__m128i *)sub_186B270(0x50u);
    v158[1].m128i_i8[8] = 1;
    v159 = _mm_loadl_epi64((const __m128i *)(v157 + 24));
    v158->m128i_i32[2] = 0;
    v158[1].m128i_i64[0] = 0;
    strcpy(&v158[3].m128i_i8[8], "dl_coi");
    v158[3].m128i_i64[0] = 6;
    v158->m128i_i64[0] = (__int64)&off_1C60CE8;
    v158[4].m128i_i64[1] = 0;
    v158[2] = _mm_unpacklo_epi64(v159, (__m128i)(unsigned __int64)&v158[3].m128i_u64[1]);
    v339 = 1;
    v337 = 0;
    v338 = 0;
    v336 = &off_1C790C0;
    v341 = nullptr;
    v343 = nullptr;
    *(_QWORD *)v321 = 0;
    v298 = (__int64)v321;
    v305 = v344;
    v340 = _mm_unpacklo_epi64(v159, v159);
    v342 = v159.m128i_i64[0];
    sub_14B7810((int)v344, v159.m128i_i32[0], (int)v321, v160, v161, v162, (void *)v159.m128i_i64[0]);
    sub_18572D0(v321);
    v346 = nullptr;
    v163 = (char *)v304 + 8 * v132;
    v164 = (size_t *)v304;
    v348 = nullptr;
    v297 = (__int64)v163;
    v345 = v295;
    v347 = v295;
    if ( v163 == v304 )
      goto LABEL_472;
    while ( *v164 <= 1 )
    {
      if ( (size_t *)v297 == ++v164 )
        goto LABEL_472;
    }
    if ( (size_t *)v297 == v164 )
    {
LABEL_472:
      v262 = *(_QWORD *)(v313 + 32);
      v263 = sub_1336AB0(*(_QWORD *)(v262 + 2952), v158);
      v264 = v263;
      if ( v263 )
        ++*(_DWORD *)(v263 + 8);
      v265 = *(void (__fastcall ****)(void *))(v262 + 2952);
      if ( v265 )
      {
        v186 = (*((_DWORD *)v265 + 2))-- == 1;
        if ( v186 )
        {
          (**v265)(v265);
          sub_186B220(v265);
        }
      }
      *(_QWORD *)(v262 + 2952) = v264;
      v266 = v348;
      v336 = &off_1C790C0;
      if ( v348 )
      {
        v267 = (unsigned __int64)&v348[*((unsigned int *)v348 - 1)];
        if ( (unsigned __int64)v348 >= v267 )
          goto LABEL_494;
        do
        {
          v268 = *v266;
          if ( *v266 )
          {
            v269 = v347;
            v186 = (*(_DWORD *)(v268 + 8))-- == 1;
            if ( v186 )
              sub_15D7BC0(v269, v268);
          }
          ++v266;
        }
        while ( (unsigned __int64)v266 < v267 );
        v266 = v348;
        if ( v348 )
LABEL_494:
          sub_186B220(v266 - 1);
      }
      v274 = v346;
      if ( v346 )
      {
        v275 = (unsigned __int64)&v346[*((unsigned int *)v346 - 1)];
        if ( (unsigned __int64)v346 >= v275 )
          goto LABEL_503;
        do
        {
          v276 = *v274;
          if ( *v274 )
          {
            v277 = v345;
            v186 = (*(_DWORD *)(v276 + 8))-- == 1;
            if ( v186 )
              sub_15D7BC0(v277, v276);
          }
          ++v274;
        }
        while ( (unsigned __int64)v274 < v275 );
        v274 = v346;
        if ( v346 )
LABEL_503:
          sub_186B220(v274 - 1);
      }
      sub_14B63F0(v305);
      v278 = v343;
      if ( v343 )
      {
        v279 = (unsigned __int64)&v343[*((unsigned int *)v343 - 1)];
        if ( (unsigned __int64)v343 >= v279 )
          goto LABEL_512;
        do
        {
          v280 = *v278;
          if ( *v278 )
          {
            v281 = v342;
            v186 = (*(_DWORD *)(v280 + 8))-- == 1;
            if ( v186 )
              sub_15D7BC0(v281, v280);
          }
          ++v278;
        }
        while ( (unsigned __int64)v278 < v279 );
        v278 = v343;
        if ( v343 )
LABEL_512:
          sub_186B220(v278 - 1);
      }
      v282 = v341;
      if ( v341 )
      {
        v283 = (unsigned __int64)&v341[*((unsigned int *)v341 - 1)];
        if ( (unsigned __int64)v341 >= v283 )
          goto LABEL_521;
        do
        {
          v284 = *v282;
          if ( *v282 )
          {
            v285 = v340.m128i_i64[1];
            v186 = (*(_DWORD *)(v284 + 8))-- == 1;
            if ( v186 )
              sub_15D7BC0(v285, v284);
          }
          ++v282;
        }
        while ( (unsigned __int64)v282 < v283 );
        v282 = v341;
        if ( v341 )
LABEL_521:
          sub_186B220(v282 - 1);
      }
      goto LABEL_395;
    }
    v300 = *v164;
    while ( 2 )
    {
      v165 = *(__m128i **)sub_63BA90(v310, v300);
      v166 = *(_QWORD *)(v313 + 24);
      v299 = v166;
      v315 = v166;
      if ( v165 )
      {
        v302 = (__m128i *)((char *)v165 + 8 * v165[-1].m128i_u32[3]);
        if ( v165 != v302 )
        {
          v296 = v166;
          v295 = &v336;
          v301 = v165;
          v165 = nullptr;
          while ( 1 )
          {
            v167 = v301->m128i_i64[0];
            v317 = 0;
            v319 = 0;
            v316 = v296;
            v168 = *(_DWORD *)(v167 + 68);
            v318 = v296;
            v320 = v296;
            if ( v168 >= *(_DWORD *)(v167 + 56) )
            {
              v173 = nullptr;
              i = 0;
            }
            else
            {
              v169 = *(_QWORD *)(v167 + 8LL * v168 + 80) & 0xFFFFFFFFFFFFFFF8LL;
              if ( *(_QWORD *)(v167 + 8LL * v168 + 80) > 7u )
                ++*(_DWORD *)(v169 + 8);
              LODWORD(v307) = v168;
              v306 = v167;
              v170 = (_QWORD *)sub_186B270(0x18u);
              v167 = v306;
              v171 = v170 + 1;
              v172 = (int)v307;
              *v170 = 2;
              v173 = v170 + 1;
              for ( i = 1; ; i = v251 + 1 )
              {
                *v171 = v169;
                v175 = v172 + 1;
                *((_DWORD *)v173 - 1) = i;
                if ( v175 >= *(_DWORD *)(v167 + 56) )
                  break;
                while ( 1 )
                {
                  v169 = *(_QWORD *)(v167 + 8LL * v175 + 80) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(_QWORD *)(v167 + 8LL * v175 + 80) > 7u )
                    ++*(_DWORD *)(v169 + 8);
                  v176 = *((_DWORD *)v173 - 1);
                  if ( v176 == *((_DWORD *)v173 - 2) )
                    break;
                  v177 = v176;
                  i = v176 + 1;
                  ++v175;
                  v173[v177] = v169;
                  *((_DWORD *)v173 - 1) = i;
                  if ( v175 >= *(_DWORD *)(v167 + 56) )
                    goto LABEL_248;
                }
                v248 = (3 * v176 + 1) >> 1;
                v249 = 8 * v248 + 8;
                if ( 8 * v176 + 8 >= (unsigned int)v249 || v176 >= v248 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
                  v13 = v298;
                  v14 = (_QWORD *)v298;
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v14);
                  sub_233E40(v13);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                LODWORD(v309) = (3 * v176 + 1) >> 1;
                LODWORD(v307) = v175;
                v306 = v167;
                v250 = (_DWORD *)sub_186B300(v173 - 1, v249);
                v251 = (unsigned int)v250[1];
                v173 = v250 + 2;
                v167 = v306;
                v172 = (int)v307;
                *v250 = (_DWORD)v309;
                v171 = (unsigned __int64 *)&v250[2 * v251 + 2];
              }
            }
LABEL_248:
            v306 = v167;
            v178 = sub_15EC1C0(v296, i);
            v179 = v306;
            v180 = v178;
            if ( v178 )
              ++*(_DWORD *)(v178 + 8);
            if ( !(unsigned __int8)sub_1334510(v295, *(_QWORD *)(v179 + 40), v178, &v319, &v317) )
            {
              sub_1872CE0("");
              sub_1873130(114, 167);
            }
            v181 = v317;
            if ( v317 )
              ++*(_DWORD *)(v317 + 8);
            if ( v165 )
            {
              v182 = v165[-1].m128i_u32[3];
              if ( v182 == v165[-1].m128i_i32[2] )
              {
                v271 = (3 * v182 + 1) >> 1;
                v272 = 8 * v271 + 8;
                if ( 8 * v182 + 8 >= (unsigned int)v272 || v182 >= v271 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v298, "Overflow encountered when expanding vector");
                  v10 = v298;
                  v11 = (_QWORD *)v298;
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v11);
                  sub_233E40(v10);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v307) = (3 * v182 + 1) >> 1;
                v306 = v181;
                v273 = sub_186B300(&v165[-1].m128i_u64[1], v272);
                v165 = (__m128i *)(v273 + 8);
                v181 = v306;
                *(_DWORD *)v273 = (_DWORD)v307;
                LODWORD(v273) = *(_DWORD *)(v273 + 4);
                v185 = &v165->m128i_i64[(unsigned int)v273];
                v184 = v273 + 1;
              }
              else
              {
                v183 = v182;
                v184 = v182 + 1;
                v185 = &v165->m128i_i64[v183];
              }
            }
            else
            {
              v306 = v181;
              v270 = (_QWORD *)sub_186B270(0x18u);
              v181 = v306;
              v165 = (__m128i *)(v270 + 1);
              *v270 = 2;
              v185 = v270 + 1;
              v184 = 1;
            }
            *v185 = v181;
            v165[-1].m128i_i32[3] = v184;
            if ( v180 )
            {
              v186 = (*(_DWORD *)(v180 + 8))-- == 1;
              if ( v186 )
                sub_15D7BC0(v296, v180);
            }
            v187 = v319;
            if ( v319 )
            {
              v188 = v320;
              v186 = (*(_DWORD *)(v319 + 8))-- == 1;
              if ( v186 )
                sub_15D7BC0(v188, v187);
            }
            v189 = v317;
            if ( v317 )
            {
              v190 = v318;
              v186 = (*(_DWORD *)(v317 + 8))-- == 1;
              if ( v186 )
                sub_15D7BC0(v190, v189);
            }
            if ( v173 )
            {
              v191 = v173;
              v192 = &v173[*((unsigned int *)v173 - 1)];
              if ( v173 < v192 )
              {
                v306 = (__int64)v122;
                v193 = v173;
                v194 = v165;
                v195 = v158;
                v196 = (unsigned __int64)v192;
                do
                {
                  while ( 1 )
                  {
                    v197 = *v191;
                    if ( *v191 )
                    {
                      v186 = (*(_DWORD *)(v197 + 8))-- == 1;
                      if ( v186 )
                        break;
                    }
                    if ( (unsigned __int64)++v191 >= v196 )
                      goto LABEL_272;
                  }
                  ++v191;
                  sub_15D7BC0(v296, v197);
                }
                while ( (unsigned __int64)v191 < v196 );
LABEL_272:
                v158 = v195;
                v165 = (__m128i *)v194;
                v173 = v193;
                v122 = (_QWORD *)v306;
              }
              sub_186B220(v173 - 1);
            }
            v301 = (__m128i *)((char *)v301 + 8);
            if ( v302 == v301 )
              break;
            v296 = *(_QWORD *)(v313 + 24);
          }
          v252 = v165[-1].m128i_u32[3];
LABEL_456:
          v253 = sub_15EC240(v299, v252);
          v257 = v253;
          if ( v253 )
          {
            ++*(_DWORD *)(v253 + 8);
            sub_13333D0((_DWORD)v158, v300, v253, v254, v255, v256, (__int64)v295);
            v186 = (*(_DWORD *)(v257 + 8))-- == 1;
            if ( v186 )
              sub_15D7BC0(v299, v257);
          }
          else
          {
            sub_13333D0((_DWORD)v158, v300, 0, v254, v255, v256, (__int64)v295);
          }
          if ( v165 )
          {
            v258 = (__int64 *)v165;
            v259 = (unsigned __int64)v165 + 8 * v165[-1].m128i_u32[3];
            if ( (unsigned __int64)v165 < v259 )
            {
              do
              {
                while ( 1 )
                {
                  v260 = *v258;
                  if ( *v258 )
                  {
                    v186 = (*(_DWORD *)(v260 + 8))-- == 1;
                    if ( v186 )
                      break;
                  }
                  if ( (unsigned __int64)++v258 >= v259 )
                    goto LABEL_466;
                }
                ++v258;
                sub_15D7BC0(v299, v260);
              }
              while ( (unsigned __int64)v258 < v259 );
            }
LABEL_466:
            sub_186B220(&v165[-1].m128i_u64[1]);
          }
          v261 = v164 + 1;
          if ( (size_t *)v297 == v164 + 1 )
            goto LABEL_472;
          while ( 1 )
          {
            v164 = v261;
            v300 = *v261;
            if ( v300 > 1 )
              break;
            if ( (size_t *)v297 == ++v261 )
              goto LABEL_472;
          }
          if ( (size_t *)v297 == v261 )
            goto LABEL_472;
          continue;
        }
        v165 = nullptr;
      }
      break;
    }
    v252 = 0;
    goto LABEL_456;
  }
LABEL_395:
  v235 = (char *)v303 + 128;
  if ( *(_QWORD *)v303 > 1u )
  {
    v236 = (char *)v303;
  }
  else
  {
    v236 = (char *)v303 + 16;
    if ( *((_QWORD *)v303 + 2) <= 1u )
    {
      v236 = (char *)v303 + 32;
      if ( *((_QWORD *)v303 + 4) <= 1u )
      {
        v236 = (char *)v303 + 48;
        if ( *((_QWORD *)v303 + 6) <= 1u )
        {
          v236 = (char *)v303 + 64;
          if ( *((_QWORD *)v303 + 8) <= 1u )
          {
            v236 = (char *)v303 + 80;
            if ( *((_QWORD *)v303 + 10) <= 1u )
            {
              v236 = (char *)v303 + 96;
              if ( *((_QWORD *)v303 + 12) <= 1u )
              {
                v236 = (char *)v303 + 112;
                if ( *((_QWORD *)v303 + 14) <= 1u )
                  goto LABEL_403;
              }
            }
          }
        }
      }
    }
  }
  while ( v235 != v236 )
  {
    v238 = *((_QWORD **)v236 + 1);
    if ( v238 )
    {
      if ( *v238 )
        sub_186B220((void *)(*v238 - 8LL));
      sub_186B220(v238);
    }
    v239 = v236 + 16;
    if ( v235 == v236 + 16 )
      break;
    while ( 1 )
    {
      v236 = v239;
      if ( *(_QWORD *)v239 > 1u )
        break;
      v239 += 16;
      if ( v235 == v239 )
        goto LABEL_403;
    }
  }
LABEL_403:
  sub_186B220(v303);
  if ( v330 )
    sub_186B220(v330);
  if ( v326 )
    sub_186B220(v326);
  if ( v323 )
    sub_186B220(v323);
  if ( v308 )
    sub_186B220(v308);
  if ( v304 )
    sub_186B220(v304);
  return v122;
}

