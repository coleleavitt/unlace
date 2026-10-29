__int64 __fastcall sub_F50ED0(const __m128i *a1, __int64 a2, unsigned __int64 a3)
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
  __int64 v28; // rsi
  _WORD *v29; // rdx
  char *v30; // rax
  size_t v31; // rdx
  __int64 v32; // rcx
  size_t v33; // r15
  void *v34; // rdi
  _BYTE *v35; // rax
  char v36; // al
  unsigned __int64 v37; // rax
  __int16 v38; // ax
  __int16 v39; // r14
  int v40; // ebp
  unsigned int v41; // eax
  int v42; // ebp
  int v43; // r15d
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // al
  unsigned __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // rbp
  unsigned __int64 v50; // r9
  unsigned __int8 v51; // di
  char v52; // dl
  __int64 v53; // rcx
  char v54; // r15
  char v55; // si
  unsigned __int64 v56; // r8
  __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  __m128i si128; // xmm0
  __m128i v60; // xmm0
  __int64 v61; // rsi
  __int64 v62; // rdi
  char v63; // dl
  __int64 v64; // rcx
  unsigned __int64 v65; // r8
  char v66; // cl
  unsigned __int64 v67; // r9
  __int64 v68; // rsi
  unsigned __int64 v69; // rdi
  __int64 v70; // rdx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rbp
  char *v73; // rax
  char v74; // dl
  __int64 v75; // rax
  __m128i *v76; // rdx
  __int64 v77; // r15
  char *v78; // rax
  size_t v79; // rdx
  void *v80; // rdi
  char *v81; // r15
  _BYTE *v82; // rdx
  unsigned __int64 v83; // rax
  _BYTE *v84; // rax
  __int64 v86; // rbp
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rdi
  char v90; // dl
  __int64 v91; // rcx
  unsigned __int64 v92; // r8
  char v93; // cl
  __int64 v94; // rax
  unsigned __int64 v95; // rsi
  unsigned __int64 v96; // rax
  _BOOL8 v97; // r11
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  unsigned __int64 v104; // rcx
  __int64 v105; // r11
  unsigned __int64 v106; // r8
  __int64 v107; // r9
  unsigned __int64 v108; // r9
  unsigned __int64 v109; // r9
  __int64 v110; // r8
  unsigned __int64 v111; // r8
  unsigned __int8 v112; // [rsp+18h] [rbp-400h]
  unsigned __int8 v113; // [rsp+18h] [rbp-400h]
  __int64 v114; // [rsp+18h] [rbp-400h]
  _BYTE *v115; // [rsp+18h] [rbp-400h]
  __int64 v116; // [rsp+18h] [rbp-400h]
  char v117; // [rsp+20h] [rbp-3F8h]
  __int64 v118; // [rsp+20h] [rbp-3F8h]
  int v119; // [rsp+28h] [rbp-3F0h]
  unsigned int v120; // [rsp+28h] [rbp-3F0h]
  unsigned __int64 v121; // [rsp+28h] [rbp-3F0h]
  char v122; // [rsp+30h] [rbp-3E8h]
  size_t v123; // [rsp+30h] [rbp-3E8h]
  unsigned __int8 v124; // [rsp+3Fh] [rbp-3D9h]
  unsigned __int16 v125; // [rsp+46h] [rbp-3D2h] BYREF
  unsigned __int64 v126; // [rsp+48h] [rbp-3D0h] BYREF
  _QWORD v127[2]; // [rsp+50h] [rbp-3C8h] BYREF
  void *v128[2]; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 v129; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v130; // [rsp+80h] [rbp-398h] BYREF
  char *v131; // [rsp+88h] [rbp-390h]
  char v132; // [rsp+D9h] [rbp-33Fh]

  v6 = *(_QWORD *)(a3 + 24);
  v124 = a1[1].m128i_u8[4];
  v7 = *(_BYTE **)(a3 + 32);
  if ( !v124 )
  {
    if ( v6 <= (unsigned __int64)v7 )
    {
      sub_2257CD0(a3, 41);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v7 + 1;
      *v7 = 41;
    }
    v6 = *(_QWORD *)(a3 + 24);
    v124 = a1[1].m128i_u8[4];
    v7 = *(_BYTE **)(a3 + 32);
  }
  a1[1].m128i_i8[4] = 0;
  if ( v6 <= (unsigned __int64)v7 )
  {
    sub_2257CD0(a3, 40);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v7 + 1;
    *v7 = 40;
  }
  v8 = a1->m128i_i8[1];
  a1->m128i_i8[1] = v8 & 0xFE;
  v117 = v8 & 1;
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
          si128 = _mm_load_si128((const __m128i *)&xmmword_23850F0);
          qmemcpy(&v22[1], "s_consumed)) ", 13);
          *v22 = si128;
          *(_QWORD *)(a3 + 32) += 29LL;
        }
        else
        {
          v122 = v17 & 0x40;
          v119 = v18 - 5;
          v112 = v17 & 0xF;
          sub_22581D0(a3, "__attribute__((ns_consumed)) ", 29);
          v18 = v112;
          v21 = v119;
          v19 = v122;
        }
      }
      if ( v19 )
      {
        v23 = *(__m128i **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v23 > 0x19u )
        {
          v60 = _mm_load_si128((const __m128i *)&xmmword_23850F0);
          qmemcpy(&v23[1], "oescape)) ", 10);
          *v23 = v60;
          *(_QWORD *)(a3 + 32) += 26LL;
        }
        else
        {
          v113 = v18;
          v120 = v21;
          sub_22581D0(a3, "__attribute__((noescape)) ", 26);
          v18 = v113;
          v21 = v120;
        }
      }
      if ( v21 > 1 )
        break;
      v24 = sub_F4D200(v20);
      v26 = v25;
      if ( *(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 32) < v25 )
      {
        v27 = sub_22581D0(a3, v24, v25);
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
      sub_971800(v27, " ");
      if ( a1->m128i_i8[5] >= 0 )
        goto LABEL_25;
      v28 = *(_QWORD *)(a2 + 8 * i + 48);
      v94 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v94 + 16) - 43 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v94 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
        && (v116 = *(_QWORD *)(a2 + 8 * i + 48),
            v94 = sub_F3F310(*(_QWORD *)(v116 & 0xFFFFFFFFFFFFFFF0LL)),
            v28 = v116,
            v94) )
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(v94 + 32);
          if ( (*(_BYTE *)(v94 + 18) & 0x10) == 0 )
            break;
          v95 = v28 & 0xFFFFFFFFFFFFFFF0LL;
          v94 = *(_QWORD *)v95;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v95 + 16LL) - 43 > 1 )
            v94 = sub_F3F310(v94);
        }
      }
LABEL_26:
      sub_F537A0(a1, v28, a3, 0, 0);
      if ( v9 == i )
        goto LABEL_36;
      if ( (_DWORD)i != -1 )
      {
        v29 = *(_WORD **)(a3 + 32);
        if ( *(_QWORD *)(a3 + 24) - (_QWORD)v29 > 1u )
        {
          *v29 = 8236;
          *(_QWORD *)(a3 + 32) += 2LL;
        }
        else
        {
          sub_22581D0(a3, ", ", 2);
        }
      }
    }
    if ( v18 )
    {
      v114 = sub_971800(a3, "__attribute__((");
      v30 = sub_F4D200(v20);
      v32 = v114;
      v33 = v31;
      v34 = *(void **)(v114 + 32);
      if ( *(_QWORD *)(v114 + 24) - (_QWORD)v34 < v31 )
      {
        v32 = sub_22581D0(v114, v30, v31);
      }
      else if ( v31 )
      {
        memcpy(v34, v30, v31);
        v32 = v114;
        *(_QWORD *)(v114 + 32) += v33;
      }
      sub_971800(v32, ")) ");
    }
LABEL_25:
    v28 = *(_QWORD *)(a2 + 8 * i + 48);
    goto LABEL_26;
  }
LABEL_36:
  a1->m128i_i8[1] = v117 | a1->m128i_i8[1] & 0xFE;
  if ( *(char *)(a2 + 19) < 0 )
  {
    if ( *(_WORD *)(a2 + 22) )
      sub_971800(a3, ", ");
    sub_971800(a3, "...");
    v35 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v35 < *(_QWORD *)(a3 + 24) )
      goto LABEL_39;
LABEL_113:
    sub_2257CD0(a3, 41);
    goto LABEL_40;
  }
  if ( !*(_WORD *)(a2 + 22) && (a1->m128i_i8[3] & 0x20) != 0 )
    sub_971800(a3, "void");
  v35 = *(_BYTE **)(a3 + 32);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(a3 + 24) )
    goto LABEL_113;
LABEL_39:
  *(_QWORD *)(a3 + 32) = v35 + 1;
  *v35 = 41;
LABEL_40:
  v125 = *(_WORD *)(a2 + 20) >> 2;
  v36 = *(_BYTE *)(a2 + 19);
  if ( (v36 & 0x40) != 0 )
  {
    v37 = (a2 + ((v36 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v37 + 1) & 4) != 0 )
    {
      v38 = *(_WORD *)(v37 + 8);
      v39 = v38 & 0x1FF;
      v40 = v38 & 0x1FF;
      if ( (v38 & 2) != 0 )
        sub_971800(a3, " __arm_streaming_compatible");
      v41 = v40;
      v42 = (unsigned __int8)v40 >> 5;
      v43 = (v41 >> 2) & 7;
      if ( (v39 & 1) != 0 )
        sub_971800(a3, " __arm_streaming");
      if ( (v39 & 0x100) != 0 )
        sub_971800(a3, "__arm_agnostic(\"sme_za_state\")");
      switch ( v43 )
      {
        case 1:
          sub_971800(a3, " __arm_preserves(\"za\")");
          break;
        case 2:
          sub_971800(a3, " __arm_in(\"za\")");
          break;
        case 3:
          sub_971800(a3, " __arm_out(\"za\")");
          break;
        case 4:
          sub_971800(a3, " __arm_inout(\"za\")");
          break;
      }
      switch ( v42 )
      {
        case 1:
          sub_971800(a3, " __arm_preserves(\"zt0\")");
          break;
        case 2:
          sub_971800(a3, " __arm_in(\"zt0\")");
          break;
        case 3:
          sub_971800(a3, " __arm_out(\"zt0\")");
          break;
        case 4:
          sub_971800(a3, " __arm_inout(\"zt0\")");
          break;
      }
    }
  }
  sub_F4B360(a1[1].m128i_i8[5], &v125, a3);
  v44 = *(_QWORD *)(a2 + 16);
  if ( (v44 & 0x1000000) != 0 )
  {
    v61 = *(unsigned __int16 *)(a2 + 22);
    v62 = 8 * v61 + 48;
    v63 = *(_BYTE *)(a2 + 19);
    v64 = (v44 & 0x40000000) != 0;
    if ( (v63 & 0x40) != 0 )
      v64 += (*(_BYTE *)(((a2 + v62 + ((v63 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v65 = ((a2 + v62 + ((SBYTE3(v44) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v64;
    v66 = ((unsigned __int8)v63 >> 1) & 0xF;
    if ( v66 == 2 )
    {
      v65 += 8LL * (*(_WORD *)((a2 + ((v63 >> 5) & 4) + v62 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_157:
      v99 = v65;
      v100 = 0;
    }
    else
    {
      switch ( v66 )
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
          switch ( v66 )
          {
            case 6:
            case 7:
            case 8:
              v65 += 8LL;
              goto LABEL_155;
            case 9:
              goto LABEL_153;
            case 10:
              goto LABEL_149;
            default:
LABEL_155:
              switch ( v66 )
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
          v99 = v65 + 8;
          v100 = 8;
          break;
        case 10:
LABEL_149:
          v99 = v65 + 16;
          v100 = 16;
          break;
        default:
LABEL_201:
          BUG();
      }
    }
    v101 = v65 + v61 + v100;
    if ( (v44 & 0x20000000) != 0 )
      v99 = v101;
    v45 = *(_QWORD *)((v99 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 16) != 26
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_F3F310(a2)) )
    {
      goto LABEL_60;
    }
    v45 = *(_BYTE *)(a2 + 18) >> 5;
  }
  if ( v45 )
  {
    v86 = sub_971800(a3, " ");
    v87 = *(_QWORD *)(a2 + 16);
    if ( (v87 & 0x1000000) != 0 )
    {
      v88 = *(unsigned __int16 *)(a2 + 22);
      v89 = 8 * v88 + 48;
      v90 = *(_BYTE *)(a2 + 19);
      v91 = (v87 & 0x40000000) != 0;
      if ( (v90 & 0x40) != 0 )
        v91 += (*(_BYTE *)(((a2 + v89 + ((v90 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v92 = ((a2 + v89 + ((SBYTE3(v87) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v91;
      v93 = ((unsigned __int8)v90 >> 1) & 0xF;
      if ( v93 != 2 )
      {
        switch ( v93 )
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
            switch ( v93 )
            {
              case 6:
              case 7:
              case 8:
                v92 += 8LL;
                goto LABEL_162;
              case 9:
                goto LABEL_180;
              case 10:
                goto LABEL_179;
              default:
LABEL_162:
                switch ( v93 )
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
            v102 = v92 + 8;
            v103 = 8;
            goto LABEL_165;
          case 10:
LABEL_179:
            v102 = v92 + 16;
            v103 = 16;
            goto LABEL_165;
          default:
            goto LABEL_201;
        }
      }
      v92 += 8LL * (*(_WORD *)((a2 + ((v90 >> 5) & 4) + v89 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_164:
      v102 = v92;
      v103 = 0;
LABEL_165:
      v104 = v92 + v88 + v103;
      if ( (v87 & 0x20000000) != 0 )
        v102 = v104;
      v96 = *(_QWORD *)((v102 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else if ( *(_BYTE *)(a2 + 16) == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_F3F310(a2) )
    {
      v96 = *(_BYTE *)(a2 + 18) >> 5;
    }
    else
    {
      v96 = 0;
    }
    v126 = v96;
    sub_FC64E0(&v130);
    v127[1] = 0;
    BYTE1(v127[0]) = (BYTE1(v130) >> 2) & 2 | BYTE1(v127[0]) & 0xFD;
    BYTE2(v127[0]) = (BYTE3(v130) >> 2 << 7) | BYTE2(v127[0]) & 0x7F;
    BYTE3(v127[0]) = ((((BYTE1(v130) >> 4) ^ 1) & 1) << 6)
                   | (8 * v130) & 0x10
                   | (8 * ((v130 & 0x1000) != 0)) & 0x8F
                   | (4 * (v130 & 1)) & 0x8F
                   | (BYTE1(v130) >> 2) & 2
                   | ((v130 & 0x1008) != 0)
                   | BYTE3(v127[0]) & 0x80
                   | (32 * (((BYTE1(v130) >> 3) ^ 1) & 1)) & 0xBF;
    BYTE4(v127[0]) = (4 * ((v130 & 0x10000080) == 128)) | (BYTE3(v130) >> 2) & 2 | BYTE4(v127[0]) & 0xF9;
    BYTE5(v127[0]) = (v132 << 7) | BYTE5(v127[0]) & 0x7F;
    v127[0] = v127[0] & 0xFFFF80067F800200LL | 0x660800442002LL;
    sub_F4DC20(v128, &v126, (__int64)v127);
    sub_9748A0(&v130);
    sub_22581D0(v86, v128[0], v128[1]);
    if ( v128[0] != &v129 )
      operator delete(v128[0]);
  }
LABEL_60:
  v46 = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( v46 == 1 )
  {
    sub_971800(a3, " &");
  }
  else if ( v46 == 2 )
  {
    sub_971800(a3, " &&");
  }
  sub_F50B40(a2, a3, a1);
  v47 = *(_QWORD *)(a2 + 16);
  if ( (v47 & 0x40000000) != 0 )
  {
    v48 = *(unsigned __int16 *)(a2 + 22);
    v49 = 8 * v48 + 48;
    v50 = (a2 + v49 + ((SBYTE3(v47) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v51 = *(_BYTE *)(v50 + 1);
    if ( (v51 & 0xF0) != 0 )
    {
      v52 = *(_BYTE *)(a2 + 19);
      v53 = v51 >> 4;
      v54 = v52 & 0x40;
      v55 = ((unsigned __int8)v52 >> 1) & 0xF;
      if ( (v51 & 8) != 0 && v51 >> 4 )
      {
        v97 = (v47 & 0x40000000) != 0;
        if ( v54 )
          v98 = v50
              + 8 * (v97 + ((*(_BYTE *)(((a2 + v49 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0));
        else
          v98 = v50 + 8 * v97;
        if ( v55 != 2 )
        {
          switch ( v55 )
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
              switch ( v55 )
              {
                case 6:
                case 7:
                case 8:
                  v98 += 8LL;
                  goto LABEL_193;
                case 9:
                  goto LABEL_190;
                case 10:
                  goto LABEL_183;
                default:
LABEL_193:
                  switch ( v55 )
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
                      v105 = v51 >> 4;
                      v54 = v52 & 0x40;
                      v55 = ((unsigned __int8)v52 >> 1) & 0xF;
                      goto LABEL_191;
                    case 10:
                      v105 = v51 >> 4;
                      v54 = v52 & 0x40;
                      v55 = ((unsigned __int8)v52 >> 1) & 0xF;
                      goto LABEL_184;
                    default:
                      goto LABEL_201;
                  }
              }
            case 9:
LABEL_190:
              v105 = v51 >> 4;
LABEL_191:
              v106 = v98 + 8;
              v107 = 8;
              goto LABEL_185;
            case 10:
LABEL_183:
              v105 = v51 >> 4;
LABEL_184:
              v106 = v98 + 16;
              v107 = 16;
              goto LABEL_185;
            default:
              goto LABEL_201;
          }
        }
        v98 += 8LL * (*(_WORD *)((a2 + v49 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_195:
        v106 = v98;
        v105 = v51 >> 4;
        v54 = v52 & 0x40;
        v107 = 0;
        v55 = ((unsigned __int8)v52 >> 1) & 0xF;
LABEL_185:
        v108 = v98 + v48 + v107;
        if ( (v47 & 0x20000000) != 0 )
          v106 = v108;
        v109 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v110 = 8LL * (BYTE3(v47) & 1);
        v111 = (v47 & 0x40000000) != 0
             ? v109 + v110 + (*(_BYTE *)(((a2 + v49 + ((SBYTE3(v47) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4)
             : v109 + v110;
        v118 = v51 >> 4;
        v53 = v105;
        v56 = (v111 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v118 = 0;
        v56 = 0;
      }
      v57 = (v47 & 0x40000000) != 0;
      if ( v54 )
        v57 += (*(_BYTE *)(((a2 + v49 + ((v52 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v58 = ((a2 + v49 + ((SBYTE3(v47) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v57;
      if ( v55 != 2 )
      {
        switch ( v55 )
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
            switch ( v55 )
            {
              case 6:
              case 7:
              case 8:
                v58 += 8LL;
                goto LABEL_160;
              case 9:
                goto LABEL_178;
              case 10:
                goto LABEL_177;
              default:
LABEL_160:
                switch ( v55 )
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
            v67 = v58 + 8;
            v68 = 8;
            goto LABEL_84;
          case 10:
LABEL_177:
            v67 = v58 + 16;
            v68 = 16;
            goto LABEL_84;
          default:
            goto LABEL_201;
        }
      }
      v58 += 8LL * (*(_WORD *)((a2 + ((v52 >> 5) & 4) + v49 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_83:
      v67 = v58;
      v68 = 0;
LABEL_84:
      v69 = v48 + v68 + v58;
      if ( (v47 & 0x20000000) != 0 )
        v67 = v69;
      v70 = 8 * ((v47 >> 24) & 1);
      v71 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v53 )
      {
        v72 = v70 + v71;
        v115 = (_BYTE *)(v70 + v53 + v71);
        v121 = v56 - 8 * (v70 + v71);
        do
        {
          while ( 1 )
          {
            v73 = nullptr;
            if ( v118 )
              v73 = *(char **)(v121 + 8 * v72);
            v74 = *(_BYTE *)v72;
            v131 = v73;
            v75 = *(_QWORD *)(a3 + 24);
            LOBYTE(v130) = v74;
            v76 = *(__m128i **)(a3 + 32);
            if ( (unsigned __int64)(v75 - (_QWORD)v76) > 0xF )
            {
              v77 = a3;
              *v76 = _mm_load_si128((const __m128i *)&xmmword_2385100);
              *(_QWORD *)(a3 + 32) += 16LL;
            }
            else
            {
              v77 = sub_22581D0(a3, " __attribute__((", 16);
            }
            v78 = sub_F3AFD0((char *)&v130);
            v80 = *(void **)(v77 + 32);
            if ( v79 > *(_QWORD *)(v77 + 24) - (_QWORD)v80 )
            {
              sub_22581D0(v77, v78, v79);
            }
            else if ( v79 )
            {
              v123 = v79;
              memcpy(v80, v78, v79);
              *(_QWORD *)(v77 + 32) += v123;
            }
            v81 = v131;
            v82 = *(_BYTE **)(a3 + 32);
            v83 = *(_QWORD *)(a3 + 24);
            if ( v131 )
            {
              if ( (unsigned __int64)v82 >= v83 )
              {
                sub_2257CD0(a3, 40);
              }
              else
              {
                *(_QWORD *)(a3 + 32) = v82 + 1;
                *v82 = 40;
              }
              sub_EE3EC0(v81, a3, 0, a1, 0, 0, "\n", 1);
              v84 = *(_BYTE **)(a3 + 32);
              if ( (unsigned __int64)v84 >= *(_QWORD *)(a3 + 24) )
              {
                sub_2257CD0(a3, 41);
              }
              else
              {
                *(_QWORD *)(a3 + 32) = v84 + 1;
                *v84 = 41;
              }
              v82 = *(_BYTE **)(a3 + 32);
              v83 = *(_QWORD *)(a3 + 24);
            }
            if ( v83 - (unsigned __int64)v82 > 1 )
              break;
            ++v72;
            sub_22581D0(a3, "))", 2);
            if ( (_BYTE *)v72 == v115 )
            {
              v47 = *(_QWORD *)(a2 + 16);
              goto LABEL_104;
            }
          }
          ++v72;
          *(_WORD *)v82 = 10537;
          *(_QWORD *)(a3 + 32) += 2LL;
        }
        while ( (_BYTE *)v72 != v115 );
        v47 = *(_QWORD *)(a2 + 16);
      }
    }
  }
LABEL_104:
  if ( (v47 & 0x200000000LL) != 0 )
  {
    sub_971800(a3, " __attribute__((cfi_unchecked_callee))");
    v47 = *(_QWORD *)(a2 + 16);
  }
  if ( (v47 & 0x100000000LL) != 0 )
  {
    sub_971800(a3, " -> ");
    sub_F537A0(a1, *(_QWORD *)(a2 + 24), a3, 0, 0);
  }
  else
  {
    sub_F53190(a1, *(_QWORD *)(a2 + 24), a3);
  }
  a1[1].m128i_i8[4] = v124;
  return v124;
}

