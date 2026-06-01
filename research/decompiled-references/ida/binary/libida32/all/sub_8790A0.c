__int64 __fastcall sub_8790A0(
        const __m128i *a1,
        void *a2,
        size_t a3,
        size_t a4,
        int a5,
        __m128i *a6,
        const __m128i *a7,
        __int64 a8,
        size_t n,
        void *a10,
        size_t *a11)
{
  const __m128i *v14; // rbp
  size_t v15; // rsi
  int v16; // r13d
  __int64 v17; // rcx
  const void *v18; // rsi
  signed int v19; // edi
  int v20; // r12d
  __m128i *v21; // rax
  __m128i *v22; // rax
  int v23; // eax
  size_t *v24; // r12
  unsigned int v25; // eax
  size_t v26; // r15
  size_t v27; // r11
  int v29; // r13d
  size_t v30; // rax
  size_t v31; // rdx
  size_t v32; // rdi
  size_t v33; // r14
  size_t v34; // rdx
  bool v35; // cf
  size_t v36; // rdx
  size_t v37; // rdx
  size_t v38; // rdx
  size_t v39; // rax
  size_t v40; // rax
  int v41; // eax
  __int16 v42; // bp
  size_t v43; // r12
  size_t v44; // r14
  __int64 v45; // r11
  unsigned __int8 *v46; // rdx
  unsigned __int8 *v47; // r10
  unsigned __int64 v48; // rax
  __int64 (__fastcall *v49)(int *, __int64); // rax
  __int64 v50; // rsi
  size_t v51; // rcx
  size_t v52; // rdx
  __int64 v53; // rdx
  const __m128i *v54; // rax
  __int64 v55; // rbp
  size_t *v56; // r11
  int v57; // r12d
  const __m128i *v58; // r13
  unsigned __int8 v59; // al
  unsigned __int8 *v60; // rdi
  unsigned __int8 v61; // al
  __int32 v62; // r10d
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // rsi
  int v74; // eax
  _BYTE *v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r10d
  __int64 v79; // r8
  unsigned __int8 *v80; // rsi
  int v81; // eax
  unsigned __int64 v82; // r9
  char v83; // al
  _BYTE *v84; // rdi
  unsigned __int8 *v85; // r10
  size_t v86; // r14
  __int32 v87; // r9d
  int v88; // r8d
  unsigned __int64 v89; // rax
  unsigned __int8 *v90; // r10
  unsigned __int8 *v91; // rax
  bool v92; // zf
  __int64 v93; // rax
  int v94; // eax
  int v95; // eax
  int v96; // r8d
  unsigned int v97; // eax
  char *v98; // rdi
  char *v99; // r10
  size_t v100; // r10
  __int64 v101; // r10
  int v102; // eax
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // eax
  __int64 v107; // rax
  size_t *v108; // rdx
  unsigned __int16 v109; // ax
  __int64 v110; // rax
  unsigned __int8 *v111; // rax
  unsigned __int64 v112; // r10
  int v113; // eax
  char *v114; // rdi
  _BYTE *v115; // rdx
  unsigned __int64 v116; // rax
  unsigned __int8 *v117; // r9
  unsigned __int8 *v118; // rax
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rsi
  size_t *v123; // rax
  int v124; // eax
  int v125; // esi
  int v126; // r8d
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned __int8 v129; // al
  unsigned __int8 *v130; // rdi
  unsigned __int8 *v131; // rdx
  __int64 v132; // rdi
  int v133; // eax
  unsigned __int64 v134; // rax
  int v135; // esi
  unsigned __int8 *v136; // rax
  unsigned __int8 *v137; // rcx
  unsigned __int8 **v138; // rsi
  int v139; // eax
  _BYTE *v140; // rdx
  char *v141; // rdx
  _BYTE *v142; // rdx
  unsigned __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int8 *v146; // rax
  unsigned int v147; // [rsp-20h] [rbp-318h]
  int v148; // [rsp+Ch] [rbp-2ECh]
  int v149; // [rsp+Ch] [rbp-2ECh]
  unsigned __int8 *src; // [rsp+10h] [rbp-2E8h]
  int v151; // [rsp+18h] [rbp-2E0h]
  __int64 v152; // [rsp+18h] [rbp-2E0h]
  __int64 v153; // [rsp+20h] [rbp-2D8h]
  size_t v154; // [rsp+20h] [rbp-2D8h]
  size_t v155; // [rsp+28h] [rbp-2D0h]
  unsigned __int8 *v157; // [rsp+38h] [rbp-2C0h] BYREF
  __int64 (__fastcall *v158)(_BYTE *, __int64, _BYTE *, __int64); // [rsp+40h] [rbp-2B8h]
  size_t v159; // [rsp+48h] [rbp-2B0h]
  size_t v160; // [rsp+50h] [rbp-2A8h]
  void *s1; // [rsp+58h] [rbp-2A0h]
  int v162; // [rsp+60h] [rbp-298h]
  unsigned int v163; // [rsp+64h] [rbp-294h]
  const __m128i *v164; // [rsp+68h] [rbp-290h]
  void *dest; // [rsp+70h] [rbp-288h]
  size_t v166; // [rsp+78h] [rbp-280h]
  size_t v167; // [rsp+80h] [rbp-278h]
  __m128i *v168; // [rsp+88h] [rbp-270h]
  size_t v169; // [rsp+90h] [rbp-268h]
  size_t *v170; // [rsp+98h] [rbp-260h]
  __int64 v171; // [rsp+A0h] [rbp-258h]
  __int64 v172; // [rsp+A8h] [rbp-250h]
  unsigned int v173; // [rsp+B0h] [rbp-248h]
  bool v174; // [rsp+B7h] [rbp-241h]
  size_t *v175; // [rsp+B8h] [rbp-240h]
  unsigned __int8 *v176; // [rsp+C0h] [rbp-238h]
  unsigned __int64 v177; // [rsp+C8h] [rbp-230h]
  unsigned __int8 **v178; // [rsp+D0h] [rbp-228h]
  unsigned __int8 *v179; // [rsp+D8h] [rbp-220h]
  unsigned __int8 *v180; // [rsp+E0h] [rbp-218h]
  unsigned __int8 *v181; // [rsp+E8h] [rbp-210h]
  size_t *v182; // [rsp+F0h] [rbp-208h]
  size_t v183; // [rsp+F8h] [rbp-200h] BYREF
  int v184; // [rsp+100h] [rbp-1F8h] BYREF
  unsigned int v185; // [rsp+104h] [rbp-1F4h] BYREF
  unsigned __int8 *v186; // [rsp+108h] [rbp-1F0h] BYREF
  unsigned __int8 *v187; // [rsp+110h] [rbp-1E8h] BYREF
  unsigned __int64 v188; // [rsp+118h] [rbp-1E0h] BYREF
  __m128i v189; // [rsp+120h] [rbp-1D8h] BYREF
  __int64 v190; // [rsp+130h] [rbp-1C8h]
  int v191; // [rsp+140h] [rbp-1B8h] BYREF
  void *v192; // [rsp+148h] [rbp-1B0h]
  void *v193; // [rsp+150h] [rbp-1A8h]
  size_t v194; // [rsp+158h] [rbp-1A0h]
  size_t v195; // [rsp+160h] [rbp-198h]
  size_t *v196; // [rsp+168h] [rbp-190h]
  int v197; // [rsp+170h] [rbp-188h]
  int v198; // [rsp+174h] [rbp-184h]
  _QWORD v199[21]; // [rsp+180h] [rbp-178h]
  char v200; // [rsp+229h] [rbp-CFh] BYREF
  unsigned __int8 v201[6]; // [rsp+22Ah] [rbp-CEh] BYREF
  _BYTE v202[136]; // [rsp+230h] [rbp-C8h] BYREF
  unsigned __int64 v203; // [rsp+2B8h] [rbp-40h]

  v164 = a1;
  v14 = a7;
  src = (unsigned __int8 *)a8;
  v183 = a4;
  dest = a10;
  v170 = a11;
  v203 = __readfsqword(0x28u);
  v15 = *a11;
  v200 = -51;
  v184 = 0;
  v167 = v15;
  *a11 = -1;
  if ( a7 )
  {
    v158 = (__int64 (__fastcall *)(_BYTE *, __int64, _BYTE *, __int64))a7[4].m128i_i64[1];
    v171 = a7[5].m128i_i64[0];
  }
  else
  {
    v171 = 0;
    v158 = nullptr;
  }
  if ( (a5 & 0x30) != 0 )
  {
    LODWORD(v17) = -34;
    return (unsigned int)v17;
  }
  if ( a8 )
  {
    if ( n == -1 )
      n = sub_877290(a8);
    v157 = (unsigned __int8 *)(n + a8);
    if ( a2 )
    {
LABEL_8:
      s1 = a2;
      if ( a3 == -1 )
        a3 = sub_877290((__int64)a2);
      goto LABEL_10;
    }
  }
  else
  {
    if ( n )
      goto LABEL_299;
    v157 = (unsigned __int8 *)&v200;
    src = (unsigned __int8 *)&v200;
    if ( a2 )
      goto LABEL_8;
  }
  if ( a3 )
    goto LABEL_299;
  s1 = &v200;
LABEL_10:
  v16 = a5 & 0x10000;
  if ( (a5 & 0x10000) == 0 )
    goto LABEL_29;
  if ( !a6 )
  {
LABEL_299:
    LODWORD(v17) = -51;
    return (unsigned int)v17;
  }
  if ( v16 )
  {
    LODWORD(v17) = a6[7].m128i_i32[0];
    if ( (int)v17 < -1 )
      return (unsigned int)v17;
    if ( a6[6].m128i_i8[8] == 1 )
    {
      LODWORD(v17) = -41;
      return (unsigned int)v17;
    }
    if ( (const __m128i *)a6[1].m128i_i64[1] != v164 )
    {
      LODWORD(v17) = -71;
      return (unsigned int)v17;
    }
    if ( a6[4].m128i_i64[0] != a3
      || (v18 = (const void *)a6[2].m128i_i64[0], v18 != a2)
      && ((a6[6].m128i_i8[9] & 1) == 0 || a3 && memcmp(s1, v18, a3)) )
    {
      LODWORD(v17) = -72;
      return (unsigned int)v17;
    }
    if ( a6[4].m128i_i64[1] != v183 )
    {
      LODWORD(v17) = -73;
      return (unsigned int)v17;
    }
    if ( (a5 & 0xFFFC60FF) != a6[6].m128i_i32[3] )
    {
      LODWORD(v17) = -74;
      return (unsigned int)v17;
    }
    if ( a7 )
    {
      v190 = a7[1].m128i_i64[0];
      v189 = _mm_loadu_si128(a7);
    }
    else
    {
      v69 = v164[1].m128i_i64[0];
      v189 = _mm_loadu_si128(v164);
      v190 = v69;
    }
    v19 = a6[6].m128i_u16[5];
    v20 = v164[8].m128i_u16[4] + 1;
    if ( v20 > v19 )
      v20 = a6[6].m128i_u16[5];
    v21 = sub_876B20(v19, &v189);
    if ( v21 )
    {
      v22 = (__m128i *)memcpy(v21, a6, 8LL * (2 * v20 + 15));
      v22[6].m128i_i8[9] &= ~1u;
      a6 = v22;
      v22[3].m128i_i64[0] = 0;
      v22[3].m128i_i64[1] = 0;
LABEL_28:
      v23 = a5;
      v168 = a6;
      BYTE1(v23) = BYTE1(a5) & 0xBF;
      v148 = v23;
      goto LABEL_31;
    }
LABEL_139:
    LODWORD(v17) = -48;
    return (unsigned int)v17;
  }
LABEL_29:
  if ( !a6 )
  {
    if ( a7 )
    {
      v190 = a7[1].m128i_i64[0];
      v189 = _mm_loadu_si128(a7);
    }
    else
    {
      v70 = v164[1].m128i_i64[0];
      v189 = _mm_loadu_si128(v164);
      v190 = v70;
    }
    a6 = sub_876B70(v164, &v189);
    if ( a6 )
      goto LABEL_28;
    goto LABEL_139;
  }
  v148 = a5;
  v168 = nullptr;
LABEL_31:
  v24 = (size_t *)sub_876C30((__int64)a6);
  v25 = sub_876C40((__int64)a6);
  v196 = v24;
  v26 = v183;
  v163 = v25;
  v191 = 0;
  v192 = s1;
  v193 = dest;
  if ( a3 < v183 )
  {
    a6[5].m128i_i64[0] = 0;
    LODWORD(v17) = -33;
    goto LABEL_37;
  }
  v162 = a5 & 0x20000;
  if ( (a5 & 0x20000) != 0 )
  {
    v155 = v167;
    v26 = 0;
    v27 = 0;
    v151 = 0;
  }
  else if ( v167 >= v183 )
  {
    memcpy(dest, s1, v183);
    v151 = 0;
    v27 = 0;
    v155 = v167 - v183;
  }
  else
  {
    if ( (v148 & 0x1000) == 0 )
      goto LABEL_83;
    v155 = v167;
    v26 = 0;
    v151 = 1;
    v27 = v183 - v167;
  }
  v189.m128i_i32[1] = 0;
  v173 = v148 & 0xFFFC60FF;
  v174 = v158 == nullptr;
  if ( v16 )
  {
    LODWORD(v17) = a6[7].m128i_i32[0];
    LODWORD(v160) = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( (_DWORD)v17 == -1 )
      goto LABEL_74;
  }
  else
  {
    v153 = v27;
    v29 = 0;
    v33 = 0;
    LODWORD(v160) = 0;
    v159 = 0;
LABEL_73:
    v41 = sub_875840((__int64)v164, (char *)s1, a3, v183, v184 | v173, (__int64)a6, v14);
    v31 = v33;
    LODWORD(v17) = v41;
    v27 = v153;
    v30 = v159;
    if ( (_DWORD)v17 == -1 )
      goto LABEL_74;
  }
  if ( (int)v17 < 0 )
    goto LABEL_37;
  v32 = v24[1];
  v33 = *v24;
  v159 = v32;
  if ( v32 < v33 || v33 < v183 )
  {
    LODWORD(v17) = -60;
    goto LABEL_37;
  }
  if ( v29 )
  {
    if ( v30 >= v32 && (v31 >= v30 || v32 != v30 || v32 != v33) )
    {
      LODWORD(v17) = -65;
      goto LABEL_37;
    }
    if ( v29 == 0x7FFFFFFF )
    {
      LODWORD(v17) = -61;
      goto LABEL_37;
    }
  }
  ++v29;
  if ( !(_DWORD)v17 )
    LODWORD(v17) = v163;
  if ( v162 )
  {
    v194 = v26;
    v197 = v17;
    v186 = src;
    if ( (v148 & 0x8000) == 0 )
      goto LABEL_111;
    if ( v151 )
      goto LABEL_63;
    goto LABEL_86;
  }
  v34 = v33 - v183;
  if ( !v151 )
  {
    if ( v155 < v34 )
    {
      if ( (v148 & 0x1000) == 0 )
        goto LABEL_83;
      v194 = v26;
      v197 = v17;
      v27 = v34 - v155;
      v186 = src;
      if ( (v148 & 0x8000) == 0 )
      {
        v151 = 1;
        goto LABEL_111;
      }
LABEL_63:
      if ( __CFADD__(n, v27) )
        goto LABEL_270;
      v153 = n + v27;
      if ( v14 )
      {
        v37 = n;
        if ( v14[3].m128i_i64[1] )
          goto LABEL_66;
      }
      goto LABEL_106;
    }
    LODWORD(v172) = v17;
    v169 = v27;
    v166 = v183;
    v154 = v33 - v183;
    memcpy((char *)dest + v26, (char *)s1 + v183, v34);
    v26 += v154;
    v155 += v166 - v33;
    v194 = v26;
    v27 = v169;
    v197 = v172;
    v186 = src;
    if ( (v148 & 0x8000) == 0 )
      goto LABEL_111;
LABEL_86:
    if ( v155 < n )
    {
      if ( (v148 & 0x1000) != 0 )
      {
        v153 = n - v155;
        if ( v14 && v14[3].m128i_i64[1] )
          goto LABEL_90;
        goto LABEL_106;
      }
      goto LABEL_83;
    }
    v152 = v27;
    memcpy((char *)dest + v26, src, n);
    v155 -= n;
    v26 += n;
    if ( !v14 )
    {
      v153 = v152;
      v151 = 0;
      goto LABEL_70;
    }
    v49 = (__int64 (__fastcall *)(int *, __int64))v14[3].m128i_i64[1];
    v153 = v152;
    if ( v49 )
      goto LABEL_101;
    goto LABEL_156;
  }
  v35 = __CFADD__(v27, v34);
  v36 = v27 + v34;
  if ( v35 )
    goto LABEL_270;
  v194 = v26;
  v27 = v36;
  v197 = v17;
  v186 = src;
  if ( (v148 & 0x8000) != 0 )
    goto LABEL_63;
LABEL_111:
  v54 = v14;
  v46 = src;
  v153 = v27;
  LODWORD(v166) = 0;
  v55 = 0;
  v47 = (unsigned __int8 *)v27;
  v56 = v24;
  v172 = 0;
  v57 = v29;
  v58 = v54;
  v169 = 0;
LABEL_112:
  while ( 2 )
  {
    if ( v46 >= v157 )
      goto LABEL_94;
    v59 = *v46;
    if ( (_DWORD)v160 )
    {
      if ( v59 == 92 && v46 < v157 - 1 && v46[1] == 69 )
      {
        v186 = v46 + 2;
        if ( v46 + 2 < v157 )
        {
          v59 = v46[2];
          v175 = (size_t *)v47;
          v46 += 2;
          goto LABEL_120;
        }
        goto LABEL_93;
      }
      goto LABEL_123;
    }
    v175 = (size_t *)v47;
    while ( 1 )
    {
LABEL_120:
      while ( v59 != 36 )
      {
        if ( (v148 & 0x200) == 0 || v59 != 92 )
        {
          LODWORD(v160) = 0;
          v47 = (unsigned __int8 *)v175;
LABEL_123:
          v60 = v46;
          goto LABEL_124;
        }
        if ( v46 >= v157 - 1 )
          goto LABEL_228;
        v61 = v46[1];
        if ( v61 == 108 )
        {
          LODWORD(v160) = 1;
          v62 = 1;
          v186 = v46 + 2;
          if ( v46 + 4 < v157 && v46[2] == 92 && v46[3] == 85 )
          {
            v186 = v46 + 4;
            v62 = 0;
            LODWORD(v160) = 4;
          }
LABEL_147:
          if ( v158 )
          {
            if ( (_DWORD)v166 )
            {
              v63 = v153 + v26 - v169 - v172;
              if ( v63 )
              {
                if ( v151 )
                {
                  v64 = (v63 >> 3) + 10;
                  v35 = __CFADD__(v153, v64);
                  v65 = v153 + v64;
                  if ( v35 )
                    goto LABEL_270;
                  v153 = v65;
                }
                else
                {
                  v155 += v26 - v169;
                  v176 = (unsigned __int8 *)v56;
                  v189.m128i_i32[0] = v166;
                  LODWORD(v172) = v62;
                  v134 = sub_878E60((_BYTE *)dest + v169, v63, v155, v189.m128i_i32, v158, v171);
                  if ( v134 == -1 )
                    goto LABEL_414;
                  v62 = v172;
                  v56 = (size_t *)v176;
                  if ( v155 >= v134 )
                  {
                    v155 -= v134;
                    v26 = v134 + v169;
                  }
                  else
                  {
                    if ( (v148 & 0x1000) == 0 )
                      goto LABEL_83;
                    v151 = 1;
                    v26 = v169;
                    v153 = v134 - v155;
                  }
                }
              }
            }
          }
          v46 = v186;
          v189.m128i_i32[1] = v62;
          if ( v186 >= v157 )
          {
            v66 = v160;
            v169 = v26;
            LODWORD(v160) = 0;
            v47 = (unsigned __int8 *)v175;
            LODWORD(v166) = v66;
            v172 = v153;
            goto LABEL_94;
          }
          v169 = v26;
          v59 = *v186;
          LODWORD(v166) = v160;
          v172 = v153;
        }
        else
        {
          if ( v61 <= 0x6Cu )
          {
            if ( v61 == 76 )
            {
              LODWORD(v160) = 1;
              v62 = 0;
              v186 = v46 + 2;
              goto LABEL_147;
            }
            if ( v61 == 85 )
            {
              LODWORD(v160) = 2;
              v62 = 0;
              v186 = v46 + 2;
              goto LABEL_147;
            }
            goto LABEL_228;
          }
          if ( v61 == 117 )
          {
            LODWORD(v160) = 3;
            v62 = 1;
            v186 = v46 + 2;
            if ( v46 + 4 < v157 && v46[2] == 92 )
            {
              if ( v46[3] == 76 )
              {
                v186 = v46 + 4;
                v62 = 0;
              }
              else
              {
                LODWORD(v160) = 3;
                v62 = 1;
              }
            }
            goto LABEL_147;
          }
LABEL_228:
          v176 = (unsigned __int8 *)v56;
          v186 = v46 + 1;
          v147 = v164[8].m128i_u16[4];
          v87 = v164[6].m128i_i32[1];
          v88 = v164[6].m128i_i32[0];
          v177 = (unsigned __int64)&v188;
          v89 = sub_839AC0(&v186, v157, &v185, (int *)&v188, v88, v87, v147, 0, 0);
          LODWORD(v160) = v188;
          if ( (_DWORD)v188 )
            goto LABEL_437;
          v56 = (size_t *)v176;
          if ( (_DWORD)v89 == 25 )
          {
            v62 = 0;
            goto LABEL_147;
          }
          v90 = (unsigned __int8 *)v177;
          if ( (int)v89 > 25 )
          {
            if ( (_DWORD)v89 != 26 )
            {
              if ( (_DWORD)v89 == 27 )
              {
                v82 = (unsigned __int64)v186;
                if ( v186 < v157 && *v186 == 60 )
                {
                  v82 = (unsigned __int64)(v186 + 1);
                  v186 = (unsigned __int8 *)v82;
                  if ( v82 < (unsigned __int64)v157 )
                  {
                    v91 = (unsigned __int8 *)v82;
                    while ( (*(_BYTE *)(v164[1].m128i_i64[1] + *v91 + 832) & 0x10) != 0 )
                    {
                      if ( v157 == ++v91 )
                      {
                        v82 = (unsigned __int64)v157;
                        goto LABEL_416;
                      }
                    }
                    if ( (__int64)&v91[-v82] <= 128 && (unsigned __int8 *)v82 != v91 )
                    {
                      v186 = v91;
                      if ( v91 < v157 )
                      {
                        v92 = *v91 == 62;
                        v177 = (unsigned __int64)v176;
                        v176 = v90;
                        if ( v92 )
                        {
                          v160 = (size_t)&v91[-v82];
                          v186 = v91 + 1;
                          v93 = __memcpy_chk();
                          v56 = (size_t *)v177;
                          v85 = v176;
                          v84 = (_BYTE *)v93;
                          v202[v160] = 0;
                          goto LABEL_244;
                        }
                      }
                      v82 = (unsigned __int64)v91;
                      goto LABEL_417;
                    }
                    v82 = (unsigned __int64)v91;
                  }
LABEL_416:
                  v186 = (unsigned __int8 *)v82;
                }
              }
              else
              {
LABEL_437:
                v82 = (unsigned __int64)v186;
              }
LABEL_417:
              LODWORD(v17) = -57;
              goto LABEL_285;
            }
            LODWORD(v160) = 1;
            v47 = (unsigned __int8 *)v175;
            v46 = v186;
            goto LABEL_112;
          }
          if ( (unsigned int)v89 > 0x15 )
          {
            if ( (v89 & 0x80000000) == 0LL )
              goto LABEL_437;
            LODWORD(v160) = ~(_DWORD)v89;
            v139 = sub_87B950(a6, (unsigned int)~(_DWORD)v89, v177);
            v56 = (size_t *)v176;
            LODWORD(v17) = v139;
            if ( v139 >= 0 )
            {
              v125 = v160;
LABEL_356:
              v108 = &v56[2 * v125];
              v107 = 2 * v125 + 1;
LABEL_278:
              v98 = (char *)s1 + *v108;
              v99 = (char *)s1 + v56[v107];
LABEL_257:
              v100 = v99 - v98;
              if ( !(_DWORD)v166 || !v174 )
              {
                if ( v151 )
                {
                  v35 = __CFADD__(v153, v100);
                  v101 = v153 + v100;
                  if ( v35 )
                    goto LABEL_270;
                  v153 = v101;
                }
                else if ( v155 >= v100 )
                {
                  v160 = v100;
                  v176 = (unsigned __int8 *)v56;
                  memcpy((char *)dest + v26, v98, v100);
                  v56 = (size_t *)v176;
                  v155 -= v160;
                  v26 += v160;
                }
                else
                {
                  if ( (v148 & 0x1000) == 0 )
                    goto LABEL_83;
                  v151 = 1;
                  v153 = v100 - v155;
                }
                goto LABEL_262;
              }
              v115 = (char *)dest + v26;
              if ( v151 )
              {
                v160 = (size_t)v56;
                v189.m128i_i32[0] = v166;
                v127 = sub_878D00((unsigned __int8 *)v98, v100, v115, 0, v189.m128i_i32, (__int64)v164);
                LODWORD(v166) = v189.m128i_i32[0];
                v35 = __CFADD__(v153, v127);
                v105 = v153 + v127;
                if ( v35 )
                  goto LABEL_270;
                goto LABEL_365;
              }
              v160 = (size_t)v56;
              v189.m128i_i32[0] = v166;
              v116 = sub_878D00((unsigned __int8 *)v98, v100, v115, v155, v189.m128i_i32, (__int64)v164);
              v56 = (size_t *)v160;
              LODWORD(v166) = v189.m128i_i32[0];
              if ( v155 >= v116 )
                goto LABEL_410;
              if ( (v148 & 0x1000) == 0 )
                goto LABEL_83;
              v151 = 1;
              v153 = v116 - v155;
              goto LABEL_262;
            }
LABEL_311:
            if ( (_DWORD)v17 == -49 )
            {
              if ( (v148 & 0x800) == 0 )
                goto LABEL_396;
              goto LABEL_313;
            }
LABEL_312:
            if ( (_DWORD)v17 != -55 )
              goto LABEL_396;
LABEL_313:
            v82 = (unsigned __int64)v186;
LABEL_283:
            if ( (v148 & 0x400) == 0 )
            {
              LODWORD(v17) = -55;
              goto LABEL_285;
            }
LABEL_254:
            if ( v82 >= (unsigned __int64)v157 )
              goto LABEL_92;
            v59 = *(_BYTE *)v82;
            v46 = (unsigned __int8 *)v82;
          }
          else
          {
            v128 = 2097185;
            if ( !_bittest64(&v128, v89) )
              goto LABEL_437;
            if ( (_DWORD)v89 == 5 )
            {
              v185 = 8;
              v129 = 8;
            }
            else if ( (_DWORD)v89 == 21 )
            {
              v185 = 11;
              v129 = 11;
            }
            else
            {
              v129 = v185;
            }
            v201[0] = v129;
            if ( (_DWORD)v166 && v174 )
            {
              v142 = (char *)dest + v26;
              if ( v151 )
              {
                v189.m128i_i32[0] = v166;
                v144 = sub_878D00(v201, 1, v142, 0, v189.m128i_i32, (__int64)v164);
                v35 = __CFADD__(v153, v144);
                v145 = v153 + v144;
                if ( v35 )
                  goto LABEL_270;
                v153 = v145;
                v46 = v186;
                v56 = (size_t *)v176;
                LODWORD(v166) = v189.m128i_i32[0];
                if ( v186 >= v157 )
                {
LABEL_376:
                  v47 = (unsigned __int8 *)v175;
                  goto LABEL_94;
                }
                goto LABEL_263;
              }
              v160 = (size_t)v176;
              v189.m128i_i32[0] = v166;
              v143 = sub_878D00(v201, 1, v142, v155, v189.m128i_i32, (__int64)v164);
              v56 = (size_t *)v160;
              LODWORD(v166) = v189.m128i_i32[0];
              if ( v155 >= v143 )
              {
                v155 -= v143;
                v26 += v143;
                v46 = v186;
                if ( v186 >= v157 )
                  goto LABEL_92;
                goto LABEL_263;
              }
              if ( (v148 & 0x1000) == 0 )
                goto LABEL_83;
              v46 = v186;
              v153 = v143 - v155;
              if ( v186 >= v157 )
              {
                v151 = 1;
                v47 = (unsigned __int8 *)v175;
                LODWORD(v160) = 0;
                goto LABEL_94;
              }
              v151 = 1;
              v59 = *v186;
            }
            else
            {
              if ( v151 )
              {
                if ( v153 == -1 )
                  goto LABEL_270;
                v46 = v186;
                ++v153;
                if ( v186 >= v157 )
                  goto LABEL_376;
                goto LABEL_263;
              }
              if ( v155 )
              {
                --v155;
                *((_BYTE *)dest + v26++) = v129;
                goto LABEL_262;
              }
              if ( (v148 & 0x1000) == 0 )
                goto LABEL_83;
              v46 = v186;
              if ( v186 >= v157 )
              {
                v151 = 1;
                v47 = (unsigned __int8 *)v175;
                LODWORD(v160) = 0;
                v153 = 1;
LABEL_94:
                if ( !(_DWORD)v55 )
                {
                  v14 = v58;
                  v29 = v57;
                  v24 = v56;
                  v27 = (size_t)v47;
                  if ( !v158 || !(_DWORD)v166 || (v48 = v153 + v26 - v169 - v172) == 0 )
                  {
                    if ( v14 )
                    {
                      v49 = (__int64 (__fastcall *)(int *, __int64))v14[3].m128i_i64[1];
                      if ( v49 )
                      {
                        if ( !v151 )
                          goto LABEL_101;
LABEL_90:
                        v37 = v153 - v27;
LABEL_66:
                        v35 = __CFADD__(v26 - v194, v37);
                        v38 = v26 - v194 + v37;
                        if ( !v35 )
                        {
                          v39 = v24[1] - *v24;
                          if ( v38 < v39 )
                          {
                            v40 = v39 - v38;
                            if ( !__CFADD__(v40, v153) )
                            {
                              v153 += v40;
                              v151 = 1;
                              goto LABEL_70;
                            }
LABEL_270:
                            LODWORD(v17) = -70;
                            goto LABEL_37;
                          }
                        }
LABEL_106:
                        v151 = 1;
                      }
                    }
LABEL_70:
                    if ( (v148 & 0x100) != 0 && (unsigned int)sub_876C50((__int64)a6, &v183, &v184) )
                    {
                      v189.m128i_i32[1] = 0;
                      goto LABEL_73;
                    }
                    v27 = v153;
                    v183 = v24[1];
LABEL_74:
                    v42 = v148 & 0x9F00;
                    if ( !v162 )
                    {
LABEL_75:
                      v43 = v183;
                      v44 = a3 - v183;
                      if ( !v151 )
                      {
                        if ( v155 < v44 )
                        {
                          if ( (v42 & 0x1000) != 0 )
                          {
                            v201[0] = 0;
                            v27 = v44 - v155;
                            goto LABEL_79;
                          }
LABEL_83:
                          LODWORD(v17) = -48;
                          goto LABEL_37;
                        }
                        v114 = (char *)dest + v26;
                        v26 += v44;
                        memcpy(v114, (char *)s1 + v183, a3 - v183);
                        v201[0] = 0;
                        v155 += v43 - a3;
LABEL_192:
                        if ( v155 )
                        {
                          LODWORD(v17) = v29;
                          *((_BYTE *)dest + v26) = 0;
                          *v170 = v26;
                          goto LABEL_37;
                        }
                        v45 = 1;
                        if ( (v42 & 0x1000) == 0 )
                          goto LABEL_83;
LABEL_81:
                        if ( __CFADD__(v45, v167) )
                          goto LABEL_270;
                        *v170 = v45 + v167;
                        goto LABEL_83;
                      }
                      v35 = __CFADD__(v27, v44);
                      v86 = v27 + v44;
                      if ( v35 )
                        goto LABEL_270;
                      v201[0] = 0;
                      v27 = v86;
LABEL_79:
                      if ( v27 == -1 )
                        goto LABEL_270;
                      v45 = v27 + 1;
                      goto LABEL_81;
                    }
LABEL_191:
                    v201[0] = 0;
                    if ( !v151 )
                      goto LABEL_192;
                    goto LABEL_79;
                  }
                  if ( v151 )
                  {
                    v71 = (v48 >> 3) + 10;
                    v72 = v71 + v153;
                    if ( __CFADD__(v71, v153) )
                      goto LABEL_270;
                    v153 += v71;
                    if ( v14 && v14[3].m128i_i64[1] )
                    {
                      v37 = v72 - (_QWORD)v47;
                      goto LABEL_66;
                    }
                    goto LABEL_70;
                  }
                  v155 += v26 - v169;
                  v172 = (__int64)v47;
                  v189.m128i_i32[0] = v166;
                  v67 = sub_878E60((_BYTE *)dest + v169, v48, v155, v189.m128i_i32, v158, v171);
                  if ( v67 == -1 )
                  {
LABEL_414:
                    LODWORD(v17) = -69;
                    goto LABEL_37;
                  }
                  if ( v155 < v67 )
                  {
                    if ( (v148 & 0x1000) != 0 )
                    {
                      v68 = v67 - v155;
                      v153 = v68;
                      if ( v14 && v14[3].m128i_i64[1] )
                      {
                        v26 = v169;
                        v37 = v68 - v172;
                        goto LABEL_66;
                      }
                      v151 = 1;
                      v26 = v169;
                      goto LABEL_70;
                    }
                    goto LABEL_83;
                  }
                  v155 -= v67;
                  v26 = v67 + v169;
                  if ( !v14 )
                    goto LABEL_70;
                  v49 = (__int64 (__fastcall *)(int *, __int64))v14[3].m128i_i64[1];
                  if ( !v49 )
                    goto LABEL_70;
LABEL_101:
                  v50 = v14[4].m128i_i64[0];
                  v198 = v29;
                  v195 = v26;
                  v151 = v49(&v191, v50);
                  if ( !v151 )
                    goto LABEL_70;
                  v155 += v195 - v194;
                  v26 += v194 - v195;
                  if ( v162 )
                  {
                    if ( v151 < 0 )
                    {
                      v151 = 0;
                      v27 = v153;
                      v183 = v24[1];
                      v42 = v148 & 0x9E00;
                      goto LABEL_191;
                    }
                  }
                  else
                  {
                    v51 = *v24;
                    v52 = v24[1] - *v24;
                    if ( v155 < v52 )
                    {
                      if ( (v148 & 0x1000) != 0 )
                      {
                        v53 = v52 - v155;
                        v153 = v53;
                        if ( v151 >= 0 )
                          goto LABEL_106;
                        v183 = v24[1];
                        v27 = v53;
                        v151 = 1;
                        v42 = v148 & 0x9E00;
                        goto LABEL_75;
                      }
                      goto LABEL_83;
                    }
                    v172 = v24[1];
                    v169 = v51;
                    v166 = v52;
                    memcpy((char *)dest + v26, (char *)s1 + v51, v52);
                    v26 += v166;
                    v155 += v169 - v172;
                    if ( v151 < 0 )
                    {
                      v151 = 0;
                      v27 = v153;
                      v183 = v24[1];
                      v42 = v148 & 0x9E00;
                      goto LABEL_75;
                    }
                  }
LABEL_156:
                  v151 = 0;
                  goto LABEL_70;
                }
                v157 = (unsigned __int8 *)v199[(unsigned int)(v55 - 1)];
                v46 = (unsigned __int8 *)v199[(unsigned int)(v55 - 2)];
                v55 = (unsigned int)(v55 - 2);
                v186 = v46;
                goto LABEL_112;
              }
              v153 = 1;
              v59 = *v186;
              v151 = 1;
            }
          }
        }
      }
      v73 = (unsigned __int64)(v46 + 1);
      v186 = v46 + 1;
      if ( v46 + 1 >= v157 )
        goto LABEL_287;
      v74 = v46[1];
      if ( (_BYTE)v74 != 43 )
        break;
      v82 = (unsigned __int64)(v46 + 2);
      if ( v46 + 2 >= v157 || v46[2] != 123 )
      {
        v186 = v46 + 2;
        v109 = v164[8].m128i_u16[4];
        if ( !v109 )
        {
          if ( (v148 & 0x800) == 0 )
            goto LABEL_453;
          goto LABEL_283;
        }
        v122 = v109;
        if ( a6[6].m128i_u16[5] < v109 + 1 )
        {
          LODWORD(v17) = -54;
          goto LABEL_285;
        }
        v123 = &v56[2 * v109];
        while ( *v123 == -1 )
        {
          v123 -= 2;
          v122 = (unsigned int)(v122 - 1);
          if ( !(_DWORD)v122 )
            goto LABEL_283;
        }
        v176 = (unsigned __int8 *)v56;
        LODWORD(v160) = v122;
        v124 = sub_87B950(a6, v122, &v188);
        v125 = v160;
        v56 = (size_t *)v176;
        LODWORD(v17) = v124;
        if ( v124 >= 0 )
          goto LABEL_356;
        if ( v124 == -49 )
        {
          if ( (v148 & 0x800) == 0 )
          {
LABEL_409:
            v82 = (unsigned __int64)v186;
            LODWORD(v17) = -49;
            goto LABEL_285;
          }
          goto LABEL_313;
        }
        goto LABEL_312;
      }
      LODWORD(v176) = 0;
      v78 = 0;
      LODWORD(v160) = 0;
LABEL_292:
      v82 = v73;
      do
      {
        if ( (*(_BYTE *)(v164[1].m128i_i64[1] + *(unsigned __int8 *)v82 + 832) & 0x10) == 0 )
          break;
        ++v82;
      }
      while ( v157 != (unsigned __int8 *)v82 );
      LODWORD(v180) = v78;
      v179 = (unsigned __int8 *)v56;
      v186 = (unsigned __int8 *)v82;
      if ( (__int64)(v82 - v73) > 128 || v82 == v73 )
        goto LABEL_288;
      v178 = (unsigned __int8 **)v82;
      v177 = v82 - v73;
      v110 = __memcpy_chk();
      v82 = (unsigned __int64)v178;
      v56 = (size_t *)v179;
      v84 = (_BYTE *)v110;
      v92 = (_DWORD)v180 == 0;
      v202[v177] = 0;
      if ( !v92 )
      {
        v79 = 0xFFFFFFFFLL;
        v83 = v160 ^ 1;
LABEL_212:
        if ( (v148 & 0x200) != 0 && v83 && v82 < (unsigned __int64)(v157 - 2) && *(_BYTE *)v82 == 58 )
        {
          v182 = v56;
          v186 = (unsigned __int8 *)(v82 + 1);
          v135 = *(unsigned __int8 *)(v82 + 1);
          LODWORD(v179) = v79;
          if ( (((_BYTE)v135 - 43) & 0xFD) != 0 )
          {
            ++v82;
            LODWORD(v17) = -59;
            goto LABEL_285;
          }
          LODWORD(v160) = v135;
          v181 = (unsigned __int8 *)(v82 + 2);
          v186 = (unsigned __int8 *)(v82 + 2);
          v178 = &v186;
          LODWORD(v17) = sub_878A80((__int64)v164, &v186, v157, v135 == 45);
          v136 = v186;
          v180 = v186;
          if ( (_DWORD)v17 )
          {
            v82 = (unsigned __int64)v180;
            goto LABEL_285;
          }
          v137 = v186 + 1;
          v138 = v178;
          v177 = (unsigned __int64)(v186 + 1);
          v79 = (unsigned int)v179;
          v56 = v182;
          if ( (_DWORD)v160 != 43 )
          {
            ++v186;
            if ( (_DWORD)v176 )
            {
              if ( v137 >= v157 || v136[1] != 62 )
                goto LABEL_466;
              LODWORD(v160) = 45;
              v186 = v136 + 2;
              v179 = nullptr;
              v177 = 0;
            }
            else
            {
              LODWORD(v160) = 45;
              v179 = nullptr;
              v177 = 0;
            }
            goto LABEL_222;
          }
          if ( *v180 != 58 )
          {
            v186 = (unsigned __int8 *)v177;
            if ( !(_DWORD)v176 )
            {
LABEL_460:
              v179 = nullptr;
              v177 = 0;
              goto LABEL_222;
            }
            if ( v177 < (unsigned __int64)v157 && v180[1] == 62 )
            {
              v186 = v180 + 2;
              goto LABEL_460;
            }
LABEL_466:
            v82 = v177;
LABEL_288:
            LODWORD(v17) = -35;
            goto LABEL_285;
          }
          LODWORD(v178) = (_DWORD)v179;
          v186 = (unsigned __int8 *)v177;
          LODWORD(v17) = sub_878A80((__int64)v164, v138, v157, 1);
          v146 = v186;
          v179 = v186;
          if ( (_DWORD)v17 )
          {
            v82 = (unsigned __int64)v179;
            goto LABEL_285;
          }
          v82 = (unsigned __int64)(v186 + 1);
          v79 = (unsigned int)v178;
          ++v186;
          v56 = v182;
          if ( (_DWORD)v176 )
          {
            if ( v82 >= (unsigned __int64)v157 || v146[1] != 62 )
              goto LABEL_288;
            v186 = v146 + 2;
          }
LABEL_222:
          v85 = (unsigned __int8 *)&v188;
          if ( (int)v79 < 0 )
          {
            v84 = v202;
LABEL_245:
            v182 = v56;
            LODWORD(v178) = v79;
            v176 = v85;
            v94 = sub_87BA30(v164, v84, &v187, v85, v79, v82);
            v85 = v176;
            LODWORD(v79) = (_DWORD)v178;
            v17 = v94;
            v56 = v182;
            if ( v94 == -49 )
            {
              if ( (v148 & 0x800) == 0 )
                goto LABEL_396;
              LODWORD(v79) = v164[8].m128i_u16[4] + 1;
            }
            else
            {
              if ( v94 < 0 )
                goto LABEL_396;
              v130 = v187;
              if ( v188 >= (unsigned __int64)v187 )
              {
                v176 = v187;
                v131 = v187;
                do
                {
                  v132 = v17;
                  v133 = (unsigned __int16)__ROL2__(*(_WORD *)v131, 8);
                  if ( (unsigned __int16)v133 < v163 )
                  {
                    if ( (int)v79 < 0 )
                      LODWORD(v79) = v133;
                    while ( v182[2 * v133] == -1 )
                    {
                      v131 += v17;
                      v132 = v17;
                      if ( v188 < (unsigned __int64)v131 )
                        goto LABEL_393;
                      v133 = (unsigned __int16)__ROL2__(*(_WORD *)v131, 8);
                      if ( (unsigned __int16)v133 >= v163 )
                        goto LABEL_382;
                    }
                    LODWORD(v79) = v133;
                    goto LABEL_248;
                  }
LABEL_382:
                  v131 += v132;
                }
                while ( v188 >= (unsigned __int64)v131 );
LABEL_393:
                v130 = v176;
                if ( (int)v79 >= 0 )
                  goto LABEL_248;
              }
              LODWORD(v79) = (unsigned __int16)__ROL2__(*(_WORD *)v130, 8);
            }
          }
LABEL_248:
          v178 = (unsigned __int8 **)v56;
          LODWORD(v176) = v79;
          v95 = sub_87B950(a6, (unsigned int)v79, v85);
          v96 = (int)v176;
          v56 = (size_t *)v178;
          LODWORD(v17) = v95;
          if ( v95 < 0 )
            goto LABEL_328;
          if ( !(_DWORD)v160 )
            goto LABEL_358;
          if ( (_DWORD)v160 != 45 )
          {
            v82 = (unsigned __int64)v186;
            if ( (unsigned int)v55 > 0x13 )
              goto LABEL_288;
            v97 = v55 + 2;
            *(__m128 *)&v199[v55] = _mm_loadh_ps((const double *)&v157);
            if ( !(_DWORD)v17 )
            {
              v55 = v97;
              v186 = v181;
              v82 = (unsigned __int64)v181;
              v157 = v180;
              goto LABEL_254;
            }
            v55 = v97;
            v82 = v177;
            v157 = v179;
            goto LABEL_334;
          }
          if ( !v95 )
            goto LABEL_358;
LABEL_349:
          v82 = (unsigned __int64)v186;
          if ( (unsigned int)v55 > 0x13 )
            goto LABEL_288;
          v121 = (unsigned int)v55;
          v82 = (unsigned __int64)v181;
          v55 = (unsigned int)(v55 + 2);
          *(__m128 *)&v199[v121] = _mm_loadh_ps((const double *)&v157);
          v157 = v180;
          goto LABEL_334;
        }
        if ( v82 >= (unsigned __int64)v157 || *(_BYTE *)v82 != 125 )
        {
          LODWORD(v17) = -58;
          goto LABEL_285;
        }
        v186 = (unsigned __int8 *)++v82;
        if ( (_DWORD)v176 )
        {
LABEL_217:
          if ( v82 >= (unsigned __int64)v157 || *(_BYTE *)v82 != 62 )
            goto LABEL_288;
          v186 = (unsigned __int8 *)(v82 + 1);
        }
        v82 = (unsigned int)v160;
        v84 = v202;
        if ( !(_DWORD)v160 )
        {
LABEL_221:
          LODWORD(v160) = 0;
          v179 = nullptr;
          v177 = 0;
          v180 = nullptr;
          v181 = nullptr;
          goto LABEL_222;
        }
        goto LABEL_302;
      }
      if ( (_DWORD)v176 )
      {
        v79 = 0xFFFFFFFFLL;
        goto LABEL_217;
      }
      v85 = (unsigned __int8 *)&v188;
      if ( !(_DWORD)v160 )
      {
LABEL_244:
        LODWORD(v160) = 0;
        v79 = 0xFFFFFFFFLL;
        v179 = nullptr;
        v177 = 0;
        v180 = nullptr;
        v181 = nullptr;
        goto LABEL_245;
      }
LABEL_302:
      v160 = (size_t)v56;
      if ( (unsigned int)sub_877180((__int64)v84, (__int64)"MARK") )
      {
        v82 = (unsigned __int64)v186;
        goto LABEL_288;
      }
      v111 = (unsigned __int8 *)sub_876C20((__int64)a6);
      v56 = (size_t *)v160;
      if ( !v111 )
        goto LABEL_262;
      v112 = *(v111 - 1);
      if ( (_DWORD)v166 && v174 )
      {
        v140 = (char *)dest + v26;
        if ( v151 )
        {
          v103 = *(v111 - 1);
          v189.m128i_i32[0] = v166;
          v104 = sub_878D00(v111, v103, v140, 0, v189.m128i_i32, (__int64)v164);
          LODWORD(v166) = v189.m128i_i32[0];
          v35 = __CFADD__(v153, v104);
          v105 = v153 + v104;
          if ( v35 )
            goto LABEL_270;
LABEL_365:
          v153 = v105;
          v56 = (size_t *)v160;
          goto LABEL_262;
        }
        v189.m128i_i32[0] = v166;
        v116 = sub_878D00(v111, v112, v140, v155, v189.m128i_i32, (__int64)v164);
        v56 = (size_t *)v160;
        LODWORD(v166) = v189.m128i_i32[0];
        if ( v155 >= v116 )
        {
LABEL_410:
          v155 -= v116;
          v26 += v116;
          goto LABEL_262;
        }
        if ( (v148 & 0x1000) == 0 )
          goto LABEL_83;
        v151 = 1;
        v153 = v116 - v155;
      }
      else if ( v151 )
      {
        if ( __CFADD__(v112, v153) )
          goto LABEL_270;
        v153 += v112;
      }
      else if ( v155 >= v112 )
      {
        v155 -= v112;
        v141 = (char *)dest + v26;
        v26 += v112;
        qmemcpy(v141, v111, v112);
      }
      else
      {
        if ( (v148 & 0x1000) == 0 )
          goto LABEL_83;
        v151 = 1;
        v153 = v112 - v155;
      }
LABEL_262:
      v46 = v186;
      if ( v186 >= v157 )
      {
LABEL_92:
        v47 = (unsigned __int8 *)v175;
LABEL_93:
        LODWORD(v160) = 0;
        goto LABEL_94;
      }
LABEL_263:
      v59 = *v46;
    }
    if ( (unsigned __int8)v74 <= 0x2Bu )
    {
      switch ( (_BYTE)v74 )
      {
        case '&':
          v160 = (size_t)v56;
          v186 = v46 + 2;
          v106 = sub_87B950(a6, 0, &v188);
          v56 = (size_t *)v160;
          LODWORD(v17) = v106;
          v107 = 1;
          v108 = (size_t *)v160;
          if ( (int)v17 >= 0 )
            goto LABEL_278;
          goto LABEL_311;
        case '\'':
          v160 = (size_t)v56;
          v186 = v46 + 2;
          v102 = sub_87B950(a6, 0, &v188);
          v56 = (size_t *)v160;
          LODWORD(v17) = v102;
          if ( v102 < 0 )
            goto LABEL_396;
          v98 = (char *)s1 + *(_QWORD *)(v160 + 8);
          v99 = (char *)s1 + a3;
          goto LABEL_257;
        case '$':
          LODWORD(v160) = 0;
          v47 = (unsigned __int8 *)v175;
          v60 = v46 + 1;
LABEL_124:
          v46 = v60 + 1;
          v186 = v60 + 1;
          v185 = *v60;
          if ( (_DWORD)v166 && v174 )
          {
            v75 = (char *)dest + v26;
            if ( v151 )
            {
              v176 = v47;
              v175 = v56;
              v189.m128i_i32[0] = v166;
              v77 = sub_878D00(v60, 1, v75, 0, v189.m128i_i32, (__int64)v164);
              LODWORD(v166) = v189.m128i_i32[0];
              if ( __CFADD__(v77, v153) )
                goto LABEL_270;
              v153 += v77;
              v46 = v186;
              v56 = v175;
              v47 = v176;
            }
            else
            {
              v176 = v47;
              v175 = v56;
              v189.m128i_i32[0] = v166;
              v76 = sub_878D00(v60, 1, v75, v155, v189.m128i_i32, (__int64)v164);
              v56 = v175;
              v47 = v176;
              LODWORD(v166) = v189.m128i_i32[0];
              if ( v155 >= v76 )
              {
                v155 -= v76;
                v46 = v186;
                v26 += v76;
              }
              else
              {
                if ( (v148 & 0x1000) == 0 )
                  goto LABEL_83;
                v151 = 1;
                v46 = v186;
                v153 = v76 - v155;
              }
            }
          }
          else if ( v151 )
          {
            if ( v153 == -1 )
              goto LABEL_270;
            ++v153;
          }
          else if ( v155 )
          {
            --v155;
            *((_BYTE *)dest + v26++) = *v60;
          }
          else
          {
            if ( (v148 & 0x1000) == 0 )
              goto LABEL_83;
            v153 = 1;
            v151 = 1;
          }
          continue;
      }
      v78 = 0;
      if ( (_BYTE)v74 != 42 )
        goto LABEL_336;
      goto LABEL_290;
    }
    break;
  }
  switch ( (_BYTE)v74 )
  {
    case '_':
      v98 = (char *)s1;
      v186 = v46 + 2;
      v99 = (char *)s1 + a3;
      goto LABEL_257;
    case '`':
      v160 = (size_t)v56;
      v186 = v46 + 2;
      v113 = sub_87B950(a6, 0, &v188);
      v56 = (size_t *)v160;
      LODWORD(v17) = v113;
      if ( v113 < 0 )
        goto LABEL_396;
      v98 = (char *)s1;
      v99 = (char *)s1 + *(_QWORD *)v160;
      goto LABEL_257;
    case '{':
      v73 = (unsigned __int64)(v46 + 2);
      v186 = v46 + 2;
      if ( v46 + 2 >= v157 )
        goto LABEL_287;
      v74 = v46[2];
      v78 = 1;
      if ( (_BYTE)v74 != 42 )
        goto LABEL_205;
LABEL_290:
      v186 = (unsigned __int8 *)++v73;
      if ( v73 >= (unsigned __int64)v157 )
        goto LABEL_287;
      LODWORD(v176) = 0;
      LODWORD(v160) = 1;
      goto LABEL_292;
    case '<':
      v73 = (unsigned __int64)(v46 + 2);
      v186 = v46 + 2;
      if ( v46 + 2 >= v157 )
      {
LABEL_287:
        v82 = v73;
        goto LABEL_288;
      }
      LODWORD(v176) = 1;
      v78 = 0;
      LODWORD(v160) = 0;
      goto LABEL_292;
  }
  v78 = 0;
LABEL_205:
  if ( (unsigned __int8)(v74 - 48) > 9u )
  {
LABEL_336:
    LODWORD(v176) = 0;
    LODWORD(v160) = 0;
    goto LABEL_292;
  }
  v79 = (unsigned int)(v74 - 48);
  v80 = (unsigned __int8 *)(v73 + 1);
  do
  {
    v186 = v80;
    v82 = (unsigned __int64)v80;
    if ( v80 >= v157 || (v81 = *v80, (unsigned __int8)(v81 - 48) > 9u) )
    {
      if ( !v78 )
        goto LABEL_221;
LABEL_211:
      LODWORD(v160) = 0;
      v82 = (unsigned __int64)v186;
      v83 = 1;
      LODWORD(v176) = 0;
      goto LABEL_212;
    }
    ++v80;
    v79 = (unsigned int)(v81 + 10 * v79 - 48);
  }
  while ( v164[8].m128i_u16[4] >= (int)v79 );
  if ( (v148 & 0x800) == 0 )
  {
LABEL_453:
    LODWORD(v17) = -49;
    goto LABEL_285;
  }
  v117 = (unsigned __int8 *)(v82 + 1);
  do
  {
    v186 = v117;
    v118 = v117;
    if ( v117 >= v157 )
      break;
    ++v117;
  }
  while ( (unsigned __int8)(*v118 - 48) <= 9u );
  if ( v78 )
    goto LABEL_211;
  v176 = (unsigned __int8 *)v56;
  LODWORD(v160) = v79;
  v119 = sub_87B950(a6, (unsigned int)v79, &v188);
  v96 = v160;
  v56 = (size_t *)v176;
  LODWORD(v17) = v119;
  if ( v119 >= 0 )
  {
LABEL_358:
    v126 = 2 * v96;
    v108 = &v56[v126];
    v107 = v126 + 1;
    goto LABEL_278;
  }
  LODWORD(v160) = 0;
  v181 = nullptr;
  v180 = nullptr;
  v177 = 0;
  v179 = nullptr;
LABEL_328:
  if ( (_DWORD)v17 == -49 )
  {
    if ( (v148 & 0x800) == 0 )
      goto LABEL_409;
LABEL_330:
    if ( !(_DWORD)v160 )
      goto LABEL_313;
    if ( (_DWORD)v160 == 45 )
      goto LABEL_349;
    v82 = (unsigned __int64)v186;
    if ( (unsigned int)v55 > 0x13 )
      goto LABEL_288;
    v120 = (unsigned int)v55;
    v82 = v177;
    v55 = (unsigned int)(v55 + 2);
    *(__m128 *)&v199[v120] = _mm_loadh_ps((const double *)&v157);
    v157 = v179;
LABEL_334:
    v186 = (unsigned __int8 *)v82;
    goto LABEL_254;
  }
  if ( (_DWORD)v17 == -55 )
    goto LABEL_330;
LABEL_396:
  v82 = (unsigned __int64)v186;
LABEL_285:
  *v170 = v82 - (_QWORD)src;
LABEL_37:
  if ( v168 )
  {
    v149 = v17;
    sub_876BD0((__int64)v168);
    LODWORD(v17) = v149;
  }
  else
  {
    a6[7].m128i_i32[0] = v17;
  }
  return (unsigned int)v17;
}

