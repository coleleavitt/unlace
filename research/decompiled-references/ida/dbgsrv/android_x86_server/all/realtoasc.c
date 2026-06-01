/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: realtoasc
// Address: 0x000A7C70

//----- (000A7C70) --------------------------------------------------------
unsigned int __cdecl realtoasc(int *a1, int *a2, _WORD *a3, int a4)
{
  __int64 *v4; // eax
  unsigned int v5; // edi
  bool v6; // bl
  bool v7; // bh
  unsigned int v8; // esi
  unsigned int v9; // edx
  int v10; // edi
  int v11; // ecx
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // xmm1_8
  int v15; // esi
  char *v16; // eax
  unsigned __int16 *v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // et0
  int v23; // esi
  int v24; // eax
  int v25; // edi
  int v26; // ecx
  unsigned __int16 v27; // dx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edi
  int v32; // esi
  unsigned __int16 v33; // dx
  __int16 v34; // bx
  __int16 v35; // si
  unsigned int v36; // edx
  __int16 v37; // bx
  unsigned int v38; // esi
  unsigned int v39; // edi
  unsigned __int16 *v40; // ecx
  __int32 v41; // eax
  unsigned int v42; // et0
  unsigned int v43; // ecx
  int v44; // esi
  unsigned __int16 *v45; // eax
  bool v46; // cc
  int *v47; // edi
  size_t v48; // esi
  _WORD *v49; // edi
  unsigned int v50; // esi
  __m128i v51; // xmm1
  int epi16; // edx
  unsigned int v53; // eax
  int v54; // ecx
  int v55; // eax
  __m128i *p_s; // ecx
  __int16 v57; // dx
  char *v58; // eax
  __int32 v59; // edx
  __int32 v60; // eax
  unsigned __int32 v61; // edx
  __int16 v62; // ax
  _BOOL4 v63; // ecx
  __m128i v64; // xmm0
  unsigned int v65; // esi
  unsigned int v66; // ebx
  unsigned int v67; // eax
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __m128i v70; // xmm3
  __m128i v71; // xmm2
  __m128i v72; // xmm4
  __m128i v73; // xmm5
  __m128i v74; // xmm6
  __m128i v75; // xmm7
  __m128i v76; // xmm7
  int v77; // ecx
  unsigned int v78; // et0
  int v79; // edi
  int v80; // edi
  unsigned __int16 v81; // bx
  int v82; // edx
  int v83; // edx
  unsigned int v84; // edi
  int v85; // eax
  __int16 v86; // ax
  __int16 v87; // cx
  unsigned int v88; // et0
  __int16 v89; // ax
  __int16 v90; // cx
  __int16 v91; // ax
  __int16 v92; // cx
  __int16 v93; // ax
  __int16 v94; // dx
  int v95; // eax
  int v96; // edi
  unsigned __int16 v97; // bx
  int v98; // edx
  int v99; // edx
  unsigned int v100; // edx
  unsigned int v101; // edx
  unsigned int v102; // esi
  unsigned int v103; // edx
  unsigned int v104; // esi
  unsigned int v105; // edx
  int v106; // esi
  unsigned __int16 v107; // ax
  __int32 v108; // edx
  bool v109; // zf
  char *v110; // eax
  unsigned __int8 v111; // cl
  char v112; // cl
  char v113; // cl
  _BYTE *v114; // eax
  char v115; // cl
  unsigned int v116; // edi
  int v117; // eax
  int v118; // ecx
  size_t v119; // esi
  unsigned int v120; // eax
  unsigned __int16 *v121; // edx
  unsigned __int16 *v122; // ecx
  unsigned int v123; // ecx
  unsigned int v124; // eax
  unsigned int v125; // eax
  unsigned __int16 *v126; // edx
  __int32 v127; // esi
  __int32 v128; // esi
  size_t v129; // edi
  unsigned __int16 *v130; // eax
  unsigned int v131; // esi
  __int32 v132; // ecx
  unsigned __int32 v133; // esi
  int *v134; // eax
  size_t v135; // edi
  int *v136; // edi
  unsigned int v137; // eax
  unsigned int v138; // ecx
  size_t v139; // edi
  int *v140; // edi
  int *v142; // [esp-10h] [ebp-17Ch]
  int *v143; // [esp-Ch] [ebp-178h]
  char *v144; // [esp-8h] [ebp-174h]
  _BYTE *v145; // [esp-4h] [ebp-170h]
  unsigned int v146; // [esp+8h] [ebp-164h]
  int v147; // [esp+Ch] [ebp-160h]
  unsigned __int16 *v148; // [esp+10h] [ebp-15Ch]
  int v149; // [esp+14h] [ebp-158h]
  int v150; // [esp+18h] [ebp-154h]
  int v151; // [esp+1Ch] [ebp-150h]
  __m128i v152; // [esp+20h] [ebp-14Ch]
  unsigned int v153; // [esp+38h] [ebp-134h]
  int v154; // [esp+3Ch] [ebp-130h]
  __m128i v155; // [esp+40h] [ebp-12Ch] BYREF
  _BYTE *v156; // [esp+54h] [ebp-118h]
  unsigned int v157; // [esp+58h] [ebp-114h]
  int v158; // [esp+5Ch] [ebp-110h]
  unsigned __int16 *v159; // [esp+60h] [ebp-10Ch]
  int v160; // [esp+64h] [ebp-108h]
  int v161; // [esp+68h] [ebp-104h]
  unsigned int v162; // [esp+6Ch] [ebp-100h]
  __m128i v163; // [esp+70h] [ebp-FCh]
  __m128i s1; // [esp+80h] [ebp-ECh] BYREF
  __m128i s; // [esp+90h] [ebp-DCh] BYREF
  __m128i v166; // [esp+A0h] [ebp-CCh] BYREF
  __m128i v167; // [esp+B0h] [ebp-BCh] BYREF
  int v168[12]; // [esp+C8h] [ebp-A4h] BYREF
  __int64 v169; // [esp+F8h] [ebp-74h] BYREF
  __int64 v170; // [esp+100h] [ebp-6Ch]
  _BYTE v171[6]; // [esp+108h] [ebp-64h]
  __int64 v172; // [esp+110h] [ebp-5Ch]
  __int64 v173; // [esp+118h] [ebp-54h]
  int v174; // [esp+120h] [ebp-4Ch]
  __int16 v175; // [esp+124h] [ebp-48h]
  __int64 v176; // [esp+128h] [ebp-44h]
  __int64 v177; // [esp+130h] [ebp-3Ch]
  int v178; // [esp+138h] [ebp-34h]
  __int16 v179; // [esp+13Ch] [ebp-30h]
  _QWORD v180[2]; // [esp+140h] [ebp-2Ch] BYREF
  int v181; // [esp+150h] [ebp-1Ch]
  __int16 v182; // [esp+154h] [ebp-18h]
  unsigned int v183; // [esp+158h] [ebp-14h]

  v145 = (_BYTE *)&loc_A7C84;
  v183 = __readgsdword(0x14u);
  if ( (int)a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( (a3[7] & 0x7FFF) == 0x7FFF )
  {
    if ( (a3[6] & 0x7FFF) != 0 || a3[5] || a3[4] || a3[3] || a3[2] || a3[1] || *a3 )
    {
      v4 = &qword_13ACD8 - 39084;
    }
    else if ( (__int16)a3[7] < 0 )
    {
      v4 = (__int64 *)((char *)&qword_13ACD8 - 312663);
    }
    else
    {
      v4 = (__int64 *)((char *)&qword_13ACD8 - 312668);
    }
    qstrncpy((unsigned int)a1, (int)v4, (int)a2);
    return __readgsdword(0x14u);
  }
  v5 = BYTE1(a4);
  if ( BYTE2(a4) )
  {
    v6 = BYTE1(a4) >= (unsigned int)BYTE2(a4) + 3;
    v7 = (unsigned int)BYTE1(a4) + 3 < (unsigned int)a2;
    v8 = 0;
    if ( !v7 || !v6 )
      v5 = 0;
    v153 = v5;
    if ( v7 && v6 )
      v8 = BYTE2(a4);
    v9 = v8;
  }
  else
  {
    v153 = BYTE1(a4);
    v9 = 0;
  }
  v10 = (unsigned __int8)a4;
  v11 = 33;
  if ( (unsigned __int8)a4 < 0x21u )
    v11 = (unsigned __int8)a4;
  v12 = *(_QWORD *)a3;
  v167.m128i_i64[1] = *((_QWORD *)a3 + 1);
  v167.m128i_i64[0] = v12;
  v13 = *(__int64 *)((char *)&qword_13ACD8 - 209380);
  s1.m128i_i64[1] = v13;
  v14 = *(__int64 *)((char *)&qword_13ACD8 - 209388);
  s1.m128i_i64[0] = v14;
  v15 = v167.m128i_u16[7];
  if ( v167.m128i_i16[7] < 0 )
  {
    v15 = v167.m128i_i16[7] & 0x7FFF;
    v167.m128i_i16[7] &= ~0x8000u;
    v16 = (char *)&qword_13ACD8 - 330515;
  }
  else
  {
    v16 = (char *)&qword_13ACD8 - 384502;
  }
  v156 = v16;
  v17 = (unsigned __int16 *)v15;
  v18 = v153;
  v146 = (unsigned int)v17;
  v148 = (unsigned __int16 *)v9;
  if ( !(_WORD)v17 )
  {
    if ( !v9 )
    {
      v145 = v156;
      v144 = (char *)&qword_13ACD8 - 312658;
      v143 = a2;
      v142 = a1;
      goto LABEL_176;
    }
    v168[0] = 3157552;
    v147 = 0;
    v47 = a1;
    if ( v153 )
      goto LABEL_111;
LABEL_46:
    v48 = 0;
    v148 = nullptr;
    goto LABEL_145;
  }
  v163.m128i_i64[0] = v14;
  v163.m128i_i64[1] = v13;
  v162 = v11;
  v159 = (unsigned __int16 *)&qword_13ACD8 - 104694;
  v19 = ecmp((unsigned __int16 *)&qword_13ACD8 - 104694, (unsigned __int16 *)&v167);
  v158 = (unsigned __int8)a4;
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      LOWORD(v172) = (unsigned __int16)v146 >> 15;
      *(_DWORD *)((char *)&v172 + 2) = v146 & 0x7FFF;
      HIWORD(v172) = v167.m128i_i16[6];
      LOWORD(v173) = v167.m128i_i16[5];
      WORD1(v173) = v167.m128i_i16[4];
      WORD2(v173) = v167.m128i_i16[3];
      HIWORD(v173) = v167.m128i_i16[2];
      LOWORD(v174) = v167.m128i_i16[1];
      HIWORD(v174) = v167.m128i_i16[0];
      v175 = 0;
      v20 = 0;
      v21 = 0;
      do
      {
        v161 = v20;
        v151 = v21;
        LOWORD(v22) = ((unsigned __int16)v173 >> 1) | (HIWORD(v172) << 15);
        HIWORD(v22) = HIWORD(v172) >> 1;
        LOWORD(v147) = v22 >> 1;
        v23 = WORD1(v173) >> 1;
        v24 = v23 | ((unsigned __int16)v173 << 15);
        LOWORD(v22) = v23 | ((_WORD)v173 << 15);
        HIWORD(v22) = (unsigned __int16)v173 >> 1;
        LOWORD(v24) = v22 >> 1;
        v150 = v24;
        v25 = WORD2(v173) >> 1;
        v26 = v25 | (WORD1(v173) << 15);
        LOWORD(v22) = v25 | (WORD1(v173) << 15);
        HIWORD(v22) = WORD1(v173) >> 1;
        LOWORD(v26) = v22 >> 1;
        v157 = v26;
        LOWORD(v22) = (HIWORD(v173) >> 1) | (WORD2(v173) << 15);
        HIWORD(v22) = WORD2(v173) >> 1;
        v27 = v22 >> 1;
        LOWORD(v22) = ((unsigned __int16)v174 >> 1) | (HIWORD(v173) << 15);
        HIWORD(v22) = HIWORD(v173) >> 1;
        LOWORD(v23) = v22 >> 1;
        v28 = HIWORD(v174) >> 1;
        LOWORD(v22) = v28 | ((_WORD)v174 << 15);
        HIWORD(v22) = (unsigned __int16)v174 >> 1;
        v149 = (v28 << 15) | ((BYTE2(v174) & 1) << 14);
        v155.m128i_i32[0] = ((HIWORD(v174) + (unsigned int)(unsigned __int16)(v22 >> 1)) >> 16)
                          + (unsigned __int16)v174
                          + (unsigned __int16)v23;
        v146 = (HIWORD(v155.m128i_i32[0]) & 1) + HIWORD(v173) + v27;
        v29 = ((((((unsigned int)((HIWORD(v146) & 1) + WORD2(v173) + (unsigned __int16)v26) >> 16) & 1)
               + WORD1(v173)
               + (unsigned __int16)v150) >> 16)
             & 1)
            + (unsigned __int16)v173
            + (unsigned __int16)v147;
        v30 = (((((((((unsigned int)((HIWORD(v146) & 1) + WORD2(v173) + (unsigned __int16)v157) >> 16) & 1)
                  + WORD1(v173)
                  + (unsigned __int16)v150) >> 16)
                & 1)
               + (unsigned __int16)v173
               + (unsigned __int16)v147) >> 16)
             & 1)
            + HIWORD(v172)
            + (unsigned __int16)(((WORD2(v172) & 0xFFFE) << 14)
                               | ((unsigned __int16)((HIWORD(v172) >> 1) | (WORD2(v172) << 15)) >> 1));
        v154 = HIWORD(v174) + (unsigned __int16)(v22 >> 1);
        HIWORD(v178) = HIWORD(v174) + (v22 >> 1);
        LOWORD(v178) = HIWORD(v154) + v174 + v23;
        HIWORD(v177) = (v155.m128i_i8[2] & 1) + HIWORD(v173) + v27;
        v31 = (HIWORD(v146) & 1) + WORD2(v173) + (unsigned __int16)v157;
        WORD2(v177) = (BYTE2(v146) & 1) + WORD2(v173) + v157;
        v147 = (HIWORD(v31) & 1) + WORD1(v173) + (unsigned __int16)v150;
        WORD1(v177) = (BYTE2(v31) & 1) + WORD1(v173) + v150;
        LOWORD(v177) = v29;
        HIWORD(v176) = v30;
        v32 = WORD2(v172) >> 2;
        v33 = WORD1(v172) + 3;
        LOWORD(v32) = (BYTE2(v30) & 1) + WORD2(v172) + v32;
        WORD2(v176) = v32;
        v152.m128i_i32[0] = v32;
        LODWORD(v176) = v172 + 196608;
        if ( (_WORD)v32 )
        {
          v34 = v154;
          v160 = WORD1(v172) + 3;
          v35 = v155.m128i_i16[0];
          v36 = v147;
          do
          {
            v155.m128i_i16[0] = v34;
            v37 = v35;
            LOWORD(v150) = v146;
            v38 = v31;
            v39 = v36;
            v36 = v29;
            v40 = (unsigned __int16 *)v30;
            v41 = v152.m128i_u16[0];
            v152.m128i_i32[0] = v41;
            HIWORD(v42) = v41;
            LOWORD(v42) = (_WORD)v40;
            LOWORD(v41) = v42 >> 1;
            v147 = v41;
            HIWORD(v41) = HIWORD(v40);
            HIWORD(v42) = (_WORD)v40;
            LOWORD(v42) = v36;
            LOWORD(v41) = v42 >> 1;
            v157 = v41;
            HIWORD(v42) = v36;
            LOWORD(v42) = v39;
            LOWORD(v36) = v42 >> 1;
            HIWORD(v40) = HIWORD(v39);
            HIWORD(v42) = v39;
            LOWORD(v42) = v38;
            LOWORD(v40) = v42 >> 1;
            v154 = (int)v40;
            HIWORD(v40) = HIWORD(v38);
            LOWORD(v41) = v146;
            HIWORD(v42) = v38;
            LOWORD(v42) = v146;
            LOWORD(v40) = v42 >> 1;
            v146 = (unsigned int)v40;
            HIWORD(v42) = v41;
            LOWORD(v42) = v37;
            v35 = v42 >> 1;
            HIWORD(v42) = v37;
            LOWORD(v42) = v155.m128i_i16[0];
            v34 = v42 >> 1;
            HIWORD(v40) = HIWORD(v149);
            LOWORD(v42) = v149;
            HIWORD(v42) = v155.m128i_i16[0];
            LOWORD(v40) = v42 >> 1;
            v149 = (int)v40;
            v29 = v157;
            v30 = v147;
            ++v160;
            v152.m128i_i32[0] = (unsigned __int32)v152.m128i_i32[0] >> 1;
            v31 = v154;
          }
          while ( v152.m128i_i16[0] );
          HIWORD(v176) = v147;
          LOWORD(v177) = v157;
          WORD1(v177) = v36;
          WORD2(v177) = v154;
          HIWORD(v177) = v146;
          LOWORD(v178) = v35;
          HIWORD(v178) = v34;
          v33 = v160;
          *(_DWORD *)((char *)&v176 + 2) = (unsigned __int16)v160;
        }
        v21 = v151;
        if ( v33 > 0x3FFEu )
          break;
        if ( (_WORD)v149 )
          break;
        v174 = v178;
        v173 = v177;
        v172 = v176;
        v175 = 0;
        v20 = v161 + 1;
        v21 = v151 - 1;
      }
      while ( (unsigned int)(v161 + 1) < 0x22 );
      v151 = v21;
      v179 = v149;
      v43 = WORD1(v172) | 0xFFFF8000;
      if ( !(_WORD)v172 )
        v43 = WORD1(v172);
      v146 = v43;
      v167.m128i_i16[7] = v43;
      v167.m128i_i16[6] = HIWORD(v172);
      v167.m128i_i16[4] = WORD1(v173);
      v167.m128i_i16[5] = v173;
      v167.m128i_i16[2] = HIWORD(v173);
      v167.m128i_i16[3] = WORD2(v173);
      v167.m128i_i16[0] = HIWORD(v174);
      v167.m128i_i16[1] = v174;
      s = v167;
      s1 = v163;
      if ( ecmp(v159, (unsigned __int16 *)&s) > 0 )
      {
        v44 = -4096;
        v45 = (unsigned __int16 *)&qword_13ACD8 - 104582;
        v152.m128i_i32[0] = (__int32)&qword_13ACD8 - 209372;
        do
        {
          v155.m128i_i32[0] = (__int32)v45;
          if ( ecmp(v45, (unsigned __int16 *)&s) >= 0 )
          {
            emul(&s, (__int16 *)v152.m128i_i32[0], (int)&s);
            emul(&s1, (__int16 *)v152.m128i_i32[0], (int)&s1);
            v151 += v44;
          }
          if ( (unsigned int)(v44 + 1) < 3 )
            break;
          v152.m128i_i32[0] += 16;
          v46 = ecmp(v159, (unsigned __int16 *)&s) <= 0;
          v45 = (unsigned __int16 *)(v155.m128i_i32[0] + 16);
          v44 /= 2;
        }
        while ( !v46 );
      }
      ediv((__int16 *)v159, &s1, (int)&s1);
LABEL_75:
      v10 = v158;
      goto LABEL_76;
    }
    *(__int64 *)((char *)v166.m128i_i64 + 6) = *(__int64 *)((char *)v167.m128i_i64 + 6);
    v166.m128i_i64[0] = v167.m128i_i64[0];
    v166.m128i_i16[7] = 16494;
    v151 = 0;
    v49 = (_WORD *)&qword_13ACD8 - 104622;
    v50 = 16;
    while ( 1 )
    {
      ediv(v166.m128i_i16, v49, (int)&s1);
      v51 = _mm_load_si128(&s1);
      epi16 = _mm_extract_epi16(v51, 7);
      v53 = epi16 & 0x7FFF;
      if ( v53 > 0x3FFE )
      {
        v54 = (unsigned __int16)v53;
        s = v51;
        v55 = 16494 - (unsigned __int16)v53;
        if ( v54 < 16494 )
        {
          v152.m128i_i32[0] = epi16;
          if ( v55 < 16 )
          {
            v57 = _mm_cvtsi128_si32(v51);
            p_s = &s;
          }
          else
          {
            v149 = (unsigned int)(16478 - v54) >> 4;
            v155 = v51;
            memset(&s, 0, 2 * v149 + 2);
            v51 = _mm_load_si128(&v155);
            p_s = (__m128i *)&s.m128i_i16[v149 + 1];
            v55 = (14 - v152.m128i_i8[0]) & 0xF;
            v57 = p_s->m128i_i16[0];
          }
          p_s->m128i_i16[0] = *((_WORD *)&qword_13ACD8 + v55 - 104470) & v57;
          if ( v152.m128i_i16[0] < 0 )
          {
LABEL_57:
            if ( (unsigned __int16)_mm_cvtsi128_si32(v51) != s.m128i_i16[0]
              || __PAIR32__(_mm_extract_epi16(v51, 2), _mm_extract_epi16(v51, 1)) != *(__int32 *)((char *)s.m128i_i32 + 2)
              || __PAIR32__(_mm_extract_epi16(v51, 4), _mm_extract_epi16(v51, 3)) != *(__int32 *)((char *)&s.m128i_i32[1]
                                                                                                + 2)
              || __PAIR32__(_mm_extract_epi16(v51, 6), _mm_extract_epi16(v51, 5)) != *(__int32 *)((char *)&s.m128i_i32[2]
                                                                                                + 2) )
            {
              eadd(&s, v159, &s, 1);
            }
          }
        }
      }
      else
      {
        s = 0;
        if ( (epi16 & 0x8000u) != 0 )
          goto LABEL_57;
      }
      if ( !memcmp(&s1, &s, 0xEu) )
      {
        v166 = s1;
        v151 += v50;
      }
      v50 >>= 1;
      v49 += 8;
      if ( !v50 )
      {
        v166.m128i_i16[7] = v166.m128i_i16[7] + v146 - 16494;
        v167 = v166;
        s1 = v163;
        v58 = (char *)&qword_13ACD8 - 209372;
        v59 = 4096;
        v146 = (unsigned int)&qword_13ACD8 - 209180;
        do
        {
          v152.m128i_i32[0] = (__int32)v58;
          v155.m128i_i32[0] = v59;
          if ( ecmp((unsigned __int16 *)v146, (unsigned __int16 *)&v166) > 0 )
            break;
          if ( ecmp((unsigned __int16 *)v152.m128i_i32[0], (unsigned __int16 *)&v166) <= 0 )
          {
            ediv(v166.m128i_i16, v152.m128i_i32[0], (int)&v166);
            emul(&s1, (__int16 *)v152.m128i_i32[0], (int)&s1);
            v61 = v155.m128i_i32[0];
            v151 += v155.m128i_i32[0];
            v60 = v152.m128i_i32[0];
          }
          else
          {
            v60 = v152.m128i_i32[0];
            v61 = v155.m128i_i32[0];
          }
          v59 = v61 >> 1;
          v58 = (char *)(v60 + 16);
        }
        while ( v59 );
        v146 = v167.m128i_u16[7];
        goto LABEL_75;
      }
    }
  }
  v151 = 0;
LABEL_76:
  LOWORD(v172) = s1.m128i_i16[7] >> 15;
  *(_DWORD *)((char *)&v172 + 2) = s1.m128i_i16[7] & 0x7FFF;
  HIWORD(v172) = s1.m128i_i16[6];
  LOWORD(v173) = s1.m128i_i16[5];
  WORD1(v173) = s1.m128i_i16[4];
  WORD2(v173) = s1.m128i_i16[3];
  HIWORD(v173) = s1.m128i_i16[2];
  LOWORD(v174) = s1.m128i_i16[1];
  HIWORD(v174) = s1.m128i_i16[0];
  v181 = v174;
  v180[1] = v173;
  v180[0] = v172;
  v182 = 0;
  LOWORD(v172) = (__int16)v146 >> 15;
  *(_DWORD *)((char *)&v172 + 2) = v146 & 0x7FFF;
  HIWORD(v172) = v167.m128i_i16[6];
  LOWORD(v173) = v167.m128i_i16[5];
  WORD1(v173) = v167.m128i_i16[4];
  WORD2(v173) = v167.m128i_i16[3];
  HIWORD(v173) = v167.m128i_i16[2];
  LOWORD(v174) = v167.m128i_i16[1];
  HIWORD(v174) = v167.m128i_i16[0];
  v175 = 0;
  *(_DWORD *)v171 = v174;
  v170 = v173;
  v169 = v172;
  *(_WORD *)&v171[4] = 0;
  v62 = sub_A9680((unsigned __int16 *)v180, (int)&v169);
  v63 = v62 == 10;
  if ( v62 == 10 )
    v62 = 1;
  v147 = v151 + v63;
  if ( v62 )
    goto LABEL_86;
  while ( 1 )
  {
    v64 = _mm_loadl_epi64((const __m128i *)((char *)&v169 + 4));
    v152.m128i_i32[0] = _mm_extract_epi16(v64, 1);
    v155.m128i_i32[0] = _mm_extract_epi16(v64, 2);
    v146 = _mm_extract_epi16(v64, 3);
    v65 = _mm_extract_epi16(v64, 0);
    if ( !(*(_WORD *)v171
         | (unsigned __int16)(v65 | HIWORD(v170) | WORD2(v170) | v146 | v155.m128i_i16[0] | v152.m128i_i16[0])) )
      break;
    v66 = *(unsigned __int16 *)&v171[2];
    v67 = *(unsigned __int16 *)&v171[4];
LABEL_82:
    v68 = _mm_cvtsi32_si128(v66);
    v69 = _mm_cvtsi32_si128(*(unsigned int *)v171);
    v70 = _mm_cvtsi32_si128(HIWORD(v170));
    v71 = _mm_cvtsi32_si128(HIDWORD(v170));
    v72 = _mm_cvtsi32_si128(v146);
    v73 = _mm_cvtsi32_si128(v155.m128i_u32[0]);
    v74 = _mm_cvtsi32_si128(v152.m128i_u32[0]);
    v152 = _mm_unpacklo_epi16(v69, v68);
    v75 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128(v65), v74), _mm_unpacklo_epi16(v73, v72)),
            _mm_unpacklo_epi32(_mm_unpacklo_epi16(v71, v70), v152));
    v76 = _mm_or_si128(
            _mm_add_epi16(v75, v75),
            _mm_srli_epi16(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_unpacklo_epi16(v74, v73), _mm_unpacklo_epi16(v72, v71)),
                _mm_unpacklo_epi32(_mm_unpacklo_epi16(v70, v69), _mm_unpacklo_epi16(v68, _mm_cvtsi32_si128(v67)))),
              0xFu));
    *(_WORD *)&v171[4] = 2 * v67;
    v177 = *(unsigned __int128 *)&v76 >> 32;
    LODWORD(v176) = v169;
    HIWORD(v77) = v76.m128i_i16[7];
    HIWORD(v78) = v76.m128i_i16[6];
    LOWORD(v78) = v76.m128i_i16[7];
    LOWORD(v77) = v78 >> 15;
    v149 = ((v76.m128i_u16[7] >> 14) & 1) + 2 * v77;
    v79 = HIWORD(v177);
    HIWORD(v78) = HIWORD(v177);
    LOWORD(v78) = v76.m128i_i16[6];
    LOWORD(v79) = v78 >> 15;
    v146 = (((unsigned __int32)v76.m128i_i32[3] >> 14) & 1) + 2 * v79;
    HIWORD(v79) = HIWORD(v177);
    LOWORD(v78) = HIWORD(v177);
    HIWORD(v78) = WORD2(v177);
    LOWORD(v79) = v78 >> 15;
    v80 = ((HIWORD(v177) >> 14) & 1) + 2 * v79;
    HIWORD(v78) = v76.m128i_i16[3];
    LOWORD(v78) = WORD2(v177);
    v81 = ((HIDWORD(v177) >> 14) & 1) + 2 * (v78 >> 15);
    HIWORD(v82) = v76.m128i_i16[3];
    HIWORD(v78) = v76.m128i_i16[2];
    LOWORD(v78) = v76.m128i_i16[3];
    LOWORD(v82) = v78 >> 15;
    v155.m128i_i32[0] = ((v76.m128i_u16[3] >> 14) & 1) + 2 * v82;
    v83 = v76.m128i_u16[1];
    HIWORD(v78) = v76.m128i_i16[1];
    LOWORD(v78) = v76.m128i_i16[2];
    LOWORD(v83) = v78 >> 15;
    v152.m128i_i32[0] = (((unsigned __int32)v76.m128i_i32[1] >> 14) & 1) + 2 * v83;
    HIWORD(v78) = v76.m128i_i16[0];
    LOWORD(v78) = v76.m128i_i16[1];
    v179 = 0;
    HIWORD(v178) = 4 * v76.m128i_i16[7];
    LOWORD(v178) = (((unsigned __int16)v76.m128i_i16[7] >> 14) & 1) + 2 * v77;
    *(_WORD *)&v171[2] = 5 * v76.m128i_i16[7];
    HIWORD(v177) = v146;
    *(_WORD *)v171 = (((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                   + v149
                   + v76.m128i_i16[6];
    WORD2(v177) = v80;
    HIWORD(v170) = ((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                    + (unsigned __int16)v149
                    + v76.m128i_u16[6]) >> 16)
                  & 1)
                 + v146
                 + v76.m128i_i16[5];
    WORD1(v177) = v81;
    WORD2(v170) = (((((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                      + (unsigned __int16)v149
                      + v76.m128i_u16[6]) >> 16)
                    & 1)
                   + (unsigned __int16)v146
                   + v76.m128i_u16[5]) >> 16)
                 & 1)
                + v80
                + v76.m128i_i16[4];
    LOWORD(v177) = v155.m128i_i16[0];
    WORD1(v170) = ((((((((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                         + (unsigned __int16)v149
                         + v76.m128i_u16[6]) >> 16)
                       & 1)
                      + (unsigned __int16)v146
                      + v76.m128i_u16[5]) >> 16)
                    & 1)
                   + (unsigned __int16)v80
                   + v76.m128i_u16[4]) >> 16)
                 & 1)
                + v81
                + v76.m128i_i16[3];
    HIWORD(v176) = (((unsigned __int32)v76.m128i_i32[1] >> 14) & 1) + 2 * v83;
    LOWORD(v170) = (((((((((((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                             + (unsigned __int16)v149
                             + v76.m128i_u16[6]) >> 16)
                           & 1)
                          + (unsigned __int16)v146
                          + v76.m128i_u16[5]) >> 16)
                        & 1)
                       + (unsigned __int16)v80
                       + v76.m128i_u16[4]) >> 16)
                     & 1)
                    + v81
                    + v76.m128i_u16[3]) >> 16)
                  & 1)
                 + v155.m128i_i16[0]
                 + v76.m128i_i16[2];
    WORD2(v176) = (((unsigned __int16)v76.m128i_i16[1] >> 14) & 1) + 2 * (v78 >> 15);
    HIWORD(v169) = ((((((((((((((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                                + (unsigned __int16)v149
                                + v76.m128i_u16[6]) >> 16)
                              & 1)
                             + (unsigned __int16)v146
                             + v76.m128i_u16[5]) >> 16)
                           & 1)
                          + (unsigned __int16)v80
                          + v76.m128i_u16[4]) >> 16)
                        & 1)
                       + v81
                       + v76.m128i_u16[3]) >> 16)
                     & 1)
                    + v155.m128i_u16[0]
                    + v76.m128i_u16[2]) >> 16)
                  & 1)
                 + v152.m128i_i16[0]
                 + v76.m128i_i16[1];
    WORD2(v169) = (((((((((((((((((((((unsigned __int16)(4 * v76.m128i_i16[7]) + (unsigned int)v76.m128i_u16[7]) >> 16)
                                  + (unsigned __int16)v149
                                  + v76.m128i_u16[6]) >> 16)
                                & 1)
                               + (unsigned __int16)v146
                               + v76.m128i_u16[5]) >> 16)
                             & 1)
                            + (unsigned __int16)v80
                            + v76.m128i_u16[4]) >> 16)
                          & 1)
                         + v81
                         + v76.m128i_u16[3]) >> 16)
                       & 1)
                      + v155.m128i_u16[0]
                      + v76.m128i_u16[2]) >> 16)
                    & 1)
                   + v152.m128i_u16[0]
                   + v76.m128i_u16[1]) >> 16)
                 & 1)
                + v76.m128i_i16[0]
                + WORD2(v176);
    v62 = sub_A9680((unsigned __int16 *)v180, (int)&v169);
    --v147;
    if ( v62 )
      goto LABEL_85;
  }
  v66 = *(unsigned __int16 *)&v171[2];
  v67 = *(unsigned __int16 *)&v171[4];
  v149 = v65;
  if ( *(_DWORD *)&v171[2] )
    goto LABEL_82;
  LOBYTE(v62) = 0;
LABEL_85:
  v10 = v158;
LABEL_86:
  LOBYTE(v168[0]) = v62 + 48;
  BYTE1(v168[0]) = 46;
  v84 = ~v10;
  v85 = -34;
  if ( v84 > 0xFFFFFFDE )
    v85 = v84;
  v150 = v85;
  v157 = 1 - v85;
  v152.m128i_i32[0] = -1;
  do
  {
    v86 = *(_WORD *)&v171[4];
    *(_WORD *)&v171[4] *= 2;
    v87 = *(_WORD *)&v171[2];
    HIWORD(v88) = *(_WORD *)&v171[2];
    LOWORD(v88) = v86;
    *(_WORD *)&v171[2] = v88 >> 15;
    v89 = *(_WORD *)v171;
    LOWORD(v88) = v87;
    HIWORD(v88) = *(_WORD *)v171;
    *(_WORD *)v171 = v88 >> 15;
    v90 = HIWORD(v170);
    LOWORD(v88) = v89;
    HIWORD(v88) = HIWORD(v170);
    HIWORD(v170) = v88 >> 15;
    v91 = WORD2(v170);
    LOWORD(v88) = v90;
    HIWORD(v88) = WORD2(v170);
    WORD2(v170) = v88 >> 15;
    v92 = WORD1(v170);
    LOWORD(v88) = v91;
    HIWORD(v88) = WORD1(v170);
    WORD1(v170) = v88 >> 15;
    v93 = HIWORD(v169);
    v94 = v170;
    LOWORD(v88) = v92;
    HIWORD(v88) = v170;
    LOWORD(v170) = v88 >> 15;
    LOWORD(v88) = v94;
    HIWORD(v88) = HIWORD(v169);
    HIWORD(v169) = v88 >> 15;
    HIWORD(v88) = WORD2(v169);
    LOWORD(v88) = v93;
    WORD2(v169) = v88 >> 15;
    LODWORD(v176) = v169;
    HIWORD(v95) = *(_WORD *)&v171[2];
    HIWORD(v88) = *(_WORD *)v171;
    LOWORD(v88) = *(_WORD *)&v171[2];
    LOWORD(v95) = v88 >> 15;
    v154 = ((*(unsigned __int16 *)&v171[2] >> 14) & 1) + 2 * v95;
    v96 = HIWORD(v170);
    HIWORD(v88) = HIWORD(v170);
    LOWORD(v88) = *(_WORD *)v171;
    LOWORD(v96) = v88 >> 15;
    v149 = ((*(_DWORD *)v171 >> 14) & 1) + 2 * v96;
    LOWORD(v88) = HIWORD(v170);
    HIWORD(v88) = WORD2(v170);
    LOWORD(v96) = v88 >> 15;
    LOWORD(v88) = WORD2(v170);
    HIWORD(v88) = WORD1(v170);
    v97 = ((HIDWORD(v170) >> 14) & 1) + 2 * (v88 >> 15);
    HIWORD(v98) = WORD1(v170);
    LOWORD(v88) = WORD1(v170);
    HIWORD(v88) = v170;
    LOWORD(v98) = v88 >> 15;
    v146 = ((WORD1(v170) >> 14) & 1) + 2 * v98;
    v99 = HIWORD(v169);
    HIWORD(v88) = HIWORD(v169);
    LOWORD(v88) = v170;
    LOWORD(v99) = v88 >> 15;
    v155.m128i_i32[0] = (((unsigned int)v170 >> 14) & 1) + 2 * v99;
    LOWORD(v88) = HIWORD(v169);
    HIWORD(v88) = WORD2(v169);
    v179 = 0;
    HIWORD(v178) = 4 * *(_WORD *)&v171[2];
    v100 = (unsigned __int16)(4 * *(_WORD *)&v171[2]) + *(unsigned __int16 *)&v171[2];
    LOWORD(v178) = ((*(_WORD *)&v171[2] >> 14) & 1) + 2 * v95;
    *(_WORD *)&v171[2] *= 5;
    v101 = HIWORD(v100) + (unsigned __int16)v154 + *(unsigned __int16 *)v171;
    HIWORD(v177) = v149;
    *(_WORD *)v171 = v101;
    v102 = (HIWORD(v101) & 1) + (unsigned __int16)v149 + HIWORD(v170);
    WORD2(v177) = ((HIWORD(v170) >> 14) & 1) + 2 * v96;
    HIWORD(v170) += (BYTE2(v101) & 1) + v149;
    v103 = (HIWORD(v102) & 1) + WORD2(v177) + WORD2(v170);
    WORD1(v177) = v97;
    WORD2(v170) += (BYTE2(v102) & 1) + WORD2(v177);
    LOWORD(v177) = v146;
    v104 = (HIWORD(v103) & 1) + v97 + WORD1(v170);
    WORD1(v170) += (BYTE2(v103) & 1) + v97;
    HIWORD(v176) = v155.m128i_i16[0];
    v105 = (HIWORD(v104) & 1) + (unsigned __int16)v146 + (unsigned __int16)v170;
    LOWORD(v170) = (BYTE2(v104) & 1) + v146 + v170;
    v106 = (HIWORD(v105) & 1) + v155.m128i_u16[0] + HIWORD(v169);
    WORD2(v176) = ((HIWORD(v169) >> 14) & 1) + 2 * (v88 >> 15);
    HIWORD(v169) += (BYTE2(v105) & 1) + v155.m128i_i16[0];
    WORD2(v169) += (BYTE2(v106) & 1) + WORD2(v176);
    v107 = sub_A9680((unsigned __int16 *)v180, (int)&v169);
    v108 = v152.m128i_i32[0];
    *((_BYTE *)v168 + v152.m128i_i32[0] + 3) = v107 + 48;
    v152.m128i_i32[0] = v108 + 1;
  }
  while ( v108 + 1 < v162 );
  v109 = v107 == 5;
  if ( v107 < 5u )
  {
    v47 = a1;
    v9 = (unsigned int)v148;
    v18 = v153;
  }
  else
  {
    v110 = (char *)v168 + v157;
    v47 = a1;
    v18 = v153;
    if ( !v109
      || HIDWORD(v169)
      || (_WORD)v170
      || __PAIR32__(WORD1(v170), 0) != WORD2(v170)
      || __PAIR32__(HIWORD(v170), 0) != *(unsigned __int16 *)v171
      || *(_DWORD *)&v171[2]
      || (*(v110 - 1) & 1) != 0 )
    {
      v111 = *(v110 - 1) & 0x7F;
      if ( v111 == 46 )
      {
LABEL_102:
        v113 = *(v110 - 2);
        *(v110 - 2) = v113 + 1;
        if ( v113 >= 57 )
        {
          ++v147;
          *(v110 - 2) = 49;
        }
      }
      else
      {
        v110 = (char *)v168 + v157;
        while ( 1 )
        {
          *(v110 - 1) = v111 + 1;
          if ( v111 < 0x39u )
            break;
          *(v110 - 1) = 48;
          v112 = *(v110 - 2);
          --v110;
          v111 = v112 & 0x7F;
          if ( v111 == 46 )
            goto LABEL_102;
        }
      }
    }
    v9 = (unsigned int)v148;
  }
  v114 = (char *)v168 - v150 + 2;
  do
  {
    v115 = *(v114 - 2);
    --v114;
  }
  while ( v115 == 48 );
  if ( v115 == 46 )
    *v114++ = 48;
  *v114 = 0;
  if ( !v18 )
    goto LABEL_46;
LABEL_111:
  if ( v9 )
    v18 = v18 - 2 - v9 - (v147 >= 0);
  v116 = -v147;
  if ( -v147 < 1 )
    v116 = v147;
  if ( !v147 || v18 < v116 )
  {
    if ( v9 )
    {
      v125 = __strlen_chk((char *)v168 + 2, 46);
      v126 = v148;
      v47 = a1;
      if ( (unsigned int)v148 < v125 )
      {
        v125 = (unsigned int)v148;
        while ( *((_BYTE *)v168 + v125 + 1) == 48 )
        {
          if ( !--v125 )
          {
            v125 = 0;
            break;
          }
        }
        *((_BYTE *)v168 + v125 + 2) = 0;
      }
      v148 = (unsigned __int16 *)((char *)v126 - v125);
      v48 = v18 - (v147 < 0 && v18 != 0);
      if ( v48 )
      {
        memset(a1, 32, v48);
        *((_BYTE *)a1 + v48) = 0;
      }
      else
      {
        v48 = 0;
      }
    }
    else
    {
      v48 = 0;
      v148 = nullptr;
      v47 = a1;
    }
LABEL_145:
    v142 = v168;
    v128 = v48 + qsnprintf((_BYTE *)v47 + v48, (int)a2 - v48, (char *)&qword_13ACD8 - 312645, (int)v156);
    v9 = (unsigned int)v148;
    if ( v148 )
      goto LABEL_169;
    goto LABEL_173;
  }
  if ( HIWORD(v168[0]) == 48 )
  {
    BYTE1(v168[0]) = 0;
  }
  else
  {
    v153 = v18;
    v117 = __strlen_chk((char *)v168 + 2, 46);
    __memmove_chk((char *)v168 + 1, (char *)v168 + 2, v117 + 1, 47);
    v9 = (unsigned int)v148;
  }
  v152.m128i_i32[0] = 0;
  if ( v9 )
  {
    v118 = -1;
    if ( v147 > 0 )
      v118 = -v116;
    v119 = v118 + v18;
    if ( v119 )
    {
      memset(a1, 32, v119);
      v9 = (unsigned int)v148;
      *((_BYTE *)a1 + v119) = 0;
      v152.m128i_i32[0] = v119;
    }
    if ( v147 > 0 )
    {
LABEL_126:
      v120 = __strlen_chk(v168, 48);
      v121 = v148;
      v122 = v148;
      v155.m128i_i32[0] = v120;
      if ( v120 > v116 )
      {
        v123 = v116 + 1;
        v155.m128i_i32[0] = v116 + 1;
        if ( v148 )
        {
          v124 = v120 - v123;
          if ( v124 > (unsigned int)v148 )
          {
            *((_BYTE *)v168 + (_DWORD)v148 + v123) = 0;
            v124 = (unsigned int)v121;
          }
          v122 = (unsigned __int16 *)((char *)v121 - v124);
        }
        else
        {
          v122 = nullptr;
        }
      }
      v146 = (unsigned int)v122;
      v143 = v168;
      v142 = (int *)v155.m128i_i32[0];
      v131 = qsnprintf(
               (_BYTE *)a1 + v152.m128i_i32[0],
               (int)a2 - v152.m128i_i32[0],
               (char *)&qword_13ACD8 - 312652,
               (int)v156);
      if ( !v148 )
        v146 += *((_BYTE *)v168 + v155.m128i_i32[0]) == 0;
      v132 = v155.m128i_i32[0];
      v133 = v152.m128i_i32[0] + v131;
      if ( v155.m128i_i32[0] <= v116 )
      {
        v135 = v116 + 1 - v155.m128i_i32[0];
        memset((char *)a1 + v133, 48, v135);
        v134 = a1;
        v132 = v155.m128i_i32[0];
        v133 += v135;
      }
      else
      {
        v134 = a1;
      }
      *((_BYTE *)v134 + v133) = 46;
      v128 = v133 + 1;
      v136 = (int *)((char *)v168 + v132);
      goto LABEL_167;
    }
  }
  else if ( v147 > 0 )
  {
    goto LABEL_126;
  }
  v127 = v152.m128i_i32[0];
  if ( *v156 )
  {
    *((_BYTE *)a1 + v152.m128i_i32[0]) = *v156;
    ++v127;
  }
  *(_WORD *)((char *)a1 + v127) = 11824;
  v128 = v127 + 2;
  if ( !v9 || (v147 = 0, (int)v116 <= (int)v9) )
  {
    v129 = v116 - 1;
    if ( v129 )
    {
      memset((char *)a1 + v128, 48, v129);
      v9 = (unsigned int)v148;
      v128 += v129;
      v130 = (unsigned __int16 *)((char *)v148 - v129);
      if ( !v148 )
        v130 = nullptr;
    }
    else
    {
      v130 = (unsigned __int16 *)v9;
    }
    v146 = (unsigned int)v130;
    if ( v9 )
    {
      v136 = v168;
      v137 = __strlen_chk(v168, 48);
      v138 = v146;
      if ( v137 > v146 )
      {
        *((_BYTE *)v168 + v146) = 0;
        v137 = v138;
      }
      v146 = v138 - v137;
    }
    else
    {
      v136 = v168;
    }
    v134 = a1;
LABEL_167:
    v128 += qsnprintf((_BYTE *)v134 + v128, (int)a2 - v128, (char *)&qword_13ACD8 - 331389, (int)v136);
    v147 = 0;
    v9 = v146;
  }
  if ( v9 )
  {
LABEL_169:
    v139 = (size_t)a2 - v128;
    if ( v9 <= (unsigned int)a2 - v128 )
      v139 = v9;
    if ( v139 )
    {
      memset((char *)a1 + v128, 48, v139);
      v128 += v139;
      v140 = a1;
      *((_BYTE *)a1 + v128) = 0;
      goto LABEL_174;
    }
  }
LABEL_173:
  v140 = a1;
LABEL_174:
  if ( v147 )
  {
    v145 = (_BYTE *)v147;
    v144 = (char *)(&qword_13ACD8 - 39080);
    v143 = (int *)((char *)a2 - v128);
    v142 = (int *)((char *)v140 + v128);
LABEL_176:
    qsnprintf(v142, (int)v143, v144, (int)v145);
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 17F20: using guessed type int __cdecl __memmove_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13E34C: using guessed type int under_debugger;
