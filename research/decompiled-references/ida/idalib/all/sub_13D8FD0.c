__int64 __fastcall sub_13D8FD0(__int64 a1, __int64 a2, char a3, __m128i a4, double a5)
{
  unsigned __int8 *v7; // rcx
  char v8; // al
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r15
  unsigned __int8 *v11; // r13
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rdx
  int v14; // eax
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  unsigned __int8 *v17; // r15
  unsigned __int8 v18; // al
  __int16 v19; // bp
  unsigned __int8 *v20; // rdx
  int v21; // eax
  __int64 result; // rax
  unsigned __int8 *v23; // r15
  _WORD *v24; // rax
  unsigned __int8 *v25; // rbp
  unsigned __int8 v26; // al
  unsigned __int8 *v27; // rsi
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  int v30; // eax
  unsigned int v31; // r15d
  _WORD *v32; // rax
  unsigned __int8 *v33; // rbp
  unsigned __int8 v34; // al
  unsigned __int8 *v35; // rsi
  unsigned __int8 v36; // al
  unsigned int v37; // r12d
  unsigned __int8 *v38; // rbp
  __int64 v39; // rbp
  unsigned __int8 *v40; // r15
  unsigned __int8 v41; // al
  bool v42; // zf
  unsigned __int8 *v43; // rdx
  unsigned __int8 v44; // al
  unsigned __int8 *v45; // rsi
  unsigned __int8 v46; // al
  unsigned __int8 *v47; // r15
  unsigned __int8 v48; // al
  unsigned __int8 *v49; // r15
  unsigned __int8 *v50; // r13
  __int64 v51; // rdx
  unsigned __int8 v52; // al
  unsigned __int8 *v53; // rdx
  unsigned __int8 *v54; // r15
  unsigned __int8 *v55; // r13
  unsigned __int8 *v56; // r15
  unsigned __int8 *v57; // r13
  unsigned __int8 v58; // al
  unsigned __int8 *v59; // r13
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  unsigned __int8 *v62; // rdx
  __int64 v63; // rax
  unsigned __int8 *v64; // rbp
  unsigned __int8 v65; // dl
  __int64 v66; // rcx
  unsigned __int8 *v67; // r15
  unsigned __int8 v68; // al
  unsigned __int8 *v69; // rsi
  unsigned __int8 v70; // al
  unsigned __int8 *v71; // rdx
  int v72; // ecx
  unsigned __int8 *v73; // r15
  unsigned __int8 *v74; // r13
  unsigned __int8 *v75; // r15
  unsigned __int8 *v76; // r13
  unsigned __int8 v77; // al
  unsigned __int8 *v78; // rdx
  unsigned __int8 *v79; // r15
  unsigned __int8 *v80; // rdx
  unsigned int v81; // eax
  unsigned __int8 v82; // al
  __int64 v83; // rax
  unsigned __int8 *v84; // rdx
  unsigned __int64 v85; // rax
  unsigned __int8 *v86; // rdx
  char v87; // al
  char v88; // al
  char v89; // al
  char v90; // al
  char v91; // al
  unsigned __int8 *v92; // rsi
  unsigned __int8 v93; // al
  unsigned int v94; // r12d
  unsigned __int8 *v95; // r13
  __int64 v96; // rax
  char v97; // al
  __int64 v98; // rdx
  unsigned __int8 *v99; // rbp
  unsigned __int8 *v100; // rbp
  unsigned __int8 *v101; // r15
  unsigned __int8 *v102; // r13
  unsigned __int8 *v103; // rbp
  unsigned int v104; // edx
  unsigned __int8 *v105; // rsi
  unsigned __int8 v106; // al
  __int64 v107; // rax
  unsigned __int8 *v108; // rdx
  unsigned int v109; // r12d
  unsigned __int8 *v110; // r13
  unsigned int v111; // r12d
  unsigned __int8 *v112; // r13
  unsigned __int8 *v113; // rdx
  unsigned __int8 *v114; // rdx
  unsigned __int8 *v115; // rsi
  unsigned __int8 v116; // al
  unsigned __int8 *v117; // rsi
  unsigned __int8 v118; // al
  unsigned int v119; // r12d
  unsigned __int8 *v120; // rsi
  unsigned __int8 v121; // al
  unsigned __int8 v122; // al
  unsigned int v123; // r12d
  unsigned __int8 *v124; // rbp
  __int64 v125; // rbp
  unsigned __int8 *v126; // rsi
  unsigned __int8 v127; // al
  unsigned int v128; // r12d
  unsigned __int8 *v129; // rbp
  __int64 v130; // rbp
  unsigned __int8 v131; // al
  unsigned __int8 *v132; // rbp
  unsigned __int8 *v133; // rdx
  __int64 v134; // rdi
  unsigned int v135; // r12d
  unsigned __int8 *v136; // rbp
  unsigned __int8 *v137; // rbp
  __int64 v138; // rax
  unsigned int v139; // r12d
  unsigned __int8 *v140; // rbp
  __int64 v141; // rdx
  unsigned __int8 *v142; // rsi
  unsigned __int8 v143; // al
  int v144; // r12d
  unsigned __int8 *v145; // rbp
  unsigned int v146; // r13d
  unsigned __int8 *v147; // rbp
  __int64 v148; // rdx
  unsigned int v149; // r12d
  unsigned __int8 *v150; // rbp
  unsigned __int8 *v151; // rbp
  unsigned int v152; // r12d
  unsigned __int8 *v153; // r13
  unsigned int v154; // r12d
  unsigned __int8 *v155; // r13
  unsigned __int8 *v156; // rdx
  int v157; // eax
  unsigned __int8 *v158; // rsi
  unsigned __int8 v159; // al
  unsigned __int8 *v160; // rsi
  unsigned __int8 v161; // al
  unsigned __int8 *v162; // r13
  char v163; // al
  size_t v164; // r13
  int v165; // eax
  unsigned int v166; // r12d
  unsigned __int8 *v167; // rbp
  unsigned __int8 *v168; // rbp
  unsigned __int8 *v169; // rsi
  unsigned __int8 v170; // al
  _BYTE v171[4]; // [rsp+1Ch] [rbp-DCh] BYREF
  unsigned int v172; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v173; // [rsp+24h] [rbp-D4h] BYREF
  unsigned __int8 *v174; // [rsp+28h] [rbp-D0h] BYREF
  int v175[6]; // [rsp+30h] [rbp-C8h] BYREF
  void *v176; // [rsp+48h] [rbp-B0h]
  __int64 v177; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v178[17]; // [rsp+70h] [rbp-88h] BYREF

  v171[0] = a3;
  while ( 2 )
  {
    v7 = *(unsigned __int8 **)(a1 + 152);
    v174 = v7;
    if ( (byte_2411740[2 * *v7] & 5) != 0 )
    {
      v9 = v7 + 1;
      do
      {
        v10 = v9;
        v174 = v9++;
      }
      while ( (byte_2411740[2 * *v10] & 5) != 0 );
      if ( *(_BYTE *)(a1 + 146) > 1u )
      {
        *(_DWORD *)(a2 + 4) = (_DWORD)v10 - (_DWORD)v7;
        *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v10 - (int)v7);
        *(_WORD *)(a2 + 16) = 0;
        *(_QWORD *)(a1 + 152) = v10;
        return 1;
      }
      *(_QWORD *)(a1 + 152) = v10;
      *(_WORD *)(a2 + 18) |= 2u;
    }
    v8 = sub_13D18B0(a1, &v174, a2);
    if ( (byte_2411740[2 * (unsigned __int8)v8] & 2) == 0 )
      *(_QWORD *)(a1 + 168) = 0;
    switch ( v8 )
    {
      case 0:
        v11 = v174;
        v15 = v174 - 1;
        if ( v174 - 1 == *(unsigned __int8 **)(a1 + 120) )
          return sub_13D5B70(a1, a2, (__int64)v15);
        v16 = *(_QWORD *)(a1 + 8);
        if ( !v16
          || !*(_QWORD *)(v16 + 760)
          || *(_DWORD *)(a1 + 128) + (_DWORD)v15 - *(_DWORD *)(a1 + 112) != *(_DWORD *)(v16 + 772) )
        {
          if ( !*(_BYTE *)(a1 + 26) )
          {
            sub_13D1530((__int64)v178, a1, (__int64)v15, 1281);
            sub_AEA040((__int64)v178);
            v11 = v174;
          }
          *(_WORD *)(a2 + 18) |= 2u;
          goto LABEL_15;
        }
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 16) = 0;
        v156 = &v11[-*(_QWORD *)(a1 + 152)];
        *(_DWORD *)(a2 + 4) = (_DWORD)v156;
        v157 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v156);
        *(_WORD *)(a2 + 16) = 3;
        *(_DWORD *)a2 = v157;
        *(_QWORD *)(a1 + 152) = v11;
        return 1;
      case 9:
      case 11:
      case 12:
      case 32:
        v13 = v174;
        goto LABEL_19;
      case 10:
        goto LABEL_12;
      case 13:
        v11 = v174;
        if ( *v174 != 10 )
          goto LABEL_13;
        sub_13D18B0(a1, &v174, a2);
LABEL_12:
        v11 = v174;
LABEL_13:
        if ( *(_BYTE *)(a1 + 24) )
        {
          v138 = *(_QWORD *)(a1 + 8);
          *(_BYTE *)(a1 + 24) = 0;
          if ( v138 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 14LL) & 4) != 0 )
              *(_BYTE *)(a1 + 146) = 2;
            else
              *(_BYTE *)(a1 + 146) = *(_BYTE *)(v138 + 544) & 1;
          }
          v19 = 2;
          *(_WORD *)(a1 + 160) = 257;
          *(_QWORD *)(a1 + 168) = v11 - 1;
          goto LABEL_41;
        }
        *(_WORD *)(a2 + 18) &= ~2u;
LABEL_15:
        v12 = v11;
LABEL_16:
        if ( (unsigned __int8)sub_13D1DA0(a1, a2, v12, v171) )
          return 1;
        goto LABEL_17;
      case 26:
        v19 = 0;
        v11 = v174;
        if ( **(char **)(a1 + 136) >= 0 )
          goto LABEL_41;
        v15 = v174 - 1;
        if ( !*(_BYTE *)(a1 + 26) )
        {
          sub_13D1530((__int64)v178, a1, (__int64)v15, 1213);
          sub_AEA040((__int64)v178);
          v15 = v174 - 1;
        }
        return sub_13D5B70(a1, a2, (__int64)v15);
      case 33:
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v87 = sub_13D1890(a1, v174, &v172);
          v11 = v174;
          if ( v87 != 61 )
            goto LABEL_196;
          if ( v172 != 1 )
          {
            v11 += sub_13D1690(a1, v174, a2) >> 32;
LABEL_263:
            v174 = v11;
            v19 = 42;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          if ( *v174 != 61 )
          {
LABEL_196:
            v19 = 41;
            goto LABEL_41;
          }
        }
        ++v11;
        goto LABEL_263;
      case 34:
        v71 = v174;
        v72 = -(*(_BYTE *)(a1 + 25) == 0);
        *(_WORD *)(a1 + 32) = 1;
        return sub_13D8C50(a1, a2, v71, (v72 & 0xFFFEu) + 16, *(double *)a4.m128i_i64, a5);
      case 35:
        v59 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v60 = sub_13D1890(a1, v174, &v172);
          if ( v60 == 35 )
          {
            v59 = v174;
            if ( v172 == 1 )
              goto LABEL_402;
            goto LABEL_244;
          }
        }
        else
        {
          v172 = 1;
          v60 = *v174;
          if ( *v174 == 35 )
            goto LABEL_402;
        }
        if ( v60 == 64 && **(char **)(a1 + 136) < 0 )
        {
          if ( !*(_BYTE *)(a1 + 26) )
          {
            sub_13D1530((__int64)v178, a1, *(_QWORD *)(a1 + 152), 1210);
            sub_AEA040((__int64)v178);
          }
          v102 = v174;
          if ( v172 == 1 )
            v11 = v174 + 1;
          else
            v11 = &v102[sub_13D1690(a1, v174, a2) >> 32];
          v174 = v11;
          v19 = 69;
          goto LABEL_41;
        }
        if ( !v171[0] || *(_BYTE *)(a1 + 26) || *(_BYTE *)(a1 + 145) )
        {
          v11 = v174;
          v19 = 67;
          goto LABEL_41;
        }
        goto LABEL_438;
      case 36:
        v11 = v174;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 1) == 0 )
          goto LABEL_241;
        if ( !*(_BYTE *)(a1 + 26) )
        {
          sub_13D1530((__int64)v178, a1, (__int64)(v174 - 1), 1218);
          sub_AEA040((__int64)v178);
          v11 = v174;
        }
        *(_WORD *)(a1 + 32) = 1;
        return sub_13D79E0(a1, a2, v11);
      case 37:
        v56 = v174;
        v57 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v58 = sub_13D1890(a1, v174, &v172);
          if ( v58 != 61 )
          {
            v56 = v174;
LABEL_134:
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 12LL) & 2) == 0 )
              goto LABEL_137;
            if ( v58 == 62 )
            {
              v11 = v56 + 1;
              if ( v172 != 1 )
                v11 = &v56[sub_13D1690(a1, v56, a2) >> 32];
              v174 = v11;
              v19 = 25;
              goto LABEL_41;
            }
            if ( v58 != 58 )
            {
LABEL_137:
              v11 = v56;
              v19 = 45;
              goto LABEL_41;
            }
            v11 = v56 + 1;
            if ( v172 != 1 )
              v11 = &v56[sub_13D1690(a1, v56, a2) >> 32];
            v174 = v11;
            if ( *v11 == 63 || *v11 == 92 )
            {
              v131 = sub_13D1890(a1, v11, &v172);
              v11 = v174;
            }
            else
            {
              v172 = 1;
              v131 = *v11;
            }
            if ( v131 == 37 )
            {
              v117 = &v11[v172];
              if ( *v117 == 63 || *v117 == 92 )
              {
                v118 = sub_13D1890(a1, v117, &v173);
              }
              else
              {
                v173 = 1;
                v118 = *v117;
              }
              v11 = v174;
              if ( v118 == 58 )
              {
                v119 = v173;
                if ( v172 == 1 )
                  v59 = v174 + 1;
                else
                  v59 = &v11[sub_13D1690(a1, v174, a2) >> 32];
                if ( v119 == 1 )
LABEL_402:
                  v11 = v59 + 1;
                else
LABEL_244:
                  v11 = &v59[sub_13D1690(a1, v59, a2) >> 32];
                v174 = v11;
                v19 = 68;
                goto LABEL_41;
              }
            }
            else if ( v131 == 64 && **(char **)(a1 + 136) < 0 )
            {
              if ( v172 == 1 )
                ++v11;
              else
                v11 += sub_13D1690(a1, v11, a2) >> 32;
              v42 = *(_BYTE *)(a1 + 26) == 0;
              v174 = v11;
              v19 = 69;
              if ( v42 )
              {
                sub_13D1530((__int64)v178, a1, *(_QWORD *)(a1 + 152), 1210);
                sub_AEA040((__int64)v178);
                v11 = v174;
              }
              goto LABEL_41;
            }
            v19 = 67;
            if ( v171[0] && !*(_BYTE *)(a1 + 26) && !*(_BYTE *)(a1 + 145) )
            {
LABEL_438:
              v132 = v174;
              v133 = &v174[-*(_QWORD *)(a1 + 152)];
              *(_DWORD *)(a2 + 4) = (_DWORD)v133;
              *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v133);
              *(_WORD *)(a2 + 16) = 67;
              v134 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)(a1 + 152) = v132;
              sub_142AA40(v134, a2);
              return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 9LL);
            }
            goto LABEL_41;
          }
          v57 = v174;
          if ( v172 != 1 )
          {
            v11 = &v57[sub_13D1690(a1, v174, a2) >> 32];
LABEL_342:
            v174 = v11;
            v19 = 46;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          v58 = *v174;
          if ( *v174 != 61 )
            goto LABEL_134;
        }
        v11 = v57 + 1;
        goto LABEL_342;
      case 38:
        v54 = v174;
        v55 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v88 = sub_13D1890(a1, v174, &v172);
          if ( v88 != 38 )
          {
            v54 = v174;
            if ( v88 != 61 )
              goto LABEL_130;
            if ( v172 != 1 )
            {
              v11 = &v54[sub_13D1690(a1, v174, a2) >> 32];
LABEL_268:
              v174 = v11;
              v19 = 30;
              goto LABEL_41;
            }
LABEL_444:
            v11 = v54 + 1;
            goto LABEL_268;
          }
          v55 = v174;
          if ( v172 != 1 )
          {
            v11 = &v55[sub_13D1690(a1, v174, a2) >> 32];
LABEL_351:
            v174 = v11;
            v19 = 29;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          if ( *v174 != 38 )
          {
            if ( *v174 != 61 )
            {
LABEL_130:
              v11 = v54;
              v19 = 28;
              goto LABEL_41;
            }
            goto LABEL_444;
          }
        }
        v11 = v55 + 1;
        goto LABEL_351;
      case 39:
        v78 = v174;
        *(_WORD *)(a1 + 32) = 1;
        return sub_13D8530(a1, a2, v78, 9, *(double *)a4.m128i_i64, a5);
      case 40:
        v11 = v174;
        v19 = 22;
        goto LABEL_41;
      case 41:
        v11 = v174;
        v19 = 23;
        goto LABEL_41;
      case 42:
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v91 = sub_13D1890(a1, v174, &v172);
          v11 = v174;
          if ( v91 != 61 )
            goto LABEL_175;
          if ( v172 != 1 )
          {
            v11 += sub_13D1690(a1, v174, a2) >> 32;
LABEL_286:
            v174 = v11;
            v19 = 32;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          if ( *v174 != 61 )
          {
LABEL_175:
            v19 = 31;
            goto LABEL_41;
          }
        }
        ++v11;
        goto LABEL_286;
      case 43:
        v73 = v174;
        v74 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v90 = sub_13D1890(a1, v174, &v172);
          if ( v90 != 43 )
          {
            v73 = v174;
            if ( v90 != 61 )
              goto LABEL_206;
            if ( v172 != 1 )
            {
              v11 = &v73[sub_13D1690(a1, v174, a2) >> 32];
LABEL_279:
              v174 = v11;
              v19 = 35;
              goto LABEL_41;
            }
LABEL_443:
            v11 = v73 + 1;
            goto LABEL_279;
          }
          v74 = v174;
          if ( v172 != 1 )
          {
            v11 = &v74[sub_13D1690(a1, v174, a2) >> 32];
LABEL_354:
            v174 = v11;
            v19 = 34;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          if ( *v174 != 43 )
          {
            if ( *v174 != 61 )
            {
LABEL_206:
              v11 = v73;
              v19 = 33;
              goto LABEL_41;
            }
            goto LABEL_443;
          }
        }
        v11 = v74 + 1;
        goto LABEL_354;
      case 44:
        v11 = v174;
        v19 = 66;
        goto LABEL_41;
      case 45:
        v75 = v174;
        v76 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v77 = sub_13D1890(a1, v174, &v172);
          if ( v77 != 45 )
          {
            v75 = v174;
LABEL_210:
            if ( v77 == 62 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 )
              {
                v103 = v75;
                v104 = v172;
                v105 = &v75[v172];
                if ( *v105 == 63 || *v105 == 92 )
                {
                  v106 = sub_13D1890(a1, v105, &v173);
                  v104 = v172;
                  v103 = v174;
                }
                else
                {
                  v173 = 1;
                  v106 = *v105;
                }
                if ( v106 == 42 )
                {
                  v139 = v173;
                  if ( v104 == 1 )
                    v140 = v103 + 1;
                  else
                    v140 = &v103[sub_13D1690(a1, v103, a2) >> 32];
                  v11 = v140 + 1;
                  if ( v139 != 1 )
                    v11 = &v140[sub_13D1690(a1, v140, a2) >> 32];
                  v174 = v11;
                  v19 = 71;
                  goto LABEL_41;
                }
              }
              else
              {
                v104 = v172;
                v103 = v75;
              }
              v11 = v103 + 1;
              if ( v104 != 1 )
                v11 = &v103[sub_13D1690(a1, v103, a2) >> 32];
              v174 = v11;
              v19 = 37;
            }
            else if ( v77 == 61 )
            {
              v11 = v75 + 1;
              if ( v172 != 1 )
                v11 = &v75[sub_13D1690(a1, v75, a2) >> 32];
              v174 = v11;
              v19 = 39;
            }
            else
            {
              v11 = v75;
              v19 = 36;
            }
            goto LABEL_41;
          }
          v76 = v174;
          if ( v172 != 1 )
          {
            v11 = &v76[sub_13D1690(a1, v174, a2) >> 32];
LABEL_345:
            v174 = v11;
            v19 = 38;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          v77 = *v174;
          if ( *v174 != 45 )
            goto LABEL_210;
        }
        v11 = v76 + 1;
        goto LABEL_345;
      case 46:
        v40 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v41 = sub_13D1890(a1, v174, &v172);
          v40 = v174;
        }
        else
        {
          v172 = 1;
          v41 = *v174;
        }
        if ( (unsigned __int8)(v41 - 48) <= 9u )
        {
          v42 = v172 == 1;
          v43 = v40 + 1;
          *(_WORD *)(a1 + 32) = 1;
          if ( !v42 )
            v43 = &v40[sub_13D1690(a1, v40, a2) >> 32];
          return sub_13D7470(a1, a2, v43);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL) & 8) != 0 && v41 == 42 )
        {
          v19 = 70;
          v11 = &v40[v172];
          v174 = v11;
        }
        else
        {
          v11 = v40;
          v19 = 26;
          if ( v41 == 46 )
          {
            v92 = &v40[v172];
            if ( *v92 == 63 || *v92 == 92 )
            {
              v93 = sub_13D1890(a1, v92, &v173);
              v11 = v174;
            }
            else
            {
              v173 = 1;
              v93 = *v92;
            }
            v19 = 26;
            if ( v93 == 46 )
            {
              v94 = v173;
              if ( v172 == 1 )
                v95 = v11 + 1;
              else
                v95 = &v11[sub_13D1690(a1, v11, a2) >> 32];
              if ( v94 == 1 )
                v11 = v95 + 1;
              else
                v11 = &v95[sub_13D1690(a1, v95, a2) >> 32];
              v174 = v11;
              v19 = 27;
            }
          }
        }
        goto LABEL_41;
      case 47:
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v61 = sub_13D1890(a1, v174, &v172);
          v11 = v174;
        }
        else
        {
          v172 = 1;
          v61 = *v174;
        }
        if ( v61 == 47 )
        {
          if ( *(_BYTE *)(a1 + 144)
            && ((v96 = *(_QWORD *)(a1 + 136), (*(_BYTE *)(v96 + 1) & 8) != 0) || (*(_BYTE *)(v96 + 14) & 4) == 0)
            || ((v107 = *(_QWORD *)(a1 + 8)) == 0 || (*(_BYTE *)(v107 + 545) & 2) == 0)
            && ((v115 = &v11[v172], *v115 == 63) || *v115 == 92
              ? (v116 = sub_13D1890(a1, v115, &v173), v11 = v174)
              : (unsigned __int8 *)(v173 = 1, v116 = *v115),
                v116 != 42) )
          {
            v84 = v11 + 1;
            if ( v172 != 1 )
              v84 = &v11[sub_13D1690(a1, v11, a2) >> 32];
            while ( 2 )
            {
              if ( (unsigned __int8)sub_13D3880((_BYTE *)a1, a2, v84, v171, *(double *)a4.m128i_i64, a5) )
                return 1;
              while ( 1 )
              {
LABEL_20:
                v13 = *(unsigned __int8 **)(a1 + 152);
                v174 = v13;
                v14 = *v13;
                if ( (_BYTE)v14 != 47 )
                  goto LABEL_21;
                v82 = v13[1];
                if ( v82 == 47 )
                  break;
                if ( v82 != 42 || *(_BYTE *)(a1 + 146) )
                  goto LABEL_227;
                if ( (unsigned __int8)sub_13D1F90(a1, a2, v13 + 2, v171, a4) )
                  return 1;
              }
              if ( !*(_BYTE *)(a1 + 146) )
              {
                if ( *(_BYTE *)(a1 + 144) )
                {
                  v83 = *(_QWORD *)(a1 + 136);
                  if ( (*(_BYTE *)(v83 + 1) & 8) != 0 || (*(_BYTE *)(v83 + 14) & 4) == 0 )
                  {
                    v84 = v13 + 2;
                    continue;
                  }
                }
              }
              break;
            }
LABEL_227:
            v14 = 47;
LABEL_21:
            if ( (byte_2411740[2 * v14] & 5) == 0 )
              goto LABEL_17;
LABEL_19:
            *(_WORD *)(a2 + 18) |= 2u;
            if ( (unsigned __int8)sub_13D1DA0(a1, a2, v13, v171) )
              return 1;
            goto LABEL_20;
          }
LABEL_339:
          v19 = 43;
          goto LABEL_41;
        }
        if ( v61 != 42 )
        {
          if ( v61 == 61 )
          {
            if ( v172 == 1 )
              ++v11;
            else
              v11 += sub_13D1690(a1, v11, a2) >> 32;
            v174 = v11;
            v19 = 44;
            goto LABEL_41;
          }
          goto LABEL_339;
        }
        v62 = v11 + 1;
        if ( v172 != 1 )
          v62 = &v11[sub_13D1690(a1, v11, a2) >> 32];
        if ( (unsigned __int8)sub_13D1F90(a1, a2, v62, v171, a4) )
          return 1;
        goto LABEL_17;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        v53 = v174;
        *(_WORD *)(a1 + 32) = 1;
        return sub_13D7470(a1, a2, v53);
      case 58:
        v49 = v174;
        v50 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v89 = sub_13D1890(a1, v174, &v172);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 12LL) & 2) == 0 || v89 != 62 )
          {
            v49 = v174;
            if ( v89 != 58 )
              goto LABEL_124;
            if ( v172 != 1 )
            {
              v11 = &v49[sub_13D1690(a1, v174, a2) >> 32];
LABEL_274:
              v174 = v11;
              v19 = 72;
              goto LABEL_41;
            }
LABEL_417:
            v11 = v49 + 1;
            goto LABEL_274;
          }
          v50 = v174;
          if ( v172 != 1 )
          {
            v11 = &v50[sub_13D1690(a1, v174, a2) >> 32];
LABEL_390:
            v174 = v11;
            v19 = 21;
            goto LABEL_41;
          }
        }
        else
        {
          v51 = *(_QWORD *)(a1 + 136);
          v172 = 1;
          v52 = *v174;
          if ( (*(_BYTE *)(v51 + 12) & 2) == 0 || v52 != 62 )
          {
            if ( v52 != 58 )
            {
LABEL_124:
              v11 = v49;
              v19 = 62;
              goto LABEL_41;
            }
            goto LABEL_417;
          }
        }
        v11 = v50 + 1;
        goto LABEL_390;
      case 59:
        v11 = v174;
        v19 = 63;
        goto LABEL_41;
      case 60:
        v67 = v174;
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v68 = sub_13D1890(a1, v174, &v172);
          v67 = v174;
          v11 = v174;
        }
        else
        {
          v172 = 1;
          v68 = *v174;
        }
        if ( *(_BYTE *)(a1 + 25) )
          return sub_13D44E0(a1, a2, v67);
        if ( v68 != 60 )
        {
          if ( v68 == 61 )
          {
            v160 = &v67[v172];
            if ( *v160 == 63 || *v160 == 92 )
            {
              v161 = sub_13D1890(a1, v160, &v173);
            }
            else
            {
              v173 = 1;
              v161 = *v160;
            }
            if ( v161 == 62 )
            {
              v163 = *(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL);
              if ( v163 < 0 )
              {
                if ( !*(_BYTE *)(a1 + 26) )
                {
                  sub_13D1530((__int64)v178, a1, *(_QWORD *)(a1 + 152), 1333);
                  sub_AEA040((__int64)v178);
                }
                v166 = v173;
                v167 = v174;
                if ( v172 == 1 )
                  v168 = v174 + 1;
                else
                  v168 = &v167[sub_13D1690(a1, v174, a2) >> 32];
                v11 = v168 + 1;
                if ( v166 != 1 )
                  v11 = &v168[sub_13D1690(a1, v168, a2) >> 32];
                v174 = v11;
                v19 = 51;
                goto LABEL_41;
              }
              if ( (v163 & 8) != 0 && !*(_BYTE *)(a1 + 26) )
              {
                sub_13D1530((__int64)v178, a1, *(_QWORD *)(a1 + 152), 1335);
                v164 = j__strlen(" ");
                v165 = sub_13D1500(a1, (__int64)&v174[v172], v173);
                sub_9EC740((__int64)v175, v165, " ", v164, 0);
                if ( v175[0] && v175[1] )
                  sub_13D5200(v178, (unsigned __int64)v175);
                if ( v176 != &v177 )
                  operator delete(v176);
                sub_AEA040((__int64)v178);
              }
            }
            v162 = v174;
            if ( v172 == 1 )
              v11 = v174 + 1;
            else
              v11 = &v162[sub_13D1690(a1, v174, a2) >> 32];
            v174 = v11;
            v19 = 49;
          }
          else
          {
            v141 = *(_QWORD *)(a1 + 136);
            if ( (*(_BYTE *)(v141 + 12) & 2) == 0 )
              goto LABEL_482;
            if ( v68 != 58 )
            {
              if ( v68 == 37 )
              {
                v11 = v67 + 1;
                if ( v172 != 1 )
                  v11 = &v67[sub_13D1690(a1, v67, a2) >> 32];
                v174 = v11;
                v19 = 24;
                goto LABEL_41;
              }
LABEL_482:
              v19 = 47;
              if ( v68 != 35 || v172 != 1 )
                goto LABEL_41;
              if ( !(unsigned __int8)sub_13D28B0(a1, a2, (__int64)v67) )
              {
                v11 = v174;
                goto LABEL_41;
              }
              return 1;
            }
            if ( (*(_BYTE *)(v141 + 1) & 0x10) != 0 )
            {
              v158 = &v67[v172];
              if ( *v158 == 63 || *v158 == 92 )
              {
                v159 = sub_13D1890(a1, v158, &v173);
                v67 = v174;
              }
              else
              {
                v173 = 1;
                v159 = *v158;
              }
              if ( v159 == 58 )
              {
                v169 = &v67[v173 + (unsigned __int64)v172];
                if ( *v169 == 63 || *v169 == 92 )
                {
                  v170 = sub_13D1890(a1, v169, v175);
                }
                else
                {
                  v175[0] = 1;
                  v170 = *v169;
                }
                if ( (v170 & 0xFB) != 0x3A )
                {
                  if ( !*(_BYTE *)(a1 + 26) )
                  {
                    sub_13D1530((__int64)v178, a1, *(_QWORD *)(a1 + 152), 1342);
                    sub_AEA040((__int64)v178);
                  }
                  v11 = v174;
                  v19 = 47;
                  goto LABEL_41;
                }
                v67 = v174;
              }
            }
            v11 = v67 + 1;
            if ( v172 != 1 )
              v11 = &v67[sub_13D1690(a1, v67, a2) >> 32];
            v174 = v11;
            v19 = 20;
          }
LABEL_41:
          *(_WORD *)(a1 + 32) = 1;
          v20 = &v11[-*(_QWORD *)(a1 + 152)];
          *(_DWORD *)(a2 + 4) = (_DWORD)v20;
          v21 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v20);
          *(_WORD *)(a2 + 16) = v19;
          *(_DWORD *)a2 = v21;
          *(_QWORD *)(a1 + 152) = v11;
          return 1;
        }
        v69 = &v67[v172];
        if ( *v69 == 63 || *v69 == 92 )
        {
          v70 = sub_13D1890(a1, v69, &v173);
          v11 = v174;
        }
        else
        {
          v173 = 1;
          v70 = *v69;
        }
        if ( v70 == 61 )
        {
          v152 = v173;
          if ( v172 == 1 )
            v153 = v11 + 1;
          else
            v153 = &v11[sub_13D1690(a1, v11, a2) >> 32];
          if ( v152 == 1 )
            v11 = v153 + 1;
          else
            v11 = &v153[sub_13D1690(a1, v153, a2) >> 32];
          v174 = v11;
          v19 = 50;
          goto LABEL_41;
        }
        if ( v70 != 60 )
          goto LABEL_187;
        if ( !(unsigned __int8)sub_13D26D0(a1, v11 - 1) && !(unsigned __int8)sub_13D2810(a1, (char *)v174 - 1) )
        {
          v11 = v174;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 60LL) & 0x10) != 0 )
          {
            v109 = v173;
            if ( v172 == 1 )
              v110 = v174 + 1;
            else
              v110 = &v11[sub_13D1690(a1, v174, a2) >> 32];
            if ( v109 == 1 )
              v11 = v110 + 1;
            else
              v11 = &v110[sub_13D1690(a1, v110, a2) >> 32];
            v174 = v11;
            v19 = 74;
          }
          else
          {
LABEL_187:
            if ( v172 == 1 )
              ++v11;
            else
              v11 += sub_13D1690(a1, v11, a2) >> 32;
            v174 = v11;
            v19 = 48;
          }
          goto LABEL_41;
        }
        goto LABEL_17;
      case 61:
        v47 = v174;
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v48 = sub_13D1890(a1, v174, &v172);
          v47 = v174;
          v11 = v174;
        }
        else
        {
          v172 = 1;
          v48 = *v174;
        }
        if ( v48 != 61 )
        {
          v19 = 64;
          goto LABEL_41;
        }
        if ( v47[1] != 61 )
          goto LABEL_115;
        if ( !(unsigned __int8)sub_13D2810(a1, (char *)v47 - 1) )
        {
          v47 = v174;
LABEL_115:
          v11 = v47 + 1;
          if ( v172 != 1 )
            v11 = &v47[sub_13D1690(a1, v47, a2) >> 32];
          v174 = v11;
          v19 = 65;
          goto LABEL_41;
        }
        goto LABEL_17;
      case 62:
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v44 = sub_13D1890(a1, v174, &v172);
          v11 = v174;
        }
        else
        {
          v172 = 1;
          v44 = *v174;
        }
        if ( v44 == 61 )
        {
          if ( v172 == 1 )
            ++v11;
          else
            v11 += sub_13D1690(a1, v11, a2) >> 32;
          v174 = v11;
          v19 = 54;
          goto LABEL_41;
        }
        if ( v44 != 62 )
        {
          v19 = 52;
          goto LABEL_41;
        }
        v45 = &v11[v172];
        if ( *v45 == 63 || *v45 == 92 )
        {
          v46 = sub_13D1890(a1, v45, &v173);
          v11 = v174;
        }
        else
        {
          v173 = 1;
          v46 = *v45;
        }
        if ( v46 == 61 )
        {
          v154 = v173;
          if ( v172 == 1 )
            v155 = v11 + 1;
          else
            v155 = &v11[sub_13D1690(a1, v11, a2) >> 32];
          if ( v154 == 1 )
            v11 = v155 + 1;
          else
            v11 = &v155[sub_13D1690(a1, v155, a2) >> 32];
          v174 = v11;
          v19 = 55;
          goto LABEL_41;
        }
        if ( v46 != 62 )
          goto LABEL_105;
        if ( !(unsigned __int8)sub_13D26D0(a1, v11 - 1) && !(unsigned __int8)sub_13D2810(a1, (char *)v174 - 1) )
        {
          v11 = v174;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 60LL) & 0x10) != 0 )
          {
            v111 = v173;
            if ( v172 == 1 )
              v112 = v174 + 1;
            else
              v112 = &v11[sub_13D1690(a1, v174, a2) >> 32];
            if ( v111 == 1 )
              v11 = v112 + 1;
            else
              v11 = &v112[sub_13D1690(a1, v112, a2) >> 32];
            v174 = v11;
            v19 = 75;
          }
          else
          {
LABEL_105:
            if ( v172 == 1 )
              ++v11;
            else
              v11 += sub_13D1690(a1, v11, a2) >> 32;
            v174 = v11;
            v19 = 53;
          }
          goto LABEL_41;
        }
        goto LABEL_17;
      case 63:
        v11 = v174;
        v19 = 61;
        goto LABEL_41;
      case 64:
        v11 = v174;
        v19 = 0;
        if ( *(v174 - 1) == 64 )
          v19 = ((__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 136) + 2LL) << 13) >> 15) & 0x49;
        goto LABEL_41;
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 83:
      case 84:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 95:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
        v64 = v174;
        goto LABEL_170;
      case 76:
        v64 = v174;
        *(_WORD *)(a1 + 32) = 1;
        if ( *v64 == 63 || *v64 == 92 )
        {
          v85 = sub_13D1690(a1, v64, 0);
          v64 = v174;
          v65 = v85;
          v66 = HIDWORD(v85);
          v172 = HIDWORD(v85);
          if ( (_BYTE)v85 != 34 )
            goto LABEL_167;
          if ( HIDWORD(v85) != 1 )
          {
            v86 = &v64[sub_13D1690(a1, v174, a2) >> 32];
            return sub_13D8C50(a1, a2, v86, 15, *(double *)a4.m128i_i64, a5);
          }
LABEL_415:
          v86 = v64 + 1;
          return sub_13D8C50(a1, a2, v86, 15, *(double *)a4.m128i_i64, a5);
        }
        v172 = 1;
        v65 = *v64;
        v66 = 1;
        if ( *v64 == 34 )
          goto LABEL_415;
LABEL_167:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 164LL) & 0x20) != 0 && v65 == 82 )
        {
          v120 = &v64[v66];
          v121 = v64[v66];
          if ( v121 == 63 || v121 == 92 )
          {
            v122 = sub_13D1890(a1, v120, &v173);
            v64 = v174;
          }
          else
          {
            v173 = 1;
            v122 = *v120;
          }
          if ( v122 != 34 )
            goto LABEL_170;
          v123 = v173;
          if ( v172 == 1 )
            v124 = v64 + 1;
          else
            v124 = &v64[sub_13D1690(a1, v64, a2) >> 32];
          if ( v123 == 1 )
            v125 = (__int64)(v124 + 1);
          else
            v125 = (__int64)&v124[sub_13D1690(a1, v124, a2) >> 32];
          return sub_13D88F0(a1, a2, v125, 15);
        }
        else
        {
          if ( v65 != 39 )
          {
LABEL_170:
            *(_WORD *)(a1 + 32) = 1;
            return sub_13D79E0(a1, a2, v64);
          }
          v108 = v64 + 1;
          if ( (_DWORD)v66 != 1 )
            v108 = &v64[sub_13D1690(a1, v64, a2) >> 32];
          return sub_13D8530(a1, a2, v108, 10, *(double *)a4.m128i_i64, a5);
        }
      case 82:
        v63 = *(_QWORD *)(a1 + 136);
        v64 = v174;
        *(_WORD *)(a1 + 32) = 1;
        if ( (*(_BYTE *)(v63 + 164) & 0x20) == 0 )
          return sub_13D79E0(a1, a2, v64);
        if ( *v64 == 63 || *v64 == 92 )
        {
          v97 = sub_13D1890(a1, v64, &v172);
          v64 = v174;
          if ( v97 != 34 )
            return sub_13D79E0(a1, a2, v64);
          if ( v172 != 1 )
          {
            v98 = (__int64)&v64[sub_13D1690(a1, v174, a2) >> 32];
            return sub_13D88F0(a1, a2, v98, 14);
          }
        }
        else
        {
          v172 = 1;
          if ( *v64 != 34 )
            return sub_13D79E0(a1, a2, v64);
        }
        v98 = (__int64)(v64 + 1);
        return sub_13D88F0(a1, a2, v98, 14);
      case 85:
        v23 = v174;
        v32 = *(_WORD **)(a1 + 136);
        *(_WORD *)(a1 + 32) = 1;
        v33 = v23;
        if ( (*v32 & 0x1002) == 0 )
          return sub_13D79E0(a1, a2, v23);
        if ( *v23 == 63 || *v23 == 92 )
        {
          v34 = sub_13D1890(a1, v23, &v172);
          if ( v34 != 34 )
          {
            v23 = v174;
            if ( v34 != 39 )
            {
LABEL_76:
              if ( v34 == 82 && (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 164LL) & 0x20) != 0 )
              {
                v35 = &v23[v172];
                if ( *v35 == 63 || *v35 == 92 )
                {
                  v36 = sub_13D1890(a1, v35, &v173);
                  v23 = v174;
                }
                else
                {
                  v173 = 1;
                  v36 = *v35;
                }
                if ( v36 == 34 )
                {
                  v37 = v173;
                  v38 = v23 + 1;
                  if ( v172 != 1 )
                    v38 = &v23[sub_13D1690(a1, v23, a2) >> 32];
                  if ( v37 == 1 )
                    v39 = (__int64)(v38 + 1);
                  else
                    v39 = (__int64)&v38[sub_13D1690(a1, v38, a2) >> 32];
                  return sub_13D88F0(a1, a2, v39, 19);
                }
              }
              return sub_13D79E0(a1, a2, v23);
            }
            v99 = v174;
            if ( v172 != 1 )
            {
              v100 = &v99[sub_13D1690(a1, v174, a2) >> 32];
              return sub_13D8530(a1, a2, v100, 13, *(double *)a4.m128i_i64, a5);
            }
LABEL_450:
            v100 = v99 + 1;
            return sub_13D8530(a1, a2, v100, 13, *(double *)a4.m128i_i64, a5);
          }
          v33 = v174;
          if ( v172 != 1 )
          {
            v113 = &v33[sub_13D1690(a1, v174, a2) >> 32];
            return sub_13D8C50(a1, a2, v113, 19, *(double *)a4.m128i_i64, a5);
          }
        }
        else
        {
          v172 = 1;
          v34 = *v23;
          if ( *v23 != 34 )
          {
            if ( v34 != 39 )
              goto LABEL_76;
            v99 = v23;
            goto LABEL_450;
          }
        }
        v113 = v33 + 1;
        return sub_13D8C50(a1, a2, v113, 19, *(double *)a4.m128i_i64, a5);
      case 91:
        v11 = v174;
        v19 = 20;
        goto LABEL_41;
      case 92:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) & 2) != 0
          || (v30 = sub_13D70D0((_QWORD *)a1, &v174, *(_QWORD *)(a1 + 152), a2), (v31 = v30) == 0) )
        {
          v11 = v174;
          v19 = 0;
          goto LABEL_41;
        }
        if ( !(unsigned __int8)sub_13D3140(a1, a2, v30, (__int64)v174) )
          return sub_13D7C80(a1, a2, v31, v174);
        v12 = v174;
        goto LABEL_16;
      case 93:
        v11 = v174;
        v19 = 21;
        goto LABEL_41;
      case 94:
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v29 = sub_13D1890(a1, v174, &v172);
          v11 = v174;
          if ( v29 != 61 )
            goto LABEL_61;
          if ( v172 != 1 )
          {
            v11 += sub_13D1690(a1, v174, a2) >> 32;
LABEL_258:
            v174 = v11;
            v19 = 57;
            goto LABEL_41;
          }
        }
        else
        {
          v172 = 1;
          v29 = *v174;
          if ( *v174 != 61 )
          {
LABEL_61:
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 47LL) & 0x20) != 0 && v29 == 94 )
            {
              sub_13D1530((__int64)v178, a1, (__int64)v11, 1098);
              v19 = 56;
              sub_AEA040((__int64)v178);
              v11 = v174;
            }
            else
            {
              v19 = 56;
            }
            goto LABEL_41;
          }
        }
        ++v11;
        goto LABEL_258;
      case 117:
        v23 = v174;
        v24 = *(_WORD **)(a1 + 136);
        *(_WORD *)(a1 + 32) = 1;
        v25 = v23;
        if ( (*v24 & 0x1002) == 0 )
          return sub_13D79E0(a1, a2, v23);
        if ( *v23 == 63 || *v23 == 92 )
        {
          v26 = sub_13D1890(a1, v23, &v172);
          if ( v26 != 34 )
          {
            v23 = v174;
            if ( v26 != 39 )
            {
LABEL_49:
              if ( v26 == 82 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 164LL) & 0x20) != 0 )
                {
                  v126 = &v23[v172];
                  if ( *v126 == 63 || *v126 == 92 )
                  {
                    v127 = sub_13D1890(a1, v126, &v173);
                    v23 = v174;
                  }
                  else
                  {
                    v173 = 1;
                    v127 = *v126;
                  }
                  if ( v127 == 34 )
                  {
                    v128 = v173;
                    v129 = v23 + 1;
                    if ( v172 != 1 )
                      v129 = &v23[sub_13D1690(a1, v23, a2) >> 32];
                    if ( v128 == 1 )
                      v130 = (__int64)(v129 + 1);
                    else
                      v130 = (__int64)&v129[sub_13D1690(a1, v129, a2) >> 32];
                    return sub_13D88F0(a1, a2, v130, 18);
                  }
                }
              }
              else
              {
                if ( v26 != 56 )
                  return sub_13D79E0(a1, a2, v23);
                v27 = &v23[v172];
                if ( *v27 == 63 || *v27 == 92 )
                {
                  v28 = sub_13D1890(a1, v27, &v173);
                  v23 = v174;
                }
                else
                {
                  v173 = 1;
                  v28 = *v27;
                }
                if ( v28 == 34 )
                {
                  v135 = v173;
                  v136 = v23 + 1;
                  if ( v172 != 1 )
                    v136 = &v23[sub_13D1690(a1, v23, a2) >> 32];
                  if ( v135 == 1 )
                    v137 = v136 + 1;
                  else
                    v137 = &v136[sub_13D1690(a1, v136, a2) >> 32];
                  return sub_13D8C50(a1, a2, v137, 17, *(double *)a4.m128i_i64, a5);
                }
                if ( v28 == 39 )
                {
                  if ( (**(_WORD **)(a1 + 136) & 0x4008) != 0 )
                  {
                    v149 = v173;
                    v150 = v23 + 1;
                    if ( v172 != 1 )
                      v150 = &v23[sub_13D1690(a1, v23, a2) >> 32];
                    if ( v149 == 1 )
                      v151 = v150 + 1;
                    else
                      v151 = &v150[sub_13D1690(a1, v150, a2) >> 32];
                    return sub_13D8530(a1, a2, v151, 11, *(double *)a4.m128i_i64, a5);
                  }
                }
                else if ( v28 == 82 && (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 164LL) & 0x20) != 0 )
                {
                  v142 = &v23[v173 + (unsigned __int64)v172];
                  if ( *v142 == 63 || *v142 == 92 )
                  {
                    v143 = sub_13D1890(a1, v142, v178);
                    v23 = v174;
                  }
                  else
                  {
                    LODWORD(v178[0]) = 1;
                    v143 = *v142;
                  }
                  if ( v143 == 34 )
                  {
                    v144 = v178[0];
                    v145 = v23 + 1;
                    v146 = v173;
                    if ( v172 != 1 )
                      v145 = &v23[sub_13D1690(a1, v23, a2) >> 32];
                    if ( v146 == 1 )
                      v147 = v145 + 1;
                    else
                      v147 = &v145[sub_13D1690(a1, v145, a2) >> 32];
                    v148 = (__int64)(v147 + 1);
                    if ( v144 != 1 )
                      v148 = (__int64)&v147[sub_13D1690(a1, v147, a2) >> 32];
                    return sub_13D88F0(a1, a2, v148, 17);
                  }
                }
              }
              return sub_13D79E0(a1, a2, v23);
            }
            if ( v172 != 1 )
            {
              v101 = &v23[sub_13D1690(a1, v174, a2) >> 32];
              return sub_13D8530(a1, a2, v101, 12, *(double *)a4.m128i_i64, a5);
            }
LABEL_453:
            v101 = v23 + 1;
            return sub_13D8530(a1, a2, v101, 12, *(double *)a4.m128i_i64, a5);
          }
          v25 = v174;
          if ( v172 != 1 )
          {
            v114 = &v25[sub_13D1690(a1, v174, a2) >> 32];
            return sub_13D8C50(a1, a2, v114, 18, *(double *)a4.m128i_i64, a5);
          }
        }
        else
        {
          v172 = 1;
          v26 = *v23;
          if ( *v23 != 34 )
          {
            if ( v26 != 39 )
              goto LABEL_49;
            goto LABEL_453;
          }
        }
        v114 = v25 + 1;
        return sub_13D8C50(a1, a2, v114, 18, *(double *)a4.m128i_i64, a5);
      case 123:
        v11 = v174;
        v19 = 24;
        goto LABEL_41;
      case 124:
        v17 = v174;
        v11 = v174;
        if ( *v174 == 63 || *v174 == 92 )
        {
          v18 = sub_13D1890(a1, v174, &v172);
          v17 = v174;
          v11 = v174;
        }
        else
        {
          v172 = 1;
          v18 = *v174;
        }
        if ( v18 == 61 )
        {
          v11 = v17 + 1;
          if ( v172 != 1 )
            v11 = &v17[sub_13D1690(a1, v17, a2) >> 32];
          v174 = v11;
          v19 = 60;
          goto LABEL_41;
        }
        if ( v18 != 124 )
        {
          v19 = 58;
          goto LABEL_41;
        }
        if ( v17[1] != 124 )
          goto LABEL_38;
        if ( !(unsigned __int8)sub_13D2810(a1, (char *)v17 - 1) )
        {
          v17 = v174;
LABEL_38:
          v11 = v17 + 1;
          if ( v172 != 1 )
            v11 = &v17[sub_13D1690(a1, v17, a2) >> 32];
          v174 = v11;
          v19 = 59;
          goto LABEL_41;
        }
        goto LABEL_17;
      case 125:
        v11 = v174;
        v19 = 25;
        goto LABEL_41;
      case 126:
        v11 = v174;
        v19 = 40;
        goto LABEL_41;
      default:
        v11 = v174;
        if ( v8 >= 0 )
          goto LABEL_241;
        v79 = *(unsigned __int8 **)(a1 + 120);
        v80 = --v174;
        v178[0] = (__int64)v175;
        if ( v11 - 1 == v79 )
          goto LABEL_236;
        v81 = sub_2218990(*(v11 - 1));
        v80 = v174;
        if ( v81 > v79 - v174 )
          goto LABEL_236;
        if ( (unsigned int)sub_2218E30(&v174, &v174[v81], v178, v178[0] + 4, 0) )
        {
          v80 = v174;
LABEL_236:
          if ( *(_BYTE *)(a1 + 26) || *(_BYTE *)(a1 + 24) || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 545LL) & 2) != 0 )
          {
            v11 = v80 + 1;
            v174 = v80 + 1;
LABEL_241:
            v19 = 0;
            goto LABEL_41;
          }
          sub_13D1530((__int64)v178, a1, (__int64)v80, 1053);
          sub_AEA040((__int64)v178);
          *(_QWORD *)(a1 + 152) = v174 + 1;
        }
        else
        {
          if ( !(unsigned __int8)sub_13D3140(a1, a2, v175[0], (__int64)v174) )
            return sub_13D7C80(a1, a2, v175[0], v174);
          result = sub_13D1DA0(a1, a2, v174, v171);
          if ( (_BYTE)result )
            return result;
        }
LABEL_17:
        *(_WORD *)(a2 + 18) &= ~8u;
        continue;
    }
  }
}
