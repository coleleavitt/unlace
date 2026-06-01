/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: realtoasc
// Address: 0x0000000100077600

//----- (0000000100077600) ----------------------------------------------------
int __fastcall realtoasc(char *__b, __int64 a2, __int64 a3, int a4)
{
  char *v5; // r13
  __int16 v6; // ax
  __int64 v7; // r8
  const char *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  bool v11; // si
  bool v12; // di
  __int64 v13; // r12
  __m128i v14; // xmm0
  unsigned int v15; // ebx
  unsigned int v16; // r10d
  int v17; // edi
  const char *v18; // rcx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  int v21; // esi
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // r8d
  __int16 v25; // r14
  __int16 v26; // di
  __int16 v27; // si
  int v28; // r12d
  int epi16; // r13d
  int v30; // r15d
  int v31; // r12d
  int v32; // esi
  int v33; // edx
  unsigned int v34; // ecx
  __int16 v35; // r14
  unsigned int v36; // et0
  __int16 v37; // di
  __int16 v38; // r10
  __int16 v39; // r11
  unsigned int v40; // r8d
  __int16 v41; // r8
  __int16 v42; // bx
  unsigned int v43; // edx
  unsigned __int16 v44; // r9
  unsigned __int16 v45; // r14
  unsigned __int16 v46; // di
  unsigned __int16 v47; // r10
  unsigned __int16 v48; // r11
  __int16 v49; // r8
  bool v50; // cf
  unsigned int v51; // r11d
  unsigned int v52; // r10d
  int v53; // r12d
  unsigned int v54; // edi
  __m128i inserted; // xmm0
  unsigned int v56; // edx
  unsigned int v57; // esi
  unsigned int v58; // r13d
  __m128i v59; // xmm0
  unsigned int v60; // ecx
  unsigned int v61; // r11d
  __int16 *v62; // r15
  unsigned int v63; // ebx
  __m128i v64; // xmm2
  __m128i v65; // xmm1
  unsigned __int64 v66; // r13
  unsigned int v67; // r14d
  signed int v68; // eax
  unsigned int v69; // r12d
  __m128i *v70; // rcx
  __int16 v71; // dx
  bool v72; // cl
  bool v73; // al
  bool v74; // sf
  int v75; // ebx
  __int16 v76; // ax
  unsigned int v77; // r12d
  __int16 *v78; // r15
  __m128i v79; // xmm0
  unsigned __int16 v80; // cx
  unsigned __int16 v81; // r8
  unsigned __int16 v82; // si
  unsigned __int16 v83; // di
  __int16 v84; // di
  int v85; // esi
  unsigned __int16 v86; // di
  __int32 v88; // eax
  int v89; // r10d
  int v90; // edi
  __int16 *v91; // r12
  __int32 v92; // esi
  int v93; // ebx
  int v94; // r8d
  __int16 *v95; // r15
  __int16 v96; // r13
  __int16 v97; // cx
  __int16 v98; // dx
  __int16 v99; // di
  __int16 v100; // r8
  __int16 v101; // r9
  __int16 v102; // si
  unsigned __int16 v103; // ax
  unsigned __int16 v104; // r11
  int v105; // r11d
  unsigned __int16 v106; // si
  unsigned __int16 v107; // ax
  __int16 v108; // cx
  __int16 v109; // ax
  int v110; // edx
  __m128i v111; // xmm0
  __int16 v112; // r10
  unsigned int v113; // et0
  unsigned __int16 v114; // bx
  unsigned __int16 v115; // r11
  unsigned __int16 v116; // r8
  unsigned __int16 v117; // di
  int v118; // edx
  unsigned __int16 v119; // r12
  __int16 v120; // ax
  int v121; // ecx
  __int16 v122; // r13
  __int16 v123; // si
  __int16 v124; // ax
  __int16 v125; // r9
  __int16 v126; // r14
  __int16 v127; // r15
  unsigned __int16 v128; // r13
  unsigned __int16 v129; // r15
  unsigned __int16 v130; // r14
  unsigned __int16 v131; // r9
  unsigned int v132; // edx
  unsigned int v133; // edx
  unsigned int v134; // ecx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int16 v137; // r13
  unsigned int v138; // et0
  unsigned __int16 v139; // r15
  unsigned __int16 v140; // r12
  unsigned __int16 v141; // bx
  unsigned __int16 v142; // di
  unsigned __int16 v143; // r14
  __int32 v144; // ecx
  __int16 v145; // ax
  __int16 v146; // si
  __int16 v147; // r8
  __int16 v148; // r11
  __int16 v149; // r9
  __int16 v150; // r10
  unsigned __int16 v151; // dx
  unsigned __int16 v152; // ax
  unsigned __int16 v153; // r10
  unsigned __int16 v154; // r9
  unsigned __int16 v155; // r11
  unsigned __int16 v156; // r8
  unsigned int v157; // edx
  unsigned int v158; // eax
  unsigned int v159; // eax
  unsigned __int16 v160; // ax
  __m128i v161; // xmm0
  unsigned __int8 v162; // cl
  char *v163; // rax
  char *v164; // rdx
  char v165; // cl
  char *v166; // rax
  int v167; // ecx
  unsigned int v168; // r15d
  unsigned int v169; // r14d
  unsigned int v170; // eax
  int v171; // esi
  unsigned int v172; // r12d
  unsigned int v173; // ecx
  __int64 v174; // rbx
  unsigned int v175; // r12d
  size_t v176; // rax
  int v177; // ecx
  unsigned int v178; // r12d
  __int64 v179; // rbx
  int v180; // esi
  __int64 v181; // r14
  unsigned int v182; // ecx
  __int64 v183; // r15
  unsigned int v184; // eax
  unsigned int v185; // r14d
  unsigned int v186; // r12d
  unsigned int v187; // eax
  unsigned int v188; // r15d
  int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rbx
  int v192; // r15d
  __int64 v193; // r14
  size_t v194; // rdx
  __int64 v195; // r15
  unsigned int v196; // eax
  signed int v197; // eax
  __int64 v198; // rbx
  unsigned __int8 v199; // [rsp+8h] [rbp-158h]
  char *v200; // [rsp+8h] [rbp-158h]
  const char *v201; // [rsp+10h] [rbp-150h]
  unsigned int v202; // [rsp+18h] [rbp-148h]
  __m128i v203; // [rsp+20h] [rbp-140h] BYREF
  __m128i v204; // [rsp+30h] [rbp-130h] BYREF
  char *v205; // [rsp+40h] [rbp-120h]
  __int64 v206; // [rsp+48h] [rbp-118h]
  char *v207; // [rsp+50h] [rbp-110h]
  __int64 v208; // [rsp+58h] [rbp-108h]
  __int64 v209; // [rsp+60h] [rbp-100h]
  __int64 v210; // [rsp+68h] [rbp-F8h]
  unsigned int v211; // [rsp+74h] [rbp-ECh]
  __int64 v212; // [rsp+78h] [rbp-E8h]
  __int64 v213; // [rsp+80h] [rbp-E0h]
  int v214; // [rsp+8Ch] [rbp-D4h]
  __m128i v215; // [rsp+90h] [rbp-D0h] BYREF
  __m128i v216; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v217; // [rsp+B0h] [rbp-B0h] BYREF
  char __s[48]; // [rsp+C0h] [rbp-A0h] BYREF
  _WORD v219[2]; // [rsp+F0h] [rbp-70h] BYREF
  __m128i v220; // [rsp+F4h] [rbp-6Ch] BYREF
  int v221; // [rsp+104h] [rbp-5Ch]
  unsigned __int16 v222[3]; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v223; // [rsp+116h] [rbp-4Ah]
  int v224; // [rsp+11Eh] [rbp-42h]
  __int16 v225; // [rsp+122h] [rbp-3Eh]
  __int16 v226; // [rsp+124h] [rbp-3Ch]
  __int64 savedregs; // [rsp+160h] [rbp+0h] BYREF

  if ( a2 >= 0 )
  {
    v5 = __b;
    v6 = *(_WORD *)(a3 + 14);
    v7 = v6 & 0x7FFF;
    if ( (_DWORD)v7 == 0x7FFF )
    {
      if ( *(_WORD *)(a3 + 2) | *(_WORD *)(a3 + 12) & 0x7FFF || *(_QWORD *)(a3 + 4) || *(_WORD *)a3 )
      {
        v8 = "NaN";
      }
      else if ( v6 < 0 )
      {
        v8 = "-Inf";
      }
      else
      {
        v8 = "+Inf";
      }
      return (unsigned int)qstrncpy(__b, (__int64)v8, a2);
    }
    v9 = BYTE1(a4);
    v199 = a4;
    v10 = BYTE2(a4);
    if ( v10 )
    {
      v11 = v9 >= v10 + 3;
      v12 = v9 + 3 < (unsigned __int64)a2;
      v13 = 0;
      if ( !v12 || !v11 )
        v9 = 0;
      v202 = v9;
      if ( v12 && v11 )
        v13 = v10;
    }
    else
    {
      v202 = v9;
      v13 = 0;
    }
    v14 = _mm_loadl_epi64((const __m128i *)a3);
    v15 = *(unsigned __int16 *)(a3 + 8);
    v16 = *(unsigned __int16 *)(a3 + 10);
    v17 = *(unsigned __int16 *)(a3 + 12);
    v215 = _mm_loadu_si128((const __m128i *)&xmmword_1000A1550);
    v18 = &_s;
    if ( v6 < 0 )
      v18 = "-";
    v201 = v18;
    v206 = v13;
    if ( (_DWORD)v7 == 0x3FFF )
    {
      v19 = 0x8000;
      v20 = v17;
      if ( __OFSUB__(-(__int16)v17, 1) )
      {
        v23 = _mm_movemask_pd((__m128d)_mm_cvtepi16_epi64(_mm_cmpeq_epi16((__m128i)0LL, v14)));
        if ( ((unsigned __int8)v23
            & ((unsigned __int8)v23 >> 1)
            & (_mm_insert_epi16(_mm_insert_epi16(_mm_shufflelo_epi16(v14, 180), v16, 0), v15, 1).u64[0] == 0)) != 0 )
        {
          v205 = v5;
          v208 = a2;
          v203.i32[0] = 0;
          LOWORD(v23) = 0x8000;
          LODWORD(v210) = v23;
          LOWORD(v24) = 0x3FFF;
          v25 = 0;
          v26 = 0;
          LODWORD(v209) = 0;
          v214 = 0;
          v27 = 0;
          v28 = 0;
          goto LABEL_98;
        }
        goto LABEL_34;
      }
    }
    else
    {
      v19 = 0x3FFF;
      v20 = v7;
      if ( !(_DWORD)v7 )
      {
        if ( !(_DWORD)v13 )
          return qsnprintf(v5, a2, "%s0.0", v201);
        v208 = a2;
        strcpy(__s, "0.0");
        v21 = 0;
        v22 = v202;
LABEL_127:
        v214 = v21;
        if ( v22 )
        {
          if ( (_DWORD)v13 )
          {
            v22 = (~v21 >> 31) + v22 - v13 - 2;
            v168 = -v21;
            if ( v21 > 0 )
              v168 = v21;
            if ( !v21 || v168 > v22 )
            {
              v169 = v22;
              v170 = strlen(&__s[2]);
              v171 = v214;
              if ( (unsigned int)v13 < v170 )
              {
                v170 = v13;
                while ( __s[v170 + 1] == 48 )
                {
                  if ( !--v170 )
                  {
                    v170 = 0;
                    break;
                  }
                }
                __s[v170 + 2] = 0;
              }
              v172 = v13 - v170;
              v173 = v169 - (v169 != 0 && v171 < 0);
              if ( v173 )
              {
                v174 = v173;
                memset(v5, 32, v173);
                v5[v174] = 0;
              }
              else
              {
                v174 = 0;
              }
              goto LABEL_171;
            }
LABEL_147:
            if ( __s[2] != 48 || __s[3] )
            {
              v175 = v22;
              v176 = strlen(&__s[2]);
              memmove(&__s[1], &__s[2], v176 + 1);
              v21 = v214;
              if ( !(_DWORD)v206 )
                goto LABEL_161;
            }
            else
            {
              v175 = v22;
              __s[1] = 0;
              if ( !(_DWORD)v206 )
                goto LABEL_161;
            }
            v177 = -1;
            if ( v21 > 0 )
              v177 = -v168;
            v178 = v177 + v175;
            if ( v178 )
            {
              v179 = v178;
              memset(v5, 32, v178);
              v180 = v214;
              v5[v178] = 0;
              if ( v180 > 0 )
              {
LABEL_162:
                v184 = strlen(__s);
                if ( v168 >= v184 )
                {
                  v186 = v206;
                  LODWORD(v213) = v206;
                  v185 = v184;
                }
                else
                {
                  v185 = v168 + 1;
                  v186 = v206;
                  if ( (_DWORD)v206 )
                  {
                    v187 = v184 - v185;
                    if ( v187 > (unsigned int)v206 )
                    {
                      __s[(int)(v185 + v206)] = 0;
                      v187 = v186;
                    }
                    LODWORD(v213) = v186 - v187;
                  }
                  else
                  {
                    LODWORD(v213) = 0;
                  }
                }
                v205 = v5;
                v189 = qsnprintf(&v5[v179], v208 - v179, "%s%.*s", v201, v185, __s);
                v190 = v185;
                if ( v186 )
                  v172 = v213;
                else
                  v172 = (__s[v185] == 0) + (_DWORD)v213;
                v191 = v189 + v179;
                if ( v185 <= v168 )
                {
                  v192 = v168 - v185 + 1;
                  v5 = v205;
                  v193 = v192;
                  v194 = v192;
                  v195 = v190;
                  memset(&v205[v191], 48, v194);
                  v190 = v195;
                  v191 += v193;
                  v183 = v208;
                }
                else
                {
                  v183 = v208;
                  v5 = v205;
                }
                v5[v191] = 46;
                v181 = v191 + 1;
LABEL_190:
                v214 = 0;
                v181 += qsnprintf(&v5[v181], v183 - v181, "%s", &__s[v190]);
                goto LABEL_191;
              }
LABEL_156:
              if ( *v201 )
                v5[v179++] = *v201;
              v181 = v179 + 2;
              *(_WORD *)&v5[v179] = 11824;
              v182 = v206;
              if ( (_DWORD)v206 && (int)v168 > (int)v206 )
              {
                v214 = 0;
                v183 = v208;
                goto LABEL_192;
              }
              v188 = v168 - 1;
              if ( v188 )
              {
                memset(&v5[v181], 48, v188);
                v181 += v188;
                v182 = v206;
                v172 = v206 - v188;
                if ( !(_DWORD)v206 )
                  v172 = 0;
              }
              else
              {
                v172 = v206;
              }
              v183 = v208;
              if ( v182 )
              {
                v196 = strlen(__s);
                if ( v172 < v196 )
                {
                  __s[v172] = 0;
                  v196 = v172;
                }
                v172 -= v196;
              }
              v190 = 0;
              goto LABEL_190;
            }
LABEL_161:
            v179 = 0;
            if ( v21 > 0 )
              goto LABEL_162;
            goto LABEL_156;
          }
          v174 = 0;
          v168 = -v21;
          if ( v21 > 0 )
            v168 = v21;
          if ( v21 )
          {
            v172 = 0;
            if ( v168 <= v22 )
              goto LABEL_147;
LABEL_171:
            v183 = v208;
            v181 = v174 + qsnprintf(&v5[v174], v208 - v174, "%s%s", v201, __s);
LABEL_191:
            v182 = v172;
LABEL_192:
            if ( v182 )
            {
              v197 = v183 - v181;
              if ( (_DWORD)v183 != (_DWORD)v181 )
              {
                if ( v182 < v197 )
                  v197 = v182;
                v198 = v197;
                memset(&v5[v181], 48, v197);
                v181 += v198;
                v5[v181] = 0;
              }
            }
            if ( v214 )
              qsnprintf(&v5[v181], v183 - v181, "e%d", v214);
            return __stack_chk_guard;
          }
        }
        else
        {
          v174 = 0;
        }
        v172 = 0;
        goto LABEL_171;
      }
    }
    if ( v19 > v20 )
    {
      v208 = a2;
      v205 = v5;
      epi16 = _mm_extract_epi16(v14, 3);
      v30 = _mm_extract_epi16(v14, 2);
      v31 = _mm_extract_epi16(v14, 1);
      v32 = _mm_cvtsi128_si32(v14);
      v33 = 0;
      while ( 1 )
      {
        LODWORD(v213) = v33;
        v209 = v7;
        v204.i32[0] = v15;
        LODWORD(v210) = v17;
        v34 = (unsigned __int16)v17;
        v203.i32[0] = v16;
        HIWORD(v36) = v17;
        LOWORD(v36) = v16;
        v35 = v36 >> 1;
        HIWORD(v36) = v16;
        LOWORD(v36) = v15;
        v37 = v36 >> 1;
        HIWORD(v36) = v15;
        LOWORD(v36) = epi16;
        v38 = v36 >> 1;
        HIWORD(v36) = epi16;
        LOWORD(v36) = v30;
        v39 = v36 >> 1;
        HIWORD(v40) = HIWORD(v30);
        HIWORD(v36) = v30;
        LOWORD(v36) = v31;
        v41 = v36 >> 1;
        HIWORD(v36) = v31;
        LOWORD(v36) = v32;
        v42 = v36 >> 1;
        v43 = v32 << 15;
        HIWORD(v36) = v34 >> 1;
        LOWORD(v36) = v35;
        v44 = v36 >> 1;
        HIWORD(v36) = v35;
        LOWORD(v36) = v37;
        v45 = v36 >> 1;
        HIWORD(v36) = v37;
        LOWORD(v36) = v38;
        v46 = v36 >> 1;
        HIWORD(v36) = v38;
        LOWORD(v36) = v39;
        v47 = v36 >> 1;
        HIWORD(v36) = v39;
        LOWORD(v36) = v41;
        v48 = v36 >> 1;
        HIWORD(v36) = v41;
        LOWORD(v36) = v42;
        v49 = v36 >> 1;
        LOWORD(v36) = (_WORD)v32 << 15;
        HIWORD(v36) = v42;
        LOWORD(v43) = v36 >> 1;
        LODWORD(v212) = v32;
        v50 = __CFADD__((_WORD)v32, v49);
        LOWORD(v40) = v32 + v49;
        v214 = v31;
        v51 = (unsigned __int16)v31 + v50 + v48;
        v15 = v204.i32[0];
        v52 = HIWORD(v51) + (unsigned __int16)v30 + v47;
        v53 = epi16;
        v54 = HIWORD(v52) + (unsigned __int16)epi16 + v46;
        inserted = _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v43), v40, 1), v51, 2),
                       v52,
                       3),
                     v54,
                     4);
        v56 = HIWORD(v54) + v204.u16[0] + v45;
        v16 = v203.i32[0];
        v57 = HIWORD(v56) + v203.u16[0] + v44;
        v58 = HIWORD(v57) + v34 + (v34 >> 2);
        v59 = _mm_insert_epi16(_mm_insert_epi16(_mm_insert_epi16(inserted, v56, 5), v57, 6), v58, 7);
        if ( v58 >= 0x10000 )
        {
          v59 = _mm_or_si128(
                  _mm_srli_epi16(v59, 1u),
                  _mm_slli_epi16(_mm_insert_epi16(_mm_srli_si128(v59, 2), HIWORD(v58), 7), 0xFu));
          v60 = v209;
          v61 = v209 + 4;
        }
        else
        {
          v60 = v209;
          v61 = v209 + 3;
        }
        epi16 = v53;
        if ( (unsigned __int16)_mm_cvtsi128_si32(v59) || (unsigned __int16)v61 > 0x3FFEu )
          break;
        v33 = v213 - 1;
        v32 = _mm_extract_epi16(v59, 1);
        v31 = _mm_extract_epi16(v59, 2);
        v30 = _mm_extract_epi16(v59, 3);
        epi16 = _mm_extract_epi16(v59, 4);
        v15 = _mm_extract_epi16(v59, 5);
        v16 = _mm_extract_epi16(v59, 6);
        v17 = _mm_extract_epi16(v59, 7);
        v7 = v61;
        if ( (_DWORD)v213 == -33 )
        {
          v214 = v31;
          LODWORD(v212) = v32;
          LODWORD(v213) = -34;
          goto LABEL_76;
        }
      }
      v61 = v60;
      v17 = v210;
LABEL_76:
      v217.i16[0] = v212;
      v217.i16[1] = v214;
      v217.i16[2] = v30;
      v217.i16[3] = epi16;
      v217.i16[4] = v15;
      v88 = v16;
      v217.i16[5] = v16;
      v217.i16[6] = v17;
      v217.i16[7] = v61;
      v215 = _mm_loadu_si128((const __m128i *)&xmmword_1000A1550);
      v89 = v17;
      v90 = v30;
      v91 = (__int16 *)qword_1000A1560;
      v92 = v15;
      v93 = -4096;
      v94 = epi16;
      v95 = &word_1000A163E;
      v96 = v212;
      v97 = v214;
      LODWORD(v209) = v90;
      v98 = v90;
      LODWORD(v207) = v94;
      v99 = v94;
      v204.i32[0] = v92;
      v100 = v92;
      v203.i32[0] = v88;
      v101 = v88;
      LODWORD(v210) = v89;
      v211 = v61;
      v102 = v61;
      if ( (v61 & 0x8000u) != 0 )
        goto LABEL_80;
LABEL_77:
      v103 = 0x3FFF;
      v104 = v102;
      if ( v102 != 0x3FFF || (v103 = 0x8000, v104 = v89, !__OFSUB__(-(__int16)v89, 1)) )
      {
        if ( v103 > v104 )
        {
          while ( 1 )
          {
LABEL_80:
            v105 = 2 * (*v95 >= 0) - 1;
            if ( ((v102 ^ *v95) & 0x8000u) == 0 )
            {
              v106 = v102 & 0x7FFF;
              v107 = *v95 & 0x7FFF;
              if ( v107 == v106 )
              {
                v107 = *(v95 - 1);
                v106 = v89;
                if ( v107 == (_WORD)v89 )
                {
                  v107 = *(v95 - 2);
                  v106 = v101;
                  if ( v107 == v101 )
                  {
                    v107 = *(v95 - 3);
                    v106 = v100;
                    if ( v107 == v100 )
                    {
                      v107 = *(v95 - 4);
                      v106 = v99;
                      if ( v107 == v99 )
                      {
                        v107 = *(v95 - 5);
                        v106 = v98;
                        if ( v107 == v98 )
                        {
                          v107 = *(v95 - 6);
                          v106 = v97;
                          if ( v107 == v97 )
                          {
                            v107 = *(v95 - 7);
                            v106 = v96;
                            if ( v107 == v96 )
                            {
LABEL_92:
                              emul(v217.i16, v91, (__int64)&v217);
                              emul(v215.i16, v91, (__int64)&v215);
                              LODWORD(v213) = v93 + v213;
                              goto LABEL_93;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v107 <= v106 )
                v105 = 1 - 2 * (*v95 >= 0);
            }
            if ( v105 >= 0 )
              goto LABEL_92;
LABEL_93:
            if ( (unsigned int)(v93 + 1) < 3 )
              break;
            v91 += 8;
            v102 = v217.i16[7];
            LOWORD(v89) = v217.i16[6];
            v101 = v217.i16[5];
            v100 = v217.i16[4];
            v99 = v217.i16[3];
            v98 = v217.i16[2];
            v96 = v217.i16[0];
            v97 = v217.i16[1];
            v95 += 8;
            v93 /= 2;
            if ( v217.i16[7] >= 0 )
              goto LABEL_77;
          }
        }
      }
      ediv((__int16 *)&xmmword_1000A1550, v215.i16, (__int64)&v215);
      v28 = v213;
LABEL_97:
      v25 = v204.i16[0];
      v27 = v212;
      v26 = (__int16)v207;
      LOWORD(v24) = v211;
LABEL_98:
      v222[0] = (unsigned int)v215.i16[7] >> 15;
      v222[1] = v215.i16[7] & 0x7FFF;
      v222[2] = 0;
      v223 = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)&v215.u16[3]), 27).u64[0];
      v224 = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(unsigned int *)((char *)v215.u32 + 2)), 225));
      v225 = v215.i16[0];
      v226 = 0;
      v219[0] = (unsigned int)(__int16)v24 >> 15;
      v219[1] = v24 & 0x7FFF;
      v220.i16[0] = 0;
      v220.i16[1] = v210;
      v220.i16[2] = v203.i16[0];
      v220.i16[3] = v25;
      v220.i16[4] = v26;
      v220.i16[5] = v209;
      v220.i16[6] = v214;
      v220.i16[7] = v27;
      LOWORD(v221) = 0;
      v108 = sub_100078B70(v222, (__int64)v219);
      v109 = 1;
      if ( v108 != 10 )
        v109 = v108;
      v110 = v28 + (v108 == 10);
      if ( v109 )
      {
LABEL_103:
        v214 = v110;
      }
      else
      {
        while ( 1 )
        {
          v111 = _mm_loadu_si128(&v220);
          v214 = v110;
          if ( (((_WORD)v221 == 0) & _mm_testz_si128(v111, v111)) != 0 )
            break;
          v204.i32[0] = 2 * (unsigned __int16)v221;
          LOWORD(v113) = v221;
          HIWORD(v113) = _mm_extract_epi16(v111, 7);
          v112 = v113 >> 15;
          LOWORD(v113) = HIWORD(v113);
          HIWORD(v113) = _mm_extract_epi16(v111, 6);
          v114 = v113 >> 15;
          LOWORD(v113) = HIWORD(v113);
          HIWORD(v113) = _mm_extract_epi16(v111, 5);
          v115 = v113 >> 15;
          LOWORD(v113) = HIWORD(v113);
          HIWORD(v113) = _mm_extract_epi16(v111, 4);
          v116 = v113 >> 15;
          LOWORD(v113) = HIWORD(v113);
          HIWORD(v113) = _mm_extract_epi16(v111, 3);
          v117 = v113 >> 15;
          v118 = _mm_extract_epi16(v111, 2);
          LOWORD(v113) = HIWORD(v113);
          HIWORD(v113) = v118;
          v119 = v113 >> 15;
          v120 = _mm_extract_epi16(v111, 1);
          LOWORD(v113) = v118;
          HIWORD(v113) = v120;
          LOWORD(v118) = v113 >> 15;
          v121 = _mm_cvtsi128_si32(v111);
          HIWORD(v113) = v121;
          LOWORD(v113) = v120;
          LOWORD(v121) = v113 >> 15;
          LODWORD(v213) = v121;
          LOWORD(v113) = v112;
          HIWORD(v113) = v114;
          v122 = v113 >> 15;
          v203.i32[0] = v118;
          HIWORD(v113) = v121;
          LOWORD(v113) = v118;
          v123 = v113 >> 15;
          HIWORD(v113) = v118;
          LOWORD(v113) = v119;
          v124 = v113 >> 15;
          HIWORD(v113) = v119;
          LOWORD(v113) = v117;
          v125 = v113 >> 15;
          HIWORD(v113) = v117;
          LOWORD(v113) = v116;
          v126 = v113 >> 15;
          HIWORD(v113) = v116;
          LOWORD(v113) = v115;
          v127 = v113 >> 15;
          HIWORD(v113) = v115;
          LOWORD(v113) = v114;
          LOWORD(v121) = v113 >> 15;
          LOWORD(v113) = 2 * v112;
          HIWORD(v113) = v122;
          LOWORD(v118) = v113 >> 15;
          LOWORD(v113) = v122;
          HIWORD(v113) = v121;
          v128 = v113 >> 15;
          LOWORD(v113) = v121;
          HIWORD(v113) = v127;
          LOWORD(v121) = v113 >> 15;
          LOWORD(v113) = v127;
          HIWORD(v113) = v126;
          v129 = v113 >> 15;
          LOWORD(v113) = v126;
          HIWORD(v113) = v125;
          v130 = v113 >> 15;
          LOWORD(v113) = v125;
          HIWORD(v113) = v124;
          v131 = v113 >> 15;
          HIWORD(v113) = v123;
          LOWORD(v113) = v124;
          LOWORD(v221) = 2 * v221;
          v220.i16[7] = 5 * v112;
          v132 = (unsigned __int16)v118 + ((unsigned __int16)(5 * v112) < (unsigned __int16)(4 * v112)) + v114;
          v220.i16[6] = v132;
          v220.i16[5] = HIWORD(v132) + v128 + v115;
          v133 = ((unsigned int)(HIWORD(v132) + v128 + v115) >> 16) + (unsigned __int16)v121 + v116;
          v220.i16[4] = v133;
          v220.i16[3] = HIWORD(v133) + v129 + v117;
          v220.i16[2] = ((unsigned int)(HIWORD(v133) + v129 + v117) >> 16) + v130 + v119;
          v134 = (((unsigned int)(HIWORD(v133) + v129 + v117) >> 16) + v130 + v119) >> 16;
          v220.i16[1] = v134 + v131 + v203.i16[0];
          v220.i16[0] = ((v134 + v131 + v203.u16[0]) >> 16) + v213 + (v113 >> 15);
          v109 = sub_100078B70(v222, (__int64)v219);
          v110 = v214 - 1;
          if ( v109 )
            goto LABEL_103;
        }
        LOBYTE(v109) = 0;
      }
      __s[0] = v109 + 48;
      __s[1] = 46;
      v135 = 33;
      if ( v199 < 0x21u )
        v135 = v199;
      v200 = &__s[v135];
      v207 = &__s[v135 + 2];
      v212 = v135;
      v210 = v135 + 1;
      v136 = 0;
      do
      {
        v213 = v136;
        LODWORD(v209) = v221;
        HIWORD(v138) = v220.i16[7];
        LOWORD(v138) = v221;
        v137 = v138 >> 15;
        LOWORD(v138) = v220.i16[7];
        HIWORD(v138) = v220.i16[6];
        v139 = v138 >> 15;
        LOWORD(v138) = v220.i16[6];
        HIWORD(v138) = v220.i16[5];
        v140 = v138 >> 15;
        LOWORD(v138) = v220.i16[5];
        HIWORD(v138) = v220.i16[4];
        v141 = v138 >> 15;
        LOWORD(v138) = v220.i16[4];
        HIWORD(v138) = v220.i16[3];
        v142 = v138 >> 15;
        LOWORD(v138) = v220.i16[3];
        HIWORD(v138) = v220.i16[2];
        v143 = v138 >> 15;
        v144 = v220.u16[0];
        LOWORD(v138) = v220.i16[2];
        HIWORD(v138) = v220.i16[1];
        v204.i16[0] = v138 >> 15;
        LOWORD(v138) = v220.i16[1];
        HIWORD(v138) = v220.i16[0];
        LOWORD(v144) = v138 >> 15;
        v203.i32[0] = v144;
        LOWORD(v138) = v137;
        HIWORD(v138) = v139;
        v145 = v138 >> 15;
        HIWORD(v138) = v144;
        LOWORD(v138) = v204.i16[0];
        v146 = v138 >> 15;
        HIWORD(v138) = v204.i16[0];
        LOWORD(v138) = v143;
        LOWORD(v144) = v138 >> 15;
        HIWORD(v138) = v143;
        LOWORD(v138) = v142;
        v147 = v138 >> 15;
        HIWORD(v138) = v142;
        LOWORD(v138) = v141;
        v148 = v138 >> 15;
        HIWORD(v138) = v141;
        LOWORD(v138) = v140;
        v149 = v138 >> 15;
        HIWORD(v138) = v140;
        LOWORD(v138) = v139;
        v150 = v138 >> 15;
        LOWORD(v138) = 2 * v137;
        HIWORD(v138) = v145;
        v151 = v138 >> 15;
        LOWORD(v138) = v145;
        HIWORD(v138) = v150;
        v152 = v138 >> 15;
        LOWORD(v138) = v150;
        HIWORD(v138) = v149;
        v153 = v138 >> 15;
        LOWORD(v138) = v149;
        HIWORD(v138) = v148;
        v154 = v138 >> 15;
        LOWORD(v138) = v148;
        HIWORD(v138) = v147;
        v155 = v138 >> 15;
        LOWORD(v138) = v147;
        HIWORD(v138) = v144;
        v156 = v138 >> 15;
        HIWORD(v138) = v146;
        LOWORD(v138) = v144;
        LOWORD(v221) = 2 * v221;
        v220.i16[7] = 5 * v137;
        v157 = v151 + ((unsigned __int16)(5 * v137) < (unsigned __int16)(4 * v137)) + v139;
        v220.i16[6] = v157;
        v220.i16[5] = HIWORD(v157) + v152 + v140;
        v158 = ((unsigned int)(HIWORD(v157) + v152 + v140) >> 16) + v153 + v141;
        v220.i16[4] = v158;
        v220.i16[3] = HIWORD(v158) + v154 + v142;
        v159 = ((unsigned int)(HIWORD(v158) + v154 + v142) >> 16) + v155 + v143;
        v220.i16[2] = v159;
        v159 >>= 16;
        v220.i16[1] = v159 + v156 + v204.i16[0];
        v220.i16[0] = ((v159 + v156 + v204.u16[0]) >> 16) + v203.i16[0] + (v138 >> 15);
        v160 = sub_100078B70(v222, (__int64)v219);
        __s[v213 + 2] = v160 + 48;
        v136 = v213 + 1;
      }
      while ( v210 != v213 + 1 );
      if ( v160 < 5u )
      {
        v5 = v205;
        LODWORD(v13) = v206;
        v21 = v214;
      }
      else
      {
        v5 = v205;
        v21 = v214;
        if ( v160 != 5
          || (v161 = _mm_loadu_si128(&v220), !_mm_testz_si128(v161, v161))
          || (_WORD)v221
          || (v200[1] & 1) != 0 )
        {
          v162 = v200[1] & 0x7F;
          LODWORD(v13) = v206;
          if ( v162 == 46 )
          {
            v163 = v207;
LABEL_120:
            v165 = *(v163 - 2);
            *(v163 - 2) = v165 + 1;
            if ( v165 >= 57 )
            {
              ++v21;
              *(v163 - 2) = 49;
            }
          }
          else
          {
            v164 = v207;
            while ( 1 )
            {
              *(v164 - 1) = v162 + 1;
              if ( v162 < 0x39u )
                break;
              v163 = v164 - 1;
              *(v164 - 1) = 48;
              v162 = *(v164 - 2) & 0x7F;
              --v164;
              if ( v162 == 46 )
                goto LABEL_120;
            }
          }
        }
        else
        {
          LODWORD(v13) = v206;
        }
      }
      v166 = &__s[v212 + 3];
      do
      {
        v167 = (unsigned __int8)*(v166 - 2);
        --v166;
      }
      while ( v167 == 48 );
      if ( v167 == 46 )
        *v166++ = 48;
      v22 = v202;
      *v166 = 0;
      goto LABEL_127;
    }
LABEL_34:
    v209 = v7;
    v205 = v5;
    v208 = a2;
    v216.i64[0] = v14.i64[0];
    v216.i16[4] = v15;
    v216.i16[5] = v16;
    v216.i16[6] = v17;
    v216.i16[7] = 16494;
    v28 = 0;
    v62 = (__int16 *)&qword_1000A15E0;
    v63 = 16;
    while ( 1 )
    {
      ediv(v216.i16, v62, (__int64)&v215);
      v64 = _mm_loadl_epi64(&v215);
      v65 = (__m128i)v215.u64[1];
      v66 = HIWORD(v215.i64[1]);
      v67 = v215.i16[7] & 0x7FFF;
      if ( v67 > 0x3FFE )
        break;
      v217 = 0;
      if ( v215.i16[7] < 0 )
        goto LABEL_47;
LABEL_36:
      if ( !(v217.i64[0] ^ v215.i64[0] | *(__int64 *)((char *)v217.i64 + 6) ^ *(__int64 *)((char *)v215.i64 + 6)) )
      {
        v216 = _mm_load_si128(&v215);
        v28 += v63;
      }
      v62 += 8;
      v50 = v63 < 2;
      v63 >>= 1;
      if ( v50 )
      {
        v24 = v216.u16[7];
        v74 = (__int16)(v209 + v216.i16[7] - 16494) < 0;
        LOWORD(v24) = v209 + v216.i16[7] - 16494;
        v216.i16[7] = v24;
        v27 = v216.i16[0];
        v214 = v216.u16[1];
        LODWORD(v209) = v216.u16[2];
        v26 = v216.i16[3];
        v25 = v216.i16[4];
        v203.i32[0] = v216.u16[5];
        v215 = _mm_loadu_si128((const __m128i *)&xmmword_1000A1550);
        LODWORD(v210) = v216.u16[6];
        if ( v74 )
          goto LABEL_98;
        LODWORD(v207) = v216.u16[3];
        LODWORD(v212) = v216.u16[0];
        v204.i32[0] = v216.u16[4];
        v75 = v28;
        v76 = v216.i16[1];
        v77 = 4096;
        v78 = (__int16 *)qword_1000A1560;
        v79 = _mm_loadl_epi64((const __m128i *)((char *)v216.i64 + 4));
        v211 = v24;
        v80 = v24;
        v81 = v216.u16[6];
        while ( 2 )
        {
          v82 = 16386;
          v83 = v80;
          if ( v80 != 16386 || (v82 = -24576, v83 = v81, v81 != 40960) )
          {
            if ( v82 > v83 )
            {
LABEL_72:
              v28 = v75;
              goto LABEL_97;
            }
          }
          v84 = v78[7];
          v85 = 2 * (v84 >= 0) - 1;
          if ( ((v80 ^ v84) & 0x8000u) != 0 )
          {
LABEL_68:
            if ( v85 <= 0 )
              goto LABEL_69;
          }
          else
          {
            v86 = v84 & 0x7FFF;
            if ( v86 != v80
              || (v86 = v78[6], v80 = v81, v86 != v81)
              || (v86 = v78[5], v80 = _mm_extract_epi16(v79, 3), v86 != v80)
              || (v86 = v78[4], v80 = _mm_extract_epi16(v79, 2), v86 != v80)
              || (v86 = v78[3], v80 = _mm_extract_epi16(v79, 1), v86 != v80)
              || (v86 = v78[2], v80 = _mm_cvtsi128_si32(v79), v86 != v80)
              || (v86 = v78[1], v80 = v76, v86 != v76)
              || (v86 = *v78, v80 = v216.i16[0], *v78 != v216.i16[0]) )
            {
              if ( v86 <= v80 )
                v85 = -v85;
              goto LABEL_68;
            }
LABEL_69:
            ediv(v216.i16, v78, (__int64)&v216);
            emul(v215.i16, v78, (__int64)&v215);
            v75 += v77;
          }
          if ( v77 < 2 )
            goto LABEL_72;
          v78 += 8;
          v77 >>= 1;
          v76 = v216.i16[1];
          v81 = v216.u16[6];
          v80 = v216.u16[7];
          v79 = _mm_loadl_epi64((const __m128i *)((char *)v216.i64 + 4));
          if ( v216.i16[7] < 0 )
            goto LABEL_72;
          continue;
        }
      }
    }
    v217 = _mm_unpacklo_epi64(v64, (__m128i)v215.u64[1]);
    if ( v67 > 0x406D )
      goto LABEL_36;
    v68 = 16494 - v67;
    if ( v67 > 0x405E )
    {
      v71 = _mm_cvtsi128_si32(v64);
      v70 = &v217;
    }
    else
    {
      if ( v68 >= 31 )
        v68 = 31;
      LODWORD(v213) = v28;
      v69 = 16509 - (v67 + v68);
      v210 = v69 >> 4;
      v203 = (__m128i)v215.u64[1];
      v204 = v64;
      __bzero(&v217, 2LL * (unsigned int)v210 + 2);
      v64 = _mm_load_si128(&v204);
      v65 = _mm_load_si128(&v203);
      v70 = (__m128i *)((char *)&savedregs + 2 * v210 - 174);
      v68 = 16478 - (v67 + (v69 & 0xFFFFFFF0));
      v28 = v213;
      v71 = v217.i16[v210 + 1];
    }
    v70->i16[0] = *((_WORD *)qword_1000A3B40 + (unsigned int)v68) & v71;
    if ( (v66 & 0x8000u) == 0LL )
      goto LABEL_36;
LABEL_47:
    v72 = (unsigned __int16)_mm_cvtsi128_si32(v65) == v217.i16[4];
    v73 = (unsigned __int16)_mm_extract_epi16(v65, 1) == v217.i16[5];
    if ( _mm_movemask_ps((__m128)_mm_cvtepi16_epi32(_mm_cmpeq_epi16(v64, _mm_loadl_epi64(&v217)))) != 15
      || !v72
      || !v73
      || (unsigned __int16)_mm_extract_epi16(v65, 2) != v217.i16[6] )
    {
      eadd((__int64)&v217, (__int64)&xmmword_1000A1550, (__int64)&v217, 1);
    }
    goto LABEL_36;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return sub_100078B70((unsigned __int16 *)0x4C9, a2);
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A1550: using guessed type __int128 xmmword_1000A1550;
// 1000A1560: using guessed type __int64 qword_1000A1560[2];
// 1000A15E0: using guessed type __int64 qword_1000A15E0;
// 1000A163E: using guessed type __int16 word_1000A163E;
// 1000A3B40: using guessed type __int64 qword_1000A3B40[4];
// 1000AE23D: using guessed type char under_debugger;
