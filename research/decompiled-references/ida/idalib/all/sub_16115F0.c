__int64 __fastcall sub_16115F0(__int64 *a1, unsigned int a2, __int64 a3)
{
  void **p_ptr; // r12
  unsigned __int64 v6; // rax
  __m128i si128; // xmm0
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rdi
  __int64 v17; // r9
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  char v28; // al
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // rsi
  void *v48; // rax
  __int64 *v49; // rsi
  char v50; // al
  __int64 v51; // rdi
  unsigned __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned __int64 v56; // rdx
  unsigned int v57; // eax
  unsigned __int64 v58; // rsi
  __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned int v63; // eax
  unsigned __int64 *v64; // rsi
  unsigned __int64 v65; // rax
  unsigned int v66; // r12d
  __int64 v67; // rbx
  __int64 v68; // rbp
  _QWORD *v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rbp
  unsigned int v72; // eax
  void **v73; // rsi
  unsigned __int64 v74; // rax
  unsigned int v75; // ebp
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rbx
  __int64 v85; // r12
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rbx
  unsigned __int64 v91; // r15
  __int64 v92; // r9
  char v93; // r10
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  void *v97; // r14
  __int64 v98; // rbx
  __int64 *v99; // r13
  __int64 *v100; // r15
  _QWORD *v101; // rdx
  char v102; // al
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  char v107; // r10
  bool v108; // al
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbp
  unsigned int v114; // eax
  char v115; // r10
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rbp
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // r12
  unsigned __int8 *v124; // rbp
  unsigned __int8 *v125; // rdx
  __int64 v126; // rax
  unsigned __int8 v127; // bp
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rbx
  unsigned __int8 *v130; // rbp
  __int64 v131; // rax
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // r12
  __int64 v140; // rax
  _QWORD *v141; // rax
  unsigned __int8 *v142; // r12
  __int64 v143; // rax
  unsigned __int64 v144; // rdi
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  unsigned __int8 *v147; // rbx
  unsigned __int8 *v148; // rdx
  __int64 v149; // rax
  unsigned __int8 v150; // r12
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rbx
  __int64 v153; // rax
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rbx
  __int64 v160; // r8
  __int64 v161; // r9
  void *v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rbx
  unsigned __int8 *v165; // r12
  unsigned __int8 *v166; // rdx
  __int64 v167; // rax
  unsigned int v168; // eax
  __int64 v169; // rbp
  unsigned __int8 *v170; // rbp
  unsigned __int8 *v171; // rbx
  __int64 v172; // rbx
  unsigned int v173; // eax
  __int64 v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rbx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rax
  _QWORD *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rbx
  __int64 v185; // r15
  __int64 v186; // rax
  unsigned __int64 v187; // rcx
  unsigned __int64 v188; // rdx
  __int64 v189; // rax
  unsigned int v190; // eax
  __int64 v191; // rbp
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rbx
  __int64 v195; // r8
  __int64 v196; // r9
  void *v197; // rax
  _QWORD *v198; // rax
  __int64 v199; // rbp
  unsigned __int8 *v200; // rbx
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rbp
  __int64 v204; // r8
  __int64 v205; // r9
  void *v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // rax
  _QWORD *v213; // rax
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rbp
  __int64 v220; // rax
  _QWORD *v221; // rax
  __int64 v222; // rdx
  int v223; // eax
  __int64 v224; // rax
  __int64 v225; // rdx
  int v226; // eax
  __int64 v227; // rdx
  int v228; // eax
  __int64 v229; // rax
  bool v230; // al
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  char v235; // al
  __int64 v236; // rdx
  int v237; // eax
  __int64 v238; // rdx
  int v239; // eax
  __int64 v240; // rdx
  int v241; // eax
  __int64 v242; // rax
  __int64 v243; // rdx
  int v244; // eax
  __int64 v245; // rax
  __int64 v246; // rdx
  int v247; // eax
  __int64 v248; // rax
  __int64 v249; // rdx
  int v250; // eax
  __int64 v251; // rdx
  int v252; // eax
  __int64 v253; // rax
  __int64 v254; // r12
  __int64 v255; // r15
  __int64 v256; // r12
  void *v257; // rdi
  __int64 v258; // rax
  __int64 v259; // r14
  __int64 v260; // r15
  __int64 v261; // r14
  void *v262; // rdi
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rsi
  __int64 v266; // rax
  void *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // r12
  __int64 v270; // r15
  __int64 v271; // r12
  void *v272; // rdi
  __int64 v273; // rdx
  int v274; // eax
  __int64 v275; // rax
  __int64 v276; // rdx
  int v277; // eax
  __int64 v278; // rax
  __int64 v279; // rbp
  __int64 v280; // rdx
  __int64 v281; // rbp
  void *v282; // rdi
  __int64 v283; // rax
  __int64 v284; // r15
  __int64 v285; // rdx
  __int64 v286; // r15
  void *v287; // rdi
  __int64 v288; // rax
  __int64 v289; // rax
  __int64 v290; // r8
  __int64 v291; // rax
  void *v292; // rdi
  __int64 v293; // rax
  __int64 v294; // rax
  __int64 v295; // rcx
  __int64 v296; // r15
  void *v297; // rdi
  __int64 v298; // rax
  __int64 v299; // rax
  char *v300; // rcx
  char *v301; // r15
  char *v302; // rdi
  __int64 v303; // rax
  __int64 v304; // rbp
  __int64 v305; // r12
  __int64 v306; // rbp
  void *v307; // rdi
  __int64 v308; // rax
  __int64 v309; // rdx
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  char v313; // r10
  __int64 v314; // rbp
  __int64 v315; // rax
  _QWORD *v316; // rax
  __int64 v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  char v322; // r10
  __int64 v323; // rbp
  __int64 v324; // rax
  _QWORD *v325; // rax
  __int64 v326; // rax
  __int64 v327; // r12
  __int64 v328; // rdx
  __int64 v329; // r12
  void *v330; // rdi
  __int64 v331; // rax
  __int64 v332; // rax
  __int64 v333; // rcx
  __int64 v334; // rax
  void *v335; // rdi
  __int64 v336; // [rsp+0h] [rbp-1B8h]
  __int64 v337; // [rsp+0h] [rbp-1B8h]
  char v338; // [rsp+0h] [rbp-1B8h]
  char v339; // [rsp+0h] [rbp-1B8h]
  char v340; // [rsp+0h] [rbp-1B8h]
  unsigned __int8 v341; // [rsp+0h] [rbp-1B8h]
  __int64 v342; // [rsp+0h] [rbp-1B8h]
  char v343; // [rsp+0h] [rbp-1B8h]
  char v344; // [rsp+0h] [rbp-1B8h]
  __int64 v345; // [rsp+0h] [rbp-1B8h]
  __int64 v346; // [rsp+0h] [rbp-1B8h]
  __int64 v347; // [rsp+0h] [rbp-1B8h]
  char *v348; // [rsp+0h] [rbp-1B8h]
  char v349; // [rsp+0h] [rbp-1B8h]
  char v350; // [rsp+0h] [rbp-1B8h]
  char v351; // [rsp+0h] [rbp-1B8h]
  __int64 v352; // [rsp+0h] [rbp-1B8h]
  __int64 v353; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v354; // [rsp+8h] [rbp-1B0h]
  __int64 v355; // [rsp+8h] [rbp-1B0h]
  __int64 v356; // [rsp+10h] [rbp-1A8h]
  __int64 v357; // [rsp+10h] [rbp-1A8h]
  __int64 v358; // [rsp+18h] [rbp-1A0h]
  __int64 v359; // [rsp+28h] [rbp-190h] BYREF
  void *ptr; // [rsp+30h] [rbp-188h] BYREF
  __m128i v361; // [rsp+38h] [rbp-180h]
  unsigned __int64 v362; // [rsp+50h] [rbp-168h] BYREF
  unsigned __int64 v363; // [rsp+58h] [rbp-160h]
  unsigned int v364; // [rsp+60h] [rbp-158h] BYREF
  char v365; // [rsp+64h] [rbp-154h]
  unsigned __int64 *v366; // [rsp+68h] [rbp-150h]
  unsigned int v367; // [rsp+70h] [rbp-148h]
  void *v368; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v369; // [rsp+A8h] [rbp-110h]
  unsigned int v370; // [rsp+B0h] [rbp-108h] BYREF
  char v371; // [rsp+B4h] [rbp-104h]
  _BYTE v372[16]; // [rsp+F0h] [rbp-C8h] BYREF
  _QWORD *v373; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v374; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v375; // [rsp+118h] [rbp-A0h]
  unsigned __int8 v376; // [rsp+168h] [rbp-50h]
  unsigned int v377; // [rsp+170h] [rbp-48h]
  unsigned __int8 v378; // [rsp+174h] [rbp-44h]

  p_ptr = &ptr;
  v6 = sub_15F1640(*a1, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  ptr = nullptr;
  v8 = v6;
  v361 = si128;
  v9 = sub_168B6C0(a1);
  sub_A83E70(v9, (char **)&ptr, v8);
  v10 = sub_FBE200((__int64)"gfx950-insts", 0xCu, (__int64)&ptr);
  if ( a2 == 1657 )
  {
    v37 = 5;
    v38 = 5;
    goto LABEL_23;
  }
  v11 = v10;
  if ( a2 <= 0x679 )
  {
    if ( a2 > 0x602 )
    {
      if ( a2 != 1621 )
        goto LABEL_47;
LABEL_31:
      v50 = *(_BYTE *)(a3 + 2);
      v51 = *a1;
      LODWORD(v369) = 1;
      BYTE4(v369) = 0;
      v368 = nullptr;
      v52 = *(_QWORD *)(a3 + 8 * (((v50 & 8) != 0) + 1LL) + 48);
      sub_1915F20(v51, v52, &v368, 0);
      v55 = v369;
      v56 = (unsigned __int64)v368;
      if ( (unsigned int)v369 <= 0x40 )
      {
        if ( !(_DWORD)v369 )
          goto LABEL_37;
        v56 = (__int64)((_QWORD)v368 << (64 - (unsigned __int8)v369)) >> (64 - (unsigned __int8)v369);
        v53 = v56;
      }
      else
      {
        v56 = *(_QWORD *)v368;
        v53 = *(_QWORD *)v368;
      }
      if ( v56 <= 0x10 )
      {
        LODWORD(p_ptr) = 0;
        v56 = 1LL << v53;
        if ( ((1LL << v53) & 0x16) != 0 || (v56 & 0x11000) != 0 && (_BYTE)v11 )
        {
LABEL_44:
          if ( v55 > 0x40 && v368 )
            operator delete[](v368);
          goto LABEL_48;
        }
      }
LABEL_37:
      v57 = sub_C00A40(v52, v52, v56, v53, v54);
      v58 = (unsigned __int64)a1;
      sub_168B9F0(v372, a1, v57, 2997, 0);
      v59 = sub_EEC8C0(v52, (__int64)a1, *(double *)si128.m128i_i64);
      if ( v376 )
      {
        v142 = v374;
        if ( v374 )
        {
          v143 = *((unsigned int *)v374 + 106);
          v58 = *((unsigned int *)v374 + 107);
          v145 = v143 + 1;
        }
        else
        {
          v227 = v375;
          v228 = *(_DWORD *)(v375 + 14976);
          if ( v228 )
          {
            v263 = (unsigned int)(v228 - 1);
            *(_DWORD *)(v375 + 14976) = v263;
            v142 = *(unsigned __int8 **)(v227 + 8 * v263 + 14848);
            v264 = *((unsigned int *)v142 + 134);
            v265 = *((_QWORD *)v142 + 66);
            *v142 = 0;
            *((_DWORD *)v142 + 106) = 0;
            v266 = v265 + (v264 << 6);
            while ( v265 != v266 )
            {
              while ( 1 )
              {
                v266 -= 64;
                v267 = *(void **)(v266 + 24);
                if ( v267 == (void *)(v266 + 40) )
                  break;
                v356 = v266;
                operator delete(v267);
                v266 = v356;
                if ( v265 == v356 )
                  goto LABEL_199;
              }
            }
LABEL_199:
            v143 = *((unsigned int *)v142 + 106);
            v58 = *((unsigned int *)v142 + 107);
            *((_DWORD *)v142 + 134) = 0;
            v145 = v143 + 1;
          }
          else
          {
            v229 = operator new(0x3A0u);
            v58 = 8;
            v145 = 1;
            v142 = (unsigned __int8 *)v229;
            *(_BYTE *)v229 = 0;
            *(_QWORD *)(v229 + 96) = v229 + 112;
            *(_QWORD *)(v229 + 128) = v229 + 144;
            *(_QWORD *)(v229 + 160) = v229 + 176;
            *(_QWORD *)(v229 + 192) = v229 + 208;
            *(_QWORD *)(v229 + 224) = v229 + 240;
            *(_QWORD *)(v229 + 256) = v229 + 272;
            *(_QWORD *)(v229 + 288) = v229 + 304;
            *(_QWORD *)(v229 + 320) = v229 + 336;
            *(_QWORD *)(v229 + 352) = v229 + 368;
            *(_QWORD *)(v229 + 384) = v229 + 400;
            *(_QWORD *)(v229 + 416) = v229 + 432;
            *(_QWORD *)(v229 + 104) = 0;
            *(_BYTE *)(v229 + 112) = 0;
            *(_QWORD *)(v229 + 136) = 0;
            *(_BYTE *)(v229 + 144) = 0;
            *(_QWORD *)(v229 + 168) = 0;
            *(_BYTE *)(v229 + 176) = 0;
            *(_QWORD *)(v229 + 200) = 0;
            *(_BYTE *)(v229 + 208) = 0;
            *(_QWORD *)(v229 + 232) = 0;
            *(_BYTE *)(v229 + 240) = 0;
            *(_QWORD *)(v229 + 264) = 0;
            *(_BYTE *)(v229 + 272) = 0;
            *(_QWORD *)(v229 + 296) = 0;
            *(_BYTE *)(v229 + 304) = 0;
            *(_QWORD *)(v229 + 328) = 0;
            *(_BYTE *)(v229 + 336) = 0;
            *(_QWORD *)(v229 + 360) = 0;
            *(_BYTE *)(v229 + 368) = 0;
            *(_QWORD *)(v229 + 392) = 0;
            *(_BYTE *)(v229 + 400) = 0;
            *(_QWORD *)(v229 + 424) = 0x800000000LL;
            *(_QWORD *)(v229 + 528) = v229 + 544;
            *(_QWORD *)(v229 + 536) = 0x600000000LL;
            v143 = 0;
          }
          v374 = v142;
        }
        v362 = v59;
        LOBYTE(v363) = 1;
        if ( v58 >= v145 )
          goto LABEL_100;
      }
      else
      {
        if ( !v378 )
          goto LABEL_39;
        v139 = sub_168B9E0(v372);
        v140 = (__int64)v373;
        if ( v373 )
          v140 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
        v359 = v140;
        v141 = sub_1587BC0(v139, &v359, v135, v136, v137, v138);
        v58 = 32LL * v377 + *v141;
        v142 = *(unsigned __int8 **)(v58 + 8);
        if ( v142 )
        {
          v143 = *((unsigned int *)v142 + 106);
          v144 = *((unsigned int *)v142 + 107);
          v145 = v143 + 1;
        }
        else
        {
          v240 = *(_QWORD *)(v58 + 16);
          v241 = *(_DWORD *)(v240 + 14976);
          if ( v241 )
          {
            v288 = (unsigned int)(v241 - 1);
            *(_DWORD *)(v240 + 14976) = v288;
            v142 = *(unsigned __int8 **)(v240 + 8 * v288 + 14848);
            v289 = *((unsigned int *)v142 + 134);
            v290 = *((_QWORD *)v142 + 66);
            *v142 = 0;
            *((_DWORD *)v142 + 106) = 0;
            v291 = v290 + (v289 << 6);
            while ( v290 != v291 )
            {
              while ( 1 )
              {
                v291 -= 64;
                v292 = *(void **)(v291 + 24);
                if ( v292 == (void *)(v291 + 40) )
                  break;
                v358 = v291;
                v357 = v290;
                operator delete(v292);
                v290 = v357;
                v291 = v358;
                if ( v357 == v358 )
                  goto LABEL_228;
              }
            }
LABEL_228:
            v143 = *((unsigned int *)v142 + 106);
            v144 = *((unsigned int *)v142 + 107);
            *((_DWORD *)v142 + 134) = 0;
            v145 = v143 + 1;
          }
          else
          {
            v242 = operator new(0x3A0u);
            v144 = 8;
            v145 = 1;
            v142 = (unsigned __int8 *)v242;
            *(_BYTE *)v242 = 0;
            *(_QWORD *)(v242 + 96) = v242 + 112;
            *(_QWORD *)(v242 + 128) = v242 + 144;
            *(_QWORD *)(v242 + 160) = v242 + 176;
            *(_QWORD *)(v242 + 192) = v242 + 208;
            *(_QWORD *)(v242 + 224) = v242 + 240;
            *(_QWORD *)(v242 + 256) = v242 + 272;
            *(_QWORD *)(v242 + 288) = v242 + 304;
            *(_QWORD *)(v242 + 320) = v242 + 336;
            *(_QWORD *)(v242 + 352) = v242 + 368;
            *(_QWORD *)(v242 + 384) = v242 + 400;
            *(_QWORD *)(v242 + 416) = v242 + 432;
            *(_QWORD *)(v242 + 104) = 0;
            *(_BYTE *)(v242 + 112) = 0;
            *(_QWORD *)(v242 + 136) = 0;
            *(_BYTE *)(v242 + 144) = 0;
            *(_QWORD *)(v242 + 168) = 0;
            *(_BYTE *)(v242 + 176) = 0;
            *(_QWORD *)(v242 + 200) = 0;
            *(_BYTE *)(v242 + 208) = 0;
            *(_QWORD *)(v242 + 232) = 0;
            *(_BYTE *)(v242 + 240) = 0;
            *(_QWORD *)(v242 + 264) = 0;
            *(_BYTE *)(v242 + 272) = 0;
            *(_QWORD *)(v242 + 296) = 0;
            *(_BYTE *)(v242 + 304) = 0;
            *(_QWORD *)(v242 + 328) = 0;
            *(_BYTE *)(v242 + 336) = 0;
            *(_QWORD *)(v242 + 360) = 0;
            *(_BYTE *)(v242 + 368) = 0;
            *(_QWORD *)(v242 + 392) = 0;
            *(_BYTE *)(v242 + 400) = 0;
            *(_QWORD *)(v242 + 424) = 0x800000000LL;
            *(_QWORD *)(v242 + 528) = v242 + 544;
            *(_QWORD *)(v242 + 536) = 0x600000000LL;
            v143 = 0;
          }
          *(_QWORD *)(v58 + 8) = v142;
        }
        v362 = v59;
        LOBYTE(v363) = 1;
        if ( v145 <= v144 )
        {
LABEL_100:
          v146 = *((_QWORD *)v142 + 52) + 12 * v143;
          *(_QWORD *)v146 = v362;
          *(_DWORD *)(v146 + 8) = v363;
          ++*((_DWORD *)v142 + 106);
LABEL_39:
          sub_15F7200(v372);
          v63 = sub_C00A40(v52, v58, v60, v61, v62);
          v64 = (unsigned __int64 *)a1;
          sub_168B9F0(v372, a1, v63, 5772, 0);
          if ( v376 )
          {
            v170 = v374;
            if ( !v374 )
            {
              v225 = v375;
              v226 = *(_DWORD *)(v375 + 14976);
              if ( v226 )
              {
                v253 = (unsigned int)(v226 - 1);
                *(_DWORD *)(v375 + 14976) = v253;
                v170 = *(unsigned __int8 **)(v225 + 8 * v253 + 14848);
                v254 = *((unsigned int *)v170 + 134);
                *v170 = 0;
                v255 = *((_QWORD *)v170 + 66);
                *((_DWORD *)v170 + 106) = 0;
                v256 = v255 + (v254 << 6);
                while ( v255 != v256 )
                {
                  while ( 1 )
                  {
                    v256 -= 64;
                    v257 = *(void **)(v256 + 24);
                    if ( v257 == (void *)(v256 + 40) )
                      break;
                    operator delete(v257);
                    if ( v255 == v256 )
                      goto LABEL_189;
                  }
                }
LABEL_189:
                *((_DWORD *)v170 + 134) = 0;
              }
              else
              {
                v170 = (unsigned __int8 *)operator new(0x3A0u);
                *v170 = 0;
                *((_QWORD *)v170 + 12) = v170 + 112;
                *((_QWORD *)v170 + 16) = v170 + 144;
                *((_QWORD *)v170 + 20) = v170 + 176;
                *((_QWORD *)v170 + 24) = v170 + 208;
                *((_QWORD *)v170 + 28) = v170 + 240;
                *((_QWORD *)v170 + 32) = v170 + 272;
                *((_QWORD *)v170 + 36) = v170 + 304;
                *((_QWORD *)v170 + 40) = v170 + 336;
                *((_QWORD *)v170 + 44) = v170 + 368;
                *((_QWORD *)v170 + 48) = v170 + 400;
                *((_QWORD *)v170 + 52) = v170 + 432;
                *((_QWORD *)v170 + 13) = 0;
                v170[112] = 0;
                *((_QWORD *)v170 + 17) = 0;
                v170[144] = 0;
                *((_QWORD *)v170 + 21) = 0;
                v170[176] = 0;
                *((_QWORD *)v170 + 25) = 0;
                v170[208] = 0;
                *((_QWORD *)v170 + 29) = 0;
                v170[240] = 0;
                *((_QWORD *)v170 + 33) = 0;
                v170[272] = 0;
                *((_QWORD *)v170 + 37) = 0;
                v170[304] = 0;
                *((_QWORD *)v170 + 41) = 0;
                v170[336] = 0;
                *((_QWORD *)v170 + 45) = 0;
                v170[368] = 0;
                *((_QWORD *)v170 + 49) = 0;
                v170[400] = 0;
                *((_QWORD *)v170 + 53) = 0x800000000LL;
                *((_QWORD *)v170 + 66) = v170 + 544;
                *((_QWORD *)v170 + 67) = 0x600000000LL;
              }
              v374 = v170;
            }
            v170[*v170 + 1] = 2;
            v125 = v374;
          }
          else
          {
            if ( !v378 )
            {
              v65 = sub_EEC8C0(v52, (__int64)a1, *(double *)si128.m128i_i64);
              v66 = v65;
              v11 = HIDWORD(v65);
              goto LABEL_42;
            }
            v118 = sub_168B9E0(v372);
            v121 = (__int64)v373;
            if ( v373 )
              v121 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
            v64 = &v362;
            v362 = v121;
            v122 = sub_1587BC0(v118, (__int64 *)&v362, v116, v117, v119, v120);
            v123 = *v122 + 32LL * v377;
            v124 = *(unsigned __int8 **)(v123 + 8);
            if ( !v124 )
            {
              v238 = *(_QWORD *)(v123 + 16);
              v239 = *(_DWORD *)(v238 + 14976);
              if ( v239 )
              {
                v283 = (unsigned int)(v239 - 1);
                *(_DWORD *)(v238 + 14976) = v283;
                v124 = *(unsigned __int8 **)(v238 + 8 * v283 + 14848);
                v284 = *((unsigned int *)v124 + 134);
                *v124 = 0;
                v285 = *((_QWORD *)v124 + 66);
                *((_DWORD *)v124 + 106) = 0;
                v286 = v285 + (v284 << 6);
                while ( v285 != v286 )
                {
                  while ( 1 )
                  {
                    v286 -= 64;
                    v287 = *(void **)(v286 + 24);
                    if ( v287 == (void *)(v286 + 40) )
                      break;
                    v346 = v285;
                    operator delete(v287);
                    v285 = v346;
                    if ( v346 == v286 )
                      goto LABEL_223;
                  }
                }
LABEL_223:
                *((_DWORD *)v124 + 134) = 0;
              }
              else
              {
                v124 = (unsigned __int8 *)operator new(0x3A0u);
                *v124 = 0;
                *((_QWORD *)v124 + 12) = v124 + 112;
                *((_QWORD *)v124 + 16) = v124 + 144;
                *((_QWORD *)v124 + 20) = v124 + 176;
                *((_QWORD *)v124 + 24) = v124 + 208;
                *((_QWORD *)v124 + 28) = v124 + 240;
                *((_QWORD *)v124 + 32) = v124 + 272;
                *((_QWORD *)v124 + 36) = v124 + 304;
                *((_QWORD *)v124 + 40) = v124 + 336;
                *((_QWORD *)v124 + 44) = v124 + 368;
                *((_QWORD *)v124 + 48) = v124 + 400;
                *((_QWORD *)v124 + 52) = v124 + 432;
                *((_QWORD *)v124 + 13) = 0;
                v124[112] = 0;
                *((_QWORD *)v124 + 17) = 0;
                v124[144] = 0;
                *((_QWORD *)v124 + 21) = 0;
                v124[176] = 0;
                *((_QWORD *)v124 + 25) = 0;
                v124[208] = 0;
                *((_QWORD *)v124 + 29) = 0;
                v124[240] = 0;
                *((_QWORD *)v124 + 33) = 0;
                v124[272] = 0;
                *((_QWORD *)v124 + 37) = 0;
                v124[304] = 0;
                *((_QWORD *)v124 + 41) = 0;
                v124[336] = 0;
                *((_QWORD *)v124 + 45) = 0;
                v124[368] = 0;
                *((_QWORD *)v124 + 49) = 0;
                v124[400] = 0;
                *((_QWORD *)v124 + 53) = 0x800000000LL;
                *((_QWORD *)v124 + 66) = v124 + 544;
                *((_QWORD *)v124 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v123 + 8) = v124;
            }
            v124[*v124 + 1] = 2;
            v125 = *(unsigned __int8 **)(v123 + 8);
          }
          v126 = *v125;
          *v125 = v126 + 1;
          *(_QWORD *)&v125[8 * v126 + 16] = v11;
          v127 = v376;
          v128 = sub_EEC8C0(v52, (__int64)v64, *(double *)si128.m128i_i64);
          v66 = v128;
          v129 = HIDWORD(v128);
          LODWORD(v11) = HIDWORD(v128);
          if ( v127 )
          {
            v130 = v374;
            if ( v374 )
            {
              v131 = *((unsigned int *)v374 + 106);
              v132 = *((unsigned int *)v374 + 107);
              v133 = v131 + 1;
            }
            else
            {
              v222 = v375;
              v223 = *(_DWORD *)(v375 + 14976);
              if ( v223 )
              {
                v258 = (unsigned int)(v223 - 1);
                *(_DWORD *)(v375 + 14976) = v258;
                v130 = *(unsigned __int8 **)(v222 + 8 * v258 + 14848);
                v259 = *((unsigned int *)v130 + 134);
                *v130 = 0;
                v260 = *((_QWORD *)v130 + 66);
                *((_DWORD *)v130 + 106) = 0;
                v261 = v260 + (v259 << 6);
                while ( v260 != v261 )
                {
                  while ( 1 )
                  {
                    v261 -= 64;
                    v262 = *(void **)(v261 + 24);
                    if ( v262 == (void *)(v261 + 40) )
                      break;
                    operator delete(v262);
                    if ( v260 == v261 )
                      goto LABEL_194;
                  }
                }
LABEL_194:
                v131 = *((unsigned int *)v130 + 106);
                v132 = *((unsigned int *)v130 + 107);
                *((_DWORD *)v130 + 134) = 0;
                v133 = v131 + 1;
              }
              else
              {
                v224 = operator new(0x3A0u);
                v132 = 8;
                v133 = 1;
                v130 = (unsigned __int8 *)v224;
                *(_BYTE *)v224 = 0;
                *(_QWORD *)(v224 + 96) = v224 + 112;
                *(_QWORD *)(v224 + 128) = v224 + 144;
                *(_QWORD *)(v224 + 160) = v224 + 176;
                *(_QWORD *)(v224 + 192) = v224 + 208;
                *(_QWORD *)(v224 + 224) = v224 + 240;
                *(_QWORD *)(v224 + 256) = v224 + 272;
                *(_QWORD *)(v224 + 288) = v224 + 304;
                *(_QWORD *)(v224 + 320) = v224 + 336;
                *(_QWORD *)(v224 + 352) = v224 + 368;
                *(_QWORD *)(v224 + 384) = v224 + 400;
                *(_QWORD *)(v224 + 416) = v224 + 432;
                *(_QWORD *)(v224 + 104) = 0;
                *(_BYTE *)(v224 + 112) = 0;
                *(_QWORD *)(v224 + 136) = 0;
                *(_BYTE *)(v224 + 144) = 0;
                *(_QWORD *)(v224 + 168) = 0;
                *(_BYTE *)(v224 + 176) = 0;
                *(_QWORD *)(v224 + 200) = 0;
                *(_BYTE *)(v224 + 208) = 0;
                *(_QWORD *)(v224 + 232) = 0;
                *(_BYTE *)(v224 + 240) = 0;
                *(_QWORD *)(v224 + 264) = 0;
                *(_BYTE *)(v224 + 272) = 0;
                *(_QWORD *)(v224 + 296) = 0;
                *(_BYTE *)(v224 + 304) = 0;
                *(_QWORD *)(v224 + 328) = 0;
                *(_BYTE *)(v224 + 336) = 0;
                *(_QWORD *)(v224 + 360) = 0;
                *(_BYTE *)(v224 + 368) = 0;
                *(_QWORD *)(v224 + 392) = 0;
                *(_BYTE *)(v224 + 400) = 0;
                *(_QWORD *)(v224 + 424) = 0x800000000LL;
                *(_QWORD *)(v224 + 528) = v224 + 544;
                *(_QWORD *)(v224 + 536) = 0x600000000LL;
                v131 = 0;
              }
              v374 = v130;
            }
            v362 = __PAIR64__(v129, v66);
            LOBYTE(v363) = 1;
            if ( v133 > v132 )
            {
              sub_2237220(v130 + 416, v130 + 432, v133, 12);
              v131 = *((unsigned int *)v130 + 106);
            }
            v134 = *((_QWORD *)v130 + 52) + 12 * v131;
            *(_QWORD *)v134 = v362;
            *(_DWORD *)(v134 + 8) = v363;
            ++*((_DWORD *)v130 + 106);
            goto LABEL_43;
          }
LABEL_42:
          if ( v378 )
          {
            v178 = sub_168B9E0(v372);
            v181 = (__int64)v373;
            if ( v373 )
              v181 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
            v359 = v181;
            v182 = sub_1587BC0(v178, &v359, v176, v177, v179, v180);
            v183 = *v182 + 32LL * v377;
            v184 = *(_QWORD *)(v183 + 8);
            v185 = v183;
            if ( v184 )
            {
              v186 = *(unsigned int *)(v184 + 424);
              v187 = *(unsigned int *)(v184 + 428);
              v188 = v186 + 1;
            }
            else
            {
              v243 = *(_QWORD *)(v183 + 16);
              v244 = *(_DWORD *)(v243 + 14976);
              if ( v244 )
              {
                v278 = (unsigned int)(v244 - 1);
                *(_DWORD *)(v243 + 14976) = v278;
                v184 = *(_QWORD *)(v243 + 8 * v278 + 14848);
                v279 = *(unsigned int *)(v184 + 536);
                *(_BYTE *)v184 = 0;
                v280 = *(_QWORD *)(v184 + 528);
                *(_DWORD *)(v184 + 424) = 0;
                v281 = v280 + (v279 << 6);
                while ( v280 != v281 )
                {
                  while ( 1 )
                  {
                    v281 -= 64;
                    v282 = *(void **)(v281 + 24);
                    if ( v282 == (void *)(v281 + 40) )
                      break;
                    v345 = v280;
                    operator delete(v282);
                    v280 = v345;
                    if ( v345 == v281 )
                      goto LABEL_218;
                  }
                }
LABEL_218:
                v186 = *(unsigned int *)(v184 + 424);
                v187 = *(unsigned int *)(v184 + 428);
                *(_DWORD *)(v184 + 536) = 0;
                v188 = v186 + 1;
              }
              else
              {
                v245 = operator new(0x3A0u);
                v187 = 8;
                v188 = 1;
                v184 = v245;
                *(_BYTE *)v245 = 0;
                *(_QWORD *)(v245 + 96) = v245 + 112;
                *(_QWORD *)(v245 + 128) = v245 + 144;
                *(_QWORD *)(v245 + 160) = v245 + 176;
                *(_QWORD *)(v245 + 192) = v245 + 208;
                *(_QWORD *)(v245 + 224) = v245 + 240;
                *(_QWORD *)(v245 + 256) = v245 + 272;
                *(_QWORD *)(v245 + 288) = v245 + 304;
                *(_QWORD *)(v245 + 320) = v245 + 336;
                *(_QWORD *)(v245 + 352) = v245 + 368;
                *(_QWORD *)(v245 + 384) = v245 + 400;
                *(_QWORD *)(v245 + 416) = v245 + 432;
                *(_QWORD *)(v245 + 104) = 0;
                *(_BYTE *)(v245 + 112) = 0;
                *(_QWORD *)(v245 + 136) = 0;
                *(_BYTE *)(v245 + 144) = 0;
                *(_QWORD *)(v245 + 168) = 0;
                *(_BYTE *)(v245 + 176) = 0;
                *(_QWORD *)(v245 + 200) = 0;
                *(_BYTE *)(v245 + 208) = 0;
                *(_QWORD *)(v245 + 232) = 0;
                *(_BYTE *)(v245 + 240) = 0;
                *(_QWORD *)(v245 + 264) = 0;
                *(_BYTE *)(v245 + 272) = 0;
                *(_QWORD *)(v245 + 296) = 0;
                *(_BYTE *)(v245 + 304) = 0;
                *(_QWORD *)(v245 + 328) = 0;
                *(_BYTE *)(v245 + 336) = 0;
                *(_QWORD *)(v245 + 360) = 0;
                *(_BYTE *)(v245 + 368) = 0;
                *(_QWORD *)(v245 + 392) = 0;
                *(_BYTE *)(v245 + 400) = 0;
                *(_QWORD *)(v245 + 424) = 0x800000000LL;
                *(_QWORD *)(v245 + 528) = v245 + 544;
                *(_QWORD *)(v245 + 536) = 0x600000000LL;
                v186 = 0;
              }
              *(_QWORD *)(v185 + 8) = v184;
            }
            v362 = __PAIR64__(v11, v66);
            LOBYTE(v363) = 1;
            if ( v188 > v187 )
            {
              sub_2237220(v184 + 416, v184 + 432, v188, 12);
              v186 = *(unsigned int *)(v184 + 424);
            }
            v189 = *(_QWORD *)(v184 + 416) + 12 * v186;
            *(_QWORD *)v189 = v362;
            *(_DWORD *)(v189 + 8) = v363;
            ++*(_DWORD *)(v184 + 424);
          }
LABEL_43:
          LODWORD(p_ptr) = 1;
          sub_15F7200(v372);
          v55 = v369;
          goto LABEL_44;
        }
      }
      v58 = (unsigned __int64)(v142 + 432);
      sub_2237220(v142 + 416, v142 + 432, v145, 12);
      v143 = *((unsigned int *)v142 + 106);
      goto LABEL_100;
    }
    if ( a2 >= 0x5FF )
    {
      v17 = 24;
      v18 = 16;
    }
    else
    {
      v17 = 8;
      v18 = 0;
      if ( a2 != 1532 )
        goto LABEL_47;
    }
    v19 = *(_BYTE *)(a3 + 2);
    v336 = v17;
    LOWORD(v362) = 0;
    v365 &= ~1u;
    v364 = 0;
    v363 = 0;
    v20 = *(_QWORD *)(v18 + a3 + 8 * (((v19 & 8) != 0) + 1LL) + 32);
    v21 = sub_168B6C0(a1);
    v22 = v20 & 0xFFFFFFFFFFFFFFFELL;
    if ( (unsigned __int8)sub_C3F220(v22, (__int64)&v362, v21, 0, 0, v23) )
    {
      v27 = (unsigned __int64)v366;
      if ( v367 > 0x40 )
        v27 = *v366;
      if ( v27 <= 5 )
      {
        LOBYTE(p_ptr) = a2 == 1532 && v27 <= 1;
        if ( (_BYTE)p_ptr )
        {
          v190 = sub_EEB7E0(v22, (__int64)&v362, *(double *)si128.m128i_i64);
          sub_168B9F0(v372, a1, v190, 6533, 0);
          LODWORD(v359) = 0;
          v191 = sub_1587D10((__int64)v372, (int *)&v359);
          v368 = (void *)sub_EEC8C0(v22, (__int64)&v359, *(double *)si128.m128i_i64);
          LODWORD(p_ptr) = *(unsigned __int8 *)(sub_1587DB0(v191, (__int64 *)&v368) + 120);
          sub_15F7200(v372);
        }
        else
        {
          v28 = *(_BYTE *)(a3 + 2);
          v371 &= ~1u;
          LOWORD(v368) = 0;
          v369 = 0;
          v370 = 0;
          v29 = *(_QWORD *)(v336 + a3 + 8 * (((v28 & 8) != 0) + 1LL) + 32);
          v30 = sub_168B6C0(a1);
          v31 = v29 & 0xFFFFFFFFFFFFFFFELL;
          if ( !(unsigned __int8)sub_C82410(v31, (__int64)&v368, v30, 0, v32, v33) )
          {
            v168 = sub_C00A40(v31, (__int64)&v368, v34, v35, v36);
            sub_168B9F0(v372, a1, v168, 3798, 0);
            v169 = *(_QWORD *)(v31 + 8);
            if ( v376 )
            {
              sub_AE9DF0(&v374, *(_QWORD *)(v31 + 8), 8u);
              LODWORD(p_ptr) = v376;
            }
            else
            {
              LODWORD(p_ptr) = v378;
              if ( v378 )
              {
                p_ptr = (void **)sub_168B9E0(v372);
                v212 = (__int64)v373;
                if ( v373 )
                  v212 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
                v359 = v212;
                v213 = sub_1587BC0((__int64)p_ptr, &v359, v208, v209, v210, v211);
                sub_AE9DF0((unsigned __int8 **)(*v213 + 32LL * v377 + 8), v169, 8u);
                LODWORD(p_ptr) = v376;
              }
            }
            sub_15F7200(v372);
          }
          if ( v370 > 1 )
            sub_A4F8E0((int *)&v370);
        }
        goto LABEL_20;
      }
      v72 = sub_EEB7E0(v22, (__int64)&v362, *(double *)si128.m128i_i64);
      v73 = (void **)a1;
      sub_168B9F0(v372, a1, v72, 6533, 0);
      if ( v376 )
      {
        v147 = v374;
        if ( !v374 )
        {
          v249 = v375;
          v250 = *(_DWORD *)(v375 + 14976);
          if ( v250 )
          {
            v303 = (unsigned int)(v250 - 1);
            *(_DWORD *)(v375 + 14976) = v303;
            v147 = *(unsigned __int8 **)(v249 + 8 * v303 + 14848);
            v304 = *((unsigned int *)v147 + 134);
            *v147 = 0;
            v305 = *((_QWORD *)v147 + 66);
            *((_DWORD *)v147 + 106) = 0;
            v306 = v305 + (v304 << 6);
            while ( v305 != v306 )
            {
              while ( 1 )
              {
                v306 -= 64;
                v307 = *(void **)(v306 + 24);
                if ( v307 == (void *)(v306 + 40) )
                  break;
                operator delete(v307);
                if ( v305 == v306 )
                  goto LABEL_245;
              }
            }
LABEL_245:
            *((_DWORD *)v147 + 134) = 0;
          }
          else
          {
            v147 = (unsigned __int8 *)operator new(0x3A0u);
            *v147 = 0;
            *((_QWORD *)v147 + 12) = v147 + 112;
            *((_QWORD *)v147 + 16) = v147 + 144;
            *((_QWORD *)v147 + 20) = v147 + 176;
            *((_QWORD *)v147 + 24) = v147 + 208;
            *((_QWORD *)v147 + 28) = v147 + 240;
            *((_QWORD *)v147 + 32) = v147 + 272;
            *((_QWORD *)v147 + 36) = v147 + 304;
            *((_QWORD *)v147 + 40) = v147 + 336;
            *((_QWORD *)v147 + 44) = v147 + 368;
            *((_QWORD *)v147 + 48) = v147 + 400;
            *((_QWORD *)v147 + 52) = v147 + 432;
            *((_QWORD *)v147 + 13) = 0;
            v147[112] = 0;
            *((_QWORD *)v147 + 17) = 0;
            v147[144] = 0;
            *((_QWORD *)v147 + 21) = 0;
            v147[176] = 0;
            *((_QWORD *)v147 + 25) = 0;
            v147[208] = 0;
            *((_QWORD *)v147 + 29) = 0;
            v147[240] = 0;
            *((_QWORD *)v147 + 33) = 0;
            v147[272] = 0;
            *((_QWORD *)v147 + 37) = 0;
            v147[304] = 0;
            *((_QWORD *)v147 + 41) = 0;
            v147[336] = 0;
            *((_QWORD *)v147 + 45) = 0;
            v147[368] = 0;
            *((_QWORD *)v147 + 49) = 0;
            v147[400] = 0;
            *((_QWORD *)v147 + 53) = 0x800000000LL;
            *((_QWORD *)v147 + 66) = v147 + 544;
            *((_QWORD *)v147 + 67) = 0x600000000LL;
          }
          v374 = v147;
        }
        v147[*v147 + 1] = 2;
        v148 = v374;
      }
      else
      {
        if ( !v378 )
        {
          v74 = sub_EEC8C0(v22, (__int64)a1, *(double *)si128.m128i_i64);
          v75 = v74;
          v22 = HIDWORD(v74);
LABEL_66:
          LODWORD(p_ptr) = v378;
          if ( v378 )
          {
            v78 = sub_168B9E0(v372);
            v81 = (__int64)v373;
            if ( v373 )
              v81 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
            v359 = v81;
            v82 = sub_1587BC0(v78, &v359, v76, v77, v79, v80);
            v83 = *v82 + 32LL * v377;
            v84 = *(_QWORD *)(v83 + 8);
            v85 = v83;
            if ( v84 )
            {
              v86 = *(unsigned int *)(v84 + 424);
              v87 = *(unsigned int *)(v84 + 428);
              v88 = v86 + 1;
            }
            else
            {
              v273 = *(_QWORD *)(v83 + 16);
              v274 = *(_DWORD *)(v273 + 14976);
              if ( v274 )
              {
                v331 = (unsigned int)(v274 - 1);
                *(_DWORD *)(v273 + 14976) = v331;
                v84 = *(_QWORD *)(v273 + 8 * v331 + 14848);
                v332 = *(unsigned int *)(v84 + 536);
                *(_BYTE *)v84 = 0;
                v333 = *(_QWORD *)(v84 + 528);
                *(_DWORD *)(v84 + 424) = 0;
                v334 = v333 + (v332 << 6);
                while ( v333 != v334 )
                {
                  while ( 1 )
                  {
                    v334 -= 64;
                    v335 = *(void **)(v334 + 24);
                    if ( v335 == (void *)(v334 + 40) )
                      break;
                    v355 = v333;
                    v353 = v334;
                    operator delete(v335);
                    v334 = v353;
                    v333 = v355;
                    if ( v355 == v353 )
                      goto LABEL_262;
                  }
                }
LABEL_262:
                v86 = *(unsigned int *)(v84 + 424);
                v87 = *(unsigned int *)(v84 + 428);
                *(_DWORD *)(v84 + 536) = 0;
                v88 = v86 + 1;
              }
              else
              {
                v275 = operator new(0x3A0u);
                v87 = 8;
                v88 = 1;
                v84 = v275;
                *(_BYTE *)v275 = 0;
                *(_QWORD *)(v275 + 96) = v275 + 112;
                *(_QWORD *)(v275 + 128) = v275 + 144;
                *(_QWORD *)(v275 + 160) = v275 + 176;
                *(_QWORD *)(v275 + 192) = v275 + 208;
                *(_QWORD *)(v275 + 224) = v275 + 240;
                *(_QWORD *)(v275 + 256) = v275 + 272;
                *(_QWORD *)(v275 + 288) = v275 + 304;
                *(_QWORD *)(v275 + 320) = v275 + 336;
                *(_QWORD *)(v275 + 352) = v275 + 368;
                *(_QWORD *)(v275 + 384) = v275 + 400;
                *(_QWORD *)(v275 + 416) = v275 + 432;
                *(_QWORD *)(v275 + 104) = 0;
                *(_BYTE *)(v275 + 112) = 0;
                *(_QWORD *)(v275 + 136) = 0;
                *(_BYTE *)(v275 + 144) = 0;
                *(_QWORD *)(v275 + 168) = 0;
                *(_BYTE *)(v275 + 176) = 0;
                *(_QWORD *)(v275 + 200) = 0;
                *(_BYTE *)(v275 + 208) = 0;
                *(_QWORD *)(v275 + 232) = 0;
                *(_BYTE *)(v275 + 240) = 0;
                *(_QWORD *)(v275 + 264) = 0;
                *(_BYTE *)(v275 + 272) = 0;
                *(_QWORD *)(v275 + 296) = 0;
                *(_BYTE *)(v275 + 304) = 0;
                *(_QWORD *)(v275 + 328) = 0;
                *(_BYTE *)(v275 + 336) = 0;
                *(_QWORD *)(v275 + 360) = 0;
                *(_BYTE *)(v275 + 368) = 0;
                *(_QWORD *)(v275 + 392) = 0;
                *(_BYTE *)(v275 + 400) = 0;
                *(_QWORD *)(v275 + 424) = 0x800000000LL;
                *(_QWORD *)(v275 + 528) = v275 + 544;
                *(_QWORD *)(v275 + 536) = 0x600000000LL;
                v86 = 0;
              }
              *(_QWORD *)(v85 + 8) = v84;
            }
            v368 = (void *)__PAIR64__(v22, v75);
            LOBYTE(v369) = 1;
            if ( v88 > v87 )
            {
              sub_2237220(v84 + 416, v84 + 432, v88, 12);
              v86 = *(unsigned int *)(v84 + 424);
            }
            v89 = *(_QWORD *)(v84 + 416) + 12 * v86;
            *(_QWORD *)v89 = v368;
            *(_DWORD *)(v89 + 8) = v369;
            LODWORD(p_ptr) = v376;
            ++*(_DWORD *)(v84 + 424);
          }
          goto LABEL_59;
        }
        v194 = sub_168B9E0(v372);
        v197 = v373;
        if ( v373 )
          v197 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
        v73 = &v368;
        v368 = v197;
        v198 = sub_1587BC0(v194, (__int64 *)&v368, v192, v193, v195, v196);
        v199 = *v198 + 32LL * v377;
        v200 = *(unsigned __int8 **)(v199 + 8);
        if ( !v200 )
        {
          v276 = *(_QWORD *)(v199 + 16);
          v277 = *(_DWORD *)(v276 + 14976);
          if ( v277 )
          {
            v326 = (unsigned int)(v277 - 1);
            *(_DWORD *)(v276 + 14976) = v326;
            v200 = *(unsigned __int8 **)(v276 + 8 * v326 + 14848);
            v327 = *((unsigned int *)v200 + 134);
            *v200 = 0;
            v328 = *((_QWORD *)v200 + 66);
            *((_DWORD *)v200 + 106) = 0;
            v329 = v328 + (v327 << 6);
            while ( v328 != v329 )
            {
              while ( 1 )
              {
                v329 -= 64;
                v330 = *(void **)(v329 + 24);
                if ( v330 == (void *)(v329 + 40) )
                  break;
                v352 = v328;
                operator delete(v330);
                v328 = v352;
                if ( v352 == v329 )
                  goto LABEL_257;
              }
            }
LABEL_257:
            *((_DWORD *)v200 + 134) = 0;
          }
          else
          {
            v200 = (unsigned __int8 *)operator new(0x3A0u);
            *v200 = 0;
            *((_QWORD *)v200 + 12) = v200 + 112;
            *((_QWORD *)v200 + 16) = v200 + 144;
            *((_QWORD *)v200 + 20) = v200 + 176;
            *((_QWORD *)v200 + 24) = v200 + 208;
            *((_QWORD *)v200 + 28) = v200 + 240;
            *((_QWORD *)v200 + 32) = v200 + 272;
            *((_QWORD *)v200 + 36) = v200 + 304;
            *((_QWORD *)v200 + 40) = v200 + 336;
            *((_QWORD *)v200 + 44) = v200 + 368;
            *((_QWORD *)v200 + 48) = v200 + 400;
            *((_QWORD *)v200 + 52) = v200 + 432;
            *((_QWORD *)v200 + 13) = 0;
            v200[112] = 0;
            *((_QWORD *)v200 + 17) = 0;
            v200[144] = 0;
            *((_QWORD *)v200 + 21) = 0;
            v200[176] = 0;
            *((_QWORD *)v200 + 25) = 0;
            v200[208] = 0;
            *((_QWORD *)v200 + 29) = 0;
            v200[240] = 0;
            *((_QWORD *)v200 + 33) = 0;
            v200[272] = 0;
            *((_QWORD *)v200 + 37) = 0;
            v200[304] = 0;
            *((_QWORD *)v200 + 41) = 0;
            v200[336] = 0;
            *((_QWORD *)v200 + 45) = 0;
            v200[368] = 0;
            *((_QWORD *)v200 + 49) = 0;
            v200[400] = 0;
            *((_QWORD *)v200 + 53) = 0x800000000LL;
            *((_QWORD *)v200 + 66) = v200 + 544;
            *((_QWORD *)v200 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v199 + 8) = v200;
        }
        v200[*v200 + 1] = 2;
        v148 = *(unsigned __int8 **)(v199 + 8);
      }
      v149 = *v148;
      *v148 = v149 + 1;
      *(_QWORD *)&v148[8 * v149 + 16] = 0;
      v150 = v376;
      v151 = sub_EEC8C0(v22, (__int64)v73, *(double *)si128.m128i_i64);
      v75 = v151;
      v152 = HIDWORD(v151);
      LODWORD(v22) = HIDWORD(v151);
      if ( v150 )
      {
        p_ptr = (void **)v374;
        if ( v374 )
        {
          v153 = *((unsigned int *)v374 + 106);
          v154 = *((unsigned int *)v374 + 107);
          v155 = v153 + 1;
        }
        else
        {
          v246 = v375;
          v247 = *(_DWORD *)(v375 + 14976);
          if ( v247 )
          {
            v298 = (unsigned int)(v247 - 1);
            *(_DWORD *)(v375 + 14976) = v298;
            p_ptr = *(void ***)(v246 + 8 * v298 + 14848);
            v299 = *((unsigned int *)p_ptr + 134);
            v300 = (char *)p_ptr[66];
            *(_BYTE *)p_ptr = 0;
            *((_DWORD *)p_ptr + 106) = 0;
            v299 <<= 6;
            v348 = v300;
            v301 = &v300[v299];
            while ( v348 != v301 )
            {
              while ( 1 )
              {
                v301 -= 64;
                v302 = *((char **)v301 + 3);
                if ( v302 == v301 + 40 )
                  break;
                operator delete(v302);
                if ( v348 == v301 )
                  goto LABEL_238;
              }
            }
LABEL_238:
            v153 = *((unsigned int *)p_ptr + 106);
            v154 = *((unsigned int *)p_ptr + 107);
            *((_DWORD *)p_ptr + 134) = 0;
            v155 = v153 + 1;
          }
          else
          {
            v248 = operator new(0x3A0u);
            v154 = 8;
            v155 = 1;
            p_ptr = (void **)v248;
            *(_BYTE *)v248 = 0;
            *(_QWORD *)(v248 + 96) = v248 + 112;
            *(_QWORD *)(v248 + 128) = v248 + 144;
            *(_QWORD *)(v248 + 160) = v248 + 176;
            *(_QWORD *)(v248 + 192) = v248 + 208;
            *(_QWORD *)(v248 + 224) = v248 + 240;
            *(_QWORD *)(v248 + 256) = v248 + 272;
            *(_QWORD *)(v248 + 288) = v248 + 304;
            *(_QWORD *)(v248 + 320) = v248 + 336;
            *(_QWORD *)(v248 + 352) = v248 + 368;
            *(_QWORD *)(v248 + 384) = v248 + 400;
            *(_QWORD *)(v248 + 416) = v248 + 432;
            *(_QWORD *)(v248 + 104) = 0;
            *(_BYTE *)(v248 + 112) = 0;
            *(_QWORD *)(v248 + 136) = 0;
            *(_BYTE *)(v248 + 144) = 0;
            *(_QWORD *)(v248 + 168) = 0;
            *(_BYTE *)(v248 + 176) = 0;
            *(_QWORD *)(v248 + 200) = 0;
            *(_BYTE *)(v248 + 208) = 0;
            *(_QWORD *)(v248 + 232) = 0;
            *(_BYTE *)(v248 + 240) = 0;
            *(_QWORD *)(v248 + 264) = 0;
            *(_BYTE *)(v248 + 272) = 0;
            *(_QWORD *)(v248 + 296) = 0;
            *(_BYTE *)(v248 + 304) = 0;
            *(_QWORD *)(v248 + 328) = 0;
            *(_BYTE *)(v248 + 336) = 0;
            *(_QWORD *)(v248 + 360) = 0;
            *(_BYTE *)(v248 + 368) = 0;
            *(_QWORD *)(v248 + 392) = 0;
            *(_BYTE *)(v248 + 400) = 0;
            *(_QWORD *)(v248 + 424) = 0x800000000LL;
            *(_QWORD *)(v248 + 528) = v248 + 544;
            *(_QWORD *)(v248 + 536) = 0x600000000LL;
            v153 = 0;
          }
          v374 = (unsigned __int8 *)p_ptr;
        }
        v368 = (void *)__PAIR64__(v152, v75);
        LOBYTE(v369) = 1;
        if ( v155 > v154 )
        {
          sub_2237220(p_ptr + 52, p_ptr + 54, v155, 12);
          v153 = *((unsigned int *)p_ptr + 106);
        }
        v156 = (__int64)p_ptr[52] + 12 * v153;
        *(_QWORD *)v156 = v368;
        *(_DWORD *)(v156 + 8) = v369;
        ++*((_DWORD *)p_ptr + 106);
        LODWORD(p_ptr) = v376;
        goto LABEL_59;
      }
      goto LABEL_66;
    }
    v70 = sub_C00A40(v22, (__int64)&v362, v24, v25, v26);
    sub_168B9F0(v372, a1, v70, 5267, 0);
    v71 = *(_QWORD *)(v22 + 8);
    if ( v376 )
    {
      v171 = v374;
      if ( !v374 )
      {
        v236 = v375;
        v237 = *(_DWORD *)(v375 + 14976);
        if ( v237 )
        {
          v268 = (unsigned int)(v237 - 1);
          *(_DWORD *)(v375 + 14976) = v268;
          v171 = *(unsigned __int8 **)(v236 + 8 * v268 + 14848);
          v269 = *((unsigned int *)v171 + 134);
          *v171 = 0;
          v270 = *((_QWORD *)v171 + 66);
          *((_DWORD *)v171 + 106) = 0;
          v271 = v270 + (v269 << 6);
          while ( v270 != v271 )
          {
            while ( 1 )
            {
              v271 -= 64;
              v272 = *(void **)(v271 + 24);
              if ( v272 == (void *)(v271 + 40) )
                break;
              operator delete(v272);
              if ( v270 == v271 )
                goto LABEL_204;
            }
          }
LABEL_204:
          *((_DWORD *)v171 + 134) = 0;
        }
        else
        {
          v171 = (unsigned __int8 *)operator new(0x3A0u);
          *v171 = 0;
          *((_QWORD *)v171 + 12) = v171 + 112;
          *((_QWORD *)v171 + 16) = v171 + 144;
          *((_QWORD *)v171 + 20) = v171 + 176;
          *((_QWORD *)v171 + 24) = v171 + 208;
          *((_QWORD *)v171 + 28) = v171 + 240;
          *((_QWORD *)v171 + 32) = v171 + 272;
          *((_QWORD *)v171 + 36) = v171 + 304;
          *((_QWORD *)v171 + 40) = v171 + 336;
          *((_QWORD *)v171 + 44) = v171 + 368;
          *((_QWORD *)v171 + 48) = v171 + 400;
          *((_QWORD *)v171 + 52) = v171 + 432;
          *((_QWORD *)v171 + 13) = 0;
          v171[112] = 0;
          *((_QWORD *)v171 + 17) = 0;
          v171[144] = 0;
          *((_QWORD *)v171 + 21) = 0;
          v171[176] = 0;
          *((_QWORD *)v171 + 25) = 0;
          v171[208] = 0;
          *((_QWORD *)v171 + 29) = 0;
          v171[240] = 0;
          *((_QWORD *)v171 + 33) = 0;
          v171[272] = 0;
          *((_QWORD *)v171 + 37) = 0;
          v171[304] = 0;
          *((_QWORD *)v171 + 41) = 0;
          v171[336] = 0;
          *((_QWORD *)v171 + 45) = 0;
          v171[368] = 0;
          *((_QWORD *)v171 + 49) = 0;
          v171[400] = 0;
          *((_QWORD *)v171 + 53) = 0x800000000LL;
          *((_QWORD *)v171 + 66) = v171 + 544;
          *((_QWORD *)v171 + 67) = 0x600000000LL;
        }
        v374 = v171;
      }
      v171[*v171 + 1] = 8;
      v166 = v374;
    }
    else
    {
      LODWORD(p_ptr) = v378;
      if ( !v378 )
      {
LABEL_59:
        sub_15F7200(v372);
LABEL_20:
        if ( v364 > 1 )
          sub_A4F8E0((int *)&v364);
        goto LABEL_48;
      }
      v159 = sub_168B9E0(v372);
      v162 = v373;
      if ( v373 )
        v162 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
      v368 = v162;
      v163 = sub_1587BC0(v159, (__int64 *)&v368, v157, v158, v160, v161);
      v164 = *v163 + 32LL * v377;
      v165 = *(unsigned __int8 **)(v164 + 8);
      if ( !v165 )
      {
        v251 = *(_QWORD *)(v164 + 16);
        v252 = *(_DWORD *)(v251 + 14976);
        if ( v252 )
        {
          v293 = (unsigned int)(v252 - 1);
          *(_DWORD *)(v251 + 14976) = v293;
          v165 = *(unsigned __int8 **)(v251 + 8 * v293 + 14848);
          v294 = *((unsigned int *)v165 + 134);
          v295 = *((_QWORD *)v165 + 66);
          *v165 = 0;
          *((_DWORD *)v165 + 106) = 0;
          v294 <<= 6;
          v347 = v295;
          v296 = v295 + v294;
          while ( v347 != v296 )
          {
            while ( 1 )
            {
              v296 -= 64;
              v297 = *(void **)(v296 + 24);
              if ( v297 == (void *)(v296 + 40) )
                break;
              operator delete(v297);
              if ( v347 == v296 )
                goto LABEL_232;
            }
          }
LABEL_232:
          *((_DWORD *)v165 + 134) = 0;
        }
        else
        {
          v165 = (unsigned __int8 *)operator new(0x3A0u);
          *v165 = 0;
          *((_QWORD *)v165 + 12) = v165 + 112;
          *((_QWORD *)v165 + 16) = v165 + 144;
          *((_QWORD *)v165 + 20) = v165 + 176;
          *((_QWORD *)v165 + 24) = v165 + 208;
          *((_QWORD *)v165 + 28) = v165 + 240;
          *((_QWORD *)v165 + 32) = v165 + 272;
          *((_QWORD *)v165 + 36) = v165 + 304;
          *((_QWORD *)v165 + 40) = v165 + 336;
          *((_QWORD *)v165 + 44) = v165 + 368;
          *((_QWORD *)v165 + 48) = v165 + 400;
          *((_QWORD *)v165 + 52) = v165 + 432;
          *((_QWORD *)v165 + 13) = 0;
          v165[112] = 0;
          *((_QWORD *)v165 + 17) = 0;
          v165[144] = 0;
          *((_QWORD *)v165 + 21) = 0;
          v165[176] = 0;
          *((_QWORD *)v165 + 25) = 0;
          v165[208] = 0;
          *((_QWORD *)v165 + 29) = 0;
          v165[240] = 0;
          *((_QWORD *)v165 + 33) = 0;
          v165[272] = 0;
          *((_QWORD *)v165 + 37) = 0;
          v165[304] = 0;
          *((_QWORD *)v165 + 41) = 0;
          v165[336] = 0;
          *((_QWORD *)v165 + 45) = 0;
          v165[368] = 0;
          *((_QWORD *)v165 + 49) = 0;
          v165[400] = 0;
          *((_QWORD *)v165 + 53) = 0x800000000LL;
          *((_QWORD *)v165 + 66) = v165 + 544;
          *((_QWORD *)v165 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v164 + 8) = v165;
      }
      v165[*v165 + 1] = 8;
      v166 = *(unsigned __int8 **)(v164 + 8);
    }
    v167 = *v166;
    *v166 = v167 + 1;
    *(_QWORD *)&v166[8 * v167 + 16] = v71;
    LODWORD(p_ptr) = v376;
    goto LABEL_59;
  }
  if ( a2 > 0x68F )
  {
    v37 = 2;
    v38 = 2;
    if ( a2 != 1699 )
      goto LABEL_47;
LABEL_23:
    LODWORD(p_ptr) = sub_16EF6C0(*a1, a3, v38, v37);
    if ( !(_BYTE)p_ptr )
    {
      v43 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
      v44 = *(_QWORD *)(v43 + 8);
      if ( sub_F610C0(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL), a3, v39, v40, v41, v42)
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 14 )
      {
        goto LABEL_48;
      }
      v45 = *a1;
      v46 = sub_EEB7E0(v43, a3, *(double *)si128.m128i_i64);
      v47 = v45 + 8;
      sub_168B9F0(v372, v45 + 8, v46, 5243, 0);
      if ( v376 )
      {
        v47 = v44;
        sub_AE9DF0(&v374, v44, 8u);
      }
      else if ( v378 )
      {
        v203 = sub_168B9E0(v372);
        v206 = v373;
        if ( v373 )
          v206 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
        v368 = v206;
        v207 = sub_1587BC0(v203, (__int64 *)&v368, v201, v202, v204, v205);
        v47 = v44;
        sub_AE9DF0((unsigned __int8 **)(*v207 + 32LL * v377 + 8), v44, 8u);
      }
      v48 = (void *)sub_EEC8C0(v43, v47, *(double *)si128.m128i_i64);
      v49 = (__int64 *)&v368;
      v368 = v48;
LABEL_29:
      sub_1587DB0((__int64)v372, v49);
      sub_15F7200(v372);
    }
LABEL_7:
    LODWORD(p_ptr) = 1;
    v15 = (char *)ptr;
    if ( !v361.m128i_i32[1] )
      goto LABEL_8;
    goto LABEL_49;
  }
  if ( a2 >= 0x68E )
    goto LABEL_31;
  if ( a2 != 1658 )
  {
LABEL_47:
    LODWORD(p_ptr) = 0;
    goto LABEL_48;
  }
  v12 = a3;
  LODWORD(p_ptr) = sub_16EF6C0(*a1, a3, 6, 6);
  if ( (_BYTE)p_ptr )
    goto LABEL_7;
  v90 = 0;
  v368 = nullptr;
  v369 = 0;
  do
  {
    v91 = *(_QWORD *)(v90 + a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    *(unsigned __int64 *)((char *)&v362 + v90) = v91;
    v92 = *(_QWORD *)(v91 + 8);
    *(void **)((char *)&v368 + v90) = (void *)v92;
    v337 = v92;
    v354 = v92 & 0xFFFFFFFFFFFFFFF0LL;
    v93 = sub_F610C0(*(_QWORD *)(v92 & 0xFFFFFFFFFFFFFFF0LL), a3, v13, v92 & 0xFFFFFFFFFFFFFFF0LL, v14, v92);
    if ( !v93 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v354 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
    {
      v172 = *a1;
      v173 = sub_EEB7E0(v91, a3, *(double *)si128.m128i_i64);
      v174 = v172 + 8;
      sub_168B9F0(v372, v172 + 8, v173, 5243, 0);
      if ( v376 )
      {
        v174 = v337;
        sub_AE9DF0(&v374, v337, 8u);
      }
      else if ( v378 )
      {
        v214 = sub_168B9E0(v372);
        v218 = v337;
        v219 = v214;
        v220 = (__int64)v373;
        if ( v373 )
        {
          v220 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v373 + 32LL))(
                   v373,
                   v174,
                   *v373,
                   v216,
                   v217,
                   v337);
          v218 = v337;
        }
        v342 = v218;
        v359 = v220;
        v221 = sub_1587BC0(v219, &v359, v215, v216, v217, v218);
        v174 = v342;
        sub_AE9DF0((unsigned __int8 **)(*v221 + 32LL * v377 + 8), v342, 8u);
      }
      v175 = sub_EEC8C0(v91, v174, *(double *)si128.m128i_i64);
      v49 = &v359;
      v359 = v175;
      goto LABEL_29;
    }
    v90 += 8;
  }
  while ( v90 != 16 );
  v338 = v93;
  sub_168B6C0(a1);
  v97 = v368;
  v98 = v369;
  v99 = (__int64 *)((unsigned __int64)v368 & 0xFFFFFFFFFFFFFFF0LL);
  v100 = (__int64 *)(v369 & 0xFFFFFFFFFFFFFFF0LL);
  v101 = (_QWORD *)(*(_QWORD *)&byte_8[(unsigned __int64)v368 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *v101 != *(_QWORD *)(*(_QWORD *)&byte_8[v369 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( ((v102 = sub_F65360(*v99, v12, (__int64)v101, v94, v95, v96), v107 = v338, !v102)
       || (v108 = sub_F65140(*v100, v12, v103, v104, v105, v106), v107 = v338, !v108))
      && ((v343 = v107, v230 = sub_F65140(*v99, v12, v103, v104, v105, v106), v107 = v343, !v230)
       || (v235 = sub_F65360(*v100, v12, v231, v232, v233, v234), v107 = v343, !v235))
      || (v339 = v107,
          v109 = sub_168B6C0(a1),
          v110 = sub_A97D20(v109, *v99),
          v111 = sub_168B6C0(a1),
          v12 = *v100,
          v112 = sub_A97D20(v111, *v100),
          v107 = v339,
          v110 != v112) )
    {
      v113 = *a1;
      v340 = v107;
      v114 = sub_EEB7E0(v363, v12, *(double *)si128.m128i_i64);
      sub_168B9F0(v372, v113 + 8, v114, 5219, 0);
      v115 = v340;
      if ( v376 )
      {
        sub_AE9DF0(&v374, (__int64)v97, 8u);
        v115 = v340;
      }
      else
      {
        if ( !v378 )
        {
LABEL_84:
          v341 = v115;
          sub_15F7200(v372);
          LODWORD(p_ptr) = v341;
          goto LABEL_48;
        }
        v308 = sub_168B9E0(v372);
        v313 = v340;
        v314 = v308;
        v315 = (__int64)v373;
        if ( v373 )
        {
          v315 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
          v313 = v340;
        }
        v349 = v313;
        v359 = v315;
        v316 = sub_1587BC0(v314, &v359, v309, v310, v311, v312);
        sub_AE9DF0((unsigned __int8 **)(*v316 + 32LL * v377 + 8), (__int64)v97, 8u);
        v115 = v349;
      }
      if ( v376 )
      {
        v344 = v115;
        sub_AE9DF0(&v374, v98, 8u);
        v115 = v344;
      }
      else if ( v378 )
      {
        v350 = v115;
        v317 = sub_168B9E0(v372);
        v322 = v350;
        v323 = v317;
        v324 = (__int64)v373;
        if ( v373 )
        {
          v324 = (*(__int64 (__fastcall **)(_QWORD *))(*v373 + 32LL))(v373);
          v322 = v350;
        }
        v351 = v322;
        v359 = v324;
        v325 = sub_1587BC0(v323, &v359, v318, v319, v320, v321);
        sub_AE9DF0((unsigned __int8 **)(*v325 + 32LL * v377 + 8), v98, 8u);
        v115 = v351;
      }
      goto LABEL_84;
    }
  }
LABEL_48:
  v15 = (char *)ptr;
  if ( !v361.m128i_i32[1] )
    goto LABEL_8;
LABEL_49:
  if ( v361.m128i_i32[0] )
  {
    v67 = 0;
    v68 = 8LL * (unsigned int)(v361.m128i_i32[0] - 1) + 8;
    do
    {
      v69 = *(_QWORD **)&v15[v67];
      if ( v69 != (_QWORD *)-8LL && v69 )
      {
        operator delete(*(_QWORD *)&v15[v67], *v69 + 17LL, 8);
        v15 = (char *)ptr;
      }
      v67 += 8;
    }
    while ( v68 != v67 );
  }
LABEL_8:
  free(v15);
  return (unsigned int)p_ptr;
}
