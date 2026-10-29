__int64 __fastcall sub_97C510(
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
  unsigned __int64 v9; // rbx
  const __m128i *v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rdx
  int v15; // ebp
  signed __int64 v16; // r15
  __int64 *v17; // r12
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rax
  int v21; // esi
  int v22; // eax
  char v23; // cl
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 *v26; // r8
  unsigned __int64 v27; // rax
  bool v28; // cf
  __int64 v29; // rcx
  const char *v30; // rax
  __int16 *v31; // r13
  __int16 *v32; // rbx
  int v33; // edi
  __int64 v34; // r9
  __int16 *v35; // r11
  int v36; // esi
  int v37; // edx
  __int64 v38; // rax
  unsigned __int8 v39; // r8
  unsigned __int8 v40; // r14
  unsigned __int8 v41; // r13
  unsigned __int8 v42; // bl
  _BOOL8 v43; // r11
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned int v46; // eax
  unsigned __int64 *v47; // rdi
  int v48; // ebp
  size_t v49; // r13
  __m128i *v51; // r12
  size_t v52; // r13
  size_t v53; // rdx
  unsigned __int64 v54; // rdx
  __m128i *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // r10
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // r9
  unsigned __int16 *v62; // rbp
  int v63; // edx
  __int64 v64; // r10
  unsigned __int16 *v65; // rbx
  unsigned __int8 v66; // r13
  int v67; // esi
  unsigned __int16 *v68; // r11
  __int64 v69; // r9
  __int64 v70; // r14
  __int64 v71; // r8
  __int64 v72; // rax
  unsigned __int8 v73; // bp
  int v74; // ecx
  int v75; // eax
  unsigned __int8 v76; // r11
  unsigned __int8 v77; // di
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rbx
  int v82; // edi
  int v83; // eax
  char v84; // cl
  unsigned int v85; // eax
  unsigned int v86; // edi
  unsigned __int64 *v87; // rcx
  const __m128i *v88; // rsi
  __int64 v89; // r14
  __m128i v90; // xmm6
  unsigned __int64 *v91; // rax
  unsigned __int64 v92; // rdi
  signed __int64 v93; // r15
  unsigned __int64 v94; // r8
  __int8 *v95; // rcx
  unsigned __int64 v96; // rdx
  const __m128i *v97; // rax
  signed __int64 v98; // rbp
  const void *v99; // rsi
  char *v100; // rax
  char *v101; // rcx
  __int8 *v102; // r15
  const __m128i *v103; // rax
  __m128i *v104; // rcx
  __m128i v105; // xmm0
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rcx
  __int64 *v108; // rax
  _BOOL8 v109; // rbx
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned int v112; // eax
  unsigned int v113; // esi
  unsigned __int64 *v114; // rdi
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // r9
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rdi
  unsigned __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r11
  __int64 v123; // r10
  __int64 v124; // r14
  __int64 v125; // rdx
  __m128i v126; // xmm7
  __int64 *v127; // r14
  signed __int64 v128; // r15
  unsigned __int64 v129; // r8
  unsigned __int64 v130; // rdx
  __m128i *v131; // rcx
  unsigned __int64 v132; // rax
  const __m128i *v133; // rbp
  signed __int64 v134; // rbp
  const void *v135; // rsi
  char *v136; // rax
  char *v137; // r15
  const __m128i *v138; // rbp
  __m128i *v139; // rcx
  __m128i v140; // xmm4
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rcx
  __int8 *v143; // rdx
  __m128i v144; // xmm6
  __int64 *v145; // rax
  signed __int64 v146; // rbp
  unsigned __int64 v147; // r15
  __m128i *v148; // rcx
  const __m128i *v149; // rax
  const void *v150; // rsi
  char *v151; // rcx
  char *v152; // rbp
  const __m128i *v153; // rax
  __m128i *v154; // rcx
  __m128i v155; // xmm2
  __m128i *v156; // rdi
  const __m128i *v157; // rsi
  __m128i v158; // xmm5
  unsigned __int64 v159; // rax
  unsigned __int64 v160; // rax
  char *v161; // rdx
  __int64 *v162; // rsi
  __int8 *v163; // rdi
  __int64 v164; // rax
  unsigned __int64 v165; // rdx
  unsigned __int64 v166; // rdx
  __m128i *v167; // rdx
  const __m128i *v168; // rsi
  __m128i v169; // xmm6
  _DWORD *v170; // rax
  int v171; // r15d
  const __m128i *v172; // r13
  unsigned __int64 v173; // r14
  const __m128i *v174; // rsi
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 *v177; // r10
  __m128i v178; // xmm4
  signed __int64 v179; // r9
  __int64 v180; // rax
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // r10
  __m128i *v183; // rcx
  size_t v184; // r8
  unsigned __int64 v185; // rdx
  const __m128i *v186; // rbx
  signed __int64 v187; // rbx
  const void *v188; // rsi
  char *v189; // rax
  char *v190; // r9
  const __m128i *v191; // rbx
  __m128i *v192; // rcx
  __m128i v193; // xmm7
  unsigned __int64 v194; // r11
  unsigned __int64 v195; // rdx
  _QWORD *v196; // rbx
  unsigned __int64 v197; // rdi
  unsigned __int64 v198; // r14
  __m128i *v199; // rdi
  __int64 v200; // r11
  __int64 v201; // rdx
  __m128i v202; // xmm4
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // r10
  unsigned __int64 v205; // rax
  const __m128i *v206; // rbx
  signed __int64 v207; // rbx
  char *v208; // rax
  char *v209; // r9
  const __m128i *v210; // rbx
  __m128i *v211; // rcx
  __m128i v212; // xmm2
  unsigned __int64 v213; // r10
  __int8 *v214; // rdx
  __m128i v215; // xmm7
  const __m128i *v216; // rax
  signed __int64 v217; // rbx
  char *v218; // rcx
  char *v219; // r9
  const __m128i *v220; // rax
  __m128i *v221; // rcx
  __m128i v222; // xmm4
  __int32 *v223; // rax
  char *v224; // rdx
  __int64 *v225; // rsi
  char *v226; // r8
  __int64 v227; // rax
  __m128i *v228; // rdx
  const __m128i *v229; // rsi
  __m128i v230; // xmm6
  __int32 *v231; // rbp
  char *v232; // rax
  __int64 *v233; // rdx
  char *v234; // rdi
  __int64 v235; // rcx
  size_t v236; // rax
  __m128i *v237; // rax
  const __m128i *v238; // rsi
  __m128i v239; // xmm5
  __int32 *v240; // rbx
  char *v241; // rax
  __int64 *v242; // rdx
  char *v243; // rsi
  __int64 v244; // rcx
  __m128i *v245; // rcx
  const __m128i *v246; // rax
  __m128i v247; // xmm6
  __m128i *v248; // rdx
  const __m128i *v249; // rsi
  __m128i v250; // xmm7
  __int32 *v251; // rax
  char *v252; // rdx
  __int64 *v253; // rsi
  char *v254; // r10
  __int64 v255; // rax
  __m128i *v256; // rcx
  const __m128i *v257; // rax
  __m128i v258; // xmm3
  __m128i *v259; // rdx
  const __m128i *v260; // rsi
  __m128i v261; // xmm5
  __int32 *v262; // rbx
  char *v263; // rax
  __int64 *v264; // rdx
  char *v265; // rdi
  __int64 v266; // rcx
  __m128i *v267; // rcx
  const __m128i *v268; // rbp
  __m128i v269; // xmm2
  __m128i *v270; // rcx
  const __m128i *v271; // rbx
  __m128i v272; // xmm3
  __m128i *v273; // rcx
  const __m128i *v274; // rax
  __m128i v275; // xmm2
  __m128i *v276; // rcx
  const __m128i *v277; // rbx
  __m128i v278; // xmm5
  unsigned __int16 v279; // [rsp+0h] [rbp-2E8h]
  int v280; // [rsp+0h] [rbp-2E8h]
  unsigned __int64 v281; // [rsp+0h] [rbp-2E8h]
  const __m128i *v282; // [rsp+8h] [rbp-2E0h]
  int v283[2]; // [rsp+8h] [rbp-2E0h]
  unsigned __int64 v285; // [rsp+18h] [rbp-2D0h]
  unsigned __int16 v286; // [rsp+20h] [rbp-2C8h]
  __int64 v287; // [rsp+20h] [rbp-2C8h]
  signed __int64 v288; // [rsp+20h] [rbp-2C8h]
  signed __int64 v289; // [rsp+20h] [rbp-2C8h]
  signed __int64 v290; // [rsp+20h] [rbp-2C8h]
  unsigned __int16 v291; // [rsp+28h] [rbp-2C0h]
  __int64 v292; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v293; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v294; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v295; // [rsp+28h] [rbp-2C0h]
  unsigned __int64 v296; // [rsp+38h] [rbp-2B0h]
  signed __int64 v297; // [rsp+38h] [rbp-2B0h]
  size_t v298; // [rsp+38h] [rbp-2B0h]
  size_t v299; // [rsp+38h] [rbp-2B0h]
  size_t v300; // [rsp+38h] [rbp-2B0h]
  int v301; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v302; // [rsp+48h] [rbp-2A0h]
  unsigned __int64 v303; // [rsp+50h] [rbp-298h]
  __int64 v305; // [rsp+60h] [rbp-288h]
  signed __int64 v306; // [rsp+60h] [rbp-288h]
  signed __int64 v307; // [rsp+60h] [rbp-288h]
  int v309; // [rsp+74h] [rbp-274h]
  __int64 v310; // [rsp+78h] [rbp-270h]
  unsigned __int64 v311; // [rsp+78h] [rbp-270h]
  unsigned __int64 v312; // [rsp+78h] [rbp-270h]
  signed __int64 v313; // [rsp+78h] [rbp-270h]
  __int64 v314; // [rsp+80h] [rbp-268h]
  __int64 v315; // [rsp+88h] [rbp-260h]
  unsigned __int64 *v316; // [rsp+90h] [rbp-258h]
  unsigned int v317; // [rsp+9Ch] [rbp-24Ch]
  int v318[2]; // [rsp+A8h] [rbp-240h] BYREF
  size_t v319[2]; // [rsp+B0h] [rbp-238h]
  __int64 v320; // [rsp+C0h] [rbp-228h]
  size_t v321[2]; // [rsp+D0h] [rbp-218h]
  __int64 v322; // [rsp+E0h] [rbp-208h]
  size_t n[2]; // [rsp+F0h] [rbp-1F8h]
  __int64 v324; // [rsp+100h] [rbp-1E8h]
  __m128i v325; // [rsp+110h] [rbp-1D8h]
  unsigned __int64 v326; // [rsp+120h] [rbp-1C8h]
  size_t v327[2]; // [rsp+130h] [rbp-1B8h]
  __int64 v328; // [rsp+140h] [rbp-1A8h]
  size_t v329[2]; // [rsp+150h] [rbp-198h]
  __int64 v330; // [rsp+160h] [rbp-188h]
  unsigned __int64 v331; // [rsp+170h] [rbp-178h] BYREF
  __int64 v332; // [rsp+178h] [rbp-170h]
  unsigned __int64 *v333; // [rsp+180h] [rbp-168h]
  unsigned __int8 *v334; // [rsp+188h] [rbp-160h]
  unsigned __int8 *v335; // [rsp+190h] [rbp-158h]
  unsigned __int64 v336; // [rsp+198h] [rbp-150h] BYREF
  __int64 v337; // [rsp+1A0h] [rbp-148h] BYREF
  unsigned __int64 v338; // [rsp+1A8h] [rbp-140h] BYREF
  __int64 v339; // [rsp+1B0h] [rbp-138h] BYREF
  unsigned __int64 v340; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v341; // [rsp+1C0h] [rbp-128h] BYREF
  unsigned __int64 v342; // [rsp+1C8h] [rbp-120h]
  unsigned __int64 v343; // [rsp+1D0h] [rbp-118h]
  unsigned __int64 v344; // [rsp+1D8h] [rbp-110h]
  __int64 v345[2]; // [rsp+1E0h] [rbp-108h] BYREF
  _QWORD v346[31]; // [rsp+1F0h] [rbp-F8h] BYREF

  v6 = *(_DWORD *)(a1 + 30368);
  v346[23] = __readfsqword(0x28u);
  if ( v6 == 1 )
  {
    v303 = *(_QWORD *)(a1 + 30352);
  }
  else
  {
    v7 = a2 + a3;
    if ( a3 <= 0 )
      v7 = a2;
    v303 = v7;
  }
  v8 = *(const __m128i **)(a1 + 30120);
  v9 = *(_QWORD *)(a1 + 30360);
  *(_QWORD *)v318 = v8;
  v302 = v9;
  if ( !a6 )
  {
    v51 = (__m128i *)a2;
    goto LABEL_44;
  }
  v10 = *(const __m128i **)(a1 + 29896);
  *(_DWORD *)(a1 + 30004) = 1;
  v282 = v10;
  v315 = *(_QWORD *)(a1 + 29904);
  v285 = *(_QWORD *)(a1 + 29912);
  v342 = *(unsigned int *)(a1 + 26684);
  v343 = *(unsigned int *)(a1 + 26688);
  v344 = *(unsigned int *)(a1 + 26692);
  if ( !a5 )
    return -20;
  v334 = a4;
  v335 = a4 + 8;
  v11 = a4[a5 - 1];
  v54 = *a4;
  v333 = (unsigned __int64 *)a4;
  v331 = v54;
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
      v54 += (unsigned __int64)a4[6] << 48;
LABEL_51:
      v54 += (unsigned __int64)a4[5] << 40;
LABEL_52:
      v54 += (unsigned __int64)a4[4] << 32;
LABEL_53:
      v54 += (unsigned __int64)a4[3] << 24;
LABEL_54:
      v54 += (unsigned __int64)a4[2] << 16;
LABEL_55:
      v331 = ((unsigned __int64)a4[1] << 8) + v54;
LABEL_56:
      if ( !(_BYTE)v11 )
        return -20;
      _BitScanReverse(&v11, v11);
      LODWORD(v332) = (v11 ^ 0x1F) - 8 * a5 + 41;
LABEL_10:
      v12 = 8;
      if ( a6 <= 8 )
        v12 = a6;
      v309 = v12;
      sub_978280((__int64 *)&v336, &v337, &v331, *(_QWORD *)a1);
      sub_978280((__int64 *)&v338, &v339, v13, *(_QWORD *)(a1 + 16));
      sub_978280((__int64 *)&v340, &v341, v14, *(_QWORD *)(a1 + 8));
      if ( a6 <= 0 )
      {
        v51 = (__m128i *)a2;
        v48 = 0;
        goto LABEL_40;
      }
      v15 = 0;
      v296 = (unsigned __int64)v335;
      v305 = v341;
      v16 = a2 - (_QWORD)v282;
      v316 = (unsigned __int64 *)v334;
      v301 = a6 - 1;
      v17 = v345;
      v310 = v337;
      v314 = v339;
      break;
    default:
      v333 = (unsigned __int64 *)&a4[a5 - 8];
      v331 = *v333;
      if ( !(_BYTE)v11 )
        return -20;
      _BitScanReverse(&v11, v11);
      LODWORD(v332) = (v11 ^ 0x1F) - 23;
      if ( a5 > 0xFFFFFFFFFFFFFF88LL )
        return -20;
      goto LABEL_10;
  }
  do
  {
    v31 = (__int16 *)(v310 + 8 * v336);
    v57 = *((unsigned int *)v31 + 1);
    v32 = (__int16 *)(v305 + 8 * v340);
    v33 = *((unsigned __int8 *)v32 + 2);
    v34 = *((unsigned int *)v32 + 1);
    v279 = *v31;
    v35 = (__int16 *)(v314 + 8 * v338);
    v36 = *((unsigned __int8 *)v31 + 2);
    v37 = *((unsigned __int8 *)v35 + 2);
    v38 = *((unsigned int *)v35 + 1);
    v286 = *v32;
    v39 = v37 + v36 + v33;
    v291 = *v35;
    v40 = *((_BYTE *)v31 + 3);
    v41 = *((_BYTE *)v32 + 3);
    v42 = *((_BYTE *)v35 + 3);
    if ( (unsigned __int8)v37 > 1u )
    {
      v18 = v331 << v332;
      LODWORD(v332) = v332 + v37;
      v19 = v38 + (v18 >> -(char)v37);
      v344 = v343;
      v20 = v342;
      v342 = v19;
      v343 = v20;
      goto LABEL_15;
    }
    v43 = (_DWORD)v57 == 0;
    if ( (_BYTE)v37 )
    {
      v165 = v331 << v332 >> 63;
      LODWORD(v332) = v332 + 1;
      v166 = v43 + (_DWORD)v38 + v165;
      if ( v166 == 3 )
      {
        v19 = v342 - 1 - (v342 == 1);
      }
      else
      {
        v19 = *(&v342 + v166) - (*(&v342 + v166) == 0);
        if ( v166 == 1 )
        {
LABEL_163:
          v343 = v342;
          v342 = v19;
LABEL_15:
          if ( (_BYTE)v33 )
            goto LABEL_32;
          goto LABEL_16;
        }
      }
      v344 = v343;
      goto LABEL_163;
    }
    v19 = *(&v332 + v43 + 10);
    v44 = *(&v332 + ((_DWORD)v57 != 0) + 10);
    v342 = v19;
    v343 = v44;
    if ( (_BYTE)v33 )
    {
LABEL_32:
      v45 = v331 << v332;
      LODWORD(v332) = v332 + v33;
      v34 += v45 >> -(char)v33;
      if ( v39 <= 0x1Eu )
        goto LABEL_17;
      goto LABEL_33;
    }
LABEL_16:
    if ( v39 <= 0x1Eu )
      goto LABEL_17;
LABEL_33:
    v46 = v332;
    if ( (unsigned int)v332 > 0x40 )
    {
      v333 = (unsigned __int64 *)&unk_23D8D40;
    }
    else if ( (unsigned __int64)v333 >= v296 )
    {
      LODWORD(v332) = v332 & 7;
      v333 = (unsigned __int64 *)((char *)v333 - (v46 >> 3));
      v331 = *v333;
    }
    else if ( v333 != v316 )
    {
      v317 = (unsigned int)v332 >> 3;
      v47 = (unsigned __int64 *)((char *)v333 - ((unsigned int)v332 >> 3));
      if ( v316 > v47 )
      {
        v317 = (_DWORD)v333 - (_DWORD)v316;
        v47 = (unsigned __int64 *)((char *)v333 - (unsigned int)((_DWORD)v333 - (_DWORD)v316));
      }
      v333 = v47;
      LODWORD(v332) = v332 - 8 * v317;
      v331 = *v47;
    }
LABEL_17:
    if ( (_BYTE)v36 )
    {
      v56 = v331 << v332;
      LODWORD(v332) = v332 + v36;
      v57 += v56 >> -(char)v36;
    }
    if ( v15 != v301 )
    {
      v21 = v332 + v40;
      v22 = v21 + v41;
      v23 = 64 - v22;
      v336 = v279 + (~(-1LL << v40) & (v331 >> (64 - (unsigned __int8)v21)));
      v24 = v42 + v22;
      LODWORD(v332) = v24;
      v340 = v286 + (~(-1LL << v41) & (v331 >> v23));
      v338 = v291 + (~(-1LL << v42) & (v331 >> (64 - (unsigned __int8)v24)));
      if ( v24 > 0x40 )
      {
        v333 = (unsigned __int64 *)&unk_23D8D40;
      }
      else if ( v296 <= (unsigned __int64)v333 )
      {
        LODWORD(v332) = v24 & 7;
        v333 = (unsigned __int64 *)((char *)v333 - (v24 >> 3));
        v331 = *v333;
      }
      else if ( v316 != v333 )
      {
        v25 = v24 >> 3;
        v26 = (unsigned __int64 *)((char *)v333 - (v24 >> 3));
        if ( v316 > v26 )
        {
          v25 = (_DWORD)v333 - (_DWORD)v316;
          v26 = (unsigned __int64 *)((char *)v333 - (unsigned int)((_DWORD)v333 - (_DWORD)v316));
        }
        v333 = v26;
        LODWORD(v332) = v24 - 8 * v25;
        v331 = *v26;
      }
    }
    v27 = (unsigned __int64)v282;
    v28 = v57 + v16 < v19;
    v29 = v57 + v16;
    v16 += v57 + v34;
    if ( v28 )
      v27 = v285;
    ++v15;
    v17 += 3;
    v30 = (const char *)(v29 - v19 + v27);
    _mm_prefetch(v30, 1);
    _mm_prefetch(v30 + 64, 1);
    *(v17 - 3) = v57;
    *(v17 - 2) = v34;
    *(v17 - 1) = v19;
  }
  while ( v309 > v15 );
  v58 = 1;
  v297 = v16;
  v59 = v310;
  v60 = v305;
  v61 = v314;
  v51 = (__m128i *)a2;
  if ( v309 > 0 )
    v58 = v309;
  v48 = v58;
  if ( a6 > v58 )
  {
    v280 = v58;
    while ( 1 )
    {
      v62 = (unsigned __int16 *)(v59 + 8 * v336);
      v63 = *((unsigned __int8 *)v62 + 2);
      v64 = *v62;
      v65 = (unsigned __int16 *)(v60 + 8 * v340);
      v66 = *((_BYTE *)v62 + 3);
      v67 = *((unsigned __int8 *)v65 + 2);
      v68 = (unsigned __int16 *)(v61 + 8 * v338);
      v69 = *v65;
      v70 = *((unsigned int *)v68 + 1);
      v71 = *v68;
      v287 = *((unsigned int *)v65 + 1);
      v72 = *((unsigned int *)v62 + 1);
      v73 = *((_BYTE *)v65 + 3);
      v74 = v72;
      v292 = v72;
      v75 = *((unsigned __int8 *)v68 + 2);
      v76 = *((_BYTE *)v68 + 3);
      v77 = v75 + v63 + v67;
      if ( (unsigned __int8)v75 > 1u )
        break;
      v109 = v74 == 0;
      if ( (_BYTE)v75 )
      {
        v159 = v331 << v332 >> 63;
        LODWORD(v332) = v332 + 1;
        v160 = (unsigned int)(v70 + v109) + v159;
        if ( v160 == 3 )
        {
          v81 = v342 - 1 - (v342 == 1);
        }
        else
        {
          v81 = *(&v342 + v160) - (*(&v342 + v160) == 0);
          if ( v160 == 1 )
            goto LABEL_151;
        }
        v344 = v343;
LABEL_151:
        v343 = v342;
        v342 = v81;
LABEL_67:
        if ( !(_BYTE)v67 )
          goto LABEL_68;
        goto LABEL_97;
      }
      v81 = *(&v332 + v109 + 10);
      v110 = *(&v332 + (v74 != 0) + 10);
      v342 = v81;
      v343 = v110;
      if ( !(_BYTE)v67 )
      {
LABEL_68:
        if ( v77 <= 0x1Eu )
          goto LABEL_69;
        goto LABEL_98;
      }
LABEL_97:
      v111 = v331 << v332;
      LODWORD(v332) = v332 + v67;
      v287 += v111 >> -(char)v67;
      if ( v77 <= 0x1Eu )
        goto LABEL_69;
LABEL_98:
      v112 = v332;
      if ( (unsigned int)v332 > 0x40 )
      {
        v333 = (unsigned __int64 *)&unk_23D8D40;
LABEL_69:
        if ( !(_BYTE)v63 )
          goto LABEL_70;
LABEL_104:
        v115 = v331 << v332;
        LODWORD(v332) = v332 + v63;
        v292 += v115 >> -(char)v63;
        goto LABEL_70;
      }
      if ( v333 >= (unsigned __int64 *)v335 )
      {
        LODWORD(v332) = v332 & 7;
        v333 = (unsigned __int64 *)((char *)v333 - (v112 >> 3));
        v331 = *v333;
        goto LABEL_69;
      }
      if ( v333 == (unsigned __int64 *)v334 )
        goto LABEL_69;
      v113 = (unsigned int)v332 >> 3;
      v114 = (unsigned __int64 *)((char *)v333 - ((unsigned int)v332 >> 3));
      if ( v334 > (unsigned __int8 *)v114 )
      {
        v113 = (_DWORD)v333 - (_DWORD)v334;
        v114 = (unsigned __int64 *)((char *)v333 - (unsigned int)((_DWORD)v333 - (_DWORD)v334));
      }
      v333 = v114;
      LODWORD(v332) = v332 - 8 * v113;
      v331 = *v114;
      if ( (_BYTE)v63 )
        goto LABEL_104;
LABEL_70:
      if ( v280 != v301 )
      {
        v82 = v332 + v66;
        v83 = v82 + v73;
        v84 = 64 - v83;
        v85 = v76 + v83;
        v336 = v64 + (~(-1LL << v66) & (v331 >> (64 - (unsigned __int8)v82)));
        LODWORD(v332) = v85;
        v340 = v69 + (~(-1LL << v73) & (v331 >> v84));
        v338 = v71 + (~(-1LL << v76) & (v331 >> (64 - (unsigned __int8)v85)));
        if ( v85 > 0x40 )
        {
          v333 = (unsigned __int64 *)&unk_23D8D40;
        }
        else if ( v333 >= (unsigned __int64 *)v335 )
        {
          LODWORD(v332) = v85 & 7;
          v333 = (unsigned __int64 *)((char *)v333 - (v85 >> 3));
          v331 = *v333;
        }
        else if ( v333 != (unsigned __int64 *)v334 )
        {
          v86 = v85 >> 3;
          v87 = (unsigned __int64 *)((char *)v333 - (v85 >> 3));
          if ( v334 > (unsigned __int8 *)v87 )
          {
            v86 = (_DWORD)v333 - (_DWORD)v334;
            v87 = (unsigned __int64 *)((char *)v333 - (unsigned int)((_DWORD)v333 - (_DWORD)v334));
          }
          v333 = v87;
          LODWORD(v332) = v85 - 8 * v86;
          v331 = *v87;
        }
      }
      v88 = *(const __m128i **)v318;
      v89 = v280 & 7;
      if ( *(_DWORD *)(a1 + 30368) != 2 )
      {
        v90 = _mm_loadu_si128((const __m128i *)&v345[3 * v89]);
        v91 = (unsigned __int64 *)&v345[3 * v89];
        v92 = *v91;
        v93 = v91[1];
        v322 = v346[3 * v89];
        v94 = v91[2];
        *(__m128i *)v321 = v90;
        v95 = &v51->m128i_i8[v92];
        v49 = v92 + v93;
        v96 = *(_QWORD *)v318 + v92;
        v97 = (__m128i *)((char *)v51 + v92 - v94);
        if ( v303 - 32 < (unsigned __int64)v51->m128i_u64 + v92 + v93 || v96 > v302 )
        {
          v321[0] = v92;
          v322 = v94;
          v321[1] = v93;
          v49 = sub_977760((unsigned __int64)v51, v303, (const __m128i **)v318, v302, v282, v315, v92, v93, v94, v285);
        }
        else
        {
          *v51 = _mm_loadu_si128(*(const __m128i **)v318);
          if ( v92 > 0x10 )
          {
            v51[1] = _mm_loadu_si128(v88 + 1);
            if ( (__int64)(v92 - 16) > 16 )
            {
              v156 = v51 + 2;
              v157 = v88 + 2;
              do
              {
                v158 = _mm_loadu_si128(v157);
                v156 += 2;
                v157 += 2;
                v156[-2] = v158;
                v156[-1] = _mm_loadu_si128(v157 - 1);
              }
              while ( v95 > (__int8 *)v156 );
            }
          }
          *(_QWORD *)v318 = v96;
          if ( v94 <= v95 - (__int8 *)v282 )
          {
LABEL_85:
            if ( v94 <= 0xF )
            {
              if ( v94 <= 7 )
              {
                *v95 = v97->m128i_i8[0];
                v95[1] = v97->m128i_i8[1];
                v95[2] = v97->m128i_i8[2];
                v95[3] = v97->m128i_i8[3];
                v170 = (__int32 *)((char *)v97->m128i_i32 + dword_23D8D00[v94]);
                *((_DWORD *)v95 + 1) = *v170;
                v97 = (const __m128i *)((char *)v170 - dword_23D8D20[v94]);
              }
              else
              {
                *(_QWORD *)v95 = v97->m128i_i64[0];
              }
              if ( (unsigned __int64)v93 > 8 )
              {
                v161 = v95 + 8;
                v162 = &v97->m128i_i64[1];
                v163 = &v95[v93];
                if ( v95 - (__int8 *)v97 > 15 )
                {
                  *(__m128i *)(v95 + 8) = _mm_loadu_si128((const __m128i *)&v97->m128i_u64[1]);
                  if ( v93 - 8 > 16 )
                  {
                    v245 = (__m128i *)(v95 + 24);
                    v246 = (const __m128i *)((char *)v97 + 24);
                    do
                    {
                      v247 = _mm_loadu_si128(v246);
                      v245 += 2;
                      v246 += 2;
                      v245[-2] = v247;
                      v245[-1] = _mm_loadu_si128(v246 - 1);
                    }
                    while ( v163 > (__int8 *)v245 );
                  }
                }
                else
                {
                  do
                  {
                    v164 = *v162;
                    v161 += 8;
                    ++v162;
                    *((_QWORD *)v161 - 1) = v164;
                  }
                  while ( v163 > v161 );
                }
              }
            }
            else
            {
              *(__m128i *)v95 = _mm_loadu_si128(v97);
              if ( v93 > 16 )
              {
                v102 = &v95[v93];
                v103 = v97 + 1;
                v104 = (__m128i *)(v95 + 16);
                do
                {
                  v105 = _mm_loadu_si128(v103);
                  v104 += 2;
                  v103 += 2;
                  v104[-2] = v105;
                  v104[-1] = _mm_loadu_si128(v103 - 1);
                }
                while ( v102 > (__int8 *)v104 );
              }
            }
          }
          else
          {
            if ( v94 > (unsigned __int64)&v95[-v315] )
              return -20;
            v98 = (char *)v97 - (char *)v282;
            v99 = (const void *)(v285 + (char *)v97 - (char *)v282);
            if ( v285 < (unsigned __int64)v99 + v93 )
            {
              v311 = v94;
              v93 += v98;
              v100 = (char *)memmove(v95, v99, (char *)v282 - (char *)v97);
              v94 = v311;
              v101 = v100;
              v97 = v282;
              v95 = &v101[-v98];
              goto LABEL_85;
            }
            memmove(v95, v99, v93);
          }
        }
LABEL_89:
        if ( v49 > 0xFFFFFFFFFFFFFF88LL )
          return v49;
        v106 = (unsigned __int64)v282;
        if ( v81 > v292 + v297 )
          v106 = v285;
        v107 = v292 + v297 - v81;
        v51 = (__m128i *)((char *)v51 + v49);
        _mm_prefetch((const char *)(v107 + v106), 1);
        _mm_prefetch((const char *)(v107 + v106 + 64), 1);
        v297 += v287 + v292;
        v108 = &v345[3 * v89];
        *v108 = v292;
        v108[1] = v287;
        v108[2] = v81;
        goto LABEL_93;
      }
      v116 = 3 * v89;
      v117 = v345[3 * v89];
      v118 = *(_QWORD *)(a1 + 30360);
      v119 = *(_QWORD *)v318 + v117;
      if ( *(_QWORD *)v318 + v117 <= v118 )
      {
        v143 = (__int8 *)(*(_QWORD *)v318 + v117 - 32);
        v144 = _mm_loadu_si128((const __m128i *)&v345[v116]);
        v145 = &v345[v116];
        v146 = v145[1];
        v147 = v145[2];
        v324 = v346[3 * v89];
        v148 = (__m128i *)((char *)v51 + v117);
        *(__m128i *)n = v144;
        v49 = v117 + v146;
        v149 = (__m128i *)((char *)v51 + v117 - v147);
        if ( v143 < &v51->m128i_i8[v117 + v146] || v119 > v302 )
        {
          n[0] = v117;
          n[1] = v146;
          v324 = v147;
          v49 = sub_977650(v51, v303, v143, (const __m128i **)v318, v302, v282, v117, v146, v147, v315, v285);
          goto LABEL_89;
        }
        *v51 = _mm_loadu_si128(*(const __m128i **)v318);
        if ( v117 > 0x10 )
        {
          v51[1] = _mm_loadu_si128(v88 + 1);
          if ( (__int64)(v117 - 16) > 16 )
          {
            v167 = v51 + 2;
            v168 = v88 + 2;
            do
            {
              v169 = _mm_loadu_si128(v168);
              v167 += 2;
              v168 += 2;
              v167[-2] = v169;
              v167[-1] = _mm_loadu_si128(v168 - 1);
            }
            while ( v148 > v167 );
          }
        }
        *(_QWORD *)v318 = v119;
        if ( v147 > (char *)v148 - (char *)v282 )
        {
          if ( v147 > (unsigned __int64)v148 - v315 )
            return -20;
          v150 = (const void *)(v285 + (char *)v149 - (char *)v282);
          if ( v285 >= (unsigned __int64)v150 + v146 )
          {
            memmove(v148, v150, v146);
            goto LABEL_89;
          }
          v313 = (char *)v149 - (char *)v282;
          v307 = (char *)v282 - (char *)v149;
          v151 = (char *)memmove(v148, v150, (char *)v282 - (char *)v149);
          v149 = v282;
          v148 = (__m128i *)&v151[v307];
          v146 += v313;
        }
        if ( v147 <= 0xF )
        {
          if ( v147 > 7 )
          {
            v148->m128i_i64[0] = v149->m128i_i64[0];
          }
          else
          {
            v148->m128i_i8[0] = v149->m128i_i8[0];
            v148->m128i_i8[1] = v149->m128i_i8[1];
            v148->m128i_i8[2] = v149->m128i_i8[2];
            v148->m128i_i8[3] = v149->m128i_i8[3];
            v223 = (__int32 *)((char *)v149->m128i_i32 + dword_23D8D00[v147]);
            v148->m128i_i32[1] = *v223;
            v149 = (const __m128i *)((char *)v223 - dword_23D8D20[v147]);
          }
          if ( (unsigned __int64)v146 > 8 )
          {
            v224 = &v148->m128i_i8[8];
            v225 = &v149->m128i_i64[1];
            v226 = &v148->m128i_i8[v146];
            if ( (char *)v148 - (char *)v149 > 15 )
            {
              *(__m128i *)((char *)v148 + 8) = _mm_loadu_si128((const __m128i *)&v149->m128i_u64[1]);
              if ( v146 - 8 > 16 )
              {
                v256 = (__m128i *)((char *)v148 + 24);
                v257 = (const __m128i *)((char *)v149 + 24);
                do
                {
                  v258 = _mm_loadu_si128(v257);
                  v256 += 2;
                  v257 += 2;
                  v256[-2] = v258;
                  v256[-1] = _mm_loadu_si128(v257 - 1);
                }
                while ( v226 > (char *)v256 );
              }
            }
            else
            {
              do
              {
                v227 = *v225;
                v224 += 8;
                ++v225;
                *((_QWORD *)v224 - 1) = v227;
              }
              while ( v226 > v224 );
            }
          }
        }
        else
        {
          *v148 = _mm_loadu_si128(v149);
          if ( v146 > 16 )
          {
            v152 = &v148->m128i_i8[v146];
            v153 = v149 + 1;
            v154 = v148 + 1;
            do
            {
              v155 = _mm_loadu_si128(v153);
              v154 += 2;
              v153 += 2;
              v154[-2] = v155;
              v154[-1] = _mm_loadu_si128(v153 - 1);
            }
            while ( v152 > (char *)v154 );
          }
        }
        goto LABEL_89;
      }
      v120 = v118 - *(_QWORD *)v318;
      if ( v120 )
      {
        if ( v120 > v303 - (unsigned __int64)v51 )
          return -70;
        sub_977590(v51, *(const __m128i **)v318, v120);
        v51 = (__m128i *)((char *)v51 + v122);
        *(_QWORD *)(v123 - 208) = v121 - v122;
      }
      v124 = 3 * v89;
      v125 = v346[v124];
      v126 = _mm_loadu_si128((const __m128i *)&v345[v124]);
      v127 = &v345[v124];
      *(_QWORD *)v318 = a1 + 30372;
      v128 = v127[1];
      v129 = v127[2];
      v320 = v125;
      v130 = *v127;
      v302 = a1 + 95908;
      *(_DWORD *)(a1 + 30368) = 0;
      v131 = (__m128i *)((char *)v51 + v130);
      v49 = v130 + v128;
      *(__m128i *)v319 = v126;
      v132 = v130 + a1 + 30372;
      v133 = (__m128i *)((char *)v51 + v130 - v129);
      if ( v303 - 32 < (unsigned __int64)v51->m128i_u64 + v130 + v128 || a1 + 95908 < v132 )
      {
        v320 = v129;
        v319[1] = v128;
        v49 = sub_977760(
                (unsigned __int64)v51,
                v303,
                (const __m128i **)v318,
                v302,
                v282,
                v315,
                v319[0],
                v128,
                v129,
                v285);
      }
      else
      {
        *v51 = _mm_loadu_si128((const __m128i *)(a1 + 30372));
        if ( v130 > 0x10 )
        {
          v51[1] = _mm_loadu_si128((const __m128i *)(a1 + 30388));
          if ( (__int64)(v130 - 16) > 16 )
          {
            v228 = v51 + 2;
            v229 = (const __m128i *)(a1 + 30404);
            do
            {
              v230 = _mm_loadu_si128(v229);
              v228 += 2;
              v229 += 2;
              v228[-2] = v230;
              v228[-1] = _mm_loadu_si128(v229 - 1);
            }
            while ( v131 > v228 );
          }
        }
        *(_QWORD *)v318 = v132;
        if ( v129 <= (char *)v131 - (char *)v282 )
          goto LABEL_116;
        if ( v129 > (unsigned __int64)v131 - v315 )
          return -20;
        v134 = (char *)v133 - (char *)v282;
        v135 = (const void *)(v285 + v134);
        if ( v285 < v285 + v134 + v128 )
        {
          v312 = v129;
          v128 += v134;
          v306 = -v134;
          v136 = (char *)memmove(v131, v135, -v134);
          v133 = v282;
          v129 = v312;
          v131 = (__m128i *)&v136[v306];
LABEL_116:
          if ( v129 <= 0xF )
          {
            if ( v129 > 7 )
            {
              v131->m128i_i64[0] = v133->m128i_i64[0];
            }
            else
            {
              v131->m128i_i8[0] = v133->m128i_i8[0];
              v131->m128i_i8[1] = v133->m128i_i8[1];
              v131->m128i_i8[2] = v133->m128i_i8[2];
              v131->m128i_i8[3] = v133->m128i_i8[3];
              v231 = (__int32 *)((char *)v133->m128i_i32 + dword_23D8D00[v129]);
              v131->m128i_i32[1] = *v231;
              v133 = (const __m128i *)((char *)v231 - dword_23D8D20[v129]);
            }
            if ( (unsigned __int64)v128 > 8 )
            {
              v232 = &v131->m128i_i8[8];
              v233 = &v133->m128i_i64[1];
              v234 = &v131->m128i_i8[v128];
              if ( (char *)v131 - (char *)v133 > 15 )
              {
                *(__m128i *)((char *)v131 + 8) = _mm_loadu_si128((const __m128i *)&v133->m128i_u64[1]);
                if ( v128 - 8 > 16 )
                {
                  v267 = (__m128i *)((char *)v131 + 24);
                  v268 = (const __m128i *)((char *)v133 + 24);
                  do
                  {
                    v269 = _mm_loadu_si128(v268);
                    v267 += 2;
                    v268 += 2;
                    v267[-2] = v269;
                    v267[-1] = _mm_loadu_si128(v268 - 1);
                  }
                  while ( v234 > (char *)v267 );
                }
              }
              else
              {
                do
                {
                  v235 = *v233;
                  v232 += 8;
                  ++v233;
                  *((_QWORD *)v232 - 1) = v235;
                }
                while ( v234 > v232 );
              }
            }
          }
          else
          {
            *v131 = _mm_loadu_si128(v133);
            if ( v128 > 16 )
            {
              v137 = &v131->m128i_i8[v128];
              v138 = v133 + 1;
              v139 = v131 + 1;
              do
              {
                v140 = _mm_loadu_si128(v138);
                v139 += 2;
                v138 += 2;
                v139[-2] = v140;
                v139[-1] = _mm_loadu_si128(v138 - 1);
              }
              while ( v137 > (char *)v139 );
            }
          }
          goto LABEL_120;
        }
        memmove(v131, v135, v128);
      }
LABEL_120:
      if ( v49 > 0xFFFFFFFFFFFFFF88LL )
        return v49;
      v141 = (unsigned __int64)v282;
      if ( v292 + v297 < v81 )
        v141 = v285;
      v51 = (__m128i *)((char *)v51 + v49);
      v142 = v292 + v297 - v81;
      _mm_prefetch((const char *)(v142 + v141), 1);
      _mm_prefetch((const char *)(v142 + v141 + 64), 1);
      *v127 = v292;
      v127[2] = v81;
      v127[1] = v287;
      v297 += v287 + v292;
LABEL_93:
      if ( a6 == ++v280 )
      {
        v48 = a6;
        goto LABEL_40;
      }
      v59 = v337;
      v60 = v341;
      v61 = v339;
    }
    v78 = v331 << v332;
    LODWORD(v332) = v332 + v75;
    v79 = v78 >> -(char)v75;
    v344 = v343;
    v80 = v342;
    v81 = v70 + v79;
    v342 = v81;
    v343 = v80;
    goto LABEL_67;
  }
LABEL_40:
  if ( v333 == (unsigned __int64 *)v334 && (_DWORD)v332 == 64 )
  {
    v171 = v48 - v309;
    if ( a6 > v48 - v309 )
    {
      v172 = v282;
      v281 = v303 - 32;
      v173 = v302;
      while ( 1 )
      {
        v174 = *(const __m128i **)v318;
        v175 = v171 & 7;
        v176 = 3 * v175;
        v177 = &v345[3 * v175];
        if ( *(_DWORD *)(a1 + 30368) == 2 )
        {
          v194 = v345[3 * v175];
          v195 = *(_QWORD *)(a1 + 30360);
          v196 = &v346[v176 + 24];
          v197 = *(_QWORD *)v318 + v194;
          if ( *(_QWORD *)v318 + v194 <= v195 )
          {
            v179 = v177[1];
            v183 = (__m128i *)((char *)v51 + v194);
            v213 = v177[2];
            v214 = (__int8 *)(*(_QWORD *)v318 + v194 - 32);
            v215 = _mm_loadu_si128((const __m128i *)&v345[v176]);
            v184 = v194 + v179;
            v330 = v346[v176];
            *(__m128i *)v329 = v215;
            v216 = (__m128i *)((char *)v51 + v194 - v213);
            if ( v214 < &v51->m128i_i8[v194 + v179] || v197 > v173 )
            {
              v329[1] = v179;
              v330 = v213;
              v184 = sub_977650(v51, v303, v214, (const __m128i **)v318, v173, v172, v329[0], v179, v213, v315, v285);
            }
            else
            {
              *v51 = _mm_loadu_si128(*(const __m128i **)v318);
              if ( v194 > 0x10 )
              {
                v51[1] = _mm_loadu_si128(v174 + 1);
                if ( (__int64)(v194 - 16) > 16 )
                {
                  v248 = v51 + 2;
                  v249 = v174 + 2;
                  do
                  {
                    v250 = _mm_loadu_si128(v249);
                    v248 += 2;
                    v249 += 2;
                    v248[-2] = v250;
                    v248[-1] = _mm_loadu_si128(v249 - 1);
                  }
                  while ( v183 > v248 );
                }
              }
              *(_QWORD *)v318 = v197;
              if ( v213 > (char *)v183 - (char *)v172 )
              {
                if ( v213 > (unsigned __int64)v183 - v315 )
                  return -20;
                v217 = (char *)v216 - (char *)v172;
                v188 = (const void *)(v285 + (char *)v216 - (char *)v172);
                if ( v285 >= (unsigned __int64)v188 + v179 )
                {
LABEL_220:
                  *(_QWORD *)v283 = v184;
                  memmove(v183, v188, v179);
                  v184 = *(_QWORD *)v283;
                  goto LABEL_188;
                }
                v300 = v194 + v179;
                v295 = v213;
                v290 = v179;
                v218 = (char *)memmove(v183, v188, (char *)v172 - (char *)v216);
                v184 = v300;
                v213 = v295;
                v216 = v172;
                v183 = (__m128i *)&v218[-v217];
                v179 = v217 + v290;
              }
              if ( v213 <= 0xF )
              {
                if ( v213 > 7 )
                {
                  v183->m128i_i64[0] = v216->m128i_i64[0];
                }
                else
                {
                  v183->m128i_i8[0] = v216->m128i_i8[0];
                  v183->m128i_i8[1] = v216->m128i_i8[1];
                  v183->m128i_i8[2] = v216->m128i_i8[2];
                  v183->m128i_i8[3] = v216->m128i_i8[3];
                  v251 = (__int32 *)((char *)v216->m128i_i32 + dword_23D8D00[v213]);
                  v183->m128i_i32[1] = *v251;
                  v216 = (const __m128i *)((char *)v251 - dword_23D8D20[v213]);
                }
                if ( (unsigned __int64)v179 > 8 )
                {
                  v252 = &v183->m128i_i8[8];
                  v253 = &v216->m128i_i64[1];
                  v254 = &v183->m128i_i8[v179];
                  if ( (char *)v183 - (char *)v216 > 15 )
                  {
                    *(__m128i *)((char *)v183 + 8) = _mm_loadu_si128((const __m128i *)&v216->m128i_u64[1]);
                    if ( v179 - 8 > 16 )
                    {
                      v273 = (__m128i *)((char *)v183 + 24);
                      v274 = (const __m128i *)((char *)v216 + 24);
                      do
                      {
                        v275 = _mm_loadu_si128(v274);
                        v273 += 2;
                        v274 += 2;
                        v273[-2] = v275;
                        v273[-1] = _mm_loadu_si128(v274 - 1);
                      }
                      while ( v254 > (char *)v273 );
                    }
                  }
                  else
                  {
                    do
                    {
                      v255 = *v253;
                      v252 += 8;
                      ++v253;
                      *((_QWORD *)v252 - 1) = v255;
                    }
                    while ( v254 > v252 );
                  }
                }
              }
              else
              {
                *v183 = _mm_loadu_si128(v216);
                if ( v179 > 16 )
                {
                  v219 = &v183->m128i_i8[v179];
                  v220 = v216 + 1;
                  v221 = v183 + 1;
                  do
                  {
                    v222 = _mm_loadu_si128(v220);
                    v221 += 2;
                    v220 += 2;
                    v221[-2] = v222;
                    v221[-1] = _mm_loadu_si128(v220 - 1);
                  }
                  while ( v219 > (char *)v221 );
                }
              }
            }
          }
          else
          {
            v198 = v195 - *(_QWORD *)v318;
            if ( v195 != *(_QWORD *)v318 )
            {
              if ( v198 > v303 - (unsigned __int64)v51 )
                return -70;
              v199 = v51;
              v51 = (__m128i *)((char *)v51 + v198);
              sub_977590(v199, *(const __m128i **)v318, v198);
              *(v196 - 26) = v200 - v198;
            }
            v201 = 3 * v175;
            v179 = v177[1];
            *(_DWORD *)(a1 + 30368) = 0;
            v201 *= 8;
            *(_QWORD *)v318 = a1 + 30372;
            v173 = a1 + 95908;
            v202 = _mm_loadu_si128((const __m128i *)((char *)v345 + v201));
            v326 = *(_QWORD *)((char *)v346 + v201);
            v203 = *v177;
            v204 = v177[2];
            v325 = v202;
            v183 = (__m128i *)((char *)v51 + v203);
            v184 = v203 + v179;
            v205 = v203 + a1 + 30372;
            v206 = (__m128i *)((char *)v51 + v203 - v204);
            if ( v281 < (unsigned __int64)v51->m128i_u64 + v203 + v179 || v173 < v205 )
            {
              v325.m128i_i64[1] = v179;
              v326 = v204;
              v236 = sub_977760(
                       (unsigned __int64)v51,
                       v303,
                       (const __m128i **)v318,
                       v173,
                       v172,
                       v315,
                       v325.m128i_u64[0],
                       v179,
                       v204,
                       v285);
              goto LABEL_244;
            }
            *v51 = _mm_loadu_si128((const __m128i *)(a1 + 30372));
            if ( v203 > 0x10 )
            {
              v51[1] = _mm_loadu_si128((const __m128i *)(a1 + 30388));
              if ( (__int64)(v203 - 16) > 16 )
              {
                v259 = v51 + 2;
                v260 = (const __m128i *)(a1 + 30404);
                do
                {
                  v261 = _mm_loadu_si128(v260);
                  v259 += 2;
                  v260 += 2;
                  v259[-2] = v261;
                  v259[-1] = _mm_loadu_si128(v260 - 1);
                }
                while ( v183 > v259 );
              }
            }
            *(_QWORD *)v318 = v205;
            if ( v204 > (char *)v183 - (char *)v172 )
            {
              if ( v204 > (unsigned __int64)v183 - v315 )
                return -20;
              v207 = (char *)v206 - (char *)v172;
              v188 = (const void *)(v285 + v207);
              if ( v285 >= v285 + v207 + v179 )
                goto LABEL_220;
              v299 = v184;
              v294 = v204;
              v289 = v179;
              v208 = (char *)memmove(v183, v188, -v207);
              v184 = v299;
              v204 = v294;
              v179 = v207 + v289;
              v183 = (__m128i *)&v208[-v207];
              v206 = v172;
            }
            if ( v204 <= 0xF )
            {
              if ( v204 > 7 )
              {
                v183->m128i_i64[0] = v206->m128i_i64[0];
              }
              else
              {
                v183->m128i_i8[0] = v206->m128i_i8[0];
                v183->m128i_i8[1] = v206->m128i_i8[1];
                v183->m128i_i8[2] = v206->m128i_i8[2];
                v183->m128i_i8[3] = v206->m128i_i8[3];
                v262 = (__int32 *)((char *)v206->m128i_i32 + dword_23D8D00[v204]);
                v183->m128i_i32[1] = *v262;
                v206 = (const __m128i *)((char *)v262 - dword_23D8D20[v204]);
              }
              if ( (unsigned __int64)v179 > 8 )
              {
                v263 = &v183->m128i_i8[8];
                v264 = &v206->m128i_i64[1];
                v265 = &v183->m128i_i8[v179];
                if ( (char *)v183 - (char *)v206 > 15 )
                {
                  *(__m128i *)((char *)v183 + 8) = _mm_loadu_si128((const __m128i *)&v206->m128i_u64[1]);
                  if ( v179 - 8 > 16 )
                  {
                    v276 = (__m128i *)((char *)v183 + 24);
                    v277 = (const __m128i *)((char *)v206 + 24);
                    do
                    {
                      v278 = _mm_loadu_si128(v277);
                      v276 += 2;
                      v277 += 2;
                      v276[-2] = v278;
                      v276[-1] = _mm_loadu_si128(v277 - 1);
                    }
                    while ( v265 > (char *)v276 );
                  }
                }
                else
                {
                  do
                  {
                    v266 = *v264;
                    v263 += 8;
                    ++v264;
                    *((_QWORD *)v263 - 1) = v266;
                  }
                  while ( v265 > v263 );
                }
              }
            }
            else
            {
              *v183 = _mm_loadu_si128(v206);
              if ( v179 > 16 )
              {
                v209 = &v183->m128i_i8[v179];
                v210 = v206 + 1;
                v211 = v183 + 1;
                do
                {
                  v212 = _mm_loadu_si128(v210);
                  v211 += 2;
                  v210 += 2;
                  v211[-2] = v212;
                  v211[-1] = _mm_loadu_si128(v210 - 1);
                }
                while ( v209 > (char *)v211 );
              }
            }
          }
        }
        else
        {
          v178 = _mm_loadu_si128((const __m128i *)&v345[v176]);
          v179 = v177[1];
          v180 = v346[v176];
          *(__m128i *)v327 = v178;
          v328 = v180;
          v181 = *v177;
          v182 = v177[2];
          v183 = (__m128i *)((char *)v51 + v181);
          v184 = v181 + v179;
          v185 = *(_QWORD *)v318 + v181;
          v186 = (__m128i *)((char *)v51 + v181 - v182);
          if ( v281 < (unsigned __int64)v51->m128i_u64 + v181 + v179 || v185 > v173 )
          {
            v327[1] = v179;
            v328 = v182;
            v236 = sub_977760(
                     (unsigned __int64)v51,
                     v303,
                     (const __m128i **)v318,
                     v173,
                     v172,
                     v315,
                     v327[0],
                     v179,
                     v182,
                     v285);
LABEL_244:
            v184 = v236;
            goto LABEL_188;
          }
          *v51 = _mm_loadu_si128(*(const __m128i **)v318);
          if ( v181 > 0x10 )
          {
            v51[1] = _mm_loadu_si128(v174 + 1);
            if ( (__int64)(v181 - 16) > 16 )
            {
              v237 = v51 + 2;
              v238 = v174 + 2;
              do
              {
                v239 = _mm_loadu_si128(v238);
                v237 += 2;
                v238 += 2;
                v237[-2] = v239;
                v237[-1] = _mm_loadu_si128(v238 - 1);
              }
              while ( v183 > v237 );
            }
          }
          *(_QWORD *)v318 = v185;
          if ( v182 > (char *)v183 - (char *)v172 )
          {
            if ( v182 > (unsigned __int64)v183 - v315 )
              return -20;
            v187 = (char *)v186 - (char *)v172;
            v188 = (const void *)(v285 + v187);
            if ( v285 >= v285 + v187 + v179 )
              goto LABEL_220;
            v298 = v184;
            v293 = v182;
            v288 = v179;
            v189 = (char *)memmove(v183, v188, -v187);
            v184 = v298;
            v182 = v293;
            v179 = v187 + v288;
            v183 = (__m128i *)&v189[-v187];
            v186 = v172;
          }
          if ( v182 <= 0xF )
          {
            if ( v182 > 7 )
            {
              v183->m128i_i64[0] = v186->m128i_i64[0];
            }
            else
            {
              v183->m128i_i8[0] = v186->m128i_i8[0];
              v183->m128i_i8[1] = v186->m128i_i8[1];
              v183->m128i_i8[2] = v186->m128i_i8[2];
              v183->m128i_i8[3] = v186->m128i_i8[3];
              v240 = (__int32 *)((char *)v186->m128i_i32 + dword_23D8D00[v182]);
              v183->m128i_i32[1] = *v240;
              v186 = (const __m128i *)((char *)v240 - dword_23D8D20[v182]);
            }
            if ( (unsigned __int64)v179 > 8 )
            {
              v241 = &v183->m128i_i8[8];
              v242 = &v186->m128i_i64[1];
              v243 = &v183->m128i_i8[v179];
              if ( (char *)v183 - (char *)v186 > 15 )
              {
                *(__m128i *)((char *)v183 + 8) = _mm_loadu_si128((const __m128i *)&v186->m128i_u64[1]);
                if ( v179 - 8 > 16 )
                {
                  v270 = (__m128i *)((char *)v183 + 24);
                  v271 = (const __m128i *)((char *)v186 + 24);
                  do
                  {
                    v272 = _mm_loadu_si128(v271);
                    v270 += 2;
                    v271 += 2;
                    v270[-2] = v272;
                    v270[-1] = _mm_loadu_si128(v271 - 1);
                  }
                  while ( v243 > (char *)v270 );
                }
              }
              else
              {
                do
                {
                  v244 = *v242;
                  v241 += 8;
                  ++v242;
                  *((_QWORD *)v241 - 1) = v244;
                }
                while ( v243 > v241 );
              }
            }
          }
          else
          {
            *v183 = _mm_loadu_si128(v186);
            if ( v179 > 16 )
            {
              v190 = &v183->m128i_i8[v179];
              v191 = v186 + 1;
              v192 = v183 + 1;
              do
              {
                v193 = _mm_loadu_si128(v191);
                v192 += 2;
                v191 += 2;
                v192[-2] = v193;
                v192[-1] = _mm_loadu_si128(v191 - 1);
              }
              while ( v190 > (char *)v192 );
            }
          }
        }
LABEL_188:
        if ( v184 > 0xFFFFFFFFFFFFFF88LL )
          return v184;
        v51 = (__m128i *)((char *)v51 + v184);
        if ( a6 == ++v171 )
        {
          v302 = v173;
          break;
        }
      }
    }
    v8 = *(const __m128i **)v318;
    *(_DWORD *)(a1 + 26684) = v342;
    *(_DWORD *)(a1 + 26688) = v343;
    *(_DWORD *)(a1 + 26692) = v344;
    v6 = *(_DWORD *)(a1 + 30368);
LABEL_44:
    v52 = v302 - (_QWORD)v8;
    v53 = v303 - (_QWORD)v51;
    if ( v6 == 2 )
    {
      if ( v52 <= v53 )
      {
        if ( v51 )
        {
          v55 = v51;
          v51 = (__m128i *)((char *)v51 + v52);
          v52 = (size_t)&stru_10000;
          memmove(v55, v8, v302 - (_QWORD)v8);
          *(_QWORD *)v318 = a1 + 30372;
          v8 = (const __m128i *)(a1 + 30372);
          v53 = v303 - (_QWORD)v51;
          goto LABEL_45;
        }
        if ( v303 >= (unsigned __int64)&stru_10000 )
          return -a2;
      }
    }
    else
    {
LABEL_45:
      if ( v52 <= v53 )
      {
        if ( v51 )
        {
          memmove(v51, v8, v52);
          return (__int64)v51 + v52 - a2;
        }
        return -a2;
      }
    }
    return -70;
  }
  return -20;
}
