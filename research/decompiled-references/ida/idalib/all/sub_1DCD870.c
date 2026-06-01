unsigned __int64 __fastcall sub_1DCD870(__int64 a1, __int64 a2, __int64 a3, void **a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  int v11; // edx
  void **v12; // r15
  void **p_ptr; // r12
  __m128 v14; // xmm0
  __m128 si128; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  char v19; // cl
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  char v23; // di
  _QWORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // r14d
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rdx
  char v35; // dl
  int v36; // ecx
  __int64 v37; // r14
  __int64 v38; // r14
  unsigned int v39; // eax
  unsigned __int64 v40; // r14
  char v42; // al
  int v43; // eax
  __int64 v44; // r14
  char *v45; // r14
  unsigned int v46; // eax
  __int64 v47; // rdx
  char v48; // cl
  __int64 v49; // rsi
  __int64 v50; // rdx
  unsigned __int64 v51; // r9
  char v52; // al
  char *v53; // rdi
  __int64 v54; // r12
  __int64 v55; // r13
  void **v56; // rbx
  __int64 v57; // rcx
  __int32 v58; // r14d
  int v59; // eax
  unsigned int v60; // eax
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rax
  _BYTE *v63; // r14
  _BYTE *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  char v68; // cl
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r8
  _QWORD *v73; // rsi
  _QWORD *v74; // r8
  _QWORD *v75; // rdi
  char v76; // cl
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rax
  _DWORD *v80; // rdx
  _DWORD *v81; // rcx
  int v82; // edi
  int v83; // esi
  _DWORD *v84; // r8
  int v85; // eax
  __int64 v86; // rsi
  unsigned __int64 v87; // rax
  __m128 v88; // xmm0
  unsigned __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  void *v92; // rbx
  __int64 *v93; // r15
  __int64 v94; // rbp
  int v95; // eax
  unsigned __int64 v96; // rsi
  unsigned __int16 *v97; // rax
  __int64 v98; // r12
  unsigned __int64 v99; // rbp
  char *v100; // rax
  __int64 v101; // rdx
  unsigned __int16 v102; // ax
  void *v103; // rbp
  void **v104; // [rsp+8h] [rbp-3A0h] BYREF
  void **v105; // [rsp+10h] [rbp-398h]
  __int64 v106; // [rsp+18h] [rbp-390h]
  unsigned __int64 v107; // [rsp+20h] [rbp-388h]
  __int64 v108; // [rsp+28h] [rbp-380h]
  __m128 *v109; // [rsp+30h] [rbp-378h]
  __int64 *v110; // [rsp+38h] [rbp-370h]
  void *v111; // [rsp+40h] [rbp-368h]
  __m128i *v112; // [rsp+48h] [rbp-360h]
  __int64 v113; // [rsp+50h] [rbp-358h]
  _QWORD *v114; // [rsp+58h] [rbp-350h]
  void **v115; // [rsp+60h] [rbp-348h]
  void **v116; // [rsp+68h] [rbp-340h]
  _QWORD *v117; // [rsp+70h] [rbp-338h]
  __int64 v118; // [rsp+78h] [rbp-330h]
  __int64 v119[3]; // [rsp+80h] [rbp-328h] BYREF
  char v120; // [rsp+9Fh] [rbp-309h] BYREF
  __m128 v121; // [rsp+A0h] [rbp-308h] BYREF
  __m128i v122; // [rsp+B0h] [rbp-2F8h] BYREF
  __m128i v123; // [rsp+C0h] [rbp-2E8h] BYREF
  void *v124[2]; // [rsp+D0h] [rbp-2D8h] BYREF
  char v125; // [rsp+E0h] [rbp-2C8h] BYREF
  void *v126; // [rsp+100h] [rbp-2A8h] BYREF
  __int64 v127; // [rsp+108h] [rbp-2A0h]
  __int64 v128; // [rsp+110h] [rbp-298h] BYREF
  void *v129[2]; // [rsp+130h] [rbp-278h] BYREF
  char v130; // [rsp+140h] [rbp-268h] BYREF
  void *ptr; // [rsp+160h] [rbp-248h] BYREF
  __m128 v132; // [rsp+168h] [rbp-240h]
  _BYTE v133[16]; // [rsp+178h] [rbp-230h] BYREF
  char v134; // [rsp+188h] [rbp-220h]
  void *v135; // [rsp+190h] [rbp-218h] BYREF
  __int64 v136; // [rsp+198h] [rbp-210h]
  _QWORD v137[4]; // [rsp+1A0h] [rbp-208h] BYREF
  __m128 v138; // [rsp+1C0h] [rbp-1E8h] BYREF
  int v139; // [rsp+1D8h] [rbp-1D0h]
  _BYTE *v140; // [rsp+208h] [rbp-1A0h]
  _BYTE *v141; // [rsp+218h] [rbp-190h]
  void *v142; // [rsp+220h] [rbp-188h]
  _QWORD *v143; // [rsp+228h] [rbp-180h]
  __int64 v144; // [rsp+230h] [rbp-178h]
  void *v145[18]; // [rsp+240h] [rbp-168h] BYREF
  _QWORD v146[27]; // [rsp+2D0h] [rbp-D8h] BYREF

  v7 = a3;
  v8 = *(_QWORD *)a1;
  v106 = a2;
  v9 = v146;
  v105 = v124;
  v10 = *(_QWORD *)(v8 + 11280);
  v124[0] = &v125;
  v119[1] = (__int64)a4;
  v124[1] = (void *)0x400000000LL;
  memset(v146, 0, 0x98u);
  v119[0] = a3;
  v11 = (int)a4;
  if ( !v10 || !*(_BYTE *)(v10 + 114) )
  {
    v146[0] = v8;
    v24 = &v146[2];
    v146[1] = 1;
    do
    {
      *v24 = -4096;
      v24 += 2;
    }
    while ( v24 != &v146[10] );
    v25 = *(_QWORD *)(v8 + 11280);
    BYTE2(v146[14]) = 0;
    v146[10] = &v146[12];
    v146[11] = 0x100000000LL;
    v146[13] = v25;
    LOWORD(v146[14]) = 256;
    v146[15] = 0;
    *(_QWORD *)(v8 + 11280) = v146;
    LOBYTE(v146[18]) = 1;
  }
  v12 = &v126;
  p_ptr = &ptr;
  v104 = a4;
  v126 = &v128;
  v127 = 0x400000000LL;
  v14 = _mm_loadh_ps((const double *)&v104);
  v129[1] = (void *)0x400000000LL;
  v121 = v14;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  ptr = v133;
  v132 = si128;
  v134 = 0;
  v16 = *(_QWORD *)(v7 + 16);
  v104 = v129;
  v129[0] = &v130;
  if ( (v16 & 0x100000000LL) != 0 )
  {
    v17 = v16 >> 24;
    if ( (v17 & 0x20) != 0 )
    {
      v18 = 8LL * *(unsigned __int16 *)(v7 + 22) + 48;
      v19 = *(_BYTE *)(v7 + 19);
      v20 = (v7 + v18 + (((char)v17 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v21 = (v17 & 0x40) != 0;
      if ( (v19 & 0x40) != 0 )
        v21 += (*(_BYTE *)(((v7 + v18 + ((v19 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v22 = v20 + 8 * v21;
      v23 = ((unsigned __int8)v19 >> 1) & 0xF;
      if ( v23 != 2 )
        __asm { jmp     rax }
      v26 = v22 + 8LL * (*(_WORD *)((v7 + ((v19 >> 5) & 4) + v18 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      v26 = 0;
    }
    v27 = 0;
    v28 = v11 + 16;
    if ( *(_BYTE *)(v7 + 16) != 25 )
      v27 = *(unsigned __int16 *)(v7 + 22);
    v109 = (__m128 *)v27;
    v108 = v26;
    v107 = v7 + 48;
    v110 = (__int64 *)&v121;
    v29 = sub_F6CCB0((__int64 *)&v121, si128);
    if ( (unsigned __int8)sub_1DE36B0(
                            a1,
                            v29,
                            v28,
                            (_DWORD)v109,
                            v107,
                            v108,
                            (__int64)&v126,
                            (__int64)v104,
                            (__int64)&ptr,
                            0) )
      goto LABEL_25;
    v31 = *(_QWORD *)a1;
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 3032LL);
    if ( !v32 )
      v32 = *(_QWORD *)(v31 + 544);
    v33 = *(_BYTE *)(v32 + 8);
    v34 = v32 - 64;
    if ( (v33 & 0x7Fu) - 59 >= 3 )
      v34 = 0;
    v107 = (unsigned __int64)v145;
    sub_19A2CD0((__int64)v145, v31, v34, 0, 1, v30);
    v35 = *(_BYTE *)(v121.m128_u64[0] + 16);
    if ( v35 == 26 )
    {
      v36 = ((*(_BYTE *)(v121.m128_u64[0] + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v37 = 16;
      if ( v35 == 25 )
        goto LABEL_23;
      v36 = 15;
    }
    v37 = 8 * ((v36 + 8 * (unsigned int)*(unsigned __int16 *)(v121.m128_u64[0] + 22)) >> 3) + 8;
LABEL_23:
    v38 = v121.m128_u64[1] + v37;
    v39 = sub_F6C520(*(_QWORD *)(v121.m128_u64[0] + 24));
    v108 = sub_1DCE820(
             a1,
             v106,
             *(_QWORD *)(v121.m128_u64[0] + 24),
             v39 * ((v38 - (unsigned __int64)(v38 != 0)) / v39 + (v38 != 0)));
    v40 = v108 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v108 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      sub_19A2DA0((__int64 *)v107);
      goto LABEL_26;
    }
    sub_19A2DA0((__int64 *)v107);
    goto LABEL_70;
  }
  v42 = *(_BYTE *)(v7 + 16);
  if ( v42 == 26 )
  {
    v43 = ((*(_BYTE *)(v7 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v44 = 16;
    if ( v42 == 25 )
      goto LABEL_39;
    v43 = 15;
  }
  v44 = 8 * ((v43 + 8 * (unsigned int)*(unsigned __int16 *)(v7 + 22)) >> 3) + 8;
LABEL_39:
  v45 = (char *)a4 + v44;
  v46 = sub_F6C520(*(_QWORD *)(v7 + 24));
  v108 = sub_1DCE820(
           a1,
           v106,
           *(_QWORD *)(v121.m128_u64[0] + 24),
           v46 * ((unsigned __int64)&v45[-(v45 != nullptr)] / v46 + (v45 != nullptr)));
  if ( (v108 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_25;
  v47 = *(_QWORD *)(v7 + 16) >> 24;
  if ( (v47 & 0x20) != 0 )
  {
    v48 = *(_BYTE *)(v7 + 19);
    v49 = 8LL * *(unsigned __int16 *)(v7 + 22) + 48;
    v50 = (v47 & 0x40) != 0;
    if ( (v48 & 0x40) != 0 )
      v50 += (*(_BYTE *)(((v7 + v49 + ((v48 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v51 = ((v7 + v49 + (((char)BYTE3(*(_QWORD *)(v7 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v50;
    v52 = ((unsigned __int8)v48 >> 1) & 0xF;
    if ( v52 == 2 )
    {
      v51 += 8LL * (*(_WORD *)((v7 + v49 + ((v48 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      switch ( v52 )
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
          switch ( v52 )
          {
            case 6:
            case 7:
            case 8:
              v51 += 8LL;
              goto LABEL_65;
            case 9:
              goto LABEL_127;
            case 10:
              goto LABEL_126;
            default:
LABEL_65:
              switch ( v52 )
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
                  goto LABEL_67;
                case 9:
                  goto LABEL_127;
                case 10:
                  goto LABEL_126;
                default:
                  goto LABEL_156;
              }
          }
        case 9:
LABEL_127:
          v51 += 8LL;
          break;
        case 10:
LABEL_126:
          v51 += 16LL;
          break;
        default:
LABEL_156:
          JUMPOUT(0x2EAD90);
      }
    }
  }
  else
  {
    v51 = 0;
  }
LABEL_67:
  v57 = 0;
  v58 = v121.m128_i32[0] + 48;
  if ( *(_BYTE *)(v121.m128_u64[0] + 16) != 25 )
    v57 = *(unsigned __int16 *)(v121.m128_u64[0] + 22);
  v111 = (void *)v51;
  v109 = (__m128 *)v57;
  v107 = v121.m128_u64[1] + 16;
  v110 = (__int64 *)&v121;
  v59 = sub_F6CCB0((__int64 *)&v121, si128);
  if ( (unsigned __int8)sub_1DE36B0(
                          a1,
                          v59,
                          v107,
                          (_DWORD)v109,
                          v58,
                          (_DWORD)v111,
                          (__int64)&v126,
                          (__int64)v104,
                          (__int64)&ptr,
                          0) )
    goto LABEL_25;
LABEL_70:
  v109 = &v138;
  sub_A5E110(&v138, v7);
  v120 = 0;
  v60 = sub_F6CCB0(v119, si128);
  if ( v139 == 10 )
  {
    LODWORD(v107) = v60;
    sub_F5C850((__int64)&v109[1].m128_i64[1]);
    v120 = 1;
    v60 = v107;
  }
  if ( (unsigned __int8)sub_1DE2580(a1, v60, &v109[1].m128_u16[4], v105, &v120) )
  {
LABEL_25:
    v40 = 0;
    goto LABEL_26;
  }
  v61 = (unsigned int)v127;
  if ( !v134 )
  {
    v64 = v140;
LABEL_124:
    if ( v64 )
    {
      v120 = 1;
      v140 = nullptr;
    }
    goto LABEL_92;
  }
  v62 = v132.m128_u64[0];
  if ( (unsigned int)v127 == v132.m128_u64[0] )
    goto LABEL_133;
  if ( (unsigned int)v127 < v132.m128_u64[0] )
  {
    v132.m128_u64[0] = (unsigned int)v127;
LABEL_133:
    v63 = ptr;
    goto LABEL_81;
  }
  if ( (unsigned int)v127 > v132.m128_u64[1] )
  {
    v107 = (unsigned int)v127;
    sub_2236E10(&ptr, v133, (unsigned int)v127, 1);
    v62 = v132.m128_u64[0];
    v61 = v107;
  }
  v63 = ptr;
  if ( (char *)ptr + v62 != (char *)ptr + v61 )
  {
    v107 = v61;
    memset((char *)ptr + v62, 0, v61 - v62);
    v61 = v107;
  }
  v132.m128_u64[0] = v61;
LABEL_81:
  v64 = v140;
  if ( !v63 )
    goto LABEL_124;
  if ( !v140 )
    goto LABEL_90;
  if ( *(_BYTE *)(v121.m128_u64[0] + 16) == 25 )
  {
    if ( !(_DWORD)v127 )
      goto LABEL_91;
    goto LABEL_90;
  }
  v65 = *(unsigned __int16 *)(v121.m128_u64[0] + 22);
  v66 = v65;
  if ( (_DWORD)v127 != (_DWORD)v65 )
  {
LABEL_90:
    v120 = 1;
    goto LABEL_91;
  }
  if ( v140 != &v140[v65] )
  {
    if ( *v63 == *v140 )
    {
      v67 = 1;
      while ( v66 != v67 )
      {
        v68 = v140[v67++];
        if ( v68 != v63[v67 - 1] )
          goto LABEL_90;
      }
      goto LABEL_91;
    }
    goto LABEL_90;
  }
LABEL_91:
  v140 = v63;
LABEL_92:
  v107 = (unsigned __int64)v145;
  memset(v145, 0, 0x88u);
  v69 = *(_QWORD *)a1;
  v113 = *(_QWORD *)a1;
  if ( !v144 )
    goto LABEL_93;
  v88 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(v145[16]) = 1;
  *(__m128 *)&v145[1] = v88;
  v145[0] = (void *)(v107 + 24);
  v145[8] = (void *)(v107 + 80);
  v145[9] = (void *)0x600000000LL;
  sub_18C74E0(v69, 4, 0, 4);
  v111 = v142;
  if ( !v142 )
    goto LABEL_155;
  v118 = v7;
  v92 = nullptr;
  v112 = &v123;
  v115 = &v126;
  v93 = v110;
  v114 = v137;
  v116 = &ptr;
  v117 = v146;
  do
  {
    if ( v144 )
    {
      v96 = v143[(_QWORD)v92];
      v123.m128i_i8[0] = *((_BYTE *)v92 + (_QWORD)v141);
      v123.m128i_i64[1] = v96;
      v122 = _mm_load_si128(&v123);
      if ( v96 )
      {
        v97 = sub_1DC71F0((__int64 *)a1, v96, (unsigned __int64)v143, v89, v90, v91, v88, a6);
        if ( v97 == (unsigned __int16 *)((char *)&dword_0 + 1)
          || (v98 = *(_QWORD *)a1,
              v99 = (unsigned __int64)v97 & 0xFFFFFFFFFFFFFFFELL,
              v100 = sub_F5ED10(v112->m128i_i8),
              v102 = sub_1E72620(v98, v99, v100, v101),
              !HIBYTE(v102)) )
        {
          v12 = v115;
          v40 = 0;
          p_ptr = v116;
          v9 = v117;
          sub_190D5E0(v113, v88);
          goto LABEL_96;
        }
        switch ( (_BYTE)v102 )
        {
          case 2:
            goto LABEL_148;
          case 3:
            v122.m128i_i64[1] = v99;
            break;
          case 1:
            v122.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)v112);
LABEL_148:
            v122.m128i_i64[1] = 0;
            break;
        }
      }
    }
    else
    {
      v123.m128i_i8[0] = *((_BYTE *)v92 + (_QWORD)v141);
      v123.m128i_i64[1] = 0;
      a6 = (__m128)_mm_load_si128(&v123);
      v122 = (__m128i)a6;
    }
    v94 = *(_QWORD *)a1;
    v95 = sub_F6CCB0(v93, v88);
    v135 = v145[0];
    v136 = (__int64)v145[1];
    v137[0] = v145[8];
    v137[1] = LODWORD(v145[9]);
    if ( !(unsigned __int8)sub_19EE280(v94, &v135, v122.m128i_i8, v95) )
    {
      v103 = v114;
      v135 = v114;
      v136 = 0x100000000LL;
      sub_F5EEE0((__int64 *)v107, &v122, (__int64)&v135);
      if ( v135 != v103 )
        free(v135);
    }
    v92 = (char *)v92 + 1;
  }
  while ( v111 != v92 );
  v7 = v118;
  v12 = v115;
  p_ptr = v116;
  v9 = v117;
LABEL_155:
  v120 = 1;
  v141 = v145[0];
  v142 = v145[1];
  v143 = v145[8];
  v144 = LODWORD(v145[9]);
  sub_190D5E0(v113, v88);
  v113 = *(_QWORD *)a1;
LABEL_93:
  if ( *(_DWORD *)(v113 + 12632) )
    goto LABEL_95;
  v70 = v121.m128_u64[0];
  if ( v108 != *(_QWORD *)(v7 + 24) )
    goto LABEL_95;
  v71 = *(unsigned __int16 *)(v7 + 22);
  v72 = 8 * v71;
  if ( v71 != (unsigned int)v127 )
    goto LABEL_95;
  v73 = (_QWORD *)(v7 + 48);
  v74 = (_QWORD *)(v7 + 48 + v72);
  if ( (_QWORD *)(v7 + 48) == v74 )
    goto LABEL_108;
  if ( *(_QWORD *)v126 != *(_QWORD *)(v7 + 48) )
    goto LABEL_95;
  v75 = v126;
  while ( 1 )
  {
    ++v73;
    ++v75;
    if ( v74 == v73 )
      break;
    if ( *v73 != *v75 )
      goto LABEL_95;
  }
LABEL_108:
  if ( !v120 )
  {
LABEL_109:
    v76 = *(_BYTE *)(v70 + 16);
    v40 = v70;
    if ( v76 == 26 )
    {
      v77 = ((*(_BYTE *)(v70 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
      goto LABEL_111;
    }
    v78 = 16;
    if ( v76 != 25 )
    {
      v77 = 15;
LABEL_111:
      v78 = 8 * ((v77 + 8 * (unsigned int)*(unsigned __int16 *)(v70 + 22)) >> 3) + 8;
    }
    v79 = sub_1EA6140(v106, v70, v78, 8);
    v81 = (_DWORD *)v121.m128_u64[1];
    *v80 = *(_DWORD *)v121.m128_u64[1];
    v80[1] = v81[1];
    v80[2] = v81[2];
    if ( *(_BYTE *)(v121.m128_u64[0] + 16) == 26 && (*(_BYTE *)(v121.m128_u64[0] + 19) & 0x1E) != 0 )
    {
      v82 = v81[2 * *(unsigned __int16 *)(v121.m128_u64[0] + 22) + 4];
      v83 = v81[2 * *(unsigned __int16 *)(v121.m128_u64[0] + 22) + 5];
    }
    else
    {
      v83 = 0;
      v82 = 0;
    }
    if ( *(_BYTE *)(v79 + 16) == 26 && (*(_BYTE *)(v79 + 19) & 0x1E) != 0 )
    {
      v84 = &v80[2 * *(unsigned __int16 *)(v79 + 22) + 4];
      *v84 = v82;
      v84[1] = v83;
    }
    v80[3] = v81[3];
    if ( *(_BYTE *)(v79 + 16) != 25 )
    {
      v85 = *(unsigned __int16 *)(v79 + 22);
      if ( v85 )
      {
        v86 = 8LL * (unsigned int)(v85 - 1) + 8;
        v87 = 0;
        do
        {
          *(_QWORD *)&v80[v87 / 4 + 4] = *(_QWORD *)((char *)v129[0] + v87);
          v87 += 8LL;
        }
        while ( v87 != v86 );
      }
    }
  }
  else
  {
LABEL_95:
    v70 = sub_1E6A200(v113, v108, (_DWORD)v126, v127, *(_DWORD *)(a1 + 40), *(_QWORD *)(a1 + 48), (__int64)v109);
    v40 = v70 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_109;
  }
LABEL_96:
  if ( LOBYTE(v145[16]) )
  {
    if ( v145[8] != (void *)(v107 + 80) )
      free(v145[8]);
    if ( v145[0] != (void *)(v107 + 24) )
      free(v145[0]);
  }
LABEL_26:
  if ( ptr != p_ptr + 3 )
    free(ptr);
  if ( v129[0] != v104 + 2 )
    free(v129[0]);
  if ( v126 != v12 + 2 )
    free(v126);
  if ( LOBYTE(v146[18]) )
  {
    v53 = (char *)v146[10];
    if ( !LOBYTE(v146[14]) )
    {
      if ( LODWORD(v146[11]) )
      {
        v54 = 0;
        v55 = 8LL * (unsigned int)(LODWORD(v146[11]) - 1) + 8;
        do
        {
          v56 = *(void ***)&v53[v54];
          if ( v56 )
          {
            if ( *v56 != v56 + 2 )
              free(*v56);
            operator delete(v56, 0x30u);
            v53 = (char *)v146[10];
          }
          v54 += 8;
        }
        while ( v54 != v55 );
      }
      LOBYTE(v146[14]) = 1;
      *(_QWORD *)(v146[0] + 11280LL) = v146[13];
    }
    if ( v53 != (char *)(v9 + 12) )
      free(v53);
    if ( (v146[1] & 1) == 0 )
      operator delete(v146[2], 16LL * LODWORD(v146[3]), 8);
  }
  if ( v124[0] != v105 + 2 )
    free(v124[0]);
  return v40;
}
