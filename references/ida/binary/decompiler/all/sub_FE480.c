__int64 __fastcall sub_FE480(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // ecx
  int v6; // eax
  __m128i *v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r13
  int v30; // eax
  int *v31; // r12
  __int64 v32; // rcx
  char v33; // al
  __int128 v34; // rdi
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  _DWORD *v38; // r9
  _DWORD *v39; // r8
  _DWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // edx
  __int64 v44; // r8
  int v45; // r14d
  int v46; // ebp
  __int64 v47; // rax
  int v48; // r12d
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r12
  __int64 v51; // rbp
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 *v55; // r13
  int v56; // r13d
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // r13
  __int64 v62; // rax
  int v63; // eax
  int v64; // r13d
  __int64 v65; // rdi
  int v66; // eax
  unsigned int v67; // r8d
  int v68; // ecx
  char v69; // al
  __int64 v70; // rax
  int v71; // r12d
  unsigned int v72; // r8d
  int v73; // ecx
  char v74; // al
  _DWORD *v75; // r9
  _DWORD *v76; // r8
  _DWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int **v80; // rax
  __int64 v81; // rdx
  _DWORD *v82; // rax
  __int64 v83; // rsi
  _DWORD *v84; // rdx
  __m128i *v85; // rbp
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  int *v89; // rsi
  _QWORD *v90; // r13
  __int64 v91; // rdx
  int *v92; // rax
  int *v93; // r12
  char *v94; // r8
  unsigned __int64 v95; // rsi
  int v96; // r12d
  unsigned __int64 v97; // rbp
  int v98; // r12d
  unsigned __int64 v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 *v104; // r12
  __int64 v105; // rdx
  __int64 *v106; // rdi
  __int64 *v107; // rdi
  int v108; // r13d
  __int64 v109; // r12
  _QWORD *v110; // r14
  int v111; // eax
  __int64 v112; // rdx
  _QWORD *v113; // r12
  __int64 v114; // rdi
  char v115; // al
  __int64 v116; // rdx
  int v117; // ebp
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned int v120; // r8d
  __int64 v121; // rsi
  int *v122; // rdi
  unsigned int v123; // r8d
  char v124; // al
  unsigned int v125; // edx
  char v126; // al
  unsigned int v127; // eax
  _QWORD *v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // esi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rdx
  char v135; // al
  unsigned int v136; // eax
  int *v137; // r13
  int *i; // rbp
  int v139; // r14d
  int *v140; // r13
  int *j; // rbp
  int v142; // r14d
  unsigned int v143; // eax
  int v144; // eax
  __int64 v145; // rax
  __int64 v146; // rax
  int v147; // eax
  unsigned int v148; // eax
  int v149; // r12d
  unsigned int v150; // edx
  char v151; // al
  int v152; // eax
  __int64 v153; // rax
  __int64 v154; // rax
  char v155; // al
  bool v156; // zf
  int v157; // eax
  unsigned int v158; // eax
  unsigned int v159; // eax
  int v160; // eax
  int v161; // eax
  int v162; // eax
  int v163; // eax
  int v164; // eax
  __m128i *v165; // [rsp+8h] [rbp-F0h]
  char v166; // [rsp+10h] [rbp-E8h]
  int v167; // [rsp+10h] [rbp-E8h]
  __int64 v168; // [rsp+18h] [rbp-E0h]
  unsigned int v169; // [rsp+18h] [rbp-E0h]
  int v170; // [rsp+18h] [rbp-E0h]
  int v171; // [rsp+18h] [rbp-E0h]
  int v172; // [rsp+18h] [rbp-E0h]
  int v173; // [rsp+18h] [rbp-E0h]
  int v174; // [rsp+18h] [rbp-E0h]
  bool v175; // [rsp+2Bh] [rbp-CDh]
  int v176; // [rsp+2Ch] [rbp-CCh]
  __int64 v177; // [rsp+30h] [rbp-C8h]
  char v178; // [rsp+3Bh] [rbp-BDh]
  int v179; // [rsp+3Ch] [rbp-BCh]
  int v180; // [rsp+40h] [rbp-B8h]
  unsigned int v181; // [rsp+40h] [rbp-B8h]
  int v182; // [rsp+40h] [rbp-B8h]
  unsigned int v183; // [rsp+40h] [rbp-B8h]
  int v184; // [rsp+40h] [rbp-B8h]
  unsigned int v185; // [rsp+40h] [rbp-B8h]
  int v186; // [rsp+40h] [rbp-B8h]
  unsigned int v187; // [rsp+40h] [rbp-B8h]
  __int64 v188; // [rsp+40h] [rbp-B8h]
  __int64 v189; // [rsp+48h] [rbp-B0h]
  int v190; // [rsp+48h] [rbp-B0h]
  __int64 v191; // [rsp+48h] [rbp-B0h]
  int v192; // [rsp+48h] [rbp-B0h]
  int v193; // [rsp+48h] [rbp-B0h]
  int v194; // [rsp+48h] [rbp-B0h]
  __int64 v195; // [rsp+50h] [rbp-A8h]
  unsigned int v196; // [rsp+50h] [rbp-A8h]
  unsigned int v197; // [rsp+50h] [rbp-A8h]
  int v198; // [rsp+58h] [rbp-A0h]
  int v199; // [rsp+58h] [rbp-A0h]
  int v200; // [rsp+58h] [rbp-A0h]
  int v201; // [rsp+58h] [rbp-A0h]
  int v202; // [rsp+58h] [rbp-A0h]
  unsigned int v203; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v204; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v205; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v206; // [rsp+5Ch] [rbp-9Ch]
  int v207; // [rsp+64h] [rbp-94h] BYREF
  unsigned __int64 v208; // [rsp+68h] [rbp-90h] BYREF
  __int64 v209[2]; // [rsp+70h] [rbp-88h] BYREF
  __m128i v210; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v211[24]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v212; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v213; // [rsp+B8h] [rbp-40h]

  v213 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v177 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 112LL);
  if ( (unsigned __int8)sub_11E120(*(_QWORD *)(a1 + 32), 0) )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD *)(v4 + 20);
  v6 = v5;
  v179 = v5;
  LOBYTE(v6) = v5 & 0x7F;
  if ( v6 == 96 )
    return 0;
  if ( v5 == 80 )
    return 0;
  if ( *(_DWORD *)(v4 + 284) )
    return 0;
  v176 = *(_DWORD *)(v4 + 280) & 4;
  if ( v176 )
  {
    if ( (v5 & 0xFFFFFFF0) != 0xD0 && (v5 & 0xFFFFFFF0) != 0x40 )
      return 0;
  }
  v178 = sub_2B4D40(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
  if ( v178 )
    return 0;
  if ( *(_QWORD *)v4 != -1 && (v179 & 0xFFFFFFF0) != 0x40 && (v179 & 0xFFFFFFF0) != 0xD0 )
  {
    v7 = *(__m128i **)(a1 + 48);
    v8 = *(_QWORD *)(v4 + 32);
    v210.m128i_i64[0] = *(_QWORD *)v4;
    *(_QWORD *)v211 = &v210;
    v9 = sub_FE1A0(v7, (unsigned __int64 *)&v210, (__int64 **)v211);
    v10 = *(_DWORD *)(v9 + 56);
    v11 = v9 + 24;
    if ( (int)v8 >= v10 )
    {
      if ( v10 != -1 && !v7[1].m128i_i8[0] )
        goto LABEL_17;
    }
    else
    {
      v7[1].m128i_i8[0] = 1;
    }
    *(_DWORD *)(v11 + 32) = v8;
LABEL_17:
    v178 = 1;
  }
  v12 = *(_DWORD *)(v4 + 20);
  if ( *(_DWORD *)(a1 + 136) != v12 )
    sub_D6290(a1 + 64, v12);
  v13 = *(_QWORD *)(a1 + 80);
  v14 = *(_QWORD *)(a1 + 256);
  *(_DWORD *)v211 = -1;
  if ( v13 >= v14 )
  {
    if ( v14 >= v13 )
      goto LABEL_29;
    v15 = *(_QWORD *)(a1 + 248);
    v16 = *(_QWORD *)(a1 + 264);
    if ( (unsigned __int64)v211 < v15 || (unsigned __int64)v211 >= v15 + 4 * v16 )
    {
      if ( v16 >= v13
        || (v145 = qvector_reserve(), *(_QWORD *)(a1 + 248) = v145, v15 = v145, v14 = *(_QWORD *)(a1 + 256), v14 < v13) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v15 + 4 * v14++) = -1;
          if ( v13 == v14 )
            break;
          v15 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    else if ( v16 >= v13
           || (v154 = qvector_reserve(), *(_QWORD *)(a1 + 248) = v154,
                                         v15 = v154,
                                         v14 = *(_QWORD *)(a1 + 256),
                                         v14 < v13) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v15 + 4 * v14++) = -1;
        if ( v13 == v14 )
          break;
        v15 = *(_QWORD *)(a1 + 248);
      }
    }
  }
  *(_QWORD *)(a1 + 256) = v13;
LABEL_29:
  v17 = *(_QWORD *)(a1 + 104);
  v18 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)v211 = -1;
  if ( v17 >= v18 )
  {
    if ( v18 >= v17 )
      goto LABEL_38;
    v19 = *(_QWORD *)(a1 + 272);
    v20 = *(_QWORD *)(a1 + 288);
    if ( (unsigned __int64)v211 < v19 || (unsigned __int64)v211 >= v19 + 4 * v20 )
    {
      if ( v20 >= v17
        || (v146 = qvector_reserve(), *(_QWORD *)(a1 + 272) = v146, v19 = v146, v18 = *(_QWORD *)(a1 + 280), v18 < v17) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v19 + 4 * v18++) = -1;
          if ( v17 == v18 )
            break;
          v19 = *(_QWORD *)(a1 + 272);
        }
      }
    }
    else if ( v20 >= v17
           || (v153 = qvector_reserve(), *(_QWORD *)(a1 + 272) = v153,
                                         v19 = v153,
                                         v18 = *(_QWORD *)(a1 + 280),
                                         v18 < v17) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v19 + 4 * v18++) = -1;
        if ( v17 == v18 )
          break;
        v19 = *(_QWORD *)(a1 + 272);
      }
    }
  }
  *(_QWORD *)(a1 + 280) = v17;
LABEL_38:
  *(_QWORD *)(a1 + 208) = 0;
  v165 = (__m128i *)(a1 + 320);
  v21 = *(unsigned __int64 **)(a1 + 320);
  if ( v21 )
  {
    v22 = *v21;
    if ( !*(_QWORD *)(a1 + 328) )
    {
      *v21 = *v21 & 3 | (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 320) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 320),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 320));
      **(_QWORD **)(a1 + 320) &= ~1uLL;
      **(_QWORD **)(a1 + 320) |= 2uLL;
      goto LABEL_41;
    }
    v104 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
    v105 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v105 & 2) != 0 )
      goto LABEL_204;
    v106 = (__int64 *)v104[1];
    if ( (*(_BYTE *)v106 & 2) != 0 )
    {
      v107 = (__int64 *)v104[2];
      if ( (*(_BYTE *)v107 & 2) != 0 )
        goto LABEL_298;
    }
    else
    {
      sub_CF630(v106);
      v107 = (__int64 *)v104[2];
      if ( (*(_BYTE *)v107 & 2) != 0 )
        goto LABEL_200;
    }
    sub_CF630(v107);
LABEL_200:
    v105 = *v104;
    if ( (*v104 & 2) != 0 )
    {
LABEL_201:
      if ( v22 > 3 )
        qfree();
      v21 = *(unsigned __int64 **)(a1 + 320);
      v22 = *v21;
LABEL_204:
      *v21 = v22 & 3 | (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)(a1 + 320) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 320),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 320));
      **(_QWORD **)(a1 + 320) &= ~1uLL;
      **(_QWORD **)(a1 + 320) |= 2uLL;
      goto LABEL_205;
    }
LABEL_298:
    *v104 = v105 | 2;
    goto LABEL_201;
  }
LABEL_205:
  *(_QWORD *)(a1 + 328) = 0;
LABEL_41:
  if ( *(_QWORD *)(a1 + 296) )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree();
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v23 = *(_QWORD *)(v4 + 32);
  LODWORD(v24) = v23;
  if ( v23 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      v27 = 80 * v26;
      v28 = v27 + *(_QWORD *)(v4 + 24);
      v29 = v27;
      v30 = *(_DWORD *)(v28 + 56);
      v31 = (int *)(v28 + 56);
      if ( v30 == 2 )
      {
        v80 = *(int ***)(v28 + 64);
        if ( v80[1] != (int *)&byte_1 )
          goto LABEL_154;
        v31 = *v80;
        v30 = **v80;
        if ( v30 == 1 )
        {
LABEL_192:
          v210.m128i_i64[0] = *((_QWORD *)v31 + 1);
          sub_63890((__int64 *)(a1 + 200), v25);
          *(_QWORD *)v211 = &v210;
          *(_DWORD *)(sub_FA610(v165, v210.m128i_i64, (_QWORD **)v211) + 32) = v25;
          *(__m128i *)v211 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64(&v210),
                               (__m128i)(unsigned __int64)*(int *)(*(_QWORD *)(v4 + 24) + v29 + 4));
          sub_313630(a1 + 296, v211, v100, v101, v102, v103);
          goto LABEL_61;
        }
        if ( v30 == 2 )
        {
LABEL_154:
          v81 = *((_QWORD *)v31 + 1);
          v82 = *(_DWORD **)v81;
          v83 = *(_QWORD *)v81 + 24LL * *(_QWORD *)(v81 + 8);
          if ( *(_QWORD *)v81 == v83 )
          {
LABEL_161:
            if ( !under_debugger )
              sub_37EA20(52134);
LABEL_435:
            BUG();
          }
          v84 = *(_DWORD **)v81;
          do
          {
            if ( *v84 == 1 )
              goto LABEL_158;
            v84 += 6;
          }
          while ( (_DWORD *)v83 != v84 );
          while ( (unsigned int)(*v82 - 3) > 1 )
          {
            v82 += 6;
            if ( (_DWORD *)v83 == v82 )
              goto LABEL_161;
          }
          goto LABEL_48;
        }
      }
      else if ( v30 == 1 )
      {
        goto LABEL_192;
      }
      if ( (unsigned int)(v30 - 3) > 1 )
        goto LABEL_161;
LABEL_48:
      v32 = *(unsigned int *)(v28 + 4);
      memset(v211, 0, sizeof(v211));
      v33 = sub_D80A0(a1 + 64, (__int64 *)v211, v31, v32, 1);
      v34 = *(_OWORD *)v211;
      if ( !v33 )
      {
LABEL_150:
        if ( (_QWORD)v34 )
          qfree();
        v23 = *(_QWORD *)(v4 + 32);
        LODWORD(v24) = v23;
        break;
      }
      v35 = 0;
      v36 = 0;
      if ( *(_QWORD *)&v211[8] )
      {
        while ( 1 )
        {
          v37 = *(_DWORD *)(v34 + 4 * v36);
          v38 = *(_DWORD **)(a1 + 72);
          v39 = &v38[*(_QWORD *)(a1 + 80)];
          if ( v38 == v39 )
            break;
          v40 = *(_DWORD **)(a1 + 72);
          while ( v37 != *v40 )
          {
            if ( v39 == ++v40 )
              goto LABEL_140;
          }
          if ( v39 == v40 )
            break;
          v41 = v40 - v38;
          v42 = (int)v41;
          if ( (_DWORD)v41 == -1 )
            break;
          v43 = *(_DWORD *)(a1 + 336) + 1;
          if ( *(_DWORD *)(a1 + 64) == 3 )
            goto LABEL_163;
          v44 = *(_QWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 336) = v43;
          *(_DWORD *)(v44 + 4LL * (int)v41) = v25;
LABEL_58:
          v36 = ++v35;
          if ( (unsigned __int64)v35 >= *((_QWORD *)&v34 + 1) )
            goto LABEL_59;
        }
LABEL_140:
        v75 = *(_DWORD **)(a1 + 96);
        v76 = &v75[*(_QWORD *)(a1 + 104)];
        if ( v75 == v76 )
          goto LABEL_150;
        v77 = *(_DWORD **)(a1 + 96);
        while ( v37 != *v77 )
        {
          if ( v76 == ++v77 )
            goto LABEL_150;
        }
        if ( v76 == v77 )
          goto LABEL_150;
        v78 = v77 - v75;
        v42 = (int)v78;
        if ( (_DWORD)v78 == -1 )
          goto LABEL_150;
        v43 = *(_DWORD *)(a1 + 336) + 1;
        if ( *(_DWORD *)(a1 + 64) == 3 )
        {
LABEL_163:
          *(_DWORD *)(a1 + 336) = v43;
          v79 = 4 * v42;
          *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v42) = v25;
        }
        else
        {
          *(_DWORD *)(a1 + 336) = v43;
          v79 = 4LL * (int)v78;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 272) + v79) = v25;
        goto LABEL_58;
      }
LABEL_59:
      if ( (_QWORD)v34 )
        qfree();
LABEL_61:
      if ( ((*v31 - 2) & 0xFFFFFFFD) == 0 )
LABEL_158:
        sub_63890((__int64 *)(a1 + 216), v25);
      v23 = *(_QWORD *)(v4 + 32);
      v26 = ++v25;
      LODWORD(v24) = v23;
    }
    while ( v25 < v23 );
  }
  v175 = (v179 & 0xFFFFFFF0) == 64 || (v179 & 0xFFFFFFF0) == 208;
  if ( !v175 )
  {
    v45 = 0;
LABEL_65:
    if ( !v178 && (*(_BYTE *)(v4 + 281) & 1) == 0 )
    {
      v46 = v23 - 1;
      if ( v45 > (int)v23 - 1 )
      {
        v46 = v23;
        v24 = (int)v23;
      }
      else
      {
        while ( 1 )
        {
          v24 = v46;
          v47 = *(_QWORD *)(v4 + 24) + 80LL * v46;
          v210 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
          if ( *(_BYTE *)v47 == 1 )
          {
            v116 = *(int *)(v47 + 8);
            v210.m128i_i8[8] = 1;
            v210.m128i_i64[0] = v116;
            v210.m128i_i32[3] = *(_DWORD *)(v47 + 4);
          }
          else
          {
            if ( *(_BYTE *)v47 != 5 )
              goto LABEL_70;
            v112 = *(_QWORD *)(v47 + 8);
            v210.m128i_i8[8] = 5;
            v210.m128i_i64[0] = *(_QWORD *)(v112 + 8);
            v210.m128i_i32[3] = *(_DWORD *)(v47 + 4);
          }
          sub_32C1E0(v211, &v210, *(_QWORD *)(a1 + 8));
          v113 = *(_QWORD **)(a1 + 56);
          if ( !(unsigned __int8)sub_63F20(v211, v113) )
            break;
          v115 = sub_3149F0(v113 + 2, &v211[16]);
          v114 = *(_QWORD *)&v211[16];
          if ( !v115 )
            goto LABEL_221;
          if ( *(_QWORD *)&v211[16] )
          {
            v212 = 0;
            qfree();
          }
          qfree();
          if ( v45 > v46 - 1 )
            goto LABEL_71;
          --v46;
        }
        v114 = *(_QWORD *)&v211[16];
LABEL_221:
        if ( v114 )
        {
          v212 = 0;
          qfree();
        }
        qfree();
LABEL_70:
        v24 = ++v46;
LABEL_71:
        v23 = *(_QWORD *)(v4 + 32);
      }
      if ( v23 != v24 )
      {
        v48 = v23 - v46;
        sub_816C0((__int64 *)(v4 + 24), v24);
        if ( *(_DWORD *)(v4 + 8) > v46 )
          *(_DWORD *)(v4 + 8) = v46;
        *(_DWORD *)(a1 + 344) += v48;
        v24 = *(_QWORD *)(v4 + 32);
      }
    }
    goto LABEL_76;
  }
  if ( v178 != 1 || (v45 = 0, v176) )
  {
    v45 = *(_DWORD *)(v4 + 8);
    goto LABEL_65;
  }
LABEL_76:
  v209[0] = 0;
  v209[1] = 0;
  sub_63580(v209, 0, v24);
  v49 = *(_QWORD *)(v4 + 32);
  v50 = v45;
  if ( v45 >= v49 )
    goto LABEL_174;
  while ( 1 )
  {
    v51 = *(_QWORD *)(v4 + 24);
    v210 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v52 = 80 * v50;
    v53 = v52 + v51;
    if ( *(_BYTE *)v53 == 1 )
    {
      v54 = *(int *)(v53 + 8);
      v210.m128i_i8[8] = 1;
      v210.m128i_i64[0] = v54;
      v210.m128i_i32[3] = *(_DWORD *)(v53 + 4);
    }
    else
    {
      if ( *(_BYTE *)v53 != 5 )
        goto LABEL_79;
      v62 = *(_QWORD *)(v53 + 8);
      v210.m128i_i8[8] = 5;
      v210.m128i_i64[0] = *(_QWORD *)(v62 + 8);
      v210.m128i_i32[3] = *(_DWORD *)(v53 + 4);
    }
    v166 = *(_BYTE *)v53 & 0xFB;
    if ( v166 != 1 )
    {
      if ( !under_debugger )
        sub_37EA20(52030);
      goto LABEL_435;
    }
    if ( v175 && *(_DWORD *)(v4 + 8) > v45 )
      goto LABEL_79;
    sub_32C1E0(v211, &v210, *(_QWORD *)(a1 + 8));
    v55 = *(__int64 **)(a1 + 56);
    sub_63E00((__int64 *)v211, v55);
    sub_314B70(&v211[16], v55 + 2);
    if ( !(unsigned __int8)sub_63F80(v211) || v212 )
    {
      if ( (unsigned __int8)sub_63F80(v211) )
      {
        v57 = *(_QWORD *)(a1 + 8);
        v166 = 5;
        v58 = *(_QWORD *)(v57 + 1496);
        v59 = *(_QWORD *)(v57 + 1440);
        v60 = *(_QWORD *)(*(_QWORD *)(v58 + 24) + 16LL);
        v61 = v60 & (**(_QWORD **)&v211[16] - v59);
        v168 = v60
             & (*(_QWORD *)(*(_QWORD *)&v211[16] + 16 * v212 - 8)
              + *(_QWORD *)(*(_QWORD *)&v211[16] + 16 * v212 - 16)
              - v59);
      }
      else
      {
        LODWORD(v61) = sub_64060(v211, 0);
        LODWORD(v168) = sub_64300(v211) + 1;
        v58 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
      }
      if ( (unsigned __int8)sub_11A810(v53, v58, 0) )
      {
        if ( v166 != v210.m128i_i8[8] )
          sub_CE6A0();
        v56 = v210.m128i_i32[0] + v210.m128i_i32[3] - v168;
      }
      else
      {
        if ( v166 != v210.m128i_i8[8] )
          sub_CE6A0();
        v56 = v61 - v210.m128i_i32[0];
      }
    }
    else
    {
      v56 = *(_DWORD *)(v53 + 4);
    }
    if ( *(_QWORD *)&v211[16] )
    {
      v212 = 0;
      qfree();
    }
    qfree();
    if ( v56 < 0 )
    {
      if ( !under_debugger )
        sub_37EA20(52031);
      goto LABEL_435;
    }
    if ( *(_DWORD *)(v53 + 4) == v56 )
      goto LABEL_79;
    if ( !v56 )
      break;
    if ( (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 9
      || (*(_BYTE *)(v4 + 281) & 1) != 0
      && *(_DWORD *)(v53 + 4) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
    {
      goto LABEL_79;
    }
    v63 = round_up_power2();
    v64 = v63;
    if ( *(_DWORD *)(v53 + 4) <= v63 )
      goto LABEL_79;
    v65 = (unsigned int)v63;
    v169 = *(_DWORD *)(a1 + 136);
    v167 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL);
    v66 = round_down_power2();
    v67 = v169;
    v68 = v66;
    if ( v66 > 1 )
    {
      while ( v64 % v68 )
      {
        v68 >>= 1;
        if ( v68 == 1 )
          goto LABEL_120;
      }
    }
    if ( (v68 & (v68 - 1)) != 0 )
      sub_CE830(v65, 2);
LABEL_120:
    v170 = 2 * v167;
    if ( 2 * v167 >= v68 )
    {
      if ( v167 <= v68 )
      {
        if ( v67 <= 0x10 )
          goto LABEL_313;
        goto LABEL_278;
      }
      if ( v67 > 0x10 )
        goto LABEL_123;
      goto LABEL_276;
    }
    if ( v67 > 0x10 )
    {
      if ( v67 == 256 || v67 == 176 )
      {
        v68 = 2 * v167;
        if ( v167 <= v170 )
          v68 = v167;
        goto LABEL_127;
      }
      goto LABEL_272;
    }
    v194 = v68;
    v187 = v67;
    v144 = getinf();
    if ( v144 != 176 && v144 != 256 )
    {
      v67 = v187;
      v68 = v194;
LABEL_272:
      v65 = 67;
      v192 = v68;
      v183 = v67;
      v126 = getinf_flag();
      v68 = v192;
      if ( v126 )
        goto LABEL_127;
      v68 = 2 * v167;
      if ( v167 <= v170 )
      {
        if ( v183 > 0x10 )
        {
          v68 = 2 * v167;
LABEL_125:
          v65 = 67;
          v180 = v68;
          v69 = getinf_flag();
          v68 = v180;
          if ( v69 )
            goto LABEL_127;
LABEL_126:
          v68 = v167;
          goto LABEL_127;
        }
LABEL_312:
        v68 = 2 * v167;
LABEL_313:
        v65 = 99;
        v186 = v68;
        v143 = getinf();
        v68 = v186;
        v67 = v143;
LABEL_278:
        if ( v67 != 176 && v67 != 256 )
          goto LABEL_125;
        goto LABEL_126;
      }
      if ( v183 > 0x10 )
        goto LABEL_125;
      goto LABEL_275;
    }
    if ( v167 <= v170 )
      goto LABEL_312;
LABEL_275:
    v68 = 2 * v167;
LABEL_276:
    v65 = 99;
    v184 = v68;
    v127 = getinf();
    v68 = v184;
    v67 = v127;
LABEL_123:
    if ( v67 != 176 && v67 != 256 )
      goto LABEL_125;
LABEL_127:
    v70 = *(_QWORD *)(v4 + 24);
    v189 = v70 + v52;
    if ( *(_DWORD *)(v70 + v52 + 56) != 1 )
    {
      v190 = v68;
      v181 = *(_DWORD *)(a1 + 136);
      get_tinfo_size();
      v71 = 0;
      v72 = v181;
      v73 = v190;
      if ( (v167 & 0x40000000) == 0 )
      {
        if ( v167 > 0 )
        {
          if ( v181 > 0x10 )
          {
LABEL_131:
            if ( v72 != 176 && v72 != 256 )
            {
LABEL_133:
              v171 = v73;
              v74 = getinf_flag();
              v73 = v171;
              if ( v74 )
                goto LABEL_134;
LABEL_135:
              if ( v73 == v167 )
                goto LABEL_136;
              goto LABEL_79;
            }
LABEL_134:
            v167 = v71;
            goto LABEL_135;
          }
LABEL_296:
          v172 = v73;
          v136 = getinf();
          v73 = v172;
          v72 = v136;
          goto LABEL_131;
        }
        if ( v181 > 0x10 )
        {
LABEL_318:
          if ( v72 == 176 || v72 == 256 )
            goto LABEL_135;
          goto LABEL_320;
        }
LABEL_335:
        v174 = v73;
        v148 = getinf();
        v73 = v174;
        v72 = v148;
        goto LABEL_318;
      }
      if ( v181 <= 0x10 )
      {
        v152 = getinf();
        v73 = v190;
        if ( v152 != 176 && v152 != 256 )
        {
          v72 = v181;
          goto LABEL_292;
        }
        if ( v167 > v170 )
        {
LABEL_295:
          v71 = 2 * v167;
          goto LABEL_296;
        }
      }
      else
      {
        if ( v181 == 256 || v181 == 176 )
        {
          v147 = 2 * v167;
          if ( v167 <= v170 )
            v147 = v167;
          v167 = v147;
          goto LABEL_135;
        }
LABEL_292:
        v193 = v73;
        v185 = v72;
        v135 = getinf_flag();
        v73 = v193;
        if ( v135 )
          goto LABEL_134;
        v71 = 2 * v167;
        if ( v167 > v170 )
        {
          if ( v185 > 0x10 )
            goto LABEL_133;
          goto LABEL_295;
        }
        if ( v185 > 0x10 )
        {
          v71 = 2 * v167;
LABEL_320:
          v173 = v73;
          if ( !(unsigned __int8)getinf_flag() )
            v71 = v167;
          v73 = v173;
          v167 = v71;
          goto LABEL_135;
        }
      }
      v71 = 2 * v167;
      goto LABEL_335;
    }
    if ( !v45 || (v118 = 80LL * (v45 - 1) + v70, *(_DWORD *)(v118 + 56) != 1) )
    {
LABEL_238:
      v50 = v45 + 1;
      if ( v50 == *(_QWORD *)(v4 + 32) )
        goto LABEL_136;
      v119 = *(_QWORD *)(v4 + 24) + 80LL * (v45 + 1);
      v195 = *(_QWORD *)(v4 + 24) + 80 * v50;
      if ( *(_DWORD *)(v119 + 56) != 1 )
        goto LABEL_136;
      v120 = *(_DWORD *)(a1 + 136);
      v121 = *(_QWORD *)(v119 + 24);
      v122 = &v207;
      v207 = 0;
      v203 = v120;
      get_tinfo_size();
      v123 = v203;
      v182 = v207;
      if ( ((v207 - 1) & v207) != 0 )
        sub_CE830(&v207, v121);
      if ( v170 >= v207 )
      {
LABEL_242:
        if ( v167 > v182 )
        {
          if ( v123 > 0x10 )
          {
LABEL_244:
            if ( v123 != 176 && v123 != 256 )
            {
              v121 = 2;
              v122 = &dword_40 + 3;
              v124 = getinf_flag();
              goto LABEL_247;
            }
            goto LABEL_249;
          }
LABEL_405:
          v122 = (_DWORD *)(&qword_60 + 3);
          v123 = getinf();
          goto LABEL_244;
        }
        if ( v123 > 0x10 )
        {
LABEL_368:
          if ( v123 == 176 || v123 == 256 )
            goto LABEL_248;
          v121 = 4;
          v122 = &dword_40 + 3;
          v124 = getinf_flag();
LABEL_247:
          if ( !v124 )
LABEL_248:
            v182 = v167;
LABEL_249:
          v125 = *(_DWORD *)(a1 + 136);
          v191 = *(_QWORD *)(v189 + 64) + v64;
          if ( ((v182 - 1) & v182) != 0 )
            sub_CE830(v122, v121);
          if ( v170 >= v182 )
          {
LABEL_251:
            if ( v167 > v182 )
            {
              if ( v125 > 0x10 )
              {
LABEL_253:
                if ( v125 == 176 || v125 == 256 || (unsigned __int8)getinf_flag() )
                  goto LABEL_256;
                goto LABEL_257;
              }
LABEL_390:
              v125 = getinf();
              goto LABEL_253;
            }
            if ( v125 > 0x10 )
            {
LABEL_382:
              if ( v125 != 176 && v125 != 256 )
              {
                v156 = (unsigned __int8)getinf_flag() == 0;
                v157 = v182;
                if ( v156 )
                  v157 = v167;
                v167 = v157;
              }
              goto LABEL_257;
            }
LABEL_430:
            v125 = getinf();
            goto LABEL_382;
          }
LABEL_376:
          if ( v125 <= 0x10 )
          {
            v206 = v125;
            v164 = getinf();
            if ( v164 == 176 || v164 == 256 )
            {
              if ( v167 > v170 )
              {
                v182 = 2 * v167;
                goto LABEL_390;
              }
              v182 = 2 * v167;
              goto LABEL_430;
            }
            v125 = v206;
          }
          else if ( v125 == 256 || v125 == 176 )
          {
            v163 = 2 * v167;
            if ( v167 <= v170 )
              v163 = v167;
            v167 = v163;
            goto LABEL_257;
          }
          v205 = v125;
          if ( !(unsigned __int8)getinf_flag() )
          {
            v125 = v205;
            v182 = 2 * v167;
            goto LABEL_251;
          }
LABEL_256:
          v167 = v182;
LABEL_257:
          if ( *(_QWORD *)(v195 + 64) != ((v191 + v167 - 1) & -v167) )
          {
            v49 = *(_QWORD *)(v4 + 32);
            ++v45;
            goto LABEL_80;
          }
LABEL_136:
          if ( *(_DWORD *)(v53 + 56) != 2 )
            goto LABEL_137;
          if ( v64 <= 0 || (v128 = *(_QWORD **)(v53 + 64), (v129 = v128[1]) == 0) )
          {
            if ( !under_debugger )
              sub_37EA20(52685);
            goto LABEL_435;
          }
          v130 = *v128 + 24 * v129 - 24;
          v131 = *(unsigned __int16 *)(v130 + 16);
          if ( v64 > v131 && v64 < v131 + *(unsigned __int16 *)(v130 + 18) )
          {
            *(_WORD *)(v130 + 18) = v64 - v131;
LABEL_137:
            sub_124DA0(v53, v177, (unsigned int)v64, 0);
            sub_328FE0(v211, v177, (unsigned int)v64, 0);
            copy_tinfo_t();
            clear_tinfo_t();
            sub_1C16C0(v177, v53 + 56, 0, (unsigned int)v64, *(unsigned int *)(v4 + 20));
            ++v45;
            ++*(_DWORD *)(a1 + 344);
            v49 = *(_QWORD *)(v4 + 32);
            v50 = v45;
            goto LABEL_80;
          }
          goto LABEL_79;
        }
LABEL_409:
        v122 = (_DWORD *)(&qword_60 + 3);
        v123 = getinf();
        goto LABEL_368;
      }
      if ( v203 <= 0x10 )
      {
        v162 = getinf();
        if ( v162 == 176 || v162 == 256 )
        {
          if ( v167 > v170 )
          {
            v182 = 2 * v167;
            goto LABEL_405;
          }
          v182 = 2 * v167;
          goto LABEL_409;
        }
        v123 = v203;
      }
      else if ( v203 == 176 || v203 == 256 )
      {
        v161 = 2 * v167;
        if ( v167 <= v170 )
          v161 = v167;
        v182 = v161;
        goto LABEL_249;
      }
      v121 = 512;
      v122 = &dword_40 + 3;
      v204 = v123;
      if ( !(unsigned __int8)getinf_flag() )
      {
        v123 = v204;
        v182 = 2 * v167;
        goto LABEL_242;
      }
      v125 = *(_DWORD *)(a1 + 136);
      v191 = *(_QWORD *)(v189 + 64) + v64;
      goto LABEL_376;
    }
    v149 = v68 - 1;
    v188 = *(_QWORD *)(v118 + 64) + *(int *)(v118 + 4);
    v150 = *(_DWORD *)(a1 + 136);
    if ( (v68 & (v68 - 1)) != 0 )
      sub_CE830(v65, *(_QWORD *)(v118 + 64) + *(int *)(v118 + 4));
    if ( v170 >= v68 )
      goto LABEL_338;
    if ( v150 > 0x10 )
    {
      if ( v150 == 256 || v150 == 176 )
      {
        v68 = 2 * v167;
        if ( v167 <= v170 )
          v68 = v167;
        v149 = v68 - 1;
        goto LABEL_345;
      }
      goto LABEL_365;
    }
    v197 = *(_DWORD *)(a1 + 136);
    v202 = v68;
    v160 = getinf();
    if ( v160 != 176 && v160 != 256 )
    {
      v68 = v202;
      v150 = v197;
LABEL_365:
      v196 = v150;
      v199 = v68;
      v155 = getinf_flag();
      v68 = v199;
      if ( v155 )
        goto LABEL_345;
      v150 = v196;
      v68 = 2 * v167;
LABEL_338:
      if ( v167 <= v68 )
      {
        if ( v150 <= 0x10 )
        {
LABEL_395:
          v201 = v68;
          v159 = getinf();
          v68 = v201;
          v150 = v159;
        }
        v198 = v68;
        if ( v150 != 176 && v150 != 256 )
        {
          v151 = getinf_flag();
          goto LABEL_343;
        }
LABEL_344:
        v68 = v167;
        v149 = v167 - 1;
        goto LABEL_345;
      }
      if ( v150 > 0x10 )
        goto LABEL_340;
      goto LABEL_393;
    }
    v68 = 2 * v167;
    if ( v167 <= v170 )
      goto LABEL_395;
    v68 = 2 * v167;
LABEL_393:
    v200 = v68;
    v158 = getinf();
    v68 = v200;
    v150 = v158;
LABEL_340:
    if ( v150 != 176 && v150 != 256 )
    {
      v198 = v68;
      v151 = getinf_flag();
LABEL_343:
      v68 = v198;
      v149 = v198 - 1;
      if ( v151 )
        goto LABEL_345;
      goto LABEL_344;
    }
    v149 = v68 - 1;
LABEL_345:
    if ( *(_QWORD *)(v189 + 64) == (-v68 & (unsigned __int64)(v188 + v149)) )
      goto LABEL_238;
LABEL_79:
    ++v45;
    v49 = *(_QWORD *)(v4 + 32);
    v50 = v45;
LABEL_80:
    if ( v50 >= v49 )
      goto LABEL_174;
  }
  if ( (*(_BYTE *)(v4 + 281) & 1) != 0 && *(_DWORD *)(v4 + 8) <= v45 )
    goto LABEL_79;
  if ( v176 )
  {
    v49 = *(_QWORD *)(v4 + 32);
    v50 = v45 + 1;
    if ( v50 != v49 )
    {
      ++v45;
      goto LABEL_80;
    }
  }
  if ( v178 )
  {
    v85 = *(__m128i **)(a1 + 48);
    v86 = *(_QWORD *)v4;
    *(_QWORD *)v211 = &v208;
    v208 = v86;
    v87 = sub_FE1A0(v85, &v208, (__int64 **)v211);
    v88 = *(_QWORD *)(v87 + 40);
    v89 = *(int **)(v87 + 32);
    v90 = (_QWORD *)(v87 + 24);
    v91 = 4 * v88;
    v92 = &v89[v88];
    if ( 4 * v88 )
    {
      v93 = v89;
      while ( *v93 >= v45 )
      {
        if ( *v93 == v45 )
          goto LABEL_172;
        if ( ++v93 == v92 )
          goto LABEL_229;
      }
      v94 = (char *)((char *)v93 - (char *)v89);
      if ( v90[3] < (unsigned __int64)(v88 + 1) )
      {
        v132 = qvector_reserve();
        v90[1] = v132;
        v94 = (char *)((char *)v93 - (char *)v89);
        v93 = (int *)((char *)v93 - (char *)v89 + v132);
        v91 = 4LL * v90[2];
      }
      memmove(v93 + 1, v93, v91 - (_QWORD)v94);
      *v93 = v45;
      ++v90[2];
    }
    else
    {
LABEL_229:
      if ( v90[3] < (unsigned __int64)(v88 + 1) )
      {
        v133 = qvector_reserve();
        v134 = v90[2];
        v90[1] = v133;
        v92 = (int *)(v133 + 4 * v134);
      }
      *v92 = v45;
      ++v90[2];
    }
LABEL_172:
    v85[1].m128i_i8[0] = 1;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v53 + 56) != 1 && *(_DWORD *)(v4 + 8) > v45 || sub_E3FB0(a1, v4, v45) )
  {
    sub_63A40(v209, v45);
    goto LABEL_79;
  }
  sub_63B40(v209, v45, *(_DWORD *)(v4 + 32) - v45);
  v49 = *(_QWORD *)(v4 + 32);
LABEL_174:
  sub_63AC0(v209, v49);
  v95 = 0;
  v96 = 0;
  if ( !(unsigned __int8)sub_63F80(v209) )
  {
    v96 = sub_64300(v209) + 1;
    v95 = v96;
  }
  v97 = *(_QWORD *)(v4 + 32);
  if ( v95 < v97 )
  {
    v117 = v97 - v96;
    sub_816C0((__int64 *)(v4 + 24), v95);
    if ( v96 < *(_DWORD *)(v4 + 8) )
      *(_DWORD *)(v4 + 8) = v96;
    *(_DWORD *)(a1 + 344) += v117;
  }
  if ( !v178 )
  {
    *(_OWORD *)v211 = 0u;
    if ( (*(_BYTE *)(v177 + 48) & 8) != 0
      && ((*(_DWORD *)(v4 + 20) - 112) & 0xFFFFFFDF) == 0
      && (unsigned __int8)sub_63F80((_QWORD *)(a1 + 216)) )
    {
      v137 = *(int **)(a1 + 248);
      for ( i = &v137[*(_QWORD *)(a1 + 256)]; i != v137; ++v137 )
      {
        v139 = *v137;
        if ( *v137 != -1 )
        {
          if ( sub_64030(v209, v139) )
          {
LABEL_357:
            *(_QWORD *)&v211[8] = 0;
            goto LABEL_180;
          }
          sub_63890((__int64 *)v211, v139);
        }
      }
      v140 = *(int **)(a1 + 272);
      for ( j = &v140[*(_QWORD *)(a1 + 280)]; j != v140; ++v140 )
      {
        v142 = *v140;
        if ( *v140 != -1 )
        {
          if ( sub_64030(v209, v142) )
            goto LABEL_357;
          sub_63890((__int64 *)v211, v142);
        }
      }
      *(_DWORD *)(v4 + 20) = 48;
    }
LABEL_180:
    v98 = 0;
    if ( *(_QWORD *)(v4 + 32) )
    {
      do
      {
        if ( !sub_64030(v209, v98) && sub_E3FB0(a1, v4, v98) )
          sub_63890((__int64 *)v211, v98);
        ++v98;
        v99 = *(_QWORD *)(v4 + 32);
      }
      while ( v98 < v99 );
      v108 = v99 - 1;
      if ( v108 >= 0 )
      {
        v109 = 80LL * (unsigned int)v108;
        do
        {
          if ( sub_64030(v211, v108) )
          {
            v110 = (_QWORD *)(v109 + *(_QWORD *)(v4 + 24));
            cleanup_argloc();
            if ( v110[4] )
            {
              v110[5] = 0;
              qfree();
            }
            clear_tinfo_t();
            sub_11A960(v110);
            memmove(v110, v110 + 10, *(_QWORD *)(v4 + 24) + 80LL * *(_QWORD *)(v4 + 32) - (_QWORD)v110 - 80);
            v111 = *(_DWORD *)(v4 + 8);
            --*(_QWORD *)(v4 + 32);
            if ( v111 > v108 )
              *(_DWORD *)(v4 + 8) = v111 - 1;
            ++*(_DWORD *)(a1 + 344);
          }
          --v108;
          v109 -= 80;
        }
        while ( v108 != -1 );
      }
    }
    qfree();
  }
  if ( !*(_QWORD *)(v4 + 32) && (v179 == 128 || v175) )
    *(_DWORD *)(v4 + 20) = 32;
  qfree();
  return 0;
}
