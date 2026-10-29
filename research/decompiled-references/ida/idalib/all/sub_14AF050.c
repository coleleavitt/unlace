__int64 __fastcall sub_14AF050(__m128i *a1, unsigned int a2, __int64 *a3, int *a4, __int64 a5, __m128i a6, __m128 a7)
{
  __int16 v8; // ax
  __int8 v9; // cl
  char v11; // bl
  __int64 *v12; // r15
  __int16 v13; // ax
  __int16 v14; // ax
  char *v15; // rdx
  int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r13d
  const void *v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  _QWORD *v25; // rsi
  int *v26; // rdi
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  __int16 v35; // ax
  __int64 v36; // rbx
  void **v37; // r12
  void **v38; // rbp
  void **v39; // rdi
  __int64 *v40; // r12
  __int64 *v41; // rbp
  __int64 *v42; // rdi
  __int64 v43; // rbp
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  bool v47; // al
  __int64 v48; // rcx
  __int64 *v49; // rdi
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  bool v54; // al
  __int64 v55; // r12
  __int64 *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int8 v59; // r12
  __int64 v60; // rbp
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  void **v69; // r13
  void **v70; // rbp
  void **v71; // rdi
  __int16 v72; // ax
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 *v75; // rdi
  size_t v76; // rdx
  __int64 *v77; // rdi
  __int64 *v78; // rdi
  __int64 v79; // rdi
  int *v80; // rbx
  __int64 v81; // rdi
  __int64 *v82; // rdi
  __int16 v83; // ax
  __int64 *v84; // rdi
  unsigned __int32 v85; // r15d
  size_t v86; // rax
  __int64 v87; // rdi
  unsigned __int64 v88; // rbp
  int *v89; // r13
  __int64 v90; // rdi
  __int64 v91; // r13
  __int64 v92; // rdi
  size_t v93; // rax
  __int16 v94; // ax
  int v95; // ebx
  int v96; // ebp
  int v97; // eax
  int v98; // ecx
  __int64 v99; // rdi
  char *v100; // rsi
  __int64 v101; // r15
  __int64 v102; // rdi
  size_t v103; // rax
  __int64 *v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rbp
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdi
  __int64 *v110; // rdi
  unsigned __int32 v111; // ebp
  __int64 v112; // rdx
  _DWORD *v113; // rsi
  int v114; // edx
  _DWORD *v115; // rax
  int *v116; // rsi
  __int64 *v117; // rdi
  char v118; // al
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rbp
  __int64 v122; // rbx
  __int64 v123; // rdi
  __int64 v124; // rbp
  __int64 v125; // rbx
  __int64 v126; // rdi
  __int64 v127; // rdi
  size_t v128; // rax
  char *v129; // rbp
  signed __int64 v130; // rbx
  char *v131; // rax
  __int64 v132; // rbx
  __int64 v133; // rax
  size_t v134; // r15
  unsigned __int64 v135; // rdx
  size_t v136; // rcx
  char *v137; // rbx
  size_t v138; // r10
  unsigned int v139; // eax
  __int64 v140; // rdx
  unsigned __int64 v141; // rsi
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  __int64 i; // rax
  __int64 v145; // rdi
  char *v146; // r15
  size_t v147; // r10
  unsigned __int64 v148; // rdx
  __int64 v149; // rdi
  unsigned __int64 v150; // rax
  __int64 v151; // rax
  __int16 v152; // ax
  __int64 v153; // rax
  __int64 v154; // rax
  int *v155; // [rsp+0h] [rbp-14A8h] BYREF
  __int64 *v156; // [rsp+8h] [rbp-14A0h]
  __int64 *v157; // [rsp+10h] [rbp-1498h]
  _QWORD *v158; // [rsp+18h] [rbp-1490h]
  __int64 *v159; // [rsp+20h] [rbp-1488h]
  void **v160; // [rsp+28h] [rbp-1480h]
  void **v161; // [rsp+30h] [rbp-1478h]
  __int64 m128i_i64; // [rsp+38h] [rbp-1470h]
  void **v163; // [rsp+40h] [rbp-1468h]
  void **p_ptr; // [rsp+48h] [rbp-1460h]
  void **v165; // [rsp+50h] [rbp-1458h]
  size_t n; // [rsp+58h] [rbp-1450h]
  __int64 *v167; // [rsp+60h] [rbp-1448h]
  char *v168; // [rsp+68h] [rbp-1440h]
  void *dest; // [rsp+70h] [rbp-1438h]
  __int64 *v170; // [rsp+78h] [rbp-1430h]
  int *v171; // [rsp+80h] [rbp-1428h]
  __int64 *v172; // [rsp+88h] [rbp-1420h]
  size_t v173; // [rsp+90h] [rbp-1418h]
  __int64 v174; // [rsp+98h] [rbp-1410h]
  size_t v175; // [rsp+A0h] [rbp-1408h]
  __int8 v176; // [rsp+ABh] [rbp-13FDh]
  unsigned int v177; // [rsp+ACh] [rbp-13FCh] BYREF
  int v178; // [rsp+B0h] [rbp-13F8h] BYREF
  int v179; // [rsp+B4h] [rbp-13F4h] BYREF
  unsigned __int64 v180; // [rsp+B8h] [rbp-13F0h] BYREF
  __int64 v181; // [rsp+C4h] [rbp-13E4h] BYREF
  char v182; // [rsp+CCh] [rbp-13DCh]
  __int64 v183; // [rsp+D0h] [rbp-13D8h] BYREF
  __int64 v184; // [rsp+D8h] [rbp-13D0h]
  _QWORD v185[4]; // [rsp+E0h] [rbp-13C8h] BYREF
  __int128 v186; // [rsp+100h] [rbp-13A8h] BYREF
  __int64 v187; // [rsp+110h] [rbp-1398h]
  int v188; // [rsp+118h] [rbp-1390h]
  void *v189; // [rsp+120h] [rbp-1388h] BYREF
  __int64 v190; // [rsp+128h] [rbp-1380h]
  char v191; // [rsp+130h] [rbp-1378h] BYREF
  __int16 v192; // [rsp+140h] [rbp-1368h]
  void *v193; // [rsp+150h] [rbp-1358h] BYREF
  __int64 v194; // [rsp+158h] [rbp-1350h]
  _WORD v195[16]; // [rsp+160h] [rbp-1348h] BYREF
  unsigned __int8 *v196[3]; // [rsp+180h] [rbp-1328h] BYREF
  void *v197; // [rsp+198h] [rbp-1310h]
  __int64 v198; // [rsp+1A8h] [rbp-1300h] BYREF
  _QWORD v199[3]; // [rsp+1D0h] [rbp-12D8h] BYREF
  _QWORD v200[5]; // [rsp+1E8h] [rbp-12C0h] BYREF
  __int64 v201; // [rsp+210h] [rbp-1298h] BYREF
  _QWORD v202[3]; // [rsp+220h] [rbp-1288h] BYREF
  char v203; // [rsp+238h] [rbp-1270h] BYREF
  __int64 v204; // [rsp+248h] [rbp-1260h]
  char *v205; // [rsp+250h] [rbp-1258h]
  __int64 v206; // [rsp+258h] [rbp-1250h]
  char v207; // [rsp+260h] [rbp-1248h] BYREF
  void *v208; // [rsp+270h] [rbp-1238h] BYREF
  __int64 v209; // [rsp+278h] [rbp-1230h]
  char v210; // [rsp+280h] [rbp-1228h] BYREF
  __m128i *v211; // [rsp+2C0h] [rbp-11E8h] BYREF
  void *v212; // [rsp+2C8h] [rbp-11E0h]
  __int64 v213; // [rsp+2D0h] [rbp-11D8h]
  _QWORD v214[2]; // [rsp+2D8h] [rbp-11D0h] BYREF
  __int64 v215; // [rsp+2E8h] [rbp-11C0h] BYREF
  void *v216; // [rsp+2F0h] [rbp-11B8h]
  __int64 v217; // [rsp+2F8h] [rbp-11B0h]
  _BYTE v218[16]; // [rsp+300h] [rbp-11A8h] BYREF
  __int64 v219; // [rsp+310h] [rbp-1198h] BYREF
  __int64 v220; // [rsp+318h] [rbp-1190h] BYREF
  void **v221; // [rsp+320h] [rbp-1188h]
  __int64 v222; // [rsp+328h] [rbp-1180h]
  char v223; // [rsp+330h] [rbp-1178h] BYREF
  __int64 v224; // [rsp+470h] [rbp-1038h]
  char v225; // [rsp+478h] [rbp-1030h]
  void *ptr; // [rsp+480h] [rbp-1028h] BYREF
  __int64 v227; // [rsp+488h] [rbp-1020h] BYREF
  void **v228; // [rsp+490h] [rbp-1018h] BYREF
  __int64 v229; // [rsp+498h] [rbp-1010h]
  char v230; // [rsp+4A0h] [rbp-1008h] BYREF
  __int64 v231; // [rsp+5E0h] [rbp-EC8h]
  char v232; // [rsp+5E8h] [rbp-EC0h]
  __int64 v233; // [rsp+5F0h] [rbp-EB8h] BYREF
  __int128 v234; // [rsp+5F8h] [rbp-EB0h]
  void *v235[2]; // [rsp+608h] [rbp-EA0h] BYREF
  void *v236[2]; // [rsp+618h] [rbp-E90h] BYREF
  char v237; // [rsp+628h] [rbp-E80h]
  __int64 v238; // [rsp+638h] [rbp-E70h]
  void *v239; // [rsp+640h] [rbp-E68h]
  void *v240; // [rsp+670h] [rbp-E38h]
  int v241; // [rsp+67Ch] [rbp-E2Ch]
  int v242; // [rsp+690h] [rbp-E18h]
  __int64 v243; // [rsp+698h] [rbp-E10h]
  int v244; // [rsp+6F8h] [rbp-DB0h]
  __int64 v245; // [rsp+718h] [rbp-D90h]
  __int64 v246; // [rsp+720h] [rbp-D88h]
  __int64 *v247; // [rsp+728h] [rbp-D80h]
  unsigned __int64 v248; // [rsp+730h] [rbp-D78h]
  _BYTE v249[320]; // [rsp+738h] [rbp-D70h] BYREF
  __int64 v250; // [rsp+878h] [rbp-C30h]
  char v251; // [rsp+880h] [rbp-C28h]
  __m128 v252; // [rsp+890h] [rbp-C18h] BYREF
  void *v253[2]; // [rsp+8A0h] [rbp-C08h] BYREF
  __int128 v254; // [rsp+8B0h] [rbp-BF8h]
  __int64 v255; // [rsp+8C0h] [rbp-BE8h]
  __int64 v256; // [rsp+8C8h] [rbp-BE0h]
  __int64 v257; // [rsp+8D0h] [rbp-BD8h] BYREF
  unsigned int v258; // [rsp+8E0h] [rbp-BC8h]
  int v259; // [rsp+8ECh] [rbp-BBCh]
  int v260; // [rsp+8F8h] [rbp-BB0h]
  _DWORD *v261; // [rsp+910h] [rbp-B98h]
  int v262; // [rsp+918h] [rbp-B90h]
  __int64 v263; // [rsp+9B8h] [rbp-AF0h] BYREF
  char v264; // [rsp+B60h] [rbp-948h]
  void *src; // [rsp+B70h] [rbp-938h] BYREF
  unsigned int v266; // [rsp+B78h] [rbp-930h]
  unsigned int v267; // [rsp+B7Ch] [rbp-92Ch]
  _BYTE v268[16]; // [rsp+B80h] [rbp-928h] BYREF
  _QWORD v269[235]; // [rsp+B90h] [rbp-918h] BYREF
  unsigned __int32 v270; // [rsp+12E8h] [rbp-1C0h]
  __int64 v271; // [rsp+12F8h] [rbp-1B0h] BYREF
  _QWORD v272[3]; // [rsp+1300h] [rbp-1A8h] BYREF
  __int64 v273; // [rsp+1318h] [rbp-190h] BYREF
  __int64 v274; // [rsp+1458h] [rbp-50h]
  char v275; // [rsp+1460h] [rbp-48h]

  v8 = a1[2].m128i_i16[0];
  v177 = a2;
  v157 = a3;
  v155 = a4;
  if ( v8 == 73 )
  {
    v44 = a1->m128i_i64[1];
    if ( (*(_BYTE *)(*(_QWORD *)(v44 + 56) + 2LL) & 4) == 0
      || ((v45 = *(_QWORD *)(v44 + 2944), *(unsigned int *)(v44 + 2912) <= v45)
        ? (v46 = sub_14180A0(v44, 1u))
        : (v46 = *(_QWORD *)(v44 + 2904) + 24 * v45),
          v47 = sub_13D0E90(v46, 3),
          v48 = 1550,
          !v47) )
    {
      v48 = 1551;
    }
    sub_1564840(&v252, a1, &a1[1], v48);
    sub_AEA040((__int64)&v252);
    v49 = (__int64 *)a1->m128i_i64[1];
    v36 = 0;
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v49, a1[1].m128i_i32);
    v252.m128_i16[0] = 25;
    sub_15680D0(a1, &v252, 1, 1);
    return v36;
  }
  v9 = a1[127].m128i_i8[8];
  a1[127].m128i_i8[8] = 1;
  v176 = v9;
  if ( !*v155 )
  {
    v11 = v8 == 329 || v8 == 72 || v8 == 5;
    if ( !v11 )
      goto LABEL_80;
    v11 = sub_1566C80(a1, 0);
    v8 = a1[2].m128i_i16[0];
    if ( v8 != 416 )
    {
LABEL_79:
      if ( *v155 )
        goto LABEL_4;
LABEL_80:
      if ( v8 == 119 || v8 == 166 )
      {
        v252.m128_i32[0] = 0;
        v36 = sub_14A4C70((__int64)a1, &v252);
        goto LABEL_83;
      }
      goto LABEL_4;
    }
    v51 = a1->m128i_i64[1];
    v52 = *(_QWORD *)(v51 + 2944);
    if ( *(unsigned int *)(v51 + 2912) <= v52 )
    {
      if ( *(_WORD *)(sub_14180A0(v51, 1u) + 16) != 5 )
      {
        v51 = a1->m128i_i64[1];
        v52 = *(_QWORD *)(v51 + 2944);
        if ( v52 >= *(unsigned int *)(v51 + 2912) )
        {
          v53 = sub_14180A0(v51, 1u);
          goto LABEL_94;
        }
LABEL_93:
        v53 = *(_QWORD *)(v51 + 2904) + 24 * v52;
LABEL_94:
        v54 = *(_WORD *)(v53 + 16) == 140;
LABEL_95:
        if ( v54 )
        {
          v252 = 0;
          *(_OWORD *)v253 = 0;
          v254 = 0;
          sub_14D0170((_DWORD)a1, (unsigned int)&v252, 0, 0, 0, 0, 0, 0, 0, 0, 0);
          if ( v252.m128_i32[0] && v252.m128_i32[1] && !v252.m128_u64[1]
            || (LODWORD(v219) = 0,
                LODWORD(ptr) = 0,
                v227 = 0,
                v229 = 0,
                (unsigned __int8)sub_14D1670(
                                   (_DWORD)a1,
                                   (unsigned int)&v252,
                                   0,
                                   0,
                                   0,
                                   1,
                                   1,
                                   0,
                                   (__int64)&v219,
                                   (__int64)&ptr))
            || (v86 = j__strlen("access declaration"),
                (unsigned __int8)sub_1569A00(a1, 63, 15, "access declaration", v86)) )
          {
            v36 = 0;
            LOWORD(v233) = 63;
            sub_15680D0(a1, &v233, 1, 0);
          }
          else
          {
            v87 = a1[6].m128i_i64[0];
            *((_QWORD *)&v234 + 1) = 0x200000000LL;
            v233 = 0;
            *(_QWORD *)&v234 = v235;
            v36 = sub_185BF60(
                    v87,
                    *(_QWORD *)(v87 + 608),
                    v177,
                    0,
                    0,
                    (unsigned int)&v252,
                    (__int64)&ptr,
                    0,
                    (__int64)&v233);
            if ( (void **)v234 != v235 )
              free((void *)v234);
          }
          if ( HIDWORD(v253[1]) )
            free(v253[0]);
          goto LABEL_83;
        }
        v8 = a1[2].m128i_i16[0];
        goto LABEL_79;
      }
      v72 = a1[2].m128i_i16[0];
      if ( v72 == 1 )
      {
LABEL_138:
        v54 = v72 == 63;
        goto LABEL_95;
      }
    }
    else if ( *(_WORD *)(*(_QWORD *)(v51 + 2904) + 24 * v52 + 16) != 5 )
    {
      goto LABEL_93;
    }
    v73 = a1->m128i_i64[1];
    v74 = *(_QWORD *)(v73 + 2944) + 1LL;
    if ( v74 >= *(unsigned int *)(v73 + 2912) )
      v72 = *(_WORD *)(sub_14180A0(v73, 2u) + 16);
    else
      v72 = *(_WORD *)(*(_QWORD *)(v73 + 2904) + 24 * v74 + 16);
    goto LABEL_138;
  }
  v11 = 0;
LABEL_4:
  if ( v8 == 146 )
  {
    v58 = sub_18957D0(*(_QWORD *)(a1[6].m128i_i64[0] + 736));
    v59 = a1[129].m128i_i8[1];
    v60 = v58;
    a1[129].m128i_i8[1] = v58 != 0;
    if ( v58 )
    {
      sub_1A865F0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v58);
      v252.m128_i32[0] = 0;
      v36 = sub_155B830(a1, 7, &v252, v157, v177);
      sub_1A86610(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v60);
    }
    else
    {
      v252.m128_i32[0] = 0;
      v36 = sub_155B830(a1, 7, &v252, v157, v177);
    }
    a1[129].m128i_i8[1] = v59;
    goto LABEL_83;
  }
  if ( v8 == 201 )
  {
    v55 = a1[6].m128i_i64[1];
    ++*(_BYTE *)(v55 + 4);
    v56 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v56, a1[1].m128i_i32);
    v57 = sub_14AF050(a1, v177, v157, v155, a5);
    --*(_BYTE *)(v55 + 4);
    v36 = v57;
    goto LABEL_83;
  }
  v12 = v199;
  v199[0] = 0;
  v159 = &a1[31].m128i_i64[1];
  v199[1] = v200;
  v200[2] = (char *)a1 + 504;
  v199[2] = 0x200000000LL;
  v200[3] = &v201;
  v200[4] = 0x200000000LL;
  if ( (unsigned __int16)(v8 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    sub_14AB020((__int64)a1, (unsigned int *)v199, a6, a7);
  v13 = a1[2].m128i_i16[0];
  if ( v13 == 447 )
  {
    v36 = sub_151C490(a1, &v177, v199, 0, 0, 0);
    goto LABEL_76;
  }
  if ( v13 == 153 )
  {
    v82 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v82, a1[1].m128i_i32);
    LODWORD(v156) = a1[2].m128i_i32[2];
    v83 = a1[2].m128i_i16[0];
    if ( v83 == 146 )
    {
      v157 = v199;
      do
      {
        v84 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v84, a1[1].m128i_i32);
        v85 = a1[2].m128i_u32[2];
        sub_1564820(&v252, a1, v85, 1918);
        BYTE12(v234) = 0;
        *(_QWORD *)((char *)&v234 + 4) = 0;
        v235[0] = v236;
        v235[1] = nullptr;
        LOBYTE(v236[0]) = 0;
        v237 = 0;
        LODWORD(v233) = v85;
        HIDWORD(v233) = v85;
        LOBYTE(v234) = 1;
        if ( v85 )
        {
          sub_14A2370((__int64 *)&v252, (unsigned __int64)&v233);
          if ( v235[0] != v236 )
            operator delete(v235[0]);
        }
        sub_AEA040((__int64)&v252);
        v83 = a1[2].m128i_i16[0];
      }
      while ( v83 == 146 );
      v12 = v157;
    }
    if ( v83 == 138 )
    {
      v36 = 0;
      sub_1564820(&v252, a1, (unsigned int)v156, 1932);
      sub_AEA040((__int64)&v252);
      v252.m128_i16[0] = 63;
      sub_15680D0(a1, &v252, 1, 2);
    }
    else
    {
      v252.m128_i32[0] = 0;
      v36 = sub_14ADBA0((__int64)a1, 7, v155, (unsigned int)v156, &v252, (__int64)v12, a6, a7, v177);
    }
    goto LABEL_76;
  }
  v202[1] = &v203;
  v158 = v202;
  v204 = (__int64)v159;
  v160 = &v189;
  v205 = &v207;
  v161 = &v253[1];
  v202[0] = 0;
  v202[2] = 0x200000000LL;
  v206 = 0x200000000LL;
  v189 = &v191;
  v190 = 0x200000000LL;
  v192 = 0;
  m128i_i64 = (__int64)&v257;
  while ( 1 )
  {
    while ( (unsigned __int16)(v13 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
    {
      sub_14AB020((__int64)a1, (unsigned int *)v199, a6, a7);
      v13 = a1[2].m128i_i16[0];
    }
    v14 = a1[2].m128i_i16[0];
    if ( v14 == 189 )
    {
      sub_1490230(a1, (__int64)v158, (__int64)v160, 0, a6, a7);
      goto LABEL_101;
    }
    v15 = *(char **)(a1->m128i_i64[1] + 56);
    if ( *v15 >= 0 && (v15[89] & 1) == 0 )
      break;
    if ( v14 != 20 )
      break;
    v252.m128_u64[0] = 0;
    v253[0] = (void *)0x200000000LL;
    v252.m128_u64[1] = (unsigned __int64)v161;
    v256 = 0x200000000LL;
    *((_QWORD *)&v254 + 1) = v159;
    v255 = m128i_i64;
    sub_14A9F50(a1, (__int64)&v252, a6, a7);
    LODWORD(v156) = v253[0];
    sub_147F860((__int64)v158, (__int64)&v252);
    sub_147A450(&v252);
    if ( !(_DWORD)v156 )
      break;
LABEL_101:
    v13 = a1[2].m128i_i16[0];
  }
  v16 = v199[0];
  v17 = v202[0];
  if ( LODWORD(v199[0]) && HIDWORD(v199[0]) )
  {
    if ( LODWORD(v202[0]) && HIDWORD(v202[0]) && LODWORD(v199[0]) > LODWORD(v202[0]) )
      v16 = v202[0];
    v17 = v16;
  }
  v156 = &v233;
  sub_147A4A0((__int64)&v233, (__int64)v159);
  v18 = a1[6].m128i_i64[0];
  v245 = v18;
  if ( a5 )
  {
    v19 = *(_QWORD *)(a5 + 8);
    v250 = 0;
    v248 = 0x400000000LL;
    v246 = v19;
    v20 = *(_DWORD *)(a5 + 24);
    v247 = (__int64 *)v249;
    if ( v20 )
    {
      v21 = (const void *)(a5 + 32);
      if ( *(_QWORD *)(a5 + 16) != a5 + 32 )
      {
        v22 = *(_DWORD *)(a5 + 28);
        v247 = *(__int64 **)(a5 + 16);
        v248 = __PAIR64__(v22, v20);
        *(_QWORD *)(a5 + 16) = v21;
        *(_DWORD *)(a5 + 28) = 0;
        goto LABEL_29;
      }
      if ( v20 <= 4uLL )
      {
        v75 = (__int64 *)v249;
        v76 = 80LL * v20;
        goto LABEL_141;
      }
      sub_2237220(v156 + 39, v249, v20, 80);
      v21 = *(const void **)(a5 + 16);
      v75 = v247;
      v76 = 80LL * *(unsigned int *)(a5 + 24);
      if ( v76 )
LABEL_141:
        memcpy(v75, v21, v76);
      LODWORD(v248) = v20;
LABEL_29:
      *(_DWORD *)(a5 + 24) = 0;
    }
    if ( !*(_BYTE *)(a5 + 360) )
    {
      sub_1818070(*(_QWORD *)a5, *(_QWORD *)(a5 + 352), 0);
      *(_BYTE *)(a5 + 360) = 1;
    }
    v18 = v245;
  }
  else
  {
    v246 = 0;
    v250 = 0;
    v247 = v156 + 41;
    v248 = 0x400000000LL;
  }
  v23 = *(_QWORD *)(v18 + 512);
  v24 = (__int64)(v156 + 4);
  v25 = v158;
  *(_QWORD *)(v18 + 512) = v156 + 38;
  v250 = v23;
  v251 = 0;
  sub_147F860(v24, (__int64)v25);
  if ( v11 )
    sub_15AEFC0(v156);
  v26 = v155;
  v222 = 0x400000000LL;
  v27 = v177;
  v28 = *v155;
  v161 = (void **)&v219;
  v220 = 0;
  v29 = v28 - 2;
  v30 = a1[6].m128i_i64[0];
  v221 = (void **)&v223;
  v224 = 0;
  v219 = v30;
  if ( v29 > 1 )
  {
    v225 = 0;
    sub_1487580((__int64)a1, (__int64)v156, (__int64)v155, v177, 1, (__int64)v160, a6, a7, 1u);
  }
  else
  {
    v31 = *(_QWORD *)(v30 + 512);
    *(_QWORD *)(v30 + 512) = &v220;
    v224 = v31;
    v225 = 1;
    sub_1487580((__int64)a1, (__int64)v156, (__int64)v26, v27, 1, (__int64)v160, a6, a7, 1u);
    sub_1818070(v219, v224, 0);
    v225 = 0;
  }
  a1[127].m128i_i8[8] = v176;
  if ( v17 )
    v242 = v17;
  if ( (unsigned __int8)sub_15AC7C0(v156)
    && !*v155
    && (unsigned __int8)sub_1496E50((__int64)a1, (__int64)v156, v177, 1, (__int64)v160, a6, a7) )
  {
    v36 = 0;
    goto LABEL_53;
  }
  v32 = 0;
  v33 = *((_QWORD *)v155 + 1);
  if ( v33 )
  {
    v32 = *(unsigned int *)(v33 + 8);
    v33 = *(_QWORD *)v33;
  }
  v34 = a1[2].m128i_i16[0] == 63;
  v183 = v33;
  v184 = v32;
  if ( v34 )
  {
    v78 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v78, a1[1].m128i_i32);
    if ( v244 )
      sub_1481E50((__int64)a1, (__int64)v199, 0);
    v79 = a1[6].m128i_i64[0];
    ptr = nullptr;
    v80 = (int *)sub_17D7F00(
                   v79,
                   *(_QWORD *)(v79 + 608),
                   v177,
                   (_DWORD)v156,
                   (unsigned int)v199,
                   0,
                   v183,
                   v184,
                   (__int64)&ptr,
                   0);
    sub_17A3F10(a1[6].m128i_i64[0], v80);
    if ( !v251 )
    {
      sub_1818070(v245, v250, v80);
      v251 = 1;
    }
    v81 = a1[6].m128i_i64[0];
    if ( ptr )
    {
      v155 = v80;
      v252 = _mm_loadh_ps((const double *)&v155);
      v36 = sub_17B2ED0(v81, &v252);
    }
    else
    {
      v36 = sub_17A2530(v81, v80, 0);
    }
    goto LABEL_53;
  }
  if ( (unsigned __int8)sub_15AC7C0(v156) )
    sub_17A3F10(a1[6].m128i_i64[0], v234);
  v35 = a1[2].m128i_i16[0];
  if ( (v233 & 0x800000000LL) != 0 && (v35 == 27 || v35 == 66) )
  {
    sub_1564820(
      &v252,
      a1,
      a1[1].m128i_u32[0],
      (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 2LL) & 2) == 0 ? 2025 : 2108);
    sub_AEA040((__int64)&v252);
    p_ptr = &ptr;
    v214[1] = &ptr;
    v211 = a1;
    LODWORD(v165) = v244;
    ptr = &v228;
    v227 = 0x600000000LL;
    v212 = &v177;
    v213 = (__int64)v199;
    v214[0] = &v183;
    if ( (unsigned __int8)sub_149ED70((__int64 *)&v211, (__int64)v156) )
    {
      v36 = 0;
    }
    else if ( a1[2].m128i_i16[0] == 66 )
    {
      m128i_i64 = (__int64)a1[1].m128i_i64;
      v163 = &v208;
      v157 = &v263;
      while ( 1 )
      {
        v116 = (int *)m128i_i64;
        v117 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v117, v116);
        sub_147A4A0((__int64)&v252, (__int64)v159);
        sub_149F840(v157, (__int64)a1, a5);
        LODWORD(v196[0]) = 0;
        v208 = nullptr;
        sub_15AF730(&v252, (unsigned int)v165, v163, v196);
        sub_1487580((__int64)a1, (__int64)&v252, (__int64)v155, v177, 1, 0, a6, a7, 1u);
        if ( (unsigned __int8)sub_149ED70((__int64 *)&v211, (__int64)&v252) )
          break;
        sub_149F9B0((__int64)v157);
        sub_147A5F0((__int64)&v252);
        if ( a1[2].m128i_i16[0] != 66 )
          goto LABEL_197;
      }
      v36 = 0;
      sub_149F9B0((__int64)v157);
      sub_147A5F0((__int64)&v252);
    }
    else
    {
LABEL_197:
      v93 = j__strlen("friend declaration");
      sub_1569A00(a1, 63, 1646, "friend declaration", v93);
      v36 = sub_17B2ED0(a1[6].m128i_i64[0], ptr);
    }
    if ( ptr != p_ptr + 2 )
      free(ptr);
    goto LABEL_53;
  }
  if ( v35 == 175 )
  {
    if ( v244
      || ((v61 = a1->m128i_i64[1], v62 = *(_QWORD *)(v61 + 2944), v62 >= *(unsigned int *)(v61 + 2912))
        ? (v63 = sub_14180A0(v61, 1u))
        : (v63 = *(_QWORD *)(v61 + 2904) + 24 * v62),
          *(_WORD *)(v63 + 16) == 136) )
    {
      v64 = 1675;
    }
    else
    {
      v64 = 3446;
    }
    sub_1564820(&v252, a1, a1[1].m128i_u32[0], v64);
    sub_AEA040((__int64)&v252);
    v36 = 0;
    v252.m128_i32[0] = 1638463;
    sub_15680D0(a1, &v252, 2, 2);
    goto LABEL_53;
  }
  sub_147A650((__int64)&v252, (__int64)v156, (__int64)v199, 7);
  v65 = a1[6].m128i_i64[0];
  v272[0] = v156 + 38;
  v272[2] = 0x400000000LL;
  v271 = v65;
  v274 = 0;
  v272[1] = &v273;
  v66 = *(_QWORD *)(v65 + 512);
  *(_QWORD *)(v65 + 512) = v272;
  v274 = v66;
  v34 = *((_QWORD *)v155 + 1) == 0;
  v275 = 0;
  if ( !v34 )
  {
    v269[8] = v183;
    v269[9] = v184;
  }
  v228 = (void **)&v230;
  v193 = v195;
  v194 = 0x200000000LL;
  v171 = &v178;
  v185[1] = &v178;
  v185[2] = &v179;
  v163 = &v208;
  v208 = &v210;
  v209 = 0x800000000LL;
  v67 = (_QWORD *)a1[6].m128i_i64[0];
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v165 = &v193;
  v195[8] = 0;
  v178 = 0;
  v179 = 0;
  v185[0] = a1;
  v180 = 0;
  ptr = v67;
  v227 = 0;
  p_ptr = &ptr;
  v229 = 0x400000000LL;
  v231 = 0;
  if ( v29 > 1 )
  {
    v232 = 0;
    v172 = (__int64 *)&v180;
    m128i_i64 = (__int64)&v186;
    if ( (unsigned __int8)sub_14A8A60(a1, (__int64)&v252, &v186, (__int64 *)&v180, (__int64)&v193, (__m128i)0LL, a7) )
      goto LABEL_120;
  }
  else
  {
    v68 = v67[64];
    v67[64] = &v227;
    v231 = v68;
    v232 = 1;
    v172 = (__int64 *)&v180;
    m128i_i64 = (__int64)&v186;
    if ( (unsigned __int8)sub_14A8A60(a1, (__int64)&v252, &v186, (__int64 *)&v180, (__int64)&v193, (__m128i)0LL, a7) )
      goto LABEL_120;
    sub_1818070(ptr, v231, 0);
    v232 = 0;
  }
  v88 = v180;
  if ( !v180 )
  {
    if ( **(char **)(a1->m128i_i64[1] + 56) < 0 && (unsigned __int8)sub_15AC3B0(&v252) )
      sub_149F220(v185, 1);
    if ( a1[2].m128i_i16[0] == 24 && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 )
    {
LABEL_181:
      v264 = v264 & 0xF3 | 4;
      sub_147B3A0((__int64)&v252, &v211);
LABEL_182:
      if ( !(unsigned __int8)sub_147B3A0((__int64)&v252, &v211) )
      {
        sub_1564820(&v211, a1, v258, 1679);
        sub_AEA040((__int64)&v211);
        sub_1478A90((__int64)a1);
        v120 = 0;
        LOWORD(v211) = 25;
        goto LABEL_280;
      }
      if ( (v233 & 7) == 1 )
      {
        sub_1564820(&v211, a1, v258, 1680);
        sub_AEA040((__int64)&v211);
        LOBYTE(v233) = v233 & 0xC0;
        v243 = 0;
      }
      v36 = sub_1476BF0((__int64)a1, 0.0, v177, (__int64)v157, (__int64)&v252, v155, m128i_i64, v179);
      if ( v36 )
      {
        if ( (_DWORD)v190 )
        {
          v89 = nullptr;
          v155 = (int *)(8LL * (unsigned int)(v190 - 1) + 8);
          do
          {
            v90 = *(_QWORD *)((char *)v89 + (_QWORD)v189);
            v89 += 2;
            sub_147FE60(v90 + 152, v36);
          }
          while ( v155 != v89 );
        }
        if ( (_DWORD)v194 )
        {
          v91 = 8LL * (unsigned int)(v194 - 1) + 8;
          do
          {
            v92 = *(_QWORD *)((char *)v193 + v88);
            v88 += 8LL;
            sub_147FE60(v92 + 152, v36);
          }
          while ( v88 != v91 );
        }
      }
      v34 = a1[2].m128i_i16[0] == 63;
      LODWORD(v194) = 0;
      if ( v34 )
        sub_156E1F0(a1, 3, 0);
      goto LABEL_123;
    }
    if ( (unsigned __int8)sub_147B3A0((__int64)&v252, &v211) )
    {
      v94 = a1[2].m128i_i16[0];
      if ( v94 == 24 || v94 == 62 || v94 == 150 )
        goto LABEL_181;
      if ( v94 == 64 )
      {
        v149 = a1->m128i_i64[1];
        v150 = *(_QWORD *)(v149 + 2944);
        if ( v150 >= *(unsigned int *)(v149 + 2912) )
          v151 = sub_14180A0(v149, 1u);
        else
          v151 = *(_QWORD *)(v149 + 2904) + 24 * v150;
        v152 = *(_WORD *)(v151 + 16);
        switch ( v152 )
        {
          case 82:
            v264 = v264 & 0xF3 | 8;
            sub_147B3A0((__int64)&v252, &v211);
            goto LABEL_182;
          case 131:
            v264 |= 0xCu;
            sub_147B3A0((__int64)&v252, &v211);
            goto LABEL_182;
          case 3:
            v153 = a1->m128i_i64[1];
            if ( *(_QWORD *)(v153 + 760) )
            {
              *(_BYTE *)(v153 + 968) = 1;
              *(_BYTE *)(*(_QWORD *)(v153 + 48) + 6LL) = 1;
            }
            v154 = a1[6].m128i_i64[0];
            a1[2].m128i_i16[0] = 1;
            sub_170CB20(*(_QWORD *)(v154 + 656), &v252);
            goto LABEL_122;
        }
      }
    }
    v264 &= 0xF3u;
    if ( (unsigned __int8)sub_147B3A0((__int64)&v252, &v211) && v244 )
      sub_1481E50((__int64)a1, (__int64)v199, 0);
  }
  v170 = v199;
  v167 = &v181;
  while ( 2 )
  {
    LOBYTE(v95) = a1[2].m128i_i16[0] == 24 || a1[2].m128i_i16[0] == 64;
    if ( !(_BYTE)v95 || (v96 = v179) != 0 )
    {
      v97 = v244;
      LOBYTE(v95) = 0;
      v96 = 0;
      goto LABEL_212;
    }
    if ( v180 > 1 && !v257 && !((unsigned int)v256 | v260) )
    {
      LOBYTE(v95) = 0;
      sub_1564840(&v211, a1, &a1[1], 1539);
      sub_AEA040((__int64)&v211);
      LOWORD(v211) = 66;
      sub_15680D0(a1, &v211, 1, 3);
      v97 = v244;
      goto LABEL_212;
    }
    if ( (unsigned __int8)sub_15AC3B0(&v252) )
    {
      v95 = sub_149F220(v185, 0) ^ 1;
      v97 = v244;
      goto LABEL_212;
    }
    v97 = v244;
    v98 = v244;
    if ( (*(_BYTE *)v252.m128_u64[0] & 5) == 1 )
      goto LABEL_212;
    if ( v244 )
    {
LABEL_242:
      n = (size_t)src + 8 * v266;
      if ( (void *)n != src )
      {
        LOBYTE(dest) = v95;
        v104 = (__int64 *)src;
        LODWORD(v168) = v96;
        do
        {
          v106 = *v104;
          if ( (*(_BYTE *)(*v104 + 34) & 0xF) == 2 || (*(_BYTE *)(*v104 + 35) & 3) != 0 )
          {
            v107 = *(unsigned int *)(v106 + 24);
            if ( (*(_BYTE *)(*v104 + 35) & 2) != 0 )
            {
              sub_1564820(v196, a1, v107, 1716);
              sub_AE9DF0(v196, v106, 0x10u);
              sub_FC70F0((__int64)&v211, (__int64)v196);
              v105 = *(_QWORD *)(v106 + 24);
              v182 = 1;
              v181 = v105;
              sub_AEC610((__int64 *)&v211, v167);
              sub_AEA040((__int64)&v211);
              sub_AEA040((__int64)v196);
            }
            else
            {
              sub_1564820(&v211, a1, v107, 1558);
              v108 = *(_QWORD *)(v106 + 24);
              v182 = 1;
              v181 = v108;
              sub_AEC610((__int64 *)&v211, v167);
              sub_AEA040((__int64)&v211);
            }
          }
          ++v104;
        }
        while ( (__int64 *)n != v104 );
        v96 = (int)v168;
        LOBYTE(v95) = (_BYTE)dest;
      }
      v109 = a1[6].m128i_i64[0];
      v100 = *(char **)(v109 + 608);
      v101 = sub_1854BA0(v109);
      goto LABEL_217;
    }
    if ( *v155 )
    {
      v127 = a1[6].m128i_i64[0];
      v96 = 0;
      v100 = *(char **)(v127 + 608);
      v101 = sub_187F390(v127, v180 & 0xFFFFFFFFFFFFFFFELL, m128i_i64, 0);
      if ( !v101 )
      {
        if ( !v179 )
          goto LABEL_276;
        if ( !(_DWORD)v187 )
          goto LABEL_225;
        v96 = 0;
        sub_1564820(&v211, a1, (unsigned int)v179, 1594);
        v100 = "abstract";
        sub_149E970((unsigned __int8 **)&v211, (__int64)"abstract");
        sub_AEA040((__int64)&v211);
        goto LABEL_308;
      }
LABEL_214:
      if ( (*(_BYTE *)(v101 + 28) & 0x7F) != 0x45 || (v101 = *(_QWORD *)(v101 + 48)) != 0 )
      {
        v102 = a1[6].m128i_i64[0];
        LOWORD(v211) = 1;
        v100 = *(char **)(v102 + 608);
        sub_1836B60(v102, v100, v101, v157, &v211);
      }
      goto LABEL_217;
    }
    if ( (v180 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    {
      if ( a1[2].m128i_i16[0] != 64 )
      {
LABEL_343:
        v97 = v98;
        LOBYTE(v95) = 0;
        v96 = 2;
        goto LABEL_212;
      }
      v145 = a1[6].m128i_i64[0];
      LOBYTE(v95) = 0;
      v96 = 1;
      v100 = *(char **)(v145 + 608);
      v101 = sub_187F390(v145, 0, m128i_i64, 1);
      if ( !v101 )
        goto LABEL_218;
      goto LABEL_214;
    }
    sub_1564840(&v211, a1, &a1[1], ((*(char *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) >> 31) & 0x93u) + 1943);
    sub_AEA040((__int64)&v211);
    if ( a1[2].m128i_i16[0] != 64 )
    {
      v98 = v244;
      goto LABEL_343;
    }
    v97 = v244;
    LOBYTE(v95) = 0;
    v96 = 1;
LABEL_212:
    if ( v97 )
      goto LABEL_242;
    v99 = a1[6].m128i_i64[0];
    v100 = *(char **)(v99 + 608);
    v101 = sub_187F390(v99, v180 & 0xFFFFFFFFFFFFFFFELL, m128i_i64, v96);
    if ( v101 )
      goto LABEL_214;
LABEL_217:
    if ( v96 )
    {
LABEL_218:
      if ( (*(_BYTE *)v252.m128_u64[0] & 7) == 3 )
      {
        LOBYTE(v95) = 1;
        v96 = 0;
      }
    }
    if ( !v179 )
    {
      if ( !v101 )
        goto LABEL_224;
      goto LABEL_240;
    }
    if ( (_DWORD)v187 )
    {
      sub_1564820(&v211, a1, (unsigned int)v179, 1594);
      v100 = "abstract";
      sub_149E970((unsigned __int8 **)&v211, (__int64)"abstract");
      sub_AEA040((__int64)&v211);
      if ( v101 )
      {
        if ( v179 )
        {
LABEL_223:
          v100 = (char *)v101;
          sub_184A6E0(a1[6].m128i_i64[0], v101, (unsigned int)v179);
          goto LABEL_224;
        }
LABEL_240:
        if ( (_DWORD)v187 )
        {
          v100 = (char *)v101;
          sub_184A6E0(a1[6].m128i_i64[0], v101, (unsigned int)v187);
        }
        goto LABEL_224;
      }
LABEL_308:
      v101 = 0;
      goto LABEL_224;
    }
    if ( v101 )
      goto LABEL_223;
LABEL_224:
    if ( !v96 )
    {
LABEL_225:
      if ( !(_BYTE)v95 )
      {
        if ( v101 )
        {
          if ( (unsigned __int8)sub_15AC4A0(&v252, v100) )
            sub_17D5BF0(a1[6].m128i_i64[0], v101);
LABEL_229:
          if ( *(char *)(v101 + 28) >= 0 )
          {
            if ( (_DWORD)v190 )
            {
              v121 = 0;
              v122 = 8LL * (unsigned int)(v190 - 1) + 8;
              do
              {
                v123 = *(_QWORD *)((char *)v189 + v121);
                v121 += 8;
                sub_147FE60(v123 + 152, v101);
              }
              while ( v122 != v121 );
            }
            if ( (_DWORD)v194 )
            {
              v124 = 0;
              v125 = 8LL * (unsigned int)(v194 - 1) + 8;
              do
              {
                v126 = *(_QWORD *)((char *)v193 + v124);
                v124 += 8;
                sub_147FE60(v126 + 152, v101);
              }
              while ( v125 != v124 );
            }
          }
          sub_17BF6B0(a1[6].m128i_i64[0], v101);
          sub_147FE60((__int64)v163, v101);
          if ( (unsigned __int8)sub_147B3A0((__int64)&v252, &v211) && (*(_BYTE *)v252.m128_u64[0] & 7) != 1 )
            sub_14A2050(a1, (__int64)&v252, v101);
        }
        goto LABEL_233;
      }
LABEL_276:
      v118 = sub_15AC3B0(&v252);
      v119 = sub_14A0C50((__int64)a1, v101, v118, v171);
      if ( v119 != 1 )
      {
        if ( v101 )
        {
          sub_17ED4C0(a1[6].m128i_i64[0], v101, v119 & 0xFFFFFFFFFFFFFFFELL, v178 == 0);
          goto LABEL_229;
        }
        goto LABEL_233;
      }
      if ( v101 )
        sub_17D5BF0(a1[6].m128i_i64[0], v101);
      LOWORD(v211) = 66;
      sub_15680D0(a1, &v211, 1, 3);
LABEL_267:
      if ( v101 )
        goto LABEL_229;
      goto LABEL_233;
    }
    sub_1564840(&v211, a1, &a1[1], (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 ? 2010 : 2124);
    sub_AEA040((__int64)&v211);
    if ( !v262 )
      goto LABEL_266;
    v113 = v261;
    v114 = *v261;
    if ( *v261 == 6 )
    {
      v115 = v261 + 36;
      while ( &v261[36 * (v262 - 1) + 36] != v115 )
      {
        v113 = v115;
        v115 += 36;
        v114 = *(v115 - 36);
        if ( v114 != 6 )
          goto LABEL_281;
      }
      goto LABEL_266;
    }
LABEL_281:
    if ( v114 != 2 || *((_QWORD *)v113 + 8) )
    {
LABEL_266:
      sub_1472C30((__int64)a1, v101);
      goto LABEL_267;
    }
    sub_1564840(&v211, a1, &a1[1], 1704);
    sub_AEA040((__int64)&v211);
    LOWORD(v211) = 66;
    sub_15680D0(a1, &v211, 1, 3);
    if ( v101 )
    {
      sub_B88650(v101, 1);
      goto LABEL_229;
    }
LABEL_233:
    LODWORD(v194) = 0;
    if ( !v275 )
    {
      sub_1818070(v271, v274, v101);
      v275 = 1;
    }
    if ( a1[2].m128i_i16[0] == 66 )
    {
      v110 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v110, a1[1].m128i_i32);
      v111 = a1[2].m128i_u32[2];
      if ( (a1[2].m128i_i8[2] & 1) != 0 && !sub_147DC30((__int64)a1, 7) )
      {
        v12 = v170;
        sub_1564820(&v211, a1, v111, 1648);
        v128 = j__strlen(";");
        LODWORD(v181) = v111;
        HIDWORD(v181) = v111;
        v182 = 1;
        sub_149EFC0((__int64)v196, v181, 1, ";", v128);
        if ( LODWORD(v196[0]) && HIDWORD(v196[0]) )
          sub_14A2370((__int64 *)&v211, (unsigned __int64)v196);
        if ( v197 != &v198 )
          operator delete(v197);
        sub_AEA040((__int64)&v211);
        goto LABEL_237;
      }
      if ( *v155 && !v270 )
      {
        sub_1564820(&v211, a1, v111, 1752);
        sub_AE9DF0((unsigned __int8 **)&v211, *v155, 2u);
        sub_AEA040((__int64)&v211);
      }
      sub_147AE90((char *)&v252);
      if ( !v275 )
      {
        sub_1818070(v271, v274, 0);
        v275 = 1;
      }
      LODWORD(v186) = 0;
      v180 = 0;
      v112 = *(_QWORD *)(v271 + 512);
      *(_QWORD *)(v271 + 512) = v272;
      v179 = 0;
      v274 = v112;
      v275 = 0;
      v178 = 0;
      v270 = v111;
      sub_14A1D90((__int64)a1);
      if ( a1[2].m128i_i16[0] == 189 )
      {
        v211 = nullptr;
        v212 = v214;
        v213 = 0x200000000LL;
        v215 = (__int64)v159;
        v216 = v218;
        v217 = 0x200000000LL;
        sub_1490230(a1, (__int64)&v211, 0, (__int64)&v252, (__m128i)0LL, a7);
        v129 = (char *)v212;
        v130 = 8LL * (unsigned int)v213;
        v131 = (char *)v212 + v130;
        n = v130;
        v132 = v130 >> 3;
        v168 = v131;
        v133 = v266;
        v134 = v132;
        v135 = v266 + v132;
        if ( v266 )
        {
          if ( v135 > v267 )
          {
            sub_2237220(&src, v268, v135, 8);
            v133 = v266;
          }
          v136 = 8 * v133;
          v137 = (char *)src;
          v138 = (8 * v133) >> 3;
          dest = (char *)src + 8 * v133;
          if ( v138 >= v134 )
          {
            v173 = v136 - n;
            v146 = (char *)src + v136 - n;
            v147 = n;
            v174 = (__int64)n >> 3;
            v148 = v133 + ((__int64)n >> 3);
            if ( v148 > v267 )
            {
              v175 = n;
              sub_2237220(&src, v268, v148, 8);
              v133 = v266;
              v147 = n;
            }
            if ( dest != v146 )
            {
              memmove((char *)src + 8 * v133, v146, v147);
              LODWORD(v133) = v266;
            }
            v266 = v174 + v133;
            if ( v137 != v146 )
              memmove(&v137[n], v137, v173);
            if ( v129 != v168 )
              memmove(v137, v129, n);
          }
          else
          {
            v139 = v134 + v133;
            v266 = v139;
            if ( src != dest )
            {
              v173 = v138;
              n = v136;
              memcpy((char *)src + 8 * v139 - v136, src, v136);
              v138 = v173;
              v136 = n;
            }
            if ( v138 )
            {
              if ( (v137 >= v129 + 16 || v129 >= v137 + 16) && v138 - 1 > 3 )
              {
                v140 = 0;
                v141 = 0;
                v142 = ((v138 - 2) >> 1) + 1;
                do
                {
                  a7 = (__m128)_mm_loadu_si128((const __m128i *)&v129[v140]);
                  ++v141;
                  *(__m128 *)&v137[v140] = a7;
                  v140 += 16;
                }
                while ( v141 < v142 );
                v143 = 2 * v142;
                if ( v138 != v143 )
                  *(_QWORD *)&v137[8 * v143] = *(_QWORD *)&v129[8 * v143];
              }
              else
              {
                for ( i = 0; i != v138; ++i )
                  *(_QWORD *)&v137[8 * i] = *(_QWORD *)&v129[8 * i];
              }
              v129 += v136;
            }
            if ( v129 != v168 )
              memcpy(dest, v129, v168 - v129);
          }
        }
        else
        {
          if ( v135 > v267 )
          {
            sub_2237220(&src, v268, v135, 8);
            v133 = v266;
          }
          if ( v129 != v168 )
          {
            memcpy((char *)src + 8 * v133, v129, n);
            LODWORD(v133) = v266;
          }
          v266 = v132 + v133;
        }
        LODWORD(v213) = 0;
        sub_15D8C50(v269, &v215);
        LODWORD(v217) = 0;
        if ( HIDWORD(v211) )
          v259 = HIDWORD(v211);
        sub_15DCED0(v215, &v215);
        if ( v216 != v218 )
          free(v216);
        if ( v212 != v214 )
          free(v212);
      }
      sub_14A1D90((__int64)a1);
      if ( (unsigned __int8)sub_14A8A60(a1, (__int64)&v252, (_DWORD *)m128i_i64, v172, (__int64)v165, (__m128i)0LL, a7) )
        break;
      continue;
    }
    break;
  }
  v12 = v170;
  v103 = j__strlen(&byte_22F0C30);
  if ( !(unsigned __int8)sub_1569A00(a1, 63, 1647, &byte_22F0C30, v103) )
  {
LABEL_237:
    v36 = sub_17B3220(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v156, v208, (unsigned int)v209);
    goto LABEL_123;
  }
  v120 = 3;
  LOWORD(v211) = 25;
LABEL_280:
  sub_15680D0(a1, &v211, 1, v120);
LABEL_120:
  if ( a1[2].m128i_i16[0] == 63 )
  {
    v77 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v77, a1[1].m128i_i32);
  }
LABEL_122:
  v36 = 0;
LABEL_123:
  if ( v232 )
  {
    sub_1818070(ptr, v231, 0);
    v232 = 0;
  }
  v69 = v228;
  v70 = &v228[10 * (unsigned int)v229];
  if ( v228 != v70 )
  {
    do
    {
      v71 = v69;
      v69 += 10;
      sub_15B6850(v71);
    }
    while ( v70 != v69 );
    v70 = v228;
  }
  if ( v70 != p_ptr + 4 )
    free(v70);
  if ( v208 != v163 + 2 )
    free(v208);
  if ( v193 != v165 + 2 )
    free(v193);
  sub_149F9B0((__int64)&v271);
  sub_147A7A0((char *)&v252);
LABEL_53:
  if ( v225 )
  {
    sub_1818070(v219, v224, 0);
    v225 = 0;
  }
  v37 = v221;
  v38 = &v221[10 * (unsigned int)v222];
  if ( v221 != v38 )
  {
    do
    {
      v39 = v37;
      v37 += 10;
      sub_15B6850(v39);
    }
    while ( v38 != v37 );
    v38 = v221;
  }
  if ( v38 != v161 + 4 )
    free(v38);
  if ( !v251 )
  {
    sub_1818070(v245, v250, 0);
    v251 = 1;
  }
  v40 = v247;
  v41 = &v247[10 * (unsigned int)v248];
  if ( v247 != v41 )
  {
    do
    {
      v42 = v40;
      v40 += 10;
      sub_15B6850(v42);
    }
    while ( v41 != v40 );
    v41 = v247;
  }
  if ( v41 != v156 + 41 )
    free(v41);
  if ( v241 )
    free(v240);
  v43 = (__int64)v156;
  sub_15DCED0(v238, v156 + 9);
  if ( v239 != (void *)(v43 + 96) )
    free(v239);
  if ( v236[0] != v156 + 7 )
    free(v236[0]);
  if ( v189 != v160 + 2 )
    free(v189);
  sub_147A450(v158);
LABEL_76:
  sub_147A450(v12);
LABEL_83:
  a1[127].m128i_i8[8] = v176;
  return v36;
}
