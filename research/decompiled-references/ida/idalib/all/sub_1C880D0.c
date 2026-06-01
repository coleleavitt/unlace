__int64 __fastcall sub_1C880D0(
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
  __m128 si128; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rcx
  char v18; // dl
  int v19; // esi
  int v20; // eax
  int v21; // r8d
  char v22; // si
  int v23; // r8d
  int v24; // edx
  int v25; // r15d
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  char v31; // dl
  int v32; // ecx
  __int64 v33; // r13
  char *v34; // r13
  unsigned int v35; // eax
  __int64 v36; // r12
  __int64 *v37; // r14
  void **v38; // rsi
  unsigned __int64 v39; // rcx
  __int64 v40; // r13
  __int64 *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdi
  __int64 v44; // r13
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rax
  char v50; // dl
  int v51; // eax
  __int64 v52; // rax
  char *v53; // r13
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rsi
  char v57; // cl
  char v58; // dl
  int v59; // ecx
  int v60; // r8d
  char v61; // al
  int v62; // edx
  int v63; // r15d
  int v64; // r13d
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r9
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r13
  __int64 *v71; // rax
  __int64 v72; // r14
  __int64 v73; // rcx
  __int64 v74; // r14
  __int64 v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r13
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // r8
  unsigned __int16 *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // r13
  unsigned __int64 v86; // rax
  void *v87; // r14
  void *v88; // rax
  __int64 v89; // r10
  void *v90; // r13
  __m128 v91; // xmm0
  unsigned __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rbx
  int v95; // eax
  unsigned __int64 v96; // rsi
  unsigned __int16 *v97; // rax
  __int64 v98; // rbp
  unsigned __int64 v99; // rbx
  char *v100; // rax
  __int64 v101; // rdx
  unsigned __int16 v102; // ax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  void *v108; // r13
  void **v109; // rdx
  __int64 v110; // rsi
  char v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdi
  unsigned __int64 v114; // rdx
  char v115; // al
  unsigned __int64 v116; // rax
  __int64 v117; // rdi
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rax
  char v120; // al
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rax
  _DWORD *v124; // rdx
  _DWORD *v125; // rcx
  int v126; // edi
  int v127; // esi
  _DWORD *v128; // r8
  int v129; // eax
  __int64 v130; // rsi
  unsigned __int64 v131; // rax
  int v133; // [rsp+18h] [rbp-2A0h]
  int v134; // [rsp+20h] [rbp-298h]
  __int64 v135; // [rsp+20h] [rbp-298h]
  int v136; // [rsp+28h] [rbp-290h]
  int v137; // [rsp+28h] [rbp-290h]
  void *v138; // [rsp+28h] [rbp-290h]
  unsigned int v139; // [rsp+48h] [rbp-270h]
  __int64 v140; // [rsp+48h] [rbp-270h]
  int v141; // [rsp+50h] [rbp-268h]
  void **v142; // [rsp+58h] [rbp-260h]
  unsigned int v143; // [rsp+70h] [rbp-248h]
  unsigned __int64 v144; // [rsp+70h] [rbp-248h]
  __int64 v145; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v146; // [rsp+88h] [rbp-230h]
  __m128i v147; // [rsp+90h] [rbp-228h] BYREF
  __m128i v148; // [rsp+A0h] [rbp-218h] BYREF
  void *v149; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v150; // [rsp+B8h] [rbp-200h]
  _BYTE v151[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v152[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v153[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *v154; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v155; // [rsp+118h] [rbp-1A0h]
  _BYTE v156[16]; // [rsp+128h] [rbp-190h] BYREF
  char v157; // [rsp+138h] [rbp-180h]
  void *v158; // [rsp+140h] [rbp-178h] BYREF
  __int64 v159; // [rsp+148h] [rbp-170h]
  _QWORD v160[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v161; // [rsp+170h] [rbp-148h] BYREF
  int v162; // [rsp+188h] [rbp-130h]
  void **v163; // [rsp+190h] [rbp-128h]
  __int64 v164; // [rsp+198h] [rbp-120h]
  unsigned __int64 v165; // [rsp+1A0h] [rbp-118h]
  __int64 v166; // [rsp+1B0h] [rbp-108h]
  void *v167; // [rsp+1B8h] [rbp-100h]
  _BYTE *v168; // [rsp+1C8h] [rbp-F0h]
  void *v169; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v170; // [rsp+1D8h] [rbp-E0h]
  __int64 v171; // [rsp+1E0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v146 = a4;
  v149 = v151;
  v150 = 0x400000000LL;
  v152[1] = (void *)0x400000000LL;
  v154 = v156;
  v155 = si128;
  v157 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v145 = a3;
  v152[0] = v153;
  if ( (v14 & 0x100000000LL) == 0 )
  {
    v50 = *(_BYTE *)(a3 + 16);
    if ( v50 == 26 )
    {
      v51 = ((*(_BYTE *)(a3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v52 = 16;
      if ( v50 == 25 )
        goto LABEL_36;
      v51 = 15;
    }
    v52 = 8 * ((v51 + 8 * (unsigned int)*(unsigned __int16 *)(a3 + 22)) >> 3) + 8;
LABEL_36:
    v53 = (char *)v146 + v52;
    v54 = sub_F6C520(*(_QWORD *)(a3 + 24));
    v135 = sub_1C892C0(
             a1,
             a2,
             *(_QWORD *)(v145 + 24),
             v54 * ((unsigned __int64)&v53[-(v53 != nullptr)] / v54 + (v53 != nullptr)));
    if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v55 = *(_QWORD *)(a3 + 16) >> 24;
      if ( (v55 & 0x20) != 0 )
      {
        v56 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
        v57 = (unsigned __int8)v55 >> 6;
        v58 = *(_BYTE *)(a3 + 19);
        v59 = v57 & 1;
        if ( (v58 & 0x40) != 0 )
          v59 += (*(_BYTE *)(((a3 + v56 + ((v58 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v60 = ((a3 + v56 + (((char)BYTE3(*(_QWORD *)(a3 + 16)) >> 5) & 4) + 7) & 0xFFFFFFF8) + 8 * v59;
        v61 = ((unsigned __int8)v58 >> 1) & 0xF;
        if ( v61 == 2 )
        {
          v60 += 8 * (*(_WORD *)((a3 + v56 + ((v58 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        }
        else
        {
          switch ( v61 )
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
              switch ( v61 )
              {
                case 6:
                case 7:
                case 8:
                  v60 += 8;
                  goto LABEL_49;
                case 9:
                  goto LABEL_126;
                case 10:
                  goto LABEL_125;
                default:
LABEL_49:
                  switch ( v61 )
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
                      goto LABEL_126;
                    case 10:
                      goto LABEL_125;
                    default:
                      goto LABEL_170;
                  }
              }
            case 9:
LABEL_126:
              v60 += 8;
              break;
            case 10:
LABEL_125:
              v60 += 16;
              break;
            default:
LABEL_170:
              JUMPOUT(0x2EAA5C);
          }
        }
      }
      else
      {
        v60 = 0;
      }
LABEL_51:
      v62 = 0;
      v63 = v145 + 48;
      v64 = (_DWORD)v146 + 16;
      if ( *(_BYTE *)(v145 + 16) != 25 )
        v62 = *(unsigned __int16 *)(v145 + 22);
      v137 = v60;
      v133 = v62;
      sub_F6CCB0(&v145, si128);
      if ( !(unsigned __int8)sub_1C99AB0(
                               (_DWORD)a1,
                               v64,
                               v133,
                               v63,
                               v137,
                               (unsigned int)&v149,
                               (__int64)v152,
                               (__int64)&v154) )
        goto LABEL_54;
    }
LABEL_25:
    v36 = 0;
    goto LABEL_26;
  }
  v15 = v14 >> 24;
  if ( (v15 & 0x20) != 0 )
  {
    v17 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
    v18 = *(_BYTE *)(a3 + 19);
    v19 = (a3 + v17 + (((char)v15 >> 5) & 4) + 7) & 0xFFFFFFF8;
    v20 = (v15 & 0x40) != 0;
    if ( (v18 & 0x40) != 0 )
      v20 += (*(_BYTE *)(((a3 + v17 + ((v18 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v21 = v19 + 8 * v20;
    v22 = ((unsigned __int8)v18 >> 1) & 0xF;
    if ( v22 != 2 )
      __asm { jmp     rax }
    v23 = v21 + 8 * (*(_WORD *)((a3 + ((v18 >> 5) & 4) + v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  }
  else
  {
    v23 = 0;
  }
  v24 = 0;
  v25 = (_DWORD)v146 + 16;
  if ( *(_BYTE *)(a3 + 16) != 25 )
    v24 = *(unsigned __int16 *)(a3 + 22);
  v136 = v23;
  v134 = v24;
  sub_F6CCB0(&v145, si128);
  if ( (unsigned __int8)sub_1C99AB0(
                          (_DWORD)a1,
                          v25,
                          v134,
                          (int)a3 + 48,
                          v136,
                          (unsigned int)&v149,
                          (__int64)v152,
                          (__int64)&v154) )
    goto LABEL_25;
  v27 = *a1;
  v28 = *(_QWORD *)(*a1 + 3032);
  if ( !v28 )
    v28 = *(_QWORD *)(v27 + 544);
  v29 = *(_BYTE *)(v28 + 8);
  v30 = v28 - 64;
  if ( (v29 & 0x7Fu) - 59 >= 3 )
    v30 = 0;
  sub_19A2CD0((__int64)ptr, v27, v30, a5, 1, v26);
  v31 = *(_BYTE *)(v145 + 16);
  if ( v31 == 26 )
  {
    v32 = ((*(_BYTE *)(v145 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v33 = 16;
    if ( v31 == 25 )
      goto LABEL_18;
    v32 = 15;
  }
  v33 = 8 * ((v32 + 8 * (unsigned int)*(unsigned __int16 *)(v145 + 22)) >> 3) + 8;
LABEL_18:
  v34 = (char *)v146 + v33;
  v35 = sub_F6C520(*(_QWORD *)(v145 + 24));
  v135 = sub_1C892C0(
           a1,
           a2,
           *(_QWORD *)(v145 + 24),
           v35 * ((unsigned __int64)&v34[-(v34 != nullptr)] / v35 + (v34 != nullptr)));
  if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v36 = 0;
    sub_19A2DA0((__int64 *)ptr);
    goto LABEL_26;
  }
  sub_19A2DA0((__int64 *)ptr);
LABEL_54:
  v65 = a3;
  sub_A5E110(&v161, a3);
  v139 = sub_F6CCB0(a10, si128);
  v68 = v162;
  v69 = (unsigned int)(v162 - 6);
  if ( (unsigned int)v69 <= 2 )
  {
    v70 = v166;
    if ( v166 && (*(_BYTE *)(v166 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v71 = (__int64 *)(*(_QWORD *)(v166 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v72 = *v71;
      if ( *(_BYTE *)(*v71 + 16) != 26 )
        v72 = sub_F63050(*v71, v65, v69, v66);
      v73 = *(_QWORD *)(v72 + 16);
      if ( (v73 & 0x1000000) != 0 )
      {
        v110 = *(unsigned __int16 *)(v72 + 22);
        v111 = *(_BYTE *)(v72 + 19);
        v112 = (v73 & 0x40000000) != 0;
        v113 = 8 * v110 + 48;
        if ( (v111 & 0x40) != 0 )
          v112 += (*(_BYTE *)(((v72 + v113 + ((v111 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v114 = ((v72 + v113 + ((SBYTE3(v73) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v112;
        v115 = ((unsigned __int8)v111 >> 1) & 0xF;
        if ( v115 != 2 )
        {
          switch ( v115 )
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
              switch ( v115 )
              {
                case 6:
                case 7:
                case 8:
                  v114 += 8LL;
                  goto LABEL_129;
                case 9:
                  goto LABEL_136;
                case 10:
                  goto LABEL_135;
                default:
LABEL_129:
                  switch ( v115 )
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
                      goto LABEL_131;
                    case 9:
                      goto LABEL_136;
                    case 10:
                      goto LABEL_135;
                    default:
                      goto LABEL_170;
                  }
              }
            case 9:
LABEL_136:
              v116 = v114 + 8;
              v117 = 8;
              goto LABEL_132;
            case 10:
LABEL_135:
              v116 = v114 + 16;
              v117 = 16;
              goto LABEL_132;
            default:
              goto LABEL_170;
          }
        }
        v114 += 8LL * (*(_WORD *)((v72 + ((v111 >> 5) & 4) + v113 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_131:
        v116 = v114;
        v117 = 0;
LABEL_132:
        v118 = v117 + v110 + v114;
        if ( (v73 & 0x20000000) != 0 )
          v116 = v118;
        v74 = *(_QWORD *)((v116 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v72 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v72, v65, v69, v73) )
      {
        v74 = *(_BYTE *)(v72 + 18) >> 5;
      }
      else
      {
        v74 = 0;
      }
      v75 = *(_QWORD *)(sub_B8C1B0(v70 + 72) + 16);
      v76 = (_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v75 & 4) != 0 )
        v76 = (_QWORD *)*v76;
      if ( v76 )
        v76 -= 8;
      v77 = 1;
    }
    else
    {
      v74 = 0;
      v77 = 0;
      v76 = nullptr;
    }
    sub_19A2CD0((__int64)ptr, *a9, (__int64)v76, v74, v77, v67);
    v78 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v82 = sub_1C7CFE0(a9, v165, si128, a7, v79, v80, v81);
    if ( v82 == (unsigned __int16 *)((char *)&dword_0 + 1)
      || (v83 = *a9,
          LODWORD(v158) = v162,
          v84 = sub_18B0290(
                  v83,
                  (_DWORD *)((unsigned __int64)v82 & 0xFFFFFFFFFFFFFFFELL),
                  &v158,
                  *(double *)si128.m128_u64),
          v84 == 1) )
    {
      sub_190D5E0(v78, si128);
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_25;
    }
    v165 = v84 & 0xFFFFFFFFFFFFFFFELL;
    v162 = (int)v158;
    sub_190D5E0(v78, si128);
    sub_19A2DA0((__int64 *)ptr);
    v68 = v162;
  }
  if ( v68 == 2 )
  {
    v37 = (__int64 *)v163;
    v38 = &v163[v164];
    v39 = (unsigned __int64)ptr;
    v142 = v38;
    if ( v163 != v38 )
    {
      do
      {
        v40 = *v37;
        v41 = (__int64 *)(*v37 & 0xFFFFFFFFFFFFFFF0LL);
        v42 = *v41;
        if ( *(_BYTE *)(*v41 + 16) == 38
          || (v103 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v103 + 16) == 38)
          && (v42 = sub_F63050(*v41, v38, v103, v39)) != 0 )
        {
          v43 = *a9;
          ptr[0] = &ptr[2];
          ptr[1] = (void *)0x200000000LL;
          sub_1E4C960(v43, *(_QWORD *)(v42 + 32));
          v44 = *a9;
          v45 = *(unsigned int *)(v42 + 20);
          v46 = *(_DWORD *)(*a9 + 12632);
          v143 = *(_DWORD *)(v42 + 20);
          *(_DWORD *)(*a9 + 12632) = 0;
          v141 = v46;
          v48 = sub_1C8ABA0(a9, *(_QWORD *)(v42 + 32), v47, v45);
          if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            *(_DWORD *)(v44 + 12632) = v46;
            if ( ptr[0] != &ptr[2] )
              free(ptr[0]);
            goto LABEL_25;
          }
          v119 = sub_A781D0(*(_QWORD *)(*a9 + 248), v48, v143);
          v39 = *(unsigned int *)(a11 + 8);
          v38 = (void **)*(unsigned int *)(a11 + 12);
          if ( v39 + 1 > (unsigned __int64)v38 )
          {
            v38 = (void **)(a11 + 16);
            v144 = v119;
            sub_2237220(a11, a11 + 16, v39 + 1, 8);
            v39 = *(unsigned int *)(a11 + 8);
            v119 = v144;
          }
          *(_QWORD *)(*(_QWORD *)a11 + 8 * v39) = v119;
          ++*(_DWORD *)(a11 + 8);
          *(_DWORD *)(v44 + 12632) = v141;
          if ( ptr[0] != &ptr[2] )
            free(ptr[0]);
        }
        else
        {
          ptr[0] = (void *)sub_1C8ABA0(a9, v40, v103, v39);
          if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_25;
          v38 = ptr;
          if ( (unsigned __int8)sub_18B53F0(
                                  *a9,
                                  (__int64 *)ptr,
                                  ((unsigned __int64)v139 << 32) | v139,
                                  v104,
                                  v105,
                                  v106) )
            goto LABEL_25;
          v107 = *(unsigned int *)(a11 + 8);
          v39 = *(unsigned int *)(a11 + 12);
          v108 = ptr[0];
          if ( v107 + 1 > v39 )
          {
            v38 = (void **)(a11 + 16);
            sub_2237220(a11, a11 + 16, v107 + 1, 8);
            v107 = *(unsigned int *)(a11 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a11 + 8 * v107) = v108;
          ++*(_DWORD *)(a11 + 8);
        }
        ++v37;
      }
      while ( v142 != (void **)v37 );
    }
    v109 = *(void ***)a11;
    v164 = *(unsigned int *)(a11 + 8);
    v163 = v109;
    if ( !v164 )
      v162 = 1;
  }
  v85 = (unsigned int)v150;
  if ( !v157 )
  {
    v88 = v167;
    goto LABEL_119;
  }
  v86 = v155.m128_u64[0];
  if ( (unsigned int)v150 == v155.m128_u64[0] )
    goto LABEL_140;
  if ( (unsigned int)v150 < v155.m128_u64[0] )
  {
    v155.m128_u64[0] = (unsigned int)v150;
LABEL_140:
    v87 = v154;
    goto LABEL_79;
  }
  if ( (unsigned int)v150 > v155.m128_u64[1] )
  {
    sub_2236E10(&v154, v156, (unsigned int)v150, 1);
    v86 = v155.m128_u64[0];
  }
  v87 = v154;
  if ( (char *)v154 + v86 != (char *)v154 + v85 )
    memset((char *)v154 + v86, 0, v85 - v86);
  v155.m128_u64[0] = v85;
LABEL_79:
  v88 = v167;
  if ( v87 )
  {
    v167 = v87;
    goto LABEL_81;
  }
LABEL_119:
  if ( v88 )
    v167 = nullptr;
LABEL_81:
  v89 = *a1;
  memset(ptr, 0, 0x88u);
  v140 = v89;
  if ( v171 )
  {
    v90 = nullptr;
    v91 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    LOBYTE(ptr[16]) = 1;
    ptr[0] = &ptr[3];
    ptr[8] = &ptr[10];
    ptr[9] = (void *)0x600000000LL;
    *(__m128 *)&ptr[1] = v91;
    sub_18C74E0(v89, 4, 0, 4);
    v138 = v169;
    if ( v169 )
    {
      do
      {
        if ( !v171 )
        {
          v148.m128i_i8[0] = *((_BYTE *)v90 + (_QWORD)v168);
          v148.m128i_i64[1] = 0;
          a7 = (__m128)_mm_load_si128(&v148);
          v147 = (__m128i)a7;
          goto LABEL_85;
        }
        v96 = v170[(_QWORD)v90];
        v148.m128i_i8[0] = *((_BYTE *)v90 + (_QWORD)v168);
        v148.m128i_i64[1] = v96;
        v147 = _mm_load_si128(&v148);
        if ( v96 )
        {
          v97 = sub_1C7CFE0(a1, v96, v91, a7, (__int64)v170, v92, v93);
          if ( v97 == (unsigned __int16 *)((char *)&dword_0 + 1)
            || (v98 = *a1,
                v99 = (unsigned __int64)v97 & 0xFFFFFFFFFFFFFFFELL,
                v100 = sub_F5ED10(v148.m128i_i8),
                v102 = sub_1E72620(v98, v99, v100, v101),
                !HIBYTE(v102)) )
          {
            v36 = 0;
            sub_190D5E0(v140, v91);
            goto LABEL_103;
          }
          if ( (_BYTE)v102 == 2 )
            goto LABEL_95;
          if ( (_BYTE)v102 != 3 )
          {
            if ( (_BYTE)v102 != 1 )
              goto LABEL_85;
            v147.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v148);
LABEL_95:
            v147.m128i_i64[1] = 0;
            goto LABEL_85;
          }
          v147.m128i_i64[1] = v99;
        }
LABEL_85:
        v94 = *a1;
        v95 = sub_F6CCB0(&v145, v91);
        v158 = ptr[0];
        v160[1] = LODWORD(ptr[9]);
        v159 = (__int64)ptr[1];
        v160[0] = ptr[8];
        if ( !(unsigned __int8)sub_19EE280(v94, &v158, v147.m128i_i8, v95) )
        {
          v158 = v160;
          v159 = 0x100000000LL;
          sub_F5EEE0((__int64 *)ptr, &v147, (__int64)&v158);
          if ( v158 != v160 )
            free(v158);
        }
        v90 = (char *)v90 + 1;
      }
      while ( v90 != v138 );
    }
    v168 = ptr[0];
    v169 = ptr[1];
    v170 = ptr[8];
    v171 = LODWORD(ptr[9]);
    sub_190D5E0(v140, v91);
    v140 = *a1;
  }
  v36 = sub_1E6A200(v140, v135, (_DWORD)v149, v150, 0, 0, (__int64)&v161);
  if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v120 = *(_BYTE *)(v36 + 16);
    if ( v120 == 26 )
    {
      v121 = ((*(_BYTE *)(v36 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v122 = 16;
      if ( v120 == 25 )
      {
LABEL_150:
        v123 = sub_1EA6140(a2, v36, v122, 8);
        v125 = v146;
        *v124 = *v146;
        v124[1] = v125[1];
        v124[2] = v125[2];
        if ( *(_BYTE *)(v145 + 16) == 26 && (*(_BYTE *)(v145 + 19) & 0x1E) != 0 )
        {
          v126 = v125[2 * *(unsigned __int16 *)(v145 + 22) + 4];
          v127 = v125[2 * *(unsigned __int16 *)(v145 + 22) + 5];
        }
        else
        {
          v127 = 0;
          v126 = 0;
        }
        if ( *(_BYTE *)(v123 + 16) == 26 && (*(_BYTE *)(v123 + 19) & 0x1E) != 0 )
        {
          v128 = &v124[2 * *(unsigned __int16 *)(v123 + 22) + 4];
          *v128 = v126;
          v128[1] = v127;
        }
        v124[3] = v125[3];
        if ( *(_BYTE *)(v123 + 16) != 25 )
        {
          v129 = *(unsigned __int16 *)(v123 + 22);
          if ( v129 )
          {
            v130 = 8LL * (unsigned int)(v129 - 1) + 8;
            v131 = 0;
            do
            {
              *(_QWORD *)&v124[v131 / 4 + 4] = *(_QWORD *)((char *)v152[0] + v131);
              v131 += 8LL;
            }
            while ( v130 != v131 );
          }
        }
        goto LABEL_103;
      }
      v121 = 15;
    }
    v122 = 8 * ((v121 + 8 * (unsigned int)*(unsigned __int16 *)(v36 + 22)) >> 3) + 8;
    goto LABEL_150;
  }
  v36 = 0;
LABEL_103:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_26:
  if ( v154 != v156 )
    free(v154);
  if ( v152[0] != v153 )
    free(v152[0]);
  if ( v149 != v151 )
    free(v149);
  return v36;
}
