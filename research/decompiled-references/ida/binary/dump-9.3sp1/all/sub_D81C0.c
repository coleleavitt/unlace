__int64 __fastcall sub_D81C0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v7; // rbp
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
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // edx
  unsigned int v32; // ecx
  char v33; // al
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r14
  unsigned __int64 *v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 *v47; // rdx
  __m128i v48; // xmm0
  __int64 v49; // rcx
  _BYTE *v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rsi
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  _DWORD *v62; // r8
  unsigned int v63; // eax
  int v64; // esi
  int v65; // eax
  char v67; // al
  _DWORD *v68; // rdi
  bool v69; // al
  _QWORD *v70; // r8
  __int64 v71; // r9
  int v72; // r10d
  _DWORD *v73; // r11
  bool v74; // zf
  int v75; // eax
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __m128i v83; // xmm0
  unsigned int v84; // eax
  unsigned int v85; // eax
  char v86; // cl
  unsigned __int64 v87; // rax
  __m128i v88; // xmm0
  bool v89; // cc
  _BYTE *v90; // rdx
  __int64 v91; // rax
  char v92; // r13
  _QWORD *v93; // rax
  _QWORD *v94; // r12
  char v95; // bl
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // r14
  __int64 v99; // rbp
  _QWORD *v100; // rbx
  __int64 v101; // rdi
  __int64 v102; // rdi
  _QWORD *v103; // rdx
  __int64 v104; // rdi
  unsigned __int64 v105; // rbx
  unsigned __int64 v106; // rbp
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rax
  int v109; // eax
  int v110; // r10d
  bool v111; // al
  int v112; // r10d
  bool v113; // al
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  __int64 v122; // rsi
  unsigned int v123; // eax
  _DWORD *v124; // rdx
  unsigned int v125; // eax
  __int64 v126; // rbx
  unsigned __int64 v127; // rcx
  __int64 v128; // rsi
  unsigned int v129; // eax
  _DWORD *v130; // rdx
  unsigned int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rdx
  int v137; // r13d
  __int64 v138; // rdi
  int v139; // ebp
  __int64 v140; // r9
  __int64 v141; // r12
  __int64 v142; // rax
  int v143; // r10d
  __int64 v144; // rsi
  int v145; // r10d
  __int64 v146; // rsi
  unsigned int v147; // r14d
  int v148; // r12d
  __int64 v149; // rax
  __int64 v150; // rsi
  _QWORD *v151; // rbx
  char v152; // bp
  unsigned int *v153; // rdx
  __m128i *v154; // r12
  __int64 v155; // rax
  __int64 v156; // rax
  char v157; // r12
  __int64 v158; // rax
  char *v159; // r14
  unsigned __int64 v160; // rdx
  __m128i *v161; // r8
  __int32 v162; // ecx
  __int32 v163; // edx
  __int32 *v164; // rax
  __m128i *v165; // rsi
  int *v166; // r12
  int *v167; // r14
  __int64 v168; // rax
  int v169; // r8d
  __int64 v170; // rbx
  int v171; // r11d
  __int64 v172; // rsi
  int v173; // ebx
  int v174; // r12d
  unsigned __int64 v175; // rax
  __int64 *v176; // rbx
  unsigned int v177; // ecx
  unsigned int v178; // ebp
  __int64 v179; // rax
  int v180; // r13d
  __int64 v181; // r14
  _QWORD *v182; // rax
  __int64 v183; // rdx
  _QWORD *v184; // r12
  unsigned __int64 v185; // rcx
  int v186; // eax
  int v187; // eax
  __int64 v188; // rdx
  __int64 v189; // rcx
  _DWORD *v190; // rdx
  int v191; // ecx
  __int64 v192; // rdx
  int v193; // r9d
  __int64 v194; // rdi
  __int64 v195; // rdi
  __int64 v196; // rsi
  _QWORD *v197; // rax
  int v198; // r11d
  int v199; // r10d
  unsigned int *v200; // rdx
  unsigned int *v201; // r9
  bool v202; // bl
  __int64 v203; // rax
  __int64 v204; // rdi
  __int64 v205; // r12
  __int64 v206; // rbx
  _QWORD *v207; // rbp
  __int64 v208; // rdi
  __int64 v209; // rdi
  unsigned __int64 v210; // rsi
  unsigned __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rbp
  __int64 v216; // rdx
  __int64 v217; // rax
  __int64 v218; // rbx
  __int64 v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rax
  int v222; // [rsp+0h] [rbp-158h]
  char v223; // [rsp+0h] [rbp-158h]
  int v224; // [rsp+0h] [rbp-158h]
  __int64 v225; // [rsp+8h] [rbp-150h]
  int v226; // [rsp+8h] [rbp-150h]
  unsigned int v227; // [rsp+8h] [rbp-150h]
  int v228; // [rsp+8h] [rbp-150h]
  __int64 v229; // [rsp+8h] [rbp-150h]
  int v230; // [rsp+8h] [rbp-150h]
  int v231; // [rsp+8h] [rbp-150h]
  unsigned int *v232; // [rsp+8h] [rbp-150h]
  __int64 v233; // [rsp+8h] [rbp-150h]
  int v234; // [rsp+8h] [rbp-150h]
  unsigned int v235; // [rsp+8h] [rbp-150h]
  int v236; // [rsp+10h] [rbp-148h]
  unsigned __int64 v237; // [rsp+10h] [rbp-148h]
  int v238; // [rsp+18h] [rbp-140h]
  _QWORD *v239; // [rsp+20h] [rbp-138h]
  char v240; // [rsp+20h] [rbp-138h]
  int v241; // [rsp+28h] [rbp-130h]
  int v242; // [rsp+28h] [rbp-130h]
  bool v243; // [rsp+2Ch] [rbp-12Ch]
  char v244; // [rsp+2Ch] [rbp-12Ch]
  int v245; // [rsp+2Ch] [rbp-12Ch]
  _QWORD *v247; // [rsp+38h] [rbp-120h]
  _DWORD *v248; // [rsp+38h] [rbp-120h]
  unsigned int v249; // [rsp+38h] [rbp-120h]
  __int64 v250; // [rsp+38h] [rbp-120h]
  __int64 v251; // [rsp+38h] [rbp-120h]
  char v252; // [rsp+38h] [rbp-120h]
  unsigned __int64 *v253; // [rsp+40h] [rbp-118h]
  __int64 v254; // [rsp+40h] [rbp-118h]
  __int64 v255; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v256; // [rsp+40h] [rbp-118h]
  char v257; // [rsp+40h] [rbp-118h]
  unsigned __int64 *v258; // [rsp+40h] [rbp-118h]
  __int64 v260; // [rsp+50h] [rbp-108h]
  int v261; // [rsp+50h] [rbp-108h]
  __int64 *v262; // [rsp+58h] [rbp-100h]
  __int64 *v263; // [rsp+60h] [rbp-F8h]
  char v264; // [rsp+68h] [rbp-F0h]
  __int64 v265; // [rsp+68h] [rbp-F0h]
  unsigned int *v266; // [rsp+70h] [rbp-E8h]
  int v267; // [rsp+70h] [rbp-E8h]
  int v268; // [rsp+78h] [rbp-E0h]
  char v269; // [rsp+78h] [rbp-E0h]
  int v270; // [rsp+7Ch] [rbp-DCh]
  int v271; // [rsp+7Ch] [rbp-DCh]
  __int64 v272; // [rsp+80h] [rbp-D8h]
  int v273; // [rsp+80h] [rbp-D8h]
  unsigned int *v274; // [rsp+88h] [rbp-D0h]
  __int64 v275; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v276; // [rsp+B8h] [rbp-A0h]
  __int64 v277; // [rsp+C8h] [rbp-90h]
  __int64 v278; // [rsp+D0h] [rbp-88h]
  __int64 v279; // [rsp+D8h] [rbp-80h]
  __int128 v280; // [rsp+E0h] [rbp-78h]
  __int64 v281; // [rsp+F0h] [rbp-68h]
  __int128 v282; // [rsp+F8h] [rbp-60h]
  char v283; // [rsp+108h] [rbp-50h]
  unsigned __int64 v284; // [rsp+118h] [rbp-40h]

  v284 = __readfsqword(0x28u);
  v243 = 0;
  if ( !*(_BYTE *)(a3 + 320) )
    v243 = (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0;
  v7 = (__int64)a2;
  v9 = (_QWORD *)(a3 + 296);
  v260 = *(_QWORD *)(a3 + 1504);
  v241 = *(_DWORD *)(v260 + 80);
  v268 = 2 * v241;
  v263 = a2 + 6;
  v262 = a2 + 9;
LABEL_4:
  sub_D1810((_QWORD *)v7);
  LODWORD(v10) = *(_QWORD *)(a1 + 96);
  v11 = 4LL * ((int)v10 - 1);
  while ( (int)v10 > 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + v11);
    v11 -= 4;
    if ( !sub_64930(v9, v12) )
      goto LABEL_9;
    LODWORD(v10) = v10 - 1;
  }
  LODWORD(v10) = 0;
LABEL_9:
  v13 = *(_QWORD *)(a1 + 120);
  v225 = v7;
  v14 = (int)v13;
  v15 = 4LL * ((int)v13 - 1);
  while ( 1 )
  {
    if ( (int)v14 <= 0 )
    {
      v14 = 0;
      v7 = v225;
      v10 = (int)v10;
      if ( *(_DWORD *)a1 != 3 )
        goto LABEL_14;
      goto LABEL_94;
    }
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + v15);
    v15 -= 4;
    if ( !sub_64930(v9, v16) )
      break;
    v14 = (int)v14 - 1;
  }
  v7 = v225;
  v10 = (int)v10;
  if ( *(_DWORD *)a1 != 3 )
    goto LABEL_14;
LABEL_94:
  if ( (int)v14 <= (int)v10 )
    v10 = (int)v14;
  else
    v14 = (int)v10;
LABEL_14:
  LODWORD(v275) = -1;
  v17 = *(_QWORD *)(v7 + 56);
  if ( v10 >= v17 )
  {
    if ( v17 >= v10 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v7 + 48);
    v19 = *(_QWORD *)(v7 + 64);
    if ( (unsigned __int64)&v275 < v18 || (unsigned __int64)&v275 >= v18 + 4 * v19 )
    {
      if ( v19 >= v10
        || (v116 = qvector_reserve((__int64)v263, v18, v10, 4),
            v17 = *(_QWORD *)(v7 + 56),
            *(_QWORD *)(v7 + 48) = v116,
            v18 = v116,
            v17 < v10) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v18 + 4 * v17++) = v275;
          if ( v10 == v17 )
            break;
          v18 = *(_QWORD *)(v7 + 48);
        }
      }
    }
    else if ( v19 >= v10
           || (v119 = qvector_reserve((__int64)v263, v18, v10, 4),
               v17 = *(_QWORD *)(v7 + 56),
               *(_QWORD *)(v7 + 48) = v119,
               v18 = v119,
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
  LODWORD(v275) = -1;
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
    if ( (unsigned __int64)&v275 < v21 || (unsigned __int64)&v275 >= v21 + 4 * v22 )
    {
      if ( v22 >= v14
        || (v115 = qvector_reserve((__int64)v262, v21, v14, 4),
            v20 = *(_QWORD *)(v7 + 80),
            *(_QWORD *)(v7 + 72) = v115,
            v21 = v115,
            v20 < v14) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v20++) = v275;
          if ( v14 == v20 )
            break;
          v21 = *(_QWORD *)(v7 + 72);
        }
      }
    }
    else if ( v22 >= v14
           || (v118 = qvector_reserve((__int64)v262, v21, v14, 4),
               v20 = *(_QWORD *)(v7 + 80),
               *(_QWORD *)(v7 + 72) = v118,
               v21 = v118,
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
  if ( !*(_QWORD *)(a3 + 464) )
    goto LABEL_203;
  v222 = 0;
  v23 = 0;
  v226 = -1;
  v239 = v9;
  while ( 1 )
  {
    v24 = *(int *)(*(_QWORD *)(a3 + 456) + 4 * v23);
    v236 = v24;
    v25 = 104 * v24;
    v26 = 104 * v24 + *(_QWORD *)(a3 + 432);
    if ( !a1 || !(unsigned __int8)sub_36F620(*(_QWORD *)(a3 + 1504), *(unsigned int *)(a1 + 72)) || *(_DWORD *)v26 == 1 )
    {
      v55 = sub_1C3500(v26);
      v30 = v55;
      if ( v55 == -1 || v55 < *(_QWORD *)(a3 + 144) )
        goto LABEL_78;
      goto LABEL_41;
    }
    v27 = *(unsigned int *)(a1 + 72);
    v28 = *(_QWORD *)(a3 + 1504);
    *(_QWORD *)&v276 = a1;
    v275 = (__int64)off_4DCC08;
    *((_QWORD *)&v276 + 1) = a3;
    if ( (unsigned __int8)sub_36F620(v28, v27) )
    {
      get_stkarg_area_info();
      v29 = *(_QWORD *)(a3 + 144) - *(int *)(a3 + 120);
    }
    else
    {
      v29 = -1;
    }
    v277 = v29;
    v278 = -1;
    if ( (unsigned int)for_all_arglocs() == -1 )
      break;
    v30 = v278;
    if ( v278 == -1 )
      goto LABEL_78;
LABEL_41:
    v227 = *(_DWORD *)(a1 + 72);
    get_tinfo_size();
    v31 = 0;
    v32 = v227;
    if ( (v241 & 0x40000000) == 0 )
    {
      if ( v241 <= 0 )
      {
        if ( v227 <= 0x10 )
          goto LABEL_167;
        goto LABEL_147;
      }
      if ( v227 > 0x10 )
        goto LABEL_44;
      goto LABEL_164;
    }
    if ( v227 > 0x10 )
    {
      if ( v227 == 256 || v227 == 176 )
      {
        v31 = 2 * v241;
        if ( v241 <= v268 )
          v31 = v241;
        goto LABEL_49;
      }
      goto LABEL_128;
    }
    v109 = getinf();
    if ( v109 != 176 && v109 != 256 )
    {
      v32 = v227;
LABEL_128:
      v249 = v32;
      v67 = getinf_flag();
      v31 = 0;
      if ( v67 )
        goto LABEL_49;
      v31 = 2 * v241;
      if ( v241 <= v268 )
      {
        if ( v249 > 0x10 )
        {
          v31 = 2 * v241;
LABEL_149:
          v228 = v31;
LABEL_47:
          v33 = getinf_flag();
          v31 = v228;
          if ( v33 )
            goto LABEL_49;
          goto LABEL_48;
        }
LABEL_166:
        v31 = 2 * v241;
LABEL_167:
        v231 = v31;
        v85 = getinf();
        v31 = v231;
        v32 = v85;
LABEL_147:
        if ( v32 == 176 || v32 == 256 )
        {
LABEL_48:
          v31 = v241;
          goto LABEL_49;
        }
        goto LABEL_149;
      }
      if ( v249 > 0x10 )
        goto LABEL_46;
      goto LABEL_163;
    }
    if ( v241 <= v268 )
      goto LABEL_166;
LABEL_163:
    v31 = 2 * v241;
LABEL_164:
    v230 = v31;
    v84 = getinf();
    v31 = v230;
    v32 = v84;
LABEL_44:
    if ( v32 != 176 && v32 != 256 )
    {
LABEL_46:
      v228 = v31;
      goto LABEL_47;
    }
LABEL_49:
    v34 = v241;
    if ( v31 <= v241 )
      v34 = v31;
    if ( (*(_BYTE *)(v26 + 27) & 4) != 0 )
      v31 = v34;
    v35 = v25 + *(_QWORD *)(a3 + 432);
    v36 = -v31 & (unsigned __int64)v30;
    if ( *(_DWORD *)v35 == 1 )
    {
      v229 = v25 + *(_QWORD *)(a3 + 432);
      v56 = sub_D19A0(a1, a3);
      v35 = v229;
      if ( v36 < v56 )
        goto LABEL_97;
    }
    v37 = *(unsigned __int64 **)(v7 + 120);
    if ( !v37 )
    {
      if ( !*(_QWORD *)(v7 + 128) )
      {
        v226 = -1;
        v247 = (_QWORD *)(v7 + 120);
LABEL_157:
        v82 = qalloc();
        v83 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v82, (__m128i)(unsigned __int64)v82);
        if ( !v82 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v82 + 32) = 0;
        *(_OWORD *)(v82 + 16) = 0;
        *(__m128i *)(v82 + 8) = v83;
        *(_QWORD *)v82 = v82 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_QWORD *)(v7 + 120) = v82;
        *(_QWORD *)v82 = v82 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v82 & 3LL;
        *(__m128i *)(*(_QWORD *)(v7 + 120) + 8LL) = _mm_unpacklo_epi64(
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120),
                                                      (__m128i)*(unsigned __int64 *)(v7 + 120));
        **(_QWORD **)(v7 + 120) &= ~1uLL;
        **(_QWORD **)(v7 + 120) |= 2uLL;
LABEL_72:
        v253 = *(unsigned __int64 **)(v7 + 120);
        v46 = qalloc();
        if ( !v46 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v47 = v253;
        *(_QWORD *)(v46 + 32) = 0;
        *(_OWORD *)v46 = 0;
        *(_OWORD *)(v46 + 16) = 0;
        *(_QWORD *)(v46 + 24) = v36;
        *(_QWORD *)v46 = (unsigned __int64)v253 & 0xFFFFFFFFFFFFFFFCLL;
        v48 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
        *(_QWORD *)v46 = (unsigned __int64)v253 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v46 + 8) = _mm_unpacklo_epi64(v48, v48);
        if ( v253 == *(unsigned __int64 **)(v7 + 120) )
        {
LABEL_270:
          *v47 = v46 & 0xFFFFFFFFFFFFFFFCLL | *v47 & 3;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8LL) = v46;
          *(_QWORD *)(*(_QWORD *)(v7 + 120) + 16LL) = v46;
          v114 = *(_QWORD *)v46 & 2LL;
          *(_QWORD *)v46 &= ~1uLL;
          *(_QWORD *)v46 = v114 | *(_QWORD *)(v7 + 120) & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_76;
        }
        v253[1] = v46;
        v49 = *(_QWORD *)(v7 + 120);
        if ( v253 == *(unsigned __int64 **)(v49 + 8) )
          goto LABEL_177;
        goto LABEL_75;
      }
      v38 = unk_0;
      if ( (unk_0 & 2) == 0 )
        goto LABEL_59;
      goto LABEL_263;
    }
    v38 = *v37;
    v39 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v39 )
    {
      v40 = *(_QWORD *)(v7 + 120);
      if ( (*(_BYTE *)(*v37 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_57;
      do
      {
        if ( v36 > *(_QWORD *)(v39 + 24) )
        {
          v39 = *(_QWORD *)(v39 + 16);
        }
        else
        {
          v40 = v39;
          v39 = *(_QWORD *)(v39 + 8);
        }
      }
      while ( (*(_BYTE *)v39 & 2) == 0 );
      if ( v37 == (unsigned __int64 *)v40 )
      {
LABEL_57:
        if ( !*(_QWORD *)(v7 + 128) )
          goto LABEL_71;
        if ( (v38 & 2) == 0 )
          goto LABEL_59;
LABEL_263:
        v42 = v37[2];
        goto LABEL_264;
      }
    }
    else
    {
      v40 = 0;
    }
    if ( v36 == *(_QWORD *)(v40 + 24) )
    {
      v64 = *(_DWORD *)(v40 + 32);
      v226 = v64;
      if ( v64 != -1 )
      {
        v57 = *(_QWORD *)(a3 + 432) + 104LL * v64;
        goto LABEL_115;
      }
      if ( !*(_QWORD *)(v7 + 128) )
      {
        v247 = (_QWORD *)(v7 + 120);
        goto LABEL_72;
      }
      if ( v37 == (unsigned __int64 *)v40 )
      {
        if ( (v38 & 2) != 0 )
        {
          v226 = *(_DWORD *)(v37[2] + 32);
          if ( v226 == -1 )
          {
LABEL_308:
            v247 = (_QWORD *)(v7 + 120);
LABEL_309:
            v81 = *(_QWORD *)(v7 + 128);
            goto LABEL_171;
          }
LABEL_265:
          v258 = *(unsigned __int64 **)(v7 + 120);
          v251 = v35;
          v113 = sub_CF620((int *)(*(_QWORD *)(a3 + 432) + 104LL * v226), v35);
          v35 = v251;
          v37 = v258;
          if ( v113 )
          {
            v226 = -1;
            goto LABEL_111;
          }
LABEL_115:
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
          {
LABEL_118:
            if ( (*(_BYTE *)(v35 + 26) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v57 + 26) & 8) != 0 )
                goto LABEL_122;
              if ( !*(_DWORD *)(v35 + 92) )
              {
                if ( v243 )
                  goto LABEL_122;
                goto LABEL_101;
              }
            }
LABEL_97:
            if ( v236 == -1 )
              goto LABEL_197;
          }
          else
          {
            v65 = *(_DWORD *)v57;
            if ( *(_DWORD *)v35 != 1 )
            {
              if ( v65 != 1 )
                goto LABEL_118;
LABEL_99:
              if ( v243 || (*(_BYTE *)(v57 + 26) & 8) != 0 )
                goto LABEL_122;
LABEL_101:
              if ( *(_DWORD *)(v57 + 92) )
                goto LABEL_122;
              if ( *(_BYTE *)(a3 + 320) )
              {
                if ( !under_debugger )
                  sub_383060(52089);
                goto LABEL_561;
              }
              v58 = *(unsigned int *)(a1 + 72);
              if ( (_DWORD)v58 != *(_DWORD *)(a3 + 72) || (_DWORD)v58 == 112 && (*(_BYTE *)(v260 + 48) & 8) != 0 )
                return 0;
              v248 = (_DWORD *)v57;
              v59 = sub_36F620(v260, v58);
              v62 = v248;
              if ( v59 )
              {
                v63 = *(_DWORD *)(a1 + 72) & 0xFFFFFFF0;
                if ( v63 == 64 || v63 == 208 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 936) + 56LL))(*(_QWORD *)(a3 + 936)) )
                  {
                    v62 = v248;
                    if ( *v248 == 1 )
                    {
LABEL_122:
                      v9 = v239;
LABEL_123:
                      if ( !(unsigned __int8)sub_D2F80(a1, a3, v226) )
                        return 0;
                      goto LABEL_4;
                    }
                  }
                }
              }
              if ( !(unsigned __int8)sub_1EEA60(a3, v58, v60, v61, v62) )
              {
                if ( !under_debugger )
                  sub_383060(52020);
                goto LABEL_561;
              }
              v37 = *(unsigned __int64 **)(v7 + 120);
LABEL_111:
              v247 = (_QWORD *)(v7 + 120);
              if ( !v37 )
                goto LABEL_157;
              goto LABEL_309;
            }
            if ( v65 == 1 )
              goto LABEL_118;
            if ( v236 == -1 )
            {
LABEL_197:
              v226 = -1;
              v37 = *(unsigned __int64 **)(v7 + 120);
              goto LABEL_111;
            }
          }
          v226 = v236;
          v57 = v25 + *(_QWORD *)(a3 + 432);
          goto LABEL_99;
        }
LABEL_59:
        v41 = v37[1];
        if ( (*(_BYTE *)v41 & 2) != 0 )
        {
          v42 = v38 & 0xFFFFFFFFFFFFFFFCLL;
          v43 = *(_QWORD *)v42;
          if ( (*(_QWORD *)v42 & 2) == 0 )
          {
            v44 = v42;
            if ( *(unsigned __int64 **)(v42 + 8) == v37 )
            {
              do
              {
                v45 = v44;
                v42 = v43 & 0xFFFFFFFFFFFFFFFCLL;
                v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v43 & 2) != 0 )
                  break;
                v44 = v42;
              }
              while ( *(_QWORD *)(v42 + 8) == v45 );
            }
          }
        }
        else
        {
          do
          {
            v42 = v41;
            v41 = *(_QWORD *)(v41 + 16);
          }
          while ( (*(_BYTE *)v41 & 2) == 0 );
        }
LABEL_264:
        v226 = *(_DWORD *)(v42 + 32);
        if ( v226 != -1 )
          goto LABEL_265;
        goto LABEL_111;
      }
    }
    else if ( !*(_QWORD *)(v7 + 128) )
    {
LABEL_71:
      v226 = -1;
      v247 = (_QWORD *)(v7 + 120);
      goto LABEL_72;
    }
    v68 = (_DWORD *)v35;
    v255 = *(_QWORD *)(v7 + 120);
    v69 = sub_CF620((int *)v35, *(_QWORD *)(a3 + 432) + 104LL * *(int *)(v40 + 32));
    v37 = (unsigned __int64 *)v255;
    v35 = (__int64)v68;
    v74 = !v69;
    v75 = -1;
    if ( v74 )
      v75 = v72;
    v226 = v75;
    if ( *(_QWORD **)(v255 + 8) != v70 )
    {
      if ( (*v70 & 2) != 0 )
      {
        v77 = v70[2];
      }
      else
      {
        v76 = v70[1];
        if ( (*(_BYTE *)v76 & 2) != 0 )
        {
          v77 = *v70 & 0xFFFFFFFFFFFFFFFCLL;
          v78 = *(_QWORD *)v77;
          if ( (*(_QWORD *)v77 & 2) == 0 )
          {
            while ( *(_QWORD **)(v77 + 8) == v70 )
            {
              v79 = v78 & 0xFFFFFFFFFFFFFFFCLL;
              v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v78 & 2) != 0 )
              {
                v77 = v79;
                if ( v255 != v79 )
                  goto LABEL_258;
                goto LABEL_143;
              }
              v70 = (_QWORD *)v77;
              v77 = v79;
            }
          }
        }
        else
        {
          do
          {
            v77 = v76;
            v117 = *(_QWORD *)(v76 + 16);
            if ( (*(_BYTE *)v117 & 2) != 0 )
              break;
            v77 = v117;
            v76 = *(_QWORD *)(v117 + 16);
          }
          while ( (*(_BYTE *)v76 & 2) == 0 );
        }
      }
      if ( v255 != v77 )
      {
LABEL_258:
        v110 = *(_DWORD *)(v77 + 32);
        if ( v110 != -1 )
        {
          v250 = v35;
          v111 = sub_CF620((int *)(v71 + 104LL * v110), v35);
          v35 = v250;
          if ( !v111 )
          {
            v226 = v112;
            goto LABEL_115;
          }
          v80 = v226;
          v37 = (unsigned __int64 *)v255;
          if ( v226 == -1 )
            goto LABEL_308;
LABEL_261:
          v57 = v71 + 104 * v80;
          goto LABEL_115;
        }
      }
LABEL_143:
      v80 = v226;
      if ( v226 == -1 )
      {
        v247 = (_QWORD *)(v7 + 120);
        v81 = *(_QWORD *)(v7 + 128);
        goto LABEL_171;
      }
      goto LABEL_261;
    }
    if ( *v68 == 1 && *v73 == 1 )
    {
      if ( !under_debugger )
        sub_383060(52213);
LABEL_561:
      BUG();
    }
    v226 = -1;
    v81 = *(_QWORD *)(v7 + 128);
    v247 = (_QWORD *)(v7 + 120);
LABEL_171:
    if ( !v81 )
      goto LABEL_72;
    v86 = 1;
    v87 = *v37 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v87 & 2) == 0 )
    {
      v50 = (_BYTE *)(v87 + 24);
      v89 = v36 <= *(_QWORD *)(v87 + 24);
      if ( v36 < *(_QWORD *)(v87 + 24) )
      {
LABEL_179:
        v90 = *(_BYTE **)(v87 + 8);
        v86 = 1;
        if ( (*v90 & 2) == 0 )
          goto LABEL_180;
LABEL_183:
        v37 = (unsigned __int64 *)v87;
        goto LABEL_173;
      }
      while ( !v89 )
      {
        v90 = *(_BYTE **)(v87 + 16);
        v86 = 0;
        if ( (*v90 & 2) != 0 )
          goto LABEL_183;
LABEL_180:
        v87 = (unsigned __int64)v90;
        v50 = v90 + 24;
        v89 = v36 <= *(_QWORD *)v50;
        if ( v36 < *(_QWORD *)v50 )
          goto LABEL_179;
      }
      if ( v87 )
        goto LABEL_77;
      v37 = nullptr;
    }
LABEL_173:
    v264 = v86;
    v256 = v37;
    v46 = qalloc();
    if ( !v46 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v47 = v256;
    *(_QWORD *)(v46 + 32) = 0;
    *(_OWORD *)v46 = 0;
    *(_OWORD *)(v46 + 16) = 0;
    *(_QWORD *)(v46 + 24) = v36;
    *(_QWORD *)v46 = (unsigned __int64)v256 & 0xFFFFFFFFFFFFFFFCLL;
    v88 = _mm_loadl_epi64((const __m128i *)(v7 + 120));
    *(_QWORD *)v46 = (unsigned __int64)v256 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v46 + 8) = _mm_unpacklo_epi64(v88, v88);
    if ( *(unsigned __int64 **)(v7 + 120) == v256 )
      goto LABEL_270;
    if ( !v264 )
    {
      v256[2] = v46;
      v120 = *(_QWORD *)(v7 + 120);
      if ( *(unsigned __int64 **)(v120 + 16) == v256 )
        *(_QWORD *)(v120 + 16) = v46;
      goto LABEL_75;
    }
    v256[1] = v46;
    v49 = *(_QWORD *)(v7 + 120);
    if ( *(unsigned __int64 **)(v49 + 8) == v256 )
LABEL_177:
      *(_QWORD *)(v49 + 8) = v46;
LABEL_75:
    v254 = v46;
    sub_D7DE0(v247, (__int64 *)v46);
    v46 = v254;
LABEL_76:
    ++*(_QWORD *)(v7 + 128);
    v50 = (_BYTE *)(v46 + 24);
LABEL_77:
    *((_DWORD *)v50 + 2) = v236;
    v51 = *(int *)(v26 + 88);
    v275 = v36;
    *(_QWORD *)&v276 = v51;
    sub_316BB0(v7 + 96, &v275);
LABEL_78:
    if ( (get_tinfo_property() & 0xF) == 9 && (*(_BYTE *)(v26 + 27) & 4) == 0 )
      sub_64190((__int64 *)(v7 + 32), v222);
    if ( *(_DWORD *)v26 == 1 )
    {
      sub_64190((__int64 *)v7, v222);
    }
    else
    {
      v52 = sub_D37C0(v7, a1, (_DWORD *)v26, *(unsigned int *)(v26 + 88), v222);
      if ( v52 == -1 )
        return 0;
      if ( v52 == 1 )
      {
        v132 = v25;
        v9 = v239;
        if ( !v243 )
        {
          v133 = v132 + *(_QWORD *)(a3 + 432);
          if ( (*(_BYTE *)(v133 + 26) & 8) == 0 && !*(_DWORD *)(v133 + 92) )
            return 0;
        }
        goto LABEL_201;
      }
      if ( v243
        && !(unsigned __int8)sub_1C3110(v26, 0, 0, v53, v54)
        && !(unsigned __int8)sub_D4680(a1, a3, (_DWORD *)v26) )
      {
        v9 = v239;
        goto LABEL_201;
      }
      if ( ((*(_DWORD *)v26 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( (unsigned int)(*(_DWORD *)v26 - 3) > 1 )
        {
          if ( !under_debugger )
            sub_383060(51619);
          goto LABEL_561;
        }
      }
      else
      {
        sub_64190((__int64 *)(v7 + 16), v222);
      }
    }
    v23 = ++v222;
    if ( (unsigned __int64)v222 >= *(_QWORD *)(a3 + 464) )
    {
      v9 = v239;
      goto LABEL_202;
    }
  }
  v9 = v239;
  if ( !v243 || *(_DWORD *)v26 == 1 )
    return 0;
LABEL_201:
  v226 = v236;
LABEL_202:
  if ( v226 != -1 )
    goto LABEL_123;
LABEL_203:
  v257 = *(_BYTE *)(a3 + 320);
  if ( v257 )
  {
    v121 = a2[7];
    v122 = a2[6];
    v123 = v121 - 1;
    if ( (int)v121 - 1 < 0 )
    {
LABEL_442:
      if ( v122 )
      {
        v194 = a2[6];
        a2[7] = 0;
        qfree(v194);
        a2[6] = 0;
        a2[8] = 0;
      }
    }
    else
    {
      v124 = (_DWORD *)(v122 + 4LL * v123);
      while ( *v124 == -1 )
      {
        --v123;
        --v124;
        if ( v123 == -1 )
          goto LABEL_442;
      }
      v125 = v123 + 1;
      v126 = (int)v125;
      if ( v121 < (int)v125 )
      {
        if ( a2[8] < (unsigned __int64)(int)v125 )
        {
          v122 = qvector_reserve((__int64)v263, v122, (int)v125, 4);
          a2[6] = v122;
          v121 = a2[7];
        }
        memset((void *)(v122 + 4 * v121), 0, 4 * (v126 - v121));
        a2[7] = v126;
      }
      else if ( v121 != v125 )
      {
        a2[7] = (int)v125;
      }
    }
    v127 = a2[10];
    v128 = a2[9];
    v129 = v127 - 1;
    if ( (int)v127 - 1 >= 0 )
    {
      v130 = (_DWORD *)(v128 + 4LL * v129);
      do
      {
        if ( *v130 != -1 )
        {
          v131 = v129 + 1;
          v105 = (int)v131;
          if ( v127 < (int)v131 )
          {
            if ( a2[11] < (unsigned __int64)(int)v131 )
            {
              v128 = qvector_reserve((__int64)v262, v128, (int)v131, 4);
              a2[9] = v128;
              v127 = a2[10];
            }
            memset((void *)(v128 + 4 * v127), 0, 4 * (v105 - v127));
          }
          else if ( v127 == v131 )
          {
            return 1;
          }
          goto LABEL_305;
        }
        --v129;
        --v130;
      }
      while ( v129 != -1 );
    }
    if ( v128 )
    {
      v195 = a2[9];
      a2[10] = 0;
      qfree(v195);
      a2[9] = 0;
      a2[11] = 0;
    }
    return 1;
  }
  v261 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a1 != 5 )
  {
    v91 = *(_QWORD *)(a1 + 80);
    if ( *(_DWORD *)(*(_QWORD *)(v91 + 8) + 4LL) == 13 || !*(_QWORD *)(a1 + 120) )
      goto LABEL_206;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v91 + 112) + 200LL))(
           *(_QWORD *)(v91 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v186 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
               **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) > 1u
        && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v186 )
      {
        goto LABEL_429;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 120) <= 1u
        || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
      {
        goto LABEL_206;
      }
LABEL_429:
      v186 = round_down_power2();
    }
    if ( v186 <= 7 && (unsigned __int64)a2[10] > 1 )
    {
      v187 = 1;
      v188 = 1;
      do
      {
        v189 = a2[9];
        v190 = (_DWORD *)(v189 + 4 * v188);
        if ( *v190 == -1 )
        {
          v191 = *(_DWORD *)(v189 + 4LL * (v187 - 1));
          if ( v191 != -1 )
            *v190 = v191;
        }
        v187 += 2;
        v188 = v187;
      }
      while ( v187 < (unsigned __int64)a2[10] );
    }
    goto LABEL_206;
  }
  v134 = a2[10];
  v242 = a2[7];
  LODWORD(v135) = v134;
  if ( !v134 )
  {
    v252 = 0;
    v137 = -1;
    v138 = *(_QWORD *)(a3 + 1496);
    v265 = *(_QWORD *)(a3 + 1504);
    if ( (*(_BYTE *)(v138 + 606) & 0x10) != 0 )
      goto LABEL_323;
    v240 = 0;
    v275 = 0;
    v276 = 0;
    goto LABEL_513;
  }
  v136 = a2[9];
  while ( 1 )
  {
    v137 = *(_DWORD *)(v136 + 4 * v134 - 4);
    if ( v137 != -1 )
      break;
    a2[10] = --v134;
    if ( !v134 )
      goto LABEL_321;
  }
  v137 = v134 - 1;
  LOBYTE(v134) = (int)v134 > 0;
LABEL_321:
  v252 = (v242 > 0) & v134;
  v265 = *(_QWORD *)(a3 + 1504);
  v269 = *(_BYTE *)(a3 + 320);
  if ( v269 )
  {
    v240 = 0;
    v269 = 0;
  }
  else
  {
    v138 = *(_QWORD *)(a3 + 1496);
    v240 = 0;
    if ( (*(_BYTE *)(v138 + 606) & 0x10) != 0 )
    {
LABEL_323:
      if ( *(_DWORD *)(a3 + 792)
        && (unsigned int)(**(_DWORD **)(a3 + 432) - 3) <= 1
        && (unsigned __int8)sub_374C40(v138, *(_QWORD *)(a3 + 40), &v275)
        && (v275 & 0xFFFFFFFD) == 1
        && (v217 = sub_1CE9E0(a3)) != 0
        && !*(_DWORD *)(v217 + 112)
        && (v218 = (int)sub_F2D80(a3), v218 != *(_QWORD *)(a3 + 144)) )
      {
        v219 = *(_QWORD *)(a3 + 432) + 104LL * (*(_DWORD *)(a3 + 792) - 1);
        v269 = v218 > (int)sub_1C35C0(v219, *(unsigned int *)(v219 + 88));
      }
      else
      {
        v269 = 0;
      }
      v240 = 1;
    }
  }
  v275 = 0;
  v276 = 0;
  if ( !v252 )
  {
    v135 = a2[10];
LABEL_513:
    v224 = 0;
    v174 = *(_DWORD *)(a1 + 40) - ((v135 + 1) & 0xFFFFFFFE);
    v175 = 0;
    if ( v174 <= 0 )
      goto LABEL_392;
    goto LABEL_400;
  }
  v224 = 0;
  v139 = 0;
  while ( 1 )
  {
    v237 = v139;
    v147 = *(_DWORD *)(a2[9] + 4LL * v139);
    if ( v147 == -1 )
    {
      if ( (v139 & 1) == 0 )
      {
        v148 = *(_DWORD *)(a2[6] + 4LL * v224);
        if ( v148 != -1 )
        {
          v149 = v276;
          v150 = v275;
          if ( *((_QWORD *)&v276 + 1) < (unsigned __int64)(v276 + 1) )
          {
            v275 = qvector_reserve((__int64)&v275, v275, v276 + 1, 4);
            v150 = v275;
            v149 = v276;
          }
          *(_DWORD *)(v150 + 4 * v149) = v148;
          *(_QWORD *)&v276 = v276 + 1;
        }
        ++v224;
      }
      ++v139;
      goto LABEL_338;
    }
    v140 = v224;
    v141 = 4LL * v224;
    v142 = v276;
    v143 = *(_DWORD *)(a2[6] + v141);
    if ( v143 != -1 )
    {
      v144 = v275;
      if ( *((_QWORD *)&v276 + 1) < (unsigned __int64)(v276 + 1) )
      {
        v234 = *(_DWORD *)(a2[6] + 4LL * v224);
        v275 = qvector_reserve((__int64)&v275, v275, v276 + 1, 4);
        v144 = v275;
        v140 = v224;
        v142 = v276;
        v143 = v234;
      }
      *(_DWORD *)(v144 + 4 * v142) = v143;
      v142 = v276 + 1;
      *(_QWORD *)&v276 = v276 + 1;
    }
    v238 = v224 % 2;
    if ( v139 >= v137 )
    {
      if ( v142 )
      {
LABEL_355:
        v244 = 0;
        goto LABEL_356;
      }
LABEL_354:
      ++v139;
      v146 = a2[6];
      goto LABEL_337;
    }
    v145 = v139 + 1;
    if ( v147 == *(_DWORD *)(a2[9] + 4LL * (v139 + 1)) )
      break;
    if ( v142 )
      goto LABEL_355;
    ++v139;
    v146 = a2[6];
LABEL_337:
    ++v224;
    *(_DWORD *)(v146 + v141) = v147;
LABEL_338:
    if ( v137 < v139 || v224 >= v242 )
    {
      v174 = *(_DWORD *)(a1 + 40) - ((a2[10] + 1) & 0xFFFFFFFE);
      if ( v174 <= 0 )
        goto LABEL_392;
      if ( (_QWORD)v276 )
      {
        if ( !under_debugger )
          sub_383060(52424);
        goto LABEL_561;
      }
      v175 = v224;
LABEL_400:
      v176 = a2 + 4;
      if ( v175 < a2[7] )
      {
        while ( 1 )
        {
          v178 = *(_DWORD *)(a2[6] + 4 * v175);
          if ( v178 != -1 )
          {
            if ( !sub_64930(v176, v178) )
              goto LABEL_392;
            v179 = sub_13D280(a3, v178);
            v180 = *(_DWORD *)(v179 + 88);
            v181 = v179;
            if ( *(_QWORD *)(a1 + 120) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL)
                                                                     + 200LL))(
                     *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                     **(unsigned int **)(a1 + 112)) )
              {
                v177 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                         *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                         **(unsigned int **)(a1 + 112));
              }
              else
              {
                v177 = 8;
              }
              if ( *(_QWORD *)(a1 + 120) > 1u
                && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v177 )
              {
                v177 = round_down_power2();
              }
            }
            else
            {
              v177 = 8;
            }
            if ( v180 / (int)v177 > v174 )
              goto LABEL_392;
            if ( (*(_BYTE *)(v181 + 24) & 0x40) == 0
              && (unsigned __int8)sub_1EF680(v181, v265, *(unsigned int *)(v181 + 88), 2) )
            {
              sub_64340(v176, v178);
              goto LABEL_392;
            }
            if ( !v240 )
              goto LABEL_466;
            sub_CFAA0(a2, a3, v178);
          }
          v175 = ++v224;
          if ( v224 >= (unsigned __int64)a2[7] )
            goto LABEL_392;
        }
      }
      if ( v275 )
        qfree(v275);
      goto LABEL_206;
    }
  }
  v169 = v224 + 1;
  v170 = v224 + 1;
  v171 = *(_DWORD *)(a2[6] + 4 * v170);
  if ( v171 != -1 )
  {
    v172 = v275;
    if ( *((_QWORD *)&v276 + 1) < (unsigned __int64)(v142 + 1) )
    {
      v270 = *(_DWORD *)(a2[6] + 4LL * (v224 + 1));
      v272 = v140;
      v275 = qvector_reserve((__int64)&v275, v275, v142 + 1, 4);
      v172 = v275;
      v171 = v270;
      v142 = v276;
      v140 = v272;
      v169 = v224 + 1;
      v145 = v139 + 1;
    }
    *(_DWORD *)(v172 + 4 * v142) = v171;
    v142 = v276 + 1;
    *(_QWORD *)&v276 = v276 + 1;
  }
  if ( v238 == 1 )
  {
    v224 += 2;
    v192 = a2[6];
    v193 = *(_DWORD *)(v192 + 4LL * v224);
    if ( v193 == -1 )
    {
      if ( v142 )
        goto LABEL_441;
    }
    else
    {
      v196 = v275;
      if ( *((_QWORD *)&v276 + 1) < (unsigned __int64)(v142 + 1) )
      {
        v267 = *(_DWORD *)(v192 + 4LL * v224);
        v245 = v145;
        v275 = qvector_reserve((__int64)&v275, v275, v142 + 1, 4);
        v196 = v275;
        v193 = v267;
        v142 = v276;
        v145 = v245;
      }
      *(_DWORD *)(v196 + 4 * v142) = v193;
      v74 = (_QWORD)v276 == -1;
      v142 = v276 + 1;
      *(_QWORD *)&v276 = v276 + 1;
      if ( !v74 )
        goto LABEL_441;
      v192 = a2[6];
    }
    v168 = v141;
    *(_DWORD *)(v192 + 4 * v170) = v147;
    v141 = 4LL * v224;
    v139 = v145;
    goto LABEL_378;
  }
  if ( !v142 )
  {
    v141 = 4LL * (v224 + 1);
    v224 = v169;
    v139 = v145;
    *(_DWORD *)(a2[6] + 4 * v140) = v147;
    goto LABEL_354;
  }
  v224 = v169;
LABEL_441:
  v244 = v252;
LABEL_356:
  v153 = (unsigned int *)v275;
  v154 = (__m128i *)(v275 + 4 * v142);
  if ( (__m128i *)v275 == v154 )
  {
LABEL_365:
    v158 = 4 * v276;
    v159 = &v154->m128i_i8[4 * v276];
    if ( v159 == (char *)v154 )
    {
LABEL_375:
      ++v139;
      *(_QWORD *)&v276 = 0;
      v141 = 4LL * v224;
      v146 = a2[6];
      v147 = *(_DWORD *)(a2[9] + 4 * v237);
      if ( !v244 )
        goto LABEL_337;
      *(_DWORD *)(v146 + 4LL * (v224 - 1)) = v147;
      if ( v238 != 1 )
        goto LABEL_354;
      v168 = 4LL * (v224 - 2);
LABEL_378:
      *(_DWORD *)(a2[6] + v168) = -1;
      goto LABEL_354;
    }
    if ( v158 >> 2 )
    {
      _BitScanReverse64(&v160, v158 >> 2);
      v233 = 4 * v276;
      sub_CF440(v154, &v154->m128i_i32[v276], 2LL * (int)(63 - (v160 ^ 0x3F)));
      if ( v233 > 64 )
      {
        sub_CF380(v154->m128i_i8, v154[4].m128i_i8);
        v161 = v154 + 4;
        do
        {
          v162 = v161->m128i_i32[0];
          v163 = v161[-1].m128i_i32[3];
          v164 = &v161[-1].m128i_i32[3];
          if ( v161->m128i_i32[0] >= v163 )
          {
            v165 = v161;
          }
          else
          {
            do
            {
              v164[1] = v163;
              v165 = (__m128i *)v164;
              v163 = *--v164;
            }
            while ( v162 < v163 );
          }
          v161 = (__m128i *)((char *)v161 + 4);
          v165->m128i_i32[0] = v162;
        }
        while ( v159 != (char *)v161 );
LABEL_372:
        v166 = (int *)(v275 + 4 * v276);
        if ( (int *)v275 != v166 )
        {
          v167 = (int *)v275;
          do
            sub_CFAA0(a2, a3, *v167++);
          while ( v166 != v167 );
        }
        goto LABEL_375;
      }
    }
    else
    {
      sub_CF440(v154, &v154->m128i_i32[v276], -2);
    }
    sub_CF380(v154->m128i_i8, v159);
    goto LABEL_372;
  }
  while ( 1 )
  {
    v232 = v153;
    v155 = sub_13D280(a3, *v153);
    if ( (*(_BYTE *)(v155 + 26) & 8) == 0 && !*(_DWORD *)(v155 + 92) )
      break;
    v153 = v232 + 1;
    if ( v154 == (__m128i *)(v232 + 1) )
      goto LABEL_364;
  }
  v156 = sub_13D280(a3, v147);
  if ( (*(_BYTE *)(v156 + 26) & 8) != 0 || *(_DWORD *)(v156 + 92) )
  {
LABEL_389:
    if ( v139 % 2 == 1 )
    {
      v173 = v139 - 1;
      if ( v147 == *(_DWORD *)(a2[9] + 4LL * (v139 - 1)) )
      {
        v214 = sub_13D280(a3, v147);
        if ( ((*(_BYTE *)(v214 + 26) & 8) != 0 || *(_DWORD *)(v214 + 92))
          && v269
          && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v147) < *(_DWORD *)(a3 + 792) )
        {
          v215 = sub_13D280(a3, v147);
          if ( *(_QWORD *)(a1 + 120) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                   *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                   **(unsigned int **)(a1 + 112)) )
            {
              v216 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                       *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                       **(unsigned int **)(a1 + 112));
            }
            else
            {
              v216 = 8;
            }
            if ( *(_QWORD *)(a1 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < (unsigned int)v216 )
            {
              v216 = (unsigned int)round_down_power2();
            }
          }
          else
          {
            v216 = 8;
          }
          if ( (unsigned __int8)sub_1EF680(v215, v265, v216, 3) )
          {
            sub_81FC0(v262, v237);
            goto LABEL_392;
          }
        }
        v139 = v173;
      }
    }
    sub_CFAA0(a2, a3, v147);
    sub_81FC0(v262, v139);
LABEL_392:
    if ( v275 )
    {
      *(_QWORD *)&v276 = 0;
      qfree(v275);
    }
LABEL_206:
    if ( ((v261 & 0xFFFFFFF0) == 0x40 || (v261 & 0xFFFFFFF0) == 0xD0)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 936) + 56LL))(*(_QWORD *)(a3 + 936)) )
    {
      return 1;
    }
    if ( *(_DWORD *)a1 == 6 )
    {
      if ( (unsigned __int8)sub_64880(a2) )
        sub_D1740(v263);
      if ( !(unsigned __int8)sub_64780(a2, a2 + 4) )
        sub_D1740(v262);
      return 1;
    }
    v92 = *(_DWORD *)a1 == 2 || (unsigned int)(*(_DWORD *)a1 - 4) <= 1;
    if ( v92 )
    {
      if ( (unsigned __int8)sub_64880(a2) )
        goto LABEL_348;
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v93 = (_QWORD *)a2[15];
        if ( v93 )
        {
          if ( a2[16] )
          {
            v94 = (_QWORD *)v93[1];
            if ( v93 != v94 )
              goto LABEL_215;
          }
        }
LABEL_348:
        v151 = a2 + 4;
        sub_64820(a2, a2 + 4);
        v257 = v92;
LABEL_349:
        sub_D1740(v263);
        v152 = v257;
LABEL_350:
        if ( (unsigned __int8)sub_64780(a2, v151) != 1 || v152 )
          sub_D1740(v262);
LABEL_243:
        if ( *(_DWORD *)a1 == 3 )
        {
          LODWORD(v275) = -1;
          v105 = a2[7];
          v106 = a2[10];
          if ( v105 < v106 )
          {
            v107 = a2[6];
            v108 = a2[8];
            if ( (unsigned __int64)&v275 < v107 || (unsigned __int64)&v275 >= v107 + 4 * v108 )
            {
              if ( v108 >= v106
                || (v213 = qvector_reserve((__int64)v263, v107, a2[10], 4),
                    v107 = v213,
                    v105 = a2[7],
                    a2[6] = v213,
                    v105 < v106) )
              {
                while ( 1 )
                {
                  *(_DWORD *)(v107 + 4 * v105++) = v275;
                  if ( v106 == v105 )
                    break;
                  v107 = a2[6];
                }
              }
            }
            else if ( v108 >= v106
                   || (v212 = qvector_reserve((__int64)v263, v107, a2[10], 4),
                       v107 = v212,
                       v105 = a2[7],
                       a2[6] = v212,
                       v105 < v106) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v107 + 4 * v105++) = -1;
                if ( v106 == v105 )
                  break;
                v107 = a2[6];
              }
            }
            a2[7] = v106;
            return 1;
          }
          if ( v106 >= v105 )
            return 1;
          v210 = a2[9];
          v211 = a2[11];
          if ( (unsigned __int64)&v275 < v210 || (unsigned __int64)&v275 >= v210 + 4 * v211 )
          {
            if ( v211 >= v105
              || (v221 = qvector_reserve((__int64)v262, v210, v105, 4),
                  v210 = v221,
                  v106 = a2[10],
                  a2[9] = v221,
                  v106 < v105) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v210 + 4 * v106++) = v275;
                if ( v105 == v106 )
                  break;
                v210 = a2[9];
              }
            }
          }
          else if ( v211 >= v105
                 || (v220 = qvector_reserve((__int64)v262, v210, v105, 4),
                     v210 = v220,
                     v106 = a2[10],
                     a2[9] = v220,
                     v106 < v105) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v210 + 4 * v106++) = -1;
              if ( v105 == v106 )
                break;
              v210 = a2[9];
            }
          }
LABEL_305:
          a2[10] = v105;
          return 1;
        }
        return 1;
      }
LABEL_492:
      v151 = a2 + 4;
      v152 = sub_64820(a2, a2 + 4);
      if ( v152 )
        goto LABEL_349;
      goto LABEL_350;
    }
    v92 = sub_64880(a2);
    if ( !v92 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 1504) + 48LL) & 0x21) != 0 )
      {
        v197 = (_QWORD *)a2[15];
        if ( v197 )
        {
          if ( a2[16] )
          {
            v94 = (_QWORD *)v197[1];
            if ( v94 != v197 )
            {
LABEL_215:
              v95 = v261;
              if ( v261 == 192 || (v261 & 0xFFFFFF0F) != 0 )
                v95 = -64;
              while ( (get_tinfo_property() & 0x2F) == 0xD )
              {
                v275 = 0;
                v277 = 0;
                v278 = 0;
                v279 = 0;
                v281 = 0;
                v276 = 0;
                v280 = 0;
                v282 = 0;
                if ( v261 == 192 || (v261 & 0xFFFFFF0F) != 0 )
                  HIDWORD(v277) = v261;
                v283 = v95;
                v275 = qvector_reserve((__int64)&v275, 0, 1, 80);
                v96 = 80 * v276 + v275;
                *(_DWORD *)v96 = 0;
                *(_QWORD *)(v96 + 8) = 0;
                *(_QWORD *)(v96 + 16) = 0;
                *(_QWORD *)(v96 + 40) = 0;
                *(_QWORD *)(v96 + 64) = 0;
                *(_DWORD *)(v96 + 72) = 0;
                *(_OWORD *)(v96 + 24) = 0;
                *(_OWORD *)(v96 + 48) = 0;
                *(_QWORD *)&v276 = v276 + 1;
                copy_tinfo_t();
                copy_tinfo_t();
                clear_tinfo_t();
                if ( !(unsigned __int8)calc_arglocs() || *(_DWORD *)v275 != 1 )
                {
                  if ( v281 )
                  {
                    *(_QWORD *)&v282 = 0;
                    qfree(v281);
                  }
                  cleanup_argloc();
                  clear_tinfo_t();
                  v204 = v275;
                  if ( v275 )
                  {
                    v205 = v276;
                    v206 = 0;
                    if ( (_QWORD)v276 )
                    {
                      do
                      {
                        v207 = (_QWORD *)(v204 + 80 * v206);
                        clear_tinfo_t();
                        v208 = v207[5];
                        if ( v208 )
                        {
                          v207[6] = 0;
                          qfree(v208);
                        }
                        v209 = v207[2];
                        if ( v209 )
                        {
                          v207[3] = 0;
                          qfree(v209);
                        }
                        ++v206;
                        cleanup_argloc();
                        v204 = v275;
                      }
                      while ( v205 != v206 );
                    }
                    *(_QWORD *)&v276 = 0;
                    qfree(v204);
                  }
                  break;
                }
                if ( v281 )
                {
                  *(_QWORD *)&v282 = 0;
                  qfree(v281);
                }
                cleanup_argloc();
                clear_tinfo_t();
                v97 = v275;
                if ( v275 )
                {
                  v98 = v276;
                  if ( (_QWORD)v276 )
                  {
                    v223 = v95;
                    v99 = 0;
                    do
                    {
                      v100 = (_QWORD *)(v97 + 80 * v99);
                      clear_tinfo_t();
                      v101 = v100[5];
                      if ( v101 )
                      {
                        v100[6] = 0;
                        qfree(v101);
                      }
                      v102 = v100[2];
                      if ( v102 )
                      {
                        v100[3] = 0;
                        qfree(v102);
                      }
                      ++v99;
                      cleanup_argloc();
                      v97 = v275;
                    }
                    while ( v98 != v99 );
                    v95 = v223;
                  }
                  *(_QWORD *)&v276 = 0;
                  qfree(v97);
                }
                if ( (*v94 & 2) == 0 )
                {
                  v103 = (_QWORD *)v94[2];
                  if ( (*(_BYTE *)v103 & 2) != 0 )
                  {
                    v182 = (_QWORD *)(*v94 & 0xFFFFFFFFFFFFFFFCLL);
                    v183 = *v182;
                    if ( (*v182 & 2) != 0 || v94 != (_QWORD *)v182[2] )
                    {
LABEL_420:
                      v94 = v182;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v184 = v182;
                        v185 = v183 & 0xFFFFFFFFFFFFFFFCLL;
                        v183 = *(_QWORD *)(v183 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v183 & 2) != 0 )
                          break;
                        v182 = (_QWORD *)v185;
                        if ( v184 != *(_QWORD **)(v185 + 16) )
                          goto LABEL_420;
                      }
                      v94 = (_QWORD *)v185;
                    }
                  }
                  else
                  {
                    do
                    {
                      v94 = v103;
                      v103 = (_QWORD *)v103[1];
                    }
                    while ( (*(_BYTE *)v103 & 2) == 0 );
                  }
                }
                if ( (_QWORD *)a2[15] == v94 )
                {
                  if ( v92 )
                    goto LABEL_348;
                  goto LABEL_239;
                }
              }
              if ( !v92 )
                goto LABEL_458;
              goto LABEL_492;
            }
          }
        }
        goto LABEL_239;
      }
LABEL_458:
      if ( (unsigned __int8)sub_64880(a2) )
LABEL_240:
        sub_D1740(v263);
      v104 = a2[9];
      if ( v104 )
      {
        a2[10] = 0;
        qfree(v104);
        a2[9] = 0;
        a2[11] = 0;
      }
      goto LABEL_243;
    }
LABEL_239:
    sub_64880(a2);
    goto LABEL_240;
  }
  if ( v240 )
  {
    v157 = v139 != v137;
    if ( v269 )
    {
      v198 = *(_DWORD *)(a3 + 792);
      v199 = *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v147);
      v200 = (unsigned int *)v275;
      v201 = (unsigned int *)(v275 + 4 * v276);
      v202 = v199 >= v198;
      if ( (unsigned int *)v275 == v201 )
      {
LABEL_465:
        v157 |= v202;
      }
      else
      {
        while ( 1 )
        {
          v274 = v201;
          v273 = v198;
          v271 = v199;
          v266 = v200;
          v235 = *v200;
          v203 = sub_13D280(a3, *v200);
          v199 = v271;
          v198 = v273;
          v201 = v274;
          if ( (*(_BYTE *)(v203 + 26) & 8) == 0
            && !*(_DWORD *)(v203 + 92)
            && *(_DWORD *)(*(_QWORD *)(a3 + 456) + 4LL * (int)v235) >= *(_DWORD *)(a3 + 792) )
          {
            break;
          }
          v200 = v266 + 1;
          if ( v274 == v266 + 1 )
            goto LABEL_465;
        }
        if ( v271 < v273 )
          goto LABEL_389;
      }
    }
    if ( !v157 )
      goto LABEL_389;
LABEL_364:
    v154 = (__m128i *)v275;
    goto LABEL_365;
  }
LABEL_466:
  if ( v275 )
  {
    *(_QWORD *)&v276 = 0;
    qfree(v275);
  }
  return 0;
}
