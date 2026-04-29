const char *__fastcall sub_164D0(__int64 a1, const char *a2, __int64 a3, const char *a4, _QWORD *a5, double a6)
{
  const char *v6; // r15
  __int64 v9; // rbp
  const char *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // r14d
  int dword; // eax
  __int64 v16; // rdx
  int v17; // r15d
  __int64 v18; // rcx
  bool v19; // r9
  bool v20; // zf
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  unsigned int v23; // r14d
  int v24; // ebx
  int v25; // ebp
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  const char *result; // rax
  unsigned __int16 v29; // ax
  __int64 v30; // r10
  __int64 v31; // rbp
  unsigned __int8 v32; // bl
  int v33; // eax
  __int64 v34; // rsi
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r15
  int v40; // edx
  int v41; // eax
  __int64 v42; // r14
  unsigned __int8 v43; // r9
  __int64 v44; // rax
  int v45; // r10d
  int v46; // eax
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // ax
  int v49; // r15d
  unsigned int v50; // r8d
  const char *v51; // rbp
  int v52; // eax
  int v53; // eax
  int v54; // r15d
  __int16 v55; // ax
  bool v56; // r9
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rsi
  int v60; // edx
  __int64 v61; // rax
  unsigned __int16 v62; // ax
  bool v63; // r9
  __int16 v64; // ax
  __int16 v65; // ax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r8
  int v72; // edx
  unsigned __int16 v73; // ax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int16 v78; // ax
  __int16 v79; // ax
  __int64 fixup_value; // rax
  __int64 v81; // rax
  __int16 v82; // ax
  unsigned __int16 v83; // ax
  unsigned __int16 v84; // ax
  unsigned __int16 v85; // ax
  unsigned __int16 v86; // ax
  __int16 v87; // ax
  unsigned __int16 v88; // ax
  __int64 v89; // rdx
  __int16 v90; // ax
  __int64 v91; // rdx
  __int16 v92; // ax
  unsigned __int16 custom_fixup; // ax
  const char *v94; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v95; // [rsp+10h] [rbp-C8h]
  __int64 v96; // [rsp+10h] [rbp-C8h]
  int v97; // [rsp+10h] [rbp-C8h]
  __int64 v98; // [rsp+10h] [rbp-C8h]
  int v99; // [rsp+10h] [rbp-C8h]
  bool v100; // [rsp+10h] [rbp-C8h]
  bool v101; // [rsp+10h] [rbp-C8h]
  bool v102; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v103; // [rsp+18h] [rbp-C0h]
  __int64 v104; // [rsp+20h] [rbp-B8h]
  int v105; // [rsp+2Ch] [rbp-ACh]
  __int64 v106; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v107; // [rsp+38h] [rbp-A0h]
  __int64 v108; // [rsp+40h] [rbp-98h]
  unsigned int v110; // [rsp+50h] [rbp-88h]
  __int64 v111; // [rsp+58h] [rbp-80h]
  unsigned __int64 v112; // [rsp+60h] [rbp-78h]
  __int64 v113; // [rsp+68h] [rbp-70h]
  __int64 v114; // [rsp+70h] [rbp-68h]
  bool v115; // [rsp+79h] [rbp-5Fh]
  char v116; // [rsp+7Ah] [rbp-5Eh]
  bool v117; // [rsp+7Bh] [rbp-5Dh]
  bool v118; // [rsp+7Ch] [rbp-5Ch]
  unsigned __int64 v119; // [rsp+80h] [rbp-58h] BYREF
  __int64 v120; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v121[9]; // [rsp+90h] [rbp-48h] BYREF

  v6 = a2;
  v9 = a3;
  v10 = *(const char **)(a2 + 4);
  v11 = *(_QWORD *)(a1 + 16);
  v121[1] = __readfsqword(0x28u);
  v12 = *(_DWORD *)a2;
  v94 = v10;
  v13 = *(_QWORD *)(a2 + 20);
  v119 = 0;
  v104 = v13;
  v103 = *(_QWORD *)(a2 + 12);
  v116 = *(_BYTE *)(v11 + 508);
  if ( a4 && *(_BYTE *)(v11 + 508) == 2 )
  {
    a2 = a4;
    v26 = sub_3A400(v11, a4);
    a3 = v26;
    v95 = BYTE1(v26);
    v14 = HIWORD(v26);
    if ( BYTE1(v26) )
    {
      a2 = (const char *)&v119;
      if ( !(unsigned __int8)sub_16420(a1, &v119, HIBYTE(v26), (__int64)v94) )
      {
        a2 = v94;
        v14 = 0;
        sub_EAA0((__int64)"%a: Unsupported symbol value %d for a relocation\n", a6, (_DWORD)v94);
        v95 = 0;
      }
    }
  }
  else
  {
    v95 = 0;
    v14 = 0;
  }
  dword = get_dword(v94, a2, a3, a4, a5);
  v17 = *((_DWORD *)v6 + 7);
  v18 = 0;
  if ( v17 )
    v18 = *((_QWORD *)a4 + 2);
  v19 = 0;
  if ( v9 )
    v19 = *(_WORD *)(v9 + 92) == 768;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 522LL) == 249 )
  {
    if ( (unsigned int)(unsigned __int8)v12 - 9 <= 2 )
    {
      sub_424F0(a1, (_DWORD)v94, v103, 0, 4, *(_BYTE *)(a1 + 390) ^ 1, 0, 0);
      return nullptr;
    }
    return (_BYTE *)(&dword_0 + 2);
  }
  v106 = v18;
  v20 = v17 == 0;
  v108 = dword;
  v112 = v103;
  v21 = 4;
  v113 = v104;
  v111 = v104;
  v107 = 0;
  v110 = 0;
  v117 = v19;
  v105 = v17;
  v22 = v14;
  v23 = v12;
  v24 = 1;
  v114 = v9;
  v25 = dword;
  v118 = !v20;
  while ( 2 )
  {
    if ( !v95 && v24 == 2 || (_BYTE)v22 == 0 && v24 == 3 )
    {
LABEL_29:
      sub_42050(
        a1,
        (_DWORD)v94,
        v111 & *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & v110,
        v25,
        (unsigned __int16)v21,
        0,
        (*(unsigned __int8 *)(a1 + 390) ^ 1) << 31,
        0);
      return nullptr;
    }
    if ( v24 != 1 )
    {
      LOBYTE(v16) = v24 == 2 && (_BYTE)v22 != 0;
      v115 = v16;
      if ( (_BYTE)v16 || v24 == 2 )
      {
        v23 = v95;
        v112 = v119;
        v113 = v119;
        v108 = v107;
      }
      else
      {
        v23 = v22;
        v113 = 0;
        v112 = 0;
        v108 = v107;
      }
      goto LABEL_16;
    }
    LOBYTE(v16) = (_BYTE)v23 == 0x88 || (_BYTE)v23 == 7;
    v115 = v16;
    if ( !(_BYTE)v16 )
    {
      v115 = v95 != 0;
LABEL_16:
      if ( (unsigned __int8)v23 <= 0x69u )
      {
        if ( (unsigned __int8)v23 > 0x63u )
        {
          if ( sub_101F0(0xBC7u) )
            sub_BFC0((__int64)"%a: illegal MIPS16 relocation in microMIPS file", a6);
          goto LABEL_20;
        }
        if ( (unsigned __int8)v23 > 0x2Du )
          goto LABEL_20;
        if ( (unsigned __int8)v23 <= 0x15u )
        {
          if ( (unsigned __int8)v23 > 5u )
            goto LABEL_61;
          if ( (_BYTE)v23 == 4 )
          {
            v21 = *(unsigned __int16 *)(a1 + 354);
            v18 = v106;
            v56 = v117;
            if ( (_WORD)v21 == 0x8000 )
            {
              custom_fixup = find_custom_fixup("BRANCH26");
              v56 = v117;
              v18 = v106;
              v21 = custom_fixup;
              *(_WORD *)(a1 + 354) = custom_fixup;
            }
            if ( v105 )
            {
              if ( v115 )
                goto LABEL_285;
LABEL_150:
              if ( !v56 )
              {
LABEL_151:
                v57 = 0xFFFFFFF;
                v58 = 0x10000000;
                v59 = 0x8000000;
                goto LABEL_152;
              }
LABEL_155:
              sub_424F0(a1, (_DWORD)v94, v103, v18, v21, *(_BYTE *)(a1 + 390) ^ 1, 0, 0);
              return nullptr;
            }
            v102 = v56;
            fixup_value = get_fixup_value(v94, v21, v16, v18);
            v56 = v102;
            if ( !v115 )
            {
LABEL_240:
              v18 = fixup_value;
              goto LABEL_150;
            }
LABEL_285:
            v34 = 4;
LABEL_186:
            sub_35F50(*(_QWORD *)(a1 + 16), v34, v16, v18);
            sub_EAA0((__int64)"%a: Relocation %s cannot be a  part of the complex relocation\n", a6, v94);
            return nullptr;
          }
          if ( (_BYTE)v23 == 5 )
            goto LABEL_114;
        }
        goto LABEL_38;
      }
      if ( (unsigned __int8)v23 <= 0x93u )
      {
        if ( (unsigned __int8)v23 > 0x90u || (unsigned __int8)(v23 + 123) <= 9u )
        {
LABEL_54:
          if ( !sub_101F0(0xBC7u) )
            goto LABEL_55;
        }
LABEL_20:
        switch ( (char)v23 )
        {
          case 46:
            goto LABEL_156;
          case 100:
            v21 = *(unsigned __int16 *)(a1 + 356);
            v18 = v106;
            v56 = v117;
            if ( (_WORD)v21 == 0x8000 )
            {
              v84 = find_custom_fixup("MIPS16_B26");
              v56 = v117;
              v18 = v106;
              v21 = v84;
              *(_WORD *)(a1 + 356) = v84;
            }
            if ( v105 )
            {
              if ( !v115 )
                goto LABEL_150;
            }
            else
            {
              v100 = v56;
              fixup_value = get_fixup_value(v94, v21, v16, v18);
              v56 = v100;
              if ( !v115 )
                goto LABEL_240;
            }
            v34 = 100;
            goto LABEL_186;
          case 101:
          case 103:
            v21 = *(unsigned __int16 *)(a1 + 362);
            if ( (_WORD)v21 == 0x8000 )
            {
              v36 = find_custom_fixup("MIPS16_OFF16");
              v21 = v36;
              *(_WORD *)(a1 + 362) = v36;
            }
            goto LABEL_38;
          case 102:
            v18 = v106;
            v32 = v23;
            v49 = v105;
            v31 = v114;
            if ( v117 )
            {
              LOWORD(v21) = *(_WORD *)(a1 + 358);
              if ( (_WORD)v21 == 0x8000 )
              {
                v90 = find_custom_fixup("MIPS16_HA16");
                v18 = v106;
                *(_WORD *)(a1 + 358) = v90;
                LOWORD(v21) = v90;
              }
            }
            else
            {
              LOWORD(v21) = *(_WORD *)(a1 + 362);
              if ( (_WORD)v21 == 0x8000 )
              {
                v78 = find_custom_fixup("MIPS16_OFF16");
                v18 = v106;
                *(_WORD *)(a1 + 362) = v78;
                LOWORD(v21) = v78;
              }
            }
            goto LABEL_122;
          case 104:
            v21 = *(unsigned __int16 *)(a1 + 358);
            if ( (_WORD)v21 == 0x8000 )
            {
              v86 = find_custom_fixup("MIPS16_HA16");
              v21 = v86;
              *(_WORD *)(a1 + 358) = v86;
            }
            v30 = v106;
            if ( !v105 )
              v30 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
            if ( !v115 )
              goto LABEL_129;
            v18 = v112;
            v27 = v112 + v108;
LABEL_27:
            v16 = (__int16)v27;
            v107 = (__int64)(v27 - (__int16)v27) >> 16;
            goto LABEL_28;
          case 105:
            v21 = *(unsigned __int16 *)(a1 + 360);
            if ( (_WORD)v21 == 0x8000 )
            {
              v83 = find_custom_fixup("MIPS16_LO16");
              v21 = v83;
              *(_WORD *)(a1 + 360) = v83;
            }
            v30 = v106;
            if ( !v105 )
              v30 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
            if ( !v115 )
            {
LABEL_129:
              v50 = 0;
              if ( v114 )
              {
                if ( *(_QWORD *)(v114 + 8) )
                {
                  v51 = *(const char **)v114;
                  v98 = v30;
                  v52 = strcmp(*(const char **)v114, "__gnu_local_gp");
                  v30 = v98;
                  v50 = 1;
                  if ( v52 )
                  {
                    v53 = strcmp(v51, "_gp_disp");
                    v30 = v98;
                    v50 = 2 * (v53 == 0);
                  }
                }
              }
              sub_15C70(a1, v23, (unsigned __int64)v94, v103, v50, v118, v30, (__int64)a5);
              return nullptr;
            }
            LOWORD(v27) = v112 + v108;
LABEL_260:
            v107 = (__int16)v27;
            goto LABEL_28;
          case -123:
            v21 = *(unsigned __int16 *)(a1 + 364);
            v18 = v106;
            v63 = v117;
            if ( (_WORD)v21 == 0x8000 )
            {
              v85 = find_custom_fixup("MMIPS_B26");
              v63 = v117;
              v18 = v106;
              v21 = v85;
              *(_WORD *)(a1 + 364) = v85;
            }
            if ( v105 )
            {
              if ( !v115 )
                goto LABEL_162;
            }
            else
            {
              v101 = v63;
              v81 = get_fixup_value(v94, v21, v16, v18);
              v63 = v101;
              v18 = v81;
              if ( !v115 )
              {
LABEL_162:
                if ( v63 )
                  goto LABEL_155;
LABEL_163:
                v57 = 0x7FFFFFF;
                v58 = 0x8000000;
                v59 = 0x4000000;
LABEL_152:
                v60 = v18 & v57;
                v61 = v18 | -v58;
                if ( (v59 & v18) == 0 )
                  LODWORD(v61) = v60;
                LODWORD(v18) = v61;
                goto LABEL_155;
              }
            }
            v34 = 133;
            goto LABEL_186;
          case -122:
          case -54:
            goto LABEL_194;
          case -121:
          case -109:
          case -53:
            goto LABEL_36;
          case -120:
          case -119:
          case -114:
          case -111:
          case -110:
            v21 = *(unsigned __int16 *)(a1 + 370);
            if ( (_WORD)v21 == 0x8000 )
            {
              v35 = find_custom_fixup("MMIPS_OFF16");
              v21 = v35;
              *(_WORD *)(a1 + 370) = v35;
            }
            goto LABEL_38;
          case -118:
            v18 = v106;
            v32 = v23;
            v49 = v105;
            v31 = v114;
            if ( v117 )
            {
              LOWORD(v21) = *(_WORD *)(a1 + 366);
              if ( (_WORD)v21 == 0x8000 )
              {
                v65 = find_custom_fixup("MMIPS_HA16");
                v18 = v106;
                *(_WORD *)(a1 + 366) = v65;
                LOWORD(v21) = v65;
              }
            }
            else
            {
              LOWORD(v21) = *(_WORD *)(a1 + 370);
              if ( (_WORD)v21 == 0x8000 )
              {
                v79 = find_custom_fixup("MMIPS_OFF16");
                v18 = v106;
                *(_WORD *)(a1 + 370) = v79;
                LOWORD(v21) = v79;
              }
            }
LABEL_122:
            if ( !v49 )
              v18 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
LABEL_110:
            if ( v31 )
              goto LABEL_111;
            goto LABEL_68;
          case -117:
            LOWORD(v21) = *(_WORD *)(a1 + 376);
            v18 = v106;
            v32 = v23;
            v54 = v105;
            if ( (_WORD)v21 == 0x8000 )
            {
              v64 = find_custom_fixup("MMIPS_B7");
              v18 = v106;
              *(_WORD *)(a1 + 376) = v64;
              LOWORD(v21) = v64;
            }
            goto LABEL_142;
          case -116:
            LOWORD(v21) = *(_WORD *)(a1 + 374);
            v18 = v106;
            v32 = v23;
            v54 = v105;
            if ( (_WORD)v21 == 0x8000 )
            {
              v55 = find_custom_fixup("MMIPS_B10");
              v18 = v106;
              *(_WORD *)(a1 + 374) = v55;
              LOWORD(v21) = v55;
            }
            goto LABEL_142;
          case -115:
            LOWORD(v21) = *(_WORD *)(a1 + 372);
            v18 = v106;
            v32 = v23;
            v54 = v105;
            if ( (_WORD)v21 == 0x8000 )
            {
              v87 = find_custom_fixup("MMIPS_B16");
              v18 = v106;
              *(_WORD *)(a1 + 372) = v87;
              LOWORD(v21) = v87;
            }
LABEL_142:
            if ( !v54 )
              v18 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
LABEL_105:
            if ( v115 )
              goto LABEL_185;
            v46 = -1342177280;
            if ( *(_BYTE *)(a1 + 390) )
              v46 = 1879048192;
            sub_42050(a1, (_DWORD)v94, v103, 0, v18, (unsigned __int16)v21, (__int64)v94, v46, 0);
            return nullptr;
          case -56:
            goto LABEL_117;
          case -55:
            goto LABEL_114;
          default:
            goto LABEL_38;
        }
      }
      if ( (unsigned __int8)(v23 + 54) <= 1u )
        goto LABEL_54;
      if ( (unsigned __int8)v23 <= 0xCBu )
        goto LABEL_20;
      if ( !v105 )
        get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
      return (_BYTE *)(&dword_0 + 2);
    }
    v18 = v95;
    LOBYTE(v16) = v95 == 0x96;
    if ( !((unsigned __int8)v16 | (v95 == 24)) )
    {
      if ( v95 )
      {
LABEL_80:
        if ( (unsigned __int8)v23 > 0x69u )
        {
LABEL_81:
          v23 = -120;
          goto LABEL_54;
        }
      }
      else
      {
        v115 = 0;
        if ( (unsigned __int8)v23 > 0x69u )
          goto LABEL_81;
      }
      v23 = 7;
LABEL_61:
      v18 = v23;
      if ( ((1LL << v23) & 0x180980) != 0 )
      {
LABEL_156:
        v21 = *(unsigned __int16 *)(a1 + 352);
        if ( (_WORD)v21 == 0x8000 )
        {
          v62 = find_custom_fixup("MIPS_OFF16");
          v21 = v62;
          *(_WORD *)(a1 + 352) = v62;
        }
        goto LABEL_38;
      }
      if ( ((1LL << v23) & 0x200040) == 0 )
      {
        if ( (_BYTE)v23 != 9 )
          goto LABEL_38;
        v31 = v114;
        v18 = v106;
        v32 = 9;
        if ( v114 )
        {
          if ( *(_BYTE *)(v114 + 92) )
          {
            LOWORD(v21) = *(_WORD *)(a1 + 352);
            if ( (_WORD)v21 == 0x8000 )
            {
              v92 = find_custom_fixup("MIPS_OFF16");
              v18 = v106;
              *(_WORD *)(a1 + 352) = v92;
              LOWORD(v21) = v92;
            }
            if ( !v105 )
              goto LABEL_244;
          }
          else
          {
            LOWORD(v21) = *(_WORD *)(a1 + 348);
            if ( (_WORD)v21 == 0x8000 )
            {
              v82 = find_custom_fixup("MIPS_HA16");
              v18 = v106;
              *(_WORD *)(a1 + 348) = v82;
              LOWORD(v21) = v82;
              if ( !v105 )
                goto LABEL_244;
            }
            else
            {
              if ( v105 )
                goto LABEL_68;
LABEL_244:
              v18 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
            }
          }
LABEL_111:
          v30 = v18;
          if ( *(_BYTE *)(v31 + 92) )
          {
LABEL_44:
            if ( v115 )
            {
LABEL_185:
              v34 = v32;
              goto LABEL_186;
            }
            if ( (unsigned __int8)sub_43F30(v94, v30, 0)
              && (unsigned __int8)sub_54F40(
                                    a1,
                                    (unsigned int)&v120,
                                    (unsigned int)v121,
                                    (_DWORD)v94,
                                    v103,
                                    v31,
                                    (__int64)a5) )
            {
              v33 = -1610612736;
              if ( *(_BYTE *)(a1 + 390) )
                v33 = 1610612736;
              sub_42050(a1, (_DWORD)v94, v121[0], 0, -*(_DWORD *)(a1 + 400), (unsigned __int16)v21, v120, v33, 0);
              if ( v32 == 46 )
LABEL_50:
                sub_40E20(a1, v94, 3);
            }
            return nullptr;
          }
LABEL_68:
          v34 = v32;
LABEL_69:
          if ( !v115 )
          {
            sub_15C70(a1, v34, (unsigned __int64)v94, v103, 0, v118, v18, (__int64)a5);
            return nullptr;
          }
          goto LABEL_186;
        }
        v88 = *(_WORD *)(a1 + 348);
        if ( v88 == 0x8000 )
        {
          v88 = find_custom_fixup("MIPS_HA16");
          v18 = v106;
          *(_WORD *)(a1 + 348) = v88;
          if ( v105 )
            goto LABEL_68;
        }
        else
        {
          v34 = 9;
          if ( v105 )
            goto LABEL_69;
        }
        v18 = get_fixup_value(v94, v88, v16, v18);
        goto LABEL_68;
      }
LABEL_117:
      v21 = *(unsigned __int16 *)(a1 + 350);
      if ( (_WORD)v21 == 0x8000 )
      {
        v48 = find_custom_fixup("MIPS_LO16");
        v21 = v48;
        *(_WORD *)(a1 + 350) = v48;
      }
      goto LABEL_38;
    }
    LOBYTE(v16) = (_BYTE)v22 == 0x86;
    if ( !((unsigned __int8)v16 | ((_BYTE)v22 == 5)) )
    {
      if ( (_BYTE)v22 != 6 )
      {
        if ( (_BYTE)v22 != 0x87 )
          goto LABEL_80;
        v115 = 0;
        if ( !sub_101F0(0xBC7u) )
        {
          v95 = 0;
          v22 = 0;
          v23 = -53;
LABEL_55:
          sub_BFC0((__int64)"%a: illegal miscroMIPS relocation in MIPS16 file", a6);
          goto LABEL_20;
        }
        v95 = 0;
        v23 = -53;
        v22 = 0;
LABEL_36:
        v21 = *(unsigned __int16 *)(a1 + 368);
        if ( (_WORD)v21 == 0x8000 )
        {
          v29 = find_custom_fixup("MMIPS_LO16");
          v21 = v29;
          *(_WORD *)(a1 + 368) = v29;
        }
        goto LABEL_38;
      }
      v115 = 0;
      v23 = -56;
      v22 = 0;
      v95 = 0;
      goto LABEL_117;
    }
    if ( (_BYTE)v22 == 5 )
    {
      v115 = 0;
      v23 = -55;
      v22 = 0;
      v95 = 0;
LABEL_114:
      v21 = *(unsigned __int16 *)(a1 + 348);
      if ( (_WORD)v21 == 0x8000 )
      {
        v47 = find_custom_fixup("MIPS_HA16");
        v21 = v47;
        *(_WORD *)(a1 + 348) = v47;
      }
      goto LABEL_38;
    }
    v115 = 0;
    if ( !sub_101F0(0xBC7u) )
    {
      v95 = 0;
      v22 = 0;
      v23 = -54;
      goto LABEL_55;
    }
    v95 = 0;
    v23 = -54;
    v22 = 0;
LABEL_194:
    v21 = *(unsigned __int16 *)(a1 + 366);
    if ( (_WORD)v21 == 0x8000 )
    {
      v73 = find_custom_fixup("MMIPS_HA16");
      v21 = v73;
      *(_WORD *)(a1 + 366) = v73;
    }
LABEL_38:
    v30 = v106;
    if ( !v105 )
      v30 = get_fixup_value(v94, (unsigned __int16)v21, v16, v18);
    switch ( (char)v23 )
    {
      case 0:
        return &byte_4;
      case 1:
      case 16:
      case 17:
      case 22:
      case 23:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
        return (_BYTE *)(&dword_0 + 3);
      case 2:
        v18 = v113;
        v107 = v113 + v108;
        if ( !v115 )
        {
          v21 = 4;
          v25 = 0;
          v110 = v113 + v108;
          v111 = v113 + v108;
        }
        goto LABEL_28;
      case 3:
        if ( !v114 )
          return &byte_5;
        if ( v116 != 2 || !v115 )
        {
          v77 = v108;
          v18 = v112;
          if ( v105 )
            v77 = v106;
          v108 = v77;
          if ( v112 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            goto LABEL_234;
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL) )
            goto LABEL_216;
          if ( *(_BYTE *)(a1 + 442) )
          {
            if ( a5 )
              goto LABEL_232;
          }
          else if ( a5 )
          {
            sub_4A750(a5 + 2, a5[1], 0);
            *(_BYTE *)(a1 + 442) = 1;
LABEL_232:
            if ( (unsigned __int64)v94 >= a5[2] && (unsigned __int64)v94 < a5[3] )
            {
LABEL_234:
              v18 = v112;
              v110 = v112 + v108;
              v107 = v112 + v108;
              v111 = v103;
              goto LABEL_217;
            }
          }
LABEL_216:
          v25 = 0;
          v111 = v108;
          v110 = v108;
          v107 = v108;
LABEL_217:
          v21 = 4;
          goto LABEL_28;
        }
        v107 = v112 + get_qword(v94);
        goto LABEL_28;
      case 5:
      case 6:
      case 104:
      case 105:
      case -122:
      case -121:
        if ( !v115 )
          goto LABEL_129;
        v27 = v112 + v108;
        if ( (_BYTE)v23 == 5 || (_BYTE)v23 == 0x86 )
          goto LABEL_27;
        goto LABEL_260;
      case 7:
      case 101:
      case -120:
        v107 = v30;
        v44 = sub_15AF0((_QWORD *)a1, (__int64)a5);
        v45 = v107;
        if ( v115 )
        {
          if ( v44 != -1 )
          {
            if ( !v117 || (v16 = *(_QWORD *)(a1 + 408), v16 == -1) )
            {
              v107 = v103 + v107 - v44;
            }
            else
            {
              v18 = v103;
              v16 = v107 + v103 + v16 - v44;
              v107 = v16;
            }
          }
LABEL_28:
          if ( ++v24 == 4 )
            goto LABEL_29;
          continue;
        }
        if ( v44 == -1 )
        {
          sub_EAA0((__int64)"%a: No GP for the GPREL relocation\n", a6);
          return nullptr;
        }
        v69 = *(_QWORD *)(a1 + 408);
        if ( v69 == -1 )
        {
          v89 = *(_QWORD *)(a1 + 400);
          v70 = v44 - v89;
          v71 = -v89;
          if ( v117 )
LABEL_263:
            LODWORD(v103) = v45 + v103;
          else
LABEL_238:
            LODWORD(v71) = v107 + v71;
        }
        else
        {
          v70 = v44 - v69;
          v71 = -v69;
          if ( !v117 )
            goto LABEL_238;
LABEL_180:
          LODWORD(v103) = v103 + v69 + v45;
        }
        v72 = -1610612736;
        if ( *(_BYTE *)(a1 + 390) )
          v72 = 1610612736;
        sub_42050(a1, (_DWORD)v94, v103, 0, v71, (unsigned __int16)v21, v70, v72, 0);
        return nullptr;
      case 8:
      case -119:
        v32 = v23;
        if ( !v117 )
        {
          sub_EAA0((__int64)"%a: Illegal LITERAL relocation for an external symbol\n", a6);
          return nullptr;
        }
        if ( v115 )
          goto LABEL_185;
        v99 = v30;
        v67 = sub_15AF0((_QWORD *)a1, (__int64)a5);
        v45 = v99;
        v68 = v67;
        if ( v67 == -1 )
        {
          sub_EAA0((__int64)"%a: No GP for the LITERAL relocation\n", a6);
          return nullptr;
        }
        v69 = *(_QWORD *)(a1 + 408);
        v70 = v67 - v69;
        v71 = -v69;
        if ( v69 != -1 )
          goto LABEL_180;
        v91 = *(_QWORD *)(a1 + 400);
        v70 = v68 - v91;
        v71 = -v91;
        goto LABEL_263;
      case 9:
      case 102:
      case -118:
        v31 = v114;
        v18 = v30;
        v32 = 9;
        goto LABEL_110;
      case 10:
        v16 = (__int16)v108;
        v107 = ((__int16)v108 + v113 - (__int64)v94) >> 2;
        if ( !v115 )
        {
          if ( (unsigned __int64)((((__int16)v108 + v113 - (__int64)v94) >> 2) + 0x8000) > 0xFFFF )
            sub_15250((__int64)"Overflow in MIPS_PC16 relocation");
          v110 = (unsigned __int16)v107 | v25 & 0xFFFF0000;
          v25 = 0;
        }
        goto LABEL_28;
      case 11:
      case 19:
      case 46:
      case 103:
      case -114:
      case -111:
        LODWORD(v31) = v114;
        v32 = v23;
        result = &byte_5;
        if ( v114 )
          goto LABEL_44;
        return result;
      case 12:
        v75 = sub_15AF0((_QWORD *)a1, (__int64)a5);
        v107 = v108;
        if ( v75 != -1 )
        {
          v16 = *(_QWORD *)(a1 + 408);
          if ( v16 != -1 )
          {
            v18 = v112;
            v16 = v108 + v112 + v16 - v75;
            v107 = v16;
          }
        }
        if ( !v115 )
        {
          v76 = v25;
          v21 = 4;
          v25 = 0;
          v111 = v76;
          v110 = v107;
        }
        goto LABEL_28;
      case 18:
        v74 = v113 + v108;
        v107 = v113 + v108;
        if ( v115 )
          goto LABEL_28;
        goto LABEL_197;
      case 20:
      case 21:
      case -110:
      case -109:
        v32 = v23;
        result = &byte_5;
        if ( !v114 )
          return result;
        if ( v115 )
          goto LABEL_185;
        v97 = v30;
        v42 = v103 + v30 + 0x8000;
        LOWORD(v42) = 0;
        if ( (unsigned __int8)sub_54F40(
                                a1,
                                (unsigned int)&v120,
                                (unsigned int)v121,
                                (_DWORD)v94,
                                v42,
                                v114,
                                (__int64)a5) )
        {
          v43 = *(_BYTE *)(a1 + 390);
          if ( v32 == 20 || v32 == 0x92 )
            sub_42050(
              a1,
              (_DWORD)v94,
              v121[0],
              0,
              -*(_DWORD *)(a1 + 400),
              (unsigned __int16)v21,
              v120,
              v43 == 0 ? -1610612736 : 1610612736,
              0);
          else
            sub_424F0(a1, (_DWORD)v94, v103, v97, (unsigned __int16)v21, v43 ^ 1, v42, 0);
        }
        return nullptr;
      case 24:
        v74 = v112 - v108;
        v107 = v112 - v108;
        if ( v115 )
          goto LABEL_28;
LABEL_197:
        v110 = v74;
        v21 = 12;
        v25 = 0;
        v111 = v74;
        goto LABEL_28;
      case 37:
      case -100:
        return nullptr;
      case 38:
      case 40:
        v32 = v23;
        if ( v115 )
          goto LABEL_185;
        goto LABEL_50;
      case 47:
      case 48:
        if ( v115 )
        {
          v34 = (unsigned __int8)v23;
          goto LABEL_186;
        }
        if ( !v114 )
          return &byte_5;
        if ( !*(_WORD *)(v114 + 54) && v111 )
          goto LABEL_175;
        v66 = *(_QWORD *)(a1 + 8);
        LODWORD(v121[0]) = v25;
        v111 = sub_2E100(v66, v121);
        if ( v111 == -1 )
          return "Invalid TLS relocation";
        v25 = v121[0];
LABEL_175:
        sub_40E20(a1, v94, 3);
        v110 = v111;
        goto LABEL_28;
      case 100:
      case -123:
        v32 = v23;
        if ( v115 )
          goto LABEL_185;
        v18 = v30;
        if ( v117 )
          goto LABEL_155;
        if ( (_BYTE)v23 != 0x85 )
          goto LABEL_151;
        goto LABEL_163;
      case 126:
        v34 = 126;
        if ( v115 )
          goto LABEL_186;
        sub_40E20(a1, v94, 2);
        return nullptr;
      case 127:
        if ( v115 )
        {
          v34 = 127;
          goto LABEL_186;
        }
        v25 = 0;
        v110 = v104;
        goto LABEL_28;
      case -117:
      case -116:
      case -115:
        v32 = v23;
        v18 = v30;
        goto LABEL_105;
      case -56:
      case -55:
      case -54:
      case -53:
        v96 = v30;
        v37 = sub_15AF0((_QWORD *)a1, (__int64)a5);
        if ( v37 == -1 )
        {
          sub_EAA0((__int64)"%a: No GP for the complex GPDISP relocation\n", a6);
        }
        else
        {
          v38 = *(_QWORD *)(a1 + 400);
          v39 = v96 + v103;
          v40 = v37 - v38;
          if ( v114 && (*(_BYTE *)(v114 + 52) & 0xF) == 2 && *(_BYTE *)(v114 + 53) == 0x80 )
            ++v39;
          v41 = -1610612736;
          if ( *(_BYTE *)(a1 + 390) )
            v41 = 1610612736;
          sub_42050(a1, (_DWORD)v94, v40, 0, v38, (unsigned __int16)v21, v39, v41, 0);
        }
        return nullptr;
      default:
        return (_BYTE *)(&dword_0 + 2);
    }
  }
}
