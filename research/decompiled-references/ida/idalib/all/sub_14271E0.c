__int64 __fastcall sub_14271E0(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int *v8; // r14
  __int64 v11; // rbx
  __m128i v12; // rax
  __int16 v13; // di
  bool v14; // al
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // ebp
  __int64 v19; // r15
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  char *v23; // rdx
  int v24; // r15d
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  bool v27; // sf
  _QWORD *v28; // rsi
  __int64 v29; // rax
  char v30; // r15
  _QWORD *v31; // r13
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  __int64 v35; // rsi
  int v36; // ecx
  unsigned int v37; // eax
  _QWORD *v38; // rdx
  _QWORD *v39; // rbp
  unsigned __int8 *v40; // rdi
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  char *v46; // r13
  size_t v47; // r12
  unsigned int v48; // eax
  unsigned int v49; // r15d
  __int64 *v50; // r14
  __int64 *v51; // rax
  __int64 v52; // r15
  _QWORD *v53; // rax
  __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  size_t v56; // r8
  void *v57; // r9
  __int64 v58; // rax
  void *v59; // rdi
  _BYTE *v60; // rax
  int v61; // eax
  int v62; // edx
  char v63; // cl
  unsigned __int16 v64; // bp
  char v65; // al
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 *v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __m128i v71; // kr00_16
  __int64 v72; // rax
  __int64 v73; // r12
  __m128i v74; // xmm5
  __m128i v75; // xmm7
  __int64 v76; // r15
  __m128i v77; // xmm4
  __m128i v78; // xmm5
  __int64 v79; // rbp
  unsigned __int64 v80; // rdx
  char *v81; // rbp
  __int64 v82; // rax
  char v83; // al
  unsigned __int64 *v84; // rdi
  const void **v85; // rbp
  int v86; // r12d
  const void **v87; // r15
  size_t v88; // rax
  size_t v89; // r14
  const void *v90; // rbx
  int v91; // edx
  __int64 v92; // rdi
  unsigned int v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rcx
  unsigned int v96; // eax
  signed __int64 *v97; // rsi
  __int64 i; // rax
  unsigned __int64 v99; // rax
  signed __int64 v100; // rdx
  _BYTE *v101; // rsi
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  const __m128i *v104; // rdx
  __int32 v105; // esi
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 (*v108)(); // rax
  unsigned __int16 v109; // bx
  char v110; // al
  __int64 v111; // rdi
  __int64 v112; // r13
  __int64 v113; // rdi
  __int64 v114; // rbp
  unsigned __int64 v115; // rcx
  __int64 v116; // rdi
  unsigned int *v117; // r12
  size_t v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  size_t v122; // rdx
  const void *v123; // rsi
  unsigned __int64 v124; // r12
  unsigned __int64 *v125; // rcx
  bool v126; // al
  __int64 v127; // rax
  __int64 v128; // rax
  char *v129; // rsi
  char v130; // bp
  __int64 v131; // rsi
  char *v132; // rbp
  __int64 v133; // r12
  unsigned __int64 v134; // r12
  __int64 v135; // rbx
  size_t v136; // r13
  char *v137; // r15
  __int64 v138; // rdx
  unsigned __int64 v139; // rax
  __int64 v140; // rdx
  char v141; // r13
  char v142; // al
  int v143; // ecx
  unsigned __int16 v144; // bp
  char v145; // al
  __int64 v146; // rdi
  unsigned int v147; // eax
  __int64 v148; // rbp
  __int64 v149; // rax
  unsigned __int64 v150; // rdi
  void *v151; // rax
  __int32 v152; // edx
  void *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  __int64 v158; // rdx
  size_t v159; // rax
  void *v160; // rax
  _BYTE *v161; // rdi
  char *v162; // r12
  char *v163; // rbp
  char v164; // al
  unsigned __int64 v165; // rdx
  __int64 v166; // rbp
  __int64 v167; // r12
  __int64 v168; // rdx
  char v169; // r12
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // r15
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // r15
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rsi
  int v207; // edx
  _QWORD *v208; // rdi
  __m128i v210; // [rsp+68h] [rbp-DE0h]
  __int64 v211; // [rsp+68h] [rbp-DE0h]
  char *v212; // [rsp+68h] [rbp-DE0h]
  unsigned int *v213; // [rsp+70h] [rbp-DD8h]
  __int64 v214; // [rsp+78h] [rbp-DD0h]
  void *v215; // [rsp+78h] [rbp-DD0h]
  unsigned __int8 v216; // [rsp+80h] [rbp-DC8h]
  __int64 v217; // [rsp+80h] [rbp-DC8h]
  unsigned int v218; // [rsp+80h] [rbp-DC8h]
  int v219; // [rsp+98h] [rbp-DB0h]
  int n; // [rsp+A0h] [rbp-DA8h]
  size_t na; // [rsp+A0h] [rbp-DA8h]
  size_t nb; // [rsp+A0h] [rbp-DA8h]
  unsigned __int8 v223; // [rsp+ABh] [rbp-D9Dh]
  __int64 *src; // [rsp+B0h] [rbp-D98h]
  void *srca; // [rsp+B0h] [rbp-D98h]
  __int64 v227; // [rsp+B8h] [rbp-D90h]
  char v228; // [rsp+B8h] [rbp-D90h]
  unsigned int *v229; // [rsp+C0h] [rbp-D88h]
  __int64 v230; // [rsp+C0h] [rbp-D88h]
  __int64 v231; // [rsp+C0h] [rbp-D88h]
  __int64 *v232; // [rsp+D0h] [rbp-D78h]
  __m128i v233; // [rsp+D8h] [rbp-D70h]
  char v234; // [rsp+D8h] [rbp-D70h]
  _QWORD *v235; // [rsp+D8h] [rbp-D70h]
  __int64 v236; // [rsp+D8h] [rbp-D70h]
  _QWORD *v237; // [rsp+D8h] [rbp-D70h]
  char v238; // [rsp+E0h] [rbp-D68h]
  unsigned int v239; // [rsp+E8h] [rbp-D60h]
  unsigned int v240; // [rsp+ECh] [rbp-D5Ch]
  __int32 v241; // [rsp+ECh] [rbp-D5Ch]
  unsigned __int64 v242; // [rsp+F0h] [rbp-D58h]
  __int32 v243; // [rsp+F0h] [rbp-D58h]
  __int64 v244; // [rsp+F8h] [rbp-D50h]
  __int64 v245; // [rsp+100h] [rbp-D48h] BYREF
  __int64 v246; // [rsp+108h] [rbp-D40h]
  __int64 v247; // [rsp+110h] [rbp-D38h]
  __int64 v248; // [rsp+118h] [rbp-D30h] BYREF
  __m128i v249; // [rsp+120h] [rbp-D28h]
  char v250; // [rsp+13Ch] [rbp-D0Ch] BYREF
  char v251; // [rsp+13Dh] [rbp-D0Bh] BYREF
  unsigned __int8 v252; // [rsp+13Eh] [rbp-D0Ah] BYREF
  char v253; // [rsp+13Fh] [rbp-D09h] BYREF
  __int64 v254; // [rsp+140h] [rbp-D08h] BYREF
  _QWORD *v255; // [rsp+148h] [rbp-D00h] BYREF
  __int64 v256; // [rsp+154h] [rbp-CF4h]
  int v257; // [rsp+15Ch] [rbp-CECh]
  __m128i v258; // [rsp+160h] [rbp-CE8h] BYREF
  __m128i v259; // [rsp+170h] [rbp-CD8h] BYREF
  __m128i v260; // [rsp+180h] [rbp-CC8h] BYREF
  __m128i v261; // [rsp+190h] [rbp-CB8h] BYREF
  __m128i v262; // [rsp+1A0h] [rbp-CA8h] BYREF
  __m128i v263; // [rsp+1B0h] [rbp-C98h] BYREF
  __m128i v264; // [rsp+1C0h] [rbp-C88h] BYREF
  __m128i v265; // [rsp+1D0h] [rbp-C78h] BYREF
  __m128i v266[7]; // [rsp+1E0h] [rbp-C68h] BYREF
  void *v267[2]; // [rsp+250h] [rbp-BF8h] BYREF
  char v268; // [rsp+261h] [rbp-BE7h]
  void *v269; // [rsp+268h] [rbp-BE0h]
  __int64 v270; // [rsp+278h] [rbp-BD0h] BYREF
  __m128i v271; // [rsp+290h] [rbp-BB8h] BYREF
  _BYTE s2[24]; // [rsp+2A0h] [rbp-BA8h] BYREF
  __int32 v273; // [rsp+2B8h] [rbp-B90h]
  void *ptr; // [rsp+2E0h] [rbp-B68h] BYREF
  __m128i si128; // [rsp+2E8h] [rbp-B60h]
  _BYTE v276[136]; // [rsp+2F8h] [rbp-B50h] BYREF
  __m128i v277; // [rsp+380h] [rbp-AC8h] BYREF
  unsigned __int64 v278; // [rsp+390h] [rbp-AB8h]
  _BYTE v279[136]; // [rsp+398h] [rbp-AB0h] BYREF
  _BYTE v280[40]; // [rsp+420h] [rbp-A28h] BYREF
  __int32 v281; // [rsp+448h] [rbp-A00h]
  void *v282; // [rsp+4C0h] [rbp-988h] BYREF
  __m128i v283; // [rsp+4C8h] [rbp-980h] BYREF
  _BYTE v284[248]; // [rsp+4D8h] [rbp-970h] BYREF
  void *v285; // [rsp+5D0h] [rbp-878h] BYREF
  __m128i v286; // [rsp+5D8h] [rbp-870h]
  _BYTE v287[1032]; // [rsp+5E8h] [rbp-860h] BYREF
  void *v288; // [rsp+9F0h] [rbp-458h] BYREF
  __m128i v289; // [rsp+9F8h] [rbp-450h]
  _BYTE v290[1088]; // [rsp+A08h] [rbp-440h] BYREF

  v8 = a4;
  v11 = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v276;
  v12.m128i_i64[0] = sub_145C740(a1, a4, &ptr, 0);
  v13 = *((_WORD *)v8 + 8);
  v258 = v12;
  v14 = sub_10CCDE0(v13);
  v15 = *v8;
  if ( v14 )
  {
    v16 = v8[1];
    if ( !v16 )
      v16 = *v8;
  }
  else
  {
    v16 = v15 + v8[1];
  }
  v256 = __PAIR64__(v16, v15);
  v210 = v258;
  LOBYTE(v257) = 0;
  v223 = sub_141AD20(v11, v15, (char **)&v258);
  if ( !v258.m128i_i64[1] )
  {
    v17 = 0;
    goto LABEL_6;
  }
  v219 = a2;
  v216 = a2 == 0;
  if ( !a2 )
    v219 = *a3;
  if ( *(_DWORD *)(v11 + 944) )
  {
    sub_FC70B0((__int64)&v288, *(_QWORD *)(v11 + 48), v219, 1138);
    sub_AE9DF0((unsigned __int8 **)&v288, v216, 2u);
    sub_AEA040((__int64)&v288);
    sub_FC70B0((__int64)&v288, *(_QWORD *)(v11 + 48), *(_DWORD *)(v11 + 944), 111);
    sub_AEA040((__int64)&v288);
    *(_DWORD *)(v11 + 944) = 0;
    *(_QWORD *)(v11 + 952) = 0;
  }
  if ( *(_DWORD *)(v11 + 960) )
  {
    sub_FC70B0((__int64)&v288, *(_QWORD *)(v11 + 48), v219, 1139);
    sub_AE9DF0((unsigned __int8 **)&v288, v216, 2u);
    sub_AEA040((__int64)&v288);
    sub_FC70B0((__int64)&v288, *(_QWORD *)(v11 + 48), *(_DWORD *)(v11 + 960), 111);
    sub_AEA040((__int64)&v288);
    *(_DWORD *)(v11 + 960) = 0;
  }
  v19 = *(_QWORD *)(v11 + 104);
  v214 = *(_QWORD *)(v19 + 600);
  if ( v214 )
  {
    v20 = sub_2244B30(v210.m128i_i64[0], v210.m128i_i64[1]);
    v21 = sub_2244E60(v214, v210.m128i_i64[0], v210.m128i_i64[1], v20);
    if ( v21 == -1 )
      sub_11727E0((__int64 **)&v288, (__int64 *)(*(_QWORD *)v214 + 8LL * *(unsigned int *)(v214 + 8)), 1);
    else
      sub_11727E0((__int64 **)&v288, (__int64 *)(*(_QWORD *)v214 + 8LL * v21), 1);
    sub_116E610((__int64 **)&v288, (__int64 *)v288, 1);
    v215 = v288;
    sub_11727E0(
      (__int64 **)&v288,
      (__int64 *)(**(_QWORD **)(v19 + 600) + 8LL * *(unsigned int *)(*(_QWORD *)(v19 + 600) + 8LL)),
      1);
    sub_116E610((__int64 **)&v288, (__int64 *)v288, 1);
    if ( v215 != v288 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v215 + 16LL) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)v215 + 8LL);
        v258.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)v215 + 16LL);
        v258.m128i_i64[0] = v22;
      }
    }
  }
  v23 = *(char **)(v11 + 56);
  v24 = *v8;
  v254 = 0;
  v25 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v285 = v287;
  v26 = _mm_load_si128(&v258);
  v286 = v25;
  v289 = v25;
  v27 = *v23 < 0;
  v288 = v290;
  v250 = 0;
  v251 = 0;
  v259 = 0u;
  v260 = v26;
  v277.m128i_i64[0] = (__int64)v279;
  v277.m128i_i64[1] = 0;
  v278 = 128;
  v239 = 0;
  if ( v27 )
  {
    if ( v258.m128i_i64[0] )
    {
      v282 = &v283.m128i_u64[1];
      sub_141A0D0(&v282, v258.m128i_i64[0], v258.m128i_i64[0] + v258.m128i_i64[1]);
      v56 = v283.m128i_i64[0];
      v277.m128i_i64[1] = 0;
      v57 = v282;
      if ( v283.m128i_i64[0] <= v278 )
      {
        v59 = (void *)v277.m128i_i64[0];
        v58 = 0;
      }
      else
      {
        srca = v282;
        na = v283.m128i_i64[0];
        sub_2236E10(&v277, v279, v283.m128i_i64[0], 1);
        v57 = srca;
        v56 = na;
        v58 = v277.m128i_i64[1];
        v59 = (void *)(v277.m128i_i64[1] + v277.m128i_i64[0]);
      }
      if ( v56 )
      {
        nb = v56;
        memcpy(v59, v57, v56);
        v58 = v277.m128i_i64[1];
        v56 = nb;
      }
    }
    else
    {
      v283.m128i_i8[8] = 0;
      v56 = 0;
      v282 = &v283.m128i_u64[1];
      v58 = 0;
      v283.m128i_i64[0] = 0;
    }
    v277.m128i_i64[1] = v58 + v56;
    if ( v282 != &v283.m128i_u64[1] )
      operator delete(v282);
    sub_228EF50(&v277, 0);
    v239 = 3;
    v260 = v277;
  }
  v255 = sub_1422C70(
           (_QWORD *)v11,
           &v259,
           (unsigned __int8 **)&v258,
           v24,
           v256,
           v257,
           (int *)v8,
           &v251,
           v216,
           &v250,
           a7,
           a8,
           a6,
           &v260,
           &v288,
           (__int64 *)&v285,
           &v254,
           v223);
  if ( (unsigned __int8)sub_145C9B0(v11) && *(_BYTE *)(v11 + 2401) )
  {
    v28 = v255;
    if ( v255 )
    {
      while ( 1 )
      {
        v29 = v28[1];
        if ( !v29 )
          break;
        v28 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v29 & 4) == 0 || !v28 )
          goto LABEL_28;
      }
      v28 = nullptr;
LABEL_28:
      if ( (unsigned __int8)sub_14609F0(v11, v28) )
        *(_BYTE *)(v11 + 2401) = 0;
    }
    goto LABEL_30;
  }
  v30 = *(_BYTE *)(*(_QWORD *)(v11 + 40) + 234LL);
  if ( v30 )
    goto LABEL_49;
  v31 = v255;
  if ( *(_BYTE *)(v11 + 1008) )
  {
    if ( !v255 )
    {
      v40 = *(unsigned __int8 **)(v11 + 56);
      n = 0;
      v39 = (_QWORD *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
      src = (__int64 *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
      goto LABEL_50;
    }
    sub_13C2790(*(_QWORD *)(v11 + 104), (unsigned __int64)v255);
    while ( 1 )
    {
      v32 = v31[1];
      if ( !v32 )
        break;
      v32 &= 0xFFFFFFFFFFFFFFF8LL;
      v33 = v31[1] & 4LL;
      v31 = (_QWORD *)v32;
      if ( !v33 || !v32 )
        goto LABEL_45;
    }
    v31 = nullptr;
LABEL_45:
    v34 = *(_DWORD *)(v11 + 1728);
    v35 = *(_QWORD *)(v11 + 1712);
    if ( !v34 )
      goto LABEL_48;
    v36 = v34 - 1;
    v37 = (v34 - 1) & (((unsigned int)v32 >> 4) ^ ((unsigned int)v32 >> 9));
    v38 = *(_QWORD **)(v35 + 8LL * v37);
    if ( v38 != v31 )
    {
      if ( v38 == (_QWORD *)-4096LL )
      {
LABEL_48:
        v31 = v255;
        v39 = (_QWORD *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
        src = (__int64 *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_157;
      }
      v207 = 1;
      while ( 1 )
      {
        v37 = v36 & (v207 + v37);
        v208 = *(_QWORD **)(v35 + 8LL * v37);
        if ( v208 == v31 )
          break;
        ++v207;
        if ( v208 == (_QWORD *)-4096LL )
          goto LABEL_48;
      }
    }
LABEL_49:
    v40 = *(unsigned __int8 **)(v11 + 56);
    n = 3;
    v39 = (_QWORD *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
    src = (__int64 *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_50:
    v41 = v40[21];
    if ( (v41 & 4) != 0 )
    {
      if ( !v39 )
      {
LABEL_160:
        v30 = 0;
        goto LABEL_79;
      }
      v30 = 0;
      if ( *((_DWORD *)v39 + 9) != 1 || (v30 = (*(_DWORD *)(v11 + 888) == 1) | v216) != 0 )
      {
LABEL_79:
        v218 = sub_1021680(*(_QWORD *)(v11 + 88), *v8);
        if ( !v255 )
          goto LABEL_85;
        goto LABEL_80;
      }
      goto LABEL_190;
    }
    v30 = 0;
LABEL_52:
    if ( (v41 & 2) == 0 || !v39 || *((_DWORD *)v39 + 9) == 1 )
      goto LABEL_160;
    goto LABEL_55;
  }
  v39 = (_QWORD *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
  src = (__int64 *)(v254 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_157:
  v40 = *(unsigned __int8 **)(v11 + 56);
  if ( !v31 )
  {
    n = 0;
    goto LABEL_50;
  }
  if ( !v39 )
  {
    v41 = v40[21];
    n = 0;
    if ( (v41 & 4) != 0 )
      goto LABEL_160;
    goto LABEL_52;
  }
  v126 = sub_FEED10((char **)v39, *(_QWORD *)(v11 + 56));
  v40 = *(unsigned __int8 **)(v11 + 56);
  v30 = !v126;
  v41 = v40[21];
  if ( (v41 & 4) == 0 )
  {
    n = 0;
    goto LABEL_52;
  }
  if ( *((_DWORD *)v39 + 9) == 1 )
  {
    if ( v216 | (*(_DWORD *)(v11 + 888) == 1) )
    {
      if ( !v30 )
      {
        v30 = v216 | (*(_DWORD *)(v11 + 888) == 1);
        n = 0;
        goto LABEL_79;
      }
      n = 0;
      goto LABEL_57;
    }
    n = 0;
LABEL_190:
    v30 = 0;
    v218 = sub_1021680(*(_QWORD *)(v11 + 88), *v8);
    src = v255;
    if ( !v255 )
    {
LABEL_86:
      v64 = *((_WORD *)a3 + 8);
      v65 = sub_141A630(v64);
      if ( v64 == 1 || v65 )
        v66 = 0;
      else
        v66 = *((_QWORD *)a3 + 1);
      v63 = (unsigned int)sub_FDE240(v66) == 18;
LABEL_90:
      v252 = 0;
      if ( n )
        goto LABEL_96;
      if ( v255 )
      {
        if ( !(unsigned __int8)sub_13CC410(
                                 *(_QWORD *)(v11 + 104),
                                 v11,
                                 (unsigned __int64)v255,
                                 v63,
                                 (*(_BYTE *)(*(_QWORD *)(v11 + 56) + 21LL) & 2) != 0,
                                 (unsigned __int64)src,
                                 (char *)&v252) )
        {
          if ( v30 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v11 + 56) + 21LL) & 0x20) == 0 )
            {
              n = (*(_DWORD *)(v11 + 888) != 1) + 1;
              goto LABEL_96;
            }
          }
          else if ( src )
          {
            n = ((*(_BYTE *)(*(_QWORD *)(v11 + 56) + 21LL) & 0x20) != 0) + 1;
            goto LABEL_96;
          }
          n = 2;
LABEL_96:
          v67 = *(_QWORD *)(v11 + 1192);
          if ( !v67 )
          {
            v68 = v255;
            if ( !v255 )
              goto LABEL_30;
            if ( !a2 )
              goto LABEL_162;
            goto LABEL_108;
          }
LABEL_105:
          if ( !a2 )
          {
            v68 = v255;
            if ( !v255 )
              goto LABEL_30;
LABEL_162:
            if ( !src )
            {
LABEL_163:
              sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), *v8, 1042);
              sub_AEC220((unsigned __int8 **)&v282, v210.m128i_i64[0], v210.m128i_i64[1]);
              v97 = v255;
              for ( i = v255[1]; i; i = *(_QWORD *)(v99 + 8) )
              {
                if ( (i & 4) == 0 )
                  break;
                v99 = i & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v99 )
                  break;
                v97 = (signed __int64 *)v99;
              }
              v100 = *v97;
              v101 = v97 + 4;
              goto LABEL_168;
            }
            goto LABEL_108;
          }
          (*(void (__fastcall **)(__int64, _QWORD, unsigned int *, __int64, __int64, _QWORD, __int64, int, _QWORD *, void *, __int64, void *, __int64, unsigned __int64, bool, _QWORD))(*(_QWORD *)v67 + 64LL))(
            v67,
            a2,
            a3,
            v260.m128i_i64[0],
            v260.m128i_i64[1],
            v223,
            v256,
            v257,
            v255,
            v285,
            v286.m128i_i64[0],
            v288,
            v289.m128i_i64[0],
            v254 & 0xFFFFFFFFFFFFFFF8LL,
            n == 1,
            v218);
          if ( n == 2 )
          {
            if ( !v255 )
              goto LABEL_30;
            (*(void (__fastcall **)(_QWORD, _QWORD **, unsigned int *, _QWORD))(**(_QWORD **)(v11 + 1192) + 32LL))(
              *(_QWORD *)(v11 + 1192),
              &v255,
              v8,
              v218);
          }
          v68 = v255;
          if ( !v255 )
          {
LABEL_30:
            v17 = 0;
            goto LABEL_31;
          }
LABEL_108:
          if ( v250 )
          {
LABEL_141:
            switch ( n )
            {
              case 2:
                v17 = 4;
                if ( src )
                  goto LABEL_31;
                goto LABEL_30;
              case 3:
                goto LABEL_30;
              case 1:
                sub_1464EA0(v11, src, a5, 1);
                v109 = *((_WORD *)a3 + 8);
                v110 = sub_141A630(v109);
                if ( v109 == 1 || v110 )
                  v111 = 0;
                else
                  v111 = *((_QWORD *)a3 + 1);
                if ( (unsigned int)sub_FDE240(v111) != 11 )
                {
                  v17 = 2;
                  goto LABEL_31;
                }
                goto LABEL_30;
            }
            goto LABEL_144;
          }
LABEL_109:
          v69 = (unsigned __int64)v68;
          while ( 1 )
          {
            v70 = *(_QWORD *)(v69 + 8);
            if ( !v70 )
              break;
            v69 = v70 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v70 & 4) == 0 || !v69 )
              goto LABEL_113;
          }
          v69 = 0;
LABEL_113:
          if ( *(_QWORD *)(v69 + 8) )
          {
            v71 = v260;
            v249 = v258;
            while ( 1 )
            {
              v72 = v68[1];
              if ( !v72 )
                break;
              v68 = (__int64 *)(v72 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v72 & 4) == 0 || !v68 )
                goto LABEL_118;
            }
            v68 = nullptr;
LABEL_118:
            v73 = 0;
            v227 = *v68;
            v230 = v68[1];
            sub_2289320(&v261, v260.m128i_i64[0], v260.m128i_i64[1]);
            sub_22892D0(&v264, v71.m128i_i64[0], v71.m128i_i64[1], 0);
            v74 = _mm_load_si128(&v265);
            v266[1] = _mm_load_si128(&v264);
            v266[2] = v74;
            v241 = v266[0].m128i_i32[2];
            v75 = _mm_load_si128(&v261);
            v233 = v264;
            v76 = v265.m128i_i64[0];
            v77 = _mm_load_si128(&v262);
            v266[3] = _mm_load_si128(v266);
            v78 = _mm_load_si128(&v263);
            v248 = v266[0].m128i_i64[0];
            v266[4] = v75;
            v266[5] = v77;
            v266[6] = v78;
            v244 = v261.m128i_i64[1];
            v247 = v261.m128i_i64[0];
            v246 = v262.m128i_i64[0];
            v245 = v263.m128i_i64[0];
            v282 = &v283.m128i_u64[1];
            v283.m128i_i64[0] = 0x1000000000LL;
            v243 = v263.m128i_i32[2];
            v273 = v263.m128i_i32[2];
            *(__m128i *)v280 = v264;
            *(__m128i *)&v280[16] = v265;
            *(_QWORD *)&v280[32] = v266[0].m128i_i64[0];
            v281 = v266[0].m128i_i32[2];
            v271 = v261;
            *(__m128i *)s2 = v262;
            *(_QWORD *)&s2[16] = v263.m128i_i64[0];
            while ( !(unsigned __int8)sub_22895C0(v280, &v271) )
            {
              ++v73;
              sub_2289340(v280);
            }
            v79 = v283.m128i_u32[0];
            v80 = v73 + v283.m128i_u32[0];
            if ( v80 > v283.m128i_u32[1] )
            {
              sub_2237220(&v282, &v283.m128i_u64[1], v80, 16);
              v79 = v283.m128i_u32[0];
            }
            *(_QWORD *)&v280[16] = v76;
            v81 = (char *)v282 + 16 * v79;
            *(__m128i *)v280 = v233;
            *(__m128 *)&v280[24] = _mm_loadh_ps((const double *)&v248);
            v25 = (__m128i)_mm_loadh_ps((const double *)&v245);
            v281 = v241;
            *(__m128i *)&s2[8] = v25;
            v271.m128i_i64[0] = v247;
            v271.m128i_i64[1] = v244;
            *(_QWORD *)s2 = v246;
            v273 = v243;
            while ( 1 )
            {
              v83 = sub_22895C0(v280, &v271);
              if ( v83 )
                break;
              v82 = *(_QWORD *)&v280[24];
              v81 += 16;
              *((_QWORD *)v81 - 2) = *(_QWORD *)&v280[16];
              *((_QWORD *)v81 - 1) = v82;
              sub_2289340(v280);
            }
            v234 = v83;
            v283.m128i_i32[0] += v73;
            sub_2289790(&v271, v227, v230, 0);
            sub_22895F0(v280, v227, v230);
            v228 = 0;
            v84 = (unsigned __int64 *)v282;
            v85 = (const void **)((char *)v282 + 16 * v283.m128i_u32[0]);
            if ( v282 != v85 )
            {
              v86 = 0;
              v87 = (const void **)v282;
              v211 = v11;
              v213 = v8;
              while ( 1 )
              {
                v85 -= 2;
                v88 = j__strlen(".");
                v89 = (size_t)v85[1];
                v90 = *v85;
                if ( v88 == v89 && (!v89 || !memcmp(".", *v85, (size_t)v85[1])) )
                  goto LABEL_131;
                if ( v89 == j__strlen("..") && (!v89 || !memcmp("..", v90, v89)) )
                {
                  ++v86;
                }
                else if ( v86 )
                {
                  --v86;
                }
                else if ( !(unsigned __int8)sub_22897C0(&v271, v280) )
                {
                  if ( v85[1] != (char *)&dword_0 + 1
                    || (v123 = (const void *)v239, !(unsigned __int8)sub_228ACA0((unsigned int)*(char *)*v85, v239)) )
                  {
                    v122 = *(_QWORD *)&s2[8];
                    v123 = *(const void **)s2;
                    if ( *(_QWORD *)&s2[8] == 1 )
                    {
                      v123 = (const void *)v239;
                      if ( !(unsigned __int8)sub_228ACA0((unsigned int)(char)**(_BYTE **)s2, v239) )
                      {
                        v123 = *(const void **)s2;
                        v122 = *(_QWORD *)&s2[8];
                        goto LABEL_216;
                      }
                    }
                    else
                    {
LABEL_216:
                      if ( v85[1] != (const void *)v122 )
                        goto LABEL_138;
                      if ( v122 && memcmp(*v85, v123, v122) )
                      {
                        v123 = *v85;
                        if ( (unsigned int)sub_22462B0(s2, *v85, v85[1]) )
                        {
LABEL_138:
                          v11 = v211;
                          v8 = v213;
                          v84 = (unsigned __int64 *)v282;
                          break;
                        }
                        v228 = v234;
                        *(__m128i *)v85 = _mm_load_si128((const __m128i *)s2);
                      }
                    }
                  }
                  sub_2289610(&v271, v123, v122, v121);
                }
LABEL_131:
                if ( v87 == v85 )
                {
                  v11 = v211;
                  v8 = v213;
                  if ( !v228 )
                    goto LABEL_279;
                  v129 = &v280[24];
                  *(_QWORD *)v280 = &v280[24];
                  *(__m128i *)&v280[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                  if ( (unsigned __int64)(v71.m128i_i64[1] + 2) > 0x80 )
                  {
                    v130 = 34;
                    sub_2236E10(v280, &v280[24], v71.m128i_i64[1] + 2, 1);
                    v131 = *(_QWORD *)&v280[8];
                    v165 = *(_QWORD *)&v280[8] + 1LL;
                    if ( v223 )
                      v130 = 60;
                    if ( v165 > *(_QWORD *)&v280[16] )
                    {
                      sub_2236E10(v280, &v280[24], v165, 1);
                      v131 = *(_QWORD *)&v280[8];
                    }
LABEL_245:
                    v129 = (char *)(*(_QWORD *)v280 + v131);
                  }
                  else
                  {
                    v130 = 34;
                    if ( v223 )
                    {
                      v131 = 0;
                      v130 = 60;
                      goto LABEL_245;
                    }
                  }
                  *v129 = v130;
                  v132 = (char *)v282;
                  ++*(_QWORD *)&v280[8];
                  v133 = 16LL * v283.m128i_u32[0];
                  v212 = (char *)v282 + v133;
                  if ( v282 != (char *)v282 + v133 )
                  {
                    v236 = v11;
                    v134 = v249.m128i_u64[1];
                    v135 = v249.m128i_i64[0];
                    while ( 1 )
                    {
                      v136 = *((_QWORD *)v132 + 1);
                      v137 = *(char **)v132;
                      if ( v136 != 1 )
                        break;
                      v142 = sub_228ACA0((unsigned int)*v137, v239);
                      v150 = *(_QWORD *)&v280[8];
                      if ( !v142 )
                      {
                        v138 = *(_QWORD *)&v280[8] + 1LL;
                        if ( *(_QWORD *)&v280[16] >= (unsigned __int64)(*(_QWORD *)&v280[8] + 1LL) )
                        {
LABEL_264:
                          memcpy((void *)(*(_QWORD *)v280 + v150), v137, v136);
                          v150 = *(_QWORD *)&v280[8];
                          goto LABEL_255;
                        }
LABEL_268:
                        sub_2236E10(v280, &v280[24], v138, 1);
                        v150 = *(_QWORD *)&v280[8];
LABEL_254:
                        if ( v136 )
                          goto LABEL_264;
LABEL_255:
                        v150 += v136;
                        *(_QWORD *)&v280[8] = v150;
LABEL_256:
                        v139 = *(_QWORD *)&v280[16];
                        if ( v134 < v150 )
                        {
                          if ( v150 + 1 > *(_QWORD *)&v280[16] )
                          {
                            sub_2236E10(v280, &v280[24], v150 + 1, 1);
                            v150 = *(_QWORD *)&v280[8];
                          }
                          *(_BYTE *)(*(_QWORD *)v280 + v150) = v223 == 0 ? 34 : 62;
                          ++*(_QWORD *)&v280[8];
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v141 = *(_BYTE *)(v135 + v150 - 1);
                            if ( v150 + 1 > v139 )
                            {
                              sub_2236E10(v280, &v280[24], v150 + 1, 1);
                              v150 = *(_QWORD *)&v280[8];
                            }
                            *(_BYTE *)(*(_QWORD *)v280 + v150) = v141;
                            v140 = *(_QWORD *)&v280[8];
                            if ( v134 < ++*(_QWORD *)&v280[8]
                              || !(unsigned __int8)sub_228ACA0((unsigned int)*(char *)(v135 + v140), v239) )
                            {
                              break;
                            }
                            v139 = *(_QWORD *)&v280[16];
                            v150 = *(_QWORD *)&v280[8];
                          }
                        }
                        goto LABEL_251;
                      }
                      if ( *(_QWORD *)&v280[8] == 1 )
                        goto LABEL_256;
LABEL_251:
                      v132 += 16;
                      if ( v212 == v132 )
                      {
                        v8 = v213;
                        v11 = v236;
                        goto LABEL_270;
                      }
                    }
                    v150 = *(_QWORD *)&v280[8];
                    v138 = v136 + *(_QWORD *)&v280[8];
                    if ( v136 + *(_QWORD *)&v280[8] > *(_QWORD *)&v280[16] )
                      goto LABEL_268;
                    goto LABEL_254;
                  }
LABEL_270:
                  if ( !v218
                    || (sub_22892D0(&v271, v71.m128i_i64[0], v71.m128i_i64[1], 0),
                        v159 = j__strlen("boost"),
                        v159 == *(_QWORD *)&s2[8])
                    && !(unsigned int)sub_22462B0(s2, "boost", v159) )
                  {
LABEL_271:
                    v143 = 1293;
LABEL_272:
                    sub_FC70B0((__int64)&v271, *(_QWORD *)(v11 + 48), *v8, v143);
                    sub_AEC220((unsigned __int8 **)&v271, *(_BYTE **)v280, *(signed __int64 *)&v280[8]);
                    sub_141A190((__int64)v267, v256, v257, *(_BYTE **)v280, *(__int64 *)&v280[8]);
                    if ( LODWORD(v267[0]) && HIDWORD(v267[0]) )
                      sub_14212A0(v271.m128i_i64, (unsigned __int64)v267);
                    if ( v269 != &v270 )
                      operator delete(v269);
                    sub_AEA040((__int64)&v271);
                    if ( *(_BYTE **)v280 != &v280[24] )
                      free(*(void **)v280);
LABEL_279:
                    v84 = (unsigned __int64 *)v282;
                    break;
                  }
                  if ( v71.m128i_i64[1] > 0x12uLL )
                    goto LABEL_340;
                  *(_QWORD *)s2 = 32;
                  v160 = (void *)v71.m128i_i64[1];
                  *(__m128i *)v267 = v71;
                  v271 = (__m128i)(unsigned __int64)&s2[8];
                  if ( v71.m128i_i64[1] )
                  {
                    v271.m128i_i64[1] = v71.m128i_i64[1];
                    memmove(&s2[8], v267[0], v71.m128i_u64[1]);
                    v160 = (void *)v271.m128i_i64[1];
                    v161 = (_BYTE *)v271.m128i_i64[0];
                    v162 = (char *)(v271.m128i_i64[0] + v271.m128i_i64[1]);
                    v163 = (char *)v271.m128i_i64[0];
                    if ( v271.m128i_i64[0] + v271.m128i_i64[1] != v271.m128i_i64[0] )
                    {
                      v164 = *(_BYTE *)v271.m128i_i64[0];
                      if ( *(char *)v271.m128i_i64[0] >= 0 )
                      {
                        do
                        {
                          if ( (unsigned __int8)(v164 - 65) <= 0x19u )
                          {
                            *v163 = v164 + 32;
                          }
                          else if ( (unsigned __int8)sub_228ACA0((unsigned int)v164, 0) )
                          {
                            *v163 = 47;
                          }
                          if ( v162 == ++v163 )
                          {
                            v160 = (void *)v271.m128i_i64[1];
                            v163 = (char *)v271.m128i_i64[0];
                            goto LABEL_343;
                          }
                          v164 = *v163;
                        }
                        while ( *v163 >= 0 );
                        v161 = (_BYTE *)v271.m128i_i64[0];
                      }
                      if ( v161 != &s2[8] )
                        goto LABEL_347;
                      goto LABEL_340;
                    }
                  }
                  else
                  {
                    v163 = &s2[8];
                  }
LABEL_343:
                  v267[1] = v160;
                  v267[0] = v163;
                  v268 = 0;
                  v253 = 1;
                  v170 = sub_141BB60(
                           (__int64)v267,
                           &v253,
                           "assert.h",
                           8,
                           "complex.h",
                           9,
                           "ctype.h",
                           7,
                           "errno.h",
                           7,
                           "fenv.h",
                           6);
                  v253 = 1;
                  v171 = sub_141BB60(
                           v170,
                           &v253,
                           "float.h",
                           7,
                           "inttypes.h",
                           10,
                           "iso646.h",
                           8,
                           "limits.h",
                           8,
                           "locale.h",
                           8);
                  v253 = 1;
                  v172 = sub_141BB60(
                           v171,
                           &v253,
                           "math.h",
                           6,
                           (void *)"setjmp.h",
                           8,
                           "signal.h",
                           8,
                           "stdalign.h",
                           10,
                           "stdarg.h",
                           8);
                  v253 = 1;
                  v173 = sub_141BA00(
                           v172,
                           &v253,
                           "stdatomic.h",
                           11,
                           "stdbool.h",
                           9,
                           "stdckdint.h",
                           11,
                           "stdcountof.h",
                           12);
                  v253 = 1;
                  v174 = sub_141BB60(
                           v173,
                           &v253,
                           "stddef.h",
                           8,
                           "stdint.h",
                           8,
                           (void *)"stdio.h",
                           7,
                           "stdlib.h",
                           8,
                           "stdnoreturn.h",
                           13);
                  v253 = 1;
                  v175 = sub_141BB60(
                           v174,
                           &v253,
                           "string.h",
                           8,
                           "tgmath.h",
                           8,
                           "threads.h",
                           9,
                           "time.h",
                           6,
                           "uchar.h",
                           7);
                  v253 = 1;
                  v176 = v175;
                  if ( !(unsigned __int8)sub_B7E0A0(v175, &v253, "wchar.h", 7) )
                    sub_B7E0A0(v176, &v253, "wctype.h", 8);
                  v253 = 1;
                  v177 = sub_141BB60(v176, &v253, "cassert", 7, "ccomplex", 8, "cctype", 6, "cerrno", 6, "cfenv", 5);
                  v253 = 1;
                  v178 = sub_141BB60(v177, &v253, "cfloat", 6, "cinttypes", 9, "ciso646", 7, "climits", 7, "clocale", 7);
                  v253 = 1;
                  v179 = sub_141BB60(v178, &v253, "cmath", 5, "csetjmp", 7, "csignal", 7, "cstdalign", 9, "cstdarg", 7);
                  v253 = 1;
                  v180 = sub_141BB60(v179, &v253, "cstdbool", 8, "cstddef", 7, "cstdint", 7, "cstdio", 6, "cstdlib", 7);
                  v253 = 1;
                  v181 = sub_141BB60(v180, &v253, "cstring", 7, "ctgmath", 7, "ctime", 5, "cuchar", 6, "cwchar", 6);
                  v253 = 1;
                  v182 = v181;
                  sub_B7E0A0(v181, &v253, "cwctype", 7);
                  v253 = 1;
                  v183 = sub_141BB60(v182, &v253, "algorithm", 9, "fstream", 7, "list", 4, "regex", 5, "thread", 6);
                  v253 = 1;
                  v184 = sub_141BB60(
                           v183,
                           &v253,
                           "array",
                           5,
                           "functional",
                           10,
                           "locale",
                           6,
                           "scoped_allocator",
                           16,
                           "tuple",
                           5);
                  v253 = 1;
                  v185 = sub_141BB60(v184, &v253, "atomic", 6, "future", 6, "map", 3, "set", 3, "type_traits", 11);
                  v253 = 1;
                  v186 = sub_141BB60(
                           v185,
                           &v253,
                           "bitset",
                           6,
                           "initializer_list",
                           16,
                           "memory",
                           6,
                           "shared_mutex",
                           12,
                           "typeindex",
                           9);
                  v253 = 1;
                  v187 = sub_141BB60(v186, &v253, "chrono", 6, "iomanip", 7, "mutex", 5, "sstream", 7, "typeinfo", 8);
                  v253 = 1;
                  v188 = sub_141BB60(
                           v187,
                           &v253,
                           "codecvt",
                           7,
                           "ios",
                           3,
                           (void *)"new",
                           3,
                           "stack",
                           5,
                           "unordered_map",
                           13);
                  v253 = 1;
                  v189 = sub_141BB60(
                           v188,
                           &v253,
                           "complex",
                           7,
                           "iosfwd",
                           6,
                           "numeric",
                           7,
                           "stdexcept",
                           9,
                           "unordered_set",
                           13);
                  v253 = 1;
                  v190 = sub_141BB60(
                           v189,
                           &v253,
                           "condition_variable",
                           18,
                           (void *)"iostream",
                           8,
                           (void *)"ostream",
                           7,
                           "streambuf",
                           9,
                           "utility",
                           7);
                  v253 = 1;
                  v191 = sub_141BB60(
                           v190,
                           &v253,
                           "deque",
                           5,
                           (void *)"istream",
                           7,
                           "queue",
                           5,
                           "string",
                           6,
                           "valarray",
                           8);
                  v253 = 1;
                  v192 = sub_141BB60(
                           v191,
                           &v253,
                           "exception",
                           9,
                           "iterator",
                           8,
                           (void *)"random",
                           6,
                           "strstream",
                           9,
                           "vector",
                           6);
                  v253 = 1;
                  v193 = sub_141BA00(v192, &v253, "forward_list", 12, "limits", 6, "ratio", 5, "system_error", 12);
                  v253 = 1;
                  v194 = sub_141BB60(
                           v193,
                           &v253,
                           "aio.h",
                           5,
                           "arpa/inet.h",
                           11,
                           "cpio.h",
                           6,
                           "dirent.h",
                           8,
                           "dlfcn.h",
                           7);
                  v253 = 1;
                  v195 = sub_141BB60(v194, &v253, "fcntl.h", 7, "fmtmsg.h", 8, "fnmatch.h", 9, "ftw.h", 5, "glob.h", 6);
                  v253 = 1;
                  v196 = sub_141BB60(
                           v195,
                           &v253,
                           "grp.h",
                           5,
                           "iconv.h",
                           7,
                           "langinfo.h",
                           10,
                           "libgen.h",
                           8,
                           "monetary.h",
                           10);
                  v253 = 1;
                  v197 = sub_141BB60(
                           v196,
                           &v253,
                           "mqueue.h",
                           8,
                           "ndbm.h",
                           6,
                           "net/if.h",
                           8,
                           "netdb.h",
                           7,
                           "netinet/in.h",
                           12);
                  v253 = 1;
                  v198 = sub_141BB60(
                           v197,
                           &v253,
                           "netinet/tcp.h",
                           13,
                           "nl_types.h",
                           10,
                           "poll.h",
                           6,
                           "pthread.h",
                           9,
                           "pwd.h",
                           5);
                  v253 = 1;
                  v199 = sub_141BB60(
                           v198,
                           &v253,
                           "regex.h",
                           7,
                           "sched.h",
                           7,
                           "search.h",
                           8,
                           "semaphore.h",
                           11,
                           "spawn.h",
                           7);
                  v253 = 1;
                  v200 = sub_141BB60(
                           v199,
                           &v253,
                           "strings.h",
                           9,
                           "stropts.h",
                           9,
                           "sys/ipc.h",
                           9,
                           "sys/mman.h",
                           10,
                           "sys/msg.h",
                           9);
                  v253 = 1;
                  v201 = sub_141BB60(
                           v200,
                           &v253,
                           "sys/resource.h",
                           14,
                           "sys/select.h",
                           12,
                           "sys/sem.h",
                           9,
                           "sys/shm.h",
                           9,
                           "sys/socket.h",
                           12);
                  v253 = 1;
                  v202 = sub_141BB60(
                           v201,
                           &v253,
                           "sys/stat.h",
                           10,
                           "sys/statvfs.h",
                           13,
                           "sys/time.h",
                           10,
                           "sys/times.h",
                           11,
                           "sys/types.h",
                           11);
                  v253 = 1;
                  v203 = sub_141BB60(
                           v202,
                           &v253,
                           "sys/uio.h",
                           9,
                           "sys/un.h",
                           8,
                           "sys/utsname.h",
                           13,
                           "sys/wait.h",
                           10,
                           "syslog.h",
                           8);
                  v253 = 1;
                  v204 = sub_141BA00(v203, &v253, "tar.h", 5, "termios.h", 9, "trace.h", 7, "ulimit.h", 8);
                  v253 = 1;
                  v205 = sub_141BA00(v204, &v253, "unistd.h", 8, "utime.h", 7, "utmpx.h", 7, "wordexp.h", 9);
                  if ( *(_BYTE *)(v205 + 17) )
                  {
                    v169 = *(_BYTE *)(v205 + 16);
                    if ( (_BYTE *)v271.m128i_i64[0] != &s2[8] )
                      free((void *)v271.m128i_i64[0]);
                    if ( v169 )
                      goto LABEL_271;
                  }
                  else
                  {
                    v161 = (_BYTE *)v271.m128i_i64[0];
                    if ( (_BYTE *)v271.m128i_i64[0] != &s2[8] )
                    {
LABEL_347:
                      free(v161);
                      v143 = 1294;
                      goto LABEL_272;
                    }
                  }
LABEL_340:
                  v143 = 1294;
                  goto LABEL_272;
                }
              }
            }
            if ( v84 != &v283.m128i_u64[1] )
              free(v84);
          }
          goto LABEL_141;
        }
        v68 = v255;
        if ( v255 )
        {
          if ( *(_DWORD *)(v11 + 1104) != 1 )
          {
            v67 = *(_QWORD *)(v11 + 1192);
            if ( !v67 )
            {
              if ( !a2 && !src )
                goto LABEL_163;
              if ( v250 )
              {
LABEL_144:
                v91 = *v8;
                if ( *(_QWORD *)(v11 + 1176) - *(_QWORD *)(v11 + 1168) == 11144 )
                {
                  sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), v91, 1140);
                  v17 = 0;
                  sub_AEA040((__int64)&v282);
                  *(_BYTE *)(v11 + 1008) = 1;
                  goto LABEL_31;
                }
                if ( v223 && (unsigned int)(*(_DWORD *)(v11 + 896) - 4) <= 1 )
                {
                  sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), v91, 1378);
                  sub_AEC220((unsigned __int8 **)&v282, *(_BYTE **)(v11 + 904), *(_QWORD *)(v11 + 912));
                  sub_AEA040((__int64)&v282);
                  v91 = *v8;
                }
                v92 = *(_QWORD *)(v11 + 88);
                if ( v91 < 0 )
                {
                  v151 = (void *)sub_101FD20(v92, v91);
                  v92 = *(_QWORD *)(v11 + 88);
                  v282 = v151;
                  v283.m128i_i32[0] = v152;
                  v91 = HIDWORD(v151);
                }
                v93 = sub_1026F70(v92, (unsigned __int64)v255, v91, v218, 0, 0, v25);
                if ( !v93 )
                {
                  v17 = 5;
                  *(_BYTE *)(*(_QWORD *)(v11 + 112) + 9LL) = 1;
                  goto LABEL_31;
                }
                if ( !(unsigned __int8)sub_1439120(v11, v93, v259.m128i_i64[0], v259.m128i_i64[1], *v8, v252)
                  && src
                  && *((_DWORD *)src + 9) != 1 )
                {
                  if ( *(_QWORD *)(sub_FEEE40((__int64)src) + 896) )
                  {
                    sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), *((_DWORD *)src + 8), 33);
                    sub_FEEE60((__int64)v280, src, 0);
                    sub_AEC220((unsigned __int8 **)&v282, *(_BYTE **)v280, *(signed __int64 *)&v280[8]);
                    if ( *(_BYTE **)v280 != &v280[16] )
                      operator delete(*(void **)v280);
                    v17 = 0;
                    sub_AEA040((__int64)&v282);
                    v149 = sub_FEEE40((__int64)src);
                    sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), *(_DWORD *)(*(_QWORD *)(v149 + 896) + 32LL), 113);
                    sub_AEA040((__int64)&v282);
                    goto LABEL_31;
                  }
                  v206 = *(_QWORD *)(v11 + 56);
                  if ( (*(_BYTE *)(v206 + 21) & 0x20) == 0 || !sub_FEED10((char **)src, v206) )
                  {
                    v17 = 1;
                    *(_QWORD *)(v11 + 1160) = src;
                    sub_143A500(v11, src, a5, 0);
                    goto LABEL_31;
                  }
                }
                goto LABEL_30;
              }
              goto LABEL_109;
            }
            goto LABEL_105;
          }
          while ( 1 )
          {
            v127 = v68[1];
            if ( !v127 )
              break;
            v68 = (__int64 *)(v127 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v127 & 4) == 0 || !v68 )
              goto LABEL_238;
          }
          v68 = nullptr;
LABEL_238:
          if ( sub_10220D0(*(_QWORD *)(v11 + 88), (__int64)v68) )
          {
            sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), *v8, 1141);
            sub_AEA040((__int64)&v282);
            goto LABEL_30;
          }
          goto LABEL_96;
        }
      }
      v67 = *(_QWORD *)(v11 + 1192);
      if ( !v67 )
        goto LABEL_30;
      goto LABEL_105;
    }
    src = nullptr;
LABEL_80:
    v60 = (_BYTE *)sub_13C2430(*(_QWORD *)(v11 + 104), (unsigned __int64)v255);
    if ( v60 )
    {
      v61 = (*v60 >> 3) & 7;
      v62 = v61;
    }
    else
    {
      v62 = 0;
      v61 = 0;
    }
    if ( (int)v218 > v62 )
      v61 = v218;
    v218 = v61;
LABEL_85:
    v63 = 1;
    if ( !a2 )
      goto LABEL_90;
    goto LABEL_86;
  }
  n = 0;
LABEL_55:
  if ( !v30 )
    goto LABEL_79;
  v30 = 0;
LABEL_57:
  if ( (unsigned __int8)sub_141AE90(v40, *(_QWORD *)(v11 + 64), v39, *(_QWORD *)(v11 + 48)) )
  {
    sub_FC70B0((__int64)&v282, *(_QWORD *)(v11 + 48), *v8, 1262);
    v128 = sub_FEEE40((__int64)v39);
    v100 = *(_QWORD *)(v128 + 8);
    v101 = *(_BYTE **)v128;
LABEL_168:
    sub_AEC220((unsigned __int8 **)&v282, v101, v100);
    sub_AEA040((__int64)&v282);
    goto LABEL_30;
  }
  v238 = v30;
  v271.m128i_i64[0] = (__int64)s2;
  v271.m128i_i64[1] = 0x200000000LL;
  v217 = v11 + 552;
  v232 = (__int64 *)(v11 + 576);
  v240 = a2;
  v229 = v8;
  do
  {
    v46 = (char *)*v39;
    v47 = v39[1];
    v48 = sub_2244B30(*v39, v47);
    v49 = sub_2244CB0(v217, v46, v47, v48);
    v50 = (__int64 *)(*(_QWORD *)(v11 + 552) + 8LL * v49);
    if ( *v50 )
    {
      if ( *v50 != -8 )
      {
        sub_989490((__int64 **)&v282, v50, 0);
        v51 = (__int64 *)v282;
        goto LABEL_65;
      }
      --*(_DWORD *)(v11 + 568);
    }
    v94 = sub_9C3B30(v232, v47 + 17, 3u);
    v95 = (_QWORD *)v94;
    if ( v47 )
    {
      v235 = (_QWORD *)v94;
      memcpy((void *)(v94 + 16), v46, v47);
      v95 = v235;
    }
    *((_BYTE *)v95 + v47 + 16) = 0;
    *v95 = v47;
    v95[1] = 0;
    *v50 = (__int64)v95;
    ++*(_DWORD *)(v11 + 564);
    v96 = sub_22450D0(v217, v49);
    sub_989490((__int64 **)&v282, (__int64 *)(*(_QWORD *)(v11 + 552) + 8LL * v96), 0);
    v51 = (__int64 *)v282;
LABEL_65:
    v52 = *v51;
    v53 = *(_QWORD **)(*v51 + 8);
    if ( !v53 )
    {
      v54 = *(_QWORD *)(v11 + 672);
      if ( !v54
        || (v53 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v54 + 16LL))(v54, v46, v47),
            (*(_QWORD *)(v52 + 8) = v53) == 0) )
      {
        v53 = (_QWORD *)sub_9C3B30(v232, 24, 3u);
        v55 = *v53 & 0xFFFFF80000000000LL;
        v53[1] = 0;
        *v53 = v55 | 0x1FFFC05;
        *(_QWORD *)(v52 + 8) = v53;
        v53[2] = v52;
      }
    }
    v42 = *v229;
    v43 = v271.m128i_u32[2];
    if ( v271.m128i_u32[2] >= (unsigned __int64)v271.m128i_u32[3] )
    {
      v124 = v42 | v242 & 0xFFFFFFFF00000000LL;
      v242 = v124;
      if ( v271.m128i_u32[3] < (unsigned __int64)v271.m128i_u32[2] + 1 )
      {
        v237 = v53;
        sub_2237220(&v271, s2, v271.m128i_u32[2] + 1LL, 16);
        v43 = v271.m128i_u32[2];
        v53 = v237;
      }
      v125 = (unsigned __int64 *)(v271.m128i_i64[0] + 16 * v43);
      *v125 = v124;
      v125[1] = (unsigned __int64)v53;
      v45 = (unsigned int)++v271.m128i_i32[2];
    }
    else
    {
      v44 = v271.m128i_i64[0] + 16LL * v271.m128i_u32[2];
      *(_DWORD *)v44 = v42;
      *(_QWORD *)(v44 + 8) = v53;
      v45 = (unsigned int)++v271.m128i_i32[2];
    }
    v39 = (_QWORD *)v39[5];
  }
  while ( v39 );
  v102 = v271.m128i_i64[0];
  v30 = v238;
  a2 = v240;
  v8 = v229;
  v103 = v271.m128i_i64[0] + 16 * v45;
  if ( v271.m128i_i64[0] != v103 )
  {
    v104 = (const __m128i *)(v103 - 16);
    if ( (unsigned __int64)v104 <= v271.m128i_i64[0] )
    {
      v103 = v271.m128i_i64[0];
    }
    else
    {
      do
      {
        v105 = *(_DWORD *)v102;
        v106 = *(_QWORD *)(v102 + 8);
        --v104;
        v102 += 16LL;
        *(__m128i *)(v102 - 16) = _mm_loadu_si128(v104 + 1);
        v104[1].m128i_i32[0] = v105;
        v104[1].m128i_i64[1] = v106;
      }
      while ( v102 < (unsigned __int64)v104 );
      v103 = v271.m128i_i64[0];
      v45 = v271.m128i_u32[2];
    }
  }
  if ( v240 )
  {
    v283 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v282 = v284;
    if ( v45 )
    {
      v112 = v103 + 8;
      v113 = 0;
      v114 = v103 + 16 * v45 - 8;
      v231 = v11;
      v115 = 128;
      while ( 1 )
      {
        v117 = *(unsigned int **)(*(_QWORD *)v112 + 16LL);
        v118 = *v117;
        if ( v118 + v113 > v115 )
        {
          sub_2236E10(&v282, v284, v118 + v113, 1);
          v113 = v283.m128i_i64[0];
        }
        if ( v118 )
        {
          memcpy((char *)v282 + v113, v117 + 4, v118);
          v113 = v283.m128i_i64[0];
        }
        v116 = v118 + v113;
        v283.m128i_i64[0] = v116;
        if ( v112 == v114 )
          break;
        if ( (unsigned __int64)(v116 + 1) > v283.m128i_i64[1] )
        {
          sub_2236E10(&v282, v284, v116 + 1, 1);
          v116 = v283.m128i_i64[0];
        }
        v112 += 16;
        *((_BYTE *)v282 + v116) = 46;
        v115 = v283.m128i_u64[1];
        v113 = ++v283.m128i_i64[0];
      }
      v11 = v231;
      a2 = v240;
    }
    v144 = *((_WORD *)a3 + 8);
    v145 = sub_141A630(v144);
    if ( v144 == 1 || v145 )
      v146 = 0;
    else
      v146 = *((_QWORD *)a3 + 1);
    v147 = sub_FDE240(v146);
    if ( v147 == 11 )
    {
      v148 = 3;
      goto LABEL_293;
    }
    if ( v147 <= 0xB )
    {
      if ( v147 == 10 )
      {
        v148 = 0;
        goto LABEL_293;
      }
    }
    else
    {
      if ( v147 == 18 )
      {
        v148 = 1;
LABEL_293:
        sub_FC70B0((__int64)v280, *(_QWORD *)(v11 + 48), v219, 1302);
        sub_AE9DF0((unsigned __int8 **)v280, v148, 2u);
        sub_AEC220((unsigned __int8 **)v280, v282, v283.m128i_i64[0]);
        sub_AEA040((__int64)v280);
        if ( v282 != v284 )
          free(v282);
        v103 = v271.m128i_i64[0];
        v45 = v271.m128i_u32[2];
        goto LABEL_177;
      }
      if ( v147 == 19 )
      {
        v148 = 2;
        goto LABEL_293;
      }
    }
    return sub_142A3D0();
  }
LABEL_177:
  v107 = *(_QWORD *)(v11 + 112);
  v108 = *(__int64 (**)())(*(_QWORD *)v107 + 16LL);
  if ( v108 == sub_12DAB10 )
    goto LABEL_178;
  v119 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, __int64))v108)(v107, *a3, v103, v45, 0, 1);
  v120 = (v119 >> 1) & 3;
  if ( ((v119 >> 1) & 3) == 0 )
  {
    if ( (v119 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      n = 1;
      goto LABEL_209;
    }
    goto LABEL_178;
  }
  if ( v120 == 1 )
  {
    v153 = (void *)sub_FEEE40(v119 & 0xFFFFFFFFFFFFFFF8LL);
    v157 = *(unsigned int *)(v11 + 1336);
    v282 = v153;
    if ( (_DWORD)v157 )
    {
      v158 = *(_QWORD *)(*(_QWORD *)(v11 + 1328) + 32 * v157 - 32);
      if ( v153 != (void *)v158 )
        sub_12F1A10(v158 + 976, (__int64 *)&v282, v158, v154, v155, v156);
    }
    else
    {
      sub_12F1A10(v11 + 1736, (__int64 *)&v282, v157, v154, v155, v156);
    }
    src = nullptr;
LABEL_209:
    if ( (_BYTE *)v271.m128i_i64[0] != s2 )
      free((void *)v271.m128i_i64[0]);
    goto LABEL_79;
  }
  if ( v120 == 2 )
    goto LABEL_209;
LABEL_178:
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 112) + 9LL) )
  {
    *((_QWORD *)a3 + 1) = 0;
    a3[4] = 0;
    v166 = *(_QWORD *)(v11 + 1112);
    *(_QWORD *)a3 = 0;
    v167 = *(_QWORD *)(v166 + 120);
    v168 = v167 - *(_QWORD *)(v166 + 152);
    a3[1] = v168;
    *a3 = sub_13D1500(v166, *(_QWORD *)(v166 + 152), v168);
    *((_WORD *)a3 + 8) = 1;
    *(_QWORD *)(v166 + 152) = v167;
    *(_QWORD *)(*(_QWORD *)(v11 + 1112) + 152LL) = *(_QWORD *)(*(_QWORD *)(v11 + 1112) + 120LL);
  }
  v17 = 0;
  if ( (_BYTE *)v271.m128i_i64[0] != s2 )
    free((void *)v271.m128i_i64[0]);
LABEL_31:
  if ( (_BYTE *)v277.m128i_i64[0] != v279 )
    free((void *)v277.m128i_i64[0]);
  if ( v288 != v290 )
    free(v288);
  if ( v285 != v287 )
    free(v285);
LABEL_6:
  if ( ptr != v276 )
    free(ptr);
  return v17;
}
