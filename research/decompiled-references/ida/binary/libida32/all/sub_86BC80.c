__int64 __fastcall sub_86BC80(__int64 a1, int a2)
{
  unsigned int *v2; // rdx
  __int64 v3; // rcx
  unsigned int *v4; // rcx
  bool v5; // zf
  _BOOL4 v6; // eax
  _BOOL4 v7; // eax
  int v8; // eax
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  unsigned int *v11; // rdx
  unsigned __int64 v12; // r14
  size_t v13; // rbx
  __int64 v14; // rdi
  bool v15; // cf
  size_t v16; // rdi
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  int v21; // edx
  int v22; // edx
  size_t v23; // rbx
  __m128i *v24; // rax
  __int64 v25; // rbx
  int v26; // ebp
  __m128i si128; // xmm0
  __int64 v28; // r12
  _BYTE *v29; // rax
  _BYTE *v30; // rdx
  char v31; // al
  _QWORD *v32; // rax
  char *v33; // rax
  signed int v34; // eax
  int v35; // eax
  _QWORD *v36; // r13
  __int64 *v37; // r12
  unsigned int *v38; // rax
  unsigned int *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned int *v42; // rdx
  _QWORD *v43; // xmm0_8
  bool v44; // al
  __int64 v45; // rcx
  unsigned int *v46; // rax
  unsigned int *v47; // rcx
  bool v48; // si
  __int64 v49; // rdx
  unsigned int *v50; // rax
  int v51; // eax
  int v52; // esi
  __int64 j; // r14
  _BYTE *v54; // rax
  _BYTE *v55; // rcx
  char v56; // al
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int *k; // rcx
  __int64 v60; // rdx
  unsigned int *v61; // r13
  _QWORD *v62; // rax
  unsigned int *v63; // rax
  unsigned int *v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // r13
  int v67; // r9d
  int v68; // eax
  unsigned int *v69; // r14
  _QWORD *v70; // rax
  __int64 v71; // rdx
  unsigned int *v72; // r12
  _QWORD *v73; // rax
  unsigned int *v74; // r12
  int v75; // eax
  __int64 v76; // rsi
  _QWORD *v77; // rax
  unsigned int *m; // rcx
  __int64 v79; // rdx
  char *v80; // rax
  _QWORD *v81; // r12
  _QWORD *v82; // rax
  unsigned int *v83; // r12
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned int *n; // rcx
  __int64 v87; // rdx
  unsigned int *v88; // r12
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  unsigned int *ii; // rcx
  __int64 v92; // rdx
  unsigned int *v93; // r12
  char *v94; // rax
  _QWORD *v95; // r14
  char *v96; // rax
  _QWORD *v97; // r13
  char *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // r13
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  unsigned int *jj; // rcx
  __int64 v106; // rdx
  _QWORD *v107; // rax
  unsigned int *kk; // rcx
  __int64 v109; // rdx
  _QWORD *v110; // rax
  unsigned int *mm; // rcx
  __int64 v112; // rdx
  _QWORD *v113; // rax
  unsigned int *nn; // rcx
  __int64 v115; // rdx
  unsigned int *v116; // r12
  char *v117; // rax
  char *v118; // rax
  _QWORD *v119; // rax
  unsigned int *i1; // rcx
  __int64 v121; // rdx
  _QWORD *v122; // rax
  unsigned int *i2; // rcx
  __int64 v124; // rdx
  unsigned int *v125; // r12
  char *v126; // rax
  _QWORD *v127; // r14
  _QWORD *v128; // r13
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  unsigned int *i3; // rcx
  __int64 v133; // rdx
  unsigned int *v134; // r12
  char *v135; // rax
  _QWORD *v136; // r14
  _QWORD *v137; // r13
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  unsigned int *i5; // rcx
  __int64 v142; // rdx
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rdi
  unsigned __int64 *v146; // r10
  _QWORD *v147; // r12
  _QWORD *v148; // rcx
  _QWORD *v149; // rax
  _QWORD *v150; // r9
  __int64 v151; // r8
  _QWORD *v152; // rdx
  _QWORD *v153; // r15
  _QWORD *v154; // r13
  _QWORD *v155; // rbx
  __int64 *v156; // rbp
  char *v157; // rax
  __int64 *v158; // r14
  unsigned __int64 v159; // rbp
  char *v160; // r12
  __int64 v161; // rax
  unsigned int v162; // ebp
  _QWORD *i6; // rdx
  __int64 v164; // rcx
  __int64 v165; // rax
  _QWORD *v166; // rsi
  int v167; // eax
  __int64 v168; // r13
  __int64 *v169; // r10
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 **v172; // rax
  unsigned int *v173; // rdx
  __int64 v175; // rdx
  unsigned __int64 v176; // rax
  char v177; // al
  char v178; // al
  __int64 v179; // rax
  unsigned __int64 v180; // rdx
  char *v181; // rax
  char *v182; // rcx
  unsigned __int64 v183; // rsi
  unsigned __int64 v184; // rdi
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  _BYTE *v187; // rax
  char v188; // al
  unsigned __int64 v189; // rax
  _BYTE *v190; // rcx
  char v191; // al
  char v192; // dl
  _QWORD *v193; // rax
  unsigned int *i4; // rcx
  __int64 v195; // rdx
  _QWORD *v196; // rax
  _QWORD *v197; // rax
  char *v198; // rax
  _QWORD *v199; // rax
  char *v200; // rax
  _QWORD *v201; // rax
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  int v204; // ecx
  int v205; // eax
  char *v206; // r13
  char *v207; // r14
  char *v208; // rbp
  _BYTE *v209; // rax
  _BYTE *v210; // rdx
  char v211; // al
  _QWORD *v212; // rax
  unsigned int *v213; // r14
  _QWORD *v214; // rax
  unsigned int v215; // eax
  unsigned __int8 v216; // dl
  unsigned int *v217; // rbx
  unsigned int *v218; // rdi
  _QWORD *v219; // r14
  _QWORD *v220; // rax
  unsigned int *v221; // r12
  _QWORD *v222; // rax
  _QWORD *v223; // r14
  _QWORD *v224; // rax
  char *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rcx
  _QWORD *v229; // rax
  unsigned int *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rax
  __int64 v233; // rcx
  _QWORD *v234; // rax
  unsigned int *v235; // rax
  unsigned int *v236; // rbx
  unsigned int *v237; // rdi
  _QWORD *v238; // rax
  unsigned int *v239; // rbx
  unsigned int *v240; // rdi
  _QWORD *v241; // rax
  unsigned int *v242; // r12
  unsigned __int8 *v243; // rbp
  _QWORD *v244; // r13
  _QWORD *v245; // r14
  char *v246; // rax
  _QWORD *v247; // rax
  _QWORD *v248; // rax
  char *v249; // rax
  __int64 *i; // rax
  __int64 v251; // rdx
  char *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rax
  __int64 v255; // rcx
  _QWORD *v256; // rax
  unsigned int *v257; // rax
  unsigned int *v258; // rbx
  unsigned int *v259; // rdi
  unsigned int *v260; // rbx
  unsigned int *v261; // rdi
  unsigned __int8 *v263; // [rsp+8h] [rbp-2A0h]
  _QWORD *v264; // [rsp+8h] [rbp-2A0h]
  _QWORD *v265; // [rsp+8h] [rbp-2A0h]
  _QWORD *v266; // [rsp+10h] [rbp-298h]
  unsigned __int64 v267; // [rsp+10h] [rbp-298h]
  _QWORD *v268; // [rsp+18h] [rbp-290h]
  _QWORD *v269; // [rsp+18h] [rbp-290h]
  _QWORD *v270; // [rsp+18h] [rbp-290h]
  unsigned int *v271; // [rsp+18h] [rbp-290h]
  unsigned int v272; // [rsp+18h] [rbp-290h]
  _QWORD *v273; // [rsp+20h] [rbp-288h]
  unsigned int v274; // [rsp+30h] [rbp-278h]
  int v275; // [rsp+34h] [rbp-274h]
  _QWORD *v276; // [rsp+38h] [rbp-270h]
  int v277; // [rsp+44h] [rbp-264h] BYREF
  __int64 *v278; // [rsp+48h] [rbp-260h] BYREF
  __int128 v279; // [rsp+50h] [rbp-258h] BYREF
  __int128 v280; // [rsp+60h] [rbp-248h]
  unsigned int *v281; // [rsp+70h] [rbp-238h]
  unsigned int *v282[69]; // [rsp+80h] [rbp-228h] BYREF

  v2 = *(unsigned int **)(a1 + 24);
  v282[61] = (unsigned int *)__readfsqword(0x28u);
  v274 = a2 & 0xFFFFFEFF;
  v279 = 0;
  v280 = 0;
  memset(v282, 0, 0x1E8u);
  v3 = *(_QWORD *)(a1 + 80);
  v282[1] = (unsigned int *)a1;
  v282[31] = (unsigned int *)(a1 + 152);
  v4 = (unsigned int *)(a1 + v3);
  v5 = *(_WORD *)(a1 + 134) == 0;
  v282[19] = v2 + 64;
  v6 = 1;
  v281 = v4;
  v282[2] = v4;
  v282[20] = v2;
  LODWORD(v282[21]) = a2 & 0xFFFFFEFF;
  if ( !v5 )
    v6 = (*(_BYTE *)(a1 + 105) & 0x20) != 0;
  LODWORD(v282[22]) = v6;
  v7 = 1;
  if ( !*(_WORD *)(a1 + 132) )
    v7 = (*(_BYTE *)(a1 + 105) & 0x20) != 0;
  HIDWORD(v282[21]) = v7;
  switch ( *(_WORD *)(a1 + 130) )
  {
    case 1:
      LODWORD(v282[27]) = 13;
      goto LABEL_7;
    case 2:
      LODWORD(v282[27]) = 10;
      goto LABEL_7;
    case 3:
      LODWORD(v282[27]) = 3338;
      goto LABEL_7;
    case 4:
      LODWORD(v282[27]) = 3338;
      HIDWORD(v282[25]) = 1;
      goto LABEL_7;
    case 5:
      LODWORD(v282[27]) = 3338;
      HIDWORD(v282[25]) = 2;
      goto LABEL_7;
    case 6:
LABEL_7:
      v8 = 2;
      LODWORD(v282[26]) = -1;
      if ( *(_WORD *)(a1 + 128) != 2 )
        v8 = 1;
      HIDWORD(v282[27]) = v8;
      v282[30] = v2 + 208;
      v9 = (unsigned int *)*(unsigned __int16 *)(a1 + 142);
      v10 = *(_DWORD *)(a1 + 96);
      LODWORD(v282[28]) = -1;
      v282[32] = v9;
      v282[33] = (unsigned int *)*(unsigned __int16 *)(a1 + 140);
      LODWORD(v282[29]) = (v10 >> 4) & 1;
      HIDWORD(v282[60]) = (v10 >> 21) & 1;
      LODWORD(v282[60]) = (v10 >> 9) & 1;
      v11 = v4;
      do
        v11 = (unsigned int *)((char *)v11 + (unsigned __int16)__ROL2__(*(_WORD *)((char *)v11 + 1), 8));
      while ( *(_BYTE *)v11 == 121 );
      HIDWORD(v282[9]) = 8;
      v12 = (unsigned __int64)v11 + 3;
      v263 = (unsigned __int8 *)v11 + 3;
      if ( (unsigned __int64)((char *)v11 + 3 - (char *)v4) >> 62 )
        return (unsigned int)-48;
      v13 = 4 * ((char *)v11 + 3 - (char *)v4);
      LODWORD(v282[17]) = (*(unsigned __int16 *)(a1 + 136) + 8) & 0xFFFFFFF8;
      v14 = (unsigned int)(2 * LODWORD(v282[17]));
      v15 = __CFADD__(v13, v14);
      v16 = v13 + v14;
      if ( v15 )
        return (unsigned int)-48;
      v282[3] = (unsigned int *)(*(__int64 (__fastcall **)(size_t, _QWORD))a1)(v16, *(_QWORD *)(a1 + 16));
      if ( !v282[3] )
        return (unsigned int)-48;
      memset(v282[3], 0, v13);
      v282[5] = &v282[3][v13 / 4];
      memset(&v282[3][v13 / 4], 255, LODWORD(v282[17]));
      v282[6] = (unsigned int *)((char *)v282[5] + LODWORD(v282[17]));
      v275 = sub_846000((__int64)v282, (unsigned __int8 *)v282[2], v12);
      if ( !v275 )
        goto LABEL_527;
      v17 = HIDWORD(v282[9]);
      if ( v274 == 1 )
      {
        if ( *(char *)(a1 + 104) < 0 && (*(_BYTE *)(a1 + 144) & 4) != 0 )
        {
          HIDWORD(v282[10]) = HIDWORD(v282[9]);
          v17 = HIDWORD(v282[9]) + 8;
          HIDWORD(v282[9]) += 8;
        }
LABEL_17:
        v19 = *(_DWORD *)(a1 + 96);
        if ( (v19 & 0x800100) == 0 )
          goto LABEL_19;
        goto LABEL_18;
      }
      HIDWORD(v282[11]) = HIDWORD(v282[9]);
      v18 = HIDWORD(v282[9]);
      v17 = HIDWORD(v282[9]) + 8;
      HIDWORD(v282[9]) += 8;
      if ( v274 != 2 )
        goto LABEL_17;
      LODWORD(v282[12]) = v17;
      v17 = v18 + 16;
      HIDWORD(v282[9]) = v18 + 16;
      v19 = *(_DWORD *)(a1 + 96);
      if ( (v19 & 0x800100) != 0 )
      {
LABEL_18:
        HIDWORD(v282[12]) = v17;
        v17 += 8;
        HIDWORD(v282[9]) = v17;
      }
LABEL_19:
      if ( HIDWORD(v282[13]) )
      {
        HIDWORD(v282[13]) = v17;
        v17 += 8;
        HIDWORD(v282[9]) = v17;
      }
      if ( HIDWORD(v282[22]) )
      {
        v21 = v17 + 8;
        LODWORD(v282[10]) = v17;
        v20 = v17;
        HIDWORD(v282[9]) = v17 + 8;
      }
      else
      {
        v20 = (int)v282[10];
        v21 = v17;
      }
      if ( (v21 & 8) != 0 )
        HIDWORD(v282[9]) = v21 + 8;
      if ( !v20 )
        LODWORD(v282[10]) = HIDWORD(v282[9]);
      if ( HIDWORD(v282[14]) )
      {
        memset(v282[5], 0, LODWORD(v282[17]));
        v19 = *(_DWORD *)(a1 + 96);
      }
      v22 = *(unsigned __int16 *)(a1 + 136) + 1;
      LODWORD(v282[9]) = HIDWORD(v282[9]) + 16 * v22;
      v277 = LODWORD(v282[9]) + 8 * v22;
      if ( v19 >= 0 && (*(_BYTE *)(a1 + 144) & 4) != 0 && !LODWORD(v282[24]) )
        sub_843760((__int64)v282, (unsigned __int64)v282[2], &v277, 0, 0);
      sub_8465E0((__int64)v282, &v277, (unsigned __int64)v263);
      if ( v277 > 0x10000 )
      {
LABEL_527:
        v162 = -68;
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
        return v162;
      }
      if ( !HIDWORD(v282[23]) )
        goto LABEL_37;
      v23 = v263 - (unsigned __int8 *)v282[2];
      v282[7] = (unsigned int *)(*(__int64 (__fastcall **)(signed __int64, _QWORD))a1)(
                                  v263 - (unsigned __int8 *)v282[2],
                                  *(_QWORD *)(a1 + 16));
      if ( !v282[7] )
      {
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
        return (unsigned int)-48;
      }
      memset(v282[7], 0, v23);
      sub_845DE0(v282, (unsigned __int8 *)v282[2], nullptr);
LABEL_37:
      v24 = (__m128i *)sub_844080(a1);
      v25 = (__int64)v24;
      if ( !v24 )
      {
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
        if ( HIDWORD(v282[23]) )
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[7], *(_QWORD *)(a1 + 16));
        return (unsigned int)-48;
      }
      v282[0] = (unsigned int *)v24;
      v26 = v277;
      if ( v24->m128i_i32[0] )
        goto LABEL_50;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23848D0);
      v24->m128i_i32[1] = 0;
      v28 = 13;
      v24[9].m128i_i32[0] = 0;
      v24[6] = si128;
      do
      {
        if ( *((_BYTE *)&unk_239EDD0 + v28) > 7u )
        {
          v29 = sub_8441E0(v25, 3);
          if ( !v29 )
            goto LABEL_50;
          *v29 = 2;
          v30 = v29 + 2;
          *(_QWORD *)(v25 + 120) += 2LL;
          v29[1] = 65;
        }
        else
        {
          v32 = sub_8441E0(v25, 2);
          if ( !v32 )
            goto LABEL_50;
          *(_BYTE *)v32 = 1;
          v30 = (char *)v32 + 1;
          ++*(_QWORD *)(v25 + 120);
        }
        v31 = byte_239EDB0[v28--];
        *v30 = v31 + 80;
      }
      while ( v28 != 8 );
      v33 = sub_844340(v25, 1u, 3, 0, 13, 0);
      if ( v33 )
      {
        *v33 = -119;
      }
      else if ( *(_DWORD *)v25 )
      {
        goto LABEL_50;
      }
      v34 = ((v26 + 63) & 0xFFFFFFF0) - 48;
      *(_DWORD *)(v25 + 112) = v34;
      if ( v34 > 0 )
      {
        v249 = sub_844340(v25, 0x11u, 127, v34, 14, 0);
        if ( v249 )
          v249[1] |= 0x28u;
      }
LABEL_50:
      sub_84BA60((__int64)v282, 2 * *(unsigned __int16 *)(a1 + 136) + 2);
      if ( HIDWORD(v282[10]) )
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[10]), 1, 0);
      sub_847F60((unsigned int *)v25, 32, 9, 0, 13, 0);
      sub_847F60((unsigned int *)v25, 32, 1, 0, 13, 0);
      sub_847F60((unsigned int *)v25, 32, 2, 0, 129, 8);
      sub_847F60((unsigned int *)v25, 32, 13, 0, 129, 24);
      sub_847F60((unsigned int *)v25, 32, 4, 0, 129, 0);
      sub_847F60((unsigned int *)v25, 37, 1, 0, 129, 80);
      sub_847F60((unsigned int *)v25, 32, 12, 0, 132, 8);
      sub_847F60((unsigned int *)v25, 32, 11, 0, 132, 16);
      sub_849F80((unsigned int *)v25, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
      sub_847F60((unsigned int *)v25, 32, 142, 0, 1, 0);
      if ( SLODWORD(v282[16]) < SHIDWORD(v282[16]) )
      {
        sub_84BBE0((__int64)v282);
        if ( v274 != 2 )
          goto LABEL_54;
      }
      else if ( v274 != 2 )
      {
        goto LABEL_54;
      }
      sub_847F60((unsigned int *)v25, 32, 142, SLODWORD(v282[12]), 127, -1);
LABEL_54:
      if ( LODWORD(v282[13]) )
        sub_847F60((unsigned int *)v25, 32, 142, SLODWORD(v282[13]), 127, 0);
      if ( HIDWORD(v282[13]) )
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[13]), 127, 0);
      if ( *(int *)(a1 + 96) >= 0 )
      {
        v276 = sub_8535E0((__int64)v282);
        v266 = sub_845240(v25);
        if ( (*(_BYTE *)(a1 + 144) & 4) == 0 )
          goto LABEL_64;
        if ( v274 == 1 && (unsigned int)sub_853E80((__int64)v282) )
          goto LABEL_384;
        v35 = *(_DWORD *)(a1 + 104);
        if ( (v35 & 0x10) != 0 )
        {
          v215 = v282[1][30];
          v216 = v215;
          if ( (v282[1][26] & 0x20) != 0 )
            v216 = *((_BYTE *)v282[19] + (unsigned __int8)v215);
          sub_84E670((__int64)v282, v215, v216, 0);
LABEL_64:
          v36 = nullptr;
          if ( v274 != 1 )
            goto LABEL_65;
          goto LABEL_384;
        }
        if ( (v35 & 0x200) != 0 )
        {
          sub_8551D0((__int64)v282);
          goto LABEL_64;
        }
        if ( (v35 & 0x40) == 0 )
          goto LABEL_64;
        v278 = nullptr;
        v242 = v282[0];
        v271 = v282[1];
        v243 = (unsigned __int8 *)(v282[1] + 10);
        if ( HIDWORD(v282[12]) )
        {
          sub_847F60(v282[0], 32, 1, 0, 142, SHIDWORD(v282[12]));
          sub_847F60(v242, 32, 5, 0, 13, 0);
          sub_849F80(v242, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
          if ( !*v242 )
          {
            v242[36] = 0;
            v252 = sub_844340((__int64)v242, 1u, 13, 0, 1, 0);
            if ( v252 )
              *v252 = 59;
          }
          sub_847920(v242, 4, 13, 1, 0, 13);
        }
        v244 = sub_845240((__int64)v242);
        v245 = sub_84A700(v242, 3, 2, 0, 13, 0);
        if ( LODWORD(v282[21]) == 1 && !*v242 )
        {
          v253 = *((_QWORD *)v242 + 10);
          v254 = *(_QWORD *)(v253 + 8);
          v255 = v254 + 16;
          if ( (unsigned __int64)(v254 + 16) <= 0xFF0 )
          {
            v257 = (unsigned int *)(v253 + v254 + 16);
            *(_QWORD *)(v253 + 8) = v255;
            if ( v257 )
              goto LABEL_547;
          }
          else
          {
            v256 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v242 + 7))(
                               4096,
                               *(_QWORD *)(*((_QWORD *)v242 + 7) + 16LL));
            if ( v256 )
            {
              *v256 = *((_QWORD *)v242 + 10);
              *((_QWORD *)v242 + 10) = v256;
              v257 = (unsigned int *)(v256 + 2);
              *((_QWORD *)v257 - 1) = 16;
LABEL_547:
              *(__m128 *)v257 = _mm_loadh_ps((const double *)&v282[46]);
              v282[46] = v257;
              goto LABEL_502;
            }
            *v242 = 2;
          }
        }
LABEL_502:
        sub_847F60(v242, 33, 1, 0, 130, 0);
        sub_849F80(v242, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        v272 = (unsigned int)*((char *)v271 + 71) >> 31;
        if ( (unsigned int)sub_855F20((__int64)v282[0], v243, v272, (double *)&v278)
          || (unsigned int)sub_855B60((__int64)v282[0], (__int64)v243, v272, (double *)&v278) )
        {
          for ( i = v278; i; i = (__int64 *)i[1] )
          {
            v251 = *i;
            if ( *i && v244 )
            {
              *(_QWORD *)(v251 + 16) &= ~1uLL;
              *(_QWORD *)(v251 + 24) = v244;
            }
          }
        }
        else
        {
          if ( !*v242 )
          {
            v242[36] = 0;
            sub_8498A0(v242, 0x25232120u, 4, 0, 1, 0, 127, 7);
            if ( !*v242 )
            {
              v242[36] = 0;
              sub_849DA0(v242, 40, 0, 1, 0, 1, 0, 127, 3);
            }
          }
          sub_847F60(v242, 33, 1, 0, 129, (__int64)v243);
          if ( !*v242 )
          {
            v242[36] = 0;
            sub_849DA0(v242, 32, 0, 3, 0, 127, 1, 4, 0);
            if ( !*v242 )
            {
              v242[36] = 0;
              v246 = sub_844340((__int64)v242, 1u, 1, 0, 3, 0);
              if ( v246 )
                *v246 = -123;
            }
          }
          v247 = sub_8452F0((__int64)v242, 0);
          if ( v247 && v244 )
          {
            v247[2] &= ~1uLL;
            v247[3] = v244;
          }
        }
        sub_849F80(v242, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
        if ( LODWORD(v282[21]) != 1 )
        {
          v248 = sub_845240((__int64)v242);
          if ( v245 )
          {
            if ( v248 )
            {
              v245[2] &= ~1uLL;
              v245[3] = v248;
            }
          }
        }
        if ( HIDWORD(v282[12]) )
          sub_847F60(v242, 32, 13, 0, 5, 0);
        goto LABEL_64;
      }
      v36 = nullptr;
      v276 = nullptr;
      v266 = sub_845240(v25);
      if ( v274 != 1 )
        goto LABEL_65;
LABEL_384:
      v36 = nullptr;
      if ( *(_WORD *)(a1 + 134) && (*(_BYTE *)(a1 + 144) & 4) != 0 )
      {
        sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -1);
        sub_849F80((unsigned int *)v25, 0x40u, 4, 0, 2, 0, 0x7Fu, *(unsigned __int16 *)(a1 + 134));
        v36 = sub_84A700((unsigned int *)v25, 4, 4, 0, 13, 0);
      }
LABEL_65:
      v37 = nullptr;
      if ( HIDWORD(v282[10]) )
        v37 = sub_84D6E0(
                (__int64)v282,
                *(_BYTE *)(a1 + 124),
                (*(_DWORD *)(a1 + 104) >> 8) & 1,
                (*(_DWORD *)(a1 + 104) >> 4) & 1);
      sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[9]), 2, 0);
      sub_847F60((unsigned int *)v25, 32, 10, 0, 142, 0);
      if ( HIDWORD(v282[14]) )
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[14]), 127, 0);
      if ( v282[15] )
        sub_847F60((unsigned int *)v25, 32, 142, (int)v282[3][(char *)v282[15] + 1 - (char *)v282[2]] >> 3, 2, 0);
      if ( LODWORD(v282[10]) != HIDWORD(v282[9]) )
        sub_847F60((unsigned int *)v25, 32, 142, SLODWORD(v282[10]), 2, 0);
      if ( v274 == 2 )
      {
        v219 = sub_84A700((unsigned int *)v25, 1, 142, SLODWORD(v282[12]), 127, -1);
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[11]), 2, 0);
        v220 = sub_845240(v25);
        if ( v219 && v220 )
        {
          v219[2] &= ~1uLL;
          v219[3] = v220;
        }
      }
      else if ( v274 == 4 )
      {
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[11]), 2, 0);
      }
      sub_85C540((__int64)v282, (unsigned __int8 *)v282[2], v263, (__int64)&v279);
      if ( *(_DWORD *)v25 )
      {
        sub_8433D0((_QWORD *)v25);
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
        if ( HIDWORD(v282[23]) )
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[7], *(_QWORD *)(a1 + 16));
        v217 = v282[4];
        while ( v217 )
        {
          v218 = v217;
          v217 = *(unsigned int **)v217;
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v218, *(_QWORD *)(a1 + 16));
        }
        return (unsigned int)-48;
      }
      v268 = nullptr;
      if ( (*(_BYTE *)(a1 + 99) & 0x20) != 0 )
        v268 = sub_84A700((unsigned int *)v25, 1, 2, 0, 13, 0);
      v273 = nullptr;
      v264 = nullptr;
      if ( LODWORD(v282[22]) )
      {
        v273 = sub_84A700((unsigned int *)v25, 0, 2, 0, 142, SHIDWORD(v282[9]));
        v264 = sub_845240(v25);
      }
      v38 = (unsigned int *)sub_845240(v25);
      v39 = v282[47];
      for ( v282[37] = v38; v39; v39 = *((unsigned int **)v39 + 1) )
      {
        v40 = *(_QWORD *)v39;
        if ( *(_QWORD *)v39 && v38 )
        {
          *(_QWORD *)(v40 + 16) &= ~1uLL;
          *(_QWORD *)(v40 + 24) = v38;
        }
      }
      if ( !HIDWORD(v282[22]) || (v282[1][25] & 0x40) != 0 )
        goto LABEL_88;
      sub_847F60((unsigned int *)v25, 32, 1, 0, 137, 8);
      sub_847F60((unsigned int *)v25, 32, 4, 0, 142, SHIDWORD(v282[9]));
      if ( !*(_DWORD *)v25 )
      {
        *(_DWORD *)(v25 + 144) = 0;
        v225 = sub_844340(v25, 1u, 4, 0, 1, 0);
        if ( v225 )
          *v225 = 59;
      }
      sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -75);
      sub_8452F0(v25, 2);
      if ( *(_DWORD *)v25 )
        goto LABEL_477;
      v226 = *(_QWORD *)(v25 + 80);
      v227 = *(_QWORD *)(v226 + 8);
      v228 = v227 + 16;
      if ( (unsigned __int64)(v227 + 16) <= 0xFF0 )
      {
        v230 = (unsigned int *)(v226 + v227 + 16);
        *(_QWORD *)(v226 + 8) = v228;
        if ( v230 )
          goto LABEL_476;
      }
      else
      {
        v229 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v25 + 56))(
                           4096,
                           *(_QWORD *)(*(_QWORD *)(v25 + 56) + 16LL));
        if ( v229 )
        {
          *v229 = *(_QWORD *)(v25 + 80);
          *(_QWORD *)(v25 + 80) = v229;
          v230 = (unsigned int *)(v229 + 2);
          *((_QWORD *)v230 - 1) = 16;
LABEL_476:
          *(__m128 *)v230 = _mm_loadh_ps((const double *)&v282[45]);
          v282[45] = v230;
          goto LABEL_477;
        }
        *(_DWORD *)v25 = 2;
      }
LABEL_477:
      sub_84A700((unsigned int *)v25, 4, 4, 0, 2, 0);
      if ( *(_DWORD *)v25 )
        goto LABEL_88;
      v231 = *(_QWORD *)(v25 + 80);
      v232 = *(_QWORD *)(v231 + 8);
      v233 = v232 + 16;
      if ( (unsigned __int64)(v232 + 16) <= 0xFF0 )
      {
        v235 = (unsigned int *)(v231 + v232 + 16);
        *(_QWORD *)(v231 + 8) = v233;
        if ( v235 )
          goto LABEL_481;
      }
      else
      {
        v234 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v25 + 56))(
                           4096,
                           *(_QWORD *)(*(_QWORD *)(v25 + 56) + 16LL));
        if ( v234 )
        {
          *v234 = *(_QWORD *)(v25 + 80);
          *(_QWORD *)(v25 + 80) = v234;
          v235 = (unsigned int *)(v234 + 2);
          *((_QWORD *)v235 - 1) = 16;
LABEL_481:
          *(__m128 *)v235 = _mm_loadh_ps((const double *)&v282[45]);
          v282[45] = v235;
          goto LABEL_88;
        }
        *(_DWORD *)v25 = 2;
      }
LABEL_88:
      sub_84C670((__int64)v282, *(unsigned __int16 *)(a1 + 136) + 1);
      v41 = sub_845240(v25);
      v42 = v282[43];
      v43 = v41;
      *(__m128i *)&v282[35] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
      if ( v282[43] )
      {
        v44 = v41 != nullptr;
        do
        {
          v45 = *(_QWORD *)v42;
          if ( *(_QWORD *)v42 && v44 )
          {
            *(_QWORD *)(v45 + 16) &= ~1uLL;
            *(_QWORD *)(v45 + 24) = v43;
          }
          v42 = *((unsigned int **)v42 + 1);
        }
        while ( v42 );
      }
      v46 = v282[45];
      if ( v282[45] )
      {
        v47 = v282[36];
        v48 = v282[36] != nullptr;
        do
        {
          v49 = *(_QWORD *)v46;
          if ( *(_QWORD *)v46 && v48 )
          {
            *(_QWORD *)(v49 + 16) &= ~1uLL;
            *(_QWORD *)(v49 + 24) = v47;
          }
          v46 = *((unsigned int **)v46 + 1);
        }
        while ( v46 );
      }
      if ( v36 )
      {
        v50 = v282[36];
        if ( v282[36] )
        {
          v36[2] &= ~1uLL;
          v36[3] = v50;
        }
      }
      if ( *(_DWORD *)v25 )
        goto LABEL_115;
      *(_DWORD *)(v25 + 144) = 0;
      v51 = *(_DWORD *)(v25 + 112);
      if ( v51 <= 0 || sub_844340(v25, 0x11u, 127, v51, 14, 0) )
      {
        v52 = *(_DWORD *)(v25 + 96);
        if ( v52 > 7 )
        {
          for ( j = 8; v52 >= (int)j; ++j )
          {
            if ( *((_BYTE *)&unk_239EDD0 + j) > 7u )
            {
              v54 = sub_8441E0(v25, 3);
              if ( !v54 )
                goto LABEL_113;
              *v54 = 2;
              v55 = v54 + 2;
              *(_QWORD *)(v25 + 120) += 2LL;
              v54[1] = 65;
            }
            else
            {
              v57 = sub_8441E0(v25, 2);
              if ( !v57 )
                goto LABEL_113;
              *(_BYTE *)v57 = 1;
              v55 = (char *)v57 + 1;
              ++*(_QWORD *)(v25 + 120);
            }
            v56 = byte_239EDB0[j];
            *v55 = v56 + 88;
          }
        }
        v204 = 14 - *(_DWORD *)(v25 + 100);
        v205 = 13 - (*(_DWORD *)(v25 + 4) & 3);
        if ( v205 >= v204 )
        {
          v206 = &byte_239EDB0[v204];
          v207 = (char *)&unk_239EDD0 + v204;
          v208 = (char *)&unk_239EDD1 + v204 + (unsigned int)(v205 - v204);
          do
          {
            if ( (unsigned __int8)*v207 > 7u )
            {
              v209 = sub_8441E0(v25, 3);
              if ( !v209 )
                goto LABEL_113;
              *v209 = 2;
              v210 = v209 + 2;
              *(_QWORD *)(v25 + 120) += 2LL;
              v209[1] = 65;
            }
            else
            {
              v212 = sub_8441E0(v25, 2);
              if ( !v212 )
                goto LABEL_113;
              *(_BYTE *)v212 = 1;
              v210 = (char *)v212 + 1;
              ++*(_QWORD *)(v25 + 120);
            }
            v211 = *v206;
            ++v207;
            ++v206;
            *v210 = v211 + 88;
          }
          while ( v208 != v207 );
        }
      }
      else
      {
LABEL_113:
        if ( *(_DWORD *)v25 )
          goto LABEL_115;
      }
      sub_847640((unsigned int *)v25, 195);
LABEL_115:
      if ( v282[46] )
      {
        v58 = sub_845240(v25);
        for ( k = v282[46]; k; k = *((unsigned int **)k + 1) )
        {
          v60 = *(_QWORD *)k;
          if ( *(_QWORD *)k && v58 )
          {
            *(_QWORD *)(v60 + 16) &= ~1uLL;
            *(_QWORD *)(v60 + 24) = v58;
          }
        }
        sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -1);
        v61 = v282[36];
        v62 = sub_8452F0(v25, 36);
        if ( v61 && v62 )
        {
          v62[2] &= ~1uLL;
          v62[3] = v61;
        }
      }
      if ( (*(_BYTE *)(a1 + 99) & 0x20) != 0 )
      {
        v196 = sub_845240(v25);
        if ( v268 )
        {
          if ( v196 )
          {
            v268[2] &= ~1uLL;
            v268[3] = v196;
          }
        }
      }
      if ( v274 != 1 )
      {
        v63 = (unsigned int *)sub_845240(v25);
        v64 = v282[42];
        for ( v282[34] = v63; v64; v64 = *((unsigned int **)v64 + 1) )
        {
          v65 = *(_QWORD *)v64;
          if ( *(_QWORD *)v64 && v63 )
          {
            *(_QWORD *)(v65 + 16) &= ~1uLL;
            *(_QWORD *)(v65 + 24) = v63;
          }
        }
        sub_84CA20((__int64)v282, (__int64)v282[35]);
      }
      v66 = nullptr;
      if ( LODWORD(v282[22]) )
        v66 = sub_845240(v25);
      sub_865160((__int64)v282, v280);
      if ( *(_DWORD *)v25 )
      {
        sub_8433D0((_QWORD *)v25);
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
        if ( HIDWORD(v282[23]) )
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[7], *(_QWORD *)(a1 + 16));
        v239 = v282[4];
        while ( v239 )
        {
          v240 = v239;
          v239 = *(unsigned int **)v239;
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v240, *(_QWORD *)(a1 + 16));
        }
        return (unsigned int)-48;
      }
      v269 = sub_845240(v25);
      if ( v274 == 2 )
      {
        v223 = sub_84A700((unsigned int *)v25, 1, 142, SLODWORD(v282[12]), 127, 0);
        sub_847F60((unsigned int *)v25, 32, 1, 0, 142, SLODWORD(v282[10]));
        sub_847F60((unsigned int *)v25, 32, 142, SHIDWORD(v282[11]), 127, -1);
        sub_847F60((unsigned int *)v25, 32, 142, SLODWORD(v282[12]), 1, 0);
        v224 = sub_845240(v25);
        if ( v223 )
        {
          if ( v224 )
          {
            v223[2] &= ~1uLL;
            v223[3] = v224;
          }
        }
      }
      if ( *(int *)(a1 + 96) >= 0 && HIDWORD(v282[12]) )
        sub_847F60((unsigned int *)v25, 32, 1, 0, 142, SHIDWORD(v282[12]));
      if ( v282[15] )
        v67 = (int)v282[3][(char *)v282[15] + 1 - (char *)v282[2]] >> 3;
      else
        v67 = (int)v282[10];
      sub_847F60((unsigned int *)v25, 32, 2, 0, 142, v67);
      v68 = *(_DWORD *)(a1 + 96);
      if ( v68 >= 0 )
      {
        v69 = v282[38];
        if ( v282[38] )
        {
          if ( (v68 & 0x100) == 0 )
          {
            if ( HIDWORD(v282[12]) )
            {
              sub_847F60((unsigned int *)v25, 32, 3, 0, 13, 0);
              sub_847F60((unsigned int *)v25, 32, 13, 0, 1, 0);
              v213 = v282[38];
              v214 = sub_84A700((unsigned int *)v25, 2, 2, 0, 1, 0);
              if ( v213 && v214 )
              {
                v214[2] &= ~1uLL;
                v214[3] = v213;
              }
              sub_847F60((unsigned int *)v25, 32, 13, 0, 3, 0);
            }
            else
            {
              v241 = sub_84A700((unsigned int *)v25, 2, 2, 0, 13, 0);
              if ( v241 )
              {
                v241[2] &= ~1uLL;
                v241[3] = v69;
              }
            }
          }
        }
        else
        {
          if ( !HIDWORD(v282[12]) )
            v275 = 13;
          v238 = sub_84A700((unsigned int *)v25, 2, 2, 0, v275, 0);
          if ( v238 && v276 )
          {
            v238[2] &= ~1uLL;
            v238[3] = v276;
          }
        }
      }
      if ( v37 )
      {
        v70 = sub_845240(v25);
        do
        {
          v71 = *v37;
          if ( *v37 && v70 )
          {
            *(_QWORD *)(v71 + 16) &= ~1uLL;
            *(_QWORD *)(v71 + 24) = v70;
          }
          v37 = (__int64 *)v37[1];
        }
        while ( v37 );
      }
      if ( v274 == 2 )
      {
        v221 = v282[34];
        v222 = sub_84A700((unsigned int *)v25, 1, 142, SLODWORD(v282[12]), 127, -1);
        if ( v221 )
        {
          if ( v222 )
          {
            v222[2] &= ~1uLL;
            v222[3] = v221;
          }
        }
      }
      sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -1);
      v72 = v282[35];
      v73 = sub_8452F0(v25, 36);
      if ( v72 && v73 )
      {
        v73[2] &= ~1uLL;
        v73[3] = v72;
      }
      sub_847430((__int64)v282);
      if ( LODWORD(v282[22]) )
      {
        v197 = sub_845240(v25);
        if ( v197 && v273 )
        {
          v273[2] &= ~1uLL;
          v273[3] = v197;
        }
        sub_847F60((unsigned int *)v25, 32, 1, 0, 9, 0);
        sub_847F60((unsigned int *)v25, 37, 4, 0, 129, 88);
        if ( !*(_DWORD *)v25 )
        {
          *(_DWORD *)(v25 + 144) = 0;
          v198 = sub_844340(v25, 1u, 127, 4, 4, 0);
          if ( v198 )
            *v198 = -9;
        }
        v199 = sub_8452F0(v25, 1);
        if ( v199 && v66 )
        {
          v199[2] &= ~1uLL;
          v199[3] = v66;
        }
        if ( !*(_DWORD *)v25 )
        {
          *(_DWORD *)(v25 + 144) = 0;
          v200 = sub_844340(v25, 1u, 127, 8, 4, 0);
          if ( v200 )
            *v200 = -9;
        }
        v201 = sub_8452F0(v25, 0);
        if ( v201 && v264 )
        {
          v201[2] &= ~1uLL;
          v201[3] = v264;
        }
        sub_847F60((unsigned int *)v25, 32, 4, 0, 129, 8);
        v202 = sub_84A700((unsigned int *)v25, 1, 4, 0, 2, 0);
        if ( v202 && v264 )
        {
          v202[2] &= ~1uLL;
          v202[3] = v264;
        }
        v203 = sub_8452F0(v25, 36);
        if ( v203 && v66 )
        {
          v203[2] &= ~1uLL;
          v203[3] = v66;
        }
      }
      v282[15] = nullptr;
      v282[16] = nullptr;
      v74 = v282[35];
      v282[41] = v282[40];
      HIDWORD(v282[24]) = 1;
      if ( v282[40] )
      {
        v75 = v277 + 7;
        v76 = *(_QWORD *)(a1 + 16);
        if ( v277 >= 0 )
          v75 = v277;
        HIDWORD(v282[17]) = ((v75 >> 3) + 7) >> 3;
        v282[18] = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, __int64))a1)(SHIDWORD(v282[17]), v76);
        if ( v282[18] )
        {
          do
          {
            sub_86A3E0((__int64)v282);
            if ( *(_DWORD *)v25 )
              break;
            sub_847430((__int64)v282);
            v282[41] = *(unsigned int **)v282[41];
          }
          while ( v282[41] );
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[18], *(_QWORD *)(a1 + 16));
        }
        if ( v282[41] )
        {
          sub_8433D0((_QWORD *)v25);
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
          if ( HIDWORD(v282[23]) )
            (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[7], *(_QWORD *)(a1 + 16));
          v258 = v282[4];
          while ( v258 )
          {
            v259 = v258;
            v258 = *(unsigned int **)v258;
            (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v259, *(_QWORD *)(a1 + 16));
          }
          return (unsigned int)-48;
        }
      }
      v282[35] = v74;
      HIDWORD(v282[24]) = 0;
      v77 = sub_845240(v25);
      for ( m = v282[49]; m; m = *((unsigned int **)m + 1) )
      {
        v79 = *(_QWORD *)m;
        if ( *(_QWORD *)m && v77 )
        {
          *(_QWORD *)(v79 + 16) &= ~1uLL;
          *(_QWORD *)(v79 + 24) = v77;
        }
      }
      if ( !*(_DWORD *)v25 )
      {
        *(_DWORD *)(v25 + 144) = 1;
        v80 = sub_844340(v25, 1u, 0, 0, 142, 8);
        if ( v80 )
          *v80 = -113;
      }
      sub_847F60((unsigned int *)v25, 32, 142, 16, 2, 0);
      sub_847F60((unsigned int *)v25, 32, 1, 0, 9, 0);
      sub_849F80((unsigned int *)v25, 0x42u, 2, 0, 11, 0, 0x7Fu, 0x2000);
      sub_847F60((unsigned int *)v25, 32, 1, 0, 129, 0);
      sub_847F60((unsigned int *)v25, 32, 11, 0, 4, 0);
      sub_847C00((unsigned int *)v25, 273, (__int64)sub_846500);
      v81 = sub_84A700((unsigned int *)v25, 0, 1, 0, 127, 0);
      sub_847F60((unsigned int *)v25, 32, 4, 0, 11, 0);
      sub_847F60((unsigned int *)v25, 32, 11, 0, 1, 0);
      sub_847F60((unsigned int *)v25, 32, 1, 0, 142, 8);
      sub_847F60((unsigned int *)v25, 32, 2, 0, 142, 16);
      sub_8455A0((unsigned int *)v25, 1);
      v82 = sub_845240(v25);
      if ( v81 && v82 )
      {
        v81[2] &= ~1uLL;
        v81[3] = v82;
      }
      sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -46);
      v83 = v282[35];
      v84 = sub_8452F0(v25, 36);
      if ( v83 && v84 )
      {
        v84[2] &= ~1uLL;
        v84[3] = v83;
      }
      v85 = sub_845240(v25);
      for ( n = v282[48]; n; n = *((unsigned int **)n + 1) )
      {
        v87 = *(_QWORD *)n;
        if ( *(_QWORD *)n && v85 )
        {
          *(_QWORD *)(v87 + 16) &= ~1uLL;
          *(_QWORD *)(v87 + 24) = v85;
        }
      }
      sub_847F60((unsigned int *)v25, 32, 1, 0, 127, -47);
      v88 = v282[35];
      v89 = sub_8452F0(v25, 36);
      if ( v89 && v88 )
      {
        v89[2] &= ~1uLL;
        v89[3] = v88;
      }
      if ( v282[50] )
      {
        v90 = sub_845240(v25);
        for ( ii = v282[50]; ii; ii = *((unsigned int **)ii + 1) )
        {
          v92 = *(_QWORD *)ii;
          if ( *(_QWORD *)ii && v90 )
          {
            *(_QWORD *)(v92 + 16) &= ~1uLL;
            *(_QWORD *)(v92 + 24) = v90;
          }
        }
        v93 = v282[0];
        sub_847570(v282[0], 5, 0);
        if ( !*v93 )
        {
          v93[36] = 0;
          v94 = sub_844340((__int64)v93, 1u, 14, 0, 1, 0);
          if ( v94 )
            *v94 = -119;
        }
        v95 = sub_845240((__int64)v93);
        sub_847F60(v93, 32, 4, 0, 140, -8);
        if ( !*v93 )
        {
          v93[36] = 0;
          v96 = sub_844340((__int64)v93, 0x11u, 127, 0, 4, 0);
          if ( v96 )
            v96[1] |= 0x38u;
        }
        v97 = sub_8452F0((__int64)v93, 9);
        sub_849F80(v93, 0x40u, 4, 0, 4, 0, 1u, 0);
        sub_847F60(v93, 32, 1, 0, 140, -16);
        sub_847F60(v93, 32, 3, 0, 140, -24);
        sub_849F80(v93, 0x42u, 12, 0, 12, 0, 0x7Fu, 24);
        sub_847F60(v93, 32, 132, 0, 1, 0);
        if ( !*v93 )
        {
          v93[36] = 0;
          v98 = sub_844340((__int64)v93, 1u, 14, 0, 1, 0);
          if ( v98 )
            *v98 = -119;
        }
        sub_847F60(v93, 32, 132, 8, 3, 0);
        v99 = sub_8452F0((__int64)v93, 36);
        if ( v99 && v95 )
        {
          v99[2] &= ~1uLL;
          v99[3] = v95;
        }
        v100 = sub_845240((__int64)v93);
        if ( v97 && v100 )
        {
          v97[2] &= ~1uLL;
          v97[3] = v100;
        }
        v101 = sub_8452F0((__int64)v93, 1);
        sub_8455A0(v93, 5);
        v102 = sub_845240((__int64)v93);
        if ( v102 && v101 )
        {
          v101[2] &= ~1uLL;
          v101[3] = v102;
        }
        sub_849F80(v93, 0x42u, 4, 0, 1, 0, 4u, 0);
        sub_847F60(v93, 32, 3, 0, 140, -16);
        sub_849F80(v93, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
        sub_847F60(v93, 32, 132, 0, 3, 0);
        v103 = sub_8452F0((__int64)v93, 36);
        if ( v103 && v95 )
        {
          v103[2] &= ~1uLL;
          v103[3] = v95;
        }
      }
      if ( v282[51] )
      {
        v104 = sub_845240(v25);
        for ( jj = v282[51]; jj; jj = *((unsigned int **)jj + 1) )
        {
          v106 = *(_QWORD *)jj;
          if ( *(_QWORD *)jj && v104 )
          {
            *(_QWORD *)(v106 + 16) &= ~1uLL;
            *(_QWORD *)(v106 + 24) = v104;
          }
        }
        sub_853140((__int64)v282);
      }
      if ( v282[52] )
      {
        v107 = sub_845240(v25);
        for ( kk = v282[52]; kk; kk = *((unsigned int **)kk + 1) )
        {
          v109 = *(_QWORD *)kk;
          if ( *(_QWORD *)kk && v107 )
          {
            *(_QWORD *)(v109 + 16) &= ~1uLL;
            *(_QWORD *)(v109 + 24) = v107;
          }
        }
        sub_853140((__int64)v282);
      }
      if ( v282[53] )
      {
        v110 = sub_845240(v25);
        for ( mm = v282[53]; mm; mm = *((unsigned int **)mm + 1) )
        {
          v112 = *(_QWORD *)mm;
          if ( *(_QWORD *)mm && v110 )
          {
            *(_QWORD *)(v112 + 16) &= ~1uLL;
            *(_QWORD *)(v112 + 24) = v110;
          }
        }
        sub_84D080(v282[0]);
      }
      if ( v282[54] )
      {
        v113 = sub_845240(v25);
        for ( nn = v282[54]; nn; nn = *((unsigned int **)nn + 1) )
        {
          v115 = *(_QWORD *)nn;
          if ( *(_QWORD *)nn && v113 )
          {
            *(_QWORD *)(v115 + 16) &= ~1uLL;
            *(_QWORD *)(v115 + 24) = v113;
          }
        }
        v116 = v282[0];
        sub_847570(v282[0], 5, 0);
        if ( !*v116 )
        {
          v116[36] = 0;
          v117 = sub_844340((__int64)v116, 0x11u, 127, 9, 1, 0);
          if ( v117 )
            v117[1] |= 0x38u;
        }
        sub_84CDF0((__int64)v116, 32, 4, 0);
        if ( !*v116 )
        {
          v116[36] = 0;
          v118 = sub_844340((__int64)v116, 0x11u, 127, 32, 1, 0);
          if ( v118 )
            v118[1] |= 0x38u;
        }
        sub_84CDF0((__int64)v116, 70, 4, 0);
        if ( !*v116 )
        {
          v116[36] = 0;
          sub_844EC0(v116, 1, 0, 127, 160);
        }
        sub_84CDF0((__int64)v116, 582, 4, 0);
        sub_8455A0(v116, 5);
      }
      if ( v282[55] )
      {
        v119 = sub_845240(v25);
        for ( i1 = v282[55]; i1; i1 = *((unsigned int **)i1 + 1) )
        {
          v121 = *(_QWORD *)i1;
          if ( *(_QWORD *)i1 && v119 )
          {
            *(_QWORD *)(v121 + 16) &= ~1uLL;
            *(_QWORD *)(v121 + 24) = v119;
          }
        }
        sub_84D080(v282[0]);
      }
      if ( v282[56] )
      {
        v122 = sub_845240(v25);
        for ( i2 = v282[56]; i2; i2 = *((unsigned int **)i2 + 1) )
        {
          v124 = *(_QWORD *)i2;
          if ( *(_QWORD *)i2 && v122 )
          {
            *(_QWORD *)(v124 + 16) &= ~1uLL;
            *(_QWORD *)(v124 + 24) = v122;
          }
        }
        v125 = v282[0];
        if ( !*v282[0] )
        {
          v282[0][36] = 1;
          v126 = sub_844340((__int64)v125, 1u, 0, 0, 142, 8);
          if ( v126 )
            *v126 = -113;
        }
        sub_849F80(v125, 0x42u, 2, 0, 2, 0, 4u, 0);
        v127 = sub_845240((__int64)v125);
        sub_847F60(v125, 33, 3, 0, 129, 0);
        sub_847F60(v125, 33, 5, 0, 130, 0);
        sub_849F80(v125, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
        sub_849F80(v125, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        v128 = sub_84A700(v125, 1, 3, 0, 5, 0);
        if ( !*v125 )
        {
          v125[36] = 0;
          sub_8490A0(v125, 0x2D2B2928u, 4, 0, 4, 0, 127, 1);
        }
        v129 = sub_8452F0((__int64)v125, 1);
        if ( v129 && v127 )
        {
          v129[2] &= ~1uLL;
          v129[3] = v127;
        }
        v130 = sub_845240((__int64)v125);
        if ( v128 && v130 )
        {
          v128[2] &= ~1uLL;
          v128[3] = v130;
        }
        sub_847F60(v125, 32, 1, 0, 142, 8);
        sub_8455A0(v125, 1);
      }
      if ( v282[57] )
      {
        v131 = sub_845240(v25);
        for ( i3 = v282[57]; i3; i3 = *((unsigned int **)i3 + 1) )
        {
          v133 = *(_QWORD *)i3;
          if ( *(_QWORD *)i3 && v131 )
          {
            *(_QWORD *)(v133 + 16) &= ~1uLL;
            *(_QWORD *)(v133 + 24) = v131;
          }
        }
        v134 = v282[0];
        if ( !*v282[0] )
        {
          v282[0][36] = 1;
          v135 = sub_844340((__int64)v134, 1u, 0, 0, 142, 8);
          if ( v135 )
            *v135 = -113;
        }
        sub_849F80(v134, 0x42u, 2, 0, 2, 0, 4u, 0);
        sub_847F60(v134, 32, 142, 16, 13, 0);
        sub_847F60(v134, 32, 3, 0, 127, (__int64)v282[20]);
        v136 = sub_845240((__int64)v134);
        sub_847F60(v134, 33, 13, 0, 129, 0);
        sub_847F60(v134, 33, 5, 0, 130, 0);
        sub_849F80(v134, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
        sub_847F60(v134, 33, 13, 0, 3459, 0);
        sub_847F60(v134, 33, 5, 0, 1411, 0);
        sub_849F80(v134, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
        v137 = sub_84A700(v134, 1, 13, 0, 5, 0);
        if ( !*v134 )
        {
          v134[36] = 0;
          sub_8490A0(v134, 0x2D2B2928u, 4, 0, 4, 0, 127, 1);
        }
        v138 = sub_8452F0((__int64)v134, 1);
        if ( v138 && v136 )
        {
          v138[2] &= ~1uLL;
          v138[3] = v136;
        }
        v139 = sub_845240((__int64)v134);
        if ( v139 && v137 )
        {
          v137[2] &= ~1uLL;
          v137[3] = v139;
        }
        sub_847F60(v134, 32, 1, 0, 142, 8);
        sub_847F60(v134, 32, 13, 0, 142, 16);
        sub_8455A0(v134, 1);
      }
      if ( v282[58] )
      {
        if ( !v282[59] )
          goto LABEL_294;
      }
      else if ( !v282[59] )
      {
        goto LABEL_305;
      }
      v193 = sub_845240(v25);
      for ( i4 = v282[59]; i4; i4 = *((unsigned int **)i4 + 1) )
      {
        v195 = *(_QWORD *)i4;
        if ( *(_QWORD *)i4 && v193 )
        {
          *(_QWORD *)(v195 + 16) &= ~1uLL;
          *(_QWORD *)(v195 + 24) = v193;
        }
      }
      sub_847F60((unsigned int *)v25, 32, 2, 0, 142, SLODWORD(v282[10]));
LABEL_294:
      v140 = sub_845240(v25);
      for ( i5 = v282[58]; i5; i5 = *((unsigned int **)i5 + 1) )
      {
        v142 = *(_QWORD *)i5;
        if ( *(_QWORD *)i5 && v140 )
        {
          *(_QWORD *)(v142 + 16) &= ~1uLL;
          *(_QWORD *)(v142 + 24) = v140;
        }
      }
      sub_84CBA0((__int64)v282, 2 * *(unsigned __int16 *)(a1 + 136) + 2);
      v143 = sub_84A700((unsigned int *)v25, 4, 2, 0, 1, 0);
      if ( v143 && v266 )
      {
        v143[2] &= ~1uLL;
        v143[3] = v266;
      }
      sub_847F60((unsigned int *)v25, 32, 2, 0, 1, 0);
      v144 = sub_8452F0(v25, 36);
      if ( v144 && v269 )
      {
        v144[2] &= ~1uLL;
        v144[3] = v269;
      }
LABEL_305:
      (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[3], *(_QWORD *)(a1 + 16));
      if ( HIDWORD(v282[23]) )
        (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v282[7], *(_QWORD *)(a1 + 16));
      v145 = (_QWORD *)v25;
      if ( *(_DWORD *)v25 )
        goto LABEL_483;
      sub_843540((_QWORD *)v25);
      v146 = sub_847040(*(_QWORD *)(v25 + 120));
      if ( !v146 )
      {
        *(_DWORD *)v25 = 3;
        v145 = (_QWORD *)v25;
LABEL_483:
        sub_8433D0(v145);
        v236 = v282[4];
        while ( v236 )
        {
          v237 = v236;
          v236 = *(unsigned int **)v236;
          (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v237, *(_QWORD *)(a1 + 16));
        }
        return (unsigned int)-48;
      }
      v147 = *(_QWORD **)(v25 + 72);
      v148 = nullptr;
      while ( 1 )
      {
        v149 = (_QWORD *)*v147;
        *v147 = v148;
        v148 = v147;
        if ( !v149 )
          break;
        v147 = v149;
      }
      v150 = *(_QWORD **)(v25 + 24);
      *(_QWORD *)(v25 + 72) = v147;
      v151 = (__int64)v146;
      v152 = v147;
      v153 = *(_QWORD **)(v25 + 8);
      v154 = *(_QWORD **)(v25 + 16);
      v270 = (_QWORD *)v25;
      v155 = v150;
      v156 = (__int64 *)v146;
      break;
    default:
      return (unsigned int)-44;
  }
  do
  {
    v157 = (char *)(v152 + 2);
    v158 = v156;
    v265 = v152;
    v159 = (unsigned __int64)v152 + v152[1] + 16;
    do
    {
      while ( 1 )
      {
        v160 = v157 + 1;
        v161 = (unsigned __int8)*v157;
        if ( (unsigned __int8)v161 <= 0xFBu )
          break;
        switch ( (_BYTE)v161 )
        {
          case 0xFE:
            v180 = v154[2];
            if ( (v180 & 0x10000) != 0 )
              goto LABEL_364;
            v181 = (char *)v154[3];
            v182 = (char *)v151;
            if ( (v180 & 1) == 0 )
            {
              v183 = *((_QWORD *)v181 + 2);
              v184 = v154[1];
              v182 = (char *)v158 + v184;
              v181 = (char *)v158 + v183;
              if ( v184 >= v183 )
                v182 = (char *)v151;
            }
            v185 = v181 - v182;
            if ( v185 - 6 >= 0x80000000LL || v185 - 5 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            {
LABEL_364:
              v151 = sub_843EC0((__int64)v154, v151);
              goto LABEL_349;
            }
            v186 = v180 >> 17;
            if ( (unsigned __int64)(v185 + 126) > 0xFF )
            {
              if ( v186 == 36 )
              {
                *(_BYTE *)v151 = -23;
                v187 = (_BYTE *)(v151 + 1);
                goto LABEL_362;
              }
              v187 = (_BYTE *)(v151 + 1);
              if ( v186 <= 0x24 )
              {
                *(_BYTE *)v151 = 15;
                v187 = (_BYTE *)(v151 + 2);
                *(_BYTE *)(v151 + 1) = byte_239ED40[v186];
LABEL_362:
                v154[2] |= 8uLL;
                v151 = (__int64)(v187 + 4);
                v154[1] = v187;
LABEL_349:
                v154 = (_QWORD *)*v154;
                v157 = v160;
                goto LABEL_318;
              }
LABEL_375:
              *(_BYTE *)v151 = -24;
              goto LABEL_362;
            }
            v187 = (_BYTE *)(v151 + 1);
            if ( v186 == 36 )
            {
              v192 = -21;
            }
            else
            {
              if ( v186 > 0x24 )
                goto LABEL_375;
              v192 = byte_239ED40[v186] - 16;
            }
            *(_BYTE *)v151 = v192;
            v151 += 2;
            v154[2] |= 4uLL;
            v154[1] = v187;
            goto LABEL_349;
          case 0xFF:
            v179 = v151;
            if ( v153[1] > 0xFFFFFFFFFFFFFFFDLL )
            {
              v189 = ~v153[4] & (v151 + v153[4]);
              v190 = (_BYTE *)v189;
              if ( v151 < v189 )
              {
                v267 = ~v153[4] & (v151 + v153[4]);
                memset((void *)v151, 144, v189 - v151);
                v190 = (_BYTE *)v267;
              }
              v179 = (__int64)v190;
              v151 = (__int64)v190;
            }
            v153[1] = v179;
            v153[2] = v151 - (_QWORD)v158;
            v153 = (_QWORD *)*v153;
            v157 = v160;
            goto LABEL_318;
          case 0xFD:
            v175 = v154[2];
            v176 = v154[3];
            if ( (v175 & 1) == 0 )
              v176 = (unsigned __int64)v158 + *(_QWORD *)(v176 + 16);
            if ( v176 <= 0xFFFFFFFF )
            {
              v188 = *(_BYTE *)(v151 - 10);
              if ( (v188 & 7) != 0 )
              {
                v151 -= 4;
                *(_BYTE *)(v151 - 6) = v188 & 0xF7;
              }
              else
              {
                v191 = *(_BYTE *)(v151 - 9);
                v151 -= 5;
                *(_BYTE *)(v151 - 5) = v191;
              }
            }
            else if ( v176 - v151 + 0x80000000 > 0xFFFFFFFF )
            {
              v154[2] = v175 | 0x10;
            }
            else
            {
              v177 = *(_BYTE *)(v151 - 10);
              v151 -= 3;
              *(_BYTE *)(v151 - 7) = (4 * v177) & 4 | 0x48;
              v178 = *(_BYTE *)(v151 - 6);
              *(_BYTE *)(v151 - 6) = -115;
              *(_BYTE *)(v151 - 5) = (8 * v178) & 0x38 | 5;
              v154[2] |= 8uLL;
            }
            v154[1] = v151;
            goto LABEL_349;
        }
        v155[1] = v151;
        v155 = (_QWORD *)*v155;
        v157 = v160;
LABEL_318:
        if ( (unsigned __int64)v157 >= v159 )
          goto LABEL_326;
      }
      if ( (unsigned int)v161 >= 8 )
      {
        *(_QWORD *)v151 = *(_QWORD *)v160;
        *(_QWORD *)(v151 + v161 - 8) = *(_QWORD *)&v160[v161 - 8];
        qmemcpy(
          (void *)((v151 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          &v160[-(v151 - ((v151 + 8) & 0xFFFFFFFFFFFFFFF8LL))],
          8LL * (((unsigned int)v161 + (_DWORD)v151 - (((_DWORD)v151 + 8) & 0xFFFFFFF8)) >> 3));
      }
      else if ( (v161 & 4) != 0 )
      {
        *(_DWORD *)v151 = *(_DWORD *)v160;
        *(_DWORD *)(v151 + v161 - 4) = *(_DWORD *)&v160[v161 - 4];
      }
      else if ( (_DWORD)v161 )
      {
        *(_BYTE *)v151 = *v160;
        if ( (v161 & 2) != 0 )
          *(_WORD *)(v151 + v161 - 2) = *(_WORD *)&v160[v161 - 2];
      }
      v151 += v161;
      v157 = &v160[v161];
    }
    while ( (unsigned __int64)v157 < v159 );
LABEL_326:
    v156 = v158;
    v152 = (_QWORD *)*v265;
  }
  while ( *v265 );
  v162 = 0;
  for ( i6 = (_QWORD *)v270[2]; i6; i6 = (_QWORD *)*i6 )
  {
    while ( 1 )
    {
      v164 = i6[2];
      v165 = i6[3];
      if ( (v164 & 1) == 0 )
        v165 = *(_QWORD *)(v165 + 8);
      v166 = (_QWORD *)i6[1];
      if ( (v164 & 2) != 0 )
      {
        if ( (v164 & 0x10) != 0 )
        {
          *(v166 - 1) = v165;
        }
        else
        {
          if ( (v164 & 8) != 0 )
            LODWORD(v165) = v165 - (_DWORD)v166;
          *((_DWORD *)v166 - 1) = v165;
        }
        goto LABEL_331;
      }
      if ( (v164 & 0x10) == 0 )
        break;
      *v166 = v165;
LABEL_331:
      i6 = (_QWORD *)*i6;
      if ( !i6 )
        goto LABEL_338;
    }
    v167 = v165 - (_DWORD)v166;
    if ( (v164 & 4) == 0 )
    {
      if ( (v164 & 8) != 0 )
        *(_DWORD *)v166 = v167 - 4;
      goto LABEL_331;
    }
    *(_BYTE *)v166 = v167 - 1;
  }
LABEL_338:
  *(_DWORD *)v270 = 1;
  v270[16] = 0;
  v168 = v151 - (_QWORD)v158;
  v270[17] = v151 - (_QWORD)v158;
  sub_8433D0(v270);
  v169 = v158;
  v170 = *(_QWORD *)(a1 + 32);
  if ( v170 )
    goto LABEL_339;
  v170 = (*(__int64 (__fastcall **)(__int64, _QWORD))a1)(80, *(_QWORD *)(a1 + 16));
  v169 = v158;
  if ( !v170 )
  {
    sub_847210(v158);
    v260 = v282[4];
    while ( v260 )
    {
      v261 = v260;
      v260 = *(unsigned int **)v260;
      (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 8))(v261, *(_QWORD *)(a1 + 16));
    }
    return (unsigned int)-48;
  }
  *(_OWORD *)(v170 + 64) = 0;
  *(_OWORD *)v170 = 0;
  *(_OWORD *)(v170 + 16) = 0;
  *(_OWORD *)(v170 + 32) = 0;
  *(_OWORD *)(v170 + 48) = 0;
  *(_DWORD *)(v170 + 72) = *(unsigned __int16 *)(a1 + 136) + 1;
  *(_DWORD *)(v170 + 76) = *(_DWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 32) = v170;
LABEL_339:
  v171 = 0;
  if ( v274 != 1 )
    v171 = (unsigned int)(v274 != 2) + 1;
  v172 = (__int64 **)(v170 + 8 * v171);
  *v172 = v169;
  v173 = v282[4];
  v172[6] = (__int64 *)v168;
  v172[3] = (__int64 *)v173;
  return v162;
}

