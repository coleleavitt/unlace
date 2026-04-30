__int64 __fastcall sub_3B2AE0(
        __int64 *a1,
        size_t *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 *v14; // r13
  size_t *v15; // r8
  int v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdi
  char tinfo_details; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  char *v24; // rdi
  void *v25; // r8
  char v26; // bl
  __int64 v27; // r12
  __int64 v28; // rbx
  size_t v29; // rdi
  size_t v30; // rdi
  double v31; // xmm4_8
  double v32; // xmm5_8
  unsigned __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // r9
  __int64 result; // rax
  const char *v37; // rsi
  __int64 v38; // rdi
  char v39; // dl
  size_t v40; // rdi
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // r15
  int v44; // r14d
  __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  char tinfo_by_flags; // al
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // r14
  const char *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // ebx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  const char *v62; // r12
  __int64 v63; // rdi
  __int64 v64; // rdx
  char v65; // al
  unsigned int v66; // eax
  __int64 v67; // rdi
  char tinfo; // al
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rsi
  __int64 v72; // rsi
  char numbered_type; // dl
  size_t v74; // rax
  size_t v75; // r12
  size_t v76; // rbx
  size_t v77; // rax
  size_t v78; // r12
  size_t v79; // rbx
  size_t v80; // rax
  size_t v81; // r12
  size_t v82; // rbx
  size_t v83; // rax
  size_t v84; // r12
  size_t v85; // rbx
  void *v86; // rbx
  _QWORD *v87; // rax
  _OWORD *v88; // rax
  void *v89; // rbx
  char *v90; // rax
  char *v91; // rbx
  __m128i v92; // xmm0
  char v93; // cl
  __int64 (__fastcall *v94)(__int64 **, const char *, int); // rdx
  void **p_s1; // rsi
  int v96; // ecx
  __int64 (__fastcall *v97)(__int64 **, const char *, int); // rax
  void **v98; // r12
  size_t v99; // rbx
  __m128 si128; // xmm0
  size_t v101; // rax
  char *v102; // rcx
  size_t v103; // r12
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdx
  unsigned __int64 v107; // r12
  char *v108; // rbx
  const char *v109; // rsi
  char *v110; // rax
  int v111; // eax
  char *v112; // r12
  char *v113; // rax
  _BYTE *v114; // r12
  char *v115; // rax
  char *v116; // r12
  _BOOL4 v117; // ebx
  __int64 v118; // rsi
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  int v123; // ebx
  __m128 v124; // xmm4
  __m128 v125; // xmm5
  __int64 v126; // rdx
  unsigned __int64 v127; // r12
  __int64 v128; // rcx
  char *v129; // rsi
  char *v130; // r12
  const char *v131; // rcx
  unsigned int v132; // eax
  const char *v133; // r9
  void **v134; // rcx
  void **v135; // r8
  const char *v136; // rsi
  const char *v137; // rcx
  size_t v138; // rax
  __int64 v139; // rdx
  size_t v140; // r12
  __int64 i; // rbx
  __int64 v142; // rdi
  __int64 v143; // rdi
  size_t v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r12
  __int64 j; // rbx
  __int64 *v149; // r13
  __int64 v150; // rdi
  __int64 v151; // rdi
  char *v152; // rbx
  __int64 v153; // rdx
  char *v154; // rax
  char *v155; // rbx
  __int64 v156; // rax
  size_t v157; // r12
  __int64 v158; // rcx
  __int64 *v159; // rbx
  size_t v160; // r13
  __int64 k; // r15
  __int64 v162; // rdi
  __int64 v163; // rdi
  __m128i v164; // xmm0
  __m128i *v165; // rax
  __m128i *v166; // rbx
  char *v167; // r8
  void **v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rax
  void (__fastcall *v171)(__m128i **, const __m128i **, int); // rax
  __int64 v172; // r12
  size_t v173; // rbx
  char *v174; // r8
  size_t v175; // rdx
  __int64 v176; // rax
  size_t v177; // r12
  char *v178; // r12
  size_t v179; // rdx
  __int64 v180; // rdi
  void *v181; // rax
  size_t v182; // rdx
  __int64 v183; // rdi
  void *v184; // rax
  size_t v185; // rdx
  void *v186; // rax
  _QWORD *v187; // r12
  const void *v188; // rsi
  size_t v189; // rbx
  __int64 v190; // rax
  _QWORD *v191; // rcx
  __int64 v192; // r12
  const void **v193; // rcx
  const void *v194; // rax
  __int64 v195; // rbx
  void *v196; // rax
  void *v197; // rax
  char *v198; // rcx
  __int64 v199; // rdx
  char *v200; // rdx
  const char **v201; // rbx
  const char *v202; // r12
  const char *v203; // rdi
  const char **v204; // rcx
  size_t v205; // rdx
  __int64 v206; // rcx
  char *v207; // rdi
  __int64 v208; // rdx
  void *v209; // r12
  __int64 v210; // rbx
  char *v211; // r13
  __int64 v212; // rdi
  __int64 v213; // rdi
  char *v214; // rbx
  int v215; // edx
  int v216; // ecx
  char *v217; // rcx
  __int64 v218; // rdx
  void **v219; // rdx
  size_t v220; // r12
  unsigned int v221; // r13d
  const char *v222; // rbx
  const char *v223; // rdi
  unsigned __int64 v224; // rax
  int *v225; // rdx
  __int64 v226; // rsi
  __int64 v227; // rcx
  unsigned __int64 v228; // rcx
  const char *v229; // [rsp-8h] [rbp-418h]
  char v230; // [rsp+0h] [rbp-410h]
  size_t v231; // [rsp+0h] [rbp-410h]
  size_t v232; // [rsp+0h] [rbp-410h]
  const void **v233; // [rsp+8h] [rbp-408h]
  const void **v234; // [rsp+8h] [rbp-408h]
  size_t v235; // [rsp+10h] [rbp-400h]
  size_t v236; // [rsp+10h] [rbp-400h]
  char *v237; // [rsp+18h] [rbp-3F8h]
  __m128i v238; // [rsp+20h] [rbp-3F0h] BYREF
  __int64 *v239; // [rsp+30h] [rbp-3E0h]
  void **v240; // [rsp+38h] [rbp-3D8h]
  void **v241; // [rsp+40h] [rbp-3D0h]
  void *v242; // [rsp+48h] [rbp-3C8h]
  void *v243; // [rsp+50h] [rbp-3C0h] BYREF
  size_t v244; // [rsp+58h] [rbp-3B8h]
  size_t *v245; // [rsp+60h] [rbp-3B0h]
  size_t n; // [rsp+68h] [rbp-3A8h]
  char *s2; // [rsp+70h] [rbp-3A0h]
  size_t *p_tinfo_property; // [rsp+78h] [rbp-398h]
  void *src[2]; // [rsp+80h] [rbp-390h] BYREF
  int v250; // [rsp+9Ch] [rbp-374h] BYREF
  int v251; // [rsp+A0h] [rbp-370h] BYREF
  int v252; // [rsp+A4h] [rbp-36Ch] BYREF
  __int64 v253; // [rsp+A8h] [rbp-368h] BYREF
  char *s; // [rsp+B0h] [rbp-360h] BYREF
  void *v255; // [rsp+B8h] [rbp-358h] BYREF
  void *v256; // [rsp+C0h] [rbp-350h] BYREF
  void *v257; // [rsp+C8h] [rbp-348h] BYREF
  __int64 v258; // [rsp+D0h] [rbp-340h] BYREF
  __int64 v259; // [rsp+D8h] [rbp-338h] BYREF
  __int64 v260; // [rsp+E0h] [rbp-330h] BYREF
  void *v261; // [rsp+E8h] [rbp-328h] BYREF
  void *v262; // [rsp+F0h] [rbp-320h] BYREF
  void *v263; // [rsp+F8h] [rbp-318h] BYREF
  void *v264; // [rsp+100h] [rbp-310h] BYREF
  __int128 v265; // [rsp+108h] [rbp-308h]
  void *v266; // [rsp+120h] [rbp-2F0h] BYREF
  __int128 v267; // [rsp+128h] [rbp-2E8h]
  void *v268; // [rsp+140h] [rbp-2D0h] BYREF
  __int128 v269; // [rsp+148h] [rbp-2C8h]
  void *v270; // [rsp+160h] [rbp-2B0h] BYREF
  __int128 v271; // [rsp+168h] [rbp-2A8h]
  void *v272; // [rsp+180h] [rbp-290h] BYREF
  __int128 v273; // [rsp+188h] [rbp-288h]
  char *v274; // [rsp+1A0h] [rbp-270h] BYREF
  __m128 v275; // [rsp+1A8h] [rbp-268h]
  char *s1; // [rsp+1C0h] [rbp-250h] BYREF
  __int128 v277; // [rsp+1C8h] [rbp-248h]
  size_t v278; // [rsp+1E0h] [rbp-230h] BYREF
  __int128 v279; // [rsp+1E8h] [rbp-228h]
  void *v280; // [rsp+1F8h] [rbp-218h]
  __int128 v281; // [rsp+200h] [rbp-210h]
  int v282; // [rsp+210h] [rbp-200h]
  char v283; // [rsp+214h] [rbp-1FCh]
  char *v284; // [rsp+220h] [rbp-1F0h] BYREF
  __int128 v285; // [rsp+228h] [rbp-1E8h]
  __int64 v286; // [rsp+238h] [rbp-1D8h]
  __int128 v287; // [rsp+240h] [rbp-1D0h]
  __int64 v288; // [rsp+250h] [rbp-1C0h]
  char *v289; // [rsp+260h] [rbp-1B0h] BYREF
  __m128i v290; // [rsp+268h] [rbp-1A8h] BYREF
  _BYTE v291[24]; // [rsp+278h] [rbp-198h] BYREF
  int v292; // [rsp+290h] [rbp-180h]
  char v293; // [rsp+294h] [rbp-17Ch]
  size_t tinfo_property; // [rsp+2A0h] [rbp-170h] BYREF
  __int128 v295; // [rsp+2A8h] [rbp-168h] BYREF
  void *v296[3]; // [rsp+2B8h] [rbp-158h] BYREF
  _OWORD v297[2]; // [rsp+2D0h] [rbp-140h] BYREF
  char v298; // [rsp+2F0h] [rbp-120h]
  __int64 v299; // [rsp+310h] [rbp-100h]
  int v300; // [rsp+318h] [rbp-F8h]
  __int64 v301; // [rsp+320h] [rbp-F0h]
  char v302; // [rsp+328h] [rbp-E8h]
  __int128 v303; // [rsp+330h] [rbp-E0h] BYREF
  __m128i v304; // [rsp+340h] [rbp-D0h] BYREF
  __int128 v305; // [rsp+350h] [rbp-C0h] BYREF
  __m128i v306; // [rsp+360h] [rbp-B0h] BYREF
  __int128 v307; // [rsp+370h] [rbp-A0h] BYREF
  __m128i v308; // [rsp+380h] [rbp-90h]
  char v309[72]; // [rsp+390h] [rbp-80h] BYREF
  unsigned __int64 v310; // [rsp+3D8h] [rbp-38h]

  v310 = __readfsqword(0x28u);
  v12 = *a1;
  if ( !*a1 )
    return 0;
  v13 = a1[26];
  v14 = a1;
  v15 = a2;
  v16 = *(unsigned __int8 *)(v13 + 31);
  if ( (_BYTE)v16 == 12 )
  {
    v48 = *(_QWORD *)(v13 + 16);
    if ( v48 > 0xFFFFFFFFFFFFFFFDLL )
    {
      v289 = nullptr;
      if ( v48 != -2 )
        goto LABEL_44;
      tinfo_property = 0;
      v63 = *(_QWORD *)(v13 + 8);
      src[0] = a2;
      tinfo_property = get_tinfo_property(v63, 24);
      p_tinfo_property = &tinfo_property;
      copy_tinfo_t(&v289, &tinfo_property, v64);
      clear_tinfo_t(&tinfo_property);
    }
    else
    {
      src[0] = a2;
      v49 = *(_QWORD *)(v13 + 296);
      if ( !v49 )
      {
LABEL_88:
        v57 = 1;
        v62 = "Failed to change type";
        return (unsigned __int8)sub_3AC490(v14, v57, (__int64)v62, a5, a6, a7, a8, a9, a10, a11, a12);
      }
      v289 = nullptr;
      copy_tinfo_t(&v289, v49 + 64, a3);
    }
    v15 = (size_t *)src[0];
LABEL_44:
    if ( v15 )
      tinfo_by_flags = get_tinfo_by_flags(&v289, v15);
    else
      tinfo_by_flags = sub_333FD0(&v289);
    if ( tinfo_by_flags )
    {
      v52 = *(_QWORD *)(v13 + 16);
      if ( v52 == -2 )
      {
        v57 = set_tinfo_property4(v13 + 8, 32, &v289, 0, 0, 0);
      }
      else if ( v52 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v57 = set_tinfo_property4(v13 + 8, 31, *(_QWORD *)(v13 + 32), &v289, 0, 0);
      }
      else
      {
        a5 = 0;
        LODWORD(tinfo_property) = 0;
        v295 = 0u;
        memset(v296, 0, sizeof(v296));
        memset(v297, 0, 28);
        copy_tinfo_t(&v297[1], &v289, v51);
        v53 = v13 + 8;
        p_tinfo_property = &tinfo_property;
        do
        {
          v54 = (_BYTE *)(&qword_20 + 2);
          v57 = set_tinfo_property4(v53, 34, p_tinfo_property, -1, 0, 64);
          if ( v57 != -21 )
            break;
          v54 = "Please enter a unique argument name";
        }
        while ( (unsigned __int8)sub_3AB6E0(
                                   (int)&v295 + 8,
                                   (int)"Please enter a unique argument name",
                                   v55,
                                   v56,
                                   v58,
                                   v59,
                                   (__m128)0LL,
                                   a6,
                                   a7,
                                   a8,
                                   v60,
                                   v61,
                                   a11,
                                   a12,
                                   v230) );
        clear_tinfo_t(&v297[1]);
        if ( v296[2] )
        {
          *(_QWORD *)&v297[0] = 0;
          *(double *)a5.m128_u64 = qfree(v296[2], v54);
        }
        if ( *((_QWORD *)&v295 + 1) )
        {
          v296[0] = nullptr;
          *(double *)a5.m128_u64 = qfree(*((_QWORD *)&v295 + 1), v54);
        }
        cleanup_argloc(p_tinfo_property);
      }
      v62 = "Failed to change type";
      clear_tinfo_t(&v289);
      return (unsigned __int8)sub_3AC490(v14, v57, (__int64)v62, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    clear_tinfo_t(&v289);
    goto LABEL_88;
  }
  if ( (v16 & 0xEF) == 0xD )
  {
    v284 = nullptr;
    v17 = *(_QWORD *)(v13 + 16);
    if ( v17 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v34 = *(_QWORD *)(v13 + 32);
      v33 = *(_QWORD *)(v13 + 232);
      if ( v34 != -1 )
      {
        p_tinfo_property = a2;
        src[0] = &v284;
        copy_tinfo_t(&v284, v13 + 112, v17);
        v15 = a2;
        if ( !a2 )
        {
          if ( *(int *)(v13 + 224) >= 0 )
          {
            BYTE2(tinfo_property) = 0;
            LOWORD(tinfo_property) = 0;
            v67 = *(_QWORD *)(v13 + 112);
            p_tinfo_property = &tinfo_property;
            if ( !(unsigned __int8)get_tinfo_details(v67, 14, &tinfo_property) )
              goto LABEL_73;
            BYTE1(tinfo_property) = BYTE1(tinfo_property) % (8 * (unsigned __int8)tinfo_property) + 1;
            tinfo = create_tinfo(src[0], 14, 14, p_tinfo_property);
            v35 = 1;
            if ( !tinfo )
              goto LABEL_73;
            goto LABEL_64;
          }
LABEL_84:
          v70 = sub_333FD0((_QWORD *)src[0]);
          v35 = 0;
          if ( !v70 )
            goto LABEL_73;
LABEL_64:
          v66 = sub_3ABF10(
                  (__int64)v14,
                  (__int64)"Directly convert to data?",
                  v34,
                  (const char **)src[0],
                  v33,
                  v35,
                  *(double *)a5.m128_u64,
                  a6,
                  a7,
                  a8,
                  v31,
                  v32,
                  a11,
                  a12);
          v57 = v66;
          if ( v66 != 1 )
          {
            if ( v34 == -1 )
            {
              if ( !v66 )
              {
                LODWORD(p_tinfo_property) = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, __int64))(**(_QWORD **)(v12 + 1000) + 104LL))(
                                              *(_QWORD *)(v12 + 1000),
                                              &v253,
                                              v13 + 8,
                                              *(unsigned int *)(v13 + 40),
                                              -1);
                v62 = "Failed to create a data field";
                clear_tinfo_t(src[0]);
LABEL_68:
                if ( *(_QWORD *)(v13 + 16) > 0xFFFFFFFFFFFFFFFDLL )
                {
                  if ( (_DWORD)p_tinfo_property )
                  {
                    LODWORD(tinfo_property) = (_DWORD)p_tinfo_property;
                    *(_QWORD *)&v295 = v253;
                    sub_3ACC30(
                      v12,
                      (__int64)&tinfo_property,
                      3u,
                      *(double *)a5.m128_u64,
                      *(double *)a6.m128_u64,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12);
                  }
                }
                v57 = 0;
                return (unsigned __int8)sub_3AC490(v14, v57, (__int64)v62, a5, a6, a7, a8, a9, a10, a11, a12);
              }
              v62 = "Failed to create a data field";
              clear_tinfo_t(src[0]);
            }
            else
            {
              v62 = "Failed to change data field";
              clear_tinfo_t(src[0]);
            }
            return (unsigned __int8)sub_3AC490(v14, v57, (__int64)v62, a5, a6, a7, a8, a9, a10, a11, a12);
          }
LABEL_73:
          clear_tinfo_t(src[0]);
          return 0;
        }
LABEL_63:
        v65 = get_tinfo_by_flags(src[0], v15);
        v35 = 0;
        if ( !v65 )
          goto LABEL_73;
        goto LABEL_64;
      }
      if ( !a2 )
      {
        v15 = *(size_t **)(v13 + 232);
        if ( *(int *)(v13 + 224) < 0 )
          goto LABEL_83;
        goto LABEL_8;
      }
    }
    else
    {
      v18 = *(_DWORD *)(v13 + 224);
      if ( v17 == -1 && (_BYTE)v16 == 13 )
      {
        v69 = *(_QWORD *)(v13 + 192);
        v33 = 8 * v69;
        if ( !a2 )
        {
          v15 = (size_t *)(8 * v69);
          if ( v18 < 0 )
          {
LABEL_82:
            v34 = -1;
LABEL_83:
            src[0] = &v284;
            goto LABEL_84;
          }
          goto LABEL_8;
        }
      }
      else
      {
        if ( !a2 )
        {
          if ( v18 < 0 )
          {
            v33 = 0;
            goto LABEL_82;
          }
LABEL_8:
          a5 = 0;
          v19 = 13;
          v289 = nullptr;
          v292 = 1;
          v290 = 0;
          memset(v291, 0, sizeof(v291));
          v20 = *(_QWORD *)(v13 + 8);
          p_tinfo_property = v15;
          src[0] = &v284;
          tinfo_details = get_tinfo_details(v20, 13, &v289);
          v24 = v289;
          v25 = p_tinfo_property;
          v26 = tinfo_details;
          if ( tinfo_details )
          {
            v295 = 0u;
            a5 = 0;
            v152 = v289;
            v299 = 1;
            v302 = 0;
            v300 = -1;
            v153 = 0x8E38E38E38E38E39LL * ((144 * v290.m128i_i64[0]) >> 4);
            v301 = 0;
            tinfo_property = (int)p_tinfo_property;
            memset(v296, 0, sizeof(v296));
            memset(v297, 0, sizeof(v297));
            while ( v153 > 0 )
            {
              while ( 1 )
              {
                v19 = v153 >> 1;
                v154 = &v152[144 * (v153 >> 1)];
                if ( (unsigned __int64)(int)p_tinfo_property < *(_QWORD *)v154 )
                  break;
                v152 = v154 + 144;
                v153 = v153 - 1 - v19;
                if ( v153 <= 0 )
                  goto LABEL_233;
              }
              v153 >>= 1;
            }
LABEL_233:
            src[0] = p_tinfo_property;
            p_tinfo_property = (size_t *)(v152 - v289);
            s2 = (char *)(0x8E38E38E38E38E39LL * ((v152 - v289) >> 4));
            v155 = s2 - 1;
            clear_tinfo_t(&v297[1]);
            v25 = src[0];
            if ( v296[2] )
            {
              *(_QWORD *)&v297[0] = 0;
              *(double *)a5.m128_u64 = qfree(v296[2], (const char *)v19, v22, v23, src[0]);
              v25 = src[0];
            }
            if ( *((_QWORD *)&v295 + 1) )
            {
              src[0] = v25;
              v296[0] = nullptr;
              *(double *)a5.m128_u64 = qfree(*((_QWORD *)&v295 + 1), (const char *)v19);
              v25 = src[0];
            }
            v24 = v289;
            if ( !s2
              || (*((_BYTE *)p_tinfo_property + (_QWORD)v289 - 11) & 4) != 0
              && (v155 = s2 - 2, s2 == (_BYTE *)&dword_0 + 1) )
            {
              if ( v289 )
              {
                v27 = v290.m128i_i64[0];
                v26 = 0;
                src[0] = &v284;
                if ( v290.m128i_i64[0] )
                  goto LABEL_11;
                goto LABEL_242;
              }
LABEL_72:
              src[0] = &v284;
              goto LABEL_73;
            }
            s2 = (char *)v25;
            LOWORD(v278) = 0;
            BYTE2(v278) = 0;
            src[0] = &v284;
            tinfo_property = 0;
            copy_tinfo_t(&tinfo_property, &v289[144 * (_QWORD)v155 + 64], v22);
            v19 = 14;
            v245 = &v278;
            v26 = get_tinfo_details(tinfo_property, 14, &v278);
            clear_tinfo_t(&tinfo_property);
            v24 = v289;
            v25 = s2;
            if ( v26 )
            {
              v19 = 14;
              p_tinfo_property = (size_t *)s2;
              BYTE1(v278) = 1;
              src[0] = &v284;
              create_tinfo(&v284, 14, 14, v245);
              v24 = v289;
              v25 = s2;
              if ( v289 )
              {
                v27 = v290.m128i_i64[0];
                if ( v290.m128i_i64[0] )
                  goto LABEL_11;
                *(double *)a5.m128_u64 = qfree(v289, &byte_9[5]);
                v25 = p_tinfo_property;
              }
LABEL_18:
              v33 = (unsigned __int64)v25;
              v34 = -1;
              v35 = 1;
              goto LABEL_64;
            }
          }
          if ( v24 )
          {
            v27 = v290.m128i_i64[0];
            src[0] = &v284;
            if ( v290.m128i_i64[0] )
            {
LABEL_11:
              n = (size_t)v25;
              LOBYTE(s2) = v26;
              v28 = 0;
              do
              {
                p_tinfo_property = (size_t *)&v24[144 * v28];
                clear_tinfo_t(p_tinfo_property + 8);
                v29 = p_tinfo_property[5];
                if ( v29 )
                {
                  p_tinfo_property[6] = 0;
                  qfree(v29, (const char *)v19);
                }
                v30 = p_tinfo_property[2];
                if ( v30 )
                {
                  p_tinfo_property[3] = 0;
                  qfree(v30, (const char *)v19);
                }
                ++v28;
                v24 = v289;
              }
              while ( v28 != v27 );
              v290.m128i_i64[0] = 0;
              p_tinfo_property = (size_t *)n;
              *(double *)a5.m128_u64 = qfree(v289, (const char *)v19);
              v25 = (void *)n;
              if ( !(_BYTE)s2 )
                goto LABEL_73;
              goto LABEL_18;
            }
LABEL_242:
            qfree(v24, (const char *)v19, v22, v23, v25);
            goto LABEL_73;
          }
          goto LABEL_72;
        }
        v33 = 0;
      }
      v34 = -1;
    }
    src[0] = &v284;
    goto LABEL_63;
  }
  if ( (_BYTE)v16 != 45 )
    return 0;
  p_tinfo_property = (size_t *)sub_3C5BC0(*a1, a2, v16 & 0xFFFFFFEF, a4, a2);
  if ( !p_tinfo_property )
    return 0;
  v37 = (_BYTE *)(&qword_28 + 5);
  v278 = 0;
  v280 = nullptr;
  v282 = 0;
  v283 = 0x80;
  v279 = 0;
  v281 = 0;
  v38 = *(_QWORD *)(v13 + 8);
  v245 = &v278;
  v39 = get_tinfo_details(v38, 45, &v278);
  result = 0;
  if ( v39 )
  {
    v264 = nullptr;
    v265 = 0;
    v71 = *(_QWORD *)(v13 + 8);
    if ( (v71 & 0x100) != 0 )
      get_tinfo_pdata(&v264, v71, 8);
    v72 = *(unsigned int *)(v13 + 24);
    v250 = 0;
    numbered_type = get_numbered_type(p_tinfo_property, v72, &s, &v255, &v256, &v257, &v250);
    result = 0;
    v37 = v229;
    if ( !numbered_type )
      goto LABEL_281;
    v266 = nullptr;
    v267 = 0;
    if ( s )
    {
      src[0] = s;
      v74 = strlen(s);
      v75 = v74 + 1;
      v76 = v74;
      v266 = (void *)qvector_reserve(&v266, 0, v74 + 1, 1);
      *(_QWORD *)&v267 = v75;
      memmove(v266, src[0], v76);
      *((_BYTE *)v266 + v76) = 0;
    }
    v268 = nullptr;
    v269 = 0;
    src[0] = v255;
    if ( v255 )
    {
      v77 = strlen((const char *)src[0]);
      v78 = v77 + 1;
      v79 = v77;
      v268 = (void *)qvector_reserve(&v268, 0, v77 + 1, 1);
      *(_QWORD *)&v269 = v78;
      memmove(v268, src[0], v79);
      *((_BYTE *)v268 + v79) = 0;
    }
    v270 = nullptr;
    v271 = 0;
    src[0] = v256;
    if ( v256 )
    {
      v80 = strlen((const char *)src[0]);
      v81 = v80 + 1;
      v82 = v80;
      v270 = (void *)qvector_reserve(&v270, 0, v80 + 1, 1);
      *(_QWORD *)&v271 = v81;
      memmove(v270, src[0], v82);
      *((_BYTE *)v270 + v82) = 0;
    }
    v272 = nullptr;
    v273 = 0;
    src[0] = v257;
    if ( v257 )
    {
      v83 = strlen((const char *)src[0]);
      v84 = v83 + 1;
      v85 = v83;
      v272 = (void *)qvector_reserve(&v272, 0, v83 + 1, 1);
      *(_QWORD *)&v273 = v84;
      memmove(v272, src[0], v85);
      *((_BYTE *)v272 + v85) = 0;
    }
    v231 = v265;
    if ( (_QWORD)v265 )
    {
      v242 = (void *)qalloc_or_throw(v265);
      memcpy(v242, v264, v231);
    }
    else
    {
      v242 = nullptr;
    }
    v258 = -1;
    v259 = 0;
    v295 = 0;
    LOBYTE(v241) = v283 & 0x10;
    LOBYTE(n) = (unsigned __int8)(v283 & 0x10) >> 4;
    v260 = -1;
    tinfo_property = 0;
    s2 = (char *)v279;
    if ( (_QWORD)v279 )
    {
      v172 = v279;
      tinfo_property = qalloc_or_throw(56 * v279);
      v173 = tinfo_property;
      v174 = nullptr;
      *((_QWORD *)&v295 + 1) = v172;
      src[0] = nullptr;
      do
      {
        v177 = v278;
        a8 = 0;
        *(_QWORD *)v173 = 0;
        *(_OWORD *)(v173 + 8) = 0;
        v178 = &v174[v177];
        v179 = *((_QWORD *)v178 + 1);
        if ( v179 )
        {
          v180 = *((_QWORD *)v178 + 1);
          v243 = v174;
          v244 = v179;
          v181 = (void *)qalloc_or_throw(v180);
          v182 = v244;
          *(_QWORD *)v173 = v181;
          *(_QWORD *)(v173 + 16) = v182;
          memcpy(v181, *(const void **)v178, v182);
          v174 = (char *)v243;
          *(_QWORD *)(v173 + 8) = v244;
        }
        *(_QWORD *)(v173 + 24) = 0;
        *(_OWORD *)(v173 + 32) = 0;
        v175 = *((_QWORD *)v178 + 4);
        if ( v175 )
        {
          v183 = *((_QWORD *)v178 + 4);
          v243 = v174;
          v244 = v175;
          v184 = (void *)qalloc_or_throw(v183);
          v185 = v244;
          *(_QWORD *)(v173 + 24) = v184;
          *(_QWORD *)(v173 + 40) = v185;
          memcpy(v184, *((const void **)v178 + 3), v185);
          v174 = (char *)v243;
          *(_QWORD *)(v173 + 32) = v244;
        }
        v176 = *((_QWORD *)v178 + 6);
        ++src[0];
        v174 += 56;
        v173 += 56LL;
        *(_QWORD *)(v173 - 8) = v176;
      }
      while ( s2 != src[0] );
      *(_QWORD *)&v295 = s2;
    }
    v86 = (void *)v281;
    memset(v296, 0, sizeof(v296));
    if ( (_QWORD)v281 )
    {
      v296[0] = (void *)qalloc_or_throw(4 * v281);
      v296[2] = v86;
      memcpy(v296[0], v280, 4LL * (_QWORD)v86);
      v296[1] = v86;
    }
    v239 = &v259;
    v243 = &v258;
    LODWORD(s2) = v282;
    LODWORD(v297[0]) = v282;
    a7 = _mm_loadh_ps((const double *)&v243);
    v303 = 0;
    LOBYTE(v240) = v283;
    BYTE4(v297[0]) = v283;
    *((_QWORD *)&v297[1] + 1) = &v260;
    v304 = 0u;
    v298 = n;
    v238 = (__m128i)a7;
    *(__m128 *)((char *)v297 + 8) = a7;
    v87 = (_QWORD *)operator new(0x58u);
    src[0] = v87;
    *v87 = 0;
    *(_OWORD *)(v87 + 1) = 0;
    v244 = v295;
    if ( (_QWORD)v295 )
    {
      v189 = v244;
      v190 = qalloc_or_throw(56 * v244);
      v191 = src[0];
      v192 = 0;
      *(_QWORD *)src[0] = v190;
      v191[2] = v189;
      v193 = (const void **)tinfo_property;
      while ( 1 )
      {
        v195 = v190 + 56 * v192;
        *(_QWORD *)v195 = 0;
        *(_OWORD *)(v195 + 8) = 0;
        if ( v193[1] )
        {
          v233 = v193;
          v235 = (size_t)v193[1];
          v196 = (void *)qalloc_or_throw(v235);
          *(_QWORD *)v195 = v196;
          *(_QWORD *)(v195 + 16) = v235;
          memcpy(v196, *v233, v235);
          v193 = v233;
          *(_QWORD *)(v195 + 8) = v235;
        }
        a11 = 0;
        *(_QWORD *)(v195 + 24) = 0;
        *(_OWORD *)(v195 + 32) = 0;
        if ( v193[4] )
        {
          v234 = v193;
          v236 = (size_t)v193[4];
          v197 = (void *)qalloc_or_throw(v236);
          *(_QWORD *)(v195 + 24) = v197;
          *(_QWORD *)(v195 + 40) = v236;
          memcpy(v197, v234[3], v236);
          v193 = v234;
          *(_QWORD *)(v195 + 32) = v236;
        }
        v194 = v193[6];
        ++v192;
        v193 += 7;
        *(_QWORD *)(v195 + 48) = v194;
        if ( v244 == v192 )
          break;
        v190 = *(_QWORD *)src[0];
      }
      *((_QWORD *)src[0] + 1) = v244;
    }
    v88 = src[0];
    v89 = v296[1];
    *((_QWORD *)src[0] + 3) = 0;
    v88[2] = 0;
    if ( v89 )
    {
      v186 = (void *)qalloc_or_throw(4LL * (_QWORD)v89);
      v187 = src[0];
      v188 = v296[0];
      *((_QWORD *)src[0] + 3) = v186;
      v187[5] = v89;
      memcpy(v186, v188, 4LL * (_QWORD)v89);
      v187[4] = v89;
    }
    v90 = (char *)src[0];
    a12 = (__m128)_mm_load_si128(&v238);
    v91 = (char *)v281;
    v92 = _mm_loadl_epi64((const __m128i *)off_868DA0);
    *((_DWORD *)src[0] + 12) = (_DWORD)s2;
    v93 = (char)v240;
    *(_QWORD *)&v303 = v90;
    *(__m128 *)(v90 + 56) = a12;
    v90[52] = v93;
    *((_QWORD *)v90 + 9) = &v260;
    v90[80] = n;
    a6 = (__m128)(unsigned __int64)sub_3AAC80;
    v304 = _mm_unpacklo_epi64(v92, (__m128i)(unsigned __int64)sub_3AAC80);
    if ( v91 )
    {
      p_s1 = (void **)&v303;
      v306 = 0u;
      v240 = (void **)&v305;
      v305 = 0;
      ask_offset_dialog_t__::vfunc_10((__int64 **)&v305, (const char *)&v303, 2);
      v164 = _mm_load_si128(&v304);
      v308 = 0u;
      v306 = v164;
      v307 = 0;
      v165 = (__m128i *)operator new(0x20u);
      v165[1].m128i_i64[0] = 0;
      v166 = v165;
      v165[1].m128i_i64[1] = 0;
      *v165 = 0;
      if ( v306.m128i_i64[0] )
      {
        p_s1 = v240;
        ((void (__fastcall *)(__m128i *, void **, __int64))v306.m128i_i64[0])(v165, v240, 2);
        v166[1] = _mm_load_si128(&v306);
      }
      *(_QWORD *)&v307 = v166;
      a12 = (__m128)(unsigned __int64)sub_3AAD00;
      v308 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_868DA8), (__m128i)(unsigned __int64)sub_3AAD00);
      if ( (_QWORD)v281 )
      {
        v167 = (char *)v280;
        p_s1 = (void **)((char *)v280 + 4 * v281);
        v237 = (char *)p_s1;
        if ( v280 != p_s1 )
        {
          v168 = (void **)v280;
          v169 = 0;
          while ( 1 )
          {
            v170 = *(int *)v168;
            if ( !(_DWORD)v170 )
              break;
            v168 = (void **)((char *)v168 + 4);
            v169 += v170;
            if ( p_s1 == v168 )
            {
              if ( v169 != (_QWORD)v279 )
                break;
              v171 = (void (__fastcall *)(__m128i **, const __m128i **, int))ask_offset_dialog_t__::vfunc_11;
              src[0] = nullptr;
              v238.m128i_i64[0] = (__int64)&v251;
              do
              {
                v216 = *(_DWORD *)v167;
                v251 = *(_DWORD *)v167;
                v261 = src[0];
                if ( !v171 )
                  std::__throw_bad_function_call();
                LODWORD(n) = v216;
                p_s1 = &v261;
                s2 = v167;
                v215 = ((__int64 (__fastcall *)(__int128 *, void **, __int64))v308.m128i_i64[1])(
                         &v307,
                         &v261,
                         v238.m128i_i64[0]);
                v171 = (void (__fastcall *)(__m128i **, const __m128i **, int))v308.m128i_i64[0];
                if ( v215 )
                  break;
                src[0] = (char *)src[0] + (int)n;
                v167 = s2 + 4;
              }
              while ( v237 != s2 + 4 );
              goto LABEL_299;
            }
          }
        }
      }
      v171 = (void (__fastcall *)(__m128i **, const __m128i **, int))ask_offset_dialog_t__::vfunc_11;
LABEL_299:
      if ( v171 )
      {
        p_s1 = (void **)&v307;
        v171((__m128i **)&v307, (const __m128i **)&v307, 3);
      }
      if ( v306.m128i_i64[0] )
      {
        p_s1 = v240;
        ((void (__fastcall *)(void **, void **, __int64))v306.m128i_i64[0])(v240, v240, 3);
      }
      v97 = (__int64 (__fastcall *)(__int64 **, const char *, int))v304.m128i_i64[0];
    }
    else
    {
      n = v279;
      if ( !(_QWORD)v279 )
      {
        v97 = ask_offset_dialog_t__::vfunc_10;
LABEL_116:
        p_s1 = (void **)&v303;
        v97((__int64 **)&v303, (const char *)&v303, 3);
LABEL_117:
        v98 = &v264;
        if ( (_QWORD)v279 )
          v98 = (void **)(v278 + 56 * (v279 - 1));
        v274 = nullptr;
        v275 = 0;
        v99 = (size_t)v98[1];
        if ( v99 )
        {
          v274 = (char *)qalloc_or_throw(v98[1]);
          v275.m128_u64[1] = v99;
          p_s1 = (void **)*v98;
          memcpy(v274, *v98, v99);
          v275.m128_u64[0] = v99;
        }
        si128 = 0;
        s1 = nullptr;
        v277 = 0;
        if ( v260 != -1 )
        {
          v101 = v278 + 56 * v260;
          if ( (char **)v101 != &s1 )
          {
            v102 = *(char **)(v101 + 8);
            src[0] = v102;
            if ( v102 )
            {
              v103 = (size_t)(v102 - 1);
              if ( v102 != (_BYTE *)&dword_0 + 1 )
              {
                v214 = *(char **)v101;
                s1 = (char *)qvector_reserve(&s1, 0, src[0], 1);
                p_s1 = (void **)v214;
                *(void **)&v277 = src[0];
                memmove(s1, v214, v103);
                s1[(unsigned __int64)src[0] - 1] = 0;
              }
            }
          }
        }
        if ( !(_BYTE)v241 )
        {
          if ( !(_QWORD)v279 )
            goto LABEL_144;
          ++v259;
LABEL_135:
          v107 = v275.m128_u64[0];
          if ( v275.m128_u64[0] )
          {
            v108 = v274;
            v109 = (_BYTE *)(&qword_58 + 7);
            v110 = strrchr(v274, 95);
            if ( v110 )
            {
              v111 = (_DWORD)v110 - (_DWORD)v108;
              if ( v111 > 0 )
              {
                v289 = nullptr;
                src[0] = (void *)(v107 - 1);
                v290 = 0;
                if ( v107 - 1 < v111 )
                {
                  if ( !src[0] )
                  {
LABEL_141:
                    v115 = v289;
                    a6 = 0;
                    si128 = (__m128)_mm_loadu_si128(&v290);
                    v289 = nullptr;
                    v290 = 0;
                    v116 = v115;
                    if ( v108 )
                    {
                      *(__m128 *)src = si128;
                      v275.m128_u64[0] = 0;
                      qfree(v108, v109);
                      si128 = (__m128)_mm_load_si128((const __m128i *)src);
                      v274 = v116;
                      v275 = si128;
                      if ( v289 )
                      {
                        v290.m128i_i64[0] = 0;
                        *(double *)si128.m128_u64 = qfree(v289, v109);
                      }
                    }
                    else
                    {
                      v274 = v115;
                      v275 = si128;
                    }
                    goto LABEL_144;
                  }
                }
                else
                {
                  src[0] = (void *)v111;
                }
                v112 = (char *)src[0] + 1;
                v113 = (char *)qvector_reserve(&v289, 0, (char *)src[0] + 1, 1);
                v290.m128i_i64[0] = (__int64)v112;
                v109 = v108;
                v114 = src[0];
                v289 = v113;
                memmove(v113, v108, (size_t)src[0]);
                v114[(_QWORD)v289] = 0;
                v108 = v274;
                goto LABEL_141;
              }
            }
          }
LABEL_144:
          v117 = 1;
          if ( (v283 & 0x60) != 0x40 )
          {
            v117 = 0;
            if ( (v283 & 0x60) == 0 )
              v117 = (v282 & 0x400) != 0;
          }
          if ( (v283 & 7) != 0 )
            v118 = (unsigned int)(1 << ((v283 & 7) - 1));
          else
            v118 = (unsigned __int8)getinf(61);
          v259 = extend_sign(v259, v118, v117);
          if ( (v283 & 0x40) != 0 )
          {
            v119 = 10;
          }
          else
          {
            v119 = 16;
            if ( (v283 & 0x60) == 0 && (v282 & 0x200) == 0 )
              v119 = (v282 & 0x100) == 0 ? 16 : 8;
          }
          num2str_uint64(v309, v259, v119, 0);
          sub_16FAA0((__int64 *)&v274, (__int64)"_%s", v309);
          v120 = get_tinfo_property(*(_QWORD *)(v13 + 8), 291);
          v122 = itext(v120 == 0 ? 126 : 128, 291, v121);
          v123 = sub_3BB450(v122, v245);
          sub_3BB560(&v264);
          s2 = nullptr;
          n = v277;
          if ( (_QWORD)v277 )
          {
            s2 = (char *)qalloc_or_throw(v277);
            memcpy(s2, s1, n);
          }
          v37 = &::s1;
          if ( (_QWORD)v265 )
            v37 = (const char *)v264;
          if ( (int)sub_1697D0(
                      v123,
                      (__int64)v37,
                      (__int64)&v274,
                      (__int64)v239,
                      (__int64)v243,
                      (__int64)&s1,
                      si128,
                      a6,
                      a7,
                      a8,
                      v124,
                      v125,
                      a11,
                      a12,
                      v231) > 0 )
          {
            v127 = v275.m128_u64[0];
            a5 = 0;
            v284 = nullptr;
            v286 = 0;
            src[0] = &v284;
            v285 = 0;
            v287 = 0;
            if ( v275.m128_u64[0] > 1 )
            {
              v243 = v274;
              v284 = (char *)qvector_reserve(src[0], 0, v275.m128_u64[0], 1);
              *(_QWORD *)&v285 = v127;
              memmove(v284, v243, v127 - 1);
              v284[v127 - 1] = 0;
            }
            v128 = v258;
            v288 = v259;
            if ( !(v258 | v259 & (v259 - 1)) )
            {
              v258 = v259;
              v128 = v259;
            }
            v243 = (void *)(v13 + 8);
            v57 = set_tinfo_property4(v13 + 8, 20, src[0], v128, -1, 0);
            if ( !v57 )
            {
              if ( (unsigned __int64)v277 <= 1 || (v258 & (v258 - 1)) == 0 )
                goto LABEL_321;
              v129 = (char *)&::s1;
              if ( n )
                v129 = s2;
              v130 = s1;
              if ( !strcmp(s1, v129) )
                goto LABEL_321;
              if ( v260 != -1 )
                goto LABEL_167;
              get_tinfo_details(*(_QWORD *)(v13 + 8), 45, v245);
              v217 = (char *)&::s1;
              if ( v275.m128_u64[0] )
                v217 = v274;
              if ( !(_QWORD)v279 )
                goto LABEL_384;
              v218 = -56;
              if ( (_QWORD)v279 != -1 )
                v218 = 56 * v279;
              v219 = (void **)(v278 + v218);
              if ( (void **)v278 == v219 )
              {
LABEL_384:
                v224 = -1;
              }
              else
              {
                src[0] = v14;
                v220 = v278;
                v221 = v57;
                v222 = v217;
                n = v278;
                v241 = v219;
                do
                {
                  v223 = &::s1;
                  if ( *(_QWORD *)(v220 + 8) )
                    v223 = *(const char **)v220;
                  if ( !strcmp(v223, v222) )
                  {
                    v57 = v221;
                    v14 = (__int64 *)src[0];
                    v224 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v220 - n) >> 3);
                    goto LABEL_375;
                  }
                  v220 += 56LL;
                }
                while ( v241 != (void **)v220 );
                v57 = v221;
                v224 = -1;
                v14 = (__int64 *)src[0];
              }
LABEL_375:
              if ( (_QWORD)v281 )
              {
                v225 = (int *)v280;
                v226 = 0;
                while ( v225 != (int *)((char *)v280 + 4 * (_QWORD)v281) )
                {
                  v227 = *v225++;
                  v228 = v226 + v227;
                  if ( v224 < v228 )
                  {
                    v260 = v226;
                    break;
                  }
                  v226 = v228;
                }
              }
              v130 = s1;
              if ( (_QWORD)v277 )
LABEL_167:
                v131 = v130;
              else
                v131 = &::s1;
              v132 = set_tinfo_property4(v243, 22, v260, v131, 0, 0);
              if ( !v132 )
              {
LABEL_321:
                a5 = 0;
                v136 = (_BYTE *)(&qword_28 + 5);
                v289 = nullptr;
                memset(v291, 0, sizeof(v291));
                v292 = 0;
                v293 = 0x80;
                v290 = 0;
                if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(v13 + 8), 45, &v289) )
                  goto LABEL_352;
                v198 = (char *)&::s1;
                if ( v275.m128_u64[0] )
                  v198 = v274;
                v136 = (const char *)v290.m128i_i64[0];
                if ( !v290.m128i_i64[0] )
                  goto LABEL_352;
                v199 = -56;
                if ( v290.m128i_i64[0] != -1 )
                  v199 = 56 * v290.m128i_i64[0];
                v200 = &v289[v199];
                if ( v289 != v200 )
                {
                  LODWORD(p_tinfo_property) = v57;
                  v201 = (const char **)v289;
                  v241 = (void **)&v289;
                  v202 = v198;
                  n = (size_t)v289;
                  src[0] = v200;
                  while ( 1 )
                  {
                    v203 = &::s1;
                    if ( v201[1] )
                      v203 = *v201;
                    v136 = v202;
                    if ( !strcmp(v203, v202) )
                      break;
                    v201 += 7;
                    if ( src[0] == v201 )
                    {
                      v57 = (unsigned int)p_tinfo_property;
                      LODWORD(p_tinfo_property) = 0;
                      goto LABEL_335;
                    }
                  }
                  v204 = v201;
                  v57 = (unsigned int)p_tinfo_property;
                  v205 = (size_t)v204 - n;
                  v206 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)((__int64)v204 - n) >> 3);
                  if ( v205 == -56 )
                    goto LABEL_352;
                  v136 = (const char *)&v253;
                  LODWORD(p_tinfo_property) = (*(__int64 (__fastcall **)(_QWORD, __int64 *, void *, __int64, __int64))(**(_QWORD **)(v12 + 1000) + 104LL))(
                                                *(_QWORD *)(v12 + 1000),
                                                &v253,
                                                v243,
                                                v206,
                                                -1);
                }
                else
                {
LABEL_352:
                  LODWORD(p_tinfo_property) = 0;
                }
LABEL_335:
                if ( *(_QWORD *)v291 )
                {
                  *(_QWORD *)&v291[8] = 0;
                  *(double *)a5.m128_u64 = qfree(*(_QWORD *)v291, v136);
                }
                v207 = v289;
                if ( v289 )
                {
                  v208 = 0;
                  if ( v290.m128i_i64[0] )
                  {
                    src[0] = nullptr;
                    v209 = (void *)v290.m128i_i64[0];
                    v245 = (size_t *)v14;
                    LODWORD(n) = v57;
                    v210 = 0;
                    do
                    {
                      v211 = &v207[v210];
                      v212 = *(_QWORD *)&v207[v210 + 24];
                      if ( v212 )
                      {
                        *((_QWORD *)v211 + 4) = 0;
                        qfree(v212, v136, v208);
                      }
                      v213 = *(_QWORD *)v211;
                      if ( *(_QWORD *)v211 )
                      {
                        *((_QWORD *)v211 + 1) = 0;
                        qfree(v213, v136, v208);
                      }
                      ++src[0];
                      v210 += 56;
                      v207 = v289;
                    }
                    while ( v209 != src[0] );
                    v57 = n;
                    v14 = (__int64 *)v245;
                  }
                  v290.m128i_i64[0] = 0;
                  *(double *)a5.m128_u64 = qfree(v207, v136, v208);
                }
LABEL_181:
                if ( v286 )
                {
                  *(_QWORD *)&v287 = 0;
                  *(double *)a5.m128_u64 = qfree(v286, v136);
                }
                if ( v284 )
                {
                  *(_QWORD *)&v285 = 0;
                  *(double *)a5.m128_u64 = qfree(v284, v136);
                }
                if ( s2 )
                  *(double *)a5.m128_u64 = qfree(s2, v136);
                if ( s1 )
                {
                  *(_QWORD *)&v277 = 0;
                  *(double *)a5.m128_u64 = qfree(s1, v136);
                }
                if ( v274 )
                {
                  v275.m128_u64[0] = 0;
                  *(double *)a5.m128_u64 = qfree(v274, v136);
                }
                if ( v296[0] )
                  *(double *)a5.m128_u64 = qfree(v296[0], v136);
                v138 = tinfo_property;
                if ( tinfo_property )
                {
                  v139 = 0;
                  if ( v244 )
                  {
                    n = tinfo_property;
                    v140 = v244;
                    src[0] = (void *)tinfo_property;
                    LODWORD(s2) = v57;
                    for ( i = 0; i != v140; ++i )
                    {
                      v142 = *((_QWORD *)src[0] + 3);
                      if ( v142 )
                      {
                        *((_QWORD *)src[0] + 4) = 0;
                        qfree(v142, v136, v139);
                      }
                      v143 = *(_QWORD *)src[0];
                      if ( *(_QWORD *)src[0] )
                      {
                        *((_QWORD *)src[0] + 1) = 0;
                        qfree(v143, v136, v139);
                      }
                      src[0] = (char *)src[0] + 56;
                    }
                    v57 = (unsigned int)s2;
                    v138 = n;
                  }
                  *(double *)a5.m128_u64 = qfree(v138, v136, v139);
                }
                if ( v242 )
                  *(double *)a5.m128_u64 = qfree(v242, v136);
                if ( v272 )
                {
                  *(_QWORD *)&v273 = 0;
                  *(double *)a5.m128_u64 = qfree(v272, v136);
                }
                if ( v270 )
                {
                  *(_QWORD *)&v271 = 0;
                  *(double *)a5.m128_u64 = qfree(v270, v136);
                }
                if ( v268 )
                {
                  *(_QWORD *)&v269 = 0;
                  *(double *)a5.m128_u64 = qfree(v268, v136);
                }
                if ( v266 )
                {
                  *(_QWORD *)&v267 = 0;
                  *(double *)a5.m128_u64 = qfree(v266, v136);
                }
                if ( v264 )
                {
                  *(_QWORD *)&v265 = 0;
                  *(double *)a5.m128_u64 = qfree(v264, v136);
                }
                if ( v280 )
                {
                  *(_QWORD *)&v281 = 0;
                  *(double *)a5.m128_u64 = qfree(v280, v136);
                }
                v144 = v278;
                if ( v278 )
                {
                  v145 = v279;
                  v146 = 0;
                  if ( (_QWORD)v279 )
                  {
                    src[0] = nullptr;
                    v147 = v279;
                    n = (size_t)v14;
                    LODWORD(s2) = v57;
                    for ( j = 0; j != v147; ++j )
                    {
                      v149 = (__int64 *)((char *)src[0] + v144);
                      v150 = *(_QWORD *)((char *)src[0] + v144 + 24);
                      if ( v150 )
                      {
                        v149[4] = 0;
                        qfree(v150, v136, v145, v146);
                      }
                      v151 = *v149;
                      if ( *v149 )
                      {
                        v149[1] = 0;
                        qfree(v151, v136, v145, v146);
                      }
                      src[0] = (char *)src[0] + 56;
                      v144 = v278;
                    }
                    v57 = (unsigned int)s2;
                    v14 = (__int64 *)n;
                  }
                  *(_QWORD *)&v279 = 0;
                  *(double *)a5.m128_u64 = qfree(v144, v136, v145, v146);
                }
                v62 = "Failed to add member";
                if ( v57 )
                  return (unsigned __int8)sub_3AC490(v14, v57, (__int64)v62, a5, a6, a7, a8, a9, a10, a11, a12);
                goto LABEL_68;
              }
              v57 = v132;
            }
            v133 = &::s1;
            v261 = nullptr;
            if ( (_QWORD)v271 )
              v133 = (const char *)v270;
            v134 = (void **)v268;
            v135 = (void **)v272;
            v136 = (const char *)p_tinfo_property;
            v262 = v266;
            v263 = v268;
            if ( v268 )
              v134 = &v263;
            v289 = (char *)v272;
            if ( v272 )
              v135 = (void **)&v289;
            if ( (unsigned __int8)deserialize_tinfo(&v261, p_tinfo_property, &v262, v134, v135, v133) )
            {
              v137 = &::s1;
              v136 = (const char *)p_tinfo_property;
              if ( v232 )
                v137 = (const char *)v242;
              save_tinfo(&v261, p_tinfo_property, *(unsigned int *)(v13 + 24), v137, 5);
            }
            clear_tinfo_t(&v261);
            LODWORD(p_tinfo_property) = 0;
            goto LABEL_181;
          }
          if ( s2 )
            *(double *)si128.m128_u64 = qfree(s2, v37);
          if ( s1 )
          {
            *(_QWORD *)&v277 = 0;
            *(double *)si128.m128_u64 = qfree(s1, v37, *(double *)si128.m128_u64);
          }
          if ( v274 )
          {
            v275.m128_u64[0] = 0;
            *(double *)si128.m128_u64 = qfree(v274, v37, *(double *)si128.m128_u64);
          }
          if ( v296[0] )
            *(double *)si128.m128_u64 = qfree(v296[0], v37, *(double *)si128.m128_u64);
          v157 = tinfo_property;
          if ( tinfo_property )
          {
            v158 = 0;
            v159 = (__int64 *)tinfo_property;
            if ( v244 )
            {
              v160 = v244;
              for ( k = 0; k != v160; ++k )
              {
                v162 = v159[3];
                if ( v162 )
                {
                  v159[4] = 0;
                  *(double *)si128.m128_u64 = qfree(v162, v37, v126, v158, *(double *)si128.m128_u64);
                }
                v163 = *v159;
                if ( *v159 )
                {
                  v159[1] = 0;
                  *(double *)si128.m128_u64 = qfree(v163, v37, v126, v158, *(double *)si128.m128_u64);
                }
                v159 += 7;
              }
            }
            *(double *)si128.m128_u64 = qfree(v157, v37, v126, v158, *(double *)si128.m128_u64);
          }
          if ( v242 )
            *(double *)si128.m128_u64 = qfree(v242, v37, *(double *)si128.m128_u64);
          if ( v272 )
          {
            *(_QWORD *)&v273 = 0;
            *(double *)si128.m128_u64 = qfree(v272, v37, *(double *)si128.m128_u64);
          }
          if ( v270 )
          {
            *(_QWORD *)&v271 = 0;
            *(double *)si128.m128_u64 = qfree(v270, v37, *(double *)si128.m128_u64);
          }
          if ( v268 )
          {
            *(_QWORD *)&v269 = 0;
            *(double *)si128.m128_u64 = qfree(v268, v37, *(double *)si128.m128_u64);
          }
          if ( v266 )
          {
            *(_QWORD *)&v267 = 0;
            qfree(v266, v37, *(double *)si128.m128_u64);
          }
          result = 1;
LABEL_281:
          if ( v264 )
          {
            LODWORD(src[0]) = result;
            *(_QWORD *)&v265 = 0;
            qfree(v264, v37);
            result = LODWORD(src[0]);
          }
          goto LABEL_28;
        }
        v104 = v258;
        if ( v258 == -1 )
        {
          v156 = 1;
        }
        else
        {
          v105 = v258 & (v258 - 1);
          if ( v105 )
          {
            if ( v258 != v259 )
            {
              v106 = v258 & 1;
              if ( (v258 & 1) == 0 )
              {
                v106 = 1;
                do
                  v106 *= 2;
                while ( (v106 & v258) == 0 );
              }
              v259 += v106;
              goto LABEL_134;
            }
            do
            {
              v104 = v105;
              v105 &= v105 - 1;
            }
            while ( v105 );
          }
          v156 = 2 * v104;
        }
        v259 = v156;
        v258 = 0;
        if ( s1 )
        {
          *(_QWORD *)&v277 = 0;
          *(double *)si128.m128_u64 = qfree(s1, (const char *)p_s1);
          s1 = nullptr;
          *((_QWORD *)&v277 + 1) = 0;
        }
        v260 = -1;
LABEL_134:
        if ( !(_QWORD)v279 )
          goto LABEL_144;
        goto LABEL_135;
      }
      LODWORD(src[0]) = v279;
      v94 = ask_offset_dialog_t__::vfunc_10;
      s2 = (char *)&v252;
      do
      {
        s1 = v91;
        v284 = nullptr;
        v252 = (int)src[0];
        if ( !v94 )
          std::__throw_bad_function_call();
        p_s1 = (void **)&s1;
        v96 = ((__int64 (__fastcall *)(__int128 *, char **, char **, char *))v304.m128i_i64[1])(&v303, &s1, &v284, s2);
        v97 = (__int64 (__fastcall *)(__int64 **, const char *, int))v304.m128i_i64[0];
        v94 = (__int64 (__fastcall *)(__int64 **, const char *, int))v304.m128i_i64[0];
        if ( v96 )
          break;
        ++v91;
      }
      while ( (char *)n != v91 );
    }
    if ( !v97 )
      goto LABEL_117;
    goto LABEL_116;
  }
LABEL_28:
  if ( v280 )
  {
    LODWORD(src[0]) = result;
    *(_QWORD *)&v281 = 0;
    qfree(v280, v37);
    result = LODWORD(src[0]);
  }
  v40 = v278;
  if ( v278 )
  {
    v41 = v279;
    if ( (_QWORD)v279 )
    {
      v42 = 0;
      v43 = 0;
      v44 = result;
      do
      {
        v45 = (__int64 *)(v40 + v42);
        v46 = *(_QWORD *)(v40 + v42 + 24);
        if ( v46 )
        {
          v45[4] = 0;
          qfree(v46, v37);
        }
        v47 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v47, v37);
        }
        v40 = v278;
        v42 += 56;
        ++v43;
      }
      while ( v41 != v43 );
      LODWORD(result) = v44;
    }
    LODWORD(src[0]) = result;
    *(_QWORD *)&v279 = 0;
    qfree(v40, v37);
    return LODWORD(src[0]);
  }
  return result;
}
