__int64 __fastcall sub_14BFE70(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __int16 v8; // r14
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // rdi
  unsigned int v14; // eax
  unsigned __int64 v15; // r12
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  _DWORD *v21; // rax
  __int16 v22; // ax
  char v23; // r12
  char v24; // al
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  int v27; // r9d
  char *v28; // r8
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // r10d
  char v50; // r12
  int v51; // r14d
  __int64 v52; // r8
  __int64 v53; // r11
  __int64 v54; // rcx
  __int64 *v55; // rdi
  char *v56; // rdx
  _BOOL4 v57; // edx
  int v58; // ecx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 (__fastcall *v65)(_QWORD, __int64, __int64, _QWORD); // rax
  __int64 v66; // rax
  __int64 v67; // r12
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdi
  char v71; // r14
  __int64 v72; // rcx
  void *v73; // rsi
  __int64 v74; // rbp
  unsigned int v75; // r14d
  unsigned int v76; // eax
  __int64 *v77; // rdi
  unsigned int v78; // r14d
  unsigned int v79; // ebp
  __int64 *v80; // rcx
  __int64 *v81; // rdi
  __int64 v82; // rdx
  char *v83; // rcx
  int v84; // eax
  _QWORD *v85; // rdi
  unsigned __int64 v86; // r9
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 *v89; // rdi
  size_t v90; // rax
  __int64 v91; // rax
  __int64 v92; // rbp
  unsigned int v93; // r12d
  unsigned int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // edx
  unsigned __int8 *v98; // rax
  void *v99; // rsi
  __int64 v100; // r14
  __int16 v101; // ax
  __int64 v102; // rax
  __int64 v103; // rdi
  unsigned __int64 v104; // r11
  __int64 v105; // rcx
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rdx
  int v109; // r8d
  char v110; // al
  unsigned __int64 v111; // r12
  int v112; // ebx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rbp
  unsigned __int64 v117; // r13
  _BOOL4 v118; // eax
  __int64 v119; // rbx
  int v120; // edx
  char v121; // r12
  int v122; // r13d
  int v123; // r10d
  __int64 v124; // rax
  __int64 v125; // rdx
  int v126; // r10d
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // [rsp-10h] [rbp-1D8h]
  __int64 v130; // [rsp-10h] [rbp-1D8h]
  __int64 v131; // [rsp-8h] [rbp-1D0h]
  __int64 v132; // [rsp+0h] [rbp-1C8h]
  char v133; // [rsp+0h] [rbp-1C8h]
  int v134; // [rsp+Ch] [rbp-1BCh]
  int v135; // [rsp+Ch] [rbp-1BCh]
  unsigned __int64 v136; // [rsp+10h] [rbp-1B8h]
  __int64 v137; // [rsp+10h] [rbp-1B8h]
  __int64 v138; // [rsp+10h] [rbp-1B8h]
  unsigned int v139; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v140; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v141; // [rsp+10h] [rbp-1B8h]
  unsigned int v142; // [rsp+10h] [rbp-1B8h]
  unsigned int v143; // [rsp+10h] [rbp-1B8h]
  char v144; // [rsp+10h] [rbp-1B8h]
  unsigned int v145; // [rsp+18h] [rbp-1B0h]
  unsigned int v146; // [rsp+18h] [rbp-1B0h]
  __int64 v147; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 v148; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 v149; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 v150; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v151; // [rsp+20h] [rbp-1A8h]
  int *v152; // [rsp+20h] [rbp-1A8h]
  int *v153; // [rsp+20h] [rbp-1A8h]
  __int64 v154; // [rsp+20h] [rbp-1A8h]
  unsigned __int8 v155; // [rsp+20h] [rbp-1A8h]
  unsigned __int8 v156; // [rsp+28h] [rbp-1A0h]
  unsigned __int8 v157; // [rsp+30h] [rbp-198h]
  _QWORD v158[2]; // [rsp+38h] [rbp-190h] BYREF
  char v159; // [rsp+4Bh] [rbp-17Dh] BYREF
  int v160; // [rsp+4Ch] [rbp-17Ch] BYREF
  __int64 v161[2]; // [rsp+50h] [rbp-178h] BYREF
  __m128i v162; // [rsp+60h] [rbp-168h] BYREF
  __m128i v163; // [rsp+70h] [rbp-158h] BYREF
  __int64 v164; // [rsp+80h] [rbp-148h]
  __int128 v165; // [rsp+90h] [rbp-138h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-128h]
  __int128 v167; // [rsp+B0h] [rbp-118h]
  __int64 v168; // [rsp+C0h] [rbp-108h]
  unsigned __int8 *v169; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v170; // [rsp+D8h] [rbp-F0h]
  void *v171; // [rsp+E8h] [rbp-E0h]
  __int64 v172; // [rsp+F0h] [rbp-D8h]
  _BYTE v173[40]; // [rsp+F8h] [rbp-D0h] BYREF
  void *v174; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v175; // [rsp+128h] [rbp-A0h]
  __int64 v176; // [rsp+130h] [rbp-98h] BYREF
  __int64 v177; // [rsp+138h] [rbp-90h]

  v4 = *(_QWORD *)(a1 + 80);
  v158[0] = a2;
  v164 = v4;
  v134 = 0;
  v162 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v163 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  while ( 2 )
  {
    v5 = *(unsigned __int16 *)(a1 + 32);
    v6 = _mm_load_si128(&v162);
    v7 = _mm_load_si128(&v163);
    *(_QWORD *)(a1 + 80) = v164;
    v8 = v5;
    *(__m128i *)(a1 + 48) = v6;
    *(__m128i *)(a1 + 64) = v7;
    switch ( v5 )
    {
      case 3u:
        if ( *(_BYTE *)(a1 + 2064) )
          return v158[0];
        v35 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v35 + 760) )
        {
          *(_BYTE *)(v35 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v35 + 48) + 6LL) = 1;
        }
        v36 = *(_QWORD *)(a1 + 96);
        v37 = 0;
        v38 = *(_BYTE *)(a1 + 56) == 0;
        *(_WORD *)(a1 + 32) = 1;
        v39 = *(_QWORD *)(v36 + 656);
        if ( !v38 && *(_DWORD *)(a1 + 16) == *(_DWORD *)(a1 + 60) )
        {
          v37 = *(_QWORD *)(a1 + 64);
          if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v65 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a1 + 72);
            v37 = 0;
            if ( v65 )
            {
              v66 = v65(*(_QWORD *)(a1 + 80), a2, v36, 0);
              v36 = *(_QWORD *)(a1 + 96);
              v37 = v66;
            }
          }
        }
        sub_172D9B0(v39, *(_QWORD *)(v36 + 608), v158[0], v37);
        return 1;
      case 5u:
        v29 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v29 + 56) + 2LL) & 4) == 0 || *(_BYTE *)(a1 + 2064) )
          return v158[0];
        v30 = *(_QWORD *)(v29 + 2944);
        v31 = *(unsigned int *)(v29 + 2912) <= v30 ? sub_14180A0(v29, 1u) : *(_QWORD *)(v29 + 2904) + 24 * v30;
        if ( *(_WORD *)(v31 + 16) != 62 )
        {
          v32 = *(_QWORD *)(a1 + 8);
          v33 = *(_QWORD *)(v32 + 2944);
          v34 = *(unsigned int *)(v32 + 2912) <= v33 ? sub_14180A0(v32, 1u) : *(_QWORD *)(v32 + 2904) + 24 * v33;
          if ( *(_WORD *)(v34 + 16) != 21 )
            return v158[0];
        }
        a2 = 0;
        v158[0] = sub_14FDCA0(a1, 0, 0, 0, v158[0] & 0xFFFFFFFFFFFFFFFELL);
        continue;
      case 0x14u:
        v40 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v40 + 56) + 2LL) & 4) == 0 || (*(_BYTE *)(a1 + 34) & 1) == 0 )
          goto LABEL_50;
        if ( (unsigned __int8)sub_14F7720(a1) )
          return v158[0];
        v40 = *(_QWORD *)(a1 + 8);
LABEL_50:
        v41 = *(_QWORD *)(v40 + 2944);
        if ( v41 >= *(unsigned int *)(v40 + 2912) )
          v42 = sub_14180A0(v40, 1u);
        else
          v42 = *(_QWORD *)(v40 + 2904) + 24 * v41;
        if ( *(_WORD *)(v42 + 16) == 20 && (unsigned __int8)sub_147CB40(a1) )
          return 1;
        ptr[0] = (void *)a1;
        *(_QWORD *)&v165 = a1 + 1952;
        v43 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        BYTE8(v165) = v43;
        WORD2(ptr[1]) = 63;
        LODWORD(ptr[1]) = 1376276;
        *(_QWORD *)&v167 = sub_14789E0;
        *((_QWORD *)&v167 + 1) = 0;
        v168 = 0;
        sub_149FA40((__int64)&v165);
        v44 = *(unsigned int *)(a1 + 16);
        v45 = *(_QWORD *)(a1 + 96);
        v134 = v168;
        v174 = &v176;
        v175 = 0xC00000000LL;
        sub_1703EB0(a1 + 48, v45, v44, v158[0] & 0xFFFFFFFFFFFFFFFELL);
        v47 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
        if ( (*(_DWORD *)(v47 + 64) || *(_BYTE *)(a1 + 2153)) && *(_WORD *)(a1 + 32) == 62 )
        {
          v48 = 0;
        }
        else if ( (*(_BYTE *)(v47 + 2) & 1) != 0 )
        {
          v48 = 0;
          if ( *(_WORD *)(a1 + 32) != 21 )
            v48 = (unsigned int)sub_14BDD40(a1, (__int64)&v174, nullptr, 0, 0, a3);
        }
        else
        {
          if ( (*(_BYTE *)(v47 + 1) & 0x10) != 0 && *(_WORD *)(a1 + 32) == 24 )
          {
            a2 = a1;
            sub_1564840(&v169, a1, a1 + 16, 2118);
            sub_AEA040((__int64)&v169);
            v60 = sub_14EE310(a1);
          }
          else
          {
            a2 = 0;
            v60 = sub_14BFC10((const __m128i *)a1, 0, a3);
          }
          if ( v60 == 1 )
          {
            if ( (unsigned int)v175 > 1 )
              goto LABEL_63;
            v49 = *(_DWORD *)(a1 + 16);
            v48 = 1;
            goto LABEL_112;
          }
          sub_14B7B40((__int64)&v174, v60 & 0xFFFFFFFFFFFFFFFELL);
          v48 = 0;
        }
        v49 = *(_DWORD *)(a1 + 16);
        if ( (unsigned int)v175 > 1 )
        {
          v50 = 1;
          v51 = 0;
          v52 = 0;
          v53 = 0;
          v54 = 0;
          goto LABEL_61;
        }
LABEL_112:
        v50 = *(_BYTE *)(a1 + 2153);
        if ( !v50 )
        {
          v81 = *(__int64 **)(a1 + 8);
          v52 = *(unsigned int *)(v81[7] + 64);
          if ( !(_DWORD)v52 )
          {
            v51 = 0;
            v50 = 1;
            v53 = 0;
            v54 = 0;
            goto LABEL_61;
          }
          v38 = *(_WORD *)(a1 + 32) == 62;
          v46 = *(unsigned __int8 *)(a1 + 2040);
          *(_BYTE *)(a1 + 2040) = 1;
          if ( !v38 )
          {
            v50 = 1;
            v52 = 0;
            v54 = 0;
            goto LABEL_139;
          }
          *(_DWORD *)(a1 + 40) = v49;
          v148 = v46;
          v141 = v48;
          v153 = (int *)(a1 + 16);
          sub_14634E0(v81, (int *)(a1 + 16));
          v101 = *(_WORD *)(a1 + 32);
          v52 = *(unsigned int *)(a1 + 40);
          v81 = *(__int64 **)(a1 + 8);
          v48 = v141;
          v46 = v148;
          if ( v101 == 21 )
          {
            v49 = *(_DWORD *)(a1 + 16);
            v50 = 1;
            v54 = 0;
LABEL_139:
            if ( *(_DWORD *)(v81[7] + 64) <= 0x31u )
              goto LABEL_140;
            v51 = 0;
            v53 = 0;
            if ( (*(_DWORD *)(a1 + 2156) & 0xFFFFFFBF) != 0x26 || *(_WORD *)(a1 + 32) != 62 )
            {
LABEL_141:
              *(_BYTE *)(a1 + 2040) = v46;
              goto LABEL_61;
            }
            v153 = (int *)(a1 + 16);
          }
          else
          {
            if ( *(_DWORD *)(v81[7] + 64) <= 0x31u || v101 != 62 )
            {
              v155 = v148;
              v149 = v141;
              v142 = *(_DWORD *)(a1 + 40);
              v102 = sub_14BFC10((const __m128i *)a1, 0, a3);
              v81 = *(__int64 **)(a1 + 8);
              v49 = *(_DWORD *)(a1 + 16);
              v54 = v102;
              v52 = v142;
              v48 = v149;
              v50 = v102 != 1;
              v46 = v155;
              goto LABEL_139;
            }
            v49 = *(_DWORD *)(a1 + 16);
            v50 = 1;
            v54 = 0;
            if ( (*(_DWORD *)(a1 + 2156) & 0xFFFFFFBF) != 0x26 )
            {
LABEL_140:
              v51 = 0;
              v53 = 0;
              goto LABEL_141;
            }
          }
          *(_DWORD *)(a1 + 40) = v49;
          v157 = v46;
          v156 = v48;
          v147 = v54;
          v139 = v52;
          sub_14634E0(v81, v153);
          v51 = *(_DWORD *)(a1 + 40);
          v52 = v139;
          v54 = v147;
          v48 = v156;
          v46 = v157;
          if ( *(_WORD *)(a1 + 32) == 21 )
          {
            v49 = *(_DWORD *)(a1 + 16);
            v53 = 0;
          }
          else
          {
            v128 = sub_14BFC10((const __m128i *)a1, 0, a3);
            v49 = *(_DWORD *)(a1 + 16);
            v52 = v139;
            v53 = v128;
            v54 = v147;
            v48 = v156;
            v46 = v157;
            v50 &= v128 != 1;
          }
          goto LABEL_141;
        }
        v52 = 0;
        v54 = 0;
        v38 = *(_WORD *)(a1 + 32) == 62;
        v71 = *(_BYTE *)(a1 + 2040);
        *(_BYTE *)(a1 + 2040) = 1;
        if ( v38 )
        {
          *(_DWORD *)(a1 + 40) = v49;
          v140 = v48;
          sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
          v52 = *(unsigned int *)(a1 + 40);
          v48 = v140;
          if ( *(_WORD *)(a1 + 32) == 21 )
          {
            v49 = *(_DWORD *)(a1 + 16);
            v54 = 0;
          }
          else
          {
            v150 = v140;
            v143 = *(_DWORD *)(a1 + 40);
            v106 = sub_14BFC10((const __m128i *)a1, 0, a3);
            v49 = *(_DWORD *)(a1 + 16);
            v48 = v150;
            v54 = v106;
            v52 = v143;
            v50 = v106 != 1;
          }
        }
        *(_BYTE *)(a1 + 2040) = v71;
        v53 = 0;
        v51 = 0;
LABEL_61:
        a2 = v158[0];
        if ( ((unsigned __int8)v48 | (v158[0] == 1)) == 1 || !v50 || *(_WORD *)(a1 + 32) != 21 )
        {
LABEL_63:
          v158[0] = 1;
          goto LABEL_64;
        }
        a2 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
        v85 = *(_QWORD **)(a1 + 96);
        if ( v51 | (unsigned int)v52 )
        {
          v86 = v54 & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_BYTE *)(a1 + 2153) )
          {
            v87 = v85[93];
            LODWORD(v88) = 0;
            if ( (_DWORD)v175 )
              v88 = *(_QWORD *)v174;
            v158[0] = sub_1AA4090(v87, a2, v134, v88, v52, v86, v49);
            v48 = v131;
          }
          else
          {
            v103 = v85[95];
            v104 = v53 & 0xFFFFFFFFFFFFFFFELL;
            LODWORD(v105) = 0;
            if ( (_DWORD)v175 )
              v105 = *(_QWORD *)v174;
            v158[0] = sub_1B176A0(v103, a2, v134, v105, v52, v51, v86, v104, v49);
          }
        }
        else
        {
          v158[0] = sub_1930830((_DWORD)v85, v85[76], v158[0] & 0xFFFFFFFE, v134, (_DWORD)v174, v175, v49);
          v54 = v130;
          a2 = v131;
        }
LABEL_64:
        sub_14808E0((__int64)&v165, (__int64 *)a2, v48, v54, v52, v46);
        if ( v174 != &v176 )
          free(v174);
        *(_BYTE *)v165 = BYTE8(v165);
        continue;
      case 0x16u:
      case 0x4Au:
        v23 = *(_BYTE *)(a1 + 2064);
        ptr[0] = (void *)a1;
        *(_QWORD *)&v165 = a1 + 1952;
        v24 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 2064) = 0;
        BYTE8(v165) = v24;
        WORD2(ptr[1]) = 63;
        *(_BYTE *)(a1 + 1952) = 1;
        LODWORD(ptr[1]) = 1507350;
        *(_QWORD *)&v167 = sub_146A990;
        *((_QWORD *)&v167 + 1) = 0;
        v168 = 0;
        if ( (_WORD)v5 == 74 )
        {
          v77 = *(__int64 **)(a1 + 8);
          v174 = &v176;
          v175 = 0xC00000000LL;
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          v152 = (int *)(a1 + 16);
          sub_14634E0(v77, (int *)(a1 + 16));
          v78 = *(_DWORD *)(a1 + 40);
          if ( (unsigned __int8)sub_14BDBD0(a1, (__int64)&v174, a3) )
            v158[0] = 1;
          v79 = 0;
          if ( *(_WORD *)(a1 + 32) == 75 )
          {
            v89 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v89, v152);
            v79 = *(_DWORD *)(a1 + 40);
          }
          else
          {
            if ( v158[0] != 1 )
            {
              sub_1564840(&v169, a1, v152, 14);
              sub_AE9DF0(&v169, 75, 4u);
              sub_AEA040((__int64)&v169);
              sub_1564820(&v169, a1, v78, 109);
              sub_AE9DF0(&v169, 74, 4u);
              sub_AEA040((__int64)&v169);
              LOWORD(v169) = 75;
              sub_15680D0(a1, &v169, 1, 1);
              v80 = (__int64 *)v174;
              v158[0] = 1;
              goto LABEL_129;
            }
            LOWORD(v169) = 75;
            sub_15680D0(a1, &v169, 1, 1);
          }
          if ( v158[0] != 1 )
          {
            v90 = j__strlen(&byte_22F0C30);
            if ( !(unsigned __int8)sub_1569A00(a1, 22, 14, &byte_22F0C30, v90) )
            {
              v80 = (__int64 *)v174;
              v134 = *(_DWORD *)(a1 + 40);
              if ( v158[0] != 1 )
              {
                v91 = sub_17900E0(
                        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 664LL),
                        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                        v78,
                        v174,
                        (unsigned int)v175,
                        v79);
                if ( v91 == 1 )
                {
                  v158[0] = 1;
                  v26 = 0;
                  v80 = (__int64 *)v174;
                }
                else
                {
                  v80 = (__int64 *)v174;
                  v26 = v91 & 0xFFFFFFFFFFFFFFFELL;
                }
                goto LABEL_130;
              }
LABEL_129:
              v26 = 0;
LABEL_130:
              if ( v80 != &v176 )
                free(v80);
              v169 = (unsigned __int8 *)a1;
              *((_QWORD *)&v170 + 1) = &v174;
              v174 = &v176;
              v175 = 0xC00000000LL;
              *(_QWORD *)&v170 = v158;
              v171 = &v165;
              goto LABEL_84;
            }
            v158[0] = 1;
          }
          v80 = (__int64 *)v174;
          goto LABEL_129;
        }
        sub_149FA40((__int64)&v165);
        v169 = (unsigned __int8 *)a1;
        *((_QWORD *)&v170 + 1) = &v174;
        v134 = v168;
        v171 = &v165;
        v174 = &v176;
        v175 = 0xC00000000LL;
        *(_QWORD *)&v170 = v158;
        if ( (_WORD)v5 == 22 )
        {
          if ( *(_WORD *)(a1 + 32) == 23 )
          {
            v25 = v158[0];
            if ( v158[0] == 1 )
              goto LABEL_102;
            v26 = 0;
            v27 = 0;
            LODWORD(v28) = (unsigned int)&v176;
            goto LABEL_87;
          }
          v26 = 0;
          goto LABEL_116;
        }
        v26 = 0;
LABEL_84:
        if ( v158[0] == 1 )
          goto LABEL_102;
        if ( *(_WORD *)(a1 + 32) == 23 )
        {
          v25 = v158[0];
          v27 = 0;
          v28 = (char *)&v176;
LABEL_87:
          v137 = v25 & 0xFFFFFFFFFFFFFFFELL;
          v146 = *(_DWORD *)(a1 + 16);
          v158[0] = sub_19303F0(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                      (unsigned int)v25 & 0xFFFFFFFE,
                      v134,
                      (_DWORD)v28,
                      v27,
                      v146,
                      v26);
          a2 = v129;
          if ( v158[0] == 1 )
          {
            v99 = v174;
            v161[0] = v137;
            sub_14B7C30((__int64 *)&v174, (char *)v174, v161);
            v100 = *(_QWORD *)(a1 + 96);
            v154 = (unsigned int)v175;
            a2 = (unsigned int)sub_EEB7E0(v137, (__int64)v99, *(double *)a3.m128i_i64);
            v158[0] = sub_18C4330(v100, a2, v146, v174, v154, 0);
          }
          sub_14808E0((__int64)&v165, (__int64 *)a2, v61, v62, v63, v64);
          goto LABEL_90;
        }
LABEL_116:
        a2 = (__int64)&v174;
        v161[0] = a1;
        v161[1] = (__int64)&v169;
        if ( (unsigned __int8)sub_14BDD40(
                                a1,
                                (__int64)&v174,
                                (void (__fastcall *)(__int64))sub_14B5A60,
                                (__int64)v161,
                                0,
                                a3) )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 968LL) || *(_BYTE *)(a1 + 368) )
          {
            v72 = v158[0];
            if ( v158[0] == 1 )
              goto LABEL_102;
          }
          else
          {
            sub_173EAA0(
              *(_QWORD *)(*((_QWORD *)v169 + 12) + 656LL),
              *(_QWORD *)v170 & 0xFFFFFFFFFFFFFFFELL,
              **((_QWORD **)&v170 + 1),
              *(unsigned int *)(*((_QWORD *)&v170 + 1) + 8LL),
              *((unsigned int *)v171 + 12));
            v72 = v158[0];
            v38 = v158[0] == 1;
            v169[368] = 1;
            if ( v38 )
              goto LABEL_102;
          }
          v73 = v174;
          v161[0] = v72 & 0xFFFFFFFFFFFFFFFELL;
          v151 = v72 & 0xFFFFFFFFFFFFFFFELL;
          sub_14B7C30((__int64 *)&v174, (char *)v174, v161);
          v74 = *(_QWORD *)(a1 + 96);
          v75 = *(_DWORD *)(a1 + 16);
          v138 = (unsigned int)v175;
          v76 = sub_EEB7E0(v151, (__int64)v73, *(double *)a3.m128i_i64);
          v158[0] = sub_18C4330(v74, v76, v75, v174, v138, 0);
          a2 = (__int64)v161;
          LOWORD(v161[0]) = 23;
          sub_15680D0(a1, v161, 1, 1);
        }
        else
        {
          v25 = v158[0];
          if ( v158[0] == 1 )
          {
LABEL_102:
            a2 = (__int64)v161;
            LOWORD(v161[0]) = 23;
            sub_15680D0(a1, v161, 1, 1);
            goto LABEL_90;
          }
          v28 = (char *)v174;
          v27 = v175;
          v82 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
          if ( *(_WORD *)(a1 + 32) == 23 )
            goto LABEL_87;
          v83 = (char *)v174 + 8 * (unsigned int)v175;
          v84 = (*(_DWORD *)v82 >> 18) & 1;
          if ( v83 != v174 )
          {
            a2 = 1;
            do
            {
              v82 = **(_DWORD **)v28 & 0x40000;
              if ( (**(_DWORD **)v28 & 0x40000) != 0 )
                LOBYTE(v84) = 1;
              v28 += 8;
            }
            while ( v83 != v28 );
          }
          if ( (_BYTE)v84 )
          {
            a2 = (__int64)v161;
            LOWORD(v161[0]) = 23;
            sub_15680D0(a1, v161, 1, 1);
          }
          else
          {
            sub_14808E0((__int64)&v165, (__int64 *)a2, v82, (__int64)v83, (__int64)v28, (unsigned int)v175);
          }
          v158[0] = 1;
        }
LABEL_90:
        if ( v174 != &v176 )
          free(v174);
        *(_BYTE *)v165 = BYTE8(v165);
        *(_BYTE *)(a1 + 2064) = v23;
        continue;
      case 0x1Au:
      case 0x25u:
        v13 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v13, (int *)(a1 + 16));
        v14 = *(_DWORD *)(a1 + 40);
        a3 = 0;
        v165 = 0;
        v145 = v14;
        *(_OWORD *)ptr = 0;
        v167 = 0;
        v161[0] = 0;
        v159 = 0;
        if ( v158[0] == 1 )
        {
          v136 = 0;
          v15 = 0;
        }
        else
        {
          v15 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
          v136 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
        }
        sub_1703CF0(a1 + 48, *(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), v136);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 || v158[0] == 1 )
          goto LABEL_23;
        v16 = (__int64 *)(*(_QWORD *)(v136 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v16 )
        {
          v17 = *v16;
          if ( v17 )
          {
            if ( *(_WORD *)(a1 + 32) == 22 )
            {
              v96 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              v97 = *(unsigned __int8 *)(v96 + 16);
              if ( (unsigned int)(v97 - 25) <= 1 || (_BYTE)v97 == 13 && ((*(_WORD *)(v96 + 18) >> 3) & 0x1FF) == 0x1F3 )
              {
                sub_1564820(&v174, a1, v145, 1682);
                sub_AE9DF0((unsigned __int8 **)&v174, (unsigned __int16)v5, 4u);
                v98 = (unsigned __int8 *)sub_EEC8C0(v136, (unsigned __int16)v5, 0.0);
                LOBYTE(v170) = 1;
                v169 = v98;
                sub_AEC610((__int64 *)&v174, (__int64 *)&v169);
                *(_QWORD *)((char *)&v170 + 4) = 0;
                BYTE12(v170) = 0;
                v171 = v173;
                v172 = 0;
                v173[0] = 0;
                v173[16] = 0;
                LODWORD(v169) = v145;
                HIDWORD(v169) = v145;
                LOBYTE(v170) = 1;
                if ( v145 )
                {
                  sub_14B8100((__int64 *)&v174, (unsigned __int64)&v169);
                  if ( v171 != v173 )
                    operator delete(v171);
                }
                sub_AEA040((__int64)&v174);
                result = sub_14BFE70(a1, v15);
                goto LABEL_182;
              }
            }
          }
        }
        v18 = *(_QWORD *)(a1 + 96);
        a2 = *(_QWORD *)(v18 + 608);
        v19 = sub_19B0570(v18, a2, v136, v145, v5, (unsigned int)v161, (__int64)&v159);
        v158[0] = v19;
        if ( v19 == 1 )
        {
          if ( *(_WORD *)(a1 + 32) == 3 )
          {
            v95 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(v95 + 760) )
            {
              *(_BYTE *)(v95 + 968) = 1;
              *(_BYTE *)(*(_QWORD *)(v95 + 48) + 6LL) = 1;
            }
            *(_WORD *)(a1 + 32) = 1;
            result = 1;
            goto LABEL_182;
          }
          goto LABEL_27;
        }
        v20 = 0;
        v21 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
        if ( v21 )
          v20 = (*v21 >> 18) & 1;
        sub_14D0170(a1, (unsigned int)&v165, v161[0], v20, 0, (unsigned int)&v159, 0, 0, 0, 0, 0);
        if ( (_DWORD)v165 && DWORD1(v165) || *((_QWORD *)&v165 + 1) )
          v161[0] = 0;
LABEL_23:
        v22 = *(_WORD *)(a1 + 32);
        if ( v22 != 3 )
        {
          if ( v159 && v158[0] != 1 )
          {
            a2 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
            v158[0] = sub_14CD900(a1, v158[0] & 0xFFFFFFFFFFFFFFFELL, v145, v5, &v165, v161[0]);
            goto LABEL_27;
          }
          v55 = *(__int64 **)(a1 + 8);
          LODWORD(v174) = 0;
          v175 = 0;
          v177 = 0;
          v56 = (char *)v55[7];
          v160 = 0;
          if ( (v56[2] & 4) != 0 && v22 == 129 && (_WORD)v5 == 26 )
          {
            a2 = a1 + 16;
            v67 = *(_QWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v55, (int *)(a1 + 16));
            v68 = *(_DWORD *)(a1 + 40);
            LODWORD(v174) = 0;
            v175 = v67;
            HIDWORD(v177) = v68;
            LODWORD(v177) = v68;
          }
          else
          {
            if ( *v56 < 0 )
            {
              if ( !(_DWORD)v165 || (v57 = 1, !DWORD1(v165)) )
                v57 = *((_QWORD *)&v165 + 1) != 0;
            }
            else
            {
              v57 = 0;
            }
            v58 = 0;
            if ( (v158[0] & 0xFFFFFFFFFFFFFFFELL) != 0 )
              v58 = (*(_DWORD *)(v158[0] & 0xFFFFFFFFFFFFFFFELL) >> 18) & 1;
            a2 = (__int64)&v165;
            if ( (unsigned __int8)sub_14D1670(
                                    a1,
                                    (unsigned int)&v165,
                                    v161[0],
                                    v58,
                                    0,
                                    1,
                                    v57,
                                    0,
                                    (__int64)&v160,
                                    (__int64)&v174) )
            {
              v158[0] = 1;
LABEL_75:
              if ( v136 && (_DWORD)v177 )
              {
                v59 = *(_QWORD *)(a1 + 96);
                v169 = (unsigned __int8 *)v136;
                a2 = (unsigned int)sub_EEB7E0(v136, a2, 0.0);
                v158[0] = sub_18C4330(v59, a2, HIDWORD(v177), &v169, 1, 0);
              }
              goto LABEL_27;
            }
          }
          if ( v158[0] == 1 )
            goto LABEL_75;
          v69 = *(_QWORD *)(a1 + 2072);
          v70 = *(_QWORD *)(a1 + 96);
          if ( v69 )
            v69 = *(_QWORD *)(v69 + 8);
          a2 = *(_QWORD *)(v70 + 608);
          v158[0] = sub_19CC5E0(v70, a2, v158[0] & 0xFFFFFFFE, v145, v5, (unsigned int)&v165, v160, (__int64)&v174, v69);
          if ( v158[0] == 1 )
            goto LABEL_75;
          if ( *(_WORD *)(a1 + 32) == 47 )
          {
            a2 = (__int64)v158;
            sub_1555F90(a1, v158);
          }
LABEL_27:
          if ( HIDWORD(ptr[1]) )
            free(ptr[0]);
          continue;
        }
        v107 = 37;
        if ( (_WORD)v5 == 37 )
          v107 = 26;
        v108 = *(_QWORD *)(a1 + 8);
        v109 = v107;
        v110 = *(_BYTE *)(*(_QWORD *)(v108 + 56) + 1LL) & 8;
        if ( v136 && v110 )
        {
          v119 = *(_QWORD *)(a1 + 96);
          v120 = v136;
          v121 = *(_BYTE *)(v119 + 10024);
          v122 = *(_DWORD *)(v119 + 11200);
          v133 = *(_BYTE *)(v119 + 11248);
          v144 = *(_BYTE *)(v119 + 12592);
          v123 = *(_DWORD *)(*(_QWORD *)(v119 + 264) + 204LL);
          *(_BYTE *)(v119 + 12592) = 1;
          *(_BYTE *)(v119 + 11248) = 1;
          v135 = v123;
          *(_BYTE *)(v119 + 10024) = 1;
          v124 = sub_19B0570(
                   *(_QWORD *)(a1 + 96),
                   *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                   v120,
                   v145,
                   v109,
                   (unsigned int)v161,
                   (__int64)&v159);
          *(_BYTE *)(v119 + 10024) = v121;
          v125 = *(_QWORD *)(v119 + 264);
          *(_DWORD *)(v119 + 11200) = v122;
          *(_BYTE *)(v119 + 12592) = v144;
          *(_BYTE *)(v119 + 11248) = v133;
          v126 = v135;
          if ( *(_DWORD *)(v125 + 204) == 5 )
            *(_BYTE *)(v125 + 194) = 1;
          if ( v135 )
            v126 = 3;
          v111 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
          v127 = v124 & 0xFFFFFFFFFFFFFFFELL;
          *(_DWORD *)(v125 + 204) = v126;
          v112 = v127;
          v108 = *(_QWORD *)(a1 + 8);
          if ( !v127 )
          {
            v110 = *(_BYTE *)(*(_QWORD *)(v108 + 56) + 1LL) & 8;
            goto LABEL_210;
          }
        }
        else
        {
          v111 = v158[0] & 0xFFFFFFFFFFFFFFFELL;
LABEL_210:
          v112 = 0;
          if ( !v110 )
            v112 = v111;
        }
        if ( *(_QWORD *)(v108 + 760) )
        {
          v113 = *(_QWORD *)(v108 + 48);
          *(_BYTE *)(v108 + 968) = 1;
          *(_BYTE *)(v113 + 6) = 1;
        }
        v114 = *(_QWORD *)(a1 + 96);
        v115 = *(unsigned int *)(a1 + 16);
        *(_WORD *)(a1 + 32) = 1;
        v116 = *(_QWORD *)(v114 + 656);
        v117 = sub_14B62D0(a1 + 48, v115);
        v118 = 0;
        if ( v111 )
          v118 = *(_DWORD *)(a1 + 2036) == sub_EEB7E0(v111, v115, 0.0);
        sub_173B700(v116, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v111, v112, v145, v8 == 37, v118, v117);
        result = 1;
LABEL_182:
        if ( HIDWORD(ptr[1]) )
        {
          v132 = result;
          free(ptr[0]);
          return v132;
        }
        return result;
      case 0x22u:
      case 0x26u:
        v10 = *(unsigned int *)(a1 + 16);
        if ( v158[0] != 1 )
        {
          v11 = *(_QWORD *)(a1 + 96);
          v174 = (void *)(v158[0] & 0xFFFFFFFFFFFFFFFELL);
          v12 = *(_QWORD *)(v11 + 608);
          v158[0] = sub_1931340(v11, v12, v10, v5);
          if ( v158[0] == 1 )
          {
            v92 = *(_QWORD *)(a1 + 96);
            v93 = *(_DWORD *)(a1 + 16);
            v94 = sub_EEB7E0((unsigned __int64)v174, v12, *(double *)a3.m128i_i64);
            v158[0] = sub_18C4330(v92, v94, v93, &v174, 1, 0);
          }
          LODWORD(v10) = *(_DWORD *)(a1 + 16);
        }
        *(_DWORD *)(a1 + 40) = v10;
        a2 = a1 + 16;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        continue;
      default:
        return v158[0];
    }
  }
}
