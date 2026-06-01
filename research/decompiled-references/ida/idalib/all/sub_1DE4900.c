unsigned __int64 __fastcall sub_1DE4900(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __m128 si128; // xmm0
  __int64 v5; // rax
  _DWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  int v8; // edx
  _QWORD *v9; // rax
  __int64 v10; // r15
  bool v11; // zf
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r13
  int v20; // r12d
  int v21; // ebx
  __int64 v22; // rsi
  __int64 v23; // r14
  int v24; // ebp
  char v25; // dl
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rax
  _QWORD *v40; // r12
  _QWORD *v41; // rbx
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rax
  _QWORD *v44; // r14
  _QWORD *v45; // rbp
  _QWORD *v46; // rdi
  void *v47; // rdi
  void **v48; // rbp
  void **v49; // r14
  __int64 *v50; // rbp
  char *v51; // rbx
  unsigned __int64 v52; // rbx
  __int64 v54; // rdx
  char *v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rax
  void **v58; // rcx
  unsigned __int64 v59; // rax
  unsigned int *v60; // r12
  char v61; // dl
  __int64 v62; // rdx
  char v63; // al
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 v66; // rsi
  char v67; // dl
  __int64 v68; // rax
  __m128i *v69; // rdi
  unsigned __int64 v70; // rbp
  int v71; // ecx
  unsigned __int64 v72; // rsi
  char v73; // dl
  __int64 v74; // rax
  int v75; // edx
  char v76; // dl
  void **v77; // rax
  void *v78; // rdx
  int v79; // eax
  __int64 v80; // r12
  void **v81; // rax
  void *v82; // rdx
  __int64 v83; // rbp
  unsigned int v84; // ebx
  unsigned __int64 v85; // rax
  void *v86; // rdx
  unsigned int v87; // eax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  _QWORD *v98; // r15
  _QWORD *v99; // rbx
  unsigned __int64 v100; // rbp
  unsigned __int64 v101; // rax
  _QWORD *v102; // r12
  _QWORD *v103; // r13
  _QWORD *v104; // rdi
  void *v105; // rdi
  void **v106; // r12
  void **v107; // r13
  __int64 v108; // rax
  int v109; // edx
  __int64 v110; // rdx
  char *v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rdi
  unsigned __int64 v114; // r14
  int v115; // eax
  unsigned __int64 v116; // rbp
  unsigned int v117; // eax
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdi
  _QWORD *v125; // r15
  _QWORD *v126; // rbx
  unsigned __int64 v127; // rbp
  unsigned __int64 v128; // rax
  _QWORD *v129; // r12
  _QWORD *v130; // r14
  _QWORD *v131; // rdi
  void *v132; // rdi
  void **v133; // r12
  void **v134; // r14
  __int64 v135; // rdx
  int v136; // eax
  unsigned __int64 v137; // rbx
  __int64 v138; // r8
  unsigned int v139; // ecx
  _QWORD *v140; // rdx
  __int64 v141; // rcx
  int v142; // esi
  char v143; // al
  unsigned __int64 v144; // rbp
  unsigned __int64 v145; // rbx
  unsigned int v146; // eax
  __int64 v147; // rsi
  unsigned __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  unsigned __int64 v152; // rdi
  __int64 v153; // rax
  __int64 v154; // r14
  char v155; // bp
  int v156; // ebx
  char v157; // dl
  unsigned __int64 v158; // r13
  unsigned __int64 v159; // r15
  unsigned int v160; // eax
  __int64 v161; // rsi
  __int64 v162; // rax
  _QWORD *v163; // r14
  _QWORD *v164; // rbx
  unsigned __int64 v165; // r13
  unsigned __int64 v166; // rax
  _QWORD *v167; // r15
  _QWORD *v168; // rbp
  _QWORD *v169; // rdi
  void *v170; // rdi
  void **v171; // rbp
  void **v172; // r15
  void *v173; // rdi
  unsigned __int16 *v174; // rax
  unsigned int *v175; // rbx
  __int64 *v176; // rdi
  unsigned int v177; // eax
  int v178; // edx
  __int64 v179; // rdx
  _QWORD *v180; // r14
  _QWORD *v181; // rbx
  unsigned __int64 v182; // r12
  unsigned __int64 v183; // rax
  _QWORD *v184; // r15
  _QWORD *v185; // rbp
  _QWORD *v186; // rdi
  void *v187; // rdi
  void **v188; // rbp
  void **v189; // r15
  __int64 v190; // rdx
  unsigned __int64 v191; // r13
  __int64 v192; // rax
  int v193; // edx
  unsigned __int64 v194; // r15
  __int64 v195; // rax
  _QWORD *v196; // r14
  unsigned int *v197; // rbp
  __int64 *v198; // rax
  char *v199; // rcx
  __int64 v200; // rdx
  unsigned int v201; // eax
  int v202; // edx
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r9
  unsigned __int64 v206; // rax
  __int64 v207; // rdi
  unsigned __int64 v208; // rax
  char *v209; // rbp
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 *v213; // r9
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rdx
  size_t v218; // rbx
  void *v219; // r12
  char *v220; // rbp
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  unsigned __int64 v225; // rax
  char v226; // dl
  char v227; // cl
  char v228; // dl
  __int64 v229; // rdx
  _QWORD *v230; // rdi
  unsigned int v231; // eax
  __int64 v232; // r8
  __int64 v233; // r9
  unsigned __int64 v234; // rax
  _BYTE *v235; // rdi
  unsigned int v236; // eax
  int v237; // edx
  unsigned __int64 v238; // [rsp+8h] [rbp-620h]
  __int64 *v239; // [rsp+8h] [rbp-620h]
  __int64 v240; // [rsp+8h] [rbp-620h]
  unsigned int v242; // [rsp+24h] [rbp-604h]
  bool v243; // [rsp+24h] [rbp-604h]
  char v244; // [rsp+28h] [rbp-600h]
  __int64 *v245; // [rsp+28h] [rbp-600h]
  __int64 v247; // [rsp+58h] [rbp-5D0h]
  __int64 v248; // [rsp+60h] [rbp-5C8h]
  __int64 v249; // [rsp+68h] [rbp-5C0h]
  char v250; // [rsp+80h] [rbp-5A8h]
  unsigned int v251; // [rsp+80h] [rbp-5A8h]
  unsigned int v252; // [rsp+80h] [rbp-5A8h]
  __int64 v253; // [rsp+88h] [rbp-5A0h]
  __int64 v254; // [rsp+90h] [rbp-598h]
  int v255; // [rsp+98h] [rbp-590h]
  int v256; // [rsp+9Ch] [rbp-58Ch]
  int v257; // [rsp+A0h] [rbp-588h]
  int v258; // [rsp+A8h] [rbp-580h]
  int v259; // [rsp+A8h] [rbp-580h]
  __int64 v260; // [rsp+A8h] [rbp-580h]
  char v261; // [rsp+B0h] [rbp-578h]
  char v262; // [rsp+B0h] [rbp-578h]
  int v263; // [rsp+B0h] [rbp-578h]
  char v264; // [rsp+B7h] [rbp-571h]
  char v265; // [rsp+B7h] [rbp-571h]
  char v266; // [rsp+B7h] [rbp-571h]
  unsigned __int64 v267; // [rsp+C8h] [rbp-560h]
  unsigned int *v268; // [rsp+C8h] [rbp-560h]
  __int64 v269; // [rsp+C8h] [rbp-560h]
  __int64 v270; // [rsp+D8h] [rbp-550h]
  unsigned int *v271; // [rsp+108h] [rbp-520h]
  char v272[8]; // [rsp+140h] [rbp-4E8h] BYREF
  char v273; // [rsp+148h] [rbp-4E0h]
  __m128i v274[2]; // [rsp+150h] [rbp-4D8h] BYREF
  __int64 v275; // [rsp+178h] [rbp-4B0h]
  void *v276; // [rsp+190h] [rbp-498h] BYREF
  __int64 v277; // [rsp+198h] [rbp-490h]
  _BYTE v278[32]; // [rsp+1A0h] [rbp-488h] BYREF
  void *v279[2]; // [rsp+1C0h] [rbp-468h] BYREF
  _BYTE v280[32]; // [rsp+1D0h] [rbp-458h] BYREF
  void *v281; // [rsp+1F0h] [rbp-438h] BYREF
  __m128 v282; // [rsp+1F8h] [rbp-430h]
  _BYTE v283[24]; // [rsp+208h] [rbp-420h] BYREF
  void *v284; // [rsp+220h] [rbp-408h] BYREF
  __int64 v285; // [rsp+228h] [rbp-400h]
  _BYTE v286[32]; // [rsp+230h] [rbp-3F8h] BYREF
  _OWORD v287[2]; // [rsp+250h] [rbp-3D8h] BYREF
  __int64 v288; // [rsp+270h] [rbp-3B8h]
  char v289; // [rsp+278h] [rbp-3B0h]
  int v290; // [rsp+27Ch] [rbp-3ACh]
  void **p_src; // [rsp+280h] [rbp-3A8h]
  void *src; // [rsp+290h] [rbp-398h] BYREF
  size_t n[2]; // [rsp+298h] [rbp-390h] BYREF
  _BYTE v294[136]; // [rsp+2A8h] [rbp-380h] BYREF
  void *ptr[2]; // [rsp+330h] [rbp-2F8h] BYREF
  void *v296; // [rsp+340h] [rbp-2E8h] BYREF
  __int64 v297; // [rsp+348h] [rbp-2E0h]
  __int64 v298; // [rsp+350h] [rbp-2D8h] BYREF
  __int128 v299; // [rsp+358h] [rbp-2D0h]
  char v300; // [rsp+368h] [rbp-2C0h]
  void *v301; // [rsp+370h] [rbp-2B8h]
  __int64 v302; // [rsp+378h] [rbp-2B0h]
  _BYTE v303[16]; // [rsp+380h] [rbp-2A8h] BYREF
  void *v304; // [rsp+390h] [rbp-298h]
  __int64 v305; // [rsp+398h] [rbp-290h]
  _BYTE v306[16]; // [rsp+3A0h] [rbp-288h] BYREF
  __int16 v307; // [rsp+3B0h] [rbp-278h]
  void *v308; // [rsp+3B8h] [rbp-270h]
  __int64 v309; // [rsp+3C0h] [rbp-268h]
  _BYTE v310[40]; // [rsp+3C8h] [rbp-260h] BYREF
  __int128 v311; // [rsp+3F0h] [rbp-238h] BYREF
  _QWORD *v312; // [rsp+400h] [rbp-228h]
  __int64 v313; // [rsp+408h] [rbp-220h]
  _BYTE *v314; // [rsp+410h] [rbp-218h] BYREF
  __int64 v315; // [rsp+418h] [rbp-210h]
  _BYTE v316[80]; // [rsp+420h] [rbp-208h] BYREF
  __int16 v317; // [rsp+470h] [rbp-1B8h]
  void *v318; // [rsp+478h] [rbp-1B0h]
  __int64 v319; // [rsp+480h] [rbp-1A8h]
  _BYTE v320[24]; // [rsp+488h] [rbp-1A0h] BYREF
  __int64 v321; // [rsp+4A0h] [rbp-188h]
  __int64 v322; // [rsp+4A8h] [rbp-180h]
  __int64 v323; // [rsp+4B0h] [rbp-178h]
  __int64 v324; // [rsp+4C0h] [rbp-168h]
  __int64 v325; // [rsp+4C8h] [rbp-160h]
  int v326; // [rsp+4D8h] [rbp-150h]
  char v327; // [rsp+4DCh] [rbp-14Ch]
  void *v328; // [rsp+4E0h] [rbp-148h]
  __int64 v329; // [rsp+4E8h] [rbp-140h]
  _BYTE v330[64]; // [rsp+4F0h] [rbp-138h] BYREF
  __int64 v331; // [rsp+530h] [rbp-F8h]
  __int64 v332; // [rsp+538h] [rbp-F0h]
  void *v333; // [rsp+540h] [rbp-E8h]
  __int64 v334; // [rsp+548h] [rbp-E0h]
  _BYTE v335[96]; // [rsp+550h] [rbp-D8h] BYREF
  __int16 v336; // [rsp+5B0h] [rbp-78h]
  void *v337; // [rsp+5B8h] [rbp-70h]
  __int64 v338; // [rsp+5C0h] [rbp-68h]
  _BYTE v339[96]; // [rsp+5C8h] [rbp-60h] BYREF

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v276 = v278;
  v277 = 0x400000000LL;
  v279[1] = (void *)0x400000000LL;
  v281 = v283;
  v5 = *(_QWORD *)a1;
  v279[0] = v280;
  v248 = v5;
  v282 = si128;
  v283[16] = 0;
  sub_18C79B0(v5, 0, 0, 4);
  v6 = *(_DWORD **)(a2 + 24);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v7 == (char *)sub_B70840 )
    v8 = v6[6];
  else
    v8 = v7();
  v9 = sub_B978D0(*(_QWORD **)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(*(_QWORD *)a1 + 544LL), v8);
  v10 = *(_QWORD *)a1;
  v11 = v9 == nullptr;
  v253 = (__int64)v9;
  v12 = v9 + 5;
  v13 = 0;
  if ( !v11 )
    v13 = (__int64)v12;
  v14 = v13;
  v247 = v13;
  v15 = *(_QWORD *)(v10 + 544);
  *(_QWORD *)(v10 + 544) = v14;
  v249 = v15;
  v16 = *(_QWORD *)(v10 + 512);
  *(_QWORD *)(v10 + 512) = 0;
  v254 = v16;
  v275 = *(_QWORD *)(v10 + 9944);
  v255 = *(_DWORD *)(v10 + 80);
  v256 = *(_DWORD *)(v10 + 2632);
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 2632) = *(_DWORD *)(v10 + 3688);
  WORD2(v312) = 0;
  v17 = *(unsigned int *)(a2 + 40);
  v18 = *(unsigned int *)(a2 + 4);
  v19 = a2 + 48;
  v311 = 0u;
  v20 = *(_DWORD *)(a2 + 16);
  v314 = v316;
  v21 = v18;
  v257 = v17;
  LODWORD(v312) = v18;
  v315 = 0x400000000LL;
  v313 = 0;
  v321 = 0;
  v22 = *(_QWORD *)a1;
  v322 &= 0xFFFFFFFE00000000LL;
  v324 &= 0xFFFFFFFE00000000LL;
  v328 = v330;
  v329 = 0x800000000LL;
  v333 = v335;
  v337 = v339;
  v334 = 0x400000000LL;
  v338 = 0x400000000LL;
  v323 = 0;
  v325 = 0;
  v326 = 0;
  v327 = 0;
  v331 = 0;
  v332 = 0;
  v336 = 0;
  sub_1DC3470((__int64)&src, v22, 18, v18, (v17 << 32) | v18, 0, 0, 0, 0, (__int64)&v311);
  v23 = *(_QWORD *)a1;
  v242 = *(_DWORD *)(*(_QWORD *)a1 + 11200LL);
  v244 = *(_BYTE *)(*(_QWORD *)a1 + 12592LL);
  v250 = *(_BYTE *)(*(_QWORD *)a1 + 11248LL);
  v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + 204LL);
  if ( !v244 )
  {
    sub_1DB82A0(v23);
    if ( !v25 )
      *(_BYTE *)(v23 + 12592) = 1;
  }
  *(_BYTE *)(v23 + 11248) = 0;
  if ( (unsigned __int8)sub_1DE36B0(
                          a1,
                          v21,
                          v19,
                          v20,
                          0,
                          0,
                          si128,
                          a4,
                          (__int64)v279,
                          (__int64)&v276,
                          (__int64)&v281,
                          v274)
    || (v238 = 0, *(_DWORD *)(v23 + 11200) > v242) )
  {
    ptr[1] = (void *)0x400000000LL;
    ptr[0] = &v296;
    v28 = *(_QWORD *)a1;
    v284 = *(void **)(v19 + 8LL * v274[0].m128i_u32[0]);
    *(_QWORD *)&v287[0] = &v284;
    v29 = sub_1DBE4E0(
            v28,
            (__int64)&v311,
            (void (__fastcall *)(__int64, __int64 (__fastcall ***)()))sub_1DB79E0,
            (__int64)v287);
    v34 = sub_19A4F40(*(_QWORD *)a1, v29, v30, v31, v32, v33);
    v35 = LODWORD(ptr[1]);
    v36 = LODWORD(ptr[1]) + 1LL;
    if ( v36 > HIDWORD(ptr[1]) )
    {
      v240 = v34;
      sub_2237220(ptr, &v296, v36, 8);
      v35 = LODWORD(ptr[1]);
      v34 = v240;
    }
    *((_QWORD *)ptr[0] + v35) = v34;
    v37 = *(_DWORD *)(a2 + 36);
    v38 = *(_DWORD *)(a2 + 32);
    ++LODWORD(ptr[1]);
    v238 = sub_C0F470(
             *(_QWORD **)(*(_QWORD *)a1 + 248LL),
             v21,
             v253,
             v38,
             (__int64 *)v276,
             (unsigned int)v277,
             v37,
             (char *)ptr[0],
             LODWORD(ptr[1]),
             v257);
    if ( ptr[0] != &v296 )
      free(ptr[0]);
  }
  *(_DWORD *)(v23 + 11200) = v242;
  *(_BYTE *)(v23 + 12592) = v244;
  *(_BYTE *)(v23 + 11248) = v250;
  v39 = *(_QWORD *)(v23 + 264);
  if ( *(_DWORD *)(v39 + 204) == 5 )
    *(_BYTE *)(v39 + 194) = 1;
  if ( v24 )
    v24 = 3;
  *(_DWORD *)(v39 + 204) = v24;
  if ( !LOBYTE(n[0]) )
    sub_1DBAC30(&src);
  if ( v337 != v339 )
    free(v337);
  if ( v333 != v335 )
    free(v333);
  if ( v328 != v330 )
    free(v328);
  v40 = v314;
  v41 = &v314[32 * (unsigned int)v315];
  if ( v314 != (_BYTE *)v41 )
  {
    do
    {
      v41 -= 4;
      v42 = v41[1];
      if ( v42 )
      {
        v43 = v41[2];
        if ( v43 )
        {
          if ( v42 < v43 || v42 > v43 + 14848 )
          {
            v44 = *(_QWORD **)(v42 + 528);
            v45 = &v44[8 * (unsigned __int64)*(unsigned int *)(v42 + 536)];
            if ( v44 != v45 )
            {
              do
              {
                while ( 1 )
                {
                  v45 -= 8;
                  v46 = (_QWORD *)v45[3];
                  if ( v46 == v45 + 5 )
                    break;
                  operator delete(v46);
                  if ( v44 == v45 )
                    goto LABEL_33;
                }
              }
              while ( v44 != v45 );
LABEL_33:
              v45 = *(_QWORD **)(v42 + 528);
            }
            if ( v45 != (_QWORD *)(v42 + 544) )
              free(v45);
            v47 = *(void **)(v42 + 416);
            if ( v47 != (void *)(v42 + 432) )
              free(v47);
            v48 = (void **)(v42 + 384);
            v49 = (void **)(v42 + 64);
            do
            {
              while ( *v48 != v48 + 2 )
              {
                operator delete(*v48);
                v48 -= 4;
                if ( v48 == v49 )
                  goto LABEL_41;
              }
              v48 -= 4;
            }
            while ( v49 != v48 );
LABEL_41:
            operator delete((void *)v42, 0x3A0u);
          }
          else
          {
            v54 = *(unsigned int *)(v43 + 14976);
            *(_DWORD *)(v43 + 14976) = v54 + 1;
            *(_QWORD *)(v43 + 8 * v54 + 14848) = v42;
          }
        }
      }
    }
    while ( v40 != v41 );
    v41 = v314;
  }
  if ( v41 != (_QWORD *)v316 )
    free(v41);
  v50 = (__int64 *)v276;
  v51 = (char *)v276 + 8 * (unsigned int)v277;
  if ( v51 != v276 )
  {
    do
    {
      if ( *v50 )
        sub_B8C080(*v50, v247);
      ++v50;
    }
    while ( v51 != (char *)v50 );
  }
  v52 = v238;
  if ( !v238 )
  {
    v55 = v286;
    v56 = *(unsigned int *)(a2 + 16);
    v284 = v286;
    v285 = 0x400000000LL;
    v57 = a2 + 8 * v56 + 48;
    v245 = (__int64 *)(v57 + 8LL * *(unsigned int *)(a2 + 20));
    if ( (__int64 *)v57 == v245 )
    {
LABEL_159:
      v52 = sub_C0F470(
              *(_QWORD **)(*(_QWORD *)a1 + 248LL),
              *(_DWORD *)(a2 + 4),
              v253,
              *(_DWORD *)(a2 + 32),
              (__int64 *)v276,
              (unsigned int)v277,
              *(_DWORD *)(a2 + 36),
              v55,
              v238,
              *(_DWORD *)(a2 + 40));
LABEL_160:
      if ( v284 != v286 )
        free(v284);
      goto LABEL_51;
    }
    v58 = ptr;
    v239 = (__int64 *)v57;
    v59 = 0;
    v243 = 0;
    v270 = v10;
    while ( 1 )
    {
      v60 = (unsigned int *)*v239;
      if ( !v243 )
        break;
LABEL_74:
      if ( v59 + 1 > HIDWORD(v285) )
      {
        sub_2237220(&v284, v286, v59 + 1, 8);
        ++v239;
        *((_QWORD *)v284 + (unsigned int)v285) = v60;
        v59 = (unsigned int)(v285 + 1);
        LODWORD(v285) = v285 + 1;
        if ( v245 == v239 )
        {
LABEL_152:
          v111 = (char *)v284;
          v10 = v270;
          v238 = v59;
          v55 = (char *)v284 + 8 * v59;
          if ( v284 != v55 )
          {
            do
            {
              if ( (unsigned int)(**(_DWORD **)v111 - 1) <= 1 )
              {
                v112 = *(_QWORD *)(*(_QWORD *)v111 + 24LL);
                if ( (v112 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v112 & 4) == 0 )
                  sub_B8C080(*(_QWORD *)((v112 & 0xFFFFFFFFFFFFFFF8LL) + 24), v247);
              }
              v111 += 8;
            }
            while ( v55 != v111 );
            v55 = (char *)v284;
            v238 = (unsigned int)v285;
          }
          goto LABEL_159;
        }
      }
      else
      {
        v58 = (void **)++v239;
        *((_QWORD *)v284 + v59) = v60;
        v59 = (unsigned int)(v285 + 1);
        LODWORD(v285) = v285 + 1;
        if ( v245 == v239 )
          goto LABEL_152;
      }
    }
    v62 = *v60;
    v63 = v60[1] & 1;
    if ( !(_DWORD)v62 )
    {
      v274[0].m128i_i64[0] = *v239;
      v64 = *(_QWORD *)a1;
      if ( v63 )
      {
        if ( v60[4] == 1 )
        {
          if ( !*(_DWORD *)(v64 + 12632) )
          {
            if ( !v60 )
            {
LABEL_82:
              v10 = v270;
LABEL_83:
              v52 = 1;
              goto LABEL_160;
            }
            goto LABEL_72;
          }
LABEL_70:
          v60 = (unsigned int *)sub_19A4F40(
                                  *(_QWORD *)a1,
                                  *((_QWORD *)v60 + 1) & 0xFFFFFFFFFFFFFFF8LL,
                                  v62,
                                  (__int64)v58,
                                  v26,
                                  v27);
          goto LABEL_71;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v64 + 12632) )
          goto LABEL_71;
        if ( v60[4] == 1 )
          goto LABEL_70;
      }
      v252 = *(_DWORD *)(v64 + 11200);
      v262 = *(_BYTE *)(v64 + 12592);
      v265 = *(_BYTE *)(v64 + 11248);
      v259 = *(_DWORD *)(*(_QWORD *)(v64 + 264) + 204LL);
      if ( !v262 )
      {
        sub_1DB82A0(v64);
        if ( !v76 )
          *(_BYTE *)(v64 + 12592) = 1;
        v60 = (unsigned int *)v274[0].m128i_i64[0];
      }
      *(_BYTE *)(v64 + 11248) = 0;
      v77 = (void **)(*((_QWORD *)v60 + 1) & 0xFFFFFFFFFFFFFFF8LL);
      v78 = *v77;
      ptr[1] = v77 + 1;
      ptr[0] = v78;
      v79 = sub_F6CCB0((__int64 *)ptr, si128);
      si128 = 0;
      LODWORD(v312) = v79;
      v80 = v274[0].m128i_i64[0];
      v311 = 0;
      v314 = v316;
      v322 &= 0xFFFFFFFE00000000LL;
      v324 &= 0xFFFFFFFE00000000LL;
      v328 = v330;
      v329 = 0x800000000LL;
      v333 = v335;
      v315 = 0x400000000LL;
      v334 = 0x400000000LL;
      v336 = 0;
      v338 = 0x400000000LL;
      WORD2(v312) = 0;
      v313 = 0;
      v321 = 0;
      v323 = 0;
      v325 = 0;
      v326 = 0;
      v327 = 0;
      v331 = 0;
      v332 = 0;
      v337 = v339;
      v81 = (void **)(*(_QWORD *)(v274[0].m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL);
      v82 = *v81;
      ptr[1] = v81 + 1;
      ptr[0] = v82;
      v83 = (unsigned int)sub_F6CE20((__int64 *)ptr);
      v84 = sub_F6CCB0((__int64 *)ptr, (__m128)0LL);
      v85 = *(_QWORD *)(v80 + 8);
      v60 = nullptr;
      v85 &= 0xFFFFFFFFFFFFFFF8LL;
      v86 = *(void **)v85;
      n[0] = v85 + 8;
      src = v86;
      v87 = sub_F6CCB0((__int64 *)&src, (__m128)0LL);
      sub_1DC3470((__int64)v287, *(_QWORD *)a1, 10, v87, (v83 << 32) | v84, 0, 0, 0, 0, (__int64)&v311);
      if ( BYTE8(v287[0]) )
        goto LABEL_113;
      v88 = sub_1DD1930(a1, *(_QWORD *)(v274[0].m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL, (__m128)0LL, a4);
      if ( v88 )
      {
        v92 = *(_QWORD *)a1;
        if ( *(_DWORD *)(v64 + 11200) <= v252 )
        {
          v60 = (unsigned int *)sub_19A4EC0(v92, (unsigned __int64)v88, v89, v252, v90, v91);
LABEL_111:
          if ( !BYTE8(v287[0]) )
            sub_1DBAC30(v287);
LABEL_113:
          if ( v337 != v339 )
            free(v337);
          if ( v333 != v335 )
            free(v333);
          if ( v328 != v330 )
            free(v328);
          v98 = v314;
          v99 = &v314[32 * (unsigned int)v315];
          if ( v314 != (_BYTE *)v99 )
          {
            v268 = v60;
            do
            {
              v99 -= 4;
              v100 = v99[1];
              if ( v100 )
              {
                v101 = v99[2];
                if ( v101 )
                {
                  if ( v100 < v101 || v100 > v101 + 14848 )
                  {
                    v102 = *(_QWORD **)(v100 + 528);
                    v103 = &v102[8 * (unsigned __int64)*(unsigned int *)(v100 + 536)];
                    if ( v102 != v103 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v103 -= 8;
                          v104 = (_QWORD *)v103[3];
                          if ( v104 == v103 + 5 )
                            break;
                          operator delete(v104);
                          if ( v102 == v103 )
                            goto LABEL_127;
                        }
                      }
                      while ( v102 != v103 );
LABEL_127:
                      v103 = *(_QWORD **)(v100 + 528);
                    }
                    if ( v103 != (_QWORD *)(v100 + 544) )
                      free(v103);
                    v105 = *(void **)(v100 + 416);
                    if ( v105 != (void *)(v100 + 432) )
                      free(v105);
                    v106 = (void **)(v100 + 384);
                    v107 = (void **)(v100 + 64);
                    do
                    {
                      while ( *v106 != v106 + 2 )
                      {
                        operator delete(*v106);
                        v106 -= 4;
                        if ( v106 == v107 )
                          goto LABEL_135;
                      }
                      v106 -= 4;
                    }
                    while ( v107 != v106 );
LABEL_135:
                    operator delete((void *)v100, 0x3A0u);
                  }
                  else
                  {
                    v110 = *(unsigned int *)(v101 + 14976);
                    *(_DWORD *)(v101 + 14976) = v110 + 1;
                    *(_QWORD *)(v101 + 8 * v110 + 14848) = v100;
                  }
                }
              }
            }
            while ( v98 != v99 );
            v60 = v268;
            v99 = v314;
          }
          if ( v99 != (_QWORD *)v316 )
            free(v99);
          *(_DWORD *)(v64 + 11200) = v252;
          *(_BYTE *)(v64 + 12592) = v262;
          *(_BYTE *)(v64 + 11248) = v265;
          v108 = *(_QWORD *)(v64 + 264);
          if ( *(_DWORD *)(v108 + 204) == 5 )
            *(_BYTE *)(v108 + 194) = 1;
          v109 = 3;
          if ( !v259 )
            v109 = 0;
          *(_DWORD *)(v108 + 204) = v109;
LABEL_71:
          if ( !v60 )
            goto LABEL_82;
LABEL_72:
          v61 = *((_BYTE *)v60 + 4);
          v59 = (unsigned int)v285;
          if ( (v61 & 1) == 0 )
            v243 = (v61 & 4) == 0;
          goto LABEL_74;
        }
      }
      else
      {
        v92 = *(_QWORD *)a1;
      }
      ptr[0] = v274;
      ptr[1] = (void *)a1;
      v93 = sub_1DBE4E0(
              v92,
              (__int64)&v311,
              (void (__fastcall *)(__int64, __int64 (__fastcall ***)()))sub_1DB7FD0,
              (__int64)ptr);
      v60 = (unsigned int *)sub_19A4F40(*(_QWORD *)a1, v93, v94, v95, v96, v97);
      goto LABEL_111;
    }
    if ( (unsigned int)(v62 - 1) <= 1 )
    {
      v65 = *(_QWORD *)a1;
      if ( !v63 && !*(_DWORD *)(v65 + 12632) )
        goto LABEL_71;
      v66 = *(unsigned __int8 *)(v65 + 12592);
      v251 = *(_DWORD *)(v65 + 11200);
      v261 = v66;
      v264 = *(_BYTE *)(v65 + 11248);
      v258 = *(_DWORD *)(*(_QWORD *)(v65 + 264) + 204LL);
      if ( !(_BYTE)v66 )
      {
        sub_1DB82A0(v65);
        if ( !v67 )
          *(_BYTE *)(v65 + 12592) = 1;
      }
      *(_BYTE *)(v65 + 11248) = 0;
      if ( v60[10] == 1 )
      {
        v267 = *((_QWORD *)v60 + 1) & 0xFFFFFFFFFFFFFFFCLL | 2;
      }
      else
      {
        *(_QWORD *)&v287[0] = *((_QWORD *)v60 + 1) & 0xFFFFFFFFFFFFFFFCLL;
        v114 = *(_QWORD *)&v287[0];
        v115 = sub_EEB7E0(*(unsigned __int64 *)&v287[0], v66, *(double *)si128.m128_u64);
        si128 = 0;
        LODWORD(v312) = v115;
        WORD2(v312) = 0;
        v314 = v316;
        v322 &= 0xFFFFFFFE00000000LL;
        v324 &= 0xFFFFFFFE00000000LL;
        v328 = v330;
        v329 = 0x800000000LL;
        v333 = v335;
        v311 = 0;
        v315 = 0x400000000LL;
        v334 = 0x400000000LL;
        v338 = 0x400000000LL;
        v313 = 0;
        v321 = 0;
        v323 = 0;
        v325 = 0;
        v326 = 0;
        v327 = 0;
        v331 = 0;
        v332 = 0;
        v336 = 0;
        v337 = v339;
        v116 = sub_EEC8C0(v114, 0x400000000LL, 0.0);
        v117 = sub_EEB7E0(v114, 0x400000000LL, 0.0);
        sub_1DC3470((__int64)&src, *(_QWORD *)a1, 10, v117, v116, 0, 0, 0, 0, (__int64)&v311);
        if ( LOBYTE(n[0]) )
        {
          if ( v337 != v339 )
            free(v337);
          if ( v333 != v335 )
            free(v333);
          if ( v328 != v330 )
            free(v328);
          v180 = v314;
          v181 = &v314[32 * (unsigned int)v315];
          if ( v314 != (_BYTE *)v181 )
          {
            do
            {
              v181 -= 4;
              v182 = v181[1];
              if ( v182 )
              {
                v183 = v181[2];
                if ( v183 )
                {
                  if ( v182 < v183 || v182 > v183 + 14848 )
                  {
                    v184 = *(_QWORD **)(v182 + 528);
                    v185 = &v184[8 * (unsigned __int64)*(unsigned int *)(v182 + 536)];
                    if ( v184 != v185 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v185 -= 8;
                          v186 = (_QWORD *)v185[3];
                          if ( v186 == v185 + 5 )
                            break;
                          operator delete(v186);
                          if ( v184 == v185 )
                            goto LABEL_303;
                        }
                      }
                      while ( v184 != v185 );
LABEL_303:
                      v185 = *(_QWORD **)(v182 + 528);
                    }
                    if ( v185 != (_QWORD *)(v182 + 544) )
                      free(v185);
                    v187 = *(void **)(v182 + 416);
                    if ( v187 != (void *)(v182 + 432) )
                      free(v187);
                    v188 = (void **)(v182 + 384);
                    v189 = (void **)(v182 + 64);
                    do
                    {
                      while ( *v188 != v188 + 2 )
                      {
                        operator delete(*v188);
                        v188 -= 4;
                        if ( v188 == v189 )
                          goto LABEL_311;
                      }
                      v188 -= 4;
                    }
                    while ( v188 != v189 );
LABEL_311:
                    operator delete((void *)v182, 0x3A0u);
                  }
                  else
                  {
                    v190 = *(unsigned int *)(v183 + 14976);
                    *(_DWORD *)(v183 + 14976) = v190 + 1;
                    *(_QWORD *)(v183 + 8 * v190 + 14848) = v182;
                  }
                }
              }
            }
            while ( v180 != v181 );
            v181 = v314;
          }
          if ( v181 != (_QWORD *)v316 )
            free(v181);
          goto LABEL_283;
        }
        v120 = (unsigned __int64)sub_1DC71F0(
                                   (__int64 *)a1,
                                   *(unsigned __int64 *)&v287[0],
                                   v118,
                                   v119,
                                   v26,
                                   v27,
                                   (__m128)0LL,
                                   a4);
        if ( v120 == 1
          || *(_DWORD *)(v65 + 11200) > v251
          || (v122 = *(_QWORD *)(*(_QWORD *)((v120 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v122 + 16) == 13)
          && (v123 = *(unsigned __int16 *)(v122 + 18),
              LOWORD(v123) = ((unsigned __int16)v123 >> 3) & 0x1FF,
              (unsigned __int16)v123 > 0x1F1u)
          && ((v120 = sub_1907C70(
                        *(_QWORD *)a1,
                        (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFFELL),
                        (__m128i)0LL,
                        a4,
                        v123,
                        v251,
                        v121,
                        v27),
               v120 == 1)
           || *(_DWORD *)(v65 + 11200) > v251) )
        {
          ptr[0] = v287;
          v124 = *(_QWORD *)a1;
          ptr[1] = (void *)a1;
          v267 = sub_1DBE4E0(
                   v124,
                   (__int64)&v311,
                   (void (__fastcall *)(__int64, __int64 (__fastcall ***)()))sub_1DB8630,
                   (__int64)ptr)
               | 2;
        }
        else
        {
          v267 = v120 & 0xFFFFFFFFFFFFFFFCLL;
        }
        if ( !LOBYTE(n[0]) )
          sub_1DBAC30(&src);
        if ( v337 != v339 )
          free(v337);
        if ( v333 != v335 )
          free(v333);
        if ( v328 != v330 )
          free(v328);
        v125 = v314;
        v126 = &v314[32 * (unsigned int)v315];
        if ( v314 != (_BYTE *)v126 )
        {
          v271 = v60;
          do
          {
            v126 -= 4;
            v127 = v126[1];
            if ( v127 )
            {
              v128 = v126[2];
              if ( v128 )
              {
                if ( v127 < v128 || v127 > v128 + 14848 )
                {
                  v129 = *(_QWORD **)(v127 + 528);
                  v130 = &v129[8 * (unsigned __int64)*(unsigned int *)(v127 + 536)];
                  if ( v129 != v130 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v130 -= 8;
                        v131 = (_QWORD *)v130[3];
                        if ( v131 == v130 + 5 )
                          break;
                        operator delete(v131);
                        if ( v129 == v130 )
                          goto LABEL_196;
                      }
                    }
                    while ( v129 != v130 );
LABEL_196:
                    v130 = *(_QWORD **)(v127 + 528);
                  }
                  if ( v130 != (_QWORD *)(v127 + 544) )
                    free(v130);
                  v132 = *(void **)(v127 + 416);
                  if ( v132 != (void *)(v127 + 432) )
                    free(v132);
                  v133 = (void **)(v127 + 384);
                  v134 = (void **)(v127 + 64);
                  do
                  {
                    while ( *v133 != v133 + 2 )
                    {
                      operator delete(*v133);
                      v133 -= 4;
                      if ( v133 == v134 )
                        goto LABEL_204;
                    }
                    v133 -= 4;
                  }
                  while ( v133 != v134 );
LABEL_204:
                  operator delete((void *)v127, 0x3A0u);
                }
                else
                {
                  v135 = *(unsigned int *)(v128 + 14976);
                  *(_DWORD *)(v128 + 14976) = v135 + 1;
                  *(_QWORD *)(v128 + 8 * v135 + 14848) = v127;
                }
              }
            }
          }
          while ( v125 != v126 );
          v60 = v271;
          v126 = v314;
        }
        if ( v126 != (_QWORD *)v316 )
          free(v126);
      }
      si128 = 0;
      v287[0] = 0;
      v68 = *((_QWORD *)v60 + 3);
      v69 = *(__m128i **)a1;
      v70 = v68 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v68 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        *(_QWORD *)&v287[0] = 0;
        BYTE8(v287[0]) = 1;
LABEL_94:
        v71 = v60[4];
        v72 = v267 & 0xFFFFFFFFFFFFFFFCLL;
        v73 = *v60 == 1;
        if ( v267 && (v267 & 2) == 0 && v72 )
          v60 = (unsigned int *)sub_19A54F0(v69, v72, v73, v71, *(__int64 *)&v287[0]);
        else
          v60 = (unsigned int *)sub_19A4FC0((__int64)v69, v72, v73, v71, *(__int64 *)&v287[0], v27);
        goto LABEL_98;
      }
      if ( (v68 & 4) != 0 )
      {
        BYTE8(v287[0]) = 1;
        *(_QWORD *)&v287[0] = v70 | 4;
        goto LABEL_94;
      }
      v136 = *(_DWORD *)(v70 + 8);
      si128 = 0;
      v137 = *((_QWORD *)v60 + 3) & 0xFFFFFFFFFFFFFFF8LL;
      v311 = 0;
      LODWORD(v312) = v136;
      WORD2(v312) = 0;
      v314 = v316;
      v322 &= 0xFFFFFFFE00000000LL;
      v324 &= 0xFFFFFFFE00000000LL;
      v328 = v330;
      v329 = 0x800000000LL;
      v333 = v335;
      v336 = 0;
      v313 = 0;
      v315 = 0x400000000LL;
      v321 = 0;
      v326 = 0;
      v327 = 0;
      v332 = 0;
      v334 = 0x400000000LL;
      v338 = 0x400000000LL;
      v138 = *(unsigned int *)(v70 + 16);
      v139 = *(_DWORD *)(v70 + 8);
      v337 = v339;
      v323 = 0;
      v325 = 0;
      v331 = 0;
      sub_1DC3470((__int64)&src, (__int64)v69, 10, v139, (v138 << 32) | v139, 0, 0, 0, 0, (__int64)&v311);
      if ( !LOBYTE(n[0]) )
      {
        if ( (*(_DWORD *)(v70 + 20) & 0x1FFFFFFF) != 0 )
        {
          v140 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 24) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(*(_QWORD *)(v70 + 24) + 16LL) & 4) != 0 )
            v140 = (_QWORD *)*v140;
          si128 = 0;
          v141 = *(_QWORD *)(a1 + 32);
          ptr[0] = *(void **)a1;
          v142 = *((_DWORD *)ptr[0] + 3158);
          ptr[1] = ptr[0];
          v301 = v303;
          v302 = 0x100000000LL;
          v305 = 0x100000000LL;
          v143 = *(_BYTE *)(a1 + 56);
          LODWORD(v296) = v142;
          v297 = (__int64)v140;
          v298 = v141;
          v299 = 0;
          v304 = v306;
          v300 = v143;
          v137 = sub_1E48E00(ptr, v70);
          if ( v304 != v306 )
            free(v304);
          if ( v301 != v303 )
            free(v301);
          *((_DWORD *)ptr[1] + 3158) = (_DWORD)v296;
          if ( !v137 )
            goto LABEL_342;
        }
        if ( *(_DWORD *)(v65 + 11200) > v251 )
        {
LABEL_342:
          ptr[0] = v60 + 6;
          v207 = *(_QWORD *)a1;
          ptr[1] = (void *)a1;
          v208 = sub_1DBE4E0(
                   v207,
                   (__int64)&v311,
                   (void (__fastcall *)(__int64, __int64 (__fastcall ***)()))sub_1DB85B0,
                   (__int64)ptr);
          BYTE8(v287[0]) = 1;
          *(_QWORD *)&v287[0] = v208 & 0xFFFFFFFFFFFFFFF9LL | 4;
        }
        else
        {
          if ( !LOBYTE(n[0]) )
            sub_1DBAC30(&src);
          if ( BYTE8(v287[0]) )
            BYTE8(v287[0]) = 0;
          sub_A55640((unsigned __int64 *)v287, v137);
          BYTE8(v287[0]) = 1;
        }
        if ( !LOBYTE(n[0]) )
          sub_1DBAC30(&src);
        sub_19A2E00((__int64)&v311);
        v69 = *(__m128i **)a1;
        goto LABEL_94;
      }
      sub_19A2E00((__int64)&v311);
LABEL_283:
      v60 = nullptr;
LABEL_98:
      *(_DWORD *)(v65 + 11200) = v251;
      *(_BYTE *)(v65 + 12592) = v261;
      *(_BYTE *)(v65 + 11248) = v264;
      v74 = *(_QWORD *)(v65 + 264);
      if ( *(_DWORD *)(v74 + 204) == 5 )
        *(_BYTE *)(v74 + 194) = 1;
      v75 = 3;
      if ( !v258 )
        v75 = 0;
      *(_DWORD *)(v74 + 204) = v75;
      goto LABEL_71;
    }
    if ( v63 )
    {
      if ( *((_BYTE *)v60 + 24) )
      {
        v113 = *(_QWORD *)a1;
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
          goto LABEL_71;
LABEL_165:
        v60 = (unsigned int *)sub_19A5060(
                                v113,
                                *((_QWORD *)v60 + 4),
                                *((_QWORD *)v60 + 5),
                                *((__int64 **)v60 + 2),
                                v26,
                                v27);
        goto LABEL_71;
      }
    }
    else
    {
      v113 = *(_QWORD *)a1;
      if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
        goto LABEL_71;
      if ( *((_BYTE *)v60 + 24) )
        goto LABEL_165;
    }
    v144 = *((_QWORD *)v60 + 1);
    v145 = sub_EEC8C0(v144, (__int64)v239, *(double *)si128.m128_u64);
    v146 = sub_EEB7E0(v144, (__int64)v239, *(double *)si128.m128_u64);
    v147 = *(_QWORD *)a1;
    sub_1DC3470((__int64)v272, *(_QWORD *)a1, 11, v146, v145, 0, 0, 0, 0, 0);
    if ( !*(_BYTE *)(a1 + 56) )
    {
      v174 = sub_1DC71F0((__int64 *)a1, *((_QWORD *)v60 + 1), v148, v149, v150, v151, si128, a4);
      if ( v174 == (unsigned __int16 *)((char *)&dword_0 + 1)
        || (v175 = (unsigned int *)((unsigned __int64)v174 & 0xFFFFFFFFFFFFFFFELL),
            ((unsigned __int64)v174 & 0xFFFFFFFFFFFFFFFELL) == 0) )
      {
        v10 = v270;
        if ( !v273 )
          sub_1DBAC30(v272);
        goto LABEL_83;
      }
      v176 = (__int64 *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 2352LL);
      if ( (*v175 & 0x8000) != 0 )
      {
        v60 = (unsigned int *)sub_1DBD500(v176, 48, 3u);
        v177 = *v175;
        *v60 = 3;
        *((_QWORD *)v60 + 1) = v175;
        *((_BYTE *)v60 + 24) = 0;
        *((_QWORD *)v60 + 2) = 0;
        v178 = 2 * ((v177 >> 14) & 1);
        LOBYTE(v177) = *((_BYTE *)v60 + 4);
        *((_QWORD *)v60 + 4) = 0;
        *((_QWORD *)v60 + 5) = 0;
        *((_BYTE *)v60 + 4) = v178 | v177 & 0xF8 | 5;
LABEL_280:
        if ( !v273 )
          sub_1DBAC30(v272);
        goto LABEL_71;
      }
      si128 = 0;
      v311 = 0;
      v317 = 0;
      v312 = &v314;
      v318 = v320;
      v313 = 0x400000000LL;
      v319 = 0x400000000LL;
      v60 = (unsigned int *)sub_1DBD500(v176, 48, 3u);
      v229 = 4 * (v317 & 1u);
      v230 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      v231 = *v175;
      *((_QWORD *)v60 + 1) = v175;
      *v60 = 3;
      *((_BYTE *)v60 + 4) = v229 | (2 * ((v231 & 0x4000) != 0)) & 0xFB | ((v231 & 0x8000u) != 0) | v60[1] & 0xF8;
      v234 = sub_A55A00(v230, (__int64)&v311, v229, 2 * ((v231 >> 14) & 1), v232, v233);
      *((_BYTE *)v60 + 24) = 0;
      *((_QWORD *)v60 + 2) = v234;
      *((_QWORD *)v60 + 4) = 0;
      v235 = v318;
      *((_QWORD *)v60 + 5) = 0;
      if ( v235 != v320 )
        free(v235);
      v173 = v312;
      if ( v312 == &v314 )
        goto LABEL_280;
LABEL_274:
      free(v173);
      goto LABEL_280;
    }
    v307 = 0;
    v296 = &v298;
    *(_OWORD *)ptr = 0;
    v297 = 0x400000000LL;
    v308 = v310;
    v152 = *((_QWORD *)v60 + 1);
    v309 = 0x400000000LL;
    si128 = 0;
    LODWORD(v312) = sub_EEB7E0(v152, v147, 0.0);
    v315 = 0x400000000LL;
    v314 = v316;
    v322 &= 0xFFFFFFFE00000000LL;
    v324 &= 0xFFFFFFFE00000000LL;
    v328 = v330;
    v329 = 0x800000000LL;
    v334 = 0x400000000LL;
    v338 = 0x400000000LL;
    v333 = v335;
    v337 = v339;
    v153 = *(_QWORD *)a1;
    v311 = 0;
    WORD2(v312) = 0;
    v313 = 0;
    v321 = 0;
    v323 = 0;
    v325 = 0;
    v326 = 0;
    v327 = 0;
    v331 = 0;
    v332 = 0;
    v336 = 0;
    v260 = v153;
    sub_18C74E0(v153, 4, 0, 4);
    v154 = *(_QWORD *)a1;
    v155 = *(_BYTE *)(*(_QWORD *)a1 + 12592LL);
    v263 = *(_DWORD *)(*(_QWORD *)a1 + 11200LL);
    v266 = *(_BYTE *)(*(_QWORD *)a1 + 11248LL);
    v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + 204LL);
    if ( !v155 )
    {
      sub_1DB82A0(v154);
      if ( !v157 )
        *(_BYTE *)(v154 + 12592) = 1;
    }
    *(_BYTE *)(v154 + 11248) = 0;
    v158 = *((_QWORD *)v60 + 1);
    v159 = sub_EEC8C0(v158, 4, 0.0);
    v160 = sub_EEB7E0(v158, 4, 0.0);
    v161 = *(_QWORD *)a1;
    sub_1DC3470((__int64)v274, *(_QWORD *)a1, 10, v160, v159, 0, 0, 0, 0, (__int64)&v311);
    if ( v274[0].m128i_i8[8] )
    {
      *(_BYTE *)(v154 + 12592) = v155;
      *(_DWORD *)(v154 + 11200) = v263;
      *(_BYTE *)(v154 + 11248) = v266;
      v162 = *(_QWORD *)(v154 + 264);
      if ( *(_DWORD *)(v162 + 204) == 5 )
        *(_BYTE *)(v162 + 194) = 1;
      if ( v156 )
        v156 = 3;
      v60 = nullptr;
      *(_DWORD *)(v162 + 204) = v156;
      sub_190D5E0(v260, (__m128)0LL);
    }
    else
    {
      src = &n[1];
      v191 = *((_QWORD *)v60 + 1);
      n[0] = 0x600000000LL;
      v269 = *(_QWORD *)a1;
      v192 = sub_EEC8C0(v191, v161, 0.0);
      v193 = *(_DWORD *)(v269 + 12632);
      *(_QWORD *)&v287[0] = v191;
      DWORD2(v287[0]) = v193;
      if ( (unsigned __int8)sub_1750770(
                              v269,
                              0,
                              (__int64)v287,
                              1u,
                              (__int64)&src,
                              *(_QWORD *)(a1 + 32),
                              0.0,
                              v192,
                              (__int64)ptr)
        || !LODWORD(n[0]) )
      {
        v194 = 0;
      }
      else
      {
        v194 = *(_QWORD *)src;
      }
      if ( src != &n[1] )
        free(src);
      if ( !v274[0].m128i_i8[8] )
        sub_1DBAC30(v274);
      *(_BYTE *)(v154 + 12592) = v155;
      *(_DWORD *)(v154 + 11200) = v263;
      *(_BYTE *)(v154 + 11248) = v266;
      v195 = *(_QWORD *)(v154 + 264);
      if ( *(_DWORD *)(v195 + 204) == 5 )
        *(_BYTE *)(v195 + 194) = 1;
      if ( v156 )
        v156 = 3;
      *(_DWORD *)(v195 + 204) = v156;
      sub_190D5E0(v260, (__m128)0LL);
      v196 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      if ( v194 >= 2 )
      {
        v197 = (unsigned int *)(v194 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*(_DWORD *)(v194 & 0xFFFFFFFFFFFFFFFELL) & 0x8000) != 0 )
        {
          v60 = (unsigned int *)sub_1DBD500(v196 + 294, 48, 3u);
          v236 = *v197;
          *v60 = 3;
          *((_QWORD *)v60 + 1) = v197;
          *((_BYTE *)v60 + 24) = 0;
          *((_QWORD *)v60 + 2) = 0;
          v237 = 2 * ((v236 >> 14) & 1);
          LOBYTE(v236) = *((_BYTE *)v60 + 4);
          *((_QWORD *)v60 + 4) = 0;
          *((_QWORD *)v60 + 5) = 0;
          *((_BYTE *)v60 + 4) = v237 | v236 & 0xF8 | 5;
          goto LABEL_245;
        }
        v198 = (__int64 *)v308;
        v199 = (char *)v308 + 8 * (unsigned int)v309;
        if ( v308 == v199 )
        {
LABEL_341:
          v60 = (unsigned int *)sub_1DBD500(v196 + 294, 48, 3u);
          v201 = *v197;
          v202 = v307 & 1;
          *v60 = 3;
          *((_QWORD *)v60 + 1) = v197;
          v203 = (unsigned int)(4 * v202);
          *((_BYTE *)v60 + 4) = v203 | (2 * ((v201 & 0x4000) != 0)) & 0xFB | ((v201 & 0x8000u) != 0) | v60[1] & 0xF8;
          v206 = sub_A55A00(v196, (__int64)ptr, v203, 2 * ((v201 >> 14) & 1), v204, v205);
          *((_BYTE *)v60 + 24) = 0;
          *((_QWORD *)v60 + 2) = v206;
          *((_QWORD *)v60 + 4) = 0;
          *((_QWORD *)v60 + 5) = 0;
          goto LABEL_245;
        }
        while ( 1 )
        {
          v200 = *v198;
          if ( *v198 )
          {
            if ( (v200 & 2) != 0 && (v200 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              break;
          }
          if ( v199 == (char *)++v198 )
            goto LABEL_341;
        }
      }
      si128 = 0;
      a4 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v287[1] = 0;
      p_src = &src;
      src = v294;
      *(__m128 *)n = a4;
      DWORD2(v287[0]) = 2;
      *(_QWORD *)&v287[0] = &off_2BEBEE0;
      v289 = 0;
      v290 = 1;
      v288 = 0;
      sub_227B8B0(v287, 0, 0, 0);
      v209 = *((char **)v60 + 1);
      v274[0].m128i_i64[0] = sub_16043A0(
                               *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                               *(_QWORD **)(*(_QWORD *)a1 + 240LL),
                               v210,
                               v211,
                               v212,
                               v213);
      v274[0].m128i_i64[1] = v214;
      sub_F07C00(v209, (__int64)v287, 0, v274, 0, 0, "\n", 1);
      v217 = v196[294];
      v218 = n[0];
      v219 = src;
      v196[304] += n[0];
      v220 = (char *)((v217 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v196[295] >= (unsigned __int64)&v220[v218] && v217 )
        v196[294] = &v220[v218];
      else
        v220 = (char *)sub_986170((__int64)(v196 + 294), v218, v218, 3, v215, v216);
      if ( v218 )
        memmove(v220, v219, v218);
      v60 = (unsigned int *)sub_1DBD500(v196 + 294, 48, 3u);
      v225 = sub_A55A00(*(_QWORD **)(*(_QWORD *)a1 + 248LL), (__int64)ptr, v221, v222, v223, v224);
      v226 = *(_BYTE *)(v225 + 8);
      *((_QWORD *)v60 + 2) = v225;
      *v60 = 3;
      *((_BYTE *)v60 + 24) = 1;
      v227 = 4 * (v226 & 1);
      v228 = *((_BYTE *)v60 + 4);
      *((_QWORD *)v60 + 4) = v220;
      *((_QWORD *)v60 + 1) = 0;
      *((_QWORD *)v60 + 5) = v218;
      *((_BYTE *)v60 + 4) = v227 | v228 & 0xF8;
      *(_QWORD *)&v287[0] = &unk_2C76288;
      sub_227B7A0(v287);
      if ( src != v294 )
        free(src);
    }
LABEL_245:
    if ( v337 != v339 )
      free(v337);
    if ( v333 != v335 )
      free(v333);
    if ( v328 != v330 )
      free(v328);
    v163 = v314;
    v164 = &v314[32 * (unsigned int)v315];
    if ( v314 != (_BYTE *)v164 )
    {
      do
      {
        v164 -= 4;
        v165 = v164[1];
        if ( v165 )
        {
          v166 = v164[2];
          if ( v166 )
          {
            if ( v165 < v166 || v165 > v166 + 14848 )
            {
              v167 = *(_QWORD **)(v165 + 528);
              v168 = &v167[8 * (unsigned __int64)*(unsigned int *)(v165 + 536)];
              if ( v167 != v168 )
              {
                do
                {
                  while ( 1 )
                  {
                    v168 -= 8;
                    v169 = (_QWORD *)v168[3];
                    if ( v169 == v168 + 5 )
                      break;
                    operator delete(v169);
                    if ( v167 == v168 )
                      goto LABEL_258;
                  }
                }
                while ( v167 != v168 );
LABEL_258:
                v168 = *(_QWORD **)(v165 + 528);
              }
              if ( v168 != (_QWORD *)(v165 + 544) )
                free(v168);
              v170 = *(void **)(v165 + 416);
              if ( v170 != (void *)(v165 + 432) )
                free(v170);
              v171 = (void **)(v165 + 384);
              v172 = (void **)(v165 + 64);
              do
              {
                while ( *v171 != v171 + 2 )
                {
                  operator delete(*v171);
                  v171 -= 4;
                  if ( v171 == v172 )
                    goto LABEL_266;
                }
                v171 -= 4;
              }
              while ( v172 != v171 );
LABEL_266:
              operator delete((void *)v165, 0x3A0u);
            }
            else
            {
              v179 = *(unsigned int *)(v166 + 14976);
              *(_DWORD *)(v166 + 14976) = v179 + 1;
              *(_QWORD *)(v166 + 8 * v179 + 14848) = v165;
            }
          }
        }
      }
      while ( v163 != v164 );
      v164 = v314;
    }
    if ( v164 != (_QWORD *)v316 )
      free(v164);
    if ( v308 != v310 )
      free(v308);
    v173 = v296;
    if ( v296 == &v298 )
      goto LABEL_280;
    goto LABEL_274;
  }
LABEL_51:
  if ( v249 )
  {
    *(_QWORD *)(v10 + 544) = v249;
    *(_QWORD *)(v10 + 512) = v254;
    *(_QWORD *)(v10 + 9944) = v275;
    *(_DWORD *)(v10 + 80) = v255;
    *(_DWORD *)(v10 + 2632) = v256;
  }
  sub_190D5E0(v248, si128);
  if ( v281 != v283 )
    free(v281);
  if ( v279[0] != v280 )
    free(v279[0]);
  if ( v276 != v278 )
    free(v276);
  return v52;
}
