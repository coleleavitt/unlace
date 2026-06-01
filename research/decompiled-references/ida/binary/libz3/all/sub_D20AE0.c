__int64 __fastcall sub_D20AE0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  _DWORD *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  int v21; // edi
  bool v22; // zf
  __m128i v23; // xmm0
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r12
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  unsigned int *v33; // r12
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  unsigned int **v38; // rcx
  __int64 v39; // rsi
  __m128i si128; // xmm0
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rbp
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 *v49; // rcx
  unsigned int *v50; // rbp
  _QWORD *v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  unsigned int **v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 result; // rax
  __int64 v61; // rax
  _DWORD *v62; // rax
  int v63; // r8d
  int v64; // r9d
  __m128 v65; // xmm0
  __int64 v66; // rax
  int v67; // edi
  int v68; // eax
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rbp
  _QWORD *v72; // rdx
  unsigned int v73; // eax
  __int64 v74; // rcx
  int v75; // eax
  __int64 *v76; // rcx
  unsigned int *v77; // rbp
  _QWORD *v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  unsigned int **v82; // rcx
  __int64 v83; // rsi
  __int64 v84; // rdi
  int v85; // eax
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // rcx
  _QWORD *v89; // rdx
  unsigned int v90; // eax
  __int64 v91; // rsi
  int v92; // eax
  __int64 *v93; // rsi
  _DWORD *v94; // rcx
  _QWORD *v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rsi
  int v98; // eax
  _QWORD *v99; // rsi
  __int64 v100; // rsi
  __int64 v101; // rdi
  int v102; // eax
  __int64 v103; // rbp
  _QWORD *v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // rcx
  int v107; // eax
  __int64 *v108; // rcx
  unsigned int *v109; // rbp
  _QWORD *v110; // rdx
  unsigned int v111; // eax
  __int64 v112; // rcx
  int v113; // eax
  unsigned int **v114; // rcx
  __int64 v115; // rsi
  __m128 v116; // xmm0
  __int64 v117; // rdi
  __int64 v118; // rcx
  int v119; // esi
  __int64 *v120; // rbp
  int v121; // r9d
  __int64 v122; // rcx
  __int64 *v123; // r15
  int v124; // edi
  __int64 v125; // r9
  __int64 *v126; // r8
  __int64 *v127; // rax
  __int64 *v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rax
  unsigned int v131; // r12d
  size_t v132; // rsi
  unsigned int *v133; // rax
  __int64 v134; // rcx
  unsigned int v135; // r15d
  size_t v136; // rsi
  unsigned int *v137; // rax
  __int64 v138; // rcx
  unsigned int v139; // ecx
  size_t v140; // rsi
  __int64 v141; // rax
  int v142; // ecx
  unsigned int v143; // ecx
  size_t v144; // rsi
  int *v145; // rax
  int v146; // ecx
  unsigned int v147; // r8d
  size_t v148; // rsi
  int *v149; // rax
  __int64 v150; // rsi
  _QWORD *v151; // rdx
  unsigned int v152; // eax
  __int64 v153; // rcx
  int v154; // eax
  __int64 *v155; // rcx
  _DWORD *v156; // rbx
  __int64 v157; // rdi
  unsigned int v158; // ebp
  size_t v159; // rsi
  unsigned int *v160; // rax
  __int64 v161; // rcx
  __int64 *v162; // rax
  int v163; // r10d
  __m128i *v164; // r8
  const __m128i *v165; // rax
  __m128i *v166; // r11
  __int64 v167; // rdx
  __m128i *v168; // rsi
  __m128i *v169; // rdx
  __int64 v170; // rax
  unsigned int v171; // r8d
  size_t v172; // rsi
  int *v173; // rax
  __int64 v174; // rsi
  unsigned int v175; // r12d
  unsigned int v176; // ecx
  unsigned int *v177; // rax
  __int64 v178; // rcx
  unsigned int v179; // r15d
  unsigned int v180; // ecx
  unsigned int *v181; // rax
  __int64 v182; // rcx
  unsigned int v183; // ecx
  size_t v184; // rsi
  __int64 v185; // rax
  int v186; // ecx
  unsigned int v187; // ecx
  size_t v188; // rsi
  int *v189; // rax
  int v190; // ecx
  __int64 v191; // rsi
  __int64 v192; // rax
  __int64 v193; // rsi
  __int64 v194; // rdi
  __int64 v195; // rax
  __int64 v196; // rsi
  __int64 v197; // rdi
  __int64 v198; // rax
  __int64 v199; // rsi
  __int64 v200; // rdi
  __int64 v201; // rax
  __int64 v202; // rsi
  __int64 v203; // rdi
  __int64 v204; // rax
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rsi
  _QWORD *v208; // rax
  _QWORD *v209; // rax
  _QWORD *v210; // rax
  _QWORD *v211; // rax
  _QWORD *v212; // rax
  _QWORD *v213; // rax
  __int64 v214; // rax
  _QWORD *v215; // rdx
  _QWORD *v216; // rdx
  _QWORD *v217; // rdx
  _QWORD *v218; // rdx
  _QWORD *v219; // rdx
  char **v220; // rbp
  __int64 v221; // rdx
  __int64 v222; // rbx
  _QWORD *v223; // rsi
  char **v224; // rbp
  __int64 v225; // rdx
  __int64 v226; // rbx
  _QWORD *v227; // rsi
  char **v228; // rbp
  __int64 v229; // rdx
  __int64 v230; // rbx
  _QWORD *v231; // rsi
  char **v232; // rbp
  __int64 v233; // rdx
  __int64 v234; // rbx
  _QWORD *v235; // rsi
  char **v236; // rbp
  __int64 v237; // rdx
  __int64 v238; // rbx
  _QWORD *v239; // rsi
  char **v240; // rbp
  __int64 v241; // rdx
  __int64 v242; // rbx
  _QWORD *v243; // rsi
  char **v244; // rbp
  __int64 v245; // rdx
  __int64 v246; // rbx
  _QWORD *v247; // rsi
  char **v248; // rbp
  __int64 v249; // rdx
  __int64 v250; // rbx
  _QWORD *v251; // rsi
  char **exception; // rbp
  __int64 v253; // rdx
  __int64 v254; // rbx
  _QWORD *v255; // rsi
  char **v256; // rbp
  __int64 v257; // rdx
  __int64 v258; // rbx
  _QWORD *v259; // rsi
  char **v260; // rbp
  __int64 v261; // rdx
  __int64 v262; // rbx
  _QWORD *v263; // rsi
  int v264[4]; // [rsp+0h] [rbp-188h] BYREF
  __m128i v265; // [rsp+10h] [rbp-178h] BYREF
  int v266[2]; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+28h] [rbp-160h]
  int v268[4]; // [rsp+30h] [rbp-158h] BYREF
  int v269[2]; // [rsp+40h] [rbp-148h]
  int v270[2]; // [rsp+48h] [rbp-140h]
  int v271[2]; // [rsp+50h] [rbp-138h]
  __int64 v272; // [rsp+58h] [rbp-130h]
  __int64 v273; // [rsp+60h] [rbp-128h]
  __int64 v274; // [rsp+68h] [rbp-120h]
  int v275; // [rsp+70h] [rbp-118h]
  int v276; // [rsp+74h] [rbp-114h]
  __m128i *v277; // [rsp+78h] [rbp-110h]
  __int64 v278; // [rsp+80h] [rbp-108h] BYREF
  __int64 v279; // [rsp+88h] [rbp-100h] BYREF
  int v280[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v281[2]; // [rsp+98h] [rbp-F0h]
  int v282[2]; // [rsp+A0h] [rbp-E8h] BYREF
  int v283[2]; // [rsp+A8h] [rbp-E0h]
  int v284[4]; // [rsp+B0h] [rbp-D8h] BYREF
  int v285[4]; // [rsp+C0h] [rbp-C8h] BYREF
  int v286[4]; // [rsp+D0h] [rbp-B8h] BYREF
  int v287[2]; // [rsp+E0h] [rbp-A8h]
  int v288; // [rsp+E8h] [rbp-A0h]
  int v289[2]; // [rsp+F0h] [rbp-98h] BYREF
  int v290[2]; // [rsp+F8h] [rbp-90h]
  int v291[2]; // [rsp+100h] [rbp-88h]
  int v292; // [rsp+108h] [rbp-80h]
  int v293[2]; // [rsp+110h] [rbp-78h] BYREF
  int v294[2]; // [rsp+118h] [rbp-70h]
  int v295[2]; // [rsp+120h] [rbp-68h]
  int v296; // [rsp+128h] [rbp-60h]
  __m128 v297; // [rsp+130h] [rbp-58h] BYREF
  __int64 v298; // [rsp+140h] [rbp-48h]
  int v299; // [rsp+148h] [rbp-40h]
  int v300; // [rsp+150h] [rbp-38h]
  char v301; // [rsp+158h] [rbp-30h]

  if ( !(unsigned __int8)sub_D15EA0(*(_QWORD *)a1, a2, &v278, &v279) )
    return 0;
  v8 = v278;
  if ( !a3
    || (v297.m128_i8[0] = 1, sub_D18670(a1, v278, &v297, 0), sub_D18670(a1, v279, &v297, 0), result = 1, v297.m128_i8[0]) )
  {
    v9 = *(_QWORD *)a1;
    *(_QWORD *)v280 = 0;
    *(_QWORD *)v269 = v9;
    *(_QWORD *)v281 = v9;
    sub_D16A30(a1, v8, 0, (__int64 *)v280);
    *(_QWORD *)v283 = v9;
    v265.m128i_i64[0] = *(_QWORD *)v280;
    *(_QWORD *)v282 = 0;
    *(_QWORD *)v271 = *(_QWORD *)v281;
    sub_D16A30(a1, v279, 0, (__int64 *)v282);
    v12 = *(_QWORD *)a1;
    v13 = v265.m128i_i64[0];
    v14 = *(_QWORD *)v282;
    *(_QWORD *)v270 = *(_QWORD *)v283;
    v15 = *(_QWORD *)(v12 + 856);
    *(_QWORD *)v264 = v12;
    v16 = *(_QWORD *)(v12 + 864);
    if ( v15 != v265.m128i_i64[0] )
    {
      if ( v265.m128i_i64[0] == v16 )
      {
        if ( v15 )
        {
          ++*(_DWORD *)(v15 + 8);
          if ( v15 != v14 )
          {
            v265.m128i_i64[1] = v15;
            if ( v14 != v13 )
            {
LABEL_13:
              if ( !*(_WORD *)(v14 + 4) )
              {
                v19 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
                if ( v19 )
                {
                  if ( !*v19 && v19[1] == 8 )
                  {
                    v16 = *(_QWORD *)(v14 + 32);
                    goto LABEL_190;
                  }
                }
              }
              v20 = sub_15E1A70(v264[0]);
              v16 = v20;
              if ( v20 )
                ++*(_DWORD *)(v20 + 8);
              *(_QWORD *)v264 = *(_QWORD *)a1;
LABEL_19:
              if ( a4 )
              {
                v21 = a1 + 152;
                v22 = *(_BYTE *)(a1 + 160) == 0;
                v23 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v265), (__m128i)(unsigned __int64)v16);
                *(_QWORD *)v293 = 0;
                *(_QWORD *)v294 = *(_QWORD *)v264;
                *(__m128i *)v284 = v23;
                if ( v22 )
                  v24 = sub_14E03D0(
                          v21,
                          v264[0],
                          *(__int64 *)&v264[2],
                          v265.m128i_i32[0],
                          v265.m128i_i32[2],
                          v266[0],
                          (int)ptr,
                          v268[0],
                          *(void **)&v268[2],
                          v269[0],
                          v270[0],
                          v271[0],
                          v272,
                          v273,
                          v274,
                          v275,
                          (int)v277,
                          v278,
                          v279,
                          v280[0],
                          v281[0],
                          v282[0],
                          v283[0],
                          v284[0],
                          v284[2],
                          v285[0],
                          v285[2],
                          v286[0],
                          v286[2],
                          v287[0],
                          v288,
                          v289[0],
                          v290[0],
                          v291[0],
                          v292,
                          v293[0],
                          v294[0],
                          v295[0],
                          v296,
                          v297.m128_i32[0],
                          v297.m128_i32[2],
                          v298,
                          v299,
                          v300,
                          v301);
                else
                  v24 = sub_14E0E20(
                          v21,
                          2,
                          (int)v284,
                          (int)v293,
                          v10,
                          v11,
                          v264[0],
                          v264[2],
                          v265.m128i_i32[0],
                          v265.m128i_i32[2],
                          v266[0],
                          ptr);
                if ( v24 == 5 )
                {
                  v201 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
                  v27 = v201;
                  if ( v201 )
                  {
                    v202 = *(_QWORD *)v293;
                    ++*(_DWORD *)(v201 + 8);
                    if ( !v202
                      || (v203 = *(_QWORD *)v294, v22 = *(_DWORD *)(v202 + 8) == 1, --*(_DWORD *)(v202 + 8), !v22) )
                    {
                      *(_QWORD *)v293 = v201;
                      goto LABEL_25;
                    }
                  }
                  else
                  {
                    v202 = *(_QWORD *)v293;
                    if ( !*(_QWORD *)v293
                      || (v203 = *(_QWORD *)v294,
                          v22 = *(_DWORD *)(*(_QWORD *)v293 + 8LL) == 1,
                          --*(_DWORD *)(*(_QWORD *)v293 + 8LL),
                          !v22) )
                    {
                      *(_QWORD *)v293 = 0;
                      goto LABEL_296;
                    }
                  }
                  sub_15D7BC0(v203, v202);
                  *(_QWORD *)v293 = v27;
                }
                else
                {
                  v27 = *(_QWORD *)v293;
                }
                if ( v27 )
                {
LABEL_25:
                  ++*(_DWORD *)(v27 + 8);
                  goto LABEL_26;
                }
LABEL_296:
                v27 = 0;
LABEL_26:
                v28 = *(_QWORD **)(a1 + 128);
                if ( v28 )
                {
                  v29 = *((_DWORD *)v28 - 1);
                  if ( v29 == *((_DWORD *)v28 - 2) )
                  {
                    v143 = (3 * v29 + 1) >> 1;
                    v144 = 8 * v143 + 8;
                    if ( 8 * v29 + 8 >= (unsigned int)v144 || v29 >= v143 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      *(_QWORD *)v268 = &v297;
                      sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v253);
                      v254 = *(_QWORD *)v268;
                      v255 = *(_QWORD **)v268;
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v255);
                      sub_233E40(v254);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v264[0] = (3 * v29 + 1) >> 1;
                    v145 = (int *)sub_186B300(v28 - 1, v144);
                    v146 = v264[0];
                    v28 = v145 + 2;
                    *(_QWORD *)(a1 + 128) = v145 + 2;
                    *v145 = v146;
                    LODWORD(v145) = v145[1];
                    v32 = &v28[(unsigned int)v145];
                    v31 = (_DWORD)v145 + 1;
                  }
                  else
                  {
                    v30 = v29;
                    v31 = v29 + 1;
                    v32 = &v28[v30];
                  }
                }
                else
                {
                  v210 = (_QWORD *)sub_186B270(0x18u);
                  v28 = v210 + 1;
                  *v210 = 2;
                  v31 = 1;
                  *(_QWORD *)(a1 + 128) = v28;
                  v32 = v28;
                }
                v22 = *(_BYTE *)(a1 + 377) == 0;
                *v32 = v27;
                *((_DWORD *)v28 - 1) = v31;
                if ( !v22 )
                {
                  v33 = *(unsigned int **)(a1 + 368);
                  if ( v33 )
                    *v33 = (*v33 + 1) & 0x3FFFFFFF | *v33 & 0xC0000000;
                  v34 = *(_QWORD **)(a1 + 144);
                  if ( v34 )
                  {
                    v35 = *((_DWORD *)v34 - 1);
                    if ( v35 == *((_DWORD *)v34 - 2) )
                    {
                      v187 = (3 * v35 + 1) >> 1;
                      v188 = 8 * v187 + 8;
                      if ( 8 * v35 + 8 >= (unsigned int)v188 || v35 >= v187 )
                      {
                        v232 = (char **)__cxa_allocate_exception(0x28u);
                        *(_QWORD *)v268 = &v297;
                        sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v233);
                        v234 = *(_QWORD *)v268;
                        v235 = *(_QWORD **)v268;
                        *v232 = (char *)off_1C63128;
                        sub_2333C0(v232 + 1, v235);
                        sub_233E40(v234);
                        __cxa_throw(
                          v232,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v264[0] = (3 * v35 + 1) >> 1;
                      v189 = (int *)sub_186B300(v34 - 1, v188);
                      v190 = v264[0];
                      v34 = v189 + 2;
                      *(_QWORD *)(a1 + 144) = v189 + 2;
                      *v189 = v190;
                      LODWORD(v189) = v189[1];
                      v38 = (unsigned int **)&v34[(unsigned int)v189];
                      v37 = (_DWORD)v189 + 1;
                    }
                    else
                    {
                      v36 = v35;
                      v37 = v35 + 1;
                      v38 = (unsigned int **)&v34[v36];
                    }
                  }
                  else
                  {
                    v218 = (_QWORD *)sub_186B270(0x18u);
                    *v218 = 2;
                    v37 = 1;
                    v34 = v218 + 1;
                    *(_QWORD *)(a1 + 144) = v34;
                    v38 = (unsigned int **)v34;
                  }
                  *v38 = v33;
                  *((_DWORD *)v34 - 1) = v37;
                }
                v39 = *(_QWORD *)v293;
                si128 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)&v265.m128i_u64[1]),
                          (__m128i)(unsigned __int64)v14);
                if ( *(_QWORD *)v293 )
                {
                  v41 = *(_QWORD *)v294;
                  v22 = (*(_DWORD *)(*(_QWORD *)v293 + 8LL))-- == 1;
                  if ( v22 )
                  {
                    *(__m128i *)v264 = si128;
                    sub_15D7BC0(v41, v39);
                    si128 = _mm_load_si128((const __m128i *)v264);
                  }
                }
                v42 = *(_QWORD *)a1;
                v22 = *(_BYTE *)(a1 + 160) == 0;
                *(_QWORD *)v293 = 0;
                *(__m128i *)v285 = si128;
                *(_QWORD *)v294 = v42;
                if ( v22 )
                  v43 = sub_14E03D0(
                          (int)a1 + 152,
                          v264[0],
                          *(__int64 *)&v264[2],
                          v265.m128i_i32[0],
                          v265.m128i_i32[2],
                          v266[0],
                          (int)ptr,
                          v268[0],
                          *(void **)&v268[2],
                          v269[0],
                          v270[0],
                          v271[0],
                          v272,
                          v273,
                          v274,
                          v275,
                          (int)v277,
                          v278,
                          v279,
                          v280[0],
                          v281[0],
                          v282[0],
                          v283[0],
                          v284[0],
                          v284[2],
                          v285[0],
                          v285[2],
                          v286[0],
                          v286[2],
                          v287[0],
                          v288,
                          v289[0],
                          v290[0],
                          v291[0],
                          v292,
                          v293[0],
                          v294[0],
                          v295[0],
                          v296,
                          v297.m128_i32[0],
                          v297.m128_i32[2],
                          v298,
                          v299,
                          v300,
                          v301);
                else
                  v43 = sub_14E0E20(
                          (int)a1 + 152,
                          2,
                          (int)v285,
                          (int)v293,
                          v25,
                          v26,
                          v264[0],
                          v264[2],
                          v265.m128i_i32[0],
                          v265.m128i_i32[2],
                          v266[0],
                          ptr);
                if ( v43 == 5 )
                {
                  v204 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
                  v44 = v204;
                  if ( v204 )
                  {
                    v205 = *(_QWORD *)v293;
                    ++*(_DWORD *)(v204 + 8);
                    if ( !v205
                      || (v206 = *(_QWORD *)v294, v22 = *(_DWORD *)(v205 + 8) == 1, --*(_DWORD *)(v205 + 8), !v22) )
                    {
                      *(_QWORD *)v293 = v204;
                      goto LABEL_44;
                    }
                  }
                  else
                  {
                    v205 = *(_QWORD *)v293;
                    if ( !*(_QWORD *)v293
                      || (v206 = *(_QWORD *)v294,
                          v22 = *(_DWORD *)(*(_QWORD *)v293 + 8LL) == 1,
                          --*(_DWORD *)(*(_QWORD *)v293 + 8LL),
                          !v22) )
                    {
                      *(_QWORD *)v293 = 0;
                      goto LABEL_288;
                    }
                  }
                  sub_15D7BC0(v206, v205);
                  *(_QWORD *)v293 = v44;
                }
                else
                {
                  v44 = *(_QWORD *)v293;
                }
                if ( v44 )
                {
LABEL_44:
                  ++*(_DWORD *)(v44 + 8);
LABEL_45:
                  v45 = *(_QWORD **)(a1 + 128);
                  if ( v45 )
                  {
                    v46 = *((_DWORD *)v45 - 1);
                    if ( v46 == *((_DWORD *)v45 - 2) )
                    {
                      v131 = (3 * v46 + 1) >> 1;
                      v132 = 8 * v131 + 8;
                      if ( 8 * v46 + 8 >= (unsigned int)v132 || v46 >= v131 )
                      {
                        v220 = (char **)__cxa_allocate_exception(0x28u);
                        *(_QWORD *)v268 = &v297;
                        sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v221);
                        v222 = *(_QWORD *)v268;
                        v223 = *(_QWORD **)v268;
                        *v220 = (char *)off_1C63128;
                        sub_2333C0(v220 + 1, v223);
                        sub_233E40(v222);
                        __cxa_throw(
                          v220,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v133 = (unsigned int *)sub_186B300(v45 - 1, v132);
                      v134 = v133[1];
                      v45 = v133 + 2;
                      *v133 = v131;
                      *(_QWORD *)(a1 + 128) = v133 + 2;
                      LODWORD(v133) = v134;
                      v49 = &v45[v134];
                      v48 = (_DWORD)v133 + 1;
                    }
                    else
                    {
                      v47 = v46;
                      v48 = v46 + 1;
                      v49 = &v45[v47];
                    }
                  }
                  else
                  {
                    v211 = (_QWORD *)sub_186B270(0x18u);
                    v45 = v211 + 1;
                    *v211 = 2;
                    v48 = 1;
                    *(_QWORD *)(a1 + 128) = v45;
                    v49 = v45;
                  }
                  v22 = *(_BYTE *)(a1 + 377) == 0;
                  *v49 = v44;
                  *((_DWORD *)v45 - 1) = v48;
                  if ( !v22 )
                  {
                    v50 = *(unsigned int **)(a1 + 368);
                    if ( v50 )
                      *v50 = (*v50 + 1) & 0x3FFFFFFF | *v50 & 0xC0000000;
                    v51 = *(_QWORD **)(a1 + 144);
                    if ( v51 )
                    {
                      v52 = *((_DWORD *)v51 - 1);
                      if ( v52 == *((_DWORD *)v51 - 2) )
                      {
                        v175 = (3 * v52 + 1) >> 1;
                        v176 = 8 * v175 + 8;
                        if ( 8 * v52 + 8 >= v176 || v52 >= v175 )
                        {
                          v256 = (char **)__cxa_allocate_exception(0x28u);
                          *(_QWORD *)v268 = &v297;
                          sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v257);
                          v258 = *(_QWORD *)v268;
                          v259 = *(_QWORD **)v268;
                          *v256 = (char *)off_1C63128;
                          sub_2333C0(v256 + 1, v259);
                          sub_233E40(v258);
                          __cxa_throw(
                            v256,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v177 = (unsigned int *)sub_186B300(v51 - 1, v176);
                        v178 = v177[1];
                        v51 = v177 + 2;
                        *v177 = v175;
                        *(_QWORD *)(a1 + 144) = v177 + 2;
                        LODWORD(v177) = v178;
                        v55 = (unsigned int **)&v51[v178];
                        v54 = (_DWORD)v177 + 1;
                      }
                      else
                      {
                        v53 = v52;
                        v54 = v52 + 1;
                        v55 = (unsigned int **)&v51[v53];
                      }
                    }
                    else
                    {
                      v216 = (_QWORD *)sub_186B270(0x18u);
                      *v216 = 2;
                      v54 = 1;
                      v51 = v216 + 1;
                      *(_QWORD *)(a1 + 144) = v51;
                      v55 = (unsigned int **)v51;
                    }
                    *v55 = v50;
                    *((_DWORD *)v51 - 1) = v54;
                  }
                  v56 = *(_QWORD *)v293;
                  if ( *(_QWORD *)v293 )
                  {
                    v57 = *(_QWORD *)v294;
                    v22 = (*(_DWORD *)(*(_QWORD *)v293 + 8LL))-- == 1;
                    if ( v22 )
                      sub_15D7BC0(v57, v56);
                  }
                  goto LABEL_58;
                }
LABEL_288:
                v44 = 0;
                goto LABEL_45;
              }
              v61 = sub_D17130(a1);
              *(_QWORD *)v266 = v61;
              if ( v61 )
                ++*(_DWORD *)(v61 + 8);
              v62 = (_DWORD *)sub_15E1A70(*(_QWORD *)a1);
              ptr = v62;
              v65 = _mm_loadh_ps((const double *)v265.m128i_i64);
              if ( v62 )
                ++v62[2];
              v66 = *(_QWORD *)a1;
              v67 = a1 + 152;
              v22 = *(_BYTE *)(a1 + 160) == 0;
              *(_QWORD *)v287 = v16;
              *(_QWORD *)v293 = 0;
              *(_QWORD *)v294 = v66;
              *(_QWORD *)v268 = a1 + 152;
              *(__m128 *)v286 = v65;
              if ( v22 )
                v68 = sub_14E03D0(
                        v67,
                        v264[0],
                        *(__int64 *)&v264[2],
                        v265.m128i_i32[0],
                        v265.m128i_i32[2],
                        v266[0],
                        (int)ptr,
                        v268[0],
                        *(void **)&v268[2],
                        v269[0],
                        v270[0],
                        v271[0],
                        v272,
                        v273,
                        v274,
                        v275,
                        (int)v277,
                        v278,
                        v279,
                        v280[0],
                        v281[0],
                        v282[0],
                        v283[0],
                        v284[0],
                        v284[2],
                        v285[0],
                        v285[2],
                        v286[0],
                        v286[2],
                        v287[0],
                        v288,
                        v289[0],
                        v290[0],
                        v291[0],
                        v292,
                        v293[0],
                        v294[0],
                        v295[0],
                        v296,
                        v297.m128_i32[0],
                        v297.m128_i32[2],
                        v298,
                        v299,
                        v300,
                        v301);
              else
                v68 = sub_14E0E20(
                        v67,
                        3,
                        (int)v286,
                        (int)v293,
                        v63,
                        v64,
                        v264[0],
                        v264[2],
                        v265.m128i_i32[0],
                        v265.m128i_i32[2],
                        v266[0],
                        ptr);
              if ( v68 == 5 )
              {
                v192 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
                v71 = v192;
                if ( v192 )
                {
                  v193 = *(_QWORD *)v293;
                  ++*(_DWORD *)(v192 + 8);
                  if ( !v193
                    || (v194 = *(_QWORD *)v294, v22 = *(_DWORD *)(v193 + 8) == 1, --*(_DWORD *)(v193 + 8), !v22) )
                  {
                    *(_QWORD *)v293 = v192;
                    goto LABEL_83;
                  }
                }
                else
                {
                  v193 = *(_QWORD *)v293;
                  if ( !*(_QWORD *)v293
                    || (v194 = *(_QWORD *)v294,
                        v22 = *(_DWORD *)(*(_QWORD *)v293 + 8LL) == 1,
                        --*(_DWORD *)(*(_QWORD *)v293 + 8LL),
                        !v22) )
                  {
                    *(_QWORD *)v293 = 0;
                    goto LABEL_280;
                  }
                }
                sub_15D7BC0(v194, v193);
                *(_QWORD *)v293 = v71;
              }
              else
              {
                v71 = *(_QWORD *)v293;
              }
              if ( v71 )
              {
LABEL_83:
                ++*(_DWORD *)(v71 + 8);
                goto LABEL_84;
              }
LABEL_280:
              v71 = 0;
LABEL_84:
              v72 = *(_QWORD **)(a1 + 128);
              if ( v72 )
              {
                v73 = *((_DWORD *)v72 - 1);
                if ( v73 == *((_DWORD *)v72 - 2) )
                {
                  v139 = (3 * v73 + 1) >> 1;
                  v140 = 8 * v139 + 8;
                  if ( 8 * v73 + 8 >= (unsigned int)v140 || v73 >= v139 )
                  {
                    v240 = (char **)__cxa_allocate_exception(0x28u);
                    *(_QWORD *)v268 = &v297;
                    sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v241);
                    v242 = *(_QWORD *)v268;
                    v243 = *(_QWORD **)v268;
                    *v240 = (char *)off_1C63128;
                    sub_2333C0(v240 + 1, v243);
                    sub_233E40(v242);
                    __cxa_throw(
                      v240,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v272) = (3 * v73 + 1) >> 1;
                  v141 = sub_186B300(v72 - 1, v140);
                  v142 = v272;
                  v72 = (_QWORD *)(v141 + 8);
                  *(_QWORD *)(a1 + 128) = v141 + 8;
                  *(_DWORD *)v141 = v142;
                  LODWORD(v141) = *(_DWORD *)(v141 + 4);
                  v76 = &v72[(unsigned int)v141];
                  v75 = v141 + 1;
                }
                else
                {
                  v74 = v73;
                  v75 = v73 + 1;
                  v76 = &v72[v74];
                }
              }
              else
              {
                v209 = (_QWORD *)sub_186B270(0x18u);
                v72 = v209 + 1;
                *v209 = 2;
                v75 = 1;
                *(_QWORD *)(a1 + 128) = v72;
                v76 = v72;
              }
              v22 = *(_BYTE *)(a1 + 377) == 0;
              *v76 = v71;
              *((_DWORD *)v72 - 1) = v75;
              if ( !v22 )
              {
                v77 = *(unsigned int **)(a1 + 368);
                if ( v77 )
                  *v77 = (*v77 + 1) & 0x3FFFFFFF | *v77 & 0xC0000000;
                v78 = *(_QWORD **)(a1 + 144);
                if ( v78 )
                {
                  v79 = *((_DWORD *)v78 - 1);
                  if ( v79 == *((_DWORD *)v78 - 2) )
                  {
                    v183 = (3 * v79 + 1) >> 1;
                    v184 = 8 * v183 + 8;
                    if ( 8 * v79 + 8 >= (unsigned int)v184 || v79 >= v183 )
                    {
                      v248 = (char **)__cxa_allocate_exception(0x28u);
                      *(_QWORD *)v268 = &v297;
                      sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v249);
                      v250 = *(_QWORD *)v268;
                      v251 = *(_QWORD **)v268;
                      *v248 = (char *)off_1C63128;
                      sub_2333C0(v248 + 1, v251);
                      sub_233E40(v250);
                      __cxa_throw(
                        v248,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v272) = (3 * v79 + 1) >> 1;
                    v185 = sub_186B300(v78 - 1, v184);
                    v186 = v272;
                    v78 = (_QWORD *)(v185 + 8);
                    *(_QWORD *)(a1 + 144) = v185 + 8;
                    *(_DWORD *)v185 = v186;
                    LODWORD(v185) = *(_DWORD *)(v185 + 4);
                    v82 = (unsigned int **)&v78[(unsigned int)v185];
                    v81 = v185 + 1;
                  }
                  else
                  {
                    v80 = v79;
                    v81 = v79 + 1;
                    v82 = (unsigned int **)&v78[v80];
                  }
                }
                else
                {
                  v215 = (_QWORD *)sub_186B270(0x18u);
                  *v215 = 2;
                  v81 = 1;
                  v78 = v215 + 1;
                  *(_QWORD *)(a1 + 144) = v78;
                  v82 = (unsigned int **)v78;
                }
                *v82 = v77;
                *((_DWORD *)v78 - 1) = v81;
              }
              v83 = *(_QWORD *)v293;
              if ( *(_QWORD *)v293 )
              {
                v84 = *(_QWORD *)v294;
                v22 = (*(_DWORD *)(*(_QWORD *)v293 + 8LL))-- == 1;
                if ( v22 )
                  sub_15D7BC0(v84, v83);
              }
              v22 = *(_BYTE *)(a1 + 160) == 0;
              *(_QWORD *)v291 = v14;
              *(_QWORD *)v293 = 0;
              *(_QWORD *)v289 = ptr;
              *(_QWORD *)v290 = v265.m128i_i64[1];
              *(_QWORD *)v294 = *(_QWORD *)a1;
              if ( v22 )
                v85 = sub_14E03D0(
                        v268[0],
                        v264[0],
                        *(__int64 *)&v264[2],
                        v265.m128i_i32[0],
                        v265.m128i_i32[2],
                        v266[0],
                        (int)ptr,
                        v268[0],
                        *(void **)&v268[2],
                        v269[0],
                        v270[0],
                        v271[0],
                        v272,
                        v273,
                        v274,
                        v275,
                        (int)v277,
                        v278,
                        v279,
                        v280[0],
                        v281[0],
                        v282[0],
                        v283[0],
                        v284[0],
                        v284[2],
                        v285[0],
                        v285[2],
                        v286[0],
                        v286[2],
                        v287[0],
                        v288,
                        v289[0],
                        v290[0],
                        v291[0],
                        v292,
                        v293[0],
                        v294[0],
                        v295[0],
                        v296,
                        v297.m128_i32[0],
                        v297.m128_i32[2],
                        v298,
                        v299,
                        v300,
                        v301);
              else
                v85 = sub_14E0E20(
                        v268[0],
                        3,
                        (int)v289,
                        (int)v293,
                        v69,
                        v70,
                        v264[0],
                        v264[2],
                        v265.m128i_i32[0],
                        v265.m128i_i32[2],
                        v266[0],
                        ptr);
              if ( v85 == 5 )
              {
                v198 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
                v88 = v198;
                if ( v198 )
                {
                  v199 = *(_QWORD *)v293;
                  ++*(_DWORD *)(v198 + 8);
                  if ( !v199
                    || (v200 = *(_QWORD *)v294, v22 = *(_DWORD *)(v199 + 8) == 1, --*(_DWORD *)(v199 + 8), !v22) )
                  {
                    *(_QWORD *)v293 = v198;
                    goto LABEL_102;
                  }
                }
                else
                {
                  v199 = *(_QWORD *)v293;
                  if ( !*(_QWORD *)v293
                    || (v200 = *(_QWORD *)v294,
                        v22 = *(_DWORD *)(*(_QWORD *)v293 + 8LL) == 1,
                        --*(_DWORD *)(*(_QWORD *)v293 + 8LL),
                        !v22) )
                  {
                    *(_QWORD *)v293 = 0;
                    goto LABEL_292;
                  }
                }
                v272 = v198;
                sub_15D7BC0(v200, v199);
                v88 = v272;
                *(_QWORD *)v293 = v272;
              }
              else
              {
                v88 = *(_QWORD *)v293;
              }
              if ( v88 )
              {
LABEL_102:
                ++*(_DWORD *)(v88 + 8);
                goto LABEL_103;
              }
LABEL_292:
              v88 = 0;
LABEL_103:
              v89 = *(_QWORD **)(a1 + 128);
              if ( v89 )
              {
                v90 = *((_DWORD *)v89 - 1);
                if ( v90 == *((_DWORD *)v89 - 2) )
                {
                  v147 = (3 * v90 + 1) >> 1;
                  v148 = 8 * v147 + 8;
                  if ( 8 * v90 + 8 >= (unsigned int)v148 || v90 >= v147 )
                  {
                    v244 = (char **)__cxa_allocate_exception(0x28u);
                    *(_QWORD *)v268 = &v297;
                    sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v245);
                    v246 = *(_QWORD *)v268;
                    v247 = *(_QWORD **)v268;
                    *v244 = (char *)off_1C63128;
                    sub_2333C0(v244 + 1, v247);
                    sub_233E40(v246);
                    __cxa_throw(
                      v244,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v273 = v88;
                  LODWORD(v272) = (3 * v90 + 1) >> 1;
                  v149 = (int *)sub_186B300(v89 - 1, v148);
                  v150 = (unsigned int)v149[1];
                  v86 = v272;
                  v89 = v149 + 2;
                  *(_QWORD *)(a1 + 128) = v149 + 2;
                  v88 = v273;
                  *v149 = v86;
                  LODWORD(v149) = v150;
                  v93 = &v89[v150];
                  v92 = (_DWORD)v149 + 1;
                }
                else
                {
                  v91 = v90;
                  v92 = v90 + 1;
                  v93 = &v89[v91];
                }
              }
              else
              {
                v272 = v88;
                v212 = (_QWORD *)sub_186B270(0x18u);
                v89 = v212 + 1;
                *v212 = 2;
                v88 = v272;
                v92 = 1;
                *(_QWORD *)(a1 + 128) = v89;
                v93 = v89;
              }
              v22 = *(_BYTE *)(a1 + 377) == 0;
              *v93 = v88;
              *((_DWORD *)v89 - 1) = v92;
              if ( !v22 )
              {
                v94 = *(_DWORD **)(a1 + 368);
                if ( v94 )
                  *v94 = (*v94 + 1) & 0x3FFFFFFF | *v94 & 0xC0000000;
                v95 = *(_QWORD **)(a1 + 144);
                if ( v95 )
                {
                  v96 = *((_DWORD *)v95 - 1);
                  if ( v96 == *((_DWORD *)v95 - 2) )
                  {
                    v171 = (3 * v96 + 1) >> 1;
                    v172 = 8 * v171 + 8;
                    if ( 8 * v96 + 8 >= (unsigned int)v172 || v96 >= v171 )
                    {
                      v228 = (char **)__cxa_allocate_exception(0x28u);
                      *(_QWORD *)v268 = &v297;
                      sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v229);
                      v230 = *(_QWORD *)v268;
                      v231 = *(_QWORD **)v268;
                      *v228 = (char *)off_1C63128;
                      sub_2333C0(v228 + 1, v231);
                      sub_233E40(v230);
                      __cxa_throw(
                        v228,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    LODWORD(v273) = (3 * v96 + 1) >> 1;
                    v272 = (__int64)v94;
                    v173 = (int *)sub_186B300(v95 - 1, v172);
                    v174 = (unsigned int)v173[1];
                    v86 = v273;
                    v95 = v173 + 2;
                    *(_QWORD *)(a1 + 144) = v173 + 2;
                    v94 = (_DWORD *)v272;
                    *v173 = v86;
                    LODWORD(v173) = v174;
                    v99 = &v95[v174];
                    v98 = (_DWORD)v173 + 1;
                  }
                  else
                  {
                    v97 = v96;
                    v98 = v96 + 1;
                    v99 = &v95[v97];
                  }
                }
                else
                {
                  v272 = (__int64)v94;
                  v217 = (_QWORD *)sub_186B270(0x18u);
                  *v217 = 2;
                  v94 = (_DWORD *)v272;
                  v98 = 1;
                  v95 = v217 + 1;
                  *(_QWORD *)(a1 + 144) = v95;
                  v99 = v95;
                }
                *v99 = v94;
                *((_DWORD *)v95 - 1) = v98;
              }
              v100 = *(_QWORD *)v293;
              if ( *(_QWORD *)v293 )
              {
                v101 = *(_QWORD *)v294;
                v22 = (*(_DWORD *)(*(_QWORD *)v293 + 8LL))-- == 1;
                if ( v22 )
                  sub_15D7BC0(v101, v100);
              }
              v22 = *(_BYTE *)(a1 + 160) == 0;
              *(_QWORD *)v295 = v16;
              *(_QWORD *)v289 = 0;
              *(_QWORD *)v293 = *(_QWORD *)v266;
              *(_QWORD *)v294 = v265.m128i_i64[1];
              *(_QWORD *)v290 = *(_QWORD *)a1;
              if ( v22 )
                v102 = sub_14E03D0(
                         v268[0],
                         v264[0],
                         *(__int64 *)&v264[2],
                         v265.m128i_i32[0],
                         v265.m128i_i32[2],
                         v266[0],
                         (int)ptr,
                         v268[0],
                         *(void **)&v268[2],
                         v269[0],
                         v270[0],
                         v271[0],
                         v272,
                         v273,
                         v274,
                         v275,
                         (int)v277,
                         v278,
                         v279,
                         v280[0],
                         v281[0],
                         v282[0],
                         v283[0],
                         v284[0],
                         v284[2],
                         v285[0],
                         v285[2],
                         v286[0],
                         v286[2],
                         v287[0],
                         v288,
                         v289[0],
                         v290[0],
                         v291[0],
                         v292,
                         v293[0],
                         v294[0],
                         v295[0],
                         v296,
                         v297.m128_i32[0],
                         v297.m128_i32[2],
                         v298,
                         v299,
                         v300,
                         v301);
              else
                v102 = sub_14E0E20(
                         v268[0],
                         3,
                         (int)v293,
                         (int)v289,
                         v86,
                         v87,
                         v264[0],
                         v264[2],
                         v265.m128i_i32[0],
                         v265.m128i_i32[2],
                         v266[0],
                         ptr);
              if ( v102 == 5 )
              {
                v195 = sub_15E1AF0(*(_QWORD *)(a1 + 152));
                v103 = v195;
                if ( v195 )
                {
                  v196 = *(_QWORD *)v289;
                  ++*(_DWORD *)(v195 + 8);
                  if ( !v196
                    || (v197 = *(_QWORD *)v290, v22 = *(_DWORD *)(v196 + 8) == 1, --*(_DWORD *)(v196 + 8), !v22) )
                  {
                    *(_QWORD *)v289 = v195;
                    goto LABEL_121;
                  }
                }
                else
                {
                  v196 = *(_QWORD *)v289;
                  if ( !*(_QWORD *)v289
                    || (v197 = *(_QWORD *)v290,
                        v22 = *(_DWORD *)(*(_QWORD *)v289 + 8LL) == 1,
                        --*(_DWORD *)(*(_QWORD *)v289 + 8LL),
                        !v22) )
                  {
                    *(_QWORD *)v289 = 0;
                    goto LABEL_284;
                  }
                }
                sub_15D7BC0(v197, v196);
                *(_QWORD *)v289 = v103;
              }
              else
              {
                v103 = *(_QWORD *)v289;
              }
              if ( v103 )
              {
LABEL_121:
                ++*(_DWORD *)(v103 + 8);
                goto LABEL_122;
              }
LABEL_284:
              v103 = 0;
LABEL_122:
              v104 = *(_QWORD **)(a1 + 128);
              if ( v104 )
              {
                v105 = *((_DWORD *)v104 - 1);
                if ( v105 == *((_DWORD *)v104 - 2) )
                {
                  v135 = (3 * v105 + 1) >> 1;
                  v136 = 8 * v135 + 8;
                  if ( 8 * v105 + 8 >= (unsigned int)v136 || v105 >= v135 )
                  {
                    v260 = (char **)__cxa_allocate_exception(0x28u);
                    *(_QWORD *)v268 = &v297;
                    sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v261);
                    v262 = *(_QWORD *)v268;
                    v263 = *(_QWORD **)v268;
                    *v260 = (char *)off_1C63128;
                    sub_2333C0(v260 + 1, v263);
                    sub_233E40(v262);
                    __cxa_throw(
                      v260,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v137 = (unsigned int *)sub_186B300(v104 - 1, v136);
                  v138 = v137[1];
                  v104 = v137 + 2;
                  *v137 = v135;
                  *(_QWORD *)(a1 + 128) = v137 + 2;
                  LODWORD(v137) = v138;
                  v108 = &v104[v138];
                  v107 = (_DWORD)v137 + 1;
                }
                else
                {
                  v106 = v105;
                  v107 = v105 + 1;
                  v108 = &v104[v106];
                }
              }
              else
              {
                v213 = (_QWORD *)sub_186B270(0x18u);
                v104 = v213 + 1;
                *v213 = 2;
                v107 = 1;
                *(_QWORD *)(a1 + 128) = v104;
                v108 = v104;
              }
              v22 = *(_BYTE *)(a1 + 377) == 0;
              *v108 = v103;
              *((_DWORD *)v104 - 1) = v107;
              if ( !v22 )
              {
                v109 = *(unsigned int **)(a1 + 368);
                if ( v109 )
                  *v109 = (*v109 + 1) & 0x3FFFFFFF | *v109 & 0xC0000000;
                v110 = *(_QWORD **)(a1 + 144);
                if ( v110 )
                {
                  v111 = *((_DWORD *)v110 - 1);
                  if ( v111 == *((_DWORD *)v110 - 2) )
                  {
                    v179 = (3 * v111 + 1) >> 1;
                    v180 = 8 * v179 + 8;
                    if ( 8 * v111 + 8 >= v180 || v111 >= v179 )
                    {
                      v236 = (char **)__cxa_allocate_exception(0x28u);
                      *(_QWORD *)v268 = &v297;
                      sub_166874((__int64 *)&v297, "Overflow encountered when expanding vector", v237);
                      v238 = *(_QWORD *)v268;
                      v239 = *(_QWORD **)v268;
                      *v236 = (char *)off_1C63128;
                      sub_2333C0(v236 + 1, v239);
                      sub_233E40(v238);
                      __cxa_throw(
                        v236,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v181 = (unsigned int *)sub_186B300(v110 - 1, v180);
                    v182 = v181[1];
                    v110 = v181 + 2;
                    *v181 = v179;
                    *(_QWORD *)(a1 + 144) = v181 + 2;
                    LODWORD(v181) = v182;
                    v114 = (unsigned int **)&v110[v182];
                    v113 = (_DWORD)v181 + 1;
                  }
                  else
                  {
                    v112 = v111;
                    v113 = v111 + 1;
                    v114 = (unsigned int **)&v110[v112];
                  }
                }
                else
                {
                  v219 = (_QWORD *)sub_186B270(0x18u);
                  *v219 = 2;
                  v113 = 1;
                  v110 = v219 + 1;
                  *(_QWORD *)(a1 + 144) = v110;
                  v114 = (unsigned int **)v110;
                }
                *v114 = v109;
                *((_DWORD *)v110 - 1) = v113;
              }
              v115 = *(_QWORD *)v289;
              v116 = _mm_loadh_ps((const double *)v265.m128i_i64);
              if ( *(_QWORD *)v289 )
              {
                v117 = *(_QWORD *)v290;
                v22 = (*(_DWORD *)(*(_QWORD *)v289 + 8LL))-- == 1;
                if ( v22 )
                {
                  *(__m128 *)v268 = v116;
                  sub_15D7BC0(v117, v115);
                  v116 = (__m128)_mm_load_si128((const __m128i *)v268);
                }
              }
              v298 = v14;
              *(_QWORD *)v268 = &v297;
              v297 = v116;
              sub_D175A0(a1, 3, &v297);
              v118 = *(unsigned int *)(a1 + 24);
              v119 = *(_DWORD *)(a1 + 32);
              if ( 3 * (int)v118 < (unsigned int)(4 * (v119 + *(_DWORD *)(a1 + 28))) )
              {
                LODWORD(v273) = 2 * v118;
                v272 = 16LL * (unsigned int)(2 * v118);
                v162 = (__int64 *)sub_186B270(v272);
                v122 = v272;
                v163 = v273;
                v120 = v162;
                v164 = (__m128i *)((char *)v162 + v272);
                if ( (_DWORD)v273 )
                {
                  if ( (v272 & 0x10) == 0 || (*(_OWORD *)v162 = 0, v162 += 2, v164 != (__m128i *)v162) )
                  {
                    do
                    {
                      *(_OWORD *)v162 = 0;
                      v162 += 4;
                      *((_OWORD *)v162 - 1) = 0;
                    }
                    while ( v164 != (__m128i *)v162 );
                  }
                }
                v165 = *(const __m128i **)(a1 + 16);
                v121 = v163 - 1;
                v123 = (__int64 *)v164;
                v166 = (__m128i *)&v165[*(unsigned int *)(a1 + 24)];
                if ( v165 != v166 )
                {
                  do
                  {
                    if ( v165->m128i_i64[0] > 1uLL )
                    {
                      v167 = 16LL * (*(_DWORD *)(v165->m128i_i64[0] + 12) & (unsigned int)v121);
                      v168 = (__m128i *)&v120[(unsigned __int64)v167 / 8];
                      if ( v122 == v167 )
                      {
LABEL_205:
                        if ( v120 == (__int64 *)v168 )
                        {
LABEL_265:
                          v277 = v164;
                          v276 = v163;
                          v274 = v122;
                          v275 = v163 - 1;
                          v273 = (__int64)v166;
                          v272 = (__int64)v165;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v169 = (__m128i *)v120;
                        while ( v169->m128i_i64[0] )
                        {
                          if ( v168 == ++v169 )
                            goto LABEL_265;
                        }
                      }
                      else
                      {
                        v169 = (__m128i *)&v120[(unsigned __int64)v167 / 8];
                        while ( v169->m128i_i64[0] )
                        {
                          if ( v164 == ++v169 )
                            goto LABEL_205;
                        }
                      }
                      *v169 = _mm_loadu_si128(v165);
                    }
                    ++v165;
                  }
                  while ( v166 != v165 );
                  v166 = *(__m128i **)(a1 + 16);
                }
                if ( v166 )
                {
                  v275 = v163;
                  v273 = v122;
                  LODWORD(v272) = v163 - 1;
                  sub_186B220(v166);
                  v163 = v275;
                  v122 = v273;
                  v121 = v272;
                }
                *(_QWORD *)(a1 + 16) = v120;
                v119 = 0;
                *(_DWORD *)(a1 + 24) = v163;
                *(_DWORD *)(a1 + 32) = 0;
              }
              else
              {
                v120 = *(__int64 **)(a1 + 16);
                v121 = v118 - 1;
                v122 = 16 * v118;
                v123 = (__int64 *)((char *)v120 + v122);
              }
              v124 = *(_DWORD *)(a2 + 12);
              v125 = 16LL * (v124 & (unsigned int)v121);
              v126 = &v120[(unsigned __int64)v125 / 8];
              if ( v125 != v122 )
              {
                v127 = &v120[(unsigned __int64)v125 / 8];
                v128 = nullptr;
                while ( 1 )
                {
                  v129 = *v127;
                  if ( (unsigned __int64)*v127 > 1 )
                  {
                    if ( *(_DWORD *)(v129 + 12) == v124 && a2 == v129 )
                    {
                      v207 = *(_QWORD *)v266;
                      *v127 = a2;
                      v127[1] = v207;
                      goto LABEL_173;
                    }
                  }
                  else
                  {
                    if ( !v129 )
                    {
                      if ( v128 )
                        goto LABEL_219;
                      v128 = v127;
                      goto LABEL_220;
                    }
                    v128 = v127;
                  }
                  v127 += 2;
                  if ( v127 == v123 )
                    goto LABEL_148;
                }
              }
              v128 = nullptr;
              while ( 1 )
              {
LABEL_148:
                if ( v126 == v120 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                v130 = *v120;
                if ( (unsigned __int64)*v120 > 1 )
                {
                  if ( *(_DWORD *)(v130 + 12) == v124 && a2 == v130 )
                  {
                    v214 = *(_QWORD *)v266;
                    *v120 = a2;
                    v120[1] = v214;
                    goto LABEL_173;
                  }
                }
                else
                {
                  if ( !v130 )
                  {
                    if ( v128 )
LABEL_219:
                      *(_DWORD *)(a1 + 32) = v119 - 1;
                    else
                      v128 = v120;
LABEL_220:
                    v170 = *(_QWORD *)v266;
                    *v128 = a2;
                    v128[1] = v170;
                    ++*(_DWORD *)(a1 + 28);
LABEL_173:
                    v151 = *(_QWORD **)(a1 + 48);
                    ++*(_DWORD *)(a2 + 8);
                    if ( v151 )
                    {
                      v152 = *((_DWORD *)v151 - 1);
                      if ( v152 == *((_DWORD *)v151 - 2) )
                      {
                        v158 = (3 * v152 + 1) >> 1;
                        v159 = 8 * v158 + 8;
                        if ( 8 * v152 + 8 >= (unsigned int)v159 || v152 >= v158 )
                        {
                          v224 = (char **)__cxa_allocate_exception(0x28u);
                          sub_166874(*(__int64 **)v268, "Overflow encountered when expanding vector", v225);
                          v226 = *(_QWORD *)v268;
                          v227 = *(_QWORD **)v268;
                          *v224 = (char *)off_1C63128;
                          sub_2333C0(v224 + 1, v227);
                          sub_233E40(v226);
                          __cxa_throw(
                            v224,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v160 = (unsigned int *)sub_186B300(v151 - 1, v159);
                        v161 = v160[1];
                        v151 = v160 + 2;
                        *v160 = v158;
                        *(_QWORD *)(a1 + 48) = v160 + 2;
                        LODWORD(v160) = v161;
                        v155 = &v151[v161];
                        v154 = (_DWORD)v160 + 1;
                      }
                      else
                      {
                        v153 = v152;
                        v154 = v152 + 1;
                        v155 = &v151[v153];
                      }
                    }
                    else
                    {
                      v208 = (_QWORD *)sub_186B270(0x18u);
                      v151 = v208 + 1;
                      *v208 = 2;
                      v154 = 1;
                      *(_QWORD *)(a1 + 48) = v151;
                      v155 = v151;
                    }
                    v156 = ptr;
                    *v155 = a2;
                    *((_DWORD *)v151 - 1) = v154;
                    if ( v156 )
                    {
                      v268[0] = v156[2];
                      v22 = v268[0] == 1;
                      v156[2] = v268[0] - 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v264, v156);
                    }
                    v157 = *(_QWORD *)v266;
                    if ( *(_QWORD *)v266 )
                    {
                      LODWORD(ptr) = *(_DWORD *)(*(_QWORD *)v266 + 8LL);
                      v22 = (_DWORD)ptr == 1;
                      *(_DWORD *)(*(_QWORD *)v266 + 8LL) = (_DWORD)ptr - 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v264, v157);
                    }
LABEL_58:
                    if ( v16 )
                    {
                      v22 = (*(_DWORD *)(v16 + 8))-- == 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v269, v16);
                    }
                    v58 = v265.m128i_i64[1];
                    if ( v265.m128i_i64[1] )
                    {
                      v264[0] = *(_DWORD *)(v265.m128i_i64[1] + 8);
                      v22 = v264[0] == 1;
                      *(_DWORD *)(v265.m128i_i64[1] + 8) = v264[0] - 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v269, v58);
                    }
                    if ( v14 )
                    {
                      v22 = (*(_DWORD *)(v14 + 8))-- == 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v270, v14);
                    }
                    v59 = v265.m128i_i64[0];
                    if ( v265.m128i_i64[0] )
                    {
                      v264[0] = *(_DWORD *)(v265.m128i_i64[0] + 8);
                      v22 = v264[0] == 1;
                      *(_DWORD *)(v265.m128i_i64[0] + 8) = v264[0] - 1;
                      if ( v22 )
                        sub_15D7BC0(*(_QWORD *)v271, v59);
                    }
                    return 2;
                  }
                  v128 = v120;
                }
                v120 += 2;
              }
            }
LABEL_217:
            ++*(_DWORD *)(v15 + 8);
            v16 = v15;
            goto LABEL_19;
          }
          v265.m128i_i64[1] = v14;
        }
        else
        {
          if ( *(_QWORD *)v282 )
          {
            v265.m128i_i64[1] = 0;
            if ( *(_QWORD *)v282 == v265.m128i_i64[0] )
            {
              v16 = 0;
              goto LABEL_19;
            }
            goto LABEL_13;
          }
          v265.m128i_i64[1] = 0;
        }
      }
      else
      {
        if ( *(_WORD *)(v265.m128i_i64[0] + 4)
          || (v17 = *(_DWORD **)(*(_QWORD *)(v265.m128i_i64[0] + 16) + 24LL)) == nullptr
          || *v17
          || v17[1] != 8 )
        {
          v18 = sub_15E1A70(v264[0]);
          v265.m128i_i64[1] = v18;
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          *(_QWORD *)v264 = *(_QWORD *)a1;
          v15 = *(_QWORD *)(*(_QWORD *)v264 + 856LL);
          v16 = *(_QWORD *)(*(_QWORD *)v264 + 864LL);
        }
        else
        {
          v191 = *(_QWORD *)(v265.m128i_i64[0] + 32);
          v265.m128i_i64[1] = v191;
          if ( v191 )
            ++*(_DWORD *)(v191 + 8);
        }
        if ( v15 != v14 )
        {
LABEL_12:
          if ( v14 != v16 )
            goto LABEL_13;
          v16 = 0;
          if ( !v15 )
            goto LABEL_19;
          goto LABEL_217;
        }
      }
LABEL_190:
      if ( !v16 )
        goto LABEL_19;
LABEL_187:
      ++*(_DWORD *)(v16 + 8);
      goto LABEL_19;
    }
    if ( v16 )
    {
      ++*(_DWORD *)(v16 + 8);
      v265.m128i_i64[1] = v16;
      if ( v265.m128i_i64[0] == v14 )
        goto LABEL_187;
    }
    else
    {
      v265.m128i_i64[1] = 0;
      if ( v265.m128i_i64[0] == *(_QWORD *)v282 )
        goto LABEL_19;
    }
    goto LABEL_12;
  }
  return result;
}

