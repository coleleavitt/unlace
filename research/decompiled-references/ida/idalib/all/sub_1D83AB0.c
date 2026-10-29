__int64 __fastcall sub_1D83AB0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5, __m128 si128, __m128i a7)
{
  __int64 v8; // rbp
  void **v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r14
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128 v25; // xmm0
  __int64 v26; // rsi
  unsigned int v27; // r14d
  _BYTE *v28; // r12
  int v29; // r14d
  __int64 v30; // r12
  const __m128i *v31; // r15
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  __int64 v34; // rdx
  const __m128i *v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  char *v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  void **v44; // r15
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned __int64 v47; // rax
  unsigned __int64 (__fastcall *v48)(__int64); // rax
  char v49; // r13
  int v50; // r12d
  unsigned __int64 (__fastcall *v51)(__int64); // rax
  int v52; // eax
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  char v55; // dl
  __int64 v56; // rcx
  _BYTE *v57; // rdi
  _QWORD *v58; // r13
  _QWORD *v59; // rbx
  unsigned __int64 v60; // r12
  unsigned __int64 v61; // rax
  _QWORD *v62; // r15
  _QWORD *v63; // rbp
  _QWORD *v64; // rdi
  void *v65; // rdi
  void **v66; // rbp
  void **v67; // r15
  char *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // r12
  void **v71; // rbp
  int v73; // r13d
  __int64 v74; // r15
  unsigned int v75; // eax
  void *v76; // r9
  int v77; // edx
  void **v78; // r13
  __int64 v79; // r14
  unsigned __int64 v80; // rax
  __int64 v81; // rbp
  char v82; // al
  unsigned __int64 v83; // rcx
  unsigned int v84; // r12d
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 *v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned int v91; // r12d
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  char *v94; // rsi
  unsigned int v95; // r12d
  _BYTE *v96; // rax
  char *j; // rax
  unsigned __int64 v98; // r13
  char *v99; // rsi
  _BYTE *v100; // rdx
  char *v101; // rax
  __int64 v102; // rax
  int v103; // edi
  unsigned int *v104; // r12
  __int64 v105; // rcx
  unsigned int v106; // eax
  unsigned int v107; // r9d
  unsigned int v108; // r8d
  char v109; // al
  _QWORD *v110; // rsi
  __int64 v111; // rax
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  __m128i *v116; // rax
  __int64 v117; // r13
  __int64 v118; // r15
  __int64 v119; // r8
  __int64 v120; // rbp
  int v121; // r13d
  const __m128i *v122; // rdx
  char v123; // al
  __m128i *v124; // rax
  unsigned int *v125; // r12
  __int64 v126; // r13
  __int64 v127; // rbp
  __m128i v128; // xmm4
  char v129; // al
  unsigned int v130; // eax
  unsigned int v131; // r9d
  unsigned int v132; // r8d
  _QWORD *v133; // rsi
  __int64 v134; // rax
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  unsigned __int64 v138; // rdx
  __m128i *v139; // rax
  __int64 v140; // rdx
  _DWORD *v141; // rax
  void **v142; // rsi
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  void **v147; // rax
  __int64 v148; // rax
  unsigned __int64 v149; // rdi
  __int64 v150; // rdx
  _BYTE *v151; // rax
  int v152; // ecx
  __int64 *v153; // r12
  unsigned int v154; // r9d
  int v155; // eax
  unsigned int v156; // r8d
  char v157; // dl
  _QWORD *v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rax
  unsigned __int64 v164; // rdx
  char *v165; // rcx
  const __m128i *v166; // rdx
  __m128i *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // r14
  __m128i v170; // xmm7
  bool v171; // al
  signed __int64 v172; // r12
  __int64 v173; // rdx
  char *v174; // r15
  char *i; // rax
  char *v176; // rsi
  unsigned int v177; // r12d
  _BYTE *v178; // rax
  char *k; // rax
  unsigned int v180; // r12d
  __int64 v181; // r14
  char v182; // al
  __m128i *v183; // rax
  const __m128i *v184; // rdx
  __int64 v185; // rbp
  __m128i v186; // xmm7
  char v187; // dl
  unsigned int v188; // r8d
  _QWORD *v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rdx
  char *v195; // rax
  int v196; // eax
  __m128i *v197; // rdi
  char *v198; // r12
  __int64 v199; // rax
  char *v200; // rbp
  __int64 v201; // r13
  __int64 v202; // rcx
  __int64 v203; // rdx
  __int64 v204; // [rsp-10h] [rbp-A78h]
  __int64 v205; // [rsp+8h] [rbp-A60h]
  _QWORD *v206; // [rsp+10h] [rbp-A58h]
  __int64 v207; // [rsp+10h] [rbp-A58h]
  unsigned __int64 v209; // [rsp+20h] [rbp-A48h]
  __int64 v210; // [rsp+20h] [rbp-A48h]
  unsigned int *v211; // [rsp+20h] [rbp-A48h]
  unsigned int *v212; // [rsp+28h] [rbp-A40h]
  unsigned int v213; // [rsp+48h] [rbp-A20h]
  unsigned int v214; // [rsp+48h] [rbp-A20h]
  int v215; // [rsp+48h] [rbp-A20h]
  const __m128i *v216; // [rsp+48h] [rbp-A20h]
  __int64 v217; // [rsp+48h] [rbp-A20h]
  unsigned int v218; // [rsp+58h] [rbp-A10h]
  unsigned int v219; // [rsp+58h] [rbp-A10h]
  __int64 v220; // [rsp+58h] [rbp-A10h]
  unsigned int v221; // [rsp+58h] [rbp-A10h]
  unsigned int v222; // [rsp+58h] [rbp-A10h]
  __int64 v223; // [rsp+58h] [rbp-A10h]
  __int64 v224; // [rsp+90h] [rbp-9D8h]
  unsigned int v225; // [rsp+90h] [rbp-9D8h]
  unsigned int v226; // [rsp+90h] [rbp-9D8h]
  int v227; // [rsp+9Ch] [rbp-9CCh]
  __int64 v228; // [rsp+A0h] [rbp-9C8h]
  char *v229; // [rsp+A0h] [rbp-9C8h]
  _QWORD *v230; // [rsp+A8h] [rbp-9C0h]
  unsigned int v231; // [rsp+B0h] [rbp-9B8h]
  unsigned int v232; // [rsp+B0h] [rbp-9B8h]
  _BYTE *v233; // [rsp+B0h] [rbp-9B8h]
  unsigned int v234; // [rsp+B8h] [rbp-9B0h]
  unsigned int v235; // [rsp+B8h] [rbp-9B0h]
  unsigned int v236; // [rsp+C0h] [rbp-9A8h]
  __int64 v237; // [rsp+D0h] [rbp-998h]
  __int64 v238; // [rsp+D8h] [rbp-990h]
  __int64 v239; // [rsp+E8h] [rbp-980h]
  __int64 v240; // [rsp+F0h] [rbp-978h]
  unsigned int v241; // [rsp+F8h] [rbp-970h]
  unsigned int v242; // [rsp+FCh] [rbp-96Ch]
  unsigned int v243; // [rsp+FCh] [rbp-96Ch]
  _BYTE v244[16]; // [rsp+100h] [rbp-968h] BYREF
  __m128 v245; // [rsp+110h] [rbp-958h] BYREF
  __int64 v246; // [rsp+120h] [rbp-948h]
  __m128i v247; // [rsp+130h] [rbp-938h] BYREF
  __int64 v248; // [rsp+140h] [rbp-928h]
  __m128i v249; // [rsp+150h] [rbp-918h] BYREF
  __int64 v250; // [rsp+160h] [rbp-908h]
  __m128i v251; // [rsp+170h] [rbp-8F8h] BYREF
  __int64 v252; // [rsp+180h] [rbp-8E8h]
  void *v253; // [rsp+190h] [rbp-8D8h] BYREF
  __int64 v254; // [rsp+198h] [rbp-8D0h]
  _QWORD v255[3]; // [rsp+1A0h] [rbp-8C8h] BYREF
  char v256; // [rsp+1B8h] [rbp-8B0h]
  void *v257; // [rsp+1C0h] [rbp-8A8h] BYREF
  __int64 v258; // [rsp+1C8h] [rbp-8A0h]
  _BYTE v259[48]; // [rsp+1D0h] [rbp-898h] BYREF
  void *v260; // [rsp+200h] [rbp-868h] BYREF
  __int64 v261; // [rsp+208h] [rbp-860h]
  _BYTE v262[48]; // [rsp+210h] [rbp-858h] BYREF
  void *v263; // [rsp+240h] [rbp-828h] BYREF
  __int64 v264; // [rsp+248h] [rbp-820h]
  _BYTE v265[48]; // [rsp+250h] [rbp-818h] BYREF
  void *v266; // [rsp+280h] [rbp-7E8h] BYREF
  __int64 v267; // [rsp+288h] [rbp-7E0h]
  _BYTE v268[48]; // [rsp+290h] [rbp-7D8h] BYREF
  void *v269; // [rsp+2C0h] [rbp-7A8h] BYREF
  __int64 v270; // [rsp+2C8h] [rbp-7A0h]
  _BYTE v271[48]; // [rsp+2D0h] [rbp-798h] BYREF
  void *v272; // [rsp+300h] [rbp-768h] BYREF
  __int64 v273; // [rsp+308h] [rbp-760h]
  _BYTE v274[48]; // [rsp+310h] [rbp-758h] BYREF
  void *v275; // [rsp+340h] [rbp-728h] BYREF
  __int64 v276; // [rsp+348h] [rbp-720h]
  _BYTE v277[48]; // [rsp+350h] [rbp-718h] BYREF
  void *v278[2]; // [rsp+380h] [rbp-6E8h] BYREF
  _QWORD v279[12]; // [rsp+390h] [rbp-6D8h] BYREF
  int v280; // [rsp+3F0h] [rbp-678h]
  char v281; // [rsp+3F4h] [rbp-674h]
  void *v282[2]; // [rsp+400h] [rbp-668h] BYREF
  _DWORD v283[25]; // [rsp+410h] [rbp-658h] BYREF
  char v284; // [rsp+474h] [rbp-5F4h]
  void *ptr[2]; // [rsp+480h] [rbp-5E8h] BYREF
  _QWORD v286[12]; // [rsp+490h] [rbp-5D8h] BYREF
  int v287; // [rsp+4F0h] [rbp-578h]
  char v288; // [rsp+4F4h] [rbp-574h]
  void *v289[2]; // [rsp+500h] [rbp-568h] BYREF
  __m128i v290; // [rsp+510h] [rbp-558h] BYREF
  __int64 v291; // [rsp+520h] [rbp-548h]
  int v292; // [rsp+570h] [rbp-4F8h]
  char v293; // [rsp+574h] [rbp-4F4h]
  __int64 v294; // [rsp+580h] [rbp-4E8h] BYREF
  __int64 v295; // [rsp+588h] [rbp-4E0h]
  __int64 v296; // [rsp+590h] [rbp-4D8h] BYREF
  unsigned int v297; // [rsp+598h] [rbp-4D0h]
  void *v298; // [rsp+5D0h] [rbp-498h] BYREF
  __int64 v299; // [rsp+5D8h] [rbp-490h]
  __int64 v300; // [rsp+5E0h] [rbp-488h] BYREF
  __int64 v301; // [rsp+5E8h] [rbp-480h]
  __int16 v302; // [rsp+5F0h] [rbp-478h]
  char v303; // [rsp+5F2h] [rbp-476h]
  __int64 v304; // [rsp+5F8h] [rbp-470h]
  void *v305[2]; // [rsp+610h] [rbp-458h] BYREF
  __m128 v306; // [rsp+620h] [rbp-448h] BYREF
  __int64 v307; // [rsp+630h] [rbp-438h]
  void *v308; // [rsp+660h] [rbp-408h] BYREF
  __int64 v309; // [rsp+668h] [rbp-400h]
  __int64 v310; // [rsp+670h] [rbp-3F8h] BYREF
  __int64 v311; // [rsp+678h] [rbp-3F0h]
  int v312; // [rsp+680h] [rbp-3E8h]
  char v313; // [rsp+684h] [rbp-3E4h]
  __int64 v314; // [rsp+688h] [rbp-3E0h]
  void *v315; // [rsp+6A0h] [rbp-3C8h] BYREF
  __int64 v316; // [rsp+6A8h] [rbp-3C0h]
  _BYTE v317[384]; // [rsp+6B0h] [rbp-3B8h] BYREF
  __int128 v318; // [rsp+830h] [rbp-238h] BYREF
  int v319; // [rsp+840h] [rbp-228h]
  __int16 v320; // [rsp+844h] [rbp-224h]
  __int64 v321; // [rsp+848h] [rbp-220h]
  _BYTE *v322; // [rsp+850h] [rbp-218h]
  __int64 v323; // [rsp+858h] [rbp-210h]
  _BYTE v324[128]; // [rsp+860h] [rbp-208h] BYREF
  __int64 v325; // [rsp+8E0h] [rbp-188h]
  __int64 v326; // [rsp+8E8h] [rbp-180h]
  __int64 v327; // [rsp+8F0h] [rbp-178h]
  __int64 v328; // [rsp+900h] [rbp-168h]
  __int64 v329; // [rsp+908h] [rbp-160h]
  int v330; // [rsp+918h] [rbp-150h]
  char v331; // [rsp+91Ch] [rbp-14Ch]
  void *v332; // [rsp+920h] [rbp-148h]
  __int64 v333; // [rsp+928h] [rbp-140h]
  _BYTE v334[64]; // [rsp+930h] [rbp-138h] BYREF
  __int64 v335; // [rsp+970h] [rbp-F8h]
  __int64 v336; // [rsp+978h] [rbp-F0h]
  void *v337; // [rsp+980h] [rbp-E8h]
  __int64 v338; // [rsp+988h] [rbp-E0h]
  _BYTE v339[96]; // [rsp+990h] [rbp-D8h] BYREF
  __int16 v340; // [rsp+9F0h] [rbp-78h]
  void *v341; // [rsp+9F8h] [rbp-70h]
  __int64 v342; // [rsp+A00h] [rbp-68h]
  _BYTE v343[96]; // [rsp+A08h] [rbp-60h] BYREF

  v8 = a2;
  v294 = a1;
  v295 = 1;
  v10 = (void **)&v296;
  do
  {
    *v10 = (void *)-4096LL;
    v10 += 2;
  }
  while ( &v298 != v10 );
  v302 = 0;
  v11 = 0;
  v303 = 0;
  v298 = &v300;
  v299 = 0x100000000LL;
  v12 = *(_QWORD *)(a1 + 11280);
  *(_QWORD *)(a1 + 11280) = &v294;
  v13 = *(unsigned int *)(a2 + 24);
  v301 = v12;
  v304 = 0;
  sub_1DC37C0(v244, a1, v13, a3, 0);
  if ( v244[8] )
    goto LABEL_99;
  v206 = *(_QWORD **)(a1 + 248);
  sub_1D81F50(&v245, (__int64)v206, a2, v14, v15);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 25;
  if ( (unsigned int)v18 > 1 )
    v17 = sub_F63050(v17, v206, v18, v16);
  v19 = (__int64 *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = sub_F6A860(*v19);
  v22 = *v19;
  v23 = *(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *(unsigned __int8 *)(v23 + 16);
  if ( (_BYTE)v24 == 29 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  else if ( *(_BYTE *)(v22 + 16) == 24 || (_BYTE)v24 == 24 && (v22 = sub_F63050(v22, v206, v23, v24)) != 0 )
  {
    v21 = sub_F6A870(*(_QWORD *)(*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v206, v23, v24, v20);
  }
  v322 = v324;
  v25 = 0;
  v323 = 0x400000000LL;
  v338 = 0x400000000LL;
  v342 = 0x400000000LL;
  v332 = v334;
  v26 = *(_QWORD *)(a3 + 56);
  v337 = v339;
  v340 = 0;
  v320 = 0;
  v321 = 0;
  v325 = 0;
  v330 = 0;
  v331 = 0;
  v333 = 0x800000000LL;
  v336 = 0;
  v27 = *(_DWORD *)(v26 + 20) & 0x1FFFFFFF;
  v341 = v343;
  v319 = a4;
  v318 = 0;
  v326 &= 0xFFFFFFFE00000000LL;
  v327 = 0;
  v328 &= 0xFFFFFFFE00000000LL;
  v329 = 0;
  v335 = 0;
  v253 = v255;
  v254 = 0x100000000LL;
  if ( v27 )
  {
    if ( v27 == 1 )
    {
      v255[0] &= 0xFFFFFFFE00000000LL;
      v256 = 0;
      v255[1] = 0;
    }
    else
    {
      sub_2237220(&v253, v255, v27, 32);
      v174 = (char *)v253 + 32 * v27;
      for ( i = (char *)v253 + 32 * (unsigned int)v254; v174 != i; *((_QWORD *)i - 3) = 0 )
      {
        i[24] = 0;
        *(_QWORD *)i &= 0xFFFFFFFE00000000LL;
        i += 32;
      }
      v26 = *(_QWORD *)(a3 + 56);
    }
    LODWORD(v254) = v27;
  }
  v28 = v259;
  sub_1D71330(
    a1,
    v26,
    v21 + 48,
    *(unsigned int *)(v21 + 20),
    v245.m128_i64[1],
    v246,
    0.0,
    *(double *)si128.m128_u64,
    a7,
    (__int64)&v318,
    (__int64 *)&v253,
    0);
  v257 = v259;
  v258 = 0x200000000LL;
  v260 = v262;
  v261 = 0xC00000000LL;
  if ( (_DWORD)v254 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v35 = (const __m128i *)((char *)v253 + 32 * v30);
      if ( (v35->m128i_i32[0] & 0x7FFFFFFF) == 0
        || (v31 = v35, (v35->m128i_i32[0] & 0x7FFFFFFF) == 9) && sub_1D82B90((__int64)v35) )
      {
        v36 = (unsigned int)v261;
        v37 = (unsigned int)v261 + 1LL;
        if ( v37 > HIDWORD(v261) )
        {
          sub_2237220(&v260, v262, v37, 4);
          v36 = (unsigned int)v261;
        }
        *((_DWORD *)v260 + v36) = v29;
        LODWORD(v261) = v261 + 1;
      }
      else
      {
        v32 = (unsigned int)v258 + 1LL;
        v33 = (__m128i *)((char *)v257 + 24 * (unsigned int)v258);
        if ( v32 > HIDWORD(v258) )
        {
          if ( v257 > v35 || v33 <= v35 )
          {
            sub_2237220(&v257, v259, v32, 24);
            v33 = (__m128i *)((char *)v257 + 24 * (unsigned int)v258);
          }
          else
          {
            v172 = (char *)v35 - (_BYTE *)v257;
            sub_2237220(&v257, v259, v32, 24);
            v31 = (const __m128i *)((char *)v257 + v172);
            v33 = (__m128i *)((char *)v257 + 24 * (unsigned int)v258);
          }
        }
        *v33 = _mm_loadu_si128(v31);
        v34 = v31[1].m128i_i64[0];
        LODWORD(v258) = v258 + 1;
        v33[1].m128i_i64[0] = v34;
      }
      v30 = (unsigned int)(v29 + 1);
      v29 = v30;
    }
    while ( (unsigned int)v30 < (unsigned int)v254 );
    v28 = v257;
    v73 = v258;
  }
  else
  {
    v73 = 0;
  }
  v74 = *(_QWORD *)(v8 + 56);
  sub_1504FB0((__int64 *)&v315, *(_DWORD *)(v74 + 20) & 0x1FFFFFFF, 0);
  v75 = sub_BBD7B0(v74);
  sub_1D3B4A0(a1, (__int64)v28, v73, v75, (unsigned __int64 *)&v315);
  v77 = *(_DWORD *)(v74 + 20);
  v78 = (void **)v315;
  if ( (v77 & 0x1FFFFFFF) == 0 )
  {
    v88 = (unsigned __int8)v315 & 1;
    v263 = v265;
    v264 = 0xC00000000LL;
    goto LABEL_152;
  }
  v79 = 0;
  v205 = v8;
  do
  {
    v88 = (unsigned __int8)v78 & 1;
    if ( ((unsigned __int8)v78 & 1) != 0 )
      v80 = ((((unsigned __int64)v78 >> 1) & ~(-1LL << ((unsigned __int64)v78 >> 58))) >> v79) & 1;
    else
      v80 = (*((_QWORD *)*v78 + ((unsigned int)v79 >> 6)) >> v79) & 1LL;
    if ( (_BYTE)v80 )
    {
      v81 = *(_QWORD *)(v74 + 8 * v79 + 24);
      v82 = *(_BYTE *)(v81 + 28) & 0x7F;
      v83 = *(_QWORD *)(v81 + 72) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v82 == 67 )
      {
        if ( !v83 )
          goto LABEL_126;
        v84 = sub_BBD7B0(v74);
        if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
        {
          qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
          qword_2CCC4A8 = 0;
          qword_2CCC4B8 = 0;
          __cxa_guard_release(&byte_2CCC480);
        }
        v85 = *(_QWORD *)(v81 + 72);
        v86 = v85 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v85 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_138;
        v87 = &qword_2CCC4A0;
        goto LABEL_125;
      }
      if ( v82 == 47 )
      {
        if ( v83 )
        {
          v84 = sub_BBD7B0(v74);
          if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
          {
            qword_2CCC460 &= 0xFFFFFFFE00000000LL;
            qword_2CCC468 = 0;
            qword_2CCC478 = 0;
            __cxa_guard_release(&byte_2CCC440);
          }
          v85 = *(_QWORD *)(v81 + 72);
          v86 = v85 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v85 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_138;
          v87 = &qword_2CCC460;
LABEL_125:
          sub_1D3B4A0(a1, (__int64)v87, 1, v84, (unsigned __int64 *)&v315);
          v78 = (void **)v315;
          v77 = *(_DWORD *)(v74 + 20);
          v88 = (unsigned __int8)v315 & 1;
        }
      }
      else if ( v83 )
      {
        v84 = sub_BBD7B0(v74);
        if ( !(_BYTE)byte_2CCC408 && __cxa_guard_acquire(&byte_2CCC408) )
        {
          qword_2CCC420 &= 0xFFFFFFFE00000000LL;
          qword_2CCC428 = 0;
          qword_2CCC438 = 0;
          __cxa_guard_release(&byte_2CCC408);
        }
        v85 = *(_QWORD *)(v81 + 72);
        v86 = v85 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v85 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v87 = &qword_2CCC420;
          goto LABEL_125;
        }
LABEL_138:
        v87 = (__int64 *)v86;
        v89 = (v85 >> 1) & 3;
        if ( v89 == 1 )
        {
          v90 = *(_QWORD *)(v86 + 72);
          v87 = nullptr;
          if ( v90 )
          {
            v87 = (__int64 *)(*(_QWORD *)(v86 + 72) & 0xFFFFFFFFFFFFFFF8LL);
            if ( ((v90 >> 1) & 3) == 2 )
            {
              if ( v87 )
                v87 = (__int64 *)v87[1];
            }
          }
        }
        else if ( v89 == 2 )
        {
          v87 = *(__int64 **)(v86 + 8);
        }
        goto LABEL_125;
      }
    }
LABEL_126:
    ++v79;
  }
  while ( (v77 & 0x1FFFFFFFu) > (unsigned int)v79 );
  v8 = v205;
  v263 = v265;
  v264 = 0xC00000000LL;
  if ( (v77 & 0x1FFFFFFF) != 0 )
  {
    v91 = 0;
    while ( 1 )
    {
      v88 = (unsigned __int8)v78 & 1;
      if ( ((unsigned __int8)v78 & 1) != 0 )
      {
        if ( (((((unsigned __int64)v78 >> 1) & ~(-1LL << ((unsigned __int64)v78 >> 58))) >> v91) & 1) == 0 )
          goto LABEL_146;
LABEL_149:
        v92 = (unsigned int)v264;
        v93 = (unsigned int)v264 + 1LL;
        if ( v93 > HIDWORD(v264) )
        {
          sub_2237220(&v263, v265, v93, 4);
          v92 = (unsigned int)v264;
        }
        *((_DWORD *)v263 + v92) = v91;
        v77 = *(_DWORD *)(v74 + 20);
        ++v91;
        v78 = (void **)v315;
        LODWORD(v264) = v264 + 1;
        v88 = (unsigned __int8)v315 & 1;
        if ( (v77 & 0x1FFFFFFFu) <= v91 )
          break;
      }
      else
      {
        if ( ((*((_QWORD *)*v78 + (v91 >> 6)) >> v91) & 1) != 0 )
          goto LABEL_149;
LABEL_146:
        if ( (v77 & 0x1FFFFFFFu) <= ++v91 )
          break;
      }
    }
  }
LABEL_152:
  if ( !v88 && v78 )
  {
    if ( *v78 != v78 + 2 )
      free(*v78);
    operator delete(v78, 0x48u);
  }
  v94 = v268;
  v266 = v268;
  v95 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 20LL) & 0x1FFFFFFF;
  v267 = 0x200000000LL;
  if ( v95 )
  {
    v96 = v268;
    if ( v95 > 2uLL )
    {
      sub_2237220(&v266, v268, v95, 24);
      v96 = v266;
      v94 = (char *)v266 + 24 * (unsigned int)v267;
    }
    for ( j = &v96[24 * v95]; j != v94; *((_QWORD *)v94 - 2) = 0 )
    {
      *(_QWORD *)v94 &= 0xFFFFFFFE00000000LL;
      v94 += 24;
    }
    LODWORD(v267) = v95;
  }
  v269 = v271;
  v270 = 0x600000000LL;
  v98 = *(_DWORD *)(*(_QWORD *)(v8 + 56) + 20LL) & 0x1FFFFFFF;
  v99 = v317;
  v315 = v317;
  v316 = 0x1000000000LL;
  if ( v98 )
  {
    v100 = v317;
    if ( v98 > 0x10 )
    {
      sub_2237220(&v315, v317, v98, 24);
      v100 = v315;
      v99 = (char *)v315 + 24 * (unsigned int)v316;
    }
    v101 = &v100[24 * v98];
    if ( v101 != v99 )
    {
      do
      {
        *(_QWORD *)v99 &= 0xFFFFFFFE00000000LL;
        v99 += 24;
        *((_QWORD *)v99 - 2) = 0;
      }
      while ( v101 != v99 );
      v100 = v315;
    }
    v102 = (unsigned int)v98;
    LODWORD(v316) = v98;
  }
  else
  {
    v102 = 0;
    v100 = v317;
  }
  v103 = *(_DWORD *)(a1 + 12632);
  v104 = (unsigned int *)v263;
  *(_DWORD *)(a1 + 12632) = 0;
  v105 = (unsigned int)v264;
  v227 = v103;
  v212 = &v104[(unsigned int)v264];
  if ( v104 != v212 )
  {
    while ( 2 )
    {
      v117 = *v104;
      v118 = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8 * v117 + 24);
      v289[1] = v100;
      v289[0] = nullptr;
      si128 = (__m128)_mm_load_si128((const __m128i *)v289);
      v305[0] = &v306;
      v312 = 0;
      v313 = 1;
      v290.m128i_i64[0] = (unsigned int)v102;
      v306 = si128;
      v307 = v102;
      v305[1] = (void *)0x400000001LL;
      v109 = *(_BYTE *)(v118 + 28) & 0x7F;
      if ( v109 == 67 )
      {
        sub_BBE5B0(v118);
        v106 = sub_BBE590(v118);
        v107 = v270;
        v108 = v106;
        v109 = *(_BYTE *)(v118 + 28) & 0x7F;
        v110 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          goto LABEL_170;
      }
      else
      {
        if ( v109 == 47 )
        {
          v107 = v270;
          v108 = *(_DWORD *)(v118 + 68) & 0xFFFFF;
          v110 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
            v110 = (_QWORD *)*v110;
LABEL_182:
          v218 = v108;
          v213 = v107;
          v111 = sub_1E02D80(a1, v118, v110, v305);
          v113 = *(_WORD *)(v111 + 70) & 0xF | (16 * v213);
          *(_WORD *)(v111 + 70) = *(_WORD *)(v111 + 70) & 0xF | (16 * v213);
          v112 = *(_DWORD *)(v111 + 68) & 0xFFF00000 | v218 & 0xFFFFF;
          *(_DWORD *)(v111 + 68) = v112;
          goto LABEL_173;
        }
        v107 = v270;
        v108 = *(_DWORD *)(v118 + 64) & 0xFFFFF;
        v110 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v8 + 16) & 4) == 0 )
        {
LABEL_184:
          if ( v109 != 68 )
            goto LABEL_182;
          v219 = v108;
          v214 = v107;
          v111 = sub_1E02D80(a1, v118, v110, v305);
          v113 = *(_WORD *)(v111 + 66) & 0xF | (16 * v214);
          *(_WORD *)(v111 + 66) = *(_WORD *)(v111 + 66) & 0xF | (16 * v214);
          v112 = *(_DWORD *)(v111 + 64) & 0xFFF00000 | v219 & 0xFFFFF;
          *(_DWORD *)(v111 + 64) = v112;
LABEL_173:
          v114 = (unsigned int)v270;
          v115 = (unsigned int)v270 + 1LL;
          if ( v115 > HIDWORD(v270) )
          {
            v217 = v111;
            sub_2237220(&v269, v271, v115, 8);
            v114 = (unsigned int)v270;
            v111 = v217;
          }
          *((_QWORD *)v269 + v114) = v111;
          LODWORD(v270) = v270 + 1;
          sub_A80DE0((__int64)v289, (__int64)v206, v111, v114, v112, v113);
          v76 = v315;
          v116 = (__m128i *)((char *)v315 + 24 * v117);
          *v116 = _mm_load_si128((const __m128i *)v289);
          v116[1].m128i_i64[0] = v290.m128i_i64[0];
          if ( v305[0] != &v306 )
            free(v305[0]);
          v100 = v315;
          v102 = (unsigned int)v316;
          if ( v212 == ++v104 )
          {
            v98 = (unsigned int)v316;
            goto LABEL_189;
          }
          continue;
        }
LABEL_170:
        v110 = (_QWORD *)*v110;
      }
      break;
    }
    if ( v109 == 67 )
    {
      v111 = sub_1D82950(a1, (__int64)v110, v118, (__int64)v305, v108, v107, 1u);
      goto LABEL_173;
    }
    goto LABEL_184;
  }
LABEL_189:
  v119 = (unsigned int)v254;
  v279[2] = v98;
  v280 = 0;
  v241 = v270;
  v278[0] = v279;
  v281 = 1;
  v279[1] = v100;
  v278[1] = (void *)0x400000001LL;
  v279[0] = 0;
  if ( (_DWORD)v254 )
  {
    v210 = v8;
    v120 = 0;
    v121 = 0;
    do
    {
      v122 = (const __m128i *)((char *)v253 + 32 * v120);
      if ( (v122->m128i_i32[0] & 0x7FFFFFFF) != 0 )
      {
        if ( (v122->m128i_i32[0] & 0x7FFFFFFF) != 9
          || (v216 = (const __m128i *)((char *)v253 + 32 * v120), v171 = sub_1D82B90((__int64)v216), v122 = v216, !v171) )
        {
          sub_1D3AAD0((__m128i *)v289, a1, v122, 0, 0, 0, *(double *)v25.m128_u64, si128);
          v305[0] = (void *)((unsigned __int64)v305[0] & 0xFFFFFFFE00000000LL);
          v305[1] = nullptr;
          v306.m128_u64[1] = 0;
          ptr[0] = nullptr;
          *(double *)v25.m128_u64 = sub_1DD6BB0(a1, v289, v278, v305, 0, ptr);
          if ( !v123 )
          {
            v124 = (__m128i *)((char *)v266 + 24 * v120);
            *v124 = _mm_load_si128((const __m128i *)v305);
            v124[1].m128i_i64[0] = v306.m128_u64[0];
          }
        }
      }
      v120 = (unsigned int)(v121 + 1);
      v121 = v120;
    }
    while ( (unsigned int)v120 < (unsigned int)v254 );
    v8 = v210;
  }
  v125 = (unsigned int *)v260;
  v211 = (unsigned int *)((char *)v260 + 4 * (unsigned int)v261);
  if ( v260 != v211 )
  {
    v228 = v8;
    while ( 1 )
    {
      v126 = *v125;
      v127 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v126 + 24);
      v289[0] = nullptr;
      v289[1] = v266;
      v128 = _mm_load_si128((const __m128i *)v289);
      v305[0] = &v306;
      v312 = 0;
      v313 = 1;
      v290.m128i_i64[0] = (unsigned int)v267;
      v306 = (__m128)v128;
      v307 = (unsigned int)v267;
      v305[1] = (void *)0x400000001LL;
      v129 = *(_BYTE *)(v127 + 28) & 0x7F;
      if ( v129 == 67 )
      {
        sub_BBE5B0(v127);
        v130 = sub_BBE590(v127);
        v131 = v270;
        v132 = v130;
        v129 = *(_BYTE *)(v127 + 28) & 0x7F;
        v133 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a3 + 16) & 4) == 0 )
          goto LABEL_202;
      }
      else
      {
        if ( v129 == 47 )
        {
          v131 = v270;
          v132 = *(_DWORD *)(v127 + 68) & 0xFFFFF;
          v133 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v133 = (_QWORD *)*v133;
LABEL_241:
          v225 = v132;
          v221 = v131;
          v134 = sub_1E02D80(a1, v127, v133, v305);
          v136 = *(_WORD *)(v134 + 70) & 0xF | (16 * v221);
          *(_WORD *)(v134 + 70) = *(_WORD *)(v134 + 70) & 0xF | (16 * v221);
          v135 = *(_DWORD *)(v134 + 68) & 0xFFF00000 | v225 & 0xFFFFF;
          *(_DWORD *)(v134 + 68) = v135;
          goto LABEL_204;
        }
        v131 = v270;
        v132 = *(_DWORD *)(v127 + 64) & 0xFFFFF;
        v133 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a3 + 16) & 4) == 0 )
        {
LABEL_245:
          if ( v129 == 68 )
          {
            v226 = v132;
            v222 = v131;
            v134 = sub_1E02D80(a1, v127, v133, v305);
            v136 = *(_WORD *)(v134 + 66) & 0xF | (16 * v222);
            *(_WORD *)(v134 + 66) = *(_WORD *)(v134 + 66) & 0xF | (16 * v222);
            v135 = *(_DWORD *)(v134 + 64) & 0xFFF00000 | v226 & 0xFFFFF;
            *(_DWORD *)(v134 + 64) = v135;
            goto LABEL_204;
          }
          goto LABEL_241;
        }
      }
      v133 = (_QWORD *)*v133;
LABEL_202:
      if ( v129 != 67 )
        goto LABEL_245;
      v134 = sub_1D82950(a1, (__int64)v133, v127, (__int64)v305, v132, v131, 1u);
LABEL_204:
      v137 = (unsigned int)v270;
      v138 = (unsigned int)v270 + 1LL;
      if ( v138 > HIDWORD(v270) )
      {
        v223 = v134;
        sub_2237220(&v269, v271, v138, 8);
        v137 = (unsigned int)v270;
        v134 = v223;
      }
      *((_QWORD *)v269 + v137) = v134;
      LODWORD(v270) = v270 + 1;
      sub_A80DE0((__int64)&v247, (__int64)v206, v134, v137, v135, v136);
      v139 = (__m128i *)((char *)v266 + 24 * v126);
      v140 = v248;
      *v139 = _mm_load_si128(&v247);
      v139[1].m128i_i64[0] = v140;
      if ( v305[0] == &v306 )
      {
        if ( v211 == ++v125 )
        {
LABEL_208:
          v8 = v228;
          break;
        }
      }
      else
      {
        free(v305[0]);
        if ( v211 == ++v125 )
          goto LABEL_208;
      }
    }
  }
  v141 = sub_BC1D90(v206, (const __m128i *)v266, (unsigned int)v267, v105, v119, (__int64)v76);
  v142 = (void **)a3;
  v11 = sub_1E04120(a1, a3, v141, *(unsigned int *)(v8 + 24), 25);
  if ( v11 )
  {
    v305[0] = &v306;
    v305[1] = (void *)0x600000000LL;
    if ( (_DWORD)v270 )
    {
      v142 = &v269;
      sub_1747DA0(v305, (char **)&v269);
    }
    v144 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v145 = (unsigned int)*(unsigned __int8 *)(v144 + 16) - 25;
    if ( (unsigned int)v145 > 1 )
      v144 = sub_F63050(v144, v142, v145, v143);
    v230 = (_QWORD *)sub_1D83330((_QWORD *)a1, v8, *(_QWORD *)(v144 + 24), (__int64)v305);
    if ( v305[0] != &v306 )
      free(v305[0]);
    v146 = *(_QWORD *)(a3 + 56);
    if ( (*(_BYTE *)(v146 + 23) & 0x40) != 0 )
    {
      v237 = *(_QWORD *)(v146 + 8LL * (*(_DWORD *)(v146 + 20) & 0x1FFFFFFF) + 24);
      if ( v237 )
      {
        v305[0] = (void *)a1;
        v305[1] = &dword_0 + 1;
        v229 = (char *)v253;
        v236 = v254;
        v220 = *(_QWORD *)(a1 + 248);
        v147 = (void **)&v306;
        do
        {
          *v147 = (void *)-4096LL;
          v147 += 2;
        }
        while ( v147 != &v308 );
        BYTE2(v312) = 0;
        v314 = 0;
        v308 = &v310;
        v309 = 0x100000000LL;
        v148 = *(_QWORD *)(a1 + 11280);
        *(_QWORD *)(a1 + 11280) = v305;
        v311 = v148;
        LOWORD(v312) = 0;
        v149 = *(_QWORD *)sub_BC3640((_QWORD *)v8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v149 )
          v215 = sub_B8D390(v149);
        else
          v215 = 0;
        v150 = *(_QWORD *)(v8 + 56);
        v151 = v274;
        v152 = *(_DWORD *)(v150 + 20);
        v273 = 0x200000000LL;
        v153 = (__int64 *)(v150 + 24);
        v272 = v274;
        v224 = v150 + 8LL * (v152 & 0x1FFFFFFF) + 24;
        if ( v150 + 24 != v224 )
        {
          v154 = 0;
          v238 = v11;
          while ( 1 )
          {
            v169 = *v153;
            ptr[1] = v151;
            ptr[0] = nullptr;
            v170 = _mm_load_si128((const __m128i *)ptr);
            v289[0] = &v290;
            v292 = 0;
            v293 = 1;
            v286[0] = v154;
            v290 = v170;
            v291 = v154;
            v289[1] = (void *)0x400000001LL;
            v157 = *(_BYTE *)(v169 + 28) & 0x7F;
            if ( v157 == 67 )
              break;
            if ( v157 == 47 )
            {
              v156 = v215 + (*(_DWORD *)(v169 + 68) & 0xFFFFF);
              v158 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
                v158 = (_QWORD *)*v158;
LABEL_237:
              v234 = v154;
              v231 = v156;
              v159 = sub_1E02D80(a1, v169, v158, v289);
              v162 = *(_WORD *)(v159 + 70) & 0xF | (16 * v234);
              *(_WORD *)(v159 + 70) = *(_WORD *)(v159 + 70) & 0xF | (16 * v234);
              v161 = *(_DWORD *)(v159 + 68) & 0xFFF00000 | v231 & 0xFFFFF;
              *(_DWORD *)(v159 + 68) = v161;
              goto LABEL_228;
            }
            v156 = v215 + (*(_DWORD *)(v169 + 64) & 0xFFFFF);
            v158 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
              goto LABEL_225;
LABEL_301:
            if ( v157 != 68 )
              goto LABEL_237;
            v235 = v154;
            v232 = v156;
            v159 = sub_1E02D80(a1, v169, v158, v289);
            v196 = *(_WORD *)(v159 + 66) & 0xF;
            v162 = v196 | (16 * v235);
            *(_WORD *)(v159 + 66) = v196 | (16 * v235);
            v160 = *(_DWORD *)(v159 + 64) & 0xFFF00000;
            v161 = (unsigned int)v160 | v232 & 0xFFFFF;
            *(_DWORD *)(v159 + 64) = v161;
LABEL_228:
            sub_A80DE0((__int64)ptr, v220, v159, v160, v161, v162);
            v163 = (unsigned int)v273;
            v164 = (unsigned int)v273 + 1LL;
            if ( v164 > HIDWORD(v273) )
            {
              if ( v272 > ptr || (v233 = v272, ptr >= (void **)((char *)v272 + 24 * (unsigned int)v273)) )
              {
                sub_2237220(&v272, v274, v164, 24);
                v165 = (char *)v272;
                v163 = (unsigned int)v273;
                v166 = (const __m128i *)ptr;
              }
              else
              {
                sub_2237220(&v272, v274, v164, 24);
                v165 = (char *)v272;
                v163 = (unsigned int)v273;
                v166 = (const __m128i *)((char *)v272 + (char *)ptr - v233);
              }
            }
            else
            {
              v165 = (char *)v272;
              v166 = (const __m128i *)ptr;
            }
            v167 = (__m128i *)&v165[24 * v163];
            *v167 = _mm_loadu_si128(v166);
            v168 = v166[1].m128i_i64[0];
            LODWORD(v273) = v273 + 1;
            v167[1].m128i_i64[0] = v168;
            if ( v289[0] == &v290 )
            {
              if ( (__int64 *)v224 == ++v153 )
              {
LABEL_276:
                v11 = v238;
                goto LABEL_277;
              }
            }
            else
            {
              free(v289[0]);
              if ( (__int64 *)v224 == ++v153 )
                goto LABEL_276;
            }
            v151 = v272;
            v154 = v273;
          }
          sub_BBE5B0(v169);
          v155 = sub_BBE590(v169);
          v154 = v273;
          v156 = v215 + v155;
          v157 = *(_BYTE *)(v169 + 28) & 0x7F;
          v158 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
LABEL_225:
            v158 = (_QWORD *)*v158;
          if ( v157 == 67 )
          {
            v159 = sub_1D82950(a1, (__int64)v158, v169, (__int64)v289, v156, v154, 1u);
            goto LABEL_228;
          }
          goto LABEL_301;
        }
LABEL_277:
        v176 = v277;
        v275 = v277;
        v177 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 20LL) & 0x1FFFFFFF;
        v276 = 0x200000000LL;
        if ( v177 )
        {
          v178 = v277;
          if ( v177 > 2uLL )
          {
            sub_2237220(&v275, v277, v177, 24);
            v178 = v275;
            v176 = (char *)v275 + 24 * (unsigned int)v276;
          }
          for ( k = &v178[24 * v177]; k != v176; *((_QWORD *)v176 - 2) = 0 )
          {
            *(_QWORD *)v176 &= 0xFFFFFFFE00000000LL;
            v176 += 24;
          }
          LODWORD(v276) = v177;
        }
        v180 = 0;
        v284 = 1;
        v282[0] = v283;
        v282[1] = (void *)0x400000000LL;
        v283[24] = 0;
        v289[0] = nullptr;
        v289[1] = v272;
        v290.m128i_i64[0] = (unsigned int)v273;
        sub_1D83A10((__int64)v282, (const __m128i *)v289);
        if ( v236 )
        {
          v239 = v11;
          v181 = 0;
          v240 = v8;
          while ( 1 )
          {
            v184 = (const __m128i *)&v229[32 * v181];
            if ( (v184->m128i_i32[0] & 0x7FFFFFFF) != 0 )
            {
              sub_1D3AAD0((__m128i *)ptr, a1, v184, 0, 0, 0, *(double *)v25.m128_u64, si128);
              v289[1] = nullptr;
              v289[0] = (void *)((unsigned __int64)v289[0] & 0xFFFFFFFE00000000LL);
              v290.m128i_i64[1] = 0;
              v249.m128i_i64[0] = 0;
              *(double *)v25.m128_u64 = sub_1DD6BB0(a1, ptr, v282, v289, 0, &v249);
              if ( !v182 )
              {
                v183 = (__m128i *)((char *)v275 + 24 * v181);
                *v183 = _mm_load_si128((const __m128i *)v289);
                v183[1].m128i_i64[0] = v290.m128i_i64[0];
              }
              goto LABEL_287;
            }
            v185 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v181 + 24);
            ptr[0] = nullptr;
            ptr[1] = v275;
            v186 = _mm_load_si128((const __m128i *)ptr);
            v289[0] = &v290;
            v292 = 0;
            v293 = 1;
            v286[0] = (unsigned int)v276;
            v290 = v186;
            v291 = (unsigned int)v276;
            v289[1] = (void *)0x400000001LL;
            v187 = *(_BYTE *)(v185 + 28) & 0x7F;
            if ( v187 == 67 )
              break;
            if ( v187 == 47 )
            {
              v188 = v215 + (*(_DWORD *)(v185 + 68) & 0xFFFFF);
              v189 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
                v189 = (_QWORD *)*v189;
LABEL_306:
              v242 = v188;
              v190 = sub_1E02D80(a1, v185, v189, v289);
              v191 = 16 * (unsigned int)(unsigned __int16)v241;
              *(_WORD *)(v190 + 70) = (16 * v241) | *(_WORD *)(v190 + 70) & 0xF;
              v192 = *(_DWORD *)(v190 + 68) & 0xFFF00000 | v242 & 0xFFFFF;
              *(_DWORD *)(v190 + 68) = v192;
              goto LABEL_294;
            }
            v188 = v215 + (*(_DWORD *)(v185 + 64) & 0xFFFFF);
            v189 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
              goto LABEL_291;
LABEL_312:
            if ( v187 != 68 )
              goto LABEL_306;
            v243 = v188;
            v190 = sub_1E02D80(a1, v185, v189, v289);
            v191 = 16 * (unsigned int)(unsigned __int16)v241;
            *(_WORD *)(v190 + 66) = (16 * v241) | *(_WORD *)(v190 + 66) & 0xF;
            v192 = *(_DWORD *)(v190 + 64) & 0xFFF00000 | v243 & 0xFFFFF;
            *(_DWORD *)(v190 + 64) = v192;
LABEL_294:
            ++v241;
            sub_A80DE0((__int64)&v251, v220, v190, v191, v192, v193);
            v25 = (__m128)_mm_load_si128(&v251);
            v194 = v252;
            v195 = (char *)v275 + 24 * v181;
            *(__m128 *)v195 = v25;
            *((_QWORD *)v195 + 2) = v194;
            if ( v289[0] != &v290 )
              free(v289[0]);
LABEL_287:
            v181 = ++v180;
            if ( v236 <= (unsigned __int64)v180 )
            {
              v11 = v239;
              v8 = v240;
              goto LABEL_23;
            }
          }
          sub_BBE5B0(v185);
          v188 = v215 + sub_BBE590(v185);
          v187 = *(_BYTE *)(v185 + 28) & 0x7F;
          v189 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
LABEL_291:
            v189 = (_QWORD *)*v189;
          if ( v187 == 67 )
          {
            v190 = sub_1D82950(a1, (__int64)v189, v185, (__int64)v289, v188, v241, 1u);
            goto LABEL_294;
          }
          goto LABEL_312;
        }
LABEL_23:
        v287 = 0;
        ptr[0] = v286;
        ptr[1] = (void *)0x400000000LL;
        v288 = 1;
        v289[1] = v275;
        v289[0] = nullptr;
        v290.m128i_i64[0] = (unsigned int)v276;
        sub_1D83A10((__int64)ptr, (const __m128i *)v289);
        v38 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
          v38 = *(_QWORD *)(v38 + 8);
        if ( (*(_BYTE *)(v38 + 8) & 0x7F) == 0x3C )
        {
          LOBYTE(v250) = 0;
          sub_1DBA4B0((unsigned int)v289, a1, a3, v38, 0, 1);
          v197 = (__m128i *)v289[0];
          v198 = (char *)v289[0] + 24 * LODWORD(v289[1]);
          if ( v289[0] != v198 )
          {
            v199 = v8;
            v200 = (char *)v289[0];
            v201 = v199;
            do
            {
              v202 = *((_QWORD *)v200 + 1);
              v203 = *((_QWORD *)v200 + 2);
              v249.m128i_i64[0] = 0;
              v200 += 24;
              v249.m128i_i64[1] = v202;
              v250 = v203;
              sub_1D83A10((__int64)ptr, &v249);
            }
            while ( v198 != v200 );
            v197 = (__m128i *)v289[0];
            v8 = v201;
          }
          if ( v197 != &v290 )
            free(v197);
        }
        v39 = sub_1DF2070(a1, v237, ptr);
        if ( v39 == 1
          || (v40 = sub_1929BB0(a1, *(_QWORD *)(a1 + 608), 0, 0x13u, v39 & 0xFFFFFFFFFFFFFFFELL, v230, v25, si128, 0),
              v40 == 1) )
        {
          v230 = nullptr;
        }
        else
        {
          v230 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFELL);
        }
        if ( ptr[0] != v286 )
          free(ptr[0]);
        if ( v282[0] != v283 )
          free(v282[0]);
        if ( v275 != v277 )
          free(v275);
        if ( v272 != v274 )
          free(v272);
        v41 = (char *)v308;
        if ( !(_BYTE)v312 )
        {
          if ( (_DWORD)v309 )
          {
            v42 = 0;
            v43 = 8LL * (unsigned int)(v309 - 1) + 8;
            do
            {
              v44 = *(void ***)&v41[v42];
              if ( v44 )
              {
                if ( *v44 != v44 + 2 )
                  free(*v44);
                operator delete(v44, 0x30u);
                v41 = (char *)v308;
              }
              v42 += 8;
            }
            while ( v42 != v43 );
          }
          *((_QWORD *)v305[0] + 1410) = v311;
          LOBYTE(v312) = 1;
        }
        if ( v41 != (char *)&v310 )
          free(v41);
        if ( ((__int64)v305[1] & 1) == 0 )
          operator delete(v306.m128_u64[0], 16LL * v306.m128_u32[2], 8);
      }
    }
    v45 = *(_QWORD *)(v8 + 56);
    v46 = *(unsigned int *)(v45 + 8);
    v47 = sub_BC21A0(
            v206,
            v46,
            *(_DWORD *)(v45 + 12),
            (__int64)v269,
            (unsigned int)v270,
            *(unsigned int *)(v45 + 16),
            v230);
    v305[0] = nullptr;
    v207 = v47;
    LODWORD(v305[1]) = 0;
    v48 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL);
    v49 = (*(_BYTE *)(a3 + 29) & 2) != 0;
    if ( v48 == sub_BA57F0 )
      v209 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v8 + 48) + 16LL))(
                                 *(_QWORD *)(v8 + 48),
                                 v46,
                                 v204) >> 32;
    else
      v209 = (unsigned __int64)((__int64 (__fastcall *)(__int64, __int64, __int64))v48)(v8, v46, v204) >> 32;
    v50 = *(_DWORD *)(v8 + 24);
    v51 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL);
    if ( v51 == sub_BA57F0 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 48) + 16LL))(*(_QWORD *)(v8 + 48));
      v52 = *(_DWORD *)(*(_QWORD *)(v8 + 56) + 8LL);
    }
    else
    {
      v52 = v51(v8);
    }
    v53 = *(_QWORD *)(v11 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v11 + 56) & 4) != 0 )
      v53 = *(_QWORD *)(v53 + 32);
    v54 = sub_1D816E0(
            a1,
            v8,
            v207,
            *(_QWORD *)(v11 + 168),
            *(_QWORD *)(v11 + 176),
            v53,
            v52,
            v50,
            v209,
            v49,
            nullptr,
            0,
            (__int64)v305);
    v55 = *(_BYTE *)(v11 + 85);
    v56 = *(_QWORD *)(v54 + 48);
    v11 = v54;
    *(_BYTE *)(v56 + 85) = v55 & 3 | *(_BYTE *)(v56 + 85) & 0xFC;
    *(_QWORD *)(v56 + 184) = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF9LL | *(_QWORD *)(v56 + 184) & 1LL | 2;
  }
  if ( v278[0] != v279 )
    free(v278[0]);
  v57 = v315;
  *(_DWORD *)(a1 + 12632) = v227;
  if ( v57 != v317 )
    free(v57);
  if ( v269 != v271 )
    free(v269);
  if ( v266 != v268 )
    free(v266);
  if ( v263 != v265 )
    free(v263);
  if ( v260 != v262 )
    free(v260);
  if ( v257 != v259 )
    free(v257);
  if ( v253 != v255 )
    free(v253);
  if ( v341 != v343 )
    free(v341);
  if ( v337 != v339 )
    free(v337);
  if ( v332 != v334 )
    free(v332);
  v58 = v322;
  v59 = &v322[32 * (unsigned int)v323];
  if ( v322 != (_BYTE *)v59 )
  {
    do
    {
      v59 -= 4;
      v60 = v59[1];
      if ( v60 )
      {
        v61 = v59[2];
        if ( v61 )
        {
          if ( v60 < v61 || v60 > v61 + 14848 )
          {
            v62 = *(_QWORD **)(v60 + 528);
            v63 = &v62[8 * (unsigned __int64)*(unsigned int *)(v60 + 536)];
            if ( v62 != v63 )
            {
              do
              {
                while ( 1 )
                {
                  v63 -= 8;
                  v64 = (_QWORD *)v63[3];
                  if ( v64 == v63 + 5 )
                    break;
                  operator delete(v64);
                  if ( v62 == v63 )
                    goto LABEL_86;
                }
              }
              while ( v62 != v63 );
LABEL_86:
              v63 = *(_QWORD **)(v60 + 528);
            }
            if ( v63 != (_QWORD *)(v60 + 544) )
              free(v63);
            v65 = *(void **)(v60 + 416);
            v66 = (void **)(v60 + 416);
            if ( v65 != (void *)(v60 + 432) )
              free(v65);
            v67 = (void **)(v60 + 96);
            do
            {
              while ( 1 )
              {
                v66 -= 4;
                if ( *v66 == v66 + 2 )
                  break;
                operator delete(*v66);
                if ( v67 == v66 )
                  goto LABEL_94;
              }
            }
            while ( v67 != v66 );
LABEL_94:
            operator delete((void *)v60, 0x3A0u);
          }
          else
          {
            v173 = *(unsigned int *)(v61 + 14976);
            *(_DWORD *)(v61 + 14976) = v173 + 1;
            *(_QWORD *)(v61 + 8 * v173 + 14848) = v60;
          }
        }
      }
    }
    while ( v58 != v59 );
    v59 = v322;
  }
  if ( v59 != (_QWORD *)v324 )
    free(v59);
LABEL_99:
  sub_1DBADA0(v244);
  v68 = (char *)v298;
  if ( !(_BYTE)v302 )
  {
    v68 = (char *)v298;
    if ( (_DWORD)v299 )
    {
      v69 = 0;
      v70 = 8LL * (unsigned int)(v299 - 1) + 8;
      do
      {
        v71 = *(void ***)&v68[v69];
        if ( v71 )
        {
          if ( *v71 != v71 + 2 )
            free(*v71);
          operator delete(v71, 0x30u);
          v68 = (char *)v298;
        }
        v69 += 8;
      }
      while ( v69 != v70 );
    }
    LOBYTE(v302) = 1;
    *(_QWORD *)(v294 + 11280) = v301;
  }
  if ( v68 != (char *)&v300 )
    free(v68);
  if ( (v295 & 1) == 0 )
    operator delete(v296, 16LL * v297, 8);
  return v11;
}
