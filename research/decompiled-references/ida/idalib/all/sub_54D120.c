__int64 __fastcall sub_54D120(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  const char *v18; // rax
  size_t v19; // rax
  const void *v20; // r8
  size_t v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  const char *v24; // rax
  void *v25; // rax
  unsigned __int128 v26; // kr10_16
  __int64 v27; // r14
  char tinfo_property; // al
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  const char *v36; // r9
  size_t v37; // r8
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  void (__fastcall *v41)(__m128i *, __m128i *, __int64); // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  void (__fastcall *v48)(__m128i *, __m128i *, __int64); // rax
  __int64 v49; // rax
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __int64 *v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __m128i v56; // xmm0
  __int64 v57; // rax
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  int v70; // ebx
  __int64 v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __m128i v74; // xmm0
  __int64 v75; // rsi
  _QWORD *v76; // rbx
  unsigned __int64 v77; // rax
  _QWORD *v78; // rax
  __m128i v79; // xmm0
  __m128i v80; // xmm1
  __m128i v81; // xmm0
  _QWORD *v82; // rax
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm0
  __int16 v86; // ax
  int v87; // ebx
  int v88; // edx
  __int64 v89; // rax
  __m128i v90; // xmm0
  __m128i v91; // xmm1
  __m128i v92; // xmm0
  int v93; // ebx
  __int64 v94; // rax
  __m128i v95; // xmm0
  __m128i v96; // xmm1
  __m128i v97; // xmm0
  int v98; // ebx
  __int64 v99; // rax
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  __m128i v102; // xmm0
  int v103; // eax
  __m128i v104; // xmm1
  __m128i v105; // xmm0
  void (__fastcall *v106)(__m128i *, __m128i *, __int64); // rax
  __m128i v107; // xmm1
  __m128i v108; // xmm0
  __m128i v109; // xmm1
  __m128i v110; // xmm0
  __int16 v111; // ax
  int v112; // ebx
  int v113; // edx
  __int64 v114; // rax
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __int64 *v118; // rax
  __m128i v119; // xmm1
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  _QWORD *v122; // rax
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __m128i v125; // xmm0
  __int64 v126; // rax
  __m128i v127; // xmm1
  __m128i v128; // xmm0
  __m128i v129; // xmm0
  _QWORD *v130; // rax
  __m128i v131; // xmm0
  __m128i v132; // xmm1
  __m128i v133; // xmm0
  __m128i v134; // xmm1
  __m128i v135; // xmm0
  _QWORD *v136; // rax
  __m128i v137; // xmm1
  __m128i v138; // xmm0
  __m128i v139; // xmm0
  __m128i v140; // xmm1
  __m128i v141; // xmm0
  _QWORD *v142; // rax
  __m128i v143; // xmm0
  __m128i v144; // xmm1
  __m128i v145; // xmm0
  _QWORD *v146; // rax
  __m128i v147; // xmm0
  __m128i v148; // xmm1
  __m128i v149; // xmm0
  _QWORD *v150; // rax
  __m128i v151; // xmm0
  __m128i v152; // xmm1
  __m128i v153; // xmm0
  void *v154; // rdi
  size_t v155; // rdx
  void *v156; // rdi
  size_t v157; // rdx
  __m128i v158; // xmm1
  __m128i v159; // xmm0
  __int64 v160; // rax
  void *v161; // [rsp+8h] [rbp-3E8h]
  void *v162; // [rsp+8h] [rbp-3E8h]
  const char *src; // [rsp+10h] [rbp-3E0h]
  void *srca; // [rsp+10h] [rbp-3E0h]
  _BYTE *srcb; // [rsp+10h] [rbp-3E0h]
  size_t v166; // [rsp+18h] [rbp-3D8h]
  size_t v167; // [rsp+18h] [rbp-3D8h]
  size_t v168; // [rsp+18h] [rbp-3D8h]
  size_t v169; // [rsp+18h] [rbp-3D8h]
  size_t v170; // [rsp+18h] [rbp-3D8h]
  unsigned int v171; // [rsp+24h] [rbp-3CCh]
  int v172; // [rsp+24h] [rbp-3CCh]
  int v173; // [rsp+24h] [rbp-3CCh]
  size_t n; // [rsp+28h] [rbp-3C8h]
  size_t nc; // [rsp+28h] [rbp-3C8h]
  const char *na; // [rsp+28h] [rbp-3C8h]
  const char *nb; // [rsp+28h] [rbp-3C8h]
  size_t nd; // [rsp+28h] [rbp-3C8h]
  size_t ne; // [rsp+28h] [rbp-3C8h]
  void *ptr; // [rsp+40h] [rbp-3B0h] BYREF
  unsigned __int128 v183; // [rsp+48h] [rbp-3A8h]
  __int64 v184; // [rsp+60h] [rbp-390h] BYREF
  void *v185; // [rsp+68h] [rbp-388h] BYREF
  __int128 v186; // [rsp+70h] [rbp-380h]
  void *dest; // [rsp+80h] [rbp-370h] BYREF
  unsigned __int128 v188; // [rsp+88h] [rbp-368h]
  unsigned __int64 v189; // [rsp+98h] [rbp-358h]
  int v190; // [rsp+A0h] [rbp-350h]
  char v191; // [rsp+A4h] [rbp-34Ch]
  __int64 v192; // [rsp+A8h] [rbp-348h]
  __int128 v193; // [rsp+B0h] [rbp-340h]
  __int64 v194; // [rsp+C0h] [rbp-330h]
  __int128 v195; // [rsp+C8h] [rbp-328h]
  __int64 v196; // [rsp+D8h] [rbp-318h]
  __int128 v197; // [rsp+E0h] [rbp-310h]
  __int64 v198; // [rsp+F0h] [rbp-300h]
  __int128 v199; // [rsp+F8h] [rbp-2F8h]
  __m128i si128; // [rsp+110h] [rbp-2E0h] BYREF
  __m128i v201; // [rsp+120h] [rbp-2D0h] BYREF
  __m128i v202; // [rsp+130h] [rbp-2C0h] BYREF
  __m128i v203; // [rsp+140h] [rbp-2B0h] BYREF
  __m128i v204; // [rsp+150h] [rbp-2A0h] BYREF
  __m128i v205; // [rsp+160h] [rbp-290h] BYREF
  __m128i v206; // [rsp+170h] [rbp-280h] BYREF
  __m128i v207; // [rsp+180h] [rbp-270h]
  __m128i v208; // [rsp+190h] [rbp-260h] BYREF
  __m128i v209; // [rsp+1A0h] [rbp-250h]
  __m128i v210; // [rsp+1B0h] [rbp-240h] BYREF
  __m128i v211; // [rsp+1C0h] [rbp-230h]
  __m128i v212; // [rsp+1D0h] [rbp-220h] BYREF
  __m128i v213; // [rsp+1E0h] [rbp-210h]
  __m128i v214; // [rsp+1F0h] [rbp-200h] BYREF
  __m128i v215; // [rsp+200h] [rbp-1F0h]
  __m128i v216; // [rsp+210h] [rbp-1E0h] BYREF
  __m128i v217; // [rsp+220h] [rbp-1D0h]
  __m128i v218; // [rsp+230h] [rbp-1C0h] BYREF
  __m128i v219; // [rsp+240h] [rbp-1B0h]
  __m128i v220; // [rsp+250h] [rbp-1A0h] BYREF
  __m128i v221; // [rsp+260h] [rbp-190h]
  __m128i v222; // [rsp+270h] [rbp-180h] BYREF
  __m128i v223; // [rsp+280h] [rbp-170h]
  __m128i v224; // [rsp+290h] [rbp-160h] BYREF
  __m128i v225; // [rsp+2A0h] [rbp-150h]
  __m128i v226; // [rsp+2B0h] [rbp-140h] BYREF
  __m128i v227; // [rsp+2C0h] [rbp-130h]
  __m128i v228; // [rsp+2D0h] [rbp-120h] BYREF
  __m128i v229; // [rsp+2E0h] [rbp-110h]
  __m128i v230; // [rsp+2F0h] [rbp-100h] BYREF
  __m128i v231; // [rsp+300h] [rbp-F0h]
  __m128i v232; // [rsp+310h] [rbp-E0h] BYREF
  __m128i v233; // [rsp+320h] [rbp-D0h]
  __m128i v234; // [rsp+330h] [rbp-C0h] BYREF
  __m128i v235; // [rsp+340h] [rbp-B0h]
  __m128i v236; // [rsp+350h] [rbp-A0h] BYREF
  __m128i v237; // [rsp+360h] [rbp-90h]
  __m128i v238; // [rsp+370h] [rbp-80h] BYREF
  __m128i v239; // [rsp+380h] [rbp-70h]
  __m128i v240[2]; // [rsp+390h] [rbp-60h] BYREF
  unsigned __int64 v241; // [rsp+3B8h] [rbp-38h]

  v10 = a3;
  v241 = __readfsqword(0x28u);
  v11 = *(__int64 **)(*a1 + 1824);
  switch ( a3 )
  {
    case 0u:
      return (unsigned int)sub_54CEF0(v11, a2, a4, 1u) == 0;
    case 1u:
      tinfo_property = get_tinfo_property(*a2, 2);
      if ( (tinfo_property & 0xF) == 8 || (tinfo_property & 0xFu) > 9 )
        return 0;
      if ( (_DWORD)a4 == 1 )
      {
        v30 = tinfo_property & 0xCF | 0x10;
      }
      else
      {
        v27 = 0;
        v30 = tinfo_property & 0xCF | 0x20;
        if ( (_DWORD)a4 != 2 )
          return v27;
      }
      v184 = v30;
      copy_tinfo_t(a2);
      v27 = 1;
      clear_tinfo_t(&v184);
      return v27;
    case 4u:
      return (int)sub_54C550((__int64)a1, a2, (_BYTE *)a4, a5);
    case 6u:
      v31 = *a2 & ~a4;
      *a2 = v31;
      if ( v31 > 0xFF )
      {
        v32 = sub_534260(*(_QWORD *)(*a1 + 1824), v31);
        v13 = v32;
        if ( !v32 )
          return 0;
        if ( (*(_BYTE *)(v32 + 69) & 0x10) == 0 )
        {
          v171 = 6;
          v15 = 1;
          goto LABEL_7;
        }
        return -32;
      }
      return 1;
    case 0x1Au:
      return (int)sub_54CEF0(v11, a2, a4, a7);
    default:
      v12 = sub_534260((__int64)v11, *a2);
      v13 = v12;
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 69) & 0x10) != 0 )
          return -32;
        v171 = v10;
        if ( (unsigned int)v10 > 0x1D )
        {
          if ( sub_53CE30(v12, *a1, *(_BYTE *)a2, 1) )
          {
            if ( (unsigned int)v10 <= 0x22 )
            {
              v160 = (_QWORD)&loc_2202805 << 9;
              if ( !_bittest64(&v160, v10) )
                goto LABEL_10;
            }
            else if ( (unsigned int)(v10 - 39) > 1 )
            {
              goto LABEL_10;
            }
            goto LABEL_9;
          }
        }
        else
        {
          v14 = 805344768;
          if ( _bittest64(&v14, v10) )
            v15 = ((a7 & 2) == 0) + 1;
          else
            v15 = 1;
LABEL_7:
          if ( sub_53CE30(v13, *a1, *(_BYTE *)a2, v15) )
          {
            v16 = 0x440500A00LL;
            if ( !_bittest64(&v16, (unsigned __int8)v171) && v171 - 28 > 1 )
            {
LABEL_10:
              v201 = 0u;
              si128 = 0;
              v202 = 0;
              v204 = 0;
              v203 = 0u;
              v205 = 0u;
              LODWORD(v184) = 0;
              v185 = nullptr;
              dest = nullptr;
              v189 = -1;
              v190 = 0;
              v191 = 0;
              v192 = 0;
              v194 = 0;
              v196 = 0;
              v198 = 0;
              v186 = 0;
              v188 = 0;
              v193 = 0;
              v195 = 0;
              v197 = 0;
              v199 = 0;
              v17 = *(_QWORD **)(v13 + 32);
              if ( !v17 )
              {
LABEL_21:
                switch ( (int)v10 )
                {
                  case 7:
                    v240[0].m128i_i64[0] = a4;
                    v109 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    si128 = _mm_load_si128(v240);
                    v110 = _mm_load_si128(&v201);
                    v240[0] = v109;
                    v106 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0];
                    v240[1] = v110;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E278),
                             (__m128i)(unsigned __int64)sub_532D00);
                    if ( !v110.m128i_i64[0] )
                      goto LABEL_86;
                    goto LABEL_170;
                  case 8:
                    v240[0].m128i_i64[0] = a4;
                    v107 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    si128 = _mm_load_si128(v240);
                    v108 = _mm_load_si128(&v201);
                    v240[0] = v107;
                    v106 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v108.m128i_i64[0];
                    v240[1] = v108;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E280),
                             (__m128i)(unsigned __int64)sub_5313C0);
                    if ( v108.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 9:
                    v111 = *(_WORD *)(v13 + 68);
                    v112 = 0;
                    if ( (v111 & 8) != 0 )
                      v112 = *(_DWORD *)(*(_QWORD *)(v13 + 32) + 8LL);
                    LODWORD(v184) = 1;
                    v113 = a7;
                    if ( (v111 & 0x4000) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                      v113 = a7 | 0x80000000;
                    v173 = v113;
                    v207 = 0u;
                    v206 = 0;
                    v114 = operator new(0x30u);
                    *(_DWORD *)(v114 + 8) = v112;
                    v206.m128i_i64[0] = v114;
                    v115 = _mm_load_si128(&v206);
                    v116 = _mm_load_si128(&si128);
                    *(_DWORD *)(v114 + 40) = v173;
                    si128 = v115;
                    v117 = _mm_load_si128(&v201);
                    *(_QWORD *)v114 = &v184;
                    *(_QWORD *)(v114 + 16) = a4;
                    *(_QWORD *)(v114 + 24) = a5;
                    *(_QWORD *)(v114 + 32) = a6;
                    v207 = v117;
                    v206 = v116;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E298),
                             (__m128i)(unsigned __int64)sub_531430);
                    if ( v117.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v117.m128i_i64[0])(&v206, &v206, 3);
                    goto LABEL_86;
                  case 10:
                    LODWORD(v184) = 2;
                    v98 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                      v98 = a7 | 0x80000000;
                    v209 = 0u;
                    v208 = 0;
                    v99 = operator new(0x20u);
                    v208.m128i_i64[0] = v99;
                    v100 = _mm_load_si128(&v208);
                    v101 = _mm_load_si128(&si128);
                    *(_QWORD *)v99 = &v184;
                    si128 = v100;
                    v102 = _mm_load_si128(&v201);
                    *(_QWORD *)(v99 + 8) = a4;
                    *(_QWORD *)(v99 + 16) = a5;
                    *(_DWORD *)(v99 + 24) = v98;
                    v209 = v102;
                    v208 = v101;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2A0),
                             (__m128i)(unsigned __int64)sub_531460);
                    if ( v102.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v102.m128i_i64[0])(&v208, &v208, 3);
                    goto LABEL_86;
                  case 11:
                    LODWORD(v184) = 3;
                    v93 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                      v93 = a7 | 0x80000000;
                    v211 = 0u;
                    v210 = 0;
                    v94 = operator new(0x20u);
                    v210.m128i_i64[0] = v94;
                    v95 = _mm_load_si128(&v210);
                    v96 = _mm_load_si128(&si128);
                    *(_QWORD *)v94 = &v184;
                    si128 = v95;
                    v97 = _mm_load_si128(&v201);
                    *(_QWORD *)(v94 + 8) = a4;
                    *(_QWORD *)(v94 + 16) = a5;
                    *(_DWORD *)(v94 + 24) = v93;
                    v211 = v97;
                    v210 = v96;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2A8),
                             (__m128i)(unsigned __int64)sub_531480);
                    if ( v97.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v97.m128i_i64[0])(&v210, &v210, 3);
                    goto LABEL_86;
                  case 12:
                    v86 = *(_WORD *)(v13 + 68);
                    v87 = 0;
                    if ( (v86 & 8) != 0 )
                      v87 = *(_DWORD *)(*(_QWORD *)(v13 + 32) + 8LL);
                    LODWORD(v184) = 4;
                    v88 = a7;
                    if ( (v86 & 0x4000) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                      v88 = a7 | 0x80000000;
                    v172 = v88;
                    v213 = 0u;
                    v212 = 0;
                    v89 = operator new(0x30u);
                    *(_DWORD *)(v89 + 8) = v87;
                    v212.m128i_i64[0] = v89;
                    v90 = _mm_load_si128(&v212);
                    v91 = _mm_load_si128(&si128);
                    *(_DWORD *)(v89 + 40) = v172;
                    si128 = v90;
                    v92 = _mm_load_si128(&v201);
                    *(_QWORD *)v89 = &v184;
                    *(_QWORD *)(v89 + 16) = a4;
                    *(_QWORD *)(v89 + 24) = a5;
                    *(_QWORD *)(v89 + 32) = a6;
                    v213 = v92;
                    v212 = v91;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2B0),
                             (__m128i)(unsigned __int64)sub_5314A0);
                    if ( v92.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v92.m128i_i64[0])(&v212, &v212, 3);
                    goto LABEL_86;
                  case 13:
                    LODWORD(v184) = 4;
                    v215 = 0u;
                    v214 = 0;
                    v82 = (_QWORD *)operator new(0x20u);
                    v214.m128i_i64[0] = (__int64)v82;
                    v83 = _mm_load_si128(&v214);
                    *v82 = &v184;
                    v84 = _mm_load_si128(&si128);
                    si128 = v83;
                    v85 = _mm_load_si128(&v201);
                    v82[1] = a4;
                    v82[2] = a5;
                    v82[3] = a6;
                    v215 = v85;
                    v214 = v84;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2B8),
                             (__m128i)(unsigned __int64)sub_544F50);
                    if ( v85.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v85.m128i_i64[0])(&v214, &v214, 3);
                    goto LABEL_86;
                  case 14:
                    LODWORD(v184) = 4;
                    v219 = 0u;
                    v218 = 0;
                    v78 = (_QWORD *)operator new(0x18u);
                    v218.m128i_i64[0] = (__int64)v78;
                    v79 = _mm_load_si128(&v218);
                    v80 = _mm_load_si128(&si128);
                    *v78 = &v184;
                    si128 = v79;
                    v81 = _mm_load_si128(&v201);
                    v78[1] = a4;
                    v78[2] = a5;
                    v219 = v81;
                    v218 = v80;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2C8),
                             (__m128i)(unsigned __int64)sub_544F30);
                    if ( v81.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v81.m128i_i64[0])(&v218, &v218, 3);
                    goto LABEL_86;
                  case 15:
                    LODWORD(v184) = 5;
                    v70 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                      v70 = a7 | 0x80000000;
                    v221 = 0u;
                    v220 = 0;
                    v71 = operator new(0x20u);
                    v220.m128i_i64[0] = v71;
                    v72 = _mm_load_si128(&v220);
                    v73 = _mm_load_si128(&si128);
                    *(_QWORD *)v71 = &v184;
                    si128 = v72;
                    v74 = _mm_load_si128(&v201);
                    *(_QWORD *)(v71 + 8) = a4;
                    *(_QWORD *)(v71 + 16) = a5;
                    *(_DWORD *)(v71 + 24) = v70;
                    v221 = v74;
                    v220 = v73;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2D0),
                             (__m128i)(unsigned __int64)sub_5314D0);
                    if ( v74.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v74.m128i_i64[0])(&v220, &v220, 3);
                    goto LABEL_86;
                  case 16:
                    v240[0].m128i_i64[0] = a4;
                    v68 = _mm_load_si128(&v202);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    v202 = _mm_load_si128(v240);
                    v69 = _mm_load_si128(&v203);
                    v240[0] = v68;
                    v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v69.m128i_i64[0];
                    v240[1] = v69;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2E0),
                             (__m128i)(unsigned __int64)sub_5316C0);
                    if ( v69.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 17:
                    v240[0].m128i_i64[0] = a4;
                    v66 = _mm_load_si128(&v202);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    v202 = _mm_load_si128(v240);
                    v67 = _mm_load_si128(&v203);
                    v240[0] = v66;
                    v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v67.m128i_i64[0];
                    v240[1] = v67;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2E8),
                             (__m128i)(unsigned __int64)sub_531FD0);
                    if ( v67.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 18:
                    v240[0].m128i_i64[0] = a4;
                    v64 = _mm_load_si128(&v202);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    v202 = _mm_load_si128(v240);
                    v65 = _mm_load_si128(&v203);
                    v240[0] = v64;
                    v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v65.m128i_i64[0];
                    v240[1] = v65;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2F0),
                             (__m128i)(unsigned __int64)sub_5314F0);
                    if ( v65.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 19:
                    v240[0].m128i_i64[0] = a4;
                    v140 = _mm_load_si128(&v202);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    v202 = _mm_load_si128(v240);
                    v141 = _mm_load_si128(&v203);
                    v240[0] = v140;
                    v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v141.m128i_i64[0];
                    v240[1] = v141;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2F8),
                             (__m128i)(unsigned __int64)sub_531500);
                    if ( v141.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 20:
                    v223 = 0u;
                    v222 = 0;
                    v136 = (_QWORD *)operator new(0x28u);
                    v137 = _mm_load_si128(&v202);
                    v222.m128i_i64[0] = (__int64)v136;
                    v138 = _mm_load_si128(&v222);
                    *v136 = &v184;
                    v202 = v138;
                    v139 = _mm_load_si128(&v203);
                    v136[3] = a6;
                    v136[1] = a4;
                    v136[2] = a5;
                    v136[4] = a7;
                    v223 = v139;
                    v222 = v137;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E308),
                             (__m128i)(unsigned __int64)sub_531510);
                    if ( v139.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v139.m128i_i64[0])(&v222, &v222, 3);
                    goto LABEL_64;
                  case 21:
                    v225 = 0u;
                    v224 = 0;
                    v142 = (_QWORD *)operator new(0x18u);
                    v224.m128i_i64[0] = (__int64)v142;
                    v143 = _mm_load_si128(&v224);
                    v144 = _mm_load_si128(&v202);
                    *v142 = &v184;
                    v202 = v143;
                    v145 = _mm_load_si128(&v203);
                    v142[1] = a4;
                    v142[2] = a5;
                    v225 = v145;
                    v224 = v144;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E310),
                             (__m128i)(unsigned __int64)sub_531540);
                    if ( v145.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v145.m128i_i64[0])(&v224, &v224, 3);
                    goto LABEL_64;
                  case 22:
                    v227 = 0u;
                    v226 = 0;
                    v122 = (_QWORD *)operator new(0x20u);
                    v226.m128i_i64[0] = (__int64)v122;
                    v123 = _mm_load_si128(&v226);
                    *v122 = &v184;
                    v124 = _mm_load_si128(&v202);
                    v202 = v123;
                    v125 = _mm_load_si128(&v203);
                    v122[1] = a4;
                    v122[2] = a5;
                    v122[3] = a7;
                    v227 = v125;
                    v226 = v124;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E318),
                             (__m128i)(unsigned __int64)sub_531560);
                    if ( v125.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v125.m128i_i64[0])(&v226, &v226, 3);
                    goto LABEL_64;
                  case 23:
                    v229 = 0u;
                    v228 = 0;
                    v150 = (_QWORD *)operator new(0x18u);
                    v228.m128i_i64[0] = (__int64)v150;
                    v151 = _mm_load_si128(&v228);
                    v152 = _mm_load_si128(&v202);
                    *v150 = &v184;
                    v202 = v151;
                    v153 = _mm_load_si128(&v203);
                    v150[1] = a4;
                    v150[2] = a5;
                    v229 = v153;
                    v228 = v152;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E320),
                             (__m128i)(unsigned __int64)sub_531580);
                    if ( v153.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v153.m128i_i64[0])(&v228, &v228, 3);
                    goto LABEL_64;
                  case 24:
                    v231 = 0u;
                    v230 = 0;
                    v130 = (_QWORD *)operator new(0x20u);
                    v230.m128i_i64[0] = (__int64)v130;
                    v131 = _mm_load_si128(&v230);
                    *v130 = &v184;
                    v132 = _mm_load_si128(&v202);
                    v202 = v131;
                    v133 = _mm_load_si128(&v203);
                    v130[1] = a4;
                    v130[2] = a5;
                    v130[3] = a6;
                    v231 = v133;
                    v230 = v132;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E328),
                             (__m128i)(unsigned __int64)sub_5315A0);
                    if ( v133.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v133.m128i_i64[0])(&v230, &v230, 3);
                    goto LABEL_64;
                  case 27:
                    LODWORD(v184) = 4;
                    v217 = 0u;
                    v216 = 0;
                    v146 = (_QWORD *)operator new(0x18u);
                    v216.m128i_i64[0] = (__int64)v146;
                    v147 = _mm_load_si128(&v216);
                    v148 = _mm_load_si128(&si128);
                    *v146 = &v184;
                    si128 = v147;
                    v149 = _mm_load_si128(&v201);
                    v146[1] = a4;
                    v146[2] = a5;
                    v217 = v149;
                    v216 = v148;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E2C0),
                             (__m128i)(unsigned __int64)sub_5452E0);
                    if ( v149.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v149.m128i_i64[0])(&v216, &v216, 3);
                    goto LABEL_86;
                  case 28:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0xD )
                      goto LABEL_47;
                    v103 = 0;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 )
                      v103 = (*(_QWORD *)(v13 + 16) != -1) << 31;
                    v240[0].m128i_i32[2] = v103;
                    v104 = _mm_load_si128(&si128);
                    v240[0].m128i_i64[0] = a4;
                    si128 = _mm_load_si128(v240);
                    v105 = _mm_load_si128(&v201);
                    v240[0] = v104;
                    v106 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v105.m128i_i64[0];
                    v240[1] = v105;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E288),
                             (__m128i)(unsigned __int64)sub_532520);
                    if ( v105.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 29:
                    v240[0].m128i_i64[0] = a4;
                    v134 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    si128 = _mm_load_si128(v240);
                    v135 = _mm_load_si128(&v201);
                    v240[0] = v134;
                    v106 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v135.m128i_i64[0];
                    v240[1] = v135;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E290),
                             (__m128i)(unsigned __int64)sub_532910);
                    if ( v135.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 30:
                    v233 = 0u;
                    v232 = 0;
                    v118 = (__int64 *)operator new(0x18u);
                    v119 = _mm_load_si128(&v204);
                    v232.m128i_i64[0] = (__int64)v118;
                    v120 = _mm_load_si128(&v232);
                    *v118 = a4;
                    v118[1] = a5;
                    v204 = v120;
                    v121 = _mm_load_si128(&v205);
                    v118[2] = a7;
                    v233 = v121;
                    v232 = v119;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E330),
                             (__m128i)(unsigned __int64)sub_5315C0);
                    if ( v121.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v121.m128i_i64[0])(&v232, &v232, 3);
                    goto LABEL_57;
                  case 31:
                    v235 = 0u;
                    v234 = 0;
                    v126 = operator new(0x18u);
                    v127 = _mm_load_si128(&v204);
                    *(_QWORD *)v126 = a4;
                    v234.m128i_i64[0] = v126;
                    v128 = _mm_load_si128(&v234);
                    *(_QWORD *)(v126 + 8) = a5;
                    v204 = v128;
                    v129 = _mm_load_si128(&v205);
                    *(_DWORD *)(v126 + 16) = a7;
                    v235 = v129;
                    v234 = v127;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E338),
                             (__m128i)(unsigned __int64)sub_5315E0);
                    if ( v129.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v129.m128i_i64[0])(&v234, &v234, 3);
                    goto LABEL_57;
                  case 32:
                    v240[0].m128i_i64[0] = a4;
                    v61 = _mm_load_si128(&v204);
                    v240[0].m128i_i32[2] = a7;
                    v62 = _mm_load_si128(v240);
                    v240[0] = v61;
                    v204 = v62;
                    v63 = _mm_load_si128(&v205);
                    v41 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v63.m128i_i64[0];
                    v240[1] = v63;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E340),
                             (__m128i)(unsigned __int64)sub_531600);
                    if ( v63.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 33:
                    v237 = 0u;
                    v236 = 0;
                    v57 = operator new(0x18u);
                    v58 = _mm_load_si128(&v204);
                    *(_QWORD *)v57 = a4;
                    v236.m128i_i64[0] = v57;
                    v59 = _mm_load_si128(&v236);
                    *(_QWORD *)(v57 + 8) = a5;
                    v204 = v59;
                    v60 = _mm_load_si128(&v205);
                    *(_DWORD *)(v57 + 16) = a7;
                    v237 = v60;
                    v236 = v58;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B2E348),
                             (__m128i)(unsigned __int64)sub_531620);
                    if ( v60.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v60.m128i_i64[0])(&v236, &v236, 3);
                    goto LABEL_57;
                  case 34:
                    v239 = 0u;
                    v238 = 0;
                    v53 = (__int64 *)operator new(0x18u);
                    v238.m128i_i64[0] = (__int64)v53;
                    v54 = _mm_load_si128(&v238);
                    v55 = _mm_load_si128(&v204);
                    *v53 = a4;
                    v204 = v54;
                    v56 = _mm_load_si128(&v205);
                    v53[1] = a5;
                    v53[2] = a7;
                    v239 = v56;
                    v238 = v55;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E350),
                             (__m128i)(unsigned __int64)sub_531640);
                    if ( v56.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v56.m128i_i64[0])(&v238, &v238, 3);
                    goto LABEL_57;
                  case 35:
                    v240[0].m128i_i64[0] = a4;
                    v50 = _mm_load_si128(&v204);
                    *(__m128i *)((char *)v240 + 8) = 0;
                    v51 = _mm_load_si128(v240);
                    v240[0] = v50;
                    v204 = v51;
                    v52 = _mm_load_si128(&v205);
                    v41 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0];
                    v240[1] = v52;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E358),
                             (__m128i)(unsigned __int64)sub_5313E0);
                    if ( v52.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 36:
                    v240[0].m128i_i64[0] = a4;
                    v46 = _mm_load_si128(&v202);
                    v240[0].m128i_i64[1] = a5;
                    v202 = _mm_load_si128(v240);
                    v47 = _mm_load_si128(&v203);
                    v240[0] = v46;
                    v48 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0];
                    v240[1] = v47;
                    v203 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E300),
                             (__m128i)(unsigned __int64)sub_532A30);
                    if ( v47.m128i_i64[0] )
LABEL_63:
                      v48(v240, v240, 3);
LABEL_64:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0x2D )
                      goto LABEL_47;
                    v49 = sub_54C8A0(v13, *a1, 0x2Au, a2, (unsigned __int64)&v202, a7, 0, (__int64)&v184);
                    goto LABEL_66;
                  case 37:
                    memset(v240, 0, sizeof(v240));
                    v42 = operator new(0x18u);
                    v240[0].m128i_i64[0] = v42;
                    v43 = _mm_load_si128(v240);
                    v44 = _mm_load_si128(&v204);
                    *(_QWORD *)v42 = a4;
                    v204 = v43;
                    v45 = _mm_load_si128(&v205);
                    *(_QWORD *)(v42 + 8) = a5;
                    *(_DWORD *)(v42 + 16) = a7;
                    v41 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128i_i64[0];
                    v240[1] = v45;
                    v240[0] = v44;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E360),
                             (__m128i)(unsigned __int64)sub_531660);
                    if ( v45.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 38:
                    v240[0].m128i_i64[0] = a4;
                    v38 = _mm_load_si128(&v204);
                    v240[0].m128i_i32[2] = a7;
                    v39 = _mm_load_si128(v240);
                    v240[0] = v38;
                    v204 = v39;
                    v40 = _mm_load_si128(&v205);
                    v41 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128i_i64[0];
                    v240[1] = v40;
                    v205 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E368),
                             (__m128i)(unsigned __int64)sub_531680);
                    if ( v40.m128i_i64[0] )
LABEL_56:
                      v41(v240, v240, 3);
LABEL_57:
                    if ( (*(_BYTE *)(v13 + 70) & 0xF) != 0xC )
                      goto LABEL_47;
                    v27 = sub_54C8A0(v13, *a1, 0x2Bu, a2, (unsigned __int64)&v204, a7, 0, 0);
                    sub_542CD0(&v184);
                    break;
                  case 39:
                  case 40:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0xD
                      || (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_QWORD *)(v13 + 16) != -1 )
                    {
                      goto LABEL_47;
                    }
                    v240[0].m128i_i32[2] = v10;
                    v158 = _mm_load_si128(&si128);
                    v240[0].m128i_i64[0] = a4;
                    si128 = _mm_load_si128(v240);
                    v159 = _mm_load_si128(&v201);
                    v240[0] = v158;
                    v106 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v159.m128i_i64[0];
                    v240[1] = v159;
                    v201 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B2E2D8),
                             (__m128i)(unsigned __int64)sub_5329E0);
                    if ( v159.m128i_i64[0] )
LABEL_170:
                      v106(v240, v240, 3);
LABEL_86:
                    if ( (*(_BYTE *)(v13 + 70) & 0x2F) == 0xD )
                    {
                      v190 = *(_DWORD *)(*(_QWORD *)v13 + 44LL);
                      v191 = *(_BYTE *)(*(_QWORD *)v13 + 51LL);
                      if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 )
                      {
                        v75 = *(_QWORD *)(v13 + 16);
                        if ( v75 != -1 )
                        {
                          v189 = sub_3BDE50(*(_QWORD **)(*a1 + 1672), v75);
                          v76 = *(_QWORD **)(*a1 + 1672);
                          v77 = sub_3BDE50(v76, *(_QWORD *)(v13 + 16));
                          sub_5BC010(v76, &dest, v77);
                        }
                      }
                      v49 = sub_54C8A0(v13, *a1, 0x29u, a2, (unsigned __int64)&si128, a7, 0, (__int64)&v184);
LABEL_66:
                      v27 = v49;
                    }
                    else
                    {
LABEL_47:
                      v27 = -5;
                    }
                    sub_542CD0(&v184);
                    break;
                  default:
                    v27 = sub_54C8A0(v13, *a1, v171, a2, a4, a5, a6, 0);
                    sub_542CD0(&v184);
                    break;
                }
                if ( v205.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v205.m128i_i64[0])(&v204, &v204, 3);
                if ( v203.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v203.m128i_i64[0])(&v202, &v202, 3);
                if ( v201.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v201.m128i_i64[0])(&si128, &si128, 3);
                return v27;
              }
              if ( (*(_BYTE *)(v13 + 68) & 8) == 0 )
              {
                if ( v17[1] )
                {
                  v166 = *(_QWORD *)(v13 + 32);
                  na = (const char *)v17[1];
                  v34 = strlen(na);
                  v17 = (_QWORD *)v166;
                  if ( v34 )
                  {
                    srcb = (_BYTE *)v34;
                    v168 = v34 + 1;
                    v185 = (void *)qvector_reserve(&v185, 0, v34 + 1, 1);
                    *(_QWORD *)&v186 = v168;
                    memmove(v185, na, (size_t)srcb);
                    srcb[(_QWORD)v185] = 0;
                    v17 = *(_QWORD **)(v13 + 32);
                  }
                }
                if ( v17[2] && (nb = (const char *)v17[2], v35 = strlen(nb), v36 = nb, (v37 = v35) != 0) )
                {
                  v154 = dest;
                  v155 = v35 + 1;
                  if ( *((_QWORD *)&v188 + 1) < v35 + 1 )
                  {
                    v161 = (void *)v35;
                    v169 = v35 + 1;
                    dest = (void *)qvector_reserve(&dest, dest, v155, 1);
                    v37 = (size_t)v161;
                    v154 = dest;
                    v36 = nb;
                    v155 = v169;
                  }
                  *(_QWORD *)&v188 = v155;
                  nd = v37;
                  memmove(v154, v36, v37);
                  *((_BYTE *)dest + nd) = 0;
                }
                else
                {
                  *(_QWORD *)&v188 = 0;
                }
                goto LABEL_21;
              }
              v18 = (const char *)sub_64DFD0(*(_QWORD *)(*a1 + 1672), *v17, *((unsigned int *)v17 + 2), 0);
              if ( v18 && (n = (size_t)v18, v19 = strlen(v18), v20 = (const void *)n, (v21 = v19) != 0) )
              {
                v156 = v185;
                v157 = v19 + 1;
                if ( *((_QWORD *)&v186 + 1) < v19 + 1 )
                {
                  v162 = (void *)v19;
                  v170 = v19 + 1;
                  v185 = (void *)qvector_reserve(&v185, v185, v157, 1);
                  v21 = (size_t)v162;
                  v156 = v185;
                  v20 = (const void *)n;
                  v157 = v170;
                }
                *(_QWORD *)&v186 = v157;
                ne = v21;
                memmove(v156, v20, v21);
                *((_BYTE *)v185 + ne) = 0;
              }
              else
              {
                *(_QWORD *)&v186 = 0;
              }
              v22 = *(_QWORD *)(v13 + 32);
              v23 = *(unsigned int *)(v22 + 24);
              if ( (_DWORD)v23 )
              {
                v24 = (const char *)sub_64DFD0(*(_QWORD *)(*a1 + 1672), *(_QWORD *)v22, v23, 0);
                ptr = nullptr;
                v183 = 0;
                if ( v24 )
                {
                  src = v24;
                  nc = strlen(v24);
                  ptr = (void *)qvector_reserve(&ptr, 0, nc + 1, 1);
                  *(_QWORD *)&v183 = nc + 1;
                  memmove(ptr, src, nc);
                  *((_BYTE *)ptr + nc) = 0;
                  v25 = ptr;
                  v26 = v183;
                  goto LABEL_18;
                }
              }
              else
              {
                ptr = nullptr;
                v183 = 0;
                if ( (_QWORD)v186 )
                {
                  v167 = v186;
                  ptr = (void *)qalloc_or_throw(v186);
                  memcpy(ptr, v185, v167);
                  v25 = ptr;
                  v26 = __PAIR128__(v167, v167);
LABEL_18:
                  ptr = nullptr;
                  v183 = 0;
                  if ( dest )
                  {
                    srca = v25;
                    *(_QWORD *)&v188 = 0;
                    qfree(dest);
                    dest = srca;
                    v188 = v26;
                    if ( ptr )
                    {
                      *(_QWORD *)&v183 = 0;
                      qfree(ptr);
                    }
                  }
                  else
                  {
                    dest = v25;
                    v188 = v26;
                  }
                  goto LABEL_21;
                }
              }
              v25 = nullptr;
              v26 = 0u;
              goto LABEL_18;
            }
LABEL_9:
            a7 = (unsigned int)a7 & 0xFFFFFFFE;
            goto LABEL_10;
          }
        }
        return -5;
      }
      if ( (unsigned int)v10 > 0x28 )
        return 0;
      v33 = 0x1FFF9FFFFA0LL;
      v27 = -5;
      if ( !_bittest64(&v33, v10) )
        return 0;
      return v27;
  }
}
