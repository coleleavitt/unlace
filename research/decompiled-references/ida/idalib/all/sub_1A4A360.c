unsigned __int64 __fastcall sub_1A4A360(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  unsigned int v5; // r14d
  _QWORD *v7; // r12
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  int v11; // r15d
  __m128i *p_si128; // r8
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  __int64 v15; // r15
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ebp
  __int64 v20; // r14
  unsigned __int64 result; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // r14d
  __int64 v27; // rbp
  _QWORD *v28; // r14
  size_t v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // r14
  size_t v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r15d
  __int64 v45; // rax
  int v46; // r15d
  __int64 v47; // rax
  int v48; // r15d
  __int64 v49; // rax
  int v50; // r15d
  __int64 v51; // rax
  int v52; // r15d
  __int64 v53; // rax
  int v54; // r15d
  __int64 v55; // rax
  int v56; // r15d
  __int64 v57; // rax
  int v58; // r15d
  __int64 v59; // rax
  int v60; // r15d
  _QWORD *v61; // r14
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  int v69; // r15d
  _QWORD *v70; // r14
  size_t v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  int v78; // r15d
  __int64 v79; // rax
  int v80; // r15d
  __int64 v81; // rax
  int v82; // r15d
  _QWORD *v83; // r14
  size_t v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  int v91; // r15d
  __int64 v92; // rax
  int v93; // r15d
  _QWORD *v94; // r14
  size_t v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  int v102; // r15d
  _QWORD *v103; // r14
  size_t v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  int v111; // r15d
  __int64 v112; // rax
  int v113; // r15d
  __int64 v114; // rax
  int v115; // r15d
  __int64 v116; // rax
  int v117; // r15d
  _QWORD *v118; // r14
  size_t v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  int v126; // r15d
  __int64 v127; // rax
  int v128; // r15d
  __int64 v129; // rax
  int v130; // r15d
  __int64 v131; // rax
  int v132; // r15d
  __int64 v133; // rax
  int v134; // r15d
  char v135; // dl
  char v136; // dl
  _QWORD *v137; // rbp
  size_t v138; // rax
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char v144; // al
  char v145; // dl
  char v146; // dl
  char v147; // dl
  char v148; // dl
  _QWORD *v149; // rbp
  size_t v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  char v156; // al
  char v157; // dl
  char v158; // dl
  char v159; // dl
  char v160; // dl
  _QWORD *v161; // rbp
  size_t v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  _QWORD *v168; // rbp
  size_t v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  size_t v175; // rax
  unsigned __int64 v176; // rax
  _QWORD *v177; // rbp
  size_t v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  unsigned __int64 v184; // rax
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  unsigned __int64 v187; // rax
  __int64 v188; // rax
  unsigned __int64 v189; // rax
  unsigned __int64 v190; // rax
  _QWORD *v191; // rbp
  size_t v192; // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  size_t v202; // rax
  unsigned __int64 v203; // rax
  size_t v204; // rax
  unsigned __int64 v205; // rax
  size_t v206; // rax
  unsigned __int64 v207; // rax
  size_t v208; // rax
  unsigned __int64 v209; // rax
  __int64 v210; // rax
  char v211; // dl
  char v212; // dl
  _QWORD *v213; // r14
  size_t v214; // rax
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  _QWORD *v220; // r14
  size_t v221; // rax
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rax
  int v228; // r15d
  _QWORD *v229; // r14
  size_t v230; // rax
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  _QWORD *v236; // r14
  size_t v237; // rax
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rax
  int v244; // r15d
  unsigned __int64 v245; // rax
  size_t v246; // rax
  unsigned __int64 v247; // rax
  _QWORD *v248; // rbp
  size_t v249; // rax
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rax
  int v256; // r15d
  unsigned __int64 v257; // rax
  unsigned __int64 v258; // rax
  __int64 v259; // rax
  int v260; // r15d
  __int64 v261; // rax
  int v262; // r15d
  unsigned __int64 v263; // rax
  _QWORD *v264; // r14
  size_t v265; // rax
  __int64 v266; // rax
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  _QWORD *v271; // r14
  size_t v272; // rax
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rax
  _QWORD *v279; // r14
  size_t v280; // rax
  __int64 v281; // rax
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  _QWORD *v286; // r14
  size_t v287; // rax
  __int64 v288; // rax
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rax
  int v294; // r15d
  __int64 v295; // rax
  __int64 v296; // rax
  __int64 v297; // rax
  int v298; // r15d
  _QWORD *v299; // rbp
  size_t v300; // rax
  __int64 v301; // rax
  __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  _QWORD *v306; // rbp
  size_t v307; // rax
  __int64 v308; // rax
  __int64 v309; // rdx
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  _QWORD *v313; // rbp
  size_t v314; // rax
  __int64 v315; // rax
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  _QWORD *v320; // rbp
  size_t v321; // rax
  __int64 v322; // rax
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  _QWORD *v327; // rbp
  size_t v328; // rax
  __int64 v329; // rax
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  _QWORD *v334; // rbp
  size_t v335; // rax
  __int64 v336; // rax
  __int64 v337; // rdx
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  _QWORD *v341; // rbp
  size_t v342; // rax
  __int64 v343; // rax
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // r8
  __int64 v347; // r9
  _QWORD *v348; // rbp
  size_t v349; // rax
  __int64 v350; // rax
  __int64 v351; // rdx
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  _QWORD *v355; // rbp
  size_t v356; // rax
  __int64 v357; // rax
  __int64 v358; // rdx
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  _QWORD *v362; // rbp
  size_t v363; // rax
  __int64 v364; // rax
  __int64 v365; // rdx
  __int64 v366; // rcx
  __int64 v367; // r8
  __int64 v368; // r9
  _QWORD *v369; // rbp
  size_t v370; // rax
  __int64 v371; // rax
  __int64 v372; // rdx
  __int64 v373; // rcx
  __int64 v374; // r8
  __int64 v375; // r9
  _QWORD *v376; // rbp
  size_t v377; // rax
  __int64 v378; // rax
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  _QWORD *v383; // rbp
  size_t v384; // rax
  __int64 v385; // rax
  __int64 v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  _QWORD *v390; // rbp
  size_t v391; // rax
  __int64 v392; // rax
  __int64 v393; // rdx
  __int64 v394; // rcx
  __int64 v395; // r8
  __int64 v396; // r9
  _QWORD *v397; // rbp
  size_t v398; // rax
  __int64 v399; // rax
  __int64 v400; // rdx
  __int64 v401; // rcx
  __int64 v402; // r8
  __int64 v403; // r9
  _QWORD *v404; // rbp
  size_t v405; // rax
  __int64 v406; // rax
  __int64 v407; // rdx
  __int64 v408; // rcx
  __int64 v409; // r8
  __int64 v410; // r9
  _QWORD *v411; // rbp
  size_t v412; // rax
  __int64 v413; // rax
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // r8
  __int64 v417; // r9
  _QWORD *v418; // rbp
  size_t v419; // rax
  __int64 v420; // rax
  __int64 v421; // rdx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  unsigned __int64 v425; // rax
  _QWORD *v426; // rbp
  size_t v427; // rax
  __int64 v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rcx
  __int64 v431; // r8
  __int64 v432; // r9
  _QWORD *v433; // rbp
  size_t v434; // rax
  __int64 v435; // rax
  __int64 v436; // rdx
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  unsigned __int64 v440; // rax
  unsigned __int64 v441; // rax
  __m128i *v442; // [rsp+8h] [rbp-110h]
  int v443; // [rsp+1Ch] [rbp-FCh] BYREF
  __m128i si128; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v445; // [rsp+30h] [rbp-E8h] BYREF
  int v446; // [rsp+40h] [rbp-D8h]
  __m128i v447; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v448; // [rsp+60h] [rbp-B8h]
  void *ptr; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v450; // [rsp+78h] [rbp-A0h]
  _BYTE v451[152]; // [rsp+80h] [rbp-98h] BYREF

  v7 = *(_QWORD **)(a1 + 248);
  v448 = 0x1000000008LL;
  v8 = *(_DWORD *)a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAA50);
  v447 = si128;
  v9 = _mm_load_si128((const __m128i *)&xmmword_23AAA60);
  v443 = 1;
  v445 = v9;
  v446 = 16;
  switch ( v8 )
  {
    case 0:
      v248 = *(_QWORD **)(a1 + 240);
      v249 = j__strlen("cl_khr_int64_base_atomics");
      v250 = sub_6F3470((__int64)(v248 + 69), "cl_khr_int64_base_atomics", v249);
      if ( sub_18CAF60(v248, v250, v251, v252, v253, v254) )
      {
        v299 = *(_QWORD **)(a1 + 240);
        v300 = j__strlen("cl_khr_int64_extended_atomics");
        v301 = sub_6F3470((__int64)(v299 + 69), "cl_khr_int64_extended_atomics", v300);
        if ( sub_18CAF60(v299, v301, v302, v303, v304, v305) )
        {
          v433 = *(_QWORD **)(a1 + 240);
          v434 = j__strlen("cl_khr_fp64");
          v435 = sub_6F3470((__int64)(v433 + 69), "cl_khr_fp64", v434);
          if ( sub_18CAF60(v433, v435, v436, v437, v438, v439) )
          {
            v441 = sub_A72BF0((__int64)v7, v7[2351]);
            sub_A6A4A0(a3, v441);
          }
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
        else
        {
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      else
      {
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      break;
    case 1:
      v246 = j__strlen("atomic_flag");
      v247 = sub_1A4A210(a1, "atomic_flag", v246, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v247);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 2:
      v245 = sub_A72BF0((__int64)v7, v7[2350]);
      sub_A6A4A0(a3, v245);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 3:
      v258 = sub_A72BF0((__int64)v7, v7[2379]);
      sub_A6A4A0(a3, v258);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 4:
      v257 = sub_A72BF0((__int64)v7, v7[2340]);
      sub_A6A4A0(a3, v257);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 5:
      v198 = sub_A63D00(v7);
      v199 = sub_A72BF0((__int64)v7, v198);
      sub_A6A4A0(a3, v199);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 6:
      v191 = *(_QWORD **)(a1 + 240);
      v192 = j__strlen("cl_khr_int64_base_atomics");
      v193 = sub_6F3470((__int64)(v191 + 69), "cl_khr_int64_base_atomics", v192);
      if ( sub_18CAF60(v191, v193, v194, v195, v196, v197) )
      {
        v313 = *(_QWORD **)(a1 + 240);
        v314 = j__strlen("cl_khr_int64_extended_atomics");
        v315 = sub_6F3470((__int64)(v313 + 69), "cl_khr_int64_extended_atomics", v314);
        if ( sub_18CAF60(v313, v315, v316, v317, v318, v319) )
        {
          v425 = sub_A72BF0((__int64)v7, v7[2341]);
          sub_A6A4A0(a3, v425);
        }
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      break;
    case 7:
      v188 = sub_A63D20(v7);
      v189 = sub_A72BF0((__int64)v7, v188);
      sub_A6A4A0(a3, v189);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 8:
      v186 = sub_A63CE0(v7);
      v187 = sub_A72BF0((__int64)v7, v186);
      sub_A6A4A0(a3, v187);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 9:
      v190 = sub_A72BF0((__int64)v7, v7[2346]);
      sub_A6A4A0(a3, v190);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 10:
      v184 = sub_A70970(v7);
      v185 = sub_A72BF0((__int64)v7, v184);
      sub_A6A4A0(a3, v185);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 11:
      v177 = *(_QWORD **)(a1 + 240);
      v178 = j__strlen("cl_khr_int64_base_atomics");
      v179 = sub_6F3470((__int64)(v177 + 69), "cl_khr_int64_base_atomics", v178);
      if ( sub_18CAF60(v177, v179, v180, v181, v182, v183) )
      {
        v306 = *(_QWORD **)(a1 + 240);
        v307 = j__strlen("cl_khr_int64_extended_atomics");
        v308 = sub_6F3470((__int64)(v306 + 69), "cl_khr_int64_extended_atomics", v307);
        if ( sub_18CAF60(v306, v308, v309, v310, v311, v312) )
        {
          v440 = sub_A72BF0((__int64)v7, v7[2347]);
          sub_A6A4A0(a3, v440);
        }
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      break;
    case 12:
      sub_A6A4A0(a3, v7[2330]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 13:
      sub_A6A4A0(a3, v7[2331]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 14:
      sub_A6A4A0(a3, v7[2434]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 15:
      v175 = j__strlen("clk_profiling_info");
      v176 = sub_1A4A210(a1, "clk_profiling_info", v175, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v176);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 16:
      v168 = *(_QWORD **)(a1 + 240);
      v169 = j__strlen("cl_khr_fp64");
      v170 = sub_6F3470((__int64)(v168 + 69), "cl_khr_fp64", v169);
      if ( sub_18CAF60(v168, v170, v171, v172, v173, v174) )
        sub_A6A4A0(a3, v7[2351]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 17:
      sub_A6A4A0(a3, v7[2433]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 18:
      sub_A6A4A0(a3, v7[2350]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 19:
      v161 = *(_QWORD **)(a1 + 240);
      v162 = j__strlen("cl_khr_fp16");
      v163 = sub_6F3470((__int64)(v161 + 69), "cl_khr_fp16", v162);
      if ( sub_18CAF60(v161, v163, v164, v165, v166, v167) )
        sub_A6A4A0(a3, v7[2379]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 20:
      sub_A6A4A0(a3, v7[2379]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 21:
      v147 = *(_BYTE *)(a2 + 9);
      if ( v147 == 2 )
      {
        sub_A6A4A0(a3, v7[2408]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v147 == 3 )
      {
        v397 = *(_QWORD **)(a1 + 240);
        v398 = j__strlen("__opencl_c_read_write_images");
        v399 = sub_6F3470((__int64)(v397 + 69), "__opencl_c_read_write_images", v398);
        if ( sub_18CAF60(v397, v399, v400, v401, v402, v403) )
          sub_A6A4A0(a3, v7[2420]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v147 == 1 )
        {
          sub_A6A4A0(a3, v7[2396]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 22:
      v146 = *(_BYTE *)(a2 + 9);
      if ( v146 == 2 )
      {
        sub_A6A4A0(a3, v7[2409]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v146 == 3 )
      {
        v348 = *(_QWORD **)(a1 + 240);
        v349 = j__strlen("__opencl_c_read_write_images");
        v350 = sub_6F3470((__int64)(v348 + 69), "__opencl_c_read_write_images", v349);
        if ( sub_18CAF60(v348, v350, v351, v352, v353, v354) )
          sub_A6A4A0(a3, v7[2421]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v146 == 1 )
        {
          sub_A6A4A0(a3, v7[2397]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 23:
      v160 = *(_BYTE *)(a2 + 9);
      if ( v160 == 2 )
      {
        sub_A6A4A0(a3, v7[2410]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v160 == 3 )
      {
        v418 = *(_QWORD **)(a1 + 240);
        v419 = j__strlen("__opencl_c_read_write_images");
        v420 = sub_6F3470((__int64)(v418 + 69), "__opencl_c_read_write_images", v419);
        if ( sub_18CAF60(v418, v420, v421, v422, v423, v424) )
          sub_A6A4A0(a3, v7[2422]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v160 == 1 )
        {
          sub_A6A4A0(a3, v7[2398]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 24:
      v159 = *(_BYTE *)(a2 + 9);
      if ( v159 == 2 )
      {
        sub_A6A4A0(a3, v7[2411]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v159 == 3 )
      {
        v341 = *(_QWORD **)(a1 + 240);
        v342 = j__strlen("__opencl_c_read_write_images");
        v343 = sub_6F3470((__int64)(v341 + 69), "__opencl_c_read_write_images", v342);
        if ( sub_18CAF60(v341, v343, v344, v345, v346, v347) )
          sub_A6A4A0(a3, v7[2423]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v159 == 1 )
        {
          sub_A6A4A0(a3, v7[2399]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 25:
      v157 = *(_BYTE *)(a2 + 9);
      if ( v157 == 2 )
      {
        sub_A6A4A0(a3, v7[2412]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v157 == 3 )
      {
        v376 = *(_QWORD **)(a1 + 240);
        v377 = j__strlen("__opencl_c_read_write_images");
        v378 = sub_6F3470((__int64)(v376 + 69), "__opencl_c_read_write_images", v377);
        if ( sub_18CAF60(v376, v378, v379, v380, v381, v382) )
          sub_A6A4A0(a3, v7[2424]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v157 == 1 )
        {
          sub_A6A4A0(a3, v7[2400]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 26:
      v148 = *(_BYTE *)(a2 + 9);
      if ( v148 == 2 )
      {
        v369 = *(_QWORD **)(a1 + 240);
        v370 = j__strlen("cl_khr_depth_images");
        v371 = sub_6F3470((__int64)(v369 + 69), "cl_khr_depth_images", v370);
        if ( sub_18CAF60(v369, v371, v372, v373, v374, v375) )
          sub_A6A4A0(a3, v7[2414]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v148 == 3 )
      {
        v362 = *(_QWORD **)(a1 + 240);
        v363 = j__strlen("cl_khr_depth_images");
        v364 = sub_6F3470((__int64)(v362 + 69), "cl_khr_depth_images", v363);
        if ( sub_18CAF60(v362, v364, v365, v366, v367, v368) )
          sub_A6A4A0(a3, v7[2426]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v148 == 1 )
        {
          v149 = *(_QWORD **)(a1 + 240);
          v150 = j__strlen("cl_khr_depth_images");
          v151 = sub_6F3470((__int64)(v149 + 69), "cl_khr_depth_images", v150);
          v156 = sub_18CAF60(v149, v151, v152, v153, v154, v155);
          p_si128 = nullptr;
          if ( v156 )
          {
            sub_A6A4A0(a3, v7[2402]);
            v8 = *(_DWORD *)a2;
            p_si128 = nullptr;
          }
          else
          {
            v8 = *(_DWORD *)a2;
          }
        }
      }
      break;
    case 27:
      v158 = *(_BYTE *)(a2 + 9);
      if ( v158 == 2 )
      {
        sub_A6A4A0(a3, v7[2416]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v158 == 3 )
      {
        v411 = *(_QWORD **)(a1 + 240);
        v412 = j__strlen("__opencl_c_read_write_images");
        v413 = sub_6F3470((__int64)(v411 + 69), "__opencl_c_read_write_images", v412);
        if ( sub_18CAF60(v411, v413, v414, v415, v416, v417) )
          sub_A6A4A0(a3, v7[2428]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v158 == 1 )
        {
          sub_A6A4A0(a3, v7[2404]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 28:
      v145 = *(_BYTE *)(a2 + 9);
      if ( v145 == 2 )
      {
        sub_A6A4A0(a3, v7[2418]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v145 == 3 )
      {
        v390 = *(_QWORD **)(a1 + 240);
        v391 = j__strlen("__opencl_c_read_write_images");
        v392 = sub_6F3470((__int64)(v390 + 69), "__opencl_c_read_write_images", v391);
        if ( sub_18CAF60(v390, v392, v393, v394, v395, v396) )
          sub_A6A4A0(a3, v7[2430]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v145 == 1 )
        {
          sub_A6A4A0(a3, v7[2406]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 29:
      v136 = *(_BYTE *)(a2 + 9);
      if ( v136 == 2 )
      {
        v404 = *(_QWORD **)(a1 + 240);
        v405 = j__strlen("cl_khr_depth_images");
        v406 = sub_6F3470((__int64)(v404 + 69), "cl_khr_depth_images", v405);
        if ( sub_18CAF60(v404, v406, v407, v408, v409, v410) )
          sub_A6A4A0(a3, v7[2413]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v136 == 3 )
      {
        v383 = *(_QWORD **)(a1 + 240);
        v384 = j__strlen("cl_khr_depth_images");
        v385 = sub_6F3470((__int64)(v383 + 69), "cl_khr_depth_images", v384);
        if ( sub_18CAF60(v383, v385, v386, v387, v388, v389) )
          sub_A6A4A0(a3, v7[2425]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v136 == 1 )
        {
          v137 = *(_QWORD **)(a1 + 240);
          v138 = j__strlen("cl_khr_depth_images");
          v139 = sub_6F3470((__int64)(v137 + 69), "cl_khr_depth_images", v138);
          v144 = sub_18CAF60(v137, v139, v140, v141, v142, v143);
          p_si128 = nullptr;
          if ( v144 )
          {
            sub_A6A4A0(a3, v7[2401]);
            v8 = *(_DWORD *)a2;
            p_si128 = nullptr;
          }
          else
          {
            v8 = *(_DWORD *)a2;
          }
        }
      }
      break;
    case 30:
      v135 = *(_BYTE *)(a2 + 9);
      if ( v135 == 2 )
      {
        sub_A6A4A0(a3, v7[2415]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v135 == 3 )
      {
        v355 = *(_QWORD **)(a1 + 240);
        v356 = j__strlen("__opencl_c_read_write_images");
        v357 = sub_6F3470((__int64)(v355 + 69), "__opencl_c_read_write_images", v356);
        if ( sub_18CAF60(v355, v357, v358, v359, v360, v361) )
          sub_A6A4A0(a3, v7[2427]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v135 == 1 )
        {
          sub_A6A4A0(a3, v7[2403]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 31:
      v212 = *(_BYTE *)(a2 + 9);
      if ( v212 == 2 )
      {
        sub_A6A4A0(a3, v7[2417]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v212 == 3 )
      {
        v334 = *(_QWORD **)(a1 + 240);
        v335 = j__strlen("__opencl_c_read_write_images");
        v336 = sub_6F3470((__int64)(v334 + 69), "__opencl_c_read_write_images", v335);
        if ( sub_18CAF60(v334, v336, v337, v338, v339, v340) )
          sub_A6A4A0(a3, v7[2429]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else
      {
        p_si128 = nullptr;
        if ( v212 == 1 )
        {
          sub_A6A4A0(a3, v7[2405]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 32:
      v211 = *(_BYTE *)(a2 + 9);
      if ( v211 == 2 )
      {
        v327 = *(_QWORD **)(a1 + 240);
        v328 = j__strlen("cl_khr_3d_image_writes");
        v329 = sub_6F3470((__int64)(v327 + 69), "cl_khr_3d_image_writes", v328);
        if ( sub_18CAF60(v327, v329, v330, v331, v332, v333) )
          sub_A6A4A0(a3, v7[2419]);
        v8 = *(_DWORD *)a2;
        p_si128 = nullptr;
      }
      else if ( v211 == 3 )
      {
        v320 = *(_QWORD **)(a1 + 240);
        v321 = j__strlen("cl_khr_3d_image_writes");
        v322 = sub_6F3470((__int64)(v320 + 69), "cl_khr_3d_image_writes", v321);
        if ( sub_18CAF60(v320, v322, v323, v324, v325, v326) )
        {
          v426 = *(_QWORD **)(a1 + 240);
          v427 = j__strlen("__opencl_c_read_write_images");
          v428 = sub_6F3470((__int64)(v426 + 69), "__opencl_c_read_write_images", v427);
          if ( sub_18CAF60(v426, v428, v429, v430, v431, v432) )
            sub_A6A4A0(a3, v7[2431]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
        else
        {
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      else
      {
        p_si128 = nullptr;
        if ( v211 == 1 )
        {
          sub_A6A4A0(a3, v7[2407]);
          v8 = *(_DWORD *)a2;
          p_si128 = nullptr;
        }
      }
      break;
    case 33:
      sub_A6A4A0(a3, v7[2340]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 34:
      v210 = sub_A63D00(v7);
      sub_A6A4A0(a3, v210);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 35:
      sub_A6A4A0(a3, v7[2341]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 36:
      v208 = j__strlen("cl_mem_fence_flags");
      v209 = sub_1A4A210(a1, "cl_mem_fence_flags", v208, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v209);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 37:
      v206 = j__strlen("memory_order");
      v207 = sub_1A49F80(a1, "memory_order", v206, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v207);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 38:
      v204 = j__strlen("memory_scope");
      v205 = sub_1A49F80(a1, "memory_scope", v204, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v205);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 39:
      v202 = j__strlen("ndrange_t");
      v203 = sub_1A4A210(a1, "ndrange_t", v202, *(double *)v9.m128i_i64, a5);
      sub_A6A4A0(a3, v203);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 40:
      v201 = sub_A63D20(v7);
      sub_A6A4A0(a3, v201);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 41:
      sub_A6A4A0(a3, v7[2435]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 42:
      sub_A6A4A0(a3, v7[2436]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 43:
      sub_A6A4A0(a3, v7[2432]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 44:
      sub_A6A4A0(a3, v7[2339]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 45:
      v200 = sub_A63CE0(v7);
      sub_A6A4A0(a3, v200);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 46:
      sub_A6A4A0(a3, v7[2344]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 47:
      sub_A6A4A0(a3, v7[2346]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 48:
      v263 = sub_A70970(v7);
      sub_A6A4A0(a3, v263);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 49:
      sub_A6A4A0(a3, v7[2347]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 50:
      sub_A6A4A0(a3, v7[2345]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 51:
      sub_A6A4A0(a3, v7[2329]);
      v8 = *(_DWORD *)a2;
      p_si128 = nullptr;
      break;
    case 52:
      ptr = v451;
      v450 = 0xB00000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v264 = *(_QWORD **)(a1 + 240);
      v265 = j__strlen("cl_khr_fp64");
      v266 = sub_6F3470((__int64)(v264 + 69), "cl_khr_fp64", v265);
      if ( sub_18CAF60(v264, v266, v267, v268, v269, v270) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v271 = *(_QWORD **)(a1 + 240);
      v272 = j__strlen("cl_khr_fp16");
      v273 = sub_6F3470((__int64)(v271 + 69), "cl_khr_fp16", v272);
      if ( sub_18CAF60(v271, v273, v274, v275, v276, v277) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v278 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0xAu )
      {
        sub_2237220(a3, a3 + 16, 11, 8);
        v278 = (unsigned int)v450;
      }
      sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v278);
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = (__m128i *)&v443;
      break;
    case 53:
      ptr = v451;
      v450 = 0xB00000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v229 = *(_QWORD **)(a1 + 240);
      v230 = j__strlen("cl_khr_fp64");
      v231 = sub_6F3470((__int64)(v229 + 69), "cl_khr_fp64", v230);
      if ( sub_18CAF60(v229, v231, v232, v233, v234, v235) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v236 = *(_QWORD **)(a1 + 240);
      v237 = j__strlen("cl_khr_fp16");
      v238 = sub_6F3470((__int64)(v236 + 69), "cl_khr_fp16", v237);
      if ( sub_18CAF60(v236, v238, v239, v240, v241, v242) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v243 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x41u )
      {
        sub_2237220(a3, a3 + 16, 66, 8);
        v243 = (unsigned int)v450;
      }
      v244 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v243);
        if ( !--v244 )
          break;
        v243 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 54:
      ptr = v451;
      v450 = 0xB00000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v213 = *(_QWORD **)(a1 + 240);
      v214 = j__strlen("cl_khr_fp64");
      v215 = sub_6F3470((__int64)(v213 + 69), "cl_khr_fp64", v214);
      if ( sub_18CAF60(v213, v215, v216, v217, v218, v219) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v220 = *(_QWORD **)(a1 + 240);
      v221 = j__strlen("cl_khr_fp16");
      v222 = sub_6F3470((__int64)(v220 + 69), "cl_khr_fp16", v221);
      if ( sub_18CAF60(v220, v222, v223, v224, v225, v226) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v227 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x36u )
      {
        sub_2237220(a3, a3 + 16, 55, 8);
        v227 = (unsigned int)v450;
      }
      v228 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v227);
        if ( !--v228 )
          break;
        v227 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 55:
      ptr = v451;
      v450 = 0x800000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v297 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x2Fu )
      {
        sub_2237220(a3, a3 + 16, 48, 8);
        v297 = (unsigned int)v450;
      }
      v298 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v297);
        if ( !--v298 )
          break;
        v297 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 56:
      ptr = v451;
      v450 = 0x800000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v296 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 7u )
      {
        sub_2237220(a3, a3 + 16, 8, 8);
        v296 = (unsigned int)v450;
      }
      sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v296);
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = (__m128i *)&v443;
      break;
    case 57:
      ptr = v451;
      v450 = 0x800000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v261 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x2Fu )
      {
        sub_2237220(a3, a3 + 16, 48, 8);
        v261 = (unsigned int)v450;
      }
      v262 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v261);
        if ( !--v262 )
          break;
        v261 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 58:
      ptr = v451;
      v450 = 0x800000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v259 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x27u )
      {
        sub_2237220(a3, a3 + 16, 40, 8);
        v259 = (unsigned int)v450;
      }
      v260 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v259);
        if ( !--v260 )
          break;
        v259 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 59:
      ptr = v451;
      v450 = 0x400000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      v5 = v450;
      v295 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 3u )
      {
        sub_2237220(a3, a3 + 16, 4, 8);
        v295 = (unsigned int)v450;
      }
      sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v295);
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = (__m128i *)&v443;
      break;
    case 60:
      ptr = v451;
      v450 = 0x300000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v279 = *(_QWORD **)(a1 + 240);
      v280 = j__strlen("cl_khr_fp64");
      v281 = sub_6F3470((__int64)(v279 + 69), "cl_khr_fp64", v280);
      if ( sub_18CAF60(v279, v281, v282, v283, v284, v285) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v286 = *(_QWORD **)(a1 + 240);
      v287 = j__strlen("cl_khr_fp16");
      v288 = sub_6F3470((__int64)(v286 + 69), "cl_khr_fp16", v287);
      if ( sub_18CAF60(v286, v288, v289, v290, v291, v292) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v293 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x11u )
      {
        sub_2237220(a3, a3 + 16, 18, 8);
        v293 = (unsigned int)v450;
      }
      v294 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v293);
        if ( !--v294 )
          break;
        v293 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 61:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      v5 = v450;
      v133 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v133 = (unsigned int)v450;
      }
      v134 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v133);
        if ( !--v134 )
          break;
        v133 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 62:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      v5 = v450;
      v131 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v131 = (unsigned int)v450;
      }
      v132 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v131);
        if ( !--v132 )
          break;
        v131 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 63:
      v103 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v104 = j__strlen("cl_khr_fp64");
      v105 = sub_6F3470((__int64)(v103 + 69), "cl_khr_fp64", v104);
      if ( sub_18CAF60(v103, v105, v106, v107, v108, v109) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v5 = v450;
      v110 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 3u )
      {
        sub_2237220(a3, a3 + 16, 4, 8);
        v110 = (unsigned int)v450;
      }
      v111 = 4;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v110);
        if ( !--v111 )
          break;
        v110 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &si128;
      break;
    case 64:
      v94 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v95 = j__strlen("cl_khr_fp64");
      v96 = sub_6F3470((__int64)(v94 + 69), "cl_khr_fp64", v95);
      if ( sub_18CAF60(v94, v96, v97, v98, v99, v100) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v5 = v450;
      v101 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v101 = (unsigned int)v450;
      }
      v102 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v101);
        if ( !--v102 )
          break;
        v101 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 65:
      v118 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v119 = j__strlen("cl_khr_fp64");
      v120 = sub_6F3470((__int64)(v118 + 69), "cl_khr_fp64", v119);
      if ( sub_18CAF60(v118, v120, v121, v122, v123, v124) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v5 = v450;
      v125 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v125 = (unsigned int)v450;
      }
      v126 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v125);
        if ( !--v126 )
          break;
        v125 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 66:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v5 = v450;
      v92 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 3u )
      {
        sub_2237220(a3, a3 + 16, 4, 8);
        v92 = (unsigned int)v450;
      }
      v93 = 4;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v92);
        if ( !--v93 )
          break;
        v92 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &si128;
      break;
    case 67:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v5 = v450;
      v116 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v116 = (unsigned int)v450;
      }
      v117 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v116);
        if ( !--v117 )
          break;
        v116 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 68:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v5 = v450;
      v114 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v114 = (unsigned int)v450;
      }
      v115 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v114);
        if ( !--v115 )
          break;
        v114 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 69:
      v70 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v71 = j__strlen("cl_khr_fp16");
      v72 = sub_6F3470((__int64)(v70 + 69), "cl_khr_fp16", v71);
      if ( sub_18CAF60(v70, v72, v73, v74, v75, v76) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v77 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 3u )
      {
        sub_2237220(a3, a3 + 16, 4, 8);
        v77 = (unsigned int)v450;
      }
      v78 = 4;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v77);
        if ( !--v78 )
          break;
        v77 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &si128;
      break;
    case 70:
      v61 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v62 = j__strlen("cl_khr_fp16");
      v63 = sub_6F3470((__int64)(v61 + 69), "cl_khr_fp16", v62);
      if ( sub_18CAF60(v61, v63, v64, v65, v66, v67) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v68 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v68 = (unsigned int)v450;
      }
      v69 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v68);
        if ( !--v69 )
          break;
        v68 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 71:
      v83 = *(_QWORD **)(a1 + 240);
      ptr = v451;
      v450 = 0x100000000LL;
      v84 = j__strlen("cl_khr_fp16");
      v85 = sub_6F3470((__int64)(v83 + 69), "cl_khr_fp16", v84);
      if ( sub_18CAF60(v83, v85, v86, v87, v88, v89) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v90 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v90 = (unsigned int)v450;
      }
      v91 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v90);
        if ( !--v91 )
          break;
        v90 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 72:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      v5 = v450;
      v81 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v81 = (unsigned int)v450;
      }
      v82 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v81);
        if ( !--v82 )
          break;
        v81 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 73:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      v5 = v450;
      v127 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v127 = (unsigned int)v450;
      }
      v128 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v127);
        if ( !--v128 )
          break;
        v127 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 74:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      v5 = v450;
      v79 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v79 = (unsigned int)v450;
      }
      v80 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v79);
        if ( !--v80 )
          break;
        v79 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 75:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      v5 = v450;
      v129 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v129 = (unsigned int)v450;
      }
      v130 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v129);
        if ( !--v130 )
          break;
        v129 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 76:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      v5 = v450;
      v112 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v112 = (unsigned int)v450;
      }
      v113 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v112);
        if ( !--v113 )
          break;
        v112 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 77:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      v5 = v450;
      v59 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v59 = (unsigned int)v450;
      }
      v60 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v59);
        if ( !--v60 )
          break;
        v59 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 78:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      v5 = v450;
      v57 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v57 = (unsigned int)v450;
      }
      v58 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v57);
        if ( !--v58 )
          break;
        v57 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 79:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      v5 = v450;
      v55 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v55 = (unsigned int)v450;
      }
      v56 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v55);
        if ( !--v56 )
          break;
        v55 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 80:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      v5 = v450;
      v53 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v53 = (unsigned int)v450;
      }
      v54 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v53);
        if ( !--v54 )
          break;
        v53 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 81:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      v5 = v450;
      v51 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v51 = (unsigned int)v450;
      }
      v52 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v51);
        if ( !--v52 )
          break;
        v51 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 82:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v49 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v49 = (unsigned int)v450;
      }
      v50 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v49);
        if ( !--v50 )
          break;
        v49 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 83:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v47 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v47 = (unsigned int)v450;
      }
      v48 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v47);
        if ( !--v48 )
          break;
        v47 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 84:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      v5 = v450;
      v45 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 5u )
      {
        sub_2237220(a3, a3 + 16, 6, 8);
        v45 = (unsigned int)v450;
      }
      v46 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v45);
        if ( !--v46 )
          break;
        v45 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 85:
      ptr = v451;
      v450 = 0x100000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      v5 = v450;
      v43 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 4u )
      {
        sub_2237220(a3, a3 + 16, 5, 8);
        v43 = (unsigned int)v450;
      }
      v44 = 5;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v43);
        if ( !--v44 )
          break;
        v43 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v445;
      break;
    case 86:
      ptr = v451;
      v450 = 0x700000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      sub_A6A4A0((__int64)&ptr, v7[2350]);
      v28 = *(_QWORD **)(a1 + 240);
      v29 = j__strlen("cl_khr_fp64");
      v30 = sub_6F3470((__int64)(v28 + 69), "cl_khr_fp64", v29);
      if ( sub_18CAF60(v28, v30, v31, v32, v33, v34) )
        sub_A6A4A0((__int64)&ptr, v7[2351]);
      v35 = *(_QWORD **)(a1 + 240);
      v36 = j__strlen("cl_khr_fp16");
      v37 = sub_6F3470((__int64)(v35 + 69), "cl_khr_fp16", v36);
      if ( sub_18CAF60(v35, v37, v38, v39, v40, v41) )
        sub_A6A4A0((__int64)&ptr, v7[2379]);
      v5 = v450;
      v42 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 6u )
      {
        sub_2237220(a3, a3 + 16, 7, 8);
        v42 = (unsigned int)v450;
      }
      sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v42);
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = (__m128i *)&v443;
      break;
    case 87:
      ptr = v451;
      v450 = 0x400000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2331]);
      sub_A6A4A0((__int64)&ptr, v7[2339]);
      sub_A6A4A0((__int64)&ptr, v7[2340]);
      sub_A6A4A0((__int64)&ptr, v7[2341]);
      v5 = v450;
      v10 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x17u )
      {
        sub_2237220(a3, a3 + 16, 24, 8);
        v10 = (unsigned int)v450;
      }
      v11 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v10);
        if ( !--v11 )
          break;
        v10 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    case 88:
      ptr = v451;
      v450 = 0x400000000LL;
      sub_A6A4A0((__int64)&ptr, v7[2344]);
      sub_A6A4A0((__int64)&ptr, v7[2345]);
      sub_A6A4A0((__int64)&ptr, v7[2346]);
      sub_A6A4A0((__int64)&ptr, v7[2347]);
      v5 = v450;
      v255 = (unsigned int)v450;
      if ( *(_DWORD *)(a3 + 12) <= 0x17u )
      {
        sub_2237220(a3, a3 + 16, 24, 8);
        v255 = (unsigned int)v450;
      }
      v256 = 6;
      while ( 1 )
      {
        sub_1A3A7B0(a3, ptr, (_BYTE *)ptr + 8 * v255);
        if ( !--v256 )
          break;
        v255 = (unsigned int)v450;
      }
      if ( ptr != v451 )
        free(ptr);
      v8 = *(_DWORD *)a2;
      p_si128 = &v447;
      break;
    default:
      p_si128 = nullptr;
      break;
  }
  if ( v8 > 51 )
  {
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = p_si128->m128i_u32[v14 / v5];
          if ( v16 == 1 )
            break;
          v442 = p_si128;
          v17 = sub_A76A60((__int64)v7, *(_QWORD *)(*(_QWORD *)a3 + 8 * v15), v16);
          p_si128 = v442;
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v17;
          v13 = *(_DWORD *)(a3 + 8);
          v15 = v14 + 1;
          v14 = v15;
          if ( (unsigned int)v15 >= v13 )
            goto LABEL_15;
        }
        v15 = v14 + 1;
        v14 = v15;
      }
      while ( (unsigned int)v15 < v13 );
    }
  }
LABEL_15:
  v18 = *(_DWORD *)(a2 + 4);
  if ( v18 > 1 )
  {
    v19 = 0;
    v20 = 0;
    if ( !*(_DWORD *)(a3 + 8) )
    {
LABEL_24:
      result = *(unsigned __int8 *)(a2 + 8);
      goto LABEL_25;
    }
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = sub_A76A60((__int64)v7, *(_QWORD *)(*(_QWORD *)a3 + 8 * v20), v18);
      v20 = (unsigned int)(v19 + 1);
      v19 = v20;
      if ( (unsigned int)v20 >= *(_DWORD *)(a3 + 8) )
        break;
      v18 = *(_DWORD *)(a2 + 4);
    }
  }
  result = *(unsigned __int8 *)(a2 + 8);
  if ( (result & 4) != 0 && *(_DWORD *)(a3 + 8) )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v23) |= 4uLL;
      v23 = (unsigned int)(v22 + 1);
      v22 = v23;
    }
    while ( (unsigned int)v23 < *(_DWORD *)(a3 + 8) );
    goto LABEL_24;
  }
LABEL_25:
  if ( (result & 2) != 0 )
  {
    if ( !*(_DWORD *)(a3 + 8) )
      return result;
    v24 = 0;
    v25 = 0;
    do
    {
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) |= 1uLL;
      v25 = (unsigned int)(v24 + 1);
      v24 = v25;
    }
    while ( (unsigned int)v25 < *(_DWORD *)(a3 + 8) );
    result = *(unsigned __int8 *)(a2 + 8);
  }
  if ( (result & 1) != 0 )
  {
    result = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)result )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v27) = sub_A70E70(
                                                 (__int64)v7,
                                                 *(_QWORD *)(*(_QWORD *)a3 + 8 * v27),
                                                 *(_DWORD *)(a2 + 12));
        result = sub_A70010((__int64)v7, *(_QWORD *)(*(_QWORD *)a3 + 8 * v27));
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v27) = result;
        v27 = (unsigned int)(v26 + 1);
        v26 = v27;
      }
      while ( (unsigned int)v27 < *(_DWORD *)(a3 + 8) );
    }
  }
  return result;
}
