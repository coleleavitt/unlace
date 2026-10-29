unsigned __int64 __fastcall sub_1B4D310(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  char *v12; // r14
  void **v13; // rbx
  unsigned int *v14; // r13
  unsigned int v15; // r15d
  __m128i v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void **v19; // rdx
  void **v20; // rax
  void **v21; // rcx
  void **v22; // rax
  unsigned __int64 v23; // rbx
  __m128 v24; // xmm0
  unsigned int v25; // edx
  void *v26; // rax
  unsigned int v27; // edx
  _DWORD *v28; // rax
  char *v29; // rdx
  int *v30; // r12
  _DWORD *v31; // rax
  int *v32; // rbx
  void **v33; // r13
  __int64 v34; // r14
  _BOOL4 v35; // r15d
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD **v41; // rbx
  __int64 v42; // r12
  _QWORD **v43; // rbp
  void **v45; // rax
  void **v46; // rdx
  unsigned int v47; // edx
  char v48; // dl
  _DWORD *v49; // rdx
  char *v50; // rcx
  _DWORD *v51; // rax
  __int16 v52; // ax
  __int64 v53; // r13
  unsigned int v54; // ebp
  unsigned int v55; // r12d
  unsigned int v56; // ecx
  __m128i *v57; // rsi
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // r13
  __int16 v61; // ax
  unsigned __int16 v62; // ax
  __int64 v63; // rbp
  void *v64; // rax
  char v65; // r13
  __int64 v66; // r14
  char v67; // r15
  char v68; // bl
  __int64 v69; // r12
  __int64 v70; // rdi
  __m128 v71; // xmm2
  __m128 v72; // xmm1
  __m128 v73; // xmm0
  unsigned __int64 v74; // rbx
  __int64 v75; // rbp
  __int16 v76; // ax
  __int16 v77; // ax
  char v78; // al
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned __int64 v82; // r13
  char v83; // al
  unsigned __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbp
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned __int64 v96; // r13
  char v97; // al
  unsigned __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  unsigned __int64 v102; // r12
  char v103; // al
  __int64 v104; // rsi
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rsi
  char v107; // al
  __int64 v108; // rcx
  unsigned __int64 v109; // rsi
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  __int16 v112; // ax
  int v113; // eax
  unsigned int v114; // ecx
  unsigned __int64 v115; // rdi
  char v116; // al
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r8
  __int64 v120; // r9
  __m256i *v121; // rsi
  __int64 v122; // r8
  __int64 v123; // r9
  char *v124; // rdx
  char *v125; // rax
  __int64 v126; // rdx
  unsigned int v127; // r13d
  unsigned __int64 v128; // rdi
  unsigned __int64 v129; // r9
  unsigned __int64 v130; // rdi
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  char v133; // al
  __int64 *v134; // r9
  char v135; // al
  __int64 *v136; // r9
  __int16 v137; // dx
  __int16 v138; // dx
  int v139; // eax
  __int64 v140; // rsi
  unsigned __int64 v141; // rdi
  int v142; // eax
  unsigned __int64 v143; // r13
  __int16 v144; // ax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  unsigned __int64 v152; // rdi
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // r12
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  unsigned int v166; // ebp
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rbp
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  _QWORD *v173; // rax
  __int32 v174; // eax
  unsigned __int64 v175; // rdi
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  unsigned __int64 v179; // rdi
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // r12
  __int64 v188; // rax
  _QWORD *v189; // rax
  unsigned __int64 v190; // rdi
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  unsigned __int64 v197; // rdi
  unsigned __int64 v198; // rax
  void *v199; // rdx
  unsigned __int64 v200; // r13
  char v201; // al
  unsigned __int64 v202; // rbp
  char v203; // al
  char v204; // bp
  unsigned __int64 v205; // rax
  __int64 v206; // rsi
  _WORD *v207; // rax
  __int16 v208; // dx
  unsigned __int16 v209; // ax
  unsigned __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // r8
  unsigned __int64 v213; // rdi
  unsigned int v214; // eax
  __int64 v215; // rdx
  unsigned __int64 v216; // r12
  unsigned __int64 v217; // rbp
  __int64 v218; // rsi
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  unsigned int v227; // eax
  __int64 v228; // rsi
  unsigned __int64 v229; // r12
  __int32 v230; // eax
  unsigned __int64 v231; // rbx
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  unsigned __int64 v235; // rbp
  __int32 v236; // eax
  unsigned __int64 v237; // rbx
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  unsigned __int64 v241; // rdi
  unsigned __int64 v242; // rbp
  __int64 *v243; // rax
  char v244; // al
  unsigned __int64 v245; // rsi
  unsigned __int64 v246; // rsi
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  int v250; // eax
  unsigned __int64 v251; // rdi
  __m128 v252; // [rsp+0h] [rbp-2A8h] BYREF
  unsigned __int64 v253; // [rsp+18h] [rbp-290h] BYREF
  __int64 v254; // [rsp+20h] [rbp-288h]
  __int64 *v255; // [rsp+28h] [rbp-280h]
  unsigned __int64 v256; // [rsp+30h] [rbp-278h] BYREF
  void **p_ptr; // [rsp+38h] [rbp-270h]
  __int64 v258; // [rsp+40h] [rbp-268h]
  __m128i *v259; // [rsp+48h] [rbp-260h]
  unsigned __int64 *v260; // [rsp+50h] [rbp-258h]
  unsigned int v261; // [rsp+5Ch] [rbp-24Ch]
  __int64 v262; // [rsp+60h] [rbp-248h]
  unsigned int v263; // [rsp+68h] [rbp-240h]
  unsigned int v264; // [rsp+6Ch] [rbp-23Ch]
  int *v265; // [rsp+70h] [rbp-238h]
  char *v266; // [rsp+78h] [rbp-230h]
  __int64 v267; // [rsp+80h] [rbp-228h]
  __int64 v268; // [rsp+88h] [rbp-220h]
  unsigned int v269; // [rsp+90h] [rbp-218h]
  int v270; // [rsp+94h] [rbp-214h]
  char *v271; // [rsp+98h] [rbp-210h]
  void **v272; // [rsp+A0h] [rbp-208h]
  __int64 v273; // [rsp+A8h] [rbp-200h]
  __int64 v274; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v275; // [rsp+B8h] [rbp-1F0h] BYREF
  __m256i v276; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v277; // [rsp+E0h] [rbp-1C8h]
  char v278; // [rsp+E8h] [rbp-1C0h]
  __int64 v279; // [rsp+ECh] [rbp-1BCh]
  char v280; // [rsp+F4h] [rbp-1B4h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v282; // [rsp+108h] [rbp-1A0h]
  char v283; // [rsp+110h] [rbp-198h] BYREF
  int v284; // [rsp+120h] [rbp-188h] BYREF
  void *v285; // [rsp+128h] [rbp-180h]
  int *v286; // [rsp+130h] [rbp-178h]
  int *v287; // [rsp+138h] [rbp-170h]
  __int64 v288; // [rsp+140h] [rbp-168h]
  __m128i v289; // [rsp+150h] [rbp-158h] BYREF
  unsigned __int64 v290; // [rsp+160h] [rbp-148h] BYREF
  unsigned __int64 v291; // [rsp+168h] [rbp-140h]
  unsigned __int64 v292; // [rsp+170h] [rbp-138h]
  char v293; // [rsp+178h] [rbp-130h]
  __int128 v294; // [rsp+180h] [rbp-128h]
  __int16 v295; // [rsp+190h] [rbp-118h]
  void *v296[2]; // [rsp+1E0h] [rbp-C8h] BYREF
  __m128 v297; // [rsp+1F0h] [rbp-B8h] BYREF
  _BYTE v298[24]; // [rsp+200h] [rbp-A8h] BYREF
  __int64 v299; // [rsp+218h] [rbp-90h]
  char v300; // [rsp+258h] [rbp-50h]
  unsigned int v301; // [rsp+260h] [rbp-48h]
  char v302; // [rsp+264h] [rbp-44h]

  v267 = a3;
  v255 = a1;
  v266 = a2;
  v262 = a4;
  v269 = a5;
  v270 = a6;
  v268 = sub_168B6C0((__int64)a1);
  v264 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
  v9 = a1[1];
  if ( !*(_DWORD *)(v9 + 27672) )
    *(_DWORD *)(v9 + 27672) = a5;
  v10 = 1;
  if ( !v262 )
    return v10;
  v263 = 0;
  ptr = &v283;
  v282 = 0x200000000LL;
  v286 = &v284;
  v287 = &v284;
  p_ptr = &ptr;
  v284 = 0;
  v11 = 8 * v267;
  v273 = 8 * v267;
  v285 = nullptr;
  v288 = 0;
  v252.m128_u64[0] = (unsigned __int64)&v266[8 * v267];
  if ( (char *)v252.m128_u64[0] == v266 )
  {
    v261 = 106;
LABEL_24:
    if ( v261 - 1 > 1 )
    {
      v23 = v262;
      v252.m128_i16[0] = *(_WORD *)v262;
      if ( (v252.m128_i16[0] & 0x1FF) == 0x3C )
        v23 = *(_QWORD *)(v262 + 16);
      v24 = 0;
      LODWORD(v296[1]) = 0;
      v25 = 4437;
      v297 = 0;
      v26 = (void *)*v255;
      *(_QWORD *)v298 = 0;
      v298[8] = 0;
      v296[0] = v26;
      *(_QWORD *)&v298[12] = 0;
      v298[20] = 0;
      goto LABEL_138;
    }
    sub_168B9F0((__int64)v296, v255, v269, 0x1153u, 0);
    sub_1AF81E0((__m128i *)&v276, 0x6Au);
    v58 = sub_1682AF0((__int64)v296, (__int64)&v276);
    LODWORD(v253) = 106;
    v59 = 1;
LABEL_113:
    LODWORD(v275) = v59;
    v60 = sub_1587D10(v58, (int *)&v275);
    sub_1AF81E0(&v289, v261);
    sub_1682AF0(v60, (__int64)&v289);
    if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
      operator delete((void *)v289.m128i_i64[0]);
    if ( (unsigned __int64 *)v276.m256i_i64[0] != &v276.m256i_u64[2] )
      operator delete((void *)v276.m256i_i64[0]);
    sub_15F7200(v296);
    sub_168B9F0((__int64)v296, v255, v263, 0x182Eu, 0);
    sub_1AF81E0(&v289, v261);
    v11 = (__int64)&v289;
    sub_1682AF0((__int64)v296, (__int64)&v289);
    if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
      operator delete((void *)v289.m128i_i64[0]);
    sub_15F7200(v296);
    v23 = v262;
    LOWORD(v254) = *(_WORD *)v262;
    if ( (v254 & 0x1FF) != 0x3C )
    {
      if ( (_DWORD)v253 != 84 )
        goto LABEL_121;
      goto LABEL_94;
    }
LABEL_93:
    v23 = *(_QWORD *)(v262 + 16);
    if ( (_DWORD)v253 != 84 )
      goto LABEL_121;
LABEL_94:
    v52 = *(_WORD *)v23 & 0x1FF;
    goto LABEL_95;
  }
  LOBYTE(v254) = 0;
  v259 = &v289;
  v12 = v266;
  LODWORD(v258) = 0;
  v13 = v296;
  v261 = 106;
  LODWORD(v253) = 106;
  v265 = (int *)&v275;
  v260 = &v290;
  while ( 2 )
  {
    v14 = *(unsigned int **)v12;
    v15 = *(_DWORD *)(*(_QWORD *)v12 + 8LL);
    switch ( v15 )
    {
      case 0u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xFu:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x72u:
      case 0x73u:
        LOBYTE(v254) = 1;
        goto LABEL_29;
      case 1u:
      case 2u:
      case 0x56u:
      case 0x57u:
      case 0x5Cu:
        if ( v261 != 106 )
        {
          sub_168B9F0((__int64)v13, v255, *v14, 0x1205u, 0);
          v16.m128i_i64[0] = sub_20EAB70(4, v264);
          v289 = v16;
          v17 = sub_166BAF0((__int64)v13, (__int64)v259);
          LODWORD(v275) = 0;
          v18 = sub_1587D10(v17, v265);
          v276.m256i_i64[0] = *(_QWORD *)v14;
          sub_1587DB0(v18, v276.m256i_i64);
          sub_15F7200(v13);
          sub_168B9F0((__int64)v13, v255, v263, 0x182Eu, 0);
          sub_1AF81E0(v259, v261);
          v11 = (__int64)v259;
          sub_1682AF0((__int64)v13, (__int64)v259);
          if ( (unsigned __int64 *)v289.m128i_i64[0] != v260 )
            operator delete((void *)v289.m128i_i64[0]);
          sub_15F7200(v13);
          goto LABEL_11;
        }
        v263 = *v14;
        v12 += 8;
        v261 = v15;
        if ( (char *)v252.m128_u64[0] == v12 )
          goto LABEL_12;
        continue;
      case 0xEu:
      case 0x10u:
LABEL_29:
        v27 = *v14;
        LODWORD(v256) = *v14;
        if ( ((unsigned __int8)v254 & ((_DWORD)v253 != 106)) != 0 )
        {
          sub_168B9F0((__int64)v13, v255, v27, 0x1157u, 0);
          v289.m128i_i64[0] = *(_QWORD *)v14;
          sub_1587DB0((__int64)v13, v259->m128i_i64);
          sub_15F7200(v13);
          sub_168B9F0((__int64)v13, v255, v258, 0x182Eu, 0);
          sub_1AF81E0(v259, v253);
          v11 = (__int64)v259;
          sub_1682AF0((__int64)v13, (__int64)v259);
          if ( (unsigned __int64 *)v289.m128i_i64[0] != v260 )
            operator delete((void *)v289.m128i_i64[0]);
          v12 += 8;
          sub_15F7200(v13);
          LOBYTE(v254) = v254 & ((_DWORD)v253 != 106);
          if ( (char *)v252.m128_u64[0] == v12 )
            goto LABEL_12;
          continue;
        }
        LODWORD(v296[0]) = v15;
        if ( v288 )
        {
          v11 = (__int64)v13;
          sub_1B01420(p_ptr + 3, (int *)v13);
          if ( !v48 )
          {
            v47 = *v14;
            goto LABEL_75;
          }
LABEL_80:
          LODWORD(v253) = v15;
          v12 += 8;
          LODWORD(v258) = v256;
          if ( (char *)v252.m128_u64[0] == v12 )
            goto LABEL_12;
          continue;
        }
        v30 = (int *)((char *)ptr + 4 * (unsigned int)v282);
        if ( ptr == v30 )
        {
          if ( (unsigned int)v282 <= 1uLL )
            goto LABEL_109;
LABEL_103:
          v11 = (__int64)v13;
          LODWORD(v282) = 0;
          sub_1B01420(p_ptr + 3, (int *)v13);
          goto LABEL_80;
        }
        if ( v15 != *(_DWORD *)ptr )
        {
          v31 = ptr;
          while ( v30 != ++v31 )
          {
            if ( v15 == *v31 )
              goto LABEL_74;
          }
          if ( (unsigned int)v282 <= 1uLL )
          {
LABEL_109:
            if ( (unsigned __int64)(unsigned int)v282 + 1 > HIDWORD(v282) )
            {
              v11 = (__int64)(p_ptr + 2);
              sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v282 + 1LL, 4);
              v30 = (int *)((char *)ptr + 4 * (unsigned int)v282);
            }
            *v30 = v15;
            LODWORD(v282) = v282 + 1;
            goto LABEL_80;
          }
          v271 = v12;
          v272 = v13;
          v32 = (int *)ptr;
          LODWORD(v258) = v15;
          v33 = p_ptr;
          v34 = (__int64)(p_ptr + 4);
          do
          {
            v38 = sub_1B4D230(v33 + 3, v34, v32);
            if ( v39 )
            {
              v35 = v38 || v39 == v34 || *v32 < *(_DWORD *)(v39 + 32);
              v253 = v39;
              v36 = operator new(0x28u);
              v37 = v253;
              *(_DWORD *)(v36 + 32) = *v32;
              std::_Rb_tree_insert_and_rebalance(v35, v36, v37, v34);
              ++v288;
            }
            ++v32;
          }
          while ( v30 != v32 );
          v15 = v258;
          v12 = v271;
          v13 = v272;
          goto LABEL_103;
        }
LABEL_74:
        v47 = v256;
LABEL_75:
        sub_168B9F0((__int64)v13, v255, v47, 0x1157u, 0);
        v289.m128i_i64[0] = *(_QWORD *)v14;
        sub_1587DB0((__int64)v13, v259->m128i_i64);
        sub_15F7200(v13);
        sub_168B9F0((__int64)v13, v255, v256, 0x182Eu, 0);
        sub_1AF81E0(v259, v15);
        v11 = (__int64)v259;
        sub_1682AF0((__int64)v13, (__int64)v259);
        if ( (unsigned __int64 *)v289.m128i_i64[0] != v260 )
          operator delete((void *)v289.m128i_i64[0]);
        v12 += 8;
        sub_15F7200(v13);
        LODWORD(v253) = v15;
        LODWORD(v258) = v256;
        if ( (char *)v252.m128_u64[0] != v12 )
          continue;
LABEL_12:
        if ( !v288 )
        {
          v49 = ptr;
          v50 = (char *)ptr + 4 * (unsigned int)v282;
          if ( v50 != ptr )
          {
            v11 = *(unsigned int *)ptr;
            if ( (_DWORD)v11 == 16 )
              goto LABEL_89;
            v51 = ptr;
            while ( ++v51 != (_DWORD *)v50 )
            {
              if ( *v51 == 16 )
              {
                if ( (_DWORD)v11 == 14 )
                  goto LABEL_145;
LABEL_89:
                while ( 1 )
                {
                  if ( ++v49 == (_DWORD *)v50 )
                    goto LABEL_20;
                  if ( *v49 == 14 )
                    goto LABEL_145;
                }
              }
            }
          }
LABEL_20:
          switch ( (_DWORD)v253 )
          {
            case 'T':
              if ( v261 != 1 && v261 != 87 )
              {
                v11 = v262;
                v23 = v262;
                v252.m128_i16[0] = *(_WORD *)v262;
                v52 = v252.m128_i16[0] & 0x1FF;
                if ( (v252.m128_i16[0] & 0x1FF) == 0x3C )
                {
                  v23 = *(_QWORD *)(v262 + 16);
                  v52 = *(_WORD *)v23 & 0x1FF;
                }
LABEL_95:
                v276.m256i_i64[0] = 0;
                v289.m128i_i64[0] = 0;
                if ( ((v52 + 509) & 0x1FFu) > 0x7E )
                {
                  v53 = 0;
                  v54 = sub_EEB7E0(v23, v11, a7);
                  v276.m256i_i32[0] = v54;
                  v276.m256i_i32[1] = v54;
                  v55 = v54;
                  v289.m128i_i64[0] = v276.m256i_i64[0];
LABEL_97:
                  v56 = 4438;
LABEL_98:
                  sub_168B9F0((__int64)v296, v255, v55, v56, 0);
                  sub_15884C0((__int64)v296, v276.m256i_i64);
                  sub_15F7200(v296);
                  sub_168B9F0((__int64)v296, v255, v54, 0x1810u, 0);
                  if ( v300 )
                  {
                    sub_AE9DF0((unsigned __int8 **)v298, v53, 2u);
                  }
                  else if ( v302 )
                  {
                    v87 = sub_168B9E0(v296);
                    v90 = v297.m128_u64[0];
                    if ( v297.m128_u64[0] )
                      v90 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v297.m128_u64[0] + 32LL))(v297.m128_u64[0]);
                    v275 = v90;
                    v91 = sub_1587BC0(v87, &v275, v85, v86, v88, v89);
                    sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v301 + 8), v53, 2u);
                  }
                  v57 = &v289;
                  goto LABEL_101;
                }
                v82 = sub_BFBAE0(v23);
                if ( ((*(_WORD *)v82 + 394) & 0x1FFu) <= 1 )
                {
                  if ( ((*(_WORD *)(v82 + 2) >> 3) & 0x3F) == 0x15 )
                  {
                    v66 = sub_BFBAE0(*(_QWORD *)(v82 + 24));
                    v252.m128_u64[0] = sub_BFBAE0(*(_QWORD *)(v82 + 16));
                    if ( (*(_DWORD *)v66 & 0x8000) == 0
                      && !sub_F61140(
                            *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                            v11,
                            v148,
                            v149,
                            v150,
                            v151)
                      || (LODWORD(v253) = *(_DWORD *)v252.m128_u64[0], (v253 & 0x8000) == 0)
                      && (v253 = *(_QWORD *)(v252.m128_u64[0] + 8),
                          !sub_F61140(*(_QWORD *)(v253 & 0xFFFFFFFFFFFFFFF0LL), v11, v148, v149, v150, v151)) )
                    {
                      if ( (*(_DWORD *)v66 & 0x8000) != 0 )
                      {
                        LODWORD(v253) = *(_DWORD *)v252.m128_u64[0];
                        if ( (v253 & 0x8000) != 0 )
                          goto LABEL_161;
                      }
                      else
                      {
                        if ( sub_F61140(
                               *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                               v11,
                               v148,
                               v149,
                               v150,
                               v151) )
                        {
                          v66 = v252.m128_u64[0];
                        }
                        v252.m128_u64[0] = v66;
                      }
                      v190 = v82;
                      v55 = *(_DWORD *)(v82 + 4);
                      v53 = 2;
                      v276.m256i_i64[0] = sub_EEC8C0(v190, v11, a7);
                      v54 = sub_C00A40(v252.m128_u64[0], v11, v191, v192, v193);
                      v289.m128i_i64[0] = sub_EEC8C0(v252.m128_u64[0], v11, a7);
                      goto LABEL_97;
                    }
                    if ( ((*(_BYTE *)(v66 + 1) >> 1) & 3) == 1 )
                    {
                      v11 = v252.m128_u64[0];
                      LOBYTE(v253) = *(_BYTE *)(v252.m128_u64[0] + 1);
                      if ( (((unsigned __int8)v253 >> 1) & 3) == 1 )
                        goto LABEL_161;
                      v66 = v252.m128_u64[0];
                    }
                    v152 = v82;
                    v55 = *(_DWORD *)(v82 + 4);
                    v53 = 3;
                    v276.m256i_i64[0] = sub_EEC8C0(v152, v11, a7);
                    v54 = sub_C00A40(v66, v11, v153, v154, v155);
                    v289.m128i_i64[0] = sub_EEC8C0(v66, v11, a7);
                    goto LABEL_97;
                  }
                  if ( (*(_DWORD *)v23 & 0x8000) == 0 )
                  {
                    v55 = sub_C00A40(v23, v11, v79, v80, v81);
                    v115 = v82;
                    v276.m256i_i64[0] = sub_EEC8C0(v23, v11, a7);
                    v54 = *(_DWORD *)(v82 + 4);
                    v53 = 1;
                    v289.m128i_i64[0] = sub_EEC8C0(v115, v11, a7);
                    goto LABEL_97;
                  }
                }
                else if ( (*(_DWORD *)v23 & 0x8000) == 0 )
                {
                  v53 = 1;
                  v55 = sub_C00A40(v23, v11, v79, v80, v81);
                  v276.m256i_i64[0] = sub_EEC8C0(v23, v11, a7);
                  v54 = sub_C00A40(v23, v11, v145, v146, v147);
                  v289.m128i_i64[0] = sub_EEC8C0(v23, v11, a7);
                  goto LABEL_97;
                }
                v252.m128_u64[0] = 0;
                v66 = 0;
LABEL_161:
                v83 = sub_B8E180(*(_QWORD *)(*v255 + 544));
                v84 = v252.m128_u64[0];
                v70 = *v255;
                v258 = 0;
                if ( v83 )
                {
                  v84 = 0;
                  v66 = 0;
                }
                v68 = 0;
                v65 = 0;
                v256 = 0;
                v67 = 0;
                v69 = 0;
                v252.m128_u64[0] = v84;
                v254 = 0;
                v253 = 0;
                goto LABEL_142;
              }
              break;
            case 's':
            case 'l':
              if ( v261 - 1 > 1 )
              {
                LOWORD(v254) = *(_WORD *)v262;
                if ( (v254 & 0x1FF) != 0x3C )
                {
                  v23 = v262;
LABEL_121:
                  if ( (_DWORD)v253 == 115 )
                  {
                    v276.m256i_i64[0] = 0;
                    v289.m128i_i64[0] = 0;
                    if ( ((*(_WORD *)v23 + 509) & 0x1FFu) > 0x7E )
                    {
                      v53 = 0;
                      v55 = sub_EEB7E0(v23, v11, a7);
                      v276.m256i_i32[0] = v55;
                      v276.m256i_i32[1] = v55;
                      v54 = v55;
                      v289.m128i_i64[0] = v276.m256i_i64[0];
LABEL_124:
                      v56 = 4442;
                      goto LABEL_98;
                    }
                    v96 = sub_BFBAE0(v23);
                    if ( ((*(_WORD *)v96 + 394) & 0x1FFu) <= 1 )
                    {
                      if ( ((*(_WORD *)(v96 + 2) >> 3) & 0x3F) == 0x15 )
                      {
                        v66 = *(_QWORD *)(v96 + 16);
                        v253 = *(_QWORD *)(v96 + 24);
                        if ( (*(_DWORD *)v66 & 0x8000) != 0
                          || sub_F61140(
                               *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                               v11,
                               v92,
                               v93,
                               v94,
                               v95) )
                        {
                          v252.m128_i32[0] = *(_DWORD *)v253;
                          if ( v252.m128_i8[1] < 0
                            || (v252.m128_u64[0] = *(_QWORD *)(v253 + 8),
                                sub_F61140(
                                  *(_QWORD *)(v252.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL),
                                  v11,
                                  v92,
                                  v93,
                                  v94,
                                  v95)) )
                          {
                            if ( ((*(_BYTE *)(v66 + 1) >> 1) & 3) != 1 )
                            {
                              v175 = v96;
                              v55 = *(_DWORD *)(v96 + 4);
                              v53 = 3;
                              v276.m256i_i64[0] = sub_EEC8C0(v175, v11, a7);
                              v54 = sub_C00A40(v66, v11, v176, v177, v178);
                              v289.m128i_i64[0] = sub_EEC8C0(v66, v11, a7);
                              goto LABEL_124;
                            }
                            goto LABEL_170;
                          }
                        }
                        if ( (*(_DWORD *)v66 & 0x8000) != 0 )
                        {
                          v252.m128_i32[0] = *(_DWORD *)v253;
                          if ( v252.m128_i8[1] < 0 )
                            goto LABEL_170;
                        }
                        else
                        {
                          if ( sub_F61140(
                                 *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                                 v11,
                                 v92,
                                 v93,
                                 v94,
                                 v95) )
                          {
                            v66 = v253;
                          }
                          v253 = v66;
                        }
                        v179 = v96;
                        v55 = *(_DWORD *)(v96 + 4);
                        v53 = 2;
                        v276.m256i_i64[0] = sub_EEC8C0(v179, v11, a7);
                        v54 = sub_C00A40(v253, v11, v180, v181, v182);
                        v289.m128i_i64[0] = sub_EEC8C0(v253, v11, a7);
                        goto LABEL_124;
                      }
                      if ( (*(_DWORD *)v23 & 0x8000) == 0 )
                      {
                        v55 = sub_C00A40(v23, v11, v92, v93, v94);
                        v128 = v96;
                        v276.m256i_i64[0] = sub_EEC8C0(v23, v11, a7);
                        v54 = *(_DWORD *)(v96 + 4);
                        v53 = 1;
                        v289.m128i_i64[0] = sub_EEC8C0(v128, v11, a7);
                        goto LABEL_124;
                      }
                    }
                    else if ( (*(_DWORD *)v23 & 0x8000) == 0 )
                    {
                      v53 = 1;
                      v55 = sub_C00A40(v23, v11, v92, v93, v94);
                      v276.m256i_i64[0] = sub_EEC8C0(v23, v11, a7);
                      v54 = sub_C00A40(v23, v11, v163, v164, v165);
                      v289.m128i_i64[0] = sub_EEC8C0(v23, v11, a7);
                      goto LABEL_124;
                    }
                    v253 = 0;
                    v66 = 0;
LABEL_170:
                    v97 = sub_B8E180(*(_QWORD *)(*v255 + 544));
                    v98 = v253;
                    v70 = *v255;
                    v258 = 0;
                    if ( v97 )
                    {
                      v98 = 0;
                      v66 = 0;
                    }
                    v68 = 0;
                    v65 = 0;
                    v67 = 0;
                    v69 = 0;
                    v256 = 0;
                    v253 = v98;
                    v254 = 0;
                    v252.m128_u64[0] = 0;
                    goto LABEL_142;
                  }
LABEL_130:
                  if ( (((_DWORD)v253 - 106) & 0xFFFFFFFD) == 0 )
                  {
                    LODWORD(v296[1]) = 0;
                    v24 = 0;
                    *(_QWORD *)v298 = 0;
                    v64 = (void *)*v255;
                    v298[8] = 0;
                    v298[20] = 0;
                    v25 = 3 * ((_DWORD)v253 == 108) + 4437;
                    v296[0] = v64;
                    *(_QWORD *)&v298[12] = 0;
                    v297 = 0;
LABEL_138:
                    v65 = sub_1B1DB70(v296, v23, v25, 0x1811u, v24, a8);
                    if ( v65 )
                      goto LABEL_60;
                    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*v255 + 544)) )
                    {
                      v254 = 0;
                      v67 = 0;
                      v66 = 0;
                      v253 = 0;
                    }
                    else
                    {
                      v66 = v297.m128_u64[0];
                      v67 = v298[8];
                      v253 = v297.m128_u64[1];
                      v254 = *(_QWORD *)v298;
                    }
                    v68 = 0;
                    v69 = 0;
                    v258 = 0;
                    v256 = 0;
                    v252.m128_u64[0] = 0;
                    v70 = *v255;
                    goto LABEL_142;
                  }
                  if ( (_DWORD)v253 == 14 )
                  {
                    v274 = 0;
                    v275 = 0;
                    v61 = *(_WORD *)v23;
                    LODWORD(v258) = 0;
                    v62 = v61 & 0x1FF;
                    if ( v62 <= 2u )
                    {
LABEL_133:
                      LODWORD(v259) = sub_EEB7E0(v23, v11, a7);
                      LODWORD(v258) = (_DWORD)v259;
                      HIDWORD(v274) = sub_EEB7E0(v23, v11, a7);
                      v63 = 1;
                      LODWORD(v274) = sub_EEB7E0(v23, v11, a7);
                      v275 = v274;
                      goto LABEL_134;
                    }
                    if ( v62 <= 0x81u )
                    {
                      v102 = sub_BFBAE0(v23);
                      if ( ((*(_WORD *)v102 + 394) & 0x1FFu) <= 1 )
                      {
                        if ( ((*(_WORD *)(v102 + 2) >> 3) & 0x3F) == 0x15 )
                        {
                          v197 = *(_QWORD *)(v102 + 24);
                          v252.m128_u64[0] = *(_QWORD *)(v102 + 16);
                          v198 = sub_BFBAE0(v197);
                          LODWORD(v296[1]) = 0;
                          v199 = (void *)*v255;
                          v297 = 0;
                          *(_QWORD *)v298 = 0;
                          v296[0] = v199;
                          v298[8] = 0;
                          *(_QWORD *)&v298[12] = 0;
                          v298[20] = 0;
                          if ( (unsigned __int8)sub_1B1DB70(v296, v198, 0x114Fu, 0x1811u, (__m128)0LL, a8) )
                            goto LABEL_60;
                          v66 = v297.m128_u64[0];
                          v67 = v298[8];
                          v65 = v298[20];
                          v253 = v297.m128_u64[1];
                          v254 = *(_QWORD *)v298;
                          goto LABEL_178;
                        }
                        if ( (*(_DWORD *)v23 & 0x8000) != 0 )
                        {
LABEL_177:
                          v254 = 0;
                          v65 = 0;
                          v67 = 0;
                          v66 = 0;
                          v253 = 0;
                          v252.m128_u64[0] = 0;
LABEL_178:
                          v103 = sub_B8E180(*(_QWORD *)(*v255 + 544));
                          v104 = v254;
                          v105 = v253;
                          if ( v103 )
                          {
                            v104 = 0;
                            v105 = 0;
                            v66 = 0;
                          }
                          v254 = v104;
                          v106 = v252.m128_u64[0];
                          v253 = v105;
                          if ( v103 )
                            v106 = 0;
                          v252.m128_u64[0] = v106;
                          goto LABEL_183;
                        }
                        v166 = sub_C00A40(v23, v11, v99, v100, v101);
                        v274 = sub_EEC8C0(v23, v11, a7);
                        LODWORD(v258) = *(_DWORD *)(v102 + 4);
                        v275 = sub_EEC8C0(v102, v11, a7);
                      }
                      else
                      {
                        if ( (*(_DWORD *)v23 & 0x8000) != 0 )
                          goto LABEL_177;
                        v166 = sub_C00A40(v23, v11, v99, v100, v101);
                        v274 = sub_EEC8C0(v23, v11, a7);
                        LODWORD(v258) = sub_C00A40(v23, v11, v194, v195, v196);
                        v275 = sub_EEC8C0(v23, v11, a7);
                      }
                      sub_168B9F0((__int64)v296, v255, v166, 0x114Fu, 0);
                      sub_15884C0((__int64)v296, &v274);
                      sub_15F7200(v296);
                      sub_168B9F0((__int64)v296, v255, v258, 0x180Eu, 0);
                      if ( v300 )
                      {
                        sub_AE9DF0((unsigned __int8 **)v298, 0, 2u);
                      }
                      else if ( v302 )
                      {
                        v169 = sub_168B9E0(v296);
                        v172 = v297.m128_u64[0];
                        if ( v297.m128_u64[0] )
                          v172 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v297.m128_u64[0] + 32LL))(v297.m128_u64[0]);
                        v289.m128i_i64[0] = v172;
                        v173 = sub_1587BC0(v169, v289.m128i_i64, v167, v168, v170, v171);
                        sub_AE9DF0((unsigned __int8 **)(*v173 + 32LL * v301 + 8), 0, 2u);
                      }
                      goto LABEL_136;
                    }
                    if ( v62 != 249 )
                      goto LABEL_133;
                    if ( *(_DWORD *)(v23 + 4) != 2 )
                    {
                      LODWORD(v259) = sub_EEB7E0(v23, v11, a7);
                      LODWORD(v258) = (_DWORD)v259;
                      HIDWORD(v274) = sub_EEB7E0(v23, v11, a7);
                      v63 = 2;
                      LODWORD(v274) = sub_EEB7E0(v23, v11, a7);
                      v275 = v274;
                      goto LABEL_134;
                    }
                    v129 = *(_QWORD *)(v23 + 16);
                    v256 = *(_QWORD *)(v23 + 24);
                    if ( (*(_WORD *)v129 & 0x1FF) == 0x3C )
                      v129 = sub_BFBAE0(*(_QWORD *)(v129 + 16));
                    v252.m128_i16[0] = *(_WORD *)v256;
                    if ( (v252.m128_i16[0] & 0x1FF) == 0x3C )
                    {
                      v130 = *(_QWORD *)(v256 + 16);
                      v252.m128_u64[0] = v129;
                      v131 = sub_BFBAE0(v130);
                      v129 = v252.m128_u64[0];
                      v256 = v131;
                    }
                    v252.m128_u64[0] = v129;
                    v132 = *v255;
                    v276.m256i_i32[2] = 0;
                    *(_OWORD *)&v276.m256i_u64[2] = 0;
                    v276.m256i_i64[0] = v132;
                    v277 = 0;
                    v278 = 0;
                    v279 = 0;
                    v280 = 0;
                    v133 = sub_1B1DB70(&v276, v256, 0, 0, (__m128)0LL, a8);
                    v134 = (__int64 *)v252.m128_u64[0];
                    v67 = v133;
                    if ( v133 )
                    {
                      v65 = 0;
                      v67 = 0;
                      v66 = 0;
                      v254 = 0;
                      v253 = 0;
                      v252.m128_u64[0] = 0;
                    }
                    else if ( ((*(_WORD *)v252.m128_u64[0] + 394) & 0x1FFu) <= 1
                           && ((*(_WORD *)(v252.m128_u64[0] + 2) >> 3) & 0x3F) == 0x15 )
                    {
                      if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*v255 + 544)) )
                      {
                        v65 = 0;
                        v252.m128_u64[0] = 0;
                        v66 = 0;
                        v254 = 0;
                        v253 = 0;
                        goto LABEL_183;
                      }
                      v200 = sub_BFBAE0(*(_QWORD *)(v252.m128_u64[0] + 24));
                      v289.m128i_i64[0] = (__int64)&v290;
                      v296[0] = &v297;
                      v289.m128i_i64[1] = 0x2000000000LL;
                      v296[1] = (void *)0x2000000000LL;
                      sub_F1A490(v276.m256i_i64[2], (__int64)&v289, v268, 1, 0);
                      sub_F1A490(v200, (__int64)v296, v268, 1, 0);
                      v201 = sub_2222ED0(&v289, v296);
                      v134 = (__int64 *)v252.m128_u64[0];
                      if ( v201 )
                      {
                        v65 = v201;
                        v66 = v276.m256i_i64[2];
                        v67 = v278;
                        v252.m128_u64[0] = *(_QWORD *)(v252.m128_u64[0] + 16);
                        v254 = v277;
                        v253 = v276.m256i_u64[3];
                      }
                      else
                      {
                        v65 = 0;
                        v67 = 0;
                        v66 = 0;
                        v254 = 0;
                        v253 = 0;
                        v252.m128_u64[0] = 0;
                      }
                      if ( v296[0] != &v297 )
                      {
                        LOBYTE(v260) = v201;
                        v259 = (__m128i *)v134;
                        free(v296[0]);
                        v201 = (char)v260;
                        v134 = (__int64 *)v259;
                      }
                      if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
                      {
                        LOBYTE(v260) = v201;
                        v259 = (__m128i *)v134;
                        free((void *)v289.m128i_i64[0]);
                        v201 = (char)v260;
                        v134 = (__int64 *)v259;
                      }
                      if ( v201 )
                        goto LABEL_183;
                    }
                    else
                    {
                      v254 = 0;
                      v65 = 0;
                      v66 = 0;
                      v253 = 0;
                      v252.m128_u64[0] = 0;
                    }
                    v259 = (__m128i *)v134;
                    v135 = sub_1B1DB70(&v276, (unsigned __int64)v134, 0, 0, (__m128)0LL, a8);
                    v136 = (__int64 *)v259;
                    v137 = *(_WORD *)v256;
                    if ( !v135 && ((v137 + 394) & 0x1FFu) <= 1 )
                    {
                      LOWORD(v259) = *(_WORD *)(v256 + 2);
                      if ( (((unsigned __int16)v259 >> 3) & 0x3F) == 0x15 )
                      {
                        v259 = (__m128i *)v136;
                        if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*v255 + 544)) )
                          goto LABEL_183;
                        v202 = sub_BFBAE0(*(_QWORD *)(v256 + 24));
                        v296[0] = &v297;
                        v289.m128i_i64[0] = (__int64)&v290;
                        v289.m128i_i64[1] = 0x2000000000LL;
                        v296[1] = (void *)0x2000000000LL;
                        sub_F1A490(v276.m256i_i64[2], (__int64)&v289, v268, 1, 0);
                        sub_F1A490(v202, (__int64)v296, v268, 1, 0);
                        v203 = sub_2222ED0(&v289, v296);
                        v136 = (__int64 *)v259;
                        v204 = v203;
                        if ( v203 )
                        {
                          v66 = v276.m256i_i64[2];
                          v65 = 0;
                          v67 = v278;
                          v252.m128_u64[0] = *(_QWORD *)(v256 + 16);
                          v253 = v276.m256i_u64[3];
                          v254 = v277;
                        }
                        if ( v296[0] != &v297 )
                        {
                          free(v296[0]);
                          v136 = (__int64 *)v259;
                        }
                        if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
                        {
                          v259 = (__m128i *)v136;
                          free((void *)v289.m128i_i64[0]);
                          v136 = (__int64 *)v259;
                        }
                        if ( v204 )
                          goto LABEL_183;
                        v137 = *(_WORD *)v256;
                      }
                    }
                    v138 = v137 & 0x1FF;
                    v139 = *(_WORD *)v136 & 0x1FF;
                    v140 = (unsigned int)(v139 + 509);
                    LOWORD(v140) = (v139 + 509) & 0x1FF;
                    if ( (unsigned __int16)v140 > 0x7Eu
                      || ((v138 + 509) & 0x1FFu) > 0x7E
                      || (*(_DWORD *)v136 & 0x8000) == 0
                      && (LODWORD(v259) = *(_DWORD *)v256,
                          v140 = (unsigned __int16)v259 & 0x8000,
                          ((unsigned __int16)v259 & 0x8000) == 0) )
                    {
                      v141 = (unsigned __int64)v136;
                      if ( (((_WORD)v139 + 394) & 0x1FFu) > 1 )
                      {
LABEL_251:
                        LODWORD(v258) = sub_EEB7E0(v141, v140, 0.0);
                        LODWORD(v259) = v258;
                        LODWORD(v274) = v258;
                        HIDWORD(v274) = v258;
LABEL_252:
                        v63 = 0;
                        v275 = v274;
LABEL_134:
                        sub_168B9F0((__int64)v296, v255, (unsigned int)v259, 0x114Eu, 0);
                        sub_15884C0((__int64)v296, &v274);
                        sub_15F7200(v296);
                        sub_168B9F0((__int64)v296, v255, v258, 0x180Eu, 0);
                        if ( v300 )
                        {
                          sub_AE9DF0((unsigned __int8 **)v298, v63, 2u);
                        }
                        else if ( v302 )
                        {
                          v160 = sub_168B9E0(v296);
                          v161 = v297.m128_u64[0];
                          if ( v297.m128_u64[0] )
                            v161 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v297.m128_u64[0] + 32LL))(v297.m128_u64[0]);
                          v289.m128i_i64[0] = v161;
                          v162 = sub_1587BC0(v160, v289.m128i_i64, v156, v157, v158, v159);
                          sub_AE9DF0((unsigned __int8 **)(*v162 + 32LL * v301 + 8), v63, 2u);
                        }
LABEL_136:
                        v57 = (__m128i *)&v275;
                        goto LABEL_101;
                      }
                      if ( ((*((_WORD *)v136 + 1) >> 3) & 0x3F) != 0x15 )
                      {
                        LODWORD(v258) = *((_DWORD *)v136 + 1);
                        LODWORD(v259) = v258;
                        v274 = sub_EEC8C0((unsigned __int64)v136, v140, 0.0);
                        goto LABEL_252;
                      }
                      if ( ((v138 + 394) & 0x1FFu) > 1 )
                      {
                        v141 = v256;
                        goto LABEL_251;
                      }
                      LOWORD(v259) = *(_WORD *)(v256 + 2);
                      if ( (((unsigned __int16)v259 >> 3) & 0x3F) != 0x15 )
                      {
                        LODWORD(v258) = *(_DWORD *)(v256 + 4);
                        LODWORD(v259) = v258;
                        v274 = sub_EEC8C0(v256, v140, 0.0);
                        goto LABEL_252;
                      }
                      v241 = v136[3];
                      v260 = (unsigned __int64 *)v136;
                      v242 = sub_BFBAE0(v241);
                      v243 = (__int64 *)sub_BFBAE0(*(_QWORD *)(v256 + 16));
                      v289.m128i_i64[0] = (__int64)&v290;
                      v296[0] = &v297;
                      v289.m128i_i64[1] = 0x2000000000LL;
                      v296[1] = (void *)0x2000000000LL;
                      v259 = (__m128i *)v243;
                      sub_F1A490(v242, (__int64)&v289, v268, 1, 0);
                      sub_F1A490((__int64)v259, (__int64)v296, v268, 1, 0);
                      v244 = sub_2222ED0(&v289, v296);
                      if ( v244 )
                      {
                        v245 = v260[2];
                        LODWORD(v259) = 0;
                        v65 = v244;
                        v67 = 0;
                        v254 = 0;
                        v252.m128_u64[0] = v245;
                        v246 = v256;
                        LODWORD(v256) = 4;
                        v66 = *(_QWORD *)(v246 + 16);
                        v253 = *(_QWORD *)(v246 + 24);
                      }
                      else
                      {
                        LODWORD(v259) = *((_DWORD *)v260 + 1);
                        v274 = sub_EEC8C0((unsigned __int64)v260, (__int64)v296, 0.0);
                        v250 = sub_C00A40(*(_QWORD *)(v256 + 16), (__int64)v296, v247, v248, v249);
                        v251 = *(_QWORD *)(v256 + 24);
                        LODWORD(v258) = v250;
                        LODWORD(v256) = 3;
                        v275 = sub_EEC8C0(v251, (__int64)v296, 0.0);
                      }
                      if ( v296[0] != &v297 )
                        free(v296[0]);
                      if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
                        free((void *)v289.m128i_i64[0]);
                      v63 = 3;
                      if ( (_DWORD)v256 != 4 )
                        goto LABEL_134;
                    }
LABEL_183:
                    v107 = sub_B8E180(*(_QWORD *)(*v255 + 544));
                    v108 = v254;
                    v70 = *v255;
                    v258 = 0;
                    v109 = v253;
                    if ( v107 )
                    {
                      v108 = 0;
                      v66 = 0;
                    }
                    v256 = 0;
                    if ( v107 )
                      v109 = 0;
                    v254 = v108;
                    v110 = v252.m128_u64[0];
                    v253 = v109;
                    if ( v107 )
                      v110 = 0;
                    v68 = 0;
                    v69 = 0;
                    v252.m128_u64[0] = v110;
                    goto LABEL_142;
                  }
                  v70 = *v255;
                  if ( (_DWORD)v253 != 16 )
                  {
                    v68 = 0;
                    v65 = 0;
                    v67 = 0;
                    v69 = 0;
                    v258 = 0;
                    v66 = 0;
                    v256 = 0;
                    v254 = 0;
                    v253 = 0;
                    v252.m128_u64[0] = 0;
LABEL_142:
                    sub_15F2480(v70);
                    v255 = (__int64 *)v66;
                    BYTE1(v299) = v65;
                    v71 = _mm_loadh_ps((const double *)&v256);
                    *(_QWORD *)&v298[16] = v69;
                    v72 = _mm_loadh_ps((const double *)&v253);
                    v73 = _mm_loadh_ps((const double *)v252.m128_u64);
                    *(__m128 *)v298 = v71;
                    *(__m128 *)v296 = v73;
                    v297 = v72;
                    LOBYTE(v299) = v67;
                    BYTE2(v299) = v68;
                    v252 = v73;
                    v10 = sub_EF7980(
                            v268,
                            v269,
                            v270,
                            v266,
                            v267,
                            v262,
                            v73.m128_i64[0],
                            v73.m128_i64[1],
                            v72.m128_i64[0],
                            v72.m128_i64[1],
                            v71.m128_i64[0],
                            v71.m128_i64[1],
                            v69,
                            v299);
                    goto LABEL_61;
                  }
                  v111 = *(_QWORD *)(v70 + 248);
                  memset((char *)v276.m256i_i64 + 4, 0, 24);
                  v289 = (__m128i)v111;
                  v112 = *(_WORD *)v23 & 0x1FF;
                  v290 = 0;
                  v291 = 0;
                  v292 = 0;
                  v293 = 1;
                  if ( v112 == 249 )
                  {
                    v113 = *(_DWORD *)(v23 + 4);
                    if ( !v113 )
                    {
                      v276.m256i_i32[0] = 0;
                      goto LABEL_198;
                    }
                    if ( v113 != 1 )
                    {
                      v276.m256i_i32[0] = 1;
LABEL_198:
                      v276.m256i_i32[4] = *(_DWORD *)(v23 + 8);
                      v276.m256i_i32[1] = v276.m256i_i32[4];
                      *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v23, v11, 0.0);
                      v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
LABEL_199:
                      v114 = 4432;
                      goto LABEL_200;
                    }
                    v23 = *(_QWORD *)(v23 + 16);
                    v112 = *(_WORD *)v23 & 0x1FF;
                  }
                  if ( v112 == 241 )
                    v116 = sub_1AF1A30((__int64)&v289, (__int64 *)v23, (__int64)&v276, 0.0);
                  else
                    v116 = sub_1AE8820((__int64)&v289, v23, (__int64)&v276, 0.0);
                  if ( !v116 )
                    goto LABEL_199;
                  if ( !(unsigned __int8)sub_1AF02B0(v289.m128i_u64[1], (__int64)&v276, 1, 0, v117, v118, 0.0) )
                    goto LABEL_199;
                  v121 = &v276;
                  if ( !(unsigned __int8)sub_1AF02B0(v290, (__int64)&v276, 0, 0, v119, v120, 0.0) )
                    goto LABEL_199;
                  if ( v291 )
                  {
                    v121 = &v276;
                    if ( !(unsigned __int8)sub_1AF02B0(v291, (__int64)&v276, 0, 0, v122, v123, 0.0) )
                      goto LABEL_199;
                  }
                  v69 = v292;
                  if ( v273 >> 5 <= 0 )
                  {
                    v125 = v266;
                  }
                  else
                  {
                    v121 = (__m256i *)v266;
                    if ( *(_DWORD *)(*(_QWORD *)v266 + 8LL) == 113 )
                    {
                      v125 = v266;
                      goto LABEL_231;
                    }
                    if ( *(_DWORD *)(*((_QWORD *)v266 + 1) + 8LL) == 113 )
                    {
                      v125 = v266 + 8;
                      goto LABEL_231;
                    }
                    if ( *(_DWORD *)(*((_QWORD *)v266 + 2) + 8LL) == 113 )
                    {
                      v125 = v266 + 16;
                      goto LABEL_231;
                    }
                    v124 = v266;
                    v121 = *((__m256i **)v266 + 3);
                    v125 = v266 + 24;
                    if ( v121->m256i_i32[2] == 113 )
                      goto LABEL_231;
                    while ( 1 )
                    {
                      v125 = v124 + 32;
                      if ( &v266[32 * (v273 >> 5)] == v124 + 32 )
                        break;
                      v121 = *((__m256i **)v124 + 4);
                      if ( v121->m256i_i32[2] == 113 )
                        goto LABEL_231;
                      v121 = *((__m256i **)v124 + 5);
                      if ( v121->m256i_i32[2] == 113 )
                      {
                        v125 = v124 + 40;
                        goto LABEL_231;
                      }
                      v121 = *((__m256i **)v124 + 6);
                      if ( v121->m256i_i32[2] == 113 )
                      {
                        v125 = v124 + 48;
                        goto LABEL_231;
                      }
                      v121 = *((__m256i **)v124 + 7);
                      if ( v121->m256i_i32[2] == 113 )
                      {
                        v125 = v124 + 56;
                        goto LABEL_231;
                      }
                      v124 += 32;
                    }
                  }
                  v126 = (__int64)(v252.m128_u64[0] - (_QWORD)v125) >> 3;
                  if ( v126 != 2 )
                  {
                    if ( v126 != 3 )
                    {
                      if ( v126 != 1 )
                        goto LABEL_229;
                      goto LABEL_317;
                    }
                    if ( *(_DWORD *)(*(_QWORD *)v125 + 8LL) == 113 )
                    {
LABEL_231:
                      if ( (char *)v252.m128_u64[0] != v125 )
                      {
                        if ( ((*(_WORD *)v292 + 394) & 0x1FFu) > 1 )
                          BUG();
                        if ( ((*(_WORD *)(v292 + 2) >> 3) & 0x3F) != 0xE )
                        {
                          v276.m256i_i32[0] = 2;
                          v276.m256i_i32[1] = *(_DWORD *)(v292 + 4);
                          v127 = v276.m256i_u32[1];
                          v276.m256i_i32[4] = *(_DWORD *)(v292 + 4);
                          *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v292, (__int64)v121, 0.0);
                          v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
                          sub_168B9F0((__int64)v296, v255, v127, 0x1159u, 0);
                          v57 = (__m128i *)&v276.m256i_u64[1];
                          goto LABEL_101;
                        }
                      }
                      goto LABEL_229;
                    }
                    v125 += 8;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)v125 + 8LL) != 113 )
                  {
                    v125 += 8;
LABEL_317:
                    if ( *(_DWORD *)(*(_QWORD *)v125 + 8LL) == 113 )
                      goto LABEL_231;
LABEL_229:
                    v66 = v289.m128i_i64[1];
                    v68 = 0;
                    v65 = 0;
                    v67 = v293;
                    v252.m128_u64[0] = 0;
                    v253 = v290;
                    v258 = 0;
                    v256 = v291;
                    v254 = 0;
                    v70 = *v255;
                    goto LABEL_142;
                  }
                  goto LABEL_231;
                }
                goto LABEL_93;
              }
              break;
            case 'j':
              goto LABEL_24;
            default:
              v23 = v262;
              LOWORD(v254) = *(_WORD *)v262;
              if ( (v254 & 0x1FF) != 0x3C )
                goto LABEL_130;
              goto LABEL_93;
          }
          sub_168B9F0((__int64)v296, v255, v258, 0x1153u, 0);
          sub_1AF81E0((__m128i *)&v276, v253);
          v58 = sub_1682AF0((__int64)v296, (__int64)&v276);
          v59 = 0;
          goto LABEL_113;
        }
        v19 = (void **)v285;
        if ( !v285 )
          goto LABEL_20;
        v11 = (__int64)p_ptr;
        v20 = (void **)v285;
        v21 = p_ptr + 4;
        do
        {
          while ( *((int *)v20 + 8) > 15 )
          {
            v21 = v20;
            v20 = (void **)v20[2];
            if ( !v20 )
              goto LABEL_18;
          }
          v20 = (void **)v20[3];
        }
        while ( v20 );
LABEL_18:
        v22 = p_ptr + 4;
        if ( v21 == p_ptr + 4 || *((int *)v21 + 8) > 16 )
          goto LABEL_20;
        do
        {
          if ( *((int *)v19 + 8) > 13 )
          {
            v22 = v19;
            v19 = (void **)v19[2];
          }
          else
          {
            v19 = (void **)v19[3];
          }
        }
        while ( v19 );
        if ( v22 == p_ptr + 4 || *((int *)v22 + 8) > 14 )
          goto LABEL_20;
LABEL_145:
        v74 = v262;
        v252.m128_i16[0] = *(_WORD *)v262;
        if ( (v252.m128_i16[0] & 0x1FF) == 0x3C )
          v74 = *(_QWORD *)(v262 + 16);
        v75 = *(_QWORD *)(*v255 + 248);
        memset((char *)v276.m256i_i64 + 4, 0, 24);
        v295 = 0;
        v76 = *(_WORD *)v74;
        v289 = (__m128i)(unsigned __int64)v75;
        v77 = v76 & 0x1FF;
        v290 = 0;
        v291 = 0;
        v292 = 0;
        v293 = 1;
        v294 = 0;
        if ( v77 == 241 )
        {
LABEL_148:
          v78 = sub_1AF1F30((__int64)&v289, (__int64 *)v74, (__int64)&v276, 0.0);
          goto LABEL_149;
        }
        if ( v77 != 249 )
        {
          v276.m256i_i32[0] = 16;
          v174 = sub_EEB7E0(v74, v11, 0.0);
LABEL_283:
          v276.m256i_i32[4] = v174;
          v276.m256i_i32[1] = v174;
LABEL_284:
          *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v74, v11, 0.0);
          v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
          goto LABEL_260;
        }
        v142 = *(_DWORD *)(v74 + 4);
        if ( !v142 )
        {
LABEL_300:
          v276.m256i_i32[0] = 0;
LABEL_301:
          v174 = *(_DWORD *)(v74 + 8);
          goto LABEL_283;
        }
        if ( v142 == 1 )
        {
          v74 = *(_QWORD *)(v74 + 16);
          if ( (*(_WORD *)v74 & 0x1FF) == 0xF1 )
            goto LABEL_148;
          v276.m256i_i32[0] = 14;
          v174 = sub_EEB7E0(v74, v11, 0.0);
          goto LABEL_283;
        }
        if ( v142 != 2 )
        {
          v276.m256i_i32[0] = 15;
          goto LABEL_301;
        }
        v143 = *(_QWORD *)(v74 + 16);
        v74 = *(_QWORD *)(v74 + 24);
        v144 = *(_WORD *)v143 & 0x1FF;
        if ( ((v144 + 394) & 0x1FFu) <= 1 )
        {
          v207 = (_WORD *)sub_BFB840(*(_QWORD *)(v143 + 24));
          v208 = *(_WORD *)v74 & 0x1FF;
          v209 = *v207 & 0x1FF;
          if ( v209 <= 0x75u || v209 > 0x77u && v209 != 128 )
          {
            HIBYTE(v295) = 1;
            if ( v208 == 241 )
            {
              v205 = v74;
              v74 = v143;
              v143 = v205;
              goto LABEL_352;
            }
            v210 = v143;
            v143 = v74;
            v74 = v210;
LABEL_359:
            v206 = v143;
            if ( (unsigned __int8)sub_1AE8820((__int64)&v289, v143, (__int64)&v276, 0.0) )
              goto LABEL_353;
            goto LABEL_260;
          }
          if ( v208 != 241 )
            goto LABEL_359;
          v11 = *(_QWORD *)(v143 + 16);
          if ( !(unsigned __int8)sub_1AE6CD0(
                                   v75,
                                   v11,
                                   *(_QWORD *)(v74
                                             + 8LL
                                             * (((*(_QWORD *)v74 & 0x2000) != 0) + ((*(_QWORD *)v74 & 0x4000) != 0))
                                             + 16)) )
          {
            v215 = *(_QWORD *)v74;
            v276.m256i_i32[0] = 18;
            v276.m256i_i32[4] = sub_C00A40(
                                  *(_QWORD *)(v74 + 8LL * (((v215 & 0x2000) != 0) + ((v215 & 0x4000) != 0)) + 16),
                                  v11,
                                  (v215 & 0x2000) != 0,
                                  v211,
                                  v212);
            v276.m256i_i32[1] = v276.m256i_i32[4];
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(*(_QWORD *)(v143 + 16), v11, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
          *((_QWORD *)&v294 + 1) = *(_QWORD *)(v143 + 16);
          v213 = *(_QWORD *)(v74
                           + 8LL
                           * (((*(_QWORD *)v74 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)v74 & 0x2000) != 0) + 1)
                           + 16);
          if ( (*(_WORD *)v213 & 0x1FF) == 0xF9 )
          {
            v214 = *(_DWORD *)(v213 + 4);
            if ( v214 )
            {
              if ( v214 <= 1 )
              {
                v213 = *(_QWORD *)(v213 + 16);
                goto LABEL_368;
              }
              v276.m256i_i32[0] = 1;
            }
            else
            {
              v276.m256i_i32[0] = 0;
            }
            v276.m256i_i32[4] = *(_DWORD *)(v213 + 8);
            v276.m256i_i32[1] = v276.m256i_i32[4];
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v213, v11, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
LABEL_368:
          if ( ((*(_WORD *)v213 + 394) & 0x1FFu) > 1 )
          {
            v276.m256i_i32[0] = 2;
            v174 = *(_DWORD *)(v74 + 4);
            goto LABEL_283;
          }
          if ( ((*(_WORD *)(v213 + 2) >> 3) & 0x3F) != 0x15 )
          {
            v276.m256i_i32[0] = 2;
            v276.m256i_i32[1] = *(_DWORD *)(v213 + 4);
            v276.m256i_i32[4] = *(_DWORD *)(v213 + 4);
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v213, v11, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
          v216 = *(_QWORD *)(v213 + 16);
          v289.m128i_i64[1] = v216;
          v291 = *(_QWORD *)(v213 + 24);
          v217 = sub_BFB840(*(_QWORD *)(v143 + 24));
          if ( ((*(_WORD *)(v217 + 2) >> 3) & 0x3F) != 0xE )
          {
            v276.m256i_i32[0] = 12;
            v276.m256i_i32[1] = *(_DWORD *)(v217 + 4);
            v276.m256i_i32[4] = *(_DWORD *)(v217 + 4);
LABEL_379:
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v217, v11, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
          v292 = v217;
          v11 = v216;
          if ( (unsigned __int8)sub_1AE6CD0(v289.m128i_i64[0], v216, *(_QWORD *)(v217 + 16)) )
          {
            v290 = *(_QWORD *)(v217 + 24);
          }
          else
          {
            v11 = v289.m128i_i64[1];
            if ( !(unsigned __int8)sub_1AE6CD0(v289.m128i_i64[0], v289.m128i_u64[1], *(_QWORD *)(v217 + 24)) )
            {
              v276.m256i_i32[0] = 7;
              v276.m256i_i32[4] = *(_DWORD *)(v217 + 4);
              v276.m256i_i32[1] = v276.m256i_i32[4];
              goto LABEL_379;
            }
            v290 = *(_QWORD *)(v217 + 16);
          }
          if ( !sub_F04E60((_QWORD *)v74) )
            goto LABEL_394;
          LOBYTE(v295) = 1;
          v74 = sub_F04E60((_QWORD *)v74);
          if ( (*(_WORD *)v74 & 0x1FF) != 0xF9 )
          {
LABEL_390:
            if ( ((*(_WORD *)v74 + 394) & 0x1FFu) > 1 )
            {
              v276.m256i_i32[0] = 2;
              v174 = sub_EEB7E0(v74, v11, 0.0);
              goto LABEL_283;
            }
            if ( ((*(_WORD *)(v74 + 2) >> 3) & 0x3F) != 0x15 )
            {
              v276.m256i_i32[0] = 2;
              v276.m256i_i32[1] = *(_DWORD *)(v74 + 4);
              v276.m256i_i32[4] = *(_DWORD *)(v74 + 4);
              goto LABEL_284;
            }
            v228 = v289.m128i_i64[1];
            if ( !(unsigned __int8)sub_1AE6CD0(v289.m128i_i64[0], v289.m128i_u64[1], *(_QWORD *)(v74 + 24)) )
            {
              v276.m256i_i32[0] = 13;
              v235 = *(_QWORD *)(v74 + 24);
              v236 = sub_C00A40(v235, v228, v223, v224, v225);
              v237 = v289.m128i_u64[1];
              v276.m256i_i32[1] = v236;
              v276.m256i_i32[4] = sub_C00A40(v289.m128i_u64[1], v228, v238, v239, v240);
              v276.m256i_i64[1] = sub_EEC8C0(v235, v228, 0.0);
              *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v237, v228, 0.0);
              goto LABEL_260;
            }
            *(_QWORD *)&v294 = *(_QWORD *)(v74 + 16);
LABEL_394:
            v78 = sub_1AF03A0(&v289, (__int64)&v276, v223, v224, v225, v226, 0.0);
LABEL_149:
            if ( !v78 )
              goto LABEL_260;
            v66 = v289.m128i_i64[1];
            v254 = 0;
            v69 = v292;
            v67 = v293;
            v253 = v290;
            v68 = v295;
            v65 = HIBYTE(v295);
            v256 = v291;
            v258 = *((_QWORD *)&v294 + 1);
            v252.m128_u64[0] = v294;
            v70 = *v255;
            goto LABEL_142;
          }
          v227 = *(_DWORD *)(v74 + 4);
          if ( v227 )
          {
            if ( v227 <= 1 )
            {
              v74 = *(_QWORD *)(v74 + 16);
              goto LABEL_390;
            }
            v276.m256i_i32[0] = 1;
            goto LABEL_301;
          }
          goto LABEL_300;
        }
        if ( v144 != 241 )
        {
          v276.m256i_i32[0] = 14;
          v276.m256i_i32[4] = sub_EEB7E0(v143, v11, 0.0);
          v276.m256i_i32[1] = v276.m256i_i32[4];
          *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v143, v11, 0.0);
          v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
          goto LABEL_260;
        }
LABEL_352:
        v206 = v143;
        if ( (unsigned __int8)sub_1AF1A30((__int64)&v289, (__int64 *)v143, (__int64)&v276, 0.0) )
        {
LABEL_353:
          if ( ((*(_WORD *)v74 + 394) & 0x1FFu) > 1 )
          {
            v276.m256i_i32[0] = 2;
            v276.m256i_i32[4] = sub_EEB7E0(v74, v206, 0.0);
            v276.m256i_i32[1] = v276.m256i_i32[4];
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v74, v206, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
          if ( ((*(_WORD *)(v74 + 2) >> 3) & 0x3F) != 0x15 )
          {
            v276.m256i_i32[0] = 2;
            v276.m256i_i32[1] = *(_DWORD *)(v74 + 4);
            v276.m256i_i32[4] = *(_DWORD *)(v74 + 4);
            *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v74, v206, 0.0);
            v276.m256i_i64[1] = *(__int64 *)((char *)&v276.m256i_i64[2] + 4);
            goto LABEL_260;
          }
          v218 = v289.m128i_i64[1];
          if ( (unsigned __int8)sub_1AE6CD0(v289.m128i_i64[0], v289.m128i_u64[1], *(_QWORD *)(v74 + 24)) )
          {
            *(_QWORD *)&v294 = *(_QWORD *)(v74 + 16);
            v78 = sub_1AF03A0(&v289, (__int64)&v276, v219, v220, v221, v222, 0.0);
            goto LABEL_149;
          }
          v276.m256i_i32[0] = 13;
          v229 = *(_QWORD *)(v74 + 24);
          v230 = sub_C00A40(v229, v218, v219, v220, v221);
          v231 = v289.m128i_u64[1];
          v276.m256i_i32[1] = v230;
          v276.m256i_i32[4] = sub_C00A40(v289.m128i_u64[1], v218, v232, v233, v234);
          v276.m256i_i64[1] = sub_EEC8C0(v229, v218, 0.0);
          *(__int64 *)((char *)&v276.m256i_i64[2] + 4) = sub_EEC8C0(v231, v218, 0.0);
        }
LABEL_260:
        v114 = 4433;
LABEL_200:
        sub_168B9F0((__int64)v296, v255, v276.m256i_u32[1], v114, 0);
        sub_15884C0((__int64)v296, &v276.m256i_i64[1]);
        sub_15F7200(v296);
        sub_168B9F0((__int64)v296, v255, v276.m256i_u32[4], 0x180Fu, 0);
        if ( v300 )
        {
          sub_AE9DF0((unsigned __int8 **)v298, v276.m256i_i32[0], 2u);
        }
        else if ( v302 )
        {
          v187 = sub_168B9E0(v296);
          v188 = v297.m128_u64[0];
          if ( v297.m128_u64[0] )
            v188 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v297.m128_u64[0] + 32LL))(v297.m128_u64[0]);
          v275 = v188;
          v189 = sub_1587BC0(v187, &v275, v183, v184, v185, v186);
          sub_AE9DF0((unsigned __int8 **)(*v189 + 32LL * v301 + 8), v276.m256i_i32[0], 2u);
        }
        v57 = (__m128i *)((char *)&v276.m256i_u64[2] + 4);
LABEL_101:
        sub_15884C0((__int64)v296, v57->m128i_i64);
LABEL_59:
        sub_15F7200(v296);
LABEL_60:
        v10 = 1;
LABEL_61:
        v41 = (_QWORD **)v285;
        v42 = (__int64)(p_ptr + 3);
        if ( v285 )
        {
          do
          {
            sub_1AF7D10(v42, v41[3]);
            v43 = (_QWORD **)v41[2];
            operator delete(v41);
            v41 = v43;
          }
          while ( v43 );
        }
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return v10;
      case 0x21u:
      case 0x71u:
        if ( v288 )
        {
          v45 = (void **)v285;
          if ( !v285 )
            goto LABEL_57;
          v11 = (__int64)p_ptr;
          v46 = p_ptr + 4;
          do
          {
            if ( *((int *)v45 + 8) > 15 )
            {
              v46 = v45;
              v45 = (void **)v45[2];
            }
            else
            {
              v45 = (void **)v45[3];
            }
          }
          while ( v45 );
          if ( v46 == p_ptr + 4 || *((int *)v46 + 8) > 16 )
          {
LABEL_57:
            sub_168B9F0((__int64)v296, v255, *v14, 0x1154u, 0);
            sub_1AF81E0(&v289, v14[2]);
            v40 = sub_1682AF0((__int64)v296, (__int64)&v289);
            v276.m256i_i64[0] = *(_QWORD *)v14;
            sub_1587DB0(v40, v276.m256i_i64);
            if ( (unsigned __int64 *)v289.m128i_i64[0] != &v290 )
              operator delete((void *)v289.m128i_i64[0]);
            goto LABEL_59;
          }
        }
        else
        {
          v28 = ptr;
          v29 = (char *)ptr + 4 * (unsigned int)v282;
          if ( ptr == v29 )
            goto LABEL_57;
          while ( *v28 != 16 )
          {
            if ( v29 == (char *)++v28 )
              goto LABEL_57;
          }
        }
LABEL_11:
        v12 += 8;
        if ( (char *)v252.m128_u64[0] == v12 )
          goto LABEL_12;
        continue;
      case 0x2Au:
        goto LABEL_11;
    }
  }
}
