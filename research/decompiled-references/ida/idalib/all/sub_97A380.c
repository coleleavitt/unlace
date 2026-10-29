__int64 __fastcall sub_97A380(
        __int64 a1,
        signed __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  int v6; // eax
  unsigned __int64 v7; // rsi
  const __m128i *v8; // rsi
  unsigned __int64 v9; // rdi
  const __m128i *v10; // rax
  unsigned int v11; // eax
  int v13; // eax
  signed __int64 v14; // r15
  unsigned __int64 *v15; // rdx
  unsigned __int64 *v16; // rdx
  int v17; // r12d
  __int64 *v18; // rbx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rax
  int v22; // edx
  char v23; // r9
  int v24; // edx
  char v25; // di
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 *v28; // rsi
  unsigned __int64 v29; // rax
  bool v30; // cf
  __int64 v31; // rcx
  const char *v32; // rax
  __int16 *v33; // rdi
  int v34; // r8d
  __int16 *v35; // rsi
  int v36; // r9d
  __int64 v37; // r11
  __int16 *v38; // rcx
  unsigned __int8 v39; // di
  int v40; // edx
  __int64 v41; // rax
  unsigned __int16 v42; // r13
  unsigned __int8 v43; // r10
  unsigned __int8 v44; // si
  unsigned __int8 v45; // cl
  _BOOL8 v46; // r13
  unsigned __int64 v47; // rax
  unsigned int v48; // eax
  unsigned __int64 *v49; // r10
  int v50; // ebp
  size_t v51; // r13
  __m128i *v53; // r12
  size_t v54; // r13
  size_t v55; // rdx
  unsigned __int64 v56; // rdx
  __m128i *v57; // rdi
  __int64 v58; // rbp
  int v59; // eax
  __int64 v60; // r13
  __int64 v61; // r14
  __int64 v62; // r11
  unsigned __int16 *v63; // rsi
  int v64; // edi
  unsigned __int16 *v65; // rcx
  int v66; // r8d
  __int64 v67; // r13
  unsigned __int16 *v68; // rdx
  __int64 v69; // r14
  unsigned int v70; // r11d
  __int64 v71; // rbp
  __int64 v72; // rax
  unsigned __int8 v73; // cl
  unsigned __int8 v74; // si
  int v75; // r10d
  int v76; // eax
  unsigned __int8 v77; // dl
  unsigned __int8 v78; // r9
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rax
  int v82; // eax
  char v83; // r9
  int v84; // eax
  char v85; // si
  unsigned int v86; // eax
  unsigned int v87; // edi
  unsigned __int64 *v88; // rcx
  const __m128i *v89; // rsi
  __int64 v90; // r14
  __m128i v91; // xmm6
  unsigned __int64 *v92; // rax
  unsigned __int64 v93; // rdi
  signed __int64 v94; // r15
  unsigned __int64 v95; // r8
  char *v96; // rcx
  unsigned __int64 v97; // rdx
  const __m128i *v98; // rax
  signed __int64 v99; // rbp
  const void *v100; // rsi
  char *v101; // rax
  char *v102; // rcx
  char *v103; // r15
  const __m128i *v104; // rax
  char *v105; // rcx
  __m128i v106; // xmm0
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  __int64 *v109; // rax
  _BOOL8 v110; // rbx
  unsigned __int64 v111; // rax
  unsigned int v112; // eax
  unsigned int v113; // r9d
  unsigned __int64 *v114; // r10
  __int64 v115; // rax
  unsigned __int64 v116; // r9
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rdi
  unsigned __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // r11
  __int64 v122; // r10
  __int64 v123; // r14
  __int64 v124; // rdx
  __m128i v125; // xmm7
  __int64 *v126; // r14
  signed __int64 v127; // r15
  unsigned __int64 v128; // r8
  unsigned __int64 v129; // rdx
  __m128i *v130; // rcx
  unsigned __int64 v131; // rax
  const __m128i *v132; // rbp
  signed __int64 v133; // rbp
  const void *v134; // rsi
  char *v135; // rax
  char *v136; // r15
  const __m128i *v137; // rbp
  __m128i *v138; // rcx
  __m128i v139; // xmm4
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rcx
  __int8 *v142; // rdx
  __m128i v143; // xmm6
  __int64 *v144; // rax
  unsigned __int64 v145; // r8
  const __m128i *v146; // rax
  signed __int64 v147; // rbp
  char *v148; // rax
  char *v149; // rcx
  char *v150; // r15
  const __m128i *v151; // rax
  char *v152; // rcx
  __m128i v153; // xmm2
  __m128i *v154; // rdi
  const __m128i *v155; // rsi
  __m128i v156; // xmm5
  unsigned __int64 v157; // rax
  unsigned __int64 v158; // rax
  char *v159; // rdx
  __int64 *v160; // rsi
  char *v161; // rdi
  __int64 v162; // rax
  unsigned __int64 v163; // rdx
  __m128i *v164; // rdx
  const __m128i *v165; // rsi
  __m128i v166; // xmm6
  _DWORD *v167; // rax
  int v168; // r15d
  const __m128i *v169; // r13
  unsigned __int64 v170; // r14
  const __m128i *v171; // rsi
  __int64 v172; // r9
  __int64 v173; // rax
  __int64 *v174; // r10
  __m128i v175; // xmm4
  signed __int64 v176; // r9
  __int64 v177; // rax
  unsigned __int64 v178; // rax
  unsigned __int64 v179; // r10
  __m128i *v180; // rcx
  size_t v181; // r8
  unsigned __int64 v182; // rdx
  const __m128i *v183; // rbx
  signed __int64 v184; // rbx
  const void *v185; // rsi
  char *v186; // rax
  char *v187; // r9
  const __m128i *v188; // rbx
  __m128i *v189; // rcx
  __m128i v190; // xmm7
  unsigned __int64 v191; // r11
  unsigned __int64 v192; // rdx
  _QWORD *v193; // rbx
  unsigned __int64 v194; // rdi
  unsigned __int64 v195; // r14
  __m128i *v196; // rdi
  __int64 v197; // r11
  __int64 v198; // rdx
  __m128i v199; // xmm4
  unsigned __int64 v200; // rdx
  unsigned __int64 v201; // r10
  unsigned __int64 v202; // rax
  const __m128i *v203; // rbx
  signed __int64 v204; // rbx
  char *v205; // rax
  char *v206; // r9
  const __m128i *v207; // rbx
  __m128i *v208; // rcx
  __m128i v209; // xmm2
  unsigned __int64 v210; // r10
  __int8 *v211; // rdx
  __m128i v212; // xmm7
  const __m128i *v213; // rax
  signed __int64 v214; // rbx
  char *v215; // rcx
  char *v216; // r9
  const __m128i *v217; // rax
  __m128i *v218; // rcx
  __m128i v219; // xmm4
  _DWORD *v220; // rax
  char *v221; // rdx
  __int64 *v222; // rsi
  char *v223; // r8
  __int64 v224; // rax
  __m128i *v225; // rdx
  const __m128i *v226; // rsi
  __m128i v227; // xmm6
  __int32 *v228; // rbp
  char *v229; // rax
  __int64 *v230; // rdx
  char *v231; // rdi
  __int64 v232; // rcx
  size_t v233; // rax
  __m128i *v234; // rax
  const __m128i *v235; // rsi
  __m128i v236; // xmm5
  __int32 *v237; // rbx
  char *v238; // rax
  __int64 *v239; // rdx
  char *v240; // rsi
  __int64 v241; // rcx
  char *v242; // rcx
  const __m128i *v243; // rax
  __m128i v244; // xmm6
  __m128i *v245; // rdx
  const __m128i *v246; // rsi
  __m128i v247; // xmm7
  __int32 *v248; // rax
  char *v249; // rdx
  __int64 *v250; // rsi
  char *v251; // r10
  __int64 v252; // rax
  char *v253; // rcx
  const __m128i *v254; // rax
  __m128i v255; // xmm3
  __m128i *v256; // rdx
  const __m128i *v257; // rsi
  __m128i v258; // xmm5
  __int32 *v259; // rbx
  char *v260; // rax
  __int64 *v261; // rdx
  char *v262; // rdi
  __int64 v263; // rcx
  __m128i *v264; // rcx
  const __m128i *v265; // rbp
  __m128i v266; // xmm2
  __m128i *v267; // rcx
  const __m128i *v268; // rbx
  __m128i v269; // xmm3
  __m128i *v270; // rcx
  const __m128i *v271; // rax
  __m128i v272; // xmm2
  __m128i *v273; // rcx
  const __m128i *v274; // rbx
  __m128i v275; // xmm5
  unsigned __int16 v276; // [rsp+0h] [rbp-2E8h]
  int v277; // [rsp+0h] [rbp-2E8h]
  unsigned __int64 v278; // [rsp+0h] [rbp-2E8h]
  const __m128i *v279; // [rsp+8h] [rbp-2E0h]
  int v280[2]; // [rsp+8h] [rbp-2E0h]
  unsigned __int64 v282; // [rsp+18h] [rbp-2D0h]
  unsigned __int16 v283; // [rsp+20h] [rbp-2C8h]
  __int64 v284; // [rsp+20h] [rbp-2C8h]
  signed __int64 v285; // [rsp+20h] [rbp-2C8h]
  signed __int64 v286; // [rsp+20h] [rbp-2C8h]
  signed __int64 v287; // [rsp+20h] [rbp-2C8h]
  unsigned __int16 v288; // [rsp+28h] [rbp-2C0h]
  __int64 v289; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v290; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v291; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v292; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v293; // [rsp+38h] [rbp-2B0h]
  signed __int64 v294; // [rsp+38h] [rbp-2B0h]
  size_t v295; // [rsp+38h] [rbp-2B0h]
  size_t v296; // [rsp+38h] [rbp-2B0h]
  size_t v297; // [rsp+38h] [rbp-2B0h]
  int v298; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v299; // [rsp+48h] [rbp-2A0h]
  unsigned __int64 v300; // [rsp+50h] [rbp-298h]
  __int64 v302; // [rsp+60h] [rbp-288h]
  signed __int64 v303; // [rsp+60h] [rbp-288h]
  int v305; // [rsp+74h] [rbp-274h]
  __int64 v306; // [rsp+78h] [rbp-270h]
  unsigned __int64 v307; // [rsp+78h] [rbp-270h]
  unsigned __int64 v308; // [rsp+78h] [rbp-270h]
  unsigned __int64 v309; // [rsp+78h] [rbp-270h]
  __int64 v310; // [rsp+80h] [rbp-268h]
  __int64 v311; // [rsp+88h] [rbp-260h]
  unsigned __int64 *v312; // [rsp+90h] [rbp-258h]
  unsigned int v313; // [rsp+9Ch] [rbp-24Ch]
  int v314[2]; // [rsp+A8h] [rbp-240h] BYREF
  size_t v315[2]; // [rsp+B0h] [rbp-238h]
  __int64 v316; // [rsp+C0h] [rbp-228h]
  size_t v317[2]; // [rsp+D0h] [rbp-218h]
  __int64 v318; // [rsp+E0h] [rbp-208h]
  size_t n[2]; // [rsp+F0h] [rbp-1F8h]
  __int64 v320; // [rsp+100h] [rbp-1E8h]
  __m128i v321; // [rsp+110h] [rbp-1D8h]
  unsigned __int64 v322; // [rsp+120h] [rbp-1C8h]
  size_t v323[2]; // [rsp+130h] [rbp-1B8h]
  __int64 v324; // [rsp+140h] [rbp-1A8h]
  size_t v325[2]; // [rsp+150h] [rbp-198h]
  __int64 v326; // [rsp+160h] [rbp-188h]
  unsigned __int64 v327; // [rsp+170h] [rbp-178h] BYREF
  __int64 v328; // [rsp+178h] [rbp-170h]
  unsigned __int64 *v329; // [rsp+180h] [rbp-168h]
  unsigned __int8 *v330; // [rsp+188h] [rbp-160h]
  unsigned __int8 *v331; // [rsp+190h] [rbp-158h]
  unsigned __int64 v332; // [rsp+198h] [rbp-150h] BYREF
  __int64 v333; // [rsp+1A0h] [rbp-148h] BYREF
  unsigned __int64 v334; // [rsp+1A8h] [rbp-140h] BYREF
  __int64 v335; // [rsp+1B0h] [rbp-138h] BYREF
  unsigned __int64 v336; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v337; // [rsp+1C0h] [rbp-128h] BYREF
  unsigned __int64 v338; // [rsp+1C8h] [rbp-120h]
  unsigned __int64 v339; // [rsp+1D0h] [rbp-118h]
  unsigned __int64 v340; // [rsp+1D8h] [rbp-110h]
  __int64 v341[2]; // [rsp+1E0h] [rbp-108h] BYREF
  _QWORD v342[31]; // [rsp+1F0h] [rbp-F8h] BYREF

  v6 = *(_DWORD *)(a1 + 30368);
  v342[23] = __readfsqword(0x28u);
  if ( v6 == 1 )
  {
    v300 = *(_QWORD *)(a1 + 30352);
  }
  else
  {
    v7 = a2 + a3;
    if ( a3 <= 0 )
      v7 = a2;
    v300 = v7;
  }
  v8 = *(const __m128i **)(a1 + 30120);
  v9 = *(_QWORD *)(a1 + 30360);
  *(_QWORD *)v314 = *(_QWORD *)(a1 + 30120);
  v299 = v9;
  if ( !a6 )
  {
    v53 = (__m128i *)a2;
    goto LABEL_44;
  }
  v10 = *(const __m128i **)(a1 + 29896);
  *(_DWORD *)(a1 + 30004) = 1;
  v279 = v10;
  v311 = *(_QWORD *)(a1 + 29904);
  v282 = *(_QWORD *)(a1 + 29912);
  v338 = *(unsigned int *)(a1 + 26684);
  v339 = *(unsigned int *)(a1 + 26688);
  v340 = *(unsigned int *)(a1 + 26692);
  if ( !a5 )
    return -20;
  v330 = a4;
  v331 = a4 + 8;
  v11 = a4[a5 - 1];
  v56 = *a4;
  v329 = (unsigned __int64 *)a4;
  v327 = v56;
  switch ( a5 )
  {
    case 1uLL:
      goto LABEL_56;
    case 2uLL:
      goto LABEL_55;
    case 3uLL:
      goto LABEL_54;
    case 4uLL:
      goto LABEL_53;
    case 5uLL:
      goto LABEL_52;
    case 6uLL:
      goto LABEL_51;
    case 7uLL:
      v56 += (unsigned __int64)a4[6] << 48;
LABEL_51:
      v56 += (unsigned __int64)a4[5] << 40;
LABEL_52:
      v56 += (unsigned __int64)a4[4] << 32;
LABEL_53:
      v56 += (unsigned __int64)a4[3] << 24;
LABEL_54:
      v56 += (unsigned __int64)a4[2] << 16;
LABEL_55:
      v327 = ((unsigned __int64)a4[1] << 8) + v56;
LABEL_56:
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v328) = __lzcnt(v11) - 8 * a5 + 41;
LABEL_10:
      v13 = 8;
      if ( a6 <= 8 )
        v13 = a6;
      v14 = a2 - (_QWORD)v279;
      v305 = v13;
      sub_978280((__int64 *)&v332, &v333, &v327, *(_QWORD *)a1);
      sub_978280((__int64 *)&v334, &v335, v15, *(_QWORD *)(a1 + 16));
      sub_978280((__int64 *)&v336, &v337, v16, *(_QWORD *)(a1 + 8));
      if ( a6 <= 0 )
      {
        v53 = (__m128i *)a2;
        v50 = 0;
        goto LABEL_40;
      }
      v17 = 0;
      v298 = a6 - 1;
      v293 = (unsigned __int64)v331;
      v312 = (unsigned __int64 *)v330;
      v18 = v341;
      v302 = v333;
      v306 = v335;
      v310 = v337;
      break;
    default:
      v329 = (unsigned __int64 *)&a4[a5 - 8];
      v327 = *v329;
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v328) = __lzcnt(v11) - 23;
      if ( a5 > 0xFFFFFFFFFFFFFF88LL )
        return -20;
      goto LABEL_10;
  }
  do
  {
    v33 = (__int16 *)(v302 + 8 * v332);
    v34 = *((unsigned __int8 *)v33 + 2);
    v35 = (__int16 *)(v310 + 8 * v336);
    v58 = *((unsigned int *)v33 + 1);
    v36 = *((unsigned __int8 *)v35 + 2);
    v37 = *((unsigned int *)v35 + 1);
    v276 = *v33;
    v38 = (__int16 *)(v306 + 8 * v334);
    v39 = *((_BYTE *)v33 + 3);
    v40 = *((unsigned __int8 *)v38 + 2);
    v41 = *((unsigned int *)v38 + 1);
    v283 = *v35;
    v42 = *v38;
    v43 = v40 + v34 + v36;
    v44 = *((_BYTE *)v35 + 3);
    v45 = *((_BYTE *)v38 + 3);
    v288 = v42;
    if ( (unsigned __int8)v40 > 1u )
    {
      v19 = v327 << v328;
      LODWORD(v328) = v328 + v40;
      v20 = v41 + (v19 >> -(char)v40);
      v340 = v339;
      v21 = v338;
      v338 = v20;
      v339 = v21;
      goto LABEL_15;
    }
    v46 = (_DWORD)v58 == 0;
    if ( (_BYTE)v40 )
    {
      v163 = v46 + (_DWORD)v41 + (v327 << v328 >> 63);
      LODWORD(v328) = v328 + 1;
      if ( v163 == 3 )
      {
        v20 = v338 - 1 - (v338 == 1);
      }
      else
      {
        v20 = *(&v338 + v163) - (*(&v338 + v163) == 0);
        if ( v163 == 1 )
        {
LABEL_162:
          v339 = v338;
          v338 = v20;
LABEL_15:
          if ( (_BYTE)v36 )
            goto LABEL_32;
          goto LABEL_16;
        }
      }
      v340 = v339;
      goto LABEL_162;
    }
    v20 = *(&v328 + v46 + 10);
    v47 = *(&v328 + ((_DWORD)v58 != 0) + 10);
    v338 = v20;
    v339 = v47;
    if ( (_BYTE)v36 )
    {
LABEL_32:
      v37 += v327 << v328 >> -(char)v36;
      LODWORD(v328) = v328 + v36;
      if ( v43 <= 0x1Eu )
        goto LABEL_17;
      goto LABEL_33;
    }
LABEL_16:
    if ( v43 <= 0x1Eu )
      goto LABEL_17;
LABEL_33:
    v48 = v328;
    if ( (unsigned int)v328 > 0x40 )
    {
      v329 = (unsigned __int64 *)&unk_23D8D40;
    }
    else if ( (unsigned __int64)v329 >= v293 )
    {
      LODWORD(v328) = v328 & 7;
      v329 = (unsigned __int64 *)((char *)v329 - (v48 >> 3));
      v327 = *v329;
    }
    else if ( v329 != v312 )
    {
      v313 = (unsigned int)v328 >> 3;
      v49 = (unsigned __int64 *)((char *)v329 - ((unsigned int)v328 >> 3));
      if ( v312 > v49 )
      {
        v313 = (_DWORD)v329 - (_DWORD)v312;
        v49 = (unsigned __int64 *)((char *)v329 - (unsigned int)((_DWORD)v329 - (_DWORD)v312));
      }
      v329 = v49;
      LODWORD(v328) = v328 - 8 * v313;
      v327 = *v49;
    }
LABEL_17:
    if ( (_BYTE)v34 )
    {
      v58 += v327 << v328 >> -(char)v34;
      LODWORD(v328) = v328 + v34;
    }
    if ( v17 != v298 )
    {
      v22 = v328 + v39;
      v23 = 64 - v22;
      v24 = v44 + v22;
      v332 = v276 + ((v327 >> v23) & ~(-1LL << v39));
      v25 = 64 - v24;
      v26 = v45 + v24;
      LODWORD(v328) = v26;
      v336 = v283 + ((v327 >> v25) & ~(-1LL << v44));
      v334 = v288 + ((v327 >> (64 - (unsigned __int8)v26)) & ~(-1LL << v45));
      if ( v26 > 0x40 )
      {
        v329 = (unsigned __int64 *)&unk_23D8D40;
      }
      else if ( v293 <= (unsigned __int64)v329 )
      {
        LODWORD(v328) = v26 & 7;
        v329 = (unsigned __int64 *)((char *)v329 - (v26 >> 3));
        v327 = *v329;
      }
      else if ( v312 != v329 )
      {
        v27 = v26 >> 3;
        v28 = (unsigned __int64 *)((char *)v329 - (v26 >> 3));
        if ( v312 > v28 )
        {
          v27 = (_DWORD)v329 - (_DWORD)v312;
          v28 = (unsigned __int64 *)((char *)v329 - (unsigned int)((_DWORD)v329 - (_DWORD)v312));
        }
        v329 = v28;
        LODWORD(v328) = v26 - 8 * v27;
        v327 = *v28;
      }
    }
    v29 = (unsigned __int64)v279;
    v30 = v58 + v14 < v20;
    v31 = v58 + v14;
    v14 += v58 + v37;
    if ( v30 )
      v29 = v282;
    ++v17;
    v18 += 3;
    v32 = (const char *)(v31 - v20 + v29);
    _mm_prefetch(v32, 1);
    _mm_prefetch(v32 + 64, 1);
    *(v18 - 3) = v58;
    *(v18 - 2) = v37;
    *(v18 - 1) = v20;
  }
  while ( v305 > v17 );
  v59 = 1;
  v294 = v14;
  v60 = v302;
  v61 = v306;
  v62 = v310;
  v53 = (__m128i *)a2;
  if ( v305 > 0 )
    v59 = v305;
  v50 = v59;
  if ( a6 > v59 )
  {
    v277 = v59;
    while ( 1 )
    {
      v63 = (unsigned __int16 *)(v60 + 8 * v332);
      v64 = *((unsigned __int8 *)v63 + 2);
      v65 = (unsigned __int16 *)(v62 + 8 * v336);
      v66 = *((unsigned __int8 *)v65 + 2);
      v67 = *v65;
      v68 = (unsigned __int16 *)(v61 + 8 * v334);
      v69 = *v63;
      v70 = *((_DWORD *)v68 + 1);
      v71 = *v68;
      v284 = *((unsigned int *)v65 + 1);
      v72 = *((unsigned int *)v63 + 1);
      v73 = *((_BYTE *)v65 + 3);
      v74 = *((_BYTE *)v63 + 3);
      v75 = v72;
      v289 = v72;
      v76 = *((unsigned __int8 *)v68 + 2);
      v77 = *((_BYTE *)v68 + 3);
      v78 = v76 + v64 + v66;
      if ( (unsigned __int8)v76 > 1u )
        break;
      v110 = v75 == 0;
      if ( (_BYTE)v76 )
      {
        v157 = v327 << v328 >> 63;
        LODWORD(v328) = v328 + 1;
        v158 = v70 + (unsigned int)v110 + v157;
        if ( v158 == 3 )
        {
          v80 = v338 - 1 - (v338 == 1);
        }
        else
        {
          v80 = *(&v338 + v158) - (*(&v338 + v158) == 0);
          if ( v158 == 1 )
            goto LABEL_151;
        }
        v340 = v339;
LABEL_151:
        v339 = v338;
        v338 = v80;
LABEL_67:
        if ( !(_BYTE)v66 )
          goto LABEL_68;
        goto LABEL_97;
      }
      v80 = *(&v328 + v110 + 10);
      v111 = *(&v328 + (v75 != 0) + 10);
      v338 = v80;
      v339 = v111;
      if ( !(_BYTE)v66 )
      {
LABEL_68:
        if ( v78 <= 0x1Eu )
          goto LABEL_69;
        goto LABEL_98;
      }
LABEL_97:
      v284 += v327 << v328 >> -(char)v66;
      LODWORD(v328) = v328 + v66;
      if ( v78 <= 0x1Eu )
        goto LABEL_69;
LABEL_98:
      v112 = v328;
      if ( (unsigned int)v328 > 0x40 )
      {
        v329 = (unsigned __int64 *)&unk_23D8D40;
LABEL_69:
        if ( !(_BYTE)v64 )
          goto LABEL_70;
LABEL_104:
        v289 += v327 << v328 >> -(char)v64;
        LODWORD(v328) = v328 + v64;
        goto LABEL_70;
      }
      if ( v329 >= (unsigned __int64 *)v331 )
      {
        LODWORD(v328) = v328 & 7;
        v329 = (unsigned __int64 *)((char *)v329 - (v112 >> 3));
        v327 = *v329;
        goto LABEL_69;
      }
      if ( v329 == (unsigned __int64 *)v330 )
        goto LABEL_69;
      v113 = (unsigned int)v328 >> 3;
      v114 = (unsigned __int64 *)((char *)v329 - ((unsigned int)v328 >> 3));
      if ( v330 > (unsigned __int8 *)v114 )
      {
        v113 = (_DWORD)v329 - (_DWORD)v330;
        v114 = (unsigned __int64 *)((char *)v329 - (unsigned int)((_DWORD)v329 - (_DWORD)v330));
      }
      v329 = v114;
      LODWORD(v328) = v328 - 8 * v113;
      v327 = *v114;
      if ( (_BYTE)v64 )
        goto LABEL_104;
LABEL_70:
      if ( v277 != v298 )
      {
        v82 = v328 + v74;
        v83 = 64 - v82;
        v84 = v73 + v82;
        v332 = v69 + ((v327 >> v83) & ~(-1LL << v74));
        v85 = 64 - v84;
        v86 = v77 + v84;
        v336 = v67 + ((v327 >> v85) & ~(-1LL << v73));
        LODWORD(v328) = v86;
        v334 = ((v327 >> (64 - (unsigned __int8)v86)) & ~(-1LL << v77)) + v71;
        if ( v86 > 0x40 )
        {
          v329 = (unsigned __int64 *)&unk_23D8D40;
        }
        else if ( v329 >= (unsigned __int64 *)v331 )
        {
          LODWORD(v328) = v86 & 7;
          v329 = (unsigned __int64 *)((char *)v329 - (v86 >> 3));
          v327 = *v329;
        }
        else if ( v329 != (unsigned __int64 *)v330 )
        {
          v87 = v86 >> 3;
          v88 = (unsigned __int64 *)((char *)v329 - (v86 >> 3));
          if ( v330 > (unsigned __int8 *)v88 )
          {
            v87 = (_DWORD)v329 - (_DWORD)v330;
            v88 = (unsigned __int64 *)((char *)v329 - (unsigned int)((_DWORD)v329 - (_DWORD)v330));
          }
          v329 = v88;
          LODWORD(v328) = v86 - 8 * v87;
          v327 = *v88;
        }
      }
      v89 = *(const __m128i **)v314;
      v90 = v277 & 7;
      if ( *(_DWORD *)(a1 + 30368) != 2 )
      {
        v91 = _mm_loadu_si128((const __m128i *)&v341[3 * v90]);
        v92 = (unsigned __int64 *)&v341[3 * v90];
        v93 = *v92;
        v94 = v92[1];
        v318 = v342[3 * v90];
        v95 = v92[2];
        *(__m128i *)v317 = v91;
        v96 = &v53->m128i_i8[v93];
        v51 = v93 + v94;
        v97 = *(_QWORD *)v314 + v93;
        v98 = (__m128i *)((char *)v53 + v93 - v95);
        if ( v300 - 32 < (unsigned __int64)v53->m128i_u64 + v93 + v94 || v97 > v299 )
        {
          v317[0] = v93;
          v318 = v95;
          v317[1] = v94;
          v51 = sub_977760((unsigned __int64)v53, v300, (const __m128i **)v314, v299, v279, v311, v93, v94, v95, v282);
        }
        else
        {
          *v53 = _mm_loadu_si128(*(const __m128i **)v314);
          if ( v93 > 0x10 )
          {
            v53[1] = _mm_loadu_si128(v89 + 1);
            if ( (__int64)(v93 - 16) > 16 )
            {
              v154 = v53 + 2;
              v155 = v89 + 2;
              do
              {
                v156 = _mm_loadu_si128(v155);
                v154 += 2;
                v155 += 2;
                v154[-2] = v156;
                v154[-1] = _mm_loadu_si128(v155 - 1);
              }
              while ( v96 > (char *)v154 );
            }
          }
          *(_QWORD *)v314 = v97;
          if ( v95 <= v96 - (char *)v279 )
          {
LABEL_85:
            if ( v95 <= 0xF )
            {
              if ( v95 <= 7 )
              {
                *v96 = v98->m128i_i8[0];
                v96[1] = v98->m128i_i8[1];
                v96[2] = v98->m128i_i8[2];
                v96[3] = v98->m128i_i8[3];
                v167 = (__int32 *)((char *)v98->m128i_i32 + dword_23D8D00[v95]);
                *((_DWORD *)v96 + 1) = *v167;
                v98 = (const __m128i *)((char *)v167 - dword_23D8D20[v95]);
              }
              else
              {
                *(_QWORD *)v96 = v98->m128i_i64[0];
              }
              if ( (unsigned __int64)v94 > 8 )
              {
                v159 = v96 + 8;
                v160 = &v98->m128i_i64[1];
                v161 = &v96[v94];
                if ( v96 - (char *)v98 > 15 )
                {
                  *(__m128i *)(v96 + 8) = _mm_loadu_si128((const __m128i *)&v98->m128i_u64[1]);
                  if ( v94 - 8 > 16 )
                  {
                    v242 = v96 + 24;
                    v243 = (const __m128i *)((char *)v98 + 24);
                    do
                    {
                      v244 = _mm_loadu_si128(v243);
                      v242 += 32;
                      v243 += 2;
                      *((__m128i *)v242 - 2) = v244;
                      *((__m128i *)v242 - 1) = _mm_loadu_si128(v243 - 1);
                    }
                    while ( v161 > v242 );
                  }
                }
                else
                {
                  do
                  {
                    v162 = *v160;
                    v159 += 8;
                    ++v160;
                    *((_QWORD *)v159 - 1) = v162;
                  }
                  while ( v161 > v159 );
                }
              }
            }
            else
            {
              *(__m128i *)v96 = _mm_loadu_si128(v98);
              if ( v94 > 16 )
              {
                v103 = &v96[v94];
                v104 = v98 + 1;
                v105 = v96 + 16;
                do
                {
                  v106 = _mm_loadu_si128(v104);
                  v105 += 32;
                  v104 += 2;
                  *((__m128i *)v105 - 2) = v106;
                  *((__m128i *)v105 - 1) = _mm_loadu_si128(v104 - 1);
                }
                while ( v103 > v105 );
              }
            }
          }
          else
          {
            if ( v95 > (unsigned __int64)&v96[-v311] )
              return -20;
            v99 = (char *)v98 - (char *)v279;
            v100 = (const void *)(v282 + (char *)v98 - (char *)v279);
            if ( v282 < (unsigned __int64)v100 + v94 )
            {
              v307 = v95;
              v94 += v99;
              v101 = (char *)memmove(v96, v100, (char *)v279 - (char *)v98);
              v95 = v307;
              v102 = v101;
              v98 = v279;
              v96 = &v102[-v99];
              goto LABEL_85;
            }
LABEL_136:
            memmove(v96, v100, v94);
          }
        }
        goto LABEL_89;
      }
      v115 = 3 * v90;
      v116 = v341[3 * v90];
      v117 = *(_QWORD *)(a1 + 30360);
      v118 = *(_QWORD *)v314 + v116;
      if ( *(_QWORD *)v314 + v116 <= v117 )
      {
        v142 = (__int8 *)(*(_QWORD *)v314 + v116 - 32);
        v143 = _mm_loadu_si128((const __m128i *)&v341[v115]);
        v144 = &v341[v115];
        v94 = v144[1];
        v145 = v144[2];
        v320 = v342[3 * v90];
        v96 = &v53->m128i_i8[v116];
        *(__m128i *)n = v143;
        v51 = v116 + v94;
        v146 = (__m128i *)((char *)v53 + v116 - v145);
        if ( v142 < &v53->m128i_i8[v116 + v94] || v118 > v299 )
        {
          n[0] = v116;
          n[1] = v94;
          v320 = v145;
          v51 = sub_977650(v53, v300, v142, (const __m128i **)v314, v299, v279, v116, v94, v145, v311, v282);
        }
        else
        {
          *v53 = _mm_loadu_si128(*(const __m128i **)v314);
          if ( v116 > 0x10 )
          {
            v53[1] = _mm_loadu_si128(v89 + 1);
            if ( (__int64)(v116 - 16) > 16 )
            {
              v164 = v53 + 2;
              v165 = v89 + 2;
              do
              {
                v166 = _mm_loadu_si128(v165);
                v164 += 2;
                v165 += 2;
                v164[-2] = v166;
                v164[-1] = _mm_loadu_si128(v165 - 1);
              }
              while ( v96 > (char *)v164 );
            }
          }
          *(_QWORD *)v314 = v118;
          if ( v145 > v96 - (char *)v279 )
          {
            if ( v145 > (unsigned __int64)&v96[-v311] )
              return -20;
            v147 = (char *)v146 - (char *)v279;
            v100 = (const void *)(v282 + (char *)v146 - (char *)v279);
            if ( v282 >= (unsigned __int64)v100 + v94 )
              goto LABEL_136;
            v309 = v145;
            v94 += v147;
            v148 = (char *)memmove(v96, v100, (char *)v279 - (char *)v146);
            v145 = v309;
            v149 = v148;
            v146 = v279;
            v96 = &v149[-v147];
          }
          if ( v145 <= 0xF )
          {
            if ( v145 > 7 )
            {
              *(_QWORD *)v96 = v146->m128i_i64[0];
            }
            else
            {
              *v96 = v146->m128i_i8[0];
              v96[1] = v146->m128i_i8[1];
              v96[2] = v146->m128i_i8[2];
              v96[3] = v146->m128i_i8[3];
              v220 = (__int32 *)((char *)v146->m128i_i32 + dword_23D8D00[v145]);
              *((_DWORD *)v96 + 1) = *v220;
              v146 = (const __m128i *)((char *)v220 - dword_23D8D20[v145]);
            }
            if ( (unsigned __int64)v94 > 8 )
            {
              v221 = v96 + 8;
              v222 = &v146->m128i_i64[1];
              v223 = &v96[v94];
              if ( v96 - (char *)v146 > 15 )
              {
                *(__m128i *)(v96 + 8) = _mm_loadu_si128((const __m128i *)&v146->m128i_u64[1]);
                if ( v94 - 8 > 16 )
                {
                  v253 = v96 + 24;
                  v254 = (const __m128i *)((char *)v146 + 24);
                  do
                  {
                    v255 = _mm_loadu_si128(v254);
                    v253 += 32;
                    v254 += 2;
                    *((__m128i *)v253 - 2) = v255;
                    *((__m128i *)v253 - 1) = _mm_loadu_si128(v254 - 1);
                  }
                  while ( v223 > v253 );
                }
              }
              else
              {
                do
                {
                  v224 = *v222;
                  v221 += 8;
                  ++v222;
                  *((_QWORD *)v221 - 1) = v224;
                }
                while ( v223 > v221 );
              }
            }
          }
          else
          {
            *(__m128i *)v96 = _mm_loadu_si128(v146);
            if ( v94 > 16 )
            {
              v150 = &v96[v94];
              v151 = v146 + 1;
              v152 = v96 + 16;
              do
              {
                v153 = _mm_loadu_si128(v151);
                v152 += 32;
                v151 += 2;
                *((__m128i *)v152 - 2) = v153;
                *((__m128i *)v152 - 1) = _mm_loadu_si128(v151 - 1);
              }
              while ( v150 > v152 );
            }
          }
        }
LABEL_89:
        if ( v51 > 0xFFFFFFFFFFFFFF88LL )
          return v51;
        v107 = (unsigned __int64)v279;
        if ( v80 > v289 + v294 )
          v107 = v282;
        v108 = v289 + v294 - v80;
        v53 = (__m128i *)((char *)v53 + v51);
        _mm_prefetch((const char *)(v108 + v107), 1);
        _mm_prefetch((const char *)(v108 + v107 + 64), 1);
        v294 += v284 + v289;
        v109 = &v341[3 * v90];
        *v109 = v289;
        v109[1] = v284;
        v109[2] = v80;
        goto LABEL_93;
      }
      v119 = v117 - *(_QWORD *)v314;
      if ( v119 )
      {
        if ( v119 > v300 - (unsigned __int64)v53 )
          return -70;
        sub_977590(v53, *(const __m128i **)v314, v119);
        v53 = (__m128i *)((char *)v53 + v121);
        *(_QWORD *)(v122 - 208) = v120 - v121;
      }
      v123 = 3 * v90;
      v124 = v342[v123];
      v125 = _mm_loadu_si128((const __m128i *)&v341[v123]);
      v126 = &v341[v123];
      *(_QWORD *)v314 = a1 + 30372;
      v127 = v126[1];
      v128 = v126[2];
      v316 = v124;
      v129 = *v126;
      v299 = a1 + 95908;
      *(_DWORD *)(a1 + 30368) = 0;
      v130 = (__m128i *)((char *)v53 + v129);
      v51 = v129 + v127;
      *(__m128i *)v315 = v125;
      v131 = v129 + a1 + 30372;
      v132 = (__m128i *)((char *)v53 + v129 - v128);
      if ( v300 - 32 < (unsigned __int64)v53->m128i_u64 + v129 + v127 || a1 + 95908 < v131 )
      {
        v316 = v128;
        v315[1] = v127;
        v51 = sub_977760(
                (unsigned __int64)v53,
                v300,
                (const __m128i **)v314,
                v299,
                v279,
                v311,
                v315[0],
                v127,
                v128,
                v282);
      }
      else
      {
        *v53 = _mm_loadu_si128((const __m128i *)(a1 + 30372));
        if ( v129 > 0x10 )
        {
          v53[1] = _mm_loadu_si128((const __m128i *)(a1 + 30388));
          if ( (__int64)(v129 - 16) > 16 )
          {
            v225 = v53 + 2;
            v226 = (const __m128i *)(a1 + 30404);
            do
            {
              v227 = _mm_loadu_si128(v226);
              v225 += 2;
              v226 += 2;
              v225[-2] = v227;
              v225[-1] = _mm_loadu_si128(v226 - 1);
            }
            while ( v130 > v225 );
          }
        }
        *(_QWORD *)v314 = v131;
        if ( v128 <= (char *)v130 - (char *)v279 )
          goto LABEL_116;
        if ( v128 > (unsigned __int64)v130 - v311 )
          return -20;
        v133 = (char *)v132 - (char *)v279;
        v134 = (const void *)(v282 + v133);
        if ( v282 < v282 + v133 + v127 )
        {
          v308 = v128;
          v127 += v133;
          v303 = -v133;
          v135 = (char *)memmove(v130, v134, -v133);
          v132 = v279;
          v128 = v308;
          v130 = (__m128i *)&v135[v303];
LABEL_116:
          if ( v128 <= 0xF )
          {
            if ( v128 > 7 )
            {
              v130->m128i_i64[0] = v132->m128i_i64[0];
            }
            else
            {
              v130->m128i_i8[0] = v132->m128i_i8[0];
              v130->m128i_i8[1] = v132->m128i_i8[1];
              v130->m128i_i8[2] = v132->m128i_i8[2];
              v130->m128i_i8[3] = v132->m128i_i8[3];
              v228 = (__int32 *)((char *)v132->m128i_i32 + dword_23D8D00[v128]);
              v130->m128i_i32[1] = *v228;
              v132 = (const __m128i *)((char *)v228 - dword_23D8D20[v128]);
            }
            if ( (unsigned __int64)v127 > 8 )
            {
              v229 = &v130->m128i_i8[8];
              v230 = &v132->m128i_i64[1];
              v231 = &v130->m128i_i8[v127];
              if ( (char *)v130 - (char *)v132 > 15 )
              {
                *(__m128i *)((char *)v130 + 8) = _mm_loadu_si128((const __m128i *)&v132->m128i_u64[1]);
                if ( v127 - 8 > 16 )
                {
                  v264 = (__m128i *)((char *)v130 + 24);
                  v265 = (const __m128i *)((char *)v132 + 24);
                  do
                  {
                    v266 = _mm_loadu_si128(v265);
                    v264 += 2;
                    v265 += 2;
                    v264[-2] = v266;
                    v264[-1] = _mm_loadu_si128(v265 - 1);
                  }
                  while ( v231 > (char *)v264 );
                }
              }
              else
              {
                do
                {
                  v232 = *v230;
                  v229 += 8;
                  ++v230;
                  *((_QWORD *)v229 - 1) = v232;
                }
                while ( v231 > v229 );
              }
            }
          }
          else
          {
            *v130 = _mm_loadu_si128(v132);
            if ( v127 > 16 )
            {
              v136 = &v130->m128i_i8[v127];
              v137 = v132 + 1;
              v138 = v130 + 1;
              do
              {
                v139 = _mm_loadu_si128(v137);
                v138 += 2;
                v137 += 2;
                v138[-2] = v139;
                v138[-1] = _mm_loadu_si128(v137 - 1);
              }
              while ( v136 > (char *)v138 );
            }
          }
          goto LABEL_120;
        }
        memmove(v130, v134, v127);
      }
LABEL_120:
      if ( v51 > 0xFFFFFFFFFFFFFF88LL )
        return v51;
      v140 = (unsigned __int64)v279;
      if ( v289 + v294 < v80 )
        v140 = v282;
      v53 = (__m128i *)((char *)v53 + v51);
      v141 = v289 + v294 - v80;
      _mm_prefetch((const char *)(v141 + v140), 1);
      _mm_prefetch((const char *)(v141 + v140 + 64), 1);
      *v126 = v289;
      v126[2] = v80;
      v126[1] = v284;
      v294 += v284 + v289;
LABEL_93:
      if ( a6 == ++v277 )
      {
        v50 = a6;
        goto LABEL_40;
      }
      v60 = v333;
      v62 = v337;
      v61 = v335;
    }
    v79 = v327 << v328 >> -(char)v76;
    LODWORD(v328) = v328 + v76;
    v80 = v79 + v70;
    v340 = v339;
    v81 = v338;
    v338 = v80;
    v339 = v81;
    goto LABEL_67;
  }
LABEL_40:
  if ( v329 == (unsigned __int64 *)v330 && (_DWORD)v328 == 64 )
  {
    v168 = v50 - v305;
    if ( a6 > v50 - v305 )
    {
      v169 = v279;
      v278 = v300 - 32;
      v170 = v299;
      while ( 1 )
      {
        v171 = *(const __m128i **)v314;
        v172 = v168 & 7;
        v173 = 3 * v172;
        v174 = &v341[3 * v172];
        if ( *(_DWORD *)(a1 + 30368) == 2 )
        {
          v191 = v341[3 * v172];
          v192 = *(_QWORD *)(a1 + 30360);
          v193 = &v342[v173 + 24];
          v194 = *(_QWORD *)v314 + v191;
          if ( *(_QWORD *)v314 + v191 <= v192 )
          {
            v176 = v174[1];
            v180 = (__m128i *)((char *)v53 + v191);
            v210 = v174[2];
            v211 = (__int8 *)(*(_QWORD *)v314 + v191 - 32);
            v212 = _mm_loadu_si128((const __m128i *)&v341[v173]);
            v181 = v191 + v176;
            v326 = v342[v173];
            *(__m128i *)v325 = v212;
            v213 = (__m128i *)((char *)v53 + v191 - v210);
            if ( v211 < &v53->m128i_i8[v191 + v176] || v194 > v170 )
            {
              v325[1] = v176;
              v326 = v210;
              v181 = sub_977650(v53, v300, v211, (const __m128i **)v314, v170, v169, v325[0], v176, v210, v311, v282);
            }
            else
            {
              *v53 = _mm_loadu_si128(*(const __m128i **)v314);
              if ( v191 > 0x10 )
              {
                v53[1] = _mm_loadu_si128(v171 + 1);
                if ( (__int64)(v191 - 16) > 16 )
                {
                  v245 = v53 + 2;
                  v246 = v171 + 2;
                  do
                  {
                    v247 = _mm_loadu_si128(v246);
                    v245 += 2;
                    v246 += 2;
                    v245[-2] = v247;
                    v245[-1] = _mm_loadu_si128(v246 - 1);
                  }
                  while ( v180 > v245 );
                }
              }
              *(_QWORD *)v314 = v194;
              if ( v210 > (char *)v180 - (char *)v169 )
              {
                if ( v210 > (unsigned __int64)v180 - v311 )
                  return -20;
                v214 = (char *)v213 - (char *)v169;
                v185 = (const void *)(v282 + (char *)v213 - (char *)v169);
                if ( v282 >= (unsigned __int64)v185 + v176 )
                {
LABEL_219:
                  *(_QWORD *)v280 = v181;
                  memmove(v180, v185, v176);
                  v181 = *(_QWORD *)v280;
                  goto LABEL_187;
                }
                v297 = v191 + v176;
                v292 = v210;
                v287 = v176;
                v215 = (char *)memmove(v180, v185, (char *)v169 - (char *)v213);
                v181 = v297;
                v210 = v292;
                v213 = v169;
                v180 = (__m128i *)&v215[-v214];
                v176 = v214 + v287;
              }
              if ( v210 <= 0xF )
              {
                if ( v210 > 7 )
                {
                  v180->m128i_i64[0] = v213->m128i_i64[0];
                }
                else
                {
                  v180->m128i_i8[0] = v213->m128i_i8[0];
                  v180->m128i_i8[1] = v213->m128i_i8[1];
                  v180->m128i_i8[2] = v213->m128i_i8[2];
                  v180->m128i_i8[3] = v213->m128i_i8[3];
                  v248 = (__int32 *)((char *)v213->m128i_i32 + dword_23D8D00[v210]);
                  v180->m128i_i32[1] = *v248;
                  v213 = (const __m128i *)((char *)v248 - dword_23D8D20[v210]);
                }
                if ( (unsigned __int64)v176 > 8 )
                {
                  v249 = &v180->m128i_i8[8];
                  v250 = &v213->m128i_i64[1];
                  v251 = &v180->m128i_i8[v176];
                  if ( (char *)v180 - (char *)v213 > 15 )
                  {
                    *(__m128i *)((char *)v180 + 8) = _mm_loadu_si128((const __m128i *)&v213->m128i_u64[1]);
                    if ( v176 - 8 > 16 )
                    {
                      v270 = (__m128i *)((char *)v180 + 24);
                      v271 = (const __m128i *)((char *)v213 + 24);
                      do
                      {
                        v272 = _mm_loadu_si128(v271);
                        v270 += 2;
                        v271 += 2;
                        v270[-2] = v272;
                        v270[-1] = _mm_loadu_si128(v271 - 1);
                      }
                      while ( v251 > (char *)v270 );
                    }
                  }
                  else
                  {
                    do
                    {
                      v252 = *v250;
                      v249 += 8;
                      ++v250;
                      *((_QWORD *)v249 - 1) = v252;
                    }
                    while ( v251 > v249 );
                  }
                }
              }
              else
              {
                *v180 = _mm_loadu_si128(v213);
                if ( v176 > 16 )
                {
                  v216 = &v180->m128i_i8[v176];
                  v217 = v213 + 1;
                  v218 = v180 + 1;
                  do
                  {
                    v219 = _mm_loadu_si128(v217);
                    v218 += 2;
                    v217 += 2;
                    v218[-2] = v219;
                    v218[-1] = _mm_loadu_si128(v217 - 1);
                  }
                  while ( v216 > (char *)v218 );
                }
              }
            }
          }
          else
          {
            v195 = v192 - *(_QWORD *)v314;
            if ( v192 != *(_QWORD *)v314 )
            {
              if ( v195 > v300 - (unsigned __int64)v53 )
                return -70;
              v196 = v53;
              v53 = (__m128i *)((char *)v53 + v195);
              sub_977590(v196, *(const __m128i **)v314, v195);
              *(v193 - 26) = v197 - v195;
            }
            v198 = 3 * v172;
            v176 = v174[1];
            *(_DWORD *)(a1 + 30368) = 0;
            v198 *= 8;
            *(_QWORD *)v314 = a1 + 30372;
            v170 = a1 + 95908;
            v199 = _mm_loadu_si128((const __m128i *)((char *)v341 + v198));
            v322 = *(_QWORD *)((char *)v342 + v198);
            v200 = *v174;
            v201 = v174[2];
            v321 = v199;
            v180 = (__m128i *)((char *)v53 + v200);
            v181 = v200 + v176;
            v202 = v200 + a1 + 30372;
            v203 = (__m128i *)((char *)v53 + v200 - v201);
            if ( v278 < (unsigned __int64)v53->m128i_u64 + v200 + v176 || v170 < v202 )
            {
              v321.m128i_i64[1] = v176;
              v322 = v201;
              v233 = sub_977760(
                       (unsigned __int64)v53,
                       v300,
                       (const __m128i **)v314,
                       v170,
                       v169,
                       v311,
                       v321.m128i_u64[0],
                       v176,
                       v201,
                       v282);
              goto LABEL_243;
            }
            *v53 = _mm_loadu_si128((const __m128i *)(a1 + 30372));
            if ( v200 > 0x10 )
            {
              v53[1] = _mm_loadu_si128((const __m128i *)(a1 + 30388));
              if ( (__int64)(v200 - 16) > 16 )
              {
                v256 = v53 + 2;
                v257 = (const __m128i *)(a1 + 30404);
                do
                {
                  v258 = _mm_loadu_si128(v257);
                  v256 += 2;
                  v257 += 2;
                  v256[-2] = v258;
                  v256[-1] = _mm_loadu_si128(v257 - 1);
                }
                while ( v180 > v256 );
              }
            }
            *(_QWORD *)v314 = v202;
            if ( v201 > (char *)v180 - (char *)v169 )
            {
              if ( v201 > (unsigned __int64)v180 - v311 )
                return -20;
              v204 = (char *)v203 - (char *)v169;
              v185 = (const void *)(v282 + v204);
              if ( v282 >= v282 + v204 + v176 )
                goto LABEL_219;
              v296 = v181;
              v291 = v201;
              v286 = v176;
              v205 = (char *)memmove(v180, v185, -v204);
              v181 = v296;
              v201 = v291;
              v176 = v204 + v286;
              v180 = (__m128i *)&v205[-v204];
              v203 = v169;
            }
            if ( v201 <= 0xF )
            {
              if ( v201 > 7 )
              {
                v180->m128i_i64[0] = v203->m128i_i64[0];
              }
              else
              {
                v180->m128i_i8[0] = v203->m128i_i8[0];
                v180->m128i_i8[1] = v203->m128i_i8[1];
                v180->m128i_i8[2] = v203->m128i_i8[2];
                v180->m128i_i8[3] = v203->m128i_i8[3];
                v259 = (__int32 *)((char *)v203->m128i_i32 + dword_23D8D00[v201]);
                v180->m128i_i32[1] = *v259;
                v203 = (const __m128i *)((char *)v259 - dword_23D8D20[v201]);
              }
              if ( (unsigned __int64)v176 > 8 )
              {
                v260 = &v180->m128i_i8[8];
                v261 = &v203->m128i_i64[1];
                v262 = &v180->m128i_i8[v176];
                if ( (char *)v180 - (char *)v203 > 15 )
                {
                  *(__m128i *)((char *)v180 + 8) = _mm_loadu_si128((const __m128i *)&v203->m128i_u64[1]);
                  if ( v176 - 8 > 16 )
                  {
                    v273 = (__m128i *)((char *)v180 + 24);
                    v274 = (const __m128i *)((char *)v203 + 24);
                    do
                    {
                      v275 = _mm_loadu_si128(v274);
                      v273 += 2;
                      v274 += 2;
                      v273[-2] = v275;
                      v273[-1] = _mm_loadu_si128(v274 - 1);
                    }
                    while ( v262 > (char *)v273 );
                  }
                }
                else
                {
                  do
                  {
                    v263 = *v261;
                    v260 += 8;
                    ++v261;
                    *((_QWORD *)v260 - 1) = v263;
                  }
                  while ( v262 > v260 );
                }
              }
            }
            else
            {
              *v180 = _mm_loadu_si128(v203);
              if ( v176 > 16 )
              {
                v206 = &v180->m128i_i8[v176];
                v207 = v203 + 1;
                v208 = v180 + 1;
                do
                {
                  v209 = _mm_loadu_si128(v207);
                  v208 += 2;
                  v207 += 2;
                  v208[-2] = v209;
                  v208[-1] = _mm_loadu_si128(v207 - 1);
                }
                while ( v206 > (char *)v208 );
              }
            }
          }
        }
        else
        {
          v175 = _mm_loadu_si128((const __m128i *)&v341[v173]);
          v176 = v174[1];
          v177 = v342[v173];
          *(__m128i *)v323 = v175;
          v324 = v177;
          v178 = *v174;
          v179 = v174[2];
          v180 = (__m128i *)((char *)v53 + v178);
          v181 = v178 + v176;
          v182 = *(_QWORD *)v314 + v178;
          v183 = (__m128i *)((char *)v53 + v178 - v179);
          if ( v278 < (unsigned __int64)v53->m128i_u64 + v178 + v176 || v182 > v170 )
          {
            v323[1] = v176;
            v324 = v179;
            v233 = sub_977760(
                     (unsigned __int64)v53,
                     v300,
                     (const __m128i **)v314,
                     v170,
                     v169,
                     v311,
                     v323[0],
                     v176,
                     v179,
                     v282);
LABEL_243:
            v181 = v233;
            goto LABEL_187;
          }
          *v53 = _mm_loadu_si128(*(const __m128i **)v314);
          if ( v178 > 0x10 )
          {
            v53[1] = _mm_loadu_si128(v171 + 1);
            if ( (__int64)(v178 - 16) > 16 )
            {
              v234 = v53 + 2;
              v235 = v171 + 2;
              do
              {
                v236 = _mm_loadu_si128(v235);
                v234 += 2;
                v235 += 2;
                v234[-2] = v236;
                v234[-1] = _mm_loadu_si128(v235 - 1);
              }
              while ( v180 > v234 );
            }
          }
          *(_QWORD *)v314 = v182;
          if ( v179 > (char *)v180 - (char *)v169 )
          {
            if ( v179 > (unsigned __int64)v180 - v311 )
              return -20;
            v184 = (char *)v183 - (char *)v169;
            v185 = (const void *)(v282 + v184);
            if ( v282 >= v282 + v184 + v176 )
              goto LABEL_219;
            v295 = v181;
            v290 = v179;
            v285 = v176;
            v186 = (char *)memmove(v180, v185, -v184);
            v181 = v295;
            v179 = v290;
            v176 = v184 + v285;
            v180 = (__m128i *)&v186[-v184];
            v183 = v169;
          }
          if ( v179 <= 0xF )
          {
            if ( v179 > 7 )
            {
              v180->m128i_i64[0] = v183->m128i_i64[0];
            }
            else
            {
              v180->m128i_i8[0] = v183->m128i_i8[0];
              v180->m128i_i8[1] = v183->m128i_i8[1];
              v180->m128i_i8[2] = v183->m128i_i8[2];
              v180->m128i_i8[3] = v183->m128i_i8[3];
              v237 = (__int32 *)((char *)v183->m128i_i32 + dword_23D8D00[v179]);
              v180->m128i_i32[1] = *v237;
              v183 = (const __m128i *)((char *)v237 - dword_23D8D20[v179]);
            }
            if ( (unsigned __int64)v176 > 8 )
            {
              v238 = &v180->m128i_i8[8];
              v239 = &v183->m128i_i64[1];
              v240 = &v180->m128i_i8[v176];
              if ( (char *)v180 - (char *)v183 > 15 )
              {
                *(__m128i *)((char *)v180 + 8) = _mm_loadu_si128((const __m128i *)&v183->m128i_u64[1]);
                if ( v176 - 8 > 16 )
                {
                  v267 = (__m128i *)((char *)v180 + 24);
                  v268 = (const __m128i *)((char *)v183 + 24);
                  do
                  {
                    v269 = _mm_loadu_si128(v268);
                    v267 += 2;
                    v268 += 2;
                    v267[-2] = v269;
                    v267[-1] = _mm_loadu_si128(v268 - 1);
                  }
                  while ( v240 > (char *)v267 );
                }
              }
              else
              {
                do
                {
                  v241 = *v239;
                  v238 += 8;
                  ++v239;
                  *((_QWORD *)v238 - 1) = v241;
                }
                while ( v240 > v238 );
              }
            }
          }
          else
          {
            *v180 = _mm_loadu_si128(v183);
            if ( v176 > 16 )
            {
              v187 = &v180->m128i_i8[v176];
              v188 = v183 + 1;
              v189 = v180 + 1;
              do
              {
                v190 = _mm_loadu_si128(v188);
                v189 += 2;
                v188 += 2;
                v189[-2] = v190;
                v189[-1] = _mm_loadu_si128(v188 - 1);
              }
              while ( v187 > (char *)v189 );
            }
          }
        }
LABEL_187:
        if ( v181 > 0xFFFFFFFFFFFFFF88LL )
          return v181;
        v53 = (__m128i *)((char *)v53 + v181);
        if ( a6 == ++v168 )
        {
          v299 = v170;
          break;
        }
      }
    }
    v8 = *(const __m128i **)v314;
    *(_DWORD *)(a1 + 26684) = v338;
    *(_DWORD *)(a1 + 26688) = v339;
    *(_DWORD *)(a1 + 26692) = v340;
    v6 = *(_DWORD *)(a1 + 30368);
LABEL_44:
    v54 = v299 - (_QWORD)v8;
    v55 = v300 - (_QWORD)v53;
    if ( v6 == 2 )
    {
      if ( v54 <= v55 )
      {
        if ( v53 )
        {
          v57 = v53;
          v53 = (__m128i *)((char *)v53 + v54);
          v54 = (size_t)&stru_10000;
          memmove(v57, v8, v299 - (_QWORD)v8);
          *(_QWORD *)v314 = a1 + 30372;
          v8 = (const __m128i *)(a1 + 30372);
          v55 = v300 - (_QWORD)v53;
          goto LABEL_45;
        }
        if ( v300 >= (unsigned __int64)&stru_10000 )
          return -a2;
      }
    }
    else
    {
LABEL_45:
      if ( v54 <= v55 )
      {
        if ( v53 )
        {
          memmove(v53, v8, v54);
          return (__int64)v53 + v54 - a2;
        }
        return -a2;
      }
    }
    return -70;
  }
  return -20;
}
