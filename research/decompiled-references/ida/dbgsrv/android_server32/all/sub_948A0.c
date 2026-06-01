/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_948A0
// Address: 0x000948A0

//----- (000948A0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_948A0(int a1)
{
  __int64 v2; // r0
  unsigned __int8 *v3; // r2
  _DWORD *v4; // r10
  int v5; // r5
  _DWORD *v6; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r2
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r6
  int v15; // r1
  int v16; // r1
  unsigned __int8 *v17; // r0
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r6
  const char *v21; // r2
  char *v22; // r3
  unsigned __int8 *v23; // r0
  unsigned __int8 *v24; // r4
  unsigned __int8 *v25; // r0
  unsigned __int8 *v26; // r6
  unsigned __int8 *v27; // r0
  unsigned __int8 *v28; // r8
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  unsigned __int8 *v33; // r0
  int v34; // r3
  int v35; // r1
  unsigned __int8 *v36; // r0
  unsigned __int8 *v37; // r0
  int v38; // r2
  unsigned __int8 *v39; // r0
  unsigned __int8 *v40; // r0
  int v41; // r1
  int v42; // r1
  char v43; // r10
  __int64 v44; // r0
  char v45; // r8
  bool v46; // zf
  int v47; // r6
  int v48; // r5
  const char *v49; // r0
  const char *v50; // r8
  int v51; // r3
  int v52; // r2
  int v53; // r4
  __int64 v54; // r0
  unsigned __int8 *v55; // r0
  unsigned __int8 *v56; // r6
  int v57; // r8
  __int64 v58; // r0
  __int64 v59; // r0
  const char *v60; // r1
  int v61; // r1
  int v62; // r2
  _DWORD *v63; // r3
  char v64; // r4
  unsigned __int8 *v65; // r8
  _BYTE *v66; // r0
  _BYTE *v67; // r1
  int v68; // r3
  int v69; // r2
  _BYTE *v70; // r1
  int v71; // r6
  __int64 v72; // r0
  unsigned __int8 *v73; // r0
  unsigned __int8 *v74; // r6
  int v75; // r8
  __int64 v76; // r0
  __int64 v77; // r0
  unsigned __int8 *v78; // r0
  unsigned __int8 *v79; // r4
  int *v80; // r0
  const char *v81; // r2
  int v82; // r2
  int v83; // r2
  unsigned __int8 *v84; // r0
  unsigned __int8 *v85; // r4
  const char *v86; // r2
  char *v87; // r6
  int v88; // r4
  __int64 v89; // r0
  __int64 v90; // r0
  _DWORD *v91; // r0
  __int64 v92; // r2
  int v93; // r1
  unsigned __int8 *v94; // r0
  unsigned __int8 *v95; // r0
  int *v96; // r3
  int v97; // r2
  int v98; // r2
  int v99; // r4
  __int64 v100; // r0
  int v101; // r0
  unsigned __int8 *v102; // r0
  const char *v103; // r2
  unsigned __int8 *v104; // r0
  unsigned __int8 *v105; // r4
  unsigned __int8 *v106; // r0
  unsigned __int8 *v107; // r6
  unsigned __int8 *v108; // r0
  unsigned __int8 *v109; // r0
  int v111; // r1
  int v112; // r2
  _DWORD *v113; // r3
  unsigned __int8 *v114; // r0
  int v115; // r6
  __int64 v116; // r0
  __int64 v117; // r0
  _DWORD *v118; // r6
  __int64 v119; // r2
  __int64 v120; // r2
  unsigned __int8 *v121; // r0
  unsigned __int8 *v122; // r4
  unsigned int v123; // r6
  _DWORD *v124; // r0
  int v125; // r1
  __int64 v126; // r2
  const char *v127; // r0
  unsigned __int8 *v128; // r0
  bool v129; // zf
  unsigned __int8 *v130; // r4
  unsigned __int8 *v131; // r0
  unsigned __int8 *v132; // r0
  __int64 v133; // r0
  char v134; // r4
  _DWORD *v135; // r0
  unsigned __int8 *v136; // r0
  unsigned __int8 *v137; // r6
  char v138; // r5
  const char *v139; // r0
  const char *v140; // r0
  const char *v141; // r0
  const char *v142; // [sp+10h] [bp-38h]
  int v143; // [sp+10h] [bp-38h]
  char v144; // [sp+17h] [bp-31h] BYREF
  __int64 v145; // [sp+18h] [bp-30h] BYREF
  __int64 v146; // [sp+20h] [bp-28h] BYREF

  v144 = sub_924C8((__int64 *)a1, "gs", (unsigned __int8 *)"");
  v2 = *(_QWORD *)a1;
  v3 = (unsigned __int8 *)(HIDWORD(v2) - v2);
  if ( (unsigned int)(HIDWORD(v2) - v2) < 2 )
    return nullptr;
  v5 = *(unsigned __int8 *)v2;
  v4 = nullptr;
  v6 = (_DWORD *)(v5 - 76);
  switch ( *(_BYTE *)v2 )
  {
    case 'L':
      return sub_95B00((unsigned __int8 **)a1, SHIDWORD(v2), (int)v3, v6);
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'b':
    case 'h':
    case 'j':
    case 'k':
      return (unsigned __int8 *)v4;
    case 'T':
      return (unsigned __int8 *)sub_940CC(a1);
    case 'a':
      v29 = *(unsigned __int8 *)(v2 + 1);
      switch ( v29 )
      {
        case 'N':
          HIDWORD(v2) = "&=";
          goto LABEL_252;
        case 'S':
          HIDWORD(v2) = "=";
          goto LABEL_240;
        case 'z':
          *(_DWORD *)a1 = v2 + 2;
          v94 = sub_948A0(a1);
          break;
        case 'd':
          HIDWORD(v2) = "&";
          goto LABEL_249;
        case 'n':
          HIDWORD(v2) = "&";
          goto LABEL_240;
        case 't':
          *(_DWORD *)a1 = v2 + 2;
          v94 = sub_92B28((__int64 *)a1, 116, (int)v3, v6);
          break;
        case 'a':
          HIDWORD(v2) = "&&";
          goto LABEL_252;
        default:
          return nullptr;
      }
      LODWORD(v146) = v94;
      if ( !v94 )
        return nullptr;
      return (unsigned __int8 *)sub_95AD0(a1, (int)"alignof (", (int *)&v146);
    case 'c':
      v16 = *(unsigned __int8 *)(v2 + 1);
      if ( v16 != 118 )
      {
        switch ( v16 )
        {
          case 'l':
            *(_DWORD *)a1 = v2 + 2;
            v55 = sub_948A0(a1);
            if ( !v55 )
              return nullptr;
            v56 = v55;
            v57 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
            while ( 1 )
            {
              v59 = *(_QWORD *)a1;
              if ( (_DWORD)v59 != HIDWORD(v59) && *(_BYTE *)v59 == 69 )
                break;
              LODWORD(v146) = sub_948A0(a1);
              if ( !(_DWORD)v146 )
                return nullptr;
              LODWORD(v58) = a1 + 8;
              HIDWORD(v58) = &v146;
              sub_938C4(v58);
            }
            *(_DWORD *)a1 = v59 + 1;
            sub_9392E(&v146, a1, v57);
            v4 = sub_93AC6(a1 + 368, 20);
            v120 = v146;
            *v4 = &off_DBF70;
            v4[1] = 16843050;
            v4[2] = v56;
            *(_QWORD *)(v4 + 3) = v120;
            return (unsigned __int8 *)v4;
          case 'm':
            HIDWORD(v2) = ",";
            goto LABEL_240;
          case 'o':
            HIDWORD(v2) = "~";
            goto LABEL_249;
          case 'c':
            *(_DWORD *)a1 = v2 + 2;
            v17 = sub_92B28((__int64 *)a1, 99, (int)v3, v6);
            if ( v17 )
            {
              v18 = v17;
              v19 = sub_948A0(a1);
              if ( v19 )
              {
                v20 = v19;
                v4 = sub_93AC6(a1 + 368, 24);
                v21 = "const_cast";
                v22 = "";
                goto LABEL_247;
              }
            }
            break;
        }
        return nullptr;
      }
      v4 = nullptr;
      if ( !sub_924C8((__int64 *)a1, "cv", (unsigned __int8 *)"") )
        return (unsigned __int8 *)v4;
      v64 = *(_BYTE *)(a1 + 360);
      *(_BYTE *)(a1 + 360) = 0;
      v65 = sub_92B28((__int64 *)a1, v61, v62, v63);
      *(_BYTE *)(a1 + 360) = v64;
      if ( !v65 )
        return nullptr;
      v66 = *(_BYTE **)(a1 + 4);
      v67 = *(_BYTE **)a1;
      if ( *(_BYTE **)a1 == v66 || *v67 != 95 )
      {
        v121 = sub_948A0(a1);
        if ( !v121 )
          return nullptr;
        v122 = v121;
        v123 = (unsigned int)sub_93AC6(a1 + 368, 4);
        *(_DWORD *)v123 = v122;
        v124 = sub_93AC6(a1 + 368, 20);
        v125 = (int)v65;
        v126 = v123 | 0x100000000LL;
      }
      else
      {
        v68 = *(_DWORD *)(a1 + 12);
        v69 = *(_DWORD *)(a1 + 8);
        v70 = v67 + 1;
        *(_DWORD *)a1 = v70;
        v71 = (v68 - v69) >> 2;
        while ( v70 == v66 || *v70 != 69 )
        {
          LODWORD(v146) = sub_948A0(a1);
          if ( !(_DWORD)v146 )
            return nullptr;
          LODWORD(v72) = a1 + 8;
          HIDWORD(v72) = &v146;
          sub_938C4(v72);
          v66 = *(_BYTE **)(a1 + 4);
          v70 = *(_BYTE **)a1;
        }
        *(_DWORD *)a1 = v70 + 1;
        sub_9392E(&v146, a1, v71);
        v124 = sub_93AC6(a1 + 368, 20);
        v126 = v146;
        v125 = (int)v65;
      }
      v4 = v124;
      sub_96D58((int)v124, v125, v126, SHIDWORD(v126));
      return (unsigned __int8 *)v4;
    case 'd':
      v31 = *(unsigned __int8 *)(v2 + 1);
      v4 = nullptr;
      switch ( *(_BYTE *)(v2 + 1) )
      {
        case 'l':
          *(_DWORD *)a1 = v2 + 2;
          v4 = nullptr;
          LODWORD(v146) = sub_948A0(a1);
          if ( !(_DWORD)v146 )
            return (unsigned __int8 *)v4;
          LOBYTE(v145) = 0;
          return (unsigned __int8 *)sub_960B0(a1, (int *)&v146, &v144, (char *)&v145);
        case 'm':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 'u':
          return (unsigned __int8 *)v4;
        case 'n':
          return (unsigned __int8 *)sub_960EC((__int64 *)a1);
        case 's':
          *(_DWORD *)a1 = v2 + 2;
          LODWORD(v146) = sub_948A0(a1);
          if ( !(_DWORD)v146 )
            return nullptr;
          LODWORD(v145) = sub_948A0(a1);
          if ( !(_DWORD)v145 )
            return nullptr;
          v81 = ".*";
          return (unsigned __int8 *)sub_96280(a1, (int *)&v146, (int)v81, (int *)&v145);
        case 't':
          *(_DWORD *)a1 = v2 + 2;
          v104 = sub_948A0(a1);
          if ( !v104 )
            return nullptr;
          v105 = v104;
          v106 = sub_948A0(a1);
          if ( !v106 )
            return nullptr;
          v107 = v106;
          v4 = sub_93AC6(a1 + 368, 24);
          *v4 = &off_DC110;
          v4[1] = 16843050;
          v4[2] = v105;
          v4[3] = ".";
          v4[4] = "";
          v4[5] = v107;
          return (unsigned __int8 *)v4;
        case 'v':
          HIDWORD(v2) = "/";
          goto LABEL_240;
        default:
          switch ( v31 )
          {
            case 'V':
              HIDWORD(v2) = "/=";
              goto LABEL_252;
            case 'e':
              HIDWORD(v2) = "*";
              goto LABEL_249;
            case 'c':
              *(_DWORD *)a1 = v2 + 2;
              v108 = sub_92B28((__int64 *)a1, 99, -9, v6);
              if ( v108 )
              {
                v18 = v108;
                v109 = sub_948A0(a1);
                if ( v109 )
                {
                  v20 = v109;
                  v4 = sub_93AC6(a1 + 368, 24);
                  v21 = "dynamic_cast";
                  v22 = "";
                  goto LABEL_247;
                }
              }
              break;
            case 'a':
              *(_DWORD *)a1 = v2 + 2;
              LODWORD(v146) = sub_948A0(a1);
              if ( (_DWORD)v146 )
              {
                LOBYTE(v145) = 1;
                return (unsigned __int8 *)sub_960B0(a1, (int *)&v146, &v144, (char *)&v145);
              }
              break;
            default:
              return (unsigned __int8 *)v4;
          }
          break;
      }
      return nullptr;
    case 'e':
      v15 = *(unsigned __int8 *)(v2 + 1);
      if ( v15 == 79 )
      {
        HIDWORD(v2) = "^=";
        goto LABEL_252;
      }
      if ( v15 == 113 )
      {
        HIDWORD(v2) = "==";
        goto LABEL_252;
      }
      if ( v15 != 111 )
        return nullptr;
      HIDWORD(v2) = "^";
      goto LABEL_240;
    case 'f':
      v34 = *(unsigned __int8 *)(v2 + 1);
      if ( v34 == 112 )
        return (unsigned __int8 *)sub_95F74((__int64 *)a1);
      if ( (unsigned int)v3 >= 3 && v34 == 76 )
      {
        v3 = (unsigned __int8 *)(*(unsigned __int8 *)(v2 + 2) - 48);
        if ( (unsigned int)v3 <= 9 )
          return (unsigned __int8 *)sub_95F74((__int64 *)a1);
      }
      v46 = (_DWORD)v2 == HIDWORD(v2);
      if ( (_DWORD)v2 != HIDWORD(v2) )
      {
        v3 = (unsigned __int8 *)(v2 + 1);
        *(_DWORD *)a1 = v2 + 1;
        v46 = HIDWORD(v2) == (_DWORD)v2 + 1;
      }
      if ( v46 )
        return nullptr;
      v47 = *v3;
      v48 = 1;
      switch ( v47 )
      {
        case 'L':
          goto LABEL_108;
        case 'r':
          goto LABEL_107;
        case 'l':
          goto LABEL_108;
      }
      if ( v47 != 82 )
        return nullptr;
LABEL_107:
      v48 = 0;
LABEL_108:
      *(_DWORD *)a1 = v2 + 2;
      if ( sub_924C8((__int64 *)a1, "aa", (unsigned __int8 *)"") )
      {
        v49 = "&&";
LABEL_110:
        v142 = v49;
        v50 = v49 + 2;
        goto LABEL_273;
      }
      if ( sub_924C8((__int64 *)a1, "an", (unsigned __int8 *)"") )
      {
        v127 = "&";
LABEL_272:
        v142 = v127;
        v50 = v127 + 1;
        goto LABEL_273;
      }
      if ( sub_924C8((__int64 *)a1, "aN", (unsigned __int8 *)"") )
      {
        v49 = "&=";
        goto LABEL_110;
      }
      if ( sub_924C8((__int64 *)a1, "aS", (unsigned __int8 *)"") )
      {
        v127 = "=";
        goto LABEL_272;
      }
      if ( sub_924C8((__int64 *)a1, "cm", (unsigned __int8 *)"") )
      {
        v127 = ",";
        goto LABEL_272;
      }
      if ( sub_924C8((__int64 *)a1, "ds", (unsigned __int8 *)"") )
      {
        v139 = ".*";
LABEL_299:
        v142 = v139;
        v50 = v139 + 2;
        goto LABEL_273;
      }
      if ( sub_924C8((__int64 *)a1, "dv", (unsigned __int8 *)"") )
      {
        v140 = "/";
LABEL_302:
        v142 = v140;
        v50 = v140 + 1;
        goto LABEL_273;
      }
      if ( sub_924C8((__int64 *)a1, "dV", (unsigned __int8 *)"") )
      {
        v139 = "/=";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "eo", (unsigned __int8 *)"") )
      {
        v140 = "^";
        goto LABEL_302;
      }
      if ( sub_924C8((__int64 *)a1, "eO", (unsigned __int8 *)"") )
      {
        v139 = "^=";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "eq", (unsigned __int8 *)"") )
      {
        v139 = "==";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "ge", (unsigned __int8 *)"") )
      {
        v139 = ">=";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "gt", (unsigned __int8 *)"") )
      {
        v140 = ">";
        goto LABEL_302;
      }
      if ( sub_924C8((__int64 *)a1, "le", (unsigned __int8 *)"") )
      {
        v139 = "<=";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "ls", (unsigned __int8 *)"") )
      {
        v139 = "<<";
        goto LABEL_299;
      }
      if ( sub_924C8((__int64 *)a1, "lS", (unsigned __int8 *)"") )
      {
        v141 = "<<=";
      }
      else
      {
        if ( sub_924C8((__int64 *)a1, "lt", (unsigned __int8 *)"") )
        {
          v140 = "<";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "mi", (unsigned __int8 *)"") )
        {
          v140 = "-";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "mI", (unsigned __int8 *)"") )
        {
          v139 = "-=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "ml", (unsigned __int8 *)"") )
        {
          v140 = "*";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "mL", (unsigned __int8 *)"") )
        {
          v139 = "*=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "ne", (unsigned __int8 *)"") )
        {
          v139 = "!=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "oo", (unsigned __int8 *)"") )
        {
          v139 = "||";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "or", (unsigned __int8 *)"") )
        {
          v140 = "|";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "oR", (unsigned __int8 *)"") )
        {
          v139 = "|=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "pl", (unsigned __int8 *)"") )
        {
          v140 = "+";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "pL", (unsigned __int8 *)"") )
        {
          v139 = "+=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "rm", (unsigned __int8 *)"") )
        {
          v140 = "%";
          goto LABEL_302;
        }
        if ( sub_924C8((__int64 *)a1, "rM", (unsigned __int8 *)"") )
        {
          v139 = "%=";
          goto LABEL_299;
        }
        if ( sub_924C8((__int64 *)a1, "rs", (unsigned __int8 *)"") )
        {
          v139 = ">>";
          goto LABEL_299;
        }
        if ( !sub_924C8((__int64 *)a1, "rS", (unsigned __int8 *)"") )
          return nullptr;
        v141 = ">>=";
      }
      v50 = v141 + 3;
      v142 = v141;
LABEL_273:
      v128 = sub_948A0(a1);
      if ( !v128 )
        return nullptr;
      v129 = v47 == 82;
      v130 = v128;
      if ( v47 != 82 )
        v129 = v47 == 76;
      if ( v129 )
      {
        v131 = sub_948A0(a1);
        if ( !v131 )
          return nullptr;
        v137 = v131;
        v132 = v130;
        if ( v48 )
        {
          v132 = v137;
          v137 = v130;
        }
        v130 = v132;
      }
      else
      {
        v137 = nullptr;
      }
      v4 = sub_93AC6(a1 + 368, 28);
      *v4 = &off_DBE6C;
      v4[1] = 16843050;
      v4[2] = v130;
      v4[3] = v137;
      v4[4] = v142;
      v4[5] = v50;
      *((_BYTE *)v4 + 24) = v48;
      return (unsigned __int8 *)v4;
    case 'g':
      v30 = *(unsigned __int8 *)(v2 + 1);
      if ( v30 == 116 )
      {
        HIDWORD(v2) = ">";
        goto LABEL_240;
      }
      if ( v30 != 101 )
        return nullptr;
      HIDWORD(v2) = ">=";
      goto LABEL_252;
    case 'i':
      v10 = *(unsigned __int8 *)(v2 + 1);
      if ( v10 != 108 )
      {
        if ( v10 == 120 )
        {
          *(_DWORD *)a1 = v2 + 2;
          v11 = sub_948A0(a1);
          if ( v11 )
          {
            v12 = v11;
            v13 = sub_948A0(a1);
            if ( v13 )
            {
              v14 = v13;
              v4 = sub_93AC6(a1 + 368, 16);
              *v4 = &off_DC144;
              v4[1] = 16843050;
              v4[2] = v12;
              v4[3] = v14;
              return (unsigned __int8 *)v4;
            }
          }
        }
        return nullptr;
      }
      v51 = *(_DWORD *)(a1 + 12);
      v52 = *(_DWORD *)(a1 + 8);
      LODWORD(v2) = v2 + 2;
      *(_DWORD *)a1 = v2;
      v53 = (v51 - v52) >> 2;
      while ( (_DWORD)v2 == HIDWORD(v2) || *(_BYTE *)v2 != 69 )
      {
        LODWORD(v146) = sub_962B0((unsigned __int8 **)a1);
        if ( !(_DWORD)v146 )
          return nullptr;
        LODWORD(v54) = a1 + 8;
        HIDWORD(v54) = &v146;
        sub_938C4(v54);
        v2 = *(_QWORD *)a1;
      }
      *(_DWORD *)a1 = v2 + 1;
      sub_9392E(&v146, a1, v53);
      v91 = sub_93AC6(a1 + 368, 20);
      v92 = v146;
      v93 = 0;
      goto LABEL_267;
    case 'l':
      v8 = *(unsigned __int8 *)(v2 + 1);
      switch ( v8 )
      {
        case 'S':
          HIDWORD(v2) = "<<=";
          goto LABEL_186;
        case 't':
          HIDWORD(v2) = "<";
          goto LABEL_240;
        case 's':
          HIDWORD(v2) = "<<";
          break;
        case 'e':
          HIDWORD(v2) = "<=";
          break;
        default:
          return nullptr;
      }
      goto LABEL_252;
    case 'm':
      v9 = *(unsigned __int8 *)(v2 + 1);
      if ( v9 == 73 )
      {
        HIDWORD(v2) = "-=";
        goto LABEL_252;
      }
      if ( v9 == 76 )
      {
        HIDWORD(v2) = "*=";
        goto LABEL_252;
      }
      if ( v9 != 109 )
      {
        if ( v9 == 108 )
        {
          HIDWORD(v2) = "*";
        }
        else
        {
          if ( v9 != 105 )
            return nullptr;
          HIDWORD(v2) = "-";
        }
        goto LABEL_240;
      }
      *(_DWORD *)a1 = v2 + 2;
      if ( (_DWORD)v2 + 2 != HIDWORD(v2) && *(_BYTE *)(v2 + 2) == 95 )
      {
        HIDWORD(v2) = "--";
LABEL_184:
        *(_DWORD *)a1 = v2 + 3;
        v82 = HIDWORD(v2) + 2;
        return (unsigned __int8 *)sub_96070(a1, SHIDWORD(v2), v82);
      }
      LODWORD(v146) = sub_948A0(a1);
      if ( !(_DWORD)v146 )
        return nullptr;
      v103 = "--";
      return (unsigned __int8 *)sub_963B4(a1, (int *)&v146, (int)v103);
    case 'n':
      v42 = *(unsigned __int8 *)(v2 + 1);
      switch ( v42 )
      {
        case 'a':
          goto LABEL_95;
        case 'e':
          HIDWORD(v2) = "!=";
          goto LABEL_252;
        case 'g':
          HIDWORD(v2) = "-";
          goto LABEL_249;
        case 't':
          HIDWORD(v2) = "!";
LABEL_249:
          v82 = HIDWORD(v2) + 1;
          *(_DWORD *)a1 = v2 + 2;
          return (unsigned __int8 *)sub_96070(a1, SHIDWORD(v2), v82);
        case 'x':
          *(_DWORD *)a1 = v2 + 2;
          v84 = sub_948A0(a1);
          if ( !v84 )
            return nullptr;
          v85 = v84;
          v4 = sub_93AC6(a1 + 368, 28);
          v86 = "noexcept (";
          v87 = "";
LABEL_191:
          *v4 = &off_DC27C;
          v4[1] = 16843050;
          v4[2] = v86;
          v4[3] = v87;
          v4[4] = v85;
          v4[5] = ")";
          v4[6] = "";
          return (unsigned __int8 *)v4;
      }
      if ( v42 != 119 )
        return nullptr;
LABEL_95:
      v43 = sub_924C8((__int64 *)a1, "gs", (unsigned __int8 *)"");
      v44 = *(_QWORD *)a1;
      v45 = (unsigned int)(HIDWORD(v44) - v44) >= 2 && *(_BYTE *)(v44 + 1) == 97;
      if ( !sub_924C8((__int64 *)a1, "nw", (unsigned __int8 *)"")
        && !sub_924C8((__int64 *)a1, "na", (unsigned __int8 *)"") )
      {
        return nullptr;
      }
      v88 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
      while ( 1 )
      {
        v90 = *(_QWORD *)a1;
        if ( (_DWORD)v90 != HIDWORD(v90) && *(_BYTE *)v90 == 95 )
          break;
        LODWORD(v146) = sub_948A0(a1);
        if ( !(_DWORD)v146 )
          return nullptr;
        LODWORD(v89) = a1 + 8;
        HIDWORD(v89) = &v146;
        sub_938C4(v89);
      }
      *(_DWORD *)a1 = v90 + 1;
      sub_9392E(&v146, a1, v88);
      v114 = sub_92B28((__int64 *)a1, v111, v112, v113);
      if ( !v114 )
        return nullptr;
      v115 = (int)v114;
      if ( sub_924C8((__int64 *)a1, "pi", (unsigned __int8 *)"") )
      {
        v143 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
        while ( 1 )
        {
          v117 = *(_QWORD *)a1;
          if ( (_DWORD)v117 != HIDWORD(v117) && *(_BYTE *)v117 == 69 )
            break;
          LODWORD(v145) = sub_948A0(a1);
          if ( !(_DWORD)v145 )
            return nullptr;
          LODWORD(v116) = a1 + 8;
          HIDWORD(v116) = &v145;
          sub_938C4(v116);
        }
        *(_DWORD *)a1 = v117 + 1;
        sub_9392E(&v145, a1, v143);
        v138 = v43;
        v4 = sub_93AC6(a1 + 368, 32);
        sub_97A48((int)v4, v146, SHIDWORD(v146), v115, v145, v138, v45);
      }
      else
      {
        v133 = *(_QWORD *)a1;
        if ( (_DWORD)v133 == HIDWORD(v133) )
          return nullptr;
        v134 = v43;
        v4 = nullptr;
        if ( *(_BYTE *)v133 == 69 )
        {
          *(_DWORD *)a1 = v133 + 1;
          v135 = sub_93AC6(a1 + 368, 32);
          return (unsigned __int8 *)sub_97A48((int)v135, v146, SHIDWORD(v146), v115, 0, v134, v45);
        }
      }
      return (unsigned __int8 *)v4;
    case 'o':
      v41 = *(unsigned __int8 *)(v2 + 1);
      switch ( v41 )
      {
        case 'R':
          HIDWORD(v2) = "|=";
          goto LABEL_252;
        case 'r':
          HIDWORD(v2) = "|";
          goto LABEL_240;
        case 'o':
          HIDWORD(v2) = "||";
          goto LABEL_252;
        case 'n':
          return (unsigned __int8 *)sub_960EC((__int64 *)a1);
      }
      return nullptr;
    case 'p':
      v4 = nullptr;
      switch ( *(_BYTE *)(v2 + 1) )
      {
        case 'l':
          HIDWORD(v2) = "+";
          goto LABEL_240;
        case 'm':
          HIDWORD(v2) = "->*";
          goto LABEL_186;
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          return (unsigned __int8 *)v4;
        case 'p':
          *(_DWORD *)a1 = v2 + 2;
          if ( (_DWORD)v2 + 2 != HIDWORD(v2) && *(_BYTE *)(v2 + 2) == 95 )
          {
            HIDWORD(v2) = "++";
            goto LABEL_184;
          }
          LODWORD(v146) = sub_948A0(a1);
          if ( !(_DWORD)v146 )
            return nullptr;
          v103 = "++";
          break;
        case 's':
          HIDWORD(v2) = "+";
          goto LABEL_249;
        case 't':
          *(_DWORD *)a1 = v2 + 2;
          LODWORD(v146) = sub_948A0(a1);
          if ( !(_DWORD)v146 )
            return nullptr;
          LODWORD(v145) = sub_948A0(a1);
          if ( !(_DWORD)v145 )
            return nullptr;
          v81 = "->";
          return (unsigned __int8 *)sub_96280(a1, (int *)&v146, (int)v81, (int *)&v145);
        default:
          if ( *(_BYTE *)(v2 + 1) != 76 )
            return (unsigned __int8 *)v4;
          HIDWORD(v2) = "+=";
          goto LABEL_252;
      }
      return (unsigned __int8 *)sub_963B4(a1, (int *)&v146, (int)v103);
    case 'q':
      if ( *(_BYTE *)(v2 + 1) != 117 )
        return nullptr;
      *(_DWORD *)a1 = v2 + 2;
      v23 = sub_948A0(a1);
      if ( !v23 )
        return nullptr;
      v24 = v23;
      v25 = sub_948A0(a1);
      if ( !v25 )
        return nullptr;
      v26 = v25;
      v27 = sub_948A0(a1);
      if ( !v27 )
        return nullptr;
      v28 = v27;
      v4 = sub_93AC6(a1 + 368, 20);
      *v4 = &off_DC2B0;
      v4[1] = 16843050;
      v4[2] = v24;
      v4[3] = v26;
      v4[4] = v28;
      return (unsigned __int8 *)v4;
    case 'r':
      v35 = *(unsigned __int8 *)(v2 + 1);
      if ( v35 == 77 )
      {
        HIDWORD(v2) = "%=";
      }
      else
      {
        if ( v35 == 83 )
        {
          HIDWORD(v2) = ">>=";
LABEL_186:
          *(_DWORD *)a1 = v2 + 2;
          v83 = HIDWORD(v2) + 3;
          return (unsigned __int8 *)sub_96024(a1, SHIDWORD(v2), v83);
        }
        if ( v35 != 115 )
        {
          if ( v35 != 109 )
          {
            if ( v35 == 99 )
            {
              *(_DWORD *)a1 = v2 + 2;
              v36 = sub_92B28((__int64 *)a1, 99, (int)v3, v6);
              if ( v36 )
              {
                v18 = v36;
                v37 = sub_948A0(a1);
                if ( v37 )
                {
                  v20 = v37;
                  v4 = sub_93AC6(a1 + 368, 24);
                  v21 = "reinterpret_cast";
                  v22 = "";
                  goto LABEL_247;
                }
              }
            }
            return nullptr;
          }
          HIDWORD(v2) = "%";
LABEL_240:
          *(_DWORD *)a1 = v2 + 2;
          v83 = HIDWORD(v2) + 1;
          return (unsigned __int8 *)sub_96024(a1, SHIDWORD(v2), v83);
        }
        HIDWORD(v2) = ">>";
      }
LABEL_252:
      v83 = HIDWORD(v2) + 2;
      *(_DWORD *)a1 = v2 + 2;
      return (unsigned __int8 *)sub_96024(a1, SHIDWORD(v2), v83);
    case 's':
      v38 = *(unsigned __int8 *)(v2 + 1);
      if ( v38 == 80 )
      {
        v96 = *(int **)(a1 + 12);
        v97 = *(_DWORD *)(a1 + 8);
        LODWORD(v2) = v2 + 2;
        *(_DWORD *)a1 = v2;
        v98 = (int)v96 - v97;
        v99 = v98 >> 2;
        while ( 1 )
        {
          if ( (_DWORD)v2 != HIDWORD(v2) )
          {
            HIDWORD(v2) = *(unsigned __int8 *)v2;
            if ( HIDWORD(v2) == 69 )
              break;
          }
          LODWORD(v146) = sub_93798(a1, SHIDWORD(v2), v98, v96);
          if ( !(_DWORD)v146 )
            return nullptr;
          LODWORD(v100) = a1 + 8;
          HIDWORD(v100) = &v146;
          sub_938C4(v100);
          v2 = *(_QWORD *)a1;
        }
        *(_DWORD *)a1 = v2 + 1;
        sub_9392E(&v146, a1, v99);
        v118 = sub_93AC6(a1 + 368, 16);
        v119 = v146;
        *v118 = &off_DC318;
        v118[1] = 16843008;
        *((_QWORD *)v118 + 1) = v119;
        v4 = sub_93AC6(a1 + 368, 28);
        *v4 = &off_DC27C;
        v4[1] = 16843050;
        v4[2] = "sizeof... (";
        v4[3] = "";
        v4[4] = v118;
        v4[5] = ")";
        v4[6] = "";
        return (unsigned __int8 *)v4;
      }
      if ( v38 != 90 )
      {
        switch ( v38 )
        {
          case 'z':
            *(_DWORD *)a1 = v2 + 2;
            v95 = sub_948A0(a1);
            break;
          case 'p':
            *(_DWORD *)a1 = v2 + 2;
            LODWORD(v146) = sub_948A0(a1);
            if ( !(_DWORD)v146 )
              return nullptr;
            return (unsigned __int8 *)sub_963E0(a1, (int *)&v146);
          case 'r':
            return (unsigned __int8 *)sub_960EC((__int64 *)a1);
          case 't':
            *(_DWORD *)a1 = v2 + 2;
            v95 = sub_92B28((__int64 *)a1, SHIDWORD(v2), 116, v6);
            break;
          case 'c':
            *(_DWORD *)a1 = v2 + 2;
            v39 = sub_92B28((__int64 *)a1, SHIDWORD(v2), 99, v6);
            if ( !v39 )
              return nullptr;
            v18 = v39;
            v40 = sub_948A0(a1);
            if ( !v40 )
              return nullptr;
            v20 = v40;
            v4 = sub_93AC6(a1 + 368, 24);
            v21 = "static_cast";
            v22 = "";
LABEL_247:
            *v4 = &off_DBF3C;
            v4[1] = 16843050;
            v4[2] = v21;
            v4[3] = v22;
            v4[4] = v18;
            v4[5] = v20;
            return (unsigned __int8 *)v4;
          default:
            return nullptr;
        }
        LODWORD(v146) = v95;
        if ( !v95 )
          return nullptr;
        v60 = "sizeof (";
        return (unsigned __int8 *)sub_96408(a1, (int)v60, (int *)&v146);
      }
      LODWORD(v2) = v2 + 2;
      *(_DWORD *)a1 = v2;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        return nullptr;
      v101 = *(unsigned __int8 *)v2;
      if ( v101 != 102 )
      {
        if ( v101 == 84 )
        {
          v102 = (unsigned __int8 *)sub_940CC(a1);
          if ( v102 )
          {
            v79 = v102;
            v4 = sub_93AC6(a1 + 368, 12);
            v80 = &`vtable for'`anonymous namespace'::SizeofParamPackExpr;
            goto LABEL_175;
          }
        }
        return nullptr;
      }
      v136 = (unsigned __int8 *)sub_95F74((__int64 *)a1);
      if ( !v136 )
        return nullptr;
      v85 = v136;
      v4 = sub_93AC6(a1 + 368, 28);
      v86 = "sizeof... (";
      v87 = "";
      goto LABEL_191;
    case 't':
      v32 = *(unsigned __int8 *)(v2 + 1);
      switch ( v32 )
      {
        case 'w':
          *(_DWORD *)a1 = v2 + 2;
          v78 = sub_948A0(a1);
          if ( !v78 )
            return nullptr;
          v79 = v78;
          v4 = sub_93AC6(a1 + 368, 12);
          v80 = &`vtable for'`anonymous namespace'::ThrowExpr;
LABEL_175:
          *v4 = v80 + 2;
          v4[1] = 16843050;
          v4[2] = v79;
          return (unsigned __int8 *)v4;
        case 'i':
          *(_DWORD *)a1 = v2 + 2;
          v33 = sub_92B28((__int64 *)a1, 105, (int)v3, v6);
          break;
        case 'l':
          *(_DWORD *)a1 = v2 + 2;
          v73 = sub_92B28((__int64 *)a1, 108, (int)v3, v6);
          if ( !v73 )
            return nullptr;
          v74 = v73;
          v75 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
          while ( 1 )
          {
            v77 = *(_QWORD *)a1;
            if ( (_DWORD)v77 != HIDWORD(v77) && *(_BYTE *)v77 == 69 )
              break;
            LODWORD(v146) = sub_962B0((unsigned __int8 **)a1);
            if ( !(_DWORD)v146 )
              return nullptr;
            LODWORD(v76) = a1 + 8;
            HIDWORD(v76) = &v146;
            sub_938C4(v76);
          }
          *(_DWORD *)a1 = v77 + 1;
          sub_9392E(&v146, a1, v75);
          v91 = sub_93AC6(a1 + 368, 20);
          v92 = v146;
          v93 = (int)v74;
LABEL_267:
          v4 = v91;
          sub_979A0((int)v91, v93, v92, SHIDWORD(v92));
          return (unsigned __int8 *)v4;
        case 'r':
          *(_DWORD *)a1 = v2 + 2;
          return (unsigned __int8 *)sub_96438(a1, (int)"throw");
        case 'e':
          *(_DWORD *)a1 = v2 + 2;
          v33 = sub_948A0(a1);
          break;
        default:
          return nullptr;
      }
      LODWORD(v146) = v33;
      if ( !v33 )
        return nullptr;
      v60 = "typeid (";
      return (unsigned __int8 *)sub_96408(a1, (int)v60, (int *)&v146);
    default:
      if ( (unsigned int)(v5 - 49) < 9 )
        return (unsigned __int8 *)sub_960EC((__int64 *)a1);
      return (unsigned __int8 *)v4;
  }
}
// 94F32: variable 'v61' is possibly undefined
// 94F32: variable 'v62' is possibly undefined
// 94F32: variable 'v63' is possibly undefined
// 95282: variable 'v98' is possibly undefined
// 95282: variable 'v96' is possibly undefined
// 954CE: variable 'v111' is possibly undefined
// 954CE: variable 'v112' is possibly undefined
// 954CE: variable 'v113' is possibly undefined
// DBE6C: using guessed type _UNKNOWN *off_DBE6C;
// DBF3C: using guessed type _UNKNOWN *off_DBF3C;
// DBF70: using guessed type _UNKNOWN *off_DBF70;
// DC110: using guessed type _UNKNOWN *off_DC110;
// DC144: using guessed type _UNKNOWN *off_DC144;
// DC27C: using guessed type _UNKNOWN *off_DC27C;
// DC2B0: using guessed type _UNKNOWN *off_DC2B0;
// DC2DC: using guessed type int `vtable for'`anonymous namespace'::SizeofParamPackExpr;
// DC318: using guessed type _UNKNOWN *off_DC318;
// DC344: using guessed type int `vtable for'`anonymous namespace'::ThrowExpr;
