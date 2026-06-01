void __fastcall sub_128A610(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // rax
  __m128i *v8; // rbx
  __int64 v9; // rax
  const char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbp
  const char **v15; // rax
  char *v16; // rdx
  char *v17; // r12
  _BYTE *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  size_t v29; // rax
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  void *v34; // rdi
  size_t v35; // rax
  __int64 v36; // rax
  void **v37; // r14
  __int64 v38; // rax
  __int64 v39; // r9
  char v40; // r13
  __int64 v41; // rbp
  __int64 i; // r13
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 j; // r12
  __int64 v48; // rax
  unsigned __int8 (__fastcall *v49)(__int64, __m128i *); // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  void **v53; // r14
  __int64 v54; // rax
  unsigned __int8 (__fastcall *v55)(__int64, __m128i *); // rdx
  _BOOL8 v56; // rcx
  __int64 *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 *v60; // r13
  __int64 v61; // rbp
  __m128 v62; // xmm0
  __int64 v63; // r15
  __m128i *v64; // r14
  __int64 v65; // rsi
  __int64 v66; // r12
  void **v67; // rbp
  void **v68; // r13
  void **v69; // rbp
  void **v70; // r13
  void **v71; // rbp
  void **v72; // r13
  void **v73; // rbp
  void **v74; // r13
  void **v75; // rbp
  void **v76; // r13
  __int64 v77; // r12
  void **v78; // rbp
  void **v79; // r13
  void **v80; // rbp
  void **v81; // r13
  void **v82; // rbp
  void **v83; // r13
  void **v84; // rbp
  void **v85; // r13
  void **v86; // rbp
  void **v87; // r13
  unsigned __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rdx
  _QWORD *v91; // r13
  _QWORD *k; // rbp
  const char *v93; // rdi
  size_t v94; // rax
  size_t v95; // rax
  void *v96; // rax
  size_t v97; // rdx
  size_t v98; // r12
  const char *v99; // rbp
  size_t v100; // rax
  __int64 v101; // r13
  _QWORD *v102; // r12
  unsigned int v103; // ebp
  char *v104; // r14
  unsigned __int64 v105; // rax
  __int64 v106; // rdi
  unsigned __int64 v107; // r9
  unsigned __int64 v108; // rdx
  char *v109; // rdi
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  _QWORD *v116; // r14
  __m128i *p_src; // r14
  const __m128i *v118; // r13
  __int64 v119; // rbp
  const __m128i *v120; // r14
  const char **v121; // rax
  const char *v122; // r13
  size_t v123; // rax
  size_t v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  __int64 v128; // r13
  __m128i v129; // xmm1
  size_t v130; // rax
  char *m128i_i8; // rdx
  __int64 v132; // rbp
  const __m128i *v133; // r13
  __int64 v134; // r14
  __int64 v135; // r12
  __int64 v136; // rdx
  __int64 v137; // rsi
  int v138; // eax
  __int64 *v139; // rcx
  __int64 v140; // rsi
  _QWORD *v141; // rbp
  void (__fastcall *v142)(_QWORD *); // rax
  __int64 v143; // r12
  __int64 v144; // rbx
  void *v145; // rdi
  _QWORD *v146; // rdi
  _QWORD *v147; // rdi
  void **v148; // r12
  void **v149; // rbx
  void *v150; // rdi
  _QWORD *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rax
  unsigned __int64 v154; // rdx
  __int64 v155; // rax
  __int64 *v156; // r13
  __int64 v157; // r15
  __m128i *v158; // r14
  __int64 v159; // rsi
  __int64 v160; // rax
  char *v161; // rdx
  char *v162; // rbp
  size_t v163; // rax
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rax
  int v168; // eax
  __int64 v169; // rax
  __int64 v170; // rax
  size_t v171; // rax
  __int64 v172; // rax
  const char *v173; // rax
  __int64 v174; // rax
  void (__fastcall *v175)(__m128i *, __int64, __int64, const char *, size_t, __int64, _QWORD); // rbp
  size_t v176; // rax
  __int64 v177; // rdi
  unsigned __int64 v178; // rbp
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rdx
  __m128i *v181; // rax
  __int64 v182; // rax
  void *v183; // rdi
  __int64 v184; // rax
  char *v185; // rbp
  size_t v186; // rax
  _BYTE *v187; // rcx
  unsigned __int64 v188; // r13
  unsigned __int64 v189; // rdx
  char *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rbp
  __m128i *v197; // rax
  __int64 v198; // rbp
  unsigned __int64 v199; // rdx
  __int64 v200; // rax
  __int64 v201; // rax
  int v202; // eax
  unsigned __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // r13
  __int64 v206; // rbp
  __int64 v207; // rbx
  __m256i *v208; // r14
  __int64 v209; // rsi
  __int64 v210; // rax
  __int64 *v211; // r13
  __int64 v212; // r15
  __m256i *v213; // rbx
  __int64 v214; // rsi
  char *v215; // rbx
  unsigned __int64 v216; // rax
  _BYTE *v217; // rcx
  unsigned __int64 v218; // r12
  unsigned __int64 v219; // rdx
  char *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rax
  size_t v223; // rax
  int v224; // r9d
  __m128i v225; // xmm5
  __int64 *v226; // rax
  size_t v227; // rax
  char *v228; // rsi
  int v229; // eax
  unsigned int v230; // r13d
  _BYTE *v231; // rdi
  __int64 v232; // rcx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  char v244; // r15
  const char *v245; // rax
  __int64 v246; // r13
  size_t v247; // r14
  __int64 *v248; // rdi
  __int64 v249; // rdx
  __m128i *v250; // rax
  __int64 v251; // rax
  unsigned __int64 v252; // rbp
  __int64 v253; // rdi
  size_t v254; // rax
  char *v255; // rbp
  __int64 v256; // rax
  __int64 v257; // r14
  __int64 v258; // r13
  __int64 v259; // rax
  __int64 v260; // r13
  __int64 v261; // r12
  void (__fastcall *v262)(__m128i *, __int64, __int64, const char *, size_t, __int64, _QWORD); // rbp
  size_t v263; // rax
  __int64 v264; // rax
  size_t v265; // rax
  __int64 v266; // rax
  __int64 *v267; // rax
  __m128i v268; // xmm7
  __int64 *v269; // rax
  _BYTE *v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rbp
  __int64 v273; // r12
  __int64 *v274; // rax
  __int64 v275; // rdx
  __int64 v277; // [rsp+0h] [rbp-4A8h]
  __int64 v278; // [rsp+20h] [rbp-488h]
  __m128i si128; // [rsp+30h] [rbp-478h] BYREF
  void **v281; // [rsp+40h] [rbp-468h]
  void **v282; // [rsp+48h] [rbp-460h]
  _QWORD *v283; // [rsp+50h] [rbp-458h]
  const char **v284; // [rsp+58h] [rbp-450h]
  __int64 v285; // [rsp+60h] [rbp-448h]
  __int64 v286; // [rsp+68h] [rbp-440h]
  __int64 v287; // [rsp+70h] [rbp-438h]
  __int64 v288; // [rsp+78h] [rbp-430h]
  _QWORD *v289; // [rsp+80h] [rbp-428h]
  __m128i *v290; // [rsp+88h] [rbp-420h]
  int v291; // [rsp+9Ch] [rbp-40Ch] BYREF
  void *v292; // [rsp+A0h] [rbp-408h] BYREF
  size_t v293; // [rsp+A8h] [rbp-400h]
  char v294; // [rsp+B0h] [rbp-3F8h] BYREF
  void *dest; // [rsp+C0h] [rbp-3E8h] BYREF
  __m128 v296; // [rsp+C8h] [rbp-3E0h] BYREF
  void *v297; // [rsp+E0h] [rbp-3C8h] BYREF
  __int64 v298; // [rsp+E8h] [rbp-3C0h]
  char v299; // [rsp+F0h] [rbp-3B8h] BYREF
  void *v300; // [rsp+100h] [rbp-3A8h] BYREF
  unsigned __int64 v301; // [rsp+108h] [rbp-3A0h]
  __m128i v302; // [rsp+110h] [rbp-398h] BYREF
  __int16 v303; // [rsp+120h] [rbp-388h]
  __m128i v304; // [rsp+130h] [rbp-378h] BYREF
  _BYTE v305[16]; // [rsp+140h] [rbp-368h] BYREF
  __int16 v306; // [rsp+150h] [rbp-358h]
  __m128i v307; // [rsp+160h] [rbp-348h] BYREF
  __m128i v308; // [rsp+170h] [rbp-338h] BYREF
  __int16 v309; // [rsp+180h] [rbp-328h]
  __m128i src; // [rsp+190h] [rbp-318h] BYREF
  __m128i v311; // [rsp+1A0h] [rbp-308h] BYREF
  __int16 v312; // [rsp+1B0h] [rbp-2F8h]
  void *v313; // [rsp+1E0h] [rbp-2C8h] BYREF
  __int64 v314; // [rsp+1E8h] [rbp-2C0h]
  _BYTE v315[128]; // [rsp+1F0h] [rbp-2B8h] BYREF
  __m256i v316; // [rsp+270h] [rbp-238h] BYREF
  __int16 v317; // [rsp+290h] [rbp-218h]
  _BYTE ptr[24]; // [rsp+310h] [rbp-198h] BYREF
  __int64 v319; // [rsp+328h] [rbp-180h] BYREF
  __int16 v320; // [rsp+330h] [rbp-178h]
  void *v321; // [rsp+350h] [rbp-158h]
  void *v322; // [rsp+378h] [rbp-130h]
  void **v323; // [rsp+380h] [rbp-128h]
  void *v324; // [rsp+390h] [rbp-118h]
  void **v325; // [rsp+398h] [rbp-110h]
  void *v326; // [rsp+3A8h] [rbp-100h]
  void **v327; // [rsp+3B0h] [rbp-F8h]
  void *v328; // [rsp+3C0h] [rbp-E8h]
  void **v329; // [rsp+3C8h] [rbp-E0h]
  void *v330; // [rsp+3D8h] [rbp-D0h]
  void **v331; // [rsp+3E0h] [rbp-C8h]
  void *v332; // [rsp+420h] [rbp-88h]
  void *v333; // [rsp+450h] [rbp-58h]

  v6 = *(_DWORD *)(a4 + 8) == 1;
  v286 = a1;
  v313 = v315;
  v314 = 0x1000000000LL;
  v7 = *(_QWORD *)(a1 + 24);
  v287 = a3;
  v284 = (const char **)a4;
  v285 = a5;
  v278 = v7;
  if ( v6 )
  {
    v215 = *(char **)a4;
    dest = &v296.m128_u16[4];
    sub_1287050(&dest, "-out:", (__int64)"");
    v216 = strlen(v215);
    if ( 0x7FFFFFFFFFFFFFFFLL - v296.m128_u64[0] < v216 )
      goto LABEL_570;
    v217 = dest;
    v218 = v296.m128_u64[0] + v216;
    if ( dest == &v296.m128_u16[4] )
      v219 = 15;
    else
      v219 = v296.m128_u64[1];
    if ( v218 > v219 )
    {
      sub_998B30((__int64)&dest, v296.m128_u64[0], 0, v215, v216);
      v217 = dest;
    }
    else if ( v216 )
    {
      v220 = (char *)dest + v296.m128_u64[0];
      if ( v216 == 1 )
        *v220 = *v215;
      else
        memcpy(v220, v215, v216);
      v217 = dest;
    }
    v296.m128_u64[0] = v218;
    v217[v218] = 0;
    v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
    if ( dest == &v296.m128_u16[4] )
    {
      *(__m128i *)&v316.m256i_u64[2] = _mm_load_si128((const __m128i *)&v296.m128_u16[4]);
    }
    else
    {
      v316.m256i_i64[0] = (__int64)dest;
      v316.m256i_i64[2] = v296.m128_i64[1];
    }
    v221 = v296.m128_u64[0];
    v8 = (__m128i *)ptr;
    v296.m128_u64[0] = 0;
    v296.m128_i8[8] = 0;
    v316.m256i_i64[1] = v221;
    dest = &v296.m128_u16[4];
    v320 = 260;
    *(_QWORD *)ptr = &v316;
    v222 = sub_10DA6C0(a6, (__int64)ptr);
    sub_10DC5D0((__int64)&v313, v222);
    if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
      operator delete((void *)v316.m256i_i64[0]);
    if ( dest != &v296.m128_u16[4] )
      operator delete(dest);
  }
  else
  {
    v8 = (__m128i *)ptr;
  }
  if ( sub_10DCD30(a6, 0x8D5u) )
  {
    sub_10DC5D0((__int64)&v313, (__int64)"-machine:arm64x");
  }
  else if ( *(_DWORD *)(v278 + 48) == 3 && *(_DWORD *)(v278 + 52) == 36 )
  {
    sub_10DC5D0((__int64)&v313, (__int64)"-machine:arm64ec");
  }
  v9 = sub_10DCD30(a6, 0x784u);
  if ( v9 )
  {
    v10 = **(const char ***)(v9 + 48);
    v11 = j__strlen("ArmPL");
    v12 = v11;
    if ( v10 )
    {
      if ( v11 == j__strlen(v10) && (!v12 || !memcmp(v10, "ArmPL", v12)) )
        goto LABEL_252;
    }
    else if ( !v11 )
    {
LABEL_252:
      *(_QWORD *)ptr = "--dependent-lib=amath";
      v320 = 259;
      v152 = sub_10DA6C0(a6, (__int64)ptr);
      sub_10DC5D0((__int64)&v313, v152);
    }
  }
  if ( !sub_10DE660(a6, 0xBF0u, 0xBEBu) && (unsigned int)(*((_DWORD *)*a2 + 4) - 3) > 1 )
  {
    sub_10DC5D0((__int64)&v313, (__int64)"-defaultlib:libcmt");
    sub_10DC5D0((__int64)&v313, (__int64)"-defaultlib:oldnames");
  }
  v13 = sub_10DE660(a6, 0x11Du, 0xD6Cu);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(const char ***)(v13 + 48);
    v16 = nullptr;
    v17 = (char *)*v15;
    if ( *v15 )
      v16 = &v17[j__strlen(*v15)];
    *(_QWORD *)ptr = &v319;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(ptr, v17, v16);
    if ( *(_DWORD *)(*(_QWORD *)v14 + 40LL) == 3436 )
    {
      v309 = 257;
      v306 = 259;
      v317 = 257;
      v304.m128i_i64[0] = (__int64)"DIA SDK";
      v312 = 257;
      sub_228A3B0(ptr, &v304, &v307, &src, &v316);
    }
    v317 = 257;
    v312 = 257;
    v18 = (_BYTE *)sub_22CA2B0(*(unsigned int *)(v278 + 48));
    v309 = 257;
    if ( *v18 )
    {
      v307.m128i_i64[0] = (__int64)v18;
      LOBYTE(v309) = 3;
    }
    v306 = 259;
    v304.m128i_i64[0] = (__int64)"lib";
    sub_228A3B0(ptr, &v304, &v307, &src, &v316);
    v312 = 261;
    v309 = 259;
    src = *(__m128i *)ptr;
    v307.m128i_i64[0] = (__int64)"-libpath:";
    sub_A41580((__m128i *)&v316, &v307, &src, v19, 259, v20);
    v21 = sub_10DA6C0(a6, (__int64)&v316);
    sub_10DC5D0((__int64)&v313, v21);
    if ( *(__int64 **)ptr != &v319 )
      free(*(void **)ptr);
  }
  v22 = j__strlen("LIB");
  sub_2290A40(ptr, "LIB", v22);
  if ( (_BYTE)v320 )
  {
    v316.m256i_i64[0] = 0xD2B00000D2ALL;
    v316.m256i_i32[2] = 3436;
    v203 = sub_21B6DA0(a6, &v316, 3);
    v204 = *(_QWORD *)(a6 + 8);
    v316.m256i_i64[2] = 0xD2B00000D2ALL;
    v316.m256i_i32[6] = 3436;
    v205 = v204 + 8LL * (unsigned int)v203;
    v206 = v204 + 8 * HIDWORD(v203);
    si128.m128i_i64[0] = v206;
    *(__m128 *)v316.m256i_i8 = _mm_loadh_ps((const double *)si128.m128i_i64);
    if ( v205 != v206 )
    {
      si128.m128i_i64[0] = (__int64)ptr;
      do
      {
        v207 = *(_QWORD *)v205;
        v208 = &v316;
        if ( *(_QWORD *)v205 )
        {
          do
          {
            v209 = v208->m256i_u32[4];
            if ( !(_DWORD)v209 )
              break;
            if ( (unsigned __int8)sub_21B9810(v207, v209) )
            {
              v8 = (__m128i *)si128.m128i_i64[0];
              si128.m128i_i64[0] = v206;
              v316.m256i_i64[2] = 0xD2B00000D2ALL;
              v316.m256i_i32[6] = 3436;
              *(__m128 *)v316.m256i_i8 = _mm_loadh_ps((const double *)si128.m128i_i64);
              if ( v205 == v206 )
                goto LABEL_394;
              si128.m128i_i64[0] = (__int64)v8;
LABEL_402:
              v210 = *(_QWORD *)(*(_QWORD *)v205 + 16LL);
              if ( !v210 )
                v210 = *(_QWORD *)v205;
              v211 = (__int64 *)(v205 + 8);
              *(_BYTE *)(v210 + 44) |= 1u;
              for ( v316.m256i_i64[0] = (__int64)v211; (__int64 *)v206 != v211; v316.m256i_i64[0] = (__int64)v211 )
              {
                v212 = *v211;
                v213 = &v316;
                if ( *v211 )
                {
                  do
                  {
                    v214 = v213->m256i_u32[4];
                    if ( !(_DWORD)v214 )
                      break;
                    if ( (unsigned __int8)sub_21B9810(v212, v214) )
                    {
                      v205 = v316.m256i_i64[0];
                      if ( v206 != v316.m256i_i64[0] )
                        goto LABEL_402;
                      goto LABEL_410;
                    }
                    v213 = (__m256i *)((char *)v213 + 4);
                  }
                  while ( (__m256i *)((char *)&v316.m256i_u64[1] + 4) != v213 );
                }
                ++v211;
              }
LABEL_410:
              v8 = (__m128i *)si128.m128i_i64[0];
              if ( (_BYTE)v320 && *(_QWORD *)ptr != si128.m128i_i64[0] + 16 )
                operator delete(*(void **)ptr);
              goto LABEL_19;
            }
            v208 = (__m256i *)((char *)v208 + 4);
          }
          while ( (__m256i *)((char *)&v316.m256i_u64[1] + 4) != v208 );
        }
        v205 += 8;
        v316.m256i_i64[0] = v205;
      }
      while ( v206 != v205 );
      v8 = (__m128i *)si128.m128i_i64[0];
    }
LABEL_394:
    if ( (_BYTE)v320 )
    {
      v34 = *(void **)ptr;
      if ( *(__m128i **)ptr != &v8[1] )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_19:
    v23 = j__strlen(&byte_22F0C30);
    sub_22CA5A0(
      (unsigned int)&v307,
      2,
      *(_DWORD *)(v278 + 2488),
      v278 + 2456,
      *(_DWORD *)(v278 + 48),
      v24,
      (__int64)&byte_22F0C30,
      v23);
    v317 = 260;
    v316.m256i_i64[0] = (__int64)&v307;
    src.m128i_i64[0] = (__int64)"-libpath:";
    v312 = 259;
    sub_A41580(v8, &src, (const __m128i *)&v316, v25, v26, v27);
    v28 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v28);
    if ( (__m128i *)v307.m128i_i64[0] != &v308 )
      operator delete((void *)v307.m128i_i64[0]);
    v29 = j__strlen("atlmfc");
    sub_22CA5A0(
      (unsigned int)&v307,
      2,
      *(_DWORD *)(v278 + 2488),
      v278 + 2456,
      *(_DWORD *)(v278 + 48),
      v30,
      (__int64)"atlmfc",
      v29);
    v316.m256i_i64[0] = (__int64)&v307;
    v317 = 260;
    v312 = 259;
    src.m128i_i64[0] = (__int64)"-libpath:";
    sub_A41580(v8, &src, (const __m128i *)&v316, v31, v32, 260);
    v33 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v33);
    v34 = (void *)v307.m128i_i64[0];
    if ( (__m128i *)v307.m128i_i64[0] != &v308 )
LABEL_22:
      operator delete(v34);
  }
  v35 = j__strlen("LIB");
  sub_2290A40(v8, "LIB", v35);
  if ( (_BYTE)v320 )
  {
    if ( !sub_113FA70(a6, 0xD6Au, 0xD6Bu, 3436) )
    {
      if ( !(_BYTE)v320 || *(__m128i **)ptr == &v8[1] )
      {
        v282 = &v297;
      }
      else
      {
        operator delete(*(void **)ptr);
        v282 = &v297;
      }
      goto LABEL_36;
    }
    if ( (_BYTE)v320 && *(__m128i **)ptr != &v8[1] )
      operator delete(*(void **)ptr);
  }
  v36 = sub_112C5D0(v278);
  if ( !(unsigned __int8)sub_22CAAC0(*(unsigned int *)(v278 + 2488), v278 + 2456, *(unsigned int *)(v278 + 48), v36) )
  {
    v282 = &v297;
    goto LABEL_26;
  }
  v296.m128_u64[0] = 0;
  dest = &v296.m128_u16[4];
  v297 = &v299;
  v296.m128_i8[8] = 0;
  v282 = &v297;
  v298 = 0;
  v299 = 0;
  v300 = &v302;
  v301 = 0;
  v302.m128i_i8[0] = 0;
  v237 = sub_112C5D0(v278);
  v244 = sub_22CADD0(
           v237,
           &v297,
           &v300,
           v238,
           v239,
           v240,
           *(_QWORD *)(v278 + 2384),
           *(_QWORD *)(v278 + 2392),
           *(_QWORD *)(v278 + 2400),
           *(_QWORD *)(v278 + 2408),
           *(_QWORD *)(v278 + 2416),
           *(_QWORD *)(v278 + 2424),
           *(_QWORD *)(v278 + 2432),
           *(_QWORD *)(v278 + 2440),
           *(_QWORD *)(v278 + 2448));
  if ( v244 )
  {
    if ( !*(_BYTE *)(v278 + 2400) && !*(_BYTE *)(v278 + 2448) && *(_BYTE *)(v278 + 2424) )
      sub_99BDC0(&v300, 0, v301, *(_BYTE **)(v278 + 2408), *(_QWORD *)(v278 + 2416));
    v245 = (const char *)sub_22CA240(*(unsigned int *)(v278 + 48));
    v246 = (__int64)v245;
    if ( v245 )
    {
      v247 = j__strlen(v245);
      if ( v247 )
      {
        *(_QWORD *)ptr = (char *)v8 + 24;
        *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        sub_A1FE50(v8, v297, (_BYTE *)v297 + v298);
        v304.m128i_i64[1] = v247;
        v304.m128i_i64[0] = v246;
        v306 = 261;
        v307.m128i_i64[0] = (__int64)"ucrt";
        v309 = 259;
        v312 = 260;
        v317 = 259;
        v316.m256i_i64[0] = (__int64)"Lib";
        src.m128i_i64[0] = (__int64)&v300;
        sub_228A3B0(v8, &v316, &src, &v307, &v304);
        v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
        sub_1287050(&v316, *(_BYTE **)ptr, *(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
        v248 = (__int64 *)dest;
        if ( (unsigned __int64 *)v316.m256i_i64[0] == &v316.m256i_u64[2] )
        {
          v275 = v316.m256i_i64[1];
          if ( v316.m256i_i64[1] )
          {
            if ( v316.m256i_i64[1] == 1 )
              *(_BYTE *)dest = v316.m256i_i8[16];
            else
              memcpy(dest, (const void *)v316.m256i_i64[0], v316.m256i_u64[1]);
            v275 = v316.m256i_i64[1];
            v248 = (__int64 *)dest;
          }
          v296.m128_u64[0] = v275;
          *((_BYTE *)v248 + v275) = 0;
          v248 = (__int64 *)v316.m256i_i64[0];
          goto LABEL_476;
        }
        if ( dest == &v296.m128_u16[4] )
        {
          si128.m128i_i64[0] = v316.m256i_i64[2];
          dest = (void *)v316.m256i_i64[0];
          v296 = _mm_loadh_ps((const double *)si128.m128i_i64);
        }
        else
        {
          si128.m128i_i64[0] = v316.m256i_i64[2];
          v249 = v296.m128_i64[1];
          dest = (void *)v316.m256i_i64[0];
          v296 = _mm_loadh_ps((const double *)si128.m128i_i64);
          if ( v248 )
          {
            v316.m256i_i64[0] = (__int64)v248;
            v316.m256i_i64[2] = v249;
LABEL_476:
            v316.m256i_i64[1] = 0;
            *(_BYTE *)v248 = 0;
            if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
              operator delete((void *)v316.m256i_i64[0]);
            if ( *(__m128i **)ptr != (__m128i *)&v8[1].m128i_u64[1] )
              free(*(void **)ptr);
            goto LABEL_481;
          }
        }
        v248 = &v316.m256i_i64[2];
        v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
        goto LABEL_476;
      }
    }
  }
  v244 = 0;
LABEL_481:
  if ( v300 != &v302 )
    operator delete(v300);
  if ( v297 != v282 + 2 )
    operator delete(v297);
  if ( v244 )
  {
    v316.m256i_i64[0] = (__int64)&dest;
    v312 = 259;
    v317 = 260;
    src.m128i_i64[0] = (__int64)"-libpath:";
    sub_A41580(v8, &src, (const __m128i *)&v316, v241, v242, v243);
    v266 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v266);
  }
  if ( dest != &v296.m128_u16[4] )
    operator delete(dest);
LABEL_26:
  v37 = v282;
  v293 = 0;
  v281 = &v292;
  v292 = &v294;
  dest = &v296.m128_u16[4];
  v297 = v282 + 2;
  v294 = 0;
  v296.m128_u64[0] = 0;
  v296.m128_i8[8] = 0;
  v291 = 0;
  v298 = 0;
  v299 = 0;
  v300 = &v302;
  v301 = 0;
  v302.m128i_i8[0] = 0;
  v38 = sub_112C5D0(v278);
  v40 = sub_22CAC70(
          v38,
          &dest,
          &v291,
          v37,
          &v300,
          v39,
          *(_QWORD *)(v278 + 2384),
          *(_QWORD *)(v278 + 2392),
          *(_QWORD *)(v278 + 2400),
          *(_QWORD *)(v278 + 2408),
          *(_QWORD *)(v278 + 2416),
          *(_QWORD *)(v278 + 2424),
          *(_QWORD *)(v278 + 2432),
          *(_QWORD *)(v278 + 2440),
          *(_QWORD *)(v278 + 2448));
  if ( v40 )
  {
    v316.m256i_i64[0] = (__int64)&v316.m256i_i64[3];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(__m128i *)&v316.m256i_u64[1] = si128;
    sub_A1FE50(&v316, dest, (_BYTE *)dest + v296.m128_u64[0]);
    v306 = 257;
    v309 = 257;
    v312 = 257;
    *(_QWORD *)ptr = "Lib";
    v320 = 259;
    sub_228A3B0(&v316, v8, &src, &v307, &v304);
    v229 = v291;
    if ( v291 > 9 )
    {
      if ( *(_BYTE *)(v278 + 2400) || *(_BYTE *)(v278 + 2448) || !*(_BYTE *)(v278 + 2424) )
      {
LABEL_448:
        src.m128i_i64[0] = (__int64)"um";
        v306 = 257;
        v309 = 257;
        v312 = 259;
        v320 = 260;
        *(_QWORD *)ptr = &v300;
        sub_228A3B0(&v316, v8, &src, &v307, &v304);
LABEL_449:
        v230 = *(_DWORD *)(v278 + 48);
        *(__m128i *)&ptr[8] = _mm_load_si128(&si128);
        *(_QWORD *)ptr = (char *)v8 + 24;
        if ( v316.m256i_i64[1] )
          sub_9C3DB0((void **)v8, (const void **)&v316);
        v40 = sub_22CA300((unsigned int)v291, v8, v230, v281);
        if ( *(__m128i **)ptr != (__m128i *)&v8[1].m128i_u64[1] )
          free(*(void **)ptr);
        if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[3] )
          free((void *)v316.m256i_i64[0]);
        goto LABEL_27;
      }
      sub_99BDC0(&v300, 0, v301, *(_BYTE **)(v278 + 2408), *(_QWORD *)(v278 + 2416));
      v229 = v291;
    }
    if ( v229 <= 7 )
      goto LABEL_449;
    goto LABEL_448;
  }
LABEL_27:
  if ( v300 != &v302 )
    operator delete(v300);
  if ( v297 != v282 + 2 )
    operator delete(v297);
  if ( dest != &v296.m128_u16[4] )
    operator delete(dest);
  if ( v40 )
  {
    strcpy(v311.m128i_i8, "-libpath:");
    src.m128i_i64[0] = (__int64)&v311;
    src.m128i_i64[1] = 9;
    v250 = (__m128i *)sub_9EE560(&src, v292, v293);
    v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
    if ( (__m128i *)v250->m128i_i64[0] == &v250[1] )
    {
      *(__m128i *)&v316.m256i_u64[2] = _mm_loadu_si128(v250 + 1);
    }
    else
    {
      v316.m256i_i64[0] = v250->m128i_i64[0];
      v316.m256i_i64[2] = v250[1].m128i_i64[0];
    }
    v316.m256i_i64[1] = v250->m128i_i64[1];
    v250->m128i_i64[0] = (__int64)v250[1].m128i_i64;
    v250->m128i_i64[1] = 0;
    v250[1].m128i_i8[0] = 0;
    v320 = 260;
    *(_QWORD *)ptr = &v316;
    v251 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v251);
    if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
      operator delete((void *)v316.m256i_i64[0]);
    if ( (__m128i *)src.m128i_i64[0] != &v311 )
      operator delete((void *)src.m128i_i64[0]);
  }
  if ( v292 != v281 + 2 )
    operator delete(v292);
LABEL_36:
  if ( *((_DWORD *)*a2 + 4) != 3 )
  {
    if ( sub_10DCD30(a6, 0x89Cu) )
    {
      sub_21B7150(&src, a6, 2204);
      v41 = src.m128i_i64[1];
      for ( i = src.m128i_i64[0]; v41 != i; i += 32 )
      {
        while ( 1 )
        {
          sub_C05100((__int64)&v316, "-libpath:", i);
          *(_QWORD *)ptr = &v316;
          v320 = 260;
          v43 = sub_10DA6C0(a6, (__int64)v8);
          v44 = (unsigned int)v314;
          v45 = (unsigned int)v314 + 1LL;
          if ( v45 > HIDWORD(v314) )
          {
            si128.m128i_i64[0] = v43;
            sub_2237220(&v313, v315, v45, 8);
            v44 = (unsigned int)v314;
            v43 = si128.m128i_i64[0];
          }
          *((_QWORD *)v313 + v44) = v43;
          LODWORD(v314) = v314 + 1;
          if ( (unsigned __int64 *)v316.m256i_i64[0] == &v316.m256i_u64[2] )
            break;
          operator delete((void *)v316.m256i_i64[0]);
          i += 32;
          if ( v41 == i )
            goto LABEL_43;
        }
      }
LABEL_43:
      sub_9B4A30((void ***)&src);
    }
    if ( *((_DWORD *)*a2 + 4) == 4 && !sub_10DE660(a6, 0xBF0u, 0xBDDu) )
    {
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v278 + 320LL))(v278, a6, &v313);
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v278 + 312LL))(v278, a6, &v313);
      sub_10DC5D0((__int64)&v313, (__int64)"/subsystem:console");
    }
  }
  v46 = *(_QWORD *)(v278 + 96);
  for ( j = v46 + 32LL * *(unsigned int *)(v278 + 104); j != v46; v46 += 32 )
  {
    while ( 1 )
    {
      v48 = sub_112C5D0(v278);
      v49 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v48 + 96LL);
      v320 = 260;
      *(_QWORD *)ptr = v46;
      if ( v49(v48, v8) )
      {
        sub_C05100((__int64)&v316, "-libpath:", v46);
        v320 = 260;
        *(_QWORD *)ptr = &v316;
        v50 = sub_10DA6C0(a6, (__int64)v8);
        v51 = (unsigned int)v314;
        v52 = (unsigned int)v314 + 1LL;
        if ( v52 > HIDWORD(v314) )
        {
          si128.m128i_i64[0] = v50;
          sub_2237220(&v313, v315, v52, 8);
          v51 = (unsigned int)v314;
          v50 = si128.m128i_i64[0];
        }
        *((_QWORD *)v313 + v51) = v50;
        LODWORD(v314) = v314 + 1;
        if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
          break;
      }
      v46 += 32;
      if ( j == v46 )
        goto LABEL_53;
    }
    operator delete((void *)v316.m256i_i64[0]);
  }
LABEL_53:
  v53 = v282;
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v278 + 296LL))(v282, v278);
  v54 = sub_112C5D0(v278);
  v55 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v54 + 96LL);
  v320 = 260;
  *(_QWORD *)ptr = v53;
  if ( v55(v54, v8) )
  {
    sub_C05100((__int64)&v316, "-libpath:", (__int64)v282);
    v320 = 260;
    *(_QWORD *)ptr = &v316;
    v193 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v193);
    if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
      operator delete((void *)v316.m256i_i64[0]);
  }
  sub_10DC5D0((__int64)&v313, (__int64)"-nologo");
  if ( sub_10DE660(a6, 0x24u, 0xDC0u) )
    sub_10DC5D0((__int64)&v313, (__int64)"-debug");
  if ( sub_10DE660(a6, 0x3D2u, 0x84Cu) )
    sub_10DC5D0((__int64)&v313, (__int64)"-functionpadmin");
  v56 = 0;
  v57 = a2[1];
  if ( *((_DWORD *)v57 + 15) == 15 )
  {
    v168 = *((_DWORD *)v57 + 16);
    v56 = 1;
    if ( v168 != 27 )
      v56 = v168 == 0;
  }
  if ( !(unsigned __int8)sub_21B7850(a6, 2422, 2620, v56) )
    sub_10DC5D0((__int64)&v313, (__int64)"-Brepro");
  *(_QWORD *)ptr = 0x88E0000088FLL;
  *(_DWORD *)&ptr[8] = 3264;
  v58 = sub_21B6DA0(a6, v8, 3);
  v59 = *(_QWORD *)(a6 + 8);
  *(_QWORD *)&ptr[16] = 0x88E0000088FLL;
  LODWORD(v319) = 3264;
  v60 = (__int64 *)(v59 + 8LL * (unsigned int)v58);
  v61 = v59 + 8 * HIDWORD(v58);
  si128.m128i_i64[0] = v61;
  v62 = _mm_loadh_ps((const double *)si128.m128i_i64);
  for ( *(__m128 *)ptr = v62; (__int64 *)v61 != v60; *(_QWORD *)ptr = v60 )
  {
    v63 = *v60;
    v64 = v8;
    if ( *v60 )
    {
      do
      {
        v65 = v64[1].m128i_u32[0];
        if ( !(_DWORD)v65 )
          break;
        if ( (unsigned __int8)sub_21B9810(v63, v65) )
        {
          si128.m128i_i64[0] = v61;
          *(_QWORD *)&ptr[16] = 0x88E0000088FLL;
          LODWORD(v319) = 3264;
          v62 = _mm_loadh_ps((const double *)si128.m128i_i64);
          *(__m128 *)ptr = v62;
          if ( v60 != (__int64 *)v61 )
          {
LABEL_297:
            v155 = *(_QWORD *)(*v60 + 16);
            if ( !v155 )
              v155 = *v60;
            v156 = v60 + 1;
            *(_BYTE *)(v155 + 44) |= 1u;
            for ( *(_QWORD *)ptr = v156; (__int64 *)v61 != v156; *(_QWORD *)ptr = v156 )
            {
              v157 = *v156;
              v158 = v8;
              if ( *v156 )
              {
                do
                {
                  v159 = v158[1].m128i_u32[0];
                  if ( !(_DWORD)v159 )
                    break;
                  if ( (unsigned __int8)sub_21B9810(v157, v159) )
                  {
                    v60 = *(__int64 **)ptr;
                    if ( v61 != *(_QWORD *)ptr )
                      goto LABEL_297;
                    goto LABEL_305;
                  }
                  v158 = (__m128i *)((char *)v158 + 4);
                }
                while ( (__m128i *)((char *)&v8->m128i_u64[1] + 4) != v158 );
              }
              ++v156;
            }
LABEL_305:
            *(_QWORD *)ptr = "-dll";
            v320 = 259;
            v160 = sub_10DA6C0(a6, (__int64)v8);
            sub_10DC5D0((__int64)&v313, v160);
            v161 = nullptr;
            v162 = (char *)*v284;
            if ( *v284 )
              v161 = &v162[j__strlen(*v284)];
            v62 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
            *(_QWORD *)ptr = (char *)v8 + 24;
            *(__m128 *)&ptr[8] = v62;
            sub_A1FE50(v8, v162, v161);
            v317 = 259;
            v316.m256i_i64[0] = (__int64)"lib";
            sub_228A730(v8, &v316, 0);
            v304.m128i_i64[0] = (__int64)v305;
            v312 = 261;
            src = *(__m128i *)ptr;
            v163 = j__strlen("-implib:");
            sub_1287050(&v304, "-implib:", (__int64)&aImplib[v163]);
            v309 = 260;
            v307.m128i_i64[0] = (__int64)&v304;
            sub_A41580((__m128i *)&v316, &v307, &src, v164, v165, v166);
            v167 = sub_10DA6C0(a6, (__int64)&v316);
            sub_10DC5D0((__int64)&v313, v167);
            if ( (_BYTE *)v304.m128i_i64[0] != v305 )
              operator delete((void *)v304.m128i_i64[0]);
            if ( *(__m128i **)ptr != (__m128i *)&v8[1].m128i_u64[1] )
              free(*(void **)ptr);
          }
          goto LABEL_67;
        }
        v64 = (__m128i *)((char *)v64 + 4);
      }
      while ( (__m128i *)((char *)&v8->m128i_u64[1] + 4) != v64 );
    }
    ++v60;
  }
LABEL_67:
  sub_112C5F0((__int64)v8, v278, a6);
  v66 = *(_WORD *)ptr & 0x1000;
  if ( v333 != &v8[21] )
    operator delete(v333);
  if ( v332 != &v8[18] )
    operator delete(v332);
  v67 = v331;
  v68 = (void **)v330;
  if ( v331 != v330 )
  {
    do
    {
      while ( *v68 != v68 + 2 )
      {
        operator delete(*v68);
        v68 += 4;
        if ( v67 == v68 )
          goto LABEL_74;
      }
      v68 += 4;
    }
    while ( v67 != v68 );
LABEL_74:
    v68 = (void **)v330;
  }
  if ( v68 )
    operator delete(v68);
  v69 = v329;
  v70 = (void **)v328;
  if ( v329 != v328 )
  {
    do
    {
      while ( *v70 != v70 + 2 )
      {
        operator delete(*v70);
        v70 += 4;
        if ( v70 == v69 )
          goto LABEL_80;
      }
      v70 += 4;
    }
    while ( v69 != v70 );
LABEL_80:
    v70 = (void **)v328;
  }
  if ( v70 )
    operator delete(v70);
  v71 = v327;
  v72 = (void **)v326;
  if ( v327 != v326 )
  {
    do
    {
      while ( *v72 != v72 + 2 )
      {
        operator delete(*v72);
        v72 += 4;
        if ( v71 == v72 )
          goto LABEL_86;
      }
      v72 += 4;
    }
    while ( v71 != v72 );
LABEL_86:
    v72 = (void **)v326;
  }
  if ( v72 )
    operator delete(v72);
  v73 = v325;
  v74 = (void **)v324;
  if ( v325 != v324 )
  {
    do
    {
      while ( *v74 != v74 + 2 )
      {
        operator delete(*v74);
        v74 += 4;
        if ( v73 == v74 )
          goto LABEL_92;
      }
      v74 += 4;
    }
    while ( v73 != v74 );
LABEL_92:
    v74 = (void **)v324;
  }
  if ( v74 )
    operator delete(v74);
  v75 = v323;
  v76 = (void **)v322;
  if ( v323 != v322 )
  {
    do
    {
      while ( *v76 != v76 + 2 )
      {
        operator delete(*v76);
        v76 += 4;
        if ( v75 == v76 )
          goto LABEL_98;
      }
      v76 += 4;
    }
    while ( v75 != v76 );
LABEL_98:
    v76 = (void **)v322;
  }
  if ( v76 )
    operator delete(v76);
  if ( v321 )
    operator delete(v321);
  if ( v66 )
  {
    if ( !sub_10DCD30(a6, 0xCC0u) )
    {
      v254 = j__strlen("fuzzer");
      v255 = (char *)sub_112D2D0(v278, a6, (__int64)"fuzzer", v254, 1u, 0);
      sub_1287240(&src, "-wholearchive:");
      sub_10E1980((__m128i *)&v316, &src, v255);
      v320 = 260;
      *(_QWORD *)ptr = &v316;
      v256 = sub_10DA6C0(a6, (__int64)v8);
      sub_10DC5D0((__int64)&v313, v256);
      if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
        operator delete((void *)v316.m256i_i64[0]);
      if ( (__m128i *)src.m128i_i64[0] != &v311 )
        operator delete((void *)src.m128i_i64[0]);
    }
    v320 = 259;
    *(_QWORD *)ptr = "-debug";
    v194 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v194);
    *(_QWORD *)ptr = "-incremental:no";
    v320 = 259;
    v195 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v195);
  }
  sub_112C5F0((__int64)v8, v278, a6);
  v77 = ptr[0] & 1;
  if ( v333 != &v8[21] )
    operator delete(v333);
  if ( v332 != &v8[18] )
    operator delete(v332);
  v78 = v331;
  v79 = (void **)v330;
  if ( v331 != v330 )
  {
    do
    {
      while ( *v79 != v79 + 2 )
      {
        operator delete(*v79);
        v79 += 4;
        if ( v79 == v78 )
          goto LABEL_111;
      }
      v79 += 4;
    }
    while ( v78 != v79 );
LABEL_111:
    v79 = (void **)v330;
  }
  if ( v79 )
    operator delete(v79);
  v80 = v329;
  v81 = (void **)v328;
  if ( v329 != v328 )
  {
    do
    {
      while ( *v81 != v81 + 2 )
      {
        operator delete(*v81);
        v81 += 4;
        if ( v80 == v81 )
          goto LABEL_117;
      }
      v81 += 4;
    }
    while ( v80 != v81 );
LABEL_117:
    v81 = (void **)v328;
  }
  if ( v81 )
    operator delete(v81);
  v82 = v327;
  v83 = (void **)v326;
  if ( v327 != v326 )
  {
    do
    {
      while ( *v83 != v83 + 2 )
      {
        operator delete(*v83);
        v83 += 4;
        if ( v82 == v83 )
          goto LABEL_123;
      }
      v83 += 4;
    }
    while ( v82 != v83 );
LABEL_123:
    v83 = (void **)v326;
  }
  if ( v83 )
    operator delete(v83);
  v84 = v325;
  v85 = (void **)v324;
  if ( v325 != v324 )
  {
    do
    {
      while ( *v85 != v85 + 2 )
      {
        operator delete(*v85);
        v85 += 4;
        if ( v85 == v84 )
          goto LABEL_129;
      }
      v85 += 4;
    }
    while ( v84 != v85 );
LABEL_129:
    v85 = (void **)v324;
  }
  if ( v85 )
    operator delete(v85);
  v86 = v323;
  v87 = (void **)v322;
  if ( v323 != v322 )
  {
    do
    {
      while ( *v87 != v87 + 2 )
      {
        operator delete(*v87);
        v87 += 4;
        if ( v86 == v87 )
          goto LABEL_135;
      }
      v87 += 4;
    }
    while ( v86 != v87 );
LABEL_135:
    v87 = (void **)v322;
  }
  if ( v87 )
    operator delete(v87);
  if ( v321 )
    operator delete(v321);
  if ( v77 )
  {
    v320 = 259;
    *(_QWORD *)ptr = "-debug";
    v169 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v169);
    v320 = 259;
    *(_QWORD *)ptr = "-incremental:no";
    v170 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v170);
    v171 = j__strlen("asan_dynamic");
    v172 = sub_112D2D0(v278, a6, (__int64)"asan_dynamic", v171, 1u, 0);
    sub_10DC5D0((__int64)&v313, v172);
    sub_21B7150(&v304, a6, 324);
    if ( sub_10DE660(a6, 0x928u, 0x91Bu) )
      goto LABEL_330;
    si128.m128i_i64[0] = v304.m128i_i64[1];
    v257 = v304.m128i_i64[0];
    v258 = (v304.m128i_i64[1] - v304.m128i_i64[0]) >> 7;
    v259 = (v304.m128i_i64[1] - v304.m128i_i64[0]) >> 5;
    if ( v258 > 0 )
    {
      v260 = v304.m128i_i64[0] + (v258 << 7);
      while ( sub_9B4AA0(v257, "_DLL") )
      {
        v261 = v257;
        v257 += 32;
        if ( !sub_9B4AA0(v257, "_DLL") )
          break;
        v257 = v261 + 64;
        if ( !sub_9B4AA0(v261 + 64, "_DLL") )
          break;
        v257 = v261 + 96;
        if ( !sub_9B4AA0(v261 + 96, "_DLL") )
          break;
        v257 = v261 + 128;
        if ( v260 == v261 + 128 )
        {
          v259 = (si128.m128i_i64[0] - v257) >> 5;
          goto LABEL_552;
        }
      }
LABEL_530:
      if ( si128.m128i_i64[0] != v257 )
      {
LABEL_330:
        v173 = "-include:___asan_seh_interceptor";
        if ( *(_DWORD *)(v278 + 48) != 37 )
          v173 = "-include:__asan_seh_interceptor";
        *(_QWORD *)ptr = v173;
        v320 = 259;
        v174 = sub_10DA6C0(a6, (__int64)v8);
        sub_10DC5D0((__int64)&v313, v174);
        v175 = *(void (__fastcall **)(__m128i *, __int64, __int64, const char *, size_t, __int64, _QWORD))(*(_QWORD *)v278 + 304LL);
        v176 = j__strlen("asan_dynamic_runtime_thunk");
        v175(&src, v278, a6, "asan_dynamic_runtime_thunk", v176, 1, 0);
        v307.m128i_i64[0] = (__int64)&v308;
        sub_1287050(&v307, "-wholearchive:", (__int64)"");
        v177 = v307.m128i_i64[0];
        v178 = v307.m128i_i64[1] + src.m128i_i64[1];
        if ( (__m128i *)v307.m128i_i64[0] == &v308 )
          v179 = 15;
        else
          v179 = v308.m128i_i64[0];
        if ( v178 <= v179 )
        {
          if ( src.m128i_i64[1] )
          {
            v231 = (_BYTE *)(v307.m128i_i64[1] + v307.m128i_i64[0]);
            if ( src.m128i_i64[1] == 1 )
              *v231 = *(_BYTE *)src.m128i_i64[0];
            else
              memcpy(v231, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
            v177 = v307.m128i_i64[0];
          }
        }
        else
        {
          if ( (__m128i *)src.m128i_i64[0] == &v311 )
            v180 = 15;
          else
            v180 = v311.m128i_i64[0];
          if ( v178 <= v180 )
          {
            v181 = (__m128i *)sub_99BDC0(&src, 0, 0, v307.m128i_i64[0], v307.m128i_u64[1]);
LABEL_340:
            v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
            if ( (__m128i *)v181->m128i_i64[0] == &v181[1] )
            {
              *(__m128i *)&v316.m256i_u64[2] = _mm_loadu_si128(v181 + 1);
            }
            else
            {
              v316.m256i_i64[0] = v181->m128i_i64[0];
              v316.m256i_i64[2] = v181[1].m128i_i64[0];
            }
            v316.m256i_i64[1] = v181->m128i_i64[1];
            v181->m128i_i64[0] = (__int64)v181[1].m128i_i64;
            v181->m128i_i64[1] = 0;
            v181[1].m128i_i8[0] = 0;
            v320 = 260;
            *(_QWORD *)ptr = &v316;
            v182 = sub_10DA6C0(a6, (__int64)v8);
            sub_10DC5D0((__int64)&v313, v182);
            v183 = (void *)v316.m256i_i64[0];
            if ( (unsigned __int64 *)v316.m256i_i64[0] == &v316.m256i_u64[2] )
              goto LABEL_344;
LABEL_343:
            operator delete(v183);
LABEL_344:
            if ( (__m128i *)v307.m128i_i64[0] != &v308 )
              operator delete((void *)v307.m128i_i64[0]);
            if ( (__m128i *)src.m128i_i64[0] != &v311 )
              operator delete((void *)src.m128i_i64[0]);
            sub_9B4A30((void ***)&v304);
            goto LABEL_141;
          }
          sub_998B30((__int64)&v307, v307.m128i_u64[1], 0, src.m128i_i64[0], src.m128i_u64[1]);
          v177 = v307.m128i_i64[0];
        }
        v307.m128i_i64[1] = v178;
        v181 = &v307;
        *(_BYTE *)(v177 + v178) = 0;
        goto LABEL_340;
      }
LABEL_531:
      v262 = *(void (__fastcall **)(__m128i *, __int64, __int64, const char *, size_t, __int64, _QWORD))(*(_QWORD *)v278 + 304LL);
      v263 = j__strlen("asan_static_runtime_thunk");
      v262(&src, v278, a6, "asan_static_runtime_thunk", v263, 1, 0);
      sub_1287240(&v307, "-wholearchive:");
      sub_1054B10((__m128i *)&v316, &v307, &src);
      v320 = 260;
      *(_QWORD *)ptr = &v316;
      v264 = sub_10DA6C0(a6, (__int64)v8);
      sub_10DC5D0((__int64)&v313, v264);
      v183 = (void *)v316.m256i_i64[0];
      if ( (unsigned __int64 *)v316.m256i_i64[0] == &v316.m256i_u64[2] )
        goto LABEL_344;
      goto LABEL_343;
    }
LABEL_552:
    if ( v259 != 2 )
    {
      if ( v259 != 3 )
      {
        if ( v259 != 1 )
          goto LABEL_531;
        goto LABEL_555;
      }
      if ( !sub_9B4AA0(v257, "_DLL") )
        goto LABEL_530;
      v257 += 32;
    }
    if ( !sub_9B4AA0(v257, "_DLL") )
      goto LABEL_530;
    v257 += 32;
LABEL_555:
    if ( sub_9B4AA0(v257, "_DLL") )
      goto LABEL_531;
    goto LABEL_530;
  }
LABEL_141:
  if ( *((_DWORD *)*a2 + 10) )
  {
    v184 = sub_11BF670(a6);
    if ( v184 )
    {
      v185 = **(char ***)(v184 + 48);
      v300 = &v302;
      sub_1287050(&v300, "-lto-sample-profile:", (__int64)"");
      v186 = strlen(v185);
      if ( 0x7FFFFFFFFFFFFFFFLL - v301 < v186 )
        goto LABEL_570;
      v187 = v300;
      v188 = v301 + v186;
      if ( v300 == &v302 )
        v189 = 15;
      else
        v189 = v302.m128i_i64[0];
      if ( v188 > v189 )
      {
        sub_998B30((__int64)&v300, v301, 0, v185, v186);
        v187 = v300;
      }
      else if ( v186 )
      {
        v190 = (char *)v300 + v301;
        if ( v186 == 1 )
          *v190 = *v185;
        else
          memcpy(v190, v185, v186);
        v187 = v300;
      }
      v301 = v188;
      v187[v188] = 0;
      v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
      if ( v300 == &v302 )
      {
        *(__m128i *)&v316.m256i_u64[2] = _mm_load_si128(&v302);
      }
      else
      {
        v316.m256i_i64[0] = (__int64)v300;
        v316.m256i_i64[2] = v302.m128i_i64[0];
      }
      v191 = v301;
      v301 = 0;
      v316.m256i_i64[1] = v191;
      v300 = &v302;
      v302.m128i_i8[0] = 0;
      v320 = 260;
      *(_QWORD *)ptr = &v316;
      v192 = sub_10DA6C0(a6, (__int64)v8);
      sub_10DC5D0((__int64)&v313, v192);
      if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
        operator delete((void *)v316.m256i_i64[0]);
      if ( v300 != &v302 )
        operator delete(v300);
    }
  }
  sub_21B6F20(a6, &v313, 2199, 0, 0);
  *(_DWORD *)ptr = 2081;
  v88 = sub_21B6DA0(a6, v8, 1);
  v90 = *(_QWORD *)(a6 + 8);
  v91 = (_QWORD *)(v90 + 8LL * (unsigned int)v88);
  for ( k = (_QWORD *)(v90 + 8 * HIDWORD(v88)); k != v91; ++v91 )
  {
    if ( *v91 && (unsigned __int8)sub_21B9810(*v91, 2081) )
      break;
  }
  while ( v91 != k )
  {
    v93 = **(const char ***)(*v91 + 48LL);
    *(_QWORD *)ptr = v93;
    if ( !v93 )
    {
      *(_QWORD *)&ptr[8] = 0;
      goto LABEL_157;
    }
    v94 = strlen(v93);
    *(_QWORD *)&ptr[8] = v94;
    if ( v94 == 2 )
    {
      if ( !(unsigned int)sub_22462B0(v8, "cf", 2) )
        goto LABEL_284;
      v94 = *(_QWORD *)&ptr[8];
    }
    if ( v94 == 11 )
    {
      if ( !(unsigned int)sub_22462B0(v8, "cf,nochecks", 11) )
      {
LABEL_284:
        sub_10DC5D0((__int64)&v313, (__int64)"-guard:cf");
        goto LABEL_157;
      }
      v94 = *(_QWORD *)&ptr[8];
    }
    if ( v94 == 3 )
    {
      if ( !(unsigned int)sub_22462B0(v8, "cf-", 3) )
      {
        sub_10DC5D0((__int64)&v313, (__int64)"-guard:cf-");
        goto LABEL_157;
      }
      v94 = *(_QWORD *)&ptr[8];
      if ( *(_QWORD *)&ptr[8] != 6 )
      {
LABEL_156:
        if ( v94 != 7 )
          goto LABEL_157;
        goto LABEL_289;
      }
    }
    else if ( v94 != 6 )
    {
      goto LABEL_156;
    }
    if ( !(unsigned int)sub_22462B0(v8, "ehcont", 6) )
    {
      sub_10DC5D0((__int64)&v313, (__int64)"-guard:ehcont");
      goto LABEL_157;
    }
    if ( *(_QWORD *)&ptr[8] != 7 )
      goto LABEL_157;
LABEL_289:
    if ( !(unsigned int)sub_22462B0(v8, "ehcont-", 7) )
      sub_10DC5D0((__int64)&v313, (__int64)"-guard:ehcont-");
LABEL_157:
    if ( ++v91 == k )
      break;
    while ( !*v91 || !(unsigned __int8)sub_21B9810(*v91, 2081) )
    {
      if ( k == ++v91 )
        goto LABEL_161;
    }
  }
LABEL_161:
  if ( !(unsigned __int8)sub_21B79D0(a6, 1563, 1562, 1265, 0, v89) )
    goto LABEL_162;
  sub_10DC5D0((__int64)&v313, (__int64)"-nodefaultlib:vcomp.lib");
  sub_10DC5D0((__int64)&v313, (__int64)"-nodefaultlib:vcompd.lib");
  v196 = *(_QWORD *)(v278 + 8);
  v304.m128i_i64[0] = (__int64)v305;
  sub_1287050(&v304, "-libpath:", (__int64)"");
  v197 = (__m128i *)sub_9EE560(&v304, *(_BYTE **)(v196 + 104), *(_QWORD *)(v196 + 112));
  src.m128i_i64[0] = (__int64)&v311;
  if ( (__m128i *)v197->m128i_i64[0] == &v197[1] )
  {
    v311 = _mm_loadu_si128(v197 + 1);
  }
  else
  {
    src.m128i_i64[0] = v197->m128i_i64[0];
    v311.m128i_i64[0] = v197[1].m128i_i64[0];
  }
  src.m128i_i64[1] = v197->m128i_i64[1];
  v197->m128i_i64[0] = (__int64)v197[1].m128i_i64;
  v197->m128i_i64[1] = 0;
  v197[1].m128i_i8[0] = 0;
  v198 = src.m128i_i64[1];
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - src.m128i_i64[1]) <= 6 )
LABEL_570:
    std::__throw_length_error("basic_string::append");
  if ( (__m128i *)src.m128i_i64[0] == &v311 )
    v199 = 15;
  else
    v199 = v311.m128i_i64[0];
  if ( src.m128i_i64[1] + 7 > v199 )
  {
    sub_998B30((__int64)&src, src.m128i_u64[1], 0, "/../lib", 7u);
  }
  else
  {
    v200 = src.m128i_i64[1] + src.m128i_i64[0];
    *(_DWORD *)v200 = 791555631;
    *(_WORD *)(v200 + 4) = 26988;
    *(_BYTE *)(v200 + 6) = 98;
  }
  src.m128i_i64[1] = v198 + 7;
  *(_BYTE *)(src.m128i_i64[0] + v198 + 7) = 0;
  v316.m256i_i64[0] = (__int64)&v316.m256i_i64[2];
  if ( (__m128i *)src.m128i_i64[0] == &v311 )
  {
    *(__m128i *)&v316.m256i_u64[2] = _mm_load_si128(&v311);
  }
  else
  {
    v316.m256i_i64[0] = src.m128i_i64[0];
    v316.m256i_i64[2] = v311.m128i_i64[0];
  }
  v320 = 260;
  v316.m256i_i64[1] = src.m128i_i64[1];
  src.m128i_i64[0] = (__int64)&v311;
  src.m128i_i64[1] = 0;
  v311.m128i_i8[0] = 0;
  *(_QWORD *)ptr = &v316;
  v201 = sub_10DA6C0(a6, (__int64)v8);
  sub_10DC5D0((__int64)&v313, v201);
  if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[2] )
    operator delete((void *)v316.m256i_i64[0]);
  if ( (__m128i *)src.m128i_i64[0] != &v311 )
    operator delete((void *)src.m128i_i64[0]);
  if ( (_BYTE *)v304.m128i_i64[0] != v305 )
    operator delete((void *)v304.m128i_i64[0]);
  v202 = sub_10DD170(*(__int64 **)(v278 + 8), a6);
  if ( v202 == 1 )
  {
    sub_10DC5D0((__int64)&v313, (__int64)"-defaultlib:libomp.lib");
  }
  else if ( v202 == 3 )
  {
    sub_10DC5D0((__int64)&v313, (__int64)"-defaultlib:libiomp5md.lib");
  }
LABEL_162:
  if ( !sub_10DCD30(a6, 0xBF0u) )
    sub_11BEF20(v278, *(_QWORD *)(v278 + 8), (__int64)&v313, a6);
  v95 = j__strlen(&byte_22F0C30);
  v96 = (void *)sub_21B7BC0(a6, 1916, &byte_22F0C30, v95);
  v293 = v97;
  v98 = v97;
  v292 = v96;
  if ( !v97 )
  {
    v99 = "link";
    v100 = j__strlen("link");
    v292 = (void *)"link";
    v293 = v100;
    v98 = v100;
    goto LABEL_166;
  }
  if ( v97 == j__strlen("lld") )
  {
    if ( (unsigned int)sub_22462B0(&v292, "lld", v98) )
    {
      v99 = (const char *)v292;
      v98 = v293;
    }
    else
    {
      v99 = "lld-link";
      v265 = j__strlen("lld-link");
      v292 = (void *)"lld-link";
      v98 = v265;
      v293 = v265;
    }
LABEL_166:
    if ( j__strlen("lld-link") != v98 )
      goto LABEL_257;
    if ( v98 )
      goto LABEL_256;
  }
  else
  {
    if ( v98 != j__strlen("lld-link") )
      goto LABEL_257;
    v99 = (const char *)v292;
LABEL_256:
    if ( memcmp(v99, "lld-link", v98) )
    {
LABEL_257:
      p_src = &src;
      goto LABEL_194;
    }
  }
  sub_10DC500((__int64)v8, a6, 0xD39u);
  v101 = *(_QWORD *)ptr;
  v290 = v8;
  v102 = *(_QWORD **)&ptr[8];
  v103 = *(_DWORD *)&ptr[16];
  v283 = (_QWORD *)v319;
  si128.m128i_i64[0] = (__int64)&src;
  v281 = (void **)&v311;
  if ( v319 != *(_QWORD *)ptr )
  {
LABEL_169:
    v289 = v102 - 2;
    while ( 1 )
    {
      v104 = **(char ***)(*(_QWORD *)v101 + 48LL);
      v307.m128i_i64[0] = (__int64)&v308;
      sub_1287050(&v307, "/vfsoverlay:", (__int64)"");
      v105 = strlen(v104);
      if ( 0x7FFFFFFFFFFFFFFFLL - v307.m128i_i64[1] < v105 )
        goto LABEL_570;
      v106 = v307.m128i_i64[0];
      v107 = v307.m128i_i64[1] + v105;
      if ( (__m128i *)v307.m128i_i64[0] == &v308 )
        v108 = 15;
      else
        v108 = v308.m128i_i64[0];
      if ( v107 > v108 )
      {
        v288 = v307.m128i_i64[1] + v105;
        sub_998B30((__int64)&v307, v307.m128i_u64[1], 0, v104, v105);
        v106 = v307.m128i_i64[0];
        v107 = v288;
      }
      else if ( v105 )
      {
        v109 = (char *)(v307.m128i_i64[1] + v307.m128i_i64[0]);
        if ( v105 == 1 )
        {
          *v109 = *v104;
          v106 = v307.m128i_i64[0];
        }
        else
        {
          v288 = v307.m128i_i64[1] + v105;
          memcpy(v109, v104, v105);
          v106 = v307.m128i_i64[0];
          v107 = v288;
        }
      }
      v110 = (__int64)v281;
      v111 = si128.m128i_i64[0];
      v307.m128i_i64[1] = v107;
      *(_BYTE *)(v106 + v107) = 0;
      src.m128i_i64[0] = v110;
      if ( (__m128i *)v307.m128i_i64[0] == &v308 )
      {
        v311 = _mm_load_si128(&v308);
      }
      else
      {
        src.m128i_i64[0] = v307.m128i_i64[0];
        v311.m128i_i64[0] = v308.m128i_i64[0];
      }
      v308.m128i_i8[0] = 0;
      v112 = v307.m128i_i64[1];
      v317 = 260;
      v307.m128i_i64[1] = 0;
      src.m128i_i64[1] = v112;
      v307.m128i_i64[0] = (__int64)&v308;
      v316.m256i_i64[0] = si128.m128i_i64[0];
      v113 = sub_10DA6C0(a6, (__int64)&v316);
      v114 = (unsigned int)v314;
      v115 = (unsigned int)v314 + 1LL;
      if ( v115 > HIDWORD(v314) )
      {
        v288 = v113;
        sub_2237220(&v313, v315, v115, 8);
        v114 = (unsigned int)v314;
        v113 = v288;
      }
      *((_QWORD *)v313 + v114) = v113;
      LODWORD(v314) = v314 + 1;
      if ( (void **)src.m128i_i64[0] != v281 )
        operator delete((void *)src.m128i_i64[0]);
      if ( (__m128i *)v307.m128i_i64[0] != &v308 )
        operator delete((void *)v307.m128i_i64[0]);
      v116 = (_QWORD *)(v101 + 8);
      if ( (_QWORD *)(v101 + 8) == v102 )
      {
LABEL_190:
        v101 = (__int64)v102;
      }
      else
      {
        if ( v103 )
        {
          while ( !*v116 || !(unsigned __int8)sub_21B9810(*v116, v103) )
          {
            if ( ++v116 == v102 )
              goto LABEL_190;
          }
          v101 = (__int64)v116;
          if ( v283 == v116 )
            break;
          goto LABEL_169;
        }
        v101 = (__int64)&v116[(((unsigned __int64)v289 - v101) >> 3) + 1];
      }
      if ( v283 == (_QWORD *)v101 )
      {
        v8 = v290;
        p_src = (__m128i *)v111;
        goto LABEL_193;
      }
    }
  }
  v8 = v290;
  p_src = &src;
LABEL_193:
  if ( *((_DWORD *)*a2 + 10) && (unsigned __int8)sub_21B7850(a6, 2071, 2049, 0) )
  {
    v316.m256i_i64[0] = (__int64)"_dwo";
    v317 = 259;
    v309 = 257;
    if ( **v284 )
    {
      v307.m128i_i64[0] = (__int64)*v284;
      LOBYTE(v309) = 3;
    }
    v306 = 259;
    v304.m128i_i64[0] = (__int64)"/dwodir:";
    sub_A41580(p_src, &v304, &v307, v232, 259, 257);
    sub_A41580(v8, p_src, (const __m128i *)&v316, v233, v234, v235);
    v236 = sub_10DA6C0(a6, (__int64)v8);
    sub_10DC5D0((__int64)&v313, v236);
  }
LABEL_194:
  v118 = *(const __m128i **)v285;
  v119 = *(_QWORD *)v285 + 40LL * *(unsigned int *)(v285 + 8);
  if ( *(_QWORD *)v285 != v119 )
  {
    si128.m128i_i64[0] = (__int64)p_src;
    v120 = v118;
    while ( 1 )
    {
      while ( 1 )
      {
        v128 = v120->m128i_i64[0];
        if ( v120->m128i_i32[2] == 1 )
        {
          v153 = (unsigned int)v314;
          v154 = (unsigned int)v314 + 1LL;
          if ( v154 > HIDWORD(v314) )
          {
            sub_2237220(&v313, v315, v154, 8);
            v153 = (unsigned int)v314;
          }
          *((_QWORD *)v313 + v153) = v128;
          LODWORD(v314) = v314 + 1;
          goto LABEL_203;
        }
        if ( (unsigned __int8)sub_21B9810(v120->m128i_i64[0], 2205) )
          break;
        v120 = (const __m128i *)((char *)v120 + 40);
        sub_21B5F60(v128, a6, &v313);
        if ( (const __m128i *)v119 == v120 )
        {
LABEL_207:
          p_src = (__m128i *)si128.m128i_i64[0];
          goto LABEL_208;
        }
      }
      v121 = *(const char ***)(v128 + 48);
      v122 = *v121;
      if ( !*v121 )
        break;
      v123 = strlen(*v121);
      v124 = v123;
      if ( v123 <= 3 || *(_DWORD *)&v122[v123 - 4] != 1651076142 )
        goto LABEL_280;
      *(_QWORD *)ptr = v122;
      v320 = 261;
      *(_QWORD *)&ptr[8] = v123;
      v125 = sub_10DA6C0(a6, (__int64)v8);
LABEL_200:
      v126 = (unsigned int)v314;
      v127 = (unsigned int)v314 + 1LL;
      if ( v127 > HIDWORD(v314) )
      {
        v281 = (void **)v125;
        sub_2237220(&v313, v315, v127, 8);
        v126 = (unsigned int)v314;
        v125 = (__int64)v281;
      }
      *((_QWORD *)v313 + v126) = v125;
      LODWORD(v314) = v314 + 1;
LABEL_203:
      v120 = (const __m128i *)((char *)v120 + 40);
      if ( (const __m128i *)v119 == v120 )
        goto LABEL_207;
    }
    v124 = 0;
LABEL_280:
    *(_QWORD *)ptr = v122;
    v320 = 773;
    *(_QWORD *)&ptr[8] = v124;
    *(_QWORD *)&ptr[16] = ".lib";
    v125 = sub_10DA6C0(a6, (__int64)v8);
    goto LABEL_200;
  }
LABEL_208:
  sub_11BC8B0(v278, (__int64)a2, a6, (__int64)&v313);
  (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v278 + 672LL))(v278, a6, &v313);
  v129 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  si128 = v129;
  v316.m256i_i64[0] = (__int64)&v316.m256i_i64[3];
  *(__m128i *)&v316.m256i_u64[1] = v129;
  v130 = j__strlen("link");
  if ( v293 != v130 || (unsigned int)sub_22462B0(&v292, "link", v130) )
  {
    if ( v292 )
    {
      src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
      sub_1287050(p_src, v292, (__int64)v292 + v293);
      m128i_i8 = (char *)src.m128i_i64[0];
    }
    else
    {
      m128i_i8 = p_src[1].m128i_i8;
      v311.m128i_i8[0] = 0;
      src = (__m128i)(unsigned __int64)&p_src[1];
    }
    sub_112D530(v8, v278, m128i_i8);
    v316.m256i_i64[1] = 0;
    sub_A1FE50(&v316, *(_BYTE **)ptr, (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]));
    if ( *(__m128i **)ptr != &v8[1] )
      operator delete(*(void **)ptr);
    if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
      operator delete((void *)src.m128i_i64[0]);
  }
  else
  {
    v223 = j__strlen(&byte_22F0C30);
    sub_22CA5A0(
      (_DWORD)p_src,
      0,
      *(_DWORD *)(v278 + 2488),
      v278 + 2456,
      *(_DWORD *)(v278 + 48),
      v224,
      (__int64)&byte_22F0C30,
      v223);
    v225 = _mm_load_si128(&si128);
    *(_QWORD *)ptr = (char *)v8 + 24;
    *(__m128i *)&ptr[8] = v225;
    sub_A1FE50(v8, src.m128i_i64[0], (_BYTE *)(src.m128i_i64[0] + src.m128i_i64[1]));
    if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
      operator delete((void *)src.m128i_i64[0]);
    v303 = 257;
    v306 = 257;
    v309 = 257;
    v312 = 259;
    src.m128i_i64[0] = (__int64)"link.exe";
    sub_228A3B0(v8, p_src, &v307, &v304, &v300);
    v283 = *(_QWORD **)&ptr[8];
    v281 = *(void ***)ptr;
    v226 = (__int64 *)sub_112C5D0(v278);
    if ( (unsigned __int8)sub_1286BE0(v226, (__int64)v281, (__int64)v283) )
    {
      v227 = *(_QWORD *)&ptr[8];
      v228 = *(char **)ptr;
    }
    else
    {
      v227 = j__strlen("link.exe");
      v228 = "link.exe";
    }
    src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
    sub_1287050(p_src, v228, (__int64)&v228[v227]);
    if ( *(__m128i **)ptr != (__m128i *)&v8[1].m128i_u64[1] )
      free(*(void **)ptr);
    v316.m256i_i64[1] = 0;
    sub_A1FE50(&v316, src.m128i_i64[0], (_BYTE *)(src.m128i_i64[0] + src.m128i_i64[1]));
    if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
      operator delete((void *)src.m128i_i64[0]);
    if ( !*(_QWORD *)(v278 + 2464) )
    {
      v283 = (_QWORD *)v316.m256i_i64[1];
      v281 = (void **)v316.m256i_i64[0];
      v267 = (__int64 *)sub_112C5D0(v278);
      if ( !(unsigned __int8)sub_1286BE0(v267, (__int64)v281, (__int64)v283) )
      {
        v268 = _mm_load_si128(&si128);
        *(_QWORD *)ptr = (char *)v8 + 24;
        *(__m128i *)&ptr[8] = v268;
        sub_112D530(p_src, v278, "cl.exe");
        *(_QWORD *)&ptr[8] = 0;
        sub_A1FE50(v8, src.m128i_i64[0], (_BYTE *)(src.m128i_i64[0] + src.m128i_i64[1]));
        if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
          operator delete((void *)src.m128i_i64[0]);
        v281 = *(void ***)&ptr[8];
        si128.m128i_i64[0] = *(_QWORD *)ptr;
        v269 = (__int64 *)sub_112C5D0(v278);
        if ( !(unsigned __int8)sub_1286BE0(v269, si128.m128i_i64[0], (__int64)v281)
          || (v270 = (_BYTE *)sub_228A4B0(*(_QWORD *)ptr, *(_QWORD *)&ptr[8], 0),
              v316.m256i_i64[1] = 0,
              sub_A1FE50(&v316, v270, &v270[v271]),
              v303 = 259,
              v312 = 257,
              v309 = 257,
              v306 = 257,
              v300 = (void *)"link.exe",
              sub_228A3B0(&v316, &v300, &v304, &v307, p_src),
              v272 = v316.m256i_i64[1],
              v273 = v316.m256i_i64[0],
              v274 = (__int64 *)sub_112C5D0(v278),
              !(unsigned __int8)sub_1286BE0(v274, v273, v272)) )
        {
          sub_FC70B0((__int64)p_src, **a2, 0, 575);
          sub_AEA040((__int64)p_src);
        }
        if ( *(__m128i **)ptr != (__m128i *)&v8[1].m128i_u64[1] )
          free(*(void **)ptr);
      }
    }
    sub_112C5F0((__int64)v8, v278, a6);
    if ( (ptr[0] & 1) != 0 )
    {
      sub_116D110(v8);
      sub_10DC5D0((__int64)&v313, (__int64)"/INFERASANLIBS:NO");
    }
    else
    {
      sub_116D110(v8);
    }
  }
  v320 = 261;
  *(_OWORD *)ptr = *(_OWORD *)v316.m256i_i8;
  v132 = sub_10DA6C0(a6, (__int64)v8);
  v277 = (__int64)v284;
  v133 = *(const __m128i **)v285;
  v134 = *(unsigned int *)(v285 + 8);
  v135 = operator new(0x208u);
  sub_1106AE0(v135, v287, v286, 0x200000000LL, (__int64)"@", v132, (__int64)&v313, v133, v134, v277, 1, 0);
  *(_QWORD *)ptr = v135;
  v136 = *((unsigned int *)a2 + 40);
  v137 = v136 + 1;
  v138 = *((_DWORD *)a2 + 40);
  if ( v136 + 1 > (unsigned __int64)*((unsigned int *)a2 + 41) )
  {
    v252 = (unsigned __int64)a2[19];
    v253 = (__int64)(a2 + 19);
    if ( v252 > (unsigned __int64)v8 || (unsigned __int64)v8 >= v252 + 8 * v136 )
    {
      sub_11673D0(v253, v137, v62, *(double *)v129.m128i_i64);
      v136 = *((unsigned int *)a2 + 40);
      v139 = a2[19];
      v138 = *((_DWORD *)a2 + 40);
    }
    else
    {
      sub_11673D0(v253, v137, v62, *(double *)v129.m128i_i64);
      v139 = a2[19];
      v136 = *((unsigned int *)a2 + 40);
      v8 = (__m128i *)((char *)v8 + (_QWORD)v139 - v252);
      v138 = *((_DWORD *)a2 + 40);
    }
  }
  else
  {
    v139 = a2[19];
  }
  v140 = v8->m128i_i64[0];
  v8->m128i_i64[0] = 0;
  v139[v136] = v140;
  v141 = *(_QWORD **)ptr;
  *((_DWORD *)a2 + 40) = v138 + 1;
  if ( v141 )
  {
    v142 = *(void (__fastcall **)(_QWORD *))(*v141 + 8LL);
    if ( v142 == sub_10D4290 )
    {
      v143 = v141[58];
      v144 = v141[57];
      *v141 = &off_2BA8F30;
      if ( v143 != v144 )
      {
        do
        {
          if ( *(_BYTE *)(v144 + 32) && *(_QWORD *)v144 != v144 + 16 )
            operator delete(*(void **)v144);
          v144 += 40;
        }
        while ( v143 != v144 );
        v144 = v141[57];
      }
      if ( v144 )
        operator delete((void *)v144);
      v145 = (void *)v141[54];
      if ( v145 )
        operator delete(v145);
      v146 = (_QWORD *)v141[50];
      if ( v146 != v141 + 52 )
        operator delete(v146);
      v147 = (_QWORD *)v141[32];
      if ( v147 != v141 + 34 )
        free(v147);
      v148 = (void **)v141[29];
      v149 = (void **)v141[28];
      if ( v148 != v149 )
      {
        do
        {
          while ( *v149 != v149 + 2 )
          {
            operator delete(*v149);
            v149 += 4;
            if ( v149 == v148 )
              goto LABEL_236;
          }
          v149 += 4;
        }
        while ( v148 != v149 );
LABEL_236:
        v149 = (void **)v141[28];
      }
      if ( v149 )
        operator delete(v149);
      v150 = (void *)v141[25];
      if ( v150 )
        operator delete(v150);
      v151 = (_QWORD *)v141[7];
      if ( v151 != v141 + 9 )
        free(v151);
      operator delete(v141, 0x208u);
    }
    else
    {
      v142(v141);
    }
  }
  if ( (unsigned __int64 *)v316.m256i_i64[0] != &v316.m256i_u64[3] )
    free((void *)v316.m256i_i64[0]);
  if ( v297 != v282 + 2 )
    operator delete(v297);
  if ( v313 != v315 )
    free(v313);
}
