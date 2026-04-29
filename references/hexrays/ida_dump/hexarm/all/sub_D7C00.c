__int64 __fastcall sub_D7C00(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // esi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // r8
  int v35; // edx
  unsigned int v36; // ecx
  __int64 v37; // rsi
  char v38; // al
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned __int64 *v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int64 *v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // rcx
  _BYTE *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rsi
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  _DWORD *v67; // r8
  unsigned int v68; // eax
  int v69; // esi
  int v70; // eax
  char v72; // al
  _DWORD *v73; // rdi
  bool v74; // al
  _QWORD *v75; // r8
  __int64 v76; // r9
  int v77; // r10d
  _DWORD *v78; // r11
  bool v79; // zf
  int v80; // eax
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rax
  __int64 v83; // rsi
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __m128i v88; // xmm0
  unsigned int v89; // eax
  unsigned int v90; // eax
  char v91; // cl
  unsigned __int64 v92; // rax
  __m128i v93; // xmm0
  bool v94; // cc
  _BYTE *v95; // rdx
  __int64 v96; // rax
  char v97; // r13
  __int64 v98; // rax
  _QWORD *v99; // r12
  char v100; // bl
  _QWORD *v101; // rbp
  __int64 v102; // rax
  __int64 v103; // rdi
  __int64 v104; // r14
  __int64 v105; // rbp
  _QWORD *v106; // rbx
  __int64 v107; // rdi
  __int64 v108; // rdi
  _QWORD *v109; // rdx
  __int64 v110; // rdi
  unsigned __int64 v111; // rsi
  unsigned __int64 v112; // rax
  int v113; // eax
  int v114; // r10d
  bool v115; // al
  int v116; // r10d
  bool v117; // al
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned __int64 v125; // rcx
  __int64 v126; // rsi
  unsigned int v127; // eax
  _DWORD *v128; // rdx
  unsigned int v129; // eax
  __int64 v130; // rbx
  unsigned __int64 v131; // rcx
  __int64 v132; // rsi
  unsigned int v133; // eax
  _DWORD *v134; // rdx
  unsigned int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rdx
  int v141; // r13d
  __int64 v142; // rdi
  int v143; // ebp
  __int64 v144; // r9
  __int64 v145; // r12
  __int64 v146; // rax
  int v147; // r10d
  __int64 v148; // rsi
  int v149; // r10d
  __int64 v150; // rsi
  unsigned int v151; // r14d
  int v152; // r12d
  __int64 v153; // rax
  __int64 v154; // rsi
  _QWORD *v155; // rbx
  char v156; // bp
  unsigned int *v157; // rdx
  __m128i *v158; // r12
  __int64 v159; // rax
  __int64 v160; // rax
  char v161; // r12
  __int64 v162; // rax
  char *v163; // r14
  unsigned __int64 v164; // rdx
  __m128i *v165; // r8
  __int32 v166; // ecx
  __int32 v167; // edx
  __int32 *v168; // rax
  __m128i *v169; // rsi
  int *v170; // r12
  int *v171; // r14
  __int64 v172; // rax
  int v173; // r8d
  __int64 v174; // rbx
  int v175; // r11d
  __int64 v176; // rsi
  int v177; // ebx
  int v178; // r12d
  unsigned __int64 v179; // rax
  __int64 *v180; // rbx
  unsigned int v181; // ecx
  __int64 v182; // rdi
  unsigned int v183; // ebp
  __int64 v184; // rax
  int v185; // r13d
  __int64 v186; // r14
  _QWORD *v187; // rax
  __int64 v188; // rdx
  _QWORD *v189; // r12
  unsigned __int64 v190; // rcx
  __int64 v191; // rdi
  int v192; // eax
  int v193; // eax
  __int64 v194; // rdx
  __int64 v195; // rcx
  _DWORD *v196; // rdx
  int v197; // ecx
  __int64 v198; // rdx
  int v199; // r9d
  __int64 v200; // rdi
  __int64 v201; // rdi
  __int64 v202; // rsi
  __int64 v203; // rax
  int v204; // r11d
  int v205; // r10d
  unsigned int *v206; // rdx
  __int64 v207; // r9
  bool v208; // bl
  __int64 v209; // rax
  __int64 v210; // rdi
  __int64 v211; // r12
  __int64 v212; // rbx
  _QWORD *v213; // rbp
  __int64 v214; // rdi
  __int64 v215; // rdi
  unsigned __int64 v216; // rsi
  unsigned __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rbp
  __int64 v222; // rdx
  __int64 v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rbx
  __int64 v226; // rdi
  __int64 v227; // rax
  __int64 v228; // rax
  int v229; // [rsp+0h] [rbp-158h]
  char v230; // [rsp+0h] [rbp-158h]
  int v231; // [rsp+0h] [rbp-158h]
  unsigned __int64 v232; // [rsp+8h] [rbp-150h]
  int v233; // [rsp+8h] [rbp-150h]
  unsigned int v234; // [rsp+8h] [rbp-150h]
  int v235; // [rsp+8h] [rbp-150h]
  __int64 v236; // [rsp+8h] [rbp-150h]
  int v237; // [rsp+8h] [rbp-150h]
  int v238; // [rsp+8h] [rbp-150h]
  int v239; // [rsp+8h] [rbp-150h]
  unsigned int *v240; // [rsp+8h] [rbp-150h]
  __int64 v241; // [rsp+8h] [rbp-150h]
  int v242; // [rsp+8h] [rbp-150h]
  unsigned int v243; // [rsp+8h] [rbp-150h]
  int v244; // [rsp+10h] [rbp-148h]
  unsigned __int64 v245; // [rsp+10h] [rbp-148h]
  int v246; // [rsp+18h] [rbp-140h]
  _QWORD *v247; // [rsp+20h] [rbp-138h]
  char v248; // [rsp+20h] [rbp-138h]
  int v249; // [rsp+28h] [rbp-130h]
  int v250; // [rsp+28h] [rbp-130h]
  bool v251; // [rsp+2Ch] [rbp-12Ch]
  char v252; // [rsp+2Ch] [rbp-12Ch]
  int v253; // [rsp+2Ch] [rbp-12Ch]
  _QWORD *v255; // [rsp+38h] [rbp-120h]
  _DWORD *v256; // [rsp+38h] [rbp-120h]
  unsigned int v257; // [rsp+38h] [rbp-120h]
  int v258; // [rsp+38h] [rbp-120h]
  __int64 v259; // [rsp+38h] [rbp-120h]
  __int64 v260; // [rsp+38h] [rbp-120h]
  char v261; // [rsp+38h] [rbp-120h]
  unsigned __int64 *v262; // [rsp+40h] [rbp-118h]
  __int64 v263; // [rsp+40h] [rbp-118h]
  __int64 v264; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v265; // [rsp+40h] [rbp-118h]
  char v266; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v267; // [rsp+40h] [rbp-118h]
  __int64 v269; // [rsp+50h] [rbp-108h]
  int v270; // [rsp+50h] [rbp-108h]
  __int64 *v271; // [rsp+58h] [rbp-100h]
  __int64 *v272; // [rsp+60h] [rbp-F8h]
  char v273; // [rsp+68h] [rbp-F0h]
  __int64 v274; // [rsp+68h] [rbp-F0h]
  unsigned int *v275; // [rsp+70h] [rbp-E8h]
  int v276; // [rsp+70h] [rbp-E8h]
  int v277; // [rsp+78h] [rbp-E0h]
  char v278; // [rsp+78h] [rbp-E0h]
  int v279; // [rsp+7Ch] [rbp-DCh]
  int v280; // [rsp+7Ch] [rbp-DCh]
  __int64 v281; // [rsp+80h] [rbp-D8h]
  int v282; // [rsp+80h] [rbp-D8h]
  unsigned int *v283; // [rsp+88h] [rbp-D0h]
  __int64 v284; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v285; // [rsp+98h] [rbp-C0h]
  __int64 v286; // [rsp+A8h] [rbp-B0h]
  __int64 v287; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v288; // [rsp+B8h] [rbp-A0h]
  __int64 v289; // [rsp+C8h] [rbp-90h]
  __int64 v290; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v291; // [rsp+D8h] [rbp-80h] BYREF
  __int128 v292; // [rsp+E0h] [rbp-78h]
  __int64 v293; // [rsp+F0h] [rbp-68h]
  __int128 v294; // [rsp+F8h] [rbp-60h]
  char v295; // [rsp+108h] [rbp-50h]
  unsigned __int64 v296; // [rsp+118h] [rbp-40h]

  v296 = __readfsqword(0x28u);
  v251 = 0;
  if ( !*(_BYTE *)(a3 + 320) )
    v251 = (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0;
  v7 = (unsigned __int64)a2;
  v8 = a3;
  v9 = (_QWORD *)(a3 + 296);
  v269 = *(_QWORD *)(a3 + 1504);
  v249 = *(_DWORD *)(v269 + 80);
  v277 = 2 * v249;
  v272 = a2 + 6;
  v271 = a2 + 9;
LABEL_4:
  sub_D1250((_QWORD *)v7);
  LODWORD(v10) = *(_QWORD *)(a1 + 96);
  v11 = 4LL * ((int)v10 - 1);
  while ( (int)v10 > 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + v11);
    v11 -= 4;
    if ( !sub_64330(v9, v12) )
      goto LABEL_9;
    LODWORD(v10) = v10 - 1;
  }
  LODWORD(v10) = 0;
LABEL_9:
  v13 = *(_QWORD *)(a1 + 120);
  v232 = v7;
  v14 = (int)v13;
  v15 = 4LL * ((int)v13 - 1);
  while ( 1 )
  {
    if ( (int)v14 <= 0 )
    {
      v14 = 0;
      v7 = v232;
      v10 = (int)v10;
      if ( *(_DWORD *)a1 != 3 )
        goto LABEL_14;
      goto LABEL_95;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v15);
    v15 -= 4;
    if ( !sub_64330(v9, v16) )
      break;
    v14 = (int)v14 - 1;
  }
  v7 = v232;
  v10 = (int)v10;
  if ( *(_DWORD *)a1 != 3 )
    goto LABEL_14;
LABEL_95:
  if ( (int)v14 <= (int)v10 )
    v10 = (int)v14;
  else
    v14 = (int)v10;
LABEL_14:
  LODWORD(v287) = -1;
  v17 = *(_QWORD *)(v7 + 56);
  if ( v10 >= v17 )
  {
    if ( v17 >= v10 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v7 + 48);
    v19 = *(_QWORD *)(v7 + 64);
    if ( (unsigned __int64)&v287 < v18 || (unsigned __int64)&v287 >= v18 + 4 * v19 )
    {
      if ( v19 >= v10
        || (v120 = qvector_reserve(v272, v18, v10, 4),
            v17 = *(_QWORD *)(v7 + 56),
            *(_QWORD *)(v7 + 48) = v120,
            v18 = v120,
            v17 < v10) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v18 + 4 * v17++) = v287;
          if ( v10 == v17 )
            break;
          v18 = *(_QWORD *)(v7 + 48);
        }
      }
    }
    else if ( v19 >= v10
           || (v123 = qvector_reserve(v272, v18, v10, 4),
               v17 = *(_QWORD *)(v7 + 56),
               *(_QWORD *)(v7 + 48) = v123,
               v18 = v123,
               v17 < v10) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v18 + 4 * v17++) = -1;
        if ( v10 == v17 )
          break;
        v18 = *(_QWORD *)(v7 + 48);
      }
    }
  }
  *(_QWORD *)(v7 + 56) = v10;
LABEL_23:
  LODWORD(v287) = -1;
  v20 = *(_QWORD *)(v7 + 80);
  if ( v14 < v20 )
  {
LABEL_31:
    *(_QWORD *)(v7 + 80) = v14;
    goto LABEL_32;
  }
  if ( v20 < v14 )
  {
    v21 = *(_QWORD *)(v7 + 72);
    v22 = *(_QWORD *)(v7 + 88);
    if ( (unsigned __int64)&v287 < v21 || (unsigned __int64)&v287 >= v21 + 4 * v22 )
    {
      if ( v22 >= v14
        || (v119 = qvector_reserve(v271, v21, v14, 4),
            v20 = *(_QWORD *)(v7 + 80),
            *(_QWORD *)(v7 + 72) = v119,
            v21 = v119,
            v20 < v14) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v20++) = v287;
          if ( v14 == v20 )
            break;
          v21 = *(_QWORD *)(v7 + 72);
        }
      }
    }
    else if ( v22 >= v14
           || (v122 = qvector_reserve(v271, v21, v14, 4),
               v20 = *(_QWORD *)(v7 + 80),
               *(_QWORD *)(v7 + 72) = v122,
               v21 = v122,
               v20 < v14) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v21 + 4 * v20++) = -1;
        if ( v14 == v20 )
          break;
        v21 = *(_QWORD *)(v7 + 72);
      }
    }
    goto LABEL_31;
  }
LABEL_32:
  if ( !*(_QWORD *)(v8 + 464) )
    goto LABEL_204;
  v229 = 0;
  v23 = 0;
  v233 = -1;
  v247 = v9;
  while ( 1 )
  {
    v24 = *(int *)(*(_QWORD *)(v8 + 456) + 4 * v23);
    v244 = v24;
    v25 = 104 * v24;
    v26 = 104 * v24 + *(_QWORD *)(v8 + 432);
    if ( !a1 || !(unsigned __int8)sub_36FB60(*(_QWORD *)(v8 + 1504), *(unsigned int *)(a1 + 72)) || *(_DWORD *)v26 == 1 )
    {
      v60 = sub_1C2F40(v26);
      v31 = v60;
      if ( v60 == -1 || v60 < *(_QWORD *)(v8 + 144) )
        goto LABEL_79;
      goto LABEL_41;
    }
    v27 = *(unsigned int *)(a1 + 72);
    v28 = *(_QWORD *)(v8 + 1504);
    *(_QWORD *)&v288 = a1;
    v287 = (__int64)off_4D72C8;
    *((_QWORD *)&v288 + 1) = v8;
    if ( (unsigned __int8)sub_36FB60(v28, v27) )
    {
      v29 = *(unsigned int *)(a1 + 72);
      v284 = 32;
      v286 = 0;
      v285 = 0;
      get_stkarg_area_info(&v284, v29);
      v30 = *(_QWORD *)(v8 + 144) + v285 - *(int *)(v8 + 120);
    }
    else
    {
      v30 = -1;
    }
    v289 = v30;
    v290 = -1;
    if ( (unsigned int)for_all_arglocs(&v287, v26, *(unsigned int *)(v26 + 88), 0) == -1 )
      break;
    v31 = v290;
    if ( v290 == -1 )
      goto LABEL_79;
LABEL_41:
    v32 = *(_DWORD *)(a1 + 72);
    v33 = *(_QWORD *)(v26 + 80);
    LODWORD(v284) = 0;
    v234 = v32;
    get_tinfo_size(&v284, v33, 0);
    v35 = v284;
    v36 = v234;
    if ( ((unsigned int)v284 & ((_DWORD)v284 - 1)) != 0 )
    {
      if ( !under_debugger )
      {
        interr(2858, v33, (unsigned int)v284, v234, v34);
        goto LABEL_497;
      }
LABEL_564:
      BUG();
    }
    if ( (int)v284 <= v277 )
    {
      if ( v249 <= (int)v284 )
      {
        if ( v234 <= 0x10 )
          goto LABEL_168;
        goto LABEL_148;
      }
      if ( v234 > 0x10 )
        goto LABEL_45;
      goto LABEL_165;
    }
    if ( v234 > 0x10 )
    {
      if ( v234 == 256 || v234 == 176 )
      {
        v35 = 2 * v249;
        if ( v249 <= v277 )
          v35 = v249;
        goto LABEL_50;
      }
      goto LABEL_129;
    }
    v258 = v284;
    v113 = getinf(99);
    if ( v113 != 176 && v113 != 256 )
    {
      v36 = v234;
      v35 = v258;
LABEL_129:
      v237 = v35;
      v257 = v36;
      v72 = getinf_flag(67, 512);
      v35 = v237;
      if ( v72 )
        goto LABEL_50;
      v35 = 2 * v249;
      if ( v249 <= v277 )
      {
        if ( v257 > 0x10 )
        {
          v35 = 2 * v249;
LABEL_150:
          v235 = v35;
          v37 = 4;
LABEL_48:
          v38 = getinf_flag(67, v37);
          v35 = v235;
          if ( v38 )
            goto LABEL_50;
          goto LABEL_49;
        }
LABEL_167:
        v35 = 2 * v249;
LABEL_168:
        v239 = v35;
        v90 = getinf(99);
        v35 = v239;
        v36 = v90;
LABEL_148:
        if ( v36 == 176 || v36 == 256 )
        {
LABEL_49:
          v35 = v249;
          goto LABEL_50;
        }
        goto LABEL_150;
      }
      if ( v257 > 0x10 )
        goto LABEL_47;
      goto LABEL_164;
    }
    if ( v249 <= v277 )
      goto LABEL_167;
LABEL_164:
    v35 = 2 * v249;
LABEL_165:
    v238 = v35;
    v89 = getinf(99);
    v35 = v238;
    v36 = v89;
LABEL_45:
    if ( v36 != 176 && v36 != 256 )
    {
LABEL_47:
      v235 = v35;
      v37 = 2;
      goto LABEL_48;
    }
LABEL_50:
    v39 = v249;
    if ( v35 <= v249 )
      v39 = v35;
    if ( (*(_BYTE *)(v26 + 27) & 4) != 0 )
      v35 = v39;
    v40 = v25 + *(_QWORD *)(v8 + 432);
    v41 = -v35 & (unsigned __int64)v31;
    if ( *(_DWORD *)v40 == 1 )
    {
      v236 = v25 + *(_QWORD *)(v8 + 432);
      v61 = sub_D13E0(a1, v8);
      v40 = v236;
      if ( v41 < v61 )
        goto LABEL_98;
    }
    v42 = *(unsigned __int64 **)(v7 + 120);
    if ( !v42 )
    {
      if ( !*(_QWORD *)(v7 + 128) )
      {
        v233 = -1;
        v255 = (_QWORD *)(v7 + 120);
LABEL_158:
        v87 = qalloc(40);
        v88 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v87, (__m128i)(unsigned __int64)v87);
        if ( !v87 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v87 + 32) = 0;
        *(_OWORD *)(v87 + 16) = 0;
        *(__m128i *)(v87 + 8) = v88;
        *(_QWORD *)v87 = v87 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_QWORD *)(v7 + 120) = v87;
        *(_QWORD *)v87 = v87 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v87 & 3LL;
        *(__m128i *)(*(_QWORD *)(v7 + 120) + 8LL) = _mm_unpacklo_epi64(
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120),
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120));
        **(_QWORD **)(v7 + 120) &= ~1uLL;
        **(_QWORD **)(v7 + 120) |= 2uLL;
LABEL_73:
        v262 = *(unsigned __int64 **)(v7 + 120);
        v51 = qalloc(40);
        if ( !v51 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v52 = v262;
        *(_QWORD *)(v51 + 32) = 0;
        *(_OWORD *)v51 = 0;
        *(_OWORD *)(v51 + 16) = 0;
        *(_QWORD *)(v51 + 24) = v41;
        *(_QWORD *)v51 = (unsigned __int64)v262 & 0xFFFFFFFFFFFFFFFCLL;
        v53 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
        *(_QWORD *)v51 = (unsigned __int64)v262 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64(v53, v53);
        if ( v262 == *(unsigned __int64 **)(v7 + 120) )
        {
LABEL_271:
          *v52 = v51 & 0xFFFFFFFFFFFFFFFCLL | *v52 & 3;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8LL) = v51;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL) = v51;
          v118 = *(_QWORD *)v51 & 2LL;
          *(_QWORD *)v51 &= ~1uLL;
          *(_QWORD *)v51 = v118 | *(_QWORD *)(v7 + 120) & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_77;
        }
        v262[1] = v51;
        v54 = *(_QWORD *)(v7 + 120);
        if ( v262 == *(unsigned __int64 **)(v54 + 8) )
          goto LABEL_178;
        goto LABEL_76;
      }
      v43 = unk_0;
      if ( (unk_0 & 2) == 0 )
        goto LABEL_60;
      goto LABEL_264;
    }
    v43 = *v42;
    v44 = *v42 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v44 )
    {
      v45 = *(_QWORD *)(v7 + 120);
      if ( (*(_BYTE *)(*v42 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_58;
      do
      {
        if ( v41 > *(_QWORD *)(v44 + 24) )
        {
          v44 = *(_QWORD *)(v44 + 16);
        }
        else
        {
          v45 = v44;
          v44 = *(_QWORD *)(v44 + 8);
        }
      }
      while ( (*(_BYTE *)v44 & 2) == 0 );
      if ( v42 == (unsigned __int64 *)v45 )
      {
LABEL_58:
        if ( !*(_QWORD *)(v7 + 128) )
          goto LABEL_72;
        if ( (v43 & 2) == 0 )
          goto LABEL_60;
LABEL_264:
        v47 = v42[2];
        goto LABEL_265;
      }
    }
    else
    {
      v45 = 0;
    }
    if ( v41 == *(_QWORD *)(v45 + 24) )
    {
      v69 = *(_DWORD *)(v45 + 32);
      v233 = v69;
      if ( v69 != -1 )
      {
        v62 = *(_QWORD *)(v8 + 432) + 104LL * v69;
        goto LABEL_116;
      }
      if ( !*(_QWORD *)(v7 + 128) )
      {
        v255 = (_QWORD *)(v7 + 120);
        goto LABEL_73;
      }
      if ( v42 == (unsigned __int64 *)v45 )
      {
        if ( (v43 & 2) != 0 )
        {
          v233 = *(_DWORD *)(v42[2] + 32);
          if ( v233 == -1 )
          {
LABEL_309:
            v255 = (_QWORD *)(v7 + 120);
LABEL_310:
            v86 = *(_QWORD *)(v7 + 128);
            goto LABEL_172;
          }
LABEL_266:
          v267 = *(unsigned __int64 **)(v7 + 120);
          v260 = v40;
          v117 = sub_CF060((int *)(*(_QWORD *)(v8 + 432) + 104LL * v233), v40);
          v40 = v260;
          v42 = v267;
          if ( v117 )
          {
            v233 = -1;
            goto LABEL_112;
          }
LABEL_116:
          if ( (*(_BYTE *)(*(_QWORD *)(v8 + 1504) + 48LL) & 0x21) != 0 )
          {
LABEL_119:
            if ( (*(_BYTE *)(v40 + 26) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v62 + 26) & 8) != 0 )
                goto LABEL_123;
              if ( !*(_DWORD *)(v40 + 92) )
              {
                if ( v251 )
                  goto LABEL_123;
                goto LABEL_102;
              }
            }
LABEL_98:
            if ( v244 == -1 )
              goto LABEL_198;
          }
          else
          {
            v70 = *(_DWORD *)v62;
            if ( *(_DWORD *)v40 != 1 )
            {
              if ( v70 != 1 )
                goto LABEL_119;
LABEL_100:
              if ( v251 || (*(_BYTE *)(v62 + 26) & 8) != 0 )
                goto LABEL_123;
LABEL_102:
              if ( *(_DWORD *)(v62 + 92) )
                goto LABEL_123;
              if ( *(_BYTE *)(v8 + 320) )
              {
                if ( !under_debugger )
                  sub_3835A0(52089);
                goto LABEL_564;
              }
              v63 = *(unsigned int *)(a1 + 72);
              if ( (_DWORD)v63 != *(_DWORD *)(v8 + 72) || (_DWORD)v63 == 112 && (*(_BYTE *)(v269 + 48) & 8) != 0 )
                return 0;
              v256 = (_DWORD *)v62;
              v64 = sub_36FB60(v269, v63);
              v67 = v256;
              if ( v64 )
              {
                v68 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
                if ( v68 == 64 || v68 == 208 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 936) + 56LL))(*(_QWORD *)(v8 + 936)) )
                  {
                    v67 = v256;
                    if ( *v256 == 1 )
                    {
LABEL_123:
                      v9 = v247;
LABEL_124:
                      if ( !(unsigned __int8)sub_D29C0(a1, v8, v233) )
                        return 0;
                      goto LABEL_4;
                    }
                  }
                }
              }
              if ( !(unsigned __int8)sub_1EEE20(v8, v63, v65, v66, v67) )
              {
                if ( !under_debugger )
                  sub_3835A0(52020);
                goto LABEL_564;
              }
              v42 = *(unsigned __int64 **)(v7 + 120);
LABEL_112:
              v255 = (_QWORD *)(v7 + 120);
              if ( !v42 )
                goto LABEL_158;
              goto LABEL_310;
            }
            if ( v70 == 1 )
              goto LABEL_119;
            if ( v244 == -1 )
            {
LABEL_198:
              v233 = -1;
              v42 = *(unsigned __int64 **)(v7 + 120);
              goto LABEL_112;
            }
          }
          v233 = v244;
          v62 = v25 + *(_QWORD *)(v8 + 432);
          goto LABEL_100;
        }
LABEL_60:
        v46 = v42[1];
        if ( (*(_BYTE *)v46 & 2) != 0 )
        {
          v47 = v43 & 0xFFFFFFFFFFFFFFFCLL;
          v48 = *(_QWORD *)v47;
          if ( (*(_QWORD *)v47 & 2) == 0 )
          {
            v49 = v47;
            if ( *(unsigned __int64 **)(v47 + 8) == v42 )
            {
              do
              {
                v50 = v49;
                v47 = v48 & 0xFFFFFFFFFFFFFFFCLL;
                v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v48 & 2) != 0 )
                  break;
                v49 = v47;
              }
              while ( *(_QWORD *)(v47 + 8) == v50 );
            }
          }
        }
        else
        {
          do
          {
            v47 = v46;
            v46 = *(_QWORD *)(v46 + 16);
          }
          while ( (*(_BYTE *)v46 & 2) == 0 );
        }
LABEL_265:
        v233 = *(_DWORD *)(v47 + 32);
        if ( v233 != -1 )
          goto LABEL_266;
        goto LABEL_112;
      }
    }
    else if ( !*(_QWORD *)(v7 + 128) )
    {
LABEL_72:
      v233 = -1;
      v255 = (_QWORD *)(v7 + 120);
      goto LABEL_73;
    }
    v73 = (_DWORD *)v40;
    v264 = *(_QWORD *)(v7 + 120);
    v74 = sub_CF060((int *)v40, *(_QWORD *)(v8 + 432) + 104LL * *(int *)(v45 + 32));
    v42 = (unsigned __int64 *)v264;
    v40 = (__int64)v73;
    v79 = !v74;
    v80 = -1;
    if ( v79 )
      v80 = v77;
    v233 = v80;
    if ( *(_QWORD **)(v264 + 8) != v75 )
    {
      if ( (*v75 & 2) != 0 )
      {
        v82 = v75[2];
      }
      else
      {
        v81 = v75[1];
        if ( (*(_BYTE *)v81 & 2) != 0 )
        {
          v82 = *v75 & 0xFFFFFFFFFFFFFFFCLL;
          v83 = *(_QWORD *)v82;
          if ( (*(_QWORD *)v82 & 2) == 0 )
          {
            while ( *(_QWORD **)(v82 + 8) == v75 )
            {
              v84 = v83 & 0xFFFFFFFFFFFFFFFCLL;
              v83 = *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v83 & 2) != 0 )
              {
                v82 = v84;
                if ( v264 != v84 )
                  goto LABEL_259;
                goto LABEL_144;
              }
              v75 = (_QWORD *)v82;
              v82 = v84;
            }
          }
        }
        else
        {
          do
          {
            v82 = v81;
            v121 = *(_QWORD *)(v81 + 16);
            if ( (*(_BYTE *)v121 & 2) != 0 )
              break;
            v82 = v121;
            v81 = *(_QWORD *)(v121 + 16);
          }
          while ( (*(_BYTE *)v81 & 2) == 0 );
        }
      }
      if ( v264 != v82 )
      {
LABEL_259:
        v114 = *(_DWORD *)(v82 + 32);
        if ( v114 != -1 )
        {
          v259 = v40;
          v115 = sub_CF060((int *)(v76 + 104LL * v114), v40);
          v40 = v259;
          if ( !v115 )
          {
            v233 = v116;
            goto LABEL_116;
          }
          v85 = v233;
          v42 = (unsigned __int64 *)v264;
          if ( v233 == -1 )
            goto LABEL_309;
LABEL_262:
          v62 = v76 + 104 * v85;
          goto LABEL_116;
        }
      }
LABEL_144:
      v85 = v233;
      if ( v233 == -1 )
      {
        v255 = (_QWORD *)(v7 + 120);
        v86 = *(_QWORD *)(v7 + 128);
        goto LABEL_172;
      }
      goto LABEL_262;
    }
    if ( *v73 == 1 && *v78 == 1 )
    {
      if ( !under_debugger )
        sub_3835A0(52213);
      goto LABEL_564;
    }
    v233 = -1;
    v86 = *(_QWORD *)(v7 + 128);
    v255 = (_QWORD *)(v7 + 120);
LABEL_172:
    if ( !v86 )
      goto LABEL_73;
    v91 = 1;
    v92 = *v42 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v92 & 2) == 0 )
    {
      v55 = (_BYTE *)(v92 + 24);
      v94 = v41 <= *(_QWORD *)(v92 + 24);
      if ( v41 < *(_QWORD *)(v92 + 24) )
      {
LABEL_180:
        v95 = *(_BYTE **)(v92 + 8);
        v91 = 1;
        if ( (*v95 & 2) == 0 )
          goto LABEL_181;
LABEL_184:
        v42 = (unsigned __int64 *)v92;
        goto LABEL_174;
      }
      while ( !v94 )
      {
        v95 = *(_BYTE **)(v92 + 16);
        v91 = 0;
        if ( (*v95 & 2) != 0 )
          goto LABEL_184;
LABEL_181:
        v92 = (unsigned __int64)v95;
        v55 = v95 + 24;
        v94 = v41 <= *(_QWORD *)v55;
        if ( v41 < *(_QWORD *)v55 )
          goto LABEL_180;
      }
      if ( v92 )
        goto LABEL_78;
      v42 = nullptr;
    }
LABEL_174:
    v273 = v91;
    v265 = v42;
    v51 = qalloc(40);
    if ( !v51 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v52 = v265;
    *(_QWORD *)(v51 + 32) = 0;
    *(_OWORD *)v51 = 0;
    *(_OWORD *)(v51 + 16) = 0;
    *(_QWORD *)(v51 + 24) = v41;
    *(_QWORD *)v51 = (unsigned __int64)v265 & 0xFFFFFFFFFFFFFFFCLL;
    v93 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
    *(_QWORD *)v51 = (unsigned __int64)v265 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64(v93, v93);
    if ( *(unsigned __int64 **)(v7 + 120) == v265 )
      goto LABEL_271;
    if ( !v273 )
    {
      v265[2] = v51;
      v124 = *(_QWORD *)(v7 + 120);
      if ( *(unsigned __int64 **)(v124 + 16) == v265 )
        *(_QWORD *)(v124 + 16) = v51;
      goto LABEL_76;
    }
    v265[1] = v51;
    v54 = *(_QWORD *)(v7 + 120);
    if ( *(unsigned __int64 **)(v54 + 8) == v265 )
LABEL_178:
      *(_QWORD *)(v54 + 8) = v51;
LABEL_76:
    v263 = v51;
    sub_D7820(v255, (__int64 *)v51);
    v51 = v263;
LABEL_77:
    ++*(_QWORD *)(v7 + 128);
    v55 = (_BYTE *)(v51 + 24);
LABEL_78:
    *((_DWORD *)v55 + 2) = v244;
    v56 = *(int *)(v26 + 88);
    v287 = v41;
    *(_QWORD *)&v288 = v56;
    sub_316F70(v7 + 96, &v287);
LABEL_79:
    if ( (get_tinfo_property(*(_QWORD *)(v26 + 80), 2) & 0xF) == 9 && (*(_BYTE *)(v26 + 27) & 4) == 0 )
      sub_63B90((__int64 *)(v7 + 32), v229);
    if ( *(_DWORD *)v26 == 1 )
    {
      sub_63B90((__int64 *)v7, v229);
    }
    else
    {
      v57 = sub_D3200(v7, a1, (__int64 *)v26, *(_DWORD *)(v26 + 88), v229);
      if ( v57 == -1 )
        return 0;
      if ( v57 == 1 )
      {
        v136 = v25;
        v9 = v247;
        if ( !v251 )
        {
          v137 = v136 + *(_QWORD *)(v8 + 432);
          if ( (*(_BYTE *)(v137 + 26) & 8) == 0 && !*(_DWORD *)(v137 + 92) )
            return 0;
        }
        goto LABEL_202;
      }
      if ( v251
        && !(unsigned __int8)sub_1C2B50(v26, 0, 0, v58, v59)
        && !(unsigned __int8)sub_D40C0(a1, v8, v26, (_QWORD *)(v26 + 80)) )
      {
        v9 = v247;
        goto LABEL_202;
      }
      if ( ((*(_DWORD *)v26 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)v26 - 3) > 1 )
        {
          if ( !under_debugger )
            sub_3835A0(51619);
          goto LABEL_564;
        }
      }
      else
      {
        sub_63B90((__int64 *)(v7 + 16), v229);
      }
    }
    v23 = ++v229;
    if ( (unsigned __int64)v229 >= *(_QWORD *)(v8 + 464) )
    {
      v9 = v247;
      goto LABEL_203;
    }
  }
  v9 = v247;
  if ( !v251 || *(_DWORD *)v26 == 1 )
    return 0;
LABEL_202:
  v233 = v244;
LABEL_203:
  if ( v233 != -1 )
    goto LABEL_124;
LABEL_204:
  v266 = *(_BYTE *)(a3 + 320);
  if ( v266 )
  {
    v125 = a2[7];
    v126 = a2[6];
    v127 = v125 - 1;
    if ( (int)v125 - 1 < 0 )
    {
LABEL_443:
      if ( v126 )
      {
        v200 = a2[6];
        a2[7] = 0;
        qfree(v200);
        a2[6] = 0;
        a2[8] = 0;
      }
    }
    else
    {
      v128 = (_DWORD *)(v126 + 4LL * v127);
      while ( *v128 == -1 )
      {
        --v127;
        --v128;
        if ( v127 == -1 )
          goto LABEL_443;
      }
      v129 = v127 + 1;
      v130 = (int)v129;
      if ( v125 < (int)v129 )
      {
        if ( a2[8] < (unsigned __int64)(int)v129 )
        {
          v126 = qvector_reserve(v272, v126, (int)v129, 4);
          a2[6] = v126;
          v125 = a2[7];
        }
        memset((void *)(v126 + 4 * v125), 0, 4 * (v130 - v125));
        a2[7] = v130;
      }
      else if ( v125 != v129 )
      {
        a2[7] = (int)v129;
      }
    }
    v131 = a2[10];
    v132 = a2[9];
    v133 = v131 - 1;
    if ( (int)v131 - 1 >= 0 )
    {
      v134 = (_DWORD *)(v132 + 4LL * v133);
      do
      {
        if ( *v134 != -1 )
        {
          v135 = v133 + 1;
          v8 = (int)v135;
          if ( v131 < (int)v135 )
          {
            if ( a2[11] < (unsigned __int64)(int)v135 )
            {
              v132 = qvector_reserve(v271, v132, (int)v135, 4);
              a2[9] = v132;
              v131 = a2[10];
            }
            memset((void *)(v132 + 4 * v131), 0, 4 * (v8 - v131));
          }
          else if ( v131 == v135 )
          {
            return 1;
          }
          goto LABEL_306;
        }
        --v133;
        --v134;
      }
      while ( v133 != -1 );
    }
    if ( v132 )
    {
      v201 = a2[9];
      a2[10] = 0;
      qfree(v201);
      a2[9] = 0;
      a2[11] = 0;
    }
    return 1;
  }
  v270 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a1 != 5 )
  {
    v96 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v96 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_207;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v96 + 112) + 200LL))(
           *(_QWORD *)(v96 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v192 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
               **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) > 1u )
      {
        v191 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
        if ( (unsigned int)v191 < v192 )
          goto LABEL_430;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) <= 1u )
        goto LABEL_207;
      v191 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
      if ( (unsigned int)v191 > 7 )
        goto LABEL_207;
LABEL_430:
      v192 = round_down_power2(v191);
    }
    if ( v192 <= 7 && (unsigned __int64)a2[10] > 1 )
    {
      v193 = 1;
      v194 = 1;
      do
      {
        v195 = a2[9];
        v196 = (_DWORD *)(v195 + 4 * v194);
        if ( *v196 == -1 )
        {
          v197 = *(_DWORD *)(v195 + 4LL * (v193 - 1));
          if ( v197 != -1 )
            *v196 = v197;
        }
        v193 += 2;
        v194 = v193;
      }
      while ( v193 < (unsigned __int64)a2[10] );
    }
    goto LABEL_207;
  }
  v138 = a2[10];
  v250 = a2[7];
  LODWORD(v139) = v138;
  if ( !v138 )
  {
    v261 = 0;
    v141 = -1;
    v142 = *(_QWORD *)(a3 + 1496);
    v274 = *(_QWORD *)(a3 + 1504);
    if ( (*(_BYTE *)(v142 + 606) & 0x10) != 0 )
      goto LABEL_324;
    v248 = 0;
    v287 = 0;
    v288 = 0;
    goto LABEL_516;
  }
  v140 = a2[9];
  while ( 1 )
  {
    v141 = *(_DWORD *)(v140 + 4 * v138 - 4);
    if ( v141 != -1 )
      break;
    a2[10] = --v138;
    if ( !v138 )
      goto LABEL_322;
  }
  v141 = v138 - 1;
  LOBYTE(v138) = (int)v138 > 0;
LABEL_322:
  v261 = (v250 > 0) & v138;
  v274 = *(_QWORD *)(a3 + 1504);
  v278 = *(_BYTE *)(a3 + 320);
  if ( v278 )
  {
    v248 = 0;
    v278 = 0;
  }
  else
  {
    v142 = *(_QWORD *)(a3 + 1496);
    v248 = 0;
    if ( (*(_BYTE *)(v142 + 606) & 0x10) != 0 )
    {
LABEL_324:
      if ( *(_DWORD *)(a3 + 792)
        && (unsigned int)(**(_DWORD **)(a3 + 432) - 3) <= 1
        && (unsigned __int8)sub_375180(v142, *(_QWORD *)(a3 + 40), &v287)
        && (v287 & 0xFFFFFFFD) == 1
        && (v224 = sub_1CE420(a3)) != 0
        && !*(_DWORD *)(v224 + 112)
        && (v225 = (int)sub_F27C0(a3), v225 != *(_QWORD *)(a3 + 144)) )
      {
        v226 = *(_QWORD *)(a3 + 432) + 104LL * (*(_DWORD *)(a3 + 792) - 1);
        v278 = v225 > (int)sub_1C3000(v226, *(unsigned int *)(v226 + 88));
      }
      else
      {
        v278 = 0;
      }
      v248 = 1;
    }
  }
  v287 = 0;
  v288 = 0;
  if ( !v261 )
  {
    v139 = a2[10];
LABEL_516:
    v231 = 0;
    v178 = *(_DWORD *)(a1 + 40) - ((v139 + 1) & 0xFFFFFFFE);
    v179 = 0;
    if ( v178 <= 0 )
      goto LABEL_393;
    goto LABEL_401;
  }
  v231 = 0;
  v143 = 0;
  while ( 1 )
  {
    v245 = v143;
    v151 = *(_DWORD *)(a2[9] + 4LL * v143);
    if ( v151 == -1 )
    {
      if ( (v143 & 1) == 0 )
      {
        v152 = *(_DWORD *)(a2[6] + 4LL * v231);
        if ( v152 != -1 )
        {
          v153 = v288;
          v154 = v287;
          if ( *((_QWORD *)&v288 + 1) < (unsigned __int64)(v288 + 1) )
          {
            v287 = qvector_reserve(&v287, v287, v288 + 1, 4);
            v154 = v287;
            v153 = v288;
          }
          *(_DWORD *)(v154 + 4 * v153) = v152;
          *(_QWORD *)&v288 = v288 + 1;
        }
        ++v231;
      }
      ++v143;
      goto LABEL_339;
    }
    v144 = v231;
    v145 = 4LL * v231;
    v146 = v288;
    v147 = *(_DWORD *)(a2[6] + v145);
    if ( v147 != -1 )
    {
      v148 = v287;
      if ( *((_QWORD *)&v288 + 1) < (unsigned __int64)(v288 + 1) )
      {
        v242 = *(_DWORD *)(a2[6] + 4LL * v231);
        v287 = qvector_reserve(&v287, v287, v288 + 1, 4);
        v148 = v287;
        v144 = v231;
        v146 = v288;
        v147 = v242;
      }
      *(_DWORD *)(v148 + 4 * v146) = v147;
      v146 = v288 + 1;
      *(_QWORD *)&v288 = v288 + 1;
    }
    v246 = v231 % 2;
    if ( v143 >= v141 )
    {
      if ( v146 )
      {
LABEL_356:
        v252 = 0;
        goto LABEL_357;
      }
LABEL_355:
      ++v143;
      v150 = a2[6];
      goto LABEL_338;
    }
    v149 = v143 + 1;
    if ( v151 == *(_DWORD *)(a2[9] + 4LL * (v143 + 1)) )
      break;
    if ( v146 )
      goto LABEL_356;
    ++v143;
    v150 = a2[6];
LABEL_338:
    ++v231;
    *(_DWORD *)(v150 + v145) = v151;
LABEL_339:
    if ( v141 < v143 || v231 >= v250 )
    {
      v178 = *(_DWORD *)(a1 + 40) - ((a2[10] + 1) & 0xFFFFFFFE);
      if ( v178 <= 0 )
        goto LABEL_393;
      if ( (_QWORD)v288 )
      {
        if ( !under_debugger )
          sub_3835A0(52424);
        goto LABEL_564;
      }
      v179 = v231;
LABEL_401:
      v180 = a2 + 4;
      if ( v179 < a2[7] )
      {
        while ( 1 )
        {
          v183 = *(_DWORD *)(a2[6] + 4 * v179);
          if ( v183 != -1 )
          {
            if ( !sub_64330(v180, v183) )
              goto LABEL_393;
            v184 = sub_13CCC0(a3, v183);
            v185 = *(_DWORD *)(v184 + 88);
            v186 = v184;
            if ( *(_QWORD *)(a1 + 120) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL)
                                                                     + 200LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                     **(unsigned int **)(a1 + 112)) )
              {
                v181 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                         *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                         **(unsigned int **)(a1 + 112));
              }
              else
              {
                v181 = 8;
              }
              if ( *(_QWORD *)(a1 + 120) > 1u )
              {
                v182 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
                if ( (unsigned int)v182 < v181 )
                  v181 = round_down_power2(v182);
              }
            }
            else
            {
              v181 = 8;
            }
            if ( v185 / (int)v181 > v178 )
              goto LABEL_393;
            if ( (*(_BYTE *)(v186 + 24) & 0x40) == 0
              && (unsigned __int8)sub_1EFA40(v186, v274, *(unsigned int *)(v186 + 88), 2) )
            {
              sub_63D40(v180, v183);
              goto LABEL_393;
            }
            if ( !v248 )
              goto LABEL_467;
            sub_CF4E0(a2, a3, v183);
          }
          v179 = ++v231;
          if ( v231 >= (unsigned __int64)a2[7] )
            goto LABEL_393;
        }
      }
      if ( v287 )
        qfree(v287);
      goto LABEL_207;
    }
  }
  v173 = v231 + 1;
  v174 = v231 + 1;
  v175 = *(_DWORD *)(a2[6] + 4 * v174);
  if ( v175 != -1 )
  {
    v176 = v287;
    if ( *((_QWORD *)&v288 + 1) < (unsigned __int64)(v146 + 1) )
    {
      v279 = *(_DWORD *)(a2[6] + 4LL * (v231 + 1));
      v281 = v144;
      v287 = qvector_reserve(&v287, v287, v146 + 1, 4);
      v176 = v287;
      v175 = v279;
      v146 = v288;
      v144 = v281;
      v173 = v231 + 1;
      v149 = v143 + 1;
    }
    *(_DWORD *)(v176 + 4 * v146) = v175;
    v146 = v288 + 1;
    *(_QWORD *)&v288 = v288 + 1;
  }
  if ( v246 == 1 )
  {
    v231 += 2;
    v198 = a2[6];
    v199 = *(_DWORD *)(v198 + 4LL * v231);
    if ( v199 == -1 )
    {
      if ( v146 )
        goto LABEL_442;
    }
    else
    {
      v202 = v287;
      if ( *((_QWORD *)&v288 + 1) < (unsigned __int64)(v146 + 1) )
      {
        v276 = *(_DWORD *)(v198 + 4LL * v231);
        v253 = v149;
        v287 = qvector_reserve(&v287, v287, v146 + 1, 4);
        v202 = v287;
        v199 = v276;
        v146 = v288;
        v149 = v253;
      }
      *(_DWORD *)(v202 + 4 * v146) = v199;
      v79 = (_QWORD)v288 == -1;
      v146 = v288 + 1;
      *(_QWORD *)&v288 = v288 + 1;
      if ( !v79 )
        goto LABEL_442;
      v198 = a2[6];
    }
    v172 = v145;
    *(_DWORD *)(v198 + 4 * v174) = v151;
    v145 = 4LL * v231;
    v143 = v149;
    goto LABEL_379;
  }
  if ( !v146 )
  {
    v145 = 4LL * (v231 + 1);
    v231 = v173;
    v143 = v149;
    *(_DWORD *)(a2[6] + 4 * v144) = v151;
    goto LABEL_355;
  }
  v231 = v173;
LABEL_442:
  v252 = v261;
LABEL_357:
  v157 = (unsigned int *)v287;
  v158 = (__m128i *)(v287 + 4 * v146);
  if ( (__m128i *)v287 == v158 )
  {
LABEL_366:
    v162 = 4 * v288;
    v163 = &v158->m128i_i8[4 * v288];
    if ( v163 == (char *)v158 )
    {
LABEL_376:
      ++v143;
      *(_QWORD *)&v288 = 0;
      v145 = 4LL * v231;
      v150 = a2[6];
      v151 = *(_DWORD *)(a2[9] + 4 * v245);
      if ( !v252 )
        goto LABEL_338;
      *(_DWORD *)(v150 + 4LL * (v231 - 1)) = v151;
      if ( v246 != 1 )
        goto LABEL_355;
      v172 = 4LL * (v231 - 2);
LABEL_379:
      *(_DWORD *)(a2[6] + v172) = -1;
      goto LABEL_355;
    }
    if ( v162 >> 2 )
    {
      _BitScanReverse64(&v164, v162 >> 2);
      v241 = 4 * v288;
      sub_CEE80(v158, &v158->m128i_i32[v288], 2LL * (int)(63 - (v164 ^ 0x3F)));
      if ( v241 > 64 )
      {
        sub_CEDC0(v158->m128i_i8, v158[4].m128i_i8);
        v165 = v158 + 4;
        do
        {
          v166 = v165->m128i_i32[0];
          v167 = v165[-1].m128i_i32[3];
          v168 = &v165[-1].m128i_i32[3];
          if ( v165->m128i_i32[0] >= v167 )
          {
            v169 = v165;
          }
          else
          {
            do
            {
              v168[1] = v167;
              v169 = (__m128i *)v168;
              v167 = *--v168;
            }
            while ( v166 < v167 );
          }
          v165 = (__m128i *)((char *)v165 + 4);
          v169->m128i_i32[0] = v166;
        }
        while ( v163 != (char *)v165 );
LABEL_373:
        v170 = (int *)(v287 + 4 * v288);
        if ( (int *)v287 != v170 )
        {
          v171 = (int *)v287;
          do
            sub_CF4E0(a2, a3, *v171++);
          while ( v170 != v171 );
        }
        goto LABEL_376;
      }
    }
    else
    {
      sub_CEE80(v158, &v158->m128i_i32[v288], -2);
    }
    sub_CEDC0(v158->m128i_i8, v163);
    goto LABEL_373;
  }
  while ( 1 )
  {
    v240 = v157;
    v159 = sub_13CCC0(a3, *v157);
    if ( (*(_BYTE *)(v159 + 26) & 8) == 0 && !*(_DWORD *)(v159 + 92) )
      break;
    v157 = v240 + 1;
    if ( v158 == (__m128i *)(v240 + 1) )
      goto LABEL_365;
  }
  v160 = sub_13CCC0(a3, v151);
  if ( (*(_BYTE *)(v160 + 26) & 8) != 0 || *(_DWORD *)(v160 + 92) )
  {
LABEL_390:
    if ( v143 % 2 == 1 )
    {
      v177 = v143 - 1;
      if ( v151 == *(_DWORD *)(a2[9] + 4LL * (v143 - 1)) )
      {
        v220 = sub_13CCC0(a3, v151);
        if ( ((*(_BYTE *)(v220 + 26) & 8) != 0 || *(_DWORD *)(v220 + 92))
          && v278
          && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v151) < *(_DWORD *)(a3 + 792) )
        {
          v221 = sub_13CCC0(a3, v151);
          if ( *(_QWORD *)(a1 + 120) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                   **(unsigned int **)(a1 + 112)) )
            {
              v222 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112));
            }
            else
            {
              v222 = 8;
            }
            if ( *(_QWORD *)(a1 + 120) > 1u )
            {
              v223 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
              if ( (unsigned int)v223 < (unsigned int)v222 )
                v222 = (unsigned int)round_down_power2(v223);
            }
          }
          else
          {
            v222 = 8;
          }
          if ( (unsigned __int8)sub_1EFA40(v221, v274, v222, 3) )
          {
            sub_81A00(v271, v245);
            goto LABEL_393;
          }
        }
        v143 = v177;
      }
    }
    sub_CF4E0(a2, a3, v151);
    sub_81A00(v271, v143);
LABEL_393:
    if ( v287 )
    {
      *(_QWORD *)&v288 = 0;
      qfree(v287);
    }
LABEL_207:
    if ( ((v270 & 0xFFFFFFF0) == 0x40 || (v270 & 0xFFFFFFF0) == 0xD0)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 936) + 56LL))(*(_QWORD *)(a3 + 936)) )
    {
      return 1;
    }
    if ( *(_DWORD *)a1 == 6 )
    {
      if ( (unsigned __int8)sub_64280(a2) )
        sub_D1180(v272);
      if ( !(unsigned __int8)sub_64180(a2, a2 + 4) )
        sub_D1180(v271);
      return 1;
    }
    v97 = *(_DWORD *)a1 == 2 || (unsigned int)(*(_DWORD *)a1 - 4) <= 1;
    if ( v97 )
    {
      if ( (unsigned __int8)sub_64280(a2) )
        goto LABEL_349;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v98 = a2[15];
        if ( v98 )
        {
          if ( a2[16] )
          {
            v99 = *(_QWORD **)(v98 + 8);
            if ( (_QWORD *)v98 != v99 )
              goto LABEL_216;
          }
        }
LABEL_349:
        v155 = a2 + 4;
        sub_64220(a2, a2 + 4);
        v266 = v97;
LABEL_350:
        sub_D1180(v272);
        v156 = v266;
LABEL_351:
        if ( (unsigned __int8)sub_64180(a2, v155) != 1 || v156 )
          sub_D1180(v271);
LABEL_244:
        if ( *(_DWORD *)a1 == 3 )
        {
          LODWORD(v287) = -1;
          v8 = a2[7];
          v7 = a2[10];
          if ( v8 < v7 )
          {
            v111 = a2[6];
            v112 = a2[8];
            if ( (unsigned __int64)&v287 < v111 || (unsigned __int64)&v287 >= v111 + 4 * v112 )
            {
              if ( v112 >= v7
                || (v219 = qvector_reserve(v272, v111, a2[10], 4), v111 = v219, v8 = a2[7], a2[6] = v219, v8 < v7) )
              {
                while ( 1 )
                {
                  *(_DWORD *)(v111 + 4 * v8++) = v287;
                  if ( v7 == v8 )
                    break;
                  v111 = a2[6];
                }
              }
            }
            else if ( v112 >= v7
                   || (v218 = qvector_reserve(v272, v111, a2[10], 4), v111 = v218, v8 = a2[7], a2[6] = v218, v8 < v7) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v111 + 4 * v8++) = -1;
                if ( v7 == v8 )
                  break;
                v111 = a2[6];
              }
            }
            a2[7] = v7;
            return 1;
          }
LABEL_497:
          if ( v7 >= v8 )
            return 1;
          v216 = a2[9];
          v217 = a2[11];
          if ( (unsigned __int64)&v287 < v216 || (unsigned __int64)&v287 >= v216 + 4 * v217 )
          {
            if ( v217 >= v8
              || (v228 = qvector_reserve(v271, v216, v8, 4), v216 = v228, v7 = a2[10], a2[9] = v228, v7 < v8) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v216 + 4 * v7++) = v287;
                if ( v8 == v7 )
                  break;
                v216 = a2[9];
              }
            }
          }
          else if ( v217 >= v8
                 || (v227 = qvector_reserve(v271, v216, v8, 4), v216 = v227, v7 = a2[10], a2[9] = v227, v7 < v8) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v216 + 4 * v7++) = -1;
              if ( v8 == v7 )
                break;
              v216 = a2[9];
            }
          }
LABEL_306:
          a2[10] = v8;
          return 1;
        }
        return 1;
      }
LABEL_493:
      v155 = a2 + 4;
      v156 = sub_64220(a2, a2 + 4);
      if ( v156 )
        goto LABEL_350;
      goto LABEL_351;
    }
    v97 = sub_64280(a2);
    if ( !v97 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v203 = a2[15];
        if ( v203 )
        {
          if ( a2[16] )
          {
            v99 = *(_QWORD **)(v203 + 8);
            if ( v99 != (_QWORD *)v203 )
            {
LABEL_216:
              v100 = v270;
              if ( v270 == 192 || (v270 & 0xFFFFFF0F) != 0 )
                v100 = -64;
              while ( 1 )
              {
                v101 = (_QWORD *)(*(_QWORD *)(a3 + 432) + 104LL * *((int *)v99 + 8) + 80);
                if ( (get_tinfo_property(*v101, 2) & 0x2F) != 0xD )
                  break;
                v287 = 0;
                v289 = 0;
                v290 = 0;
                v291 = 0;
                v293 = 0;
                v288 = 0;
                v292 = 0;
                v294 = 0;
                if ( v270 == 192 || (v270 & 0xFFFFFF0F) != 0 )
                  HIDWORD(v289) = v270;
                v295 = v100;
                v287 = qvector_reserve(&v287, 0, 1, 80);
                v102 = 80 * v288 + v287;
                *(_DWORD *)v102 = 0;
                *(_QWORD *)(v102 + 8) = 0;
                *(_QWORD *)(v102 + 16) = 0;
                *(_QWORD *)(v102 + 40) = 0;
                *(_QWORD *)(v102 + 64) = 0;
                *(_DWORD *)(v102 + 72) = 0;
                *(_OWORD *)(v102 + 24) = 0;
                *(_OWORD *)(v102 + 48) = 0;
                *(_QWORD *)&v288 = v288 + 1;
                copy_tinfo_t(v102 + 64, v101);
                v284 = 1;
                copy_tinfo_t(&v290, &v284);
                clear_tinfo_t(&v284);
                if ( !(unsigned __int8)calc_arglocs(&v287) || *(_DWORD *)v287 != 1 )
                {
                  if ( v293 )
                  {
                    *(_QWORD *)&v294 = 0;
                    qfree(v293);
                  }
                  cleanup_argloc(&v291);
                  clear_tinfo_t(&v290);
                  v210 = v287;
                  if ( v287 )
                  {
                    v211 = v288;
                    v212 = 0;
                    if ( (_QWORD)v288 )
                    {
                      do
                      {
                        v213 = (_QWORD *)(v210 + 80 * v212);
                        clear_tinfo_t(v213 + 8);
                        v214 = v213[5];
                        if ( v214 )
                        {
                          v213[6] = 0;
                          qfree(v214);
                        }
                        v215 = v213[2];
                        if ( v215 )
                        {
                          v213[3] = 0;
                          qfree(v215);
                        }
                        ++v212;
                        cleanup_argloc(v213);
                        v210 = v287;
                      }
                      while ( v211 != v212 );
                    }
                    *(_QWORD *)&v288 = 0;
                    qfree(v210);
                  }
                  break;
                }
                if ( v293 )
                {
                  *(_QWORD *)&v294 = 0;
                  qfree(v293);
                }
                cleanup_argloc(&v291);
                clear_tinfo_t(&v290);
                v103 = v287;
                if ( v287 )
                {
                  v104 = v288;
                  if ( (_QWORD)v288 )
                  {
                    v230 = v100;
                    v105 = 0;
                    do
                    {
                      v106 = (_QWORD *)(v103 + 80 * v105);
                      clear_tinfo_t(v106 + 8);
                      v107 = v106[5];
                      if ( v107 )
                      {
                        v106[6] = 0;
                        qfree(v107);
                      }
                      v108 = v106[2];
                      if ( v108 )
                      {
                        v106[3] = 0;
                        qfree(v108);
                      }
                      ++v105;
                      cleanup_argloc(v106);
                      v103 = v287;
                    }
                    while ( v104 != v105 );
                    v100 = v230;
                  }
                  *(_QWORD *)&v288 = 0;
                  qfree(v103);
                }
                if ( (*v99 & 2) == 0 )
                {
                  v109 = (_QWORD *)v99[2];
                  if ( (*(_BYTE *)v109 & 2) != 0 )
                  {
                    v187 = (_QWORD *)(*v99 & 0xFFFFFFFFFFFFFFFCLL);
                    v188 = *v187;
                    if ( (*v187 & 2) != 0 || v99 != (_QWORD *)v187[2] )
                    {
LABEL_421:
                      v99 = v187;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v189 = v187;
                        v190 = v188 & 0xFFFFFFFFFFFFFFFCLL;
                        v188 = *(_QWORD *)(v188 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v188 & 2) != 0 )
                          break;
                        v187 = (_QWORD *)v190;
                        if ( v189 != *(_QWORD **)(v190 + 16) )
                          goto LABEL_421;
                      }
                      v99 = (_QWORD *)v190;
                    }
                  }
                  else
                  {
                    do
                    {
                      v99 = v109;
                      v109 = (_QWORD *)v109[1];
                    }
                    while ( (*(_BYTE *)v109 & 2) == 0 );
                  }
                }
                if ( (_QWORD *)a2[15] == v99 )
                {
                  if ( v97 )
                    goto LABEL_349;
                  goto LABEL_240;
                }
              }
              if ( !v97 )
                goto LABEL_459;
              goto LABEL_493;
            }
          }
        }
        goto LABEL_240;
      }
LABEL_459:
      if ( (unsigned __int8)sub_64280(a2) )
LABEL_241:
        sub_D1180(v272);
      v110 = a2[9];
      if ( v110 )
      {
        a2[10] = 0;
        qfree(v110);
        a2[9] = 0;
        a2[11] = 0;
      }
      goto LABEL_244;
    }
LABEL_240:
    sub_64280(a2);
    goto LABEL_241;
  }
  if ( v248 )
  {
    v161 = v143 != v141;
    if ( v278 )
    {
      v204 = *(_DWORD *)(a3 + 792);
      v205 = *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v151);
      v206 = (unsigned int *)v287;
      v207 = v287 + 4 * v288;
      v208 = v205 >= v204;
      if ( v287 == v207 )
      {
LABEL_466:
        v161 |= v208;
      }
      else
      {
        while ( 1 )
        {
          v283 = (unsigned int *)v207;
          v282 = v204;
          v280 = v205;
          v275 = v206;
          v243 = *v206;
          v209 = sub_13CCC0(a3, *v206);
          v205 = v280;
          v204 = v282;
          v207 = (__int64)v283;
          if ( (*(_BYTE *)(v209 + 26) & 8) == 0
            && !*(_DWORD *)(v209 + 92)
            && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v243) >= *(_DWORD *)(a3 + 792) )
          {
            break;
          }
          v206 = v275 + 1;
          if ( v283 == v275 + 1 )
            goto LABEL_466;
        }
        if ( v280 < v282 )
          goto LABEL_390;
      }
    }
    if ( !v161 )
      goto LABEL_390;
LABEL_365:
    v158 = (__m128i *)v287;
    goto LABEL_366;
  }
LABEL_467:
  if ( v287 )
  {
    *(_QWORD *)&v288 = 0;
    qfree(v287);
  }
  return 0;
}
