unsigned __int64 __fastcall sub_4B00(
        __int64 a1,
        __int16 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rbx
  bool v13; // al
  __int16 v14; // ax
  unsigned int v15; // edx
  int v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  int v20; // eax
  unsigned int v21; // esi
  int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 *v27; // r14
  __m128i si128; // xmm1
  char v29; // al
  char v30; // dl
  unsigned __int16 v31; // ax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r12
  int v35; // eax
  __int64 v36; // r15
  __int32 v37; // eax
  __int64 v38; // rsi
  bool v39; // bp
  unsigned int v40; // r14d
  __int16 v41; // si
  int v42; // eax
  unsigned int v43; // r13d
  unsigned __int64 v44; // rbp
  unsigned int v45; // eax
  unsigned __int64 v46; // rbx
  __int64 v47; // rdi
  int v48; // r15d
  int v49; // edx
  int v50; // r12d
  __int64 v51; // rax
  int v52; // esi
  unsigned __int64 *v53; // r15
  char *v54; // rcx
  unsigned __int8 v55; // r10
  int v56; // r8d
  char v57; // al
  unsigned int v58; // r10d
  unsigned int v59; // edx
  unsigned int v60; // edi
  char *v61; // r9
  unsigned int v62; // esi
  __int64 v63; // rax
  char *v64; // r8
  __int64 v65; // r10
  char *v66; // rdx
  char v67; // r8
  unsigned __int8 v68; // r8
  unsigned __int64 v69; // r10
  unsigned int v70; // r11d
  __int64 v71; // rbx
  unsigned int v72; // eax
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  char *v75; // rdx
  char *v76; // rsi
  int v77; // eax
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  char v82; // al
  char v83; // di
  char v84; // di
  const char *v85; // rcx
  char v86; // si
  char *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __m128 v93; // xmm4
  __m128 v94; // xmm5
  __int64 v95; // rbp
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __m128 v101; // xmm4
  __m128 v102; // xmm5
  unsigned __int64 v103; // rdi
  unsigned int v104; // ecx
  __int64 v105; // r9
  char v106; // di
  unsigned __int16 v107; // ax
  __int64 v108; // rbx
  unsigned int v109; // eax
  __int64 v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // rax
  char v113; // al
  __int64 v114; // rax
  __int64 segm_base; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  char v118; // r12
  unsigned __int8 v119; // r12
  unsigned __int64 v120; // r15
  unsigned int v121; // r14d
  char *v122; // rbx
  unsigned __int64 v123; // rbp
  int v124; // r13d
  __int16 v125; // ax
  unsigned int dword; // eax
  __int64 v128; // rbp
  unsigned int v129; // eax
  unsigned __int16 v130; // ax
  unsigned __int16 v131; // ax
  unsigned int v132; // eax
  char v133; // al
  const char *v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __m128 v138; // xmm4
  __m128 v139; // xmm5
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __m128 v143; // xmm4
  __m128 v144; // xmm5
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __m128 v148; // xmm4
  __m128 v149; // xmm5
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __m128 v154; // xmm4
  __m128 v155; // xmm5
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __m128 v159; // xmm4
  __m128 v160; // xmm5
  unsigned int v161; // eax
  __m128 v162; // xmm4
  __m128 v163; // xmm5
  char *v164; // rax
  char v165; // di
  char v166; // di
  char v167; // di
  char v168; // di
  char v169; // di
  char v170; // si
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __m128 v175; // xmm4
  __m128 v176; // xmm5
  unsigned int v177; // ebp
  const char *v178; // r14
  __int64 v179; // rax
  __int64 v180; // rbx
  __int64 v181; // rax
  __int64 v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rsi
  __int64 v186; // rbx
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rax
  __int64 v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rax
  __int64 v203; // rsi
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rbx
  unsigned int v209; // ebp
  __int64 v210; // rax
  int v211; // ebp
  char *v212; // r9
  unsigned int v213; // r13d
  int v214; // ebx
  unsigned int v215; // r8d
  int v216; // eax
  char v217; // di
  char v218; // di
  char *v219; // r9
  int v220; // ebx
  unsigned int v221; // r13d
  unsigned int v222; // ebx
  __int64 v223; // rbp
  const char *v224; // rdx
  const char *v225; // rdx
  __int64 v226; // rbp
  __int64 v227; // rsi
  int v228; // r14d
  char *v229; // r9
  _QWORD *segm_by_sel; // rax
  const char *v231; // rsi
  unsigned __int32 v232; // [rsp+0h] [rbp-AE8h]
  const char *v233; // [rsp+0h] [rbp-AE8h]
  char v234; // [rsp+0h] [rbp-AE8h]
  char v235; // [rsp+0h] [rbp-AE8h]
  char v236; // [rsp+0h] [rbp-AE8h]
  char v237; // [rsp+0h] [rbp-AE8h]
  char v238; // [rsp+0h] [rbp-AE8h]
  char v239; // [rsp+0h] [rbp-AE8h]
  char v240; // [rsp+0h] [rbp-AE8h]
  __int64 v241; // [rsp+0h] [rbp-AE8h]
  __int64 v242; // [rsp+0h] [rbp-AE8h]
  __int64 v243; // [rsp+0h] [rbp-AE8h]
  __int64 v244; // [rsp+8h] [rbp-AE0h]
  __int64 v245; // [rsp+8h] [rbp-AE0h]
  __int64 v246; // [rsp+8h] [rbp-AE0h]
  __int64 v247; // [rsp+8h] [rbp-AE0h]
  unsigned int *v248; // [rsp+10h] [rbp-AD8h]
  int v249; // [rsp+10h] [rbp-AD8h]
  __int64 v250; // [rsp+10h] [rbp-AD8h]
  __int64 v251; // [rsp+10h] [rbp-AD8h]
  __int64 v252; // [rsp+10h] [rbp-AD8h]
  __int16 *v253; // [rsp+18h] [rbp-AD0h]
  __int64 v254; // [rsp+18h] [rbp-AD0h]
  __int64 v255; // [rsp+18h] [rbp-AD0h]
  __int64 v256; // [rsp+18h] [rbp-AD0h]
  unsigned int v257; // [rsp+24h] [rbp-AC4h]
  char v258; // [rsp+24h] [rbp-AC4h]
  __int64 v259; // [rsp+28h] [rbp-AC0h]
  __int64 v260; // [rsp+28h] [rbp-AC0h]
  unsigned __int64 *v261; // [rsp+28h] [rbp-AC0h]
  unsigned int v262; // [rsp+28h] [rbp-AC0h]
  char *v263; // [rsp+28h] [rbp-AC0h]
  char *v264; // [rsp+28h] [rbp-AC0h]
  __int64 v265; // [rsp+30h] [rbp-AB8h]
  int v266; // [rsp+30h] [rbp-AB8h]
  char *v267; // [rsp+30h] [rbp-AB8h]
  __int64 entry; // [rsp+38h] [rbp-AB0h]
  int v269; // [rsp+38h] [rbp-AB0h]
  __int64 v270; // [rsp+40h] [rbp-AA8h]
  __int64 *v271; // [rsp+40h] [rbp-AA8h]
  __int64 v272; // [rsp+48h] [rbp-AA0h]
  unsigned __int64 v273; // [rsp+50h] [rbp-A98h]
  unsigned int v274; // [rsp+60h] [rbp-A88h]
  int v275; // [rsp+64h] [rbp-A84h]
  unsigned int v276; // [rsp+64h] [rbp-A84h]
  int v277; // [rsp+68h] [rbp-A80h]
  unsigned int v278; // [rsp+70h] [rbp-A78h]
  __int64 v279; // [rsp+70h] [rbp-A78h]
  int v280; // [rsp+78h] [rbp-A70h]
  __int64 v281; // [rsp+80h] [rbp-A68h]
  unsigned int v282; // [rsp+88h] [rbp-A60h]
  unsigned int v283; // [rsp+90h] [rbp-A58h]
  __int64 ph; // [rsp+98h] [rbp-A50h]
  char v285; // [rsp+B5h] [rbp-A33h] BYREF
  char v286; // [rsp+B6h] [rbp-A32h] BYREF
  unsigned __int8 v287; // [rsp+B7h] [rbp-A31h] BYREF
  __int16 v288; // [rsp+B8h] [rbp-A30h] BYREF
  __int16 v289; // [rsp+BAh] [rbp-A2Eh] BYREF
  unsigned int v290; // [rsp+BCh] [rbp-A2Ch] BYREF
  unsigned int v291; // [rsp+C0h] [rbp-A28h] BYREF
  unsigned int v292; // [rsp+C4h] [rbp-A24h] BYREF
  __int64 v293; // [rsp+C8h] [rbp-A20h] BYREF
  __int64 v294; // [rsp+D0h] [rbp-A18h] BYREF
  __int64 v295; // [rsp+D8h] [rbp-A10h] BYREF
  __int64 v296; // [rsp+E0h] [rbp-A08h] BYREF
  __m128i v297; // [rsp+E8h] [rbp-A00h]
  unsigned __int64 v298; // [rsp+F8h] [rbp-9F0h]
  __int64 v299; // [rsp+100h] [rbp-9E8h]
  _OWORD v300[2]; // [rsp+110h] [rbp-9D8h] BYREF
  __int64 v301; // [rsp+130h] [rbp-9B8h]
  __int64 v302; // [rsp+138h] [rbp-9B0h]
  __int64 v303; // [rsp+140h] [rbp-9A8h]
  __int128 v304; // [rsp+148h] [rbp-9A0h]
  __int128 v305; // [rsp+158h] [rbp-990h]
  __int128 v306; // [rsp+168h] [rbp-980h]
  __int128 v307; // [rsp+178h] [rbp-970h]
  __int128 v308; // [rsp+188h] [rbp-960h]
  __int128 v309; // [rsp+198h] [rbp-950h]
  __int128 v310; // [rsp+1A8h] [rbp-940h]
  __int128 v311; // [rsp+1B8h] [rbp-930h]
  unsigned __int64 v312; // [rsp+1C8h] [rbp-920h]
  int v313; // [rsp+1D0h] [rbp-918h] BYREF
  unsigned int v314; // [rsp+1D4h] [rbp-914h]
  __int16 v315; // [rsp+1DAh] [rbp-90Eh]
  unsigned int v316; // [rsp+1DCh] [rbp-90Ch]
  unsigned int v317; // [rsp+1E0h] [rbp-908h]
  unsigned int v318; // [rsp+1E4h] [rbp-904h]
  unsigned int v319; // [rsp+1E8h] [rbp-900h]
  unsigned int v320; // [rsp+1ECh] [rbp-8FCh]
  unsigned int v321; // [rsp+1F0h] [rbp-8F8h]
  unsigned int v322; // [rsp+1F4h] [rbp-8F4h]
  unsigned int v323; // [rsp+1F8h] [rbp-8F0h]
  int v324; // [rsp+1FCh] [rbp-8ECh]
  int v325; // [rsp+210h] [rbp-8D8h]
  unsigned int v326; // [rsp+214h] [rbp-8D4h]
  int v327; // [rsp+218h] [rbp-8D0h]
  int v328; // [rsp+21Ch] [rbp-8CCh]
  int v329; // [rsp+220h] [rbp-8C8h]
  unsigned int v330; // [rsp+224h] [rbp-8C4h]
  int v331; // [rsp+228h] [rbp-8C0h]
  int v332; // [rsp+22Ch] [rbp-8BCh]
  int v333; // [rsp+238h] [rbp-8B0h]
  int v334; // [rsp+23Ch] [rbp-8ACh]
  int v335; // [rsp+250h] [rbp-898h]
  unsigned int v336; // [rsp+258h] [rbp-890h]
  int v337; // [rsp+25Ch] [rbp-88Ch]
  unsigned int v338; // [rsp+264h] [rbp-884h]
  unsigned int v339; // [rsp+278h] [rbp-870h]
  __int16 v340; // [rsp+292h] [rbp-856h]
  __int32 v341; // [rsp+298h] [rbp-850h] BYREF
  char v342; // [rsp+29Ch] [rbp-84Ch]
  _BYTE v343[1023]; // [rsp+2A0h] [rbp-848h] BYREF
  char v344; // [rsp+69Fh] [rbp-449h] BYREF
  char v345[1023]; // [rsp+6A0h] [rbp-448h] BYREF
  char v346; // [rsp+A9Fh] [rbp-49h] BYREF
  char v347; // [rsp+AA0h] [rbp-48h] BYREF
  unsigned __int64 v348; // [rsp+AA8h] [rbp-40h]

  v10 = a1;
  v348 = __readfsqword(0x28u);
  ph = get_ph();
  set_processor_type("metapc", 1);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  word_B2A0 = a2;
  qword_B288 = qlsize(a1);
  v11 = sub_25C0(a1, &v288, &v290);
  v12 = v11;
  v280 = v11;
  qlseek(a1, v11, 0);
  lread(a1, &v313, 196);
  v278 = v314;
  if ( v314 )
    sub_3930((__int64)"Unknown LX format level %u", v314);
  if ( HIWORD(v313) )
    sub_3930((__int64)"IDA supports Intel byte ordering only");
  if ( v335 != v328 && v328 )
    sub_33C0((__int64)"Object Iterated Pages Offset (%08X) is not equal to Data Pages Offset (%08X)", v328, v335);
  netnode_check(&qword_B298, 0, 0, 1);
  if ( (_WORD)v313 == 22604 )
  {
    set_selector(91, 0);
  }
  else
  {
    v13 = (v317 & 0x30000) == 0x20000 || (~v317 & 0x38000) == 0;
    if ( !v13 )
      v13 = (unsigned __int16)(v340 - 768) <= 0x200u;
    byte_B290 = v13;
  }
  v293 = -1;
  netnode_check(&v293, 0, 0, 1);
  v274 = v290;
  v270 = v293;
  sub_39E0(a1, v326, 0x18u, "Number of objects", v12, qword_B288);
  if ( v326 )
  {
    v257 = 0;
    v244 = a1;
    v275 = v280;
    while ( 1 )
    {
      qlseek(v244, (unsigned int)(v325 + v275), 0);
      lread(v244, &v296, 24);
      v14 = v297.m128i_i16[0];
      ++v257;
      if ( (v297.m128i_i8[0] & 8) != 0 && (word_B2A0 & 2) == 0 )
        goto LABEL_23;
      v15 = v296;
      if ( (_DWORD)v296 )
        break;
      sub_33C0((__int64)"Object %u has zero length, object length is set to 1", v257);
      LODWORD(v296) = 1;
LABEL_23:
      v275 += 24;
      if ( v257 >= v326 )
      {
        v10 = v244;
        goto LABEL_25;
      }
    }
    v301 = 0;
    v312 = 0xFFFFFFFF00000000LL;
    memset(v300, 0, sizeof(v300));
    a3 = NAN;
    v302 = 0;
    v303 = 0;
    v304 = -1;
    v305 = -1;
    v306 = -1;
    v307 = -1;
    v308 = -1;
    v309 = -1;
    v310 = -1;
    v311 = -1;
    if ( v297.m128i_i32[3] )
    {
      v341 = v297.m128i_i32[3];
      v342 = 0;
    }
    else
    {
      if ( (v297.m128i_i8[0] & 8) != 0 )
        qsnprintf(&v341, 8, "res%03u", v257);
      else
        qsnprintf(&v341, 8, "%cseg%02u", (unsigned int)((v297.m128i_i8[0] & 4) == 0) + 99, v257);
      v14 = v297.m128i_i16[0];
      v15 = v296;
    }
    v16 = HIDWORD(v296);
    BYTE3(v302) = (v14 & 0x2000) != 0;
    HIDWORD(v296) = find_free_chunk((-(unsigned __int8)byte_B290 & 0xC0000000) + HIDWORD(v296), v15, 4095);
    v17 = HIDWORD(v296);
    if ( v16 != HIDWORD(v296) && v16 )
    {
      sub_33C0(
        (__int64)"Object %u has virtual address %Xh which is already occupied, relocating it to %Xh",
        v257,
        v16,
        HIDWORD(v296));
      v17 = HIDWORD(v296);
    }
    *(_QWORD *)&v300[0] = v17;
    v18 = sub_36F0(v257, (__int64)v300, (__int64)&v341, (unsigned int)v296);
    if ( !v18 )
      return v348 - __readfsqword(0x28u);
    v295 = *(_QWORD *)&v300[0];
    netnode_supset(qword_B298, v257, &v295, 8, 65);
    v269 = 4;
    v33 = 4;
    if ( (_WORD)v313 == 22604 )
    {
      v269 = 8;
      v33 = 8;
    }
    v34 = *(_QWORD *)&v300[0];
    v35 = v269 * (v297.m128i_i32[1] - 1);
    v36 = (unsigned int)(v35 + v327 + v280);
    LODWORD(v253) = v35 + v327 + v280;
    sub_39E0(v244, v297.m128i_u32[2], v33, "Number of pages", v36, qword_B288);
    v37 = v297.m128i_i32[2];
    if ( v297.m128i_i32[2] )
    {
      v232 = 0;
      v38 = v36;
      v282 = v18;
      while ( 1 )
      {
        v39 = 0;
        if ( v326 == v257 )
          v39 = v37 - 1 == v232;
        qlseek(v244, v38, 0);
        if ( (_WORD)v313 == 22604 )
        {
          lread(v244, &v295, 8);
          v249 = v297.m128i_i32[1] + v232;
          v40 = v323;
          v42 = v295;
        }
        else
        {
          lread(v244, &v294, 4);
          v40 = v323;
          v249 = (unsigned __int16)v294 + BYTE2(v294);
          v41 = v323;
          HIWORD(v295) = BYTE3(v294) >> 6;
          v42 = v323 * (v249 - 1);
          LODWORD(v295) = v42;
          if ( v39 )
            v41 = v324;
          WORD2(v295) = v41;
          if ( !(_WORD)v294 && !BYTE2(v294) )
          {
            v249 = 0;
            HIWORD(v295) = 3;
          }
        }
        if ( (_WORD)v313 == 22604 )
          v42 <<= v324;
        v43 = v42 + v274 + v335;
        if ( v40 - 1 > 0xFFF || ((v40 - 1) & v40) != 0 )
          sub_3930((__int64)"Wrong page size %u", v40);
        v44 = v40 + v34;
        v45 = enable_flags(v34, v44, 0xFFFFFFFFLL);
        if ( v45 )
        {
          v231 = (const char *)qstrerror(v45);
          sub_3930((__int64)"%s", v231);
        }
        switch ( HIWORD(v295) )
        {
          case 0:
            if ( WORD2(v295) >= v40 )
            {
              file2base(v244, v43, v34, v40 + v34, 1);
              goto LABEL_77;
            }
            v46 = WORD2(v295) + v34;
            file2base(v244, v43, v34, v46, 1);
            goto LABEL_75;
          case 1:
            v48 = WORD2(v295);
            v260 = qalloc(v40);
            if ( !v260 )
              sub_3490((__int64)"for load page");
            v46 = v34;
            qlseek(v244, v43, 0);
            if ( !v48 )
              goto LABEL_93;
            v273 = v34;
            while ( 2 )
            {
              lread(v244, &v292, 2);
              lread(v244, &v294, 2);
              v49 = (unsigned __int16)v294;
              if ( !(_WORD)v294 )
              {
                if ( !(_WORD)v292 )
                  goto LABEL_92;
LABEL_107:
                v48 = v48 - 4 - v49;
                if ( v48 <= 0 )
                  goto LABEL_92;
                continue;
              }
              break;
            }
            if ( v40 < (unsigned __int16)v294 )
              goto LABEL_92;
            v50 = 0;
            lread(v244, v260, (unsigned __int16)v294);
            v49 = (unsigned __int16)v294;
            if ( !(_WORD)v292 )
              goto LABEL_107;
            while ( v46 < v44 )
            {
              show_auto(v46, 0);
              if ( !(unsigned int)mem2base(v260, v46, v46 + (unsigned __int16)v294, -1) )
                break;
              ++v50;
              v49 = (unsigned __int16)v294;
              v46 += (unsigned __int16)v294;
              if ( (unsigned __int16)v50 >= (unsigned __int16)v292 )
                goto LABEL_107;
            }
LABEL_92:
            v34 = v273;
LABEL_93:
            qfree(v260);
LABEL_75:
            if ( v46 < v44 )
            {
              do
              {
                v47 = v46++;
                put_byte(v47, 0);
              }
              while ( v44 != v46 );
            }
            goto LABEL_77;
          case 2:
            goto LABEL_77;
          case 3:
          case 4:
            v46 = v34;
            goto LABEL_75;
          case 5:
            show_auto(v34, 0);
            v265 = qalloc(WORD2(v295));
            v51 = qalloc(v40);
            v261 = (unsigned __int64 *)v51;
            if ( !v265 || !v51 )
              sub_3490((__int64)"for unpacking");
            qlseek(v244, v43, 0);
            lread(v244, v265, WORD2(v295));
            v52 = WORD2(v295);
            v53 = v261;
            if ( !WORD2(v295) )
              goto LABEL_80;
            v54 = (char *)v265;
            while ( 2 )
            {
              v55 = *v54;
              v56 = v52 - 1;
              v57 = *v54 & 3;
              switch ( v57 )
              {
                case 2:
                  if ( v52 == 1 )
                    goto LABEL_105;
                  v63 = (v55 >> 4) + 16 * (unsigned __int8)v54[1];
                  v64 = (char *)v53 - v63;
                  if ( (unsigned __int64 *)((char *)v53 - v63) < v261 )
                    goto LABEL_105;
                  v54 += 2;
                  v52 -= 2;
                  v60 = ((v55 >> 2) & 3) + 3;
                  if ( v60 > v40 )
                    v60 = v40;
                  goto LABEL_125;
                case 3:
                  if ( v56 <= 1 )
                    goto LABEL_105;
                  v68 = v54[1];
                  v61 = v54 + 3;
                  v62 = v52 - 3;
                  v59 = (v55 >> 2) & 0xF;
                  v60 = (v55 >> 6) + ((4 * v68) & 0x3C);
                  v63 = (v68 >> 4) + 16 * (unsigned int)(unsigned __int8)v54[2];
LABEL_113:
                  if ( v62 < v59 )
                    goto LABEL_105;
                  if ( v59 > v40 )
                    v59 = v40;
                  if ( v59 >= 8 )
                  {
                    v69 = (unsigned __int64)(v53 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                    *v53 = *(_QWORD *)v61;
                    *(unsigned __int64 *)((char *)v53 + v59 - 8) = *(_QWORD *)&v61[v59 - 8];
                    if ( ((v59 + (_DWORD)v53 - (_DWORD)v69) & 0xFFFFFFF8) >= 8 )
                    {
                      v70 = 0;
                      do
                      {
                        v71 = v70;
                        v70 += 8;
                        *(_QWORD *)(v69 + v71) = *(_QWORD *)(v61 - ((char *)v53 - v69) + v71);
                      }
                      while ( v70 < ((v59 + (_DWORD)v53 - (_DWORD)v69) & 0xFFFFFFF8) );
                      v63 = (unsigned int)v63;
                    }
                  }
                  else if ( (v59 & 4) != 0 )
                  {
                    *(_DWORD *)v53 = *(_DWORD *)v61;
                    *(_DWORD *)((char *)v53 + v59 - 4) = *(_DWORD *)&v61[v59 - 4];
                  }
                  else if ( v59 )
                  {
                    *(_BYTE *)v53 = *v61;
                    if ( (v59 & 2) != 0 )
                      *(_WORD *)((char *)v53 + v59 - 2) = *(_WORD *)&v61[v59 - 2];
                  }
                  v53 = (unsigned __int64 *)((char *)v53 + v59);
                  v64 = (char *)v53 - v63;
                  if ( (unsigned __int64 *)((char *)v53 - v63) < v261 )
                  {
LABEL_105:
                    qfree(v265);
                    qfree(v261);
                    sub_3930((__int64)"Cannot unpack page type ITERATE 2, the input file is bad");
                  }
                  v40 -= v59;
                  v52 = v62 - v59;
                  v54 = &v61[v59];
                  if ( v40 <= v60 )
                    v60 = v40;
                  if ( v60 )
                  {
LABEL_125:
                    v65 = v60;
                    v66 = v64;
                    do
                    {
                      v67 = *v66++;
                      v66[v63 - 1] = v67;
                    }
                    while ( v66 != (char *)v53 + v60 - v63 );
                  }
                  else
                  {
                    v65 = 0;
                  }
                  v53 = (unsigned __int64 *)((char *)v53 + v65);
                  v40 -= v60;
                  goto LABEL_128;
                case 1:
                  v59 = (v55 >> 2) & 3;
                  v60 = ((v55 >> 4) & 7) + 3;
                  if ( v52 == 1 )
                    goto LABEL_105;
                  v61 = v54 + 2;
                  v62 = v52 - 2;
                  v63 = (v55 >> 7) + 2 * (unsigned int)(unsigned __int8)v54[1];
                  goto LABEL_113;
              }
              LOBYTE(v58) = v55 >> 2;
              if ( (_BYTE)v58 )
              {
                v58 = (unsigned __int8)v58;
                if ( v56 < (unsigned int)(unsigned __int8)v58 )
                  goto LABEL_105;
                v87 = v54 + 1;
                if ( (unsigned __int8)v58 > v40 )
                  v58 = v40;
                if ( v58 >= 8 )
                {
                  v103 = (unsigned __int64)(v53 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                  *v53 = *(_QWORD *)(v54 + 1);
                  *(unsigned __int64 *)((char *)v53 + v58 - 8) = *(_QWORD *)&v87[v58 - 8];
                  if ( ((v58 + (_DWORD)v53 - (_DWORD)v103) & 0xFFFFFFF8) >= 8 )
                  {
                    v104 = 0;
                    do
                    {
                      v105 = v104;
                      v104 += 8;
                      *(_QWORD *)(v103 + v105) = *(_QWORD *)(v87 - ((char *)v53 - v103) + v105);
                    }
                    while ( v104 < ((v58 + (_DWORD)v53 - (_DWORD)v103) & 0xFFFFFFF8) );
                  }
                }
                else if ( (v58 & 4) != 0 )
                {
                  *(_DWORD *)v53 = *(_DWORD *)v87;
                  *(_DWORD *)((char *)v53 + v58 - 4) = *(_DWORD *)&v87[v58 - 4];
                }
                else
                {
                  *(_BYTE *)v53 = v54[1];
                  if ( (v58 & 2) != 0 )
                    *(_WORD *)((char *)v53 + v58 - 2) = *(_WORD *)&v87[v58 - 2];
                }
                v54 = &v87[v58];
                v40 -= v58;
                v53 = (unsigned __int64 *)((char *)v53 + v58);
                v52 = v56 - v58;
              }
              else
              {
                if ( v52 == 1 )
                  goto LABEL_105;
                v72 = (unsigned __int8)v54[1];
                if ( !v54[1] )
                {
LABEL_80:
                  memset(v53, 0, (int)v40);
                  goto LABEL_81;
                }
                if ( v52 == 2 )
                  goto LABEL_105;
                v52 -= 3;
                if ( v72 > v40 )
                  v72 = v40;
                v73 = v72;
                v74 = 0x101010101010101LL * (unsigned __int8)v54[2];
                if ( (unsigned int)v73 >= 8 )
                {
                  *v53 = v74;
                  *(unsigned __int64 *)((char *)v53 + v73 - 8) = v74;
                  memset64(
                    (void *)((unsigned __int64)(v53 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    v74,
                    ((unsigned int)v73 + (_DWORD)v53 - (((_DWORD)v53 + 8) & 0xFFFFFFF8)) >> 3);
                }
                else if ( (v73 & 4) != 0 )
                {
                  *(_DWORD *)v53 = v74;
                  *(_DWORD *)((char *)v53 + v73 - 4) = v74;
                }
                else if ( (_DWORD)v73 )
                {
                  *(_BYTE *)v53 = v54[2];
                  if ( (v73 & 2) != 0 )
                    *(_WORD *)((char *)v53 + v73 - 2) = v74;
                }
                v53 = (unsigned __int64 *)((char *)v53 + v73);
                v40 -= v73;
                v54 += 3;
              }
LABEL_128:
              if ( v52 > 0 )
              {
                if ( (int)v40 <= 0 )
                  goto LABEL_81;
                continue;
              }
              break;
            }
            if ( (int)v40 > 0 )
              goto LABEL_80;
LABEL_81:
            mem2base(v261, v34, v44, -1);
            qfree(v265);
            qfree(v261);
LABEL_77:
            v294 = v34 + 1;
            netnode_supset(v270, v249, &v294, 8, 65);
            ++v232;
            v37 = v297.m128i_i32[2];
            LODWORD(v253) = v269 + (_DWORD)v253;
            if ( v232 >= v297.m128i_i32[2] )
            {
              v18 = v282;
              goto LABEL_153;
            }
            v38 = (unsigned int)v253;
            v34 = v44;
            break;
          default:
            sub_3930((__int64)"IDA does not know what to do with pages type %Xh", HIWORD(v295));
        }
      }
    }
    v44 = v34;
LABEL_153:
    if ( *((_QWORD *)&v300[0] + 1) >= v44 )
    {
      if ( *((_QWORD *)&v300[0] + 1) - v44 >= 0x100001 )
        v18 = 33;
    }
    else
    {
      *((_QWORD *)&v300[0] + 1) = v44;
    }
    LOWORD(v302) = 515;
    if ( (v297.m128i_i8[0] & 4) != 0 )
    {
      if ( (v297.m128i_i8[0] & 8) == 0 )
      {
        v75 = "CODE";
LABEL_158:
        add_segm_ex(v300, &v341, v75, v18);
        if ( byte_B281 )
          goto LABEL_159;
        create_filename_cmt();
        v88 = sub_2BF0(v244, v336, 1);
        v95 = v88;
        if ( v88 )
        {
          v96 = str2user(v345, v88, 1024);
          sub_32F0((__int64)"Title '%s'", v96, v97, v98, v99, v100, (__m128)-1LL, a4, a5, a6, v101, v102, a9, a10, v232);
          qfree(v95);
        }
        switch ( v315 )
        {
          case 1:
            v134 = "OS/2";
            break;
          case 2:
            v134 = "MS Windows";
            break;
          case 3:
            v134 = "DOS 4.x";
            break;
          case 4:
            v134 = "MS Windows 386";
            break;
          case 5:
            v134 = "Borland Operating System Services (BOSS)";
            break;
          default:
            v134 = "unknown";
            break;
        }
        sub_32F0(
          (__int64)"Target operating system         %s",
          (__int64)v134,
          v89,
          v90,
          v91,
          v92,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v93,
          v94,
          a9,
          a10,
          v232);
        sub_32F0(
          (__int64)"Module Version                  %08Xh ( %5u. )",
          v316,
          v316,
          v135,
          v136,
          v137,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v138,
          v139,
          a9,
          a10,
          v234);
        sub_32F0(
          (__int64)"Program Entry Point   (CS:EIP)  %u:%08Xh",
          v319,
          v320,
          v140,
          v141,
          v142,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v143,
          v144,
          a9,
          a10,
          v235);
        sub_32F0(
          (__int64)"Initial Stack Pointer (SS:ESP)  %u:%08Xh",
          v321,
          v322,
          v145,
          v146,
          v147,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v148,
          v149,
          a9,
          a10,
          v236);
        sub_32F0(
          (__int64)"DS Object                       %u",
          v338,
          v150,
          v151,
          v152,
          v153,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v154,
          v155,
          a9,
          a10,
          v237);
        sub_32F0(
          (__int64)"Heap Size                       %08Xh ( %5u. )",
          v339,
          v339,
          v156,
          v157,
          v158,
          (__m128)-1LL,
          a4,
          a5,
          a6,
          v159,
          v160,
          a9,
          a10,
          v238);
        v161 = qsnprintf(v343, 1024, "Program Flags (%08Xh):", v317);
        v80 = v317;
        v81 = v161;
        v164 = &v343[v161];
        v76 = (char *)(v317 & 0x38000);
        if ( (_DWORD)v76 == 0x20000 )
        {
          if ( v164 >= v345 )
            goto LABEL_581;
          v76 = " Phys. Dev. Driver";
          if ( (_DWORD)v81 != 1023 )
          {
            do
            {
              v81 = (unsigned __int8)*v76++;
              *v164 = v81;
              if ( !(_BYTE)v81 )
                goto LABEL_416;
            }
            while ( ++v164 != &v344 );
          }
        }
        else if ( (v317 & 0x38000) > 0x20000 )
        {
          if ( (_DWORD)v76 != 163840 )
          {
            if ( (_DWORD)v76 != 229376 )
              goto LABEL_416;
            if ( v164 >= v345 )
              goto LABEL_581;
            v76 = " Prot. Virt. Dev. Driver";
            if ( (_DWORD)v81 == 1023 )
              goto LABEL_492;
            while ( 1 )
            {
              v81 = (unsigned __int8)*v76++;
              *v164 = v81;
              if ( !(_BYTE)v81 )
                goto LABEL_416;
              if ( ++v164 == &v344 )
                goto LABEL_492;
            }
          }
          if ( v164 >= v345 )
          {
LABEL_581:
            if ( under_debugger )
              goto LABEL_626;
            do
            {
LABEL_570:
              interr(520, v76, v81, v80, v78, v79);
LABEL_571:
              ;
            }
            while ( !under_debugger );
LABEL_626:
            BUG();
          }
          v76 = " Virt. Dev. Driver";
          if ( (_DWORD)v81 != 1023 )
          {
            do
            {
              v81 = (unsigned __int8)*v76++;
              *v164 = v81;
              if ( !(_BYTE)v81 )
                goto LABEL_416;
            }
            while ( ++v164 != &v344 );
          }
        }
        else
        {
          if ( (_DWORD)v76 )
          {
            if ( (_DWORD)v76 != 98304 )
              goto LABEL_416;
            if ( v164 >= v345 )
              goto LABEL_581;
            v76 = " Protected memory library";
            if ( (_DWORD)v81 == 1023 )
              goto LABEL_492;
            while ( 1 )
            {
              v81 = (unsigned __int8)*v76++;
              *v164 = v81;
              if ( !(_BYTE)v81 )
                break;
              if ( ++v164 == &v344 )
                goto LABEL_492;
            }
LABEL_416:
            if ( (v80 & 4) != 0 )
            {
              if ( v164 >= v345 )
              {
                if ( !under_debugger )
                  goto LABEL_570;
                goto LABEL_626;
              }
              v81 = (unsigned __int64)&v344;
              v76 = " Library init";
              if ( v164 == &v344 )
              {
LABEL_510:
                v344 = 0;
                if ( (v80 & 0x40000000) == 0 )
                {
                  v164 = &v344;
                  if ( (v80 & 0x10) == 0 )
                    goto LABEL_435;
LABEL_431:
                  if ( v164 != &v344 )
                  {
                    v76 = " No internal fixups";
                    while ( 1 )
                    {
                      v167 = *v76++;
                      *v164 = v167;
                      if ( !v167 )
                        goto LABEL_435;
                      if ( ++v164 == &v344 )
                        goto LABEL_516;
                    }
                  }
                  goto LABEL_516;
                }
LABEL_513:
                v344 = 0;
                if ( (v80 & 0x10) == 0 )
                {
                  if ( (v80 & 0x20) != 0 )
                  {
                    v164 = &v344;
                    goto LABEL_438;
                  }
LABEL_517:
                  v164 = &v344;
                  goto LABEL_442;
                }
LABEL_516:
                v344 = 0;
                if ( (v80 & 0x20) != 0 )
                  goto LABEL_493;
                goto LABEL_517;
              }
              while ( 1 )
              {
                v165 = *v76++;
                *v164 = v165;
                if ( !v165 )
                  break;
                if ( ++v164 == &v344 )
                  goto LABEL_510;
              }
            }
            if ( (v80 & 0x40000000) != 0 )
            {
              if ( v164 >= v345 )
              {
                if ( !under_debugger )
                  goto LABEL_570;
                goto LABEL_626;
              }
              v81 = (unsigned __int64)&v344;
              if ( v164 == &v344 )
                goto LABEL_513;
              v76 = " Library term";
              while ( 1 )
              {
                v166 = *v76++;
                *v164 = v166;
                if ( !v166 )
                  break;
                if ( ++v164 == &v344 )
                  goto LABEL_513;
              }
            }
            if ( (v80 & 0x10) == 0 )
            {
LABEL_435:
              if ( (v80 & 0x20) == 0 )
                goto LABEL_442;
              if ( v164 >= v345 )
              {
                if ( !under_debugger )
                  goto LABEL_570;
                goto LABEL_626;
              }
              v81 = (unsigned __int64)&v344;
LABEL_438:
              if ( v164 != &v344 )
              {
                v76 = " No external fixups";
                while ( 1 )
                {
                  v168 = *v76++;
                  *v164 = v168;
                  if ( !v168 )
                    break;
                  if ( ++v164 == &v344 )
                    goto LABEL_493;
                }
LABEL_442:
                v81 = v80 & 0x300;
                switch ( (_DWORD)v81 )
                {
                  case 0x200:
                    if ( v164 >= v345 )
                    {
                      if ( under_debugger )
                        goto LABEL_626;
                      goto LABEL_570;
                    }
                    v81 = (unsigned __int64)&v344;
                    if ( v164 == &v344 )
                      goto LABEL_496;
                    v76 = " Compatible with PM";
                    while ( 1 )
                    {
                      v218 = *v76++;
                      *v164 = v218;
                      if ( !v218 )
                        break;
                      if ( ++v164 == &v344 )
                        goto LABEL_496;
                    }
                    break;
                  case 0x300:
                    if ( v164 >= v345 )
                    {
                      if ( under_debugger )
                        goto LABEL_626;
                      goto LABEL_570;
                    }
                    v81 = (unsigned __int64)&v344;
                    if ( v164 == &v344 )
                      goto LABEL_496;
                    v76 = " Uses PM API";
                    while ( 1 )
                    {
                      v217 = *v76++;
                      *v164 = v217;
                      if ( !v217 )
                        break;
                      if ( ++v164 == &v344 )
                        goto LABEL_496;
                    }
                    break;
                  case 0x100:
                    if ( v164 >= v345 )
                    {
                      if ( !under_debugger )
                        goto LABEL_570;
                      goto LABEL_626;
                    }
                    v81 = (unsigned __int64)&v344;
                    if ( v164 != &v344 )
                    {
                      v76 = " Incompatible with PM";
                      do
                      {
                        v169 = *v76++;
                        *v164 = v169;
                        if ( !v169 )
                          goto LABEL_450;
                      }
                      while ( ++v164 != &v344 );
                    }
LABEL_496:
                    v344 = 0;
                    BYTE1(v80) &= 0x20u;
                    if ( BYTE1(v80) )
                    {
LABEL_497:
                      v344 = 0;
                      goto LABEL_457;
                    }
                    goto LABEL_457;
                  default:
                    break;
                }
LABEL_450:
                BYTE1(v80) &= 0x20u;
                if ( BYTE1(v80) )
                {
                  if ( v164 >= v345 )
                  {
                    if ( !under_debugger )
                      goto LABEL_570;
                    goto LABEL_626;
                  }
                  v81 = (unsigned __int64)&v344;
LABEL_453:
                  if ( v164 != &v344 )
                  {
                    v80 = (__int64)" Not loadable";
                    while ( 1 )
                    {
                      v170 = *(_BYTE *)v80++;
                      *v164 = v170;
                      if ( !v170 )
                        goto LABEL_457;
                      if ( ++v164 == &v344 )
                        goto LABEL_497;
                    }
                  }
                  goto LABEL_497;
                }
LABEL_457:
                sub_32F0(
                  (__int64)"%s",
                  (__int64)v343,
                  v81,
                  v80,
                  v78,
                  v79,
                  (__m128)-1LL,
                  a4,
                  a5,
                  a6,
                  v162,
                  v163,
                  a9,
                  a10,
                  v239);
                sub_32F0(
                  (__int64)"----------------------------------------------------------------------------",
                  (__int64)v343,
                  v171,
                  v172,
                  v173,
                  v174,
                  (__m128)-1LL,
                  a4,
                  a5,
                  a6,
                  v175,
                  v176,
                  a9,
                  a10,
                  v240);
LABEL_159:
                byte_B281 = 1;
                sub_2E50(HIDWORD(v296), 1u, (__int64)"Object Number     : %u.", v257);
                sub_2E50(HIDWORD(v296), 1u, (__int64)"Virtual Size      : %08Xh", v296);
                sub_2E50(HIDWORD(v296), 1u, (__int64)"Number of Pages   : %u (present in the file)", v297.m128i_i32[2]);
                v76 = (_BYTE *)(&stru_3F0 + 16);
                v77 = qsnprintf(v345, 1024, "Attributes (%08X):", v297.m128i_i32[0]);
                v80 = v297.m128i_u32[0];
                v81 = (unsigned __int64)&v345[v77];
                if ( (v297.m128i_i8[0] & 1) != 0 )
                {
                  v76 = &v347;
                  if ( v81 >= (unsigned __int64)&v347 )
                  {
                    if ( under_debugger )
                      goto LABEL_626;
                    goto LABEL_570;
                  }
                  v76 = " Readable";
                  if ( v77 == 1023 )
                  {
LABEL_281:
                    *(_BYTE *)v81 = 0;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v82 = *v76++;
                      *(_BYTE *)v81 = v82;
                      if ( !v82 )
                        break;
                      if ( (char *)++v81 == &v346 )
                        goto LABEL_281;
                    }
                  }
                }
                if ( (v80 & 2) != 0 )
                {
                  if ( v81 >= (unsigned __int64)&v347 )
                  {
                    if ( !under_debugger )
                      goto LABEL_570;
                    goto LABEL_626;
                  }
                  v76 = " Writable";
                  if ( (char *)v81 == &v346 )
                  {
LABEL_263:
                    v346 = 0;
                    if ( (v80 & 4) != 0 )
                      goto LABEL_264;
                    v81 = (unsigned __int64)&v346;
                    if ( (v80 & 8) == 0 )
                      goto LABEL_183;
                    goto LABEL_179;
                  }
                  while ( 1 )
                  {
                    v78 = (unsigned __int8)*v76++;
                    *(_BYTE *)v81 = v78;
                    if ( !(_BYTE)v78 )
                      break;
                    if ( (char *)++v81 == &v346 )
                      goto LABEL_263;
                  }
                }
                if ( (v80 & 4) != 0 )
                {
                  if ( v81 >= (unsigned __int64)&v347 )
                  {
                    if ( !under_debugger )
                      goto LABEL_570;
                    goto LABEL_626;
                  }
                  if ( (char *)v81 == &v346 )
                  {
LABEL_264:
                    v346 = 0;
                    if ( (v80 & 8) != 0 )
                    {
LABEL_265:
                      v346 = 0;
                      if ( (v80 & 0x10) != 0 )
                      {
LABEL_266:
                        v346 = 0;
                        if ( (v80 & 0x20) != 0 )
                        {
LABEL_267:
                          v346 = 0;
                          if ( (v80 & 0x40) != 0 )
                          {
LABEL_268:
                            v346 = 0;
                            if ( (v80 & 0x80u) != 0LL )
                            {
LABEL_269:
                              v346 = 0;
                              if ( (~(_WORD)v80 & 0x300) == 0 )
                                goto LABEL_270;
                              if ( (v80 & 0x100) == 0 )
                              {
                                v81 = (unsigned __int64)&v346;
                                goto LABEL_214;
                              }
                              goto LABEL_377;
                            }
                            v81 = (unsigned __int64)&v346;
                            if ( (~BYTE1(v80) & 3) == 0 )
                            {
LABEL_293:
                              if ( (char *)v81 != &v346 )
                              {
                                v76 = " Resident & Contiguous";
                                while ( 1 )
                                {
                                  v78 = (unsigned __int8)*v76++;
                                  *(_BYTE *)v81 = v78;
                                  if ( !(_BYTE)v78 )
                                    break;
                                  if ( (char *)++v81 == &v346 )
                                    goto LABEL_270;
                                }
LABEL_220:
                                if ( (v80 & 0x400) != 0 )
                                {
                                  if ( v81 >= (unsigned __int64)&v347 )
                                  {
                                    if ( !under_debugger )
                                      goto LABEL_570;
                                    goto LABEL_626;
                                  }
                                  goto LABEL_222;
                                }
                                goto LABEL_226;
                              }
LABEL_270:
                              v346 = 0;
                              if ( (v80 & 0x400) != 0 )
                              {
LABEL_271:
                                v346 = 0;
                                if ( (v80 & 0x1000) == 0 )
                                  goto LABEL_276;
                                goto LABEL_272;
                              }
                              v81 = (unsigned __int64)&v346;
                              if ( (v80 & 0x1000) == 0 )
                              {
LABEL_233:
                                if ( (v80 & 0x2000) == 0 )
                                  goto LABEL_239;
                                if ( v81 >= (unsigned __int64)&v347 )
                                {
                                  if ( !under_debugger )
                                    goto LABEL_570;
                                  goto LABEL_626;
                                }
LABEL_235:
                                if ( (char *)v81 == &v346 )
                                {
LABEL_278:
                                  v346 = 0;
                                  if ( (v80 & 0x4000) != 0 )
                                  {
LABEL_279:
                                    v346 = 0;
                                    goto LABEL_245;
                                  }
                                  goto LABEL_245;
                                }
                                v76 = " Big";
                                while ( 1 )
                                {
                                  v84 = *v76++;
                                  *(_BYTE *)v81 = v84;
                                  if ( !v84 )
                                    break;
                                  if ( (char *)++v81 == &v346 )
                                    goto LABEL_278;
                                }
LABEL_239:
                                BYTE1(v80) &= 0x40u;
                                if ( BYTE1(v80) )
                                {
                                  if ( v81 >= (unsigned __int64)&v347 )
                                    goto LABEL_581;
LABEL_241:
                                  if ( (char *)v81 != &v346 )
                                  {
                                    v85 = " Conforms CODE";
                                    while ( 1 )
                                    {
                                      v86 = *v85++;
                                      *(_BYTE *)v81 = v86;
                                      if ( !v86 )
                                        goto LABEL_245;
                                      if ( (char *)++v81 == &v346 )
                                        goto LABEL_279;
                                    }
                                  }
                                  goto LABEL_279;
                                }
LABEL_245:
                                sub_2E50(HIDWORD(v296), 1u, (__int64)"%s", v345);
                                goto LABEL_23;
                              }
LABEL_228:
                              if ( (char *)v81 == &v346 )
                              {
LABEL_272:
                                v346 = 0;
                                if ( (v80 & 0x8000) != 0 )
                                  goto LABEL_273;
LABEL_276:
                                v81 = (unsigned __int64)&v346;
                                if ( (v80 & 0x2000) == 0 )
                                  goto LABEL_239;
                                goto LABEL_235;
                              }
                              v76 = " 16:16 Alias Required";
                              while ( 1 )
                              {
                                v78 = (unsigned __int8)*v76++;
                                *(_BYTE *)v81 = v78;
                                if ( !(_BYTE)v78 )
                                  break;
                                if ( (char *)++v81 == &v346 )
                                  goto LABEL_272;
                              }
                              if ( (v80 & 0x8000) != 0 )
                              {
                                if ( v81 >= (unsigned __int64)&v347 )
                                {
                                  if ( !under_debugger )
                                    goto LABEL_570;
                                  goto LABEL_626;
                                }
                                if ( (char *)v81 == &v346 )
                                {
LABEL_273:
                                  v346 = 0;
                                  if ( (v80 & 0x2000) == 0 )
                                  {
                                    v81 = (unsigned __int64)&v346;
                                    if ( (v80 & 0x4000) == 0 )
                                      goto LABEL_245;
                                    goto LABEL_241;
                                  }
                                  goto LABEL_278;
                                }
                                v76 = " Privileged";
                                while ( 1 )
                                {
                                  v106 = *v76++;
                                  *(_BYTE *)v81 = v106;
                                  if ( !v106 )
                                    break;
                                  if ( (char *)++v81 == &v346 )
                                    goto LABEL_273;
                                }
                              }
                              goto LABEL_233;
                            }
LABEL_208:
                            if ( (v80 & 0x100) == 0 )
                              goto LABEL_214;
                            if ( v81 >= (unsigned __int64)&v347 )
                            {
                              if ( !under_debugger )
                                goto LABEL_570;
                              goto LABEL_626;
                            }
                            if ( (char *)v81 != &v346 )
                            {
                              v76 = " ZeroFilledPages";
                              while ( 1 )
                              {
                                v78 = (unsigned __int8)*v76++;
                                *(_BYTE *)v81 = v78;
                                if ( !(_BYTE)v78 )
                                  break;
                                if ( (char *)++v81 == &v346 )
                                  goto LABEL_377;
                              }
LABEL_214:
                              if ( (v80 & 0x200) == 0 )
                                goto LABEL_220;
                              if ( v81 >= (unsigned __int64)&v347 )
                              {
                                if ( !under_debugger )
                                  goto LABEL_570;
                                goto LABEL_626;
                              }
                              if ( (char *)v81 != &v346 )
                              {
                                v76 = " Resident";
                                while ( 1 )
                                {
                                  v78 = (unsigned __int8)*v76++;
                                  *(_BYTE *)v81 = v78;
                                  if ( !(_BYTE)v78 )
                                    goto LABEL_220;
                                  if ( (char *)++v81 == &v346 )
                                    goto LABEL_270;
                                }
                              }
                              goto LABEL_270;
                            }
LABEL_377:
                            v346 = 0;
                            if ( (v80 & 0x200) == 0 )
                            {
                              v81 = (unsigned __int64)&v346;
                              if ( (v80 & 0x400) != 0 )
                              {
LABEL_222:
                                if ( (char *)v81 == &v346 )
                                  goto LABEL_271;
                                v76 = " Resident & LongLockable";
                                while ( 1 )
                                {
                                  v83 = *v76++;
                                  *(_BYTE *)v81 = v83;
                                  if ( !v83 )
                                    break;
                                  if ( (char *)++v81 == &v346 )
                                    goto LABEL_271;
                                }
                              }
LABEL_226:
                              if ( (v80 & 0x1000) == 0 )
                                goto LABEL_233;
                              if ( v81 >= (unsigned __int64)&v347 )
                              {
                                if ( under_debugger )
                                  goto LABEL_626;
                                goto LABEL_570;
                              }
                              goto LABEL_228;
                            }
                            goto LABEL_270;
                          }
                          v81 = (unsigned __int64)&v346;
                          if ( (v80 & 0x80u) == 0LL )
                          {
                            if ( (~(_WORD)v80 & 0x300) != 0 )
                              goto LABEL_208;
LABEL_308:
                            if ( v81 >= (unsigned __int64)&v347 )
                              goto LABEL_571;
                            goto LABEL_293;
                          }
                          goto LABEL_203;
                        }
                        v81 = (unsigned __int64)&v346;
                        if ( (v80 & 0x40) == 0 )
                        {
LABEL_201:
                          if ( (v80 & 0x80u) == 0LL )
                            goto LABEL_207;
                          if ( v81 >= (unsigned __int64)&v347 )
                          {
                            if ( !under_debugger )
                              goto LABEL_570;
                            goto LABEL_626;
                          }
LABEL_203:
                          if ( (char *)v81 == &v346 )
                            goto LABEL_269;
                          v76 = " InvalidPages";
                          while ( 1 )
                          {
                            v78 = (unsigned __int8)*v76++;
                            *(_BYTE *)v81 = v78;
                            if ( !(_BYTE)v78 )
                              break;
                            if ( (char *)++v81 == &v346 )
                              goto LABEL_269;
                          }
LABEL_207:
                          if ( (~(_WORD)v80 & 0x300) != 0 )
                            goto LABEL_208;
                          goto LABEL_308;
                        }
LABEL_197:
                        if ( (char *)v81 == &v346 )
                          goto LABEL_268;
                        v76 = " PreloadPages";
                        while ( 1 )
                        {
                          v78 = (unsigned __int8)*v76++;
                          *(_BYTE *)v81 = v78;
                          if ( !(_BYTE)v78 )
                            goto LABEL_201;
                          if ( (char *)++v81 == &v346 )
                            goto LABEL_268;
                        }
                      }
                      v81 = (unsigned __int64)&v346;
                      if ( (v80 & 0x20) == 0 )
                      {
LABEL_195:
                        if ( (v80 & 0x40) == 0 )
                          goto LABEL_201;
                        if ( v81 >= (unsigned __int64)&v347 )
                        {
                          if ( !under_debugger )
                            goto LABEL_570;
                          goto LABEL_626;
                        }
                        goto LABEL_197;
                      }
LABEL_191:
                      if ( (char *)v81 == &v346 )
                        goto LABEL_267;
                      v76 = " Shared";
                      while ( 1 )
                      {
                        v78 = (unsigned __int8)*v76++;
                        *(_BYTE *)v81 = v78;
                        if ( !(_BYTE)v78 )
                          goto LABEL_195;
                        if ( (char *)++v81 == &v346 )
                          goto LABEL_267;
                      }
                    }
                    v81 = (unsigned __int64)&v346;
                    if ( (v80 & 0x10) == 0 )
                    {
LABEL_189:
                      if ( (v80 & 0x20) == 0 )
                        goto LABEL_195;
                      if ( v81 >= (unsigned __int64)&v347 )
                      {
                        if ( !under_debugger )
                          goto LABEL_570;
                        goto LABEL_626;
                      }
                      goto LABEL_191;
                    }
LABEL_185:
                    if ( (char *)v81 == &v346 )
                      goto LABEL_266;
                    v76 = " Discardable";
                    while ( 1 )
                    {
                      v78 = (unsigned __int8)*v76++;
                      *(_BYTE *)v81 = v78;
                      if ( !(_BYTE)v78 )
                        goto LABEL_189;
                      if ( (char *)++v81 == &v346 )
                        goto LABEL_266;
                    }
                  }
                  v76 = " Executable";
                  while ( 1 )
                  {
                    v78 = (unsigned __int8)*v76++;
                    *(_BYTE *)v81 = v78;
                    if ( !(_BYTE)v78 )
                      break;
                    if ( (char *)++v81 == &v346 )
                      goto LABEL_264;
                  }
                }
                if ( (v80 & 8) == 0 )
                {
LABEL_183:
                  if ( (v80 & 0x10) == 0 )
                    goto LABEL_189;
                  if ( v81 >= (unsigned __int64)&v347 )
                  {
                    if ( !under_debugger )
                      goto LABEL_570;
                    goto LABEL_626;
                  }
                  goto LABEL_185;
                }
                if ( v81 >= (unsigned __int64)&v347 )
                {
                  if ( under_debugger )
                    goto LABEL_626;
                  goto LABEL_570;
                }
LABEL_179:
                if ( (char *)v81 == &v346 )
                  goto LABEL_265;
                v76 = " Resource";
                while ( 1 )
                {
                  v78 = (unsigned __int8)*v76++;
                  *(_BYTE *)v81 = v78;
                  if ( !(_BYTE)v78 )
                    goto LABEL_183;
                  if ( (char *)++v81 == &v346 )
                    goto LABEL_265;
                }
              }
LABEL_493:
              v344 = 0;
              v216 = v80 & 0x300;
              if ( v216 != 512 && v216 != 768 && v216 != 256 )
              {
                v164 = &v344;
                BYTE1(v80) &= 0x20u;
                if ( !BYTE1(v80) )
                  goto LABEL_457;
                goto LABEL_453;
              }
              goto LABEL_496;
            }
            if ( v164 >= v345 )
            {
              if ( !under_debugger )
                goto LABEL_570;
              goto LABEL_626;
            }
            v81 = (unsigned __int64)&v344;
            goto LABEL_431;
          }
          if ( v164 >= v345 )
            goto LABEL_581;
          v76 = " Application";
          if ( (_DWORD)v81 != 1023 )
          {
            do
            {
              v81 = (unsigned __int8)*v76++;
              *v164 = v81;
              if ( !(_BYTE)v81 )
                goto LABEL_416;
            }
            while ( ++v164 != &v344 );
          }
        }
LABEL_492:
        *v164 = 0;
        goto LABEL_416;
      }
    }
    else
    {
      LOBYTE(v312) = 3;
      v75 = "DATA";
      if ( (v297.m128i_i8[0] & 8) == 0 )
        goto LABEL_158;
    }
    v75 = "RESOURCE";
    goto LABEL_158;
  }
LABEL_25:
  if ( v338 )
  {
    set_default_dataseg((int)v338);
    if ( (word_B2A0 & 2) != 0 )
      goto LABEL_27;
  }
  else if ( (word_B2A0 & 2) != 0 )
  {
LABEL_27:
    if ( v330 )
    {
      sub_3550((__int64)"Loading resource table...\n");
      qlseek(v10, (unsigned int)(v329 + v280), 0);
      if ( v330 )
      {
        v177 = 0;
        do
        {
          v178 = "?";
          lread(v10, &v296, 16);
          v179 = netnode_altval(qword_B298, v297.m128i_u16[0], 65);
          v180 = v179 + v297.m128i_u32[1];
          if ( (unsigned __int16)v296 <= 0x15u )
            v178 = off_ACA0[(unsigned __int16)v296];
          ++v177;
          sub_2E50(v180, 1u, (__int64)"Resource       ID: %04X", WORD1(v296));
          sub_2E50(v180, 1u, (__int64)"Resource     Type: %04X (%s)", (unsigned __int16)v296, v178);
          sub_2E50(
            v180,
            1u,
            (__int64)"Resource Location: obj=%d. offset=%08Xh size=%08Xh (%u.)",
            v297.m128i_u16[0],
            v297.m128i_i32[1],
            HIDWORD(v296),
            HIDWORD(v296));
        }
        while ( v177 < v330 );
      }
    }
  }
  v233 = (const char *)sub_2BF0(v10, v280 + v331, 0);
  v294 = -1;
  netnode_check(&v294, 0, 0, 1);
  v258 = sub_3AA0(v10, &v313, v280, v293, v294);
  if ( !v258 )
    return v348 - __readfsqword(0x28u);
  v20 = v332;
  v248 = &v291;
  if ( !v332 )
  {
    v21 = v331 + v280;
    if ( v331 + v280 )
      goto LABEL_31;
    goto LABEL_33;
  }
  v244 = v294;
  qlseek(v10, (unsigned int)(v280 + v332), 0);
  v253 = &v289;
  while ( 1 )
  {
    lread(v10, &v289, 1);
    if ( !(_BYTE)v289 )
      break;
    lread(v10, &v291, 1);
    v133 = v291;
    if ( (v291 & 0x80u) != 0 )
    {
      v133 = v291 & 0x7F;
      LOBYTE(v291) = v291 & 0x7F;
    }
    if ( v133 )
    {
      lread(v10, &v292, 2);
      v211 = netnode_altval(qword_B298, (unsigned __int16)v292, 65);
      if ( (_BYTE)v291 == 3 )
      {
        if ( (_BYTE)v289 )
        {
          v228 = 0;
          v229 = (char *)&v296 + 4;
          do
          {
            v264 = v229;
            lread(v10, v229, 1);
            v221 = v228 + v278 + 1;
            ++v228;
            lread(v10, &v296, 4);
            sub_2F20("32-bit entry", (unsigned int)(v296 + v211), BYTE4(v296), v233, v221);
            v229 = v264;
          }
          while ( v228 < (unsigned __int8)v289 );
LABEL_533:
          v278 = v221;
        }
      }
      else if ( (unsigned __int8)v291 > 3u )
      {
        if ( (_BYTE)v291 == 4 && (_BYTE)v289 )
        {
          v222 = v278 + 1;
          lread(v10, (char *)&v295 + 6, 1);
          while ( 1 )
          {
            lread(v10, (char *)&v295 + 4, 2);
            lread(v10, &v295, 4);
            v226 = netnode_altval(v244, WORD2(v295), 65);
            v227 = ea2node((unsigned int)v295);
            if ( (v295 & 0x1000000000000LL) != 0 )
              v223 = netnode_altval(v226, v227, 65);
            else
              v223 = netnode_altval(v226, v227, 97);
            if ( v223 != 1 )
              v223 = node2ea(v223);
            if ( !(unsigned __int8)is_mapped(v223) )
            {
              v224 = "#%d.";
              if ( (v295 & 0x1000000000000LL) == 0 )
                v224 = "proc of %Xh";
              qsnprintf(v345, 32, v224, (unsigned int)v295);
              a3 = 0.0;
              v296 = 0;
              v297 = 0;
              netnode_qsupstr(v244, &v296, WORD2(v295), 83);
              v225 = (const char *)&unk_8BBC;
              if ( v297.m128i_i64[0] )
                v225 = (const char *)v296;
              sub_33C0((__int64)"Can't forward entry %u for (module %s, %s)", v222, v225, v345);
              if ( v296 )
              {
                v297.m128i_i64[0] = 0;
                qfree(v296);
              }
            }
            sub_2F20(nullptr, v223, BYTE6(v295), v233, v222);
            if ( (unsigned __int8)v289 <= (int)(v222 - v278) )
              break;
            ++v222;
            lread(v10, (char *)&v295 + 6, 1);
          }
          v278 = v222;
        }
      }
      else if ( (_BYTE)v291 == 1 )
      {
        if ( (_BYTE)v289 )
        {
          v219 = (char *)&v296 + 2;
          v220 = 0;
          do
          {
            v263 = v219;
            lread(v10, v219, 1);
            v221 = v220 + v278 + 1;
            ++v220;
            lread(v10, &v296, 2);
            sub_2F20("16-bit entry", (unsigned int)(unsigned __int16)v296 + v211, BYTE2(v296), v233, v221);
            v219 = v263;
          }
          while ( v220 < (unsigned __int8)v289 );
          goto LABEL_533;
        }
      }
      else if ( (_BYTE)v291 == 2 && (_BYTE)v289 )
      {
        v212 = (char *)&v296 + 4;
        v213 = v278 + 1;
        v214 = 0;
        do
        {
          v267 = v212;
          lread(v10, v212, 1);
          lread(v10, &v296, 2);
          lread(v10, (char *)&v296 + 2, 2);
          v215 = v214 + v213;
          v262 = v214 + v213;
          ++v214;
          sub_2F20("286-gate", (unsigned int)(unsigned __int16)v296 + v211, BYTE4(v296), v233, v215);
          v212 = v267;
        }
        while ( v214 < (unsigned __int8)v289 );
        v278 = v262;
      }
    }
    else
    {
      v278 += (unsigned __int8)v289;
    }
  }
  v20 = v332;
  v21 = v331 + v280;
  if ( !(v331 + v280) )
    goto LABEL_33;
LABEL_31:
  if ( v21 < (unsigned __int64)qword_B288 )
    sub_2930(v10, v21, v280 + v20);
LABEL_33:
  if ( v336 && v336 < (unsigned __int64)qword_B288 )
    sub_2930(v10, v336, v336 + v337);
  qfree(v233);
  sub_3550((__int64)"Applying fixup records...\n");
  v281 = v294;
  v272 = v293;
  v22 = v280 + v334;
  v277 = v280 + v334;
  v279 = (unsigned int)(v333 + v280);
  qlseek(v10, v279, 0);
  lread(v10, &v291, 4);
  v291 += v22;
  v23 = 1;
  if ( v318 )
  {
    v259 = v10;
    while ( 1 )
    {
      qlseek(v259, v279 + 4LL * v23, 0);
      lread(v259, &v292, 4);
      v292 += v277;
      if ( netnode_altval(v272, v23, 65) )
      {
        v24 = v291;
        v25 = v292;
        v26 = netnode_altval(v272, v23, 65);
        if ( v24 < v25 )
          break;
      }
LABEL_38:
      ++v23;
      v291 = v292;
      if ( v318 < v23 )
        goto LABEL_389;
    }
    v248 = (unsigned int *)(v26 - 1);
    qlseek(v259, v24, 0);
    v276 = v25;
    v27 = &v295;
    v283 = v23;
    while ( 2 )
    {
      lread(v259, &v285, 1);
      lread(v259, &v286, 1);
      v287 = 1;
      v289 = 0;
      if ( (v285 & 0x20) != 0 )
        lread(v259, &v287, 1);
      else
        lread(v259, &v289, 2);
      si128 = _mm_load_si128((const __m128i *)&xmmword_8D60);
      v298 = 0;
      v296 = 0x200000000LL;
      v299 = 0;
      v297 = si128;
      v29 = v286 & 0x40;
      v30 = v286 & 3;
      if ( (v286 & 3) != 2 )
      {
        if ( v30 == 3 )
        {
          if ( v29 )
          {
            lread(v259, v27, 2);
            v130 = v295;
          }
          else
          {
            lread(v259, v27, 1);
            v130 = (unsigned __int8)v295;
          }
          entry = get_entry(v130);
          v113 = v286;
          if ( (v286 & 4) == 0 )
            goto LABEL_323;
        }
        else
        {
          if ( v30 != 1 )
          {
            if ( v29 )
            {
              lread(v259, v27, 2);
              v31 = v295;
            }
            else
            {
              lread(v259, v27, 1);
              v31 = (unsigned __int8)v295;
            }
            entry = netnode_altval(qword_B298, v31, 65);
            if ( (v285 & 0xF) == 2 )
            {
              HIDWORD(v296) &= ~2u;
            }
            else
            {
              if ( (v286 & 0x10) == 0 )
              {
                lread(v259, v27, 2);
                LODWORD(v32) = (unsigned __int16)v295;
                goto LABEL_52;
              }
              lread(v259, v27, 4);
              v32 = (int)v295;
              if ( (int)v295 >= 0 )
              {
LABEL_52:
                entry += (unsigned int)v32;
                goto LABEL_323;
              }
LABEL_370:
              v299 = v32;
            }
LABEL_323:
            show_auto(entry, 0);
            v114 = getseg(entry);
            if ( v114 )
            {
              v297.m128i_i64[1] = *(_QWORD *)(v114 + 48);
              v266 = 1;
              segm_base = get_segm_base(v114);
              v116 = entry - segm_base;
            }
            else
            {
              v266 = 0;
              v116 = entry;
            }
            v117 = 0;
            v298 = v116;
            if ( v287 )
            {
              LODWORD(v253) = 0;
              v271 = v27;
              v233 = (const char *)&v296;
              while ( 1 )
              {
                v118 = v285;
                if ( (v285 & 0x20) != 0 )
                {
                  lread(v259, &v289, 2);
                  v118 = v285;
                }
                v119 = v118 & 0xF;
                v120 = v298;
                LOWORD(v121) = v289;
                v122 = (char *)v248 + v289;
                v123 = v298 + v299;
                if ( (v286 & 8) == 0 )
                  break;
                if ( v119 != 3 )
                {
                  v124 = 1024;
LABEL_349:
                  if ( (unsigned __int8)(v119 - 7) <= 1u )
                  {
                    dword = get_dword(v122);
                    segm_base = v120;
                    v121 = dword >> 20;
                    v117 = (unsigned __int16)dword;
                    v128 = v123 - (unsigned __int16)dword;
                    if ( v124 == 1024 )
                      segm_base = v128;
                    v120 = segm_base;
                    goto LABEL_353;
                  }
                  goto LABEL_331;
                }
                v124 = 1024;
                v129 = get_dword((char *)v248 + v289);
                segm_base = (unsigned __int16)v129;
                v120 = v123 - (unsigned __int16)v129;
                v117 = v129 >> 20;
                v123 = (v129 & 0xFFFFF) + v120;
                LOWORD(v121) = v129 >> 20;
                LOBYTE(v244) = v258;
LABEL_360:
                put_word(v122 + 2, v297.m128i_i64[1], segm_base, v117);
                v125 = 3;
LABEL_334:
                LOWORD(v296) = v125;
                if ( v123 > 0xFFFF )
                  sub_33C0(
                    (__int64)"Can't apply 16-bit offset fixup at 0x%a, target offset 0x%a, truncating to 16-bit...",
                    a3,
                    *(double *)si128.m128i_i64);
                put_word(v122, (unsigned __int16)v123, segm_base, v117);
                while ( 2 )
                {
                  if ( (_BYTE)v244 )
                  {
LABEL_346:
                    v298 = v123 - v299;
                    set_fixup(v122, &v296);
                    if ( (unsigned __int16)v121 <= 0xFFBu && v124-- != 0 )
                    {
                      v123 = v120 + v299;
                      v122 = (char *)v248 + (__int16)v121;
                      if ( v119 != 3 )
                        goto LABEL_349;
                      dword = get_dword((char *)v248 + (__int16)v121);
                      v117 = dword >> 20;
                      v121 = dword >> 20;
LABEL_353:
                      v123 = (dword & 0xFFFFF) + v120;
                      LOBYTE(v244) = v258;
LABEL_332:
                      switch ( v119 )
                      {
                        case 0u:
                          put_byte(v122, (unsigned __int8)v123);
                          LOWORD(v296) = 13;
                          continue;
                        case 2u:
                          put_word(v122, v297.m128i_i64[1], segm_base, v117);
                          LOWORD(v296) = 2;
                          if ( (_BYTE)v244 )
                            goto LABEL_346;
                          goto LABEL_338;
                        case 3u:
                          goto LABEL_360;
                        case 5u:
                          v125 = 1;
                          goto LABEL_334;
                        case 6u:
                          LOWORD(v296) = 5;
                          put_word(v122 + 4, v297.m128i_i64[1], segm_base, v117);
                          put_dword(v122, v123);
                          continue;
                        case 7u:
                          LOWORD(v296) = 4;
                          put_dword(v122, v123);
                          continue;
                        case 8u:
                          v123 = v123 - (_QWORD)v122 - 4;
                          LOWORD(v296) = 4;
                          put_dword(v122, v123);
                          continue;
                        default:
                          sub_33C0((__int64)"Unknown relocation source type %Xh at 0x%a", v119, a3);
                          HIDWORD(v296) |= 4u;
                          LOWORD(v296) = 0;
                          continue;
                      }
                    }
                  }
                  else
                  {
LABEL_338:
                    set_fixup(v122, &v296);
                  }
                  break;
                }
                if ( !v266 )
                {
                  sub_3550(
                    (__int64)"Bad fixup target (source %a, target %a, fixup fileoff %Xh)\n",
                    a3,
                    *(double *)si128.m128i_i64,
                    (_DWORD)v248 + v289);
                  append_cmt((char *)v248 + v289, "Fixup target is illegal!", 0);
                }
                LODWORD(v253) = (_DWORD)v253 + 1;
                if ( (int)v253 >= v287 )
                {
                  v27 = v271;
                  goto LABEL_343;
                }
              }
              v124 = 1024;
LABEL_331:
              LOBYTE(v244) = 0;
              goto LABEL_332;
            }
LABEL_343:
            if ( (unsigned int)qlseek(v259, 0, 1) >= v276 )
            {
              v23 = v283;
              goto LABEL_38;
            }
            continue;
          }
          if ( v29 )
          {
            lread(v259, v27, 2);
            v131 = v295;
          }
          else
          {
            lread(v259, v27, 1);
            v131 = (unsigned __int8)v295;
          }
          v108 = netnode_altval(v281, v131, 65);
          if ( v286 < 0 )
          {
            lread(v259, v27, 1);
            v132 = (unsigned __int8)v295;
          }
          else if ( (v286 & 0x10) != 0 )
          {
            lread(v259, v27, 4);
            v132 = v295;
          }
          else
          {
            lread(v259, v27, 2);
            v132 = (unsigned __int16)v295;
          }
          v110 = v132;
          v111 = 65;
LABEL_322:
          v112 = netnode_altval(v108, v110, v111);
          entry = node2ea(v112);
          v113 = v286;
          if ( (v286 & 4) == 0 )
            goto LABEL_323;
        }
        if ( (v113 & 0x20) != 0 )
        {
          lread(v259, v27, 4);
          v32 = (int)v295;
        }
        else
        {
          lread(v259, v27, 2);
          v32 = (__int16)v295;
        }
        goto LABEL_370;
      }
      break;
    }
    if ( v29 )
    {
      lread(v259, v27, 2);
      v107 = v295;
    }
    else
    {
      lread(v259, v27, 1);
      v107 = (unsigned __int8)v295;
    }
    v108 = netnode_altval(v281, v107, 65);
    if ( (v286 & 0x10) != 0 )
    {
      lread(v259, v27, 4);
      v109 = v295;
    }
    else
    {
      lread(v259, v27, 2);
      v109 = (unsigned __int16)v295;
    }
    v110 = v109;
    v111 = 353;
    goto LABEL_322;
  }
LABEL_389:
  if ( v319 )
  {
    v184 = netnode_altval(qword_B298, v319, 65);
    v185 = v319;
    v186 = v184 + v320;
    setinf(14, v319);
    v191 = getinf(14, v185, v187, v188, v189, v190, v233, v244, v248, v253);
    v192 = v186 - 16 * sel2para(v191);
    setinf(15, v192);
    v197 = getinf(15, v192, v193, v194, v195, v196, v241, v245, v250, v254);
    v202 = getinf(14, v192, v198, v199, v200, v201, v242, v246, v251, v255);
    v203 = v197 + 16 * sel2para(v202);
    setinf(16, v203);
    v208 = v338;
    if ( !v338 )
      v208 = -1;
    v209 = *(_DWORD *)(ph + 84);
    v210 = getinf(16, v203, v204, v205, v206, v207, v243, v247, v252, v256);
    split_sreg_range(v210, v209, v208, 4, 1);
  }
  if ( v321 )
  {
    v181 = sel2para(v321);
    setinf(13, v181);
    v182 = v322;
    if ( !v322 )
    {
      if ( v338 && (segm_by_sel = (_QWORD *)get_segm_by_sel(v338)) != nullptr )
        v182 = segm_by_sel[1] - *segm_by_sel;
      else
        v182 = 0;
    }
    setinf(17, v182);
    v183 = get_segm_by_sel(v321);
    if ( v183 )
    {
      *(_BYTE *)(v183 + 41) = 5;
      set_segm_class(v183, "STACK", 0);
    }
  }
  if ( byte_B290 && qword_B270 != -1 )
  {
    setinf(23, 3221225472LL);
    sub_3870(0xBC0u);
  }
  netnode_kill(&v294);
  netnode_kill(&v293);
  netnode_kill(&qword_B298);
  setinf(12, 0);
  *(_DWORD *)(ph + 8) &= ~0x20u;
  return v348 - __readfsqword(0x28u);
}

