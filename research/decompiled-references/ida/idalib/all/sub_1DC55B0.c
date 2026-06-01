unsigned __int16 *__fastcall sub_1DC55B0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rsi
  _BYTE *v11; // rbp
  _DWORD *v12; // rdx
  _DWORD *i; // rbp
  _DWORD *v14; // rcx
  bool j; // al
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  _DWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  _BYTE *v28; // r13
  _QWORD *v29; // r12
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r14
  _BYTE *v33; // rbp
  int v34; // eax
  unsigned int v35; // r12d
  void *v36; // rax
  _BYTE *v37; // rdx
  const void *v38; // rsi
  int v39; // eax
  _QWORD *v40; // rbx
  int v41; // r13d
  _QWORD *v42; // rdi
  int v43; // ebx
  int v44; // ebx
  unsigned __int64 v45; // r9
  __int64 *v46; // r14
  unsigned __int8 v47; // r15
  __int64 v48; // r12
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  void *v52; // r8
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // rdi
  int v58; // ebp
  _BOOL4 v59; // r12d
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rdi
  char v68; // al
  __int64 v69; // rdi
  unsigned int v70; // ecx
  unsigned int v71; // ebp
  __int64 v72; // rbx
  __int64 v73; // r9
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rbp
  char v78; // al
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rbx
  unsigned __int64 v83; // rbx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // r9
  char v87; // dl
  __int64 v88; // rbp
  int v89; // eax
  __int64 v90; // rdx
  int v91; // ebp
  int v92; // eax
  int v93; // r12d
  unsigned __int64 v94; // rdx
  __int64 v95; // rsi
  char v96; // r13
  __int64 v97; // rax
  __int64 v98; // rsi
  unsigned int v99; // edx
  __int64 v100; // rdi
  unsigned __int64 v101; // rdi
  int v102; // eax
  unsigned __int64 v103; // r13
  __int64 v104; // r14
  int v105; // ebx
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // r14
  _BYTE *v109; // r12
  __int64 v110; // rax
  __int64 *v111; // r10
  __int64 v112; // rbp
  __int64 v113; // rdx
  __int64 *v114; // r13
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // r8
  __int64 v118; // r9
  _DWORD *v119; // rbp
  unsigned __int64 v120; // r8
  __int64 v121; // rbx
  __int64 v122; // rax
  unsigned __int64 v123; // rdx
  __int64 v124; // rbp
  _BYTE *v125; // rbx
  _BYTE *v126; // r12
  _BYTE *v127; // rdi
  int *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rbx
  __int64 v131; // rax
  _QWORD *v132; // rdx
  __int64 v133; // rcx
  int v134; // esi
  char v135; // al
  __int64 v136; // rax
  _QWORD *v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  unsigned __int16 *v142; // rbx
  _QWORD *v143; // r12
  _QWORD *v144; // rbp
  _QWORD *v145; // rdi
  size_t v147; // rbx
  void **v148; // rbp
  void *v149; // rcx
  void *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // r13
  __int64 *v155; // rbx
  unsigned __int64 v156; // rax
  __int64 v157; // r12
  char v158; // bl
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  unsigned __int64 v165; // rax
  __int64 v166; // r13
  _QWORD *v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rbx
  int v170; // ebp
  int v171; // r12d
  int v172; // eax
  _QWORD *v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rax
  unsigned __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  size_t v181; // rdx
  __int64 *v182; // rcx
  __int64 v183; // rax
  char v184; // bl
  __int64 v185; // rax
  __int64 v186; // r12
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  unsigned __int16 *v191; // r12
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // r8
  __int64 v195; // r9
  _DWORD *v196; // rdx
  unsigned __int64 v197; // rax
  _DWORD *v198; // rcx
  _DWORD *v199; // rax
  _QWORD *v200; // r13
  _QWORD *v201; // rax
  __int64 v202; // rbp
  _QWORD *v203; // rbx
  unsigned __int64 v204; // rax
  __int64 v205; // rcx
  __int64 v206; // rax
  __int64 v207; // rdx
  unsigned __int64 v208; // rsi
  __int64 v209; // rax
  unsigned int v210; // eax
  __int64 *v211; // r14
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 *k; // rbp
  __int64 v217; // rbx
  unsigned __int64 v218; // r12
  unsigned int v219; // eax
  __int64 v220; // r9
  __int64 v221; // r13
  unsigned int v222; // eax
  unsigned __int64 v223; // rax
  __int64 *v224; // rbp
  __int64 *v225; // rbx
  __int64 v226; // r12
  _DWORD *v227; // rax
  __int64 v228; // rbx
  __int64 v229; // [rsp+8h] [rbp-AE0h]
  __int64 v230; // [rsp+8h] [rbp-AE0h]
  unsigned __int64 v231; // [rsp+8h] [rbp-AE0h]
  __int64 v232; // [rsp+8h] [rbp-AE0h]
  unsigned __int64 v233; // [rsp+8h] [rbp-AE0h]
  unsigned int v234; // [rsp+8h] [rbp-AE0h]
  __int64 v235; // [rsp+8h] [rbp-AE0h]
  _DWORD *v236; // [rsp+8h] [rbp-AE0h]
  __int64 v237; // [rsp+8h] [rbp-AE0h]
  int v238; // [rsp+8h] [rbp-AE0h]
  __int64 v239; // [rsp+10h] [rbp-AD8h]
  int v240; // [rsp+10h] [rbp-AD8h]
  __int64 *v241; // [rsp+10h] [rbp-AD8h]
  __int64 v242; // [rsp+10h] [rbp-AD8h]
  __int64 v243; // [rsp+10h] [rbp-AD8h]
  __int64 v244; // [rsp+10h] [rbp-AD8h]
  __int64 v245; // [rsp+10h] [rbp-AD8h]
  __int64 v246; // [rsp+20h] [rbp-AC8h]
  __int64 *v247; // [rsp+20h] [rbp-AC8h]
  unsigned int v248; // [rsp+20h] [rbp-AC8h]
  unsigned __int64 v249; // [rsp+28h] [rbp-AC0h]
  unsigned __int64 v250; // [rsp+30h] [rbp-AB8h]
  unsigned __int64 v251; // [rsp+30h] [rbp-AB8h]
  char v252; // [rsp+30h] [rbp-AB8h]
  unsigned __int64 v253; // [rsp+30h] [rbp-AB8h]
  unsigned __int64 v254; // [rsp+30h] [rbp-AB8h]
  int v255; // [rsp+38h] [rbp-AB0h]
  void *v256; // [rsp+38h] [rbp-AB0h]
  char v257; // [rsp+38h] [rbp-AB0h]
  __int64 *v258; // [rsp+38h] [rbp-AB0h]
  int v259; // [rsp+38h] [rbp-AB0h]
  __int64 *v260; // [rsp+40h] [rbp-AA8h]
  unsigned __int64 v261; // [rsp+50h] [rbp-A98h]
  bool v262; // [rsp+5Eh] [rbp-A8Ah]
  char v263; // [rsp+5Fh] [rbp-A89h]
  _QWORD *v264; // [rsp+78h] [rbp-A70h]
  void *v265; // [rsp+80h] [rbp-A68h]
  int v266; // [rsp+88h] [rbp-A60h]
  int v267; // [rsp+8Ch] [rbp-A5Ch]
  __int64 v268; // [rsp+90h] [rbp-A58h]
  __int64 v269; // [rsp+98h] [rbp-A50h]
  __int64 v270; // [rsp+A0h] [rbp-A48h]
  _QWORD *v271; // [rsp+A8h] [rbp-A40h]
  char v272; // [rsp+B7h] [rbp-A31h] BYREF
  unsigned __int64 v273; // [rsp+B8h] [rbp-A30h] BYREF
  __int64 v274; // [rsp+C0h] [rbp-A28h] BYREF
  char v275; // [rsp+C8h] [rbp-A20h]
  __m128i v276; // [rsp+D0h] [rbp-A18h] BYREF
  unsigned __int64 v277; // [rsp+E0h] [rbp-A08h] BYREF
  __int64 v278; // [rsp+F8h] [rbp-9F0h]
  void *v279; // [rsp+110h] [rbp-9D8h] BYREF
  __m128i si128; // [rsp+118h] [rbp-9D0h]
  _DWORD v281[9]; // [rsp+128h] [rbp-9C0h] BYREF
  char v282; // [rsp+14Ch] [rbp-99Ch]
  __int128 v283; // [rsp+150h] [rbp-998h] BYREF
  __int128 v284; // [rsp+160h] [rbp-988h]
  __int64 v285; // [rsp+170h] [rbp-978h]
  __int64 v286; // [rsp+178h] [rbp-970h]
  __int64 v287; // [rsp+180h] [rbp-968h]
  __int64 v288; // [rsp+188h] [rbp-960h]
  _BYTE *v289; // [rsp+190h] [rbp-958h] BYREF
  __int64 v290; // [rsp+198h] [rbp-950h]
  _BYTE v291[352]; // [rsp+1A0h] [rbp-948h] BYREF
  void *ptr; // [rsp+300h] [rbp-7E8h] BYREF
  __int64 v293; // [rsp+308h] [rbp-7E0h]
  int v294; // [rsp+310h] [rbp-7D8h] BYREF
  _QWORD *v295; // [rsp+318h] [rbp-7D0h]
  __int64 v296; // [rsp+320h] [rbp-7C8h]
  __int128 v297; // [rsp+328h] [rbp-7C0h]
  char v298; // [rsp+338h] [rbp-7B0h]
  void *v299; // [rsp+340h] [rbp-7A8h]
  __int64 v300; // [rsp+348h] [rbp-7A0h]
  _BYTE v301[16]; // [rsp+350h] [rbp-798h] BYREF
  void *v302; // [rsp+360h] [rbp-788h]
  __int64 v303; // [rsp+368h] [rbp-780h]
  _QWORD v304[149]; // [rsp+370h] [rbp-778h] BYREF
  unsigned int v305; // [rsp+818h] [rbp-2D0h]
  void *v306; // [rsp+828h] [rbp-2C0h]
  __int64 v307; // [rsp+838h] [rbp-2B0h] BYREF
  char v308; // [rsp+8B9h] [rbp-22Fh]
  void *v309; // [rsp+8C8h] [rbp-220h]
  __int64 v310; // [rsp+8D8h] [rbp-210h] BYREF
  void *v311; // [rsp+900h] [rbp-1E8h]
  _QWORD v312[5]; // [rsp+910h] [rbp-1D8h] BYREF
  __int64 v313; // [rsp+938h] [rbp-1B0h]
  void *v314; // [rsp+980h] [rbp-168h]
  __int64 v315; // [rsp+990h] [rbp-158h] BYREF
  void *v316; // [rsp+9B0h] [rbp-138h]
  char v317; // [rsp+9C4h] [rbp-124h]
  __int64 v318; // [rsp+A08h] [rbp-E0h]
  unsigned int v319; // [rsp+A18h] [rbp-D0h]
  void *v320; // [rsp+A20h] [rbp-C8h]
  __int64 v321; // [rsp+A30h] [rbp-B8h] BYREF
  void *v322; // [rsp+A78h] [rbp-70h]
  char v323; // [rsp+A8Ch] [rbp-5Ch]

  v5 = a2;
  v289 = v291;
  v290 = 0x400000000LL;
  v6 = sub_C952A0(a2);
  v7 = v6 - sub_C95230(a2);
  v8 = v7 >> 4;
  v9 = 0;
  if ( !(v7 >> 4) )
    goto LABEL_8;
  v10 = 88 * v8;
  v229 = 88 * v8;
  if ( v7 >> 4 < (unsigned __int64)(unsigned int)v290 )
  {
    v124 = v7 >> 4;
    v125 = &v289[88 * (unsigned int)v290];
    v126 = &v289[v10];
    if ( v125 != &v289[v10] )
    {
      do
      {
        while ( 1 )
        {
          v125 -= 88;
          v127 = *((_BYTE **)v125 + 1);
          if ( v127 == v125 + 24 )
            break;
          free(v127);
          if ( v126 == v125 )
            goto LABEL_120;
        }
      }
      while ( v126 != v125 );
LABEL_120:
      LODWORD(v8) = v124;
    }
    LODWORD(v290) = v8;
    goto LABEL_8;
  }
  if ( v8 <= HIDWORD(v290) )
  {
    v11 = v289;
    goto LABEL_5;
  }
  v27 = sub_2237400(&v289, v291, v7 >> 4, 88, &ptr);
  v28 = v289;
  v8 = v7 >> 4;
  v11 = (_BYTE *)v27;
  v29 = &v289[88 * (unsigned int)v290];
  if ( v289 == (_BYTE *)v29 )
    goto LABEL_34;
  v30 = v27;
  v31 = v5;
  v32 = v27;
  v33 = &v289[88 * (unsigned int)v290];
  do
  {
    while ( 1 )
    {
      v34 = *(_DWORD *)v28;
      *(_DWORD *)(v30 + 16) = 0;
      *(_DWORD *)(v30 + 20) = 4;
      *(_DWORD *)v30 = v34;
      v35 = *((_DWORD *)v28 + 4);
      v36 = (void *)(v30 + 24);
      *(_QWORD *)(v30 + 8) = v30 + 24;
      if ( v35 )
      {
        if ( (_BYTE *)(v30 + 8) != v28 + 8 )
          break;
      }
LABEL_24:
      v28 += 88;
      v30 += 88;
      if ( v33 == v28 )
        goto LABEL_29;
    }
    v37 = *((_BYTE **)v28 + 1);
    v38 = v28 + 24;
    if ( v37 == v28 + 24 )
    {
      v181 = 16LL * v35;
      if ( v35 <= 4uLL
        || (v254 = v8,
            v245 = v31,
            sub_2237220(v30 + 8, v30 + 24, v35, 16),
            v36 = *(void **)(v30 + 8),
            v38 = *((const void **)v28 + 1),
            v31 = v245,
            v181 = 16LL * *((unsigned int *)v28 + 4),
            v8 = v254,
            v181) )
      {
        v253 = v8;
        v243 = v31;
        memcpy(v36, v38, v181);
        v8 = v253;
        v31 = v243;
      }
      *(_DWORD *)(v30 + 16) = v35;
      *((_DWORD *)v28 + 4) = 0;
      goto LABEL_24;
    }
    *(_DWORD *)(v30 + 16) = v35;
    v39 = *((_DWORD *)v28 + 5);
    v28 += 88;
    v30 += 88;
    *(_QWORD *)(v30 - 80) = v37;
    *(_DWORD *)(v30 - 68) = v39;
    *((_QWORD *)v28 - 10) = v38;
    *((_DWORD *)v28 - 17) = 0;
    *((_DWORD *)v28 - 18) = 0;
  }
  while ( v33 != v28 );
LABEL_29:
  v40 = v289;
  v11 = (_BYTE *)v32;
  v5 = v31;
  v29 = &v289[88 * (unsigned int)v290];
  if ( v289 != (_BYTE *)v29 )
  {
    v41 = v8;
    do
    {
      while ( 1 )
      {
        v29 -= 11;
        v42 = (_QWORD *)v29[1];
        if ( v42 == v29 + 3 )
          break;
        free(v42);
        if ( v29 == v40 )
          goto LABEL_33;
      }
    }
    while ( v29 != v40 );
LABEL_33:
    v29 = v289;
    LODWORD(v8) = v41;
  }
LABEL_34:
  v43 = (int)ptr;
  if ( v29 != (_QWORD *)v291 )
  {
    v240 = v8;
    free(v29);
    LODWORD(v8) = v240;
  }
  v289 = v11;
  v9 = (unsigned int)v290;
  HIDWORD(v290) = v43;
LABEL_5:
  v12 = &v11[88 * v9];
  for ( i = &v11[v229]; i != v12; *((_QWORD *)v12 - 10) = v14 )
  {
    memset(v12, 0, 0x58u);
    v14 = v12 + 6;
    v12[5] = 4;
    v12 += 22;
  }
  LODWORD(v290) = v8;
LABEL_8:
  v276.m128i_i64[0] = sub_C95050(v5);
  v250 = sub_C950C0(v5);
  if ( v250 != v276.m128i_i64[0] )
  {
    v230 = v5;
    for ( j = sub_C94FB0(v5, v276.m128i_i64[0]); ; j = sub_C94FB0(v230, v22) )
    {
      if ( j )
      {
        v23 = v276.m128i_i64[0];
        v24 = sub_C95050(v230);
        v25 = &v289[88 * ((__int64)(v23 - v24) >> 4)];
        v26 = *(_QWORD *)v276.m128i_i64[0];
        *(_QWORD *)&v283 = a1;
        *((_QWORD *)&v284 + 1) = v25;
        *((_QWORD *)&v283 + 1) = &v277;
        v277 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)&v284 = &v276;
        if ( sub_B799A0(v26 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v16 = *(_QWORD *)(v277 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v277 + 56) & 4) != 0 )
            v16 = *(_QWORD *)(v16 + 32);
          v17 = *(_QWORD *)v16;
          v293 = 0x200000000LL;
          v239 = v17;
          ptr = &v294;
          v18 = sub_B73640(v277);
          sub_1E4CA90(v18);
          LOBYTE(v273) = 0;
          v272 = 1;
          v19 = *(_DWORD *)(v239 + 20);
          v255 = (int)ptr;
          LODWORD(v239) = v293;
          LODWORD(v274) = v19;
          v20 = sub_B73640(v277);
          v21 = sub_EEC8C0(v20, (__int64)&ptr, a3);
          if ( (unsigned __int8)sub_1DDBB60(
                                  (_DWORD)a1,
                                  *(_DWORD *)(v16 + 8),
                                  v21,
                                  v255,
                                  v239,
                                  (unsigned int)&v272,
                                  (__int64)&v273,
                                  (__int64)&v274) )
          {
            v142 = (_WORD *)(&dword_0 + 1);
            if ( ptr != &v294 )
              free(ptr);
            goto LABEL_144;
          }
          if ( v272 )
          {
            v44 = 0;
            if ( (_DWORD)v274 != 1 )
            {
              v241 = a1;
              do
              {
                ++v44;
                v55 = v283;
                v56 = *v241;
                v57 = **((_QWORD **)&v283 + 1);
                v58 = *(_DWORD *)(*v241 + 12632);
                *(_DWORD *)(*v241 + 12632) = v44;
                v59 = ((*(_BYTE *)(v57 + 96) >> 5) & 3) == 1;
                v60 = sub_B73640(v57);
                v61 = sub_1DDC230(v55, v60, v59);
                if ( v61 == 1 )
                {
                  v62 = *((_QWORD *)&v284 + 1);
                  v63 = *(unsigned int *)(*((_QWORD *)&v284 + 1) + 16LL);
                  if ( v63 + 1 > (unsigned __int64)*(unsigned int *)(*((_QWORD *)&v284 + 1) + 20LL) )
                  {
                    sub_2237220(*((_QWORD *)&v284 + 1) + 8LL, *((_QWORD *)&v284 + 1) + 24LL, v63 + 1, 16);
                    v63 = *(unsigned int *)(v62 + 16);
                  }
                  v64 = (_QWORD *)(*(_QWORD *)(v62 + 8) + 16 * v63);
                  *v64 = 1;
                  v64[1] = 0;
                  ++*(_DWORD *)(v62 + 16);
                }
                else
                {
                  v45 = 0;
                  v279 = (void *)(v61 & 0xFFFFFFFFFFFFFFFELL);
                  v46 = *(__int64 **)v283;
                  v47 = (*(_BYTE *)((**(_QWORD **)v284 & 0xFFFFFFFFFFFFFFF8LL) + 96) & 0x60) != 0;
                  if ( (*(_QWORD *)(**((_QWORD **)&v283 + 1) + 40LL) & 7) == 0 )
                    v45 = *(_QWORD *)(**((_QWORD **)&v283 + 1) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                  v48 = v45;
                  v49 = sub_C94E40(*(__int64 **)v284);
                  v50 = sub_1A2D1F0(
                          v46,
                          *(_DWORD *)(*(_QWORD *)v284 + 8LL),
                          v49 == 3,
                          0,
                          0,
                          v48,
                          a3,
                          a4,
                          v47,
                          (unsigned __int16 **)&v279);
                  v51 = *((_QWORD *)&v284 + 1);
                  v52 = v279;
                  v53 = *(unsigned int *)(*((_QWORD *)&v284 + 1) + 16LL);
                  if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(*((_QWORD *)&v284 + 1) + 20LL) )
                  {
                    v261 = v50;
                    v256 = v279;
                    sub_2237220(*((_QWORD *)&v284 + 1) + 8LL, *((_QWORD *)&v284 + 1) + 24LL, v53 + 1, 16);
                    v53 = *(unsigned int *)(v51 + 16);
                    v50 = v261;
                    v52 = v256;
                  }
                  v54 = (_QWORD *)(*(_QWORD *)(v51 + 8) + 16 * v53);
                  *v54 = v52;
                  v54[1] = v50;
                  ++*(_DWORD *)(v51 + 16);
                }
                *(_DWORD *)(v56 + 12632) = v58;
              }
              while ( v44 != (_DWORD)v274 - 1 );
              a1 = v241;
            }
          }
          else
          {
            sub_1DDC5F0(&v283, *(unsigned int *)(v16 + 8), (unsigned int)v274);
            *v25 = *(_DWORD *)(v16 + 8);
          }
          if ( ptr != &v294 )
            free(ptr);
        }
        else
        {
          sub_1DDC5F0(&v283, 0, 0);
        }
      }
      v22 = (_QWORD *)(v276.m128i_i64[0] + 16);
      v276.m128i_i64[0] = (__int64)v22;
      if ( v22 == (_QWORD *)v250 )
        break;
    }
    v5 = v230;
  }
  v65 = sub_15F1F10(*a1);
  v66 = *a1;
  v275 = 1;
  v242 = v65;
  v274 = v66;
  v67 = *(_QWORD *)(v66 + 544);
  v68 = *(_BYTE *)(v67 + 8) & 0x7F;
  if ( v68 == 2 )
  {
    do
    {
      while ( 1 )
      {
        v69 = *(_QWORD *)(sub_B8C1B0(v67) + 16);
        if ( (v69 & 4) != 0 )
          break;
        v67 = v69 & 0xFFFFFFFFFFFFFFF8LL;
        v68 = *(_BYTE *)(v67 + 8) & 0x7F;
        if ( v68 != 2 )
          goto LABEL_54;
      }
      v67 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF8LL);
      v68 = *(_BYTE *)(v67 + 8) & 0x7F;
    }
    while ( v68 == 2 );
LABEL_54:
    v66 = *a1;
  }
  v70 = *(_DWORD *)(*(_QWORD *)(v66 + 4616) + 640LL * *(unsigned int *)(v66 + 4624) - 640);
  if ( v70 - 3 > 2 && v70 > 1 && !*(_BYTE *)(v66 + 2440)
    || v68 != 24
    && v68
    && ((v100 = *(_QWORD *)(sub_B8C1B0(v67) + 16), (v100 & 4) != 0)
      ? (v101 = *(_QWORD *)(v100 & 0xFFFFFFFFFFFFFFF8LL))
      : (v101 = v100 & 0xFFFFFFFFFFFFFFF8LL),
        (unsigned __int8)sub_B8E180(v101)) )
  {
    v71 = 0;
  }
  else
  {
    v71 = 2;
  }
  v72 = sub_C95330(v5);
  v264 = (_QWORD *)sub_1A2CF40(*a1, *(_QWORD *)(v5 + 16), 0, v71, (*(_BYTE *)(v5 + 2) >> 3) & 3, v73);
  ptr = v264;
  v271 = a1 + 4;
  sub_1DC2D70(a1, a1 + 4, v72, (__int64 *)&ptr, 1);
  v74 = *(_QWORD *)(v5 + 16);
  v75 = sub_1A2D760(*a1, v74, (__int64)v264);
  v76 = *a1;
  v265 = (void *)v75;
  v77 = v75;
  v78 = sub_C953E0(v5, v74);
  sub_1A2D040(
    v76,
    v242,
    v77,
    *(_QWORD *)(v5 + 16),
    (*(_BYTE *)(v5 + 2) >> 3) & 3,
    *(_DWORD *)(v5 + 24),
    (*(_QWORD *)v5 & 0x200000LL) != 0,
    v78);
  v79 = *a1;
  v80 = v77 + 72;
  if ( !v77 )
    v80 = 0;
  v81 = *(_QWORD *)(v79 + 9944);
  v269 = *a1;
  v270 = *(_QWORD *)(*a1 + 544);
  v82 = *(_QWORD *)(v79 + 512);
  *(_QWORD *)(v79 + 512) = 0;
  v278 = v81;
  *(_QWORD *)(v79 + 544) = v80;
  v268 = v82;
  LODWORD(v82) = *(_DWORD *)(v79 + 80);
  *(_DWORD *)(v79 + 80) = *(_DWORD *)(v79 + 40);
  v267 = v82;
  LODWORD(v82) = *(_DWORD *)(v79 + 2632);
  *(_DWORD *)(v79 + 2632) = *(_DWORD *)(v79 + 3688);
  v266 = v82;
  v83 = sub_C95050(v5);
  v251 = sub_C950C0(v5);
  if ( v83 == v251 || (v84 = *(_QWORD *)v83, (*(_QWORD *)v83 & 1) != 0) )
  {
    v262 = 0;
    goto LABEL_126;
  }
  v263 = 0;
  v246 = v5;
  while ( 2 )
  {
    if ( (v84 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( (v84 & 4) != 0 )
      {
        v85 = sub_15F1540(*a1, 0);
        if ( v85 )
        {
          v87 = *(_BYTE *)(v85 + 8);
          v85 -= 64LL;
          if ( (v87 & 0x7Fu) - 59 >= 3 )
            v85 = 0;
        }
        sub_19A2CD0((__int64)&ptr, *a1, v85, 0, 1, v86);
        v88 = *a1;
        v89 = sub_C94E40((__int64 *)v83);
        sub_19B4460(v88, (const __m128i *)*(unsigned int *)(v83 + 8), (*(_DWORD *)v83 & 1) == 0, 1u, nullptr, v89 == 1);
        sub_19A2DA0((__int64 *)&ptr);
      }
      goto LABEL_69;
    }
    v262 = sub_C94FB0(v246, (_QWORD *)v83);
    if ( !v262 )
    {
      v90 = *(_QWORD *)v83;
      v91 = 0;
      if ( (*(_QWORD *)v83 & 1) == 0 )
      {
        v91 = 1;
        v102 = sub_C94E40((__int64 *)v83);
        v90 = *(_QWORD *)v83;
        if ( v102 != 2 )
          v91 = 2;
      }
      v92 = *(_DWORD *)(v83 + 12);
      v93 = 0;
      v94 = v90 & 0xFFFFFFFFFFFFFFF8LL;
      v95 = *(unsigned int *)(v83 + 8);
      if ( v92 )
      {
        LODWORD(v293) = *(_DWORD *)(v83 + 8);
        ptr = (void *)(v94 | 4);
        v276.m128i_i8[0] = 0;
        LOBYTE(v279) = 0;
        LODWORD(v283) = 0;
        v96 = sub_1DDBB60(
                (_DWORD)a1,
                v92,
                *(_DWORD *)(v83 + 8),
                (unsigned int)&ptr,
                1,
                (unsigned int)&v276,
                (__int64)&v279,
                (__int64)&v283);
        if ( !v96 )
        {
          if ( !v276.m128i_i8[0] )
          {
            v93 = *(_DWORD *)(v83 + 12);
            v95 = *(unsigned int *)(v83 + 8);
            v94 = *(_QWORD *)v83 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_78;
          }
          v231 = *(_QWORD *)v83 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (_DWORD)v283 == 1 )
          {
LABEL_101:
            v96 = v263;
          }
          else
          {
            v257 = v276.m128i_i8[0];
            v103 = v83;
            while ( 1 )
            {
              while ( 1 )
              {
                v104 = *a1;
                ++v93;
                v105 = *(_DWORD *)(*a1 + 12632);
                *(_DWORD *)(*a1 + 12632) = v93;
                v106 = sub_1DD8310(a1, *(unsigned int *)(v103 + 8), v231);
                if ( !v106 )
                  break;
                sub_1905D90(*a1, v106, *(_DWORD *)(v103 + 8), v91, 0);
                *(_DWORD *)(v104 + 12632) = v105;
                if ( v93 == (_DWORD)v283 - 1 )
                {
                  v83 = v103;
                  goto LABEL_101;
                }
              }
              *(_DWORD *)(v104 + 12632) = v105;
              if ( (_DWORD)v283 - 1 == v93 )
                break;
              v263 = v257;
            }
            v83 = v103;
            v96 = v257;
          }
        }
        v263 = v96;
LABEL_69:
        v83 += 16LL;
        if ( v251 == v83 )
          goto LABEL_84;
      }
      else
      {
LABEL_78:
        v97 = sub_1DD8310(a1, v95, v94);
        v98 = v97;
        if ( !v97 || *(char *)(v97 + 28) < 0 )
        {
          v263 = 1;
          goto LABEL_69;
        }
        if ( (*(_BYTE *)(v97 + 28) & 0x7Fu) - 40 <= 6 && !*(_DWORD *)(v83 + 12) )
          *(_BYTE *)(v242 + 1465) |= sub_B799A0(v97);
        v99 = *(_DWORD *)(v83 + 8);
        v83 += 16LL;
        sub_1905D90(*a1, v98, v99, v91, v93);
        if ( v251 == v83 )
        {
LABEL_84:
          v5 = v246;
          v262 = v263;
          goto LABEL_126;
        }
      }
      v84 = *(_QWORD *)v83;
      if ( (*(_QWORD *)v83 & 1) != 0 )
        goto LABEL_84;
      continue;
    }
    break;
  }
  v107 = sub_C95050(v246);
  v108 = *(_QWORD *)v83 & 0xFFFFFFFFFFFFFFF8LL;
  v109 = &v289[88 * ((__int64)(v83 - v107) >> 4)];
  v293 = 0x400000000LL;
  v110 = *((unsigned int *)v109 + 4);
  ptr = &v294;
  v111 = *((__int64 **)v109 + 1);
  v260 = &v111[2 * v110];
  if ( v111 == v260 )
  {
    v182 = (__int64 *)&v294;
  }
  else
  {
    v112 = *v111;
    v113 = v111[1];
    if ( *v111 == 1 || (v113 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v5 = v246;
      goto LABEL_126;
    }
    v114 = v111 + 2;
    v258 = (__int64 *)v83;
    while ( 1 )
    {
      v119 = (_DWORD *)(v112 & 0xFFFFFFFFFFFFFFFELL);
      v120 = *(_QWORD *)(v108 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v108 + 40) & 7) != 0 )
        v120 = 0;
      v121 = sub_1A2D600(
               *a1,
               *(_DWORD *)(v108 + 24),
               v113,
               *(_DWORD *)v109,
               v120,
               (*(_BYTE *)(v108 + 96) >> 5) & 3,
               (__int64)v119,
               *(_QWORD *)(*a1 + 544));
      if ( !v121 )
      {
LABEL_123:
        v5 = v246;
        v128 = (int *)ptr;
        goto LABEL_124;
      }
      v122 = (unsigned int)v293;
      v123 = (unsigned int)v293 + 1LL;
      if ( v123 > HIDWORD(v293) )
      {
        sub_2237220(&ptr, &v294, v123, 8);
        v122 = (unsigned int)v293;
      }
      *((_QWORD *)ptr + v122) = v121;
      v115 = *a1;
      LODWORD(v293) = v293 + 1;
      v232 = v115;
      v116 = sub_C94E40(v258);
      sub_1A31240(v232, v242, v121, v116 == 3, v117, v118);
      if ( !*(_DWORD *)v109 )
        *(_BYTE *)(v242 + 1465) |= (*v119 & 0x4000) != 0;
      if ( v260 == v114 )
        break;
      v112 = *v114;
      v113 = v114[1];
      if ( *v114 != 1 )
      {
        v114 += 2;
        if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          continue;
      }
      goto LABEL_123;
    }
    v83 = (unsigned __int64)v258;
    v182 = (__int64 *)ptr;
  }
  if ( !v263 )
  {
    sub_1DC2D70(a1, v271, v108, v182, (unsigned int)v293);
    if ( ptr != &v294 )
      free(ptr);
    goto LABEL_69;
  }
  v128 = (int *)v182;
  v5 = v246;
LABEL_124:
  if ( v128 != &v294 )
    free(v128);
LABEL_126:
  sub_1A2D100(*a1, v242);
  v129 = sub_C95360(v5);
  v130 = v129;
  if ( !v129 )
  {
    *(_QWORD *)(v242 + 1656) = 0;
    goto LABEL_135;
  }
  if ( (*(_DWORD *)(v129 + 20) & 0x1FFFFFFF) == 0 )
  {
    *(_QWORD *)(v242 + 1656) = v129;
LABEL_154:
    sub_1A2D830(*a1, (__int64)v265, (__int64)v264, v130);
    *(_BYTE *)(v242 + 1465) |= sub_BBD670(v130);
    goto LABEL_135;
  }
  v131 = *(_QWORD *)(*(_QWORD *)(v129 + 24) + 16LL);
  v132 = (_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v131 & 4) != 0 )
    v132 = (_QWORD *)*v132;
  v133 = a1[4];
  ptr = (void *)*a1;
  v134 = *((_DWORD *)ptr + 3158);
  v293 = (__int64)ptr;
  v299 = v301;
  v300 = 0x100000000LL;
  v303 = 0x100000000LL;
  v135 = *((_BYTE *)a1 + 56);
  v294 = v134;
  v295 = v132;
  v296 = v133;
  v297 = 0;
  v302 = v304;
  v298 = v135;
  v130 = sub_1E48E00(&ptr, v130);
  if ( v302 != v304 )
    free(v302);
  if ( v299 != v301 )
    free(v299);
  *(_DWORD *)(v293 + 12632) = v294;
  *(_QWORD *)(v242 + 1656) = v130;
  if ( v130 )
    goto LABEL_154;
LABEL_135:
  v281[8] = 0;
  v282 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v279 = v281;
  v136 = *(_QWORD *)(sub_C95340(v5) + 56);
  v137 = (_QWORD *)(v136 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v136 & 4) != 0 )
    v137 = (_QWORD *)v137[4];
  v138 = sub_1DCE820(a1, &v279, *v137, v137 + 1);
  if ( (v138 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v142 = (_WORD *)(&dword_0 + 1);
    if ( v279 != v281 && v279 )
      operator delete[](v279);
    if ( v270 )
    {
      *(_QWORD *)(v269 + 544) = v270;
      *(_QWORD *)(v269 + 512) = v268;
      *(_QWORD *)(v269 + 9944) = v278;
      *(_DWORD *)(v269 + 80) = v267;
      *(_DWORD *)(v269 + 2632) = v266;
    }
    goto LABEL_143;
  }
  *(_BYTE *)(v242 + 1465) |= *(_BYTE *)(*(_QWORD *)(v138 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
  v147 = si128.m128i_i64[0] - si128.m128i_i64[1];
  v148 = (void **)sub_A81BC0(*(_QWORD **)(*a1 + 248), v138, si128.m128i_i32[0] - si128.m128i_i32[2], v139, v140, v141);
  v149 = memcpy(v148 + 1, (char *)v279 + si128.m128i_i64[1], v147);
  v150 = *v148;
  v293 = (__int64)v149;
  ptr = v150;
  v233 = sub_BF48A0((__int64 *)&ptr);
  v152 = v151;
  v153 = *(_QWORD *)(sub_C95340(v5) + 56);
  if ( (v153 & 4) != 0 )
  {
    v276 = _mm_loadu_si128((const __m128i *)((v153 & 0xFFFFFFFFFFFFFFF8LL) + 40));
  }
  else
  {
    a4 = (__m128)_mm_loadu_si128(&xmmword_23DED40);
    v276 = (__m128i)a4;
  }
  v154 = *a1;
  if ( !v276.m128i_i32[2] )
    v276.m128i_i32[2] = *(_DWORD *)(v154 + 12632);
  v155 = (__int64 *)(v152 + 16);
  v156 = 0;
  v157 = (*(_QWORD *)v5 >> 22) & 1LL;
  if ( *(_BYTE *)(v233 + 16) != 25 )
    v156 = *(unsigned __int16 *)(v233 + 22);
  v247 = v155;
  v249 = v156;
  v252 = *(_BYTE *)(sub_C95340(v5) + 81) >> 5;
  v158 = *(_BYTE *)(sub_C95340(v5) + 84);
  v234 = *(_DWORD *)(sub_C95340(v5) + 64);
  v159 = sub_C95340(v5);
  sub_1A2D870(
    v154,
    (__int64)v265,
    *(_DWORD *)(v159 + 24),
    v234,
    (__int64)&v276,
    (__int64)v148,
    v158 & 3,
    v252,
    v247,
    v249,
    v157);
  v160 = sub_C95340(v5);
  sub_1E40A90(*a1, a1[4], v160, v265, 0, 0);
  ptr = v265;
  v161 = sub_C95340(v5);
  sub_1DC2D70(a1, v271, v161, (__int64 *)&ptr, 1);
  v164 = v264[2];
  if ( (v164 & 4) != 0 )
    v165 = *(_QWORD *)(v164 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v165 = v164 & 0xFFFFFFFFFFFFFFF8LL;
  v166 = *a1;
  v167 = *(_QWORD **)(*a1 + 9944);
  v168 = *(_QWORD *)(*a1 + 512);
  *(_QWORD *)(v166 + 512) = 0;
  v169 = *(_QWORD *)(v166 + 544);
  v295 = v167;
  v170 = *(_DWORD *)(v166 + 80);
  *(_QWORD *)(v166 + 544) = v165;
  v171 = *(_DWORD *)(v166 + 2632);
  v235 = v168;
  *(_DWORD *)(v166 + 80) = *(_DWORD *)(v166 + 40);
  v172 = *(_DWORD *)(v166 + 3688);
  *(_QWORD *)(v166 + 9944) = 0;
  *(_DWORD *)(v166 + 2632) = v172;
  v283 = 0;
  v284 = 0;
  sub_1A2FD60(*a1, (__int64)v264, (__int64)v265, v168, v162, v163, 0, 0, 0, 0);
  if ( v169 )
  {
    *(_QWORD *)(v166 + 544) = v169;
    *(_QWORD *)(v166 + 512) = v235;
    v173 = v295;
    *(_DWORD *)(v166 + 80) = v170;
    *(_QWORD *)(v166 + 9944) = v173;
    *(_DWORD *)(v166 + 2632) = v171;
  }
  v174 = *a1;
  v175 = sub_C95340(v5);
  sub_18C7FE0(v174, 6, v175);
  v284 = 0;
  v285 = 0;
  LODWORD(v286) = 0;
  v287 = 0;
  v288 = 0;
  LODWORD(v283) = 5;
  WORD2(v283) = 0;
  v176 = sub_C94E80(v5);
  DWORD2(v283) = sub_EEB7E0(v176, 6, 0.0);
  sub_1DBA9B0(*a1, 6, v177, v178, v179, v180, v283, SDWORD2(v283));
  if ( v262 )
  {
    sub_1DBAAE0(*a1);
    v275 = 0;
    goto LABEL_167;
  }
  v183 = sub_C94E80(v5);
  v184 = *((_BYTE *)a1 + 56);
  *((_BYTE *)a1 + 56) = 1;
  v185 = sub_1DF6720(a1, v183, 0);
  *((_BYTE *)a1 + 56) = v184;
  v186 = v185;
  sub_1DBAAE0(*a1);
  v275 = 0;
  if ( v186 != 1 )
  {
    v191 = (unsigned __int16 *)(v186 & 0xFFFFFFFFFFFFFFFELL);
    sub_17595E0((__int64)&ptr, v242, v187, v188, v189, v190);
    sub_17EEDE0(*a1, (__int64)v265, v191, (unsigned __int16 *)((char *)&dword_0 + 1), v192, v193, (__m128i)0LL);
    if ( v270 )
    {
      *(_QWORD *)(v269 + 544) = v270;
      *(_QWORD *)(v269 + 512) = v268;
      *(_QWORD *)(v269 + 9944) = v278;
      *(_DWORD *)(v269 + 80) = v267;
      *(_DWORD *)(v269 + 2632) = v266;
    }
    v196 = *(_DWORD **)(*a1 + 11312);
    v197 = (unsigned __int64)*(unsigned int *)(*a1 + 11320) << 6;
    v198 = (_DWORD *)((char *)v196 + v197);
    if ( v196 == (_DWORD *)((char *)v196 + v197) )
      goto LABEL_205;
    if ( *(v198 - 16) == 26 )
    {
LABEL_199:
      v200 = *((_QWORD **)v198 - 6);
      v236 = v198;
      v201 = (_QWORD *)sub_BC3640(v200);
      v202 = *((_QWORD *)v236 - 4);
      v203 = (_QWORD *)(*v201 & 0xFFFFFFFFFFFFFFF8LL);
      v237 = (unsigned int)*(v236 - 6);
      if ( v203 )
      {
        while ( 1 )
        {
          v204 = *(_QWORD *)sub_BC3640(v203) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v204 )
            break;
          v203 = (_QWORD *)v204;
        }
      }
      else
      {
        v203 = v200;
      }
      if ( !v200 || !(unsigned __int8)sub_1DB8AC0(v313, (__int64)v203) )
        goto LABEL_205;
      if ( (unsigned int)sub_B8D390((__int64)v200) < *(_DWORD *)(a1[4] + 8) )
      {
        v228 = v202 + 24 * v237;
        if ( v228 == v202 )
          goto LABEL_205;
        while ( !sub_F1D530(v202) )
        {
          v202 += 24;
          if ( v228 == v202 )
            goto LABEL_205;
        }
      }
      v205 = 1;
    }
    else
    {
      v199 = v198 - 16;
      while ( 1 )
      {
        v198 = v199;
        if ( v196 == v199 )
          break;
        v199 -= 16;
        if ( *v199 == 26 )
          goto LABEL_199;
      }
LABEL_205:
      v205 = 0;
      v206 = *(_QWORD *)(v312[4] + 128LL);
      if ( v206 && (*(_BYTE *)(v206 + 10) & 0x20) != 0 )
        v205 = *(_BYTE *)(v206 + 104) & 3;
    }
    v207 = v264[16];
    v208 = (unsigned __int64)v264;
    *(_BYTE *)(v207 + 104) = v205 | *(_BYTE *)(v207 + 104) & 0xFC;
    v209 = *a1;
    v264[6] = 0;
    sub_A7AA70(*(_QWORD *)(v209 + 248), (__int64)v264, v207, v205, v194, v195);
    v259 = sub_EEC140((unsigned __int64)v191);
    v210 = *(_DWORD *)(v5 + 16);
    v211 = *(__int64 **)(v313 + 120);
    v248 = v210;
    for ( k = &v211[(unsigned int)sub_B76070(v313, (__int64)v264, v212, v213)]; k != v211; ++v211 )
    {
      v217 = *v211;
      if ( sub_B74820(*v211) )
      {
        v218 = sub_B74810(v217);
        v219 = sub_EEB7E0(v218, v208, 0.0);
        v208 = v219;
        if ( (unsigned __int8)sub_1DC3F20(*a1, v219, v217, a1[4], 0, (__m128)0LL, a4) )
        {
          v220 = *(_QWORD *)(v218 + 8);
          v221 = *a1;
          v273 = v218;
          v244 = v220;
          v238 = sub_EEC140(v218);
          v222 = sub_EEB7E0(v218, v208, 0.0);
          v208 = v222;
          v223 = sub_18C4330(v221, v222, v238, &v273, 1, v244);
          if ( v223 > 1 )
          {
            v208 = v223 & 0xFFFFFFFFFFFFFFFELL;
            sub_B74780(v217, v223 & 0xFFFFFFFFFFFFFFFELL);
          }
        }
      }
    }
    v224 = *(__int64 **)(v313 + 120);
    v225 = &v224[(unsigned int)sub_B76070(v313, v208, v214, v215)];
    if ( v224 == v225 )
    {
LABEL_222:
      v142 = sub_1A33A60(*a1, (__m128)0LL, a4, v248, v259, (__int64)&ptr);
      ptr = &off_2BC6440;
      if ( !v323 )
        free(v322);
      if ( v320 != &v321 )
        free(v320);
      operator delete(v318, 12LL * v319, 4);
      if ( !v317 )
        free(v316);
      if ( v314 != &v315 )
        free(v314);
      if ( v311 != v312 )
        free(v311);
      ptr = &off_2BC63C0;
      if ( v309 != &v310 )
        free(v309);
      if ( v306 != &v307 )
        free(v306);
      operator delete(v304[147], 16LL * v305, 8);
      sub_15ED760((__int64)&ptr);
      goto LABEL_170;
    }
    while ( 2 )
    {
      v226 = *v224;
      v227 = (_DWORD *)sub_B73640(*v224);
      if ( v227 )
      {
LABEL_217:
        v308 |= (*v227 & 0x4000) != 0;
      }
      else if ( (*(_BYTE *)(v226 + 97) & 6) == 4 )
      {
        v227 = (_DWORD *)sub_B74810(v226);
        goto LABEL_217;
      }
      if ( v225 == ++v224 )
        goto LABEL_222;
      continue;
    }
  }
LABEL_167:
  if ( v270 )
  {
    *(_QWORD *)(v269 + 544) = v270;
    *(_QWORD *)(v269 + 512) = v268;
    *(_QWORD *)(v269 + 9944) = v278;
    *(_DWORD *)(v269 + 80) = v267;
    *(_DWORD *)(v269 + 2632) = v266;
  }
  v142 = (_WORD *)(&dword_0 + 1);
  sub_1A2F720(*a1, (__m128)0LL, a4, *(unsigned int *)(v5 + 16), 0, 1);
LABEL_170:
  if ( v279 != v281 && v279 )
    operator delete[](v279);
LABEL_143:
  sub_146B590((__int64)&v274);
LABEL_144:
  v143 = v289;
  v144 = &v289[88 * (unsigned int)v290];
  if ( v289 != (_BYTE *)v144 )
  {
    do
    {
      while ( 1 )
      {
        v144 -= 11;
        v145 = (_QWORD *)v144[1];
        if ( v145 == v144 + 3 )
          break;
        free(v145);
        if ( v143 == v144 )
          goto LABEL_147;
      }
    }
    while ( v143 != v144 );
LABEL_147:
    v144 = v289;
  }
  if ( v144 != (_QWORD *)v291 )
    free(v144);
  return v142;
}
