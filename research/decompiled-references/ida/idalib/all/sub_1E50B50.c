__int64 __fastcall sub_1E50B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v8; // r12
  const __m128i *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // r13
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdi
  _BYTE *v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  _BYTE *v37; // rdx
  _BYTE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  unsigned __int64 v41; // rdi
  void **v42; // r13
  void **v43; // r12
  __int64 v44; // r15
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // r14
  char v48; // dl
  char *v49; // rsi
  __int64 v50; // rdi
  unsigned __int64 *v51; // rcx
  char *v52; // rax
  char *v53; // rsi
  char *v54; // rax
  char *v55; // rcx
  int v56; // r14d
  __int64 *v57; // rbx
  __int64 *v58; // r12
  __int64 v59; // rbp
  __int64 v60; // r14
  __int64 *v61; // r15
  __int64 v62; // r13
  unsigned __int8 *v63; // r15
  unsigned __int8 *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rbp
  int v68; // r13d
  unsigned __int8 *v69; // r14
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  __int64 v76; // r14
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbp
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r14
  unsigned __int8 *v88; // rbp
  _BYTE *v89; // rcx
  __int64 v90; // rax
  int v91; // ebp
  __int64 v92; // r15
  unsigned __int8 *v93; // rbp
  unsigned __int8 *v94; // rdx
  __int64 v95; // rax
  char v96; // al
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r13
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned __int8 *v106; // r15
  _BYTE *v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // r14
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rsi
  unsigned __int64 v117; // rdi
  __int64 v118; // rdx
  int v119; // eax
  unsigned __int8 *v120; // rax
  __int64 v121; // rdx
  int v122; // eax
  __int64 v123; // r15
  unsigned __int64 v124; // rdi
  __int64 v125; // r15
  unsigned __int64 v126; // rdi
  unsigned __int8 *v127; // rbp
  __int64 v128; // r14
  unsigned __int8 *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rdx
  int v132; // eax
  unsigned __int8 *v133; // rax
  __int64 v134; // rsi
  int v135; // eax
  __int64 v136; // rbx
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // rbx
  void *v143; // rdi
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rsi
  __int64 v147; // rax
  __int64 v148; // rbx
  void *v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // r14
  __int64 v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r15
  unsigned __int8 *v159; // r14
  _BYTE *v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rbp
  __int64 v167; // rbx
  void *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // r8
  __int64 v172; // rax
  __int64 v173; // r12
  __int64 v174; // r15
  __int64 v175; // rbx
  __int64 v176; // r13
  void *v177; // rdi
  __int64 v178; // rbx
  __int64 v179; // rdx
  int v180; // eax
  __int64 v181; // rdx
  int v182; // eax
  __int64 v183; // rcx
  int v184; // eax
  __int64 v185; // rcx
  int v186; // eax
  __int64 v187; // rax
  __int64 v188; // r12
  __int64 v189; // r15
  __int64 v190; // r12
  void *v191; // rdi
  __int64 v192; // rax
  __int64 v193; // r14
  __int64 v194; // rdx
  __int64 v195; // r14
  __int64 v196; // rbx
  void *v197; // rdi
  __int64 v198; // rax
  __int64 v199; // r15
  __int64 v200; // rcx
  __int64 v201; // r15
  unsigned __int8 *v202; // r12
  __int64 v203; // rbp
  __int64 v204; // rbx
  void *v205; // rdi
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rbp
  __int64 v210; // r12
  __int64 v211; // rbx
  void *v212; // rdi
  __m128i v213; // [rsp+0h] [rbp-298h] BYREF
  __int64 *v214; // [rsp+10h] [rbp-288h]
  void **p_ptr; // [rsp+18h] [rbp-280h]
  void **v216; // [rsp+20h] [rbp-278h]
  void **v217; // [rsp+28h] [rbp-270h]
  unsigned __int8 *v218; // [rsp+30h] [rbp-268h]
  __int64 v219; // [rsp+38h] [rbp-260h]
  unsigned int v220; // [rsp+40h] [rbp-258h]
  int v221; // [rsp+44h] [rbp-254h]
  _BYTE *v222; // [rsp+48h] [rbp-250h]
  __int64 v223; // [rsp+58h] [rbp-240h] BYREF
  void *v224; // [rsp+60h] [rbp-238h] BYREF
  __int64 v225; // [rsp+68h] [rbp-230h]
  _BYTE v226[16]; // [rsp+70h] [rbp-228h] BYREF
  void *ptr; // [rsp+80h] [rbp-218h] BYREF
  __int64 v228; // [rsp+88h] [rbp-210h]
  _BYTE v229[32]; // [rsp+90h] [rbp-208h] BYREF
  void *v230; // [rsp+B0h] [rbp-1E8h] BYREF
  __int64 v231; // [rsp+B8h] [rbp-1E0h]
  int v232; // [rsp+C0h] [rbp-1D8h]
  char v233; // [rsp+C4h] [rbp-1D4h]
  __int64 v234; // [rsp+C8h] [rbp-1D0h] BYREF
  void *v235; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v236; // [rsp+F8h] [rbp-1A0h]
  _BYTE v237[64]; // [rsp+100h] [rbp-198h] BYREF
  __int64 v238; // [rsp+140h] [rbp-158h] BYREF
  int v239; // [rsp+148h] [rbp-150h]
  int v240; // [rsp+14Ch] [rbp-14Ch]
  __int64 v241; // [rsp+150h] [rbp-148h]
  char v242; // [rsp+158h] [rbp-140h]
  unsigned __int8 *v243; // [rsp+160h] [rbp-138h]
  __int64 v244; // [rsp+168h] [rbp-130h]
  __int64 v245; // [rsp+1A8h] [rbp-F0h]
  int v246; // [rsp+1B0h] [rbp-E8h]
  char v247; // [rsp+1B8h] [rbp-E0h]
  __int64 v248; // [rsp+1C0h] [rbp-D8h]
  __int64 v249; // [rsp+1D0h] [rbp-C8h] BYREF
  int v250; // [rsp+1D8h] [rbp-C0h]
  int v251; // [rsp+1DCh] [rbp-BCh]
  __int64 v252; // [rsp+1E0h] [rbp-B8h]
  char v253; // [rsp+1E8h] [rbp-B0h]
  unsigned __int8 *v254; // [rsp+1F0h] [rbp-A8h]
  __int64 v255; // [rsp+1F8h] [rbp-A0h]
  __int64 v256; // [rsp+238h] [rbp-60h]
  int v257; // [rsp+240h] [rbp-58h]
  char v258; // [rsp+248h] [rbp-50h]
  __int64 v259; // [rsp+250h] [rbp-48h]

  v6 = 0;
  if ( !a5 )
    return v6;
  v219 = a5;
  v217 = &v235;
  v221 = a3;
  v220 = a2;
  v218 = (unsigned __int8 *)a1;
  v216 = (void **)a4;
  v235 = v237;
  v236 = 0x400000000LL;
  v8 = sub_15F25A0(a1, a2, a3, a4, a5, a6);
  if ( !v8 )
    goto LABEL_88;
  v222 = v237;
  v9 = (const __m128i *)v216;
  p_ptr = &v216[2 * v219];
  if ( p_ptr == v216 )
    goto LABEL_53;
  do
  {
    v10 = *(__int64 **)(v8 + 1480);
    v11 = 8LL * *(unsigned int *)(v8 + 1488);
    v214 = &v10[(unsigned __int64)v11 / 8];
    v12 = v11 >> 3;
    v13 = v11 >> 5;
    if ( !v13 )
      goto LABEL_76;
    v213.m128i_i64[0] = (__int64)&v10[4 * v13];
    do
    {
      if ( !v9->m128i_i64[0] )
        goto LABEL_22;
      v18 = *v10;
      v19 = v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v20 = v9->m128i_i64[0] & 4;
      if ( !(_DWORD)v20 )
      {
        if ( v19 && (*(_BYTE *)(v18 + 28) & 0x7F) == 0x43 && *(_QWORD *)(v18 + 48) == v19 )
          goto LABEL_48;
LABEL_10:
        v14 = v10 + 1;
        v15 = v10[1];
        if ( !(_DWORD)v20 )
          goto LABEL_11;
        goto LABEL_31;
      }
      if ( !v19 || !v18 )
        goto LABEL_10;
      if ( v18 == v19 )
        goto LABEL_48;
      v21 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 32LL))(v19);
      if ( v21 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18) )
        goto LABEL_48;
      v14 = v10 + 1;
      v15 = v10[1];
      if ( !v9->m128i_i64[0] )
        goto LABEL_22;
      v20 = v9->m128i_i64[0] & 4;
      v19 = v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v20 )
      {
LABEL_11:
        if ( v19 && (*(_BYTE *)(v15 + 28) & 0x7F) == 0x43 && *(_QWORD *)(v15 + 48) == v19 )
        {
LABEL_47:
          v10 = v14;
          goto LABEL_48;
        }
LABEL_14:
        v14 = v10 + 2;
        v16 = v10[2];
        if ( !v20 )
          goto LABEL_15;
        goto LABEL_37;
      }
LABEL_31:
      if ( !v19 || !v15 )
        goto LABEL_14;
      if ( v15 == v19 )
        goto LABEL_47;
      v22 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 32LL))(v19);
      if ( v22 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) )
        goto LABEL_47;
      v14 = v10 + 2;
      v16 = v10[2];
      if ( !v9->m128i_i64[0] )
        goto LABEL_22;
      v19 = v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v20 = v9->m128i_i64[0] & 4;
      if ( !v20 )
      {
LABEL_15:
        if ( v19 && (*(_BYTE *)(v16 + 28) & 0x7F) == 0x43 && *(_QWORD *)(v16 + 48) == v19 )
          goto LABEL_47;
LABEL_18:
        v14 = v10 + 3;
        v17 = v10[3];
        if ( v20 )
          goto LABEL_43;
LABEL_19:
        if ( v19 && (*(_BYTE *)(v17 + 28) & 0x7F) == 0x43 && *(_QWORD *)(v17 + 48) == v19 )
          goto LABEL_47;
        goto LABEL_22;
      }
LABEL_37:
      if ( !v19 || !v16 )
        goto LABEL_18;
      if ( v16 == v19 )
        goto LABEL_47;
      v23 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 32LL))(v19);
      if ( v23 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16) )
        goto LABEL_47;
      v14 = v10 + 3;
      v17 = v10[3];
      if ( v9->m128i_i64[0] )
      {
        v19 = v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v9->m128i_i64[0] & 4) != 0 )
        {
LABEL_43:
          if ( v19 )
          {
            if ( v17 )
            {
              if ( v17 == v19 )
                goto LABEL_47;
              v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 32LL))(v19);
              if ( v24 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17) )
                goto LABEL_47;
            }
          }
          goto LABEL_22;
        }
        goto LABEL_19;
      }
LABEL_22:
      v10 += 4;
    }
    while ( v10 != (__int64 *)v213.m128i_i64[0] );
    v12 = v214 - v10;
LABEL_76:
    if ( v12 == 2 )
    {
      v39 = v9->m128i_i64[0];
      goto LABEL_194;
    }
    if ( v12 != 3 )
    {
      if ( v12 == 1 )
      {
        v39 = v9->m128i_i64[0];
        goto LABEL_80;
      }
      goto LABEL_52;
    }
    v39 = v9->m128i_i64[0];
    if ( v9->m128i_i64[0] )
    {
      v125 = *v10;
      v126 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 & 4) == 0 )
      {
        if ( !v126 || (*(_BYTE *)(v125 + 28) & 0x7F) != 0x43 || *(_QWORD *)(v125 + 48) != v126 )
          goto LABEL_205;
LABEL_48:
        if ( v214 != v10 )
        {
          v25 = (unsigned int)v236;
          v26 = _mm_loadu_si128(v9);
          v27 = (unsigned int)v236 + 1LL;
          if ( v27 > HIDWORD(v236) )
          {
            v213 = v26;
            sub_2237220(v217, v222, v27, 16);
            v25 = (unsigned int)v236;
            v26 = _mm_load_si128(&v213);
          }
          *((__m128i *)v235 + v25) = v26;
          LODWORD(v236) = v236 + 1;
        }
        goto LABEL_52;
      }
      if ( v126 && v125 )
      {
        if ( v125 != v126 )
        {
          v178 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v126 + 32LL))(v126);
          if ( v178 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v125 + 32LL))(v125) )
          {
            v39 = v9->m128i_i64[0];
            goto LABEL_205;
          }
        }
        goto LABEL_48;
      }
LABEL_205:
      ++v10;
LABEL_194:
      if ( !v39 )
        goto LABEL_52;
      v123 = *v10;
      v124 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 & 4) != 0 )
      {
        if ( v124 && v123 )
        {
          if ( v123 == v124 )
            goto LABEL_48;
          v137 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v124 + 32LL))(v124);
          if ( v137 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v123 + 32LL))(v123) )
            goto LABEL_48;
          v39 = v9->m128i_i64[0];
        }
      }
      else if ( v124 && (*(_BYTE *)(v123 + 28) & 0x7F) == 0x43 && *(_QWORD *)(v123 + 48) == v124 )
      {
        goto LABEL_48;
      }
    }
    else
    {
      ++v10;
    }
    ++v10;
LABEL_80:
    if ( v39 )
    {
      v40 = *v10;
      v41 = v39 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 & 4) != 0 )
      {
        if ( !v41 )
          goto LABEL_52;
        if ( !v40 )
          goto LABEL_52;
        if ( v40 != v41 )
        {
          v136 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v41 + 32LL))(v41);
          if ( v136 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40) )
            goto LABEL_52;
        }
      }
      else if ( !v41 || (*(_BYTE *)(v40 + 28) & 0x7F) != 0x43 || *(_QWORD *)(v40 + 48) != v41 )
      {
        goto LABEL_52;
      }
      goto LABEL_48;
    }
LABEL_52:
    ++v9;
  }
  while ( p_ptr != (void **)v9 );
LABEL_53:
  v28 = v236;
  if ( (_DWORD)v236 )
  {
    v216 = (void **)v235;
    goto LABEL_89;
  }
  v29 = *((_DWORD *)v218 + 10);
  if ( !v29 )
  {
LABEL_219:
    *(_BYTE *)(v8 + 1465) = 1;
    v6 = 0;
    goto LABEL_143;
  }
  v30 = *((_QWORD *)v218 + 4);
  v31 = v30 + 8LL * (unsigned int)(v29 - 1);
  while ( 2 )
  {
    v32 = *(_BYTE **)(*(_QWORD *)v31 + 360LL);
    v33 = 8LL * *(unsigned int *)(*(_QWORD *)v31 + 368LL);
    v34 = &v32[v33];
    v35 = v33 >> 3;
    v36 = v33 >> 5;
    if ( !v36 )
    {
      v38 = *(_BYTE **)(*(_QWORD *)v31 + 360LL);
LABEL_69:
      if ( v35 != 2 )
      {
        if ( v35 != 3 )
        {
          if ( v35 != 1 )
            goto LABEL_72;
          goto LABEL_191;
        }
        if ( v38[1] )
          goto LABEL_87;
        v38 += 8;
      }
      if ( v38[1] )
        goto LABEL_87;
      v38 += 8;
LABEL_191:
      if ( !v38[1] )
        goto LABEL_72;
      goto LABEL_87;
    }
    if ( v32[1] )
    {
      v38 = *(_BYTE **)(*(_QWORD *)v31 + 360LL);
      goto LABEL_87;
    }
    if ( v32[9] )
    {
      v38 = v32 + 8;
      goto LABEL_87;
    }
    if ( v32[17] )
    {
      v38 = v32 + 16;
LABEL_87:
      if ( v34 != v38 )
        goto LABEL_88;
      goto LABEL_72;
    }
    v37 = &v32[32 * v36];
    v38 = v32 + 24;
    if ( v32[25] )
      goto LABEL_87;
LABEL_67:
    v38 = v32 + 32;
    if ( v37 == v32 + 32 )
    {
      v35 = (v34 - v38) >> 3;
      goto LABEL_69;
    }
    if ( v32[33] )
      goto LABEL_87;
    if ( v32[41] )
    {
      v38 = v32 + 40;
      goto LABEL_87;
    }
    if ( v32[49] )
    {
      if ( v34 != v32 + 48 )
        goto LABEL_88;
LABEL_72:
      if ( v8 == *(_QWORD *)v31 || v30 == v31 )
        goto LABEL_219;
      v31 -= 8;
      continue;
    }
    break;
  }
  if ( !v32[57] )
  {
    v32 += 32;
    goto LABEL_67;
  }
  if ( v34 == v32 + 56 )
    goto LABEL_72;
LABEL_88:
  v28 = v219;
LABEL_89:
  v42 = &v224;
  v231 = 4;
  v232 = 0;
  v224 = v226;
  v225 = 0x400000000LL;
  v228 = 0x400000000LL;
  p_ptr = &ptr;
  ptr = v229;
  v230 = &v234;
  v233 = 1;
  if ( v28 )
  {
    v43 = v216;
    v44 = (__int64)&v216[2 * (unsigned int)(v28 - 1) + 2];
    do
    {
      v45 = (unsigned __int64)*v43;
      if ( *v43 )
      {
        v46 = v45 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v45 & 4) != 0 )
        {
          if ( !v46 )
            goto LABEL_111;
          v76 = *(_QWORD *)(v46 + 40);
          if ( (v76 & 7) != 0 )
            goto LABEL_111;
          v47 = v76 & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          if ( !v46 )
            goto LABEL_111;
          v47 = sub_F5E320(v46);
        }
        if ( v47 )
        {
          v48 = v233;
          if ( v233 )
          {
            v49 = (char *)v230;
            v50 = 8LL * HIDWORD(v231);
            v51 = (unsigned __int64 *)((char *)v230 + v50);
            if ( v230 != (char *)v230 + v50 )
            {
              v52 = (char *)v230;
              if ( v47 == *(_QWORD *)v230 )
              {
LABEL_151:
                v48 = 0;
LABEL_152:
                v53 = &v49[8 * HIDWORD(v231)];
                goto LABEL_105;
              }
              while ( 1 )
              {
                v52 += 8;
                if ( v51 == (unsigned __int64 *)v52 )
                  break;
                if ( v47 == *(_QWORD *)v52 )
                  goto LABEL_151;
              }
            }
            if ( HIDWORD(v231) < (unsigned int)v231 )
            {
              ++HIDWORD(v231);
              *v51 = v47;
              v52 = (char *)v230 + v50;
              v53 = (char *)v230 + 8 * HIDWORD(v231);
              goto LABEL_105;
            }
          }
          v52 = (char *)sub_2236760(&v230, v47);
          v49 = (char *)v230;
          if ( v233 )
            goto LABEL_152;
          v53 = (char *)v230 + 8 * (unsigned int)v231;
LABEL_105:
          if ( v52 != v53 && *(_QWORD *)v52 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v54 = v52 + 8;
            do
            {
              v55 = v54;
              if ( v53 == v54 )
                break;
              v54 += 8;
            }
            while ( *(_QWORD *)v55 >= 0xFFFFFFFFFFFFFFFELL );
          }
          if ( v48 )
          {
            v77 = (unsigned int)v228;
            v78 = (unsigned int)v228 + 1LL;
            if ( v78 > HIDWORD(v228) )
            {
              sub_2237220(p_ptr, v229, v78, 8);
              v77 = (unsigned int)v228;
            }
            *((_QWORD *)ptr + v77) = v47;
            LODWORD(v228) = v228 + 1;
          }
        }
      }
LABEL_111:
      v56 = *((_DWORD *)v43 + 2);
      if ( v56 )
      {
        v74 = (unsigned int)v225;
        v75 = (unsigned int)v225 + 1LL;
        if ( v75 > HIDWORD(v225) )
        {
          sub_2237220(&v224, v226, v75, 4);
          v74 = (unsigned int)v225;
        }
        *((_DWORD *)v224 + v74) = v56;
        LODWORD(v225) = v225 + 1;
      }
      v43 += 2;
    }
    while ( v43 != (void **)v44 );
  }
  v57 = &v249;
  sub_168B9F0((__int64)&v249, (__int64 *)v218 + 1, v220, 0x14EFu, 0);
  if ( v258 )
  {
    v127 = v254;
    v128 = v221;
    if ( !v254 )
    {
      v181 = v255;
      v182 = *(_DWORD *)(v255 + 14976);
      if ( v182 )
      {
        v187 = (unsigned int)(v182 - 1);
        *(_DWORD *)(v255 + 14976) = v187;
        v127 = *(unsigned __int8 **)(v181 + 8 * v187 + 14848);
        v188 = *((unsigned int *)v127 + 134);
        *v127 = 0;
        v189 = *((_QWORD *)v127 + 66);
        *((_DWORD *)v127 + 106) = 0;
        v190 = v189 + (v188 << 6);
        while ( v189 != v190 )
        {
          while ( 1 )
          {
            v190 -= 64;
            v191 = *(void **)(v190 + 24);
            if ( v191 == (void *)(v190 + 40) )
              break;
            operator delete(v191);
            if ( v189 == v190 )
              goto LABEL_287;
          }
        }
LABEL_287:
        *((_DWORD *)v127 + 134) = 0;
      }
      else
      {
        v127 = (unsigned __int8 *)operator new(0x3A0u);
        *v127 = 0;
        *((_QWORD *)v127 + 12) = v127 + 112;
        *((_QWORD *)v127 + 16) = v127 + 144;
        *((_QWORD *)v127 + 20) = v127 + 176;
        *((_QWORD *)v127 + 24) = v127 + 208;
        *((_QWORD *)v127 + 28) = v127 + 240;
        *((_QWORD *)v127 + 32) = v127 + 272;
        *((_QWORD *)v127 + 36) = v127 + 304;
        *((_QWORD *)v127 + 40) = v127 + 336;
        *((_QWORD *)v127 + 44) = v127 + 368;
        *((_QWORD *)v127 + 48) = v127 + 400;
        *((_QWORD *)v127 + 52) = v127 + 432;
        *((_QWORD *)v127 + 13) = 0;
        v127[112] = 0;
        *((_QWORD *)v127 + 17) = 0;
        v127[144] = 0;
        *((_QWORD *)v127 + 21) = 0;
        v127[176] = 0;
        *((_QWORD *)v127 + 25) = 0;
        v127[208] = 0;
        *((_QWORD *)v127 + 29) = 0;
        v127[240] = 0;
        *((_QWORD *)v127 + 33) = 0;
        v127[272] = 0;
        *((_QWORD *)v127 + 37) = 0;
        v127[304] = 0;
        *((_QWORD *)v127 + 41) = 0;
        v127[336] = 0;
        *((_QWORD *)v127 + 45) = 0;
        v127[368] = 0;
        *((_QWORD *)v127 + 49) = 0;
        v127[400] = 0;
        *((_QWORD *)v127 + 53) = 0x800000000LL;
        *((_QWORD *)v127 + 66) = v127 + 544;
        *((_QWORD *)v127 + 67) = 0x600000000LL;
      }
      v254 = v127;
    }
    v58 = &v238;
    v127[*v127 + 1] = 2;
    v129 = v254;
    v130 = *v254;
    *v254 = v130 + 1;
    *(_QWORD *)&v129[8 * v130 + 16] = v128;
  }
  else
  {
    v58 = &v238;
    if ( !BYTE4(v259) )
      goto LABEL_115;
    v81 = sub_168B9E0(&v249);
    v84 = v252;
    if ( v252 )
      v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v252 + 32LL))(v252);
    v58 = &v238;
    v238 = v84;
    v85 = sub_1587BC0(v81, &v238, v79, v80, v82, v83);
    v86 = v221;
    v87 = *v85 + 32LL * (unsigned int)v259;
    v88 = *(unsigned __int8 **)(v87 + 8);
    if ( !v88 )
    {
      v183 = *(_QWORD *)(v87 + 16);
      v184 = *(_DWORD *)(v183 + 14976);
      if ( v184 )
      {
        v198 = (unsigned int)(v184 - 1);
        *(_DWORD *)(v183 + 14976) = v198;
        v88 = *(unsigned __int8 **)(v183 + 8 * v198 + 14848);
        v199 = *((unsigned int *)v88 + 134);
        *v88 = 0;
        v200 = *((_QWORD *)v88 + 66);
        *((_DWORD *)v88 + 106) = 0;
        v201 = v200 + (v199 << 6);
        if ( v200 != v201 )
        {
          v213.m128i_i64[0] = (__int64)&v238;
          v202 = v88;
          v203 = v86;
          v214 = &v249;
          v204 = v200;
          do
          {
            while ( 1 )
            {
              v201 -= 64;
              v205 = *(void **)(v201 + 24);
              if ( v205 == (void *)(v201 + 40) )
                break;
              operator delete(v205);
              if ( v204 == v201 )
                goto LABEL_301;
            }
          }
          while ( v204 != v201 );
LABEL_301:
          v86 = v203;
          v57 = v214;
          v88 = v202;
          v58 = (__int64 *)v213.m128i_i64[0];
        }
        *((_DWORD *)v88 + 134) = 0;
      }
      else
      {
        v213.m128i_i64[0] = v221;
        v88 = (unsigned __int8 *)operator new(0x3A0u);
        *v88 = 0;
        *((_QWORD *)v88 + 12) = v88 + 112;
        *((_QWORD *)v88 + 16) = v88 + 144;
        *((_QWORD *)v88 + 20) = v88 + 176;
        *((_QWORD *)v88 + 24) = v88 + 208;
        *((_QWORD *)v88 + 28) = v88 + 240;
        *((_QWORD *)v88 + 32) = v88 + 272;
        *((_QWORD *)v88 + 36) = v88 + 304;
        *((_QWORD *)v88 + 40) = v88 + 336;
        *((_QWORD *)v88 + 44) = v88 + 368;
        *((_QWORD *)v88 + 48) = v88 + 400;
        *((_QWORD *)v88 + 52) = v88 + 432;
        *((_QWORD *)v88 + 13) = 0;
        v88[112] = 0;
        *((_QWORD *)v88 + 17) = 0;
        v88[144] = 0;
        *((_QWORD *)v88 + 21) = 0;
        v88[176] = 0;
        *((_QWORD *)v88 + 25) = 0;
        v88[208] = 0;
        *((_QWORD *)v88 + 29) = 0;
        v88[240] = 0;
        *((_QWORD *)v88 + 33) = 0;
        v88[272] = 0;
        *((_QWORD *)v88 + 37) = 0;
        v88[304] = 0;
        *((_QWORD *)v88 + 41) = 0;
        v88[336] = 0;
        *((_QWORD *)v88 + 45) = 0;
        v88[368] = 0;
        *((_QWORD *)v88 + 49) = 0;
        v88[400] = 0;
        *((_QWORD *)v88 + 53) = 0x800000000LL;
        v86 = v213.m128i_i64[0];
        *((_QWORD *)v88 + 66) = v88 + 544;
        *((_QWORD *)v88 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v87 + 8) = v88;
    }
    v88[*v88 + 1] = 2;
    v89 = *(_BYTE **)(v87 + 8);
    v90 = (unsigned __int8)*v89;
    *v89 = v90 + 1;
    *(_QWORD *)&v89[8 * v90 + 16] = v86;
  }
  v91 = v228;
  if ( v258 )
  {
    v92 = (int)v228;
    v93 = v254;
    if ( !v254 )
    {
      v179 = v255;
      v180 = *(_DWORD *)(v255 + 14976);
      if ( v180 )
      {
        v192 = (unsigned int)(v180 - 1);
        *(_DWORD *)(v255 + 14976) = v192;
        v93 = *(unsigned __int8 **)(v179 + 8 * v192 + 14848);
        v193 = *((unsigned int *)v93 + 134);
        *v93 = 0;
        v194 = *((_QWORD *)v93 + 66);
        *((_DWORD *)v93 + 106) = 0;
        v195 = v194 + (v193 << 6);
        if ( v194 != v195 )
        {
          v213.m128i_i64[0] = (__int64)v57;
          v196 = v194;
          do
          {
            while ( 1 )
            {
              v195 -= 64;
              v197 = *(void **)(v195 + 24);
              if ( v197 == (void *)(v195 + 40) )
                break;
              operator delete(v197);
              if ( v196 == v195 )
                goto LABEL_292;
            }
          }
          while ( v196 != v195 );
LABEL_292:
          v57 = (__int64 *)v213.m128i_i64[0];
        }
        *((_DWORD *)v93 + 134) = 0;
      }
      else
      {
        v93 = (unsigned __int8 *)operator new(0x3A0u);
        *v93 = 0;
        *((_QWORD *)v93 + 12) = v93 + 112;
        *((_QWORD *)v93 + 16) = v93 + 144;
        *((_QWORD *)v93 + 20) = v93 + 176;
        *((_QWORD *)v93 + 24) = v93 + 208;
        *((_QWORD *)v93 + 28) = v93 + 240;
        *((_QWORD *)v93 + 32) = v93 + 272;
        *((_QWORD *)v93 + 36) = v93 + 304;
        *((_QWORD *)v93 + 40) = v93 + 336;
        *((_QWORD *)v93 + 44) = v93 + 368;
        *((_QWORD *)v93 + 48) = v93 + 400;
        *((_QWORD *)v93 + 52) = v93 + 432;
        *((_QWORD *)v93 + 13) = 0;
        v93[112] = 0;
        *((_QWORD *)v93 + 17) = 0;
        v93[144] = 0;
        *((_QWORD *)v93 + 21) = 0;
        v93[176] = 0;
        *((_QWORD *)v93 + 25) = 0;
        v93[208] = 0;
        *((_QWORD *)v93 + 29) = 0;
        v93[240] = 0;
        *((_QWORD *)v93 + 33) = 0;
        v93[272] = 0;
        *((_QWORD *)v93 + 37) = 0;
        v93[304] = 0;
        *((_QWORD *)v93 + 41) = 0;
        v93[336] = 0;
        *((_QWORD *)v93 + 45) = 0;
        v93[368] = 0;
        *((_QWORD *)v93 + 49) = 0;
        v93[400] = 0;
        *((_QWORD *)v93 + 53) = 0x800000000LL;
        *((_QWORD *)v93 + 66) = v93 + 544;
        *((_QWORD *)v93 + 67) = 0x600000000LL;
      }
      v254 = v93;
    }
    v93[*v93 + 1] = 2;
    v94 = v254;
    v95 = *v254;
    *v254 = v95 + 1;
    *(_QWORD *)&v94[8 * v95 + 16] = v92;
    v96 = v258;
    goto LABEL_165;
  }
  if ( BYTE4(v259) )
  {
    v154 = sub_168B9E0(v57);
    v155 = v252;
    if ( v252 )
      v155 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v252 + 32LL))(v252);
    v238 = v155;
    v156 = sub_1587BC0(v154, v58, v150, v151, v152, v153);
    v157 = v91;
    v158 = *v156 + 32LL * (unsigned int)v259;
    v159 = *(unsigned __int8 **)(v158 + 8);
    if ( !v159 )
    {
      v185 = *(_QWORD *)(v158 + 16);
      v186 = *(_DWORD *)(v185 + 14976);
      if ( v186 )
      {
        v206 = (unsigned int)(v186 - 1);
        *(_DWORD *)(v185 + 14976) = v206;
        v159 = *(unsigned __int8 **)(v185 + 8 * v206 + 14848);
        v207 = *((unsigned int *)v159 + 134);
        *v159 = 0;
        v208 = *((_QWORD *)v159 + 66);
        *((_DWORD *)v159 + 106) = 0;
        v207 <<= 6;
        v209 = v208 + v207;
        if ( v208 != v208 + v207 )
        {
          v213.m128i_i64[0] = (__int64)v58;
          v210 = v157;
          v214 = v57;
          v211 = v208;
          do
          {
            while ( 1 )
            {
              v209 -= 64;
              v212 = *(void **)(v209 + 24);
              if ( v212 == (void *)(v209 + 40) )
                break;
              operator delete(v212);
              if ( v211 == v209 )
                goto LABEL_309;
            }
          }
          while ( v211 != v209 );
LABEL_309:
          v157 = v210;
          v57 = v214;
          v58 = (__int64 *)v213.m128i_i64[0];
        }
        *((_DWORD *)v159 + 134) = 0;
      }
      else
      {
        v213.m128i_i64[0] = v91;
        v159 = (unsigned __int8 *)operator new(0x3A0u);
        *v159 = 0;
        *((_QWORD *)v159 + 12) = v159 + 112;
        *((_QWORD *)v159 + 16) = v159 + 144;
        *((_QWORD *)v159 + 20) = v159 + 176;
        *((_QWORD *)v159 + 24) = v159 + 208;
        *((_QWORD *)v159 + 28) = v159 + 240;
        *((_QWORD *)v159 + 32) = v159 + 272;
        *((_QWORD *)v159 + 36) = v159 + 304;
        *((_QWORD *)v159 + 40) = v159 + 336;
        *((_QWORD *)v159 + 44) = v159 + 368;
        *((_QWORD *)v159 + 48) = v159 + 400;
        *((_QWORD *)v159 + 52) = v159 + 432;
        *((_QWORD *)v159 + 13) = 0;
        v159[112] = 0;
        *((_QWORD *)v159 + 17) = 0;
        v159[144] = 0;
        *((_QWORD *)v159 + 21) = 0;
        v159[176] = 0;
        *((_QWORD *)v159 + 25) = 0;
        v159[208] = 0;
        *((_QWORD *)v159 + 29) = 0;
        v159[240] = 0;
        *((_QWORD *)v159 + 33) = 0;
        v159[272] = 0;
        *((_QWORD *)v159 + 37) = 0;
        v159[304] = 0;
        *((_QWORD *)v159 + 41) = 0;
        v159[336] = 0;
        *((_QWORD *)v159 + 45) = 0;
        v159[368] = 0;
        *((_QWORD *)v159 + 49) = 0;
        v159[400] = 0;
        *((_QWORD *)v159 + 53) = 0x800000000LL;
        v157 = v213.m128i_i64[0];
        *((_QWORD *)v159 + 66) = v159 + 544;
        *((_QWORD *)v159 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v158 + 8) = v159;
    }
    v159[*v159 + 1] = 2;
    v160 = *(_BYTE **)(v158 + 8);
    v161 = (unsigned __int8)*v160;
    *v160 = v161 + 1;
    *(_QWORD *)&v160[8 * v161 + 16] = v157;
    v96 = v258;
LABEL_165:
    v247 = 0;
    v238 = v249;
    v239 = v250;
    v240 = v251;
    v241 = v252;
    v242 = v253;
    if ( v96 )
    {
      sub_FC70F0((__int64)(v58 + 4), (__int64)(v57 + 4));
      v247 = 1;
      v245 = v256;
      v246 = v257;
    }
  }
  else
  {
LABEL_115:
    v247 = 0;
    v238 = v249;
    v239 = v250;
    v240 = v251;
    v241 = v252;
    v242 = v253;
  }
  v248 = v259;
  sub_15F7200(v57);
  v59 = (unsigned int)v228;
  if ( (unsigned int)v228 > 2uLL )
    v59 = 2;
  v60 = 0;
  if ( (_DWORD)v228 )
  {
    v216 = &v224;
    v213.m128i_i64[0] = (__int64)v58;
    v214 = v57;
    do
    {
      while ( 1 )
      {
        v61 = (__int64 *)((char *)ptr + 8 * v60);
        if ( !v247 )
          break;
        v62 = *v61;
        v63 = v243;
        if ( !v243 )
        {
          v121 = v244;
          v122 = *(_DWORD *)(v244 + 14976);
          if ( v122 )
          {
            v144 = (unsigned int)(v122 - 1);
            *(_DWORD *)(v244 + 14976) = v144;
            v63 = *(unsigned __int8 **)(v121 + 8 * v144 + 14848);
            v145 = *((unsigned int *)v63 + 134);
            *v63 = 0;
            v146 = *((_QWORD *)v63 + 66);
            *((_DWORD *)v63 + 106) = 0;
            v147 = v146 + (v145 << 6);
            if ( v146 != v147 )
            {
              v148 = v147;
              do
              {
                while ( 1 )
                {
                  v148 -= 64;
                  v149 = *(void **)(v148 + 24);
                  if ( v149 == (void *)(v148 + 40) )
                    break;
                  operator delete(v149);
                  if ( v146 == v148 )
                    goto LABEL_237;
                }
              }
              while ( v146 != v148 );
            }
LABEL_237:
            *((_DWORD *)v63 + 134) = 0;
          }
          else
          {
            v63 = (unsigned __int8 *)operator new(0x3A0u);
            *v63 = 0;
            *((_QWORD *)v63 + 12) = v63 + 112;
            *((_QWORD *)v63 + 16) = v63 + 144;
            *((_QWORD *)v63 + 20) = v63 + 176;
            *((_QWORD *)v63 + 24) = v63 + 208;
            *((_QWORD *)v63 + 28) = v63 + 240;
            *((_QWORD *)v63 + 32) = v63 + 272;
            *((_QWORD *)v63 + 36) = v63 + 304;
            *((_QWORD *)v63 + 40) = v63 + 336;
            *((_QWORD *)v63 + 44) = v63 + 368;
            *((_QWORD *)v63 + 48) = v63 + 400;
            *((_QWORD *)v63 + 52) = v63 + 432;
            *((_QWORD *)v63 + 13) = 0;
            v63[112] = 0;
            *((_QWORD *)v63 + 17) = 0;
            v63[144] = 0;
            *((_QWORD *)v63 + 21) = 0;
            v63[176] = 0;
            *((_QWORD *)v63 + 25) = 0;
            v63[208] = 0;
            *((_QWORD *)v63 + 29) = 0;
            v63[240] = 0;
            *((_QWORD *)v63 + 33) = 0;
            v63[272] = 0;
            *((_QWORD *)v63 + 37) = 0;
            v63[304] = 0;
            *((_QWORD *)v63 + 41) = 0;
            v63[336] = 0;
            *((_QWORD *)v63 + 45) = 0;
            v63[368] = 0;
            *((_QWORD *)v63 + 49) = 0;
            v63[400] = 0;
            *((_QWORD *)v63 + 53) = 0x800000000LL;
            *((_QWORD *)v63 + 66) = v63 + 544;
            *((_QWORD *)v63 + 67) = 0x600000000LL;
          }
          v243 = v63;
        }
        ++v60;
        v63[*v63 + 1] = 5;
        v64 = v243;
        v65 = *v243;
        *v243 = v65 + 1;
        *(_QWORD *)&v64[8 * v65 + 16] = v62;
        if ( v60 == v59 )
          goto LABEL_125;
      }
      if ( BYTE4(v248) )
      {
        v101 = sub_168B9E0(v213.m128i_i64[0]);
        v102 = v241;
        if ( v241 )
          v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v241 + 32LL))(v241);
        v249 = v102;
        v103 = sub_1587BC0(v101, v214, v97, v98, v99, v100);
        v104 = *v61;
        v105 = *v103 + 32LL * (unsigned int)v248;
        v106 = *(unsigned __int8 **)(v105 + 8);
        if ( !v106 )
        {
          v134 = *(_QWORD *)(v105 + 16);
          v135 = *(_DWORD *)(v134 + 14976);
          if ( v135 )
          {
            v169 = (unsigned int)(v135 - 1);
            *(_DWORD *)(v134 + 14976) = v169;
            v106 = *(unsigned __int8 **)(v134 + 8 * v169 + 14848);
            v170 = *((unsigned int *)v106 + 134);
            *v106 = 0;
            v171 = *((_QWORD *)v106 + 66);
            *((_DWORD *)v106 + 106) = 0;
            v172 = v171 + (v170 << 6);
            if ( v171 != v172 )
            {
              v218 = v106;
              v173 = v105;
              v174 = v104;
              v175 = v171;
              v176 = v172;
              do
              {
                while ( 1 )
                {
                  v176 -= 64;
                  v177 = *(void **)(v176 + 24);
                  if ( v177 == (void *)(v176 + 40) )
                    break;
                  operator delete(v177);
                  if ( v175 == v176 )
                    goto LABEL_257;
                }
              }
              while ( v175 != v176 );
LABEL_257:
              v104 = v174;
              v106 = v218;
              v105 = v173;
            }
            *((_DWORD *)v106 + 134) = 0;
          }
          else
          {
            v219 = v104;
            v218 = (unsigned __int8 *)v105;
            v106 = (unsigned __int8 *)operator new(0x3A0u);
            *v106 = 0;
            *((_QWORD *)v106 + 12) = v106 + 112;
            *((_QWORD *)v106 + 16) = v106 + 144;
            *((_QWORD *)v106 + 20) = v106 + 176;
            *((_QWORD *)v106 + 24) = v106 + 208;
            *((_QWORD *)v106 + 28) = v106 + 240;
            *((_QWORD *)v106 + 32) = v106 + 272;
            *((_QWORD *)v106 + 36) = v106 + 304;
            *((_QWORD *)v106 + 40) = v106 + 336;
            *((_QWORD *)v106 + 44) = v106 + 368;
            *((_QWORD *)v106 + 48) = v106 + 400;
            *((_QWORD *)v106 + 52) = v106 + 432;
            *((_QWORD *)v106 + 13) = 0;
            v106[112] = 0;
            *((_QWORD *)v106 + 17) = 0;
            v106[144] = 0;
            *((_QWORD *)v106 + 21) = 0;
            v106[176] = 0;
            *((_QWORD *)v106 + 25) = 0;
            v106[208] = 0;
            *((_QWORD *)v106 + 29) = 0;
            v106[240] = 0;
            *((_QWORD *)v106 + 33) = 0;
            v106[272] = 0;
            *((_QWORD *)v106 + 37) = 0;
            v106[304] = 0;
            *((_QWORD *)v106 + 41) = 0;
            v106[336] = 0;
            *((_QWORD *)v106 + 45) = 0;
            v106[368] = 0;
            *((_QWORD *)v106 + 49) = 0;
            v106[400] = 0;
            *((_QWORD *)v106 + 53) = 0x800000000LL;
            v105 = (__int64)v218;
            *((_QWORD *)v106 + 66) = v106 + 544;
            v104 = v219;
            *((_QWORD *)v106 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v105 + 8) = v106;
        }
        v106[*v106 + 1] = 5;
        v107 = *(_BYTE **)(v105 + 8);
        v108 = (unsigned __int8)*v107;
        *v107 = v108 + 1;
        *(_QWORD *)&v107[8 * v108 + 16] = v104;
      }
      ++v60;
    }
    while ( v60 != v59 );
LABEL_125:
    v42 = v216;
    v58 = (__int64 *)v213.m128i_i64[0];
    v57 = v214;
  }
  if ( !(_DWORD)v225 )
    goto LABEL_136;
  v66 = 0;
  v216 = v42;
  v67 = 4LL * (unsigned int)(v225 - 1) + 4;
  v213.m128i_i64[0] = (__int64)v58;
  v214 = &v223;
  while ( 2 )
  {
    while ( 1 )
    {
      v68 = *(_DWORD *)((char *)v224 + v66);
      if ( v247 )
        break;
      if ( BYTE4(v248) )
      {
        v113 = sub_168B9E0(v213.m128i_i64[0]);
        v114 = v241;
        if ( v241 )
          v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v241 + 32LL))(v241);
        v223 = v114;
        v115 = sub_1587BC0(v113, v214, v109, v110, v111, v112);
        v116 = *v115 + 32LL * (unsigned int)v248;
        v69 = *(unsigned __int8 **)(v116 + 8);
        if ( v69 )
        {
          v70 = *((unsigned int *)v69 + 106);
          v117 = *((unsigned int *)v69 + 107);
          v72 = v70 + 1;
        }
        else
        {
          v131 = *(_QWORD *)(v116 + 16);
          v132 = *(_DWORD *)(v131 + 14976);
          if ( v132 )
          {
            v162 = (unsigned int)(v132 - 1);
            *(_DWORD *)(v131 + 14976) = v162;
            v69 = *(unsigned __int8 **)(v131 + 8 * v162 + 14848);
            v163 = *((unsigned int *)v69 + 134);
            *v69 = 0;
            v164 = *((_QWORD *)v69 + 66);
            *((_DWORD *)v69 + 106) = 0;
            v165 = v164 + (v163 << 6);
            if ( v164 == v165 )
            {
              v72 = 1;
              v70 = 0;
            }
            else
            {
              v218 = (unsigned __int8 *)v67;
              v166 = v164;
              v219 = (__int64)v57;
              v167 = v165;
              do
              {
                while ( 1 )
                {
                  v167 -= 64;
                  v168 = *(void **)(v167 + 24);
                  if ( v168 == (void *)(v167 + 40) )
                    break;
                  operator delete(v168);
                  if ( v166 == v167 )
                    goto LABEL_249;
                }
              }
              while ( v166 != v167 );
LABEL_249:
              v70 = *((unsigned int *)v69 + 106);
              v67 = (__int64)v218;
              v57 = (__int64 *)v219;
              v72 = v70 + 1;
            }
            *((_DWORD *)v69 + 134) = 0;
            v117 = *((unsigned int *)v69 + 107);
          }
          else
          {
            v218 = (unsigned __int8 *)v116;
            v133 = (unsigned __int8 *)operator new(0x3A0u);
            v117 = 8;
            v72 = 1;
            v69 = v133;
            *v133 = 0;
            *((_QWORD *)v133 + 12) = v133 + 112;
            *((_QWORD *)v133 + 16) = v133 + 144;
            *((_QWORD *)v133 + 20) = v133 + 176;
            *((_QWORD *)v133 + 24) = v133 + 208;
            *((_QWORD *)v133 + 28) = v133 + 240;
            *((_QWORD *)v133 + 32) = v133 + 272;
            *((_QWORD *)v133 + 36) = v133 + 304;
            *((_QWORD *)v133 + 40) = v133 + 336;
            *((_QWORD *)v133 + 44) = v133 + 368;
            *((_QWORD *)v133 + 48) = v133 + 400;
            *((_QWORD *)v133 + 52) = v133 + 432;
            *((_QWORD *)v133 + 13) = 0;
            v133[112] = 0;
            *((_QWORD *)v133 + 17) = 0;
            v133[144] = 0;
            *((_QWORD *)v133 + 21) = 0;
            v133[176] = 0;
            *((_QWORD *)v133 + 25) = 0;
            v133[208] = 0;
            *((_QWORD *)v133 + 29) = 0;
            v133[240] = 0;
            *((_QWORD *)v133 + 33) = 0;
            v133[272] = 0;
            *((_QWORD *)v133 + 37) = 0;
            v133[304] = 0;
            *((_QWORD *)v133 + 41) = 0;
            v133[336] = 0;
            *((_QWORD *)v133 + 45) = 0;
            v133[368] = 0;
            *((_QWORD *)v133 + 49) = 0;
            v133[400] = 0;
            *((_QWORD *)v133 + 53) = 0x800000000LL;
            v116 = (__int64)v218;
            *((_QWORD *)v133 + 66) = v133 + 544;
            *((_QWORD *)v133 + 67) = 0x600000000LL;
            v70 = 0;
          }
          *(_QWORD *)(v116 + 8) = v69;
        }
        LODWORD(v249) = v68;
        HIDWORD(v249) = v68;
        LOBYTE(v250) = 1;
        if ( v72 > v117 )
          goto LABEL_176;
        goto LABEL_134;
      }
      v66 += 4;
      if ( v66 == v67 )
        goto LABEL_135;
    }
    v69 = v243;
    if ( v243 )
    {
      v70 = *((unsigned int *)v243 + 106);
      v71 = *((unsigned int *)v243 + 107);
      v72 = v70 + 1;
    }
    else
    {
      v118 = v244;
      v119 = *(_DWORD *)(v244 + 14976);
      if ( v119 )
      {
        v138 = (unsigned int)(v119 - 1);
        *(_DWORD *)(v244 + 14976) = v138;
        v69 = *(unsigned __int8 **)(v118 + 8 * v138 + 14848);
        v139 = *((unsigned int *)v69 + 134);
        *v69 = 0;
        v140 = *((_QWORD *)v69 + 66);
        *((_DWORD *)v69 + 106) = 0;
        v141 = v140 + (v139 << 6);
        if ( v140 == v141 )
        {
          v72 = 1;
          v70 = 0;
        }
        else
        {
          v218 = (unsigned __int8 *)v57;
          v142 = v141;
          do
          {
            while ( 1 )
            {
              v142 -= 64;
              v143 = *(void **)(v142 + 24);
              if ( v143 == (void *)(v142 + 40) )
                break;
              operator delete(v143);
              if ( v140 == v142 )
                goto LABEL_229;
            }
          }
          while ( v140 != v142 );
LABEL_229:
          v70 = *((unsigned int *)v69 + 106);
          v57 = (__int64 *)v218;
          v72 = v70 + 1;
        }
        *((_DWORD *)v69 + 134) = 0;
        v71 = *((unsigned int *)v69 + 107);
      }
      else
      {
        v120 = (unsigned __int8 *)operator new(0x3A0u);
        v71 = 8;
        v72 = 1;
        v69 = v120;
        *v120 = 0;
        *((_QWORD *)v120 + 12) = v120 + 112;
        *((_QWORD *)v120 + 16) = v120 + 144;
        *((_QWORD *)v120 + 20) = v120 + 176;
        *((_QWORD *)v120 + 24) = v120 + 208;
        *((_QWORD *)v120 + 28) = v120 + 240;
        *((_QWORD *)v120 + 32) = v120 + 272;
        *((_QWORD *)v120 + 36) = v120 + 304;
        *((_QWORD *)v120 + 40) = v120 + 336;
        *((_QWORD *)v120 + 44) = v120 + 368;
        *((_QWORD *)v120 + 48) = v120 + 400;
        *((_QWORD *)v120 + 52) = v120 + 432;
        *((_QWORD *)v120 + 13) = 0;
        v120[112] = 0;
        *((_QWORD *)v120 + 17) = 0;
        v120[144] = 0;
        *((_QWORD *)v120 + 21) = 0;
        v120[176] = 0;
        *((_QWORD *)v120 + 25) = 0;
        v120[208] = 0;
        *((_QWORD *)v120 + 29) = 0;
        v120[240] = 0;
        *((_QWORD *)v120 + 33) = 0;
        v120[272] = 0;
        *((_QWORD *)v120 + 37) = 0;
        v120[304] = 0;
        *((_QWORD *)v120 + 41) = 0;
        v120[336] = 0;
        *((_QWORD *)v120 + 45) = 0;
        v120[368] = 0;
        *((_QWORD *)v120 + 49) = 0;
        v120[400] = 0;
        *((_QWORD *)v120 + 53) = 0x800000000LL;
        *((_QWORD *)v120 + 66) = v120 + 544;
        *((_QWORD *)v120 + 67) = 0x600000000LL;
        v70 = 0;
      }
      v243 = v69;
    }
    LODWORD(v249) = v68;
    HIDWORD(v249) = v68;
    LOBYTE(v250) = 1;
    if ( v72 > v71 )
    {
LABEL_176:
      sub_2237220(v69 + 416, v69 + 432, v72, 12);
      v70 = *((unsigned int *)v69 + 106);
    }
LABEL_134:
    v66 += 4;
    v73 = *((_QWORD *)v69 + 52) + 12 * v70;
    *(_QWORD *)v73 = *v57;
    *(_DWORD *)(v73 + 8) = *((_DWORD *)v57 + 2);
    ++*((_DWORD *)v69 + 106);
    if ( v66 != v67 )
      continue;
    break;
  }
LABEL_135:
  v42 = v216;
  v58 = (__int64 *)v213.m128i_i64[0];
LABEL_136:
  sub_15F7200(v58);
  if ( !v233 )
    free(v230);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  if ( v224 != v42 + 2 )
    free(v224);
  v6 = 1;
LABEL_143:
  if ( v235 != v217 + 2 )
    free(v235);
  return v6;
}
