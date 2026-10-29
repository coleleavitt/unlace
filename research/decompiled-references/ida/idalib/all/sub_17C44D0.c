void __fastcall sub_17C44D0(__int64 *a1, __int64 *p_ptr, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const __m128i ***v9; // rax
  const __m128i **v10; // rdx
  unsigned __int64 v11; // rax
  const __m128i **v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // bp
  __int64 v25; // rbx
  unsigned __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 **v31; // rdx
  char v32; // r13
  __int64 v33; // r12
  __int64 v34; // rax
  char v35; // al
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r12
  _QWORD *v40; // rax
  int v41; // r15d
  __int64 v42; // r14
  unsigned int v43; // r13d
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 **v47; // rax
  __int64 *v48; // rax
  char v49; // al
  int v50; // eax
  unsigned int v51; // edx
  __int64 *v52; // rdi
  int v53; // eax
  unsigned int v54; // r12d
  const __m128i *v55; // rdi
  __int64 v56; // rsi
  __m128i *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __m128i *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  _QWORD *v77; // rax
  unsigned __int64 v78; // r15
  __int64 *v79; // r12
  __int64 v80; // rbx
  unsigned int v81; // ebp
  bool v82; // zf
  __int64 *v83; // rax
  __int64 v84; // r14
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  unsigned __int64 v90; // r13
  __int64 *v91; // r15
  __int64 v92; // r14
  bool v93; // zf
  __int64 *v94; // rax
  __int64 v95; // r13
  __m128i *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 **v101; // rcx
  unsigned __int64 *v102; // rax
  _WORD *v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  _QWORD *v108; // rax
  _WORD *v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _WORD *v112; // rdx
  unsigned __int64 v113; // rax
  __int64 *v114; // rax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 *v118; // rcx
  __int64 **v119; // rax
  unsigned __int64 *v120; // rax
  unsigned __int64 v121; // rax
  _QWORD *v122; // rax
  unsigned __int64 v123; // r13
  __int64 *v124; // rbp
  bool v125; // zf
  __int64 *v126; // rax
  __int64 *v127; // rax
  _WORD **v128; // rax
  _QWORD *v129; // rax
  unsigned __int64 v130; // rax
  _WORD **v131; // rax
  __int64 v132; // rbx
  __int64 *v133; // rax
  unsigned __int64 *v134; // rax
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rax
  _WORD **v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // r8
  __int64 v142; // r9
  _QWORD *v143; // rax
  _QWORD *v144; // rdx
  unsigned __int64 v145; // rax
  _QWORD *v146; // rcx
  __int64 v147; // rcx
  __int64 *v148; // rax
  _WORD **v149; // rax
  unsigned __int64 *v150; // rax
  __int64 *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r14
  __int64 v154; // rcx
  __int64 v155; // rdx
  int v156; // eax
  unsigned int v157; // eax
  __int64 *v158; // rax
  __int64 v159; // rbp
  __int64 v160; // rdx
  __int64 v161; // rcx
  int v162; // eax
  unsigned int v163; // eax
  __int64 *v164; // rax
  __int64 *v165; // rax
  __int64 v166; // rsi
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 **v171; // rbx
  __int64 *v172; // rax
  __int64 v173; // rcx
  __int64 *v174; // rdx
  __int64 *v175; // rdi
  __int64 v176; // rax
  __int64 v177; // rbx
  __int64 *v178; // rax
  unsigned int v179; // r14d
  char v180; // r15
  int v181; // eax
  __int64 v182; // rbx
  unsigned __int64 v183; // rax
  __int64 v184; // rdi
  void (*v185)(); // rax
  __int64 v186; // rbx
  __int64 *v187; // rax
  __int64 v188; // rdi
  unsigned __int64 v189; // rax
  __int64 *v190; // r15
  __int64 v191; // rsi
  unsigned int v192; // edx
  __int64 v193; // rax
  unsigned __int64 *v194; // rax
  __int64 *v195; // rdi
  int v196; // eax
  __int64 v197; // rbp
  __int64 *v198; // rax
  unsigned int v199; // eax
  __int64 v200; // r12
  __int64 v201; // r15
  __int64 v202; // rbx
  __int64 v203; // rax
  __int64 v204; // rbx
  __int64 *v205; // rbp
  size_t v206; // r13
  __int64 v207; // rbx
  __int64 v208; // r14
  unsigned __int64 *v209; // rax
  unsigned __int64 *v210; // rax
  __int64 *v211; // rbp
  size_t v212; // rbx
  unsigned __int64 *v214; // rax
  int v215; // eax
  __int64 v216; // rax
  __int64 *v217; // rax
  __int64 *v218; // rax
  __int64 *i; // rax
  unsigned int v220; // edx
  __m128i *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  int v226; // eax
  char v227; // al
  __int64 v228; // rax
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rax
  _QWORD *v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // r9
  __int64 v239; // rax
  _QWORD *v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // r15
  __int64 v246; // rax
  _QWORD *v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  __int64 v252; // r13
  __int64 v253; // rax
  _QWORD *v254; // rax
  unsigned int v255; // eax
  char *v256; // r14
  size_t v257; // rax
  __int64 v258; // rax
  __int64 v259; // rax
  unsigned __int64 v260; // [rsp-10h] [rbp-168h]
  __int64 v261; // [rsp+0h] [rbp-158h]
  const __m128i *v263; // [rsp+8h] [rbp-150h]
  __int64 *v264; // [rsp+10h] [rbp-148h]
  unsigned int v265; // [rsp+10h] [rbp-148h]
  __int64 v266; // [rsp+10h] [rbp-148h]
  __int64 v267; // [rsp+10h] [rbp-148h]
  __int64 v268; // [rsp+10h] [rbp-148h]
  __int64 v270; // [rsp+28h] [rbp-130h]
  __int64 *v271; // [rsp+50h] [rbp-108h]
  char v272; // [rsp+50h] [rbp-108h]
  __int64 v273; // [rsp+50h] [rbp-108h]
  unsigned int v274; // [rsp+58h] [rbp-100h]
  __int64 *v275; // [rsp+58h] [rbp-100h]
  _WORD *v276; // [rsp+58h] [rbp-100h]
  __int64 v277; // [rsp+58h] [rbp-100h]
  __int64 v278; // [rsp+58h] [rbp-100h]
  unsigned int v280; // [rsp+68h] [rbp-F0h]
  unsigned int v281; // [rsp+84h] [rbp-D4h] BYREF
  __int64 v282; // [rsp+88h] [rbp-D0h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v284; // [rsp+98h] [rbp-C0h] BYREF
  unsigned __int8 *v285[11]; // [rsp+B0h] [rbp-A8h] BYREF
  char v286; // [rsp+108h] [rbp-50h]
  unsigned int v287; // [rsp+110h] [rbp-48h]
  char v288; // [rsp+114h] [rbp-44h]

  v261 = (__int64)p_ptr;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3);
  if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
    goto LABEL_8;
  v9 = (const __m128i ***)sub_B8C3D0(v4, (__int64)p_ptr, v5, v6, v7, v8);
  v10 = *v9;
  v11 = (unsigned __int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( (unsigned __int64)v10 >= v11 )
  {
    if ( v10 == (const __m128i **)v11 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 390 )
    {
      v12 = (const __m128i **)(v11 + 8);
      while ( v10 != v12 )
      {
        v13 = (__int64)*v12++;
        if ( *(_WORD *)(v13 + 36) == 390 )
          goto LABEL_105;
      }
      goto LABEL_8;
    }
LABEL_105:
    while ( (*v10)[2].m128i_i16[2] != 390 )
      ++v10;
    v96 = sub_B2C8E0(*v10, a1[31]);
    v96[2].m128i_i8[6] |= 1u;
    p_ptr = (__int64 *)v96;
    sub_B8CC60(v261, (__int64)v96, v97, v98, v99, v100);
    goto LABEL_8;
  }
  v101 = (__int64 **)v10;
  p_ptr = (__int64 *)*v10;
  if ( (*v10)[2].m128i_i16[2] == 390 )
  {
LABEL_110:
    if ( (__int64 **)v11 == v101 )
      goto LABEL_8;
    goto LABEL_105;
  }
  while ( (__int64 **)v11 != ++v101 )
  {
    p_ptr = *v101;
    if ( *((_WORD *)*v101 + 18) == 390 )
      goto LABEL_110;
  }
LABEL_8:
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3);
  if ( (*(_BYTE *)(v14 + 29) & 1) == 0 )
    goto LABEL_15;
  v19 = sub_B8C3D0(v14, (__int64)p_ptr, v15, v16, v17, v18);
  v15 = *v19;
  v20 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( v15 < v20 )
  {
    v16 = v15;
    p_ptr = *(__int64 **)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 349 )
    {
      while ( 1 )
      {
        v16 += 8LL;
        if ( v20 == v16 )
          break;
        p_ptr = *(__int64 **)v16;
        if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 349 )
          goto LABEL_115;
      }
LABEL_15:
      v23 = a3;
      if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
        goto LABEL_16;
      goto LABEL_74;
    }
LABEL_115:
    if ( v20 == v16 )
      goto LABEL_15;
  }
  else
  {
    if ( v15 == v20 )
      goto LABEL_15;
    if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 349 )
    {
      v21 = (__int64 *)(v20 + 8);
      do
      {
        v16 = (unsigned __int64)v21;
        if ( (__int64 *)v15 == v21 )
          goto LABEL_15;
        v22 = *v21++;
      }
      while ( *(_WORD *)(v22 + 36) != 349 );
    }
  }
  while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 349 )
    v15 += 8LL;
  v62 = sub_B2AF90(*(const __m128i **)v15, a1[31]);
  v62[2].m128i_i8[6] |= 1u;
  p_ptr = (__int64 *)v62;
  sub_B8CC60(v261, (__int64)v62, v63, v64, v65, v66);
  v23 = a3;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
LABEL_16:
    v24 = 0;
    v25 = 0;
    if ( (*(_BYTE *)(v261 + 29) & 1) == 0 )
      return;
    goto LABEL_17;
  }
LABEL_74:
  v67 = sub_B8C3D0(v23, (__int64)p_ptr, v15, v16, v17, v18);
  v16 = *v67;
  v68 = *v67 + 8LL * *((unsigned int *)v67 + 2);
  if ( v16 >= v68 )
  {
    if ( v16 != v68 )
    {
      v15 = *(_QWORD *)v68;
      if ( *(_WORD *)(*(_QWORD *)v68 + 36LL) == 182 )
        goto LABEL_150;
      v150 = (unsigned __int64 *)(v68 + 8);
      while ( 1 )
      {
        v15 = (unsigned __int64)v150;
        if ( (unsigned __int64 *)v16 == v150 )
          break;
        v15 = *v150++;
        if ( *(_WORD *)(v15 + 36) == 182 )
          goto LABEL_150;
      }
    }
LABEL_78:
    v35 = *(_BYTE *)(v261 + 29);
    if ( (v35 & 1) == 0 )
      goto LABEL_79;
    v24 = 0;
    v25 = 0;
    goto LABEL_17;
  }
  v15 = v16;
  while ( 1 )
  {
    p_ptr = *(__int64 **)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 182 )
      break;
    v15 += 8LL;
    if ( v68 == v15 )
      goto LABEL_78;
  }
  if ( v68 == v15 )
    goto LABEL_78;
LABEL_150:
  v25 = *(_QWORD *)v16;
  if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 182 )
  {
    v126 = (__int64 *)(v16 + 8);
    do
      v25 = *v126++;
    while ( *(_WORD *)(v25 + 36) != 182 );
  }
  v24 = 1;
  v32 = 0;
  v33 = 0;
  if ( (*(_BYTE *)(v261 + 29) & 1) == 0 )
    goto LABEL_23;
LABEL_17:
  v26 = sub_B8C3D0(v261, (__int64)p_ptr, v15, v16, v17, v18);
  v29 = *v26;
  v30 = *v26 + 8LL * *((unsigned int *)v26 + 2);
  if ( v29 < v30 )
  {
    v31 = (__int64 **)v29;
    while ( 1 )
    {
      p_ptr = *v31;
      if ( *((_WORD *)*v31 + 18) == 182 )
        break;
      if ( (__int64 **)v30 == ++v31 )
        goto LABEL_21;
    }
    if ( (__int64 **)v30 != v31 )
      goto LABEL_156;
LABEL_21:
    v32 = 0;
    v33 = 0;
    goto LABEL_22;
  }
  if ( v29 == v30 )
    goto LABEL_21;
  if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 182 )
  {
    v151 = (__int64 *)(v30 + 8);
    while ( (__int64 *)v29 != v151 )
    {
      v152 = *v151++;
      if ( *(_WORD *)(v152 + 36) == 182 )
        goto LABEL_156;
    }
    goto LABEL_21;
  }
LABEL_156:
  v33 = *(_QWORD *)v29;
  if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 182 )
  {
    v127 = (__int64 *)(v29 + 8);
    do
      v33 = *v127++;
    while ( *(_WORD *)(v33 + 36) != 182 );
  }
  v32 = 1;
LABEL_22:
  if ( v32 == v24 )
    goto LABEL_26;
LABEL_23:
  v34 = sub_B7DB80(a3);
  if ( v34 )
  {
    if ( v34 != v261 )
    {
      if ( !v32 )
        goto LABEL_26;
      v166 = v34;
      sub_17C0930(a1, v34, v33, 0);
      v35 = *(_BYTE *)(v261 + 29);
      if ( (v35 & 1) == 0 )
        goto LABEL_79;
      v171 = (__int64 **)sub_B8C3D0(v261, v166, v167, v168, v169, v170);
      v172 = *v171;
      v173 = *((unsigned int *)v171 + 2);
      v174 = &(*v171)[v173];
      if ( (v173 * 8) >> 5 )
      {
        if ( *(_WORD *)(*v172 + 36) == 182 )
        {
          p_ptr = *v171;
          goto LABEL_459;
        }
        p_ptr = v172 + 1;
        if ( *(_WORD *)(v172[1] + 36) == 182
          || (p_ptr = v172 + 2, *(_WORD *)(v172[2] + 36) == 182)
          || (p_ptr = v172 + 3, v175 = &v172[4 * ((v173 * 8) >> 5)], *(_WORD *)(v172[3] + 36) == 182) )
        {
LABEL_459:
          if ( v174 != p_ptr )
          {
            for ( i = p_ptr + 1; v174 != i; ++i )
            {
              if ( *(_WORD *)(*i + 36) != 182 )
                *p_ptr++ = *i;
            }
          }
          goto LABEL_280;
        }
        while ( 1 )
        {
          p_ptr = v172 + 4;
          if ( v175 == v172 + 4 )
            break;
          if ( *(_WORD *)(v172[4] + 36) == 182 )
            goto LABEL_459;
          if ( *(_WORD *)(v172[5] + 36) == 182 )
          {
            p_ptr = v172 + 5;
            goto LABEL_459;
          }
          if ( *(_WORD *)(v172[6] + 36) == 182 )
          {
            p_ptr = v172 + 6;
            goto LABEL_459;
          }
          if ( *(_WORD *)(v172[7] + 36) == 182 )
          {
            p_ptr = v172 + 7;
            goto LABEL_459;
          }
          v172 += 4;
        }
      }
      else
      {
        p_ptr = *v171;
      }
      v176 = v174 - p_ptr;
      if ( v176 != 2 )
      {
        if ( v176 != 3 )
        {
          if ( v176 != 1 )
            goto LABEL_279;
          goto LABEL_520;
        }
        if ( *(_WORD *)(*p_ptr + 36) == 182 )
          goto LABEL_459;
        ++p_ptr;
      }
      if ( *(_WORD *)(*p_ptr + 36) == 182 )
        goto LABEL_459;
      ++p_ptr;
LABEL_520:
      if ( *(_WORD *)(*p_ptr + 36) == 182 )
        goto LABEL_459;
LABEL_279:
      p_ptr = &(*v171)[v173];
LABEL_280:
      sub_17A9430((__int64 *)v171, p_ptr, v174);
      if ( !*((_DWORD *)v171 + 2) )
        *(_BYTE *)(v261 + 29) &= ~1u;
      goto LABEL_26;
    }
  }
  else if ( !sub_B735C0(v261) )
  {
    p_ptr = (__int64 *)sub_B8C330(v261);
    if ( !(unsigned int)sub_B74100(v261, (__int64)p_ptr) )
      goto LABEL_26;
  }
  if ( v25 )
  {
    if ( !((*(_BYTE *)(v25 + 34) & 0xF0) == 0xF0 ? sub_FA77D0(v25) : *(_BYTE *)(v25 + 34) >> 4) )
    {
      p_ptr = (__int64 *)v261;
      sub_17C0930(a1, v261, v25, 1);
    }
  }
LABEL_26:
  v35 = *(_BYTE *)(v261 + 29);
  if ( (v35 & 1) == 0 )
    goto LABEL_79;
  v36 = *(_BYTE *)(a3 + 28) & 0x7F;
  v37 = (unsigned int)(v36 - 58);
  if ( (unsigned int)v37 <= 4 )
  {
    v39 = (__int64)sub_B7E870(a3, (__int64)p_ptr, v37, v29, v27, v28);
    goto LABEL_29;
  }
  v38 = (unsigned int)(v36 - 40);
  if ( (unsigned int)v38 <= 6 )
  {
    p_ptr = (__int64 *)sub_B8C330(a3);
    v39 = sub_B7D8D0(a3, (__int64)p_ptr);
    if ( !v39 )
      v39 = sub_B80EE0(a3);
    goto LABEL_29;
  }
  if ( (unsigned int)(v36 - 34) <= 5 )
  {
    p_ptr = (__int64 *)&ptr;
    ptr = nullptr;
    if ( !(unsigned __int8)sub_B7D390(a3, (__int64)&ptr, 1, v29) )
      goto LABEL_117;
    v39 = (__int64)ptr;
LABEL_29:
    if ( v39 )
    {
      if ( v261 != v39 )
      {
        v40 = sub_B8C3D0(v261, (__int64)p_ptr, v38, v29, v27, v28);
        v41 = *((_DWORD *)v40 + 2);
        v42 = (__int64)v40;
        if ( v41 )
        {
          v43 = 0;
          v271 = a1 + 1;
          do
          {
            v38 = *(_QWORD *)v42;
            p_ptr = (__int64 *)(8LL * v43);
            v44 = *(__int64 *)((char *)p_ptr + *(_QWORD *)v42);
            v264 = p_ptr;
            v29 = *(unsigned __int16 *)(v44 + 36);
            if ( (*(_WORD *)(v44 + 36) & 0xFFFB) == 0x19B )
            {
              if ( (*(_BYTE *)(v261 + 28) & 0x7Fu) - 34 > 5 )
              {
                v193 = sub_B8C330(v39);
                if ( (unsigned int)sub_B74100(v39, v193) == 1 )
                {
                  sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v261 + 24), 0xB97u, 0);
                  v282 = *(_QWORD *)(v261 + 40);
                  sub_15894B0((__int64)&ptr, &v282);
                  sub_15F7200(&ptr);
                  sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v39 + 24), 0x71u, 0);
                  sub_15F7200(&ptr);
                }
                else
                {
                  sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v261 + 24), 0x1326u, 0);
                  v282 = *(_QWORD *)(v261 + 40);
                  sub_15894B0((__int64)&ptr, &v282);
                  sub_15F7200(&ptr);
                  sub_17AE800((__int64)a1, v39, *(_DWORD *)(v261 + 24));
                }
                p_ptr = (_QWORD *)(&dword_0 + 1);
                sub_B88650(v261, 1);
              }
              else
              {
                LOWORD(ptr) = 0;
                p_ptr = (__int64 *)v261;
                v284 = 0;
                sub_17B9710((__int64)a1, v261, (_BYTE *)v39, (__int64)&ptr, v27, v28);
                if ( (_BYTE)ptr )
                {
                  v29 = *(unsigned int *)(v42 + 8);
                  v195 = (__int64 *)((char *)v264 + *(_QWORD *)v42);
                  p_ptr = v195 + 1;
                  v38 = *(_QWORD *)v42 + 8 * v29;
                  v196 = *(_DWORD *)(v42 + 8);
                  if ( (__int64 *)v38 != v195 + 1 )
                  {
                    memmove(v195, p_ptr, v38 - (_QWORD)p_ptr);
                    v196 = *(_DWORD *)(v42 + 8);
                  }
                  --v41;
                  *(_DWORD *)(v42 + 8) = v196 - 1;
                  continue;
                }
              }
              goto LABEL_35;
            }
            if ( (*(_BYTE *)(v39 + 28) & 0x7Fu) - 40 <= 6 )
            {
              p_ptr = (__int64 *)sub_B8C330(v39);
              if ( (unsigned int)sub_B74100(v39, (__int64)p_ptr) != 2 )
                goto LABEL_35;
              v29 = *(unsigned __int16 *)(v44 + 36);
            }
            if ( (*(_BYTE *)(v39 + 29) & 1) != 0 )
            {
              v274 = v29;
              v45 = sub_B8C3D0(v39, (__int64)p_ptr, v38, v29, v27, v28);
              v29 = v274;
              v38 = *((unsigned int *)v45 + 2);
              v46 = *v45;
              p_ptr = (__int64 *)(v46 + 8 * v38);
              if ( (*(_BYTE *)(v39 + 29) & 1) != 0 )
              {
                v280 = v274;
                v275 = (__int64 *)(v46 + 8 * v38);
                v47 = (__int64 **)sub_B8C3D0(v39, (__int64)p_ptr, v38, v29, v27, v28);
                p_ptr = v275;
                v29 = v280;
                v48 = *v47;
              }
              else
              {
                v48 = nullptr;
              }
              if ( v48 != p_ptr )
              {
                v38 = *v48;
                if ( (_WORD)v29 == *(_WORD *)(*v48 + 36) )
                  goto LABEL_35;
                while ( ++v48 != p_ptr )
                {
                  v38 = *v48;
                  if ( *(_WORD *)(*v48 + 36) == (_WORD)v29 )
                    goto LABEL_35;
                }
              }
              v29 = *(unsigned __int16 *)(v44 + 36);
            }
            if ( (_WORD)v29 != 150 && (_WORD)v29 != 392 )
            {
              if ( (LOBYTE(v38) = (_WORD)v29 == 199 || (_WORD)v29 == 398, !(_BYTE)v38) && (_WORD)v29 != 389
                || (v49 = *(_BYTE *)(v44 + 34) & 0xF, v49 != 2) && v49 != 3 && (*(_BYTE *)(v44 + 35) & 1) == 0 )
              {
                switch ( (_WORD)v29 )
                {
                  case 0x7E:
                    --v41;
                    if ( (*(_BYTE *)(v44 + 34) & 0xF0) == 0xF0 )
                    {
                      if ( (unsigned int)sub_FA77D0(v44) != 4 )
                      {
                        if ( (*(_BYTE *)(v44 + 34) & 0xF0) == 0xF0 )
                        {
                          v50 = sub_FA77D0(v44);
                        }
                        else
                        {
                          LOBYTE(v50) = *(_BYTE *)(v44 + 34) >> 4;
LABEL_60:
                          v50 = (unsigned __int8)v50;
                        }
                        if ( v50 != 5 )
                        {
                          v51 = *(_DWORD *)(v44 + 24);
LABEL_63:
                          sub_168B9F0((__int64)&ptr, v271, v51, 0x19B8u, 0);
                          sub_15F7200(&ptr);
                          sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v39 + 24), 0x71u, 0);
                          sub_15F7200(&ptr);
                          v29 = *(unsigned int *)(v42 + 8);
                          v52 = (__int64 *)((char *)v264 + *(_QWORD *)v42);
                          p_ptr = v52 + 1;
                          v38 = *(_QWORD *)v42 + 8 * v29;
                          v53 = *(_DWORD *)(v42 + 8);
                          if ( (__int64 *)v38 != v52 + 1 )
                          {
                            memmove(v52, p_ptr, v38 - (_QWORD)p_ptr);
                            v53 = *(_DWORD *)(v42 + 8);
                          }
                          *(_DWORD *)(v42 + 8) = v53 - 1;
                          continue;
                        }
                      }
                    }
                    else
                    {
                      LOBYTE(v50) = *(_BYTE *)(v44 + 34) >> 4;
                      if ( (_BYTE)v50 != 4 )
                        goto LABEL_60;
                    }
                    sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v39 + 24), 0xB9Fu, 0);
                    if ( v286 )
                    {
                      sub_AE9DF0(v285, v44, 0xEu);
                    }
                    else if ( v288 )
                    {
                      v278 = sub_168B9E0(&ptr);
                      v239 = *((_QWORD *)&v284 + 1);
                      if ( *((_QWORD *)&v284 + 1) )
                        v239 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v284 + 1) + 32LL))(*((_QWORD *)&v284 + 1));
                      v282 = v239;
                      v240 = sub_1587BC0(v278, &v282, v235, v236, v237, v238);
                      sub_AE9DF0((unsigned __int8 **)(*v240 + 32LL * v287 + 8), v44, 0xEu);
                    }
                    sub_15F7200(&ptr);
                    sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v44 + 24), 0x1681u, 0);
                    if ( v286 )
                    {
                      sub_AE9DF0(v285, v44, 0xEu);
                    }
                    else if ( v288 )
                    {
                      v277 = sub_168B9E0(&ptr);
                      v233 = *((_QWORD *)&v284 + 1);
                      if ( *((_QWORD *)&v284 + 1) )
                        v233 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v284 + 1) + 32LL))(*((_QWORD *)&v284 + 1));
                      v282 = v233;
                      v234 = sub_1587BC0(v277, &v282, v229, v230, v231, v232);
                      sub_AE9DF0((unsigned __int8 **)(*v234 + 32LL * v287 + 8), v44, 0xEu);
                    }
LABEL_469:
                    sub_15F7200(&ptr);
                    p_ptr = (__int64 *)((char *)v264 + *(_QWORD *)v42);
                    sub_1672BE0(v42, (__int64)p_ptr);
                    continue;
                  case 0x1A1:
                    --v41;
                    v51 = *(_DWORD *)(v44 + 24);
                    if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
                      goto LABEL_63;
                    sub_168B9F0((__int64)&ptr, v271, v51, 0x1014u, 0);
                    sub_15F7200(&ptr);
                    sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v39 + 24), 0x71u, 0);
                    goto LABEL_469;
                  case 0x165:
                    if ( (*(_BYTE *)(v261 + 28) & 0x7F) == 0x2B
                      || (v227 = *(_BYTE *)(v261 + 97), (v227 & 0x20) == 0)
                      || (v227 & 0x40) != 0 )
                    {
                      --v41;
                      v51 = *(_DWORD *)(v44 + 24);
                      goto LABEL_63;
                    }
                    break;
                  default:
                    if ( (_WORD)v29 != 296 )
                    {
                      v51 = *(_DWORD *)(v44 + 24);
                      if ( (_WORD)v29 != 353 )
                      {
                        --v41;
                        goto LABEL_63;
                      }
                      sub_168B9F0((__int64)&ptr, v271, v51, 0x13C4u, 0);
                      sub_15F7200(&ptr);
                      p_ptr = a1 + 1;
                      sub_168B9F0((__int64)&ptr, v271, *(_DWORD *)(v39 + 24), 0x71u, 0);
                      sub_15F7200(&ptr);
                      *(_BYTE *)(v44 + 48) = 1;
                    }
                    break;
                }
              }
            }
LABEL_35:
            ++v43;
          }
          while ( v41 != v43 );
        }
      }
    }
LABEL_117:
    v35 = *(_BYTE *)(v261 + 29);
    if ( (v35 & 1) != 0 )
      goto LABEL_118;
LABEL_79:
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      return;
    v272 = v35 & 1;
    goto LABEL_81;
  }
LABEL_118:
  v102 = sub_B8C3D0(v261, (__int64)p_ptr, v38, v29, v27, v28);
  v106 = *v102;
  v107 = *v102 + 8LL * *((unsigned int *)v102 + 2);
  if ( v106 >= v107 )
  {
    if ( v106 == v107 )
      goto LABEL_122;
    while ( 1 )
    {
      v103 = *(_WORD **)v107;
      if ( *(_WORD *)(*(_QWORD *)v107 + 36LL) == 139 )
        break;
      v107 += 8LL;
      if ( v106 == v107 )
        goto LABEL_122;
    }
  }
  else
  {
    v103 = (_WORD *)v106;
    while ( 1 )
    {
      p_ptr = *(__int64 **)v103;
      if ( *(_WORD *)(*(_QWORD *)v103 + 36LL) == 139 )
        break;
      v103 += 4;
      if ( (_WORD *)v107 == v103 )
        goto LABEL_122;
    }
    if ( (_WORD *)v107 == v103 )
      goto LABEL_122;
  }
  v132 = *(_QWORD *)v106;
  if ( *(_WORD *)(*(_QWORD *)v106 + 36LL) != 139 )
  {
    v133 = (__int64 *)(v106 + 8);
    do
      v132 = *v133++;
    while ( *(_WORD *)(v132 + 36) != 139 );
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_184;
  v134 = sub_B8C3D0(a3, (__int64)p_ptr, v106, (__int64)v103, v104, v105);
  v135 = *v134;
  v136 = *v134 + 8LL * *((unsigned int *)v134 + 2);
  if ( v135 < v136 )
  {
    v103 = (_WORD *)v135;
    while ( 1 )
    {
      p_ptr = *(__int64 **)v103;
      if ( *(_WORD *)(*(_QWORD *)v103 + 36LL) == 139 )
        break;
      v103 += 4;
      if ( (_WORD *)v136 == v103 )
        goto LABEL_184;
    }
    if ( (_WORD *)v136 == v103 )
    {
LABEL_184:
      p_ptr = (_QWORD *)(&dword_0 + 1);
      if ( !sub_B8C400(a3, 1) )
        goto LABEL_122;
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v261 + 24), 0x1003u, 0);
      LOBYTE(v281) = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34 <= 5;
      v140 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v281);
      if ( (*(_BYTE *)(v261 + 29) & 1) != 0 )
      {
        v143 = sub_B8C3D0(v261, (__int64)&v281, v138, v139, v141, v142);
        v144 = (_QWORD *)*v143;
        v145 = *v143 + 8LL * *((unsigned int *)v143 + 2);
        if ( (unsigned __int64)v144 >= v145 )
        {
          if ( v144 != (_QWORD *)v145 )
          {
            while ( *(_WORD *)(*(_QWORD *)v145 + 36LL) != 139 )
            {
              v145 += 8LL;
              if ( v144 == (_QWORD *)v145 )
                goto LABEL_604;
            }
            goto LABEL_191;
          }
        }
        else
        {
          v146 = v144;
          while ( *(_WORD *)(*v146 + 36LL) != 139 )
          {
            if ( (_QWORD *)v145 == ++v146 )
              goto LABEL_604;
          }
          if ( (_QWORD *)v145 != v146 )
          {
LABEL_191:
            v147 = *v144;
            if ( *(_WORD *)(*v144 + 36LL) != 139 )
            {
              v148 = v144 + 1;
              do
                v147 = *v148++;
              while ( *(_WORD *)(v147 + 36) != 139 );
            }
            p_ptr = &v282;
            v282 = *(_QWORD *)(v147 + 24);
            sub_1587DB0(v140, &v282);
            sub_15F7200(&ptr);
            goto LABEL_122;
          }
        }
      }
LABEL_604:
      BUG();
    }
  }
  else
  {
    if ( v135 == v136 )
      goto LABEL_184;
    v103 = *(_WORD **)v136;
    if ( *(_WORD *)(*(_QWORD *)v136 + 36LL) != 139 )
    {
      v137 = (_WORD **)(v136 + 8);
      while ( (_WORD **)v135 != v137 )
      {
        v103 = *v137++;
        if ( v103[18] == 139 )
          goto LABEL_351;
      }
      goto LABEL_184;
    }
  }
LABEL_351:
  v197 = *(_QWORD *)v135;
  if ( *(_WORD *)(*(_QWORD *)v135 + 36LL) != 139 )
  {
    v198 = (__int64 *)(v135 + 8);
    do
      v197 = *v198++;
    while ( *(_WORD *)(v197 + 36) != 139 );
  }
  v199 = *(_DWORD *)(v197 + 40);
  if ( *(_DWORD *)(v132 + 40) != v199
    || (v106 = v199) != 0 && (p_ptr = *(__int64 **)(v132 + 48), memcmp(*(const void **)(v197 + 48), p_ptr, v199))
    || *(_BYTE *)(v197 + 56) != *(_BYTE *)(v132 + 56) )
  {
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v261 + 24), 0xE71u, 0);
    sub_15F7200(&ptr);
    p_ptr = a1 + 1;
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v197 + 24), 0x70u, 0);
    sub_15F7200(&ptr);
  }
LABEL_122:
  v35 = *(_BYTE *)(v261 + 29);
  if ( (v35 & 1) == 0 )
    goto LABEL_79;
  v108 = sub_B8C3D0(v261, (__int64)p_ptr, v106, (__int64)v103, v104, v105);
  v112 = (_WORD *)*v108;
  v113 = *v108 + 8LL * *((unsigned int *)v108 + 2);
  if ( (unsigned __int64)v112 >= v113 )
  {
    if ( v112 == (_WORD *)v113 )
      goto LABEL_127;
    v109 = *(_WORD **)v113;
    if ( *(_WORD *)(*(_QWORD *)v113 + 36LL) != 410 )
    {
      v149 = (_WORD **)(v113 + 8);
      do
      {
        v109 = v149;
        if ( v112 == (_WORD *)v149 )
          goto LABEL_127;
        v109 = *v149++;
      }
      while ( v109[18] != 410 );
    }
  }
  else
  {
    v109 = v112;
    while ( 1 )
    {
      p_ptr = *(__int64 **)v109;
      if ( *(_WORD *)(*(_QWORD *)v109 + 36LL) == 410 )
        break;
      v109 += 4;
      if ( (_WORD *)v113 == v109 )
        goto LABEL_127;
    }
    if ( (_WORD *)v113 == v109 )
      goto LABEL_127;
  }
  v276 = *(_WORD **)v112;
  if ( *(_WORD *)(*(_QWORD *)v112 + 36LL) != 410 )
  {
    v128 = (_WORD **)(v112 + 4);
    do
      v112 = *v128++;
    while ( v112[18] != 410 );
    v276 = v112;
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_172;
  v129 = sub_B8C3D0(a3, (__int64)p_ptr, (__int64)v112, (__int64)v109, v110, v111);
  v112 = (_WORD *)*v129;
  v130 = *v129 + 8LL * *((unsigned int *)v129 + 2);
  if ( (unsigned __int64)v112 < v130 )
  {
    v109 = v112;
    while ( 1 )
    {
      p_ptr = *(__int64 **)v109;
      if ( *(_WORD *)(*(_QWORD *)v109 + 36LL) == 410 )
        break;
      v109 += 4;
      if ( (_WORD *)v130 == v109 )
        goto LABEL_172;
    }
    if ( (_WORD *)v130 == v109 )
      goto LABEL_172;
    goto LABEL_357;
  }
  if ( v112 == (_WORD *)v130 )
  {
LABEL_172:
    sub_168B9F0((__int64)&ptr, a1 + 1, *((_DWORD *)v276 + 6), 0xB37u, 0);
    sub_15F7200(&ptr);
    p_ptr = a1 + 1;
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x70u, 0);
    sub_15F7200(&ptr);
    goto LABEL_127;
  }
  v109 = *(_WORD **)v130;
  if ( *(_WORD *)(*(_QWORD *)v130 + 36LL) != 410 )
  {
    v131 = (_WORD **)(v130 + 8);
    while ( v112 != (_WORD *)v131 )
    {
      v109 = *v131++;
      if ( v109[18] == 410 )
        goto LABEL_357;
    }
    goto LABEL_172;
  }
LABEL_357:
  v270 = *(_QWORD *)v112;
  if ( *(_WORD *)(*(_QWORD *)v112 + 36LL) != 410 )
  {
    do
      v112 += 4;
    while ( *(_WORD *)(*(_QWORD *)v112 + 36LL) != 410 );
    v270 = *(_QWORD *)v112;
  }
  v200 = *((_QWORD *)v276 + 6);
  v273 = v200 + 16LL * *((unsigned int *)v276 + 10);
  if ( v200 != v273 )
  {
    while ( 1 )
    {
      v201 = *(_QWORD *)(v270 + 48);
      v202 = 16LL * *(unsigned int *)(v270 + 40);
      v266 = v201 + v202;
      v203 = v202 >> 4;
      v204 = v202 >> 6;
      if ( v204 )
      {
        v205 = *(__int64 **)v200;
        v206 = *(_QWORD *)(v200 + 8);
        v207 = v201 + (v204 << 6);
        while ( 1 )
        {
          if ( *(_QWORD *)(v201 + 8) == v206 )
          {
            if ( !v206 )
              goto LABEL_376;
            p_ptr = v205;
            if ( !memcmp(*(const void **)v201, v205, v206) )
              goto LABEL_376;
          }
          v208 = v201 + 16;
          if ( v206 == *(_QWORD *)(v201 + 24)
            && (!v206 || (p_ptr = v205, !memcmp(*(const void **)(v201 + 16), v205, v206)))
            || (v208 = v201 + 32, v206 == *(_QWORD *)(v201 + 40))
            && (!v206 || (p_ptr = v205, !memcmp(*(const void **)(v201 + 32), v205, v206)))
            || (v208 = v201 + 48, v206 == *(_QWORD *)(v201 + 56))
            && (!v206 || (p_ptr = v205, !memcmp(*(const void **)(v201 + 48), v205, v206))) )
          {
            v201 = v208;
            goto LABEL_376;
          }
          v201 += 64;
          if ( v207 == v201 )
          {
            v203 = (v266 - v201) >> 4;
            break;
          }
        }
      }
      if ( v203 == 2 )
        break;
      if ( v203 == 3 )
      {
        v211 = *(__int64 **)v200;
        v212 = *(_QWORD *)(v200 + 8);
        if ( *(_QWORD *)(v201 + 8) == v212 )
        {
          if ( !v212 )
            goto LABEL_376;
          p_ptr = *(__int64 **)v200;
          if ( !memcmp(*(const void **)v201, *(const void **)v200, *(_QWORD *)(v200 + 8)) )
            goto LABEL_376;
        }
        v201 += 16;
        goto LABEL_406;
      }
      if ( v203 != 1 )
        goto LABEL_384;
      v211 = *(__int64 **)v200;
      v212 = *(_QWORD *)(v200 + 8);
LABEL_397:
      if ( *(_QWORD *)(v201 + 8) != v212 || v212 && (p_ptr = v211, memcmp(*(const void **)v201, v211, v212)) )
      {
LABEL_384:
        sub_168B9F0((__int64)&ptr, a1 + 1, *((_DWORD *)v276 + 6), 0x10A5u, 0);
        sub_1682BA0((__int64)&ptr, v200);
        sub_15F7200(&ptr);
        p_ptr = a1 + 1;
        sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v270 + 24), 0x70u, 0);
        sub_15F7200(&ptr);
        goto LABEL_377;
      }
LABEL_376:
      if ( v266 == v201 )
        goto LABEL_384;
LABEL_377:
      v200 += 16;
      if ( v273 == v200 )
        goto LABEL_127;
    }
    v211 = *(__int64 **)v200;
    v212 = *(_QWORD *)(v200 + 8);
LABEL_406:
    if ( *(_QWORD *)(v201 + 8) == v212 )
    {
      if ( !v212 )
        goto LABEL_376;
      p_ptr = v211;
      if ( !memcmp(*(const void **)v201, v211, v212) )
        goto LABEL_376;
    }
    v201 += 16;
    goto LABEL_397;
  }
LABEL_127:
  v35 = *(_BYTE *)(v261 + 29);
  if ( (v35 & 1) == 0 )
    goto LABEL_79;
  v114 = sub_B8C3D0(v261, (__int64)p_ptr, (__int64)v112, (__int64)v109, v110, v111);
  v117 = *v114;
  v118 = (__int64 *)(*v114 + 8LL * *((unsigned int *)v114 + 2));
  if ( *v114 >= (unsigned __int64)v118 )
  {
    if ( (__int64 *)v117 == v118 )
      goto LABEL_134;
    if ( *(_WORD *)(*v118 + 36) != 356 )
    {
      v119 = (__int64 **)(v118 + 1);
      do
      {
        v118 = (__int64 *)v119;
        if ( (__int64 **)v117 == v119 )
          goto LABEL_134;
        v118 = *v119++;
      }
      while ( *((_WORD *)v118 + 18) != 356 );
    }
LABEL_411:
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    {
      v217 = sub_B8C3D0(a3, (__int64)p_ptr, v117, (__int64)v118, v115, v116);
      v117 = *v217;
      v118 = (__int64 *)(*v217 + 8LL * *((unsigned int *)v217 + 2));
      if ( *v217 >= (unsigned __int64)v118 )
      {
        if ( (__int64 *)v117 != v118 )
        {
          while ( *(_WORD *)(*v118 + 36) != 356 )
          {
            if ( (__int64 *)v117 == ++v118 )
              goto LABEL_412;
          }
          goto LABEL_134;
        }
      }
      else
      {
        v218 = (__int64 *)*v217;
        while ( 1 )
        {
          v117 = *v218;
          if ( *(_WORD *)(*v218 + 36) == 356 )
            break;
          if ( v118 == ++v218 )
            goto LABEL_412;
        }
        if ( v118 != v218 )
          goto LABEL_134;
      }
    }
LABEL_412:
    if ( (*(_BYTE *)(v261 + 28) & 0x7Fu) - 40 <= 6 )
    {
      p_ptr = (__int64 *)sub_B8C330(v261);
      if ( !(unsigned int)sub_B74100(v261, (__int64)p_ptr) )
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v261 + 24), 0x19BDu, 0);
        sub_15F7200(&ptr);
        p_ptr = a1 + 1;
        sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x70u, 0);
        sub_15F7200(&ptr);
      }
    }
    goto LABEL_134;
  }
  v165 = (__int64 *)*v114;
  while ( 1 )
  {
    v117 = *v165;
    if ( *(_WORD *)(*v165 + 36) == 356 )
      break;
    if ( v118 == ++v165 )
      goto LABEL_134;
  }
  if ( v118 != v165 )
    goto LABEL_411;
LABEL_134:
  v35 = *(_BYTE *)(v261 + 29);
  if ( (v35 & 1) == 0 )
    goto LABEL_79;
  v120 = sub_B8C3D0(v261, (__int64)p_ptr, v117, (__int64)v118, v115, v116);
  v73 = *v120;
  v121 = *v120 + 8LL * *((unsigned int *)v120 + 2);
  if ( v73 >= v121 )
  {
    if ( v73 == v121 )
      goto LABEL_139;
    v74 = *(_QWORD *)v121;
    if ( *(_WORD *)(*(_QWORD *)v121 + 36LL) != 178 )
    {
      v194 = (unsigned __int64 *)(v121 + 8);
      do
      {
        v74 = (unsigned __int64)v194;
        if ( (unsigned __int64 *)v73 == v194 )
          goto LABEL_139;
        v74 = *v194++;
      }
      while ( *(_WORD *)(v74 + 36) != 178 );
    }
  }
  else
  {
    v74 = v73;
    while ( 1 )
    {
      p_ptr = *(__int64 **)v74;
      if ( *(_WORD *)(*(_QWORD *)v74 + 36LL) == 178 )
        break;
      v74 += 8LL;
      if ( v121 == v74 )
        goto LABEL_139;
    }
    if ( v121 == v74 )
      goto LABEL_139;
  }
  v186 = *(_QWORD *)v73;
  if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) != 178 )
  {
    v187 = (__int64 *)(v73 + 8);
    do
      v186 = *v187++;
    while ( *(_WORD *)(v186 + 36) != 178 );
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v186 + 38) & 4) != 0 )
      return;
LABEL_327:
    if ( (*(_BYTE *)(v261 + 28) & 0x7Fu) - 35 <= 3 )
    {
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v261 + 24), 0x1BBCu, 0);
      LODWORD(v282) = 0;
      sub_1587D10((__int64)&ptr, (int *)&v282);
      sub_15F7200(&ptr);
      p_ptr = a1 + 1;
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x70u, 0);
      sub_15F7200(&ptr);
    }
    goto LABEL_139;
  }
  v209 = sub_B8C3D0(a3, (__int64)p_ptr, v73, v74, v75, v76);
  v73 = *v209;
  v74 = *v209 + 8LL * *((unsigned int *)v209 + 2);
  if ( *v209 >= v74 )
  {
    if ( v73 != v74 )
    {
      if ( *(_WORD *)(*(_QWORD *)v74 + 36LL) == 178 )
        goto LABEL_139;
      v214 = (unsigned __int64 *)(v74 + 8);
      while ( 1 )
      {
        v74 = (unsigned __int64)v214;
        if ( (unsigned __int64 *)v73 == v214 )
          break;
        v74 = *v214++;
        if ( *(_WORD *)(v74 + 36) == 178 )
          goto LABEL_139;
      }
    }
    goto LABEL_389;
  }
  v210 = (unsigned __int64 *)*v209;
  while ( 1 )
  {
    v73 = *v210;
    if ( *(_WORD *)(*v210 + 36) == 178 )
      break;
    if ( (unsigned __int64 *)v74 == ++v210 )
      goto LABEL_389;
  }
  if ( (unsigned __int64 *)v74 == v210 )
  {
LABEL_389:
    if ( (*(_BYTE *)(v186 + 38) & 4) != 0 )
      goto LABEL_139;
    goto LABEL_327;
  }
LABEL_139:
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    return;
  v272 = *(_BYTE *)(v261 + 29) & 1;
  if ( !v272 )
  {
LABEL_81:
    ptr = (char *)&v284 + 8;
    *(_QWORD *)&v284 = 0x400000000LL;
    v69 = sub_B8C330(v261);
    p_ptr = (__int64 *)&ptr;
    sub_B8C0D0(v261, &ptr, v69, v70, v71, v72);
    if ( ptr != (char *)&v284 + 8 )
      free(ptr);
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_148;
  }
  v122 = sub_B8C3D0(a3, (__int64)p_ptr, v73, v74, v75, v76);
  v73 = *((unsigned int *)v122 + 2);
  v123 = *v122 + 8 * v73;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v124 = (__int64 *)*sub_B8C3D0(a3, (__int64)p_ptr, v73, v74, v75, v76);
  else
    v124 = nullptr;
  v125 = v124 == (__int64 *)v123;
  if ( (unsigned __int64)v124 >= v123 )
    goto LABEL_301;
LABEL_144:
  v73 = (unsigned __int64)v124;
  while ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v73 + 36LL) - 53) > 0x164u )
  {
    v73 += 8LL;
    if ( v123 == v73 )
      goto LABEL_147;
  }
  if ( v123 != v73 )
  {
    while ( 1 )
    {
LABEL_283:
      v177 = *v124;
      v73 = *(unsigned __int16 *)(*v124 + 36);
      if ( (unsigned __int16)(v73 - 53) > 0x164u )
      {
        v178 = v124 + 1;
        do
        {
          v177 = *v178;
          v124 = v178++;
          v73 = *(unsigned __int16 *)(v177 + 36);
          v74 = (unsigned int)(v73 - 53);
        }
        while ( (unsigned __int16)(v73 - 53) > 0x164u );
      }
      LOBYTE(v74) = (_WORD)v73 == 199 || (_WORD)v73 == 386;
      if ( (_BYTE)v74 || (_WORD)v73 == 142 )
      {
        if ( !a4 )
          goto LABEL_300;
        v179 = 0;
        if ( a4 <= 4 )
          v179 = a4;
      }
      else
      {
        v179 = 0;
      }
      if ( (_WORD)v73 == 349
        || (_WORD)v73 == 390
        || (_WORD)v73 == 236 && (*(_BYTE *)(v261 + 28) & 0x7Fu) - 34 <= 5 && (unsigned int)sub_B77D20(v261) == 2 )
      {
        goto LABEL_300;
      }
      p_ptr = (__int64 *)v261;
      v180 = sub_17C1D30((__int64)a1, v261, v177, v74, v75, v76);
      if ( !v180 )
        goto LABEL_300;
      v181 = *(unsigned __int16 *)(v177 + 36);
      if ( (_WORD)v181 == 142 )
        break;
      if ( (_WORD)v181 != 396 )
      {
        switch ( (_WORD)v181 )
        {
          case 0x181:
            p_ptr = (__int64 *)v261;
            v182 = sub_1807E50(a1, v261, v177, *(unsigned int *)(v177 + 40));
            break;
          case 0xC5:
            p_ptr = (__int64 *)v261;
            v182 = sub_180D3A0(a1, v261, v177);
            break;
          case 0xC3:
            p_ptr = (__int64 *)v261;
            v182 = sub_1811220(a1, v261, v177);
            break;
          case 0xD2:
            p_ptr = (__int64 *)v261;
            v182 = sub_1832BE0(a1, v261, v177, *(_QWORD *)(v177 + 48), *(unsigned int *)(v177 + 40));
            break;
          case 0xD9:
            p_ptr = (__int64 *)v261;
            v182 = sub_1807E60(
                     a1,
                     v261,
                     v177,
                     *(_QWORD *)(v177 + 40),
                     *(unsigned int *)(v177 + 48),
                     *(unsigned int *)(v177 + 52));
            break;
          case 0xDB:
            v228 = sub_B06750(v177);
            p_ptr = (__int64 *)v261;
            v182 = sub_18088B0(a1, v261, v177, *(_QWORD *)(v177 + 40), *(unsigned int *)(v177 + 48), v228);
            break;
          case 0x164:
            p_ptr = (__int64 *)v261;
            v182 = sub_180ABB0(a1, v261, v177, *(_QWORD *)(v177 + 48), *(unsigned int *)(v177 + 40));
            break;
          case 0xB2:
            p_ptr = (__int64 *)v261;
            v182 = sub_180ADB0(a1, v261, v177, *(_QWORD *)(v177 + 48), *(unsigned int *)(v177 + 40));
            break;
          case 0xF8:
            v255 = sub_B142D0(v177);
            p_ptr = (__int64 *)v261;
            v182 = sub_181BF30(a1, v261, v177, *(unsigned __int8 *)(v177 + 39), v255);
            break;
          case 0x35:
            v268 = *(_QWORD *)(a1[31] + 17504);
            v256 = sub_B096B0(v177);
            v257 = 0;
            if ( v256 )
              v257 = j__strlen(v256);
            v258 = sub_6F3470(v268, v256, v257);
            p_ptr = (__int64 *)v261;
            v182 = sub_180DF40(a1, v261, v177, v258);
            break;
          default:
            p_ptr = a1;
            v73 = a1[29];
            if ( (*(_BYTE *)(v73 + 60) & 0x10) != 0 )
            {
              p_ptr = (__int64 *)v261;
              v73 = (*(_BYTE *)(v261 + 28) & 0x7Fu) - 34;
              if ( (unsigned int)v73 <= 5 )
              {
                v73 = (unsigned int)(v181 - 163);
                if ( (((_WORD)v181 - 163) & 0xFFFD) == 0 || (_WORD)v181 == 160 )
                  goto LABEL_300;
              }
            }
            switch ( (_WORD)v181 )
            {
              case 0x101:
                p_ptr = (__int64 *)v261;
                v182 = sub_180D120(a1, v261, v177);
                break;
              case 0x174:
                p_ptr = (__int64 *)v261;
                v182 = sub_1CA7B40(a1[101], v261, v177, *(_QWORD *)(v177 + 48), *(unsigned int *)(v177 + 40));
                break;
              case 0x141:
                p_ptr = (__int64 *)v261;
                v182 = sub_1810430(a1, v261, v177);
                break;
              case 0xEE:
                p_ptr = (__int64 *)v261;
                v182 = sub_1810230(a1, v261, v177);
                break;
              default:
                if ( (_WORD)v181 == 126 || ((_WORD)v181 == 199 || (_WORD)v181 == 386) && v179 - 2 <= 2 )
                  goto LABEL_300;
                switch ( (_WORD)v181 )
                {
                  case 0x188:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_1809910(
                             a1,
                             v261,
                             v177,
                             *(_QWORD *)(v177 + 48),
                             *(unsigned int *)(v177 + 40),
                             *(_QWORD *)(v177 + 56));
                    break;
                  case 0x193:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_1E94DF0(a1[103], v261, v177);
                    break;
                  case 0x194:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_1E9A760(a1[103], v261, v177);
                    break;
                  case 0xCF:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_180CDB0(a1, v261, v177);
                    break;
                  case 0xD0:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_180CF80(a1, v261, v177);
                    break;
                  case 0x93:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_18074E0(a1, v261, v177);
                    break;
                  case 0xE1:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_1A03930(
                             a1[85],
                             v261,
                             v177,
                             *(unsigned int *)(v177 + 40),
                             *(unsigned int *)(v177 + 44),
                             *(unsigned int *)(v177 + 48));
                    break;
                  case 0xE6:
                    p_ptr = (__int64 *)v261;
                    v259 = sub_1A03B30(
                             a1[85],
                             v261,
                             v177,
                             *(_DWORD *)(v177 + 40),
                             *(_DWORD *)(v177 + 44),
                             *(_DWORD *)(v177 + 48),
                             *(_DWORD *)(v177 + 52));
                    v73 = v260;
                    v74 = (unsigned __int64)a1;
                    v182 = v259;
                    break;
                  case 0xE4:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_19FBD80(a1[85], v261, v177, *(unsigned int *)(v177 + 40));
                    break;
                  case 0xE3:
                    p_ptr = (__int64 *)v261;
                    v182 = sub_1A06310(a1[85], v261, v177, *(unsigned int *)(v177 + 40));
                    break;
                  case 0x38:
                    goto LABEL_300;
                  case 0x13F:
                    p_ptr = (__int64 *)v177;
                    v182 = sub_1AA2E90(a1[93], v177);
                    break;
                  default:
                    if ( (*(_BYTE *)(v177 + 38) & 0x10) == 0 )
                    {
                      p_ptr = (__int64 *)v177;
                      if ( (unsigned __int8)sub_179C320(v261, v177, v73, v74, v75, v76) )
                        goto LABEL_300;
                    }
                    p_ptr = (__int64 *)a1[31];
                    v182 = sub_B395B0(v177, (__int64)p_ptr);
                    break;
                }
                break;
            }
            break;
        }
        goto LABEL_299;
      }
      p_ptr = (__int64 *)v261;
      v182 = sub_1807A60(a1, v261, v177, *(unsigned int *)(v177 + 40));
      if ( v182 )
      {
LABEL_315:
        *(_BYTE *)(v182 + 38) |= 1u;
        p_ptr = (__int64 *)v182;
        sub_B8CC60(v261, v182, v73, v74, v75, v76);
        v272 = v180;
        if ( *(_WORD *)(v182 + 36) == 248 )
        {
          p_ptr = (__int64 *)nullsub_155;
          v184 = a1[32];
          v185 = *(void (**)())(*(_QWORD *)v184 + 112LL);
          if ( v185 != nullsub_155 )
          {
            p_ptr = (__int64 *)v261;
            ((void (__fastcall *)(__int64, __int64))v185)(v184, v261);
          }
        }
      }
LABEL_300:
      v125 = ++v124 == (__int64 *)v123;
      if ( (unsigned __int64)v124 < v123 )
        goto LABEL_144;
LABEL_301:
      if ( v125 )
        goto LABEL_147;
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v123 + 36LL) - 53) > 0x164u )
      {
        v183 = v123 + 8;
        while ( 1 )
        {
          v73 = v183;
          if ( v124 == (__int64 *)v183 )
            goto LABEL_147;
          v183 += 8LL;
          if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v73 + 36LL) - 53) <= 0x164u )
            goto LABEL_283;
        }
      }
    }
    p_ptr = (__int64 *)v261;
    v182 = sub_1822D80(
             (_DWORD)a1,
             v261,
             v177,
             *(_QWORD *)(v177 + 40),
             (*(_BYTE *)(v177 + 38) & 4) != 0,
             *(unsigned __int8 *)(v177 + 96),
             (__int128)_mm_loadu_si128((const __m128i *)(v177 + 48)),
             *(_OWORD *)(v177 + 64),
             *(_OWORD *)(v177 + 80),
             *(_QWORD *)(v177 + 104),
             *(unsigned int *)(v177 + 100),
             *(unsigned __int8 *)(v177 + 112),
             *(_QWORD *)(v177 + 120),
             *(unsigned int *)(v177 + 116),
             v179,
             *(_DWORD *)(v177 + 128),
             *(_QWORD *)(v177 + 136));
LABEL_299:
    if ( v182 )
      goto LABEL_315;
    goto LABEL_300;
  }
LABEL_147:
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
LABEL_148:
    v263 = nullptr;
    v80 = 0;
    v81 = 0;
    goto LABEL_91;
  }
  v77 = sub_B8C3D0(a3, (__int64)p_ptr, v73, v74, v75, v76);
  v73 = *((unsigned int *)v77 + 2);
  v78 = *v77 + 8 * v73;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v79 = (__int64 *)*sub_B8C3D0(a3, (__int64)p_ptr, v73, v74, v75, v76);
  else
    v79 = nullptr;
  v80 = 0;
  v81 = 0;
  v263 = nullptr;
  v82 = v79 == (__int64 *)v78;
  if ( (unsigned __int64)v79 >= v78 )
    goto LABEL_228;
LABEL_88:
  v83 = v79;
  while ( 1 )
  {
    v73 = *v83;
    if ( *(_WORD *)(*v83 + 36) == 126 )
      break;
    if ( (__int64 *)v78 == ++v83 )
      goto LABEL_91;
  }
  do
  {
LABEL_218:
    while ( 1 )
    {
      v153 = *v79;
      if ( *(_WORD *)(*v79 + 36) == 126 )
        break;
      ++v79;
    }
    if ( sub_B08AF0(*v79) )
      goto LABEL_334;
    v155 = *(_BYTE *)(v153 + 34) & 0xF0;
    if ( (*(_BYTE *)(v153 + 34) & 0xF0) != 0xF0 )
    {
      LOBYTE(v156) = *(_BYTE *)(v153 + 34) >> 4;
      if ( (_BYTE)v156 == 4 )
        goto LABEL_307;
      goto LABEL_222;
    }
    if ( (unsigned int)sub_FA77D0(v153) == 4 )
    {
LABEL_307:
      v80 = v153;
      goto LABEL_225;
    }
    v155 = *(_BYTE *)(v153 + 34) & 0xF0;
    if ( (*(_BYTE *)(v153 + 34) & 0xF0) != 0xF0 )
    {
      LOBYTE(v156) = *(_BYTE *)(v153 + 34) >> 4;
LABEL_222:
      v156 = (unsigned __int8)v156;
      goto LABEL_223;
    }
    v156 = sub_FA77D0(v153);
LABEL_223:
    if ( v156 == 5 )
      v80 = v153;
LABEL_225:
    p_ptr = (__int64 *)a1[31];
    v157 = sub_B065C0(v153, (__int64)p_ptr, v155, v154);
    if ( v157 > v81 )
    {
      v263 = (const __m128i *)v153;
      v81 = v157;
    }
    v82 = ++v79 == (__int64 *)v78;
    if ( (unsigned __int64)v79 < v78 )
      goto LABEL_88;
LABEL_228:
    if ( v82 )
      goto LABEL_91;
    v73 = *(_QWORD *)v78;
    v158 = (__int64 *)v78;
  }
  while ( *(_WORD *)(*(_QWORD *)v78 + 36LL) == 126 );
  while ( v79 != ++v158 )
  {
    v73 = *v158;
    if ( *(_WORD *)(*v158 + 36) == 126 )
      goto LABEL_218;
  }
LABEL_91:
  v84 = v261;
  if ( (*(_BYTE *)(v261 + 29) & 1) == 0 )
  {
    v54 = 0;
    if ( !v80 )
      goto LABEL_67;
LABEL_441:
    v215 = *(_BYTE *)(v84 + 28) & 0x7F;
    if ( (unsigned int)(v215 - 40) > 6 )
    {
      if ( (unsigned int)(v215 - 58) <= 4 )
      {
        v267 = *(_QWORD *)(v84 + 72);
        if ( (v267 & 0x10000) == 0 && (v267 & 0x20000) == 0 )
          goto LABEL_443;
      }
    }
    else
    {
      v216 = sub_B8C330(v84);
      if ( !(unsigned int)sub_B74100(v84, v216) )
        goto LABEL_443;
    }
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v261 + 24), 0xB9Fu, 0);
    if ( v286 )
    {
      sub_AE9DF0(v285, v80, 0xEu);
    }
    else if ( v288 )
    {
      v252 = sub_168B9E0(&ptr);
      v253 = *((_QWORD *)&v284 + 1);
      if ( *((_QWORD *)&v284 + 1) )
        v253 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v284 + 1) + 32LL))(*((_QWORD *)&v284 + 1));
      v282 = v253;
      v254 = sub_1587BC0(v252, &v282, v248, v249, v250, v251);
      sub_AE9DF0((unsigned __int8 **)(*v254 + 32LL * v287 + 8), v80, 0xEu);
    }
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v80 + 24), 0x1681u, 0);
    if ( v286 )
    {
      sub_AE9DF0(v285, v80, 0xEu);
    }
    else if ( v288 )
    {
      v245 = sub_168B9E0(&ptr);
      v246 = *((_QWORD *)&v284 + 1);
      if ( *((_QWORD *)&v284 + 1) )
        v246 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v284 + 1) + 32LL))(*((_QWORD *)&v284 + 1));
      v282 = v246;
      v247 = sub_1587BC0(v245, &v282, v241, v242, v243, v244);
      sub_AE9DF0((unsigned __int8 **)(*v247 + 32LL * v287 + 8), v80, 0xEu);
    }
    sub_15F7200(&ptr);
LABEL_443:
    if ( v81 <= v54 )
    {
LABEL_444:
      v55 = (const __m128i *)v80;
      v56 = a1[31];
LABEL_69:
      v57 = sub_B22CA0(v55, v56);
      v57[2].m128i_i8[6] |= 1u;
      sub_B8CC60(v261, (__int64)v57, v58, v59, v60, v61);
      return;
    }
    v221 = sub_B22CA0(v263, a1[31]);
    v221[2].m128i_i8[6] |= 1u;
    sub_B8CC60(v261, (__int64)v221, v222, v223, v224, v225);
    if ( (v263[2].m128i_i8[2] & 0xF0) == 0xF0 )
    {
      if ( (unsigned int)sub_FA77D0(v263) == 4 )
        return;
      if ( (v263[2].m128i_i8[2] & 0xF0) == 0xF0 )
      {
        v226 = sub_FA77D0(v263);
LABEL_483:
        if ( v226 == 5 )
          return;
        goto LABEL_444;
      }
      LOBYTE(v226) = (unsigned __int8)v263[2].m128i_i8[2] >> 4;
    }
    else
    {
      LOBYTE(v226) = (unsigned __int8)v263[2].m128i_i8[2] >> 4;
      if ( (_BYTE)v226 == 4 )
        return;
    }
    v226 = (unsigned __int8)v226;
    goto LABEL_483;
  }
  v85 = sub_B8C3D0(v261, (__int64)p_ptr, v73, v74, v75, v76);
  v89 = *((unsigned int *)v85 + 2);
  v90 = *v85 + 8 * v89;
  if ( (*(_BYTE *)(v261 + 29) & 1) != 0 )
    v91 = (__int64 *)*sub_B8C3D0(v261, (__int64)p_ptr, v89, v86, v87, v88);
  else
    v91 = nullptr;
  v54 = 0;
  v92 = 0;
  v265 = v81;
  v93 = v91 == (__int64 *)v90;
  if ( (unsigned __int64)v91 >= v90 )
    goto LABEL_245;
LABEL_95:
  v94 = v91;
  while ( 2 )
  {
    v89 = *v94;
    if ( *(_WORD *)(*v94 + 36) == 126 )
    {
      while ( 1 )
      {
LABEL_235:
        while ( 1 )
        {
          v159 = *v91;
          if ( *(_WORD *)(*v91 + 36) == 126 )
            break;
          ++v91;
        }
        if ( sub_B08AF0(*v91) )
          goto LABEL_334;
        if ( (*(_BYTE *)(v159 + 34) & 0xF0) == 0xF0 )
        {
          if ( (unsigned int)sub_FA77D0(v159) != 4 )
          {
            if ( (*(_BYTE *)(v159 + 34) & 0xF0) == 0xF0 )
            {
              v162 = sub_FA77D0(v159);
            }
            else
            {
              LOBYTE(v162) = *(_BYTE *)(v159 + 34) >> 4;
LABEL_239:
              v162 = (unsigned __int8)v162;
            }
            if ( v162 == 5 )
              v92 = v159;
            goto LABEL_242;
          }
        }
        else
        {
          LOBYTE(v162) = *(_BYTE *)(v159 + 34) >> 4;
          if ( (_BYTE)v162 != 4 )
            goto LABEL_239;
        }
        v92 = v159;
LABEL_242:
        v163 = sub_B065C0(v159, a1[31], v160, v161);
        if ( v54 < v163 )
          v54 = v163;
        v93 = ++v91 == (__int64 *)v90;
        if ( (unsigned __int64)v91 < v90 )
          goto LABEL_95;
LABEL_245:
        if ( v93 )
          goto LABEL_98;
        v89 = *(_QWORD *)v90;
        v164 = (__int64 *)v90;
        if ( *(_WORD *)(*(_QWORD *)v90 + 36LL) != 126 )
        {
          while ( 1 )
          {
            if ( v91 == ++v164 )
              goto LABEL_98;
            v89 = *v164;
            if ( *(_WORD *)(*v164 + 36) == 126 )
              goto LABEL_235;
          }
        }
      }
    }
    if ( (__int64 *)v90 != ++v94 )
      continue;
    break;
  }
LABEL_98:
  v81 = v265;
  if ( !v80 )
    goto LABEL_67;
  if ( !v92 || v54 == v265 )
  {
    if ( !v92 )
    {
      v84 = v261;
      goto LABEL_441;
    }
LABEL_67:
    if ( v81 <= v54 )
      goto LABEL_334;
    v55 = v263;
    v56 = a1[31];
    goto LABEL_69;
  }
  if ( v265 && v54 )
  {
LABEL_103:
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v92 + 24), 0xB9Eu, 0);
    LODWORD(v282) = sub_A97FF0(a1[31], v81);
    v95 = sub_16CF160((__int64)&ptr, (unsigned int *)&v282);
    v281 = sub_A97FF0(a1[31], v54);
    sub_16CF160(v95, &v281);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v80 + 24), 0x70u, 0);
    sub_15F7200(&ptr);
    goto LABEL_67;
  }
  v188 = a1[31];
  if ( (*(_BYTE *)(v261 + 28) & 0x7Fu) - 26 > 0x1A )
  {
    v189 = sub_A7AC20(v188, v261, v89, v86, v87, v88);
    v188 = a1[31];
  }
  else
  {
    v189 = *(_QWORD *)(v261 + 48);
  }
  v190 = (__int64 *)(v189 & 0xFFFFFFFFFFFFFFF0LL);
  v191 = *(_QWORD *)(v189 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v265 )
  {
LABEL_332:
    sub_A97D20(v188, v191);
    v54 = v192;
  }
  else
  {
    sub_A97D20(v188, v191);
    v81 = v220;
    if ( !v54 )
    {
      v191 = *v190;
      v188 = a1[31];
      goto LABEL_332;
    }
  }
  if ( v54 != v81 )
    goto LABEL_103;
LABEL_334:
  if ( !v272 )
    sub_B8C550(v261);
}
