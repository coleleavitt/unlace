_QWORD *__fastcall sub_580DC0(
        __int64 a1,
        __int64 a2,
        __m128i si128,
        __m128i a4,
        __m128i a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  __int64 v14; // r14
  __int64 v15; // rdi
  int v17; // edx
  __int64 p_tp; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 tv_sec; // rdx
  signed __int64 v23; // rax
  bool v24; // zf
  unsigned int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int16 **v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int16 *v34; // rdx
  volatile signed __int32 *v35; // r12
  unsigned int v36; // ebx
  unsigned int v37; // ecx
  __int64 v38; // rbp
  char v39; // r13
  unsigned int v40; // ebx
  volatile signed __int32 *v41; // rax
  __syscall_slong_t v42; // rcx
  volatile signed __int32 *v43; // r15
  unsigned int v44; // eax
  unsigned __int16 v45; // ax
  unsigned int *v46; // rdi
  volatile signed __int32 *v47; // r13
  __int64 v48; // r12
  unsigned int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ebx
  __int64 *v52; // r11
  __int64 v53; // rax
  int v54; // r12d
  volatile signed __int32 *v55; // r14
  __int64 v56; // r13
  __int64 v57; // rcx
  int v58; // ebp
  __int64 v59; // r9
  char *v60; // rax
  unsigned int v61; // r15d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // edx
  unsigned int *v66; // rax
  __m128i v67; // xmm2
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __m128i v70; // xmm2
  int v71; // eax
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  unsigned __int32 v78; // ebp
  unsigned __int32 v79; // r12d
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // r9
  _QWORD *v85; // rbx
  volatile signed __int32 *v86; // r15
  __int64 v87; // r14
  char v88; // al
  __int64 *v89; // r14
  __int64 *v90; // rbp
  unsigned int m; // ebp
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  __m128i v95; // xmm4
  __int16 v96; // dx
  __int64 v97; // rbp
  __int64 v98; // rax
  __int64 v99; // r12
  __int64 **v100; // r14
  __int64 *v101; // r13
  __int64 v102; // rax
  __int64 *v103; // rbx
  __int64 *v104; // r15
  __int64 v105; // rax
  unsigned __int16 v106; // dx
  unsigned __int16 v107; // ax
  unsigned __int32 v108; // r12d
  __int64 *v109; // rax
  __int64 v110; // rax
  unsigned int v111; // ebx
  __int16 v112; // ax
  __int16 v113; // bx
  __int64 v114; // rax
  __int64 *v115; // rbp
  _WORD *v116; // rax
  int v117; // r14d
  unsigned int v118; // ebp
  __int64 v119; // r8
  unsigned __int64 v120; // r15
  __int64 v121; // r14
  _WORD *v122; // rax
  __int64 v123; // r8
  __int64 v124; // rbx
  __int64 v125; // r10
  __int64 *v126; // r15
  __int64 v127; // rax
  __int64 v128; // rbp
  __int64 *v129; // r14
  _QWORD *v130; // rdx
  int v131; // edx
  char v132; // r13
  __int64 v133; // rcx
  FILE *v134; // rdx
  _DWORD *v135; // rax
  __int64 v136; // r14
  unsigned int v137; // ebp
  unsigned __int64 v138; // rax
  unsigned int v139; // ecx
  unsigned int v140; // r12d
  unsigned int v141; // ebx
  char v142; // r15
  __int64 v143; // r13
  unsigned int v144; // edx
  unsigned __int64 v145; // rax
  int v146; // edx
  char v147; // rdx^4
  __int64 v148; // rbx
  unsigned int v149; // edx
  void *v150; // rdi
  size_t v151; // rdx
  bool v152; // al
  __int64 v153; // rdx
  unsigned int v154; // ebx
  unsigned __int64 v155; // rcx
  unsigned __int64 n; // rdi
  __int64 v157; // rax
  const __m128i *v158; // rax
  unsigned int v159; // eax
  int v160; // ebx
  _QWORD *v161; // rax
  __time_t v162; // rax
  _QWORD *v163; // rbx
  char v165; // bl
  unsigned __int16 v166; // bp
  char v167; // r13
  __int64 v168; // rax
  unsigned __int64 v169; // r12
  int v170; // eax
  __int16 v171; // r15
  char v172; // bp
  __int64 v173; // rax
  __int64 v174; // r8
  __int64 v175; // rbx
  _WORD *v176; // rax
  unsigned __int64 v177; // rdx
  __int16 v178; // dx
  __int64 v179; // rbp
  unsigned __int16 v180; // bx
  __int16 v181; // ax
  unsigned __int16 v182; // r10
  unsigned int v183; // ebx
  __int64 v184; // rax
  unsigned __int16 v185; // ax
  __int64 v186; // r13
  volatile signed __int32 *v187; // rbp
  __int64 v188; // rdx
  __int64 *v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rsi
  __int64 v192; // rdi
  __int64 v193; // r8
  unsigned __int16 v194; // ax
  unsigned int v195; // ebp
  unsigned int v196; // eax
  unsigned int v197; // ebx
  __int64 v198; // rdi
  __int64 v199; // rdx
  unsigned int v200; // esi
  __int64 v201; // rdi
  volatile signed __int32 *v202; // rbp
  __int64 v203; // rax
  _QWORD *v204; // rax
  unsigned int v205; // eax
  int v206; // eax
  __int64 v207; // rcx
  __int64 v208; // rbx
  unsigned int v209; // ebp
  _DWORD *v210; // r13
  FILE *v211; // rdx
  _QWORD *v212; // rax
  unsigned int v213; // ebp
  _DWORD *v214; // r13
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rdx
  unsigned int v218; // ebp
  unsigned __int16 v219; // ax
  __int16 v220; // ax
  int v221; // edx
  volatile signed __int32 *v222; // rax
  unsigned __int64 v223; // rax
  unsigned __int64 v224; // r13
  _QWORD *v225; // r10
  __m128i *v226; // r13
  unsigned int v227; // r11d
  unsigned int v228; // edx
  unsigned int v229; // r10d
  __int64 v230; // rdi
  __int64 v231; // r13
  __int64 v232; // rax
  __int64 v233; // rax
  int v234; // edx
  __int64 v235; // rdi
  bool v236; // al
  unsigned __int64 v237; // rcx
  __int64 v238; // r9
  __int64 v239; // r8
  unsigned int v240; // ebx
  __int64 *v241; // rbp
  unsigned __int64 j; // rdi
  __int64 v243; // rax
  __int64 v244; // rdi
  bool v245; // al
  unsigned __int64 v246; // rcx
  __int64 v247; // r10
  __int64 *v248; // r15
  unsigned int v249; // ebx
  _QWORD *i; // rdi
  __int64 v251; // rax
  __int64 v252; // rbx
  unsigned int v253; // eax
  __int64 v254; // rax
  unsigned int v255; // ecx
  unsigned int *v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // rax
  int v260; // edx
  unsigned __int64 *v261; // rax
  __int64 (*v262)(void); // rax
  unsigned __int16 v263; // ax
  char *v264; // rax
  char *v265; // rbx
  unsigned __int16 v266; // ax
  char *v267; // rax
  __m128i *v268; // rax
  __int64 v269; // rdx
  unsigned int v270; // ecx
  volatile signed __int32 *v271; // rdx
  unsigned __int64 v272; // rbx
  unsigned int v273; // r12d
  __int64 v274; // rax
  unsigned int v275; // eax
  unsigned int v276; // eax
  __int64 v277; // rcx
  int v278; // eax
  __int64 v279; // rax
  __int64 v280; // rcx
  __int64 *v281; // rbp
  _WORD *v282; // r15
  int v283; // eax
  void *v284; // rax
  __int64 v285; // rdi
  bool v286; // cc
  unsigned int v287; // eax
  int v288; // ebp
  unsigned __int16 v289; // cx
  unsigned int v290; // eax
  unsigned __int16 v291; // r8
  unsigned __int16 v292; // ax
  unsigned __int16 v293; // r10
  unsigned __int64 v294; // rdx
  unsigned int v295; // eax
  __int16 v296; // r14
  unsigned __int16 *v297; // rax
  int v298; // r15d
  unsigned __int16 *v299; // rsi
  int v300; // r11d
  int v301; // r9d
  unsigned __int16 *v302; // rax
  unsigned __int16 *v303; // r9
  __int64 v304; // rax
  _BYTE *v305; // rax
  __int64 v306; // rax
  __int64 v307; // rcx
  __int64 v308; // rax
  int v309; // ecx
  unsigned int v310; // r8d
  __int64 v311; // rcx
  __int64 v312; // r9
  __int64 v313; // r8
  unsigned __int64 v314; // rsi
  int v315; // eax
  int v316; // eax
  int v317; // ebx
  char **v318; // rdi
  int v319; // ebx
  unsigned int v320; // eax
  unsigned int v321; // r15d
  unsigned __int64 v322; // rax
  unsigned __int64 v323; // rsi
  __int64 *v324; // r8
  __int64 v325; // r9
  __int64 *v326; // r9
  __int64 v327; // rdi
  _WORD *v328; // rax
  __int64 *v329; // r9
  __int16 v330; // ax
  __int8 v331; // r10
  __int64 v332; // rcx
  unsigned __int64 v333; // rbx
  unsigned int v334; // ebp
  __int64 v335; // rdx
  __int64 v336; // r15
  __int64 *v337; // r12
  unsigned int v338; // r14d
  _QWORD *v339; // r8
  _QWORD *v340; // r9
  __int64 v341; // rsi
  __int64 v342; // rdi
  __int64 v343; // rdx
  unsigned __int64 v344; // rcx
  __int64 v345; // r9
  __int64 v346; // r8
  unsigned __int64 k; // rdi
  __int64 v348; // rax
  __int64 v349; // r15
  unsigned int v350; // eax
  __int64 v351; // rcx
  __int64 v352; // rax
  int v353; // ebp
  char *v354; // rax
  unsigned __int64 v355; // [rsp+10h] [rbp-1C8h]
  int v356; // [rsp+20h] [rbp-1B8h]
  unsigned int v357; // [rsp+20h] [rbp-1B8h]
  unsigned int v358; // [rsp+20h] [rbp-1B8h]
  unsigned __int32 v359; // [rsp+20h] [rbp-1B8h]
  __int64 v360; // [rsp+20h] [rbp-1B8h]
  unsigned int v361; // [rsp+20h] [rbp-1B8h]
  __int64 *v362; // [rsp+28h] [rbp-1B0h]
  __int64 *v363; // [rsp+28h] [rbp-1B0h]
  unsigned __int32 v364; // [rsp+28h] [rbp-1B0h]
  unsigned __int32 v365; // [rsp+28h] [rbp-1B0h]
  __int64 v366; // [rsp+28h] [rbp-1B0h]
  char v367; // [rsp+28h] [rbp-1B0h]
  __int64 v368; // [rsp+28h] [rbp-1B0h]
  unsigned int v369; // [rsp+28h] [rbp-1B0h]
  char v370; // [rsp+28h] [rbp-1B0h]
  volatile signed __int32 *v371; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v372; // [rsp+30h] [rbp-1A8h]
  unsigned int v373; // [rsp+30h] [rbp-1A8h]
  unsigned int v374; // [rsp+30h] [rbp-1A8h]
  __m128i v375; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v376; // [rsp+48h] [rbp-190h]
  volatile signed __int32 **v377; // [rsp+50h] [rbp-188h]
  __int64 v378; // [rsp+58h] [rbp-180h]
  __int64 v379; // [rsp+60h] [rbp-178h]
  _QWORD *v380; // [rsp+68h] [rbp-170h]
  _QWORD *v381; // [rsp+70h] [rbp-168h]
  _QWORD *v382; // [rsp+78h] [rbp-160h]
  unsigned int v383; // [rsp+84h] [rbp-154h]
  __m128i *v384; // [rsp+88h] [rbp-150h]
  __time_t v385; // [rsp+90h] [rbp-148h]
  unsigned __int64 v386; // [rsp+98h] [rbp-140h]
  __int64 *v387; // [rsp+A0h] [rbp-138h]
  unsigned int v388; // [rsp+A8h] [rbp-130h]
  unsigned int v389; // [rsp+ACh] [rbp-12Ch]
  __int64 v390; // [rsp+B0h] [rbp-128h]
  struct timespec *v391; // [rsp+B8h] [rbp-120h]
  __int64 *v392; // [rsp+C0h] [rbp-118h]
  unsigned int v393; // [rsp+C8h] [rbp-110h]
  unsigned int v394; // [rsp+CCh] [rbp-10Ch]
  _QWORD *v395; // [rsp+D0h] [rbp-108h]
  bool v396; // [rsp+DAh] [rbp-FEh]
  char v397; // [rsp+DBh] [rbp-FDh]
  unsigned int v398; // [rsp+DCh] [rbp-FCh]
  unsigned __int64 v399; // [rsp+E0h] [rbp-F8h]
  __int128 *v400; // [rsp+E8h] [rbp-F0h]
  unsigned int v401; // [rsp+F0h] [rbp-E8h]
  int v402; // [rsp+F4h] [rbp-E4h]
  unsigned int v403; // [rsp+F8h] [rbp-E0h]
  unsigned int v404; // [rsp+FCh] [rbp-DCh]
  __int64 *v405; // [rsp+100h] [rbp-D8h]
  volatile signed __int32 *v406; // [rsp+108h] [rbp-D0h]
  unsigned __int16 v407; // [rsp+11Eh] [rbp-BAh] BYREF
  __int64 v408; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v409; // [rsp+128h] [rbp-B0h]
  __int64 v410; // [rsp+130h] [rbp-A8h]
  int v411; // [rsp+138h] [rbp-A0h]
  __int128 v412; // [rsp+140h] [rbp-98h] BYREF
  __m128i v413; // [rsp+150h] [rbp-88h] BYREF
  volatile signed __int32 *v414[2]; // [rsp+160h] [rbp-78h] BYREF
  struct timespec tp; // [rsp+170h] [rbp-68h] BYREF
  __m128i v416; // [rsp+180h] [rbp-58h] BYREF
  __m128i v417[4]; // [rsp+190h] [rbp-48h] BYREF

  v14 = a1;
  v15 = *(_QWORD *)(a1 + 1256);
  if ( a12 == 0 || v15 == 0 || (unsigned __int8)sub_57C4D0(v15) && !*(_QWORD *)(v14 + 1264) )
    return nullptr;
  *(_QWORD *)(v14 + 120) = a12;
  v17 = *(_DWORD *)(v14 + 64);
  p_tp = *(_QWORD *)(v14 + 56);
  *(_QWORD *)(v14 + 104) = 0;
  *(_QWORD *)(v14 + 112) = a11;
  *(_QWORD *)(v14 + 168) = 0;
  *(_DWORD *)(v14 + 128) = a13;
  *(_QWORD *)(v14 + 136) = a14;
  sub_55C7B0(v14, p_tp, v17);
  v21 = *(_QWORD *)(v14 + 1424);
  tv_sec = 0;
  v23 = 0;
  *(_DWORD *)(v14 + 1464) = 0;
  *(_DWORD *)(v14 + 1504) = 0;
  *(_DWORD *)(v14 + 1436) = 0;
  if ( v21 )
  {
    p_tp = (__int64)&tp;
    clock_gettime(1, &tp);
    tv_sec = v21 / 0xF4240 + tp.tv_sec;
    v23 = tp.tv_nsec + 1000 * (v21 % 0xF4240);
    if ( v23 > 999999999 )
    {
      v23 -= 1000000000LL;
      ++tv_sec;
    }
  }
  v24 = *(_BYTE *)(v14 + 1509) == 0;
  *(_QWORD *)(v14 + 1408) = tv_sec;
  *(_QWORD *)(v14 + 1416) = v23;
  if ( !v24 )
  {
    if ( !*(_QWORD *)(v14 + 152) && !*(_QWORD *)(v14 + 1400) )
      goto LABEL_89;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v14 + 1392) )
  {
    v32 = *(_QWORD *)(v14 + 1216);
    v19 = *(unsigned int *)(v32 + 8);
    if ( !(_DWORD)v19 )
      goto LABEL_360;
    if ( ***(_WORD ***)v32 == 1 )
    {
      p_tp = 0;
      v197 = sub_56A220(v32, 0);
      if ( !v197 )
      {
        v198 = *(_QWORD *)(v14 + 1256);
        if ( v198 && *(_QWORD *)(v198 + 168) )
        {
          if ( (unsigned __int8)sub_57C4D0(v198) )
          {
            *(_QWORD *)(v14 + 1392) = 0;
          }
          else
          {
            v262 = *(__int64 (**)(void))(*(_QWORD *)(v14 + 1256) + 184LL);
            if ( v262 )
              *(_QWORD *)(v14 + 1392) = v262();
          }
        }
        if ( *(_BYTE *)(v14 + 1508) )
          goto LABEL_214;
        if ( a2 )
        {
          sub_56C560(*(volatile signed __int32 **)a2);
          v199 = *(_QWORD *)(v14 + 96);
          v200 = *(_DWORD *)(a2 + 24);
          v201 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(v14 + 1448) = *(_QWORD *)a2;
          sub_562760(v201, v200, v199, *(_DWORD *)(v14 + 160), v14 + 1456);
          v202 = *(volatile signed __int32 **)a2;
          p_tp = 16;
          *(_DWORD *)(v14 + 1376) = 0;
          *(_QWORD *)(v14 + 1384) = 0;
          sub_55ECB0(v14 + 1368, 16);
          v203 = *(unsigned int *)(v14 + 1376);
          tv_sec = (unsigned int)(v203 + 1);
          v204 = (_QWORD *)(*(_QWORD *)(v14 + 1368) + 16 * v203);
          *(_DWORD *)(v14 + 1376) = tv_sec;
          *v204 = v202;
          v204[1] = 0;
          if ( !(_DWORD)tv_sec )
            sub_55D1C0(v14 + 1368);
          if ( ((unsigned __int8)v202 & 1) == 0 && *((_DWORD *)v202 + 9) )
          {
            p_tp = 16;
            sub_55ECB0(v14 + 1368, 16);
            v259 = *(unsigned int *)(v14 + 1376);
            v260 = v259 + 1;
            v261 = (unsigned __int64 *)(*(_QWORD *)(v14 + 1368) + 16 * v259);
            *(_DWORD *)(v14 + 1376) = v260;
            tv_sec = *(_QWORD *)&v202[-2 * *((unsigned int *)v202 + 9)];
            v261[1] = 0;
            *v261 = tv_sec;
          }
          else
          {
            *(_DWORD *)(v14 + 1376) = 0;
            *(_QWORD *)(v14 + 1384) = 0;
          }
          if ( *(_QWORD *)(v14 + 152) || *(_QWORD *)(v14 + 1400) )
          {
            si128 = _mm_load_si128((const __m128i *)&xmmword_5DE0C0);
            *(_BYTE *)(v14 + 208) = 0;
            *(__m128i *)(v14 + 192) = si128;
            sub_55D530(v14);
            tv_sec = *(_QWORD *)(v14 + 1400);
            if ( tv_sec )
            {
              sub_571530(*(_QWORD *)(v14 + 1448), *(_QWORD *)(v14 + 1256), (FILE *)tv_sec);
              p_tp = *(_QWORD *)(v14 + 1400);
              fputc(10, (FILE *)p_tp);
            }
          }
          v205 = *(_DWORD *)(v14 + 1464);
          if ( v205 )
          {
            do
            {
              tv_sec = *(_QWORD *)(v14 + 1456) + 24LL * v197;
              if ( *(_QWORD *)(v14 + 152) || *(_QWORD *)(v14 + 1400) )
              {
                p_tp = 1024;
                snprintf(
                  (char *)(v14 + 192),
                  0x400u,
                  "different_included_range %u - %u",
                  *(_DWORD *)(tv_sec + 16),
                  *(_DWORD *)(tv_sec + 20));
                sub_55D530(v14);
                v205 = *(_DWORD *)(v14 + 1464);
              }
              ++v197;
            }
            while ( v197 < v205 );
          }
        }
        else
        {
          v24 = *(_QWORD *)(v14 + 152) == 0;
          *(_DWORD *)(v14 + 1376) = 0;
          *(_QWORD *)(v14 + 1384) = 0;
          if ( !v24 || *(_QWORD *)(v14 + 1400) )
          {
            p_tp = 101;
            strcpy((char *)(v14 + 192), "new_parse");
            sub_55D530(v14);
          }
        }
        goto LABEL_9;
      }
    }
  }
  if ( *(_QWORD *)(v14 + 152) || *(_QWORD *)(v14 + 1400) )
  {
LABEL_8:
    strcpy((char *)(v14 + 192), "resume_parsing");
    sub_55D530(v14);
    if ( !*(_BYTE *)(v14 + 1509) )
      goto LABEL_9;
LABEL_89:
    if ( *(_QWORD *)(v14 + 1288) )
      goto LABEL_316;
    goto LABEL_90;
  }
LABEL_9:
  v401 = 0;
  v25 = 0;
  v26 = v14;
  while ( 1 )
  {
    v27 = *(_QWORD *)(v26 + 1216);
    v383 = 0;
    v28 = v27;
    v394 = *(_DWORD *)(v27 + 8);
    if ( v394 )
      break;
    v373 = -1;
LABEL_417:
    v252 = *(_QWORD *)(v26 + 1288);
    if ( v252 )
    {
      if ( (v252 & 1) != 0 )
      {
        v253 = 0;
        if ( (v252 & 0x20) == 0 )
          goto LABEL_420;
LABEL_435:
        v253 = 610;
      }
      else
      {
        if ( (*(_BYTE *)(v252 + 45) & 2) != 0 )
          goto LABEL_435;
        v253 = *(_DWORD *)(v252 + 32);
      }
LABEL_420:
      if ( v253 < v373 )
      {
        v14 = v26;
        sub_56E170(*(_QWORD *)(v26 + 1216), p_tp, tv_sec, v373, v19, v20);
        v252 = *(_QWORD *)(v26 + 1288);
LABEL_429:
        if ( v252 )
        {
          if ( !*(_BYTE *)(v14 + 1509) )
          {
            *(_DWORD *)(v14 + 1248) = 0;
            if ( (v252 & 1) != 0 || !*(_DWORD *)(v252 + 36) || *(_DWORD *)v252 != 1 )
              goto LABEL_330;
            sub_55ECB0(v14 + 1240, 8);
            v257 = *(unsigned int *)(v14 + 1248);
            v258 = *(_QWORD *)(v14 + 1240);
            v206 = v257 + 1;
            *(_DWORD *)(v14 + 1248) = v257 + 1;
            *(_QWORD *)(v258 + 8 * v257) = v252;
LABEL_317:
            if ( v206 )
            {
              do
              {
                if ( !(unsigned __int8)sub_55D430(v14, 1) )
                {
LABEL_280:
                  *(_BYTE *)(v14 + 1509) = 1;
                  return nullptr;
                }
                v207 = (unsigned int)(*(_DWORD *)(v14 + 1248) - 1);
                v208 = *(_QWORD *)(*(_QWORD *)(v14 + 1240) + 8 * v207);
                if ( *(_WORD *)(v208 + 64) )
                {
                  if ( (v208 & 1) != 0 )
                    BUG();
                  v188 = *(unsigned int *)(v208 + 36);
                  v189 = (__int64 *)(v208 - 8 * v188);
                  v190 = *v189;
                  v191 = v189[(unsigned int)(v188 - 1)];
                  if ( (v190 & 1) == 0 )
                  {
                    v192 = *(unsigned __int16 *)(v190 + 64);
                    LODWORD(v193) = 0;
                    v194 = *(_WORD *)(v190 + 64);
                    if ( (v191 & 1) == 0 )
                    {
                      v193 = *(unsigned __int16 *)(v191 + 64);
                      v192 -= v193;
                    }
                    if ( v192 > 0 )
                    {
                      v195 = (v194 - (unsigned int)v193) >> 1;
                      if ( v195 )
                      {
                        while ( 1 )
                        {
                          sub_56C180(v208, v195, *(_QWORD *)(v14 + 1256), v14 + 1240);
                          v196 = v195 >> 4;
                          if ( !(v195 >> 4) )
                            LOBYTE(v196) = 1;
                          if ( !(unsigned __int8)sub_55D430(v14, (unsigned __int8)v196) )
                            goto LABEL_280;
                          v195 >>= 1;
                          if ( !v195 )
                          {
                            LODWORD(v188) = *(_DWORD *)(v208 + 36);
                            LODWORD(v207) = *(_DWORD *)(v14 + 1248) - 1;
                            break;
                          }
                        }
                      }
                    }
                  }
                  *(_DWORD *)(v14 + 1248) = v207;
                  if ( (_DWORD)v188 )
                    goto LABEL_336;
                }
                else
                {
                  LODWORD(v188) = *(_DWORD *)(v208 + 36);
                  *(_DWORD *)(v14 + 1248) = v207;
                  if ( (_DWORD)v188 )
                  {
                    if ( (v208 & 1) != 0 )
                    {
                      v209 = 0;
                      do
                      {
                        v210 = *(_DWORD **)(8LL * v209);
                        if ( ((unsigned __int8)v210 & 1) == 0 && v210[9] && *v210 == 1 )
                        {
                          sub_55ECB0(v14 + 1240, 8);
                          v216 = *(unsigned int *)(v14 + 1248);
                          v217 = *(_QWORD *)(v14 + 1240);
                          *(_DWORD *)(v14 + 1248) = v216 + 1;
                          *(_QWORD *)(v217 + 8 * v216) = v210;
                        }
                        ++v209;
                      }
                      while ( v209 < *(_DWORD *)(v208 + 36) );
                    }
                    else
                    {
LABEL_336:
                      v213 = 0;
                      do
                      {
                        v214 = *(_DWORD **)(v208 + 8 * (v213 - (unsigned __int64)(unsigned int)v188));
                        if ( ((unsigned __int8)v214 & 1) == 0 && v214[9] && *v214 == 1 )
                        {
                          sub_55ECB0(v14 + 1240, 8);
                          v215 = *(unsigned int *)(v14 + 1248);
                          v188 = *(_QWORD *)(v14 + 1240);
                          *(_DWORD *)(v14 + 1248) = v215 + 1;
                          *(_QWORD *)(v188 + 8 * v215) = v214;
                          LODWORD(v188) = *(_DWORD *)(v208 + 36);
                        }
                        ++v213;
                      }
                      while ( v213 < (unsigned int)v188 );
                    }
                    LODWORD(v207) = *(_DWORD *)(v14 + 1248);
                  }
                }
              }
              while ( (_DWORD)v207 );
            }
LABEL_330:
            v24 = *(_QWORD *)(v14 + 152) == 0;
            *(_BYTE *)(v14 + 1509) = 0;
            if ( !v24 || *(_QWORD *)(v14 + 1400) )
            {
              strcpy((char *)(v14 + 192), "done");
              sub_55D530(v14);
              v211 = *(FILE **)(v14 + 1400);
              if ( v211 )
              {
                sub_571530(*(_QWORD *)(v14 + 1288), *(_QWORD *)(v14 + 1256), v211);
                fputc(10, *(FILE **)(v14 + 1400));
              }
            }
            p_tp = *(_QWORD *)(v14 + 1256);
            v212 = sub_57C680(*(_QWORD *)(v14 + 1288), p_tp, *(const void **)(v14 + 96), *(_DWORD *)(v14 + 160));
            *(_QWORD *)(v14 + 1288) = 0;
            v163 = v212;
            goto LABEL_215;
          }
LABEL_316:
          v206 = *(_DWORD *)(v14 + 1248);
          goto LABEL_317;
        }
LABEL_90:
        __assert_fail("self->finished_tree.ptr", "lib/src/./parser.c", 0x8A2u, "ts_parser_parse");
      }
    }
    v254 = *(unsigned int *)(v26 + 1504);
    v255 = *(_DWORD *)(v26 + 1464);
    if ( (unsigned int)v254 < v255 )
    {
      tv_sec = (unsigned int)(v254 + 1);
      v256 = (unsigned int *)(*(_QWORD *)(v26 + 1456) + 24 * v254 + 20);
      while ( v25 >= *v256 )
      {
        *(_DWORD *)(v26 + 1504) = tv_sec;
        v256 += 6;
        if ( v255 == (_DWORD)tv_sec )
          break;
        tv_sec = (unsigned int)(tv_sec + 1);
      }
    }
    p_tp = v394;
    if ( !v394 )
    {
      v14 = v26;
      goto LABEL_429;
    }
  }
LABEL_11:
  LODWORD(v29) = v394;
  v14 = v26;
  v390 = 48LL * v383;
  while ( 1 )
  {
    if ( v383 >= (unsigned int)v29 )
      __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x2E9u, "ts_stack_is_active");
    v30 = (unsigned __int16 **)(*(_QWORD *)v28 + v390);
    if ( *((_DWORD *)v30 + 10) )
    {
      v394 = v29;
      v26 = v14;
LABEL_163:
      if ( ++v383 < (unsigned int)v29 )
        goto LABEL_11;
      v367 = 0;
      v136 = v28;
      v137 = 0;
      v373 = -1;
      LODWORD(v377) = v25;
      do
      {
        p_tp = v137;
        if ( *(_DWORD *)(*(_QWORD *)v136 + 48LL * v137 + 40) == 2 )
        {
          sub_56E7E0((__int64 *)v136, v137);
          v136 = *(_QWORD *)(v26 + 1216);
        }
        else
        {
          v138 = sub_55E200(v136, v137);
          v136 = *(_QWORD *)(v26 + 1216);
          v139 = v138;
          v140 = v138;
          p_tp = HIDWORD(tv_sec);
          if ( v373 <= (unsigned int)v138 )
            v139 = v373;
          v375.m128i_i8[0] = BYTE4(tv_sec);
          if ( BYTE4(tv_sec) )
            v139 = v373;
          v373 = v139;
          if ( v137 )
          {
            v360 = v26;
            v141 = 0;
            v142 = v367;
            v375.m128i_i64[1] = HIDWORD(v138);
            LODWORD(v376) = tv_sec;
            while ( 1 )
            {
              while ( 1 )
              {
                v145 = sub_55E200(v136, v141);
                p_tp = HIDWORD(v145);
                if ( !v147 )
                  break;
                if ( !v375.m128i_i8[0] )
                {
                  if ( v140 >= (unsigned int)v145 )
                    goto LABEL_372;
                  goto LABEL_174;
                }
LABEL_363:
                if ( (unsigned int)v145 < v140 )
                {
                  if ( (v140 - (unsigned int)v145) * (HIDWORD(v145) + 1) > 0x708 )
                    goto LABEL_181;
LABEL_365:
                  v19 = *(_QWORD *)v136;
                  tv_sec = 48LL * v141;
                  v224 = *(_QWORD *)v136 + tv_sec;
                  if ( *(_DWORD *)(v224 + 40)
                    || (v19 += 48LL * v137, *(_DWORD *)(v19 + 40))
                    || (v20 = *(_QWORD *)v224,
                        v225 = *(_QWORD **)v19,
                        ((**(_QWORD **)v19 ^ **(_QWORD **)v224) & 0xFFFFFFFF0000FFFFLL) != 0)
                    || *(_DWORD *)(v20 + 216) != *((_DWORD *)v225 + 54)
                    || (p_tp = *(_QWORD *)(v19 + 24),
                        v244 = *(_QWORD *)(v224 + 24),
                        v382 = *(_QWORD **)v224,
                        v381 = (_QWORD *)v20,
                        LODWORD(v380) = 0,
                        v379 = (__int64)v225,
                        v378 = v19,
                        v245 = sub_5715E0(v244, p_tp),
                        v19 = v378,
                        v247 = v379,
                        tv_sec = (unsigned __int64)v381,
                        v370 = v245,
                        v20 = (__int64)v382,
                        !v245) )
                  {
                    ++v141;
                  }
                  else
                  {
                    if ( *(_WORD *)(v379 + 208) )
                    {
                      v248 = (__int64 *)v378;
                      v249 = (unsigned int)v380;
                      for ( i = v381; ; i = *(_QWORD **)v224 )
                      {
                        v251 = v249++;
                        sub_572A30(
                          (unsigned __int64)i,
                          *(_QWORD *)(v136 + 72),
                          tv_sec,
                          v246,
                          v19,
                          v20,
                          (__int128)_mm_loadu_si128((const __m128i *)(v247 + 24 * v251 + 16)),
                          *(_QWORD *)(v247 + 24 * v251 + 32));
                        v247 = *v248;
                        if ( v249 >= *(unsigned __int16 *)(*v248 + 208) )
                          break;
                      }
                      v20 = *(_QWORD *)v224;
                    }
                    if ( !*(_WORD *)v20 )
                      *(_DWORD *)(v224 + 16) = *(_DWORD *)(v20 + 220);
                    p_tp = v137;
                    v141 = v137--;
                    sub_56E7E0((__int64 *)v136, p_tp);
                    v142 = v370;
                    v136 = *(_QWORD *)(v360 + 1216);
                  }
                  goto LABEL_177;
                }
                if ( v140 >= (unsigned int)v145 )
                {
                  if ( v146 < (int)v376 )
                  {
LABEL_372:
                    v226 = (__m128i *)(*(_QWORD *)v136 + 48LL * v141);
                    tv_sec = 48LL * v137 + *(_QWORD *)v136;
                    if ( v226[2].m128i_i32[2]
                      || *(_DWORD *)(tv_sec + 40)
                      || (v19 = v226->m128i_i64[0],
                          v20 = *(_QWORD *)tv_sec,
                          ((**(_QWORD **)tv_sec ^ *(_QWORD *)v226->m128i_i64[0]) & 0xFFFFFFFF0000FFFFLL) != 0)
                      || *(_DWORD *)(v19 + 216) != *(_DWORD *)(v20 + 216)
                      || (p_tp = *(_QWORD *)(tv_sec + 24),
                          v235 = v226[1].m128i_i64[1],
                          v368 = 48LL * v137 + *(_QWORD *)v136,
                          v381 = (_QWORD *)v226->m128i_i64[0],
                          v380 = (_QWORD *)v19,
                          LODWORD(v379) = 0,
                          v378 = v20,
                          v236 = sub_5715E0(v235, p_tp),
                          tv_sec = v368,
                          (v142 = v236) == 0) )
                    {
                      ++v141;
                      v142 = 1;
                      tp = (struct timespec)_mm_loadu_si128((const __m128i *)tv_sec);
                      v416 = _mm_loadu_si128((const __m128i *)(tv_sec + 16));
                      v417[0] = _mm_loadu_si128((const __m128i *)(tv_sec + 32));
                      *(__m128i *)tv_sec = _mm_loadu_si128(v226);
                      *(__m128i *)(tv_sec + 16) = _mm_loadu_si128(v226 + 1);
                      *(__m128i *)(tv_sec + 32) = _mm_loadu_si128(v226 + 2);
                      *v226 = _mm_load_si128((const __m128i *)&tp);
                      v226[1] = _mm_load_si128(&v416);
                      a5 = _mm_load_si128(v417);
                      v226[2] = a5;
                    }
                    else
                    {
                      v238 = v378;
                      v239 = (__int64)v380;
                      if ( *(_WORD *)(v378 + 208) )
                      {
                        v369 = v137;
                        v240 = v379;
                        v241 = (__int64 *)tv_sec;
                        for ( j = (unsigned __int64)v380; ; j = v226->m128i_i64[0] )
                        {
                          v243 = v240++;
                          sub_572A30(
                            j,
                            *(_QWORD *)(v136 + 72),
                            tv_sec,
                            v237,
                            v239,
                            v238,
                            (__int128)_mm_loadu_si128((const __m128i *)(v238 + 24 * v243 + 16)),
                            *(_QWORD *)(v238 + 24 * v243 + 32));
                          v238 = *v241;
                          if ( v240 >= *(unsigned __int16 *)(*v241 + 208) )
                            break;
                        }
                        v137 = v369;
                        v239 = v226->m128i_i64[0];
                      }
                      if ( !*(_WORD *)v239 )
                        v226[1].m128i_i32[0] = *(_DWORD *)(v239 + 220);
                      p_tp = v137;
                      v141 = v137--;
                      sub_56E7E0((__int64 *)v136, p_tp);
                      v136 = *(_QWORD *)(v360 + 1216);
                    }
                    goto LABEL_177;
                  }
                  goto LABEL_365;
                }
                if ( (v375.m128i_i32[2] + 1) * ((unsigned int)v145 - v140) <= 0x708 )
                  goto LABEL_372;
LABEL_174:
                if ( v141 >= *(_DWORD *)(v136 + 8) )
                  goto LABEL_312;
                v143 = 48LL * v141;
                sub_56CF60(v143 + *(_QWORD *)v136, v136 + 48, *(_QWORD *)(v136 + 72));
                v144 = *(_DWORD *)(v136 + 8);
                if ( v141 >= v144 )
                  goto LABEL_311;
                --v137;
                v142 = 1;
                p_tp = *(_QWORD *)v136 + 48LL * (v141 + 1);
                memmove((void *)(*(_QWORD *)v136 + v143), (const void *)p_tp, 48LL * (v144 - v141 - 1));
                --*(_DWORD *)(v136 + 8);
                v136 = *(_QWORD *)(v360 + 1216);
LABEL_177:
                if ( v141 >= v137 )
                  goto LABEL_184;
              }
              if ( !v375.m128i_i8[0] )
                goto LABEL_363;
              if ( (unsigned int)v145 >= v140 )
                goto LABEL_365;
LABEL_181:
              if ( v137 >= *(_DWORD *)(v136 + 8) )
                goto LABEL_312;
              v148 = 48LL * v137;
              sub_56CF60(v148 + *(_QWORD *)v136, v136 + 48, *(_QWORD *)(v136 + 72));
              v149 = *(_DWORD *)(v136 + 8);
              if ( v137 >= v149 )
                goto LABEL_311;
              v142 = 1;
              v150 = (void *)(*(_QWORD *)v136 + v148);
              v141 = v137;
              v151 = 48LL * (v149 - v137 - 1);
              p_tp = *(_QWORD *)v136 + 48LL * (v137-- + 1);
              memmove(v150, (const void *)p_tp, v151);
              --*(_DWORD *)(v136 + 8);
              v136 = *(_QWORD *)(v360 + 1216);
              if ( v141 >= v137 )
              {
LABEL_184:
                v367 = v142;
                ++v137;
                v26 = v360;
                goto LABEL_380;
              }
            }
          }
          v137 = 1;
        }
LABEL_380:
        v227 = *(_DWORD *)(v136 + 8);
      }
      while ( v137 < v227 );
      v25 = (unsigned int)v377;
      if ( v227 > 6 )
      {
        do
        {
          sub_56CF60(*(_QWORD *)v136 + 288LL, v136 + 48, *(_QWORD *)(v136 + 72));
          v228 = *(_DWORD *)(v136 + 8);
          if ( v228 <= 6 )
            goto LABEL_311;
          p_tp = *(_QWORD *)v136 + 336LL;
          memmove((void *)(*(_QWORD *)v136 + 288LL), (const void *)p_tp, 48LL * (v228 - 7));
          --*(_DWORD *)(v136 + 8);
          v136 = *(_QWORD *)(v26 + 1216);
          v227 = *(_DWORD *)(v136 + 8);
        }
        while ( v227 > 6 );
        v367 = 1;
      }
      if ( v227 )
      {
        v375.m128i_i8[0] = 0;
        v229 = v227;
        v230 = v136;
        v231 = v26;
        LODWORD(v377) = v227;
        v361 = 0;
        LODWORD(v384) = v25;
        while ( 1 )
        {
          v376 = 48LL * v361;
          v232 = *(_QWORD *)v230 + v376;
          if ( *(_DWORD *)(v232 + 40) != 1 )
          {
            v375.m128i_i8[0] = 1;
            ++v361;
            goto LABEL_388;
          }
          if ( v375.m128i_i8[0] || *(_DWORD *)(v231 + 1432) > 5u )
          {
            p_tp = v361;
            sub_56E7E0((__int64 *)v230, v361);
            LODWORD(v377) = (_DWORD)v377 - 1;
            v367 = 1;
            goto LABEL_388;
          }
          if ( *(_QWORD *)(v231 + 152) || *(_QWORD *)(v231 + 1400) )
          {
            snprintf((char *)(v231 + 192), 0x400u, "resume version:%u", v361);
            sub_55D530(v231);
            v233 = *(_QWORD *)(v231 + 1216);
            v229 = *(_DWORD *)(v233 + 8);
            if ( v361 >= v229 )
              sub_55D340(v231);
            v232 = *(_QWORD *)v233 + v376;
            v234 = *(_DWORD *)(*(_QWORD *)v232 + 216LL);
            if ( *(_DWORD *)(v232 + 40) != 1 )
              __assert_fail("head->status == StackStatusPaused", "lib/src/./stack.c", 0x2F6u, "ts_stack_resume");
          }
          else
          {
            v234 = *(_DWORD *)(*(_QWORD *)v232 + 216LL);
          }
          v270 = v234 + 500;
          v271 = *(volatile signed __int32 **)(v232 + 32);
          v32 = v231;
          *(_DWORD *)(v232 + 40) = 0;
          *(_QWORD *)(v232 + 32) = 0;
          p_tp = v361;
          v414[0] = v271;
          v373 = v270;
          LODWORD(v379) = v229;
          sub_573070(v231, v361, 0, si128, a4, a5, a6);
          v272 = *(_QWORD *)(v231 + 1216);
          v133 = *(unsigned int *)(v272 + 8);
          v375.m128i_i32[2] = v133;
          if ( v361 >= (unsigned int)v133 )
            goto LABEL_362;
          v273 = v361;
          v274 = *(_QWORD *)(*(_QWORD *)v272 + v376);
          tv_sec = v272;
          LODWORD(v381) = v379;
          si128 = _mm_loadl_epi64((const __m128i *)(v274 + 4));
          a5 = _mm_shuffle_epi32(si128, 229);
          LODWORD(v378) = *(_DWORD *)(v274 + 12);
          v275 = v133;
          v383 = _mm_cvtsi128_si32(a5);
          LODWORD(v380) = _mm_cvtsi128_si32(si128);
          v385 = si128.m128i_i64[0];
          while ( 1 )
          {
            if ( v375.m128i_i8[0] )
              goto LABEL_492;
            if ( v273 >= v275 )
              goto LABEL_360;
            v285 = *(_QWORD *)(v231 + 1256);
            v281 = (__int64 *)(*(_QWORD *)tv_sec + 48LL * v273);
            v286 = *(_WORD *)(v285 + 12) <= 1u;
            v282 = (_WORD *)*v281;
            v287 = *(unsigned __int16 *)*v281;
            LOWORD(v382) = *(_WORD *)*v281;
            if ( !v286 )
            {
              v388 = v287;
              v288 = 1;
              while ( 1 )
              {
                LODWORD(v379) = (unsigned __int16)v288;
                v292 = sub_562F50(v285, v388, v288);
                v293 = v292;
                if ( !v292 || (_WORD)v382 == v292 )
                  goto LABEL_543;
                v294 = (unsigned __int64)v414[0];
                v285 = *(_QWORD *)(v231 + 1256);
                if ( ((__int64)v414[0] & 1) != 0 )
                {
                  v290 = *(_DWORD *)(v285 + 12);
                  v289 = HIBYTE(LOWORD(v414[0]));
                }
                else
                {
                  if ( *((_DWORD *)v414[0] + 9) )
                    v289 = *((_WORD *)v414[0] + 34);
                  else
                    v289 = *((_WORD *)v414[0] + 20);
                  v290 = *(_DWORD *)(v285 + 12);
                  v291 = v290;
                  if ( v289 > 0xFFFDu )
                    goto LABEL_502;
                }
                v291 = v290;
                if ( v289 >= v290 )
                  __assert_fail("symbol < self->token_count", "lib/src/./language.c", 0x53u, "ts_language_table_entry");
                v295 = *(_DWORD *)(v285 + 24);
                v296 = v293;
                if ( v293 < v295 )
                {
                  v304 = 8LL
                       * *(unsigned __int16 *)(*(_QWORD *)(v285 + 40)
                                             + 2LL * (v293 * *(_DWORD *)(v285 + 4) + (unsigned int)v289));
                }
                else
                {
                  v297 = (unsigned __int16 *)(*(_QWORD *)(v285 + 48)
                                            + 2LL * *(unsigned int *)(*(_QWORD *)(v285 + 56) + 4LL * (v293 - v295)));
                  v298 = *v297;
                  v299 = v297 + 1;
                  if ( (_WORD)v298 )
                  {
                    v300 = 0;
                    while ( 1 )
                    {
                      v301 = v299[1];
                      v302 = v299 + 2;
                      if ( (_WORD)v301 )
                        break;
LABEL_545:
                      ++v300;
                      v299 = v302;
                      if ( v300 == v298 )
                        goto LABEL_546;
                    }
                    v303 = &v299[v301 + 2];
                    while ( v289 != *v302++ )
                    {
                      if ( v302 == v303 )
                        goto LABEL_545;
                    }
                    v304 = 8LL * *v299;
                  }
                  else
                  {
LABEL_546:
                    v304 = 0;
                  }
                }
                v305 = (_BYTE *)(*(_QWORD *)(v285 + 64) + v304);
                if ( *v305 && v305[8] == 1 )
                {
                  tp.tv_sec = v385;
                  LODWORD(tp.tv_nsec) = v378;
                  if ( *(_DWORD *)(v231 + 56) != (_DWORD)v380 )
                  {
                    sub_55C7B0(v231, tp.tv_sec, v378);
                    v294 = (unsigned __int64)v414[0];
                  }
                  v306 = *(unsigned int *)(v231 + 164);
                  if ( (_DWORD)v306 != *(_DWORD *)(v231 + 160)
                    && (_DWORD)v306
                    && (v307 = *(_QWORD *)(v231 + 96) + 24 * v306, *(_DWORD *)(v231 + 56) == *(_DWORD *)(v307 + 16)) )
                  {
                    LODWORD(v308) = *(_DWORD *)(v307 - 4);
                    v332 = *(_QWORD *)(v307 - 16);
                    *(_DWORD *)(v231 + 80) = v308;
                    *(_QWORD *)(v231 + 84) = v332;
                  }
                  else
                  {
                    v308 = *(_QWORD *)(v231 + 56);
                    v309 = *(_DWORD *)(v231 + 64);
                    *(_QWORD *)(v231 + 80) = v308;
                    *(_DWORD *)(v231 + 88) = v309;
                  }
                  v310 = *(_DWORD *)(v231 + 84);
                  v311 = *(unsigned int *)(v231 + 88);
                  v312 = (unsigned int)(v308 - (_DWORD)v380);
                  if ( (unsigned int)v308 < (unsigned int)v380 )
                    v312 = 0;
                  if ( v383 >= v310 )
                  {
                    if ( (unsigned int)v311 < (unsigned int)v378 )
                      v311 = 0;
                    else
                      v311 = (unsigned int)(v311 - v378);
                    v313 = 0;
                  }
                  else
                  {
                    v313 = v310 - v383;
                  }
                  if ( (v294 & 1) != 0 )
                    v314 = HIBYTE(v294);
                  else
                    LODWORD(v314) = *(_DWORD *)(v294 + 16);
                  if ( (v294 & 1) != 0 )
                    v315 = BYTE6(v294);
                  else
                    v315 = *(_DWORD *)(v294 + 4);
                  v316 = v314 + v315;
                  if ( (v294 & 1) != 0 )
                  {
                    v294 >>= 44;
                    v317 = v294 & 0xF;
                  }
                  else
                  {
                    v317 = *(_DWORD *)(v294 + 28);
                  }
                  v318 = *(char ***)(v231 + 1216);
                  LODWORD(v386) = v311;
                  v319 = v316 + v317;
                  v389 = v313;
                  LODWORD(v387) = v312;
                  v320 = sub_56C820(v318, v273, v294, v311, v313, v312);
                  v410 = 0;
                  v321 = v320;
                  v411 = 0;
                  tp.tv_sec = __PAIR64__(v389, (unsigned int)v387);
                  LODWORD(tp.tv_nsec) = v386;
                  v322 = (unsigned __int64)sub_56B600(
                                             (__int64 *)(v231 + 1224),
                                             v379,
                                             __PAIR64__(v389, (unsigned int)v387),
                                             v386,
                                             0,
                                             0,
                                             v319,
                                             0,
                                             0,
                                             0,
                                             0,
                                             *(_QWORD *)(v231 + 1256));
                  v323 = v322;
                  if ( (v322 & 1) != 0 )
                    v323 = v322 | 0x20;
                  else
                    *(_BYTE *)(v322 + 45) |= 2u;
                  v324 = *(__int64 **)(v231 + 1216);
                  if ( v321 >= *((_DWORD *)v324 + 2) )
                    goto LABEL_310;
                  v325 = *v324;
                  v386 = v323;
                  v326 = (__int64 *)(48LL * v321 + v325);
                  v327 = *v326;
                  v387 = v326;
                  v328 = sub_55DDD0(v327, v323, 0, v296, v324 + 6);
                  v329 = v387;
                  if ( !v386 )
                    *((_DWORD *)v387 + 4) = *((_DWORD *)v328 + 55);
                  *v329 = (__int64)v328;
                  if ( ((__int64)v414[0] & 1) != 0 )
                  {
                    v330 = HIBYTE(LOWORD(v414[0]));
                  }
                  else if ( *((_DWORD *)v414[0] + 9) )
                  {
                    v330 = *((_WORD *)v414[0] + 34);
                  }
                  else
                  {
                    v330 = *((_WORD *)v414[0] + 20);
                  }
                  p_tp = v321;
                  v32 = v231;
                  v331 = sub_573070(v231, v321, v330, si128, a4, a5, a6);
                  if ( v331 )
                  {
                    if ( !*(_QWORD *)(v231 + 152) && !*(_QWORD *)(v231 + 1400) )
                    {
LABEL_592:
                      tv_sec = *(_QWORD *)(v231 + 1216);
                      v375.m128i_i8[0] = v331;
                      v275 = *(_DWORD *)(tv_sec + 8);
LABEL_492:
                      if ( v273 < v275 )
                      {
                        v281 = (__int64 *)(*(_QWORD *)tv_sec + 48LL * v273);
                        v282 = (_WORD *)*v281;
                        break;
                      }
LABEL_310:
                      __assert_fail(
                        "(uint32_t)(version) < (&self->heads)->size",
                        "lib/src/./stack.c",
                        0x207u,
                        "ts_stack_push");
                    }
                    v352 = *(_QWORD *)(v231 + 1216);
                    v375.m128i_i8[0] = v331;
                    if ( v321 < *(_DWORD *)(v352 + 8) )
                    {
                      v353 = **(unsigned __int16 **)(*(_QWORD *)v352 + 48LL * v321);
                      v354 = sub_563060(*(_QWORD *)(v231 + 1256), v379);
                      snprintf((char *)(v231 + 192), 0x400u, "recover_with_missing symbol:%s, state:%u", v354, v353);
                      sub_55D530(v231);
                      v331 = v375.m128i_i8[0];
                      goto LABEL_592;
                    }
LABEL_360:
                    sub_55D2E0(v32, p_tp, tv_sec);
                  }
LABEL_543:
                  v285 = *(_QWORD *)(v231 + 1256);
                  if ( (unsigned __int16)++v288 >= (unsigned __int16)*(_DWORD *)(v285 + 12) )
                  {
LABEL_544:
                    tv_sec = *(_QWORD *)(v231 + 1216);
                    v275 = *(_DWORD *)(tv_sec + 8);
                    goto LABEL_492;
                  }
                  continue;
                }
LABEL_502:
                if ( (unsigned __int16)++v288 >= v291 )
                  goto LABEL_544;
              }
            }
            v283 = *(_DWORD *)(tv_sec + 56);
            if ( v283 )
            {
              v276 = v283 - 1;
              v277 = *(_QWORD *)(tv_sec + 48);
              *(_DWORD *)(tv_sec + 56) = v276;
              p_tp = *(_QWORD *)(v277 + 8LL * v276);
            }
            else
            {
              v284 = off_8C52B8(0xE8u);
              tv_sec = *(_QWORD *)(v231 + 1216);
              p_tp = (__int64)v284;
            }
            v278 = 0;
            memset((void *)p_tp, 0, 0xE8u);
            v32 = p_tp + 232;
            *(_DWORD *)(p_tp + 212) = 1;
            if ( v282 )
            {
              v279 = *(_QWORD *)(v282 + 2);
              *(_QWORD *)(p_tp + 16) = v282;
              *(_WORD *)(p_tp + 208) = 1;
              *(_QWORD *)(p_tp + 4) = v279;
              *(_DWORD *)(p_tp + 12) = *((_DWORD *)v282 + 3);
              v280 = *((_QWORD *)v282 + 27);
              *(_DWORD *)(p_tp + 224) = *((_DWORD *)v282 + 56);
              v278 = *((_DWORD *)v282 + 55);
              *(_QWORD *)(p_tp + 216) = v280;
            }
            *((_DWORD *)v281 + 4) = v278;
            *v281 = p_tp;
            if ( v361 != v273 )
              break;
            if ( (unsigned int)v381 >= v375.m128i_i32[2] )
            {
              v333 = tv_sec;
              goto LABEL_583;
            }
            v273 = (unsigned int)v381;
LABEL_490:
            v275 = *(_DWORD *)(tv_sec + 8);
          }
          if ( ++v273 < v375.m128i_i32[2] )
            goto LABEL_490;
          v333 = tv_sec;
          if ( (unsigned int)v381 < v375.m128i_i32[2] )
          {
            v375.m128i_i32[0] = (int)v381;
            v334 = (unsigned int)v381;
            v378 = 48LL * (unsigned int)v381;
            v379 = 48LL * (unsigned int)((_DWORD)v381 + 1);
            while ( 1 )
            {
              v335 = *(_QWORD *)v333;
              v336 = *(_QWORD *)v333 + v376;
              if ( *(_DWORD *)(v336 + 40)
                || (v337 = (__int64 *)(v335 + v378), (v338 = *(_DWORD *)(v335 + v378 + 40)) != 0)
                || (v339 = *(_QWORD **)v336,
                    v340 = (_QWORD *)*v337,
                    ((*(_QWORD *)*v337 ^ **(_QWORD **)v336) & 0xFFFFFFFF0000FFFFLL) != 0)
                || *((_DWORD *)v339 + 54) != *((_DWORD *)v340 + 54)
                || (v341 = v337[3],
                    v342 = *(_QWORD *)(v336 + 24),
                    v382 = *(_QWORD **)v336,
                    v381 = v339,
                    v380 = v340,
                    !sub_5715E0(v342, v341)) )
              {
                __assert_fail("did_merge", "lib/src/./parser.c", 0x5F0u, "ts_parser__handle_error");
              }
              v345 = (__int64)v380;
              v346 = (__int64)v381;
              if ( *((_WORD *)v380 + 104) )
              {
                for ( k = (unsigned __int64)v381; ; k = *(_QWORD *)v336 )
                {
                  v348 = v338++;
                  sub_572A30(
                    k,
                    *(_QWORD *)(v333 + 72),
                    v343,
                    v344,
                    v346,
                    v345,
                    (__int128)_mm_loadu_si128((const __m128i *)(v345 + 24 * v348 + 16)),
                    *(_QWORD *)(v345 + 24 * v348 + 32));
                  v345 = *v337;
                  if ( v338 >= *(unsigned __int16 *)(*v337 + 208) )
                    break;
                }
                v346 = *(_QWORD *)v336;
              }
              if ( !*(_WORD *)v346 )
                *(_DWORD *)(v336 + 16) = *(_DWORD *)(v346 + 220);
              if ( v334 >= *(_DWORD *)(v333 + 8) )
                break;
              v349 = v378;
              sub_56CF60(v378 + *(_QWORD *)v333, v333 + 48, *(_QWORD *)(v333 + 72));
              v350 = *(_DWORD *)(v333 + 8);
              if ( v334 >= v350 )
                goto LABEL_311;
              memmove(
                (void *)(*(_QWORD *)v333 + v349),
                (const void *)(*(_QWORD *)v333 + v379),
                48LL * (v350 - 1 - v334));
              --*(_DWORD *)(v333 + 8);
              v333 = *(_QWORD *)(v231 + 1216);
              if ( v375.m128i_i32[2] == ++v375.m128i_i32[0] )
                goto LABEL_583;
            }
LABEL_312:
            __assert_fail(
              "(uint32_t)(version) < (&self->heads)->size",
              "lib/src/./stack.c",
              0x2A0u,
              "ts_stack_remove_version");
          }
LABEL_583:
          sub_56E0C0(
            (_QWORD *)v333,
            v361,
            16,
            *(double *)si128.m128i_i64,
            *(double *)a4.m128i_i64,
            *(double *)a5.m128i_i64,
            a6);
          if ( ((__int64)v414[0] & 1) == 0 && *((_DWORD *)v414[0] + 9) )
            sub_56CC20(v231, v414, 0, v231 + 1368);
          p_tp = v361;
          sub_5743F0(
            v231,
            v361,
            (unsigned __int64)v414[0],
            v351,
            si128,
            *(double *)a4.m128i_i64,
            *(double *)a5.m128i_i64,
            a6);
          tv_sec = *(_QWORD *)(v231 + 1400);
          if ( tv_sec )
          {
            sub_56A7C0(*(_QWORD *)(v231 + 1216), *(_QWORD *)(v231 + 1256), (FILE *)tv_sec);
            p_tp = 1;
            fwrite("\n\n", 1u, 2u, *(FILE **)(v231 + 1400));
          }
          ++v361;
          v375.m128i_i8[0] = 1;
LABEL_388:
          if ( v361 >= (unsigned int)v377 )
          {
            v25 = (unsigned int)v384;
            v26 = v231;
            break;
          }
          v230 = *(_QWORD *)(v231 + 1216);
          v229 = *(_DWORD *)(v230 + 8);
          if ( v361 >= v229 )
            __assert_fail(
              "(uint32_t)(version) < (&self->heads)->size",
              "lib/src/./stack.c",
              0x2F1u,
              "ts_stack_is_paused");
        }
      }
      if ( v367 && (*(_QWORD *)(v26 + 152) || *(_QWORD *)(v26 + 1400)) )
      {
        strcpy((char *)(v26 + 192), "condense");
        sub_55D530(v26);
        tv_sec = *(_QWORD *)(v26 + 1400);
        if ( tv_sec )
        {
          sub_56A7C0(*(_QWORD *)(v26 + 1216), *(_QWORD *)(v26 + 1256), (FILE *)tv_sec);
          p_tp = 1;
          fwrite("\n\n", 1u, 2u, *(FILE **)(v26 + 1400));
        }
      }
      goto LABEL_417;
    }
    if ( *(_QWORD *)(v14 + 152) || *(_QWORD *)(v14 + 1400) )
    {
      p_tp = 1024;
      v31 = v383;
      snprintf(
        (char *)(v14 + 192),
        0x400u,
        "process version:%u, version_count:%u, state:%d, row:%u, col:%u",
        v383,
        v29,
        **v30,
        *((_DWORD *)*v30 + 2),
        *((_DWORD *)*v30 + 3));
      v32 = v14;
      sub_55D530(v14);
      v33 = *(_QWORD *)(v14 + 1216);
      tv_sec = v355;
      if ( v31 >= *(_DWORD *)(v33 + 8) )
        goto LABEL_360;
      v30 = (unsigned __int16 **)(*(_QWORD *)v33 + v390);
    }
    v34 = *v30;
    si128 = 0;
    v408 = 0;
    v35 = (volatile signed __int32 *)v30[3];
    v412 = 0;
    v36 = *v34;
    v37 = *((_DWORD *)v34 + 1);
    v407 = *v34;
    v393 = v37;
    if ( v394 == 1 )
    {
      p_tp = v383;
      v46 = (unsigned int *)v14;
      v400 = &v412;
      v408 = sub_572310(
               v14,
               v383,
               &v407,
               v37,
               (__int64)v35,
               (__int64)&v412,
               0.0,
               *(double *)a4.m128i_i64,
               *(double *)a5.m128i_i64,
               a6);
      if ( v408 )
      {
        v39 = 1;
        goto LABEL_32;
      }
      v36 = v407;
    }
    v38 = *(_QWORD *)(v14 + 1344);
    if ( !v38 || v393 != *(_DWORD *)(v14 + 1360) || !sub_5715E0(*(_QWORD *)(v14 + 1352), (__int64)v35) )
      goto LABEL_20;
    v185 = *(unsigned __int8 *)(v14 + 1345);
    if ( (v38 & 1) == 0 )
      v185 = *(_WORD *)(v38 + 40);
    v186 = *(_QWORD *)(v14 + 1256);
    v400 = &v412;
    sub_562CE0(v186, v36, v185, (__int64)&v412);
    p_tp = v36;
    v187 = *(volatile signed __int32 **)(v14 + 1344);
    if ( !sub_55DA00(v186, v36, (unsigned __int64)v187, (__int64)&v412)
      || (v46 = (unsigned int *)v187, sub_56C560(v187), (v408 = *(_QWORD *)(v14 + 1344)) == 0) )
    {
LABEL_20:
      v39 = 0;
      goto LABEL_21;
    }
    v39 = 0;
LABEL_32:
    v397 = v39;
    v47 = v35;
    v48 = v14;
    v377 = v414;
LABEL_33:
    tv_sec = *(_QWORD *)(v48 + 1480);
    v49 = *(_DWORD *)(v48 + 1436) + 1;
    if ( v49 > 0x63 )
    {
      *(_DWORD *)(v48 + 1436) = 0;
      if ( tv_sec )
      {
        *(_DWORD *)(v48 + 1496) = v393;
        *(_BYTE *)(v48 + 1500) = *(_BYTE *)(v48 + 1510);
      }
LABEL_202:
      v161 = *(_QWORD **)(v48 + 1440);
      if ( v161 && *v161 )
      {
LABEL_211:
        v14 = v48;
        if ( v408 )
        {
          p_tp = v408;
          sub_56C9A0(v48 + 1224, (volatile signed __int32 *)v408);
        }
        if ( *(_BYTE *)(v48 + 1508) )
          goto LABEL_214;
        return nullptr;
      }
      if ( *(_OWORD *)(v48 + 1408) != 0 )
      {
        v46 = (unsigned int *)(&dword_0 + 1);
        clock_gettime(1, &tp);
        tv_sec = tp.tv_sec;
        v162 = *(_QWORD *)(v48 + 1408);
        p_tp = tp.tv_nsec;
        v42 = *(_QWORD *)(v48 + 1416);
        if ( tp.tv_sec > v162 || tp.tv_nsec > v42 && tp.tv_sec == v162 )
          goto LABEL_211;
        tv_sec = *(_QWORD *)(v48 + 1480);
      }
      if ( tv_sec )
      {
        v46 = (unsigned int *)(v48 + 1488);
        if ( ((unsigned __int8 (__fastcall *)(__int64))tv_sec)(v48 + 1488) )
          goto LABEL_211;
      }
      goto LABEL_37;
    }
    *(_DWORD *)(v48 + 1436) = v49;
    if ( tv_sec )
    {
      *(_DWORD *)(v48 + 1496) = v393;
      v42 = *(unsigned __int8 *)(v48 + 1510);
      *(_BYTE *)(v48 + 1500) = v42;
    }
    if ( !v49 )
      goto LABEL_202;
LABEL_37:
    if ( !DWORD2(v412) )
      goto LABEL_248;
    v50 = 0;
    v51 = -1;
    v52 = (__int64 *)v412;
    v392 = (__int64 *)(v412 + 8LL * DWORD2(v412));
    v384 = &v413;
    v379 = v48 + 1312;
    v53 = v48;
    v54 = DWORD2(v412);
    v55 = v47;
    v56 = v53;
LABEL_39:
    v58 = *((unsigned __int8 *)v52 + 1);
    v59 = *((unsigned __int16 *)v52 + 3);
    v409 = *v52;
    v57 = (unsigned __int8)v409;
    if ( (_BYTE)v409 == 2 )
    {
      v14 = v56;
      if ( *(_QWORD *)(v56 + 152) || *(_QWORD *)(v56 + 1400) )
      {
        *(_DWORD *)(v56 + 192) = 1701012321;
        *(_DWORD *)(v56 + 195) = (_DWORD)&unk_747065;
        sub_55D530(v56);
      }
      p_tp = v383;
      v32 = v56;
      sub_56FE70(v56, v383, v408, *(double *)si128.m128i_i64, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
      goto LABEL_154;
    }
    if ( (unsigned __int8)v409 > 2u )
    {
      if ( (_BYTE)v409 == 3 )
      {
        v14 = v56;
        v132 = v397;
        if ( (v408 & 1) == 0 && *(_DWORD *)(v408 + 36) )
          sub_56CC20(v14, (volatile signed __int32 **)&v408, 0, v14 + 1368);
        p_tp = v383;
        v32 = v14;
        sub_5743F0(v14, v383, v408, v57, si128, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6);
        if ( v132 )
          goto LABEL_245;
        goto LABEL_154;
      }
      break;
    }
    if ( (_BYTE)v409 )
    {
      LODWORD(v380) = *((unsigned __int16 *)v52 + 1);
      v396 = v408 == 0;
      if ( *(_QWORD *)(v56 + 152) || *(_QWORD *)(v56 + 1400) )
      {
        v362 = v52;
        v356 = v59;
        v60 = sub_563060(*(_QWORD *)(v56 + 1256), (unsigned __int16)v380);
        snprintf((char *)(v56 + 192), 0x400u, "reduce sym:%s, child_count:%u", v60, v58);
        sub_55D530(v56);
        v52 = v362;
        LODWORD(v59) = v356;
      }
      v46 = *(unsigned int **)(v56 + 1216);
      v363 = v52;
      v357 = v59;
      LODWORD(v385) = SWORD2(v409);
      v61 = v46[2];
      LODWORD(tp.tv_sec) = v58;
      v391 = &tp;
      v62 = sub_56D150(
              v46,
              v383,
              &tp,
              v58,
              *(double *)si128.m128i_i64,
              *(double *)a4.m128i_i64,
              *(double *)a5.m128i_i64,
              a6);
      v59 = v357;
      v52 = v363;
      v382 = (_QWORD *)v62;
      v63 = *(_QWORD *)(v56 + 1216);
      p_tp = v64;
      v375.m128i_i32[2] = v64;
      v65 = *(_DWORD *)(v63 + 8);
      if ( !v65 )
      {
        v388 = 10;
        if ( !(_DWORD)p_tp )
        {
LABEL_115:
          v50 = 1;
          break;
        }
        goto LABEL_75;
      }
      v46 = *(unsigned int **)v63;
      if ( v65 - 1 <= 7 )
      {
        v71 = 0;
        v57 = 0;
      }
      else
      {
        v66 = v46 + 10;
        v67 = 0;
        v57 = (__int64)&v46[48 * (v65 >> 2) + 10];
        do
        {
          v68 = _mm_cvtsi32_si128(v66[24]);
          v69 = _mm_cvtsi32_si128(*v66);
          v66 += 48;
          a4 = _mm_unpacklo_epi32(v68, _mm_cvtsi32_si128(*(v66 - 12)));
          v67 = _mm_sub_epi32(
                  v67,
                  _mm_cmpeq_epi32(
                    _mm_unpacklo_epi64(_mm_unpacklo_epi32(v69, _mm_cvtsi32_si128(*(v66 - 36))), a4),
                    (__m128i)xmmword_5DE040));
        }
        while ( v66 != (unsigned int *)v57 );
        v70 = _mm_add_epi32(v67, _mm_srli_si128(v67, 8));
        si128 = _mm_srli_si128(v70, 4);
        a5 = _mm_add_epi32(v70, si128);
        v71 = _mm_cvtsi128_si32(a5);
        if ( (v65 & 3) == 0 )
        {
LABEL_73:
          if ( !(_DWORD)p_tp )
          {
LABEL_113:
            if ( v61 < v65 )
              v51 = v61;
            goto LABEL_115;
          }
          v388 = v71 + 10;
LABEL_75:
          LODWORD(v378) = 0;
          v402 = v54;
          v403 = v51;
          LOWORD(v389) = v357;
          v404 = v61;
          v78 = 0;
          v405 = v363;
          LOBYTE(v386) = (_DWORD)p_tp != 1 || (v61 | v54) > 1;
          v387 = (__int64 *)(v56 + 1296);
          v406 = v55;
          do
          {
            v79 = v78 + 1;
            si128 = _mm_loadu_si128((const __m128i *)&v382[3 * v78]);
            tp = (struct timespec)si128;
            v80 = v382[3 * v78 + 2];
            LODWORD(v376) = v80;
            v416.m128i_i64[0] = v80;
            v81 = v80 - v378;
            v358 = v81;
            if ( v388 < v81 )
            {
              v97 = v56 + 1224;
              sub_56E7E0(*(__int64 **)(v56 + 1216), v81);
              p_tp = (__int64)v391;
              v46 = (unsigned int *)(v56 + 1224);
              sub_56D0B0(v56 + 1224, (__int64)v391);
              LODWORD(v378) = v378 + 1;
              if ( v79 >= v375.m128i_i32[2] )
                break;
              v359 = v79;
              v365 = v416.m128i_i32[0];
              v98 = v79;
              v99 = v56;
              v100 = (__int64 **)&v382[3 * v98];
              while ( 1 )
              {
                if ( *(_QWORD *)(v99 + 152) || *(_QWORD *)(v99 + 1400) )
                {
                  v46 = (unsigned int *)v99;
                  *(__m128i *)(v99 + 192) = _mm_load_si128((const __m128i *)&xmmword_5DE050);
                  si128 = _mm_load_si128((const __m128i *)&xmmword_5DE060);
                  *(__m128i *)(v99 + 208) = si128;
                  *(_QWORD *)(v99 + 223) = 0x736E6F69737265LL;
                  sub_55D530(v99);
                }
                v101 = *v100;
                v102 = *((unsigned int *)v100 + 2);
                v57 = v365;
                if ( v365 != *((_DWORD *)v100 + 4) )
                  break;
                v103 = *v100;
                v104 = &v101[v102];
                if ( (_DWORD)v102 )
                {
                  do
                  {
                    p_tp = *v103;
                    v46 = (unsigned int *)v97;
                    ++v103;
                    sub_56C9A0(v97, (volatile signed __int32 *)p_tp);
                  }
                  while ( v103 != v104 );
                }
                if ( v101 )
                {
                  v46 = (unsigned int *)v101;
                  v100 += 3;
                  off_8C52A0(v101);
                  ++v359;
                  v57 = v375.m128i_u32[2];
                  if ( v359 >= v375.m128i_i32[2] )
                  {
                    v56 = v99;
                    v78 = v359;
                    goto LABEL_106;
                  }
                }
                else
                {
                  ++v359;
                  v57 = v375.m128i_u32[2];
                  v100 += 3;
                  if ( v359 >= v375.m128i_i32[2] )
                  {
                    v56 = v99;
                    v51 = v403;
                    v61 = v404;
                    v52 = v405;
                    v55 = v406;
                    v54 = v402;
                    goto LABEL_112;
                  }
                }
              }
              v78 = v359;
              v56 = v99;
            }
            else
            {
              v82 = (__int64)v384;
              v413 = si128;
              sub_56B3A0((__int64)v384, (__int64)v387);
              v32 = (unsigned int)v380;
              p_tp = v82;
              v83 = *(_QWORD *)(v56 + 1256);
              LODWORD(v381) = (unsigned __int16)v389;
              v84 = sub_56C3B0((unsigned __int16)v380, v82, v389, v83);
              if ( v79 >= v375.m128i_i32[2] )
              {
                v108 = v78;
              }
              else
              {
                v364 = v78 + 1;
                v371 = (volatile signed __int32 *)v84;
                v85 = &v382[3 * v79];
                while ( 1 )
                {
                  v86 = (volatile signed __int32 *)*v85;
                  si128 = _mm_loadl_epi64((const __m128i *)(v85 + 1));
                  if ( (_DWORD)v376 != *((_DWORD *)v85 + 4) )
                  {
                    v84 = (__int64)v371;
                    v108 = v364 - 1;
                    goto LABEL_127;
                  }
                  v87 = (__int64)v377;
                  v414[1] = (volatile signed __int32 *)si128.m128i_i64[0];
                  v375.m128i_i64[0] = si128.m128i_i64[0];
                  v414[0] = v86;
                  sub_56B3A0((__int64)v377, v379);
                  p_tp = (__int64)v371;
                  v32 = v56;
                  v88 = sub_56FDA0(v56, (__int64)v371, v87);
                  si128 = _mm_loadl_epi64(&v375);
                  if ( v88 )
                  {
                    for ( m = 0; m < *(_DWORD *)(v56 + 1304); ++m )
                    {
                      v92 = m;
                      sub_56C9A0(v56 + 1224, *(volatile signed __int32 **)(*(_QWORD *)(v56 + 1296) + 8 * v92));
                    }
                    *(_DWORD *)(v56 + 1304) = 0;
                    sub_56C9A0(v56 + 1224, v371);
                    p_tp = (__int64)v377;
                    v93 = *(_QWORD *)(v56 + 1320);
                    v94 = *(_QWORD *)(v56 + 1256);
                    v95 = _mm_loadu_si128((const __m128i *)(v56 + 1296));
                    *(_QWORD *)(v56 + 1296) = *(_QWORD *)(v56 + 1312);
                    v32 = (unsigned int)v380;
                    v96 = (__int16)v381;
                    *(_QWORD *)(v56 + 1304) = v93;
                    *(__m128i *)(v56 + 1312) = v95;
                    v371 = (volatile signed __int32 *)sub_56C3B0(v32, p_tp, v96, v94);
                  }
                  else
                  {
                    tv_sec = (unsigned int)_mm_cvtsi128_si32(si128);
                    v89 = (__int64 *)v86;
                    *(_DWORD *)(v56 + 1320) = 0;
                    v90 = (__int64 *)&v86[2 * (unsigned int)tv_sec];
                    if ( (_DWORD)tv_sec )
                    {
                      do
                      {
                        p_tp = *v89;
                        v32 = v56 + 1224;
                        ++v89;
                        sub_56C9A0(v56 + 1224, (volatile signed __int32 *)p_tp);
                      }
                      while ( v89 != v90 );
                    }
                    if ( v86 )
                    {
                      v32 = (__int64)v86;
                      off_8C52A0((void *)v86);
                    }
                  }
                  v85 += 3;
                  if ( v364 + 1 >= v375.m128i_i32[2] )
                    break;
                  ++v364;
                }
                v108 = v364;
                v84 = (__int64)v371;
              }
LABEL_127:
              v109 = *(__int64 **)(v56 + 1216);
              v372 = v84;
              if ( v358 >= *((_DWORD *)v109 + 2) )
                goto LABEL_360;
              v110 = *v109;
              v375.m128i_i64[0] = v358;
              v366 = 48LL * v358;
              v111 = **(unsigned __int16 **)(v110 + v366);
              v112 = sub_562F50(*(_QWORD *)(v56 + 1256), v111, (unsigned __int16)v380);
              if ( (_WORD)v111 == v112 && v396 )
                *(_BYTE *)(v372 + 44) |= 4u;
              if ( (_BYTE)v386 )
              {
                *(_BYTE *)(v372 + 44) |= 0x18u;
                LOWORD(v111) = -1;
              }
              *(_WORD *)(v372 + 42) = v111;
              v113 = v112;
              v114 = *(_QWORD *)(v56 + 1216);
              *(_DWORD *)(v372 + 60) += v385;
              if ( v358 >= *(_DWORD *)(v114 + 8) )
                goto LABEL_310;
              v115 = (__int64 *)(*(_QWORD *)v114 + v366);
              v46 = (unsigned int *)*v115;
              p_tp = v372;
              v116 = sub_55DDD0(*v115, v372, 0, v113, (__int64 *)(v114 + 48));
              v117 = *(_DWORD *)(v56 + 1304);
              *v115 = (__int64)v116;
              v118 = 0;
              if ( v117 )
              {
                do
                {
                  while ( 1 )
                  {
                    v119 = *(_QWORD *)(v56 + 1216);
                    v120 = *(_QWORD *)(*(_QWORD *)(v56 + 1296) + 8LL * v118);
                    if ( v358 >= *(_DWORD *)(v119 + 8) )
                      goto LABEL_310;
                    v121 = *(_QWORD *)v119 + v366;
                    v46 = *(unsigned int **)v121;
                    p_tp = *(_QWORD *)(*(_QWORD *)(v56 + 1296) + 8LL * v118);
                    v122 = sub_55DDD0(*(_QWORD *)v121, v120, 0, v113, (__int64 *)(v119 + 48));
                    if ( !v120 )
                      break;
                    *(_QWORD *)v121 = v122;
                    if ( ++v118 >= *(_DWORD *)(v56 + 1304) )
                      goto LABEL_138;
                  }
                  v131 = *((_DWORD *)v122 + 55);
                  ++v118;
                  *(_QWORD *)v121 = v122;
                  *(_DWORD *)(v121 + 16) = v131;
                }
                while ( v118 < *(_DWORD *)(v56 + 1304) );
              }
LABEL_138:
              if ( v358 )
              {
                LODWORD(v123) = v383;
                v59 = v375.m128i_i64[0];
                v124 = 0;
                v125 = 48LL * v358;
                while ( 1 )
                {
                  if ( (_DWORD)v123 != (_DWORD)v124 )
                  {
                    v126 = *(__int64 **)(v56 + 1216);
                    v127 = *v126;
                    v128 = *v126 + 48 * v124;
                    if ( !*(_DWORD *)(v128 + 40) )
                    {
                      v129 = (__int64 *)(v127 + v125);
                      if ( !*(_DWORD *)(v127 + v125 + 40) )
                      {
                        v57 = *(_QWORD *)v128;
                        v130 = (_QWORD *)*v129;
                        v46 = (unsigned int *)0xFFFFFFFF0000FFFFLL;
                        if ( ((*(_QWORD *)*v129 ^ **(_QWORD **)v128) & 0xFFFFFFFF0000FFFFLL) == 0
                          && *(_DWORD *)(v57 + 216) == *((_DWORD *)v130 + 54) )
                        {
                          p_tp = v129[3];
                          v46 = *(unsigned int **)(v128 + 24);
                          v381 = (_QWORD *)v125;
                          v375.m128i_i64[0] = v59;
                          v374 = v123;
                          v399 = v57;
                          v398 = 0;
                          v395 = v130;
                          v152 = sub_5715E0((__int64)v46, p_tp);
                          v123 = v374;
                          v59 = v375.m128i_i64[0];
                          v125 = (__int64)v381;
                          if ( v152 )
                            break;
                        }
                      }
                    }
                  }
                  if ( v59 == ++v124 )
                    goto LABEL_146;
                }
                v153 = (__int64)v395;
                v154 = v398;
                v155 = v399;
                if ( *((_WORD *)v395 + 104) )
                {
                  for ( n = v399; ; n = *(_QWORD *)v128 )
                  {
                    v157 = v154++;
                    v158 = (const __m128i *)(v153 + 24 * v157);
                    a6 = (__m128)_mm_loadu_si128(v158 + 1);
                    sub_572A30(n, v126[9], v153, v155, v123, v59, (__int128)a6, v158[2].m128i_i64[0]);
                    v153 = *v129;
                    if ( v154 >= *(unsigned __int16 *)(*v129 + 208) )
                      break;
                  }
                  v155 = *(_QWORD *)v128;
                }
                if ( !*(_WORD *)v155 )
                  *(_DWORD *)(v128 + 16) = *(_DWORD *)(v155 + 220);
                if ( v358 >= *((_DWORD *)v126 + 2) )
                  goto LABEL_312;
                sub_56CF60(*v126 + v366, (__int64)(v126 + 6), v126[9]);
                v159 = *((_DWORD *)v126 + 2);
                if ( v358 >= v159 )
LABEL_311:
                  __assert_fail("index < self->size", "lib/src/./././././array.h", 0xAFu, "_array__erase");
                v78 = v108 + 1;
                v160 = v378 + 1;
                p_tp = *v126 + 48LL * (v358 + 1);
                v46 = (unsigned int *)(v366 + *v126);
                memmove(v46, (const void *)p_tp, 48LL * ((unsigned int)v378 + v159 - (_DWORD)v376 - 1));
                --*((_DWORD *)v126 + 2);
                LODWORD(v378) = v160;
              }
              else
              {
LABEL_146:
                v78 = v108 + 1;
              }
            }
LABEL_106:
            ;
          }
          while ( v78 < v375.m128i_i32[2] );
          v54 = v402;
          v51 = v403;
          v61 = v404;
          v52 = v405;
          v55 = v406;
LABEL_112:
          v65 = *(_DWORD *)(*(_QWORD *)(v56 + 1216) + 8LL);
          goto LABEL_113;
        }
        v57 = v65 & 0xFFFFFFFC;
      }
      if ( v46[12 * (unsigned int)v57 + 10] == 2 )
        ++v71;
      v72 = (unsigned int)(v57 + 1);
      if ( (unsigned int)v72 < v65 )
      {
        if ( v46[12 * v72 + 10] == 2 )
          ++v71;
        v73 = (unsigned int)(v57 + 2);
        if ( (unsigned int)v73 < v65 )
        {
          if ( v46[12 * v73 + 10] == 2 )
            ++v71;
          v74 = (unsigned int)(v57 + 3);
          if ( (unsigned int)v74 < v65 )
          {
            if ( v46[12 * v74 + 10] == 2 )
              ++v71;
            v75 = (unsigned int)(v57 + 4);
            if ( (unsigned int)v75 < v65 )
            {
              if ( v46[12 * v75 + 10] == 2 )
                ++v71;
              v76 = (unsigned int)(v57 + 5);
              if ( (unsigned int)v76 < v65 )
              {
                if ( v46[12 * v76 + 10] == 2 )
                  ++v71;
                v77 = (unsigned int)(v57 + 6);
                if ( (unsigned int)v77 < v65 )
                {
                  if ( v46[12 * v77 + 10] == 2 )
                    ++v71;
                  v57 = (unsigned int)(v57 + 7);
                  if ( (unsigned int)v57 < v65 )
                  {
                    v57 *= 48;
                    if ( *(unsigned int *)((char *)v46 + v57 + 40) == 2 )
                      ++v71;
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_73;
    }
    if ( BYTE5(v409) )
      break;
    v165 = BYTE4(v409);
    v14 = v56;
    v166 = *((_WORD *)v52 + 1);
    v167 = v397;
    v168 = *(_QWORD *)(v14 + 152);
    if ( BYTE4(v409) )
    {
      v166 = v407;
      if ( v168 || *(_QWORD *)(v14 + 1400) )
      {
        v46 = (unsigned int *)v14;
        *(_DWORD *)(v14 + 200) = (_DWORD)"\t\t<g>\r\n"
                                         "\t\t\t<path class=\"st0\" d=\"M19,28c-1.2,0-2.1-0.2-2.6-0.8c-0.6-0.5-0.8-1.2-0."
                                         "8-2s0.3-1.4,0.8-1.9c0.3-0.3,0.8-0.6,1.3-0.7L14,18.2\r\n"
                                         "\t\t\t\tl-3.6,4.4c0.5,0.1,0.9,0.4,1.3,0.7c0.5,0.5,0.8,1.2,0.8,1.9c0,0.8-0.3,1.5"
                                         "-0.9,2C11,27.7,10.2,28,9,28H4c-1.2,0-2.1-0.2-2.6-0.8\r\n"
                                         "\t\t\t\tc-0.6-0.5-0.8-1.2-0.8-2s0.3-1.4,0.8-1.9s1.2-0.7,2.1-0.8l7-8.5L3.8,6C2.9"
                                         ",5.9,2.2,5.7,1.7,5.2S0.9,4,0.9,3.3\r\n"
                                         "\t\t\t\tc0-0.8,0.3-1.5,0.9-2s1.4-0.8,2.6-0.8h4.1c1.2,0,2.1,0.2,2.6,0.7c0.6,0.5,"
                                         "0.9,1.2,0.9,2c0,0.6-0.2,1.1-0.5,1.6\r\n"
                                         "\t\t\t\tC11.3,5,11,5.3,10.6,5.5L14,9.7l3.3-4.1c-0.4-0.3-0.7-0.5-0.9-0.7c-0.4-0."
                                         "5-0.6-1.1-0.6-1.7c0-0.8,0.3-1.5,0.9-2s1.4-0.8,2.6-0.8\r\n"
                                         "\t\t\t\th4.1c1.2,0,2.1,0.2,2.6,0.7c0.6,0.5,0.9,1.2,0.9,2S26.6,4.5,26.1,5s-1.2,0"
                                         ".7-2,0.8l-6.6,8l7,8.5c0.9,0.1,1.6,0.3,2.1,0.8\r\n"
                                         "\t\t\t\ts0.8,1.2,0.8,2s-0.3,1.5-0.9,2C26.1,27.7,25.2,28,24,28H19z\"/>\r\n"
                                         "\t\t\t<path class=\"st1\" d=\"M4.4,1h4.1c1.1,0,1.9,0.2,2.3,0.6c0.4,0.4,0.7,0.9,"
                                         "0.7,1.6c0,0.5-0.2,0.9-0.4,1.4c-0.2,0.2-0.6,0.5-1.3,0.9\r\n"
                                         "\t\t\t\tl4.2,5l4.1-5c-0.6-0.4-1.1-0.6-1.3-0.9c-0.3-0.4-0.4-0.8-0.4-1.4s0.2-1.2,"
                                         "0.7-1.6S18.3,1,19.4,1h4.1c1.1,0,1.9,0.2,2.3,0.6\r\n"
                                         "\t\t\t\ts0.7,0.9,0.7,1.6c0,0.6-0.2,1.2-0.7,1.6c-0.4,0.4-1.1,0.6-1.9,0.6l-7,8.5l"
                                         "7.5,9c0.9,0,1.6,0.2,2,0.6s0.7,0.9,0.7,1.6\r\n"
                                         "\t\t\t\ts-0.2,1.2-0.7,1.6s-1.2,0.6-2.3,0.6h-5c-1.1,0-1.8-0.2-2.3-0.6c-0.4-0.4-0"
                                         ".7-1-0.7-1.6s0.2-1.1,0.6-1.6c0.4-0.4,1-0.6,1.9-0.7\r\n"
                                         "\t\t\t\tL14,17.4L9.5,23c0.8,0,1.5,0.2,1.9,0.7c0.4,0.4,0.6,0.9,0.6,1.6c0,0.6-0.2"
                                         ",1.2-0.7,1.6s-1.2,0.6-2.3,0.6H4\r\n"
                                         "\t\t\t\tc-1.1,0-1.9-0.2-2.3-0.6S1,25.9,1,25.2c0-0.6,0.2-1.2,0.7-1.6c0.4-0.4,1.1"
                                         "-0.6,2-0.6l7.4-9L4,5.5c-0.9,0-1.5-0.2-1.9-0.7\r\n"
                                         "\t\t\t\tC1.6,4.4,1.4,3.9,1.4,3.3c0-0.7,0.2-1.2,0.7-1.6C2.6,1.2,3.3,1,4.4,1 M4.4"
                                         ",0L4.4,0c-1.3,0-2.3,0.3-3,0.9s-1,1.4-1,2.4\r\n"
                                         "\t\t\t\tc0,0.9,0.3,1.7,0.9,2.3c0.5,0.5,1.2,0.8,2.2,0.9L9.7,14l-6.5,8c-0.9,0.1-1"
                                         ".6,0.4-2.2,0.9c-0.7,0.6-1,1.4-1,2.3s0.3,1.7,1,2.4\r\n"
                                         "\t\t\t\tc0.6,0.6,1.6,0.9,3,0.9h5c1.3,0,2.3-0.3,3-0.9s1-1.4,1-2.3s-0.3-1.7-0.9-2"
                                         ".3c-0.2-0.2-0.5-0.4-0.8-0.6L14,19l2.7,3.3\r\n"
                                         "\t\t\t\tc-0.3,0.1-0.6,0.3-0.8,0.6c-0.6,0.6-0.9,1.4-0.9,2.3s0.3,1.7,1,2.4c0.6,0."
                                         "6,1.6,0.9,3,0.9h5c1.3,0,2.3-0.3,3-0.9s1-1.4,1-2.3\r\n"
                                         "\t\t\t\ts-0.3-1.7-1-2.3c-0.5-0.5-1.2-0.8-2.2-0.9l-6.6-8l6.2-7.5c0.9-0.1,1.6-0.4"
                                         ",2.1-0.9c0.7-0.6,1-1.4,1-2.3s-0.4-1.7-1-2.3\r\n"
                                         "\t\t\t\ts-1.6-0.9-3-0.9h-4.1c-1.3,0-2.3,0.3-3,0.9c-0.7,0.6-1,1.4-1,2.3c0,0.7,0."
                                         "2,1.4,0.6,1.9l0,0l0,0c0.1,0.2,0.3,0.3,0.6,0.5L14,8.9\r\n"
                                         "\t\t\t\tl-2.7-3.2c0.3-0.2,0.4-0.4,0.6-0.5c0.4-0.6,0.6-1.3,0.6-2c0-0.9-0.4-1.7-1"
                                         "-2.4C10.9,0.3,9.9,0,8.5,0H4.4L4.4,0L4.4,0z\"/>\r\n"
                                         "\t\t</g>\r\n"
                                         "\t</g>\r\n"
                                         "</g>\r\n"
                                         "<g>\r\n"
                                         "\t<polygon class=\"st2\" points=\"28.7,24.5 28.7,21.6 24.3,21.6 24.3,24.5 21.6,"
                                         "24.5 21.6,28.5 24.3,28.5 24.3,31.4 28.7,31.4 \r\n"
                                         "\t\t28.7,28.5 31.4,28.5 31.4,24.5 \t\"/>\r\n"
                                         "\t<path class=\"st3\" d=\"M28,22v3h3v3h-3v3h-3v-3h-3v-3h3v-3H28z M29,21h-5v3h-3"
                                         "v5h3v3h5v-3h3v-5h-3V21z\"/>\r\n"
                                         "</g>\r\n"
                                         "</svg>\r\n";
        *(_QWORD *)(v14 + 192) = 0x78655F7466696873LL;
        sub_55D530(v14);
      }
    }
    else if ( v168 || *(_QWORD *)(v14 + 1400) )
    {
      p_tp = 1024;
      snprintf((char *)(v14 + 192), 0x400u, "shift state:%u", v166);
      v46 = (unsigned int *)v14;
      sub_55D530(v14);
    }
    v169 = v408;
    if ( (v408 & 1) != 0 )
    {
      v171 = v166;
LABEL_355:
      v50 = 1;
      v172 = 0;
      v173 = (v169 >> 3) & 1;
      goto LABEL_239;
    }
    v170 = *(_DWORD *)(v408 + 36);
    v171 = v166;
    if ( v170 )
    {
      v218 = v407;
      sub_56CC20(v14, (volatile signed __int32 **)&v408, v407, v14 + 1368);
      if ( (v408 & 1) != 0 )
        v219 = BYTE1(v408);
      else
        v219 = *(_WORD *)(v408 + 40);
      v46 = *(unsigned int **)(v14 + 1256);
      p_tp = v218;
      v220 = sub_562F50((__int64)v46, v218, v219);
      v169 = v408;
      v171 = v220;
      if ( (v408 & 1) == 0 )
      {
        v170 = *(_DWORD *)(v408 + 36);
        goto LABEL_237;
      }
      goto LABEL_355;
    }
LABEL_237:
    v172 = v170 != 0;
    LOBYTE(v50) = v170 == 0;
    if ( (v169 & 1) != 0 )
      v173 = (v169 >> 3) & 1;
    else
      LOBYTE(v173) = (*(_BYTE *)(v169 + 44) & 4) != 0;
LABEL_239:
    if ( v165 != (_BYTE)v173 && (_BYTE)v50 )
    {
      p_tp = v169;
      v46 = (unsigned int *)(v14 + 1224);
      v223 = (unsigned __int64)sub_56D110(v14 + 1224, (__m128i *)v169);
      v169 = v223;
      if ( (v223 & 1) != 0 )
      {
        v169 = (8LL * (v165 & 1)) | v223 & 0xFFFFFFFFFFFFFFF7LL;
      }
      else
      {
        v50 = 4 * (v165 & 1u);
        *(_BYTE *)(v223 + 44) = (4 * (v165 & 1)) | *(_BYTE *)(v223 + 44) & 0xFB;
      }
    }
    v174 = *(_QWORD *)(v14 + 1216);
    if ( v383 >= *(_DWORD *)(v174 + 8) )
      sub_55D3A0(v46, p_tp, v50, v57, v174, v59);
    v175 = *(_QWORD *)v174 + v390;
    v32 = *(_QWORD *)v175;
    p_tp = v169;
    v176 = sub_55DDD0(*(_QWORD *)v175, v169, v172, v171, (__int64 *)(v174 + 48));
    if ( v169 )
    {
      *(_QWORD *)v175 = v176;
      if ( (v169 & 1) != 0 )
        goto LABEL_244;
    }
    else
    {
      v221 = *((_DWORD *)v176 + 55);
      *(_QWORD *)v175 = v176;
      *(_DWORD *)(v175 + 16) = v221;
    }
    if ( (*(_BYTE *)(v169 + 44) & 0x40) != 0 )
    {
      v222 = (volatile signed __int32 *)sub_570DF0(v169);
      v32 = *(_QWORD *)(v14 + 1216);
      p_tp = v383;
      sub_56D000(v32, v383, v222);
    }
LABEL_244:
    if ( v167 )
    {
LABEL_245:
      v32 = v14 + 1368;
      sub_570E60(v14 + 1368);
    }
LABEL_154:
    v28 = *(_QWORD *)(v14 + 1216);
LABEL_155:
    v134 = *(FILE **)(v14 + 1400);
    if ( v134 )
    {
LABEL_156:
      sub_56A7C0(v28, *(_QWORD *)(v14 + 1256), v134);
      p_tp = 1;
      v32 = (__int64)"\n\n";
      fwrite("\n\n", 1u, 2u, *(FILE **)(v14 + 1400));
      v28 = *(_QWORD *)(v14 + 1216);
    }
    LODWORD(v29) = *(_DWORD *)(v28 + 8);
    if ( v383 >= (unsigned int)v29 )
LABEL_362:
      sub_55D310(v32, p_tp, v134, v133);
    v135 = (_DWORD *)(*(_QWORD *)v28 + v390);
LABEL_159:
    v25 = *(_DWORD *)(*(_QWORD *)v135 + 4LL);
    if ( v401 < v25 || v383 && v25 == v401 )
    {
      v394 = v29;
      v26 = v14;
      v401 = v25;
      goto LABEL_163;
    }
  }
  if ( v392 != ++v52 )
    goto LABEL_39;
  v48 = v56;
  v47 = v55;
  if ( v51 != -1 )
  {
    v32 = *(_QWORD *)(v48 + 1216);
    p_tp = v51;
    sub_56E900(v32, v51, v383);
    tv_sec = *(_QWORD *)(v48 + 1400);
    if ( tv_sec )
    {
      sub_56A7C0(*(_QWORD *)(v48 + 1216), *(_QWORD *)(v48 + 1256), (FILE *)tv_sec);
      p_tp = 1;
      v32 = (__int64)"\n\n";
      fwrite("\n\n", 1u, 2u, *(FILE **)(v48 + 1400));
    }
    v105 = *(_QWORD *)(v48 + 1216);
    if ( v383 >= *(_DWORD *)(v105 + 8) )
      goto LABEL_360;
    v106 = **(_WORD **)(*(_QWORD *)v105 + v390);
    v407 = v106;
    if ( !v408 )
    {
      v14 = v48;
      v35 = v47;
      v39 = v397;
      goto LABEL_21;
    }
    if ( (v408 & 1) != 0 )
    {
      v107 = BYTE1(v408);
    }
    else if ( *(_DWORD *)(v408 + 36) )
    {
      v107 = *(_WORD *)(v408 + 68);
    }
    else
    {
      v107 = *(_WORD *)(v408 + 40);
    }
    v46 = *(unsigned int **)(v48 + 1256);
    p_tp = v106;
    sub_562CE0((__int64)v46, v106, v107, (__int64)v400);
    goto LABEL_33;
  }
  if ( (_BYTE)v50 )
  {
    v14 = v48;
    if ( v408 )
    {
      p_tp = v408;
      v46 = (unsigned int *)(v48 + 1224);
      sub_56C9A0(v48 + 1224, (volatile signed __int32 *)v408);
    }
    v28 = *(_QWORD *)(v48 + 1216);
    v29 = *(unsigned int *)(v28 + 8);
    if ( v383 >= (unsigned int)v29 )
      sub_55D3D0(v46, p_tp, v50, v57, v29, v59);
    v134 = *(FILE **)(v48 + 1400);
    v135 = (_DWORD *)(*(_QWORD *)v28 + v390);
    v135[10] = 2;
    if ( v134 )
      goto LABEL_156;
    goto LABEL_159;
  }
LABEL_248:
  if ( (v408 & 1) != 0 )
    v177 = ((unsigned __int64)v408 >> 6) & 1;
  else
    LOBYTE(v177) = (*(_BYTE *)(v408 + 45) & 4) != 0;
  if ( (_BYTE)v177 )
  {
    v178 = (v408 & 1) != 0 ? BYTE1(v408) : *(_WORD *)(v408 + 40);
    v179 = *(_QWORD *)(v48 + 1256);
    v180 = *(_WORD *)(v179 + 160);
    if ( v180 != v178 )
    {
      v181 = (v408 & 1) != 0 ? BYTE1(v408) : *(_WORD *)(v408 + 40);
      if ( !(unsigned __int8)sub_562E30(*(_QWORD *)(v48 + 1256), v407, v181) )
      {
        sub_562CE0(v179, v182, v180, (__int64)v400);
        if ( DWORD2(v412) )
        {
          if ( *(_QWORD *)(v48 + 152) || *(_QWORD *)(v48 + 1400) )
          {
            v265 = sub_563060(v179, v180);
            if ( (v408 & 1) != 0 )
              v266 = BYTE1(v408);
            else
              v266 = *(_WORD *)(v408 + 40);
            v267 = sub_563060(*(_QWORD *)(v48 + 1256), v266);
            snprintf((char *)(v48 + 192), 0x400u, "switch from_keyword:%s, to_word_token:%s", v267, v265);
            sub_55D530(v48);
          }
          v268 = sub_56D110(v48 + 1224, (__m128i *)v408);
          v269 = *(_QWORD *)(v48 + 1256);
          v46 = (unsigned int *)&tp;
          tp.tv_sec = (__time_t)v268;
          p_tp = *(unsigned __int16 *)(v269 + 160);
          sub_56B8B0((unsigned __int8 *)&tp, p_tp, v269);
          v408 = tp.tv_sec;
          goto LABEL_33;
        }
      }
    }
  }
  v183 = v383;
  v14 = v48;
  v35 = v47;
  v39 = v397;
  v32 = v14;
  p_tp = v383;
  if ( !sub_56EDA0(v14, v383, *(double *)si128.m128i_i64, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6) )
  {
    if ( *(_QWORD *)(v14 + 152) || *(_QWORD *)(v14 + 1400) )
    {
      if ( (v408 & 1) != 0 )
        v263 = BYTE1(v408);
      else
        v263 = *(_WORD *)(v408 + 40);
      v264 = sub_563060(*(_QWORD *)(v14 + 1256), v263);
      snprintf((char *)(v14 + 192), 0x400u, "detect_error lookahead:%s", v264);
      sub_55D530(v14);
    }
    v28 = *(_QWORD *)(v14 + 1216);
    p_tp = v383;
    v32 = v28;
    sub_56A650(v28, v383, v408);
    goto LABEL_155;
  }
  v184 = *(_QWORD *)(v14 + 1216);
  if ( v183 >= *(_DWORD *)(v184 + 8) )
    goto LABEL_360;
  v407 = **(_WORD **)(*(_QWORD *)v184 + v390);
  sub_56C9A0(v14 + 1224, (volatile signed __int32 *)v408);
LABEL_21:
  v40 = v407;
  p_tp = v383;
  v41 = (volatile signed __int32 *)sub_57FC40(v14, v383, v407);
  v24 = *(_BYTE *)(v14 + 1508) == 0;
  v408 = (__int64)v41;
  v43 = v41;
  if ( v24 )
  {
    if ( v41 )
    {
      sub_56C560(v41);
      if ( v35 )
        sub_56C560(v35);
      if ( *(_QWORD *)(v14 + 1344) )
        sub_56C9A0(v14 + 1224, *(volatile signed __int32 **)(v14 + 1344));
      if ( *(_QWORD *)(v14 + 1352) )
        sub_56C9A0(v14 + 1224, *(volatile signed __int32 **)(v14 + 1352));
      v44 = v393;
      *(_QWORD *)(v14 + 1344) = v43;
      *(_QWORD *)(v14 + 1352) = v35;
      *(_DWORD *)(v14 + 1360) = v44;
      v45 = BYTE1(v408);
      if ( (v408 & 1) == 0 )
        v45 = *((_WORD *)v43 + 20);
      v46 = *(unsigned int **)(v14 + 1256);
      p_tp = v40;
      v400 = &v412;
      sub_562CE0((__int64)v46, v40, v45, (__int64)&v412);
    }
    else
    {
      v46 = *(unsigned int **)(v14 + 1256);
      p_tp = v40;
      v400 = &v412;
      sub_562CE0((__int64)v46, v40, 0, (__int64)&v412);
    }
    goto LABEL_32;
  }
LABEL_214:
  v163 = nullptr;
LABEL_215:
  sub_57C4E0(v14, (volatile signed __int32 *)p_tp, tv_sec, v42, v19, v20);
  return v163;
}
