__int64 __fastcall sub_F74C10(const __m128i *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  _BYTE *v7; // rax
  __int8 v8; // si
  __int64 v9; // rbp
  __int64 i; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // al
  char v17; // al
  unsigned __int8 v18; // cl
  char v19; // r9
  int v20; // r15d
  unsigned int v21; // r8d
  __m128i *v22; // rdx
  __m128i *v23; // rdx
  char *v24; // rax
  size_t v25; // rdx
  size_t v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  _WORD *v30; // rdx
  char *v31; // rax
  size_t v32; // rdx
  __int64 v33; // rcx
  size_t v34; // r15
  void *v35; // rdi
  _BYTE *v36; // rax
  char v37; // al
  unsigned __int64 v38; // rax
  __int16 v39; // ax
  __int16 v40; // r14
  int v41; // ebp
  unsigned int v42; // eax
  int v43; // ebp
  int v44; // r15d
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  char v48; // al
  unsigned __int64 v49; // rax
  __int64 v50; // r10
  __int64 v51; // rbp
  unsigned __int64 v52; // r9
  unsigned __int8 v53; // di
  char v54; // dl
  __int64 v55; // rcx
  char v56; // r15
  char v57; // si
  unsigned __int64 v58; // r8
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  __m128i si128; // xmm0
  __m128i v62; // xmm0
  __int64 v63; // rsi
  __int64 v64; // rdi
  char v65; // dl
  __int64 v66; // rcx
  unsigned __int64 v67; // r8
  char v68; // cl
  unsigned __int64 v69; // r9
  __int64 v70; // rsi
  unsigned __int64 v71; // rdi
  __int64 v72; // rdx
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rbp
  char *v75; // rax
  char v76; // dl
  __int64 v77; // rax
  __m128i *v78; // rdx
  __int64 v79; // r15
  char *v80; // rax
  size_t v81; // rdx
  void *v82; // rdi
  char *v83; // r15
  _BYTE *v84; // rdx
  unsigned __int64 v85; // rax
  _BYTE *v86; // rax
  __int64 v88; // rcx
  __int64 v89; // rbp
  unsigned __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rdi
  char v93; // dl
  __int64 v94; // rcx
  unsigned __int64 v95; // r8
  char v96; // cl
  __int64 v97; // rax
  unsigned __int64 v98; // rsi
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  _BOOL8 v102; // r11
  unsigned __int64 v103; // r14
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned __int64 v109; // rcx
  __int64 v110; // r11
  unsigned __int64 v111; // r8
  __int64 v112; // r9
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // r9
  __int64 v115; // r8
  unsigned __int64 v116; // r8
  unsigned __int8 v117; // [rsp+18h] [rbp-400h]
  unsigned __int8 v118; // [rsp+18h] [rbp-400h]
  __int64 v119; // [rsp+18h] [rbp-400h]
  _BYTE *v120; // [rsp+18h] [rbp-400h]
  __int64 v121; // [rsp+18h] [rbp-400h]
  char v122; // [rsp+20h] [rbp-3F8h]
  __int64 v123; // [rsp+20h] [rbp-3F8h]
  int v124; // [rsp+28h] [rbp-3F0h]
  unsigned int v125; // [rsp+28h] [rbp-3F0h]
  unsigned __int64 v126; // [rsp+28h] [rbp-3F0h]
  char v127; // [rsp+30h] [rbp-3E8h]
  size_t v128; // [rsp+30h] [rbp-3E8h]
  unsigned __int8 v129; // [rsp+3Fh] [rbp-3D9h]
  unsigned __int16 v130; // [rsp+46h] [rbp-3D2h] BYREF
  unsigned __int64 v131; // [rsp+48h] [rbp-3D0h] BYREF
  _QWORD v132[2]; // [rsp+50h] [rbp-3C8h] BYREF
  void *v133[2]; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 v134; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v135; // [rsp+80h] [rbp-398h] BYREF
  char *v136; // [rsp+88h] [rbp-390h]
  char v137; // [rsp+D9h] [rbp-33Fh]

  v6 = *(_QWORD *)(a3 + 24);
  v129 = a1[1].m128i_u8[4];
  v7 = *(_BYTE **)(a3 + 32);
  if ( !v129 )
  {
    if ( v6 <= (unsigned __int64)v7 )
    {
      sub_227BA10(a3, 41);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v7 + 1;
      *v7 = 41;
    }
    v6 = *(_QWORD *)(a3 + 24);
    v129 = a1[1].m128i_u8[4];
    v7 = *(_BYTE **)(a3 + 32);
  }
  a1[1].m128i_i8[4] = 0;
  if ( v6 <= (unsigned __int64)v7 )
  {
    sub_227BA10(a3, 40);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v7 + 1;
    *v7 = 40;
  }
  v8 = a1->m128i_i8[1];
  a1->m128i_i8[1] = v8 & 0xFE;
  v122 = v8 & 1;
  if ( *(_WORD *)(a2 + 22) )
  {
    v9 = (unsigned int)*(unsigned __int16 *)(a2 + 22) - 1;
    for ( i = 0; ; ++i )
    {
      v11 = *(_QWORD *)(a2 + 16);
      if ( (v11 & 0x20000000) == 0 )
        goto LABEL_25;
      v12 = 8LL * *(unsigned __int16 *)(a2 + 22) + 48;
      v13 = *(_BYTE *)(a2 + 19);
      v14 = (v11 & 0x40000000) != 0;
      if ( (v13 & 0x40) != 0 )
        v14 += (*(_BYTE *)(((a2 + v12 + ((v13 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v15 = ((a2 + v12 + ((SBYTE3(v11) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v14;
      v16 = ((unsigned __int8)v13 >> 1) & 0xF;
      if ( v16 != 2 )
        __asm { jmp     rcx }
      v17 = *(_BYTE *)(i
                     + v15
                     + 8LL * (*(_WORD *)((a2 + ((SBYTE3(v11) >> 5) & 4) + v12 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF));
      v18 = v17 & 0xF;
      v19 = v17 & 0x40;
      v20 = v17 & 0xF;
      v21 = v20 - 5;
      if ( (v17 & 0x10) != 0 )
      {
        v22 = *(__m128i **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v22 > 0x1Cu )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A9120);
          qmemcpy(&v22[1], "s_consumed)) ", 13);
          *v22 = si128;
          *(_QWORD *)(a3 + 32) += 29LL;
        }
        else
        {
          v127 = v17 & 0x40;
          v124 = v18 - 5;
          v117 = v17 & 0xF;
          sub_227BF10(a3, "__attribute__((ns_consumed)) ", 29);
          v18 = v117;
          v21 = v124;
          v19 = v127;
        }
      }
      if ( v19 )
      {
        v23 = *(__m128i **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v23 > 0x19u )
        {
          v62 = _mm_load_si128((const __m128i *)&xmmword_23A9120);
          qmemcpy(&v23[1], "oescape)) ", 10);
          *v23 = v62;
          *(_QWORD *)(a3 + 32) += 26LL;
        }
        else
        {
          v118 = v18;
          v125 = v21;
          sub_227BF10(a3, "__attribute__((noescape)) ", 26);
          v18 = v118;
          v21 = v125;
        }
      }
      if ( v21 > 1 )
        break;
      v24 = sub_F70F40(v20);
      v26 = v25;
      if ( *(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 32) < v25 )
      {
        v27 = sub_227BF10(a3, v24, v25);
      }
      else
      {
        v27 = a3;
        if ( v25 )
        {
          memcpy(*(void **)(a3 + 32), v24, v25);
          *(_QWORD *)(a3 + 32) += v26;
          v27 = a3;
        }
      }
      sub_995540(v27, " ");
      if ( a1->m128i_i8[5] >= 0 )
        goto LABEL_25;
      v29 = *(_QWORD *)(a2 + 8 * i + 48);
      v97 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v97 + 16) - 43 <= 1
        || (v101 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v97 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                 - 43,
            (unsigned int)v101 <= 1)
        && (v121 = *(_QWORD *)(a2 + 8 * i + 48),
            v97 = sub_F63050(*(_QWORD *)(v121 & 0xFFFFFFFFFFFFFFF0LL), v29, v101, v28),
            v29 = v121,
            v97) )
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)(v97 + 32);
          if ( (*(_BYTE *)(v97 + 18) & 0x10) == 0 )
            break;
          v98 = v29 & 0xFFFFFFFFFFFFFFF0LL;
          v97 = *(_QWORD *)v98;
          v99 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v98 + 16LL) - 43;
          if ( (unsigned int)v99 > 1 )
            v97 = sub_F63050(v97, v98, v99, v28);
        }
      }
LABEL_26:
      sub_F774E0(a1, v29, a3, 0, 0);
      if ( v9 == i )
        goto LABEL_36;
      if ( (_DWORD)i != -1 )
      {
        v30 = *(_WORD **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v30 > 1u )
        {
          *v30 = 8236;
          *(_QWORD *)(a3 + 32) += 2LL;
        }
        else
        {
          sub_227BF10(a3, ", ", 2);
        }
      }
    }
    if ( v18 )
    {
      v119 = sub_995540(a3, "__attribute__((");
      v31 = sub_F70F40(v20);
      v33 = v119;
      v34 = v32;
      v35 = *(void **)(v119 + 32);
      if ( *(_QWORD *)(v119 + 24) - (_QWORD)v35 < v32 )
      {
        v33 = sub_227BF10(v119, v31, v32);
      }
      else if ( v32 )
      {
        memcpy(v35, v31, v32);
        v33 = v119;
        *(_QWORD *)(v119 + 32) += v34;
      }
      sub_995540(v33, ")) ");
    }
LABEL_25:
    v29 = *(_QWORD *)(a2 + 8 * i + 48);
    goto LABEL_26;
  }
LABEL_36:
  a1->m128i_i8[1] = v122 | a1->m128i_i8[1] & 0xFE;
  if ( *(char *)(a2 + 19) < 0 )
  {
    if ( *(_WORD *)(a2 + 22) )
      sub_995540(a3, ", ");
    sub_995540(a3, "...");
    v36 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v36 < *(_QWORD *)(a3 + 24) )
      goto LABEL_39;
LABEL_113:
    sub_227BA10(a3, 41);
    goto LABEL_40;
  }
  if ( !*(_WORD *)(a2 + 22) && (a1->m128i_i8[3] & 0x20) != 0 )
    sub_995540(a3, "void");
  v36 = *(_BYTE **)(a3 + 32);
  if ( (unsigned __int64)v36 >= *(_QWORD *)(a3 + 24) )
    goto LABEL_113;
LABEL_39:
  *(_QWORD *)(a3 + 32) = v36 + 1;
  *v36 = 41;
LABEL_40:
  v130 = *(_WORD *)(a2 + 20) >> 2;
  v37 = *(_BYTE *)(a2 + 19);
  if ( (v37 & 0x40) != 0 )
  {
    v38 = (a2 + ((v37 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v38 + 1) & 4) != 0 )
    {
      v39 = *(_WORD *)(v38 + 8);
      v40 = v39 & 0x1FF;
      v41 = v39 & 0x1FF;
      if ( (v39 & 2) != 0 )
        sub_995540(a3, " __arm_streaming_compatible");
      v42 = v41;
      v43 = (unsigned __int8)v41 >> 5;
      v44 = (v42 >> 2) & 7;
      if ( (v40 & 1) != 0 )
        sub_995540(a3, " __arm_streaming");
      if ( (v40 & 0x100) != 0 )
        sub_995540(a3, "__arm_agnostic(\"sme_za_state\")");
      switch ( v44 )
      {
        case 1:
          sub_995540(a3, " __arm_preserves(\"za\")");
          break;
        case 2:
          sub_995540(a3, " __arm_in(\"za\")");
          break;
        case 3:
          sub_995540(a3, " __arm_out(\"za\")");
          break;
        case 4:
          sub_995540(a3, " __arm_inout(\"za\")");
          break;
      }
      switch ( v43 )
      {
        case 1:
          sub_995540(a3, " __arm_preserves(\"zt0\")");
          break;
        case 2:
          sub_995540(a3, " __arm_in(\"zt0\")");
          break;
        case 3:
          sub_995540(a3, " __arm_out(\"zt0\")");
          break;
        case 4:
          sub_995540(a3, " __arm_inout(\"zt0\")");
          break;
      }
    }
  }
  sub_F6F0A0(a1[1].m128i_i8[5], &v130, a3);
  v46 = *(_QWORD *)(a2 + 16);
  if ( (v46 & 0x1000000) != 0 )
  {
    v63 = *(unsigned __int16 *)(a2 + 22);
    v64 = 8 * v63 + 48;
    v65 = *(_BYTE *)(a2 + 19);
    v66 = (v46 & 0x40000000) != 0;
    if ( (v65 & 0x40) != 0 )
      v66 += (*(_BYTE *)(((a2 + v64 + ((v65 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v67 = ((a2 + v64 + ((SBYTE3(v46) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v66;
    v68 = ((unsigned __int8)v65 >> 1) & 0xF;
    if ( v68 == 2 )
    {
      v67 += 8LL * (*(_WORD *)((a2 + ((v65 >> 5) & 4) + v64 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_157:
      v104 = v67;
      v105 = 0;
    }
    else
    {
      switch ( v68 )
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
          switch ( v68 )
          {
            case 6:
            case 7:
            case 8:
              v67 += 8LL;
              goto LABEL_155;
            case 9:
              goto LABEL_153;
            case 10:
              goto LABEL_149;
            default:
LABEL_155:
              switch ( v68 )
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
                  goto LABEL_157;
                case 9:
                  goto LABEL_153;
                case 10:
                  goto LABEL_149;
                default:
                  goto LABEL_201;
              }
          }
        case 9:
LABEL_153:
          v104 = v67 + 8;
          v105 = 8;
          break;
        case 10:
LABEL_149:
          v104 = v67 + 16;
          v105 = 16;
          break;
        default:
LABEL_201:
          BUG();
      }
    }
    v106 = v67 + v63 + v105;
    if ( (v46 & 0x20000000) != 0 )
      v104 = v106;
    v47 = *(_QWORD *)((v104 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 16) != 26
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
       || !sub_F63050(a2, &v130, v46 >> 24, v45)) )
    {
      goto LABEL_60;
    }
    v47 = *(_BYTE *)(a2 + 18) >> 5;
  }
  if ( v47 )
  {
    v89 = sub_995540(a3, " ");
    v90 = *(_QWORD *)(a2 + 16);
    if ( (v90 & 0x1000000) != 0 )
    {
      v91 = *(unsigned __int16 *)(a2 + 22);
      v92 = 8 * v91 + 48;
      v93 = *(_BYTE *)(a2 + 19);
      v94 = (v90 & 0x40000000) != 0;
      if ( (v93 & 0x40) != 0 )
        v94 += (*(_BYTE *)(((a2 + v92 + ((v93 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v95 = ((a2 + v92 + ((SBYTE3(v90) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v94;
      v96 = ((unsigned __int8)v93 >> 1) & 0xF;
      if ( v96 != 2 )
      {
        switch ( v96 )
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
            switch ( v96 )
            {
              case 6:
              case 7:
              case 8:
                v95 += 8LL;
                goto LABEL_162;
              case 9:
                goto LABEL_180;
              case 10:
                goto LABEL_179;
              default:
LABEL_162:
                switch ( v96 )
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
                    goto LABEL_164;
                  case 9:
                    goto LABEL_180;
                  case 10:
                    goto LABEL_179;
                  default:
                    goto LABEL_201;
                }
            }
          case 9:
LABEL_180:
            v107 = v95 + 8;
            v108 = 8;
            goto LABEL_165;
          case 10:
LABEL_179:
            v107 = v95 + 16;
            v108 = 16;
            goto LABEL_165;
          default:
            goto LABEL_201;
        }
      }
      v95 += 8LL * (*(_WORD *)((a2 + ((v93 >> 5) & 4) + v92 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_164:
      v107 = v95;
      v108 = 0;
LABEL_165:
      v109 = v95 + v91 + v108;
      if ( (v90 & 0x20000000) != 0 )
        v107 = v109;
      v100 = *(_QWORD *)((v107 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else if ( *(_BYTE *)(a2 + 16) == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && sub_F63050(a2, " ", v90 >> 24, v88) )
    {
      v100 = *(_BYTE *)(a2 + 18) >> 5;
    }
    else
    {
      v100 = 0;
    }
    v131 = v100;
    sub_FEA220(&v135);
    v132[1] = 0;
    BYTE1(v132[0]) = (BYTE1(v135) >> 2) & 2 | BYTE1(v132[0]) & 0xFD;
    BYTE2(v132[0]) = (BYTE3(v135) >> 2 << 7) | BYTE2(v132[0]) & 0x7F;
    BYTE3(v132[0]) = ((((BYTE1(v135) >> 4) ^ 1) & 1) << 6)
                   | (8 * v135) & 0x10
                   | (8 * ((v135 & 0x1000) != 0)) & 0x8F
                   | (4 * (v135 & 1)) & 0x8F
                   | (BYTE1(v135) >> 2) & 2
                   | ((v135 & 0x1008) != 0)
                   | BYTE3(v132[0]) & 0x80
                   | (32 * (((BYTE1(v135) >> 3) ^ 1) & 1)) & 0xBF;
    BYTE4(v132[0]) = (4 * ((v135 & 0x10000080) == 128)) | (BYTE3(v135) >> 2) & 2 | BYTE4(v132[0]) & 0xF9;
    BYTE5(v132[0]) = (v137 << 7) | BYTE5(v132[0]) & 0x7F;
    v132[0] = v132[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
    sub_F71960(v133, &v131, (__int64)v132);
    sub_9985E0(&v135);
    sub_227BF10(v89, v133[0], v133[1]);
    if ( v133[0] != &v134 )
      operator delete(v133[0]);
  }
LABEL_60:
  v48 = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( v48 == 1 )
  {
    sub_995540(a3, " &");
  }
  else if ( v48 == 2 )
  {
    sub_995540(a3, " &&");
  }
  sub_F74880(a2, a3, a1);
  v49 = *(_QWORD *)(a2 + 16);
  if ( (v49 & 0x40000000) != 0 )
  {
    v50 = *(unsigned __int16 *)(a2 + 22);
    v51 = 8 * v50 + 48;
    v52 = (a2 + v51 + ((SBYTE3(v49) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v53 = *(_BYTE *)(v52 + 1);
    if ( (v53 & 0xF0) != 0 )
    {
      v54 = *(_BYTE *)(a2 + 19);
      v55 = v53 >> 4;
      v56 = v54 & 0x40;
      v57 = ((unsigned __int8)v54 >> 1) & 0xF;
      if ( (v53 & 8) != 0 && v53 >> 4 )
      {
        v102 = (v49 & 0x40000000) != 0;
        if ( v56 )
          v103 = v52
               + 8 * (v102 + ((*(_BYTE *)(((a2 + v51 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0));
        else
          v103 = v52 + 8 * v102;
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
                  v103 += 8LL;
                  goto LABEL_193;
                case 9:
                  goto LABEL_190;
                case 10:
                  goto LABEL_183;
                default:
LABEL_193:
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
                      goto LABEL_195;
                    case 9:
                      v110 = v53 >> 4;
                      v56 = v54 & 0x40;
                      v57 = ((unsigned __int8)v54 >> 1) & 0xF;
                      goto LABEL_191;
                    case 10:
                      v110 = v53 >> 4;
                      v56 = v54 & 0x40;
                      v57 = ((unsigned __int8)v54 >> 1) & 0xF;
                      goto LABEL_184;
                    default:
                      goto LABEL_201;
                  }
              }
            case 9:
LABEL_190:
              v110 = v53 >> 4;
LABEL_191:
              v111 = v103 + 8;
              v112 = 8;
              goto LABEL_185;
            case 10:
LABEL_183:
              v110 = v53 >> 4;
LABEL_184:
              v111 = v103 + 16;
              v112 = 16;
              goto LABEL_185;
            default:
              goto LABEL_201;
          }
        }
        v103 += 8LL * (*(_WORD *)((a2 + v51 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_195:
        v111 = v103;
        v110 = v53 >> 4;
        v56 = v54 & 0x40;
        v112 = 0;
        v57 = ((unsigned __int8)v54 >> 1) & 0xF;
LABEL_185:
        v113 = v103 + v50 + v112;
        if ( (v49 & 0x20000000) != 0 )
          v111 = v113;
        v114 = (v111 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v115 = 8LL * (BYTE3(v49) & 1);
        v116 = (v49 & 0x40000000) != 0
             ? v114 + v115 + (*(_BYTE *)(((a2 + v51 + ((SBYTE3(v49) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4)
             : v114 + v115;
        v123 = v53 >> 4;
        v55 = v110;
        v58 = (v116 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v123 = 0;
        v58 = 0;
      }
      v59 = (v49 & 0x40000000) != 0;
      if ( v56 )
        v59 += (*(_BYTE *)(((a2 + v51 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v60 = ((a2 + v51 + ((SBYTE3(v49) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v59;
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
                v60 += 8LL;
                goto LABEL_160;
              case 9:
                goto LABEL_178;
              case 10:
                goto LABEL_177;
              default:
LABEL_160:
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
                    goto LABEL_83;
                  case 9:
                    goto LABEL_178;
                  case 10:
                    goto LABEL_177;
                  default:
                    goto LABEL_201;
                }
            }
          case 9:
LABEL_178:
            v69 = v60 + 8;
            v70 = 8;
            goto LABEL_84;
          case 10:
LABEL_177:
            v69 = v60 + 16;
            v70 = 16;
            goto LABEL_84;
          default:
            goto LABEL_201;
        }
      }
      v60 += 8LL * (*(_WORD *)((a2 + ((v54 >> 5) & 4) + v51 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_83:
      v69 = v60;
      v70 = 0;
LABEL_84:
      v71 = v50 + v70 + v60;
      if ( (v49 & 0x20000000) != 0 )
        v69 = v71;
      v72 = 8 * ((v49 >> 24) & 1);
      v73 = (v69 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v55 )
      {
        v74 = v72 + v73;
        v120 = (_BYTE *)(v72 + v55 + v73);
        v126 = v58 - 8 * (v72 + v73);
        do
        {
          while ( 1 )
          {
            v75 = nullptr;
            if ( v123 )
              v75 = *(char **)(v126 + 8 * v74);
            v76 = *(_BYTE *)v74;
            v136 = v75;
            v77 = *(_QWORD *)(a3 + 24);
            LOBYTE(v135) = v76;
            v78 = *(__m128i **)(a3 + 32);
            if ( (unsigned __int64)(v77 - (_QWORD)v78) > 0xF )
            {
              v79 = a3;
              *v78 = _mm_load_si128((const __m128i *)&xmmword_23A9130);
              *(_QWORD *)(a3 + 32) += 16LL;
            }
            else
            {
              v79 = sub_227BF10(a3, " __attribute__((", 16);
            }
            v80 = sub_F5ED10((char *)&v135);
            v82 = *(void **)(v79 + 32);
            if ( v81 > *(_QWORD *)(v79 + 24) - (_QWORD)v82 )
            {
              sub_227BF10(v79, v80, v81);
            }
            else if ( v81 )
            {
              v128 = v81;
              memcpy(v82, v80, v81);
              *(_QWORD *)(v79 + 32) += v128;
            }
            v83 = v136;
            v84 = *(_BYTE **)(a3 + 32);
            v85 = *(_QWORD *)(a3 + 24);
            if ( v136 )
            {
              if ( (unsigned __int64)v84 >= v85 )
              {
                sub_227BA10(a3, 40);
              }
              else
              {
                *(_QWORD *)(a3 + 32) = v84 + 1;
                *v84 = 40;
              }
              sub_F07C00(v83, a3, 0, a1, 0, 0, "\n", 1);
              v86 = *(_BYTE **)(a3 + 32);
              if ( (unsigned __int64)v86 >= *(_QWORD *)(a3 + 24) )
              {
                sub_227BA10(a3, 41);
              }
              else
              {
                *(_QWORD *)(a3 + 32) = v86 + 1;
                *v86 = 41;
              }
              v84 = *(_BYTE **)(a3 + 32);
              v85 = *(_QWORD *)(a3 + 24);
            }
            if ( v85 - (unsigned __int64)v84 > 1 )
              break;
            ++v74;
            sub_227BF10(a3, "))", 2);
            if ( (_BYTE *)v74 == v120 )
            {
              v49 = *(_QWORD *)(a2 + 16);
              goto LABEL_104;
            }
          }
          ++v74;
          *(_WORD *)v84 = 10537;
          *(_QWORD *)(a3 + 32) += 2LL;
        }
        while ( (_BYTE *)v74 != v120 );
        v49 = *(_QWORD *)(a2 + 16);
      }
    }
  }
LABEL_104:
  if ( (v49 & 0x200000000LL) != 0 )
  {
    sub_995540(a3, " __attribute__((cfi_unchecked_callee))");
    v49 = *(_QWORD *)(a2 + 16);
  }
  if ( (v49 & 0x100000000LL) != 0 )
  {
    sub_995540(a3, " -> ");
    sub_F774E0(a1, *(_QWORD *)(a2 + 24), a3, 0, 0);
  }
  else
  {
    sub_F76ED0(a1, *(_QWORD *)(a2 + 24), a3);
  }
  a1[1].m128i_i8[4] = v129;
  return v129;
}
