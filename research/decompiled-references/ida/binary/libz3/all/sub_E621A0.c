void __fastcall sub_E621A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // r15
  __int64 v11; // r12
  int v12; // r8d
  bool v13; // zf
  bool v14; // bp
  __int64 v15; // rbp
  _QWORD *v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // r13
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  _OWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rbp
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // r12
  __int64 v35; // rbp
  int v36; // r10d
  _QWORD *v37; // rbp
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rbp
  int v43; // r9d
  __int64 v44; // r12
  bool v45; // bp
  __int64 v46; // rax
  _QWORD *v47; // r12
  _QWORD *v48; // r13
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rbp
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rbp
  __int64 v57; // rbp
  void *v58; // [rsp+0h] [rbp-478h]
  void *v59; // [rsp+0h] [rbp-478h]
  void *v60; // [rsp+0h] [rbp-478h]
  int v61[2]; // [rsp+8h] [rbp-470h]
  int v62[2]; // [rsp+10h] [rbp-468h]
  __int64 *v63; // [rsp+18h] [rbp-460h]
  __int64 v65; // [rsp+48h] [rbp-430h]
  __int64 v66; // [rsp+70h] [rbp-408h] BYREF
  __int64 v67; // [rsp+78h] [rbp-400h] BYREF
  __int64 v68; // [rsp+80h] [rbp-3F8h] BYREF
  __int64 v69; // [rsp+88h] [rbp-3F0h] BYREF
  _QWORD *v70; // [rsp+90h] [rbp-3E8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-3E0h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-3D8h] BYREF
  _QWORD *v73; // [rsp+A8h] [rbp-3D0h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-3C8h] BYREF
  _QWORD *v75; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-3B8h] BYREF
  _QWORD *v77; // [rsp+C8h] [rbp-3B0h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-3A8h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-3A0h] BYREF
  _QWORD *v80; // [rsp+E0h] [rbp-398h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-390h] BYREF
  _QWORD *v82; // [rsp+F0h] [rbp-388h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-380h] BYREF
  __int64 v84; // [rsp+100h] [rbp-378h] BYREF
  __int64 v85; // [rsp+108h] [rbp-370h] BYREF
  __int64 v86; // [rsp+110h] [rbp-368h] BYREF
  __int64 v87; // [rsp+118h] [rbp-360h] BYREF
  __int64 v88; // [rsp+120h] [rbp-358h] BYREF
  __int64 v89; // [rsp+128h] [rbp-350h] BYREF
  int v90[2]; // [rsp+130h] [rbp-348h] BYREF
  __int64 v91; // [rsp+138h] [rbp-340h]
  _QWORD v92[4]; // [rsp+140h] [rbp-338h] BYREF
  __int64 v93; // [rsp+160h] [rbp-318h]
  __int64 v94; // [rsp+168h] [rbp-310h]
  __m128i si128; // [rsp+170h] [rbp-308h]
  __int16 v96; // [rsp+180h] [rbp-2F8h]
  char v97; // [rsp+182h] [rbp-2F6h]
  _QWORD v98[4]; // [rsp+188h] [rbp-2F0h] BYREF
  void *v99[2]; // [rsp+1A8h] [rbp-2D0h] BYREF
  _QWORD v100[2]; // [rsp+1B8h] [rbp-2C0h] BYREF
  void *v101; // [rsp+1C8h] [rbp-2B0h]
  __int64 v102; // [rsp+1D0h] [rbp-2A8h]
  char v103[16]; // [rsp+1D8h] [rbp-2A0h] BYREF
  __int128 v104; // [rsp+1E8h] [rbp-290h]
  __int64 v105; // [rsp+1F8h] [rbp-280h]
  char v106; // [rsp+200h] [rbp-278h]
  __int64 v107; // [rsp+204h] [rbp-274h]
  __int16 v108; // [rsp+20Ch] [rbp-26Ch]
  __int64 v109; // [rsp+210h] [rbp-268h]
  __int64 v110; // [rsp+218h] [rbp-260h]
  int v111; // [rsp+220h] [rbp-258h]
  char v112; // [rsp+224h] [rbp-254h]
  int v113; // [rsp+228h] [rbp-250h]
  __int64 v114; // [rsp+230h] [rbp-248h]
  _QWORD v115[8]; // [rsp+238h] [rbp-240h] BYREF
  __int128 v116; // [rsp+278h] [rbp-200h]
  __int64 v117; // [rsp+288h] [rbp-1F0h]
  __int64 v118; // [rsp+290h] [rbp-1E8h]
  __int64 v119; // [rsp+298h] [rbp-1E0h]
  __int64 v120; // [rsp+2A0h] [rbp-1D8h]
  __int64 v121; // [rsp+2A8h] [rbp-1D0h]
  __int64 v122; // [rsp+2B0h] [rbp-1C8h]
  __int64 v123; // [rsp+2B8h] [rbp-1C0h]
  __int64 v124; // [rsp+2C0h] [rbp-1B8h]
  __int16 v125; // [rsp+2C8h] [rbp-1B0h]
  char v126; // [rsp+2CAh] [rbp-1AEh]
  __int16 v127; // [rsp+2CCh] [rbp-1ACh]
  int v128; // [rsp+2D0h] [rbp-1A8h]
  __int16 v129; // [rsp+2D4h] [rbp-1A4h]
  __int64 v130; // [rsp+2D8h] [rbp-1A0h]
  int v131; // [rsp+2E0h] [rbp-198h]
  char v132; // [rsp+2E4h] [rbp-194h]
  __int64 v133; // [rsp+2E8h] [rbp-190h] BYREF
  __int64 v134; // [rsp+2F0h] [rbp-188h]
  int v135; // [rsp+2F8h] [rbp-180h]
  int v136; // [rsp+2FCh] [rbp-17Ch] BYREF
  __int64 v137; // [rsp+300h] [rbp-178h]
  int v138; // [rsp+308h] [rbp-170h] BYREF
  char v139; // [rsp+30Ch] [rbp-16Ch]
  __int64 v140; // [rsp+310h] [rbp-168h]
  __int16 v141; // [rsp+318h] [rbp-160h]
  int v142; // [rsp+31Ch] [rbp-15Ch]
  char v143; // [rsp+320h] [rbp-158h]
  int v144; // [rsp+324h] [rbp-154h]
  __int128 v145; // [rsp+328h] [rbp-150h]
  __m128i v146; // [rsp+338h] [rbp-140h]
  int v147; // [rsp+348h] [rbp-130h]
  char v148; // [rsp+34Ch] [rbp-12Ch]
  int v149; // [rsp+350h] [rbp-128h]
  __m128i v150; // [rsp+358h] [rbp-120h]
  char v151; // [rsp+368h] [rbp-110h]
  __int64 v152; // [rsp+36Ch] [rbp-10Ch]
  char v153; // [rsp+374h] [rbp-104h]
  __int64 v154; // [rsp+378h] [rbp-100h]
  __int16 v155; // [rsp+380h] [rbp-F8h]
  __int64 v156; // [rsp+384h] [rbp-F4h]
  __int64 v157; // [rsp+38Ch] [rbp-ECh]
  char v158; // [rsp+394h] [rbp-E4h]
  __int64 v159; // [rsp+398h] [rbp-E0h]
  __int64 v160; // [rsp+3A0h] [rbp-D8h]
  char v161; // [rsp+3A8h] [rbp-D0h]
  __int128 v162; // [rsp+3B0h] [rbp-C8h]
  int v163; // [rsp+3C0h] [rbp-B8h]
  char v164; // [rsp+3C4h] [rbp-B4h]
  __int64 v165; // [rsp+3C8h] [rbp-B0h]
  __int64 v166; // [rsp+3D0h] [rbp-A8h]
  __m128i v167; // [rsp+3D8h] [rbp-A0h]
  int v168; // [rsp+3E8h] [rbp-90h]
  __int64 v169; // [rsp+3F0h] [rbp-88h]
  int v170; // [rsp+3F8h] [rbp-80h]
  __int64 v171; // [rsp+400h] [rbp-78h]
  int v172; // [rsp+408h] [rbp-70h]
  __int16 v173; // [rsp+40Ch] [rbp-6Ch]
  int v174; // [rsp+410h] [rbp-68h]
  __int64 v175; // [rsp+414h] [rbp-64h]
  char v176[72]; // [rsp+430h] [rbp-48h] BYREF

  *(_QWORD *)v62 = a2;
  v92[0] = 0x100000001LL;
  *(_QWORD *)v61 = a4;
  v89 = 0;
  *(_QWORD *)v90 = 0;
  v93 = 0x1FFFFFFFFLL;
  sub_15B6DB0(v92, v90);
  sub_18572D0(v90);
  v63 = &v89;
  HIWORD(v93) = 0;
  v94 = 0;
  v96 = 1;
  v97 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(v92, &v89);
  sub_18572D0(&v89);
  *(_QWORD *)v90 = 0;
  v98[1] = 0x3FB999999999999ALL;
  v98[0] = 1;
  v98[2] = 0x7D00000000ALL;
  v98[3] = 0x3FE999999999999ALL;
  sub_15B81B0(v98, v90);
  sub_18572D0(v90);
  *(_QWORD *)v90 = 0;
  v99[0] = v100;
  v4 = (__m128i *)operator new(0x16u);
  v99[0] = v4;
  *v4 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
  strcpy(&v4->m128i_i8[13], "eration)");
  v101 = v103;
  v100[0] = 21;
  v105 = 0x200000000LL;
  v99[1] = &dword_14 + 1;
  v107 = 0xFFFFFFFFLL;
  v109 = 0x1000000FFFFFFFFLL;
  strcpy(v103, "cost");
  v110 = 0x100000001LL;
  v102 = 4;
  v106 = 0;
  v108 = 257;
  v111 = 1000;
  v112 = 0;
  v113 = 10;
  v114 = 0;
  v104 = xmmword_18B64B0;
  sub_15AFF30(v99, v90);
  sub_18572D0(v90);
  v115[0] = 0x600000000LL;
  v115[1] = 0x3E800000000LL;
  v115[2] = 0x200000001LL;
  v117 = 0x200000001LL;
  v119 = 0xFFFFFFFFLL;
  v115[3] = 0x8000000101LL;
  v122 = 0x20000000101LL;
  v115[4] = 0x100000010LL;
  v123 = 0x600000100LL;
  *(_QWORD *)v90 = 0;
  v115[5] = 0;
  v115[6] = 0xFFFFFC1800000000LL;
  v115[7] = 1000;
  v118 = 0x10000;
  v120 = 0;
  v121 = 1;
  v124 = 0x40000000001LL;
  v125 = 257;
  v126 = 1;
  v116 = xmmword_18B64C0;
  sub_15B26B0(v115, v90);
  sub_18572D0(v90);
  v130 = 0x1000100000001LL;
  v133 = 0x10000000001LL;
  v127 = 256;
  v128 = 3;
  v129 = 256;
  v131 = 10;
  v132 = 0;
  *(_QWORD *)v90 = 0;
  v134 = 0x100017FFFFFFFLL;
  v135 = 0;
  sub_15B7350(&v133, v90);
  sub_18572D0(v90);
  *(_QWORD *)v90 = 0;
  v136 = 0;
  v137 = 0x13FFFFFFFLL;
  sub_15B3AA0(&v136, v90);
  sub_18572D0(v90);
  *(_QWORD *)v90 = 0;
  v138 = 1000;
  v139 = 1;
  sub_15B6C70(&v138, v90);
  sub_18572D0(v90);
  v152 = 0x10100000003E8LL;
  v145 = xmmword_18B64D0;
  v157 = 0x2000000000LL;
  v146 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v159 = 0x6400000001LL;
  v150 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v140 = 1;
  v160 = 0x3FF199999999999ALL;
  v141 = 257;
  v142 = 2;
  v143 = 0;
  v144 = 0;
  v147 = 100;
  v148 = 1;
  v149 = -1;
  v151 = 1;
  v153 = 0;
  v154 = 0;
  v155 = 256;
  v156 = 1;
  v158 = 0;
  v161 = 1;
  v163 = 0;
  v164 = 0;
  v162 = xmmword_18B6500;
  v165 = 0x138800000064LL;
  v166 = 0x3FF199999999999ALL;
  v169 = 0x3FF0000000000000LL;
  v168 = 6;
  v170 = 0;
  v172 = 0x1000000;
  v171 = 0;
  v173 = 0;
  v174 = 0;
  v175 = 0x100000000000100LL;
  v167 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  sub_180C5A0(v176, "auto");
  sub_15B65B0(v92, a2);
  v5 = sub_186B270(0x40u);
  *(_QWORD *)(v5 + 8) = a1;
  *(_DWORD *)(v5 + 32) = 0;
  v6 = *(_QWORD *)v61 + 104LL;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)v61;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)v61 + 104LL;
  *(_QWORD *)v5 = &off_1C4C570;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)v90 = 0;
  sub_14B7810(v5 + 48, a1, (int)v90, v7, v8, v9, v58);
  sub_18572D0(v90);
  sub_1863170(v5 + 40, a2);
  sub_14B5FE0(v5 + 48, v5 + 40);
  v66 = v5;
  v10 = (_QWORD *)(a3 + 32);
  sub_E62020((_QWORD *)(a3 + 32), &v66);
  if ( si128.m128i_i8[4] )
  {
    v57 = sub_186B270(0x98u);
    sub_F8AC90(v57, a1, a2, *(_QWORD *)v61);
    v67 = v57;
    sub_E62020(v10, &v67);
  }
  if ( si128.m128i_i8[6] )
  {
    v56 = sub_186B270(0xD0u);
    sub_F22B90(v56, a1, *(_QWORD *)v61);
    v68 = v56;
    sub_E62020(v10, &v68);
  }
  if ( si128.m128i_i8[5] )
  {
    v52 = sub_186B270(0xB8u);
    sub_F2D210(v52, a1, v61[0], v53, v54, v55, (_DWORD)v59, v61[0], a2, (__int64)&v89);
    v69 = v52;
    sub_E62020(v10, &v69);
  }
  if ( si128.m128i_i8[10] )
  {
    v48 = (_QWORD *)sub_186B270(0x40u);
    v48[1] = a1;
    v48[3] = v6;
    v48[2] = *(_QWORD *)v61;
    *v48 = &off_1C5D0C0;
    sub_13A2DE0(v48 + 4, a1, "z3name");
    sub_14B7810((_DWORD)v48 + 48, a1, v62[0], v49, v50, v51, v59);
    v70 = v48;
    sub_E62020(v10, &v70);
  }
  if ( si128.m128i_i8[3] || si128.m128i_i8[13] )
  {
    v15 = sub_186B270(0x190u);
    sub_EFE0E0(v15, a1, *(_QWORD *)v61);
    v71 = v15;
    sub_E62020(v10, &v71);
    if ( !BYTE6(v109) )
    {
LABEL_12:
      if ( !si128.m128i_i8[1] )
        goto LABEL_13;
      goto LABEL_26;
    }
  }
  else if ( !BYTE6(v109) )
  {
    goto LABEL_12;
  }
  v72 = sub_E66A70(a1, *(_QWORD *)v62, *(_QWORD *)v61);
  sub_E62020(v10, &v72);
  if ( !si128.m128i_i8[1] )
  {
LABEL_13:
    if ( !si128.m128i_i8[15] )
      goto LABEL_14;
    goto LABEL_27;
  }
LABEL_26:
  v16 = (_QWORD *)sub_186B270(0x28u);
  v16[1] = a1;
  v16[3] = v6;
  v16[2] = *(_QWORD *)v61;
  *v16 = &off_1C4C270;
  sub_13ACB90(v16 + 4, a1);
  v73 = v16;
  sub_E62020(v10, &v73);
  if ( !si128.m128i_i8[15] )
  {
LABEL_14:
    if ( !si128.m128i_i8[7] )
      goto LABEL_15;
    goto LABEL_28;
  }
LABEL_27:
  v74 = sub_F72960(a1, *(_QWORD *)v62, *(_QWORD *)v61);
  sub_E62020(v10, &v74);
  if ( !si128.m128i_i8[7] )
  {
LABEL_15:
    if ( !HIBYTE(v134) )
      goto LABEL_16;
    goto LABEL_29;
  }
LABEL_28:
  v17 = (_QWORD *)sub_186B270(0x20u);
  v17[1] = a1;
  v17[3] = v6;
  v17[2] = *(_QWORD *)v61;
  *v17 = off_1C4C508;
  v75 = v17;
  sub_E62020(v10, &v75);
  if ( !HIBYTE(v134) )
  {
LABEL_16:
    if ( !si128.m128i_i8[11] )
      goto LABEL_17;
    goto LABEL_30;
  }
LABEL_29:
  v18 = sub_186B270(0x70u);
  *(_QWORD *)(v18 + 8) = a1;
  *(_QWORD *)(v18 + 24) = v6;
  *(_QWORD *)(v18 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v18 = &off_1C5F510;
  sub_16744A0(v18 + 32, a1);
  *(_QWORD *)v90 = 0;
  sub_14B7810(v18 + 56, a1, (int)v90, v19, v20, v21, v59);
  sub_18572D0(v90);
  v22 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v18 + 72) = v22;
  *(_QWORD *)(v18 + 80) = 8;
  *(_DWORD *)(v18 + 88) = 0;
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  *(_OWORD *)(v18 + 96) = 0;
  v76 = v18;
  sub_E62020(v10, &v76);
  if ( !si128.m128i_i8[11] )
  {
LABEL_17:
    if ( !v97 )
      goto LABEL_18;
    goto LABEL_31;
  }
LABEL_30:
  v23 = (_QWORD *)sub_186B270(0x20u);
  v23[1] = a1;
  v23[3] = v6;
  v23[2] = *(_QWORD *)v61;
  v77 = v23;
  *v23 = off_1C5F440;
  sub_E62020(v10, &v77);
  if ( !v97 )
  {
LABEL_18:
    if ( !si128.m128i_i8[8] )
      goto LABEL_19;
    goto LABEL_32;
  }
LABEL_31:
  v24 = sub_186B270(0xC58u);
  *(_QWORD *)(v24 + 8) = a1;
  *(_QWORD *)(v24 + 24) = v6;
  *(_QWORD *)(v24 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v24 = &off_1C5F128;
  sub_16669D0(v24 + 32, a1);
  *(_QWORD *)(v24 + 48) = 0;
  *(_QWORD *)v90 = 0;
  sub_14B7810(v24 + 56, a1, (int)v90, v25, v26, v27, v59);
  sub_18572D0(v90);
  sub_1839FF0(v24 + 72);
  *(_QWORD *)(v24 + 672) = 0;
  *(_QWORD *)(v24 + 680) = 0;
  *(_QWORD *)(v24 + 688) = 0;
  *(_QWORD *)(v24 + 696) = 0;
  *(_QWORD *)(v24 + 704) = 0;
  *(_QWORD *)(v24 + 712) = 0;
  *(_QWORD *)(v24 + 720) = 0;
  *(_QWORD *)(v24 + 728) = 0;
  *(_QWORD *)(v24 + 736) = 0;
  *(_QWORD *)(v24 + 744) = 0;
  *(_QWORD *)(v24 + 752) = 1;
  *(_QWORD *)(v24 + 760) = 0;
  *(_QWORD *)(v24 + 768) = 0;
  *(_QWORD *)(v24 + 776) = 0;
  *(_QWORD *)(v24 + 784) = 1;
  *(_QWORD *)(v24 + 792) = 0;
  sub_17E9B40(v24 + 800, "unknown");
  sub_F49A30(v24 + 1320, v24 + 72, v24 + 800, *(_QWORD *)v62);
  sub_180C0A0(v24 + 1608);
  *(_QWORD *)(v24 + 1664) = 0;
  *(_QWORD *)(v24 + 1648) = v24 + 1600;
  *(_QWORD *)(v24 + 1656) = v24 + 1608;
  *(_QWORD *)(v24 + 1672) = v24 + 1600;
  sub_1839FF0(v24 + 1680);
  *(_QWORD *)(v24 + 2280) = 0;
  *(_QWORD *)(v24 + 2288) = 0;
  *(_QWORD *)(v24 + 2296) = 0;
  *(_QWORD *)(v24 + 2304) = 0;
  *(_QWORD *)(v24 + 2312) = 0;
  *(_QWORD *)(v24 + 2320) = 0;
  *(_QWORD *)(v24 + 2328) = 0;
  *(_QWORD *)(v24 + 2336) = 0;
  *(_QWORD *)(v24 + 2344) = 0;
  *(_QWORD *)(v24 + 2352) = 0;
  *(_QWORD *)(v24 + 2360) = 1;
  *(_QWORD *)(v24 + 2368) = 0;
  *(_QWORD *)(v24 + 2376) = 0;
  *(_QWORD *)(v24 + 2384) = 0;
  *(_QWORD *)(v24 + 2392) = 1;
  *(_QWORD *)(v24 + 2400) = 0;
  *(_QWORD *)(v24 + 2408) = v24 + 1680;
  *(_QWORD *)(v24 + 2416) = v24 + 1600;
  *(_QWORD *)v90 = v24 + 1680;
  v91 = v24 + 1600;
  sub_17700C0(v24 + 2424, a1, v90);
  *(_QWORD *)(v24 + 3112) = a1;
  *(_QWORD *)(v24 + 3120) = 0;
  *(_QWORD *)(v24 + 3128) = v24 + 72;
  *(_QWORD *)(v24 + 3136) = 0;
  *(_QWORD *)(v24 + 3144) = 0;
  *(_DWORD *)(v24 + 3152) = 0;
  *(_OWORD *)(v24 + 3096) = 0;
  sub_1863170(v24 + 48, *(_QWORD *)v62);
  sub_F49DD0(v24 + 1320, v24 + 48);
  v28 = sub_186B270(0x30u);
  *(_QWORD *)(v28 + 8) = a1;
  *(_QWORD *)(v28 + 24) = v6;
  *(_QWORD *)(v28 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v28 = &off_1C4C960;
  *(_QWORD *)(v28 + 32) = 0;
  *(_BYTE *)(v28 + 40) = 0;
  v65 = v28;
  v29 = sub_186B270(0x40u);
  *(_QWORD *)(v29 + 8) = a1;
  *(_QWORD *)(v29 + 24) = v6;
  *(_QWORD *)(v29 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v29 = &off_1C4C570;
  *(_DWORD *)(v29 + 32) = 0;
  *(_QWORD *)(v29 + 40) = 0;
  *(_QWORD *)v90 = 0;
  sub_14B7810(v29 + 48, a1, (int)v90, v61[0], v30, v31, v60);
  sub_18572D0(v90);
  sub_1863170(v29 + 40, *(_QWORD *)v62);
  sub_14B5FE0(v29 + 48, v29 + 40);
  *(_QWORD *)v90 = v29;
  sub_E62020((_QWORD *)(v65 + 32), v90);
  v32 = sub_186B270(0x98u);
  sub_F8AC90(v32, a1, *(_QWORD *)v62, *(_QWORD *)v61);
  v89 = v32;
  sub_E62020((_QWORD *)(v65 + 32), v63);
  v33 = sub_186B270(0xD0u);
  sub_F22B90(v33, a1, *(_QWORD *)v61);
  v88 = v33;
  sub_E62020((_QWORD *)(v65 + 32), &v88);
  v34 = sub_186B270(0x30u);
  *(_QWORD *)(v34 + 8) = a1;
  *(_QWORD *)(v34 + 24) = v6;
  *(_QWORD *)(v34 + 16) = *(_QWORD *)v61;
  *(_QWORD *)(v34 + 32) = 0;
  *(_QWORD *)v34 = &off_1C5D128;
  *(_BYTE *)(v34 + 40) = 1;
  v86 = v24;
  sub_E62020((_QWORD *)(v34 + 32), &v86);
  v87 = v65;
  sub_E62020((_QWORD *)(v34 + 32), &v87);
  v78 = v34;
  sub_E62020(v10, &v78);
  if ( !si128.m128i_i8[8] )
  {
LABEL_19:
    if ( !si128.m128i_i8[9] )
      goto LABEL_20;
    goto LABEL_33;
  }
LABEL_32:
  v35 = sub_186B270(0x250u);
  *(_QWORD *)(v35 + 8) = a1;
  v36 = *(_DWORD *)(a1 + 712);
  *(_QWORD *)(v35 + 24) = v6;
  *(_QWORD *)(v35 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v35 = &off_1C4C140;
  sub_1584DD0(v35 + 32, a1, v36 != 0);
  *(_QWORD *)(v35 + 176) = v35 + 568;
  *(_QWORD *)(v35 + 32) = &off_1C4C100;
  *(_DWORD *)(v35 + 184) = 0;
  *(_QWORD *)(v35 + 192) = 0;
  sub_1584DD0(v35 + 200, a1, 0);
  *(_QWORD *)(v35 + 344) = 0;
  *(_DWORD *)(v35 + 352) = 0;
  *(_QWORD *)(v35 + 200) = &off_1C61DB8;
  sub_1584DD0(v35 + 360, a1, 0);
  *(_DWORD *)(v35 + 504) = 0;
  *(_QWORD *)(v35 + 512) = 0;
  *(_QWORD *)(v35 + 520) = a1;
  *(_QWORD *)(v35 + 360) = &off_1C61DE0;
  *(_QWORD *)(v35 + 528) = 0;
  *(_QWORD *)(v35 + 536) = a1;
  *(_QWORD *)(v35 + 544) = 0;
  *(_QWORD *)(v35 + 552) = a1;
  *(_QWORD *)(v35 + 560) = 0;
  *(_QWORD *)(v35 + 32) = &off_1C4C120;
  sub_1516000(v35 + 568, a1);
  v79 = v35;
  sub_E62020(v10, &v79);
  if ( !si128.m128i_i8[9] )
  {
LABEL_20:
    if ( !HIBYTE(v93) )
      goto LABEL_21;
LABEL_34:
    v42 = sub_186B270(0x240u);
    *(_QWORD *)(v42 + 8) = a1;
    v43 = *(_DWORD *)(a1 + 712);
    *(_QWORD *)(v42 + 24) = v6;
    *(_QWORD *)(v42 + 16) = *(_QWORD *)v61;
    *(_QWORD *)v42 = &off_1C5CFF0;
    sub_1584DD0(v42 + 32, a1, v43 != 0);
    *(_QWORD *)(v42 + 176) = v42 + 568;
    *(_QWORD *)(v42 + 32) = &off_1C55A80;
    *(_DWORD *)(v42 + 184) = 0;
    *(_QWORD *)(v42 + 192) = 0;
    sub_1584DD0(v42 + 200, a1, 0);
    *(_QWORD *)(v42 + 344) = 0;
    *(_DWORD *)(v42 + 352) = 0;
    *(_QWORD *)(v42 + 200) = &off_1C61DB8;
    sub_1584DD0(v42 + 360, a1, 0);
    *(_QWORD *)(v42 + 520) = a1;
    *(_DWORD *)(v42 + 504) = 0;
    *(_QWORD *)(v42 + 536) = a1;
    *(_QWORD *)(v42 + 360) = &off_1C61DE0;
    *(_QWORD *)(v42 + 512) = 0;
    *(_QWORD *)(v42 + 528) = 0;
    *(_QWORD *)(v42 + 544) = 0;
    *(_QWORD *)(v42 + 552) = a1;
    *(_QWORD *)(v42 + 560) = 0;
    *(_QWORD *)(v42 + 32) = &off_1C58148;
    *(_QWORD *)(v42 + 568) = a1;
    v81 = v42;
    sub_E62020(v10, &v81);
    if ( !si128.m128i_i8[2] )
      goto LABEL_35;
    goto LABEL_22;
  }
LABEL_33:
  v37 = (_QWORD *)sub_186B270(0x148u);
  v37[1] = a1;
  v37[3] = v6;
  v37[2] = *(_QWORD *)v61;
  *v37 = &off_1C4C098;
  sub_1448220((_DWORD)v37 + 32, a1, v38, v39, v40, v41);
  v80 = v37;
  sub_E62020(v10, &v80);
  if ( HIBYTE(v93) )
    goto LABEL_34;
LABEL_21:
  if ( !si128.m128i_i8[2] )
    goto LABEL_35;
LABEL_22:
  if ( (_DWORD)v94 == 2 )
  {
LABEL_23:
    v11 = sub_186B270(0x250u);
    *(_QWORD *)(v11 + 8) = a1;
    v12 = *(_DWORD *)(a1 + 712);
    *(_QWORD *)(v11 + 24) = v6;
    *(_QWORD *)(v11 + 16) = *(_QWORD *)v61;
    v13 = (_DWORD)v94 == 1;
    *(_QWORD *)v11 = &off_1C4C358;
    v14 = v13;
    sub_C16740(v11 + 32, a1, v12 != 0, v11 + 568);
    *(_QWORD *)(v11 + 576) = a1;
    *(_QWORD *)(v11 + 32) = &off_1C4C2F8;
    *(_BYTE *)(v11 + 584) = v14;
    v83 = v11;
    *(_QWORD *)(v11 + 568) = off_1C61D48;
    sub_E62020(v10, &v83);
    goto LABEL_36;
  }
  v47 = (_QWORD *)sub_186B270(0x270u);
  v47[1] = a1;
  v47[3] = v6;
  v47[2] = *(_QWORD *)v61;
  *v47 = &off_1C4C208;
  sub_13A2DE0(v47 + 4, a1, "z3name");
  sub_C16A50((__int64)(v47 + 6), a1, *(_DWORD *)(a1 + 712) != 0, (__int64)(v47 + 73));
  v47[74] = a1;
  v47[6] = &off_1C4C1E8;
  v47[73] = &off_1C4C1A8;
  v47[75] = v47 + 4;
  v47[76] = 0;
  v47[77] = 0;
  v82 = v47;
  sub_E62020(v10, &v82);
LABEL_35:
  if ( (_DWORD)v94 )
    goto LABEL_23;
LABEL_36:
  if ( HIDWORD(v94) )
  {
    v44 = sub_186B270(0x250u);
    *(_QWORD *)(v44 + 8) = a1;
    v13 = HIDWORD(v94) == 1;
    *(_QWORD *)(v44 + 24) = v6;
    *(_QWORD *)(v44 + 16) = *(_QWORD *)v61;
    v45 = v13;
    *(_QWORD *)v44 = &off_1C4C3C0;
    sub_C16870(v44 + 32, a1, *(_DWORD *)(a1 + 712) != 0, v44 + 568);
    *(_QWORD *)(v44 + 576) = a1;
    *(_QWORD *)(v44 + 32) = &off_1C4C338;
    *(_BYTE *)(v44 + 584) = v45;
    v84 = v44;
    *(_QWORD *)(v44 + 568) = off_1C61D70;
    sub_E62020(v10, &v84);
  }
  v46 = sub_186B270(0x28u);
  *(_QWORD *)(v46 + 8) = a1;
  *(_QWORD *)(v46 + 24) = v6;
  *(_QWORD *)(v46 + 16) = *(_QWORD *)v61;
  *(_QWORD *)v46 = off_1C5D058;
  *(_DWORD *)(v46 + 32) = 0;
  v85 = v46;
  sub_E62020(v10, &v85);
  if ( v101 != v103 )
    operator delete(v101, *(_QWORD *)v103 + 1LL);
  if ( v99[0] != v100 )
    operator delete(v99[0], v100[0] + 1LL);
}

