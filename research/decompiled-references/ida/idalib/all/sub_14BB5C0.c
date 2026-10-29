__int64 __fastcall sub_14BB5C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        _BYTE *a8)
{
  __int64 v9; // rax
  unsigned int v10; // r15d
  __m128 v11; // xmm1
  unsigned int v12; // ebp
  char v13; // r10
  int v15; // r13d
  unsigned int v16; // r14d
  unsigned __int8 v17; // r11
  __int64 v18; // rcx
  __int16 v19; // ax
  char v20; // cl
  __int64 v21; // rsi
  size_t v22; // r14
  int v23; // eax
  size_t v24; // r14
  int v25; // eax
  __m128i si128; // xmm3
  __m128i v27; // xmm4
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 result; // rax
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r15d
  unsigned __int64 v41; // r15
  __int64 v42; // rax
  char v43; // al
  unsigned __int8 v44; // r11
  unsigned __int16 v45; // r15
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  char *v48; // r12
  __int64 v49; // rdi
  int *v50; // rbp
  __int64 v51; // rax
  __int64 *v52; // rdi
  char v53; // al
  __int64 v54; // rbp
  __int16 v55; // di
  bool v56; // al
  int v57; // ecx
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r14
  char v63; // dl
  int v64; // edx
  __int64 *v65; // rdi
  char v66; // al
  unsigned __int8 v67; // r11
  __int64 v68; // rbp
  int *v69; // rsi
  int v70; // eax
  __int64 *v71; // rdi
  unsigned int v72; // r12d
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rdx
  char v76; // al
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // esi
  __int64 v81; // rbp
  unsigned __int64 v82; // rax
  unsigned __int8 v83; // r11
  __int64 v84; // rdx
  _BYTE *v85; // r9
  char v86; // al
  int v87; // eax
  __int64 *v88; // rdi
  unsigned int v89; // ebp
  __int64 v90; // rax
  int *v91; // rbp
  _BYTE *v92; // rax
  __int64 v93; // rax
  __int64 *v94; // rdi
  __int64 v95; // r12
  __int64 *v96; // rdi
  unsigned int v97; // r12d
  char v98; // al
  char v99; // al
  char *v100; // rsi
  __int64 v101; // rdx
  int v102; // eax
  __int64 *v103; // rdi
  int v104; // eax
  __int64 *v105; // rdi
  unsigned int v106; // r12d
  int v107; // eax
  __int64 *v108; // rdi
  unsigned int v109; // ebp
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rbp
  unsigned int v113; // eax
  __m128i v114; // xmm5
  int *v115; // rsi
  __int64 *v116; // rdi
  int v117; // eax
  __int64 v118; // rax
  bool v119; // zf
  __int64 v120; // rdi
  __int64 v121; // rbx
  unsigned int v122; // eax
  int v123; // eax
  __int64 *v124; // rdi
  unsigned int v125; // r12d
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rbx
  unsigned int v129; // eax
  int v130; // eax
  __int64 *v131; // rdi
  __int64 v132; // r12
  size_t v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  unsigned __int64 v137; // rdi
  unsigned int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // rdx
  char v141; // al
  __int64 v142; // r15
  __int64 *v143; // rdi
  __int64 v144; // rdi
  unsigned int v145; // r11d
  bool v146; // r10
  __int16 v147; // cx
  __int16 v148; // ax
  __int64 v149; // rdx
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // r15
  unsigned __int16 v154; // r14
  char v155; // al
  __int64 v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 *v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r14
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdi
  unsigned __int64 v168; // rax
  __int64 v169; // rax
  char v170; // al
  __int64 v171; // rdi
  unsigned __int64 v172; // rax
  __int64 v173; // rax
  __int64 *v174; // rdi
  __int64 i; // rcx
  __int64 v176; // rax
  unsigned __int64 v177; // rax
  __int64 v178; // rax
  __int16 v179; // ax
  __int64 v180; // rax
  __int64 v181; // rdx
  _QWORD *v182; // rax
  __int64 v183; // rax
  char v184; // dl
  int v185; // eax
  __int64 *v186; // rdi
  __int64 v187; // rcx
  __int16 v188; // ax
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  __int64 *v191; // rax
  __int64 v192; // rax
  __int64 *v193; // rdx
  unsigned __int16 v194; // bp
  __int64 *v195; // r12
  __int64 v196; // rsi
  char v197; // al
  __int64 v198; // rax
  __int64 v199; // rbp
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 *v202; // rax
  __int64 v203; // rax
  char v204; // [rsp+8h] [rbp-C90h]
  char v205; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v206; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v207; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v208; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v209; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v210; // [rsp+8h] [rbp-C90h]
  char v211; // [rsp+8h] [rbp-C90h]
  int v212[2]; // [rsp+8h] [rbp-C90h]
  bool v213; // [rsp+8h] [rbp-C90h]
  int v214; // [rsp+8h] [rbp-C90h]
  unsigned int v215; // [rsp+8h] [rbp-C90h]
  char v216; // [rsp+8h] [rbp-C90h]
  int v217[2]; // [rsp+8h] [rbp-C90h]
  char v218; // [rsp+8h] [rbp-C90h]
  int v219[2]; // [rsp+8h] [rbp-C90h]
  int v220; // [rsp+8h] [rbp-C90h]
  unsigned int v221; // [rsp+8h] [rbp-C90h]
  char v222; // [rsp+8h] [rbp-C90h]
  unsigned int v223; // [rsp+8h] [rbp-C90h]
  char v224; // [rsp+8h] [rbp-C90h]
  unsigned int v225; // [rsp+8h] [rbp-C90h]
  unsigned __int8 v226; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v227; // [rsp+10h] [rbp-C88h]
  bool v228; // [rsp+10h] [rbp-C88h]
  int *v229; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v230; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v231; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v232; // [rsp+10h] [rbp-C88h]
  bool v233; // [rsp+10h] [rbp-C88h]
  int v234; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v235; // [rsp+10h] [rbp-C88h]
  bool v236; // [rsp+10h] [rbp-C88h]
  unsigned __int8 v237; // [rsp+10h] [rbp-C88h]
  bool v238; // [rsp+10h] [rbp-C88h]
  unsigned __int16 v239; // [rsp+1Ch] [rbp-C7Ch]
  bool v240; // [rsp+1Ch] [rbp-C7Ch]
  __int64 v241; // [rsp+28h] [rbp-C70h] BYREF
  __m128i v242[2]; // [rsp+30h] [rbp-C68h] BYREF
  __m128 v243; // [rsp+50h] [rbp-C48h] BYREF
  __m128i v244; // [rsp+60h] [rbp-C38h] BYREF
  __int64 v245; // [rsp+70h] [rbp-C28h]
  __int64 v246; // [rsp+80h] [rbp-C18h] BYREF
  __int64 v247; // [rsp+88h] [rbp-C10h]
  void *v248; // [rsp+98h] [rbp-C00h]
  __int64 v249; // [rsp+A8h] [rbp-BF0h] BYREF
  __m128i v250; // [rsp+C0h] [rbp-BD8h] BYREF
  void *ptr[2]; // [rsp+D0h] [rbp-BC8h]
  __int128 v252; // [rsp+E0h] [rbp-BB8h] BYREF
  int v253; // [rsp+160h] [rbp-B38h]
  int v254; // [rsp+164h] [rbp-B34h]
  __int64 v255[2]; // [rsp+1F0h] [rbp-AA8h] BYREF
  void *v256[2]; // [rsp+200h] [rbp-A98h]
  __int128 v257; // [rsp+210h] [rbp-A88h]
  __int64 v258; // [rsp+220h] [rbp-A78h]
  bool v259; // [rsp+228h] [rbp-A70h]
  __int64 v260; // [rsp+290h] [rbp-A08h]

  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(unsigned __int16 *)(a1 + 32);
  v11 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 48));
  v241 = 0;
  v245 = v9;
  v243 = v11;
  v244 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *a4 = 0;
  LOBYTE(v12) = a3;
  v13 = a3;
  v15 = a2;
  v16 = a5;
  v17 = a6;
  v18 = v10;
  switch ( (__int16)v10 )
  {
    case 3:
      v78 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v78 + 760) )
      {
        *(_BYTE *)(v78 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v78 + 48) + 6LL) = 1;
      }
      v79 = *(_QWORD *)(a1 + 96);
      v80 = *(_DWORD *)(a1 + 16);
      *(_WORD *)(a1 + 32) = 1;
      v81 = *(_QWORD *)(v79 + 656);
      v82 = sub_14B62D0(a1 + 48, v80);
      sub_172C2C0(v81, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v82, 0);
      return 1;
    case 5:
      goto LABEL_38;
    case 7:
    case 8:
      v50 = (int *)(a1 + 16);
      v51 = sub_18F1880(*(_QWORD *)(a1 + 96), a1 + 16, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
      goto LABEL_56;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      v50 = (int *)(a1 + 16);
      v51 = sub_18C8840(*(_QWORD *)(a1 + 96), a1 + 16, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v10);
      goto LABEL_56;
    case 14:
    case 15:
    case 17:
    case 18:
    case 19:
      goto LABEL_53;
    case 20:
      v75 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      v76 = *(_BYTE *)(v75 + 2) & 4;
      if ( (*(_BYTE *)(v75 + 1) & 8) == 0 )
      {
        if ( !v76 )
        {
LABEL_218:
          *a4 = 1;
          return 1;
        }
LABEL_120:
        v241 = sub_14FE690(a1);
        if ( (_DWORD)a2 != 2 )
          goto LABEL_21;
        return v241;
      }
      if ( v76 )
      {
        v77 = sub_14D5300(a1, a2, v75, v10);
        v241 = v77;
        if ( v77 == 1 || (v77 & 0xFFFFFFFFFFFFFFFELL) != 0 )
          goto LABEL_60;
        if ( a8 )
          *a8 = 1;
        goto LABEL_120;
      }
      v241 = sub_14D4CB0(a1, a2, v75, v10);
      if ( (_DWORD)a2 != 2 )
        goto LABEL_21;
      return v241;
    case 22:
      if ( (int)a2 >= 0 )
      {
        if ( (int)a2 <= 1 )
        {
          LODWORD(v246) = 4;
        }
        else if ( (_DWORD)a2 == 2 )
        {
          LODWORD(v246) = 1;
        }
      }
      v211 = a6;
      v255[0] = 0;
      v250.m128i_i32[0] = 0;
      result = sub_14C2860(a1, (unsigned int)&v246, 0, 1, a5, (unsigned int)v255, (__int64)&v250);
      v241 = result;
      if ( v211 || (_DWORD)v246 == 4 )
        return result;
      goto LABEL_60;
    case 28:
      if ( a8 )
        *a8 = 1;
      v107 = *(_DWORD *)(a1 + 16);
      v108 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v107;
      sub_14634E0(v108, (int *)(a1 + 16));
      v109 = *(_DWORD *)(a1 + 40);
      sub_1703D40(a1 + 48, *(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), 28, v109);
      v110 = sub_14BDA20(a1, 0, 1, 0, 0, 0);
      v241 = v110;
      if ( v110 != 1 )
      {
        v111 = *(_QWORD *)(a1 + 96);
        v255[0] = v110 & 0xFFFFFFFFFFFFFFFELL;
        v241 = sub_19258C0(v111, *(_QWORD *)(v111 + 608), v109, 28, v110 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v241 == 1 )
        {
          v112 = *(_QWORD *)(a1 + 96);
          v113 = sub_EEC140(v255[0]);
          return sub_18C4330(v112, *(unsigned int *)(a1 + 16), v113, v255, 1, 0);
        }
      }
      return v241;
    case 29:
      if ( a8 )
        *a8 = 1;
      v104 = *(_DWORD *)(a1 + 16);
      v105 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v104;
      sub_14634E0(v105, (int *)(a1 + 16));
      v106 = *(_DWORD *)(a1 + 40);
      if ( *(_WORD *)(a1 + 32) != 5 )
      {
        sub_1564840(v255, a1, a1 + 16, 14);
        sub_AE9DF0((unsigned __int8 **)v255, 5, 4u);
LABEL_190:
        sub_AEA040((__int64)v255);
        return 1;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL) + 24LL) )
      {
        sub_1564840(v255, a1, a1 + 16, 1535);
        goto LABEL_190;
      }
      sub_1564820(v255, a1, v106, 1986);
      sub_AEA040((__int64)v255);
      v153 = *(_QWORD *)(a1 + 96);
      v154 = *(_WORD *)(a1 + 32);
      v215 = *(_DWORD *)(a1 + 16);
      v155 = sub_141A630(v154);
      if ( v154 == 1 || v155 )
        v156 = 0;
      else
        v156 = *(_QWORD *)(a1 + 24);
      v157 = sub_1A5C7E0(v153, v156, v215, 0);
      v158 = sub_18C3650(*(_QWORD *)(a1 + 96), v106, *(unsigned int *)(a1 + 16), v157);
      v159 = *(__int64 **)(a1 + 8);
      v241 = v158;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v159, (int *)(a1 + 16));
      if ( v15 == 2 )
        return v241;
LABEL_6:
      if ( v241 == 1 )
        return v241;
      v19 = *(_WORD *)(a1 + 32);
      v20 = v19 - 20;
      if ( (unsigned __int16)(v19 - 20) > 0x12u )
        return v241;
      if ( ((1LL << v20) & 0x44005) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
          return v241;
      }
      else if ( ((1LL << v20) & 0x20040) == 0 )
      {
        return v241;
      }
      sub_1564820(v255, a1, *(unsigned int *)(a1 + 16), 1836);
      v21 = *(unsigned __int16 *)(a1 + 32);
      sub_AE9DF0((unsigned __int8 **)v255, v21, 4u);
      v250.m128i_i8[8] = 1;
      v250.m128i_i64[0] = sub_EEC8C0(v241 & 0xFFFFFFFFFFFFFFFELL, v21, *(double *)a7.m128i_i64);
      sub_AEC610(v255, v250.m128i_i64);
      v22 = j__strlen("(");
      v23 = sub_EEB7E0(v241 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v250, *(double *)a7.m128i_i64);
      sub_9EC740((__int64)&v246, v23, "(", v22, 0);
      if ( (_DWORD)v246 && HIDWORD(v246) )
        sub_14B8100(v255, (unsigned __int64)&v246);
      v24 = j__strlen(")");
      v25 = sub_13DC060(
              *(_DWORD *)(a1 + 40),
              0,
              *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
              a7,
              *(double *)v11.m128_u64);
      sub_9EC740((__int64)&v250, v25, ")", v24, 0);
      if ( v250.m128i_i32[0] && v250.m128i_i32[1] )
        sub_14B8100(v255, (unsigned __int64)&v250);
      if ( ptr[1] != (char *)&v252 + 8 )
        operator delete(ptr[1]);
      if ( v248 != &v249 )
        operator delete(v248);
      sub_AEA040((__int64)v255);
      goto LABEL_21;
    case 31:
    case 33:
    case 36:
    case 40:
    case 41:
    case 204:
    case 207:
      if ( a8 )
        *a8 = 1;
      v123 = *(_DWORD *)(a1 + 16);
      v124 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v123;
      sub_14634E0(v124, (int *)(a1 + 16));
      v125 = *(_DWORD *)(a1 + 40);
      sub_1703D40(a1 + 48, *(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), v10, v125);
      v126 = sub_14BDA20(a1, 0, 0, 0, 0, 0);
      v241 = v126;
      if ( v126 != 1 )
      {
        v127 = *(_QWORD *)(a1 + 96);
        v255[0] = v126 & 0xFFFFFFFFFFFFFFFELL;
        v241 = sub_19258C0(v127, *(_QWORD *)(v127 + 608), v125, v10, v126 & 0xFFFFFFFFFFFFFFFELL, (unsigned __int8)v12);
        if ( v241 == 1 )
        {
          v128 = *(_QWORD *)(a1 + 96);
          v129 = sub_EEC140(v255[0]);
          return sub_18C4330(v128, v125, v129, v255, 1, 0);
        }
      }
      return v241;
    case 34:
    case 38:
      if ( a8 )
        *a8 = 1;
      v114 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v115 = (int *)(a1 + 16);
      v116 = *(__int64 **)(a1 + 8);
      v256[0] = *(void **)(a1 + 32);
      v117 = *(_DWORD *)(a1 + 16);
      *(__m128i *)v255 = v114;
      *(_DWORD *)(a1 + 40) = v117;
      sub_14634E0(v116, v115);
      sub_1703D40(a1 + 48, *(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), LOWORD(v256[0]), LODWORD(v255[0]));
      v118 = sub_14BB5C0(
               a1,
               (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0,
               0,
               (_DWORD)a4,
               0,
               0,
               0);
      v119 = *a4 == 0;
      v241 = v118;
      if ( !v119 )
      {
        sub_14B6320((const __m128i *)a1, (const __m128i *)v255);
        return 1;
      }
      if ( v118 != 1 )
      {
        v120 = *(_QWORD *)(a1 + 96);
        v250.m128i_i64[0] = v118 & 0xFFFFFFFFFFFFFFFELL;
        v241 = sub_19258C0(v120, *(_QWORD *)(v120 + 608), LODWORD(v255[0]), v10, v118 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v241 == 1 )
        {
          v121 = *(_QWORD *)(a1 + 96);
          v122 = sub_EEC140(v250.m128i_u64[0]);
          return sub_18C4330(v121, LODWORD(v255[0]), v122, &v250, 1, 0);
        }
      }
      return v241;
    case 56:
      v241 = sub_14B87C0(a1, *(double *)a7.m128i_i64, v11);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 72:
      v209 = a6;
      v86 = sub_1565E90(a1, 0);
      v83 = v209;
      if ( v86 )
        return 1;
      if ( *(_WORD *)(a1 + 32) != 72 )
        goto LABEL_130;
      v185 = *(_DWORD *)(a1 + 16);
      v186 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v185;
      sub_14634E0(v186, (int *)(a1 + 16));
      v188 = *(_WORD *)(a1 + 32);
      v140 = *(unsigned int *)(a1 + 40);
      if ( v188 == 139 )
      {
        if ( a8 )
          *a8 = 1;
        v241 = sub_14C8D10(a1, 1, v140, v187);
      }
      else
      {
        if ( v188 != 131 )
        {
          v139 = 1614;
          goto LABEL_224;
        }
        if ( a8 )
          *a8 = 1;
        v241 = sub_14D4D90(a1, 1, v140, v187);
      }
      goto LABEL_159;
    case 73:
      if ( a8 )
        *a8 = 1;
      v130 = *(_DWORD *)(a1 + 16);
      v131 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v130;
      sub_14634E0(v131, (int *)(a1 + 16));
      return sub_14FD5D0(a1, *(unsigned int *)(a1 + 40));
    case 76:
    case 79:
    case 84:
    case 88:
    case 92:
    case 93:
    case 94:
    case 95:
    case 98:
    case 99:
    case 107:
    case 108:
    case 127:
    case 151:
    case 155:
    case 160:
    case 161:
    case 177:
    case 178:
    case 179:
    case 181:
    case 182:
    case 183:
    case 202:
    case 203:
    case 205:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 346:
    case 347:
    case 348:
    case 349:
    case 350:
    case 351:
    case 352:
    case 362:
    case 368:
    case 371:
    case 372:
    case 394:
    case 424:
    case 425:
      goto LABEL_24;
    case 100:
    case 101:
    case 125:
    case 159:
    case 188:
    case 340:
    case 366:
    case 402:
      goto LABEL_3;
    case 112:
      a2 = a1 + 16;
      sub_15687A0(a1, a1 + 16);
LABEL_3:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C4300(a1, a2, a3, v18);
      if ( v15 != 2 )
        goto LABEL_6;
      return v241;
    case 116:
      v241 = sub_14BDFA0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 121:
    case 209:
    case 210:
    case 212:
    case 213:
    case 214:
    case 215:
      v50 = (int *)(a1 + 16);
      v100 = *(char **)(*(_QWORD *)(a1 + 8) + 56LL);
      if ( *v100 < 0
        && sub_13E0520(a1 + 16, v100)
        && ((v46 = *(_QWORD *)(a1 + 8),
             v47 = *(_QWORD *)(v46 + 2944),
             v48 = *(char **)(v46 + 56),
             v47 >= *(unsigned int *)(v46 + 2912))
          ? (v49 = sub_14180A0(v46, 1u))
          : (v49 = *(_QWORD *)(v46 + 2904) + 24 * v47),
            sub_13E0520(v49, v48)) )
      {
LABEL_53:
        v241 = sub_14B6B60(a1, 1, 0);
        if ( v15 != 2 )
          goto LABEL_21;
      }
      else
      {
        v51 = sub_18C6FA0(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), v10);
LABEL_56:
        v241 = v51;
        v52 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v52, v50);
        if ( v15 != 2 )
          goto LABEL_21;
      }
      return v241;
    case 122:
    case 123:
      v241 = sub_14B7890(a1);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 130:
    case 132:
    case 144:
    case 145:
    case 354:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C7DB0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 131:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14D4D90(a1, 0, *(unsigned int *)(a1 + 16), v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_6;
    case 135:
    case 149:
      v241 = sub_14C5FA0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 139:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C8D10(a1, 0, *(unsigned int *)(a1 + 16), v10);
      goto LABEL_159;
    case 140:
      v12 = (unsigned __int8)a3;
      goto LABEL_63;
    case 147:
      v241 = sub_14C60F0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 152:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C83D0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 163:
    case 329:
      v210 = a6;
      v99 = sub_1565E90(a1, 0);
      v83 = v210;
      if ( v99 )
        return 1;
      goto LABEL_130;
    case 164:
      if ( a8 )
        *a8 = 1;
      sub_1564840(v255, a1, a1 + 16, 2123);
      sub_AEA040((__int64)v255);
      v96 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v96, (int *)(a1 + 16));
      v97 = *(_DWORD *)(a1 + 40);
      v255[0] = a1 + 1952;
      v98 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      LOBYTE(v255[1]) = v98;
      v256[0] = (void *)a1;
      LODWORD(v256[1]) = 1507350;
      WORD2(v256[1]) = 63;
      *(_QWORD *)&v257 = sub_146A990;
      *((_QWORD *)&v257 + 1) = 0;
      v258 = 0;
      if ( (unsigned __int8)sub_156A040(v255, 1625, "noexcept", 0) )
      {
        *(_BYTE *)v255[0] = v255[1];
        return 1;
      }
      v162 = *(_QWORD *)(a1 + 96);
      sub_18C74E0(v162, 0, 0, 4);
      v241 = sub_14BFC10(a1, 0);
      sub_14808E0((__int64)v255, nullptr, v163, v164, v165, v166);
      if ( v241 != 1 )
        v241 = sub_19A4780(*(_QWORD *)(a1 + 96), v97, (unsigned int)v258, v241 & 0xFFFFFFFFFFFFFFFELL, HIDWORD(v258));
      sub_190D5E0(v162);
      *(_BYTE *)v255[0] = v255[1];
LABEL_159:
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_6;
    case 165:
      v91 = (int *)(a1 + 16);
      v92 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
      if ( (v92[1] & 8) != 0 )
      {
        sub_1564840(v255, a1, a1 + 16, 2125);
      }
      else
      {
        sub_1564840(v255, a1, a1 + 16, (*v92 & 8) == 0 ? 1954 : 2071);
        v93 = sub_10CBF50(*(_WORD *)(a1 + 32));
        sub_AE9DF0((unsigned __int8 **)v255, v93, 1u);
      }
      sub_AEA040((__int64)v255);
      v94 = *(__int64 **)(a1 + 8);
      v95 = *(_QWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v94, v91);
      v241 = sub_19A2760(v95, *(unsigned int *)(a1 + 40));
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 168:
      if ( a8 )
        *a8 = 1;
      v87 = *(_DWORD *)(a1 + 16);
      v88 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v87;
      sub_14634E0(v88, (int *)(a1 + 16));
      v89 = *(_DWORD *)(a1 + 40);
      v90 = sub_14BDA20(a1, 0, 0, 0, 0, 0);
      v241 = v90;
      if ( v90 != 1 )
        return sub_178D8A0(
                 *(_QWORD *)(a1 + 96),
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                 v89,
                 v90 & 0xFFFFFFFFFFFFFFFELL);
      return v241;
    case 176:
      v241 = sub_14CDD90(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_6;
    case 187:
      v74 = *(_QWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v241 = sub_18C3770(v74, *(unsigned int *)(a1 + 40));
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 190:
    case 191:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
    case 200:
    case 339:
    case 401:
      if ( a8 )
        *a8 = 1;
      return sub_14C1670(a1, a2, a3, v10);
    case 199:
    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 248:
    case 249:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 274:
    case 275:
    case 276:
    case 277:
    case 278:
    case 279:
    case 280:
    case 281:
    case 282:
    case 283:
    case 284:
    case 285:
    case 286:
    case 287:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
    case 296:
    case 297:
    case 298:
    case 299:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 363:
    case 364:
    case 365:
      v241 = sub_14C97B0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 201:
      if ( a8 )
        *a8 = 1;
      v68 = *(_QWORD *)(a1 + 104);
      v69 = (int *)(a1 + 16);
      ++*(_BYTE *)(v68 + 4);
      v70 = *(_DWORD *)(a1 + 16);
      v71 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v70;
      sub_14634E0(v71, v69);
      v72 = *(_DWORD *)(a1 + 40);
      v73 = sub_14BDA20(a1, 0, 0, 0, 0, 0);
      v241 = v73;
      if ( v73 != 1 )
        v241 = sub_19258C0(
                 *(_QWORD *)(a1 + 96),
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                 v72,
                 201,
                 v73 & 0xFFFFFFFFFFFFFFFELL,
                 0);
      result = v241;
      --*(_BYTE *)(v68 + 4);
      return result;
    case 258:
    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 268:
    case 269:
    case 270:
    case 271:
    case 272:
    case 273:
      v33 = *(_QWORD *)(a1 + 8);
      v34 = *(_QWORD *)(v33 + 2944);
      if ( v34 >= *(unsigned int *)(v33 + 2912) )
      {
        v230 = a6;
        v35 = sub_14180A0(v33, 1u);
        v17 = v230;
        v13 = v12;
      }
      else
      {
        v35 = *(_QWORD *)(v33 + 2904) + 24 * v34;
      }
      v226 = v17;
      v204 = v13;
      if ( *(_WORD *)(v35 + 16) == 22 )
        goto LABEL_218;
      *(_WORD *)(a1 + 32) = 5;
      sub_1564840(v255, a1, a1 + 16, 2001);
      v239 = *(_WORD *)(a1 + 32);
      v36 = sub_141A630(v239);
      if ( v239 == 1 || v36 )
        BUG();
      sub_AEC220(
        (unsigned __int8 **)v255,
        (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 16LL),
        **(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL));
      sub_AE9DF0((unsigned __int8 **)v255, 0, 2u);
      sub_AEA040((__int64)v255);
      v13 = v204;
      v17 = v226;
LABEL_38:
      v37 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v37 + 56) + 1LL) & 8) == 0 )
      {
        v45 = *(_WORD *)(a1 + 32);
        goto LABEL_228;
      }
      v38 = *(_QWORD *)(v37 + 2944);
      if ( *(unsigned int *)(v37 + 2912) <= v38 )
      {
        v232 = v17;
        v218 = v13;
        v39 = sub_14180A0(*(_QWORD *)(a1 + 8), 1u);
        v17 = v232;
        v13 = v218;
      }
      else
      {
        v39 = *(_QWORD *)(v37 + 2904) + 24 * v38;
      }
      v40 = *(unsigned __int16 *)(v39 + 16);
      if ( (_WORD)v40 == 27 )
      {
        if ( *(_WORD *)(a1 + 32) == 5 )
        {
          v167 = *(_QWORD *)(a1 + 8);
          v168 = *(_QWORD *)(v167 + 2944) + 1LL;
          if ( v168 >= *(unsigned int *)(v167 + 2912) )
          {
            v237 = v17;
            v224 = v13;
            v169 = sub_14180A0(v167, 2u);
            v17 = v237;
            v13 = v224;
          }
          else
          {
            v169 = *(_QWORD *)(v167 + 2904) + 24 * v168;
          }
          if ( *(_WORD *)(v169 + 16) == 20 )
          {
            v231 = v17;
            v216 = v13;
            v170 = sub_1565E90(a1, 0);
            v45 = *(_WORD *)(a1 + 32);
            v13 = v216;
            v83 = v231;
            if ( !v170 && (v45 == 425 || v45 == 416) )
            {
LABEL_130:
              v84 = (unsigned __int8)v12;
              v85 = a8;
              return sub_14BDA20(a1, (unsigned int)a2, v84, v16, v83, v85);
            }
            goto LABEL_273;
          }
        }
        goto LABEL_44;
      }
      if ( (_WORD)v40 == 22 )
      {
        if ( *(_WORD *)(a1 + 32) == 5 )
        {
          v235 = v17;
          v222 = v13;
          if ( sub_14B5A80(5) )
            BUG();
          v196 = *(_QWORD *)(a1 + 24);
          v13 = v222;
          v17 = v235;
          if ( (*(_BYTE *)(v196 + 4) & 8) != 0 )
          {
            v197 = sub_14B9780(a1, v196, v255);
            v13 = v222;
            v44 = v235;
            if ( v197 )
            {
              *(_WORD *)(a1 + 32) = v255[0];
              return sub_14BB5C0(a1, v15, (unsigned __int8)v12, (_DWORD)a4, v16, v44, (__int64)a8);
            }
            goto LABEL_272;
          }
        }
LABEL_44:
        v41 = (unsigned int)(v40 - 22);
LABEL_45:
        v42 = 0x4000002000005LL;
        if ( _bittest64(&v42, v41) )
          goto LABEL_46;
LABEL_272:
        v45 = *(_WORD *)(a1 + 32);
        goto LABEL_273;
      }
      if ( *(_BYTE *)(a1 + 2040) == 1 || (_WORD)v40 != 62 )
      {
        v41 = (unsigned int)(v40 - 22);
        if ( (unsigned __int16)v41 > 0x32u )
          goto LABEL_272;
        goto LABEL_45;
      }
LABEL_46:
      v227 = v17;
      v205 = v13;
      v43 = sub_1565E90(a1, 0);
      v13 = v205;
      v44 = v227;
      if ( v43 )
        return 1;
      v45 = *(_WORD *)(a1 + 32);
      if ( v45 != 5 )
        return sub_14BB5C0(a1, v15, (unsigned __int8)v12, (_DWORD)a4, v16, v44, (__int64)a8);
LABEL_273:
      v37 = *(_QWORD *)(a1 + 8);
LABEL_228:
      v228 = v13;
      *(_QWORD *)v212 = v37;
      v141 = sub_141A630(v45);
      if ( v45 == 1 || v141 )
        v142 = 0;
      else
        v142 = *(_QWORD *)(a1 + 24);
      v143 = *(__int64 **)v212;
      v213 = v228;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      v229 = (int *)(a1 + 16);
      sub_14634E0(v143, (int *)(a1 + 16));
      v144 = *(_QWORD *)(a1 + 8);
      v145 = *(_DWORD *)(a1 + 40);
      v146 = v213;
      v147 = *(_WORD *)(a1 + 32);
      if ( (*(_BYTE *)(*(_QWORD *)(v144 + 56) + 2LL) & 4) == 0 )
        goto LABEL_236;
      if ( v147 == 26 )
      {
        v240 = v213;
        v221 = *(_DWORD *)(a1 + 40);
        v192 = sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 0, 1, 0, 0);
        v145 = v221;
        v146 = v240;
        if ( v192 )
        {
          v193 = *(__int64 **)(a1 + 8);
        }
        else
        {
          v144 = *(_QWORD *)(a1 + 8);
          v193 = (__int64 *)v144;
          if ( *(_QWORD *)(a1 + 2056) != v142 || (v202 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 608LL)) == nullptr )
          {
            v147 = *(_WORD *)(a1 + 32);
            LOBYTE(v198) = *(_BYTE *)(*(_QWORD *)(v144 + 56) + 2LL) & 4;
LABEL_363:
            if ( !(_BYTE)v198 )
              goto LABEL_236;
            goto LABEL_233;
          }
          while ( (*((_BYTE *)v202 + 9) & 8) == 0 )
          {
            v202 = (__int64 *)*v202;
            if ( !v202 )
            {
              v147 = *(_WORD *)(a1 + 32);
              v198 = *(_BYTE *)(*(_QWORD *)(v144 + 56) + 2LL) & 4;
              goto LABEL_363;
            }
          }
        }
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v193, v229);
        v194 = *(_WORD *)(a1 + 32);
        if ( v194 == 3 )
        {
          if ( *(_QWORD *)(a1 + 2056) != v142 )
          {
            v200 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(v200 + 760) )
            {
              *(_BYTE *)(v200 + 968) = 1;
              *(_BYTE *)(*(_QWORD *)(v200 + 48) + 6LL) = 1;
            }
            v201 = *(_QWORD *)(a1 + 96);
            *(_WORD *)(a1 + 32) = 1;
            sub_171E520(*(_QWORD *)(v201 + 656), *(_QWORD *)(v201 + 608), v142, v221, *(_DWORD *)(a1 + 2036) == v221);
            return 1;
          }
        }
        else
        {
          v195 = *(__int64 **)(a1 + 8);
          if ( v194 == 5 || (*(_BYTE *)(v195[7] + 1) & 8) != 0 && v194 == 129 )
          {
            if ( sub_141A630(v194) )
              v199 = 0;
            else
              v199 = *(_QWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v195, v229);
            v241 = sub_19DAB60(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v142, v199, v221, *(unsigned int *)(a1 + 40));
            goto LABEL_60;
          }
        }
        v161 = 1635;
        v160 = a1 + 16;
LABEL_254:
        sub_1564840(v255, a1, v160, v161);
        sub_AEA040((__int64)v255);
        return 1;
      }
LABEL_233:
      if ( *(_QWORD *)(a1 + 2056) != v142 || *(_BYTE *)(a1 + 2064) )
      {
        if ( v147 != 5 )
          goto LABEL_235;
LABEL_329:
        v147 = 5;
        if ( *(_BYTE *)(a1 + 2064) )
        {
          if ( !(_BYTE)v12 )
          {
            v214 = 0;
            goto LABEL_239;
          }
          goto LABEL_238;
        }
        goto LABEL_303;
      }
      v191 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 608LL);
      if ( !v191 )
      {
LABEL_302:
        if ( v147 == 5 )
        {
LABEL_303:
          v177 = *(_QWORD *)(v144 + 2944);
          if ( v177 >= *(unsigned int *)(v144 + 2912) )
          {
            v236 = v146;
            v223 = v145;
            v178 = sub_14180A0(v144, 1u);
            v147 = *(_WORD *)(a1 + 32);
            v146 = v236;
            v145 = v223;
          }
          else
          {
            v178 = *(_QWORD *)(v144 + 2904) + 24 * v177;
          }
          if ( v147 == 3 || (v179 = *(_WORD *)(v178 + 16), v179 == 62) || v179 == 21 )
          {
            v233 = v146;
            v220 = v145;
            v180 = sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 0, 1, 0, 0);
            v145 = v220;
            v146 = v233;
            if ( v180 )
            {
              v234 = v180;
              if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
                                   - 35) <= 1u )
              {
                sub_147A4A0((__int64)&v250, a1 + 504);
                v181 = *(_QWORD *)(a1 + 96);
                v246 = 0;
                v253 = v220;
                v254 = v220;
                sub_15AD370(
                  (unsigned int)&v250,
                  28,
                  v220,
                  (unsigned int)&v246,
                  (unsigned int)v242,
                  v234,
                  *(_QWORD *)(v181 + 248) + 17464LL);
                v182 = sub_14B6240();
                sub_147A650((__int64)v255, (__int64)&v250, (__int64)v182, 5);
                v183 = sub_1E85500(*(_QWORD *)(a1 + 96), v255);
                if ( !v184 )
                  v241 = sub_14FDCA0(a1, 0, 0, v183, 0);
                sub_147A7A0((char *)v255);
                sub_147A5F0((__int64)&v250);
                goto LABEL_60;
              }
            }
            v147 = *(_WORD *)(a1 + 32);
          }
LABEL_236:
          v214 = 0;
          if ( !(_BYTE)v12
            || (unsigned __int16)v147 <= 0x25u
            && (v146 = ((0x2004500000uLL >> v147) & 1) == 0, ((0x2004500000uLL >> v147) & 1) != 0) )
          {
LABEL_239:
            v148 = *(_WORD *)(a1 + 34);
            v149 = *(_QWORD *)(a1 + 24);
            v150 = *(_QWORD *)(a1 + 16);
            v250 = 0;
            WORD1(v258) = v148;
            *(_OWORD *)ptr = 0;
            v252 = 0;
            *(_WORD *)((char *)&v255[1] + 1) = 257;
            BYTE3(v255[1]) = v16 != 0;
            LOBYTE(v255[1]) = v16 != 0;
            v255[0] = (__int64)off_2BB33E8;
            v151 = *(_QWORD *)(a1 + 96);
            LODWORD(v246) = 0;
            WORD2(v255[1]) = 1;
            BYTE6(v255[1]) = 0;
            *(_OWORD *)v256 = 0;
            *(_QWORD *)&v257 = v150;
            *((_QWORD *)&v257 + 1) = v149;
            LOWORD(v258) = v147;
            v259 = v16 != 1;
            HIBYTE(v255[1]) = v146;
            if ( (unsigned __int16)(v147 - 70) > 1u )
            {
              v247 = v142;
              BYTE4(v255[1]) = v147 != 23;
            }
            else
            {
              BYTE1(v255[1]) = 0;
              BYTE4(v255[1]) = 0;
              v247 = v142;
            }
            HIDWORD(v248) = v145;
            LODWORD(v248) = v145;
            v152 = sub_190BE30(v151, v214, (__int64)v255, 0);
            v241 = v152;
            if ( !v152 )
            {
              sub_14B6320((const __m128i *)a1, v242);
              result = sub_14BB5C0(a1, v15, v214, (_DWORD)a4, v16, 0, (__int64)a8);
              if ( HIDWORD(ptr[1]) )
              {
                *(_QWORD *)v219 = result;
                free(ptr[0]);
                return *(_QWORD *)v219;
              }
              return result;
            }
            v241 = sub_14C7D30(a1, v152);
            if ( v241 != 1 && *(_WORD *)(a1 + 32) == 47 )
              sub_1555F90(a1, &v241);
            if ( HIDWORD(ptr[1]) )
              free(ptr[0]);
            goto LABEL_60;
          }
LABEL_238:
          v146 = (v147 & 0xFFFB) != 34;
          v214 = v146;
          goto LABEL_239;
        }
LABEL_235:
        if ( v147 != 3 )
          goto LABEL_236;
        goto LABEL_303;
      }
      while ( (*((_BYTE *)v191 + 9) & 8) == 0 )
      {
        v191 = (__int64 *)*v191;
        if ( !v191 )
          goto LABEL_302;
      }
      if ( v147 != 5 )
      {
        if ( v147 != 3 )
          goto LABEL_236;
        goto LABEL_339;
      }
      v189 = *(_QWORD *)(v144 + 2944);
      if ( v189 >= *(unsigned int *)(v144 + 2912) )
      {
        v225 = v145;
        v238 = v146;
        v203 = sub_14180A0(v144, 1u);
        v145 = v225;
        if ( *(_WORD *)(v203 + 16) == 62 )
          goto LABEL_339;
        v144 = *(_QWORD *)(a1 + 8);
        v146 = v238;
        v189 = *(_QWORD *)(v144 + 2944);
        if ( v189 >= *(unsigned int *)(v144 + 2912) )
        {
          v190 = sub_14180A0(v144, 1u);
          v146 = v238;
          v145 = v225;
          goto LABEL_325;
        }
      }
      else if ( *(_WORD *)(*(_QWORD *)(v144 + 2904) + 24 * v189 + 16) == 62 )
      {
        goto LABEL_339;
      }
      v190 = *(_QWORD *)(v144 + 2904) + 24 * v189;
LABEL_325:
      if ( *(_WORD *)(v190 + 16) != 21 )
      {
        v147 = *(_WORD *)(a1 + 32);
        if ( v147 != 3 )
        {
          v144 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(*(_QWORD *)(v144 + 56) + 2LL) & 4) == 0 || v147 != 5 )
            goto LABEL_236;
          goto LABEL_329;
        }
      }
LABEL_339:
      v241 = sub_14FDCA0(a1, 0, v145, 0, 0);
LABEL_60:
      if ( v15 == 2 )
        return v241;
LABEL_21:
      si128 = _mm_load_si128((const __m128i *)&v243);
      v27 = _mm_load_si128(&v244);
      v28 = v241;
      *(_QWORD *)(a1 + 80) = v245;
      *(__m128i *)(a1 + 48) = si128;
      *(__m128i *)(a1 + 64) = v27;
      v241 = sub_14BFE70(a1, v28);
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      if ( (*(_BYTE *)(v29 + 47) & 0x20) == 0 )
        return v241;
      v132 = *(_QWORD *)(a1 + 96) + 200LL;
      v133 = j__strlen("__cl_clang_function_pointers");
      if ( sub_FF8450(v132, (__int64)"__cl_clang_function_pointers", v133, v29) )
        return v241;
      v137 = v241 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v241 & 0xFFFFFFFFFFFFFFFELL) == 0
        || (*(_QWORD *)(v137 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 8)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1 )
      {
        return v241;
      }
      v138 = sub_C00A40(v137, (__int64)"__cl_clang_function_pointers", v134, v135, v136);
      v139 = 1829;
      v140 = v138;
LABEL_224:
      sub_1564820(v255, a1, v140, v139);
      sub_AEA040((__int64)v255);
      return 1;
    case 288:
    case 289:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C9F90(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 315:
    case 316:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C9D70(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 319:
      return sub_14B8570(a1, a7, v11);
    case 390:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14C85D0(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 403:
      if ( a8 )
        *a8 = 1;
      v241 = sub_14CA840(a1, a2, a3, v10);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 404:
      v241 = sub_14BAB20(a1, *(_DWORD *)(a1 + 16));
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 405:
      v241 = sub_14B86B0(a1, a7, v11);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 416:
      v207 = a6;
      v66 = sub_1565E90(a1, 0);
      v67 = v207;
      if ( v66 )
        return 1;
      v12 = (unsigned __int8)v12;
      if ( *(_WORD *)(a1 + 32) != 416 )
        return sub_14BB5C0(a1, a2, (unsigned __int8)v12, (_DWORD)a4, v16, v207, (__int64)a8);
      v171 = *(_QWORD *)(a1 + 8);
      v172 = *(_QWORD *)(v171 + 2944);
      if ( v172 >= *(unsigned int *)(v171 + 2912) )
      {
        v173 = sub_14180A0(v171, 1u);
        v67 = v207;
      }
      else
      {
        v173 = *(_QWORD *)(v171 + 2904) + 24 * v172;
      }
      v250 = _mm_loadu_si128((const __m128i *)v173);
      ptr[0] = *(void **)(v173 + 16);
      if ( LOWORD(ptr[0]) == 418 )
      {
        v206 = v67;
        if ( *(_DWORD *)(sub_1565590(a1, &v250) + 32) == 2 )
        {
          v174 = v255;
          for ( i = 12; i; --i )
          {
            *(_DWORD *)v174 = 0;
            v174 = (__int64 *)((char *)v174 + 4);
          }
          sub_14D0170(a1, (unsigned int)v255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
LABEL_291:
          sub_154E5D0(a1, v255, 1, 0);
          result = sub_14BB5C0(a1, a2, v12, (_DWORD)a4, v16, v206, (__int64)a8);
          if ( HIDWORD(v256[1]) )
          {
            *(_QWORD *)v217 = result;
            free(v256[0]);
            return *(_QWORD *)v217;
          }
          return result;
        }
      }
LABEL_63:
      v241 = sub_14D2870(a1, v12);
      if ( (_DWORD)a2 != 2 )
        goto LABEL_21;
      return v241;
    case 417:
      v53 = sub_14F77D0(a1);
      LOWORD(v18) = v10;
      if ( v53 )
      {
        v54 = *(_QWORD *)(a1 + 24);
        sub_147A4A0((__int64)&v250, a1 + 504);
        v55 = *(_WORD *)(a1 + 32);
        v253 = *(_DWORD *)(a1 + 16);
        v56 = sub_10CCDE0(v55);
        v57 = *(_DWORD *)(a1 + 16);
        v58 = *(_DWORD *)(a1 + 20);
        if ( v56 )
        {
          v59 = *(_QWORD *)(a1 + 96);
          if ( v58 )
          {
            v254 = *(_DWORD *)(a1 + 20);
          }
          else
          {
            v254 = *(_DWORD *)(a1 + 16);
            v58 = v57;
          }
          v246 = 0;
          v60 = *(_QWORD *)(v59 + 248);
        }
        else
        {
          v176 = *(_QWORD *)(a1 + 96);
          v254 = *(_DWORD *)(a1 + 16);
          v246 = 0;
          if ( !v58 )
            v58 = v57;
          v60 = *(_QWORD *)(v176 + 248);
        }
        if ( v54 )
          sub_15AD370((unsigned int)&v250, 28, v58, (unsigned int)&v246, (unsigned int)v242, v54, v60 + 17464);
        else
          sub_15AEFC0(&v250);
        v61 = sub_14B6240();
        sub_147A650((__int64)v255, (__int64)&v250, (__int64)v61, 5);
        v62 = sub_1E85500(*(_QWORD *)(a1 + 96), v255);
        if ( !v63 )
        {
          v64 = *(_DWORD *)(a1 + 20);
          v65 = *(__int64 **)(a1 + 8);
          if ( !v64 )
            v64 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = v64;
          sub_14634E0(v65, (int *)(a1 + 16));
          v241 = sub_14FDCA0(a1, 0, 0, v62, 0);
        }
        sub_147A7A0((char *)v255);
        sub_147A5F0((__int64)&v250);
        if ( (_DWORD)a2 != 2 )
          goto LABEL_21;
      }
      else
      {
LABEL_24:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 )
        {
          v160 = a1 + 16;
          v161 = 1614;
          goto LABEL_254;
        }
        if ( a8 )
          *a8 = 1;
        if ( (_WORD)v18 == 151
          && ((unsigned __int8)sub_1565E90(a1, 0) || !sub_13D0F50(a1 + 16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL))) )
        {
          return 1;
        }
        sub_147A4A0((__int64)v255, a1 + 504);
        sub_14C64D0(a1, v255);
        v31 = *(_WORD *)(a1 + 32);
        if ( v31 != 22 )
        {
          v32 = a1 + 16;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0 || v31 != 24 )
          {
            sub_1564840(&v250, a1, v32, 1626);
            LOBYTE(v247) = 1;
            v246 = v260;
            sub_AEC610(v250.m128i_i64, &v246);
            sub_AEA040((__int64)&v250);
            sub_147A5F0((__int64)v255);
            return 1;
          }
          sub_1564840(&v250, a1, v32, 2118);
          sub_AEA040((__int64)&v250);
        }
        v241 = sub_14C87B0(a1, v255);
        sub_147A5F0((__int64)v255);
        if ( (_DWORD)a2 != 2 )
          goto LABEL_21;
      }
      return v241;
    case 418:
      v206 = a6;
      v12 = (unsigned __int8)a3;
      if ( *(_DWORD *)(sub_1565590(a1, a1 + 16) + 32) != 2 )
        goto LABEL_63;
      *(_OWORD *)v255 = 0;
      *(_OWORD *)v256 = 0;
      v257 = 0;
      goto LABEL_291;
    case 419:
    case 420:
    case 421:
      *(_OWORD *)v255 = 0;
      *(_OWORD *)v256 = 0;
      v257 = 0;
      v241 = sub_14D2560(a1, v255, (unsigned __int8)a3, &v250);
      if ( HIDWORD(v256[1]) )
        free(v256[0]);
      goto LABEL_60;
    case 422:
    case 423:
      v101 = *(_QWORD *)(a1 + 24);
      v241 = v101;
      if ( v101 != 1 && (_WORD)v10 == 422 )
        v241 = sub_17A2AF0(
                 *(_QWORD *)(a1 + 96),
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                 v101 & 0xFFFFFFFFFFFFFFFELL,
                 v10);
      v102 = *(_DWORD *)(a1 + 20);
      v103 = *(__int64 **)(a1 + 8);
      if ( !v102 )
        v102 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v102;
      sub_14634E0(v103, (int *)(a1 + 16));
      if ( v241 == 1 || *(_WORD *)(a1 + 32) != 47 )
        goto LABEL_60;
      sub_1555F90(a1, &v241);
      if ( (_DWORD)a2 == 2 )
        return v241;
      goto LABEL_21;
    case 461:
      v208 = a6;
      sub_14B7D40(a1, a2, a3, v10, a5, a6);
      v83 = v208;
      v84 = (unsigned __int8)v12;
      v85 = a8;
      return sub_14BDA20(a1, (unsigned int)a2, v84, v16, v83, v85);
    default:
      goto LABEL_218;
  }
}
