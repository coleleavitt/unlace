__int64 __fastcall sub_368E80(_QWORD *a1, char *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rsi
  unsigned int j; // r14d
  __int64 *v10; // rbp
  int v11; // r13d
  __int64 v12; // r11
  int v13; // r10d
  __int64 v14; // r8
  char v15; // r12
  bool v16; // cl
  char v17; // r9
  bool v18; // dl
  char v19; // al
  char v20; // al
  __int64 *v21; // r12
  __int64 v22; // r13
  char v23; // al
  char v24; // dl
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  char v32; // si
  __int64 v33; // rax
  char v34; // si
  int v35; // ecx
  char v36; // si
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // si
  int v40; // eax
  __int64 v41; // rax
  char v42; // dl
  char v43; // cl
  __int64 v44; // rax
  char v45; // dl
  char v46; // cl
  _QWORD *v47; // r12
  __int64 v48; // rsi
  unsigned int i; // r8d
  __int64 *v50; // rbp
  int v51; // r13d
  __int64 v52; // r11
  int v53; // r10d
  __int64 v54; // r9
  char v55; // r12
  bool v56; // cl
  char v57; // r14
  bool v58; // dl
  char v59; // al
  char v60; // al
  __int64 *v61; // r12
  __int64 v62; // r13
  char v63; // al
  char v64; // dl
  char v65; // al
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rdx
  int v70; // ecx
  int v71; // eax
  char v72; // si
  __int64 v73; // rax
  char v74; // si
  int v75; // ecx
  char v76; // si
  __int64 v77; // rcx
  __int64 v78; // rax
  char v79; // si
  int v80; // eax
  __int64 v81; // rax
  char v82; // dl
  char v83; // cl
  __int64 v84; // rax
  char v85; // dl
  char v86; // cl
  void *v87; // r12
  __int64 v88; // rax
  char v89; // si
  char v90; // si
  __int64 *v91; // r12
  char v92; // cl
  unsigned __int64 v93; // r14
  __int64 *v94; // r13
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // edx
  __int64 v98; // rdx
  __int64 v99; // rax
  char v100; // cl
  __int64 v101; // rax
  __int64 v102; // rdx
  char v103; // cl
  int v104; // eax
  __int64 v105; // rax
  char v106; // dl
  char v107; // cl
  __int64 v108; // rax
  char v109; // dl
  char v110; // cl
  void *v111; // r12
  __int64 *v112; // r14
  __int64 v113; // rax
  char v114; // dl
  __int64 *v115; // rbx
  __int64 *v116; // rbp
  __int64 v117; // rcx
  __int64 v118; // rax
  char v119; // dl
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned int v122; // edx
  __int64 v123; // rdx
  int v124; // edx
  char v125; // si
  int v126; // eax
  __int64 v127; // rax
  char v128; // si
  int v129; // edx
  char v130; // si
  __int64 v131; // rdx
  __int64 v132; // rax
  char v133; // si
  int v134; // eax
  __int64 v135; // rax
  char v136; // dl
  char v137; // cl
  __int64 v138; // rax
  char v139; // dl
  char v140; // cl
  _QWORD *v141; // rbx
  __int64 **v142; // rax
  __int64 *v143; // rcx
  int v144; // edx
  void *v145; // rbp
  void *v146; // rbp
  __int64 *v147; // r12
  __int64 *v148; // rbx
  __int64 v149; // r8
  char *v150; // rdx
  __int64 v151; // rax
  int v152; // esi
  unsigned int v153; // ecx
  __int64 v154; // r9
  char *v155; // rcx
  __int64 v156; // r9
  char *v157; // rdi
  char *v158; // rbp
  __int64 v159; // rax
  void *v160; // rbx
  __int64 v161; // rax
  void *v162; // r13
  void *v163; // rdi
  _QWORD *v164; // rsi
  __int64 *v165; // rax
  unsigned int v166; // ebx
  __int64 v167; // rax
  _QWORD *v168; // rax
  __int64 *v169; // rsi
  size_t v170; // rdx
  void *v171; // rbx
  __int64 v172; // rax
  __int64 *v173; // rax
  __int64 v174; // rdx
  char v175; // cl
  void *v176; // rbx
  char v177; // cl
  __int64 v178; // rdx
  __int64 v179; // rdx
  _QWORD *v180; // rbx
  _QWORD *v181; // rbx
  __int64 v182; // r13
  __int64 v183; // rax
  _QWORD *v184; // rbp
  void *v185; // r12
  __int64 v186; // rax
  __int64 *v187; // r14
  unsigned int v188; // ebp
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // rax
  _QWORD *v193; // rbx
  _QWORD *v194; // rax
  unsigned int v195; // r12d
  __int64 v196; // rax
  _QWORD *v197; // rax
  _QWORD *v198; // rsi
  size_t v199; // rdx
  void *v200; // r12
  void *v201; // rbp
  unsigned int v202; // ebp
  unsigned int v203; // edx
  unsigned int *v204; // rbx
  __int64 *v205; // r13
  __int64 v206; // rax
  _DWORD *v207; // rdx
  __int64 *v208; // rdi
  __int64 *k; // rax
  __int64 v210; // rcx
  char v211; // si
  __int64 v212; // rcx
  char v213; // si
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 *v216; // rbp
  __int64 *v217; // r12
  void *v218; // rbx
  __int64 v219; // rax
  _QWORD *v220; // rax
  unsigned int v221; // ebx
  unsigned int v222; // edx
  __int64 v223; // rax
  __int64 v224; // rdx
  _QWORD *v225; // r12
  __int64 v226; // rbx
  __int64 v227; // rax
  _QWORD *v228; // rsi
  _QWORD *m; // rax
  __int64 v230; // rcx
  char v231; // di
  __int64 v232; // rcx
  char v233; // di
  __int64 v234; // rcx
  __int64 v235; // rax
  _QWORD *v236; // rbx
  void *v237; // rbp
  __int64 v238; // rax
  __int64 *v239; // rbx
  __int64 *v240; // rbp
  void *v241; // r12
  __int64 v242; // rax
  __int64 v243; // rax
  char v244; // si
  char v245; // si
  unsigned __int64 v246; // r14
  __int64 *v247; // r12
  char v248; // cl
  __int64 *v249; // r13
  __int64 v250; // rax
  __int64 v251; // rax
  int v252; // edx
  __int64 v253; // rdx
  __int64 v254; // rax
  char v255; // cl
  __int64 v256; // rax
  __int64 v257; // rdx
  char v258; // cl
  int v259; // eax
  __int64 v260; // rax
  char v261; // dl
  char v262; // cl
  __int64 v263; // rax
  char v264; // dl
  char v265; // cl
  _QWORD *v266; // r12
  _QWORD *v267; // rbx
  __int64 v268; // rdi
  __int64 v269; // [rsp+0h] [rbp-F8h]
  __int64 *v270; // [rsp+8h] [rbp-F0h]
  __int64 **v271; // [rsp+8h] [rbp-F0h]
  unsigned int v272; // [rsp+8h] [rbp-F0h]
  _DWORD *v273; // [rsp+8h] [rbp-F0h]
  unsigned int v274; // [rsp+10h] [rbp-E8h]
  __int64 *v275; // [rsp+18h] [rbp-E0h]
  __int64 *v276; // [rsp+18h] [rbp-E0h]
  unsigned int v277; // [rsp+20h] [rbp-D8h]
  unsigned int v278; // [rsp+20h] [rbp-D8h]
  __int64 v279; // [rsp+20h] [rbp-D8h]
  unsigned int *v280; // [rsp+28h] [rbp-D0h]
  unsigned int v281; // [rsp+28h] [rbp-D0h]
  __int64 **v282; // [rsp+30h] [rbp-C8h]
  int v283; // [rsp+50h] [rbp-A8h] BYREF
  char v284; // [rsp+54h] [rbp-A4h]
  int v285; // [rsp+60h] [rbp-98h] BYREF
  char v286; // [rsp+64h] [rbp-94h]
  __int64 v287[4]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v288; // [rsp+90h] [rbp-68h] BYREF
  __int64 v289; // [rsp+98h] [rbp-60h] BYREF
  __int64 v290; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v291; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v292; // [rsp+B0h] [rbp-48h]

  v4 = a1[8];
  v269 = (__int64)a1;
  if ( !v4 )
    goto LABEL_209;
  v5 = 40LL * *(unsigned int *)(v4 - 4);
  a2 = (char *)(v4 + v5);
  v270 = (__int64 *)(v4 + v5);
  if ( v4 == v4 + v5 )
    goto LABEL_209;
  a1 = (_QWORD *)a1[8];
  _BitScanReverse64(&v6, 0xCCCCCCCCCCCCCCCDLL * (v5 >> 3));
  sub_35F010((__int64 *)v4, a2, 2LL * (int)v6);
  v7 = (__int64 *)(v4 + 40);
  if ( (unsigned __int64)v5 > 0x280 )
  {
    v48 = *v7;
    v275 = (__int64 *)(v4 + 640);
    if ( !*v7 )
      goto LABEL_44;
LABEL_26:
    for ( i = *(_DWORD *)(v48 - 4); ; i = 0 )
    {
      v50 = v7 + 5;
      v51 = *((_DWORD *)v7 + 2);
      v52 = v7[2];
      v53 = *((_DWORD *)v7 + 6);
      v54 = v7[4];
      v55 = *((_BYTE *)v7 + 12) & 1;
      v56 = (*((_BYTE *)v7 + 12) & 2) != 0;
      v57 = *((_BYTE *)v7 + 28) & 1;
      v58 = (*((_BYTE *)v7 + 28) & 2) != 0;
      if ( !*(_QWORD *)v4 || i >= *(_DWORD *)(*(_QWORD *)v4 - 4LL) )
        break;
      v288 = v48;
      v88 = (__int64)v7 - v4;
      v89 = BYTE4(v289);
      *(v50 - 5) = 0;
      LODWORD(v289) = v51;
      v90 = v55 | v89 & 0xFC;
      *(v50 - 3) = 0;
      v91 = v50;
      v290 = v52;
      BYTE4(v289) = v90 | (2 * v56);
      LODWORD(v291) = v53;
      v292 = v54;
      v92 = v57 | BYTE4(v291) & 0xFC;
      *(v50 - 1) = 0;
      BYTE4(v291) = (2 * v58) | v92;
      v93 = 0xCCCCCCCCCCCCCCCDLL * (v88 >> 3);
      if ( v88 > 0 )
      {
        do
        {
          v94 = v91 - 10;
          v95 = *(v91 - 5);
          v91 -= 5;
          if ( v95 )
            sub_186B220((void *)(v95 - 8));
          v96 = *(v91 - 5);
          v97 = *((_DWORD *)v91 - 8);
          *(v91 - 5) = 0;
          *v91 = v96;
          LODWORD(v96) = *((_DWORD *)v91 + 2);
          *((_DWORD *)v91 + 2) = v97;
          v98 = *(v91 - 3);
          *((_DWORD *)v91 - 8) = v96;
          v99 = v91[2];
          v91[2] = v98;
          *(v91 - 3) = v99;
          LOBYTE(v98) = *((_BYTE *)v91 + 12);
          *((_BYTE *)v91 + 12) = *((_BYTE *)v94 + 12) & 2 | v98 & 0xFD;
          LOBYTE(v99) = v98 & 2 | *((_BYTE *)v94 + 12) & 0xFD;
          *((_BYTE *)v94 + 12) = v99;
          v100 = *((_BYTE *)v91 + 12);
          *((_BYTE *)v91 + 12) = v99 & 1 | v100 & 0xFE;
          *((_BYTE *)v94 + 12) = v100 & 1 | *((_BYTE *)v94 + 12) & 0xFE;
          LODWORD(v98) = *((_DWORD *)v91 - 4);
          *((_DWORD *)v91 - 4) = *((_DWORD *)v91 + 6);
          v101 = v91[4];
          *((_DWORD *)v91 + 6) = v98;
          v102 = *(v91 - 1);
          *(v91 - 1) = v101;
          LOBYTE(v101) = *((_BYTE *)v91 + 28);
          v91[4] = v102;
          *((_BYTE *)v91 + 28) = *((_BYTE *)v94 + 28) & 2 | v101 & 0xFD;
          LOBYTE(v101) = v101 & 2 | *((_BYTE *)v94 + 28) & 0xFD;
          *((_BYTE *)v94 + 28) = v101;
          v103 = *((_BYTE *)v91 + 28) & 1;
          *((_BYTE *)v91 + 28) = v101 & 1 | *((_BYTE *)v91 + 28) & 0xFE;
          *((_BYTE *)v94 + 28) = v103 | *((_BYTE *)v94 + 28) & 0xFE;
          --v93;
        }
        while ( v93 );
      }
      if ( (__int64 *)v4 != &v288 )
      {
        if ( *(_QWORD *)v4 )
          sub_186B220((void *)(*(_QWORD *)v4 - 8LL));
        *(_QWORD *)v4 = 0;
        *(_QWORD *)v4 = v288;
        v288 = 0;
      }
      v104 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 8) = v289;
      LODWORD(v289) = v104;
      v105 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = v290;
      v290 = v105;
      v106 = *(_BYTE *)(v4 + 12);
      *(_BYTE *)(v4 + 12) = BYTE4(v289) & 2 | v106 & 0xFD;
      BYTE4(v289) = v106 & 2 | BYTE4(v289) & 0xFD;
      v107 = *(_BYTE *)(v4 + 12);
      *(_BYTE *)(v4 + 12) = v107 & 0xFE | BYTE4(v289) & 1;
      BYTE4(v289) = v107 & 1 | BYTE4(v289) & 0xFE;
      LODWORD(v105) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 24) = v291;
      LODWORD(v291) = v105;
      v108 = *(_QWORD *)(v4 + 32);
      *(_QWORD *)(v4 + 32) = v292;
      v292 = v108;
      v109 = *(_BYTE *)(v4 + 28);
      *(_BYTE *)(v4 + 28) = BYTE4(v291) & 2 | v109 & 0xFD;
      BYTE4(v291) = v109 & 2 | BYTE4(v291) & 0xFD;
      v110 = *(_BYTE *)(v4 + 28) & 1;
      *(_BYTE *)(v4 + 28) = *(_BYTE *)(v4 + 28) & 0xFE | BYTE4(v291) & 1;
      v111 = qword_1C7F2C0;
      BYTE4(v291) = v110 | BYTE4(v291) & 0xFE;
      sub_182CBA0(qword_1C7F2C0, &v289);
      sub_182CBA0(v111, &v291);
      if ( v288 )
      {
        sub_186B220((void *)(v288 - 8));
        if ( v275 != v50 )
          goto LABEL_43;
LABEL_55:
        v112 = (__int64 *)(v4 + 640);
        while ( 2 )
        {
          v113 = *v112;
          v114 = *((_BYTE *)v112 + 12);
          *v112 = 0;
          v115 = v112 - 5;
          v116 = v112;
          v288 = v113;
          v117 = v113;
          LODWORD(v289) = *((_DWORD *)v112 + 2);
          BYTE4(v289) = v114 & 3 | BYTE4(v289) & 0xFC;
          v118 = v112[2];
          v112[2] = 0;
          v290 = v118;
          v119 = *((_BYTE *)v112 + 28);
          LODWORD(v291) = *((_DWORD *)v112 + 6);
          BYTE4(v291) = v119 & 3 | BYTE4(v291) & 0xFC;
          v120 = v112[4];
          v112[4] = 0;
          v292 = v120;
          if ( v117 )
          {
LABEL_57:
            v121 = *v115;
            v122 = *(_DWORD *)(v117 - 4);
            if ( *v115 )
              goto LABEL_58;
          }
          else
          {
            while ( 1 )
            {
              v121 = *v115;
              v122 = 0;
              if ( !*v115 )
                break;
LABEL_58:
              if ( v122 >= *(_DWORD *)(v121 - 4) )
                break;
              v123 = v115[5];
              if ( v123 )
              {
                sub_186B220((void *)(v123 - 8));
                v121 = *v115;
              }
              v124 = *((_DWORD *)v115 + 2);
              v125 = *((_BYTE *)v115 + 12);
              v115[5] = v121;
              v115 -= 5;
              v126 = *((_DWORD *)v115 + 22);
              v115[5] = 0;
              v117 = v288;
              *((_DWORD *)v115 + 22) = v124;
              *((_DWORD *)v115 + 12) = v126;
              v127 = v115[12];
              v115[12] = v115[7];
              v115[7] = v127;
              LOBYTE(v124) = *((_BYTE *)v116 + 12);
              *((_BYTE *)v116 + 12) = v125 & 2 | v124 & 0xFD;
              LOBYTE(v127) = v124 & 2 | *((_BYTE *)v115 + 52) & 0xFD;
              *((_BYTE *)v115 + 52) = v127;
              v128 = *((_BYTE *)v116 + 12);
              *((_BYTE *)v116 + 12) = v127 & 1 | v128 & 0xFE;
              v129 = *((_DWORD *)v115 + 16);
              LOBYTE(v127) = v128 & 1 | *((_BYTE *)v115 + 52) & 0xFE;
              v130 = *((_BYTE *)v115 + 68);
              *((_BYTE *)v115 + 52) = v127;
              LODWORD(v127) = *((_DWORD *)v115 + 26);
              *((_DWORD *)v115 + 26) = v129;
              v131 = v115[9];
              *((_DWORD *)v115 + 16) = v127;
              v132 = v115[14];
              v115[14] = v131;
              v115[9] = v132;
              LOBYTE(v131) = *((_BYTE *)v116 + 28);
              *((_BYTE *)v116 + 28) = v130 & 2 | v131 & 0xFD;
              LOBYTE(v132) = v131 & 2 | *((_BYTE *)v115 + 68) & 0xFD;
              *((_BYTE *)v115 + 68) = v132;
              v133 = *((_BYTE *)v116 + 28) & 1;
              *((_BYTE *)v116 + 28) = v132 & 1 | *((_BYTE *)v116 + 28) & 0xFE;
              *((_BYTE *)v115 + 68) = v133 | *((_BYTE *)v115 + 68) & 0xFE;
              v116 = v115 + 5;
              if ( v117 )
                goto LABEL_57;
            }
          }
          if ( v116 != &v288 )
          {
            if ( *v116 )
              sub_186B220((void *)(*v116 - 8));
            *v116 = 0;
            *v116 = v288;
            v288 = 0;
          }
          v134 = *((_DWORD *)v116 + 2);
          *((_DWORD *)v116 + 2) = v289;
          LODWORD(v289) = v134;
          v135 = v116[2];
          v116[2] = v290;
          v290 = v135;
          v136 = *((_BYTE *)v116 + 12);
          *((_BYTE *)v116 + 12) = BYTE4(v289) & 2 | v136 & 0xFD;
          BYTE4(v289) = v136 & 2 | BYTE4(v289) & 0xFD;
          v137 = *((_BYTE *)v116 + 12);
          *((_BYTE *)v116 + 12) = BYTE4(v289) & 1 | v137 & 0xFE;
          BYTE4(v289) = v137 & 1 | BYTE4(v289) & 0xFE;
          LODWORD(v135) = *((_DWORD *)v116 + 6);
          *((_DWORD *)v116 + 6) = v291;
          LODWORD(v291) = v135;
          v138 = v116[4];
          v116[4] = v292;
          v292 = v138;
          v139 = *((_BYTE *)v116 + 28);
          *((_BYTE *)v116 + 28) = BYTE4(v291) & 2 | v139 & 0xFD;
          BYTE4(v291) = v139 & 2 | BYTE4(v291) & 0xFD;
          v140 = *((_BYTE *)v116 + 28) & 1;
          *((_BYTE *)v116 + 28) = BYTE4(v291) & 1 | *((_BYTE *)v116 + 28) & 0xFE;
          v141 = qword_1C7F2C0;
          BYTE4(v291) = v140 | BYTE4(v291) & 0xFE;
          sub_182CBA0(qword_1C7F2C0, &v289);
          a2 = (char *)&v291;
          a1 = v141;
          sub_182CBA0(v141, &v291);
          if ( v288 )
          {
            a1 = (_QWORD *)(v288 - 8);
            v112 += 5;
            sub_186B220((void *)(v288 - 8));
            if ( v270 == v112 )
              goto LABEL_69;
          }
          else
          {
            v112 += 5;
            if ( v270 == v112 )
              goto LABEL_69;
          }
          continue;
        }
      }
LABEL_42:
      if ( v275 == v50 )
        goto LABEL_55;
LABEL_43:
      v7 = v50;
      v48 = *v50;
      if ( *v50 )
        goto LABEL_26;
LABEL_44:
      ;
    }
    v59 = BYTE4(v289);
    v288 = v48;
    *(v50 - 5) = 0;
    LODWORD(v289) = v51;
    v60 = v55 | v59 & 0xFC;
    *(v50 - 3) = 0;
    v61 = v50 - 10;
    v290 = v52;
    v62 = (__int64)(v50 - 5);
    BYTE4(v289) = (2 * v56) | v60;
    v63 = 2 * v58;
    LODWORD(v291) = v53;
    v292 = v54;
    v64 = v57 | BYTE4(v291) & 0xFC;
    *(v50 - 1) = 0;
    v65 = v64 | v63;
    v66 = v288;
    BYTE4(v291) = v65;
    if ( !v288 )
      goto LABEL_35;
LABEL_30:
    v67 = *v61;
    v68 = *(_DWORD *)(v66 - 4);
    if ( *v61 )
    {
      while ( v68 < *(_DWORD *)(v67 - 4) )
      {
        v69 = v61[5];
        if ( v69 )
        {
          sub_186B220((void *)(v69 - 8));
          v67 = *v61;
        }
        v70 = *((_DWORD *)v61 + 2);
        v61[5] = v67;
        v61 -= 5;
        v71 = *((_DWORD *)v61 + 22);
        v72 = *((_BYTE *)v61 + 52);
        v61[5] = 0;
        v66 = v288;
        *((_DWORD *)v61 + 22) = v70;
        *((_DWORD *)v61 + 12) = v71;
        v73 = v61[12];
        v61[12] = v61[7];
        v61[7] = v73;
        LOBYTE(v70) = *(_BYTE *)(v62 + 12);
        *(_BYTE *)(v62 + 12) = v72 & 2 | v70 & 0xFD;
        LOBYTE(v73) = v70 & 2 | *((_BYTE *)v61 + 52) & 0xFD;
        *((_BYTE *)v61 + 52) = v73;
        v74 = *(_BYTE *)(v62 + 12);
        *(_BYTE *)(v62 + 12) = v73 & 1 | v74 & 0xFE;
        v75 = *((_DWORD *)v61 + 16);
        LOBYTE(v73) = v74 & 1 | *((_BYTE *)v61 + 52) & 0xFE;
        v76 = *((_BYTE *)v61 + 68);
        *((_BYTE *)v61 + 52) = v73;
        LODWORD(v73) = *((_DWORD *)v61 + 26);
        *((_DWORD *)v61 + 26) = v75;
        v77 = v61[9];
        *((_DWORD *)v61 + 16) = v73;
        v78 = v61[14];
        v61[14] = v77;
        v61[9] = v78;
        LOBYTE(v77) = *(_BYTE *)(v62 + 28);
        *(_BYTE *)(v62 + 28) = v76 & 2 | v77 & 0xFD;
        LOBYTE(v78) = v77 & 2 | *((_BYTE *)v61 + 68) & 0xFD;
        *((_BYTE *)v61 + 68) = v78;
        v79 = *(_BYTE *)(v62 + 28) & 1;
        *(_BYTE *)(v62 + 28) = v78 & 1 | *(_BYTE *)(v62 + 28) & 0xFE;
        *((_BYTE *)v61 + 68) = v79 | *((_BYTE *)v61 + 68) & 0xFE;
        v62 = (__int64)(v61 + 5);
        if ( v66 )
          goto LABEL_30;
LABEL_35:
        v67 = *v61;
        v68 = 0;
        if ( !*v61 )
          break;
      }
    }
    if ( (__int64 *)v62 != &v288 )
    {
      if ( *(_QWORD *)v62 )
        sub_186B220((void *)(*(_QWORD *)v62 - 8LL));
      *(_QWORD *)v62 = 0;
      *(_QWORD *)v62 = v288;
      v288 = 0;
    }
    v80 = *(_DWORD *)(v62 + 8);
    *(_DWORD *)(v62 + 8) = v289;
    LODWORD(v289) = v80;
    v81 = *(_QWORD *)(v62 + 16);
    *(_QWORD *)(v62 + 16) = v290;
    v290 = v81;
    v82 = *(_BYTE *)(v62 + 12);
    *(_BYTE *)(v62 + 12) = BYTE4(v289) & 2 | v82 & 0xFD;
    BYTE4(v289) = v82 & 2 | BYTE4(v289) & 0xFD;
    v83 = *(_BYTE *)(v62 + 12);
    *(_BYTE *)(v62 + 12) = BYTE4(v289) & 1 | v83 & 0xFE;
    BYTE4(v289) = v83 & 1 | BYTE4(v289) & 0xFE;
    LODWORD(v81) = *(_DWORD *)(v62 + 24);
    *(_DWORD *)(v62 + 24) = v291;
    LODWORD(v291) = v81;
    v84 = *(_QWORD *)(v62 + 32);
    *(_QWORD *)(v62 + 32) = v292;
    v292 = v84;
    v85 = *(_BYTE *)(v62 + 28);
    *(_BYTE *)(v62 + 28) = BYTE4(v291) & 2 | v85 & 0xFD;
    BYTE4(v291) = v85 & 2 | BYTE4(v291) & 0xFD;
    v86 = *(_BYTE *)(v62 + 28) & 1;
    *(_BYTE *)(v62 + 28) = BYTE4(v291) & 1 | *(_BYTE *)(v62 + 28) & 0xFE;
    v87 = qword_1C7F2C0;
    BYTE4(v291) = v86 | BYTE4(v291) & 0xFE;
    sub_182CBA0(qword_1C7F2C0, &v289);
    sub_182CBA0(v87, &v291);
    if ( v288 )
      sub_186B220((void *)(v288 - 8));
    goto LABEL_42;
  }
  if ( v5 != 40 )
  {
    v8 = *v7;
    if ( !*v7 )
      goto LABEL_24;
LABEL_6:
    for ( j = *(_DWORD *)(v8 - 4); ; j = 0 )
    {
      v10 = v7 + 5;
      v11 = *((_DWORD *)v7 + 2);
      v12 = v7[2];
      v13 = *((_DWORD *)v7 + 6);
      v14 = v7[4];
      v15 = *((_BYTE *)v7 + 12) & 1;
      v16 = (*((_BYTE *)v7 + 12) & 2) != 0;
      v17 = *((_BYTE *)v7 + 28) & 1;
      v18 = (*((_BYTE *)v7 + 28) & 2) != 0;
      if ( !*(_QWORD *)v4 || j >= *(_DWORD *)(*(_QWORD *)v4 - 4LL) )
        break;
      v288 = v8;
      v243 = (__int64)v7 - v4;
      v244 = BYTE4(v289);
      *(v10 - 5) = 0;
      LODWORD(v289) = v11;
      v245 = v15 | v244 & 0xFC;
      *(v10 - 3) = 0;
      v246 = 0xCCCCCCCCCCCCCCCDLL * (v243 >> 3);
      v247 = v10;
      v290 = v12;
      BYTE4(v289) = v245 | (2 * v16);
      LODWORD(v291) = v13;
      v292 = v14;
      v248 = v17 | BYTE4(v291) & 0xFC;
      *(v10 - 1) = 0;
      BYTE4(v291) = (2 * v18) | v248;
      if ( v243 > 0 )
      {
        do
        {
          v249 = v247 - 10;
          v250 = *(v247 - 5);
          v247 -= 5;
          if ( v250 )
            sub_186B220((void *)(v250 - 8));
          v251 = *(v247 - 5);
          v252 = *((_DWORD *)v247 - 8);
          *(v247 - 5) = 0;
          *v247 = v251;
          LODWORD(v251) = *((_DWORD *)v247 + 2);
          *((_DWORD *)v247 + 2) = v252;
          v253 = *(v247 - 3);
          *((_DWORD *)v247 - 8) = v251;
          v254 = v247[2];
          v247[2] = v253;
          *(v247 - 3) = v254;
          LOBYTE(v253) = *((_BYTE *)v247 + 12);
          *((_BYTE *)v247 + 12) = *((_BYTE *)v249 + 12) & 2 | v253 & 0xFD;
          LOBYTE(v254) = v253 & 2 | *((_BYTE *)v249 + 12) & 0xFD;
          *((_BYTE *)v249 + 12) = v254;
          v255 = *((_BYTE *)v247 + 12);
          *((_BYTE *)v247 + 12) = v254 & 1 | v255 & 0xFE;
          *((_BYTE *)v249 + 12) = v255 & 1 | *((_BYTE *)v249 + 12) & 0xFE;
          LODWORD(v253) = *((_DWORD *)v247 - 4);
          *((_DWORD *)v247 - 4) = *((_DWORD *)v247 + 6);
          v256 = v247[4];
          *((_DWORD *)v247 + 6) = v253;
          v257 = *(v247 - 1);
          *(v247 - 1) = v256;
          LOBYTE(v256) = *((_BYTE *)v247 + 28);
          v247[4] = v257;
          *((_BYTE *)v247 + 28) = *((_BYTE *)v249 + 28) & 2 | v256 & 0xFD;
          LOBYTE(v256) = v256 & 2 | *((_BYTE *)v249 + 28) & 0xFD;
          *((_BYTE *)v249 + 28) = v256;
          v258 = *((_BYTE *)v247 + 28) & 1;
          *((_BYTE *)v247 + 28) = v256 & 1 | *((_BYTE *)v247 + 28) & 0xFE;
          *((_BYTE *)v249 + 28) = v258 | *((_BYTE *)v249 + 28) & 0xFE;
          --v246;
        }
        while ( v246 );
      }
      if ( (__int64 *)v4 != &v288 )
      {
        if ( *(_QWORD *)v4 )
          sub_186B220((void *)(*(_QWORD *)v4 - 8LL));
        *(_QWORD *)v4 = 0;
        *(_QWORD *)v4 = v288;
        v288 = 0;
      }
      v259 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 8) = v289;
      LODWORD(v289) = v259;
      v260 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = v290;
      v290 = v260;
      v261 = *(_BYTE *)(v4 + 12);
      *(_BYTE *)(v4 + 12) = BYTE4(v289) & 2 | v261 & 0xFD;
      BYTE4(v289) = v261 & 2 | BYTE4(v289) & 0xFD;
      v262 = *(_BYTE *)(v4 + 12);
      *(_BYTE *)(v4 + 12) = v262 & 0xFE | BYTE4(v289) & 1;
      BYTE4(v289) = v262 & 1 | BYTE4(v289) & 0xFE;
      LODWORD(v260) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 24) = v291;
      LODWORD(v291) = v260;
      v263 = *(_QWORD *)(v4 + 32);
      *(_QWORD *)(v4 + 32) = v292;
      v292 = v263;
      v264 = *(_BYTE *)(v4 + 28);
      *(_BYTE *)(v4 + 28) = BYTE4(v291) & 2 | v264 & 0xFD;
      BYTE4(v291) = v264 & 2 | BYTE4(v291) & 0xFD;
      v265 = *(_BYTE *)(v4 + 28) & 1;
      *(_BYTE *)(v4 + 28) = *(_BYTE *)(v4 + 28) & 0xFE | BYTE4(v291) & 1;
      v266 = qword_1C7F2C0;
      BYTE4(v291) = v265 | BYTE4(v291) & 0xFE;
      sub_182CBA0(qword_1C7F2C0, &v289);
      a2 = (char *)&v291;
      a1 = v266;
      sub_182CBA0(v266, &v291);
      if ( v288 )
      {
LABEL_21:
        a1 = (_QWORD *)(v288 - 8);
        sub_186B220((void *)(v288 - 8));
      }
LABEL_22:
      if ( v270 == v10 )
        goto LABEL_69;
      v7 = v10;
      v8 = *v10;
      if ( *v10 )
        goto LABEL_6;
LABEL_24:
      ;
    }
    v19 = BYTE4(v289);
    v288 = v8;
    *(v10 - 5) = 0;
    LODWORD(v289) = v11;
    v20 = v15 | v19 & 0xFC;
    *(v10 - 3) = 0;
    v21 = v10 - 10;
    v290 = v12;
    v22 = (__int64)(v10 - 5);
    BYTE4(v289) = (2 * v16) | v20;
    v23 = 2 * v18;
    LODWORD(v291) = v13;
    v292 = v14;
    v24 = v17 | BYTE4(v291) & 0xFC;
    *(v10 - 1) = 0;
    v25 = v24 | v23;
    v26 = v288;
    BYTE4(v291) = v25;
    if ( !v288 )
      goto LABEL_15;
LABEL_10:
    v27 = *v21;
    v28 = *(_DWORD *)(v26 - 4);
    if ( *v21 )
    {
      while ( v28 < *(_DWORD *)(v27 - 4) )
      {
        v29 = v21[5];
        if ( v29 )
        {
          sub_186B220((void *)(v29 - 8));
          v27 = *v21;
        }
        v30 = *((_DWORD *)v21 + 2);
        v21[5] = v27;
        v21 -= 5;
        v31 = *((_DWORD *)v21 + 22);
        v32 = *((_BYTE *)v21 + 52);
        v21[5] = 0;
        v26 = v288;
        *((_DWORD *)v21 + 22) = v30;
        *((_DWORD *)v21 + 12) = v31;
        v33 = v21[12];
        v21[12] = v21[7];
        v21[7] = v33;
        LOBYTE(v30) = *(_BYTE *)(v22 + 12);
        *(_BYTE *)(v22 + 12) = v32 & 2 | v30 & 0xFD;
        LOBYTE(v33) = v30 & 2 | *((_BYTE *)v21 + 52) & 0xFD;
        *((_BYTE *)v21 + 52) = v33;
        v34 = *(_BYTE *)(v22 + 12);
        *(_BYTE *)(v22 + 12) = v33 & 1 | v34 & 0xFE;
        v35 = *((_DWORD *)v21 + 16);
        LOBYTE(v33) = v34 & 1 | *((_BYTE *)v21 + 52) & 0xFE;
        v36 = *((_BYTE *)v21 + 68);
        *((_BYTE *)v21 + 52) = v33;
        LODWORD(v33) = *((_DWORD *)v21 + 26);
        *((_DWORD *)v21 + 26) = v35;
        v37 = v21[9];
        *((_DWORD *)v21 + 16) = v33;
        v38 = v21[14];
        v21[14] = v37;
        v21[9] = v38;
        LOBYTE(v37) = *(_BYTE *)(v22 + 28);
        *(_BYTE *)(v22 + 28) = v36 & 2 | v37 & 0xFD;
        LOBYTE(v38) = v37 & 2 | *((_BYTE *)v21 + 68) & 0xFD;
        *((_BYTE *)v21 + 68) = v38;
        v39 = *(_BYTE *)(v22 + 28) & 1;
        *(_BYTE *)(v22 + 28) = v38 & 1 | *(_BYTE *)(v22 + 28) & 0xFE;
        *((_BYTE *)v21 + 68) = v39 | *((_BYTE *)v21 + 68) & 0xFE;
        v22 = (__int64)(v21 + 5);
        if ( v26 )
          goto LABEL_10;
LABEL_15:
        v27 = *v21;
        v28 = 0;
        if ( !*v21 )
          break;
      }
    }
    if ( (__int64 *)v22 != &v288 )
    {
      if ( *(_QWORD *)v22 )
        sub_186B220((void *)(*(_QWORD *)v22 - 8LL));
      *(_QWORD *)v22 = 0;
      *(_QWORD *)v22 = v288;
      v288 = 0;
    }
    v40 = *(_DWORD *)(v22 + 8);
    *(_DWORD *)(v22 + 8) = v289;
    LODWORD(v289) = v40;
    v41 = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v22 + 16) = v290;
    v290 = v41;
    v42 = *(_BYTE *)(v22 + 12);
    *(_BYTE *)(v22 + 12) = BYTE4(v289) & 2 | v42 & 0xFD;
    BYTE4(v289) = v42 & 2 | BYTE4(v289) & 0xFD;
    v43 = *(_BYTE *)(v22 + 12);
    *(_BYTE *)(v22 + 12) = BYTE4(v289) & 1 | v43 & 0xFE;
    BYTE4(v289) = v43 & 1 | BYTE4(v289) & 0xFE;
    LODWORD(v41) = *(_DWORD *)(v22 + 24);
    *(_DWORD *)(v22 + 24) = v291;
    LODWORD(v291) = v41;
    v44 = *(_QWORD *)(v22 + 32);
    *(_QWORD *)(v22 + 32) = v292;
    v292 = v44;
    v45 = *(_BYTE *)(v22 + 28);
    *(_BYTE *)(v22 + 28) = BYTE4(v291) & 2 | v45 & 0xFD;
    BYTE4(v291) = v45 & 2 | BYTE4(v291) & 0xFD;
    v46 = *(_BYTE *)(v22 + 28) & 1;
    *(_BYTE *)(v22 + 28) = BYTE4(v291) & 1 | *(_BYTE *)(v22 + 28) & 0xFE;
    v47 = qword_1C7F2C0;
    BYTE4(v291) = v46 | BYTE4(v291) & 0xFE;
    sub_182CBA0(qword_1C7F2C0, &v289);
    a2 = (char *)&v291;
    a1 = v47;
    sub_182CBA0(v47, &v291);
    if ( v288 )
      goto LABEL_21;
    goto LABEL_22;
  }
LABEL_69:
  v142 = *(__int64 ***)(v269 + 64);
  if ( v142 )
  {
    v282 = &v142[5 * *((unsigned int *)v142 - 1)];
    if ( v142 != v282 )
    {
      v271 = *(__int64 ***)(v269 + 64);
      v276 = nullptr;
      while ( 1 )
      {
        v143 = *v271;
        if ( *v271 )
          v144 = *((_DWORD *)v143 - 1);
        else
          v144 = 0;
        sub_361840((__int64)&v283, v269, v144, v143);
        v288 = 0;
        v289 = 0;
        v290 = 1;
        v291 = 0;
        sub_182CBA0(qword_1C7F2C0, &v290);
        BYTE4(v290) &= ~1u;
        v145 = qword_1C7F2C0;
        LODWORD(v290) = 1;
        if ( (v284 & 1) != 0 || (v288 & 0x100000000LL) != 0 )
        {
          if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v283, &v288) )
          {
LABEL_140:
            if ( (v286 & 1) != 0 || (v290 & 0x100000000LL) != 0 )
            {
              if ( !(unsigned int)sub_182C7B0(v145, &v285, &v290) )
              {
LABEL_143:
                v201 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v288);
                sub_182CBA0(v201, &v290);
                if ( !*v271 || !*((_DWORD *)*v271 - 1) )
                  goto LABEL_100;
                goto LABEL_111;
              }
            }
            else if ( v285 == (_DWORD)v290 )
            {
              goto LABEL_143;
            }
          }
        }
        else if ( v283 == (_DWORD)v288 )
        {
          goto LABEL_140;
        }
        v146 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v288);
        sub_182CBA0(v146, &v290);
        v147 = *v271;
        if ( !*v271 )
          goto LABEL_100;
        v148 = &v147[*((unsigned int *)v147 - 1)];
        if ( v148 == v147 )
          goto LABEL_100;
        do
        {
          v149 = *v147;
          v289 = 0;
          v291 = 1;
          v150 = *(char **)(v269 + 72);
          v151 = *(unsigned int *)(v269 + 80);
          v288 = v149;
          v290 = 0;
          v152 = *(_DWORD *)(v149 + 12);
          v292 = 0;
          v153 = v151 - 1;
          v151 *= 40;
          v154 = 5LL * (v152 & v153);
          v155 = &v150[v151];
          v156 = 8 * v154;
          v157 = &v150[v156];
          if ( v156 == v151 )
          {
LABEL_87:
            while ( v157 != v150 )
            {
              v161 = *(_QWORD *)v150;
              if ( *(_QWORD *)v150 > 1u )
              {
                if ( *(_DWORD *)(v161 + 12) == v152 && v149 == v161 )
                {
                  v158 = v150;
                  goto LABEL_96;
                }
              }
              else if ( !v161 )
              {
                break;
              }
              v150 += 40;
            }
LABEL_86:
            v160 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v289);
            sub_182CBA0(v160, &v291);
            BUG();
          }
          v158 = &v150[v156];
          while ( 1 )
          {
            v159 = *(_QWORD *)v158;
            if ( *(_QWORD *)v158 > 1u )
              break;
            if ( !v159 )
              goto LABEL_86;
LABEL_83:
            v158 += 40;
            if ( v155 == v158 )
              goto LABEL_87;
          }
          if ( *(_DWORD *)(v159 + 12) != v152 || v149 != v159 )
            goto LABEL_83;
LABEL_96:
          v162 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v289);
          sub_182CBA0(v162, &v291);
          v163 = qword_1C7F2C0;
          v164 = v158 + 8;
          if ( (v158[28] & 1) != 0 || *((_DWORD *)v158 + 6) != 1 || (v286 & 1) != 0 || v285 != 1 )
          {
            sub_1852000(qword_1C7F2C0, v164, &v283);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v164, &v283);
            sub_182CBA0(v163, v158 + 24);
            v158[28] &= ~1u;
            *((_DWORD *)v158 + 6) = 1;
          }
          ++v147;
        }
        while ( v148 != v147 );
LABEL_100:
        v288 = 0;
        v165 = *v271;
        if ( *v271 )
        {
          v166 = *((_DWORD *)v165 - 1);
          v167 = *((unsigned int *)v165 - 2);
          v277 = v167;
          v168 = (_QWORD *)sub_186B270(8 * v167 + 8);
          v288 = (__int64)(v168 + 1);
          v169 = *v271;
          *v168 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v277), _mm_cvtsi32_si128(v166)).m128i_u64[0];
          if ( v169 )
          {
            v170 = 8LL * *((unsigned int *)v169 - 1);
            if ( v170 <= 8 )
            {
              if ( v170 == 8 )
                v168[1] = *v169;
            }
            else
            {
              memmove(v168 + 1, v169, v170);
            }
          }
        }
        v289 = 0;
        v171 = qword_1C7F2C0;
        v290 = 0;
        v291 = 1;
        v292 = 0;
        if ( (v284 & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v289, &v283);
          if ( (v286 & 1) != 0 )
            goto LABEL_161;
LABEL_106:
          BYTE4(v291) &= ~1u;
          LODWORD(v291) = v285;
          if ( v276 )
            goto LABEL_107;
LABEL_162:
          v220 = (_QWORD *)sub_186B270(0x58u);
          *v220 = 2;
          v173 = v220 + 1;
          v276 = v173;
        }
        else
        {
          LODWORD(v289) = v283;
          if ( (v286 & 1) == 0 )
            goto LABEL_106;
LABEL_161:
          sub_182C690(v171, &v291, &v285);
          if ( !v276 )
            goto LABEL_162;
LABEL_107:
          v172 = *((unsigned int *)v276 - 1);
          if ( (_DWORD)v172 == *((_DWORD *)v276 - 2) )
          {
            v202 = (unsigned int)(3 * v172 + 1) >> 1;
            v278 = v202;
            v203 = 40 * v202 + 8;
            if ( 40 * (int)v172 + 8 >= v203 || (unsigned int)v172 >= v202 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v287, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v287);
              sub_233E40((__int64)v287);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v204 = (unsigned int *)sub_186B270(v203);
            v205 = (__int64 *)(v204 + 2);
            v206 = *((unsigned int *)v276 - 1);
            v207 = v204 + 2;
            v204[1] = v206;
            v208 = &v276[5 * v206];
            for ( k = v276; v208 != k; *((_QWORD *)v207 - 1) = v214 )
            {
              v210 = *k;
              v211 = *((_BYTE *)k + 12);
              k += 5;
              v207 += 10;
              *(k - 5) = 0;
              *((_QWORD *)v207 - 5) = v210;
              *(v207 - 8) = *((_DWORD *)k - 8);
              *((_BYTE *)v207 - 28) = v211 & 3 | *(_BYTE *)(v207 - 7) & 0xFC;
              v212 = *(k - 3);
              *(k - 3) = 0;
              *((_QWORD *)v207 - 3) = v212;
              v213 = *((_BYTE *)k - 12);
              *(v207 - 4) = *((_DWORD *)k - 4);
              *((_BYTE *)v207 - 12) = v213 & 3 | *(_BYTE *)(v207 - 3) & 0xFC;
              v214 = *(k - 1);
              *(k - 1) = 0;
            }
            v215 = *((unsigned int *)v276 - 1);
            if ( (_DWORD)v215 )
            {
              v216 = v276;
              v280 = v204;
              v217 = &v276[5 * v215];
              do
              {
                while ( 1 )
                {
                  v218 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v216 + 1);
                  sub_182CBA0(v218, v216 + 3);
                  v219 = *v216;
                  if ( !*v216 )
                    break;
                  v216 += 5;
                  sub_186B220((void *)(v219 - 8));
                  if ( v216 == v217 )
                    goto LABEL_154;
                }
                v216 += 5;
              }
              while ( v217 != v216 );
LABEL_154:
              v204 = v280;
            }
            sub_186B220(v276 - 1);
            v276 = v205;
            *v204 = v278;
            v173 = &v205[5 * v204[1]];
          }
          else
          {
            v173 = &v276[5 * v172];
          }
        }
        v174 = v288;
        v175 = BYTE4(v289);
        v288 = 0;
        v176 = qword_1C7F2C0;
        *v173 = v174;
        *((_DWORD *)v173 + 2) = v289;
        LOBYTE(v174) = v175 & 3 | *((_BYTE *)v173 + 12) & 0xFC;
        v177 = BYTE4(v291);
        *((_BYTE *)v173 + 12) = v174;
        v178 = v290;
        v290 = 0;
        v173[2] = v178;
        *((_DWORD *)v173 + 6) = v291;
        *((_BYTE *)v173 + 28) = v177 & 3 | *((_BYTE *)v173 + 28) & 0xFC;
        v179 = v292;
        v292 = 0;
        v173[4] = v179;
        ++*((_DWORD *)v276 - 1);
        sub_182CBA0(v176, &v289);
        sub_182CBA0(v176, &v291);
        if ( v288 )
          sub_186B220((void *)(v288 - 8));
LABEL_111:
        v180 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v283);
        a2 = (char *)&v285;
        a1 = v180;
        sub_182CBA0(v180, &v285);
        v271 += 5;
        if ( v282 == v271 )
        {
          if ( (unsigned int)sub_180B130(v180) <= 2 )
            goto LABEL_113;
          goto LABEL_201;
        }
      }
    }
  }
LABEL_209:
  if ( (unsigned int)sub_180B130(a1) <= 2 )
  {
    v181 = *(_QWORD **)(v269 + 64);
    v182 = v269 + 64;
    if ( !v181 )
      return v182;
    v276 = nullptr;
    v183 = *((unsigned int *)v181 - 1);
    if ( !(_DWORD)v183 )
      return v182;
    goto LABEL_115;
  }
  v276 = nullptr;
LABEL_201:
  if ( (unsigned __int8)sub_186A530() )
  {
    sub_186A4C0();
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v268 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v268, ")\n");
  }
  else
  {
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
LABEL_113:
  v181 = *(_QWORD **)(v269 + 64);
  v182 = v269 + 64;
  if ( v181 )
  {
    v183 = *((unsigned int *)v181 - 1);
    if ( !(_DWORD)v183 )
    {
LABEL_119:
      *((_DWORD *)v181 - 1) = 0;
      if ( !v276 )
        return v182;
      v187 = v276;
      v188 = 0;
      if ( !*((_DWORD *)v276 - 1) )
        goto LABEL_121;
      while ( 1 )
      {
        v192 = *((unsigned int *)v181 - 1);
        if ( (_DWORD)v192 == *((_DWORD *)v181 - 2) )
        {
          v221 = (unsigned int)(3 * v192 + 1) >> 1;
          v281 = v221;
          v222 = 40 * v221 + 8;
          if ( 40 * (int)v192 + 8 >= v222 || (unsigned int)v192 >= v221 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v288, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, &v288);
            sub_233E40((__int64)&v288);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v223 = sub_186B270(v222);
          v224 = v223 + 8;
          v273 = (_DWORD *)v223;
          v279 = v223 + 8;
          v225 = *(_QWORD **)(v269 + 64);
          v226 = v223;
          if ( v225 )
          {
            v227 = *((unsigned int *)v225 - 1);
            *(_DWORD *)(v226 + 4) = v227;
            v228 = &v225[5 * v227];
            for ( m = v225; v228 != m; *(_QWORD *)(v224 - 8) = v234 )
            {
              v230 = *m;
              v231 = *((_BYTE *)m + 12);
              m += 5;
              v224 += 40;
              *(m - 5) = 0;
              *(_QWORD *)(v224 - 40) = v230;
              *(_DWORD *)(v224 - 32) = *((_DWORD *)m - 8);
              *(_BYTE *)(v224 - 28) = v231 & 3 | *(_BYTE *)(v224 - 28) & 0xFC;
              v232 = *(m - 3);
              *(m - 3) = 0;
              *(_QWORD *)(v224 - 24) = v232;
              v233 = *((_BYTE *)m - 12);
              *(_DWORD *)(v224 - 16) = *((_DWORD *)m - 4);
              *(_BYTE *)(v224 - 12) = v233 & 3 | *(_BYTE *)(v224 - 12) & 0xFC;
              v234 = *(m - 1);
              *(m - 1) = 0;
            }
            v235 = *((unsigned int *)v225 - 1);
            if ( (_DWORD)v235 )
            {
              v274 = v188;
              v236 = &v225[5 * v235];
              do
              {
                while ( 1 )
                {
                  v237 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v225 + 1);
                  sub_182CBA0(v237, v225 + 3);
                  v238 = *v225;
                  if ( !*v225 )
                    break;
                  v225 += 5;
                  sub_186B220((void *)(v238 - 8));
                  if ( v236 == v225 )
                    goto LABEL_175;
                }
                v225 += 5;
              }
              while ( v225 != v236 );
LABEL_175:
              v188 = v274;
              v225 = *(_QWORD **)(v269 + 64);
            }
            sub_186B220(v225 - 1);
            v193 = (_QWORD *)(v279 + 40LL * (unsigned int)v273[1]);
          }
          else
          {
            *(_DWORD *)(v223 + 4) = 0;
            v193 = (_QWORD *)(v223 + 8);
          }
          *(_QWORD *)(v269 + 64) = v279;
          *v273 = v281;
        }
        else
        {
          v193 = &v181[5 * v192];
        }
LABEL_129:
        v194 = (_QWORD *)*v187;
        *v193 = 0;
        if ( v194 )
        {
          v195 = *((_DWORD *)v194 - 1);
          v196 = *((unsigned int *)v194 - 2);
          v272 = v196;
          v197 = (_QWORD *)sub_186B270(8 * v196 + 8);
          *v197 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v272), _mm_cvtsi32_si128(v195)).m128i_u64[0];
          *v193 = v197 + 1;
          v198 = (_QWORD *)*v187;
          if ( *v187 )
          {
            v199 = 8LL * *((unsigned int *)v198 - 1);
            if ( v199 <= 8 )
            {
              if ( v199 == 8 )
                v197[1] = *v198;
            }
            else
            {
              memmove(v197 + 1, v198, v199);
            }
          }
        }
        v193[1] = 0;
        v193[2] = 0;
        v193[3] = 1;
        v200 = qword_1C7F2C0;
        v193[4] = 0;
        if ( (*((_BYTE *)v187 + 12) & 1) != 0 )
        {
          sub_182C690(v200, v193 + 1, v187 + 1);
          if ( (*((_BYTE *)v187 + 28) & 1) == 0 )
          {
LABEL_124:
            v190 = *((_DWORD *)v187 + 6);
            *((_BYTE *)v193 + 28) &= ~1u;
            *((_DWORD *)v193 + 6) = v190;
            goto LABEL_125;
          }
        }
        else
        {
          *((_DWORD *)v193 + 2) = *((_DWORD *)v187 + 2);
          if ( (*((_BYTE *)v187 + 28) & 1) == 0 )
            goto LABEL_124;
        }
        sub_182C690(v200, v193 + 3, v187 + 3);
LABEL_125:
        ++v188;
        v181 = *(_QWORD **)(v269 + 64);
        ++*((_DWORD *)v181 - 1);
        v191 = *((unsigned int *)v276 - 1);
        if ( v188 >= (unsigned int)v191 )
        {
          if ( (_DWORD)v191 )
          {
            v239 = v276;
            v240 = &v276[5 * v191];
            do
            {
              while ( 1 )
              {
                v241 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v239 + 1);
                sub_182CBA0(v241, v239 + 3);
                v242 = *v239;
                if ( !*v239 )
                  break;
                v239 += 5;
                sub_186B220((void *)(v242 - 8));
                if ( v240 == v239 )
                  goto LABEL_121;
              }
              v239 += 5;
            }
            while ( v240 != v239 );
          }
          goto LABEL_121;
        }
        v187 = &v276[5 * v188];
      }
    }
LABEL_115:
    v184 = &v181[5 * v183];
    do
    {
      while ( 1 )
      {
        v185 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v181 + 1);
        sub_182CBA0(v185, v181 + 3);
        v186 = *v181;
        if ( !*v181 )
          break;
        v181 += 5;
        sub_186B220((void *)(v186 - 8));
        if ( v181 == v184 )
          goto LABEL_118;
      }
      v181 += 5;
    }
    while ( v181 != v184 );
LABEL_118:
    v181 = *(_QWORD **)(v269 + 64);
    goto LABEL_119;
  }
  v187 = v276;
  if ( v276 )
  {
    if ( *((_DWORD *)v276 - 1) )
    {
      v267 = (_QWORD *)sub_186B270(0x58u);
      *v267 = 2;
      v188 = 0;
      v193 = v267 + 1;
      *(_QWORD *)(v269 + 64) = v193;
      goto LABEL_129;
    }
LABEL_121:
    sub_186B220(v276 - 1);
  }
  return v182;
}

