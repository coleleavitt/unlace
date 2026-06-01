__int64 __fastcall sub_32C9F0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  unsigned int v5; // r15d
  int v6; // eax
  unsigned int v7; // edx
  int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // r11d
  int v11; // ebx
  int v12; // r12d
  unsigned __int64 v13; // rbp
  int v14; // r14d
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  unsigned int v21; // ebp
  unsigned int v22; // r12d
  unsigned int v23; // r13d
  unsigned int v24; // esi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // edx
  int v36; // ecx
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // esi
  unsigned int v41; // ecx
  unsigned int v42; // esi
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int i; // edx
  unsigned int v46; // edx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  int v49; // edx
  int v50; // eax
  unsigned int v51; // esi
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // esi
  unsigned int v55; // edx
  unsigned int v56; // esi
  unsigned int v57; // edx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // esi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rsi
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // ecx
  unsigned int v69; // esi
  unsigned int v70; // eax
  unsigned int j; // esi
  unsigned __int64 v72; // rax
  unsigned int v73; // ecx
  unsigned int v74; // esi
  unsigned int v75; // edx
  unsigned int v76; // esi
  int v77; // esi
  unsigned __int64 v78; // rax
  int v79; // esi
  bool v80; // al
  unsigned int v81; // edx
  unsigned int v82; // eax
  int v83; // eax
  bool v84; // al
  unsigned int v85; // eax
  unsigned int v86; // esi
  unsigned __int64 v87; // rax
  bool v88; // al
  unsigned int v89; // edx
  unsigned int v90; // eax
  bool v91; // al
  unsigned int v92; // eax
  unsigned int v93; // esi
  int v94; // eax
  unsigned int v95; // edx
  unsigned int v96; // [rsp+Ch] [rbp-ACh]
  unsigned int v97; // [rsp+10h] [rbp-A8h]
  int v98; // [rsp+14h] [rbp-A4h]
  bool v99; // [rsp+18h] [rbp-A0h]
  unsigned int v100; // [rsp+18h] [rbp-A0h]
  int v101; // [rsp+20h] [rbp-98h]
  int v102; // [rsp+20h] [rbp-98h]
  int v103; // [rsp+24h] [rbp-94h]
  unsigned int v104; // [rsp+24h] [rbp-94h]
  unsigned int v105; // [rsp+24h] [rbp-94h]
  int v106; // [rsp+28h] [rbp-90h]
  int v107; // [rsp+28h] [rbp-90h]
  int v108; // [rsp+28h] [rbp-90h]
  unsigned int v109; // [rsp+28h] [rbp-90h]
  int v110; // [rsp+28h] [rbp-90h]
  int v111; // [rsp+2Ch] [rbp-8Ch]
  int v112; // [rsp+30h] [rbp-88h]
  unsigned int v113; // [rsp+30h] [rbp-88h]
  unsigned int v114; // [rsp+30h] [rbp-88h]
  unsigned int v115; // [rsp+30h] [rbp-88h]
  int v116; // [rsp+30h] [rbp-88h]
  unsigned int v117; // [rsp+38h] [rbp-80h]
  unsigned int v118; // [rsp+38h] [rbp-80h]
  unsigned int v119; // [rsp+38h] [rbp-80h]
  int v120; // [rsp+38h] [rbp-80h]
  unsigned int v121; // [rsp+38h] [rbp-80h]
  int v122; // [rsp+38h] [rbp-80h]
  unsigned int v123; // [rsp+38h] [rbp-80h]
  unsigned int v124; // [rsp+40h] [rbp-78h]
  int v125; // [rsp+40h] [rbp-78h]
  unsigned int v126; // [rsp+40h] [rbp-78h]
  int v127; // [rsp+40h] [rbp-78h]
  int v128; // [rsp+40h] [rbp-78h]
  __int64 v129; // [rsp+40h] [rbp-78h]
  int v130; // [rsp+40h] [rbp-78h]
  unsigned int v131; // [rsp+40h] [rbp-78h]
  unsigned int v132; // [rsp+40h] [rbp-78h]
  unsigned int v133; // [rsp+48h] [rbp-70h]
  unsigned int v134; // [rsp+48h] [rbp-70h]
  int v135; // [rsp+48h] [rbp-70h]
  __int64 v136; // [rsp+48h] [rbp-70h]
  unsigned int v137; // [rsp+48h] [rbp-70h]
  unsigned int v138; // [rsp+48h] [rbp-70h]
  unsigned int v139; // [rsp+50h] [rbp-68h]
  unsigned int v140; // [rsp+50h] [rbp-68h]
  int v141; // [rsp+50h] [rbp-68h]
  int v142; // [rsp+50h] [rbp-68h]
  unsigned int v143; // [rsp+50h] [rbp-68h]
  bool v144; // [rsp+54h] [rbp-64h]
  unsigned int v145; // [rsp+54h] [rbp-64h]
  int v146; // [rsp+54h] [rbp-64h]
  int v147; // [rsp+54h] [rbp-64h]
  int v148; // [rsp+58h] [rbp-60h]
  int v149; // [rsp+58h] [rbp-60h]
  unsigned int v150; // [rsp+58h] [rbp-60h]
  __int64 v151; // [rsp+58h] [rbp-60h]
  unsigned int v152; // [rsp+58h] [rbp-60h]
  unsigned int v153; // [rsp+60h] [rbp-58h]
  unsigned int v154; // [rsp+60h] [rbp-58h]
  __int64 v155; // [rsp+60h] [rbp-58h]
  int v156; // [rsp+60h] [rbp-58h]
  unsigned int v157; // [rsp+68h] [rbp-50h]
  unsigned int v158; // [rsp+68h] [rbp-50h]
  int v159; // [rsp+68h] [rbp-50h]
  unsigned int v160; // [rsp+68h] [rbp-50h]
  unsigned int v161; // [rsp+68h] [rbp-50h]
  unsigned int v162; // [rsp+68h] [rbp-50h]
  unsigned int v163; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v164; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v165; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v166; // [rsp+6Ch] [rbp-4Ch]
  int v167; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v168; // [rsp+6Ch] [rbp-4Ch]
  int v169; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v170; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v171; // [rsp+70h] [rbp-48h]
  int v172; // [rsp+70h] [rbp-48h]
  unsigned int v173; // [rsp+70h] [rbp-48h]
  unsigned int v174; // [rsp+70h] [rbp-48h]
  unsigned int v175; // [rsp+70h] [rbp-48h]
  int v176; // [rsp+70h] [rbp-48h]
  unsigned int v177; // [rsp+74h] [rbp-44h]
  unsigned int v178; // [rsp+74h] [rbp-44h]
  unsigned int v179; // [rsp+74h] [rbp-44h]
  unsigned int v180; // [rsp+74h] [rbp-44h]
  unsigned int v181; // [rsp+74h] [rbp-44h]
  unsigned int v182; // [rsp+78h] [rbp-40h]
  unsigned int v183; // [rsp+78h] [rbp-40h]
  unsigned int v184; // [rsp+78h] [rbp-40h]
  unsigned int v185; // [rsp+78h] [rbp-40h]
  unsigned int v186; // [rsp+7Ch] [rbp-3Ch]
  unsigned int v187; // [rsp+7Ch] [rbp-3Ch]

  v3 = a2 >> 1;
  v4 = a3 >> 1;
  v5 = a3;
  v6 = (a3 >> 1) + (a3 & 1);
  v7 = (a2 & 1) + (a2 >> 1) + v6 - 1;
  v8 = *(_DWORD *)(a1 + 16);
  v97 = v6;
  v9 = (a2 >> 1) + v4;
  v96 = (a2 & 1) + (a2 >> 1);
  if ( v7 <= v9 )
    v9 = v7;
  v10 = v9;
  v98 = 2 * v9;
  if ( a2 > 9 || v5 > 9 )
    goto LABEL_5;
  v18 = a2;
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v101 = 2;
      v112 = 1;
      v106 = 6;
    }
    else
    {
      v112 = 1;
      v106 = 3;
      v101 = 2 * (v8 != 1);
    }
  }
  else
  {
    v112 = 0;
    v101 = 2;
    v106 = 3;
  }
  v15 = a2 + v5;
  v19 = v4;
  v20 = a2 >> 1;
  v21 = (a2 + v5 - 1) >> 1;
  v111 = v9 * v106;
  if ( (((_BYTE)a2 + (_BYTE)v5) & 1) == 0 )
    v21 = (a2 + v5) >> 1;
  v99 = (((_BYTE)a2 + (_BYTE)v5) & 1) == 0;
  if ( v21 == 1 )
  {
    while ( 1 )
    {
      if ( v20 == 1 && v19 == 1 )
      {
LABEL_97:
        if ( v8 == 1 )
        {
          v103 = 1;
          v102 = v112 + v101;
        }
        else
        {
          v102 = v112 + v101;
          v103 = (v8 != 0) + 2;
        }
        goto LABEL_27;
      }
      v144 = v19 == 0 || v20 == 0;
      if ( v144 )
      {
        v103 = 0;
        v21 = 0;
        v102 = v112 + v101;
        goto LABEL_27;
      }
      if ( v20 != 1 )
      {
        if ( v19 == 1 )
          goto LABEL_97;
        v20 = 1;
      }
      if ( v19 <= 1 )
        break;
      v19 = 1;
    }
    v118 = 2;
    v104 = 0;
    v133 = 0;
    v140 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( v20 == 1 && v19 == 1 )
      {
        v20 = 1;
        goto LABEL_22;
      }
      while ( 1 )
      {
        if ( !v20 || !v19 )
        {
          v103 = 0;
          v21 = 0;
          v102 = v112 + v101;
          goto LABEL_27;
        }
LABEL_22:
        if ( v21 >= v20 )
          break;
        v20 = v21;
      }
      if ( v21 >= v19 )
        break;
      v19 = v21;
    }
    v118 = v20 + v19;
    if ( v21 >= v20 + v19 )
    {
      v145 = v9;
      v139 = v4;
      v125 = *(_DWORD *)(a1 + 16);
      v37 = sub_3249B0(a1, v20, v19);
      v21 = v37;
      v8 = v125;
      v3 = a2 >> 1;
      v4 = v139;
      v10 = v145;
      v103 = HIDWORD(v37);
      v102 = v112 + v101;
      goto LABEL_27;
    }
    v144 = (v21 & 1) == 0;
    v38 = v21 >> 1;
    if ( (v21 & 1) != 0 )
      v38 = (v21 - 1) >> 1;
    v140 = v20 >> 1;
    v104 = v38;
    v133 = v19 >> 1;
    if ( v38 == 1 )
    {
      v39 = v19 >> 1;
      v40 = v20 >> 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v40 == 1 && v39 == 1 )
          {
            if ( v8 == 1 )
            {
              v83 = 0;
            }
            else
            {
              v127 = 2;
              v83 = 2;
              if ( !v8 )
                goto LABEL_120;
            }
            v127 = v83 + 1;
            goto LABEL_120;
          }
          if ( !v40 || !v39 )
            goto LABEL_119;
          if ( v40 == 1 )
            break;
          v40 = 1;
        }
        if ( v39 <= 1 )
          break;
        v39 = 1;
      }
      v104 = 1;
LABEL_253:
      v132 = v40 + v39;
      if ( v104 >= v40 + v39 )
      {
        v174 = v10;
        v168 = v4;
        v161 = v3;
        v156 = *(_DWORD *)(a1 + 16);
        v151 = a1;
        v87 = sub_3249B0(a1, v40, v39);
LABEL_255:
        a1 = v151;
        v8 = v156;
        v104 = v87;
        v3 = v161;
        v4 = v168;
        v127 = HIDWORD(v87);
        v10 = v174;
        goto LABEL_120;
      }
      v184 = v10;
      v180 = v4;
      v175 = v3;
      v169 = *(_DWORD *)(a1 + 16);
      v162 = v39;
      v88 = sub_326230(a1, v40, v39, v104);
      v89 = v162;
      v8 = v169;
      v3 = v175;
      v4 = v180;
      v10 = v184;
      if ( !v88 )
      {
        v174 = v184;
        v168 = v180;
        v161 = v3;
        v156 = v8;
        v151 = a1;
        v87 = sub_3254A0(a1, v40, v89, v104);
        goto LABEL_255;
      }
      v90 = (v162 * v40) >> 1;
      if ( v169 == 1 )
      {
        v127 = 0;
      }
      else
      {
        v127 = v90 + v132;
        if ( !v169 )
          goto LABEL_120;
      }
      v127 += v90;
      goto LABEL_120;
    }
  }
  v39 = v133;
  v40 = v140;
LABEL_112:
  if ( v40 == 1 && v39 == 1 )
  {
    v40 = 1;
    goto LABEL_115;
  }
  while ( v40 && v39 )
  {
LABEL_115:
    if ( v104 >= v40 )
    {
      if ( v104 >= v39 )
        goto LABEL_253;
      v39 = 2;
      goto LABEL_112;
    }
    v40 = v104;
  }
LABEL_119:
  v127 = 0;
  v104 = 0;
LABEL_120:
  if ( v144 )
    v41 = (v21 >> 1) + 1;
  else
    v41 = (v21 + 1) >> 1;
  v42 = (v20 & 1) + v140;
  v43 = v133;
  v134 = v133 + (v19 & 1);
  v44 = v43 + v140;
  if ( v42 + v134 - 1 <= v44 )
    v44 = v42 + v134 - 1;
  v146 = 2 * v44;
  v141 = v44 * v106;
  for ( i = v134; ; i = v41 )
  {
    if ( v42 == 1 && i == 1 )
    {
      v135 = 1;
LABEL_128:
      v42 = 1;
      if ( v41 != 1 )
        goto LABEL_129;
      if ( v8 == 1 )
      {
        v79 = 0;
      }
      else
      {
        if ( !v8 )
        {
          v49 = v146 + v104 + 2;
          v102 = v112 + v101;
          v50 = v127 + v141 + v102 + 2;
          goto LABEL_190;
        }
        v79 = 2;
      }
      LODWORD(v48) = v79 + 1;
LABEL_131:
      v49 = v41 + v146 + v104 + 1;
      v102 = v112 + v101;
      v50 = v48 + v127 + v102 + v141;
      v51 = v118;
      v116 = 5 * v118;
      v105 = v50 + 5 * v49;
      v52 = v118;
      if ( v20 <= v118 )
        v52 = v20;
      if ( v118 > v19 )
        v51 = v19;
      v53 = (v51 * v52) >> 1;
      if ( v8 == 1 )
      {
        v55 = 0;
        if ( v53 + v116 < v105 )
          goto LABEL_139;
      }
      else
      {
        v54 = v53 + v118;
        if ( !v8 )
          goto LABEL_195;
        if ( v54 + v53 + v116 < v105 )
        {
          v55 = v118 + ((v19 * v20) >> 1);
LABEL_139:
          v103 = v55 + ((v19 * v20) >> 1);
          goto LABEL_27;
        }
      }
LABEL_186:
      v143 = v10;
      v138 = v4;
      v131 = v3;
      v122 = v8;
      v72 = sub_3254A0(a1, v20, v19, v21);
      v8 = v122;
      v21 = v72;
      v3 = v131;
      v4 = v138;
      v103 = HIDWORD(v72);
      v10 = v143;
      goto LABEL_27;
    }
    if ( !v42 || !i )
    {
      LODWORD(v48) = 0;
      v41 = 0;
      goto LABEL_131;
    }
    while ( v41 < v42 )
    {
      if ( v41 == 1 && i == 1 )
      {
        v135 = 1;
        goto LABEL_128;
      }
      v42 = v41;
    }
    if ( v41 >= i )
      break;
  }
  v135 = i;
  v152 = i + v42;
  if ( v41 >= i + v42 )
  {
LABEL_129:
    v46 = v135;
    v163 = v10;
    v157 = v4;
    v153 = v3;
    v148 = v8;
    v136 = a1;
    v47 = sub_3249B0(a1, v42, v46);
LABEL_130:
    a1 = v136;
    v8 = v148;
    v41 = v47;
    v3 = v153;
    v4 = v157;
    v48 = HIDWORD(v47);
    v10 = v163;
    goto LABEL_131;
  }
  v187 = v10;
  v185 = v4;
  v181 = v3;
  v176 = v8;
  v170 = v41;
  v91 = sub_326230(a1, v42, i, v41);
  v41 = v170;
  v8 = v176;
  v3 = v181;
  v4 = v185;
  v10 = v187;
  if ( !v91 )
  {
    v95 = v135;
    v163 = v187;
    v157 = v185;
    v153 = v181;
    v148 = v176;
    v136 = a1;
    v47 = sub_3254A0(a1, v42, v95, v41);
    goto LABEL_130;
  }
  v92 = (v42 * v135) >> 1;
  if ( v176 == 1 )
  {
    v93 = 0;
    goto LABEL_281;
  }
  v93 = v92 + v152;
  if ( v176 )
  {
LABEL_281:
    LODWORD(v48) = v92 + v93;
    goto LABEL_131;
  }
  v49 = v170 + v146 + v104 + 1;
  v102 = v112 + v101;
  v50 = v93 + v127 + v102 + v141;
LABEL_190:
  v73 = v118;
  v74 = v118;
  if ( v20 <= v118 )
    v74 = v20;
  if ( v118 > v19 )
    v73 = v19;
  v54 = v118 + ((v73 * v74) >> 1);
LABEL_195:
  if ( v54 + 5 * v118 >= 5 * v49 + v50 )
    goto LABEL_186;
  v103 = ((v19 * v20) >> 1) + v118;
LABEL_27:
  if ( v99 )
    v22 = (v15 >> 1) + 1;
  else
    v22 = (v15 + 1) >> 1;
  v23 = v96;
  v100 = v97;
  v24 = v97;
  while ( 2 )
  {
    if ( v23 == 1 && v24 == 1 )
    {
      v100 = 1;
LABEL_33:
      v23 = 1;
      if ( v22 == 1 )
      {
        if ( v8 == 1 )
        {
          v33 = 1;
        }
        else
        {
          if ( !v8 )
          {
            v34 = v21 + v98 + 2;
            v35 = v103 + v111 + v102 + 2;
            goto LABEL_80;
          }
          v33 = 3;
        }
LABEL_65:
        v27 = v22 + v21 + v98 + 1;
        v28 = v102 + v33 + v103 + v111;
        if ( v18 > v15 )
          v18 = v15;
        if ( v5 > v15 )
          v5 = v15;
        v16 = (v5 * v18) >> 1;
        v29 = v15 + v16;
        if ( v8 != 1 )
          goto LABEL_41;
        goto LABEL_70;
      }
      goto LABEL_34;
    }
    if ( !v23 || !v24 )
    {
      LODWORD(v26) = 0;
      LODWORD(v25) = 0;
      goto LABEL_35;
    }
    if ( v22 < v23 )
    {
      if ( v22 == 1 && v24 == 1 )
        goto LABEL_33;
      v23 = v22;
    }
    if ( v22 < v100 )
    {
      v100 = v22;
      v24 = v22;
      continue;
    }
    break;
  }
  v114 = v23 + v100;
  if ( v22 >= v23 + v100 )
  {
LABEL_34:
    v124 = v10;
    v117 = v4;
    v113 = v3;
    v107 = v8;
    v25 = sub_3249B0(a1, v23, v100);
    v8 = v107;
    v3 = v113;
    v4 = v117;
    v10 = v124;
    v26 = HIDWORD(v25);
    goto LABEL_35;
  }
  if ( v23 == 10 )
    goto LABEL_107;
  v56 = v23 >> 1;
  v128 = (v23 >> 1) + (v23 & 1);
  v57 = v100 >> 1;
  v58 = v128 + (v100 & 1) + (v100 >> 1) - 1;
  if ( v58 > (v23 >> 1) + (v100 >> 1) )
    v58 = (v23 >> 1) + (v100 >> 1);
  v147 = 2 * v58;
  v142 = v58 * v106;
  v59 = (v22 - 1) >> 1;
  if ( (v22 & 1) == 0 )
    v59 = v22 >> 1;
  v109 = v59;
  if ( v59 == 1 )
  {
    while ( v56 != 1 || v57 != 1 )
    {
      if ( !v56 || !v57 )
        goto LABEL_159;
      if ( v56 == 1 )
      {
        if ( v57 <= 1 )
        {
LABEL_220:
          v123 = v57 + v56;
          if ( v59 >= v57 + v56 )
          {
            v177 = v10;
            v171 = v4;
            v165 = v3;
            v159 = v8;
            v155 = a1;
            v78 = sub_3249B0(a1, v56, v57);
LABEL_222:
            a1 = v155;
            v8 = v159;
            v109 = v78;
            v3 = v165;
            v4 = v171;
            v120 = HIDWORD(v78);
            v10 = v177;
            goto LABEL_160;
          }
          v186 = v10;
          v182 = v4;
          v178 = v3;
          v172 = v8;
          v166 = v57;
          v80 = sub_326230(a1, v56, v57, v59);
          v81 = v166;
          v8 = v172;
          v3 = v178;
          v4 = v182;
          v10 = v186;
          if ( !v80 )
          {
            v177 = v186;
            v171 = v182;
            v165 = v3;
            v159 = v8;
            v155 = a1;
            v78 = sub_3254A0(a1, v56, v81, v109);
            goto LABEL_222;
          }
          v82 = (v56 * v166) >> 1;
          if ( v172 == 1 )
          {
            v120 = 0;
          }
          else
          {
            v120 = v82 + v123;
            if ( !v172 )
              goto LABEL_160;
          }
          v120 += v82;
          goto LABEL_160;
        }
        v57 = 1;
      }
      else
      {
        v56 = 1;
      }
    }
    if ( v8 == 1 )
    {
      v94 = 0;
    }
    else
    {
      v120 = 2;
      v94 = 2;
      if ( !v8 )
        goto LABEL_160;
    }
    v120 = v94 + 1;
  }
  else
  {
LABEL_152:
    if ( v56 == 1 && v57 == 1 )
    {
      v56 = 1;
      goto LABEL_155;
    }
    while ( v56 && v57 )
    {
LABEL_155:
      if ( v59 >= v56 )
      {
        if ( v59 >= v57 )
          goto LABEL_220;
        v57 = v59;
        goto LABEL_152;
      }
      v56 = v59;
    }
LABEL_159:
    v120 = 0;
    v109 = 0;
  }
LABEL_160:
  v60 = (v100 & 1) + (v100 >> 1);
  if ( (v22 & 1) != 0 )
    v61 = (v22 + 1) >> 1;
  else
    v61 = (v22 >> 1) + 1;
  while ( 2 )
  {
    if ( v128 == 1 && v60 == 1 )
    {
      v137 = 1;
LABEL_165:
      v128 = 1;
      if ( v61 != 1 )
        goto LABEL_166;
      if ( v8 == 1 )
      {
        v77 = 0;
      }
      else
      {
        if ( !v8 )
        {
          v110 = v109 + v147 + 2;
          v65 = v120 + v142 + v102 + 2;
          goto LABEL_209;
        }
        v77 = 2;
      }
      LODWORD(v64) = v77 + 1;
LABEL_168:
      v110 = v61 + v109 + v147 + 1;
      v65 = v64 + v120 + v102 + v142;
      v130 = 5 * v114;
      v66 = v23 + v100;
      v121 = 5 * v110 + v65;
      v67 = v100;
      if ( v114 > v23 )
        v66 = v23;
      if ( v114 <= v100 )
        v67 = v23 + v100;
      v68 = (v67 * v66) >> 1;
      if ( v8 != 1 )
      {
        v69 = v68 + v114;
        if ( !v8 )
          goto LABEL_214;
        if ( v69 + v68 + v130 >= v121 )
          goto LABEL_107;
        v70 = v114 + ((v23 * v100) >> 1);
LABEL_176:
        v33 = v70 + ((v23 * v100) >> 1);
        goto LABEL_65;
      }
      v70 = 0;
      if ( v68 + v130 < v121 )
        goto LABEL_176;
LABEL_107:
      v126 = v10;
      v119 = v4;
      v115 = v3;
      v108 = v8;
      v25 = sub_3254A0(a1, v23, v100, v22);
      v10 = v126;
      v4 = v119;
      v3 = v115;
      v8 = v108;
      v26 = HIDWORD(v25);
LABEL_35:
      v27 = v25 + v21 + v98 + 1;
      v28 = v102 + v26 + v103 + v111;
      if ( v18 > v15 )
        v18 = v15;
      if ( v5 > v15 )
        v5 = v15;
      v16 = (v5 * v18) >> 1;
      if ( v8 != 1 )
      {
        v29 = v15 + v16;
        if ( !v8 )
        {
          v16 = v29;
          if ( v29 + 5 * v15 >= 5 * v27 + v28 )
            goto LABEL_6;
          return (v16 << 32) | v15;
        }
LABEL_41:
        if ( (_DWORD)v16 + v29 + 5 * v15 < v28 + 5 * v27 )
        {
          v30 = v15 + v16;
          goto LABEL_43;
        }
LABEL_5:
        v11 = 6;
        if ( v8 != 2 )
          goto LABEL_6;
LABEL_7:
        v12 = v11 * v10;
        if ( v3 == 1 && (LODWORD(v13) = v11, v14 = 2, v4 == 1) )
        {
LABEL_9:
          if ( v96 == 1 && v97 == 1 )
          {
LABEL_11:
            v15 = v14 + v98 + 2;
LABEL_12:
            v16 = (unsigned int)(v13 + v11 + v12 - 2);
            return (v16 << 32) | v15;
          }
        }
        else
        {
          if ( v3 && v4 )
          {
            v31 = sub_32C9F0(a1, v3, v4);
            v14 = v31;
            v13 = HIDWORD(v31);
            goto LABEL_9;
          }
          if ( v96 == 1 && v97 == 1 )
          {
            v14 = 0;
            LODWORD(v13) = 0;
            goto LABEL_11;
          }
          if ( !v96 || !v97 )
          {
            v15 = v98;
            LODWORD(v13) = 0;
            v11 = 0;
            goto LABEL_12;
          }
          v14 = 0;
          LODWORD(v13) = 0;
        }
        v32 = sub_32C9F0(a1, v96, v97);
        v11 = HIDWORD(v32);
        v15 = v32 + v98 + v14;
        goto LABEL_12;
      }
LABEL_70:
      if ( (unsigned int)v16 + 5 * v15 >= 5 * v27 + v28 )
        goto LABEL_6;
      return (v16 << 32) | v15;
    }
    if ( !v128 || !v60 )
    {
      LODWORD(v64) = 0;
      v61 = 0;
      goto LABEL_168;
    }
    for ( j = v128; v61 < j; j = v61 )
    {
      if ( v61 == 1 && v60 == 1 )
      {
        v137 = 1;
        goto LABEL_165;
      }
    }
    v128 = j;
    if ( v61 < v60 )
    {
      v60 = v61;
      continue;
    }
    break;
  }
  v137 = v60;
  v150 = j + v60;
  if ( v61 >= j + v60 )
  {
LABEL_166:
    v62 = v128;
    v164 = v10;
    v158 = v4;
    v154 = v3;
    v149 = v8;
    v129 = a1;
    v63 = sub_3249B0(a1, v62, v137);
LABEL_167:
    a1 = v129;
    v8 = v149;
    v61 = v63;
    v3 = v154;
    v4 = v158;
    v64 = HIDWORD(v63);
    v10 = v164;
    goto LABEL_168;
  }
  v183 = v10;
  v179 = v4;
  v173 = v3;
  v167 = v8;
  v160 = v61;
  v84 = sub_326230(a1, j, v60, v61);
  v61 = v160;
  v8 = v167;
  v3 = v173;
  v4 = v179;
  v10 = v183;
  if ( !v84 )
  {
    v164 = v183;
    v158 = v179;
    v154 = v173;
    v149 = v8;
    v129 = a1;
    v63 = sub_3254A0(a1, j, v137, v61);
    goto LABEL_167;
  }
  v85 = (j * v137) >> 1;
  if ( v167 == 1 )
  {
    v86 = 0;
    goto LABEL_251;
  }
  v86 = v85 + v150;
  if ( v167 )
  {
LABEL_251:
    LODWORD(v64) = v85 + v86;
    goto LABEL_168;
  }
  v110 = v109 + v147 + 1 + v160;
  v65 = v86 + v120 + v102 + v142;
LABEL_209:
  v75 = v100;
  v76 = v23 + v100;
  if ( v114 > v23 )
    v76 = v23;
  if ( v114 <= v100 )
    v75 = v23 + v100;
  v69 = v114 + ((v75 * v76) >> 1);
LABEL_214:
  if ( v69 + 5 * v114 >= 5 * v110 + v65 )
    goto LABEL_107;
  v34 = v22 + v21 + v98 + 1;
  v35 = ((v23 * v100) >> 1) + v114 + v103 + v111 + v102;
LABEL_80:
  v36 = 5 * v34;
  if ( v18 > v15 )
    v18 = v15;
  if ( v5 > v15 )
    v5 = v15;
  LODWORD(v16) = (v5 * v18) >> 1;
  v30 = v15 + v16;
  if ( v15 + (_DWORD)v16 + 5 * v15 >= v36 + v35 )
  {
LABEL_6:
    v11 = 3;
    goto LABEL_7;
  }
LABEL_43:
  v16 = v30 + (unsigned int)v16;
  if ( !v8 )
    v16 = v30;
  return (v16 << 32) | v15;
}

