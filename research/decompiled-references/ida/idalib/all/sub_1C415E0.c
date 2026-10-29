__int64 __fastcall sub_1C415E0(
        __int64 a1,
        __int64 a2,
        unsigned __int32 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        __int64 *a16,
        __int64 a17)
{
  _BYTE *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 result; // rax
  unsigned int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // r13
  __int64 v33; // r12
  _QWORD *v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned __int8 v42; // dl
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  char v49; // al
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 *v67; // r13
  int v68; // r12d
  __int64 *v69; // rbx
  __int64 v70; // rdi
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __m128i *v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm2
  __int64 v80; // r8
  __int64 v81; // r9
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // eax
  int v88; // r13d
  __int64 *v89; // r15
  size_t v90; // r14
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rdi
  unsigned __int64 v95; // r13
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // rax
  unsigned int v103; // r12d
  int v104; // r13d
  int v105; // r14d
  char v106; // dl
  unsigned __int64 v107; // rax
  char v108; // al
  __int64 v109; // rax
  _QWORD *v110; // rax
  _BYTE *v111; // rdi
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  char v114; // al
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  size_t v122; // rdx
  unsigned int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // r12
  _BYTE *v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // [rsp-10h] [rbp-2278h]
  __int64 v136; // [rsp+0h] [rbp-2268h]
  __int64 v137; // [rsp+0h] [rbp-2268h]
  int v138; // [rsp+10h] [rbp-2258h]
  __int64 v140; // [rsp+18h] [rbp-2250h]
  __int64 v141; // [rsp+18h] [rbp-2250h]
  __int64 v142; // [rsp+18h] [rbp-2250h]
  __int64 v143; // [rsp+18h] [rbp-2250h]
  __int64 v144; // [rsp+18h] [rbp-2250h]
  unsigned __int64 v145; // [rsp+18h] [rbp-2250h]
  unsigned __int64 v146; // [rsp+18h] [rbp-2250h]
  __int64 v148; // [rsp+28h] [rbp-2240h] BYREF
  __int64 v149; // [rsp+30h] [rbp-2238h]
  __int64 v150; // [rsp+38h] [rbp-2230h]
  __m128i *v151; // [rsp+40h] [rbp-2228h]
  __int64 v152; // [rsp+48h] [rbp-2220h]
  void **v153; // [rsp+50h] [rbp-2218h]
  __int64 p_src; // [rsp+58h] [rbp-2210h]
  unsigned __int64 v155; // [rsp+60h] [rbp-2208h]
  void *v156; // [rsp+68h] [rbp-2200h]
  __int64 *v157; // [rsp+70h] [rbp-21F8h]
  unsigned __int64 *v158; // [rsp+78h] [rbp-21F0h] BYREF
  unsigned int v159; // [rsp+88h] [rbp-21E0h] BYREF
  int v160; // [rsp+8Ch] [rbp-21DCh] BYREF
  __int32 v161; // [rsp+90h] [rbp-21D8h] BYREF
  unsigned __int32 v162; // [rsp+94h] [rbp-21D4h] BYREF
  __int64 v163; // [rsp+98h] [rbp-21D0h] BYREF
  __int64 v164; // [rsp+A0h] [rbp-21C8h] BYREF
  __int64 v165; // [rsp+A8h] [rbp-21C0h] BYREF
  unsigned __int64 v166; // [rsp+B0h] [rbp-21B8h] BYREF
  unsigned __int64 v167; // [rsp+B8h] [rbp-21B0h] BYREF
  unsigned __int64 v168; // [rsp+C0h] [rbp-21A8h] BYREF
  __int64 v169; // [rsp+C8h] [rbp-21A0h] BYREF
  __m128i *v170; // [rsp+D0h] [rbp-2198h] BYREF
  __int64 *v171; // [rsp+D8h] [rbp-2190h] BYREF
  __int64 *v172; // [rsp+E0h] [rbp-2188h] BYREF
  int *v173; // [rsp+E8h] [rbp-2180h] BYREF
  __m128i v174; // [rsp+F0h] [rbp-2178h] BYREF
  __int64 v175; // [rsp+100h] [rbp-2168h] BYREF
  __m128i v176; // [rsp+110h] [rbp-2158h] BYREF
  __int64 v177; // [rsp+120h] [rbp-2148h] BYREF
  __m128 v178; // [rsp+130h] [rbp-2138h] BYREF
  _BYTE *v179; // [rsp+140h] [rbp-2128h]
  void *v180[4]; // [rsp+150h] [rbp-2118h] BYREF
  __int64 v181[10]; // [rsp+170h] [rbp-20F8h] BYREF
  void *src; // [rsp+1C0h] [rbp-20A8h] BYREF
  size_t n; // [rsp+1C8h] [rbp-20A0h]
  _QWORD v184[8]; // [rsp+1D0h] [rbp-2098h] BYREF
  unsigned __int64 v185; // [rsp+210h] [rbp-2058h] BYREF
  __int128 v186; // [rsp+218h] [rbp-2050h]
  void *dest; // [rsp+228h] [rbp-2040h] BYREF
  __m128 v188; // [rsp+230h] [rbp-2038h] BYREF
  char v189; // [rsp+248h] [rbp-2020h]
  void *v190[2]; // [rsp+268h] [rbp-2000h]
  __int64 v191; // [rsp+278h] [rbp-1FF0h]
  _QWORD *v192; // [rsp+280h] [rbp-1FE8h]
  __m128 v193; // [rsp+288h] [rbp-1FE0h]
  __int64 v194; // [rsp+298h] [rbp-1FD0h]
  __int64 v195; // [rsp+2A0h] [rbp-1FC8h]
  __int64 v196; // [rsp+2A8h] [rbp-1FC0h]
  __int64 v197; // [rsp+2B0h] [rbp-1FB8h]
  void *v198; // [rsp+2C0h] [rbp-1FA8h] BYREF
  void *ptr; // [rsp+2C8h] [rbp-1FA0h] BYREF
  unsigned __int64 v200; // [rsp+2D0h] [rbp-1F98h] BYREF
  _BYTE v201[64]; // [rsp+2D8h] [rbp-1F90h] BYREF
  void *v202[2]; // [rsp+318h] [rbp-1F50h]
  __int64 v203; // [rsp+328h] [rbp-1F40h]
  _QWORD *v204; // [rsp+330h] [rbp-1F38h]
  __m128i v205; // [rsp+338h] [rbp-1F30h]
  __int64 v206; // [rsp+348h] [rbp-1F20h]
  __int64 v207; // [rsp+350h] [rbp-1F18h]
  __int64 v208; // [rsp+358h] [rbp-1F10h]
  __int64 v209; // [rsp+360h] [rbp-1F08h]
  __m128i v210; // [rsp+370h] [rbp-1EF8h] BYREF
  _QWORD v211[338]; // [rsp+380h] [rbp-1EE8h] BYREF
  int v212; // [rsp+E10h] [rbp-1458h]
  char v213; // [rsp+E14h] [rbp-1454h]
  __int64 v214; // [rsp+E98h] [rbp-13D0h]
  int v215; // [rsp+EA0h] [rbp-13C8h]
  __int64 v216; // [rsp+EA8h] [rbp-13C0h]
  __int64 v217; // [rsp+EB0h] [rbp-13B8h]
  __int8 *v218; // [rsp+EB8h] [rbp-13B0h]
  __int64 v219; // [rsp+EC0h] [rbp-13A8h]
  __int8 *v220; // [rsp+EE8h] [rbp-1380h]
  __int64 v221; // [rsp+EF0h] [rbp-1378h]
  __int64 v222; // [rsp+EF8h] [rbp-1370h]
  __int64 v223; // [rsp+F00h] [rbp-1368h]
  unsigned int v224; // [rsp+F08h] [rbp-1360h]
  int v225; // [rsp+F0Ch] [rbp-135Ch]
  __int64 v226; // [rsp+F10h] [rbp-1358h]
  char v227; // [rsp+F18h] [rbp-1350h]
  int v228; // [rsp+F1Ch] [rbp-134Ch]
  int v229; // [rsp+2220h] [rbp-48h]

  v18 = (_BYTE *)a1;
  v19 = *(_QWORD *)(a6 + 8);
  v149 = *(_QWORD *)(a1 + 608);
  v20 = *(_QWORD *)(a13 + 8);
  v163 = *(_QWORD *)(v19 + 48);
  v21 = *(_QWORD *)(v163 & 0xFFFFFFFFFFFFFFF0LL);
  v138 = a2;
  v22 = a9;
  v140 = a10;
  v148 = a11;
  v23 = a12;
  if ( (*(_BYTE *)(v21 + 17) & 4) != 0 )
  {
    sub_B8C4D0(v19, *(_QWORD *)(a1 + 248));
    if ( *(char *)(v20 + 28) >= 0 )
    {
      if ( a15 != 2 )
      {
        if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x2E )
        {
          v29 = v20 + 104 + 8LL * *(unsigned int *)(v20 + 100);
          if ( v20 + 104 != v29 )
          {
            v149 = a9;
            v30 = (__int64 *)v29;
            v150 = a12;
            v31 = (__int64 *)(v20 + 104);
            do
            {
              v32 = *v31;
              if ( !sub_B799A0(*v31) )
                *(_QWORD *)(v32 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
              ++v31;
            }
            while ( v30 != v31 );
            v22 = v149;
            v23 = v150;
          }
        }
        *(_QWORD *)(v20 + 48) = sub_1D52240(a1, *(_QWORD *)(v20 + 48));
        goto LABEL_4;
      }
      return 0;
    }
LABEL_3:
    if ( a15 != 2 )
    {
LABEL_4:
      if ( *(_DWORD *)(*((_QWORD *)v18 + 29) + 64LL) > 0x31u && v22 > 1 )
        sub_1B28470(
          *((__int64 **)v18 + 95),
          v138,
          (__int64 (__fastcall ***)())(v22 & 0xFFFFFFFFFFFFFFFELL),
          *(double *)a7.m128_u64,
          a8);
      v24 = sub_EEE9A0(88, *((_QWORD **)v18 + 31), 8u);
      sub_EF22A0(
        v24,
        a4,
        a6,
        v22 & 0xFFFFFFFFFFFFFFFELL,
        v140 & 0xFFFFFFFFFFFFFFFELL,
        v148 & 0xFFFFFFFFFFFFFFFELL,
        v23 & 0xFFFFFFFFFFFFFFFELL,
        a13,
        0,
        v138,
        a3,
        a5,
        a14);
      return v24;
    }
    return 0;
  }
  if ( (a9 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    goto LABEL_3;
  v26 = *(_DWORD *)(v19 + 24);
  v148 = a17;
  v159 = v26;
  v27 = sub_C1BEF0((__int64)&v163, a2, a9, a10);
  v28 = sub_190BDA0(a1, v19, v27, 1, a5, 0, *(double *)a7.m128_u64, a8);
  if ( v28 == 1 )
    return 1;
  v33 = sub_190BDA0(a1, v19, v27, 1, a5, 0, *(double *)a7.m128_u64, a8);
  if ( v33 == 1 )
    return 1;
  v150 = sub_A75AF0(*(_QWORD *)(a1 + 248));
  v34 = (_QWORD *)sub_B73640(v19);
  v152 = (__int64)v34;
  if ( !v34 )
    return 1;
  p_src = v34[1];
  if ( (unsigned __int8)sub_1E63CF0(a1, v159, p_src, 1, 3836) )
    return 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0 && v148 && &a16[v148] != a16 )
  {
    v144 = v28;
    v67 = &a16[v148];
    v148 = v33;
    v68 = 1;
    v151 = (__m128i *)a1;
    v69 = a16;
    do
    {
      v70 = *v69;
      v71 = v68;
      ++v69;
      ++v68;
      sub_C95C20(v70, v19, v71);
    }
    while ( v67 != v69 );
    v28 = v144;
    v33 = v148;
    v18 = v151;
  }
  v153 = v180;
  sub_D8B070(
    v180,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    *(unsigned __int16 *)(v149 + 12) >> 1);
  v198 = &v200;
  v35 = j__strlen("__begin");
  sub_1C32AD0(&v198, "__begin", (__int64)&aBegin[v35]);
  v151 = &v210;
  sub_12182E0(&v210, &v198, (__int64)v180);
  v155 = sub_1C38CC0(v18, a5, v150, (const void *)v210.m128i_i64[0], v210.m128i_u64[1]);
  if ( (_QWORD *)v210.m128i_i64[0] != v211 )
    operator delete((void *)v210.m128i_i64[0]);
  if ( v198 != &v200 )
    operator delete(v198);
  v198 = &v200;
  v36 = j__strlen("__end");
  sub_1C32AD0(&v198, "__end", (__int64)&aEnd_2[v36]);
  sub_12182E0(v151, &v198, (__int64)v153);
  v148 = sub_1C38CC0(v18, a5, v150, (const void *)v210.m128i_i64[0], v210.m128i_u64[1]);
  if ( (__m128i *)v210.m128i_i64[0] != &v151[1] )
    operator delete((void *)v210.m128i_i64[0]);
  if ( v198 != &v200 )
    operator delete(v198);
  v164 = 0;
  v165 = 0;
  v38 = (__int64 *)(p_src & 0xFFFFFFFFFFFFFFF0LL);
  v39 = *(_QWORD *)(p_src & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v39 + 16) - 2) <= 4u
    || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
    && (v78 = sub_F63050(*(_QWORD *)(p_src & 0xFFFFFFFFFFFFFFF0LL), a5, v37, v38),
        v38 = (__int64 *)(p_src & 0xFFFFFFFFFFFFFFF0LL),
        (v39 = v78) != 0) )
  {
    v164 = v28;
    v150 = v28 & 0xFFFFFFFFFFFFFFFELL;
    if ( a3 )
    {
      v141 = v39;
      v40 = sub_178D8A0((__int64 *)v18, v149, a5, v28 & 0xFFFFFFFFFFFFFFFELL, (__m128i)a7);
      v39 = v141;
      v164 = v40;
      if ( v40 == 1 )
        goto LABEL_55;
    }
    v142 = v39;
    if ( (unsigned __int8)sub_1C3B150(
                            (__int64)v18,
                            v155,
                            v150,
                            a5,
                            0xEFEu,
                            *(double *)a7.m128_u64,
                            *(double *)a8.m128_u64) )
    {
LABEL_65:
      sub_1C40DB0((__int64)v18, v164 & 0xFFFFFFFFFFFFFFFELL, 0);
      result = 1;
      goto LABEL_56;
    }
    if ( (unsigned int)*(unsigned __int8 *)(v142 + 16) - 2 > 1 )
    {
      v152 = v142;
      v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 16LL))(v148);
      v94 = *((_QWORD **)v18 + 31);
      v145 = v93;
      p_src = v152;
      v95 = v152 & 0xFFFFFFFFFFFFFFF0LL;
      v96 = sub_A81910(v94, v152 & 0xFFFFFFFFFFFFFFF0LL, v159);
      v97 = (_QWORD *)sub_1E61050(v18, v152 & 0xFFFFFFFFFFFFFFF0LL, v96, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      v152 = sub_1967CB0((__int64)v18, *(_DWORD *)(v148 + 24), 0, 1, v97, v145, a7, a8);
      if ( v152 == 1 )
        goto LABEL_55;
      v146 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v148 + 16LL))(v148);
      v98 = sub_A81910(*((_QWORD **)v18 + 31), *(_QWORD *)(p_src + 32), v159);
      v99 = (_QWORD *)sub_1E61050(v18, v95, v98, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      v100 = sub_1967CB0((__int64)v18, *(_DWORD *)(v148 + 24), 0, 1, v99, v146, a7, a8);
      if ( v100 == 1 )
        goto LABEL_55;
      v44 = sub_192A3E0(
              (__int64)v18,
              v149,
              *(_DWORD *)(v148 + 24),
              43,
              v152 & 0xFFFFFFFFFFFFFFFELL,
              (_QWORD *)(v100 & 0xFFFFFFFFFFFFFFFELL),
              a7,
              a8);
      if ( v44 == 1 )
        goto LABEL_55;
    }
    else
    {
      v41 = sub_A63D20(*((_QWORD **)v18 + 31));
      v42 = *(_BYTE *)(v142 + 19);
      v43 = *(_QWORD *)(v142 + 40);
      if ( (v42 & 2) != 0 )
      {
        v210.m128i_i32[2] = *(_DWORD *)(v43 + 8);
        if ( v210.m128i_i32[2] > 0x40u )
          sub_2205510(v151);
        else
          v210.m128i_i64[0] = *(_QWORD *)v43;
      }
      else
      {
        v210.m128i_i32[2] = 8 * ((v42 >> 2) & 0x1F);
        if ( v210.m128i_i32[2] > 64 )
          sub_2205470(v151, v43, 0);
        else
          v210.m128i_i64[0] = v43;
      }
      v44 = sub_C0C5D0(*((_QWORD **)v18 + 31), (__int64)v151, v41, v159);
      if ( v210.m128i_i32[2] > 0x40u && v210.m128i_i64[0] )
      {
        v143 = v44;
        operator delete[]((void *)v210.m128i_i64[0]);
        v44 = v143;
      }
    }
    v45 = sub_192A3E0(
            (__int64)v18,
            v149,
            a5,
            33,
            v33 & 0xFFFFFFFFFFFFFFFELL,
            (_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8);
    v165 = v45;
    if ( v45 == 1 )
    {
LABEL_55:
      result = 1;
      goto LABEL_56;
    }
    if ( (unsigned __int8)sub_1C3B150(
                            (__int64)v18,
                            v148,
                            v45 & 0xFFFFFFFFFFFFFFFELL,
                            a5,
                            0xEFEu,
                            *(double *)a7.m128_u64,
                            *(double *)a8.m128_u64) )
    {
LABEL_54:
      sub_1C40DB0((__int64)v18, v165 & 0xFFFFFFFFFFFFFFFELL, 1);
      goto LABEL_55;
    }
LABEL_48:
    src = *(void **)(v155 + 48);
    v185 = *(_QWORD *)(v148 + 48);
    v48 = *(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL];
    v49 = v48 | v185;
    v50 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)&byte_8[(unsigned __int64)src & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)src & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)src) & 7) == (v50 | v49 & 7) )
    {
      p_src = (__int64)&src;
    }
    else
    {
      sub_168B9F0(
        (__int64)v151,
        (__int64 *)v18 + 1,
        v159,
        (*(_BYTE *)(*((_QWORD *)v18 + 29) + 1LL) & 0x40) == 0 ? 5561 : 6900,
        0);
      p_src = (__int64)&src;
      v51 = sub_1605D30((__int64)v151, (__int64 *)&src);
      sub_1605D30(v51, (__int64 *)&v185);
      sub_15F7200(v151);
      sub_1C40DB0((__int64)v18, v164 & 0xFFFFFFFFFFFFFFFELL, 0);
      sub_1C40DB0((__int64)v18, v165 & 0xFFFFFFFFFFFFFFFELL, 1);
    }
    v52 = sub_17A2530((__int64)v18, v155, 0, v50, v46, v47);
    v22 = sub_1C36280((__int64)v18, v52, a5, a5);
    v56 = sub_17A2530((__int64)v18, v148, 0, v53, v54, v55);
    v140 = sub_1C36280((__int64)v18, v56, a5, a5);
    v152 = sub_C1BEF0(p_src, v56, v57, v58);
    v61 = sub_190BDA0((__int64)v18, v155, v152, 1, a5, 0, *(double *)a7.m128_u64, a8);
    if ( v61 == 1 )
      goto LABEL_55;
    v62 = sub_C1BEF0((__int64)&v185, v155, v59, v60);
    v63 = sub_190BDA0((__int64)v18, v148, v62, 1, a5, 0, *(double *)a7.m128_u64, a8);
    if ( v63 == 1 )
      goto LABEL_55;
    v64 = sub_192A3E0(
            (__int64)v18,
            v149,
            a5,
            42,
            v61 & 0xFFFFFFFFFFFFFFFELL,
            (_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8);
    if ( v64 != 1 )
    {
      v116 = sub_19179E0((__int64)v18, a5, v64 & 0xFFFFFFFFFFFFFFFELL, 0, a7, a8);
      if ( v116 != 1 )
      {
        v148 = sub_1AF29F0((__int64)v18, v116 & 0xFFFFFFFFFFFFFFFELL, 0, v117, v118, a7, a8);
        if ( v148 != 1 )
        {
          v119 = sub_190BDA0((__int64)v18, v155, v152, 1, a5, 0, *(double *)a7.m128_u64, a8);
          if ( v119 != 1 )
          {
            v72 = sub_19258C0((__int64)v18, v149, a5, 34, (_QWORD *)(v119 & 0xFFFFFFFFFFFFFFFELL), 0, a7, a8);
            if ( v72 == 1
              || a3 && (v72 = sub_178D8A0((__int64 *)v18, v149, a3, v72 & 0xFFFFFFFFFFFFFFFELL, (__m128i)a7), v72 == 1)
              || (v23 = sub_1AF29F0((__int64)v18, v72 & 0xFFFFFFFFFFFFFFFELL, 0, v73, v74, a7, a8), v23 == 1) )
            {
              v75 = v151;
              sub_168B9F0((__int64)v151, (__int64 *)v18 + 1, v159, 0x1763u, 0);
              v76 = sub_1C3B6A0((__int64)v151, (int *)&v159);
              LODWORD(v181[0]) = 2;
LABEL_64:
              v77 = sub_1587D10(v76, (int *)v181);
              v198 = *(void **)(v150 + 8);
              sub_162B6D0(v77, (__int64 *)&v198);
              sub_15F7200(v75);
              goto LABEL_65;
            }
            v120 = sub_190BDA0((__int64)v18, v155, v152, 1, a5, 0, *(double *)a7.m128_u64, a8);
            if ( v120 != 1 )
            {
              v121 = sub_19258C0((__int64)v18, v149, a5, 31, (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFFELL), 0, a7, a8);
              if ( v121 != 1 )
              {
                if ( *(char *)(v20 + 28) >= 0 && a15 != 2 )
                {
                  sub_17ED4C0(
                    (__int64)v18,
                    v20,
                    v121 & 0xFFFFFFFFFFFFFFFELL,
                    0,
                    *(double *)a7.m128_u64,
                    *(double *)a8.m128_u64);
                  if ( *(char *)(v20 + 28) < 0 || sub_B73640(v20) && (*(_DWORD *)sub_B73640(v20) & 0x40000) != 0 )
                    sub_1C40DB0((__int64)v18, v164 & 0xFFFFFFFFFFFFFFFELL, 0);
                }
                if ( v180[0] != v153 + 2 )
                  operator delete(v180[0]);
                goto LABEL_3;
              }
              v75 = v151;
              sub_168B9F0((__int64)v151, (__int64 *)v18 + 1, v159, 0x1763u, 0);
              v76 = sub_1C3B6A0((__int64)v151, (int *)&v159);
              LODWORD(v181[0]) = 1;
              goto LABEL_64;
            }
          }
          goto LABEL_55;
        }
      }
    }
    sub_168B9F0((__int64)v151, (__int64 *)v18 + 1, v159, 0x1763u, 0);
    v65 = sub_1C3B6A0((__int64)v151, (int *)&v159);
    LODWORD(v181[0]) = 0;
    v66 = sub_1587D10(v65, (int *)v181);
    v198 = *(void **)(v150 + 8);
    sub_162B6D0(v66, (__int64 *)&v198);
    sub_15F7200(v151);
    sub_1C40DB0((__int64)v18, v164 & 0xFFFFFFFFFFFFFFFELL, 0);
    if ( (*(_QWORD *)&byte_8[(unsigned __int64)src & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)src & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)src) & 7) == (*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v185 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v185) & 7) )
      goto LABEL_55;
    goto LABEL_54;
  }
  v157 = v38;
  v150 = v28 & 0xFFFFFFFFFFFFFFFELL;
  v166 = v28 & 0xFFFFFFFFFFFFFFFELL;
  v210.m128i_i64[0] = (__int64)v151[1].m128i_i64;
  v210.m128i_i64[1] = 0x1000000000LL;
  v211[336] = (char *)v151 + 2728;
  v218 = &v151[181].m128i_i8[8];
  v219 = 0x400000000LL;
  v220 = &v151[184].m128i_i8[8];
  v211[337] = 16;
  v224 = v159;
  v212 = 0;
  v156 = (void *)(v33 & 0xFFFFFFFFFFFFFFFELL);
  v167 = v33 & 0xFFFFFFFFFFFFFFFELL;
  v213 = 1;
  v168 = v155;
  v214 = 0;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  v221 = 0;
  v222 = 0;
  v223 = 1;
  v225 = 0;
  v226 = 0;
  v227 = 0;
  v228 = 0;
  v229 = 0;
  v169 = v148;
  v170 = v151;
  v161 = a5;
  v162 = a3;
  v171 = &v164;
  v172 = &v165;
  v173 = &v160;
  v174.m128i_i64[0] = sub_6F3470(*((_QWORD *)v18 + 30) + 552LL, "begin", 5u);
  v174.m128i_i32[2] = v161;
  sub_B85890(&v175, v174.m128i_i64[0]);
  v176.m128i_i64[0] = sub_6F3470(*((_QWORD *)v18 + 30) + 552LL, "end", 3u);
  v176.m128i_i32[2] = v161;
  p_src = (__int64)&v176;
  sub_B85890(&v177, v176.m128i_i64[0]);
  a8 = (__m128)_mm_load_si128(&v174);
  *(_QWORD *)&v186 = &dest;
  *((_QWORD *)&v186 + 1) = 0x800000000LL;
  v194 = v175;
  *(_OWORD *)v190 = 0;
  v193 = a8;
  v197 = 0x101010000LL;
  v185 = 0;
  v191 = 0;
  v192 = v18;
  v195 = 0;
  v196 = 3;
  sub_1A395A0((__int64)&v185);
  v79 = _mm_load_si128(&v176);
  v200 = 0x800000000LL;
  a7 = 0;
  ptr = v201;
  v206 = v177;
  v209 = 0x101010000LL;
  v198 = nullptr;
  *(_OWORD *)v202 = 0;
  v203 = 0;
  v204 = v18;
  v205 = v79;
  v207 = 0;
  v208 = 3;
  sub_1A395A0((__int64)&v198);
  v184[0] = &v161;
  v181[2] = (__int64)&v161;
  v184[4] = &v166;
  v184[5] = &v171;
  v181[6] = (__int64)&v167;
  v158 = &v166;
  v184[1] = &v174;
  v184[6] = &v162;
  v181[7] = (__int64)&v172;
  src = &v173;
  n = (size_t)v18;
  v184[2] = &v185;
  v184[3] = &v170;
  v184[7] = &v168;
  v181[0] = (__int64)&v173;
  v181[1] = (__int64)v18;
  v181[3] = (__int64)&v176;
  v181[4] = (__int64)&v198;
  v181[5] = (__int64)&v170;
  v181[8] = (__int64)&v169;
  v82 = sub_F63270(*v157, (__int64)&v173, (__int64)&v176, (__int64)v157, v80, v81);
  if ( !v82 )
    goto LABEL_120;
  p_src = (__int64)(v82 + 8);
  sub_1A48440((__int64)v18, (__int64)&v185, (__int64)(v82 + 8), 0);
  v85 = p_src;
  if ( (_DWORD)v185 == 5 || (sub_1A48440((__int64)v18, (__int64)&v198, p_src, 0), (_DWORD)v198 == 5) )
  {
    v88 = 2;
    goto LABEL_75;
  }
  if ( (DWORD2(v186) == 0) == ((_DWORD)v200 == 0) )
  {
LABEL_120:
    v88 = sub_1C41150((__int64)&src, (__m128)0LL, a8);
    if ( !v88 )
      v88 = sub_1C41380((__int64)v181, (__m128)0LL, a8);
  }
  else
  {
    v179 = v18;
    a7 = _mm_loadh_ps((const double *)&v158);
    p_src = (__int64)&src;
    v178 = a7;
    if ( DWORD2(v186) )
    {
      v87 = sub_1C3E900(
              (__int64)&v178,
              0,
              (__int64 *)&v185,
              (__int64 (__fastcall *)(__int64))sub_1C41370,
              p_src,
              v86,
              (__int64 (__fastcall *)(__int64))sub_1C415D0,
              (__int64)v181);
    }
    else
    {
      v87 = sub_1C3E900(
              (__int64)&v178,
              1,
              (__int64 *)&v198,
              (__int64 (__fastcall *)(__int64))sub_1C415D0,
              (__int64)v181,
              v86,
              (__int64 (__fastcall *)(__int64))sub_1C41370,
              (__int64)&src);
      v85 = v134;
    }
    v88 = v87;
  }
LABEL_75:
  if ( !BYTE3(v209) )
  {
LABEL_114:
    if ( !BYTE4(v209) || (_DWORD)v198 != 5 )
      goto LABEL_79;
LABEL_116:
    sub_1A445B0((__int64)v204, (__int64)&v198, v83, v84, v85);
    goto LABEL_79;
  }
  if ( (_DWORD)v198 == 5 )
  {
    if ( !BYTE4(v209) )
      goto LABEL_79;
    goto LABEL_116;
  }
  if ( v202[1] && (*(_BYTE *)(v204[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v204, (__int64)&v198);
    goto LABEL_114;
  }
LABEL_79:
  if ( v202[0] )
    sub_1A39780((char *)v202[0]);
  if ( ptr != v201 )
    free(ptr);
  if ( !BYTE3(v197) )
  {
LABEL_110:
    if ( !BYTE4(v197) || (_DWORD)v185 != 5 )
      goto LABEL_87;
LABEL_112:
    sub_1A445B0((__int64)v192, (__int64)&v185, v83, v84, v85);
    goto LABEL_87;
  }
  if ( (_DWORD)v185 == 5 )
  {
    if ( !BYTE4(v197) )
      goto LABEL_87;
    goto LABEL_112;
  }
  if ( v190[1] && (*(_BYTE *)(v192[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v192, (__int64)&v185);
    goto LABEL_110;
  }
LABEL_87:
  if ( v190[0] )
    sub_1A39780((char *)v190[0]);
  if ( (void **)v186 != &dest )
    free((void *)v186);
  if ( !a15 && v88 == 1 )
  {
    if ( v160 )
    {
      p_src = (__int64)&src;
      v89 = (__int64 *)(v18 + 8);
LABEL_95:
      src = v156;
      v90 = j__strlen(&byte_22F0C30);
      sub_168B9B0((__int64)&v185, (__int64)v89, 3837);
      LOBYTE(ptr) = 1;
      LODWORD(v198) = v159;
      HIDWORD(v198) = v159;
      sub_AEC610((__int64 *)&v185, (__int64 *)&v198);
      sub_AE9DF0((unsigned __int8 **)&v185, *((_QWORD *)src + 1), 8u);
      v91 = v160;
      sub_1C2FE50((unsigned __int8 **)&v185, v160);
      LODWORD(v198) = sub_EEB7E0((unsigned __int64)src, v91, *(double *)a7.m128_u64);
      sub_1582CA0((__int64)&ptr, (_BYTE **)&v185);
      sub_1C022A0(
        (__int64)v151,
        (unsigned int *)&v198,
        (__m128 *)v18,
        0,
        p_src,
        1u,
        a7,
        a8,
        &byte_22F0C30,
        v90,
        0,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
        (__int64)v181);
      if ( ptr && v200 )
        sub_1580C40(v200, (unsigned __int64)ptr);
      if ( v185 && (_QWORD)v186 )
        sub_1580C40(v186, v185);
      goto LABEL_101;
    }
    v89 = (__int64 *)(v18 + 8);
    LOWORD(v148) = *(_WORD *)v152;
    if ( (v148 & 0x1FF) == 0x47 )
    {
      v101 = *(_QWORD *)(v152 + 16);
      if ( (*(_BYTE *)(v101 + 28) & 0x7F) == 0x2B )
      {
        v102 = sub_B74600(*(_QWORD *)(v152 + 16));
        v181[0] = v102;
        src = *(void **)(v101 + 48);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)src & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42
          && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
        {
          v123 = sub_EEB7E0(v152, v152, *(double *)a7.m128_u64);
          sub_168B9F0((__int64)&v198, (__int64 *)v18 + 1, v123, 0x131Du, 0);
          v124 = sub_1C3B6A0((__int64)&v198, (int *)&v159);
          v125 = v124;
          if ( *(_BYTE *)(v124 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v124 + 32), v101, 0xAu);
          }
          else if ( *(_BYTE *)(v124 + 132) )
          {
            v131 = sub_168B9E0((_QWORD *)v124);
            v132 = *(_BYTE **)(v125 + 16);
            if ( v132 )
              v132 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v132 + 32LL))(*(_QWORD *)(v125 + 16));
            v185 = (unsigned __int64)v132;
            v133 = sub_1587BC0(v131, (__int64 *)&v185, v127, v128, v129, v130);
            sub_AE9DF0((unsigned __int8 **)(*v133 + 32LL * *(unsigned int *)(v125 + 128) + 8), v101, 0xAu);
          }
          v126 = sub_1605D30(v125, v181);
          sub_1605D30(v126, (__int64 *)&src);
          sub_15F7200(&v198);
          sub_168B9F0((__int64)&v198, v89, *(_DWORD *)(v101 + 24), 0x67u, 0);
          sub_15F7200(&v198);
          v92 = 1;
          goto LABEL_102;
        }
      }
    }
    v103 = v159;
    v104 = *((_DWORD *)v18 + 2800);
    LOBYTE(v148) = v18[12592];
    LOBYTE(p_src) = v18[11248];
    v105 = *(_DWORD *)(*((_QWORD *)v18 + 33) + 204LL);
    sub_1DBADC0(v18);
    if ( !v106 )
      v18[12592] = 1;
    v18[11248] = 0;
    v107 = sub_1925670((__int64)v18, v149, v103, 5, (_QWORD *)v152, 0, a7, a8);
    if ( v107 != 1 )
    {
      v155 = v107 & 0xFFFFFFFFFFFFFFFELL;
      if ( sub_1C43250((_DWORD)v18, v149, a2, a3, a4, a13, a5, v107 & 0xFFFFFFFFFFFFFFFELL, a14, 2, 0, 0) != 1 )
      {
        v108 = v148;
        *((_DWORD *)v18 + 2800) = v104;
        v18[12592] = v108;
        v18[11248] = p_src;
        v109 = *((_QWORD *)v18 + 33);
        if ( *(_DWORD *)(v109 + 204) == 5 )
          *(_BYTE *)(v109 + 194) = 1;
        if ( v105 )
          v105 = 3;
        *(_DWORD *)(v109 + 204) = v105;
        sub_168B9F0((__int64)&v198, (__int64 *)v18 + 1, v103, 0xEFBu, 0);
        v181[0] = *(_QWORD *)(v152 + 8);
        v110 = (_QWORD *)sub_162B6D0((__int64)&v198, v181);
        LODWORD(v185) = v103;
        v152 = (__int64)v110;
        HIDWORD(v185) = v103;
        p_src = (__int64)&src;
        *(_QWORD *)((char *)&v186 + 4) = 0;
        BYTE12(v186) = 0;
        dest = &v188.m128_u16[4];
        v188.m128_u64[0] = 0;
        v188.m128_i8[8] = 0;
        v189 = 0;
        LOBYTE(v186) = 0;
        src = v184;
        sub_1C32AD0(&src, "*", (__int64)"");
        v111 = dest;
        if ( src == v184 )
        {
          v122 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v184[0];
            else
              memcpy(dest, src, n);
            v111 = dest;
            v122 = n;
          }
          v188.m128_u64[0] = v122;
          v111[v122] = 0;
        }
        else
        {
          v148 = v184[0];
          if ( dest == &v188.m128_u16[4] )
          {
            dest = src;
            a7 = _mm_loadh_ps((const double *)&v148);
            v188 = a7;
          }
          else
          {
            a7 = _mm_loadh_ps((const double *)&v148);
            v112 = v188.m128_u64[1];
            dest = src;
            v188 = a7;
            if ( v111 )
            {
              src = v111;
              v184[0] = v112;
              goto LABEL_139;
            }
          }
          src = (void *)(p_src + 16);
        }
LABEL_139:
        n = 0;
        *(_BYTE *)src = 0;
        if ( src != (void *)(p_src + 16) )
          operator delete(src);
        v189 = 0;
        sub_1589170(v152, &v185);
        if ( dest != &v188.m128_u16[4] )
          operator delete(dest);
        sub_15F7200(&v198);
        v92 = sub_1C43250((_DWORD)v18, v149, a2, a3, a4, a13, a5, v155, a14, 1, 0, 0);
        if ( v92 )
          goto LABEL_102;
        goto LABEL_144;
      }
    }
    v114 = v148;
    *((_DWORD *)v18 + 2800) = v104;
    v18[12592] = v114;
    v18[11248] = p_src;
    v115 = *((_QWORD *)v18 + 33);
    if ( *(_DWORD *)(v115 + 204) == 5 )
      *(_BYTE *)(v115 + 194) = 1;
    if ( v105 )
      v105 = 3;
    *(_DWORD *)(v115 + 204) = v105;
    p_src = (__int64)&src;
LABEL_144:
    v113 = v150;
    if ( v160 )
      v113 = (__int64)v156;
    v156 = (void *)v113;
    goto LABEL_95;
  }
  if ( v88 == 1 )
  {
    p_src = (__int64)&src;
    v89 = (__int64 *)(v18 + 8);
    goto LABEL_144;
  }
  if ( !v88 )
  {
    sub_17A20D0((__int64)v151);
    goto LABEL_48;
  }
LABEL_101:
  v92 = 1;
LABEL_102:
  v137 = v92;
  sub_17A20D0((__int64)v151);
  result = v137;
LABEL_56:
  if ( v180[0] != v153 + 2 )
  {
    v136 = result;
    operator delete(v180[0]);
    return v136;
  }
  return result;
}
