__int64 __fastcall sub_2BCC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __int64 a8,
        char a9)
{
  int v11; // ebx
  unsigned int v12; // r15d
  int v13; // r12d
  __int64 (__fastcall *v14)(__int64, unsigned int); // rax
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  unsigned __int64 head; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  int *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  int *v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned int v33; // r15d
  __int64 v34; // r12
  __int64 v35; // rbx
  void (__fastcall *v36)(__int64, __int64, _QWORD); // rax
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // r13
  void (__fastcall *v40)(__int64, unsigned __int64 *, __int64, __int64); // rax
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  _DWORD *v49; // rax
  __m128i *v50; // rdx
  unsigned __int64 v51; // rcx
  __m128i *v52; // r8
  __m128i *v53; // rax
  __m128i *v54; // r8
  __int64 v55; // rax
  __m128i *v56; // rax
  __m128i *v57; // rdx
  unsigned __int64 v58; // rcx
  __m128i *v59; // r9
  __int64 v60; // rax
  int v61; // eax
  _DWORD *v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // r9
  __int64 **v65; // r11
  __int64 *v66; // rax
  void (__fastcall *v67)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  _DWORD *v71; // rax
  unsigned __int64 *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  void (__fastcall *v77)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v78)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v79)(__int64, _QWORD *, _QWORD); // rax
  __int64 v80; // r12
  unsigned __int8 (__fastcall *v81)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v82)(__int64, __int64, _QWORD); // rax
  unsigned __int64 v83; // rbx
  unsigned __int8 (__fastcall *v84)(__int64, unsigned __int64, _QWORD); // rax
  __int64 (__fastcall *v85)(__int64, unsigned int); // rax
  unsigned int v86; // ebx
  void (__fastcall *v87)(__int64, __int64, _QWORD); // rax
  int v88; // r13d
  __int64 v89; // rax
  int *v90; // rdi
  int v91; // esi
  int v92; // r13d
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  _DWORD *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  int *v103; // rdx
  _BOOL8 v104; // rdi
  int v105; // edx
  int v106; // esi
  void (__fastcall *v107)(__int64, __int64, _QWORD); // rax
  bool v108; // zf
  void (__fastcall *v109)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  void (__fastcall *v113)(__int64, _QWORD *, _QWORD); // rax
  __int64 v114; // rdi
  unsigned __int64 v115; // rsi
  void (__fastcall *v116)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  char *v121; // r8
  unsigned int v122; // r12d
  unsigned __int8 (__fastcall *v123)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v124)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v125)(__int64, _QWORD *, _QWORD); // rax
  __int64 v126; // r13
  void (__fastcall *v127)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v128; // r15
  void (__fastcall *v129)(__int64, __int64 *, __int64, __int64); // rax
  __int64 *v130; // rsi
  __int64 v131; // rdi
  unsigned __int8 (__fastcall *v132)(__int64, unsigned __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v133)(__int64, _QWORD *, _QWORD); // rax
  __int64 v134; // r12
  void (__fastcall *v135)(__int64, int **, __int64, __int64); // rax
  int v136; // edx
  __int64 v137; // r13
  void (__fastcall *v138)(__int64, unsigned __int64 *, __int64, __int64); // rax
  unsigned __int64 v139; // r15
  __int64 v140; // r13
  void (__fastcall *v141)(__int64, __int64 *, __int64, __int64); // rax
  char v142; // al
  __int64 v143; // rax
  __int64 v144; // rax
  unsigned int v145; // r15d
  unsigned __int8 (__fastcall *v146)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v147)(__int64, _QWORD *, _QWORD); // rax
  char *v148; // r8
  _QWORD *v149; // rsi
  _QWORD **v150; // rdi
  int v151; // r15d
  unsigned __int8 (__fastcall *v152)(__int64, __int64, _QWORD); // rax
  __int64 v153; // r13
  void (__fastcall *v154)(__int64, unsigned __int64 *, __int64, __int64); // rax
  __int64 v155; // r12
  void (__fastcall *v156)(__int64, __int64 *, __int64, __int64); // rax
  void (__fastcall *v157)(__int64, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v158)(__int64, _QWORD *, _QWORD); // rax
  char v159; // al
  void (__fastcall *v160)(__int64, __int64 *, _QWORD); // rax
  __m128i *v161; // rax
  unsigned int v162; // r13d
  unsigned __int8 (__fastcall *v163)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v164)(__int64, _QWORD *, _QWORD); // rax
  int v165; // edx
  __int64 v166; // r12
  void (__fastcall *v167)(__int64, _BYTE *, __int64, __int64); // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rsi
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  int *v174; // rdx
  int *v175; // rbx
  _BOOL8 v176; // rdi
  void (__fastcall *v177)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v178)(__int64, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v179)(__int64, _QWORD *, _QWORD); // rax
  __m128i v180; // xmm0
  __int64 v181; // rax
  unsigned __int8 (__fastcall *v182)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v183)(__int64, _QWORD *, _QWORD); // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  unsigned __int8 (__fastcall *v186)(__int64, __int64 *); // rax
  __int64 (__fastcall *v187)(__int64, __int64 *, _QWORD); // rax
  __int64 v188; // rdi
  unsigned int v189; // ebp
  __int64 (__fastcall *v190)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v191)(__int64, int); // rax
  int v192; // eax
  __int64 (__fastcall *v193)(__int64, int, int); // rax
  void (__fastcall *v194)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v195)(__int64, int, int); // rdi
  unsigned __int64 v196; // rsi
  __int64 v197; // rbx
  unsigned __int8 (__fastcall *v198)(__int64, __int64 *, _QWORD); // rax
  unsigned __int8 (__fastcall *v199)(__int64, __int64 *, _QWORD); // rax
  int v200; // r9d
  __int64 v201; // rdx
  __int64 (__fastcall *v202)(__int64, int); // rax
  __int64 v203; // rbx
  int v204; // r8d
  __m128i v205; // xmm0
  __int64 v206; // rdi
  int v207; // eax
  __int64 (__fastcall *v208)(__int64, int, int); // rax
  unsigned __int8 (__fastcall *v209)(__int64, _QWORD *, _QWORD); // rax
  unsigned __int8 (__fastcall *v210)(__int64, _QWORD *, _QWORD); // rax
  __int64 v211; // rax
  unsigned __int64 v212; // rdx
  unsigned int *v213; // rax
  unsigned __int64 v214; // rax
  __m128i v215; // xmm0
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // r15
  __int64 v219; // rax
  const __m128i *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rdx
  bool v223; // cf
  __int64 (__fastcall *v224)(__int64, int); // rax
  signed int *v225; // rbx
  __int64 v226; // rax
  __int64 v227; // r15
  unsigned int *v228; // r13
  char *v229; // rdi
  unsigned int *v230; // rbp
  int v231; // r15d
  signed int v232; // edx
  __int64 v233; // rsi
  __int64 v234; // rax
  void (__fastcall *v235)(__int64, __int64, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v236)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v237)(__int64, int); // rdi
  unsigned __int64 v238; // rsi
  int i; // r12d
  __int64 (__fastcall *v240)(__int64, __int64 *, _QWORD); // rax
  __int64 v241; // rax
  unsigned __int64 *v242; // rsi
  unsigned __int64 v243; // rdx
  unsigned int v244; // ebx
  __int64 (__fastcall *v245)(__int64, int); // rax
  int v246; // eax
  unsigned __int8 (__fastcall *v247)(__int64, __int64 *, _QWORD); // rax
  int j; // ebp
  __int64 (__fastcall *v249)(__int64, int); // rax
  int v250; // eax
  __int64 (__fastcall *v251)(__int64, int, int); // rdi
  __int64 (__fastcall *v252)(__int64, int, int); // rax
  unsigned int v253; // r12d
  void (__fastcall *v254)(__int64, __int64, _QWORD, _QWORD); // rax
  __int64 v255; // rax
  __int64 (__fastcall *v256)(__int64, __int64 *, _QWORD); // rax
  __int64 v257; // rdi
  int k; // eax
  int v259; // ecx
  __int64 v260; // rdx
  signed int v261; // r12d
  __int64 v262; // r8
  __int64 v263; // rax
  int v264; // ebx
  _DWORD *v265; // rax
  void *v266; // r15
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 v269; // rax
  int *v270; // rdx
  __int64 v271; // rbp
  __int64 (__fastcall *v272)(__int64, __int64 *, _QWORD); // rax
  __int64 v273; // rax
  __int64 v274; // rax
  const __m128i *v275; // rdi
  __int64 v276; // rsi
  __int64 v277; // rcx
  __int64 v278; // r15
  const __m128i *v279; // rdx
  __int64 v280; // rsi
  unsigned int v281; // [rsp+0h] [rbp-298h]
  unsigned int v282; // [rsp+0h] [rbp-298h]
  __int64 v283; // [rsp+0h] [rbp-298h]
  __int64 v284; // [rsp+0h] [rbp-298h]
  const void **v285; // [rsp+0h] [rbp-298h]
  unsigned int v286; // [rsp+0h] [rbp-298h]
  unsigned __int64 v287; // [rsp+0h] [rbp-298h]
  __int64 v288; // [rsp+0h] [rbp-298h]
  unsigned int v289; // [rsp+8h] [rbp-290h]
  unsigned int *v290; // [rsp+8h] [rbp-290h]
  unsigned int v291; // [rsp+18h] [rbp-280h]
  unsigned int v292; // [rsp+18h] [rbp-280h]
  void *v293; // [rsp+18h] [rbp-280h]
  int *v295; // [rsp+20h] [rbp-278h]
  int *v296; // [rsp+28h] [rbp-270h]
  __m128i *v297; // [rsp+30h] [rbp-268h]
  __m128i *v298; // [rsp+30h] [rbp-268h]
  __m128i *v299; // [rsp+30h] [rbp-268h]
  __int64 v300; // [rsp+30h] [rbp-268h]
  unsigned __int64 v301; // [rsp+30h] [rbp-268h]
  _QWORD *v302; // [rsp+38h] [rbp-260h]
  int v304; // [rsp+50h] [rbp-248h]
  int v305; // [rsp+54h] [rbp-244h]
  __m128i *v306; // [rsp+60h] [rbp-238h]
  __m128i *v307; // [rsp+60h] [rbp-238h]
  __m128i *v308; // [rsp+60h] [rbp-238h]
  unsigned __int64 v309; // [rsp+68h] [rbp-230h]
  unsigned __int64 v310; // [rsp+68h] [rbp-230h]
  unsigned __int64 v311; // [rsp+88h] [rbp-210h] BYREF
  unsigned int *v312; // [rsp+90h] [rbp-208h] BYREF
  unsigned __int64 v313; // [rsp+98h] [rbp-200h] BYREF
  __int64 v314; // [rsp+A0h] [rbp-1F8h] BYREF
  unsigned __int64 v315; // [rsp+A8h] [rbp-1F0h] BYREF
  __int64 v316; // [rsp+B0h] [rbp-1E8h] BYREF
  _BYTE v317[12]; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned __int64 v318; // [rsp+C4h] [rbp-1D4h]
  int v319; // [rsp+CCh] [rbp-1CCh]
  __int64 v320; // [rsp+D0h] [rbp-1C8h]
  int v321; // [rsp+D8h] [rbp-1C0h]
  unsigned __int64 v322; // [rsp+DCh] [rbp-1BCh]
  int v323; // [rsp+E4h] [rbp-1B4h]
  unsigned __int64 v324; // [rsp+E8h] [rbp-1B0h]
  int v325; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v326; // [rsp+F4h] [rbp-1A4h]
  int v327; // [rsp+FCh] [rbp-19Ch]
  unsigned __int64 v328; // [rsp+100h] [rbp-198h] BYREF
  int v329; // [rsp+108h] [rbp-190h]
  int **v330; // [rsp+110h] [rbp-188h] BYREF
  int v331; // [rsp+118h] [rbp-180h]
  int **v332; // [rsp+120h] [rbp-178h] BYREF
  int v333; // [rsp+128h] [rbp-170h]
  __int64 v334; // [rsp+130h] [rbp-168h] BYREF
  int v335; // [rsp+138h] [rbp-160h]
  int **v336; // [rsp+140h] [rbp-158h] BYREF
  int v337; // [rsp+148h] [rbp-150h]
  int **v338; // [rsp+150h] [rbp-148h] BYREF
  int v339; // [rsp+158h] [rbp-140h]
  unsigned __int64 **v340; // [rsp+160h] [rbp-138h] BYREF
  int v341; // [rsp+168h] [rbp-130h]
  _QWORD v342[2]; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v343[2]; // [rsp+180h] [rbp-118h] BYREF
  _QWORD v344[2]; // [rsp+190h] [rbp-108h] BYREF
  _QWORD v345[2]; // [rsp+1A0h] [rbp-F8h] BYREF
  __int64 v346; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v347; // [rsp+1B8h] [rbp-E0h]
  __int64 v348; // [rsp+1C0h] [rbp-D8h] BYREF
  __int64 v349; // [rsp+1C8h] [rbp-D0h]
  __int64 v350; // [rsp+1D0h] [rbp-C8h] BYREF
  __int64 v351; // [rsp+1D8h] [rbp-C0h]
  int *v352; // [rsp+1E0h] [rbp-B8h] BYREF
  __int128 v353; // [rsp+1E8h] [rbp-B0h]
  unsigned __int64 *v354; // [rsp+200h] [rbp-98h] BYREF
  __m128i v355; // [rsp+208h] [rbp-90h] BYREF
  char v356; // [rsp+218h] [rbp-80h]
  __m128i v357; // [rsp+220h] [rbp-78h] BYREF
  __m128i *v358; // [rsp+230h] [rbp-68h]
  __int64 *v359; // [rsp+238h] [rbp-60h]
  __int64 *v360; // [rsp+240h] [rbp-58h]
  __int64 v361; // [rsp+248h] [rbp-50h]
  unsigned __int64 v362; // [rsp+258h] [rbp-40h]

  v11 = a6;
  LODWORD(v302) = a5;
  v362 = __readfsqword(0x28u);
  if ( a6 < a4 )
  {
    sub_64B50(
      (unsigned int)&v357,
      *(_QWORD *)(a2 + 176),
      (unsigned int)"from_mba_range(%a, %d, %d): invalid range",
      *(_QWORD *)(a3 + 40),
      a4,
      a6);
    v180 = _mm_loadu_si128((const __m128i *)&v357.m128i_u64[1]);
    *(_QWORD *)a1 = v357.m128i_i64[0];
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v180;
    return a1;
  }
  v12 = a6 - a4 + 3;
  v305 = a6 - a4;
  v13 = a6 - a4 + 1;
  v14 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 168LL);
  v289 = v12;
  if ( v14 == sub_BAC0 )
  {
    hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(sub_BAC0, a2);
    hexdsp(264, a2, v12);
  }
  else
  {
    v14(a2, v12);
  }
  head = v13;
  *(_DWORD *)(a2 + 204) = v13;
  *(_DWORD *)(a2 + 272) = v305 + 2;
  *(_DWORD *)(a2 + 200) = v305 + 2;
  *(_DWORD *)(a2 + 40) = v305 + 2;
  v17 = *(_QWORD *)(a2 + 288);
  if ( v13 != v17 )
  {
    v357 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    LODWORD(v358) = -2;
    if ( v13 >= v17 )
    {
      v18 = *(_QWORD *)(a2 + 280);
      v19 = *(_QWORD *)(a2 + 296);
      v20 = a2 + 280;
      if ( (unsigned __int64)&v357 >= v18 && (unsigned __int64)&v357 < v18 + 24 * v19 )
      {
        if ( v19 < v13 )
          goto LABEL_423;
        goto LABEL_264;
      }
      if ( v19 < v13 )
      {
        v283 = *(_QWORD *)(a2 + 296);
        v216 = qvector_reserve(v20, 0, v13, 24);
        v217 = *(_QWORD *)(a2 + 296);
        v218 = v216;
        v219 = *(_QWORD *)(a2 + 288);
        v220 = *(const __m128i **)(a2 + 280);
        *(_QWORD *)(a2 + 296) = v283;
        v221 = v219 - 1;
        if ( v221 >= 0 )
        {
          v222 = v218;
          do
          {
            a7 = (__m128)_mm_loadu_si128(v220);
            v222 += 24;
            v220 = (const __m128i *)((char *)v220 + 24);
            *(__m128 *)(v222 - 24) = a7;
            *(_QWORD *)(v222 - 8) = v220[-1].m128i_i64[1];
            v223 = v221-- == 0;
          }
          while ( !v223 );
          v220 = *(const __m128i **)(a2 + 280);
        }
        v284 = v217;
        qfree(v220);
        *(_QWORD *)(a2 + 280) = v218;
        v17 = *(_QWORD *)(a2 + 288);
        *(_QWORD *)(a2 + 296) = v284;
      }
      v21 = 24 * v17;
      if ( v17 < v13 )
      {
        do
        {
          v22 = *(_QWORD *)(a2 + 280);
          ++v17;
          a7 = (__m128)_mm_load_si128(&v357);
          *(__m128 *)(v22 + v21) = a7;
          *(_QWORD *)(v22 + v21 + 16) = v358;
          v21 += 24;
        }
        while ( v13 != v17 );
      }
    }
LABEL_10:
    *(_QWORD *)(a2 + 288) = head;
  }
  v23 = *(_QWORD *)(a2 + 192);
  v357.m128i_i32[2] = 0;
  *(_DWORD *)(a2 + 212) = v11 + 1;
  *(_DWORD *)(a2 + 208) = a4;
  v358 = nullptr;
  v359 = &v357.m128i_i64[1];
  v360 = &v357.m128i_i64[1];
  v361 = 0;
  v342[0] = 0;
  v342[1] = 0;
  v343[0] = 0;
  v343[1] = 0;
  v344[0] = 0;
  v344[1] = 0;
  v345[0] = 0;
  v345[1] = 0;
  v346 = 0;
  v347 = 0;
  v304 = sub_26300(v23);
  LOBYTE(v319) = 16;
  v318 = 0xFFFFFFFF00000000LL;
  sub_2A560((_QWORD *)a2, 0, 1, 0xFFFFFFFF00000000LL, 16);
  v296 = (int *)(a2 + 312);
  v24 = (int *)(a2 + 312);
  v25 = *(_QWORD *)(a2 + 320);
  if ( !v25 )
  {
    v24 = (int *)(a2 + 312);
LABEL_242:
    v169 = operator new(0x28u);
    *(_QWORD *)(v169 + 32) = 0;
    v170 = (__int64)v24;
    v24 = (int *)v169;
    v173 = sub_27F70((_QWORD *)(a2 + 304), v170, 0, v171, v172);
    v175 = (int *)v173;
    if ( v174 )
    {
      v176 = v173 || v296 == v174 || v174[8] > 0;
      std::_Rb_tree_insert_and_rebalance(v176, v24, v174, v296);
      ++*(_QWORD *)(a2 + 344);
    }
    else
    {
      if ( v24 )
        operator delete(v24, 0x28u);
      v24 = v175;
    }
    goto LABEL_18;
  }
  do
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 16);
      v27 = *(_QWORD *)(v25 + 24);
      if ( *(int *)(v25 + 32) < 0 )
        break;
      v24 = (int *)v25;
      v25 = *(_QWORD *)(v25 + 16);
      if ( !v26 )
        goto LABEL_16;
    }
    v25 = *(_QWORD *)(v25 + 24);
  }
  while ( v27 );
LABEL_16:
  if ( v24 == v296 || v24[8] > 0 )
    goto LABEL_242;
LABEL_18:
  v24[9] = v304;
  v28 = *(_QWORD *)(a2 + 320);
  if ( !v28 )
  {
    v30 = (int *)(a2 + 312);
LABEL_248:
    v29 = a2 + 304;
    v31 = (unsigned __int64)v30;
    v312 = (unsigned int *)(a2 + 200);
    v30 = sub_281B0((_QWORD *)(a2 + 304), (__int64)v30, &v312);
    goto LABEL_25;
  }
  v29 = *(unsigned int *)(a2 + 200);
  v30 = (int *)(a2 + 312);
  do
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(v28 + 16);
      v32 = *(_QWORD *)(v28 + 24);
      if ( (int)v29 > *(_DWORD *)(v28 + 32) )
        break;
      v30 = (int *)v28;
      v28 = *(_QWORD *)(v28 + 16);
      if ( !v31 )
        goto LABEL_23;
    }
    v28 = *(_QWORD *)(v28 + 24);
  }
  while ( v32 );
LABEL_23:
  if ( v296 == v30 || (int)v29 < v30[8] )
    goto LABEL_248;
LABEL_25:
  v30[9] = v304;
  if ( v13 > 0 )
  {
    v33 = a4;
    v34 = 0;
    v281 = a4;
    while ( 1 )
    {
      if ( v33 >= *(_DWORD *)(a3 + 64) )
      {
        if ( !under_debugger )
          interr(52719);
        goto LABEL_432;
      }
      v35 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v33);
      LODWORD(v352) = v34 + 1;
      if ( *(_DWORD *)(v35 + 72) >= (int)v302 )
      {
        v36 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v29, v31);
        v31 = a2 + 448;
        v29 = 205;
        v36(205, a2 + 448, (unsigned int)(v34 + 1));
      }
      v37 = *(_QWORD *)(a2 + 280) + 24 * v34;
      *(_QWORD *)v37 = *(_QWORD *)(v35 + 32);
      v38 = *(_DWORD *)(v35 + 72);
      *(_QWORD *)(v37 + 8) = 0;
      *(_DWORD *)(v37 + 16) = v38;
      v39 = *(_QWORD *)(v35 + 32);
      v40 = (void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64))get_hexdsp(v29, v31);
      v41 = 418;
      v40(418, &v328, a3, v39);
      v42 = *(_QWORD *)(a2 + 192);
      head = v328;
      v43 = *(_QWORD *)(v35 + 32);
      if ( *(_QWORD *)(v42 + 352) )
      {
        v64 = *(_QWORD *)(v42 + 336);
        v65 = *(__int64 ***)(*(_QWORD *)(v42 + 328) + 8 * (v43 % v64));
        if ( v65 )
        {
          v66 = *v65;
          v41 = (*v65)[1];
          if ( v43 == v41 )
          {
LABEL_81:
            if ( v65 )
            {
              v44 = *v65;
              if ( *v65 )
                goto LABEL_35;
            }
          }
          else
          {
            while ( *v66 )
            {
              v41 = *(_QWORD *)(*v66 + 8);
              v65 = (__int64 **)v66;
              if ( v43 % v64 != v41 % v64 )
                break;
              v66 = (__int64 *)*v66;
              if ( v43 == v41 )
                goto LABEL_81;
            }
          }
        }
      }
      else
      {
        v44 = *(__int64 **)(v42 + 344);
        if ( v44 )
        {
          while ( v43 != v44[1] )
          {
            v44 = (__int64 *)*v44;
            if ( !v44 )
              goto LABEL_83;
          }
LABEL_35:
          head = *((unsigned int *)v44 + 4);
          v45 = *(_QWORD *)(a2 + 320);
          if ( v45 )
          {
            v31 = (unsigned int)v352;
            v46 = a2 + 312;
            do
            {
              while ( 1 )
              {
                v47 = *(_QWORD *)(v45 + 16);
                v48 = *(_QWORD *)(v45 + 24);
                if ( (int)v352 > *(_DWORD *)(v45 + 32) )
                  break;
                v46 = v45;
                v45 = *(_QWORD *)(v45 + 16);
                if ( !v47 )
                  goto LABEL_40;
              }
              v45 = *(_QWORD *)(v45 + 24);
            }
            while ( v48 );
LABEL_40:
            if ( v296 != (int *)v46 && (int)v352 >= *(_DWORD *)(v46 + 32) )
              goto LABEL_44;
          }
          else
          {
            v46 = a2 + 312;
          }
          v31 = v46;
          v330 = &v352;
          v49 = sub_281B0((_QWORD *)(a2 + 304), v46, (unsigned int **)&v330);
          goto LABEL_43;
        }
      }
LABEL_83:
      if ( !v34 && *(_BYTE *)(v42 + 433) )
        break;
      if ( v328 >= *(_QWORD *)(v42 + 224) && v328 < *(_QWORD *)(v42 + 232) )
      {
        v67 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v41, v42);
        v67(205, v344, (unsigned int)v34);
        v68 = *(_QWORD *)(a2 + 320);
        v31 = a2 + 312;
        if ( !v68 )
          goto LABEL_93;
        v31 = a2 + 312;
        do
        {
          while ( 1 )
          {
            v69 = *(_QWORD *)(v68 + 16);
            v70 = *(_QWORD *)(v68 + 24);
            if ( (int)v352 > *(_DWORD *)(v68 + 32) )
              break;
            v31 = v68;
            v68 = *(_QWORD *)(v68 + 16);
            if ( !v69 )
              goto LABEL_91;
          }
          v68 = *(_QWORD *)(v68 + 24);
        }
        while ( v70 );
LABEL_91:
        if ( v296 == (int *)v31 || (int)v352 < *(_DWORD *)(v31 + 32) )
        {
LABEL_93:
          v334 = (__int64)&v352;
          v71 = sub_281B0((_QWORD *)(a2 + 304), v31, (unsigned int **)&v334);
          goto LABEL_159;
        }
LABEL_160:
        *(_DWORD *)(v31 + 36) = v304;
        goto LABEL_45;
      }
      if ( *(_QWORD *)(v42 + 248) )
      {
        v114 = v42 + 240;
        v115 = v328;
        if ( rangeset_t_find_range(v114) )
        {
          v116 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v114, v115);
          v116(205, v345, (unsigned int)v34);
          v117 = *(_QWORD *)(a2 + 320);
          if ( v117 )
          {
            v31 = a2 + 312;
            do
            {
              while ( 1 )
              {
                v118 = *(_QWORD *)(v117 + 16);
                v119 = *(_QWORD *)(v117 + 24);
                if ( (int)v352 > *(_DWORD *)(v117 + 32) )
                  break;
                v31 = v117;
                v117 = *(_QWORD *)(v117 + 16);
                if ( !v118 )
                  goto LABEL_156;
              }
              v117 = *(_QWORD *)(v117 + 24);
            }
            while ( v119 );
LABEL_156:
            if ( v296 != (int *)v31 && (int)v352 >= *(_DWORD *)(v31 + 32) )
              goto LABEL_160;
          }
          else
          {
            v31 = a2 + 312;
          }
          v336 = &v352;
          v71 = sub_281B0((_QWORD *)(a2 + 304), v31, (unsigned int **)&v336);
LABEL_159:
          v31 = (unsigned __int64)v71;
          goto LABEL_160;
        }
        v42 = *(_QWORD *)(a2 + 192);
      }
      v72 = (unsigned __int64 *)sub_1DF80(*(__int64 **)(v42 + 8), head);
      v73 = *(_QWORD *)(a2 + 192);
      v31 = (unsigned __int64)&v354;
      v354 = v72;
      sub_26310(v73, (int *)&v354);
      if ( BYTE4(v354) )
      {
        v74 = *(_QWORD *)(a2 + 320);
        head = (unsigned int)v354;
        if ( !v74 )
        {
          v46 = a2 + 312;
          goto LABEL_103;
        }
        v31 = (unsigned int)v352;
        v46 = a2 + 312;
        do
        {
          while ( 1 )
          {
            v75 = *(_QWORD *)(v74 + 16);
            v76 = *(_QWORD *)(v74 + 24);
            if ( (int)v352 > *(_DWORD *)(v74 + 32) )
              break;
            v46 = v74;
            v74 = *(_QWORD *)(v74 + 16);
            if ( !v75 )
              goto LABEL_101;
          }
          v74 = *(_QWORD *)(v74 + 24);
        }
        while ( v76 );
LABEL_101:
        if ( v296 == (int *)v46 || (int)v352 < *(_DWORD *)(v46 + 32) )
        {
LABEL_103:
          v31 = v46;
          v338 = &v352;
          v49 = sub_281B0((_QWORD *)(a2 + 304), v46, (unsigned int **)&v338);
LABEL_43:
          v46 = (__int64)v49;
        }
LABEL_44:
        *(_DWORD *)(v46 + 36) = head;
      }
LABEL_45:
      v50 = v358;
      v51 = *(_QWORD *)(v35 + 32);
      if ( !v358 )
      {
        head = (unsigned int)v352;
        v54 = (__m128i *)&v357.m128i_u64[1];
        goto LABEL_58;
      }
      v52 = (__m128i *)&v357.m128i_u64[1];
      v53 = v358;
      do
      {
        while ( 1 )
        {
          v29 = v53[1].m128i_i64[0];
          v31 = v53[1].m128i_u64[1];
          if ( v53[2].m128i_i64[0] < v51 )
            break;
          v52 = v53;
          v53 = (__m128i *)v53[1].m128i_i64[0];
          if ( !v29 )
            goto LABEL_50;
        }
        v53 = (__m128i *)v53[1].m128i_i64[1];
      }
      while ( v31 );
LABEL_50:
      if ( v52 == (__m128i *)&v357.m128i_u64[1] || v51 < v52[2].m128i_i64[0] )
      {
        head = (unsigned int)v352;
        v54 = (__m128i *)&v357.m128i_u64[1];
        do
        {
          while ( 1 )
          {
            v31 = v50[1].m128i_u64[0];
            v55 = v50[1].m128i_i64[1];
            if ( v50[2].m128i_i64[0] < v51 )
              break;
            v54 = v50;
            v50 = (__m128i *)v50[1].m128i_i64[0];
            if ( !v31 )
              goto LABEL_56;
          }
          v50 = (__m128i *)v50[1].m128i_i64[1];
        }
        while ( v55 );
LABEL_56:
        if ( v54 != (__m128i *)&v357.m128i_u64[1] && v51 >= v54[2].m128i_i64[0] )
          goto LABEL_69;
LABEL_58:
        v29 = 48;
        v297 = v54;
        v56 = (__m128i *)operator new(0x30u);
        v58 = *(_QWORD *)(v35 + 32);
        v56[2].m128i_i32[2] = 0;
        v59 = v56;
        v54 = v297;
        v56[2].m128i_i64[0] = v58;
        if ( v297 == (__m128i *)&v357.m128i_u64[1] )
        {
          if ( v361 )
          {
            v57 = (__m128i *)v360;
            v54 = nullptr;
            if ( v360[4] < v58 )
              goto LABEL_64;
          }
        }
        else
        {
          v31 = v297[2].m128i_u64[0];
          if ( v58 >= v31 )
          {
            if ( v31 >= v58 )
              goto LABEL_162;
            if ( v360 != (__int64 *)v297 )
            {
              v29 = (__int64)v297;
              v310 = v58;
              v308 = v56;
              v168 = std::_Rb_tree_increment(v297);
              v58 = v310;
              v59 = v308;
              v57 = (__m128i *)v168;
              if ( v310 >= *(_QWORD *)(v168 + 32) )
                goto LABEL_230;
              v54 = v297;
              if ( v297[1].m128i_i64[1] )
              {
                v54 = (__m128i *)v168;
                goto LABEL_64;
              }
            }
            v57 = v54;
            if ( v54 )
              goto LABEL_257;
            goto LABEL_162;
          }
          v57 = v297;
          if ( v359 == (__int64 *)v297 )
            goto LABEL_64;
          v29 = (__int64)v297;
          v309 = v58;
          v306 = v56;
          v60 = std::_Rb_tree_decrement(v297, v31, v297, v58, v297);
          v58 = v309;
          v59 = v306;
          v57 = (__m128i *)v60;
          if ( *(_QWORD *)(v60 + 32) < v309 )
          {
            v54 = nullptr;
            if ( *(_QWORD *)(v60 + 24) )
            {
              v54 = v297;
              v57 = v297;
            }
LABEL_64:
            if ( v57 )
            {
              if ( v54 || v57 == (__m128i *)&v357.m128i_u64[1] )
              {
                v29 = 1;
                goto LABEL_68;
              }
              v31 = v57[2].m128i_u64[0];
LABEL_257:
              v29 = v58 < v31;
LABEL_68:
              v31 = (unsigned __int64)v59;
              v298 = v59;
              std::_Rb_tree_insert_and_rebalance(v29, v59, v57, &v357.m128i_u64[1]);
              v54 = v298;
              ++v361;
LABEL_69:
              v54[2].m128i_i32[2] = head;
              goto LABEL_70;
            }
LABEL_162:
            if ( v59 )
            {
              v31 = 48;
              v29 = (__int64)v59;
              v299 = v54;
              operator delete(v59, 0x30u);
              v54 = v299;
            }
            goto LABEL_69;
          }
        }
LABEL_230:
        v31 = v58;
        v29 = (__int64)&v357;
        v307 = v59;
        v301 = v58;
        v161 = (__m128i *)sub_27D80((__int64)&v357, v58, (unsigned __int64)v57, v58, (__int64)v54);
        v58 = v301;
        v59 = v307;
        v54 = v161;
        goto LABEL_64;
      }
LABEL_70:
      v61 = *(_DWORD *)(v35 + 76);
      if ( v61 != 6 )
      {
        if ( v61 == 1 )
        {
          v113 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
          v29 = 205;
          v31 = (unsigned __int64)v343;
          v113(205, v343, (unsigned int)v34);
        }
        else
        {
          v62 = *(_DWORD **)(v35 + 56);
          if ( v62 )
          {
            if ( (unsigned int)(*v62 - 56) <= 1 )
            {
              head = a2 + 232;
              v292 = (unsigned int)v352;
              v82 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v29, v31);
              v82(205, a2 + 232, v292);
              v83 = *(_QWORD *)(v35 + 56);
              v84 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(205, a2 + 232);
              v31 = v83;
              v29 = 346;
              if ( v84(346, v83, 0) )
              {
                if ( !*(_BYTE *)(a2 + 268) )
                {
                  v85 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 168LL);
                  v86 = v305 + 5;
                  if ( v85 == sub_BAC0 )
                  {
                    v87 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(sub_BAC0, v31);
                    v87(264, a2, v86);
                  }
                  else
                  {
                    v85(a2, v86);
                  }
                  v88 = *(_DWORD *)(a2 + 200);
                  v89 = *(_QWORD *)(a2 + 320);
                  *(_BYTE *)(a2 + 268) = 1;
                  v90 = (int *)(a2 + 312);
                  v91 = v88 + 1;
                  v92 = v88 + 2;
                  LODWORD(v354) = v91;
                  *(_DWORD *)(a2 + 264) = v91;
                  *(_DWORD *)(a2 + 272) = v92;
                  *(_DWORD *)(a2 + 40) = v92;
                  if ( !v89 )
                    goto LABEL_241;
                  do
                  {
                    while ( 1 )
                    {
                      v93 = *(_QWORD *)(v89 + 16);
                      v94 = *(_QWORD *)(v89 + 24);
                      if ( v91 > *(_DWORD *)(v89 + 32) )
                        break;
                      v90 = (int *)v89;
                      v89 = *(_QWORD *)(v89 + 16);
                      if ( !v93 )
                        goto LABEL_122;
                    }
                    v89 = *(_QWORD *)(v89 + 24);
                  }
                  while ( v94 );
LABEL_122:
                  if ( v296 == v90 || v91 < v90[8] )
                  {
LABEL_241:
                    v340 = &v354;
                    v90 = sub_281B0((_QWORD *)(a2 + 304), (__int64)v90, (unsigned int **)&v340);
                    v92 = (_DWORD)v354 + 1;
                  }
                  v95 = a2 + 312;
                  v90[9] = v304;
                  v96 = *(_QWORD *)(a2 + 320);
                  if ( !v96 )
                    goto LABEL_131;
                  do
                  {
                    while ( 1 )
                    {
                      v97 = *(_QWORD *)(v96 + 16);
                      v98 = *(_QWORD *)(v96 + 24);
                      if ( *(_DWORD *)(v96 + 32) < v92 )
                        break;
                      v95 = v96;
                      v96 = *(_QWORD *)(v96 + 16);
                      if ( !v97 )
                        goto LABEL_129;
                    }
                    v96 = *(_QWORD *)(v96 + 24);
                  }
                  while ( v98 );
LABEL_129:
                  if ( v296 == (int *)v95 || *(_DWORD *)(v95 + 32) > v92 )
                  {
LABEL_131:
                    v99 = (_DWORD *)operator new(0x28u);
                    v99[8] = v92;
                    v99[9] = 0;
                    v293 = v99;
                    v102 = sub_27F70((_QWORD *)(a2 + 304), v95, (unsigned int)v92, v100, v101);
                    v95 = v102;
                    if ( v103 )
                    {
                      v104 = v102 || v296 == v103 || v103[8] > v92;
                      std::_Rb_tree_insert_and_rebalance(v104, v293, v103, v296);
                      ++*(_QWORD *)(a2 + 344);
                      v95 = (__int64)v293;
                    }
                    else if ( v293 )
                    {
                      operator delete(v293, 0x28u);
                    }
                  }
                  LOBYTE(v321) = 8;
                  *(_DWORD *)(v95 + 36) = v304;
                  v105 = *(_DWORD *)(a2 + 272);
                  v106 = *(_DWORD *)(a2 + 200);
                  v320 = 0xFFFFFFFF00000000LL;
                  sub_2A560((_QWORD *)a2, v106, v105, 0xFFFFFFFF00000000LL, 8);
                  v29 = a2;
                  v31 = (unsigned int)v354;
                  sub_2A560((_QWORD *)a2, (int)v354, *(_DWORD *)(a2 + 272), v320, v321);
                }
                head = (unsigned int)v352;
                v107 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v29, v31);
                v107(205, a2 + 216, (unsigned int)head);
                v108 = *(_BYTE *)(a2 + 268) == 0;
                LOBYTE(v323) = 4;
                v322 = 0xFFFFFFFF00000000LL;
                if ( v108 )
                  sub_7964();
                v31 = (unsigned int)v352;
                v29 = a2;
                sub_2A560((_QWORD *)a2, (int)v352, *(_DWORD *)(a2 + 264), 0xFFFFFFFF00000000LL, v323);
              }
            }
          }
        }
        v63 = v34 + 1;
        ++v33;
        if ( v305 != v34 )
          goto LABEL_75;
LABEL_105:
        v11 = 2;
        v302 = v343;
        while ( 2 )
        {
          v13 = v11 - 2;
          v78 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
          v31 = (unsigned __int64)v342;
          v29 = 213;
          if ( !v78(213, v342, (unsigned int)(v11 - 2)) )
          {
            v79 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
            v31 = (unsigned __int64)v343;
            v29 = 213;
            if ( !v79(213, v343, (unsigned int)v13) )
            {
              if ( v281 >= *(_DWORD *)(a3 + 64) )
              {
                if ( !under_debugger )
                {
                  interr(52719);
                  goto LABEL_421;
                }
                goto LABEL_432;
              }
              head = a2 + 216;
              v80 = *(_QWORD *)(*(_QWORD *)(a3 + 528) + 8LL * v281);
              v81 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(213, v343);
              v31 = a2 + 216;
              v291 = v11 - 1;
              if ( v81(213, a2 + 216, (unsigned int)(v11 - 1)) )
              {
                v153 = *(_QWORD *)(v80 + 32);
                v154 = (void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64))get_hexdsp(213, v31);
                v154(418, &v313, a3, v153);
                head = v313;
                v155 = *(_QWORD *)(*(_QWORD *)(v80 + 56) + 24LL);
                v156 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v313);
                v31 = (unsigned __int64)&v314;
                v29 = 418;
                v156(418, &v314, a3, v155);
                if ( head == v314 )
                {
                  v157 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(418, &v314);
                  v31 = a2 + 248;
                  v29 = 205;
                  v157(205, a2 + 248, v291);
                }
              }
              else
              {
                v29 = *(_QWORD *)(v80 + 56);
                if ( v29 )
                {
                  switch ( *(_DWORD *)v29 )
                  {
                    case '*':
                    case '+':
                    case ',':
                    case '-':
                    case '.':
                    case '/':
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                      v121 = (char *)(v29 + 64);
                      v31 = a3;
                      v29 = (__int64)&v354;
                      sub_29EC0((__int64)&v354, a3, (__int64)&v357, a4, v121, *(double *)a7.m128_u64);
                      if ( v356 )
                        goto LABEL_321;
                      head = (unsigned int)v354;
                      if ( (int)v354 > 0 && (int)v354 <= *(_DWORD *)(a2 + 204) )
                      {
                        v122 = (_DWORD)v354 - 1;
                        v123 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(&v354, a3);
                        v31 = (unsigned __int64)v342;
                        v29 = 213;
                        if ( !v123(213, v342, v122) )
                        {
                          v182 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                          v31 = (unsigned __int64)v343;
                          v29 = 213;
                          if ( !v182(213, v343, v122) )
                          {
                            LOBYTE(v335) = 0;
                            v31 = v291;
                            v29 = a2;
                            v334 = 0x100000005LL;
                            sub_2A560((_QWORD *)a2, v291, head, 0x100000005LL, 0);
                          }
                        }
                      }
                      if ( v11 <= 0 )
                        goto LABEL_164;
                      if ( v11 <= *(_DWORD *)(a2 + 204) )
                      {
                        v124 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
                        v31 = (unsigned __int64)v342;
                        v29 = 213;
                        if ( !v124(213, v342, v291) )
                        {
                          v125 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                          v31 = (unsigned __int64)v343;
                          v29 = 213;
                          if ( !v125(213, v343, v291) )
                          {
                            LOBYTE(v337) = 0;
                            v31 = v291;
                            v29 = a2;
                            v336 = (int **)&byte_4;
                            sub_2A560((_QWORD *)a2, v291, v11, 4, 0);
                          }
                        }
                      }
                      goto LABEL_106;
                    case '5':
                      head = *(_QWORD *)(v29 + 56);
                      if ( !*(_QWORD *)(head + 32) )
                        goto LABEL_106;
                      v13 = 0;
                      v143 = 0;
                      break;
                    case '6':
                      v137 = *(_QWORD *)(v29 + 24);
                      v138 = (void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64))get_hexdsp(v29, v31);
                      v138(418, &v315, a3, v137);
                      v139 = v315;
                      v140 = *(_QWORD *)(v80 + 32);
                      v141 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v315);
                      v141(418, &v316, a3, v140);
                      if ( v139 == v316 )
                      {
                        v177 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(418, &v316);
                        v177(205, a2 + 248, v291);
                      }
                      v31 = v139 + 16;
                      v29 = v139;
                      head = next_head(v139, v139 + 16);
                      if ( head == -1 )
                        goto LABEL_186;
                      v31 = v139;
                      v29 = (__int64)&v354;
                      v142 = xrefblk_t_first_from(&v354, v139, 4);
                      while ( 2 )
                      {
                        if ( v142 )
                        {
                          if ( v355.m128i_i64[0] != head )
                          {
                            v29 = (__int64)&v354;
                            v142 = xrefblk_t_next_from(&v354);
                            continue;
                          }
                          if ( v11 > 0 && v11 <= *(_DWORD *)(a2 + 204) )
                          {
                            v209 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(&v354, v139);
                            v31 = (unsigned __int64)v342;
                            v29 = 213;
                            if ( !v209(213, v342, v291) )
                            {
                              v210 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                              v31 = (unsigned __int64)v343;
                              v29 = 213;
                              if ( !v210(213, v343, v291) )
                              {
                                LOBYTE(v329) = 0;
                                v31 = v291;
                                v29 = a2;
                                v328 = 1;
                                sub_2A560((_QWORD *)a2, v291, v11, 1, 0);
                              }
                            }
                          }
                        }
                        else
                        {
LABEL_186:
                          v134 = *(_QWORD *)(v80 + 32);
                          v135 = (void (__fastcall *)(__int64, int **, __int64, __int64))get_hexdsp(v29, v31);
                          v135(418, &v352, a3, v134);
                          v29 = *(_QWORD *)(a2 + 192);
                          v31 = (unsigned __int64)v352;
                          if ( sub_263E0(v29) )
                          {
                            LOBYTE(v327) = 2;
                            v136 = *(_DWORD *)(a2 + 200);
                            v29 = a2;
                            v31 = v291;
                            v326 = 0xFFFFFFFF00000000LL;
                            sub_2A560((_QWORD *)a2, v291, v136, 0xFFFFFFFF00000000LL, 2);
                          }
                        }
                        break;
                      }
                      goto LABEL_106;
                    case '7':
                      if ( *(_BYTE *)(v29 + 32) == 7 && *(_BYTE *)(a8 + 4) && *(_DWORD *)(v29 + 40) == *(_DWORD *)a8 )
                      {
                        LOBYTE(v325) = 2;
                        v165 = *(_DWORD *)(a2 + 200);
                        v324 = 0xFFFFFFFF00000002LL;
                        sub_2A560((_QWORD *)a2, v291, v165, 0xFFFFFFFF00000002LL, 2);
                        v166 = *(_QWORD *)(v80 + 32);
                        v167 = (void (__fastcall *)(__int64, _BYTE *, __int64, __int64))get_hexdsp(a2, v291);
                        v31 = (unsigned __int64)v317;
                        v29 = 418;
                        v167(418, v317, a3, v166);
                        if ( !*(_BYTE *)(a8 + 4) )
                          sub_7964();
                        goto LABEL_106;
                      }
                      v148 = (char *)(v29 + 32);
                      v149 = (_QWORD *)a3;
                      v150 = &v354;
                      sub_29EC0((__int64)&v354, a3, (__int64)&v357, a4, v148, *(double *)a7.m128_u64);
                      if ( v356 )
                      {
LABEL_321:
                        *(_QWORD *)a1 = v354;
                        v215 = _mm_loadu_si128(&v355);
                        *(_BYTE *)(a1 + 24) = 1;
                        *(__m128i *)(a1 + 8) = v215;
                        goto LABEL_168;
                      }
                      v151 = (int)v354;
                      if ( (int)v354 > 0 && (int)v354 <= *(_DWORD *)(a2 + 204) )
                      {
                        v162 = (_DWORD)v354 - 1;
                        v163 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(&v354, a3);
                        v149 = v342;
                        v150 = (_QWORD **)(&qword_D0 + 5);
                        if ( !v163(213, v342, v162) )
                        {
                          v164 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                          v149 = v343;
                          v150 = (_QWORD **)(&qword_D0 + 5);
                          if ( !v164(213, v343, v162) )
                          {
                            v149 = (_QWORD *)v291;
                            v150 = (_QWORD **)a2;
                            LOBYTE(v331) = 0;
                            v330 = (int **)(&dword_0 + 2);
                            sub_2A560((_QWORD *)a2, v291, v151, 2, 0);
                          }
                        }
                      }
                      head = a2 + 448;
                      v152 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v150, v149);
                      v31 = a2 + 448;
                      v29 = 213;
                      if ( v152(213, a2 + 448, v291) )
                        goto LABEL_106;
                      v29 = *(_QWORD *)(v80 + 56);
                      if ( !v29 )
                        goto LABEL_106;
                      if ( *(_DWORD *)v29 != 55 )
                      {
                        if ( *(_DWORD *)v29 != 4 )
                          goto LABEL_106;
                        goto LABEL_222;
                      }
                      v181 = *(_QWORD *)(v29 + 16);
                      if ( v181 && *(char *)(v181 + 4) >= 0 )
                      {
                        v31 = *(_QWORD *)(v29 + 24);
                        v29 = *(_QWORD *)(v29 + 16);
                        v159 = sub_27B20(v29, v31);
                        goto LABEL_223;
                      }
                      goto LABEL_224;
                    case '8':
                    case '9':
                      v126 = *(_QWORD *)(v80 + 32);
                      v127 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v29, v31);
                      v127(418, &v348, a3, v126);
                      v128 = v348;
                      v300 = *(_QWORD *)(*(_QWORD *)(v80 + 56) + 24LL);
                      v129 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(418, &v348);
                      v130 = &v350;
                      v131 = 418;
                      v129(418, &v350, a3, v300);
                      if ( v128 == v350 )
                      {
                        v178 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(418, &v350);
                        v130 = (__int64 *)(a2 + 248);
                        v131 = 205;
                        v178(205, a2 + 248, v291);
                      }
                      head = *(_QWORD *)(v80 + 56);
                      v132 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int64, _QWORD))get_hexdsp(v131, v130);
                      v31 = head;
                      v29 = 346;
                      if ( v132(346, head, 0) )
                        goto LABEL_106;
                      if ( v11 > 0 && v11 <= *(_DWORD *)(a2 + 204) )
                      {
                        v133 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(346, head);
                        v31 = (unsigned __int64)v342;
                        v29 = 213;
                        if ( !v133(213, v342, v291) )
                        {
                          v183 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                          v31 = (unsigned __int64)v343;
                          v29 = 213;
                          if ( !v183(213, v343, v291) )
                          {
                            LOBYTE(v333) = 0;
                            v31 = v291;
                            v29 = a2;
                            v332 = (int **)(&dword_0 + 1);
                            sub_2A560((_QWORD *)a2, v291, v11, 1, 0);
                          }
                        }
                      }
                      goto LABEL_186;
                    case ':':
                      goto LABEL_186;
                    default:
                      if ( v11 > 0 && v11 <= *(_DWORD *)(a2 + 204) )
                        goto LABEL_219;
                      goto LABEL_221;
                  }
                  while ( 1 )
                  {
                    v144 = *(unsigned int *)(*(_QWORD *)(head + 24) + 4 * v143);
                    if ( (unsigned int)v144 >= *(_DWORD *)(a3 + 64) )
                      break;
                    v145 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 528) + 8 * v144) + 72LL) - a4;
                    if ( (int)(v145 + 1) > 0 && (signed int)(v145 + 1) <= *(_DWORD *)(a2 + 204) )
                    {
                      v146 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
                      v31 = (unsigned __int64)v342;
                      v29 = 213;
                      if ( !v146(213, v342, v145) )
                      {
                        v147 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                        v31 = (unsigned __int64)v343;
                        v29 = 213;
                        if ( !v147(213, v343, v145) )
                        {
                          HIDWORD(v338) = v13;
                          v29 = a2;
                          LODWORD(v338) = 3;
                          v31 = v291;
                          LOBYTE(v339) = 0;
                          sub_2A560((_QWORD *)a2, v291, v145 + 1, (__int64)v338, 0);
                        }
                      }
                    }
                    v143 = ++v13;
                    if ( (unsigned __int64)v13 >= *(_QWORD *)(head + 32) )
                      goto LABEL_106;
                  }
LABEL_421:
                  if ( !under_debugger )
                  {
                    v20 = 52719;
                    interr(52719);
LABEL_423:
                    v287 = v19;
                    v274 = qvector_reserve(v20, 0, head, 24);
                    v275 = *(const __m128i **)(a2 + 280);
                    v276 = *(_QWORD *)(a2 + 288);
                    v277 = *(_QWORD *)(a2 + 296);
                    v278 = v274;
                    *(_QWORD *)(a2 + 296) = v287;
                    v279 = v275;
                    v280 = v276 - 1;
                    if ( v280 >= 0 )
                    {
                      do
                      {
                        a7 = (__m128)_mm_loadu_si128(v279);
                        v274 += 24;
                        v279 = (const __m128i *)((char *)v279 + 24);
                        *(__m128 *)(v274 - 24) = a7;
                        *(_QWORD *)(v274 - 8) = v279[-1].m128i_i64[1];
                        v223 = v280-- == 0;
                      }
                      while ( !v223 );
                      v275 = *(const __m128i **)(a2 + 280);
                    }
                    v288 = v277;
                    qfree(v275);
                    *(_QWORD *)(a2 + 280) = v278;
                    v17 = *(_QWORD *)(a2 + 288);
                    *(_QWORD *)(a2 + 296) = v288;
LABEL_264:
                    v184 = 24 * v17;
                    if ( v17 < head )
                    {
                      do
                      {
                        ++v17;
                        v185 = v184 + *(_QWORD *)(a2 + 280);
                        v184 += 24;
                        *(_QWORD *)v185 = -1;
                        *(_QWORD *)(v185 + 8) = 0;
                        *(_DWORD *)(v185 + 16) = -2;
                      }
                      while ( head != v17 );
                    }
                    goto LABEL_10;
                  }
LABEL_432:
                  BUG();
                }
                if ( v11 <= 0 || v11 > *(_DWORD *)(a2 + 204) )
                  goto LABEL_224;
LABEL_219:
                v158 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
                v31 = (unsigned __int64)v342;
                if ( !v158(213, v342, v291) )
                {
                  v179 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(213, v342);
                  v31 = (unsigned __int64)v343;
                  if ( !v179(213, v343, v291) )
                  {
                    LOBYTE(v341) = 0;
                    v31 = v291;
                    v340 = nullptr;
                    sub_2A560((_QWORD *)a2, v291, v11, 0, 0);
                  }
                }
                v29 = *(_QWORD *)(v80 + 56);
                if ( !v29 )
                  goto LABEL_224;
LABEL_221:
                if ( *(char *)(v29 + 4) < 0 )
                  goto LABEL_224;
LABEL_222:
                v31 = -1;
                v159 = sub_27B20(v29, -1);
LABEL_223:
                if ( v159 )
                {
LABEL_224:
                  v160 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v29, v31);
                  v29 = 205;
                  v31 = (unsigned __int64)&v346;
                  v160(205, &v346, v291);
                }
              }
            }
          }
LABEL_106:
          ++v11;
          ++v281;
          if ( v11 == v289 )
            goto LABEL_164;
          continue;
        }
      }
      v77 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v29, v31);
      v29 = 205;
      v31 = (unsigned __int64)v342;
      v77(205, v342, (unsigned int)v34);
      v63 = v34 + 1;
      ++v33;
      if ( v305 == v34 )
        goto LABEL_105;
LABEL_75:
      v34 = v63;
    }
    v109 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v41, v42);
    v109(205, v344, 0);
    v110 = *(_QWORD *)(a2 + 320);
    if ( v110 )
    {
      v31 = a2 + 312;
      do
      {
        while ( 1 )
        {
          v111 = *(_QWORD *)(v110 + 16);
          v112 = *(_QWORD *)(v110 + 24);
          if ( (int)v352 > *(_DWORD *)(v110 + 32) )
            break;
          v31 = v110;
          v110 = *(_QWORD *)(v110 + 16);
          if ( !v111 )
            goto LABEL_145;
        }
        v110 = *(_QWORD *)(v110 + 24);
      }
      while ( v112 );
LABEL_145:
      if ( v296 != (int *)v31 && (int)v352 >= *(_DWORD *)(v31 + 32) )
        goto LABEL_160;
    }
    else
    {
      v31 = a2 + 312;
    }
    v332 = &v352;
    v71 = sub_281B0((_QWORD *)(a2 + 304), v31, (unsigned int **)&v332);
    goto LABEL_159;
  }
LABEL_164:
  if ( (a9 & 2) == 0 )
    goto LABEL_165;
  v186 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))get_hexdsp(v29, v31);
  v31 = (unsigned __int64)&v346;
  if ( v186(217, &v346) )
    goto LABEL_165;
  v352 = nullptr;
  v353 = 0;
  v187 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(217, &v346);
  v31 = (unsigned __int64)&v346;
  v188 = 227;
  v189 = v187(227, &v346, 0);
  if ( (_DWORD)v347 != v189 )
  {
    while ( 1 )
    {
      v191 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
      if ( v191 != sub_BA40 )
        break;
      if ( *(_QWORD *)(a2 + 56) )
      {
        v192 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)v189 + 8);
        goto LABEL_274;
      }
LABEL_270:
      v190 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v188, v31);
      v31 = (unsigned __int64)&v346;
      v188 = 227;
      v189 = v190(227, &v346, v189 + 1);
      if ( (_DWORD)v347 == v189 )
        goto LABEL_330;
    }
    v31 = v189;
    v188 = a2;
    v192 = v191(a2, v189);
LABEL_274:
    if ( v192 == 1 )
    {
      v193 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
      if ( v193 == sub_BA80 )
      {
        v282 = **(_DWORD **)(*(_QWORD *)(a2 + 48) + 24LL * (int)v189);
      }
      else
      {
        v31 = v189;
        v188 = a2;
        v282 = v193(a2, v189, 0);
      }
      v350 = 0;
      v351 = 0;
      v194 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v188, v31);
      v195 = (__int64 (__fastcall *)(__int64, int, int))(&qword_C8 + 5);
      v196 = (unsigned __int64)&v350;
      v194(205, &v350, v189);
      v197 = (int)v282;
      while ( 1 )
      {
        v198 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v195, v196);
        if ( !v198(213, &v346, (unsigned int)v197) )
          goto LABEL_309;
        v199 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(213, &v346);
        if ( !v199(205, &v350, (unsigned int)v197) )
          break;
        v201 = *(_QWORD *)a2;
        v202 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
        if ( v202 == sub_BA40 )
        {
          if ( !*(_QWORD *)(a2 + 56) )
          {
            v203 = *(_QWORD *)(a2 + 176);
            goto LABEL_283;
          }
          v207 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)v197 + 8);
        }
        else
        {
          v207 = v202(a2, v197);
          v201 = *(_QWORD *)a2;
        }
        if ( v207 != 1 )
        {
          v224 = *(__int64 (__fastcall **)(__int64, int))(v201 + 96);
          v203 = *(_QWORD *)(a2 + 176);
          if ( v224 != sub_BA40 )
          {
            v204 = v224(a2, v189);
LABEL_285:
            sub_64B50((unsigned int)&v354, v203, (unsigned int)"Block %d has %d!=1 successors", v189, v204, v200);
            v205 = _mm_loadu_si128(&v355);
            v206 = v350;
            *(_QWORD *)a1 = v354;
            *(_BYTE *)(a1 + 24) = 1;
            *(__m128i *)(a1 + 8) = v205;
            qfree(v206);
            if ( v352 )
            {
              *(_QWORD *)&v353 = 0;
              qfree(v352);
            }
            goto LABEL_168;
          }
LABEL_283:
          v204 = 0;
          if ( *(_QWORD *)(a2 + 56) )
            v204 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)v189 + 8);
          goto LABEL_285;
        }
        v208 = *(__int64 (__fastcall **)(__int64, int, int))(v201 + 112);
        v195 = sub_BA80;
        if ( v208 == sub_BA80 )
        {
          v196 = *(_QWORD *)(a2 + 48);
          LODWORD(v197) = **(_DWORD **)(v196 + 24 * v197);
        }
        else
        {
          v196 = (unsigned int)v197;
          v195 = (__int64 (__fastcall *)(__int64, int, int))a2;
          v197 = (int)v208(a2, v197, 0);
        }
      }
      LODWORD(v197) = v189;
LABEL_309:
      v31 = (unsigned __int64)v352;
      v354 = (unsigned __int64 *)__PAIR64__(v282, v189);
      v355.m128i_i32[0] = v197;
      v211 = v353;
      v212 = v353 + 1;
      if ( &v354 < (unsigned __int64 **)v352 || &v354 >= (unsigned __int64 **)&v352[3 * *((_QWORD *)&v353 + 1)] )
      {
        if ( *((_QWORD *)&v353 + 1) < v212 )
        {
          v352 = (int *)qvector_reserve(&v352, v352, v212, 12);
          v31 = (unsigned __int64)v352;
          v211 = v353;
        }
        v214 = v31 + 12 * v211;
        *(_QWORD *)v214 = v354;
        *(_DWORD *)(v214 + 8) = v355.m128i_i32[0];
      }
      else
      {
        if ( *((_QWORD *)&v353 + 1) < v212 )
        {
          v352 = (int *)qvector_reserve(&v352, v352, v212, 12);
          v31 = (unsigned __int64)v352;
          v211 = v353;
        }
        v213 = (unsigned int *)(v31 + 12 * v211);
        *v213 = v189;
        v213[1] = v282;
        v213[2] = v197;
      }
      v188 = v350;
      *(_QWORD *)&v353 = v353 + 1;
      qfree(v350);
    }
    goto LABEL_270;
  }
LABEL_330:
  if ( !(_QWORD)v353 )
    goto LABEL_331;
  sub_2A2F0(a2);
  v225 = v352;
  v348 = 0;
  v349 = 0;
  v295 = &v352[3 * v353];
  if ( v295 != v352 )
  {
    do
    {
      v226 = *(_QWORD *)(a2 + 72);
      v227 = *(_QWORD *)(v226 + 24LL * *v225 + 8);
      if ( v227 )
      {
        v285 = (const void **)(v226 + 24LL * *v225);
        v228 = (unsigned int *)qalloc_or_throw(4 * v227);
        v229 = (char *)v228;
        v31 = (unsigned __int64)*v285;
        memcpy(v228, *v285, 4 * v227);
        v230 = v228;
        *(_DWORD *)(a2 + 464) += v227;
        v290 = &v228[v227];
        if ( v290 != v228 )
        {
          do
          {
            v231 = *v230;
            v232 = *v225;
            v233 = a2 + 408;
            v234 = *(_QWORD *)(a2 + 416);
            v311 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v230), _mm_cvtsi32_si128(*v225)).m128i_u64[0];
            if ( !v234 )
              goto LABEL_351;
            do
            {
              while ( v231 <= *(_DWORD *)(v234 + 32)
                   && (v231 != *(_DWORD *)(v234 + 32) || v232 <= *(_DWORD *)(v234 + 36)) )
              {
                v233 = v234;
                v234 = *(_QWORD *)(v234 + 16);
                if ( !v234 )
                  goto LABEL_347;
              }
              v234 = *(_QWORD *)(v234 + 24);
            }
            while ( v234 );
LABEL_347:
            if ( a2 + 408 == v233
              || v231 < *(_DWORD *)(v233 + 32)
              || v231 == *(_DWORD *)(v233 + 32) && v232 < *(_DWORD *)(v233 + 36) )
            {
LABEL_351:
              v229 = (char *)(a2 + 400);
              v354 = &v311;
              v233 = sub_2A220((_QWORD *)(a2 + 400), v233, (__int64)&unk_78AE8, &v354);
            }
            v354 = *(unsigned __int64 **)(v233 + 40);
            v355.m128i_i32[0] = *(_DWORD *)(v233 + 48);
            v286 = *v225;
            v235 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))get_hexdsp(v229, v233);
            v235(266, a2, (unsigned int)v231, v286);
            v31 = (unsigned int)v231;
            v229 = (char *)a2;
            sub_2A560((_QWORD *)a2, v231, v225[2], (__int64)v354, v355.m128i_i8[0]);
            ++v230;
          }
          while ( v290 != v230 );
        }
        if ( v228 )
          qfree(v228);
      }
      v225 += 3;
    }
    while ( v295 != v225 );
  }
  sub_2A2F0(a2);
  v354 = nullptr;
  v355 = 0;
  v236 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a2, v31);
  v237 = (__int64 (__fastcall *)(__int64, int))(&qword_E0 + 3);
  v238 = (unsigned __int64)&v348;
  for ( i = v236(227, &v348, 0); (_DWORD)v349 != i; i = v240(227, &v348, (unsigned int)(i + 1)) )
  {
    v241 = v355.m128i_i64[0];
    v242 = v354;
    LODWORD(v350) = i;
    v243 = v355.m128i_i64[0] + 1;
    if ( &v350 < (__int64 *)v354
      || (v237 = (__int64 (__fastcall *)(__int64, int))((char *)v354 + 4 * v355.m128i_i64[1]), &v350 >= (__int64 *)v237) )
    {
      if ( v355.m128i_i64[1] < v243 )
      {
LABEL_362:
        v237 = (__int64 (__fastcall *)(__int64, int))&v354;
        v354 = (unsigned __int64 *)qvector_reserve(&v354, v354, v243, 4);
        v242 = v354;
        v241 = v355.m128i_i64[0];
      }
    }
    else if ( v355.m128i_i64[1] < v243 )
    {
      goto LABEL_362;
    }
    *((_DWORD *)v242 + v241) = i;
    ++v355.m128i_i64[0];
    v240 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v237, v242);
    v238 = (unsigned __int64)&v348;
    v237 = (__int64 (__fastcall *)(__int64, int))(&qword_E0 + 3);
  }
  v350 = 0;
  v351 = 0;
  while ( v355.m128i_i64[0] )
  {
    v237 = sub_BA60;
    v244 = *((_DWORD *)v354 + --v355.m128i_i64[0]);
    v245 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 104LL);
    if ( v245 != sub_BA60 )
    {
      v238 = v244;
      v237 = (__int64 (__fastcall *)(__int64, int))a2;
      v246 = v245(a2, v244);
      goto LABEL_368;
    }
    if ( *(_QWORD *)(a2 + 80) )
    {
      v246 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 24LL * (int)v244 + 8);
LABEL_368:
      if ( !v246 )
        goto LABEL_369;
    }
    else
    {
LABEL_369:
      v247 = (unsigned __int8 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v237, v238);
      v237 = (__int64 (__fastcall *)(__int64, int))(&qword_C8 + 5);
      v238 = (unsigned __int64)&v350;
      if ( v247(205, &v350, v244) )
      {
        for ( j = 0; ; ++j )
        {
          v249 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
          if ( v249 == sub_BA40 )
          {
            v250 = 0;
            if ( *(_QWORD *)(a2 + 56) )
              v250 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)v244 + 8);
          }
          else
          {
            v238 = v244;
            v237 = (__int64 (__fastcall *)(__int64, int))a2;
            v250 = v249(a2, v244);
          }
          if ( j >= v250 )
            break;
          v251 = sub_BA80;
          v252 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
          if ( v252 == sub_BA80 )
          {
            v253 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL * (int)v244) + 4LL * j);
          }
          else
          {
            v238 = v244;
            v251 = (__int64 (__fastcall *)(__int64, int, int))a2;
            v253 = v252(a2, v244, j);
          }
          v254 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))get_hexdsp(v251, v238);
          v237 = (__int64 (__fastcall *)(__int64, int))(&qword_108 + 2);
          v254(266, a2, v244, v253);
          v255 = v355.m128i_i64[0];
          v238 = (unsigned __int64)v354;
          if ( v355.m128i_i64[1] < (unsigned __int64)(v355.m128i_i64[0] + 1) )
          {
            v237 = (__int64 (__fastcall *)(__int64, int))&v354;
            v354 = (unsigned __int64 *)qvector_reserve(&v354, v354, v355.m128i_i64[0] + 1, 4);
            v238 = (unsigned __int64)v354;
            v255 = v355.m128i_i64[0];
          }
          *(_DWORD *)(v238 + 4 * v255) = v253;
          ++v355.m128i_i64[0];
        }
      }
    }
  }
  v256 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v237, v238);
  v257 = 227;
  v31 = (unsigned __int64)&v350;
  for ( k = v256(227, &v350, 0); ; k = v272(227, &v350, (unsigned int)v261) )
  {
    v259 = k;
    if ( (_DWORD)v351 == k )
      break;
    v260 = *(_QWORD *)(a2 + 320);
    v261 = k + 1;
    if ( v260 )
    {
      v262 = a2 + 312;
      v263 = *(_QWORD *)(a2 + 320);
      do
      {
        v257 = *(_QWORD *)(v263 + 16);
        v31 = *(_QWORD *)(v263 + 24);
        if ( *(_DWORD *)(v263 + 32) >= v259 )
        {
          v262 = v263;
          v263 = *(_QWORD *)(v263 + 16);
        }
        else
        {
          v263 = *(_QWORD *)(v263 + 24);
        }
      }
      while ( v263 );
      if ( (int *)v262 != v296 && *(_DWORD *)(v262 + 32) <= v259 )
      {
        v257 = a2 + 312;
        v273 = *(_QWORD *)(a2 + 320);
        do
        {
          v31 = *(_QWORD *)(v273 + 16);
          if ( *(_DWORD *)(v273 + 32) >= v261 )
          {
            v257 = v273;
            v273 = *(_QWORD *)(v273 + 16);
          }
          else
          {
            v273 = *(_QWORD *)(v273 + 24);
          }
        }
        while ( v273 );
        v271 = a2 + 312;
        if ( (int *)v257 == v296 )
        {
          v271 = a2 + 312;
        }
        else if ( v261 >= *(_DWORD *)(v257 + 32) )
        {
          goto LABEL_399;
        }
        do
        {
          if ( *(_DWORD *)(v260 + 32) >= v261 )
          {
            v271 = v260;
            v260 = *(_QWORD *)(v260 + 16);
          }
          else
          {
            v260 = *(_QWORD *)(v260 + 24);
          }
        }
        while ( v260 );
        v264 = *(_DWORD *)(v262 + 36);
        if ( (int *)v271 == v296 || v261 < *(_DWORD *)(v271 + 32) )
        {
          v265 = (_DWORD *)operator new(0x28u);
          v265[8] = v261;
          v31 = v271;
          v266 = v265;
          v265[9] = 0;
          v257 = a2 + 304;
          v269 = sub_27F70((_QWORD *)(a2 + 304), v271, (unsigned int)v261, v267, v268);
          v271 = v269;
          if ( v270 )
          {
            v257 = v269 || v296 == v270 || v261 < v270[8];
            v31 = (unsigned __int64)v266;
            v271 = (__int64)v266;
            std::_Rb_tree_insert_and_rebalance(v257, v266, v270, v296);
            ++*(_QWORD *)(a2 + 344);
          }
          else if ( v266 )
          {
            v31 = 40;
            v257 = (__int64)v266;
            operator delete(v266, 0x28u);
          }
        }
        *(_DWORD *)(v271 + 36) = v264;
      }
    }
LABEL_399:
    v272 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v257, v31);
    v31 = (unsigned __int64)&v350;
    v257 = 227;
  }
  sub_2A2F0(a2);
  qfree(v350);
  if ( v354 )
  {
    v355.m128i_i64[0] = 0;
    qfree(v354);
  }
  qfree(v348);
LABEL_331:
  if ( v352 )
  {
    *(_QWORD *)&v353 = 0;
    qfree(v352);
  }
LABEL_165:
  if ( (a9 & 1) != 0 )
    sub_2A740((_QWORD *)a2, v31);
  *(_BYTE *)(a1 + 24) = 0;
LABEL_168:
  qfree(v346);
  qfree(v345[0]);
  qfree(v344[0]);
  qfree(v343[0]);
  qfree(v342[0]);
  qfree(0);
  sub_284C0(v358);
  return a1;
}
