__int64 __fastcall sub_1FAD6E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __m128i si128; // xmm0
  __int64 v7; // rbp
  unsigned int *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rdi
  void **v16; // rdx
  _QWORD *v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 *v20; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // r12
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int8 v59; // cl
  __int64 v60; // rcx
  int v61; // r12d
  unsigned __int64 v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 **v70; // rax
  __int64 *v71; // r15
  __int64 v72; // rsi
  __int64 v73; // r12
  __int64 v74; // rsi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  char v78; // al
  unsigned __int8 v79; // r9
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // rsi
  __int64 *v84; // rax
  __int64 v85; // r12
  void **v86; // r12
  __int64 v87; // rsi
  __int64 v88; // r12
  __int64 v89; // rsi
  void **v90; // r12
  __int64 v91; // rsi
  __int64 (__fastcall *v92)(__int64); // rax
  __int64 v93; // rax
  __int64 v94; // rsi
  _BOOL8 v95; // rsi
  _BOOL8 v96; // rsi
  unsigned int v97; // eax
  __int64 v98; // rax
  _QWORD *v99; // rax
  unsigned __int64 v100; // r15
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 *v104; // r15
  __int64 v105; // rcx
  unsigned __int64 v106; // r12
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rsi
  char v111; // cl
  __int64 v112; // rdx
  unsigned __int64 v113; // rcx
  __int64 v114; // r15
  __int64 v115; // r12
  unsigned __int8 v116; // r9
  void **v117; // r12
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rax
  _DWORD *v121; // r12
  __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  _DWORD *v127; // r15
  __int64 v128; // r12
  __int64 v129; // r12
  unsigned __int8 v130; // r9
  __int64 v131; // [rsp-10h] [rbp-3D8h]
  unsigned int *v132; // [rsp+0h] [rbp-3C8h]
  double v133; // [rsp+8h] [rbp-3C0h] BYREF
  char v134; // [rsp+16h] [rbp-3B2h]
  char v135; // [rsp+17h] [rbp-3B1h]
  __int64 *v136; // [rsp+18h] [rbp-3B0h]
  __int64 v137; // [rsp+20h] [rbp-3A8h]
  void **v138; // [rsp+28h] [rbp-3A0h]
  void *v139; // [rsp+30h] [rbp-398h]
  __int64 *v140; // [rsp+38h] [rbp-390h]
  __m128 v141; // [rsp+40h] [rbp-388h] BYREF
  __int64 v142; // [rsp+50h] [rbp-378h]
  __int64 *v143; // [rsp+58h] [rbp-370h]
  __int64 v144; // [rsp+68h] [rbp-360h] BYREF
  __int64 v145; // [rsp+70h] [rbp-358h] BYREF
  __int64 v146; // [rsp+78h] [rbp-350h]
  unsigned int v147; // [rsp+80h] [rbp-348h]
  __int64 *v148; // [rsp+88h] [rbp-340h] BYREF
  __int64 v149; // [rsp+90h] [rbp-338h]
  __int64 v150; // [rsp+98h] [rbp-330h] BYREF
  __m128i v151; // [rsp+A0h] [rbp-328h] BYREF
  void **v152; // [rsp+B0h] [rbp-318h]
  void *v153[2]; // [rsp+B8h] [rbp-310h] BYREF
  _BYTE v154[128]; // [rsp+C8h] [rbp-300h] BYREF
  void *ptr; // [rsp+148h] [rbp-280h] BYREF
  __int64 v156; // [rsp+150h] [rbp-278h]
  _BYTE v157[40]; // [rsp+158h] [rbp-270h] BYREF
  void *v158[73]; // [rsp+180h] [rbp-248h] BYREF

  v133 = a1;
  v142 = a2;
  v137 = a3;
  v148 = &v150;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v143 = &v145;
  v149 = 0;
  operator delete(0, 0, 8);
  v3 = *(_QWORD *)(a1 + 1288);
  v4 = *(_DWORD *)(a1 + 1304);
  *(_QWORD *)(a1 + 1288) = 0;
  v145 = v3;
  v5 = *(_QWORD *)(a1 + 1296);
  *(_DWORD *)(a1 + 1304) = 0;
  *(_QWORD *)(a1 + 1296) = 0;
  v146 = v5;
  v147 = v4;
  operator delete(0, 0, 8);
  *(_QWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 0;
  operator delete(0, 0, 8);
  sub_1F87E80((__int64)&v148, a1 + 1312);
  v139 = &v148[5 * (unsigned int)v149];
  if ( v148 == v139 )
    goto LABEL_28;
  v136 = v148;
  v138 = v158;
  v141 = _mm_loadh_ps((const double *)&v133);
  do
  {
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&v141);
      v7 = *v136;
      v152 = v138;
      v158[0] = v138 + 2;
      v158[1] = (void *)0x4000000000LL;
      v153[0] = v154;
      v153[1] = (void *)0x1000000000LL;
      ptr = v157;
      v156 = 0x800000000LL;
      v151 = si128;
      v8 = (unsigned int *)v136[1];
      v132 = &v8[4 * *((unsigned int *)v136 + 4)];
      if ( v8 == v132 )
      {
        if ( *(_BYTE *)(v133 + 157) )
          sub_1FB2220(v7);
      }
      else
      {
        v135 = 0;
        v134 = 0;
        v140 = &v144;
        do
        {
          while ( 1 )
          {
            v9 = *v8;
            if ( (_DWORD)v9 == 2 )
              break;
            if ( (_DWORD)v9 == 3 )
            {
              v135 = 1;
            }
            else
            {
              sub_9B9C90((__int64)v152, (int)v9);
              switch ( v9 )
              {
                case 0LL:
                case 1LL:
                  v86 = v152;
                  v87 = sub_1F92240(v151.m128i_i64[1], *((_QWORD *)v8 + 1));
                  sub_9B9C90((__int64)v86, v87);
                  break;
                case 4LL:
                  sub_1F6F570((_QWORD *)v151.m128i_i64[1], v8[2], (__int64)v152);
                  break;
                case 5LL:
                  v50 = 0;
                  v144 = sub_B91570(v7 + 64, (int)v9, v22, (__int64)v23, v24, v25);
                  sub_1FAA800(v133 + 2528, v140, v51, v52, v53, v54);
                  sub_9B9C90((__int64)v152, (*(_DWORD *)(v7 + 76) & 8) != 0);
                  sub_9B9C90((__int64)v152, (*(_BYTE *)(v7 + 76) >> 4) & 3);
                  sub_1FA1600(v151.m128i_i64, v7, v55, v56, v57, v58);
                  if ( sub_B8E990(v7 + 64) )
                    goto LABEL_77;
                  if ( !*(_BYTE *)(v133 + 157) )
                    goto LABEL_76;
                  v59 = *(_BYTE *)(v7 + 72) & 0x7F;
                  if ( v59 <= 0x12u )
                  {
                    if ( ((1LL << v59) & 0x40182) != 0 )
                      goto LABEL_77;
LABEL_76:
                    v50 = sub_1F96FE0(v133, v7 + 64);
                    goto LABEL_77;
                  }
                  if ( ((v59 + 94) & 0x7Fu) > 5 )
                    goto LABEL_76;
LABEL_77:
                  v60 = (unsigned int)v156;
                  v61 = *((_DWORD *)v152 + 2);
                  v62 = (unsigned int)v156 + 1LL;
                  if ( v62 > HIDWORD(v156) )
                  {
                    sub_2237220(&ptr, v157, v62, 4);
                    v60 = (unsigned int)v156;
                  }
                  *((_DWORD *)ptr + v60) = v61;
                  LODWORD(v156) = v156 + 1;
                  sub_9B9C90((__int64)v152, v50);
                  v63 = (__int64 *)sub_B97210(v7);
                  v64 = v63;
                  if ( v63 )
                  {
                    sub_9B9C90((__int64)v152, ((*v63 >> 1) & 3) + 1);
                    sub_1F6F570((_QWORD *)v151.m128i_i64[1], *((_DWORD *)v64 + 2), (__int64)v152);
                  }
                  else
                  {
                    v97 = sub_B97260(v7);
                    sub_9B9C90((__int64)v152, v97);
                    sub_1F6F570((_QWORD *)v151.m128i_i64[1], *(_DWORD *)(v7 + 176), (__int64)v152);
                    if ( (*(_BYTE *)(v7 + 180) & 5) != 0
                      && (v98 = *(_QWORD *)(v7 + 152)) != 0
                      && (v98 & 4) != 0
                      && (v99 = (_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
                      && (v100 = *v99 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      sub_9B9C90((__int64)v152, 1);
                      v117 = v152;
                      v118 = sub_1F92240(v151.m128i_i64[1], v100);
                      sub_9B9C90((__int64)v117, v118);
                      v119 = *(_QWORD *)(v7 + 152);
                      if ( v119 && (v119 & 4) != 0 && (v120 = v119 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                        v121 = *(_DWORD **)(v120 + 8);
                      else
                        v121 = *(_DWORD **)(v7 + 168);
                      v122 = (unsigned int)*v121;
                      sub_9B9C90((__int64)v152, v122);
                      if ( *v121 )
                      {
                        v127 = v121 + 2;
                        v128 = (__int64)&v121[6 * (*v121 - 1) + 8];
                        do
                        {
                          v131 = *((_QWORD *)v127 + 2);
                          v127 += 6;
                          sub_1F992F0(
                            v151.m128i_i64,
                            v122,
                            v123,
                            v124,
                            v125,
                            v126,
                            *((_QWORD *)v127 - 3),
                            *((void **)v127 - 2),
                            v131);
                        }
                        while ( (_DWORD *)v128 != v127 );
                      }
                    }
                    else
                    {
                      sub_1F6B920((__int64)v152);
                    }
                  }
                  sub_9B9C90((__int64)v152, *(_BYTE *)(v7 + 73) >> 5);
                  sub_1F6F570((_QWORD *)v151.m128i_i64[1], *(_DWORD *)(v7 + 24), (__int64)v152);
                  sub_1F6F570((_QWORD *)v151.m128i_i64[1], *(_DWORD *)(v7 + 56), (__int64)v152);
                  sub_1F6F5B0((_QWORD *)v151.m128i_i64[1], *(_QWORD *)(v7 + 112), (__int64)v152);
                  v65 = *(_BYTE *)(v7 + 29) & 1;
                  sub_9B9C90((__int64)v152, v65);
                  if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
                  {
                    v70 = (__int64 **)sub_B8C3D0(v7, v65, v66, v67, v68, v69);
                    v71 = *v70;
                    v72 = *((unsigned int *)v70 + 2);
                    v73 = (__int64)&(*v70)[v72];
                    sub_9B9C90((__int64)v152, v72);
                    while ( (__int64 *)v73 != v71 )
                    {
                      v74 = *v71++;
                      sub_1F9A7E0(v151.m128i_i64, v74);
                    }
                  }
                  break;
                case 6LL:
                  v49 = sub_B74740(*((_QWORD *)v8 + 1));
                  sub_183F100((__int64)v153, v49);
                  break;
                case 7LL:
                  v94 = sub_B780B0(*((_QWORD *)v8 + 1));
                  sub_183F100((__int64)v153, v94);
                  break;
                case 8LL:
                  v90 = v152;
                  v91 = sub_1F92240(v151.m128i_i64[1], *((_QWORD *)v8 + 1));
                  sub_9B9C90((__int64)v90, v91);
                  v92 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
                  if ( v92 == sub_B94CD0 )
                    v93 = sub_B709C0(v7);
                  else
                    v93 = v92(v7);
                  sub_183F100((__int64)v153, *(_QWORD *)(v93 + 176));
                  break;
                case 9LL:
                  v76 = *(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL;
                  v77 = *(_QWORD *)v76;
                  if ( *(_BYTE *)(*(_QWORD *)v76 + 16LL) != 26 )
                    v77 = sub_F63050(v77, (int)v9, v22, v23);
                  v78 = *(_BYTE *)(v77 + 19);
                  v79 = ((unsigned __int8)v78 >> 1) & 0xF;
                  if ( v79 == 2 )
                  {
                    v101 = 8LL * *(unsigned __int16 *)(v77 + 22) + 48;
                    v102 = *(_QWORD *)(v77 + 16);
                    v103 = (v102 & 0x40000000) != 0;
                    if ( (v78 & 0x40) != 0 )
                      v103 += (*(_BYTE *)(((v77 + v101 + ((v78 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                    v104 = (__int64 *)(((v77 + v101 + ((SBYTE3(v102) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v103);
                    v105 = (v102 & 0x40000000) != 0;
                    if ( (v78 & 0x40) != 0 )
                      v105 += (*(_BYTE *)(((v77 + v101 + ((v78 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                    v106 = ((v77 + v101 + ((SBYTE3(v102) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                         + 8
                         * ((*(_WORD *)((v77 + v101 + ((SBYTE3(v102) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF)
                          + v105);
                    sub_9B9C90((__int64)v152, 2);
                    sub_9B9C90((__int64)v152, (unsigned int)((__int64)(v106 - (_QWORD)v104) >> 3));
                    while ( (__int64 *)v106 != v104 )
                    {
                      v109 = *v104++;
                      sub_1F85840(v151.m128i_i64[1], v151.m128i_i64[0], v109, v152, v107, v108);
                    }
                  }
                  else if ( (unsigned int)v79 - 6 > 2 )
                  {
                    if ( v79 == 10 )
                    {
                      v110 = 8LL * *(unsigned __int16 *)(v77 + 22) + 48;
                      v111 = BYTE3(*(_QWORD *)(v77 + 16));
                      v112 = (v111 & 0x40) != 0;
                      v113 = (v77 + v110 + ((v111 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v78 & 0x40) != 0 )
                        v112 += (*(_BYTE *)(((v77 + v110 + ((v78 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                      v114 = *(_QWORD *)(v113 + 8 * v112);
                      v115 = *(_QWORD *)(sub_1F6CA20(v77) + 8);
                      sub_9B9C90((__int64)v152, v116);
                      sub_1F952B0((__int64)&v151, v114);
                      sub_1F952B0((__int64)&v151, v115);
                    }
                    else if ( v79 == 9 )
                    {
                      v129 = *(_QWORD *)sub_1F6CA20(v77);
                      sub_9B9C90((__int64)v152, v130);
                      sub_1F952B0((__int64)&v151, v129);
                    }
                    else
                    {
                      sub_9B9C90((__int64)v152, v79);
                    }
                  }
                  else
                  {
                    v80 = 8LL * *(unsigned __int16 *)(v77 + 22) + 48;
                    v81 = *(_QWORD *)(v77 + 16);
                    v82 = (v81 & 0x40000000) != 0;
                    v83 = (v77 + v80 + ((SBYTE3(v81) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v78 & 0x40) != 0 )
                      v82 += (*(_BYTE *)(((v77 + v80 + ((v78 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                    v84 = (__int64 *)(v83 + 8 * v82);
                    if ( v79 == 2 )
                      v84 = (__int64 *)(v83
                                      + 8
                                      * ((*(_WORD *)((v77 + ((SBYTE3(v81) >> 5) & 4) + v80 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                                        & 0x3FF)
                                       + v82));
                    v85 = *v84;
                    sub_9B9C90((__int64)v152, v79);
                    sub_183F100((__int64)v153, v85);
                  }
                  break;
                case 10LL:
                  LOWORD(v75) = sub_1F854E0(v142, *((_QWORD *)v8 + 1), v133, v23, v24, v25);
                  sub_9B9C90((__int64)v152, v75);
                  break;
                case 12LL:
                case 13LL:
                  sub_9B9C90((__int64)v152, v8[2]);
                  break;
                case 14LL:
                  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
                    goto LABEL_171;
                  v45 = sub_B8C3D0(v7, (int)v9, v22, (__int64)v23, v24, v25);
                  v46 = *v45;
                  v47 = *v45 + 8LL * *((unsigned int *)v45 + 2);
                  if ( v46 >= v47 )
                  {
                    if ( v46 == v47 )
                      goto LABEL_171;
                    while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 297 )
                    {
                      v47 += 8LL;
                      if ( v46 == v47 )
                        goto LABEL_171;
                    }
                  }
                  else
                  {
                    v48 = v46;
                    while ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 297 )
                    {
                      v48 += 8LL;
                      if ( v47 == v48 )
                        goto LABEL_171;
                    }
                    if ( v47 == v48 )
LABEL_171:
                      BUG();
                  }
                  while ( 1 )
                  {
                    v39 = *(_QWORD *)v46;
                    if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 297 )
                      break;
                    v46 += 8LL;
                  }
                  goto LABEL_50;
                case 15LL:
                  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
                    goto LABEL_172;
                  v40 = sub_B8C3D0(v7, (int)v9, v22, (__int64)v23, v24, v25);
                  v41 = *v40;
                  v42 = *v40 + 8LL * *((unsigned int *)v40 + 2);
                  if ( v41 >= v42 )
                  {
                    if ( v41 == v42 )
                      goto LABEL_172;
                    while ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 292 )
                    {
                      v42 += 8LL;
                      if ( v41 == v42 )
                        goto LABEL_172;
                    }
                  }
                  else
                  {
                    v43 = v41;
                    while ( *(_WORD *)(*(_QWORD *)v43 + 36LL) != 292 )
                    {
                      v43 += 8LL;
                      if ( v42 == v43 )
                        goto LABEL_172;
                    }
                    if ( v42 == v43 )
LABEL_172:
                      BUG();
                  }
                  while ( 1 )
                  {
                    v44 = *(_QWORD *)v41;
                    if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) == 292 )
                      break;
                    v41 += 8LL;
                  }
                  sub_9B9C90((__int64)v152, *(unsigned int *)(v44 + 40));
                  sub_183F100((__int64)v153, *(_QWORD *)(v44 + 48));
                  sub_183F100((__int64)v153, *(_QWORD *)(v44 + 56));
                  sub_1F6F5B0((_QWORD *)v151.m128i_i64[1], *(_QWORD *)(v44 + 24), (__int64)v152);
                  break;
                case 16LL:
                  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
                    goto LABEL_169;
                  v26 = sub_B8C3D0(v7, (int)v9, v22, (__int64)v23, v24, v25);
                  v27 = *v26;
                  v28 = *v26 + 8LL * *((unsigned int *)v26 + 2);
                  if ( v27 >= v28 )
                  {
                    if ( v27 == v28 )
                      goto LABEL_169;
                    while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 295 )
                    {
                      v28 += 8LL;
                      if ( v27 == v28 )
                        goto LABEL_169;
                    }
                  }
                  else
                  {
                    v29 = v27;
                    while ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 295 )
                    {
                      v29 += 8LL;
                      if ( v28 == v29 )
                        goto LABEL_169;
                    }
                    if ( v28 == v29 )
LABEL_169:
                      BUG();
                  }
                  while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 295 )
                    v27 += 8LL;
                  v30 = *(unsigned int *)(*(_QWORD *)v27 + 40LL);
                  sub_9B9C90((__int64)v152, v30);
                  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
                    goto LABEL_170;
                  v35 = sub_B8C3D0(v7, v30, v31, v32, v33, v34);
                  v36 = *v35;
                  v37 = *v35 + 8LL * *((unsigned int *)v35 + 2);
                  if ( v36 >= v37 )
                  {
                    if ( v36 == v37 )
                      goto LABEL_170;
                    while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 295 )
                    {
                      v37 += 8LL;
                      if ( v36 == v37 )
                        goto LABEL_170;
                    }
                  }
                  else
                  {
                    v38 = v36;
                    while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 295 )
                    {
                      v38 += 8LL;
                      if ( v37 == v38 )
                        goto LABEL_170;
                    }
                    if ( v37 == v38 )
LABEL_170:
                      BUG();
                  }
                  while ( 1 )
                  {
                    v39 = *(_QWORD *)v36;
                    if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 295 )
                      break;
                    v36 += 8LL;
                  }
LABEL_50:
                  sub_1F6F5B0((_QWORD *)v151.m128i_i64[1], *(_QWORD *)(v39 + 24), (__int64)v152);
                  break;
                case 17LL:
                  v89 = (unsigned int)sub_1F82A80(v133, *((_QWORD *)v8 + 1));
                  sub_9B9C90((__int64)v152, v89);
                  break;
                case 18LL:
                  v88 = *((_QWORD *)v8 + 1);
                  sub_9B9C90((__int64)v152, 1);
                  sub_1F9A7E0(v151.m128i_i64, v88);
                  break;
                default:
                  break;
              }
            }
            v8 += 4;
            if ( v132 == v8 )
              goto LABEL_10;
          }
          v134 = 1;
          v8 += 4;
        }
        while ( v132 != v8 );
LABEL_10:
        if ( *(_BYTE *)(v133 + 157) )
        {
          if ( (unsigned __int8)sub_1FB2220(v7) )
            goto LABEL_13;
          if ( v134 )
          {
LABEL_110:
            sub_9B9C90((__int64)v152, 2);
            sub_9B9C90((__int64)v152, (*(_QWORD *)(v7 + 80) >> 16) & 1LL);
            sub_1F6F570((_QWORD *)v151.m128i_i64[1], *(_DWORD *)(v7 + 64), (__int64)v152);
            sub_1FB2560(&v151, v7);
            goto LABEL_13;
          }
        }
        else if ( v134 )
        {
          goto LABEL_110;
        }
        if ( v135 )
        {
          sub_9B9C90((__int64)v152, 3);
          v95 = 0;
          if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B )
            v95 = (*(_BYTE *)(v7 + 97) & 0x20) != 0;
          sub_9B9C90((__int64)v152, v95);
          v96 = 0;
          if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B )
            v96 = (*(_BYTE *)(v7 + 97) & 0x40) != 0;
          sub_9B9C90((__int64)v152, v96);
          sub_1F991F0(v151.m128i_i64, v7);
        }
      }
LABEL_13:
      v10 = sub_1F92240(v133, v7);
      sub_9B9C90(v137, v10);
      v11 = *(_QWORD *)(v151.m128i_i64[1] + 16);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL);
      v13 = *(unsigned int *)(v11 + 48) + 8 * (sub_A1F730(v11) + v12);
      v14 = (char *)ptr;
      v15 = (char *)ptr + 4 * (unsigned int)v156;
      v16 = v152;
      if ( ptr != v15 )
      {
        do
        {
          v17 = (char *)*v16 + 8 * *(unsigned int *)v14;
          if ( *v17 )
          {
            *v17 = v13 - *v17;
            v16 = v152;
          }
          v14 += 4;
        }
        while ( v15 != v14 );
      }
      LODWORD(v156) = 0;
      sub_1F6E900(*(_QWORD *)(v151.m128i_i64[1] + 16), 0x31u, (__int64)v16);
      sub_1FCF3C0(&v151);
      sub_9B9C90(v137, v13);
      if ( ptr != v157 )
        free(ptr);
      if ( v153[0] != v154 )
        free(v153[0]);
      if ( v158[0] == v138 + 2 )
        break;
      free(v158[0]);
      v136 += 5;
      if ( v139 == v136 )
        goto LABEL_23;
    }
    v136 += 5;
  }
  while ( v139 != v136 );
LABEL_23:
  v18 = v148;
  v139 = &v148[5 * (unsigned int)v149];
  if ( v148 != v139 )
  {
    v19 = &v148[5 * (unsigned int)v149];
    do
    {
      while ( 1 )
      {
        v19 -= 5;
        v20 = (__int64 *)v19[1];
        if ( v20 == v19 + 3 )
          break;
        free(v20);
        if ( v18 == v19 )
          goto LABEL_27;
      }
    }
    while ( v18 != v19 );
LABEL_27:
    v139 = v148;
  }
LABEL_28:
  if ( v139 != v143 + 5 )
    free(v139);
  return operator delete(v145, 16LL * v147, 8);
}
