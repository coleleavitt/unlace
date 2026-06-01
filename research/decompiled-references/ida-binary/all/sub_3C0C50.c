__int64 __fastcall sub_3C0C50(
        __int64 *a1,
        bool a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int tinfo_details; // ebx
  __int64 v11; // r13
  __int64 tinfo_property; // rsi
  __int64 v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rsi
  int tinfo_udt_member; // eax
  int v23; // eax
  unsigned __int64 v24; // rsi
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rax
  signed int v27; // r8d
  unsigned __int64 v28; // rcx
  int v29; // eax
  const char *v30; // rsi
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // r15
  __int64 v45; // rdi
  __int64 v46; // rdi
  double v47; // xmm0_8
  const char *v48; // rsi
  __m128i v49; // xmm0
  unsigned __int64 v50; // rax
  int v51; // eax
  int v52; // edx
  __int64 v53; // rdi
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  const char *v57; // rax
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  __int64 v60; // rdx
  __int64 v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rdx
  char v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  size_t v67; // r8
  char v68; // cl
  __m128 si128; // xmm0
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned int v73; // r13d
  double v74; // xmm4_8
  double v75; // xmm5_8
  unsigned int v76; // eax
  double v77; // xmm4_8
  double v78; // xmm5_8
  _QWORD *v79; // rdx
  int v80; // r8d
  int v81; // edx
  int v82; // edx
  const char **v83; // rax
  __int64 v84; // rdx
  size_t v85; // r12
  void *v86; // r8
  void *v87; // rdi
  unsigned int v88; // r12d
  __m128i v89; // xmm0
  unsigned __int8 v90; // al
  __int64 v91; // r8
  __int64 v92; // r9
  __m128 v93; // xmm4
  __m128 v94; // xmm5
  unsigned __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  double v99; // xmm4_8
  double v100; // xmm5_8
  const char *v101; // rdx
  void *v102; // rdi
  int v103; // eax
  __int64 v104; // rdx
  char v105; // r12
  unsigned __int64 v106; // r12
  unsigned __int64 v107; // r12
  __int64 v108; // rdx
  const char *v109; // r8
  size_t v110; // r13
  __int64 v111; // rax
  __m128i v112; // xmm0
  unsigned __int64 v113; // rcx
  __m128i v114; // xmm0
  unsigned int v115; // r13d
  const char *v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // r10
  __int64 v119; // r9
  unsigned int v120; // r13d
  double v121; // xmm4_8
  double v122; // xmm5_8
  const void *v123; // r13
  void *v124; // rax
  __int64 v125; // rdi
  unsigned __int64 v126; // rdx
  const char *v127; // r11
  char *v128; // rdi
  unsigned __int64 v129; // rdx
  char v130; // [rsp+0h] [rbp-310h]
  void *v131; // [rsp+0h] [rbp-310h]
  int v132; // [rsp+8h] [rbp-308h]
  int src; // [rsp+10h] [rbp-300h]
  const char *srcb; // [rsp+10h] [rbp-300h]
  __int32 srca; // [rsp+10h] [rbp-300h]
  int v136; // [rsp+18h] [rbp-2F8h]
  void *v137; // [rsp+18h] [rbp-2F8h]
  void *v138; // [rsp+18h] [rbp-2F8h]
  void *v139; // [rsp+18h] [rbp-2F8h]
  int n; // [rsp+20h] [rbp-2F0h]
  size_t nb; // [rsp+20h] [rbp-2F0h]
  size_t na; // [rsp+20h] [rbp-2F0h]
  int v143; // [rsp+30h] [rbp-2E0h]
  signed int v144; // [rsp+34h] [rbp-2DCh]
  unsigned int v145; // [rsp+34h] [rbp-2DCh]
  signed int v146; // [rsp+34h] [rbp-2DCh]
  signed int v147; // [rsp+34h] [rbp-2DCh]
  bool v148; // [rsp+34h] [rbp-2DCh]
  bool v149; // [rsp+34h] [rbp-2DCh]
  int v150; // [rsp+38h] [rbp-2D8h]
  size_t v151; // [rsp+38h] [rbp-2D8h]
  const char *v152; // [rsp+38h] [rbp-2D8h]
  char v153; // [rsp+48h] [rbp-2C8h]
  unsigned __int64 v154; // [rsp+48h] [rbp-2C8h]
  unsigned int v155; // [rsp+50h] [rbp-2C0h]
  unsigned __int64 v156; // [rsp+50h] [rbp-2C0h]
  char v157; // [rsp+50h] [rbp-2C0h]
  __int64 v158; // [rsp+50h] [rbp-2C0h]
  char v160; // [rsp+6Bh] [rbp-2A5h] BYREF
  __int16 v161; // [rsp+6Ch] [rbp-2A4h]
  unsigned __int16 v162; // [rsp+6Eh] [rbp-2A2h]
  unsigned __int64 v163; // [rsp+70h] [rbp-2A0h] BYREF
  unsigned __int64 v164; // [rsp+78h] [rbp-298h] BYREF
  unsigned __int64 v165; // [rsp+80h] [rbp-290h]
  __int64 tinfo_size; // [rsp+88h] [rbp-288h]
  unsigned __int64 v167; // [rsp+90h] [rbp-280h] BYREF
  unsigned __int64 v168; // [rsp+98h] [rbp-278h]
  unsigned __int64 v169; // [rsp+A0h] [rbp-270h]
  unsigned __int64 v170; // [rsp+A8h] [rbp-268h]
  __int64 v171; // [rsp+B0h] [rbp-260h]
  __int64 v172; // [rsp+B8h] [rbp-258h]
  unsigned __int64 v173; // [rsp+C0h] [rbp-250h] BYREF
  __int64 v174; // [rsp+C8h] [rbp-248h] BYREF
  void *v175; // [rsp+D0h] [rbp-240h] BYREF
  __int128 v176; // [rsp+D8h] [rbp-238h]
  void *dest; // [rsp+F0h] [rbp-220h] BYREF
  __int128 v178; // [rsp+F8h] [rbp-218h]
  const char *v179; // [rsp+110h] [rbp-200h] BYREF
  __int128 v180; // [rsp+118h] [rbp-1F8h]
  __int64 v181; // [rsp+130h] [rbp-1E0h] BYREF
  __int128 v182; // [rsp+138h] [rbp-1D8h]
  __int128 v183; // [rsp+148h] [rbp-1C8h]
  __int64 v184; // [rsp+158h] [rbp-1B8h]
  int v185; // [rsp+160h] [rbp-1B0h]
  __m128i v186; // [rsp+170h] [rbp-1A0h] BYREF
  __m128i v187; // [rsp+180h] [rbp-190h] BYREF
  __m128 v188; // [rsp+190h] [rbp-180h] BYREF
  int v189; // [rsp+1A0h] [rbp-170h]
  __int128 v190; // [rsp+1B0h] [rbp-160h] BYREF
  __int64 v191; // [rsp+1C0h] [rbp-150h]
  __int128 v192; // [rsp+1C8h] [rbp-148h]
  __int64 v193; // [rsp+1D8h] [rbp-138h]
  __int128 v194; // [rsp+1E0h] [rbp-130h]
  __int128 v195; // [rsp+1F0h] [rbp-120h] BYREF
  int v196; // [rsp+200h] [rbp-110h]
  __int64 v197; // [rsp+220h] [rbp-F0h]
  int v198; // [rsp+228h] [rbp-E8h]
  __int64 v199; // [rsp+230h] [rbp-E0h]
  char v200; // [rsp+238h] [rbp-D8h]
  __m128i v201; // [rsp+240h] [rbp-D0h] BYREF
  void *v202; // [rsp+250h] [rbp-C0h] BYREF
  __int128 v203; // [rsp+258h] [rbp-B8h]
  void *v204; // [rsp+268h] [rbp-A8h] BYREF
  __int128 v205; // [rsp+270h] [rbp-A0h]
  _BYTE v206[24]; // [rsp+280h] [rbp-90h] BYREF
  __m128i v207; // [rsp+298h] [rbp-78h] BYREF
  __m128 v208; // [rsp+2A8h] [rbp-68h] BYREF
  int v209; // [rsp+2B8h] [rbp-58h]
  __int64 v210; // [rsp+2C0h] [rbp-50h]
  char v211; // [rsp+2C8h] [rbp-48h]
  unsigned __int64 v212; // [rsp+2D8h] [rbp-38h]

  tinfo_details = 0;
  v212 = __readfsqword(0x28u);
  v11 = a1[26];
  if ( (*(_BYTE *)(v11 + 31) & 0xEF) != 0xD )
    return tinfo_details;
  v184 = 0;
  v182 = 0;
  tinfo_property = 13;
  v185 = 1;
  v183 = 0;
  v15 = *(_QWORD *)(v11 + 8);
  v181 = 0;
  tinfo_details = get_tinfo_details(v15, 13, &v181);
  if ( !(_BYTE)tinfo_details )
    goto LABEL_43;
  v18 = *(_QWORD *)(v11 + 16);
  if ( *(_BYTE *)(v11 + 31) == 29 )
  {
    if ( v18 == -2 )
    {
      v155 = 1;
      v20 = v11 + 48;
      v19 = 0;
    }
    else
    {
      if ( v18 == -1 )
      {
        v155 = 1;
        v19 = 0;
        v153 = 0;
        n = -1;
        goto LABEL_11;
      }
      v155 = 1;
      v19 = *(_QWORD *)(v11 + 32);
      v20 = v11 + 48;
    }
  }
  else if ( v18 == -2 )
  {
    v155 = 0;
    v20 = v11 + 48;
    v19 = 0;
  }
  else
  {
    if ( v18 == -1 )
    {
      v155 = 0;
      v153 = 0;
      n = -1;
      v19 = 8LL * *(_QWORD *)(v11 + 192);
      goto LABEL_11;
    }
    v155 = 0;
    v19 = *(_QWORD *)(v11 + 232);
    v20 = v11 + 48;
  }
  v21 = *(_QWORD *)(v11 + 8);
  *(_QWORD *)(v11 + 48) = v19;
  tinfo_udt_member = find_tinfo_udt_member(v20, v21, v155);
  n = tinfo_udt_member;
  if ( tinfo_udt_member == -1 )
  {
    v153 = 0;
    v18 = -1;
  }
  else
  {
    v153 = tinfo_details;
    if ( *(_BYTE *)(v11 + 31) == 29 )
      v18 = tinfo_udt_member;
    else
      v18 = *(_QWORD *)(v11 + 48);
  }
LABEL_11:
  tinfo_property = (__int64)&v163;
  v23 = sub_3AE3E0((__int64)a1, (__int64 *)&v163, (__int64 *)&v164, (__m128)0LL, a4, a5, a6, v16, v17, a9, a10);
  if ( !v23 )
  {
    v47 = 0.0;
    v209 = -1;
    v208.m128_u64[1] = 1;
    v202 = nullptr;
    v204 = nullptr;
    v210 = 0;
    v211 = 0;
    v201 = (__m128i)v164;
    v203 = 0;
    v205 = 0;
    *(_OWORD *)v206 = 0;
    v48 = *(const char **)(v11 + 8);
    if ( (unsigned int)find_tinfo_udt_member(&v201, v48, v155) == -1 )
    {
      v50 = v164 + 8;
    }
    else
    {
      v49 = _mm_load_si128(&v201);
      a4 = (__m128)_mm_srli_si128(v49, 8);
      *(_QWORD *)&v47 = _mm_add_epi64(v49, (__m128i)a4).m128i_u64[0];
      v50 = *(_QWORD *)&v47;
    }
    v164 = v50;
    clear_tinfo_t(v206);
    if ( v204 )
    {
      *(_QWORD *)&v205 = 0;
      v47 = qfree(v204, v48);
    }
    if ( v202 )
    {
      *(_QWORD *)&v203 = 0;
      qfree(v202, v48, v47);
    }
    v153 = tinfo_details;
    v191 = 0;
    v18 = v163;
    v193 = 0;
    v197 = 1;
    v198 = -1;
    v199 = 0;
    v200 = 0;
    v190 = 0;
    v192 = 0;
    v194 = 0;
    v195 = 0;
    goto LABEL_63;
  }
  if ( v23 == 1 )
  {
    v24 = v19;
    if ( n != -1 && (*(_BYTE *)(v181 + 144LL * n + 133) & 4) == 0 )
      v24 = v18;
    v163 = v24;
    v25 = (unsigned __int64 *)sub_3B7350(&v181, v24, v155);
    if ( (v184 & 0x40000000000LL) != 0 && (_QWORD)v182 && *(_QWORD *)(v181 + 144 * v182 - 144) == v18 )
    {
      if ( !v25 )
        goto LABEL_20;
    }
    else if ( !v25 )
    {
      if ( !v153 )
      {
LABEL_20:
        v26 = 8LL * *(_QWORD *)(v11 + 192);
        if ( v26 < v163 + 8 )
          v26 = v163 + 8;
        goto LABEL_26;
      }
      v26 = *(_QWORD *)(v11 + 56) + v163;
LABEL_26:
      v164 = v26;
      v191 = 0;
      v193 = 0;
      v197 = 1;
      v198 = -1;
      v199 = 0;
      v200 = 0;
      v190 = 0;
      v192 = 0;
      v194 = 0;
      v195 = 0;
      if ( !v153 )
        goto LABEL_27;
      v153 = 0;
LABEL_63:
      *(_QWORD *)&v190 = v18;
      tinfo_property = *(_QWORD *)(v11 + 8);
      v51 = find_tinfo_udt_member(&v190, tinfo_property, v155);
      v150 = v51;
      if ( v51 != -1 )
      {
        if ( (*(_BYTE *)(v181 + 144LL * v51 + 133) & 4) == 0 )
        {
          if ( (v199 & 0x300000000000LL) != 0 )
            goto LABEL_66;
          v79 = (_QWORD *)(v181 + 144 * v182 - 144);
          v149 = (_QWORD)v182 != 0 && *v79 == (_QWORD)v190;
          if ( v149 )
            v149 = get_tinfo_property(v79[8], 287) != 0;
          v201.m128i_i64[0] = 0;
          tinfo_property = get_tinfo_property(v195, 289);
          v201.m128i_i64[0] = tinfo_property;
          tinfo_size = get_tinfo_size(0, tinfo_property, 0);
          clear_tinfo_t(&v201);
          if ( !tinfo_size && !v149 )
          {
LABEL_66:
            tinfo_details = 0;
LABEL_67:
            clear_tinfo_t(&v195);
            if ( v193 )
            {
              *(_QWORD *)&v194 = 0;
              qfree(v193, (const char *)tinfo_property);
            }
            if ( v191 )
            {
              *(_QWORD *)&v192 = 0;
              qfree(v191, (const char *)tinfo_property);
            }
            goto LABEL_44;
          }
          v165 = *((_QWORD *)&v190 + 1);
          if ( (BYTE9(v195) & 0x10) != 0 )
          {
            v80 = v197;
            v136 = HIDWORD(v197);
            src = v198;
          }
          else
          {
            src = -1;
            v80 = 1;
            v136 = 0;
          }
          v81 = v80;
          v27 = v80 & 0xFFFFFFFD;
          v82 = v81 | 2;
          if ( (BYTE9(v195) & 4) != 0 )
            v27 = v82;
LABEL_29:
          v28 = v164;
          if ( HIBYTE(v185) )
          {
            v35 = 0xFFFF;
            v34 = 524280;
          }
          else if ( (_QWORD)v182 && v164 >= *(_QWORD *)(v181 + 144 * v182 - 144) )
          {
            v34 = v164;
            v35 = v164 >> 3;
          }
          else
          {
            v209 = -1;
            v202 = nullptr;
            v204 = nullptr;
            v208.m128_u64[1] = 1;
            v210 = 0;
            v211 = 0;
            v201 = (__m128i)v164;
            v203 = 0;
            v205 = 0;
            *(_OWORD *)v206 = 0;
            v144 = v27;
            v29 = find_tinfo_udt_member(&v201, *(_QWORD *)(v11 + 8), v155);
            v30 = (const char *)v164;
            v31 = v144;
            if ( v29 == -1 )
            {
              v83 = (const char **)sub_3B7350(&v181, v164, v155);
              v31 = v144;
              if ( v83 )
                v30 = *v83;
              else
                v30 = (const char *)v164;
            }
            v145 = v31;
            v167 = (unsigned __int64)v30;
            clear_tinfo_t(v206);
            v27 = v145;
            if ( v204 )
            {
              *(_QWORD *)&v205 = 0;
              qfree(v204, v30, v32, v33, v145);
              v27 = v145;
            }
            if ( v202 )
            {
              v146 = v27;
              *(_QWORD *)&v203 = 0;
              qfree(v202, v30);
              v27 = v146;
            }
            v34 = v167;
            v28 = v164;
            v35 = v167 >> 3;
          }
          v167 = v35;
          v36 = v34 - v163;
          v37 = v28 - v163;
          v168 = v36;
          v169 = v37;
          if ( a2 )
          {
            v147 = v27;
            v38 = getinf(52) & 3;
            v27 = v147;
            if ( v38 == 1 )
            {
              v39 = 16;
              v40 = 2;
            }
            else
            {
              v39 = 8;
              v40 = 1;
              if ( v38 == 2 )
              {
                v39 = 32;
                v40 = 4;
              }
            }
            tinfo_size = v40;
            v36 = v168;
            v37 = v169;
            v148 = a2;
          }
          else if ( v150 == -1 )
          {
            v148 = 0;
            v39 = 8 * tinfo_size;
            if ( n != -1 )
              v148 = (*(_QWORD *)(v11 + 120) & 0xFLL) == 10;
          }
          else if ( (BYTE8(v195) & 0xF) == 0xA )
          {
            v52 = v196 & 3;
            if ( v52 == 1 )
            {
              v39 = 16;
              v53 = 2;
            }
            else
            {
              v39 = 8;
              v53 = 1;
              if ( v52 == 2 )
              {
                v39 = 32;
                v53 = 4;
              }
            }
            tinfo_size = v53;
            v148 = tinfo_details;
          }
          else
          {
            v148 = 0;
            v39 = 8 * tinfo_size;
          }
          v168 = v36 / v39;
          v169 = v37 / v39;
          v54 = v37 / v39;
          v55 = v165 / v39;
          v56 = v165 % v39;
          v165 /= v39;
          if ( v153 != 1 && v55 > 1 )
            v54 = v55;
          v170 = v54;
          v171 = v136;
          v172 = src;
          v161 = v27 | 8;
          v162 = (v27 >> 4) & 0xF;
          v57 = (const char *)itext(1109, v39, v56);
          v175 = nullptr;
          v176 = 0;
          if ( v57 )
          {
            srcb = v57;
            nb = strlen(v57);
            v175 = (void *)qvector_reserve(&v175, 0, nb + 1, 1);
            *(_QWORD *)&v176 = nb + 1;
            memmove(v175, srcb, nb);
            *((_BYTE *)v175 + nb) = 0;
          }
          if ( v148 )
            sub_3B5920((__int64)&v175, "Convert to array", "Convert to string");
          sub_3B5920((__int64)&v175, "%$", "%N");
          tinfo_property = (__int64)sub_3B55E0;
          v160 = HIBYTE(v185);
          if ( !HIBYTE(v185) )
            v19 >>= 3;
          v173 = v19;
          if ( !(unsigned int)sub_1697D0(
                                (int)v175,
                                (__int64)sub_3B55E0,
                                (__int64)&v160,
                                (__int64)"Start offset",
                                (__int64)&v173,
                                (__int64)"End offset  ",
                                (__m128)0LL,
                                a4,
                                a5,
                                a6,
                                v58,
                                v59,
                                a9,
                                a10,
                                (char)&v167) )
            goto LABEL_119;
          if ( v148 )
          {
            v90 = getinf(52);
            if ( v90 > 0xAu )
            {
              v95 = 4;
              if ( (unsigned int)v90 - 12 > 2 )
                goto LABEL_89;
            }
            else if ( (v90 & 0xF8) != 0 )
            {
              v95 = 2;
            }
            else
            {
              v95 = 1;
              if ( (unsigned int)v90 - 4 > 2 )
                goto LABEL_89;
            }
            v96 = v90 & 3;
            v97 = 2;
            if ( v96 != 1 )
              v97 = 3LL * (v96 == 2) + 1;
            v98 = v170 * v97;
            if ( v98 < v95 )
            {
              sub_169630(
                (int)"AUTOHIDE NONE\nNot enough space for string size prefix",
                (__int64)sub_3B55E0,
                v98,
                v95,
                v91,
                v92,
                (__m128)0LL,
                a4,
                a5,
                a6,
                v93,
                v94,
                a9,
                a10,
                v130);
              tinfo_details = 0;
LABEL_119:
              if ( v175 )
              {
                *(_QWORD *)&v176 = 0;
                qfree(v175, (const char *)tinfo_property);
              }
              goto LABEL_67;
            }
          }
LABEL_89:
          v174 = 0;
          v186.m128i_i64[0] = 0;
          v189 = -1;
          dest = nullptr;
          v178 = 0;
          srca = v171;
          v132 = v172;
          v60 = v161 & 0xFFF7 | (16 * (unsigned int)v162);
          LOBYTE(v60) = v161 & 7;
          na = v11 + 8;
          if ( (v161 & 4) != 0 )
            v60 = v161 & 0xFFF7 | (16 * (unsigned int)v162);
          v188.m128_u64[1] = 1;
          v143 = v60;
          if ( v150 != -1 )
          {
            v61 = 144LL * v150;
            if ( (*(_BYTE *)(v61 + v181 + 133) & 4) == 0 )
            {
              if ( a2 )
              {
                v103 = getinf(52) & 3;
                v104 = 3;
                if ( v103 != 1 )
                {
                  v104 = 7;
                  if ( v103 != 2 )
                    v104 = 50;
                }
                v201.m128i_i64[0] = v104;
                copy_tinfo_t(&v174, &v201, v104);
                clear_tinfo_t(&v201);
              }
              else
              {
                v201.m128i_i64[0] = 0;
                v201.m128i_i64[0] = get_tinfo_property(*(_QWORD *)(v61 + v181 + 64), 289);
                copy_tinfo_t(&v174, &v201, v62);
                clear_tinfo_t(&v201);
              }
              if ( (v161 & 8) == 0
                || (v201.m128i_i32[2] = 0,
                    v201.m128i_i64[0] = 0,
                    v201.m128i_i32[3] = v170,
                    copy_tinfo_t(&v201, &v174, v63),
                    tinfo_property = 11,
                    v64 = create_tinfo(&v174, 11, 11, &v201),
                    clear_tinfo_t(&v201),
                    v64) )
              {
                v65 = v61 + v181;
                if ( &dest != (void **)(v61 + v181 + 16) )
                {
                  v66 = *(_QWORD *)(v65 + 24);
                  v156 = v66;
                  if ( v66 && (v67 = v66 - 1, v66 != 1) )
                  {
                    v123 = *(const void **)(v65 + 16);
                    v124 = dest;
                    if ( *((_QWORD *)&v178 + 1) < v66 )
                    {
                      v139 = (void *)(v66 - 1);
                      v124 = (void *)qvector_reserve(&dest, dest, v66, 1);
                      dest = v124;
                      v67 = (size_t)v139;
                    }
                    *(_QWORD *)&v178 = v156;
                    memmove(v124, v123, v67);
                    *((char *)dest + v156 - 1) = 0;
                    v65 = v61 + v181;
                  }
                  else
                  {
                    *(_QWORD *)&v178 = 0;
                  }
                }
                v68 = 0;
                v186 = _mm_loadu_si128((const __m128i *)(v65 + 72));
                v187 = _mm_loadu_si128((const __m128i *)(v65 + 88));
                si128 = (__m128)_mm_loadu_si128((const __m128i *)(v65 + 104));
                v189 = *(_DWORD *)(v65 + 120);
                v188 = si128;
                goto LABEL_102;
              }
LABEL_183:
              tinfo_details = 0;
              goto LABEL_116;
            }
          }
          v201.m128i_i64[0] = 50;
          copy_tinfo_t(&v174, &v201, v60);
          clear_tinfo_t(&v201);
          if ( (v161 & 8) != 0 )
          {
            v201.m128i_i32[2] = 0;
            v201.m128i_i64[0] = 0;
            v201.m128i_i32[3] = v170;
            copy_tinfo_t(&v201, &v174, v84);
            tinfo_property = 11;
            v105 = create_tinfo(&v174, 11, 11, &v201);
            clear_tinfo_t(&v201);
            if ( !v105 )
              goto LABEL_183;
          }
          si128.m128_u64[0] = 0;
          v202 = nullptr;
          v204 = nullptr;
          v208.m128_u64[1] = 1;
          v209 = -1;
          v210 = 0;
          v211 = 0;
          v201 = 0;
          v203 = 0;
          v205 = 0;
          *(_OWORD *)v206 = 0;
          if ( v150 == -1 )
          {
            v201 = _mm_loadu_si128((const __m128i *)(v11 + 48));
            if ( &v202 != (void **)(v11 + 64) )
            {
              v106 = *(_QWORD *)(v11 + 72);
              if ( v106 >= 2 )
              {
                v138 = *(void **)(v11 + 64);
                v202 = (void *)qvector_reserve(&v202, 0, v106, 1);
                *(_QWORD *)&v203 = v106;
                memmove(v202, v138, v106 - 1);
                *((char *)v202 + v106 - 1) = 0;
              }
            }
            if ( &v204 != (void **)(v11 + 88) )
            {
              v107 = *(_QWORD *)(v11 + 96);
              if ( v107 > 1 )
              {
                v137 = *(void **)(v11 + 88);
                if ( *((_QWORD *)&v205 + 1) < v107 )
                  v204 = (void *)qvector_reserve(&v204, v204, v107, 1);
                *(_QWORD *)&v205 = v107;
                memmove(v204, v137, v107 - 1);
                *((char *)v204 + v107 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v205 = 0;
              }
            }
            copy_tinfo_t(v206, v11 + 112, v84);
            *(__m128i *)&v206[8] = _mm_loadu_si128((const __m128i *)(v11 + 120));
            v207 = _mm_loadu_si128((const __m128i *)(v11 + 136));
            si128 = (__m128)_mm_loadu_si128((const __m128i *)(v11 + 152));
            v208 = si128;
            v209 = *(_DWORD *)(v11 + 168);
            v84 = *(_QWORD *)(v11 + 176);
            v211 = *(_BYTE *)(v11 + 184);
            v210 = v84;
          }
          copy_tinfo_t(v206, &v174, v84);
          v201.m128i_i64[0] = v163;
          v201.m128i_i64[1] = 8 * get_tinfo_size(0, v174, 0);
          v151 = v203;
          v85 = v203 - 1;
          if ( (unsigned __int64)v203 <= 1
            && ((sub_169A50((__int64 *)&v202, (__int64)"field_%a", *(double *)si128.m128_u64), (v151 = v203) == 0)
             || (v85 = v203 - 1, (_QWORD)v203 == 1)) )
          {
            *(_QWORD *)&v178 = 0;
          }
          else
          {
            v86 = v202;
            v87 = dest;
            if ( *((_QWORD *)&v178 + 1) < v151 )
            {
              v131 = v202;
              dest = (void *)qvector_reserve(&dest, dest, v151, 1);
              v86 = v131;
              v87 = dest;
            }
            *(_QWORD *)&v178 = v151;
            memmove(v87, v86, v85);
            *((_BYTE *)dest + v85) = 0;
          }
          v88 = set_tinfo_property4(na, 9, &v201, 1, -1, 0);
          if ( v88 == -13 )
          {
            if ( (unsigned int)sub_330780((__int64)"ICON WARNING\nHIDECANCEL\nAUTOHIDE NONE\nDirectly convert to array?") != 1 )
              goto LABEL_168;
            v88 = set_tinfo_property4(na, 9, &v201, 1, -1, 4);
          }
          if ( !v88 )
          {
            tinfo_property = *(_QWORD *)(v11 + 8);
            v150 = find_tinfo_udt_member(&v201, tinfo_property, v155);
            if ( v150 != -1 )
            {
              v186 = _mm_loadu_si128((const __m128i *)&v206[8]);
              v89 = _mm_loadu_si128(&v207);
              v189 = v209;
              v187 = v89;
              si128 = (__m128)_mm_loadu_si128((const __m128i *)&v208);
              v188 = si128;
              clear_tinfo_t(v206);
              if ( v204 )
              {
                *(_QWORD *)&v205 = 0;
                *(double *)si128.m128_u64 = qfree(v204, (const char *)tinfo_property);
              }
              if ( v202 )
              {
                *(_QWORD *)&v203 = 0;
                *(double *)si128.m128_u64 = qfree(v202, (const char *)tinfo_property, *(double *)si128.m128_u64);
              }
              v68 = tinfo_details;
LABEL_102:
              if ( v148 )
              {
                v157 = v68;
                v186.m128i_i64[0] = v186.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL | 0xA;
                v186.m128i_i32[2] = getinf(52);
                v68 = v157;
              }
              v188.m128_i32[3] = srca;
              v189 = v132;
              v71 = v186.m128i_i64[0];
              v70 = v186.m128i_i64[0];
              BYTE1(v71) = v186.m128i_i8[1] & 0xFB;
              if ( (v143 & 2) != 0 )
              {
                BYTE1(v70) = v186.m128i_i8[1] | 4;
                v71 = v70;
              }
              v188.m128_i32[2] = v143 & 0xFFFFFFFD;
              if ( (v143 & 0xFFFFFFFD) != 1 || srca || (v72 = v71, BYTE1(v72) = BYTE1(v71) & 0xEF, v132 != -1) )
              {
                BYTE1(v71) |= 0x10u;
                v72 = v71;
              }
              v186.m128i_i64[0] = v72;
              v158 = v150;
              if ( (v161 & 8) != 0 )
              {
                if ( !v153 && HIBYTE(v185) && v68 )
                {
LABEL_114:
                  v76 = set_tinfo_property4(na, 14, v158, &v186, 0, 0);
                  tinfo_property = v76;
                  if ( v76 )
                    tinfo_details = sub_3AC490(
                                      a1,
                                      v76,
                                      (__int64)"Failed to make array",
                                      si128,
                                      a4,
                                      a5,
                                      a6,
                                      v77,
                                      v78,
                                      a9,
                                      a10);
                  goto LABEL_116;
                }
                v73 = set_tinfo_property4(na, 12, v150, &v174, &v186, 0);
                if ( v73 != -13 )
                  goto LABEL_113;
                if ( (unsigned int)sub_330780((__int64)"ICON WARNING\n"
                                                       "HIDECANCEL\n"
                                                       "AUTOHIDE NONE\n"
                                                       "Directly convert to array?") == 1 )
                {
                  v73 = set_tinfo_property4(na, 12, v150, &v174, &v186, 4);
LABEL_113:
                  if ( !v73 )
                    goto LABEL_114;
                  goto LABEL_215;
                }
                goto LABEL_215;
              }
              v73 = set_tinfo_property4(na, 12, v150, &v174, &v186, 0);
              if ( v73 == -13 )
              {
                if ( (unsigned int)sub_330780((__int64)"ICON WARNING\n"
                                                       "HIDECANCEL\n"
                                                       "AUTOHIDE NONE\n"
                                                       "Directly convert to array?") != 1 )
                  goto LABEL_215;
                v73 = set_tinfo_property4(na, 12, v150, &v174, &v186, 4);
              }
              if ( v73 )
              {
LABEL_215:
                tinfo_property = v73;
                tinfo_details = sub_3AC490(
                                  a1,
                                  v73,
                                  (__int64)"Failed to make array",
                                  si128,
                                  a4,
                                  a5,
                                  a6,
                                  v74,
                                  v75,
                                  a9,
                                  a10);
                goto LABEL_116;
              }
              v109 = &s1;
              if ( (_QWORD)v178 )
                v109 = (const char *)dest;
              v201 = (__m128i)v163;
              v202 = nullptr;
              v203 = 0;
              if ( v109 )
              {
                v152 = v109;
                v110 = strlen(v109);
                v202 = (void *)qvector_reserve(&v202, 0, v110 + 1, 1);
                *(_QWORD *)&v203 = v110 + 1;
                memmove(v202, v152, v110);
                *((_BYTE *)v202 + v110) = 0;
              }
              v204 = nullptr;
              *(_QWORD *)v206 = 0;
              v205 = 0;
              copy_tinfo_t(v206, &v174, v108);
              v211 = 0;
              v209 = -1;
              *(_QWORD *)&v206[8] = 0;
              v208.m128_u64[1] = 1;
              v210 = 0;
              v111 = get_tinfo_size(0, v174, 0);
              v112 = _mm_load_si128(&v186);
              v113 = v170;
              v201.m128i_i64[1] = 8 * v111;
              *(__m128i *)&v206[8] = v112;
              v114 = _mm_load_si128(&v187);
              v209 = v189;
              v207 = v114;
              si128 = (__m128)_mm_load_si128((const __m128i *)&v188);
              v115 = 4 * (v168 >= v170);
              v208 = si128;
              if ( v170 > 1 )
              {
                si128 = 0;
                v116 = "_%llX";
                v180 = 0;
                v179 = nullptr;
                sub_169A50((__int64 *)&v179, (__int64)"_%llX", v163 >> 3);
                v117 = v203 - 1;
                if ( !(_QWORD)v203 )
                  v117 = 0;
                if ( (_QWORD)v180 )
                {
                  v118 = (__int64)v179;
                  v125 = v180 - 1;
                  v119 = (__int64)v179;
                  if ( v117 >= (__int64)v180 - 1 )
                  {
                    v154 = v117 - v125;
                    if ( (_QWORD)v180 != 1 )
                    {
                      v116 = (const char *)v202;
                      v126 = v117 - v125;
                      v127 = &v179[v125 - v117];
                      while ( 1 )
                      {
                        v128 = (char *)v202 + v126;
                        if ( __PAIR128__(v203, v126) == 0 )
                          v128 = &byte_8CBC80;
                        if ( *v128 != v127[v126] )
                          break;
                        if ( v117 == ++v126 )
                        {
                          if ( v154 >= v117 )
                            goto LABEL_205;
                          v129 = v154 + 1;
                          if ( *((_QWORD *)&v203 + 1) < v154 + 1 )
                          {
                            v202 = (void *)qvector_reserve(&v202, v202, v129, 1);
                            v129 = v154 + 1;
                            v116 = (const char *)v202;
                          }
                          *(_QWORD *)&v203 = v129;
                          v116[v154] = 0;
                          v119 = (__int64)v179;
                          break;
                        }
                      }
                    }
                  }
                }
                else
                {
                  v118 = (__int64)v179;
LABEL_205:
                  v119 = v118;
                }
                if ( v119 )
                {
                  *(_QWORD *)&v180 = 0;
                  *(double *)si128.m128_u64 = qfree(v119, v116);
                }
                v113 = v170;
              }
              v120 = set_tinfo_property4(na, 9, &v201, v113, -1, v115);
              if ( v120 == -13 )
              {
                if ( (unsigned int)sub_330780((__int64)"ICON WARNING\n"
                                                       "HIDECANCEL\n"
                                                       "AUTOHIDE NONE\n"
                                                       "Directly convert to array?") != 1 )
                {
LABEL_225:
                  tinfo_property = v120;
                  tinfo_details = sub_3AC490(
                                    a1,
                                    v120,
                                    (__int64)"Failed to make array",
                                    si128,
                                    a4,
                                    a5,
                                    a6,
                                    v121,
                                    v122,
                                    a9,
                                    a10);
                  clear_tinfo_t(v206);
                  if ( v204 )
                  {
                    *(_QWORD *)&v205 = 0;
                    *(double *)si128.m128_u64 = qfree(v204, (const char *)v120);
                  }
                  v102 = v202;
                  if ( !v202 )
                    goto LABEL_116;
                  goto LABEL_175;
                }
                v120 = set_tinfo_property4(na, 9, &v201, v170, -1, 4);
              }
              if ( !v120 )
              {
                clear_tinfo_t(v206);
                if ( v204 )
                {
                  *(_QWORD *)&v205 = 0;
                  *(double *)si128.m128_u64 = qfree(v204, byte_9);
                }
                if ( v202 )
                {
                  *(_QWORD *)&v203 = 0;
                  *(double *)si128.m128_u64 = qfree(v202, byte_9, *(double *)si128.m128_u64);
                }
                goto LABEL_114;
              }
              goto LABEL_225;
            }
            tinfo_details = 0;
LABEL_172:
            clear_tinfo_t(v206);
            if ( v204 )
            {
              *(_QWORD *)&v205 = 0;
              *(double *)si128.m128_u64 = qfree(v204, (const char *)tinfo_property, *(double *)si128.m128_u64);
            }
            v102 = v202;
            if ( !v202 )
              goto LABEL_116;
LABEL_175:
            *(_QWORD *)&v203 = 0;
            qfree(v102, (const char *)tinfo_property, *(double *)si128.m128_u64);
LABEL_116:
            if ( dest )
            {
              *(_QWORD *)&v178 = 0;
              qfree(dest, (const char *)tinfo_property);
            }
            clear_tinfo_t(&v174);
            goto LABEL_119;
          }
LABEL_168:
          si128.m128_u64[0] = 0;
          v180 = 0;
          v179 = nullptr;
          sub_169A50(
            (__int64 *)&v179,
            (__int64)"Failed to make array: Failed to add member at offset %llX to the struct:",
            v163 >> 3);
          v101 = &s1;
          if ( (_QWORD)v180 )
            v101 = v179;
          tinfo_property = v88;
          tinfo_details = sub_3AC490(a1, v88, (__int64)v101, (__m128)0LL, a4, a5, a6, v99, v100, a9, a10);
          if ( v179 )
          {
            *(_QWORD *)&v180 = 0;
            *(double *)si128.m128_u64 = qfree(v179, (const char *)v88);
          }
          goto LABEL_172;
        }
LABEL_28:
        src = -1;
        v27 = 1;
        v165 = 8;
        tinfo_size = 1;
        v136 = 0;
        goto LABEL_29;
      }
LABEL_27:
      v150 = -1;
      goto LABEL_28;
    }
    v26 = *v25;
    goto LABEL_26;
  }
LABEL_43:
  tinfo_details = 0;
LABEL_44:
  v41 = v181;
  if ( v181 )
  {
    v42 = v182;
    if ( (_QWORD)v182 )
    {
      v43 = 0;
      do
      {
        v44 = (_QWORD *)(v41 + 144 * v43);
        clear_tinfo_t(v44 + 8);
        v45 = v44[5];
        if ( v45 )
        {
          v44[6] = 0;
          qfree(v45, (const char *)tinfo_property);
        }
        v46 = v44[2];
        if ( v46 )
        {
          v44[3] = 0;
          qfree(v46, (const char *)tinfo_property);
        }
        ++v43;
        v41 = v181;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v182 = 0;
    qfree(v41, (const char *)tinfo_property);
  }
  return tinfo_details;
}
