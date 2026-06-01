__int64 __fastcall sub_1D6C080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  __int64 v10; // r13
  __int64 *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r14
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  _QWORD *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned int v36; // r15d
  __m128 *v38; // r14
  __int64 v39; // rsi
  __m128i v40; // xmm1
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __m128i v44; // xmm2
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rdi
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r15
  __int64 *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rax
  void *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // r14
  __m128i si128; // xmm6
  __m128i v75; // xmm7
  __int64 v76; // rdi
  __int64 v77; // rdx
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r8
  __m128i v81; // xmm0
  bool v82; // al
  unsigned __int64 v83; // rdx
  __int64 v84; // r9
  unsigned __int64 v85; // r15
  __int64 v86; // rbx
  unsigned __int64 v87; // rax
  __int64 v88; // rbx
  __m128i v89; // xmm3
  _QWORD *v90; // rsi
  __int64 v91; // r9
  __int64 v92; // rax
  char v93; // dl
  __m128i v94; // xmm5
  const __m128i *v95; // roff
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  int v101; // r8d
  __int64 v102; // rax
  int v103; // r9d
  __int64 v104; // rdx
  unsigned __int64 v105; // r13
  __int64 v106; // rdi
  __int64 v107; // rbx
  __int64 v108; // rdi
  __int64 *v109; // r13
  int v110; // r14d
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  int v114; // eax
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // r13
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 *v120; // r13
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 *v123; // r14
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 *v127; // r10
  unsigned __int64 v128; // r13
  __int64 v129; // rdi
  __int64 v130; // rbx
  __int64 v131; // rcx
  __int64 v132; // rdx
  int v133; // eax
  __int64 v134; // r13
  __int64 v135; // r8
  int v136; // r9d
  int v137; // edx
  void *v138; // rdi
  __int64 *v139; // rcx
  __int64 *v140; // rbx
  __int64 v141; // rdi
  __int64 v142; // r13
  unsigned __int64 v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rax
  _QWORD *v147; // rdi
  __int64 v148; // r13
  __int64 v149; // rax
  __int64 v150; // r15
  char v151; // bl
  __int64 v152; // r13
  __int64 v153; // rax
  __int64 v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  int v157; // eax
  __int64 v158; // rbx
  int v159; // edx
  _QWORD *v160; // rdi
  __int64 *v161; // r13
  int v162; // eax
  __int64 v163; // r10
  __int64 v164; // rbx
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rbx
  __int64 *v168; // r10
  __int64 v169; // rcx
  __int64 v170; // rdx
  int v171; // eax
  __int64 *v172; // r14
  __int64 v173; // rax
  __int64 v174; // rcx
  bool v175; // zf
  int v176; // r8d
  int v177; // edx
  _BOOL4 v178; // r9d
  __int64 v179; // rbx
  __int64 v180; // r13
  int v181; // eax
  __int64 v182; // r15
  _QWORD *v183; // rax
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rdx
  unsigned __int64 v188; // rax
  int v189; // ebx
  __int64 v190; // r15
  _QWORD *v191; // rax
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  int v196; // eax
  __int64 v197; // rbx
  __int64 v198; // r13
  __int64 v199; // r15
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // rcx
  __int64 v204; // rdx
  int v205; // eax
  int v206; // r9d
  int v207; // ecx
  __int64 v208; // rdi
  int v209; // eax
  __int64 *v210; // r10
  unsigned __int64 v211; // r13
  __int64 v212; // rdi
  __int64 v213; // rbx
  __int64 v214; // rcx
  __int64 v215; // rdx
  int v216; // eax
  void *v217; // r10
  __int64 v218; // rbx
  __int64 *v219; // r14
  __int64 v220; // rax
  _QWORD *v221; // rbx
  __int64 v222; // r13
  __int64 v223; // rcx
  __int64 v224; // rdx
  int v225; // eax
  int v226; // r9d
  __int64 v227; // rsi
  int v228; // r9d
  __int64 v229; // rsi
  __int64 v230; // rsi
  __int64 v231; // rax
  __m128i v232; // xmm7
  __int64 v233; // rax
  __int64 v234; // rax
  unsigned __int8 v235; // cl
  __int64 v236; // r10
  unsigned __int8 v237; // cl
  __int64 v238; // rax
  __int64 v239; // rbx
  __int64 v240; // rcx
  __int64 v241; // rdx
  int v242; // eax
  __int64 v243; // rdx
  __int64 v244; // rax
  __int64 *v245; // r15
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  int v249; // eax
  __int64 v250; // rdx
  int v251; // esi
  __int64 v252; // rax
  __int64 v253; // rcx
  __int64 v254; // rax
  __int64 v255; // rbx
  char v256; // bp
  __int64 v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rdx
  __int64 v260; // rax
  __int64 v261; // rbx
  __int64 v262; // rcx
  __int64 v263; // rdx
  int v264; // eax
  __int64 v265; // rdx
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rbx
  __int64 v269; // rax
  __int64 v270; // rax
  void *v271; // rsi
  __int64 v272; // r15
  signed __int64 v273; // r15
  __int64 v274; // rsi
  __int64 v275; // rdx
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  char *v279; // r13
  __m128i v280; // xmm0
  __int64 v281; // rsi
  _QWORD *v282; // r8
  __int64 v283; // r9
  _QWORD *v284; // r8
  __int64 v285; // r9
  __int64 v286; // rcx
  __int64 v287; // r12
  const void *v288; // r13
  signed __int64 v289; // r15
  __int64 v290; // rbx
  void *v291; // rax
  __int64 v292; // r15
  __int64 v293; // rax
  __int64 v294; // rsi
  int v295; // r13d
  __int64 v296; // rdx
  __int64 v297; // rcx
  __int64 v298; // r8
  __int64 v299; // r9
  _QWORD *v300; // rax
  __int64 v301; // rcx
  unsigned __int64 v302; // r8
  __int64 v303; // r9
  void *v304; // rbx
  void **v305; // r12
  __int64 v306; // r15
  __int64 *v307; // rbx
  void *v308; // rax
  int v309; // r9d
  __int64 v310; // rdi
  unsigned int i; // ecx
  __int64 v312; // rdx
  _QWORD *v313; // rbx
  _QWORD *v314; // r15
  unsigned __int64 v315; // r12
  unsigned __int64 v316; // rax
  __int64 v317; // r13
  __int64 v318; // rbp
  void *v319; // rdi
  void *v320; // rdi
  void *v321; // rdi
  void **v322; // rbp
  void **v323; // r13
  __int64 v324; // rdx
  __int64 v325; // rax
  __int64 v326; // rax
  _DWORD *v327; // r12
  int v328; // ebx
  _QWORD *v329; // rbp
  _QWORD *v330; // rdi
  __int64 *v331; // rbx
  char *v332; // rax
  unsigned int v333; // ecx
  int v334; // eax
  int v335; // edx
  int v336; // eax
  unsigned __int64 v337; // rbx
  unsigned __int64 v338; // r13
  __int64 v339; // rdx
  __int64 v340; // rax
  __m128 *v341; // r8
  __m128i *v342; // rax
  unsigned __int64 v343; // rbx
  unsigned __int64 v344; // r14
  int v345; // ebp
  __int64 v346; // rax
  const void *v347; // rsi
  unsigned __int64 v348; // rax
  const void *v349; // rsi
  unsigned int v350; // eax
  __int64 *v351; // r12
  _QWORD *v352; // rbp
  __int64 *v353; // rbx
  __int64 v354; // rdx
  __int64 *v355; // r15
  unsigned int v356; // eax
  __int64 v357; // rdx
  _QWORD *v358; // rbp
  int v359; // edi
  unsigned int kk; // edx
  __int64 *v361; // rsi
  unsigned int *v362; // rbx
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  _BYTE *v366; // rax
  __int64 v367; // rdi
  __int64 *v368; // rbx
  unsigned int mm; // edx
  __int64 *v370; // rcx
  __int64 *v371; // rbx
  __int64 v372; // r14
  _QWORD *v373; // r15
  __int64 v374; // rax
  __int64 v375; // rbp
  char *v376; // rdx
  char *v377; // rdi
  unsigned __int64 v378; // rbx
  void **v379; // r10
  unsigned __int64 v380; // rdx
  __int64 v381; // rax
  void **v382; // rax
  void *v383; // rdx
  unsigned int v384; // edx
  int v385; // edx
  unsigned __int64 v386; // rax
  __int64 v387; // rax
  __int64 *v388; // rax
  __int64 v389; // r15
  __int64 *v390; // rcx
  __int64 *v391; // rdx
  __int64 *n; // rdi
  __int64 v393; // rsi
  int v394; // r9d
  __int64 *v395; // r8
  unsigned int ii; // ecx
  __int64 *v397; // rdx
  __int64 v398; // r11
  int v399; // ecx
  int v400; // r8d
  __int64 v401; // rcx
  unsigned int jj; // edx
  __int64 v403; // r9
  unsigned int v404; // edx
  __int64 *v405; // rcx
  __int64 v406; // rbx
  char *v407; // rbx
  unsigned __int64 v408; // rax
  __int64 *v409; // rax
  __int64 v410; // rdx
  __int64 v411; // r15
  __int64 *v412; // rsi
  __int64 *v413; // rcx
  __int64 *j; // rdi
  int v415; // r9d
  __int64 *v416; // r8
  unsigned int k; // ecx
  __int64 *v418; // rdx
  __int64 v419; // r11
  int v420; // ecx
  int v421; // r8d
  unsigned int m; // edx
  __int64 v423; // r9
  unsigned int v424; // ecx
  unsigned int v425; // edx
  unsigned int v426; // ecx
  __int64 v427; // rbx
  __int64 v428; // r15
  char *v429; // rdx
  __int64 v430; // r12
  __int64 *v431; // r13
  char *v432; // rbp
  char *v433; // r15
  char v434; // al
  __int64 v435; // rax
  __int64 *v436; // rcx
  void *v437; // rbx
  void *v438; // rbp
  char *v439; // rbx
  char *v440; // r15
  char *v441; // rdi
  void *v442; // rbx
  __int32 v443; // r15d
  __int64 *v444; // rdx
  unsigned int v445; // ecx
  __int64 v446; // rcx
  __int64 v447; // rdx
  __int64 v448; // [rsp-20h] [rbp-868h]
  __int64 v449; // [rsp-18h] [rbp-860h]
  __int64 *v450; // [rsp-10h] [rbp-858h]
  __int64 v451; // [rsp-8h] [rbp-850h]
  __int64 *v452; // [rsp+8h] [rbp-840h]
  void *src[2]; // [rsp+10h] [rbp-838h] BYREF
  __int64 p_s; // [rsp+20h] [rbp-828h] BYREF
  __int64 v455; // [rsp+28h] [rbp-820h]
  void **v456; // [rsp+30h] [rbp-818h] BYREF
  __int64 *v457; // [rsp+38h] [rbp-810h]
  __int64 *v458; // [rsp+40h] [rbp-808h]
  __int64 *v459; // [rsp+48h] [rbp-800h]
  void **v460; // [rsp+50h] [rbp-7F8h]
  __int64 *v461; // [rsp+58h] [rbp-7F0h]
  __int64 *v462; // [rsp+60h] [rbp-7E8h]
  __int64 v463; // [rsp+68h] [rbp-7E0h]
  __int64 v464; // [rsp+70h] [rbp-7D8h]
  __int64 v465; // [rsp+78h] [rbp-7D0h]
  unsigned int v466; // [rsp+84h] [rbp-7C4h]
  __int64 v467; // [rsp+88h] [rbp-7C0h]
  __m128 *v468; // [rsp+90h] [rbp-7B8h]
  __int64 v469; // [rsp+98h] [rbp-7B0h] BYREF
  char v470; // [rsp+AFh] [rbp-799h] BYREF
  __m128i v471; // [rsp+B0h] [rbp-798h] BYREF
  __m128 v472; // [rsp+C0h] [rbp-788h] BYREF
  __int64 *v473; // [rsp+D0h] [rbp-778h] BYREF
  __int64 v474; // [rsp+D8h] [rbp-770h]
  unsigned int v475; // [rsp+E0h] [rbp-768h]
  void *v476; // [rsp+E8h] [rbp-760h]
  __int64 v477; // [rsp+F0h] [rbp-758h]
  char v478; // [rsp+F8h] [rbp-750h] BYREF
  void *v479; // [rsp+100h] [rbp-748h] BYREF
  __int64 v480; // [rsp+108h] [rbp-740h]
  void *s; // [rsp+150h] [rbp-6F8h] BYREF
  _BYTE v482[12]; // [rsp+158h] [rbp-6F0h]
  char v483; // [rsp+164h] [rbp-6E4h]
  void *v484; // [rsp+1B0h] [rbp-698h] BYREF
  __int64 v485; // [rsp+1B8h] [rbp-690h]
  _BYTE v486[256]; // [rsp+1C0h] [rbp-688h] BYREF
  void *v487; // [rsp+2C0h] [rbp-588h] BYREF
  __int64 v488; // [rsp+2C8h] [rbp-580h]
  char v489; // [rsp+2D0h] [rbp-578h] BYREF
  void *v490; // [rsp+3D0h] [rbp-478h] BYREF
  __int64 v491; // [rsp+3D8h] [rbp-470h]
  _BYTE v492[256]; // [rsp+3E0h] [rbp-468h] BYREF
  char v493; // [rsp+4E0h] [rbp-368h]
  void *ptr[2]; // [rsp+4F0h] [rbp-358h] BYREF
  __int64 v495; // [rsp+500h] [rbp-348h]
  char v496; // [rsp+508h] [rbp-340h] BYREF
  char v497; // [rsp+608h] [rbp-240h]
  void *v498[2]; // [rsp+610h] [rbp-238h] BYREF
  __m128i v499; // [rsp+620h] [rbp-228h]
  void *v500; // [rsp+630h] [rbp-218h]
  __int64 v501; // [rsp+638h] [rbp-210h]
  __int64 v502; // [rsp+6C0h] [rbp-188h]
  __int64 v503; // [rsp+6C8h] [rbp-180h]
  __int64 v504; // [rsp+6D0h] [rbp-178h]
  __int64 v505; // [rsp+6E0h] [rbp-168h]
  __int64 v506; // [rsp+6E8h] [rbp-160h]
  int v507; // [rsp+6F8h] [rbp-150h]
  char v508; // [rsp+6FCh] [rbp-14Ch]
  void *v509; // [rsp+700h] [rbp-148h]
  __int64 v510; // [rsp+708h] [rbp-140h]
  __int64 v511; // [rsp+750h] [rbp-F8h]
  __int64 v512; // [rsp+758h] [rbp-F0h]
  void *v513; // [rsp+760h] [rbp-E8h]
  __int64 v514; // [rsp+768h] [rbp-E0h]
  __int16 v515; // [rsp+7D0h] [rbp-78h]
  void *v516; // [rsp+7D8h] [rbp-70h]
  __int64 v517; // [rsp+7E0h] [rbp-68h]

  v10 = a4;
  v12 = (__int64 *)a5;
  v13 = a3;
  v469 = a2;
  v452 = a6;
  LODWORD(p_s) = a9;
  v14 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 38 )
    v10 = *(_QWORD *)(v14 + 32);
  if ( a8 == 2 )
  {
    v61 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v62 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v61 + 16) - 43 > 1 )
    {
      v61 = sub_1D379A0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
      if ( !v61 )
      {
        v76 = *v62;
        if ( (unsigned int)*(unsigned __int8 *)(*v62 + 16) - 43 <= 1 )
        {
          v10 = sub_F68450(v76, a2, a3, a4, a5);
        }
        else if ( sub_1D379A0(v76, a2, a3, a4) )
        {
          v10 = sub_F68450(*v62, a2, v77, v66, v67);
        }
        goto LABEL_64;
      }
    }
    v13 = sub_9B4870(v61, a2, a3, a4, a5);
    src[0] = (void *)*v62;
    if ( (unsigned int)*((unsigned __int8 *)src[0] + 16) - 43 > 1 )
    {
      src[0] = (void *)sub_1D379A0((__int64)src[0], a2, v63, v64);
      if ( !src[0] )
      {
LABEL_64:
        v78 = *(_QWORD **)(a1 + 248);
        v498[0] = nullptr;
        v13 = sub_A725A0(v78, v13, (__int64 *)v498, v66, v67);
        v10 = sub_A725A0(*(_QWORD **)(a1 + 248), v10, (__int64 *)v498, v79, v80);
        goto LABEL_65;
      }
      v10 = sub_F68450(*v62, a2, v447, v66, v67);
    }
    else
    {
      v10 = sub_F68450((__int64)src[0], a2, v63, v64, v65);
    }
    if ( sub_1D37210(v13, v10) )
    {
      v68 = 0;
      v69 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v69 & 8) != 0 )
        v68 = *(__int64 *)((char *)&qword_18 + (v69 & 0xFFFFFFFFFFFFFFF0LL));
      v70 = (void *)(v68 | ((unsigned __int8)v13 | (unsigned __int8)v69) & 7);
      v71 = 0;
      ptr[0] = v70;
      v72 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v72 & 8) != 0 )
        v71 = *(__int64 *)((char *)&qword_18 + (v72 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (v73 = v71 | ((unsigned __int8)v10 | (unsigned __int8)v72) & 7,
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 43)
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)src[0] + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43
        || sub_F569A0((unsigned __int64 *)ptr, v73)
        || (((unsigned __int64)ptr[0] >> 6) & 6) != 0
        && ((v73 >> 6) & 7) == 1
        && (v73 & 0xFFFFFFFFFFFFFE3FLL) == ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFE3FLL) )
      {
        v36 = 10;
        sub_F1D250((__int64)v498, v13, 0, 0);
        si128 = _mm_load_si128((const __m128i *)v498);
        v12[25] = v499.m128i_i64[0];
        *(__m128i *)(v12 + 23) = si128;
        sub_F1D250((__int64)v498, v10, 0, 0);
        v75 = _mm_load_si128((const __m128i *)v498);
        v12[28] = v499.m128i_i64[0];
        *((__m128i *)v12 + 13) = v75;
        return v36;
      }
    }
    goto LABEL_64;
  }
  if ( (a7 & 1) != 0 )
  {
    v33 = *(_QWORD **)(a1 + 248);
    v498[0] = nullptr;
    v34 = sub_A725A0(v33, a3, (__int64 *)v498, a4, a5);
    v35 = *(_QWORD *)(a1 + 248);
    v498[0] = (void *)((unsigned __int64)v498[0] & 0xFFFFFFFFFFFFFFF8LL
                     | (__int64)v498[0] & (unsigned __int8)(v10 | byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
    v13 = sub_A70F20(v35, v34, (__int64)v498[0]);
  }
  v15 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (a7 & 0x10) != 0 )
  {
    v29 = (unsigned int)(unsigned __int8)v17 - 25;
    if ( (unsigned int)v29 > 1 )
    {
      a7 &= ~0x10u;
      if ( !sub_1D38D30(v13, 0, v17, v29) )
      {
LABEL_66:
        v16 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v17) = *(_BYTE *)(v16 + 16);
        goto LABEL_7;
      }
      v32 = *v15;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 43 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v17) = *(_BYTE *)(v16 + 16);
        goto LABEL_7;
      }
      v13 = sub_F68450(v32, 0, v30, v31, a5);
LABEL_65:
      v15 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_66;
    }
  }
LABEL_7:
  if ( (_BYTE)v17 == 50 )
  {
    v18 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) == 13 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FFu) > 0x1F1 )
      return 0;
    v19 = *(_WORD *)(v16 + 20) & 0x7FFF;
    if ( (_DWORD)v19 != *((_DWORD *)v12 + 6) )
      return 0;
    v20 = *(unsigned __int16 *)(v16 + 22);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v21 = *(_QWORD **)(a1 + 248);
      v498[0] = nullptr;
      v22 = sub_A725A0(v21, v10, (__int64 *)v498, v18, a5);
      v10 = v22;
      if ( v498[0] )
        v10 = sub_A70F20(*(_QWORD *)(a1 + 248), v22, (__int64)v498[0]);
    }
    if ( (a7 & 2) == 0 && sub_1D36660(v13, v10) )
    {
      v36 = 6;
      v12[22] = *(_QWORD *)(v469 + 8 * v20 + 24) & 0xFFFFFFFFFFFFFFF9LL;
      sub_F1D250((__int64)v498, v13, 0, 0);
      v81 = _mm_load_si128((const __m128i *)v498);
      v12[25] = v499.m128i_i64[0];
      *(__m128i *)(v12 + 23) = v81;
      sub_F1D250((__int64)v498, v10, 0, 0);
      *((__m128i *)v12 + 13) = _mm_load_si128((const __m128i *)v498);
      v12[28] = v499.m128i_i64[0];
      return v36;
    }
    v23 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v24 = v13 & 7;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 > 1 )
    {
      v25 = v15[1];
      v490 = (void *)v10;
      v19 = 0;
      v27 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      v26 = v25 & 7;
      v84 = (v25 >> 3) & 1;
      if ( (v27 & 8) == 0 )
        goto LABEL_82;
      goto LABEL_280;
    }
    if ( !(v24 | (v13 >> 3) & 1) )
    {
      v25 = v15[1];
      if ( (v25 & 7) == 0 )
      {
        v26 = (v25 >> 3) & 1;
        if ( ((v25 >> 3) & 1) == 0 )
        {
          v490 = (void *)v10;
          v27 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v27 & 8) == 0 )
          {
            v28 = ((unsigned __int8)v10 | (unsigned __int8)v27) & 7;
            goto LABEL_83;
          }
          v84 = 0;
LABEL_280:
          v19 = *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
LABEL_82:
          v28 = v19 | ((unsigned __int8)v10 | (unsigned __int8)v27) & 7;
          if ( v84 )
          {
            v230 = *(__int64 *)((char *)&qword_18 + (v25 & 0xFFFFFFFFFFFFFFF0LL)) | v26 | v24;
            v19 = (unsigned int)v230 & 0xFFFFFE00;
            v231 = v230 & 0x1C0;
            v85 = v28 & ~(unsigned __int64)(v230 & 7);
            v24 = v230 & 0x30;
            if ( (_DWORD)v24 )
              v85 &= 0xFFFFFFFFFFFFFFCFLL;
            if ( v19 )
            {
              v19 = 0xFFFFFFFF000001FFLL;
              v85 &= 0xFFFFFFFF000001FFLL;
            }
            if ( v231 )
            {
              v85 &= 0xFFFFFFFFFFFFFE3FLL;
              if ( !sub_F6ACC0(*v23, v24, v19, (__int64)v23, v26)
                && (*(_BYTE *)(*(_QWORD *)((unsigned __int64)v490 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
              {
                v36 = 6;
                v12[22] = *(_QWORD *)(v469 + 8 * v20 + 24) & 0xFFFFFFFFFFFFFFF9LL;
                sub_F1D250((__int64)v498, v13, 0, 0);
                v232 = _mm_load_si128((const __m128i *)v498);
                v12[25] = v499.m128i_i64[0];
                *(__m128i *)(v12 + 23) = v232;
                sub_F1D250((__int64)v498, v10, 0, 0);
                *((__m128i *)v12 + 13) = _mm_load_si128((const __m128i *)v498);
                v12[28] = v499.m128i_i64[0];
                return v36;
              }
            }
            goto LABEL_84;
          }
LABEL_83:
          v85 = v28 & ~(unsigned __int64)(((unsigned __int8)v25 | (unsigned __int8)v13) & 7);
LABEL_84:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0
            && sub_F6ACC0(*(_QWORD *)((unsigned __int64)v490 & 0xFFFFFFFFFFFFFFF0LL), v24, v19, (__int64)v23, v26)
            && (v85 & 0x1C0) == 0 )
          {
            v85 &= 0xFFFFFFFFFFFFFE3FLL;
            LOBYTE(v85) = v85 | 0x80;
          }
          v86 = *(_QWORD *)(a1 + 248);
          v87 = sub_6D5440(&v490);
          v490 = (void *)sub_A70F20(v86, v87, v85);
          v88 = 32 * v20;
          sub_F1D250((__int64)v498, (__int64)v490, 0, 0);
          v89 = _mm_load_si128((const __m128i *)v498);
          v90 = *(_QWORD **)(a1 + 248);
          v495 = v499.m128i_i64[0];
          *(__m128i *)ptr = v89;
          v496 = p_s;
          sub_1D3C010((__m128i *)v498, v90, (const __m128i *)(32 * v20 + *v452), (const __m128i *)ptr, 0, v91);
          if ( ((__int64)v498[0] & 0x7FFFFFFF) == 0 )
          {
            v92 = *(_QWORD *)(v469 + 8 * v20 + 24);
            v93 = *(_BYTE *)(v92 + 28) & 0x7F;
            switch ( v93 )
            {
              case 'C':
                v12[22] = v92 & 0xFFFFFFFFFFFFFFF9LL;
                break;
              case 'D':
                v12[22] = v92 & 0xFFFFFFFFFFFFFFF9LL | 4;
                break;
              case '/':
                v12[22] = v92 & 0xFFFFFFFFFFFFFFF9LL | 2;
                break;
              default:
LABEL_664:
                JUMPOUT(0x1D6FBF0);
            }
            v36 = 5;
            v94 = _mm_load_si128((const __m128i *)ptr);
            v95 = (const __m128i *)(*v452 + v88);
            *(__m128i *)(v12 + 23) = _mm_loadu_si128(v95);
            v96 = v95[1].m128i_i64[0];
            *((__m128i *)v12 + 13) = v94;
            v12[25] = v96;
            v12[28] = v495;
            return v36;
          }
          v233 = *v452;
          *(__m128i *)(v233 + 32 * v20) = _mm_load_si128((const __m128i *)v498);
          *(_QWORD *)(v233 + v88 + 16) = v499.m128i_i64[0];
          *(_BYTE *)(v233 + v88 + 24) = v499.m128i_i8[8];
          if ( a10 )
          {
            *(_BYTE *)a10 = 1;
            return 0;
          }
          return 0;
        }
      }
    }
    return 10;
  }
  v38 = (__m128 *)v498;
  sub_F1D250((__int64)v498, v13, 0, 0);
  v39 = v10;
  v40 = _mm_load_si128((const __m128i *)v498);
  v12[25] = v499.m128i_i64[0];
  *(__m128i *)(v12 + 23) = v40;
  sub_F1D250((__int64)v498, v10, 0, 0);
  v44 = _mm_load_si128((const __m128i *)v498);
  v12[28] = v499.m128i_i64[0];
  *((__m128i *)v12 + 13) = v44;
  v45 = *v15;
  if ( *(_BYTE *)(*v15 + 16) == 45
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 45
    && sub_F63050(v45, v10, v41, v42) )
  {
    return 0;
  }
  LODWORD(p_s) = a7 & 2;
  if ( (a7 & 2) != 0 )
    goto LABEL_72;
  if ( (a7 & 1) != 0 )
  {
    v39 = v10;
    if ( sub_1D36660(v13, v10) )
      return 10;
LABEL_72:
    v60 = *v15;
    goto LABEL_73;
  }
  if ( (a7 & 0x40) != 0 )
  {
    v46 = 0;
    v47 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v47 & 8) != 0 )
      v46 = *(__int64 *)((char *)&qword_18 + (v47 & 0xFFFFFFFFFFFFFFF0LL));
    v48 = 0;
    v49 = (void *)(v46 | ((unsigned __int8)v10 | (unsigned __int8)v47) & 7);
    v50 = *(_QWORD *)(a1 + 248);
    v498[0] = v49;
    v51 = v15[1];
    if ( (v51 & 8) != 0 )
      v48 = *(__int64 *)((char *)&qword_18 + (v51 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !sub_16A8C50((unsigned __int64 *)v498, v48 | ((unsigned __int8)v13 | (unsigned __int8)v51) & 7, v50) )
      return 10;
    v54 = *(_QWORD **)(a1 + 248);
    v498[0] = nullptr;
    v55 = 0;
    v56 = sub_A725A0(v54, v10, (__int64 *)v498, v52, v53);
    v57 = v15[1];
    if ( (v57 & 8) != 0 )
      v55 = *(__int64 *)((char *)&qword_18 + (v57 & 0xFFFFFFFFFFFFFFF0LL));
    v58 = v55 | ((unsigned __int8)v13 | (unsigned __int8)v57) & 7;
    v39 = v56;
    v59 = sub_A70F20(*(_QWORD *)(a1 + 248), v56, v58);
    v60 = *v15;
    v10 = v59;
    goto LABEL_73;
  }
  v60 = *v15;
  v234 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v235 = *(_BYTE *)(v234 + 16);
  if ( v235 > 0x37u )
  {
LABEL_293:
    v42 = ((unsigned __int8)v10 | (unsigned __int8)*(_DWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    if ( (_DWORD)v42 != (((unsigned __int8)v13 | (unsigned __int8)*((_DWORD *)v15 + 2)) & 7) )
      return 10;
    goto LABEL_73;
  }
  v42 = 1LL << v235;
  v39 = 0x9C008000118000LL;
  if ( (v42 & 0x9C008000118000LL) == 0 )
  {
    if ( (v42 & 0x74) != 0 )
    {
      do
      {
        v234 = *(_QWORD *)(*(_QWORD *)(v234 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v237 = *(_BYTE *)(v234 + 16);
        if ( v237 > 0x37u )
          break;
        v236 = 1LL << v237;
        v42 = v236;
        if ( (v236 & 0x9C008000118000LL) != 0 )
          goto LABEL_73;
      }
      while ( (v236 & 0x74) != 0 );
    }
    goto LABEL_293;
  }
LABEL_73:
  if ( (*(_BYTE *)(v60 + 17) & 4) == 0 )
  {
    if ( (a7 & 8) != 0 )
      return 0;
    if ( (_DWORD)p_s )
    {
      v39 = v10;
      v82 = sub_1D37210(v13, v10);
    }
    else
    {
      v42 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
      v82 = (v15[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)v15[1]) & 7) == (v42 | ((unsigned __int8)v10 | (unsigned __int8)*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
    }
    if ( v82 )
      return 0;
    if ( (a7 & 0x20) != 0 )
    {
      v39 = v13;
      if ( sub_1D3A950(a1, v13, v10, v42) )
        return 0;
    }
    if ( !(_DWORD)p_s )
      return 10;
  }
  v83 = v15[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13 | (unsigned __int8)v15[1]) & 7;
  switch ( *(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
  {
    case 2:
      v146 = sub_A72040(*(_QWORD **)(a1 + 248), v10);
      v147 = *(_QWORD **)(a1 + 248);
      v148 = v146;
      if ( !v146 || (unsigned int)*(unsigned __int8 *)(v146 + 16) - 2 > 1 )
      {
        sub_A72040(v147, v13);
        return 10;
      }
      v149 = sub_A72040(v147, v13);
      v150 = v149;
      if ( v149 && (unsigned int)*(unsigned __int8 *)(v149 + 16) - 2 >= 2 )
        v150 = 0;
      sub_A5DAD0((__int64)v498, v150);
      sub_A5DAD0((__int64)ptr, v148);
      if ( LODWORD(ptr[1]) <= 0x40 )
      {
        v151 = ptr[0] != v498[0];
      }
      else
      {
        v151 = sub_2205D70(ptr, v498) ^ 1;
        if ( ptr[0] )
          operator delete[](ptr[0]);
      }
      if ( LODWORD(v498[1]) > 0x40 && v498[0] )
        operator delete[](v498[0]);
      if ( v151 )
        return 10;
      v99 = *(_QWORD *)(v148 + 32);
      v100 = *(_QWORD *)(v150 + 32);
LABEL_124:
      v451 = (__int64)a10;
      v119 = 1;
      v101 = (int)v12;
      v450 = nullptr;
      if ( a8 <= 0 )
        v119 = (unsigned int)a8;
      v449 = v119;
      v448 = (unsigned int)p_s;
      v103 = (int)v452;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    case 3:
    case 0xF:
    case 0x11:
    case 0x14:
    case 0x16:
    case 0x1B:
    case 0x1C:
    case 0x26:
    case 0x29:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
      return 0;
    case 4:
      v152 = sub_A72040(*(_QWORD **)(a1 + 248), v10);
      if ( !v152 )
        return 10;
      v153 = sub_A72040(*(_QWORD **)(a1 + 248), v13);
      v154 = v153;
      if ( !v153 || *(_BYTE *)(v153 + 16) != 4 )
        goto LABEL_661;
      v155 = *(_QWORD *)(v153 + 32);
      v156 = *(_QWORD *)(v152 + 32);
      v157 = 1;
      v451 = (__int64)a10;
      v450 = nullptr;
      if ( a8 <= 0 )
        v157 = a8;
      v36 = sub_1D6C080(a1, v469, v155, v156, (_DWORD)v12, (_DWORD)v452, p_s, v157, (_DWORD)v450, v451);
      if ( v36 )
        return v36;
      v158 = sub_1D365B0(*(_QWORD *)(v154 + 40), *((_DWORD *)v12 + 6));
      if ( !v158 )
        return 0;
      v159 = *(unsigned __int8 *)(v152 + 16);
      if ( (unsigned int)(v159 - 2) > 1 )
      {
        if ( (_BYTE)v159 == 4 )
        {
          v174 = *(_QWORD *)(v152 + 40);
          if ( v174 )
          {
            v176 = (int)v12;
            v451 = (__int64)a10;
            v177 = v158;
            v450 = v452;
            v178 = a8 != 0;
            return (unsigned int)sub_1D6FE90(a1, v469, v177, v174, v176, v178, (__int64)v450, v451);
          }
        }
        return 10;
      }
      sub_A5DAD0((__int64)v498, v152);
      v160 = *(_QWORD **)(a1 + 248);
      BYTE4(ptr[1]) = 1;
      v161 = a10;
      LODWORD(ptr[1]) = v498[1];
      ptr[0] = v498[0];
      v162 = sub_A63CE0(v160);
      v451 = v163;
      v36 = sub_1D6FEE0(a1, v469, v158, (unsigned int)ptr, v162, (_DWORD)v12, a8 != 0, (__int64)v452, (__int64)v161);
      if ( LODWORD(ptr[1]) > 0x40 )
      {
        v138 = ptr[0];
        if ( ptr[0] )
          goto LABEL_148;
      }
      return v36;
    case 5:
      v116 = sub_A72040(*(_QWORD **)(a1 + 248), v10);
      v117 = v116;
      if ( !v116 || *(_BYTE *)(v116 + 16) != 5 )
        return 10;
      v118 = sub_A72040(*(_QWORD **)(a1 + 248), v13);
      if ( !v118 || *(_BYTE *)(v118 + 16) != 5 )
LABEL_661:
        BUG();
      v99 = *(_QWORD *)(v117 + 32);
      v100 = *(_QWORD *)(v118 + 32);
      goto LABEL_124;
    case 6:
    case 0xA:
    case 0xD:
    case 0x19:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x2F:
    case 0x30:
    case 0x39:
      goto LABEL_26;
    case 7:
      v97 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 7 )
        v97 = sub_F63050(*v15, v39, v83, v42);
      v98 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v98 + 16) == 7 )
        goto LABEL_97;
      v104 = *(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v104 + 16) != 7 )
        return 10;
      goto LABEL_106;
    case 0xB:
      v164 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 11 )
        v164 = sub_F63050(*v15, v39, v83, v42);
      v165 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v165 + 16) != 11 )
      {
        v259 = *(_QWORD *)(*(_QWORD *)(v165 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v259 + 16) != 11 )
          return 10;
        v165 = sub_F63050(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), v39, v259, v42);
        if ( !v165 )
          return 10;
      }
      v99 = *(_QWORD *)(v165 + 32);
      v100 = *(_QWORD *)(v164 + 32);
      v166 = 1;
      v101 = (int)v12;
      v451 = (__int64)a10;
      v450 = nullptr;
      if ( a8 <= 0 )
        v166 = (unsigned int)a8;
      v449 = v166;
      v448 = 0;
      v103 = (int)v452;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    case 0xE:
      v97 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 14 )
        v97 = sub_F63050(*v15, v39, v83, v42);
      v98 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v98 + 16) == 14 )
        goto LABEL_97;
      v104 = *(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v104 + 16) != 14 )
        return 10;
LABEL_106:
      v98 = sub_F63050(v98, v39, v104, v42);
      if ( !v98 )
        return 10;
      goto LABEL_97;
    case 0x10:
      if ( (*(_BYTE *)(*v15 + 17) & 4) != 0 )
        return 0;
LABEL_26:
      if ( (a7 & 8) != 0 )
        return 0;
      if ( (_DWORD)p_s )
      {
        if ( !sub_1D37210(v13, v10) )
          return 10;
      }
      else if ( v83 != (*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v10) & 7) )
      {
        return 10;
      }
      return 0;
    case 0x12:
      v167 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 18 )
        v167 = sub_F63050(*v15, v39, v83, v42);
      v168 = *(__int64 **)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *((_BYTE *)v168 + 16) != 18
        && (*(_BYTE *)(*(_QWORD *)(v168[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 18
         || (v168 = (__int64 *)sub_F63050(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), v39, v83, v42)) == nullptr) )
      {
        if ( (*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0
          || (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_DWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 7u) <= 0x31FF )
        {
          return 10;
        }
        LODWORD(v498[1]) = sub_A97D20(
                             *(_QWORD *)(a1 + 248),
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
        if ( LODWORD(v498[1]) > 0x40 )
          sub_2205470(v498, 0, 0);
        else
          v498[0] = nullptr;
        BYTE4(v498[1]) = 0;
        v243 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
        LODWORD(v244) = 0;
        if ( (v243 & 8) != 0 )
          v244 = *(__int64 *)((char *)&qword_18 + (v243 & 0xFFFFFFFFFFFFFFF0LL));
        sub_C16580(v498, ((unsigned int)v244 >> 9) - 25);
        v245 = a10;
        v249 = sub_A72780(*(_QWORD **)(a1 + 248), v10, v246, v247, v248);
        v250 = *(_QWORD *)(v167 + 40);
        v251 = 1;
        v451 = (__int64)v245;
        v450 = nullptr;
        if ( a8 <= 0 )
          v251 = a8;
        v36 = sub_1D6C080(a1, v469, v250, v249, (_DWORD)v12, (_DWORD)v452, a7, v251, (_DWORD)v450, v451);
        if ( !v36 )
        {
          v252 = sub_1D365B0(*(_QWORD *)(v167 + 32), *((_DWORD *)v12 + 6));
          if ( v252 )
          {
            v136 = (int)v12;
            v135 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL);
            v451 = v253;
            v450 = a10;
            v449 = (__int64)v452;
            v448 = a8 != 0;
            v137 = v252;
            goto LABEL_145;
          }
        }
        goto LABEL_146;
      }
      p_s = (__int64)v168;
      v169 = v168[5];
      v170 = *(_QWORD *)(v167 + 40);
      v451 = (__int64)a10;
      v171 = 1;
      v450 = nullptr;
      if ( a8 <= 0 )
        v171 = a8;
      v172 = v452;
      v36 = sub_1D6C080(a1, v469, v170, v169, (_DWORD)v12, (_DWORD)v452, a7, v171, (_DWORD)v450, v451);
      if ( v36 )
        return v36;
      v173 = sub_1D365B0(*(_QWORD *)(v167 + 32), *((_DWORD *)v12 + 6));
      if ( !v173 )
        return 0;
      v174 = *(_QWORD *)(p_s + 32);
      v175 = a8 == 0;
      goto LABEL_208;
    case 0x13:
      v139 = (__int64 *)*v15;
      if ( *(_BYTE *)(*v15 + 16) != 19 )
        v139 = (__int64 *)sub_F63050(*v15, v39, v83, v139);
      v140 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v142 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v141 = v142;
      if ( *(_BYTE *)(v142 + 16) == 10 )
        goto LABEL_152;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v142 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10 )
        goto LABEL_325;
      p_s = (__int64)v139;
      v254 = sub_F63050(v142, v39, v83, v139);
      v139 = (__int64 *)p_s;
      v142 = v254;
      if ( v254 )
      {
LABEL_152:
        p_s = (__int64)v139;
        v36 = 10;
        if ( (unsigned __int8)sub_F57B40((__int64)v139) != (*(_BYTE *)(v142 + 32) & 1) )
          return v36;
        v143 = sub_F57B50(p_s);
        v144 = sub_1D365B0(v143, *((_DWORD *)v12 + 6));
        if ( v144 )
        {
          LODWORD(v498[1]) = sub_A97D20(
                               *(_QWORD *)(a1 + 248),
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
          if ( LODWORD(v498[1]) > 0x40 )
            sub_2205470(v498, 0, 0);
          else
            v498[0] = nullptr;
          BYTE4(v498[1]) = 0;
          sub_C16580(v498, (*(_DWORD *)(v142 + 32) >> 1) & 0xFFFFFF);
          v135 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL);
          goto LABEL_157;
        }
      }
      else
      {
        v141 = *v140;
LABEL_325:
        v255 = v141;
        if ( *(_BYTE *)(v141 + 16) != 19 )
        {
          v266 = *(_QWORD *)(v141 + 8);
          v452 = v139;
          if ( *(_BYTE *)(*(_QWORD *)(v266 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 19 )
            return 10;
          v267 = sub_F63050(v141, v39, v83, v139);
          v139 = v452;
          v255 = v267;
          if ( !v267 )
            return 10;
        }
        v256 = sub_F57B40((__int64)v139);
        if ( v256 != (unsigned __int8)sub_F57B40(v255) )
          return 10;
      }
      return 0;
    case 0x15:
      v127 = (__int64 *)*v15;
      if ( *(_BYTE *)(*v15 + 16) != 21 )
        v127 = (__int64 *)sub_F63050(*v15, v39, v83, v42);
      v128 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      v129 = *(_QWORD *)v128;
      v130 = *(_QWORD *)v128;
      if ( *(_BYTE *)(*(_QWORD *)v128 + 16LL) == 58 )
        goto LABEL_137;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v129 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58 )
        goto LABEL_356;
      p_s = (__int64)v127;
      v260 = sub_F63050(v129, v39, v83, v42);
      v127 = (__int64 *)p_s;
      v130 = v260;
      if ( v260 )
      {
LABEL_137:
        p_s = (__int64)v127;
        v131 = *(_QWORD *)(v130 + 32);
        v132 = v127[5];
        v451 = (__int64)a10;
        v133 = 1;
        v450 = nullptr;
        if ( a8 <= 0 )
          v133 = a8;
        v36 = sub_1D6C080(a1, v469, v132, v131, (_DWORD)v12, (_DWORD)v452, a7, v133, (_DWORD)v450, v451);
        if ( !v36 )
        {
          v134 = sub_1D365B0(*(_QWORD *)(p_s + 32), *((_DWORD *)v12 + 6));
          if ( v134 )
          {
            LODWORD(v498[1]) = sub_A97D20(
                                 *(_QWORD *)(a1 + 248),
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
            if ( LODWORD(v498[1]) > 0x40 )
              sub_2205470(v498, 0, 0);
            else
              v498[0] = nullptr;
            BYTE4(v498[1]) = 0;
            sub_C16580(v498, *(unsigned int *)(v130 + 20));
            v135 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL);
            goto LABEL_144;
          }
        }
        return v36;
      }
      v129 = *(_QWORD *)v128;
LABEL_356:
      v261 = v129;
      if ( *(_BYTE *)(v129 + 16) != 21 )
      {
        v325 = *(_QWORD *)(v129 + 8);
        p_s = (__int64)v127;
        if ( *(_BYTE *)(*(_QWORD *)(v325 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 21 )
          return 10;
        v326 = sub_F63050(v129, v39, v83, v42);
        v127 = (__int64 *)p_s;
        v261 = v326;
        if ( !v326 )
          return 10;
      }
      p_s = (__int64)v127;
      v262 = *(_QWORD *)(v261 + 40);
      v263 = v127[5];
      v451 = (__int64)a10;
      v450 = nullptr;
      v264 = 1;
      if ( a8 <= 0 )
        v264 = a8;
      v172 = v452;
      v36 = sub_1D6C080(a1, v469, v263, v262, (_DWORD)v12, (_DWORD)v452, a7, v264, (_DWORD)v450, v451);
      if ( v36 )
        return v36;
      v173 = sub_1D365B0(*(_QWORD *)(p_s + 32), *((_DWORD *)v12 + 6));
      if ( !v173 )
        return 0;
      v175 = a8 == 0;
      v174 = *(_QWORD *)(v261 + 32);
      goto LABEL_208;
    case 0x17:
      v210 = (__int64 *)*v15;
      if ( *(_BYTE *)(*v15 + 16) != 23 )
        v210 = (__int64 *)sub_F63050(*v15, v39, v83, v42);
      v211 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      v212 = *(_QWORD *)v211;
      v213 = *(_QWORD *)v211;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v211 + 16LL) - 57 <= 1 )
        goto LABEL_248;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v212 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
        goto LABEL_301;
      p_s = (__int64)v210;
      v238 = sub_F63050(v212, v39, v83, v42);
      v210 = (__int64 *)p_s;
      v213 = v238;
      if ( v238 )
      {
LABEL_248:
        v214 = *(_QWORD *)(v213 + 32);
        v215 = v210[4];
        p_s = (__int64)v210;
        v451 = (__int64)a10;
        v216 = 1;
        v450 = nullptr;
        if ( a8 <= 0 )
          v216 = a8;
        v36 = sub_1D6C080(a1, v469, v215, v214, (_DWORD)v12, (_DWORD)v452, a7, v216, (_DWORD)v450, v451);
        if ( v36 )
          return v36;
        v134 = sub_1D365B0(*(_QWORD *)(p_s + 40), *((_DWORD *)v12 + 6));
        if ( !v134 )
          return v36;
        LODWORD(v498[1]) = sub_A97D20(
                             *(_QWORD *)(a1 + 248),
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
        if ( LODWORD(v498[1]) > 0x40 )
          sub_2205470(v498, 0, 0);
        else
          v498[0] = nullptr;
        BYTE4(v498[1]) = 0;
        sub_C16580(v498, *(unsigned int *)(v213 + 20));
        v135 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18768LL);
LABEL_144:
        v136 = (int)v12;
        v450 = a10;
        v449 = (__int64)v452;
        v137 = v134;
        v448 = a8 != 0;
        goto LABEL_145;
      }
      v212 = *(_QWORD *)v211;
LABEL_301:
      v239 = v212;
      if ( *(_BYTE *)(v212 + 16) != 23 )
      {
        v269 = *(_QWORD *)(v212 + 8);
        p_s = (__int64)v210;
        if ( *(_BYTE *)(*(_QWORD *)(v269 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 23 )
          return 10;
        v270 = sub_F63050(v212, v39, v83, v42);
        v210 = (__int64 *)p_s;
        v239 = v270;
        if ( !v270 )
          return 10;
      }
      v240 = *(_QWORD *)(v239 + 32);
      v241 = v210[4];
      p_s = (__int64)v210;
      v451 = (__int64)a10;
      v242 = 1;
      v450 = nullptr;
      if ( a8 <= 0 )
        v242 = a8;
      v172 = v452;
      v36 = sub_1D6C080(a1, v469, v241, v240, (_DWORD)v12, (_DWORD)v452, a7, v242, (_DWORD)v450, v451);
      if ( !v36 )
      {
        v173 = sub_1D365B0(*(_QWORD *)(p_s + 40), *((_DWORD *)v12 + 6));
        if ( !v173 )
          return 0;
        v175 = a8 == 0;
        v174 = *(_QWORD *)(v239 + 40);
LABEL_208:
        v451 = (__int64)a10;
        v176 = (int)v12;
        v177 = v173;
        v450 = v172;
        v178 = !v175;
        return (unsigned int)sub_1D6FE90(a1, v469, v177, v174, v176, v178, (__int64)v450, v451);
      }
      return v36;
    case 0x1A:
      v197 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 26 )
        v197 = sub_F63050(*v15, v39, v83, v42);
      v198 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v198 + 16) != 26 )
      {
        v198 = sub_1D37970(v198, v39, v83, v42);
        if ( !v198 )
          return 10;
      }
      v199 = sub_A5DBE0(v198, v39, v83, v42, v43);
      if ( v199 != sub_A5DBE0(v197, v39, v200, v201, v202)
        || ((*(_BYTE *)(v198 + 18) >> 3) & 3) != ((*(_BYTE *)(v197 + 18) >> 3) & 3)
        || (unsigned __int8)BYTE3(*(_QWORD *)(v198 + 16)) >> 7 != (unsigned __int8)BYTE3(*(_QWORD *)(v197 + 16)) >> 7 )
      {
        return 10;
      }
      v203 = *(_QWORD *)(v198 + 24);
      v204 = *(_QWORD *)(v197 + 24);
      v205 = 1;
      v451 = (__int64)a10;
      v450 = nullptr;
      if ( a8 <= 0 )
        v205 = a8;
      v36 = sub_1D6C080(a1, v469, v204, v203, (_DWORD)v12, (_DWORD)v452, 0, v205, (_DWORD)v450, v451);
      if ( v36 )
        return v36;
      v206 = *(unsigned __int16 *)(v198 + 22);
      v207 = *(unsigned __int16 *)(v197 + 22);
      ptr[0] = nullptr;
      LODWORD(v487) = a7 & 0x10;
      v490 = a10;
      p_s = (__int64)&v490;
      v499.m128i_i64[0] = (__int64)ptr;
      *(__m128 *)v498 = _mm_loadh_ps((const double *)&p_s);
      v36 = sub_1D7BCE0(
              a1,
              v469,
              (int)v197 + 48,
              v207,
              (int)v198 + 48,
              v206,
              (__int64)v12,
              (__int64)v452,
              a8,
              (__int64)v498);
      if ( v36 )
        return v36;
      if ( (a7 & 0x20) != 0 )
        return 0;
      if ( ((*(_BYTE *)(v197 + 19) >> 1) & 0xFu) - 6 > 2 )
        return 0;
      v208 = *(_QWORD *)sub_1D38400(v197);
      if ( !v208 )
        return 0;
      v144 = sub_1D365B0(v208, *((_DWORD *)v12 + 6));
      if ( !v144 )
        return 0;
      BYTE4(v498[1]) = 1;
      LODWORD(v498[1]) = 1;
      v498[0] = nullptr;
      v209 = sub_F63060(v198);
      if ( v209 == 1 )
      {
        if ( ((*(_BYTE *)(v198 + 19) >> 1) & 0xFu) - 6 <= 2 )
        {
          v446 = *(_QWORD *)sub_1D38400(v198);
          if ( v446 )
            v36 = sub_1D6FE90(a1, v469, v144, v446, (_DWORD)v12, a8 != 0, (__int64)v452, (__int64)a10);
        }
      }
      else
      {
        if ( v209 )
        {
          if ( v209 != 2 )
            goto LABEL_146;
        }
        else
        {
          sub_C16580(v498, 1);
        }
        v135 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
LABEL_157:
        v451 = v145;
        v136 = (int)v12;
        v450 = a10;
        v137 = v144;
        v449 = (__int64)v452;
        v448 = a8 != 0;
LABEL_145:
        v36 = sub_1D6FEE0(a1, v469, v137, (unsigned int)v498, v135, v136, v448, v449, (__int64)v450);
      }
LABEL_146:
      if ( LODWORD(v498[1]) > 0x40 )
      {
        v138 = v498[0];
        if ( v498[0] )
LABEL_148:
          operator delete[](v138);
      }
      return v36;
    case 0x1D:
    case 0x31:
      if ( (a7 & 4) == 0 )
        return (unsigned int)sub_1D718B0(a1, v469, v13, v10, (_DWORD)v12, a8 != 0, (__int64)v452, (__int64)a10);
      v217 = (void *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
        return (unsigned int)sub_1D718B0(a1, v469, v13, v10, (_DWORD)v12, a8 != 0, (__int64)v452, (__int64)a10);
      v271 = (void *)*v452;
      v272 = *((unsigned int *)v452 + 2);
      v457 = (__int64 *)&v484;
      v273 = 32 * v272;
      src[0] = v271;
      v485 = 0x800000000LL;
      v484 = v486;
      p_s = v273 >> 5;
      if ( (unsigned __int64)v273 > 0x100 )
      {
        sub_2237220(v457, v486, v273 >> 5, 32);
        v217 = (void *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else if ( !v273 )
      {
        goto LABEL_383;
      }
      v455 = (__int64)v217;
      memcpy((char *)v484 + 32 * (unsigned int)v485, src[0], v273);
      v217 = (void *)v455;
LABEL_383:
      src[0] = v217;
      LODWORD(v485) = p_s + v485;
      LODWORD(v461) = a8 != 0;
      v36 = sub_1D718B0(a1, v469, v13, v10, (_DWORD)v12, (_DWORD)v461, (__int64)v452, (__int64)a10);
      if ( !v36 )
        goto LABEL_444;
      v274 = *((unsigned int *)v12 + 4);
      p_s = (__int64)src[0];
      if ( (unsigned __int8)sub_1E63330(a1, v274, v10, 1, 0) )
        goto LABEL_444;
      v279 = (char *)sub_F63270(*(_QWORD *)p_s, v274, v275, v276, v277, v278);
      if ( v279[28] < 0 )
        goto LABEL_444;
      v456 = &v479;
      p_s = (__int64)&s;
      v460 = &s;
      *(__m128 *)src = _mm_loadh_ps((const double *)&v456);
      sub_1D3C410(v452, v457);
      v280 = _mm_load_si128((const __m128i *)src);
      v462 = a10;
      s = v460 + 3;
      v463 = v469;
      v479 = v456 + 2;
      v281 = (__int64)&v471.m128i_i64[1];
      p_s = (__int64)&v473;
      v480 = 0x800000000LL;
      v476 = &v478;
      *(_QWORD *)v482 = 8;
      *(_DWORD *)&v482[8] = 0;
      v483 = 1;
      v473 = nullptr;
      v474 = 0;
      v475 = 0;
      v477 = 0;
      v471 = v280;
      src[0] = &v471;
      sub_1D3D1C0(v471.m128i_i64, &v471.m128i_i64[1], (__int64)v279, 0x800000000LL, v282, v283);
      v465 = v13;
      v458 = (__int64 *)&v487;
      v286 = 0x800000000LL;
      v459 = (__int64 *)&v489;
      v455 = 0x800000000LL;
      v466 = v36;
      v467 = a1;
      break;
    case 0x1F:
      v97 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 31 )
        v97 = sub_F63050(*v15, v39, v83, v42);
      v98 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v98 + 16) != 31 )
      {
        v265 = *(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v265 + 16) != 31 )
          return 10;
        v98 = sub_F63050(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), v39, v265, v42);
        if ( !v98 )
          return 10;
      }
      if ( *(_DWORD *)(v98 + 40) != *(_DWORD *)(v97 + 40) || *(_DWORD *)(v98 + 44) != *(_DWORD *)(v97 + 44) )
        return 10;
      goto LABEL_97;
    case 0x20:
      v221 = (_QWORD *)*v15;
      if ( *(_BYTE *)(*v15 + 16) != 32 )
        v221 = (_QWORD *)sub_F63050(*v15, v39, v83, v42);
      v222 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v222 + 16) - 31 > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v222 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31 > 1 )
          return 10;
        v222 = sub_F63050(v222, v39, v83, v42);
        if ( !v222 )
          return 10;
      }
      v223 = *(_QWORD *)(v222 + 32);
      v224 = v221[4];
      v225 = 1;
      v451 = (__int64)a10;
      v450 = nullptr;
      if ( a8 <= 0 )
        v225 = a8;
      v36 = sub_1D6C080(a1, v469, v224, v223, (_DWORD)v12, (_DWORD)v452, a7, v225, (_DWORD)v450, v451);
      if ( !v36 )
      {
        p_s = (__int64)v12;
        v499.m128i_i64[0] = (__int64)v452;
        v499.m128i_i64[1] = (__int64)&v469;
        v500 = &a10;
        *(__m128 *)v498 = _mm_loadh_ps((const double *)&p_s);
        LODWORD(v501) = a8;
        v227 = v221[5];
        v451 = 0;
        v36 = sub_1D6FF70((unsigned int)v498, v227, v222, (unsigned int)sub_1D36570, 0, v226, (__int64)sub_1D36590);
        if ( !v36 )
        {
          v229 = v221[6];
          v451 = 0;
          return (unsigned int)sub_1D6FF70(
                                 (unsigned int)v498,
                                 v229,
                                 v222,
                                 (unsigned int)sub_1D36580,
                                 0,
                                 v228,
                                 (__int64)sub_1D365A0);
        }
      }
      return v36;
    case 0x21:
      v179 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 33 )
        v179 = sub_F63050(*v15, v39, v83, v42);
      v180 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v180 + 16) != 33 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v180 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          return 10;
        v180 = sub_F63050(v180, v39, v83, v42);
        if ( !v180 )
          return 10;
      }
      v490 = *(void **)(v179 + 32);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v490
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        sub_1E64770(a1, &v490, 0, 0, *((unsigned int *)v12 + 4));
      ptr[0] = *(void **)(v180 + 32);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)ptr[0]
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        sub_1E64770(a1, ptr, 0, 0, *((unsigned int *)v12 + 4));
      v181 = 1;
      if ( a8 <= 0 )
        v181 = a8;
      LODWORD(src[0]) = v181;
      v36 = sub_1D6C080(a1, v469, (_DWORD)v490, ptr[0], (_DWORD)v12, (_DWORD)v452, p_s, v181, 0, (__int64)a10);
      if ( v36 )
        return v36;
      if ( sub_F62DD0(v179) )
      {
        v182 = *(_QWORD *)(a1 + 248);
        v183 = sub_F61C10(v179);
        v187 = v183[6];
        if ( v187 )
          LODWORD(v188) = v187 & 0xFFFFFFF0;
        else
          LODWORD(v188) = sub_A7AA70(v182, (__int64)v183, 0, v184, v185, v186);
      }
      else
      {
        v268 = *(_QWORD *)(v179 + 40);
        if ( !(unsigned int)sub_E90000(v268) )
          return v36;
        v188 = sub_E90120(v268, *(_QWORD **)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0LL;
      }
      v189 = v188;
      if ( sub_F62DD0(v180) )
      {
        v190 = *(_QWORD *)(a1 + 248);
        v191 = sub_F61C10(v180);
        v195 = v191[6];
        if ( v195 )
          v196 = v195 & 0xFFFFFFF0;
        else
          v196 = sub_A7AA70(v190, (__int64)v191, 0, v192, v193, v194);
      }
      else
      {
        v498[0] = (void *)(sub_E90120(*(_QWORD *)(v180 + 40), *(_QWORD **)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0LL);
        v196 = sub_6D5440(v498);
      }
      v451 = (__int64)a10;
      v101 = (int)v12;
      LODWORD(v99) = v196;
      LODWORD(v100) = v189;
      v450 = nullptr;
      v449 = LODWORD(src[0]);
      v448 = (unsigned int)p_s;
      v103 = (int)v452;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    case 0x27:
      v218 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 39 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v218 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 39 )
          v218 = sub_F63050(*v15, v39, v83, v42);
        else
          v218 = 0;
      }
      v36 = 4;
      if ( !(unsigned int)sub_F5E0F0(v218) )
        return v36;
      v219 = a10;
      v100 = *(_QWORD *)(v218 + 8LL * ((unsigned int)sub_F5E0F0(v218) - 1) + 64);
      v451 = (__int64)v219;
      v450 = nullptr;
      v220 = 1;
      if ( a8 <= 0 )
        v220 = (unsigned int)a8;
      v449 = v220;
      v448 = a7;
      goto LABEL_133;
    case 0x2A:
      v120 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      v121 = *v120;
      if ( *(_BYTE *)(*v120 + 16) != 42 )
      {
        v121 = sub_1D379D0(*v120, v39, v83, v42);
        if ( !v121 )
        {
          v121 = *v120;
          if ( *(_BYTE *)(*v120 + 16) != 34 )
          {
            v258 = *(_QWORD *)(*(_QWORD *)(v121 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v258 + 16) != 34 )
              return 10;
            v121 = sub_F63050(*v120, v39, v258, v257);
            if ( !v121 )
              return 10;
          }
        }
      }
      v10 = *(_QWORD *)(v121 + 32);
      v122 = 1;
      v123 = a10;
      v124 = *v15;
      if ( a8 <= 0 )
        v122 = (unsigned int)a8;
      v125 = a7 & 6;
      if ( *(_BYTE *)(v124 + 16) != 42 )
      {
        v126 = *v15;
        LODWORD(p_s) = a7 & 6;
        v124 = sub_F63050(v126, v39, v83, v125);
        v125 = a7 & 6;
      }
      v100 = *(_QWORD *)(v124 + 32);
      v451 = (__int64)v123;
      v450 = nullptr;
      v449 = v122;
      v448 = v125;
LABEL_133:
      v103 = (int)v452;
      v101 = (int)v12;
      LODWORD(v99) = v10;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    case 0x2B:
      v107 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 43 )
        v107 = sub_F63050(*v15, v39, v83, v42);
      v108 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v108 + 16) == 43 )
        goto LABEL_116;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v108 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 43 )
        goto LABEL_162;
      return 10;
    case 0x2C:
      v107 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 44 )
        v107 = sub_F63050(*v15, v39, v83, v42);
      v108 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v108 + 16) == 44 )
        goto LABEL_116;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v108 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
        return 10;
LABEL_162:
      v108 = sub_F63050(v108, v39, v83, v42);
      if ( !v108 )
        return 10;
LABEL_116:
      v109 = a10;
      v110 = sub_9B4870(v108, v39, v83, v42, v43);
      v114 = sub_9B4870(v107, v39, v111, v112, v113);
      v451 = (__int64)v109;
      v115 = 1;
      v101 = (int)v12;
      v450 = nullptr;
      LODWORD(v99) = v110;
      LODWORD(v100) = v114;
      if ( a8 <= 0 )
        v115 = (unsigned int)a8;
      v449 = v115;
      v448 = 0;
      v103 = (int)v452;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    case 0x3A:
      v97 = *v15;
      if ( *(_BYTE *)(*v15 + 16) != 58 )
        v97 = sub_F63050(*v15, v39, v83, v42);
      v105 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      v106 = *(_QWORD *)v105;
      v98 = *(_QWORD *)v105;
      if ( *(_BYTE *)(*(_QWORD *)v105 + 16LL) == 58 )
        goto LABEL_111;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58 )
        goto LABEL_343;
      v98 = sub_F63050(v106, v39, v83, v42);
      if ( v98 )
      {
LABEL_111:
        if ( *(_DWORD *)(v97 + 20) != *(_DWORD *)(v98 + 20) )
          return 10;
LABEL_97:
        v99 = *(_QWORD *)(v98 + 32);
      }
      else
      {
        v106 = *(_QWORD *)v105;
LABEL_343:
        if ( *(_BYTE *)(v106 + 16) != 21 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 21 )
            return 10;
          v106 = sub_F63050(v106, v39, v83, v42);
          if ( !v106 )
            return 10;
        }
        v99 = *(_QWORD *)(v106 + 40);
      }
      v100 = *(_QWORD *)(v97 + 32);
      v451 = (__int64)a10;
      v101 = (int)v12;
      v450 = nullptr;
      v102 = 1;
      if ( a8 <= 0 )
        v102 = (unsigned int)a8;
      v449 = v102;
      v448 = a7;
      v103 = (int)v452;
      return (unsigned int)sub_1D6C080(a1, v469, v100, v99, v101, v103, v448, v449, (_DWORD)v450, v451);
    default:
      goto LABEL_664;
  }
  while ( (_DWORD)v480 )
  {
    v287 = *((_QWORD *)v479 + (unsigned int)v480 - 1);
    LODWORD(v480) = v480 - 1;
    v288 = (const void *)*v452;
    v289 = 32LL * *((unsigned int *)v452 + 2);
    v487 = v459;
    v290 = v289 >> 5;
    v488 = v455;
    if ( (unsigned __int64)v289 > 0x100 )
    {
      sub_2237220(v458, v459, v289 >> 5, 32);
    }
    else if ( !v289 )
    {
      goto LABEL_390;
    }
    memcpy((char *)v487 + 32 * (unsigned int)v488, v288, v289);
LABEL_390:
    v291 = (void *)*v12;
    v292 = v455;
    LODWORD(v488) = v290 + v488;
    v498[0] = v291;
    LODWORD(v291) = *((_DWORD *)v12 + 4);
    v501 = 0x400000000LL;
    v499.m128i_i32[0] = (int)v291;
    v293 = v12[3];
    v514 = 0x400000000LL;
    v499.m128i_i64[1] = v293;
    v500 = &v38[3];
    v503 &= 0xFFFFFFFE00000000LL;
    v505 &= 0xFFFFFFFE00000000LL;
    v509 = &v38[16];
    v513 = &v38[22];
    v516 = &v38[29].m128_u16[4];
    v517 = 0x400000000LL;
    v498[1] = nullptr;
    v499.m128i_i16[2] = 0;
    v502 = 0;
    v504 = 0;
    v506 = 0;
    v507 = 0;
    v508 = 0;
    v510 = v455;
    v511 = 0;
    v512 = 0;
    v515 = 0;
    v470 = 0;
    v294 = v463;
    v295 = sub_1D718B0(v467, v463, v465, v287, (_DWORD)v38, (_DWORD)v461, (__int64)v458, (__int64)&v470);
    v300 = sub_F63270(*(_QWORD *)(v287 & 0xFFFFFFFFFFFFFFF0LL), v294, v296, v297, v298, v299);
    v304 = v300;
    if ( v295 )
    {
      v281 = (__int64)src[0] + 8;
      sub_1D3D1C0((__int64 *)src[0], (_QWORD *)src[0] + 1, (__int64)v300, v301, (_QWORD *)v302, v303);
    }
    else
    {
      v491 = v292;
      v490 = v492;
      if ( (_DWORD)v488 )
        sub_1D3C410((__int64 *)&v490, v458);
      v305 = ptr;
      ptr[0] = v304;
      v493 = v470;
      ptr[1] = &v496;
      v495 = v455;
      if ( (_DWORD)v491 )
        sub_1D3C410((__int64 *)&ptr[1], (__int64 *)&v490);
      v306 = v475;
      v307 = v473;
      v497 = v493;
      if ( v475 )
      {
        v308 = ptr[0];
        v302 = v475 - 1;
        v309 = 1;
        v310 = 0;
        for ( i = v302 & ((LODWORD(ptr[0]) >> 9) ^ (LODWORD(ptr[0]) >> 4)); ; i = v302 & v424 )
        {
          v281 = (__int64)&v473[2 * i];
          v312 = *(_QWORD *)v281;
          if ( ptr[0] == *(void **)v281 )
          {
            sub_E7EDF0(&v472, (_QWORD *)v281, &v473[2 * v475], p_s, 1);
            goto LABEL_399;
          }
          if ( v312 == -4096 )
            break;
          if ( v312 != -8192 || v310 )
            v281 = v310;
          v424 = v309 + i;
          v310 = v281;
          ++v309;
        }
        v301 = 3 * v475;
        if ( v310 )
          v281 = v310;
        v303 = (unsigned int)(4 * (v474 + 1));
        if ( (unsigned int)v303 < (unsigned int)v301 )
        {
          if ( v475 - HIDWORD(v474) - ((_DWORD)v474 + 1) > v475 >> 3 )
            goto LABEL_578;
          v464 = -4096;
          v408 = ((((((((((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                      | (unsigned int)v302
                      | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 4)
                    | (((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                    | (unsigned int)v302
                    | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 8)
                  | (((((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                    | (unsigned int)v302
                    | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 4)
                  | (((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                  | (unsigned int)v302
                  | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 16)
                | (((((((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                    | (unsigned int)v302
                    | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 4)
                  | (((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                  | (unsigned int)v302
                  | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 8)
                | (((((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                  | (unsigned int)v302
                  | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 4)
                | (((unsigned int)v302 | ((unsigned __int64)(unsigned int)v302 >> 1)) >> 2)
                | (unsigned int)v302
                | ((unsigned __int64)(unsigned int)v302 >> 1))
               + 1;
          if ( (unsigned int)v408 < 0x40 )
            LODWORD(v408) = 64;
          v475 = v408;
          v409 = (__int64 *)sub_22300B0(16LL * (unsigned int)v408, 8, -4096, 64, v302, v303);
          v410 = v464;
          v473 = v409;
          if ( v307 )
          {
            v411 = 2 * v306;
            v474 = 0;
            v464 = (__int64)&v307[v411];
            v412 = v409;
            v413 = &v409[2 * v475];
            while ( v413 != v412 )
            {
              *v412 = v410;
              v412 += 2;
            }
            for ( j = v307; (__int64 *)v464 != j; j += 2 )
            {
              v393 = *j;
              if ( *j != -8192 && v393 != -4096 )
              {
                if ( !v475 )
                  goto LABEL_662;
                v415 = 1;
                v416 = nullptr;
                for ( k = (v475 - 1) & (((unsigned int)v393 >> 9) ^ ((unsigned int)v393 >> 4)); ; k = (v475 - 1) & v426 )
                {
                  v418 = &v409[2 * k];
                  v419 = *v418;
                  if ( v393 == *v418 )
                    break;
                  if ( v419 == -4096 )
                  {
                    if ( v416 )
                      v418 = v416;
                    break;
                  }
                  if ( v419 != -8192 || v416 )
                    v418 = v416;
                  v426 = v415 + k;
                  v416 = v418;
                  ++v415;
                }
                v420 = *((_DWORD *)j + 2);
                *v418 = v393;
                *((_DWORD *)v418 + 2) = v420;
                LODWORD(v474) = v474 + 1;
              }
            }
            operator delete(v307, v411 * 8, 8);
          }
          else
          {
            v474 = 0;
            v436 = &v409[2 * v475];
            while ( v436 != v409 )
            {
              *v409 = v410;
              v409 += 2;
            }
          }
          if ( v475 )
          {
            v308 = ptr[0];
            v307 = v473;
            v421 = 1;
            v401 = 0;
            for ( m = (v475 - 1) & ((LODWORD(ptr[0]) >> 9) ^ (LODWORD(ptr[0]) >> 4)); ; m = (v475 - 1) & v425 )
            {
              v281 = (__int64)&v473[2 * m];
              v423 = *(_QWORD *)v281;
              if ( ptr[0] == *(void **)v281 )
                break;
              if ( v423 == -4096 )
                goto LABEL_604;
              if ( v423 != -8192 || v401 )
                v281 = v401;
              v425 = v421 + m;
              v401 = v281;
              ++v421;
            }
            goto LABEL_578;
          }
LABEL_663:
          LODWORD(v474) = v474 + 1;
          BUG();
        }
      }
      v386 = (((((((2 * v475 - 1) | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 2)
               | (2 * v475 - 1)
               | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 4)
             | (((2 * v475 - 1) | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 2)
             | (2 * v475 - 1)
             | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 8)
           | (((((2 * v475 - 1) | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 2)
             | (2 * v475 - 1)
             | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 4)
           | (((2 * v475 - 1) | ((unsigned __int64)(2 * v475 - 1) >> 1)) >> 2)
           | (2 * v475 - 1)
           | ((unsigned __int64)(2 * v475 - 1) >> 1);
      v387 = ((v386 >> 16) | v386) + 1;
      if ( (unsigned int)v387 < 0x40 )
        LODWORD(v387) = 64;
      v475 = v387;
      v388 = (__int64 *)sub_22300B0(16LL * (unsigned int)v387, 8, 64, v301, v302, v303);
      v473 = v388;
      if ( v307 )
      {
        v389 = 2 * v306;
        v390 = v388;
        v474 = 0;
        v464 = (__int64)&v307[v389];
        v391 = &v388[2 * v475];
        while ( v391 != v390 )
        {
          *v390 = -4096;
          v390 += 2;
        }
        for ( n = v307; (__int64 *)v464 != n; n += 2 )
        {
          v393 = *n;
          if ( *n != -8192 && v393 != -4096 )
          {
            if ( !v475 )
            {
LABEL_662:
              *(_QWORD *)&dword_0 = v393;
              BUG();
            }
            v394 = 1;
            v395 = nullptr;
            for ( ii = (v475 - 1) & (((unsigned int)v393 >> 9) ^ ((unsigned int)v393 >> 4)); ; ii = (v475 - 1) & v445 )
            {
              v397 = &v388[2 * ii];
              v398 = *v397;
              if ( v393 == *v397 )
                break;
              if ( v398 == -4096 )
              {
                if ( v395 )
                  v397 = v395;
                break;
              }
              if ( v398 != -8192 || v395 )
                v397 = v395;
              v445 = v394 + ii;
              v395 = v397;
              ++v394;
            }
            v399 = *((_DWORD *)n + 2);
            *v397 = v393;
            *((_DWORD *)v397 + 2) = v399;
            LODWORD(v474) = v474 + 1;
          }
        }
        operator delete(v307, v389 * 8, 8);
      }
      else
      {
        v474 = 0;
        v444 = &v388[2 * v475];
        while ( v444 != v388 )
        {
          *v388 = -4096;
          v388 += 2;
        }
      }
      if ( !v475 )
        goto LABEL_663;
      v308 = ptr[0];
      v307 = v473;
      v400 = 1;
      v401 = 0;
      for ( jj = (v475 - 1) & ((LODWORD(ptr[0]) >> 9) ^ (LODWORD(ptr[0]) >> 4)); ; jj = (v475 - 1) & v404 )
      {
        v281 = (__int64)&v473[2 * jj];
        v403 = *(_QWORD *)v281;
        if ( ptr[0] == *(void **)v281 )
          break;
        if ( v403 == -4096 )
        {
LABEL_604:
          if ( v401 )
            v281 = v401;
          break;
        }
        if ( v401 || v403 != -8192 )
          v281 = v401;
        v404 = v400 + jj;
        v401 = v281;
        ++v400;
      }
LABEL_578:
      LODWORD(v474) = v474 + 1;
      if ( *(_QWORD *)v281 != -4096 )
        --HIDWORD(v474);
      *(_QWORD *)v281 = v308;
      v405 = (__int64 *)p_s;
      *(_DWORD *)(v281 + 8) = 0;
      sub_E7EDF0(&v472, (_QWORD *)v281, &v307[2 * v475], (__int64)v405, 1);
      v406 = (unsigned int)v477;
      *(_DWORD *)(v472.m128_u64[0] + 8) = v477;
      if ( HIDWORD(v477) <= (unsigned int)v406 )
      {
        v281 = p_s + 40;
        v427 = sub_2237400(p_s + 24, p_s + 40, 0, 288, &v472);
        v428 = v427 + 288LL * (unsigned int)v477;
        *(void **)v428 = ptr[0];
        *(_QWORD *)(v428 + 8) = v428 + 24;
        *(_QWORD *)(v428 + 16) = v455;
        if ( (_DWORD)v495 )
        {
          v281 = (__int64)&ptr[1];
          sub_1D67790(v428 + 8, (char **)&ptr[1]);
        }
        v429 = (char *)v476;
        v464 = (__int64)ptr;
        v430 = v427;
        v468 = v38;
        v431 = v12;
        *(_BYTE *)(v428 + 280) = v497;
        v432 = v429;
        v433 = &v429[288 * (unsigned int)v477];
        while ( v433 != v432 )
        {
          v435 = *(_QWORD *)v432;
          *(_DWORD *)(v427 + 16) = 0;
          *(_DWORD *)(v427 + 20) = 8;
          *(_QWORD *)v427 = v435;
          v175 = *((_DWORD *)v432 + 4) == 0;
          *(_QWORD *)(v427 + 8) = v427 + 24;
          if ( !v175 )
          {
            v281 = (__int64)(v432 + 8);
            sub_1D67790(v427 + 8, (char **)v432 + 1);
          }
          v434 = v432[280];
          v427 += 288;
          v432 += 288;
          *(_BYTE *)(v427 - 8) = v434;
        }
        v437 = (void *)v430;
        v305 = (void **)v464;
        v464 = (__int64)v468;
        v438 = v437;
        v439 = (char *)v476;
        v440 = (char *)v476 + 288 * (unsigned int)v477;
        while ( v439 != v440 )
        {
          v440 -= 288;
          v441 = *((char **)v440 + 1);
          if ( v441 != v440 + 24 )
            free(v441);
        }
        v442 = v438;
        v12 = v431;
        v443 = v472.m128_i32[0];
        v38 = (__m128 *)v464;
        if ( v476 != (void *)(p_s + 40) )
          free(v476);
        v476 = v442;
        HIDWORD(v477) = v443;
        LODWORD(v477) = v477 + 1;
      }
      else
      {
        v407 = (char *)v476 + 288 * v406;
        *(void **)v407 = ptr[0];
        *((_QWORD *)v407 + 1) = v407 + 24;
        *((_QWORD *)v407 + 2) = v455;
        if ( (_DWORD)v495 )
        {
          v281 = (__int64)&ptr[1];
          sub_1D67790((__int64)(v407 + 8), (char **)&ptr[1]);
        }
        LODWORD(v477) = v477 + 1;
        v407[280] = v497;
      }
LABEL_399:
      if ( ptr[1] != v305 + 3 )
        free(ptr[1]);
      if ( v490 != v492 )
        free(v490);
    }
    if ( v516 != &v38[29].m128_u16[4] )
      free(v516);
    if ( v513 != &v38[22] )
      free(v513);
    if ( v509 != &v38[16] )
      free(v509);
    v313 = (char *)v500 + 32 * (unsigned int)v501;
    if ( v500 != v313 )
    {
      v464 = (__int64)v12;
      v314 = v500;
      do
      {
        v313 -= 4;
        v315 = v313[1];
        if ( v315 )
        {
          v316 = v313[2];
          if ( v316 )
          {
            if ( v315 < v316 || v315 > v316 + 14848 )
            {
              v317 = *(_QWORD *)(v315 + 528);
              v318 = v317 + ((unsigned __int64)*(unsigned int *)(v315 + 536) << 6);
              while ( v317 != v318 )
              {
                while ( 1 )
                {
                  v318 -= 64;
                  v319 = *(void **)(v318 + 24);
                  if ( v319 == (void *)(v318 + 40) )
                    break;
                  operator delete(v319);
                  if ( v317 == v318 )
                    goto LABEL_418;
                }
              }
LABEL_418:
              v320 = *(void **)(v315 + 528);
              if ( v320 != (void *)(v315 + 544) )
                free(v320);
              v321 = *(void **)(v315 + 416);
              v322 = (void **)(v315 + 416);
              if ( v321 != (void *)(v315 + 432) )
                free(v321);
              v323 = (void **)(v315 + 96);
              do
              {
                while ( 1 )
                {
                  v322 -= 4;
                  if ( *v322 == v322 + 2 )
                    break;
                  operator delete(*v322);
                  if ( v323 == v322 )
                    goto LABEL_425;
                }
              }
              while ( v323 != v322 );
LABEL_425:
              v281 = 928;
              operator delete((void *)v315, 0x3A0u);
            }
            else
            {
              v324 = *(unsigned int *)(v316 + 14976);
              v286 = (unsigned int)(v324 + 1);
              *(_DWORD *)(v316 + 14976) = v286;
              *(_QWORD *)(v316 + 8 * v324 + 14848) = v315;
            }
          }
        }
      }
      while ( v314 != v313 );
      v12 = (__int64 *)v464;
    }
    if ( v500 != &v38[3] )
      free(v500);
    if ( v487 != v459 )
      free(v487);
  }
  v36 = v466;
  if ( (unsigned int)v477 <= 1 )
    goto LABEL_464;
  if ( v483 )
  {
LABEL_501:
    *(_QWORD *)&v482[4] = 0;
  }
  else
  {
    v350 = 4 * (*(_DWORD *)&v482[4] - *(_DWORD *)&v482[8]);
    if ( v350 < 0x20 )
      v350 = 32;
    if ( v350 >= *(_DWORD *)v482 )
    {
      v281 = 0xFFFFFFFFLL;
      memset(s, -1, 8LL * *(unsigned int *)v482);
      goto LABEL_501;
    }
    sub_22364B0(v460);
  }
  v351 = (__int64 *)v476;
  v352 = (char *)src[0] + 8;
  v353 = (__int64 *)((char *)v476 + 288 * (unsigned int)v477);
  while ( v351 != v353 )
  {
    v354 = *v351;
    v281 = (__int64)v352;
    v351 += 36;
    sub_1D3D1C0((__int64 *)src[0], v352, v354, v286, v284, v285);
  }
  LODWORD(v455) = v36;
  v355 = (__int64 *)p_s;
  v458 = (__int64 *)((char *)src[0] + 8);
  while ( (unsigned int)v477 > 1 )
  {
    v356 = v480;
    if ( !(_DWORD)v480 )
    {
      v36 = v455;
      v328 = 16;
      v327 = v476;
      goto LABEL_466;
    }
    v357 = *((_QWORD *)v479 + (unsigned int)v480 - 1);
    LODWORD(v480) = v480 - 1;
    v358 = sub_F63270(*(_QWORD *)(v357 & 0xFFFFFFFFFFFFFFF0LL), v281, v357, v356, (__int64)v284, v285);
    if ( v475 )
    {
      v359 = 1;
      for ( kk = (v475 - 1) & (((unsigned int)v358 >> 9) ^ ((unsigned int)v358 >> 4)); ; kk = (v475 - 1) & v384 )
      {
        v361 = &v473[2 * kk];
        if ( v358 == (_QWORD *)*v361 )
          break;
        if ( *v361 == -4096 )
          goto LABEL_542;
        v384 = v359 + kk;
        ++v359;
      }
      sub_E7EDF0(v38, v361, &v473[2 * v475], (__int64)v355, 1);
      v362 = (unsigned int *)v498[0];
    }
    else
    {
LABEL_542:
      sub_E7EDF0(v38, &v473[2 * v475], &v473[2 * v475], (__int64)v355, 1);
      v362 = (unsigned int *)v498[0];
    }
    sub_E7EDF0(v38, &v473[2 * v475], &v473[2 * v475], (__int64)v355, 1);
    if ( v362 != v498[0] )
    {
      v366 = v476;
      v367 = 288LL * (unsigned int)v477;
      v368 = (__int64 *)((char *)v476 + 288 * v362[2]);
      if ( v368 != (__int64 *)((char *)v476 + v367) )
      {
        if ( v475 )
        {
          v365 = *v368;
          v364 = 1;
          for ( mm = (v475 - 1) & (((unsigned int)*v368 >> 9) ^ ((unsigned int)*v368 >> 4)); ; mm = (v475 - 1) & v385 )
          {
            v370 = &v473[2 * mm];
            if ( v365 == *v370 )
              break;
            if ( *v370 == -4096 )
              goto LABEL_518;
            v385 = v364 + mm;
            v364 = (unsigned int)(v364 + 1);
          }
          *v370 = -8192;
          v366 = v476;
          LODWORD(v474) = v474 - 1;
          ++HIDWORD(v474);
        }
LABEL_518:
        v363 = 0x8E38E38E38E38E39LL * ((v366 - (_BYTE *)v368 + v367 - 288) >> 5);
        if ( v366 - (_BYTE *)v368 + v367 - 288 > 0 )
        {
          v459 = v368;
          v371 = v368 + 1;
          v460 = (void **)v38;
          v372 = v363;
          v461 = v355;
          v373 = v358;
          do
          {
            v374 = v371[35];
            v375 = (__int64)v371;
            v371 += 36;
            *(v371 - 37) = v374;
            sub_1D67790(v375, (char **)v371);
            *(_BYTE *)(v375 + 272) = *(_BYTE *)(v375 + 560);
            --v372;
          }
          while ( v372 );
          v358 = v373;
          v368 = v459;
          v38 = (__m128 *)v460;
          v355 = v461;
          v366 = v476;
        }
        LODWORD(v477) = v477 - 1;
        v376 = &v366[288 * (unsigned int)v477];
        v377 = *((char **)v376 + 1);
        if ( v377 != v376 + 24 )
        {
          free(v377);
          v366 = v476;
        }
        if ( v368 != (__int64 *)&v366[288 * (unsigned int)v477] )
        {
          v378 = 0x8E38E38E38E38E39LL * (((char *)v368 - v366) >> 5);
          if ( (_DWORD)v474 )
            sub_E7EDF0(v38, v473, &v473[2 * v475], (__int64)v355, 0);
          else
            sub_E7EDF0(v38, &v473[2 * v475], &v473[2 * v475], (__int64)v355, 1);
          v460 = (void **)v498[1];
          v459 = (__int64 *)v498[0];
          sub_E7EDF0(v38, &v473[2 * v475], &v473[2 * v475], (__int64)v355, 1);
          v365 = (__int64)v459;
          v379 = v460;
          v363 = (__int64)v498[0];
          while ( v365 != v363 )
          {
            v380 = *(unsigned int *)(v365 + 8);
            if ( v378 < v380 )
              *(_DWORD *)(v365 + 8) = v380 - 1;
            if ( v379 == (void **)(v365 + 16) )
            {
              v365 = (__int64)v379;
            }
            else
            {
              v381 = *(_QWORD *)(v365 + 16);
              if ( v381 == -4096 || v381 == -8192 )
              {
                v382 = (void **)(v365 + 32);
                do
                {
                  v365 = (__int64)v382;
                  if ( v379 == v382 )
                    break;
                  v383 = *v382;
                  v382 += 2;
                }
                while ( v383 == (void *)-8192LL || v383 == (void *)-4096LL );
              }
              else
              {
                v365 += 16;
              }
            }
          }
        }
      }
    }
    v281 = (__int64)v458;
    sub_1D3D1C0((__int64 *)src[0], v458, (__int64)v358, v363, (_QWORD *)v364, v365);
  }
  v36 = v455;
LABEL_464:
  if ( (_DWORD)v477 )
  {
    v327 = v476;
    v331 = v452;
    if ( v452 != (__int64 *)((char *)v476 + 8) )
    {
      v332 = *((char **)v476 + 1);
      v333 = *((_DWORD *)v452 + 2);
      if ( v332 == (char *)v476 + 24 || (__int64 *)*v452 == v452 + 2 )
      {
        if ( *((_DWORD *)v476 + 5) < v333 )
          sub_2237220((char *)v476 + 8, (char *)v476 + 24, v333, 32);
        v337 = (unsigned int)v327[4];
        if ( *((_DWORD *)v452 + 3) < v327[4] )
        {
          sub_2237220(v452, v452 + 2, (unsigned int)v327[4], 32);
          v337 = (unsigned int)v327[4];
        }
        v338 = *((unsigned int *)v452 + 2);
        if ( v337 <= v338 )
          v338 = v337;
        v339 = 0;
        while ( v339 != v338 )
        {
          v340 = v339++;
          v340 *= 32;
          v341 = (__m128 *)(v340 + *v452);
          v342 = (__m128i *)(*((_QWORD *)v327 + 1) + v340);
          *(__m128i *)v498 = _mm_loadu_si128(v342);
          v499 = _mm_loadu_si128(v342 + 1);
          qmemcpy(v342, v341, 0x19u);
          qmemcpy(v341, v38, 0x19u);
        }
        v343 = (unsigned int)v327[4];
        v344 = *((unsigned int *)v452 + 2);
        src[0] = (void *)v343;
        v345 = v344;
        if ( v343 <= v344 )
        {
          if ( v343 < v344 )
          {
            v349 = (const void *)(*v452 + 32 * v338);
            if ( v349 != (const void *)(32 * v344 + *v452) )
            {
              memcpy((void *)(32 * v343 + *((_QWORD *)v327 + 1)), v349, 32 * v344 - 32 * v338);
              LODWORD(v343) = v327[4];
            }
            v327[4] = v344 + v343 - LODWORD(src[0]);
            *((_DWORD *)v452 + 2) = v338;
          }
          v327 = v476;
        }
        else
        {
          v346 = *((_QWORD *)v327 + 1);
          v347 = (const void *)(v346 + 32 * v338);
          if ( v347 != (const void *)(32 * v343 + v346) )
          {
            v348 = v344;
            v344 = (unsigned __int64)v452;
            memcpy((void *)(*v452 + 32 * v348), v347, 32 * v343 - 32 * v338);
            LODWORD(v344) = *(_DWORD *)(v344 + 8);
          }
          *((_DWORD *)v452 + 2) = v344 + v343 - v345;
          v327[4] = v338;
          v327 = v476;
        }
      }
      else
      {
        *((_QWORD *)v476 + 1) = *v452;
        *v331 = (__int64)v332;
        v334 = v327[4];
        v327[4] = v333;
        v335 = *((_DWORD *)v331 + 3);
        *((_DWORD *)v331 + 2) = v334;
        v336 = v327[5];
        v327[5] = v335;
        v327 = v476;
        *((_DWORD *)v331 + 3) = v336;
      }
    }
    if ( *((_BYTE *)v327 + 280) && v462 )
    {
      *(_BYTE *)v462 = 1;
      v328 = 0;
    }
    else
    {
      v328 = 0;
    }
  }
  else
  {
    v327 = v476;
    v328 = 1;
  }
LABEL_466:
  v329 = &v327[72 * (unsigned int)v477];
  while ( v327 != (_DWORD *)v329 )
  {
    v329 -= 36;
    v330 = (_QWORD *)v329[1];
    if ( v330 != v329 + 3 )
      free(v330);
  }
  if ( v476 != (void *)(p_s + 40) )
    free(v476);
  operator delete(v473, 16LL * v475, 8);
  if ( v479 != v456 + 2 )
    free(v479);
  if ( !v483 )
    free(s);
  if ( v328 != 1 )
    v36 = v328;
LABEL_444:
  if ( v484 != v457 + 2 )
    free(v484);
  return v36;
}
