unsigned __int16 *__fastcall sub_19E4C10(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __m128 si128,
        __m128 a6)
{
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  const __m128i *v21; // rbx
  unsigned __int64 *v22; // r14
  __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r13
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // r13
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r8
  int v48; // eax
  unsigned __int64 *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  __int64 v53; // r8
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // rdx
  void *v57; // r15
  unsigned __int64 v58; // r12
  unsigned int v59; // eax
  const void *v60; // r9
  unsigned int v61; // r13d
  unsigned int v62; // r12d
  int v63; // esi
  int v64; // eax
  bool v65; // zf
  int v66; // eax
  unsigned int v67; // r12d
  int v68; // eax
  void *v69; // r10
  unsigned int v70; // ecx
  int v71; // r11d
  __int64 v72; // r15
  unsigned __int64 v73; // r12
  unsigned int v74; // r13d
  unsigned __int64 v75; // rax
  void *v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned int v79; // r12d
  __int64 v80; // rdx
  void *v81; // rax
  int v82; // esi
  int v83; // eax
  _QWORD *v84; // rbx
  _QWORD *v85; // rbp
  void *v86; // rdi
  void *v87; // rdi
  __int64 v88; // rdi
  __int64 v89; // rsi
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  __int64 v92; // r8
  char v93; // r12
  unsigned int v94; // ebp
  __int64 v95; // rbx
  unsigned int v96; // r12d
  int v97; // eax
  const void *v98; // r10
  int v99; // r11d
  __int64 v100; // r15
  const void *v101; // rsi
  int v102; // r9d
  unsigned int v103; // ecx
  __int64 v104; // rax
  __int64 *v105; // rsi
  __int64 v106; // r12
  int v107; // edx
  int v108; // r9d
  int v109; // eax
  int v110; // edx
  unsigned int v111; // ecx
  int *v112; // r15
  int *v113; // rax
  char v114; // dl
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  _QWORD *v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // r12
  size_t v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r14
  __int64 v127; // rax
  unsigned __int64 v128; // rax
  __int64 v129; // r12
  size_t v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r12
  size_t v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned int v137; // ebx
  __int64 v138; // r12
  unsigned int v139; // eax
  int v140; // eax
  size_t v141; // rax
  __int64 v142; // rax
  void *v143; // rax
  unsigned __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // r12
  __int64 v153; // rax
  _QWORD *v154; // rax
  unsigned __int64 v155; // [rsp-10h] [rbp-208h]
  unsigned __int64 v156; // [rsp-8h] [rbp-200h]
  char v157; // [rsp+0h] [rbp-1F8h]
  __int64 v158; // [rsp+0h] [rbp-1F8h]
  __int64 v159; // [rsp+0h] [rbp-1F8h]
  __int64 v160; // [rsp+0h] [rbp-1F8h]
  __int64 v161; // [rsp+0h] [rbp-1F8h]
  _QWORD *v162; // [rsp+8h] [rbp-1F0h]
  __int64 v163; // [rsp+8h] [rbp-1F0h]
  __int64 v165; // [rsp+10h] [rbp-1E8h]
  __int64 v167; // [rsp+18h] [rbp-1E0h]
  const void *v168; // [rsp+18h] [rbp-1E0h]
  __int64 v169; // [rsp+20h] [rbp-1D8h]
  __int64 *v170; // [rsp+38h] [rbp-1C0h]
  void *v171; // [rsp+48h] [rbp-1B0h]
  const void *v172; // [rsp+48h] [rbp-1B0h]
  int v173; // [rsp+50h] [rbp-1A8h]
  void *v174; // [rsp+50h] [rbp-1A8h]
  __int64 v175; // [rsp+58h] [rbp-1A0h]
  unsigned int v176; // [rsp+58h] [rbp-1A0h]
  int v177; // [rsp+60h] [rbp-198h]
  __int64 v178; // [rsp+60h] [rbp-198h]
  int v179; // [rsp+6Ch] [rbp-18Ch]
  int v180; // [rsp+7Ch] [rbp-17Ch] BYREF
  __int64 v181; // [rsp+80h] [rbp-178h] BYREF
  __int64 v182; // [rsp+88h] [rbp-170h] BYREF
  __int64 v183; // [rsp+90h] [rbp-168h] BYREF
  __int64 v184; // [rsp+98h] [rbp-160h]
  unsigned int v185; // [rsp+A0h] [rbp-158h]
  __int64 v186; // [rsp+B0h] [rbp-148h] BYREF
  int v187; // [rsp+B8h] [rbp-140h] BYREF
  void *v188; // [rsp+C0h] [rbp-138h]
  int *v189; // [rsp+C8h] [rbp-130h]
  int *v190; // [rsp+D0h] [rbp-128h]
  __int64 v191; // [rsp+D8h] [rbp-120h]
  __int64 v192[2]; // [rsp+E0h] [rbp-118h] BYREF
  unsigned int v193; // [rsp+F0h] [rbp-108h] BYREF
  char v194; // [rsp+F4h] [rbp-104h]
  void *v195; // [rsp+F8h] [rbp-100h]
  unsigned int v196; // [rsp+100h] [rbp-F8h]
  char v197; // [rsp+104h] [rbp-F4h]
  void *s1[2]; // [rsp+130h] [rbp-C8h] BYREF
  _DWORD v199[46]; // [rsp+140h] [rbp-B8h] BYREF

  v6 = (__int64 *)a1;
  v169 = a2;
  v162 = (_QWORD *)sub_168B6C0(a1);
  if ( !*(_QWORD *)(a1 + 296) )
  {
    a2 = (unsigned int)a2;
    v30 = sub_19D76D0(*(__int64 **)a1, v169, 1u);
    *(_QWORD *)(a1 + 296) = v30;
    if ( !v30 )
      return (_WORD *)(&dword_0 + 1);
  }
  v7 = sub_A8A250(v162);
  v12 = *(_QWORD *)(v7 + 48);
  if ( !v12 )
  {
    a2 = v7;
    v31 = sub_A7AA70((__int64)v162, v7, v8, v9, (__int64)v10, v11);
    v13 = *(_QWORD *)(a1 + 304);
    v14 = v31;
    if ( v13 )
      goto LABEL_4;
LABEL_21:
    v32 = sub_E963B0(*(_QWORD *)(a1 + 88), 4);
    v33 = *(_QWORD *)(a1 + 296);
    v181 = v32;
    v13 = sub_BAD910(v33, v32, 0, 0, 1, 0);
    if ( !v13 && (*(_BYTE *)(sub_168B6E0((__int64)v6) + 106) & 1) != 0 )
    {
      v120 = sub_704780(
               (__int64 *)(*(_QWORD *)(v162[283] + 80LL) + 72LL),
               *(_QWORD *)(v162[283] + 80LL),
               v116,
               v117,
               v118,
               v119);
      if ( v120 )
        v120 += 5;
      v13 = sub_BA7B60(v162, 0, 0, v181, v14, 0, (__int64)v120, 0, 0, 0, 0, 1, 0, 1, 0);
      s1[0] = v199;
      s1[1] = (void *)0x300000000LL;
      v121 = sub_A70010((__int64)v162, v14);
      v122 = v162[2188];
      v159 = v121;
      v123 = j__strlen("objects");
      v124 = sub_6F3470(v122, "objects", v123);
      v125 = 0;
      if ( v13 )
        v125 = v13 + 48;
      v126 = v125;
      v127 = sub_B74530((__int64)v162, v125, 0, 0, v124, v159, 0, 0, 0);
      sub_19D1980((__int64)s1, v127);
      v128 = sub_A70010((__int64)v162, v14);
      v129 = v162[2188];
      v160 = v128;
      v130 = j__strlen("keys");
      v131 = sub_6F3470(v129, "keys", v130);
      v132 = sub_B74530((__int64)v162, v126, 0, 0, v131, v160, 0, 0, 0);
      sub_19D1980((__int64)s1, v132);
      v133 = v162[2188];
      v161 = v162[2347];
      v134 = j__strlen("cnt");
      v135 = sub_6F3470(v133, "cnt", v134);
      v136 = sub_B74530((__int64)v162, v126, 0, 0, v135, v161, 0, 0, 0);
      sub_19D1980((__int64)s1, v136);
      sub_BA9CC0(v13, (__int64)v162, s1[0], LODWORD(s1[1]), 0, 0);
      if ( s1[0] != v199 )
        free(s1[0]);
    }
    if ( !(unsigned __int8)sub_19D4020(*v6, v169, v6[37], v181, v13) )
      return (_WORD *)(&dword_0 + 1);
    v182 = *(_QWORD *)(**(_QWORD **)(v13 + 96) + 48LL);
    v36 = *(_QWORD *)(v182 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v36 + 16) != 42
      && (v36 = sub_19CD660(*(_QWORD *)(v182 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)v169, v34, v35)) == 0
      || !sub_19CD5D0(*(_QWORD *)(v36 + 32), v14) )
    {
      sub_168B9F0((__int64)s1, v6, v169, 0x110Du, 0);
      sub_19D3F70((__int64)s1, &v181);
      sub_15F7200(s1);
      sub_168B9F0((__int64)s1, v6, *(_DWORD *)(**(_QWORD **)(v13 + 96) + 24LL), 0x1809u, 0);
      LODWORD(v186) = 0;
      v104 = sub_1587D10((__int64)s1, (int *)&v186);
      v105 = &v182;
LABEL_80:
      v106 = sub_1605D30(v104, v105);
      v192[0] = sub_A70010((__int64)v162, v14 | 1);
      sub_162B6D0(v106, v192);
      goto LABEL_81;
    }
    v183 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 8LL) + 48LL);
    v39 = *(_QWORD *)(v183 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v39 + 16) == 42 || (v39 = sub_19CD660(*(_QWORD *)(v183 & 0xFFFFFFFFFFFFFFF0LL), v14, v37, v38)) != 0 )
    {
      a2 = v14;
      if ( sub_19CD5D0(*(_QWORD *)(v39 + 32), v14) )
      {
LABEL_27:
        v186 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 16LL) + 48LL);
        if ( sub_9EC890(*(_QWORD *)(v186 & 0xFFFFFFFFFFFFFFF0LL), a2, v40, v41, v42) )
        {
          v6[38] = v13;
          goto LABEL_4;
        }
        sub_168B9F0((__int64)s1, v6, v169, 0x110Du, 0);
        sub_19D3F70((__int64)s1, &v181);
        sub_15F7200(s1);
        sub_168B9F0((__int64)s1, v6, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 16LL) + 24LL), 0x1809u, 0);
        v180 = 2;
        v145 = sub_1587D10((__int64)s1, &v180);
        v146 = sub_1605D30(v145, &v186);
        v147 = v146;
        if ( *(_BYTE *)(v146 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v146 + 32), (__int64)"integral", 1u);
        }
        else if ( *(_BYTE *)(v146 + 132) )
        {
          v152 = sub_168B9E0((_QWORD *)v146);
          v153 = *(_QWORD *)(v147 + 16);
          if ( v153 )
            v153 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v153 + 32LL))(*(_QWORD *)(v147 + 16));
          v192[0] = v153;
          v154 = sub_1587BC0(v152, v192, v148, v149, v150, v151);
          sub_AE9DF0((unsigned __int8 **)(*v154 + 32LL * *(unsigned int *)(v147 + 128) + 8), (__int64)"integral", 1u);
        }
LABEL_81:
        sub_15F7200(s1);
        return (_WORD *)(&dword_0 + 1);
      }
      if ( (v6[39] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_139;
      v141 = j__strlen("NSCopying");
      v142 = sub_6F3470(v162[2188], "NSCopying", v141);
      v143 = (void *)sub_1A86640(v6, v142, (unsigned int)v169, 0);
      if ( v143 )
      {
        s1[0] = v143;
        v144 = sub_A750A0((__int64)v162, v162[2392], nullptr, 0, s1, 1, 0);
        v6[39] = v144;
        v6[39] = sub_A74EC0((__int64)v162, v144);
      }
      if ( (v6[39] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v41 = *(_QWORD *)(v39 + 32);
LABEL_139:
        a2 = v6[39];
        if ( sub_19CD5D0(v41, a2) )
          goto LABEL_27;
      }
    }
    sub_168B9F0((__int64)s1, v6, v169, 0x110Du, 0);
    sub_19D3F70((__int64)s1, &v181);
    sub_15F7200(s1);
    sub_168B9F0((__int64)s1, v6, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 96) + 8LL) + 24LL), 0x1809u, 0);
    LODWORD(v186) = 1;
    v104 = sub_1587D10((__int64)s1, (int *)&v186);
    v105 = &v183;
    goto LABEL_80;
  }
  v13 = *(_QWORD *)(a1 + 304);
  v14 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v13 )
    goto LABEL_21;
LABEL_4:
  v15 = *(_QWORD **)(v13 + 96);
  v16 = *(_QWORD *)(*(_QWORD *)(*v15 + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 42 )
  {
    v16 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v15 + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v9);
    v15 = *(_QWORD **)(v6[38] + 96);
  }
  v17 = *(_QWORD *)(v16 + 32);
  v18 = *(_QWORD *)(*(_QWORD *)(v15[1] + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) != 42 )
    v18 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v15[1] + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v9);
  v19 = *(_QWORD *)(v18 + 32);
  v20 = (__int64)a3;
  v21 = (const __m128i *)((char *)a3 + 24 * a4);
  if ( a3 == v21 )
  {
    v43 = 0;
  }
  else
  {
    v22 = (unsigned __int64 *)a3;
    v157 = 0;
    do
    {
      v28 = sub_19DBB20((__int64 *)*v6, (_QWORD *)*v22, v19, 0, (__int64)v10, v11, si128, a6);
      if ( v28 == 1 )
        return (_WORD *)(&dword_0 + 1);
      v23 = sub_19DBB20((__int64 *)*v6, (_QWORD *)v22[1], v17, 0, v26, v27, si128, a6);
      if ( v23 == 1 )
        return (_WORD *)(&dword_0 + 1);
      v24 = *((_DWORD *)v22 + 4);
      v25 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
      v10 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFFELL);
      v22[1] = (unsigned __int64)v25;
      *v22 = v28 & 0xFFFFFFFFFFFFFFFELL;
      if ( v24 )
      {
        if ( (*v10 & 0x4000) == 0 && (*v25 & 0x4000) == 0 )
        {
          sub_168B9F0((__int64)s1, v6, *((_DWORD *)v22 + 4), 0x12ACu, 0);
          v94 = sub_EEC140(v22[1]);
          v192[0] = __PAIR64__(v94, sub_EEB7E0(*v22, (__int64)v6, *(double *)si128.m128_u64));
          sub_1587DB0((__int64)s1, v192);
          sub_15F7200(s1);
          return (_WORD *)(&dword_0 + 1);
        }
        v157 = 1;
      }
      v22 += 3;
    }
    while ( v21 != (const __m128i *)v22 );
    v43 = v157;
  }
  v44 = sub_A82070((__int64)v162, v6[37], 0, v20, (__int64)v10, v11);
  v45 = sub_A74EC0((__int64)v162, v44);
  v46 = (__int64)a3;
  v163 = sub_C9B190(v162, a3, a4, v43, v45, v6[38], v169);
  v158 = *v6;
  if ( ((*(_DWORD *)v163 >> 14) & 0xC) != 0 )
    return sub_19A3E40(v158, (unsigned __int16 *)v163, v155, v156, v47, si128, a6);
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v187 = 0;
  v188 = nullptr;
  v189 = &v187;
  v190 = &v187;
  v191 = 0;
  v48 = *(_DWORD *)(v163 + 16) & 0x7FFFFFFF;
  if ( !v48 )
  {
    v88 = 0;
    v89 = 0;
    goto LABEL_65;
  }
  v170 = v6;
  v49 = (unsigned __int64 *)(v163 + 40);
  v165 = v163 + 16LL * (unsigned int)(v48 - 1) + 56;
  do
  {
    v52 = sub_BFBAE0(*v49);
    v54 = *(_WORD *)v52 & 0x1FF;
    if ( v54 != 29 )
      goto LABEL_49;
    v55 = *(_QWORD *)(v52 + 16);
    v56 = *(unsigned int *)(v55 + 4);
    v57 = (void *)(v55 + 4 * v56 + 20);
    v58 = *(_DWORD *)(v55 + 16) * ((*(_WORD *)(v55 + 2) >> 6) & 7u);
    v59 = sub_C00A40(v52, v46, v56, v51, v53);
    s1[0] = v57;
    v61 = v59;
    v199[0] = v59;
    s1[1] = (void *)v58;
    v62 = v185;
    if ( !v185 )
    {
      v192[0] = 0;
      goto LABEL_37;
    }
    v46 = (__int64)s1[1];
    v67 = v185 - 1;
    v167 = v183;
    v68 = sub_2248890(v57, s1[1]);
    v69 = s1[1];
    v60 = s1[0];
    v70 = v67 & v68;
    if ( s1[1] )
    {
      v71 = 1;
      v53 = 0;
      while ( 1 )
      {
        v72 = v167 + 24LL * v70;
        v46 = *(_QWORD *)v72;
        if ( *(_QWORD *)v72 == -1 )
          break;
        if ( v46 == -2 )
        {
          if ( v60 == (const void *)-2LL )
            goto LABEL_47;
          if ( !v53 )
            v53 = v167 + 24LL * v70;
        }
        else if ( v69 == *(void **)(v72 + 8) )
        {
          v179 = v71;
          v178 = v53;
          v176 = v70;
          v174 = v69;
          v172 = v60;
          v140 = memcmp(v60, (const void *)v46, (size_t)v69);
          v60 = v172;
          v69 = v174;
          v70 = v176;
          v53 = v178;
          v71 = v179;
          if ( !v140 )
            goto LABEL_47;
        }
        v103 = v71 + v70;
        ++v71;
        v70 = v67 & v103;
      }
    }
    else
    {
      v110 = 1;
      v53 = 0;
      while ( 1 )
      {
        v72 = v167 + 24LL * v70;
        if ( *(_QWORD *)v72 == -1 )
          break;
        if ( *(_QWORD *)v72 == -2 )
        {
          if ( s1[0] == (void *)-2LL )
            goto LABEL_47;
          if ( !v53 )
            v53 = v167 + 24LL * v70;
        }
        else if ( !*(_QWORD *)(v72 + 8) )
        {
          goto LABEL_47;
        }
        v111 = v110 + v70;
        ++v110;
        v70 = v67 & v111;
      }
    }
    if ( v60 != (const void *)-1LL )
    {
      v62 = v185;
      if ( !v53 )
        v53 = v72;
      v64 = v184 + 1;
      v50 = 3 * v185;
      v51 = (unsigned int)(4 * (v184 + 1));
      v192[0] = v53;
      if ( (unsigned int)v51 < (unsigned int)v50 )
      {
        v51 = v185 - (v64 + HIDWORD(v184));
        v50 = v185 >> 3;
        if ( (unsigned int)v51 > (unsigned int)v50 )
          goto LABEL_39;
        v63 = v185;
LABEL_38:
        sub_19E48E0((__int64)&v183, v63, v50, v51, v53, (__int64)v60);
        v46 = (__int64)s1;
        sub_19D24A0(&v183, s1, v192);
        v53 = v192[0];
        v64 = v184 + 1;
LABEL_39:
        v65 = *(_QWORD *)v53 == -1;
        LODWORD(v184) = v64;
        if ( !v65 )
          --HIDWORD(v184);
        si128 = (__m128)_mm_load_si128((const __m128i *)s1);
        v66 = v199[0];
        *(__m128 *)v53 = si128;
        *(_DWORD *)(v53 + 16) = v66;
        goto LABEL_48;
      }
LABEL_37:
      v63 = 2 * v62;
      goto LABEL_38;
    }
LABEL_47:
    sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), v61, 0x1BF8u, 0);
    sub_15F7200(s1);
    v46 = v158 + 8;
    sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), *(_DWORD *)(v72 + 16), 0x1802u, 0);
    sub_15F7200(s1);
LABEL_48:
    v54 = *(_WORD *)v52 & 0x1FF;
LABEL_49:
    if ( v54 != 39 )
      goto LABEL_58;
    v73 = *(_QWORD *)(v52 + 16);
    v74 = sub_C00A40(v52, v46, v50, v51, v53);
    v75 = sub_BFBAE0(v73);
    if ( (*(_WORD *)v75 & 0x1FF) == 9 )
    {
      v78 = *(unsigned int *)(v75 + 4);
      v79 = v185;
      v80 = *(_DWORD *)(v75 + 16) * ((*(_WORD *)(v75 + 2) >> 6) & 7u);
      v81 = (void *)(v75 + 4 * v78 + 20);
      v199[0] = v74;
      s1[0] = v81;
      s1[1] = (void *)v80;
      if ( v185 )
      {
        v95 = v183;
        v96 = v185 - 1;
        v97 = sub_2248890(v81, v80);
        v76 = s1[1];
        v98 = s1[0];
        v77 = v96 & v97;
        if ( s1[1] )
        {
          v99 = 1;
          v78 = 0;
          while ( 1 )
          {
            v100 = v95 + 24LL * (unsigned int)v77;
            v101 = *(const void **)v100;
            if ( *(_QWORD *)v100 == -1 )
              break;
            if ( v101 == (const void *)-2LL )
            {
              if ( v98 == (const void *)-2LL )
                goto LABEL_88;
              if ( !v78 )
                v78 = v95 + 24LL * (unsigned int)v77;
            }
            else if ( v76 == *(void **)(v100 + 8) )
            {
              v177 = v99;
              v175 = v78;
              v173 = v77;
              v171 = v76;
              v168 = v98;
              v109 = memcmp(v98, v101, (size_t)v76);
              v98 = v168;
              v76 = v171;
              LODWORD(v77) = v173;
              v78 = v175;
              v99 = v177;
              if ( !v109 )
                goto LABEL_88;
            }
            v102 = v99 + v77;
            ++v99;
            v77 = v96 & v102;
          }
        }
        else
        {
          v107 = 1;
          v78 = 0;
          while ( 1 )
          {
            v100 = v95 + 24LL * (unsigned int)v77;
            if ( *(_QWORD *)v100 == -1 )
              break;
            if ( *(_QWORD *)v100 == -2 )
            {
              if ( s1[0] == (void *)-2LL )
                goto LABEL_88;
              if ( !v78 )
                v78 = v95 + 24LL * (unsigned int)v77;
            }
            else if ( !*(_QWORD *)(v100 + 8) )
            {
              goto LABEL_88;
            }
            v108 = v107 + v77;
            ++v107;
            v77 = v96 & v108;
          }
        }
        if ( v98 == (const void *)-1LL )
        {
LABEL_88:
          sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), v74, 0x1BF8u, 0);
          sub_15F7200(s1);
          v46 = v158 + 8;
          sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), *(_DWORD *)(v100 + 16), 0x1802u, 0);
          sub_15F7200(s1);
          goto LABEL_58;
        }
        v79 = v185;
        if ( !v78 )
          v78 = v100;
        v83 = v184 + 1;
        v80 = 3 * v185;
        v192[0] = v78;
        if ( 4 * ((int)v184 + 1) < (unsigned int)v80 )
        {
          v46 = v185 - (v83 + HIDWORD(v184));
          v80 = v185 >> 3;
          if ( (unsigned int)v46 > (unsigned int)v80 )
            goto LABEL_55;
          v82 = v185;
LABEL_54:
          sub_19E48E0((__int64)&v183, v82, v80, v78, (__int64)v76, v77);
          v46 = (__int64)s1;
          sub_19D24A0(&v183, s1, v192);
          v78 = v192[0];
          v83 = v184 + 1;
LABEL_55:
          v65 = *(_QWORD *)v78 == -1;
          LODWORD(v184) = v83;
          if ( !v65 )
            --HIDWORD(v184);
          a6 = (__m128)_mm_load_si128((const __m128i *)s1);
          *(_DWORD *)(v78 + 16) = v199[0];
          *(__m128 *)v78 = a6;
          goto LABEL_58;
        }
      }
      else
      {
        v192[0] = 0;
      }
      v82 = 2 * v79;
      goto LABEL_54;
    }
    v194 &= ~1u;
    LOWORD(v192[0]) = 0;
    v193 = 0;
    v46 = (__int64)v192;
    v192[1] = 0;
    v93 = sub_C3F220(v73, (__int64)v192, *(_QWORD *)(v158 + 248), 2, 0, v77);
    if ( v93 )
    {
      LODWORD(s1[1]) = v196;
      if ( v196 > 0x40 )
        sub_2205510(s1);
      else
        s1[0] = v195;
      v112 = (int *)v188;
      v199[0] = v74;
      BYTE4(s1[1]) = v197;
      if ( v188 )
      {
        while ( 1 )
        {
          if ( (int)sub_98E2D0((__int64 *)s1, (__int64 *)v112 + 4) >= 0 )
          {
            v113 = *((int **)v112 + 3);
            v114 = 0;
          }
          else
          {
            v113 = *((int **)v112 + 2);
            v114 = v93;
          }
          if ( !v113 )
            break;
          v112 = v113;
        }
        if ( v114 )
        {
          if ( v112 != v189 )
            goto LABEL_111;
        }
        else
        {
          v115 = (__int64)v112;
          if ( (int)sub_98E2D0((__int64 *)v112 + 4, (__int64 *)s1) >= 0 )
            goto LABEL_112;
        }
      }
      else
      {
        v112 = &v187;
        if ( v189 == &v187 )
        {
          v137 = 1;
LABEL_133:
          v138 = operator new(0x38u);
          v139 = (unsigned int)s1[1];
          *(_DWORD *)(v138 + 40) = s1[1];
          if ( v139 > 0x40 )
            sub_2205510(v138 + 32);
          else
            *(void **)(v138 + 32) = s1[0];
          v46 = v138;
          *(_BYTE *)(v138 + 44) = BYTE4(s1[1]);
          *(_DWORD *)(v138 + 48) = v199[0];
          std::_Rb_tree_insert_and_rebalance(v137, v138, v112, &v187);
          ++v191;
          if ( LODWORD(s1[1]) > 0x40 && s1[0] )
            operator delete[](s1[0]);
          goto LABEL_67;
        }
LABEL_111:
        v115 = std::_Rb_tree_decrement(v112);
        if ( (int)sub_98E2D0((__int64 *)(v115 + 32), (__int64 *)s1) >= 0 )
          goto LABEL_112;
        if ( !v112 )
        {
          v115 = 0;
LABEL_112:
          if ( LODWORD(s1[1]) > 0x40 && s1[0] )
            operator delete[](s1[0]);
          sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), v74, 0x1BF8u, 0);
          sub_15F7200(s1);
          v46 = v158 + 8;
          sub_168B9F0((__int64)s1, (__int64 *)(v158 + 8), *(_DWORD *)(v115 + 48), 0x1802u, 0);
          sub_15F7200(s1);
          goto LABEL_67;
        }
      }
      v137 = 1;
      if ( v112 != &v187 )
        v137 = (unsigned int)sub_98E2D0((__int64 *)s1, (__int64 *)v112 + 4) >> 31;
      goto LABEL_133;
    }
LABEL_67:
    if ( v193 > 1 )
      sub_A4F8E0((int *)&v193);
LABEL_58:
    v49 += 2;
  }
  while ( v49 != (unsigned __int64 *)v165 );
  v84 = v188;
  v6 = v170;
  if ( v188 )
  {
    do
    {
      sub_19CD600((__int64)&v186, v84[3]);
      v85 = (_QWORD *)v84[2];
      if ( *((_DWORD *)v84 + 10) > 0x40u )
      {
        v86 = (void *)v84[4];
        if ( v86 )
          operator delete[](v86);
      }
      v87 = v84;
      v84 = v85;
      operator delete(v87);
    }
    while ( v85 );
  }
  v88 = v183;
  v89 = 24LL * v185;
LABEL_65:
  operator delete(v88, v89, 8);
  return sub_19A3E40(*v6, (unsigned __int16 *)v163, v90, v91, v92, si128, a6);
}
