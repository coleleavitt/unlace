__int64 __fastcall sub_72E0A0(__int64 a1, __int64 **a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  __m128i *v7; // rax
  __m128i v8; // xmm0
  int v9; // eax
  size_t v10; // rdx
  __m128i v11; // xmm0
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  size_t v14; // rdx
  __int128 v15; // xmm0
  int v16; // edx
  char v17; // al
  __m128i v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int128 v30; // xmm0
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  __int128 v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 *v42; // rsi
  _QWORD *v43; // r12
  __int64 v44; // rax
  _OWORD *v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // ebp
  __int64 v50; // r15
  unsigned int i; // r13d
  __int64 *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 *v55; // r14
  __int64 v56; // rdi
  __int64 v57; // rcx
  char v58; // al
  unsigned int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  unsigned int v63; // ebp
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  _QWORD *v68; // r13
  _QWORD *j; // rbp
  __int64 v70; // r13
  __int64 k; // rbp
  __int64 v72; // rsi
  int v73; // eax
  __int64 v74; // rsi
  int v75; // r13d
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rbp
  int v79; // eax
  void (__fastcall ***v80)(void *, __int64); // rbx
  bool v81; // zf
  __int64 *v82; // rbx
  unsigned __int64 v83; // rbp
  __int64 v84; // rsi
  __int64 v85; // rax
  pthread_mutex_t *v86; // rbp
  int v87; // eax
  void *v88; // rbx
  _DWORD *v89; // rdx
  __int64 v90; // r8
  _DWORD *v91; // r13
  __int64 v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // r12
  __int64 *v97; // r13
  unsigned int v98; // edx
  unsigned int v99; // ebx
  __int64 v100; // r12
  void (__fastcall ***v101)(_QWORD); // rbx
  __int64 *v102; // rbx
  unsigned __int64 v103; // rbp
  __int64 v104; // rsi
  __int64 v105; // rax
  pthread_mutex_t *v106; // rbp
  int v107; // eax
  __int64 v109; // rbp
  unsigned __int64 v110; // rdi
  _BYTE *v111; // rsi
  __int64 v112; // rbp
  unsigned __int64 v113; // rdi
  _BYTE *v114; // rsi
  __int64 v115; // rbp
  __int64 v116; // r13
  __int64 v117; // r15
  __int64 *v118; // r14
  __int64 v119; // rsi
  __int64 v120; // rax
  int v121; // edx
  __int64 **v122; // rax
  __int64 *v123; // r14
  unsigned int v124; // edx
  unsigned int v125; // eax
  __int64 v126; // r13
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r13
  __int64 *v130; // r12
  _QWORD *v131; // rax
  _QWORD *v132; // rcx
  __int64 *v133; // r13
  unsigned int v134; // eax
  _DWORD *v135; // rdx
  __int64 v136; // rsi
  __int64 v137; // rcx
  __int64 *v138; // r14
  unsigned int v139; // edx
  unsigned int v140; // eax
  __int64 v141; // r13
  __int64 *v142; // r12
  unsigned int v143; // eax
  __int64 v144; // r12
  __int64 *v145; // rbx
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  __int64 *v148; // r12
  unsigned int v149; // esi
  _DWORD *v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rax
  char **exception; // rbp
  __int64 v154; // rdx
  __int64 v155; // rax
  int v156; // ecx
  __int64 **v157; // rax
  char **v158; // r12
  __int64 v159; // r12
  _QWORD *v160; // rdi
  __int64 v161; // rax
  unsigned int v162; // r14d
  __int64 v163; // r9
  char *v164; // rcx
  int v165; // edi
  __int64 v166; // rax
  char *v167; // rsi
  __int64 v168; // rdx
  char *v169; // r8
  char *m; // rdx
  char *v171; // rax
  __int64 v172; // r15
  __int64 v173; // rax
  _QWORD *v174; // rax
  unsigned int v175; // r15d
  size_t v176; // rsi
  unsigned int *v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  void *v180; // rdi
  void (__fastcall ***v181)(void *); // r13
  __int64 v182; // rax
  void (__fastcall ***v183)(void *); // r12
  __int64 *v184; // r15
  __int64 v185; // rax
  __int64 v186; // r13
  void (***v187)(void); // rdi
  void (__fastcall ***v188)(_QWORD); // r12
  char **v189; // r12
  __int64 v190; // rdx
  char **v191; // rbp
  __int64 v192; // rbx
  _QWORD *v193; // rdi
  __int64 v194; // rax
  __int64 v195; // r12
  _QWORD *v196; // rdi
  __int64 v197; // rax
  unsigned int v198; // r13d
  unsigned int v199; // eax
  unsigned int *v200; // rax
  __int64 v201; // rax
  int v202; // esi
  __int64 *v203; // r13
  __int64 v204; // rsi
  __int64 v205; // rax
  __int64 v206; // rbx
  void (__fastcall ***v207)(void *); // r12
  _QWORD *v208; // rax
  void (__fastcall ***v209)(_QWORD); // rbx
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 jj; // rax
  __int64 ii; // rax
  unsigned __int64 v214; // rax
  char **v215; // r12
  __int64 v216; // rdx
  char **v217; // r12
  __int64 v218; // rdx
  char **v219; // r13
  __int64 v220; // rdx
  char **v221; // r13
  __int64 v222; // rdx
  char **v223; // rbp
  __int64 v224; // rdx
  char **v225; // rbx
  __int64 v226; // rdx
  __int64 *v227; // [rsp+0h] [rbp-5A8h]
  int v228; // [rsp+0h] [rbp-5A8h]
  __int64 **v229; // [rsp+8h] [rbp-5A0h]
  _QWORD *n; // [rsp+10h] [rbp-598h]
  size_t na; // [rsp+10h] [rbp-598h]
  size_t nb; // [rsp+10h] [rbp-598h]
  size_t nc; // [rsp+10h] [rbp-598h]
  size_t nd; // [rsp+10h] [rbp-598h]
  _QWORD *v235; // [rsp+18h] [rbp-590h]
  _DWORD *v237; // [rsp+30h] [rbp-578h]
  __int64 v238; // [rsp+40h] [rbp-568h]
  __int64 v239; // [rsp+40h] [rbp-568h]
  size_t v240; // [rsp+40h] [rbp-568h]
  _BYTE *v241; // [rsp+40h] [rbp-568h]
  size_t v242; // [rsp+40h] [rbp-568h]
  _BYTE *v243; // [rsp+40h] [rbp-568h]
  __int64 v244; // [rsp+40h] [rbp-568h]
  __int64 v245; // [rsp+48h] [rbp-560h]
  char v246[8]; // [rsp+58h] [rbp-550h] BYREF
  __int64 v247; // [rsp+60h] [rbp-548h] BYREF
  void *v248; // [rsp+68h] [rbp-540h] BYREF
  void *v249; // [rsp+70h] [rbp-538h] BYREF
  _QWORD *v250; // [rsp+78h] [rbp-530h] BYREF
  __int64 v251; // [rsp+80h] [rbp-528h] BYREF
  _QWORD *v252; // [rsp+88h] [rbp-520h]
  void *ptr; // [rsp+90h] [rbp-518h] BYREF
  __int64 v254; // [rsp+98h] [rbp-510h]
  int v255; // [rsp+A0h] [rbp-508h]
  __int64 v256; // [rsp+B0h] [rbp-4F8h] BYREF
  void *v257; // [rsp+D0h] [rbp-4D8h] BYREF
  __int64 v258; // [rsp+D8h] [rbp-4D0h]
  char v259; // [rsp+E0h] [rbp-4C8h] BYREF
  char v260[376]; // [rsp+E8h] [rbp-4C0h] BYREF
  __int64 v261; // [rsp+260h] [rbp-348h]
  _OWORD v262[2]; // [rsp+268h] [rbp-340h] BYREF
  __m128i v263; // [rsp+288h] [rbp-320h]
  _BYTE v264[19]; // [rsp+298h] [rbp-310h]
  __m128i v265; // [rsp+2B0h] [rbp-2F8h] BYREF
  __m128i v266; // [rsp+2C0h] [rbp-2E8h]
  void *dest; // [rsp+2D0h] [rbp-2D8h] BYREF
  __int64 v268; // [rsp+2D8h] [rbp-2D0h]
  _QWORD v269[2]; // [rsp+2E0h] [rbp-2C8h] BYREF
  void *v270; // [rsp+2F0h] [rbp-2B8h]
  __int64 v271; // [rsp+2F8h] [rbp-2B0h]
  char v272[16]; // [rsp+300h] [rbp-2A8h] BYREF
  __int128 v273; // [rsp+310h] [rbp-298h]
  __int64 v274; // [rsp+320h] [rbp-288h]
  char v275; // [rsp+328h] [rbp-280h]
  __int64 v276; // [rsp+32Ch] [rbp-27Ch]
  __int16 v277; // [rsp+334h] [rbp-274h]
  __int64 v278; // [rsp+338h] [rbp-270h]
  __int64 v279; // [rsp+340h] [rbp-268h]
  int v280; // [rsp+348h] [rbp-260h]
  char v281; // [rsp+34Ch] [rbp-25Ch]
  int v282; // [rsp+350h] [rbp-258h]
  __int64 v283; // [rsp+358h] [rbp-250h]
  __m128i v284; // [rsp+360h] [rbp-248h] BYREF
  __m128i v285; // [rsp+370h] [rbp-238h]
  __m128i v286; // [rsp+380h] [rbp-228h]
  __m128i v287; // [rsp+390h] [rbp-218h]
  __m128i v288; // [rsp+3A0h] [rbp-208h]
  __m128i v289; // [rsp+3B0h] [rbp-1F8h]
  __m128i v290; // [rsp+3C0h] [rbp-1E8h]
  __m128i v291; // [rsp+3D0h] [rbp-1D8h]
  _BYTE v292[19]; // [rsp+3E0h] [rbp-1C8h]
  _BYTE v293[25]; // [rsp+3F4h] [rbp-1B4h]
  __m128i v294; // [rsp+410h] [rbp-198h] BYREF
  int v295; // [rsp+420h] [rbp-188h]
  _BYTE v296[12]; // [rsp+424h] [rbp-184h] BYREF
  int v297; // [rsp+430h] [rbp-178h] BYREF
  char v298; // [rsp+434h] [rbp-174h]
  __int64 v299; // [rsp+438h] [rbp-170h]
  __int16 v300; // [rsp+440h] [rbp-168h]
  int v301; // [rsp+444h] [rbp-164h]
  char v302; // [rsp+448h] [rbp-160h]
  int v303; // [rsp+44Ch] [rbp-15Ch]
  __int128 v304; // [rsp+450h] [rbp-158h]
  __m128i si128; // [rsp+460h] [rbp-148h]
  int v306; // [rsp+470h] [rbp-138h]
  char v307; // [rsp+474h] [rbp-134h]
  _BYTE v308[24]; // [rsp+478h] [rbp-130h]
  char v309; // [rsp+490h] [rbp-118h]
  __int64 v310; // [rsp+494h] [rbp-114h]
  char v311; // [rsp+49Ch] [rbp-10Ch]
  __int64 v312; // [rsp+4A0h] [rbp-108h]
  __int16 v313; // [rsp+4A8h] [rbp-100h]
  __int64 v314; // [rsp+4ACh] [rbp-FCh]
  __int64 v315; // [rsp+4B4h] [rbp-F4h]
  char v316; // [rsp+4BCh] [rbp-ECh]
  __int64 v317; // [rsp+4C0h] [rbp-E8h]
  __int64 v318; // [rsp+4C8h] [rbp-E0h]
  char v319; // [rsp+4D0h] [rbp-D8h]
  __int128 v320; // [rsp+4D8h] [rbp-D0h]
  int v321; // [rsp+4E8h] [rbp-C0h]
  char v322; // [rsp+4ECh] [rbp-BCh]
  __int64 v323; // [rsp+4F0h] [rbp-B8h]
  __int64 v324; // [rsp+4F8h] [rbp-B0h]
  __m128i v325; // [rsp+500h] [rbp-A8h]
  int v326; // [rsp+510h] [rbp-98h]
  __int64 v327; // [rsp+518h] [rbp-90h]
  int v328; // [rsp+520h] [rbp-88h]
  __int64 v329; // [rsp+528h] [rbp-80h]
  int v330; // [rsp+530h] [rbp-78h]
  __int16 v331; // [rsp+534h] [rbp-74h]
  int v332; // [rsp+538h] [rbp-70h]
  __int64 v333; // [rsp+53Ch] [rbp-6Ch]
  char v334; // [rsp+544h] [rbp-64h]
  __int64 v335; // [rsp+548h] [rbp-60h]
  char v336; // [rsp+550h] [rbp-58h]
  __int64 v337; // [rsp+558h] [rbp-50h] BYREF
  _QWORD v338[9]; // [rsp+560h] [rbp-48h] BYREF

  v229 = a2;
  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v5 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v5, "(smt.tactic start)\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_EE4940(v246, "smt", *a2);
  v6 = *(_QWORD *)(a1 + 16);
  v261 = a1;
  *(_QWORD *)&v262[0] = 0x100000001LL;
  v263.m128i_i64[0] = 0x1FFFFFFFFLL;
  ptr = nullptr;
  v256 = 0;
  v257 = nullptr;
  sub_15B6DB0(v262, &v257);
  sub_18572D0(&v257);
  v263.m128i_i16[3] = 0;
  v263.m128i_i64[1] = 0;
  *(_WORD *)&v264[16] = 1;
  v264[18] = 1;
  *(__m128i *)v264 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(v262, &v256);
  sub_18572D0(&v256);
  v257 = nullptr;
  v265.m128i_i64[1] = 0x3FB999999999999ALL;
  v265.m128i_i64[0] = 1;
  v266.m128i_i64[0] = 0x7D00000000ALL;
  v266.m128i_i64[1] = 0x3FE999999999999ALL;
  sub_15B81B0(&v265, &v257);
  sub_18572D0(&v257);
  v257 = nullptr;
  v235 = v269;
  dest = v269;
  v7 = (__m128i *)operator new(0x16u);
  dest = v7;
  *v7 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
  strcpy(&v7->m128i_i8[13], "eration)");
  v270 = v272;
  v269[0] = 21;
  v274 = 0x200000000LL;
  v268 = 21;
  v276 = 0xFFFFFFFFLL;
  v278 = 0x1000000FFFFFFFFLL;
  strcpy(v272, "cost");
  v271 = 4;
  v275 = 0;
  v277 = 257;
  v279 = 0x100000001LL;
  v280 = 1000;
  v281 = 0;
  v282 = 10;
  v283 = 0;
  v273 = xmmword_18B64B0;
  sub_15AFF30(&dest, &v257);
  sub_18572D0(&v257);
  v284.m128i_i64[0] = 0x600000000LL;
  v284.m128i_i64[1] = 0x3E800000000LL;
  v285.m128i_i64[0] = 0x200000001LL;
  v289.m128i_i64[0] = 0x200000001LL;
  v290 = (__m128i)0xFFFFFFFFuLL;
  v285.m128i_i64[1] = 0x8000000101LL;
  v291.m128i_i64[1] = 0x20000000101LL;
  v286 = (__m128i)0x100000010uLL;
  *(_QWORD *)v292 = 0x600000100LL;
  v257 = nullptr;
  v287.m128i_i64[0] = 0xFFFFFC1800000000LL;
  v287.m128i_i64[1] = 1000;
  v289.m128i_i64[1] = 0x10000;
  v291.m128i_i64[0] = 1;
  *(_QWORD *)&v292[8] = 0x40000000001LL;
  *(_WORD *)&v292[16] = 257;
  v292[18] = 1;
  v288 = (__m128i)xmmword_18B64C0;
  sub_15B26B0(&v284, &v257);
  v227 = (__int64 *)&v257;
  sub_18572D0(&v257);
  *(_QWORD *)&v293[12] = 0x1000100000001LL;
  v294.m128i_i64[0] = 0x10000000001LL;
  *(_WORD *)v293 = 256;
  *(_DWORD *)&v293[4] = 3;
  *(_WORD *)&v293[8] = 256;
  *(_DWORD *)&v293[20] = 10;
  v293[24] = 0;
  v257 = nullptr;
  v294.m128i_i64[1] = 0x100017FFFFFFFLL;
  v295 = 0;
  sub_15B7350(&v294, &v257);
  sub_18572D0(&v257);
  v257 = nullptr;
  *(_DWORD *)v296 = 0;
  *(_QWORD *)&v296[4] = 0x13FFFFFFFLL;
  sub_15B3AA0(v296, &v257);
  sub_18572D0(&v257);
  v257 = nullptr;
  v297 = 1000;
  v298 = 1;
  sub_15B6C70(&v297, &v257);
  sub_18572D0(&v257);
  v310 = 0x10100000003E8LL;
  v304 = xmmword_18B64D0;
  v315 = 0x2000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v317 = 0x6400000001LL;
  *(__m128i *)&v308[8] = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v300 = 257;
  v318 = 0x3FF199999999999ALL;
  v299 = 1;
  v301 = 2;
  v302 = 0;
  v303 = 0;
  v306 = 100;
  v307 = 1;
  *(_DWORD *)v308 = -1;
  v309 = 1;
  v311 = 0;
  v312 = 0;
  v313 = 256;
  v314 = 1;
  v316 = 0;
  v319 = 1;
  v321 = 0;
  v322 = 0;
  v320 = xmmword_18B6500;
  v323 = 0x138800000064LL;
  v324 = 0x3FF199999999999ALL;
  v327 = 0x3FF0000000000000LL;
  v326 = 6;
  v328 = 0;
  v330 = 0x1000000;
  v329 = 0;
  v331 = 0;
  v332 = 0;
  v333 = 0x100000000000100LL;
  v325 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  sub_180C5A0(&v337, "auto");
  sub_15B65B0(v262, &ptr);
  sub_18572D0(&ptr);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v9 = *(_DWORD *)(a1 + 87);
  v338[0] = 0;
  v10 = *(_QWORD *)(a1 + 136);
  v262[0] = v8;
  v262[1] = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v263 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  *(__m128i *)v264 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  *(_DWORD *)&v264[15] = v9;
  v12 = dest;
  v265 = v11;
  v266 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  if ( dest == v269 )
  {
    if ( v10 <= 0xF )
    {
LABEL_6:
      if ( !v10 )
        goto LABEL_7;
      goto LABEL_158;
    }
    if ( (v10 & 0x8000000000000000LL) == 0LL )
    {
      v109 = 30;
      if ( v10 >= 0x1E )
        v109 = v10;
LABEL_154:
      v110 = v109 + 1;
      if ( v109 + 1 < 0 )
        goto LABEL_218;
      goto LABEL_155;
    }
LABEL_388:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v269[0] >= v10 )
    goto LABEL_6;
  if ( (v10 & 0x8000000000000000LL) != 0LL )
    goto LABEL_388;
  v109 = 2LL * v269[0];
  if ( v10 >= 2LL * v269[0] )
  {
    v109 = v10;
    goto LABEL_154;
  }
  v110 = v109 + 1;
  if ( (v269[0] & 0x4000000000000000LL) != 0 )
LABEL_218:
    std::__throw_bad_alloc();
LABEL_155:
  v240 = v10;
  v12 = (_BYTE *)operator new(v110);
  v10 = v240;
  if ( dest != v269 )
  {
    v241 = v12;
    na = v10;
    operator delete(dest, v269[0] + 1LL);
    v12 = v241;
    v10 = na;
  }
  dest = v12;
  v269[0] = v109;
LABEL_158:
  v111 = *(_BYTE **)(a1 + 128);
  if ( v10 == 1 )
  {
    *v12 = *v111;
    v12 = dest;
  }
  else
  {
    nb = v10;
    memcpy(v12, v111, v10);
    v12 = dest;
    v10 = nb;
  }
LABEL_7:
  v268 = v10;
  v12[v10] = 0;
  v13 = v270;
  v14 = *(_QWORD *)(a1 + 168);
  if ( v270 == v272 )
  {
    if ( v14 <= 0xF )
    {
LABEL_9:
      if ( !v14 )
        goto LABEL_10;
      goto LABEL_166;
    }
    if ( (v14 & 0x8000000000000000LL) == 0LL )
    {
      if ( v14 <= 0x1D )
      {
        v113 = 31;
        v112 = 30;
        goto LABEL_163;
      }
      goto LABEL_162;
    }
LABEL_387:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( *(_QWORD *)v272 >= v14 )
    goto LABEL_9;
  if ( (v14 & 0x8000000000000000LL) != 0LL )
    goto LABEL_387;
  v112 = 2LL * *(_QWORD *)v272;
  if ( v14 < 2LL * *(_QWORD *)v272 )
  {
    v113 = v112 + 1;
    if ( (*(_QWORD *)v272 & 0x4000000000000000LL) == 0 )
      goto LABEL_163;
LABEL_352:
    std::__throw_bad_alloc();
  }
LABEL_162:
  v112 = *(_QWORD *)(a1 + 168);
  v113 = v14 + 1;
  if ( (__int64)(v14 + 1) < 0 )
    goto LABEL_352;
LABEL_163:
  v242 = *(_QWORD *)(a1 + 168);
  v13 = (_BYTE *)operator new(v113);
  v14 = v242;
  if ( v270 != v272 )
  {
    v243 = v13;
    nc = v14;
    operator delete(v270, *(_QWORD *)v272 + 1LL);
    v13 = v243;
    v14 = nc;
  }
  v270 = v13;
  *(_QWORD *)v272 = v112;
LABEL_166:
  v114 = *(_BYTE **)(a1 + 160);
  if ( v14 == 1 )
  {
    *v13 = *v114;
    v13 = v270;
  }
  else
  {
    nd = v14;
    memcpy(v13, v114, v14);
    v13 = v270;
    v14 = nd;
  }
LABEL_10:
  v271 = v14;
  v13[v14] = 0;
  v15 = *(_OWORD *)(a1 + 192);
  v16 = *(_DWORD *)(a1 + 248);
  v274 = *(_QWORD *)(a1 + 208);
  v17 = *(_BYTE *)(a1 + 216);
  v273 = v15;
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 272));
  v19 = *(_QWORD *)(a1 + 240);
  v275 = v17;
  v20 = *(_QWORD *)(a1 + 220);
  v284 = v18;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 288));
  v22 = *(_QWORD *)(a1 + 232);
  v276 = v20;
  LOWORD(v20) = *(_WORD *)(a1 + 228);
  v285 = v21;
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 304));
  v277 = v20;
  LOBYTE(v20) = *(_BYTE *)(a1 + 252);
  v286 = v23;
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 320));
  v281 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 256);
  v280 = v16;
  v282 = v20;
  v25 = *(_QWORD *)(a1 + 264);
  v278 = v22;
  v283 = v25;
  v279 = v19;
  v287 = v24;
  LODWORD(v25) = *(_DWORD *)(a1 + 415);
  v288 = _mm_loadu_si128((const __m128i *)(a1 + 336));
  v289 = _mm_loadu_si128((const __m128i *)(a1 + 352));
  v290 = _mm_loadu_si128((const __m128i *)(a1 + 368));
  v291 = _mm_loadu_si128((const __m128i *)(a1 + 384));
  *(__m128i *)v292 = _mm_loadu_si128((const __m128i *)(a1 + 400));
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 420));
  *(_DWORD *)&v292[15] = v25;
  LODWORD(v25) = *(_DWORD *)(a1 + 464);
  *(__m128i *)v293 = v26;
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 429));
  v295 = v25;
  v28 = *(_QWORD *)(a1 + 468);
  *(__m128i *)&v293[9] = v27;
  v29 = _mm_loadu_si128((const __m128i *)(a1 + 448));
  *(_QWORD *)v296 = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 476);
  v294 = v29;
  *(_DWORD *)&v296[8] = v28;
  v297 = *(_DWORD *)(a1 + 480);
  v298 = *(_BYTE *)(a1 + 484);
  v299 = *(_QWORD *)(a1 + 488);
  v30 = *(_OWORD *)(a1 + 512);
  v31 = *(_QWORD *)(a1 + 580);
  v300 = *(_WORD *)(a1 + 496);
  LODWORD(v28) = *(_DWORD *)(a1 + 500);
  v304 = v30;
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 528));
  v301 = v28;
  LOBYTE(v28) = *(_BYTE *)(a1 + 504);
  v310 = v31;
  v33 = *(_QWORD *)(a1 + 604);
  v302 = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 508);
  si128 = v32;
  v34 = _mm_loadu_si128((const __m128i *)(a1 + 552));
  v303 = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 544);
  *(__m128i *)v308 = v34;
  v306 = v28;
  v307 = *(_BYTE *)(a1 + 548);
  *(_QWORD *)&v308[16] = *(_QWORD *)(a1 + 568);
  v309 = *(_BYTE *)(a1 + 576);
  v311 = *(_BYTE *)(a1 + 588);
  v312 = *(_QWORD *)(a1 + 592);
  v313 = *(_WORD *)(a1 + 600);
  LOBYTE(v28) = *(_BYTE *)(a1 + 620);
  v314 = v33;
  v34.m128i_i64[0] = *(_QWORD *)(a1 + 632);
  v316 = v28;
  v35 = *(_QWORD *)(a1 + 624);
  v318 = v34.m128i_i64[0];
  v36 = *(_QWORD *)(a1 + 612);
  v37 = *(_OWORD *)(a1 + 648);
  v317 = v35;
  LOBYTE(v35) = *(_BYTE *)(a1 + 640);
  v320 = v37;
  *(_QWORD *)&v37 = *(_QWORD *)(a1 + 680);
  v319 = v35;
  LODWORD(v35) = *(_DWORD *)(a1 + 664);
  v324 = v37;
  v38 = _mm_loadu_si128((const __m128i *)(a1 + 688));
  v321 = v35;
  LOBYTE(v35) = *(_BYTE *)(a1 + 668);
  v325 = v38;
  v38.m128i_i64[0] = *(_QWORD *)(a1 + 712);
  v322 = v35;
  v39 = *(_QWORD *)(a1 + 672);
  v327 = v38.m128i_i64[0];
  v323 = v39;
  LODWORD(v39) = *(_DWORD *)(a1 + 704);
  v315 = v36;
  v326 = v39;
  v328 = *(_DWORD *)(a1 + 720);
  v329 = *(_QWORD *)(a1 + 728);
  v330 = *(_DWORD *)(a1 + 736);
  v331 = *(_WORD *)(a1 + 740);
  v38.m128i_i64[0] = *(_QWORD *)(a1 + 760);
  v332 = *(_DWORD *)(a1 + 744);
  v40 = *(_QWORD *)(a1 + 748);
  v335 = v38.m128i_i64[0];
  v333 = v40;
  v334 = *(_BYTE *)(a1 + 756);
  v336 = *(_BYTE *)(a1 + 768);
  v337 = *(_QWORD *)(a1 + 776);
  sub_1858C20(v338);
  n = v338;
  sub_1863170(v338, a1 + 784);
  v41 = sub_186B270(8u);
  sub_8E4C30(v41, v6, v262, v338);
  sub_8E35E0(v41, *(_QWORD *)(a1 + 840));
  v42 = *(__int64 **)(a1 + 848);
  if ( v42 )
    sub_8E3600(v41);
  v43 = (_QWORD *)(a1 + 832);
  _InterlockedExchange64((volatile __int64 *)(a1 + 832), v41);
  v44 = *(_QWORD *)(a1 + 16);
  v252 = nullptr;
  v251 = v44;
  v45 = (_OWORD *)sub_186B270(0x80u);
  ptr = v45;
  *v45 = 0;
  v45[7] = 0;
  v45[1] = 0;
  v45[2] = 0;
  v45[3] = 0;
  v45[4] = 0;
  v45[5] = 0;
  v45[6] = 0;
  v254 = 8;
  v255 = 0;
  v46 = *v229;
  v247 = 0;
  v248 = nullptr;
  if ( (*((_BYTE *)v46 + 123) & 0x10) != 0 )
  {
    v42 = &v251;
    sub_E5B080(v229, &v251, &v247, &ptr, &v248);
    if ( (*((_BYTE *)*v229 + 123) & 8) != 0 && v247 && *(_DWORD *)(v247 - 4) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_10B13E(
        (__int64 *)&v257,
        "smt tactic does not support simultaneous generation of proofs and unsat cores",
        v154);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &v257);
      sub_233E40((__int64)&v257);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v62 = v252;
    if ( v252 )
    {
      v63 = 0;
      do
      {
        if ( v63 >= *((_DWORD *)v62 - 1) )
          break;
        v42 = (__int64 *)v252[v63];
        sub_8E3610(*v43);
        v62 = v252;
        ++v63;
      }
      while ( v252 );
    }
  }
  else
  {
    v47 = *((_BYTE *)v46 + 123) & 8;
    v48 = v46[9];
    if ( !(_DWORD)v47 )
    {
      if ( !v48 )
        goto LABEL_44;
      v47 = *(unsigned __int8 *)(v48 + 3);
      for ( LOBYTE(v47) = (unsigned __int8)v47 >> 6; !(_BYTE)v47; LOBYTE(v47) = (unsigned __int8)v47 >> 6 )
      {
        v48 = *(_QWORD *)(v48 + 16);
        v47 = *(unsigned __int8 *)(v48 + 3);
      }
      if ( (_BYTE)v47 == 1 )
        v115 = (unsigned int)(*(_DWORD *)(v48 + 4) + 1);
      else
        v115 = (_BYTE)v47 == 2 ? (unsigned int)(*(_DWORD *)(v48 + 4) - 1) : *(unsigned int *)(v48 + 4);
      if ( !(_DWORD)v115 )
        goto LABEL_44;
      v116 = 0;
LABEL_177:
      v117 = *v43;
      v118 = *v229;
      v119 = **v229;
      if ( (*((_BYTE *)*v229 + 123) & 0x20) != 0 )
      {
        v42 = *(__int64 **)(v119 + 864);
        goto LABEL_176;
      }
      v120 = v118[9];
      v121 = 18;
      while ( 1 )
      {
        if ( !--v121 )
        {
          sub_233F80((__int64 *)(v119 + 616), (_DWORD *)v118 + 18);
          v122 = (__int64 **)(*(_QWORD *)(v118[9] + 16) + 8 * v116);
          goto LABEL_183;
        }
        if ( *(char *)(v120 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v120 + 4) == (_DWORD)v116 )
          {
            v122 = (__int64 **)(v120 + 8);
LABEL_183:
            v42 = *v122;
LABEL_176:
            sub_8E3610(v117);
            if ( ++v116 == v115 )
              goto LABEL_44;
            goto LABEL_177;
          }
        }
        else if ( *(_BYTE *)(v120 + 3) >> 6 != 2 )
        {
          v122 = (__int64 **)(*(_QWORD *)(v120 + 16) + 8 * v116);
          goto LABEL_183;
        }
        v120 = *(_QWORD *)(v120 + 16);
      }
    }
    if ( v48 )
    {
      v47 = *(unsigned __int8 *)(v48 + 3);
      for ( LOBYTE(v47) = (unsigned __int8)v47 >> 6; !(_BYTE)v47; LOBYTE(v47) = (unsigned __int8)v47 >> 6 )
      {
        v48 = *(_QWORD *)(v48 + 16);
        v47 = *(unsigned __int8 *)(v48 + 3);
      }
      if ( (_BYTE)v47 == 1 )
        v49 = *(_DWORD *)(v48 + 4) + 1;
      else
        v49 = (_BYTE)v47 == 2 ? *(_DWORD *)(v48 + 4) - 1 : *(_DWORD *)(v48 + 4);
      if ( v49 )
      {
        v50 = 0;
        for ( i = 0; i != v49; ++i )
        {
          v54 = *v43;
          v55 = *v229;
          v53 = (*v229)[11];
          v56 = **v229;
          if ( !v53 )
            goto LABEL_24;
          v57 = (*v229)[11];
          v58 = *(_BYTE *)(v53 + 3) >> 6;
          if ( v58 )
          {
            if ( v58 != 1 )
              goto LABEL_30;
          }
          else
          {
            do
            {
              v57 = *(_QWORD *)(v57 + 16);
              v58 = *(_BYTE *)(v57 + 3) >> 6;
            }
            while ( !v58 );
            if ( v58 != 1 )
            {
LABEL_30:
              if ( v58 == 2 )
                v59 = *(_DWORD *)(v57 + 4) - 1;
              else
                v59 = *(_DWORD *)(v57 + 4);
              if ( i >= v59 )
              {
LABEL_225:
                v53 = 0;
                if ( (*((_BYTE *)v55 + 123) & 0x20) != 0 )
                  goto LABEL_25;
                goto LABEL_226;
              }
              goto LABEL_33;
            }
          }
          if ( i >= *(_DWORD *)(v57 + 4) + 1 )
            goto LABEL_225;
LABEL_33:
          v60 = 17;
          while ( 1 )
          {
            if ( *(char *)(v53 + 3) < 0 )
            {
              if ( *(_BYTE *)(v53 + 3) >> 6 != 2 )
              {
                v52 = (__int64 *)(v50 + *(_QWORD *)(v53 + 16));
                goto LABEL_23;
              }
              goto LABEL_36;
            }
            if ( i == *(_DWORD *)(v53 + 4) )
              break;
LABEL_36:
            v53 = *(_QWORD *)(v53 + 16);
            if ( !--v60 )
            {
              v238 = *v43;
              sub_233F80((__int64 *)(v56 + 616), (_DWORD *)v55 + 22);
              v54 = v238;
              v61 = *(_QWORD *)(v55[11] + 16);
              v55 = *v229;
              v52 = (__int64 *)(v50 + v61);
              v56 = **v229;
              goto LABEL_23;
            }
          }
          v52 = (__int64 *)(v53 + 8);
LABEL_23:
          v53 = *v52;
LABEL_24:
          if ( (*((_BYTE *)v55 + 123) & 0x20) != 0 )
          {
LABEL_25:
            v42 = *(__int64 **)(v56 + 864);
            goto LABEL_26;
          }
LABEL_226:
          v155 = v55[9];
          v156 = 18;
          while ( 2 )
          {
            if ( !--v156 )
            {
              v245 = v54;
              v244 = v53;
              sub_233F80((__int64 *)(v56 + 616), (_DWORD *)v55 + 18);
              v53 = v244;
              v54 = v245;
              v157 = (__int64 **)(v50 + *(_QWORD *)(v55[9] + 16));
              goto LABEL_231;
            }
            if ( *(char *)(v155 + 3) < 0 )
            {
              if ( *(_BYTE *)(v155 + 3) >> 6 != 2 )
              {
                v157 = (__int64 **)(v50 + *(_QWORD *)(v155 + 16));
                goto LABEL_231;
              }
              goto LABEL_271;
            }
            if ( i != *(_DWORD *)(v155 + 4) )
            {
LABEL_271:
              v155 = *(_QWORD *)(v155 + 16);
              continue;
            }
            break;
          }
          v157 = (__int64 **)(v155 + 8);
LABEL_231:
          v42 = *v157;
LABEL_26:
          sub_8E3670(v54, v42, v53);
          v50 += 8;
        }
      }
    }
  }
LABEL_44:
  if ( (unsigned __int8)sub_8E3A90(*(_QWORD *)(a1 + 832), v42, v47) )
  {
    v223 = (char **)__cxa_allocate_exception(0x28u);
    sub_10B13E((__int64 *)&v257, (const char *)off_1C7E180, v224);
    *v223 = (char *)off_1C63670;
    sub_2333C0(v223 + 1, &v257);
    sub_233E40((__int64)&v257);
    __cxa_throw(v223, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  if ( *(_QWORD *)(a1 + 904) )
  {
    sub_8E3B00(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 904), a1 + 912, a1 + 944, a1 + 976);
    if ( *(_QWORD *)(a1 + 1024) )
      sub_8E49C0(
        *(_QWORD *)(a1 + 832),
        a1 + 1008,
        v64,
        v65,
        v66,
        v67,
        (unsigned int)&v257,
        (_DWORD)v229,
        (unsigned int)v338,
        (__int64)v269);
    if ( *(_QWORD *)(a1 + 1056) )
      sub_8E4A90(
        *(_QWORD *)(a1 + 832),
        a1 + 1040,
        v64,
        v65,
        v66,
        v67,
        (_DWORD)v227,
        (_DWORD)v229,
        (_DWORD)n,
        (__int64)v235);
    if ( *(_QWORD *)(a1 + 1088) )
      sub_8E48F0(
        *(_QWORD *)(a1 + 832),
        a1 + 1072,
        v64,
        v65,
        v66,
        v67,
        (_DWORD)v227,
        (_DWORD)v229,
        (_DWORD)n,
        (__int64)v235);
    if ( *(_QWORD *)(a1 + 1120) )
      sub_8E4820(
        *(_QWORD *)(a1 + 832),
        a1 + 1104,
        v64,
        v65,
        v66,
        v67,
        (_DWORD)v227,
        (_DWORD)v229,
        (_DWORD)n,
        (__int64)v235);
    if ( *(_QWORD *)(a1 + 1152) )
      sub_8E4730(
        *(_QWORD *)(a1 + 832),
        a1 + 1136,
        v64,
        v65,
        v66,
        v67,
        (_DWORD)v227,
        (_DWORD)v229,
        (_DWORD)n,
        (__int64)v235);
    if ( *(_QWORD *)(a1 + 1184) )
      sub_8E4660(
        *(_QWORD *)(a1 + 832),
        a1 + 1168,
        v64,
        v65,
        v66,
        v67,
        (_DWORD)v227,
        (_DWORD)v229,
        (_DWORD)n,
        (__int64)v235);
    v68 = *(_QWORD **)(a1 + 800);
    if ( v68 )
    {
      for ( j = &v68[*((unsigned int *)v68 - 1)]; j != v68; ++v68 )
        sub_8E4800(*v43, *v68);
    }
    v70 = *(_QWORD *)(a1 + 808);
    if ( v70 )
    {
      for ( k = v70 + 32LL * *(unsigned int *)(v70 - 4); k != v70; v70 += 32 )
        sub_8E3C00(*v43);
    }
    if ( v247 && *(_DWORD *)(v247 - 4) || *(_QWORD *)(a1 + 904) )
      goto LABEL_67;
LABEL_186:
    v73 = sub_8E3720(*(_QWORD *)(a1 + 832));
    goto LABEL_70;
  }
  if ( !v247 || !*(_DWORD *)(v247 - 4) )
    goto LABEL_186;
LABEL_67:
  if ( v247 )
    v72 = *(unsigned int *)(v247 - 4);
  else
    v72 = 0;
  v73 = sub_8E3730(*(_QWORD *)(a1 + 832), v72, v247);
LABEL_70:
  v74 = a1 + 816;
  v75 = v73;
  sub_8E3A50(*(_QWORD *)(a1 + 832));
  v239 = *(_QWORD *)(a1 + 16);
  v76 = sub_8E3790(*(_QWORD *)(a1 + 832));
  v78 = v76;
  if ( v76 )
  {
    v79 = *(_DWORD *)(v76 + 8);
    v77 = (unsigned int)(v79 + 1);
    *(_DWORD *)(v78 + 8) = v77;
    if ( v75 )
    {
      if ( v75 != 1 )
      {
        if ( v75 != -1 )
        {
          *(_DWORD *)(v78 + 8) = v79;
          if ( !v79 )
          {
            v74 = v78;
            sub_15D7BC0(v239, v78);
          }
          goto LABEL_76;
        }
LABEL_102:
        if ( *(_BYTE *)(a1 + 857) && !(unsigned __int8)sub_ED2AF0(*v229, v74) )
        {
          v215 = (char **)__cxa_allocate_exception(0x28u);
          sub_10B13E(v227, "under-approximated goal found to be unsat", v216);
          *v215 = (char *)off_1C63670;
          sub_2333C0(v215 + 1, v227);
          sub_233E40((__int64)v227);
          __cxa_throw(v215, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        sub_ED2DA0(*v229);
        if ( (*((_BYTE *)*v229 + 123) & 0x10) != 0 && (v228 = sub_8E37A0(*(_QWORD *)(a1 + 832))) != 0 )
        {
          v162 = 0;
          v91 = nullptr;
          do
          {
            v163 = sub_8E37C0(*v43, v162);
            v164 = (char *)ptr;
            v165 = *(_DWORD *)(v163 + 12);
            v166 = 16LL * (unsigned int)v254;
            v167 = (char *)ptr + v166;
            v168 = 16LL * (v165 & (unsigned int)(v254 - 1));
            v169 = (char *)ptr + v168;
            if ( v168 != v166 )
            {
              for ( m = (char *)ptr + v168; v167 != m; m += 16 )
              {
                v171 = *(char **)m;
                if ( *(_QWORD *)m > 1u )
                {
                  if ( *((_DWORD *)v171 + 3) == v165 && (char *)v163 == v171 )
                  {
                    v171 = m;
                    goto LABEL_256;
                  }
                }
                else if ( !v171 )
                {
                  goto LABEL_256;
                }
              }
            }
            if ( ptr == v169 )
            {
LABEL_281:
              v171 = nullptr;
            }
            else
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v171 = *(char **)v164;
                  if ( *(_QWORD *)v164 > 1u )
                    break;
                  if ( !v171 )
                    goto LABEL_256;
                  v164 += 16;
                  if ( v169 == v164 )
                    goto LABEL_281;
                }
                if ( *((_DWORD *)v171 + 3) == v165 && (char *)v163 == v171 )
                  break;
                v164 += 16;
                if ( v169 == v164 )
                  goto LABEL_281;
              }
              v171 = v164;
            }
LABEL_256:
            v172 = *(_QWORD *)(a1 + 16);
            v173 = sub_15D3210(v172, *((_QWORD *)v171 + 1));
            if ( v91 )
            {
              if ( v173 )
              {
                v237 = (_DWORD *)v173;
                if ( (_DWORD *)v173 != v91 )
                {
                  v174 = (_QWORD *)sub_17E9C90(*(_QWORD *)(v172 + 656), 24);
                  v89 = v237;
                  *v91 = (*v91 + 1) & 0x3FFFFFFF | *v91 & 0xC0000000;
                  *v237 = (*v237 + 1) & 0x3FFFFFFF | *v237 & 0xC0000000;
                  *v174 = 0;
                  v174[2] = v237;
                  v174[1] = v91;
                  v91 = v174;
                }
              }
            }
            else
            {
              v91 = (_DWORD *)v173;
            }
            ++v162;
          }
          while ( v228 != v162 );
        }
        else
        {
          v91 = nullptr;
        }
        v92 = *(_QWORD *)(a1 + 16);
        v93 = *(unsigned int *)(v92 + 712);
        v94 = *(_QWORD *)(v92 + 864);
        if ( (_DWORD)v93 )
        {
          if ( v78 )
            goto LABEL_108;
          v211 = sub_15DE060(v92, v94, v89, v93, v90);
          v92 = *(_QWORD *)(a1 + 16);
          v78 = v211;
          if ( v211 )
          {
            ++*(_DWORD *)(v211 + 8);
LABEL_108:
            v94 = *(_QWORD *)(v78 + 8LL * (unsigned int)(*(_DWORD *)(v78 + 24) - 1) + 32);
            if ( *(_QWORD *)(v92 + 864) != v94 )
            {
              v95 = sub_15DE060(v92, *(_QWORD *)(v92 + 864), v89, v93, v90);
              v96 = v95;
              if ( v95 )
                ++*(_DWORD *)(v95 + 8);
              v81 = (*(_DWORD *)(v78 + 8))-- == 1;
              if ( v81 )
                sub_15D7BC0(v239, v78);
              v78 = v96;
              v94 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL);
            }
            goto LABEL_114;
          }
          v94 = *(_QWORD *)(v92 + 864);
        }
        else if ( v78 )
        {
          goto LABEL_108;
        }
LABEL_114:
        sub_EDB570(*v229, v94, v78, v91);
        v97 = *v229;
        if ( *v229 )
          ++*((_DWORD *)v97 + 8);
        v98 = *(_DWORD *)(a3 + 8);
        v99 = *(_DWORD *)(a3 + 12);
        if ( v98 >= v99 )
        {
          v192 = 2 * v99;
          v100 = sub_186B270(8 * v192);
          v98 = *(_DWORD *)(a3 + 8);
          v193 = *(_QWORD **)a3;
          if ( v98 )
          {
            if ( v98 - 1 <= 2 || (_QWORD *)v100 == v193 + 1 )
            {
              for ( ii = 0; ii != v98; ++ii )
                *(_QWORD *)(v100 + ii * 8) = v193[ii];
            }
            else
            {
              v194 = 0;
              do
              {
                *(__m128i *)(v100 + v194 * 8) = _mm_loadu_si128((const __m128i *)&v193[v194]);
                v194 += 2;
              }
              while ( v194 != 2LL * (v98 >> 1) );
              if ( (v98 & 1) != 0 )
                *(_QWORD *)(v100 + 8LL * (v98 & 0xFFFFFFFE)) = v193[v98 & 0xFFFFFFFE];
            }
          }
          if ( v193 != (_QWORD *)(a3 + 16) && v193 )
          {
            sub_186B220(v193);
            v98 = *(_DWORD *)(a3 + 8);
          }
          *(_QWORD *)a3 = v100;
          *(_DWORD *)(a3 + 12) = v192;
        }
        else
        {
          v100 = *(_QWORD *)a3;
        }
        *(_QWORD *)(v100 + 8LL * v98) = v97;
        *(_DWORD *)(a3 + 8) = v98 + 1;
        goto LABEL_119;
      }
      goto LABEL_187;
    }
LABEL_199:
    if ( (unsigned __int8)sub_8E3A90(*(_QWORD *)(a1 + 832), v74, v77) )
    {
      if ( !v78 )
      {
        v225 = (char **)__cxa_allocate_exception(0x28u);
        sub_10B13E(v227, (const char *)off_1C7E180, v226);
        *v225 = (char *)off_1C63670;
        sub_2333C0(v225 + 1, v227);
        sub_233E40((__int64)v227);
        __cxa_throw(v225, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
    }
    else if ( *(_BYTE *)(a1 + 857) && *(_BYTE *)(a1 + 856) != 1 && !v78 )
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v227);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_8E37F0(&v256, *(_QWORD *)(a1 + 832));
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_233E40((__int64)&v256);
      v158 = (char **)__cxa_allocate_exception(0x28u);
      std::stringbuf::str(&v256, v260);
      *v158 = (char *)off_1C63670;
      sub_2333C0(v158 + 1, &v256);
      sub_233E40((__int64)&v256);
      __cxa_throw(v158, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v138 = *v229;
    if ( *v229 )
      ++*((_DWORD *)v138 + 8);
    v139 = *(_DWORD *)(a3 + 8);
    v140 = *(_DWORD *)(a3 + 12);
    if ( v139 >= v140 )
    {
      v195 = 2 * v140;
      v141 = sub_186B270(8 * v195);
      v139 = *(_DWORD *)(a3 + 8);
      v196 = *(_QWORD **)a3;
      if ( v139 )
      {
        if ( v139 - 1 <= 2 || (_QWORD *)v141 == v196 + 1 )
        {
          for ( jj = 0; jj != v139; ++jj )
            *(_QWORD *)(v141 + jj * 8) = v196[jj];
        }
        else
        {
          v197 = 0;
          do
          {
            *(__m128i *)(v141 + v197 * 8) = _mm_loadu_si128((const __m128i *)&v196[v197]);
            v197 += 2;
          }
          while ( 2LL * (v139 >> 1) != v197 );
          if ( (v139 & 1) != 0 )
            *(_QWORD *)(v141 + 8LL * (v139 & 0xFFFFFFFE)) = v196[v139 & 0xFFFFFFFE];
        }
      }
      if ( v196 && v196 != (_QWORD *)(a3 + 16) )
      {
        sub_186B220(v196);
        v139 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v141;
      *(_DWORD *)(a3 + 12) = v195;
    }
    else
    {
      v141 = *(_QWORD *)a3;
    }
    *(_QWORD *)(v141 + 8LL * v139) = v138;
    *(_DWORD *)(a3 + 8) = v139 + 1;
    if ( v78 )
    {
      sub_ED2DA0(*v229);
      sub_EDB570(*v229, *(_QWORD *)(v78 + 8LL * (unsigned int)(*(_DWORD *)(v78 + 24) - 1) + 32), v78, 0);
      v142 = *v229;
      *((_BYTE *)v142 + 123) = ((unsigned __int8)sub_ED2900(*((_BYTE *)*v229 + 123) >> 6, 3) << 6)
                             | *((_BYTE *)v142 + 123) & 0x3F;
      if ( !*(_BYTE *)(a1 + 856) )
        goto LABEL_120;
    }
    else if ( !*(_BYTE *)(a1 + 856) )
    {
      goto LABEL_317;
    }
    v143 = sub_8E37E0(*(_QWORD *)(a1 + 832));
    if ( v143 > 5 )
    {
      if ( v143 == 8 )
      {
LABEL_209:
        if ( (*((_BYTE *)*v229 + 123) & 4) != 0 )
        {
          v249 = nullptr;
          sub_8E3780(*(_QWORD *)(a1 + 832), &v249);
          v257 = &v259;
          v258 = 0x1000000000LL;
          sub_8E3840(*(_QWORD *)(a1 + 832), 0, v227);
          v144 = (unsigned int)v258;
          v145 = (__int64 *)v257;
          v250 = nullptr;
          if ( (_DWORD)v258 )
          {
            v146 = (_QWORD *)sub_186B270(0x18u);
            *v146 = 2;
            v147 = v146 + 1;
            v148 = &v145[v144];
            v149 = 1;
            v250 = v147;
            v150 = v147;
            while ( 1 )
            {
              v151 = *v145++;
              *v147 = v151;
              *(v150 - 1) = v149;
              if ( v148 == v145 )
                break;
              if ( *(v150 - 2) == v149 )
              {
                v198 = (3 * v149 + 1) >> 1;
                v199 = 8 * v198 + 8;
                if ( 8 * v149 + 8 >= v199 || v149 >= v198 )
                {
                  v221 = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B13E(&v256, "Overflow encountered when expanding vector", v222);
                  *v221 = (char *)off_1C63128;
                  sub_2333C0(v221 + 1, &v256);
                  sub_233E40((__int64)&v256);
                  __cxa_throw(v221, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v200 = (unsigned int *)sub_186B300(v150 - 2, v199);
                v150 = v200 + 2;
                *v200 = v198;
                v201 = v200[1];
                v250 = v150;
                v202 = v201;
                v147 = &v150[2 * v201];
                v149 = v202 + 1;
              }
              else
              {
                v152 = v149++;
                v147 = &v150[2 * v152];
              }
            }
          }
          v203 = *v229;
          v204 = sub_1336B70(v249, &v250);
          v205 = sub_1336AB0(v203[1], v204);
          v206 = v205;
          if ( v205 )
            ++*(_DWORD *)(v205 + 8);
          v207 = (void (__fastcall ***)(void *))v203[1];
          if ( v207 )
          {
            v81 = (*((_DWORD *)v207 + 2))-- == 1;
            if ( v81 )
            {
              (**v207)(v207);
              sub_186B220(v207);
            }
          }
          v208 = v250;
          v203[1] = v206;
          if ( v208 )
            sub_186B220(v208 - 1);
          if ( v257 != &v259 && v257 )
            sub_186B220(v257);
          v209 = (void (__fastcall ***)(_QWORD))v249;
          if ( v249 )
          {
            v81 = (*((_DWORD *)v249 + 4))-- == 1;
            if ( v81 )
            {
              (**v209)(v209);
              sub_186B220(v209);
            }
          }
        }
LABEL_119:
        if ( !v78 )
        {
LABEL_122:
          v101 = (void (__fastcall ***)(_QWORD))v248;
          if ( v248 )
          {
            v81 = (*((_DWORD *)v248 + 2))-- == 1;
            if ( v81 )
            {
              (**v101)(v101);
              sub_186B220(v101);
            }
          }
          if ( v247 )
            sub_186B220((void *)(v247 - 8));
          if ( ptr )
            sub_186B220(ptr);
          v102 = v252;
          if ( v252 )
          {
            v103 = (unsigned __int64)&v252[*((unsigned int *)v252 - 1)];
            if ( (unsigned __int64)v252 >= v103 )
              goto LABEL_137;
            do
            {
              while ( 1 )
              {
                v104 = *v102;
                if ( *v102 )
                {
                  v81 = (*(_DWORD *)(v104 + 8))-- == 1;
                  if ( v81 )
                    break;
                }
                if ( (unsigned __int64)++v102 >= v103 )
                  goto LABEL_136;
              }
              sub_15D7BC0(v251, v104);
              ++v102;
            }
            while ( (unsigned __int64)v102 < v103 );
LABEL_136:
            v102 = v252;
            if ( v252 )
LABEL_137:
              sub_186B220(v102 - 1);
          }
          v105 = v261;
          v106 = (pthread_mutex_t *)(v261 + 864);
          if ( &_pthread_key_create )
          {
            v107 = pthread_mutex_lock((pthread_mutex_t *)(v261 + 864));
            if ( v107 )
              std::__throw_system_error(v107);
            v105 = v261;
          }
          v88 = *(void **)(v105 + 832);
          _InterlockedExchange64((volatile __int64 *)(v261 + 832), 0);
          *(_QWORD *)(v261 + 904) = 0;
          if ( &_pthread_key_create )
            pthread_mutex_unlock(v106);
          if ( v88 )
            goto LABEL_144;
          goto LABEL_145;
        }
LABEL_120:
        v81 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v81 )
          sub_15D7BC0(v239, v78);
        goto LABEL_122;
      }
    }
    else if ( v143 > 3 )
    {
      goto LABEL_209;
    }
    if ( v78 )
      goto LABEL_120;
LABEL_317:
    v191 = (char **)__cxa_allocate_exception(0x28u);
    sub_8E37F0(v227, *(_QWORD *)(a1 + 832));
    *v191 = (char *)off_1C63670;
    sub_2333C0(v191 + 1, v227);
    sub_233E40((__int64)v227);
    __cxa_throw(v191, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  switch ( v75 )
  {
    case 0:
      goto LABEL_199;
    case 1:
LABEL_187:
      if ( *(_BYTE *)(a1 + 857) && !(unsigned __int8)sub_ED2AE0(*v229, v74) )
      {
        v217 = (char **)__cxa_allocate_exception(0x28u);
        sub_10B13E(v227, "over-approximated goal found to be sat", v218);
        *v217 = (char *)off_1C63670;
        sub_2333C0(v217 + 1, v227);
        sub_233E40((__int64)v227);
        __cxa_throw(v217, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      sub_ED2DA0(*v229);
      v123 = *v229;
      if ( *v229 )
        ++*((_DWORD *)v123 + 8);
      v124 = *(_DWORD *)(a3 + 8);
      v125 = *(_DWORD *)(a3 + 12);
      if ( v124 >= v125 )
      {
        v159 = 2 * v125;
        v126 = sub_186B270(8 * v159);
        v124 = *(_DWORD *)(a3 + 8);
        v160 = *(_QWORD **)a3;
        if ( v124 )
        {
          if ( v124 - 1 <= 2 || (_QWORD *)v126 == v160 + 1 )
          {
            v214 = 0;
            v74 = 8LL * v124;
            do
            {
              *(_QWORD *)(v126 + v214) = v160[v214 / 8];
              v214 += 8LL;
            }
            while ( v74 != v214 );
          }
          else
          {
            v161 = 0;
            do
            {
              *(__m128i *)(v126 + v161 * 8) = _mm_loadu_si128((const __m128i *)&v160[v161]);
              v161 += 2;
            }
            while ( 2LL * (v124 >> 1) != v161 );
            if ( (v124 & 1) != 0 )
              *(_QWORD *)(v126 + 8LL * (v124 & 0xFFFFFFFE)) = v160[v124 & 0xFFFFFFFE];
          }
        }
        if ( v160 != (_QWORD *)(a3 + 16) && v160 )
        {
          sub_186B220(v160);
          v124 = *(_DWORD *)(a3 + 8);
        }
        *(_QWORD *)a3 = v126;
        *(_DWORD *)(a3 + 12) = v159;
      }
      else
      {
        v126 = *(_QWORD *)a3;
      }
      v127 = v124;
      v128 = v124 + 1;
      *(_QWORD *)(v126 + 8 * v127) = v123;
      *(_DWORD *)(a3 + 8) = v128;
      if ( (*((_BYTE *)*v229 + 123) & 4) != 0 )
      {
        v249 = nullptr;
        sub_8E3780(*(_QWORD *)(a1 + 832), &v249);
        v257 = &v259;
        v258 = 0x1000000000LL;
        sub_8E3840(*(_QWORD *)(a1 + 832), 0, v227);
        v129 = (unsigned int)v258;
        v130 = (__int64 *)v257;
        v250 = nullptr;
        if ( (_DWORD)v258 )
        {
          v131 = (_QWORD *)sub_186B270(0x18u);
          v132 = v131 + 1;
          *v131 = 2;
          v133 = &v130[v129];
          v134 = 1;
          v250 = v132;
          v135 = v132;
          while ( 1 )
          {
            v136 = *v130++;
            *v132 = v136;
            *(v135 - 1) = v134;
            if ( v130 == v133 )
              break;
            if ( v134 == *(v135 - 2) )
            {
              v175 = (3 * v134 + 1) >> 1;
              v176 = 8 * v175 + 8;
              if ( 8 * v134 + 8 >= (unsigned int)v176 || v134 >= v175 )
              {
                v219 = (char **)__cxa_allocate_exception(0x28u);
                sub_10B13E(&v256, "Overflow encountered when expanding vector", v220);
                *v219 = (char *)off_1C63128;
                sub_2333C0(v219 + 1, &v256);
                sub_233E40((__int64)&v256);
                __cxa_throw(v219, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v177 = (unsigned int *)sub_186B300(v135 - 2, v176);
              v178 = v177[1];
              v135 = v177 + 2;
              *v177 = v175;
              v250 = v135;
              LODWORD(v177) = v178;
              v132 = &v135[2 * v178];
              v134 = (_DWORD)v177 + 1;
            }
            else
            {
              v137 = v134++;
              v132 = &v135[2 * v137];
            }
          }
        }
        v179 = sub_1336B70(v249, &v250);
        v180 = v248;
        v181 = (void (__fastcall ***)(void *))v179;
        if ( v179 )
        {
          ++*(_DWORD *)(v179 + 8);
          v182 = sub_1336AB0(v180, v179);
          v183 = (void (__fastcall ***)(void *))v182;
          if ( v182 )
            ++*(_DWORD *)(v182 + 8);
          v81 = (*((_DWORD *)v181 + 2))-- == 1;
          if ( v81 )
          {
            (**v181)(v181);
            sub_186B220(v181);
          }
        }
        else
        {
          v210 = sub_1336AB0(v248, 0);
          v183 = (void (__fastcall ***)(void *))v210;
          if ( v210 )
            ++*(_DWORD *)(v210 + 8);
        }
        v74 = (__int64)v183;
        v184 = *v229;
        v185 = sub_1336AB0((*v229)[1], v183);
        v186 = v185;
        if ( v185 )
          ++*(_DWORD *)(v185 + 8);
        v187 = (void (***)(void))v184[1];
        if ( v187 )
        {
          v81 = (*((_DWORD *)v187 + 2))-- == 1;
          if ( v81 )
          {
            (**v187)();
            sub_186B220(v187);
          }
        }
        v184[1] = v186;
        if ( v183 )
        {
          v81 = (*((_DWORD *)v183 + 2))-- == 1;
          if ( v81 )
          {
            (**v183)(v183);
            sub_186B220(v183);
          }
        }
        if ( v250 )
          sub_186B220(v250 - 1);
        if ( v257 != &v259 && v257 )
          sub_186B220(v257);
        v188 = (void (__fastcall ***)(_QWORD))v249;
        if ( v249 )
        {
          v81 = (*((_DWORD *)v249 + 4))-- == 1;
          if ( v81 )
          {
            (**v188)(v188);
            sub_186B220(v188);
          }
        }
      }
      if ( (unsigned __int8)sub_8E3A90(*(_QWORD *)(a1 + 832), v74, v128) )
      {
        v189 = (char **)__cxa_allocate_exception(0x28u);
        sub_10B13E(v227, (const char *)off_1C7E180, v190);
        *v189 = (char *)off_1C63670;
        sub_2333C0(v189 + 1, v227);
        sub_233E40((__int64)v227);
        __cxa_throw(v189, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      goto LABEL_119;
    case -1:
      goto LABEL_102;
  }
LABEL_76:
  v80 = (void (__fastcall ***)(void *, __int64))v248;
  if ( v248 )
  {
    v81 = (*((_DWORD *)v248 + 2))-- == 1;
    if ( v81 )
    {
      (**v80)(v80, v74);
      sub_186B220(v80);
    }
  }
  if ( v247 )
    sub_186B220((void *)(v247 - 8));
  if ( ptr )
    sub_186B220(ptr);
  v82 = v252;
  if ( v252 )
  {
    v83 = (unsigned __int64)&v252[*((unsigned int *)v252 - 1)];
    if ( (unsigned __int64)v252 >= v83 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v84 = *v82;
        if ( *v82 )
        {
          v81 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v81 )
            break;
        }
        if ( (unsigned __int64)++v82 >= v83 )
          goto LABEL_90;
      }
      sub_15D7BC0(v251, v84);
      ++v82;
    }
    while ( (unsigned __int64)v82 < v83 );
LABEL_90:
    v82 = v252;
    if ( v252 )
LABEL_91:
      sub_186B220(v82 - 1);
  }
  v85 = v261;
  v86 = (pthread_mutex_t *)(v261 + 864);
  if ( &_pthread_key_create )
  {
    v87 = pthread_mutex_lock((pthread_mutex_t *)(v261 + 864));
    if ( v87 )
      std::__throw_system_error(v87);
    v85 = v261;
  }
  v88 = *(void **)(v85 + 832);
  _InterlockedExchange64((volatile __int64 *)(v261 + 832), 0);
  *(_QWORD *)(v261 + 904) = 0;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v86);
  if ( v88 )
  {
LABEL_144:
    sub_8E4B60(v88);
    sub_186B220(v88);
  }
LABEL_145:
  sub_18572D0(n);
  if ( v270 != v272 )
    operator delete(v270, *(_QWORD *)v272 + 1LL);
  if ( dest != v235 )
    operator delete(dest, v269[0] + 1LL);
  return sub_EE4A00(v246);
}

