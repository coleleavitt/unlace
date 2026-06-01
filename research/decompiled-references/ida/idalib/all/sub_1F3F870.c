char __fastcall sub_1F3F870(__int64 *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  char *v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 *v22; // rsi
  __int64 v23; // r9
  unsigned __int64 v24; // r12
  _QWORD *v25; // rcx
  __int64 *v26; // rdx
  unsigned __int8 v27; // al
  char v28; // di
  char v29; // dl
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // al
  unsigned __int8 v32; // al
  unsigned __int8 v33; // al
  char v34; // al
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  char v39; // al
  char v40; // al
  unsigned __int8 v41; // al
  unsigned __int8 v42; // al
  unsigned __int8 v43; // al
  unsigned __int8 v44; // al
  char v45; // al
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  unsigned __int8 v48; // al
  unsigned __int8 v49; // al
  unsigned int v50; // eax
  char v51; // dl
  unsigned __int8 v52; // cl
  unsigned __int8 v53; // si
  unsigned __int8 v54; // di
  unsigned __int8 v55; // r14
  unsigned __int8 v56; // r8
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // r13
  unsigned __int8 v59; // r10
  char v60; // r12
  char v61; // r9
  char v62; // al
  unsigned int v63; // esi
  int v64; // ecx
  __int64 v65; // r13
  _QWORD *v66; // rax
  _DWORD *v67; // r14
  __int64 v68; // r12
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // r12
  __int64 v72; // r13
  __int64 v73; // rax
  _QWORD *v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  int v79; // esi
  int v80; // r10d
  __int64 v81; // r9
  unsigned int v82; // ecx
  __int64 v83; // rdx
  int v84; // esi
  char *v85; // r15
  __int64 v86; // r14
  _QWORD **v87; // r13
  int v88; // ebp
  bool v89; // al
  _QWORD **v90; // rdi
  __int64 *v91; // rdi
  _QWORD **v92; // rdx
  __int64 v93; // rdx
  char v94; // al
  char v95; // al
  char v96; // al
  char v97; // al
  char v98; // al
  char v99; // al
  char v100; // al
  char v101; // al
  char v102; // al
  char v103; // al
  char v104; // al
  char v105; // al
  char v106; // al
  char v107; // al
  char v108; // al
  char v109; // al
  char v110; // al
  char v111; // al
  char v112; // al
  char v113; // al
  char v114; // al
  char v115; // al
  char v116; // al
  char v117; // al
  char v118; // al
  char v119; // al
  char v120; // al
  char v121; // al
  char v122; // al
  char v123; // al
  char v124; // al
  char v125; // al
  char v126; // al
  char v127; // al
  char v128; // al
  char v129; // al
  char v130; // al
  char v131; // al
  char v132; // al
  char v133; // al
  char v134; // al
  char v135; // al
  char v136; // al
  char v137; // al
  char v138; // al
  char v139; // al
  __int64 v140; // rsi
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rsi
  _QWORD *v146; // rax
  __int64 v147; // rdx
  unsigned int v148; // esi
  unsigned int v149; // edi
  __int64 v150; // rcx
  __int64 v151; // rdx
  unsigned __int8 v154; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v155; // [rsp+18h] [rbp-C0h]
  __int64 *v156; // [rsp+18h] [rbp-C0h]
  unsigned __int8 v157; // [rsp+20h] [rbp-B8h]
  char v158; // [rsp+21h] [rbp-B7h]
  char v159; // [rsp+22h] [rbp-B6h]
  char v160; // [rsp+23h] [rbp-B5h]
  unsigned __int8 v161; // [rsp+24h] [rbp-B4h]
  unsigned __int8 v162; // [rsp+25h] [rbp-B3h]
  unsigned __int8 v163; // [rsp+26h] [rbp-B2h]
  unsigned __int8 v164; // [rsp+27h] [rbp-B1h]
  unsigned __int8 v165; // [rsp+28h] [rbp-B0h]
  unsigned __int8 v166; // [rsp+29h] [rbp-AFh]
  char v167; // [rsp+2Ah] [rbp-AEh]
  char v168; // [rsp+2Bh] [rbp-ADh]
  char v169; // [rsp+2Ch] [rbp-ACh]
  unsigned __int8 v170; // [rsp+2Dh] [rbp-ABh]
  unsigned __int8 v171; // [rsp+2Eh] [rbp-AAh]
  unsigned __int8 v172; // [rsp+2Fh] [rbp-A9h]
  unsigned __int8 v173; // [rsp+30h] [rbp-A8h]
  unsigned __int8 v174; // [rsp+31h] [rbp-A7h]
  unsigned __int8 v175; // [rsp+32h] [rbp-A6h]
  char v176; // [rsp+33h] [rbp-A5h]
  char v177; // [rsp+34h] [rbp-A4h]
  char v178; // [rsp+35h] [rbp-A3h]
  unsigned __int8 v179; // [rsp+36h] [rbp-A2h]
  unsigned __int8 v180; // [rsp+37h] [rbp-A1h]
  unsigned __int8 v181; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v182; // [rsp+39h] [rbp-9Fh]
  unsigned __int8 v183; // [rsp+3Ah] [rbp-9Eh]
  unsigned __int8 v184; // [rsp+3Bh] [rbp-9Dh]
  char v185; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int8 v186; // [rsp+3Dh] [rbp-9Bh]
  unsigned __int8 v187; // [rsp+3Eh] [rbp-9Ah]
  unsigned __int8 v188; // [rsp+3Fh] [rbp-99h]
  unsigned __int8 v189; // [rsp+40h] [rbp-98h]
  unsigned __int8 v190; // [rsp+41h] [rbp-97h]
  unsigned __int8 v191; // [rsp+42h] [rbp-96h]
  unsigned __int8 v192; // [rsp+43h] [rbp-95h]
  unsigned __int8 v193; // [rsp+44h] [rbp-94h]
  char v194; // [rsp+45h] [rbp-93h]
  unsigned __int8 v195; // [rsp+46h] [rbp-92h]
  unsigned __int8 v196; // [rsp+47h] [rbp-91h]
  unsigned __int8 v197; // [rsp+48h] [rbp-90h]
  unsigned __int8 v198; // [rsp+49h] [rbp-8Fh]
  char v199; // [rsp+4Ah] [rbp-8Eh]
  unsigned __int8 v200; // [rsp+4Bh] [rbp-8Dh]
  char v201; // [rsp+4Ch] [rbp-8Ch]
  char v202; // [rsp+4Dh] [rbp-8Bh]
  char v203; // [rsp+4Eh] [rbp-8Ah]
  unsigned __int8 v204; // [rsp+4Fh] [rbp-89h]
  unsigned __int8 v205; // [rsp+50h] [rbp-88h]
  unsigned __int8 v206; // [rsp+51h] [rbp-87h]
  unsigned __int8 v207; // [rsp+52h] [rbp-86h]
  char v208; // [rsp+53h] [rbp-85h]
  unsigned __int8 v209; // [rsp+54h] [rbp-84h]
  unsigned __int8 v210; // [rsp+55h] [rbp-83h]
  unsigned __int8 v211; // [rsp+56h] [rbp-82h]
  unsigned __int8 v212; // [rsp+57h] [rbp-81h]
  unsigned __int8 v213; // [rsp+58h] [rbp-80h]
  unsigned __int8 v214; // [rsp+59h] [rbp-7Fh]
  char v215; // [rsp+5Ah] [rbp-7Eh]
  unsigned __int8 v216; // [rsp+5Bh] [rbp-7Dh]
  unsigned __int8 v217; // [rsp+5Ch] [rbp-7Ch]
  unsigned __int8 v218; // [rsp+5Dh] [rbp-7Bh]
  unsigned __int8 v219; // [rsp+5Eh] [rbp-7Ah]
  unsigned __int8 v220; // [rsp+5Fh] [rbp-79h]
  unsigned __int8 v221; // [rsp+60h] [rbp-78h]
  char v222; // [rsp+61h] [rbp-77h]
  unsigned __int8 v223; // [rsp+62h] [rbp-76h]
  unsigned __int8 v224; // [rsp+63h] [rbp-75h]
  unsigned __int8 v225; // [rsp+64h] [rbp-74h]
  unsigned __int8 v226; // [rsp+65h] [rbp-73h]
  unsigned __int8 v227; // [rsp+66h] [rbp-72h]
  unsigned __int8 v228; // [rsp+67h] [rbp-71h]
  char v229; // [rsp+68h] [rbp-70h]
  unsigned __int8 v230; // [rsp+6Bh] [rbp-6Dh]
  unsigned __int8 v231; // [rsp+6Ch] [rbp-6Ch]
  unsigned __int8 v232; // [rsp+6Dh] [rbp-6Bh]
  unsigned __int8 v233; // [rsp+6Eh] [rbp-6Ah]
  char v234; // [rsp+6Fh] [rbp-69h]
  unsigned __int64 v235; // [rsp+70h] [rbp-68h] BYREF
  __int64 v236; // [rsp+78h] [rbp-60h] BYREF
  __m128 v237; // [rsp+80h] [rbp-58h] BYREF
  __int64 v238; // [rsp+90h] [rbp-48h]

  v6 = a1;
  v7 = a3;
  v8 = *(_QWORD *)(a2 + 128);
  v9 = *((_QWORD *)a3 + 11);
  v10 = *a1;
  v11 = *(_QWORD *)(v8 + 88);
  if ( v11 != v9 )
  {
    v12 = v10 + 12992;
    if ( v9 )
      v9 += 64LL;
    v235 = v9;
    if ( v11 )
      v11 += 64;
    v236 = v11;
    sub_1F3B1C0((__m128i *)&v237, v12, (__int64 *)&v235, &v236, a5, a6);
    v13 = *a1;
    v14 = *((_QWORD *)v7 + 11);
    if ( *(_BYTE *)(*a1 + 4028) )
    {
      v15 = *(_QWORD **)(v13 + 4008);
      v16 = &v15[*(unsigned int *)(v13 + 4020)];
      if ( v15 != v16 )
      {
        v17 = *(_QWORD **)(v13 + 4008);
        if ( v14 == *v15 )
        {
LABEL_46:
          v82 = *(_DWORD *)(v13 + 4020) - 1;
          v83 = v15[v82];
          *(_DWORD *)(v13 + 4020) = v82;
          *v17 = v83;
          v14 = *((_QWORD *)v7 + 11);
        }
        else
        {
          while ( v16 != ++v17 )
          {
            if ( v14 == *v17 )
              goto LABEL_46;
          }
        }
      }
    }
    else
    {
      v75 = (_QWORD *)sub_2236570(v13 + 4008, v14);
      if ( v75 )
      {
        *v75 = -2;
        ++*(_DWORD *)(v13 + 4024);
      }
      v14 = *((_QWORD *)v7 + 11);
    }
    *(_BYTE *)(v14 + 74) = *(_BYTE *)(v14 + 74) & 0xBE | 0x40;
    sub_1EFE8D0(*v6, *(_QWORD *)(v8 + 88), *((_QWORD *)v7 + 11));
    v10 = *v6;
  }
  v18 = *(unsigned int *)(v10 + 3240);
  v19 = v10 + 3224;
  v20 = *(_QWORD *)(v10 + 3224);
  if ( !(_DWORD)v18 )
    goto LABEL_44;
  v21 = (v18 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
  v22 = (__int64 *)(v20 + 16LL * v21);
  v23 = *v22;
  if ( v8 != *v22 )
  {
    v79 = 1;
    if ( v23 != -4096 )
    {
      do
      {
        v80 = v79 + 1;
        v21 = (v18 - 1) & (v79 + v21);
        v22 = (__int64 *)(v20 + 16LL * v21);
        v81 = *v22;
        if ( v8 == *v22 )
          goto LABEL_15;
        v79 = v80;
      }
      while ( v81 != -4096 );
    }
LABEL_44:
    sub_1F21DC0(&v237, (__int64 *)(v20 + 16LL * (unsigned int)v18), (__int64 *)(v20 + 16LL * (unsigned int)v18), v19, 1);
    v24 = v237.m128_u64[0];
    goto LABEL_16;
  }
LABEL_15:
  sub_1F21DC0(&v237, v22, (__int64 *)(16 * v18 + v20), v19, 1);
  v24 = v237.m128_u64[0];
LABEL_16:
  v25 = (_QWORD *)(*v6 + 3224);
  v26 = (__int64 *)(*v25 + 16LL * *(unsigned int *)(*v6 + 3240));
  sub_1F21DC0(&v237, v26, v26, (__int64)v25, 1);
  if ( v24 != v237.m128_u64[0] && *(_DWORD *)(v24 + 8) == 1 )
  {
    *(_DWORD *)(v24 + 8) = 2;
    v93 = *(_QWORD *)(v8 + 88);
    v94 = *v7 & 1 | *(_BYTE *)v8 & 0xFE;
    *(_BYTE *)v8 = v94;
    v95 = *v7 & 0x7E | v94 & 0x81;
    *(_BYTE *)v8 = v95;
    *(_BYTE *)v8 = *v7 & 0x80 | v95 & 0x7F;
    v96 = v7[1] & 1 | *(_BYTE *)(v8 + 1) & 0xFE;
    *(_BYTE *)(v8 + 1) = v96;
    v97 = v7[1] & 2 | v96 & 0xFD;
    *(_BYTE *)(v8 + 1) = v97;
    v98 = v7[1] & 4 | v97 & 0xFB;
    *(_BYTE *)(v8 + 1) = v98;
    v99 = v7[1] & 8 | v98 & 0xF7;
    *(_BYTE *)(v8 + 1) = v99;
    v100 = v7[1] & 0x10 | v99 & 0xEF;
    *(_BYTE *)(v8 + 1) = v100;
    v101 = v7[1] & 0x20 | v100 & 0xDF;
    *(_BYTE *)(v8 + 1) = v101;
    v102 = v7[1] & 0x40 | v101 & 0xBF;
    *(_BYTE *)(v8 + 1) = v102;
    *(_BYTE *)(v8 + 1) = v7[1] & 0x80 | v102 & 0x7F;
    v103 = v7[2] & 1 | *(_BYTE *)(v8 + 2) & 0xFE;
    *(_BYTE *)(v8 + 2) = v103;
    v104 = v7[2] & 2 | v103 & 0xFD;
    *(_BYTE *)(v8 + 2) = v104;
    v105 = v7[2] & 4 | v104 & 0xFB;
    *(_BYTE *)(v8 + 2) = v105;
    v106 = v7[2] & 8 | v105 & 0xF7;
    *(_BYTE *)(v8 + 2) = v106;
    v107 = v7[2] & 0x10 | v106 & 0xEF;
    *(_BYTE *)(v8 + 2) = v107;
    v108 = v7[2] & 0x20 | v107 & 0xDF;
    *(_BYTE *)(v8 + 2) = v108;
    v109 = v7[2] & 0x40 | v108 & 0xBF;
    *(_BYTE *)(v8 + 2) = v109;
    *(_BYTE *)(v8 + 2) = v7[2] & 0x80 | v109 & 0x7F;
    v110 = v7[3] & 1 | *(_BYTE *)(v8 + 3) & 0xFE;
    *(_BYTE *)(v8 + 3) = v110;
    v111 = v7[3] & 2 | v110 & 0xFD;
    *(_BYTE *)(v8 + 3) = v111;
    v112 = v7[3] & 4 | v111 & 0xFB;
    *(_BYTE *)(v8 + 3) = v112;
    v113 = v7[3] & 8 | v112 & 0xF7;
    *(_BYTE *)(v8 + 3) = v113;
    v114 = v7[3] & 0x10 | v113 & 0xEF;
    *(_BYTE *)(v8 + 3) = v114;
    v115 = v7[3] & 0x20 | v114 & 0xDF;
    *(_BYTE *)(v8 + 3) = v115;
    v116 = v7[3] & 0x40 | v115 & 0xBF;
    *(_BYTE *)(v8 + 3) = v116;
    *(_BYTE *)(v8 + 3) = v7[3] & 0x80 | v116 & 0x7F;
    v117 = v7[4] & 1 | *(_BYTE *)(v8 + 4) & 0xFE;
    *(_BYTE *)(v8 + 4) = v117;
    v118 = v7[4] & 2 | v117 & 0xFD;
    *(_BYTE *)(v8 + 4) = v118;
    v119 = v7[4] & 4 | v118 & 0xFB;
    *(_BYTE *)(v8 + 4) = v119;
    v120 = v7[4] & 8 | v119 & 0xF7;
    *(_BYTE *)(v8 + 4) = v120;
    v121 = v7[4] & 0x10 | v120 & 0xEF;
    *(_BYTE *)(v8 + 4) = v121;
    v122 = v7[4] & 0x20 | v121 & 0xDF;
    *(_BYTE *)(v8 + 4) = v122;
    *(_BYTE *)(v8 + 4) = v7[4] & 0x40 | v122 & 0xBF;
    *(_WORD *)(v8 + 4) = *((_WORD *)v7 + 2) & 0x1F80 | *(_WORD *)(v8 + 4) & 0xE07F;
    *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 + 1) & 0x7E000 | *(_DWORD *)(v8 + 4) & 0xFFF81FFF;
    *(_WORD *)(v8 + 6) = *((_WORD *)v7 + 3) & 0x1F8 | *(_WORD *)(v8 + 6) & 0xFE07;
    v123 = v7[7] & 0x7E | *(_BYTE *)(v8 + 7) & 0x81;
    *(_BYTE *)(v8 + 7) = v123;
    *(_BYTE *)(v8 + 7) = v7[7] & 0x80 | v123 & 0x7F;
    v124 = v7[8] & 1 | *(_BYTE *)(v8 + 8) & 0xFE;
    *(_BYTE *)(v8 + 8) = v124;
    v125 = v7[8] & 2 | v124 & 0xFD;
    *(_BYTE *)(v8 + 8) = v125;
    v126 = v7[8] & 4 | v125 & 0xFB;
    *(_BYTE *)(v8 + 8) = v126;
    v127 = v7[8] & 8 | v126 & 0xF7;
    *(_BYTE *)(v8 + 8) = v127;
    v128 = v7[8] & 0x10 | v127 & 0xEF;
    *(_BYTE *)(v8 + 8) = v128;
    v129 = v7[8] & 0x20 | v128 & 0xDF;
    *(_BYTE *)(v8 + 8) = v129;
    v130 = v7[8] & 0x40 | v129 & 0xBF;
    *(_BYTE *)(v8 + 8) = v130;
    *(_BYTE *)(v8 + 8) = v7[8] & 0x80 | v130 & 0x7F;
    v131 = v7[9] & 0x3F | *(_BYTE *)(v8 + 9) & 0xC0;
    *(_BYTE *)(v8 + 9) = v131;
    v132 = v7[9] & 0x40 | v131 & 0xBF;
    *(_BYTE *)(v8 + 9) = v132;
    *(_BYTE *)(v8 + 9) = v7[9] & 0x80 | v132 & 0x7F;
    v133 = v7[10] & 1 | *(_BYTE *)(v8 + 10) & 0xFE;
    *(_BYTE *)(v8 + 10) = v133;
    v134 = v7[10] & 2 | v133 & 0xFD;
    *(_BYTE *)(v8 + 10) = v134;
    v135 = v7[10] & 4 | v134 & 0xFB;
    *(_BYTE *)(v8 + 10) = v135;
    v136 = v7[10] & 8 | v135 & 0xF7;
    *(_BYTE *)(v8 + 10) = v136;
    v137 = v7[10] & 0x10 | v136 & 0xEF;
    *(_BYTE *)(v8 + 10) = v137;
    v138 = v7[10] & 0x20 | v137 & 0xDF;
    *(_BYTE *)(v8 + 10) = v138;
    v139 = v7[10] & 0x40 | v138 & 0xBF;
    *(_BYTE *)(v8 + 10) = v139;
    *(_BYTE *)(v8 + 10) = v7[10] & 0x80 | v139 & 0x7F;
    *(_BYTE *)(v8 + 11) = v7[11] & 1 | *(_BYTE *)(v8 + 11) & 0xFE;
    *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 + 3);
    *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 + 4);
    *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 + 5);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)v7 + 3);
    *(_QWORD *)(v8 + 32) = *((_QWORD *)v7 + 4);
    v140 = *((_QWORD *)v7 + 7);
    v141 = *((_QWORD *)v7 + 5);
    v142 = *((_QWORD *)v7 + 6);
    *((_QWORD *)v7 + 5) = 0;
    v238 = v140;
    *((_QWORD *)v7 + 6) = 0;
    *((_QWORD *)v7 + 7) &= 3uLL;
    *(_QWORD *)(v8 + 40) = v141;
    *(_QWORD *)(v8 + 48) = v142;
    *(_QWORD *)(v8 + 56) = v238;
    v143 = *((_QWORD *)v7 + 9);
    v144 = *((_QWORD *)v7 + 8);
    v145 = *((_QWORD *)v7 + 10);
    *((_QWORD *)v7 + 9) = 0;
    *((_QWORD *)v7 + 8) = 0;
    v238 = v145;
    *((_QWORD *)v7 + 10) &= 3uLL;
    *(_QWORD *)(v8 + 64) = v144;
    *(_QWORD *)(v8 + 72) = v143;
    *(_QWORD *)(v8 + 80) = v238;
    *(_QWORD *)(v8 + 88) = *((_QWORD *)v7 + 11);
    v66 = *((_QWORD **)v7 + 12);
    *(_QWORD *)(v8 + 88) = v93;
    *(_QWORD *)(v8 + 96) = v66;
  }
  else
  {
    v155 = *v7;
    v154 = *(_BYTE *)v8;
    v27 = (v154 | *v7) & 1 | v154 & 0xFE;
    *(_BYTE *)v8 = v27;
    v207 = v27;
    v157 = *v7;
    v28 = *(_BYTE *)(v8 + 1);
    v29 = (v27 | *v7) & 0x7E | v27 & 0x81;
    *(_BYTE *)v8 = v29;
    v208 = v29;
    v158 = *v7;
    v159 = v28;
    *(_BYTE *)v8 = (v29 | *v7) & 0x80 | v29 & 0x7F;
    v160 = v7[1];
    *(_BYTE *)(v8 + 1) = (v28 | v160) & 1 | v28 & 0xFE;
    v209 = (v28 | v160) & 1 | v28 & 0xFE;
    v161 = v7[1];
    v30 = v28 & 2 | v161 & 2 | (v28 | v160) & 1 | v28 & 0xFC;
    *(_BYTE *)(v8 + 1) = v30;
    v210 = v30;
    v162 = v7[1];
    *(_BYTE *)(v8 + 1) = (v30 | v162) & 4 | v30 & 0xFB;
    v211 = (v30 | v162) & 4 | v30 & 0xFB;
    v163 = v7[1];
    v31 = v30 & 8 | v163 & 8 | (v30 | v162) & 4 | v30 & 0xF3;
    *(_BYTE *)(v8 + 1) = v31;
    v212 = v31;
    v164 = v7[1];
    v32 = (v31 | v164) & 0x10 | v31 & 0xEF;
    *(_BYTE *)(v8 + 1) = v32;
    v213 = v32;
    v165 = v7[1];
    v33 = (v32 | v165) & 0x20 | v32 & 0xDF;
    *(_BYTE *)(v8 + 1) = v33;
    v214 = v33;
    v166 = v7[1];
    *(_BYTE *)(v8 + 1) = (v33 | v166) & 0x40 | v33 & 0xBF;
    v215 = (v33 | v166) & 0x40 | v33 & 0xBF;
    v167 = v7[1];
    *(_BYTE *)(v8 + 1) = v33 & 0x80 | v167 & 0x80 | (v33 | v166) & 0x40 | v33 & 0x3F;
    v168 = *(_BYTE *)(v8 + 2);
    v169 = v7[2];
    *(_BYTE *)(v8 + 2) = (v168 | v169) & 1 | v168 & 0xFE;
    v170 = v7[2];
    v34 = v168 & 2 | v170 & 2 | (v168 | v169) & 1 | v168 & 0xFC;
    *(_BYTE *)(v8 + 2) = v34;
    v171 = v7[2];
    v35 = (v34 | v171) & 4 | v34 & 0xFB;
    *(_BYTE *)(v8 + 2) = v35;
    v218 = v35;
    v172 = v7[2];
    v36 = (v35 | v172) & 8 | v35 & 0xF7;
    *(_BYTE *)(v8 + 2) = v36;
    v219 = v36;
    v173 = v7[2];
    v37 = (v36 | v173) & 0x10 | v36 & 0xEF;
    *(_BYTE *)(v8 + 2) = v37;
    v220 = v37;
    v174 = v7[2];
    v38 = (v37 | v174) & 0x20 | v37 & 0xDF;
    *(_BYTE *)(v8 + 2) = v38;
    v221 = v38;
    v175 = v7[2];
    v39 = (v38 | v175) & 0x40 | v38 & 0xBF;
    *(_BYTE *)(v8 + 2) = v39;
    v222 = v39;
    v176 = v7[2];
    *(_BYTE *)(v8 + 2) = (v39 | v176) & 0x80 | v39 & 0x7F;
    v177 = *(_BYTE *)(v8 + 3);
    v178 = v7[3];
    *(_BYTE *)(v8 + 3) = (v177 | v178) & 1 | v177 & 0xFE;
    v179 = v7[3];
    v40 = v177 & 2 | v179 & 2 | (v177 | v178) & 1 | v177 & 0xFC;
    *(_BYTE *)(v8 + 3) = v40;
    v180 = v7[3];
    v41 = (v40 | v180) & 4 | v40 & 0xFB;
    *(_BYTE *)(v8 + 3) = v41;
    v225 = v41;
    v181 = v7[3];
    v42 = (v41 | v181) & 8 | v41 & 0xF7;
    *(_BYTE *)(v8 + 3) = v42;
    v226 = v42;
    v182 = v7[3];
    v43 = (v42 | v182) & 0x10 | v42 & 0xEF;
    *(_BYTE *)(v8 + 3) = v43;
    v227 = v43;
    v183 = v7[3];
    v44 = (v43 | v183) & 0x20 | v43 & 0xDF;
    *(_BYTE *)(v8 + 3) = v44;
    v228 = v44;
    v184 = v7[3];
    *(_BYTE *)(v8 + 3) = (v44 | v184) & 0x40 | v44 & 0xBF;
    v229 = (v44 | v184) & 0x40 | v44 & 0xBF;
    v185 = v7[3];
    *(_BYTE *)(v8 + 3) = v44 & 0x80 | v185 & 0x80 | (v44 | v184) & 0x40 | v44 & 0x3F;
    v186 = *(_BYTE *)(v8 + 4);
    v187 = v7[4];
    *(_BYTE *)(v8 + 4) = (v186 | v187) & 1 | v186 & 0xFE;
    v188 = v7[4];
    v45 = v186 & 2 | v188 & 2 | (v186 | v187) & 1 | v186 & 0xFC;
    *(_BYTE *)(v8 + 4) = v45;
    v189 = v7[4];
    v46 = (v45 | v189) & 4 | v45 & 0xFB;
    *(_BYTE *)(v8 + 4) = v46;
    v230 = v46;
    v190 = v7[4];
    v47 = (v46 | v190) & 8 | v46 & 0xF7;
    *(_BYTE *)(v8 + 4) = v47;
    v231 = v47;
    v191 = v7[4];
    v48 = (v47 | v191) & 0x10 | v47 & 0xEF;
    *(_BYTE *)(v8 + 4) = v48;
    v232 = v48;
    v192 = v7[4];
    v49 = (v48 | v192) & 0x20 | v48 & 0xDF;
    *(_BYTE *)(v8 + 4) = v49;
    v233 = v49;
    v193 = v7[4];
    *(_BYTE *)(v8 + 4) = (v49 | v193) & 0x40 | v49 & 0xBF;
    *(_WORD *)(v8 + 4) = ((((unsigned __int8)(*(_WORD *)(v8 + 4) >> 7) | (unsigned __int8)(*((_WORD *)v7 + 2) >> 7))
                         & 0x3F) << 7)
                       | *(_WORD *)(v8 + 4) & 0xE07F;
    v50 = *(_DWORD *)(v8 + 4) & 0xFFF81FFF
        | ((((unsigned __int8)(*(_DWORD *)(v8 + 4) >> 13) | (unsigned __int8)(*((_DWORD *)v7 + 1) >> 13)) & 0x3F) << 13);
    *(_DWORD *)(v8 + 4) = v50;
    LOWORD(v50) = (8 * (((unsigned __int8)(HIWORD(v50) >> 3) | (unsigned __int8)(*((_WORD *)v7 + 3) >> 3)) & 0x3F))
                | HIWORD(v50) & 0xFE07;
    *(_WORD *)(v8 + 6) = v50;
    LOBYTE(v50) = (BYTE1(v50) | v7[7]) & 0x7E | BYTE1(v50) & 0x81;
    *(_BYTE *)(v8 + 7) = v50;
    v234 = v50;
    v194 = v7[7];
    *(_BYTE *)(v8 + 7) = (v50 | v194) & 0x80 | v50 & 0x7F;
    v51 = (*(_BYTE *)(v8 + 8) | v7[8]) & 1 | *(_BYTE *)(v8 + 8) & 0xFE;
    *(_BYTE *)(v8 + 8) = v51;
    v52 = (v51 | v7[8]) & 2 | v51 & 0xFD;
    *(_BYTE *)(v8 + 8) = v52;
    v195 = v7[8];
    *(_BYTE *)(v8 + 8) = v52 & 0xFB | (v52 | v195) & 4;
    v53 = v52 & 8 | v7[8] & 8 | v52 & 0xF3 | (v52 | v195) & 4;
    *(_BYTE *)(v8 + 8) = v53;
    v196 = v7[8];
    *(_BYTE *)(v8 + 8) = v53 & 0xEF | (v53 | v196) & 0x10;
    v197 = v7[8];
    v55 = v53 & 0xCF | (v53 | v196) & 0x10 | v53 & 0x20 | v197 & 0x20;
    *(_BYTE *)(v8 + 8) = v55;
    v198 = v7[8];
    *(_BYTE *)(v8 + 8) = v53 & 0x8F | (v53 | v196) & 0x10 | v53 & 0x20 | v197 & 0x20 | v53 & 0x40 | v198 & 0x40;
    v199 = v7[8];
    *(_BYTE *)(v8 + 8) = v53 & 0x80
                       | v199 & 0x80
                       | v53 & 0xF
                       | (v53 | v196) & 0x10
                       | v53 & 0x20
                       | v197 & 0x20
                       | v53 & 0x40
                       | v198 & 0x40;
    v56 = (*(_BYTE *)(v8 + 9) | v7[9]) & 0x3F | *(_BYTE *)(v8 + 9) & 0xC0;
    *(_BYTE *)(v8 + 9) = v56;
    v200 = v7[9];
    *(_BYTE *)(v8 + 9) = v56 & 0xBF | (v56 | v200) & 0x40;
    v201 = v7[9];
    *(_BYTE *)(v8 + 9) = v56 & 0x80 | v201 & 0x80 | v56 & 0x3F | (v56 | v200) & 0x40;
    v202 = *(_BYTE *)(v8 + 10);
    v203 = v7[10];
    *(_BYTE *)(v8 + 10) = v202 & 0xFE | (v202 | v203) & 1;
    LOBYTE(v50) = v202 & 2 | v7[10] & 2 | v202 & 0xFC | (v202 | v203) & 1;
    *(_BYTE *)(v8 + 10) = v50;
    v57 = (v50 | v7[10]) & 4 | v50 & 0xFB;
    *(_BYTE *)(v8 + 10) = v57;
    v204 = v7[10];
    *(_BYTE *)(v8 + 10) = v57 & 0xF7 | (v57 | v204) & 8;
    v205 = v7[10];
    *(_BYTE *)(v8 + 10) = v57 & 0xE7 | (v57 | v204) & 8 | v57 & 0x10 | v205 & 0x10;
    v206 = v7[10];
    v60 = 1;
    *(_BYTE *)(v8 + 10) = v57 & 0x20 | v206 & 0x20 | v57 & 0xC7 | (v57 | v204) & 8 | v57 & 0x10 | v205 & 0x10;
    if ( *(_QWORD *)(v8 + 16) == *((_QWORD *)v7 + 2) )
    {
      v61 = (unsigned __int8)(v199 ^ (v55 & 0xBF | (v55 | v198) & 0x40)
                            | v194 ^ v234
                            | v176 ^ v222
                            | v167 ^ v215
                            | v158 ^ v208
                            | v185 ^ v229
                            | v201 ^ (v56 & 0xBF | (v56 | v200) & 0x40)) >> 7;
      v59 = v57 & 0xE7 | (v57 | v204) & 8 | v57 & 0x10 | v205 & 0x10;
      v58 = v57 & 0xF7 | (v57 | v204) & 8;
      v216 = (v168 | v169) & 1 | v168 & 0xFE;
      v217 = v168 & 2 | v170 & 2 | (v168 | v169) & 1 | v168 & 0xFC;
      v223 = (v177 | v178) & 1 | v177 & 0xFE;
      v224 = v177 & 2 | v179 & 2 | (v177 | v178) & 1 | v177 & 0xFC;
      v54 = v53 & 0xEF | (v53 | v196) & 0x10;
      v60 = (v187 ^ v186 | v178 ^ v177 | v160 ^ v159 | v169 ^ v168 | v203 ^ v202) & 1
          | v61
          | (((v155 ^ v154) & 1
            | (v59 ^ v206) & 0x20
            | (v205 ^ v58) & 0x10
            | (v204 ^ v57) & 8
            | (v200 ^ v56) & 0x40
            | (v198 ^ v55) & 0x40
            | (v197 ^ v54) & 0x20
            | (v196 ^ v53) & 0x10
            | (v195 ^ v52) & 4
            | (v193 ^ v233) & 0x40
            | (v192 ^ v232) & 0x20
            | (v191 ^ v231) & 0x10
            | (v190 ^ v230) & 8
            | (v189 ^ (v186 & 2 | v188 & 2 | (v186 | v187) & 1 | v186 & 0xFC)) & 4
            | (v188 ^ ((v186 | v187) & 1 | v186 & 0xFE)) & 2
            | (v184 ^ v228) & 0x40
            | (v183 ^ v227) & 0x20
            | (v182 ^ v226) & 0x10
            | (v181 ^ v225) & 8
            | (v180 ^ v224) & 4
            | (v179 ^ v223) & 2
            | (v175 ^ v221) & 0x40
            | (v174 ^ v220) & 0x20
            | (v173 ^ v219) & 0x10
            | (v172 ^ v218) & 8
            | (v171 ^ v217) & 4
            | (v170 ^ v216) & 2
            | (v166 ^ v214) & 0x40
            | (v165 ^ v213) & 0x20
            | (v164 ^ v212) & 0x10
            | (v163 ^ v211) & 8
            | (v161 ^ v209) & 2
            | (v162 ^ v210) & 4
            | (v157 ^ v207) & 0x7E) != 0);
    }
    v62 = *(_BYTE *)(v8 + 10);
    if ( v7[10] < 0 && v62 >= 0 )
    {
      v76 = *((_QWORD *)v7 + 9);
      v77 = *((_QWORD *)v7 + 10);
      *((_QWORD *)v7 + 9) = 0;
      v78 = *((_QWORD *)v7 + 8);
      *((_QWORD *)v7 + 10) &= 3uLL;
      v238 = v77;
      *((_QWORD *)v7 + 8) = 0;
      *(_QWORD *)(v8 + 64) = v78;
      *(_QWORD *)(v8 + 72) = v76;
      *(_QWORD *)(v8 + 80) = v238;
      v62 = *(_BYTE *)(v8 + 10) | 0x80;
      *(_BYTE *)(v8 + 10) = v62;
    }
    if ( (v62 & 0x20) != 0 )
    {
      v63 = *(_DWORD *)(v8 + 104);
      v64 = (v63 ^ *((_DWORD *)v7 + 26)) & 0xFFFE0;
      v60 |= ((v64 | (*((_DWORD *)v7 + 27) ^ *(_DWORD *)(v8 + 108)) & 0xFFFFFFFE) != 0)
           | (v7[108] ^ *(_BYTE *)(v8 + 108)) & 1
           | ((((unsigned __int8)v7[104] ^ *(_BYTE *)(v8 + 104)) & 0x1F) != 0
           || ((*((_WORD *)v7 + 53) ^ *(_WORD *)(v8 + 106)) & 0xFFF0) != 0);
      if ( (v63 & 0xFFFE0) != 0 && !v64 )
      {
        v84 = (v63 >> 5) & 0x7FFF;
        if ( v84 )
        {
          v156 = v6;
          v85 = v7;
          v86 = 0;
          do
          {
            v90 = (_QWORD **)(*(_QWORD *)(v8 + 128) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v8 + 128) & 4) != 0 )
              v90 = (_QWORD **)**v90;
            v91 = (__int64 *)&v90[v86];
            v87 = (_QWORD **)(*((_QWORD *)v85 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*((_QWORD *)v85 + 16) & 4) != 0 )
              v87 = (_QWORD **)**v87;
            v88 = sub_C94E40(v91);
            v89 = v88 != (unsigned int)sub_C94E40((__int64 *)&v87[v86]);
            v86 += 2;
            v60 |= v89;
          }
          while ( 2 * ((unsigned int)(v84 - 1) + 1LL) != v86 );
          v7 = v85;
          v6 = v156;
        }
        v92 = (_QWORD **)(*((_QWORD *)v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*((_QWORD *)v7 + 16) & 4) != 0 )
          v92 = (_QWORD **)**v92;
        sub_B96DD0(v8, *(_QWORD *)(*v6 + 144), (__int64)v92);
      }
    }
    v65 = *((_QWORD *)v7 + 11);
    if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(v65) + 2320) + 21LL) & 8) == 0
      || (LOBYTE(v66) = sub_B8D940(v65), !(_BYTE)v66) && (LOBYTE(v66) = sub_B8DB40(v65), !(_BYTE)v66) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(sub_B8C330(a2) + 2320) + 21LL) & 8) == 0
        || (LOBYTE(v66) = sub_B8D940(a2), !(_BYTE)v66) && (LOBYTE(v66) = sub_B8DB40(a2), !(_BYTE)v66) )
      {
        LODWORD(v66) = sub_B96BE0(a2);
        if ( *((_DWORD *)v7 + 3) != (_DWORD)v66 || v60 )
        {
          v67 = (_DWORD *)*v6;
          v68 = *v6 + 12008;
          if ( (unsigned __int8)sub_1F21140(v68, (__int64 *)(v8 + 88), &v235) )
          {
            v71 = v235;
            v72 = *((_QWORD *)v7 + 11);
            v73 = *(unsigned int *)(v235 + 16);
            v74 = (_QWORD *)(v235 + 8);
            if ( v73 + 1 > (unsigned __int64)*(unsigned int *)(v235 + 20) )
            {
              sub_2237220(v235 + 8, v235 + 24, v73 + 1, 16);
              v73 = *(unsigned int *)(v71 + 16);
            }
LABEL_31:
            v66 = (_QWORD *)(*v74 + 16 * v73);
            *v66 = v72;
            v66[1] = v7;
            ++*((_DWORD *)v74 + 2);
            return (char)v66;
          }
          v146 = (_QWORD *)v235;
          v237.m128_u64[0] = v235;
          v147 = (unsigned int)((v67[3002] >> 1) + 1);
          if ( (v67[3002] & 1) != 0 )
          {
            v149 = 6;
            v148 = 2;
          }
          else
          {
            v148 = v67[3006];
            v149 = 3 * v148;
          }
          v150 = (unsigned int)(4 * v147);
          if ( (unsigned int)v150 >= v149 )
          {
            v148 *= 2;
          }
          else
          {
            v150 = v148 >> 3;
            if ( v148 - ((_DWORD)v147 + v67[3003]) > (unsigned int)v150 )
            {
LABEL_67:
              v67[3002] = v67[3002] & 1 | (2 * v147);
              if ( *v146 != -4096 )
                --v67[3003];
              v151 = *(_QWORD *)(v8 + 88);
              v146[2] = 0x200000000LL;
              v74 = v146 + 1;
              *v146 = v151;
              v146[1] = v146 + 3;
              v73 = 0;
              v72 = *((_QWORD *)v7 + 11);
              goto LABEL_31;
            }
          }
          sub_1F3F210(v68, v148, v147, v150, v69, v70);
          sub_1F21140(v68, (__int64 *)(v8 + 88), &v237);
          v146 = (_QWORD *)v237.m128_u64[0];
          LODWORD(v147) = (v67[3002] >> 1) + 1;
          goto LABEL_67;
        }
      }
    }
  }
  return (char)v66;
}
