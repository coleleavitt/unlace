__int64 __fastcall sub_534090(
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
  const char **v17; // rcx
  const char *v18; // rsi
  const char *v19; // rax
  __int64 v20; // rcx
  const char *v21; // r8
  size_t v22; // r9
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rax
  void *v27; // rax
  unsigned __int128 v28; // kr10_16
  __int64 v29; // r14
  char tinfo_property; // al
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  const char *v38; // r9
  size_t v39; // r8
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  void (__fastcall *v43)(__m128i *, __m128i *, __int64); // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  void (__fastcall *v50)(__m128i *, __m128i *, __int64); // rax
  __int64 v51; // rax
  __m128i v52; // xmm1
  __m128i v53; // xmm0
  __m128i v54; // xmm0
  _QWORD *v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // rax
  __m128i v60; // xmm1
  __m128i v61; // xmm0
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  __m128i v71; // xmm0
  int v72; // ebx
  __int64 v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __m128i v76; // xmm0
  int v77; // esi
  _QWORD *v78; // rbx
  unsigned int v79; // eax
  _QWORD *v80; // rax
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  _QWORD *v84; // rax
  __m128i v85; // xmm0
  __m128i v86; // xmm1
  __m128i v87; // xmm0
  __int16 v88; // ax
  int v89; // edx
  int v90; // ebx
  __int64 v91; // rax
  __m128i v92; // xmm0
  __m128i v93; // xmm1
  __m128i v94; // xmm0
  int v95; // ebx
  __int64 v96; // rax
  __m128i v97; // xmm0
  __m128i v98; // xmm1
  __m128i v99; // xmm0
  int v100; // ebx
  __int64 v101; // rax
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __m128i v104; // xmm0
  int v105; // eax
  __m128i v106; // xmm1
  __m128i v107; // xmm0
  void (__fastcall *v108)(__m128i *, __m128i *, __int64); // rax
  __m128i v109; // xmm1
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __m128i v112; // xmm0
  __int16 v113; // ax
  int v114; // edx
  int v115; // ebx
  __int64 v116; // rax
  __m128i v117; // xmm0
  __m128i v118; // xmm1
  __m128i v119; // xmm0
  _QWORD *v120; // rax
  __m128i v121; // xmm1
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  _QWORD *v124; // rax
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i v127; // xmm0
  __int64 v128; // rax
  __m128i v129; // xmm1
  __m128i v130; // xmm0
  __m128i v131; // xmm0
  _QWORD *v132; // rax
  __m128i v133; // xmm0
  __m128i v134; // xmm1
  __m128i v135; // xmm0
  __m128i v136; // xmm1
  __m128i v137; // xmm0
  _QWORD *v138; // rax
  __m128i v139; // xmm1
  __m128i v140; // xmm0
  __m128i v141; // xmm0
  __m128i v142; // xmm1
  __m128i v143; // xmm0
  _QWORD *v144; // rax
  __m128i v145; // xmm0
  __m128i v146; // xmm1
  __m128i v147; // xmm0
  _QWORD *v148; // rax
  __m128i v149; // xmm0
  __m128i v150; // xmm1
  __m128i v151; // xmm0
  _QWORD *v152; // rax
  __m128i v153; // xmm0
  __m128i v154; // xmm1
  __m128i v155; // xmm0
  void *v156; // rdi
  size_t v157; // rdx
  void *v158; // rdi
  size_t v159; // rdx
  __m128i v160; // xmm1
  __m128i v161; // xmm0
  __int64 v162; // rax
  void *v163; // [rsp+8h] [rbp-3E8h]
  void *v164; // [rsp+8h] [rbp-3E8h]
  const char *src; // [rsp+10h] [rbp-3E0h]
  void *srca; // [rsp+10h] [rbp-3E0h]
  _BYTE *srcb; // [rsp+10h] [rbp-3E0h]
  size_t v168; // [rsp+18h] [rbp-3D8h]
  size_t v169; // [rsp+18h] [rbp-3D8h]
  size_t v170; // [rsp+18h] [rbp-3D8h]
  size_t v171; // [rsp+18h] [rbp-3D8h]
  size_t v172; // [rsp+18h] [rbp-3D8h]
  unsigned int v173; // [rsp+24h] [rbp-3CCh]
  int v174; // [rsp+24h] [rbp-3CCh]
  int v175; // [rsp+24h] [rbp-3CCh]
  size_t n; // [rsp+28h] [rbp-3C8h]
  size_t nc; // [rsp+28h] [rbp-3C8h]
  const char *na; // [rsp+28h] [rbp-3C8h]
  const char *nb; // [rsp+28h] [rbp-3C8h]
  size_t nd; // [rsp+28h] [rbp-3C8h]
  size_t ne; // [rsp+28h] [rbp-3C8h]
  void *ptr; // [rsp+40h] [rbp-3B0h] BYREF
  unsigned __int128 v185; // [rsp+48h] [rbp-3A8h]
  __int64 v186; // [rsp+60h] [rbp-390h] BYREF
  void *v187; // [rsp+68h] [rbp-388h] BYREF
  __int128 v188; // [rsp+70h] [rbp-380h]
  void *dest; // [rsp+80h] [rbp-370h] BYREF
  unsigned __int128 v190; // [rsp+88h] [rbp-368h]
  __int64 v191; // [rsp+98h] [rbp-358h]
  char v192; // [rsp+A0h] [rbp-350h]
  __int64 v193; // [rsp+A8h] [rbp-348h]
  __int128 v194; // [rsp+B0h] [rbp-340h]
  __int64 v195; // [rsp+C0h] [rbp-330h]
  __int128 v196; // [rsp+C8h] [rbp-328h]
  __int64 v197; // [rsp+D8h] [rbp-318h]
  __int128 v198; // [rsp+E0h] [rbp-310h]
  __int64 v199; // [rsp+F0h] [rbp-300h]
  __int128 v200; // [rsp+F8h] [rbp-2F8h]
  __m128i si128; // [rsp+110h] [rbp-2E0h] BYREF
  __m128i v202; // [rsp+120h] [rbp-2D0h] BYREF
  __m128i v203; // [rsp+130h] [rbp-2C0h] BYREF
  __m128i v204; // [rsp+140h] [rbp-2B0h] BYREF
  __m128i v205; // [rsp+150h] [rbp-2A0h] BYREF
  __m128i v206; // [rsp+160h] [rbp-290h] BYREF
  __m128i v207; // [rsp+170h] [rbp-280h] BYREF
  __m128i v208; // [rsp+180h] [rbp-270h]
  __m128i v209; // [rsp+190h] [rbp-260h] BYREF
  __m128i v210; // [rsp+1A0h] [rbp-250h]
  __m128i v211; // [rsp+1B0h] [rbp-240h] BYREF
  __m128i v212; // [rsp+1C0h] [rbp-230h]
  __m128i v213; // [rsp+1D0h] [rbp-220h] BYREF
  __m128i v214; // [rsp+1E0h] [rbp-210h]
  __m128i v215; // [rsp+1F0h] [rbp-200h] BYREF
  __m128i v216; // [rsp+200h] [rbp-1F0h]
  __m128i v217; // [rsp+210h] [rbp-1E0h] BYREF
  __m128i v218; // [rsp+220h] [rbp-1D0h]
  __m128i v219; // [rsp+230h] [rbp-1C0h] BYREF
  __m128i v220; // [rsp+240h] [rbp-1B0h]
  __m128i v221; // [rsp+250h] [rbp-1A0h] BYREF
  __m128i v222; // [rsp+260h] [rbp-190h]
  __m128i v223; // [rsp+270h] [rbp-180h] BYREF
  __m128i v224; // [rsp+280h] [rbp-170h]
  __m128i v225; // [rsp+290h] [rbp-160h] BYREF
  __m128i v226; // [rsp+2A0h] [rbp-150h]
  __m128i v227; // [rsp+2B0h] [rbp-140h] BYREF
  __m128i v228; // [rsp+2C0h] [rbp-130h]
  __m128i v229; // [rsp+2D0h] [rbp-120h] BYREF
  __m128i v230; // [rsp+2E0h] [rbp-110h]
  __m128i v231; // [rsp+2F0h] [rbp-100h] BYREF
  __m128i v232; // [rsp+300h] [rbp-F0h]
  __m128i v233; // [rsp+310h] [rbp-E0h] BYREF
  __m128i v234; // [rsp+320h] [rbp-D0h]
  __m128i v235; // [rsp+330h] [rbp-C0h] BYREF
  __m128i v236; // [rsp+340h] [rbp-B0h]
  __m128i v237; // [rsp+350h] [rbp-A0h] BYREF
  __m128i v238; // [rsp+360h] [rbp-90h]
  __m128i v239; // [rsp+370h] [rbp-80h] BYREF
  __m128i v240; // [rsp+380h] [rbp-70h]
  __m128i v241[2]; // [rsp+390h] [rbp-60h] BYREF
  unsigned __int64 v242; // [rsp+3B8h] [rbp-38h]

  v10 = a3;
  v242 = __readfsqword(0x28u);
  v11 = *(__int64 **)(*a1 + 1632);
  switch ( a3 )
  {
    case 0u:
      return (unsigned int)sub_533E60(v11, a2, a4, 1u) == 0;
    case 1u:
      tinfo_property = get_tinfo_property(*a2, 2);
      if ( (tinfo_property & 0xF) == 8 || (tinfo_property & 0xFu) > 9 )
        return 0;
      if ( (_DWORD)a4 == 1 )
      {
        v32 = tinfo_property & 0xCF | 0x10;
      }
      else
      {
        v29 = 0;
        v32 = tinfo_property & 0xCF | 0x20;
        if ( (_DWORD)a4 != 2 )
          return v29;
      }
      v186 = v32;
      copy_tinfo_t(a2);
      v29 = 1;
      clear_tinfo_t(&v186);
      return v29;
    case 4u:
      return (int)sub_5334C0((__int64)a1, a2, (_BYTE *)a4, a5);
    case 6u:
      v33 = *a2 & ~a4;
      *a2 = v33;
      if ( v33 > 0xFF )
      {
        v34 = sub_51B8E0(*(_QWORD *)(*a1 + 1632), v33);
        v13 = v34;
        if ( !v34 )
          return 0;
        if ( (*(_BYTE *)(v34 + 69) & 0x10) == 0 )
        {
          v173 = 6;
          v15 = 1;
          goto LABEL_7;
        }
        return -32;
      }
      return 1;
    case 0x1Au:
      return (int)sub_533E60(v11, a2, a4, a7);
    default:
      v12 = sub_51B8E0((__int64)v11, *a2);
      v13 = v12;
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 69) & 0x10) != 0 )
          return -32;
        v173 = v10;
        if ( (unsigned int)v10 > 0x1D )
        {
          if ( sub_524160(v12, *a1, *(_BYTE *)a2, 1) )
          {
            if ( (unsigned int)v10 <= 0x22 )
            {
              v162 = (_QWORD)&loc_2202805 << 9;
              if ( !_bittest64(&v162, v10) )
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
          if ( sub_524160(v13, *a1, *(_BYTE *)a2, v15) )
          {
            v16 = 0x440500A00LL;
            if ( !_bittest64(&v16, (unsigned __int8)v173) && v173 - 28 > 1 )
            {
LABEL_10:
              v202 = 0u;
              si128 = 0;
              v203 = 0;
              v205 = 0;
              v204 = 0u;
              v206 = 0u;
              LODWORD(v186) = 0;
              v187 = nullptr;
              dest = nullptr;
              v191 = 0xFFFFFFFFLL;
              v192 = 0;
              v193 = 0;
              v195 = 0;
              v197 = 0;
              v199 = 0;
              v188 = 0;
              v190 = 0;
              v194 = 0;
              v196 = 0;
              v198 = 0;
              v200 = 0;
              v17 = *(const char ***)(v13 + 32);
              if ( !v17 )
              {
LABEL_21:
                switch ( (int)v10 )
                {
                  case 7:
                    v241[0].m128i_i64[0] = a4;
                    v111 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    si128 = _mm_load_si128(v241);
                    v112 = _mm_load_si128(&v202);
                    v241[0] = v111;
                    v108 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v112.m128i_i64[0];
                    v241[1] = v112;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B042B8),
                             (__m128i)(unsigned __int64)sub_51A540);
                    if ( !v112.m128i_i64[0] )
                      goto LABEL_86;
                    goto LABEL_170;
                  case 8:
                    v241[0].m128i_i64[0] = a4;
                    v109 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    si128 = _mm_load_si128(v241);
                    v110 = _mm_load_si128(&v202);
                    v241[0] = v109;
                    v108 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v110.m128i_i64[0];
                    v241[1] = v110;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B042C0),
                             (__m128i)(unsigned __int64)sub_518E80);
                    if ( v110.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 9:
                    v113 = *(_WORD *)(v13 + 68);
                    v114 = 0;
                    if ( (v113 & 8) != 0 )
                      v114 = *(_DWORD *)(*(_QWORD *)(v13 + 32) + 8LL);
                    LODWORD(v186) = 1;
                    v115 = a7;
                    if ( (v113 & 0x4000) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                      v115 = a7 | 0x80000000;
                    v175 = v114;
                    v208 = 0u;
                    v207 = 0;
                    v116 = operator new(0x30u);
                    v207.m128i_i64[0] = v116;
                    v117 = _mm_load_si128(&v207);
                    *(_QWORD *)v116 = &v186;
                    v118 = _mm_load_si128(&si128);
                    si128 = v117;
                    v119 = _mm_load_si128(&v202);
                    *(_DWORD *)(v116 + 8) = v175;
                    *(_QWORD *)(v116 + 16) = a4;
                    *(_QWORD *)(v116 + 24) = a5;
                    *(_QWORD *)(v116 + 32) = a6;
                    *(_DWORD *)(v116 + 40) = v115;
                    v208 = v119;
                    v207 = v118;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B042D8),
                             (__m128i)(unsigned __int64)sub_518EF0);
                    if ( v119.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v119.m128i_i64[0])(&v207, &v207, 3);
                    goto LABEL_86;
                  case 10:
                    LODWORD(v186) = 2;
                    v100 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                      v100 = a7 | 0x80000000;
                    v210 = 0u;
                    v209 = 0;
                    v101 = operator new(0x20u);
                    v209.m128i_i64[0] = v101;
                    v102 = _mm_load_si128(&v209);
                    v103 = _mm_load_si128(&si128);
                    *(_QWORD *)v101 = &v186;
                    si128 = v102;
                    v104 = _mm_load_si128(&v202);
                    *(_QWORD *)(v101 + 8) = a4;
                    *(_QWORD *)(v101 + 16) = a5;
                    *(_DWORD *)(v101 + 24) = v100;
                    v210 = v104;
                    v209 = v103;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B042E0),
                             (__m128i)(unsigned __int64)sub_518F20);
                    if ( v104.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v104.m128i_i64[0])(&v209, &v209, 3);
                    goto LABEL_86;
                  case 11:
                    LODWORD(v186) = 3;
                    v95 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                      v95 = a7 | 0x80000000;
                    v212 = 0u;
                    v211 = 0;
                    v96 = operator new(0x20u);
                    v211.m128i_i64[0] = v96;
                    v97 = _mm_load_si128(&v211);
                    v98 = _mm_load_si128(&si128);
                    *(_QWORD *)v96 = &v186;
                    si128 = v97;
                    v99 = _mm_load_si128(&v202);
                    *(_QWORD *)(v96 + 8) = a4;
                    *(_QWORD *)(v96 + 16) = a5;
                    *(_DWORD *)(v96 + 24) = v95;
                    v212 = v99;
                    v211 = v98;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B042E8),
                             (__m128i)(unsigned __int64)sub_518F40);
                    if ( v99.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v99.m128i_i64[0])(&v211, &v211, 3);
                    goto LABEL_86;
                  case 12:
                    v88 = *(_WORD *)(v13 + 68);
                    v89 = 0;
                    if ( (v88 & 8) != 0 )
                      v89 = *(_DWORD *)(*(_QWORD *)(v13 + 32) + 8LL);
                    LODWORD(v186) = 4;
                    v90 = a7;
                    if ( (v88 & 0x4000) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                      v90 = a7 | 0x80000000;
                    v174 = v89;
                    v214 = 0u;
                    v213 = 0;
                    v91 = operator new(0x30u);
                    v213.m128i_i64[0] = v91;
                    v92 = _mm_load_si128(&v213);
                    *(_QWORD *)v91 = &v186;
                    v93 = _mm_load_si128(&si128);
                    si128 = v92;
                    v94 = _mm_load_si128(&v202);
                    *(_DWORD *)(v91 + 8) = v174;
                    *(_QWORD *)(v91 + 16) = a4;
                    *(_QWORD *)(v91 + 24) = a5;
                    *(_QWORD *)(v91 + 32) = a6;
                    *(_DWORD *)(v91 + 40) = v90;
                    v214 = v94;
                    v213 = v93;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B042F0),
                             (__m128i)(unsigned __int64)sub_518F60);
                    if ( v94.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v94.m128i_i64[0])(&v213, &v213, 3);
                    goto LABEL_86;
                  case 13:
                    LODWORD(v186) = 4;
                    v216 = 0u;
                    v215 = 0;
                    v84 = (_QWORD *)operator new(0x20u);
                    v215.m128i_i64[0] = (__int64)v84;
                    v85 = _mm_load_si128(&v215);
                    *v84 = &v186;
                    v86 = _mm_load_si128(&si128);
                    si128 = v85;
                    v87 = _mm_load_si128(&v202);
                    v84[1] = a4;
                    v84[2] = a5;
                    v84[3] = a6;
                    v216 = v87;
                    v215 = v86;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B042F8),
                             (__m128i)(unsigned __int64)sub_52C0E0);
                    if ( v87.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v87.m128i_i64[0])(&v215, &v215, 3);
                    goto LABEL_86;
                  case 14:
                    LODWORD(v186) = 4;
                    v220 = 0u;
                    v219 = 0;
                    v80 = (_QWORD *)operator new(0x18u);
                    v219.m128i_i64[0] = (__int64)v80;
                    v81 = _mm_load_si128(&v219);
                    v82 = _mm_load_si128(&si128);
                    *v80 = &v186;
                    si128 = v81;
                    v83 = _mm_load_si128(&v202);
                    v80[1] = a4;
                    v80[2] = a5;
                    v220 = v83;
                    v219 = v82;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04308),
                             (__m128i)(unsigned __int64)sub_52C0C0);
                    if ( v83.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v83.m128i_i64[0])(&v219, &v219, 3);
                    goto LABEL_86;
                  case 15:
                    LODWORD(v186) = 5;
                    v72 = a7;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                      v72 = a7 | 0x80000000;
                    v222 = 0u;
                    v221 = 0;
                    v73 = operator new(0x20u);
                    v221.m128i_i64[0] = v73;
                    v74 = _mm_load_si128(&v221);
                    v75 = _mm_load_si128(&si128);
                    *(_QWORD *)v73 = &v186;
                    si128 = v74;
                    v76 = _mm_load_si128(&v202);
                    *(_QWORD *)(v73 + 8) = a4;
                    *(_QWORD *)(v73 + 16) = a5;
                    *(_DWORD *)(v73 + 24) = v72;
                    v222 = v76;
                    v221 = v75;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04310),
                             (__m128i)(unsigned __int64)sub_518F90);
                    if ( v76.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v76.m128i_i64[0])(&v221, &v221, 3);
                    goto LABEL_86;
                  case 16:
                    v241[0].m128i_i64[0] = a4;
                    v70 = _mm_load_si128(&v203);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    v203 = _mm_load_si128(v241);
                    v71 = _mm_load_si128(&v204);
                    v241[0] = v70;
                    v50 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v71.m128i_i64[0];
                    v241[1] = v71;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04320),
                             (__m128i)(unsigned __int64)sub_519180);
                    if ( v71.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 17:
                    v241[0].m128i_i64[0] = a4;
                    v68 = _mm_load_si128(&v203);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    v203 = _mm_load_si128(v241);
                    v69 = _mm_load_si128(&v204);
                    v241[0] = v68;
                    v50 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v69.m128i_i64[0];
                    v241[1] = v69;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04328),
                             (__m128i)(unsigned __int64)sub_5199B0);
                    if ( v69.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 18:
                    v241[0].m128i_i64[0] = a4;
                    v66 = _mm_load_si128(&v203);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    v203 = _mm_load_si128(v241);
                    v67 = _mm_load_si128(&v204);
                    v241[0] = v66;
                    v50 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v67.m128i_i64[0];
                    v241[1] = v67;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04330),
                             (__m128i)(unsigned __int64)sub_518FB0);
                    if ( v67.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 19:
                    v241[0].m128i_i64[0] = a4;
                    v142 = _mm_load_si128(&v203);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    v203 = _mm_load_si128(v241);
                    v143 = _mm_load_si128(&v204);
                    v241[0] = v142;
                    v50 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v143.m128i_i64[0];
                    v241[1] = v143;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04338),
                             (__m128i)(unsigned __int64)sub_518FC0);
                    if ( v143.m128i_i64[0] )
                      goto LABEL_63;
                    goto LABEL_64;
                  case 20:
                    v224 = 0u;
                    v223 = 0;
                    v138 = (_QWORD *)operator new(0x28u);
                    v139 = _mm_load_si128(&v203);
                    v223.m128i_i64[0] = (__int64)v138;
                    v140 = _mm_load_si128(&v223);
                    *v138 = &v186;
                    v203 = v140;
                    v141 = _mm_load_si128(&v204);
                    v138[3] = a6;
                    v138[1] = a4;
                    v138[2] = a5;
                    v138[4] = a7;
                    v224 = v141;
                    v223 = v139;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04348),
                             (__m128i)(unsigned __int64)sub_518FD0);
                    if ( v141.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v141.m128i_i64[0])(&v223, &v223, 3);
                    goto LABEL_64;
                  case 21:
                    v226 = 0u;
                    v225 = 0;
                    v144 = (_QWORD *)operator new(0x18u);
                    v225.m128i_i64[0] = (__int64)v144;
                    v145 = _mm_load_si128(&v225);
                    v146 = _mm_load_si128(&v203);
                    *v144 = &v186;
                    v203 = v145;
                    v147 = _mm_load_si128(&v204);
                    v144[1] = a4;
                    v144[2] = a5;
                    v226 = v147;
                    v225 = v146;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04350),
                             (__m128i)(unsigned __int64)sub_519000);
                    if ( v147.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v147.m128i_i64[0])(&v225, &v225, 3);
                    goto LABEL_64;
                  case 22:
                    v228 = 0u;
                    v227 = 0;
                    v124 = (_QWORD *)operator new(0x20u);
                    v227.m128i_i64[0] = (__int64)v124;
                    v125 = _mm_load_si128(&v227);
                    *v124 = &v186;
                    v126 = _mm_load_si128(&v203);
                    v203 = v125;
                    v127 = _mm_load_si128(&v204);
                    v124[1] = a4;
                    v124[2] = a5;
                    v124[3] = a7;
                    v228 = v127;
                    v227 = v126;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04358),
                             (__m128i)(unsigned __int64)sub_519020);
                    if ( v127.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v127.m128i_i64[0])(&v227, &v227, 3);
                    goto LABEL_64;
                  case 23:
                    v230 = 0u;
                    v229 = 0;
                    v152 = (_QWORD *)operator new(0x18u);
                    v229.m128i_i64[0] = (__int64)v152;
                    v153 = _mm_load_si128(&v229);
                    v154 = _mm_load_si128(&v203);
                    *v152 = &v186;
                    v203 = v153;
                    v155 = _mm_load_si128(&v204);
                    v152[1] = a4;
                    v152[2] = a5;
                    v230 = v155;
                    v229 = v154;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04360),
                             (__m128i)(unsigned __int64)sub_519040);
                    if ( v155.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v155.m128i_i64[0])(&v229, &v229, 3);
                    goto LABEL_64;
                  case 24:
                    v232 = 0u;
                    v231 = 0;
                    v132 = (_QWORD *)operator new(0x20u);
                    v231.m128i_i64[0] = (__int64)v132;
                    v133 = _mm_load_si128(&v231);
                    *v132 = &v186;
                    v134 = _mm_load_si128(&v203);
                    v203 = v133;
                    v135 = _mm_load_si128(&v204);
                    v132[1] = a4;
                    v132[2] = a5;
                    v132[3] = a6;
                    v232 = v135;
                    v231 = v134;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04368),
                             (__m128i)(unsigned __int64)sub_519060);
                    if ( v135.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v135.m128i_i64[0])(&v231, &v231, 3);
                    goto LABEL_64;
                  case 27:
                    LODWORD(v186) = 4;
                    v218 = 0u;
                    v217 = 0;
                    v148 = (_QWORD *)operator new(0x18u);
                    v217.m128i_i64[0] = (__int64)v148;
                    v149 = _mm_load_si128(&v217);
                    v150 = _mm_load_si128(&si128);
                    *v148 = &v186;
                    si128 = v149;
                    v151 = _mm_load_si128(&v202);
                    v148[1] = a4;
                    v148[2] = a5;
                    v218 = v151;
                    v217 = v150;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04300),
                             (__m128i)(unsigned __int64)sub_52C440);
                    if ( v151.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v151.m128i_i64[0])(&v217, &v217, 3);
                    goto LABEL_86;
                  case 28:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0xD )
                      goto LABEL_47;
                    v105 = 0;
                    if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 )
                      v105 = (*(_DWORD *)(v13 + 16) != -1) << 31;
                    v241[0].m128i_i32[2] = v105;
                    v106 = _mm_load_si128(&si128);
                    v241[0].m128i_i64[0] = a4;
                    si128 = _mm_load_si128(v241);
                    v107 = _mm_load_si128(&v202);
                    v241[0] = v106;
                    v108 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v107.m128i_i64[0];
                    v241[1] = v107;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B042C8),
                             (__m128i)(unsigned __int64)sub_519F00);
                    if ( v107.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 29:
                    v241[0].m128i_i64[0] = a4;
                    v136 = _mm_load_si128(&si128);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    si128 = _mm_load_si128(v241);
                    v137 = _mm_load_si128(&v202);
                    v241[0] = v136;
                    v108 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v137.m128i_i64[0];
                    v241[1] = v137;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B042D0),
                             (__m128i)(unsigned __int64)sub_51A150);
                    if ( v137.m128i_i64[0] )
                      goto LABEL_170;
                    goto LABEL_86;
                  case 30:
                    v234 = 0u;
                    v233 = 0;
                    v120 = (_QWORD *)operator new(0x18u);
                    v121 = _mm_load_si128(&v205);
                    v233.m128i_i64[0] = (__int64)v120;
                    v122 = _mm_load_si128(&v233);
                    *v120 = a4;
                    v120[1] = a5;
                    v205 = v122;
                    v123 = _mm_load_si128(&v206);
                    v120[2] = a7;
                    v234 = v123;
                    v233 = v121;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04370),
                             (__m128i)(unsigned __int64)sub_519080);
                    if ( v123.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v123.m128i_i64[0])(&v233, &v233, 3);
                    goto LABEL_57;
                  case 31:
                    v236 = 0u;
                    v235 = 0;
                    v128 = operator new(0x18u);
                    v129 = _mm_load_si128(&v205);
                    *(_QWORD *)v128 = a4;
                    v235.m128i_i64[0] = v128;
                    v130 = _mm_load_si128(&v235);
                    *(_QWORD *)(v128 + 8) = a5;
                    v205 = v130;
                    v131 = _mm_load_si128(&v206);
                    *(_DWORD *)(v128 + 16) = a7;
                    v236 = v131;
                    v235 = v129;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04378),
                             (__m128i)(unsigned __int64)sub_5190A0);
                    if ( v131.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v131.m128i_i64[0])(&v235, &v235, 3);
                    goto LABEL_57;
                  case 32:
                    v241[0].m128i_i64[0] = a4;
                    v63 = _mm_load_si128(&v205);
                    v241[0].m128i_i32[2] = a7;
                    v64 = _mm_load_si128(v241);
                    v241[0] = v63;
                    v205 = v64;
                    v65 = _mm_load_si128(&v206);
                    v43 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v65.m128i_i64[0];
                    v241[1] = v65;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04380),
                             (__m128i)(unsigned __int64)sub_5190C0);
                    if ( v65.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 33:
                    v238 = 0u;
                    v237 = 0;
                    v59 = operator new(0x18u);
                    v60 = _mm_load_si128(&v205);
                    *(_QWORD *)v59 = a4;
                    v237.m128i_i64[0] = v59;
                    v61 = _mm_load_si128(&v237);
                    *(_QWORD *)(v59 + 8) = a5;
                    v205 = v61;
                    v62 = _mm_load_si128(&v206);
                    *(_DWORD *)(v59 + 16) = a7;
                    v238 = v62;
                    v237 = v60;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)off_2B04388),
                             (__m128i)(unsigned __int64)sub_5190E0);
                    if ( v62.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v62.m128i_i64[0])(&v237, &v237, 3);
                    goto LABEL_57;
                  case 34:
                    v240 = 0u;
                    v239 = 0;
                    v55 = (_QWORD *)operator new(0x18u);
                    v239.m128i_i64[0] = (__int64)v55;
                    v56 = _mm_load_si128(&v239);
                    v57 = _mm_load_si128(&v205);
                    *v55 = a4;
                    v205 = v56;
                    v58 = _mm_load_si128(&v206);
                    v55[1] = a5;
                    v55[2] = a7;
                    v240 = v58;
                    v239 = v57;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04390),
                             (__m128i)(unsigned __int64)sub_519100);
                    if ( v58.m128i_i64[0] )
                      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v58.m128i_i64[0])(&v239, &v239, 3);
                    goto LABEL_57;
                  case 35:
                    v241[0].m128i_i64[0] = a4;
                    v52 = _mm_load_si128(&v205);
                    *(__m128i *)((char *)v241 + 8) = 0;
                    v53 = _mm_load_si128(v241);
                    v241[0] = v52;
                    v205 = v53;
                    v54 = _mm_load_si128(&v206);
                    v43 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v54.m128i_i64[0];
                    v241[1] = v54;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04398),
                             (__m128i)(unsigned __int64)sub_518EA0);
                    if ( v54.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 36:
                    v241[0].m128i_i64[0] = a4;
                    v48 = _mm_load_si128(&v203);
                    v241[0].m128i_i64[1] = a5;
                    v203 = _mm_load_si128(v241);
                    v49 = _mm_load_si128(&v204);
                    v241[0] = v48;
                    v50 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v49.m128i_i64[0];
                    v241[1] = v49;
                    v204 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04340),
                             (__m128i)(unsigned __int64)sub_51A260);
                    if ( v49.m128i_i64[0] )
LABEL_63:
                      v50(v241, v241, 3);
LABEL_64:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0x2D )
                      goto LABEL_47;
                    v51 = sub_533810(v13, *a1, 0x2Au, a2, (unsigned __int64)&v203, a7, 0, (const char *)&v186);
                    goto LABEL_66;
                  case 37:
                    memset(v241, 0, sizeof(v241));
                    v44 = operator new(0x18u);
                    v241[0].m128i_i64[0] = v44;
                    v45 = _mm_load_si128(v241);
                    v46 = _mm_load_si128(&v205);
                    *(_QWORD *)v44 = a4;
                    v205 = v45;
                    v47 = _mm_load_si128(&v206);
                    *(_QWORD *)(v44 + 8) = a5;
                    *(_DWORD *)(v44 + 16) = a7;
                    v43 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0];
                    v241[1] = v47;
                    v241[0] = v46;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B043A0),
                             (__m128i)(unsigned __int64)sub_519120);
                    if ( v47.m128i_i64[0] )
                      goto LABEL_56;
                    goto LABEL_57;
                  case 38:
                    v241[0].m128i_i64[0] = a4;
                    v40 = _mm_load_si128(&v205);
                    v241[0].m128i_i32[2] = a7;
                    v41 = _mm_load_si128(v241);
                    v241[0] = v40;
                    v205 = v41;
                    v42 = _mm_load_si128(&v206);
                    v43 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v42.m128i_i64[0];
                    v241[1] = v42;
                    v206 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B043A8),
                             (__m128i)(unsigned __int64)sub_519140);
                    if ( v42.m128i_i64[0] )
LABEL_56:
                      v43(v241, v241, 3);
LABEL_57:
                    if ( (*(_BYTE *)(v13 + 70) & 0xF) != 0xC )
                      goto LABEL_47;
                    v29 = sub_533810(v13, *a1, 0x2Bu, a2, (unsigned __int64)&v205, a7, 0, nullptr);
                    sub_529FB0(&v186);
                    break;
                  case 39:
                  case 40:
                    if ( (*(_BYTE *)(v13 + 70) & 0x3F) != 0xD
                      || (*(_BYTE *)(v13 + 69) & 0x40) != 0 && *(_DWORD *)(v13 + 16) != -1 )
                    {
                      goto LABEL_47;
                    }
                    v241[0].m128i_i32[2] = v10;
                    v160 = _mm_load_si128(&si128);
                    v241[0].m128i_i64[0] = a4;
                    si128 = _mm_load_si128(v241);
                    v161 = _mm_load_si128(&v202);
                    v241[0] = v160;
                    v108 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v161.m128i_i64[0];
                    v241[1] = v161;
                    v202 = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_2B04318),
                             (__m128i)(unsigned __int64)sub_51A210);
                    if ( v161.m128i_i64[0] )
LABEL_170:
                      v108(v241, v241, 3);
LABEL_86:
                    if ( (*(_BYTE *)(v13 + 70) & 0x2F) == 0xD )
                    {
                      HIDWORD(v191) = *(_DWORD *)(*(_QWORD *)v13 + 44LL);
                      v192 = *(_BYTE *)(*(_QWORD *)v13 + 51LL);
                      if ( (*(_BYTE *)(v13 + 69) & 0x40) != 0 )
                      {
                        v77 = *(_QWORD *)(v13 + 16);
                        if ( v77 != -1 )
                        {
                          LODWORD(v191) = sub_3B9110(*(_QWORD **)(*a1 + 1480), v77);
                          v78 = *(_QWORD **)(*a1 + 1480);
                          v79 = sub_3B9110(v78, *(_DWORD *)(v13 + 16));
                          sub_5A1A70(v78, &dest, v79);
                        }
                      }
                      v51 = sub_533810(v13, *a1, 0x29u, a2, (unsigned __int64)&si128, a7, 0, (const char *)&v186);
LABEL_66:
                      v29 = v51;
                    }
                    else
                    {
LABEL_47:
                      v29 = -5;
                    }
                    sub_529FB0(&v186);
                    break;
                  default:
                    v29 = sub_533810(v13, *a1, v173, a2, a4, a5, a6, nullptr);
                    sub_529FB0(&v186);
                    break;
                }
                if ( v206.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v206.m128i_i64[0])(&v205, &v205, 3);
                if ( v204.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v204.m128i_i64[0])(&v203, &v203, 3);
                if ( v202.m128i_i64[0] )
                  ((void (__fastcall *)(__m128i *, __m128i *, __int64))v202.m128i_i64[0])(&si128, &si128, 3);
                return v29;
              }
              if ( (*(_BYTE *)(v13 + 68) & 8) == 0 )
              {
                if ( v17[1] )
                {
                  v168 = *(_QWORD *)(v13 + 32);
                  na = v17[1];
                  v36 = strlen(na);
                  v17 = (const char **)v168;
                  if ( v36 )
                  {
                    srcb = (_BYTE *)v36;
                    v170 = v36 + 1;
                    v187 = (void *)qvector_reserve(&v187, 0, v36 + 1, 1);
                    *(_QWORD *)&v188 = v170;
                    memmove(v187, na, (size_t)srcb);
                    srcb[(_QWORD)v187] = 0;
                    v17 = *(const char ***)(v13 + 32);
                  }
                }
                if ( v17[2] && (nb = v17[2], v37 = strlen(nb), v38 = nb, (v39 = v37) != 0) )
                {
                  v156 = dest;
                  v157 = v37 + 1;
                  if ( *((_QWORD *)&v190 + 1) < v37 + 1 )
                  {
                    v163 = (void *)v37;
                    v171 = v37 + 1;
                    dest = (void *)qvector_reserve(&dest, dest, v157, 1);
                    v39 = (size_t)v163;
                    v156 = dest;
                    v38 = nb;
                    v157 = v171;
                  }
                  *(_QWORD *)&v190 = v157;
                  nd = v39;
                  memmove(v156, v38, v39);
                  *((_BYTE *)dest + nd) = 0;
                }
                else
                {
                  *(_QWORD *)&v190 = 0;
                }
                goto LABEL_21;
              }
              v18 = *v17;
              v19 = (const char *)sub_6309B0(*(_QWORD *)(*a1 + 1480), *v17, *((unsigned int *)v17 + 2), 0);
              if ( v19 && (n = (size_t)v19, v23 = strlen(v19), v21 = (const char *)n, (v22 = v23) != 0) )
              {
                v158 = v187;
                v159 = v23 + 1;
                if ( *((_QWORD *)&v188 + 1) < v23 + 1 )
                {
                  v164 = (void *)v23;
                  v172 = v23 + 1;
                  v187 = (void *)qvector_reserve(&v187, v187, v159, 1);
                  v22 = (size_t)v164;
                  v158 = v187;
                  v21 = (const char *)n;
                  v159 = v172;
                }
                *(_QWORD *)&v188 = v159;
                v18 = v21;
                ne = v22;
                memmove(v158, v21, v22);
                v22 = ne;
                *((_BYTE *)v187 + ne) = 0;
              }
              else
              {
                *(_QWORD *)&v188 = 0;
              }
              v24 = *(_QWORD *)(v13 + 32);
              v25 = *(unsigned int *)(v24 + 24);
              if ( (_DWORD)v25 )
              {
                v26 = (const char *)sub_6309B0(*(_QWORD *)(*a1 + 1480), *(_QWORD *)v24, v25, 0);
                ptr = nullptr;
                v185 = 0;
                if ( v26 )
                {
                  src = v26;
                  nc = strlen(v26);
                  ptr = (void *)qvector_reserve(&ptr, 0, nc + 1, 1);
                  *(_QWORD *)&v185 = nc + 1;
                  memmove(ptr, src, nc);
                  *((_BYTE *)ptr + nc) = 0;
                  v27 = ptr;
                  v28 = v185;
                  goto LABEL_18;
                }
              }
              else
              {
                ptr = nullptr;
                v185 = 0;
                if ( (_QWORD)v188 )
                {
                  v169 = v188;
                  ptr = (void *)qalloc_or_throw(v188, v18, (_QWORD)v188, v20, v21, v22);
                  memcpy(ptr, v187, v169);
                  v27 = ptr;
                  v28 = __PAIR128__(v169, v169);
LABEL_18:
                  ptr = nullptr;
                  v185 = 0;
                  if ( dest )
                  {
                    srca = v27;
                    *(_QWORD *)&v190 = 0;
                    qfree(dest);
                    dest = srca;
                    v190 = v28;
                    if ( ptr )
                    {
                      *(_QWORD *)&v185 = 0;
                      qfree(ptr);
                    }
                  }
                  else
                  {
                    dest = v27;
                    v190 = v28;
                  }
                  goto LABEL_21;
                }
              }
              v27 = nullptr;
              v28 = 0u;
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
      v35 = 0x1FFF9FFFFA0LL;
      v29 = -5;
      if ( !_bittest64(&v35, v10) )
        return 0;
      return v29;
  }
}

