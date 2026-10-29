__int64 __fastcall sub_95B080(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v6; // r15
  __m128i *v7; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int8 *v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int8 *v17; // rbp
  int v18; // r11d
  int v19; // edx
  unsigned __int64 v20; // r8
  int v21; // eax
  const __m128i *v22; // rsi
  __int8 *v23; // rax
  const __m128i *v24; // rax
  unsigned int v25; // eax
  unsigned __int64 *v26; // rdx
  unsigned __int64 *v27; // rdx
  __m128i *v28; // r12
  int v29; // r13d
  __int16 *v30; // r11
  unsigned __int64 v31; // rsi
  __int16 *v32; // r10
  int v33; // edi
  signed __int64 v34; // rbx
  __int16 *v35; // r9
  int v36; // edx
  int v37; // eax
  __int64 v38; // r14
  unsigned __int8 v39; // r8
  unsigned __int8 v40; // r11
  unsigned __int8 v41; // r10
  unsigned __int8 v42; // r9
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbp
  int v47; // r8d
  char v48; // cl
  unsigned int v49; // r8d
  unsigned int v50; // edx
  unsigned __int64 *v51; // rcx
  __m128i *v52; // r8
  const __m128i *v53; // rax
  size_t v54; // r15
  unsigned __int64 v55; // rdx
  const __m128i *v56; // r14
  signed __int64 v57; // r14
  const void *v58; // rsi
  char *v59; // rax
  char *v60; // rbx
  const __m128i *v61; // r14
  __m128i *v62; // r8
  __m128i v63; // xmm0
  __m128i *v64; // rdi
  __int64 v66; // rdi
  int v67; // ecx
  _BYTE *v68; // rax
  __int64 v69; // rdi
  int v70; // esi
  __m128i *v71; // rax
  const void *v72; // rsi
  const __m128i *v73; // rax
  unsigned int v74; // eax
  unsigned __int64 *v75; // rdx
  unsigned __int64 *v76; // rdx
  __m128i *v77; // r13
  unsigned __int16 *v78; // r11
  unsigned __int64 v79; // rbx
  __int64 v80; // r8
  __int16 *v81; // r10
  int v82; // esi
  __int16 *v83; // r9
  int v84; // edx
  signed __int64 v85; // rbp
  int v86; // eax
  __int64 v87; // r14
  unsigned __int16 v88; // r15
  unsigned __int8 v89; // r11
  unsigned __int8 v90; // di
  unsigned __int8 v91; // r10
  unsigned __int8 v92; // r9
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // r12
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // r12
  int v97; // edi
  char v98; // cl
  unsigned int v99; // edi
  unsigned int v100; // edx
  unsigned __int64 *v101; // rcx
  const __m128i *v102; // rsi
  _BYTE *v103; // r9
  char *v104; // rcx
  __m128i *v105; // r8
  size_t v106; // r14
  __int8 *v107; // rdx
  const __m128i *v108; // rax
  signed __int64 v109; // rbx
  const void *v110; // rsi
  char *v111; // r8
  char *v112; // rbp
  const __m128i *v113; // rax
  __m128i *v114; // r8
  __m128i v115; // xmm2
  bool v116; // zf
  __m128i *v117; // rdi
  __m128i *v118; // rax
  _BOOL8 v119; // rbp
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rax
  __m128i *v123; // rdi
  _BOOL8 v124; // r12
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rax
  unsigned int v129; // r14d
  unsigned int v130; // ecx
  unsigned __int64 *v131; // rdi
  unsigned __int64 v132; // rdx
  __m128i *v133; // rcx
  const __m128i *v134; // rax
  __m128i v135; // xmm6
  __int32 *v136; // r14
  char *v137; // rax
  __int64 *v138; // rdx
  char *v139; // rcx
  __int64 v140; // rsi
  unsigned int v141; // eax
  unsigned int v142; // r14d
  unsigned __int64 *v143; // rsi
  __m128i *v144; // rdx
  const __m128i *v145; // rsi
  __m128i v146; // xmm4
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rax
  __int32 *v149; // rax
  char *v150; // rdx
  __int64 *v151; // rcx
  char *v152; // rsi
  __int64 v153; // rax
  int v154; // r11d
  signed __int64 v155; // r10
  unsigned __int64 v156; // r9
  __int64 v157; // r9
  __int8 *v158; // r8
  const __m128i *v159; // rdi
  signed __int64 v160; // rbx
  const void *v161; // rsi
  char *v162; // rax
  __int8 *v163; // rax
  const __m128i *v164; // rbx
  __m128i *v165; // r8
  __m128i v166; // xmm5
  int v167; // r11d
  int v168; // r12d
  __int16 *v169; // rbp
  unsigned __int64 v170; // rsi
  __int16 *v171; // r11
  int v172; // edi
  signed __int64 v173; // rbx
  __int16 *v174; // r10
  int v175; // edx
  int v176; // eax
  __int64 v177; // r9
  unsigned __int16 v178; // r14
  unsigned __int8 v179; // r8
  unsigned __int8 v180; // r11
  unsigned __int8 v181; // r10
  unsigned __int8 v182; // r14
  unsigned __int64 v183; // rbp
  unsigned __int64 v184; // rbp
  unsigned __int64 v185; // rax
  unsigned __int64 v186; // rbp
  int v187; // r8d
  int v188; // edi
  char v189; // cl
  unsigned int v190; // edi
  unsigned int v191; // edx
  unsigned __int64 *v192; // rcx
  __m128i *v193; // r8
  const __m128i *v194; // rax
  char *v195; // rdx
  const __m128i *v196; // r14
  signed __int64 v197; // r14
  const void *v198; // rsi
  char *v199; // rax
  char *v200; // rbx
  const __m128i *v201; // r14
  __m128i *v202; // r8
  __m128i v203; // xmm7
  unsigned __int64 v204; // rax
  unsigned __int64 v205; // rax
  unsigned __int64 v206; // rax
  unsigned __int64 v207; // r15
  unsigned __int64 v208; // rcx
  __m128i *v209; // r8
  const __m128i *v210; // r14
  __m128i v211; // xmm7
  unsigned int v212; // r15d
  unsigned __int64 *v213; // rax
  unsigned int v214; // ecx
  __int64 v215; // rdi
  __m128i *v216; // rcx
  const __m128i *v217; // rax
  __m128i v218; // xmm7
  __int32 *v219; // r14
  char *v220; // rax
  __int64 *v221; // rdx
  char *v222; // rcx
  __int64 v223; // rsi
  __m128i *v224; // r8
  const __m128i *v225; // rax
  __m128i v226; // xmm4
  unsigned __int64 v227; // rax
  unsigned __int64 v228; // rax
  size_t v229; // rax
  __m128i *v230; // r8
  const __m128i *v231; // r14
  __m128i v232; // xmm5
  __m128i *v233; // rdx
  const __m128i *v234; // rsi
  __m128i v235; // xmm5
  _DWORD *v236; // rbx
  __int8 *v237; // rdx
  __int64 v238; // rax
  __m128i *v239; // r8
  const __m128i *v240; // rbx
  __m128i v241; // xmm5
  int v242; // [rsp+0h] [rbp-1A8h]
  unsigned __int64 v243; // [rsp+0h] [rbp-1A8h]
  unsigned __int64 v244; // [rsp+0h] [rbp-1A8h]
  int v245[2]; // [rsp+8h] [rbp-1A0h]
  const __m128i *v246; // [rsp+8h] [rbp-1A0h]
  const __m128i *v247; // [rsp+8h] [rbp-1A0h]
  __int64 v248; // [rsp+10h] [rbp-198h]
  int v249; // [rsp+10h] [rbp-198h]
  int v250[2]; // [rsp+10h] [rbp-198h]
  unsigned __int16 v251; // [rsp+10h] [rbp-198h]
  int v252[2]; // [rsp+10h] [rbp-198h]
  int v253; // [rsp+10h] [rbp-198h]
  int v254; // [rsp+10h] [rbp-198h]
  int v255; // [rsp+18h] [rbp-190h]
  unsigned __int16 v256; // [rsp+18h] [rbp-190h]
  int v257[2]; // [rsp+18h] [rbp-190h]
  __int64 v258; // [rsp+18h] [rbp-190h]
  unsigned __int16 v259; // [rsp+20h] [rbp-188h]
  unsigned __int16 v260; // [rsp+20h] [rbp-188h]
  int v261; // [rsp+20h] [rbp-188h]
  unsigned __int16 v262; // [rsp+20h] [rbp-188h]
  unsigned __int64 v263; // [rsp+20h] [rbp-188h]
  unsigned __int16 v264; // [rsp+28h] [rbp-180h]
  unsigned __int16 v265; // [rsp+28h] [rbp-180h]
  unsigned __int64 v266; // [rsp+28h] [rbp-180h]
  unsigned __int16 v267; // [rsp+28h] [rbp-180h]
  __int64 v268; // [rsp+30h] [rbp-178h]
  __int64 v269; // [rsp+38h] [rbp-170h]
  __int64 v270; // [rsp+40h] [rbp-168h]
  unsigned __int64 v271; // [rsp+40h] [rbp-168h]
  unsigned __int64 v272; // [rsp+48h] [rbp-160h]
  _DWORD *v273; // [rsp+50h] [rbp-158h]
  __m128i *v274; // [rsp+50h] [rbp-158h]
  __m128i *v275; // [rsp+58h] [rbp-150h]
  int v276; // [rsp+6Ch] [rbp-13Ch] BYREF
  unsigned __int64 v277; // [rsp+70h] [rbp-138h]
  size_t n; // [rsp+78h] [rbp-130h]
  __int64 v279; // [rsp+80h] [rbp-128h]
  unsigned __int64 v280; // [rsp+90h] [rbp-118h]
  size_t v281; // [rsp+98h] [rbp-110h]
  __int64 v282; // [rsp+A0h] [rbp-108h]
  int v283[2]; // [rsp+B0h] [rbp-F8h] BYREF
  size_t v284; // [rsp+B8h] [rbp-F0h]
  __int64 v285; // [rsp+C0h] [rbp-E8h]
  void *src[4]; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned __int64 v287; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v288; // [rsp+F8h] [rbp-B0h]
  unsigned __int64 *v289; // [rsp+100h] [rbp-A8h]
  unsigned __int8 *v290; // [rsp+108h] [rbp-A0h]
  unsigned __int8 *v291; // [rsp+110h] [rbp-98h]
  unsigned __int64 v292; // [rsp+118h] [rbp-90h] BYREF
  __int64 v293; // [rsp+120h] [rbp-88h] BYREF
  unsigned __int64 v294; // [rsp+128h] [rbp-80h] BYREF
  __int64 v295; // [rsp+130h] [rbp-78h] BYREF
  unsigned __int64 v296; // [rsp+138h] [rbp-70h] BYREF
  __int64 v297; // [rsp+140h] [rbp-68h] BYREF
  unsigned __int64 v298; // [rsp+148h] [rbp-60h]
  unsigned __int64 v299; // [rsp+150h] [rbp-58h]
  unsigned __int64 v300; // [rsp+158h] [rbp-50h]
  unsigned __int64 v301; // [rsp+168h] [rbp-40h]

  v6 = a1;
  v7 = (__m128i *)a2;
  v301 = __readfsqword(0x28u);
  v11 = sub_953C30(a1, a4, a5, a2, a3, a6);
  v12 = v11;
  if ( v11 > 0xFFFFFFFFFFFFFF88LL )
    return v12;
  v13 = &a4[v11];
  v14 = a5 - v11;
  LODWORD(v15) = 0x20000;
  *(_QWORD *)v245 = *(_QWORD *)(a1 + 29904);
  if ( *(_DWORD *)(a1 + 30176) )
    LODWORD(v15) = *(_DWORD *)(a1 + 29944);
  v242 = *(_DWORD *)(a1 + 30204);
  v16 = sub_95AE20(a1, (unsigned int *)&v276, v13, v14);
  v15 = (unsigned int)v15;
  v12 = v16;
  if ( v16 > 0xFFFFFFFFFFFFFF88LL )
    return v12;
  if ( (!a2 || !a3) && v276 > 0 || a2 > 0xFFFFFFFFFFEFFFFFLL )
    return -70;
  v17 = &v13[v16];
  v18 = v276;
  v19 = *(_DWORD *)(a1 + 30180);
  v20 = v14 - v16;
  if ( a3 <= (unsigned __int64)(unsigned int)v15 )
    v15 = a3;
  if ( a2 + v15 - *(_QWORD *)v245 > 0x1000000 && !v242 )
  {
    if ( v276 <= 8 || (v66 = *(_QWORD *)(a1 + 16), v67 = *(_DWORD *)(v66 + 4), !(1 << v67)) )
    {
      *(_DWORD *)(v6 + 30204) = 0;
      goto LABEL_14;
    }
    v68 = (_BYTE *)(v66 + 10);
    v69 = v66 + 8LL * (unsigned int)((1 << v67) - 1) + 18;
    v70 = 0;
    do
    {
      v70 -= (*v68 < 0x17u) - 1;
      v68 += 8;
    }
    while ( (_BYTE *)v69 != v68 );
    v242 = (unsigned int)(v70 << (8 - v67)) > 6;
  }
  *(_DWORD *)(v6 + 30204) = 0;
  if ( v242 )
  {
    if ( v19 )
      return sub_956640(v6, (signed __int64)v7, a3, v17, v20, v18);
    else
      return sub_9587D0(v6, (signed __int64)v7, a3, v17, v20, v18);
  }
LABEL_14:
  v21 = *(_DWORD *)(v6 + 30368);
  if ( v21 == 2 )
  {
    if ( v19 )
      return sub_955100(v6, v7, a3, v17, v20, v18);
    v71 = (__m128i *)((char *)v7 + a3);
    v72 = *(const void **)(v6 + 30120);
    if ( a3 <= 0 )
      v71 = v7;
    src[0] = *(void **)(v6 + 30120);
    v258 = (__int64)v71;
    v244 = *(_QWORD *)(v6 + 30360);
    if ( !v18 )
    {
      v77 = v7;
      goto LABEL_122;
    }
    v73 = *(const __m128i **)(v6 + 29896);
    *(_DWORD *)(v6 + 30004) = 1;
    v247 = v73;
    v269 = *(_QWORD *)(v6 + 29904);
    v271 = *(_QWORD *)(v6 + 29912);
    v298 = *(unsigned int *)(v6 + 26684);
    v299 = *(unsigned int *)(v6 + 26688);
    v300 = *(unsigned int *)(v6 + 26692);
    if ( !v20 )
      return -20;
    v290 = v17;
    v291 = v17 + 8;
    v74 = v17[v20 - 1];
    v132 = *v17;
    v289 = (unsigned __int64 *)v17;
    v287 = v132;
    switch ( v20 )
    {
      case 1uLL:
        goto LABEL_153;
      case 2uLL:
        goto LABEL_152;
      case 3uLL:
        goto LABEL_151;
      case 4uLL:
        goto LABEL_150;
      case 5uLL:
        goto LABEL_149;
      case 6uLL:
        goto LABEL_148;
      case 7uLL:
        v132 += (unsigned __int64)v17[6] << 48;
LABEL_148:
        v132 += (unsigned __int64)v17[5] << 40;
LABEL_149:
        v132 += (unsigned __int64)v17[4] << 32;
LABEL_150:
        v132 += (unsigned __int64)v17[3] << 24;
LABEL_151:
        v132 += (unsigned __int64)v17[2] << 16;
LABEL_152:
        v287 = ((unsigned __int64)v17[1] << 8) + v132;
LABEL_153:
        if ( !(_BYTE)v74 )
          return -20;
        _BitScanReverse(&v74, v74);
        LODWORD(v288) = (v74 ^ 0x1F) - 8 * v20 + 41;
LABEL_71:
        v249 = v18;
        sub_954540((__int64 *)&v292, &v293, &v287, *(_QWORD *)v6);
        sub_954540((__int64 *)&v294, &v295, v75, *(_QWORD *)(v6 + 16));
        sub_954540((__int64 *)&v296, &v297, v76, *(_QWORD *)(v6 + 8));
        v268 = v6;
        v77 = v7;
        v274 = v7;
        break;
      default:
        v289 = (unsigned __int64 *)&v17[v20 - 8];
        v287 = *v289;
        if ( !(_BYTE)v74 )
          return -20;
        _BitScanReverse(&v74, v74);
        LODWORD(v288) = (v74 ^ 0x1F) - 23;
        if ( v20 > 0xFFFFFFFFFFFFFF88LL )
          return -20;
        goto LABEL_71;
    }
    while ( 1 )
    {
      v78 = (unsigned __int16 *)(v293 + 8 * v292);
      v79 = *((unsigned int *)v78 + 1);
      v80 = *v78;
      v81 = (__int16 *)(v297 + 8 * v296);
      v82 = *((unsigned __int8 *)v81 + 2);
      v83 = (__int16 *)(v295 + 8 * v294);
      v84 = *((unsigned __int8 *)v78 + 2);
      v85 = *((unsigned int *)v81 + 1);
      v86 = *((unsigned __int8 *)v83 + 2);
      v87 = *((unsigned int *)v83 + 1);
      v260 = *v81;
      v88 = *v83;
      v89 = *((_BYTE *)v78 + 3);
      v90 = v86 + v84 + v82;
      v91 = *((_BYTE *)v81 + 3);
      v92 = *((_BYTE *)v83 + 3);
      v265 = v88;
      if ( (unsigned __int8)v86 > 1u )
      {
        v93 = v287 << v288;
        LODWORD(v288) = v288 + v86;
        v94 = v93 >> -(char)v86;
        v300 = v299;
        v95 = v298;
        v96 = v87 + v94;
        v298 = v96;
        v299 = v95;
        goto LABEL_74;
      }
      v124 = (_DWORD)v79 == 0;
      if ( !(_BYTE)v86 )
      {
        v96 = *(&v288 + v124 + 10);
        v125 = *(&v288 + ((_DWORD)v79 != 0) + 10);
        v298 = v96;
        v299 = v125;
        goto LABEL_74;
      }
      v207 = v287 << v288;
      LODWORD(v288) = v288 + 1;
      v208 = (unsigned int)(v87 + v124) + (v207 >> 63);
      if ( v208 == 3 )
        break;
      v96 = *(&v298 + v208) - (*(&v298 + v208) == 0);
      if ( v208 != 1 )
        goto LABEL_243;
LABEL_244:
      v299 = v298;
      v298 = v96;
LABEL_74:
      if ( (_BYTE)v82 )
      {
        v128 = v287 << v288;
        LODWORD(v288) = v288 + v82;
        v85 += v128 >> -(char)v82;
      }
      if ( v90 > 0x1Eu )
      {
        v141 = v288;
        if ( (unsigned int)v288 > 0x40 )
        {
          v289 = (unsigned __int64 *)&unk_23B4BE0;
        }
        else if ( v289 >= (unsigned __int64 *)v291 )
        {
          LODWORD(v288) = v288 & 7;
          v289 = (unsigned __int64 *)((char *)v289 - (v141 >> 3));
          v287 = *v289;
        }
        else if ( v289 != (unsigned __int64 *)v290 )
        {
          v142 = (unsigned int)v288 >> 3;
          v143 = (unsigned __int64 *)((char *)v289 - ((unsigned int)v288 >> 3));
          if ( v290 > (unsigned __int8 *)v143 )
          {
            v142 = (_DWORD)v289 - (_DWORD)v290;
            v143 = (unsigned __int64 *)((char *)v289 - (unsigned int)((_DWORD)v289 - (_DWORD)v290));
          }
          v289 = v143;
          LODWORD(v288) = v288 - 8 * v142;
          v287 = *v143;
        }
      }
      if ( (_BYTE)v84 )
      {
        v127 = v287 << v288;
        LODWORD(v288) = v288 + v84;
        v79 += v127 >> -(char)v84;
      }
      if ( v249 != 1 )
      {
        v97 = v288 + v89 + v91;
        v98 = 64 - v97;
        v99 = v92 + v97;
        v292 = v80 + (~(-1LL << v89) & (v287 >> (64 - ((unsigned __int8)v288 + v89))));
        LODWORD(v288) = v99;
        v296 = v260 + (~(-1LL << v91) & (v287 >> v98));
        v294 = v265 + (~(-1LL << v92) & (v287 >> (64 - (unsigned __int8)v99)));
        if ( v99 > 0x40 )
        {
          v289 = (unsigned __int64 *)&unk_23B4BE0;
        }
        else if ( v289 >= (unsigned __int64 *)v291 )
        {
          LODWORD(v288) = v99 & 7;
          v289 = (unsigned __int64 *)((char *)v289 - (v99 >> 3));
          v287 = *v289;
        }
        else if ( v289 != (unsigned __int64 *)v290 )
        {
          v100 = v99 >> 3;
          v101 = (unsigned __int64 *)((char *)v289 - (v99 >> 3));
          if ( v290 > (unsigned __int8 *)v101 )
          {
            v100 = (_DWORD)v289 - (_DWORD)v290;
            v101 = (unsigned __int64 *)((char *)v289 - (unsigned int)((_DWORD)v289 - (_DWORD)v290));
          }
          v289 = v101;
          LODWORD(v288) = v99 - 8 * v100;
          v287 = *v101;
        }
      }
      v102 = (const __m128i *)src[0];
      v103 = *(_BYTE **)(v268 + 30360);
      v104 = (char *)src[0] + v79;
      if ( (char *)src[0] + v79 > v103 )
      {
        v154 = v249;
        v155 = v85;
        v6 = v268;
        v7 = v274;
        if ( v249 <= 0 )
          return -20;
        v156 = v103 - (char *)src[0];
        if ( v156 )
        {
          v12 = -70;
          if ( v156 > v258 - (__int64)v77 )
            return v12;
          sub_953850(v77, (const __m128i *)src[0], v156);
          v154 = v249;
          v155 = v85;
          v79 -= v157;
          v77 = (__m128i *)((char *)v77 + v157);
        }
        v158 = &v77->m128i_i8[v79];
        v12 = v155 + v79;
        *(_DWORD *)(v268 + 30368) = 0;
        v244 = v268 + 95908;
        src[0] = (void *)(v268 + 30372);
        v159 = (__m128i *)((char *)v77 + v79 - v96);
        if ( v258 - 32 < (unsigned __int64)v77->m128i_u64 + v155 + v79 || v268 + 95908 < v79 + v268 + 30372 )
        {
          v254 = v154;
          v280 = v79;
          v281 = v155;
          v282 = v96;
          v229 = sub_953A20((unsigned __int64)v77, v258, (const __m128i **)src, v244, v247, v269, v79, v155, v96, v271);
          v154 = v254;
          v12 = v229;
        }
        else
        {
          *v77 = _mm_loadu_si128((const __m128i *)(v268 + 30372));
          if ( v79 > 0x10 )
          {
            v77[1] = _mm_loadu_si128((const __m128i *)(v268 + 30388));
            if ( (__int64)(v79 - 16) > 16 )
            {
              v233 = v77 + 2;
              v234 = (const __m128i *)(v268 + 30404);
              do
              {
                v235 = _mm_loadu_si128(v234);
                v233 += 2;
                v234 += 2;
                v233[-2] = v235;
                v233[-1] = _mm_loadu_si128(v234 - 1);
              }
              while ( v158 > (__int8 *)v233 );
            }
          }
          src[0] = (void *)(v79 + v268 + 30372);
          if ( v96 <= v158 - (__int8 *)v247 )
          {
LABEL_204:
            if ( v96 <= 0xF )
            {
              if ( v96 > 7 )
              {
                *(_QWORD *)v158 = v159->m128i_i64[0];
              }
              else
              {
                *v158 = v159->m128i_i8[0];
                v158[1] = v159->m128i_i8[1];
                v158[2] = v159->m128i_i8[2];
                v158[3] = v159->m128i_i8[3];
                v236 = (__int32 *)((char *)v159->m128i_i32 + dword_23B4BA0[v96]);
                *((_DWORD *)v158 + 1) = *v236;
                v159 = (const __m128i *)((char *)v236 - dword_23B4BC0[v96]);
              }
              if ( (unsigned __int64)v155 > 8 )
              {
                v237 = &v158[v155];
                if ( v158 - (__int8 *)v159 > 15 )
                {
                  *(__m128i *)(v158 + 8) = _mm_loadu_si128((const __m128i *)&v159->m128i_u64[1]);
                  if ( v155 - 8 > 16 )
                  {
                    v239 = (__m128i *)(v158 + 24);
                    v240 = (const __m128i *)((char *)v159 + 24);
                    do
                    {
                      v241 = _mm_loadu_si128(v240);
                      v239 += 2;
                      v240 += 2;
                      v239[-2] = v241;
                      v239[-1] = _mm_loadu_si128(v240 - 1);
                    }
                    while ( v237 > (__int8 *)v239 );
                  }
                }
                else
                {
                  v238 = 1;
                  do
                  {
                    *(_QWORD *)&v158[v238 * 8] = v159->m128i_i64[v238];
                    ++v238;
                  }
                  while ( v237 > &v158[v238 * 8] );
                }
              }
            }
            else
            {
              *(__m128i *)v158 = _mm_loadu_si128(v159);
              if ( v155 > 16 )
              {
                v163 = &v158[v155];
                v164 = v159 + 1;
                v165 = (__m128i *)(v158 + 16);
                do
                {
                  v166 = _mm_loadu_si128(v164);
                  v165 += 2;
                  v164 += 2;
                  v165[-2] = v166;
                  v165[-1] = _mm_loadu_si128(v164 - 1);
                }
                while ( v163 > (__int8 *)v165 );
              }
            }
          }
          else
          {
            if ( v96 > (unsigned __int64)&v158[-v269] )
              return -20;
            v160 = &v77->m128i_i8[v79 - v96] - (__int8 *)v247;
            v161 = (const void *)(v271 + v160);
            if ( v271 < v271 + v160 + v155 )
            {
              v266 = v12;
              v261 = v154;
              *(_QWORD *)v250 = v155;
              v162 = (char *)memmove(v158, v161, -v160);
              v159 = v247;
              v12 = v266;
              v154 = v261;
              v158 = &v162[-v160];
              v155 = v160 + *(_QWORD *)v250;
              goto LABEL_204;
            }
            v263 = v12;
            v253 = v154;
            memmove(v158, v161, v155);
            v154 = v253;
            v12 = v263;
          }
        }
        if ( v12 > 0xFFFFFFFFFFFFFF88LL )
          return v12;
        v77 = (__m128i *)((char *)v77 + v12);
        v167 = v154 - 1;
        if ( v167 )
        {
          v168 = v167;
          while ( 1 )
          {
            v169 = (__int16 *)(v293 + 8 * v292);
            v170 = *((unsigned int *)v169 + 1);
            v171 = (__int16 *)(v297 + 8 * v296);
            v172 = *((unsigned __int8 *)v171 + 2);
            v173 = *((unsigned int *)v171 + 1);
            v251 = *v169;
            v174 = (__int16 *)(v295 + 8 * v294);
            v175 = *((unsigned __int8 *)v169 + 2);
            v176 = *((unsigned __int8 *)v174 + 2);
            v177 = *((unsigned int *)v174 + 1);
            v262 = *v171;
            v178 = *v174;
            v179 = v176 + v175 + v172;
            v180 = *((_BYTE *)v171 + 3);
            v181 = *((_BYTE *)v174 + 3);
            v267 = v178;
            v182 = *((_BYTE *)v169 + 3);
            if ( (unsigned __int8)v176 > 1u )
            {
              v183 = v287 << v288;
              LODWORD(v288) = v288 + v176;
              v184 = v183 >> -(char)v176;
              v300 = v299;
              v185 = v298;
              v186 = v177 + v184;
              v298 = v186;
              v299 = v185;
              goto LABEL_213;
            }
            if ( !(_BYTE)v176 )
            {
              v186 = *(&v288 + ((_DWORD)v170 == 0) + 10);
              v204 = *(&v288 + ((_DWORD)v170 != 0) + 10);
              v298 = v186;
              v299 = v204;
              goto LABEL_213;
            }
            v227 = v287 << v288 >> 63;
            LODWORD(v288) = v288 + 1;
            v228 = (unsigned int)v177 + ((_DWORD)v170 == 0) + v227;
            if ( v228 == 3 )
              break;
            v186 = *(&v298 + v228) - (*(&v298 + v228) == 0);
            if ( v228 != 1 )
              goto LABEL_284;
LABEL_285:
            v299 = v298;
            v298 = v186;
LABEL_213:
            if ( (_BYTE)v172 )
            {
              v206 = v287 << v288;
              LODWORD(v288) = v288 + v172;
              v173 += v206 >> -(char)v172;
            }
            if ( v179 > 0x1Eu )
            {
              v212 = v288;
              if ( (unsigned int)v288 > 0x40 )
              {
                v289 = (unsigned __int64 *)&unk_23B4BE0;
              }
              else
              {
                v213 = v289;
                if ( v289 >= (unsigned __int64 *)v291 )
                {
                  LODWORD(v288) = v288 & 7;
                  v289 = (unsigned __int64 *)((char *)v289 - (v212 >> 3));
                  v287 = *v289;
                }
                else if ( v289 != (unsigned __int64 *)v290 )
                {
                  v214 = (unsigned int)v288 >> 3;
                  v215 = (unsigned int)v288 >> 3;
                  if ( v290 > (unsigned __int8 *)v289 - v215 )
                  {
                    v214 = (_DWORD)v289 - (_DWORD)v290;
                    v215 = (unsigned int)((_DWORD)v289 - (_DWORD)v290);
                  }
                  v289 = (unsigned __int64 *)((char *)v289 - v215);
                  LODWORD(v288) = v288 - 8 * v214;
                  v287 = *(unsigned __int64 *)((char *)v213 - v215);
                }
              }
            }
            if ( (_BYTE)v175 )
            {
              v205 = v287 << v288;
              LODWORD(v288) = v288 + v175;
              v170 += v205 >> -(char)v175;
            }
            if ( v168 != 1 )
            {
              v187 = v288 + v182;
              v188 = v187 + v180;
              v189 = 64 - v188;
              v190 = v181 + v188;
              v292 = v251 + (~(-1LL << v182) & (v287 >> (64 - (unsigned __int8)v187)));
              LODWORD(v288) = v190;
              v296 = v262 + (~(-1LL << v180) & (v287 >> v189));
              v294 = (~(-1LL << v181) & (v287 >> (64 - (unsigned __int8)v190))) + v267;
              if ( v190 > 0x40 )
              {
                v289 = (unsigned __int64 *)&unk_23B4BE0;
              }
              else if ( v289 >= (unsigned __int64 *)v291 )
              {
                LODWORD(v288) = v190 & 7;
                v289 = (unsigned __int64 *)((char *)v289 - (v190 >> 3));
                v287 = *v289;
              }
              else if ( v289 != (unsigned __int64 *)v290 )
              {
                v191 = v190 >> 3;
                v192 = (unsigned __int64 *)((char *)v289 - (v190 >> 3));
                if ( v290 > (unsigned __int8 *)v192 )
                {
                  v191 = (_DWORD)v289 - (_DWORD)v290;
                  v192 = (unsigned __int64 *)((char *)v289 - (unsigned int)((_DWORD)v289 - (_DWORD)v290));
                }
                v289 = v192;
                LODWORD(v288) = v190 - 8 * v191;
                v287 = *v192;
              }
            }
            v193 = (__m128i *)((char *)v77 + v170);
            v194 = (const __m128i *)src[0];
            v54 = v170 + v173;
            v195 = (char *)src[0] + v170;
            v196 = (__m128i *)((char *)v77 + v170 - v186);
            if ( v258 - 32 < (unsigned __int64)v77->m128i_u64 + v170 + v173 || v244 < (unsigned __int64)v195 )
            {
              *(_QWORD *)v283 = v170;
              v284 = v173;
              v285 = v186;
              v54 = sub_953A20(
                      (unsigned __int64)v77,
                      v258,
                      (const __m128i **)src,
                      v244,
                      v247,
                      v269,
                      v170,
                      v173,
                      v186,
                      v271);
            }
            else
            {
              *v77 = _mm_loadu_si128((const __m128i *)src[0]);
              if ( v170 > 0x10 )
              {
                v77[1] = _mm_loadu_si128(v194 + 1);
                if ( (__int64)(v170 - 16) > 16 )
                {
                  v216 = v77 + 2;
                  v217 = v194 + 2;
                  do
                  {
                    v218 = _mm_loadu_si128(v217);
                    v216 += 2;
                    v217 += 2;
                    v216[-2] = v218;
                    v216[-1] = _mm_loadu_si128(v217 - 1);
                  }
                  while ( v193 > v216 );
                }
              }
              src[0] = v195;
              if ( v186 <= (char *)v193 - (char *)v247 )
                goto LABEL_232;
              if ( v186 > (unsigned __int64)v193 - v269 )
                return -20;
              v197 = (char *)v196 - (char *)v247;
              v198 = (const void *)(v271 + v197);
              if ( v271 < v271 + v197 + v173 )
              {
                v173 += v197;
                *(_QWORD *)v252 = -v197;
                v199 = (char *)memmove(v193, v198, -v197);
                v196 = v247;
                v193 = (__m128i *)&v199[*(_QWORD *)v252];
LABEL_232:
                if ( v186 <= 0xF )
                {
                  if ( v186 > 7 )
                  {
                    v193->m128i_i64[0] = v196->m128i_i64[0];
                  }
                  else
                  {
                    v193->m128i_i8[0] = v196->m128i_i8[0];
                    v193->m128i_i8[1] = v196->m128i_i8[1];
                    v193->m128i_i8[2] = v196->m128i_i8[2];
                    v193->m128i_i8[3] = v196->m128i_i8[3];
                    v219 = (__int32 *)((char *)v196->m128i_i32 + dword_23B4BA0[v186]);
                    v193->m128i_i32[1] = *v219;
                    v196 = (const __m128i *)((char *)v219 - dword_23B4BC0[v186]);
                  }
                  if ( (unsigned __int64)v173 > 8 )
                  {
                    v220 = &v193->m128i_i8[8];
                    v221 = &v196->m128i_i64[1];
                    v222 = &v193->m128i_i8[v173];
                    if ( (char *)v193 - (char *)v196 > 15 )
                    {
                      *(__m128i *)((char *)v193 + 8) = _mm_loadu_si128((const __m128i *)&v196->m128i_u64[1]);
                      if ( v173 - 8 > 16 )
                      {
                        v230 = (__m128i *)((char *)v193 + 24);
                        v231 = (const __m128i *)((char *)v196 + 24);
                        do
                        {
                          v232 = _mm_loadu_si128(v231);
                          v230 += 2;
                          v231 += 2;
                          v230[-2] = v232;
                          v230[-1] = _mm_loadu_si128(v231 - 1);
                        }
                        while ( v222 > (char *)v230 );
                      }
                    }
                    else
                    {
                      do
                      {
                        v223 = *v221;
                        v220 += 8;
                        ++v221;
                        *((_QWORD *)v220 - 1) = v223;
                      }
                      while ( v222 > v220 );
                    }
                  }
                }
                else
                {
                  *v193 = _mm_loadu_si128(v196);
                  if ( v173 > 16 )
                  {
                    v200 = &v193->m128i_i8[v173];
                    v201 = v196 + 1;
                    v202 = v193 + 1;
                    do
                    {
                      v203 = _mm_loadu_si128(v201);
                      v202 += 2;
                      v201 += 2;
                      v202[-2] = v203;
                      v202[-1] = _mm_loadu_si128(v201 - 1);
                    }
                    while ( v200 > (char *)v202 );
                  }
                }
                goto LABEL_236;
              }
              memmove(v193, v198, v173);
            }
LABEL_236:
            if ( v54 > 0xFFFFFFFFFFFFFF88LL )
              return v54;
            v77 = (__m128i *)((char *)v77 + v54);
            if ( !--v168 )
            {
              v6 = v268;
              v7 = v274;
              goto LABEL_101;
            }
          }
          v186 = v298 - 1 - (v298 == 1);
LABEL_284:
          v300 = v299;
          goto LABEL_285;
        }
LABEL_101:
        if ( v289 != (unsigned __int64 *)v290 || (_DWORD)v288 != 64 )
          return -20;
        v116 = *(_DWORD *)(v6 + 30368) == 2;
        v72 = src[0];
        *(_DWORD *)(v6 + 26684) = v298;
        *(_DWORD *)(v6 + 26688) = v299;
        *(_DWORD *)(v6 + 26692) = v300;
        if ( !v116 )
        {
LABEL_104:
          if ( v244 - (unsigned __int64)v72 <= v258 - (__int64)v77 )
          {
            if ( v77 )
            {
              v117 = v77;
              v77 = (__m128i *)((char *)v77 + v244 - (_QWORD)v72);
              memcpy(v117, v72, v244 - (_QWORD)v72);
            }
            return (char *)v77 - (char *)v7;
          }
          return -70;
        }
LABEL_122:
        if ( v244 - (unsigned __int64)v72 <= v258 - (__int64)v77 )
        {
          if ( v77 )
          {
            v123 = v77;
            v77 = (__m128i *)((char *)v77 + v244 - (_QWORD)v72);
            memmove(v123, v72, v244 - (_QWORD)v72);
          }
          v72 = (const void *)(v6 + 30372);
          *(_DWORD *)(v6 + 30368) = 0;
          src[0] = (void *)(v6 + 30372);
          v244 = v6 + 95908;
          goto LABEL_104;
        }
        return -70;
      }
      v105 = (__m128i *)((char *)v77 + v79);
      v106 = v79 + v85;
      v107 = (char *)src[0] + v79 - 32;
      v108 = (__m128i *)((char *)v77 + v79 - v96);
      if ( v107 < &v77->m128i_i8[v79 + v85] || v244 < (unsigned __int64)v104 )
      {
        v277 = v79;
        n = v85;
        v279 = v96;
        v106 = sub_953910(v77, v258, v107, (const __m128i **)src, v244, v247, v79, v85, v96, v269, v271);
      }
      else
      {
        *v77 = _mm_loadu_si128((const __m128i *)src[0]);
        if ( v79 > 0x10 )
        {
          v77[1] = _mm_loadu_si128(v102 + 1);
          if ( (__int64)(v79 - 16) > 16 )
          {
            v144 = v77 + 2;
            v145 = v102 + 2;
            do
            {
              v146 = _mm_loadu_si128(v145);
              v144 += 2;
              v145 += 2;
              v144[-2] = v146;
              v144[-1] = _mm_loadu_si128(v145 - 1);
            }
            while ( v105 > v144 );
          }
        }
        src[0] = v104;
        if ( v96 <= (char *)v105 - (char *)v247 )
          goto LABEL_94;
        if ( v96 > (unsigned __int64)v105 - v269 )
          return -20;
        v109 = (char *)v108 - (char *)v247;
        v110 = (const void *)(v271 + (char *)v108 - (char *)v247);
        if ( v271 < (unsigned __int64)v110 + v85 )
        {
          v85 += v109;
          v111 = (char *)memmove(v105, v110, (char *)v247 - (char *)v108);
          v108 = v247;
          v105 = (__m128i *)&v111[-v109];
LABEL_94:
          if ( v96 <= 0xF )
          {
            if ( v96 > 7 )
            {
              v105->m128i_i64[0] = v108->m128i_i64[0];
            }
            else
            {
              v105->m128i_i8[0] = v108->m128i_i8[0];
              v105->m128i_i8[1] = v108->m128i_i8[1];
              v105->m128i_i8[2] = v108->m128i_i8[2];
              v105->m128i_i8[3] = v108->m128i_i8[3];
              v149 = (__int32 *)((char *)v108->m128i_i32 + dword_23B4BA0[v96]);
              v105->m128i_i32[1] = *v149;
              v108 = (const __m128i *)((char *)v149 - dword_23B4BC0[v96]);
            }
            if ( (unsigned __int64)v85 > 8 )
            {
              v150 = &v105->m128i_i8[8];
              v151 = &v108->m128i_i64[1];
              v152 = &v105->m128i_i8[v85];
              if ( (char *)v105 - (char *)v108 > 15 )
              {
                *(__m128i *)((char *)v105 + 8) = _mm_loadu_si128((const __m128i *)&v108->m128i_u64[1]);
                if ( v85 - 8 > 16 )
                {
                  v224 = (__m128i *)((char *)v105 + 24);
                  v225 = (const __m128i *)((char *)v108 + 24);
                  do
                  {
                    v226 = _mm_loadu_si128(v225);
                    v224 += 2;
                    v225 += 2;
                    v224[-2] = v226;
                    v224[-1] = _mm_loadu_si128(v225 - 1);
                  }
                  while ( v152 > (char *)v224 );
                }
              }
              else
              {
                do
                {
                  v153 = *v151;
                  v150 += 8;
                  ++v151;
                  *((_QWORD *)v150 - 1) = v153;
                }
                while ( v152 > v150 );
              }
            }
          }
          else
          {
            *v105 = _mm_loadu_si128(v108);
            if ( v85 > 16 )
            {
              v112 = &v105->m128i_i8[v85];
              v113 = v108 + 1;
              v114 = v105 + 1;
              do
              {
                v115 = _mm_loadu_si128(v113);
                v114 += 2;
                v113 += 2;
                v114[-2] = v115;
                v114[-1] = _mm_loadu_si128(v113 - 1);
              }
              while ( v112 > (char *)v114 );
            }
          }
          goto LABEL_98;
        }
        memmove(v105, v110, v85);
      }
LABEL_98:
      if ( v106 > 0xFFFFFFFFFFFFFF88LL )
        return v106;
      v77 = (__m128i *)((char *)v77 + v106);
      if ( !--v249 )
      {
        v6 = v268;
        v7 = v274;
        goto LABEL_101;
      }
    }
    v96 = v298 - 1 - (v298 == 1);
LABEL_243:
    v300 = v299;
    goto LABEL_244;
  }
  if ( v19 )
    return sub_954640(v6, v7, a3, v17, v20, v18);
  if ( v21 )
  {
    v248 = *(_QWORD *)(v6 + 30352);
  }
  else
  {
    v118 = (__m128i *)((char *)v7 + a3);
    if ( a3 <= 0 )
      v118 = v7;
    v248 = (__int64)v118;
  }
  v22 = *(const __m128i **)(v6 + 30120);
  v23 = &v22->m128i_i8[*(_QWORD *)(v6 + 30152)];
  *(_QWORD *)v283 = v22;
  v243 = (unsigned __int64)v23;
  if ( !v18 )
  {
    v64 = v7;
LABEL_117:
    v12 = -70;
    if ( v243 - (unsigned __int64)v22 <= v248 - (__int64)v64 )
    {
      if ( v64 )
      {
        memcpy(v64, v22, v243 - (_QWORD)v22);
        v64 = (__m128i *)((char *)v64 + v243 - (_QWORD)v22);
      }
      return (char *)v64 - (char *)v7;
    }
    return v12;
  }
  v24 = *(const __m128i **)(v6 + 29896);
  *(_DWORD *)(v6 + 30004) = 1;
  v246 = v24;
  v270 = *(_QWORD *)(v6 + 29904);
  v272 = *(_QWORD *)(v6 + 29912);
  v298 = *(unsigned int *)(v6 + 26684);
  v299 = *(unsigned int *)(v6 + 26688);
  v300 = *(unsigned int *)(v6 + 26692);
  if ( !v20 )
    return -20;
  v290 = v17;
  v291 = v17 + 8;
  v25 = v17[v20 - 1];
  v126 = *v17;
  v289 = (unsigned __int64 *)v17;
  v287 = v126;
  switch ( v20 )
  {
    case 1uLL:
      goto LABEL_135;
    case 2uLL:
      goto LABEL_134;
    case 3uLL:
      goto LABEL_133;
    case 4uLL:
      goto LABEL_132;
    case 5uLL:
      goto LABEL_131;
    case 6uLL:
      goto LABEL_130;
    case 7uLL:
      v126 += (unsigned __int64)v17[6] << 48;
LABEL_130:
      v126 += (unsigned __int64)v17[5] << 40;
LABEL_131:
      v126 += (unsigned __int64)v17[4] << 32;
LABEL_132:
      v126 += (unsigned __int64)v17[3] << 24;
LABEL_133:
      v126 += (unsigned __int64)v17[2] << 16;
LABEL_134:
      v287 = ((unsigned __int64)v17[1] << 8) + v126;
LABEL_135:
      if ( !(_BYTE)v25 )
        return -20;
      _BitScanReverse(&v25, v25);
      LODWORD(v288) = (v25 ^ 0x1F) - 8 * v20 + 41;
LABEL_23:
      v255 = v18;
      sub_954540((__int64 *)&v292, &v293, &v287, *(_QWORD *)v6);
      sub_954540((__int64 *)&v294, &v295, v26, *(_QWORD *)(v6 + 16));
      sub_954540((__int64 *)&v296, &v297, v27, *(_QWORD *)(v6 + 8));
      v273 = (_DWORD *)v6;
      v28 = v7;
      v275 = v7;
      v29 = v255;
      break;
    default:
      v289 = (unsigned __int64 *)&v17[v20 - 8];
      v287 = *v289;
      if ( !(_BYTE)v25 )
        return -20;
      _BitScanReverse(&v25, v25);
      LODWORD(v288) = (v25 ^ 0x1F) - 23;
      if ( v20 > 0xFFFFFFFFFFFFFF88LL )
        return -20;
      goto LABEL_23;
  }
  do
  {
    v30 = (__int16 *)(v293 + 8 * v292);
    v31 = *((unsigned int *)v30 + 1);
    v32 = (__int16 *)(v297 + 8 * v296);
    v33 = *((unsigned __int8 *)v32 + 2);
    v34 = *((unsigned int *)v32 + 1);
    v256 = *v30;
    v35 = (__int16 *)(v295 + 8 * v294);
    v36 = *((unsigned __int8 *)v30 + 2);
    v37 = *((unsigned __int8 *)v35 + 2);
    v38 = *((unsigned int *)v35 + 1);
    v259 = *v32;
    v39 = v37 + v36 + v33;
    v40 = *((_BYTE *)v30 + 3);
    v41 = *((_BYTE *)v32 + 3);
    v264 = *v35;
    v42 = *((_BYTE *)v35 + 3);
    if ( (unsigned __int8)v37 > 1u )
    {
      v43 = v287 << v288;
      LODWORD(v288) = v288 + v37;
      v44 = v43 >> -(char)v37;
      v300 = v299;
      v45 = v298;
      v46 = v38 + v44;
      v298 = v46;
      v299 = v45;
      goto LABEL_26;
    }
    v119 = (_DWORD)v31 == 0;
    if ( !(_BYTE)v37 )
    {
      v46 = *(&v288 + v119 + 10);
      v120 = *(&v288 + ((_DWORD)v31 != 0) + 10);
      v298 = v46;
      v299 = v120;
      goto LABEL_26;
    }
    v147 = v287 << v288 >> 63;
    LODWORD(v288) = v288 + 1;
    v148 = (unsigned int)(v38 + v119) + v147;
    if ( v148 == 3 )
    {
      v46 = v298 - 1 - (v298 == 1);
LABEL_183:
      v300 = v299;
      goto LABEL_184;
    }
    v46 = *(&v298 + v148) - (*(&v298 + v148) == 0);
    if ( v148 != 1 )
      goto LABEL_183;
LABEL_184:
    v299 = v298;
    v298 = v46;
LABEL_26:
    if ( (_BYTE)v33 )
    {
      v121 = v287 << v288;
      LODWORD(v288) = v288 + v33;
      v34 += v121 >> -(char)v33;
    }
    if ( v39 > 0x1Eu )
    {
      v129 = v288;
      if ( (unsigned int)v288 > 0x40 )
      {
        v289 = (unsigned __int64 *)&unk_23B4BE0;
      }
      else if ( v289 >= (unsigned __int64 *)v291 )
      {
        LODWORD(v288) = v288 & 7;
        v289 = (unsigned __int64 *)((char *)v289 - (v129 >> 3));
        v287 = *v289;
      }
      else if ( v289 != (unsigned __int64 *)v290 )
      {
        v130 = (unsigned int)v288 >> 3;
        v131 = (unsigned __int64 *)((char *)v289 - ((unsigned int)v288 >> 3));
        if ( v290 > (unsigned __int8 *)v131 )
        {
          v130 = (_DWORD)v289 - (_DWORD)v290;
          v131 = (unsigned __int64 *)((char *)v289 - (unsigned int)((_DWORD)v289 - (_DWORD)v290));
        }
        v289 = v131;
        LODWORD(v288) = v288 - 8 * v130;
        v287 = *v131;
      }
    }
    if ( (_BYTE)v36 )
    {
      v122 = v287 << v288;
      LODWORD(v288) = v288 + v36;
      v31 += v122 >> -(char)v36;
    }
    if ( v29 != 1 )
    {
      v47 = v288 + v40 + v41;
      v48 = 64 - v47;
      v49 = v42 + v47;
      v292 = v256 + (~(-1LL << v40) & (v287 >> (64 - ((unsigned __int8)v288 + v40))));
      LODWORD(v288) = v49;
      v296 = v259 + (~(-1LL << v41) & (v287 >> v48));
      v294 = v264 + (~(-1LL << v42) & (v287 >> (64 - (unsigned __int8)v49)));
      if ( v49 > 0x40 )
      {
        v289 = (unsigned __int64 *)&unk_23B4BE0;
      }
      else if ( v289 >= (unsigned __int64 *)v291 )
      {
        LODWORD(v288) = v49 & 7;
        v289 = (unsigned __int64 *)((char *)v289 - (v49 >> 3));
        v287 = *v289;
      }
      else if ( v289 != (unsigned __int64 *)v290 )
      {
        v50 = v49 >> 3;
        v51 = (unsigned __int64 *)((char *)v289 - (v49 >> 3));
        if ( v290 > (unsigned __int8 *)v51 )
        {
          v50 = (_DWORD)v289 - (_DWORD)v290;
          v51 = (unsigned __int64 *)((char *)v289 - (unsigned int)((_DWORD)v289 - (_DWORD)v290));
        }
        v289 = v51;
        LODWORD(v288) = v49 - 8 * v50;
        v287 = *v51;
      }
    }
    v52 = (__m128i *)((char *)v28 + v31);
    v53 = *(const __m128i **)v283;
    v54 = v31 + v34;
    v55 = *(_QWORD *)v283 + v31;
    v56 = (__m128i *)((char *)v28 + v31 - v46);
    if ( v248 - 32 < (unsigned __int64)v28->m128i_u64 + v31 + v34 || v243 < v55 )
    {
      src[0] = (void *)v31;
      src[1] = (void *)v34;
      src[2] = (void *)v46;
      v54 = sub_953A20((unsigned __int64)v28, v248, (const __m128i **)v283, v243, v246, v270, v31, v34, v46, v272);
    }
    else
    {
      *v28 = _mm_loadu_si128(*(const __m128i **)v283);
      if ( v31 > 0x10 )
      {
        v28[1] = _mm_loadu_si128(v53 + 1);
        if ( (__int64)(v31 - 16) > 16 )
        {
          v133 = v28 + 2;
          v134 = v53 + 2;
          do
          {
            v135 = _mm_loadu_si128(v134);
            v133 += 2;
            v134 += 2;
            v133[-2] = v135;
            v133[-1] = _mm_loadu_si128(v134 - 1);
          }
          while ( v52 > v133 );
        }
      }
      *(_QWORD *)v283 = v55;
      if ( v46 > (char *)v52 - (char *)v246 )
      {
        if ( v46 > (unsigned __int64)v52 - v270 )
          return -20;
        v57 = (char *)v56 - (char *)v246;
        v58 = (const void *)(v272 + v57);
        if ( v272 >= v272 + v57 + v34 )
        {
          memmove(v52, v58, v34);
          goto LABEL_49;
        }
        v34 += v57;
        *(_QWORD *)v257 = -v57;
        v59 = (char *)memmove(v52, v58, -v57);
        v56 = v246;
        v52 = (__m128i *)&v59[*(_QWORD *)v257];
      }
      if ( v46 <= 0xF )
      {
        if ( v46 > 7 )
        {
          v52->m128i_i64[0] = v56->m128i_i64[0];
        }
        else
        {
          v52->m128i_i8[0] = v56->m128i_i8[0];
          v52->m128i_i8[1] = v56->m128i_i8[1];
          v52->m128i_i8[2] = v56->m128i_i8[2];
          v52->m128i_i8[3] = v56->m128i_i8[3];
          v136 = (__int32 *)((char *)v56->m128i_i32 + dword_23B4BA0[v46]);
          v52->m128i_i32[1] = *v136;
          v56 = (const __m128i *)((char *)v136 - dword_23B4BC0[v46]);
        }
        if ( (unsigned __int64)v34 > 8 )
        {
          v137 = &v52->m128i_i8[8];
          v138 = &v56->m128i_i64[1];
          v139 = &v52->m128i_i8[v34];
          if ( (char *)v52 - (char *)v56 > 15 )
          {
            *(__m128i *)((char *)v52 + 8) = _mm_loadu_si128((const __m128i *)&v56->m128i_u64[1]);
            if ( v34 - 8 > 16 )
            {
              v209 = (__m128i *)((char *)v52 + 24);
              v210 = (const __m128i *)((char *)v56 + 24);
              do
              {
                v211 = _mm_loadu_si128(v210);
                v209 += 2;
                v210 += 2;
                v209[-2] = v211;
                v209[-1] = _mm_loadu_si128(v210 - 1);
              }
              while ( v139 > (char *)v209 );
            }
          }
          else
          {
            do
            {
              v140 = *v138;
              v137 += 8;
              ++v138;
              *((_QWORD *)v137 - 1) = v140;
            }
            while ( v139 > v137 );
          }
        }
      }
      else
      {
        *v52 = _mm_loadu_si128(v56);
        if ( v34 > 16 )
        {
          v60 = &v52->m128i_i8[v34];
          v61 = v56 + 1;
          v62 = v52 + 1;
          do
          {
            v63 = _mm_loadu_si128(v61);
            v62 += 2;
            v61 += 2;
            v62[-2] = v63;
            v62[-1] = _mm_loadu_si128(v61 - 1);
          }
          while ( v60 > (char *)v62 );
        }
      }
    }
LABEL_49:
    if ( v54 > 0xFFFFFFFFFFFFFF88LL )
      return v54;
    v28 = (__m128i *)((char *)v28 + v54);
    --v29;
  }
  while ( v29 );
  v64 = v28;
  v7 = v275;
  if ( v289 == (unsigned __int64 *)v290 && (_DWORD)v288 == 64 )
  {
    v22 = *(const __m128i **)v283;
    v273[6671] = v298;
    v273[6672] = v299;
    v273[6673] = v300;
    goto LABEL_117;
  }
  return -20;
}

