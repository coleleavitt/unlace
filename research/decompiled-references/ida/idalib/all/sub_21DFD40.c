char *__fastcall sub_21DFD40(__int64 a1)
{
  char *v2; // rbp
  char *v3; // r12
  char v4; // cl
  unsigned __int64 v5; // r13
  char *v6; // r14
  char **v7; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  char v11; // dl
  unsigned __int64 v12; // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  __int64 v21; // r12
  char *v22; // rax
  void *v23; // rdi
  __int64 *v24; // rax
  char *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rax
  char *v42; // r13
  char v43; // r8
  int v44; // edx
  __int64 v45; // rdx
  char *v46; // rax
  char v47; // dl
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  unsigned __int64 v51; // rax
  char v52; // cl
  __int16 v53; // dx
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  void *v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // rdi
  char v63; // dl
  char v64; // r14
  __int64 v65; // rdi
  char v66; // si
  __int64 *v67; // rdi
  char *v68; // rax
  char v69; // dl
  __int64 *v70; // rax
  char *v71; // rax
  size_t v72; // r14
  char *v73; // rbp
  char *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rdi
  unsigned __int64 v85; // r12
  char v86; // al
  char *v87; // rdx
  char v88; // al
  char v89; // al
  const char *v90; // r12
  size_t v91; // rax
  __int64 v92; // r13
  char v93; // r11
  __int64 v94; // rax
  void *v95; // r15
  __int64 *v96; // rax
  void *v97; // rax
  char *v98; // rbp
  size_t v99; // r13
  __int64 v100; // rdx
  char *v101; // r12
  char *v102; // rax
  char v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  char *v106; // r15
  char *v107; // rax
  char v108; // r9
  __m128i si128; // xmm0
  bool v110; // r13
  char v111; // al
  unsigned __int64 v112; // rax
  char v113; // dl
  __int64 v114; // r15
  char *v115; // rax
  char v116; // al
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rax
  char v121; // r8
  unsigned __int64 v122; // rax
  char v123; // dl
  char *v124; // rdx
  char v125; // cl
  __int16 v126; // dx
  char v127; // dl
  char v128; // al
  unsigned __int64 v129; // rax
  char v130; // dl
  char v131; // r15
  __int64 v132; // rax
  void *v133; // r12
  __int64 *v134; // rax
  void *v135; // rax
  unsigned __int64 v136; // rax
  char v137; // dl
  __int64 v138; // rdx
  char *v139; // rax
  char *v140; // rcx
  char *v141; // rsi
  char v142; // r15
  char v143; // dl
  unsigned __int64 v144; // rax
  char v145; // dl
  unsigned __int64 v146; // rax
  char v147; // dl
  char v148; // [rsp+8h] [rbp-100h]
  __int64 v149; // [rsp+8h] [rbp-100h]
  char v150; // [rsp+8h] [rbp-100h]
  char v151; // [rsp+8h] [rbp-100h]
  __int64 v152; // [rsp+10h] [rbp-F8h]
  char v153; // [rsp+10h] [rbp-F8h]
  char v154; // [rsp+10h] [rbp-F8h]
  char v155; // [rsp+10h] [rbp-F8h]
  char v156; // [rsp+10h] [rbp-F8h]
  char v157; // [rsp+1Fh] [rbp-E9h]
  char *v158; // [rsp+28h] [rbp-E0h] BYREF
  char *v159; // [rsp+30h] [rbp-D8h] BYREF
  char *v160; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v162; // [rsp+48h] [rbp-C0h] BYREF
  char *v163; // [rsp+58h] [rbp-B0h]
  _BOOL4 v164; // [rsp+60h] [rbp-A8h]
  int v165; // [rsp+64h] [rbp-A4h]

  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 8);
  v158 = nullptr;
  if ( v2 == v3 )
  {
LABEL_3:
    v6 = (char *)sub_21D8A50(a1);
  }
  else
  {
    v4 = *v2;
    v5 = v3 - v2;
    switch ( *v2 )
    {
      case 'A':
        *(_QWORD *)a1 = v2 + 1;
        if ( v3 == v2 + 1 )
          goto LABEL_210;
        v44 = v2[1];
        if ( (unsigned int)(v44 - 48) > 9 )
        {
          if ( (_BYTE)v44 == 95 )
          {
            v42 = nullptr;
            *(_QWORD *)a1 = v2 + 2;
            goto LABEL_216;
          }
LABEL_210:
          v42 = sub_21D94E0(a1);
          if ( !v42 )
            return nullptr;
        }
        else
        {
          ptr = (void *)sub_21CFC00((char **)a1, 0);
          v162.m128i_i64[0] = v45;
          v42 = sub_21D5030(a1 + 808, (__int64 *)&ptr);
          if ( !v42 )
            return nullptr;
        }
        v46 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v46 != 95 )
          return nullptr;
        *(_QWORD *)a1 = v46 + 1;
LABEL_216:
        v120 = sub_21DFD40(a1);
        v40 = v120;
        if ( !v120 )
          return nullptr;
        v121 = *(_BYTE *)(a1 + 937);
        v162.m128i_i64[0] = 0x2000000000LL;
        ptr = &v162.m128i_u64[1];
        v156 = v121;
        sub_21D05E0((__int64)&ptr, 0xFu, v120, (unsigned __int64)v42);
        v149 = a1 + 904;
        v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
        if ( v6 )
          goto LABEL_31;
        if ( v156 )
        {
          v122 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
          v123 = *(_BYTE *)(v122 + 18);
          *(_QWORD *)v122 = 0;
          v6 = (char *)(v122 + 8);
          *(_WORD *)(v122 + 16) = 15;
          *(_BYTE *)(v122 + 18) = v123 & 0xF0 | 4;
          v124 = (char *)&unk_2BE6C50;
LABEL_220:
          *(_QWORD *)(v122 + 24) = v40;
          *(_QWORD *)(v122 + 8) = v124 + 16;
          *(_QWORD *)(v122 + 32) = v42;
          sub_2223210(v149, v122, v160, off_2BE9FD0);
        }
        goto LABEL_60;
      case 'C':
        *(_QWORD *)a1 = v2 + 1;
        v6 = (char *)sub_21DFD40(a1);
        v160 = v6;
        if ( !v6 )
          return v6;
        v6 = (char *)sub_21D43C0((__int64 *)(a1 + 808), *(_BYTE *)(a1 + 937), (__int64 *)&v160, " complex");
        if ( !v47 )
          goto LABEL_71;
        goto LABEL_62;
      case 'D':
        v6 = nullptr;
        if ( v5 == 1 )
          return v6;
        v64 = v2[1];
        switch ( v64 )
        {
          case 'A':
            v87 = v2 + 3;
            if ( v5 == 2 )
              goto LABEL_225;
            v111 = v2[2];
            *(_QWORD *)a1 = v87;
            switch ( v111 )
            {
              case 'i':
                v6 = (char *)sub_21D6170(a1 + 808, "_Accum");
                break;
              case 'j':
                v6 = (char *)sub_21D5650(a1 + 808, "unsigned _Accum");
                break;
              case 'l':
                v6 = (char *)sub_21D62C0(a1 + 808, "long _Accum");
                break;
              case 'm':
                v6 = (char *)sub_21D6330(a1 + 808, "unsigned long _Accum");
                break;
              case 's':
                v6 = (char *)sub_21D6100(a1 + 808, "short _Accum");
                break;
              case 't':
                v6 = (char *)sub_21D58A0(a1 + 808, "unsigned short _Accum");
                break;
              default:
                return nullptr;
            }
            return v6;
          case 'B':
          case 'U':
            *(_QWORD *)a1 = v2 + 2;
            if ( v2 + 2 == v3 || (unsigned int)(v2[2] - 48) > 9 )
            {
              v106 = sub_21D94E0(a1);
            }
            else
            {
              ptr = (void *)sub_21CFC00((char **)a1, 0);
              v162.m128i_i64[0] = v105;
              v106 = sub_21D5030(a1 + 808, (__int64 *)&ptr);
            }
            if ( !v106 )
              return nullptr;
            v107 = *(char **)a1;
            if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v107 != 95 )
              return nullptr;
            v108 = *(_BYTE *)(a1 + 937);
            si128 = _mm_load_si128(xmmword_23AB8B0);
            v110 = v64 == 66;
            *(_QWORD *)a1 = v107 + 1;
            v155 = v108;
            ptr = &v162.m128i_u64[1];
            v163 = v106;
            v164 = v64 == 66;
            v165 = 0;
            v162 = si128;
            v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
            if ( v6 )
              goto LABEL_168;
            if ( v155 )
            {
              v144 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
              v145 = *(_BYTE *)(v144 + 18);
              *(_QWORD *)(v144 + 24) = v106;
              v6 = (char *)(v144 + 8);
              *(_QWORD *)v144 = 0;
              *(_WORD *)(v144 + 16) = 16416;
              *(_BYTE *)(v144 + 32) = v110;
              *(_BYTE *)(v144 + 18) = v145 & 0xF0 | 5;
              *(_QWORD *)(v144 + 8) = off_2BE6900;
              sub_2223210(a1 + 904, v144, v160, off_2BE9FD0);
            }
            goto LABEL_60;
          case 'F':
            v98 = v2 + 2;
            *(_QWORD *)a1 = v98;
            v99 = j__strlen("16b");
            if ( sub_20D1BF0(v3 - v98, v98, v99, "16b") )
            {
              *(_QWORD *)a1 = &v98[v99];
              return (char *)sub_21D5650(a1 + 808, "std::bfloat16_t");
            }
            ptr = (void *)sub_21CFC00((char **)a1, 0);
            v162.m128i_i64[0] = v100;
            v101 = sub_21D5030(a1 + 808, (__int64 *)&ptr);
            if ( !v101 )
              return nullptr;
            v102 = *(char **)a1;
            if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v102 != 95 )
              return nullptr;
            *(_QWORD *)a1 = v102 + 1;
            v103 = *(_BYTE *)(a1 + 937);
            ptr = &v162.m128i_u64[1];
            v154 = v103;
            v162.m128i_i64[0] = 0x2000000000LL;
            sub_21D0240((__int64)&ptr, 0x1Fu, (unsigned __int64)v101);
            v104 = sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
            v6 = (char *)v104;
            if ( !v104 )
            {
              if ( v154 )
              {
                v146 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
                v147 = *(_BYTE *)(v146 + 18);
                *(_QWORD *)(v146 + 24) = v101;
                v6 = (char *)(v146 + 8);
                *(_QWORD *)v146 = 0;
                *(_WORD *)(v146 + 16) = 16415;
                *(_BYTE *)(v146 + 18) = v147 & 0xF0 | 5;
                *(_QWORD *)(v146 + 8) = off_2BE72C0;
                sub_2223210(a1 + 904, v146, v160, off_2BE9FD0);
              }
              if ( ptr != &v162.m128i_u64[1] )
                free(ptr);
              goto LABEL_188;
            }
            v6 = (char *)(v104 + 8);
            if ( ptr != &v162.m128i_u64[1] )
              free(ptr);
            if ( !v6 )
              return v6;
            ptr = v6;
            v70 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
            if ( v70 )
              goto LABEL_103;
            goto LABEL_105;
          case 'K':
          case 'k':
            v90 = " auto";
            if ( v64 != 107 )
              v90 = " decltype(auto)";
            v91 = j__strlen(v90);
            *(_QWORD *)a1 = v2 + 2;
            v92 = v91;
            v6 = (char *)sub_21D8010(a1, 0);
            if ( v6 )
            {
              v93 = *(_BYTE *)(a1 + 937);
              ptr = &v162.m128i_u64[1];
              v157 = v93;
              v162.m128i_i64[0] = 0x2000000000LL;
              sub_21D0350((__int64)&ptr, 5u, (unsigned __int64)v6, v92, (__int64)v90);
              v94 = sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
              v95 = (void *)v94;
              if ( v94 )
              {
                v95 = (void *)(v94 + 8);
                if ( ptr != &v162.m128i_u64[1] )
                  free(ptr);
                if ( v95 )
                {
                  ptr = v95;
                  v96 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
                  if ( v96 )
                  {
                    v97 = (void *)v96[1];
                    if ( v97 )
                      v95 = v97;
                  }
                  if ( *(void **)(a1 + 928) == v95 )
                    *(_BYTE *)(a1 + 936) = 1;
                }
              }
              else
              {
                if ( v157 )
                {
                  v129 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
                  v130 = *(_BYTE *)(v129 + 18);
                  *(_QWORD *)(v129 + 24) = v6;
                  v95 = (void *)(v129 + 8);
                  *(_QWORD *)v129 = 0;
                  *(_WORD *)(v129 + 16) = 16389;
                  *(_QWORD *)(v129 + 32) = v92;
                  *(_BYTE *)(v129 + 18) = v130 & 0xF0 | 5;
                  *(_QWORD *)(v129 + 40) = v90;
                  *(_QWORD *)(v129 + 8) = off_2BE6840;
                  sub_2223210(a1 + 904, v129, v160, off_2BE9FD0);
                }
                if ( ptr != &v162.m128i_u64[1] )
                  free(ptr);
                *(_QWORD *)(a1 + 920) = v95;
              }
              return (char *)v95;
            }
            return v6;
          case 'O':
          case 'o':
          case 'w':
          case 'x':
            goto LABEL_18;
          case 'R':
            v87 = v2 + 3;
            if ( v5 == 2 )
              goto LABEL_225;
            v89 = v2[2];
            *(_QWORD *)a1 = v87;
            switch ( v89 )
            {
              case 'i':
                v6 = (char *)sub_21D6170(a1 + 808, "_Fract");
                break;
              case 'j':
                v6 = (char *)sub_21D5650(a1 + 808, "unsigned _Fract");
                break;
              case 'l':
                v6 = (char *)sub_21D62C0(a1 + 808, "long _Fract");
                break;
              case 'm':
                v6 = (char *)sub_21D6330(a1 + 808, "unsigned long _Fract");
                break;
              case 's':
                v6 = (char *)sub_21D6100(a1 + 808, "short _Fract");
                break;
              case 't':
                v6 = (char *)sub_21D58A0(a1 + 808, "unsigned short _Fract");
                break;
              default:
                return nullptr;
            }
            return v6;
          case 'S':
            *(_QWORD *)a1 = v2 + 2;
            if ( v2 + 2 == v3 )
              return nullptr;
            v85 = v3 - (v2 + 2);
            if ( v2[2] != 68 || v85 <= 1 )
              return nullptr;
            v86 = v2[3];
            if ( v86 != 65 )
            {
              if ( v86 != 82 )
                return nullptr;
              v87 = v2 + 5;
              if ( v85 != 2 )
              {
                v88 = v2[4];
                *(_QWORD *)a1 = v87;
                switch ( v88 )
                {
                  case 'i':
                    v6 = (char *)sub_21D62C0(a1 + 808, "_Sat _Fract");
                    break;
                  case 'j':
                    v6 = (char *)sub_21D6330(a1 + 808, "_Sat unsigned _Fract");
                    break;
                  case 'l':
                    v6 = (char *)sub_21D63A0(a1 + 808, "_Sat long _Fract");
                    break;
                  case 'm':
                    v6 = (char *)sub_21D6410(a1 + 808, "_Sat unsigned long _Fract");
                    break;
                  case 's':
                    v6 = (char *)sub_21D61E0(a1 + 808, "_Sat short _Fract");
                    break;
                  case 't':
                    v6 = (char *)sub_21D6250(a1 + 808, "_Sat unsigned short _Fract");
                    break;
                  default:
                    return nullptr;
                }
                return v6;
              }
LABEL_225:
              *(_QWORD *)a1 = v87;
              return nullptr;
            }
            v87 = v2 + 5;
            if ( v85 == 2 )
              goto LABEL_225;
            v128 = v2[4];
            *(_QWORD *)a1 = v87;
            switch ( v128 )
            {
              case 'i':
                v6 = (char *)sub_21D62C0(a1 + 808, "_Sat _Accum");
                break;
              case 'j':
                v6 = (char *)sub_21D6330(a1 + 808, "_Sat unsigned _Accum");
                break;
              case 'l':
                v6 = (char *)sub_21D63A0(a1 + 808, "_Sat long _Accum");
                break;
              case 'm':
                v6 = (char *)sub_21D6410(a1 + 808, "_Sat unsigned long _Accum");
                break;
              case 's':
                v6 = (char *)sub_21D61E0(a1 + 808, "_Sat short _Accum");
                break;
              case 't':
                v6 = (char *)sub_21D6250(a1 + 808, "_Sat unsigned short _Accum");
                break;
              default:
                return nullptr;
            }
            return v6;
          case 'T':
          case 't':
            v6 = sub_21DC350(a1);
            v158 = v6;
            goto LABEL_5;
          case 'a':
            v84 = a1 + 808;
            *(_QWORD *)(v84 - 808) = v2 + 2;
            return (char *)sub_21D51C0(v84, "auto");
          case 'c':
            v83 = a1 + 808;
            *(_QWORD *)(v83 - 808) = v2 + 2;
            return (char *)sub_21D5C20(v83, "decltype(auto)");
          case 'd':
            v82 = a1 + 808;
            *(_QWORD *)(v82 - 808) = v2 + 2;
            return (char *)sub_21D6090(v82, "decimal64");
          case 'e':
            v81 = a1 + 808;
            *(_QWORD *)(v81 - 808) = v2 + 2;
            return (char *)sub_21D6020(v81, "decimal128");
          case 'f':
            v80 = a1 + 808;
            *(_QWORD *)(v80 - 808) = v2 + 2;
            return (char *)sub_21D6090(v80, "decimal32");
          case 'h':
            v79 = a1 + 808;
            *(_QWORD *)(v79 - 808) = v2 + 2;
            return (char *)sub_21D51C0(v79, "half");
          case 'i':
            v78 = a1 + 808;
            *(_QWORD *)(v78 - 808) = v2 + 2;
            return (char *)sub_21D6480(v78, "char32_t");
          case 'n':
            v77 = a1 + 808;
            *(_QWORD *)(v77 - 808) = v2 + 2;
            return (char *)sub_21D5C20(v77, "std::nullptr_t");
          case 'p':
            *(_QWORD *)a1 = v2 + 2;
            v6 = (char *)sub_21DFD40(a1);
            ptr = v6;
            if ( !v6 )
              return v6;
            v6 = (char *)sub_21D56C0(a1 + 808, (unsigned __int64 *)&ptr);
            v158 = v6;
            goto LABEL_5;
          case 's':
            v76 = a1 + 808;
            *(_QWORD *)(v76 - 808) = v2 + 2;
            return (char *)sub_21D6480(v76, "char16_t");
          case 'u':
            v75 = a1 + 808;
            *(_QWORD *)(v75 - 808) = v2 + 2;
            return (char *)sub_21D55E0(v75, "char8_t");
          case 'v':
            v72 = j__strlen("Dv");
            if ( !sub_20D1BF0(v3 - v2, v2, v72, "Dv") )
              return nullptr;
            v73 = &v2[v72];
            *(_QWORD *)a1 = v73;
            if ( v3 == v73 )
              goto LABEL_111;
            if ( (unsigned __int8)(*v73 - 49) > 8u )
            {
              if ( *v73 != 95 )
              {
LABEL_111:
                v160 = sub_21D94E0(a1);
                if ( v160 )
                {
                  v74 = *(char **)a1;
                  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v74 == 95 )
                  {
                    *(_QWORD *)a1 = v74 + 1;
                    ptr = (void *)sub_21DFD40(a1);
                    if ( ptr )
                    {
                      v6 = (char *)sub_21D64F0(a1 + 808, (unsigned __int64 *)&ptr, (unsigned __int64 *)&v160);
                      goto LABEL_4;
                    }
                  }
                }
                return nullptr;
              }
              *(_QWORD *)a1 = v73 + 1;
              v6 = (char *)sub_21DFD40(a1);
              if ( !v6 )
                return v6;
              v131 = *(_BYTE *)(a1 + 937);
              ptr = &v162.m128i_u64[1];
              v162.m128i_i64[0] = 0x2000000000LL;
              sub_9B7040((__int64)&ptr, 29);
              sub_21CFFC0((__int64)&ptr);
              sub_9B7040((__int64)&ptr, (int)v6);
              sub_9B7040((__int64)&ptr, SHIDWORD(v6));
              sub_21CFFC0((__int64)&ptr);
              sub_21CFFC0((__int64)&ptr);
              v132 = sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
              v133 = (void *)v132;
              if ( !v132 )
              {
                if ( v131 )
                {
                  v136 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
                  v137 = *(_BYTE *)(v136 + 18);
                  *(_QWORD *)(v136 + 24) = v6;
                  v133 = (void *)(v136 + 8);
                  *(_QWORD *)v136 = 0;
                  *(_WORD *)(v136 + 16) = 16413;
                  *(_QWORD *)(v136 + 32) = 0;
                  *(_BYTE *)(v136 + 18) = v137 & 0xF0 | 5;
                  *(_QWORD *)(v136 + 8) = off_2BE7200;
                  sub_2223210(a1 + 904, v136, v160, off_2BE9FD0);
                }
                if ( ptr != &v162.m128i_u64[1] )
                  free(ptr);
                *(_QWORD *)(a1 + 920) = v133;
                goto LABEL_251;
              }
              v133 = (void *)(v132 + 8);
              if ( ptr != &v162.m128i_u64[1] )
                free(ptr);
              if ( v133 )
              {
                ptr = v133;
                v134 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
                if ( v134 )
                {
                  v135 = (void *)v134[1];
                  if ( v135 )
                    v133 = v135;
                }
                if ( *(void **)(a1 + 928) == v133 )
                  *(_BYTE *)(a1 + 936) = 1;
LABEL_251:
                v6 = (char *)v133;
                goto LABEL_4;
              }
              return nullptr;
            }
            ptr = (void *)sub_21CFC00((char **)a1, 0);
            v162.m128i_i64[0] = v138;
            v139 = sub_21D5030(a1 + 808, (__int64 *)&ptr);
            v159 = v139;
            if ( !v139 )
              return nullptr;
            v140 = *(char **)a1;
            v141 = *(char **)(a1 + 8);
            if ( *(char **)a1 == v141 || *v140 != 95 )
              return nullptr;
            *(_QWORD *)a1 = v140 + 1;
            if ( v141 == v140 + 1 || v140[1] != 112 )
            {
              ptr = (void *)sub_21DFD40(a1);
              if ( !ptr )
                return nullptr;
              v6 = (char *)sub_21D64F0(a1 + 808, (unsigned __int64 *)&ptr, (unsigned __int64 *)&v159);
              goto LABEL_4;
            }
            *(_QWORD *)a1 = v140 + 2;
            v50 = a1 + 904;
            ptr = &v162.m128i_u64[1];
            v142 = *(_BYTE *)(a1 + 937);
            v162.m128i_i64[0] = 0x2000000000LL;
            sub_21D0240((__int64)&ptr, 0x1Eu, (unsigned __int64)v139);
            v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
            if ( v6 )
            {
LABEL_168:
              v23 = ptr;
              v6 += 8;
              if ( ptr != &v162.m128i_u64[1] )
                goto LABEL_32;
              goto LABEL_33;
            }
            if ( v142 )
            {
              v51 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
              v143 = *(_BYTE *)(v51 + 18);
              v6 = (char *)(v51 + 8);
              *(_QWORD *)v51 = 0;
              *(_WORD *)(v51 + 16) = 16414;
              *(_BYTE *)(v51 + 18) = v143 & 0xF0 | 5;
              *(_QWORD *)(v51 + 8) = off_2BE7260;
              *(_QWORD *)(v51 + 24) = v159;
LABEL_78:
              sub_2223210(v50, v51, v160, off_2BE9FD0);
            }
            break;
          default:
            return nullptr;
        }
        goto LABEL_60;
      case 'F':
        goto LABEL_18;
      case 'G':
        *(_QWORD *)a1 = v2 + 1;
        v6 = (char *)sub_21DFD40(a1);
        v160 = v6;
        if ( !v6 )
          return v6;
        v6 = (char *)sub_21D43C0((__int64 *)(a1 + 808), *(_BYTE *)(a1 + 937), (__int64 *)&v160, " imaginary");
        if ( v63 )
          goto LABEL_62;
LABEL_71:
        if ( !v6 )
          return v6;
        ptr = v6;
        v24 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
        if ( !v24 )
          goto LABEL_37;
        goto LABEL_35;
      case 'K':
      case 'V':
      case 'r':
        LOBYTE(v9) = v4 == 114;
        v10 = v4 == 114;
        if ( v10 >= v5 )
          goto LABEL_17;
        v11 = v2[v10];
        v9 = (unsigned __int8)v9;
        if ( v11 != 86 )
          goto LABEL_11;
        v9 = (unsigned __int8)v9 + 1;
        if ( v9 >= v5 )
          goto LABEL_17;
        v11 = v2[v9];
LABEL_11:
        if ( v11 != 75 )
          goto LABEL_12;
        if ( ++v9 >= v5 )
          goto LABEL_17;
        v11 = v2[v9];
LABEL_12:
        if ( v11 == 70
          || v11 == 68
          && (v12 = v9 + 1, v5 > v12)
          && ((v13 = v2[v12], (v13 & 0xDF) == 0x4F) || (unsigned __int8)(v13 - 119) <= 1u) )
        {
LABEL_18:
          v6 = (char *)sub_21E3320(a1);
          v158 = v6;
        }
        else
        {
LABEL_17:
          v6 = (char *)sub_21DF820(a1);
          v158 = v6;
        }
        goto LABEL_5;
      case 'M':
        *(_QWORD *)a1 = v2 + 1;
        v40 = sub_21DFD40(a1);
        if ( !v40 )
          return nullptr;
        v41 = sub_21DFD40(a1);
        v42 = (char *)v41;
        if ( !v41 )
          return nullptr;
        v43 = *(_BYTE *)(a1 + 937);
        v162.m128i_i64[0] = 0x2000000000LL;
        v153 = v43;
        ptr = &v162.m128i_u64[1];
        sub_21D05E0((__int64)&ptr, 0xEu, v40, v41);
        v149 = a1 + 904;
        v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
        if ( v6 )
          goto LABEL_31;
        if ( !v153 )
          goto LABEL_60;
        v122 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v125 = v42[9];
        v126 = *(_WORD *)(v122 + 16);
        *(_QWORD *)v122 = 0;
        v6 = (char *)(v122 + 8);
        *(_WORD *)(v122 + 16) = v126 & 0xC000 | 0xE;
        *(_BYTE *)(v122 + 17) = v125 & 0xC0 | *(_BYTE *)(v122 + 17) & 0x3F;
        *(_BYTE *)(v122 + 18) = *(_BYTE *)(v122 + 18) & 0xF0 | 5;
        v124 = (char *)&unk_2BE6BF0;
        goto LABEL_220;
      case 'O':
        *(_QWORD *)a1 = v2 + 1;
        v6 = (char *)sub_21DFD40(a1);
        ptr = v6;
        if ( !v6 )
          return v6;
        LODWORD(v160) = 1;
        goto LABEL_55;
      case 'P':
        *(_QWORD *)a1 = v2 + 1;
        v48 = sub_21DFD40(a1);
        v49 = v48;
        if ( !v48 )
          return nullptr;
        v50 = a1 + 904;
        v150 = *(_BYTE *)(a1 + 937);
        v162.m128i_i64[0] = 0x2000000000LL;
        ptr = &v162.m128i_u64[1];
        sub_21D0240((__int64)&ptr, 0xCu, v48);
        v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
        if ( v6 )
          goto LABEL_31;
        if ( !v150 )
          goto LABEL_60;
        v51 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v52 = *(_BYTE *)(v49 + 9);
        v53 = *(_WORD *)(v51 + 16);
        *(_QWORD *)v51 = 0;
        v6 = (char *)(v51 + 8);
        *(_QWORD *)(v51 + 24) = v49;
        *(_WORD *)(v51 + 16) = v53 & 0xC000 | 0xC;
        LOBYTE(v53) = *(_BYTE *)(v51 + 18);
        *(_BYTE *)(v51 + 17) = v52 & 0xC0;
        *(_BYTE *)(v51 + 18) = v53 & 0xF0 | 5;
        *(_QWORD *)(v51 + 8) = off_2BE6B40;
        goto LABEL_78;
      case 'R':
        *(_QWORD *)a1 = v2 + 1;
        v6 = (char *)sub_21DFD40(a1);
        ptr = v6;
        if ( !v6 )
          return v6;
        LODWORD(v160) = 0;
LABEL_55:
        v6 = (char *)sub_21D6680(a1 + 808, (__int64 *)&ptr, &v160);
        v158 = v6;
        goto LABEL_5;
      case 'S':
        if ( v5 != 1 && v2[1] == 116 )
          goto LABEL_3;
        LOBYTE(v160) = 0;
        v6 = sub_21D7EC0(a1, 0, &v160);
        v158 = v6;
        if ( !v6 )
          return v6;
        v17 = (unsigned __int8)v160;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && **(_BYTE **)a1 == 73 )
        {
          if ( (_BYTE)v160 )
          {
            if ( !*(_BYTE *)(a1 + 776) )
              return v6;
          }
          else
          {
            sub_20D8690((char **)(a1 + 296), (__int64 *)&v158);
          }
          v6 = (char *)sub_21DEC40(a1, nullptr, v17, v14, v15, v16);
          ptr = v6;
          if ( v6 )
          {
LABEL_89:
            v6 = (char *)sub_21D5E20(a1 + 808, (unsigned __int64 *)&v158, (unsigned __int64 *)&ptr);
            v158 = v6;
            goto LABEL_5;
          }
        }
        else if ( !(_BYTE)v160 )
        {
          goto LABEL_5;
        }
        return v6;
      case 'T':
        if ( v5 != 1 )
        {
          v54 = v2[1];
          if ( v54 == 115 || (v54 & 0xEF) == 0x65 )
            goto LABEL_3;
        }
        v158 = sub_21D5230(a1);
        if ( !v158 )
          return nullptr;
        v7 = (char **)(a1 + 296);
        if ( !*(_BYTE *)(a1 + 776) || *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || **(_BYTE **)a1 != 73 )
          goto LABEL_7;
        sub_20D8690(v7, (__int64 *)&v158);
        v6 = (char *)sub_21DEC40(a1, nullptr, v55, v56, v57, v58);
        ptr = v6;
        if ( v6 )
          goto LABEL_89;
        return v6;
      case 'U':
        goto LABEL_17;
      case 'a':
        v60 = a1 + 808;
        *(_QWORD *)(v60 - 808) = v2 + 1;
        return (char *)sub_21D62C0(v60, "signed char");
      case 'b':
        v59 = a1 + 808;
        *(_QWORD *)(v59 - 808) = v2 + 1;
        return (char *)sub_21D51C0(v59, "bool");
      case 'c':
        v39 = a1 + 808;
        *(_QWORD *)(v39 - 808) = v2 + 1;
        return (char *)sub_21D51C0(v39, "char");
      case 'd':
        v38 = a1 + 808;
        *(_QWORD *)(v38 - 808) = v2 + 1;
        return (char *)sub_21D6170(v38, "double");
      case 'e':
        v37 = a1 + 808;
        *(_QWORD *)(v37 - 808) = v2 + 1;
        return (char *)sub_21D62C0(v37, "long double");
      case 'f':
        v36 = a1 + 808;
        *(_QWORD *)(v36 - 808) = v2 + 1;
        return (char *)sub_21D5830(v36, "float");
      case 'g':
        v35 = a1 + 808;
        *(_QWORD *)(v35 - 808) = v2 + 1;
        return (char *)sub_21D6020(v35, "__float128");
      case 'h':
        v34 = a1 + 808;
        *(_QWORD *)(v34 - 808) = v2 + 1;
        return (char *)sub_21D5FB0(v34, "unsigned char");
      case 'i':
        v33 = a1 + 808;
        *(_QWORD *)(v33 - 808) = v2 + 1;
        return (char *)sub_21D4FC0(v33, "int");
      case 'j':
        v32 = a1 + 808;
        *(_QWORD *)(v32 - 808) = v2 + 1;
        return (char *)sub_21D6100(v32, "unsigned int");
      case 'l':
        v31 = a1 + 808;
        *(_QWORD *)(v31 - 808) = v2 + 1;
        return (char *)sub_21D51C0(v31, "long");
      case 'm':
        v30 = a1 + 808;
        *(_QWORD *)(v30 - 808) = v2 + 1;
        return (char *)sub_21D5FB0(v30, "unsigned long");
      case 'n':
        v29 = a1 + 808;
        *(_QWORD *)(v29 - 808) = v2 + 1;
        return (char *)sub_21D6480(v29, "__int128");
      case 'o':
        v28 = a1 + 808;
        *(_QWORD *)(v28 - 808) = v2 + 1;
        return (char *)sub_21D61E0(v28, "unsigned __int128");
      case 's':
        v27 = a1 + 808;
        *(_QWORD *)(v27 - 808) = v2 + 1;
        return (char *)sub_21D5830(v27, "short");
      case 't':
        v26 = a1 + 808;
        *(_QWORD *)(v26 - 808) = v2 + 1;
        return (char *)sub_21D5C20(v26, "unsigned short");
      case 'u':
        *(_QWORD *)a1 = v2 + 1;
        v20 = sub_21D0000((char **)a1);
        v21 = v19;
        if ( !v20 )
          return nullptr;
        v22 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v22 != 73 )
        {
          v148 = *(_BYTE *)(a1 + 937);
          v162 = _mm_load_si128((const __m128i *)&xmmword_23AB830);
          ptr = &v162.m128i_u64[1];
          sub_2222BB0(&ptr, v19, v20);
          v152 = a1 + 904;
          v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
          if ( v6 )
          {
LABEL_31:
            v23 = ptr;
            v6 += 8;
            if ( ptr == &v162.m128i_u64[1] )
              goto LABEL_33;
            goto LABEL_32;
          }
          if ( !v148 )
            goto LABEL_60;
          v112 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
          *(_WORD *)(v112 + 16) = 16392;
          v113 = *(_BYTE *)(v112 + 18);
          v6 = (char *)(v112 + 8);
          *(_QWORD *)v112 = 0;
          *(_QWORD *)(v112 + 24) = v20;
          *(_QWORD *)(v112 + 32) = v21;
          *(_BYTE *)(v112 + 18) = v113 & 0xF0 | 5;
          *(_QWORD *)(v112 + 8) = off_2BE68A0;
          goto LABEL_195;
        }
        *(_QWORD *)a1 = v22 + 1;
        v114 = sub_21DFD40(a1);
        if ( !v114 )
          return nullptr;
        v115 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v115 != 69 )
          return nullptr;
        *(_QWORD *)a1 = v115 + 1;
        v116 = *(_BYTE *)(a1 + 937);
        ptr = &v162.m128i_u64[1];
        v162 = _mm_load_si128((const __m128i *)&xmmword_23AB8A0);
        v151 = v116;
        sub_2222BB0(&ptr, v21, v20);
        v117 = v162.m128i_u32[0];
        v118 = v162.m128i_u32[0] + 1LL;
        if ( v118 > v162.m128i_u32[1] )
        {
          sub_2237220(&ptr, &v162.m128i_u64[1], v118, 4);
          v117 = v162.m128i_u32[0];
        }
        *((_DWORD *)ptr + v117) = v114;
        ++v162.m128i_i32[0];
        v119 = v162.m128i_u32[0] + 1LL;
        if ( v119 > v162.m128i_u32[1] )
          sub_2237220(&ptr, &v162.m128i_u64[1], v119, 4);
        *((_DWORD *)ptr + v162.m128i_u32[0]) = HIDWORD(v114);
        ++v162.m128i_i32[0];
        v152 = a1 + 904;
        v6 = (char *)sub_2223360(a1 + 904, &ptr, &v160, off_2BE9FD0);
        if ( !v6 )
        {
          if ( !v151 )
            goto LABEL_60;
          v112 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
          v127 = *(_BYTE *)(v112 + 18);
          v6 = (char *)(v112 + 8);
          *(_WORD *)(v112 + 16) = 16391;
          *(_QWORD *)v112 = 0;
          *(_QWORD *)(v112 + 24) = v20;
          *(_QWORD *)(v112 + 32) = v21;
          *(_BYTE *)(v112 + 18) = v127 & 0xF0 | 5;
          *(_QWORD *)(v112 + 40) = v114;
          *(_QWORD *)(v112 + 8) = off_2BE69C0;
LABEL_195:
          sub_2223210(v152, v112, v160, off_2BE9FD0);
LABEL_60:
          if ( ptr != &v162.m128i_u64[1] )
            free(ptr);
LABEL_62:
          *(_QWORD *)(a1 + 920) = v6;
          break;
        }
        v23 = ptr;
        v6 += 8;
        if ( ptr != &v162.m128i_u64[1] )
LABEL_32:
          free(v23);
LABEL_33:
        if ( !v6 )
          return v6;
        ptr = v6;
        v24 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
        if ( v24 )
        {
LABEL_35:
          v25 = (char *)v24[1];
          if ( v25 )
            v6 = v25;
        }
LABEL_37:
        if ( *(char **)(a1 + 928) == v6 )
          *(_BYTE *)(a1 + 936) = 1;
        break;
      case 'v':
        v18 = a1 + 808;
        *(_QWORD *)(v18 - 808) = v2 + 1;
        return (char *)sub_21D51C0(v18, "void");
      case 'w':
        v62 = a1 + 808;
        *(_QWORD *)(v62 - 808) = v2 + 1;
        return (char *)sub_21D55E0(v62, "wchar_t");
      case 'x':
        v61 = a1 + 808;
        *(_QWORD *)(v61 - 808) = v2 + 1;
        return (char *)sub_21D6090(v61, "long long");
      case 'y':
        v66 = *(_BYTE *)(a1 + 937);
        v67 = (__int64 *)(a1 + 808);
        *(v67 - 101) = (__int64)(v2 + 1);
        v68 = (char *)sub_21D40E0(v67, v66, "unsigned long long");
        v6 = v68;
        if ( v69 )
        {
LABEL_188:
          *(_QWORD *)(a1 + 920) = v6;
        }
        else if ( v68 )
        {
          ptr = v68;
          v70 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
          if ( v70 )
          {
LABEL_103:
            v71 = (char *)v70[1];
            if ( v71 )
              v6 = v71;
          }
LABEL_105:
          if ( *(char **)(a1 + 928) == v6 )
            *(_BYTE *)(a1 + 936) = 1;
        }
        return v6;
      case 'z':
        v65 = a1 + 808;
        *(_QWORD *)(v65 - 808) = v2 + 1;
        return (char *)sub_21D4FC0(v65, "...");
      default:
        goto LABEL_3;
    }
  }
LABEL_4:
  v158 = v6;
LABEL_5:
  if ( v6 )
  {
    v7 = (char **)(a1 + 296);
LABEL_7:
    sub_20D8690(v7, (__int64 *)&v158);
    return v158;
  }
  return v6;
}
