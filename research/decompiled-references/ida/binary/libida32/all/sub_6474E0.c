__int64 __fastcall sub_6474E0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        char a4,
        char a5,
        char *a6,
        const char *a7,
        unsigned __int8 a8,
        __int64 a9)
{
  __int64 *v9; // r10
  char *v12; // rbx
  __int64 v13; // rax
  int v14; // r15d
  unsigned int v15; // r14d
  bool v17; // al
  __int16 v18; // cx
  unsigned __int64 *v19; // r14
  unsigned __int8 v20; // r8
  __int64 v21; // rdi
  char tinfo_attr; // al
  unsigned __int64 *v23; // r10
  char v24; // r13
  unsigned __int8 v25; // r8
  size_t v26; // r13
  __int64 v27; // rax
  char *v28; // r15
  void *v29; // r14
  _QWORD *v30; // rax
  const char *v31; // r14
  __int64 v32; // r13
  size_t v33; // rax
  size_t v34; // r9
  size_t v35; // r8
  char *v36; // rsi
  size_t v37; // rdx
  unsigned __int8 v38; // r8
  size_t v39; // rax
  size_t v40; // r9
  unsigned __int8 v41; // r8
  size_t v42; // r10
  size_t v43; // r11
  size_t v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // r8
  __int64 v49; // r15
  unsigned __int8 v50; // cl
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  unsigned int v54; // r14d
  const char *numbered_type_name; // rax
  const char *v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // rdx
  char *v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 v61; // r15
  char *v62; // rsi
  __int64 v63; // r14
  size_t v64; // rax
  size_t v65; // r15
  size_t v66; // r8
  char *v67; // rsi
  size_t v68; // rdx
  __int64 v69; // r12
  unsigned __int64 v70; // r14
  char *v71; // rsi
  unsigned __int64 v72; // r14
  __int64 v73; // r12
  char *v74; // rsi
  char v75; // r15
  __int64 *v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // r13
  __int64 v80; // r12
  __int64 v81; // rsi
  char v82; // al
  unsigned __int64 *v83; // r10
  char v84; // r13
  unsigned __int8 v85; // r8
  void *v86; // rdi
  char tinfo_property; // al
  char *v88; // rsi
  size_t v89; // r15
  __int64 v90; // r9
  __int64 v91; // rbx
  char *v92; // rax
  __int128 v93; // kr10_16
  char *v94; // rsi
  size_t v95; // r15
  __int64 v96; // rbx
  __int64 v97; // r9
  char *v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // r13
  int v101; // r15d
  __int64 v102; // r12
  size_t v103; // rax
  size_t v104; // r13
  size_t v105; // r14
  char *v106; // rsi
  size_t v107; // rdx
  __int64 v108; // rax
  size_t v109; // r13
  size_t v110; // r14
  __int64 v111; // r12
  __int64 v112; // rdx
  __int64 v113; // rsi
  unsigned __int64 v114; // r13
  __int64 v115; // r12
  __int64 v116; // rsi
  char v117; // r15
  __int64 *v118; // rax
  unsigned __int64 v119; // rbx
  __int64 v120; // rax
  unsigned __int64 v121; // r13
  size_t v122; // r8
  size_t v123; // r9
  char *v124; // rsi
  __int64 v125; // rdx
  size_t v126; // rdx
  void *v127; // rdi
  void *v128; // rdi
  __int64 v129; // rax
  int v130; // eax
  char *v131; // rsi
  __int64 v132; // rdx
  size_t v133; // rbx
  __int64 v134; // r13
  char *v135; // rax
  __int64 v136; // rbx
  size_t v137; // r15
  size_t v138; // r9
  unsigned __int64 v139; // rdx
  int v140; // eax
  unsigned __int64 *v141; // [rsp+0h] [rbp-110h]
  unsigned __int8 v142; // [rsp+0h] [rbp-110h]
  unsigned __int64 *v143; // [rsp+0h] [rbp-110h]
  __int64 *v144; // [rsp+8h] [rbp-108h]
  unsigned __int8 v145; // [rsp+8h] [rbp-108h]
  unsigned __int8 v146; // [rsp+8h] [rbp-108h]
  unsigned __int8 v147; // [rsp+8h] [rbp-108h]
  size_t v148; // [rsp+8h] [rbp-108h]
  __int64 *v150; // [rsp+10h] [rbp-100h]
  __int64 *v151; // [rsp+10h] [rbp-100h]
  unsigned __int8 v152; // [rsp+10h] [rbp-100h]
  int v153[2]; // [rsp+18h] [rbp-F8h]
  int v155[2]; // [rsp+18h] [rbp-F8h]
  int v157[2]; // [rsp+18h] [rbp-F8h]
  unsigned __int8 v158; // [rsp+18h] [rbp-F8h]
  unsigned __int8 v159; // [rsp+18h] [rbp-F8h]
  int v160[2]; // [rsp+18h] [rbp-F8h]
  int v161[2]; // [rsp+18h] [rbp-F8h]
  int v162[2]; // [rsp+18h] [rbp-F8h]
  char v163; // [rsp+20h] [rbp-F0h]
  size_t v164; // [rsp+20h] [rbp-F0h]
  size_t v165; // [rsp+20h] [rbp-F0h]
  size_t v166; // [rsp+20h] [rbp-F0h]
  size_t v167; // [rsp+28h] [rbp-E8h]
  __int64 v168; // [rsp+28h] [rbp-E8h]
  __int64 v169; // [rsp+28h] [rbp-E8h]
  int v170; // [rsp+28h] [rbp-E8h]
  __int64 v171; // [rsp+30h] [rbp-E0h]
  unsigned __int64 *v172; // [rsp+30h] [rbp-E0h]
  unsigned __int8 v173; // [rsp+30h] [rbp-E0h]
  __int64 *v174; // [rsp+30h] [rbp-E0h]
  size_t v175; // [rsp+30h] [rbp-E0h]
  size_t v176; // [rsp+30h] [rbp-E0h]
  size_t v177; // [rsp+30h] [rbp-E0h]
  size_t v178; // [rsp+30h] [rbp-E0h]
  const char *v179; // [rsp+38h] [rbp-D8h]
  __int64 *v180; // [rsp+38h] [rbp-D8h]
  int v181; // [rsp+38h] [rbp-D8h]
  int v182; // [rsp+38h] [rbp-D8h]
  unsigned __int64 *v183; // [rsp+38h] [rbp-D8h]
  __int64 v184; // [rsp+38h] [rbp-D8h]
  __int64 v185; // [rsp+38h] [rbp-D8h]
  int v186; // [rsp+38h] [rbp-D8h]
  __int64 *v187; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v188; // [rsp+38h] [rbp-D8h]
  unsigned __int8 v189; // [rsp+40h] [rbp-D0h]
  __int64 v190; // [rsp+40h] [rbp-D0h]
  unsigned __int8 v191; // [rsp+40h] [rbp-D0h]
  size_t v192; // [rsp+40h] [rbp-D0h]
  unsigned __int8 v193; // [rsp+40h] [rbp-D0h]
  char v194; // [rsp+40h] [rbp-D0h]
  __int64 *v195; // [rsp+40h] [rbp-D0h]
  unsigned __int64 *v196; // [rsp+40h] [rbp-D0h]
  unsigned __int64 *v197; // [rsp+40h] [rbp-D0h]
  size_t v198; // [rsp+40h] [rbp-D0h]
  size_t v199; // [rsp+40h] [rbp-D0h]
  unsigned __int64 v200; // [rsp+40h] [rbp-D0h]
  unsigned __int64 v201; // [rsp+40h] [rbp-D0h]
  __int64 v202; // [rsp+40h] [rbp-D0h]
  unsigned __int64 *v203; // [rsp+40h] [rbp-D0h]
  size_t v204; // [rsp+40h] [rbp-D0h]
  __int64 v206; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v207; // [rsp+58h] [rbp-B8h] BYREF
  char *s; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v209; // [rsp+68h] [rbp-A8h]
  void *ptr; // [rsp+80h] [rbp-90h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-88h]
  void *src; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v213; // [rsp+A8h] [rbp-68h]
  _BYTE v214[24]; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v215; // [rsp+D8h] [rbp-38h]

  v9 = a3;
  v12 = a6;
  v189 = a4;
  v179 = a7;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 1632LL);
  v215 = __readfsqword(0x28u);
  v171 = v13;
  if ( a6 && !*a6 )
    v12 = nullptr;
  v14 = a4 & 0xF;
  if ( (unsigned __int8)a4 <= 0x3Fu )
  {
    if ( !a5 )
      goto LABEL_13;
    if ( (unsigned __int8)v14 > 9u )
      goto LABEL_30;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v14 <= 0xCu )
  {
    if ( (unsigned __int8)v14 > 9u )
    {
      if ( !a5 )
        goto LABEL_13;
LABEL_30:
      if ( (_BYTE)v14 != 11 )
        goto LABEL_13;
      goto LABEL_31;
    }
    sub_6415D0(a2, a4, 1);
    v9 = a3;
    if ( !a5 )
    {
      s = nullptr;
      v19 = (unsigned __int64 *)a3;
      v206 = 0;
      v20 = a4 & 0x30;
      v209 = 0;
      goto LABEL_14;
    }
LABEL_10:
    *(_QWORD *)v153 = v9;
    v17 = sub_640990(v9);
    v9 = *(__int64 **)v153;
    if ( !v17 )
    {
      v18 = 6151;
LABEL_32:
      *(_QWORD *)v155 = v9;
      sub_644B90(v171, a2, (unsigned __int64 *)v9, v18);
      v9 = *(__int64 **)v155;
      s = nullptr;
      v20 = a4 & 0x30;
      v206 = 0;
      v19 = *(unsigned __int64 **)v155;
      v209 = 0;
LABEL_14:
      switch ( (char)v14 )
      {
        case 0:
          switch ( v20 )
          {
            case 0x20u:
              v28 = "_QWORD";
              break;
            case 0x30u:
              v28 = "_UNKNOWN";
              break;
            case 0x10u:
              v28 = "_WORD";
              break;
            default:
              goto LABEL_120;
          }
          goto LABEL_69;
        case 1:
          if ( v20 == 32 )
          {
            v28 = "_DWORD";
          }
          else if ( v20 > 0x20u )
          {
            if ( v20 != 48 )
              goto LABEL_120;
            v28 = "_OWORD";
          }
          else if ( v20 )
          {
            v28 = (char *)"_BYTE";
          }
          else
          {
            v28 = "void";
          }
          goto LABEL_69;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          switch ( v20 )
          {
            case 0x20u:
              v31 = "unsigned ";
              break;
            case 0x30u:
              if ( (_BYTE)v14 == 2 )
              {
                v28 = (char *)"char";
              }
              else
              {
                if ( (_BYTE)v14 != 7 )
                  goto LABEL_120;
                v28 = "__seg";
              }
              goto LABEL_69;
            case 0x10u:
              v31 = "signed ";
              break;
            default:
LABEL_43:
              switch ( v14 )
              {
                case 3:
                  v28 = "__int16";
                  break;
                case 4:
                  v28 = "__int32";
                  break;
                case 5:
                  v28 = "__int64";
                  break;
                case 6:
                  v28 = (char *)"__int128";
                  break;
                case 7:
                  v28 = "int";
                  break;
                default:
                  v28 = "__int8";
                  break;
              }
              v102 = v209;
              if ( !v28 )
              {
                if ( (unsigned __int64)v209 > 1 )
                  goto LABEL_199;
                goto LABEL_120;
              }
              v103 = strlen(v28);
              v104 = v103;
              v105 = v103;
              if ( v102 )
              {
                --v102;
                v105 = v103 + v102;
              }
              v106 = s;
              v107 = v105 + 1;
              if ( *((_QWORD *)&v209 + 1) < v105 + 1 )
              {
                s = (char *)qvector_reserve(&s, s, v107, 1);
                v107 = v105 + 1;
                v106 = s;
              }
              *(_QWORD *)&v209 = v107;
              v106[v105] = 0;
              memmove(&s[v102], v28, v104);
              if ( (unsigned __int64)v209 <= 1 )
                goto LABEL_70;
LABEL_199:
              v28 = s;
              goto LABEL_69;
          }
          if ( v31 )
          {
            v32 = v209;
            v33 = strlen(v31);
            v34 = v33;
            v35 = v33;
            if ( v32 )
            {
              --v32;
              v35 = v33 + v32;
            }
            v36 = s;
            v37 = v35 + 1;
            if ( *((_QWORD *)&v209 + 1) < v35 + 1 )
            {
              v165 = v33;
              v176 = v35;
              v199 = v35 + 1;
              s = (char *)qvector_reserve(&s, s, v37, 1);
              v34 = v165;
              v36 = s;
              v35 = v176;
              v37 = v199;
            }
            *(_QWORD *)&v209 = v37;
            v36[v35] = 0;
            memmove(&s[v32], v31, v34);
          }
          goto LABEL_43;
        case 8:
          switch ( v20 )
          {
            case 0x20u:
              if ( (unsigned __int8)getinf_flag(3, 4) )
                v28 = "_BOOL8";
              else
                v28 = "_BOOL2";
              break;
            case 0x30u:
              v28 = "_BOOL4";
              break;
            case 0x10u:
              v28 = "_BOOL1";
              break;
            default:
              v28 = "bool";
              break;
          }
          goto LABEL_69;
        case 9:
          if ( v20 == 32 )
          {
            v28 = "long double";
          }
          else if ( v20 > 0x20u )
          {
            if ( v20 != 48 )
              goto LABEL_120;
            if ( (*(_BYTE *)(*(_QWORD *)a1 + 771LL) & 8) != 0 )
              v28 = "_TBYTE";
            else
              v28 = "short float";
          }
          else if ( v20 )
          {
            v28 = "double";
          }
          else
          {
            v28 = "float";
          }
          goto LABEL_69;
        case 10:
          goto LABEL_137;
        case 11:
          sub_6453E0(&src, a1, (__int64 *)&s, v19);
          v38 = (unsigned __int8)src;
          v28 = s;
          if ( ((unsigned __int8)src & 0xF) != 0xA )
            goto LABEL_66;
          if ( !v12 )
          {
            LODWORD(v12) = (_DWORD)s;
LABEL_65:
            v28 = (char *)&byte_22CD811;
LABEL_66:
            if ( !(unsigned __int8)sub_6474E0(
                                     a1,
                                     (_DWORD)a2,
                                     (unsigned int)&src,
                                     v38,
                                     0,
                                     (_DWORD)v12,
                                     (__int64)a7,
                                     a8,
                                     0) )
            {
              clear_tinfo_t(&src);
              goto LABEL_120;
            }
            if ( sub_640990((__int64 *)v19) )
            {
              tinfo_property = get_tinfo_property(*v19, 0);
              if ( tinfo_property )
                sub_641290((__int64)a2, tinfo_property, 1);
            }
            v12 = nullptr;
            clear_tinfo_t(&src);
            v179 = nullptr;
            goto LABEL_69;
          }
          v191 = (unsigned __int8)src;
          v39 = strlen(v12);
          v40 = v209;
          v41 = v191;
          v42 = v39;
          if ( (_QWORD)v209 )
          {
            v40 = v209 - 1;
            v43 = v39 + v209 - 1;
            v44 = v39 + v209;
            if ( *((_QWORD *)&v209 + 1) >= v39 + (unsigned __int64)v209 )
              goto LABEL_62;
          }
          else
          {
            v44 = v39 + 1;
            if ( *((_QWORD *)&v209 + 1) >= v39 + 1 )
            {
              *(_QWORD *)&v209 = v39 + 1;
              v28[v39] = 0;
LABEL_64:
              v193 = v41;
              memmove(s, v12, v42);
              LODWORD(v12) = (_DWORD)s;
              v38 = v193;
              goto LABEL_65;
            }
            v43 = v39;
          }
          v148 = v39;
          v152 = v191;
          v164 = v43;
          v175 = v40;
          v198 = v44;
          s = (char *)qvector_reserve(&s, v28, v44, 1);
          v42 = v148;
          v28 = s;
          v41 = v152;
          v43 = v164;
          v40 = v175;
          v44 = v198;
LABEL_62:
          *(_QWORD *)&v209 = v44;
          v28[v43] = 0;
          if ( v40 )
          {
            v173 = v41;
            v192 = v42;
            memmove(&s[v42], s, v40);
            v41 = v173;
            v42 = v192;
          }
          goto LABEL_64;
        case 12:
          v75 = 0;
          goto LABEL_126;
        case 13:
          v163 = v20;
          v47 = sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *v19);
          v48 = v163;
          v49 = v47;
          if ( !v47 )
            goto LABEL_120;
          if ( (*(_BYTE *)(v47 + 68) & 0x40) != 0 && (*(_DWORD *)(a1 + 32) & 0x22) == 2 )
          {
            if ( get_tinfo_property(*v19, 5) )
            {
              v50 = v189;
              if ( (*(_WORD *)(v49 + 68) & 0x40) != 0 )
                v50 = *(_WORD *)(v49 + 68) & 0x30 | 0xD;
              v189 = v50;
            }
            v48 = v189 & 0x30;
          }
          if ( v48 == 48 )
          {
            sub_644B90(v171, (__int64 *)&s, v19, 2055);
          }
          else
          {
            if ( !*(_QWORD *)(v49 + 32) )
            {
              v100 = *(_QWORD *)(a1 + 24);
              v101 = *(_DWORD *)(a1 + 36);
              *(_QWORD *)(a1 + 24) = a2;
              *(_DWORD *)(a1 + 36) = 0;
              if ( !(unsigned __int8)sub_64C150(a1, (int)v19, 0, 0, 0, 0, 0, 0, nullptr) )
                goto LABEL_120;
              *(_QWORD *)(a1 + 24) = v100;
              *(_DWORD *)(a1 + 36) = v101;
LABEL_118:
              if ( (_QWORD)v209 )
                goto LABEL_199;
              if ( haystack )
                goto LABEL_71;
              goto LABEL_120;
            }
            v194 = v48;
            sub_644B90(v171, (__int64 *)&s, v19, 2055);
            sub_642B80(a1, (__int64 *)&s, v194, (_BYTE *)v49);
          }
          v53 = *(_QWORD *)(v49 + 32);
          if ( (*(_BYTE *)(v49 + 68) & 8) != 0 )
          {
            v54 = *(_DWORD *)(v53 + 8);
            if ( *(_QWORD *)v53 )
            {
              numbered_type_name = (const char *)get_numbered_type_name(*(_QWORD *)v53, v54);
              v56 = numbered_type_name;
              if ( numbered_type_name )
              {
                if ( *numbered_type_name )
                {
LABEL_93:
                  v57 = v209;
                  v58 = 2;
                  if ( (_QWORD)v209 )
                  {
                    v58 = v209 + 1;
                    v57 = v209 - 1;
                  }
                  v59 = s;
                  if ( *((_QWORD *)&v209 + 1) < v58 )
                  {
                    v201 = v58;
                    s = (char *)qvector_reserve(&s, s, v58, 1);
                    v58 = v201;
                    v59 = s;
                  }
                  *(_QWORD *)&v209 = v58;
                  v60 = 2;
                  v59[v57] = 1;
                  s[v57 + 1] = 0;
                  v61 = v209;
                  if ( (_QWORD)v209 )
                  {
                    v60 = v209 + 1;
                    v61 = v209 - 1;
                  }
                  v62 = s;
                  if ( *((_QWORD *)&v209 + 1) < v60 )
                  {
                    v200 = v60;
                    s = (char *)qvector_reserve(&s, s, v60, 1);
                    v60 = v200;
                    v62 = s;
                  }
                  *(_QWORD *)&v209 = v60;
                  v62[v61] = 23;
                  s[v61 + 1] = 0;
                  if ( v54 )
                    tag_addr(&s, v54, 0);
                  if ( v56 )
                  {
                    v63 = v209;
                    v64 = strlen(v56);
                    v65 = v64;
                    v66 = v64;
                    if ( v63 )
                    {
                      --v63;
                      v66 = v64 + v63;
                    }
                    v67 = s;
                    v68 = v66 + 1;
                    if ( *((_QWORD *)&v209 + 1) < v66 + 1 )
                    {
                      v177 = v66;
                      v204 = v66 + 1;
                      s = (char *)qvector_reserve(&s, s, v68, 1);
                      v66 = v177;
                      v67 = s;
                      v68 = v204;
                    }
                    *(_QWORD *)&v209 = v68;
                    v67[v66] = 0;
                    memmove(&s[v63], v56, v65);
                  }
                  v69 = v209;
                  v70 = 2;
                  if ( (_QWORD)v209 )
                  {
                    v70 = v209 + 1;
                    v69 = v209 - 1;
                  }
                  v71 = s;
                  if ( *((_QWORD *)&v209 + 1) < v70 )
                  {
                    s = (char *)qvector_reserve(&s, s, v70, 1);
                    v71 = s;
                  }
                  *(_QWORD *)&v209 = v70;
                  v72 = 2;
                  v71[v69] = 2;
                  s[v69 + 1] = 0;
                  v73 = v209;
                  if ( (_QWORD)v209 )
                  {
                    v72 = v209 + 1;
                    v73 = v209 - 1;
                  }
                  v74 = s;
                  if ( *((_QWORD *)&v209 + 1) < v72 )
                  {
                    s = (char *)qvector_reserve(&s, s, v72, 1);
                    v74 = s;
                  }
                  *(_QWORD *)&v209 = v72;
                  v74[v73] = 23;
                  s[v73 + 1] = 0;
                  goto LABEL_118;
                }
              }
            }
            v56 = v214;
            qsnprintf((int)v214, 16, (int)&unk_22B618E, v54, v51, v52, (char)v141);
          }
          else
          {
            v56 = *(const char **)(v53 + 8);
            v54 = 0;
          }
          if ( !*v56 )
            goto LABEL_118;
          goto LABEL_93;
        default:
          goto LABEL_120;
      }
    }
LABEL_31:
    v18 = 6149;
    goto LABEL_32;
  }
  v15 = 0;
  if ( (unsigned __int8)(v14 - 14) <= 1u )
    return v15;
  sub_6415D0(a2, a4, 1);
  v9 = a3;
LABEL_13:
  s = nullptr;
  v19 = (unsigned __int64 *)v9;
  v206 = 0;
  v20 = a4 & 0x30;
  v209 = 0;
  if ( (*(_BYTE *)(a1 + 33) & 2) == 0 || (_BYTE)v14 != 10 )
    goto LABEL_14;
  v21 = *v9;
  v142 = a4 & 0x30;
  ptr = nullptr;
  v144 = v9;
  *(_OWORD *)n = 0;
  v207 = get_tinfo_property(v21, 9);
  src = nullptr;
  v213 = 0;
  src = (void *)qvector_reserve(&src, 0, 14, 1);
  *(_QWORD *)&v213 = 14;
  strcpy((char *)src, "__org_typedef");
  tinfo_attr = get_tinfo_attr(*v144, &src, &ptr, 0);
  v23 = (unsigned __int64 *)v144;
  v24 = tinfo_attr;
  v25 = v142;
  if ( src )
  {
    v143 = (unsigned __int64 *)v144;
    v145 = v25;
    *(_QWORD *)&v213 = 0;
    qfree(src);
    v23 = v143;
    v25 = v145;
  }
  if ( !v24 )
  {
    v141 = v23;
    v146 = v25;
    src = nullptr;
    v213 = 0;
    src = (void *)qvector_reserve(&src, 0, 13, 1);
    *(_QWORD *)&v213 = 13;
    strcpy((char *)src, "__org_arrdim");
    v82 = get_tinfo_attr(*v141, &src, &ptr, 0);
    v83 = v141;
    v84 = v82;
    v85 = v146;
    if ( src )
    {
      *(_QWORD *)&v213 = 0;
      qfree(src);
      v83 = v141;
      v85 = v146;
    }
    if ( v84 )
    {
      v147 = v85;
      *(_QWORD *)v161 = v83;
      copy_tinfo_t(&v206);
      if ( !(unsigned __int8)sub_6896D0(&v206, &v207, &ptr) )
      {
LABEL_261:
        clear_tinfo_t(&v207);
        if ( ptr )
        {
          n[0] = 0;
          qfree(ptr);
        }
        goto LABEL_120;
      }
      v19 = (unsigned __int64 *)&v206;
      v117 = v206;
      v189 = v206;
      clear_tinfo_t(&v207);
      v86 = ptr;
      v14 = v117 & 0xF;
      v9 = *(__int64 **)v161;
      v20 = v147;
      if ( !ptr )
        goto LABEL_14;
      goto LABEL_156;
    }
    v150 = (__int64 *)v83;
    v158 = v85;
    clear_tinfo_t(&v207);
    v86 = ptr;
    v9 = v150;
    v20 = v158;
    v19 = (unsigned __int64 *)v150;
    if ( ptr )
    {
LABEL_156:
      v151 = v9;
      v159 = v20;
      n[0] = 0;
      qfree(v86);
      v20 = v159;
      v9 = v151;
      goto LABEL_14;
    }
LABEL_137:
    v76 = (__int64 *)sub_646CA0((__int64 *)a1, (__int64 *)&s, v19);
    v9 = v76;
    if ( !v76 )
      goto LABEL_120;
    v189 = *v76;
    if ( (v189 & 0xF) != 0xC )
    {
      *(_QWORD *)v160 = v76;
      sub_644B90(v171, a2, v19, 2051);
      v9 = *(__int64 **)v160;
    }
    v75 = 1;
LABEL_126:
    if ( v12 )
    {
      if ( !*v12 )
        goto LABEL_130;
      *(_QWORD *)v157 = v9;
      sub_640FE0((__int64 *)&s, v12, 37);
    }
    else
    {
      *(_QWORD *)v157 = v9;
      sub_640C70((__int64 *)&s);
    }
    v9 = *(__int64 **)v157;
LABEL_130:
    if ( (v189 & 0x3F) == 1 )
    {
      if ( v189 > 0x3Fu )
        sub_6415D0(a2, v189, 1);
      if ( aVoid[1] )
        sub_640D90(a2, "void");
      v12 = s;
      goto LABEL_71;
    }
    if ( (v189 & 0xF) != 0xC )
    {
      v207 = 0;
      if ( (v189 & 0xF) != 0xB )
        goto LABEL_133;
      src = nullptr;
      v88 = s;
      v213 = 0;
      if ( (_QWORD)v209 )
      {
        v89 = v209 - 1;
        v90 = v209 + 4;
        v91 = v209 + 5;
        if ( *((_QWORD *)&v209 + 1) >= (unsigned __int64)(v209 + 5) )
          goto LABEL_161;
      }
      else
      {
        if ( *((_QWORD *)&v209 + 1) > 5u )
        {
          *(_QWORD *)&v209 = 6;
          s[5] = 0;
          goto LABEL_163;
        }
        v89 = 0;
        v91 = 6;
        v90 = 5;
      }
      v174 = v9;
      v185 = v90;
      s = (char *)qvector_reserve(&s, s, v91, 1);
      v9 = v174;
      v88 = s;
      v90 = v185;
LABEL_161:
      *(_QWORD *)&v209 = v91;
      v88[v90] = 0;
      if ( v89 )
      {
        v180 = v9;
        memmove(s + 5, s, v89);
        v9 = v180;
      }
LABEL_163:
      v92 = s;
      *(_DWORD *)s = 36178177;
      v92[4] = 9;
      if ( !a9 )
      {
LABEL_171:
        v181 = (int)v9;
        sub_641C10((__int64 *)&s, 41);
        v99 = v213;
        LODWORD(v9) = v181;
        if ( (unsigned __int64)v213 > 1 )
        {
          v136 = v209;
          v137 = v213 - 1;
          v138 = v213 - 1;
          if ( (_QWORD)v209 )
          {
            v136 = v209 - 1;
            v138 = v209 - 1 + v137;
            v99 = v209 - 1 + v213;
          }
          if ( *((_QWORD *)&v209 + 1) < v99 )
          {
            v170 = v181;
            v178 = v138;
            v188 = v99;
            s = (char *)qvector_reserve(&s, s, v99, 1);
            LODWORD(v9) = v170;
            v138 = v178;
            v99 = v188;
          }
          *(_QWORD *)&v209 = v99;
          v186 = (int)v9;
          s[v138] = 0;
          memcpy(&s[v136], src, v137);
          LODWORD(v9) = v186;
        }
        if ( src )
        {
          v182 = (int)v9;
          *(_QWORD *)&v213 = 0;
          qfree(src);
          LODWORD(v9) = v182;
        }
LABEL_133:
        if ( (unsigned __int8)sub_6474E0(a1, (_DWORD)a2, (_DWORD)v9, v189, 1, (_DWORD)s, 0, 0, a9) )
        {
          if ( a9 )
            *(_DWORD *)(a9 + 24) = 0;
          clear_tinfo_t(&v207);
          goto LABEL_75;
        }
        goto LABEL_179;
      }
      if ( *(_BYTE *)(a9 + 29) )
      {
        *(_DWORD *)(a9 + 24) = 0;
        *(_BYTE *)(a9 + 29) = 0;
        sub_6453E0(&ptr, a1, (__int64 *)&src, (unsigned __int64 *)v9);
        copy_tinfo_t(&v207);
        clear_tinfo_t(&ptr);
        if ( *(_BYTE *)(a9 + 30) )
        {
          sub_641E50((__int64 *)&s, *(_QWORD *)a9 + 40LL, *(_QWORD *)(a9 + 16), 2u);
          *(_BYTE *)(a9 + 30) = 0;
        }
        if ( !(unsigned __int8)sub_64A4E0(a1, &s, a9) )
        {
          if ( src )
          {
            *(_QWORD *)&v213 = 0;
            qfree(src);
          }
LABEL_179:
          clear_tinfo_t(&v207);
          goto LABEL_120;
        }
        goto LABEL_170;
      }
      v93 = v209;
      v94 = s;
      if ( (_QWORD)v209 )
      {
        v95 = v209 - 1;
        *(_DWORD *)(a9 + 24) = v209 - 2;
        v96 = v93 + 5;
        v97 = v93 + 4;
        if ( *((_QWORD *)&v93 + 1) >= (unsigned __int64)(v93 + 5) )
          goto LABEL_167;
      }
      else
      {
        *(_DWORD *)(a9 + 24) = -1;
        if ( *((_QWORD *)&v93 + 1) > 5u )
        {
          *(_QWORD *)&v209 = 6;
          v94[5] = 0;
LABEL_169:
          v98 = s;
          v196 = (unsigned __int64 *)v9;
          *(_DWORD *)s = 36178177;
          v98[4] = 9;
          sub_641C10((__int64 *)&s, 41);
          sub_6453E0(&ptr, a1, (__int64 *)&s, v196);
          copy_tinfo_t(&v207);
          clear_tinfo_t(&ptr);
LABEL_170:
          v9 = &v207;
          v189 = v207;
          goto LABEL_171;
        }
        v95 = 0;
        v96 = 6;
        v97 = 5;
      }
      v187 = v9;
      v202 = v97;
      s = (char *)qvector_reserve(&s, v94, v96, 1);
      v9 = v187;
      v94 = s;
      v97 = v202;
LABEL_167:
      *(_QWORD *)&v209 = v96;
      v94[v97] = 0;
      if ( v95 )
      {
        v195 = v9;
        memmove(s + 5, s, v95);
        v9 = v195;
      }
      goto LABEL_169;
    }
    v183 = (unsigned __int64 *)v9;
    sub_644B90(v171, a2, (unsigned __int64 *)v9, 2055);
    v118 = (__int64 *)sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *v183);
    if ( !v118 )
      goto LABEL_120;
    v184 = *v118;
    if ( a9 )
    {
      if ( *(_BYTE *)(a9 + 30) )
      {
        if ( *(_BYTE *)(a9 + 29) )
        {
          sub_641E50((__int64 *)&s, *(_QWORD *)a9 + 40LL, *(_QWORD *)(a9 + 16), 2u);
          *(_BYTE *)(a9 + 30) = 0;
          src = nullptr;
          v213 = 0;
          if ( !v75 )
          {
            if ( !*(_BYTE *)(a9 + 29) )
            {
LABEL_240:
              v119 = v209;
              if ( (_QWORD)v209 )
              {
                v120 = a9;
LABEL_242:
                v121 = *(int *)(v120 + 24);
                if ( (_DWORD)v121 )
                {
                  v122 = 0;
LABEL_244:
                  --v119;
                  goto LABEL_245;
                }
                v123 = v119 - 1;
                v119 = v123;
                v121 = v123;
LABEL_314:
                v124 = s;
                v125 = v123 + 1;
                if ( *((_QWORD *)&v209 + 1) >= v123 + 1 )
                {
                  *(_QWORD *)&v209 = v123 + 1;
                  v122 = 0;
                  s[v123] = 0;
LABEL_250:
                  memcpy(&s[v119], src, v122);
                  ++*(_DWORD *)(a1 + 40);
                  if ( (unsigned __int8)sub_64ACD0(a1, a2, v184, s, v189) )
                  {
                    if ( v75 )
                      sub_644B90(v171, a2, v19, 2051);
                    v127 = src;
                    --*(_DWORD *)(a1 + 40);
                    if ( v127 )
                    {
                      *(_QWORD *)&v213 = 0;
                      qfree(v127);
                    }
                    goto LABEL_75;
                  }
                  --*(_DWORD *)(a1 + 40);
                  goto LABEL_302;
                }
                v122 = 0;
                goto LABEL_317;
              }
LABEL_284:
              v130 = *(_DWORD *)(a9 + 24);
              if ( v130 )
              {
                v122 = 0;
LABEL_286:
                v119 = 0;
LABEL_287:
                v121 = v130;
                goto LABEL_288;
              }
LABEL_313:
              v119 = 0;
              v121 = 0;
              v123 = 0;
              goto LABEL_314;
            }
            goto LABEL_320;
          }
        }
        else
        {
          src = nullptr;
          v213 = 0;
          if ( !v75 )
            goto LABEL_240;
        }
      }
      else
      {
        src = nullptr;
        v213 = 0;
        if ( !v75 )
        {
          v120 = a9;
          if ( !*(_BYTE *)(a9 + 29) )
          {
            v119 = v209;
            if ( (_QWORD)v209 )
              goto LABEL_242;
            goto LABEL_284;
          }
          goto LABEL_320;
        }
      }
    }
    else
    {
      src = nullptr;
      v213 = 0;
      if ( !v75 )
      {
        if ( (_QWORD)v209 )
        {
          v123 = v209 - 1;
          v119 = v209 - 1;
          v121 = v209 - 1;
          goto LABEL_314;
        }
        goto LABEL_313;
      }
    }
    v131 = s;
    if ( (_QWORD)v209 )
    {
      v132 = v209 + 5;
      v133 = v209 - 1;
      v134 = v209 + 4;
      if ( *((_QWORD *)&v209 + 1) >= (unsigned __int64)(v209 + 5) )
        goto LABEL_292;
    }
    else
    {
      if ( *((_QWORD *)&v209 + 1) > 5u )
      {
        *(_QWORD *)&v209 = 6;
        s[5] = 0;
        goto LABEL_294;
      }
      v133 = 0;
      v132 = 6;
      v134 = 5;
    }
    v169 = v132;
    s = (char *)qvector_reserve(&s, s, v132, 1);
    v132 = v169;
    v131 = s;
LABEL_292:
    *(_QWORD *)&v209 = v132;
    v131[v134] = 0;
    if ( v133 )
      memmove(s + 5, s, v133);
LABEL_294:
    v135 = s;
    *(_DWORD *)s = 36178177;
    v135[4] = 9;
    if ( !a9 )
    {
      v121 = v209;
      if ( (_QWORD)v209 )
        v121 = v209 - 1;
      sub_641C10((__int64 *)&s, 41);
      v119 = v209;
      v122 = v213;
      goto LABEL_288;
    }
    if ( !*(_BYTE *)(a9 + 29) )
    {
      v121 = v209;
      if ( (_QWORD)v209 )
        v121 = v209 - 1;
      goto LABEL_298;
    }
LABEL_320:
    if ( !(unsigned __int8)sub_64A4E0(a1, &src, a9) )
    {
LABEL_302:
      if ( src )
      {
        *(_QWORD *)&v213 = 0;
        qfree(src);
      }
      goto LABEL_120;
    }
    v121 = v209;
    *(_BYTE *)(a9 + 29) = 0;
    v139 = v121;
    if ( v121 )
    {
      v119 = v121 - 1;
      if ( !v75 )
      {
        v122 = v213;
        --v121;
        v140 = *(_DWORD *)(a9 + 24);
        if ( v140 )
        {
          v119 = v139;
          v121 = v140;
          goto LABEL_244;
        }
LABEL_245:
        if ( v122 )
          v123 = --v122 + v119;
        else
          v123 = v119;
        v124 = s;
        v125 = v123 + 1;
        if ( *((_QWORD *)&v209 + 1) >= v123 + 1 )
        {
LABEL_248:
          *(_QWORD *)&v209 = v125;
          v124[v123] = 0;
          if ( v121 < v119 )
          {
            v167 = v122;
            v126 = v119 - v121;
            v119 = v121;
            memmove(&s[v121 + v122], &s[v121], v126);
            v122 = v167;
          }
          goto LABEL_250;
        }
LABEL_317:
        *(_QWORD *)v162 = v122;
        v166 = v123;
        v168 = v125;
        s = (char *)qvector_reserve(&s, v124, v125, 1);
        v122 = *(_QWORD *)v162;
        v124 = s;
        v123 = v166;
        v125 = v168;
        goto LABEL_248;
      }
      sub_641C10((__int64 *)&s, 41);
      --v121;
      v122 = v213;
      v119 = v209;
LABEL_299:
      v130 = *(_DWORD *)(a9 + 24);
      if ( v130 )
        goto LABEL_287;
LABEL_288:
      if ( v119 )
        goto LABEL_244;
      goto LABEL_245;
    }
    if ( !v75 )
    {
      v122 = v213;
      v119 = 0;
      v130 = *(_DWORD *)(a9 + 24);
      if ( !v130 )
        goto LABEL_245;
      goto LABEL_286;
    }
LABEL_298:
    sub_641C10((__int64 *)&s, 41);
    v119 = v209;
    v122 = v213;
    goto LABEL_299;
  }
  v26 = n[0];
  v27 = 0;
  v28 = nullptr;
  src = nullptr;
  v29 = ptr;
  v213 = 0;
  if ( n[0] )
  {
    v128 = nullptr;
    if ( n[0] != -1 )
    {
      v203 = v23;
      src = (void *)qvector_reserve(&src, 0, n[0] + 1, 1);
      v23 = v203;
      v128 = src;
    }
    v197 = v23;
    *(_QWORD *)&v213 = v26 + 1;
    memmove(v128, v29, v26);
    v23 = v197;
    *((_BYTE *)src + v26) = 0;
    v28 = (char *)src;
    v27 = *((_QWORD *)&v213 + 1);
    v26 = v213;
  }
  src = nullptr;
  v213 = 0;
  if ( s )
  {
    v172 = v23;
    v190 = v27;
    qfree(s);
    s = v28;
    *(_QWORD *)&v209 = v26;
    v23 = v172;
    *((_QWORD *)&v209 + 1) = v190;
    if ( src )
    {
      *(_QWORD *)&v213 = 0;
      qfree(src);
      v28 = s;
      v23 = v172;
    }
  }
  else
  {
    s = v28;
    *(_QWORD *)&v209 = v26;
    *((_QWORD *)&v209 + 1) = v27;
  }
  v30 = (_QWORD *)sub_51B8E0(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *v23);
  if ( !v30 )
    goto LABEL_261;
  if ( (unsigned __int8)*v30 > 0x3Fu )
    sub_6415D0(a2, *v30, 1);
  clear_tinfo_t(&v207);
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
LABEL_69:
  if ( v28 )
  {
LABEL_70:
    if ( *v28 )
    {
      if ( *(_BYTE *)tag_skipcodes(v28) != 91 )
      {
        v77 = sub_640910((__int64)a2);
        if ( (unsigned __int8)v77 > 0x2Cu || (v78 = 0x150100000001LL, !_bittest64(&v78, v77)) )
        {
          v114 = 2;
          v115 = a2[1];
          if ( v115 )
            v114 = v115-- + 1;
          v116 = *a2;
          if ( a2[2] < v114 )
          {
            v129 = qvector_reserve(a2, v116, v114, 1);
            *a2 = v129;
            v116 = v129;
          }
          a2[1] = v114;
          *(_BYTE *)(v116 + v115) = 32;
          *(_BYTE *)(*a2 + v115 + 1) = 0;
        }
      }
      if ( *v28 == 1 )
      {
        v109 = strlen(v28);
        v110 = v109;
        v111 = a2[1];
        if ( v111 )
        {
          --v111;
          v110 = v109 + v111;
        }
        v112 = v110 + 1;
        v113 = *a2;
        if ( a2[2] < v110 + 1 )
        {
          v113 = qvector_reserve(a2, v113, v112, 1);
          v112 = v110 + 1;
          *a2 = v113;
        }
        a2[1] = v112;
        *(_BYTE *)(v113 + v110) = 0;
        memmove((void *)(v111 + *a2), v28, v109);
      }
      else if ( *v28 )
      {
        sub_640FE0(a2, v28, 32);
      }
    }
LABEL_71:
    if ( v12 )
    {
      v45 = sub_640910((__int64)a2);
      if ( (unsigned __int8)v45 > 0x2Au || (v46 = 0x50100000000LL, !_bittest64(&v46, v45)) )
      {
        v79 = 2;
        v80 = a2[1];
        if ( v80 )
          v79 = v80-- + 1;
        v81 = *a2;
        if ( a2[2] < v79 )
        {
          v108 = qvector_reserve(a2, v81, v79, 1);
          *a2 = v108;
          v81 = v108;
        }
        a2[1] = v79;
        *(_BYTE *)(v81 + v80) = 32;
        *(_BYTE *)(*a2 + v80 + 1) = 0;
      }
      if ( !(unsigned __int8)sub_642340(a2, v12, v179, 37, a8 == 0 ? 4 : 12) )
        sub_640A40();
    }
LABEL_75:
    v15 = 1;
    goto LABEL_76;
  }
LABEL_120:
  v15 = 0;
LABEL_76:
  clear_tinfo_t(&v206);
  if ( s )
  {
    *(_QWORD *)&v209 = 0;
    qfree(s);
  }
  return v15;
}

