__int64 __fastcall sub_83AC80(char *a1, unsigned __int64 a2, int a3, int *a4, unsigned __int8 **a5, __int64 a6)
{
  char *v6; // r14
  int *v7; // r13
  int v8; // r12d
  void *(**v9)(size_t); // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // r12d
  char *v15; // rbp
  unsigned __int8 *v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // r14d
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  char **v21; // r15
  unsigned __int8 *v22; // r13
  __int16 v23; // r8
  __int64 v24; // r15
  unsigned __int8 *i; // rbx
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r9d
  unsigned int v30; // esi
  char *v31; // rdx
  int v32; // ecx
  int v33; // edx
  unsigned int v34; // edx
  unsigned __int8 *v35; // rbx
  int v36; // eax
  _QWORD *v37; // rbx
  _QWORD *v38; // rdi
  signed __int64 v39; // rsi
  int v40; // ecx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  unsigned int *v45; // r11
  __int64 v46; // rcx
  unsigned int *v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int *v50; // rax
  unsigned int *v51; // rsi
  unsigned __int64 v52; // rcx
  unsigned int v53; // edx
  int v54; // r15d
  int *v55; // r12
  int v56; // r11d
  unsigned __int8 *v57; // r13
  int v58; // r14d
  int *v59; // rbp
  int v60; // edx
  int *v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int8 *v63; // r10
  unsigned __int64 v64; // r9
  int v65; // eax
  unsigned __int8 v66; // al
  unsigned __int8 v67; // al
  unsigned __int8 v68; // al
  int v69; // eax
  int v70; // r10d
  int v71; // eax
  _BOOL8 v72; // rdx
  int v73; // eax
  int *v74; // rdx
  int v75; // r10d
  bool v76; // al
  int v77; // eax
  unsigned __int8 *v78; // r10
  int v79; // edi
  int v80; // eax
  char *v81; // r14
  unsigned __int8 *v82; // rax
  int v83; // eax
  unsigned __int8 *v84; // rax
  int v85; // r10d
  unsigned __int8 *v86; // rdi
  unsigned __int8 *v87; // rbp
  int v88; // ebx
  int v89; // eax
  _BOOL4 v90; // eax
  int *v91; // rax
  int v92; // eax
  void *v93; // rdi
  unsigned __int64 v94; // rdx
  __m128i *v95; // rax
  void *(*v96)(size_t); // rax
  __int64 v97; // rdx
  unsigned __int8 *v98; // r12
  __int64 v99; // rdx
  unsigned int v100; // ebx
  _WORD *v101; // r14
  unsigned __int8 *v102; // rax
  int v103; // ebx
  char v104; // al
  int v105; // ecx
  unsigned int v106; // edx
  unsigned int v107; // r10d
  int v108; // eax
  int v109; // eax
  unsigned int v110; // edx
  int v111; // ecx
  int v112; // eax
  int *v113; // rax
  unsigned __int8 *v114; // rbx
  int *v115; // rax
  int v116; // eax
  int v117; // eax
  int *v118; // rax
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  char v121; // r8
  int v122; // r14d
  unsigned int v123; // r12d
  int *v124; // r15
  unsigned int v125; // r10d
  unsigned int v126; // r9d
  unsigned int v127; // ebx
  int v128; // eax
  unsigned int v129; // esi
  unsigned __int8 *v130; // r11
  int *v131; // rax
  unsigned __int64 v132; // r8
  __int64 v133; // rax
  int v134; // eax
  char v135; // r8
  __int64 v136; // r11
  __int64 v137; // rdi
  unsigned __int8 *v138; // r14
  int v139; // r12d
  unsigned __int8 *v140; // r15
  const char *v141; // rbx
  __int64 v142; // r11
  int v143; // r13d
  int v144; // eax
  int v145; // eax
  unsigned __int8 *v146; // rdx
  int *v147; // rax
  unsigned __int8 *v148; // r12
  unsigned __int8 *v149; // rdi
  unsigned int v150; // r14d
  int v151; // ebx
  int v152; // r8d
  __int16 v153; // ax
  int *v154; // rax
  __int16 v155; // dx
  unsigned __int8 *v156; // rdi
  unsigned __int8 *v157; // rdi
  int v158; // r10d
  int v159; // edx
  int v160; // r11d
  int v161; // eax
  int v162; // eax
  int v163; // rdx^4
  int v164; // eax
  int v165; // eax
  unsigned __int8 *v166; // rax
  int *v167; // rax
  int v168; // edi
  unsigned __int8 *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rax
  char v172; // r9
  __int64 v173; // rbx
  __int64 v174; // r15
  int *v175; // r14
  unsigned __int8 *v176; // r13
  char *v177; // rbp
  unsigned int v178; // r12d
  int v179; // ebx
  int v180; // eax
  unsigned __int8 *v181; // rbx
  __int64 v182; // rbx
  int v183; // r12d
  int *v184; // r15
  char *v185; // rbp
  unsigned __int8 *v186; // r13
  int v187; // ebx
  unsigned __int8 *v188; // rbx
  char *v189; // r8
  int v190; // eax
  int v191; // edx
  unsigned __int64 v192; // rax
  unsigned __int8 *v193; // r14
  unsigned __int8 v194; // al
  int v195; // rdx^4
  _DWORD *v196; // rax
  bool v197; // si
  int v198; // r8d
  int v199; // r10d
  bool j; // di
  int v201; // r9d
  unsigned __int8 *v202; // rdi
  int v203; // esi
  unsigned __int64 v204; // rdx
  int *v205; // rax
  int v206; // edx
  int v207; // ebx
  __int64 v208; // r8
  int v209; // eax
  unsigned int v210; // r15d
  __int64 v211; // rdx
  __int16 v212; // ax
  int v213; // ebp
  __int16 v214; // r13
  unsigned __int16 *v215; // rbx
  unsigned int v216; // eax
  __int16 v217; // bx
  __int64 v218; // r15
  void *v219; // rax
  void *v220; // r14
  int v221; // eax
  char v222; // dl
  unsigned __int8 *v223; // rsi
  unsigned __int8 *v224; // rax
  __int64 v225; // rbx
  int v226; // rax^4
  __int16 v227; // ax
  unsigned int v228; // esi
  unsigned int v229; // r10d
  int v230; // edi
  unsigned __int8 v231; // al
  int v232; // eax
  int v233; // r11d
  int v234; // eax
  unsigned int v235; // eax
  unsigned int v236; // edx
  unsigned int v237; // eax
  int v238; // edx
  unsigned __int8 *v239; // rax
  unsigned __int8 v240; // al
  int v241; // edx
  unsigned __int8 v242; // al
  unsigned __int64 v243; // rax
  unsigned __int8 v244; // al
  int v245; // edx
  _DWORD *v246; // rax
  unsigned __int64 v247; // rcx
  unsigned __int8 v248; // al
  unsigned __int8 *v249; // rax
  int v250; // ebx
  int v251; // eax
  int v252; // r8d
  unsigned __int8 *v253; // r14
  int v254; // eax
  unsigned __int8 *v255; // rax
  int v256; // ebx
  int v257; // eax
  char *v258; // rdx
  char v259; // cl
  int v260; // eax
  int v261; // edx
  unsigned __int8 *v262; // rax
  int v263; // r8d
  unsigned int v264; // r10d
  unsigned __int8 *v265; // r14
  unsigned int v266; // ebx
  unsigned __int8 *v267; // rbp
  int v268; // r12d
  __int16 v269; // ax
  unsigned __int8 v270; // si
  int v271; // edx
  unsigned __int8 *v272; // rdi
  int v273; // esi
  int v274; // r8d
  unsigned __int8 *v275; // rax
  unsigned __int8 *v276; // rax
  __int64 v277; // rsi
  int *v278; // rax
  __int16 v279; // si
  int v280; // eax
  _DWORD *v281; // rax
  int v282; // edx
  _DWORD *v283; // rdx
  int v284; // eax
  int v285; // edi
  int v286; // eax
  int v287; // eax
  unsigned __int8 *v288; // rax
  int v289; // eax
  char v290; // al
  int v291; // eax
  unsigned __int8 *v292; // rax
  unsigned __int8 *v293; // [rsp-10h] [rbp-47E8h]
  __int64 v294; // [rsp-10h] [rbp-47E8h]
  unsigned __int8 *v295; // [rsp-8h] [rbp-47E0h]
  unsigned __int8 *v296; // [rsp-8h] [rbp-47E0h]
  unsigned int v297; // [rsp+0h] [rbp-47D8h]
  __int64 v298; // [rsp+0h] [rbp-47D8h]
  int *v299; // [rsp+0h] [rbp-47D8h]
  int *v300; // [rsp+8h] [rbp-47D0h]
  void *(**v301)(size_t); // [rsp+8h] [rbp-47D0h]
  void *(**v302)(size_t); // [rsp+10h] [rbp-47C8h]
  int v303; // [rsp+10h] [rbp-47C8h]
  void *(**v304)(size_t); // [rsp+10h] [rbp-47C8h]
  unsigned __int64 v305; // [rsp+18h] [rbp-47C0h]
  int v306; // [rsp+18h] [rbp-47C0h]
  int v308; // [rsp+28h] [rbp-47B0h]
  int v309; // [rsp+28h] [rbp-47B0h]
  int v310; // [rsp+28h] [rbp-47B0h]
  int v311; // [rsp+28h] [rbp-47B0h]
  unsigned int v312; // [rsp+30h] [rbp-47A8h]
  unsigned int v313; // [rsp+38h] [rbp-47A0h]
  unsigned __int16 v314; // [rsp+40h] [rbp-4798h]
  unsigned __int64 v315; // [rsp+48h] [rbp-4790h]
  unsigned __int64 v316; // [rsp+48h] [rbp-4790h]
  void *(*v317)(size_t); // [rsp+50h] [rbp-4788h]
  int v318; // [rsp+58h] [rbp-4780h]
  unsigned int v319; // [rsp+58h] [rbp-4780h]
  unsigned int v320; // [rsp+5Ch] [rbp-477Ch]
  int *v321; // [rsp+70h] [rbp-4768h]
  int v322; // [rsp+78h] [rbp-4760h]
  int v323; // [rsp+7Ch] [rbp-475Ch]
  unsigned int v324; // [rsp+80h] [rbp-4758h]
  int v325; // [rsp+84h] [rbp-4754h]
  unsigned __int8 v326; // [rsp+88h] [rbp-4750h]
  int v327; // [rsp+88h] [rbp-4750h]
  unsigned __int8 *v328; // [rsp+88h] [rbp-4750h]
  __int16 v329; // [rsp+88h] [rbp-4750h]
  int v330; // [rsp+88h] [rbp-4750h]
  unsigned __int8 *v331; // [rsp+88h] [rbp-4750h]
  int *v332; // [rsp+88h] [rbp-4750h]
  __int16 v333; // [rsp+88h] [rbp-4750h]
  unsigned __int8 *v334; // [rsp+88h] [rbp-4750h]
  unsigned __int8 *v335; // [rsp+90h] [rbp-4748h]
  unsigned __int64 v336; // [rsp+90h] [rbp-4748h]
  unsigned int *v337; // [rsp+98h] [rbp-4740h]
  unsigned __int64 v338; // [rsp+A0h] [rbp-4738h]
  int v339; // [rsp+B0h] [rbp-4728h]
  int v340; // [rsp+B4h] [rbp-4724h]
  int v341; // [rsp+B8h] [rbp-4720h]
  int v342; // [rsp+BCh] [rbp-471Ch]
  int v343; // [rsp+C0h] [rbp-4718h]
  int v344; // [rsp+C4h] [rbp-4714h]
  _DWORD *v345; // [rsp+C8h] [rbp-4710h]
  unsigned __int8 *v346; // [rsp+D0h] [rbp-4708h]
  unsigned int v347; // [rsp+D8h] [rbp-4700h]
  unsigned int v348; // [rsp+D8h] [rbp-4700h]
  int v349; // [rsp+D8h] [rbp-4700h]
  int v350; // [rsp+D8h] [rbp-4700h]
  unsigned __int16 v351; // [rsp+D8h] [rbp-4700h]
  int v352; // [rsp+D8h] [rbp-4700h]
  int v353; // [rsp+D8h] [rbp-4700h]
  int *v354; // [rsp+D8h] [rbp-4700h]
  unsigned __int8 *v355; // [rsp+D8h] [rbp-4700h]
  unsigned __int8 *v356; // [rsp+E0h] [rbp-46F8h]
  unsigned int v357; // [rsp+E0h] [rbp-46F8h]
  unsigned __int8 *v358; // [rsp+E0h] [rbp-46F8h]
  unsigned int v359; // [rsp+E0h] [rbp-46F8h]
  unsigned __int8 *v360; // [rsp+E8h] [rbp-46F0h]
  unsigned __int8 *v361; // [rsp+F0h] [rbp-46E8h]
  char v362; // [rsp+F8h] [rbp-46E0h]
  int v363; // [rsp+F8h] [rbp-46E0h]
  unsigned __int8 *v364; // [rsp+F8h] [rbp-46E0h]
  int *v365; // [rsp+100h] [rbp-46D8h]
  int *v366; // [rsp+108h] [rbp-46D0h]
  char v367; // [rsp+108h] [rbp-46D0h]
  unsigned int v368; // [rsp+110h] [rbp-46C8h]
  unsigned int v369; // [rsp+114h] [rbp-46C4h]
  unsigned __int16 v370; // [rsp+118h] [rbp-46C0h]
  unsigned int v371; // [rsp+118h] [rbp-46C0h]
  unsigned int v372; // [rsp+11Ch] [rbp-46BCh]
  unsigned int v373; // [rsp+11Ch] [rbp-46BCh]
  unsigned __int64 v374; // [rsp+120h] [rbp-46B8h]
  __int64 v375; // [rsp+128h] [rbp-46B0h]
  int v376; // [rsp+13Ch] [rbp-469Ch] BYREF
  unsigned int v377; // [rsp+140h] [rbp-4698h] BYREF
  unsigned int v378; // [rsp+144h] [rbp-4694h] BYREF
  unsigned int v379; // [rsp+148h] [rbp-4690h] BYREF
  int v380; // [rsp+14Ch] [rbp-468Ch] BYREF
  int v381; // [rsp+150h] [rbp-4688h] BYREF
  int v382; // [rsp+154h] [rbp-4684h] BYREF
  unsigned int v383; // [rsp+158h] [rbp-4680h] BYREF
  unsigned int v384; // [rsp+15Ch] [rbp-467Ch] BYREF
  unsigned __int64 v385; // [rsp+160h] [rbp-4678h]
  unsigned __int8 *v386; // [rsp+168h] [rbp-4670h] BYREF
  unsigned int *v387; // [rsp+170h] [rbp-4668h] BYREF
  unsigned __int8 *v388; // [rsp+178h] [rbp-4660h] BYREF
  unsigned __int8 *v389; // [rsp+180h] [rbp-4658h] BYREF
  unsigned __int8 *v390[17]; // [rsp+188h] [rbp-4650h] BYREF
  char v391; // [rsp+210h] [rbp-45C8h] BYREF
  void *(**v392)(size_t); // [rsp+350h] [rbp-4488h] BYREF
  void *(*v393)(size_t); // [rsp+358h] [rbp-4480h]
  char *v394; // [rsp+360h] [rbp-4478h]
  char *v395; // [rsp+368h] [rbp-4470h]
  unsigned __int8 *v396; // [rsp+370h] [rbp-4468h]
  __m128i v397; // [rsp+378h] [rbp-4460h]
  char *v398; // [rsp+388h] [rbp-4450h]
  char *v399; // [rsp+390h] [rbp-4448h]
  __int64 v400; // [rsp+398h] [rbp-4440h]
  __int64 v401; // [rsp+3A0h] [rbp-4438h]
  _OWORD v402[5]; // [rsp+3A8h] [rbp-4430h] BYREF
  unsigned __int8 *v403; // [rsp+3F8h] [rbp-43E0h]
  __int64 v404; // [rsp+420h] [rbp-43B8h]
  void *src; // [rsp+428h] [rbp-43B0h]
  unsigned int v406; // [rsp+430h] [rbp-43A8h]
  unsigned int v407; // [rsp+434h] [rbp-43A4h]
  __int64 v408; // [rsp+438h] [rbp-43A0h]
  int v409; // [rsp+440h] [rbp-4398h]
  unsigned int *v410; // [rsp+448h] [rbp-4390h]
  char *v411; // [rsp+450h] [rbp-4388h]
  _BYTE *v412; // [rsp+458h] [rbp-4380h]
  __int64 v413; // [rsp+460h] [rbp-4378h]
  unsigned int v414; // [rsp+468h] [rbp-4370h]
  unsigned int v415; // [rsp+46Ch] [rbp-436Ch] BYREF
  __int16 v416; // [rsp+470h] [rbp-4368h]
  _BYTE v417[16]; // [rsp+474h] [rbp-4364h]
  int v418; // [rsp+484h] [rbp-4354h]
  int v419; // [rsp+488h] [rbp-4350h]
  int v420; // [rsp+48Ch] [rbp-434Ch]
  __int64 v421; // [rsp+490h] [rbp-4348h]
  __int64 v422; // [rsp+498h] [rbp-4340h]
  __int128 v423; // [rsp+4A0h] [rbp-4338h]
  _BYTE v424[1024]; // [rsp+4B0h] [rbp-4328h] BYREF
  _BYTE v425[4096]; // [rsp+8B0h] [rbp-3F28h] BYREF
  _BYTE v426[12007]; // [rsp+18B0h] [rbp-2F28h] BYREF
  char v427; // [rsp+4797h] [rbp-41h] BYREF
  unsigned __int64 v428; // [rsp+4798h] [rbp-40h]

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v305 = a2;
  v428 = __readfsqword(0x28u);
  v9 = (void *(**)(size_t))a6;
  v427 = -51;
  v385 = 1;
  v376 = 0;
  v318 = 7;
  if ( a6 )
    v318 = *(_DWORD *)(a6 + 80);
  if ( !a4 )
  {
    if ( a5 )
      *a5 = nullptr;
    return 0;
  }
  if ( !a5 )
  {
    *a4 = 220;
    return 0;
  }
  *a4 = 100;
  *a5 = nullptr;
  if ( !a1 )
  {
    v6 = &v427;
    if ( a2 )
    {
      *a4 = 116;
      return 0;
    }
  }
  if ( !a6 )
    v9 = &off_2C58120;
  if ( (a3 & 0x4000000) != 0 )
    v8 = a3 | 0x80000;
  if ( (v8 & 0x10000000) != 0 || (v312 = *((_DWORD *)v9 + 18), v312 > 0x1FFFF) )
  {
    *a4 = 117;
    return 0;
  }
  if ( (v8 & 0x2000000) == 0 )
  {
    if ( a2 == -1 )
      v305 = sub_877290(v6);
    if ( (unsigned __int64)v9[6] >= v305 )
    {
      v10 = v318 & 0xFFFFFFFE;
      if ( (v8 & 0x4000) == 0 )
        v10 = v318;
      v318 = v10;
      goto LABEL_19;
    }
    goto LABEL_39;
  }
  if ( v312 & 0xFFFEFF73 | v8 & 0x1976FEF3 )
  {
    *a4 = 192;
    return 0;
  }
  if ( a2 != -1 )
  {
    if ( (unsigned __int64)v9[6] >= a2 )
      goto LABEL_22;
    goto LABEL_39;
  }
  v305 = sub_877290(v6);
  if ( (unsigned __int64)v9[6] < v305 )
  {
LABEL_39:
    *v7 = 188;
    return 0;
  }
LABEL_19:
  v312 = *((_DWORD *)v9 + 18);
  v11 = v318 & 0xFFFFFFFD;
  if ( (v8 & 0x8000) == 0 )
    v11 = v318;
  v318 = v11;
LABEL_22:
  v12 = v318 & 0xFFFFFFFB;
  if ( (v8 & 0x10000) == 0 )
    v12 = v318;
  v319 = v12;
  v317 = v9[5];
  if ( !v317 )
    v317 = (void *(*)(size_t))&unk_239A180;
  v392 = v9;
  v403 = nullptr;
  v393 = v317;
  v394 = (char *)v317 + 256;
  v395 = (char *)v317 + 512;
  v396 = (unsigned __int8 *)v317 + 832;
  v407 = v8;
  v422 = 0;
  v399 = &v6[v305];
  v412 = v424;
  v13 = *((_DWORD *)v9 + 19);
  v408 = 0;
  v419 = v13;
  src = &v391;
  v410 = (unsigned int *)v425;
  v409 = 0;
  v420 = 0;
  v397 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v426, (__m128i)(unsigned __int64)v426);
  v423 = 0;
  v400 = 0;
  v406 = 20;
  v404 = 0;
  v418 = 0;
  v398 = v6;
  v401 = 6000;
  v413 = 0;
  memset(v402, 255, sizeof(v402));
  if ( (v8 & 0x2000000) != 0 )
  {
    if ( (v8 & 0xA0000) == 0 )
    {
      v323 = v312 & 0x10000;
      if ( (v312 & 0x10000) == 0 )
      {
        i = (unsigned __int8 *)v6;
        v340 = -1;
        v342 = -1;
        v341 = -1;
        LOWORD(v339) = *((_WORD *)v9 + 32);
        v27 = v8;
LABEL_48:
        v325 = *((unsigned __int16 *)v9 + 33);
        goto LABEL_49;
      }
      i = (unsigned __int8 *)v6;
LABEL_174:
      v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v6);
      v36 = 204;
      v24 = 0;
      v376 = 204;
      goto LABEL_81;
    }
    i = (unsigned __int8 *)v6;
LABEL_80:
    v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v6);
    v36 = 132;
    v24 = 0;
    v376 = 132;
    goto LABEL_81;
  }
  v323 = 0;
  v339 = 0;
  v325 = 0;
  v342 = -1;
  v341 = -1;
  v340 = -1;
  v300 = v7;
  v308 = v8;
  v14 = 0;
  v302 = v9;
  v15 = v6;
  while ( 1 )
  {
    v16 = (unsigned __int8 *)&v15[v14];
    v17 = v305 - v14;
    if ( v17 <= 1 || *v16 != 40 || v15[v14 + 1] != 42 )
      break;
    v297 = v14;
    v18 = 0;
    v19 = v14 + 2LL;
    v20 = v17 - 2;
    v21 = &off_2B12F80;
    v22 = v16;
    while ( v20 < *((unsigned __int16 *)v21 + 4) || (unsigned int)sub_877240(&v15[v19], *v21) )
    {
      ++v18;
      v21 += 2;
      if ( v18 == 23 )
      {
        i = v22;
        goto LABEL_72;
      }
    }
    v23 = *((_WORD *)v21 + 5);
    v14 = v297 + *((unsigned __int16 *)v21 + 4) + 2;
    switch ( v23 )
    {
      case 0:
        v407 |= *((_DWORD *)v21 + 3);
        continue;
      case 1:
        v312 |= *((_DWORD *)v21 + 3);
        continue;
      case 2:
        v323 |= *((_DWORD *)v21 + 3);
        continue;
      case 3:
        v323 |= 0x8000u;
        v325 = *((_DWORD *)v21 + 3);
        continue;
      case 4:
        v323 |= 0x4000u;
        v339 = *((_DWORD *)v21 + 3);
        continue;
      case 5:
      case 6:
      case 7:
        v28 = v14;
        if ( v14 >= v305 )
          goto LABEL_204;
        v29 = v297 + *((unsigned __int16 *)v21 + 4) + 2;
        v30 = 0;
        while ( 1 )
        {
          v31 = &v15[v28];
          v32 = (unsigned __int8)*v31;
          if ( (unsigned __int8)(v32 - 48) > 9u || v30 > 0x19999998 )
            break;
          v28 = ++v29;
          v30 = v32 + 10 * v30 - 48;
          if ( v29 >= v305 )
          {
LABEL_204:
            v81 = v15;
            v7 = v300;
            v9 = v302;
            v31 = &v81[v28];
            goto LABEL_205;
          }
        }
        if ( v14 == v29 || (_BYTE)v32 != 41 )
        {
          v81 = v15;
          v7 = v300;
          v9 = v302;
LABEL_205:
          v36 = 160;
          v24 = 0;
          v376 = 160;
          v35 = (unsigned __int8 *)(v31 - v81);
          goto LABEL_81;
        }
        if ( v23 == 5 )
        {
          v340 = v30;
        }
        else if ( v23 == 6 )
        {
          v341 = v30;
        }
        else
        {
          v342 = v30;
        }
        v14 = v29 + 1;
        continue;
      case 8:
        v33 = *((_DWORD *)v21 + 3);
        v319 &= ~v33;
        if ( v33 == 2 )
        {
          v34 = v407;
          BYTE1(v34) = BYTE1(v407) | 0x80;
LABEL_70:
          v407 = v34;
          continue;
        }
        if ( v33 != 4 )
        {
          if ( v33 != 1 )
            continue;
          v34 = v407;
          BYTE1(v34) = BYTE1(v407) | 0x40;
          goto LABEL_70;
        }
        v407 |= 0x10000u;
        break;
      default:
        continue;
    }
  }
  i = (unsigned __int8 *)&v15[v14];
LABEL_72:
  v27 = v407;
  v6 = v15;
  v8 = v308;
  v7 = v300;
  v9 = v302;
  if ( (v407 & 0xA0000) != 0 )
    goto LABEL_80;
  if ( (v312 & 0x10000) != 0 )
    goto LABEL_174;
  if ( !v339 )
    LOWORD(v339) = *((_WORD *)v302 + 32);
  if ( !v325 )
    goto LABEL_48;
LABEL_49:
  v414 = 0;
  switch ( v325 )
  {
    case 1:
      v415 = 1;
      LOBYTE(v416) = 13;
      goto LABEL_97;
    case 2:
      v415 = 1;
      LOBYTE(v416) = 10;
      goto LABEL_97;
    case 3:
      v415 = 2;
      v416 = 2573;
      goto LABEL_97;
    case 4:
      v414 = 1;
      goto LABEL_97;
    case 5:
      v414 = 2;
      goto LABEL_97;
    case 6:
      v415 = 1;
      LOBYTE(v416) = 0;
LABEL_97:
      v338 = (unsigned __int64)v399;
      v39 = v399 - (char *)i;
      v40 = (_DWORD)v9[9] & 0xC;
      if ( (v8 & 4) != 0 )
      {
        v41 = 5 * v39;
        v42 = v41 + 4;
        if ( !v40 )
          v42 = v41;
        v43 = v42 + 4;
      }
      else
      {
        v43 = v39 + 4;
        if ( !v40 )
          v43 = v399 - (char *)i;
      }
      v44 = v43 + 1;
      v45 = v410;
      v46 = 4 * v44;
      if ( v44 <= 0x400 )
        goto LABEL_104;
      v298 = 4 * v44;
      v47 = (unsigned int *)((__int64 (__fastcall *)(unsigned __int64, void *(*)(size_t)))*v9)(4 * v44, v9[2]);
      v46 = v298;
      v45 = v47;
      if ( !v47 )
      {
        *v7 = 121;
        goto LABEL_83;
      }
      v410 = v47;
      v27 = v407;
      v338 = (unsigned __int64)v399;
LABEL_104:
      v386 = i;
      v337 = (unsigned int *)((char *)v45 + v46);
      v411 = (char *)v45 + v46;
      v387 = nullptr;
      v48 = v27 & 4;
      v379 = 0;
      v344 = v48 >> 2;
      if ( (v312 & 8) != 0 )
      {
        v45 += 2;
        *((_QWORD *)v45 - 1) = 0x801E000080090000LL;
        i = v386;
      }
      else if ( (v312 & 4) != 0 )
      {
        v45 += 2;
        *((_QWORD *)v45 - 1) = 0x801E0000801C0005LL;
        i = v386;
      }
      if ( (v27 & 0x2000000) != 0 )
      {
        if ( (unsigned __int64)i < v338 )
        {
          while ( v45 < v337 )
          {
            v386 = i + 1;
            v49 = *i;
            v50 = v45;
            v377 = v49;
            if ( v48 )
            {
              v51 = v387;
              if ( v387 && (v387[2] = (_DWORD)i - (_DWORD)v398 - v387[1], v51 == v45 - 4) && v51[3] == 255 )
              {
                v45 = v51;
              }
              else
              {
                *v45 = -2147090432;
                v50 = v45 + 4;
                *((_QWORD *)v45 + 1) = 0xFF00000000LL;
              }
              v45[1] = (_DWORD)i - (_DWORD)v398;
              v387 = v45;
            }
            *v50 = v49;
            i = v386;
            v45 = v50 + 1;
            if ( (unsigned __int64)v386 >= v338 )
              goto LABEL_219;
          }
          goto LABEL_192;
        }
        goto LABEL_219;
      }
      v52 = v338;
      v360 = (unsigned __int8 *)(v397.m128i_i64[0] + (v401 & 0xFFFFFFFFFFFFFFF0LL));
      v53 = v27;
      LOBYTE(v53) = v27 | 0x80;
      if ( (v27 & 0x1000000) == 0 )
        v53 = v27;
      v313 = v53;
      if ( (unsigned __int64)i >= v338 )
      {
LABEL_219:
        v343 = 0;
        v314 = 0;
        LOBYTE(v320) = v312;
        goto LABEL_220;
      }
      v303 = v8;
      v54 = 0;
      v55 = (int *)v45;
      v369 = (v27 >> 19) & 1;
      v56 = 0;
      v299 = v7;
      v57 = (unsigned __int8 *)v338;
      v320 = v312;
      v301 = v9;
      v58 = 0;
      v59 = nullptr;
      v368 = 0;
      v343 = 0;
      v346 = nullptr;
      v321 = nullptr;
      v315 = 0;
      v335 = nullptr;
      v361 = nullptr;
      v345 = nullptr;
      v309 = 0;
      v324 = 0;
      v322 = 0;
      v314 = 0;
      break;
    default:
      v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v6);
      v36 = 156;
      v24 = 0;
      v376 = 156;
      goto LABEL_81;
  }
  while ( 1 )
  {
    v62 = (unsigned __int64)v392;
    v381 = 0;
    v382 = 0;
    if ( *((_DWORD *)v392 + 17) < (unsigned int)v314 )
    {
      v8 = v303;
      v7 = v299;
      v36 = 119;
      v9 = v301;
      i = v386;
      goto LABEL_270;
    }
    if ( v55 >= (int *)v337 )
    {
      v8 = v303;
      v7 = v299;
      v36 = 163;
      v9 = v301;
      i = v386;
      goto LABEL_270;
    }
    v63 = i + 1;
    if ( v59 == v55 )
      v59 = v321;
    v386 = i + 1;
    v64 = *i;
    v321 = v59;
    v326 = *i;
    v377 = *i;
    if ( v322 )
    {
      if ( (_DWORD)v64 == 92 && v63 < v57 && i[1] == 69 )
      {
        i += 2;
        v322 = 0;
        v61 = v55;
        v386 = i;
      }
      else
      {
        v52 = v324;
        if ( v324 )
        {
          *v55 = v64;
          v61 = v55 + 1;
          v56 = 0;
          i = v386;
          v322 = v324;
        }
        else
        {
          v74 = v55;
          v75 = v309 - 1;
          if ( v309 <= 0 )
          {
            v310 = v64;
            v113 = sub_832F30((int)i, &v387, v344, v55, (__int64)&v392);
            LODWORD(v64) = v310;
            v74 = v113;
          }
          *v74 = v64;
          v54 = v322;
          v61 = v74 + 1;
          v56 = 0;
          v309 = v75;
          i = v386;
        }
      }
      goto LABEL_135;
    }
    if ( v324 )
    {
      if ( (~v313 & 0x400080) != 0 )
      {
        if ( v326 != 41 )
        {
          if ( v326 == 92 )
          {
            v60 = 92;
            if ( (v313 & 0x400000) == 0 )
            {
LABEL_134:
              *v55 = v60;
              i = v386;
              v61 = v55 + 1;
              goto LABEL_135;
            }
LABEL_210:
            v327 = v56;
            v83 = sub_839AC0(&v386, v57, &v377, (int *)&v379, v313, v320, HIDWORD(v408), 0, (__int64)&v392);
            v52 = v379;
            if ( v379 )
            {
              v8 = v303;
              v7 = v299;
              v36 = v379;
              v9 = v301;
              i = v386;
              goto LABEL_270;
            }
            v56 = v327;
            if ( v83 == 26 )
            {
              i = v386;
              v322 = v324;
              v61 = v55;
              goto LABEL_135;
            }
            if ( v83 > 26 )
            {
              if ( v83 == 29 )
              {
                v322 = 0;
                v61 = v55 + 2;
                v54 = v324;
                *(_QWORD *)v55 = 0x7B00000075LL;
                i = v386;
                goto LABEL_135;
              }
            }
            else
            {
              if ( !v83 )
              {
                v60 = v377;
                goto LABEL_134;
              }
              if ( v83 == 25 )
              {
                v322 = 0;
                i = v386;
                v61 = v55;
                goto LABEL_135;
              }
            }
            v8 = v303;
            v7 = v299;
            v36 = 140;
            v9 = v301;
            i = v386;
            goto LABEL_270;
          }
LABEL_228:
          *v55 = v64;
          v61 = v55 + 1;
          i = v386;
          goto LABEL_135;
        }
      }
      else
      {
        v82 = v396;
        if ( (_DWORD)v64 == 35 )
        {
          if ( (v396[35] & 1) == 0 )
          {
LABEL_232:
            if ( v63 < v57 )
            {
              v87 = i + 1;
              v52 = (unsigned __int64)&v415;
              v88 = v56;
              while ( 1 )
              {
                if ( v414 )
                {
                  if ( v87 < (unsigned __int8 *)v399 )
                  {
                    v328 = (unsigned __int8 *)v52;
                    v89 = sub_876D00(v87, v414, v399, v52, v369);
                    v52 = (unsigned __int64)v328;
                    if ( v89 )
                    {
LABEL_241:
                      v56 = v88;
                      v61 = v55;
                      i = &v87[v415];
                      v386 = i;
                      goto LABEL_135;
                    }
                  }
                }
                else if ( &v399[-v415] >= (char *)v87 && *v87 == (_BYTE)v416 && (v415 == 1 || v87[1] == HIBYTE(v416)) )
                {
                  goto LABEL_241;
                }
                v386 = ++v87;
                if ( v87 == v57 )
                {
                  v56 = v88;
                  v61 = v55;
                  i = v57;
                  goto LABEL_135;
                }
              }
            }
            v45 = (unsigned int *)v55;
            v7 = v299;
            v8 = v303;
            ++i;
            v9 = v301;
            goto LABEL_467;
          }
          goto LABEL_243;
        }
        v62 = v326;
        if ( (v396[v326] & 1) != 0 )
        {
          if ( (_DWORD)v64 != 92 )
            goto LABEL_243;
          if ( v63 >= v57 )
            goto LABEL_260;
          goto LABEL_194;
        }
        if ( v326 != 41 )
        {
          if ( v326 == 92 )
            goto LABEL_210;
          goto LABEL_228;
        }
      }
      v52 = (unsigned __int64)v361;
      if ( i - v361 > 255 )
      {
        v8 = v303;
        v7 = v299;
        v36 = 176;
        v9 = v301;
        goto LABEL_270;
      }
      v52 = (unsigned __int64)v345;
      *v345 = v55 - v345 - 1;
      if ( v368 )
      {
        v52 = v368;
        v61 = v55 + 1;
        v324 = 0;
        v368 = 0;
        *v55 = v52;
        i = v386;
      }
      else
      {
        v324 = 0;
        i = v386;
        v61 = v55;
      }
      goto LABEL_135;
    }
    if ( (_DWORD)v64 == 92 )
    {
      if ( v63 >= v57 )
      {
LABEL_196:
        if ( (v313 & 0x80u) == 0 )
        {
          v52 = (unsigned int)v309;
          v65 = v309 - 1;
          if ( v309 <= 0 )
            goto LABEL_337;
LABEL_198:
          if ( v58 > 0 )
            goto LABEL_177;
          v309 = v65;
          v59 = v55;
LABEL_200:
          v389 = v63;
          v356 = v63;
          v77 = sub_839AC0(&v386, v57, &v377, (int *)&v379, v313, v320, HIDWORD(v408), 0, (__int64)&v392);
          v58 = v379;
          v78 = v356;
          v79 = v77;
          if ( v379 )
            goto LABEL_461;
          if ( !v77 )
          {
            v80 = v377;
LABEL_203:
            *v59 = v80;
            v55 = v59 + 1;
            v58 = 0;
            v56 = 0;
            i = v386;
            v54 = 1;
            goto LABEL_136;
          }
          if ( v77 < 0 )
          {
            v168 = ~v77;
            v55 = v59 + 1;
            v169 = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
            v390[0] = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
            *v59 = v168 | 0x80030000;
            if ( v168 > 9 )
            {
              v59[2] = (int)v169;
              v55 = v59 + 3;
              v56 = 0;
              v54 = 1;
              v59[1] = HIDWORD(v169);
              i = v386;
              goto LABEL_136;
            }
            i = v386;
            if ( *((_QWORD *)v402 + v168) == -1 )
            {
              *(&v393 + v168 + 10) = (void *(*)(size_t))v169;
              v56 = 0;
              v54 = 1;
              goto LABEL_136;
            }
            goto LABEL_589;
          }
          switch ( v77 )
          {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
              v54 = 1;
              v167 = sub_832FB0(v77, v59, v313, v320);
              i = v386;
              v55 = v167;
              goto LABEL_136;
            case 12:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
              v55 = v59 + 1;
              v56 = 0;
              v54 = 1;
              *v59 = v77 - 2145648640;
              i = v386;
              goto LABEL_136;
            case 14:
              v56 = v313 & 0x100000;
              if ( (v313 & 0x100000) == 0 )
              {
                *v59 = -2145648626;
                v55 = v59 + 1;
                i = v386;
                v54 = 1;
                goto LABEL_136;
              }
              v379 = 183;
              goto LABEL_461;
            case 15:
            case 16:
            case 22:
              v379 = 145;
              goto LABEL_461;
            case 27:
            case 28:
              if ( v386 >= v57 )
                goto LABEL_577;
              v62 = *v386;
              if ( (_BYTE)v62 == 123 )
              {
                v160 = 125;
              }
              else
              {
                if ( (_BYTE)v62 == 60 )
                {
                  v160 = 62;
                }
                else
                {
                  if ( (_BYTE)v62 != 39 )
                  {
LABEL_577:
                    v165 = 169;
                    if ( v79 == 27 )
                      v165 = 157;
                    v379 = v165;
                    goto LABEL_461;
                  }
                  v160 = 39;
                }
                if ( v77 == 27 )
                {
                  v363 = v160;
                  v390[0] = v386 + 1;
                  v54 = sub_8327E0(v390, v57, SHIDWORD(v408), 0xFFFFu, 161, (unsigned int *)&v380, &v379);
                  v78 = v356;
                  if ( v54 )
                  {
                    if ( v390[0] >= v57 || (v62 = *v390[0], v363 != (_DWORD)v62) )
                    {
                      v386 = v390[0];
                      v379 = 219;
                      goto LABEL_461;
                    }
                    v55 = v59 + 3;
                    v56 = 0;
                    v386 = v390[0] + 1;
                    *v59 = v380 | 0x80240000;
                    v166 = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
                    v59[2] = (_DWORD)v386 - (_DWORD)v398;
                    v59[1] = HIDWORD(v166);
                    i = v386;
                    goto LABEL_136;
                  }
                  if ( !v379 )
                  {
                    v161 = sub_839680(
                             (char **)&v386,
                             (char *)v57,
                             v363,
                             v390,
                             &v388,
                             &v378,
                             (int *)&v379,
                             (__int64)&v392);
                    v78 = v356;
                    if ( v161 )
                    {
                      v162 = -2145058816;
LABEL_572:
                      *v59 = v162;
                      v55 = v59 + 4;
                      v56 = 0;
                      v54 = 1;
                      v59[1] = v378;
                      v163 = HIDWORD(v390[0]);
                      v59[3] = (int)v390[0];
                      v59[2] = v163;
                      i = v386;
                      goto LABEL_136;
                    }
                  }
                  goto LABEL_461;
                }
              }
              v164 = sub_839680((char **)&v386, (char *)v57, v160, v390, &v388, &v378, (int *)&v379, (__int64)&v392);
              v62 = (unsigned __int64)v293;
              v52 = (unsigned __int64)v295;
              v78 = v356;
              if ( v164 )
              {
                v162 = -2147221504;
                goto LABEL_572;
              }
LABEL_461:
              if ( (v320 & 2) == 0 )
              {
                v8 = v303;
                v7 = v299;
                v9 = v301;
                i = v386;
                v36 = v379;
                goto LABEL_270;
              }
              v386 = v78;
              if ( v78 < v57 )
              {
                v386 = i + 2;
                v80 = i[1];
                v377 = v80;
              }
              else
              {
                v377 = 92;
                v80 = 92;
              }
              goto LABEL_203;
            case 29:
              v55 = v59 + 2;
              v56 = 0;
              v54 = 1;
              *(_QWORD *)v59 = 0x7B00000075LL;
              i = v386;
              goto LABEL_136;
            default:
              v55 = v59 + 1;
              v54 = 0;
              v56 = 0;
              *v59 = v77 - 2145648640;
              i = v386;
              goto LABEL_136;
          }
        }
        v82 = v396;
LABEL_260:
        if ( (v82[92] & 1) == 0 )
        {
          v52 = (unsigned int)v309;
          v65 = v309 - 1;
          if ( v309 <= 0 )
          {
LABEL_262:
            v309 = v65;
            v347 = v64;
            v91 = sub_832F30((int)i, &v387, v344, v55, (__int64)&v392);
            v64 = v347;
            v59 = v91;
            if ( v58 > 0 )
              goto LABEL_177;
            goto LABEL_249;
          }
          goto LABEL_198;
        }
LABEL_243:
        ++i;
        v61 = v55;
        goto LABEL_135;
      }
LABEL_194:
      v62 = i[1];
      v76 = (_BYTE)v62 == 81;
      if ( (_BYTE)v62 == 69 || (_BYTE)v62 == 81 )
      {
        if ( v58 > 0 && (_BYTE)v62 == 81 )
        {
          v62 = v57 - v63;
          if ( v57 - v63 <= 2 )
          {
            v8 = v303;
            v7 = v299;
            v36 = 128;
            v9 = v301;
            goto LABEL_270;
          }
          if ( i[2] != 92 )
          {
            v8 = v303;
            v7 = v299;
            v36 = 128;
            v9 = v301;
            goto LABEL_270;
          }
          if ( i[3] != 69 )
          {
            v8 = v303;
            v7 = v299;
            v36 = 128;
            v9 = v301;
            goto LABEL_270;
          }
        }
        i += 2;
        v322 = v76;
        v61 = v55;
        v386 = i;
        goto LABEL_135;
      }
      goto LABEL_196;
    }
    if ( (v313 & 0x80u) != 0 )
    {
      v62 = v326;
      if ( (v396[v326] & 1) != 0 )
        goto LABEL_243;
      if ( (_DWORD)v64 == 35 )
        goto LABEL_232;
    }
    if ( (_DWORD)v64 == 40 )
      break;
    if ( (unsigned int)(v64 - 42) <= 1 || (_DWORD)v64 == 63 )
    {
      if ( v58 > 0 )
        goto LABEL_177;
      if ( !v56 )
      {
        v59 = v55;
        goto LABEL_249;
      }
      if ( (_DWORD)v64 != 63 )
      {
        v59 = v55;
        if ( (_DWORD)v64 != 43 )
          goto LABEL_249;
      }
      v71 = 0x10000;
      v322 = 0;
      if ( (_DWORD)v64 == 63 )
        v71 = 0x20000;
      v72 = v56 != -2143223808;
      v54 = 0;
      v58 = 0;
      v73 = v56 + v71;
      v56 = 0;
      v55[2 * v72 - 3] = v73;
      v61 = v55;
      i = v386;
LABEL_135:
      v59 = v55;
      v55 = v61;
      goto LABEL_136;
    }
    if ( (_DWORD)v64 != 123 )
    {
      v52 = (unsigned int)v309;
      v65 = v309 - 1;
      if ( v309 > 0 )
      {
        if ( v58 > 0 )
          goto LABEL_177;
        --v309;
        v59 = v55;
        goto LABEL_249;
      }
      goto LABEL_262;
    }
    v389 = i + 1;
    v116 = sub_832980(&v389, v57, nullptr, nullptr, &v379, (unsigned __int8 *)v64);
    v64 = 123;
    if ( v116 )
    {
      if ( v58 > 0 )
        goto LABEL_177;
      v70 = v309;
    }
    else
    {
      v70 = v309 - 1;
      if ( v309 <= 0 )
      {
        v278 = sub_832F30((int)i, &v387, v344, v55, (__int64)&v392);
        v64 = 123;
        v55 = v278;
        if ( v58 > 0 )
          goto LABEL_177;
      }
      else if ( v58 > 0 )
      {
        goto LABEL_177;
      }
    }
LABEL_344:
    v311 = v64;
    v349 = v70;
    v117 = sub_832980(&v386, v57, &v381, &v382, &v379, (unsigned __int8 *)v64);
    LODWORD(v64) = v311;
    if ( v117 )
    {
      if ( !v54 )
      {
LABEL_1015:
        v8 = v303;
        v7 = v299;
        v36 = 109;
        v9 = v301;
        i = v386;
        goto LABEL_270;
      }
      if ( *v321 == -2144468992 )
      {
        v52 = (unsigned __int64)v335;
        v154 = v55 - 1;
        if ( v55 - 1 < (int *)v335 )
        {
          *(_DWORD *)v335 = -2145517568;
          v59 = v55;
          v56 = -2143223808;
          v55 += 2;
          v309 = v349;
          *(_QWORD *)(v55 - 1) = 0x80410000801D0000LL;
        }
        else
        {
          v309 = v349;
          v59 = v55;
          v56 = -2143223808;
LABEL_512:
          v55 = v59 + 2;
          v352 = v56;
          v330 = v64;
          memmove(
            &v154[-((unsigned __int64)((char *)v59 - (char *)v335 - 4) >> 2) + 1],
            &v154[-((unsigned __int64)((char *)v59 - (char *)v335 - 4) >> 2)],
            4 * ((unsigned __int64)((char *)v59 - (char *)v335 - 4) >> 2) + 4);
          v56 = v352;
          *(_DWORD *)v335 = -2145517568;
          v59[1] = -2145583104;
          v59[2] = v352;
          if ( v330 != 123 )
          {
LABEL_513:
            i = v386;
            v55 = v59 + 3;
            v54 = 0;
            v58 = 0;
            goto LABEL_136;
          }
        }
      }
      else
      {
        v309 = v349;
        v59 = v55;
        v56 = -2143223808;
        *v55 = -2143223808;
      }
      v54 = 0;
      v58 = 0;
      v55 += 3;
      *(v55 - 2) = v381;
      *(v55 - 1) = v382;
      i = v386;
      goto LABEL_136;
    }
    v58 = v379;
    if ( v379 )
    {
      v8 = v303;
      v7 = v299;
      v36 = v379;
      v9 = v301;
      i = v386;
      goto LABEL_270;
    }
    *v55 = 123;
    v59 = v55;
    v56 = 0;
    ++v55;
    v309 = v349;
    i = v386;
    v54 = 1;
LABEL_136:
    if ( i >= v57 )
    {
      v45 = (unsigned int *)v55;
      v7 = v299;
      v8 = v303;
      v9 = v301;
LABEL_467:
      if ( v324 )
      {
        v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v398);
        v36 = 160;
        v376 = 160;
        v403 = v35;
        goto LABEL_179;
      }
LABEL_220:
      v84 = (unsigned __int8 *)sub_832F30((int)i, &v387, v344, v45, (__int64)&v392);
      if ( v85 )
      {
        v52 = 0x801A0000801D0000LL;
        v62 = (unsigned __int64)(v84 + 8);
        *(_QWORD *)v84 = 0x801A0000801D0000LL;
      }
      else
      {
        v62 = (unsigned __int64)v84;
        if ( (v320 & 4) != 0 )
        {
          v52 = 0x801C0005801D0000LL;
          v62 = (unsigned __int64)(v84 + 8);
          *(_QWORD *)v84 = 0x801C0005801D0000LL;
        }
      }
      if ( v62 < (unsigned __int64)v337 )
      {
        *(_DWORD *)v62 = 0x80000000;
        v86 = v386;
        if ( !v314 )
        {
          v376 = 0;
          goto LABEL_271;
        }
        goto LABEL_224;
      }
LABEL_192:
      v35 = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
      v36 = 163;
      v376 = 163;
      v403 = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
      goto LABEL_179;
    }
  }
  if ( v57 - v63 > 1 && i[1] == 63 && i[2] == 35 )
  {
    while ( 1 )
    {
      v114 = v63++;
      v386 = v63;
      if ( v63 >= v57 )
        break;
      if ( *v63 == 41 )
      {
        i = v114 + 2;
        v61 = v55;
        v386 = i;
        v322 = 0;
        goto LABEL_135;
      }
    }
    v8 = v303;
    v7 = v299;
    i = v63;
    v36 = 118;
    v9 = v301;
    goto LABEL_270;
  }
  v52 = (unsigned int)v309;
  v65 = v309 - 1;
  if ( v309 > 0 )
  {
    --v309;
    v59 = v55;
    if ( v58 <= 0 )
      goto LABEL_160;
LABEL_150:
    if ( v57 - v63 <= 2 )
      goto LABEL_177;
    v62 = i[1];
    if ( (_BYTE)v62 != 63 && (_BYTE)v62 != 42 )
      goto LABEL_177;
    v66 = i[2];
    if ( (_BYTE)v62 == 42 )
    {
      v62 = v66;
      v90 = (v396[v66] & 4) != 0;
    }
    else
    {
      if ( v66 == 61 )
        goto LABEL_160;
      if ( v66 <= 0x3Du )
      {
        if ( v66 == 33 || v66 == 60 && ((v67 = i[3], v67 == 61) || v67 == 33) )
        {
LABEL_160:
          if ( v63 >= v57 )
          {
            v7 = v299;
            v9 = v301;
            v86 = v386;
            goto LABEL_224;
          }
          v68 = i[1];
          if ( v68 != 63 )
          {
            if ( v68 != 42 )
            {
              ++v314;
              v56 = v313 & 0x2000;
              if ( (v313 & 0x2000) != 0 )
              {
                *v59 = -2145517568;
                v54 = 0;
                v58 = 0;
                v56 = 0;
                i = v386;
                v55 = v59 + 1;
              }
              else
              {
                v69 = HIDWORD(v408);
                if ( HIDWORD(v408) > 0xFFFE )
                {
                  v8 = v303;
                  v7 = v299;
                  v36 = 197;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                }
                v55 = v59 + 1;
                v54 = 0;
                v58 = 0;
                ++HIDWORD(v408);
                *v59 = (v69 + 1) | 0x80080000;
                i = v386;
              }
              goto LABEL_136;
            }
            if ( v57 - v63 <= 1 || (v170 = i[2], v377 = i[2], v171 = v170, (_DWORD)v170 == 41) )
            {
              i = v386;
              v54 = 0;
              v58 = 0;
              v56 = 0;
              v55 = v59;
              goto LABEL_136;
            }
            v52 = (unsigned __int64)v396;
            v62 = (unsigned __int64)(v386 + 1);
            v172 = *v386;
            if ( (v396[v171] & 4) != 0 )
            {
              if ( v62 >= (unsigned __int64)v57 )
              {
                v8 = v303;
                v7 = v299;
                v9 = v301;
                if ( v172 == 42 )
                  v36 = 160;
                else
                  v36 = 162;
                i = v386 + 1;
                goto LABEL_270;
              }
              v388 = v386 + 1;
              v390[0] = (unsigned __int8 *)(v386 + 1 - (unsigned __int8 *)v398);
              if ( v172 != 42 && (unsigned __int8)(v386[1] - 48) <= 9u )
              {
                v8 = v303;
                v7 = v299;
                i = v386 + 2;
                v36 = 144;
                v9 = v301;
                goto LABEL_270;
              }
              for ( i = v386 + 1; (v396[*i] & 0x10) != 0; ++i )
              {
                if ( i + 1 == v57 )
                {
                  v173 = i - v386;
                  if ( v173 <= 128 )
                  {
                    v378 = v173;
                    i = v57;
                    goto LABEL_606;
                  }
                  v8 = v303;
                  v7 = v299;
                  v36 = 148;
                  v9 = v301;
                  i = (unsigned __int8 *)v338;
                  goto LABEL_270;
                }
              }
              if ( (__int64)&i[-v62] > 128 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 148;
                v9 = v301;
                goto LABEL_270;
              }
              v378 = (_DWORD)i - v62;
              if ( v172 != 42 && i == (unsigned __int8 *)v62 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 162;
                v9 = v301;
                goto LABEL_270;
              }
LABEL_606:
              v386 = i;
              if ( i < v57 )
              {
                if ( *i == 58 )
                {
                  v174 = 0;
                  v331 = v57;
                  v353 = v58;
                  v52 = (unsigned __int64)dword_239B1A0;
                  v175 = v59;
                  v176 = i;
                  v380 = 0;
                  v177 = (char *)&unk_239B240;
                  while ( 1 )
                  {
                    v178 = dword_239B1A0[2 * v174];
                    v179 = v174;
                    if ( v178 == v378 )
                    {
                      v180 = sub_877240(v388, v177);
                      v52 = (unsigned __int64)dword_239B1A0;
                      if ( !v180 )
                        break;
                    }
                    ++v174;
                    v380 = v179 + 1;
                    v177 += v178 + 1;
                    if ( v174 == 19 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 195;
                      v9 = v301;
                      i = v386;
                      goto LABEL_270;
                    }
                  }
                  v59 = v175;
                  v58 = v353;
                  v181 = v176;
                  v62 = dword_239B1A0[2 * (int)v174 + 1];
                  v57 = v331;
                  if ( v353 > 0 )
                  {
                    if ( (unsigned int)(v62 + 2144927744) > 0x30000 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 128;
                      v9 = v301;
                      i = v386;
                      goto LABEL_270;
                    }
                    if ( (_DWORD)v62 != -2144927744 )
                    {
LABEL_615:
                      if ( (_DWORD)v62 == -2144862208 )
                      {
LABEL_808:
                        *v59 = -2144862208;
                        v55 = v59 + 1;
                        v62 = (unsigned __int64)(v386 + 1);
                      }
                      else
                      {
                        if ( (unsigned int)v62 <= 0x8027FFFF || (((_DWORD)v62 + 2144796672) & 0xFFFEFFFF) != 0 )
                          goto LABEL_618;
LABEL_877:
                        *v59 = v62;
                        v52 = (unsigned __int64)(v59 + 1);
                        v386 = v181 - 1;
LABEL_878:
                        v55 = (int *)(v52 + 8);
                        v343 = 1;
                        v62 = (unsigned __int64)(v386 + 2);
                        v239 = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398 - 2);
                        v390[0] = v239;
                        *(_DWORD *)(v52 + 4) = (_DWORD)v239;
                        *(_DWORD *)v52 = HIDWORD(v239);
                      }
LABEL_794:
                      ++v314;
                      v386 = (unsigned __int8 *)v62;
                      if ( v58 > 0 )
                      {
                        if ( v315 )
                        {
                          v315 += 16LL;
                          v52 = (unsigned __int64)v360;
                          if ( v315 >= (unsigned __int64)v360 )
                          {
                            v8 = v303;
                            v7 = v299;
                            i = (unsigned __int8 *)v62;
                            v36 = 184;
                            v9 = v301;
                            goto LABEL_270;
                          }
                        }
                        else
                        {
                          v315 = v397.m128i_i64[0];
                        }
                        v52 = v315;
                        *(_WORD *)v315 = v314;
                        *(_WORD *)(v315 + 6) = 2;
                        *(_DWORD *)(v315 + 8) = v313 & 0x10424E8;
                        *(_DWORD *)(v315 + 12) = v320 & 0x1F80;
                      }
LABEL_798:
                      i = v386;
                      v54 = 0;
                      v58 = 0;
                      v56 = 0;
                      goto LABEL_136;
                    }
LABEL_793:
                    *v59 = -2144927744;
                    v55 = v59 + 1;
                    v62 = (unsigned __int64)(v386 + 1);
                    goto LABEL_794;
                  }
                  if ( (_DWORD)v62 == -2144927744 )
                    goto LABEL_793;
                  if ( (unsigned int)v62 > 0x80270000 )
                  {
                    if ( (_DWORD)v62 == -2144665600 )
                    {
LABEL_866:
                      *v59 = -2144665600;
                      v55 = v59 + 1;
                      v62 = (unsigned __int64)(v386 + 1);
                      goto LABEL_794;
                    }
                    if ( (unsigned int)v62 <= 0x802B0000 )
                      goto LABEL_615;
                    if ( (_DWORD)v62 == -2144600064 )
                      goto LABEL_877;
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    if ( (_DWORD)v62 != -1879113728 )
                    {
LABEL_619:
                      i = v386;
                      v36 = 189;
                      goto LABEL_270;
                    }
                  }
                  else
                  {
                    if ( (_DWORD)v62 == -2145976320 )
                    {
                      v386 = v181 + 1;
                      *v59 = -2145976320;
                      v55 = sub_8397F0(&v386, v331, v59 + 1, nullptr, (int *)&v379, (__int64)&v392);
                      if ( !v55 )
                      {
                        v8 = v303;
                        v7 = v299;
                        v9 = v301;
                        i = v386;
                        v36 = v379;
                        goto LABEL_270;
                      }
                      ++v314;
                      goto LABEL_798;
                    }
                    if ( (_DWORD)v62 != -2144993280 )
                    {
                      if ( (_DWORD)v62 == -2147352576 )
                      {
LABEL_792:
                        *v59 = -2147352576;
                        v54 = 0;
                        v58 = 0;
                        v56 = 0;
                        ++v314;
                        v55 = v59 + 1;
                        i = ++v386;
                        goto LABEL_136;
                      }
LABEL_618:
                      v8 = v303;
                      v7 = v299;
                      v9 = v301;
                      goto LABEL_619;
                    }
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                  }
                  i = v386;
                  v36 = 196;
                  goto LABEL_270;
                }
                v8 = v303;
                v7 = v299;
                v202 = i;
                v379 = 195;
                v9 = v301;
LABEL_710:
                v36 = v379;
                i = v202 + 1;
                goto LABEL_270;
              }
              v7 = v299;
              v9 = v301;
              v86 = i;
LABEL_224:
              v36 = 114;
              v376 = 114;
              v403 = (unsigned __int8 *)(v86 - (unsigned __int8 *)v398);
              v35 = (unsigned __int8 *)(v86 - (unsigned __int8 *)v398);
              goto LABEL_179;
            }
            if ( v62 >= (unsigned __int64)v57 )
            {
              v8 = v303;
              v7 = v299;
              v9 = v301;
              if ( v172 == 42 )
                v36 = 160;
              else
                v36 = 162;
              i = v386 + 1;
              goto LABEL_270;
            }
            v388 = v386 + 1;
            v390[0] = (unsigned __int8 *)(v386 + 1 - (unsigned __int8 *)v398);
            if ( v172 != 42 && (unsigned __int8)(v386[1] - 48) <= 9u )
            {
              v8 = v303;
              v7 = v299;
              i = v386 + 2;
              v36 = 144;
              v9 = v301;
              goto LABEL_270;
            }
            for ( i = v386 + 1; (v396[*i] & 0x10) != 0; ++i )
            {
              if ( i + 1 == v57 )
              {
                v182 = i - v386;
                if ( v182 > 128 )
                {
                  v8 = v303;
                  v7 = v299;
                  v36 = 148;
                  v9 = v301;
                  i = (unsigned __int8 *)v338;
                  goto LABEL_270;
                }
                v378 = v182;
                i = v57;
                goto LABEL_632;
              }
            }
            if ( (__int64)&i[-v62] > 128 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 148;
              v9 = v301;
              goto LABEL_270;
            }
            v378 = (_DWORD)i - v62;
            if ( v172 != 42 && i == (unsigned __int8 *)v62 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 162;
              v9 = v301;
              goto LABEL_270;
            }
LABEL_632:
            v386 = i;
            if ( i >= v57 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 160;
              v9 = v301;
              goto LABEL_270;
            }
            if ( *i != 58 && *i != 41 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 160;
              v9 = v301;
              goto LABEL_270;
            }
            v332 = v59;
            v380 = 0;
            v183 = 0;
            v184 = (int *)&unk_239B380;
            v185 = (char *)&unk_239B400;
            v336 = (unsigned __int64)v57;
            v186 = i;
            while ( 1 )
            {
              v187 = *v184;
              if ( *v184 == v378 )
              {
                v58 = sub_877240(v388, v185);
                if ( !v58 )
                  break;
              }
              ++v183;
              v184 += 3;
              v380 = v183;
              v185 += (unsigned int)(v187 + 1);
              if ( v183 == 9 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 160;
                v9 = v301;
                i = v386;
                goto LABEL_270;
              }
            }
            v188 = v186;
            v59 = v332;
            v57 = (unsigned __int8 *)v336;
            if ( *v188 == 58 && (unsigned __int64)(v188 + 1) < v336 && v188[1] == 41 )
              v386 = v188 + 1;
            i = v386;
            v189 = (char *)&unk_239B380 + 12 * v183;
            v62 = *((unsigned int *)v189 + 2);
            if ( (int)v62 > 0 )
            {
              if ( *v386 != 58 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 166;
                v9 = v301;
                goto LABEL_270;
              }
              v190 = *((_DWORD *)v189 + 1);
              v52 = (unsigned __int64)++v386;
              v54 = v190 == -2144468992;
              if ( *i != 58 )
                goto LABEL_643;
              goto LABEL_657;
            }
            v190 = *((_DWORD *)v189 + 1);
            v52 = (unsigned __int64)++v386;
            v54 = v190 == -2144468992;
            if ( *i != 58 )
            {
LABEL_643:
              *v332 = v190;
              v55 = v332 + 1;
              v56 = 0;
              i = v386;
              v335 = (unsigned __int8 *)v332;
              goto LABEL_136;
            }
            if ( (_DWORD)v62 )
            {
              v191 = -2144534528;
              v345 = v332 + 1;
            }
            else
            {
LABEL_657:
              v345 = v332 + 1;
              v191 = v190 + ((v190 != -2144534528) << 16);
              v190 = v368;
            }
            *v332 = v191;
            v56 = 0;
            v361 = (unsigned __int8 *)v52;
            i = v386;
            v368 = v190;
            v55 = v345 + 1;
            v335 = (unsigned __int8 *)v332;
            v324 = 1;
            goto LABEL_136;
          }
          v62 = (unsigned __int64)(i + 2);
          v386 = i + 2;
          if ( i + 2 >= v57 )
          {
LABEL_821:
            v7 = v299;
            v9 = v301;
            v86 = (unsigned __int8 *)v62;
            goto LABEL_224;
          }
          v52 = i[2];
          switch ( (char)v52 )
          {
            case '!':
              goto LABEL_808;
            case '&':
              goto LABEL_799;
            case '\'':
              v206 = 39;
              goto LABEL_744;
            case '(':
              v386 = i + 3;
              if ( i + 3 >= v57 )
              {
                v7 = v299;
                v9 = v301;
                v86 = i + 3;
                goto LABEL_224;
              }
              v242 = i[3];
              ++v314;
              if ( v242 == 63 || v242 == 42 )
              {
                *v59 = -2146500608;
                i += 2;
                v54 = 0;
                v56 = 0;
                v386 = (unsigned __int8 *)v62;
                v55 = v59 + 1;
                v58 = 2;
                goto LABEL_136;
              }
              if ( (unsigned int)sub_8327E0(&v386, v57, SHIDWORD(v408), 0xFFFFu, 161, (unsigned int *)&v380, &v379) )
              {
                v62 = (unsigned int)v380;
                if ( v380 <= 0 )
                {
                  v8 = v303;
                  v7 = v299;
                  v36 = 115;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                }
                *v59 = -2146304000;
                v55 = v59 + 4;
                v243 = v386 - (unsigned __int8 *)v398 - 2;
                v390[0] = (unsigned __int8 *)v243;
                v52 = HIDWORD(v243);
                v59[2] = v243;
                v59[1] = HIDWORD(v243);
                v59[3] = v62;
                goto LABEL_915;
              }
              i = v386;
              if ( v379 )
              {
                v8 = v303;
                v7 = v299;
                v36 = v379;
                v9 = v301;
                goto LABEL_270;
              }
              if ( v57 - v386 <= 9 )
              {
                v244 = *v386;
                if ( *v386 != 82 )
                {
LABEL_925:
                  if ( v244 == 60 )
                  {
                    v245 = 62;
                    goto LABEL_927;
                  }
                  v245 = 39;
                  if ( v244 == 39 )
                  {
LABEL_927:
                    if ( !(unsigned int)sub_839680(
                                          (char **)&v386,
                                          (char *)v57,
                                          v245,
                                          v390,
                                          &v388,
                                          &v378,
                                          (int *)&v379,
                                          (__int64)&v392) )
                    {
                      v8 = v303;
                      v7 = v299;
                      v9 = v301;
                      i = v386;
                      v36 = v379;
                      goto LABEL_270;
                    }
                    *v59 = -2146369536;
LABEL_929:
                    v246 = v59 + 2;
                    v59[1] = v378;
LABEL_930:
                    v62 = (unsigned __int64)v390[0];
                    v55 = v246 + 2;
                    v247 = (unsigned __int64)v390[0];
                    v246[1] = v390[0];
                    v52 = HIDWORD(v247);
                    *v246 = v52;
LABEL_915:
                    i = v386;
                    if ( v386 >= v57 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 124;
                      v9 = v301;
                      goto LABEL_270;
                    }
                    if ( *v386 != 41 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 124;
                      v9 = v301;
                      goto LABEL_270;
                    }
                    i = v386 + 1;
                    v54 = 0;
                    v58 = 0;
                    v56 = 0;
                    ++v386;
                    goto LABEL_136;
                  }
                  goto LABEL_940;
                }
                if ( v57 - v386 <= 1 )
                {
LABEL_940:
                  v386 = i - 1;
                  if ( !(unsigned int)sub_839680(
                                        (char **)&v386,
                                        (char *)v57,
                                        41,
                                        v390,
                                        &v388,
                                        &v378,
                                        (int *)&v379,
                                        (__int64)&v392) )
                  {
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    i = v386;
                    v36 = v379;
                    goto LABEL_270;
                  }
                  v256 = v378;
                  if ( v378 != 6 || (v261 = sub_877240(v388, "DEFINE"), v260 = -2146435072, v261) )
                  {
                    v257 = 1;
                    v380 = 1;
                    v258 = (char *)(v388 + 1);
                    while ( v256 > v257 )
                    {
                      v259 = *v258;
                      ++v257;
                      ++v258;
                      if ( (unsigned __int8)(v259 - 48) > 9u )
                        goto LABEL_984;
                      v380 = v257;
                    }
                    if ( *v388 == 82 )
                    {
                      v260 = -2146172928;
                      goto LABEL_985;
                    }
LABEL_984:
                    v260 = -2146369536;
                  }
LABEL_985:
                  *v59 = v260;
                  v255 = v386 - 1;
LABEL_972:
                  v386 = v255;
                  v246 = v59 + 1;
                  if ( *v59 == -2146435072 )
                    goto LABEL_930;
                  goto LABEL_929;
                }
LABEL_969:
                if ( i[1] == 38 )
                {
                  v386 = i + 1;
                  if ( !(unsigned int)sub_839680(
                                        (char **)&v386,
                                        (char *)v57,
                                        41,
                                        v390,
                                        &v388,
                                        &v378,
                                        (int *)&v379,
                                        (__int64)&v392) )
                  {
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    i = v386;
                    v36 = v379;
                    goto LABEL_270;
                  }
                  *v59 = -2146238464;
                  v255 = v386 - 1;
                  goto LABEL_972;
                }
                goto LABEL_940;
              }
              if ( (unsigned int)sub_877240(v386, "VERSION") || (v248 = i[7], v248 == 41) )
              {
                v244 = *i;
                if ( *i != 82 )
                  goto LABEL_925;
                goto LABEL_969;
              }
              if ( v248 == 62 )
              {
                v249 = i + 8;
                v250 = 1;
              }
              else
              {
                v249 = i + 7;
                v250 = 0;
              }
              v386 = v249;
              LODWORD(v389) = 0;
              LODWORD(v390[0]) = 0;
              if ( *v249 != 61
                || (v62 = (unsigned __int64)(v249 + 1), v386 = v249 + 1, (unsigned __int8)(v249[1] - 48) > 9u) )
              {
                v379 = 179;
                v8 = v303;
                v7 = v299;
                v9 = v301;
                v202 = v386;
                if ( !v250 )
                  goto LABEL_710;
                goto LABEL_952;
              }
              v251 = sub_8327E0(&v386, v57, -1, 0x3E8u, 179, (unsigned int *)&v389, &v379);
              v253 = v386;
              if ( !v251 )
                goto LABEL_957;
              if ( v386 >= v57 )
              {
LABEL_951:
                v8 = v303;
                v7 = v299;
                v202 = v253;
                v379 = 179;
                v9 = v301;
                goto LABEL_952;
              }
              if ( *v386 == 46 )
              {
                ++v386;
                if ( v253 + 1 >= v57 )
                {
                  v8 = v303;
                  v7 = v299;
                  v202 = v253 + 1;
                  v379 = 179;
                  v9 = v301;
                  goto LABEL_952;
                }
                v62 = (unsigned int)v253[1] - 48;
                if ( (unsigned __int8)(v253[1] - 48) > 9u )
                {
                  v8 = v303;
                  v7 = v299;
                  v202 = v253 + 1;
                  v379 = 179;
                  v9 = v301;
                  goto LABEL_710;
                }
                v296 = v253;
                v254 = sub_8327E0(&v386, v57, -1, 0x3E8u, v252, (unsigned int *)v390, &v379);
                v253 = v386;
                v62 = (unsigned __int64)v296;
                if ( !v254 )
                {
LABEL_957:
                  v8 = v303;
                  v7 = v299;
                  v202 = v253;
                  v9 = v301;
                  goto LABEL_952;
                }
                if ( v386 >= v57 )
                  goto LABEL_951;
              }
              if ( *v253 == 41 )
              {
                *v59 = -2146107392;
                v55 = v59 + 4;
                v59[1] = v250;
                v59[2] = (int)v389;
                v59[3] = (int)v390[0];
                goto LABEL_915;
              }
              v8 = v303;
              v202 = v253;
              v379 = 179;
              v7 = v299;
              v9 = v301;
              if ( (unsigned __int64)v253 < v338 )
                goto LABEL_710;
LABEL_952:
              v36 = v379;
              i = v202;
              goto LABEL_270;
            case '*':
              goto LABEL_866;
            case '+':
              if ( i + 3 >= v57 )
              {
                v386 = i + 3;
                v7 = v299;
                v86 = i + 3;
                v9 = v301;
              }
              else
              {
                v62 = (unsigned int)i[3] - 48;
                if ( (unsigned __int8)(i[3] - 48) > 9u )
                {
                  v386 = i + 3;
                  v8 = v303;
                  v202 = i + 3;
                  v379 = 129;
                  v7 = v299;
                  v9 = v301;
                  goto LABEL_710;
                }
LABEL_863:
                v238 = HIDWORD(v408);
LABEL_864:
                if ( !(unsigned int)sub_8327E0(&v386, v57, v238, 0xFFFFu, 161, (unsigned int *)&v380, &v379) )
                {
                  v8 = v303;
                  v7 = v299;
                  v9 = v301;
                  i = v386;
                  v36 = v379;
                  goto LABEL_270;
                }
LABEL_687:
                v55 = v59 + 3;
                *v59 = v380 | 0x80240000;
                v52 = v386 - (unsigned __int8 *)v398;
                v390[0] = (unsigned __int8 *)(v386 - (unsigned __int8 *)v398);
                v192 = (unsigned __int64)(v386 - (unsigned __int8 *)v398) >> 32;
                v59[2] = (_DWORD)v386 - (_DWORD)v398;
                v59[1] = v192;
LABEL_688:
                v193 = v386;
                if ( v386 < v57 )
                {
                  if ( *v386 != 40 )
                    goto LABEL_690;
                  v205 = sub_8397F0(&v386, v57, v55, (unsigned __int8 *)v52, (int *)&v379, (__int64)&v392);
                  i = v386;
                  v55 = v205;
                  v193 = v386;
                  if ( !v205 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    v36 = v379;
                    goto LABEL_270;
                  }
                  if ( v386 < v57 )
                  {
LABEL_690:
                    if ( *v193 == 41 )
                    {
                      i = v193 + 1;
                      v56 = 0;
                      v58 = 0;
                      v54 = 1;
                      v386 = i;
                      goto LABEL_136;
                    }
                  }
                }
LABEL_738:
                v7 = v299;
                v9 = v301;
                v86 = v193;
              }
              goto LABEL_224;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
              v238 = -1;
              goto LABEL_864;
            case '<':
              if ( (__int64)&v57[-v62] <= 1 )
                goto LABEL_743;
              v240 = i[3];
              if ( v240 == 61 || v240 == 33 )
              {
                v241 = -2144731136;
                if ( v240 == 61 )
                  v241 = -2144796672;
              }
              else
              {
                if ( v240 != 42 )
                {
LABEL_743:
                  v206 = 62;
LABEL_744:
                  v207 = sub_839680((char **)&v386, (char *)v57, v206, v390, &v388, &v378, (int *)&v379, (__int64)&v392);
                  if ( !v207 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    i = v386;
                    v36 = v379;
                    goto LABEL_270;
                  }
                  v209 = HIDWORD(v408);
                  if ( HIDWORD(v408) > 0xFFFE )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 197;
                    v9 = v301;
                    i = v386;
                    goto LABEL_270;
                  }
                  ++v314;
                  v55 = v59 + 1;
                  ++HIDWORD(v408);
                  *v59 = (v209 + 1) | 0x80080000;
                  if ( (unsigned __int16)v404 > 0x270Fu )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 149;
                    v9 = v301;
                    i = v386;
                    goto LABEL_270;
                  }
                  v210 = v378;
                  v211 = WORD1(v404);
                  if ( WORD1(v404) < v378 + 3 )
                    WORD1(v404) = v378 + 3;
                  v364 = v388;
                  v212 = sub_840E80(v388, v378, v211, v52, v208, v294);
                  v52 = (unsigned __int64)src;
                  v333 = v212;
                  v380 = 0;
                  if ( (_WORD)v404 )
                  {
                    v354 = v59;
                    v358 = v57;
                    v213 = 0;
                    v214 = v207;
                    v215 = (unsigned __int16 *)src;
                    while ( 1 )
                    {
                      if ( v210 == v215[6] && v333 == (v215[7] & 0x7FFF) )
                      {
                        v58 = sub_8771E0(v364, *(_QWORD *)v215, v210, v52);
                        if ( !v58 )
                          break;
                      }
                      if ( *((_DWORD *)v215 + 2) == HIDWORD(v408) )
                      {
                        v8 = v303;
                        v7 = v299;
                        v36 = 165;
                        v9 = v301;
                        i = v386;
                        goto LABEL_270;
                      }
                      v216 = (unsigned __int16)v404;
                      ++v213;
                      v215 += 8;
                      v380 = v213;
                      if ( v213 >= (unsigned __int16)v404 )
                      {
                        v59 = v354;
                        v57 = v358;
                        v217 = 0;
                        goto LABEL_762;
                      }
                    }
                    v52 = (unsigned __int64)v215;
                    v59 = v354;
                    v217 = v214;
                    v57 = v358;
                    if ( *(_DWORD *)(v52 + 8) == HIDWORD(v408) )
                    {
                      v217 = 0;
LABEL_758:
                      v216 = (unsigned __int16)v404;
                      if ( (unsigned __int16)v404 > v380 )
                      {
LABEL_759:
                        i = v386;
                        v54 = 0;
                        v56 = 0;
                        goto LABEL_136;
                      }
                    }
                    else
                    {
                      if ( (v313 & 0x40) == 0 )
                      {
                        v8 = v303;
                        v7 = v299;
                        v36 = 143;
                        v9 = v301;
                        i = v386;
                        goto LABEL_270;
                      }
                      *(_WORD *)(v52 + 14) |= 0x8000u;
                      v221 = v380;
                      v222 = 0;
                      v378 = 0;
                      HIDWORD(v422) = 1;
                      v223 = *(unsigned __int8 **)v52;
                      v388 = *(unsigned __int8 **)v52;
                      while ( (unsigned __int16)v404 > v221 )
                      {
                        if ( v223 == *(unsigned __int8 **)v52 && *(_DWORD *)(v52 + 8) == HIDWORD(v408) )
                        {
                          if ( v222 )
                          {
                            v380 = v221;
                            goto LABEL_759;
                          }
                          goto LABEL_758;
                        }
                        v52 += 16LL;
                        ++v221;
                        v222 = 1;
                      }
                      if ( !v222 )
                        goto LABEL_758;
                      v380 = v221;
                      v216 = (unsigned __int16)v404;
                    }
                  }
                  else
                  {
                    v217 = 0;
                    v216 = 0;
                  }
LABEL_762:
                  if ( v216 >= v406 )
                  {
                    v218 = 2 * v406;
                    v219 = (void *)((__int64 (__fastcall *)(__int64, void *(*)(size_t)))*v392)(16 * v218, v392[2]);
                    v220 = v219;
                    if ( !v219 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 121;
                      v9 = v301;
                      i = v386;
                      goto LABEL_270;
                    }
                    memcpy(v219, src, 16LL * v406);
                    if ( v406 > 0x14 )
                      ((void (__fastcall *)(void *, void *(*)(size_t)))v392[1])(src, v392[2]);
                    src = v220;
                    v406 = v218;
                  }
                  v54 = 0;
                  v58 = 0;
                  v56 = 0;
                  *((_QWORD *)src + 2 * (unsigned __int16)v404) = v388;
                  *((_WORD *)src + 8 * (unsigned __int16)v404 + 6) = v378;
                  *((_DWORD *)src + 4 * (unsigned __int16)v404 + 2) = HIDWORD(v408);
                  *((_WORD *)src + 8 * (unsigned __int16)v404 + 7) = v333 | (v217 << 15);
                  i = v386;
                  LOWORD(v404) = v404 + 1;
                  goto LABEL_136;
                }
                v241 = -2144600064;
              }
              *v59 = v241;
              v52 = (unsigned __int64)(v59 + 1);
              goto LABEL_878;
            case '=':
              goto LABEL_793;
            case '>':
              goto LABEL_792;
            case 'C':
              v62 = (unsigned __int64)(i + 3);
              v56 = v320 & 0x8000;
              if ( (v320 & 0x8000) != 0 )
              {
                v8 = v303;
                v7 = v299;
                i += 3;
                v36 = 203;
                v9 = v301;
                goto LABEL_270;
              }
              v386 = i + 3;
              if ( v62 < (unsigned __int64)v57 )
              {
                v196 = v387;
                if ( !v387 || (v313 & 4) == 0 || v387 != (unsigned int *)(v59 - 4) || *(v59 - 1) != 255 )
                  v196 = v59;
                v387 = v196;
                v52 = i[3];
                v197 = (_BYTE)v52 != 41 && (unsigned __int8)(v52 - 48) > 9u;
                if ( v197 )
                {
                  v198 = 0;
                  v199 = (unsigned __int8)v52;
                  v380 = 0;
                  for ( j = 0; ; j = v197 )
                  {
                    v52 = v198;
                    v201 = dword_239F900[v198];
                    if ( !v201 )
                      goto LABEL_709;
                    ++v198;
                    if ( v199 == v201 )
                      break;
                  }
                  if ( j )
                    v380 = v52;
                  v203 = dword_239F8C0[v52];
                  if ( !v203 )
                  {
LABEL_709:
                    v379 = 182;
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    v202 = v386;
                    goto LABEL_710;
                  }
                  *v196 = -2147024896;
                  while ( 1 )
                  {
                    v52 = (unsigned __int64)v386++;
                    if ( v386 >= v57 )
                    {
                      v8 = v303;
                      v7 = v299;
                      i = (unsigned __int8 *)v62;
                      v36 = 181;
                      v9 = v301;
                      goto LABEL_270;
                    }
                    if ( v203 == *(unsigned __int8 *)(v52 + 1) )
                    {
                      i = (unsigned __int8 *)(v52 + 2);
                      v386 = (unsigned __int8 *)(v52 + 2);
                      if ( v52 + 2 >= (unsigned __int64)v57 || v203 != *(unsigned __int8 *)(v52 + 2) )
                        break;
                    }
                  }
                  v52 = (unsigned __int64)&i[-v62];
                  if ( (unsigned __int64)&i[-v62] > 0xFFFFFFFF )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 172;
                    v9 = v301;
                    goto LABEL_270;
                  }
                  v196[3] = v52;
                  v204 = v62 - (_QWORD)v398;
                  v55 = v196 + 6;
                  v390[0] = (unsigned __int8 *)v204;
                  v52 = HIDWORD(v204);
                  v196[5] = v204;
                  v196[4] = HIDWORD(v204);
                }
                else
                {
                  *v196 = -2147090432;
                  LODWORD(v62) = 0;
                  while ( 1 )
                  {
                    i = v386;
                    if ( v386 >= v57 )
                      break;
                    v52 = *v386;
                    if ( (unsigned __int8)(v52 - 48) > 9u )
                      break;
                    i = ++v386;
                    v62 = (unsigned int)(10 * v62 + v52 - 48);
                    if ( (int)v62 > 255 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 138;
                      v9 = v301;
                      goto LABEL_270;
                    }
                  }
                  v196[3] = v62;
                  v55 = v196 + 4;
                }
                v62 = (unsigned __int64)v398;
                if ( i >= v57 )
                {
                  v8 = v303;
                  v7 = v299;
                  v36 = 139;
                  v9 = v301;
                  goto LABEL_270;
                }
                if ( *i != 41 )
                {
                  v8 = v303;
                  v7 = v299;
                  v36 = 139;
                  v9 = v301;
                  goto LABEL_270;
                }
                v309 = 1;
                --v58;
                v386 = i + 1;
                v196[2] = 0;
                v54 = 0;
                v196[1] = (_DWORD)i + 1 - v62;
                i = v386;
                goto LABEL_136;
              }
              v7 = v299;
              v9 = v301;
              v86 = i + 3;
              goto LABEL_224;
            case 'P':
              v62 = (unsigned __int64)(i + 3);
              v386 = i + 3;
              if ( i + 3 >= v57 )
                goto LABEL_821;
              v194 = i[3];
              if ( v194 == 60 )
                goto LABEL_743;
              if ( v194 != 62 )
              {
                if ( v194 == 61 )
                {
                  v54 = sub_839680((char **)&v386, (char *)v57, 41, v390, &v388, &v378, (int *)&v379, (__int64)&v392);
                  if ( !v54 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v9 = v301;
                    i = v386;
                    v36 = v379;
                    goto LABEL_270;
                  }
                  *v59 = -2147221504;
                  v58 = 0;
                  v56 = 0;
                  v55 = v59 + 4;
                  v59[1] = v378;
                  v195 = HIDWORD(v390[0]);
                  v59[3] = (int)v390[0];
                  v59[2] = v195;
                  i = v386;
                  goto LABEL_136;
                }
                v8 = v303;
                v7 = v299;
                v202 = i + 3;
                v379 = 141;
                v9 = v301;
                goto LABEL_710;
              }
LABEL_799:
              v224 = (unsigned __int8 *)(v62 + 1);
              if ( v62 + 1 >= (unsigned __int64)v57 )
              {
                i = (unsigned __int8 *)(v62 + 1);
                v8 = v303;
                v7 = v299;
                v36 = 162;
                v9 = v301;
                goto LABEL_270;
              }
              v388 = (unsigned __int8 *)(v62 + 1);
              v390[0] = (unsigned __int8 *)(v224 - (unsigned __int8 *)v398);
              v52 = (unsigned int)*(unsigned __int8 *)(v62 + 1) - 48;
              if ( (unsigned __int8)(*(_BYTE *)(v62 + 1) - 48) <= 9u )
              {
                v8 = v303;
                v7 = v299;
                i = (unsigned __int8 *)(v62 + 2);
                v36 = 144;
                v9 = v301;
                goto LABEL_270;
              }
              for ( i = (unsigned __int8 *)(v62 + 1); ; ++i )
              {
                v52 = *i;
                if ( (v396[v52] & 0x10) == 0 )
                  break;
                v52 = (unsigned __int64)(i + 1);
                if ( i + 1 == v57 )
                {
                  v225 = (__int64)&i[-v62];
                  if ( v225 > 128 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 148;
                    v9 = v301;
                    i = (unsigned __int8 *)v338;
                    goto LABEL_270;
                  }
                  v378 = v225;
                  i = v57;
                  goto LABEL_807;
                }
              }
              v62 = i - v224;
              if ( i - v224 > 128 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 148;
                v9 = v301;
                goto LABEL_270;
              }
              v378 = (_DWORD)i - (_DWORD)v224;
              if ( i == v224 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 162;
                v9 = v301;
                goto LABEL_270;
              }
LABEL_807:
              v386 = i;
              v55 = v59 + 4;
              *v59 = -2145058816;
              v59[1] = v378;
              v52 = (unsigned __int64)v390[0];
              v226 = HIDWORD(v390[0]);
              v59[3] = (int)v390[0];
              v59[2] = v226;
              goto LABEL_688;
            case 'R':
              v380 = 0;
              v386 = i + 3;
              if ( i + 3 >= v57 )
              {
                i += 3;
                v8 = v303;
                v7 = v299;
                v36 = 158;
                v9 = v301;
                goto LABEL_270;
              }
              v62 = (unsigned int)i[3] - 40;
              if ( (unsigned __int8)(i[3] - 40) > 1u )
              {
                i += 3;
                v8 = v303;
                v7 = v299;
                v36 = 158;
                v9 = v301;
                goto LABEL_270;
              }
              goto LABEL_687;
            case '[':
              v52 = 2;
              v386 = i + 3;
              v377 = i[2];
              goto LABEL_377;
            default:
              if ( (_BYTE)v52 == 45 && (__int64)&v57[-v62] > 1 && (unsigned __int8)(i[3] - 48) <= 9u )
                goto LABEL_863;
              if ( v315 )
              {
                v315 += 16LL;
                v52 = (unsigned __int64)v360;
                if ( v315 >= (unsigned __int64)v360 )
                {
                  v8 = v303;
                  v7 = v299;
                  i += 2;
                  v36 = 184;
                  v9 = v301;
                  goto LABEL_270;
                }
              }
              else
              {
                v315 = v397.m128i_i64[0];
              }
              v52 = v315;
              *(_WORD *)v315 = v314 + 1;
              *(_DWORD *)(v315 + 8) = v313 & 0x10424E8;
              *(_WORD *)(v315 + 6) = 0;
              *(_DWORD *)(v315 + 12) = v320 & 0x1F80;
              if ( i[2] == 124 )
              {
                v54 = 0;
                v58 = 0;
                v56 = 0;
                i += 3;
                ++v314;
                v55 = v59 + 1;
                *(_WORD *)(v315 + 2) = WORD2(v408);
                v227 = WORD2(v408);
                *(_WORD *)(v315 + 6) = 1;
                *(_WORD *)(v315 + 4) = v227;
                LODWORD(v408) = v408 | 0x200000;
                *v59 = -2145517568;
                v386 = i;
                goto LABEL_136;
              }
              *(_DWORD *)(v315 + 2) = 0;
              v384 = 0;
              v383 = 0;
              LODWORD(v390[0]) = 0;
              LODWORD(v389) = 0;
              v228 = v320;
              if ( i[2] == 94 )
              {
                v230 = 0;
                v386 = i + 3;
                v229 = v313 & 0xFEFFDB57;
                LOBYTE(v228) = v320 & 0x7F;
              }
              else
              {
                v229 = v313;
                v230 = 1;
              }
              v52 = (unsigned __int64)&v389;
              v62 = (unsigned __int64)&v383;
              while ( 1 )
              {
                v193 = v386;
                if ( v386 >= v57 )
                  break;
                v231 = *v386;
                if ( *v386 == 41 || v231 == 58 )
                  break;
                i = ++v386;
                switch ( v231 )
                {
                  case '-':
                    if ( !v230 )
                    {
                      v8 = v303;
                      v7 = v299;
                      v36 = 194;
                      v9 = v301;
                      goto LABEL_270;
                    }
                    v230 = 0;
                    v52 = (unsigned __int64)v390;
                    v62 = (unsigned __int64)&v384;
                    break;
                  case 'J':
                    *(_DWORD *)v62 |= 0x40u;
                    LODWORD(v408) = v408 | 0x400;
                    continue;
                  case 'U':
                    *(_DWORD *)v62 |= 0x40000u;
                    continue;
                  case 'a':
                    v234 = *(_DWORD *)v52;
                    if ( i >= v57 )
                    {
LABEL_851:
                      BYTE1(v234) |= 0x1Fu;
                      *(_DWORD *)v52 = v234;
                    }
                    else
                    {
                      switch ( v193[1] )
                      {
                        case 'D':
                          BYTE1(v234) |= 1u;
                          *(_DWORD *)v52 = v234;
                          v386 = v193 + 2;
                          break;
                        case 'P':
                          BYTE1(v234) |= 0x18u;
                          *(_DWORD *)v52 = v234;
                          v386 = v193 + 2;
                          break;
                        case 'S':
                          BYTE1(v234) |= 2u;
                          *(_DWORD *)v52 = v234;
                          v386 = v193 + 2;
                          break;
                        case 'T':
                          BYTE1(v234) |= 0x10u;
                          *(_DWORD *)v52 = v234;
                          v386 = v193 + 2;
                          break;
                        case 'W':
                          BYTE1(v234) |= 4u;
                          *(_DWORD *)v52 = v234;
                          v386 = v193 + 2;
                          break;
                        default:
                          goto LABEL_851;
                      }
                    }
                    continue;
                  case 'i':
                    *(_DWORD *)v62 |= 8u;
                    continue;
                  case 'm':
                    *(_DWORD *)v62 |= 0x400u;
                    continue;
                  case 'n':
                    *(_DWORD *)v62 |= 0x2000u;
                    continue;
                  case 'r':
                    *(_DWORD *)v52 |= 0x80u;
                    continue;
                  case 's':
                    *(_DWORD *)v62 |= 0x20u;
                    continue;
                  case 'x':
                    v232 = *(_DWORD *)v62;
                    v233 = *(_DWORD *)v62;
                    LOBYTE(v233) = *(_DWORD *)v62 | 0x80;
                    *(_DWORD *)v62 = v233;
                    if ( i < v57 && v193[1] == 120 )
                    {
                      *(_DWORD *)v62 = v232 | 0x1000080;
                      v386 = v193 + 2;
                    }
                    continue;
                  default:
                    v8 = v303;
                    v7 = v299;
                    v36 = 111;
                    v9 = v301;
                    goto LABEL_270;
                }
              }
              v235 = v384;
              if ( (v383 & 0x1000080) == 0x80 || (v384 & 0x80u) != 0 )
              {
                v235 = v384 | 0x1000000;
                v384 |= 0x1000000u;
              }
              v236 = ~v235 & (v229 | v383);
              v237 = ((unsigned int)v389 | v228) & ~LODWORD(v390[0]);
              if ( v386 >= v57 )
                goto LABEL_738;
              ++v386;
              if ( *v193 == 41 )
              {
                if ( v397.m128i_i64[0] < v315 && *(_WORD *)(v315 - 16) == v314 )
                {
                  v315 -= 16LL;
                  v55 = v59;
                }
                else
                {
                  v55 = v59;
                  *(_WORD *)v315 = v314;
                }
              }
              else
              {
                *v59 = -2145517568;
                v55 = v59 + 1;
                ++v314;
              }
              v52 = v313;
              if ( v236 == v313 && (v52 = v320, v237 == v320) )
              {
                v320 = v237;
                v54 = 0;
                v58 = 0;
                v56 = 0;
                v313 = v236;
                i = v386;
              }
              else
              {
                v55[1] = v236;
                v54 = 0;
                v58 = 0;
                v56 = 0;
                *v55 = -2145452032;
                v55 += 3;
                *(v55 - 1) = v237;
                i = v386;
                v320 = v237;
                v313 = v236;
              }
              goto LABEL_136;
          }
        }
LABEL_177:
        v379 = 128;
        v8 = v303;
        v7 = v299;
        v9 = v301;
        if ( v58 == 2 )
        {
          i = v386;
          v36 = 128;
          goto LABEL_270;
        }
        v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v398);
        v36 = 128;
        v376 = 128;
        v403 = v35;
        goto LABEL_179;
      }
      if ( v66 != 67 )
        goto LABEL_177;
      v90 = v58 == 2;
    }
    if ( v90 )
      goto LABEL_160;
    goto LABEL_177;
  }
LABEL_337:
  v309 = v65;
  v348 = v64;
  v115 = sub_832F30((int)i, &v387, v344, v55, (__int64)&v392);
  v64 = v348;
  v59 = v115;
  if ( v58 > 0 )
  {
    if ( v348 == 40 )
      goto LABEL_150;
    goto LABEL_177;
  }
LABEL_249:
  switch ( v326 )
  {
    case '$':
      *v59 = -2145779712;
      v54 = 0;
      v58 = 0;
      v56 = 0;
      i = v386;
      v55 = v59 + 1;
      goto LABEL_136;
    case '(':
      goto LABEL_160;
    case ')':
      v52 = v315;
      v118 = v59;
      v54 = 1;
      if ( v315 && *(_WORD *)v315 == v314 )
      {
        v155 = *(_WORD *)(v315 + 6);
        v313 = *(_DWORD *)(v315 + 8) | v313 & 0xFEFBDB17;
        v320 = *(_DWORD *)(v315 + 12) | v320 & 0xFFFFE07F;
        if ( (v155 & 1) != 0 && HIDWORD(v408) < *(unsigned __int16 *)(v315 + 4) )
        {
          HIDWORD(v408) = *(unsigned __int16 *)(v315 + 4);
          v155 = *(_WORD *)(v315 + 6);
        }
        v118 = v59;
        v54 = (v155 & 2) == 0;
        v62 = v155 & 4;
        if ( (_DWORD)v62 )
        {
          *v59 = -2145583104;
          v118 = v59 + 1;
        }
        v52 = v315;
        if ( v397.m128i_i64[0] == v315 )
        {
          v315 = 0;
        }
        else
        {
          v52 = v315 - 16;
          v315 -= 16LL;
        }
      }
      if ( !v314 )
      {
        v8 = v303;
        v7 = v299;
        v36 = 122;
        v9 = v301;
        i = v386;
        goto LABEL_270;
      }
      *v118 = -2145583104;
      v55 = v118 + 1;
      v58 = 0;
      v56 = 0;
      --v314;
      i = v386;
      goto LABEL_136;
    case '*':
      if ( !v54 )
        goto LABEL_1015;
      if ( *v321 != -2144468992 )
      {
        v55 = v59 + 1;
        v54 = 0;
        v58 = 0;
        v56 = -2143813632;
        *v59 = -2143813632;
        i = v386;
        goto LABEL_136;
      }
      v52 = (unsigned __int64)v335;
      v154 = v59 - 1;
      v56 = -2143813632;
      if ( v59 - 1 >= (int *)v335 )
        goto LABEL_512;
      *(_DWORD *)v335 = -2145517568;
      *(_QWORD *)(v59 + 1) = 0x80380000801D0000LL;
      goto LABEL_513;
    case '+':
      if ( !v54 )
        goto LABEL_1015;
      if ( *v321 != -2144468992 )
      {
        v55 = v59 + 1;
        v54 = 0;
        v58 = 0;
        v56 = -2143617024;
        *v59 = -2143617024;
        i = v386;
        goto LABEL_136;
      }
      v52 = (unsigned __int64)v335;
      v154 = v59 - 1;
      v56 = -2143617024;
      if ( v59 - 1 >= (int *)v335 )
        goto LABEL_512;
      *(_DWORD *)v335 = -2145517568;
      *(_QWORD *)(v59 + 1) = 0x803B0000801D0000LL;
      goto LABEL_513;
    case '.':
      v55 = v59 + 1;
      v58 = 0;
      v56 = 0;
      v54 = 1;
      *v59 = -2145714176;
      i = v386;
      goto LABEL_136;
    case '?':
      if ( !v54 )
        goto LABEL_1015;
      if ( *v321 != -2144468992 )
      {
        v55 = v59 + 1;
        v54 = 0;
        v58 = 0;
        v56 = -2143420416;
        *v59 = -2143420416;
        i = v386;
        goto LABEL_136;
      }
      v52 = (unsigned __int64)v335;
      v154 = v59 - 1;
      v56 = -2143420416;
      if ( v59 - 1 >= (int *)v335 )
        goto LABEL_512;
      *(_DWORD *)v335 = -2145517568;
      *(_QWORD *)(v59 + 1) = 0x803E0000801D0000LL;
      goto LABEL_513;
    case '[':
      if ( v57 - v63 <= 5 )
        goto LABEL_372;
      v334 = v63;
      if ( !(unsigned int)sub_877240(v63, "[:<:]]") || !(unsigned int)sub_877240(v334, "[:>:]]") )
      {
        *v59 = -2145648635;
        if ( i[3] == 60 )
        {
          v281 = v59 + 2;
          v282 = -2144927744;
        }
        else
        {
          v281 = v59 + 4;
          v282 = -2144796672;
          v343 = 1;
          *((_QWORD *)v59 + 1) = 0;
        }
        v59[1] = v282;
        if ( (v313 & 0x20000) != 0 )
        {
          v281[1] = 0x80000;
          v283 = v281 + 2;
          v52 = 2149318672LL;
        }
        else
        {
          v283 = v281 + 1;
          v52 = 2149318667LL;
        }
        i += 7;
        *v281 = v52;
        v55 = v283 + 1;
        v58 = 0;
        *v283 = -2145583104;
        v56 = 0;
        v54 = 1;
        v386 = i;
        goto LABEL_136;
      }
      v63 = v334;
LABEL_372:
      if ( v63 < v57 )
      {
        v119 = i[1];
        if ( (unsigned __int8)v119 <= 0x3Du )
        {
          v120 = 0x2400400000000000LL;
          if ( _bittest64(&v120, v119) )
          {
            if ( (unsigned int)sub_832EB0((char *)v63, (__int64)v57, (char **)&v389) )
            {
              v8 = v303;
              v7 = v299;
              v36 = 113;
              v9 = v301;
              if ( v121 == 58 )
                v36 = 112;
              v52 = (unsigned __int64)v389;
              i = v389 + 2;
              goto LABEL_270;
            }
          }
        }
      }
      v52 = (v313 >> 27) & 1;
LABEL_377:
      v62 = 0xFFFFFFFFLL;
      v122 = 0;
      v123 = 0;
      v124 = nullptr;
      v125 = v52;
      v329 = -1;
      v365 = v59;
      v126 = v377;
      v127 = -1;
      v362 = HIBYTE(v313) & 1;
      v128 = 0;
      break;
    case '\\':
      goto LABEL_200;
    case '^':
      *v59 = -2146893824;
      v54 = 0;
      v58 = 0;
      v56 = 0;
      i = v386;
      v55 = v59 + 1;
      goto LABEL_136;
    case '{':
      v70 = v309;
      v55 = v59;
      goto LABEL_344;
    case '|':
      if ( v315 )
      {
        v52 = v314;
        if ( *(_WORD *)v315 == v314 )
        {
          v52 = v315;
          if ( (*(_BYTE *)(v315 + 6) & 1) != 0 )
          {
            if ( (unsigned int)*(unsigned __int16 *)(v315 + 4) < HIDWORD(v408) )
              *(_WORD *)(v315 + 4) = WORD2(v408);
            HIDWORD(v408) = *(unsigned __int16 *)(v315 + 2);
          }
        }
      }
      *v59 = -2147418112;
      v54 = 0;
      v58 = 0;
      v56 = 0;
      i = v386;
      v55 = v59 + 1;
      goto LABEL_136;
    default:
      *v59 = v64;
      v55 = v59 + 1;
      v58 = 0;
      v56 = 0;
      i = v386;
      v54 = 1;
      goto LABEL_136;
  }
  while ( 2 )
  {
    if ( v128 )
    {
LABEL_383:
      if ( v126 == 92 && v386 < v57 && *v386 == 69 )
      {
        ++v386;
LABEL_430:
        v52 = (unsigned __int64)v386;
        if ( v386 < v57 )
        {
          ++v386;
          v126 = *(unsigned __int8 *)v52;
          goto LABEL_423;
        }
        goto LABEL_1028;
      }
      if ( v125 == 2 )
      {
        v8 = v303;
        v7 = v299;
        v36 = 216;
        v9 = v301;
        i = v386;
        goto LABEL_270;
      }
      v128 = 1;
LABEL_386:
      v62 = 1;
LABEL_387:
      if ( v123 == 1 )
      {
        v129 = *(v59 - 2);
        v52 = v377;
        if ( v129 == v377 )
        {
          --v59;
          v123 = 0;
        }
        else
        {
          if ( v377 < v129 )
          {
            v8 = v303;
            v7 = v299;
            v36 = 108;
            v9 = v301;
            i = v386;
            goto LABEL_270;
          }
          if ( !(_DWORD)v62 && *(v59 - 1) == -2145189888 )
            *(v59 - 1) = -2145255424;
          *v59 = v52;
          v123 = 0;
          ++v59;
        }
      }
      else
      {
        if ( v123 == 3 )
        {
          v8 = v303;
          v7 = v299;
          v36 = 150;
          v9 = v301;
          i = v346;
          goto LABEL_270;
        }
        v123 = v62 + 4;
        v62 = v377;
        *v59++ = v377;
      }
      v52 = (unsigned __int64)v386;
      if ( v386 >= v57 )
        goto LABEL_1028;
      v62 = (unsigned __int64)(v386 + 1);
      v122 = 1;
      ++v386;
      v126 = *(unsigned __int8 *)v52;
      v377 = v126;
      continue;
    }
    break;
  }
LABEL_407:
  if ( v126 == 32 )
  {
LABEL_424:
    if ( v125 > 1 || v362 )
      goto LABEL_430;
    v128 = 0;
    v125 = v125 == 1;
    goto LABEL_386;
  }
  while ( 2 )
  {
    if ( v126 == 9 )
      goto LABEL_424;
    if ( (v127 & 0x8000u) != 0 )
    {
      if ( v126 != 91 )
        goto LABEL_411;
      if ( v125 == 2 )
      {
        if ( v123 == 1 )
          *(v59 - 1) = 45;
        v130 = v386;
        if ( v122 != 1 )
        {
          if ( v386 < v57 )
          {
            ++v386;
            v377 = *v130;
LABEL_401:
            if ( v124 )
              *v124 |= 1u;
            v52 = (unsigned __int16)v329;
            ++v127;
            *v59 = -2146828288;
            v131 = v59 + 1;
            if ( v329 < (__int16)v127 )
              v52 = v127;
            v329 = v52;
            v417[(__int16)v127] = 0;
            v126 = v377;
            v62 = 2;
            goto LABEL_406;
          }
LABEL_666:
          v8 = v303;
          v7 = v299;
          v156 = v130;
          v9 = v301;
          goto LABEL_525;
        }
        v8 = v303;
        v7 = v299;
        v157 = v386;
        v9 = v301;
LABEL_529:
        i = v157;
        v36 = 213;
        goto LABEL_270;
      }
      if ( v123 == 1 )
        *(v59 - 1) = 45;
      v148 = v386;
      v130 = v386;
      if ( v386 >= v57 )
        goto LABEL_666;
      v149 = v386 + 1;
      v62 = v125;
      ++v386;
      v150 = *v148;
      v377 = v150;
LABEL_480:
      v351 = v127;
      v357 = v62;
      v367 = v362 | ((unsigned int)v62 > 1);
      v151 = 0;
      while ( 1 )
      {
        if ( v150 == 92 )
        {
          if ( v149 < v57 && v148[1] == 69 )
          {
            v148 += 2;
            v386 = v148;
          }
          else
          {
            v373 = v125;
            v371 = v126;
            if ( v57 - v149 <= 2 || (unsigned int)sub_877240(v149, "Q\\E") )
            {
LABEL_500:
              v152 = v151;
              v62 = v357;
              v127 = v351;
              goto LABEL_501;
            }
            v148 += 4;
            v126 = v371;
            v125 = v373;
            v386 = v148;
          }
        }
        else if ( v150 == 32 || v150 == 9 )
        {
          if ( !v367 )
            goto LABEL_500;
          v148 = v386;
        }
        else
        {
          if ( v151 || v150 != 94 )
          {
            v152 = v151;
            v62 = v357;
            v127 = v351;
            if ( v150 == 93 && v357 <= 1 && (v407 & 1) != 0 )
            {
              if ( v124 )
                *v124 |= 1u;
              v280 = -2146762752;
              if ( v152 )
                v280 = -2146697216;
              *v59 = v280;
              v55 = v59 + 1;
              if ( (v351 & 0x8000u) == 0 )
              {
LABEL_1050:
                v52 = (unsigned __int64)v386;
                if ( v386 < v57 )
                {
                  v59 = v55;
                  v124 = nullptr;
                  v123 = 0;
                  ++v386;
                  v122 = 1;
                  v126 = *(unsigned __int8 *)v52;
                  goto LABEL_423;
                }
LABEL_1028:
                v8 = v303;
                v7 = v299;
                v279 = v127;
                i = (unsigned __int8 *)v52;
                v9 = v301;
                v52 = v125;
LABEL_1029:
                LOBYTE(v62) = (_DWORD)v52 == 1;
                if ( v279 == 0 && (_DWORD)v52 == 1 && v329 == 1 )
                  v36 = 212;
                else
                  v36 = 106;
                goto LABEL_270;
              }
              v59 = v365;
              v58 = 0;
              v56 = 0;
              v54 = 1;
              i = v386;
              goto LABEL_136;
            }
LABEL_501:
            if ( v124 )
              *v124 |= 1u;
            if ( v152 )
              *v59 = -2146566144;
            else
              *v59 = -2146828288;
            v153 = v329;
            if ( v329 < (__int16)++v127 )
              v153 = v127;
            v329 = v153;
            v417[(__int16)v127] = 0;
            if ( v150 == 93 )
            {
              v59[1] = 93;
              v52 = (unsigned __int64)v386;
              if ( v386 < v57 )
              {
                v124 = v59;
                v125 = v62;
                v59 += 2;
                ++v386;
                v122 = 1;
                v126 = *(unsigned __int8 *)v52;
                v123 = 5;
                goto LABEL_423;
              }
              v279 = v127;
              v8 = v303;
              i = v386;
              v7 = v299;
              v9 = v301;
              v52 = (unsigned int)v62;
              goto LABEL_1029;
            }
            v126 = v377;
            v131 = v59 + 1;
LABEL_406:
            v124 = v59;
            v122 = 0;
            v59 = v131;
            v123 = 0;
            v125 = v62;
            goto LABEL_407;
          }
          v148 = v386;
          v151 = 1;
        }
        if ( v148 >= v57 )
        {
          v8 = v303;
          v7 = v299;
          v9 = v301;
          v156 = v386;
          goto LABEL_524;
        }
        v149 = v148 + 1;
        v386 = v148 + 1;
        v150 = *v148;
        v377 = v150;
      }
    }
    if ( v126 == 91 )
    {
      if ( v57 - v386 > 2 )
      {
        v132 = *v386;
        if ( (unsigned __int8)v132 <= 0x3Du )
        {
          v133 = 0x2400400000000000LL;
          if ( _bittest64(&v133, v132) )
          {
            v134 = sub_832EB0((char *)v386, (__int64)v57, (char **)&v389);
            if ( v134 )
            {
              if ( v123 == 1 )
              {
                v8 = v303;
                v7 = v299;
                v9 = v301;
                i = v389 + 2;
                v36 = 150;
                goto LABEL_270;
              }
              if ( v123 == 3 )
              {
                v8 = v303;
                v7 = v299;
                v36 = 150;
                v9 = v301;
                i = v346;
                goto LABEL_270;
              }
              if ( v122 == 1 && v125 == 2 )
              {
                v8 = v303;
                v7 = v299;
                v9 = v301;
                i = v389 + 2;
                v36 = 213;
                goto LABEL_270;
              }
              if ( v135 != 58 )
              {
                v8 = v303;
                v7 = v299;
                v9 = v301;
                i = v389 + 2;
                v36 = 113;
                goto LABEL_270;
              }
              v137 = v136 + 1;
              v386 = (unsigned __int8 *)(v136 + 1);
              if ( *(_BYTE *)(v136 + 1) == 94 )
              {
                v137 = v136 + 2;
                v386 = (unsigned __int8 *)(v136 + 2);
              }
              else
              {
                v134 = 0;
              }
              v62 = (unsigned __int64)v389;
              v52 = (unsigned __int64)&unk_239B108;
              v366 = v124;
              v138 = (unsigned __int8 *)&unk_239B108;
              v139 = 5;
              v370 = v127;
              v140 = v389;
              v141 = "alpha";
              v374 = (unsigned __int64)v57;
              v350 = v134;
              v142 = (int)v389 - (int)v137;
              v143 = (_DWORD)v389 - v137;
              v372 = v125;
              while ( 1 )
              {
                if ( v143 == v139 )
                {
                  v375 = v142;
                  v145 = sub_877240(v137, v141);
                  v142 = v375;
                  v52 = (unsigned __int64)&unk_239B108;
                  if ( !v145 )
                    break;
                }
                ++v138;
                v144 = v139 + 1;
                v139 = *v138;
                v141 += v144;
                if ( !(_BYTE)v139 )
                {
                  v8 = v303;
                  v7 = v299;
                  i = v140 + 2;
                  v36 = 130;
                  v9 = v301;
                  goto LABEL_270;
                }
              }
              v146 = v140 + 2;
              v124 = v366;
              v127 = v370;
              v386 = v146;
              v125 = v372;
              v62 = 2149580800LL;
              v57 = (unsigned __int8 *)v374;
              if ( v350 )
                v62 = 2149646336LL;
              *v59 = v62;
              v147 = v59 + 2;
              v59[1] = (_DWORD)v138 - (unsigned int)&unk_239B108;
              v52 = (unsigned __int64)v386;
              if ( (unsigned __int64)v386 < v374 )
              {
LABEL_450:
                v62 = v52 + 1;
                v59 = v147;
                v122 = 1;
                v123 = 2;
                v386 = (unsigned __int8 *)(v52 + 1);
                v126 = *(unsigned __int8 *)v52;
                goto LABEL_423;
              }
              goto LABEL_1028;
            }
          }
        }
      }
      if ( v125 == 1 )
      {
        if ( v123 == 1 )
          *(v59 - 1) = 45;
        v62 = 1;
LABEL_477:
        if ( (__int16)v127 > 13 )
        {
          v8 = v303;
          v7 = v299;
          v9 = v301;
          i = v386 - 1;
          v36 = 207;
          goto LABEL_270;
        }
        v148 = v386;
        if ( v386 >= v57 )
        {
          v8 = v303;
          v7 = v299;
          v156 = v386;
          v9 = v301;
LABEL_524:
          if ( v126 == 40 )
          {
            i = v156;
            v36 = 114;
            goto LABEL_270;
          }
LABEL_525:
          i = v156;
          v36 = 106;
          goto LABEL_270;
        }
        v149 = ++v386;
        v150 = *v148;
        v377 = v150;
        if ( (_DWORD)v62 == 2 )
          goto LABEL_401;
        goto LABEL_480;
      }
      if ( v125 != 2 )
        goto LABEL_453;
      v62 = 3;
LABEL_474:
      if ( v123 == 1 )
        *(v59 - 1) = 45;
      if ( v122 == 1 )
      {
        v8 = v303;
        v7 = v299;
        v9 = v301;
        v157 = v386;
        goto LABEL_529;
      }
      goto LABEL_477;
    }
LABEL_411:
    switch ( v126 )
    {
      case '(':
        if ( v125 != 2 )
          goto LABEL_453;
        v62 = 2;
        goto LABEL_474;
      case ']':
        if ( v125 != 2 )
        {
          if ( v122 != 2 )
            goto LABEL_1061;
          goto LABEL_1069;
        }
        if ( (_WORD)v127 )
        {
          v8 = v303;
          v7 = v299;
          v9 = v301;
          i = v386 - 1;
          v36 = 114;
          goto LABEL_270;
        }
LABEL_1059:
        if ( v122 != 2 )
        {
          if ( (v122 & 1) == 0 )
          {
            v8 = v303;
            v7 = v299;
            v36 = 214;
            v9 = v301;
            i = v386;
            goto LABEL_270;
          }
LABEL_1061:
          if ( v123 == 1 )
            *(v59 - 1) = 45;
          *v59 = -2146631680;
          v55 = v59 + 1;
          LOWORD(v127) = v127 - 1;
          if ( (v127 & 0x8000u) == 0 )
          {
            if ( v125 > 2 )
              v125 = 2;
            goto LABEL_1050;
          }
          v59 = v365;
          i = v386;
          v58 = 0;
          if ( v125 == 2 )
          {
            if ( v386 >= v57 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 215;
              v9 = v301;
              goto LABEL_270;
            }
            if ( *v386 != 41 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 215;
              v9 = v301;
              goto LABEL_270;
            }
            i = v386 + 1;
            v58 = 0;
            v56 = 0;
            v54 = 1;
            ++v386;
            goto LABEL_136;
          }
LABEL_589:
          v56 = 0;
          v54 = 1;
          goto LABEL_136;
        }
LABEL_1069:
        v8 = v303;
        v7 = v299;
        v36 = 210;
        v9 = v301;
        i = v386;
        goto LABEL_270;
      case ')':
        if ( v125 != 2 )
        {
LABEL_453:
          v128 = 0;
          goto LABEL_386;
        }
        if ( (__int16)v127 <= 0 )
        {
          v8 = v303;
          v7 = v299;
          v36 = 122;
          v9 = v301;
          i = v386;
          goto LABEL_270;
        }
        goto LABEL_1059;
    }
    if ( v125 == 2 )
    {
      if ( v126 == 38 )
      {
        if ( v122 != 1 )
          goto LABEL_1114;
        if ( !v124 )
          goto LABEL_1113;
      }
      else
      {
        if ( v126 <= 0x26 )
        {
          if ( v126 == 33 )
          {
            if ( v122 == 1 )
            {
              v8 = v303;
              v7 = v299;
              v36 = 213;
              v9 = v301;
              i = v386;
              goto LABEL_270;
            }
            if ( v124 )
              *v124 |= 1u;
            *v59 = -2142765056;
            v52 = (unsigned __int64)v386;
            if ( v386 < v57 )
            {
              v62 = (unsigned __int64)(v386 + 1);
              ++v59;
              v122 = 2;
              v123 = 0;
              ++v386;
              v126 = *(unsigned __int8 *)v52;
              v124 = nullptr;
              goto LABEL_423;
            }
            goto LABEL_1028;
          }
          goto LABEL_1091;
        }
        if ( v126 != 94 )
        {
          if ( v126 > 0x5E )
          {
            if ( v126 != 124 )
              goto LABEL_1091;
          }
          else if ( ((v126 - 43) & 0xFFFFFFFD) != 0 )
          {
            if ( v126 == 92 )
            {
              v389 = v386;
              v284 = sub_839AC0(&v386, v57, &v377, (int *)&v379, v313, v320, HIDWORD(v408), 1, (__int64)&v392);
              v62 = v379;
              v125 = 2;
              v285 = v284;
              if ( v379 )
              {
                v8 = v303;
                v7 = v299;
                v36 = v379;
                v9 = v301;
                i = v386;
                goto LABEL_270;
              }
LABEL_1097:
              switch ( v285 )
              {
                case 0:
                  goto LABEL_1108;
                case 4:
                case 17:
                case 22:
                  v8 = v303;
                  v7 = v299;
                  v36 = 107;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                case 5:
                  v377 = 8;
                  goto LABEL_1108;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                  v147 = sub_832FB0(v285, v59, v313, v320);
                  goto LABEL_1023;
                case 12:
                  v8 = v303;
                  v7 = v299;
                  v36 = 171;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                case 15:
                case 16:
                  v8 = v303;
                  v7 = v299;
                  v36 = 145;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                case 18:
                case 19:
                case 20:
                case 21:
                  v147 = v59 + 1;
                  *v59 = v285 - 2145648640;
LABEL_1023:
                  if ( v123 == 1 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 150;
                    v9 = v301;
                    i = v386;
                    goto LABEL_270;
                  }
                  if ( v123 == 3 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 150;
                    v9 = v301;
                    i = v346;
                    goto LABEL_270;
                  }
                  if ( v122 == 1 && v125 == 2 )
                  {
                    v8 = v303;
                    v7 = v299;
                    v36 = 213;
                    v9 = v301;
                    i = v386;
                    goto LABEL_270;
                  }
                  v52 = (unsigned __int64)v386;
                  if ( v386 >= v57 )
                    goto LABEL_1028;
                  goto LABEL_450;
                case 25:
                  goto LABEL_430;
                case 26:
                  v52 = (unsigned __int64)v386;
                  if ( v386 >= v57 )
                    goto LABEL_1028;
                  ++v386;
                  v126 = *(unsigned __int8 *)v52;
                  v377 = v126;
                  goto LABEL_383;
                case 28:
                  v377 = 107;
LABEL_1108:
                  if ( v122 != 1 || v125 != 2 )
                    goto LABEL_1122;
                  v8 = v303;
                  v7 = v299;
                  v36 = 213;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
                default:
                  v8 = v303;
                  v7 = v299;
                  v36 = 107;
                  v9 = v301;
                  i = v386;
                  goto LABEL_270;
              }
            }
LABEL_1091:
            v8 = v303;
            v7 = v299;
            v36 = 216;
            v9 = v301;
            i = v386;
            goto LABEL_270;
          }
        }
        if ( v122 != 1 )
        {
LABEL_1114:
          v8 = v303;
          v7 = v299;
          v36 = 209;
          v9 = v301;
          i = v386;
          goto LABEL_270;
        }
        if ( !v124 )
        {
LABEL_1101:
          if ( v126 == 45 )
          {
            v286 = -2142896128;
          }
          else if ( v126 > 0x2D )
          {
            if ( v126 == 124 )
LABEL_1104:
              v286 = -2142961664;
            else
              v286 = -2142830592;
          }
          else
          {
            if ( v126 != 38 )
              goto LABEL_1104;
LABEL_1113:
            v286 = -2143027200;
          }
          *v59 = v286;
          v52 = (unsigned __int64)v386;
          v62 = (unsigned __int64)(v59 + 1);
          if ( v386 >= v57 )
            goto LABEL_1028;
          ++v59;
          v122 = 2;
          v123 = 0;
          ++v386;
          v124 = nullptr;
          v126 = *(unsigned __int8 *)v52;
LABEL_423:
          v377 = v126;
          if ( v126 == 32 )
            goto LABEL_424;
          continue;
        }
      }
      *v124 |= 1u;
      goto LABEL_1101;
    }
    break;
  }
  if ( v125 != 1 )
  {
    if ( v126 == 92 )
      goto LABEL_1117;
    goto LABEL_1144;
  }
  switch ( v126 )
  {
    case '|':
    case '-':
      v288 = v386;
      if ( v386 < v57 )
        goto LABEL_1143;
      goto LABEL_1144;
    case '&':
      v288 = v386;
      if ( v386 >= v57 )
      {
        v128 = 0;
        goto LABEL_386;
      }
LABEL_1143:
      v62 = *v288;
      if ( (_DWORD)v62 != v126 )
      {
LABEL_1144:
        if ( v126 != 45 )
          goto LABEL_453;
        if ( v123 <= 3 )
        {
          if ( v123 != 2 )
            goto LABEL_453;
          *v59 = 45;
          v52 = (unsigned __int64)v386;
          v346 = v386;
          if ( v386 >= v57 )
            goto LABEL_1028;
          v62 = (unsigned __int64)(v386 + 1);
          ++v59;
          v123 = 3;
          ++v386;
          v126 = *(unsigned __int8 *)v52;
        }
        else
        {
          v289 = -2145255424;
          if ( v123 == 5 )
            v289 = -2145189888;
          *v59 = v289;
          v52 = (unsigned __int64)v386;
          v62 = (unsigned __int64)(v59 + 1);
          if ( v386 >= v57 )
            goto LABEL_1028;
          ++v59;
          v123 = 1;
          ++v386;
          v126 = *(unsigned __int8 *)v52;
        }
        goto LABEL_423;
      }
      break;
    case '~':
      v288 = v386;
      if ( v386 >= v57 || *v386 != 126 )
        goto LABEL_453;
      break;
    case '\\':
LABEL_1117:
      v359 = v125;
      v389 = v386;
      v355 = v386;
      v287 = sub_839AC0(&v386, v57, &v377, (int *)&v379, v313, v320, HIDWORD(v408), 1, (__int64)&v392);
      v62 = v379;
      v125 = v359;
      v285 = v287;
      if ( !v379 )
        goto LABEL_1097;
      if ( (v320 & 2) == 0 || v359 > 1 )
      {
        v8 = v303;
        v7 = v299;
        v36 = v379;
        v9 = v301;
        i = v386;
        goto LABEL_270;
      }
      v386 = v355;
      if ( v355 < v57 )
      {
        v386 = v355 + 1;
        v377 = *v355;
      }
      else
      {
        v377 = 92;
      }
LABEL_1122:
      v128 = 0;
      v62 = 0;
      goto LABEL_387;
    default:
      v128 = 0;
      goto LABEL_386;
  }
  v52 = (unsigned __int64)(v288 + 1);
  v386 = v288 + 1;
  if ( v288 + 1 >= v57 || v288[1] != v126 )
  {
    if ( v122 != 1 )
    {
      v8 = v303;
      v7 = v299;
      i = v288 + 1;
      v36 = 209;
      v9 = v301;
      goto LABEL_270;
    }
    v62 = (__int16)v127;
    v290 = v417[(__int16)v127];
    if ( v290 && v290 != (_BYTE)v126 )
    {
      v8 = v303;
      v7 = v299;
      i = (unsigned __int8 *)v52;
      v36 = 211;
      v9 = v301;
      goto LABEL_270;
    }
    if ( v124 )
      *v124 |= 1u;
    if ( v123 == 1 )
      *(v59 - 1) = 45;
    if ( v126 == 124 )
    {
      v291 = -2142961664;
    }
    else if ( v126 == 45 )
    {
      v291 = -2142896128;
    }
    else
    {
      v291 = -2142830592;
      if ( v126 == 38 )
        v291 = -2143027200;
    }
    *v59 = v291;
    v52 = (unsigned __int64)v386;
    v417[(__int16)v127] = v126;
    if ( v52 >= (unsigned __int64)v57 )
    {
      v279 = v127;
      v8 = v303;
      i = (unsigned __int8 *)v52;
      v7 = v299;
      v9 = v301;
      v52 = 1;
      goto LABEL_1029;
    }
    ++v59;
    v123 = 0;
    v125 = 1;
    v386 = (unsigned __int8 *)(v52 + 1);
    v124 = nullptr;
    v126 = *(unsigned __int8 *)v52;
    v122 = 2;
    goto LABEL_423;
  }
  v8 = v303;
  v7 = v299;
  v292 = v288 + 1;
  v9 = v301;
  while ( 1 )
  {
    i = v292;
    if ( (unsigned __int64)v292 >= v338 )
    {
      v36 = 208;
      goto LABEL_270;
    }
    v62 = *v292++;
    if ( (_DWORD)v62 != v126 )
      break;
    v386 = i + 1;
  }
  v36 = 208;
LABEL_270:
  v35 = (unsigned __int8 *)(i - (unsigned __int8 *)v398);
  v376 = v36;
  v403 = v35;
  if ( v36 )
    goto LABEL_179;
LABEL_271:
  if ( v343 )
  {
    v92 = HIDWORD(v408);
    LODWORD(v390[0]) = 0;
    if ( HIDWORD(v408) > 0x7F )
    {
      v412 = (_BYTE *)((__int64 (__fastcall *)(__int64, void *(*)(size_t), unsigned __int64, unsigned __int64))*v9)(
                        4LL * (unsigned int)(2 * HIDWORD(v408) + 2),
                        v9[2],
                        v62,
                        v52);
      v93 = v412;
      if ( v412 )
      {
        v92 = HIDWORD(v408);
        goto LABEL_275;
      }
      v376 = 121;
      v36 = 121;
      v35 = nullptr;
      v403 = nullptr;
LABEL_179:
      v24 = 0;
LABEL_81:
      *a5 = v35;
      *v7 = v36;
      sub_839A30(v24);
      v37 = (_QWORD *)v423;
      while ( v37 )
      {
        v38 = v37;
        v37 = (_QWORD *)*v37;
        ((void (__fastcall *)(_QWORD *, void *(*)(size_t)))v392[1])(v38, v392[2]);
      }
LABEL_83:
      v24 = 0;
      goto LABEL_84;
    }
    v93 = v412;
LABEL_275:
    memset(v93, 0, 4LL * (unsigned int)(2 * v92 + 1));
    v36 = sub_834720(v410, nullptr, 0, (__int64)&v392, (int *)v390);
    v376 = v36;
    if ( v36 )
    {
      v35 = v403;
      goto LABEL_179;
    }
  }
  v426[0] = -119;
  v403 = (unsigned __int8 *)v305;
  v390[0] = (unsigned __int8 *)v410;
  v389 = v426;
  sub_834F00(
    v407,
    v312,
    (unsigned __int64 *)&v389,
    v390,
    &v376,
    0,
    &v386,
    &v383,
    (__int64)&v387,
    &v384,
    (const __m128i)-1LL,
    nullptr,
    0);
  v36 = v376;
  if ( v376 )
  {
    v35 = v403;
    v24 = 0;
    goto LABEL_81;
  }
  if ( v385 > 0x10000 )
  {
    v376 = 120;
    v36 = 120;
    v35 = nullptr;
    v24 = 0;
    v403 = nullptr;
    goto LABEL_81;
  }
  v94 = WORD1(v404) * (unsigned __int64)(unsigned __int16)v404 + v385;
  if ( (unsigned __int64)v9[7] < v94 )
  {
    v376 = 201;
    v36 = 201;
    v35 = nullptr;
    v24 = 0;
    v403 = nullptr;
    goto LABEL_81;
  }
  v316 = v94 + 152;
  v95 = (__m128i *)((__int64 (__fastcall *)(unsigned __int64, void *(*)(size_t)))*v9)(v94 + 152, v9[2]);
  v24 = (__int64)v95;
  if ( !v95 )
  {
    v376 = 121;
    v36 = 121;
    v35 = nullptr;
    v403 = nullptr;
    goto LABEL_81;
  }
  v95[9].m128i_i64[0] = 0;
  *v95 = _mm_loadu_si128((const __m128i *)v9);
  v96 = v9[2];
  *(_QWORD *)(v24 + 72) = v316;
  v97 = v316 - v385;
  *(_QWORD *)(v24 + 16) = v96;
  *(_DWORD *)(v24 + 92) = v8;
  v98 = (unsigned __int8 *)(v24 + v97);
  *(_QWORD *)(v24 + 24) = v317;
  *(_QWORD *)(v24 + 32) = 0;
  *(_QWORD *)(v24 + 80) = v97;
  *(_DWORD *)(v24 + 88) = 1346589253;
  *(_OWORD *)(v24 + 40) = 0;
  *(_OWORD *)(v24 + 56) = 0;
  *(_DWORD *)(v24 + 96) = v407;
  *(_DWORD *)(v24 + 100) = v312;
  LODWORD(v96) = v408 | v323;
  *(_QWORD *)(v24 + 120) = 0;
  *(_DWORD *)(v24 + 104) = (unsigned int)v96 | 1;
  *(_DWORD *)(v24 + 108) = v340;
  *(_DWORD *)(v24 + 112) = v341;
  *(_DWORD *)(v24 + 116) = v342;
  *(_WORD *)(v24 + 128) = v339;
  *(_WORD *)(v24 + 130) = v325;
  *(_QWORD *)(v24 + 132) = 0;
  v397.m128i_i64[1] = v24 + v97;
  *(_WORD *)(v24 + 140) = WORD1(v404);
  *(_WORD *)(v24 + 142) = v404;
  *(_DWORD *)(v24 + 144) = v319;
  HIDWORD(v404) = 0;
  v409 = 0;
  v400 = v24 + 152;
  v418 = 0;
  v421 = 0;
  if ( (_WORD)v404 )
  {
    v99 = 0;
    v100 = 0;
    v101 = src;
    do
    {
      if ( v101[6] )
        sub_8410E0(&v392, v101, v99);
      ++v100;
      v101 += 8;
    }
    while ( v100 < (unsigned __int16)v404 );
  }
  v389 = v98;
  v390[0] = (unsigned __int8 *)v410;
  *v98 = -119;
  if ( (unsigned int)sub_834F00(
                       *(_DWORD *)(v24 + 96),
                       *(_DWORD *)(v24 + 100),
                       (unsigned __int64 *)&v389,
                       v390,
                       &v376,
                       0,
                       &v386,
                       &v383,
                       (__int64)&v387,
                       &v384,
                       (const __m128i)0LL,
                       nullptr,
                       0) == -1 )
    *(_DWORD *)(v24 + 104) |= 0x2000u;
  *(_WORD *)(v24 + 136) = WORD2(v408);
  *(_WORD *)(v24 + 138) = v413;
  *(_WORD *)(v24 + 132) = v420;
  if ( (_DWORD)v421 )
  {
    LODWORD(v387) = 0;
    v384 = -2;
    *(_DWORD *)(v24 + 104) |= 0x800000u;
  }
  v102 = v389++;
  *v102 = 0;
  if ( v385 < v389 - v98 )
  {
    v376 = 123;
    v36 = 123;
    v35 = nullptr;
    v403 = nullptr;
    goto LABEL_81;
  }
  v103 = v376;
  *(_QWORD *)(v24 + 72) = v389 - v98 + *(_QWORD *)(v24 + 72) - v385;
  if ( v103 )
  {
    v36 = v103;
    goto LABEL_470;
  }
  if ( !(_DWORD)v422 )
    goto LABEL_295;
  v262 = sub_834E10(v98);
  if ( !v262 )
    goto LABEL_1006;
  v265 = v262;
  v266 = v264;
  v304 = v9;
  v267 = v98;
  v268 = v263;
  while ( 2 )
  {
    LOBYTE(v269) = 0;
    v270 = 0;
    v271 = (unsigned __int16)__ROL2__(*(_WORD *)(v265 + 1), 8);
    if ( !(_WORD)v271 )
    {
LABEL_991:
      v265[1] = v270;
      v265[2] = v269;
      v265 = sub_834E10(v265 + 3);
      if ( !v265 )
      {
        v98 = v267;
        v103 = 0;
        v9 = v304;
        goto LABEL_1006;
      }
      continue;
    }
    break;
  }
  v272 = v267;
  if ( v266 )
  {
    v273 = v268;
    v274 = 0;
    while ( LODWORD(v390[2 * v273 + 2]) != v271 )
    {
      if ( SLODWORD(v390[2 * v273 + 2]) < v271 )
        v272 = v390[2 * v273 + 1];
      ++v274;
      v273 = ((_BYTE)v273 + 1) & 7;
      if ( v274 == v266 )
        goto LABEL_1001;
    }
    v275 = v390[2 * v273 + 1];
    if ( v275 )
    {
      v269 = (_WORD)v275 - (_WORD)v267;
      v270 = HIBYTE(v269);
      goto LABEL_991;
    }
  }
LABEL_1001:
  v306 = (unsigned __int16)v271;
  v276 = (unsigned __int8 *)sub_8432C0(v272, 0);
  if ( v276 )
  {
    if ( --v268 < 0 )
      v268 = 7;
    v277 = 2LL * v268;
    v390[v277 + 1] = v276;
    v269 = (_WORD)v276 - (_WORD)v267;
    LODWORD(v390[v277 + 2]) = v306;
    v266 += v266 < 8;
    v270 = HIBYTE(v269);
    goto LABEL_991;
  }
  v98 = v267;
  v103 = 0;
  v9 = v304;
  v376 = 153;
LABEL_1006:
  v36 = v376;
  if ( v376 )
    goto LABEL_470;
LABEL_295:
  if ( (v319 & 1) != 0 )
  {
    if ( (unsigned int)sub_832420(v98, (__int64)&v392) )
    {
      v376 = 180;
      v403 = nullptr;
      v36 = 180;
      goto LABEL_470;
    }
    v36 = v376;
    if ( v376 )
    {
LABEL_470:
      v35 = v403;
      goto LABEL_81;
    }
  }
  if ( *(int *)(v24 + 96) >= 0 && (unsigned int)sub_8331B0(v98, 0, (__int64)&v392, 0, 0, (v319 >> 1) & 1) )
    *(_DWORD *)(v24 + 96) = v158 | 0x80000000;
  if ( (v319 & 4) != 0 )
  {
    v104 = v383;
    if ( v383 > 0xFFFFFFFD )
    {
      LODWORD(v388) = 0;
      v159 = sub_833600(v98, (int *)&v388, 0);
      v104 = (char)v388;
      if ( (unsigned int)v388 <= 0xFFFFFFFD && v159 != (_DWORD)v387 )
      {
        LODWORD(v386) = v159;
        v383 = (unsigned int)v388;
        goto LABEL_299;
      }
      LOBYTE(v107) = v384;
      if ( *(int *)(v24 + 96) < 0 )
      {
        if ( v384 > 0xFFFFFFFD )
          goto LABEL_313;
        v103 = 1;
        goto LABEL_543;
      }
      if ( (unsigned int)sub_8333C0(v98, 0, (__int64)&v392, 0, 0, (v319 >> 1) & 1) )
        *(_DWORD *)(v24 + 104) |= 0x200u;
      if ( v107 <= 0xFFFFFFFD )
      {
        v103 = 1;
        goto LABEL_309;
      }
    }
    else
    {
LABEL_299:
      v105 = *(_DWORD *)(v24 + 104);
      v106 = (unsigned int)v386;
      *(_DWORD *)(v24 + 120) = (_DWORD)v386;
      *(_DWORD *)(v24 + 104) = v105 | 0x10;
      v107 = v384;
      if ( (v104 & 1) != 0 && v106 <= 0xFE && v106 != (unsigned __int8)v394[v106] )
        *(_DWORD *)(v24 + 104) = v105 | 0x30;
      v103 = 1;
      if ( v107 <= 0xFFFFFFFD )
      {
        v108 = *(_DWORD *)(v24 + 96);
        if ( (v108 & 0x80000) == 0 || (v106 & 0x80) == 0 || (v103 = 1, (char)v387 >= 0) )
          v103 = 2;
        if ( v108 >= 0 )
        {
LABEL_309:
          v109 = *(_DWORD *)(v24 + 104);
          v110 = (unsigned int)v387;
          v111 = v109;
          *(_DWORD *)(v24 + 124) = (_DWORD)v387;
          LOBYTE(v111) = v109 | 0x80;
          *(_DWORD *)(v24 + 104) = v111;
          if ( (v107 & 1) != 0 && v110 <= 0xFE && v110 != (unsigned __int8)v394[v110] )
            *(_DWORD *)(v24 + 104) = v109 | 0x180;
          goto LABEL_313;
        }
LABEL_543:
        if ( (v107 & 2) != 0 )
          goto LABEL_309;
      }
    }
LABEL_313:
    if ( (unsigned int)sub_8787F0(v24) )
    {
      v36 = 131;
      v35 = nullptr;
      v376 = 131;
      v403 = nullptr;
      goto LABEL_81;
    }
    v112 = 1;
    if ( v103 > 0 )
      v112 = v103;
    if ( (*(_BYTE *)(v24 + 104) & 0x40) != 0 )
      v103 = v112;
    if ( *(unsigned __int16 *)(v24 + 134) < v103 )
      *(_WORD *)(v24 + 134) = v103;
  }
LABEL_84:
  if ( v410 != (unsigned int *)v425 )
    ((void (__fastcall *)(unsigned int *, void *(*)(size_t)))v9[1])(v410, v9[2]);
  if ( v406 > 0x14 )
    ((void (__fastcall *)(void *, void *(*)(size_t)))v9[1])(src, v9[2]);
  if ( v412 != v424 )
    ((void (__fastcall *)(_BYTE *, void *(*)(size_t)))v9[1])(v412, v9[2]);
  return v24;
}

