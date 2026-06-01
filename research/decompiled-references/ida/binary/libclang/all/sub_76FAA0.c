__int64 __fastcall sub_76FAA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v6; // r10
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 *v26; // rdi
  int v27; // ecx
  int v28; // r10d
  unsigned __int64 *v29; // rsi
  __int64 v30; // r9
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // r8
  char *v33; // rax
  char v34; // r12
  char v35; // r13
  bool v36; // r13
  __int64 v37; // rbp
  int v38; // edx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  const __m128i *v42; // rax
  __m128i *v43; // rdx
  unsigned __int8 v44; // cl
  int v45; // eax
  int v46; // edx
  bool v47; // zf
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rdx
  _DWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  _DWORD *v62; // rdx
  __int64 v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // r12
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // r13
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // edi
  __int64 v72; // rdx
  unsigned int v73; // ecx
  __int64 v74; // r12
  __int64 *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rsi
  _QWORD *v84; // r8
  _QWORD *v85; // rax
  __int64 *v86; // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // r9
  int v89; // r8d
  unsigned int v90; // edi
  __int64 v91; // r10
  __int64 v92; // rdx
  _QWORD *v93; // rdx
  int v94; // ecx
  unsigned int v95; // r12d
  int v96; // r10d
  unsigned __int64 *v97; // r9
  unsigned __int64 v98; // rdi
  __int64 v99; // rax
  unsigned int v100; // r8d
  void *v101; // rdi
  __int64 v102; // r13
  __int64 v103; // r13
  unsigned __int64 v104; // r12
  __int64 v105; // rax
  int v106; // eax
  __int64 v107; // rdx
  size_t v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  _QWORD *v113; // r13
  unsigned __int64 v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // r8
  __int64 v117; // r8
  unsigned __int64 *v118; // rcx
  __int64 v119; // rdi
  _QWORD *v120; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v122; // r11
  __int64 v123; // r8
  int v124; // edi
  unsigned int v125; // esi
  __int64 *v126; // rdx
  __int64 v127; // r9
  unsigned __int64 v128; // rsi
  int v129; // ecx
  unsigned __int64 *v130; // r13
  __int64 v131; // rdx
  unsigned __int64 *v132; // rsi
  __int64 v133; // r12
  __int64 v134; // rcx
  unsigned __int64 *v135; // rax
  unsigned __int64 *k; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // r10
  int v139; // r8d
  unsigned int v140; // edi
  __int64 *v141; // rcx
  __int64 v142; // r11
  unsigned __int64 v143; // rdx
  int v144; // ecx
  __int64 v145; // rdi
  int v146; // ecx
  unsigned int v147; // edx
  unsigned __int64 v148; // r8
  int v149; // r11d
  unsigned __int64 *v150; // r10
  int v151; // r8d
  int v152; // ecx
  __int64 v153; // rdi
  int v154; // eax
  __int64 v155; // rdi
  int v156; // eax
  __int64 v157; // rdi
  int v158; // eax
  int v159; // edi
  char v160; // dl
  int v161; // r8d
  _QWORD *v162; // rdx
  __int64 v163; // r12
  __int64 v164; // rcx
  __int64 *v165; // r12
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  _QWORD *v173; // rax
  _QWORD *v174; // rcx
  __int64 *i; // rax
  unsigned __int64 v176; // rdx
  __int64 v177; // r8
  int v178; // edi
  int v179; // r11d
  __int64 *v180; // r10
  unsigned int v181; // esi
  __int64 *v182; // rcx
  __int64 v183; // r9
  int v184; // edi
  __int64 v185; // r13
  __int64 v186; // rax
  unsigned __int64 v187; // rdx
  _QWORD *v188; // rax
  __int64 v189; // rcx
  __int64 v190; // rdi
  _DWORD *v191; // rax
  __int64 v192; // r13
  __int64 v193; // rdi
  int v194; // edx
  __int64 v195; // rax
  unsigned __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // [rsp+0h] [rbp-118h]
  __int64 v199; // [rsp+0h] [rbp-118h]
  __int64 v200; // [rsp+0h] [rbp-118h]
  __int64 v201; // [rsp+0h] [rbp-118h]
  __int64 v202; // [rsp+0h] [rbp-118h]
  __int64 v203; // [rsp+0h] [rbp-118h]
  __int64 v207; // [rsp+20h] [rbp-F8h]
  __int64 v208; // [rsp+20h] [rbp-F8h]
  __int64 v209; // [rsp+20h] [rbp-F8h]
  __int64 v210; // [rsp+20h] [rbp-F8h]
  int v211; // [rsp+30h] [rbp-E8h]
  int v212; // [rsp+34h] [rbp-E4h]
  __int64 v213; // [rsp+38h] [rbp-E0h]
  __int64 v214; // [rsp+40h] [rbp-D8h]
  char *v215; // [rsp+40h] [rbp-D8h]
  unsigned int v216; // [rsp+40h] [rbp-D8h]
  __int64 *v217; // [rsp+40h] [rbp-D8h]
  int v218; // [rsp+40h] [rbp-D8h]
  __int64 v219; // [rsp+40h] [rbp-D8h]
  unsigned int v220; // [rsp+40h] [rbp-D8h]
  unsigned int v221; // [rsp+48h] [rbp-D0h]
  int v222; // [rsp+48h] [rbp-D0h]
  __int64 *v223; // [rsp+48h] [rbp-D0h]
  int v224; // [rsp+50h] [rbp-C8h]
  unsigned __int8 v225; // [rsp+58h] [rbp-C0h]
  unsigned int v226; // [rsp+58h] [rbp-C0h]
  unsigned int v227; // [rsp+58h] [rbp-C0h]
  __int64 v228; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v229; // [rsp+68h] [rbp-B0h]
  _DWORD v230[42]; // [rsp+70h] [rbp-A8h] BYREF

  v6 = a3;
  v8 = *(_QWORD *)(a3 + 104);
  v213 = a2;
  v212 = *(_DWORD *)(a1 + 344);
  v9 = *(_QWORD *)(v8 + 96);
  v211 = *(_DWORD *)(a1 + 240);
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    if ( v10 <= 3 || (v9 & 2) == 0 )
      goto LABEL_5;
    v64 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
    v65 = v64[2275];
    if ( !v65 )
    {
      *(_QWORD *)(v8 + 96) = v8 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v66 = v64[274];
    v64[284] += 24LL;
    v10 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v10 + 24;
    if ( v64[275] >= v10 + 24 && v66 )
    {
      v64[274] = a2;
    }
    else
    {
      a2 = 24;
      v202 = v6;
      v10 = sub_76D810((__int64)(v64 + 274), 24, 3);
      v6 = v202;
    }
    *(_QWORD *)v10 = v65;
    *(_DWORD *)(v10 + 8) = 0;
    v9 = v10 | 5;
    *(_QWORD *)(v10 + 16) = v8;
    *(_QWORD *)(v8 + 96) = v10 | 5;
    LOBYTE(v10) = v10 & 0xFA | 4;
  }
  if ( (v10 & 4) != 0 )
  {
    v11 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11 )
    {
      v153 = *(_QWORD *)v11;
      v154 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
      if ( v11[2] != v154 )
      {
        v11[2] = v154;
        a2 = v8;
        v200 = v6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v153 + 144LL))(v153, v8);
        v6 = v200;
      }
    }
  }
LABEL_5:
  v12 = *(_QWORD *)(v6 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
  {
    v199 = v6;
    v109 = sub_7A2E20(v12, a2);
    v6 = v199;
    v13 = v109;
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 24);
  }
  v14 = *(_QWORD *)(v6 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) != 0 )
  {
    if ( v16 )
      goto LABEL_73;
LABEL_95:
    v59 = *(_QWORD *)(v6 + 128);
    v198 = v13 + 24LL * *(unsigned int *)(v59 + 16);
    goto LABEL_96;
  }
  if ( v16 <= 3 )
  {
    if ( v16 )
      goto LABEL_76;
    goto LABEL_95;
  }
  if ( (v15 & 2) == 0 )
  {
    v17 = *(_QWORD *)(v6 + 128);
    v198 = v13 + 24LL * *(unsigned int *)(v17 + 16);
    goto LABEL_11;
  }
  v67 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
  v68 = v67[2275];
  if ( !v68 )
  {
    *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
    v14 = *(_QWORD *)(v6 + 104);
    goto LABEL_76;
  }
  v69 = v67[274];
  v67[284] += 24LL;
  v16 = (v69 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = v16 + 24;
  if ( v67[275] >= v16 + 24 && v69 )
  {
    v67[274] = a2;
  }
  else
  {
    a2 = 24;
    v203 = v6;
    v16 = sub_76D810((__int64)(v67 + 274), 24, 3);
    v6 = v203;
  }
  *(_QWORD *)v16 = v68;
  *(_DWORD *)(v16 + 8) = 0;
  v15 = v16 | 5;
  *(_QWORD *)(v16 + 16) = v14;
  *(_QWORD *)(v14 + 96) = v16 | 5;
  LOBYTE(v16) = v16 & 0xFA | 4;
LABEL_73:
  if ( (v16 & 4) != 0 )
  {
    v58 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v58 )
    {
      v157 = *(_QWORD *)v58;
      v158 = *(_DWORD *)(*(_QWORD *)v58 + 12LL);
      if ( v58[2] != v158 )
      {
        v58[2] = v158;
        a2 = v14;
        v201 = v6;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v157 + 144LL))(v157, v14);
        v6 = v201;
      }
    }
  }
  v14 = *(_QWORD *)(v6 + 104);
LABEL_76:
  v59 = *(_QWORD *)(v6 + 128);
  v60 = *(_QWORD *)(v14 + 96);
  v17 = v59;
  v198 = v13 + 24LL * *(unsigned int *)(v59 + 16);
  v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v60 & 1) != 0 )
  {
    if ( v61 )
    {
LABEL_78:
      if ( (v61 & 4) != 0 )
      {
        v62 = (_DWORD *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v62 )
        {
          v155 = *(_QWORD *)v62;
          v156 = *(_DWORD *)(*(_QWORD *)v62 + 12LL);
          if ( v62[2] != v156 )
          {
            v62[2] = v156;
            a2 = v14;
            v209 = v6;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v155 + 144LL))(v155, v14);
            v6 = v209;
          }
        }
        v17 = *(_QWORD *)(v6 + 128);
        if ( (*(_BYTE *)(v17 + 24) & 1) == 0 )
          goto LABEL_12;
        goto LABEL_81;
      }
      v59 = *(_QWORD *)(v6 + 128);
    }
LABEL_96:
    v17 = v59;
    goto LABEL_11;
  }
  if ( v61 <= 3 )
    goto LABEL_96;
  if ( (v60 & 2) != 0 )
  {
    v162 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
    v163 = v162[2275];
    if ( v163 )
    {
      v164 = v162[274];
      v162[284] += 24LL;
      v61 = (v164 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v61 + 24;
      if ( v162[275] >= v61 + 24 && v164 )
      {
        v162[274] = a2;
      }
      else
      {
        a2 = 24;
        v210 = v6;
        v61 = sub_76D810((__int64)(v162 + 274), 24, 3);
        v6 = v210;
      }
      *(_QWORD *)v61 = v163;
      *(_DWORD *)(v61 + 8) = 0;
      v60 = v61 | 5;
      *(_QWORD *)(v61 + 16) = v14;
      *(_QWORD *)(v14 + 96) = v61 | 5;
      LOBYTE(v61) = v61 & 0xFA | 4;
      goto LABEL_78;
    }
    *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
    v17 = *(_QWORD *)(v6 + 128);
  }
LABEL_11:
  if ( (*(_BYTE *)(v17 + 24) & 1) == 0 )
  {
LABEL_12:
    v18 = *(_QWORD *)(v17 + 24);
    goto LABEL_13;
  }
LABEL_81:
  v208 = v6;
  v63 = sub_7A2E20(v17, a2);
  v6 = v208;
  v18 = v63;
LABEL_13:
  v225 = 0;
  if ( v198 != v18 )
  {
    v207 = v6;
    while ( 1 )
    {
      v19 = *(_QWORD *)(**(_QWORD **)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *(_QWORD *)(v19 + 8);
      if ( (v20 & 7) != 0 || (v20 & 8) != 0 )
        v19 = sub_B0CF30(**(_QWORD **)(v18 + 16), a2);
      v21 = *(_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) != 28 )
      {
        v22 = *(_QWORD *)(**(_QWORD **)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        v23 = *(_QWORD *)(v22 + 8);
        if ( (v23 & 7) != 0 || (v23 & 8) != 0 )
          v22 = sub_B0CF30(**(_QWORD **)(v18 + 16), a2);
        v24 = sub_B0E890(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v24
          && (v25 = v24 + 64, (unsigned __int8)sub_79B8A0(v24 + 64))
          && (a2 = v207, (*(_BYTE *)(v207 + 72) & 0x7F) != 0)
          && (*(_BYTE *)(v207 + 72) & 0x7F) != 0x16 )
        {
          v103 = v25;
          v104 = v207 + 64;
          while ( 1 )
          {
            v214 = sub_79CC40(v104);
            if ( v214 == sub_79CC40(v103) )
              break;
            v105 = *(_QWORD *)(sub_79A2E0(v104) + 16);
            v104 = v105 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v105 & 4) != 0 )
            {
              v104 = *(_QWORD *)v104;
              v106 = *(_BYTE *)(v104 + 8) & 0x7F;
              if ( (*(_BYTE *)(v104 + 8) & 0x7F) == 0 )
                goto LABEL_28;
            }
            else
            {
              v106 = *(_BYTE *)(v104 + 8) & 0x7F;
              if ( (*(_BYTE *)(v104 + 8) & 0x7F) == 0 )
                goto LABEL_28;
            }
            if ( v106 == 22 )
              goto LABEL_28;
          }
        }
        else
        {
LABEL_28:
          if ( !a6 && (*(_BYTE *)(*(_QWORD *)v21 + 17LL) & 4) != 0 )
            goto LABEL_18;
        }
      }
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      {
        v26 = (unsigned __int64 *)(a1 + 40);
        v27 = 7;
      }
      else
      {
        LODWORD(v74) = *(_DWORD *)(a1 + 48);
        v26 = *(unsigned __int64 **)(a1 + 40);
        if ( !(_DWORD)v74 )
          goto LABEL_213;
        v27 = v74 - 1;
      }
      v28 = 1;
      v29 = nullptr;
      LODWORD(v30) = v27 & (v21 ^ (v21 >> 9));
      v31 = &v26[2 * (unsigned int)v30];
      v32 = *v31;
      if ( v21 == *v31 )
      {
LABEL_33:
        v33 = (char *)(v31 + 1);
        v34 = *(_BYTE *)(v18 + 12) & 1;
        if ( v34 )
          goto LABEL_34;
        goto LABEL_111;
      }
      while ( v32 )
      {
        if ( v32 == -1 && !v29 )
          v29 = v31;
        v30 = v27 & (unsigned int)(v30 + v28);
        v31 = &v26[2 * v30];
        v32 = *v31;
        if ( v21 == *v31 )
          goto LABEL_33;
        ++v28;
      }
      if ( !v29 )
        v29 = v31;
      v70 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v71 = 4 * v70;
      if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
        break;
      if ( v71 <= 0x17 )
      {
        if ( (unsigned int)(8 - *(_DWORD *)(a1 + 36) - v70) > 1 )
          goto LABEL_108;
        if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v228 = *(_QWORD *)(a1 + 40);
          v75 = (__int64 *)v230;
          LODWORD(v229) = *(_DWORD *)(a1 + 48);
        }
        else
        {
          v75 = &v228;
        }
        v76 = *(_QWORD *)(a1 + 56);
        if ( (unsigned __int64)(v76 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v76;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 64);
        }
        v77 = *(_QWORD *)(a1 + 72);
        if ( (unsigned __int64)(v77 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v77;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 80);
        }
        v78 = *(_QWORD *)(a1 + 88);
        if ( (unsigned __int64)(v78 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v78;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 96);
        }
        v79 = *(_QWORD *)(a1 + 104);
        if ( (unsigned __int64)(v79 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v79;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 112);
        }
        v80 = *(_QWORD *)(a1 + 120);
        if ( (unsigned __int64)(v80 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v80;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 128);
        }
        v81 = *(_QWORD *)(a1 + 136);
        if ( (unsigned __int64)(v81 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v81;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 144);
        }
        v82 = *(_QWORD *)(a1 + 152);
        if ( (unsigned __int64)(v82 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v75 = v82;
          v75 += 2;
          *((_DWORD *)v75 - 2) = *(_DWORD *)(a1 + 160);
        }
        v83 = *(_QWORD *)(a1 + 32) & 1LL;
        *(_QWORD *)(a1 + 32) = v83;
        if ( (_BYTE)v83 )
        {
          v84 = (_QWORD *)(a1 + 168);
          v85 = (_QWORD *)(a1 + 40);
LABEL_134:
          if ( (((_BYTE)v84 - (_BYTE)v85) & 0x10) == 0 || (*v85 = 0, v85 += 2, v85 != v84) )
          {
            do
            {
              *v85 = 0;
              v85 += 4;
              *(v85 - 2) = 0;
            }
            while ( v85 != v84 );
          }
          LOBYTE(v83) = *(_BYTE *)(a1 + 32);
          if ( v75 != &v228 )
            goto LABEL_138;
LABEL_145:
          if ( (v83 & 1) != 0 )
          {
LABEL_146:
            v93 = (_QWORD *)(a1 + 40);
            v94 = 7;
LABEL_147:
            v95 = v94 & (v21 ^ (v21 >> 9));
            v96 = 1;
            v97 = nullptr;
            v29 = &v93[2 * v95];
            v70 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
            v98 = *v29;
            if ( v21 != *v29 )
            {
              while ( v98 )
              {
                if ( v98 == -1 && !v97 )
                  v97 = v29;
                v95 = v94 & (v96 + v95);
                v29 = &v93[2 * v95];
                v98 = *v29;
                if ( v21 == *v29 )
                  goto LABEL_108;
                ++v96;
              }
              if ( v97 )
                v29 = v97;
            }
            goto LABEL_108;
          }
LABEL_207:
          v93 = *(_QWORD **)(a1 + 40);
        }
        else
        {
          v93 = *(_QWORD **)(a1 + 40);
          v85 = v93;
          v84 = &v93[2 * *(unsigned int *)(a1 + 48)];
          if ( v93 != v84 )
            goto LABEL_134;
          if ( v75 != &v228 )
          {
LABEL_138:
            v86 = &v228;
            do
            {
              while ( 1 )
              {
                v87 = *v86;
                if ( (unsigned __int64)(*v86 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                  break;
                v86 += 2;
                if ( v86 == v75 )
                  goto LABEL_145;
              }
              if ( (v83 & 1) != 0 )
              {
                v88 = a1 + 40;
                v89 = 7;
              }
              else
              {
                v161 = *(_DWORD *)(a1 + 48);
                v88 = *(_QWORD *)(a1 + 40);
                if ( !v161 )
                {
                  *(_QWORD *)&dword_0 = *v86;
                  BUG();
                }
                v89 = v161 - 1;
              }
              v90 = v89 & (v87 ^ (v87 >> 9));
              v83 = v88 + 16LL * v90;
              v91 = *(_QWORD *)v83;
              if ( v87 != *(_QWORD *)v83 )
              {
                v218 = 1;
                v192 = 0;
                while ( v91 )
                {
                  if ( !v192 && v91 == -1 )
                    v192 = v83;
                  v90 = v89 & (v218 + v90);
                  v83 = v88 + 16LL * v90;
                  v91 = *(_QWORD *)v83;
                  if ( v87 == *(_QWORD *)v83 )
                    goto LABEL_144;
                  ++v218;
                }
                if ( v192 )
                  v83 = v192;
              }
LABEL_144:
              v92 = *v86;
              v86 += 2;
              *(_QWORD *)v83 = v92;
              *(_DWORD *)(v83 + 8) = *((_DWORD *)v86 - 2);
              LODWORD(v83) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
              *(_DWORD *)(a1 + 32) = v83;
            }
            while ( v86 != v75 );
            goto LABEL_145;
          }
        }
        v129 = *(_DWORD *)(a1 + 48);
        if ( !v129 )
          goto LABEL_387;
        v94 = v129 - 1;
        goto LABEL_147;
      }
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v228 = *(_QWORD *)(a1 + 40);
        v165 = (__int64 *)v230;
        LODWORD(v229) = *(_DWORD *)(a1 + 48);
      }
      else
      {
        v165 = &v228;
      }
      v166 = *(_QWORD *)(a1 + 56);
      if ( (unsigned __int64)(v166 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v166;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 64);
      }
      v167 = *(_QWORD *)(a1 + 72);
      if ( (unsigned __int64)(v167 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v167;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 80);
      }
      v168 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v168 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v168;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 96);
      }
      v169 = *(_QWORD *)(a1 + 104);
      if ( (unsigned __int64)(v169 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v169;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 112);
      }
      v170 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int64)(v170 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v170;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 128);
      }
      v171 = *(_QWORD *)(a1 + 136);
      if ( (unsigned __int64)(v171 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v171;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 144);
      }
      v172 = *(_QWORD *)(a1 + 152);
      if ( (unsigned __int64)(v172 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v165 = v172;
        v165 += 2;
        *((_DWORD *)v165 - 2) = *(_DWORD *)(a1 + 160);
      }
      *(_BYTE *)(a1 + 32) &= ~1u;
      v173 = (_QWORD *)sub_25CC9C0(1024, 8);
      v47 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
      *(_QWORD *)(a1 + 32) &= 1uLL;
      *(_QWORD *)(a1 + 40) = v173;
      v174 = v173 + 128;
      *(_DWORD *)(a1 + 48) = 64;
      if ( !v47 )
      {
        v173 = (_QWORD *)(a1 + 40);
        v174 = (_QWORD *)(a1 + 168);
      }
      if ( (((_BYTE)v174 - (_BYTE)v173) & 0x10) == 0 || (*v173 = 0, v173 += 2, v173 != v174) )
      {
        do
        {
          *v173 = 0;
          v173 += 4;
          *(v173 - 2) = 0;
        }
        while ( v173 != v174 );
      }
      LOBYTE(v144) = *(_BYTE *)(a1 + 32);
      for ( i = &v228; i != v165; i += 2 )
      {
        v176 = *i;
        if ( (unsigned __int64)(*i - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          if ( (v144 & 1) != 0 )
          {
            v177 = a1 + 40;
            v178 = 7;
          }
          else
          {
            v184 = *(_DWORD *)(a1 + 48);
            v177 = *(_QWORD *)(a1 + 40);
            if ( !v184 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v178 = v184 - 1;
          }
          v179 = 1;
          v180 = nullptr;
          v181 = v178 & (v176 ^ (v176 >> 9));
          v182 = (__int64 *)(v177 + 16LL * v181);
          v183 = *v182;
          if ( *v182 != v176 )
          {
            while ( v183 )
            {
              if ( !v180 && v183 == -1 )
                v180 = v182;
              v181 = v178 & (v181 + v179);
              v182 = (__int64 *)(v177 + 16LL * v181);
              v183 = *v182;
              if ( v176 == *v182 )
                goto LABEL_296;
              ++v179;
            }
            if ( v180 )
              v182 = v180;
          }
LABEL_296:
          *v182 = *i;
          *((_DWORD *)v182 + 2) = *((_DWORD *)i + 2);
          v144 = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          *(_DWORD *)(a1 + 32) = v144;
        }
      }
LABEL_229:
      if ( (v144 & 1) != 0 )
      {
        v145 = a1 + 40;
        v146 = 7;
      }
      else
      {
        v152 = *(_DWORD *)(a1 + 48);
        v145 = *(_QWORD *)(a1 + 40);
        if ( !v152 )
        {
LABEL_387:
          *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
          BUG();
        }
        v146 = v152 - 1;
      }
      v147 = v146 & (v21 ^ (v21 >> 9));
      v70 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v29 = (unsigned __int64 *)(v145 + 16LL * v147);
      v148 = *v29;
      if ( v21 != *v29 )
      {
        v149 = 1;
        v150 = nullptr;
        while ( v148 )
        {
          if ( !v150 && v148 == -1 )
            v150 = v29;
          v147 = v146 & (v149 + v147);
          v29 = (unsigned __int64 *)(v145 + 16LL * v147);
          v148 = *v29;
          if ( v21 == *v29 )
            goto LABEL_108;
          ++v149;
        }
        if ( v150 )
          v29 = v150;
      }
LABEL_108:
      *(_DWORD *)(a1 + 32) = (2 * v70) | *(_DWORD *)(a1 + 32) & 1;
      if ( *v29 )
        --*(_DWORD *)(a1 + 36);
      *v29 = v21;
      v33 = (char *)(v29 + 1);
      *((_DWORD *)v29 + 2) = 0;
      v34 = *(_BYTE *)(v18 + 12) & 1;
      if ( v34 )
      {
LABEL_34:
        v35 = *v33;
        *v33 |= 1u;
        v34 = *(_BYTE *)(a1 + 362);
        v36 = (v35 & 1) == 0;
        if ( v34 )
        {
          if ( *(_QWORD *)(a1 + 224) )
          {
            v34 = 0;
          }
          else
          {
            v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v107 + 16) != 47 )
              v107 = 0;
            *(_QWORD *)(a1 + 224) = v107;
          }
        }
        goto LABEL_37;
      }
LABEL_111:
      *(_DWORD *)v33 += 2;
      v36 = 1;
LABEL_37:
      v37 = a1 + 232;
      if ( *(_BYTE *)(a1 + 361) )
      {
        v228 = v18;
        v38 = 0;
        v229 = v207;
        if ( (*(_BYTE *)(v18 + 12) & 1) == 0 )
          v38 = *(_DWORD *)v33 >> 1;
        v230[0] = v38;
        v39 = *(unsigned int *)(a1 + 240);
        v37 = a1 + 232;
        v40 = *(_QWORD *)(a1 + 232);
        v41 = v39 + 1;
        v42 = (const __m128i *)&v228;
        if ( *(unsigned int *)(a1 + 244) < (unsigned __int64)(v39 + 1) )
        {
          v37 = a1 + 232;
          if ( (unsigned __int64)&v228 < v40 || (unsigned __int64)&v228 >= v40 + 24 * v39 )
          {
            sub_25D6060(a1 + 232, a1 + 248, v41, 24);
            v39 = *(unsigned int *)(a1 + 240);
            v42 = (const __m128i *)&v228;
            v40 = *(_QWORD *)(a1 + 232);
          }
          else
          {
            v215 = (char *)&v228 - v40;
            sub_25D6060(a1 + 232, a1 + 248, v41, 24);
            v40 = *(_QWORD *)(a1 + 232);
            v39 = *(unsigned int *)(a1 + 240);
            v42 = (const __m128i *)&v215[v40];
          }
        }
        v43 = (__m128i *)(v40 + 24 * v39);
        *v43 = _mm_loadu_si128(v42);
        v43[1].m128i_i64[0] = v42[1].m128i_i64[0];
        ++*(_DWORD *)(a1 + 240);
        v44 = *(_BYTE *)(v18 + 12);
        v45 = (v44 >> 2) & 3;
        if ( (v44 & 0xC) == 0xC )
          v45 = *(_BYTE *)(v18 + 12) & 2;
        if ( v211 )
        {
          v46 = v212;
          if ( v212 < v45 )
            v46 = v45;
          v47 = v45 == 2;
          v45 = 3;
          if ( !v47 )
            v45 = v46;
        }
        *(_DWORD *)(a1 + 344) = v45;
      }
      a2 = v18;
      if ( a4(a5, v18, v37) )
      {
        if ( !*(_BYTE *)(a1 + 361) )
        {
          if ( !*(_BYTE *)(a1 + 360) )
            return 1;
          goto LABEL_17;
        }
        v99 = operator new(0x90u);
        v100 = *(_DWORD *)(a1 + 240);
        v101 = (void *)(v99 + 32);
        v102 = v99;
        *(_QWORD *)(v99 + 16) = v99 + 32;
        *(_QWORD *)(v99 + 24) = 0x400000000LL;
        if ( v100 && v37 != v99 + 16 )
        {
          if ( v100 <= 4 )
          {
            v108 = 24LL * v100;
            goto LABEL_177;
          }
          v227 = v100;
          sub_25D6060(v99 + 16, v101, v100, 24);
          v100 = v227;
          v108 = 24LL * *(unsigned int *)(a1 + 240);
          if ( v108 )
          {
            v101 = *(void **)(v102 + 16);
LABEL_177:
            v226 = v100;
            memcpy(v101, *(const void **)(a1 + 232), v108);
            v100 = v226;
          }
          *(_DWORD *)(v102 + 24) = v100;
        }
        a2 = a1 + 8;
        *(_DWORD *)(v102 + 128) = *(_DWORD *)(a1 + 344);
        *(_QWORD *)(v102 + 136) = *(_QWORD *)(a1 + 352);
        std::__detail::_List_node_base::_M_hook(
          (std::__detail::_List_node_base *)v102,
          (std::__detail::_List_node_base *)(a1 + 8));
        ++*(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(a1 + 361) )
          goto LABEL_154;
LABEL_17:
        v225 = 1;
LABEL_18:
        v18 += 24;
        if ( v18 == v198 )
          goto LABEL_70;
      }
      else
      {
        if ( !v36 )
          goto LABEL_66;
        v48 = **(_QWORD **)(v18 + 16);
        v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
        v50 = *(_QWORD *)(v49 + 8);
        if ( !a6 )
        {
          if ( (v50 & 7) != 0 || (v50 & 8) != 0 )
            v49 = sub_B0CF30(v48, v18);
          v53 = sub_B0E890(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL));
          if ( !v53 )
            goto LABEL_66;
          goto LABEL_159;
        }
        if ( (v50 & 7) != 0 || (v50 & 8) != 0 )
          v49 = sub_B0CF30(v48, v18);
        v51 = sub_B10F70(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v51 )
        {
          a2 = 0;
          v228 = *(_QWORD *)(v51 + 32);
          v52 = sub_B03A00(&v228, 0);
          if ( !v52 || (*(_BYTE *)(v52 + 28) & 0x7F) != 0x46 )
            goto LABEL_66;
          v53 = *(_QWORD *)(v52 + 48);
        }
        else
        {
          v110 = *(_QWORD *)(**(_QWORD **)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          v111 = *(_QWORD *)(v110 + 8);
          if ( (v111 & 7) != 0 || (v111 & 8) != 0 )
            v110 = sub_B0CF30(**(_QWORD **)(v18 + 16), v18);
          v112 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v112 + 16LL) != 47 )
            goto LABEL_66;
          v53 = sub_B14A40(*v112);
        }
        if ( !v53 )
          goto LABEL_66;
        if ( !*(_QWORD *)(v53 + 128) )
        {
          v185 = *(_QWORD *)(v53 + 104);
          v186 = *(_QWORD *)(v185 + 96);
          v187 = v186 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v186 & 1) != 0 )
          {
            if ( !v187 )
              goto LABEL_66;
LABEL_312:
            if ( (v187 & 4) != 0 )
            {
              v191 = (_DWORD *)(v186 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v191 )
              {
                v193 = *(_QWORD *)v191;
                v194 = *(_DWORD *)(*(_QWORD *)v191 + 12LL);
                if ( v191[2] != v194 )
                {
                  v191[2] = v194;
                  a2 = v185;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v193 + 144LL))(v193, v185);
                }
              }
            }
          }
          else if ( v187 <= 3 )
          {
            if ( !v187 )
              goto LABEL_66;
          }
          else
          {
            if ( (v186 & 2) == 0 )
              goto LABEL_66;
            v188 = (_QWORD *)(v186 & 0xFFFFFFFFFFFFFFFCLL);
            v189 = v188[2275];
            if ( v189 )
            {
              v190 = v188[274];
              v188[284] += 24LL;
              v187 = (v190 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              a2 = v187 + 24;
              if ( v188[275] >= v187 + 24 && v190 )
              {
                v188[274] = a2;
              }
              else
              {
                a2 = 24;
                v219 = v189;
                v195 = sub_76D810((__int64)(v188 + 274), 24, 3);
                v189 = v219;
                v187 = v195;
              }
              *(_QWORD *)v187 = v189;
              v186 = v187 | 5;
              *(_DWORD *)(v187 + 8) = 0;
              *(_QWORD *)(v187 + 16) = v185;
              *(_QWORD *)(v185 + 96) = v187 | 5;
              LOBYTE(v187) = v187 & 0xFA | 4;
              goto LABEL_312;
            }
            *(_QWORD *)(v185 + 96) = v185 & 0xFFFFFFFFFFFFFFFALL | 1;
          }
          if ( !*(_QWORD *)(v53 + 128) )
            goto LABEL_66;
        }
        if ( !*(_BYTE *)(a1 + 188) )
          goto LABEL_256;
        v54 = *(__int64 **)(a1 + 168);
        v55 = *(unsigned int *)(a1 + 180);
        v56 = &v54[v55];
        if ( v54 != v56 )
        {
          while ( v53 != *v54 )
          {
            if ( v56 == ++v54 )
              goto LABEL_299;
          }
          goto LABEL_66;
        }
LABEL_299:
        if ( (unsigned int)v55 < *(_DWORD *)(a1 + 176) )
        {
          *(_DWORD *)(a1 + 180) = v55 + 1;
          *v56 = v53;
        }
        else
        {
LABEL_256:
          a2 = v53;
          sub_25D5540(a1 + 168, v53);
          if ( !v160 )
            goto LABEL_66;
        }
LABEL_159:
        a2 = v213;
        if ( (unsigned __int8)sub_76FAA0(a1, v213, v53, a4, a5, a6) )
        {
          if ( !*(_BYTE *)(a1 + 360) )
            return 1;
          if ( !*(_BYTE *)(a1 + 361) )
            goto LABEL_17;
LABEL_154:
          --*(_DWORD *)(a1 + 240);
          goto LABEL_17;
        }
LABEL_66:
        if ( *(_BYTE *)(a1 + 361) )
          --*(_DWORD *)(a1 + 240);
        if ( !v34 )
          goto LABEL_18;
        v18 += 24;
        *(_QWORD *)(a1 + 224) = 0;
        if ( v18 == v198 )
          goto LABEL_70;
      }
    }
    v72 = *(unsigned int *)(a1 + 48);
    v73 = 2 * v72;
    if ( v71 < 3 * (int)v72 )
    {
      if ( (unsigned int)v72 >> 3 < (int)v72 - *(_DWORD *)(a1 + 36) - v70 )
        goto LABEL_108;
      v113 = *(_QWORD **)(a1 + 40);
      if ( (unsigned int)v72 <= 8 )
      {
        *(_BYTE *)(a1 + 32) |= 1u;
        v116 = (unsigned int)v72;
        v115 = v113;
      }
      else
      {
        v221 = *(_DWORD *)(a1 + 48);
        v114 = ((((((((((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                    | (unsigned int)(v72 - 1)
                    | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 4)
                  | (((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                  | (unsigned int)(v72 - 1)
                  | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 8)
                | (((((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                  | (unsigned int)(v72 - 1)
                  | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 4)
                | (((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                | (unsigned int)(v72 - 1)
                | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 16)
              | (((((((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                  | (unsigned int)(v72 - 1)
                  | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 4)
                | (((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                | (unsigned int)(v72 - 1)
                | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 8)
              | (((((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
                | (unsigned int)(v72 - 1)
                | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 4)
              | (((unsigned int)(v72 - 1) | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1)) >> 2)
              | (unsigned int)(v72 - 1)
              | ((unsigned __int64)(unsigned int)(v72 - 1) >> 1))
             + 1;
        if ( (unsigned int)v114 < 0x40 )
          LODWORD(v114) = 64;
        v216 = v114;
        v115 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v114, 8);
        v116 = v216;
        v72 = v221;
        *(_QWORD *)(a1 + 40) = v115;
        *(_DWORD *)(a1 + 48) = v216;
      }
      v117 = 2 * v116;
      v118 = &v113[2 * v72];
      v119 = *(_QWORD *)(a1 + 32) & 1LL;
      *(_QWORD *)(a1 + 32) = v119;
      if ( v119 )
      {
        v115 = (_QWORD *)(a1 + 40);
        v117 = 16;
      }
      v120 = &v115[v117];
      if ( v115 != &v115[v117] )
      {
        if ( ((v117 * 8) & 0x10) == 0 || (*v115 = 0, v115 += 2, v120 != v115) )
        {
          do
          {
            *v115 = 0;
            v115 += 4;
            *(v115 - 2) = 0;
          }
          while ( v120 != v115 );
        }
      }
      for ( j = v113; v118 != j; *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1 )
      {
        while ( 1 )
        {
          v122 = *j;
          if ( *j - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            break;
          j += 2;
          if ( v118 == j )
            goto LABEL_206;
        }
        if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        {
          v123 = a1 + 40;
          v124 = 7;
        }
        else
        {
          v159 = *(_DWORD *)(a1 + 48);
          v123 = *(_QWORD *)(a1 + 40);
          if ( !v159 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v124 = v159 - 1;
        }
        v125 = v124 & (v122 ^ (v122 >> 9));
        v126 = (__int64 *)(v123 + 16LL * v125);
        v127 = *v126;
        if ( *v126 != v122 )
        {
          v224 = 1;
          v223 = nullptr;
          while ( v127 )
          {
            if ( v127 == -1 )
            {
              if ( v223 )
                v126 = v223;
              v223 = v126;
            }
            v125 = v124 & (v224 + v125);
            v126 = (__int64 *)(v123 + 16LL * v125);
            v127 = *v126;
            if ( v122 == *v126 )
              goto LABEL_205;
            ++v224;
          }
          if ( v223 )
            v126 = v223;
        }
LABEL_205:
        v128 = *j;
        j += 2;
        *v126 = v128;
        *((_DWORD *)v126 + 2) = *((_DWORD *)j - 2);
      }
LABEL_206:
      operator delete();
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
        goto LABEL_146;
      goto LABEL_207;
    }
    v130 = *(unsigned __int64 **)(a1 + 40);
    if ( v73 > 8 )
    {
      v220 = *(_DWORD *)(a1 + 48);
      v196 = (((v73 - 1) | ((unsigned __int64)(v73 - 1) >> 1)) >> 2)
           | (v73 - 1)
           | ((unsigned __int64)(v73 - 1) >> 1)
           | (((((v73 - 1) | ((unsigned __int64)(v73 - 1) >> 1)) >> 2) | (v73 - 1) | ((unsigned __int64)(v73 - 1) >> 1)) >> 4);
      v74 = (v196 | (v196 >> 8) | ((v196 | (v196 >> 8)) >> 16)) + 1;
      if ( (unsigned int)v74 < 0x40 )
        LODWORD(v74) = 64;
      v197 = sub_25CC9C0(16LL * (unsigned int)v74, 8);
      *(_DWORD *)(a1 + 48) = v74;
      v131 = v220;
      *(_QWORD *)(a1 + 40) = v197;
      v26 = (unsigned __int64 *)v197;
    }
    else
    {
      v26 = *(unsigned __int64 **)(a1 + 40);
      LODWORD(v74) = *(_DWORD *)(a1 + 48);
LABEL_213:
      *(_BYTE *)(a1 + 32) |= 1u;
      v130 = v26;
      v131 = (unsigned int)v74;
    }
    v132 = &v130[2 * v131];
    v133 = 2LL * (unsigned int)v74;
    v134 = *(_QWORD *)(a1 + 32) & 1LL;
    *(_QWORD *)(a1 + 32) = v134;
    if ( v134 )
    {
      v26 = (unsigned __int64 *)(a1 + 40);
      v133 = 16;
    }
    v135 = &v26[v133];
    if ( v26 != &v26[v133] )
    {
      if ( ((v133 * 8) & 0x10) == 0 || (*v26 = 0, v26 += 2, v135 != v26) )
      {
        do
        {
          *v26 = 0;
          v26 += 4;
          *(v26 - 2) = 0;
        }
        while ( v135 != v26 );
      }
    }
    for ( k = v130; v132 != k; *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1 )
    {
      while ( 1 )
      {
        v137 = *k;
        if ( *k - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          break;
        k += 2;
        if ( v132 == k )
          goto LABEL_228;
      }
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      {
        v138 = a1 + 40;
        v139 = 7;
      }
      else
      {
        v151 = *(_DWORD *)(a1 + 48);
        v138 = *(_QWORD *)(a1 + 40);
        if ( !v151 )
        {
          *(_QWORD *)&dword_0 = *k;
          BUG();
        }
        v139 = v151 - 1;
      }
      v140 = v139 & (v137 ^ (v137 >> 9));
      v141 = (__int64 *)(v138 + 16LL * v140);
      v142 = *v141;
      if ( v137 != *v141 )
      {
        v222 = 1;
        v217 = nullptr;
        while ( v142 )
        {
          if ( v142 == -1 )
          {
            if ( v217 )
              v141 = v217;
            v217 = v141;
          }
          v140 = v139 & (v222 + v140);
          v141 = (__int64 *)(v138 + 16LL * v140);
          v142 = *v141;
          if ( v137 == *v141 )
            goto LABEL_227;
          ++v222;
        }
        if ( v217 )
          v141 = v217;
      }
LABEL_227:
      v143 = *k;
      k += 2;
      *v141 = v143;
      *((_DWORD *)v141 + 2) = *((_DWORD *)k - 2);
    }
LABEL_228:
    operator delete();
    LOBYTE(v144) = *(_BYTE *)(a1 + 32);
    goto LABEL_229;
  }
LABEL_70:
  *(_DWORD *)(a1 + 344) = v212;
  return v225;
}

