void __fastcall sub_1261490(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __int64 v7; // rbx
  void (__fastcall *v8)(void **, __int64, __int64); // rax
  void **v9; // rbp
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v14; // rax
  void (__fastcall *v15)(void **, __int64, __int64); // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r14
  __m128i v33; // xmm0
  _BYTE *v34; // rsi
  signed __int64 v35; // r15
  __int64 v36; // r12
  _BYTE *v37; // rax
  _BYTE *v38; // rsi
  __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // r15
  __int64 v42; // r14
  void *v43; // rdi
  void *v44; // rdi
  void **v45; // rdi
  __int64 v46; // rax
  void **v47; // r12
  void *v48; // rdi
  void *v49; // rdi
  void *v50; // rdi
  __int64 v51; // r14
  unsigned __int64 v52; // r15
  signed __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  _QWORD *v55; // r12
  __m128i v56; // xmm0
  _QWORD *v57; // r9
  _BYTE *v58; // rsi
  size_t v59; // r8
  __int64 v60; // rbp
  char *v61; // rbx
  size_t v62; // r15
  _BYTE *v63; // rax
  void **v64; // r15
  void **v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char v70; // al
  char *v71; // rsi
  size_t v72; // rdx
  unsigned int v73; // eax
  __int64 v74; // rcx
  size_t v75; // rcx
  size_t v76; // r12
  _BYTE *v77; // r8
  _BYTE *v78; // r15
  size_t v79; // r15
  size_t v80; // r8
  __int64 v81; // r12
  char *v82; // rax
  char *v83; // rcx
  char *v84; // rcx
  size_t v85; // r12
  __int64 v86; // r15
  size_t v87; // rcx
  unsigned __int64 v88; // r8
  __int64 v89; // r15
  char *v90; // r9
  char *v91; // rcx
  unsigned __int64 v92; // r15
  __int64 v93; // rax
  size_t v94; // rcx
  unsigned __int64 v95; // r8
  __int64 v96; // r15
  char *v97; // rax
  char *v98; // r9
  char *v99; // rcx
  unsigned __int64 v100; // r15
  __int64 v101; // rax
  size_t v102; // rcx
  unsigned __int64 v103; // r8
  __int64 v104; // r15
  char *v105; // r9
  char *v106; // rcx
  unsigned __int64 v107; // r15
  __int64 v108; // rax
  size_t v109; // rcx
  size_t v110; // r14
  _BYTE *v111; // r8
  _BYTE *v112; // r15
  size_t v113; // r15
  size_t v114; // r8
  __int64 v115; // r14
  char *v116; // rcx
  size_t v117; // r14
  size_t v118; // r15
  __int64 v119; // rbx
  char *v120; // rcx
  __int64 v121; // rdx
  const void *v122; // rdi
  int v123; // eax
  size_t v124; // r15
  size_t v125; // rcx
  __int64 v126; // r14
  char *v127; // rax
  char *v128; // r8
  __int64 v129; // rdx
  _BYTE *v130; // rdi
  _BYTE *v131; // rdi
  _BYTE *v132; // rdi
  _BYTE *v133; // rdi
  const void *v134; // rdi
  int v135; // eax
  size_t v136; // r15
  size_t v137; // rcx
  __int64 v138; // r12
  char *v139; // r8
  char *v140; // r15
  size_t v141; // r12
  __int64 v142; // rax
  _BYTE *v143; // rdi
  size_t v144; // rax
  _BYTE *v145; // rsi
  __int64 v146; // rdx
  size_t v147; // rcx
  unsigned __int64 v148; // r8
  __int64 v149; // r15
  char *v150; // r9
  char *v151; // rcx
  unsigned __int64 v152; // r15
  __int64 v153; // rax
  _BYTE *v154; // rdi
  __int64 v155; // r15
  void *v156; // rdi
  int v157; // r12d
  __int64 v158; // rax
  _BYTE *v159; // rsi
  __int64 v160; // rdx
  signed __int64 v161; // r15
  unsigned __int64 v162; // rdi
  char *v163; // rax
  size_t v164; // r8
  size_t v165; // r9
  __m128i *v166; // r11
  char *v167; // r10
  size_t v168; // rdx
  char *v169; // rax
  char *v170; // rdi
  signed __int64 v171; // r12
  unsigned __int64 v172; // rdi
  char *v173; // rax
  __m128i *v174; // r9
  char *v175; // rax
  char *v176; // rax
  __int64 v177; // r15
  unsigned __int64 v178; // rdi
  char *v179; // rax
  __m128i *v180; // r10
  size_t v181; // rdx
  char *v182; // rax
  signed __int64 v183; // rax
  unsigned __int64 v184; // rdi
  char *v185; // rax
  size_t v186; // r8
  size_t v187; // r9
  __m128i *v188; // r11
  char *v189; // r10
  size_t v190; // rdx
  char *v191; // rax
  char *v192; // rdi
  __int64 v193; // r15
  unsigned __int64 v194; // rdi
  char *v195; // rax
  __m128i *v196; // r10
  size_t v197; // rdx
  char *v198; // rax
  char *v199; // rax
  signed __int64 v200; // rax
  unsigned __int64 v201; // rdi
  char *v202; // rax
  size_t v203; // r8
  size_t v204; // r9
  __m128i *v205; // r11
  char *v206; // r10
  size_t v207; // rdx
  char *v208; // rax
  char *v209; // rdi
  __int64 v210; // r15
  unsigned __int64 v211; // rdi
  char *v212; // rax
  __m128i *v213; // r10
  size_t v214; // rdx
  char *v215; // rax
  signed __int64 v216; // rax
  unsigned __int64 v217; // rdi
  char *v218; // rax
  size_t v219; // r8
  size_t v220; // r9
  __m128i *v221; // r11
  char *v222; // r10
  size_t v223; // rdx
  char *v224; // rax
  char *v225; // rdi
  signed __int64 v226; // r14
  unsigned __int64 v227; // rdi
  char *v228; // rax
  _QWORD *v229; // r9
  char *v230; // rax
  signed __int64 v231; // rbx
  unsigned __int64 v232; // rdi
  char *v233; // rax
  __m128i *v234; // r8
  char *v235; // rax
  signed __int64 v236; // r12
  unsigned __int64 v237; // rdi
  char *v238; // rax
  __m128i *v239; // r9
  char *v240; // rax
  signed __int64 v241; // r14
  unsigned __int64 v242; // rdi
  char *v243; // rax
  _QWORD *v244; // r9
  char *v245; // rax
  char *v246; // rax
  __int64 v247; // r15
  unsigned __int64 v248; // rdi
  char *v249; // rax
  __m128i *v250; // r10
  size_t v251; // rdx
  char *v252; // rax
  signed __int64 v253; // rax
  unsigned __int64 v254; // rdi
  char *v255; // rax
  size_t v256; // rcx
  size_t v257; // r8
  __m128i *v258; // r10
  char *v259; // r9
  size_t v260; // rdx
  char *v261; // rdi
  signed __int64 v262; // rax
  unsigned __int64 v263; // rdi
  char *v264; // rax
  size_t v265; // r8
  size_t v266; // r9
  __m128i *v267; // r11
  char *v268; // r10
  size_t v269; // rdx
  char *v270; // rax
  char *v271; // rdi
  __m128i v272; // [rsp+8h] [rbp-2C0h] BYREF
  void *v273; // [rsp+18h] [rbp-2B0h]
  size_t v274; // [rsp+20h] [rbp-2A8h]
  void **v275; // [rsp+28h] [rbp-2A0h]
  size_t v276; // [rsp+30h] [rbp-298h]
  size_t v277; // [rsp+38h] [rbp-290h]
  size_t v278; // [rsp+40h] [rbp-288h]
  size_t v279; // [rsp+48h] [rbp-280h]
  void *s2; // [rsp+50h] [rbp-278h] BYREF
  size_t n; // [rsp+58h] [rbp-270h]
  void *v282; // [rsp+70h] [rbp-258h] BYREF
  size_t v283; // [rsp+78h] [rbp-250h]
  _BYTE v284[16]; // [rsp+80h] [rbp-248h] BYREF
  void *v285; // [rsp+90h] [rbp-238h] BYREF
  size_t v286; // [rsp+98h] [rbp-230h]
  void *v287; // [rsp+B0h] [rbp-218h] BYREF
  size_t v288; // [rsp+B8h] [rbp-210h]
  __m128i v289; // [rsp+C0h] [rbp-208h] BYREF
  void *v290; // [rsp+D0h] [rbp-1F8h] BYREF
  size_t v291; // [rsp+D8h] [rbp-1F0h]
  __m128i v292; // [rsp+E0h] [rbp-1E8h] BYREF
  void *v293; // [rsp+F0h] [rbp-1D8h] BYREF
  size_t v294; // [rsp+F8h] [rbp-1D0h]
  __m128i v295; // [rsp+100h] [rbp-1C8h] BYREF
  void *v296; // [rsp+110h] [rbp-1B8h] BYREF
  size_t v297; // [rsp+118h] [rbp-1B0h]
  __m128i v298; // [rsp+120h] [rbp-1A8h] BYREF
  void *v299; // [rsp+130h] [rbp-198h] BYREF
  size_t v300; // [rsp+138h] [rbp-190h]
  __m128i v301; // [rsp+140h] [rbp-188h] BYREF
  void *v302; // [rsp+150h] [rbp-178h] BYREF
  size_t v303; // [rsp+158h] [rbp-170h]
  __m128i v304; // [rsp+160h] [rbp-168h] BYREF
  void *v305; // [rsp+170h] [rbp-158h] BYREF
  size_t v306; // [rsp+178h] [rbp-150h]
  _QWORD v307[2]; // [rsp+180h] [rbp-148h] BYREF
  void *v308; // [rsp+190h] [rbp-138h] BYREF
  size_t v309; // [rsp+198h] [rbp-130h]
  _QWORD v310[2]; // [rsp+1A0h] [rbp-128h] BYREF
  void *v311; // [rsp+1B0h] [rbp-118h] BYREF
  size_t v312; // [rsp+1B8h] [rbp-110h]
  __m128i v313; // [rsp+1C0h] [rbp-108h] BYREF
  void *v314[2]; // [rsp+1D0h] [rbp-F8h] BYREF
  void (__fastcall *v315)(_QWORD, _QWORD, _QWORD); // [rsp+1E0h] [rbp-E8h] BYREF
  __int64 v316; // [rsp+1E8h] [rbp-E0h]
  void *v317[2]; // [rsp+1F0h] [rbp-D8h] BYREF
  __int64 v318; // [rsp+200h] [rbp-C8h] BYREF
  void *v319[2]; // [rsp+210h] [rbp-B8h] BYREF
  __int64 v320; // [rsp+220h] [rbp-A8h] BYREF
  void *v321[2]; // [rsp+230h] [rbp-98h]
  char *v322; // [rsp+240h] [rbp-88h]
  void *v323[2]; // [rsp+248h] [rbp-80h] BYREF
  __int64 v324; // [rsp+258h] [rbp-70h] BYREF
  void *v325[2]; // [rsp+268h] [rbp-60h] BYREF
  __int64 v326; // [rsp+278h] [rbp-50h] BYREF
  char v327; // [rsp+288h] [rbp-40h]

  v7 = a1;
  v274 = (size_t)a3;
  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_OWORD *)(a1 + 4984) = 0;
  *(_QWORD *)a1 = off_2C3CCA8;
  *(_QWORD *)(a1 + 5000) = 0;
  sub_122CEF0(a1 + 2384, (__int64)a3, a4);
  sub_117F8A0((__int64 *)(v7 + 1840), (__int64 *)(v7 + 3104));
  sub_1180210(v7 + 1864, v7 + 3128);
  sub_1180630(v7 + 1936, v7 + 3200);
  v8 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3392);
  v315 = nullptr;
  if ( v8 )
  {
    v9 = v314;
    v8(v314, a1 + 3376, 2);
    v10 = *(_QWORD *)(a1 + 3400);
    v8 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3392);
  }
  else
  {
    v10 = v316;
    v9 = v314;
  }
  si128 = _mm_load_si128((const __m128i *)v314);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 2112));
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 2128);
  *(_QWORD *)(a1 + 2128) = v8;
  v14 = *(_QWORD *)(a1 + 2136);
  *(__m128i *)v314 = v12;
  *(__m128i *)(a1 + 2112) = si128;
  v315 = v13;
  v316 = v14;
  *(_QWORD *)(a1 + 2136) = v10;
  if ( v13 )
    v13(v314, v314, 3);
  v15 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3424);
  v16 = v316;
  v315 = nullptr;
  if ( v15 )
  {
    v15(v314, a1 + 3408, 2);
    v16 = *(_QWORD *)(a1 + 3432);
    v15 = *(void (__fastcall **)(void **, __int64, __int64))(a1 + 3424);
  }
  v17 = _mm_load_si128((const __m128i *)v314);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 2144));
  v19 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 2160);
  *(_QWORD *)(a1 + 2160) = v15;
  v20 = *(_QWORD *)(a1 + 2168);
  *(__m128i *)v314 = v18;
  *(__m128i *)(a1 + 2144) = v17;
  v315 = v19;
  v316 = v20;
  *(_QWORD *)(a1 + 2168) = v16;
  if ( v19 )
    v19(v314, v314, 3);
  v21 = *(_BYTE **)(a1 + 2520);
  v22 = *(_QWORD *)(a1 + 2528);
  v314[0] = &v315;
  sub_125F860(v314, v21, (__int64)&v21[v22]);
  v23 = *(_BYTE **)(a1 + 2552);
  v24 = *(_QWORD *)(a1 + 2560);
  v317[0] = &v318;
  sub_125F860(v317, v23, (__int64)&v23[v24]);
  v25 = *(_BYTE **)(a1 + 2584);
  v26 = *(_QWORD *)(a1 + 2592);
  v319[0] = &v320;
  sub_125F860(v319, v25, (__int64)&v25[v26]);
  v27 = *(_QWORD *)(a1 + 2624);
  v28 = *(_QWORD *)(a1 + 2616);
  *(_OWORD *)v321 = 0;
  v272.m128i_i64[0] = v27;
  v322 = nullptr;
  v29 = v27 - v28;
  v30 = (v27 - v28) >> 5;
  if ( v30 )
  {
    if ( v30 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_475;
    v31 = (_QWORD *)operator new(v29);
    v28 = *(_QWORD *)(a1 + 2616);
    v32 = v31;
    v272.m128i_i64[0] = *(_QWORD *)(a1 + 2624);
  }
  else
  {
    v32 = nullptr;
  }
  v272.m128i_i64[1] = (__int64)v32;
  v33 = _mm_loadl_epi64((const __m128i *)&v272.m128i_u64[1]);
  v322 = (char *)v32 + v29;
  *(__m128i *)v321 = _mm_unpacklo_epi64(v33, v33);
  if ( v272.m128i_i64[0] != v28 )
  {
    *v32 = v32 + 2;
    v34 = *(_BYTE **)v28;
    v35 = *(_QWORD *)(v28 + 8);
    if ( !(v35 + *(_QWORD *)v28) || v34 )
    {
      v36 = v28 + 32;
      while ( (unsigned __int64)v35 <= 0xF )
      {
        v37 = (_BYTE *)*v32;
        if ( v35 != 1 )
        {
          if ( !v35 )
            goto LABEL_19;
          goto LABEL_25;
        }
        *v37 = *v34;
        v37 = (_BYTE *)*v32;
LABEL_19:
        v32[1] = v35;
        v32 += 4;
        v37[v35] = 0;
        if ( v36 == v272.m128i_i64[0] )
          goto LABEL_28;
        v36 += 32;
        *v32 = v32 + 2;
        v34 = *(_BYTE **)(v36 - 32);
        v35 = *(_QWORD *)(v36 - 24);
        if ( &v34[v35] && !v34 )
          goto LABEL_22;
      }
      if ( v35 < 0 )
        goto LABEL_473;
      v272.m128i_i64[1] = (__int64)v34;
      v37 = (_BYTE *)operator new(v35 + 1);
      v32[2] = v35;
      v34 = (_BYTE *)v272.m128i_i64[1];
      *v32 = v37;
LABEL_25:
      memcpy(v37, v34, v35);
      v37 = (_BYTE *)*v32;
      goto LABEL_19;
    }
LABEL_22:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_28:
  v38 = *(_BYTE **)(a1 + 2640);
  v39 = *(_QWORD *)(a1 + 2648);
  v321[1] = v32;
  v323[0] = &v324;
  sub_125F860(v323, v38, (__int64)&v38[v39]);
  v40 = *(_BYTE *)(a1 + 2704) == 0;
  v327 = 0;
  if ( !v40 )
  {
    v159 = *(_BYTE **)(a1 + 2672);
    v160 = *(_QWORD *)(a1 + 2680);
    v325[0] = &v326;
    sub_125F860(v325, v159, (__int64)&v159[v160]);
    v327 = 1;
  }
  v41 = *(_QWORD *)(a1 + 2176);
  v42 = v41 + 192LL * *(unsigned int *)(a1 + 2184);
  while ( v41 != v42 )
  {
    while ( 1 )
    {
      v42 -= 192;
      if ( *(_BYTE *)(v42 + 184) )
      {
        v43 = *(void **)(v42 + 152);
        if ( v43 != (void *)(v42 + 168) )
          operator delete(v43);
      }
      v44 = *(void **)(v42 + 120);
      if ( v44 != (void *)(v42 + 136) )
        operator delete(v44);
      v45 = *(void ***)(v42 + 96);
      v46 = *(_QWORD *)(v42 + 104);
      v47 = v45;
      if ( (void **)v46 != v45 )
      {
        do
        {
          while ( 1 )
          {
            v48 = *v47;
            if ( *v47 == v47 + 2 )
              break;
            v272.m128i_i64[0] = v46;
            v47 += 4;
            operator delete(v48);
            v46 = v272.m128i_i64[0];
            if ( v47 == (void **)v272.m128i_i64[0] )
              goto LABEL_40;
          }
          v47 += 4;
        }
        while ( (void **)v46 != v47 );
LABEL_40:
        v45 = *(void ***)(v42 + 96);
      }
      if ( v45 )
        operator delete(v45);
      v49 = *(void **)(v42 + 64);
      if ( v49 != (void *)(v42 + 80) )
        operator delete(v49);
      v50 = *(void **)(v42 + 32);
      if ( v50 != (void *)(v42 + 48) )
        operator delete(v50);
      if ( *(_QWORD *)v42 == v42 + 16 )
        break;
      operator delete(*(void **)v42);
      if ( v41 == v42 )
        goto LABEL_49;
    }
  }
LABEL_49:
  *(_DWORD *)(v7 + 2184) = 0;
  if ( *(_DWORD *)(v7 + 2188) )
  {
    v51 = *(_QWORD *)(v7 + 2176);
  }
  else
  {
    v155 = sub_2237400(v7 + 2176, v7 + 2192, 1, 192, &v311);
    sub_11821E0((__int64 *)(v7 + 2176), v155);
    v156 = *(void **)(v7 + 2176);
    v157 = (int)v311;
    if ( (void *)(v7 + 2192) != v156 )
      free(v156);
    v158 = *(unsigned int *)(v7 + 2184);
    *(_QWORD *)(v7 + 2176) = v155;
    *(_DWORD *)(v7 + 2188) = v157;
    v51 = v155 + 192 * v158;
  }
  *(_QWORD *)v51 = v51 + 16;
  sub_125F860((_QWORD *)v51, (_BYTE *)v314[0], (__int64)v314[0] + (unsigned __int64)v314[1]);
  *(_QWORD *)(v51 + 32) = v51 + 48;
  sub_125F860((_QWORD *)(v51 + 32), (_BYTE *)v317[0], (__int64)v317[0] + (unsigned __int64)v317[1]);
  *(_QWORD *)(v51 + 64) = v51 + 80;
  sub_125F860((_QWORD *)(v51 + 64), (_BYTE *)v319[0], (__int64)v319[0] + (unsigned __int64)v319[1]);
  v52 = (char *)v321[1] - (char *)v321[0];
  v53 = (char *)v321[1] - (char *)v321[0];
  *(_OWORD *)(v51 + 96) = 0;
  v54 = v53 >> 5;
  *(_QWORD *)(v51 + 112) = 0;
  if ( v54 )
  {
    if ( v54 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v55 = (_QWORD *)operator new(v52);
      goto LABEL_54;
    }
LABEL_475:
    std::__throw_bad_alloc();
  }
  v55 = nullptr;
LABEL_54:
  v272.m128i_i64[0] = (__int64)v55;
  v56 = _mm_loadl_epi64(&v272);
  *(_QWORD *)(v51 + 112) = (char *)v55 + v52;
  *(__m128i *)(v51 + 96) = _mm_unpacklo_epi64(v56, v56);
  v57 = v321[0];
  v272.m128i_i64[0] = (__int64)v321[1];
  if ( v321[1] == v321[0] )
    goto LABEL_69;
  *v55 = v55 + 2;
  v58 = (_BYTE *)*v57;
  v59 = v57[1];
  if ( v59 + *v57 && !v58 )
    goto LABEL_22;
  v272.m128i_i64[1] = (__int64)v314;
  v60 = v7;
  v61 = (char *)(v57 + 4);
  v62 = v59;
LABEL_58:
  if ( v62 > 0xF )
    goto LABEL_65;
  while ( 1 )
  {
    v63 = (_BYTE *)*v55;
    if ( v62 == 1 )
    {
      *v63 = *v58;
      v63 = (_BYTE *)*v55;
      goto LABEL_61;
    }
    if ( v62 )
      goto LABEL_67;
LABEL_61:
    v55[1] = v62;
    v55 += 4;
    v63[v62] = 0;
    if ( v61 == (char *)v272.m128i_i64[0] )
      break;
    v61 += 32;
    *v55 = v55 + 2;
    v58 = *((_BYTE **)v61 - 4);
    v62 = *((_QWORD *)v61 - 3);
    if ( !&v58[v62] )
      goto LABEL_58;
    if ( !v58 )
      goto LABEL_22;
    if ( v62 > 0xF )
    {
LABEL_65:
      v273 = v58;
      if ( (v62 & 0x8000000000000000LL) != 0LL )
        goto LABEL_473;
      v63 = (_BYTE *)operator new(v62 + 1);
      v55[2] = v62;
      v58 = v273;
      *v55 = v63;
LABEL_67:
      memcpy(v63, v58, v62);
      v63 = (_BYTE *)*v55;
      goto LABEL_61;
    }
  }
  v7 = v60;
  v9 = (void **)v272.m128i_i64[1];
LABEL_69:
  *(_QWORD *)(v51 + 104) = v55;
  *(_QWORD *)(v51 + 120) = v51 + 136;
  sub_125F860((_QWORD *)(v51 + 120), (_BYTE *)v323[0], (__int64)v323[0] + (unsigned __int64)v323[1]);
  *(_BYTE *)(v51 + 184) = 0;
  if ( v327 )
  {
    *(_QWORD *)(v51 + 152) = v51 + 168;
    sub_125F860((_QWORD *)(v51 + 152), (_BYTE *)v325[0], (__int64)v325[0] + (unsigned __int64)v325[1]);
    *(_BYTE *)(v51 + 184) = 1;
    ++*(_DWORD *)(v7 + 2184);
    if ( v327 && v325[0] != v9 + 21 )
      operator delete(v325[0]);
  }
  else
  {
    ++*(_DWORD *)(v7 + 2184);
  }
  if ( v323[0] != v9 + 17 )
    operator delete(v323[0]);
  v64 = (void **)v321[1];
  v65 = (void **)v321[0];
  if ( v321[1] != v321[0] )
  {
    do
    {
      while ( *v65 != v65 + 2 )
      {
        operator delete(*v65);
        v65 += 4;
        if ( v64 == v65 )
          goto LABEL_76;
      }
      v65 += 4;
    }
    while ( v64 != v65 );
LABEL_76:
    v65 = (void **)v321[0];
  }
  if ( v65 )
    operator delete(v65);
  if ( v319[0] != v9 + 10 )
    operator delete(v319[0]);
  if ( v317[0] != v9 + 6 )
    operator delete(v317[0]);
  if ( v314[0] != v9 + 2 )
    operator delete(v314[0]);
  v272.m128i_i64[1] = (__int64)&s2;
  sub_112B6F0(&s2, v7);
  sub_12202B0(v7, v7 + 1152, v66, v67, v68, v69);
  v272.m128i_i64[0] = v7 + 624;
  if ( *(_DWORD *)(v274 + 32) == 37 )
  {
    v72 = 5;
    v71 = "lib32";
  }
  else
  {
    v70 = sub_22B7EC0(v274);
    v71 = "lib";
    v72 = v70 == 0 ? 5LL : 3LL;
    if ( !v70 )
      v71 = (char *)"lib64";
  }
  v273 = &v282;
  v282 = v284;
  if ( (_DWORD)v72 )
  {
    v73 = 0;
    do
    {
      v74 = v73++;
      v284[v74] = v71[v74];
    }
    while ( v73 < (unsigned int)v72 );
  }
  v283 = v72;
  v284[v72] = 0;
  v275 = &v285;
  sub_125FB50((char *)&v285, a2, v274, (__int64)s2, n);
  sub_1218F10(v7, a2, v272.m128i_i64[1], (__int64)v273, (__int64)&v285, v272.m128i_i64[0]);
  v75 = *(_QWORD *)(a2 + 112);
  v76 = n;
  v77 = *(_BYTE **)(a2 + 104);
  v78 = s2;
  if ( v75 < n )
    goto LABEL_92;
  if ( n )
  {
    v134 = *(const void **)(a2 + 104);
    v276 = *(_QWORD *)(a2 + 112);
    v274 = (size_t)v77;
    v135 = memcmp(v134, s2, n);
    v77 = (_BYTE *)v274;
    v75 = v276;
    if ( v135 )
      goto LABEL_92;
  }
  v287 = &v289;
  sub_125F860(&v287, v77, (__int64)&v77[v75]);
  v136 = v288;
  if ( 0x7FFFFFFFFFFFFFFFLL - v288 <= 7 )
    goto LABEL_474;
  v137 = v288 + 8;
  if ( v287 != &v289 )
  {
    v138 = v289.m128i_i64[0];
    if ( v137 <= v289.m128i_i64[0] )
      goto LABEL_199;
LABEL_357:
    if ( (v137 & 0x8000000000000000LL) == 0LL )
    {
      v236 = 2 * v138;
      if ( v137 < v236 )
      {
        v237 = v236 + 1;
        if ( v236 < 0 )
        {
          v237 = 0x8000000000000000LL;
          v236 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v237 = v288 + 9;
        v236 = v288 + 8;
      }
      v274 = v288 + 8;
      v238 = (char *)operator new(v237);
      v137 = v274;
      v239 = (__m128i *)v287;
      v139 = v238;
      if ( v136 )
      {
        if ( v136 == 1 )
        {
          *v238 = *(_BYTE *)v287;
        }
        else
        {
          v276 = v274;
          v274 = (size_t)v287;
          v240 = (char *)memcpy(v238, v287, v136);
          v137 = v276;
          v239 = (__m128i *)v274;
          v139 = v240;
        }
      }
      *(_QWORD *)&v139[v136] = 0x2F62696C2F2E2E2FLL;
      if ( v239 != &v289 )
      {
        v276 = v137;
        v274 = (size_t)v139;
        operator delete(v239);
        v137 = v276;
        v139 = (char *)v274;
      }
      v287 = v139;
      v289.m128i_i64[0] = v236;
      goto LABEL_200;
    }
LABEL_473:
    std::__throw_length_error("basic_string::_M_create");
  }
  v138 = 15;
  if ( v137 > 0xF )
    goto LABEL_357;
LABEL_199:
  *(_QWORD *)((char *)v287 + v288) = 0x2F62696C2F2E2E2FLL;
  v139 = (char *)v287;
LABEL_200:
  v288 = v137;
  v139[v136 + 8] = 0;
  v140 = (char *)v287;
  v141 = v286 + v288;
  if ( v287 == &v289 )
  {
    v142 = 15;
    if ( v141 <= 0xF )
      goto LABEL_202;
  }
  else
  {
    v142 = v289.m128i_i64[0];
    if ( v141 <= v289.m128i_i64[0] )
    {
LABEL_202:
      if ( v286 )
      {
        v143 = (char *)v287 + v288;
        if ( v286 == 1 )
          *v143 = *(_BYTE *)v285;
        else
          memcpy(v143, v285, v286);
        v140 = (char *)v287;
      }
      goto LABEL_206;
    }
  }
  if ( (v141 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v253 = 2 * v142;
  v274 = v253;
  if ( v141 >= v253 )
  {
    v254 = v141 + 1;
    v274 = v286 + v288;
  }
  else
  {
    v254 = v253 + 1;
    if ( v253 < 0 )
    {
      v254 = 0x8000000000000000LL;
      v274 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v278 = v288;
  v277 = (size_t)v285;
  v276 = v286;
  v255 = (char *)operator new(v254);
  v256 = v278;
  v257 = v276;
  v140 = v255;
  v258 = (__m128i *)v287;
  v259 = (char *)v277;
  if ( v278 )
  {
    if ( v278 == 1 )
    {
      *v255 = *(_BYTE *)v287;
    }
    else
    {
      v260 = v278;
      v279 = v277;
      v278 = v276;
      v277 = v256;
      v276 = (size_t)v287;
      memcpy(v255, v287, v260);
      v259 = (char *)v279;
      v257 = v278;
      v256 = v277;
      v258 = (__m128i *)v276;
    }
  }
  if ( v259 && v257 )
  {
    v261 = &v140[v256];
    if ( v257 == 1 )
    {
      *v261 = *v259;
    }
    else
    {
      v276 = (size_t)v258;
      memcpy(v261, v259, v257);
      v258 = (__m128i *)v276;
    }
  }
  if ( v258 != &v289 )
    operator delete(v258);
  v287 = v140;
  v289.m128i_i64[0] = v274;
LABEL_206:
  v288 = v141;
  v140[v141] = 0;
  v311 = &v313;
  if ( v287 == &v289 )
  {
    v313 = _mm_load_si128(&v289);
  }
  else
  {
    v311 = v287;
    v313.m128i_i64[0] = v289.m128i_i64[0];
  }
  v144 = v288;
  v288 = 0;
  v312 = v144;
  v287 = &v289;
  LOWORD(v317[0]) = 260;
  v289.m128i_i8[0] = 0;
  v314[0] = &v311;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v287 != &v289 )
    operator delete(v287);
  v145 = *(_BYTE **)(a2 + 104);
  v146 = (__int64)&v145[*(_QWORD *)(a2 + 112)];
  v290 = &v292;
  sub_125F860(&v290, v145, v146);
  v147 = v291;
  if ( 0x7FFFFFFFFFFFFFFFLL - v291 <= 3 )
    goto LABEL_474;
  v148 = v291 + 4;
  if ( v290 == &v292 )
  {
    v149 = 15;
    if ( v148 > 0xF )
      goto LABEL_401;
LABEL_215:
    *(_DWORD *)((char *)v290 + v291) = 791555631;
    v150 = (char *)v290;
  }
  else
  {
    v149 = v292.m128i_i64[0];
    if ( v148 <= v292.m128i_i64[0] )
      goto LABEL_215;
LABEL_401:
    if ( (v148 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v247 = 2 * v149;
    if ( v148 < v247 )
    {
      v248 = v247 + 1;
      if ( v247 < 0 )
      {
        v248 = 0x8000000000000000LL;
        v247 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v248 = v291 + 5;
      v247 = v291 + 4;
    }
    v276 = v291 + 4;
    v274 = v291;
    v249 = (char *)operator new(v248);
    v147 = v274;
    v148 = v276;
    v150 = v249;
    v250 = (__m128i *)v290;
    if ( v274 )
    {
      if ( v274 == 1 )
      {
        *v249 = *(_BYTE *)v290;
      }
      else
      {
        v251 = v274;
        v277 = v276;
        v276 = v274;
        v274 = (size_t)v290;
        v252 = (char *)memcpy(v249, v290, v251);
        v148 = v277;
        v147 = v276;
        v250 = (__m128i *)v274;
        v150 = v252;
      }
    }
    *(_DWORD *)&v150[v147] = 791555631;
    if ( v250 != &v292 )
    {
      v277 = v148;
      v276 = v147;
      v274 = (size_t)v150;
      operator delete(v250);
      v148 = v277;
      v147 = v276;
      v150 = (char *)v274;
    }
    v290 = v150;
    v292.m128i_i64[0] = v247;
  }
  v291 = v148;
  v150[v147 + 4] = 0;
  v151 = (char *)v290;
  v152 = v283 + v291;
  if ( v290 == &v292 )
  {
    v153 = 15;
    if ( v152 <= 0xF )
      goto LABEL_218;
  }
  else
  {
    v153 = v292.m128i_i64[0];
    if ( v152 <= v292.m128i_i64[0] )
    {
LABEL_218:
      if ( v283 )
      {
        v154 = (char *)v290 + v291;
        if ( v283 == 1 )
          *v154 = *(_BYTE *)v282;
        else
          memcpy(v154, v282, v283);
        v151 = (char *)v290;
      }
      goto LABEL_222;
    }
  }
  if ( (v152 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v262 = 2 * v153;
  v274 = v262;
  if ( v152 < v262 )
  {
    v263 = v262 + 1;
    if ( v262 < 0 )
    {
      v263 = 0x8000000000000000LL;
      v274 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v274 = v283 + v291;
    v263 = v152 + 1;
  }
  v278 = v291;
  v277 = (size_t)v282;
  v276 = v283;
  v264 = (char *)operator new(v263);
  v265 = v278;
  v266 = v276;
  v151 = v264;
  v267 = (__m128i *)v290;
  v268 = (char *)v277;
  if ( v278 )
  {
    if ( v278 == 1 )
    {
      *v264 = *(_BYTE *)v290;
    }
    else
    {
      v269 = v278;
      v279 = v277;
      v278 = v276;
      v277 = v265;
      v276 = (size_t)v290;
      v270 = (char *)memcpy(v264, v290, v269);
      v268 = (char *)v279;
      v266 = v278;
      v265 = v277;
      v267 = (__m128i *)v276;
      v151 = v270;
    }
  }
  if ( v268 && v266 )
  {
    v271 = &v151[v265];
    if ( v266 == 1 )
    {
      *v271 = *v268;
    }
    else
    {
      v277 = (size_t)v151;
      v276 = (size_t)v267;
      memcpy(v271, v268, v266);
      v151 = (char *)v277;
      v267 = (__m128i *)v276;
    }
  }
  if ( v267 != &v292 )
  {
    v276 = (size_t)v151;
    operator delete(v267);
    v151 = (char *)v276;
  }
  v290 = v151;
  v292.m128i_i64[0] = v274;
LABEL_222:
  v291 = v152;
  v151[v152] = 0;
  v311 = &v313;
  if ( v290 == &v292 )
  {
    v313 = _mm_load_si128(&v292);
  }
  else
  {
    v311 = v290;
    v313.m128i_i64[0] = v292.m128i_i64[0];
  }
  v314[0] = &v311;
  v312 = v291;
  v290 = &v292;
  v291 = 0;
  v292.m128i_i8[0] = 0;
  LOWORD(v317[0]) = 260;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v290 != &v292 )
    operator delete(v290);
  v78 = s2;
  v76 = n;
LABEL_92:
  v293 = &v295;
  v274 = (size_t)&v295;
  sub_125F860(&v293, v78, (__int64)&v78[v76]);
  v79 = v294;
  if ( 0x7FFFFFFFFFFFFFFFLL - v294 <= 4 )
    goto LABEL_474;
  v80 = v294 + 5;
  if ( v293 == (void *)v274 )
  {
    v81 = 15;
    if ( v80 > 0xF )
      goto LABEL_248;
LABEL_95:
    v82 = (char *)v293 + v294;
    *(_DWORD *)v82 = 1651076143;
    v82[4] = 47;
    v83 = (char *)v293;
  }
  else
  {
    v81 = v295.m128i_i64[0];
    if ( v80 <= v295.m128i_i64[0] )
      goto LABEL_95;
LABEL_248:
    if ( (v80 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v171 = 2 * v81;
    if ( v80 < v171 )
    {
      v172 = v171 + 1;
      if ( v171 < 0 )
      {
        v172 = 0x8000000000000000LL;
        v171 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v172 = v294 + 6;
      v171 = v294 + 5;
    }
    v274 = v294 + 5;
    v173 = (char *)operator new(v172);
    v80 = v274;
    v174 = (__m128i *)v293;
    v83 = v173;
    if ( v79 )
    {
      if ( v79 == 1 )
      {
        *v173 = *(_BYTE *)v293;
      }
      else
      {
        v276 = v274;
        v274 = (size_t)v293;
        v175 = (char *)memcpy(v173, v293, v79);
        v80 = v276;
        v174 = (__m128i *)v274;
        v83 = v175;
      }
    }
    v176 = &v83[v79];
    *(_DWORD *)v176 = 1651076143;
    v176[4] = 47;
    if ( v174 != &v295 )
    {
      v276 = (size_t)v83;
      v274 = v80;
      operator delete(v174);
      v83 = (char *)v276;
      v80 = v274;
    }
    v293 = v83;
    v295.m128i_i64[0] = v171;
  }
  v294 = v80;
  v83[v79 + 5] = 0;
  v84 = (char *)v293;
  v85 = v286 + v294;
  if ( v293 == &v295 )
  {
    v86 = 15;
    if ( v85 <= 0xF )
      goto LABEL_98;
  }
  else
  {
    v86 = v295.m128i_i64[0];
    if ( v85 <= v295.m128i_i64[0] )
    {
LABEL_98:
      if ( v286 )
      {
        v130 = (char *)v293 + v294;
        if ( v286 == 1 )
          *v130 = *(_BYTE *)v285;
        else
          memcpy(v130, v285, v286);
        v84 = (char *)v293;
      }
      goto LABEL_99;
    }
  }
  if ( (v85 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v161 = 2 * v86;
  if ( v85 < v161 )
  {
    v162 = v161 + 1;
    if ( v161 < 0 )
    {
      v162 = 0x8000000000000000LL;
      v161 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v162 = v85 + 1;
    v161 = v286 + v294;
  }
  v277 = v294;
  v276 = (size_t)v285;
  v274 = v286;
  v163 = (char *)operator new(v162);
  v164 = v277;
  v165 = v274;
  v84 = v163;
  v166 = (__m128i *)v293;
  v167 = (char *)v276;
  if ( v277 )
  {
    if ( v277 == 1 )
    {
      *v163 = *(_BYTE *)v293;
    }
    else
    {
      v168 = v277;
      v278 = v276;
      v277 = v274;
      v276 = v164;
      v274 = (size_t)v293;
      v169 = (char *)memcpy(v163, v293, v168);
      v167 = (char *)v278;
      v165 = v277;
      v164 = v276;
      v166 = (__m128i *)v274;
      v84 = v169;
    }
  }
  if ( v167 && v165 )
  {
    v170 = &v84[v164];
    if ( v165 == 1 )
    {
      *v170 = *v167;
    }
    else
    {
      v276 = (size_t)v84;
      v274 = (size_t)v166;
      memcpy(v170, v167, v165);
      v84 = (char *)v276;
      v166 = (__m128i *)v274;
    }
  }
  if ( v166 != &v295 )
  {
    v274 = (size_t)v84;
    operator delete(v166);
    v84 = (char *)v274;
  }
  v293 = v84;
  v295.m128i_i64[0] = v161;
LABEL_99:
  v294 = v85;
  v84[v85] = 0;
  v311 = &v313;
  if ( v293 == &v295 )
  {
    v313 = _mm_load_si128(&v295);
  }
  else
  {
    v311 = v293;
    v313.m128i_i64[0] = v295.m128i_i64[0];
  }
  v295.m128i_i8[0] = 0;
  v312 = v294;
  v293 = &v295;
  v294 = 0;
  LOWORD(v317[0]) = 260;
  v314[0] = &v311;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v293 != &v295 )
    operator delete(v293);
  v296 = &v298;
  sub_125F860(&v296, s2, (__int64)s2 + n);
  v87 = v297;
  if ( 0x7FFFFFFFFFFFFFFFLL - v297 <= 7 )
    goto LABEL_474;
  v88 = v297 + 8;
  if ( v296 == &v298 )
  {
    v89 = 15;
    if ( v88 > 0xF )
      goto LABEL_258;
LABEL_108:
    *(_QWORD *)((char *)v296 + v297) = 0x2F2E2E2F62696C2FLL;
    v90 = (char *)v296;
  }
  else
  {
    v89 = v298.m128i_i64[0];
    if ( v88 <= v298.m128i_i64[0] )
      goto LABEL_108;
LABEL_258:
    if ( (v88 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v177 = 2 * v89;
    if ( v88 < v177 )
    {
      v178 = v177 + 1;
      if ( v177 < 0 )
      {
        v178 = 0x8000000000000000LL;
        v177 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v178 = v297 + 9;
      v177 = v297 + 8;
    }
    v276 = v297 + 8;
    v274 = v297;
    v179 = (char *)operator new(v178);
    v87 = v274;
    v88 = v276;
    v90 = v179;
    v180 = (__m128i *)v296;
    if ( v274 )
    {
      if ( v274 == 1 )
      {
        *v179 = *(_BYTE *)v296;
      }
      else
      {
        v181 = v274;
        v277 = v276;
        v276 = v274;
        v274 = (size_t)v296;
        v182 = (char *)memcpy(v179, v296, v181);
        v88 = v277;
        v87 = v276;
        v180 = (__m128i *)v274;
        v90 = v182;
      }
    }
    *(_QWORD *)&v90[v87] = 0x2F2E2E2F62696C2FLL;
    if ( v180 != &v298 )
    {
      v277 = (size_t)v90;
      v276 = v88;
      v274 = v87;
      operator delete(v180);
      v90 = (char *)v277;
      v88 = v276;
      v87 = v274;
    }
    v296 = v90;
    v298.m128i_i64[0] = v177;
  }
  v297 = v88;
  v90[v87 + 8] = 0;
  v91 = (char *)v296;
  v92 = v283 + v297;
  if ( v296 == &v298 )
  {
    v93 = 15;
    if ( v92 <= 0xF )
      goto LABEL_111;
  }
  else
  {
    v93 = v298.m128i_i64[0];
    if ( v92 <= v298.m128i_i64[0] )
    {
LABEL_111:
      if ( v283 )
      {
        v131 = (char *)v296 + v297;
        if ( v283 == 1 )
          *v131 = *(_BYTE *)v282;
        else
          memcpy(v131, v282, v283);
        v91 = (char *)v296;
      }
      goto LABEL_112;
    }
  }
  if ( (v92 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v183 = 2 * v93;
  v274 = v183;
  if ( v92 < v183 )
  {
    v184 = v183 + 1;
    if ( v183 < 0 )
    {
      v184 = 0x8000000000000000LL;
      v274 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v274 = v283 + v297;
    v184 = v92 + 1;
  }
  v278 = v297;
  v277 = (size_t)v282;
  v276 = v283;
  v185 = (char *)operator new(v184);
  v186 = v278;
  v187 = v276;
  v91 = v185;
  v188 = (__m128i *)v296;
  v189 = (char *)v277;
  if ( v278 )
  {
    if ( v278 == 1 )
    {
      *v185 = *(_BYTE *)v296;
    }
    else
    {
      v190 = v278;
      v279 = v277;
      v278 = v276;
      v277 = v186;
      v276 = (size_t)v296;
      v191 = (char *)memcpy(v185, v296, v190);
      v189 = (char *)v279;
      v187 = v278;
      v186 = v277;
      v188 = (__m128i *)v276;
      v91 = v191;
    }
  }
  if ( v189 && v187 )
  {
    v192 = &v91[v186];
    if ( v187 == 1 )
    {
      *v192 = *v189;
    }
    else
    {
      v277 = (size_t)v91;
      v276 = (size_t)v188;
      memcpy(v192, v189, v187);
      v91 = (char *)v277;
      v188 = (__m128i *)v276;
    }
  }
  if ( v188 != &v298 )
  {
    v276 = (size_t)v91;
    operator delete(v188);
    v91 = (char *)v276;
  }
  v296 = v91;
  v298.m128i_i64[0] = v274;
LABEL_112:
  v297 = v92;
  v91[v92] = 0;
  v311 = &v313;
  if ( v296 == &v298 )
  {
    v313 = _mm_load_si128(&v298);
  }
  else
  {
    v311 = v296;
    v313.m128i_i64[0] = v298.m128i_i64[0];
  }
  v298.m128i_i8[0] = 0;
  v312 = v297;
  v296 = &v298;
  v297 = 0;
  LOWORD(v317[0]) = 260;
  v314[0] = &v311;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v296 != &v298 )
    operator delete(v296);
  v299 = &v301;
  sub_125F860(&v299, s2, (__int64)s2 + n);
  v94 = v300;
  if ( 0x7FFFFFFFFFFFFFFFLL - v300 <= 8 )
    goto LABEL_474;
  v95 = v300 + 9;
  if ( v299 == &v301 )
  {
    v96 = 15;
    if ( v95 > 0xF )
      goto LABEL_282;
LABEL_121:
    v97 = (char *)v299 + v300;
    v97[8] = 47;
    *(_QWORD *)v97 = 0x62696C2F7273752FLL;
    v98 = (char *)v299;
  }
  else
  {
    v96 = v301.m128i_i64[0];
    if ( v95 <= v301.m128i_i64[0] )
      goto LABEL_121;
LABEL_282:
    if ( (v95 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v193 = 2 * v96;
    if ( v95 < v193 )
    {
      v194 = v193 + 1;
      if ( v193 < 0 )
      {
        v194 = 0x8000000000000000LL;
        v193 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v194 = v300 + 10;
      v193 = v300 + 9;
    }
    v276 = v300 + 9;
    v274 = v300;
    v195 = (char *)operator new(v194);
    v94 = v274;
    v95 = v276;
    v98 = v195;
    v196 = (__m128i *)v299;
    if ( v274 )
    {
      if ( v274 == 1 )
      {
        *v195 = *(_BYTE *)v299;
      }
      else
      {
        v197 = v274;
        v277 = v276;
        v276 = v274;
        v274 = (size_t)v299;
        v198 = (char *)memcpy(v195, v299, v197);
        v95 = v277;
        v94 = v276;
        v196 = (__m128i *)v274;
        v98 = v198;
      }
    }
    v199 = &v98[v94];
    *(_QWORD *)v199 = 0x62696C2F7273752FLL;
    v199[8] = 47;
    if ( v196 != &v301 )
    {
      v277 = v95;
      v276 = (size_t)v98;
      v274 = v94;
      operator delete(v196);
      v95 = v277;
      v98 = (char *)v276;
      v94 = v274;
    }
    v299 = v98;
    v301.m128i_i64[0] = v193;
  }
  v300 = v95;
  v98[v94 + 9] = 0;
  v99 = (char *)v299;
  v100 = v286 + v300;
  if ( v299 == &v301 )
  {
    v101 = 15;
    if ( v100 <= 0xF )
      goto LABEL_124;
  }
  else
  {
    v101 = v301.m128i_i64[0];
    if ( v100 <= v301.m128i_i64[0] )
    {
LABEL_124:
      if ( v286 )
      {
        v132 = (char *)v299 + v300;
        if ( v286 == 1 )
          *v132 = *(_BYTE *)v285;
        else
          memcpy(v132, v285, v286);
        v99 = (char *)v299;
      }
      goto LABEL_125;
    }
  }
  if ( (v100 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v200 = 2 * v101;
  v274 = v200;
  if ( v100 < v200 )
  {
    v201 = v200 + 1;
    if ( v200 < 0 )
    {
      v201 = 0x8000000000000000LL;
      v274 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v274 = v286 + v300;
    v201 = v100 + 1;
  }
  v278 = v300;
  v277 = (size_t)v285;
  v276 = v286;
  v202 = (char *)operator new(v201);
  v203 = v278;
  v204 = v276;
  v99 = v202;
  v205 = (__m128i *)v299;
  v206 = (char *)v277;
  if ( v278 )
  {
    if ( v278 == 1 )
    {
      *v202 = *(_BYTE *)v299;
    }
    else
    {
      v207 = v278;
      v279 = v277;
      v278 = v276;
      v277 = v203;
      v276 = (size_t)v299;
      v208 = (char *)memcpy(v202, v299, v207);
      v206 = (char *)v279;
      v204 = v278;
      v203 = v277;
      v205 = (__m128i *)v276;
      v99 = v208;
    }
  }
  if ( v206 && v204 )
  {
    v209 = &v99[v203];
    if ( v204 == 1 )
    {
      *v209 = *v206;
    }
    else
    {
      v277 = (size_t)v99;
      v276 = (size_t)v205;
      memcpy(v209, v206, v204);
      v99 = (char *)v277;
      v205 = (__m128i *)v276;
    }
  }
  if ( v205 != &v301 )
  {
    v276 = (size_t)v99;
    operator delete(v205);
    v99 = (char *)v276;
  }
  v299 = v99;
  v301.m128i_i64[0] = v274;
LABEL_125:
  v300 = v100;
  v99[v100] = 0;
  v311 = &v313;
  if ( v299 == &v301 )
  {
    v313 = _mm_load_si128(&v301);
  }
  else
  {
    v311 = v299;
    v313.m128i_i64[0] = v301.m128i_i64[0];
  }
  v301.m128i_i8[0] = 0;
  v312 = v300;
  v299 = &v301;
  v300 = 0;
  LOWORD(v317[0]) = 260;
  v314[0] = &v311;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v299 != &v301 )
    operator delete(v299);
  v302 = &v304;
  sub_125F860(&v302, s2, (__int64)s2 + n);
  v102 = v303;
  if ( 0x7FFFFFFFFFFFFFFFLL - v303 <= 0xB )
    goto LABEL_474;
  v103 = v303 + 12;
  if ( v302 == &v304 )
  {
    v104 = 15;
    if ( v103 > 0xF )
      goto LABEL_306;
LABEL_134:
    qmemcpy((char *)v302 + v303, "/usr/lib/../", 12);
    v105 = (char *)v302;
  }
  else
  {
    v104 = v304.m128i_i64[0];
    if ( v103 <= v304.m128i_i64[0] )
      goto LABEL_134;
LABEL_306:
    if ( (v103 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v210 = 2 * v104;
    if ( v103 < v210 )
    {
      v211 = v210 + 1;
      if ( v210 < 0 )
      {
        v211 = 0x8000000000000000LL;
        v210 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v211 = v303 + 13;
      v210 = v303 + 12;
    }
    v276 = v303 + 12;
    v274 = v303;
    v212 = (char *)operator new(v211);
    v102 = v274;
    v103 = v276;
    v105 = v212;
    v213 = (__m128i *)v302;
    if ( v274 )
    {
      if ( v274 == 1 )
      {
        *v212 = *(_BYTE *)v302;
      }
      else
      {
        v214 = v274;
        v277 = v276;
        v276 = v274;
        v274 = (size_t)v302;
        v215 = (char *)memcpy(v212, v302, v214);
        v103 = v277;
        v102 = v276;
        v213 = (__m128i *)v274;
        v105 = v215;
      }
    }
    qmemcpy(&v105[v102], "/usr/lib/../", 12);
    if ( v213 != &v304 )
    {
      v277 = v103;
      v276 = v102;
      v274 = (size_t)v105;
      operator delete(v213);
      v103 = v277;
      v102 = v276;
      v105 = (char *)v274;
    }
    v302 = v105;
    v304.m128i_i64[0] = v210;
  }
  v303 = v103;
  v105[v102 + 12] = 0;
  v106 = (char *)v302;
  v107 = v283 + v303;
  if ( v302 == &v304 )
  {
    v108 = 15;
    if ( v107 <= 0xF )
      goto LABEL_137;
  }
  else
  {
    v108 = v304.m128i_i64[0];
    if ( v107 <= v304.m128i_i64[0] )
    {
LABEL_137:
      if ( v283 )
      {
        v133 = (char *)v302 + v303;
        if ( v283 == 1 )
          *v133 = *(_BYTE *)v282;
        else
          memcpy(v133, v282, v283);
        v106 = (char *)v302;
      }
      goto LABEL_138;
    }
  }
  if ( (v107 & 0x8000000000000000LL) != 0LL )
    goto LABEL_473;
  v216 = 2 * v108;
  v274 = v216;
  if ( v107 < v216 )
  {
    v217 = v216 + 1;
    if ( v216 < 0 )
    {
      v217 = 0x8000000000000000LL;
      v274 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v274 = v283 + v303;
    v217 = v107 + 1;
  }
  v278 = v303;
  v277 = (size_t)v282;
  v276 = v283;
  v218 = (char *)operator new(v217);
  v219 = v278;
  v220 = v276;
  v106 = v218;
  v221 = (__m128i *)v302;
  v222 = (char *)v277;
  if ( v278 )
  {
    if ( v278 == 1 )
    {
      *v218 = *(_BYTE *)v302;
    }
    else
    {
      v223 = v278;
      v279 = v277;
      v278 = v276;
      v277 = v219;
      v276 = (size_t)v302;
      v224 = (char *)memcpy(v218, v302, v223);
      v222 = (char *)v279;
      v220 = v278;
      v219 = v277;
      v221 = (__m128i *)v276;
      v106 = v224;
    }
  }
  if ( v222 && v220 )
  {
    v225 = &v106[v219];
    if ( v220 == 1 )
    {
      *v225 = *v222;
    }
    else
    {
      v277 = (size_t)v221;
      v276 = (size_t)v106;
      memcpy(v225, v222, v220);
      v221 = (__m128i *)v277;
      v106 = (char *)v276;
    }
  }
  if ( v221 != &v304 )
  {
    v276 = (size_t)v106;
    operator delete(v221);
    v106 = (char *)v276;
  }
  v302 = v106;
  v304.m128i_i64[0] = v274;
LABEL_138:
  v303 = v107;
  v106[v107] = 0;
  v311 = &v313;
  if ( v302 == &v304 )
  {
    v313 = _mm_load_si128(&v304);
  }
  else
  {
    v311 = v302;
    v313.m128i_i64[0] = v304.m128i_i64[0];
  }
  v304.m128i_i8[0] = 0;
  v312 = v303;
  v302 = &v304;
  v303 = 0;
  LOWORD(v317[0]) = 260;
  v314[0] = &v311;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v302 != &v304 )
    operator delete(v302);
  sub_1219730(v7, a2, v272.m128i_i64[1], (__int64)v273, v272.m128i_i64[0]);
  v109 = *(_QWORD *)(a2 + 112);
  v110 = n;
  v111 = *(_BYTE **)(a2 + 104);
  v112 = s2;
  if ( n > v109 )
    goto LABEL_145;
  if ( n )
  {
    v122 = *(const void **)(a2 + 104);
    v276 = *(_QWORD *)(a2 + 112);
    v274 = (size_t)v111;
    v123 = memcmp(v122, s2, n);
    v111 = (_BYTE *)v274;
    v109 = v276;
    if ( v123 )
      goto LABEL_145;
  }
  v305 = v307;
  sub_125F860(&v305, v111, (__int64)&v111[v109]);
  v124 = v306;
  if ( 0x7FFFFFFFFFFFFFFFLL - v306 <= 6 )
    goto LABEL_474;
  v125 = v306 + 7;
  if ( v305 == v307 )
  {
    v126 = 15;
    if ( v125 > 0xF )
      goto LABEL_367;
LABEL_178:
    v127 = (char *)v305 + v306;
    *(_DWORD *)v127 = 791555631;
    *((_WORD *)v127 + 2) = 26988;
    v127[6] = 98;
    v128 = (char *)v305;
  }
  else
  {
    v126 = v307[0];
    if ( v125 <= v307[0] )
      goto LABEL_178;
LABEL_367:
    if ( (v125 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v241 = 2 * v126;
    if ( v125 < v241 )
    {
      v242 = v241 + 1;
      if ( v241 < 0 )
      {
        v242 = 0x8000000000000000LL;
        v241 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v242 = v306 + 8;
      v241 = v306 + 7;
    }
    v274 = v306 + 7;
    v243 = (char *)operator new(v242);
    v125 = v274;
    v244 = v305;
    v128 = v243;
    if ( v124 )
    {
      if ( v124 == 1 )
      {
        *v243 = *(_BYTE *)v305;
      }
      else
      {
        v276 = v274;
        v274 = (size_t)v305;
        v245 = (char *)memcpy(v243, v305, v124);
        v125 = v276;
        v244 = (_QWORD *)v274;
        v128 = v245;
      }
    }
    v246 = &v128[v124];
    *(_DWORD *)v246 = 791555631;
    *((_WORD *)v246 + 2) = 26988;
    v246[6] = 98;
    if ( v244 != v307 )
    {
      v276 = (size_t)v128;
      v274 = v125;
      operator delete(v244);
      v128 = (char *)v276;
      v125 = v274;
    }
    v305 = v128;
    v307[0] = v241;
  }
  v306 = v125;
  v129 = v272.m128i_i64[0];
  v128[v124 + 7] = 0;
  v314[0] = &v305;
  LOWORD(v317[0]) = 260;
  sub_11C52D0(a2, (__int64)v9, v129);
  if ( v305 != v307 )
    operator delete(v305);
  v112 = s2;
  v110 = n;
LABEL_145:
  v308 = v310;
  v274 = (size_t)v310;
  sub_125F860(&v308, v112, (__int64)&v112[v110]);
  v113 = v309;
  if ( 0x7FFFFFFFFFFFFFFFLL - v309 <= 3 )
    goto LABEL_474;
  v114 = v309 + 4;
  if ( v308 == (void *)v274 )
  {
    v115 = 15;
    if ( v114 > 0xF )
      goto LABEL_330;
LABEL_148:
    *(_DWORD *)((char *)v308 + v309) = 1651076143;
    v116 = (char *)v308;
  }
  else
  {
    v115 = v310[0];
    if ( v114 <= v310[0] )
      goto LABEL_148;
LABEL_330:
    if ( (v114 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v226 = 2 * v115;
    if ( v114 < v226 )
    {
      v227 = v226 + 1;
      if ( v226 < 0 )
      {
        v227 = 0x8000000000000000LL;
        v226 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v227 = v309 + 5;
      v226 = v309 + 4;
    }
    v274 = v309 + 4;
    v228 = (char *)operator new(v227);
    v114 = v274;
    v229 = v308;
    v116 = v228;
    if ( v113 )
    {
      if ( v113 == 1 )
      {
        *v228 = *(_BYTE *)v308;
      }
      else
      {
        v276 = v274;
        v274 = (size_t)v308;
        v230 = (char *)memcpy(v228, v308, v113);
        v114 = v276;
        v229 = (_QWORD *)v274;
        v116 = v230;
      }
    }
    *(_DWORD *)&v116[v113] = 1651076143;
    if ( v229 != v310 )
    {
      v276 = v114;
      v274 = (size_t)v116;
      operator delete(v229);
      v114 = v276;
      v116 = (char *)v274;
    }
    v308 = v116;
    v310[0] = v226;
  }
  v309 = v114;
  v116[v113 + 4] = 0;
  LOWORD(v317[0]) = 260;
  v314[0] = &v308;
  sub_11C52D0(a2, (__int64)v9, v272.m128i_i64[0]);
  if ( v308 != v310 )
    operator delete(v308);
  v311 = &v313;
  sub_125F860(&v311, s2, (__int64)s2 + n);
  v117 = v312;
  if ( 0x7FFFFFFFFFFFFFFFLL - v312 <= 7 )
LABEL_474:
    std::__throw_length_error("basic_string::append");
  v118 = v312 + 8;
  if ( v311 == &v313 )
  {
    v119 = 15;
    if ( v118 > 0xF )
      goto LABEL_340;
LABEL_154:
    *(_QWORD *)((char *)v311 + v312) = 0x62696C2F7273752FLL;
    v120 = (char *)v311;
  }
  else
  {
    v119 = v313.m128i_i64[0];
    if ( v118 <= v313.m128i_i64[0] )
      goto LABEL_154;
LABEL_340:
    if ( (v118 & 0x8000000000000000LL) != 0LL )
      goto LABEL_473;
    v231 = 2 * v119;
    if ( v118 < v231 )
    {
      v232 = v231 + 1;
      if ( v231 < 0 )
      {
        v232 = 0x8000000000000000LL;
        v231 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v232 = v312 + 9;
      v231 = v312 + 8;
    }
    v233 = (char *)operator new(v232);
    v234 = (__m128i *)v311;
    v120 = v233;
    if ( v117 )
    {
      if ( v117 == 1 )
      {
        *v233 = *(_BYTE *)v311;
      }
      else
      {
        v274 = (size_t)v311;
        v235 = (char *)memcpy(v233, v311, v117);
        v234 = (__m128i *)v274;
        v120 = v235;
      }
    }
    *(_QWORD *)&v120[v117] = 0x62696C2F7273752FLL;
    if ( v234 != &v313 )
    {
      v274 = (size_t)v120;
      operator delete(v234);
      v120 = (char *)v274;
    }
    v311 = v120;
    v313.m128i_i64[0] = v231;
  }
  v121 = v272.m128i_i64[0];
  v312 = v117 + 8;
  v120[v117 + 8] = 0;
  v314[0] = &v311;
  LOWORD(v317[0]) = 260;
  sub_11C52D0(a2, (__int64)v9, v121);
  if ( v311 != &v313 )
    operator delete(v311);
  if ( v285 != v275 + 2 )
    operator delete(v285);
  if ( v282 != (char *)v273 + 16 )
    operator delete(v282);
  if ( s2 != (void *)(v272.m128i_i64[1] + 16) )
    operator delete(s2);
}
