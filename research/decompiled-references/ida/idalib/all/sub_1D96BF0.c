__int64 __fastcall sub_1D96BF0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 a11)
{
  __int64 *v11; // r12
  __int64 v12; // rbx
  __m128 si128; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rcx
  char v18; // dl
  int v19; // eax
  int v20; // esi
  char v21; // dl
  unsigned int v22; // esi
  unsigned int v23; // r8d
  char v24; // si
  unsigned int v25; // r8d
  int v26; // edx
  int v27; // r14d
  __int64 v28; // rsi
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  char v32; // dl
  int v33; // ecx
  __int64 v34; // r13
  char *v35; // r13
  unsigned int v36; // eax
  __int64 v37; // rbx
  void **v38; // rsi
  void **v39; // r12
  void *v40; // r13
  __int64 *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // r13
  int v45; // r14d
  __int64 v46; // rax
  char v48; // dl
  int v49; // eax
  __int64 v50; // rax
  char *v51; // r13
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rsi
  char v55; // cl
  char v56; // dl
  int v57; // ecx
  int v58; // r8d
  char v59; // al
  int v60; // r15d
  int v61; // r14d
  int v62; // r13d
  unsigned __int64 v63; // rcx
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r13
  __int64 *v68; // rax
  __int64 v69; // r14
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rax
  _QWORD *v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r13
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rax
  unsigned __int16 *v82; // rax
  bool v83; // r14
  char v84; // r15
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rax
  _BYTE *v87; // r13
  _BYTE *v88; // rdx
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  char v92; // si
  __int64 v93; // rax
  __int64 v94; // rdi
  char v95; // al
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rax
  _DWORD *v99; // rdx
  _DWORD *v100; // rcx
  int v101; // edi
  int v102; // esi
  _DWORD *v103; // r8
  int v104; // eax
  __int64 v105; // rsi
  unsigned __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  void *v111; // r8
  __int64 v112; // rax
  void **v113; // rdx
  __int64 v114; // rsi
  char v115; // r8
  __int64 v116; // rax
  __int64 v117; // rdi
  unsigned __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rax
  __int64 v121; // r8
  _QWORD *v122; // rax
  _QWORD *v123; // r8
  _QWORD *v124; // rsi
  unsigned __int64 v125; // rax
  __int64 v126; // rdi
  unsigned __int64 v127; // rdx
  __m128 v128; // xmm0
  __int64 v129; // r13
  unsigned __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rbx
  int v133; // eax
  unsigned __int16 *v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rbp
  unsigned __int64 v137; // rbx
  char *v138; // rax
  __int64 v139; // rdx
  unsigned __int16 v140; // ax
  unsigned __int64 v141; // rax
  __int64 v142; // [rsp-10h] [rbp-2C8h]
  int v144; // [rsp+18h] [rbp-2A0h]
  int v145; // [rsp+18h] [rbp-2A0h]
  unsigned int v146; // [rsp+20h] [rbp-298h]
  __int64 v147; // [rsp+20h] [rbp-298h]
  unsigned __int64 v148; // [rsp+30h] [rbp-288h]
  unsigned __int64 v149; // [rsp+30h] [rbp-288h]
  void *v150; // [rsp+30h] [rbp-288h]
  unsigned int v151; // [rsp+40h] [rbp-278h]
  __int64 v152; // [rsp+40h] [rbp-278h]
  void **v153; // [rsp+58h] [rbp-260h]
  __int64 v154; // [rsp+60h] [rbp-258h]
  unsigned int v155; // [rsp+68h] [rbp-250h]
  void *v156; // [rsp+68h] [rbp-250h]
  unsigned __int64 v157; // [rsp+68h] [rbp-250h]
  __int64 *v158; // [rsp+78h] [rbp-240h]
  __int64 v159; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v160; // [rsp+88h] [rbp-230h]
  __m128i v161; // [rsp+90h] [rbp-228h] BYREF
  __m128i v162; // [rsp+A0h] [rbp-218h] BYREF
  void *v163; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v164; // [rsp+B8h] [rbp-200h]
  _BYTE v165[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v166[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v167[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *v168; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v169; // [rsp+118h] [rbp-1A0h]
  _BYTE v170[16]; // [rsp+128h] [rbp-190h] BYREF
  char v171; // [rsp+138h] [rbp-180h]
  void *v172; // [rsp+140h] [rbp-178h] BYREF
  __int64 v173; // [rsp+148h] [rbp-170h]
  _QWORD v174[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v175; // [rsp+170h] [rbp-148h] BYREF
  int v176; // [rsp+188h] [rbp-130h]
  void **v177; // [rsp+190h] [rbp-128h]
  __int64 v178; // [rsp+198h] [rbp-120h]
  unsigned __int16 *v179; // [rsp+1A0h] [rbp-118h]
  __int64 v180; // [rsp+1B0h] [rbp-108h]
  _BYTE *v181; // [rsp+1B8h] [rbp-100h]
  _BYTE *v182; // [rsp+1C8h] [rbp-F0h]
  void *v183; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v184; // [rsp+1D8h] [rbp-E0h]
  __int64 v185; // [rsp+1E0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v11 = a1;
  v12 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v160 = a4;
  v163 = v165;
  v164 = 0x400000000LL;
  v166[1] = (void *)0x400000000LL;
  v168 = v170;
  v169 = si128;
  v171 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v159 = a3;
  v166[0] = v167;
  if ( (v14 & 0x100000000LL) != 0 )
  {
    v15 = v14 >> 24;
    if ( (v15 & 0x20) != 0 )
    {
      v17 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
      v18 = v15;
      v19 = (v15 & 0x40) != 0;
      v20 = v12 + v17 + ((v18 >> 5) & 4) + 7;
      v21 = *(_BYTE *)(v12 + 19);
      v22 = v20 & 0xFFFFFFF8;
      if ( (v21 & 0x40) != 0 )
        v19 += (*(_BYTE *)(((v12 + v17 + ((v21 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v23 = v22 + 8 * v19;
      v24 = ((unsigned __int8)v21 >> 1) & 0xF;
      if ( v24 != 2 )
        __asm { jmp     rax }
      v25 = v23 + 8 * (*(_WORD *)((v12 + ((v21 >> 5) & 4) + v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      v25 = 0;
    }
    v26 = 0;
    v27 = (_DWORD)v160 + 16;
    if ( *(_BYTE *)(v12 + 16) != 25 )
      v26 = *(unsigned __int16 *)(v12 + 22);
    v146 = v25;
    v144 = v26;
    sub_F6CCB0(&v159, si128);
    if ( (unsigned __int8)sub_1DAA310(
                            (_DWORD)a1,
                            v27,
                            v144,
                            (int)v12 + 48,
                            v146,
                            (unsigned int)&v163,
                            (__int64)v166,
                            (__int64)&v168) )
      goto LABEL_26;
    v28 = *a1;
    v29 = *(_QWORD *)(*a1 + 3032);
    if ( !v29 )
      v29 = *(_QWORD *)(v28 + 544);
    v30 = *(_BYTE *)(v29 + 8);
    v31 = v29 - 64;
    if ( (v30 & 0x7Fu) - 59 >= 3 )
      v31 = 0;
    sub_19A2CD0((__int64)ptr, v28, v31, a5, 1, v142);
    v32 = *(_BYTE *)(v159 + 16);
    if ( v32 == 26 )
    {
      v33 = ((*(_BYTE *)(v159 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v34 = 16;
      if ( v32 == 25 )
        goto LABEL_18;
      v33 = 15;
    }
    v34 = 8 * ((v33 + 8 * (unsigned int)*(unsigned __int16 *)(v159 + 22)) >> 3) + 8;
LABEL_18:
    v35 = (char *)v160 + v34;
    v36 = sub_F6C520(*(_QWORD *)(v159 + 24));
    v147 = sub_1D97F40(
             a1,
             a2,
             *(_QWORD *)(v159 + 24),
             v36 * ((unsigned __int64)&v35[-(v35 != nullptr)] / v36 + (v35 != nullptr)));
    if ( (v147 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v37 = 0;
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_27;
    }
    sub_19A2DA0((__int64 *)ptr);
    goto LABEL_55;
  }
  v48 = *(_BYTE *)(a3 + 16);
  if ( v48 == 26 )
  {
    v49 = ((*(_BYTE *)(v12 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v50 = 16;
    if ( v48 == 25 )
      goto LABEL_37;
    v49 = 15;
  }
  v50 = 8 * ((v49 + 8 * (unsigned int)*(unsigned __int16 *)(v12 + 22)) >> 3) + 8;
LABEL_37:
  v51 = (char *)v160 + v50;
  v52 = sub_F6C520(*(_QWORD *)(v12 + 24));
  v147 = sub_1D97F40(
           a1,
           a2,
           *(_QWORD *)(v159 + 24),
           v52 * ((unsigned __int64)&v51[-(v51 != nullptr)] / v52 + (v51 != nullptr)));
  if ( (v147 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_26;
  v53 = *(_QWORD *)(v12 + 16) >> 24;
  if ( (v53 & 0x20) != 0 )
  {
    v54 = 8LL * *(unsigned __int16 *)(v12 + 22) + 48;
    v55 = (unsigned __int8)v53 >> 6;
    v56 = *(_BYTE *)(v12 + 19);
    v57 = v55 & 1;
    if ( (v56 & 0x40) != 0 )
      v57 += (*(_BYTE *)(((v12 + v54 + ((v56 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v58 = ((v12 + v54 + (((char)BYTE3(*(_QWORD *)(v12 + 16)) >> 5) & 4) + 7) & 0xFFFFFFF8) + 8 * v57;
    v59 = ((unsigned __int8)v56 >> 1) & 0xF;
    if ( v59 == 2 )
    {
      v58 += 8 * (*(_WORD *)((v12 + v54 + ((v56 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      switch ( v59 )
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
          switch ( v59 )
          {
            case 6:
            case 7:
            case 8:
              v58 += 8;
              goto LABEL_50;
            case 9:
              goto LABEL_142;
            case 10:
              goto LABEL_141;
            default:
LABEL_50:
              switch ( v59 )
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
                  goto LABEL_52;
                case 9:
                  goto LABEL_142;
                case 10:
                  goto LABEL_141;
                default:
                  goto LABEL_201;
              }
          }
        case 9:
LABEL_142:
          v58 += 8;
          break;
        case 10:
LABEL_141:
          v58 += 16;
          break;
        default:
LABEL_201:
          JUMPOUT(0x2EACAE);
      }
    }
  }
  else
  {
    v58 = 0;
  }
LABEL_52:
  v60 = 0;
  v61 = v159 + 48;
  v62 = (_DWORD)v160 + 16;
  if ( *(_BYTE *)(v159 + 16) != 25 )
    v60 = *(unsigned __int16 *)(v159 + 22);
  v145 = v58;
  sub_F6CCB0(&v159, si128);
  if ( (unsigned __int8)sub_1DAA310((_DWORD)a1, v62, v60, v61, v145, (unsigned int)&v163, (__int64)v166, (__int64)&v168) )
    goto LABEL_26;
LABEL_55:
  sub_A5E110(&v175, v12);
  v151 = sub_F6CCB0(a10, si128);
  v65 = v176;
  v66 = (unsigned int)(v176 - 6);
  if ( (unsigned int)v66 > 2 )
  {
    v83 = 0;
  }
  else
  {
    v67 = v180;
    if ( v180 && (*(_BYTE *)(v180 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v68 = (__int64 *)(*(_QWORD *)(v180 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v69 = *v68;
      if ( *(_BYTE *)(*v68 + 16) != 26 )
        v69 = sub_F63050(*v68, v12, v66, v63);
      v70 = *(_QWORD *)(v69 + 16);
      if ( (v70 & 0x1000000) != 0 )
      {
        v114 = *(unsigned __int16 *)(v69 + 22);
        v115 = *(_BYTE *)(v69 + 19);
        v116 = (v70 & 0x40000000) != 0;
        v117 = 8 * v114 + 48;
        if ( (v115 & 0x40) != 0 )
          v116 += (*(_BYTE *)(((v69 + v117 + ((v115 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v118 = ((v69 + v117 + ((SBYTE3(v70) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v116;
        v119 = ((unsigned __int8)v115 >> 1) & 0xF;
        if ( v119 != 2 )
        {
          switch ( v119 )
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
              switch ( v119 )
              {
                case 6:
                case 7:
                case 8:
                  v118 += 8LL;
                  goto LABEL_159;
                case 9:
                  goto LABEL_157;
                case 10:
                  goto LABEL_153;
                default:
LABEL_159:
                  switch ( v119 )
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
                      goto LABEL_161;
                    case 9:
                      goto LABEL_157;
                    case 10:
                      goto LABEL_153;
                    default:
                      goto LABEL_201;
                  }
              }
            case 9:
LABEL_157:
              v125 = v118 + 8;
              v126 = 8;
              goto LABEL_154;
            case 10:
LABEL_153:
              v125 = v118 + 16;
              v126 = 16;
              goto LABEL_154;
            default:
              goto LABEL_201;
          }
        }
        v118 += 8LL * (*(_WORD *)((v69 + ((v115 >> 5) & 4) + v117 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_161:
        v125 = v118;
        v126 = 0;
LABEL_154:
        v127 = v126 + v114 + v118;
        if ( (v70 & 0x20000000) != 0 )
          v125 = v127;
        v71 = *(_QWORD *)((v125 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v69 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v69, v12, v66, v70) )
      {
        v71 = *(_BYTE *)(v69 + 18) >> 5;
      }
      else
      {
        v71 = 0;
      }
      v72 = *(_QWORD *)(sub_B8C1B0(v67 + 72) + 16);
      v73 = (_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v72 & 4) != 0 )
        v73 = (_QWORD *)*v73;
      if ( v73 )
        v73 -= 8;
      v74 = 1;
    }
    else
    {
      v71 = 0;
      v74 = 0;
      v73 = nullptr;
    }
    sub_19A2CD0((__int64)ptr, *a9, (__int64)v73, v71, v74, v64);
    v75 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v79 = sub_1D8B300(a9, v179, si128, a7, v76, v77, v78);
    if ( v79 == 1
      || (v80 = *a9,
          LODWORD(v172) = v176,
          v81 = sub_18B0290(v80, (_DWORD *)(v79 & 0xFFFFFFFFFFFFFFFELL), &v172, *(double *)si128.m128_u64),
          v81 == 1) )
    {
      sub_190D5E0(v75, si128);
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_26;
    }
    v82 = (unsigned __int16 *)(v81 & 0xFFFFFFFFFFFFFFFELL);
    v83 = 1;
    if ( v179 == v82 )
      v83 = v176 != (_DWORD)v172;
    v179 = v82;
    v176 = (int)v172;
    sub_190D5E0(v75, si128);
    sub_19A2DA0((__int64 *)ptr);
    v65 = v176;
  }
  if ( v65 != 2 )
    goto LABEL_76;
  v153 = &v177[v178];
  if ( v177 == v153 )
    goto LABEL_126;
  v38 = &ptr[2];
  v158 = v11;
  v39 = v177;
  do
  {
    v40 = *v39;
    v41 = (__int64 *)((unsigned __int64)*v39 & 0xFFFFFFFFFFFFFFF0LL);
    v42 = *v41;
    if ( *(_BYTE *)(*v41 + 16) == 38
      || (v107 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v107 + 16) == 38)
      && (v42 = sub_F63050(*v41, v38, v107, v63)) != 0 )
    {
      ptr[1] = (void *)0x200000000LL;
      v43 = *a9;
      ptr[0] = &ptr[2];
      sub_1E4C960(v43, *(_QWORD *)(v42 + 32));
      v44 = *a9;
      v45 = *(_DWORD *)(*a9 + 12632);
      v155 = *(_DWORD *)(v42 + 20);
      *(_DWORD *)(*a9 + 12632) = 0;
      v46 = sub_1D99B80(a9, *(_QWORD *)(v42 + 32));
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v141 = sub_A781D0(*(_QWORD *)(*a9 + 248), v46, v155);
        v63 = *(unsigned int *)(a11 + 8);
        v38 = (void **)*(unsigned int *)(a11 + 12);
        if ( v63 + 1 > (unsigned __int64)v38 )
        {
          v38 = (void **)(a11 + 16);
          v157 = v141;
          sub_2237220(a11, a11 + 16, v63 + 1, 8);
          v63 = *(unsigned int *)(a11 + 8);
          v141 = v157;
        }
        *(_QWORD *)(*(_QWORD *)a11 + 8 * v63) = v141;
        ++*(_DWORD *)(a11 + 8);
        *(_DWORD *)(v44 + 12632) = v45;
        if ( ptr[0] != &ptr[2] )
          free(ptr[0]);
        v83 = 1;
        goto LABEL_124;
      }
      *(_DWORD *)(v44 + 12632) = v45;
      if ( ptr[0] != &ptr[2] )
        free(ptr[0]);
LABEL_26:
      v37 = 0;
      goto LABEL_27;
    }
    ptr[0] = (void *)sub_1D99B80(a9, v40);
    if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_26;
    v38 = ptr;
    if ( (unsigned __int8)sub_18B53F0(*a9, (__int64 *)ptr, ((unsigned __int64)v151 << 32) | v151, v108, v109, v110) )
      goto LABEL_26;
    v111 = ptr[0];
    v63 = *(unsigned int *)(a11 + 12);
    if ( v40 != ptr[0] )
      v83 = 1;
    v112 = *(unsigned int *)(a11 + 8);
    if ( v112 + 1 > v63 )
    {
      v38 = (void **)(a11 + 16);
      v156 = ptr[0];
      sub_2237220(a11, a11 + 16, v112 + 1, 8);
      v112 = *(unsigned int *)(a11 + 8);
      v111 = v156;
    }
    *(_QWORD *)(*(_QWORD *)a11 + 8 * v112) = v111;
    ++*(_DWORD *)(a11 + 8);
LABEL_124:
    ++v39;
  }
  while ( v153 != v39 );
  v11 = v158;
LABEL_126:
  v113 = *(void ***)a11;
  v178 = *(unsigned int *)(a11 + 8);
  v177 = v113;
  if ( !v178 )
    v176 = 1;
LABEL_76:
  v84 = v171;
  v85 = (unsigned int)v164;
  if ( !v171 )
  {
    v88 = v181;
LABEL_129:
    v84 = v83;
    if ( v88 )
    {
      v181 = nullptr;
      v84 = 1;
    }
    goto LABEL_96;
  }
  v86 = v169.m128_u64[0];
  if ( (unsigned int)v164 == v169.m128_u64[0] )
  {
LABEL_165:
    v87 = v168;
    goto LABEL_84;
  }
  if ( (unsigned int)v164 < v169.m128_u64[0] )
  {
    v169.m128_u64[0] = (unsigned int)v164;
    goto LABEL_165;
  }
  if ( (unsigned int)v164 > v169.m128_u64[1] )
  {
    v149 = (unsigned int)v164;
    sub_2236E10(&v168, v170, (unsigned int)v164, 1);
    v86 = v169.m128_u64[0];
    v85 = v149;
  }
  v87 = v168;
  if ( (char *)v168 + v86 != (char *)v168 + v85 )
  {
    v148 = v85;
    memset((char *)v168 + v86, 0, v85 - v86);
    v85 = v148;
  }
  v169.m128_u64[0] = v85;
LABEL_84:
  v88 = v181;
  if ( !v87 )
    goto LABEL_129;
  if ( v181 )
  {
    if ( *(_BYTE *)(v159 + 16) == 25 )
    {
      v90 = 0;
      v89 = 0;
    }
    else
    {
      v89 = *(unsigned __int16 *)(v159 + 22);
      v90 = *(unsigned __int16 *)(v159 + 22);
    }
    if ( (_DWORD)v164 == v89 )
    {
      if ( v181 == &v181[v90] )
        goto LABEL_94;
      if ( *v87 == *v181 )
      {
        v91 = 1;
        while ( v91 != v90 )
        {
          v92 = v181[v91++];
          if ( v92 != v87[v91 - 1] )
            goto LABEL_95;
        }
LABEL_94:
        v84 = v83;
      }
    }
  }
LABEL_95:
  v181 = v87;
LABEL_96:
  memset(ptr, 0, 0x88u);
  v93 = *v11;
  v152 = *v11;
  if ( !v185 )
    goto LABEL_97;
  v128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(ptr[16]) = 1;
  v129 = 0;
  ptr[0] = &ptr[3];
  ptr[8] = &ptr[10];
  ptr[9] = (void *)0x600000000LL;
  *(__m128 *)&ptr[1] = v128;
  sub_18C74E0(v93, 4, 0, 4);
  v150 = v183;
  if ( !v183 )
    goto LABEL_194;
  v154 = v12;
  while ( 2 )
  {
    if ( v185 )
    {
      v134 = (unsigned __int16 *)v184[v129];
      v162.m128i_i8[0] = v182[v129];
      v162.m128i_i64[1] = (__int64)v134;
      v161 = _mm_load_si128(&v162);
      if ( v134 )
      {
        v135 = sub_1D8B300(v11, v134, v128, a7, (__int64)v184, v130, v131);
        if ( v135 == 1
          || (v136 = *v11,
              v137 = v135 & 0xFFFFFFFFFFFFFFFELL,
              v138 = sub_F5ED10(v162.m128i_i8),
              v140 = sub_1E72620(v136, v137, v138, v139),
              !HIBYTE(v140)) )
        {
          v37 = 0;
          sub_190D5E0(v152, v128);
          goto LABEL_132;
        }
        switch ( (_BYTE)v140 )
        {
          case 2:
LABEL_180:
            v161.m128i_i64[1] = 0;
            break;
          case 3:
            v161.m128i_i64[1] = v137;
            break;
          case 1:
            v161.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v162);
            goto LABEL_180;
        }
      }
    }
    else
    {
      v162.m128i_i8[0] = v182[v129];
      v162.m128i_i64[1] = 0;
      a7 = (__m128)_mm_load_si128(&v162);
      v161 = (__m128i)a7;
    }
    v132 = *v11;
    v133 = sub_F6CCB0(&v159, v128);
    v172 = ptr[0];
    v174[1] = LODWORD(ptr[9]);
    v173 = (__int64)ptr[1];
    v174[0] = ptr[8];
    if ( !(unsigned __int8)sub_19EE280(v132, &v172, v161.m128i_i8, v133) )
    {
      v172 = v174;
      v173 = 0x100000000LL;
      sub_F5EEE0((__int64 *)ptr, &v161, (__int64)&v172);
      if ( v172 != v174 )
        free(v172);
    }
    if ( v150 != (void *)++v129 )
      continue;
    break;
  }
  v12 = v154;
LABEL_194:
  v84 = 1;
  v182 = ptr[0];
  v183 = ptr[1];
  v184 = ptr[8];
  v185 = LODWORD(ptr[9]);
  sub_190D5E0(v152, v128);
  v152 = *v11;
LABEL_97:
  if ( !*(_DWORD *)(v152 + 12632) )
  {
    v94 = v159;
    if ( v147 == *(_QWORD *)(v12 + 24) )
    {
      v120 = *(unsigned __int16 *)(v12 + 22);
      v121 = 8 * v120;
      if ( v120 == (unsigned int)v164 )
      {
        v122 = (_QWORD *)(v12 + 48);
        v123 = (_QWORD *)(v12 + 48 + v121);
        if ( (_QWORD *)(v12 + 48) == v123 )
          goto LABEL_149;
        if ( *(_QWORD *)v163 == *(_QWORD *)(v12 + 48) )
        {
          v124 = v163;
          while ( 1 )
          {
            ++v122;
            ++v124;
            if ( v123 == v122 )
              break;
            if ( *v122 != *v124 )
              goto LABEL_99;
          }
LABEL_149:
          v37 = v159;
          if ( !v84 )
          {
LABEL_101:
            v95 = *(_BYTE *)(v94 + 16);
            if ( v95 == 26 )
            {
              v96 = ((*(_BYTE *)(v94 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
            }
            else
            {
              v97 = 16;
              if ( v95 == 25 )
              {
LABEL_104:
                v98 = sub_1EA6140(a2, v37, v97, 8);
                v100 = v160;
                *v99 = *v160;
                v99[1] = v100[1];
                v99[2] = v100[2];
                if ( *(_BYTE *)(v159 + 16) == 26 && (*(_BYTE *)(v159 + 19) & 0x1E) != 0 )
                {
                  v101 = v100[2 * *(unsigned __int16 *)(v159 + 22) + 4];
                  v102 = v100[2 * *(unsigned __int16 *)(v159 + 22) + 5];
                }
                else
                {
                  v102 = 0;
                  v101 = 0;
                }
                if ( *(_BYTE *)(v98 + 16) == 26 && (*(_BYTE *)(v98 + 19) & 0x1E) != 0 )
                {
                  v103 = &v99[2 * *(unsigned __int16 *)(v98 + 22) + 4];
                  *v103 = v101;
                  v103[1] = v102;
                }
                v99[3] = v100[3];
                if ( *(_BYTE *)(v98 + 16) != 25 )
                {
                  v104 = *(unsigned __int16 *)(v98 + 22);
                  if ( v104 )
                  {
                    v105 = 8LL * (unsigned int)(v104 - 1) + 8;
                    v106 = 0;
                    do
                    {
                      *(_QWORD *)&v99[v106 / 4 + 4] = *(_QWORD *)((char *)v166[0] + v106);
                      v106 += 8LL;
                    }
                    while ( v105 != v106 );
                  }
                }
                goto LABEL_132;
              }
              v96 = 15;
            }
            v97 = 8 * ((v96 + 8 * (unsigned int)*(unsigned __int16 *)(v94 + 22)) >> 3) + 8;
            goto LABEL_104;
          }
        }
      }
    }
  }
LABEL_99:
  v37 = sub_1E6A200(v152, v147, (_DWORD)v163, v164, 0, 0, (__int64)&v175);
  if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v94 = v37;
    goto LABEL_101;
  }
  v37 = 0;
LABEL_132:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_27:
  if ( v168 != v170 )
    free(v168);
  if ( v166[0] != v167 )
    free(v166[0]);
  if ( v163 != v165 )
    free(v163);
  return v37;
}
