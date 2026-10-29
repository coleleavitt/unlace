__int64 __fastcall sub_D700A0(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned int v18; // r12d
  __m128i si128; // xmm4
  void *v20; // rdi
  unsigned int v21; // r12d
  int v22; // r13d
  __m128i v23; // xmm0
  __m128i v24; // xmm5
  char v25; // r13
  void *v26; // rdx
  char v27; // r8
  __int64 v28; // rdx
  void *v29; // rdx
  char v30; // r13
  void *v31; // rdi
  unsigned int v32; // ebx
  int v33; // r13d
  __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned int i; // ebp
  unsigned __int8 v37; // r12
  unsigned __int64 v38; // rdx
  int v40; // r14d
  unsigned int v41; // r13d
  int v42; // r15d
  int v43; // ebp
  __int16 v44; // ax
  __int16 v45; // dx
  signed int v46; // r14d
  unsigned int v47; // r13d
  int v48; // r15d
  signed int v49; // ebp
  int v50; // eax
  _BOOL4 v51; // edx
  int v52; // r13d
  unsigned int j; // ebp
  unsigned __int16 v54; // r12
  __int64 v55; // r15
  unsigned int v56; // r14d
  int v57; // r13d
  __int64 v58; // rbp
  __int64 v59; // rax
  _BOOL8 v60; // rdx
  unsigned int v61; // r13d
  unsigned int k; // ebp
  unsigned int v63; // r12d
  unsigned __int64 v64; // r13
  unsigned int m; // ebp
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // r15
  int v68; // eax
  unsigned int v69; // r13d
  int v70; // ebp
  int v71; // r15d
  int v72; // r14d
  int v73; // eax
  char v74; // dl
  __m128i v75; // xmm6
  char v76; // r13
  char v77; // r8
  __int64 v78; // rdx
  void *v79; // rdx
  char v80; // r13
  char v81; // bp
  __m128i v82; // xmm7
  int v83; // edi
  int v84; // r9d
  unsigned int v85; // edx
  bool v86; // al
  __int16 v87; // ax
  int v88; // edx
  int v89; // r9d
  bool v90; // si
  int v91; // edi
  bool v92; // al
  unsigned __int64 v93; // r9
  __int64 v94; // rdx
  bool v95; // al
  __int64 v96; // rdi
  unsigned __int64 v97; // rax
  unsigned int v98; // r9d
  int v99; // edx
  bool v100; // al
  int v101; // edi
  unsigned int v102; // eax
  __m128i v103; // xmm4
  unsigned int v104; // edx
  void *v105; // rax
  __m128i v106; // xmm3
  void *v107; // rcx
  __m128i v108; // xmm7
  __m128i v109; // xmm5
  __m128i v110; // xmm4
  __m128i v111; // xmm3
  void *v112; // rdi
  unsigned int v113; // eax
  int v114; // edi
  bool v115; // al
  __int64 v116; // rdi
  bool v117; // al
  int v118; // edx
  int v119; // eax
  bool v120; // r9
  int v121; // r9d
  bool v122; // si
  int v123; // edi
  unsigned __int64 v124; // rbp
  unsigned int v125; // r12d
  __int64 v126; // rdx
  int v127; // ebp
  unsigned int v128; // r12d
  __int64 v129; // rdx
  __int64 v130; // rbp
  unsigned int v131; // r12d
  __int64 v132; // rdx
  __int16 v133; // bp
  unsigned int v134; // r12d
  __int64 v135; // rdx
  char v136; // bp
  unsigned int v137; // r12d
  __int64 v138; // rdx
  __int64 v139; // rbp
  unsigned int v140; // r12d
  __int64 v141; // rdx
  int v142; // ebp
  unsigned int v143; // r12d
  __int64 v144; // rdx
  char v145; // bp
  unsigned int v146; // r12d
  __int64 v147; // rdx
  __int16 v148; // bp
  unsigned int v149; // r12d
  int v150; // r14d
  unsigned int v151; // r12d
  unsigned int v152; // r14d
  unsigned int v153; // r12d
  unsigned __int64 v154; // r14
  __int64 v155; // rdx
  int v156; // ebp
  __int64 v157; // rdx
  __int64 v158; // rbp
  unsigned int v159; // r12d
  int v160; // r14d
  __int64 v161; // rdx
  char v162; // bp
  __int64 v163; // rdx
  __int16 v164; // bp
  int v165; // [rsp+8h] [rbp-180h]
  unsigned int v166; // [rsp+10h] [rbp-178h]
  void *v169; // [rsp+30h] [rbp-158h]
  void *v170; // [rsp+30h] [rbp-158h]
  char v172; // [rsp+40h] [rbp-148h]
  void *v173; // [rsp+40h] [rbp-148h]
  char v174; // [rsp+40h] [rbp-148h]
  void *v175; // [rsp+40h] [rbp-148h]
  void *v176[2]; // [rsp+50h] [rbp-138h] BYREF
  __m128i v177; // [rsp+60h] [rbp-128h] BYREF
  __m128i v178; // [rsp+70h] [rbp-118h] BYREF
  __m128i v179; // [rsp+80h] [rbp-108h] BYREF
  void *dest[2]; // [rsp+90h] [rbp-F8h] BYREF
  void *v181[2]; // [rsp+A0h] [rbp-E8h] BYREF
  void *v182[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v183[2]; // [rsp+C0h] [rbp-C8h] BYREF
  void *v184[2]; // [rsp+D0h] [rbp-B8h] BYREF
  void *v185; // [rsp+E0h] [rbp-A8h] BYREF
  unsigned int v186; // [rsp+E8h] [rbp-A0h]
  char v187; // [rsp+ECh] [rbp-9Ch]
  _BYTE v188[24]; // [rsp+F0h] [rbp-98h] BYREF
  int v189; // [rsp+108h] [rbp-80h]
  __int64 v190; // [rsp+110h] [rbp-78h]
  int v191; // [rsp+118h] [rbp-70h]
  void *src; // [rsp+120h] [rbp-68h] BYREF
  unsigned int v193; // [rsp+128h] [rbp-60h]
  char v194; // [rsp+12Ch] [rbp-5Ch]

  v5 = a1[22];
  sub_DFDA20(v5, 48);
  sub_DFF520(v188);
  sub_DFDA50(v5, 48);
  v6 = sub_CDA220((__int64)v188);
  v10 = sub_CCB8E0(v6, 48, v7, v8, v9);
  v14 = sub_CC2440(a1[23], v10, v11, v12, v13);
  if ( !v189 )
  {
    v15 = sub_CDA220((__int64)v188);
    if ( v191 == -1 )
      v16 = *(unsigned int *)(*(_QWORD *)(v190 + 32) + 20LL);
    else
      v16 = *(unsigned int *)(v15 + 16);
    v17 = *(unsigned int *)(v15 + 20) / v16;
    v165 = v17;
    switch ( (int)v14 )
    {
      case 0:
        sub_CDA6F0((__int64)&src, (__int64)v188, 0);
        v67 = *(unsigned __int8 *)sub_CE8890((__int64)&src);
        sub_DFF560(&src);
        if ( v17 != 1 )
          goto LABEL_186;
        goto LABEL_377;
      case 1:
        goto LABEL_90;
      case 2:
        goto LABEL_105;
      case 3:
        goto LABEL_139;
      case 4:
        goto LABEL_122;
      case 5:
        goto LABEL_166;
      case 6:
        goto LABEL_149;
      case 7:
        goto LABEL_176;
      case 8:
        goto LABEL_7;
      case 9:
        goto LABEL_29;
    }
  }
  switch ( v14 )
  {
    case 0LL:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      LODWORD(v67) = *(unsigned __int8 *)sub_CE8890((__int64)&src);
      sub_DFF560(&src);
      v165 = -1;
LABEL_186:
      v68 = a4;
      v69 = 1;
      v70 = v67;
      v71 = v68;
      do
      {
        sub_CDA6F0((__int64)&src, (__int64)v188, v69);
        v72 = *(unsigned __int8 *)sub_CE8890((__int64)&src);
        sub_DFF560(&src);
        switch ( v71 )
        {
          case 1072:
            v73 = v72 + v70;
            if ( (char)v72 <= 0 || (char)v70 <= 0 )
            {
              if ( (v72 & 0x80u) == 0 || (v70 & 0x80u) == 0 )
              {
LABEL_200:
                v70 = v73;
                break;
              }
              v74 = (unsigned __int8)~(_BYTE)v73 >> 7;
            }
            else
            {
              v74 = (char)v73 <= 0;
            }
            if ( v74 )
            {
              sub_D66A30((__int64)&src, v72, 9);
              v187 = 0;
              v186 = v193;
              v185 = src;
              sub_D66A30((__int64)&src, v70, 9);
              goto LABEL_398;
            }
            goto LABEL_200;
          case 1078:
            LOBYTE(v88) = v70;
            if ( (v70 & 0x80u) != 0 )
            {
              v88 = -v70;
              LOBYTE(v121) = v72;
              if ( (v72 & 0x80u) != 0 )
              {
                v89 = -v72;
                v73 = v70 * v72;
                v90 = (_BYTE)v70 == 0;
                goto LABEL_267;
              }
              v122 = (_BYTE)v72 == 0;
              v123 = v72 * v88;
            }
            else
            {
              LOBYTE(v89) = v72;
              if ( (v72 & 0x80u) == 0 )
              {
                v73 = v70 * v72;
                v90 = (_BYTE)v70 == 0 || (_BYTE)v72 == 0;
LABEL_267:
                v91 = v73;
                if ( v90 )
                  goto LABEL_200;
                v92 = (unsigned __int8)v88 > (unsigned __int8)(0x7Fu / (unsigned __int8)v89);
                goto LABEL_269;
              }
              v121 = -v72;
              v122 = (_BYTE)v70 == 0;
              v123 = -v72 * v70;
            }
            v91 = -v123;
            if ( v122 )
            {
LABEL_270:
              v70 = v91;
              break;
            }
            v92 = (unsigned __int8)v88 > 128 / (unsigned __int8)v121;
LABEL_269:
            if ( v92 )
            {
              sub_D66A30((__int64)&src, v72, 16);
              BYTE4(v184[1]) = 0;
              LODWORD(v184[1]) = v193;
              v184[0] = src;
              sub_D66A30((__int64)&src, v70, 16);
              goto LABEL_400;
            }
            goto LABEL_270;
          case 1073:
            v70 &= v72;
            break;
          case 1079:
            v70 |= v72;
            break;
          case 1080:
            v70 ^= v72;
            break;
          case 1076:
            if ( (char)v70 > (char)v72 )
              v70 = v72;
            break;
          default:
            if ( (char)v70 < (char)v72 )
              v70 = v72;
            break;
        }
        ++v69;
      }
      while ( v69 != v165 );
      v67 = (unsigned __int8)v70;
LABEL_377:
      v193 = 8;
      v38 = *(_QWORD *)(a3 + 8);
      src = (void *)v67;
      v194 = 0;
LABEL_99:
      sub_D6C2A0(a1, (__int64)&src, v38, v34, v35);
      if ( v193 > 0x40 && src )
        operator delete[](src);
      v32 = 1;
LABEL_103:
      sub_DFF560(v188);
      return v32;
    case 1LL:
      v165 = -1;
LABEL_90:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v33 = *(unsigned __int8 *)sub_CE8AA0((__int64)&src);
      sub_DFF560(&src);
      if ( v165 != 1 )
      {
        switch ( a4 )
        {
          case 1072:
            v143 = 1;
            do
            {
              v144 = v143++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v144);
              v145 = *(_BYTE *)sub_CE8AA0((__int64)&src);
              sub_DFF560(&src);
              LOBYTE(v33) = v145 + v33;
            }
            while ( v143 != v165 );
            break;
          case 1078:
            v134 = 1;
            do
            {
              v135 = v134++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v135);
              v136 = *(_BYTE *)sub_CE8AA0((__int64)&src);
              sub_DFF560(&src);
              LOBYTE(v33) = v136 * v33;
            }
            while ( v134 != v165 );
            break;
          case 1074:
            for ( i = 1; i != v165; ++i )
            {
              sub_CDA6F0((__int64)&src, (__int64)v188, i);
              v37 = *(_BYTE *)sub_CE8AA0((__int64)&src);
              sub_DFF560(&src);
              if ( (unsigned __int8)v33 < v37 )
                LOBYTE(v33) = v37;
            }
            break;
          default:
            v149 = 1;
            if ( a4 == 1073 )
            {
              do
              {
                v161 = v149++;
                sub_CDA6F0((__int64)&src, (__int64)v188, v161);
                v162 = *(_BYTE *)sub_CE8AA0((__int64)&src);
                sub_DFF560(&src);
                LOBYTE(v33) = v162 & v33;
              }
              while ( v149 != v165 );
            }
            else
            {
              do
              {
                sub_CDA6F0((__int64)&src, (__int64)v188, v149);
                v150 = *(unsigned __int8 *)sub_CE8AA0((__int64)&src);
                sub_DFF560(&src);
                if ( a4 == 1079 )
                {
                  v33 |= v150;
                }
                else if ( a4 == 1080 )
                {
                  v33 ^= v150;
                }
                else if ( (unsigned __int8)v33 > (unsigned __int8)v150 )
                {
                  v33 = v150;
                }
                ++v149;
              }
              while ( v149 != v165 );
            }
            break;
        }
      }
      v193 = 8;
      v38 = *(_QWORD *)(a3 + 8);
      v194 = 1;
      src = (void *)(unsigned __int8)v33;
      goto LABEL_99;
    case 2LL:
      v165 = -1;
LABEL_105:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v40 = *(unsigned __int16 *)sub_CE8E90((__int64)&src);
      sub_DFF560(&src);
      if ( v165 == 1 )
        goto LABEL_379;
      v41 = 1;
      v42 = a4;
      while ( 2 )
      {
        sub_CDA6F0((__int64)&src, (__int64)v188, v41);
        v43 = *(unsigned __int16 *)sub_CE8E90((__int64)&src);
        sub_DFF560(&src);
        if ( v42 == 1072 )
        {
          v44 = v40 + v43;
          if ( (__int16)v40 <= 0 || (__int16)v43 <= 0 )
          {
            if ( (v40 & 0x8000u) == 0 || (v43 & 0x8000u) == 0 )
              goto LABEL_120;
            v45 = (unsigned __int16)~v44 >> 15;
          }
          else
          {
            v45 = v44 <= 0;
          }
          if ( !v45 )
          {
LABEL_120:
            v40 += v43;
            goto LABEL_114;
          }
          sub_D66A70((__int64)&src, v43, 17);
          v187 = 0;
          v186 = v193;
          v185 = src;
          sub_D66A70((__int64)&src, v40, 17);
LABEL_398:
          BYTE4(v184[1]) = 0;
          LODWORD(v184[1]) = v193;
          v184[0] = src;
          goto LABEL_79;
        }
        if ( v42 != 1078 )
        {
          switch ( v42 )
          {
            case 1073:
              v40 &= v43;
              break;
            case 1079:
              v40 |= v43;
              break;
            case 1080:
              v40 ^= v43;
              break;
            case 1076:
              if ( (__int16)v40 > (__int16)v43 )
                v40 = v43;
              break;
            default:
              if ( (__int16)v40 < (__int16)v43 )
                v40 = v43;
              break;
          }
LABEL_114:
          if ( ++v41 == v165 )
          {
LABEL_379:
            v193 = 16;
            src = (void *)(unsigned __int16)v40;
            v38 = *(_QWORD *)(a3 + 8);
            v194 = 0;
            goto LABEL_99;
          }
          continue;
        }
        break;
      }
      LOWORD(v83) = v40;
      if ( (v40 & 0x8000u) != 0 )
      {
        v83 = -v40;
        LOWORD(v118) = v43;
        if ( (v43 & 0x8000u) != 0 )
        {
          v84 = -v43;
          v85 = v43 * v40;
          v86 = (_WORD)v40 == 0;
          goto LABEL_260;
        }
        v119 = v43 * v83;
        v120 = (_WORD)v43 == 0;
      }
      else
      {
        LOWORD(v84) = v43;
        if ( (v43 & 0x8000u) == 0 )
        {
          v85 = v43 * v40;
          v86 = (_WORD)v43 == 0 || (_WORD)v40 == 0;
LABEL_260:
          v35 = v85;
          if ( v86 )
          {
            v40 = v85;
            goto LABEL_114;
          }
          v87 = (unsigned __int16)(0x7FFFu / (unsigned __int16)v84) < (unsigned __int16)v83;
LABEL_262:
          if ( !v87 )
          {
LABEL_263:
            v40 = v35;
            goto LABEL_114;
          }
          sub_D66A70((__int64)&src, v43, 32);
          BYTE4(v184[1]) = 0;
          LODWORD(v184[1]) = v193;
          v184[0] = src;
          sub_D66A70((__int64)&src, v40, 32);
LABEL_400:
          BYTE4(v183[1]) = 0;
          LODWORD(v183[1]) = v193;
          v183[0] = src;
          sub_21E5FA0(&src, v183, v184);
          v187 = 0;
          v186 = v193;
          v185 = src;
          goto LABEL_401;
        }
        v118 = -v43;
        v119 = -v43 * v40;
        v120 = (_WORD)v40 == 0;
      }
      v35 = (unsigned int)-v119;
      if ( v120 )
        goto LABEL_263;
      v87 = (unsigned __int16)v83 > 0x8000 / (unsigned __int16)v118;
      goto LABEL_262;
    case 3LL:
      v165 = -1;
LABEL_139:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v52 = *(unsigned __int16 *)sub_CE90A0((__int64)&src);
      sub_DFF560(&src);
      if ( v165 != 1 )
      {
        switch ( a4 )
        {
          case 1072:
            v146 = 1;
            do
            {
              v147 = v146++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v147);
              v148 = *(_WORD *)sub_CE90A0((__int64)&src);
              sub_DFF560(&src);
              LOWORD(v52) = v148 + v52;
            }
            while ( v165 != v146 );
            break;
          case 1078:
            v131 = 1;
            do
            {
              v132 = v131++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v132);
              v133 = *(_WORD *)sub_CE90A0((__int64)&src);
              sub_DFF560(&src);
              LOWORD(v52) = v133 * v52;
            }
            while ( v165 != v131 );
            break;
          case 1074:
            for ( j = 1; j != v165; ++j )
            {
              sub_CDA6F0((__int64)&src, (__int64)v188, j);
              v54 = *(_WORD *)sub_CE90A0((__int64)&src);
              sub_DFF560(&src);
              if ( (unsigned __int16)v52 < v54 )
                LOWORD(v52) = v54;
            }
            break;
          default:
            v159 = 1;
            if ( a4 == 1073 )
            {
              do
              {
                v163 = v159++;
                sub_CDA6F0((__int64)&src, (__int64)v188, v163);
                v164 = *(_WORD *)sub_CE90A0((__int64)&src);
                sub_DFF560(&src);
                LOWORD(v52) = v164 & v52;
              }
              while ( v165 != v159 );
            }
            else
            {
              do
              {
                sub_CDA6F0((__int64)&src, (__int64)v188, v159);
                v160 = *(unsigned __int16 *)sub_CE90A0((__int64)&src);
                sub_DFF560(&src);
                if ( a4 == 1079 )
                {
                  v52 |= v160;
                }
                else if ( a4 == 1080 )
                {
                  v52 ^= v160;
                }
                else if ( (unsigned __int16)v52 > (unsigned __int16)v160 )
                {
                  v52 = v160;
                }
                ++v159;
              }
              while ( v165 != v159 );
            }
            break;
        }
      }
      v193 = 16;
      v38 = *(_QWORD *)(a3 + 8);
      v194 = 1;
      src = (void *)(unsigned __int16)v52;
      goto LABEL_99;
    case 4LL:
      v165 = -1;
LABEL_122:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v46 = *(_DWORD *)sub_CE9490((__int64)&src);
      sub_DFF560(&src);
      if ( v165 == 1 )
        goto LABEL_375;
      v47 = 1;
      v48 = a4;
      while ( 2 )
      {
        sub_CDA6F0((__int64)&src, (__int64)v188, v47);
        v49 = *(_DWORD *)sub_CE9490((__int64)&src);
        sub_DFF560(&src);
        if ( v48 == 1072 )
        {
          v50 = v46 + v49;
          if ( v46 <= 0 || v49 <= 0 )
          {
            if ( v46 >= 0 || v49 >= 0 )
            {
LABEL_137:
              v46 += v49;
              goto LABEL_131;
            }
            v51 = v50 >= 0;
          }
          else
          {
            v51 = v50 <= 0;
          }
          if ( v51 )
          {
            sub_D66AB0((__int64)&src, v49, 33);
            v187 = 0;
            v186 = v193;
            v185 = src;
            sub_D66AB0((__int64)&src, v46, 33);
            goto LABEL_398;
          }
          goto LABEL_137;
        }
        if ( v48 != 1078 )
        {
          switch ( v48 )
          {
            case 1073:
              v46 &= v49;
              break;
            case 1079:
              v46 |= v49;
              break;
            case 1080:
              v46 ^= v49;
              break;
            case 1076:
              if ( v46 > v49 )
                v46 = v49;
              break;
            default:
              if ( v46 < v49 )
                v46 = v49;
              break;
          }
LABEL_131:
          if ( v165 == ++v47 )
          {
LABEL_375:
            v193 = 32;
            v38 = *(_QWORD *)(a3 + 8);
            v194 = 0;
            src = (void *)(unsigned int)v46;
            goto LABEL_99;
          }
          continue;
        }
        break;
      }
      v35 = (unsigned int)v46;
      if ( v46 < 0 )
      {
        v35 = (unsigned int)-v46;
        v98 = v49;
        if ( v49 < 0 )
        {
          v98 = -v49;
          v99 = v49 * v46;
          v100 = v46 == 0;
          goto LABEL_281;
        }
        v114 = v35 * v49;
        v115 = v49 == 0;
      }
      else
      {
        v98 = v49;
        if ( v49 >= 0 )
        {
          v99 = v49 * v46;
          v100 = v49 == 0 || v46 == 0;
LABEL_281:
          v101 = v99;
          if ( v100 )
          {
            v46 = v99;
            goto LABEL_131;
          }
          v102 = 0x7FFFFFFF;
          goto LABEL_283;
        }
        v98 = -v49;
        v114 = -v49 * v46;
        v115 = v46 == 0;
      }
      v101 = -v114;
      if ( v115 )
      {
LABEL_284:
        v46 = v101;
        goto LABEL_131;
      }
      v102 = 0x80000000;
LABEL_283:
      if ( (unsigned int)v35 > v102 / v98 )
      {
        sub_D66AB0((__int64)&src, v49, 64);
        BYTE4(v184[1]) = 0;
        LODWORD(v184[1]) = v193;
        v184[0] = src;
        sub_D66AB0((__int64)&src, v46, 64);
        goto LABEL_400;
      }
      goto LABEL_284;
    case 5LL:
      v165 = -1;
LABEL_166:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v61 = *(_DWORD *)sub_CE96A0((__int64)&src);
      sub_DFF560(&src);
      if ( v165 != 1 )
      {
        switch ( a4 )
        {
          case 1072:
            v140 = 1;
            do
            {
              v141 = v140++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v141);
              v142 = *(_DWORD *)sub_CE96A0((__int64)&src);
              sub_DFF560(&src);
              v61 += v142;
            }
            while ( v140 != v165 );
            break;
          case 1078:
            v125 = 1;
            do
            {
              v126 = v125++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v126);
              v127 = *(_DWORD *)sub_CE96A0((__int64)&src);
              sub_DFF560(&src);
              v61 *= v127;
            }
            while ( v165 != v125 );
            break;
          case 1074:
            for ( k = 1; k != v165; ++k )
            {
              sub_CDA6F0((__int64)&src, (__int64)v188, k);
              v63 = *(_DWORD *)sub_CE96A0((__int64)&src);
              sub_DFF560(&src);
              if ( v61 < v63 )
                v61 = v63;
            }
            break;
          default:
            v151 = 1;
            if ( a4 == 1073 )
            {
              do
              {
                v155 = v151++;
                sub_CDA6F0((__int64)&src, (__int64)v188, v155);
                v156 = *(_DWORD *)sub_CE96A0((__int64)&src);
                sub_DFF560(&src);
                v61 &= v156;
              }
              while ( v165 != v151 );
            }
            else
            {
              do
              {
                sub_CDA6F0((__int64)&src, (__int64)v188, v151);
                v152 = *(_DWORD *)sub_CE96A0((__int64)&src);
                sub_DFF560(&src);
                if ( a4 == 1079 )
                {
                  v61 |= v152;
                }
                else if ( a4 == 1080 )
                {
                  v61 ^= v152;
                }
                else if ( v61 > v152 )
                {
                  v61 = v152;
                }
                ++v151;
              }
              while ( v165 != v151 );
            }
            break;
        }
      }
      v193 = 32;
      v38 = *(_QWORD *)(a3 + 8);
      v194 = 1;
      src = (void *)v61;
      goto LABEL_99;
    case 6LL:
      v165 = -1;
LABEL_149:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v55 = *(_QWORD *)sub_CE9C80((__int64)&src);
      sub_DFF560(&src);
      if ( v165 == 1 )
        goto LABEL_378;
      v56 = 1;
      v57 = a4;
      while ( 2 )
      {
        sub_CDA6F0((__int64)&src, (__int64)v188, v56);
        v58 = *(_QWORD *)sub_CE9C80((__int64)&src);
        sub_DFF560(&src);
        if ( v57 == 1072 )
        {
          v59 = v55 + v58;
          if ( v55 <= 0 || v58 <= 0 )
          {
            if ( v55 >= 0 || v58 >= 0 )
            {
LABEL_164:
              v55 += v58;
              goto LABEL_158;
            }
            v60 = v59 >= 0;
          }
          else
          {
            v60 = v59 <= 0;
          }
          if ( v60 )
          {
            sub_D66AF0((__int64)&src, (void *)v58, 65);
            v187 = 0;
            v186 = v193;
            v185 = src;
            sub_D66AF0((__int64)&src, (void *)v55, 65);
            goto LABEL_398;
          }
          goto LABEL_164;
        }
        if ( v57 != 1078 )
        {
          switch ( v57 )
          {
            case 1073:
              v55 &= v58;
              break;
            case 1079:
              v55 |= v58;
              break;
            case 1080:
              v55 ^= v58;
              break;
            case 1076:
              if ( v55 > v58 )
                v55 = v58;
              break;
            default:
              if ( v55 < v58 )
                v55 = v58;
              break;
          }
LABEL_158:
          if ( ++v56 == v165 )
          {
LABEL_378:
            v193 = 64;
            v38 = *(_QWORD *)(a3 + 8);
            src = (void *)v55;
            v194 = 0;
            goto LABEL_99;
          }
          continue;
        }
        break;
      }
      v35 = v55;
      if ( v55 < 0 )
      {
        v35 = -v55;
        v93 = v58;
        if ( v58 < 0 )
        {
          v93 = -v58;
          v94 = v55 * v58;
          v95 = v55 == 0;
          goto LABEL_274;
        }
        v116 = v35 * v58;
        v117 = v58 == 0;
      }
      else
      {
        v93 = v58;
        if ( v58 >= 0 )
        {
          v94 = v55 * v58;
          v95 = v55 == 0 || v58 == 0;
LABEL_274:
          v96 = v94;
          if ( v95 )
          {
            v55 = v94;
            goto LABEL_158;
          }
          v97 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_276;
        }
        v93 = -v58;
        v116 = -v58 * v55;
        v117 = v55 == 0;
      }
      v96 = -v116;
      if ( v117 )
      {
LABEL_277:
        v55 = v96;
        goto LABEL_158;
      }
      v97 = 0x8000000000000000LL;
LABEL_276:
      if ( v35 > v97 / v93 )
      {
        sub_D66AF0((__int64)&src, (void *)v58, 128);
        BYTE4(v184[1]) = 0;
        LODWORD(v184[1]) = v193;
        v184[0] = src;
        sub_D66AF0((__int64)&src, (void *)v55, 128);
        goto LABEL_400;
      }
      goto LABEL_277;
    case 7LL:
      v165 = -1;
LABEL_176:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      v64 = *(_QWORD *)sub_CE9E90((__int64)&src);
      sub_DFF560(&src);
      if ( v165 != 1 )
      {
        switch ( a4 )
        {
          case 1072:
            v137 = 1;
            do
            {
              v138 = v137++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v138);
              v139 = *(_QWORD *)sub_CE9E90((__int64)&src);
              sub_DFF560(&src);
              v64 += v139;
            }
            while ( v137 != v165 );
            break;
          case 1078:
            v128 = 1;
            do
            {
              v129 = v128++;
              sub_CDA6F0((__int64)&src, (__int64)v188, v129);
              v130 = *(_QWORD *)sub_CE9E90((__int64)&src);
              sub_DFF560(&src);
              v64 *= v130;
            }
            while ( v165 != v128 );
            break;
          case 1074:
            for ( m = 1; m != v165; ++m )
            {
              sub_CDA6F0((__int64)&src, (__int64)v188, m);
              v66 = *(_QWORD *)sub_CE9E90((__int64)&src);
              sub_DFF560(&src);
              if ( v64 < v66 )
                v64 = v66;
            }
            break;
          default:
            v153 = 1;
            if ( a4 == 1073 )
            {
              do
              {
                v157 = v153++;
                sub_CDA6F0((__int64)&src, (__int64)v188, v157);
                v158 = *(_QWORD *)sub_CE9E90((__int64)&src);
                sub_DFF560(&src);
                v64 &= v158;
              }
              while ( v165 != v153 );
            }
            else
            {
              do
              {
                sub_CDA6F0((__int64)&src, (__int64)v188, v153);
                v154 = *(_QWORD *)sub_CE9E90((__int64)&src);
                sub_DFF560(&src);
                if ( a4 == 1079 )
                {
                  v64 |= v154;
                }
                else if ( a4 == 1080 )
                {
                  v64 ^= v154;
                }
                else if ( v64 > v154 )
                {
                  v64 = v154;
                }
                ++v153;
              }
              while ( v165 != v153 );
            }
            break;
        }
      }
      src = (void *)v64;
      v193 = 64;
      v38 = *(_QWORD *)(a3 + 8);
      v194 = 1;
      goto LABEL_99;
    case 8LL:
      v165 = -1;
LABEL_7:
      v18 = 1;
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      *(__m128i *)dest = _mm_loadu_si128((const __m128i *)sub_CEA4A0((__int64)&src));
      sub_DFF560(&src);
      if ( v165 == 1 )
        goto LABEL_380;
      while ( 1 )
      {
        sub_CDA6F0((__int64)&src, (__int64)v188, v18);
        *(__m128i *)v181 = _mm_loadu_si128((const __m128i *)sub_CEA4A0((__int64)&src));
        sub_DFF560(&src);
        switch ( a4 )
        {
          case 1072:
            si128 = _mm_load_si128((const __m128i *)v181);
            *(__m128i *)v182 = _mm_load_si128((const __m128i *)dest);
            *(__m128i *)v183 = si128;
            sub_D23F70((__int64)v184, (__int64 *)v183);
            sub_D23F70((__int64)&v185, (__int64 *)v182);
            v193 = v186;
            if ( v186 > 0x40 )
              sub_21E17D0(&src);
            else
              src = v185;
            sub_21E1C60(&src, v184);
            if ( v193 > 0x40 )
            {
              v169 = src;
              memcpy(dest[0], src, 8 * (((unsigned __int64)v193 + 63) >> 6));
              operator delete[](v169);
            }
            else
            {
              dest[0] = src;
            }
            if ( v186 > 0x40 && v185 )
              operator delete[](v185);
            if ( LODWORD(v184[1]) <= 0x40 )
              goto LABEL_16;
            v20 = v184[0];
            if ( !v184[0] )
              goto LABEL_16;
            goto LABEL_27;
          case 1078:
            v82 = _mm_load_si128((const __m128i *)v181);
            *(__m128i *)v182 = _mm_load_si128((const __m128i *)dest);
            *(__m128i *)v183 = v82;
            sub_D23F70((__int64)&v185, (__int64 *)v183);
            sub_D23F70((__int64)&src, (__int64 *)v182);
            sub_21E5FA0(v184, &src, &v185);
            if ( LODWORD(v184[1]) > 0x40 )
            {
              memcpy(dest[0], v184[0], 8 * (((unsigned __int64)LODWORD(v184[1]) + 63) >> 6));
              if ( LODWORD(v184[1]) > 0x40 )
              {
                v112 = v184[0];
                if ( v184[0] )
LABEL_321:
                  operator delete[](v112);
              }
            }
            else
            {
              dest[0] = v184[0];
            }
LABEL_251:
            if ( v193 > 0x40 && src )
              operator delete[](src);
            if ( v186 <= 0x40 )
              goto LABEL_16;
            v20 = v185;
            if ( !v185 )
              goto LABEL_16;
LABEL_27:
            operator delete[](v20);
            goto LABEL_16;
          case 1073:
            v106 = _mm_load_si128((const __m128i *)v181);
            *(__m128i *)v183 = _mm_load_si128((const __m128i *)dest);
            *(__m128i *)v184 = v106;
            sub_D23F70((__int64)&v185, (__int64 *)v184);
            sub_D23F70((__int64)&src, (__int64 *)v183);
            if ( v186 <= 0x40 )
            {
              v107 = (void *)((unsigned __int64)src & (unsigned __int64)v185);
              v186 = 0;
              v185 = (void *)((unsigned __int64)src & (unsigned __int64)v185);
              goto LABEL_298;
            }
            sub_21E1E20(&v185, &src);
            goto LABEL_337;
          case 1079:
            v108 = _mm_load_si128((const __m128i *)v181);
            *(__m128i *)v183 = _mm_load_si128((const __m128i *)dest);
            *(__m128i *)v184 = v108;
            sub_D23F70((__int64)&v185, (__int64 *)v184);
            sub_D23F70((__int64)&src, (__int64 *)v183);
            if ( v186 <= 0x40 )
            {
              v107 = (void *)((unsigned __int64)src | (unsigned __int64)v185);
              v186 = 0;
              v185 = (void *)((unsigned __int64)src | (unsigned __int64)v185);
              goto LABEL_298;
            }
            sub_21E1ED0(&v185, &src);
            goto LABEL_337;
          case 1080:
            v111 = _mm_load_si128((const __m128i *)v181);
            *(__m128i *)v183 = _mm_load_si128((const __m128i *)dest);
            *(__m128i *)v184 = v111;
            sub_D23F70((__int64)&v185, (__int64 *)v184);
            sub_D23F70((__int64)&src, (__int64 *)v183);
            if ( v186 <= 0x40 )
            {
              v107 = (void *)((unsigned __int64)src ^ (unsigned __int64)v185);
              v186 = 0;
              v185 = (void *)((unsigned __int64)src ^ (unsigned __int64)v185);
              goto LABEL_298;
            }
            sub_21E1F80(&v185, &src);
LABEL_337:
            v113 = v186;
            v107 = v185;
            v186 = 0;
            if ( v113 > 0x40 )
            {
              v170 = v185;
              memcpy(dest[0], v185, 8 * (((unsigned __int64)v113 + 63) >> 6));
              v112 = v170;
              goto LABEL_321;
            }
LABEL_298:
            dest[0] = v107;
            goto LABEL_251;
        }
        if ( a4 == 1076 )
          break;
        if ( (unsigned __int8)sub_D68620((__int64)v181, (__int64)dest) )
          goto LABEL_15;
LABEL_16:
        if ( ++v18 == v165 )
        {
LABEL_380:
          v124 = *(_QWORD *)(a3 + 8);
          sub_D23FD0((__int64)&src, (__int64)dest, 0);
LABEL_381:
          v38 = v124;
          goto LABEL_99;
        }
      }
      if ( !(unsigned __int8)sub_D68730((__int64)v181, dest[0], (unsigned int)dest[1]) )
        goto LABEL_16;
LABEL_15:
      dest[0] = v181[0];
      LODWORD(dest[1]) = v181[1];
      goto LABEL_16;
    case 9LL:
      v165 = -1;
LABEL_29:
      sub_CDA6F0((__int64)&src, (__int64)v188, 0);
      *(__m128i *)v176 = _mm_loadu_si128((const __m128i *)sub_CEA4F0((__int64)&src));
      sub_DFF560(&src);
      v166 = (unsigned int)v176[1];
      if ( v165 == 1 )
        goto LABEL_382;
      v21 = 1;
      break;
    default:
      BUG();
  }
  while ( 1 )
  {
    sub_CDA6F0((__int64)&src, (__int64)v188, v21);
    v177 = _mm_loadu_si128((const __m128i *)sub_CEA4F0((__int64)&src));
    sub_DFF560(&src);
    v23 = _mm_load_si128((const __m128i *)v176);
    v178 = v23;
    if ( a4 == 1072 )
      break;
    switch ( a4 )
    {
      case 1078:
        v75 = _mm_load_si128(&v177);
        v179 = v23;
        *(__m128i *)dest = v75;
        sub_D66C90((__int64)v183, v179.m128i_i64);
        sub_D66C90((__int64)v182, (__int64 *)dest);
        if ( BYTE4(v182[1]) )
        {
          sub_21E2F90(&src, v182, v166);
          v187 = 1;
        }
        else
        {
          sub_21E2E30(&src, v182, v166);
          v187 = 0;
        }
        v186 = v193;
        v185 = src;
        v76 = BYTE4(v183[1]);
        if ( BYTE4(v183[1]) )
        {
          sub_21E2F90(&src, v183, v166);
          BYTE4(v184[1]) = 1;
        }
        else
        {
          sub_21E2E30(&src, v183, v166);
          BYTE4(v184[1]) = 0;
        }
        LODWORD(v184[1]) = v193;
        v184[0] = src;
        sub_21E5FA0(&src, v184, &v185);
        BYTE4(v181[1]) = v76;
        LODWORD(v181[1]) = v193;
        v181[0] = src;
        if ( LODWORD(v184[1]) > 0x40 && v184[0] )
          operator delete[](v184[0]);
        if ( v186 > 0x40 && v185 )
          operator delete[](v185);
        v174 = BYTE4(v181[1]);
        sub_21E2D00(&src, v181);
        v77 = v174;
        LODWORD(v184[1]) = v193;
        v184[0] = src;
        BYTE4(v184[1]) = v174;
        if ( v193 > 0x40 )
        {
          memcpy(v176[0], src, 8 * (((unsigned __int64)v193 + 63) >> 6));
          v77 = BYTE4(v184[1]);
        }
        else
        {
          v78 = 0;
          if ( v193 )
            v78 = (__int64)((_QWORD)src << (64 - (unsigned __int8)v193)) >> (64 - (unsigned __int8)v193);
          v176[0] = (void *)v78;
        }
        if ( v77 )
        {
          sub_21E2F90(&src, v184, v166);
          v187 = 1;
          v185 = src;
          v79 = src;
          v186 = v193;
          if ( v193 > 0x40 )
          {
LABEL_233:
            v175 = v79;
            v80 = sub_21E2030(&v185, v181);
            if ( v175 )
              operator delete[](v175);
LABEL_235:
            if ( LODWORD(v184[1]) > 0x40 && v184[0] )
              operator delete[](v184[0]);
            if ( LODWORD(v181[1]) > 0x40 && v181[0] )
              operator delete[](v181[0]);
            if ( LODWORD(v182[1]) > 0x40 && v182[0] )
              operator delete[](v182[0]);
            if ( LODWORD(v183[1]) > 0x40 && v183[0] )
              operator delete[](v183[0]);
            if ( !v80 )
            {
              sub_D27A40((__int64)v184, (__int64)&v177, 2 * v166);
              sub_D27A40((__int64)v183, (__int64)&v178, 2 * v166);
              v81 = BYTE4(v183[1]);
              sub_21E5FA0(&src, v183, v184);
              v187 = v81;
              v186 = v193;
              v185 = src;
LABEL_401:
              sub_D671C0((__int64)a1, a2, (__int64)&v185);
              if ( v186 > 0x40 && v185 )
                operator delete[](v185);
              if ( LODWORD(v183[1]) > 0x40 && v183[0] )
                operator delete[](v183[0]);
              if ( LODWORD(v184[1]) > 0x40 )
              {
                v31 = v184[0];
                if ( !v184[0] )
                {
                  v32 = 0;
                  goto LABEL_103;
                }
LABEL_87:
                operator delete[](v31);
              }
LABEL_88:
              v32 = 0;
              goto LABEL_103;
            }
            goto LABEL_44;
          }
        }
        else
        {
          sub_21E2E30(&src, v184, v166);
          v187 = 0;
          v185 = src;
          v79 = src;
          v186 = v193;
          if ( v193 > 0x40 )
            goto LABEL_233;
        }
        v80 = v79 == v181[0];
        goto LABEL_235;
      case 1073:
        v103 = _mm_load_si128(&v177);
        *(__m128i *)v182 = v23;
        *(__m128i *)v183 = v103;
        sub_D279E0((__int64)&v185, (__int64 *)v183);
        sub_D279E0((__int64)&src, (__int64 *)v182);
        v104 = v186;
        if ( v186 > 0x40 )
        {
          sub_21E1E20(&v185, &src);
          v104 = v186;
          v105 = v185;
        }
        else
        {
          v105 = (void *)((unsigned __int64)src & (unsigned __int64)v185);
          v185 = (void *)((unsigned __int64)src & (unsigned __int64)v185);
        }
        goto LABEL_287;
      case 1079:
        v109 = _mm_load_si128(&v177);
        *(__m128i *)v182 = v23;
        *(__m128i *)v183 = v109;
        sub_D279E0((__int64)&v185, (__int64 *)v183);
        sub_D279E0((__int64)&src, (__int64 *)v182);
        v104 = v186;
        if ( v186 > 0x40 )
        {
          sub_21E1ED0(&v185, &src);
          v104 = v186;
          v105 = v185;
        }
        else
        {
          v105 = (void *)((unsigned __int64)src | (unsigned __int64)v185);
          v185 = (void *)((unsigned __int64)src | (unsigned __int64)v185);
        }
        goto LABEL_287;
      case 1080:
        v110 = _mm_load_si128(&v177);
        *(__m128i *)v182 = v23;
        *(__m128i *)v183 = v110;
        sub_D279E0((__int64)&v185, (__int64 *)v183);
        sub_D279E0((__int64)&src, (__int64 *)v182);
        v104 = v186;
        if ( v186 > 0x40 )
        {
          sub_21E1F80(&v185, &src);
          v104 = v186;
          v105 = v185;
        }
        else
        {
          v105 = (void *)((unsigned __int64)src ^ (unsigned __int64)v185);
          v185 = (void *)((unsigned __int64)src ^ (unsigned __int64)v185);
        }
LABEL_287:
        LODWORD(v184[1]) = v104;
        v184[0] = v105;
        v186 = 0;
        sub_CE8850(v176, (__int64)v184);
        if ( LODWORD(v184[1]) > 0x40 && v184[0] )
          operator delete[](v184[0]);
        if ( v193 > 0x40 && src )
          operator delete[](src);
        if ( v186 > 0x40 && v185 )
          operator delete[](v185);
        goto LABEL_44;
      case 1076:
        if ( !(unsigned __int8)sub_D689B0(v177.m128i_i64, (__int64)v176[0], (unsigned int)v176[1]) )
          goto LABEL_44;
        break;
      default:
        sub_D279E0((__int64)&v185, v177.m128i_i64);
        sub_D279E0((__int64)&src, (__int64 *)v176);
        v22 = sub_21E20E0(&v185, &src);
        if ( v193 > 0x40 && src )
          operator delete[](src);
        if ( v186 > 0x40 && v185 )
          operator delete[](v185);
        if ( v22 <= 0 )
          goto LABEL_44;
        break;
    }
    v176[0] = (void *)v177.m128i_i64[0];
    LODWORD(v176[1]) = v177.m128i_i32[2];
LABEL_44:
    if ( ++v21 == v165 )
    {
LABEL_382:
      v124 = *(_QWORD *)(a3 + 8);
      sub_D66C90((__int64)&src, (__int64 *)v176);
      goto LABEL_381;
    }
  }
  v24 = _mm_load_si128(&v177);
  v179 = v23;
  *(__m128i *)dest = v24;
  sub_D66C90((__int64)v183, v179.m128i_i64);
  sub_D66C90((__int64)v182, (__int64 *)dest);
  if ( BYTE4(v182[1]) )
  {
    sub_21E2F90(&src, v182, v166);
    v187 = 1;
  }
  else
  {
    sub_21E2E30(&src, v182, v166);
    v187 = 0;
  }
  v186 = v193;
  v185 = src;
  v25 = BYTE4(v183[1]);
  if ( BYTE4(v183[1]) )
  {
    sub_21E2F90(&src, v183, v166);
    v26 = src;
    BYTE4(v184[1]) = 1;
    LODWORD(v184[1]) = v193;
    v184[0] = src;
    if ( v193 <= 0x40 )
    {
LABEL_50:
      src = v26;
LABEL_51:
      sub_21E1C60(&src, &v185);
      BYTE4(v181[1]) = v25;
      LODWORD(v181[1]) = v193;
      v181[0] = src;
      if ( LODWORD(v184[1]) > 0x40 && v184[0] )
        operator delete[](v184[0]);
      if ( v186 > 0x40 && v185 )
        operator delete[](v185);
      v172 = BYTE4(v181[1]);
      sub_21E2D00(&src, v181);
      v27 = v172;
      LODWORD(v184[1]) = v193;
      v184[0] = src;
      BYTE4(v184[1]) = v172;
      if ( v193 > 0x40 )
      {
        memcpy(v176[0], src, 8 * (((unsigned __int64)v193 + 63) >> 6));
        v27 = BYTE4(v184[1]);
      }
      else
      {
        v28 = 0;
        if ( v193 )
          v28 = (__int64)((_QWORD)src << (64 - (unsigned __int8)v193)) >> (64 - (unsigned __int8)v193);
        v176[0] = (void *)v28;
      }
      if ( v27 )
      {
        sub_21E2F90(&src, v184, v166);
        v187 = 1;
        v185 = src;
        v29 = src;
        v186 = v193;
        if ( v193 > 0x40 )
          goto LABEL_63;
      }
      else
      {
        sub_21E2E30(&src, v184, v166);
        v187 = 0;
        v185 = src;
        v29 = src;
        v186 = v193;
        if ( v193 > 0x40 )
        {
LABEL_63:
          v173 = v29;
          v30 = sub_21E2030(&v185, v181);
          if ( v173 )
            operator delete[](v173);
LABEL_65:
          if ( LODWORD(v184[1]) > 0x40 && v184[0] )
            operator delete[](v184[0]);
          if ( LODWORD(v181[1]) > 0x40 && v181[0] )
            operator delete[](v181[0]);
          if ( LODWORD(v182[1]) > 0x40 && v182[0] )
            operator delete[](v182[0]);
          if ( LODWORD(v183[1]) > 0x40 && v183[0] )
            operator delete[](v183[0]);
          if ( !v30 )
          {
            sub_D27A40((__int64)&v185, (__int64)&v177, v166 + 1);
            sub_D27A40((__int64)v184, (__int64)&v178, v166 + 1);
LABEL_79:
            sub_CD4B40((__int64)&src, (__int64 *)v184, (__int64)&v185);
            sub_D671C0((__int64)a1, a2, (__int64)&src);
            if ( v193 > 0x40 && src )
              operator delete[](src);
            if ( LODWORD(v184[1]) > 0x40 && v184[0] )
              operator delete[](v184[0]);
            if ( v186 > 0x40 )
            {
              v31 = v185;
              if ( v185 )
                goto LABEL_87;
            }
            goto LABEL_88;
          }
          goto LABEL_44;
        }
      }
      v30 = v29 == v181[0];
      goto LABEL_65;
    }
  }
  else
  {
    sub_21E2E30(&src, v183, v166);
    v26 = src;
    BYTE4(v184[1]) = 0;
    LODWORD(v184[1]) = v193;
    v184[0] = src;
    if ( v193 <= 0x40 )
      goto LABEL_50;
  }
  sub_21E17D0(&src);
  goto LABEL_51;
}

