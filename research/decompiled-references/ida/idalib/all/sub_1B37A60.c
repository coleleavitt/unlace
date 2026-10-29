unsigned __int64 __fastcall sub_1B37A60(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // r13
  const char *v32; // rax
  __int64 v33; // rsi
  size_t v34; // rdx
  __int64 v35; // r12
  const char *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  __int64 v41; // rax
  _QWORD *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  unsigned __int64 v63; // rax
  __int64 v64; // r12
  unsigned __int64 v65; // rbp
  __int64 v66; // rdi
  char v67; // dl
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rbp
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // ecx
  unsigned __int64 *v80; // rbp
  unsigned __int64 v81; // rbx
  __int64 v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rbx
  void *v89; // rbp
  __int64 v90; // r12
  void *v91; // r13
  __int64 v92; // r14
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  unsigned int v96; // eax
  __int64 v97; // rax
  unsigned int v98; // r12d
  __int64 v99; // rdx
  __int64 v100; // rcx
  bool v101; // r13
  _BYTE *v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rbp
  __int64 v109; // rbp
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rdx
  void *v113; // rdi
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  unsigned int v118; // esi
  __int64 v119; // r12
  __m128i v120; // xmm2
  __m128i v121; // xmm3
  __int64 v122; // rdx
  __int64 v123; // rcx
  size_t v124; // r13
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  unsigned int v128; // eax
  __int64 v129; // rsi
  __int64 v130; // r13
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r9
  unsigned __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rsi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  int v144; // ebx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rax
  __int128 v149; // [rsp-20h] [rbp-2298h]
  __int128 v150; // [rsp+10h] [rbp-2268h]
  int v151; // [rsp+24h] [rbp-2254h]
  unsigned __int64 *v152; // [rsp+28h] [rbp-2250h]
  size_t v153; // [rsp+70h] [rbp-2208h]
  __int64 v154; // [rsp+70h] [rbp-2208h]
  int v155; // [rsp+70h] [rbp-2208h]
  __int64 v156; // [rsp+70h] [rbp-2208h]
  __int64 v157; // [rsp+70h] [rbp-2208h]
  __int64 v158; // [rsp+70h] [rbp-2208h]
  __int64 v159; // [rsp+80h] [rbp-21F8h]
  __int32 v160; // [rsp+88h] [rbp-21F0h]
  int v161; // [rsp+8Ch] [rbp-21ECh]
  unsigned int v165; // [rsp+B4h] [rbp-21C4h]
  __int32 v166; // [rsp+C0h] [rbp-21B8h] BYREF
  unsigned int v167; // [rsp+C4h] [rbp-21B4h] BYREF
  unsigned __int64 v168; // [rsp+C8h] [rbp-21B0h] BYREF
  __int64 v169; // [rsp+D0h] [rbp-21A8h] BYREF
  __int64 v170; // [rsp+D8h] [rbp-21A0h] BYREF
  __int64 v171; // [rsp+E0h] [rbp-2198h] BYREF
  __int64 v172; // [rsp+E8h] [rbp-2190h] BYREF
  _QWORD v173[2]; // [rsp+F0h] [rbp-2188h] BYREF
  __m128i v174; // [rsp+100h] [rbp-2178h] BYREF
  __int64 v175; // [rsp+110h] [rbp-2168h] BYREF
  __m128i v176; // [rsp+120h] [rbp-2158h] BYREF
  _BYTE v177[16]; // [rsp+130h] [rbp-2148h] BYREF
  void *ptr; // [rsp+140h] [rbp-2138h] BYREF
  __int64 v179; // [rsp+148h] [rbp-2130h]
  _BYTE v180[32]; // [rsp+150h] [rbp-2128h] BYREF
  void *v181[2]; // [rsp+170h] [rbp-2108h] BYREF
  __m128 v182; // [rsp+180h] [rbp-20F8h] BYREF
  __int64 v183; // [rsp+190h] [rbp-20E8h]
  __int16 v184; // [rsp+198h] [rbp-20E0h]
  void *v185; // [rsp+1A0h] [rbp-20D8h] BYREF
  __int64 v186; // [rsp+1A8h] [rbp-20D0h]
  _BYTE v187[64]; // [rsp+1B0h] [rbp-20C8h] BYREF
  void *v188; // [rsp+1F0h] [rbp-2088h] BYREF
  __int64 v189; // [rsp+1F8h] [rbp-2080h]
  _BYTE v190[64]; // [rsp+200h] [rbp-2078h] BYREF
  void *v191; // [rsp+240h] [rbp-2038h] BYREF
  __int64 v192; // [rsp+248h] [rbp-2030h]
  _BYTE v193[64]; // [rsp+250h] [rbp-2028h] BYREF
  __m128i v194; // [rsp+290h] [rbp-1FE8h] BYREF
  __m128i v195; // [rsp+2A0h] [rbp-1FD8h] BYREF
  int v196; // [rsp+2B0h] [rbp-1FC8h]
  char v197; // [rsp+2B4h] [rbp-1FC4h]

  v9 = a2;
  v11 = a1[1];
  v185 = v187;
  v186 = 0x800000000LL;
  v189 = 0x800000000LL;
  v192 = 0x800000000LL;
  ptr = v180;
  v179 = 0x400000000LL;
  v188 = v190;
  v191 = v193;
  v151 = a6 | a5 | a4;
  v12 = sub_1AE5FF0(v11);
  v160 = 0;
  if ( v12 )
    v160 = *(_DWORD *)(v12 + 1024);
  v165 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
  v152 = &a2[a3];
  if ( a2 != v152 )
  {
    while ( 1 )
    {
      v65 = *v9;
      v66 = *a1;
      v166 = 0;
      v168 = v65;
      v172 = 0;
      v17 = sub_1B31D70(v66, &v168, (unsigned int *)&v166, &v172, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
      if ( v67 )
      {
        sub_14B7B40((__int64)&v185, v65);
        sub_1AE97C0((__int64)&v188);
        sub_1AE97C0((__int64)&v191);
      }
      v169 = v17;
      if ( !v17 )
        goto LABEL_26;
      if ( !v151 )
        v166 = v160;
      v13 = *(_QWORD *)(v17 + 48);
      v14 = *a1;
      v15 = (unsigned int)v166;
      v16 = *(_BYTE *)(v17 + 28) & 0x7F;
      v170 = v13;
      if ( (unsigned int)(v16 - 40) >= 7 )
        v17 = 0;
      if ( (unsigned __int8)sub_1E63CF0(v14, (unsigned int)v166, v13, 1, 4498) )
        goto LABEL_26;
      v170 = sub_C1BEF0((__int64)&v170, v15, v18, v19);
      v20 = sub_168B6C0((__int64)a1);
      v21 = (_QWORD *)v170;
      v194.m128i_i64[0] = sub_A71450(v20, v170);
      v159 = 0;
      v171 = sub_C1BEF0((__int64)&v194, (__int64)v21, v22, v23);
      v161 = 106;
      if ( v151 )
        break;
LABEL_12:
      v24 = *(_QWORD *)(v170 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22
        && (*(_BYTE *)(v24 + 17) & 8) != 0
        && ((v68 = sub_1AE5FF0(a1[1])) == 0 ? (v71 = 103) : (v71 = *(unsigned int *)(v68 + 976)),
            (unsigned __int8)sub_FFEF70(v71, (__int64)v21, v69, v70)) )
      {
        sub_168B9F0((__int64)&v194, a1, v166, 0x1225u, 0);
        sub_1AF81E0((__m128i *)v181, 0x24u);
        v72 = sub_1682AF0((__int64)&v194, (__int64)v181);
        v73 = sub_1605D30(v72, &v170);
        v74 = sub_1AE5FF0(a1[1]);
        if ( v74 )
          v75 = *(unsigned int *)(v74 + 976);
        else
          v75 = 103;
        v176.m128i_i64[0] = sub_20EAB70(v75, v165);
        v176.m128i_i64[1] = v76;
        sub_166BAF0(v73, (__int64)&v176);
        if ( v181[0] != &v182 )
          operator delete(v181[0]);
        sub_15F7200(&v194);
        if ( !v17 || (v77 = sub_168B6C0((__int64)a1), v78 = sub_B74100(v17, v77), v79 = 5899, !v78) )
          v79 = 6283;
        ++v9;
        sub_168B9F0((__int64)&v194, a1, *(_DWORD *)(v169 + 24), v79, 0);
        sub_15993D0((__int64)&v194, &v169);
        sub_15F7200(&v194);
        if ( v152 == v9 )
          goto LABEL_41;
      }
      else
      {
        v25 = 0;
        v170 = sub_6D5440(&v170);
        if ( v17 )
          v25 = v168;
        v30 = v169;
        v31 = 0;
        if ( (*(_BYTE *)(v169 + 29) & 1) != 0 )
        {
          v114 = sub_B8C3D0(v169, (__int64)v21, v26, v27, v28, v29);
          v30 = v169;
          v31 = (__int64)v114;
        }
        v32 = sub_995750(v30);
        v33 = (unsigned int)v166;
        v35 = sub_1AFE600((_QWORD *)*a1, v166, v170, v32, v34, v31, v25);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v170 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) > 4u )
        {
          v156 = v170;
          v124 = j__strlen(".firstprivate.temp");
          v128 = sub_C00A40(v65, v33, v125, v126, v127);
          v129 = v128;
          v130 = sub_1AFE760((_QWORD *)*a1, v128, v156, ".firstprivate.temp", v124, 0);
          v134 = sub_C00A40(v65, v129, v131, v132, v133);
          v42 = (_QWORD *)sub_1AE9760(*a1, v130, *(_QWORD *)(v65 + 8), v134);
          v157 = *a1;
          v138 = sub_19146F0(v157, v42, v135, v136, v157, v137, a7, a8);
          v55 = v35;
          sub_17ED4C0(v157, v35, v138 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
        }
        else
        {
          v36 = sub_995750(v169);
          v153 = v37;
          v40 = sub_C00A40(v65, v33, v37, v38, v39);
          v41 = sub_1AFE760((_QWORD *)*a1, v40, v171, v36, v153, 0);
          v42 = (_QWORD *)sub_1AE9760(*a1, v41, v171, v166);
          v174.m128i_i64[0] = sub_19146F0(*a1, v42, v43, v44, v45, v46, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
          v171 = sub_6D5440(&v171);
          v154 = v171;
          v50 = sub_C00A40(v65, (__int64)v42, v47, v48, v49);
          v51 = sub_1AFE760((_QWORD *)*a1, v50, v154, ".firstprivate.temp", 0x12u, 0);
          LODWORD(v181[0]) = 0;
          v181[1] = nullptr;
          v52 = *(_QWORD *)(v51 + 48);
          v183 = v51;
          v182.m128_u64[0] = v52;
          v184 = 0;
          v53 = *a1;
          v176.m128i_i16[0] = 2;
          v176.m128i_i32[1] = v166;
          v176.m128i_i32[2] = v166;
          v176.m128i_i32[3] = v166;
          v182.m128_i32[2] = 0;
          sub_1A19220((__int64)&v194, v53, (__int64)v181, &v176, (__int64)&v174, 1, a7, a8, 0, 1u);
          v54 = sub_1A1D600(
                  (unsigned int)&v194,
                  *a1,
                  (unsigned int)v181,
                  (unsigned int)&v176,
                  (unsigned int)&v174,
                  1,
                  0);
          if ( v54 == 1 )
          {
            v55 = 1;
            sub_B88650(v35, 1);
          }
          else
          {
            v55 = v54 & 0xFFFFFFFFFFFFFFFELL;
            sub_B73850(v35, v54 & 0xFFFFFFFFFFFFFFFELL);
          }
          sub_168B6C0((__int64)a1);
          sub_1A0BB10((__int64)&v194);
        }
        if ( *(char *)(v35 + 28) < 0 )
        {
          if ( !v151 )
          {
            v96 = sub_C00A40(v65, v55, v56, 0, v58);
            sub_168B9F0((__int64)&v194, a1, v96, 0x1835u, 0);
            sub_15F7200(&v194);
          }
          goto LABEL_26;
        }
        sub_B94AD0(*(__m128i **)(*a1 + 544), v35, v56, v57, v58, v59);
        v155 = sub_C00A40(v65, v35, v60, v61, v62);
        v194.m128i_i64[0] = *(_QWORD *)(v65 + 8);
        v63 = sub_6D5440(&v194);
        v64 = sub_1AE9760(*a1, v35, v63, v155);
        if ( !v17 )
        {
          if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
          {
            v17 = v159;
            if ( v161 != 52 )
            {
              v139 = v169;
              if ( (*(_BYTE *)(v169 + 28) & 0x7Fu) - 49 <= 2 )
              {
                v140 = v169;
                v158 = sub_1AE6110(a1[1], v169);
                if ( v158 )
                {
                  v144 = sub_C00A40(v65, v140, v141, v142, v143);
                  v194.m128i_i64[0] = *(_QWORD *)(v158 + 48);
                  v147 = sub_C1BEF0((__int64)&v194, v158, v145, v146);
                  v17 = sub_1AE9760(*a1, v158, v147, v144);
                  goto LABEL_102;
                }
              }
              v17 = sub_1B22DF0(*a1, v139, v168, 1, a7, a8);
              if ( !sub_1B223D0((__int64)a1, v169, 0, 0, a7, a8) )
LABEL_102:
                sub_147FE60((__int64)&ptr, *(_QWORD *)(v17 + 16));
            }
          }
          if ( v151 )
          {
            v148 = sub_BFB9F0(v65);
            sub_1AEFBB0(a1[1], v169, v148, v17);
          }
          if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
            v17 = sub_BFB9F0(v65);
          goto LABEL_25;
        }
        v17 = sub_BFB9F0(v65);
        if ( v151 )
        {
          sub_1AEFBB0(a1[1], v169, v17, 0);
          v17 = sub_BFB9F0(v65);
        }
LABEL_25:
        sub_14B7B40((__int64)&v185, v17);
        sub_14B7B40((__int64)&v188, v64);
        sub_14B7B40((__int64)&v191, (__int64)v42);
LABEL_26:
        if ( v152 == ++v9 )
          goto LABEL_41;
      }
    }
    sub_1AFBE90((__int64)v181, a1[1], v169);
    v161 = HIDWORD(v181[0]);
    v159 = v182.m128_i64[1];
    v97 = sub_1AE5FF0(a1[1]);
    if ( v97 )
      v98 = *(_DWORD *)(v97 + 976);
    else
      v98 = 103;
    v21 = (_QWORD *)sub_168B6C0((__int64)a1);
    v101 = sub_F56AE0(v171, v21);
    if ( HIDWORD(v181[0]) != 106 && HIDWORD(v181[0]) != 36 )
    {
      if ( sub_FFED80(v98, (__int64)v21, v99, v100) )
      {
        if ( v182.m128_u64[0] )
          goto LABEL_84;
      }
      else if ( HIDWORD(v181[0]) != 52 && v182.m128_u64[0] )
      {
LABEL_84:
        sub_168B9F0((__int64)&v194, a1, v166, 0x1229u, 0);
        sub_1AF81E0(&v174, HIDWORD(v181[0]));
        v118 = 36;
        v119 = sub_1682AF0((__int64)&v194, (__int64)&v174);
        goto LABEL_85;
      }
    }
    if ( !v101 )
    {
      if ( v17 && (*(_BYTE *)(v17 + 28) & 0x7F) != 0x2B )
      {
        v102 = (_BYTE *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)v102 + 8LL) + 70) & 0x7Fu) <= 3 )
            goto LABEL_64;
        }
        else if ( ((v102[8] + 70) & 0x7Fu) <= 3 )
        {
          goto LABEL_64;
        }
      }
      if ( !v182.m128_u64[0] && HIDWORD(v181[0]) != 106 && HIDWORD(v181[0]) != 94 )
        goto LABEL_84;
    }
LABEL_64:
    if ( sub_FFE580(v98) )
    {
      if ( sub_FFE740(v98) )
      {
LABEL_66:
        if ( (unsigned __int8)sub_FFEF70(v98, (__int64)v21, v105, v106) )
        {
          v21 = (_QWORD *)a1[1];
          sub_1AF1680(
            (__int64)&v194,
            (__int64)v21,
            v169,
            (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))sub_1AE9840,
            (__int64)&v174,
            1,
            (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))sub_1AE79C0,
            (__int64)&v176);
          a7 = (__m128)_mm_load_si128(&v194);
          a8 = (__m128)_mm_load_si128(&v195);
          LODWORD(v183) = v196;
          *(__m128 *)v181 = a7;
          v182 = a8;
          BYTE4(v183) = v197;
          if ( a7.m128_i32[1] == 85
            && (sub_FFE740((int)v181[0])
             || sub_FFE580((int)v181[0])
             || sub_FFEA60(LODWORD(v181[0]), (__int64)v21, v115, v116)) )
          {
            sub_168B9F0((__int64)&v194, a1, v166, 0x11DEu, 0);
            v176.m128i_i64[0] = sub_20EAB70(LODWORD(v181[0]), v165);
            v176.m128i_i64[1] = v117;
            sub_166BAF0((__int64)&v194, (__int64)&v176);
            goto LABEL_89;
          }
        }
        if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x2Du && sub_FFE8A0(v98) || v98 == 70 )
        {
          v107 = a1[1];
          v21 = (_QWORD *)v17;
          v194.m128i_i64[0] = (__int64)&v167;
          if ( (unsigned __int8)sub_1AEA760(
                                  v107,
                                  v17,
                                  1,
                                  (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))sub_1AE66D0,
                                  (__int64)&v194) )
          {
            sub_168B9F0((__int64)&v194, a1, v166, 0x1224u, 0);
            sub_1AF81E0(&v174, 0x24u);
            v108 = sub_1682AF0((__int64)&v194, (__int64)&v174);
            sub_1AF81E0(&v176, v167);
            v109 = sub_1682AF0(v108, (__int64)&v176);
            v110 = sub_1AE5FF0(a1[1]);
            if ( v110 )
              v111 = *(unsigned int *)(v110 + 976);
            else
              v111 = 103;
            v173[0] = sub_20EAB70(v111, v165);
            v173[1] = v112;
            sub_166BAF0(v109, (__int64)v173);
            v113 = (void *)v176.m128i_i64[0];
            if ( (_BYTE *)v176.m128i_i64[0] == v177 )
              goto LABEL_87;
LABEL_86:
            operator delete(v113);
LABEL_87:
            if ( (__int64 *)v174.m128i_i64[0] != &v175 )
              operator delete((void *)v174.m128i_i64[0]);
LABEL_89:
            sub_15F7200(&v194);
            sub_1B20830(*a1, a1[1], v169, (unsigned int *)v181, 0);
            goto LABEL_26;
          }
        }
        goto LABEL_12;
      }
    }
    else if ( !sub_FFED80(v98, (__int64)v21, v103, v104) || sub_FFE740(v98) )
    {
      goto LABEL_66;
    }
    if ( !sub_FFEA60(v98, (__int64)v21, v105, v106) )
    {
      v21 = (_QWORD *)a1[1];
      sub_1AF1930((__int64)&v194, (__int64)v21, v169, 1);
      v120 = _mm_load_si128(&v194);
      v121 = _mm_load_si128(&v195);
      LODWORD(v183) = v196;
      *(__m128i *)v181 = v120;
      v182 = (__m128)v121;
      BYTE4(v183) = v197;
      if ( v120.m128i_i32[1] != 94
        && (sub_FFE740((int)v181[0]) || sub_FFEA60(LODWORD(v181[0]), (__int64)v21, v122, v123)
                                     || LODWORD(v181[0]) == 103) )
      {
        sub_168B9F0((__int64)&v194, a1, v166, 0x11F7u, 0);
        sub_1AF81E0(&v174, 0x24u);
        v118 = 94;
        v119 = sub_1682AF0((__int64)&v194, (__int64)&v174);
LABEL_85:
        sub_1AF81E0(&v176, v118);
        sub_1682AF0(v119, (__int64)&v176);
        v113 = (void *)v176.m128i_i64[0];
        if ( (_BYTE *)v176.m128i_i64[0] != v177 )
          goto LABEL_86;
        goto LABEL_87;
      }
    }
    goto LABEL_66;
  }
LABEL_41:
  v80 = (unsigned __int64 *)ptr;
  v81 = 0;
  if ( (_DWORD)v186 )
  {
    v82 = (unsigned int)v179;
    v83 = (_QWORD *)sub_168B6C0((__int64)a1);
    v87 = sub_1AE9A60(v83, v80, v82, v84, v85, v86);
    v88 = (unsigned int)v186;
    v89 = v185;
    v90 = v87;
    *(_QWORD *)&v150 = v191;
    v91 = v188;
    *((_QWORD *)&v150 + 1) = (unsigned int)v192;
    v92 = (unsigned int)v189;
    v93 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v149 + 1) = v92;
    *(_QWORD *)&v149 = v91;
    v94 = sub_EBDB20(v93, a4, a5, a6, (__int64)v89, v88, v149, v150, v90);
    v80 = (unsigned __int64 *)ptr;
    v81 = v94;
  }
  if ( v80 != (unsigned __int64 *)v180 )
    free(v80);
  if ( v191 != v193 )
    free(v191);
  if ( v188 != v190 )
    free(v188);
  if ( v185 != v187 )
    free(v185);
  return v81;
}
