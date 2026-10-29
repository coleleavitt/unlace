__int64 __fastcall sub_1E8DE10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        int a10)
{
  unsigned __int64 v10; // rbp
  __int64 **v11; // r12
  unsigned __int32 v12; // r13d
  __int64 *v14; // r9
  __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r13
  int v38; // edi
  __int64 v39; // rdx
  int v40; // edi
  int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // dl
  __int64 **v58; // r14
  __int64 **v59; // r15
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // r14
  __m128 si128; // xmm0
  unsigned int v73; // ebp
  __int64 **v74; // r15
  __int64 *v75; // r14
  __int64 v76; // r13
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rsi
  int v81; // r14d
  unsigned __int64 v82; // r15
  char v83; // al
  __int64 v84; // r8
  __int64 v85; // r9
  char v86; // r11
  unsigned __int64 v87; // r10
  unsigned __int64 v88; // r13
  __int64 v89; // rdi
  unsigned __int64 v90; // rdx
  int v91; // r14d
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // r15
  int v100; // edi
  __int64 v101; // rdx
  int v102; // edi
  __int64 v103; // rdi
  unsigned __int64 *v104; // rbp
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r13
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  char v112; // al
  unsigned int v113; // eax
  __int64 v114; // r9
  int v115; // eax
  __int64 v116; // rdx
  char v117; // al
  unsigned int v118; // eax
  __int64 v119; // r9
  int v120; // eax
  _QWORD *v121; // rdi
  __int64 v122; // rcx
  __int64 v123; // r8
  unsigned __int64 v124; // rax
  int v125; // eax
  unsigned __int64 v126; // rax
  __int64 v127; // r12
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rsi
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  _QWORD *v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  unsigned int v158; // eax
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  char v162; // al
  unsigned int v163; // eax
  __int64 v164; // r9
  __int64 v165; // rdx
  char v166; // al
  unsigned int v167; // eax
  __int64 v168; // r9
  char v169; // al
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 *v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rcx
  unsigned __int64 v177; // rax
  __int64 v178; // r8
  __int64 v179; // r9
  _QWORD *v180; // r14
  _QWORD *v181; // rbx
  unsigned __int64 v182; // r13
  unsigned __int64 v183; // rax
  _QWORD *v184; // r15
  _QWORD *v185; // r12
  _QWORD *v186; // rdi
  void *v187; // rdi
  void **v188; // r12
  void **v189; // r15
  __int64 v190; // rax
  __int64 v191; // rax
  _QWORD *v192; // rbp
  __int64 v193; // rax
  unsigned __int64 v194; // rsi
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // rax
  __int64 *v199; // r12
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  unsigned __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  unsigned __int64 *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rax
  char v212; // al
  unsigned int v213; // eax
  __int64 v214; // r9
  int v215; // eax
  bool v216; // zf
  __int64 v217; // [rsp-8h] [rbp-2150h]
  bool v218; // [rsp+8h] [rbp-2140h]
  __int64 v219; // [rsp+8h] [rbp-2140h]
  unsigned int v220; // [rsp+8h] [rbp-2140h]
  __int64 *v221; // [rsp+8h] [rbp-2140h]
  __int64 *v222; // [rsp+8h] [rbp-2140h]
  __int64 *v223; // [rsp+8h] [rbp-2140h]
  __int64 *v224; // [rsp+8h] [rbp-2140h]
  __int64 v225; // [rsp+8h] [rbp-2140h]
  __int64 *v226; // [rsp+8h] [rbp-2140h]
  int v227; // [rsp+10h] [rbp-2138h]
  __int64 v228; // [rsp+10h] [rbp-2138h]
  int v230; // [rsp+18h] [rbp-2130h]
  char v232; // [rsp+30h] [rbp-2118h]
  unsigned int v233; // [rsp+34h] [rbp-2114h]
  unsigned __int32 v234; // [rsp+48h] [rbp-2100h]
  __int64 v235; // [rsp+48h] [rbp-2100h]
  int v236; // [rsp+50h] [rbp-20F8h]
  char v237; // [rsp+58h] [rbp-20F0h]
  char v238; // [rsp+58h] [rbp-20F0h]
  int v239; // [rsp+5Ch] [rbp-20ECh]
  __int64 v240; // [rsp+60h] [rbp-20E8h] BYREF
  __int64 v241; // [rsp+68h] [rbp-20E0h] BYREF
  __m128i v242; // [rsp+70h] [rbp-20D8h] BYREF
  void *ptr; // [rsp+80h] [rbp-20C8h] BYREF
  __int64 v244; // [rsp+88h] [rbp-20C0h] BYREF
  _BYTE v245[16]; // [rsp+90h] [rbp-20B8h] BYREF
  __int64 v246; // [rsp+A0h] [rbp-20A8h] BYREF
  unsigned int v247; // [rsp+A8h] [rbp-20A0h]
  char v248; // [rsp+ACh] [rbp-209Ch]
  char v249; // [rsp+ADh] [rbp-209Bh]
  char v250; // [rsp+AEh] [rbp-209Ah]
  __int64 v251; // [rsp+B8h] [rbp-2090h]
  __int64 v252[3]; // [rsp+D0h] [rbp-2078h] BYREF
  int v253; // [rsp+E8h] [rbp-2060h]
  unsigned __int64 *v254; // [rsp+F0h] [rbp-2058h]
  __int128 v255; // [rsp+100h] [rbp-2048h] BYREF
  char *v256; // [rsp+110h] [rbp-2038h]
  __int64 v257; // [rsp+118h] [rbp-2030h]
  char v258; // [rsp+120h] [rbp-2028h] BYREF
  __m128 *v259; // [rsp+140h] [rbp-2008h]
  __int64 v260; // [rsp+148h] [rbp-2000h]
  __m128 v261; // [rsp+150h] [rbp-1FF8h] BYREF
  __int128 v262; // [rsp+160h] [rbp-1FE8h] BYREF
  _BYTE **v263; // [rsp+170h] [rbp-1FD8h]
  __int64 v264; // [rsp+178h] [rbp-1FD0h]
  _BYTE *v265; // [rsp+180h] [rbp-1FC8h] BYREF
  __int64 v266; // [rsp+188h] [rbp-1FC0h]
  _BYTE v267[16]; // [rsp+190h] [rbp-1FB8h] BYREF
  __m128 *v268; // [rsp+1A0h] [rbp-1FA8h]
  __int64 v269; // [rsp+1A8h] [rbp-1FA0h]
  __m128 v270; // [rsp+1B0h] [rbp-1F98h] BYREF
  __int64 v271; // [rsp+210h] [rbp-1F38h]
  __int64 v272; // [rsp+218h] [rbp-1F30h]
  __int64 v273; // [rsp+220h] [rbp-1F28h]
  __int64 v274; // [rsp+230h] [rbp-1F18h]
  __int64 v275; // [rsp+238h] [rbp-1F10h]
  int v276; // [rsp+248h] [rbp-1F00h]
  char v277; // [rsp+24Ch] [rbp-1EFCh]
  void *v278; // [rsp+250h] [rbp-1EF8h]
  __int64 v279; // [rsp+258h] [rbp-1EF0h]
  _BYTE v280[64]; // [rsp+260h] [rbp-1EE8h] BYREF
  __int64 v281; // [rsp+2A0h] [rbp-1EA8h]
  __int64 v282; // [rsp+2A8h] [rbp-1EA0h]
  void *v283; // [rsp+2B0h] [rbp-1E98h]
  __int64 v284; // [rsp+2B8h] [rbp-1E90h]
  _BYTE v285[96]; // [rsp+2C0h] [rbp-1E88h] BYREF
  __int16 v286; // [rsp+320h] [rbp-1E28h]
  void *v287; // [rsp+328h] [rbp-1E20h]
  __int64 v288; // [rsp+330h] [rbp-1E18h]
  _BYTE v289[7696]; // [rsp+338h] [rbp-1E10h] BYREF

  LODWORD(v10) = 0;
  if ( (_BYTE)a10 )
    return (unsigned int)v10;
  v11 = (__int64 **)a4;
  v12 = a3;
  v14 = *(__int64 **)a4;
  v227 = a2;
  if ( (int)a2 <= 64 )
  {
    LODWORD(v10) = sub_1E8C260((__m128 *)a1, a2, a3, v14, a5, (__int64)v14, a7, a8);
    return (unsigned int)v10;
  }
  v233 = a2 - 74;
  v218 = (unsigned int)(a2 - 74) > 2;
  LOBYTE(v10) = v218 && (int)a2 <= 81;
  if ( !(_BYTE)v10 )
  {
    v58 = (__int64 **)(a4 + 8 * a5);
    if ( v58 != (__int64 **)a4 )
    {
      v59 = (__int64 **)a4;
      while ( 1 )
      {
        while ( 1 )
        {
          a3 = **v59;
          v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          a4 = *(unsigned __int8 *)(v60 + 16);
          if ( (_BYTE)a4 != 13 )
            break;
          if ( ((*(_WORD *)(v60 + 18) >> 3) & 0x1FF) != 0x1B3 )
            goto LABEL_36;
LABEL_37:
          if ( v58 == ++v59 )
            goto LABEL_41;
        }
        if ( (_BYTE)a4 != 5 )
        {
LABEL_36:
          if ( (unsigned __int8)sub_1E63CF0(a1, v12, a3, (__int64 *)((char *)&dword_0 + 1), 3970, (__int64)v14) )
            return (unsigned int)v10;
          goto LABEL_37;
        }
        if ( v58 == ++v59 )
        {
LABEL_41:
          v14 = *v11;
          break;
        }
      }
    }
    v240 = *v14;
    if ( sub_F62670(*(_QWORD *)(v240 & 0xFFFFFFFFFFFFFFF0LL), nullptr, a3, a4, a5, (__int64)v14) )
      return (unsigned int)v10;
    v65 = *(_QWORD *)(v240 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
      return (unsigned int)v10;
    v66 = sub_F63270(v65, 0, v61, v62, v63, v64);
    v71 = v66;
    if ( v66 )
    {
      sub_7052B0((__int64 *)(v66[13] + 96LL), v66[13], v67, v68, v69, v70);
      if ( (*(_BYTE *)(v71[16] + 1LL) & 8) != 0 )
        return (unsigned int)v10;
    }
    v260 = 0;
    v256 = &v258;
    v257 = 0x400000000LL;
    v259 = &v261;
    v244 = 0x200000000LL;
    v255 = 0;
    si128 = (__m128)_mm_load_si128((const __m128i *)&unk_23A7BC0);
    v261 = si128;
    ptr = v245;
    if ( (unsigned __int64)(a5 - 1) > 2 )
      sub_2237220(&ptr, v245, a5 - 1, 8);
    if ( (_DWORD)a5 != 1 )
    {
      v73 = 1;
      v234 = v12;
      do
      {
        while ( 1 )
        {
          v74 = &v11[v73];
          v75 = *v74;
          v252[0] = **v74;
          v76 = *(_QWORD *)(v252[0] & 0xFFFFFFFFFFFFFFF0LL);
          if ( sub_19A1E30(v76) && v218
            || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
          {
            v77 = sub_A72DD0(*(_QWORD *)(a1 + 248), v252[0]);
            v75 = *v74;
            v252[0] = v77;
          }
          v78 = *v75;
          *((_QWORD *)&v262 + 1) = v75 + 1;
          *(_QWORD *)&v262 = v78;
          v79 = sub_F6CCB0((__int64 *)&v262, si128);
          v80 = *(_QWORD *)(a1 + 248);
          v81 = v79;
          v82 = sub_F67970(v252, v80);
          v83 = sub_18C0240(v252[0], v80);
          v261.m128_u64[0] += 24LL;
          v86 = v83;
          v87 = (v255 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v88 = v87;
          if ( *((_QWORD *)&v255 + 1) >= v87 + 24 && (_QWORD)v255 )
          {
            *(_QWORD *)&v255 = v87 + 24;
            v89 = v87;
          }
          else
          {
            v238 = v83;
            v208 = sub_986170((__int64)&v255, 24, 24, 3, v84, v85);
            v86 = v238;
            v89 = v208;
            v88 = v208;
          }
          sub_1AF2350(v89, v81, v82, v86, 0, 0);
          v90 = (unsigned int)v244 + 1LL;
          if ( v90 > HIDWORD(v244) )
            break;
          ++v73;
          *((_QWORD *)ptr + (unsigned int)v244) = v88;
          LODWORD(v244) = v244 + 1;
          if ( (_DWORD)a5 == v73 )
            goto LABEL_60;
        }
        ++v73;
        sub_2237220(&ptr, v245, v90, 8);
        *((_QWORD *)ptr + (unsigned int)v244) = v88;
        LODWORD(v244) = v244 + 1;
      }
      while ( (_DWORD)a5 != v73 );
LABEL_60:
      v12 = v234;
    }
    sub_18C74E0(a1, 0, 0, 4);
    v220 = *(_DWORD *)(a1 + 11200);
    v232 = *(_BYTE *)(a1 + 12592);
    v237 = *(_BYTE *)(a1 + 11248);
    v91 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    v92 = *(_QWORD *)(a1 + 248);
    *(_BYTE *)(a1 + 12592) = 1;
    *(_BYTE *)(a1 + 11248) = 1;
    v97 = sub_704780(
            (__int64 *)(*(_QWORD *)(*(_QWORD *)(v92 + 2264) + 80LL) + 72LL),
            *(_QWORD *)(*(_QWORD *)(v92 + 2264) + 80LL),
            v93,
            v94,
            v95,
            v96);
    v98 = *(_QWORD *)(a1 + 512);
    v99 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)(a1 + 512) = 0;
    if ( v97 )
      v97 += 5;
    v235 = v98;
    v100 = *(_DWORD *)(a1 + 80);
    v101 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    *(_QWORD *)(a1 + 544) = v97;
    v236 = v100;
    v102 = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    v239 = v102;
    v103 = *(_QWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    v104 = (unsigned __int64 *)*v11;
    v251 = v101;
    v105 = *v104;
    if ( (*(_BYTE *)(*(_QWORD *)(v103 + 2320) + 52LL) & 1) != 0 )
      v105 = sub_A70E70(v103, *v104, 4);
    v252[2] = v105;
    LODWORD(v252[0]) = 9;
    v252[1] = 0;
    v253 = 0;
    v254 = v104;
    v242.m128i_i32[1] = v12;
    if ( v227 == 76 )
    {
      v242.m128i_i16[0] = 2;
      v242.m128i_i32[2] = v12;
      v242.m128i_i32[3] = v12;
    }
    else
    {
      v242.m128i_i16[0] = 0;
      v242.m128i_i64[1] = __PAIR64__(a6, v12);
    }
    sub_1A19220((__int64)&v262, a1, (__int64)v252, &v242, (__int64)ptr, (unsigned int)v244, si128, a8, 0, 1u);
    if ( (_DWORD)v262 )
    {
      v107 = sub_1A1D600((unsigned int)&v262, a1, (unsigned int)v252, (unsigned int)&v242, (_DWORD)ptr, v244, 0);
      if ( v107 != 1 && *(_DWORD *)(a1 + 11200) <= v220 )
      {
        LODWORD(v10) = 1;
        if ( v227 == 82 )
          goto LABEL_78;
        if ( v233 > 2 )
        {
          if ( v227 == 83 )
          {
            LOBYTE(v10) = (unsigned int)sub_18B2EA0(a1, v107 & 0xFFFFFFFFFFFFFFFELL) == 0;
            goto LABEL_78;
          }
          v211 = *(_QWORD *)&byte_8[sub_C1BEF0((__int64)&v240, a1, v217, v106) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v211 & 8) == 0
            || (((*(__int64 *)((char *)&qword_18 + (v211 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v211 & 7)) >> 6)
              & 6) == 0 )
          {
            LODWORD(v10) = sub_BFE6B0(v107 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1 + 248)) ^ 1;
            goto LABEL_78;
          }
        }
        else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v240 & 0xFFFFFFFFFFFFFFF0LL)
                                                                           + 8LL)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 16LL)
                - 43 <= 1
               && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1BEF0(
                                                                                     (__int64)&v240,
                                                                                     a1,
                                                                                     v217,
                                                                                     v106)
                                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                                     + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
                                  - 25) > 1u )
        {
          if ( (unsigned __int8)sub_1A0B790((__int64)&v262) )
          {
            if ( v227 != 74 )
            {
              v241 = *v11[1];
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v241 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 > 1 )
              {
                v192 = *(_QWORD **)(a1 + 248);
                v193 = sub_C1BEF0((__int64)&v240, a1, v108, v109);
                v194 = sub_A70010((__int64)v192, v193);
                v198 = sub_A81BC0(v192, v194, 0, v195, v196, v197);
                v10 = *(_QWORD *)(a1 + 248);
                v199 = v198;
                v202 = sub_C1BEF0((__int64)&v241, v194, v200, v201);
                v203 = sub_A70010(v10, v202);
                v207 = sub_A81BC0((_QWORD *)v10, v203, 0, v204, v205, v206);
                LOBYTE(v10) = sub_1E86710(a1, v207, v199, a6, (__int64 *)&v255, si128, a8) != 1;
                goto LABEL_78;
              }
            }
            goto LABEL_77;
          }
LABEL_78:
          sub_1A0BB10((__int64)&v262);
          if ( v99 )
          {
            *(_QWORD *)(a1 + 544) = v99;
            *(_QWORD *)(a1 + 512) = v235;
            *(_QWORD *)(a1 + 9944) = v251;
            *(_DWORD *)(a1 + 80) = v236;
            *(_DWORD *)(a1 + 2632) = v239;
          }
          *(_DWORD *)(a1 + 11200) = v220;
          *(_BYTE *)(a1 + 12592) = v232;
          *(_BYTE *)(a1 + 11248) = v237;
          v110 = *(_QWORD *)(a1 + 264);
          if ( *(_DWORD *)(v110 + 204) == 5 )
            *(_BYTE *)(v110 + 194) = 1;
          if ( v91 )
            v91 = 3;
          *(_DWORD *)(v110 + 204) = v91;
          sub_190D5E0(a1, si128);
          if ( ptr != v245 )
            free(ptr);
          sub_9B7090((__int64)&v255);
          return (unsigned int)v10;
        }
      }
    }
LABEL_77:
    LODWORD(v10) = 0;
    goto LABEL_78;
  }
  v15 = *(__int64 **)(a4 + 8);
  v16 = (unsigned int)(a2 - 65);
  LODWORD(v241) = a6;
  v242.m128i_i64[0] = *v14;
  v17 = *v15;
  switch ( (int)a2 )
  {
    case 'A':
      v121 = *(_QWORD **)(a1 + 248);
      *(_QWORD *)&v255 = 0;
      *(_QWORD *)&v262 = 0;
      v10 = sub_A725A0(v121, v242.m128i_i64[0], (__int64 *)&v255, a4, a5);
      v124 = sub_A725A0(*(_QWORD **)(a1 + 248), v17, (__int64 *)&v262, v122, v123);
      LOBYTE(v125) = sub_AAC110(*(_QWORD *)(a1 + 248), v10, v124, 0);
      LODWORD(v10) = v125;
      return (unsigned int)v10;
    case 'B':
    case 'C':
    case 'G':
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(_BYTE *)(v18 + 16);
      if ( v19 == 13 )
      {
        if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_8;
      }
      else if ( v19 == 5 )
      {
        goto LABEL_8;
      }
      v20 = *v14;
      *((_QWORD *)&v262 + 1) = v14 + 1;
      *(_QWORD *)&v262 = v20;
      v21 = sub_F6CCB0((__int64 *)&v262, a7);
      if ( (unsigned __int8)sub_1E63CF0(a1, v21, v242.m128i_i64[0], (__int64 *)((char *)&dword_0 + 1), 3970, v22) )
        goto LABEL_154;
LABEL_8:
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *(_BYTE *)(v23 + 16);
      if ( v24 == 13 )
      {
        if ( ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_11;
      }
      else if ( v24 == 5 )
      {
        goto LABEL_11;
      }
      v25 = *v15;
      *((_QWORD *)&v262 + 1) = v15 + 1;
      *(_QWORD *)&v262 = v25;
      v26 = sub_F6CCB0((__int64 *)&v262, a7);
      if ( (unsigned __int8)sub_1E63CF0(a1, v26, v17, (__int64 *)((char *)&dword_0 + 1), 3970, v27) )
        goto LABEL_154;
LABEL_11:
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v28 + 16) == 13 && ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_154;
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v29 + 16) == 13 && ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_154;
      ptr = (void *)a1;
      v244 = (__int64)&v241;
      sub_1E85F40((__int64)v252, (__int64)&ptr, (int **)&v244, v242.m128i_u64[0]);
      sub_1E85F40((__int64)&v255, (__int64)&ptr, (int **)&v244, v17);
      sub_18C74E0(a1, 0, 0, 4);
      sub_1E861A0((__int64)&v246, a1, 1);
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
      v35 = sub_704780((__int64 *)(v30 + 72), v30, v31, v32, v33, v34);
      v36 = *(_QWORD *)(a1 + 512);
      v37 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 512) = 0;
      if ( v35 )
        v35 += 5;
      v219 = v36;
      v38 = *(_DWORD *)(a1 + 80);
      v39 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      *(_QWORD *)(a1 + 544) = v35;
      v230 = v38;
      v40 = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      v41 = *(_DWORD *)(a1 + 3688);
      v264 = v39;
      *(_DWORD *)(a1 + 2632) = v41;
      v42 = sub_1929BB0(a1, 0, (unsigned int)v241, 0x15u, (__int64)v252, &v255, a7, a8, 0);
      if ( v42 == 1 )
        goto LABEL_179;
      v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
      v44 = v42 & 0xFFFFFFFFFFFFFFFELL;
      sub_18C38A0(a1, v42 & 0xFFFFFFFFFFFFFFFELL);
      v46 = v246;
      v47 = v247;
      if ( v247 < *(_DWORD *)(v246 + 11200) )
      {
        LODWORD(v10) = a10;
      }
      else if ( v227 != 67 )
      {
        if ( v227 == 66 )
        {
          v215 = sub_18B2EA0(a1, v44);
          v47 = v247;
          v216 = v215 == 0;
          v46 = v246;
          LOBYTE(v10) = v216;
        }
        else
        {
          v48 = *(_QWORD *)&byte_8[sub_C1BEF0((__int64)&v242, v43, v247, v45) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v48 & 8) != 0
            && (((*(__int64 *)((char *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v48 & 7)) >> 6) & 6) != 0
            || (v228 = *(_QWORD *)(a1 + 248),
                LOBYTE(v51) = sub_1E86160(v228, v242.m128i_i64[0], v228, v49, v50),
                LODWORD(v10) = v51,
                (_BYTE)v51) )
          {
LABEL_179:
            v46 = v246;
            v47 = v247;
            LODWORD(v10) = a10;
          }
          else
          {
            if ( !sub_1E86160(v228, v17, v228, v52, v53) )
              LODWORD(v10) = sub_BFE6B0(v44, *(_QWORD *)(a1 + 248)) ^ 1;
            v46 = v246;
            v47 = v247;
          }
        }
      }
      if ( v37 )
      {
        v54 = v264;
        *(_QWORD *)(a1 + 544) = v37;
        *(_QWORD *)(a1 + 512) = v219;
        *(_QWORD *)(a1 + 9944) = v54;
        *(_DWORD *)(a1 + 80) = v230;
        *(_DWORD *)(a1 + 2632) = v40;
      }
      *(_DWORD *)(v46 + 11200) = v47;
      *(_BYTE *)(v46 + 12592) = v248;
      *(_BYTE *)(v46 + 11248) = v249;
      v55 = *(_QWORD *)(v46 + 264);
      v56 = v250;
      if ( *(_DWORD *)(v55 + 204) == 5 )
        *(_BYTE *)(v55 + 194) = 1;
      *(_DWORD *)(v55 + 204) = v56 == 0 ? 3 : 0;
      sub_190D5E0(a1, a7);
      return (unsigned int)v10;
    case 'D':
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 48
        && (v126 = *(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL,
            v127 = *(_QWORD *)v126,
            *(_BYTE *)(*(_QWORD *)v126 + 16LL) == 48) )
      {
        if ( sub_F61420(v10, a2, v16, a4, a5, (__int64)v14)
          || sub_F61420(v127, a2, v128, v129, v130, v131)
          || !(unsigned __int8)sub_F613D0(v10, a2, v132, v133, v134, v135)
          || !(unsigned __int8)sub_F613D0(v127, a2, v136, v137, v138, v139)
          || (v140 = *v15,
              *((_QWORD *)&v262 + 1) = v15 + 1,
              *(_QWORD *)&v262 = v140,
              v141 = (unsigned int)sub_F6CCB0((__int64 *)&v262, a7),
              (unsigned __int8)sub_1E63CF0(a1, v141, v17, (__int64 *)((char *)&dword_0 + 1), 3968, v142)) )
        {
LABEL_154:
          LODWORD(v10) = a10;
        }
        else
        {
          v147 = sub_F60F10(v127, v141, v143, v144, v145, v146);
          v152 = sub_F60F10(v10, v141, v148, v149, v150, v151);
          LODWORD(v10) = sub_B6EBB0(v147, v152, v153, v154, v155, v156);
        }
      }
      else
      {
        LODWORD(v10) = a10;
        sub_1E8B590(a1, v14, 0xE5u, a7);
        sub_1E8B590(a1, v15, 0xE5u, a7);
      }
      return (unsigned int)v10;
    case 'E':
      v157 = *v15;
      *((_QWORD *)&v262 + 1) = v15 + 1;
      *(_QWORD *)&v262 = v157;
      v158 = sub_F6CCB0((__int64 *)&v262, a7);
      LODWORD(v10) = sub_1E86220(a1, v158, v242.m128i_i64[0], v17, v159, v160);
      return (unsigned int)v10;
    case 'F':
    case 'O':
    case 'P':
      v190 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v190 + 16) == 13 && ((*(_WORD *)(v190 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        LODWORD(v10) = a10;
        v191 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v191 + 16) == 13 )
          LOBYTE(v10) = ((*(_WORD *)(v191 + 18) >> 3) & 0x1FF) == 435;
      }
      else
      {
        v262 = 0;
        v263 = &v265;
        v264 = 0x400000000LL;
        v268 = &v270;
        v269 = 0;
        v270 = (__m128)_mm_load_si128((const __m128i *)&unk_23A7BC0);
        v210 = sub_1E86710(a1, (unsigned __int64 *)v14, v15, v241, (__int64 *)&v262, v270, a8);
        if ( v210 == 1 )
        {
          LODWORD(v10) = a10;
        }
        else if ( (_DWORD)a2 == 80 )
        {
          LOBYTE(v10) = (unsigned int)sub_18B2EA0(a1, v210 & 0xFFFFFFFFFFFFFFFELL) == 0;
        }
        sub_9B7090((__int64)&v262);
      }
      return (unsigned int)v10;
    case 'H':
      v161 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v162 = *(_BYTE *)(v161 + 16);
      if ( v162 == 13 )
      {
        if ( ((*(_WORD *)(v161 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_107;
        goto LABEL_106;
      }
      if ( v162 != 5 )
      {
LABEL_106:
        v223 = v14;
        *(_QWORD *)&v262 = *v14;
        *((_QWORD *)&v262 + 1) = v14 + 1;
        v163 = sub_F6CCB0((__int64 *)&v262, a7);
        sub_1E63CF0(a1, v163, v242.m128i_i64[0], (__int64 *)((char *)&dword_0 + 1), 3968, v164);
        v14 = v223;
      }
LABEL_107:
      v165 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v166 = *(_BYTE *)(v165 + 16);
      if ( v166 == 13 )
      {
        if ( ((*(_WORD *)(v165 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v166 != 5 )
      {
LABEL_109:
        v224 = v14;
        *(_QWORD *)&v262 = *v15;
        *((_QWORD *)&v262 + 1) = v15 + 1;
        v167 = sub_F6CCB0((__int64 *)&v262, a7);
        sub_1E63CF0(a1, v167, v17, (__int64 *)((char *)&dword_0 + 1), 3968, v168);
        v14 = v224;
      }
LABEL_110:
      sub_1E8B590(a1, v14, 0x100u, a7);
      sub_1E8B590(a1, v15, 0x100u, a7);
      LODWORD(v10) = sub_16C73B0(a1, v242.m128i_i64[0], v17);
      break;
    case 'I':
      v225 = (__int64)v14;
      v169 = sub_F613D0(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), a2, v16, a4, a5, (__int64)v14);
      v173 = (__int64 *)v225;
      if ( v169 )
      {
        v212 = sub_F613D0(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), a2, v170, v171, v172, v225);
        v173 = (__int64 *)v225;
        if ( v212 )
        {
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
          {
            *(_QWORD *)&v262 = *v15;
            *((_QWORD *)&v262 + 1) = v15 + 1;
            v213 = sub_F6CCB0((__int64 *)&v262, a7);
            sub_1E63CF0(a1, v213, v17, (__int64 *)((char *)&dword_0 + 1), 3968, v214);
            v173 = (__int64 *)v225;
          }
        }
      }
      v226 = v173;
      sub_1E8B590(a1, v173, 0x101u, a7);
      sub_1E8B590(a1, v15, 0x101u, a7);
      LODWORD(v10) = sub_16CAA10(a1, v226, v15, v174, v175, (__int64)v226, a7);
      return (unsigned int)v10;
    case 'J':
    case 'K':
    case 'L':
    case 'Q':
      v111 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v112 = *(_BYTE *)(v111 + 16);
      if ( v112 == 13 )
      {
        if ( ((*(_WORD *)(v111 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_90;
      }
      else if ( v112 == 5 )
      {
        goto LABEL_90;
      }
      v221 = v14;
      *(_QWORD *)&v262 = *v14;
      *((_QWORD *)&v262 + 1) = v14 + 1;
      v113 = sub_F6CCB0((__int64 *)&v262, a7);
      v115 = sub_1E63CF0(a1, v113, v242.m128i_i64[0], (__int64 *)((char *)&dword_0 + 1), 3968, v114);
      v14 = v221;
      LODWORD(v10) = v115;
      if ( (_BYTE)v115 )
        return (unsigned int)v10;
LABEL_90:
      v116 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v117 = *(_BYTE *)(v116 + 16);
      if ( v117 == 13 )
      {
        if ( ((*(_WORD *)(v116 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_93;
      }
      else if ( v117 == 5 )
      {
        goto LABEL_93;
      }
      v222 = v14;
      *(_QWORD *)&v262 = *v15;
      *((_QWORD *)&v262 + 1) = v15 + 1;
      v118 = sub_F6CCB0((__int64 *)&v262, a7);
      v120 = sub_1E63CF0(a1, v118, v17, (__int64 *)((char *)&dword_0 + 1), 3968, v119);
      v14 = v222;
      LODWORD(v10) = v120;
      if ( (_BYTE)v120 )
        return (unsigned int)v10;
LABEL_93:
      sub_1E8B590(a1, v14, 0x16Bu, a7);
      sub_1E8B590(a1, v15, 0x16Bu, a7);
      LODWORD(v10) = sub_19F8730(*(__int64 **)(a1 + 680), v242.m128i_i64[0], v17);
      return (unsigned int)v10;
    case 'M':
      v176 = *(_QWORD *)(v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
      v272 &= 0xFFFFFFFE00000000LL;
      v274 &= 0xFFFFFFFE00000000LL;
      LODWORD(v263) = v241;
      v265 = v267;
      v278 = v280;
      v262 = 0;
      WORD2(v263) = 0;
      v279 = 0x800000000LL;
      v283 = v285;
      v286 = 0;
      v264 = 0;
      v266 = 0x400000000LL;
      v271 = 0;
      v273 = 0;
      v275 = 0;
      v276 = 0;
      v277 = 0;
      v281 = 0;
      v282 = 0;
      v284 = 0x400000000LL;
      v287 = v289;
      v288 = 0x400000000LL;
      *(_QWORD *)&v255 = *(_QWORD *)(v176 + 40);
      v177 = sub_F22BD0((__int64 *)&v255, 0);
      LOBYTE(v10) = (unsigned int)sub_1D71360(
                                    a1,
                                    v177,
                                    v17,
                                    (__int64)&v262,
                                    v178,
                                    v179,
                                    0.0,
                                    *(double *)a8.m128_u64,
                                    a9) == 0;
      if ( v287 != v289 )
        free(v287);
      if ( v283 != v285 )
        free(v283);
      if ( v278 != v280 )
        free(v278);
      v180 = v265;
      v181 = &v265[32 * (unsigned int)v266];
      if ( v265 != (_BYTE *)v181 )
      {
        do
        {
          v181 -= 4;
          v182 = v181[1];
          if ( v182 )
          {
            v183 = v181[2];
            if ( v183 )
            {
              if ( v182 < v183 || v182 > v183 + 14848 )
              {
                v184 = *(_QWORD **)(v182 + 528);
                v185 = &v184[8 * (unsigned __int64)*(unsigned int *)(v182 + 536)];
                if ( v184 != v185 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v185 -= 8;
                      v186 = (_QWORD *)v185[3];
                      if ( v186 == v185 + 5 )
                        break;
                      operator delete(v186);
                      if ( v184 == v185 )
                        goto LABEL_126;
                    }
                  }
                  while ( v184 != v185 );
LABEL_126:
                  v185 = *(_QWORD **)(v182 + 528);
                }
                if ( v185 != (_QWORD *)(v182 + 544) )
                  free(v185);
                v187 = *(void **)(v182 + 416);
                if ( v187 != (void *)(v182 + 432) )
                  free(v187);
                v188 = (void **)(v182 + 384);
                v189 = (void **)(v182 + 64);
                do
                {
                  while ( *v188 != v188 + 2 )
                  {
                    operator delete(*v188);
                    v188 -= 4;
                    if ( v188 == v189 )
                      goto LABEL_134;
                  }
                  v188 -= 4;
                }
                while ( v188 != v189 );
LABEL_134:
                operator delete((void *)v182, 0x3A0u);
              }
              else
              {
                v209 = *(unsigned int *)(v183 + 14976);
                *(_DWORD *)(v183 + 14976) = v209 + 1;
                *(_QWORD *)(v183 + 8 * v209 + 14848) = v182;
              }
            }
          }
        }
        while ( v180 != v181 );
        v181 = v265;
      }
      if ( v181 != (_QWORD *)v267 )
        free(v181);
      return (unsigned int)v10;
    case 'N':
      LOBYTE(v10) = (*(_QWORD *)&byte_8[v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[v242.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL] | v242.m128i_i8[0])
                   & 7) == (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                          | ((unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v17) & 7);
      return (unsigned int)v10;
  }
  return (unsigned int)v10;
}
