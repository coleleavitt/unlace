__int64 __fastcall sub_1B4AFC0(
        unsigned int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        __m128 a8,
        __int128 a9,
        unsigned int *a10,
        __int64 a11,
        _DWORD *a12,
        __int64 a13,
        _DWORD *a14)
{
  unsigned __int64 v14; // r15
  char v17; // al
  char v18; // bl
  __int16 v19; // ax
  unsigned int v20; // eax
  __m128 v21; // xmm0
  __int64 (__fastcall ***v22)(); // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // ecx
  int *v35; // rsi
  int v36; // ecx
  unsigned int v37; // edx
  int *v38; // rax
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 *v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v43; // r12
  __int16 v44; // ax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r14
  unsigned int v49; // eax
  int v50; // eax
  int v51; // edx
  char v52; // al
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r12
  __int16 v55; // ax
  char v56; // al
  unsigned int v57; // r14d
  __int64 *v58; // rbp
  unsigned int v59; // eax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // eax
  unsigned __int64 v68; // rdi
  __int64 v69; // rbx
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 *v74; // r14
  __int64 v75; // r12
  unsigned __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rax
  char v79; // r8
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r9
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // r13
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdi
  __int64 v93; // r12
  __int64 v94; // r14
  const char *v95; // rax
  size_t v96; // rdx
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // r12
  __m128 v100; // xmm1
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r14
  unsigned __int8 v105; // al
  unsigned __int8 v106; // r13
  __int64 v107; // rdx
  _QWORD *v108; // r15
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r13
  unsigned __int64 v112; // rax
  _QWORD *v113; // rax
  size_t v114; // rax
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rax
  char v117; // al
  bool v118; // al
  unsigned int v119; // eax
  __m128 v120; // xmm0
  int v121; // eax
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 *v125; // rdi
  unsigned __int64 v126; // rax
  bool v127; // zf
  __int64 v128; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // r12
  __int64 v131; // rdx
  unsigned __int64 v132; // rdx
  __int64 v133; // r12
  __int64 v134; // r13
  __int64 v135; // rdi
  unsigned __int64 v136; // r14
  __int64 v137; // r8
  __int64 v138; // r9
  _DWORD *v139; // r12
  unsigned __int64 v140; // r13
  _DWORD *v141; // r14
  int v142; // eax
  int v143; // eax
  unsigned int v144; // r15d
  _QWORD *v145; // rbx
  __int64 v146; // rbp
  __int64 v147; // rax
  unsigned __int64 v148; // rax
  unsigned int v149; // esi
  __int64 v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rdx
  __int64 *v153; // rbx
  unsigned int v154; // eax
  __int64 *v155; // rsi
  _BYTE *v156; // rdi
  __int32 v157; // r14d
  unsigned __int64 v158; // rax
  unsigned __int8 v159; // di
  __int64 v160; // rax
  _QWORD *v161; // rcx
  int v162; // eax
  int v163; // eax
  _QWORD *v164; // rdx
  __int64 v165; // rax
  unsigned int v166; // edx
  __int64 v167; // rbp
  __int64 v168; // rbp
  size_t v169; // rax
  unsigned __int64 v170; // r14
  size_t v171; // rax
  unsigned __int64 v172; // rax
  size_t v173; // rax
  size_t v174; // rax
  __int64 v175; // rax
  _QWORD *v176; // rax
  __int64 v177; // rax
  _BOOL4 v178; // edx
  _DWORD *v179; // rsi
  __int64 v180; // rax
  unsigned __int64 v181; // rsi
  __int64 v182; // rax
  __int64 v183; // rax
  int v184; // eax
  __int64 v185; // rax
  __int64 *v186; // rcx
  unsigned __int8 v187; // al
  __int64 v188; // r14
  int v189; // esi
  __int64 v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rsi
  char *v194; // r12
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // r12
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rax
  _QWORD *v203; // r9
  int v204; // r11d
  __int64 v205; // rax
  int v206; // ebx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // r12
  __int64 v210; // rbx
  int v211; // eax
  int v212; // edi
  _QWORD *v213; // r8
  __int32 v214; // r14d
  __int64 v215; // rax
  int v216; // eax
  int v217; // ebx
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // r12
  __int64 v221; // rbx
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // r14
  __int64 v227; // rax
  _QWORD *v228; // rax
  _QWORD *v229; // rbx
  __int64 v230; // rax
  _QWORD *v231; // r9
  _QWORD *v232; // r11
  unsigned int v233; // edx
  unsigned __int64 v234; // rcx
  __int64 v235; // rax
  unsigned int v236; // eax
  unsigned __int64 v237; // rdx
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // r14
  __int64 v244; // rax
  _QWORD *v245; // rax
  unsigned __int64 v246; // rdi
  int v247; // eax
  __int64 v248; // rdx
  __int64 v249; // rdx
  int v250; // ecx
  unsigned int v251; // ecx
  unsigned __int64 v252; // rax
  unsigned __int64 v253; // rcx
  __int64 v254; // r9
  unsigned __int64 v255; // r10
  __int64 v256; // r11
  __int64 v257; // rdx
  unsigned __int64 v258; // r11
  _QWORD *v259; // rdi
  __int64 v260; // rax
  __int64 v261; // rdx
  _QWORD *v262; // rdi
  __int64 v263; // rax
  __int64 *v264; // r15
  unsigned __int64 v265; // rax
  unsigned __int64 v266; // rax
  __int64 *v267; // r9
  unsigned __int64 v268; // rsi
  __int64 v269; // rax
  __int64 v270; // r9
  __int64 v271; // rcx
  __int64 v272; // r8
  unsigned __int64 v273; // rax
  unsigned __int64 v274; // xmm0_8
  unsigned __int64 v275; // rax
  __int64 v276; // rcx
  __int64 *v277; // r15
  unsigned __int64 v278; // rax
  __int64 *v279; // [rsp-10h] [rbp-228h]
  __m128i v281; // [rsp+20h] [rbp-1F8h] BYREF
  _DWORD *v282; // [rsp+30h] [rbp-1E8h]
  __m128 *v283; // [rsp+38h] [rbp-1E0h]
  signed __int64 v284; // [rsp+40h] [rbp-1D8h]
  __int64 *v285; // [rsp+48h] [rbp-1D0h]
  _QWORD *v286; // [rsp+50h] [rbp-1C8h]
  _DWORD *v287; // [rsp+58h] [rbp-1C0h]
  unsigned __int64 v288; // [rsp+60h] [rbp-1B8h]
  unsigned int v289; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned int v290[3]; // [rsp+6Ch] [rbp-1ACh] BYREF
  int v291; // [rsp+78h] [rbp-1A0h] BYREF
  int v292; // [rsp+7Ch] [rbp-19Ch] BYREF
  __m128i v293; // [rsp+80h] [rbp-198h] BYREF
  __m128i v294; // [rsp+90h] [rbp-188h] BYREF
  _DWORD *v295; // [rsp+A0h] [rbp-178h]
  __int64 *v296; // [rsp+A8h] [rbp-170h]
  __int64 v297; // [rsp+B0h] [rbp-168h]
  __m128 v298; // [rsp+C0h] [rbp-158h] BYREF
  unsigned __int64 v299; // [rsp+D0h] [rbp-148h]
  unsigned __int64 v300; // [rsp+D8h] [rbp-140h]
  __int64 *v301; // [rsp+150h] [rbp-C8h] BYREF
  char v302; // [rsp+158h] [rbp-C0h]
  __int64 v303; // [rsp+160h] [rbp-B8h]
  unsigned int v304; // [rsp+168h] [rbp-B0h]
  unsigned int v305; // [rsp+16Ch] [rbp-ACh]
  _DWORD *v306; // [rsp+170h] [rbp-A8h]
  __m128i v307; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v308; // [rsp+188h] [rbp-90h]
  __int128 v309; // [rsp+190h] [rbp-88h] BYREF
  __int128 v310; // [rsp+1A0h] [rbp-78h]
  _QWORD *v311; // [rsp+1B0h] [rbp-68h]
  char v312; // [rsp+1B8h] [rbp-60h]
  char v313; // [rsp+1B9h] [rbp-5Fh]
  __int16 v314; // [rsp+1BAh] [rbp-5Eh]
  __int64 v315; // [rsp+1C0h] [rbp-58h]
  int v316; // [rsp+1C8h] [rbp-50h]
  unsigned __int8 v317; // [rsp+1CCh] [rbp-4Ch]
  int v318; // [rsp+1D0h] [rbp-48h]
  unsigned __int8 v319; // [rsp+1D4h] [rbp-44h]
  unsigned __int64 v320; // [rsp+1D8h] [rbp-40h]

  v14 = a2;
  v290[0] = a5;
  v289 = a6;
  v282 = a12;
  v17 = sub_FFF0D0(a1);
  if ( !a2 )
    goto LABEL_41;
  v18 = v17;
  v19 = *(_WORD *)a2 & 0x1FF;
  if ( v19 != 237 )
    goto LABEL_5;
  v14 = *(_QWORD *)(a2 + 8);
  if ( !v14 )
  {
LABEL_41:
    v14 = 0;
    v57 = *(_DWORD *)(a3[29] + 64);
    goto LABEL_42;
  }
  v19 = *(_WORD *)v14 & 0x1FF;
LABEL_5:
  if ( v19 == 243 )
  {
    v281.m128i_i64[0] = 0;
    v20 = *(_DWORD *)(v14 + 4);
    goto LABEL_7;
  }
  v57 = *(_DWORD *)(a3[29] + 64);
  if ( v19 != 252 || v57 <= 0x2D )
  {
LABEL_42:
    v58 = a3 + 1;
    v59 = sub_EEB7E0(v14, a2, a7);
    sub_168B9F0((__int64)&v301, v58, v59, 0x11D1u, 0);
    v294.m128i_i8[0] = a9 != 0;
    v25 = sub_1588420((__int64)&v301, (unsigned __int8 *)&v294);
    v298.m128_u64[0] = sub_20EAB70(a1, v57);
    v298.m128_u64[1] = v60;
    v283 = &v298;
    v61 = sub_166BAF0(v25, (__int64)&v298);
    v62 = sub_1588370(v61, &v289);
    v293.m128i_i8[0] = v290[0] != 0;
    v63 = sub_1588420(v62, (unsigned __int8 *)&v293);
    sub_1588370(v63, v290);
    sub_15F7200(&v301);
    if ( v289 > 1 )
    {
      LOBYTE(v25) = *((_QWORD *)&a9 + 1) != 0 && (_QWORD)a9 != 0;
      if ( (_BYTE)v25 )
      {
        v165 = sub_1AE5FF0(a4);
        v166 = 0;
        if ( v165 )
          v166 = *(_DWORD *)(v165 + 1024);
        sub_168B9F0((__int64)&v301, v58, v166, 0x1812u, 0);
        v293.m128i_i32[0] = 2;
        v167 = sub_1587D10((__int64)&v301, v293.m128i_i32);
        v298.m128_u64[0] = sub_EEC8C0(a9, (__int64)&v293, a7);
        v168 = sub_1587DB0(v167, (__int64 *)v283);
        v294.m128i_i64[0] = sub_EEC8C0(*((unsigned __int64 *)&a9 + 1), (__int64)v283, a7);
        sub_1587DB0(v168, v294.m128i_i64);
        sub_15F7200(&v301);
        return (unsigned int)v25;
      }
      if ( (_QWORD)a9 )
      {
        v67 = sub_C00A40(a9, (__int64)v290, v64, v65, v66);
        sub_168B9F0((__int64)&v301, v58, v67, 0x1812u, 0);
        v294.m128i_i32[0] = 0;
        v68 = a9;
        v69 = sub_1587D10((__int64)&v301, v294.m128i_i32);
      }
      else
      {
        if ( !*((_QWORD *)&a9 + 1) )
          goto LABEL_47;
        v236 = sub_C00A40(*((unsigned __int64 *)&a9 + 1), (__int64)v290, v64, v65, v66);
        sub_168B9F0((__int64)&v301, v58, v236, 0x1812u, 0);
        v294.m128i_i32[0] = 1;
        v68 = *((_QWORD *)&a9 + 1);
        v69 = sub_1587D10((__int64)&v301, v294.m128i_i32);
      }
      v298.m128_u64[0] = sub_EEC8C0(v68, (__int64)&v294, a7);
      sub_1587DB0(v69, (__int64 *)v283);
      sub_15F7200(&v301);
    }
LABEL_47:
    LODWORD(v25) = 1;
    return (unsigned int)v25;
  }
  if ( (unsigned __int8)sub_B8E180(a3[68]) )
  {
LABEL_93:
    LODWORD(v25) = 0;
    return (unsigned int)v25;
  }
  v20 = *(_DWORD *)(v14 + 72);
  v281.m128i_i64[0] = v14;
  v14 = 0;
LABEL_7:
  v304 = v20;
  v305 = v20;
  v307 = 0;
  v21 = 0;
  v301 = a3;
  v302 = v18 ^ 1;
  v303 = a4;
  v306 = a14;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = nullptr;
  v313 = 0;
  v314 = 0;
  v315 = 0;
  v317 = 0;
  v319 = 0;
  v320 = 0;
  if ( v14 )
    v22 = *(__int64 (__fastcall ****)())(v14 + 8);
  else
    v22 = *(__int64 (__fastcall ****)())(v281.m128i_i64[0] + 24);
  LODWORD(v25) = sub_1B27EB0((__int64 *)&v301, v22, 1u, 0.0);
  if ( (_BYTE)v25 )
    goto LABEL_47;
  if ( !(_QWORD)v309 )
  {
    v56 = sub_1AE7CC0(&v301);
    goto LABEL_50;
  }
  v26 = *(_QWORD *)(v309 + 48);
  v284 = v309;
  v298.m128_u64[0] = v26;
  v283 = &v298;
  v27 = sub_C1BEF0((__int64)&v298, (__int64)v22, v23, v24);
  v31 = (_QWORD *)v284;
  v32 = v27 & 0xFFFFFFFFFFFFFFF0LL;
  v33 = *(_QWORD *)v32;
  if ( (*(_BYTE *)(*(_QWORD *)v32 + 17LL) & 4) == 0 )
  {
    v285 = (__int64 *)v32;
    v117 = sub_9EC890(v33, (__int64)v22, v28, v29, v30);
    v31 = (_QWORD *)v284;
    if ( !v117 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v285 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    {
      if ( (*(_BYTE *)(a3[29] + 1) & 8) == 0 || (v118 = sub_1741750(*v285), v31 = (_QWORD *)v284, !v118) )
      {
        v284 = (signed __int64)v31;
        v119 = sub_EEB7E0((unsigned __int64)v22, (__int64)v22, 0.0);
        sub_168B9F0((__int64)v283, a3 + 1, v119, 0x11C4u, 0);
        v294.m128i_i32[0] = (*(_BYTE *)(a3[29] + 1) & 8) != 0;
        sub_1588370((__int64)v283, (unsigned int *)&v294);
        LODWORD(v25) = 1;
        sub_15F7200(v283);
        v31 = (_QWORD *)v284;
      }
    }
  }
  if ( (*(_BYTE *)a10 & 1) != 0 )
  {
    v35 = (int *)(a10 + 2);
    v36 = 3;
  }
  else
  {
    v34 = a10[4];
    v35 = *((int **)a10 + 1);
    if ( !v34 )
      goto LABEL_17;
    v36 = v34 - 1;
  }
  v37 = v36 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
  v38 = &v35[4 * v37];
  v39 = *(_QWORD **)v38;
  if ( v31 == *(_QWORD **)v38 )
    goto LABEL_16;
  v211 = 1;
  if ( v39 != (_QWORD *)-4096LL )
  {
    while ( 1 )
    {
      v212 = v211 + 1;
      v37 = v36 & (v211 + v37);
      v38 = &v35[4 * v37];
      v213 = *(_QWORD **)v38;
      if ( v31 == *(_QWORD **)v38 )
        break;
      v211 = v212;
      if ( v213 == (_QWORD *)-4096LL )
        goto LABEL_17;
    }
LABEL_16:
    *(_QWORD *)v38 = -8192;
    v40 = *a10;
    ++a10[1];
    *a10 = (2 * (v40 >> 1) - 2) | v40 & 1;
  }
LABEL_17:
  v41 = v301;
  LOBYTE(v284) = *(_DWORD *)(v301[29] + 64) > 0x31u;
  if ( !v14 )
  {
    v42 = *(_QWORD *)(v281.m128i_i64[0] + 40);
    if ( v42 )
      goto LABEL_19;
LABEL_114:
    sub_168B9F0((__int64)v283, v301 + 1, v304, 0x11BFu, 0);
    v294.m128i_i32[0] = (unsigned __int8)v284;
    v124 = sub_1587D10((__int64)v283, v294.m128i_i32);
    v41 = (__int64 *)&v309;
    sub_15993D0(v124, (__int64 *)&v309);
    LODWORD(v25) = 1;
    sub_15F7200(v283);
    goto LABEL_25;
  }
  v42 = *(_QWORD *)(v14 + 24);
  if ( !v42 )
    goto LABEL_114;
LABEL_19:
  v320 = v42;
  v43 = sub_1AE6910(v42);
  if ( v306[3] != v306[4] )
  {
    v41 = (__int64 *)v43;
    v295 = v306;
    v294.m128i_i64[0] = (__int64)off_2C62DC8;
    v296 = nullptr;
    v297 = 0;
    v294.m128i_i32[2] = 16843008;
    if ( !(unsigned __int8)sub_BC97E0(v294.m128i_i64, v43) )
    {
      v217 = HIDWORD(v297);
      sub_168B9F0((__int64)v283, v301 + 1, v297, 0x11BBu, 0);
      v292 = v217;
      v218 = sub_180D980((__int64)v283, &v292);
      v41 = (__int64 *)&v291;
      v291 = 1;
      v219 = sub_1587D10(v218, &v291);
      v220 = (__int64)v296;
      v221 = v219;
      if ( *(_BYTE *)(v219 + 120) )
      {
        v41 = v296;
        sub_AE9DF0((unsigned __int8 **)(v219 + 32), (__int64)v296, 0xAu);
      }
      else if ( *(_BYTE *)(v219 + 132) )
      {
        v226 = sub_168B9E0((_QWORD *)v219);
        v227 = *(_QWORD *)(v221 + 16);
        if ( v227 )
          v227 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v227 + 32LL))(*(_QWORD *)(v221 + 16));
        v293.m128i_i64[0] = v227;
        v228 = sub_1587BC0(v226, v293.m128i_i64, v222, v223, v224, v225);
        v41 = (__int64 *)v220;
        sub_AE9DF0((unsigned __int8 **)(*v228 + 32LL * *(unsigned int *)(v221 + 128) + 8), v220, 0xAu);
      }
      goto LABEL_109;
    }
  }
  LODWORD(v285) = sub_EEB7E0(v43, (__int64)v41, 0.0);
  v293.m128i_i64[0] = (__int64)&v301;
  v293.m128i_i8[8] = v284;
  v44 = *(_WORD *)v43 & 0x1FF;
  if ( v44 == 101 )
  {
    sub_C93B20((__int64)&v294, v43);
    sub_C93B20((__int64)v283, v43);
    LODWORD(v286) = sub_C00A40(v300, v43, v45, v46, v47);
    sub_C93B20((__int64)v283, v43);
    v48 = (unsigned int)sub_EEC140(v299);
    v49 = sub_EEB7E0(v298.m128_u64[1], v43, 0.0);
    v41 = &v293.m128i_i64[1];
    LOWORD(v50) = sub_1B1AB80(
                    (const __m128i **)&v293,
                    &v293.m128i_i8[8],
                    v294.m128i_i32[0],
                    v294.m128i_u64[1],
                    v295,
                    (v48 << 32) | v49,
                    (__int32)v286);
    v51 = v50;
    v52 = BYTE1(v50);
  }
  else if ( ((v44 + 394) & 0x1FFu) <= 1 )
  {
    v214 = *(_DWORD *)(v43 + 4);
    v215 = sub_EEC8C0(v43, (__int64)v41, 0.0);
    LOWORD(v216) = sub_1B1AB80(
                     (const __m128i **)&v293,
                     &v293.m128i_i8[8],
                     (*(_WORD *)(v43 + 2) >> 3) & 0x3F,
                     *(_QWORD *)(v43 + 16),
                     *(_DWORD **)(v43 + 24),
                     v215,
                     v214);
    v41 = v279;
    v51 = v216;
    v52 = BYTE1(v216);
  }
  else
  {
    if ( v44 != 91 || *(_DWORD *)(v43 + 16) != 2 )
      goto LABEL_106;
    v157 = *(_DWORD *)(v43 + 20);
    v158 = sub_C94560(v43);
    v159 = *(_BYTE *)(v43 + 3);
    v288 = v158;
    v160 = 8 * (((*(_BYTE *)(v43 + 2) & 8) != 0) + 1LL);
    v161 = *(_QWORD **)(v43 + v160 + 32);
    v287 = *(_DWORD **)(v43 + v160 + 40);
    v286 = v161;
    v162 = sub_BFAB60((v159 >> 1) & 0x3F);
    v41 = &v293.m128i_i64[1];
    LOWORD(v163) = sub_1B1AB80(
                     (const __m128i **)&v293,
                     &v293.m128i_i8[8],
                     v162,
                     (unsigned __int64)v286,
                     v287,
                     v288,
                     v157);
    v51 = v163;
    v52 = BYTE1(v163);
  }
  if ( v52 )
  {
    LODWORD(v25) = v51 | v25;
    goto LABEL_25;
  }
LABEL_106:
  if ( !(unsigned __int8)sub_1AE7CC0(&v301) && !(unsigned __int8)sub_B8E180(v301[68]) )
  {
    sub_168B9F0((__int64)v283, v301 + 1, (unsigned int)v285, 0x11BFu, 0);
    v292 = (unsigned __int8)v284;
    v122 = sub_1587D10((__int64)v283, &v292);
    v294.m128i_i64[0] = sub_EEC8C0(v43, (__int64)&v292, 0.0);
    v123 = sub_1587DB0(v122, v294.m128i_i64);
    v41 = (__int64 *)&v309;
    sub_15993D0(v123, (__int64 *)&v309);
LABEL_109:
    LODWORD(v25) = 1;
    sub_15F7200(v283);
  }
LABEL_25:
  if ( !v14 )
  {
    v53 = *(_QWORD *)(v281.m128i_i64[0] + 48);
    if ( v53 )
      goto LABEL_27;
LABEL_116:
    v25 = (__int64)v283;
    sub_168B9F0((__int64)v283, v301 + 1, v304, 0x11C0u, 0);
    v125 = (__int64 *)v283;
    goto LABEL_154;
  }
  v53 = *(_QWORD *)(v14 + 32);
  if ( !v53 )
    goto LABEL_116;
LABEL_27:
  if ( (*(_WORD *)v53 & 0x1FF) == 0x3C && (*(_DWORD *)v53 & 0x80000) == 0 )
    v53 = *(_QWORD *)(v53 + 16);
  if ( v306[3] == v306[4]
    || (v41 = (__int64 *)v53,
        v295 = v306,
        v294.m128i_i64[0] = (__int64)off_2C62DC8,
        v296 = nullptr,
        v297 = 0,
        v294.m128i_i32[2] = 16843008,
        (unsigned __int8)sub_BC97E0(v294.m128i_i64, v53)) )
  {
    v308 = sub_EEC8C0(v53, (__int64)v41, 0.0);
    v54 = sub_BFB9F0(v53);
    v55 = *(_WORD *)v54 & 0x1FF;
    if ( v55 == 4 )
    {
      if ( *(_BYTE *)(v54 + 2) <= 0x1Fu )
      {
        v185 = sub_1AEE510(*(_QWORD *)(v54 + 16));
        if ( v185 == (_QWORD)v309 )
        {
          v186 = v301;
          v187 = *(_BYTE *)(v54 + 2) >> 3;
          v188 = 2LL * ((v187 & 0x1D) != 1) - 1;
          if ( v187 <= 1u )
          {
            v246 = *(_QWORD *)(v54 + 16);
            v283 = (__m128 *)v301;
            v247 = sub_EEB7E0(v246, (__int64)v41, 0.0);
            v186 = (__int64 *)v283;
            v189 = v247;
          }
          else
          {
            v189 = *(_DWORD *)(v54 + 4);
          }
          v190 = sub_18C1B30((__int64)v186, v189, v188);
          v178 = 0;
          v179 = (_DWORD *)(v190 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_167;
        }
      }
      goto LABEL_34;
    }
    if ( ((v55 + 394) & 0x1FFu) > 1 )
    {
      if ( v55 == 91 )
      {
        switch ( ((*(_BYTE *)(v54 + 3) >> 1) + 49) & 0x3F )
        {
          case 0:
            v180 = sub_1AEE510(*(_QWORD *)(v54 + 8 * (((*(_BYTE *)(v54 + 2) & 8) != 0) + 1LL) + 32));
            if ( v180 != (_QWORD)v309 )
              goto LABEL_34;
            v181 = *(_QWORD *)(v54 + 8 * (((*(_BYTE *)(v54 + 2) & 8) != 0) + 1LL) + 40);
            goto LABEL_170;
          case 3:
          case 4:
            v177 = sub_1AEE510(*(_QWORD *)(v54 + 8 * (((*(_BYTE *)(v54 + 2) & 8) != 0) + 1LL) + 32));
            if ( v177 != (_QWORD)v309 )
              goto LABEL_34;
            v178 = ((*(_BYTE *)(v54 + 3) >> 1) & 0x3F) == 19;
            v179 = *(_DWORD **)(v54 + 8 * (((*(_BYTE *)(v54 + 2) & 8) != 0) + 1LL) + 40);
            goto LABEL_167;
          case 0x16:
          case 0x17:
            v182 = sub_1AEE510(*(_QWORD *)(v54 + 8 * (((*(_BYTE *)(v54 + 2) & 8) != 0) + 1LL) + 32));
            if ( v182 != (_QWORD)v309 )
              goto LABEL_34;
            v183 = sub_18C1B30(
                     (__int64)v301,
                     *(_DWORD *)(v54 + 24),
                     2LL * (((*(_BYTE *)(v54 + 3) >> 1) & 0x3F) != 38) - 1);
            v178 = 0;
            v179 = (_DWORD *)(v183 & 0xFFFFFFFFFFFFFFFELL);
            goto LABEL_167;
          default:
            goto LABEL_34;
        }
      }
      goto LABEL_34;
    }
    if ( ((*(_WORD *)(v54 + 2) >> 3) & 0x3F) != 0x15 )
    {
      if ( ((*(_WORD *)(v54 + 2) >> 3) & 0x3Fu) >= 0x15 && ((((*(_WORD *)(v54 + 2) >> 3) & 0x3F) + 39) & 0x3Fu) <= 1 )
      {
        v205 = sub_1AEE510(*(_QWORD *)(v54 + 16));
        if ( v205 == (_QWORD)v309 )
        {
          v179 = *(_DWORD **)(v54 + 24);
          v178 = ((*(_WORD *)(v54 + 2) >> 3) & 0x3F) == 26;
LABEL_167:
          LODWORD(v25) = sub_1B2F5E0((__int64 *)&v301, v179, v178, (__m128)0LL, a8) | v25;
LABEL_36:
          v56 = sub_1AE7CC0(&v301);
          goto LABEL_50;
        }
      }
      goto LABEL_34;
    }
    v238 = sub_1AEE510(*(_QWORD *)(v54 + 16));
    if ( v238 != (_QWORD)v309 )
    {
LABEL_34:
      if ( (unsigned __int8)sub_1AE7CC0(&v301) )
        return (unsigned int)v25;
      if ( (unsigned __int8)sub_B8E180(v301[68]) )
        goto LABEL_36;
      v153 = v301 + 1;
      v154 = sub_EEB7E0(v54, (__int64)v41, 0.0);
      v155 = v153;
      v25 = (__int64)v283;
      sub_168B9F0((__int64)v283, v155, v154, 0x11C0u, 0);
      v294.m128i_i64[0] = sub_EEC8C0(v54, (__int64)v155, 0.0);
      v125 = (__int64 *)sub_1587DB0((__int64)v283, v294.m128i_i64);
LABEL_154:
      sub_15993D0((__int64)v125, (__int64 *)&v309);
      v156 = (_BYTE *)v25;
      LODWORD(v25) = 1;
      sub_15F7200(v156);
      v56 = sub_1AE7CC0(&v301);
      goto LABEL_50;
    }
    v181 = *(_QWORD *)(v54 + 24);
LABEL_170:
    LODWORD(v25) = sub_1B2FA40((__int64 *)&v301, v181, (__m128)0LL, a8) | v25;
    v56 = sub_1AE7CC0(&v301);
  }
  else
  {
    v206 = HIDWORD(v297);
    sub_168B9F0((__int64)v283, v301 + 1, v297, 0x11BBu, 0);
    v292 = v206;
    v207 = sub_180D980((__int64)v283, &v292);
    v291 = 2;
    v208 = sub_1587D10(v207, &v291);
    v209 = (__int64)v296;
    v210 = v208;
    if ( *(_BYTE *)(v208 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v208 + 32), (__int64)v296, 0xAu);
    }
    else if ( *(_BYTE *)(v208 + 132) )
    {
      v243 = sub_168B9E0((_QWORD *)v208);
      v244 = *(_QWORD *)(v210 + 16);
      if ( v244 )
        v244 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v244 + 32LL))(*(_QWORD *)(v210 + 16));
      v293.m128i_i64[0] = v244;
      v245 = sub_1587BC0(v243, v293.m128i_i64, v239, v240, v241, v242);
      sub_AE9DF0((unsigned __int8 **)(*v245 + 32LL * *(unsigned int *)(v210 + 128) + 8), v209, 0xAu);
    }
    LODWORD(v25) = 1;
    sub_15F7200(v283);
    v56 = sub_1AE7CC0(&v301);
  }
LABEL_50:
  if ( v56 || (unsigned __int8)sub_B8E180(a3[68]) )
    return (unsigned int)v25;
  if ( (_BYTE)v25 )
    goto LABEL_47;
  if ( v14 )
    v71 = *(_QWORD *)(v14 + 24);
  else
    v71 = *(_QWORD *)(v281.m128i_i64[0] + 40);
  v72 = sub_1AE5FF0(a4);
  v73 = v72;
  if ( v72 )
    v73 = *(_QWORD *)(v72 + 1008);
  v74 = v301;
  if ( v319 || v317 )
  {
    v75 = *(_QWORD *)(v301[31] + 18640);
    v76 = sub_18C1B30((__int64)v301, 0, 1) & 0xFFFFFFFFFFFFFFFELL;
    v71 = sub_1BFA490(v74, v76, v75, 6, 1) & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v298.m128_u64[0] = (unsigned __int64)v301;
    v283 = &v298;
    sub_1AE9670((__int64)&v298.m128_i64[1], (__int64)v301);
    LOBYTE(v300) = *((_BYTE *)v74 + 10024);
    *((_BYTE *)v74 + 10024) = 1;
    v169 = j__strlen(".capture_expr.");
    v170 = sub_1B00390(v301, (_QWORD *)v310, a13, ".capture_expr.", v169, (__m128)0LL, a8);
    v171 = j__strlen(".capture_expr.");
    v76 = *((_QWORD *)&v310 + 1);
    v172 = sub_1B00390(v301, *((_QWORD **)&v310 + 1), a13, ".capture_expr.", v171, (__m128)0LL, a8);
    if ( v172 > 1 && v170 > 1 )
    {
      v250 = (_BYTE)v314 == 0 ? 2 : 0;
      if ( v312 )
        v251 = v250 + 10;
      else
        v251 = v250 + 11;
      v76 = v73;
      v252 = sub_1929BB0(
               (__int64)v301,
               v73,
               v304,
               v251,
               v170 & 0xFFFFFFFFFFFFFFFELL,
               (_QWORD *)(v172 & 0xFFFFFFFFFFFFFFFELL),
               (__m128)0LL,
               a8,
               0);
      if ( v252 > 1 )
      {
        v76 = *(_QWORD *)(v301[31] + 18640);
        if ( sub_1AE80C0(*(_QWORD *)((v252 & 0xFFFFFFFFFFFFFFFELL) + 8), v76)
          || (v76 = v255, v253 = sub_1BFA490(v254, v255, v256, 6, 1), v253 > 1) )
        {
          v71 = v253 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
    }
    else
    {
      v71 = 0;
    }
    sub_1AF2A30((__int64)v283);
  }
  *(_QWORD *)(a11 + 120LL * v290[0] + 8) = v71;
  if ( !sub_FFE580(a1)
    && !(unsigned __int8)sub_FFEEE0(a1, v76, v77)
    && !sub_FFE5D0(a1)
    && !sub_FFED80(a1, v76, v191, v192) )
  {
    sub_FFF0D0(a1);
  }
  v78 = sub_1AE5FF0(a4);
  if ( v78 )
    v78 = *(_QWORD *)(v78 + 1008);
  v80 = v78;
  v81 = sub_1B0F990(&v301, v78, a11, (__int64)v282, v79, a13, (__m128)0LL, a8);
  v82 = v290[0];
  v83 = v309;
  v84 = a11 + 120LL * v290[0];
  *(_QWORD *)(v84 + 16) = v81;
  if ( (*(_BYTE *)(v83 + 28) & 0x7Fu) - 40 <= 6 )
  {
    *(_QWORD *)(v84 + 24) = *((_QWORD *)&v309 + 1);
    goto LABEL_65;
  }
  v193 = v83;
  v194 = sub_1B223D0(v301[95], v83, 0, 0, (__m128)0LL, a8);
  v298.m128_u64[0] = *((_QWORD *)v194 + 6);
  v197 = sub_C1BEF0((__int64)&v298, v193, v195, v196);
  v80 = a4;
  v198 = sub_1AE9760((__int64)v301, (__int64)v194, v197, v304);
  sub_1AFBE90((__int64)&v298, a4, v309);
  if ( !(unsigned __int8)sub_FFEF20(v298.m128_i32[1]) || !v299 )
  {
    v80 = a13;
    v293.m128i_i64[1] = v198;
    v293.m128i_i64[0] = *((_QWORD *)&v309 + 1);
    sub_1B4ACC0(&v294, a13, v293.m128i_i64, v199, v200, v201);
    if ( (_BYTE)v295 )
    {
      v233 = *(_DWORD *)(a13 + 32);
      *(_DWORD *)(v294.m128i_i64[0] + 8) = v233;
      v234 = *(unsigned int *)(a13 + 36);
      v235 = v233;
      if ( v233 >= v234 )
      {
        v21 = (__m128)_mm_load_si128(&v293);
        v257 = v233 + 1LL;
        if ( v234 < v235 + 1 )
        {
          v281 = (__m128i)v21;
          v80 = a13 + 40;
          sub_2237220(a13 + 24, a13 + 40, v257, 16);
          v21 = (__m128)_mm_load_si128(&v281);
        }
        *(__m128 *)(*(_QWORD *)(a13 + 24) + 16LL * (unsigned int)(*(_DWORD *)(a13 + 32))++) = v21;
      }
      else
      {
        *(__m128i *)(*(_QWORD *)(a13 + 24) + 16LL * v233) = _mm_load_si128(&v293);
        *(_DWORD *)(a13 + 32) = v233 + 1;
      }
    }
  }
  v82 = a11;
  v85 = v309;
  v84 = a11 + 120LL * v290[0];
  *(_QWORD *)(v84 + 24) = v198;
  if ( v85 )
  {
    v83 = v85;
LABEL_65:
    v85 = 0;
    if ( *(char *)(v83 + 28) >= 0 )
    {
      v86 = 0;
      v298.m128_u64[0] = *(_QWORD *)(v83 + 48);
      v87 = sub_C1BEF0((__int64)&v298, v80, 0, v82);
      v92 = v309;
      v93 = v87;
      if ( (*(_BYTE *)(v309 + 28) & 0x7Fu) - 40 <= 6 )
      {
        v80 = v309;
        v175 = sub_1AE9760((__int64)v301, v309, v87, v304);
        v92 = v309;
        v86 = v175;
      }
      v94 = 0;
      if ( (*(_BYTE *)(v92 + 29) & 1) != 0 )
      {
        v176 = sub_B8C3D0(v92, v80, v88, v89, v90, v91);
        v92 = v309;
        v94 = (__int64)v176;
      }
      v95 = sub_995750(v92);
      v80 = v304;
      v97 = sub_1AFE600(v301, v304, v93, v95, v96, v94, v86);
      v85 = 0;
      if ( *(char *)(v97 + 28) >= 0 )
      {
        v80 = v97;
        v85 = sub_1AE9760((__int64)v301, v97, v93, v304);
      }
      v84 = a11 + 120LL * v290[0];
    }
  }
  v98 = v311;
  v99 = (_QWORD *)v310;
  *(_QWORD *)(v84 + 32) = v85;
  v100 = (__m128)_mm_loadu_si128(&v307);
  *(_QWORD *)(v84 + 48) = v98;
  LODWORD(v98) = v308;
  *(_QWORD *)(v84 + 40) = v99;
  *(_DWORD *)(v84 + 76) = (_DWORD)v98;
  LODWORD(v98) = HIDWORD(v308);
  *(__m128 *)(v84 + 60) = v100;
  *(_DWORD *)(v84 + 80) = (_DWORD)v98;
  *(_BYTE *)(v84 + 56) = HIBYTE(v314);
  *(_BYTE *)v84 = v314;
  v101 = sub_1AE5FF0(a4);
  v104 = v101;
  if ( v101 )
    v104 = *(_QWORD *)(v101 + 1008);
  v105 = v317;
  v106 = v319;
  v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v103 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v107 + 16) == 48 )
  {
    v281.m128i_i64[0] = 0;
  }
  else
  {
    v108 = *((_QWORD **)&v310 + 1);
    if ( !v312 )
    {
      v164 = v99;
      v99 = *((_QWORD **)&v310 + 1);
      v108 = v164;
      v107 = v319;
      v106 = v317;
      v105 = v319;
    }
    if ( !v105 )
    {
      v174 = j__strlen(".capture_expr.");
      v80 = (__int64)v99;
      v99 = (_QWORD *)(sub_1B00390(v301, v99, a13, ".capture_expr.", v174, v21, v100) & 0xFFFFFFFFFFFFFFFELL);
    }
    if ( !v106 )
    {
      v173 = j__strlen(".capture_expr.");
      v80 = (__int64)v108;
      v108 = (_QWORD *)(sub_1B00390(v301, v108, a13, ".capture_expr.", v173, v21, v100) & 0xFFFFFFFFFFFFFFFELL);
    }
    if ( v108
      && v99
      && ((v109 = 0, v110 = 0, !v312) ? (v110 = (__int64)v108) : (v109 = (__int64)v99),
          (v282 = (_DWORD *)v109,
           v281.m128i_i64[0] = v110,
           v298.m128_u64[0] = *(_QWORD *)(v309 + 48),
           v283 = &v298,
           v111 = sub_C1BEF0((__int64)&v298, v80, v107, v110),
           v112 = sub_1B0EA60(
                    v301,
                    v104,
                    v304,
                    (unsigned __int64)v99,
                    (unsigned __int64)v108,
                    v311,
                    v21,
                    v100,
                    v111,
                    v314,
                    0,
                    a13),
           v112 > 1)
       && (v113 = (_QWORD *)sub_190C990(
                              (__int64)v301,
                              v304,
                              v304,
                              v112 & 0xFFFFFFFFFFFFFFFELL,
                              *(double *)v21.m128_u64,
                              v100),
           (unsigned __int64)v113 > 1)
       && (v284 = (signed __int64)v113,
           v114 = j__strlen(".new_step"),
           v115 = sub_1B00390(v301, v311, a13, ".new_step", v114, v21, v100),
           v115 > 1)) )
    {
      v116 = sub_1929BB0(
               (__int64)v301,
               v104,
               v304,
               2u,
               v284 & 0xFFFFFFFFFFFFFFFELL,
               (_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFELL),
               v21,
               v100,
               0);
      if ( v116 <= 1
        || (v258 = sub_190C990((__int64)v301, v304, v304, v116 & 0xFFFFFFFFFFFFFFFELL, *(double *)v21.m128_u64, v100),
            v258 <= 1)
        || (v285 = (__int64 *)(v111 & 0xFFFFFFFFFFFFFFF0LL),
            (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL)
           & 0xF7) == 0x22)
        && (v287 = (_DWORD *)v258,
            v259 = (_QWORD *)v301[31],
            v284 = v258 & 0xFFFFFFFFFFFFFFFELL,
            v260 = sub_A63D40(v259),
            v258 = (unsigned __int64)v287,
            v261 = *(_QWORD *)(v284 + 8),
            v286 = (_QWORD *)v284,
            (*(_QWORD *)&byte_8[v261 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[v261 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v261) & 7) != (*(_QWORD *)&byte_8[v260 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v260 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v260) & 7))
        && (v262 = (_QWORD *)v301[31],
            v284 = (signed __int64)v301,
            v263 = sub_A63D40(v262),
            v258 = sub_1BFA490(v284, v286, v263, 3, 1),
            v258 <= 1)
        || ((v284 = v258 & 0xFFFFFFFFFFFFFFFELL, !v312)
          ? (v276 = (__int64)v108,
             v277 = v301,
             v278 = sub_190C990((__int64)v301, v304, v304, v276, *(double *)v21.m128_u64, v100),
             v266 = sub_1929BB0(
                      (__int64)v277,
                      v104,
                      v304,
                      6u,
                      v278 & 0xFFFFFFFFFFFFFFFELL,
                      (_QWORD *)v284,
                      v21,
                      v100,
                      0))
          : (v264 = v301,
             v265 = sub_190C990((__int64)v301, v304, v304, (__int64)v99, *(double *)v21.m128_u64, v100),
             v266 = sub_1929BB0(
                      (__int64)v264,
                      v104,
                      v304,
                      5u,
                      v265 & 0xFFFFFFFFFFFFFFFELL,
                      (_QWORD *)v284,
                      v21,
                      v100,
                      0)),
            v266 <= 1
         || (v267 = v301,
             v268 = v266 & 0xFFFFFFFFFFFFFFFELL,
             v269 = *(_QWORD *)&byte_8[*(_QWORD *)((v266 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL],
             (v269 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v269 | (unsigned __int8)*(_QWORD *)(v268 + 8)) & 7) == (v285[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v111 | (unsigned __int8)v285[1]) & 7))
         && (v275 = sub_1BFA490(v301, v268, v111, 3, 1), v267 = v301, v275 <= 1)) )
      {
        v105 = v317;
        v281.m128i_i64[0] = 0;
        v106 = v319;
        v102 = a11 + 120LL * v290[0];
      }
      else
      {
        v298.m128_u64[0] = (unsigned __int64)v267;
        sub_1AE9670((__int64)&v283->m128_i64[1], (__int64)v267);
        LOBYTE(v300) = *(_BYTE *)(v270 + 10024);
        *(_BYTE *)(v270 + 10024) = 1;
        v273 = sub_1AF29F0((__int64)v301, v271 & 0xFFFFFFFFFFFFFFFELL, 0, v271 & 0xFFFFFFFFFFFFFFFELL, v272, v21, v100);
        if ( v273 > 1 )
        {
          v284 = v273 & 0xFFFFFFFFFFFFFFFELL;
          v274 = v273 & 0xFFFFFFFFFFFFFFFELL;
          if ( v312 )
          {
            v281.m128i_i64[0] = v273 & 0xFFFFFFFFFFFFFFFELL;
            v274 = (unsigned __int64)v282;
          }
        }
        else
        {
          v281.m128i_i64[0] = 0;
          v274 = 0;
        }
        v282 = (_DWORD *)v274;
        sub_1AF2A30((__int64)v283);
        v105 = v317;
        v106 = v319;
        v102 = a11 + 120LL * v290[0];
      }
    }
    else
    {
      v281.m128i_i64[0] = 0;
      v106 = v319;
      v102 = a11 + 120LL * v290[0];
      v105 = v317;
    }
  }
  v120 = _mm_loadh_ps((const double *)v281.m128i_i64);
  *(__m128 *)(v102 + 88) = v120;
  if ( v105 )
  {
    v126 = v320;
    *(_BYTE *)(v102 + 104) = 1;
    *(_BYTE *)(v102 + 105) = v106;
    *(_QWORD *)(v102 + 112) = v126;
    v121 = v316;
  }
  else if ( v106 )
  {
    *(_QWORD *)(v102 + 112) = v320;
    *(_WORD *)(v102 + 104) = 256;
    v121 = v318;
  }
  else
  {
    *(_QWORD *)(v102 + 112) = 0;
    v121 = 0;
    *(_WORD *)(v102 + 104) = 0;
  }
  v127 = *(_QWORD *)(v102 + 8) == 0;
  *(_DWORD *)(v102 + 108) = v121;
  if ( v127
    || !*(_QWORD *)(v102 + 16)
    || !*(_QWORD *)(v102 + 24)
    || !*(_QWORD *)(v102 + 32)
    || !*(_QWORD *)(v102 + 40)
    || !*(_QWORD *)(v102 + 48) )
  {
    goto LABEL_47;
  }
  v128 = sub_1AE5FF0(a4);
  if ( !v128 || !*(_BYTE *)(v128 + 1072) )
    goto LABEL_93;
  sub_1AEC890(a4);
  if ( *(_QWORD *)(v129 + 16) )
  {
    v130 = v290[0];
    sub_1AEC890(a4);
    sub_EB5680(v131);
    if ( v130 < v132 )
    {
      sub_1AEC890(a4);
      sub_EB5670(v248, v290[0], *(_QWORD *)(a11 + 120LL * v290[0] + 16));
      sub_1AEC890(a4);
      sub_EB5690(v249, v290[0], *(_QWORD *)(a11 + 120LL * v290[0] + 24));
    }
  }
  v133 = sub_1AE5FF0(a4);
  v134 = v133 + 1032;
  v135 = v133 + 1032;
  if ( sub_FFE580(*(_DWORD *)(v133 + 976)) )
  {
    v136 = sub_1AF9490(v135);
    if ( *(_DWORD *)(v133 + 1040) )
    {
      sub_1AF9420(
        &v298,
        *(_QWORD **)(v133 + 1032),
        (_QWORD *)(*(_QWORD *)(v133 + 1032) + 88LL * *(unsigned int *)(v133 + 1048)),
        v134,
        0);
      v140 = v298.m128_u64[1];
      v139 = (_DWORD *)v298.m128_u64[0];
      goto LABEL_132;
    }
  }
  else
  {
    v136 = sub_1AF9490(v135);
  }
  v139 = (_DWORD *)sub_1AF9490(v134);
  v140 = v237;
LABEL_132:
  v281.m128i_i64[0] = v136;
  if ( v139 != (_DWORD *)v136 )
  {
    LOBYTE(v283) = 0;
    v284 = (signed __int64)a3;
    while ( 1 )
    {
      v141 = *(_DWORD **)v139;
      v142 = *(_DWORD *)(*(_QWORD *)v139 + 8LL);
      if ( v142 == 22 )
      {
        if ( v141[9] <= v290[0] )
          goto LABEL_144;
        v143 = v141[5];
        if ( v143 != 6 )
        {
          v144 = v141[6];
          v145 = *(_QWORD **)(a11 + 120LL * v290[0] + 24);
          if ( v143 == 5 )
          {
            v146 = *(_QWORD *)v139;
            v141 = nullptr;
            goto LABEL_139;
          }
LABEL_196:
          v282 = nullptr;
LABEL_197:
          v202 = sub_1AE5FF0(a4);
          if ( v202 )
            v202 = *(_QWORD *)(v202 + 1008);
          v146 = (__int64)v141;
          v148 = sub_1B103A0(&v301, v202, v145, a13, v144, v203, v120, v100, v204);
          v141 = v282;
LABEL_142:
          v149 = v290[0];
          if ( v146 )
          {
            sub_EB59F0(v146, v290[0], v148);
            goto LABEL_144;
          }
          goto LABEL_223;
        }
        if ( v139[4] > v290[0] )
        {
          v144 = v141[6];
          v145 = *(_QWORD **)(a11 + 120LL * v290[0] + 24);
          goto LABEL_196;
        }
        sub_EB59F0(*(_QWORD *)v139, v290[0], 0);
      }
      else
      {
        if ( v142 != 29 )
          BUG();
        if ( v141[8] > v290[0] )
        {
          v184 = v141[5];
          if ( v184 != 1 )
          {
            v144 = v141[6];
            v145 = *(_QWORD **)(a11 + 120LL * v290[0] + 24);
            if ( !v184 || v184 == 3 )
            {
              v146 = 0;
LABEL_139:
              v147 = sub_1AE5FF0(a4);
              if ( v147 )
                v147 = *(_QWORD *)(v147 + 1008);
              v148 = sub_1B103A0(&v301, v147, v145, a13, v144, nullptr, v120, v100, 11);
              goto LABEL_142;
            }
            if ( v184 != 2 )
            {
              v282 = *(_DWORD **)v139;
              v141 = nullptr;
              goto LABEL_197;
            }
            v229 = (_QWORD *)v284;
            if ( (sub_19146F0(
                    v284,
                    *(_QWORD **)(a11 + 120LL * v290[0] + 24),
                    15LL * v290[0],
                    a11,
                    v137,
                    v138,
                    v120,
                    v100)
                & 0xFFFFFFFFFFFFFFFELL) == 0 )
              goto LABEL_144;
            sub_18C1B30((__int64)v229, v141[7], 1);
            v230 = sub_1AE5FF0(a4);
            if ( v230 )
              v230 = *(_QWORD *)(v230 + 1008);
            v148 = sub_1B103A0(&v301, v230, v232, a13, v144, v231, v120, v100, 6);
            v149 = v290[0];
LABEL_223:
            sub_EB5C30((__int64)v141, v149, v148);
            goto LABEL_144;
          }
          if ( v139[4] > v290[0] )
          {
            v144 = v141[6];
            v282 = *(_DWORD **)v139;
            v141 = nullptr;
            v145 = *(_QWORD **)(a11 + 120LL * v290[0] + 24);
            goto LABEL_197;
          }
          sub_EB5C30(*(_QWORD *)v139, v290[0], 0);
        }
      }
LABEL_144:
      if ( v139 + 22 != (_DWORD *)v140 )
      {
        v150 = *((_QWORD *)v139 + 11);
        if ( v150 != -4096 && v150 != -8192 )
        {
          v139 += 22;
          goto LABEL_151;
        }
        v151 = v139 + 44;
        while ( 1 )
        {
          v139 = v151;
          if ( v151 == (_QWORD *)v140 )
            break;
          v152 = *v151;
          v151 += 11;
          if ( v152 != -8192 && v152 != -4096 )
            goto LABEL_151;
        }
      }
      v139 = (_DWORD *)v140;
LABEL_151:
      if ( (_DWORD *)v281.m128i_i64[0] == v139 )
      {
        LODWORD(v25) = (unsigned __int8)v283;
        return (unsigned int)v25;
      }
    }
  }
  return (unsigned int)v25;
}
