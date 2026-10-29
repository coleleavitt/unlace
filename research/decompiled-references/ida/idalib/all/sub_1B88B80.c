__int64 __fastcall sub_1B88B80(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, __m128 a7, __m128 a8)
{
  __int64 *v8; // r15
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // r14
  __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  void **v21; // r12
  void **v22; // rbp
  _QWORD *v23; // r12
  _QWORD *v24; // rbp
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r15
  __int64 v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // r12
  _BYTE *v64; // rbx
  __int64 v65; // r15
  unsigned __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // rbp
  __int64 v78; // r8
  __int16 v79; // ax
  unsigned __int64 v80; // rax
  void *v81; // rsi
  __int64 v82; // r14
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // eax
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  _QWORD *v90; // r14
  unsigned int v91; // eax
  unsigned __int64 v92; // rcx
  unsigned int v93; // eax
  __int64 v94; // rsi
  unsigned __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r14
  __int64 v100; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  unsigned int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  unsigned __int64 v108; // r15
  __int64 v109; // r14
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  unsigned int v113; // eax
  unsigned __int64 v114; // r14
  unsigned __int64 *v115; // rsi
  unsigned int v116; // eax
  __int64 v117; // rsi
  int v118; // ebx
  __int64 v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  unsigned int v123; // r12d
  void *v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  unsigned int v128; // eax
  __int64 v129; // rdx
  unsigned __int64 v130; // rcx
  __int64 v131; // r8
  unsigned __int64 v132; // r15
  __int64 v133; // rcx
  void *v134; // rsi
  __int64 v135; // r14
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  unsigned int v139; // eax
  unsigned __int64 v140; // r14
  int v141; // ebp
  __int64 v142; // rax
  unsigned __int64 v143; // rdx
  __int64 v144; // rbx
  _BYTE *v145; // rbp
  _QWORD *v146; // r15
  unsigned __int64 v147; // r14
  __int64 v148; // rbx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rbx
  __int16 v152; // ax
  __int64 v153; // [rsp-10h] [rbp-DE8h]
  __int64 v154; // [rsp-10h] [rbp-DE8h]
  _QWORD *v156; // [rsp+8h] [rbp-DD0h]
  unsigned __int64 v159; // [rsp+20h] [rbp-DB8h]
  unsigned __int64 v160; // [rsp+20h] [rbp-DB8h]
  __int64 v161; // [rsp+20h] [rbp-DB8h]
  unsigned __int64 v162; // [rsp+20h] [rbp-DB8h]
  __int64 v163; // [rsp+20h] [rbp-DB8h]
  unsigned int v164; // [rsp+28h] [rbp-DB0h]
  __int64 v165; // [rsp+28h] [rbp-DB0h]
  _QWORD *v166; // [rsp+28h] [rbp-DB0h]
  int v167; // [rsp+28h] [rbp-DB0h]
  __int64 v168; // [rsp+28h] [rbp-DB0h]
  __int64 v169; // [rsp+38h] [rbp-DA0h]
  unsigned int v170; // [rsp+38h] [rbp-DA0h]
  int v171; // [rsp+38h] [rbp-DA0h]
  __int64 v172; // [rsp+40h] [rbp-D98h]
  __int64 v173; // [rsp+48h] [rbp-D90h]
  __int64 v174; // [rsp+48h] [rbp-D90h]
  __int64 v175; // [rsp+48h] [rbp-D90h]
  __int64 v176; // [rsp+48h] [rbp-D90h]
  __int64 v177; // [rsp+48h] [rbp-D90h]
  unsigned __int64 v178; // [rsp+48h] [rbp-D90h]
  _QWORD *v179; // [rsp+48h] [rbp-D90h]
  unsigned int v180; // [rsp+48h] [rbp-D90h]
  __int64 v181; // [rsp+48h] [rbp-D90h]
  __int64 v182; // [rsp+50h] [rbp-D88h]
  unsigned int v183; // [rsp+50h] [rbp-D88h]
  int v184; // [rsp+50h] [rbp-D88h]
  __int64 v185; // [rsp+60h] [rbp-D78h]
  unsigned int v186; // [rsp+60h] [rbp-D78h]
  unsigned __int64 v187; // [rsp+60h] [rbp-D78h]
  int v188; // [rsp+68h] [rbp-D70h]
  _QWORD *v189; // [rsp+68h] [rbp-D70h]
  unsigned __int64 v190; // [rsp+68h] [rbp-D70h]
  int v191; // [rsp+70h] [rbp-D68h]
  unsigned __int64 v192; // [rsp+70h] [rbp-D68h]
  __int64 v193; // [rsp+90h] [rbp-D48h]
  __int64 v194; // [rsp+A0h] [rbp-D38h]
  __int64 v195; // [rsp+C0h] [rbp-D18h]
  __int64 *v196; // [rsp+C8h] [rbp-D10h]
  __int64 v197; // [rsp+D0h] [rbp-D08h]
  unsigned int v198; // [rsp+D8h] [rbp-D00h]
  int v199; // [rsp+DCh] [rbp-CFCh]
  unsigned __int64 v200; // [rsp+F8h] [rbp-CE0h] BYREF
  __int64 v201; // [rsp+100h] [rbp-CD8h] BYREF
  __int64 v202; // [rsp+108h] [rbp-CD0h]
  __int64 v203; // [rsp+110h] [rbp-CC8h]
  unsigned int v204; // [rsp+118h] [rbp-CC0h]
  void *v205[2]; // [rsp+120h] [rbp-CB8h] BYREF
  char v206; // [rsp+130h] [rbp-CA8h] BYREF
  void *v207; // [rsp+140h] [rbp-C98h] BYREF
  size_t v208; // [rsp+148h] [rbp-C90h]
  _BYTE v209[16]; // [rsp+150h] [rbp-C88h] BYREF
  void *v210[2]; // [rsp+160h] [rbp-C78h] BYREF
  _BYTE v211[16]; // [rsp+170h] [rbp-C68h] BYREF
  __m128i v212[2]; // [rsp+180h] [rbp-C58h] BYREF
  __int16 v213; // [rsp+1A0h] [rbp-C38h]
  __m128i v214[2]; // [rsp+1B0h] [rbp-C28h] BYREF
  __int16 v215; // [rsp+1D0h] [rbp-C08h]
  __m128i v216[3]; // [rsp+1E0h] [rbp-BF8h] BYREF
  __m128i v217[2]; // [rsp+210h] [rbp-BC8h] BYREF
  __int16 v218; // [rsp+230h] [rbp-BA8h]
  __m128i v219; // [rsp+240h] [rbp-B98h] BYREF
  _QWORD *v220; // [rsp+250h] [rbp-B88h]
  __int64 v221; // [rsp+258h] [rbp-B80h]
  __int64 v222; // [rsp+260h] [rbp-B78h]
  __m128i v223; // [rsp+270h] [rbp-B68h] BYREF
  int v224; // [rsp+280h] [rbp-B58h]
  __int64 v225; // [rsp+288h] [rbp-B50h]
  unsigned __int64 v226; // [rsp+290h] [rbp-B48h]
  void *v227; // [rsp+2A0h] [rbp-B38h] BYREF
  __int64 v228; // [rsp+2A8h] [rbp-B30h]
  _BYTE v229[32]; // [rsp+2B0h] [rbp-B28h] BYREF
  void *v230[2]; // [rsp+2D0h] [rbp-B08h] BYREF
  _BYTE v231[32]; // [rsp+2E0h] [rbp-AF8h] BYREF
  void *ptr; // [rsp+300h] [rbp-AD8h] BYREF
  __int64 v233; // [rsp+308h] [rbp-AD0h]
  _BYTE v234[32]; // [rsp+310h] [rbp-AC8h] BYREF
  __m128i v235; // [rsp+330h] [rbp-AA8h] BYREF
  _QWORD v236[4]; // [rsp+340h] [rbp-A98h] BYREF
  void *v237; // [rsp+360h] [rbp-A78h] BYREF
  __int64 v238; // [rsp+368h] [rbp-A70h]
  _BYTE v239[48]; // [rsp+370h] [rbp-A68h] BYREF
  void **v240; // [rsp+3A0h] [rbp-A38h] BYREF
  __int64 v241; // [rsp+3A8h] [rbp-A30h]
  _BYTE v242[64]; // [rsp+3B0h] [rbp-A28h] BYREF
  _BYTE *v243; // [rsp+3F0h] [rbp-9E8h] BYREF
  __int64 v244; // [rsp+3F8h] [rbp-9E0h]
  _BYTE v245[2520]; // [rsp+400h] [rbp-9D8h] BYREF

  v8 = a2;
  v10 = sub_168B6C0((__int64)a1);
  v11 = &a2[a3];
  v156 = (_QWORD *)v10;
  if ( a2 == v11 )
    return 1;
  v12 = *a2;
  if ( *(_DWORD *)(*a2 + 8) != 97 )
  {
    v13 = a2 + 1;
    do
    {
      if ( v11 == v13 )
        return 1;
      v12 = *v13++;
    }
    while ( *(_DWORD *)(v12 + 8) != 97 );
  }
  v16 = (_QWORD *)(v12 + 24);
  v198 = *(_DWORD *)(v12 + 16);
  v17 = v12 + 24 + 8LL * v198;
  v18 = (8LL * v198) >> 3;
  if ( !((8LL * v198) >> 5) )
  {
    v19 = (_QWORD *)(v12 + 24);
LABEL_21:
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        if ( v18 != 1 )
          goto LABEL_24;
LABEL_68:
        if ( *v19 )
          goto LABEL_24;
        goto LABEL_54;
      }
      if ( !*v19 )
        goto LABEL_54;
      ++v19;
    }
    if ( !*v19 )
      goto LABEL_54;
    ++v19;
    goto LABEL_68;
  }
  if ( !*(_QWORD *)(v12 + 24) )
  {
    v19 = (_QWORD *)(v12 + 24);
    goto LABEL_54;
  }
  if ( !*(_QWORD *)(v12 + 32) )
  {
    v19 = (_QWORD *)(v12 + 32);
    goto LABEL_54;
  }
  if ( !*(_QWORD *)(v12 + 40) )
  {
    v19 = (_QWORD *)(v12 + 40);
    goto LABEL_54;
  }
  v19 = (_QWORD *)(v12 + 48);
  if ( !*(_QWORD *)(v12 + 48) )
  {
LABEL_54:
    if ( (_QWORD *)v17 == v19 )
      goto LABEL_24;
    return 1;
  }
  while ( 1 )
  {
    v19 = v16 + 4;
    if ( (_QWORD *)(v12 + 32 * ((8LL * v198) >> 5) + 24) == v16 + 4 )
    {
      v18 = (v17 - (__int64)v19) >> 3;
      goto LABEL_21;
    }
    if ( !v16[4] )
      goto LABEL_54;
    if ( !v16[5] )
    {
      v19 = v16 + 5;
      goto LABEL_54;
    }
    if ( !v16[6] )
    {
      if ( (_QWORD *)v17 == v16 + 6 )
        goto LABEL_24;
      return 1;
    }
    if ( !v16[7] )
      break;
    v16 += 4;
  }
  if ( (_QWORD *)v17 != v16 + 7 )
    return 1;
LABEL_24:
  if ( !a4 )
    return 1;
  v20 = *a1;
  v244 = 0x400000000LL;
  v193 = *(_QWORD *)(v20 + 608);
  v243 = v245;
  sub_1B50610((__int64)&v243, v198);
  v200 = 0;
  v240 = (void **)v242;
  v241 = 0x400000000LL;
  if ( !(unsigned __int8)sub_1AFD830((__int64)a1, 102, a4, v198, (__int64)&v243, (__int64)&v200, (__int64)&v240) )
  {
    v14 = 1;
    goto LABEL_27;
  }
  if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v14 = sub_EF66A0((__int64)v156, a5, a6, v8, a3, v198, a4, 0);
    goto LABEL_27;
  }
  v237 = v239;
  v238 = 0x600000000LL;
  sub_1AF7D50((__int64)&v237, v198, 0);
  sub_1AE75D0(a4, (__int64)v237, (unsigned int)v238);
  v228 = 0x400000000LL;
  v227 = v229;
  v33 = *a1;
  v230[0] = v231;
  v201 = v33;
  v202 = 0;
  v203 = 0;
  v204 = 0;
  v230[1] = (void *)0x400000000LL;
  ptr = v234;
  v233 = 0x400000000LL;
  if ( !v198 )
  {
    v219.m128i_i64[0] = v33;
    v219.m128i_i64[1] = (__int64)&v201;
    v159 = v200;
    v220 = v156;
    v221 = v12;
    v222 = v193;
    goto LABEL_121;
  }
  sub_1AE86A0((__int64)v230, v198);
  if ( (unsigned int)v233 != (unsigned __int64)v198 )
  {
    if ( (unsigned int)v233 > (unsigned __int64)v198 )
      LODWORD(v233) = v198;
    else
      sub_1AE86A0((__int64)&ptr, v198);
  }
  v197 = a3;
  v34 = 0;
  v199 = v198 - 1;
  v194 = v198 - 1;
  v173 = 0;
  v195 = v12;
  v196 = v8;
  while ( 2 )
  {
    v36 = (__int64)&v243[v173];
    v37 = **(_QWORD **)&v243[v173 + 152];
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 40LL);
    v39 = *(_QWORD *)(v37 + 24);
    v235.m128i_i32[2] = *(_DWORD *)(v37 + 4);
    v235.m128i_i64[0] = v38;
    v236[0] = v39;
    sub_B87650((__int64)v205, v235.m128i_i64);
    v40 = *(_QWORD *)v36;
    v41 = *(_QWORD *)(*(_QWORD *)v36 + 8LL);
    v223.m128i_i64[0] = (__int64)v205;
    v217[0].m128i_i64[0] = (__int64)".iv.";
    LOWORD(v226) = 260;
    v218 = 259;
    sub_E3A880(v210, v34, 0);
    v215 = 260;
    v212[0].m128i_i64[0] = (__int64)".floor_";
    v213 = 259;
    v214[0].m128i_i64[0] = (__int64)v210;
    sub_A41580(v216, v212, v214, v42, v43, v44);
    sub_A41580(&v219, v216, v217, v45, v46, v47);
    sub_A41580(&v235, &v219, &v223, v48, v49, v50);
    sub_2253560(&v207, &v235);
    if ( v210[0] != v211 )
      operator delete(v210[0]);
    v51 = sub_1AFE760((_QWORD *)*a1, 0, v41, v207, v208, v37);
    *((_QWORD *)v230[0] + v34) = v51;
    if ( v207 != v209 )
      operator delete(v207);
    LOWORD(v226) = 260;
    v223.m128i_i64[0] = (__int64)v205;
    v218 = 259;
    v217[0].m128i_i64[0] = (__int64)".iv.";
    sub_E3A880(v210, v34, 0);
    v215 = 260;
    v212[0].m128i_i64[0] = (__int64)".tile_";
    v213 = 259;
    v214[0].m128i_i64[0] = (__int64)v210;
    sub_A41580(v216, v212, v214, v52, v53, 260);
    sub_A41580(&v219, v216, v217, v54, v55, v56);
    sub_A41580(&v235, &v219, &v223, v57, v58, v59);
    sub_2253560(&v207, &v235);
    if ( v210[0] != v211 )
      operator delete(v210[0]);
    v60 = *(_QWORD *)(v40 + 16);
    *(_QWORD *)(v60 + 40) = sub_6F3470(*(_QWORD *)(*a1 + 240) + 552LL, v207, v208);
    *((_QWORD *)ptr + v34) = v60;
    if ( v207 != v209 )
      operator delete(v207);
    sub_1AF60D0(v156, v36, *((_QWORD *)v237 + v34), v240[2 * v34], LODWORD(v240[2 * v34 + 1]), (__int64)&v227);
    if ( v205[0] != &v206 )
    {
      operator delete(v205[0]);
      v35 = v34 + 1;
      v173 += 616;
      if ( v194 == v34 )
        break;
      goto LABEL_78;
    }
    v173 += 616;
    v35 = v34 + 1;
    if ( v194 != v34 )
    {
LABEL_78:
      v34 = v35;
      continue;
    }
    break;
  }
  v159 = v200;
  v61 = *a1;
  v219.m128i_i64[1] = (__int64)&v201;
  v8 = v196;
  v220 = v156;
  v219.m128i_i64[0] = v61;
  v221 = v195;
  v222 = v193;
  if ( v199 < 0 )
  {
LABEL_121:
    sub_1AEC4E0(v156, (__int64 *)v227, (unsigned int)v228);
    v14 = sub_EF66A0((__int64)v156, a5, a6, v8, a3, v198, a4, v159);
    goto LABEL_97;
  }
  v164 = v198 - 1;
  v62 = (unsigned int)v199;
  v172 = 8LL * v199;
  v63 = v172;
  while ( 1 )
  {
    v64 = &v243[77 * v63];
    v65 = *((_QWORD *)v64 + 2);
    v66 = **((_QWORD **)v64 + 19);
    v67 = *(_QWORD *)(v65 + 8);
    v68 = *(_QWORD *)((char *)v237 + v63);
    v224 = v62;
    v185 = v67;
    v182 = v68;
    v225 = v67;
    v223.m128i_i64[0] = v61;
    v223.m128i_i64[1] = (__int64)&ptr;
    v226 = v66;
    v69 = (_QWORD *)sub_1AEDE80(v61, (__int64)v230[0], v62, v67, v66);
    v74 = sub_19146F0(v61, v69, v70, v71, v72, v73, a7, a8);
    sub_17ED4C0(
      v61,
      *(_QWORD *)((char *)ptr + v63),
      v74 & 0xFFFFFFFFFFFFFFFELL,
      0,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64);
    v174 = *(_QWORD *)((char *)ptr + v63);
    v191 = sub_16C50A0(v66);
    v188 = sub_BF7FE0(v66);
    v77 = sub_EEE9A0(24, v156, 8u);
    v79 = *(_WORD *)v77 & 0xFE00;
    LOBYTE(v79) = -11;
    *(_WORD *)v77 = v79;
    if ( unk_2CD7484 )
      sub_EE9B50(245);
    *(_QWORD *)(v77 + 8) = v174;
    *(_DWORD *)(v77 + 16) = v191;
    *(_DWORD *)(v77 + 20) = v188;
    if ( v77 == 1 )
      break;
    v80 = sub_1B88920((__int64)&v219, v164, v75, v76, v78, a7, a8);
    if ( !v80 )
      break;
    v189 = (_QWORD *)v80;
    v81 = v230[0];
    v175 = *a1;
    v82 = sub_1AEDE80(*a1, (__int64)v230[0], v164, v185, v66);
    v86 = sub_C00A40(*((_QWORD *)v64 + 5), (__int64)v81, v83, v84, v85);
    v87 = sub_1929BB0(v175, v193, v86, 5u, v82, v189, a7, a8, 0);
    if ( v87 <= 1 )
      break;
    v90 = (_QWORD *)(v87 & 0xFFFFFFFFFFFFFFFELL);
    v176 = *a1;
    v91 = sub_C00A40(*((_QWORD *)v64 + 5), *a1, v88, v153, v89);
    v92 = sub_1929BB0(v176, v193, v91, 0xAu, v65, v90, a7, a8, 0);
    if ( v92 <= 1 )
      break;
    v192 = v92;
    v190 = *((_QWORD *)v64 + 5);
    v177 = *a1;
    v186 = sub_EEC140(v190);
    v93 = sub_EEB7E0(v190, v190, *(double *)a7.m128_u64);
    v94 = v93;
    v95 = sub_1923BC0(v177, v93, v186, v192 & 0xFFFFFFFFFFFFFFFELL, v65, (__int64)v90, a7, a8);
    if ( v95 <= 1 )
      break;
    v99 = *a1;
    v178 = v95;
    v100 = sub_1AEE0D0(v223.m128i_i64, v94, v96, v97, v98);
    v104 = sub_C00A40(*((_QWORD *)v64 + 5), v94, v101, v102, v103);
    v108 = sub_1929BB0(v99, v193, v104, 0xAu, v100, (_QWORD *)(v178 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
    if ( v108 <= 1 )
      break;
    v109 = *a1;
    v179 = (_QWORD *)sub_1AEE0D0(v223.m128i_i64, v193, v105, v106, v107);
    v113 = sub_C00A40(*((_QWORD *)v64 + 7), v193, v110, v111, v112);
    v114 = sub_1925670(v109, v193, v113, 2, v179, 0, a7, a8);
    if ( v114 <= 1 )
      break;
    v235.m128i_i64[0] = (__int64)v236;
    v115 = *((unsigned __int64 **)v64 + 37);
    v235.m128i_i64[1] = 0x400000000LL;
    sub_1AF67E0((__int64)&v235, v115, (__int64)&v115[*((unsigned int *)v64 + 76)]);
    if ( (*(_WORD *)v182 & 0x1FF) == 0xFC )
      sub_183F100((__int64)&v235, *(_QWORD *)(v182 + 56));
    sub_183F100((__int64)&v235, v159);
    v180 = sub_EEC140(v159);
    v116 = sub_EEB7E0(v159, v159, *(double *)a7.m128_u64);
    v117 = v235.m128i_i64[0];
    v187 = sub_EEF560(v156, (const void *)v235.m128i_i64[0], v235.m128i_u32[2], 0, v116, v180);
    v160 = *((_QWORD *)v64 + 6);
    v183 = sub_EEB7E0(v160, v117, *(double *)a7.m128_u64);
    LODWORD(v160) = sub_EEB7E0(v160, v117, *(double *)a7.m128_u64);
    v118 = sub_EEC140(*((_QWORD *)v64 + 7));
    v181 = sub_EEE9A0(56, v156, 8u);
    v119 = (__int64)v156;
    sub_EEF330(
      v181,
      v156,
      v77 & 0xFFFFFFFFFFFFFFFELL,
      v108 & 0xFFFFFFFFFFFFFFFELL,
      0,
      v114 & 0xFFFFFFFFFFFFFFFELL,
      v187,
      v183,
      v160,
      v118);
    if ( (_QWORD *)v235.m128i_i64[0] != v236 )
      free((void *)v235.m128i_i64[0]);
    --v164;
    v63 -= 8;
    if ( v164 == -1 )
    {
      v123 = v198 - 1;
      while ( 1 )
      {
        v145 = &v243[77 * v172];
        v146 = *((_QWORD **)v145 + 2);
        v147 = **((_QWORD **)v145 + 19);
        v163 = v146[1];
        v148 = *a1;
        v149 = sub_C00A40(*((_QWORD *)v145 + 6), v119, v120, v121, v122);
        v150 = sub_18C1B30(v148, v149, 0);
        sub_17ED4C0(
          v148,
          *(_QWORD *)((char *)v230[0] + v172),
          v150 & 0xFFFFFFFFFFFFFFFELL,
          0,
          *(double *)a7.m128_u64,
          *(double *)a8.m128_u64);
        v168 = *(_QWORD *)((char *)v230[0] + v172);
        v184 = sub_16C50A0(v147);
        v171 = sub_BF7FE0(v147);
        v151 = sub_EEE9A0(24, v156, 8u);
        v152 = *(_WORD *)v151 & 0xFE00;
        LOBYTE(v152) = -11;
        *(_WORD *)v151 = v152;
        if ( unk_2CD7484 )
          sub_EE9B50(245);
        *(_QWORD *)(v151 + 8) = v168;
        *(_DWORD *)(v151 + 16) = v184;
        *(_DWORD *)(v151 + 20) = v171;
        if ( v151 == 1 )
          goto LABEL_96;
        v124 = v230[0];
        v169 = *a1;
        v165 = sub_1AEDE80(*a1, (__int64)v230[0], v123, v163, v147);
        v128 = sub_C00A40(*((_QWORD *)v145 + 5), (__int64)v124, v125, v126, v127);
        v132 = sub_1929BB0(v169, v193, v128, 0xAu, v165, v146, a7, a8, 0);
        if ( v132 <= 1 )
          goto LABEL_96;
        v166 = (_QWORD *)sub_1B88920((__int64)&v219, v123, v129, v130, v131, a7, a8);
        if ( !v166 )
          goto LABEL_96;
        v133 = v163;
        v134 = v230[0];
        v161 = *a1;
        v135 = sub_1AEDE80(*a1, (__int64)v230[0], v123, v133, v147);
        v139 = sub_C00A40(*((_QWORD *)v145 + 7), (__int64)v134, v136, v137, v138);
        v172 -= 8;
        v140 = sub_1929BB0(v161, v193, v139, 0x19u, v135, v166, a7, a8, 0);
        if ( v140 <= 1 )
          goto LABEL_96;
        --v123;
        v162 = *((_QWORD *)v145 + 6);
        v170 = sub_EEB7E0(v162, v154, *(double *)a7.m128_u64);
        v167 = sub_EEB7E0(v162, v154, *(double *)a7.m128_u64);
        v141 = sub_EEC140(*((_QWORD *)v145 + 7));
        v142 = sub_EEE9A0(56, v156, 8u);
        v143 = v151 & 0xFFFFFFFFFFFFFFFELL;
        v159 = v142;
        v144 = v142;
        v119 = (__int64)v156;
        sub_EEF330(
          v142,
          v156,
          v143,
          v132 & 0xFFFFFFFFFFFFFFFELL,
          0,
          v140 & 0xFFFFFFFFFFFFFFFELL,
          v181,
          v170,
          v167,
          v141);
        v181 = v144;
        if ( v123 == -1 )
        {
          v8 = v196;
          a3 = v197;
          goto LABEL_121;
        }
      }
    }
    v61 = *a1;
    v62 = v164;
    v159 = v181;
  }
LABEL_96:
  v14 = 1;
LABEL_97:
  if ( ptr != v234 )
    free(ptr);
  if ( v230[0] != v231 )
    free(v230[0]);
  operator delete(v202, 16LL * v204, 8);
  if ( v227 != v229 )
    free(v227);
  if ( v237 != v239 )
    free(v237);
LABEL_27:
  v21 = v240;
  v22 = &v240[2 * (unsigned int)v241];
  if ( v240 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 2;
        if ( *v22 == v22 + 2 )
          break;
        free(*v22);
        if ( v21 == v22 )
          goto LABEL_30;
      }
    }
    while ( v21 != v22 );
LABEL_30:
    v22 = v240;
  }
  if ( v22 != (void **)v242 )
    free(v22);
  v23 = v243;
  v24 = &v243[616 * (unsigned int)v244];
  if ( v243 != (_BYTE *)v24 )
  {
    do
    {
      while ( 1 )
      {
        v24 -= 77;
        v25 = (_QWORD *)v24[61];
        if ( v25 != v24 + 63 )
          free(v25);
        v26 = (_QWORD *)v24[55];
        if ( v26 != v24 + 57 )
          free(v26);
        v27 = (_QWORD *)v24[49];
        if ( v27 != v24 + 51 )
          free(v27);
        v28 = (_QWORD *)v24[43];
        if ( v28 != v24 + 45 )
          free(v28);
        v29 = (_QWORD *)v24[37];
        if ( v29 != v24 + 39 )
          free(v29);
        v30 = (_QWORD *)v24[31];
        if ( v30 != v24 + 33 )
          free(v30);
        v31 = (_QWORD *)v24[25];
        if ( v31 != v24 + 27 )
          free(v31);
        v32 = (_QWORD *)v24[19];
        if ( v32 == v24 + 21 )
          break;
        free(v32);
        if ( v23 == v24 )
          goto LABEL_50;
      }
    }
    while ( v23 != v24 );
LABEL_50:
    v24 = v243;
  }
  if ( v24 != (_QWORD *)v245 )
    free(v24);
  return v14;
}
