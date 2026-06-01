__int64 *__fastcall sub_3C0D20(__int64 *a1, int a2)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _BYTE *v8; // rdi
  _BYTE *v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r12
  __int64 v27; // rsi
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // r12
  __int64 v32; // rsi
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  _DWORD *v35; // r12
  __int64 v36; // r12
  __int64 v37; // rsi
  unsigned __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // rsi
  unsigned __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // r12
  __int64 v46; // rsi
  unsigned __int64 v47; // r13
  __int64 v48; // r14
  __int64 v49; // r12
  __int64 v50; // r12
  __int64 v51; // rsi
  unsigned __int64 v52; // r13
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // r12
  __int64 v56; // rsi
  unsigned __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // r12
  __int64 v60; // r12
  __int64 v61; // rsi
  unsigned __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // r12
  __int64 v65; // r12
  __int64 v66; // rsi
  unsigned __int64 v67; // r13
  __int64 v68; // r14
  __int64 v69; // r12
  __int64 v70; // rsi
  unsigned __int64 v71; // r13
  __int64 v72; // r14
  _DWORD *v73; // r12
  __int64 v74; // r12
  __int64 v75; // rsi
  unsigned __int64 v76; // r13
  __int64 v77; // r14
  _DWORD *v78; // r12
  __int64 v79; // r12
  __int64 v80; // rsi
  unsigned __int64 v81; // r13
  __int64 v82; // r14
  _DWORD *v83; // r12
  __int64 v84; // r12
  __int64 v85; // rsi
  unsigned __int64 v86; // r13
  __int64 v87; // r14
  __int64 v88; // r12
  __int64 v89; // r12
  __int64 v90; // rsi
  unsigned __int64 v91; // r13
  __int64 v92; // r14
  __int64 v93; // r12
  __int64 v94; // rsi
  unsigned __int64 v95; // r13
  __int64 v96; // r14
  __int64 v97; // r12
  __int64 v98; // rsi
  unsigned __int64 v99; // r13
  __int64 v100; // r14
  __int64 v101; // r12
  __int64 v102; // r12
  __int64 v103; // rsi
  unsigned __int64 v104; // r13
  __int64 v105; // r14
  __int64 v106; // r12
  __int64 v107; // rsi
  unsigned __int64 v108; // r13
  __int64 v109; // r14
  __int64 v110; // r12
  __int64 v111; // r12
  __int64 v112; // rsi
  unsigned __int64 v113; // r13
  __int64 v114; // r14
  __int64 v115; // r12
  __int64 v116; // r12
  __int64 v117; // rsi
  unsigned __int64 v118; // r13
  __int64 v119; // r14
  __int64 v120; // r12
  __int64 v121; // rsi
  unsigned __int64 v122; // r13
  __int64 v123; // r14
  __int64 v124; // r12
  __int64 v125; // r12
  __int64 v126; // rsi
  unsigned __int64 v127; // r13
  __int64 v128; // r14
  _DWORD *v129; // r12
  __int64 v130; // r12
  __int64 v131; // rsi
  unsigned __int64 v132; // r13
  __int64 v133; // r14
  _DWORD *v134; // r12
  __int64 v135; // r12
  __int64 v136; // rsi
  unsigned __int64 v137; // r13
  __int64 v138; // r14
  __int64 v139; // r12
  __int64 v140; // rsi
  unsigned __int64 v141; // r13
  __int64 v142; // r14
  _DWORD *v143; // r12
  __int64 v144; // r12
  __int64 v145; // rsi
  unsigned __int64 v146; // r13
  __int64 v147; // r14
  _DWORD *v148; // r12
  __int64 v149; // r12
  _BYTE *v150; // rsi
  unsigned __int64 v151; // r13
  __int64 v152; // r14
  _DWORD *v153; // r12
  __int64 v154; // r13
  unsigned __int64 v155; // rbp
  __int64 v156; // rsi
  __m128i si128; // xmm0
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // r13
  unsigned __int64 v190; // rbp
  __int64 v191; // rsi
  __m128i v192; // xmm0
  __int64 v193; // r13
  unsigned __int64 v194; // rbp
  __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax

  if ( (a2 & 1) != 0 )
  {
    v149 = a1[1];
    if ( v149 )
    {
      v152 = v149 + 6;
      v151 = v149 + 7;
      v150 = (_BYTE *)*a1;
      --v149;
      if ( a1[2] >= v151 )
        goto LABEL_134;
    }
    else
    {
      v150 = (_BYTE *)*a1;
      v151 = 8;
      v152 = 7;
      if ( (unsigned __int64)a1[2] >= 8 )
      {
LABEL_134:
        a1[1] = v151;
        v150[v152] = 0;
        v153 = (_DWORD *)(*a1 + v149);
        *v153 = 1313753420;
        *(_DWORD *)((char *)v153 + 3) = 978146638;
        goto LABEL_2;
      }
    }
    v158 = qvector_reserve(a1, v150, v151, 1);
    *a1 = v158;
    v150 = (_BYTE *)v158;
    goto LABEL_134;
  }
LABEL_2:
  if ( (a2 & 2) == 0 )
    goto LABEL_3;
  v144 = a1[1];
  if ( v144 )
  {
    v147 = v144 + 6;
    v146 = v144 + 7;
    v145 = *a1;
    --v144;
    if ( a1[2] >= v146 )
      goto LABEL_131;
LABEL_145:
    v159 = qvector_reserve(a1, v145, v146, 1);
    *a1 = v159;
    v145 = v159;
    goto LABEL_131;
  }
  v145 = *a1;
  v146 = 8;
  v147 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_145;
LABEL_131:
  a1[1] = v146;
  *(_BYTE *)(v145 + v147) = 0;
  v148 = (_DWORD *)(*a1 + v144);
  *v148 = 1380275029;
  *(_DWORD *)((char *)v148 + 3) = 978342738;
LABEL_3:
  if ( (a2 & 4) == 0 )
    goto LABEL_4;
  v139 = a1[1];
  if ( v139 )
  {
    v142 = v139 + 6;
    v141 = v139 + 7;
    v140 = *a1;
    --v139;
    if ( a1[2] >= v141 )
      goto LABEL_128;
LABEL_195:
    v184 = qvector_reserve(a1, v140, v141, 1);
    *a1 = v184;
    v140 = v184;
    goto LABEL_128;
  }
  v140 = *a1;
  v141 = 8;
  v142 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_195;
LABEL_128:
  a1[1] = v141;
  *(_BYTE *)(v140 + v142) = 0;
  v143 = (_DWORD *)(*a1 + v139);
  *v143 = 1312970064;
  *(_DWORD *)((char *)v143 + 3) = 978141518;
LABEL_4:
  if ( (a2 & 8) == 0 )
    goto LABEL_5;
  v135 = a1[1];
  if ( v135 )
  {
    v138 = v135 + 7;
    v137 = v135 + 8;
    v136 = *a1;
    --v135;
    if ( a1[2] >= v137 )
      goto LABEL_125;
LABEL_197:
    v185 = qvector_reserve(a1, v136, v137, 1);
    *a1 = v185;
    v136 = v185;
    goto LABEL_125;
  }
  v136 = *a1;
  v137 = 9;
  v138 = 8;
  if ( (unsigned __int64)a1[2] < 9 )
    goto LABEL_197;
LABEL_125:
  a1[1] = v137;
  *(_BYTE *)(v136 + v138) = 0;
  *(_QWORD *)(*a1 + v135) = 0x3A4D414E4B414557LL;
LABEL_5:
  if ( (a2 & 0x10) == 0 )
    goto LABEL_6;
  v130 = a1[1];
  if ( v130 )
  {
    v133 = v130 + 6;
    v132 = v130 + 7;
    v131 = *a1;
    --v130;
    if ( a1[2] >= v132 )
      goto LABEL_122;
LABEL_199:
    v186 = qvector_reserve(a1, v131, v132, 1);
    *a1 = v186;
    v131 = v186;
    goto LABEL_122;
  }
  v131 = *a1;
  v132 = 8;
  v133 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_199;
LABEL_122:
  a1[1] = v132;
  *(_BYTE *)(v131 + v133) = 0;
  v134 = (_DWORD *)(*a1 + v130);
  *v134 = 1145325896;
  *(_DWORD *)((char *)v134 + 3) = 978208068;
LABEL_6:
  if ( (a2 & 0x20) == 0 )
    goto LABEL_7;
  v125 = a1[1];
  if ( v125 )
  {
    v128 = v125 + 6;
    v127 = v125 + 7;
    v126 = *a1;
    --v125;
    if ( a1[2] >= v127 )
      goto LABEL_119;
LABEL_201:
    v187 = qvector_reserve(a1, v126, v127, 1);
    *a1 = v187;
    v126 = v187;
    goto LABEL_119;
  }
  v126 = *a1;
  v127 = 8;
  v128 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_201;
LABEL_119:
  a1[1] = v127;
  *(_BYTE *)(v126 + v128) = 0;
  v129 = (_DWORD *)(*a1 + v125);
  *v129 = 1431191885;
  *(_DWORD *)((char *)v129 + 3) = 978075989;
LABEL_7:
  if ( (a2 & 0x40) == 0 )
    goto LABEL_8;
  v120 = a1[1];
  if ( v120 )
  {
    v123 = v120 + 5;
    v122 = v120 + 6;
    v121 = *a1;
    --v120;
    if ( a1[2] >= v122 )
      goto LABEL_116;
LABEL_179:
    v176 = qvector_reserve(a1, v121, v122, 1);
    *a1 = v176;
    v121 = v176;
    goto LABEL_116;
  }
  v121 = *a1;
  v122 = 7;
  v123 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_179;
LABEL_116:
  a1[1] = v122;
  *(_BYTE *)(v121 + v123) = 0;
  v124 = *a1 + v120;
  *(_DWORD *)v124 = 1380077390;
  *(_WORD *)(v124 + 4) = 14916;
LABEL_8:
  if ( (a2 & 0x80u) == 0 )
    goto LABEL_9;
  v116 = a1[1];
  if ( v116 )
  {
    v119 = v116 + 7;
    v118 = v116 + 8;
    v117 = *a1;
    --v116;
    if ( a1[2] >= v118 )
      goto LABEL_113;
LABEL_181:
    v177 = qvector_reserve(a1, v117, v118, 1);
    *a1 = v177;
    v117 = v177;
    goto LABEL_113;
  }
  v117 = *a1;
  v118 = 9;
  v119 = 8;
  if ( (unsigned __int64)a1[2] < 9 )
    goto LABEL_181;
LABEL_113:
  a1[1] = v118;
  *(_BYTE *)(v117 + v119) = 0;
  *(_QWORD *)(*a1 + v116) = 0x3A46464F5254535ALL;
LABEL_9:
  if ( (a2 & 0x100) == 0 )
    goto LABEL_10;
  v111 = a1[1];
  if ( v111 )
  {
    v114 = v111 + 5;
    v113 = v111 + 6;
    v112 = *a1;
    --v111;
    if ( a1[2] >= v113 )
      goto LABEL_110;
LABEL_183:
    v178 = qvector_reserve(a1, v112, v113, 1);
    *a1 = v178;
    v112 = v178;
    goto LABEL_110;
  }
  v112 = *a1;
  v113 = 7;
  v114 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_183;
LABEL_110:
  a1[1] = v113;
  *(_BYTE *)(v112 + v114) = 0;
  v115 = *a1 + v111;
  *(_DWORD *)v115 = 1414483522;
  *(_WORD *)(v115 + 4) = 14896;
LABEL_10:
  if ( (a2 & 0x200) == 0 )
    goto LABEL_11;
  v106 = a1[1];
  if ( v106 )
  {
    v109 = v106 + 5;
    v108 = v106 + 6;
    v107 = *a1;
    --v106;
    if ( a1[2] >= v108 )
      goto LABEL_107;
LABEL_185:
    v179 = qvector_reserve(a1, v107, v108, 1);
    *a1 = v179;
    v107 = v179;
    goto LABEL_107;
  }
  v107 = *a1;
  v108 = 7;
  v109 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_185;
LABEL_107:
  a1[1] = v108;
  *(_BYTE *)(v107 + v109) = 0;
  v110 = *a1 + v106;
  *(_DWORD *)v110 = 1414483522;
  *(_WORD *)(v110 + 4) = 14897;
LABEL_11:
  if ( (a2 & 0x400) == 0 )
    goto LABEL_12;
  v102 = a1[1];
  if ( v102 )
  {
    v105 = v102 + 3;
    v104 = v102 + 4;
    v103 = *a1;
    --v102;
    if ( a1[2] >= v104 )
      goto LABEL_104;
LABEL_187:
    v180 = qvector_reserve(a1, v103, v104, 1);
    *a1 = v180;
    v103 = v180;
    goto LABEL_104;
  }
  v103 = *a1;
  v104 = 5;
  v105 = 4;
  if ( (unsigned __int64)a1[2] < 5 )
    goto LABEL_187;
LABEL_104:
  a1[1] = v104;
  *(_BYTE *)(v103 + v105) = 0;
  *(_DWORD *)(*a1 + v102) = 977422668;
LABEL_12:
  if ( (a2 & 0x800) == 0 )
    goto LABEL_13;
  v97 = a1[1];
  if ( v97 )
  {
    v100 = v97 + 2;
    v99 = v97 + 3;
    v98 = *a1;
    --v97;
    if ( a1[2] >= v99 )
      goto LABEL_101;
LABEL_189:
    v181 = qvector_reserve(a1, v98, v99, 1);
    *a1 = v181;
    v98 = v181;
    goto LABEL_101;
  }
  v98 = *a1;
  v99 = 4;
  v100 = 3;
  if ( (unsigned __int64)a1[2] < 4 )
    goto LABEL_189;
LABEL_101:
  a1[1] = v99;
  *(_BYTE *)(v98 + v100) = 0;
  v101 = *a1 + v97;
  *(_WORD *)v101 = 18772;
  *(_BYTE *)(v101 + 2) = 58;
LABEL_13:
  if ( (a2 & 0x1000) == 0 )
    goto LABEL_14;
  v93 = a1[1];
  if ( v93 )
  {
    v96 = v93 + 3;
    v95 = v93 + 4;
    v94 = *a1;
    --v93;
    if ( a1[2] >= v95 )
      goto LABEL_98;
LABEL_191:
    v182 = qvector_reserve(a1, v94, v95, 1);
    *a1 = v182;
    v94 = v182;
    goto LABEL_98;
  }
  v94 = *a1;
  v95 = 5;
  v96 = 4;
  if ( (unsigned __int64)a1[2] < 5 )
    goto LABEL_191;
LABEL_98:
  a1[1] = v95;
  *(_BYTE *)(v94 + v96) = 0;
  *(_DWORD *)(*a1 + v93) = 976243028;
LABEL_14:
  if ( (a2 & 0x2000) == 0 )
    goto LABEL_15;
  v89 = a1[1];
  if ( v89 )
  {
    v92 = v89 + 3;
    v91 = v89 + 4;
    v90 = *a1;
    --v89;
    if ( a1[2] >= v91 )
      goto LABEL_95;
LABEL_193:
    v183 = qvector_reserve(a1, v90, v91, 1);
    *a1 = v183;
    v90 = v183;
    goto LABEL_95;
  }
  v90 = *a1;
  v91 = 5;
  v92 = 4;
  if ( (unsigned __int64)a1[2] < 5 )
    goto LABEL_193;
LABEL_95:
  a1[1] = v91;
  *(_BYTE *)(v90 + v92) = 0;
  *(_DWORD *)(*a1 + v89) = 976308564;
LABEL_15:
  if ( (a2 & 0x4000) == 0 )
    goto LABEL_16;
  v84 = a1[1];
  if ( v84 )
  {
    v87 = v84 + 5;
    v86 = v84 + 6;
    v85 = *a1;
    --v84;
    if ( a1[2] >= v86 )
      goto LABEL_92;
LABEL_147:
    v160 = qvector_reserve(a1, v85, v86, 1);
    *a1 = v160;
    v85 = v160;
    goto LABEL_92;
  }
  v85 = *a1;
  v86 = 7;
  v87 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_147;
LABEL_92:
  a1[1] = v86;
  *(_BYTE *)(v85 + v87) = 0;
  v88 = *a1 + v84;
  *(_DWORD *)v88 = 1296125516;
  *(_WORD *)(v88 + 4) = 14917;
LABEL_16:
  if ( (a2 & 0x8000) == 0 )
    goto LABEL_17;
  v79 = a1[1];
  if ( v79 )
  {
    v82 = v79 + 6;
    v81 = v79 + 7;
    v80 = *a1;
    --v79;
    if ( a1[2] >= v81 )
      goto LABEL_89;
LABEL_149:
    v161 = qvector_reserve(a1, v80, v81, 1);
    *a1 = v161;
    v80 = v161;
    goto LABEL_89;
  }
  v80 = *a1;
  v81 = 8;
  v82 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_149;
LABEL_89:
  a1[1] = v81;
  *(_BYTE *)(v80 + v82) = 0;
  v83 = (_DWORD *)(*a1 + v79);
  *v83 = 1129072980;
  *(_DWORD *)((char *)v83 + 3) = 978603331;
LABEL_17:
  if ( (a2 & 0x10000) == 0 )
    goto LABEL_18;
  v74 = a1[1];
  if ( v74 )
  {
    v77 = v74 + 6;
    v76 = v74 + 7;
    v75 = *a1;
    --v74;
    if ( a1[2] >= v76 )
      goto LABEL_86;
LABEL_151:
    v162 = qvector_reserve(a1, v75, v76, 1);
    *a1 = v162;
    v75 = v162;
    goto LABEL_86;
  }
  v75 = *a1;
  v76 = 8;
  v77 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_151;
LABEL_86:
  a1[1] = v76;
  *(_BYTE *)(v75 + v77) = 0;
  v78 = (_DWORD *)(*a1 + v74);
  *v78 = 1380276812;
  *(_DWORD *)((char *)v78 + 3) = 976244562;
LABEL_18:
  if ( (a2 & 0x20000) == 0 )
    goto LABEL_19;
  v69 = a1[1];
  if ( v69 )
  {
    v72 = v69 + 6;
    v71 = v69 + 7;
    v70 = *a1;
    --v69;
    if ( a1[2] >= v71 )
      goto LABEL_83;
LABEL_153:
    v163 = qvector_reserve(a1, v70, v71, 1);
    *a1 = v163;
    v70 = v163;
    goto LABEL_83;
  }
  v70 = *a1;
  v71 = 8;
  v72 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_153;
LABEL_83:
  a1[1] = v71;
  *(_BYTE *)(v70 + v72) = 0;
  v73 = (_DWORD *)(*a1 + v69);
  *v73 = 1380276812;
  *(_DWORD *)((char *)v73 + 3) = 976310098;
LABEL_19:
  if ( (a2 & 0x40000) == 0 )
    goto LABEL_20;
  v65 = a1[1];
  if ( v65 )
  {
    v68 = v65 + 7;
    v67 = v65 + 8;
    v66 = *a1;
    --v65;
    if ( a1[2] >= v67 )
      goto LABEL_80;
LABEL_155:
    v164 = qvector_reserve(a1, v66, v67, 1);
    *a1 = v164;
    v66 = v164;
    goto LABEL_80;
  }
  v66 = *a1;
  v67 = 9;
  v68 = 8;
  if ( (unsigned __int64)a1[2] < 9 )
    goto LABEL_155;
LABEL_80:
  a1[1] = v67;
  *(_BYTE *)(v66 + v68) = 0;
  *(_QWORD *)(*a1 + v65) = 0x3A4445524F4C4F43LL;
LABEL_20:
  if ( (a2 & 0x80000) == 0 )
    goto LABEL_21;
  v60 = a1[1];
  if ( v60 )
  {
    v63 = v60 + 8;
    v62 = v60 + 9;
    v61 = *a1;
    --v60;
    if ( a1[2] >= v62 )
      goto LABEL_77;
LABEL_157:
    v165 = qvector_reserve(a1, v61, v62, 1);
    *a1 = v165;
    v61 = v165;
    goto LABEL_77;
  }
  v61 = *a1;
  v62 = 10;
  v63 = 9;
  if ( (unsigned __int64)a1[2] < 0xA )
    goto LABEL_157;
LABEL_77:
  a1[1] = v62;
  *(_BYTE *)(v61 + v63) = 0;
  v64 = *a1 + v60;
  *(_QWORD *)v64 = 0x5254534553524554LL;
  *(_BYTE *)(v64 + 8) = 58;
LABEL_21:
  if ( (a2 & 0x100000) == 0 )
    goto LABEL_22;
  v55 = a1[1];
  if ( v55 )
  {
    v58 = v55 + 5;
    v57 = v55 + 6;
    v56 = *a1;
    --v55;
    if ( a1[2] >= v57 )
      goto LABEL_74;
LABEL_159:
    v166 = qvector_reserve(a1, v56, v57, 1);
    *a1 = v166;
    v56 = v166;
    goto LABEL_74;
  }
  v56 = *a1;
  v57 = 7;
  v58 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_159;
LABEL_74:
  a1[1] = v57;
  *(_BYTE *)(v56 + v58) = 0;
  v59 = *a1 + v55;
  *(_DWORD *)v59 = 1313294675;
  *(_WORD *)(v59 + 4) = 14896;
LABEL_22:
  if ( (a2 & 0x200000) == 0 )
    goto LABEL_23;
  v50 = a1[1];
  if ( v50 )
  {
    v53 = v50 + 5;
    v52 = v50 + 6;
    v51 = *a1;
    --v50;
    if ( a1[2] >= v52 )
      goto LABEL_71;
LABEL_161:
    v167 = qvector_reserve(a1, v51, v52, 1);
    *a1 = v167;
    v51 = v167;
    goto LABEL_71;
  }
  v51 = *a1;
  v52 = 7;
  v53 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_161;
LABEL_71:
  a1[1] = v52;
  *(_BYTE *)(v51 + v53) = 0;
  v54 = *a1 + v50;
  *(_DWORD *)v54 = 1313294675;
  *(_WORD *)(v54 + 4) = 14897;
LABEL_23:
  if ( (a2 & 0x400000) == 0 )
    goto LABEL_24;
  v45 = a1[1];
  if ( v45 )
  {
    v48 = v45 + 5;
    v47 = v45 + 6;
    v46 = *a1;
    --v45;
    if ( a1[2] >= v47 )
      goto LABEL_68;
LABEL_163:
    v168 = qvector_reserve(a1, v46, v47, 1);
    *a1 = v168;
    v46 = v168;
    goto LABEL_68;
  }
  v46 = *a1;
  v47 = 7;
  v48 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_163;
LABEL_68:
  a1[1] = v47;
  *(_BYTE *)(v46 + v48) = 0;
  v49 = *a1 + v45;
  *(_DWORD *)v49 = 1163022158;
  *(_WORD *)(v49 + 4) = 14932;
LABEL_24:
  if ( (a2 & 0x800000) == 0 )
    goto LABEL_25;
  v40 = a1[1];
  if ( v40 )
  {
    v43 = v40 + 8;
    v42 = v40 + 9;
    v41 = *a1;
    --v40;
    if ( a1[2] >= v42 )
      goto LABEL_65;
LABEL_165:
    v169 = qvector_reserve(a1, v41, v42, 1);
    *a1 = v169;
    v41 = v169;
    goto LABEL_65;
  }
  v41 = *a1;
  v42 = 10;
  v43 = 9;
  if ( (unsigned __int64)a1[2] < 0xA )
    goto LABEL_165;
LABEL_65:
  a1[1] = v42;
  *(_BYTE *)(v41 + v43) = 0;
  v44 = *a1 + v40;
  *(_QWORD *)v44 = 0x4450534445584946LL;
  *(_BYTE *)(v44 + 8) = 58;
LABEL_25:
  if ( (a2 & 0x1000000) == 0 )
    goto LABEL_26;
  v36 = a1[1];
  if ( v36 )
  {
    v39 = v36 + 9;
    v38 = v36 + 10;
    v37 = *a1;
    --v36;
    if ( a1[2] >= v38 )
      goto LABEL_62;
LABEL_167:
    v170 = qvector_reserve(a1, v37, v38, 1);
    *a1 = v170;
    v37 = v170;
    goto LABEL_62;
  }
  v37 = *a1;
  v38 = 11;
  v39 = 10;
  if ( (unsigned __int64)a1[2] < 0xB )
    goto LABEL_167;
LABEL_62:
  a1[1] = v38;
  *(_BYTE *)(v37 + v39) = 0;
  qmemcpy((void *)(*a1 + v36), "ALIGNFLOW:", 10);
LABEL_26:
  if ( (a2 & 0x2000000) == 0 )
    goto LABEL_27;
  v31 = a1[1];
  if ( v31 )
  {
    v34 = v31 + 6;
    v33 = v31 + 7;
    v32 = *a1;
    --v31;
    if ( a1[2] >= v33 )
      goto LABEL_59;
LABEL_169:
    v171 = qvector_reserve(a1, v32, v33, 1);
    *a1 = v171;
    v32 = v171;
    goto LABEL_59;
  }
  v32 = *a1;
  v33 = 8;
  v34 = 7;
  if ( (unsigned __int64)a1[2] < 8 )
    goto LABEL_169;
LABEL_59:
  a1[1] = v33;
  *(_BYTE *)(v32 + v34) = 0;
  v35 = (_DWORD *)(*a1 + v31);
  *v35 = 1380275029;
  *(_DWORD *)((char *)v35 + 3) = 977884242;
LABEL_27:
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_28;
  v26 = a1[1];
  if ( v26 )
  {
    v29 = v26 + 5;
    v28 = v26 + 6;
    v27 = *a1;
    --v26;
    if ( a1[2] >= v28 )
      goto LABEL_56;
LABEL_171:
    v172 = qvector_reserve(a1, v27, v28, 1);
    *a1 = v172;
    v27 = v172;
    goto LABEL_56;
  }
  v27 = *a1;
  v28 = 7;
  v29 = 6;
  if ( (unsigned __int64)a1[2] < 7 )
    goto LABEL_171;
LABEL_56:
  a1[1] = v28;
  *(_BYTE *)(v27 + v29) = 0;
  v30 = *a1 + v26;
  *(_DWORD *)v30 = 1179927890;
  *(_WORD *)(v30 + 4) = 14928;
LABEL_28:
  if ( (a2 & 0x8000000) == 0 )
    goto LABEL_29;
  v21 = a1[1];
  if ( v21 )
  {
    v24 = v21 + 8;
    v23 = v21 + 9;
    v22 = *a1;
    --v21;
    if ( a1[2] >= v23 )
      goto LABEL_53;
LABEL_173:
    v173 = qvector_reserve(a1, v22, v23, 1);
    *a1 = v173;
    v22 = v173;
    goto LABEL_53;
  }
  v22 = *a1;
  v23 = 10;
  v24 = 9;
  if ( (unsigned __int64)a1[2] < 0xA )
    goto LABEL_173;
LABEL_53:
  a1[1] = v23;
  *(_BYTE *)(v22 + v24) = 0;
  v25 = *a1 + v21;
  *(_QWORD *)v25 = 0x5053444F4D455355LL;
  *(_BYTE *)(v25 + 8) = 58;
LABEL_29:
  if ( (a2 & 0x10000000) == 0 )
    goto LABEL_30;
  v17 = a1[1];
  if ( v17 )
  {
    v20 = v17 + 7;
    v19 = v17 + 8;
    v18 = *a1;
    --v17;
    if ( a1[2] >= v19 )
      goto LABEL_50;
LABEL_175:
    v174 = qvector_reserve(a1, v18, v19, 1);
    *a1 = v174;
    v18 = v174;
    goto LABEL_50;
  }
  v18 = *a1;
  v19 = 9;
  v20 = 8;
  if ( (unsigned __int64)a1[2] < 9 )
    goto LABEL_175;
LABEL_50:
  a1[1] = v19;
  *(_BYTE *)(v18 + v20) = 0;
  *(_QWORD *)(*a1 + v17) = 0x3A45444F43544F4ELL;
LABEL_30:
  if ( (a2 & 0x20000000) == 0 )
    goto LABEL_31;
  v13 = a1[1];
  if ( v13 )
  {
    v16 = v13 + 7;
    v15 = v13 + 8;
    v14 = *a1;
    --v13;
    if ( a1[2] >= v15 )
      goto LABEL_47;
LABEL_177:
    v175 = qvector_reserve(a1, v14, v15, 1);
    *a1 = v175;
    v14 = v175;
    goto LABEL_47;
  }
  v14 = *a1;
  v15 = 9;
  v16 = 8;
  if ( (unsigned __int64)a1[2] < 9 )
    goto LABEL_177;
LABEL_47:
  a1[1] = v15;
  *(_BYTE *)(v14 + v16) = 0;
  *(_QWORD *)(*a1 + v13) = 0x3A434F5250544F4ELL;
LABEL_31:
  v4 = a1[1];
  v5 = a2 & 0xC2000000;
  v6 = v4;
  switch ( v5 )
  {
    case 0x40000000u:
      if ( v4 )
      {
        v154 = v4 + 15;
        v155 = v4 + 16;
        --v4;
      }
      else
      {
        v155 = 17;
        v154 = 16;
      }
      v156 = *a1;
      if ( a1[2] < v155 )
      {
        v196 = qvector_reserve(a1, v156, v155, 1);
        *a1 = v196;
        v156 = v196;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2383890);
      a1[1] = v155;
      *(_BYTE *)(v156 + v154) = 0;
      *(__m128i *)(*a1 + v4) = si128;
      v6 = a1[1];
      break;
    case 0x80000000:
      if ( v4 )
      {
        v189 = v4 + 15;
        v190 = v4 + 16;
        --v4;
      }
      else
      {
        v190 = 17;
        v189 = 16;
      }
      v191 = *a1;
      if ( a1[2] < v190 )
      {
        v197 = qvector_reserve(a1, v191, v190, 1);
        *a1 = v197;
        v191 = v197;
      }
      v192 = _mm_load_si128((const __m128i *)&xmmword_23838A0);
      a1[1] = v190;
      *(_BYTE *)(v191 + v189) = 0;
      *(__m128i *)(*a1 + v4) = v192;
      v6 = a1[1];
      break;
    case 0xC0000000:
      if ( v4 )
      {
        v193 = v4 + 13;
        v194 = v4 + 14;
        --v4;
      }
      else
      {
        v194 = 15;
        v193 = 14;
      }
      v195 = *a1;
      if ( a1[2] < v194 )
      {
        v198 = qvector_reserve(a1, v195, v194, 1);
        *a1 = v198;
        v195 = v198;
      }
      a1[1] = v194;
      *(_BYTE *)(v195 + v193) = 0;
      qmemcpy((void *)(*a1 + v4), "HR_DETERMINED:", 14);
      v6 = a1[1];
      break;
  }
  v7 = v6;
  if ( v6 <= 1 )
    return a1;
  v8 = (_BYTE *)*a1;
  v9 = (_BYTE *)(*a1 + v6 - 1);
  if ( *a1 < (unsigned __int64)v9 )
  {
    while ( *(v9 - 1) == 58 )
    {
      if ( v8 == --v9 )
        goto LABEL_135;
    }
  }
  v10 = v9 - v8;
  if ( v9 != v8 )
  {
    v11 = v10 + 1;
    if ( v6 < v10 + 1 )
    {
      if ( a1[2] < v11 )
      {
        v199 = qvector_reserve(a1, *a1, v10 + 1, 1);
        v7 = a1[1];
        *a1 = v199;
        v8 = (_BYTE *)v199;
      }
      memset(&v8[v7], 0, v11 - v7);
      v188 = *a1;
      a1[1] = v11;
      v9 = (_BYTE *)(v10 + v188);
    }
    else if ( v6 != v10 + 1 )
    {
      a1[1] = v11;
    }
    *v9 = 0;
    return a1;
  }
LABEL_135:
  if ( !v8 )
    return a1;
  a1[1] = 0;
  qfree(v8);
  *a1 = 0;
  a1[2] = 0;
  return a1;
}

