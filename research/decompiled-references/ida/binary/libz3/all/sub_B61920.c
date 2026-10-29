__int64 __fastcall sub_B61920(std::thread *a1, __int64 a2, __m128i a3, __m128 a4)
{
  char **v4; // r13
  char **v5; // rbp
  char **v6; // rbx
  char **v7; // rbx
  char **exception; // r12
  void *v9; // rbp
  char **v10; // rbx
  char **v11; // r13
  char **v12; // rax
  _QWORD *v13; // rsi
  char **v14; // rbx
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // ebp
  __int64 *v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // zf
  unsigned int v32; // ebx
  __int64 v33; // r13
  __int64 v34; // r12
  signed __int64 v35; // r14
  __int64 v36; // r12
  void *v37; // rdi
  int v38; // eax
  __m128i v39; // xmm0
  _BYTE *v40; // r15
  signed __int64 v41; // r14
  void *v42; // rdi
  _BYTE *v43; // r15
  __int128 v44; // xmm0
  __int64 v45; // rcx
  char v46; // al
  int v47; // edx
  __int64 v48; // rsi
  __int64 v49; // rax
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int128 v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int128 v63; // xmm0
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 *v68; // r12
  __int64 *v69; // r13
  __int64 *v70; // rbp
  __int64 *v71; // r13
  void *v72; // r12
  _QWORD *v73; // rbp
  _QWORD *v74; // r13
  void *v75; // r12
  unsigned int v76; // eax
  _QWORD *v77; // r12
  _QWORD *v78; // rbp
  _QWORD *v79; // rdi
  _QWORD *v80; // rdi
  __int64 v81; // rax
  void *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  __int64 v90; // rbx
  __int64 *v91; // rdx
  unsigned int v92; // eax
  __int64 v93; // rcx
  int v94; // eax
  __int64 *v95; // rcx
  __int64 v96; // r15
  __int64 v97; // rbp
  std::thread *v98; // r14
  __int64 v99; // rdi
  int v100; // edx
  _OWORD *v101; // rax
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  int v105; // r9d
  __int64 *v106; // rbx
  __int64 *v107; // r12
  __int64 v108; // r13
  __int64 *v109; // r15
  __m128i *p_si128; // rbp
  __int64 v111; // rcx
  int v112; // eax
  __int64 *v113; // rcx
  unsigned int v114; // eax
  unsigned int v115; // ecx
  size_t v116; // rsi
  unsigned int v117; // r14d
  unsigned int *v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // r15
  unsigned int v121; // edx
  __int64 v122; // rsi
  int v123; // edx
  __m128i *v124; // rsi
  __int64 v125; // rdi
  _OWORD *v126; // rax
  unsigned int v127; // r11d
  _QWORD *v128; // rax
  _DWORD *v129; // rax
  unsigned int v130; // ebx
  _DWORD *v131; // rdx
  __int64 v132; // rax
  _QWORD *v133; // rax
  unsigned int v134; // r14d
  size_t v135; // rdi
  unsigned int *v136; // rax
  __int64 *v137; // r13
  __int64 v138; // r12
  __int64 *v139; // rsi
  _DWORD *v140; // rdi
  int v141; // r10d
  __int64 *v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 *v145; // r12
  __int64 *v146; // rbx
  __int64 *v147; // rbp
  __int64 *v148; // r13
  __int64 v149; // rsi
  __int64 v150; // rdi
  unsigned int v151; // ebp
  size_t v152; // rsi
  unsigned int *v153; // rax
  __int64 v154; // rax
  unsigned int v155; // ebx
  size_t v156; // rsi
  unsigned int *v157; // rax
  __int64 v158; // rcx
  unsigned int v159; // ebp
  size_t v160; // rsi
  unsigned int *v161; // rax
  __int64 v162; // rcx
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  __m128i v165; // xmm0
  unsigned int v166; // ebx
  size_t v167; // r13
  _QWORD *v168; // rax
  __m128i v169; // xmm5
  __int64 v170; // rbp
  std::thread *v171; // rbx
  std::thread *v172; // r12
  __int64 v173; // r15
  __int64 v174; // rax
  std::thread *v175; // r13
  unsigned int v176; // edx
  __int64 v177; // rdx
  std::thread *v178; // rax
  __int64 v179; // rdx
  std::thread *v180; // rax
  __int64 *v181; // rbp
  __int64 *v182; // rbx
  __int64 v183; // r14
  __int64 v184; // rbp
  unsigned __int64 v185; // rbx
  _OWORD *v186; // rax
  int v187; // edx
  int v188; // ecx
  int v189; // r8d
  int v190; // r9d
  __int64 v191; // rbx
  __int64 v192; // rax
  __int64 v193; // rbp
  void (__fastcall ***v194)(void *); // r13
  void (__fastcall ***v195)(_QWORD); // rbp
  __int64 *v196; // rbp
  unsigned __int64 v197; // r12
  __int64 v198; // rsi
  int v199; // ebp
  __int64 v200; // r12
  __int64 v201; // rax
  __int64 *v202; // rbp
  __int64 *v203; // r14
  __int64 v204; // rsi
  __int64 v205; // rdi
  __int64 v206; // r15
  _QWORD *v207; // r13
  _QWORD *v208; // r14
  __int64 v209; // rsi
  __int64 v210; // rdi
  _QWORD *v211; // rax
  _QWORD *v212; // rax
  __int64 *v213; // r13
  __int64 *v214; // rbx
  __int64 v215; // rcx
  int v216; // eax
  __int64 *v217; // rcx
  __int64 v218; // rbp
  __int64 v219; // r14
  _QWORD *v220; // rdx
  unsigned int v221; // eax
  unsigned int v222; // r15d
  unsigned int v223; // ecx
  unsigned int *v224; // rax
  __int64 v225; // rcx
  _QWORD *v226; // rdx
  int v227; // [rsp+0h] [rbp-3B8h]
  unsigned int v228; // [rsp+4h] [rbp-3B4h]
  int v229; // [rsp+4h] [rbp-3B4h]
  std::thread *v230; // [rsp+8h] [rbp-3B0h]
  __int64 v231; // [rsp+10h] [rbp-3A8h]
  __int64 v232; // [rsp+10h] [rbp-3A8h]
  __int64 v233; // [rsp+18h] [rbp-3A0h]
  __int64 v234[2]; // [rsp+20h] [rbp-398h] BYREF
  __int64 v235; // [rsp+30h] [rbp-388h]
  __int64 v236; // [rsp+38h] [rbp-380h]
  __int64 v237; // [rsp+40h] [rbp-378h]
  void *v238; // [rsp+48h] [rbp-370h]
  __int64 v239; // [rsp+50h] [rbp-368h]
  __int64 v240; // [rsp+58h] [rbp-360h]
  unsigned int *v241; // [rsp+60h] [rbp-358h]
  __int64 *v242; // [rsp+68h] [rbp-350h]
  __m128i *v243; // [rsp+70h] [rbp-348h]
  _QWORD *v244; // [rsp+78h] [rbp-340h]
  _BYTE v245[25]; // [rsp+80h] [rbp-338h] BYREF
  __m128i v246; // [rsp+A0h] [rbp-318h]
  __m128i v247; // [rsp+B0h] [rbp-308h] BYREF
  __m128i v248; // [rsp+C0h] [rbp-2F8h] BYREF
  __m128i v249; // [rsp+D0h] [rbp-2E8h] BYREF
  __m128i v250; // [rsp+E0h] [rbp-2D8h] BYREF
  __m128i v251; // [rsp+F0h] [rbp-2C8h] BYREF
  __m128i v252; // [rsp+100h] [rbp-2B8h] BYREF
  __m128i v253; // [rsp+110h] [rbp-2A8h] BYREF
  __m128i v254[2]; // [rsp+120h] [rbp-298h] BYREF
  __m128i v255; // [rsp+140h] [rbp-278h]
  __m128i v256; // [rsp+150h] [rbp-268h] BYREF
  __m128i v257; // [rsp+160h] [rbp-258h] BYREF
  __m128i v258[2]; // [rsp+170h] [rbp-248h] BYREF
  char v259; // [rsp+195h] [rbp-223h] BYREF
  char v260; // [rsp+196h] [rbp-222h] BYREF
  unsigned int v261; // [rsp+198h] [rbp-220h] BYREF
  unsigned int v262; // [rsp+19Ch] [rbp-21Ch] BYREF
  unsigned int v263; // [rsp+1A0h] [rbp-218h] BYREF
  unsigned int v264; // [rsp+1A4h] [rbp-214h] BYREF
  unsigned int v265; // [rsp+1A8h] [rbp-210h] BYREF
  int v266; // [rsp+1ACh] [rbp-20Ch]
  unsigned int v267; // [rsp+1B0h] [rbp-208h] BYREF
  int v268; // [rsp+1B4h] [rbp-204h] BYREF
  __int64 v269; // [rsp+1B8h] [rbp-200h] BYREF
  _QWORD *v270; // [rsp+1C0h] [rbp-1F8h] BYREF
  __int64 *v271; // [rsp+1C8h] [rbp-1F0h] BYREF
  _QWORD *v272; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int64 v273; // [rsp+1D8h] [rbp-1E0h] BYREF
  _DWORD *v274; // [rsp+1E0h] [rbp-1D8h] BYREF
  void *v275; // [rsp+1E8h] [rbp-1D0h] BYREF
  __int64 v276; // [rsp+1F0h] [rbp-1C8h] BYREF
  __int64 *v277; // [rsp+1F8h] [rbp-1C0h]
  void *ptr[2]; // [rsp+200h] [rbp-1B8h] BYREF
  int v279; // [rsp+210h] [rbp-1A8h]
  void *v280[2]; // [rsp+220h] [rbp-198h] BYREF
  _QWORD v281[2]; // [rsp+230h] [rbp-188h] BYREF
  __int128 v282; // [rsp+240h] [rbp-178h] BYREF
  __m128i v283; // [rsp+250h] [rbp-168h]
  __int64 v284; // [rsp+260h] [rbp-158h] BYREF
  _OWORD v285[2]; // [rsp+280h] [rbp-138h] BYREF
  __int64 v286; // [rsp+2A0h] [rbp-118h]
  _OWORD v287[2]; // [rsp+2B0h] [rbp-108h] BYREF
  __int64 v288; // [rsp+2D0h] [rbp-E8h]
  void *v289; // [rsp+2D8h] [rbp-E0h]
  __int64 v290; // [rsp+2E0h] [rbp-D8h]
  int v291; // [rsp+2E8h] [rbp-D0h]
  __int128 v292; // [rsp+2F0h] [rbp-C8h]
  int v293; // [rsp+300h] [rbp-B8h]
  __m128i si128; // [rsp+310h] [rbp-A8h] BYREF
  __m128i v295; // [rsp+320h] [rbp-98h]
  void *v296[2]; // [rsp+330h] [rbp-88h]
  __m128i v297; // [rsp+340h] [rbp-78h]
  __m128i v298; // [rsp+350h] [rbp-68h]
  __m128i v299; // [rsp+360h] [rbp-58h]
  __m128 v300; // [rsp+370h] [rbp-48h]

  v230 = a1;
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  v237 = a2;
  v261 = 0;
  v17 = std::thread::hardware_concurrency(a1);
  v18 = *(_QWORD *)a1;
  v19 = v17;
  v20 = *(_DWORD *)(v16 + 540);
  v21 = *(_DWORD **)(*(_QWORD *)a1 + 112LL);
  if ( v20 > v19 )
    v20 = v19;
  v22 = v21[132];
  v239 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  v262 = v20;
  v240 = __PAIR64__(v21[135], v22);
  v23 = v21[136];
  v264 = v22;
  v24 = 40;
  v263 = v23;
  v21[135] = 1;
  if ( v23 <= 0x28 )
    v24 = v23;
  v21[132] = v24;
  v25 = v24;
  v26 = *(__int64 **)(a2 + 8);
  if ( v26 )
    v27 = *((_DWORD *)v26 - 1);
  else
    v27 = 0;
  v261 = sub_8FD5F0(v18, v27, v26, 1u, a3, a4);
  v28 = v261;
  if ( v261 )
    goto LABEL_50;
  v29 = *(_QWORD *)v230;
  if ( *(_DWORD *)(*(_QWORD *)v230 + 10324LL) < v25 )
    goto LABEL_50;
  v30 = *(_QWORD *)(v29 + 104);
  v270 = nullptr;
  v271 = nullptr;
  v31 = *(_QWORD *)(v30 + 912) == 0;
  v235 = v30;
  v272 = nullptr;
  v265 = -1;
  v244 = v281;
  v280[0] = v281;
  v280[1] = nullptr;
  LOBYTE(v281[0]) = 0;
  v266 = 0;
  v267 = 0;
  v259 = 0;
  v268 = 0;
  if ( !v31 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(si128.m128i_i64, "trace streams have to be off in parallel mode");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &si128);
    sub_233E40((__int64)&si128);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v238 = &v273;
  sub_1858590(&v273, v29 + 120);
  v228 = v262;
  if ( !v262 )
  {
    v233 = 0;
    goto LABEL_89;
  }
  v32 = 0;
  v233 = 0;
  v33 = *(_QWORD *)(*(_QWORD *)v230 + 112LL);
LABEL_12:
  v269 = v233;
  sub_B63600(&v269);
  v233 = v269;
  v34 = *(unsigned int *)(v269 - 4);
  while ( 1 )
  {
    v35 = *(_QWORD *)(v33 + 112);
    v255 = _mm_loadu_si128((const __m128i *)v33);
    v36 = v233 + 760 * v34;
    v256 = _mm_loadu_si128((const __m128i *)(v33 + 16));
    v37 = (void *)(v36 + 120);
    v257 = _mm_loadu_si128((const __m128i *)(v33 + 32));
    v258[0] = _mm_loadu_si128((const __m128i *)(v33 + 48));
    *(__int32 *)((char *)&v258[0].m128i_i32[3] + 3) = *(_DWORD *)(v33 + 63);
    *(__m128i *)v36 = v255;
    *(__m128i *)(v36 + 16) = _mm_load_si128(&v256);
    *(__m128i *)(v36 + 32) = _mm_load_si128(&v257);
    *(__m128i *)(v36 + 48) = _mm_load_si128(v258);
    v38 = *(__int32 *)((char *)&v258[0].m128i_i32[3] + 3);
    *(__m128i *)(v36 + 72) = _mm_loadu_si128((const __m128i *)(v33 + 72));
    v39 = _mm_loadu_si128((const __m128i *)(v33 + 88));
    *(_DWORD *)(v36 + 63) = v38;
    *(_QWORD *)(v36 + 104) = v36 + 120;
    v40 = *(_BYTE **)(v33 + 104);
    *(__m128i *)(v36 + 88) = v39;
    if ( (unsigned __int64)v35 > 0xF )
    {
      if ( v35 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v35 + 1 < 0 )
        std::__throw_bad_alloc();
      v83 = (void *)operator new(v35 + 1);
      *(_QWORD *)(v36 + 104) = v83;
      *(_QWORD *)(v36 + 120) = v35;
      memcpy(v83, v40, v35);
      v37 = *(void **)(v36 + 104);
    }
    else if ( v35 == 1 )
    {
      *(_BYTE *)(v36 + 120) = *v40;
    }
    else if ( v35 )
    {
      memcpy(v37, v40, v35);
      v37 = *(void **)(v36 + 104);
    }
    *(_QWORD *)(v36 + 112) = v35;
    *((_BYTE *)v37 + v35) = 0;
    v41 = *(_QWORD *)(v33 + 144);
    v42 = (void *)(v36 + 152);
    *(_QWORD *)(v36 + 136) = v36 + 152;
    v43 = *(_BYTE **)(v33 + 136);
    if ( (unsigned __int64)v41 > 0xF )
    {
      if ( v41 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( v41 + 1 < 0 )
        std::__throw_bad_alloc();
      v84 = operator new(v41 + 1);
      *(_QWORD *)(v36 + 136) = v84;
      v42 = (void *)v84;
      *(_QWORD *)(v36 + 152) = v41;
LABEL_59:
      memcpy(v42, v43, v41);
      v42 = *(void **)(v36 + 136);
      goto LABEL_19;
    }
    if ( v41 != 1 )
    {
      if ( !v41 )
        goto LABEL_19;
      goto LABEL_59;
    }
    *(_BYTE *)(v36 + 152) = *v43;
LABEL_19:
    *(_QWORD *)(v36 + 144) = v41;
    ++v32;
    *((_BYTE *)v42 + v41) = 0;
    v44 = *(_OWORD *)(v33 + 168);
    v45 = *(_QWORD *)(v33 + 216);
    *(_QWORD *)(v36 + 184) = *(_QWORD *)(v33 + 184);
    v46 = *(_BYTE *)(v33 + 192);
    v47 = *(_DWORD *)(v33 + 224);
    v48 = *(_QWORD *)(v33 + 208);
    *(_QWORD *)(v36 + 216) = v45;
    *(_BYTE *)(v36 + 192) = v46;
    v49 = *(_QWORD *)(v33 + 196);
    *(_DWORD *)(v36 + 224) = v47;
    *(_QWORD *)(v36 + 196) = v49;
    LOWORD(v49) = *(_WORD *)(v33 + 204);
    *(_QWORD *)(v36 + 208) = v48;
    *(_WORD *)(v36 + 204) = v49;
    LOBYTE(v49) = *(_BYTE *)(v33 + 228);
    *(_OWORD *)(v36 + 168) = v44;
    *(_BYTE *)(v36 + 228) = v49;
    *(_DWORD *)(v36 + 232) = *(_DWORD *)(v33 + 232);
    *(_QWORD *)(v36 + 240) = *(_QWORD *)(v33 + 240);
    v246 = _mm_loadu_si128((const __m128i *)(v33 + 248));
    v247 = _mm_loadu_si128((const __m128i *)(v33 + 264));
    v248 = _mm_loadu_si128((const __m128i *)(v33 + 280));
    v249 = _mm_loadu_si128((const __m128i *)(v33 + 296));
    v250 = _mm_loadu_si128((const __m128i *)(v33 + 312));
    v251 = _mm_loadu_si128((const __m128i *)(v33 + 328));
    v252 = _mm_loadu_si128((const __m128i *)(v33 + 344));
    v253 = _mm_loadu_si128((const __m128i *)(v33 + 360));
    v254[0] = _mm_loadu_si128((const __m128i *)(v33 + 376));
    *(__int32 *)((char *)&v254[0].m128i_i32[3] + 3) = *(_DWORD *)(v33 + 391);
    *(__m128i *)(v36 + 248) = v246;
    *(__m128i *)(v36 + 264) = _mm_load_si128(&v247);
    *(__m128i *)(v36 + 280) = _mm_load_si128(&v248);
    *(__m128i *)(v36 + 296) = _mm_load_si128(&v249);
    *(__m128i *)(v36 + 312) = _mm_load_si128(&v250);
    *(__m128i *)(v36 + 328) = _mm_load_si128(&v251);
    *(__m128i *)(v36 + 344) = _mm_load_si128(&v252);
    *(__m128i *)(v36 + 360) = _mm_load_si128(&v253);
    *(__m128i *)(v36 + 376) = _mm_load_si128(v254);
    v50 = _mm_loadu_si128((const __m128i *)(v33 + 396));
    *(_DWORD *)(v36 + 391) = *(__int32 *)((char *)&v254[0].m128i_i32[3] + 3);
    *(__m128i *)v245 = v50;
    LODWORD(v49) = *(_DWORD *)(v33 + 440);
    *(__m128i *)&v245[9] = _mm_loadu_si128((const __m128i *)(v33 + 405));
    *(__m128i *)(v36 + 396) = _mm_load_si128((const __m128i *)v245);
    v51 = _mm_loadu_si128((const __m128i *)&v245[9]);
    *(_DWORD *)(v36 + 440) = v49;
    v52 = *(_QWORD *)(v33 + 444);
    *(__m128i *)(v36 + 405) = v51;
    v53 = _mm_loadu_si128((const __m128i *)(v33 + 424));
    *(_QWORD *)(v36 + 444) = v52;
    LODWORD(v52) = *(_DWORD *)(v33 + 452);
    *(__m128i *)(v36 + 424) = v53;
    v54 = *(_OWORD *)(v33 + 488);
    *(_DWORD *)(v36 + 452) = v52;
    v55 = *(_QWORD *)(v33 + 456);
    *(_OWORD *)(v36 + 488) = v54;
    v56 = _mm_loadu_si128((const __m128i *)(v33 + 504));
    v57 = v55 << 24 >> 24;
    *(_DWORD *)(v36 + 456) = v57;
    *(_BYTE *)(v36 + 460) = BYTE4(v57);
    *(_DWORD *)(v36 + 464) = *(_DWORD *)(v33 + 464);
    *(_DWORD *)(v36 + 468) = *(_DWORD *)(v33 + 468);
    *(_WORD *)(v36 + 472) = *(_WORD *)(v33 + 472);
    *(_DWORD *)(v36 + 476) = *(_DWORD *)(v33 + 476);
    *(_BYTE *)(v36 + 480) = *(_BYTE *)(v33 + 480);
    *(_DWORD *)(v36 + 484) = *(_DWORD *)(v33 + 484);
    *(__m128i *)(v36 + 504) = v56;
    v58 = _mm_loadu_si128((const __m128i *)(v33 + 528));
    v59 = *(_QWORD *)(v33 + 556);
    *(_DWORD *)(v36 + 520) = *(_DWORD *)(v33 + 520);
    LOBYTE(v57) = *(_BYTE *)(v33 + 524);
    *(_QWORD *)(v36 + 556) = v59;
    v60 = *(_QWORD *)(v33 + 580);
    *(_BYTE *)(v36 + 524) = v57;
    v61 = *(_QWORD *)(v33 + 544);
    *(__m128i *)(v36 + 528) = v58;
    v58.m128i_i64[0] = *(_QWORD *)(v33 + 608);
    *(_QWORD *)(v36 + 544) = v61;
    LOBYTE(v61) = *(_BYTE *)(v33 + 552);
    *(_QWORD *)(v36 + 580) = v60;
    v62 = *(_QWORD *)(v33 + 588);
    *(_BYTE *)(v36 + 552) = v61;
    LOBYTE(v61) = *(_BYTE *)(v33 + 564);
    *(_QWORD *)(v36 + 608) = v58.m128i_i64[0];
    v63 = *(_OWORD *)(v33 + 624);
    *(_BYTE *)(v36 + 564) = v61;
    v64 = *(_QWORD *)(v33 + 568);
    *(_OWORD *)(v36 + 624) = v63;
    *(_QWORD *)(v36 + 568) = v64;
    LOWORD(v64) = *(_WORD *)(v33 + 576);
    *(_QWORD *)(v36 + 588) = v62;
    *(_WORD *)(v36 + 576) = v64;
    *(_BYTE *)(v36 + 596) = *(_BYTE *)(v33 + 596);
    *(_QWORD *)(v36 + 600) = *(_QWORD *)(v33 + 600);
    *(_BYTE *)(v36 + 616) = *(_BYTE *)(v33 + 616);
    *(_QWORD *)&v63 = *(_QWORD *)(v33 + 656);
    *(_DWORD *)(v36 + 640) = *(_DWORD *)(v33 + 640);
    LOBYTE(v64) = *(_BYTE *)(v33 + 644);
    *(_QWORD *)(v36 + 656) = v63;
    v65 = _mm_loadu_si128((const __m128i *)(v33 + 664));
    *(_BYTE *)(v36 + 644) = v64;
    v66 = *(_QWORD *)(v33 + 648);
    *(__m128i *)(v36 + 664) = v65;
    v65.m128i_i64[0] = *(_QWORD *)(v33 + 688);
    *(_QWORD *)(v36 + 648) = v66;
    LODWORD(v66) = *(_DWORD *)(v33 + 680);
    *(_QWORD *)(v36 + 688) = v65.m128i_i64[0];
    v65.m128i_i64[0] = *(_QWORD *)(v33 + 736);
    *(_DWORD *)(v36 + 680) = v66;
    LODWORD(v66) = *(_DWORD *)(v33 + 696);
    *(_QWORD *)(v36 + 736) = v65.m128i_i64[0];
    *(_DWORD *)(v36 + 696) = v66;
    *(_QWORD *)(v36 + 704) = *(_QWORD *)(v33 + 704);
    *(_DWORD *)(v36 + 712) = *(_DWORD *)(v33 + 712);
    *(_WORD *)(v36 + 716) = *(_WORD *)(v33 + 716);
    *(_DWORD *)(v36 + 720) = *(_DWORD *)(v33 + 720);
    *(_QWORD *)(v36 + 724) = *(_QWORD *)(v33 + 724);
    *(_BYTE *)(v36 + 732) = *(_BYTE *)(v33 + 732);
    *(_BYTE *)(v36 + 744) = *(_BYTE *)(v33 + 744);
    *(_QWORD *)(v36 + 752) = *(_QWORD *)(v33 + 752);
    v67 = *(unsigned int *)(v233 - 4);
    v34 = (unsigned int)(v67 + 1);
    *(_DWORD *)(v233 - 4) = v34;
    *(_BYTE *)(v233 + 760 * v67 + 725) = 0;
    v228 = v262;
    if ( v32 >= v262 )
      break;
    v33 = *(_QWORD *)(*(_QWORD *)v230 + 112LL);
    if ( (_DWORD)v34 == *(_DWORD *)(v233 - 8) )
      goto LABEL_12;
  }
  if ( v262 )
  {
    v236 = v233;
    do
    {
      v231 = sub_186B270(0x3D0u);
      sub_15DD980(v231);
      v85 = v270;
      if ( v270 )
      {
        v86 = *((_DWORD *)v270 - 1);
        if ( v86 == *((_DWORD *)v270 - 2) )
        {
          v155 = (3 * v86 + 1) >> 1;
          v156 = 8 * v155 + 8;
          if ( 8 * v86 + 8 >= (unsigned int)v156 || v86 >= v155 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(si128.m128i_i64, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &si128);
            sub_233E40((__int64)&si128);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v157 = (unsigned int *)sub_186B300(v270 - 1, v156);
          v158 = v157[1];
          v85 = v157 + 2;
          *v157 = v155;
          v270 = v85;
          LODWORD(v157) = v158;
          v89 = &v85[v158];
          v88 = (_DWORD)v157 + 1;
        }
        else
        {
          v87 = v86;
          v88 = v86 + 1;
          v89 = &v270[v87];
        }
      }
      else
      {
        v211 = (_QWORD *)sub_186B270(0x18u);
        v85 = v211 + 1;
        *v211 = 2;
        v88 = 1;
        v270 = v85;
        v89 = v85;
      }
      *v89 = v231;
      *((_DWORD *)v85 - 1) = v88;
      v90 = sub_186B270(0x2930u);
      sub_8FBD90(v90, v231, v236, (__int64)v238);
      v91 = v271;
      if ( v271 )
      {
        v92 = *((_DWORD *)v271 - 1);
        if ( v92 == *((_DWORD *)v271 - 2) )
        {
          v159 = (3 * v92 + 1) >> 1;
          v160 = 8 * v159 + 8;
          if ( 8 * v92 + 8 >= (unsigned int)v160 || v92 >= v159 )
          {
            v10 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(si128.m128i_i64, "Overflow encountered when expanding vector");
            *v10 = (char *)off_1C63128;
            sub_2333C0(v10 + 1, &si128);
            sub_233E40((__int64)&si128);
            __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v161 = (unsigned int *)sub_186B300(v271 - 1, v160);
          v162 = v161[1];
          v91 = (__int64 *)(v161 + 2);
          *v161 = v159;
          v271 = v91;
          LODWORD(v161) = v162;
          v95 = &v91[v162];
          v94 = (_DWORD)v161 + 1;
        }
        else
        {
          v93 = v92;
          v94 = v92 + 1;
          v95 = &v271[v93];
        }
      }
      else
      {
        v212 = (_QWORD *)sub_186B270(0x18u);
        v91 = v212 + 1;
        *v212 = 2;
        v94 = 1;
        v271 = v91;
        v95 = v91;
      }
      v96 = v235;
      v97 = v231;
      *v95 = v90;
      v98 = v230;
      *((_DWORD *)v91 - 1) = v94;
      v99 = *(_QWORD *)v230;
      *(__m128i *)v234 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v96, (__m128i)(unsigned __int64)v231);
      sub_8F8AF0(
        v99,
        v90,
        v227,
        (int)v230,
        v231,
        v233,
        v234[0],
        v234[1],
        v235,
        v236,
        v237,
        (__int64)v238,
        v239,
        v240,
        v241);
      v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v98 + 112LL) + 484LL) + v229;
      si128 = _mm_load_si128((const __m128i *)v234);
      *(_DWORD *)(v90 + 7504) = v100;
      v296[0] = nullptr;
      v295 = 0;
      v101 = (_OWORD *)sub_186B270(0x80u);
      v296[1] = v101;
      *v101 = 0;
      v101[1] = 0;
      v101[2] = 0;
      v101[3] = 0;
      v101[4] = 0;
      v101[5] = 0;
      v101[6] = 0;
      v101[7] = 0;
      v297.m128i_i32[2] = 0;
      v297.m128i_i64[0] = 8;
      v299.m128i_i32[0] = 0;
      v298 = 0;
      if ( v96 != v97 )
      {
        sub_15DA640(si128.m128i_i32[2], si128.m128i_i32[0], v102, v103, v104, v105, v227);
        sub_15D2280(si128.m128i_i64[1], si128.m128i_i64[0]);
      }
      v234[0] = si128.m128i_i64[1];
      v106 = *(__int64 **)(v237 + 8);
      if ( !v106 )
        goto LABEL_129;
      v107 = &v106[*((unsigned int *)v106 - 1)];
      if ( v106 == v107 )
      {
        v106 = nullptr;
LABEL_129:
        v120 = v272;
        p_si128 = &si128;
        if ( v272 )
          goto LABEL_86;
        goto LABEL_130;
      }
      v108 = *v106;
      v109 = *(__int64 **)(v237 + 8);
      p_si128 = &si128;
      if ( v234[0] == si128.m128i_i64[0] )
      {
        if ( v108 )
          ++*(_DWORD *)(v108 + 8);
LABEL_96:
        v133 = (_QWORD *)sub_186B270(0x18u);
        v106 = v133 + 1;
        v113 = v133 + 1;
        *v133 = 2;
        v112 = 1;
        goto LABEL_77;
      }
      v108 = sub_15CFF50(&si128, *v106);
      v106 = nullptr;
      if ( !v108 )
        goto LABEL_96;
LABEL_80:
      ++*(_DWORD *)(v108 + 8);
      if ( !v106 )
        goto LABEL_96;
      while ( 1 )
      {
        v114 = *((_DWORD *)v106 - 1);
        if ( v114 != *((_DWORD *)v106 - 2) )
          break;
        v115 = (3 * v114 + 1) >> 1;
        v116 = 8 * v115 + 8;
        v117 = v115;
        if ( 8 * v114 + 8 >= (unsigned int)v116 || v114 >= v115 )
        {
          v11 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v287, "Overflow encountered when expanding vector");
          *v11 = (char *)off_1C63128;
          sub_2333C0(v11 + 1, v287);
          sub_233E40((__int64)v287);
          __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v118 = (unsigned int *)sub_186B300(v106 - 1, v116);
        v119 = v118[1];
        *v118 = v117;
        v106 = (__int64 *)(v118 + 2);
        ++v109;
        *(_QWORD *)&v118[2 * v119 + 2] = v108;
        v118[1] = v119 + 1;
        if ( v107 == v109 )
          goto LABEL_85;
LABEL_78:
        v108 = *v109;
        if ( si128.m128i_i64[1] == si128.m128i_i64[0] )
        {
          if ( v108 )
            ++*(_DWORD *)(v108 + 8);
        }
        else
        {
          v108 = sub_15CFF50(&si128, *v109);
          if ( v108 )
            goto LABEL_80;
        }
      }
      v111 = v114;
      v112 = v114 + 1;
      v113 = &v106[v111];
LABEL_77:
      ++v109;
      *v113 = v108;
      *((_DWORD *)v106 - 1) = v112;
      if ( v107 != v109 )
        goto LABEL_78;
LABEL_85:
      v120 = v272;
      if ( v272 )
      {
LABEL_86:
        v121 = *((_DWORD *)v120 - 1);
        if ( v121 == *((_DWORD *)v120 - 2) )
        {
          v134 = (3 * v121 + 1) >> 1;
          v135 = 16 * v134 + 8;
          if ( 16 * v121 + 8 >= (unsigned int)v135 || v121 >= v134 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v287, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v287);
            sub_233E40((__int64)v287);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v136 = (unsigned int *)sub_186B270(v135);
          v137 = v272;
          v120 = v136 + 2;
          if ( v272 )
          {
            v138 = *((unsigned int *)v272 - 1);
            v139 = v272;
            v140 = v136 + 2;
            v136[1] = v138;
            v141 = v138;
            v142 = &v137[2 * v138];
            if ( v142 != v137 )
            {
              do
              {
                v143 = *v139;
                v139 += 2;
                v140 += 4;
                *((_QWORD *)v140 - 2) = v143;
                v144 = *(v139 - 1);
                *(v139 - 1) = 0;
                *((_QWORD *)v140 - 1) = v144;
              }
              while ( v139 != v142 );
            }
            v145 = &v137[2 * v138];
            if ( v141 )
            {
              v241 = v136;
              v243 = &si128;
              v242 = v106;
              v146 = v137;
              do
              {
                v147 = (__int64 *)v146[1];
                if ( v147 )
                {
                  v148 = &v147[*((unsigned int *)v147 - 1)];
                  if ( v147 >= v148 )
                    goto LABEL_114;
                  do
                  {
                    while ( 1 )
                    {
                      v149 = *v147;
                      if ( *v147 )
                      {
                        v150 = *v146;
                        v31 = (*(_DWORD *)(v149 + 8))-- == 1;
                        if ( v31 )
                          break;
                      }
                      if ( ++v147 >= v148 )
                        goto LABEL_113;
                    }
                    sub_15D7BC0(v150, v149);
                    ++v147;
                  }
                  while ( v147 < v148 );
LABEL_113:
                  v147 = (__int64 *)v146[1];
                  if ( v147 )
LABEL_114:
                    sub_186B220(v147 - 1);
                }
                v146 += 2;
              }
              while ( v145 != v146 );
              v136 = v241;
              v106 = v242;
              p_si128 = v243;
              v137 = v272;
            }
            v241 = v136;
            sub_186B220(v137 - 1);
            v136 = v241;
            v124 = (__m128i *)&v120[2 * v241[1]];
            v123 = v241[1] + 1;
          }
          else
          {
            v136[1] = 0;
            v124 = (__m128i *)(v136 + 2);
            v123 = 1;
          }
          v272 = v120;
          *v136 = v134;
        }
        else
        {
          v122 = v121;
          v123 = v121 + 1;
          v124 = (__m128i *)&v120[2 * v122];
        }
        goto LABEL_88;
      }
LABEL_130:
      v163 = (_QWORD *)sub_186B270(0x28u);
      v120 = v163 + 1;
      *v163 = 2;
      v123 = 1;
      v272 = v163 + 1;
      v124 = (__m128i *)(v163 + 1);
LABEL_88:
      v125 = v235;
      *v124 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v234), (__m128i)(unsigned __int64)v106);
      *((_DWORD *)v120 - 1) = v123;
      sub_1829880(v125, v232);
      v228 = v229 + 1;
      sub_15CE760(p_si128);
      v236 += 760;
    }
    while ( v228 < v262 );
  }
LABEL_89:
  v126 = (_OWORD *)sub_186B270(0x40u);
  ptr[0] = v126;
  v127 = v262;
  *v126 = 0;
  v126[1] = 0;
  v126[2] = 0;
  v126[3] = 0;
  v279 = 0;
  ptr[1] = &byte_8;
  v277 = nullptr;
  v274 = nullptr;
  v276 = *(_QWORD *)(*(_QWORD *)v230 + 104LL);
  if ( v127 )
  {
    v128 = (_QWORD *)sub_186B270(0x10u);
    *v128 = 2;
    v129 = v128 + 1;
    v130 = 0;
    v274 = v129;
    v131 = v129;
    while ( 1 )
    {
      *v129 = 0;
      ++v130;
      ++*(v131 - 1);
      if ( v130 >= v262 )
        break;
      v132 = (unsigned int)*(v131 - 1);
      if ( (_DWORD)v132 == *(v131 - 2) )
      {
        v151 = (unsigned int)(3 * v132 + 1) >> 1;
        v152 = 4 * v151 + 8;
        if ( 4 * (int)v132 + 8 >= (unsigned int)v152 || (unsigned int)v132 >= v151 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(si128.m128i_i64, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &si128);
          sub_233E40((__int64)&si128);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v153 = (unsigned int *)sub_186B300(v131 - 2, v152);
        v131 = v153 + 2;
        *v153 = v151;
        v154 = v153[1];
        v274 = v131;
        v129 = &v131[v154];
      }
      else
      {
        v129 = &v131[v132];
      }
    }
  }
  v283 = 0u;
  v282 = 0;
  v164 = (_QWORD *)operator new(0x30u);
  *(_QWORD *)&v282 = v164;
  v165 = _mm_loadl_epi64((const __m128i *)&off_1C57540);
  v164[3] = &v274;
  *v164 = v230;
  v164[1] = &v262;
  v164[4] = ptr;
  v164[2] = &v271;
  v164[5] = &v276;
  v237 = (__int64)&v276;
  v286 = 0;
  v283 = _mm_unpacklo_epi64(v165, (__m128i)(unsigned __int64)sub_B60FB0);
  memset(v285, 0, sizeof(v285));
  v236 = (__int64)&v272;
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v271, (__m128i)(unsigned __int64)&v270);
  v295 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v272, (__m128i)(unsigned __int64)&v263);
  *(__m128i *)v296 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v264, (__m128i)(unsigned __int64)&v268);
  v297 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v260, (__m128i)(unsigned __int64)v285);
  v298 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v265, (__m128i)(unsigned __int64)&v261);
  v299 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v259, (__m128i)(unsigned __int64)&v267);
  v234[0] = (__int64)v280;
  v300 = _mm_loadh_ps((const double *)v234);
LABEL_132:
  v166 = v262;
  if ( !v262 )
  {
    while ( 1 )
    {
      v171 = nullptr;
      v170 = -8;
      if ( v259 )
        goto LABEL_153;
LABEL_144:
      if ( !v283.m128i_i64[0] )
        std::__throw_bad_function_call();
      ((void (__fastcall *)(__int128 *))v283.m128i_i64[1])(&v282);
      ++v268;
      v176 = v264 - v263;
      if ( v264 < v263 )
        v176 = 0;
      v263 *= 2;
      v264 = v176;
      if ( !v171 )
        goto LABEL_132;
      v177 = *((unsigned int *)v171 - 1);
      v178 = (std::thread *)((char *)v171 + 8 * v177);
      if ( (_DWORD)v177 )
        break;
LABEL_151:
      sub_186B220((void *)v170);
      v166 = v262;
      if ( v262 )
        goto LABEL_133;
    }
    while ( !*(_QWORD *)v171 )
    {
      v171 = (std::thread *)((char *)v171 + 8);
      if ( v171 == v178 )
        goto LABEL_151;
    }
LABEL_246:
    std::terminate();
  }
LABEL_133:
  v167 = 8LL * v166 + 8;
  v168 = (_QWORD *)sub_186B270(v167);
  v169 = _mm_cvtsi32_si128(v166);
  v170 = (__int64)v168;
  v171 = (std::thread *)(v168 + 1);
  v172 = (std::thread *)((char *)v168 + v167);
  *v168 = _mm_shuffle_epi32(v169, 224).m128i_u64[0];
  memset(v168 + 1, 0, v167 - 8);
  if ( v262 )
  {
    v173 = 0;
    do
    {
      v284 = 0;
      v174 = operator new(0x18u);
      *(_QWORD *)v174 = &off_1C57528;
      *(_DWORD *)(v174 + 8) = v173;
      *(_QWORD *)(v174 + 16) = &si128;
      *(_QWORD *)&v287[0] = v174;
      std::thread::_M_start_thread();
      if ( *(_QWORD *)&v287[0] )
        (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)&v287[0] + 8LL))(*(_QWORD *)&v287[0], v287);
      if ( *(_QWORD *)(v170 + 8 * v173 + 8) )
        goto LABEL_246;
      *(_QWORD *)(v170 + 8 * v173++ + 8) = v284;
    }
    while ( (unsigned int)v173 < v262 );
    v172 = (std::thread *)((char *)v171 + 8 * *(unsigned int *)(v170 + 4));
  }
  if ( v171 != v172 )
  {
    v175 = v171;
    do
    {
      std::thread::join(v175);
      v175 = (std::thread *)((char *)v175 + 8);
    }
    while ( v172 != v175 );
  }
  if ( !v259 )
    goto LABEL_144;
LABEL_153:
  if ( v171 )
  {
    v179 = *((unsigned int *)v171 - 1);
    v180 = (std::thread *)((char *)v171 + 8 * v179);
    if ( (_DWORD)v179 )
    {
      while ( !*(_QWORD *)v171 )
      {
        v171 = (std::thread *)((char *)v171 + 8);
        if ( v171 == v180 )
          goto LABEL_157;
      }
      goto LABEL_246;
    }
LABEL_157:
    sub_186B220((void *)v170);
  }
  v181 = v271;
  if ( v271 )
  {
    v182 = &v271[*((unsigned int *)v271 - 1)];
    if ( v182 != v271 )
    {
      do
        sub_AA6780(*v181++, *(_QWORD *)v230 + 128LL);
      while ( v182 != v181 );
    }
  }
  if ( v265 == -1 )
  {
    if ( v266 == 1 )
    {
      v9 = __cxa_allocate_exception(0x10u);
      sub_182AE00(v9, v267);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'z3_error, (void (*)(void *))sub_26BEA0);
    }
    v12 = (char **)__cxa_allocate_exception(0x28u);
    v13 = (_QWORD *)v234[0];
    v14 = v12;
    *v12 = (char *)off_1C63128;
    sub_2333C0(v12 + 1, v13);
    __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v183 = v235;
  v275 = nullptr;
  v184 = v271[v265];
  v185 = v270[v265];
  v288 = 0;
  v287[0] = _mm_unpacklo_epi64((__m128i)v185, (__m128i)(unsigned __int64)v235);
  v287[1] = 0;
  v186 = (_OWORD *)sub_186B270(0x80u);
  v289 = v186;
  *v186 = 0;
  v186[1] = 0;
  v186[2] = 0;
  v186[3] = 0;
  v186[4] = 0;
  v186[5] = 0;
  v186[6] = 0;
  v186[7] = 0;
  v291 = 0;
  v290 = 8;
  v293 = 0;
  v292 = 0;
  if ( v183 != v185 )
  {
    sub_15DA640(DWORD2(v287[0]), v287[0], v187, v188, v189, v190, v227);
    sub_15D2280(*((_QWORD *)&v287[0] + 1), *(_QWORD *)&v287[0]);
  }
  v28 = v261;
  if ( v261 == -1 )
  {
    v206 = *(_QWORD *)v230;
    v207 = *(_QWORD **)(*(_QWORD *)v230 + 9376LL);
    if ( v207 )
    {
      v208 = &v207[*((unsigned int *)v207 - 1)];
      if ( v207 >= v208 )
        goto LABEL_221;
      do
      {
        v209 = *v207;
        if ( *v207 )
        {
          v210 = *(_QWORD *)(v206 + 9368);
          v31 = (*(_DWORD *)(v209 + 8))-- == 1;
          if ( v31 )
            sub_15D7BC0(v210, v209);
        }
        ++v207;
      }
      while ( v207 < v208 );
      v207 = *(_QWORD **)(v206 + 9376);
      if ( v207 )
LABEL_221:
        *((_DWORD *)v207 - 1) = 0;
    }
    v213 = *(__int64 **)(v184 + 9376);
    if ( v213 )
    {
      v214 = &v213[*((unsigned int *)v213 - 1)];
      if ( v214 != v213 )
      {
        do
        {
          v218 = *v213;
          v219 = *(_QWORD *)v230;
          if ( *(_QWORD *)&v287[0] != *((_QWORD *)&v287[0] + 1) )
            v218 = sub_15CFF50(v287, *v213);
          if ( v218 )
            ++*(_DWORD *)(v218 + 8);
          v220 = *(_QWORD **)(v219 + 9376);
          if ( v220 )
          {
            v221 = *((_DWORD *)v220 - 1);
            if ( v221 == *((_DWORD *)v220 - 2) )
            {
              v222 = (3 * v221 + 1) >> 1;
              v223 = 8 * v222 + 8;
              if ( 8 * v221 + 8 >= v223 || v221 >= v222 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v284, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, &v284);
                sub_233E40((__int64)&v284);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v224 = (unsigned int *)sub_186B300(v220 - 1, v223);
              v225 = v224[1];
              v220 = v224 + 2;
              *(_QWORD *)(v219 + 9376) = v224 + 2;
              *v224 = v222;
              LODWORD(v224) = v225;
              v217 = &v220[v225];
              v216 = (_DWORD)v224 + 1;
            }
            else
            {
              v215 = v221;
              v216 = v221 + 1;
              v217 = &v220[v215];
            }
          }
          else
          {
            v226 = (_QWORD *)sub_186B270(0x18u);
            *v226 = 2;
            v216 = 1;
            v220 = v226 + 1;
            *(_QWORD *)(v219 + 9376) = v220;
            v217 = v220;
          }
          ++v213;
          *v217 = v218;
          *((_DWORD *)v220 - 1) = v216;
        }
        while ( v214 != v213 );
        goto LABEL_217;
      }
    }
    v28 = v261;
  }
  else if ( v261 == 1 )
  {
    sub_8ECB50(v184, (void (****)(void))&v275);
    if ( v275 )
    {
      v191 = *(_QWORD *)v230;
      v192 = sub_1377690(v275, v287);
      v193 = v192;
      if ( v192 )
        ++*(_DWORD *)(v192 + 16);
      v194 = *(void (__fastcall ****)(void *))(v191 + 9320);
      if ( v194 )
      {
        v31 = (*((_DWORD *)v194 + 4))-- == 1;
        if ( v31 )
        {
          (**v194)(v194);
          sub_186B220(v194);
        }
      }
      *(_QWORD *)(v191 + 9320) = v193;
      v28 = v261;
      goto LABEL_173;
    }
LABEL_217:
    v28 = v261;
  }
LABEL_173:
  sub_15CE760(v287);
  v195 = (void (__fastcall ***)(_QWORD))v275;
  if ( v275 )
  {
    v31 = (*((_DWORD *)v275 + 4))-- == 1;
    if ( v31 )
    {
      (**v195)(v195);
      sub_186B220(v195);
    }
  }
  if ( v283.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v283.m128i_i64[0])(&v282, &v282, 3);
  if ( v274 )
    sub_186B220(v274 - 2);
  v196 = v277;
  if ( v277 )
  {
    v197 = (unsigned __int64)&v277[*((unsigned int *)v277 - 1)];
    if ( (unsigned __int64)v277 >= v197 )
      goto LABEL_188;
    do
    {
      while ( 1 )
      {
        v198 = *v196;
        if ( *v196 )
        {
          v31 = (*(_DWORD *)(v198 + 8))-- == 1;
          if ( v31 )
            break;
        }
        if ( (unsigned __int64)++v196 >= v197 )
          goto LABEL_187;
      }
      sub_15D7BC0(v276, v198);
      ++v196;
    }
    while ( (unsigned __int64)v196 < v197 );
LABEL_187:
    v196 = v277;
    if ( v277 )
LABEL_188:
      sub_186B220(v196 - 1);
  }
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  sub_18572D0(v238);
  if ( v280[0] != v244 )
    operator delete(v280[0], v281[0] + 1LL);
  v199 = 0;
  if ( v228 )
  {
    v200 = v235;
    do
    {
      ++v199;
      sub_1829160(v200);
    }
    while ( v199 != v228 );
  }
  v69 = v272;
  if ( v272 )
  {
    v201 = *((unsigned int *)v272 - 1);
    if ( (_DWORD)v201 )
    {
      v202 = &v272[2 * v201];
      do
      {
        v68 = (__int64 *)v69[1];
        if ( v68 )
        {
          v203 = &v68[*((unsigned int *)v68 - 1)];
          if ( v68 >= v203 )
            goto LABEL_23;
          do
          {
            v204 = *v68;
            if ( *v68 )
            {
              v205 = *v69;
              v31 = (*(_DWORD *)(v204 + 8))-- == 1;
              if ( v31 )
                sub_15D7BC0(v205, v204);
            }
            ++v68;
          }
          while ( v68 < v203 );
          v68 = (__int64 *)v69[1];
          if ( v68 )
LABEL_23:
            sub_186B220(v68 - 1);
        }
        v69 += 2;
      }
      while ( v69 != v202 );
      v69 = v272;
    }
    sub_186B220(v69 - 1);
  }
  v70 = v271;
  if ( v271 )
  {
    v71 = &v271[*((unsigned int *)v271 - 1)];
    if ( v271 == v71 )
      goto LABEL_33;
    do
    {
      v72 = (void *)*v70;
      if ( *v70 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(*v70);
        sub_186B220(v72);
      }
      ++v70;
    }
    while ( v71 != v70 );
    v71 = v271;
    if ( v271 )
    {
LABEL_33:
      *((_DWORD *)v71 - 1) = 0;
      sub_186B220(v71 - 1);
    }
  }
  v73 = v270;
  if ( v270 )
  {
    v74 = &v270[*((unsigned int *)v270 - 1)];
    if ( v270 == v74 )
      goto LABEL_40;
    do
    {
      v75 = (void *)*v73;
      if ( *v73 )
      {
        sub_15D95C0(*v73);
        sub_186B220(v75);
      }
      ++v73;
    }
    while ( v74 != v73 );
    v74 = v270;
    if ( v270 )
    {
LABEL_40:
      *((_DWORD *)v74 - 1) = 0;
      sub_186B220(v74 - 1);
    }
  }
  if ( v233 )
  {
    v76 = *(_DWORD *)(v233 - 4);
    if ( v76 )
    {
      v77 = (_QWORD *)v233;
      v78 = (_QWORD *)(v233 + 760LL * v76);
      do
      {
        v79 = (_QWORD *)v77[17];
        if ( v79 != v77 + 19 )
          operator delete(v79, v77[19] + 1LL);
        v80 = (_QWORD *)v77[13];
        if ( v80 != v77 + 15 )
          operator delete(v80, v77[15] + 1LL);
        v77 += 95;
      }
      while ( v77 != v78 );
    }
    sub_186B220((void *)(v233 - 8));
  }
LABEL_50:
  v81 = v239;
  *(_DWORD *)(v239 + 528) = v240;
  *(_DWORD *)(v81 + 540) = HIDWORD(v240);
  return v28;
}

