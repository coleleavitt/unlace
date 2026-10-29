__int64 __fastcall sub_20D8F30(__int64 a1)
{
  char *v1; // rbp
  char *v2; // r13
  char v3; // cl
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  char *v10; // rdx
  char **v11; // r12
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  char v14; // dl
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdi
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rbp
  size_t v23; // r12
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rbp
  __int64 v27; // rax
  char v28; // cl
  char v29; // dl
  char *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rax
  char v33; // cl
  __int16 v34; // dx
  char v35; // al
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  char v39; // dl
  int v40; // edx
  __int64 v41; // rdx
  char *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rbp
  size_t v46; // r12
  __int64 v47; // rax
  char v48; // dl
  char v49; // r12
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rbp
  __int64 v67; // rax
  char v68; // cl
  __int16 v69; // dx
  __int64 v70; // rbp
  __int64 v71; // r12
  __int64 v72; // rax
  char v73; // cl
  __int16 v74; // dx
  size_t v75; // r12
  char *v76; // rbp
  __int64 v77; // rbp
  char *v78; // rax
  __int64 v79; // r12
  char v80; // dl
  __int64 v81; // rdi
  __int64 v82; // rdi
  char v83; // dl
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rdi
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 v91; // rdi
  unsigned __int64 v92; // r13
  char v93; // al
  char *v94; // rdx
  char v95; // al
  char v96; // al
  const char *v97; // r13
  size_t v98; // rax
  size_t v99; // r14
  __int64 v100; // rax
  char v101; // dl
  char *v102; // rbp
  size_t v103; // r14
  __int64 v104; // rdx
  __int64 v105; // rbp
  char *v106; // rax
  char v107; // al
  __int64 v108; // rdx
  __int64 v109; // rbp
  char *v110; // rax
  __int64 v111; // rax
  char v112; // dl
  bool v113; // zf
  char v114; // al
  __int64 v115; // rbp
  char *v116; // rax
  unsigned __int64 v117; // r14
  __int64 v118; // r13
  char v119; // al
  char v120; // dl
  char v121; // al
  __int64 v122; // rbp
  char v123; // dl
  __int64 v124; // rdx
  __int64 v125; // rbp
  char *v126; // rax
  char *v127; // rcx
  __int64 v128; // r13
  char v129; // dl
  char v130; // dl
  __int64 v131; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v132; // [rsp+10h] [rbp-38h] BYREF
  __int64 v133; // [rsp+18h] [rbp-30h]

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  v131 = 0;
  if ( v1 != v2 )
  {
    v3 = *v1;
    v4 = v2 - v1;
    switch ( *v1 )
    {
      case 'A':
        *(_QWORD *)a1 = v1 + 1;
        if ( v2 == v1 + 1 )
          goto LABEL_156;
        v40 = v1[1];
        if ( (unsigned int)(v40 - 48) > 9 )
        {
          if ( (_BYTE)v40 == 95 )
          {
            *(_QWORD *)a1 = v1 + 2;
            v7 = 0;
            goto LABEL_160;
          }
LABEL_156:
          v7 = sub_20DA8A0(a1);
          if ( !v7 )
            return 0;
        }
        else
        {
          v132 = sub_20CEB80((char **)a1, 0);
          v133 = v41;
          v7 = sub_20D12D0(a1 + 816, (__int64 *)&v132);
          if ( !v7 )
            return 0;
        }
        v42 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v42 != 95 )
          return 0;
        *(_QWORD *)a1 = v42 + 1;
LABEL_160:
        v8 = sub_20D8F30(a1);
        if ( !v8 )
          return 0;
        v9 = sub_20CF970(a1 + 816, 32);
        v120 = *(_BYTE *)(v9 + 10);
        *(_WORD *)(v9 + 8) = 15;
        *(_BYTE *)(v9 + 10) = v120 & 0xF0 | 4;
        v10 = (char *)&unk_2BE6C50;
        goto LABEL_10;
      case 'C':
        *(_QWORD *)a1 = v1 + 1;
        v22 = sub_20D8F30(a1);
        if ( !v22 )
          return 0;
        v23 = j__strlen(" complex");
        v24 = sub_20CF970(a1 + 816, 40);
        v25 = *(_BYTE *)(v24 + 10);
        *(_WORD *)(v24 + 8) = 16389;
        *(_QWORD *)(v24 + 16) = v22;
        *(_QWORD *)(v24 + 24) = v23;
        v11 = (char **)(a1 + 296);
        *(_QWORD *)(v24 + 32) = " complex";
        *(_BYTE *)(v24 + 10) = v25 & 0xF0 | 5;
        *(_QWORD *)v24 = off_2BE6840;
        v131 = v24;
        goto LABEL_12;
      case 'D':
        v5 = 0;
        if ( v4 == 1 )
          return v5;
        break;
      case 'F':
        goto LABEL_22;
      case 'G':
        *(_QWORD *)a1 = v1 + 1;
        v45 = sub_20D8F30(a1);
        if ( !v45 )
          return 0;
        v46 = j__strlen(" imaginary");
        v47 = sub_20CF970(a1 + 816, 40);
        v48 = *(_BYTE *)(v47 + 10);
        *(_QWORD *)(v47 + 16) = v45;
        *(_QWORD *)(v47 + 24) = v46;
        v11 = (char **)(a1 + 296);
        *(_QWORD *)(v47 + 32) = " imaginary";
        *(_WORD *)(v47 + 8) = 16389;
        *(_BYTE *)(v47 + 10) = v48 & 0xF0 | 5;
        *(_QWORD *)v47 = off_2BE6840;
        v131 = v47;
        goto LABEL_12;
      case 'K':
      case 'V':
      case 'r':
        LOBYTE(v12) = v3 == 114;
        v13 = v3 == 114;
        if ( v13 >= v4 )
          goto LABEL_21;
        v14 = v1[v13];
        v12 = (unsigned __int8)v12;
        if ( v14 != 86 )
          goto LABEL_15;
        v12 = (unsigned __int8)v12 + 1;
        if ( v12 >= v4 )
          goto LABEL_21;
        v14 = v1[v12];
LABEL_15:
        if ( v14 != 75 )
          goto LABEL_16;
        if ( ++v12 >= v4 )
          goto LABEL_21;
        v14 = v1[v12];
LABEL_16:
        if ( v14 == 70
          || v14 == 68
          && (v15 = v12 + 1, v4 > v15)
          && ((v16 = v1[v15], (v16 & 0xDF) == 0x4F) || (unsigned __int8)(v16 - 119) <= 1u) )
        {
LABEL_22:
          v5 = sub_20D8AF0(a1);
          v131 = v5;
        }
        else
        {
LABEL_21:
          v5 = sub_20E1810(a1);
          v131 = v5;
        }
        goto LABEL_4;
      case 'M':
        *(_QWORD *)a1 = v1 + 1;
        v70 = sub_20D8F30(a1);
        if ( !v70 )
          return 0;
        v71 = sub_20D8F30(a1);
        if ( !v71 )
          return 0;
        v72 = sub_20CF970(a1 + 816, 32);
        v73 = *(_BYTE *)(v71 + 9);
        v74 = *(_WORD *)(v72 + 8);
        *(_QWORD *)(v72 + 16) = v70;
        *(_QWORD *)(v72 + 24) = v71;
        *(_WORD *)(v72 + 8) = v74 & 0xC000 | 0xE;
        LOBYTE(v74) = *(_BYTE *)(v72 + 10);
        *(_BYTE *)(v72 + 9) = v73 & 0xC0;
        *(_BYTE *)(v72 + 10) = v74 & 0xF0 | 5;
        *(_QWORD *)v72 = off_2BE6C00;
LABEL_86:
        v131 = v72;
        goto LABEL_11;
      case 'O':
        *(_QWORD *)a1 = v1 + 1;
        v66 = sub_20D8F30(a1);
        if ( !v66 )
          return 0;
        v11 = (char **)(a1 + 296);
        v67 = sub_20CF970(a1 + 816, 32);
        v68 = *(_BYTE *)(v66 + 9);
        v69 = *(_WORD *)(v67 + 8);
        *(_QWORD *)(v67 + 16) = v66;
        *(_BYTE *)(v67 + 28) = 0;
        *(_DWORD *)(v67 + 24) = 1;
        *(_WORD *)(v67 + 8) = v69 & 0xC000 | 0xD;
        LOBYTE(v69) = *(_BYTE *)(v67 + 10);
        *(_BYTE *)(v67 + 9) = v68 & 0xC0;
        *(_BYTE *)(v67 + 10) = v69 & 0xF0 | 5;
        *(_QWORD *)v67 = off_2BE6BA0;
        v131 = v67;
        goto LABEL_12;
      case 'P':
        *(_QWORD *)a1 = v1 + 1;
        v26 = sub_20D8F30(a1);
        if ( !v26 )
          return 0;
        v27 = sub_20CF970(a1 + 816, 24);
        v28 = *(_BYTE *)(v26 + 9) & 0xC0;
        *(_WORD *)(v27 + 8) = *(_WORD *)(v27 + 8) & 0xC000 | 0xC;
        v29 = *(_BYTE *)(v27 + 10);
        *(_BYTE *)(v27 + 9) = v28;
        *(_BYTE *)(v27 + 10) = v29 & 0xF0 | 5;
        v30 = (char *)&unk_2BE6B30;
LABEL_41:
        *(_QWORD *)(v27 + 16) = v26;
        v11 = (char **)(a1 + 296);
        *(_QWORD *)v27 = v30 + 16;
        v131 = v27;
        goto LABEL_12;
      case 'R':
        *(_QWORD *)a1 = v1 + 1;
        v31 = sub_20D8F30(a1);
        if ( !v31 )
          return 0;
        v11 = (char **)(a1 + 296);
        v32 = sub_20CF970(a1 + 816, 32);
        v33 = *(_BYTE *)(v31 + 9);
        v34 = *(_WORD *)(v32 + 8);
        *(_QWORD *)(v32 + 16) = v31;
        *(_BYTE *)(v32 + 28) = 0;
        *(_DWORD *)(v32 + 24) = 0;
        *(_WORD *)(v32 + 8) = v34 & 0xC000 | 0xD;
        LOBYTE(v34) = *(_BYTE *)(v32 + 10);
        *(_BYTE *)(v32 + 9) = v33 & 0xC0;
        *(_BYTE *)(v32 + 10) = v34 & 0xF0 | 5;
        *(_QWORD *)v32 = off_2BE6BA0;
        v131 = v32;
        goto LABEL_12;
      case 'S':
        if ( v4 != 1 && v1[1] == 116 )
          goto LABEL_3;
        LOBYTE(v132) = 0;
        v5 = sub_20DF360(a1, 0, &v132);
        v131 = v5;
        if ( !v5 )
          return 0;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || **(_BYTE **)a1 != 73 )
        {
          if ( !(_BYTE)v132 )
            goto LABEL_11;
          return v5;
        }
        if ( (_BYTE)v132 )
        {
          if ( !*(_BYTE *)(a1 + 776) )
            return v5;
        }
        else
        {
          sub_20D8690((char **)(a1 + 296), &v131);
        }
        v7 = sub_20DCBE0(a1, 0);
        if ( !v7 )
          return 0;
        v8 = v131;
        v9 = sub_20CF970(a1 + 816, 32);
        *(_WORD *)(v9 + 8) = 16429;
        *(_BYTE *)(v9 + 10) = *(_BYTE *)(v9 + 10) & 0xF0 | 5;
        v10 = (char *)&unk_2BE7790;
LABEL_10:
        *(_QWORD *)(v9 + 16) = v8;
        *(_QWORD *)v9 = v10 + 16;
        *(_QWORD *)(v9 + 24) = v7;
        v131 = v9;
        goto LABEL_11;
      case 'T':
        if ( v4 != 1 )
        {
          v35 = v1[1];
          if ( v35 == 115 || (v35 & 0xEF) == 0x65 )
            goto LABEL_3;
        }
        v131 = sub_20D1430(a1);
        if ( !v131 )
          return 0;
        v11 = (char **)(a1 + 296);
        if ( !*(_BYTE *)(a1 + 776) || *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || **(_BYTE **)a1 != 73 )
          goto LABEL_12;
        sub_20D8690((char **)(a1 + 296), &v131);
        v36 = sub_20DCBE0(a1, 0);
        if ( !v36 )
          return 0;
        v37 = v131;
        v38 = sub_20CF970(a1 + 816, 32);
        v39 = *(_BYTE *)(v38 + 10);
        *(_WORD *)(v38 + 8) = 16429;
        *(_QWORD *)(v38 + 16) = v37;
        *(_QWORD *)(v38 + 24) = v36;
        *(_BYTE *)(v38 + 10) = v39 & 0xF0 | 5;
        *(_QWORD *)v38 = off_2BE77A0;
        v131 = v38;
        goto LABEL_12;
      case 'U':
        goto LABEL_21;
      case 'a':
        v21 = a1 + 816;
        *(_QWORD *)(v21 - 816) = v1 + 1;
        return sub_20D1380(v21, "signed char");
      case 'b':
        v20 = a1 + 816;
        *(_QWORD *)(v20 - 816) = v1 + 1;
        return sub_20D1380(v20, "bool");
      case 'c':
        v65 = a1 + 816;
        *(_QWORD *)(v65 - 816) = v1 + 1;
        return sub_20D1380(v65, "char");
      case 'd':
        v64 = a1 + 816;
        *(_QWORD *)(v64 - 816) = v1 + 1;
        return sub_20D1380(v64, "double");
      case 'e':
        v63 = a1 + 816;
        *(_QWORD *)(v63 - 816) = v1 + 1;
        return sub_20D1380(v63, "long double");
      case 'f':
        v62 = a1 + 816;
        *(_QWORD *)(v62 - 816) = v1 + 1;
        return sub_20D1380(v62, "float");
      case 'g':
        v61 = a1 + 816;
        *(_QWORD *)(v61 - 816) = v1 + 1;
        return sub_20D1380(v61, "__float128");
      case 'h':
        v60 = a1 + 816;
        *(_QWORD *)(v60 - 816) = v1 + 1;
        return sub_20D1380(v60, "unsigned char");
      case 'i':
        v59 = a1 + 816;
        *(_QWORD *)(v59 - 816) = v1 + 1;
        return sub_20D1380(v59, "int");
      case 'j':
        v58 = a1 + 816;
        *(_QWORD *)(v58 - 816) = v1 + 1;
        return sub_20D1380(v58, "unsigned int");
      case 'l':
        v57 = a1 + 816;
        *(_QWORD *)(v57 - 816) = v1 + 1;
        return sub_20D1380(v57, "long");
      case 'm':
        v56 = a1 + 816;
        *(_QWORD *)(v56 - 816) = v1 + 1;
        return sub_20D1380(v56, "unsigned long");
      case 'n':
        v55 = a1 + 816;
        *(_QWORD *)(v55 - 816) = v1 + 1;
        return sub_20D1380(v55, "__int128");
      case 'o':
        v54 = a1 + 816;
        *(_QWORD *)(v54 - 816) = v1 + 1;
        return sub_20D1380(v54, "unsigned __int128");
      case 's':
        v53 = a1 + 816;
        *(_QWORD *)(v53 - 816) = v1 + 1;
        return sub_20D1380(v53, "short");
      case 't':
        v52 = a1 + 816;
        *(_QWORD *)(v52 - 816) = v1 + 1;
        return sub_20D1380(v52, "unsigned short");
      case 'u':
        *(_QWORD *)a1 = v1 + 1;
        v132 = sub_20D0070((char **)a1);
        v133 = v18;
        if ( !v132 )
          return 0;
        v19 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v19 != 73 )
        {
          v5 = sub_20D12D0(a1 + 816, (__int64 *)&v132);
          v131 = v5;
          goto LABEL_4;
        }
        *(_QWORD *)a1 = v19 + 1;
        v115 = sub_20D8F30(a1);
        if ( !v115 )
          return 0;
        v116 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v116 != 69 )
          return 0;
        v117 = v132;
        *(_QWORD *)a1 = v116 + 1;
        v118 = v133;
        v5 = sub_20CF970(a1 + 816, 40);
        *(_WORD *)(v5 + 8) = 16391;
        v119 = *(_BYTE *)(v5 + 10);
        *(_QWORD *)(v5 + 16) = v117;
        *(_QWORD *)(v5 + 24) = v118;
        *(_QWORD *)(v5 + 32) = v115;
        *(_BYTE *)(v5 + 10) = v119 & 0xF0 | 5;
        *(_QWORD *)v5 = off_2BE69C0;
        v131 = v5;
        goto LABEL_4;
      case 'v':
        v17 = a1 + 816;
        *(_QWORD *)(v17 - 816) = v1 + 1;
        return sub_20D1380(v17, "void");
      case 'w':
        v44 = a1 + 816;
        *(_QWORD *)(v44 - 816) = v1 + 1;
        return sub_20D1380(v44, "wchar_t");
      case 'x':
        v43 = a1 + 816;
        *(_QWORD *)(v43 - 816) = v1 + 1;
        return sub_20D1380(v43, "long long");
      case 'y':
        v51 = a1 + 816;
        *(_QWORD *)(v51 - 816) = v1 + 1;
        return sub_20D1380(v51, "unsigned long long");
      case 'z':
        v50 = a1 + 816;
        *(_QWORD *)(v50 - 816) = v1 + 1;
        return sub_20D1380(v50, "...");
      default:
        goto LABEL_3;
    }
    v49 = v1[1];
    switch ( v49 )
    {
      case 'A':
        v94 = v1 + 3;
        if ( v4 == 2 )
          goto LABEL_167;
        v114 = v1[2];
        *(_QWORD *)a1 = v94;
        switch ( v114 )
        {
          case 'i':
            v5 = sub_20D1380(a1 + 816, "_Accum");
            break;
          case 'j':
            v5 = sub_20D1380(a1 + 816, "unsigned _Accum");
            break;
          case 'l':
            v5 = sub_20D1380(a1 + 816, "long _Accum");
            break;
          case 'm':
            v5 = sub_20D1380(a1 + 816, "unsigned long _Accum");
            break;
          case 's':
            v5 = sub_20D1380(a1 + 816, "short _Accum");
            break;
          case 't':
            v5 = sub_20D1380(a1 + 816, "unsigned short _Accum");
            break;
          default:
            return 0;
        }
        return v5;
      case 'B':
      case 'U':
        *(_QWORD *)a1 = v1 + 2;
        if ( v1 + 2 == v2 || (unsigned int)(v1[2] - 48) > 9 )
        {
          v109 = sub_20DA8A0(a1);
        }
        else
        {
          v132 = sub_20CEB80((char **)a1, 0);
          v133 = v108;
          v109 = sub_20D12D0(a1 + 816, (__int64 *)&v132);
        }
        if ( !v109 )
          return 0;
        v110 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v110 != 95 )
          return 0;
        *(_QWORD *)a1 = v110 + 1;
        v111 = sub_20CF970(a1 + 816, 32);
        v112 = *(_BYTE *)(v111 + 10);
        *(_QWORD *)(v111 + 16) = v109;
        *(_WORD *)(v111 + 8) = 16416;
        *(_BYTE *)(v111 + 10) = v112 & 0xF0 | 5;
        v113 = v49 == 66;
        v11 = (char **)(a1 + 296);
        *(_QWORD *)v111 = off_2BE6900;
        *(_BYTE *)(v111 + 24) = v113;
        v131 = v111;
        goto LABEL_12;
      case 'F':
        v102 = v1 + 2;
        *(_QWORD *)a1 = v102;
        v103 = j__strlen("16b");
        if ( sub_20D1BF0(v2 - v102, v102, v103, "16b") )
        {
          *(_QWORD *)a1 = &v102[v103];
          return sub_20D1380(a1 + 816, "std::bfloat16_t");
        }
        v132 = sub_20CEB80((char **)a1, 0);
        v133 = v104;
        v105 = sub_20D12D0(a1 + 816, (__int64 *)&v132);
        if ( v105 )
        {
          v106 = *(char **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v106 == 95 )
          {
            *(_QWORD *)a1 = v106 + 1;
            v5 = sub_20CF970(a1 + 816, 24);
            *(_WORD *)(v5 + 8) = 16415;
            v107 = *(_BYTE *)(v5 + 10);
            *(_QWORD *)(v5 + 16) = v105;
            *(_BYTE *)(v5 + 10) = v107 & 0xF0 | 5;
            *(_QWORD *)v5 = off_2BE72C0;
            return v5;
          }
        }
        return 0;
      case 'K':
      case 'k':
        v97 = " auto";
        if ( v49 != 107 )
          v97 = " decltype(auto)";
        v98 = j__strlen(v97);
        *(_QWORD *)a1 = v1 + 2;
        v99 = v98;
        v5 = sub_20DD4B0(a1, 0);
        if ( v5 )
        {
          v100 = sub_20CF970(a1 + 816, 40);
          v101 = *(_BYTE *)(v100 + 10);
          *(_QWORD *)(v100 + 16) = v5;
          v5 = v100;
          *(_WORD *)(v100 + 8) = 16389;
          *(_QWORD *)(v100 + 24) = v99;
          *(_QWORD *)(v100 + 32) = v97;
          *(_BYTE *)(v100 + 10) = v101 & 0xF0 | 5;
          *(_QWORD *)v100 = off_2BE6840;
        }
        return v5;
      case 'O':
      case 'o':
      case 'w':
      case 'x':
        goto LABEL_22;
      case 'R':
        v94 = v1 + 3;
        if ( v4 == 2 )
          goto LABEL_167;
        v96 = v1[2];
        *(_QWORD *)a1 = v94;
        switch ( v96 )
        {
          case 'i':
            v5 = sub_20D1380(a1 + 816, "_Fract");
            break;
          case 'j':
            v5 = sub_20D1380(a1 + 816, "unsigned _Fract");
            break;
          case 'l':
            v5 = sub_20D1380(a1 + 816, "long _Fract");
            break;
          case 'm':
            v5 = sub_20D1380(a1 + 816, "unsigned long _Fract");
            break;
          case 's':
            v5 = sub_20D1380(a1 + 816, "short _Fract");
            break;
          case 't':
            v5 = sub_20D1380(a1 + 816, "unsigned short _Fract");
            break;
          default:
            return 0;
        }
        return v5;
      case 'S':
        *(_QWORD *)a1 = v1 + 2;
        if ( v1 + 2 == v2 )
          return 0;
        v92 = v2 - (v1 + 2);
        if ( v1[2] != 68 || v92 <= 1 )
          return 0;
        v93 = v1[3];
        if ( v93 == 65 )
        {
          v94 = v1 + 5;
          if ( v92 != 2 )
          {
            v121 = v1[4];
            *(_QWORD *)a1 = v94;
            switch ( v121 )
            {
              case 'i':
                v5 = sub_20D1380(a1 + 816, "_Sat _Accum");
                break;
              case 'j':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned _Accum");
                break;
              case 'l':
                v5 = sub_20D1380(a1 + 816, "_Sat long _Accum");
                break;
              case 'm':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned long _Accum");
                break;
              case 's':
                v5 = sub_20D1380(a1 + 816, "_Sat short _Accum");
                break;
              case 't':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned short _Accum");
                break;
              default:
                return 0;
            }
            return v5;
          }
        }
        else
        {
          if ( v93 != 82 )
            return 0;
          v94 = v1 + 5;
          if ( v92 != 2 )
          {
            v95 = v1[4];
            *(_QWORD *)a1 = v94;
            switch ( v95 )
            {
              case 'i':
                v5 = sub_20D1380(a1 + 816, "_Sat _Fract");
                break;
              case 'j':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned _Fract");
                break;
              case 'l':
                v5 = sub_20D1380(a1 + 816, "_Sat long _Fract");
                break;
              case 'm':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned long _Fract");
                break;
              case 's':
                v5 = sub_20D1380(a1 + 816, "_Sat short _Fract");
                break;
              case 't':
                v5 = sub_20D1380(a1 + 816, "_Sat unsigned short _Fract");
                break;
              default:
                return 0;
            }
            return v5;
          }
        }
LABEL_167:
        *(_QWORD *)a1 = v94;
        return 0;
      case 'T':
      case 't':
        v5 = sub_20DC890();
        v131 = v5;
        goto LABEL_4;
      case 'a':
        v91 = a1 + 816;
        *(_QWORD *)(v91 - 816) = v1 + 2;
        return sub_20D1380(v91, "auto");
      case 'c':
        v90 = a1 + 816;
        *(_QWORD *)(v90 - 816) = v1 + 2;
        return sub_20D1380(v90, "decltype(auto)");
      case 'd':
        v89 = a1 + 816;
        *(_QWORD *)(v89 - 816) = v1 + 2;
        return sub_20D1380(v89, "decimal64");
      case 'e':
        v88 = a1 + 816;
        *(_QWORD *)(v88 - 816) = v1 + 2;
        return sub_20D1380(v88, "decimal128");
      case 'f':
        v87 = a1 + 816;
        *(_QWORD *)(v87 - 816) = v1 + 2;
        return sub_20D1380(v87, "decimal32");
      case 'h':
        v86 = a1 + 816;
        *(_QWORD *)(v86 - 816) = v1 + 2;
        return sub_20D1380(v86, "half");
      case 'i':
        v85 = a1 + 816;
        *(_QWORD *)(v85 - 816) = v1 + 2;
        return sub_20D1380(v85, "char32_t");
      case 'n':
        v84 = a1 + 816;
        *(_QWORD *)(v84 - 816) = v1 + 2;
        return sub_20D1380(v84, "std::nullptr_t");
      case 'p':
        *(_QWORD *)a1 = v1 + 2;
        v26 = sub_20D8F30(a1);
        if ( !v26 )
          return 0;
        v27 = sub_20CF970(a1 + 816, 24);
        v83 = *(_BYTE *)(v27 + 10);
        *(_WORD *)(v27 + 8) = 16426;
        *(_BYTE *)(v27 + 10) = v83 & 0xF0 | 5;
        v30 = (char *)&unk_2BE7670;
        goto LABEL_41;
      case 's':
        v82 = a1 + 816;
        *(_QWORD *)(v82 - 816) = v1 + 2;
        return sub_20D1380(v82, "char16_t");
      case 'u':
        v81 = a1 + 816;
        *(_QWORD *)(v81 - 816) = v1 + 2;
        return sub_20D1380(v81, "char8_t");
      case 'v':
        v75 = j__strlen("Dv");
        if ( !sub_20D1BF0(v2 - v1, v1, v75, "Dv") )
          return 0;
        v76 = &v1[v75];
        *(_QWORD *)a1 = v76;
        if ( v2 == v76 )
          goto LABEL_91;
        if ( (unsigned __int8)(*v76 - 49) <= 8u )
        {
          v132 = sub_20CEB80((char **)a1, 0);
          v133 = v124;
          v125 = sub_20D12D0(a1 + 816, (__int64 *)&v132);
          if ( !v125 )
            return 0;
          v126 = *(char **)a1;
          v127 = *(char **)(a1 + 8);
          if ( *(char **)a1 == v127 || *v126 != 95 )
            return 0;
          *(_QWORD *)a1 = v126 + 1;
          if ( v127 != v126 + 1 && v126[1] == 112 )
          {
            *(_QWORD *)a1 = v126 + 2;
            v72 = sub_20CF970(a1 + 816, 24);
            v130 = *(_BYTE *)(v72 + 10);
            *(_WORD *)(v72 + 8) = 16414;
            *(_QWORD *)(v72 + 16) = v125;
            *(_BYTE *)(v72 + 10) = v130 & 0xF0 | 5;
            *(_QWORD *)v72 = off_2BE7260;
          }
          else
          {
            v128 = sub_20D8F30(a1);
            if ( !v128 )
              return 0;
            v72 = sub_20CF970(a1 + 816, 32);
            v129 = *(_BYTE *)(v72 + 10);
            *(_WORD *)(v72 + 8) = 16413;
            *(_QWORD *)(v72 + 16) = v128;
            *(_QWORD *)(v72 + 24) = v125;
            *(_BYTE *)(v72 + 10) = v129 & 0xF0 | 5;
            *(_QWORD *)v72 = off_2BE7200;
          }
        }
        else
        {
          if ( *v76 != 95 )
          {
LABEL_91:
            v77 = sub_20DA8A0(a1);
            if ( v77 )
            {
              v78 = *(char **)a1;
              if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v78 == 95 )
              {
                *(_QWORD *)a1 = v78 + 1;
                v79 = sub_20D8F30(a1);
                if ( v79 )
                {
                  v72 = sub_20CF970(a1 + 816, 32);
                  v80 = *(_BYTE *)(v72 + 10);
                  *(_WORD *)(v72 + 8) = 16413;
                  *(_QWORD *)(v72 + 16) = v79;
                  *(_QWORD *)(v72 + 24) = v77;
                  *(_BYTE *)(v72 + 10) = v80 & 0xF0 | 5;
                  *(_QWORD *)v72 = off_2BE7200;
                  goto LABEL_86;
                }
              }
            }
            return 0;
          }
          *(_QWORD *)a1 = v76 + 1;
          v122 = sub_20D8F30(a1);
          if ( !v122 )
            return 0;
          v72 = sub_20CF970(a1 + 816, 32);
          v123 = *(_BYTE *)(v72 + 10);
          *(_WORD *)(v72 + 8) = 16413;
          *(_QWORD *)(v72 + 16) = v122;
          *(_QWORD *)(v72 + 24) = 0;
          *(_BYTE *)(v72 + 10) = v123 & 0xF0 | 5;
          *(_QWORD *)v72 = off_2BE7200;
        }
        goto LABEL_86;
      default:
        return 0;
    }
  }
LABEL_3:
  v131 = sub_20DDFC0(a1);
  v5 = v131;
LABEL_4:
  if ( !v5 )
    return v5;
LABEL_11:
  v11 = (char **)(a1 + 296);
LABEL_12:
  sub_20D8690(v11, &v131);
  return v131;
}
