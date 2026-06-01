/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400497E0
// Address: 0x00000001400497E0

//----- (00000001400497E0) ----------------------------------------------------
__int64 *__fastcall sub_1400497E0(__int64 a1, __int64 *a2, unsigned int *a3, double a4)
{
  double v4; // xmm1_8
  double v5; // xmm2_8
  void *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r8
  int v12; // eax
  bool v13; // r14
  _BYTE *v14; // rcx
  const char *v15; // rsi
  __int64 v17; // rdi
  size_t v18; // rax
  _BYTE *v19; // rcx
  const char *v20; // rsi
  __int64 v22; // rdi
  size_t v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // edi
  char *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rdi
  void *v30; // rcx
  unsigned int v31; // ebx
  _BYTE *v32; // rcx
  _BYTE *v33; // rdx
  _BYTE *v35; // rdx
  _BYTE *v38; // rcx
  void *v39; // r14
  char *v41; // rax
  char v42; // cl
  int v43; // esi
  int v44; // edi
  unsigned __int64 v45; // rcx
  char *v46; // rdx
  char *v47; // r9
  _BYTE *v48; // r8
  void *v49; // rdx
  signed int v51; // edi
  const char *v52; // rsi
  const char *v53; // r14
  const char *v54; // rcx
  const char *v55; // rax
  char *v56; // rsi
  __int64 v57; // r14
  __int64 v58; // rdi
  void *v59; // rcx
  __int64 v60; // r8
  struct __crt_locale_pointers *v61; // rax
  char v62; // al
  unsigned int v63; // edi
  unsigned int v64; // esi
  unsigned int v65; // r14d
  signed int v66; // r14d
  signed int v67; // eax
  signed int v68; // edi
  signed int v69; // eax
  signed int v70; // edi
  unsigned int v71; // eax
  unsigned int v72; // ebx
  char *v73; // rax
  char v74; // cl
  char v75; // di
  void **v76; // r9
  __int64 v77; // rax
  unsigned int v78; // r13d
  unsigned int v79; // r14d
  unsigned int i; // edi
  unsigned int *v81; // rsi
  const char *v82; // rdi
  char *v83; // rsi
  __int64 v84; // r14
  __int64 v85; // rdi
  void *v86; // rcx
  __int64 v87; // r14
  __int64 v88; // rsi
  _QWORD *v89; // rdi
  void *v90; // rcx
  void *v91; // rcx
  __int64 v92; // rdi
  unsigned int v93; // eax
  __int64 v94; // rdi
  unsigned int v95; // eax
  unsigned int v96; // edi
  __int64 v97; // rsi
  unsigned int v98; // eax
  unsigned int v99; // r14d
  unsigned int v100; // r13d
  int v101; // esi
  __int64 v102; // rax
  __int64 v103; // rdi
  void *v104; // rdx
  __int64 v105; // rax
  int v106; // edi
  unsigned int v107; // eax
  char *v108; // rsi
  char *v109; // r14
  __int64 v110; // rdi
  void *v111; // rcx
  int v112; // r14d
  unsigned __int64 v113; // rsi
  char *v114; // rdi
  void *v115; // rcx
  int v116; // eax
  int v117; // ecx
  __int64 v118; // rdi
  unsigned __int64 v119; // rsi
  void *v120; // rdx
  int v121; // esi
  signed int v122; // eax
  signed int v123; // edi
  unsigned int v124; // r14d
  __int64 v125; // rsi
  unsigned int v126; // eax
  unsigned int v127; // edi
  unsigned int v128; // esi
  _QWORD *v129; // rdi
  int v130; // eax
  int v131; // edi
  signed int v132; // esi
  signed int j; // edi
  __int64 v134; // r14
  int v135; // eax
  int v136; // edi
  signed int v137; // esi
  signed int m; // edi
  char *v139; // rsi
  __int64 v140; // r14
  __int64 v141; // rdi
  void *v142; // rcx
  __int64 v143; // r13
  unsigned __int8 v144; // al
  unsigned int v145; // esi
  int v146; // r14d
  __int64 v147; // r14
  _BYTE *v148; // rcx
  const char *v149; // rdi
  __int64 v151; // rsi
  __int64 (__fastcall *v152)(__int64, __int64, void **); // r13
  size_t v153; // rax
  __int64 v154; // rsi
  const char *v155; // rdi
  size_t v156; // r13
  unsigned __int8 *v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rdi
  const char *v160; // rsi
  size_t v161; // r13
  unsigned __int8 *v162; // r14
  void *v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rsi
  unsigned int v166; // edi
  __int64 v167; // rsi
  unsigned int v168; // r14d
  unsigned int v169; // eax
  unsigned int v170; // esi
  __int64 v171; // r14
  unsigned int v172; // edi
  _BYTE *v173; // rcx
  __m128i *v174; // rdi
  int v176; // r14d
  const char *v177; // rsi
  int v178; // eax
  __int64 v179; // r13
  __int64 v180; // rcx
  size_t v181; // rax
  size_t v182; // rax
  void *v183; // rsi
  void *v184; // r14
  __int64 v185; // rax
  _QWORD *v186; // rdi
  unsigned __int64 v187; // rdi
  unsigned __int64 v188; // rax
  const char *v189; // rsi
  int *v190; // rax
  unsigned int v191; // eax
  unsigned int v192; // edi
  __int64 v193; // rsi
  FILE *v194; // rcx
  int v195; // eax
  __int64 v196; // r14
  __int64 v197; // r13
  int v198; // eax
  signed __int64 v199; // rsi
  signed int v200; // edi
  int *v201; // rax
  void *v202; // rsi
  __int64 v203; // r13
  unsigned int v204; // eax
  size_t v205; // rdi
  void *v206; // rdx
  __int64 v207; // r14
  int *v208; // rax
  int v209; // eax
  __int64 *v210; // rax
  unsigned int v211; // eax
  unsigned int v212; // edi
  unsigned int v213; // r14d
  int v214; // edi
  void **v215; // r8
  __int64 v216; // r14
  char *v217; // rsi
  __int64 v218; // r14
  __int64 v219; // rdi
  void *v220; // rcx
  char *v221; // rsi
  __int64 v222; // r14
  __int64 v223; // rdi
  void *v224; // rcx
  unsigned int v225; // eax
  unsigned int v226; // eax
  _BYTE *v227; // rcx
  void *v228; // r8
  unsigned int v230; // eax
  int v231; // edi
  int v232; // eax
  char *v233; // r14
  int v234; // eax
  size_t v235; // rdi
  void *v236; // rcx
  void *v237; // rdx
  int v238; // eax
  size_t v239; // rdi
  void *v240; // rcx
  void *v241; // rdx
  unsigned __int64 v242; // r13
  bool v243; // cf
  bool v244; // cc
  char *v245; // rdx
  unsigned __int64 v246; // rcx
  unsigned __int64 v247; // rax
  __int64 v248; // rcx
  unsigned __int64 v249; // rdx
  __int128 v250; // xmm0
  unsigned __int64 v251; // rax
  __int64 v252; // rcx
  unsigned __int64 v253; // rdx
  __int128 v254; // xmm0
  int n; // edi
  int v256; // eax
  unsigned int v257; // edi
  const char *v258; // r14
  size_t v259; // rax
  size_t v260; // rdi
  unsigned __int64 v261; // rsi
  unsigned __int64 v262; // rdx
  void *v263; // rcx
  __int64 v264; // rsi
  __int64 v265; // rdi
  __int64 *v266; // rax
  char v268; // [rsp+50h] [rbp-C18h]
  void *Src; // [rsp+58h] [rbp-C10h] BYREF
  unsigned __int64 v270; // [rsp+60h] [rbp-C08h]
  char v271; // [rsp+68h] [rbp-C00h]
  __int64 v272; // [rsp+70h] [rbp-BF8h] BYREF
  unsigned int v273; // [rsp+78h] [rbp-BF0h]
  __m128i *v274; // [rsp+80h] [rbp-BE8h] BYREF
  __int64 k; // [rsp+88h] [rbp-BE0h]
  void *v276[2]; // [rsp+90h] [rbp-BD8h] BYREF
  __int64 v277; // [rsp+A0h] [rbp-BC8h]
  const char *v278; // [rsp+A8h] [rbp-BC0h] BYREF
  void *v279; // [rsp+B0h] [rbp-BB8h] BYREF
  __int64 v280; // [rsp+B8h] [rbp-BB0h]
  unsigned __int64 v281; // [rsp+C0h] [rbp-BA8h]
  void *v282; // [rsp+C8h] [rbp-BA0h] BYREF
  __int64 v283; // [rsp+D0h] [rbp-B98h]
  unsigned __int64 v284; // [rsp+D8h] [rbp-B90h]
  bool v285; // [rsp+E0h] [rbp-B88h]
  int v286; // [rsp+E8h] [rbp-B80h]
  void *v287; // [rsp+F0h] [rbp-B78h] BYREF
  __int64 v288; // [rsp+F8h] [rbp-B70h]
  __int64 v289; // [rsp+100h] [rbp-B68h]
  void *v290; // [rsp+108h] [rbp-B60h] BYREF
  __int64 v291; // [rsp+110h] [rbp-B58h]
  __int64 v292; // [rsp+118h] [rbp-B50h]
  _DWORD v293[2]; // [rsp+120h] [rbp-B48h] BYREF
  __int128 v294; // [rsp+128h] [rbp-B40h] BYREF
  __int64 v295; // [rsp+138h] [rbp-B30h]
  void *v296; // [rsp+140h] [rbp-B28h] BYREF
  size_t Size; // [rsp+148h] [rbp-B20h]
  __int64 v298; // [rsp+150h] [rbp-B18h]
  void *v299[2]; // [rsp+158h] [rbp-B10h] BYREF
  __int64 v300; // [rsp+168h] [rbp-B00h]
  void *v301; // [rsp+170h] [rbp-AF8h] BYREF
  __int64 v302; // [rsp+178h] [rbp-AF0h]
  __int64 v303; // [rsp+180h] [rbp-AE8h]
  void *v304; // [rsp+188h] [rbp-AE0h] BYREF
  __int64 v305; // [rsp+190h] [rbp-AD8h]
  __int64 v306; // [rsp+198h] [rbp-AD0h]
  void *v307; // [rsp+1A0h] [rbp-AC8h] BYREF
  __int64 v308; // [rsp+1A8h] [rbp-AC0h]
  __int64 v309; // [rsp+1B0h] [rbp-AB8h]
  void *v310; // [rsp+1B8h] [rbp-AB0h] BYREF
  __int64 v311; // [rsp+1C0h] [rbp-AA8h]
  __int64 v312; // [rsp+1C8h] [rbp-AA0h]
  __int64 *v313; // [rsp+1D0h] [rbp-A98h]
  void *v314; // [rsp+1D8h] [rbp-A90h] BYREF
  __int64 v315; // [rsp+1E0h] [rbp-A88h]
  __int64 v316; // [rsp+1E8h] [rbp-A80h]
  void *v317; // [rsp+1F0h] [rbp-A78h] BYREF
  __int64 v318; // [rsp+1F8h] [rbp-A70h]
  __int64 v319; // [rsp+200h] [rbp-A68h]
  void *v320; // [rsp+208h] [rbp-A60h] BYREF
  __int64 v321; // [rsp+210h] [rbp-A58h]
  __int64 v322; // [rsp+218h] [rbp-A50h]
  void *v323[2]; // [rsp+220h] [rbp-A48h] BYREF
  __int64 v324; // [rsp+230h] [rbp-A38h]
  void *v325[2]; // [rsp+238h] [rbp-A30h] BYREF
  __int64 v326; // [rsp+248h] [rbp-A20h]
  void *v327[2]; // [rsp+250h] [rbp-A18h] BYREF
  __int64 v328; // [rsp+260h] [rbp-A08h]
  void *v329; // [rsp+268h] [rbp-A00h] BYREF
  __int64 v330; // [rsp+270h] [rbp-9F8h]
  __int64 v331; // [rsp+278h] [rbp-9F0h]
  void *v332[2]; // [rsp+280h] [rbp-9E8h] BYREF
  __int64 v333; // [rsp+290h] [rbp-9D8h]
  int v334; // [rsp+298h] [rbp-9D0h] BYREF
  __int128 v335; // [rsp+2A0h] [rbp-9C8h] BYREF
  __int64 v336; // [rsp+2B0h] [rbp-9B8h]
  __int128 v337; // [rsp+2B8h] [rbp-9B0h] BYREF
  void *v338[2]; // [rsp+2C8h] [rbp-9A0h] BYREF
  __int64 v339; // [rsp+2D8h] [rbp-990h]
  void *v340; // [rsp+2E0h] [rbp-988h] BYREF
  __int64 v341; // [rsp+2E8h] [rbp-980h]
  __int64 v342; // [rsp+2F0h] [rbp-978h]
  void *v343; // [rsp+2F8h] [rbp-970h] BYREF
  __int64 v344; // [rsp+300h] [rbp-968h]
  __int64 v345; // [rsp+308h] [rbp-960h]
  __int64 v346; // [rsp+310h] [rbp-958h]
  void *v347[2]; // [rsp+318h] [rbp-950h]
  __int64 v348; // [rsp+328h] [rbp-940h]
  void *Block[2]; // [rsp+330h] [rbp-938h] BYREF
  __int64 v350; // [rsp+340h] [rbp-928h]
  void *v351[2]; // [rsp+348h] [rbp-920h] BYREF
  __int64 v352; // [rsp+358h] [rbp-910h]
  void *v353[2]; // [rsp+360h] [rbp-908h] BYREF
  __int64 v354; // [rsp+370h] [rbp-8F8h]
  void *v355[2]; // [rsp+378h] [rbp-8F0h] BYREF
  __int64 v356; // [rsp+388h] [rbp-8E0h]
  void *v357[2]; // [rsp+390h] [rbp-8D8h] BYREF
  __int64 v358; // [rsp+3A0h] [rbp-8C8h]
  void *v359[2]; // [rsp+3A8h] [rbp-8C0h] BYREF
  __int64 v360; // [rsp+3B8h] [rbp-8B0h]
  void *v361[2]; // [rsp+3C0h] [rbp-8A8h] BYREF
  __int64 v362; // [rsp+3D0h] [rbp-898h]
  void *v363[2]; // [rsp+3D8h] [rbp-890h] BYREF
  __int64 v364; // [rsp+3E8h] [rbp-880h]
  void *v365[2]; // [rsp+3F0h] [rbp-878h] BYREF
  __int64 v366; // [rsp+400h] [rbp-868h]
  __int64 v367; // [rsp+408h] [rbp-860h]
  void *v368[2]; // [rsp+410h] [rbp-858h] BYREF
  __int64 v369; // [rsp+420h] [rbp-848h]
  void *v370; // [rsp+428h] [rbp-840h]
  void *v371; // [rsp+430h] [rbp-838h]
  __int64 v372; // [rsp+438h] [rbp-830h]
  void *v373[3]; // [rsp+440h] [rbp-828h] BYREF
  void *v374[6]; // [rsp+458h] [rbp-810h] BYREF
  int v375; // [rsp+488h] [rbp-7E0h] BYREF
  void *v376; // [rsp+490h] [rbp-7D8h] BYREF
  _DWORD v377[2]; // [rsp+4B0h] [rbp-7B8h] BYREF
  __int64 v378; // [rsp+4B8h] [rbp-7B0h]
  char v379; // [rsp+4C0h] [rbp-7A8h]
  int v380; // [rsp+4C4h] [rbp-7A4h]
  __int128 v381; // [rsp+4C8h] [rbp-7A0h]
  __int128 v382; // [rsp+4D8h] [rbp-790h]
  __int128 v383; // [rsp+4E8h] [rbp-780h]
  __m128i String1[17]; // [rsp+500h] [rbp-768h] BYREF
  __m128i v385[17]; // [rsp+610h] [rbp-658h] BYREF
  char Str[272]; // [rsp+720h] [rbp-548h] BYREF
  struct __crt_locale_pointers v387; // [rsp+830h] [rbp-438h] BYREF

  v367 = a1;
  v313 = a2;
  v9 = nullptr;
  v286 = 0;
  v10 = a1 - 192;
  v268 = *(_BYTE *)(a1 - 192 + 289);
  v271 = v268;
  *(_BYTE *)(a1 + 97) = 0;
  Src = (char *)a3 + 5;
  v270 = (unsigned __int64)a3 + *a3 + 5;
  sub_140054B30(a2, 0);
  v286 = 1;
  switch ( *((_BYTE *)a3 + 4) )
  {
    case 5:
      sub_14000E720((__int64)a2);
      goto LABEL_518;
    case 0xA:
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + 632LL) = sub_14005B7B0((unsigned __int64 *)&Src, v270);
      v12 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v13 = v12 != 0;
      if ( v12 )
        *(_BYTE *)(a1 - 8) = 1;
      v14 = Src;
      v15 = (const char *)Src;
      do
      {
        if ( (unsigned __int64)v14 >= v270 )
        {
          v17 = *(_QWORD *)(a1 + 248) + 640LL;
          goto LABEL_11;
        }
      }
      while ( *v14++ );
      Src = v14;
      v17 = *(_QWORD *)(a1 + 248) + 640LL;
      if ( v15 )
      {
        v18 = strlen(v15);
        if ( v18 )
        {
          sub_140001810(v17, v15, v18);
          goto LABEL_12;
        }
      }
LABEL_11:
      *(_QWORD *)(v17 + 8) = 0;
LABEL_12:
      v19 = Src;
      v20 = (const char *)Src;
      do
      {
        if ( (unsigned __int64)v19 >= v270 )
        {
          v22 = *(_QWORD *)(a1 + 248) + 664LL;
          goto LABEL_19;
        }
      }
      while ( *v19++ );
      Src = v19;
      v22 = *(_QWORD *)(a1 + 248) + 664LL;
      if ( v20 )
      {
        v23 = strlen(v20);
        if ( v23 )
        {
          sub_140001810(v22, v20, v23);
          goto LABEL_20;
        }
      }
LABEL_19:
      *(_QWORD *)(v22 + 8) = 0;
LABEL_20:
      *(_DWORD *)(*(_QWORD *)(a1 + 248) + 688LL) = sub_14005B690((unsigned __int64 *)&Src, v270);
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), v13);
      *(_OWORD *)Block = 0;
      v350 = 0;
      v272 = 0;
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, void **))(**(_QWORD **)(a1 + 248) + 96LL))(
              *(_QWORD *)(a1 + 248),
              &v272,
              Block);
      v25 = v24;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0(
          (struct __crt_locale_pointers *)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%I64X)\n",
          v13,
          v24,
          v272);
      sub_140002D20(a2, v25);
      sub_140002DC0(a2, v272);
      if ( v25 == 1 )
      {
        if ( *(_BYTE *)(a1 - 8) )
          sub_140002CE0(
            (struct __crt_locale_pointers *)"init() => idaregs.nregs %zu\n",
            *(_QWORD *)(*(_QWORD *)(a1 + 248) + 512LL));
        sub_140050A70(a2, *(_QWORD *)(a1 + 248) + 504LL);
      }
      else
      {
        sub_1400068C0(a2, (__int64)Block);
      }
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
      goto LABEL_518;
    case 0xB:
      goto LABEL_518;
    case 0xC:
      v314 = nullptr;
      v315 = 0;
      v316 = 0;
      *(_OWORD *)v323 = 0;
      v324 = 0;
      v26 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(a1 + 248) + 64LL))(
              *(_QWORD *)(a1 + 248),
              &v314,
              v323);
      sub_140002D20(a2, v26);
      if ( v26 == 1 )
        sub_140050BD0(a2, (__int64 *)&v314);
      else
        sub_1400068C0(a2, (__int64)v323);
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_processes() => %d\n", v26);
      if ( v323[0] )
      {
        v323[1] = nullptr;
        j_free(v323[0]);
        v323[0] = nullptr;
        v324 = 0;
      }
      v27 = (char *)v314;
      if ( v314 )
      {
        v28 = v315;
        if ( v315 )
        {
          v29 = 0;
          do
          {
            v30 = *(void **)&v27[v29 + 8];
            if ( v30 )
            {
              *(_QWORD *)&v27[v29 + 16] = 0;
              j_free(v30);
              *(_QWORD *)&v27[v29 + 8] = 0;
              *(_QWORD *)&v27[v29 + 24] = 0;
              v27 = (char *)v314;
            }
            v29 += 32;
            --v28;
          }
          while ( v28 );
        }
        v315 = 0;
        j_free(v27);
      }
      goto LABEL_518;
    case 0xD:
      v32 = Src;
      v33 = Src;
      v278 = (const char *)Src;
      while ( (unsigned __int64)v33 < v270 )
      {
        if ( !*v33++ )
        {
          v32 = v33;
          Src = v33;
          goto LABEL_52;
        }
      }
      v278 = nullptr;
LABEL_52:
      v35 = v32;
      v276[0] = v32;
      while ( (unsigned __int64)v35 < v270 )
      {
        if ( !*v35++ )
        {
          v32 = v35;
          Src = v35;
          goto LABEL_57;
        }
      }
      v276[0] = nullptr;
LABEL_57:
      k = (__int64)v32;
      while ( (unsigned __int64)v32 < v270 )
      {
        if ( !*v32++ )
        {
          Src = v32;
          goto LABEL_62;
        }
      }
      k = 0;
LABEL_62:
      v273 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v38 = Src;
      v39 = Src;
      v274 = (__m128i *)Src;
      while ( (unsigned __int64)v38 < v270 )
      {
        if ( !*v38++ )
        {
          Src = v38;
          goto LABEL_67;
        }
      }
      v39 = nullptr;
      v274 = nullptr;
LABEL_67:
      LODWORD(v272) = sub_14005B690((unsigned __int64 *)&Src, v270);
      *(_OWORD *)v351 = 0;
      v352 = 0;
      v282 = nullptr;
      v283 = 0;
      v284 = 0;
      v285 = 1;
      v41 = (char *)Src;
      v42 = 0;
      if ( (unsigned __int64)Src < v270 )
      {
        v42 = *(_BYTE *)Src;
        v41 = (char *)Src + 1;
      }
      Src = v41;
      v285 = v42 != 0;
      v43 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v44 = 0;
      v45 = v270;
      while ( v44 < v43 && (unsigned __int64)Src < v45 )
      {
        v46 = (char *)v282;
        if ( v283 + 1 > v284 )
        {
          v46 = (char *)sub_14005ABE0((__int64)&v282, v282, v283 + 1, 0x18u);
          v282 = v46;
        }
        v47 = &v46[24 * v283];
        *(_QWORD *)v47 = 0;
        *((_QWORD *)v47 + 1) = 0;
        *((_QWORD *)v47 + 2) = 0;
        ++v283;
        v48 = Src;
        v49 = Src;
        v45 = v270;
        while ( (unsigned __int64)v48 < v270 )
        {
          if ( !*v48++ )
          {
            Src = v48;
            if ( v49 )
            {
              sub_1400048F0((__int64)v47, v49, v48 - (_BYTE *)v49 - 1);
              v45 = v270;
            }
            break;
          }
        }
        ++v44;
      }
      v51 = -3;
      if ( v278 )
      {
        v52 = (const char *)k;
        if ( k )
        {
          if ( v39 )
          {
            v51 = (*(__int64 (__fastcall **)(_QWORD, const char *, void *, void **, __int64, unsigned int, void *, _DWORD, void **))(**(_QWORD **)(a1 + 248) + 120LL))(
                    *(_QWORD *)(a1 + 248),
                    v278,
                    v276[0],
                    &v282,
                    k,
                    v273,
                    v39,
                    v272,
                    v351);
            if ( *(_BYTE *)(a1 - 8) )
            {
              v53 = pNodeName;
              v54 = pNodeName;
              if ( (v273 & 0x20) != 0 )
                v54 = " hide_window";
              v55 = pNodeName;
              if ( (v273 & 2) != 0 )
                v55 = " under_gui";
              if ( (v273 & 1) != 0 )
                v53 = " is_dll";
              sub_140002CE0(
                (struct __crt_locale_pointers *)"start_process(path=%s args=%s flags=%s%s%s\n"
                                                "              sdir=%s\n"
                                                "              input=%s crc32=%x) => %d\n",
                v278,
                (const char *)v276[0],
                v53,
                v55,
                v54,
                v52,
                v274->m128i_i8,
                v272,
                v51);
            }
          }
        }
      }
      sub_1400482B0(v10, a2, v51, (__int64)v351);
      v56 = (char *)v282;
      if ( v282 )
      {
        v57 = v283;
        if ( v283 )
        {
          v58 = 0;
          do
          {
            v59 = *(void **)&v56[v58];
            if ( v59 )
            {
              *(_QWORD *)&v56[v58 + 8] = 0;
              j_free(v59);
              *(_QWORD *)&v56[v58] = 0;
              *(_QWORD *)&v56[v58 + 16] = 0;
              v56 = (char *)v282;
            }
            v58 += 24;
            --v57;
          }
          while ( v57 );
        }
        v283 = 0;
        j_free(v56);
        v282 = nullptr;
        v284 = 0;
      }
      if ( v351[0] )
      {
        v351[1] = nullptr;
        j_free(v351[0]);
      }
      goto LABEL_518;
    case 0xE:
      *(_OWORD *)v357 = 0;
      v358 = 0;
      v69 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 248) + 152LL))(*(_QWORD *)(a1 + 248), v357);
      v70 = v69;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"exit_process() => %d\n", v69);
      sub_140002D20(a2, v70);
      if ( v70 < 0 )
        sub_1400068C0(a2, (__int64)v357);
      if ( v357[0] )
      {
        v357[1] = nullptr;
        j_free(v357[0]);
      }
      goto LABEL_518;
    case 0xF:
      *(_OWORD *)v353 = 0;
      v354 = 0;
      v63 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v64 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v65 = sub_14005B690((unsigned __int64 *)&Src, v270);
      if ( (unsigned __int8)sub_140048430(v10, v63) )
        v66 = 1;
      else
        v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, void **))(**(_QWORD **)(v10 + 440) + 136LL))(
                *(_QWORD *)(v10 + 440),
                v63,
                v64,
                v65,
                v353);
      if ( *(_BYTE *)(v10 + 184) )
        sub_140002CE0((struct __crt_locale_pointers *)"attach_process(pid=%d, evid=%d) => %d\n", v63, v64, v66);
      sub_1400482B0(v10, a2, v66, (__int64)v353);
      if ( v353[0] )
      {
        v353[1] = nullptr;
        j_free(v353[0]);
      }
      goto LABEL_518;
    case 0x10:
      v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 112LL))(*(_QWORD *)(a1 + 248));
      sub_140002D20(a2, v31);
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"detach_process() => %d\n", v31);
      goto LABEL_518;
    case 0x11:
      v60 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      if ( !*(_BYTE *)(a1 + 96) )
        LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 248) + 128LL))(
                        *(_QWORD *)(a1 + 248),
                        a1 + 104,
                        v60);
      sub_140002D20(a2, (unsigned int)v9);
      if ( (int)v9 >= 1 )
      {
        sub_140050870(a2, a1 + 104);
        if ( *(_BYTE *)(a1 - 8) )
        {
          v61 = sub_140043220(a1 + 104, &v387, 1024, a4);
          sub_140002CE0((struct __crt_locale_pointers *)"got event: %s\n", (const char *)v61);
        }
        goto LABEL_518;
      }
      if ( *(_BYTE *)(a1 + 96) )
        goto LABEL_518;
      v62 = 1;
      v271 = 1;
      goto LABEL_519;
    case 0x12:
      *(_OWORD *)v355 = 0;
      v356 = 0;
      v67 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 248) + 144LL))(*(_QWORD *)(a1 + 248), v355);
      v68 = v67;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"prepare_to_pause_process() => %d\n", v67);
      sub_140002D20(a2, v68);
      if ( v68 < 0 )
        sub_1400068C0(a2, (__int64)v355);
      if ( v355[0] )
      {
        v355[1] = nullptr;
        j_free(v355[0]);
      }
      goto LABEL_518;
    case 0x13:
      v73 = (char *)Src;
      v74 = 0;
      if ( (unsigned __int64)Src < v270 )
      {
        v74 = *(_BYTE *)Src;
        v73 = (char *)Src + 1;
      }
      v75 = 0;
      if ( (unsigned __int64)v73 < v270 )
        v75 = *v73++;
      Src = v73;
      v304 = nullptr;
      v305 = 0;
      v306 = 0;
      v287 = nullptr;
      v288 = 0;
      v289 = 0;
      v76 = &v287;
      if ( !v75 )
        v76 = nullptr;
      LOBYTE(v11) = v74 != 0;
      (*(void (__fastcall **)(_QWORD, void **, __int64, void **))(**(_QWORD **)(a1 + 248) + 184LL))(
        *(_QWORD *)(a1 + 248),
        &v304,
        v11,
        v76);
      sub_14004CFC0(a1 - 192, (__int64)&v304);
      v77 = sub_140043A50(*(_QWORD *)(a1 + 248));
      v78 = 0;
      if ( v77 )
      {
        v78 = sub_14004EFB0(a1 - 192, *(_QWORD **)v77, *(const char ***)(v77 + 24), *(_DWORD *)(v77 + 8));
        sub_140041090(*(_QWORD **)(a1 + 248));
      }
      if ( v75 )
      {
        v79 = v288;
        sub_140002D20(a2, v288);
        for ( i = 0; i < v79; ++i )
        {
          v81 = (unsigned int *)((char *)v287 + 32 * (int)i);
          sub_140002D20(a2, *v81);
          sub_1400068C0(a2, (__int64)(v81 + 2));
        }
      }
      if ( *(_BYTE *)(a1 - 8) )
      {
        if ( v78 >= 0x39 || (v82 = off_1400975F0[v78]) == nullptr )
        {
          v82 = (const char *)qword_1400CB138;
          sub_14005B0A0((struct __crt_locale_pointers *)qword_1400CB138, 16, "RPC_%d", v78);
        }
        sub_140002CE0((struct __crt_locale_pointers *)"stopped_at_debug_event => %s\n", v82);
      }
      v83 = (char *)v287;
      if ( v287 )
      {
        v84 = v288;
        if ( v288 )
        {
          v85 = 0;
          do
          {
            v86 = *(void **)&v83[v85 + 8];
            if ( v86 )
            {
              *(_QWORD *)&v83[v85 + 16] = 0;
              j_free(v86);
              *(_QWORD *)&v83[v85 + 8] = 0;
              *(_QWORD *)&v83[v85 + 24] = 0;
              v83 = (char *)v287;
            }
            v85 += 32;
            --v84;
          }
          while ( v84 );
        }
        v288 = 0;
        j_free(v83);
        v287 = nullptr;
        v289 = 0;
      }
      if ( v304 )
      {
        v87 = v305;
        if ( v305 )
        {
          v88 = 0;
          do
          {
            v89 = (char *)v304 + v88;
            v90 = *(void **)((char *)v304 + v88 + 32);
            if ( v90 )
            {
              v89[5] = 0;
              j_free(v90);
              v89[4] = 0;
              v89[6] = 0;
            }
            v91 = (void *)v89[1];
            if ( v91 )
            {
              v89[2] = 0;
              j_free(v91);
              v89[1] = 0;
              v89[3] = 0;
            }
            v88 += 56;
            --v87;
          }
          while ( v87 );
        }
        v305 = 0;
        j_free(v304);
      }
      goto LABEL_518;
    case 0x14:
      sub_140051120(a1 + 104, (unsigned __int64 *)&Src);
      v71 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 160LL))(
              *(_QWORD *)(a1 + 248),
              a1 + 104);
      v72 = v71;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"continue_after_event(...) => %d\n", v71);
      goto LABEL_330;
    case 0x15:
      v92 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      v93 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 192LL))(*(_QWORD *)(a1 + 248), v92);
      v72 = v93;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"thread_suspend(tid=%d) => %d\n", v92, v93);
      goto LABEL_330;
    case 0x16:
      v94 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      v95 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 200LL))(*(_QWORD *)(a1 + 248), v94);
      v72 = v95;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"thread_continue(tid=%d) => %d\n", v94, v95);
      goto LABEL_330;
    case 0x17:
      v96 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v97 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      v98 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 248) + 208LL))(
              *(_QWORD *)(a1 + 248),
              v96,
              v97);
      v72 = v98;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v96, v97, v98);
      goto LABEL_330;
    case 0x18:
      v317 = nullptr;
      v318 = 0;
      v319 = 0;
      *(_OWORD *)v327 = 0;
      v328 = 0;
      v130 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(a1 + 248) + 248LL))(
               *(_QWORD *)(a1 + 248),
               &v317,
               v327);
      v131 = v130;
      v132 = v318;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_memory_info() => %d (qty=%d)\n", v130, v318);
      sub_140002D20(a2, v131 + 4);
      if ( v131 == 1 )
      {
        sub_140002D20(a2, v132);
        for ( j = 0; j < v132; ++j )
          sub_140050A80(a2, (__int64)v317 + 80 * j);
      }
      else
      {
        sub_1400068C0(a2, (__int64)v327);
      }
      if ( v327[0] )
      {
        v327[1] = nullptr;
        j_free(v327[0]);
        v327[0] = nullptr;
        v328 = 0;
      }
      if ( v317 )
      {
        sub_14001A500((__int64 *)&v317, 0);
        j_free(v317);
      }
      goto LABEL_518;
    case 0x19:
      v274 = (__m128i *)sub_14005B7B0((unsigned __int64 *)&Src, v270);
      v155 = &v274[-1].m128i_i8[15];
      v156 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      v157 = (unsigned __int8 *)operator new(v156);
      *(_OWORD *)v363 = 0;
      v364 = 0;
      v158 = (*(__int64 (__fastcall **)(_QWORD, const char *, unsigned __int8 *, _QWORD, void **))(**(_QWORD **)(a1 + 248)
                                                                                                 + 280LL))(
               *(_QWORD *)(a1 + 248),
               v155,
               v157,
               (unsigned int)v156,
               v363);
      v159 = v158;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0(
          (struct __crt_locale_pointers *)"read_memory(ea=%a size=%zu) => %td",
          v4,
          (unsigned int)v156,
          v158);
      if ( v159 > 0 && (_DWORD)v156 == 1 )
      {
        if ( *(_BYTE *)(a1 - 8) )
          sub_140002CE0((struct __crt_locale_pointers *)" (0x%02X)\n", *v157);
      }
      else if ( *(_BYTE *)(a1 - 8) )
      {
        sub_140002CE0((struct __crt_locale_pointers *)"\n");
      }
      sub_140002D20(a2, v159);
      if ( v159 <= 0 )
        sub_1400068C0(a2, (__int64)v363);
      else
        sub_1400017A0(a2, v157, v159);
      j_j_free(v157);
      if ( v363[0] )
      {
        v363[1] = nullptr;
        j_free(v363[0]);
      }
      goto LABEL_518;
    case 0x1A:
      v274 = (__m128i *)sub_14005B7B0((unsigned __int64 *)&Src, v270);
      v160 = &v274[-1].m128i_i8[15];
      v161 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      v162 = (unsigned __int8 *)operator new(v161);
      v163 = Src;
      if ( (char *)Src + v161 >= Src && (unsigned __int64)Src + v161 <= v270 )
      {
        Src = (char *)Src + v161;
        memcpy(v162, v163, (unsigned int)v161);
      }
      *(_OWORD *)v365 = 0;
      v366 = 0;
      v164 = (*(__int64 (__fastcall **)(_QWORD, const char *, unsigned __int8 *, size_t, void **))(**(_QWORD **)(a1 + 248)
                                                                                                 + 288LL))(
               *(_QWORD *)(a1 + 248),
               v160,
               v162,
               v161,
               v365);
      v165 = v164;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"write_memory(ea=%a size=%zu) => %td", v4, v161, v164);
      if ( v165 && (_DWORD)v161 == 1 )
      {
        if ( *(_BYTE *)(a1 - 8) )
          sub_140002CE0((struct __crt_locale_pointers *)" (0x%02X)\n", *v162);
      }
      else if ( *(_BYTE *)(a1 - 8) )
      {
        sub_140002CE0((struct __crt_locale_pointers *)"\n");
      }
      sub_140002D20(a2, v165);
      if ( v165 <= 0 )
        sub_1400068C0(a2, (__int64)v365);
      j_j_free(v162);
      if ( v365[0] )
      {
        v365[1] = nullptr;
        j_free(v365[0]);
      }
      goto LABEL_518;
    case 0x1B:
      if ( !(unsigned int)sub_14004E450(v10, (void **)a2, (unsigned __int64 *)&Src) && *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"rpc_update_bpts failed!\n");
      goto LABEL_518;
    case 0x1C:
      sub_14004EB10(v10, a2, (unsigned __int64 *)&Src);
      goto LABEL_518;
    case 0x1D:
      v170 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v171 = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      *(_OWORD *)v368 = 0;
      v369 = 0;
      v172 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void **))(**(_QWORD **)(a1 + 248) + 352LL))(
               *(_QWORD *)(a1 + 248),
               v170,
               v171,
               v368);
      sub_140002D20(a2, v172);
      if ( v172 != 1 )
        sub_1400068C0(a2, (__int64)v368);
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v170, v5, v172);
      if ( v368[0] )
      {
        v368[1] = nullptr;
        j_free(v368[0]);
      }
      goto LABEL_518;
    case 0x1E:
      v166 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v167 = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      v168 = sub_14005B690((unsigned __int64 *)&Src, v270) - 1;
      v169 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 248) + 296LL))(
               *(_QWORD *)(a1 + 248),
               v166,
               v167,
               v168);
      v72 = v169;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"isok_bpt(type=%d ea=%a len=%d) => %d\n", v166, v5, v168, v169);
LABEL_330:
      sub_140002D20(a2, v72);
      goto LABEL_518;
    case 0x1F:
      v99 = 0;
      *(_OWORD *)v338 = 0;
      v339 = 0;
      v296 = nullptr;
      Size = 0;
      v298 = 0;
      v276[0] = nullptr;
      v276[1] = nullptr;
      v277 = 0;
      v273 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v100 = sub_14005B690((unsigned __int64 *)&Src, v270);
      LODWORD(v272) = v100;
      v101 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v102 = *(_QWORD *)(a1 + 248);
      v103 = *(_QWORD *)(v102 + 512);
      if ( !v103 )
        LODWORD(v103) = *(_DWORD *)(v102 + 608);
      if ( v101 <= 0 || v101 > (int)v103 )
      {
        sub_140002FB0(
          (__int64)v338,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v273,
          v100,
          v101,
          v103);
      }
      else
      {
        sub_140002EF0((__int64)&v296, (v101 + 7) / 8);
        v104 = Src;
        if ( (char *)Src + Size >= Src && (unsigned __int64)Src + Size <= v270 )
        {
          Src = (char *)Src + Size;
          memcpy(v296, v104, Size);
        }
        if ( (void *)(int)v103 != v276[1] )
        {
          v334 = -2;
          v336 = 0;
          v335 = 0xFFFFFFFFFFFFFFFFuLL;
          if ( (void *)(int)v103 >= v276[1] )
          {
            if ( (void *)(int)v103 > v276[1] )
            {
              if ( &v334 < v276[0] || &v334 >= (int *)((char *)v276[0] + 32 * v277) )
              {
                sub_140044480((__int64)v276, (int)v103, (__int64)&v334);
              }
              else
              {
                v105 = sub_140040920((__int64)&v375, (__int64)&v334);
                sub_140044480((__int64)v276, (int)v103, v105);
                if ( v375 >= -1 )
                  sub_14000BC80(&v376, 0);
              }
            }
          }
          else
          {
            sub_14001A5B0((__int64 *)v276, (int)v103);
          }
          if ( v334 >= -1 )
            sub_14000BC80((void **)&v335, 0);
          v100 = v272;
        }
        v106 = v273;
        v107 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, void **))(**(_QWORD **)(a1 + 248) + 216LL))(
                 *(_QWORD *)(a1 + 248),
                 v273,
                 v100,
                 v276[0],
                 v338);
        v99 = v107;
        if ( *(_BYTE *)(a1 - 8) )
          sub_140002CE0((struct __crt_locale_pointers *)"read_regs(tid=%d, mask=%x) => %d\n", v106, v100, v107);
      }
      sub_140002D20(a2, v99);
      if ( v99 == 1 )
        sub_140050F10(a2, (__int64)v276[0], v101, (__int64)v296);
      else
        sub_1400068C0(a2, (__int64)v338);
      v108 = (char *)v276[0];
      if ( v276[0] )
      {
        v109 = (char *)v276[1];
        if ( v276[1] )
        {
          v110 = 0;
          do
          {
            if ( *(int *)&v108[v110] >= -1 )
            {
              v111 = *(void **)&v108[v110 + 8];
              if ( v111 )
              {
                *(_QWORD *)&v108[v110 + 16] = 0;
                j_free(v111);
                *(_QWORD *)&v108[v110 + 8] = 0;
                *(_QWORD *)&v108[v110 + 24] = 0;
              }
              *(_DWORD *)&v108[v110] = -2;
              v108 = (char *)v276[0];
            }
            v110 += 32;
            --v109;
          }
          while ( v109 );
        }
        v276[1] = nullptr;
        j_free(v108);
        v276[0] = nullptr;
        v277 = 0;
      }
      if ( v296 )
      {
        Size = 0;
        j_free(v296);
        v296 = nullptr;
        v298 = 0;
      }
      if ( v338[0] )
      {
        v338[1] = nullptr;
        j_free(v338[0]);
      }
      goto LABEL_518;
    case 0x20:
      v273 = sub_14005B690((unsigned __int64 *)&Src, v270);
      LODWORD(v272) = sub_14005B690((unsigned __int64 *)&Src, v270);
      v293[0] = -2;
      v295 = 0;
      v294 = 0xFFFFFFFFFFFFFFFFuLL;
      v112 = 0;
      while ( v112 < 1 && (unsigned __int64)Src < v270 )
      {
        v113 = 32LL * v112;
        v114 = (char *)&v294 + v113;
        if ( (int)v293[v113 / 4] >= -1 )
        {
          v115 = *(void **)v114;
          if ( *(_QWORD *)v114 )
          {
            *((_QWORD *)&v294 + 4 * v112 + 1) = 0;
            j_free(v115);
            *(_QWORD *)v114 = 0;
            *(&v295 + 4 * v112) = 0;
          }
          v293[8 * v112] = -2;
        }
        v116 = sub_140046A50((unsigned __int64 *)&Src);
        v117 = v116 - 3;
        v293[8 * v112] = v116 - 3;
        if ( v116 == 1 )
        {
          v118 = (unsigned int)sub_140046A50((unsigned __int64 *)&Src);
          *((_QWORD *)&v294 + 4 * v112++) = (v118 | ((__int64)(int)sub_140046A50((unsigned __int64 *)&Src) << 32)) - 1;
        }
        else
        {
          if ( v116 )
          {
            v274 = (__m128i *)((char *)&v294 + v113);
            if ( v114 )
            {
              *(_QWORD *)v114 = 0;
              *((_QWORD *)v114 + 1) = 0;
              *((_QWORD *)v114 + 2) = 0;
            }
            v293[8 * v112] = v117;
            if ( v117 < -1 )
            {
              if ( byte_1400CB61C )
                __debugbreak();
              sub_14005A480(3216);
            }
            v119 = (int)sub_140046A50((unsigned __int64 *)&Src);
            sub_140002EF0((__int64)v114, v119);
            if ( v119 )
            {
              v120 = Src;
              if ( (char *)Src + v119 >= Src && (unsigned __int64)Src + v119 <= v270 )
              {
                Src = (char *)Src + v119;
                memcpy(*(void **)v114, v120, v119);
              }
            }
          }
          ++v112;
        }
      }
      *(_OWORD *)v325 = 0;
      v326 = 0;
      v121 = v273;
      v122 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _DWORD *, void **))(**(_QWORD **)(a1 + 248) + 224LL))(
               *(_QWORD *)(a1 + 248),
               v273,
               (unsigned int)v272,
               v293,
               v325);
      v123 = v122;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"write_reg(tid=%d) => %d\n", v121, v122);
      sub_140002D20(a2, v123);
      if ( v123 < 0 )
        sub_1400068C0(a2, (__int64)v325);
      if ( v325[0] )
      {
        v325[1] = nullptr;
        j_free(v325[0]);
        v325[0] = nullptr;
        v326 = 0;
      }
      if ( v293[0] >= -1 )
        sub_14000BC80((void **)&v294, 0);
      goto LABEL_518;
    case 0x21:
      v124 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v125 = (unsigned int)sub_14005B690((unsigned __int64 *)&Src, v270);
      *(_OWORD *)v359 = 0;
      v360 = 0;
      v126 = (*(__int64 (__fastcall **)(_QWORD, __m128i **, _QWORD, __int64, void **))(**(_QWORD **)(a1 + 248) + 232LL))(
               *(_QWORD *)(a1 + 248),
               &v274,
               v124,
               v125,
               v359);
      v127 = v126;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_thread_sreg_base(tid=%d, %d) => %a\n", v124, v125, a4);
      sub_140002D20(a2, v127);
      if ( v127 == 1 )
        sub_140002DC0(a2, (__int64)v274->m128i_i64 + 1);
      else
        sub_1400068C0(a2, (__int64)v359);
      if ( v359[0] )
      {
        v359[1] = nullptr;
        j_free(v359[0]);
      }
      goto LABEL_518;
    case 0x22:
      v128 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v129 = sub_140051460(v128, (unsigned __int64 *)&Src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 248) + 176LL))(
        *(_QWORD *)(a1 + 248),
        v129,
        v128);
      if ( v129 )
      {
        `eh vector destructor iterator'(v129, 0x38u, *(v129 - 1), (void (*)(void *))sub_14000B6D0);
        j_j_j_free(v129 - 1);
      }
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"set_exception_info(qty=%d)\n", v128);
      goto LABEL_518;
    case 0x23:
      v173 = Src;
      v174 = (__m128i *)Src;
      v274 = (__m128i *)Src;
      while ( (unsigned __int64)v173 < v270 )
      {
        if ( !*v173++ )
        {
          Src = v173;
          goto LABEL_347;
        }
      }
      v174 = nullptr;
      v274 = nullptr;
LABEL_347:
      v176 = sub_14005B690((unsigned __int64 *)&Src, v270);
      LODWORD(v272) = v176;
      v177 = nullptr;
      v278 = nullptr;
      v178 = sub_1400549B0(a1 - 192);
      v179 = v178;
      if ( v178 != -1 )
      {
        if ( v176 )
        {
          v180 = sub_1400642B0(v174->m128i_i8);
        }
        else
        {
          if ( sub_14005DA20(v385, 0x104u, v174) )
          {
            if ( !sub_14005EF90(v385[0].m128i_i8) )
            {
              sub_14005DC80(String1, 260, v385[0].m128i_i8);
              sub_14005DB20(Str, 260);
              v181 = strlen(Str);
              if ( !strnicmp(String1[0].m128i_i8, Str, v181) )
              {
                v279 = nullptr;
                v280 = 0;
                v281 = 0;
                do
                {
                  if ( sub_14005EF90(String1[0].m128i_i8) )
                    break;
                  *(_OWORD *)v299 = 0;
                  v300 = 0;
                  v182 = strlen(String1[0].m128i_i8);
                  sub_140001810((__int64)v299, String1, v182);
                  v183 = v299[0];
                  v370 = v299[0];
                  v299[0] = nullptr;
                  v184 = v299[1];
                  v371 = v299[1];
                  v299[1] = nullptr;
                  k = v300;
                  v372 = v300;
                  v300 = 0;
                  v185 = v280;
                  v186 = v279;
                  if ( v280 + 1 > v281 )
                  {
                    v186 = sub_14005ABE0((__int64)&v279, v279, v280 + 1, 0x18u);
                    v279 = v186;
                    v185 = v280;
                  }
                  memcpy(v186 + 3, v186, 24 * (24 * v185 / 24));
                  *v186 = v183;
                  v186[1] = v184;
                  v186[2] = k;
                  ++v280;
                  if ( v299[0] )
                  {
                    v299[1] = nullptr;
                    j_free(v299[0]);
                  }
                }
                while ( sub_14005DA20(String1, 0x104u, String1) );
                v187 = 0;
                v188 = v280;
                for ( k = v280; v187 < v188; v188 = k )
                {
                  v189 = Str1;
                  if ( *((_QWORD *)v279 + 3 * v187 + 1) )
                    v189 = *((const char **)v279 + 3 * v187);
                  if ( *(_BYTE *)(a1 - 8) )
                    sub_140002CE0((struct __crt_locale_pointers *)"open_file() creating directory %s\n", v189);
                  if ( (unsigned int)sub_14005EFF0(v189) )
                    break;
                  ++v187;
                }
                if ( v279 )
                {
                  sub_14001A6C0(&v279, 0);
                  j_free(v279);
                }
                v174 = v274;
                v177 = v278;
                v176 = v272;
              }
            }
          }
          v180 = sub_140064330(v174->m128i_i8);
        }
        *(_QWORD *)(a1 + 8 * v179 - 184) = v180;
        if ( v180 )
        {
          if ( v176 )
            v177 = (const char *)sub_140064BE0(v180);
        }
        else
        {
          LODWORD(v179) = -1;
        }
      }
      if ( *(_BYTE *)(a1 - 8) )
      {
        LOBYTE(v9) = v176 != 0;
        sub_140002CE0(
          (struct __crt_locale_pointers *)"open_file('%s', %d) => %d %I64d\n",
          v174->m128i_i8,
          (_DWORD)v9,
          v179,
          v177);
      }
      sub_140002D20(a2, v179);
      if ( (_DWORD)v179 == -1 )
      {
        v190 = errno();
        sub_140002D20(a2, *v190);
      }
      else
      {
        sub_140002DC0(a2, (__int64)v177);
      }
      goto LABEL_518;
    case 0x24:
      v191 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v192 = v191;
      if ( v191 < 0x10 )
      {
        v193 = a1 + 8LL * (int)v191;
        v194 = *(FILE **)(v193 - 184);
        if ( v194 )
        {
          sub_1400643F0(v194);
          *(_QWORD *)(v193 - 184) = 0;
        }
      }
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"close_file(%d)\n", v192);
      goto LABEL_518;
    case 0x25:
      v195 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v196 = v195;
      LODWORD(v272) = v195;
      v197 = sub_14005B7B0((unsigned __int64 *)&Src, v270);
      v198 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v199 = v198;
      v200 = 0;
      if ( v198 > 0 )
      {
        v9 = operator new(v198);
        v196 = a1 + 8 * v196;
        sub_140064520(*(_QWORD *)(v196 - 184));
        v200 = sub_140064450(*(FILE **)(v196 - 184), v9, v199);
        LODWORD(v196) = v272;
      }
      sub_140002D20(a2, v200);
      if ( (_DWORD)v199 == v200 )
      {
        sub_1400017A0(a2, v9, v200);
      }
      else
      {
        v201 = errno();
        sub_140002D20(a2, *v201);
      }
      j_j_free(v9);
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"read_file(%d, 0x%I64X, %d) => %d\n", v196, v197, v199, v200);
      goto LABEL_518;
    case 0x26:
      v202 = nullptr;
      LODWORD(v272) = sub_14005B690((unsigned __int64 *)&Src, v270);
      v203 = sub_14005B7B0((unsigned __int64 *)&Src, v270);
      v204 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v205 = v204;
      if ( v204 )
      {
        v202 = operator new(v204);
        v206 = Src;
        if ( (char *)Src + v205 >= Src && (unsigned __int64)Src + v205 <= v270 )
        {
          Src = (char *)Src + v205;
          memcpy(v202, v206, (unsigned int)v205);
        }
      }
      v207 = a1 + 8LL * (int)v272;
      sub_140064520(*(_QWORD *)(v207 - 184));
      if ( v202 )
        LODWORD(v9) = sub_1400645E0(*(FILE **)(v207 - 184), v202, v205);
      sub_140002D20(a2, v205);
      if ( (_DWORD)v205 != (_DWORD)v9 )
      {
        v208 = errno();
        sub_140002D20(a2, *v208);
      }
      j_j_free(v202);
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0(
          (struct __crt_locale_pointers *)"write_file(%d, 0x%I64X, %u) => %u\n",
          v272,
          v203,
          v205,
          (_DWORD)v9);
      goto LABEL_518;
    case 0x27:
      v209 = sub_1400526A0(a1, a2, Src, v270);
      if ( v209 )
      {
        v210 = sub_140054B30((__int64 *)v373, v209);
        sub_140040A30((__int64)a2, v210);
        if ( v373[0] )
        {
          v373[1] = nullptr;
          j_free(v373[0]);
        }
      }
      goto LABEL_518;
    case 0x28:
      v340 = nullptr;
      v341 = 0;
      v342 = 0;
      v211 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v212 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(a1 + 248) + 408LL))(
               *(_QWORD *)(a1 + 248),
               v211,
               &v340);
      sub_140002D20(a2, v212);
      if ( v212 == 1 )
        sub_1400506C0(a2, (__int64)&v340);
      if ( v340 )
      {
        v341 = 0;
        j_free(v340);
      }
      goto LABEL_518;
    case 0x29:
      v274 = (__m128i *)sub_14005B7B0((unsigned __int64 *)&Src, v270);
      LODWORD(v272) = sub_14005B690((unsigned __int64 *)&Src, v270);
      v213 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v214 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v320 = nullptr;
      v321 = 0;
      v322 = 0;
      v290 = nullptr;
      v291 = 0;
      v292 = 0;
      v343 = nullptr;
      v344 = 0;
      v345 = 0;
      v346 = 0;
      *(_OWORD *)v347 = 0;
      v348 = 0;
      v215 = &v290;
      if ( (v214 & 1) != 0 )
        v215 = nullptr;
      sub_1400510D0(&v320, (__int64)&v343, v215, (unsigned __int64 *)&Src);
      *(_OWORD *)v332 = 0;
      v333 = 0;
      v377[0] = -1;
      v377[1] = 0;
      v378 = -1;
      v379 = 0;
      v380 = 0;
      v381 = 0;
      v382 = 0;
      v383 = 0;
      v216 = (*(__int64 (__fastcall **)(_QWORD, __int8 *, _QWORD, _QWORD, void **, void **, void **, void **, _DWORD *, int))(**(_QWORD **)(a1 + 248) + 416LL))(
               *(_QWORD *)(a1 + 248),
               &v274[-1].m128i_i8[15],
               (unsigned int)v272,
               v213,
               &v320,
               &v343,
               &v290,
               v332,
               v377,
               v214);
      sub_140002DC0(a2, v216 + 1);
      if ( v216 == -1 )
      {
        if ( (v214 & 2) != 0 )
          sub_140050870(a2, (__int64)v377);
        sub_1400068C0(a2, (__int64)v332);
      }
      else if ( (v214 & 1) == 0 )
      {
        sub_140050D30(a2, (__int64)&v290, 1);
      }
      sub_140062880((__int64)v377);
      if ( v332[0] )
      {
        v332[1] = nullptr;
        j_free(v332[0]);
        v332[0] = nullptr;
        v333 = 0;
      }
      if ( v347[0] )
      {
        v347[1] = nullptr;
        j_free(v347[0]);
        v347[0] = nullptr;
        v348 = 0;
      }
      if ( v343 )
      {
        v344 = 0;
        j_free(v343);
        v343 = nullptr;
        v345 = 0;
      }
      v217 = (char *)v290;
      if ( v290 )
      {
        v218 = v291;
        if ( v291 )
        {
          v219 = 0;
          do
          {
            v220 = *(void **)&v217[v219 + 8];
            if ( v220 )
            {
              *(_QWORD *)&v217[v219 + 16] = 0;
              j_free(v220);
              *(_QWORD *)&v217[v219 + 8] = 0;
              *(_QWORD *)&v217[v219 + 24] = 0;
              v217 = (char *)v290;
            }
            v219 += 32;
            --v218;
          }
          while ( v218 );
        }
        v291 = 0;
        j_free(v217);
        v290 = nullptr;
        v292 = 0;
      }
      v221 = (char *)v320;
      if ( v320 )
      {
        v222 = v321;
        if ( v321 )
        {
          v223 = 0;
          do
          {
            v224 = *(void **)&v221[v223 + 8];
            if ( v224 )
            {
              *(_QWORD *)&v221[v223 + 16] = 0;
              j_free(v224);
              *(_QWORD *)&v221[v223 + 8] = 0;
              *(_QWORD *)&v221[v223 + 24] = 0;
              v221 = (char *)v320;
            }
            v223 += 32;
            --v222;
          }
          while ( v222 );
        }
        v321 = 0;
        j_free(v221);
      }
      goto LABEL_518;
    case 0x2A:
      v225 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v226 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 248) + 424LL))(*(_QWORD *)(a1 + 248), v225);
      sub_140002D20(a2, v226);
      goto LABEL_518;
    case 0x2B:
      v227 = Src;
      v228 = Src;
      while ( (unsigned __int64)v227 < v270 )
      {
        if ( !*v227++ )
        {
          Src = v227;
          goto LABEL_448;
        }
      }
      v228 = nullptr;
LABEL_448:
      v230 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 248) + 528LL))(*(_QWORD *)(a1 + 248), v228);
      sub_140002D20(a2, v230);
      goto LABEL_518;
    case 0x2C:
      v134 = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      v307 = nullptr;
      v308 = 0;
      v309 = 0;
      v135 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64))(**(_QWORD **)(a1 + 248) + 256LL))(
               *(_QWORD *)(a1 + 248),
               &v307,
               v134);
      v136 = v135;
      v137 = v308;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_scattered_image(base=%a) => %d (qty=%d)\n", v4, v135, v308);
      sub_140002D20(a2, v136 + 2);
      if ( v136 > 0 )
      {
        sub_140002D20(a2, v137);
        for ( m = 0; m < v137; ++m )
          sub_140051020(a2, (_QWORD *)v307 + 5 * m);
      }
      v139 = (char *)v307;
      if ( v307 )
      {
        v140 = v308;
        if ( v308 )
        {
          v141 = 0;
          do
          {
            v142 = *(void **)&v139[v141 + 16];
            if ( v142 )
            {
              *(_QWORD *)&v139[v141 + 24] = 0;
              j_free(v142);
              *(_QWORD *)&v139[v141 + 16] = 0;
              *(_QWORD *)&v139[v141 + 32] = 0;
              v139 = (char *)v307;
            }
            v141 += 40;
            --v140;
          }
          while ( v140 );
        }
        v308 = 0;
        j_free(v139);
      }
      goto LABEL_518;
    case 0x2D:
      v143 = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      v329 = nullptr;
      v330 = 0;
      v331 = 0;
      v144 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64))(**(_QWORD **)(a1 + 248) + 264LL))(
               *(_QWORD *)(a1 + 248),
               &v329,
               v143);
      v145 = v144;
      v146 = v330;
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_image_uuid(base=%a) => %d (size=%d)\n", v4, v144, v330);
      sub_140002D20(a2, v145);
      if ( (_BYTE)v145 )
        sub_1400067E0(a2, v329, v146);
      if ( v329 )
      {
        v330 = 0;
        j_free(v329);
      }
      goto LABEL_518;
    case 0x2E:
      v147 = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      v148 = Src;
      v149 = (const char *)Src;
      while ( (unsigned __int64)v148 < v270 )
      {
        if ( !*v148++ )
        {
          Src = v148;
          goto LABEL_291;
        }
      }
      v149 = nullptr;
LABEL_291:
      v151 = *(_QWORD *)(a1 + 248);
      v152 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v151 + 272LL);
      *(_OWORD *)v361 = 0;
      v362 = 0;
      if ( v149 )
      {
        v153 = strlen(v149);
        sub_140001810((__int64)v361, v149, v153);
      }
      v154 = v152(v151, v147, v361);
      if ( v361[0] )
      {
        v361[1] = nullptr;
        j_free(v361[0]);
      }
      if ( *(_BYTE *)(a1 - 8) )
        sub_140002CE0((struct __crt_locale_pointers *)"get_segm_start(base=%a, segname=%s) => %a\n", v4, v149, a4);
      sub_140002DC0(a2, v154 + 1);
      goto LABEL_518;
    case 0x2F:
      k = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
      v274 = (__m128i *)(sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1);
      v231 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v273 = v231;
      v301 = nullptr;
      v302 = 0;
      v303 = 0;
      sub_14004DBD0(&v301, v231);
      v232 = 0;
      while ( 2 )
      {
        LODWORD(v272) = v232;
        if ( v232 < v231 )
        {
          v233 = (char *)v301 + 80 * v232;
          v234 = sub_14005B690((unsigned __int64 *)&Src, v270);
          if ( !v234 )
            goto LABEL_462;
          v235 = v234;
          if ( (unsigned __int64)v234 <= *((_QWORD *)v233 + 1) )
          {
            if ( v234 == *((_QWORD *)v233 + 1) || (unsigned __int64)v234 >= *((_QWORD *)v233 + 1) )
            {
LABEL_459:
              v236 = *(void **)v233;
              v237 = Src;
              if ( (char *)Src + v235 >= Src && (unsigned __int64)Src + v235 <= v270 )
              {
                Src = (char *)Src + v235;
                memcpy(v236, v237, v235);
              }
LABEL_462:
              v238 = sub_14005B690((unsigned __int64 *)&Src, v270);
              if ( !v238 )
                goto LABEL_473;
              v239 = v238;
              if ( (unsigned __int64)v238 <= *((_QWORD *)v233 + 4) )
              {
                if ( v238 == *((_QWORD *)v233 + 4) || (unsigned __int64)v238 >= *((_QWORD *)v233 + 4) )
                {
LABEL_470:
                  v240 = *((void **)v233 + 3);
                  v241 = Src;
                  if ( (char *)Src + v239 >= Src && (unsigned __int64)Src + v239 <= v270 )
                  {
                    Src = (char *)Src + v239;
                    memcpy(v240, v241, v239);
                  }
LABEL_473:
                  v242 = (int)sub_14005B690((unsigned __int64 *)&Src, v270);
                  v243 = v242 < *((_QWORD *)v233 + 7);
                  v244 = v242 <= *((_QWORD *)v233 + 7);
                  if ( v242 == *((_QWORD *)v233 + 7) )
                    goto LABEL_490;
                  v337 = 0u;
                  if ( !v243 )
                  {
                    if ( v244 )
                      goto LABEL_490;
                    v245 = *((char **)v233 + 6);
                    if ( &v337 < (__int128 *)v245
                      || (v246 = *((_QWORD *)v233 + 8), &v337 >= (__int128 *)&v245[16 * v246]) )
                    {
                      if ( v242 > *((_QWORD *)v233 + 8) )
                        *((_QWORD *)v233 + 6) = sub_14005ABE0((__int64)(v233 + 48), v245, v242, 0x10u);
                      v251 = *((_QWORD *)v233 + 7);
                      if ( v251 < v242 )
                      {
                        v252 = 16 * v251;
                        v253 = v242 - v251;
                        v254 = v337;
                        do
                        {
                          *(_OWORD *)(v252 + *((_QWORD *)v233 + 6)) = v254;
                          v252 += 16;
                          --v253;
                        }
                        while ( v253 );
                      }
                    }
                    else
                    {
                      v276[0] = nullptr;
                      v276[1] = nullptr;
                      if ( v242 > v246 )
                        *((_QWORD *)v233 + 6) = sub_14005ABE0((__int64)(v233 + 48), v245, v242, 0x10u);
                      v247 = *((_QWORD *)v233 + 7);
                      if ( v247 < v242 )
                      {
                        v248 = 16 * v247;
                        v249 = v242 - v247;
                        v250 = *(_OWORD *)v276;
                        do
                        {
                          *(_OWORD *)(v248 + *((_QWORD *)v233 + 6)) = v250;
                          v248 += 16;
                          --v249;
                        }
                        while ( v249 );
                      }
                    }
                  }
                  *((_QWORD *)v233 + 7) = v242;
LABEL_490:
                  for ( n = 0; n < (int)v242; ++n )
                  {
                    *(_QWORD *)(*((_QWORD *)v233 + 6) + 16LL * n) = sub_14005B7B0((unsigned __int64 *)&Src, v270) - 1;
                    *(_QWORD *)(*((_QWORD *)v233 + 6) + 16LL * n + 8) = sub_14005B7B0((unsigned __int64 *)&Src, v270)
                                                                      - 1;
                  }
                  *((_DWORD *)v233 + 18) = sub_14005B690((unsigned __int64 *)&Src, v270);
                  v232 = v272 + 1;
                  v231 = v273;
                  continue;
                }
              }
              else
              {
                if ( (unsigned __int64)v238 > *((_QWORD *)v233 + 5) )
                  *((_QWORD *)v233 + 3) = sub_14005ABE0((__int64)(v233 + 24), *((void **)v233 + 3), v238, 1u);
                memset((void *)(*((_QWORD *)v233 + 3) + *((_QWORD *)v233 + 4)), 0, v239 - *((_QWORD *)v233 + 4));
              }
              *((_QWORD *)v233 + 4) = v239;
              goto LABEL_470;
            }
          }
          else
          {
            if ( (unsigned __int64)v234 > *((_QWORD *)v233 + 2) )
              *(_QWORD *)v233 = sub_14005ABE0((__int64)v233, *(void **)v233, v234, 1u);
            memset((void *)(*(_QWORD *)v233 + *((_QWORD *)v233 + 1)), 0, v235 - *((_QWORD *)v233 + 1));
          }
          *((_QWORD *)v233 + 1) = v235;
          goto LABEL_459;
        }
        break;
      }
      v256 = sub_14005B690((unsigned __int64 *)&Src, v270);
      v310 = nullptr;
      v311 = 0;
      v312 = 0;
      v257 = (*(__int64 (__fastcall **)(_QWORD, const char **, __int64, __m128i *, void **, int, void **))(**(_QWORD **)(a1 + 248) + 568LL))(
               *(_QWORD *)(a1 + 248),
               &v278,
               k,
               v274,
               &v301,
               v256,
               &v310);
      sub_140002D20(a2, v257);
      if ( v257 == 1 )
      {
        sub_140002DC0(a2, (__int64)(v278 + 1));
      }
      else if ( v257 != -1 )
      {
        if ( v311 )
        {
          v258 = pNodeName;
          if ( v310 )
            v258 = (const char *)v310;
        }
        else
        {
          v258 = Str1;
        }
        v259 = strlen(v258);
        v260 = v259 + 1;
        if ( v259 != -1 )
        {
          v261 = a2[1];
          v262 = v261 + v260;
          if ( v261 + v260 < v261 )
            v262 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a2, v262);
          memcpy((void *)(v261 + *a2), v258, v260);
        }
      }
      if ( v310 )
      {
        v311 = 0;
        j_free(v310);
        v310 = nullptr;
        v312 = 0;
      }
      v263 = v301;
      if ( v301 )
      {
        v264 = v302;
        if ( v302 )
        {
          v265 = 0;
          do
          {
            sub_14003FF70((__int64)v263 + v265);
            v265 += 80;
            --v264;
            v263 = v301;
          }
          while ( v264 );
        }
        v302 = 0;
        j_free(v263);
      }
LABEL_518:
      v62 = v268;
LABEL_519:
      if ( v62 )
        *(_BYTE *)(a1 + 97) = 1;
      return a2;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 512LL) )
      {
        sub_140002D20(a2, 1u);
        sub_140050A70(a2, *(_QWORD *)(a1 + 248) + 504LL);
      }
      else
      {
        sub_140002D20(a2, 0);
      }
      goto LABEL_518;
    default:
      v266 = sub_140054B30((__int64 *)v374, 1);
      sub_140040A30((__int64)a2, v266);
      if ( v374[0] )
      {
        v374[1] = nullptr;
        j_free(v374[0]);
      }
      goto LABEL_518;
  }
}
// 14004A30C: variable 'v11' is possibly undefined
// 14004AEA1: variable 'v4' is possibly undefined
// 14004B3B3: variable 'v5' is possibly undefined
// 140050A70: using guessed type __int64 __fastcall sub_140050A70(_QWORD, _QWORD);
// 1400975F0: using guessed type char *off_1400975F0[6];
// 1400CB138: using guessed type __int64 qword_1400CB138[2];
// 1400CB61C: using guessed type char byte_1400CB61C;
