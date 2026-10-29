__int64 __fastcall sub_1A5A1A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r14d
  __int64 *v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  _QWORD *v35; // r12
  __int64 v36; // rbp
  _QWORD *v37; // r15
  unsigned __int64 v38; // r12
  unsigned __int8 v39; // bp
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdx
  int v44; // eax
  int v45; // r10d
  unsigned __int8 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __m128 v50; // xmm0
  __int64 v51; // r14
  __int64 v52; // rcx
  char v53; // r13
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  char v57; // r13
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r14
  char v63; // r13
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  char v67; // r13
  char v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // r14
  __int16 v72; // ax
  unsigned __int8 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rsi
  char v77; // r9
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // r13
  __int64 v82; // rdx
  unsigned __int64 v83; // r14
  __int64 v84; // rsi
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rax
  int v90; // eax
  _QWORD *v91; // r14
  _QWORD *v92; // rbp
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rax
  _QWORD *v95; // rbx
  _QWORD *v96; // r13
  _QWORD *v97; // rdi
  void *v98; // rdi
  void **v99; // rbx
  void **v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rcx
  char v103; // r9d^3
  __int64 v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 *v111; // rax
  _QWORD *v112; // [rsp+10h] [rbp-308h]
  __int64 v113; // [rsp+20h] [rbp-2F8h] BYREF
  unsigned __int8 v114; // [rsp+2Fh] [rbp-2E9h]
  __int64 v115; // [rsp+30h] [rbp-2E8h]
  __int64 v116; // [rsp+38h] [rbp-2E0h]
  unsigned __int64 v117; // [rsp+40h] [rbp-2D8h] BYREF
  unsigned __int64 v118; // [rsp+48h] [rbp-2D0h]
  __int64 v119; // [rsp+54h] [rbp-2C4h]
  int v120; // [rsp+5Ch] [rbp-2BCh]
  __m128i v121; // [rsp+60h] [rbp-2B8h] BYREF
  int v122; // [rsp+70h] [rbp-2A8h]
  int v123; // [rsp+78h] [rbp-2A0h]
  unsigned __int64 v124; // [rsp+80h] [rbp-298h]
  __int64 v125; // [rsp+88h] [rbp-290h]
  __m128 v126; // [rsp+90h] [rbp-288h]
  __int64 v127; // [rsp+A0h] [rbp-278h]
  unsigned __int64 v128; // [rsp+A8h] [rbp-270h]
  int v129; // [rsp+B0h] [rbp-268h]
  unsigned __int64 v130; // [rsp+B8h] [rbp-260h]
  __int64 v131; // [rsp+C0h] [rbp-258h]
  __int64 v132; // [rsp+C8h] [rbp-250h]
  __int64 v133; // [rsp+D0h] [rbp-248h]
  __int128 v134; // [rsp+E0h] [rbp-238h] BYREF
  int v135; // [rsp+F0h] [rbp-228h]
  __int16 v136; // [rsp+F4h] [rbp-224h]
  __int64 v137; // [rsp+F8h] [rbp-220h]
  _BYTE *v138; // [rsp+100h] [rbp-218h]
  __int64 v139; // [rsp+108h] [rbp-210h]
  _BYTE v140[128]; // [rsp+110h] [rbp-208h] BYREF
  __int64 v141; // [rsp+190h] [rbp-188h]
  __int64 v142; // [rsp+198h] [rbp-180h]
  __int64 v143; // [rsp+1A0h] [rbp-178h]
  __int64 v144; // [rsp+1B0h] [rbp-168h]
  __int64 v145; // [rsp+1B8h] [rbp-160h]
  int v146; // [rsp+1C8h] [rbp-150h]
  char v147; // [rsp+1CCh] [rbp-14Ch]
  void *v148; // [rsp+1D0h] [rbp-148h]
  __int64 v149; // [rsp+1D8h] [rbp-140h]
  _QWORD v150[10]; // [rsp+1E0h] [rbp-138h] BYREF
  void *v151; // [rsp+230h] [rbp-E8h]
  __int64 v152; // [rsp+238h] [rbp-E0h]
  _WORD v153[52]; // [rsp+240h] [rbp-D8h] BYREF
  void *ptr; // [rsp+2A8h] [rbp-70h]
  __int64 v155; // [rsp+2B0h] [rbp-68h]
  _BYTE v156[96]; // [rsp+2B8h] [rbp-60h] BYREF

  v9 = a2;
  v10 = *(_QWORD *)(a2 + 120);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
    sub_1A3D950(a1, v10, *(unsigned int *)(v9 + 128), a3, a5, a6, a7, a8);
    v10 = *(_QWORD *)(v9 + 120);
  }
  v11 = sub_B94670(a3, v10, a3, a4, a5, a6);
  if ( v11 )
  {
    v16 = 0;
    v17 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v11 & 4) != 0 )
    {
      while ( v17 )
      {
        v18 = sub_1A47770(v9, *v17, v12, v13, v14, v15);
        if ( v18 )
          goto LABEL_7;
LABEL_9:
        v19 = v17[1];
        if ( !v19 )
          goto LABEL_17;
        v17 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v19 & 4) == 0 )
          goto LABEL_11;
      }
      v18 = sub_1A47770(v9, 0, v12, v13, v14, v15);
      if ( !v18 )
        goto LABEL_17;
LABEL_7:
      *(_QWORD *)&v134 = (unsigned __int64)v18 | (*((_BYTE *)v18 + 29) >> 5) & 3;
      sub_1743080(v9 + 8, v134);
      *(_DWORD *)v9 = 2;
      if ( !v17 )
        goto LABEL_13;
      v16 = 1;
      goto LABEL_9;
    }
LABEL_11:
    v20 = sub_1A47770(v9, (__int64)v17, v12, v13, v14, v15);
    if ( v20 )
    {
      *(_QWORD *)&v134 = (unsigned __int64)v20 | (*((_BYTE *)v20 + 29) >> 5) & 3;
      sub_1743080(v9 + 8, v134);
      *(_DWORD *)v9 = 2;
LABEL_13:
      v16 = 1;
      goto LABEL_14;
    }
LABEL_17:
    if ( (_BYTE)v16 )
      goto LABEL_14;
  }
  v16 = 0;
  if ( (*(_BYTE *)(a3 + 8) & 0x7F) == 0 )
  {
    v16 = sub_1A4ED10(a1, v9);
    if ( (_BYTE)v16 )
      return v16;
    v21 = *(_QWORD *)(v9 + 120);
    if ( (*(_DWORD *)(v9 + 120) & 7) != 5 )
      return v16;
    goto LABEL_21;
  }
LABEL_14:
  v21 = *(_QWORD *)(v9 + 120);
  if ( (*(_DWORD *)(v9 + 120) & 7) != 5 )
    return v16;
LABEL_21:
  v23 = (__int64 *)(*(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v23 + 17) & 4) == 0 && (*(_BYTE *)(a3 + 8) & 0x7Fu) - 59 <= 2 && (*(_BYTE *)(a3 + 10) & 1) != 0 )
  {
    v24 = sub_F57E80(*v23);
    v28 = *(_DWORD *)(v9 + 120) & 7;
    if ( (_DWORD)v28 != 5
      || !v24
      || (v106 = sub_F57E80(v24)) == 0
      || (*(_QWORD *)(v106 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
      || (*(_BYTE *)(v106 + 17) & 4) != 0 )
    {
      v29 = a3 - 64;
      sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 40) + 96LL), *(_QWORD *)(a3 + 40), v28, v25, v26, v27);
      v34 = *(_QWORD *)(a3 + 64);
      if ( (*(_BYTE *)(v34 + 56) & 4) != 0 )
      {
        v110 = sub_B8C330(a3 - 64);
        sub_B968A0(v34 + 40, v110);
      }
      v35 = *(_QWORD **)(v34 + 40);
      sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 40) + 96LL), *(_QWORD *)(a3 + 40), v30, v31, v32, v33);
      v36 = *(_QWORD *)(a3 + 64);
      if ( (*(_BYTE *)(v36 + 56) & 4) != 0 )
      {
        v109 = sub_B8C330(v29);
        sub_B968A0(v36 + 40, v109);
      }
      v112 = *(_QWORD **)(v36 + 48);
      if ( v112 != v35 )
      {
        v114 = v16;
        v37 = v35;
        while ( 1 )
        {
          v38 = *v37 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v38 + 28) & 0x7F) == 0x47 )
          {
            v39 = *(_BYTE *)(v9 + 160);
            if ( !v39 )
            {
              v40 = *(_DWORD *)(v9 + 128);
              v136 = 0;
              v135 = v40;
              v134 = 0;
              v138 = v140;
              v142 &= 0xFFFFFFFE00000000LL;
              v144 &= 0xFFFFFFFE00000000LL;
              v148 = v150;
              v149 = 0x800000000LL;
              v151 = v153;
              v137 = 0;
              v139 = 0x400000000LL;
              v141 = 0;
              v143 = 0;
              v145 = 0;
              v146 = 0;
              v147 = 0;
              v150[8] = 0;
              v150[9] = 0;
              v152 = 0x400000000LL;
              v153[48] = 0;
              ptr = v156;
              v155 = 0x400000000LL;
              v41 = *(_QWORD *)(v38 + 48);
              v117 = 0;
              v42 = *(_QWORD *)(*(_QWORD *)(v41 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v42 + 16) != 26 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
                  BUG();
                v42 = sub_F63050(v42, 0, &v134, 0x400000000LL);
              }
              v43 = *(_QWORD *)(v42 + 16) >> 24;
              v121.m128i_i16[0] = *(_WORD *)(v42 + 20) >> 2;
              v121.m128i_i8[2] = ((unsigned __int8)v43 >> 7) | v121.m128i_i8[2] & 0xFE;
              v44 = 0;
              if ( (v43 & 0x80u) != 0LL )
                v44 = *(_DWORD *)(v42 + 8LL * *(unsigned __int16 *)(v42 + 22) + 48);
              v129 = v44;
              v45 = (*(_BYTE *)(v42 + 19) >> 1) & 0xF;
              v121.m128i_i8[2] = (2 * HIDWORD(*(_QWORD *)(v42 + 16))) & 4
                               | (2 * (HIDWORD(*(_QWORD *)(v42 + 16)) & 1))
                               | v121.m128i_i8[2] & 0xF9;
              if ( v45 == 2 )
              {
                v49 = sub_1A387F0(v42);
                v102 = *(unsigned __int16 *)(v42 + 22);
                v113 = 0.0;
                v104 = ((v103 >> 5) & 4) + 8 * v102 + 48;
                v47 = 0;
                v48 = *(_WORD *)((v42 + v104 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF;
              }
              else if ( (unsigned int)(v45 - 6) > 2 )
              {
                if ( v45 == 10 )
                {
                  v105 = (__int64 *)sub_1A38A10(v42);
                  v48 = 0;
                  *(_QWORD *)&v113 = *v105;
                  v47 = v105[1];
                  v49 = 0;
                }
                else if ( v45 == 9 )
                {
                  v111 = (__int64 *)sub_1A38A10(v42);
                  v47 = 0;
                  v48 = 0;
                  *(_QWORD *)&v113 = *v111;
                  v49 = 0;
                }
                else
                {
                  v47 = 0;
                  v48 = 0;
                  v49 = 0;
                  v113 = 0.0;
                }
              }
              else
              {
                sub_1A387F0(v42);
                if ( v46 > 2u && ((v46 + 13) & 0xFu) > 8 )
LABEL_147:
                  BUG();
                v113 = 0.0;
                v47 = 0;
                v48 = 0;
                v49 = 0;
              }
              v50 = _mm_loadh_ps(&v113);
              v124 = v49;
              v123 = v45;
              v125 = v48;
              v126 = v50;
              v127 = v47;
              v51 = *(_QWORD *)(v42 + 16);
              if ( (v51 & 0x1000000) != 0 )
              {
                v52 = *(unsigned __int16 *)(v42 + 22);
                v53 = *(_BYTE *)(v42 + 19);
                v54 = (v51 & 0x40000000) != 0;
                v55 = 8 * v52 + 48;
                if ( (v53 & 0x40) != 0 )
                  v54 += (*(_BYTE *)(((v42 + v55 + ((v53 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                v56 = ((v42 + v55 + ((SBYTE3(v51) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v54;
                v57 = ((unsigned __int8)v53 >> 1) & 0xF;
                if ( v57 != 2 )
                {
                  switch ( v57 )
                  {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                      switch ( v57 )
                      {
                        case 6:
                        case 7:
                        case 8:
                          v56 += 8LL;
                          goto LABEL_49;
                        case 9:
                          goto LABEL_137;
                        case 10:
                          goto LABEL_136;
                        default:
LABEL_49:
                          switch ( v57 )
                          {
                            case 0:
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 11:
                              goto LABEL_51;
                            case 9:
                              goto LABEL_137;
                            case 10:
                              goto LABEL_136;
                            default:
                              goto LABEL_147;
                          }
                      }
                    case 9:
LABEL_137:
                      v58 = v56 + 8;
                      v59 = 8;
                      goto LABEL_52;
                    case 10:
LABEL_136:
                      v58 = v56 + 16;
                      v59 = 16;
                      goto LABEL_52;
                    default:
                      goto LABEL_147;
                  }
                }
                v56 += 8LL * (*(_WORD *)((v42 + ((SBYTE3(v51) >> 5) & 4) + v55 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_51:
                v58 = v56;
                v59 = 0;
LABEL_52:
                v60 = v59 + v52 + v56;
                if ( (v51 & 0x20000000) != 0 )
                  v58 = v60;
                v61 = *(_QWORD *)((v58 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              }
              else if ( *(_BYTE *)(v42 + 16) == 26
                     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
                     && sub_F63050(v42, 0, v48, v47) )
              {
                v61 = *(_BYTE *)(v42 + 18) >> 5;
              }
              else
              {
                v61 = 0;
              }
              v121.m128i_i64[1] = v61;
              v122 = (*(_BYTE *)(v42 + 18) >> 3) & 3;
              v62 = *(_QWORD *)(v42 + 16);
              if ( (v62 & 0x20000000) != 0 )
              {
                v63 = *(_BYTE *)(v42 + 19);
                v64 = 8LL * *(unsigned __int16 *)(v42 + 22) + 48;
                v65 = (v62 & 0x40000000) != 0;
                if ( (v63 & 0x40) != 0 )
                  v65 += (*(_BYTE *)(((v42 + v64 + ((v63 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
                v66 = ((v42 + v64 + ((SBYTE3(v62) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v65;
                v67 = ((unsigned __int8)v63 >> 1) & 0xF;
                if ( v67 != 2 )
                {
                  switch ( v67 )
                  {
                    case 0:
                    case 1:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                      switch ( v67 )
                      {
                        case 6:
                        case 7:
                        case 8:
                          v66 += 8LL;
                          goto LABEL_73;
                        case 9:
                          goto LABEL_71;
                        case 10:
                          goto LABEL_61;
                        default:
LABEL_73:
                          switch ( v67 )
                          {
                            case 0:
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 11:
                              goto LABEL_62;
                            case 9:
                              goto LABEL_71;
                            case 10:
                              goto LABEL_61;
                            default:
                              goto LABEL_147;
                          }
                      }
                    case 9:
LABEL_71:
                      v66 += 8LL;
                      goto LABEL_62;
                    case 10:
LABEL_61:
                      v66 += 16LL;
                      goto LABEL_62;
                    default:
                      goto LABEL_147;
                  }
                }
                v66 += 8LL * (*(_WORD *)((v42 + ((SBYTE3(v62) >> 5) & 4) + v64 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
              }
              else
              {
                v66 = 0;
              }
LABEL_62:
              v128 = v66;
              v68 = *(_BYTE *)(v42 + 19);
              if ( (v68 & 0x40) != 0 )
              {
                v69 = *(unsigned __int16 *)(v42 + 22);
                v70 = 8 * v69 + 48;
                if ( (*(_BYTE *)(((v42 + v70 + ((v68 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0 )
                {
                  v71 = *(_QWORD *)(v42 + 16);
                  v72 = *(_WORD *)(((v42 + v70 + ((SBYTE3(v71) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                                 + 8LL * ((v71 & 0x40000000) != 0))
                      & 0x1FF;
                }
                else
                {
                  v72 = 0;
                  v71 = *(_QWORD *)(v42 + 16);
                }
                v121.m128i_i16[1] = (8 * v72) | v121.m128i_i16[1] & 0xF007;
                v73 = *(_BYTE *)(((v42 + v70 + ((SBYTE3(v71) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1);
                if ( (v73 & 0xF0) != 0 )
                {
                  v115 = v69;
                  *(_QWORD *)&v113 = v73 >> 4;
                  v74 = sub_1A38A10(v42);
                  v75 = *(_QWORD *)&v113;
                  v76 = v115;
                  v78 = v74;
                  if ( (v77 & 8) != 0 && *(_QWORD *)&v113 )
                  {
                    v116 = v74;
                    v119 = sub_F56890(v42);
                    v120 = v107;
                    v108 = sub_1A38A10(v42);
                    v75 = *(_QWORD *)&v113;
                    v76 = v115;
                    v78 = v108;
                    v79 = *(_QWORD *)&v113;
                  }
                  else
                  {
                    v79 = 0;
                    v80 = 0;
                  }
                  v81 = ((unsigned __int8)v68 >> 1) & 0xF;
                  if ( (_BYTE)v81 != 2 )
                  {
                    switch ( v81 )
                    {
                      case 0LL:
                      case 1LL:
                      case 3LL:
                      case 4LL:
                      case 5LL:
                      case 6LL:
                      case 7LL:
                      case 8LL:
                      case 11LL:
                        break;
                      case 9LL:
                        v82 = 8;
                        goto LABEL_75;
                      case 10LL:
                        v82 = 16;
                        goto LABEL_75;
                      default:
                        goto LABEL_147;
                    }
                  }
                  v82 = 0;
LABEL_75:
                  v83 = v71 >> 24;
                  v84 = v82 + v76;
                  if ( (v83 & 0x20) != 0 )
                    v82 = v84;
                  v85 = ((v78 + v82 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * (v83 & 1);
                  goto LABEL_78;
                }
              }
              else
              {
                v121.m128i_i16[1] &= 0xF007u;
              }
              v79 = 0;
              v80 = 0;
              v75 = 0;
              v85 = 0;
LABEL_78:
              v133 = v79;
              v86 = *(_QWORD *)(v9 + 112);
              v87 = 0;
              v130 = v85;
              v88 = *(_QWORD *)(v86 + 248);
              v89 = *(_QWORD *)(v9 + 120);
              v131 = v75;
              v132 = v80;
              v121.m128i_i16[0] &= 0xFFC0u;
              v123 = 0;
              v126 = 0;
              v124 = 0;
              v125 = 0;
              v127 = 0;
              if ( (unsigned int)(v89 & 7) - 3 <= 2 )
                v87 = *(_QWORD *)((v89 & 0xFFFFFFFFFFFFFFF8LL) + 8);
              v90 = sub_A73610(v88, v87, nullptr, 0, &v121, 0);
              if ( !(unsigned int)sub_1D75BD0(
                                    *(_QWORD *)(v9 + 112),
                                    v38,
                                    0,
                                    v90,
                                    (unsigned int)&v117,
                                    (unsigned int)&v134,
                                    0) )
              {
                v118 = (*(_BYTE *)(v117 + 29) >> 5) & 3 | v117;
                sub_1743080(v9 + 8, v118);
                *(_DWORD *)v9 = 2;
                v114 = 1;
              }
              if ( ptr != v156 )
                free(ptr);
              if ( v151 != v153 )
                free(v151);
              if ( v148 != v150 )
                free(v148);
              v91 = v138;
              v92 = &v138[32 * (unsigned int)v139];
              if ( v138 != (_BYTE *)v92 )
              {
                *(_QWORD *)&v113 = v9;
                do
                {
                  v92 -= 4;
                  v93 = v92[1];
                  if ( v93 )
                  {
                    v94 = v92[2];
                    if ( v94 )
                    {
                      if ( v93 < v94 || v93 > v94 + 14848 )
                      {
                        v95 = *(_QWORD **)(v93 + 528);
                        v96 = &v95[8 * (unsigned __int64)*(unsigned int *)(v93 + 536)];
                        if ( v95 != v96 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v96 -= 8;
                              v97 = (_QWORD *)v96[3];
                              if ( v97 == v96 + 5 )
                                break;
                              operator delete(v97);
                              if ( v95 == v96 )
                                goto LABEL_96;
                            }
                          }
                          while ( v95 != v96 );
LABEL_96:
                          v96 = *(_QWORD **)(v93 + 528);
                        }
                        if ( v96 != (_QWORD *)(v93 + 544) )
                          free(v96);
                        v98 = *(void **)(v93 + 416);
                        v99 = (void **)(v93 + 416);
                        if ( v98 != (void *)(v93 + 432) )
                          free(v98);
                        v100 = (void **)(v93 + 96);
                        do
                        {
                          while ( 1 )
                          {
                            v99 -= 4;
                            if ( *v99 == v99 + 2 )
                              break;
                            operator delete(*v99);
                            if ( v100 == v99 )
                              goto LABEL_104;
                          }
                        }
                        while ( v100 != v99 );
LABEL_104:
                        operator delete((void *)v93, 0x3A0u);
                      }
                      else
                      {
                        v101 = *(unsigned int *)(v94 + 14976);
                        *(_DWORD *)(v94 + 14976) = v101 + 1;
                        *(_QWORD *)(v94 + 8 * v101 + 14848) = v93;
                      }
                    }
                  }
                }
                while ( v91 != v92 );
                v9 = *(_QWORD *)&v113;
                v92 = v138;
              }
              if ( v92 != (_QWORD *)v140 )
                free(v92);
              goto LABEL_109;
            }
            *(_QWORD *)&v134 = v38 | (*(_BYTE *)(v38 + 29) >> 5) & 3;
            sub_1743080(v9 + 8, v134);
            *(_DWORD *)v9 = 2;
            v114 = v39;
          }
LABEL_109:
          if ( v112 == ++v37 )
            return v114;
        }
      }
    }
  }
  return v16;
}
