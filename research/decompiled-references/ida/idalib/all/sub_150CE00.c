__int64 __fastcall sub_150CE00(
        const __m128i *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  unsigned __int64 v8; // r14
  __int8 v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int8 v16; // al
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int8 v20; // al
  unsigned __int8 v21; // r12
  bool v22; // bl
  bool v23; // r12
  bool v24; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int8 v27; // bp
  __int16 v28; // ax
  signed __int64 v29; // rdx
  _BYTE *v30; // rsi
  void *v31; // rdi
  __int64 *v32; // rdi
  __int8 v33; // al
  __int16 v34; // ax
  __int64 v36; // rax
  __int16 v37; // dx
  __int64 v38; // rcx
  __int8 v39; // si
  __int64 v40; // rbp
  int v41; // eax
  _BYTE *v42; // rdi
  __int64 *v43; // rdi
  __int64 v44; // rdx
  __int16 v45; // ax
  int *v46; // rbp
  unsigned __int64 v47; // rax
  __int64 *v48; // rdi
  unsigned __int64 v49; // rax
  unsigned __int8 v50; // bp
  __int32 v51; // eax
  __int64 v52; // rax
  __int64 *v53; // rdi
  bool v54; // al
  __int64 v55; // r9
  __int16 v56; // ax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _BYTE *v62; // rdi
  __int64 *v63; // rdi
  unsigned __int32 v64; // ebx
  unsigned __int64 v65; // rax
  __int64 v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rbp
  int v71; // eax
  _BYTE *v72; // rdi
  __int64 *v73; // rdi
  __int16 v74; // ax
  unsigned __int8 v75; // bp
  int *v76; // r12
  __int64 v77; // r14
  unsigned int v78; // r14d
  __int64 *v79; // rdi
  size_t v80; // rax
  unsigned int v81; // ebp
  __int64 *v82; // rdi
  __int64 v83; // rsi
  __int64 *v84; // rdi
  __int64 *v85; // rdi
  __int64 v86; // rcx
  __int64 *v87; // rdi
  int *v88; // rbp
  __int64 v89; // r14
  int v90; // r14d
  __int64 *v91; // rdi
  __int16 v92; // ax
  __int64 *v93; // rdi
  unsigned __int8 v94; // al
  int v95; // eax
  __int64 *v96; // rdi
  __int64 *v97; // rdi
  __int8 v98; // al
  __int8 v99; // al
  bool v100; // zf
  __int64 v101; // rax
  __int64 v102; // rbp
  int v103; // eax
  _BYTE *v104; // rdi
  __int64 *v105; // rdi
  size_t v106; // rax
  __int64 *v107; // rdi
  __int8 v108; // al
  __int32 v109; // eax
  unsigned __int32 v110; // r14d
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned __int8 v115; // al
  _BYTE *v116; // rax
  signed __int64 v117; // rdx
  __int64 *v118; // rdi
  _BYTE *v119; // rax
  signed __int64 v120; // rdx
  __int64 *v121; // rdi
  unsigned __int32 v122; // ebx
  __int64 v123; // rdi
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // r12
  int v128; // eax
  _BYTE *v129; // rdi
  __int64 *v130; // rdi
  __int64 *v131; // rdi
  int v132; // eax
  _BYTE *v133; // rdi
  __int64 *v134; // rdi
  __int64 *v135; // rdi
  __int8 v136; // al
  unsigned __int8 **v137; // rbp
  __int64 v138; // rax
  __int32 v139; // ebx
  __int64 v140; // rbx
  int v141; // ebx
  int v142; // r12d
  int *v143; // rbx
  __int64 *v144; // rdi
  char *v145; // rax
  _BYTE *v146; // rax
  signed __int64 v147; // rdx
  __int8 v148; // al
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 *v153; // rdi
  __int64 v154; // r12
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rax
  __int64 *v157; // rdi
  __int8 v158; // al
  char *v159; // rax
  _BYTE *v160; // rax
  signed __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rdx
  unsigned __int64 v164; // rax
  unsigned __int8 *v165; // r12
  _QWORD *v166; // rdx
  __int64 v167; // rax
  char *v168; // rsi
  __int64 *v169; // rdi
  __int64 v170; // rax
  size_t v171; // rax
  __int32 v172; // eax
  __int64 *v173; // rdi
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rax
  int v179; // eax
  __int64 *v180; // rdi
  __int64 v181; // rax
  __int64 v182; // rax
  unsigned __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rax
  unsigned __int64 v186; // rcx
  _BYTE *v187; // rax
  signed __int64 v188; // rdx
  __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rax
  unsigned __int8 *v195; // r13
  int *v196; // r12
  __int64 v197; // rbx
  __int64 v198; // rbp
  void *v199; // rdi
  __int8 v200; // al
  _BYTE *v201; // rax
  signed __int64 v202; // rdx
  __int8 v203; // [rsp+8h] [rbp-230h]
  __int8 v204; // [rsp+8h] [rbp-230h]
  bool v205; // [rsp+8h] [rbp-230h]
  unsigned int v206; // [rsp+8h] [rbp-230h]
  __int8 v207; // [rsp+8h] [rbp-230h]
  __int8 v208; // [rsp+8h] [rbp-230h]
  __int64 v209; // [rsp+8h] [rbp-230h]
  int *v210; // [rsp+8h] [rbp-230h]
  unsigned int v211; // [rsp+10h] [rbp-228h]
  __int64 v212; // [rsp+10h] [rbp-228h]
  int v213; // [rsp+10h] [rbp-228h]
  int *m128i_i32; // [rsp+18h] [rbp-220h]
  bool v215; // [rsp+18h] [rbp-220h]
  char v216; // [rsp+18h] [rbp-220h]
  unsigned int v218; // [rsp+28h] [rbp-210h]
  unsigned __int64 v219; // [rsp+28h] [rbp-210h]
  bool v220; // [rsp+28h] [rbp-210h]
  char v221; // [rsp+28h] [rbp-210h]
  bool v222; // [rsp+30h] [rbp-208h]
  __int32 v223; // [rsp+30h] [rbp-208h]
  __int64 v224; // [rsp+30h] [rbp-208h]
  unsigned __int8 v225; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v226; // [rsp+4Fh] [rbp-1E9h]
  __int8 v227; // [rsp+4Fh] [rbp-1E9h]
  __m128i *v228; // [rsp+50h] [rbp-1E8h]
  bool v229; // [rsp+58h] [rbp-1E0h]
  unsigned __int8 **v230; // [rsp+58h] [rbp-1E0h]
  __int64 v231; // [rsp+60h] [rbp-1D8h]
  bool v232; // [rsp+68h] [rbp-1D0h]
  __m128i v233; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v234; // [rsp+80h] [rbp-1B8h]
  int v235; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v236; // [rsp+98h] [rbp-1A0h]
  __int64 v237; // [rsp+A8h] [rbp-190h]
  void *v238[2]; // [rsp+B0h] [rbp-188h] BYREF
  _QWORD v239[2]; // [rsp+C0h] [rbp-178h] BYREF
  __m128i *v240; // [rsp+D0h] [rbp-168h] BYREF
  __int8 v241; // [rsp+D8h] [rbp-160h]
  const __m128i *v242; // [rsp+E0h] [rbp-158h]
  int v243; // [rsp+E8h] [rbp-150h]
  __int16 v244; // [rsp+ECh] [rbp-14Ch]
  __int64 (__fastcall *v245)(__int64); // [rsp+F0h] [rbp-148h]
  __int64 v246; // [rsp+F8h] [rbp-140h]
  __int64 v247; // [rsp+100h] [rbp-138h]
  __m128i *v248; // [rsp+110h] [rbp-128h] BYREF
  __int8 v249; // [rsp+118h] [rbp-120h]
  const __m128i *v250; // [rsp+120h] [rbp-118h]
  int v251; // [rsp+128h] [rbp-110h]
  __int16 v252; // [rsp+12Ch] [rbp-10Ch]
  __int64 (__fastcall *v253)(__int64); // [rsp+130h] [rbp-108h]
  __int64 v254; // [rsp+138h] [rbp-100h]
  __int64 v255; // [rsp+140h] [rbp-F8h]
  void *v256; // [rsp+150h] [rbp-E8h] BYREF
  __int64 v257; // [rsp+158h] [rbp-E0h]
  const __m128i *v258; // [rsp+160h] [rbp-D8h] BYREF
  int v259; // [rsp+168h] [rbp-D0h]
  __int16 v260; // [rsp+16Ch] [rbp-CCh]
  __int64 (__fastcall *v261)(__int64); // [rsp+170h] [rbp-C8h]
  __int64 v262; // [rsp+178h] [rbp-C0h]
  __int64 v263; // [rsp+180h] [rbp-B8h]
  void *v264; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v265; // [rsp+1A8h] [rbp-90h]
  _BYTE v266[136]; // [rsp+1B0h] [rbp-88h] BYREF

  v8 = a3;
  v11 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v242 = a1;
  v244 = 449;
  v235 = 0;
  v236 = 0;
  v237 = 0;
  v228 = (__m128i *)&a1[122];
  v240 = (__m128i *)&a1[122];
  v241 = v11;
  v243 = 1507350;
  v245 = sub_146A990;
  v246 = 0;
  v247 = 0;
  v12 = sub_20EB760(a3, 0);
  v13 = 1625;
  v225 = sub_156A040(&v240, 1625, v12, 0);
  if ( !v225 )
  {
    v16 = a1[122].m128i_i8[0];
    v17 = 449;
    v18 = (unsigned int)(v8 - 45);
    v248 = (__m128i *)&a1[122];
    a1[122].m128i_i8[0] = 1;
    v249 = v16;
    v250 = a1;
    v251 = 1507350;
    v252 = 449;
    v253 = sub_146A990;
    v254 = 0;
    v255 = 0;
    if ( (unsigned int)v18 <= 0x35 )
    {
      v222 = ((0x20010000000001uLL >> ((unsigned __int8)v8 - 45)) & 1) == 0;
      if ( ((0x20010000000001uLL >> ((unsigned __int8)v8 - 45)) & 1) != 0 )
      {
        *(_DWORD *)(a5 + 96) = 3;
        v19 = a1->m128i_i64[1];
        if ( (_DWORD)v8 != 85 )
          goto LABEL_5;
        v55 = *(_QWORD *)(v19 + 56);
        if ( *(_DWORD *)(v55 + 64) <= 0x31u )
          goto LABEL_5;
        v56 = a1[2].m128i_i16[0];
        if ( v56 != 82 && v56 != 5 )
          goto LABEL_5;
        v57 = *(_QWORD *)(v19 + 2944);
        if ( *(unsigned int *)(v19 + 2912) <= v57 )
        {
          v58 = sub_14180A0(v19, 1u);
          v19 = a1->m128i_i64[1];
          v55 = *(_QWORD *)(v19 + 56);
        }
        else
        {
          v58 = *(_QWORD *)(v19 + 2904) + 24 * v57;
        }
        if ( *(_WORD *)(v58 + 16) == 66 )
        {
          v209 = v55;
          sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v19 + 88), v55, nullptr);
          v132 = sub_FFC7C0(85, (__int64)v264, v265, v209);
          v133 = v264;
          *(_DWORD *)(a5 + 96) = v132;
          if ( v133 != v266 )
            operator delete(v133);
          *(_DWORD *)(a5 + 252) = a1[1].m128i_i32[0];
          v134 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v134, a1[1].m128i_i32);
          v135 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v135, a1[1].m128i_i32);
          v19 = a1->m128i_i64[1];
          v55 = *(_QWORD *)(v19 + 56);
        }
        if ( *(_DWORD *)(v55 + 64) <= 0x3Bu || a1[2].m128i_i16[0] != 5 )
        {
LABEL_5:
          v20 = a1[127].m128i_i8[8];
          a1[127].m128i_i8[8] = 1;
          v203 = v20;
          if ( (*(_BYTE *)(*(_QWORD *)(v19 + 56) + 1LL) & 8) != 0 )
            sub_14D0170(a1, a5 + 24, 0, 0, 0, nullptr, a6, 0, nullptr, 0, 0, 0);
          if ( *(_DWORD *)(a5 + 24) && *(_DWORD *)(a5 + 28) || *(_QWORD *)(a5 + 32) )
          {
LABEL_9:
            v21 = sub_14D1670(a1, a5 + 24, 0, 0, 0, 0, a6, a7, 0, 0, nullptr, (__int64)&v235);
            if ( v21 )
            {
              WORD2(v264) = 449;
              LODWORD(v264) = 1507390;
              sub_15680D0(a1, &v264, 3, 2);
              if ( a1[2].m128i_i16[0] != 62 )
              {
LABEL_11:
                sub_1564840(&v264, a1, &a1[1], 2186);
                v13 = (unsigned __int64)"reduction identifier";
                sub_1503D30((unsigned __int8 **)&v264, (__int64)"reduction identifier");
                sub_AEA040((__int64)&v264);
                if ( v21 )
                {
LABEL_12:
                  a1[127].m128i_i8[8] = v203;
                  v226 = (_DWORD)v8 != 85 && (_DWORD)v8 != 98;
                  if ( v226 )
                  {
LABEL_13:
                    v229 = 0;
                    v22 = 1;
                    if ( (unsigned int)v8 > 0x37 )
                      goto LABEL_14;
                    v54 = 0;
LABEL_87:
                    v18 = (unsigned int)v8;
                    v225 = v54;
                    v22 = ((0x80200020400008uLL >> v8) & 1) == 0;
                    if ( ((0x80200020400008uLL >> v8) & 1) == 0 )
                      goto LABEL_14;
                    goto LABEL_90;
                  }
                  v229 = 0;
                  v54 = 0;
                  v222 = 0;
                  v226 = v21;
LABEL_90:
                  switch ( (_DWORD)v8 )
                  {
                    case 0x37:
                      v225 = v54;
                      v22 = *(_DWORD *)(a5 + 96) != 6;
                      break;
                    case 0x16:
                      v225 = v54;
                      v22 = *(_DWORD *)(a5 + 96) != 10;
                      break;
                    case 0x1D:
                      v225 = v54;
                      v22 = *(_DWORD *)(a5 + 96) != 4;
                      break;
                    case 3:
                      v225 = v54;
                      v22 = *(_DWORD *)(a5 + 96) != 3;
                      break;
                    default:
                      v22 = 0;
                      v225 = v54;
                      break;
                  }
LABEL_14:
                  v23 = (_DWORD)v8 == 53 || (_DWORD)v8 == 6;
                  m128i_i32 = a1[1].m128i_i32;
LABEL_15:
                  if ( v22 )
                    goto LABEL_17;
LABEL_16:
                  v25 = a1[2].m128i_u16[0];
                  v24 = (_WORD)v25 != 23;
                  LOBYTE(v18) = (_WORD)v25 != 62;
                  LOBYTE(v25) = (_WORD)v25 != 449;
                  if ( ((unsigned __int8)v25 & (unsigned __int8)v18 & v24) != 0 )
                  {
                    while ( 1 )
                    {
LABEL_17:
                      sub_146B5E0((__int64 *)&v256, (__int64)a1, 0x8000u, 1, 0);
                      v26 = a1->m128i_i64[1];
                      v13 = (unsigned int)v8;
                      v27 = a1[127].m128i_i8[8];
                      a1[127].m128i_i8[8] = v23;
                      if ( (unsigned __int8)sub_15062D0((__int64)a1, v8, a5, *(_QWORD *)(v26 + 56)) )
                        goto LABEL_18;
                      v47 = sub_14BDAD0((__int64)a1, 0, a6);
                      if ( v47 > 1 )
                        break;
                      v13 = (unsigned __int64)&v264;
                      LODWORD(v264) = 1507394;
                      WORD2(v264) = 449;
                      sub_15680D0(a1, &v264, 3, 2);
                      v28 = a1[2].m128i_i16[0];
                      v22 = v28 == 66;
                      if ( v28 != 66 )
                      {
LABEL_19:
                        if ( v28 != 23 && v28 != 449 && (v28 != 62 || !v23) )
                        {
                          v218 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 64LL);
                          sub_1564840(&v264, a1, m128i_i32, 1803);
                          if ( (_DWORD)v8 == 37 )
                            v30 = (_BYTE *)sub_20EAB70(36, v218);
                          else
                            v30 = (_BYTE *)sub_20EB760((unsigned int)v8, 0);
                          sub_AEC220((unsigned __int8 **)&v264, v30, v29);
                          v13 = (_DWORD)v8 == 37;
                          sub_1503AF0((unsigned __int8 **)&v264, v13);
                          sub_AEA040((__int64)&v264);
                        }
                        goto LABEL_26;
                      }
LABEL_59:
                      v48 = (__int64 *)a1->m128i_i64[1];
                      v13 = (unsigned __int64)&a1[1];
                      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                      sub_14634E0(v48, m128i_i32);
LABEL_26:
                      v31 = v256;
                      a1[127].m128i_i8[8] = v27;
                      if ( !v31 )
                        goto LABEL_15;
                      sub_1564F70(v31);
                      if ( !v22 )
                        goto LABEL_16;
                    }
                    v49 = v47 & 0xFFFFFFFFFFFFFFFELL;
                    v18 = *(unsigned int *)(a4 + 8);
                    v13 = *(unsigned int *)(a4 + 12);
                    if ( v18 + 1 > v13 )
                    {
                      v13 = a4 + 16;
                      v219 = v49;
                      sub_2237220(a4, a4 + 16, v18 + 1, 8);
                      v18 = *(unsigned int *)(a4 + 8);
                      v49 = v219;
                    }
                    *(_QWORD *)(*(_QWORD *)a4 + 8 * v18) = v49;
                    ++*(_DWORD *)(a4 + 8);
LABEL_18:
                    v28 = a1[2].m128i_i16[0];
                    v22 = v28 == 66;
                    if ( v28 != 66 )
                      goto LABEL_19;
                    goto LABEL_59;
                  }
                  v50 = 0;
                  if ( v225 )
                    sub_14808E0((__int64)&v248, (__int64 *)v13, v25, v18, v15, v17);
                  v51 = a1[1].m128i_i32[0];
                  if ( !v23 )
                  {
                    v50 = 0;
                    goto LABEL_69;
                  }
                  if ( a1[2].m128i_i16[0] != 62 )
                  {
                    v23 = 0;
LABEL_69:
                    *(_DWORD *)(a5 + 20) = v51;
                    if ( !(unsigned __int8)sub_14808E0((__int64)&v240, (__int64 *)v13, v25, v18, v15, v17) )
                      *(_DWORD *)(a5 + 20) = HIDWORD(v247);
                    if ( v222 )
                      sub_1564F70(a1);
                    if ( (unsigned int)v8 <= 0x37 && (v52 = 0x80000020400000LL, _bittest64(&v52, v8))
                      || (v225 = 1, *(_DWORD *)(a4 + 8)) )
                    {
                      if ( !v23 || (v225 = v50 & (*(_QWORD *)a5 == 0)) == 0 )
                        v225 = v226 | v229;
                    }
                    goto LABEL_35;
                  }
                  *(_DWORD *)(a5 + 16) = v51;
                  v63 = (__int64 *)a1->m128i_i64[1];
                  a1[2].m128i_i32[2] = v51;
                  sub_14634E0(v63, a1[1].m128i_i32);
                  v64 = a1[2].m128i_u32[2];
                  v205 = (_DWORD)v8 == 53 && *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x33u;
                  if ( !v205 )
                  {
                    v13 = sub_14BDAD0((__int64)a1, 0, a6) & 0xFFFFFFFFFFFFFFFELL;
                    v65 = sub_19B4A30(a1[6].m128i_i64[0], v13, v64, 0, 0, 0);
                    v50 = 0;
                    if ( v65 > 1 )
                    {
                      *(_QWORD *)a5 = v65 & 0xFFFFFFFFFFFFFFFELL;
                    }
                    else
                    {
                      WORD2(v264) = 449;
                      v13 = (unsigned __int64)&v264;
                      LODWORD(v264) = 1507394;
                      sub_15680D0(a1, &v264, 3, 2);
                    }
                    goto LABEL_119;
                  }
                  v74 = a1[2].m128i_i16[0];
                  if ( v74 != 23 )
                  {
                    v75 = 0;
                    v232 = (_DWORD)v8 == 53 || (_DWORD)v8 == 6;
                    v76 = a1[1].m128i_i32;
                    v220 = 0;
                    v215 = 0;
                    v211 = v8;
                    do
                    {
                      if ( v74 == 5 )
                      {
                        v77 = *(_QWORD *)(a1->m128i_i64[1] + 56);
                        if ( sub_10CCDE0(5) )
                          sub_15041E0((__int64)&v264);
                        else
                          sub_13D35F0(
                            (__int64)&v264,
                            (__int64)v76,
                            *(_QWORD *)(a1->m128i_i64[1] + 88),
                            *(_QWORD *)(a1->m128i_i64[1] + 56),
                            nullptr);
                        v78 = sub_FFC7C0(53, (__int64)v264, v265, v77);
                        if ( v264 != v266 )
                          operator delete(v264);
                        if ( v78 == 3 )
                        {
                          if ( v75 )
                          {
                            sub_1564840(&v264, a1, v76, 1816);
                            sub_15038B0((unsigned __int8 **)&v264);
                            sub_AEA040((__int64)&v264);
                          }
                          v107 = (__int64 *)a1->m128i_i64[1];
                          v258 = a1;
                          v256 = v228;
                          v108 = a1[122].m128i_i8[0];
                          a1[122].m128i_i8[0] = 1;
                          LOBYTE(v257) = v108;
                          v261 = sub_146A990;
                          v109 = a1[1].m128i_i32[0];
                          v259 = 1507350;
                          a1[2].m128i_i32[2] = v109;
                          v260 = 449;
                          v262 = 0;
                          v263 = 0;
                          sub_14634E0(v107, v76);
                          v110 = a1[2].m128i_u32[2];
                          if ( (unsigned __int8)sub_149FA40((__int64)&v256) )
                          {
                            sub_1564820(&v264, a1, v110, 1625);
                            sub_1503D30((unsigned __int8 **)&v264, (__int64)"step");
                            sub_AEA040((__int64)&v264);
                          }
                          v13 = a5;
                          v75 = sub_1504B00(a1, (unsigned __int64 *)a5, a1[1].m128i_u32[0], a6);
                          if ( v75 )
                            *(_DWORD *)(a5 + 264) = v110;
                          sub_14808E0((__int64)&v256, (__int64 *)a5, v111, v112, v113, v114);
                          v25 = (unsigned __int8)v257;
                          *(_BYTE *)v256 = v257;
                        }
                        else if ( v78 > 2 )
                        {
                          v13 = a5;
                          v75 = sub_1504B00(a1, (unsigned __int64 *)a5, a1[1].m128i_u32[0], a6);
                          if ( !v75 )
                          {
                            v13 = (unsigned __int64)&v264;
                            WORD2(v264) = 449;
                            LODWORD(v264) = 1507394;
                            sub_15680D0(a1, &v264, 3, 2);
                            v220 = v205;
                          }
                        }
                        else
                        {
                          if ( v215 )
                          {
                            sub_1564840(&v264, a1, v76, 1816);
                            sub_1503AF0((unsigned __int8 **)&v264, 1);
                            sub_AEA040((__int64)&v264);
                          }
                          *(_DWORD *)(a5 + 96) = v78;
                          v13 = (unsigned __int64)&a1[1];
                          v79 = (__int64 *)a1->m128i_i64[1];
                          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                          sub_14634E0(v79, v76);
                          *(_DWORD *)(a5 + 252) = a1[2].m128i_i32[2];
                          v215 = v205;
                        }
                      }
                      else
                      {
                        v13 = a5;
                        v75 = sub_1504B00(a1, (unsigned __int64 *)a5, a1[1].m128i_u32[0], a6);
                      }
                      v74 = a1[2].m128i_i16[0];
                      if ( v74 == 66 )
                      {
                        v96 = (__int64 *)a1->m128i_i64[1];
                        v13 = (unsigned __int64)&a1[1];
                        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                        sub_14634E0(v96, v76);
                        v74 = a1[2].m128i_i16[0];
                      }
                    }
                    while ( v74 != 449 && v74 != 23 );
                    v115 = v75;
                    v23 = v232;
                    v50 = 0;
                    v8 = v211;
                    if ( v115 | v220 )
                    {
                      v50 = v115;
                      goto LABEL_119;
                    }
                    if ( v215 )
                    {
                      v50 = 0;
LABEL_119:
                      v51 = a1[1].m128i_i32[0];
                      goto LABEL_69;
                    }
                  }
                  v13 = (unsigned __int64)a1;
                  sub_1564820(&v264, a1, v64, 1614);
                  sub_AEA040((__int64)&v264);
                  goto LABEL_119;
                }
                goto LABEL_83;
              }
LABEL_82:
              v53 = (__int64 *)a1->m128i_i64[1];
              v13 = (unsigned __int64)&a1[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v53, a1[1].m128i_i32);
              *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
              if ( v21 )
                goto LABEL_12;
LABEL_83:
              v13 = a1[6].m128i_u64[0];
              sub_17B41B0(&v233, v13, &v235);
              a6 = _mm_loadu_si128(&v233);
              *(__m128i *)(a5 + 72) = a6;
              *(_QWORD *)(a5 + 88) = v234;
              a1[127].m128i_i8[8] = v203;
              v222 = (_DWORD)v8 != 98 && (_DWORD)v8 != 85;
              if ( !v222 )
              {
                v226 = 0;
                if ( (_DWORD)v8 == 85 )
                {
                  v225 = 0;
                  v22 = 1;
                  v229 = 0;
                  goto LABEL_14;
                }
                v54 = 0;
                v229 = 0;
                goto LABEL_90;
              }
              v226 = 0;
LABEL_165:
              v222 = 0;
              goto LABEL_13;
            }
          }
          else
          {
            switch ( a1[2].m128i_i16[0] )
            {
              case 0x1C:
                v81 = 11;
                break;
              case 0x1D:
                v81 = 35;
                break;
              case 0x1F:
                v81 = 7;
                break;
              case 0x21:
                v81 = 5;
                break;
              case 0x24:
                v81 = 6;
                break;
              case 0x38:
                v81 = 10;
                break;
              case 0x3A:
                v81 = 12;
                break;
              case 0x3B:
                v81 = 36;
                break;
              default:
                goto LABEL_9;
            }
            v82 = (__int64 *)a1->m128i_i64[1];
            v21 = 0;
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v82, a1[1].m128i_i32);
            v83 = a1[2].m128i_u32[2];
            LODWORD(v264) = v83;
            HIDWORD(v264) = v83;
            LODWORD(v265) = 0;
            sub_15AFAE0(&v235, v83, v81, &v264);
          }
          if ( a1[2].m128i_i16[0] != 62 )
            goto LABEL_11;
          goto LABEL_82;
        }
        sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v19 + 88), v55, nullptr);
        if ( sub_9B4AA0((__int64)&v264, "original") )
        {
          v62 = v264;
          goto LABEL_108;
        }
        v59 = a1->m128i_i64[1];
        v60 = *(_QWORD *)(v59 + 2944);
        if ( *(unsigned int *)(v59 + 2912) <= v60 )
          v61 = sub_14180A0(v59, 1u);
        else
          v61 = *(_QWORD *)(v59 + 2904) + 24 * v60;
        v62 = v264;
        if ( *(_WORD *)(v61 + 16) != 22 )
        {
LABEL_108:
          if ( v62 != v266 )
          {
            operator delete(v62);
            v19 = a1->m128i_i64[1];
            goto LABEL_5;
          }
          goto LABEL_161;
        }
        if ( v264 != v266 )
          operator delete(v264);
        v32 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v32, a1[1].m128i_i32);
        v258 = a1;
        v256 = v228;
        v33 = a1[122].m128i_i8[0];
        a1[122].m128i_i8[0] = 1;
        LOBYTE(v257) = v33;
        v259 = 1507350;
        v260 = 23;
        v261 = sub_146A990;
        v262 = 0;
        v263 = 0;
        sub_1503860((__int64)&v256);
        v34 = a1[2].m128i_i16[0];
        if ( v34 == 141 )
        {
          *(_DWORD *)(a5 + 100) = 1;
        }
        else
        {
          if ( v34 != 5 )
          {
LABEL_33:
            sub_1564820(&v264, a1, a1[1].m128i_u32[0], 14);
            sub_1503D30((unsigned __int8 **)&v264, (__int64)"'private or shared or default'");
            sub_AEA040((__int64)&v264);
            LOWORD(v264) = 23;
            sub_15680D0(a1, &v264, 1, 0);
LABEL_34:
            v225 = 0;
            *(_BYTE *)v256 = v257;
LABEL_35:
            v248->m128i_i8[0] = v249;
            goto LABEL_36;
          }
          sub_13D35F0(
            (__int64)v238,
            (__int64)a1[1].m128i_i64,
            *(_QWORD *)(a1->m128i_i64[1] + 88),
            *(_QWORD *)(a1->m128i_i64[1] + 56),
            nullptr);
          if ( sub_9B4AA0((__int64)v238, "shared") )
          {
            sub_13D35F0(
              (__int64)&v264,
              (__int64)a1[1].m128i_i64,
              *(_QWORD *)(a1->m128i_i64[1] + 88),
              *(_QWORD *)(a1->m128i_i64[1] + 56),
              nullptr);
            v213 = sub_9B4AA0((__int64)&v264, "default");
            if ( v264 != v266 )
              operator delete(v264);
            if ( v238[0] != v239 )
              operator delete(v238[0]);
            if ( v213 )
              goto LABEL_33;
          }
          else if ( v238[0] != v239 )
          {
            operator delete(v238[0]);
          }
          *(_DWORD *)(a5 + 100) = 0;
        }
        v172 = a1[1].m128i_i32[0];
        *(_DWORD *)(a5 + 256) = v172;
        v173 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = v172;
        sub_14634E0(v173, a1[1].m128i_i32);
        sub_14808E0((__int64)&v256, a1[1].m128i_i64, v174, v175, v176, v177);
        if ( a1[2].m128i_i16[0] == 66 )
        {
          v84 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v84, a1[1].m128i_i32);
          *(_BYTE *)v256 = v257;
LABEL_161:
          v19 = a1->m128i_i64[1];
          goto LABEL_5;
        }
        sub_1564820(&v264, a1, a1[1].m128i_u32[0], 14);
        sub_1503D30((unsigned __int8 **)&v264, (__int64)"',' (comma)");
        sub_AEA040((__int64)&v264);
        goto LABEL_34;
      }
      switch ( (_DWORD)v8 )
      {
        case '5':
          *(_DWORD *)(a5 + 96) = 0;
          if ( a1[2].m128i_i16[0] == 5 )
          {
            v66 = a1->m128i_i64[1];
            v67 = *(_QWORD *)(v66 + 2944);
            if ( v67 >= *(unsigned int *)(v66 + 2912) )
            {
              v13 = 1;
              v68 = sub_14180A0(v66, 1u);
            }
            else
            {
              v68 = *(_QWORD *)(v66 + 2904) + 24 * v67;
            }
            if ( *(_WORD *)(v68 + 16) == 22 )
            {
              v69 = a1->m128i_i64[1];
              v70 = *(_QWORD *)(v69 + 56);
              sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v69 + 88), v70, nullptr);
              v71 = sub_FFC7C0(53, (__int64)v264, v265, v70);
              v72 = v264;
              *(_DWORD *)(a5 + 96) = v71;
              if ( v72 != v266 )
                operator delete(v72);
              v73 = (__int64 *)a1->m128i_i64[1];
              v13 = (unsigned __int64)&a1[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v73, a1[1].m128i_i32);
              *(_DWORD *)(a5 + 252) = a1[2].m128i_i32[2];
              sub_149FA40((__int64)&v248);
              if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x33u )
              {
                sub_1564820(&v264, a1, *(unsigned int *)(a5 + 252), 1793);
                sub_1503D30((unsigned __int8 **)&v264, (__int64)"linear-modifier(list)");
                v187 = (_BYTE *)sub_20EB760(53, 0);
                sub_AEC220((unsigned __int8 **)&v264, v187, v188);
                v13 = (unsigned __int64)"linear(list: [linear-modifier,] step(step-size))";
                sub_1503D30((unsigned __int8 **)&v264, (__int64)"linear(list: [linear-modifier,] step(step-size))");
                sub_AEA040((__int64)&v264);
              }
              v54 = ((0x20010000000001uLL >> ((unsigned __int8)v8 - 45)) & 1) == 0;
              v229 = 0;
              v222 = 0;
              v226 = 0;
              goto LABEL_87;
            }
          }
          goto LABEL_114;
        case '4':
          *(_DWORD *)(a5 + 96) = 1;
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x31u && !sub_FFED80(a2, 1625, v14, v18) )
          {
            v226 = sub_FFE5D0(a2);
            if ( !v226 && a1[2].m128i_i16[0] == 5 )
            {
              v123 = a1->m128i_i64[1];
              v124 = *(_QWORD *)(v123 + 2944);
              if ( v124 >= *(unsigned int *)(v123 + 2912) )
              {
                v13 = 1;
                v125 = sub_14180A0(v123, 1u);
              }
              else
              {
                v125 = *(_QWORD *)(v123 + 2904) + 24 * v124;
              }
              if ( *(_WORD *)(v125 + 16) == 62 )
              {
                v126 = a1->m128i_i64[1];
                v127 = *(_QWORD *)(v126 + 56);
                sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v126 + 88), v127, nullptr);
                v128 = sub_FFC7C0(52, (__int64)v264, v265, v127);
                v129 = v264;
                *(_DWORD *)(a5 + 96) = v128;
                if ( v129 != v266 )
                  operator delete(v129);
                *(_DWORD *)(a5 + 252) = a1[1].m128i_i32[0];
                v130 = (__int64 *)a1->m128i_i64[1];
                a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                sub_14634E0(v130, a1[1].m128i_i32);
                v131 = (__int64 *)a1->m128i_i64[1];
                v13 = (unsigned __int64)&a1[1];
                a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                sub_14634E0(v131, a1[1].m128i_i32);
                v229 = 0;
                v222 = 0;
                *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
                v54 = 0;
                goto LABEL_87;
              }
            }
          }
          goto LABEL_114;
        case '7':
          if ( a1[2].m128i_i16[0] != 5 )
            goto LABEL_209;
          sub_13D35F0(
            (__int64)&v264,
            (__int64)a1[1].m128i_i64,
            *(_QWORD *)(a1->m128i_i64[1] + 88),
            *(_QWORD *)(a1->m128i_i64[1] + 56),
            nullptr);
          if ( !sub_9B4AA0((__int64)&v264, "iterator") )
          {
            if ( v264 != v266 )
              operator delete(v264);
            sub_1564E40(a1, 32776);
            v170 = *(unsigned int *)(a5 + 112);
            if ( v170 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 116) )
            {
              sub_2237220(a5 + 104, a5 + 120, v170 + 1, 4);
              v170 = *(unsigned int *)(a5 + 112);
            }
            *(_DWORD *)(*(_QWORD *)(a5 + 104) + 4 * v170) = 10;
            ++*(_DWORD *)(a5 + 112);
            sub_14C6D60(a5 + 152, a1[1].m128i_i32[0]);
            *(_QWORD *)(a5 + 8) = sub_150C700((__int64)a1, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
            v171 = j__strlen(&byte_22F0C30);
            sub_1569A00(a1, 66, 14, &byte_22F0C30, v171);
            v229 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) <= 0x33u )
            {
              sub_1564840(&v264, a1, &a1[1], 1827);
              sub_1503AF0((unsigned __int8 **)&v264, *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x32u);
              sub_AE9DF0((unsigned __int8 **)&v264, *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 68LL) & 1, 3u);
              sub_15038B0((unsigned __int8 **)&v264);
              sub_AEA040((__int64)&v264);
              v229 = ((0x20010000000001uLL >> ((unsigned __int8)v8 - 45)) & 1) == 0;
            }
            goto LABEL_210;
          }
          if ( v264 == v266 )
          {
LABEL_209:
            v229 = 0;
            v222 = 0;
          }
          else
          {
            operator delete(v264);
            v229 = 0;
            v222 = 0;
          }
LABEL_210:
          v98 = a1[127].m128i_i8[8];
          a1[127].m128i_i8[8] = 1;
          v207 = v98;
          *(_DWORD *)(a5 + 96) = 6;
          *(_DWORD *)(a5 + 252) = a1[1].m128i_i32[0];
          sub_15051E0((__int64)&v264, a1, 0);
          v13 = (unsigned __int64)&v256;
          LODWORD(v256) = 1507390;
          WORD2(v256) = 449;
          if ( (unsigned __int8)sub_15680D0(a1, &v256, 3, 2) && a1[2].m128i_i16[0] == 62 )
          {
            sub_147B460((__int64)&v264);
            if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x3Bu && a1[2].m128i_i16[0] == 62 )
            {
              sub_1564840(&v256, a1, &a1[1], 1809);
              sub_AEA040((__int64)&v256);
            }
            v226 = sub_150BBB0(a1, a5);
            if ( v226 | (*(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x3Bu) )
            {
              v13 = (unsigned __int64)&v256;
              LODWORD(v256) = 29425726;
              sub_15680D0(a1, &v256, 2, 2);
            }
            else
            {
              v178 = a1[2].m128i_i64[0];
              *(__m128i *)v238 = _mm_loadu_si128(a1 + 1);
              v239[0] = v178;
              if ( (_WORD)v178 == 62 )
              {
                v13 = (unsigned __int64)a1;
                sub_1564840(&v256, a1, v238, 1810);
                sub_AEA040((__int64)&v256);
                v226 = 0;
              }
              else
              {
                v179 = sub_15037C0(a1);
                *(_DWORD *)(a5 + 96) = v179;
                if ( v179 == 6 )
                {
                  sub_1564840(&v256, a1, v238, 1826);
                  sub_AEA040((__int64)&v256);
                }
                v180 = (__int64 *)a1->m128i_i64[1];
                v13 = (unsigned __int64)&a1[1];
                a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
                sub_14634E0(v180, a1[1].m128i_i32);
                v226 = 0;
              }
            }
          }
          else
          {
            sub_147B460((__int64)&v264);
            v226 = 0;
          }
          if ( *(_DWORD *)(a5 + 96) == 6 )
          {
            *(_DWORD *)(a5 + 96) = 3;
            if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x33u )
            {
              if ( a2 == 72 )
              {
                *(_DWORD *)(a5 + 96) = 1;
              }
              else if ( a2 == 73 )
              {
                *(_DWORD *)(a5 + 96) = 2;
              }
            }
            *(_BYTE *)(a5 + 248) = 1;
          }
          if ( a1[2].m128i_i16[0] == 62 )
          {
            v169 = (__int64 *)a1->m128i_i64[1];
            v13 = (unsigned __int64)&a1[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v169, a1[1].m128i_i32);
            *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
          }
          a1[127].m128i_i8[8] = v207;
          v54 = 0;
          goto LABEL_87;
      }
LABEL_172:
      if ( (v8 & 0xFFFFFFBF) == 0x26 )
      {
        v206 = v8;
LABEL_174:
        if ( a1[2].m128i_i16[0] == 5 )
        {
          v87 = (__int64 *)a1->m128i_i64[1];
          v88 = a1[1].m128i_i32;
          while ( 1 )
          {
            v89 = v87[7];
            sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, v87[11], v89, nullptr);
            v13 = (unsigned __int64)v264;
            v90 = sub_FFC7C0(v206, (__int64)v264, v265, v89);
            if ( v264 != v266 )
              operator delete(v264);
            v18 = *(unsigned int *)(a5 + 208);
            if ( v90 == 2 )
            {
              v8 = v206;
              if ( !(_DWORD)v18 )
              {
                v226 = 0;
                goto LABEL_328;
              }
              if ( a1[2].m128i_i16[0] == 62 )
                goto LABEL_362;
              goto LABEL_320;
            }
            if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 212) )
            {
              sub_2237220(a5 + 200, a5 + 216, v18 + 1, 4);
              v18 = *(unsigned int *)(a5 + 208);
            }
            *(_DWORD *)(*(_QWORD *)(a5 + 200) + 4 * v18) = v90;
            ++*(_DWORD *)(a5 + 208);
            sub_14C6D60(a5 + 224, a1[1].m128i_i32[0]);
            v91 = (__int64 *)a1->m128i_i64[1];
            v13 = (unsigned __int64)&a1[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v91, a1[1].m128i_i32);
            if ( !v90 )
            {
              v13 = a5;
              v94 = sub_150B9F0(a1, a5, a6);
              if ( v94 )
              {
                v8 = v206;
                v226 = v94;
                if ( !*(_DWORD *)(a5 + 208) )
                  goto LABEL_328;
                if ( a1[2].m128i_i16[0] == 62 )
                  goto LABEL_189;
                goto LABEL_193;
              }
            }
            v87 = (__int64 *)a1->m128i_i64[1];
            if ( *(_DWORD *)(v87[7] + 64) <= 0x32u )
              break;
            v92 = a1[2].m128i_i16[0];
            if ( v92 == 66 )
            {
              v13 = (unsigned __int64)&a1[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v87, a1[1].m128i_i32);
              goto LABEL_174;
            }
            if ( v92 != 5 )
            {
              v8 = v206;
              if ( *(_DWORD *)(a5 + 208) )
                goto LABEL_361;
              v226 = 0;
              goto LABEL_187;
            }
          }
          v8 = v206;
          if ( !*(_DWORD *)(a5 + 208) )
            goto LABEL_114;
          if ( a1[2].m128i_i16[0] == 62 )
            goto LABEL_362;
        }
        else
        {
          v8 = v206;
          v226 = 0;
          if ( !*(_DWORD *)(a5 + 208) )
            goto LABEL_328;
          v88 = a1[1].m128i_i32;
LABEL_361:
          if ( a1[2].m128i_i16[0] == 62 )
          {
LABEL_362:
            v226 = 0;
            goto LABEL_189;
          }
LABEL_320:
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x32u )
          {
            sub_1564840(&v264, a1, v88, 2186);
            v168 = "motion modifier";
LABEL_322:
            sub_1503D30((unsigned __int8 **)&v264, (__int64)v168);
            sub_AEA040((__int64)&v264);
            v226 = 0;
LABEL_193:
            v13 = (unsigned __int64)&v264;
            LODWORD(v264) = 1507390;
            WORD2(v264) = 449;
            sub_15680D0(a1, &v264, 3, 2);
            if ( *(_DWORD *)(a5 + 208) )
            {
LABEL_194:
              v92 = a1[2].m128i_i16[0];
LABEL_187:
              if ( v92 != 62 )
                goto LABEL_165;
              v88 = a1[1].m128i_i32;
LABEL_189:
              v93 = (__int64 *)a1->m128i_i64[1];
              v13 = (unsigned __int64)v88;
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v93, v88);
              v222 = 0;
              *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
              goto LABEL_13;
            }
LABEL_328:
            v222 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) <= 0x32u )
              goto LABEL_13;
            goto LABEL_194;
          }
        }
        sub_1564840(&v264, a1, v88, 2186);
        v168 = ")";
        goto LABEL_322;
      }
      switch ( (_DWORD)v8 )
      {
        case 7:
          v136 = a1[127].m128i_i8[8];
          a1[127].m128i_i8[8] = 1;
          v137 = (unsigned __int8 **)&v256;
          v227 = v136;
          sub_15051E0((__int64)&v264, a1, 0);
          v138 = a1->m128i_i64[1];
          v139 = a1[1].m128i_i32[0];
          LODWORD(v238[0]) = 0;
          v223 = v139;
          v140 = *(_QWORD *)(v138 + 56);
          v210 = a1[1].m128i_i32;
          v231 = v138;
          sub_13D35F0((__int64)&v256, (__int64)a1[1].m128i_i64, *(_QWORD *)(v138 + 88), v140, nullptr);
          v141 = sub_FFC7C0(7, (__int64)v256, v257, v140);
          if ( v256 != &v258 )
            operator delete(v256);
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) <= 0x32u || v141 == 2 )
          {
            v212 = sub_14BDAD0((__int64)a1, 0, a6);
          }
          else
          {
            v221 = 0;
            v216 = 0;
            v212 = 0;
            v142 = v141;
            v143 = a1[1].m128i_i32;
            do
            {
              v144 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v144, v143);
              if ( a1[2].m128i_i16[0] == 22 )
              {
                if ( v142 )
                {
                  if ( v221 )
                  {
                    sub_1564840(v137, a1, v143, 1794);
                    v159 = sub_FFDD70(7, 1);
                    sub_1503D30(v137, (__int64)v159);
                    v160 = (_BYTE *)sub_20EB760(7, 0);
                    sub_AEC220(v137, v160, v161);
                    sub_AEA040((__int64)v137);
                  }
                  else
                  {
                    v181 = *(unsigned int *)(a5 + 280);
                    if ( v181 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 284) )
                    {
                      sub_2237220(a5 + 272, a5 + 288, v181 + 1, 4);
                      v181 = *(unsigned int *)(a5 + 280);
                    }
                    *(_DWORD *)(*(_QWORD *)(a5 + 272) + 4 * v181) = 1;
                    v182 = *(unsigned int *)(a5 + 304);
                    v183 = *(unsigned int *)(a5 + 308);
                    ++*(_DWORD *)(a5 + 280);
                    if ( v182 + 1 > v183 )
                    {
                      sub_2237220(a5 + 296, a5 + 312, v182 + 1, 4);
                      v182 = *(unsigned int *)(a5 + 304);
                    }
                    *(_DWORD *)(*(_QWORD *)(a5 + 296) + 4 * v182) = v223;
                    ++*(_DWORD *)(a5 + 304);
                  }
                  v162 = sub_20EB760(7, 0);
                  v164 = sub_1509090(a1, v162, a6, v163, v238, 0);
                  v221 = 1;
                  if ( v164 > 1 )
                    *(_QWORD *)(a5 + 320) = v164 & 0xFFFFFFFFFFFFFFFELL;
                }
                else
                {
                  if ( v216 )
                  {
                    sub_1564840(v137, a1, v143, 1794);
                    v145 = sub_FFDD70(7, 0);
                    sub_1503D30(v137, (__int64)v145);
                    v146 = (_BYTE *)sub_20EB760(7, 0);
                    sub_AEC220(v137, v146, v147);
                    sub_AEA040((__int64)v137);
                  }
                  else
                  {
                    v184 = *(unsigned int *)(a5 + 280);
                    if ( v184 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 284) )
                    {
                      sub_2237220(a5 + 272, a5 + 288, v184 + 1, 4);
                      v184 = *(unsigned int *)(a5 + 280);
                    }
                    *(_DWORD *)(*(_QWORD *)(a5 + 272) + 4 * v184) = 0;
                    v185 = *(unsigned int *)(a5 + 304);
                    v186 = *(unsigned int *)(a5 + 308);
                    ++*(_DWORD *)(a5 + 280);
                    if ( v185 + 1 > v186 )
                    {
                      sub_2237220(a5 + 296, a5 + 312, v185 + 1, 4);
                      v185 = *(unsigned int *)(a5 + 304);
                    }
                    *(_DWORD *)(*(_QWORD *)(a5 + 296) + 4 * v185) = v223;
                    ++*(_DWORD *)(a5 + 304);
                  }
                  v100 = a1[2].m128i_i16[0] == 22;
                  v258 = a1;
                  v259 = 1507350;
                  v256 = v228;
                  v148 = a1[122].m128i_i8[0];
                  v260 = 449;
                  LOBYTE(v257) = v148;
                  a1[122].m128i_i8[0] = 1;
                  v261 = sub_146A990;
                  v262 = 0;
                  v263 = 0;
                  if ( v100 )
                  {
                    if ( (unsigned int)a1[5].m128i_u16[4] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
                      sub_1568800(v137);
                    else
                      LODWORD(v263) = sub_146A990((__int64)a1);
                  }
                  v212 = sub_14BDAD0((__int64)a1, 0, a6);
                  sub_14808E0((__int64)v137, nullptr, v149, v150, v151, v152);
                  v216 = 1;
                  *(_BYTE *)v256 = v257;
                }
              }
              else
              {
                sub_1564840(v137, a1, v143, 14);
                v165 = (unsigned __int8 *)v256;
                if ( !v256 )
                {
                  v189 = v257;
                  v190 = *(_DWORD *)(v257 + 14976);
                  if ( v190 )
                  {
                    v191 = (unsigned int)(v190 - 1);
                    *(_DWORD *)(v257 + 14976) = v191;
                    v165 = *(unsigned __int8 **)(v189 + 8 * v191 + 14848);
                    v192 = *((unsigned int *)v165 + 134);
                    v193 = *((_QWORD *)v165 + 66);
                    *v165 = 0;
                    *((_DWORD *)v165 + 106) = 0;
                    v194 = v193 + (v192 << 6);
                    if ( v193 != v194 )
                    {
                      v224 = a5;
                      v195 = v165;
                      v196 = v143;
                      v197 = v194;
                      v230 = v137;
                      v198 = v193;
                      do
                      {
                        while ( 1 )
                        {
                          v197 -= 64;
                          v199 = *(void **)(v197 + 24);
                          if ( v199 == (void *)(v197 + 40) )
                            break;
                          operator delete(v199);
                          if ( v198 == v197 )
                            goto LABEL_396;
                        }
                      }
                      while ( v198 != v197 );
LABEL_396:
                      v143 = v196;
                      v137 = v230;
                      v165 = v195;
                      a5 = v224;
                    }
                    *((_DWORD *)v165 + 134) = 0;
                  }
                  else
                  {
                    v165 = (unsigned __int8 *)operator new(0x3A0u);
                    *v165 = 0;
                    *((_QWORD *)v165 + 12) = v165 + 112;
                    *((_QWORD *)v165 + 16) = v165 + 144;
                    *((_QWORD *)v165 + 20) = v165 + 176;
                    *((_QWORD *)v165 + 24) = v165 + 208;
                    *((_QWORD *)v165 + 28) = v165 + 240;
                    *((_QWORD *)v165 + 32) = v165 + 272;
                    *((_QWORD *)v165 + 36) = v165 + 304;
                    *((_QWORD *)v165 + 40) = v165 + 336;
                    *((_QWORD *)v165 + 44) = v165 + 368;
                    *((_QWORD *)v165 + 48) = v165 + 400;
                    *((_QWORD *)v165 + 52) = v165 + 432;
                    *((_QWORD *)v165 + 13) = 0;
                    v165[112] = 0;
                    *((_QWORD *)v165 + 17) = 0;
                    v165[144] = 0;
                    *((_QWORD *)v165 + 21) = 0;
                    v165[176] = 0;
                    *((_QWORD *)v165 + 25) = 0;
                    v165[208] = 0;
                    *((_QWORD *)v165 + 29) = 0;
                    v165[240] = 0;
                    *((_QWORD *)v165 + 33) = 0;
                    v165[272] = 0;
                    *((_QWORD *)v165 + 37) = 0;
                    v165[304] = 0;
                    *((_QWORD *)v165 + 41) = 0;
                    v165[336] = 0;
                    *((_QWORD *)v165 + 45) = 0;
                    v165[368] = 0;
                    *((_QWORD *)v165 + 49) = 0;
                    v165[400] = 0;
                    *((_QWORD *)v165 + 53) = 0x800000000LL;
                    *((_QWORD *)v165 + 66) = v165 + 544;
                    *((_QWORD *)v165 + 67) = 0x600000000LL;
                  }
                  v256 = v165;
                }
                v165[*v165 + 1] = 4;
                v166 = v256;
                v167 = *(unsigned __int8 *)v256;
                *(_BYTE *)v256 = v167 + 1;
                v166[v167 + 2] = 22;
                sub_AEA040((__int64)v137);
              }
              if ( a1[2].m128i_i16[0] != 66 )
                break;
              v153 = (__int64 *)a1->m128i_i64[1];
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v153, v143);
              v223 = a1[1].m128i_i32[0];
              v154 = *(_QWORD *)(a1->m128i_i64[1] + 56);
              sub_13D35F0((__int64)v137, (__int64)v143, *(_QWORD *)(v231 + 88), *(_QWORD *)(v231 + 56), nullptr);
              v142 = sub_FFC7C0(7, (__int64)v256, v257, v154);
              if ( v256 != v137 + 2 )
                operator delete(v256);
              if ( v142 == 2 )
              {
                sub_1564840(v137, a1, v210, 1802);
                v201 = (_BYTE *)sub_20EB760(7, 0);
                sub_AEC220(v137, v201, v202);
                sub_AEA040((__int64)v137);
                break;
              }
            }
            while ( !v216 || !v221 );
          }
          v222 = 0;
          break;
        case 4:
          if ( a1[2].m128i_i16[0] != 5 )
          {
LABEL_114:
            v222 = 0;
            v226 = 0;
            goto LABEL_13;
          }
          v210 = a1[1].m128i_i32;
          sub_13D35F0(
            (__int64)&v264,
            (__int64)a1[1].m128i_i64,
            *(_QWORD *)(a1->m128i_i64[1] + 88),
            *(_QWORD *)(a1->m128i_i64[1] + 56),
            nullptr);
          v13 = (unsigned __int64)"iterator";
          if ( sub_9B4AA0((__int64)&v264, "iterator") )
          {
            if ( v264 != v266 )
              operator delete(v264);
            goto LABEL_114;
          }
          if ( v264 != v266 )
            operator delete(v264);
          v200 = a1[127].m128i_i8[8];
          a1[127].m128i_i8[8] = 1;
          v227 = v200;
          sub_15051E0((__int64)&v264, a1, 0);
          sub_1564E40(a1, 32776);
          v222 = 1;
          v212 = sub_150C700((__int64)a1, a6, a7);
          break;
        case 3:
          v99 = a1[127].m128i_i8[8];
          v100 = a1[2].m128i_i16[0] == 5;
          a1[127].m128i_i8[8] = 1;
          v208 = v99;
          v101 = a1->m128i_i64[1];
          v102 = *(_QWORD *)(v101 + 56);
          if ( v100 )
            sub_13D35F0(
              (__int64)&v264,
              (__int64)a1[1].m128i_i64,
              *(_QWORD *)(v101 + 88),
              *(_QWORD *)(v101 + 56),
              nullptr);
          else
            sub_15041E0((__int64)&v264);
          v103 = sub_FFC7C0(3, (__int64)v264, v265, v102);
          v104 = v264;
          *(_DWORD *)(a5 + 96) = v103;
          if ( v104 != v266 )
          {
            operator delete(v104);
            v103 = *(_DWORD *)(a5 + 96);
          }
          *(_DWORD *)(a5 + 252) = a1[1].m128i_i32[0];
          if ( v103 == 3 )
          {
            sub_1564840(&v264, a1, &a1[1], 1824);
            sub_1503AF0((unsigned __int8 **)&v264, *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x3Bu);
            sub_AEA040((__int64)&v264);
            v13 = (unsigned __int64)&v264;
            LODWORD(v264) = 29425687;
            sub_15680D0(a1, &v264, 2, 2);
          }
          else
          {
            v105 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v105, a1[1].m128i_i32);
            if ( a1[2].m128i_i16[0] == 62 )
              *(_DWORD *)(a5 + 16) = a1[1].m128i_i32[0];
            v106 = j__strlen("adjust-op");
            v13 = 62;
            sub_1569A00(a1, 62, 2186, "adjust-op", v106);
          }
          v229 = 0;
          v222 = 0;
          a1[127].m128i_i8[8] = v208;
          v54 = 0;
          v226 = 0;
          goto LABEL_87;
        default:
          goto LABEL_114;
      }
      v13 = v212 & 0xFFFFFFFFFFFFFFFELL;
      v155 = sub_19B4A30(a1[6].m128i_i64[0], v212 & 0xFFFFFFFFFFFFFFFELL, (unsigned int)v247, 0, 0, 0);
      if ( v155 > 1 )
      {
        v156 = v155 & 0xFFFFFFFFFFFFFFFELL;
        if ( a1[2].m128i_i16[0] == 62 )
          goto LABEL_310;
      }
      else
      {
        if ( !*(_QWORD *)(a5 + 320) )
        {
          sub_147B460((__int64)&v264);
          v13 = (unsigned __int64)&v256;
          LODWORD(v256) = 1507394;
          WORD2(v256) = 449;
          sub_15680D0(a1, &v256, 3, 2);
          goto LABEL_311;
        }
        v156 = 0;
        if ( a1[2].m128i_i16[0] == 62 )
        {
LABEL_310:
          *(_QWORD *)a5 = v156;
          v157 = (__int64 *)a1->m128i_i64[1];
          v13 = (unsigned __int64)v210;
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v157, v210);
          *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
          sub_14C5EA0((__int64 *)&v264);
LABEL_311:
          v158 = v227;
          v226 = 0;
          a1[127].m128i_i8[8] = v158;
          goto LABEL_13;
        }
      }
      sub_147B460((__int64)&v264);
      if ( (_DWORD)v8 == 7 && *(_DWORD *)(a5 + 280) )
      {
        LODWORD(v256) = 29425687;
        sub_15680D0(a1, &v256, 2, 2);
        sub_1564840(&v256, a1, v210, 1735);
        v13 = (unsigned __int64)"allocate clause";
        sub_1503D30((unsigned __int8 **)&v256, (__int64)"allocate clause");
        sub_AEA040((__int64)&v256);
      }
      goto LABEL_311;
    }
    v222 = (_DWORD)v8 == 22 || (_DWORD)v8 == 29;
    if ( !v222 )
      goto LABEL_172;
    v36 = a1->m128i_i64[1];
    v37 = a1[2].m128i_i16[0];
    v38 = *(_QWORD *)(v36 + 56);
    if ( *(_DWORD *)(v38 + 64) <= 0x31u )
    {
      v222 = 0;
      goto LABEL_40;
    }
    if ( v37 != 5 )
      goto LABEL_95;
    sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v36 + 88), v38, nullptr);
    if ( sub_9B4AA0((__int64)&v264, "iterator") )
    {
      if ( v264 == v266 )
      {
        v36 = a1->m128i_i64[1];
        v37 = a1[2].m128i_i16[0];
LABEL_95:
        v222 = 0;
        goto LABEL_40;
      }
      operator delete(v264);
      v36 = a1->m128i_i64[1];
      v37 = a1[2].m128i_i16[0];
      v222 = 0;
    }
    else
    {
      if ( v264 != v266 )
        operator delete(v264);
      sub_1564E40(a1, 32776);
      *(_QWORD *)a5 = sub_150C700((__int64)a1, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
      v80 = j__strlen(&byte_22F0C30);
      sub_1569A00(a1, 66, 14, &byte_22F0C30, v80);
      v36 = a1->m128i_i64[1];
      v37 = a1[2].m128i_i16[0];
    }
LABEL_40:
    v39 = a1[127].m128i_i8[8];
    a1[127].m128i_i8[8] = 1;
    v40 = *(_QWORD *)(v36 + 56);
    v204 = v39;
    if ( v37 == 5 )
      sub_13D35F0((__int64)&v264, (__int64)a1[1].m128i_i64, *(_QWORD *)(v36 + 88), v40, nullptr);
    else
      sub_15041E0((__int64)&v264);
    v41 = sub_FFC7C0(v8, (__int64)v264, v265, v40);
    v42 = v264;
    *(_DWORD *)(a5 + 96) = v41;
    if ( v42 != v266 )
    {
      operator delete(v42);
      v41 = *(_DWORD *)(a5 + 96);
    }
    *(_DWORD *)(a5 + 252) = a1[1].m128i_i32[0];
    if ( (_DWORD)v8 == 22 )
    {
      if ( v41 != 10 )
      {
        v46 = a1[1].m128i_i32;
        v85 = (__int64 *)a1->m128i_i64[1];
        v13 = (unsigned __int64)&a1[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v85, a1[1].m128i_i32);
        if ( a2 == 47 )
        {
          if ( *(_DWORD *)(a5 + 96) == 5 )
            goto LABEL_200;
          v86 = 2187;
          if ( a1[2].m128i_i16[0] == 62 )
            goto LABEL_205;
        }
        else
        {
          if ( a1[2].m128i_i16[0] == 62 )
            goto LABEL_205;
          v86 = 2186;
        }
        sub_1564840(&v264, a1, &a1[1], v86);
        v13 = (unsigned __int64)"dependency type";
LABEL_52:
        sub_1503D30((unsigned __int8 **)&v264, v13);
        sub_AEA040((__int64)&v264);
LABEL_53:
        if ( (_DWORD)v8 != 29 )
        {
LABEL_54:
          v226 = 0;
          a1[127].m128i_i8[8] = v204;
          goto LABEL_13;
        }
        v95 = *(_DWORD *)(a5 + 96);
        if ( a1[2].m128i_i16[0] != 5 )
        {
LABEL_197:
          if ( v95 != 2 )
            goto LABEL_198;
          v46 = a1[1].m128i_i32;
          if ( a1[2].m128i_i16[0] == 36 )
          {
            v121 = (__int64 *)a1->m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v121, a1[1].m128i_i32);
            v100 = a1[2].m128i_i16[0] == 7;
            v122 = a1[1].m128i_u32[0];
            v256 = nullptr;
            if ( v100 )
            {
              v13 = (unsigned __int64)&a1[1];
              if ( !(unsigned __int8)sub_1463E50(a1->m128i_i64[1], a1[1].m128i_i32, (__int64 *)&v256)
                || v256 == (char *)&dword_0 + 1 )
              {
                v95 = *(_DWORD *)(a5 + 96);
LABEL_198:
                if ( v95 != 3 )
                {
                  if ( (v95 & 0xFFFFFFFD) != 0 )
                    goto LABEL_54;
                  goto LABEL_200;
                }
                if ( a1[2].m128i_i16[0] != 23 )
                {
                  sub_1564840(&v264, a1, &a1[1], 1818);
                  v119 = (_BYTE *)sub_20EB760(29, 0);
                  sub_AEC220((unsigned __int8 **)&v264, v119, v120);
                  sub_1503AF0((unsigned __int8 **)&v264, 1);
                  sub_1503AF0((unsigned __int8 **)&v264, 1);
                  goto LABEL_245;
                }
LABEL_200:
                sub_14808E0((__int64)&v240, (__int64 *)v13, v44, v18, v15, v17);
LABEL_201:
                a1[127].m128i_i8[8] = v204;
                goto LABEL_35;
              }
            }
            sub_1564820(&v264, a1, v122, 1818);
LABEL_244:
            v116 = (_BYTE *)sub_20EB760(29, 0);
            sub_AEC220((unsigned __int8 **)&v264, v116, v117);
            sub_15038B0((unsigned __int8 **)&v264);
            sub_15038B0((unsigned __int8 **)&v264);
LABEL_245:
            sub_AEA040((__int64)&v264);
            LOWORD(v264) = 23;
            sub_15680D0(a1, &v264, 1, 0);
            goto LABEL_201;
          }
LABEL_243:
          sub_1564840(&v264, a1, v46, 1818);
          goto LABEL_244;
        }
        v44 = a1[1].m128i_i64[1];
        v13 = *(_QWORD *)(v44 + 16);
        if ( *(_DWORD *)v13 != 17
          || (v44 = *(_QWORD *)(v13 + 16) ^ 0x5F7275635F706D6FLL,
              (v18 = v44 | *(_QWORD *)(v13 + 24) ^ 0x6F69746172657469LL) != 0)
          || *(_BYTE *)(v13 + 32) != 110 )
        {
          if ( v95 != 2 )
            goto LABEL_198;
          goto LABEL_243;
        }
        v13 = (unsigned __int64)v46;
        *(_DWORD *)(a5 + 96) = 3 - (v95 != 0);
        v118 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v118, v46);
LABEL_250:
        v95 = *(_DWORD *)(a5 + 96);
        goto LABEL_197;
      }
    }
    else if ( v41 != 4 )
    {
      v43 = (__int64 *)a1->m128i_i64[1];
      v13 = (unsigned __int64)&a1[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v43, a1[1].m128i_i32);
LABEL_47:
      v45 = a1[2].m128i_i16[0];
      if ( v45 != 62 )
      {
        if ( (_DWORD)v8 == 29 && v45 == 23 )
          goto LABEL_250;
        v46 = a1[1].m128i_i32;
        sub_1564840(&v264, a1, &a1[1], (unsigned int)(a2 == 47) + 2186);
        v13 = (unsigned __int64)"dependence-type";
        if ( (_DWORD)v8 == 22 )
          v13 = (unsigned __int64)"dependency type";
        goto LABEL_52;
      }
      v46 = a1[1].m128i_i32;
LABEL_205:
      v97 = (__int64 *)a1->m128i_i64[1];
      v13 = (unsigned __int64)v46;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v97, v46);
      *(_DWORD *)(a5 + 16) = a1[2].m128i_i32[2];
      goto LABEL_53;
    }
    v13 = (unsigned __int64)&v264;
    WORD2(v264) = 449;
    LODWORD(v264) = 1507390;
    sub_15680D0(a1, &v264, 3, 2);
    goto LABEL_47;
  }
LABEL_36:
  v240->m128i_i8[0] = v241;
  return v225;
}
