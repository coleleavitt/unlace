__int64 __fastcall sub_176480(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r13d
  __int64 v19; // rbx
  int v20; // edx
  unsigned __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 *v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r14
  int v46; // r14d
  unsigned int v47; // ebx
  int v48; // r9d
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __m128i si128; // xmm0
  _QWORD *v54; // r8
  _QWORD *v55; // rdx
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r13
  __int64 v62; // rdx
  void *v63; // rbx
  size_t v64; // rcx
  __int64 *v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // r13
  size_t v70; // r15
  size_t v71; // rdi
  __m128i v72; // xmm0
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r13
  unsigned __int64 v78; // rdi
  __int64 v79; // r13
  size_t v80; // r15
  __int64 v81; // rbx
  __int64 v82; // rax
  unsigned __int64 v83; // r13
  __int64 v84; // rsi
  __int64 v85; // r13
  __int64 v86; // r15
  __int64 *v87; // rdi
  unsigned __int64 v88; // rsi
  __int64 v89; // r8
  int i; // r13d
  unsigned __int64 v91; // rdx
  int v92; // eax
  void *v93; // rax
  const void *v94; // rsi
  __int64 v95; // r15
  unsigned __int64 v96; // r13
  unsigned __int64 v97; // rbx
  __int64 v98; // rax
  size_t v99; // rbx
  __int64 v100; // rcx
  unsigned __int64 *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r9
  __int64 v104; // r14
  __int64 *v105; // r13
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  int v111; // r15d
  _DWORD *v112; // rcx
  _DWORD *v113; // rax
  unsigned __int64 **v114; // r14
  unsigned __int64 *v115; // rcx
  unsigned __int64 *v116; // rbx
  __int64 v117; // r15
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rsi
  _QWORD *v121; // rcx
  _QWORD *v122; // rsi
  int v123; // ebx
  _QWORD *v124; // rbx
  _QWORD *v125; // rdx
  _QWORD *v126; // rax
  __int64 v127; // rax
  _DWORD *v128; // rsi
  unsigned __int64 v129; // rsi
  __int64 v130; // rax
  unsigned __int64 v131; // rbx
  __int64 (__fastcall **v132)(); // rdi
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 (__fastcall *v140)(__int64); // rax
  __int64 v141; // rax
  unsigned __int64 v142; // rbx
  int v143; // r14d
  int v144; // esi
  __int64 *v145; // rax
  __int64 *v146; // rdx
  __int64 *j; // r14
  __int64 v148; // rdx
  int v149; // edi
  __int64 (__fastcall *v150)(__int64, int); // rax
  int v151; // eax
  __int64 v152; // r15
  __int64 v153; // r13
  __int64 (__fastcall *v154)(__int64, int, int); // rax
  int v155; // eax
  int v156; // r10d
  __int64 *v157; // rdi
  __int64 v158; // rcx
  _DWORD *v159; // rdx
  _DWORD *v160; // rax
  __int64 (__fastcall *v161)(__int64, int); // rax
  int v162; // eax
  __int64 v163; // r13
  __int64 v164; // r15
  __int64 (__fastcall *v165)(__int64, int, int); // rax
  int v166; // eax
  int v167; // r10d
  __int64 *v168; // rdi
  _DWORD *v169; // rsi
  __int64 v170; // rcx
  _DWORD *v171; // rdx
  _DWORD *v172; // rax
  __int64 v173; // r12
  _DWORD *v174; // rsi
  _DWORD *v175; // rsi
  __int64 v176; // rax
  __int64 *v177; // rdi
  __int64 v178; // rax
  __int64 v179; // rsi
  __int64 *v180; // rdi
  __int64 v181; // rax
  __int64 v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 *v187; // r15
  size_t v188; // r14
  size_t v189; // r15
  __int64 v190; // rsi
  __int64 *v191; // r8
  __int64 v192; // r14
  void *v193; // rax
  size_t v194; // r13
  size_t v195; // r15
  __int64 v196; // rax
  unsigned __int64 v197; // r15
  __int64 v198; // rbx
  int v199; // eax
  int k; // r14d
  int v201; // eax
  size_t v202; // rsi
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rdx
  __int64 v207; // rax
  _DWORD *v208; // r14
  __int64 v209; // r8
  unsigned int v210; // eax
  _QWORD *v211; // rdx
  unsigned __int64 v212; // rax
  __int64 (__fastcall **v213)(); // rsi
  int v214; // r14d
  __int64 v215; // rax
  __int64 v216; // rax
  size_t v217; // rax
  __int64 v218; // rsi
  size_t v219; // r15
  unsigned __int64 v220; // rbx
  __int64 v221; // rax
  unsigned __int64 v222; // rbx
  size_t v223; // r15
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // [rsp-8h] [rbp-408h]
  _QWORD *v227; // [rsp+0h] [rbp-400h]
  int v228; // [rsp+0h] [rbp-400h]
  int v229; // [rsp+0h] [rbp-400h]
  int v230; // [rsp+0h] [rbp-400h]
  __int64 v231; // [rsp+8h] [rbp-3F8h]
  size_t v232[2]; // [rsp+10h] [rbp-3F0h] BYREF
  __int64 *v233; // [rsp+20h] [rbp-3E0h]
  __int64 v234; // [rsp+28h] [rbp-3D8h]
  __m128i v235; // [rsp+30h] [rbp-3D0h] BYREF
  __int64 v236; // [rsp+40h] [rbp-3C0h]
  size_t n; // [rsp+48h] [rbp-3B8h]
  __int64 *v238; // [rsp+50h] [rbp-3B0h]
  __int64 *v239; // [rsp+58h] [rbp-3A8h]
  __int64 *v240; // [rsp+60h] [rbp-3A0h]
  __int64 *v241; // [rsp+68h] [rbp-398h]
  size_t v242; // [rsp+70h] [rbp-390h]
  __int64 *v243; // [rsp+78h] [rbp-388h]
  int v244; // [rsp+80h] [rbp-380h]
  unsigned int v245; // [rsp+84h] [rbp-37Ch]
  __int64 *v246; // [rsp+88h] [rbp-378h]
  size_t v247[2]; // [rsp+90h] [rbp-370h] BYREF
  unsigned int v248; // [rsp+ACh] [rbp-354h] BYREF
  __int64 v249[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 *v250; // [rsp+C0h] [rbp-340h] BYREF
  int v251; // [rsp+C8h] [rbp-338h]
  _DWORD *v252; // [rsp+D0h] [rbp-330h] BYREF
  __int128 v253; // [rsp+D8h] [rbp-328h]
  unsigned __int64 v254; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v255; // [rsp+F8h] [rbp-308h]
  _DWORD *v256; // [rsp+110h] [rbp-2F0h] BYREF
  __int128 v257; // [rsp+118h] [rbp-2E8h]
  __int64 v258; // [rsp+130h] [rbp-2D0h] BYREF
  __int128 v259; // [rsp+138h] [rbp-2C8h]
  __int64 v260; // [rsp+150h] [rbp-2B0h] BYREF
  __int128 v261; // [rsp+158h] [rbp-2A8h]
  __int64 v262; // [rsp+170h] [rbp-290h] BYREF
  __int128 v263; // [rsp+178h] [rbp-288h]
  _QWORD v264[2]; // [rsp+190h] [rbp-270h] BYREF
  int v265; // [rsp+1A0h] [rbp-260h]
  __int64 v266[2]; // [rsp+1B0h] [rbp-250h] BYREF
  int v267; // [rsp+1C0h] [rbp-240h]
  __int64 (__fastcall **v268)(); // [rsp+1D0h] [rbp-230h] BYREF
  __int64 v269[2]; // [rsp+1D8h] [rbp-228h] BYREF
  char v270; // [rsp+1E8h] [rbp-218h]
  __int64 v271; // [rsp+1F0h] [rbp-210h] BYREF
  int v272; // [rsp+1F8h] [rbp-208h]
  void *src; // [rsp+200h] [rbp-200h] BYREF
  __int128 v274; // [rsp+208h] [rbp-1F8h]
  __int64 v275[2]; // [rsp+220h] [rbp-1E0h] BYREF
  size_t v276; // [rsp+230h] [rbp-1D0h]
  __m128i v277; // [rsp+238h] [rbp-1C8h]
  __int64 v278[2]; // [rsp+250h] [rbp-1B0h] BYREF
  __int64 v279; // [rsp+260h] [rbp-1A0h] BYREF
  __int128 v280; // [rsp+268h] [rbp-198h]
  __int64 v281; // [rsp+280h] [rbp-180h] BYREF
  int v282; // [rsp+288h] [rbp-178h] BYREF
  _QWORD *v283; // [rsp+290h] [rbp-170h]
  int *v284; // [rsp+298h] [rbp-168h]
  int *v285; // [rsp+2A0h] [rbp-160h]
  __int64 v286; // [rsp+2A8h] [rbp-158h]
  __int64 (__fastcall **v287)(); // [rsp+2B0h] [rbp-150h] BYREF
  _BYTE v288[24]; // [rsp+2B8h] [rbp-148h] BYREF
  _QWORD v289[2]; // [rsp+2D0h] [rbp-130h] BYREF
  int v290; // [rsp+2E0h] [rbp-120h]
  __int64 v291; // [rsp+2E8h] [rbp-118h] BYREF
  int v292; // [rsp+2F8h] [rbp-108h]
  int v293; // [rsp+300h] [rbp-100h]
  unsigned __int64 *v294; // [rsp+308h] [rbp-F8h]
  __int64 (__fastcall **v295)(); // [rsp+310h] [rbp-F0h] BYREF
  __int64 v296; // [rsp+318h] [rbp-E8h]
  __int128 v297; // [rsp+320h] [rbp-E0h]
  char v298; // [rsp+330h] [rbp-D0h]
  unsigned __int64 v299; // [rsp+334h] [rbp-CCh]
  __int64 v300; // [rsp+340h] [rbp-C0h]
  __int128 v301; // [rsp+348h] [rbp-B8h]
  __int64 v302; // [rsp+358h] [rbp-A8h]
  __int128 v303; // [rsp+360h] [rbp-A0h]
  __int64 v304; // [rsp+370h] [rbp-90h]
  __int128 v305; // [rsp+378h] [rbp-88h]
  __int64 v306; // [rsp+388h] [rbp-78h]
  __int128 v307; // [rsp+390h] [rbp-70h]
  int v308; // [rsp+3A0h] [rbp-60h]
  __int64 v309; // [rsp+3A8h] [rbp-58h]
  __int128 v310; // [rsp+3B0h] [rbp-50h]
  unsigned __int64 v311; // [rsp+3C8h] [rbp-38h]

  v246 = a1;
  v240 = a2;
  v236 = a7;
  LODWORD(v241) = a4;
  v245 = a5;
  LODWORD(v238) = a8;
  LOBYTE(v233) = a8;
  v311 = __readfsqword(0x28u);
  v243 = &v271;
  sub_605C0(&v271, a3);
  v11 = *(_QWORD *)(a3 + 24);
  src = nullptr;
  v274 = 0;
  if ( v11 )
  {
    v93 = (void *)qalloc_or_throw(16 * v11);
    v94 = *(const void **)(a3 + 16);
    src = v93;
    *((_QWORD *)&v274 + 1) = v11;
    memcpy(v93, v94, 16 * v11);
    *(_QWORD *)&v274 = v11;
  }
  v275[0] = 0;
  v277 = 0;
  v275[1] = 0;
  v276 = 0;
  v244 = (unsigned __int8)v238;
  if ( sub_174D60(v246, v240, &v248, v243, (unsigned int)v241, v245, a6, v236, (unsigned __int8)v238, a9) )
  {
    v12 = v248;
    goto LABEL_5;
  }
  v249[0] = 0;
  v249[1] = 0;
  sub_60750(v249, (int)v241);
  if ( v245 != -1 )
    sub_6C2B0((__int64)v246, v245, v249);
  v268 = off_4C8C78;
  v269[0] = 0;
  v269[1] = 0;
  v270 = 0;
  sub_6BB50((__int64 *)&v268, v246, (int)v241, 0);
  v14 = v269;
  if ( v245 != -1 )
  {
    sub_60CC0(v249, v269);
    v14 = v249;
  }
  v12 = 0;
  if ( (unsigned __int8)sub_60E40(v14) )
    goto LABEL_83;
  v252 = nullptr;
  v253 = 0;
  LODWORD(v239) = -1;
  v18 = sub_60F20(v14, 0);
  v19 = -1;
  while ( v18 != *((_DWORD *)v14 + 2) )
  {
    v176 = v253;
    if ( (_DWORD)v241 == v18 )
    {
      v19 = (int)v253;
    }
    else
    {
      v20 = (int)v239;
      if ( v18 == v245 )
        v20 = v253;
      LODWORD(v239) = v20;
    }
    v175 = v252;
    LODWORD(v295) = v18;
    v21 = v253 + 1;
    if ( &v295 < (__int64 (__fastcall ***)())v252 || &v295 >= (__int64 (__fastcall ***)())&v252[*((_QWORD *)&v253 + 1)] )
    {
      if ( *((_QWORD *)&v253 + 1) < v21 )
      {
        v252 = (_DWORD *)qvector_reserve(&v252, v252, v21, 4);
        v175 = v252;
        v22 = (int)v295;
        v176 = v253;
      }
      else
      {
        v22 = v18;
      }
      v175[v176] = v22;
    }
    else
    {
      if ( *((_QWORD *)&v253 + 1) < v21 )
      {
        v252 = (_DWORD *)qvector_reserve(&v252, v252, v21, 4);
        v175 = v252;
        v176 = v253;
      }
      v175[v176] = v18;
    }
    *(_QWORD *)&v253 = v253 + 1;
    v18 = sub_60F20(v14, v18 + 1);
  }
  if ( (_DWORD)v19 == -1 )
  {
    if ( !under_debugger )
      sub_37EEE0(50542);
    goto LABEL_372;
  }
  if ( (_DWORD)v19 )
  {
    v252[v19] = *v252;
    v15 = (unsigned int)v241;
    *v252 = (_DWORD)v241;
  }
  v46 = v253;
  if ( (_DWORD)v239 != -1 )
  {
    v15 = (int)v239;
    if ( (int)v239 != (_QWORD)v253 - 1LL )
    {
      v47 = v245;
      v16 = (unsigned int)v252[(_QWORD)v253 - 1];
      v252[(int)v239] = v16;
      v15 = v253;
      v252[(_QWORD)v253 - 1] = v47;
      v46 = v253;
    }
  }
  LODWORD(v242) = v46;
  v254 = 0;
  v256 = nullptr;
  v258 = 0;
  v260 = 0;
  v262 = 0;
  v255 = 0;
  v257 = 0;
  v259 = 0;
  v261 = 0;
  v263 = 0;
  if ( v46 )
  {
    v262 = qvector_reserve(&v262, 0, v46, 24);
    if ( (unsigned __int64)v263 < v46 )
    {
      v49 = v263 + 1;
      v15 = 24 * v263;
      v50 = 24 * v263 + v262;
      *(_QWORD *)v50 = 0;
      *(_OWORD *)(v50 + 8) = 0;
      if ( v49 < v46 )
      {
        v15 += 24;
        do
        {
          ++v49;
          v51 = v15 + v262;
          v15 += 24;
          *(_QWORD *)v51 = 0;
          *(_OWORD *)(v51 + 8) = 0;
        }
        while ( v46 != v49 );
      }
    }
    v16 = (unsigned int)v242;
    *(_QWORD *)&v263 = v46;
    if ( (int)v242 > 0 )
    {
      v247[0] = 0;
      v234 = 4LL * (unsigned int)(v46 - 1) + 4;
      while ( 1 )
      {
        v58 = v246[5];
        v59 = *(unsigned int *)((char *)v252 + v247[0]);
        if ( (unsigned int)v59 >= *(_DWORD *)(v58 + 64) )
          break;
        v60 = *(_QWORD *)(v58 + 528);
        v61 = *(_QWORD *)(v60 + 8 * v59);
        if ( (*(_DWORD *)(v61 + 24) & 0x600) != 0x200 )
          sub_A3B50(v61, 0, v60, v16, v17, v48);
        v54 = (_QWORD *)(v262 + 6 * v247[0]);
        v62 = v61 + 200;
        v235.m128i_i8[0] = a9 & 1;
        if ( (a9 & 1) == 0 )
          v62 = v61 + 240;
        v63 = nullptr;
        v64 = *(_QWORD *)(v62 + 24);
        if ( v64 )
        {
          v227 = (_QWORD *)(v262 + 6 * v247[0]);
          v231 = v62;
          v232[0] = *(_QWORD *)(v62 + 24);
          n = 16 * v64;
          v63 = (void *)qalloc_or_throw(16 * v64);
          memcpy(v63, *(const void **)(v231 + 16), n);
          v54 = v227;
          v64 = v232[0];
        }
        v52 = *v54;
        si128 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
        if ( *v54 )
        {
          v54[1] = 0;
          n = (size_t)v54;
          *(__m128i *)v232 = si128;
          qfree(v52);
          si128 = _mm_load_si128((const __m128i *)v232);
          v54 = (_QWORD *)n;
        }
        *v54 = v63;
        *(__m128i *)(v54 + 1) = si128;
        n = (size_t)&src;
        sub_313F40(v54, &src);
        if ( ((unsigned __int8)v233 & 1) != 0 && *(_DWORD *)(v61 + 72) != (_DWORD)v241 )
        {
          v55 = (_QWORD *)(v61 + 200);
          if ( v235.m128i_i8[0] )
            v55 = (_QWORD *)(v61 + 240);
          v235.m128i_i64[0] = (__int64)v55;
          if ( (unsigned __int8)sub_60D40(v55, v243) || (unsigned __int8)sub_3142F0(v235.m128i_i64[0] + 16, n) )
          {
            sub_60E90(v275, v243);
            n = 0;
            v235.m128i_i64[0] = v274;
            if ( (_QWORD)v274 )
            {
              v232[0] = 16 * v274;
              n = qalloc_or_throw(16 * v274);
              memcpy((void *)n, src, v232[0]);
            }
            v56 = _mm_loadl_epi64(&v235);
            v57 = _mm_unpacklo_epi64(v56, v56);
            if ( v276 )
            {
              v235 = v57;
              v277.m128i_i64[0] = 0;
              qfree(v276);
              v57 = _mm_load_si128(&v235);
            }
            v277 = v57;
            v276 = n;
            v12 = sub_16F600(v240, v275, v61, 0, 0, v244, a9);
            v15 = v226;
            v248 = v12;
            if ( v12 )
              goto LABEL_63;
          }
        }
        v247[0] += 4LL;
        if ( v234 == v247[0] )
          goto LABEL_117;
      }
      if ( !under_debugger )
        sub_37EEE0(52719);
LABEL_372:
      BUG();
    }
  }
LABEL_117:
  if ( ((unsigned __int8)v238 & 1) != 0 )
  {
    if ( v245 != -1 )
    {
      v65 = v243;
      sub_60E90(v275, v243);
      v69 = v274;
      v70 = 0;
      if ( (_QWORD)v274 )
      {
        v247[0] = 16 * v274;
        v193 = (void *)qalloc_or_throw(16 * v274);
        v65 = (__int64 *)src;
        v70 = (size_t)v193;
        memcpy(v193, src, v247[0]);
      }
      v71 = v276;
      v72 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)v69);
      if ( v276 )
      {
        *(__m128i *)v247 = v72;
        v277.m128i_i64[0] = 0;
        qfree(v276);
        v72 = _mm_load_si128((const __m128i *)v247);
      }
      v276 = v70;
      v277 = v72;
      v73 = v246[5];
      if ( v245 >= *(_DWORD *)(v73 + 64) )
        sub_16F980(v71, v65, v73, v66, v67, v68);
      v12 = sub_16F600(v240, v275, *(_QWORD *)(*(_QWORD *)(v73 + 528) + 8LL * v245), 0, v236, v244, a9);
      v248 = v12;
      if ( v12 )
        goto LABEL_63;
    }
    if ( ((unsigned __int8)v238 & 2) == 0 )
    {
      v12 = 0;
      goto LABEL_63;
    }
  }
  v282 = 0;
  v247[0] = (size_t)&v282;
  v284 = &v282;
  v285 = &v282;
  v283 = nullptr;
  v241 = &v281;
  v286 = 0;
  n = (size_t)&src;
  sub_1763E0(&v281, (__int64)&src, v15, v16, v17);
  if ( (int)v242 > 0 )
  {
    v77 = 0;
    do
    {
      sub_1763E0(v241, v77 + v262, v74, v75, v76);
      v77 += 24;
    }
    while ( v77 != 8 * (3LL * (unsigned int)(v46 - 1) + 3) );
  }
  LODWORD(v234) = sub_610E0((__int64)v243);
  v78 = v254;
  v264[0] = 0;
  v264[1] = 0;
  v235.m128i_i64[0] = v286;
  v265 = 0;
  if ( v254 )
  {
    v79 = v255;
    if ( (_QWORD)v255 )
    {
      v80 = v247[0];
      v81 = 0;
      do
      {
        v82 = 3 * v81++;
        qfree(*(_QWORD *)(v78 + 8 * v82));
        v78 = v254;
      }
      while ( v79 != v81 );
      v247[0] = v80;
    }
    *(_QWORD *)&v255 = 0;
    qfree(v78);
    v254 = 0;
    *((_QWORD *)&v255 + 1) = 0;
  }
  v83 = v255;
  if ( v46 < (unsigned __int64)v255 )
  {
    v219 = v247[0];
    v220 = v46;
    do
    {
      v221 = 3 * v220++;
      qfree(*(_QWORD *)(v254 + 8 * v221));
    }
    while ( v220 < v83 );
    v247[0] = v219;
    *(_QWORD *)&v255 = v46;
  }
  else if ( (unsigned __int64)v255 < v46 )
  {
    v84 = v254;
    if ( (unsigned __int64)v264 < v254 || (unsigned __int64)v264 >= v254 + 24LL * *((_QWORD *)&v255 + 1) )
    {
      if ( *((_QWORD *)&v255 + 1) >= (unsigned __int64)v46
        || (v225 = qvector_reserve(&v254, v254, v46, 24),
            v83 = v255,
            v254 = v225,
            v84 = v225,
            (unsigned __int64)v255 < v46) )
      {
        while ( 1 )
        {
          v222 = v84 + 24 * v83;
          sub_605C0((__int64 *)v222, (__int64)v264);
          ++v83;
          *(_DWORD *)(v222 + 16) = v265;
          if ( v83 >= v46 )
            break;
          v84 = v254;
        }
      }
      *(_QWORD *)&v255 = v46;
    }
    else
    {
      sub_605C0((__int64 *)&v295, (__int64)v264);
      LODWORD(v297) = v265;
      if ( *((_QWORD *)&v255 + 1) < (unsigned __int64)v46 )
        v254 = qvector_reserve(&v254, v254, v46, 24);
      v85 = v255;
      if ( (unsigned __int64)v255 < v46 )
      {
        do
        {
          v86 = v254 + 24 * v85;
          sub_605C0((__int64 *)v86, (__int64)&v295);
          ++v85;
          *(_DWORD *)(v86 + 16) = v297;
        }
        while ( v46 != v85 );
      }
      *(_QWORD *)&v255 = v46;
      qfree(v295);
    }
  }
  v87 = v243;
  v88 = 0;
  for ( i = sub_60F20(v243, 0); ; i = sub_60F20(v243, v88) )
  {
    v173 = v257;
    if ( i == v272 )
      break;
    v174 = v256;
    LODWORD(v295) = i;
    v91 = v257 + 1;
    if ( &v295 < (__int64 (__fastcall ***)())v256 || &v295 >= (__int64 (__fastcall ***)())&v256[*((_QWORD *)&v257 + 1)] )
    {
      if ( *((_QWORD *)&v257 + 1) < v91 )
      {
        v256 = (_DWORD *)qvector_reserve(&v256, v256, v91, 4);
        v174 = v256;
        v173 = v257;
        v92 = (int)v295;
      }
      else
      {
        v92 = i;
      }
      v174[v173] = v92;
    }
    else
    {
      if ( *((_QWORD *)&v257 + 1) < v91 )
      {
        v256 = (_DWORD *)qvector_reserve(&v256, v256, v91, 4);
        v173 = v257;
        v174 = v256;
      }
      v174[v173] = i;
    }
    v87 = v243;
    v88 = (unsigned int)(i + 1);
    *(_QWORD *)&v257 = v257 + 1;
  }
  v95 = (__int64)v284;
  v96 = v259;
  if ( v284 != (int *)v247[0] )
  {
    v238 = &v258;
    do
    {
      v97 = *(_QWORD *)(v95 + 32);
      v88 = v258;
      if ( *((_QWORD *)&v259 + 1) < v96 + 1 )
      {
        v258 = qvector_reserve(v238, v258, v96 + 1, 8);
        v96 = v259;
        v88 = v258;
      }
      *(_QWORD *)(v88 + 8 * v96) = v97;
      v87 = (__int64 *)v95;
      v96 = v259 + 1;
      *(_QWORD *)&v259 = v259 + 1;
      v95 = std::_Rb_tree_increment(v95);
    }
    while ( v95 != v247[0] );
  }
  v98 = v261;
  if ( (unsigned __int64)v261 < v96 )
  {
    v218 = v260;
    if ( *((_QWORD *)&v261 + 1) < v96 )
    {
      v260 = qvector_reserve(&v260, v260, v96, 8);
      v218 = v260;
      v98 = v261;
    }
    v87 = (__int64 *)(v218 + 8 * v98);
    v88 = 0;
    memset(v87, 0, 8 * (v96 - v98));
    *(_QWORD *)&v261 = v96;
    v96 = v259;
  }
  else if ( v96 != (_QWORD)v261 )
  {
    *(_QWORD *)&v261 = v96;
  }
  v99 = v247[0];
  v100 = 0;
  v101 = nullptr;
  if ( v96 )
  {
    do
    {
      v100 = (unsigned int)(v100 + 1);
      v88 = (unsigned __int64)v101;
      v102 = -1;
      v101 = (unsigned __int64 *)(int)v100;
      if ( (int)v100 < v96 )
        v102 = *(_QWORD *)(v258 + 8LL * (int)v100);
      v87 = (__int64 *)v260;
      *(_QWORD *)(v260 + 8 * v88) = v102 - *(_QWORD *)(v258 + 8 * v88);
      v96 = v259;
    }
    while ( (int)v100 < (unsigned __int64)v259 );
    v247[0] = v99;
  }
  v103 = (unsigned int)v242;
  if ( (int)v242 > 0 )
  {
    v238 = nullptr;
    v233 = (__int64 *)(4LL * (unsigned int)(v46 - 1) + 4);
    LOBYTE(v232[0]) = a9 & 1;
    while ( 1 )
    {
      v104 = 6LL * (_QWORD)v238;
      v105 = (__int64 *)(6LL * (_QWORD)v238 + v254);
      v106 = v246[5];
      v107 = *(unsigned int *)((char *)v238 + (_QWORD)v252);
      if ( (unsigned int)v107 >= *(_DWORD *)(v106 + 64) )
        sub_16F980(v87, v88, v106, v100, v89, v103);
      v108 = *(_QWORD *)(*(_QWORD *)(v106 + 528) + 8 * v107);
      if ( (*(_DWORD *)(v108 + 24) & 0x600) != 0x200 )
      {
        if ( !under_debugger )
          sub_37EEE0(50543);
        goto LABEL_372;
      }
      v109 = v108 + 240;
      v110 = v108 + 200;
      if ( !LOBYTE(v232[0]) )
        v109 = v110;
      sub_605C0((__int64 *)&v250, v109);
      sub_60CC0((__int64 *)&v250, v243);
      v111 = sub_60F20(&v250, 0);
      if ( v111 != v251 )
        break;
LABEL_183:
      v114 = (unsigned __int64 **)(v262 + v104);
      v115 = v114[1];
      v88 = (unsigned __int64)*v114;
      v116 = *v114;
      if ( !(16LL * (_QWORD)v115) )
        goto LABEL_196;
      do
      {
        v117 = (__int64)v284;
        if ( v284 == (int *)v247[0] )
          goto LABEL_195;
        do
        {
          v118 = v116[1];
          v119 = *(_QWORD *)(v117 + 32);
          v120 = *v116;
          if ( v118 && v119 >= v120 && v118 + v120 - 1 >= v119 )
          {
            v121 = (_QWORD *)(v258 + 8 * v259);
            if ( (_QWORD *)v258 == v121 )
            {
LABEL_248:
              if ( !under_debugger )
                sub_37EEE0(50545);
              goto LABEL_372;
            }
            v122 = (_QWORD *)v258;
            while ( v119 != *v122 )
            {
              if ( v121 == ++v122 )
                goto LABEL_248;
            }
            sub_60750(v105, v173 + (((__int64)v122 - v258) >> 3));
          }
          v117 = std::_Rb_tree_increment(v117);
        }
        while ( v117 != v247[0] );
        v88 = (unsigned __int64)*v114;
        v115 = v114[1];
LABEL_195:
        v116 += 2;
      }
      while ( v116 != (unsigned __int64 *)(v88 + 16LL * (_QWORD)v115) );
LABEL_196:
      v87 = v250;
      qfree(v250);
      v238 = (__int64 *)((char *)v238 + 4);
      if ( v233 == v238 )
        goto LABEL_197;
    }
    while ( 1 )
    {
      v112 = &v256[v257];
      if ( v256 == v112 )
        break;
      v113 = v256;
      while ( *v113 != v111 )
      {
        if ( v112 == ++v113 )
          goto LABEL_352;
      }
      sub_60750(v105, v113 - v256);
      v111 = sub_60F20(&v250, v111 + 1);
      if ( v111 == v251 )
        goto LABEL_183;
    }
LABEL_352:
    if ( !under_debugger )
      sub_37EEE0(50544);
    goto LABEL_372;
  }
LABEL_197:
  v123 = v235.m128i_i32[0] + v234;
  if ( (_QWORD)v259 + (int)v173 != v235.m128i_i32[0] + (_DWORD)v234 )
  {
    if ( !under_debugger )
      sub_37EEE0(50546);
    goto LABEL_372;
  }
  qfree(v264[0]);
  sub_170070(v283);
  v267 = v123;
  v266[0] = 0;
  v238 = v266;
  v266[1] = 0;
  sub_60440(v266, 0, v173);
  v124 = src;
  if ( 16LL * (_QWORD)v274 )
  {
    while ( 1 )
    {
      v125 = (_QWORD *)(v258 + 8 * v259);
      if ( (_QWORD *)v258 == v125 )
        break;
      v126 = (_QWORD *)v258;
      while ( *v124 != *v126 )
      {
        if ( v125 == ++v126 )
          goto LABEL_340;
      }
      sub_60750(v238, v173 + (((__int64)v126 - v258) >> 3));
      v124 += 2;
      if ( v124 == (_QWORD *)((char *)src + 16 * (_QWORD)v274) )
        goto LABEL_204;
    }
LABEL_340:
    if ( !under_debugger )
      sub_37EEE0(50547);
    goto LABEL_372;
  }
LABEL_204:
  if ( v245 != -1 && (_DWORD)v239 == -1 )
  {
    v127 = v253;
    v128 = v252;
    if ( *((_QWORD *)&v253 + 1) < (unsigned __int64)(v253 + 1) )
    {
      v252 = (_DWORD *)qvector_reserve(&v252, v252, v253 + 1, 4);
      v128 = v252;
      v127 = v253;
    }
    v128[v127] = v245;
    *(_QWORD *)&v253 = v253 + 1;
    sub_605C0((__int64 *)&v295, (__int64)v238);
    v129 = v254;
    LODWORD(v297) = v267;
    v130 = v255;
    if ( *((_QWORD *)&v255 + 1) < (unsigned __int64)(v255 + 1) )
    {
      v254 = qvector_reserve(&v254, v254, v255 + 1, 24);
      v129 = v254;
      v130 = v255;
    }
    v131 = v129 + 24 * v130;
    sub_605C0((__int64 *)v131, (__int64)&v295);
    *(_QWORD *)&v255 = v255 + 1;
    *(_DWORD *)(v131 + 16) = v297;
    v132 = v295;
    qfree(v295);
    v136 = v246[5];
    if ( v245 >= *(_DWORD *)(v136 + 64) )
      sub_16F980(v132, &v295, v136, v133, v134, v135);
    v137 = *(_QWORD *)(v136 + 528);
    v138 = *(_QWORD *)(v137 + 8LL * v245);
    if ( (*(_DWORD *)(v138 + 24) & 0x600) != 0x200 )
      sub_A3B50(v138, 0, v137, v133, v134, v135);
    LODWORD(v242) = v242 + 1;
  }
  v296 = 0;
  v298 = 0;
  v307 = 0;
  v295 = off_4D8B78;
  v300 = 0;
  v299 = 0xFFFFFFFF00000000LL;
  v139 = *v246;
  v302 = 0;
  v304 = 0;
  v306 = 0;
  v308 = 0;
  v309 = 0;
  v287 = nullptr;
  LODWORD(v281) = -1;
  v297 = 0;
  v301 = 0;
  v303 = 0;
  v305 = 0;
  v310 = 0;
  *(_OWORD *)v288 = 0;
  v140 = *(__int64 (__fastcall **)(__int64))(v139 + 56);
  if ( v140 != sub_FE060 )
  {
    v142 = (int)v140((__int64)v246);
    if ( v142 < *(_QWORD *)v288 )
    {
LABEL_330:
      *(_QWORD *)v288 = v142;
      goto LABEL_216;
    }
    if ( *(_QWORD *)v288 >= v142 )
      goto LABEL_216;
    v213 = v287;
    v212 = *(_QWORD *)&v288[8];
    if ( v241 < (__int64 *)v287 )
    {
LABEL_334:
      if ( v212 < v142 )
        v287 = (__int64 (__fastcall **)())qvector_reserve(&v287, v213, v142, 4);
      v216 = *(_QWORD *)v288;
      if ( *(_QWORD *)v288 < v142 )
      {
        do
          *((_DWORD *)v287 + v216++) = v281;
        while ( v142 != v216 );
      }
      goto LABEL_330;
    }
LABEL_325:
    if ( v241 < (__int64 *)((char *)v213 + 4 * v212) )
    {
      v214 = v281;
      if ( v212 < v142 )
        v287 = (__int64 (__fastcall **)())qvector_reserve(&v287, v213, v142, 4);
      v215 = *(_QWORD *)v288;
      if ( *(_QWORD *)v288 < v142 )
      {
        do
          *((_DWORD *)v287 + v215++) = v214;
        while ( v215 != v142 );
      }
      goto LABEL_330;
    }
    goto LABEL_334;
  }
  v141 = v246[5];
  v142 = *(int *)(v141 + 64);
  if ( *(_DWORD *)(v141 + 64) )
  {
    v212 = *(_QWORD *)&v288[8];
    v213 = nullptr;
    goto LABEL_325;
  }
LABEL_216:
  v143 = v253;
  v144 = v253;
  if ( (int)v253 <= 0 )
  {
    sub_63980((__int64)&v295, v253);
    LODWORD(v232[0]) = v143 - 1;
  }
  else
  {
    LODWORD(v232[0]) = v253 - 1;
    v233 = (__int64 *)(unsigned int)(v253 - 1);
    v145 = nullptr;
    do
    {
      *((_DWORD *)v287 + (int)v252[(_QWORD)v145]) = (_DWORD)v145;
      v146 = v145;
      v145 = (__int64 *)((char *)v145 + 1);
    }
    while ( v233 != v146 );
    sub_63980((__int64)&v295, v144);
    v239 = nullptr;
    for ( j = nullptr; ; j = (__int64 *)((char *)j + 1) )
    {
      v235.m128i_i32[0] = (int)j;
      v148 = *v246;
      v149 = v252[(_QWORD)j];
      v150 = *(__int64 (__fastcall **)(__int64, int))(*v246 + 104);
      LODWORD(v247[0]) = v149;
      if ( v150 == sub_1308D0 )
      {
        v151 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v246[5] + 528) + 8LL * v149) + 352LL);
      }
      else
      {
        v187 = v246;
        v151 = v150((__int64)v246, v247[0]);
        v148 = *v187;
      }
      if ( v151 > 0 )
      {
        v152 = v151;
        v153 = 0;
        v234 = 8LL * SLODWORD(v247[0]);
        do
        {
          v154 = *(__int64 (__fastcall **)(__int64, int, int))(v148 + 120);
          if ( v154 == sub_16EE50 )
            v155 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[5] + 528) + v234) + 344LL) + 4 * v153);
          else
            v155 = v154((__int64)v246, v247[0], v153);
          v156 = *((_DWORD *)v287 + v155);
          if ( v156 != -1 )
          {
            v157 = (__int64 *)(v300 + 24LL * v156);
            v158 = v157[1];
            v159 = (_DWORD *)(*v157 + 4 * v158);
            if ( (_DWORD *)*v157 == v159 )
              goto LABEL_250;
            v160 = (_DWORD *)*v157;
            while ( *v160 != (_DWORD)j )
            {
              if ( v159 == ++v160 )
                goto LABEL_250;
            }
            if ( v159 == v160 )
            {
LABEL_250:
              if ( v157[2] < (unsigned __int64)(v158 + 1) )
              {
                v230 = v156;
                v185 = qvector_reserve(v157, *v157, v158 + 1, 4);
                v156 = v230;
                v186 = v157[1];
                *v157 = v185;
                v159 = (_DWORD *)(v185 + 4 * v186);
              }
              *v159 = v235.m128i_i32[0];
              ++v157[1];
              v177 = (__int64 *)((char *)v239 + v302);
              v178 = *(__int64 *)((char *)v239 + v302 + 8);
              v179 = *(__int64 *)((char *)v239 + v302);
              if ( *(__int64 *)((char *)v239 + v302 + 16) < (unsigned __int64)(v178 + 1) )
              {
                v229 = v156;
                v179 = qvector_reserve(v177, v179, v178 + 1, 4);
                v156 = v229;
                *v177 = v179;
                v178 = v177[1];
              }
              *(_DWORD *)(v179 + 4 * v178) = v156;
              ++v177[1];
            }
          }
          ++v153;
          v148 = *v246;
        }
        while ( v153 != v152 );
      }
      v161 = *(__int64 (__fastcall **)(__int64, int))(v148 + 96);
      if ( v161 == sub_1308B0 )
        v162 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v246[5] + 528) + 8LL * SLODWORD(v247[0])) + 376LL);
      else
        v162 = v161((__int64)v246, v247[0]);
      if ( v162 > 0 )
      {
        v163 = 0;
        v234 = v162;
        v164 = 8LL * SLODWORD(v247[0]);
        do
        {
          v165 = *(__int64 (__fastcall **)(__int64, int, int))(*v246 + 112);
          if ( v165 == sub_1308F0 )
            v166 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[5] + 528) + v164) + 368LL) + 4 * v163);
          else
            v166 = v165((__int64)v246, v247[0], v163);
          v167 = *((_DWORD *)v287 + v166);
          if ( v167 != -1 )
          {
            v168 = (__int64 *)((char *)v239 + v300);
            v169 = *(_DWORD **)((char *)v239 + v300);
            v170 = *(__int64 *)((char *)v239 + v300 + 8);
            v171 = &v169[v170];
            if ( v169 == v171 )
              goto LABEL_255;
            v172 = *(_DWORD **)((char *)v239 + v300);
            while ( v167 != *v172 )
            {
              if ( v171 == ++v172 )
                goto LABEL_255;
            }
            if ( v172 == v171 )
            {
LABEL_255:
              if ( v168[2] < (unsigned __int64)(v170 + 1) )
              {
                v228 = v167;
                v183 = qvector_reserve(v168, v169, v170 + 1, 4);
                v167 = v228;
                v184 = v168[1];
                *v168 = v183;
                v171 = (_DWORD *)(v183 + 4 * v184);
              }
              *v171 = v167;
              ++v168[1];
              v180 = (__int64 *)(v302 + 24LL * v167);
              v181 = v180[1];
              v182 = *v180;
              if ( v180[2] < (unsigned __int64)(v181 + 1) )
              {
                v182 = qvector_reserve(v180, v182, v181 + 1, 4);
                *v180 = v182;
                v181 = v180[1];
              }
              *(_DWORD *)(v182 + 4 * v181) = v235.m128i_i32[0];
              ++v180[1];
            }
          }
          ++v163;
        }
        while ( v234 != v163 );
      }
      v239 += 3;
      if ( j == v233 )
        break;
    }
  }
  HIDWORD(v299) = v232[0];
  if ( v287 )
  {
    *(_QWORD *)v288 = 0;
    qfree(v287);
  }
  memset(v288, 0, sizeof(v288));
  v247[0] = (int)v242;
  v287 = (__int64 (__fastcall **)())&unk_4D8D80;
  v289[0] = 0;
  v289[1] = 0;
  v290 = v267;
  sub_605C0(&v291, (__int64)v238);
  v188 = *(_QWORD *)&v288[8];
  v293 = 1;
  v292 = v267;
  if ( v247[0] < *(_QWORD *)&v288[8] )
  {
    v194 = v247[0];
    v195 = v247[0];
    do
    {
      v196 = 3 * v194++;
      qfree(*(_QWORD *)(*(_QWORD *)v288 + 8 * v196));
    }
    while ( v194 < v188 );
    v247[0] = v195;
    *(_QWORD *)&v288[8] = v195;
  }
  else
  {
    v189 = v247[0];
    if ( *(_QWORD *)&v288[8] < v247[0] )
    {
      v190 = *(_QWORD *)v288;
      v191 = v289;
      if ( (unsigned __int64)v289 < *(_QWORD *)v288
        || (unsigned __int64)v289 >= *(_QWORD *)v288 + 24LL * *(_QWORD *)&v288[16] )
      {
        if ( *(_QWORD *)&v288[16] >= v247[0]
          || (v223 = v247[0],
              v241 = v289,
              v224 = qvector_reserve(v288, *(_QWORD *)v288, v247[0], 24),
              v188 = *(_QWORD *)&v288[8],
              *(_QWORD *)v288 = v224,
              v190 = v224,
              v191 = v241,
              *(_QWORD *)&v288[8] < v223) )
        {
          while ( 1 )
          {
            v239 = v191;
            v241 = (__int64 *)(v190 + 24 * v188);
            sub_605C0(v241, (__int64)v191);
            ++v188;
            v217 = v247[0];
            *((_DWORD *)v241 + 4) = v290;
            if ( v188 >= v217 )
              break;
            v190 = *(_QWORD *)v288;
            v191 = v239;
          }
        }
        *(_QWORD *)&v288[8] = v247[0];
      }
      else
      {
        sub_605C0(v241, (__int64)v289);
        LODWORD(v283) = v290;
        if ( *(_QWORD *)&v288[16] < v189 )
          *(_QWORD *)v288 = qvector_reserve(v288, *(_QWORD *)v288, v247[0], 24);
        v192 = *(_QWORD *)&v288[8];
        if ( *(_QWORD *)&v288[8] < v247[0] )
        {
          do
          {
            v239 = (__int64 *)(*(_QWORD *)v288 + 24 * v192);
            sub_605C0(v239, (__int64)v241);
            ++v192;
            *((_DWORD *)v239 + 4) = (_DWORD)v283;
          }
          while ( v247[0] != v192 );
        }
        *(_QWORD *)&v288[8] = v247[0];
        qfree(v281);
      }
    }
  }
  v287 = &off_4CB128;
  v294 = &v254;
  sub_30D5E0(&v295, &v287);
  if ( (int)v242 <= 0 )
  {
LABEL_318:
    v12 = 0;
    goto LABEL_35;
  }
  v197 = 0;
  v242 = 4 * v247[0];
  while ( 1 )
  {
    v198 = *(_QWORD *)v288 + 6 * v197;
    if ( !(unsigned __int8)sub_60E40((_QWORD *)v198) )
      break;
LABEL_281:
    v197 += 4LL;
    if ( v242 == v197 )
      goto LABEL_318;
  }
  if ( (int)sub_611C0((_QWORD *)v198) >= *(_DWORD *)(v198 + 16) )
  {
    if ( !under_debugger )
      sub_37EEE0(50548);
    goto LABEL_372;
  }
  v278[0] = 0;
  v278[1] = 0;
  v279 = 0;
  v280 = 0;
  v199 = sub_60F20((_QWORD *)v198, 0);
  v247[0] = (size_t)v278;
  for ( k = v199; k != *(_DWORD *)(v198 + 8); k = sub_60F20((_QWORD *)v198, k + 1) )
  {
    if ( k >= (int)v173 )
    {
      v201 = k - v173;
      if ( k - (int)v173 < 0 || v201 >= (unsigned __int64)v259 )
      {
        if ( !under_debugger )
          sub_37EEE0(50549);
        goto LABEL_372;
      }
      sub_11F0E0((__int64 *)v247[0], *(_QWORD *)(v258 + 8LL * v201), *(_QWORD *)(v260 + 8LL * v201));
    }
    else
    {
      sub_60750((__int64 *)v247[0], v256[k]);
    }
  }
  sub_60CC0(v278, v243);
  v202 = n;
  sub_313F40(&v279, n);
  if ( (unsigned __int8)sub_60E40(v278) && !(_QWORD)v280 )
  {
    if ( v279 )
      qfree(v279);
LABEL_296:
    qfree(v278[0]);
    goto LABEL_281;
  }
  v206 = v246[5];
  v207 = (unsigned int)v252[v197 / 4];
  if ( (unsigned int)v207 >= *(_DWORD *)(v206 + 64) )
    sub_16F980(v278, v202, v206, v203, v204, v205);
  v208 = *(_DWORD **)(*(_QWORD *)(v206 + 528) + 8 * v207);
  LODWORD(v247[0]) = v208[6];
  if ( (v247[0] & 0x600) != 0x200 )
  {
    if ( !under_debugger )
      sub_37EEE0(50550);
    goto LABEL_372;
  }
  if ( v208[19] == 1 )
  {
    v211 = v208 + 30;
    if ( (a9 & 1) != 0 )
      v211 = v208 + 40;
    v247[0] = (size_t)v211;
    if ( !(unsigned __int8)sub_60D40(v278, v211) && !(unsigned __int8)sub_3142F0(&v279, v247[0] + 16) )
      goto LABEL_304;
    v210 = sub_16F600(v240, v278, (__int64)v208, 0, 0, v244, a9);
  }
  else
  {
    v209 = 0;
    if ( v208[18] == v245 )
      v209 = v236;
    v210 = sub_16F600(v240, v278, (__int64)v208, 0, v209, v244, a9);
  }
  v12 = v210;
  v248 = v210;
  if ( !v210 )
  {
LABEL_304:
    if ( v279 )
    {
      *(_QWORD *)&v280 = 0;
      qfree(v279);
    }
    goto LABEL_296;
  }
  if ( v279 )
  {
    *(_QWORD *)&v280 = 0;
    qfree(v279);
  }
  qfree(v278[0]);
LABEL_35:
  v287 = (__int64 (__fastcall **)())&unk_4D8D80;
  qfree(v291);
  qfree(v289[0]);
  v23 = *(_QWORD *)v288;
  if ( *(_QWORD *)v288 )
  {
    v24 = *(_QWORD *)&v288[8];
    if ( *(_QWORD *)&v288[8] )
    {
      v25 = 0;
      do
      {
        v26 = v25 + 1;
        qfree(*(_QWORD *)(v23 + 24 * v25));
        v23 = *(_QWORD *)v288;
        v25 = v26;
      }
      while ( v24 != v26 );
    }
    *(_QWORD *)&v288[8] = 0;
    qfree(v23);
  }
  v295 = off_4D8B78;
  if ( v309 )
  {
    *(_QWORD *)&v310 = 0;
    qfree(v309);
  }
  if ( v306 )
  {
    *(_QWORD *)&v307 = 0;
    qfree(v306);
  }
  if ( v304 )
  {
    *(_QWORD *)&v305 = 0;
    qfree(v304);
  }
  v27 = v302;
  if ( v302 )
  {
    v28 = v303;
    if ( (_QWORD)v303 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31);
          v27 = v302;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v303 = 0;
    qfree(v27);
  }
  v32 = v300;
  if ( v300 )
  {
    v33 = v301;
    if ( (_QWORD)v301 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = v300;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v301 = 0;
    qfree(v32);
  }
  v295 = (__int64 (__fastcall **)())&unk_4D96E8;
  if ( v296 )
  {
    *(_QWORD *)&v297 = 0;
    qfree(v296);
  }
  qfree(v266[0]);
LABEL_63:
  v37 = v262;
  if ( v262 )
  {
    v38 = v263;
    if ( (_QWORD)v263 )
    {
      v39 = 0;
      do
      {
        v40 = (__int64 *)(v37 + 24 * v39);
        v41 = *v40;
        if ( *v40 )
        {
          v40[1] = 0;
          qfree(v41);
          v37 = v262;
        }
        ++v39;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v263 = 0;
    qfree(v37);
  }
  if ( v260 )
  {
    *(_QWORD *)&v261 = 0;
    qfree(v260);
  }
  if ( v258 )
  {
    *(_QWORD *)&v259 = 0;
    qfree(v258);
  }
  if ( v256 )
  {
    *(_QWORD *)&v257 = 0;
    qfree(v256);
  }
  v42 = v254;
  if ( v254 )
  {
    v43 = v255;
    if ( (_QWORD)v255 )
    {
      v44 = 0;
      do
      {
        v45 = v44 + 1;
        qfree(*(_QWORD *)(v42 + 24 * v44));
        v42 = v254;
        v44 = v45;
      }
      while ( v43 != v45 );
    }
    *(_QWORD *)&v255 = 0;
    qfree(v42);
  }
  if ( v252 )
  {
    *(_QWORD *)&v253 = 0;
    qfree(v252);
  }
LABEL_83:
  v268 = off_4C8C78;
  qfree(v269[0]);
  qfree(v249[0]);
LABEL_5:
  if ( v276 )
  {
    v277.m128i_i64[0] = 0;
    qfree(v276);
  }
  qfree(v275[0]);
  if ( src )
  {
    *(_QWORD *)&v274 = 0;
    qfree(src);
  }
  qfree(v271);
  return v12;
}
