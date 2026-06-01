/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92B28
// Address: 0x00092B28

//----- (00092B28) --------------------------------------------------------
unsigned __int8 *__fastcall sub_92B28(__int64 *a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // r1
  unsigned __int8 *v6; // r2
  unsigned int v7; // r0
  unsigned int v8; // r3
  int v9; // r6
  int v10; // r0
  _DWORD *v11; // r0
  _BYTE *v12; // r0
  _DWORD *v13; // r5
  int v14; // r2
  _DWORD *v15; // r3
  __int64 v16; // r0
  unsigned __int8 *v17; // r0
  unsigned __int8 *v18; // r8
  _DWORD *v19; // r0
  unsigned __int8 *v20; // r2
  int v21; // r3
  int v22; // r1
  unsigned __int8 *v23; // r0
  unsigned __int8 *v24; // r5
  _DWORD *v25; // r0
  const char *v26; // r3
  char *v27; // r6
  int v28; // r1
  unsigned __int8 *result; // r0
  unsigned __int8 *v30; // r0
  unsigned __int8 *v31; // r0
  int v32; // r1
  int v33; // r2
  _DWORD *v34; // r3
  unsigned __int8 *v35; // r9
  unsigned __int8 *v36; // r0
  unsigned __int8 *v37; // r8
  unsigned __int8 *v38; // r0
  unsigned __int8 *v39; // r5
  int *v40; // r1
  char v41; // r2
  unsigned __int8 *v42; // r0
  _UNKNOWN **v43; // r1
  unsigned __int8 *v44; // r0
  __int64 v45; // kr08_8
  int *v46; // r1
  int *v47; // r2
  unsigned int v48; // r0
  __int64 v49; // r0
  const char *v50; // r1
  const char *v51; // r1
  const char *v52; // r3
  char *v53; // r6
  const char *v54; // r1
  unsigned __int8 *v55; // r0
  const char *v56; // r1
  const char *v57; // r1
  const char *v58; // r1
  unsigned __int8 *v59; // r0
  const char *v60; // r1
  unsigned __int8 *v61; // r0
  const char *v62; // r1
  unsigned __int8 *v63; // r0
  unsigned __int8 *v64; // r0
  const char *v65; // r1
  __int64 v66; // r0
  unsigned __int8 *v67; // r0
  unsigned __int8 *v68; // r8
  _DWORD *v69; // r0
  unsigned __int8 *v70; // r0
  int v71; // r2
  _DWORD *v72; // r3
  unsigned __int8 *v73; // r9
  __int64 v74; // r0
  unsigned __int8 *v75; // r0
  unsigned __int8 *v76; // r8
  unsigned int v77; // r2
  _DWORD *v78; // r3
  __int64 v79; // r0
  _DWORD *v80; // r3
  __int64 v81; // r0
  unsigned __int8 *v82; // r2
  unsigned __int8 *v83; // r2
  unsigned __int8 *v84; // r3
  bool v85; // zf
  unsigned __int8 *v86; // r0
  unsigned __int8 *v87; // r8
  _DWORD *v88; // r0
  int v89; // r1
  unsigned __int8 *v90; // r2
  int v91; // r3
  unsigned __int8 *v92; // r0
  int v93; // r2
  _DWORD *v94; // r3
  unsigned __int8 *v95; // r9
  __int64 v96; // r0
  unsigned __int8 *v97; // r0
  unsigned __int8 *v98; // r8
  unsigned __int8 *v99; // r0
  unsigned __int8 *v100; // r8
  _DWORD *v101; // [sp+4h] [bp-2Ch] BYREF
  _DWORD *v102; // [sp+8h] [bp-28h] BYREF
  unsigned __int8 *v103; // [sp+Ch] [bp-24h] BYREF
  unsigned __int8 *v104; // [sp+10h] [bp-20h]

  v101 = a4;
  v102 = nullptr;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *(unsigned __int8 **)a1;
  v7 = v5 - *(_DWORD *)a1;
  if ( (unsigned __int8 *)v5 != v6 )
  {
    v8 = *v6;
    switch ( *v6 )
    {
      case 'A':
        if ( v6 == (unsigned __int8 *)v5 )
          goto LABEL_156;
        v12 = v6 + 1;
        *(_DWORD *)a1 = v6 + 1;
        if ( (unsigned __int8 *)v5 == v6 + 1 || (v8 = (unsigned __int8)*v12 - 48, v8 > 9) )
        {
          if ( v12 != (_BYTE *)v5 && *v12 == 95 )
          {
            *(_DWORD *)a1 = v6 + 2;
            v67 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
            v13 = nullptr;
            if ( v67 )
            {
              v68 = v67;
              v69 = sub_93AC6((int)(a1 + 46), 20);
              *v69 = &off_DC82C;
              v69[1] = 16777231;
              v69[2] = v68;
              v69[3] = 0;
              v69[4] = 0;
              v13 = v69;
            }
            goto LABEL_157;
          }
          v70 = sub_948A0((int)a1);
          if ( v70 )
          {
            v73 = v70;
            v74 = *a1;
            if ( (_DWORD)v74 != HIDWORD(v74) && *(_BYTE *)v74 == 95 )
            {
              *(_DWORD *)a1 = v74 + 1;
              v75 = sub_92B28(a1, 95, v71, v72);
              if ( v75 )
              {
                v76 = v75;
                v19 = sub_93AC6((int)(a1 + 46), 20);
                v22 = (int)v76;
                v20 = v73;
                v21 = 0;
                v13 = v19;
LABEL_115:
                sub_98B38((int)v19, v22, (int)v20, v21);
                goto LABEL_157;
              }
            }
          }
        }
        else
        {
          v13 = nullptr;
          sub_92AAC(&v103, (unsigned __int8 **)a1, 0);
          v16 = *a1;
          if ( (_DWORD)v16 == HIDWORD(v16) )
            goto LABEL_157;
          if ( *(_BYTE *)v16 == 95 )
          {
            *(_DWORD *)a1 = v16 + 1;
            v17 = sub_92B28(a1, 95, v14, v15);
            if ( v17 )
            {
              v18 = v17;
              v19 = sub_93AC6((int)(a1 + 46), 20);
              v20 = v103;
              v21 = (int)v104;
              v22 = (int)v18;
              v13 = v19;
              if ( !v104 )
              {
                v20 = v103 + 1;
                v21 = 1;
              }
              goto LABEL_115;
            }
          }
        }
        goto LABEL_156;
      case 'C':
        *(_DWORD *)a1 = v6 + 1;
        v23 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v23 )
          return nullptr;
        v24 = v23;
        v25 = sub_93AC6((int)(a1 + 46), 20);
        v26 = " complex";
        v27 = "";
        goto LABEL_35;
      case 'D':
        if ( v7 < 2 )
          return nullptr;
        break;
      case 'F':
        goto LABEL_32;
      case 'G':
        *(_DWORD *)a1 = v6 + 1;
        v30 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v30 )
          return nullptr;
        v24 = v30;
        v25 = sub_93AC6((int)(a1 + 46), 20);
        v26 = " imaginary";
        v27 = "";
LABEL_35:
        *v25 = &off_DC964;
        v25[1] = 16843013;
        v25[2] = v24;
        v25[3] = v26;
        v25[4] = v27;
        goto LABEL_48;
      case 'K':
      case 'V':
      case 'r':
        v5 = v8 == 114;
        if ( v7 > v5 )
        {
          v9 = 1;
          if ( v8 == 114 )
            v9 = 2;
          if ( v6[v5] == 86 )
            v5 = v9;
        }
        if ( v7 > v5 )
        {
          v8 = v6[v5];
          if ( v8 == 75 )
            ++v5;
        }
        if ( v7 <= v5 )
          goto LABEL_18;
        v8 = v6[v5];
        if ( v8 != 70 )
        {
          if ( v8 != 68 )
            goto LABEL_18;
          if ( v7 <= ++v5 )
            goto LABEL_18;
          v10 = v6[v5];
          v5 = v10 - 111;
          if ( (unsigned int)(v10 - 111) > 9 || (v5 = 1 << v5, v6 = (_BYTE *)(&stru_300 + 1), (v5 & 0x301) == 0) )
          {
            if ( v10 != 79 )
              goto LABEL_18;
          }
        }
LABEL_32:
        v11 = sub_983BC((int)a1);
        goto LABEL_62;
      case 'M':
        if ( v6 == (unsigned __int8 *)v5 )
          goto LABEL_156;
        *(_DWORD *)a1 = v6 + 1;
        v31 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v31 )
          goto LABEL_156;
        v35 = v31;
        v36 = sub_92B28(a1, v32, v33, v34);
        if ( !v36 )
          goto LABEL_156;
        v37 = v36;
        v13 = sub_93AC6((int)(a1 + 46), 16);
        *((_BYTE *)v13 + 5) = v37[5];
        *((_BYTE *)v13 + 4) = 14;
        *((_WORD *)v13 + 3) = 257;
        *v13 = &off_DC860;
        v13[2] = v35;
        v13[3] = v37;
        goto LABEL_157;
      case 'O':
        *(_DWORD *)a1 = v6 + 1;
        v38 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v38 )
          return nullptr;
        v39 = v38;
        v25 = sub_93AC6((int)(a1 + 46), 12);
        *((_BYTE *)v25 + 5) = v39[5];
        v40 = &`vtable for'`anonymous namespace'::RValueReferenceType;
        v41 = 13;
        goto LABEL_44;
      case 'P':
        *(_DWORD *)a1 = v6 + 1;
        v42 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v42 )
          return nullptr;
        v39 = v42;
        v25 = sub_93AC6((int)(a1 + 46), 12);
        v40 = &`vtable for'`anonymous namespace'::PointerType;
        *((_BYTE *)v25 + 5) = v39[5];
        v41 = 11;
LABEL_44:
        v43 = (_UNKNOWN **)(v40 + 2);
        *((_BYTE *)v25 + 4) = v41;
        *((_WORD *)v25 + 3) = 257;
        goto LABEL_47;
      case 'R':
        *(_DWORD *)a1 = v6 + 1;
        v44 = sub_92B28(a1, v5, (int)v6, (_DWORD *)v8);
        if ( !v44 )
          return nullptr;
        v39 = v44;
        v25 = sub_93AC6((int)(a1 + 46), 12);
        *((_BYTE *)v25 + 5) = v39[5];
        *((_BYTE *)v25 + 4) = 12;
        *((_WORD *)v25 + 3) = 257;
        v43 = &off_DC8FC;
LABEL_47:
        *v25 = v43;
        v25[2] = v39;
        goto LABEL_48;
      case 'S':
        if ( v7 < 2 || !v6[1] || v6[1] == 116 )
          goto LABEL_61;
        result = (unsigned __int8 *)sub_93C28((int)a1);
        v103 = result;
        if ( !result )
          return result;
        if ( !*((_BYTE *)a1 + 360) )
          return result;
        v45 = *a1;
        if ( HIDWORD(v45) == (_DWORD)v45 || *(_BYTE *)v45 != 73 )
          return result;
        v101 = sub_93D60(a1, 0);
        if ( !v101 )
          return nullptr;
        v46 = (int *)&v103;
        v47 = (int *)&v101;
        goto LABEL_105;
      case 'T':
        if ( v7 >= 2 )
        {
          v48 = v6[1] - 101;
          if ( v48 <= 0x10 && ((1 << v48) & 0x14001) != 0 )
            goto LABEL_61;
        }
        v102 = sub_940CC((int)a1);
        if ( !v102 )
          return nullptr;
        if ( !*((_BYTE *)a1 + 360) )
          goto LABEL_64;
        v66 = *a1;
        if ( HIDWORD(v66) == (_DWORD)v66 || *(_BYTE *)v66 != 73 )
          goto LABEL_64;
        v103 = (unsigned __int8 *)sub_93D60(a1, 0);
        if ( !v103 )
          return nullptr;
        v46 = (int *)&v102;
        v47 = (int *)&v103;
LABEL_105:
        v25 = sub_94038((int)a1, v46, v47);
LABEL_48:
        v102 = v25;
        goto LABEL_64;
      case 'U':
LABEL_18:
        v11 = sub_985EC(a1, v5, (int)v6, v8);
        goto LABEL_62;
      case 'a':
        v50 = "signed char";
        goto LABEL_70;
      case 'b':
        v51 = "bool";
        goto LABEL_90;
      case 'c':
        v51 = "char";
        goto LABEL_90;
      case 'd':
        *(_DWORD *)a1 = v6 + 1;
        result = (unsigned __int8 *)sub_93AC6((int)(a1 + 46), 16);
        v52 = "double";
        v53 = "";
        goto LABEL_96;
      case 'e':
        v50 = "long double";
LABEL_70:
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_9770C((int)a1, (int)v50);
      case 'f':
        v54 = "float";
        goto LABEL_84;
      case 'g':
        v55 = v6 + 1;
        v56 = "__float128";
LABEL_73:
        *(_DWORD *)a1 = v55;
        return (unsigned __int8 *)sub_97690((int)a1, (int)v56);
      case 'h':
        v57 = "unsigned char";
        goto LABEL_79;
      case 'i':
        v58 = "int";
        goto LABEL_98;
      case 'j':
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_97744((int)a1, (int)"unsigned int");
      case 'l':
        v51 = "long";
        goto LABEL_90;
      case 'm':
        v57 = "unsigned long";
LABEL_79:
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_98724((int)a1, (int)v57);
      case 'n':
        v59 = v6 + 1;
        v60 = "__int128";
LABEL_81:
        *(_DWORD *)a1 = v59;
        return (unsigned __int8 *)sub_98740((int)a1, (int)v60);
      case 'o':
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_976F0((int)a1, (int)"unsigned __int128");
      case 's':
        v54 = "short";
LABEL_84:
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_96438((int)a1, (int)v54);
      case 't':
        v61 = v6 + 1;
        v62 = "unsigned short";
LABEL_86:
        *(_DWORD *)a1 = v61;
        return (unsigned __int8 *)sub_97728((int)a1, (int)v62);
      case 'u':
        *(_DWORD *)a1 = v6 + 1;
        sub_97DB4(&v103, a1);
        if ( v103 == v104 )
          return nullptr;
        return (unsigned __int8 *)sub_97130((int)a1, (int *)&v103);
      case 'v':
        v51 = "void";
LABEL_90:
        v63 = v6 + 1;
LABEL_91:
        *(_DWORD *)a1 = v63;
        return (unsigned __int8 *)sub_94746((int)a1, (int)v51);
      case 'w':
        *(_DWORD *)a1 = v6 + 1;
        result = (unsigned __int8 *)sub_93AC6((int)(a1 + 46), 16);
        v52 = "wchar_t";
        v53 = "";
        goto LABEL_96;
      case 'x':
        v64 = v6 + 1;
        v65 = "long long";
LABEL_94:
        *(_DWORD *)a1 = v64;
        return (unsigned __int8 *)sub_976AC((int)a1, (int)v65);
      case 'y':
        *(_DWORD *)a1 = v6 + 1;
        result = (unsigned __int8 *)sub_93AC6((int)(a1 + 46), 16);
        v52 = "unsigned long long";
        v53 = "";
LABEL_96:
        *(_DWORD *)result = &off_DBC58;
        *((_DWORD *)result + 1) = 16843015;
        *((_DWORD *)result + 2) = v52;
        *((_DWORD *)result + 3) = v53;
        return result;
      case 'z':
        v58 = "...";
LABEL_98:
        *(_DWORD *)a1 = v6 + 1;
        return (unsigned __int8 *)sub_940B0((int)a1, (int)v58);
      default:
        goto LABEL_61;
    }
    v28 = v6[1] - 79;
    result = nullptr;
    switch ( v6[1] )
    {
      case 'O':
      case 'o':
      case 'w':
      case 'x':
        goto LABEL_32;
      case 'T':
      case 't':
        v11 = (_DWORD *)sub_94258(a1, v28, (int)v6, v8);
        goto LABEL_62;
      case 'a':
        v63 = v6 + 2;
        v51 = "auto";
        goto LABEL_91;
      case 'c':
        v62 = "decltype(auto)";
        goto LABEL_126;
      case 'd':
        v65 = "decimal64";
        goto LABEL_123;
      case 'e':
        v55 = v6 + 2;
        v56 = "decimal128";
        goto LABEL_73;
      case 'f':
        v65 = "decimal32";
        goto LABEL_123;
      case 'h':
        v65 = "decimal16";
LABEL_123:
        v64 = v6 + 2;
        goto LABEL_94;
      case 'i':
        v60 = "char32_t";
        goto LABEL_132;
      case 'n':
        v62 = "std::nullptr_t";
LABEL_126:
        v61 = v6 + 2;
        goto LABEL_86;
      case 'p':
        *(_DWORD *)a1 = v6 + 2;
        v103 = sub_92B28(a1, v28, (int)v6, (_DWORD *)v8);
        if ( !v103 )
          return nullptr;
        v25 = sub_963E0((int)a1, (int *)&v103);
        goto LABEL_48;
      case 's':
        v60 = "char16_t";
LABEL_132:
        v59 = v6 + 2;
        goto LABEL_81;
      case 'v':
        if ( !sub_924C8(a1, "Dv", (unsigned __int8 *)"") )
          goto LABEL_156;
        v79 = *a1;
        if ( HIDWORD(v79) == (_DWORD)v79 || (v77 = (unsigned __int8)(*(_BYTE *)v79 - 49), v77 > 8) )
        {
          if ( (_DWORD)v79 != HIDWORD(v79) && *(_BYTE *)v79 == 95 )
          {
            *(_DWORD *)a1 = v79 + 1;
            v86 = sub_92B28(a1, 95, v77, v78);
            if ( !v86 )
              goto LABEL_156;
            v87 = v86;
            v88 = sub_93AC6((int)(a1 + 46), 24);
            v13 = v88;
            v89 = (int)v87;
            v90 = (_BYTE *)(&dword_0 + 1);
            v91 = 1;
            goto LABEL_155;
          }
          v92 = sub_948A0((int)a1);
          if ( v92 )
          {
            v95 = v92;
            v96 = *a1;
            if ( (_DWORD)v96 != HIDWORD(v96) && *(_BYTE *)v96 == 95 )
            {
              *(_DWORD *)a1 = v96 + 1;
              v97 = sub_92B28(a1, 95, v93, v94);
              if ( v97 )
              {
                v98 = v97;
                v88 = sub_93AC6((int)(a1 + 46), 24);
                v13 = v88;
                v89 = (int)v98;
                v90 = v95;
                v91 = 0;
                goto LABEL_155;
              }
            }
          }
        }
        else
        {
          v13 = nullptr;
          sub_92AAC(&v103, (unsigned __int8 **)a1, 0);
          v81 = *a1;
          if ( (_DWORD)v81 == HIDWORD(v81) )
            goto LABEL_157;
          if ( *(_BYTE *)v81 == 95 )
          {
            v82 = (unsigned __int8 *)(v81 + 1);
            *(_DWORD *)a1 = v81 + 1;
            if ( (_DWORD)v81 + 1 != HIDWORD(v81) )
            {
              HIDWORD(v81) = *v82;
              if ( HIDWORD(v81) == 112 )
              {
                *(_DWORD *)a1 = v81 + 2;
                v13 = sub_93AC6((int)(a1 + 46), 24);
                v83 = v103;
                v84 = v104;
                v85 = v104 == nullptr;
                *((_BYTE *)v13 + 20) = 1;
                if ( v85 )
                {
                  ++v83;
                  ++v84;
                }
                *v13 = &off_DC7F8;
                v13[1] = 16843034;
                v13[2] = 0;
                v13[3] = v83;
                v13[4] = v84;
                goto LABEL_157;
              }
            }
            v99 = sub_92B28(a1, SHIDWORD(v81), (int)v82, v80);
            if ( !v99 )
              goto LABEL_156;
            v100 = v99;
            v88 = sub_93AC6((int)(a1 + 46), 24);
            v90 = v103;
            v91 = (int)v104;
            v13 = v88;
            v89 = (int)v100;
            if ( !v104 )
            {
              v90 = v103 + 1;
              v91 = 1;
            }
LABEL_155:
            sub_98B08((int)v88, v89, (int)v90, v91);
            goto LABEL_157;
          }
        }
LABEL_156:
        v13 = nullptr;
LABEL_157:
        v102 = v13;
        goto LABEL_63;
      default:
        return result;
    }
  }
LABEL_61:
  v11 = sub_9875C(a1);
LABEL_62:
  v13 = v11;
  v102 = v11;
LABEL_63:
  if ( !v13 )
    return nullptr;
LABEL_64:
  LODWORD(v49) = (char *)a1 + 148;
  HIDWORD(v49) = &v102;
  sub_938C4(v49);
  return (unsigned __int8 *)v102;
}
// 92C78: variable 'v14' is possibly undefined
// 92C78: variable 'v15' is possibly undefined
// 92D94: variable 'v32' is possibly undefined
// 92D94: variable 'v33' is possibly undefined
// 92D94: variable 'v34' is possibly undefined
// 9310E: variable 'v71' is possibly undefined
// 9310E: variable 'v72' is possibly undefined
// 9328A: variable 'v77' is possibly undefined
// 9328A: variable 'v78' is possibly undefined
// 932C4: variable 'v93' is possibly undefined
// 932C4: variable 'v94' is possibly undefined
// 932E2: variable 'v80' is possibly undefined
// 0: using guessed type int dword_0;
// 300: using guessed type Elf32_Sym stru_300;
// DBC58: using guessed type _UNKNOWN *off_DBC58;
// DC7F8: using guessed type _UNKNOWN *off_DC7F8;
// DC82C: using guessed type _UNKNOWN *off_DC82C;
// DC860: using guessed type _UNKNOWN *off_DC860;
// DC8C0: using guessed type int `vtable for'`anonymous namespace'::PointerType;
// DC8FC: using guessed type _UNKNOWN *off_DC8FC;
// DC928: using guessed type int `vtable for'`anonymous namespace'::RValueReferenceType;
// DC964: using guessed type _UNKNOWN *off_DC964;
