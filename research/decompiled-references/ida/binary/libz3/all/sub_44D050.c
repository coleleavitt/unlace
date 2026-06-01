__int64 __fastcall sub_44D050(__int64 a1, __int64 a2, size_t a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // rbx
  char **exception; // r14
  char **v8; // r14
  char **v9; // rbx
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  void *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // r15
  _QWORD *v24; // rax
  __int64 *v25; // rcx
  int v26; // eax
  unsigned int v27; // eax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // r12
  __int64 v31; // r14
  _QWORD *v32; // rax
  int v33; // eax
  __int64 *v34; // rcx
  unsigned int v35; // eax
  __int64 *v36; // r14
  __int64 *v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rsi
  bool v40; // zf
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // r12
  __int64 *v44; // rdx
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rsi
  __int64 *v48; // rax
  unsigned int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rbx
  __int64 v55; // rax
  _QWORD *v56; // r12
  _QWORD *v57; // rdx
  __int64 v58; // r14
  _QWORD *v59; // rax
  int v60; // eax
  _QWORD *v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // r8
  unsigned int v68; // r13d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r13d
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rcx
  __int64 *v76; // rbx
  __int64 v77; // rcx
  __int64 *v78; // rbx
  unsigned __int64 v79; // r15
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 *v82; // rbx
  unsigned __int64 v83; // r14
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 *v86; // rbx
  unsigned __int64 v87; // r15
  __int64 v88; // rsi
  __int64 v89; // rdi
  void *v90; // rbx
  __int64 *v91; // r15
  __int64 v92; // rax
  __int64 *v93; // r13
  __int64 v94; // rbx
  __int64 v95; // r12
  __int64 v96; // r12
  __int64 v97; // rsi
  __int64 *v98; // rbx
  unsigned __int64 v99; // r14
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 *v102; // r15
  __int64 v103; // rax
  __int64 *v104; // r13
  __int64 v105; // rbx
  __int64 v106; // r12
  __int64 v107; // r12
  __int64 v108; // rsi
  _QWORD *v109; // rbx
  __int64 v110; // rax
  _QWORD *v111; // r12
  __int64 *v112; // rdx
  __int64 v113; // r15
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rsi
  __int64 v117; // rax
  __int64 *v118; // rbx
  unsigned __int64 v119; // r14
  __int64 v120; // rsi
  __int64 v121; // rsi
  __int64 *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rbx
  __int64 v125; // r14
  _DWORD *v126; // rax
  _DWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // r15
  _DWORD *v130; // rax
  _DWORD *v131; // rax
  __int64 v132; // rax
  unsigned int *v133; // rbx
  _DWORD *v134; // rax
  _DWORD *v135; // rax
  __int64 v136; // rax
  unsigned int *v137; // r12
  __int64 v138; // r13
  __m128 v139; // xmm0
  char v140; // al
  unsigned __int64 v141; // rcx
  char v142; // r9
  unsigned int v143; // edx
  __int64 *v144; // r13
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r12
  __int64 *v148; // rbx
  __int64 v149; // rsi
  void *v150; // rdi
  void *v151; // r13
  unsigned int v152; // eax
  __int64 v153; // rcx
  int v154; // eax
  __int64 *v155; // rcx
  unsigned int v156; // r13d
  size_t v157; // rsi
  unsigned int *v158; // rax
  __int64 v159; // rcx
  _QWORD *v160; // rsi
  void *v161; // rbx
  _QWORD *v162; // rbx
  __int64 v163; // rax
  _QWORD *v164; // r12
  __int64 *v165; // rdx
  __int64 v166; // r14
  __int64 v167; // rax
  _DWORD *v168; // rax
  __int64 *v169; // rbx
  unsigned __int64 v170; // r15
  __int64 v171; // rsi
  __int64 *v172; // rbx
  __int64 v173; // rcx
  __int64 *v174; // r12
  _DWORD *v175; // rdx
  __int64 v176; // r15
  __int64 v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rsi
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // rdi
  int v183; // eax
  int v184; // eax
  __int64 v185; // rsi
  __int64 v186; // rdi
  __int64 *v187; // rbx
  unsigned __int64 v188; // r15
  void (__fastcall ***v189)(void *, __int64, __int64, __int64, __int64, __int64, __int64); // rbx
  unsigned __int64 v190; // r14
  __int64 v191; // rsi
  unsigned int v192; // eax
  __int64 v193; // rcx
  int v194; // eax
  __int64 *v195; // rcx
  unsigned int v196; // r13d
  size_t v197; // rsi
  unsigned int *v198; // rax
  __int64 v199; // rcx
  unsigned int v200; // eax
  __int64 v201; // rcx
  int v202; // eax
  _QWORD *v203; // rcx
  unsigned int v204; // r13d
  size_t v205; // rsi
  unsigned int *v206; // rax
  __int64 v207; // rcx
  size_t v208; // r14
  __int64 v209; // rbx
  __int64 v210; // rbx
  void *v211; // r12
  unsigned int v212; // ecx
  char *v213; // r13
  __int64 v214; // rax
  __int64 v215; // rcx
  __int64 v216; // rdx
  __int64 v217; // rbx
  char *v218; // r12
  __int64 v219; // rsi
  unsigned int *v220; // rdi
  void *v221; // r12
  unsigned int v222; // ecx
  int v223; // ebx
  __int64 v224; // rbx
  char *v225; // rax
  char *v226; // rdi
  char *v227; // r12
  void **v228; // rsi
  unsigned __int64 v229; // rax
  __int64 v230; // rdx
  __int64 *v231; // rax
  __int64 *v232; // rdi
  void **v233; // rcx
  unsigned __int64 v234; // rax
  __int64 v235; // rsi
  __int64 v236; // r12
  char *v237; // rax
  char *v238; // rdi
  void **v239; // rsi
  unsigned __int64 v240; // rax
  __int64 v241; // rdx
  void *v242; // rbx
  __int64 v243; // rax
  __int64 v244; // rcx
  __int64 v245; // rdx
  __int64 v246; // rax
  __int64 v247; // rbx
  char *v248; // rbx
  void **v249; // r15
  __int64 v250; // rsi
  void *v251; // rbx
  void *v252; // rbx
  __int64 v253; // rdi
  __int64 *v254; // r15
  __int64 v255; // rsi
  unsigned __int64 v256; // rax
  void **v257; // rax
  void *v258; // r12
  unsigned int v259; // r13d
  unsigned int v260; // eax
  unsigned int *v261; // rax
  __int64 v262; // rax
  int v263; // esi
  unsigned int v264; // r13d
  size_t v265; // rsi
  unsigned int *v266; // rax
  __int64 v267; // rcx
  void **v268; // rax
  void *v269; // rbx
  unsigned __int64 v270; // rdx
  void *v271; // r13
  void *v272; // r13
  void *v273; // rdi
  void *v274; // rbx
  void *v275; // rbx
  void *v276; // rdi
  __int64 v277; // r12
  void **v278; // rax
  void *v279; // rbx
  void *v280; // rbx
  void *v281; // rdi
  __int64 v282; // rbx
  void **v283; // rax
  void *v284; // r12
  _QWORD *v285; // rsi
  void *v286; // r14
  __int64 v287; // rax
  __int64 v288; // rax
  void **v289; // rsi
  unsigned __int64 v290; // rax
  __int64 v291; // r10
  void **v292; // r11
  unsigned __int64 v293; // rax
  __int64 v294; // rsi
  void **v295; // r11
  unsigned __int64 v296; // rax
  __int64 v297; // rsi
  int v298; // ecx
  int v299; // r8d
  int v300; // r9d
  int v301; // edi
  __int64 v302; // rax
  void *v303; // r13
  int v304; // ecx
  int v305; // r8d
  int v306; // r9d
  int v307; // edi
  __int64 v308; // rax
  int v309; // ecx
  int v310; // r8d
  int v311; // r9d
  int v312; // edi
  __int64 v313; // rax
  void *v314; // r12
  void *v315; // rdi
  __int64 v316; // [rsp-10h] [rbp-500h]
  __int64 v317; // [rsp-10h] [rbp-500h]
  __int64 v318; // [rsp-8h] [rbp-4F8h]
  __int64 v319; // [rsp+0h] [rbp-4F0h]
  unsigned int *v320; // [rsp+8h] [rbp-4E8h]
  unsigned int *v321; // [rsp+10h] [rbp-4E0h]
  unsigned int *v322; // [rsp+18h] [rbp-4D8h]
  __int64 v323; // [rsp+20h] [rbp-4D0h] BYREF
  __int64 v324; // [rsp+28h] [rbp-4C8h]
  __int64 v325; // [rsp+30h] [rbp-4C0h]
  int v326[2]; // [rsp+38h] [rbp-4B8h]
  char *v327; // [rsp+40h] [rbp-4B0h]
  unsigned __int8 v328; // [rsp+48h] [rbp-4A8h]
  char v329; // [rsp+49h] [rbp-4A7h]
  unsigned __int8 v330; // [rsp+4Ah] [rbp-4A6h]
  char v331; // [rsp+4Bh] [rbp-4A5h]
  int v332; // [rsp+4Ch] [rbp-4A4h]
  __int64 *v333; // [rsp+50h] [rbp-4A0h]
  _QWORD *v334; // [rsp+58h] [rbp-498h]
  size_t v335; // [rsp+60h] [rbp-490h]
  __int64 *v336; // [rsp+68h] [rbp-488h]
  __int64 v337; // [rsp+70h] [rbp-480h]
  char *v338; // [rsp+78h] [rbp-478h]
  __int64 v339; // [rsp+80h] [rbp-470h]
  __int64 v340; // [rsp+88h] [rbp-468h]
  char *v341; // [rsp+90h] [rbp-460h]
  unsigned int *v342; // [rsp+98h] [rbp-458h]
  __int64 *v343; // [rsp+A0h] [rbp-450h]
  void *v344; // [rsp+A8h] [rbp-448h]
  int v345[2]; // [rsp+B0h] [rbp-440h]
  int v346[2]; // [rsp+B8h] [rbp-438h]
  void *v347; // [rsp+C0h] [rbp-430h]
  void *v348; // [rsp+C8h] [rbp-428h]
  void *v349; // [rsp+D0h] [rbp-420h]
  int v350; // [rsp+D8h] [rbp-418h]
  char v351; // [rsp+DEh] [rbp-412h]
  unsigned __int8 v352; // [rsp+DFh] [rbp-411h]
  unsigned __int64 v353; // [rsp+E0h] [rbp-410h]
  int v354[2]; // [rsp+E8h] [rbp-408h]
  unsigned int *v355; // [rsp+F0h] [rbp-400h] BYREF
  __int64 v356; // [rsp+F8h] [rbp-3F8h]
  __int64 v357; // [rsp+100h] [rbp-3F0h]
  void **v358; // [rsp+108h] [rbp-3E8h]
  void *v359; // [rsp+118h] [rbp-3D8h] BYREF
  __int64 v360; // [rsp+120h] [rbp-3D0h] BYREF
  __int64 v361; // [rsp+128h] [rbp-3C8h]
  __int64 v362; // [rsp+130h] [rbp-3C0h] BYREF
  __int64 *v363; // [rsp+138h] [rbp-3B8h]
  __int64 v364; // [rsp+140h] [rbp-3B0h] BYREF
  _QWORD *v365; // [rsp+148h] [rbp-3A8h]
  __int64 v366; // [rsp+150h] [rbp-3A0h] BYREF
  __int64 v367; // [rsp+158h] [rbp-398h]
  __m128 v368; // [rsp+160h] [rbp-390h] BYREF
  int v369[2]; // [rsp+170h] [rbp-380h] BYREF
  char v370[8]; // [rsp+178h] [rbp-378h] BYREF
  __int64 v371; // [rsp+180h] [rbp-370h]
  _QWORD v372[2]; // [rsp+190h] [rbp-360h] BYREF
  _QWORD v373[2]; // [rsp+1A0h] [rbp-350h] BYREF
  _QWORD v374[2]; // [rsp+1B0h] [rbp-340h] BYREF
  _QWORD v375[2]; // [rsp+1C0h] [rbp-330h] BYREF
  _QWORD v376[2]; // [rsp+1D0h] [rbp-320h] BYREF
  _QWORD v377[2]; // [rsp+1E0h] [rbp-310h] BYREF
  unsigned int *v378; // [rsp+1F0h] [rbp-300h]
  void *v379; // [rsp+1F8h] [rbp-2F8h]
  __int64 v380; // [rsp+200h] [rbp-2F0h]
  _BYTE v381[136]; // [rsp+208h] [rbp-2E8h] BYREF
  unsigned int *v382; // [rsp+290h] [rbp-260h]
  void *v383; // [rsp+298h] [rbp-258h]
  __int64 v384; // [rsp+2A0h] [rbp-250h]
  char v385; // [rsp+2A8h] [rbp-248h] BYREF
  void *v386[2]; // [rsp+330h] [rbp-1C0h] BYREF
  __int64 v387; // [rsp+340h] [rbp-1B0h] BYREF
  __int64 v388; // [rsp+348h] [rbp-1A8h] BYREF
  _BYTE v389[104]; // [rsp+3D0h] [rbp-120h] BYREF
  __int64 *v390; // [rsp+438h] [rbp-B8h]
  __int64 v391; // [rsp+440h] [rbp-B0h]
  __int64 *v392; // [rsp+448h] [rbp-A8h]
  __int64 v393; // [rsp+450h] [rbp-A0h]
  __int64 (__fastcall **v394)(); // [rsp+458h] [rbp-98h]
  __int64 *v395; // [rsp+478h] [rbp-78h]
  __int64 v396; // [rsp+480h] [rbp-70h]
  void *ptr; // [rsp+488h] [rbp-68h]
  __int64 v398; // [rsp+490h] [rbp-60h] BYREF
  _QWORD *v399; // [rsp+498h] [rbp-58h]
  __int64 v400; // [rsp+4A0h] [rbp-50h]
  _QWORD *v401; // [rsp+4A8h] [rbp-48h]
  __int64 v402; // [rsp+4B0h] [rbp-40h]
  _QWORD *v403; // [rsp+4B8h] [rbp-38h]

  *(_QWORD *)v354 = a1;
  v335 = a3;
  v352 = sub_4487B0(a1, a2);
  if ( !v352 )
    return v352;
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v326 = v389;
  sub_4690D0(v389, v12);
  v13 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 104) = 0;
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v13 + 32 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v17 = v13 + 16;
        v13 += 32;
        sub_182CBA0(v16, v17);
      }
      while ( v13 != v15 );
      v13 = *(_QWORD *)(*(_QWORD *)v354 + 128LL);
    }
    *(_DWORD *)(v13 - 4) = 0;
  }
  sub_44BB40(*(__int64 **)v354, *(__int64 *)v326, a2);
  v352 = sub_468DD0(v326[0]);
  if ( !v352 )
    goto LABEL_84;
  if ( v401 && *((_DWORD *)v401 - 1) )
    ++**(_DWORD **)v354;
  v18 = *(_QWORD *)(a2 + 56);
  v360 = 0;
  v361 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  sub_4489A0(*(_QWORD **)v354, v18, &v360);
  v19 = v401;
  v363 = nullptr;
  v339 = v360;
  v319 = v361;
  v362 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  if ( v401 )
  {
    v20 = *((unsigned int *)v401 - 1);
    if ( (_DWORD)v20 )
    {
      v21 = &v401[v20];
      v22 = v401;
      v23 = *v401;
      if ( *v401 )
        ++*(_DWORD *)(*v401 + 8LL);
      v24 = (_QWORD *)sub_186B270(0x18u);
      v25 = v24 + 1;
      *v24 = 2;
      v26 = 1;
      v363 = v25;
      v19 = v25;
      while ( 1 )
      {
        ++v22;
        *v25 = v23;
        *((_DWORD *)v19 - 1) = v26;
        if ( v21 == v22 )
          break;
        while ( 1 )
        {
          v23 = *v22;
          if ( *v22 )
            ++*(_DWORD *)(*v22 + 8LL);
          v27 = *((_DWORD *)v19 - 1);
          if ( v27 == *((_DWORD *)v19 - 2) )
            break;
          ++v22;
          v19[v27] = v23;
          *((_DWORD *)v19 - 1) = v27 + 1;
          if ( v21 == v22 )
            goto LABEL_23;
        }
        v68 = (3 * v27 + 1) >> 1;
        v69 = 8 * v68 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v69 || v27 >= v68 )
        {
          v348 = v386;
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v348);
          sub_233E40((__int64)v348);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v70 = (unsigned int *)sub_186B300(v19 - 1, v69);
        v71 = v70[1];
        v19 = (__int64 *)(v70 + 2);
        *v70 = v68;
        v363 = v19;
        LODWORD(v70) = v71;
        v25 = &v19[v71];
        v26 = (_DWORD)v70 + 1;
      }
    }
    else
    {
      v19 = nullptr;
    }
  }
LABEL_23:
  v28 = v403;
  if ( v403 )
  {
    v29 = *((unsigned int *)v403 - 1);
    if ( (_DWORD)v29 )
    {
      v30 = &v403[v29];
      v31 = *v403;
      if ( *v403 )
        ++*(_DWORD *)(*v403 + 8LL);
      if ( v19 )
        goto LABEL_32;
      v32 = (_QWORD *)sub_186B270(0x18u);
      v19 = v32 + 1;
      *v32 = 2;
      v33 = 1;
      v363 = v19;
      v34 = v19;
      while ( 1 )
      {
        ++v28;
        *v34 = v31;
        *((_DWORD *)v19 - 1) = v33;
        if ( v30 == v28 )
          break;
        while ( 1 )
        {
          v31 = *v28;
          if ( *v28 )
            ++*(_DWORD *)(*v28 + 8LL);
LABEL_32:
          v35 = *((_DWORD *)v19 - 1);
          if ( v35 == *((_DWORD *)v19 - 2) )
            break;
          ++v28;
          v19[v35] = v31;
          *((_DWORD *)v19 - 1) = v35 + 1;
          if ( v30 == v28 )
            goto LABEL_34;
        }
        v72 = (3 * v35 + 1) >> 1;
        v73 = 8 * v72 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v73 || v35 >= v72 )
        {
          v348 = v386;
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v348);
          sub_233E40((__int64)v348);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = (unsigned int *)sub_186B300(v19 - 1, v73);
        v75 = v74[1];
        v19 = (__int64 *)(v74 + 2);
        *v74 = v72;
        v363 = v19;
        LODWORD(v74) = v75;
        v34 = &v19[v75];
        v33 = (_DWORD)v74 + 1;
      }
    }
  }
LABEL_34:
  v359 = nullptr;
  v333 = &v362;
  sub_4481D0(*(__int64 *)v354, (__int64)&v362, (__int64)&v398, v339, &v359);
  v365 = nullptr;
  v366 = 0;
  v36 = v363;
  v364 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  v367 = v364;
  v37 = v363;
  if ( v363 )
  {
    v38 = (unsigned __int64)&v363[*((unsigned int *)v363 - 1)];
    if ( (unsigned __int64)v363 >= v38 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v39 = *v36;
        if ( *v36 )
        {
          v40 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v36 >= v38 )
          goto LABEL_41;
      }
      v343 = &v364;
      sub_15D7BC0(v362, v39);
      ++v36;
    }
    while ( (unsigned __int64)v36 < v38 );
LABEL_41:
    v37 = v363;
    if ( v363 )
LABEL_42:
      *((_DWORD *)v37 - 1) = 0;
  }
  v41 = v401;
  if ( v401 && (v42 = *((unsigned int *)v401 - 1), (_DWORD)v42) )
  {
    v43 = &v401[v42];
    v44 = v37;
    v45 = *v401;
    if ( *v401 )
      ++*(_DWORD *)(*v401 + 8LL);
    if ( v37 )
      goto LABEL_52;
    v343 = &v364;
    v46 = (_QWORD *)sub_186B270(0x18u);
    v44 = v46 + 1;
    *v46 = 2;
    v47 = 1;
    v363 = v46 + 1;
    v48 = v46 + 1;
    while ( 1 )
    {
      ++v41;
      *v48 = v45;
      *((_DWORD *)v44 - 1) = v47;
      if ( v43 == v41 )
        break;
      while ( 1 )
      {
        v45 = *v41;
        if ( *v41 )
          ++*(_DWORD *)(*v41 + 8LL);
LABEL_52:
        v49 = *((_DWORD *)v44 - 1);
        if ( v49 == *((_DWORD *)v44 - 2) )
          break;
        v50 = v49;
        ++v41;
        v47 = v49 + 1;
        v44[v50] = v45;
        *((_DWORD *)v44 - 1) = v47;
        if ( v43 == v41 )
          goto LABEL_54;
      }
      v259 = (3 * v49 + 1) >> 1;
      v260 = 8 * v259 + 8;
      if ( 8 * v49 + 8 >= v260 || v49 >= v259 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v386);
        sub_233E40((__int64)v386);
        v343 = &v364;
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v343 = &v364;
      v261 = (unsigned int *)sub_186B300(v44 - 1, v260);
      v44 = (__int64 *)(v261 + 2);
      *v261 = v259;
      v262 = v261[1];
      v363 = v44;
      v263 = v262;
      v48 = &v44[v262];
      v47 = (unsigned int)(v263 + 1);
    }
LABEL_54:
    v51 = v362;
    v343 = &v364;
    v52 = sub_15EC1C0(v362, v47);
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v53 = v366;
    v366 = v52;
    if ( v53 )
    {
      v40 = (*(_DWORD *)(v53 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v51, v53);
    }
    v54 = v399;
    if ( v399 )
    {
      v55 = *((unsigned int *)v399 - 1);
      if ( (_DWORD)v55 )
      {
        v56 = &v399[v55];
        v57 = v365;
        v58 = *v399;
        if ( *v399 )
          ++*(_DWORD *)(*v399 + 8LL);
        if ( v57 )
          goto LABEL_68;
        v343 = &v364;
        v59 = (_QWORD *)sub_186B270(0x18u);
        v57 = v59 + 1;
        *v59 = 2;
        v60 = 1;
        v365 = v57;
        v61 = v57;
        while ( 1 )
        {
          ++v54;
          *v61 = v58;
          *((_DWORD *)v57 - 1) = v60;
          if ( v56 == v54 )
            break;
          while ( 1 )
          {
            v58 = *v54;
            if ( *v54 )
              ++*(_DWORD *)(*v54 + 8LL);
LABEL_68:
            v62 = *((_DWORD *)v57 - 1);
            if ( v62 == *((_DWORD *)v57 - 2) )
              break;
            ++v54;
            v57[v62] = v58;
            *((_DWORD *)v57 - 1) = v62 + 1;
            if ( v56 == v54 )
              goto LABEL_70;
          }
          v264 = (3 * v62 + 1) >> 1;
          v265 = 8 * v264 + 8;
          if ( 8 * v62 + 8 >= (unsigned int)v265 || v62 >= v264 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v386);
            sub_233E40((__int64)v386);
            v343 = &v364;
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v343 = &v364;
          v266 = (unsigned int *)sub_186B300(v57 - 1, v265);
          v267 = v266[1];
          v57 = v266 + 2;
          *v266 = v264;
          v365 = v57;
          LODWORD(v266) = v267;
          v61 = &v57[v267];
          v60 = (_DWORD)v266 + 1;
        }
      }
    }
LABEL_70:
    v343 = &v364;
    v63 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
    LOBYTE(v358) = *(_BYTE *)(*(_QWORD *)v354 + 136LL);
    sub_3D9A20(v63, &v364, &v366, (char *)v359, 1u, 1, (unsigned __int8)v358 ^ 1);
    v66 = v316;
    if ( v365 )
    {
      v67 = *((unsigned int *)v365 - 1);
      if ( (_DWORD)v67 )
      {
        v352 = 0;
        goto LABEL_273;
      }
    }
  }
  else
  {
    v343 = &v364;
  }
  v109 = v403;
  if ( v403 )
  {
    v110 = *((unsigned int *)v403 - 1);
    if ( (_DWORD)v110 )
    {
      v111 = &v403[v110];
      v112 = v363;
      v113 = *v403;
      if ( *v403 )
        ++*(_DWORD *)(*v403 + 8LL);
      if ( v112 )
        goto LABEL_227;
      v114 = sub_186B270(0x18u);
      v112 = (__int64 *)(v114 + 8);
      *(_QWORD *)v114 = 2;
      ++v109;
      v363 = (__int64 *)(v114 + 8);
      *(_QWORD *)(v114 + 8) = v113;
      for ( *(_DWORD *)(v114 + 4) = 1; v111 != v109; *((_DWORD *)v112 - 1) = v154 )
      {
        v113 = *v109;
        if ( *v109 )
        {
          ++*(_DWORD *)(*v109 + 8LL);
          v152 = *((_DWORD *)v112 - 1);
          if ( v152 == *((_DWORD *)v112 - 2) )
          {
LABEL_232:
            v156 = (3 * v152 + 1) >> 1;
            v157 = 8 * v156 + 8;
            if ( 8 * v152 + 8 >= (unsigned int)v157 || v152 >= v156 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v386);
              sub_233E40((__int64)v386);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v158 = (unsigned int *)sub_186B300(v112 - 1, v157);
            v159 = v158[1];
            v112 = (__int64 *)(v158 + 2);
            *v158 = v156;
            v363 = v112;
            LODWORD(v158) = v159;
            v155 = &v112[v159];
            v154 = (_DWORD)v158 + 1;
            goto LABEL_229;
          }
        }
        else
        {
LABEL_227:
          v152 = *((_DWORD *)v112 - 1);
          if ( v152 == *((_DWORD *)v112 - 2) )
            goto LABEL_232;
        }
        v153 = v152;
        v154 = v152 + 1;
        v155 = &v112[v153];
LABEL_229:
        ++v109;
        *v155 = v113;
      }
    }
  }
  sub_15EEF60(v339);
  v115 = v362;
  v323 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  if ( v363 )
    v116 = *((unsigned int *)v363 - 1);
  else
    v116 = 0;
  v117 = sub_15EC1C0(v362, v116);
  v325 = v117;
  if ( v117 )
  {
    LODWORD(v358) = *(_DWORD *)(v117 + 8);
    v40 = (_DWORD)v358 == -1;
    *(_DWORD *)(v117 + 8) = (_DWORD)v358 + 1;
    if ( v40 )
      sub_15D7BC0(v115, v117);
  }
  v118 = v363;
  if ( v363 )
  {
    v119 = (unsigned __int64)&v363[*((unsigned int *)v363 - 1)];
    if ( (unsigned __int64)v363 >= v119 )
      goto LABEL_170;
    do
    {
      while ( 1 )
      {
        v120 = *v118;
        if ( *v118 )
        {
          v40 = (*(_DWORD *)(v120 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v118 >= v119 )
          goto LABEL_169;
      }
      sub_15D7BC0(v362, v120);
      ++v118;
    }
    while ( (unsigned __int64)v118 < v119 );
LABEL_169:
    v118 = v363;
    if ( v363 )
LABEL_170:
      *((_DWORD *)v118 - 1) = 0;
  }
  if ( !v366 )
    goto LABEL_239;
  v121 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  v341 = &v370;
  *(_QWORD *)v369 = v121;
  sub_16669D0(&v370, v121);
  sub_15EEF60(v366);
  v321 = *(unsigned int **)v369;
  v122 = v363;
  if ( !v363 )
    goto LABEL_239;
  v123 = *((unsigned int *)v363 - 1);
  if ( !(_DWORD)v123 )
    goto LABEL_239;
  v124 = 0;
  v353 = 0;
  v324 = 8 * v123;
  v336 = &v388;
LABEL_175:
  v125 = v122[v353 / 8];
  if ( v125 )
    ++*(_DWORD *)(v125 + 8);
  if ( v124 )
  {
    v40 = (*(_DWORD *)(v124 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v321, v124);
  }
  v372[0] = 0;
  v372[1] = 0;
  v373[0] = 1;
  v373[1] = 0;
  v344 = v372;
  v126 = *(_DWORD **)(sub_15D1F10(v125) + 24);
  if ( v126 && *v126 == 5 && v126[1] == 1 )
  {
    v252 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v372);
    sub_182CBA0(v252, v373);
    v253 = v362;
    v254 = &v363[v353 / 8];
    goto LABEL_394;
  }
  if ( *(_WORD *)(v125 + 4) )
  {
    v160 = v372;
    v161 = qword_1C7F2C0;
    goto LABEL_236;
  }
  v127 = *(_DWORD **)(*(_QWORD *)(v125 + 16) + 24LL);
  if ( v127 && *v127 == 5 && v127[1] == 18 )
  {
    v124 = *(_QWORD *)(v125 + 32);
    if ( v124 )
      ++*(_DWORD *)(v124 + 8);
    v40 = (*(_DWORD *)(v125 + 8))-- == 1;
    if ( v40 )
    {
      v344 = v372;
      sub_15D7BC0(v321, v125);
    }
    v285 = v372;
    v286 = qword_1C7F2C0;
LABEL_453:
    sub_182CBA0(v286, v285);
    sub_182CBA0(v286, v373);
    goto LABEL_454;
  }
  v348 = v386;
  v344 = v372;
  v328 = sub_1666AE0(v341, v125, v372, v386);
  if ( !v328 )
  {
    v320 = *(unsigned int **)v369;
    v378 = *(unsigned int **)v369;
    v327 = v381;
    v379 = v381;
    v380 = 0x1000000000LL;
    v128 = *(unsigned int *)(v125 + 24);
    if ( !(_DWORD)v128 )
    {
      v227 = v327;
      v328 = v352;
      v358 = &qword_1C7F2C0;
      goto LABEL_386;
    }
    v356 = v125;
    v337 = v125 + 8 * v128;
    v347 = v374;
    v338 = &v385;
    v351 = 0;
    v334 = v375;
LABEL_188:
    v129 = *(_QWORD *)(v356 + 32);
    if ( v129 )
      ++*(_DWORD *)(v129 + 8);
    v374[0] = 0;
    v374[1] = 0;
    v375[0] = 1;
    v375[1] = 0;
    v130 = *(_DWORD **)(sub_15D1F10(v129) + 24);
    if ( v130 && *v130 == 5 && v130[1] == 1 )
    {
      v242 = qword_1C7F2C0;
      v358 = &qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v347);
      sub_182CBA0(v242, v334);
LABEL_369:
      v222 = v380;
      v223 = HIDWORD(v380);
      if ( (unsigned int)v380 < HIDWORD(v380) )
        goto LABEL_370;
LABEL_334:
      v224 = (unsigned int)(2 * v223);
      v225 = (char *)sub_186B270(8 * v224);
      v222 = v380;
      v226 = (char *)v379;
      v227 = v225;
      if ( (_DWORD)v380 )
      {
        if ( (unsigned int)(v380 - 1) <= 2 || v225 == (char *)v379 + 8 )
        {
          v295 = v358;
          v296 = 0;
          v297 = 8LL * (unsigned int)v380;
          do
          {
            *(_QWORD *)&v227[v296] = *(_QWORD *)&v226[v296];
            v296 += 8LL;
          }
          while ( v296 != v297 );
          v358 = v295;
        }
        else
        {
          v228 = v358;
          v229 = 0;
          v230 = 16LL * ((unsigned int)v380 >> 1);
          do
          {
            *(__m128i *)&v227[v229] = _mm_loadu_si128((const __m128i *)&v226[v229]);
            v229 += 16LL;
          }
          while ( v229 != v230 );
          v358 = v228;
          if ( (v222 & 1) != 0 )
            *(_QWORD *)&v227[8 * (v222 & 0xFFFFFFFE)] = *(_QWORD *)&v226[8 * (v222 & 0xFFFFFFFE)];
        }
      }
      if ( v226 != v327 && v226 )
      {
        sub_186B220(v226);
        v222 = v380;
      }
      v379 = v227;
      HIDWORD(v380) = v224;
      goto LABEL_371;
    }
    if ( *(_WORD *)(v129 + 4) )
    {
      v268 = &qword_1C7F2C0;
      v358 = &qword_1C7F2C0;
LABEL_412:
      v269 = *v268;
      sub_182CBA0(*v268, v347);
      sub_182CBA0(v269, v375);
LABEL_413:
      v40 = (*(_DWORD *)(v129 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v320, v129);
      v227 = (char *)v379;
      v248 = (char *)v379 + 8 * (unsigned int)v380;
      goto LABEL_379;
    }
    v131 = *(_DWORD **)(*(_QWORD *)(v129 + 16) + 24LL);
    if ( v131 && *v131 == 5 && v131[1] == 18 )
    {
      v282 = *(_QWORD *)(v129 + 32);
      if ( v282 )
        ++*(_DWORD *)(v282 + 8);
      v40 = (*(_DWORD *)(v129 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v320, v129);
      v283 = &qword_1C7F2C0;
      v358 = &qword_1C7F2C0;
      goto LABEL_446;
    }
    v330 = sub_1666AE0(v341, v129, v347, v348);
    if ( v330 )
    {
      BYTE4(v386[0]) &= 0xFCu;
      BYTE4(v387) &= 0xFCu;
      LODWORD(v386[0]) = 0;
      v274 = qword_1C7F2C0;
      v386[1] = nullptr;
      LODWORD(v387) = 1;
      v388 = 0;
      v358 = &qword_1C7F2C0;
      if ( (v375[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v348, v375);
      else
        LODWORD(v386[0]) = v375[0];
      sub_182CBA0(v274, &v387);
      LODWORD(v387) = 1;
      BYTE4(v387) &= ~1u;
      v275 = *v358;
      v276 = *v358;
      if ( (BYTE4(v386[0]) & 1) != 0 || LODWORD(v386[0]) != 1 )
      {
        sub_182CBA0(v276, v348);
        sub_182CBA0(v275, &v387);
        v268 = v358;
        goto LABEL_412;
      }
      sub_182CBA0(v276, v348);
      sub_182CBA0(v275, &v387);
      v307 = v371;
      if ( !v371 )
      {
        sub_16669E0(v341);
        v307 = v371;
      }
      v308 = sub_166A700(v307, (_DWORD)v347, 1, v304, v305, v306);
      v282 = v308;
      if ( v308 )
        ++*(_DWORD *)(v308 + 8);
      v40 = (*(_DWORD *)(v129 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v320, v129);
      v283 = v358;
LABEL_446:
      v284 = *v283;
      sub_182CBA0(*v283, v347);
      sub_182CBA0(v284, v375);
      v40 = v129 == v282;
      v129 = v282;
      v351 |= !v40;
      goto LABEL_369;
    }
    v322 = *(unsigned int **)v369;
    v382 = *(unsigned int **)v369;
    v383 = v338;
    v384 = 0x1000000000LL;
    v132 = *(unsigned int *)(v129 + 24);
    if ( !(_DWORD)v132 )
    {
      v213 = v338;
      v217 = v129;
      v330 = v352;
      v358 = &qword_1C7F2C0;
      goto LABEL_329;
    }
    v357 = v129;
    v340 = v129 + 8 * v132;
    v329 = 0;
    v349 = v376;
    while ( 1 )
    {
      v133 = *(unsigned int **)(v357 + 32);
      if ( v133 )
        ++v133[2];
      v376[0] = 0;
      v376[1] = 0;
      v377[0] = 1;
      v377[1] = 0;
      v134 = *(_DWORD **)(sub_15D1F10(v133) + 24);
      if ( v134 && *v134 == 5 && v134[1] == 1 )
      {
        v211 = qword_1C7F2C0;
        v358 = &qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v349);
        sub_182CBA0(v211, v377);
      }
      else
      {
        if ( *((_WORD *)v133 + 2) )
        {
          v257 = &qword_1C7F2C0;
          v358 = &qword_1C7F2C0;
LABEL_401:
          v258 = *v257;
          sub_182CBA0(*v257, v349);
          sub_182CBA0(v258, v377);
          goto LABEL_402;
        }
        v135 = *(_DWORD **)(*((_QWORD *)v133 + 2) + 24LL);
        if ( v135 && *v135 == 5 && v135[1] == 18 )
        {
          v277 = *((_QWORD *)v133 + 4);
          if ( v277 )
            ++*(_DWORD *)(v277 + 8);
          v40 = v133[2]-- == 1;
          if ( v40 )
            sub_15D7BC0(v322, v133);
          v278 = &qword_1C7F2C0;
          v358 = &qword_1C7F2C0;
LABEL_484:
          v303 = *v278;
          sub_182CBA0(*v278, v349);
          sub_182CBA0(v303, v377);
          v40 = v133 == (unsigned int *)v277;
          v133 = (unsigned int *)v277;
          v329 |= !v40;
          goto LABEL_316;
        }
        LOBYTE(v350) = sub_1666AE0(v341, v133, v349, v348);
        if ( (_BYTE)v350 )
        {
          BYTE4(v386[0]) &= 0xFCu;
          BYTE4(v387) &= 0xFCu;
          LODWORD(v386[0]) = 0;
          v271 = qword_1C7F2C0;
          v386[1] = nullptr;
          LODWORD(v387) = 1;
          v388 = 0;
          v358 = &qword_1C7F2C0;
          if ( (v377[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, v348, v377);
          else
            LODWORD(v386[0]) = v377[0];
          sub_182CBA0(v271, &v387);
          LODWORD(v387) = 1;
          BYTE4(v387) &= ~1u;
          v272 = *v358;
          v273 = *v358;
          if ( (BYTE4(v386[0]) & 1) != 0 || LODWORD(v386[0]) != 1 )
          {
            sub_182CBA0(v273, v348);
            sub_182CBA0(v272, &v387);
            v257 = v358;
            goto LABEL_401;
          }
          sub_182CBA0(v273, v348);
          sub_182CBA0(v272, &v387);
          v301 = v371;
          if ( !v371 )
          {
            sub_16669E0(v341);
            v301 = v371;
          }
          v302 = sub_166A700(v301, (_DWORD)v349, 1, v298, v299, v300);
          v277 = v302;
          if ( v302 )
            ++*(_DWORD *)(v302 + 8);
          v40 = v133[2]-- == 1;
          if ( v40 )
            sub_15D7BC0(v322, v133);
          v278 = v358;
          goto LABEL_484;
        }
        v355 = *(unsigned int **)v369;
        v386[0] = *(void **)v369;
        v386[1] = v336;
        v387 = 0x1000000000LL;
        v136 = v133[6];
        if ( (_DWORD)v136 )
        {
          v137 = v133;
          v342 = &v133[2 * v136];
          *(_QWORD *)v346 = &v368;
          *(_QWORD *)v345 = v369;
          do
          {
            v138 = *((_QWORD *)v137 + 4);
            v139 = _mm_loadh_ps((const double *)&v355);
            if ( v138 )
              ++*(_DWORD *)(v138 + 8);
            v368 = v139;
            v140 = sub_4490D0(*(__int64 **)v345, *(__int64 **)v346, 5);
            v141 = v368.m128_u64[1];
            v142 = v140;
            v355 = (unsigned int *)v368.m128_u64[1];
            v358 = (void **)v368.m128_u64[0];
            if ( !v140 )
            {
              if ( v358
                && (v270 = v368.m128_u64[0],
                    v350 = *(_DWORD *)(v368.m128_u64[0] + 8),
                    v40 = v350 == 1,
                    *(_DWORD *)(v368.m128_u64[0] + 8) = v350 - 1,
                    v40) )
              {
                LOBYTE(v350) = 0;
                v147 = (__int64)v133;
                sub_15D7BC0(v141, v270);
                v144 = (__int64 *)v386[1];
                v146 = (unsigned int)v387;
                v142 = 0;
              }
              else
              {
                v144 = (__int64 *)v386[1];
                v146 = (unsigned int)v387;
                v147 = (__int64)v133;
              }
              goto LABEL_216;
            }
            v143 = v387;
            LOBYTE(v350) = (v138 != v368.m128_u64[0]) | v350;
            if ( (unsigned int)v387 >= HIDWORD(v387) )
            {
              v331 = v140;
              v332 = 2 * HIDWORD(v387);
              v231 = (__int64 *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v387)));
              v143 = v387;
              v232 = (__int64 *)v386[1];
              v144 = v231;
              v142 = v331;
              if ( (_DWORD)v387 )
              {
                if ( (unsigned int)(v387 - 1) <= 2 || v231 == (__int64 *)((char *)v386[1] + 8) )
                {
                  v289 = v358;
                  v290 = 0;
                  v291 = 8LL * (unsigned int)v387;
                  do
                  {
                    v144[v290 / 8] = v232[v290 / 8];
                    v290 += 8LL;
                  }
                  while ( v291 != v290 );
                  v358 = v289;
                }
                else
                {
                  v233 = v358;
                  v234 = 0;
                  v235 = 16LL * ((unsigned int)v387 >> 1);
                  do
                  {
                    *(__m128i *)&v144[v234 / 8] = _mm_loadu_si128((const __m128i *)&v232[v234 / 8]);
                    v234 += 16LL;
                  }
                  while ( v235 != v234 );
                  v358 = v233;
                  if ( (v143 & 1) != 0 )
                    v144[v143 & 0xFFFFFFFE] = v232[v143 & 0xFFFFFFFE];
                }
              }
              if ( v232 != v336 && v232 )
              {
                v331 = v142;
                sub_186B220(v232);
                v143 = v387;
                v142 = v331;
              }
              v386[1] = v144;
              HIDWORD(v387) = v332;
            }
            else
            {
              v144 = (__int64 *)v386[1];
            }
            v145 = v143;
            v146 = v143 + 1;
            v137 += 2;
            v144[v145] = (__int64)v358;
            LODWORD(v387) = v146;
          }
          while ( v342 != v137 );
          if ( (_BYTE)v350 )
          {
            LOBYTE(v358) = v142;
            v287 = sub_15E1AF0(v369[0]);
            v142 = (char)v358;
            v147 = v287;
            if ( v287 )
              ++*(_DWORD *)(v287 + 8);
            v40 = v133[2]-- == 1;
            if ( v40 )
            {
              LOBYTE(v358) = v142;
              sub_15D7BC0(v322, v133);
              v142 = (char)v358;
            }
            v144 = (__int64 *)v386[1];
            v146 = (unsigned int)v387;
          }
          else
          {
            v147 = (__int64)v133;
          }
LABEL_216:
          if ( v144 < &v144[v146] )
          {
            v355 = v133;
            v148 = &v144[v146];
            LOBYTE(v358) = v142;
            do
            {
              while ( 1 )
              {
                v149 = *v144;
                if ( *v144 )
                {
                  v150 = v386[0];
                  v40 = (*(_DWORD *)(v149 + 8))-- == 1;
                  if ( v40 )
                    break;
                }
                if ( ++v144 >= v148 )
                  goto LABEL_222;
              }
              sub_15D7BC0(v150, v149);
              ++v144;
            }
            while ( v144 < v148 );
LABEL_222:
            v142 = (char)v358;
            v133 = v355;
            v144 = (__int64 *)v386[1];
          }
          if ( v144 != nullptr && v144 != v336 )
          {
            LOBYTE(v358) = v142;
            sub_186B220(v144);
            v142 = (char)v358;
          }
          LOBYTE(v355) = v142;
          v151 = qword_1C7F2C0;
          v358 = &qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v349);
          sub_182CBA0(v151, v377);
          if ( !(_BYTE)v355 )
          {
            v133 = (unsigned int *)v147;
            if ( !v147 )
            {
              v213 = (char *)v383;
              v330 = 0;
              v217 = v129;
              v218 = (char *)v383 + 8 * (unsigned int)v384;
              goto LABEL_322;
            }
LABEL_402:
            v40 = v133[2]-- == 1;
            if ( v40 )
              sub_15D7BC0(v322, v133);
            v213 = (char *)v383;
            v217 = v129;
            v218 = (char *)v383 + 8 * (unsigned int)v384;
LABEL_322:
            if ( v213 < v218 )
            {
              do
              {
                while ( 1 )
                {
                  v219 = *(_QWORD *)v213;
                  if ( *(_QWORD *)v213 )
                  {
                    v220 = v382;
                    v40 = (*(_DWORD *)(v219 + 8))-- == 1;
                    if ( v40 )
                      break;
                  }
                  v213 += 8;
                  if ( v213 >= v218 )
                    goto LABEL_328;
                }
                sub_15D7BC0(v220, v219);
                v213 += 8;
              }
              while ( v213 < v218 );
LABEL_328:
              v213 = (char *)v383;
            }
LABEL_329:
            if ( v213 != v338 && v213 )
              sub_186B220(v213);
            v221 = *v358;
            sub_182CBA0(*v358, v347);
            sub_182CBA0(v221, v334);
            if ( v330 )
            {
              v40 = v129 == v217;
              v222 = v380;
              v129 = v217;
              v223 = HIDWORD(v380);
              v351 |= !v40;
              if ( (unsigned int)v380 >= HIDWORD(v380) )
                goto LABEL_334;
LABEL_370:
              v227 = (char *)v379;
LABEL_371:
              v243 = v222;
              v356 += 8;
              v244 = v222 + 1;
              v245 = v337;
              *(_QWORD *)&v227[8 * v243] = v129;
              LODWORD(v380) = v244;
              if ( v356 == v245 )
              {
                if ( v351 )
                {
                  v246 = sub_15E1AF0(v369[0]);
                  v247 = v246;
                  if ( v246 )
                    ++*(_DWORD *)(v246 + 8);
                  v40 = (*(_DWORD *)(v125 + 8))-- == 1;
                  if ( v40 )
                    sub_15D7BC0(v321, v125);
                  v227 = (char *)v379;
                  v244 = (unsigned int)v380;
                  v125 = v247;
                }
                v248 = &v227[8 * v244];
                v328 = v352;
                goto LABEL_379;
              }
              goto LABEL_188;
            }
            v129 = v217;
            if ( v217 )
              goto LABEL_413;
            v227 = (char *)v379;
            v328 = 0;
            v248 = (char *)v379 + 8 * (unsigned int)v380;
LABEL_379:
            if ( v227 < v248 )
            {
              v249 = v358;
              do
              {
                while ( 1 )
                {
                  v250 = *(_QWORD *)v227;
                  if ( *(_QWORD *)v227 )
                  {
                    v40 = (*(_DWORD *)(v250 + 8))-- == 1;
                    if ( v40 )
                      break;
                  }
                  v227 += 8;
                  if ( v227 >= v248 )
                    goto LABEL_385;
                }
                sub_15D7BC0(v378, v250);
                v227 += 8;
              }
              while ( v227 < v248 );
LABEL_385:
              v358 = v249;
              v227 = (char *)v379;
            }
LABEL_386:
            if ( v227 != v327 && v227 )
              sub_186B220(v227);
            v251 = *v358;
            sub_182CBA0(*v358, v344);
            sub_182CBA0(v251, v373);
            if ( !v328 )
            {
LABEL_390:
              if ( v125 )
                goto LABEL_237;
              goto LABEL_239;
            }
            v124 = v125;
LABEL_454:
            v253 = v362;
            v254 = &v363[v353 / 8];
            if ( v124 )
            {
              v125 = v124;
LABEL_394:
              ++*(_DWORD *)(v125 + 8);
              v124 = v125;
            }
            v255 = *v254;
            if ( *v254 )
            {
              v40 = (*(_DWORD *)(v255 + 8))-- == 1;
              if ( v40 )
                sub_15D7BC0(v253, v255);
            }
            v353 += 8LL;
            v256 = v353;
            *v254 = v124;
            if ( v324 == v256 )
            {
              v125 = v124;
              goto LABEL_390;
            }
            v122 = v363;
            goto LABEL_175;
          }
        }
        else
        {
          v314 = qword_1C7F2C0;
          v358 = &qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v349);
          v315 = v314;
          v147 = (__int64)v133;
          sub_182CBA0(v315, v377);
        }
        v40 = v133 == (unsigned int *)v147;
        v133 = (unsigned int *)v147;
        v329 |= !v40;
      }
LABEL_316:
      v212 = v384;
      if ( (unsigned int)v384 >= HIDWORD(v384) )
      {
        v236 = (unsigned int)(2 * HIDWORD(v384));
        v237 = (char *)sub_186B270(8 * v236);
        v212 = v384;
        v238 = (char *)v383;
        v213 = v237;
        if ( (_DWORD)v384 )
        {
          if ( (unsigned int)(v384 - 1) <= 2 || v237 == (char *)v383 + 8 )
          {
            v292 = v358;
            v293 = 0;
            v294 = 8LL * (unsigned int)v384;
            do
            {
              *(_QWORD *)&v213[v293] = *(_QWORD *)&v238[v293];
              v293 += 8LL;
            }
            while ( v294 != v293 );
            v358 = v292;
          }
          else
          {
            v239 = v358;
            v240 = 0;
            v241 = 16LL * ((unsigned int)v384 >> 1);
            do
            {
              *(__m128i *)&v213[v240] = _mm_loadu_si128((const __m128i *)&v238[v240]);
              v240 += 16LL;
            }
            while ( v241 != v240 );
            v358 = v239;
            if ( (v212 & 1) != 0 )
              *(_QWORD *)&v213[8 * (v212 & 0xFFFFFFFE)] = *(_QWORD *)&v238[8 * (v212 & 0xFFFFFFFE)];
          }
        }
        if ( v238 != v338 && v238 )
        {
          sub_186B220(v238);
          v212 = v384;
        }
        v383 = v213;
        HIDWORD(v384) = v236;
      }
      else
      {
        v213 = (char *)v383;
      }
      v214 = v212;
      v357 += 8;
      v215 = v212 + 1;
      v216 = v340;
      *(_QWORD *)&v213[8 * v214] = v133;
      LODWORD(v384) = v215;
      if ( v357 == v216 )
      {
        if ( v329 )
        {
          v288 = sub_15E1AF0(v369[0]);
          v217 = v288;
          if ( v288 )
            ++*(_DWORD *)(v288 + 8);
          v40 = (*(_DWORD *)(v129 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v320, v129);
          v213 = (char *)v383;
          v215 = (unsigned int)v384;
        }
        else
        {
          v217 = v129;
        }
        v218 = &v213[8 * v215];
        v330 = v352;
        goto LABEL_322;
      }
    }
  }
  BYTE4(v386[0]) &= 0xFCu;
  BYTE4(v387) &= 0xFCu;
  LODWORD(v386[0]) = 0;
  v279 = qword_1C7F2C0;
  v386[1] = nullptr;
  LODWORD(v387) = 1;
  v388 = 0;
  v358 = &qword_1C7F2C0;
  if ( (v373[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v348, v373);
  else
    LODWORD(v386[0]) = v373[0];
  sub_182CBA0(v279, &v387);
  LODWORD(v387) = 1;
  BYTE4(v387) &= ~1u;
  v280 = *v358;
  v281 = *v358;
  if ( (BYTE4(v386[0]) & 1) == 0 && LODWORD(v386[0]) == 1 )
  {
    sub_182CBA0(v281, v348);
    sub_182CBA0(v280, &v387);
    v312 = v371;
    if ( !v371 )
    {
      sub_16669E0(v341);
      v312 = v371;
    }
    v313 = sub_166A700(v312, (_DWORD)v344, 1, v309, v310, v311);
    v124 = v313;
    if ( v313 )
      ++*(_DWORD *)(v313 + 8);
    v40 = (*(_DWORD *)(v125 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v321, v125);
    v285 = v344;
    v286 = *v358;
    goto LABEL_453;
  }
  sub_182CBA0(v281, v348);
  sub_182CBA0(v280, &v387);
  v160 = v344;
  v161 = *v358;
LABEL_236:
  sub_182CBA0(v161, v160);
  sub_182CBA0(v161, v373);
LABEL_237:
  v40 = (*(_DWORD *)(v125 + 8))-- == 1;
  if ( v40 )
    sub_15D7BC0(v321, v125);
LABEL_239:
  v162 = v403;
  if ( v403 )
  {
    v163 = *((unsigned int *)v403 - 1);
    if ( (_DWORD)v163 )
    {
      v164 = &v403[v163];
      v165 = v363;
      v166 = *v403;
      if ( *v403 )
        ++*(_DWORD *)(*v403 + 8LL);
      if ( v165 )
        goto LABEL_295;
      v167 = sub_186B270(0x18u);
      v165 = (__int64 *)(v167 + 8);
      *(_QWORD *)v167 = 2;
      ++v162;
      v363 = (__int64 *)(v167 + 8);
      *(_QWORD *)(v167 + 8) = v166;
      for ( *(_DWORD *)(v167 + 4) = 1; v162 != v164; *((_DWORD *)v165 - 1) = v194 )
      {
        v166 = *v162;
        if ( *v162 )
        {
          ++*(_DWORD *)(*v162 + 8LL);
          v192 = *((_DWORD *)v165 - 1);
          if ( v192 == *((_DWORD *)v165 - 2) )
          {
LABEL_300:
            v196 = (3 * v192 + 1) >> 1;
            v197 = 8 * v196 + 8;
            if ( 8 * v192 + 8 >= (unsigned int)v197 || v192 >= v196 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v386);
              sub_233E40((__int64)v386);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v198 = (unsigned int *)sub_186B300(v165 - 1, v197);
            v199 = v198[1];
            v165 = (__int64 *)(v198 + 2);
            *v198 = v196;
            v363 = v165;
            LODWORD(v198) = v199;
            v195 = &v165[v199];
            v194 = (_DWORD)v198 + 1;
            goto LABEL_297;
          }
        }
        else
        {
LABEL_295:
          v192 = *((_DWORD *)v165 - 1);
          if ( v192 == *((_DWORD *)v165 - 2) )
            goto LABEL_300;
        }
        v193 = v192;
        v194 = v192 + 1;
        v195 = &v165[v193];
LABEL_297:
        ++v162;
        *v195 = v166;
      }
    }
  }
  sub_15EEF60(v339);
  v168 = v365;
  v169 = v365;
  if ( v365 )
  {
    v170 = (unsigned __int64)&v365[*((unsigned int *)v365 - 1)];
    if ( (unsigned __int64)v365 >= v170 )
      goto LABEL_253;
    do
    {
      while ( 1 )
      {
        v171 = *v169;
        if ( *v169 )
        {
          v40 = (*(_DWORD *)(v171 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v169 >= v170 )
          goto LABEL_252;
      }
      sub_15D7BC0(v364, v171);
      ++v169;
    }
    while ( (unsigned __int64)v169 < v170 );
LABEL_252:
    v168 = v365;
    if ( v365 )
LABEL_253:
      *(v168 - 1) = 0;
  }
  v172 = *(__int64 **)(*(_QWORD *)v354 + 120LL);
  if ( v172 )
  {
    v173 = *((unsigned int *)v172 - 1);
    if ( (_DWORD)v173 )
    {
      v174 = &v172[v173];
      v175 = v168;
      v176 = *v172;
      if ( *v172 )
        ++*(_DWORD *)(*v172 + 8);
      if ( v168 )
        goto LABEL_303;
      v177 = sub_186B270(0x18u);
      v175 = (_DWORD *)(v177 + 8);
      *(_QWORD *)v177 = 2;
      ++v172;
      v365 = (_QWORD *)(v177 + 8);
      *(_QWORD *)(v177 + 8) = v176;
      for ( *(_DWORD *)(v177 + 4) = 1; v172 != v174; *(v175 - 1) = v202 )
      {
        v176 = *v172;
        if ( *v172 )
        {
          ++*(_DWORD *)(*v172 + 8);
          v200 = *(v175 - 1);
          if ( v200 == *(v175 - 2) )
          {
LABEL_308:
            v204 = (3 * v200 + 1) >> 1;
            v205 = 8 * v204 + 8;
            if ( 8 * v200 + 8 >= (unsigned int)v205 || v200 >= v204 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v386, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v386);
              sub_233E40((__int64)v386);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v206 = (unsigned int *)sub_186B300(v175 - 2, v205);
            v207 = v206[1];
            v175 = v206 + 2;
            *v206 = v204;
            v365 = v175;
            LODWORD(v206) = v207;
            v203 = &v175[2 * v207];
            v202 = (_DWORD)v206 + 1;
            goto LABEL_305;
          }
        }
        else
        {
LABEL_303:
          v200 = *(v175 - 1);
          if ( v200 == *(v175 - 2) )
            goto LABEL_308;
        }
        v201 = v200;
        v202 = v200 + 1;
        v203 = &v175[2 * v201];
LABEL_305:
        ++v172;
        *v203 = v176;
      }
    }
  }
  v178 = v362;
  if ( v363 )
    v179 = *((unsigned int *)v363 - 1);
  else
    v179 = 0;
  v180 = sub_15EC1C0(v362, v179);
  if ( v180 )
    ++*(_DWORD *)(v180 + 8);
  v181 = v366;
  v366 = v180;
  if ( v181 )
  {
    v40 = (*(_DWORD *)(v181 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v178, v181);
  }
  v182 = *(_QWORD *)(*(_QWORD *)v354 + 40LL);
  LOBYTE(v358) = *(_BYTE *)(*(_QWORD *)v354 + 136LL);
  sub_3D9A20(v182, v343, &v366, (char *)v359, 1u, 1, (unsigned __int8)v358 ^ 1);
  v64 = v317;
  v65 = v318;
  if ( v365 && *((_DWORD *)v365 - 1) )
  {
    v352 = 0;
    if ( v325 )
    {
      v183 = *(_DWORD *)(v325 + 8);
      goto LABEL_271;
    }
  }
  else
  {
    v208 = v335;
    sub_15EEF60(v366);
    v209 = v325;
    *(__m128 *)v386 = _mm_loadh_ps((const double *)&v323);
    if ( v325 )
    {
      ++*(_DWORD *)(v325 + 8);
      v352 = sub_44AF30(*(__int64 *)v354, v208, v386);
      LODWORD(v358) = *(_DWORD *)(v209 + 8);
      v40 = (_DWORD)v358 == 1;
      v183 = (_DWORD)v358 - 1;
      *(_DWORD *)(v209 + 8) = (_DWORD)v358 - 1;
      if ( v40 )
      {
        v210 = v325;
        sub_15D7BC0(v323, v325);
        v183 = *(_DWORD *)(v210 + 8);
      }
LABEL_271:
      v64 = v325;
      v184 = v183 - 1;
      *(_DWORD *)(v325 + 8) = v184;
      if ( !v184 )
        sub_15D7BC0(v323, v64);
    }
    else
    {
      v352 = sub_44AF30(*(__int64 *)v354, v335, v386);
    }
  }
LABEL_273:
  v185 = v366;
  if ( v366 )
  {
    v186 = v367;
    v40 = (*(_DWORD *)(v366 + 8))-- == 1;
    if ( v40 )
      sub_15D7BC0(v186, v185);
  }
  v187 = v365;
  if ( v365 )
  {
    if ( v365 >= &v365[*((unsigned int *)v365 - 1)] )
      goto LABEL_284;
    v188 = (unsigned __int64)&v365[*((unsigned int *)v365 - 1)];
    do
    {
      while ( 1 )
      {
        v185 = *v187;
        if ( *v187 )
        {
          v40 = (*(_DWORD *)(v185 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v187 >= v188 )
          goto LABEL_283;
      }
      sub_15D7BC0(v364, v185);
      ++v187;
    }
    while ( (unsigned __int64)v187 < v188 );
LABEL_283:
    v187 = v365;
    if ( v365 )
LABEL_284:
      sub_186B220(v187 - 1);
  }
  v189 = (void (__fastcall ***)(void *, __int64, __int64, __int64, __int64, __int64, __int64))v359;
  if ( v359 )
  {
    v40 = (*((_DWORD *)v359 + 4))-- == 1;
    if ( v40 )
    {
      (**v189)(v189, v185, v64, v65, v67, v66, v319);
      sub_186B220(v189);
    }
  }
  v76 = v363;
  if ( v363 )
  {
    if ( v363 >= &v363[*((unsigned int *)v363 - 1)] )
      goto LABEL_80;
    v190 = (unsigned __int64)&v363[*((unsigned int *)v363 - 1)];
    do
    {
      v191 = *v76;
      if ( *v76 )
      {
        v40 = (*(_DWORD *)(v191 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(v362, v191);
      }
      ++v76;
    }
    while ( (unsigned __int64)v76 < v190 );
    v76 = v363;
    if ( v363 )
LABEL_80:
      sub_186B220(v76 - 1);
  }
  v77 = v339;
  if ( v339 )
  {
    LODWORD(v358) = *(_DWORD *)(v339 + 8);
    v40 = (_DWORD)v358 == 1;
    *(_DWORD *)(v339 + 8) = (_DWORD)v358 - 1;
    if ( v40 )
      sub_15D7BC0(v319, v77);
  }
LABEL_84:
  v78 = v403;
  if ( v403 )
  {
    if ( v403 >= &v403[*((unsigned int *)v403 - 1)] )
      goto LABEL_92;
    v79 = (unsigned __int64)&v403[*((unsigned int *)v403 - 1)];
    do
    {
      while ( 1 )
      {
        v80 = *v78;
        if ( *v78 )
        {
          v81 = v402;
          v40 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v78 >= v79 )
          goto LABEL_91;
      }
      sub_15D7BC0(v81, v80);
      ++v78;
    }
    while ( (unsigned __int64)v78 < v79 );
LABEL_91:
    v78 = v403;
    if ( v403 )
LABEL_92:
      sub_186B220(v78 - 1);
  }
  v82 = v401;
  if ( v401 )
  {
    if ( v401 >= &v401[*((unsigned int *)v401 - 1)] )
      goto LABEL_101;
    v83 = (unsigned __int64)&v401[*((unsigned int *)v401 - 1)];
    do
    {
      while ( 1 )
      {
        v84 = *v82;
        if ( *v82 )
        {
          v85 = v400;
          v40 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v82 >= v83 )
          goto LABEL_100;
      }
      sub_15D7BC0(v85, v84);
      ++v82;
    }
    while ( (unsigned __int64)v82 < v83 );
LABEL_100:
    v82 = v401;
    if ( v401 )
LABEL_101:
      sub_186B220(v82 - 1);
  }
  v86 = v399;
  if ( v399 )
  {
    if ( v399 >= &v399[*((unsigned int *)v399 - 1)] )
      goto LABEL_110;
    v87 = (unsigned __int64)&v399[*((unsigned int *)v399 - 1)];
    do
    {
      while ( 1 )
      {
        v88 = *v86;
        if ( *v86 )
        {
          v89 = v398;
          v40 = (*(_DWORD *)(v88 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v86 >= v87 )
          goto LABEL_109;
      }
      sub_15D7BC0(v89, v88);
      ++v86;
    }
    while ( (unsigned __int64)v86 < v87 );
LABEL_109:
    v86 = v399;
    if ( v399 )
LABEL_110:
      sub_186B220(v86 - 1);
  }
  v90 = ptr;
  v394 = &off_1C4E928;
  if ( ptr )
  {
    (**(void (__fastcall ***)(void *))ptr)(ptr);
    sub_186B220(v90);
  }
  if ( v396 )
    sub_186B220((void *)(v396 - 8));
  v91 = v395;
  if ( v395 )
  {
    v92 = *((unsigned int *)v395 - 1);
    if ( (_DWORD)v92 )
    {
      v93 = &v395[v92];
      do
      {
        v94 = *v91;
        if ( *v91 )
        {
          v95 = *(unsigned int *)(v94 - 4);
          if ( (_DWORD)v95 )
          {
            v96 = v94 + 32 * v95;
            do
            {
              v358 = (void **)qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v94);
              v97 = v94 + 16;
              v94 += 32;
              sub_182CBA0(v358, v97);
            }
            while ( v94 != v96 );
            v94 = *v91;
          }
          sub_186B220((void *)(v94 - 8));
        }
        ++v91;
      }
      while ( v91 != v93 );
      v91 = v395;
    }
    sub_186B220(v91 - 1);
  }
  if ( v393 )
    sub_186B220((void *)(v393 - 8));
  v98 = v392;
  if ( v392 )
  {
    if ( v392 >= &v392[*((unsigned int *)v392 - 1)] )
      goto LABEL_137;
    v99 = (unsigned __int64)&v392[*((unsigned int *)v392 - 1)];
    do
    {
      while ( 1 )
      {
        v100 = *v98;
        if ( *v98 )
        {
          v101 = v391;
          v40 = (*(_DWORD *)(v100 + 8))-- == 1;
          if ( v40 )
            break;
        }
        if ( (unsigned __int64)++v98 >= v99 )
          goto LABEL_136;
      }
      sub_15D7BC0(v101, v100);
      ++v98;
    }
    while ( (unsigned __int64)v98 < v99 );
LABEL_136:
    v98 = v392;
    if ( v392 )
LABEL_137:
      sub_186B220(v98 - 1);
  }
  v102 = v390;
  if ( v390 )
  {
    v103 = *((unsigned int *)v390 - 1);
    if ( (_DWORD)v103 )
    {
      v104 = &v390[v103];
      do
      {
        v105 = *v102;
        if ( *v102 )
        {
          v106 = *(unsigned int *)(v105 - 4);
          if ( (_DWORD)v106 )
          {
            v107 = v105 + 32 * v106;
            do
            {
              v358 = (void **)qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v105);
              v108 = v105 + 16;
              v105 += 32;
              sub_182CBA0(v358, v108);
            }
            while ( v107 != v105 );
            v105 = *v102;
          }
          sub_186B220((void *)(v105 - 8));
        }
        ++v102;
      }
      while ( v102 != v104 );
      v102 = v390;
    }
    sub_186B220(v102 - 1);
  }
  return v352;
}

