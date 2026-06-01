__int64 __fastcall sub_40E040(__m128d a1, __int64 a2, char *a3, int a4, _QWORD *a5)
{
  char *v6; // rsi
  int v7; // eax
  unsigned int v8; // edx
  char *p_endptr; // rdi
  char *v10; // rbx
  int v11; // r9d
  int v12; // eax
  const char *v13; // rcx
  int v14; // r8d
  int v15; // eax
  _QWORD *v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rsi
  char *v20; // rdi
  int v21; // r9d
  int v22; // ecx
  int *v23; // r12
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char *v28; // rdi
  bool v29; // zf
  void *v30; // r15
  __int64 v31; // rsi
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  int v35; // ebx
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // r9d
  int v41; // ebx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // r8d
  int v46; // ebx
  int v47; // r12d
  __int64 v48; // rax
  int v49; // r9d
  int v50; // ebx
  _DWORD *v51; // r15
  int v52; // r8d
  unsigned __int8 *v53; // rbp
  __int64 v54; // r14
  unsigned __int8 *v55; // rdi
  _DWORD *v56; // rax
  int v57; // r9d
  __int64 v58; // rax
  int v59; // ecx
  int v60; // ebx
  int v61; // ebx
  unsigned __int8 *v62; // rbx
  __int64 v63; // r15
  _BYTE *v64; // rdx
  int v65; // r9d
  int n; // ecx
  int v67; // eax
  int v68; // ebx
  int v69; // r8d
  char *v70; // rdi
  __int64 v71; // rax
  int v73; // ebx
  int v74; // ebx
  unsigned __int8 *v75; // rbx
  __int64 v76; // r15
  _BYTE *v77; // rcx
  int v78; // r9d
  int k; // r12d
  _BYTE *v80; // rdx
  int v81; // edx
  char *v82; // rdi
  size_t v83; // rdx
  int v84; // esi
  __int64 v85; // rdi
  __int64 v86; // r13
  int v87; // ecx
  char *v88; // rbp
  int v89; // eax
  char *v90; // rdx
  int ii; // r9d
  char v92; // al
  char v93; // bp
  __int64 v94; // rax
  _DWORD *v95; // rax
  int v96; // ebx
  int v97; // ecx
  char *v98; // rcx
  int v99; // r14d
  int v100; // ebp
  __int64 v101; // rbx
  __int64 v102; // rdi
  int v103; // ecx
  char *v104; // rbp
  char *v105; // r14
  int v106; // r9d
  char v107; // al
  char v108; // al
  int v109; // r8d
  int v110; // r9d
  double v111; // xmm1_8
  int v112; // eax
  int v113; // r8d
  int v114; // r9d
  __int64 v115; // rdx
  _BYTE *v116; // rdx
  _BYTE *v117; // rdx
  _BYTE *v118; // rdx
  __int64 v119; // rdx
  int v120; // edx
  int v121; // ecx
  int v122; // r8d
  int v123; // r9d
  _BYTE *v124; // rdx
  _BYTE *v125; // rdx
  _BYTE *v126; // rdx
  _BYTE *v127; // rdx
  _BYTE *v128; // rdx
  _BYTE *v129; // rdx
  _BYTE *v130; // rdx
  __int64 v131; // rdx
  _BYTE *v132; // rdx
  const char *v133; // rsi
  __int64 v134; // rdx
  __int64 v135; // rax
  int v138; // eax
  char v139; // al
  int j; // r12d
  _BYTE *v141; // rdx
  int v142; // eax
  int m; // ecx
  int v144; // eax
  bool i; // cc
  __int64 v146; // rax
  __int64 v147; // rax
  const unsigned __int16 **v148; // rax
  const unsigned __int16 **v149; // rsi
  int v150; // eax
  int v151; // ecx
  int v152; // eax
  unsigned __int8 v153; // cl
  int v154; // eax
  const unsigned __int16 **v155; // rax
  const unsigned __int16 **v156; // rsi
  int v157; // eax
  int v158; // ecx
  int v159; // eax
  unsigned __int8 v160; // cl
  char v161; // al
  __int64 v162; // rax
  _QWORD *v163; // rdx
  float v164; // xmm1_4
  _BYTE *v165; // rdx
  _BYTE *v166; // rdx
  _BYTE *v167; // rdx
  _BYTE *v168; // rdx
  _BYTE *v169; // rdx
  _BYTE *v170; // rdx
  _BYTE *v171; // rdx
  _BYTE *v172; // rdx
  _BYTE *v173; // rdx
  _BYTE *v174; // rdx
  char v175; // al
  __int64 v176; // rax
  __int64 v177; // rax
  int v178; // [rsp+10h] [rbp-168h]
  int v179; // [rsp+10h] [rbp-168h]
  int v180; // [rsp+10h] [rbp-168h]
  int v181; // [rsp+10h] [rbp-168h]
  int v182; // [rsp+10h] [rbp-168h]
  int v183; // [rsp+10h] [rbp-168h]
  int v184; // [rsp+18h] [rbp-160h]
  int v185; // [rsp+18h] [rbp-160h]
  int v186; // [rsp+18h] [rbp-160h]
  int v187; // [rsp+18h] [rbp-160h]
  const char *v188; // [rsp+20h] [rbp-158h]
  const char *v189; // [rsp+20h] [rbp-158h]
  _DWORD *v190; // [rsp+28h] [rbp-150h]
  _DWORD *v191; // [rsp+28h] [rbp-150h]
  int v192; // [rsp+30h] [rbp-148h]
  int v193; // [rsp+30h] [rbp-148h]
  int v194; // [rsp+30h] [rbp-148h]
  int v195; // [rsp+30h] [rbp-148h]
  int v196; // [rsp+30h] [rbp-148h]
  int v197; // [rsp+30h] [rbp-148h]
  int v198; // [rsp+30h] [rbp-148h]
  int v199; // [rsp+4Ch] [rbp-12Ch]
  int v200; // [rsp+4Ch] [rbp-12Ch]
  int v201; // [rsp+4Ch] [rbp-12Ch]
  _BYTE v204[6]; // [rsp+60h] [rbp-118h] BYREF
  unsigned __int16 v205; // [rsp+66h] [rbp-112h] BYREF
  _BYTE *v206; // [rsp+68h] [rbp-110h] BYREF
  __int64 v207; // [rsp+70h] [rbp-108h] BYREF
  char v208; // [rsp+78h] [rbp-100h] BYREF
  char v209; // [rsp+79h] [rbp-FFh]
  char v210; // [rsp+7Ah] [rbp-FEh]
  char v211; // [rsp+7Bh] [rbp-FDh]
  char v212; // [rsp+7Ch] [rbp-FCh]
  char v213; // [rsp+7Dh] [rbp-FBh]
  char v214; // [rsp+7Eh] [rbp-FAh]
  char v215; // [rsp+7Fh] [rbp-F9h]
  float src; // [rsp+84h] [rbp-F4h] BYREF
  double v217; // [rsp+88h] [rbp-F0h] BYREF
  void *s; // [rsp+90h] [rbp-E8h]
  int v219; // [rsp+9Ch] [rbp-DCh] BYREF
  _QWORD *v220; // [rsp+A0h] [rbp-D8h] BYREF
  int v221; // [rsp+A8h] [rbp-D0h] BYREF
  int v222; // [rsp+ACh] [rbp-CCh] BYREF
  __int64 v223; // [rsp+B0h] [rbp-C8h] BYREF
  char *endptr; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int8 v225; // [rsp+C3h] [rbp-B5h] BYREF
  int v226; // [rsp+C4h] [rbp-B4h] BYREF
  int v227; // [rsp+C8h] [rbp-B0h] BYREF
  int v228; // [rsp+CCh] [rbp-ACh] BYREF
  _BYTE v229[120]; // [rsp+D0h] [rbp-A8h] BYREF

  v192 = 0;
  if ( a4 <= 1 )
  {
    v17 = a5;
    v18 = "option ?arg arg ...?";
    v19 = 1;
LABEL_17:
    sub_458930(a3, v19, v17, v18);
    return 1;
  }
  v6 = (char *)a5[1];
  v7 = sub_4584C0((_DWORD)a3, (_DWORD)v6, (unsigned int)&off_653DF0, 8, (unsigned int)"option", 0, (__int64)&v228);
  v8 = 1;
  if ( v7 )
    return v8;
  if ( v228 )
  {
    if ( v228 != 1 )
      return 0;
    v18 = "value formatString ?varName varName ...?";
    if ( a4 > 3 )
    {
      v206 = v229;
      sub_457B90(v229, 1);
      v190 = sub_40D5E0(a5[2], &v221);
      v20 = *(char **)(a5[3] + 8LL);
      if ( !v20 )
        v20 = (char *)sub_47B3B0(a5[3]);
      v10 = v20;
      endptr = v20;
      v200 = 4;
      v21 = 0;
      s = v190;
      while ( *v10 )
      {
        v179 = v21;
        v227 = 0;
        if ( !(unsigned int)sub_40D970(&endptr, (char *)&v225, &v226, &v227) )
          break;
        switch ( v225 )
        {
          case '@':
            if ( v226 == -2 )
            {
              sub_40DC90((__int64)v206);
LABEL_355:
              v13 = "missing count for \"@\" field specifier";
              v189 = "missing count for \"@\" field specifier";
              goto LABEL_279;
            }
            if ( v226 == -1 )
              goto LABEL_274;
            v59 = v221;
            v21 = v226;
            if ( v226 <= v221 )
              goto LABEL_95;
            goto LABEL_100;
          case 'A':
          case 'a':
            if ( v200 >= a4 )
              goto LABEL_277;
            v68 = v226;
            if ( v226 == -1 )
            {
              v68 = v221 - v179;
              v226 = v221 - v179;
            }
            else
            {
              if ( v226 == -2 )
              {
                v68 = 1;
                v226 = 1;
              }
              if ( v221 - v179 < v68 )
                goto LABEL_251;
            }
            v69 = v68;
            v70 = (char *)v190 + v179;
            if ( v225 == 65 )
            {
              for ( i = v68 <= 0; !i && (v70[v69 - 1] == 32 || v70[v69 - 1] == 0); i = v69 <= 0 )
                --v69;
            }
            v71 = sub_40D3B0(v70, v69);
            if ( !sub_4A4160(a3, a5[v200++], 0, v71, 512) )
              goto LABEL_356;
            v21 = v226 + v179;
            goto LABEL_95;
          case 'B':
          case 'b':
            if ( v200 >= a4 )
              goto LABEL_277;
            v74 = v226;
            if ( v226 == -1 )
            {
              v226 = 8 * (v221 - v179);
            }
            else
            {
              if ( v226 == -2 )
              {
                v74 = 1;
                v226 = 1;
              }
              if ( 8 * (v221 - v179) < v74 )
                goto LABEL_251;
            }
            v75 = (unsigned __int8 *)v190 + v179;
            v76 = ((__int64 (*)(void))sub_47B0B0)();
            sub_48E1A0(v76, (unsigned int)v226);
            v77 = *(_BYTE **)(v76 + 8);
            v78 = v179;
            if ( !v77 )
            {
              v176 = sub_47B3B0(v76);
              v78 = v179;
              v77 = (_BYTE *)v176;
            }
            if ( v225 == 98 )
            {
              for ( j = 0; j < v226; ++j )
              {
                if ( (j & 7) != 0 )
                {
                  v192 >>= 1;
                }
                else
                {
                  v142 = *v75++;
                  v192 = v142;
                }
                v141 = v77++;
                *v141 = 49 - ((v192 & 1) == 0);
              }
            }
            else
            {
              for ( k = 0; k < v226; ++k )
              {
                if ( (k & 7) != 0 )
                {
                  v192 *= 2;
                }
                else
                {
                  v81 = *v75++;
                  v192 = v81;
                }
                v80 = v77++;
                *v80 = 49 - ((v192 & 0x80u) == 0);
              }
            }
            v183 = v78;
            if ( !sub_4A4160(a3, a5[v200++], 0, v76, 512) )
              goto LABEL_356;
            v138 = v226 + 7;
            if ( v226 + 7 < 0 )
              v138 = v226 + 14;
            v21 = (v138 >> 3) + v183;
            goto LABEL_95;
          case 'H':
          case 'h':
            if ( v200 >= a4 )
              goto LABEL_277;
            v61 = v226;
            if ( v226 == -1 )
            {
              v226 = 2 * (v221 - v179);
            }
            else
            {
              if ( v226 == -2 )
              {
                v61 = 1;
                v226 = 1;
              }
              if ( 2 * (v221 - v179) < v61 )
                goto LABEL_251;
            }
            v62 = (unsigned __int8 *)v190 + v179;
            v63 = ((__int64 (*)(void))sub_47B0B0)();
            sub_48E1A0(v63, (unsigned int)v226);
            v64 = *(_BYTE **)(v63 + 8);
            v65 = v179;
            if ( !v64 )
            {
              v177 = sub_47B3B0(v63);
              v65 = v179;
              v64 = (_BYTE *)v177;
            }
            if ( v225 == 104 )
            {
              for ( m = 0; m < v226; ++v64 )
              {
                if ( (m & 1) != 0 )
                {
                  v192 >>= 4;
                }
                else
                {
                  v144 = *v62++;
                  v192 = v144;
                }
                ++m;
                *v64 = a0123456789abcd[v192 & 0xF];
              }
            }
            else
            {
              for ( n = 0; n < v226; ++v64 )
              {
                if ( (n & 1) != 0 )
                {
                  v192 *= 16;
                }
                else
                {
                  v67 = *v62++;
                  v192 = v67;
                }
                ++n;
                *v64 = a0123456789abcd[(v192 >> 4) & 0xF];
              }
            }
            v182 = v65;
            if ( !sub_4A4160(a3, a5[v200++], 0, v63, 512) )
            {
LABEL_356:
              sub_40DC90((__int64)v206);
              return 1;
            }
            v21 = (v226 + 1) / 2 + v182;
            goto LABEL_95;
          case 'I':
          case 'R':
          case 'f':
          case 'i':
          case 'n':
          case 'r':
            v45 = 4;
            goto LABEL_85;
          case 'Q':
          case 'W':
          case 'd':
          case 'm':
          case 'q':
          case 'w':
            v45 = 8;
            goto LABEL_85;
          case 'S':
          case 's':
          case 't':
            v45 = 2;
            goto LABEL_85;
          case 'X':
            v73 = v226;
            if ( v226 == -2 )
            {
              v73 = 1;
              v226 = 1;
            }
            else if ( v226 == -1 )
            {
              goto LABEL_132;
            }
            if ( v73 > v179 )
            {
LABEL_132:
              v21 = 0;
              goto LABEL_95;
            }
            v21 = v179 - v73;
            goto LABEL_95;
          case 'c':
            v45 = 1;
LABEL_85:
            if ( v200 >= a4 )
            {
LABEL_277:
              sub_40DC90((__int64)v206);
LABEL_278:
              v189 = "not enough arguments for all format specifiers";
LABEL_279:
              LODWORD(v133) = (_DWORD)v189;
              goto LABEL_246;
            }
            v46 = v226;
            if ( v226 == -2 )
            {
              if ( v221 - v179 < v45 )
                goto LABEL_251;
              v187 = v45;
              v51 = sub_40DCF0(
                      (unsigned __int8 *)v190 + v179,
                      (unsigned int)(char)v225,
                      v227,
                      (__int64 *)&v206,
                      v45,
                      v179);
              v57 = v187 + v179;
            }
            else
            {
              if ( v226 == -1 )
              {
                v46 = (v221 - v179) / v45;
                v226 = v46;
              }
              if ( v221 - v179 < v45 * v46 )
                goto LABEL_251;
              v185 = v45;
              v47 = 0;
              v48 = ((__int64 (*)(void))sub_47B0B0)();
              v49 = v179;
              v50 = v226;
              v51 = (_DWORD *)v48;
              v52 = v185;
              v53 = (unsigned __int8 *)v190 + v179;
              if ( v226 > 0 )
              {
                v54 = v185;
                do
                {
                  v55 = v53;
                  v186 = v52;
                  v180 = v49;
                  ++v47;
                  v53 += v54;
                  v56 = sub_40DCF0(v55, (unsigned int)(char)v225, v227, (__int64 *)&v206, v52, v49);
                  sub_46FBF0(0, v51, v56);
                  v50 = v226;
                  v52 = v186;
                  v49 = v180;
                }
                while ( v47 < v226 );
              }
              v57 = v52 * v50 + v49;
            }
            v181 = v57;
            v58 = sub_4A4160(a3, a5[v200++], 0, v51, 512);
            v21 = v181;
            if ( !v58 )
              goto LABEL_356;
LABEL_95:
            v10 = endptr;
            break;
          case 'x':
            v60 = v226;
            if ( v226 == -2 )
            {
              v60 = 1;
              v226 = 1;
            }
            else if ( v226 == -1 )
            {
LABEL_274:
              v21 = v221;
              goto LABEL_95;
            }
            v59 = v221;
            if ( v221 - v179 < v60 )
LABEL_100:
              v21 = v59;
            else
              v21 = v60 + v179;
            goto LABEL_95;
          default:
            sub_40DC90((__int64)v206);
LABEL_57:
            sub_49BBC0(v10, &v205);
            v204[(int)sub_49BA90(v205, v204)] = 0;
            sub_48B710(
              (_DWORD)a3,
              (unsigned int)"bad field specifier \"",
              (unsigned int)v204,
              (unsigned int)"\"",
              0,
              v40);
            return 1;
        }
      }
LABEL_251:
      v135 = sub_47BE30(v200 - 4);
      sub_48AFD0(a3, v135);
      sub_40DC90((__int64)v206);
      return 0;
    }
    goto LABEL_43;
  }
  if ( a4 <= 2 )
  {
    v18 = "formatString ?arg arg ...?";
LABEL_43:
    v17 = a5;
    v19 = 2;
    goto LABEL_17;
  }
  p_endptr = *(char **)(a5[2] + 8LL);
  if ( !p_endptr )
    p_endptr = (char *)sub_47B3B0(a5[2]);
  v10 = p_endptr;
  endptr = p_endptr;
  v199 = 3;
  v11 = 0;
  v221 = 0;
  while ( *v10 )
  {
    v6 = (char *)&v225;
    p_endptr = (char *)&endptr;
    v178 = v11;
    v227 = 0;
    v12 = sub_40D970(&endptr, (char *)&v225, &v226, &v227);
    v11 = v178;
    if ( !v12 )
      break;
    v6 = (char *)v225;
    switch ( v225 )
    {
      case '@':
        v44 = v221;
        if ( v178 > v221 )
          v44 = v178;
        v221 = v44;
        v11 = v44;
        if ( v226 == -1 )
          goto LABEL_54;
        if ( v226 == -2 )
          goto LABEL_355;
        v11 = v226;
        goto LABEL_54;
      case 'A':
      case 'B':
      case 'H':
      case 'a':
      case 'b':
      case 'h':
        if ( v199 >= a4 )
          goto LABEL_278;
        v39 = v226;
        if ( v226 == -1 )
        {
          p_endptr = (char *)a5[v199];
          sub_40D5E0((__int64)p_endptr, &v226);
          v6 = (char *)v225;
          v39 = v226;
          v11 = v178;
        }
        else if ( v226 == -2 )
        {
          v39 = 1;
          v226 = 1;
        }
        ++v199;
        if ( (_BYTE)v6 == 97 || (_BYTE)v6 == 65 )
          break;
        if ( (_BYTE)v6 == 98 || (_BYTE)v6 == 66 )
        {
          v43 = v39 + 7;
          if ( v39 + 7 < 0 )
            v43 = v39 + 14;
          v11 += v43 >> 3;
        }
        else
        {
          v11 += (v39 + 1) / 2;
        }
        goto LABEL_54;
      case 'I':
      case 'R':
      case 'f':
      case 'i':
      case 'n':
      case 'r':
        v14 = 4;
        goto LABEL_45;
      case 'Q':
      case 'W':
      case 'd':
      case 'm':
      case 'q':
      case 'w':
        v14 = 8;
        goto LABEL_45;
      case 'S':
      case 's':
      case 't':
        v14 = 2;
        goto LABEL_45;
      case 'X':
        v41 = v226;
        if ( v226 == -2 )
        {
          v41 = 1;
          v226 = 1;
        }
        if ( v41 > v178 || v41 == -1 )
        {
          v41 = v178;
          v226 = v178;
        }
        v42 = v221;
        if ( v178 > v221 )
          v42 = v178;
        v11 = v178 - v41;
        v221 = v42;
        goto LABEL_54;
      case 'c':
        v14 = 1;
LABEL_45:
        if ( v199 >= a4 )
          goto LABEL_278;
        v36 = v226;
        if ( v226 == -2 )
        {
          ++v199;
          v226 = 1;
          v39 = v14;
        }
        else
        {
          v6 = (char *)a5[v199];
          if ( *((_UNKNOWN ***)v6 + 3) == &off_655E20 )
          {
            v134 = *((_QWORD *)v6 + 4);
            v223 = v134 + 16;
            v38 = *(_DWORD *)(v134 + 8);
            v222 = v38;
          }
          else
          {
            p_endptr = a3;
            v184 = v14;
            v37 = sub_46FD90(a3, v6, &v222, &v223);
            v14 = v184;
            v11 = v178;
            if ( v37 )
              return 1;
            v36 = v226;
            v38 = v222;
          }
          ++v199;
          if ( v36 == -1 )
          {
            v226 = v38;
            v39 = v14 * v38;
          }
          else
          {
            if ( v36 > v38 )
            {
              v133 = "number of elements in list does not match count";
LABEL_246:
              sub_48B710((_DWORD)a3, (_DWORD)v133, 0, (_DWORD)v13, v14, v11);
              return 1;
            }
            v39 = v14 * v36;
          }
        }
        break;
      case 'x':
        v39 = v226;
        if ( v226 == -1 )
        {
          v133 = "cannot use \"*\" in format string with \"x\"";
          goto LABEL_246;
        }
        if ( v226 == -2 )
        {
          v39 = 1;
          v226 = 1;
        }
        break;
      default:
        goto LABEL_57;
    }
    v11 += v39;
LABEL_54:
    v10 = endptr;
  }
  v22 = v221;
  if ( v11 > v221 )
  {
    v221 = v11;
    v22 = v11;
  }
  v8 = 0;
  if ( !v22 )
    return v8;
  v23 = (int *)sub_47B0B0(p_endptr, v6, 0);
  v191 = sub_40D530((__int64)v23, v221, v24, v25, v26, v27);
  memset(v191, 0, v221);
  v201 = 3;
  v28 = *(char **)(a5[2] + 8LL);
  if ( !v28 )
    v28 = (char *)sub_47B3B0(a5[2]);
  endptr = v28;
  s = v191;
  v29 = *v28 == 0;
  v30 = v191;
  while ( 2 )
  {
    if ( v29 || (v227 = 0, !(unsigned int)sub_40D970(&endptr, (char *)&v225, &v226, &v227)) )
    {
      sub_48AFD0(a3, v23);
      return 0;
    }
    v35 = v226;
    if ( v226 )
    {
      LODWORD(v31) = v225;
    }
    else
    {
      LODWORD(v31) = v225;
      if ( v225 != 64 )
      {
        if ( v225 != 120 )
          ++v201;
        goto LABEL_36;
      }
    }
    switch ( (char)v31 )
    {
      case '@':
        if ( s > v30 )
          v30 = s;
        if ( v226 == -1 )
          s = v30;
        else
          s = (char *)v191 + v226;
        goto LABEL_36;
      case 'A':
      case 'a':
        v93 = 0;
        if ( (_BYTE)v31 != 97 )
          v93 = 32;
        v94 = v201++;
        v95 = sub_40D5E0(a5[v94], &v221);
        v96 = v226;
        if ( v226 == -1 )
        {
          v97 = v221;
          v96 = v221;
          v226 = v221;
        }
        else
        {
          if ( v226 == -2 )
          {
            v96 = 1;
            v226 = 1;
          }
          v97 = v221;
        }
        if ( v97 < v96 )
        {
          memcpy(s, v95, v97);
          v84 = v93;
          v82 = (char *)s + v221;
          v83 = v226 - v221;
LABEL_150:
          memset(v82, v84, v83);
        }
        else
        {
          memcpy(s, v95, v96);
        }
        s = (char *)s + v226;
        goto LABEL_36;
      case 'B':
      case 'b':
        v85 = a5[v201];
        if ( *(_QWORD *)(v85 + 8) )
        {
          v86 = *(_QWORD *)(v85 + 8);
          v221 = *(_DWORD *)(v85 + 16);
        }
        else
        {
          v146 = sub_47ACD0(v85, &v221);
          LOBYTE(v31) = v225;
          v35 = v226;
          v86 = v146;
        }
        ++v201;
        if ( v35 == -1 )
        {
          v87 = v221;
          v35 = v221;
          v226 = v221;
        }
        else
        {
          if ( v35 == -2 )
          {
            v35 = 1;
            v226 = 1;
          }
          v87 = v221;
        }
        v88 = (char *)s;
        v89 = v35 + 7;
        if ( v35 + 7 < 0 )
          v89 = v35 + 14;
        v90 = (char *)s + (v89 >> 3);
        if ( v35 > v87 )
        {
          v226 = v87;
          v35 = v87;
        }
        v193 = 0;
        v188 = "binary";
        if ( (_BYTE)v31 == 66 )
        {
          for ( ii = 0; ii < v35; ++ii )
          {
            v193 *= 2;
            v161 = *(_BYTE *)(ii + v86);
            if ( v161 == 49 )
            {
              v193 |= 1u;
            }
            else if ( v161 != 48 )
            {
              goto LABEL_314;
            }
            if ( (((_BYTE)ii + 1) & 7) == 0 )
            {
              *v88 = v193;
              v35 = v226;
              v193 = 0;
              v88 = (char *)s + 1;
              s = (char *)s + 1;
            }
          }
        }
        else
        {
          for ( ii = 0; ii < v35; ++ii )
          {
            v193 >>= 1;
            v92 = *(_BYTE *)(ii + v86);
            if ( v92 == 49 )
            {
              v193 |= 0x80u;
            }
            else if ( v92 != 48 )
            {
              goto LABEL_314;
            }
            if ( (((_BYTE)ii + 1) & 7) == 0 )
            {
              *v88 = v193;
              v35 = v226;
              v193 = 0;
              v88 = (char *)s + 1;
              s = (char *)s + 1;
            }
          }
        }
        if ( (ii & 7) != 0 )
        {
          if ( v225 == 66 )
          {
            v175 = ii + 7;
            if ( ii > -1 )
              v175 = ii;
            v196 = v193 << (8 - (ii - (v175 & 0xF8)));
          }
          else
          {
            v139 = ii + 7;
            if ( ii > -1 )
              v139 = ii;
            v196 = v193 >> (8 - (ii - (v139 & 0xF8)));
          }
          *v88 = v196;
          goto LABEL_270;
        }
        while ( v88 < v90 )
        {
          *v88 = 0;
LABEL_270:
          v88 = (char *)s + 1;
          s = (char *)s + 1;
        }
        goto LABEL_36;
      case 'H':
      case 'h':
        v102 = a5[v201];
        if ( *(_QWORD *)(v102 + 8) )
        {
          v86 = *(_QWORD *)(v102 + 8);
          v221 = *(_DWORD *)(v102 + 16);
        }
        else
        {
          v147 = sub_47ACD0(v102, &v221);
          LOBYTE(v31) = v225;
          v35 = v226;
          v86 = v147;
        }
        ++v201;
        if ( v35 == -1 )
        {
          v103 = v221;
          v35 = v221;
          v226 = v221;
        }
        else
        {
          if ( v35 == -2 )
          {
            v35 = 1;
            v226 = 1;
          }
          v103 = v221;
        }
        v104 = (char *)s;
        v105 = (char *)s + (v35 + 1) / 2;
        if ( v35 > v103 )
        {
          v226 = v103;
          v35 = v103;
        }
        v194 = 0;
        v188 = "hexadecimal";
        if ( (_BYTE)v31 != 72 )
        {
          LOBYTE(v106) = 0;
          if ( v35 > 0 )
          {
            v155 = __ctype_b_loc();
            v106 = 0;
            v156 = v155;
            while ( 1 )
            {
              v198 = v194 >> 4;
              v160 = *(_BYTE *)(v106 + v86);
              if ( ((*v156)[v160] & 0x1000) == 0 )
                goto LABEL_314;
              v157 = (char)v160;
              v158 = (char)v160 - 48;
              v159 = v157 - 55;
              if ( v158 >= 10 )
                v158 = v159;
              if ( v158 >= 17 )
                LOBYTE(v158) = v158 - 32;
              v194 = (unsigned __int8)(16 * v158) | v198;
              if ( (v106 & 1) != 0 )
              {
                *v104 = v194;
                v35 = v226;
                v194 = 0;
                v104 = (char *)s + 1;
                s = (char *)s + 1;
              }
              if ( ++v106 >= v35 )
                goto LABEL_202;
            }
          }
          goto LABEL_202;
        }
        LOBYTE(v106) = 0;
        if ( v35 <= 0 )
        {
LABEL_202:
          if ( (v106 & 1) != 0 )
          {
            v107 = v194;
            v195 = v194 >> 4;
            v108 = 16 * v107;
            if ( v225 != 72 )
              v108 = v195;
            *v104 = v108;
            goto LABEL_207;
          }
          while ( v104 < v105 )
          {
            *v104 = 0;
LABEL_207:
            v104 = (char *)s + 1;
            s = (char *)s + 1;
          }
LABEL_36:
          v29 = *endptr == 0;
          continue;
        }
        v148 = __ctype_b_loc();
        v106 = 0;
        v149 = v148;
        while ( 1 )
        {
          v197 = 16 * v194;
          v153 = *(_BYTE *)(v106 + v86);
          if ( ((*v149)[v153] & 0x1000) == 0 )
            break;
          v150 = (char)v153;
          v151 = (char)v153 - 48;
          v152 = v150 - 55;
          if ( v151 >= 10 )
            v151 = v152;
          if ( v151 >= 17 )
            LOBYTE(v151) = v151 - 32;
          v194 = v151 & 0xF | v197;
          if ( (v106 & 1) != 0 )
          {
            *v104 = v194;
            v35 = v226;
            v194 = 0;
            v104 = (char *)s + 1;
            s = (char *)s + 1;
          }
          if ( ++v106 >= v35 )
            goto LABEL_202;
        }
LABEL_314:
        v154 = *v23 - 1;
        v29 = *v23 == 1;
        *v23 = v154;
        if ( v154 < 0 || v29 )
          sub_47B120(v23);
        sub_48B350(a3);
        sub_48B710(
          (_DWORD)a3,
          (unsigned int)"expected ",
          (_DWORD)v188,
          (unsigned int)" string but got \"",
          v86,
          (unsigned int)"\" instead");
        return 1;
      case 'I':
      case 'Q':
      case 'R':
      case 'S':
      case 'W':
      case 'c':
      case 'd':
      case 'f':
      case 'i':
      case 'm':
      case 'n':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'w':
        if ( v226 == -2 )
        {
          v32 = (int)a5;
          v35 = 1;
          v219 = 1;
          v226 = 1;
          v220 = &a5[v201];
        }
        else
        {
          v31 = a5[v201];
          if ( *(_UNKNOWN ***)(v31 + 24) == &off_655E20 )
          {
            v162 = *(_QWORD *)(v31 + 32);
            v163 = (_QWORD *)(v162 + 16);
            LODWORD(v162) = *(_DWORD *)(v162 + 8);
            v220 = v163;
            v219 = v162;
          }
          else
          {
            sub_46FD90(a3, v31, &v219, &v220);
            v35 = v226;
          }
          if ( v35 == -1 )
          {
            v35 = v219;
            v226 = v219;
          }
        }
        v99 = 0;
        ++v201;
        if ( v35 <= 0 )
          goto LABEL_36;
        while ( 2 )
        {
          v100 = (char)v225;
          v101 = v220[v99];
          switch ( v225 )
          {
            case 'I':
            case 'i':
            case 'n':
              if ( *(_UNKNOWN ***)(v101 + 24) == &off_6560E0 )
              {
                v115 = *(_QWORD *)(v101 + 32);
                v207 = v115;
              }
              else
              {
                v31 = v220[v99];
                if ( (unsigned int)sub_47BF00(a3, v31, &v207) )
                  goto LABEL_12;
              }
              if ( (unsigned int)sub_40DA70(v100, v31, v115, v32, v33, v34) )
              {
                *(_BYTE *)s = v207;
                v116 = s;
                s = (char *)s + 1;
                v116[1] = BYTE1(v207);
                v117 = s;
                s = (char *)s + 1;
                v117[1] = BYTE2(v207);
                v118 = s;
                s = (char *)s + 1;
                v118[1] = BYTE3(v207);
                goto LABEL_233;
              }
              *(_BYTE *)s = BYTE3(v207);
              v165 = s;
              s = (char *)s + 1;
              v165[1] = BYTE2(v207);
              v166 = s;
              s = (char *)s + 1;
              v166[1] = BYTE1(v207);
              goto LABEL_345;
            case 'Q':
            case 'd':
            case 'q':
              if ( !(unsigned int)sub_47BA50(a3, v220[v99], &v217) )
                goto LABEL_228;
              if ( *(_UNKNOWN ***)(v101 + 24) != &off_656120 )
                goto LABEL_12;
              v217 = *(double *)(v101 + 32);
LABEL_228:
              LODWORD(v31) = (_DWORD)s;
              sub_40DAE0(&v217, s, 8u, v100, v113, v114);
              s = (char *)s + 8;
              goto LABEL_223;
            case 'R':
            case 'f':
            case 'r':
              if ( (unsigned int)sub_47BA50(a3, v220[v99], &v217) )
              {
                if ( *(_UNKNOWN ***)(v101 + 24) != &off_656120 )
                  goto LABEL_12;
                v111 = *(double *)(v101 + 32);
                v217 = v111;
              }
              else
              {
                v111 = v217;
              }
              a1.m128d_f64[0] = v111;
              a1 = _mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_506560);
              if ( a1.m128d_f64[0] <= 3.402823466385289e38 )
              {
                v164 = v111;
                src = v164;
              }
              else
              {
                v112 = 2139095039;
                if ( v111 < 0.0 )
                  v112 = -8388609;
                src = *(float *)&v112;
              }
              LODWORD(v31) = (_DWORD)s;
              sub_40DAE0(&src, s, 4u, v100, v109, v110);
              s = (char *)s + 4;
              goto LABEL_223;
            case 'S':
            case 's':
            case 't':
              if ( *(_UNKNOWN ***)(v101 + 24) == &off_6560E0 )
              {
                v131 = *(_QWORD *)(v101 + 32);
                v207 = v131;
                goto LABEL_243;
              }
              v31 = v220[v99];
              if ( !(unsigned int)sub_47BF00(a3, v31, &v207) )
              {
LABEL_243:
                if ( (unsigned int)sub_40DA70(v100, v31, v131, v32, v33, v34) )
                {
                  *(_BYTE *)s = v207;
                  v132 = s;
                  s = (char *)s + 1;
                  v132[1] = BYTE1(v207);
                }
                else
                {
                  *(_BYTE *)s = BYTE1(v207);
LABEL_345:
                  v167 = s;
                  s = (char *)s + 1;
                  v167[1] = v207;
                }
LABEL_233:
                s = (char *)s + 1;
LABEL_223:
                if ( ++v99 >= v226 )
                  goto LABEL_36;
                continue;
              }
              goto LABEL_12;
            case 'W':
            case 'm':
            case 'w':
              v31 = v220[v99];
              if ( (unsigned int)sub_47C250(a3, v31, &v208) )
                goto LABEL_12;
              if ( (unsigned int)sub_40DA70(v100, v31, v120, v121, v122, v123) )
              {
                *(_BYTE *)s = v208;
                v124 = s;
                s = (char *)s + 1;
                v124[1] = v209;
                v125 = s;
                s = (char *)s + 1;
                v125[1] = v210;
                v126 = s;
                s = (char *)s + 1;
                v126[1] = v211;
                v127 = s;
                s = (char *)s + 1;
                v127[1] = v212;
                v128 = s;
                s = (char *)s + 1;
                v128[1] = v213;
                v129 = s;
                s = (char *)s + 1;
                v129[1] = v214;
                v130 = s;
                s = (char *)s + 1;
                v130[1] = v215;
              }
              else
              {
                *(_BYTE *)s = v215;
                v168 = s;
                s = (char *)s + 1;
                v168[1] = v214;
                v169 = s;
                s = (char *)s + 1;
                v169[1] = v213;
                v170 = s;
                s = (char *)s + 1;
                v170[1] = v212;
                v171 = s;
                s = (char *)s + 1;
                v171[1] = v211;
                v172 = s;
                s = (char *)s + 1;
                v172[1] = v210;
                v173 = s;
                s = (char *)s + 1;
                v173[1] = v209;
                v174 = s;
                s = (char *)s + 1;
                v174[1] = v208;
              }
              goto LABEL_233;
            case 'c':
              if ( *(_UNKNOWN ***)(v101 + 24) == &off_6560E0 )
              {
                v119 = *(_QWORD *)(v101 + 32);
                v207 = v119;
              }
              else
              {
                v31 = v220[v99];
                if ( (unsigned int)sub_47BF00(a3, v31, &v207) )
                {
LABEL_12:
                  v15 = *v23 - 1;
                  v29 = *v23 == 1;
                  *v23 = v15;
                  if ( v15 < 0 || v29 )
                    sub_47B120(v23);
                  return 1;
                }
                LOBYTE(v119) = v207;
              }
              *(_BYTE *)s = v119;
              s = (char *)s + 1;
              goto LABEL_223;
            default:
              sub_47D740((unsigned int)"unexpected fallthrough", v31, v99, v32, v33, v34);
              goto LABEL_12;
          }
        }
      case 'X':
        if ( s > v30 )
          v30 = s;
        if ( v226 == -2 )
        {
          v35 = 1;
          v226 = 1;
        }
        else if ( v226 == -1 )
        {
          goto LABEL_183;
        }
        if ( v35 > (_BYTE *)s - (_BYTE *)v191 )
        {
LABEL_183:
          v98 = (char *)v191;
          goto LABEL_184;
        }
        v98 = (char *)s - v35;
LABEL_184:
        s = v98;
        goto LABEL_36;
      case 'x':
        if ( v226 == -2 )
        {
          v35 = 1;
          v226 = 1;
        }
        v82 = (char *)s;
        v83 = v35;
        v84 = 0;
        goto LABEL_150;
      default:
        goto LABEL_36;
    }
  }
}

