__int64 __fastcall sub_17974D0(__int64 *a1, __int64 a2, unsigned int a3, _BYTE *a4, unsigned __int8 a5, char a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rax
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r15
  __int64 v36; // rbp
  _BYTE *i; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // rbp
  __int64 v48; // r12
  unsigned __int64 v49; // rax
  __int64 *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  int v54; // eax
  bool v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // r9d
  __int64 *v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rsi
  __int64 *v66; // rax
  unsigned __int64 *v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rsi
  unsigned __int64 *v70; // rax
  unsigned __int64 **v71; // rax
  unsigned __int64 *v72; // rdx
  unsigned __int64 v73; // rax
  unsigned __int64 *v74; // rsi
  unsigned __int64 v75; // rsi
  unsigned __int64 *v76; // rax
  unsigned __int64 v78; // rbp
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned int v86; // eax
  int v87; // ecx
  unsigned __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // eax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  bool v105; // r9
  __int64 v106; // rax
  __int64 v107; // r8
  unsigned __int64 v108; // rax
  __int64 v109; // rsi
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rax
  _DWORD *v112; // rsi
  __int64 v113; // rdi
  int v114; // eax
  __int64 v115; // rax
  _DWORD *v116; // rax
  __int64 v117; // rdi
  int v118; // edx
  __int64 v119; // r15
  unsigned __int64 v120; // rdx
  __int64 v121; // rsi
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rax
  __int64 v124; // r15
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // r9
  __int64 v131; // rbp
  unsigned __int64 v132; // r8
  __int64 v133; // rcx
  _QWORD *v134; // rax
  _QWORD *v135; // rdi
  _QWORD *v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 *v139; // r15
  _DWORD *v140; // rbp
  __int64 *v141; // r12
  __int64 *v142; // rdx
  __int64 v143; // r8
  unsigned __int64 v144; // rsi
  __int64 v145; // rsi
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // rax
  unsigned __int64 *v148; // rax
  unsigned __int64 *v149; // rax
  unsigned __int64 *v150; // rax
  unsigned __int64 v151; // rax
  unsigned __int64 *v152; // rax
  unsigned __int64 *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rdi
  __int64 v159; // rbp
  __int64 v160; // rbp
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdi
  __int64 v166; // rax
  unsigned __int64 v167; // r15
  unsigned __int64 v168; // rbp
  __m128i si128; // xmm1
  __m128 *v170; // rcx
  __m128i v171; // xmm0
  __int64 v172; // rax
  unsigned __int64 *v173; // rax
  unsigned __int64 *v174; // rsi
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // r14
  __int64 v181; // rax
  _QWORD *v182; // rax
  __int64 v183; // rax
  __int64 v184; // r12
  __int64 v185; // [rsp-10h] [rbp-1F8h]
  __int64 v186; // [rsp-8h] [rbp-1F0h]
  unsigned int v187; // [rsp+0h] [rbp-1E8h]
  bool v188; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v189; // [rsp+0h] [rbp-1E8h]
  bool v190; // [rsp+0h] [rbp-1E8h]
  bool v191; // [rsp+0h] [rbp-1E8h]
  char v192; // [rsp+0h] [rbp-1E8h]
  char v194; // [rsp+8h] [rbp-1E0h]
  char v196; // [rsp+12h] [rbp-1D6h]
  char v197; // [rsp+13h] [rbp-1D5h]
  _BYTE *v199; // [rsp+18h] [rbp-1D0h] BYREF
  _BYTE *v200; // [rsp+20h] [rbp-1C8h]
  __int64 v201; // [rsp+28h] [rbp-1C0h]
  int v202; // [rsp+30h] [rbp-1B8h]
  int v203; // [rsp+34h] [rbp-1B4h]
  __int64 v204; // [rsp+38h] [rbp-1B0h]
  int v205; // [rsp+4Ch] [rbp-19Ch] BYREF
  __int64 v206; // [rsp+50h] [rbp-198h] BYREF
  __int64 v207; // [rsp+58h] [rbp-190h] BYREF
  __int64 v208; // [rsp+78h] [rbp-170h]
  __int64 v209[2]; // [rsp+90h] [rbp-158h] BYREF
  _QWORD *v210; // [rsp+A0h] [rbp-148h]
  unsigned __int8 *v211; // [rsp+B0h] [rbp-138h] BYREF
  char v212; // [rsp+108h] [rbp-E0h]
  unsigned int v213; // [rsp+110h] [rbp-D8h]
  char v214; // [rsp+114h] [rbp-D4h]
  __m128i ptr; // [rsp+120h] [rbp-C8h] BYREF
  _BYTE v216[184]; // [rsp+130h] [rbp-B8h] BYREF

  v6 = a2;
  v7 = (__int64)a4;
  if ( (a4[28] & 0x7F) != 0x24
    || (v128 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a4 + 32LL))(a4), (*(_QWORD *)(v128 + 80) & 0x40000LL) == 0)
    && ((*(_QWORD *)(v128 + 80) >> 16) & 8) == 0
    && !(unsigned int)sub_B984E0(v128)
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60 > 1
    || (unsigned int)sub_B97260(a2) - 3 > 1 )
  {
    v187 = 0;
    goto LABEL_3;
  }
  v131 = *a1;
  v209[0] = v7;
  v132 = *(unsigned int *)(v131 + 3104);
  if ( (_DWORD)v132 )
  {
    a2 = v131 + 3096;
    sub_1794A60(&ptr, (_DWORD *)(v131 + 3096), v209, v129, v132, v130);
    if ( v216[0] )
    {
      v183 = *(unsigned int *)(v131 + 3128);
      v184 = v209[0];
      if ( v183 + 1 > (unsigned __int64)*(unsigned int *)(v131 + 3132) )
      {
        a2 = v131 + 3136;
        sub_2237220(v131 + 3120, v131 + 3136, v183 + 1, 8);
        v183 = *(unsigned int *)(v131 + 3128);
      }
      *(_QWORD *)(*(_QWORD *)(v131 + 3120) + 8 * v183) = v184;
      ++*(_DWORD *)(v131 + 3128);
    }
    goto LABEL_251;
  }
  v133 = *(unsigned int *)(v131 + 3128);
  v134 = *(_QWORD **)(v131 + 3120);
  a2 = (__int64)&v134[v133];
  if ( (8 * v133) >> 5 )
  {
    if ( v7 == *v134 )
      goto LABEL_250;
    if ( v7 == v134[1] )
    {
      ++v134;
      goto LABEL_250;
    }
    if ( v7 == v134[2] )
    {
      v134 += 2;
      goto LABEL_250;
    }
    v135 = *(_QWORD **)(v131 + 3120);
    v136 = &v134[4 * ((8 * v133) >> 5)];
    if ( v7 == v134[3] )
    {
      v134 += 3;
      goto LABEL_250;
    }
    while ( 1 )
    {
      v134 += 4;
      if ( v136 == v134 )
        break;
      if ( v7 == *v134 )
        goto LABEL_250;
      if ( v7 == v134[1] )
      {
        v134 = v135 + 5;
        goto LABEL_250;
      }
      if ( v7 == v134[2] )
      {
        v134 = v135 + 6;
        goto LABEL_250;
      }
      if ( v7 == v134[3] )
      {
        v134 = v135 + 7;
        goto LABEL_250;
      }
      v135 = v134;
    }
  }
  v137 = (a2 - (__int64)v134) >> 3;
  if ( v137 == 2 )
    goto LABEL_262;
  if ( v137 == 3 )
  {
    if ( v7 == *v134 )
      goto LABEL_250;
    ++v134;
LABEL_262:
    if ( v7 == *v134 )
      goto LABEL_250;
    ++v134;
    goto LABEL_264;
  }
  if ( v137 != 1 )
  {
LABEL_172:
    if ( v133 + 1 > (unsigned __int64)*(unsigned int *)(v131 + 3132) )
    {
      sub_2237220(v131 + 3120, v131 + 3136, v133 + 1, 8);
      a2 = *(_QWORD *)(v131 + 3120) + 8LL * *(unsigned int *)(v131 + 3128);
    }
    *(_QWORD *)a2 = v7;
    v138 = (unsigned int)(*(_DWORD *)(v131 + 3128) + 1);
    *(_DWORD *)(v131 + 3128) = v138;
    if ( (unsigned int)v138 > 4 )
    {
      v139 = *(__int64 **)(v131 + 3120);
      v140 = (_DWORD *)(v131 + 3096);
      v141 = &v139[v138];
      do
      {
        v142 = v139;
        a2 = (__int64)v140;
        ++v139;
        sub_1794A60(&ptr, v140, v142, v133, v132, v130);
      }
      while ( v141 != v139 );
    }
    goto LABEL_251;
  }
LABEL_264:
  if ( v7 != *v134 )
    goto LABEL_172;
LABEL_250:
  if ( (_QWORD *)a2 == v134 )
    goto LABEL_172;
LABEL_251:
  v187 = 1;
LABEL_3:
  v9 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
  if ( (v9 & 4) != 0 )
  {
    v10 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    v11 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
    if ( (v11 & 4) == 0 )
    {
LABEL_5:
      v16 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 )
        goto LABEL_6;
LABEL_81:
      v17 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
    if ( (v11 & 4) == 0 )
      goto LABEL_5;
  }
  v16 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v16 )
    goto LABEL_81;
LABEL_6:
  v17 = v16 - 64;
  if ( v16 != 64 )
    v17 = v16;
LABEL_8:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
  {
LABEL_9:
    v197 = 1;
    v196 = 0;
    goto LABEL_10;
  }
  v63 = sub_B8C3D0(v7, a2, v12, v13, v14, v15);
  v64 = *v63;
  v65 = *v63 + 8LL * *((unsigned int *)v63 + 2);
  if ( *v63 < v65 )
  {
    v66 = (__int64 *)*v63;
    while ( 1 )
    {
      v64 = *v66;
      if ( *(_WORD *)(*v66 + 36) == 165 )
        break;
      if ( (__int64 *)v65 == ++v66 )
        goto LABEL_59;
    }
    if ( v66 != (__int64 *)v65 )
      goto LABEL_227;
LABEL_59:
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      goto LABEL_9;
    v194 = 0;
    goto LABEL_61;
  }
  if ( v64 == v65 )
    goto LABEL_59;
  if ( *(_WORD *)(*(_QWORD *)v65 + 36LL) != 165 )
  {
    v148 = (unsigned __int64 *)(v65 + 8);
    do
    {
      v13 = (unsigned __int64)v148;
      if ( (unsigned __int64 *)v64 == v148 )
        goto LABEL_59;
      v13 = *v148++;
    }
    while ( *(_WORD *)(v13 + 36) != 165 );
  }
LABEL_227:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_276;
  v194 = 1;
LABEL_61:
  v67 = sub_B8C3D0(v7, v65, v64, v13, v14, v15);
  v68 = *v67;
  v69 = *v67 + 8LL * *((unsigned int *)v67 + 2);
  if ( *v67 < v69 )
  {
    v70 = (unsigned __int64 *)*v67;
    while ( 1 )
    {
      v68 = *v70;
      if ( *(_WORD *)(*v70 + 36) == 160 )
        break;
      if ( (unsigned __int64 *)v69 == ++v70 )
        goto LABEL_65;
    }
    if ( v70 != (unsigned __int64 *)v69 )
      goto LABEL_197;
LABEL_65:
    v196 = 0;
    goto LABEL_66;
  }
  if ( v68 == v69 )
    goto LABEL_65;
  if ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 160 )
  {
    v149 = (unsigned __int64 *)(v69 + 8);
    do
    {
      v13 = (unsigned __int64)v149;
      if ( (unsigned __int64 *)v68 == v149 )
        goto LABEL_65;
      v13 = *v149++;
    }
    while ( *(_WORD *)(v13 + 36) != 160 );
  }
LABEL_197:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_275;
  v150 = sub_B8C3D0(v7, v69, v68, v13, v14, v15);
  v68 = *v150;
  v151 = *v150 + 8LL * *((unsigned int *)v150 + 2);
  if ( v68 < v151 )
  {
    v174 = (unsigned __int64 *)v68;
    while ( 1 )
    {
      v13 = *v174;
      if ( *(_WORD *)(*v174 + 36) == 160 )
        break;
      if ( (unsigned __int64 *)v151 == ++v174 )
        goto LABEL_275;
    }
    if ( v174 == (unsigned __int64 *)v151 )
LABEL_275:
      BUG();
  }
  else
  {
    if ( v68 == v151 )
      goto LABEL_275;
    if ( *(_WORD *)(*(_QWORD *)v151 + 36LL) != 160 )
    {
      v152 = (unsigned __int64 *)(v151 + 8);
      while ( (unsigned __int64 *)v68 != v152 )
      {
        v13 = *v152++;
        if ( *(_WORD *)(v13 + 36) == 160 )
          goto LABEL_204;
      }
      goto LABEL_275;
    }
  }
LABEL_204:
  v69 = *(_QWORD *)v68;
  if ( *(_WORD *)(*(_QWORD *)v68 + 36LL) != 160 )
  {
    v153 = (unsigned __int64 *)(v68 + 8);
    do
      v69 = *v153++;
    while ( *(_WORD *)(v69 + 36) != 160 );
  }
  if ( (*(_BYTE *)(v69 + 38) & 4) == 0 )
    return 0;
  v196 = 1;
LABEL_66:
  if ( !v194 )
  {
    v197 = 1;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_276;
  v71 = (unsigned __int64 **)sub_B8C3D0(v7, v69, v68, v13, v14, v15);
  v72 = *v71;
  v73 = (unsigned __int64)&(*v71)[*((unsigned int *)v71 + 2)];
  if ( (unsigned __int64)v72 < v73 )
  {
    v74 = v72;
    while ( 1 )
    {
      v13 = *v74;
      if ( *(_WORD *)(*v74 + 36) == 165 )
        break;
      if ( (unsigned __int64 *)v73 == ++v74 )
        goto LABEL_276;
    }
    if ( v74 != (unsigned __int64 *)v73 )
      goto LABEL_73;
LABEL_276:
    BUG();
  }
  if ( v72 == (unsigned __int64 *)v73 )
    goto LABEL_276;
  if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) != 165 )
  {
    v173 = (unsigned __int64 *)(v73 + 8);
    while ( v72 != v173 )
    {
      v13 = *v173++;
      if ( *(_WORD *)(v13 + 36) == 165 )
        goto LABEL_73;
    }
    goto LABEL_276;
  }
LABEL_73:
  v75 = *v72;
  if ( *(_WORD *)(*v72 + 36) != 165 )
  {
    v76 = v72 + 1;
    do
      v75 = *v76++;
    while ( *(_WORD *)(v75 + 36) != 165 );
  }
  if ( (*(_BYTE *)(v75 + 38) & 4) == 0 )
    return 0;
  v197 = 0;
LABEL_10:
  if ( v17 != v10 )
    return 0;
  v207 = 0;
  v18 = *a1;
  v19 = *(_QWORD *)(*a1 + 544);
  *(_QWORD *)(v18 + 544) = v7 + 72;
  v201 = v19;
  v20 = *(_QWORD *)(v18 + 512);
  *(_QWORD *)(v18 + 512) = 0;
  v204 = v20;
  v21 = *(_QWORD *)(v18 + 9944);
  *(_QWORD *)(v18 + 9944) = 0;
  v208 = v21;
  v203 = *(_DWORD *)(v18 + 80);
  v202 = *(_DWORD *)(v18 + 2632);
  *(_DWORD *)(v18 + 80) = *(_DWORD *)(v18 + 40);
  *(_DWORD *)(v18 + 2632) = *(_DWORD *)(v18 + 3688);
  v22 = *(_QWORD *)(v6 + 104);
  ptr.m128i_i64[0] = (__int64)v216;
  ptr.m128i_i64[1] = 0x1000000000LL;
  v23 = *(_QWORD *)(v22 + 96);
  if ( (v23 & 1) != 0 )
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v13 = v23 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v23 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v23 & 2) == 0 )
      goto LABEL_18;
    v119 = *(_QWORD *)(v13 + 18360);
    v120 = v22 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v119 )
    {
      v121 = *(_QWORD *)(v13 + 2352);
      *(_QWORD *)(v13 + 2432) += 24LL;
      v122 = (v121 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v13 + 2360) >= v122 + 24 && v121 )
      {
        *(_QWORD *)(v13 + 2352) = v122 + 24;
        v123 = (v121 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v123 = sub_986170(v13 + 2352, 24, 24, 3, v14, v15);
        v122 = v123 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v123 = v119;
      v120 = v122 | 4;
      *(_DWORD *)(v123 + 8) = 0;
      *(_QWORD *)(v123 + 16) = v22;
    }
    v24 = v120 & 0xFFFFFFFFFFFFFFFELL;
    v23 = v24 | 1;
    *(_QWORD *)(v22 + 96) = v24 | 1;
  }
  if ( v24 )
  {
    if ( (v24 & 4) != 0 )
    {
      v25 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v25 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
        if ( v25[2] != v27 )
        {
          v25[2] = v27;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, v22);
        }
      }
    }
  }
LABEL_18:
  v28 = *(_QWORD *)(v6 + 128);
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
    v29 = sub_B96980(v28);
  else
    v29 = *(_QWORD *)(v28 + 24);
  v30 = *(_QWORD *)(v6 + 104);
  v31 = *(_QWORD *)(v30 + 96);
  v32 = v31;
  v33 = v31 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v31 & 1) == 0 )
  {
    v13 = v31 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v31 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v31 & 2) == 0 )
      {
        v34 = *(_QWORD *)(v6 + 128);
        v35 = v29 + 24LL * *(unsigned int *)(v34 + 16);
        goto LABEL_24;
      }
      v107 = *(_QWORD *)(v13 + 18360);
      v108 = v30 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v107 )
      {
        v109 = *(_QWORD *)(v13 + 2352);
        *(_QWORD *)(v13 + 2432) += 24LL;
        v110 = (v109 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v13 + 2360) >= v110 + 24 && v109 )
        {
          *(_QWORD *)(v13 + 2352) = v110 + 24;
          v111 = (v109 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v199 = (_BYTE *)v107;
          v111 = sub_986170(v13 + 2352, 24, 24, 3, v107, v15);
          v107 = (__int64)v199;
          v110 = v111 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v111 = v107;
        *(_DWORD *)(v111 + 8) = 0;
        *(_QWORD *)(v111 + 16) = v30;
        v108 = v110 | 4;
      }
      v33 = v108 & 0xFFFFFFFFFFFFFFFELL;
      v32 = v33 | 1;
      *(_QWORD *)(v30 + 96) = v33 | 1;
    }
  }
  if ( v33 )
  {
    if ( (v33 & 4) != 0 )
    {
      v112 = (_DWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v112 )
      {
        v113 = *(_QWORD *)v112;
        v114 = *(_DWORD *)(*(_QWORD *)v112 + 12LL);
        if ( v112[2] != v114 )
        {
          v112[2] = v114;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v113 + 152LL))(v113, v30);
        }
      }
    }
  }
  v34 = *(_QWORD *)(v6 + 128);
  v30 = *(_QWORD *)(v6 + 104);
  v35 = v29 + 24LL * *(unsigned int *)(v34 + 16);
  v115 = *(_QWORD *)(v30 + 96);
  LOBYTE(v31) = v115;
  v32 = v115 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v115 & 1) != 0 || (v13 = v115 & 0xFFFFFFFFFFFFFFFCLL, (v115 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_124:
    if ( v32 )
    {
      v32 &= 4u;
      if ( (_DWORD)v32 )
      {
        v116 = (_DWORD *)(v115 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v116 )
        {
          v117 = *(_QWORD *)v116;
          v118 = *(_DWORD *)(*(_QWORD *)v116 + 12LL);
          if ( v116[2] != v118 )
          {
            v116[2] = v118;
            v32 = v30;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v117 + 152LL))(v117, v30);
          }
        }
      }
    }
    v34 = *(_QWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v34 + 24) & 1) == 0 )
      goto LABEL_26;
    goto LABEL_130;
  }
LABEL_24:
  if ( (v31 & 2) != 0 )
  {
    v143 = *(_QWORD *)(v13 + 18360);
    v144 = v30 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v143 )
    {
      v145 = *(_QWORD *)(v13 + 2352);
      *(_QWORD *)(v13 + 2432) += 24LL;
      v146 = (v145 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v13 + 2360) >= v146 + 24 && v145 )
      {
        *(_QWORD *)(v13 + 2352) = v146 + 24;
        v147 = (v145 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v199 = (_BYTE *)v143;
        v147 = sub_986170(v13 + 2352, 24, 24, 3, v143, v15);
        v143 = (__int64)v199;
        v146 = v147 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v147 = v143;
      *(_DWORD *)(v147 + 8) = 0;
      v144 = v146 | 4;
      *(_QWORD *)(v147 + 16) = v30;
    }
    v32 = v144 & 0xFFFFFFFFFFFFFFFELL;
    v115 = v32 | 1;
    *(_QWORD *)(v30 + 96) = v32 | 1;
    goto LABEL_124;
  }
  if ( (*(_BYTE *)(v34 + 24) & 1) == 0 )
  {
LABEL_26:
    v36 = *(_QWORD *)(v34 + 24);
    goto LABEL_27;
  }
LABEL_130:
  v36 = sub_B96980(v34);
LABEL_27:
  for ( i = v216; v35 != v36; ++ptr.m128i_i32[2] )
  {
    while ( (*(_BYTE *)(v36 + 12) & 1) != 0 )
    {
      v36 += 24;
      if ( v35 == v36 )
        goto LABEL_34;
    }
    v38 = ptr.m128i_u32[2];
    v13 = ptr.m128i_u32[3];
    v39 = ptr.m128i_u32[2] + 1LL;
    if ( v39 > ptr.m128i_u32[3] )
    {
      v32 = (__int64)i;
      v199 = i;
      sub_2237220(&ptr, i, v39, 8);
      v38 = ptr.m128i_u32[2];
      i = v199;
    }
    *(_QWORD *)(ptr.m128i_i64[0] + 8 * v38) = v36;
    v36 += 24;
  }
LABEL_34:
  v40 = *(_QWORD *)(v6 + 104);
  v41 = *(_QWORD *)(v40 + 96);
  v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v41 & 1) == 0 )
  {
    v13 = v41 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v41 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v41 & 2) == 0 )
        goto LABEL_40;
      v124 = *(_QWORD *)(v13 + 18360);
      v125 = v40 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v124 )
      {
        v32 = *(_QWORD *)(v13 + 2352);
        *(_QWORD *)(v13 + 2432) += 24LL;
        v126 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v13 + 2360) >= v126 + 24 && v32 )
        {
          *(_QWORD *)(v13 + 2352) = v126 + 24;
          v127 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v32 = 24;
          v127 = sub_986170(v13 + 2352, 24, 24, 3, (__int64)i, v15);
          v126 = v127 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v127 = v124;
        v125 = v126 | 4;
        *(_DWORD *)(v127 + 8) = 0;
        *(_QWORD *)(v127 + 16) = v40;
      }
      v42 = v125 & 0xFFFFFFFFFFFFFFFELL;
      v41 = v42 | 1;
      *(_QWORD *)(v40 + 96) = v42 | 1;
    }
  }
  if ( v42 )
  {
    v42 &= 4u;
    if ( (_DWORD)v42 )
    {
      v43 = (_DWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v43 )
      {
        v44 = *(_QWORD *)v43;
        v42 = *(unsigned int *)(*(_QWORD *)v43 + 12LL);
        if ( v43[2] != (_DWORD)v42 )
        {
          v43[2] = v42;
          v32 = v40;
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64, _BYTE *))(*(_QWORD *)v44 + 152LL))(
            v44,
            v40,
            v42,
            v13,
            i);
        }
      }
    }
  }
LABEL_40:
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 128) + 1LL) & 8) != 0 )
  {
    v45 = ptr.m128i_u32[2];
    v46 = ptr.m128i_i64[0];
  }
  else
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v42, v13, (__int64)i, v15);
    v158 = *(_QWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v158 + 32) & 1) != 0 )
      v159 = sub_B969C0(v158);
    else
      v159 = *(_QWORD *)(v158 + 32);
    sub_7052B0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v154, v155, v156, v157);
    v160 = v159 + 24LL * *(unsigned int *)(*(_QWORD *)(v6 + 128) + 20LL);
    sub_7052B0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v161, v162, v163, v164);
    v165 = *(_QWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v165 + 32) & 1) != 0 )
      v166 = sub_B969C0(v165);
    else
      v166 = *(_QWORD *)(v165 + 32);
    v13 = ptr.m128i_u32[2];
    i = (_BYTE *)(v160 - v166);
    v167 = 0xAAAAAAAAAAAAAAABLL * ((v160 - v166) >> 3);
    v42 = ptr.m128i_u32[2] - 0x5555555555555555LL * ((v160 - v166) >> 3);
    v168 = v167;
    if ( v42 > ptr.m128i_u32[3] )
    {
      v200 = i;
      v199 = (_BYTE *)v166;
      sub_2237220(&ptr, v216, v42, 8);
      i = v200;
      v166 = (__int64)v199;
      v13 = ptr.m128i_u32[2];
      v42 = v167 + ptr.m128i_u32[2];
    }
    v46 = ptr.m128i_i64[0];
    v32 = ptr.m128i_i64[0] + 8 * v13;
    if ( (__int64)i > 0 )
    {
      if ( (__int64)i <= 72 )
        goto LABEL_279;
      v199 = (_BYTE *)(v166 + 24);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8FF0);
      v170 = (__m128 *)(ptr.m128i_i64[0] + 8 * v13);
      v171 = (__m128i)_mm_loadh_ps((const double *)&v199);
      do
      {
        *v170++ = (__m128)v171;
        v171 = _mm_add_epi64(v171, si128);
      }
      while ( (__m128 *)(v32 + 16 * (v167 >> 1)) != v170 );
      v13 = v167 & 0xFFFFFFFFFFFFFFFELL;
      v168 = v167 - (v167 & 0xFFFFFFFFFFFFFFFELL);
      v32 += 8 * (v167 & 0xFFFFFFFFFFFFFFFELL);
      v166 += 24 * (v167 & 0xFFFFFFFFFFFFFFFELL);
      if ( v167 != (v167 & 0xFFFFFFFFFFFFFFFELL) )
      {
LABEL_279:
        *(_QWORD *)v32 = v166;
        v13 = v166 + 24;
        if ( v168 != 1 )
        {
          *(_QWORD *)(v32 + 8) = v13;
          v172 = v166 + 48;
          if ( v168 != 2 )
            *(_QWORD *)(v32 + 16) = v172;
        }
      }
      v46 = ptr.m128i_i64[0];
    }
    v45 = (unsigned int)v42;
    ptr.m128i_i32[2] = v42;
  }
  v47 = v46 + 8 * v45;
  if ( v47 != v46 )
  {
    v199 = (_BYTE *)v18;
    v48 = v46;
    v200 = (_BYTE *)v7;
    while ( 1 )
    {
      v49 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v48 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v49 + 8) & 0xF) != 0 )
        v49 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v48 + 16LL), v32, v42, v13, (__int64)i);
      v50 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v50 + 16) == 48 )
      {
        v51 = (unsigned int)sub_F60F10(*v50, v32, v42, v13, (__int64)i, v15);
        v52 = sub_1A68D90(*a1, v51, a3, a5, 0, 0, 0, 0);
        v32 = v185;
        v53 = v52 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v53 )
        {
          v32 = v53;
          v54 = sub_178EA20((__int64)a1, v53, (__int64 *)v187, v13, (__int64)i, v15);
          v205 = v54;
          if ( BYTE4(v207) )
          {
            v13 = (unsigned int)v207;
            if ( (_DWORD)v207 == 3 )
            {
              LODWORD(v207) = v54;
            }
            else
            {
              LOBYTE(v42) = v54 != (_DWORD)v207 && v54 != 3;
              if ( (_BYTE)v42 )
              {
                v18 = (__int64)v199;
                v55 = v54 != (_DWORD)v207 && v54 != 3;
                v7 = (__int64)v200;
                if ( a6 )
                  goto LABEL_108;
                goto LABEL_54;
              }
            }
          }
          else
          {
            LODWORD(v207) = v54;
            BYTE4(v207) = 1;
          }
        }
      }
      v48 += 8;
      if ( v47 == v48 )
      {
        v18 = (__int64)v199;
        v7 = (__int64)v200;
        break;
      }
    }
  }
  v78 = sub_B7E900(v6, v32, v42, v13, (__int64)i, v15);
  if ( v78 )
  {
LABEL_84:
    if ( *(char *)(v78 + 28) >= 0 )
    {
      v79 = sub_168B6C0((__int64)a1);
      v80 = *(_QWORD *)(v78 + 48);
      v81 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v79, v80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v81 + 16) == 48 )
      {
        v86 = (unsigned int)sub_F60F10(*v81, v80, v82, v83, v84, v85);
        v87 = 0;
        if ( a5 )
          v87 = ((*(_BYTE *)(v78 + 68) >> 1) ^ 1) & 1;
        v88 = sub_1A68D90(*a1, v86, a3, v87, 0, 0, 0, 0) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v88 )
        {
          v91 = sub_178EA20((__int64)a1, v88, (__int64 *)v187, v186, v89, v90);
          v205 = v91;
          if ( !BYTE4(v207) )
          {
            LODWORD(v207) = v91;
            BYTE4(v207) = 1;
            goto LABEL_92;
          }
          if ( (_DWORD)v207 == 3 )
          {
            LODWORD(v207) = v91;
            goto LABEL_92;
          }
          if ( v91 == 3 || v91 == (_DWORD)v207 )
            goto LABEL_92;
          v55 = v91 != 3 && v91 != (_DWORD)v207;
          if ( a6 )
          {
LABEL_108:
            v190 = v55;
            sub_168B9F0((__int64)v209, a1, *(_DWORD *)(v6 + 24), 0x178Cu, 0);
            v105 = v190;
            if ( v212 )
            {
              sub_AE9DF0(&v211, a3, 3u);
              v105 = v190;
            }
            else if ( v214 )
            {
              v175 = sub_168B9E0(v209);
              v179 = v190;
              v180 = v175;
              v181 = (__int64)v210;
              if ( v210 )
              {
                v181 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, bool))(*v210 + 32LL))(
                         v210,
                         a1,
                         *v210,
                         v177,
                         v178,
                         v190);
                v179 = v190;
              }
              v192 = v179;
              v206 = v181;
              v182 = sub_1587BC0(v180, &v206, v176, v177, v178, v179);
              sub_AE9DF0((unsigned __int8 **)(*v182 + 32LL * v213 + 8), a3, 3u);
              v105 = v192;
            }
            v191 = v105;
            v106 = sub_17961C0((__int64)v209, (int *)&v207);
            sub_17961C0(v106, &v205);
            sub_15F7200(v209);
            v55 = v191;
          }
LABEL_54:
          v188 = v55;
          v56 = sub_168B6C0((__int64)a1);
          v57 = sub_B318F0(v56, 0);
          sub_B8CC60(v7, v57, v58, v59, v60, v61);
          v62 = v188;
          goto LABEL_101;
        }
      }
    }
LABEL_92:
    while ( 1 )
    {
      v92 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v78 = v92;
      if ( !v92 )
        break;
      if ( (*(_BYTE *)(v92 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_84;
    }
  }
  if ( !BYTE4(v207) )
  {
LABEL_148:
    if ( !v196 )
      goto LABEL_97;
LABEL_98:
    if ( v197 )
    {
      v99 = sub_168B6C0((__int64)a1);
      v100 = sub_B32290(v99, 0, 0);
      sub_B8CC60(v7, v100, v101, v102, v103, v104);
    }
    goto LABEL_100;
  }
  if ( (_DWORD)v207 )
  {
    if ( (_DWORD)v207 == 2 )
      goto LABEL_98;
    goto LABEL_148;
  }
  if ( !v196 )
  {
    v197 = 0;
LABEL_97:
    v93 = sub_168B6C0((__int64)a1);
    v94 = sub_B32320(v93, 0, 0);
    sub_B8CC60(v7, v94, v95, v96, v97, v98);
    goto LABEL_98;
  }
LABEL_100:
  v62 = 0;
LABEL_101:
  if ( (_BYTE *)ptr.m128i_i64[0] != v216 )
  {
    v189 = v62;
    free((void *)ptr.m128i_i64[0]);
    v62 = v189;
  }
  if ( v201 )
  {
    *(_QWORD *)(v18 + 544) = v201;
    *(_QWORD *)(v18 + 512) = v204;
    *(_QWORD *)(v18 + 9944) = v208;
    *(_DWORD *)(v18 + 80) = v203;
    *(_DWORD *)(v18 + 2632) = v202;
  }
  return v62;
}
