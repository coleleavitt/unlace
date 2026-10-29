unsigned __int64 __fastcall sub_3254A0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v5; // r8d
  int v6; // r11d
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  int v11; // edx
  unsigned int v12; // eax
  int v13; // r9d
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbp
  int v16; // r10d
  unsigned int v17; // r12d
  unsigned __int64 v18; // r8
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r10d
  __int64 v30; // rcx
  unsigned int i; // eax
  unsigned int v32; // esi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  int v35; // eax
  int v36; // edx
  unsigned int v37; // esi
  int v38; // r11d
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // esi
  unsigned int j; // esi
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned int v46; // r9d
  int v47; // r11d
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // esi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rsi
  int v53; // eax
  int v54; // r9d
  int v55; // eax
  int v56; // edx
  int v57; // r11d
  int v58; // edx
  unsigned int v59; // esi
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // esi
  unsigned int k; // esi
  unsigned int v64; // esi
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // esi
  int v68; // eax
  __int64 v69; // rax
  int v70; // esi
  char v71; // al
  __int64 v72; // rdx
  unsigned int v73; // eax
  int v74; // eax
  char v75; // al
  unsigned int v76; // eax
  unsigned int v77; // esi
  __int64 v78; // rax
  char v79; // al
  __int64 v80; // rdx
  unsigned int v81; // eax
  char v82; // al
  unsigned int v83; // eax
  unsigned int v84; // esi
  int v85; // esi
  __int64 v86; // rcx
  int v87; // [rsp+0h] [rbp-98h]
  int v88; // [rsp+0h] [rbp-98h]
  int v89; // [rsp+0h] [rbp-98h]
  unsigned int v90; // [rsp+0h] [rbp-98h]
  int v91; // [rsp+0h] [rbp-98h]
  __int64 v92; // [rsp+0h] [rbp-98h]
  unsigned int v93; // [rsp+0h] [rbp-98h]
  int v94; // [rsp+Ch] [rbp-8Ch]
  int v95; // [rsp+10h] [rbp-88h]
  unsigned int v96; // [rsp+14h] [rbp-84h]
  unsigned int v97; // [rsp+14h] [rbp-84h]
  int v98; // [rsp+14h] [rbp-84h]
  int v99; // [rsp+18h] [rbp-80h]
  int v100; // [rsp+18h] [rbp-80h]
  int v101; // [rsp+18h] [rbp-80h]
  int v102; // [rsp+18h] [rbp-80h]
  int v103; // [rsp+18h] [rbp-80h]
  int v104; // [rsp+20h] [rbp-78h]
  int v105; // [rsp+20h] [rbp-78h]
  int v106; // [rsp+20h] [rbp-78h]
  __int64 v107; // [rsp+20h] [rbp-78h]
  int v108; // [rsp+20h] [rbp-78h]
  int v109; // [rsp+20h] [rbp-78h]
  int v110; // [rsp+28h] [rbp-70h]
  unsigned int v111; // [rsp+28h] [rbp-70h]
  unsigned int v112; // [rsp+28h] [rbp-70h]
  unsigned int v113; // [rsp+28h] [rbp-70h]
  __int64 v114; // [rsp+28h] [rbp-70h]
  unsigned int v115; // [rsp+30h] [rbp-68h]
  int v116; // [rsp+30h] [rbp-68h]
  int v117; // [rsp+30h] [rbp-68h]
  int v118; // [rsp+30h] [rbp-68h]
  unsigned int v119; // [rsp+30h] [rbp-68h]
  int v120; // [rsp+34h] [rbp-64h]
  int v121; // [rsp+34h] [rbp-64h]
  unsigned int v122; // [rsp+34h] [rbp-64h]
  int v123; // [rsp+34h] [rbp-64h]
  int v124; // [rsp+38h] [rbp-60h]
  int v125; // [rsp+38h] [rbp-60h]
  int v126; // [rsp+38h] [rbp-60h]
  int v127; // [rsp+38h] [rbp-60h]
  unsigned int v128; // [rsp+38h] [rbp-60h]
  int v129; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v130; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v131; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v132; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v133; // [rsp+40h] [rbp-58h]
  __int64 v134; // [rsp+40h] [rbp-58h]
  int v135; // [rsp+40h] [rbp-58h]
  int v136; // [rsp+40h] [rbp-58h]
  int v137; // [rsp+48h] [rbp-50h]
  int v138; // [rsp+48h] [rbp-50h]
  int v139; // [rsp+48h] [rbp-50h]
  int v140; // [rsp+48h] [rbp-50h]
  unsigned int v141; // [rsp+48h] [rbp-50h]
  int v142; // [rsp+4Ch] [rbp-4Ch]
  int v143; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v144; // [rsp+4Ch] [rbp-4Ch]
  int v145; // [rsp+4Ch] [rbp-4Ch]
  int v146; // [rsp+4Ch] [rbp-4Ch]
  int v147; // [rsp+50h] [rbp-48h]
  unsigned int v148; // [rsp+50h] [rbp-48h]
  unsigned int v149; // [rsp+50h] [rbp-48h]
  int v150; // [rsp+54h] [rbp-44h]
  int v151; // [rsp+54h] [rbp-44h]
  int v152; // [rsp+58h] [rbp-40h]
  int v153; // [rsp+58h] [rbp-40h]
  int v154; // [rsp+5Ch] [rbp-3Ch]

  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = 1;
    v87 = 2 * (v5 != 1);
  }
  else
  {
    v87 = 2;
    v6 = 0;
  }
  v7 = a2 >> 1;
  v8 = a3 >> 1;
  v9 = (a2 >> 1) + (a2 & 1);
  v10 = (a3 >> 1) + (a3 & 1);
  v11 = (a3 >> 1) + (a2 >> 1);
  v12 = v10 + v9 - 1;
  if ( v12 > v8 + (a2 >> 1) )
    v12 = v11;
  v13 = 3 * (v5 == 2) + 3;
  v14 = (a4 - 1) >> 1;
  v94 = 2 * v12;
  v95 = v12 * v13;
  if ( (a4 & 1) == 0 )
    v14 = a4 >> 1;
  if ( v14 == 1 )
  {
    while ( 1 )
    {
      if ( v7 == 1 && v8 == 1 )
      {
LABEL_43:
        if ( v5 == 1 )
        {
          LODWORD(v15) = 1;
          v16 = v87 + v6;
        }
        else
        {
          v16 = v87 + v6;
          LODWORD(v15) = (v5 != 0) + 2;
        }
        goto LABEL_16;
      }
      if ( !v7 || !v8 )
      {
LABEL_15:
        LODWORD(v15) = 0;
        v14 = 0;
        v16 = v87 + v6;
        goto LABEL_16;
      }
      if ( v7 != 1 )
      {
        if ( v8 == 1 )
          goto LABEL_43;
        v7 = 1;
      }
      if ( v8 <= 1 )
        break;
      v8 = 1;
    }
    v115 = 2;
  }
  else
  {
    while ( 1 )
    {
      if ( v7 == 1 && v8 == 1 )
      {
        v7 = 1;
        goto LABEL_11;
      }
      while ( 1 )
      {
        if ( !v7 || !v8 )
          goto LABEL_15;
LABEL_11:
        if ( v14 >= v7 )
          break;
        v7 = v14;
      }
      if ( v14 >= v8 )
        break;
      v8 = v14;
    }
    v115 = v7 + v8;
    if ( v14 >= v7 + v8 )
    {
      v110 = v6;
      v116 = *(_DWORD *)(a1 + 16);
      v104 = 3 * (v5 == 2) + 3;
      v21 = sub_3249B0(a1, v7, v8);
      v14 = v21;
      v13 = v104;
      v5 = v116;
      v15 = HIDWORD(v21);
      v16 = v87 + v110;
      goto LABEL_16;
    }
    v16 = v87 + v6;
    if ( v7 > 9 || v8 > 9 )
    {
LABEL_64:
      v117 = v16;
      v105 = v5;
      v99 = v13;
      v24 = sub_3254A0(a1, v7, v8, v14);
      v13 = v99;
      v5 = v105;
      v16 = v117;
      v14 = v24;
      v15 = HIDWORD(v24);
      goto LABEL_16;
    }
  }
  v26 = v7 >> 1;
  v27 = v8 >> 1;
  v106 = (v7 & 1) + v26;
  v111 = v27 + (v8 & 1);
  v28 = v106 + v111 - 1;
  if ( v28 > (int)v26 + (int)v27 )
    v28 = v26 + v27;
  v29 = v14 >> 1;
  v124 = 2 * v28;
  v120 = v28 * v13;
  if ( (v14 & 1) != 0 )
    v29 = (v14 - 1) >> 1;
  if ( v29 == 1 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v26 == 1 && (_DWORD)v27 == 1 )
      {
LABEL_187:
        if ( v5 == 1 )
        {
          v68 = 0;
        }
        else
        {
          v100 = 2;
          v68 = 2;
          if ( !v5 )
            goto LABEL_82;
        }
        v100 = v68 + 1;
        goto LABEL_82;
      }
      if ( !(_DWORD)v26 || !(_DWORD)v27 )
        goto LABEL_81;
      if ( (_DWORD)v26 != 1 )
      {
        if ( (_DWORD)v27 == 1 )
          goto LABEL_187;
        v26 = 1;
      }
      if ( (unsigned int)v27 <= 1 )
        break;
      v27 = 1;
    }
LABEL_190:
    v103 = v27 + v26;
    if ( v29 >= (int)v27 + (int)v26 )
    {
      v147 = v6;
      v143 = *(_DWORD *)(a1 + 16);
      v138 = 3 * (v5 == 2) + 3;
      v134 = a1;
      v69 = sub_3249B0(a1, v26, v27);
LABEL_192:
      v29 = v69;
      a1 = v134;
      v13 = v138;
      v5 = v143;
      v6 = v147;
      v100 = HIDWORD(v69);
      goto LABEL_82;
    }
    v154 = v6;
    v152 = *(_DWORD *)(a1 + 16);
    v150 = 3 * (v5 == 2) + 3;
    v148 = v29;
    v144 = v27;
    v71 = sub_326230(a1, v26, v27, v29);
    v72 = v144;
    v29 = v148;
    v13 = v150;
    v5 = v152;
    v6 = v154;
    if ( !v71 )
    {
      v86 = v148;
      v147 = v154;
      v143 = v152;
      v138 = v150;
      v134 = a1;
      v69 = sub_3254A0(a1, (unsigned int)v26, v72, v86);
      goto LABEL_192;
    }
    v73 = ((unsigned int)v26 * v144) >> 1;
    if ( v152 == 1 )
    {
      v100 = 0;
    }
    else
    {
      v100 = v73 + v103;
      if ( !v152 )
        goto LABEL_82;
    }
    v100 += v73;
  }
  else
  {
LABEL_74:
    if ( (_DWORD)v26 == 1 && (_DWORD)v27 == 1 )
    {
      v26 = 1;
      goto LABEL_77;
    }
    while ( (_DWORD)v26 && (_DWORD)v27 )
    {
LABEL_77:
      if ( v29 >= (unsigned int)v26 )
      {
        if ( v29 >= (unsigned int)v27 )
          goto LABEL_190;
        v27 = v29;
        goto LABEL_74;
      }
      v26 = v29;
    }
LABEL_81:
    v100 = 0;
    v29 = 0;
  }
LABEL_82:
  if ( (v14 & 1) != 0 )
    v30 = (v14 + 1) >> 1;
  else
    v30 = (v14 >> 1) + 1;
  for ( i = v111; ; i = v30 )
  {
    if ( v106 == 1 && i == 1 )
    {
      v112 = 1;
LABEL_88:
      v106 = 1;
      if ( (_DWORD)v30 == 1 )
      {
        if ( v5 == 1 )
        {
          v70 = 0;
        }
        else
        {
          if ( !v5 )
          {
            v35 = v124 + v29 + 2;
            v16 = v6 + v87;
            v36 = v100 + v120 + v6 + v87 + 2;
            goto LABEL_169;
          }
          v70 = 2;
        }
        LODWORD(v34) = v70 + 1;
        goto LABEL_91;
      }
      goto LABEL_89;
    }
    if ( !v106 || !i )
    {
      LODWORD(v34) = 0;
      LODWORD(v30) = 0;
      goto LABEL_91;
    }
    for ( j = v106; (unsigned int)v30 < j; j = v30 )
    {
      if ( (_DWORD)v30 == 1 && i == 1 )
      {
        v112 = 1;
        goto LABEL_88;
      }
    }
    v106 = j;
    if ( (unsigned int)v30 >= i )
      break;
  }
  v112 = i;
  v132 = j + i;
  if ( (unsigned int)v30 >= j + i )
  {
LABEL_89:
    v32 = v106;
    v142 = v6;
    v137 = v5;
    v133 = v29;
    v129 = v13;
    v107 = a1;
    v33 = sub_3249B0(a1, v32, v112);
LABEL_90:
    a1 = v107;
    v13 = v129;
    LODWORD(v30) = v33;
    v29 = v133;
    v5 = v137;
    v34 = HIDWORD(v33);
    v6 = v142;
    goto LABEL_91;
  }
  v153 = v6;
  v151 = v5;
  v149 = v29;
  v146 = v13;
  v141 = v30;
  v82 = sub_326230(a1, j, i, v30);
  v30 = v141;
  v13 = v146;
  v29 = v149;
  v5 = v151;
  v6 = v153;
  if ( !v82 )
  {
    v142 = v153;
    v137 = v151;
    v133 = v149;
    v129 = v13;
    v107 = a1;
    v33 = sub_3254A0(a1, j, v112, v30);
    goto LABEL_90;
  }
  v83 = (j * v112) >> 1;
  if ( v151 == 1 )
  {
    v84 = 0;
  }
  else
  {
    v84 = v83 + v132;
    if ( !v151 )
    {
      v35 = v141 + v124 + v149 + 1;
      v16 = v153 + v87;
      v36 = v84 + v100 + v153 + v87 + v120;
LABEL_169:
      v66 = v115;
      v67 = v115;
      if ( v7 <= v115 )
        v66 = v7;
      if ( v8 <= v115 )
        v67 = v8;
      v41 = ((v67 * v66) >> 1) + v115;
      v108 = 4 * v35;
      v38 = 4 * v115;
LABEL_174:
      if ( v41 + v38 + v115 >= v36 + v35 + v108 )
        goto LABEL_64;
      LODWORD(v15) = v115 + ((v8 * v7) >> 1);
      goto LABEL_16;
    }
  }
  LODWORD(v34) = v83 + v84;
LABEL_91:
  v35 = v30 + v124 + v29 + 1;
  v16 = v6 + v87;
  v36 = v34 + v100 + v6 + v87 + v120;
  v37 = v115;
  v38 = 4 * v115;
  v101 = 5 * v115;
  v108 = 4 * v35;
  v90 = v36 + 5 * v35;
  v39 = v115;
  if ( v7 <= v115 )
    v39 = v7;
  if ( v8 <= v115 )
    v37 = v8;
  v40 = (v37 * v39) >> 1;
  if ( v5 != 1 )
  {
    v41 = v40 + v115;
    if ( v5 )
    {
      if ( v41 + v40 + v101 >= v90 )
        goto LABEL_64;
      LODWORD(v15) = v115 + ((v8 * v7) & 0xFFFFFFFE);
      goto LABEL_16;
    }
    goto LABEL_174;
  }
  if ( v40 + v101 >= v90 )
    goto LABEL_64;
  LODWORD(v15) = (v8 * v7) >> 1;
LABEL_16:
  if ( (a4 & 1) != 0 )
    v17 = (a4 + 1) >> 1;
  else
    v17 = (a4 >> 1) + 1;
  if ( v17 == 1 )
  {
    while ( 1 )
    {
      if ( v9 == 1 && v10 == 1 )
      {
LABEL_54:
        v20 = v5;
        if ( v5 != 1 )
          v20 = 2 - ((v5 == 0) - 1);
        LODWORD(v18) = v20;
        return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
      }
      if ( !v9 || !v10 )
      {
LABEL_26:
        LODWORD(v18) = 0;
        v17 = 0;
        return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
      }
      if ( v9 != 1 )
      {
        if ( v10 == 1 )
          goto LABEL_54;
        v9 = 1;
      }
      if ( v10 <= 1 )
        break;
      v10 = 1;
    }
    v22 = 2;
  }
  else
  {
    while ( 1 )
    {
      if ( v9 == 1 && v10 == 1 )
      {
        v9 = 1;
        goto LABEL_22;
      }
      while ( 1 )
      {
        if ( !v9 || !v10 )
          goto LABEL_26;
LABEL_22:
        if ( v17 >= v9 )
          break;
        v9 = v17;
      }
      if ( v17 >= v10 )
        break;
      v10 = v17;
    }
    v22 = v9 + v10;
    if ( v17 >= v9 + v10 )
    {
      v88 = v16;
      v23 = sub_3249B0(a1, v9, v10);
      v16 = v88;
      v17 = v23;
      v18 = HIDWORD(v23);
      return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
    }
    if ( v9 > 9 || v10 > 9 )
    {
LABEL_67:
      v89 = v16;
      v25 = sub_3254A0(a1, v9, v10, v17);
      v16 = v89;
      v17 = v25;
      v18 = HIDWORD(v25);
      return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
    }
  }
  v43 = v9 >> 1;
  v44 = v10 >> 1;
  v91 = (v9 & 1) + v43;
  v96 = v44 + (v10 & 1);
  v45 = v91 + v96 - 1;
  if ( v45 > (int)v43 + (int)v44 )
    v45 = v43 + v44;
  v109 = 2 * v45;
  v102 = v45 * v13;
  v46 = v17 >> 1;
  if ( (v17 & 1) != 0 )
    v46 = (v17 - 1) >> 1;
  if ( v46 == 1 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v43 == 1 && (_DWORD)v44 == 1 )
      {
LABEL_212:
        if ( v5 == 1 )
        {
          v74 = 0;
        }
        else
        {
          v47 = 2;
          v74 = 2;
          if ( !v5 )
            goto LABEL_121;
        }
        v47 = v74 + 1;
        goto LABEL_121;
      }
      if ( !(_DWORD)v43 || !(_DWORD)v44 )
        goto LABEL_120;
      if ( (_DWORD)v43 != 1 )
      {
        if ( (_DWORD)v44 == 1 )
          goto LABEL_212;
        v43 = 1;
      }
      if ( (unsigned int)v44 <= 1 )
        break;
      v44 = 1;
    }
LABEL_224:
    if ( v46 >= (int)v43 + (int)v44 )
    {
      v127 = v16;
      v123 = v5;
      v114 = a1;
      v78 = sub_3249B0(a1, v43, v44);
LABEL_226:
      v46 = v78;
      a1 = v114;
      v5 = v123;
      v16 = v127;
      v47 = HIDWORD(v78);
      goto LABEL_121;
    }
    v145 = v16;
    v136 = v5;
    v131 = v46;
    v128 = v44;
    v140 = v43 + v44;
    v79 = sub_326230(a1, v43, v44, v46);
    v80 = v128;
    v46 = v131;
    v5 = v136;
    v16 = v145;
    if ( !v79 )
    {
      v127 = v145;
      v123 = v136;
      v114 = a1;
      v78 = sub_3254A0(a1, (unsigned int)v43, v80, v131);
      goto LABEL_226;
    }
    v81 = (v128 * (unsigned int)v43) >> 1;
    if ( v136 == 1 )
    {
      v47 = 0;
    }
    else
    {
      v47 = v81 + v140;
      if ( !v136 )
        goto LABEL_121;
    }
    v47 += v81;
  }
  else
  {
LABEL_113:
    if ( (_DWORD)v43 == 1 && (_DWORD)v44 == 1 )
    {
      v43 = 1;
      goto LABEL_116;
    }
    while ( (_DWORD)v43 && (_DWORD)v44 )
    {
LABEL_116:
      if ( v46 >= (unsigned int)v43 )
      {
        if ( v46 >= (unsigned int)v44 )
          goto LABEL_224;
        v44 = v46;
        goto LABEL_113;
      }
      v43 = v46;
    }
LABEL_120:
    v47 = 0;
    v46 = 0;
  }
LABEL_121:
  if ( (v17 & 1) != 0 )
    v48 = (v17 + 1) >> 1;
  else
    v48 = (v17 >> 1) + 1;
  v49 = v96;
  while ( 2 )
  {
    if ( v91 == 1 && v49 == 1 )
    {
      v97 = 1;
LABEL_127:
      v91 = 1;
      if ( (_DWORD)v48 == 1 )
      {
        if ( v5 == 1 )
        {
          v85 = 0;
        }
        else
        {
          if ( !v5 )
          {
            v55 = v109 + v46 + 2;
            v58 = v47 + v102 + v16 + 2;
            goto LABEL_151;
          }
          v85 = 2;
        }
        LODWORD(v52) = v85 + 1;
        goto LABEL_130;
      }
      goto LABEL_128;
    }
    if ( !v91 || !v49 )
    {
      LODWORD(v52) = 0;
      LODWORD(v48) = 0;
      goto LABEL_130;
    }
    for ( k = v91; (unsigned int)v48 < k; k = v48 )
    {
      if ( (_DWORD)v48 == 1 && v49 == 1 )
      {
        v97 = 1;
        goto LABEL_127;
      }
    }
    v91 = k;
    if ( (unsigned int)v48 < v49 )
    {
      v49 = v48;
      continue;
    }
    break;
  }
  v97 = v49;
  v119 = k + v49;
  if ( (unsigned int)v48 >= k + v49 )
  {
LABEL_128:
    v50 = v91;
    v125 = v16;
    v121 = v47;
    v113 = v46;
    v118 = v5;
    v92 = a1;
    v51 = sub_3249B0(a1, v50, v97);
LABEL_129:
    a1 = v92;
    v5 = v118;
    LODWORD(v48) = v51;
    v46 = v113;
    v47 = v121;
    v52 = HIDWORD(v51);
    v16 = v125;
    goto LABEL_130;
  }
  v139 = v16;
  v135 = v47;
  v130 = v46;
  v126 = v5;
  v122 = v48;
  v75 = sub_326230(a1, k, v49, v48);
  v48 = v122;
  v5 = v126;
  v46 = v130;
  v47 = v135;
  v16 = v139;
  if ( !v75 )
  {
    v125 = v139;
    v121 = v135;
    v113 = v130;
    v118 = v5;
    v92 = a1;
    v51 = sub_3254A0(a1, k, v97, v48);
    goto LABEL_129;
  }
  v76 = (k * v97) >> 1;
  if ( v126 == 1 )
  {
    v77 = 0;
  }
  else
  {
    v77 = v76 + v119;
    if ( !v126 )
    {
      v55 = v122 + v109 + v130 + 1;
      v58 = v77 + v135 + v139 + v102;
LABEL_151:
      v64 = v22;
      v65 = v22;
      if ( v9 <= v22 )
        v64 = v9;
      v54 = 4 * v22;
      if ( v10 <= v22 )
        v65 = v10;
      v57 = 4 * v55;
      v62 = v22 + ((v65 * v64) >> 1);
LABEL_156:
      if ( v62 + v54 + v22 >= v58 + v57 + v55 )
        goto LABEL_67;
      LODWORD(v18) = v22 + ((v9 * v10) >> 1);
      return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
    }
  }
  LODWORD(v52) = v76 + v77;
LABEL_130:
  v53 = v109 + v46 + 1;
  v54 = 4 * v22;
  v55 = v48 + v53;
  v56 = v47 + v16 + v102;
  v57 = 4 * v55;
  v58 = v52 + v56;
  v98 = 5 * v22;
  v59 = v22;
  v93 = v58 + 5 * v55;
  v60 = v22;
  if ( v9 <= v22 )
    v60 = v9;
  if ( v10 <= v22 )
    v59 = v10;
  v61 = (v59 * v60) >> 1;
  if ( v5 != 1 )
  {
    v62 = v22 + v61;
    if ( v5 )
    {
      if ( v62 + v61 + v98 >= v93 )
        goto LABEL_67;
      LODWORD(v18) = v22 + ((v9 * v10) & 0xFFFFFFFE);
      return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
    }
    goto LABEL_156;
  }
  if ( v61 + v98 >= v93 )
    goto LABEL_67;
  LODWORD(v18) = (v9 * v10) >> 1;
  return ((unsigned __int64)(unsigned int)(v18 + v15 + v95 + v16) << 32) | (v17 + v14 + v94 + 1);
}

