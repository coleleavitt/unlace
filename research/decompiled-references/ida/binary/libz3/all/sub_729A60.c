__int64 __fastcall sub_729A60(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __m128i *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __m128i si128; // xmm0
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rdx
  __m128i *v20; // rcx
  __int64 v21; // rax
  __m128i *v22; // rdi
  __m128i *n; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rsi
  bool v28; // zf
  _QWORD *v29; // rax
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r11
  const __m128i *v36; // r9
  __m128i *v37; // rsi
  __m128i *v38; // rax
  __m128i *i; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  char v42; // al
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rcx
  unsigned int v46; // r15d
  int v47; // esi
  __int64 v48; // rax
  __m128i *v49; // rdi
  __m128i *v50; // rax
  __m128i *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdx
  __int64 *v57; // r13
  unsigned __int64 v58; // r15
  __int64 v59; // rsi
  __int64 *v60; // rbx
  unsigned __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 result; // rax
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __m128i *v67; // rax
  __m128i *v68; // r8
  __m128i *v69; // rdx
  __m128i *v70; // rax
  unsigned int v71; // eax
  const __m128i *v72; // r15
  __m128i *m; // rax
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rcx
  __int64 v79; // r15
  int v80; // esi
  __int64 v81; // rax
  __m128i *v82; // rdi
  __m128i *j; // rax
  __int64 v84; // rdx
  unsigned int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned int *v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // r15
  _DWORD *v91; // rcx
  unsigned int v92; // eax
  __int64 v93; // rdx
  int v94; // eax
  _QWORD *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r15
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned int v100; // eax
  __int64 v101; // rdx
  unsigned int *v102; // rsi
  __int64 v103; // rdx
  unsigned int v104; // r8d
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rdx
  int v108; // r15d
  __int64 v109; // rax
  __int64 v110; // r15
  _QWORD *v111; // rbp
  unsigned int v112; // edx
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rdi
  unsigned __int64 v117; // rcx
  __int64 *v118; // r15
  __int64 v119; // rsi
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 *v122; // rax
  unsigned int v123; // r8d
  __int64 v124; // r15
  unsigned int v125; // eax
  __int64 v126; // rdx
  _QWORD *v127; // rcx
  __int64 v128; // rdx
  _QWORD *v129; // rcx
  __int64 v130; // r15
  unsigned int v131; // eax
  unsigned int v132; // ecx
  unsigned int v133; // edx
  __int64 v134; // rdx
  char v135; // al
  __int64 v136; // rax
  int v137; // r8d
  unsigned int v138; // eax
  __int64 v139; // rax
  _QWORD *v140; // rax
  unsigned int v141; // eax
  unsigned int v142; // eax
  __int64 v143; // rdx
  unsigned int v144; // r15d
  unsigned int v145; // edx
  unsigned int *v146; // rax
  __int64 v147; // rdx
  unsigned int v148; // edx
  unsigned int v149; // ecx
  _QWORD *v150; // rax
  unsigned int v151; // r15d
  unsigned int v152; // edx
  unsigned int *v153; // rax
  unsigned int v154; // r15d
  unsigned int v155; // edx
  unsigned int *v156; // rax
  _DWORD *v157; // rcx
  unsigned int v158; // edx
  unsigned int v159; // ecx
  unsigned int v160; // edx
  unsigned int v161; // ecx
  unsigned int *v162; // rax
  unsigned int v163; // edx
  unsigned int v164; // ecx
  unsigned int *v165; // rax
  _QWORD *v166; // rbp
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  char **v170; // r15
  __int64 v171; // rdx
  char **v172; // r15
  __int64 v173; // rdx
  char **v174; // r15
  __int64 v175; // rdx
  char **v176; // r15
  __int64 v177; // rdx
  char **v178; // r15
  __int64 v179; // rdx
  char **v180; // r15
  __int64 v181; // rdx
  char **exception; // r15
  __int64 v183; // rdx
  char **v184; // r15
  __int64 v185; // rdx
  _QWORD *v186; // [rsp+8h] [rbp-180h]
  __int64 v187; // [rsp+10h] [rbp-178h]
  _QWORD *v188; // [rsp+18h] [rbp-170h]
  _QWORD *v189; // [rsp+20h] [rbp-168h]
  int v191; // [rsp+28h] [rbp-160h]
  int v192; // [rsp+28h] [rbp-160h]
  __int64 v193; // [rsp+30h] [rbp-158h]
  _QWORD *v194; // [rsp+30h] [rbp-158h]
  __int64 v195; // [rsp+38h] [rbp-150h]
  __int64 v196; // [rsp+40h] [rbp-148h]
  __int64 v197; // [rsp+40h] [rbp-148h]
  __int64 v198; // [rsp+48h] [rbp-140h]
  __int64 v199; // [rsp+48h] [rbp-140h]
  __int64 v200; // [rsp+50h] [rbp-138h]
  unsigned __int64 v201; // [rsp+58h] [rbp-130h]
  unsigned int v202; // [rsp+58h] [rbp-130h]
  __int64 v203; // [rsp+58h] [rbp-130h]
  int v204; // [rsp+60h] [rbp-128h]
  __int64 v205; // [rsp+60h] [rbp-128h]
  unsigned int v206; // [rsp+68h] [rbp-120h]
  int v207; // [rsp+6Ch] [rbp-11Ch]
  __int64 v208; // [rsp+70h] [rbp-118h]
  unsigned int v209; // [rsp+80h] [rbp-108h]
  __int64 v210; // [rsp+80h] [rbp-108h]
  __int64 v211; // [rsp+80h] [rbp-108h]
  __int64 v212; // [rsp+80h] [rbp-108h]
  __int64 v213; // [rsp+80h] [rbp-108h]
  __int64 v214; // [rsp+80h] [rbp-108h]
  unsigned int v215; // [rsp+80h] [rbp-108h]
  __int64 v216; // [rsp+80h] [rbp-108h]
  unsigned int v217; // [rsp+88h] [rbp-100h]
  __int32 v218; // [rsp+8Ch] [rbp-FCh]
  __int64 v219; // [rsp+90h] [rbp-F8h]
  char v220; // [rsp+98h] [rbp-F0h]
  const __m128i *v221; // [rsp+98h] [rbp-F0h]
  __m128i *v222; // [rsp+98h] [rbp-F0h]
  __int64 v223; // [rsp+98h] [rbp-F0h]
  __int64 v224; // [rsp+98h] [rbp-F0h]
  __int64 v225; // [rsp+98h] [rbp-F0h]
  __int64 v226; // [rsp+98h] [rbp-F0h]
  __int64 v227; // [rsp+98h] [rbp-F0h]
  __int64 v228; // [rsp+98h] [rbp-F0h]
  __int64 v229; // [rsp+98h] [rbp-F0h]
  __int64 v230; // [rsp+98h] [rbp-F0h]
  __int64 v231; // [rsp+A0h] [rbp-E8h]
  __int64 v232; // [rsp+A0h] [rbp-E8h]
  __m128i *v233; // [rsp+A0h] [rbp-E8h]
  int v234; // [rsp+A0h] [rbp-E8h]
  const __m128i *v235; // [rsp+A0h] [rbp-E8h]
  __int64 v236; // [rsp+A0h] [rbp-E8h]
  int v237; // [rsp+A0h] [rbp-E8h]
  const __m128i *v238; // [rsp+A0h] [rbp-E8h]
  __int64 v239; // [rsp+A0h] [rbp-E8h]
  __int64 v240; // [rsp+A0h] [rbp-E8h]
  const __m128i *v241; // [rsp+A0h] [rbp-E8h]
  const __m128i *v242; // [rsp+A0h] [rbp-E8h]
  __int64 *k; // [rsp+A0h] [rbp-E8h]
  unsigned int v244; // [rsp+A0h] [rbp-E8h]
  __int64 v245; // [rsp+A0h] [rbp-E8h]
  __int64 v246; // [rsp+A0h] [rbp-E8h]
  __int64 v247; // [rsp+A8h] [rbp-E0h]
  __int64 v248; // [rsp+A8h] [rbp-E0h]
  __int64 v249; // [rsp+A8h] [rbp-E0h]
  __int64 v250; // [rsp+A8h] [rbp-E0h]
  unsigned int v251; // [rsp+A8h] [rbp-E0h]
  __int64 v252; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v253; // [rsp+A8h] [rbp-E0h]
  __int64 v254; // [rsp+A8h] [rbp-E0h]
  int v255; // [rsp+A8h] [rbp-E0h]
  __int64 v256; // [rsp+A8h] [rbp-E0h]
  unsigned int v257; // [rsp+A8h] [rbp-E0h]
  __int64 v258; // [rsp+A8h] [rbp-E0h]
  int v259; // [rsp+A8h] [rbp-E0h]
  __int64 v260; // [rsp+A8h] [rbp-E0h]
  __int64 v261; // [rsp+A8h] [rbp-E0h]
  __int64 v262; // [rsp+A8h] [rbp-E0h]
  __int64 v263; // [rsp+A8h] [rbp-E0h]
  __int64 v264; // [rsp+A8h] [rbp-E0h]
  __int64 v265; // [rsp+A8h] [rbp-E0h]
  __int8 *v266; // [rsp+B0h] [rbp-D8h]
  const __m128i *v267; // [rsp+B0h] [rbp-D8h]
  const __m128i *v268; // [rsp+B0h] [rbp-D8h]
  const __m128i *v269; // [rsp+B0h] [rbp-D8h]
  const __m128i *v270; // [rsp+B0h] [rbp-D8h]
  __int64 v271; // [rsp+B0h] [rbp-D8h]
  const __m128i *v272; // [rsp+B0h] [rbp-D8h]
  __int64 v273; // [rsp+B0h] [rbp-D8h]
  __int64 v274; // [rsp+B0h] [rbp-D8h]
  int v275; // [rsp+B0h] [rbp-D8h]
  int v276; // [rsp+B0h] [rbp-D8h]
  const __m128i *v277; // [rsp+B0h] [rbp-D8h]
  int v278; // [rsp+B0h] [rbp-D8h]
  int v279; // [rsp+B0h] [rbp-D8h]
  unsigned int v280; // [rsp+B8h] [rbp-D0h]
  __int64 v281; // [rsp+B8h] [rbp-D0h]
  __int64 v282; // [rsp+B8h] [rbp-D0h]
  const __m128i *v283; // [rsp+B8h] [rbp-D0h]
  __int64 v284; // [rsp+B8h] [rbp-D0h]
  const __m128i *v285; // [rsp+B8h] [rbp-D0h]
  const __m128i *v286; // [rsp+B8h] [rbp-D0h]
  __int64 v287; // [rsp+B8h] [rbp-D0h]
  __int64 v288; // [rsp+B8h] [rbp-D0h]
  __int64 v289; // [rsp+B8h] [rbp-D0h]
  __int64 v290; // [rsp+B8h] [rbp-D0h]
  __int64 v291; // [rsp+B8h] [rbp-D0h]
  __int64 v292; // [rsp+C0h] [rbp-C8h]
  unsigned int v293; // [rsp+C0h] [rbp-C8h]
  const __m128i *v294; // [rsp+C0h] [rbp-C8h]
  const __m128i *v295; // [rsp+C0h] [rbp-C8h]
  const __m128i *v296; // [rsp+C0h] [rbp-C8h]
  const __m128i *v297; // [rsp+C0h] [rbp-C8h]
  unsigned int v298; // [rsp+C8h] [rbp-C0h]
  char v299; // [rsp+CCh] [rbp-BCh]
  unsigned int v300; // [rsp+CCh] [rbp-BCh]
  unsigned int v301; // [rsp+CCh] [rbp-BCh]
  unsigned int v302; // [rsp+DCh] [rbp-ACh] BYREF
  __int64 v303; // [rsp+E0h] [rbp-A8h]
  __int64 v304; // [rsp+E8h] [rbp-A0h]
  __int64 v305; // [rsp+F0h] [rbp-98h]
  __int64 v306; // [rsp+100h] [rbp-88h]
  __int64 v307[2]; // [rsp+110h] [rbp-78h] BYREF
  __int64 v308; // [rsp+120h] [rbp-68h] BYREF
  __int64 v309; // [rsp+128h] [rbp-60h]
  __int64 v310[11]; // [rsp+130h] [rbp-58h] BYREF

  v200 = *(_QWORD *)(a1 + 16);
  v303 = v200;
  v304 = 0;
  v305 = v200;
  v3 = sub_186B270(0x100u);
  *(_QWORD *)v3 = 0;
  v4 = (__m128i *)v3;
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 168) = 0;
  *(_DWORD *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 200) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_DWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_OWORD *)(v3 + 24) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 120) = 0;
  *(_OWORD *)(v3 + 152) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  *(_OWORD *)(v3 + 216) = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v302 = 1;
  v187 = v5;
  v6 = *(_QWORD *)(v5 + 840);
  v306 = v5;
  sub_729200(v307, a1, &v302, v6);
  v7 = v307[0];
  v208 = v307[1];
  if ( v307[0] )
    ++*(_DWORD *)(v307[0] + 8);
  v8 = (_QWORD *)sub_186B270(0x18u);
  v8[1] = v7;
  v189 = v8 + 1;
  *v8 = 0x100000002LL;
  v9 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  sub_15E1B70(v10);
  v11 = sub_15E1A70(v10);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v195 = a1 + 792;
  sub_8E3610(a1 + 792);
  v13 = sub_186B270(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6670);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = v9;
  *(__m128i *)v13 = si128;
  v186 = (_QWORD *)(v13 + 8);
  v15 = (_QWORD *)sub_186B270(0x18u);
  v15[1] = v7;
  *v15 = 0x100000002LL;
  v188 = v15 + 1;
  sub_8E36C0(a1 + 792);
  v16 = nullptr;
  v198 = 0;
  v204 = 0;
  v207 = 0;
  v206 = 8;
  v217 = 0;
  while ( 2 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    if ( !*((_DWORD *)v186 - 1) || (v220 = sub_18290A0(v17), v17 = *(_QWORD *)(a1 + 16), !v220) )
    {
      v193 = v7;
      goto LABEL_10;
    }
    v308 = 0;
    v309 = v17;
    if ( v16 )
    {
      v25 = v16;
      v26 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
      if ( (unsigned __int64)v16 < v26 )
      {
        do
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( *v25 )
            {
              v28 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v28 )
                break;
            }
            if ( (unsigned __int64)++v25 >= v26 )
              goto LABEL_27;
          }
          v201 = v26;
          v194 = v25;
          sub_15D7BC0(v187, v27);
          v26 = v201;
          v25 = v194 + 1;
        }
        while ( (unsigned __int64)(v194 + 1) < v201 );
      }
LABEL_27:
      *((_DWORD *)v16 - 1) = 0;
    }
    v29 = &v186[3 * (unsigned int)(*((_DWORD *)v186 - 1) - 1)];
    v30 = v29[2];
    v209 = *((_DWORD *)v29 + 1);
    v219 = *v29;
    v218 = *((_DWORD *)v29 + 2);
    v31 = 0xFFFFFFFFLL;
    if ( v188 )
      v31 = (unsigned int)(*((_DWORD *)v188 - 1) - 1);
    v32 = v188[v31];
    v193 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    if ( v7 )
    {
      v28 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v28 )
      {
        v203 = v30;
        sub_15D7BC0(v208, v7);
        v30 = v203;
      }
    }
    v33 = *(_DWORD *)(v30 + 12);
    v202 = v206 - 1;
    v34 = 32LL * (v33 & (v206 - 1));
    v35 = 32LL * v206;
    v36 = (__m128i *)((char *)v4 + v35);
    v37 = &v4[(unsigned __int64)v34 / 0x10];
    v38 = &v4[(unsigned __int64)v34 / 0x10];
    if ( v34 == v35 )
    {
LABEL_36:
      if ( v4 != v37 )
      {
        for ( i = v4; v37 != i; i += 2 )
        {
          v40 = i->m128i_i64[0];
          if ( i->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v40 + 12) == v33 && v30 == v40 )
              goto LABEL_132;
          }
          else if ( !v40 )
          {
            break;
          }
        }
      }
      v41 = *(_QWORD *)(a1 + 16);
      if ( v30 != *(_QWORD *)(v41 + 856) )
        goto LABEL_44;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v56 = v38->m128i_i64[0];
      if ( v38->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v56 + 12) == v33 && v30 == v56 )
        goto LABEL_132;
LABEL_76:
      v38 += 2;
      if ( v36 == v38 )
        goto LABEL_36;
    }
    if ( v56 )
      goto LABEL_76;
    v41 = *(_QWORD *)(a1 + 16);
    if ( v30 == *(_QWORD *)(v41 + 856) )
      goto LABEL_47;
LABEL_44:
    if ( v30 == *(_QWORD *)(v41 + 864) )
      goto LABEL_47;
    v266 = &v4->m128i_i8[v35];
    v231 = v30;
    v42 = sub_15D2CB0(v41, v30);
    v30 = v231;
    v35 = 32LL * v206;
    v36 = (const __m128i *)v266;
    if ( !v42 )
      goto LABEL_46;
    v281 = *(_QWORD *)(a1 + 16);
    sub_8E36C0(v195);
    sub_8E3610(v195);
    v108 = sub_8E3730(v195, 0, 0);
    sub_8E36D0(v195);
    v30 = v231;
    v35 = 32LL * v206;
    v36 = (const __m128i *)v266;
    if ( v108 == -1 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL);
      if ( v45 )
      {
        v115 = v308;
        ++*(_DWORD *)(v45 + 8);
        if ( !v115 || (v116 = v309, v28 = *(_DWORD *)(v115 + 8) == 1, --*(_DWORD *)(v115 + 8), !v28) )
        {
          v308 = v45;
          goto LABEL_51;
        }
      }
      else
      {
        v115 = v308;
        if ( !v308 || (v116 = v309, v28 = *(_DWORD *)(v308 + 8) == 1, --*(_DWORD *)(v308 + 8), !v28) )
        {
          v308 = 0;
          goto LABEL_69;
        }
      }
      v258 = v45;
      sub_15D7BC0(v116, v115);
      v45 = v258;
      v30 = v231;
      v35 = 32LL * v206;
      v36 = (const __m128i *)v266;
      v308 = v258;
      goto LABEL_133;
    }
    sub_8E36C0(v195);
    v109 = sub_15E1A70(*(_QWORD *)(a1 + 16));
    v110 = v109;
    if ( v109 )
      ++*(_DWORD *)(v109 + 8);
    v249 = v231;
    sub_8E3610(v195);
    v237 = sub_8E3730(v195, 0, 0);
    sub_8E36D0(v195);
    v30 = v249;
    v35 = 32LL * v206;
    v36 = (const __m128i *)v266;
    if ( v237 == -1 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL);
      if ( v45 )
      {
        v120 = v308;
        ++*(_DWORD *)(v45 + 8);
        if ( !v120 )
        {
          v308 = v45;
          if ( !v110 )
            goto LABEL_51;
          v28 = (*(_DWORD *)(v110 + 8))-- == 1;
          if ( !v28 )
            goto LABEL_51;
          goto LABEL_246;
        }
      }
      else
      {
        v120 = v308;
        if ( !v308 )
        {
          v308 = 0;
          if ( !v110 )
            goto LABEL_69;
          v28 = (*(_DWORD *)(v110 + 8))-- == 1;
          if ( !v28 )
            goto LABEL_69;
          goto LABEL_246;
        }
      }
      v121 = v309;
      v28 = (*(_DWORD *)(v120 + 8))-- == 1;
      if ( v28 )
      {
        v260 = v45;
        v216 = v30;
        sub_15D7BC0(v121, v120);
        v45 = v260;
        v36 = (const __m128i *)v266;
        v35 = 32LL * v206;
        v30 = v216;
      }
      v308 = v45;
      if ( !v110 )
        goto LABEL_133;
      v28 = (*(_DWORD *)(v110 + 8))-- == 1;
      if ( !v28 )
        goto LABEL_133;
LABEL_246:
      v242 = v36;
      v226 = v35;
      v214 = v30;
      sub_15D7BC0(v281, v110);
      v45 = v308;
      v30 = v214;
      v35 = v226;
      v36 = v242;
      goto LABEL_133;
    }
    if ( v110 )
    {
      v28 = (*(_DWORD *)(v110 + 8))-- == 1;
      if ( v28 )
      {
        sub_15D7BC0(v281, v110);
        v30 = v249;
        v35 = 32LL * v206;
        v36 = (const __m128i *)v266;
      }
    }
LABEL_46:
    if ( !*(_WORD *)(v30 + 4) )
    {
      v298 = *(_DWORD *)(v30 + 24);
      if ( v198 )
      {
        v234 = *(_DWORD *)(v198 + 8);
        *(_DWORD *)(v198 + 8) = v234 - 1;
        if ( v234 == 1 )
        {
          v269 = v36;
          v252 = v35;
          v240 = v30;
          sub_15D7BC0(v187, v198);
          v36 = v269;
          v35 = v252;
          v30 = v240;
        }
      }
      if ( v298 )
      {
        v78 = 0;
        v299 = 0;
        do
        {
          v79 = *(_QWORD *)(v30 + 8 * v78 + 32);
          v80 = *(_DWORD *)(v79 + 12);
          v81 = 32LL * (v80 & v202);
          v82 = &v4[(unsigned __int64)v81 / 0x10];
          if ( v35 == v81 )
          {
LABEL_205:
            if ( v4 != v82 )
            {
              for ( j = v4; v82 != j; j += 2 )
              {
                v103 = j->m128i_i64[0];
                if ( j->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v103 + 12) == v80 && v79 == v103 )
                    goto LABEL_197;
                }
                else if ( !v103 )
                {
                  break;
                }
              }
            }
LABEL_175:
            ++*(_DWORD *)(v79 + 8);
            if ( v16 )
            {
              v85 = *((_DWORD *)v16 - 1);
              if ( v85 == *((_DWORD *)v16 - 2) )
              {
                v104 = (3 * v85 + 1) >> 1;
                v105 = 8 * v104 + 8;
                if ( 8 * v85 + 8 >= (unsigned int)v105 || v85 >= v104 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B006(v310, "Overflow encountered when expanding vector", v183);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v310);
                  sub_233E40((__int64)v310);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v292 = v78;
                v280 = (3 * v85 + 1) >> 1;
                v267 = v36;
                v248 = v35;
                v236 = v30;
                v106 = (unsigned int *)sub_186B300(v16 - 1, v105);
                v107 = v106[1];
                v16 = v106 + 2;
                v30 = v236;
                v35 = v248;
                *v106 = v280;
                v88 = &v106[2 * v107 + 2];
                v36 = v267;
                v78 = v292;
                v87 = (unsigned int)(v107 + 1);
              }
              else
              {
                v86 = v85;
                v87 = v85 + 1;
                v88 = (unsigned int *)&v16[v86];
              }
            }
            else
            {
              v282 = v78;
              v268 = v36;
              v250 = v35;
              v239 = v30;
              v111 = (_QWORD *)sub_186B270(0x18u);
              *v111 = 2;
              v30 = v239;
              v87 = 1;
              v16 = v111 + 1;
              v35 = v250;
              v36 = v268;
              v78 = v282;
              v88 = (unsigned int *)v16;
            }
            *(_QWORD *)v88 = v79;
            *((_DWORD *)v16 - 1) = v87;
            goto LABEL_179;
          }
          j = &v4[(unsigned __int64)v81 / 0x10];
          while ( 1 )
          {
            v84 = j->m128i_i64[0];
            if ( j->m128i_i64[0] > 1uLL )
              break;
            if ( !v84 )
              goto LABEL_175;
LABEL_172:
            j += 2;
            if ( v36 == j )
              goto LABEL_205;
          }
          if ( *(_DWORD *)(v84 + 12) != v80 || v79 != v84 )
            goto LABEL_172;
LABEL_197:
          v197 = j[1].m128i_i64[1];
          if ( v209 != j->m128i_i32[2] || j[1].m128i_i32[0] != (_DWORD)v78 )
            goto LABEL_175;
          if ( v197 )
            ++*(_DWORD *)(v197 + 8);
          if ( v16 )
          {
            v100 = *((_DWORD *)v16 - 1);
            if ( v100 == *((_DWORD *)v16 - 2) )
            {
              v144 = (3 * v100 + 1) >> 1;
              v145 = 8 * v144 + 8;
              if ( 8 * v100 + 8 >= v145 || v100 >= v144 )
              {
                v184 = (char **)__cxa_allocate_exception(0x28u);
                sub_10B006(v310, "Overflow encountered when expanding vector", v185);
                *v184 = (char *)off_1C63128;
                sub_2333C0(v184 + 1, v310);
                sub_233E40((__int64)v310);
                __cxa_throw(v184, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v284 = v78;
              v272 = v36;
              v256 = v35;
              v245 = v30;
              v146 = (unsigned int *)sub_186B300(v16 - 1, v145);
              v147 = v146[1];
              v16 = v146 + 2;
              *v146 = v144;
              v30 = v245;
              v35 = v256;
              v36 = v272;
              v102 = &v146[2 * v147 + 2];
              v78 = v284;
              v87 = (unsigned int)(v147 + 1);
            }
            else
            {
              v101 = v100;
              v87 = v100 + 1;
              v102 = (unsigned int *)&v16[v101];
            }
          }
          else
          {
            v289 = v78;
            v277 = v36;
            v263 = v35;
            v246 = v30;
            v166 = (_QWORD *)sub_186B270(0x18u);
            *v166 = 2;
            v30 = v246;
            v87 = 1;
            v16 = v166 + 1;
            v35 = v263;
            v36 = v277;
            v78 = v289;
            v102 = (unsigned int *)v16;
          }
          *(_QWORD *)v102 = v197;
          *((_DWORD *)v16 - 1) = v87;
          v299 = v220;
LABEL_179:
          ++v78;
        }
        while ( v298 != v78 );
        v198 = 0;
        if ( v299 )
        {
LABEL_181:
          v89 = a1 + 816;
          goto LABEL_182;
        }
        v117 = (unsigned __int64)&v16[v87];
        if ( (unsigned __int64)v16 >= v117 )
        {
          *((_DWORD *)v16 - 1) = 0;
          goto LABEL_248;
        }
LABEL_235:
        v118 = v16;
        do
        {
          v119 = *v118;
          if ( *v118 )
          {
            v28 = (*(_DWORD *)(v119 + 8))-- == 1;
            if ( v28 )
            {
              v253 = v117;
              v241 = v36;
              v225 = v35;
              v199 = v30;
              sub_15D7BC0(v187, v119);
              v30 = v199;
              v35 = v225;
              v36 = v241;
              v117 = v253;
            }
          }
          ++v118;
        }
        while ( (unsigned __int64)v118 < v117 );
        *((_DWORD *)v16 - 1) = 0;
        if ( v298 )
        {
LABEL_248:
          v198 = 0;
          v122 = (__int64 *)(v30 + 32);
          v123 = 0;
          for ( k = (__int64 *)(v30 + 32); ; v122 = k )
          {
            v124 = *v122;
            if ( !v198 )
              goto LABEL_265;
            do
            {
              if ( v124 )
                ++*(_DWORD *)(v124 + 8);
              v125 = *((_DWORD *)v16 - 1);
              if ( v125 == *((_DWORD *)v16 - 2) )
              {
                v148 = (3 * v125 + 1) >> 1;
                v149 = 8 * v148 + 8;
                if ( 8 * v125 + 8 >= v149 || v125 >= v148 )
                {
LABEL_319:
                  v172 = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B006(v310, "Overflow encountered when expanding vector", v173);
                  *v172 = (char *)off_1C63128;
                  sub_2333C0(v172 + 1, v310);
                  sub_233E40((__int64)v310);
                  __cxa_throw(v172, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v293 = (3 * v125 + 1) >> 1;
                v285 = v36;
                v273 = v35;
                v257 = v123;
                v229 = v30;
                v87 = sub_186B300(v16 - 1, v149);
                v16 = (_QWORD *)(v87 + 8);
                v30 = v229;
                v123 = v257;
                v35 = v273;
                *(_DWORD *)v87 = v293;
                v36 = v285;
                LODWORD(v87) = *(_DWORD *)(v87 + 4);
                v127 = &v16[(unsigned int)v87];
                LODWORD(v87) = v87 + 1;
              }
              else
              {
                v126 = v125;
                LODWORD(v87) = v125 + 1;
                v127 = &v16[v126];
              }
              *v127 = v124;
              ++v123;
              *((_DWORD *)v16 - 1) = v87;
              if ( v123 >= v298 )
                goto LABEL_181;
              if ( v198 )
              {
                while ( 1 )
                {
                  v130 = *(_QWORD *)(v30 + 8LL * v123 + 32);
                  if ( v130 )
                    ++*(_DWORD *)(v130 + 8);
                  v131 = *((_DWORD *)v16 - 1);
                  if ( v131 == *((_DWORD *)v16 - 2) )
                  {
                    v270 = v36;
                    v132 = (3 * v131 + 1) >> 1;
                    v254 = v35;
                    v133 = 8 * v132 + 8;
                    v244 = v123;
                    v227 = v30;
                    if ( 8 * v131 + 8 >= v133 )
                      goto LABEL_319;
                    v215 = (3 * v131 + 1) >> 1;
                    if ( v131 >= v132 )
                      goto LABEL_319;
                    v87 = sub_186B300(v16 - 1, v133);
                    v134 = *(unsigned int *)(v87 + 4);
                    v16 = (_QWORD *)(v87 + 8);
                    v30 = v227;
                    v123 = v244;
                    *(_DWORD *)v87 = v215;
                    v35 = v254;
                    v129 = (_QWORD *)(v87 + 8 + 8 * v134);
                    v36 = v270;
                    LODWORD(v87) = v134 + 1;
                  }
                  else
                  {
                    v128 = v131;
                    LODWORD(v87) = v131 + 1;
                    v129 = &v16[v128];
                  }
                  *v129 = v130;
                  ++v123;
                  *((_DWORD *)v16 - 1) = v87;
                  if ( v123 >= v298 )
                    goto LABEL_181;
                }
              }
              v124 = *++k;
LABEL_265:
              v283 = v36;
              v271 = v35;
              v255 = v123;
              v228 = v30;
              v135 = sub_15D26C0(*(_QWORD *)(a1 + 16), v124);
              v30 = v228;
              v198 = 0;
              v123 = v255;
              v35 = v271;
              v36 = v283;
            }
            while ( v135 );
            v136 = sub_15D1F10(v124);
            sub_729200(v310, a1, &v302, v136);
            v30 = v228;
            v137 = v255;
            v35 = v271;
            v198 = v310[0];
            v36 = v283;
            if ( v310[0] )
              ++*(_DWORD *)(v310[0] + 8);
            if ( v189 )
            {
              v138 = *((_DWORD *)v189 - 1);
              if ( v138 == *((_DWORD *)v189 - 2) )
              {
                v163 = (3 * v138 + 1) >> 1;
                v164 = 8 * v163 + 8;
                if ( 8 * v138 + 8 >= v164 || v138 >= v163 )
                {
                  v180 = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B006(v310, "Overflow encountered when expanding vector", v181);
                  *v180 = (char *)off_1C63128;
                  sub_2333C0(v180 + 1, v310);
                  sub_233E40((__int64)v310);
                  __cxa_throw(v180, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v301 = (3 * v138 + 1) >> 1;
                v165 = (unsigned int *)sub_186B300(v189 - 1, v164);
                v30 = v228;
                v189 = v165 + 2;
                v137 = v255;
                *v165 = v301;
                v35 = v271;
                v138 = v165[1];
                v36 = v283;
              }
            }
            else
            {
              v168 = (_QWORD *)sub_186B270(0x18u);
              *v168 = 2;
              v30 = v228;
              v189 = v168 + 1;
              v137 = v255;
              v138 = 0;
              v35 = v271;
              v36 = v283;
            }
            ++v217;
            v189[v138] = v198;
            *((_DWORD *)v189 - 1) = v138 + 1;
            if ( v186 )
            {
              v139 = *((unsigned int *)v186 - 1);
              if ( (_DWORD)v139 == *((_DWORD *)v186 - 2) )
              {
                v158 = 3 * v139 + 1;
                v159 = v158 & 0xFFFFFFFE;
                v160 = v158 >> 1;
                v161 = 8 * (v160 + v159) + 8;
                if ( 24 * (int)v139 + 8 >= v161 || (unsigned int)v139 >= v160 )
                {
                  v176 = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B006(v310, "Overflow encountered when expanding vector", v177);
                  *v176 = (char *)off_1C63128;
                  sub_2333C0(v176 + 1, v310);
                  sub_233E40((__int64)v310);
                  __cxa_throw(v176, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v300 = v160;
                v295 = v36;
                v288 = v35;
                v276 = v137;
                v262 = v30;
                v162 = (unsigned int *)sub_186B300(v186 - 1, v161);
                v30 = v262;
                v186 = v162 + 2;
                v137 = v276;
                *v162 = v300;
                v35 = v288;
                v139 = v162[1];
                v36 = v295;
              }
            }
            else
            {
              v296 = v36;
              v290 = v35;
              v278 = v137;
              v264 = v30;
              v167 = (_QWORD *)sub_186B270(0x38u);
              *v167 = 2;
              v30 = v264;
              v186 = v167 + 1;
              v137 = v278;
              v139 = 0;
              v35 = v290;
              v36 = v296;
            }
            v140 = &v186[3 * v139];
            *((_DWORD *)v140 + 2) = v137;
            v140[2] = v124;
            *v140 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v209), _mm_cvtsi32_si128(v217)).m128i_u64[0];
            ++*((_DWORD *)v186 - 1);
            if ( v188 )
            {
              v141 = *((_DWORD *)v188 - 1);
              if ( v141 == *((_DWORD *)v188 - 2) )
              {
                v154 = (3 * v141 + 1) >> 1;
                v155 = 8 * v154 + 8;
                if ( 8 * v141 + 8 >= v155 || v141 >= v154 )
                {
                  v174 = (char **)__cxa_allocate_exception(0x28u);
                  sub_10B006(v310, "Overflow encountered when expanding vector", v175);
                  *v174 = (char *)off_1C63128;
                  sub_2333C0(v174 + 1, v310);
                  sub_233E40((__int64)v310);
                  __cxa_throw(v174, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v294 = v36;
                v287 = v35;
                v275 = v137;
                v261 = v30;
                v156 = (unsigned int *)sub_186B300(v188 - 1, v155);
                v157 = v156 + 2;
                *v156 = v154;
                v30 = v261;
                v141 = v156[1];
                v188 = v157;
                v137 = v275;
                v35 = v287;
                v36 = v294;
              }
            }
            else
            {
              v297 = v36;
              v291 = v35;
              v279 = v137;
              v265 = v30;
              v169 = (_QWORD *)sub_186B270(0x18u);
              *v169 = 2;
              v30 = v265;
              v188 = v169 + 1;
              v137 = v279;
              v141 = 0;
              v35 = v291;
              v36 = v297;
            }
            v188[v141] = v198;
            *((_DWORD *)v188 - 1) = v141 + 1;
            if ( v198 )
              ++*(_DWORD *)(v198 + 8);
            v142 = *((_DWORD *)v16 - 1);
            if ( v142 == *((_DWORD *)v16 - 2) )
            {
              v151 = (3 * v142 + 1) >> 1;
              v152 = 8 * v151 + 8;
              if ( 8 * v142 + 8 >= v152 || v142 >= v151 )
              {
                v178 = (char **)__cxa_allocate_exception(0x28u);
                sub_10B006(v310, "Overflow encountered when expanding vector", v179);
                *v178 = (char *)off_1C63128;
                sub_2333C0(v178 + 1, v310);
                sub_233E40((__int64)v310);
                __cxa_throw(v178, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v286 = v36;
              v274 = v35;
              v259 = v137;
              v230 = v30;
              v153 = (unsigned int *)sub_186B300(v16 - 1, v152);
              *v153 = v151;
              v16 = v153 + 2;
              v30 = v230;
              v142 = v153[1];
              v137 = v259;
              v35 = v274;
              v36 = v286;
            }
            v143 = v142;
            v123 = v137 + 1;
            LODWORD(v87) = v142 + 1;
            v16[v143] = v198;
            *((_DWORD *)v16 - 1) = v87;
            if ( v123 >= v298 )
              goto LABEL_181;
            ++k;
          }
        }
      }
      else
      {
        if ( !v16 )
        {
          v198 = 0;
          v89 = a1 + 816;
          LODWORD(v87) = 0;
LABEL_182:
          v235 = v36;
          v223 = v35;
          v212 = v30;
          sub_1447B20(v89, *(_QWORD *)(v30 + 16), (unsigned int)v87, v16, &v308);
          v90 = v308;
          v30 = v212;
          v35 = v223;
          v36 = v235;
          if ( v308 )
            ++*(_DWORD *)(v308 + 8);
          v91 = v189;
          if ( v189 )
          {
            v92 = *((_DWORD *)v189 - 1);
            if ( v92 == *((_DWORD *)v189 - 2) )
            {
              v112 = (3 * v92 + 1) >> 1;
              v113 = 8 * v112 + 8;
              if ( 8 * v92 + 8 >= v113 || v92 >= v112 )
              {
                v170 = (char **)__cxa_allocate_exception(0x28u);
                sub_10B006(v310, "Overflow encountered when expanding vector", v171);
                *v170 = (char *)off_1C63128;
                sub_2333C0(v170 + 1, v310);
                sub_233E40((__int64)v310);
                __cxa_throw(v170, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v251 = (3 * v92 + 1) >> 1;
              v114 = (unsigned int *)sub_186B300(v189 - 1, v113);
              v91 = v114 + 2;
              v30 = v212;
              v189 = v114 + 2;
              v35 = v223;
              *v114 = v251;
              v36 = v235;
              LODWORD(v114) = v114[1];
              v95 = &v91[2 * (unsigned int)v114];
              v94 = (_DWORD)v114 + 1;
            }
            else
            {
              v93 = v92;
              v94 = v92 + 1;
              v95 = &v189[v93];
            }
          }
          else
          {
            v150 = (_QWORD *)sub_186B270(0x18u);
            *v150 = 2;
            v30 = v212;
            v189 = v150 + 1;
            v95 = v150 + 1;
            v35 = v223;
            v94 = 1;
            v36 = v235;
            v91 = v189;
          }
          *v95 = v90;
          *(v91 - 1) = v94;
          if ( v198 )
          {
            sub_8E36C0(v195);
            v96 = sub_15E1B70(*(_QWORD *)(a1 + 16));
            v97 = v96;
            if ( v96 )
              ++*(_DWORD *)(v96 + 8);
            if ( v12 )
            {
              v28 = (*(_DWORD *)(v12 + 8))-- == 1;
              if ( v28 )
                sub_15D7BC0(v200, v12);
            }
            sub_8E3610(v195);
            v98 = v308;
            if ( v308 )
            {
              v99 = v309;
              v28 = (*(_DWORD *)(v308 + 8))-- == 1;
              if ( v28 )
                sub_15D7BC0(v99, v98);
            }
            v12 = v97;
            goto LABEL_72;
          }
LABEL_132:
          v45 = v308;
LABEL_133:
          if ( v45 )
            goto LABEL_51;
          goto LABEL_69;
        }
        v117 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
        if ( (unsigned __int64)v16 < v117 )
          goto LABEL_235;
        *((_DWORD *)v16 - 1) = 0;
      }
      v89 = a1 + 816;
      LODWORD(v87) = 0;
      v198 = 0;
      goto LABEL_182;
    }
LABEL_47:
    v43 = v308;
    ++*(_DWORD *)(v30 + 8);
    if ( v43 )
    {
      v44 = v309;
      v28 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v28 )
      {
        v238 = v36;
        v224 = v35;
        v213 = v30;
        sub_15D7BC0(v44, v43);
        v30 = v213;
        v35 = v224;
        v36 = v238;
      }
    }
    v308 = v30;
    v45 = v30;
LABEL_51:
    v46 = 2 * v206;
    if ( 3 * v206 < 4 * (v207 + v204) )
    {
      v232 = v45;
      v221 = v36;
      v210 = v30;
      v206 *= 2;
      v67 = (__m128i *)sub_186B270(32LL * v46);
      v35 = 32LL * v46;
      v68 = v67;
      v30 = v210;
      v45 = v232;
      v69 = (__m128i *)((char *)v67 + v35);
      if ( v46 )
      {
        do
        {
          v67->m128i_i64[0] = 0;
          v67 += 2;
          v67[-2].m128i_i64[1] = 0;
          v67[-1].m128i_i32[0] = 0;
        }
        while ( v67 != v69 );
        v70 = v68;
        if ( (((_BYTE)v69 - (_BYTE)v68) & 0x20) == 0 || (v70 = v68 + 2, v68[1].m128i_i64[1] = 0, &v68[2] != v69) )
        {
          do
          {
            v70[1].m128i_i64[1] = 0;
            v70 += 4;
            v70[-1].m128i_i64[1] = 0;
          }
          while ( v70 != v69 );
        }
      }
      v71 = v46 - 1;
      v72 = v4;
      v202 = v71;
      for ( m = (__m128i *)((char *)v68 + v35); v221 != v72; v76[1] = _mm_loadu_si128(v72 - 1) )
      {
        while ( v72->m128i_i64[0] <= 1uLL )
        {
          v72 += 2;
          if ( v221 == v72 )
            goto LABEL_153;
        }
        v74 = 32LL * (*(_DWORD *)(v72->m128i_i64[0] + 12) & v202);
        v75 = &v68[(unsigned __int64)v74 / 0x10];
        if ( v35 == v74 )
        {
LABEL_156:
          if ( v68 == v75 )
          {
LABEL_161:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v76 = v68;
          while ( v76->m128i_i64[0] )
          {
            v76 += 2;
            if ( v75 == v76 )
              goto LABEL_161;
          }
        }
        else
        {
          v76 = &v68[(unsigned __int64)v74 / 0x10];
          while ( v76->m128i_i64[0] )
          {
            v76 += 2;
            if ( m == v76 )
              goto LABEL_156;
          }
        }
        v77 = _mm_loadu_si128(v72);
        v72 += 2;
        *v76 = v77;
      }
LABEL_153:
      if ( v4 )
      {
        v247 = v232;
        v233 = (__m128i *)((char *)v68 + v35);
        v222 = v68;
        v211 = v35;
        v205 = v30;
        sub_186B220(v4);
        v45 = v247;
        m = v233;
        v68 = v222;
        v35 = v211;
        v30 = v205;
      }
      v204 = 0;
      v36 = m;
      v4 = v68;
    }
    v47 = *(_DWORD *)(v30 + 12);
    v48 = 32LL * (v47 & v202);
    v49 = &v4[(unsigned __int64)v48 / 0x10];
    if ( v48 == v35 )
    {
      v51 = nullptr;
LABEL_60:
      if ( v4 != v49 )
      {
        v50 = v4;
        do
        {
          while ( 1 )
          {
            v53 = v50->m128i_i64[0];
            if ( v50->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v53 + 12) == v47 && v30 == v53 )
              goto LABEL_162;
            v50 += 2;
            if ( v49 == v50 )
              goto LABEL_68;
          }
          if ( !v53 )
            goto LABEL_135;
          v51 = v50;
          v50 += 2;
        }
        while ( v49 != v50 );
      }
LABEL_68:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v50 = &v4[(unsigned __int64)v48 / 0x10];
    v51 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v52 = v50->m128i_i64[0];
        if ( v50->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v52 + 12) == v47 && v30 == v52 )
        {
LABEL_162:
          v50->m128i_i64[0] = v30;
          v50->m128i_i64[1] = v219;
          v50[1].m128i_i64[1] = v45;
          v50[1].m128i_i32[0] = v218;
          goto LABEL_69;
        }
        v50 += 2;
        if ( v50 == v36 )
          goto LABEL_60;
      }
      if ( !v52 )
        break;
      v51 = v50;
      v50 += 2;
      if ( v50 == v36 )
        goto LABEL_60;
    }
LABEL_135:
    if ( v51 )
      --v204;
    else
      v51 = v50;
    v51->m128i_i64[0] = v30;
    v51->m128i_i64[1] = v219;
    v51[1].m128i_i64[1] = v45;
    v51[1].m128i_i32[0] = v218;
    ++v207;
LABEL_69:
    --*((_DWORD *)v186 - 1);
    --*((_DWORD *)v188 - 1);
    sub_8E36D0(v195);
    v54 = v308;
    if ( !v308 )
      goto LABEL_73;
    v55 = v309;
    v28 = (*(_DWORD *)(v308 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v55, v54);
LABEL_72:
    if ( v186 )
    {
LABEL_73:
      v7 = v193;
      continue;
    }
    break;
  }
  v17 = *(_QWORD *)(a1 + 16);
LABEL_10:
  if ( !(unsigned __int8)sub_18290A0(v17) )
  {
    if ( !v193 )
      goto LABEL_84;
    goto LABEL_82;
  }
  v18 = *(_DWORD *)(v9 + 12);
  v19 = 32LL * v206;
  v20 = &v4[(unsigned __int64)v19 / 0x10];
  v21 = 32LL * (v18 & (v206 - 1));
  v22 = &v4[(unsigned __int64)v21 / 0x10];
  if ( v21 == v19 )
  {
LABEL_116:
    if ( v22 != v4 )
    {
      for ( n = v4; v22 != n; n += 2 )
      {
        v64 = n->m128i_i64[0];
        if ( n->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v64 + 12) == v18 && v9 == v64 )
            goto LABEL_124;
        }
        else if ( !v64 )
        {
          break;
        }
      }
    }
LABEL_18:
    sub_1872CE0("");
    sub_1873130(114, 280);
  }
  n = &v4[(unsigned __int64)v21 / 0x10];
  while ( 2 )
  {
    v24 = n->m128i_i64[0];
    if ( n->m128i_i64[0] <= 1uLL )
    {
      if ( !v24 )
        goto LABEL_18;
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v24 + 12) != v18 || v9 != v24 )
    {
LABEL_15:
      n += 2;
      if ( v20 == n )
        goto LABEL_116;
      continue;
    }
    break;
  }
LABEL_124:
  v196 = n[1].m128i_i64[1];
  if ( v196 )
    ++*(_DWORD *)(v196 + 8);
  v65 = *a2;
  if ( *a2 )
  {
    v66 = a2[1];
    v28 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v66, v65);
  }
  *a2 = v196;
  if ( v193 )
  {
LABEL_82:
    v191 = *(_DWORD *)(v193 + 8);
    *(_DWORD *)(v193 + 8) = v191 - 1;
    if ( v191 == 1 )
      sub_15D7BC0(v208, v193);
LABEL_84:
    if ( v16 )
      goto LABEL_85;
    goto LABEL_92;
  }
  if ( !v16 )
    goto LABEL_93;
LABEL_85:
  v57 = v16;
  v58 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
  if ( (unsigned __int64)v16 < v58 )
  {
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v28 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( (unsigned __int64)++v57 >= v58 )
          goto LABEL_91;
      }
      ++v57;
      sub_15D7BC0(v187, v59);
    }
    while ( (unsigned __int64)v57 < v58 );
  }
LABEL_91:
  sub_186B220(v16 - 1);
LABEL_92:
  if ( v9 )
  {
LABEL_93:
    v28 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v187, v9);
  }
  if ( v198 )
  {
    v192 = *(_DWORD *)(v198 + 8);
    *(_DWORD *)(v198 + 8) = v192 - 1;
    if ( v192 == 1 )
      sub_15D7BC0(v187, v198);
  }
  if ( v4 )
    sub_186B220(v4);
  if ( v12 )
  {
    v28 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v200, v12);
  }
  if ( v189 )
  {
    v60 = v189;
    v61 = (unsigned __int64)&v189[*((unsigned int *)v189 - 1)];
    if ( (unsigned __int64)v189 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v28 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v28 )
              break;
          }
          if ( (unsigned __int64)++v60 >= v61 )
            goto LABEL_110;
        }
        ++v60;
        sub_15D7BC0(v200, v62);
      }
      while ( (unsigned __int64)v60 < v61 );
    }
LABEL_110:
    sub_186B220(v189 - 1);
  }
  if ( v186 )
    sub_186B220(v186 - 1);
  result = (__int64)v188;
  if ( v188 )
    return sub_186B220(v188 - 1);
  return result;
}

