const __m128i *__fastcall sub_20BA360(__int64 a1)
{
  __int64 *v2; // rbp
  unsigned int v3; // r14d
  __int64 v4; // r15
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // r11d
  unsigned int v8; // r8d
  __int64 *v9; // r14
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  _QWORD *v12; // r9
  unsigned int v13; // r8d
  __int64 *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // r13
  int v17; // r12d
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // eax
  __int64 *v21; // rsi
  __int64 v22; // rdx
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  __int64 *v25; // r14
  __int64 *v26; // rbp
  __int64 v27; // r13
  __int64 v28; // r12
  int v29; // r13d
  unsigned int v30; // r14d
  __int64 *v31; // r15
  __int64 v32; // rbx
  int v33; // ebp
  int v34; // edx
  __int64 *v35; // rbp
  unsigned __int8 v36; // al
  const __m128i *v37; // rax
  __int64 v38; // rdi
  __m128i v39; // xmm1
  int v40; // eax
  __int64 v41; // r14
  unsigned int v42; // r13d
  unsigned int v43; // r13d
  int v44; // eax
  int v45; // r9d
  unsigned int v46; // eax
  __int64 *v47; // rsi
  __int64 v48; // rdx
  unsigned __int8 v49; // cl
  __int64 v50; // rcx
  _QWORD *v51; // rsi
  const __m128i *result; // rax
  _QWORD *v53; // rsi
  _QWORD *v54; // rsi
  _QWORD *v55; // rsi
  _QWORD *v56; // rsi
  _QWORD *v57; // rsi
  _QWORD *v58; // rsi
  _QWORD *v59; // rsi
  _QWORD *v60; // rsi
  _QWORD *v61; // rsi
  _QWORD *v62; // rdx
  _QWORD *v63; // rsi
  _QWORD *v64; // rsi
  _QWORD *v65; // rsi
  int v66; // eax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  _QWORD *v69; // rbx
  unsigned __int8 v70; // dl
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // rbp
  unsigned __int8 v75; // al
  const __m128i *v76; // rax
  unsigned int v77; // r14d
  __int64 v78; // r15
  int v79; // eax
  unsigned int v80; // edx
  int v81; // r8d
  unsigned int v82; // r13d
  __int64 *v83; // rcx
  __int64 v84; // r14
  unsigned __int8 v85; // al
  __int64 v86; // rax
  unsigned int v87; // r13d
  __int64 *v88; // rbp
  unsigned int v89; // r14d
  __int64 v90; // r13
  unsigned int v91; // eax
  __int64 *v92; // rsi
  int v93; // r10d
  __int64 v94; // rcx
  unsigned __int8 v95; // di
  _QWORD *v96; // rdi
  _QWORD *v97; // rsi
  _QWORD *v98; // rsi
  _QWORD *v99; // rsi
  _QWORD *v100; // rsi
  _QWORD *v101; // rsi
  _QWORD *v102; // rsi
  __int64 *v103; // rbp
  int v104; // eax
  int v105; // edi
  unsigned __int8 v106; // al
  const __m128i *v107; // rax
  __int64 v108; // r12
  __int64 v109; // r13
  int v110; // r12d
  int v111; // eax
  int v112; // r8d
  unsigned int v113; // eax
  __int64 *v114; // rsi
  __int64 v115; // rdx
  __int64 *v116; // rbp
  unsigned __int8 v117; // al
  __int64 *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // r13
  __int64 v123; // r12
  int v124; // r12d
  int v125; // eax
  int v126; // ecx
  unsigned int v127; // eax
  __int64 *v128; // rsi
  __int64 v129; // rdx
  __int64 v130; // rdi
  unsigned __int8 v131; // di
  __int64 v132; // rdx
  const __m128i **v133; // rbx
  _QWORD *v134; // rdx
  __int64 v135; // r9
  __int64 *v136; // rbp
  int v137; // eax
  int v138; // edi
  unsigned __int8 v139; // al
  _QWORD *v140; // rax
  __int64 v141; // r12
  __int64 v142; // r13
  int v143; // r12d
  int v144; // eax
  int v145; // r8d
  unsigned int v146; // eax
  __int64 *v147; // rsi
  __int64 v148; // rdx
  __int64 *v149; // rbp
  __int64 *v150; // r14
  __int64 v151; // r12
  __int64 v152; // r13
  int v153; // r15d
  __int64 v154; // rbp
  int v155; // r13d
  unsigned int v156; // r12d
  __int64 *v157; // r14
  __int64 v158; // rbx
  unsigned int v159; // ecx
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rdx
  int v163; // eax
  __int64 *v164; // rcx
  const __m128i **v165; // rbx
  _QWORD *v166; // rdx
  __int64 v167; // r9
  const __m128i **v168; // rbx
  _QWORD *v169; // rdx
  __int64 v170; // r9
  const __m128i **v171; // r14
  _QWORD *v172; // rdx
  __int64 v173; // r9
  __int64 v174; // rsi
  __int64 v175; // rax
  unsigned int v176; // eax
  const __m128i **v177; // r14
  _QWORD *v178; // rdx
  __int64 v179; // r9
  const __m128i **v180; // rbx
  _QWORD *v181; // rdx
  __int64 v182; // r9
  const __m128i **v183; // r12
  _QWORD *v184; // rdx
  __int64 v185; // r9
  const __m128i **v186; // r12
  _QWORD *v187; // rdx
  __int64 v188; // r9
  const __m128i **v189; // rbx
  _QWORD *v190; // rdx
  __int64 v191; // r9
  const __m128i **v192; // r12
  _QWORD *v193; // rdx
  __int64 v194; // r9
  unsigned __int8 v195; // cl
  _OWORD *v196; // rdx
  unsigned __int8 v197; // cl
  _OWORD *v198; // rdx
  _QWORD *v199; // rsi
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // r8
  __int64 v203; // rcx
  bool v204; // zf
  _QWORD *v205; // rsi
  __int64 v206; // rdx
  __int64 v207; // rax
  __int64 v208; // r8
  __int64 v209; // rcx
  _QWORD *v210; // rsi
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // r8
  __int64 v214; // rcx
  _QWORD *v215; // rsi
  __int64 v216; // rdx
  __int64 v217; // rax
  __int64 v218; // r8
  __int64 v219; // rcx
  _QWORD *v220; // rsi
  __int64 v221; // rdx
  __int64 v222; // rax
  __int64 v223; // r8
  __int64 v224; // rcx
  _QWORD *v225; // rsi
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // r8
  __int64 v229; // rcx
  _QWORD *v230; // rsi
  __int64 v231; // rdx
  __int64 v232; // rax
  __int64 v233; // r8
  __int64 v234; // rcx
  _QWORD *v235; // rsi
  __int64 v236; // rdx
  __int64 v237; // rax
  __int64 v238; // r8
  __int64 v239; // rcx
  _QWORD *v240; // rsi
  __int64 v241; // rdx
  __int64 v242; // rax
  __int64 v243; // r8
  __int64 v244; // rcx
  _QWORD *v245; // rsi
  __int64 v246; // rdx
  __int64 v247; // rax
  __int64 v248; // r8
  __int64 v249; // rcx
  unsigned __int8 v250; // al
  _QWORD *v251; // rax
  int v252; // ebp
  unsigned __int8 v253; // al
  _QWORD *v254; // rax
  __int64 *v255; // rsi
  int v256; // esi
  int v257; // esi
  int v258; // esi
  int v259; // esi
  int v260; // esi
  int v261; // eax
  unsigned __int8 v262; // al
  __int64 *v263; // r9
  char v264; // al
  char v265; // al
  char v266; // al
  char v267; // al
  char v268; // al
  __int64 v269; // [rsp+8h] [rbp-E0h]
  __int64 *v270; // [rsp+8h] [rbp-E0h]
  const __m128i *v271; // [rsp+8h] [rbp-E0h]
  const __m128i *v272; // [rsp+8h] [rbp-E0h]
  __int64 v273; // [rsp+8h] [rbp-E0h]
  unsigned int v274; // [rsp+8h] [rbp-E0h]
  unsigned int v275; // [rsp+8h] [rbp-E0h]
  __int64 *v276; // [rsp+10h] [rbp-D8h]
  __int64 v277; // [rsp+10h] [rbp-D8h]
  unsigned int v278; // [rsp+10h] [rbp-D8h]
  unsigned int v279; // [rsp+10h] [rbp-D8h]
  __int64 v280; // [rsp+10h] [rbp-D8h]
  unsigned int v281; // [rsp+10h] [rbp-D8h]
  int v282; // [rsp+10h] [rbp-D8h]
  int v283; // [rsp+18h] [rbp-D0h]
  unsigned int v284; // [rsp+18h] [rbp-D0h]
  unsigned int v285; // [rsp+18h] [rbp-D0h]
  __int64 *v286; // [rsp+18h] [rbp-D0h]
  int v287; // [rsp+20h] [rbp-C8h]
  int v288; // [rsp+20h] [rbp-C8h]
  int v289; // [rsp+20h] [rbp-C8h]
  unsigned int v290; // [rsp+20h] [rbp-C8h]
  __int64 *v291; // [rsp+20h] [rbp-C8h]
  int v292; // [rsp+2Ch] [rbp-BCh]
  int v293; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v294; // [rsp+38h] [rbp-B0h] BYREF
  __m128 v295; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v296; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v297[24]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v298[24]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v299; // [rsp+88h] [rbp-60h]
  void *v300; // [rsp+90h] [rbp-58h] BYREF
  __int64 v301; // [rsp+98h] [rbp-50h]
  __int64 v302; // [rsp+A0h] [rbp-48h]

  switch ( *(_BYTE *)a1 )
  {
    case 5:
      v66 = sub_20938D0(a1, 0);
      v67 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = v66;
      v68 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v67 & 4) != 0 )
        v68 = (_QWORD *)*v68;
      v69 = (_QWORD *)*v68;
      v70 = *(_BYTE *)(a1 - 16);
      v295.m128_u64[0] = a1;
      v296 = 0;
      *(_QWORD *)v297 = 0;
      v71 = (__int64)(v69 + 71);
      if ( (v70 & 2) != 0 )
      {
        v72 = *(_QWORD *)(a1 - 32);
        v73 = *(unsigned int *)(a1 - 24);
      }
      else
      {
        v73 = (*(_WORD *)(a1 - 16) >> 6) & 0xF;
        v72 = a1 - 8LL * ((v70 >> 2) & 0xF) - 16;
      }
      *(_QWORD *)&v297[8] = v72;
      *(_QWORD *)&v297[16] = v73;
      *(_DWORD *)v298 = v66;
      result = (const __m128i *)sub_20AFD00(v71, (__int64)&v296);
      if ( !result )
      {
        sub_20B5160((__m128i *)&v296, v71, (__int64 *)&v295);
        return (const __m128i *)v295.m128_u64[0];
      }
      return result;
    case 6:
      v65 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v65 = (_QWORD *)*v65;
      return (const __m128i *)sub_20B5760(a1, (__int64)(v65 + 74));
    case 7:
      v64 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v64 = (_QWORD *)*v64;
      return (const __m128i *)sub_20B5F00(a1, (__int64)(v64 + 77));
    case 8:
      v63 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v63 = (_QWORD *)*v63;
      return (const __m128i *)sub_20B61E0(a1, (__int64)(v63 + 80));
    case 9:
      sub_206D460(a1);
      v62 = (_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v62 = (_QWORD *)*v62;
      return (const __m128i *)sub_20B6480(a1, *v62 + 664LL);
    case 0xA:
      v61 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v61 = (_QWORD *)*v61;
      return (const __m128i *)sub_20B6960(a1, (__int64)(v61 + 86));
    case 0xB:
      v60 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v60 = (_QWORD *)*v60;
      return (const __m128i *)sub_20B6C50(a1, (__int64)(v60 + 89));
    case 0xC:
      v59 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v59 = (_QWORD *)*v59;
      return (const __m128i *)sub_20B70B0((_DWORD *)a1, (__int64)(v59 + 92));
    case 0xD:
      v58 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v58 = (_QWORD *)*v58;
      return (const __m128i *)sub_20B7440(a1, (__int64)(v58 + 95));
    case 0xE:
      v57 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v57 = (_QWORD *)*v57;
      return (const __m128i *)sub_20B79C0(a1, (__int64)(v57 + 98));
    case 0xF:
      v56 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v56 = (_QWORD *)*v56;
      return (const __m128i *)sub_20B7E70(a1, (__int64)(v56 + 101));
    case 0x10:
      v55 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v55 = (_QWORD *)*v55;
      return sub_20B8140((const __m128i *)a1, (__int64)(v55 + 104));
    case 0x11:
    case 0x1E:
    case 0x25:
      v74 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v74 = (__int64 *)*v74;
      v294 = a1;
      LODWORD(v296) = (unsigned __int16)sub_206CE80(a1);
      v75 = *(_BYTE *)(a1 - 16);
      if ( (v75 & 2) != 0 )
        v76 = *(const __m128i **)(a1 - 32);
      else
        v76 = (const __m128i *)(a1 - 8LL * ((v75 >> 2) & 0xF) - 16);
      *(__m128i *)v297 = _mm_loadu_si128(v76 + 1);
      *(_DWORD *)&v297[16] = sub_206CE70(a1);
      *(_DWORD *)&v297[20] = *(_DWORD *)(a1 + 28);
      *(_DWORD *)v298 = *(_DWORD *)(a1 + 20);
      *(_QWORD *)&v298[4] = *(_QWORD *)(a1 + 32);
      LODWORD(v299) = *(_DWORD *)(a1 + 48);
      if ( (unsigned int)v299 > 0x40 )
        sub_2205510(&v298[16]);
      else
        *(_QWORD *)&v298[16] = *(_QWORD *)(a1 + 40);
      LODWORD(v301) = *(_DWORD *)(a1 + 64);
      if ( (unsigned int)v301 > 0x40 )
        sub_2205510(&v300);
      else
        v300 = *(void **)(a1 + 56);
      v77 = *((_DWORD *)v74 + 326);
      v78 = v74[161];
      if ( !v77 )
        goto LABEL_209;
      v79 = sub_20A87B0(
              *(__int64 *)v297,
              (int *)v298,
              (int *)&v298[4],
              (__int32 *)&v298[8],
              (__int64)&v298[16],
              (__int64)&v300);
      v80 = v77 - 1;
      v81 = 1;
      v82 = (v77 - 1) & v79;
      while ( 2 )
      {
        v83 = (__int64 *)(v78 + 8LL * v82);
        v84 = *v83;
        if ( *v83 == -4096 || v84 == -8192 )
          goto LABEL_207;
        v85 = *(_BYTE *)(v84 - 16);
        if ( (v85 & 2) != 0 )
          v86 = *(_QWORD *)(v84 - 32);
        else
          v86 = v84 + -16 - 8LL * ((v85 >> 2) & 0xF);
        if ( *(_OWORD *)v297 != *(_OWORD *)(v86 + 16) )
          goto LABEL_110;
        v283 = v81;
        v278 = v80;
        v163 = sub_206CE70(*v83);
        v80 = v278;
        v81 = v283;
        v164 = (__int64 *)(v78 + 8LL * v82);
        if ( *(_DWORD *)&v297[16] != v163 )
          goto LABEL_206;
        v261 = *(_DWORD *)(v84 + 32);
        if ( *(_DWORD *)&v298[4] != v261 )
          goto LABEL_206;
        if ( v261 == 2 )
        {
          if ( (unsigned int)v299 <= 0x40 )
          {
            v267 = *(_QWORD *)&v298[16] == *(_QWORD *)(v84 + 40);
          }
          else
          {
            v267 = sub_2205D70(&v298[16], v84 + 40);
            v164 = (__int64 *)(v78 + 8LL * v82);
            v80 = v278;
            v81 = v283;
          }
          if ( v267 )
          {
            if ( (unsigned int)v301 <= 0x40 )
            {
              v268 = v300 == *(void **)(v84 + 56);
            }
            else
            {
              v286 = v164;
              v282 = v81;
              v275 = v80;
              v268 = sub_2205D70(&v300, v84 + 56);
              v164 = v286;
              v80 = v275;
              v81 = v282;
            }
            if ( v268 )
              goto LABEL_412;
          }
        }
        else if ( *(_DWORD *)&v298[8] == *(_DWORD *)(v84 + 36) )
        {
LABEL_412:
          sub_2081D40(&v295, v164, (_QWORD *)(v74[161] + 8LL * *((unsigned int *)v74 + 326)), (__int64)(v74 + 161), 1);
          v165 = (const __m128i **)v295.m128_u64[0];
          goto LABEL_210;
        }
LABEL_206:
        v84 = *v164;
LABEL_207:
        if ( v84 != -4096 )
        {
LABEL_110:
          v87 = v81 + v82;
          ++v81;
          v82 = v80 & v87;
          continue;
        }
        break;
      }
      v78 = v74[161];
      v77 = *((_DWORD *)v74 + 326);
LABEL_209:
      sub_2081D40(&v295, (_QWORD *)(v78 + 8LL * v77), (_QWORD *)(v78 + 8LL * v77), (__int64)(v74 + 161), 1);
      v165 = (const __m128i **)v295.m128_u64[0];
LABEL_210:
      v166 = (_QWORD *)(v74[161] + 8LL * *((unsigned int *)v74 + 326));
      sub_2081D40(&v295, v166, v166, (__int64)(v74 + 161), 1);
      if ( v165 == (const __m128i **)v295.m128_u64[0] )
        result = nullptr;
      else
        result = *v165;
      if ( (unsigned int)v301 > 0x40 && v300 )
      {
        v271 = result;
        operator delete[](v300);
        result = v271;
      }
      if ( (unsigned int)v299 > 0x40 && *(_QWORD *)&v298[16] )
      {
        v272 = result;
        operator delete[](*(void **)&v298[16]);
        result = v272;
      }
      if ( !result )
      {
        if ( (unsigned __int8)sub_207ECF0(v74 + 161, &v294, &v295) )
        {
          sub_2081D40(
            (__m128 *)&v296,
            v295.m128_u64[0],
            (_QWORD *)(v74[161] + 8LL * *((unsigned int *)v74 + 326)),
            (__int64)(v74 + 161),
            1);
          return (const __m128i *)v294;
        }
        v210 = (_QWORD *)v295.m128_u64[0];
        v211 = (unsigned int)(*((_DWORD *)v74 + 324) + 1);
        v212 = *((unsigned int *)v74 + 326);
        v296 = v295.m128_u64[0];
        v213 = (unsigned int)(4 * v211);
        if ( (unsigned int)v213 >= 3 * (int)v212 )
        {
          sub_2085240((__int64)(v74 + 161), 2 * v212, v211, (unsigned int)(2 * v212), v213, v167);
        }
        else
        {
          v214 = (unsigned int)(v212 - *((_DWORD *)v74 + 325) - v211);
          if ( (unsigned int)v214 > (unsigned int)v212 >> 3 )
          {
LABEL_306:
            v204 = *v210 == -4096;
            *((_DWORD *)v74 + 324) = v211;
            if ( !v204 )
              --*((_DWORD *)v74 + 325);
            *v210 = v294;
            v295.m128_u64[0] = (unsigned __int64)v210;
            sub_2081D40((__m128 *)&v296, v210, (_QWORD *)(v74[161] + 8 * v212), (__int64)(v74 + 161), 1);
            return (const __m128i *)v294;
          }
          sub_2085240((__int64)(v74 + 161), v212, v211, v214, v213, v167);
        }
        sub_207ECF0(v74 + 161, &v294, &v296);
        v212 = *((unsigned int *)v74 + 326);
        v210 = (_QWORD *)v296;
        LODWORD(v211) = *((_DWORD *)v74 + 324) + 1;
        goto LABEL_306;
      }
      return result;
    case 0x12:
      v54 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v54 = (_QWORD *)*v54;
      return (const __m128i *)sub_20B84A0(a1, (__int64)(v54 + 107));
    case 0x13:
      v53 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v53 = (_QWORD *)*v53;
      return (const __m128i *)sub_20B8A00((_BYTE *)a1, (__int64)(v53 + 110));
    case 0x14:
      v51 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v51 = (_QWORD *)*v51;
      return (const __m128i *)sub_20B8D30((_BYTE *)a1, (__int64)(v51 + 113));
    case 0x15:
      v102 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v102 = (_QWORD *)*v102;
      return (const __m128i *)sub_20B9030((_QWORD *)a1, (__int64)(v102 + 116));
    case 0x16:
      v101 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v101 = (_QWORD *)*v101;
      return (const __m128i *)sub_20B9310(a1, (__int64)(v101 + 119));
    case 0x17:
      v100 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v100 = (_QWORD *)*v100;
      return (const __m128i *)sub_20B9610((_QWORD *)a1, (__int64)(v100 + 122));
    case 0x18:
      v99 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v99 = (_QWORD *)*v99;
      return (const __m128i *)sub_20B98F0((_QWORD *)a1, (__int64)(v99 + 125));
    case 0x19:
      v98 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v98 = (_QWORD *)*v98;
      return (const __m128i *)sub_20B9C60(a1, (__int64)(v98 + 128));
    case 0x1A:
      v97 = *(_QWORD **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v97 = (_QWORD *)*v97;
      return (const __m128i *)sub_20BA020(a1, (__int64)(v97 + 131));
    case 0x1B:
      v116 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v116 = (__int64 *)*v116;
      v117 = *(_BYTE *)(a1 - 16);
      v294 = a1;
      if ( (v117 & 2) != 0 )
      {
        v118 = *(__int64 **)(a1 - 32);
        v119 = *v118;
      }
      else
      {
        v160 = a1 - 8LL * ((v117 >> 2) & 0xF);
        v119 = *(_QWORD *)(v160 - 16);
        v118 = (__int64 *)(v160 - 16);
      }
      v296 = v119;
      v120 = v118[1];
      v121 = v118[2];
      v122 = v116[134];
      *(_QWORD *)v297 = v120;
      *(_QWORD *)&v297[8] = v121;
      *(_DWORD *)&v297[16] = *(_DWORD *)(a1 + 4);
      *(_DWORD *)&v297[20] = *(_DWORD *)(a1 + 16);
      v298[0] = *(_BYTE *)(a1 + 28);
      *(_QWORD *)&v298[4] = *(_QWORD *)(a1 + 20);
      v123 = *((unsigned int *)v116 + 272);
      if ( !(_DWORD)v123 )
        goto LABEL_222;
      v124 = v123 - 1;
      v125 = sub_20ADAF0(v119, (__int64 *)v297, (int *)&v297[16], (int *)&v297[20], v298, (__int64)&v298[4]);
      v126 = 1;
      v127 = v124 & v125;
      v128 = (__int64 *)(v122 + 8LL * v127);
      v129 = *v128;
      if ( *v128 == -4096 )
        goto LABEL_221;
      while ( 2 )
      {
        if ( v129 == -8192 )
          goto LABEL_159;
        v131 = *(_BYTE *)(v129 - 16);
        if ( (v131 & 2) != 0 )
        {
          v130 = *(_QWORD *)(v129 - 32);
          if ( v296 != *(_QWORD *)v130 )
            goto LABEL_159;
        }
        else
        {
          v130 = v129 + -16 - 8LL * ((v131 >> 2) & 0xF);
          if ( v296 != *(_QWORD *)v130 )
            goto LABEL_159;
        }
        if ( *(_OWORD *)v297 == *(_OWORD *)(v130 + 8)
          && *(_QWORD *)&v297[16] == __PAIR64__(*(_DWORD *)(v129 + 16), *(_DWORD *)(v129 + 4))
          && v298[0] == *(_BYTE *)(v129 + 28) )
        {
          v132 = *(_QWORD *)(v129 + 20);
          if ( v298[8] == BYTE4(v132) && (!v298[8] || *(_DWORD *)&v298[4] == (_DWORD)v132) )
          {
            sub_2082540(
              &v295,
              v128,
              (_QWORD *)(v116[134] + 8LL * *((unsigned int *)v116 + 272)),
              (__int64)(v116 + 134),
              1);
            v133 = (const __m128i **)v295.m128_u64[0];
            goto LABEL_171;
          }
        }
LABEL_159:
        v127 = v124 & (v126 + v127);
        v128 = (__int64 *)(v122 + 8LL * v127);
        v129 = *v128;
        if ( *v128 != -4096 )
        {
          ++v126;
          continue;
        }
        break;
      }
LABEL_221:
      v122 = v116[134];
      v123 = *((unsigned int *)v116 + 272);
LABEL_222:
      sub_2082540(&v295, (_QWORD *)(v122 + 8 * v123), (_QWORD *)(v122 + 8 * v123), (__int64)(v116 + 134), 1);
      v133 = (const __m128i **)v295.m128_u64[0];
LABEL_171:
      v134 = (_QWORD *)(v116[134] + 8LL * *((unsigned int *)v116 + 272));
      sub_2082540(&v295, v134, v134, (__int64)(v116 + 134), 1);
      if ( (const __m128i **)v295.m128_u64[0] != v133 )
      {
        result = *v133;
        if ( *v133 )
          return result;
      }
      if ( (unsigned __int8)sub_2080FF0(v116 + 134, &v294, &v295) )
      {
        sub_2082540(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v116[134] + 8LL * *((unsigned int *)v116 + 272)),
          (__int64)(v116 + 134),
          1);
        return (const __m128i *)v294;
      }
      v220 = (_QWORD *)v295.m128_u64[0];
      v221 = (unsigned int)(*((_DWORD *)v116 + 270) + 1);
      v222 = *((unsigned int *)v116 + 272);
      v296 = v295.m128_u64[0];
      v223 = (unsigned int)(4 * v221);
      if ( (unsigned int)v223 >= 3 * (int)v222 )
      {
        sub_2089320((__int64)(v116 + 134), 2 * v222, v221, (unsigned int)(2 * v222), v223, v135);
      }
      else
      {
        v224 = (unsigned int)(v222 - *((_DWORD *)v116 + 271) - v221);
        if ( (unsigned int)v224 > (unsigned int)v222 >> 3 )
          goto LABEL_316;
        sub_2089320((__int64)(v116 + 134), v222, v221, v224, v223, v135);
      }
      sub_2080FF0(v116 + 134, &v294, &v296);
      v222 = *((unsigned int *)v116 + 272);
      v220 = (_QWORD *)v296;
      LODWORD(v221) = *((_DWORD *)v116 + 270) + 1;
LABEL_316:
      v204 = *v220 == -4096;
      *((_DWORD *)v116 + 270) = v221;
      if ( !v204 )
        --*((_DWORD *)v116 + 271);
      *v220 = v294;
      v295.m128_u64[0] = (unsigned __int64)v220;
      sub_2082540((__m128 *)&v296, v220, (_QWORD *)(v116[134] + 8 * v222), (__int64)(v116 + 134), 1);
      return (const __m128i *)v294;
    case 0x1C:
      v88 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v88 = (__int64 *)*v88;
      v294 = a1;
      sub_20A0690((__int64)&v296, a1);
      v89 = *((_DWORD *)v88 + 278);
      v90 = v88[137];
      if ( !v89 )
        goto LABEL_230;
      v91 = (v89 - 1)
          & sub_20A8040(
              v296,
              (__int64 *)v297,
              (int *)&v297[8],
              (__int64 *)&v297[16],
              (__int64 *)v298,
              (int *)&v298[8],
              (__int64 *)&v298[16]);
      v92 = (__int64 *)(v90 + 8LL * v91);
      v93 = 1;
      v94 = *v92;
      if ( *v92 == -4096 )
        goto LABEL_229;
      if ( v94 != -8192 )
        goto LABEL_116;
      while ( 1 )
      {
        v91 = (v89 - 1) & (v93 + v91);
        v92 = (__int64 *)(v90 + 8LL * v91);
        v94 = *v92;
        if ( *v92 == -4096 )
          break;
        ++v93;
        if ( v94 != -8192 )
        {
LABEL_116:
          v95 = *(_BYTE *)(v94 - 16);
          if ( (v95 & 2) != 0 )
            v96 = *(_QWORD **)(v94 - 32);
          else
            v96 = (_QWORD *)(v94 + -16 - 8LL * ((v95 >> 2) & 0xF));
          if ( v296 == *v96
            && *(_QWORD *)v297 == v96[1]
            && *(_DWORD *)&v297[8] == *(_DWORD *)(v94 + 16)
            && *(_QWORD *)&v297[16] == v96[2]
            && *(_QWORD *)v298 == v96[3]
            && *(_DWORD *)&v298[8] == *(_DWORD *)(v94 + 20)
            && *(_QWORD *)&v298[16] == v96[4] )
          {
            sub_2082830(&v295, v92, (_QWORD *)(v88[137] + 8LL * *((unsigned int *)v88 + 278)), (__int64)(v88 + 137), 1);
            v171 = (const __m128i **)v295.m128_u64[0];
            goto LABEL_231;
          }
        }
      }
LABEL_229:
      v90 = v88[137];
      v89 = *((_DWORD *)v88 + 278);
LABEL_230:
      sub_2082830(&v295, (_QWORD *)(v90 + 8LL * v89), (_QWORD *)(v90 + 8LL * v89), (__int64)(v88 + 137), 1);
      v171 = (const __m128i **)v295.m128_u64[0];
LABEL_231:
      v172 = (_QWORD *)(v88[137] + 8LL * *((unsigned int *)v88 + 278));
      sub_2082830(&v295, v172, v172, (__int64)(v88 + 137), 1);
      if ( (const __m128i **)v295.m128_u64[0] != v171 )
      {
        result = *v171;
        if ( *v171 )
          return result;
      }
      if ( (unsigned __int8)sub_2081360(v88 + 137, &v294, &v295) )
      {
        sub_2082830(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v88[137] + 8LL * *((unsigned int *)v88 + 278)),
          (__int64)(v88 + 137),
          1);
        return (const __m128i *)v294;
      }
      v199 = (_QWORD *)v295.m128_u64[0];
      v200 = (unsigned int)(*((_DWORD *)v88 + 276) + 1);
      v201 = *((unsigned int *)v88 + 278);
      v296 = v295.m128_u64[0];
      v202 = (unsigned int)(4 * v200);
      v203 = (unsigned int)(2 * v201);
      if ( (unsigned int)v202 >= 3 * (int)v201 )
      {
        v258 = 2 * v201;
      }
      else
      {
        v203 = (unsigned int)(v201 - *((_DWORD *)v88 + 277) - v200);
        if ( (unsigned int)v203 > (unsigned int)v201 >> 3 )
          goto LABEL_296;
        v258 = v201;
      }
      sub_2089E50((__int64)(v88 + 137), v258, v200, v203, v202, v173);
      sub_2081360(v88 + 137, &v294, &v296);
      v201 = *((unsigned int *)v88 + 278);
      v199 = (_QWORD *)v296;
      LODWORD(v200) = *((_DWORD *)v88 + 276) + 1;
LABEL_296:
      v204 = *v199 == -4096;
      *((_DWORD *)v88 + 276) = v200;
      if ( !v204 )
        --*((_DWORD *)v88 + 277);
      *v199 = v294;
      v295.m128_u64[0] = (unsigned __int64)v199;
      sub_2082830((__m128 *)&v296, v199, (_QWORD *)(v88[137] + 8 * v201), (__int64)(v88 + 137), 1);
      return (const __m128i *)v294;
    case 0x1D:
      v149 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v149 = (__int64 *)*v149;
      v294 = a1;
      v150 = v149 + 140;
      sub_20A0730((__int64)&v296, a1);
      v151 = *((unsigned int *)v149 + 284);
      v152 = v149[140];
      if ( !(_DWORD)v151 )
        goto LABEL_257;
      v153 = v151 - 1;
      v277 = (__int64)(v149 + 140);
      v270 = v149;
      v154 = v149[140];
      v155 = 1;
      v156 = (v151 - 1)
           & sub_20A9690(
               v296,
               (__int64 *)v297,
               (__int64 *)&v297[8],
               (__int64 *)&v297[16],
               (int *)v298,
               (__int64 *)&v298[8],
               (__int64 *)&v298[16]);
      while ( 2 )
      {
        v157 = (__int64 *)(v154 + 8LL * v156);
        v158 = *v157;
        if ( *v157 == -8192 || v158 == -4096 )
          goto LABEL_195;
        v288 = v296;
        if ( v288 == (unsigned __int16)sub_206CE80(*v157)
          && ((v253 = *(_BYTE *)(v158 - 16), (v253 & 2) == 0)
            ? (v254 = (_QWORD *)(v158 + -16 - 8LL * ((v253 >> 2) & 0xF)))
            : (v254 = *(_QWORD **)(v158 - 32)),
              *(_QWORD *)v297 == *v254
           && *(_QWORD *)&v297[8] == v254[1]
           && *(_QWORD *)&v297[16] == v254[3]
           && *(_DWORD *)v298 == *(_DWORD *)(v158 + 4)
           && *(_OWORD *)&v298[8] == __PAIR128__(v254[4], v254[2])) )
        {
          v149 = v270;
          v255 = v157;
          v150 = (__int64 *)v277;
          sub_20828B0(&v295, v255, (_QWORD *)(v270[140] + 8LL * *((unsigned int *)v270 + 284)), v277, 1);
          v183 = (const __m128i **)v295.m128_u64[0];
        }
        else
        {
          v158 = *v157;
LABEL_195:
          if ( v158 != -4096 )
          {
            v159 = v156 + v155++;
            v156 = v153 & v159;
            continue;
          }
          v149 = v270;
          v150 = (__int64 *)v277;
          v152 = v270[140];
          v151 = *((unsigned int *)v270 + 284);
LABEL_257:
          sub_20828B0(&v295, (_QWORD *)(v152 + 8 * v151), (_QWORD *)(v152 + 8 * v151), (__int64)v150, 1);
          v183 = (const __m128i **)v295.m128_u64[0];
        }
        break;
      }
      v184 = (_QWORD *)(v149[140] + 8LL * *((unsigned int *)v149 + 284));
      sub_20828B0(&v295, v184, v184, (__int64)v150, 1);
      if ( (const __m128i **)v295.m128_u64[0] != v183 )
      {
        result = *v183;
        if ( *v183 )
          return result;
      }
      if ( (unsigned __int8)sub_2081520(v150, &v294, &v295) )
      {
        sub_20828B0(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v149[140] + 8LL * *((unsigned int *)v149 + 284)),
          (__int64)v150,
          1);
        return (const __m128i *)v294;
      }
      v235 = (_QWORD *)v295.m128_u64[0];
      v236 = (unsigned int)(*((_DWORD *)v149 + 282) + 1);
      v237 = *((unsigned int *)v149 + 284);
      v296 = v295.m128_u64[0];
      v238 = (unsigned int)(4 * v236);
      v239 = (unsigned int)(2 * v237);
      if ( (unsigned int)v238 >= 3 * (int)v237 )
      {
        v259 = 2 * v237;
      }
      else
      {
        v239 = (unsigned int)(v237 - *((_DWORD *)v149 + 283) - v236);
        if ( (unsigned int)v239 > (unsigned int)v237 >> 3 )
          goto LABEL_331;
        v259 = v237;
      }
      sub_208A030((__int64)v150, v259, v236, v239, v238, v185);
      sub_2081520(v150, &v294, &v296);
      v237 = *((unsigned int *)v149 + 284);
      v235 = (_QWORD *)v296;
      LODWORD(v236) = *((_DWORD *)v149 + 282) + 1;
LABEL_331:
      v204 = *v235 == -4096;
      *((_DWORD *)v149 + 282) = v236;
      if ( !v204 )
        --*((_DWORD *)v149 + 283);
      *v235 = v294;
      v295.m128_u64[0] = (unsigned __int64)v235;
      sub_20828B0((__m128 *)&v296, v235, (_QWORD *)(v149[140] + 8 * v237), (__int64)v150, 1);
      return (const __m128i *)v294;
    case 0x1F:
      v103 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v103 = (__int64 *)*v103;
      v104 = *(_DWORD *)(a1 + 4);
      v105 = *(unsigned __int16 *)(a1 + 2);
      v294 = a1;
      HIDWORD(v296) = v104;
      v106 = *(_BYTE *)(a1 - 16);
      LODWORD(v296) = v105;
      if ( (v106 & 2) != 0 )
        v107 = *(const __m128i **)(a1 - 32);
      else
        v107 = (const __m128i *)(a1 - 8LL * ((v106 >> 2) & 0xF) - 16);
      v108 = *((unsigned int *)v103 + 290);
      v109 = v103[143];
      *(__m128i *)v297 = _mm_loadu_si128(v107);
      if ( !(_DWORD)v108 )
        goto LABEL_269;
      v110 = v108 - 1;
      v111 = sub_20AB480(v105, (int *)&v296 + 1, (__int64 *)v297, (__int64 *)&v297[8]);
      v112 = 1;
      v113 = v110 & v111;
      v114 = (__int64 *)(v109 + 8LL * v113);
      v115 = *v114;
      if ( *v114 == -4096 )
        goto LABEL_268;
      if ( v115 != -8192 )
        goto LABEL_147;
      while ( 1 )
      {
        v113 = v110 & (v112 + v113);
        v114 = (__int64 *)(v109 + 8LL * v113);
        v115 = *v114;
        if ( *v114 == -4096 )
          break;
        ++v112;
        if ( v115 != -8192 )
        {
LABEL_147:
          if ( v296 == __PAIR64__(*(_DWORD *)(v115 + 4), *(unsigned __int16 *)(v115 + 2)) )
          {
            v195 = *(_BYTE *)(v115 - 16);
            v196 = (v195 & 2) != 0 ? *(_OWORD **)(v115 - 32) : (_OWORD *)(-16 - 8LL * ((v195 >> 2) & 0xF) + v115);
            if ( *(_OWORD *)v297 == *v196 )
            {
              sub_2082930(
                &v295,
                v114,
                (_QWORD *)(v103[143] + 8LL * *((unsigned int *)v103 + 290)),
                (__int64)(v103 + 143),
                1);
              v189 = (const __m128i **)v295.m128_u64[0];
              goto LABEL_270;
            }
          }
        }
      }
LABEL_268:
      v109 = v103[143];
      v108 = *((unsigned int *)v103 + 290);
LABEL_269:
      sub_2082930(&v295, (_QWORD *)(v109 + 8 * v108), (_QWORD *)(v109 + 8 * v108), (__int64)(v103 + 143), 1);
      v189 = (const __m128i **)v295.m128_u64[0];
LABEL_270:
      v190 = (_QWORD *)(v103[143] + 8LL * *((unsigned int *)v103 + 290));
      sub_2082930(&v295, v190, v190, (__int64)(v103 + 143), 1);
      if ( (const __m128i **)v295.m128_u64[0] != v189 )
      {
        result = *v189;
        if ( *v189 )
          return result;
      }
      if ( (unsigned __int8)sub_20816D0(v103 + 143, &v294, &v295) )
      {
        sub_2082930(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v103[143] + 8LL * *((unsigned int *)v103 + 290)),
          (__int64)(v103 + 143),
          1);
        return (const __m128i *)v294;
      }
      v225 = (_QWORD *)v295.m128_u64[0];
      v226 = (unsigned int)(*((_DWORD *)v103 + 288) + 1);
      v227 = *((unsigned int *)v103 + 290);
      v296 = v295.m128_u64[0];
      v228 = (unsigned int)(4 * v226);
      if ( (unsigned int)v228 >= 3 * (int)v227 )
      {
        sub_208A210((__int64)(v103 + 143), 2 * v227, v226, (unsigned int)(2 * v227), v228, v191);
      }
      else
      {
        v229 = (unsigned int)(v227 - *((_DWORD *)v103 + 289) - v226);
        if ( (unsigned int)v229 > (unsigned int)v227 >> 3 )
          goto LABEL_321;
        sub_208A210((__int64)(v103 + 143), v227, v226, v229, v228, v191);
      }
      sub_20816D0(v103 + 143, &v294, &v296);
      v227 = *((unsigned int *)v103 + 290);
      v225 = (_QWORD *)v296;
      LODWORD(v226) = *((_DWORD *)v103 + 288) + 1;
LABEL_321:
      v204 = *v225 == -4096;
      *((_DWORD *)v103 + 288) = v226;
      if ( !v204 )
        --*((_DWORD *)v103 + 289);
      *v225 = v294;
      v295.m128_u64[0] = (unsigned __int64)v225;
      sub_2082930((__m128 *)&v296, v225, (_QWORD *)(v103[143] + 8 * v227), (__int64)(v103 + 143), 1);
      return (const __m128i *)v294;
    case 0x20:
      v136 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v136 = (__int64 *)*v136;
      v137 = *(_DWORD *)(a1 + 4);
      v138 = *(unsigned __int16 *)(a1 + 2);
      v294 = a1;
      HIDWORD(v296) = v137;
      v139 = *(_BYTE *)(a1 - 16);
      LODWORD(v296) = v138;
      if ( (v139 & 2) != 0 )
        v140 = *(_QWORD **)(a1 - 32);
      else
        v140 = (_QWORD *)(a1 - 8LL * ((v139 >> 2) & 0xF) - 16);
      *(_QWORD *)v297 = *v140;
      v141 = *((unsigned int *)v136 + 296);
      v142 = v136[146];
      *(_QWORD *)&v297[8] = v140[1];
      if ( !(_DWORD)v141 )
        goto LABEL_251;
      v143 = v141 - 1;
      v144 = sub_20A4470(v138, (int *)&v296 + 1, (__int64 *)v297, (__int64 *)&v297[8]);
      v145 = 1;
      v146 = v143 & v144;
      v147 = (__int64 *)(v142 + 8LL * v146);
      v148 = *v147;
      if ( *v147 == -4096 )
        goto LABEL_250;
      if ( v148 != -8192 )
        goto LABEL_183;
      while ( 1 )
      {
        v146 = v143 & (v145 + v146);
        v147 = (__int64 *)(v142 + 8LL * v146);
        v148 = *v147;
        if ( *v147 == -4096 )
          break;
        ++v145;
        if ( v148 != -8192 )
        {
LABEL_183:
          if ( v296 == __PAIR64__(*(_DWORD *)(v148 + 4), *(unsigned __int16 *)(v148 + 2)) )
          {
            v197 = *(_BYTE *)(v148 - 16);
            v198 = (v197 & 2) != 0 ? *(_OWORD **)(v148 - 32) : (_OWORD *)(-16 - 8LL * ((v197 >> 2) & 0xF) + v148);
            if ( *(_OWORD *)v297 == *v198 )
            {
              sub_20829B0(
                &v295,
                v147,
                (_QWORD *)(v136[146] + 8LL * *((unsigned int *)v136 + 296)),
                (__int64)(v136 + 146),
                1);
              v180 = (const __m128i **)v295.m128_u64[0];
              goto LABEL_252;
            }
          }
        }
      }
LABEL_250:
      v142 = v136[146];
      v141 = *((unsigned int *)v136 + 296);
LABEL_251:
      sub_20829B0(&v295, (_QWORD *)(v142 + 8 * v141), (_QWORD *)(v142 + 8 * v141), (__int64)(v136 + 146), 1);
      v180 = (const __m128i **)v295.m128_u64[0];
LABEL_252:
      v181 = (_QWORD *)(v136[146] + 8LL * *((unsigned int *)v136 + 296));
      sub_20829B0(&v295, v181, v181, (__int64)(v136 + 146), 1);
      if ( v180 != (const __m128i **)v295.m128_u64[0] )
      {
        result = *v180;
        if ( *v180 )
          return result;
      }
      if ( (unsigned __int8)sub_2081810(v136 + 146, &v294, &v295) )
      {
        sub_20829B0(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v136[146] + 8LL * *((unsigned int *)v136 + 296)),
          (__int64)(v136 + 146),
          1);
        return (const __m128i *)v294;
      }
      v205 = (_QWORD *)v295.m128_u64[0];
      v206 = (unsigned int)(*((_DWORD *)v136 + 294) + 1);
      v207 = *((unsigned int *)v136 + 296);
      v296 = v295.m128_u64[0];
      v208 = (unsigned int)(4 * v206);
      if ( (unsigned int)v208 >= 3 * (int)v207 )
      {
        sub_208A530((__int64)(v136 + 146), 2 * v207, v206, (unsigned int)(2 * v207), v208, v182);
      }
      else
      {
        v209 = (unsigned int)(v207 - *((_DWORD *)v136 + 295) - v206);
        if ( (unsigned int)v209 > (unsigned int)v207 >> 3 )
          goto LABEL_301;
        sub_208A530((__int64)(v136 + 146), v207, v206, v209, v208, v182);
      }
      sub_2081810(v136 + 146, &v294, &v296);
      v207 = *((unsigned int *)v136 + 296);
      v205 = (_QWORD *)v296;
      LODWORD(v206) = *((_DWORD *)v136 + 294) + 1;
LABEL_301:
      v204 = *v205 == -4096;
      *((_DWORD *)v136 + 294) = v206;
      if ( !v204 )
        --*((_DWORD *)v136 + 295);
      *v205 = v294;
      v295.m128_u64[0] = (unsigned __int64)v205;
      sub_20829B0((__m128 *)&v296, v205, (_QWORD *)(v136[146] + 8 * v207), (__int64)(v136 + 146), 1);
      return (const __m128i *)v294;
    case 0x21:
      v35 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v35 = (__int64 *)*v35;
      v36 = *(_BYTE *)(a1 - 16);
      v294 = a1;
      if ( (v36 & 2) != 0 )
      {
        v37 = *(const __m128i **)(a1 - 32);
        v38 = v37->m128i_i64[0];
        v296 = v37->m128i_i64[0];
        *(_QWORD *)v297 = v37->m128i_i64[1];
      }
      else
      {
        v161 = a1 - 8LL * ((v36 >> 2) & 0xF);
        v38 = *(_QWORD *)(v161 - 16);
        v162 = *(_QWORD *)(v161 - 8);
        v37 = (const __m128i *)(a1 - 8LL * ((v36 >> 2) & 0xF) - 16);
        v296 = v38;
        *(_QWORD *)v297 = v162;
      }
      v39 = _mm_loadu_si128(v37 + 1);
      v40 = *(_DWORD *)(a1 + 4);
      *(__m128i *)&v297[8] = v39;
      v41 = v35[149];
      *(_DWORD *)v298 = v40;
      v42 = *((_DWORD *)v35 + 302);
      if ( !v42 )
        goto LABEL_224;
      v43 = v42 - 1;
      v44 = sub_20A6240(v38, (__int64 *)v297, (__int64 *)&v297[8], (__int64 *)&v297[16], (int *)v298);
      v45 = 1;
      v46 = v43 & v44;
      v47 = (__int64 *)(v41 + 8LL * v46);
      v48 = *v47;
      if ( *v47 == -4096 )
        goto LABEL_223;
      if ( v48 != -8192 )
        goto LABEL_40;
      while ( 1 )
      {
        v46 = v43 & (v45 + v46);
        v47 = (__int64 *)(v41 + 8LL * v46);
        v48 = *v47;
        if ( *v47 == -4096 )
          break;
        ++v45;
        if ( v48 != -8192 )
        {
LABEL_40:
          v49 = *(_BYTE *)(v48 - 16);
          if ( (v49 & 2) != 0 )
            v50 = *(_QWORD *)(v48 - 32);
          else
            v50 = v48 + -16 - 8LL * ((v49 >> 2) & 0xF);
          if ( v296 == *(_QWORD *)v50
            && *(_QWORD *)v297 == *(_QWORD *)(v50 + 8)
            && *(_OWORD *)&v297[8] == *(_OWORD *)(v50 + 16)
            && *(_DWORD *)v298 == *(_DWORD *)(v48 + 4) )
          {
            sub_2082240(&v295, v47, (_QWORD *)(v35[149] + 8LL * *((unsigned int *)v35 + 302)), (__int64)(v35 + 149), 1);
            v168 = (const __m128i **)v295.m128_u64[0];
            goto LABEL_225;
          }
        }
      }
LABEL_223:
      v41 = v35[149];
      v42 = *((_DWORD *)v35 + 302);
LABEL_224:
      sub_2082240(&v295, (_QWORD *)(v41 + 8LL * v42), (_QWORD *)(v41 + 8LL * v42), (__int64)(v35 + 149), 1);
      v168 = (const __m128i **)v295.m128_u64[0];
LABEL_225:
      v169 = (_QWORD *)(v35[149] + 8LL * *((unsigned int *)v35 + 302));
      sub_2082240(&v295, v169, v169, (__int64)(v35 + 149), 1);
      if ( v168 != (const __m128i **)v295.m128_u64[0] )
      {
        result = *v168;
        if ( *v168 )
          return result;
      }
      if ( (unsigned __int8)sub_20805B0(v35 + 149, &v294, &v295) )
      {
        sub_2082240(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v35[149] + 8LL * *((unsigned int *)v35 + 302)),
          (__int64)(v35 + 149),
          1);
        return (const __m128i *)v294;
      }
      v240 = (_QWORD *)v295.m128_u64[0];
      v241 = (unsigned int)(*((_DWORD *)v35 + 300) + 1);
      v242 = *((unsigned int *)v35 + 302);
      v296 = v295.m128_u64[0];
      v243 = (unsigned int)(4 * v241);
      if ( (unsigned int)v243 >= 3 * (int)v242 )
      {
        sub_2087EA0((__int64)(v35 + 149), 2 * v242, v241, (unsigned int)(2 * v242), v243, v170);
      }
      else
      {
        v244 = (unsigned int)(v242 - *((_DWORD *)v35 + 301) - v241);
        if ( (unsigned int)v244 > (unsigned int)v242 >> 3 )
          goto LABEL_336;
        sub_2087EA0((__int64)(v35 + 149), v242, v241, v244, v243, v170);
      }
      sub_20805B0(v35 + 149, &v294, &v296);
      v242 = *((unsigned int *)v35 + 302);
      v240 = (_QWORD *)v296;
      LODWORD(v241) = *((_DWORD *)v35 + 300) + 1;
LABEL_336:
      v204 = *v240 == -4096;
      *((_DWORD *)v35 + 300) = v241;
      if ( !v204 )
        --*((_DWORD *)v35 + 301);
      *v240 = v294;
      v295.m128_u64[0] = (unsigned __int64)v240;
      sub_2082240((__m128 *)&v296, v240, (_QWORD *)(v35[149] + 8 * v242), (__int64)(v35 + 149), 1);
      return (const __m128i *)v294;
    case 0x22:
      v25 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v25 = (__int64 *)*v25;
      v294 = a1;
      v26 = v25 + 152;
      sub_209F700((__int64)&v296, a1);
      v27 = *((unsigned int *)v25 + 308);
      v28 = v25[152];
      if ( !(_DWORD)v27 )
        goto LABEL_275;
      v29 = v27 - 1;
      v287 = 1;
      v269 = (__int64)(v25 + 152);
      v276 = v25;
      v30 = v29 & sub_20A8FC0(v296, (__int64 *)v297, (__int64 *)&v297[8], (int *)&v298[20]);
      while ( 2 )
      {
        v31 = (__int64 *)(v28 + 8LL * v30);
        v32 = *v31;
        if ( *v31 == -4096 || v32 == -8192 )
          goto LABEL_31;
        v33 = v296;
        if ( v33 == (unsigned __int16)sub_206CE80(*v31)
          && ((v250 = *(_BYTE *)(v32 - 16), (v250 & 2) == 0)
            ? (v251 = (_QWORD *)(v32 + -16 - 8LL * ((v250 >> 2) & 0xF)))
            : (v251 = *(_QWORD **)(v32 - 32)),
              *(_QWORD *)v297 == v251[2]
           && *(_QWORD *)&v297[8] == v251[5]
           && *(_QWORD *)&v297[16] == v251[6]
           && *(_OWORD *)v298 == __PAIR128__(v251[3], v251[7])
           && (v252 = *(_DWORD *)&v298[16], v252 == (unsigned int)sub_206CE70(v32))
           && *(_DWORD *)&v298[20] == *(_DWORD *)(v32 + 28)) )
        {
          v25 = v276;
          v26 = (__int64 *)v269;
          sub_2081DC0(&v295, v31, (_QWORD *)(v276[152] + 8LL * *((unsigned int *)v276 + 308)), v269, 1);
          v192 = (const __m128i **)v295.m128_u64[0];
        }
        else
        {
          v32 = *v31;
LABEL_31:
          if ( v32 != -4096 )
          {
            v34 = v29 & (v30 + v287++);
            v30 = v34;
            continue;
          }
          v25 = v276;
          v26 = (__int64 *)v269;
          v28 = v276[152];
          v27 = *((unsigned int *)v276 + 308);
LABEL_275:
          sub_2081DC0(&v295, (_QWORD *)(v28 + 8 * v27), (_QWORD *)(v28 + 8 * v27), (__int64)v26, 1);
          v192 = (const __m128i **)v295.m128_u64[0];
        }
        break;
      }
      v193 = (_QWORD *)(v25[152] + 8LL * *((unsigned int *)v25 + 308));
      sub_2081DC0(&v295, v193, v193, (__int64)v26, 1);
      if ( v192 != (const __m128i **)v295.m128_u64[0] )
      {
        result = *v192;
        if ( *v192 )
          return result;
      }
      if ( (unsigned __int8)sub_207EF10(v26, &v294, &v295) )
      {
        sub_2081DC0(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v25[152] + 8LL * *((unsigned int *)v25 + 308)),
          (__int64)v26,
          1);
        return (const __m128i *)v294;
      }
      v245 = (_QWORD *)v295.m128_u64[0];
      v246 = (unsigned int)(*((_DWORD *)v25 + 306) + 1);
      v247 = *((unsigned int *)v25 + 308);
      v296 = v295.m128_u64[0];
      v248 = (unsigned int)(4 * v246);
      v249 = (unsigned int)(2 * v247);
      if ( (unsigned int)v248 >= 3 * (int)v247 )
      {
        v260 = 2 * v247;
      }
      else
      {
        v249 = (unsigned int)(v247 - *((_DWORD *)v25 + 307) - v246);
        if ( (unsigned int)v249 > (unsigned int)v247 >> 3 )
          goto LABEL_341;
        v260 = v247;
      }
      sub_2085420((__int64)v26, v260, v246, v249, v248, v194);
      sub_207EF10(v26, &v294, &v296);
      v245 = (_QWORD *)v296;
      v247 = *((unsigned int *)v25 + 308);
      LODWORD(v246) = *((_DWORD *)v25 + 306) + 1;
LABEL_341:
      v204 = *v245 == -4096;
      *((_DWORD *)v25 + 306) = v246;
      if ( !v204 )
        --*((_DWORD *)v25 + 307);
      *v245 = v294;
      v295.m128_u64[0] = (unsigned __int64)v245;
      sub_2081DC0((__m128 *)&v296, v245, (_QWORD *)(v25[152] + 8 * v247), (__int64)v26, 1);
      return (const __m128i *)v294;
    case 0x23:
      v14 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v14 = (__int64 *)*v14;
      v294 = a1;
      sub_209F690(&v296, a1);
      v15 = *((unsigned int *)v14 + 314);
      v16 = v14[155];
      if ( !(_DWORD)v15 )
        goto LABEL_263;
      v17 = v15 - 1;
      v18 = sub_20A43F0((__int64 *)&v296);
      v19 = 1;
      v20 = v17 & v18;
      v21 = (__int64 *)(v16 + 8LL * v20);
      v22 = *v21;
      if ( *v21 == -4096 )
        goto LABEL_262;
      if ( v22 != -8192 )
        goto LABEL_17;
      while ( 1 )
      {
        v20 = v17 & (v19 + v20);
        v21 = (__int64 *)(v16 + 8LL * v20);
        v22 = *v21;
        if ( *v21 == -4096 )
          break;
        ++v19;
        if ( v22 != -8192 )
        {
LABEL_17:
          v23 = *(_BYTE *)(v22 - 16);
          if ( (v23 & 2) != 0 )
            v24 = *(_QWORD *)(v22 - 32);
          else
            v24 = -16 - 8LL * ((v23 >> 2) & 0xF) + v22;
          if ( v296 == *(_QWORD *)v24
            && *(_QWORD *)v297 == *(_QWORD *)(v24 + 8)
            && *(_OWORD *)&v297[8] == *(_OWORD *)(v24 + 16) )
          {
            sub_2081B40(&v295, v21, (_QWORD *)(v14[155] + 8LL * *((unsigned int *)v14 + 314)), (__int64)(v14 + 155), 1);
            v186 = (const __m128i **)v295.m128_u64[0];
            goto LABEL_264;
          }
        }
      }
LABEL_262:
      v16 = v14[155];
      v15 = *((unsigned int *)v14 + 314);
LABEL_263:
      sub_2081B40(&v295, (_QWORD *)(v16 + 8 * v15), (_QWORD *)(v16 + 8 * v15), (__int64)(v14 + 155), 1);
      v186 = (const __m128i **)v295.m128_u64[0];
LABEL_264:
      v187 = (_QWORD *)(v14[155] + 8LL * *((unsigned int *)v14 + 314));
      sub_2081B40(&v295, v187, v187, (__int64)(v14 + 155), 1);
      if ( v186 != (const __m128i **)v295.m128_u64[0] )
      {
        result = *v186;
        if ( *v186 )
          return result;
      }
      if ( (unsigned __int8)sub_207E530(v14 + 155, &v294, &v295) )
      {
        sub_2081B40(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v14[155] + 8LL * *((unsigned int *)v14 + 314)),
          (__int64)(v14 + 155),
          1);
        return (const __m128i *)v294;
      }
      v215 = (_QWORD *)v295.m128_u64[0];
      v216 = (unsigned int)(*((_DWORD *)v14 + 312) + 1);
      v217 = *((unsigned int *)v14 + 314);
      v296 = v295.m128_u64[0];
      v218 = (unsigned int)(4 * v216);
      v219 = (unsigned int)(2 * v217);
      if ( (unsigned int)v218 >= 3 * (int)v217 )
      {
        v257 = 2 * v217;
      }
      else
      {
        v219 = (unsigned int)(v217 - *((_DWORD *)v14 + 313) - v216);
        if ( (unsigned int)v219 > (unsigned int)v217 >> 3 )
          goto LABEL_311;
        v257 = v217;
      }
      sub_20842C0((__int64)(v14 + 155), v257, v216, v219, v218, v188);
      sub_207E530(v14 + 155, &v294, &v296);
      v217 = *((unsigned int *)v14 + 314);
      v215 = (_QWORD *)v296;
      LODWORD(v216) = *((_DWORD *)v14 + 312) + 1;
LABEL_311:
      v204 = *v215 == -4096;
      *((_DWORD *)v14 + 312) = v216;
      if ( !v204 )
        --*((_DWORD *)v14 + 313);
      *v215 = v294;
      v295.m128_u64[0] = (unsigned __int64)v215;
      sub_2081B40((__m128 *)&v296, v215, (_QWORD *)(v14[155] + 8 * v217), (__int64)(v14 + 155), 1);
      return (const __m128i *)v294;
    case 0x24:
      v2 = *(__int64 **)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 8) & 4) != 0 )
        v2 = (__int64 *)*v2;
      v294 = a1;
      sub_209F920((__int64)&v296, a1);
      v3 = *((_DWORD *)v2 + 320);
      v4 = v2[158];
      if ( !v3 )
        goto LABEL_245;
      v293 = 0;
      v295.m128_u64[0] = (unsigned __int64)&v293;
      sub_206F860((int **)&v295, v299);
      sub_206F860((int **)&v295, (__int64)v300);
      sub_206F860((int **)&v295, v301);
      sub_206F860((int **)&v295, v302);
      v5 = sub_20A5250(
             v293,
             (__int64 *)&v296,
             (__int64 *)v297,
             (int *)&v297[8],
             (__int64 *)&v297[16],
             (__int64 *)&v298[16],
             (int *)&v298[12]);
      v6 = v3 - 1;
      v7 = 1;
      v8 = (v3 - 1) & v5;
      while ( 2 )
      {
        v9 = (__int64 *)(v4 + 8LL * v8);
        v10 = *v9;
        if ( *v9 == -8192 || v10 == -4096 )
          goto LABEL_243;
        v11 = *(_BYTE *)(v10 - 16);
        if ( (v11 & 2) != 0 )
          v12 = *(_QWORD **)(v10 - 32);
        else
          v12 = (_QWORD *)(v10 + -16 - 8LL * ((v11 >> 2) & 0xF));
        if ( v296 != v12[2] )
          goto LABEL_11;
        v174 = *(_QWORD *)v297;
        v175 = *v9;
        if ( *(_BYTE *)v10 != 16 )
        {
          v289 = v7;
          v284 = v8;
          v279 = v6;
          v273 = *v9;
          v175 = sub_209E6C0(*v9);
          v7 = v289;
          v8 = v284;
          v6 = v279;
          v10 = v273;
        }
        if ( v174 != v175
          || *(_DWORD *)&v297[8] != *(_DWORD *)(v10 + 16)
          || *(_QWORD *)&v297[16] != v12[1]
          || *(_QWORD *)v298 != v12[3] )
        {
          goto LABEL_11;
        }
        v292 = v7;
        v290 = v8;
        v285 = v6;
        v280 = v10;
        v274 = *(_DWORD *)&v298[8];
        v176 = sub_206CE70(v10);
        v6 = v285;
        v8 = v290;
        v7 = v292;
        if ( __PAIR64__(*(unsigned int *)&v298[12], v274) == __PAIR64__(*(_DWORD *)(v280 + 20), v176)
          && ((v262 = *(_BYTE *)(v280 - 16), (v262 & 2) == 0)
            ? (v263 = (__int64 *)(v280 + -16 - 8LL * ((v262 >> 2) & 0xF)))
            : (v263 = *(__int64 **)(v280 - 32)),
              *(_QWORD *)&v298[16] == v263[5]
           && (v281 = v290,
               v291 = v263,
               v264 = sub_206CDC0((__int64)&v295, v299, v263[6]),
               v6 = v285,
               v8 = v281,
               v7 = v292,
               v264)
           && (v265 = sub_206CDC0((__int64)&v295, (__int64)v300, v291[7]), v6 = v285, v8 = v281, v7 = v292, v265)
           && (v266 = sub_206CDC0((__int64)&v295, v301, v291[8]), v6 = v285, v8 = v281, v7 = v292, v266)) )
        {
          if ( sub_206CDC0((__int64)&v295, v302, v291[9]) )
          {
            sub_2081BC0(&v295, v9, (_QWORD *)(v2[158] + 8LL * *((unsigned int *)v2 + 320)), (__int64)(v2 + 158), 1);
            v177 = (const __m128i **)v295.m128_u64[0];
            goto LABEL_246;
          }
          v10 = *v9;
          v6 = v285;
          v8 = v281;
          v7 = v292;
        }
        else
        {
          v10 = *v9;
        }
LABEL_243:
        if ( v10 != -4096 )
        {
LABEL_11:
          v13 = v7 + v8;
          ++v7;
          v8 = v6 & v13;
          continue;
        }
        break;
      }
      v4 = v2[158];
      v3 = *((_DWORD *)v2 + 320);
LABEL_245:
      sub_2081BC0(&v295, (_QWORD *)(v4 + 8LL * v3), (_QWORD *)(v4 + 8LL * v3), (__int64)(v2 + 158), 1);
      v177 = (const __m128i **)v295.m128_u64[0];
LABEL_246:
      v178 = (_QWORD *)(v2[158] + 8LL * *((unsigned int *)v2 + 320));
      sub_2081BC0(&v295, v178, v178, (__int64)(v2 + 158), 1);
      if ( v177 != (const __m128i **)v295.m128_u64[0] )
      {
        result = *v177;
        if ( *v177 )
          return result;
      }
      if ( (unsigned __int8)sub_207E6E0(v2 + 158, &v294, &v295) )
      {
        sub_2081BC0(
          (__m128 *)&v296,
          v295.m128_u64[0],
          (_QWORD *)(v2[158] + 8LL * *((unsigned int *)v2 + 320)),
          (__int64)(v2 + 158),
          1);
        return (const __m128i *)v294;
      }
      v230 = (_QWORD *)v295.m128_u64[0];
      v231 = (unsigned int)(*((_DWORD *)v2 + 318) + 1);
      v232 = *((unsigned int *)v2 + 320);
      v296 = v295.m128_u64[0];
      v233 = (unsigned int)(4 * v231);
      v234 = (unsigned int)(2 * v232);
      if ( (unsigned int)v233 >= 3 * (int)v232 )
      {
        v256 = 2 * v232;
      }
      else
      {
        v234 = (unsigned int)(v232 - *((_DWORD *)v2 + 319) - v231);
        if ( (unsigned int)v234 > (unsigned int)v232 >> 3 )
          goto LABEL_326;
        v256 = v232;
      }
      sub_20844A0((__int64)(v2 + 158), v256, v231, v234, v233, v179);
      sub_207E6E0(v2 + 158, &v294, &v296);
      v232 = *((unsigned int *)v2 + 320);
      v230 = (_QWORD *)v296;
      LODWORD(v231) = *((_DWORD *)v2 + 318) + 1;
LABEL_326:
      v204 = *v230 == -4096;
      *((_DWORD *)v2 + 318) = v231;
      if ( !v204 )
        --*((_DWORD *)v2 + 319);
      *v230 = v294;
      v295.m128_u64[0] = (unsigned __int64)v230;
      sub_2081BC0((__m128 *)&v296, v230, (_QWORD *)(v2[158] + 8 * v232), (__int64)(v2 + 158), 1);
      return (const __m128i *)v294;
  }
}
