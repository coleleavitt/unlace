/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: realtoasc
// Address: 0x00000000000BB020

//----- (00000000000BB020) ----------------------------------------------------
unsigned __int64 __fastcall realtoasc(_BYTE *a1, __int64 a2, __m128i *a3, int a4, double a5, __m128 si128)
{
  unsigned __int64 v6; // r12
  const char *v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  bool v11; // cf
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __int16 v14; // bx
  const char *v15; // rax
  int v16; // eax
  __int32 v17; // eax
  int v18; // r12d
  unsigned __int16 v19; // r15
  unsigned __int16 v20; // r9
  unsigned int v21; // et0
  unsigned __int16 v22; // r13
  unsigned __int16 v23; // di
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // bp
  int v26; // edx
  __int16 v27; // r10
  __int16 v28; // r14
  unsigned int v29; // r8d
  unsigned int v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // ecx
  unsigned __int16 v35; // r9
  int v36; // r11d
  __int16 v37; // r15
  __int16 v38; // si
  __int16 v39; // bx
  __int16 v40; // di
  __int16 v41; // ax
  __int16 v42; // dx
  __int16 v43; // cx
  unsigned int v44; // et0
  __int16 v45; // cx
  int v46; // r13d
  unsigned __int16 *v47; // r14
  __int16 *v48; // rbp
  int v49; // ebx
  int v50; // ebp
  __int64 *v51; // rbx
  unsigned int v52; // r13d
  __m128i *v53; // r12
  __int128 *p_s1; // r14
  __int16 epi16; // r15
  unsigned int v56; // eax
  int v57; // ecx
  int v58; // eax
  __int128 *v59; // rbp
  __m128i *v60; // r14
  __int64 v61; // r12
  __m128 *p_s; // rcx
  __int16 v63; // dx
  int v64; // r14d
  __int64 *v65; // rbx
  unsigned int v66; // ebp
  int v67; // ecx
  __int16 v68; // ax
  unsigned int v69; // r8d
  unsigned int v70; // r9d
  unsigned int v71; // esi
  unsigned int v72; // r10d
  unsigned int v73; // edi
  unsigned int v74; // eax
  __m128i inserted; // xmm1
  __int16 v76; // r13
  unsigned int v77; // et0
  __int16 v78; // r11
  __int16 v79; // r10
  __int16 v80; // r9
  __int16 v81; // r12
  __int16 v82; // r8
  __int16 v83; // ax
  __int16 v84; // cx
  unsigned int v85; // et0
  __int16 v86; // ax
  __int16 v87; // cx
  __int16 v88; // ax
  __int16 v89; // cx
  __int16 v90; // ax
  __int16 v91; // dx
  __int16 v92; // r15
  __int16 v93; // r11
  __int16 v94; // r14
  __int16 v95; // r12
  __int16 v96; // bx
  __int16 v97; // r8
  unsigned int v98; // esi
  unsigned int v99; // esi
  unsigned int v100; // edi
  unsigned int v101; // esi
  unsigned int v102; // edi
  unsigned int v103; // edx
  int v104; // edx
  int v105; // esi
  unsigned __int16 v106; // ax
  bool v107; // zf
  __int64 v108; // rbp
  char *v109; // rax
  unsigned __int8 v110; // cl
  char v111; // cl
  char v112; // cl
  _BYTE *v113; // rax
  char v114; // cl
  unsigned int v115; // eax
  unsigned int v116; // ebp
  unsigned int v117; // r15d
  __int64 v118; // rax
  int v119; // ecx
  unsigned int v120; // r15d
  __int64 v121; // r14
  unsigned int v122; // ecx
  __int64 v123; // r14
  int v124; // ebx
  signed int v125; // ebp
  unsigned int v126; // r13d
  int v127; // r13d
  unsigned int v128; // r14d
  __int64 v129; // rax
  signed __int64 v130; // rcx
  unsigned int v131; // r15d
  unsigned int v132; // r14d
  __int64 v133; // rbx
  _BYTE *v134; // rdi
  unsigned int v135; // eax
  unsigned int v136; // r15d
  _BYTE *v137; // rcx
  unsigned int v138; // eax
  unsigned int v139; // ebx
  int v140; // eax
  __int64 v141; // r14
  _BYTE *v142; // rax
  signed int v143; // ebp
  unsigned int v144; // eax
  signed int v145; // eax
  int v146; // ebp
  __int64 v147; // rbx
  _BYTE *v149; // [rsp+8h] [rbp-180h]
  __int16 v150; // [rsp+10h] [rbp-178h]
  __int16 v151; // [rsp+10h] [rbp-178h]
  int i; // [rsp+10h] [rbp-178h]
  unsigned int v153; // [rsp+14h] [rbp-174h]
  unsigned int v154; // [rsp+18h] [rbp-170h]
  int v155; // [rsp+20h] [rbp-168h]
  char *v156; // [rsp+20h] [rbp-168h]
  const char *v157; // [rsp+28h] [rbp-160h]
  __m128i v158; // [rsp+30h] [rbp-158h] BYREF
  __int64 v159; // [rsp+48h] [rbp-140h]
  unsigned __int64 v160; // [rsp+50h] [rbp-138h]
  __int64 v161; // [rsp+58h] [rbp-130h]
  __int128 s1; // [rsp+60h] [rbp-128h] BYREF
  __m128 s; // [rsp+70h] [rbp-118h] BYREF
  __m128i v164; // [rsp+80h] [rbp-108h] BYREF
  __m128i v165; // [rsp+90h] [rbp-F8h] BYREF
  _DWORD v166[12]; // [rsp+A0h] [rbp-E8h] BYREF
  _BYTE v167[22]; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v168; // [rsp+F0h] [rbp-98h]
  int v169; // [rsp+100h] [rbp-88h]
  __int16 v170; // [rsp+104h] [rbp-84h]
  __int128 v171; // [rsp+110h] [rbp-78h]
  int v172; // [rsp+120h] [rbp-68h]
  __int16 v173; // [rsp+124h] [rbp-64h]
  __int64 v174; // [rsp+130h] [rbp-58h] BYREF
  int v175; // [rsp+138h] [rbp-50h]
  __int16 v176; // [rsp+13Ch] [rbp-4Ch]
  __int16 v177; // [rsp+13Eh] [rbp-4Ah]
  int v178; // [rsp+140h] [rbp-48h]
  __int16 v179; // [rsp+144h] [rbp-44h]
  unsigned __int64 v180; // [rsp+150h] [rbp-38h]

  v180 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v6 = a2;
  if ( (a3->m128i_i16[7] & 0x7FFF) == 0x7FFF )
  {
    if ( (a3->m128i_i16[6] & 0x7FFF) != 0
      || a3->m128i_i16[5]
      || a3->m128i_i16[4]
      || a3->m128i_i16[3]
      || a3->m128i_i16[2]
      || a3->m128i_i16[1]
      || a3->m128i_i16[0] )
    {
      v7 = "NaN";
    }
    else if ( a3->m128i_i16[7] < 0 )
    {
      v7 = "-Inf";
    }
    else
    {
      v7 = "+Inf";
    }
    qstrncpy(a1, (__int64)v7, v6);
    return __readfsqword(0x28u);
  }
  v8 = BYTE1(a4);
  v9 = BYTE2(a4);
  if ( BYTE2(a4) )
  {
    if ( BYTE1(a4) >= (unsigned int)BYTE2(a4) + 3 && (unsigned int)BYTE1(a4) + 3 < v6 )
      goto LABEL_17;
    v8 = 0;
  }
  v9 = 0;
LABEL_17:
  v153 = v8;
  v10 = (unsigned __int8)a4;
  v11 = (unsigned __int8)a4 < 0x21u;
  v12 = 33;
  if ( v11 )
    v12 = v10;
  v165 = *a3;
  v13 = (__m128i)xmmword_116174;
  s1 = xmmword_116174;
  v14 = v165.m128i_i16[7];
  v149 = a1;
  if ( v165.m128i_i16[7] < 0 )
  {
    v14 = v165.m128i_i16[7] & 0x7FFF;
    v165.m128i_i16[7] &= ~0x8000u;
    v15 = "-";
  }
  else
  {
    v15 = &byte_EB522;
  }
  v157 = v15;
  v154 = v9;
  if ( !v14 )
  {
    if ( v9 )
    {
      v166[0] = 3157552;
      v49 = 0;
      goto LABEL_99;
    }
    qsnprintf(a1, v6, "%s0.0", v15);
    return __readfsqword(0x28u);
  }
  v161 = v12;
  v16 = ecmp((unsigned __int16 *)&xmmword_116174, (unsigned __int16 *)&v165);
  v160 = v6;
  if ( !v16 )
  {
    v18 = 0;
    goto LABEL_66;
  }
  if ( v16 >= 0 )
  {
    LOWORD(v168) = (unsigned __int16)v14 >> 15;
    *(_DWORD *)((char *)&v168 + 2) = v14 & 0x7FFF;
    WORD3(v168) = v165.m128i_i16[6];
    WORD4(v168) = v165.m128i_i16[5];
    WORD5(v168) = v165.m128i_i16[4];
    WORD6(v168) = v165.m128i_i16[3];
    HIWORD(v168) = v165.m128i_i16[2];
    LOWORD(v169) = v165.m128i_i16[1];
    HIWORD(v169) = v165.m128i_i16[0];
    v170 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      v158.m128i_i32[0] = v17;
      v19 = (WORD3(v168) >> 1) | (WORD2(v168) << 15);
      LOWORD(v21) = (WORD4(v168) >> 1) | (WORD3(v168) << 15);
      HIWORD(v21) = WORD3(v168) >> 1;
      v20 = v21 >> 1;
      LOWORD(v21) = (WORD5(v168) >> 1) | (WORD4(v168) << 15);
      HIWORD(v21) = WORD4(v168) >> 1;
      v22 = v21 >> 1;
      LOWORD(v21) = (WORD6(v168) >> 1) | (WORD5(v168) << 15);
      HIWORD(v21) = WORD5(v168) >> 1;
      v23 = v21 >> 1;
      LOWORD(v21) = (HIWORD(v168) >> 1) | (WORD6(v168) << 15);
      HIWORD(v21) = WORD6(v168) >> 1;
      v24 = v21 >> 1;
      LOWORD(v21) = ((unsigned __int16)v169 >> 1) | (HIWORD(v168) << 15);
      HIWORD(v21) = HIWORD(v168) >> 1;
      v25 = v21 >> 1;
      v26 = HIWORD(v169) >> 1;
      LOWORD(v21) = v26 | ((_WORD)v169 << 15);
      HIWORD(v21) = (unsigned __int16)v169 >> 1;
      v27 = ((_WORD)v26 << 15) | ((BYTE2(v169) & 1) << 14);
      v28 = HIWORD(v169) + (v21 >> 1);
      HIWORD(v172) = v28;
      v29 = ((HIWORD(v169) + (unsigned int)(unsigned __int16)(v21 >> 1)) >> 16) + (unsigned __int16)v169 + v25;
      LOWORD(v172) = ((HIWORD(v169) + (unsigned int)(unsigned __int16)(v21 >> 1)) >> 16) + v169 + v25;
      v30 = (HIWORD(v29) & 1) + HIWORD(v168) + v24;
      HIWORD(v171) = (BYTE2(v29) & 1) + HIWORD(v168) + v24;
      v31 = (HIWORD(v30) & 1) + WORD6(v168) + v23;
      WORD6(v171) = v31;
      v32 = (HIWORD(v31) & 1) + WORD5(v168) + v22;
      WORD5(v171) = (BYTE2(v31) & 1) + WORD5(v168) + v22;
      v33 = (HIWORD(v32) & 1) + WORD4(v168) + v20;
      WORD4(v171) = (BYTE2(v32) & 1) + WORD4(v168) + v20;
      v34 = (HIWORD(v33) & 1) + WORD3(v168) + (unsigned __int16)(((WORD2(v168) & 0xFFFE) << 14) | (v19 >> 1));
      WORD3(v171) = (BYTE2(v33) & 1) + WORD3(v168) + (((WORD2(v168) & 0xFFFE) << 14) | (v19 >> 1));
      WORD2(v171) = WORD2(v168) + (WORD2(v168) >> 2) + (BYTE2(v34) & 1);
      v35 = WORD1(v168) + 3;
      LODWORD(v171) = v168 + 196608;
      LOWORD(v36) = WORD2(v171);
      if ( WORD2(v171) )
      {
        do
        {
          v37 = v28;
          v38 = v30;
          v39 = v31;
          v40 = v32;
          v41 = v33;
          v42 = v34;
          v43 = v36;
          v36 = (unsigned __int16)v36 >> 1;
          HIWORD(v44) = v43;
          LOWORD(v44) = v42;
          LOWORD(v34) = v44 >> 1;
          HIWORD(v44) = v42;
          LOWORD(v44) = v41;
          LOWORD(v33) = v44 >> 1;
          HIWORD(v44) = v41;
          LOWORD(v44) = v40;
          LOWORD(v32) = v44 >> 1;
          HIWORD(v44) = v40;
          LOWORD(v44) = v39;
          LOWORD(v31) = v44 >> 1;
          HIWORD(v44) = v39;
          LOWORD(v44) = v38;
          LOWORD(v30) = v44 >> 1;
          HIWORD(v44) = v38;
          LOWORD(v44) = v29;
          LOWORD(v29) = v44 >> 1;
          HIWORD(v44) = v44;
          LOWORD(v44) = v28;
          v28 = v44 >> 1;
          LOWORD(v44) = v27;
          HIWORD(v44) = v37;
          v27 = v44 >> 1;
          ++v35;
        }
        while ( (_WORD)v36 );
        WORD3(v171) = v34;
        WORD4(v171) = v33;
        WORD5(v171) = v32;
        WORD6(v171) = v31;
        HIWORD(v171) = v30;
        LOWORD(v172) = v29;
        HIWORD(v172) = v28;
        *(_DWORD *)((char *)&v171 + 2) = v35;
      }
      if ( v35 > 0x3FFEu )
        break;
      if ( v27 )
        break;
      v169 = v172;
      v168 = v171;
      v170 = 0;
      v17 = v158.m128i_i32[0] + 1;
      --v18;
    }
    while ( (unsigned int)(v158.m128i_i32[0] + 1) < 0x22 );
    v45 = WORD1(v168) | 0x8000;
    if ( !(_WORD)v168 )
      v45 = WORD1(v168);
    v173 = v27;
    v150 = v45;
    v165.m128i_i16[7] = v45;
    v165.m128i_i16[5] = WORD4(v168);
    v165.m128i_i16[6] = WORD3(v168);
    v165.m128i_i16[3] = WORD6(v168);
    v165.m128i_i16[4] = WORD5(v168);
    v165.m128i_i16[2] = HIWORD(v168);
    v165.m128i_i16[0] = HIWORD(v169);
    s.m128_i16[0] = HIWORD(v169);
    v165.m128i_i16[1] = v169;
    s.m128_i16[1] = v169;
    s.m128_i16[2] = HIWORD(v168);
    s.m128_i16[3] = WORD6(v168);
    s.m128_i16[4] = WORD5(v168);
    *(__int32 *)((char *)&s.m128_i32[2] + 2) = *(__int32 *)((char *)&v165.m128i_i32[2] + 2);
    s.m128_i16[7] = v45;
    v13 = (__m128i)xmmword_116174;
    s1 = xmmword_116174;
    if ( (int)ecmp((unsigned __int16 *)&xmmword_116174, (unsigned __int16 *)&s) > 0 )
    {
      v46 = -4096;
      v47 = (unsigned __int16 *)qword_116260;
      v48 = (__int16 *)qword_116190;
      do
      {
        if ( (int)ecmp(v47, (unsigned __int16 *)&s) >= 0 )
        {
          emul(&s, v48, (__int64)&s, 0.0, si128);
          emul(&s1, v48, (__int64)&s1, 0.0, si128);
          v18 += v46;
        }
        if ( (unsigned int)(v46 + 1) < 3 )
          break;
        v47 += 8;
        v48 += 8;
        v46 /= 2;
      }
      while ( (int)ecmp((unsigned __int16 *)&xmmword_116174, (unsigned __int16 *)&s) > 0 );
    }
    ediv((__int16 *)&xmmword_116174, &s1, (__int64)&s1, 0.0, si128);
    v14 = v150;
    goto LABEL_66;
  }
  v151 = v14;
  *(__int64 *)((char *)v164.m128i_i64 + 6) = *(__int64 *)((char *)v165.m128i_i64 + 6);
  v164.m128i_i64[0] = v165.m128i_i64[0];
  v164.m128i_i16[7] = 16494;
  v50 = 0;
  v51 = &qword_116210;
  v52 = 16;
  v53 = &v164;
  p_s1 = &s1;
  do
  {
    ediv(v53->m128i_i16, v51, (__int64)p_s1, *(double *)v13.m128i_i64, si128);
    si128 = (__m128)_mm_load_si128((const __m128i *)&s1);
    epi16 = _mm_extract_epi16((__m128i)si128, 7);
    v56 = epi16 & 0x7FFF;
    if ( v56 > 0x3FFE )
    {
      v57 = (unsigned __int16)v56;
      s = si128;
      v58 = 16494 - (unsigned __int16)v56;
      if ( v57 >= 16494 )
        goto LABEL_57;
      if ( v58 < 16 )
      {
        v63 = _mm_cvtsi128_si32((__m128i)si128);
        p_s = &s;
      }
      else
      {
        v155 = v50;
        v59 = p_s1;
        v60 = v53;
        v61 = (unsigned int)(16478 - v57) >> 4;
        v158 = (__m128i)si128;
        memset(&s, 0, (unsigned int)(2 * v61 + 2));
        si128 = (__m128)_mm_load_si128(&v158);
        p_s = (__m128 *)((char *)s.m128_u64 + 2 * v61 + 2);
        v58 = (14 - (_BYTE)epi16) & 0xF;
        v63 = p_s->m128_i16[0];
        v53 = v60;
        p_s1 = v59;
        v50 = v155;
      }
      p_s->m128_i16[0] = *((_WORD *)qword_116340 + v58) & v63;
      if ( epi16 >= 0 )
        goto LABEL_57;
    }
    else
    {
      v13.m128i_i64[0] = 0;
      s = 0;
      if ( epi16 >= 0 )
        goto LABEL_57;
    }
    if ( __PAIR32__(_mm_extract_epi16((__m128i)si128, 1), _mm_cvtsi128_si32((__m128i)si128)) != s.m128_i32[0]
      || __PAIR64__(
           __PAIR32__(_mm_extract_epi16((__m128i)si128, 5), _mm_extract_epi16((__m128i)si128, 4)),
           __PAIR32__(_mm_extract_epi16((__m128i)si128, 3), _mm_extract_epi16((__m128i)si128, 2))) != *(unsigned __int64 *)((char *)s.m128_u64 + 4)
      || (unsigned __int16)_mm_extract_epi16((__m128i)si128, 6) != s.m128_i16[6] )
    {
      eadd(&s, &xmmword_116174, &s, 1, *(double *)v13.m128i_i64, si128);
    }
LABEL_57:
    if ( !memcmp(p_s1, &s, 0xEu) )
    {
      v13.m128i_i64[0] = s1;
      v164 = (__m128i)s1;
      v50 += v52;
    }
    v52 >>= 1;
    v51 += 2;
  }
  while ( v52 );
  v64 = v50;
  v164.m128i_i16[7] = v164.m128i_i16[7] + v151 - 16494;
  v165 = v164;
  v13 = (__m128i)xmmword_116174;
  s1 = xmmword_116174;
  v65 = qword_116190;
  v66 = 4096;
  do
  {
    if ( (int)ecmp((unsigned __int16 *)&qword_116250, (unsigned __int16 *)&v164) > 0 )
      break;
    if ( (int)ecmp((unsigned __int16 *)v65, (unsigned __int16 *)&v164) <= 0 )
    {
      ediv(v164.m128i_i16, v65, (__int64)&v164, 0.0, si128);
      emul(&s1, (__int16 *)v65, (__int64)&s1, 0.0, si128);
      v64 += v66;
    }
    v66 >>= 1;
    v65 += 2;
  }
  while ( v66 );
  v14 = v165.m128i_i16[7];
  v18 = v64;
LABEL_66:
  LOWORD(v168) = SHIWORD(s1) >> 15;
  *(_DWORD *)((char *)&v168 + 2) = HIWORD(s1) & 0x7FFF;
  WORD3(v168) = WORD6(s1);
  WORD4(v168) = WORD5(s1);
  WORD5(v168) = WORD4(s1);
  LOWORD(v169) = WORD1(s1);
  HIWORD(v169) = s1;
  v178 = v169;
  v174 = v168;
  v175 = DWORD2(v168);
  v176 = WORD3(s1);
  v177 = WORD2(s1);
  v179 = 0;
  LOWORD(v168) = v14 >> 15;
  *(_DWORD *)((char *)&v168 + 2) = v14 & 0x7FFF;
  WORD3(v168) = v165.m128i_i16[6];
  WORD4(v168) = v165.m128i_i16[5];
  WORD5(v168) = v165.m128i_i16[4];
  WORD6(v168) = v165.m128i_i16[3];
  HIWORD(v168) = v165.m128i_i16[2];
  LOWORD(v169) = v165.m128i_i16[1];
  HIWORD(v169) = v165.m128i_i16[0];
  v170 = 0;
  *(_DWORD *)&v167[16] = v169;
  *(_QWORD *)v167 = v168;
  *(_DWORD *)&v167[8] = DWORD2(v168);
  *(_WORD *)&v167[12] = v165.m128i_i16[3];
  *(_WORD *)&v167[14] = v165.m128i_i16[2];
  *(_WORD *)&v167[20] = 0;
  v67 = (unsigned __int16)sub_BC8B0((unsigned __int16 *)&v174, (__int64)v167, v13, si128);
  v68 = 1;
  if ( v67 != 10 )
    v68 = v67;
  for ( i = v18 + (v67 == 10); !v68; --i )
  {
    v13 = _mm_loadl_epi64((const __m128i *)&v167[4]);
    v69 = _mm_extract_epi16(v13, 0);
    v70 = _mm_extract_epi16(v13, 1);
    v71 = _mm_extract_epi16(v13, 2);
    v72 = _mm_extract_epi16(v13, 3);
    if ( *(_WORD *)&v167[16] | (unsigned __int16)(v70 | v69 | v72 | v71 | *(_WORD *)&v167[14] | *(_WORD *)&v167[12]) )
    {
      v73 = *(unsigned __int16 *)&v167[18];
      v74 = *(unsigned __int16 *)&v167[20];
    }
    else
    {
      v73 = *(unsigned __int16 *)&v167[18];
      v74 = *(unsigned __int16 *)&v167[20];
      if ( !*(_DWORD *)&v167[18] )
      {
        LOBYTE(v68) = 0;
        break;
      }
    }
    *(_WORD *)&v167[20] = 2 * v74;
    inserted = _mm_insert_epi16(
                 _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v69), v70, 1), v71, 2),
                         v72,
                         3),
                       *(unsigned int *)&v167[12],
                       4),
                     *(unsigned __int16 *)&v167[14],
                     5),
                   *(unsigned int *)&v167[16],
                   6),
                 v73,
                 7);
    si128 = (__m128)_mm_or_si128(
                      _mm_add_epi16(inserted, inserted),
                      _mm_srli_epi16(
                        _mm_insert_epi16(
                          _mm_insert_epi16(
                            _mm_insert_epi16(
                              _mm_insert_epi16(
                                _mm_insert_epi16(
                                  _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v70), v71, 1), v72, 2),
                                  *(unsigned int *)&v167[12],
                                  3),
                                *(unsigned __int16 *)&v167[14],
                                4),
                              *(unsigned int *)&v167[16],
                              5),
                            v73,
                            6),
                          v74,
                          7),
                        0xFu));
    *(__m128 *)&v167[4] = si128;
    v13 = *(__m128i *)v167;
    LODWORD(v171) = *(_DWORD *)v167;
    HIWORD(v77) = si128.m128_i16[6];
    LOWORD(v77) = si128.m128_i16[7];
    v76 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[5];
    LOWORD(v77) = si128.m128_i16[6];
    v78 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[4];
    LOWORD(v77) = si128.m128_i16[5];
    v79 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[3];
    LOWORD(v77) = si128.m128_i16[4];
    v80 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[2];
    LOWORD(v77) = si128.m128_i16[3];
    v81 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[1];
    LOWORD(v77) = si128.m128_i16[2];
    v82 = v77 >> 15;
    HIWORD(v77) = si128.m128_i16[0];
    LOWORD(v77) = si128.m128_i16[1];
    v173 = 0;
    HIWORD(v172) = 4 * si128.m128_i16[7];
    LOWORD(v172) = (((unsigned __int16)si128.m128_i16[7] >> 14) & 1) + 2 * v76;
    HIWORD(v171) = (((unsigned __int32)si128.m128_i32[3] >> 14) & 1) + 2 * v78;
    WORD6(v171) = (((unsigned __int16)si128.m128_i16[5] >> 14) & 1) + 2 * v79;
    WORD5(v171) = (((unsigned __int32)si128.m128_i32[2] >> 14) & 1) + 2 * v80;
    WORD4(v171) = (((unsigned __int16)si128.m128_i16[3] >> 14) & 1) + 2 * v81;
    WORD3(v171) = (((unsigned __int32)si128.m128_i32[1] >> 14) & 1) + 2 * v82;
    WORD2(v171) = (((unsigned __int16)si128.m128_i16[1] >> 14) & 1) + 2 * (v77 >> 15);
    *(_WORD *)&v167[18] = 5 * si128.m128_i16[7];
    *(_WORD *)&v167[16] = (((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                        + v172
                        + si128.m128_i16[6];
    *(_WORD *)&v167[14] = ((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                           + (unsigned __int16)v172
                           + si128.m128_u16[6]) >> 16)
                         & 1)
                        + HIWORD(v171)
                        + si128.m128_i16[5];
    *(_WORD *)&v167[12] = (((((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                              + (unsigned __int16)v172
                              + si128.m128_u16[6]) >> 16)
                            & 1)
                           + HIWORD(v171)
                           + si128.m128_u16[5]) >> 16)
                         & 1)
                        + WORD6(v171)
                        + si128.m128_i16[4];
    *(_WORD *)&v167[10] = ((((((((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                                 + (unsigned __int16)v172
                                 + si128.m128_u16[6]) >> 16)
                               & 1)
                              + HIWORD(v171)
                              + si128.m128_u16[5]) >> 16)
                            & 1)
                           + WORD6(v171)
                           + si128.m128_u16[4]) >> 16)
                         & 1)
                        + WORD5(v171)
                        + si128.m128_i16[3];
    *(_WORD *)&v167[8] = (((((((((((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                                   + (unsigned __int16)v172
                                   + si128.m128_u16[6]) >> 16)
                                 & 1)
                                + HIWORD(v171)
                                + si128.m128_u16[5]) >> 16)
                              & 1)
                             + WORD6(v171)
                             + si128.m128_u16[4]) >> 16)
                           & 1)
                          + WORD5(v171)
                          + si128.m128_u16[3]) >> 16)
                        & 1)
                       + WORD4(v171)
                       + si128.m128_i16[2];
    *(_WORD *)&v167[6] = ((((((((((((((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                                      + (unsigned __int16)v172
                                      + si128.m128_u16[6]) >> 16)
                                    & 1)
                                   + HIWORD(v171)
                                   + si128.m128_u16[5]) >> 16)
                                 & 1)
                                + WORD6(v171)
                                + si128.m128_u16[4]) >> 16)
                              & 1)
                             + WORD5(v171)
                             + si128.m128_u16[3]) >> 16)
                           & 1)
                          + WORD4(v171)
                          + si128.m128_u16[2]) >> 16)
                        & 1)
                       + WORD3(v171)
                       + si128.m128_i16[1];
    *(_WORD *)&v167[4] = (((((((((((((((((((((unsigned __int16)(4 * si128.m128_i16[7]) + (unsigned int)si128.m128_u16[7]) >> 16)
                                         + (unsigned __int16)v172
                                         + si128.m128_u16[6]) >> 16)
                                       & 1)
                                      + HIWORD(v171)
                                      + si128.m128_u16[5]) >> 16)
                                    & 1)
                                   + WORD6(v171)
                                   + si128.m128_u16[4]) >> 16)
                                 & 1)
                                + WORD5(v171)
                                + si128.m128_u16[3]) >> 16)
                              & 1)
                             + WORD4(v171)
                             + si128.m128_u16[2]) >> 16)
                           & 1)
                          + WORD3(v171)
                          + si128.m128_u16[1]) >> 16)
                        & 1)
                       + si128.m128_i16[0]
                       + WORD2(v171);
    v68 = sub_BC8B0((unsigned __int16 *)&v174, (__int64)v167, v13, si128);
  }
  LOBYTE(v166[0]) = v68 + 48;
  v156 = (char *)v166 + 2;
  BYTE1(v166[0]) = 46;
  v159 = (unsigned int)(v161 + 2);
  v158.m128i_i32[0] = -1;
  do
  {
    v83 = *(_WORD *)&v167[20];
    *(_WORD *)&v167[20] *= 2;
    v84 = *(_WORD *)&v167[18];
    HIWORD(v85) = *(_WORD *)&v167[18];
    LOWORD(v85) = v83;
    *(_WORD *)&v167[18] = v85 >> 15;
    v86 = *(_WORD *)&v167[16];
    LOWORD(v85) = v84;
    HIWORD(v85) = *(_WORD *)&v167[16];
    *(_WORD *)&v167[16] = v85 >> 15;
    v87 = *(_WORD *)&v167[14];
    LOWORD(v85) = v86;
    HIWORD(v85) = *(_WORD *)&v167[14];
    *(_WORD *)&v167[14] = v85 >> 15;
    v88 = *(_WORD *)&v167[12];
    LOWORD(v85) = v87;
    HIWORD(v85) = *(_WORD *)&v167[12];
    *(_WORD *)&v167[12] = v85 >> 15;
    v89 = *(_WORD *)&v167[10];
    LOWORD(v85) = v88;
    HIWORD(v85) = *(_WORD *)&v167[10];
    *(_WORD *)&v167[10] = v85 >> 15;
    v90 = *(_WORD *)&v167[6];
    v91 = *(_WORD *)&v167[8];
    LOWORD(v85) = v89;
    HIWORD(v85) = *(_WORD *)&v167[8];
    *(_WORD *)&v167[8] = v85 >> 15;
    LOWORD(v85) = v91;
    HIWORD(v85) = *(_WORD *)&v167[6];
    *(_WORD *)&v167[6] = v85 >> 15;
    HIWORD(v85) = *(_WORD *)&v167[4];
    LOWORD(v85) = v90;
    *(_WORD *)&v167[4] = v85 >> 15;
    LODWORD(v171) = *(_DWORD *)v167;
    LOWORD(v85) = *(_WORD *)&v167[18];
    HIWORD(v85) = *(_WORD *)&v167[16];
    v92 = v85 >> 15;
    HIWORD(v85) = *(_WORD *)&v167[14];
    LOWORD(v85) = *(_WORD *)&v167[16];
    v93 = v85 >> 15;
    LOWORD(v85) = *(_WORD *)&v167[14];
    HIWORD(v85) = *(_WORD *)&v167[12];
    v94 = v85 >> 15;
    LOWORD(v85) = *(_WORD *)&v167[12];
    HIWORD(v85) = *(_WORD *)&v167[10];
    v95 = v85 >> 15;
    LOWORD(v85) = *(_WORD *)&v167[10];
    HIWORD(v85) = *(_WORD *)&v167[8];
    v96 = v85 >> 15;
    LOWORD(v85) = *(_WORD *)&v167[8];
    HIWORD(v85) = *(_WORD *)&v167[6];
    v97 = v85 >> 15;
    LOWORD(v85) = *(_WORD *)&v167[6];
    HIWORD(v85) = *(_WORD *)&v167[4];
    v173 = 0;
    HIWORD(v172) = 4 * *(_WORD *)&v167[18];
    LOWORD(v172) = ((*(_WORD *)&v167[18] >> 14) & 1) + 2 * v92;
    HIWORD(v171) = ((*(_DWORD *)&v167[16] >> 14) & 1) + 2 * v93;
    WORD6(v171) = ((*(_WORD *)&v167[14] >> 14) & 1) + 2 * v94;
    WORD5(v171) = ((*(_DWORD *)&v167[12] >> 14) & 1) + 2 * v95;
    WORD4(v171) = ((*(_WORD *)&v167[10] >> 14) & 1) + 2 * v96;
    WORD3(v171) = ((*(_DWORD *)&v167[8] >> 14) & 1) + 2 * v97;
    WORD2(v171) = ((*(_WORD *)&v167[6] >> 14) & 1) + 2 * (v85 >> 15);
    v98 = (unsigned __int16)(4 * *(_WORD *)&v167[18]) + *(unsigned __int16 *)&v167[18];
    *(_WORD *)&v167[18] *= 5;
    v99 = HIWORD(v98) + (unsigned __int16)v172 + *(unsigned __int16 *)&v167[16];
    *(_WORD *)&v167[16] = v99;
    v100 = (HIWORD(v99) & 1) + HIWORD(v171) + *(unsigned __int16 *)&v167[14];
    *(_WORD *)&v167[14] += (BYTE2(v99) & 1) + HIWORD(v171);
    v101 = (HIWORD(v100) & 1) + WORD6(v171) + *(unsigned __int16 *)&v167[12];
    *(_WORD *)&v167[12] += (BYTE2(v100) & 1) + WORD6(v171);
    v102 = (HIWORD(v101) & 1) + WORD5(v171) + *(unsigned __int16 *)&v167[10];
    *(_WORD *)&v167[10] += (BYTE2(v101) & 1) + WORD5(v171);
    v103 = (HIWORD(v102) & 1) + WORD4(v171) + *(unsigned __int16 *)&v167[8];
    *(_WORD *)&v167[8] += (BYTE2(v102) & 1) + WORD4(v171);
    v104 = HIWORD(v103) & 1;
    v105 = v104 + WORD3(v171) + *(unsigned __int16 *)&v167[6];
    *(_WORD *)&v167[6] += v104 + WORD3(v171);
    *(_WORD *)&v167[4] += (BYTE2(v105) & 1) + WORD2(v171);
    v106 = sub_BC8B0((unsigned __int16 *)&v174, (__int64)v167, v13, si128);
    *v156++ = v106 + 48;
    ++v158.m128i_i32[0];
  }
  while ( v158.m128i_i32[0] < (unsigned int)v161 );
  v107 = v106 == 5;
  if ( v106 < 5u )
  {
    v6 = v160;
    a1 = v149;
    v9 = v154;
    v49 = i;
    v108 = v159;
  }
  else
  {
    v108 = v159;
    v109 = (char *)v166 + v159;
    v6 = v160;
    a1 = v149;
    v9 = v154;
    v49 = i;
    if ( !v107
      || *(_DWORD *)&v167[4]
      || __PAIR32__(*(unsigned __int16 *)&v167[8], 0) != *(unsigned __int16 *)&v167[10]
      || __PAIR32__(*(unsigned __int16 *)&v167[12], 0) != *(unsigned __int16 *)&v167[14]
      || *(_WORD *)&v167[16]
      || *(_DWORD *)&v167[18]
      || (*(v109 - 1) & 1) != 0 )
    {
      v110 = *(v109 - 1) & 0x7F;
      if ( v110 == 46 )
      {
LABEL_90:
        v112 = *(v109 - 2);
        *(v109 - 2) = v112 + 1;
        if ( v112 >= 57 )
        {
          v49 = i + 1;
          *(v109 - 2) = 49;
        }
      }
      else
      {
        v109 = (char *)v166 + v159;
        while ( 1 )
        {
          *(v109 - 1) = v110 + 1;
          if ( v110 < 0x39u )
            break;
          *(v109 - 1) = 48;
          v111 = *(v109 - 2);
          --v109;
          v110 = v111 & 0x7F;
          if ( v110 == 46 )
            goto LABEL_90;
        }
      }
    }
  }
  v113 = (char *)v166 + v108 + 2;
  do
  {
    v114 = *(v113 - 3);
    --v113;
  }
  while ( v114 == 48 );
  if ( v114 == 46 )
    *(v113 - 1) = 48;
  else
    --v113;
  *v113 = 0;
LABEL_99:
  v115 = v153;
  if ( !v153 )
  {
    v127 = v49;
    goto LABEL_130;
  }
  if ( v9 )
    v115 = v153 - 2 - v9 - (v49 >= 0);
  v116 = -v49;
  if ( -v49 < 1 )
    v116 = v49;
  if ( !v49 || v115 < v116 )
  {
    v127 = v49;
    if ( v9 )
    {
      v128 = v115;
      LODWORD(v129) = __strlen_chk((char *)v166 + 2, 46);
      a1 = v149;
      if ( v154 < (unsigned int)v129 )
      {
        v129 = v154;
        v130 = ((unsigned __int64)v154 << 32) + 0x100000000LL;
        while ( *((_BYTE *)v166 + (v130 >> 32)) == 48 )
        {
          v130 -= 0x100000000LL;
          if ( !--v129 )
          {
            LODWORD(v129) = 0;
            break;
          }
        }
        *((_BYTE *)v166 + (int)v129 + 2) = 0;
      }
      v131 = v154 - v129;
      v132 = v128 - (v49 < 0 && v128 != 0);
      if ( v132 )
      {
        v133 = v132;
        memset(v149, 32, v132);
        a1 = v149;
        v149[v132] = 0;
      }
      else
      {
        v133 = 0;
      }
LABEL_131:
      v123 = v133 + (int)qsnprintf(&a1[v133], v6 - v133, "%s%s", v157, (const char *)v166);
      v122 = v131;
      v124 = v127;
      if ( v131 )
        goto LABEL_158;
LABEL_132:
      v134 = v149;
      if ( v124 )
        goto LABEL_163;
      return __readfsqword(0x28u);
    }
LABEL_130:
    v133 = 0;
    v131 = 0;
    goto LABEL_131;
  }
  v117 = v115;
  if ( HIWORD(v166[0]) != 48 )
  {
    v118 = __strlen_chk((char *)v166 + 2, 46);
    __memmove_chk((char *)v166 + 1, (char *)v166 + 2, v118 + 1, 47);
    a1 = v149;
    if ( v154 )
      goto LABEL_108;
    goto LABEL_136;
  }
  BYTE1(v166[0]) = 0;
  if ( !v9 )
    goto LABEL_136;
LABEL_108:
  v119 = -1;
  if ( v49 > 0 )
    v119 = -v116;
  v120 = v119 + v117;
  if ( v120 )
  {
    v121 = v120;
    memset(v149, 32, v120);
    a1 = v149;
    v149[v120] = 0;
    if ( v49 <= 0 )
      goto LABEL_112;
LABEL_137:
    v135 = __strlen_chk(v166, 48);
    if ( v116 >= v135 )
    {
      v139 = v154;
      v126 = v154;
      v136 = v135;
      v137 = v149;
    }
    else
    {
      v136 = v116 + 1;
      v137 = v149;
      if ( v154 )
      {
        v138 = v135 - v136;
        if ( v138 > v154 )
        {
          *((_BYTE *)v166 + (int)(v136 + v154)) = 0;
          v138 = v154;
        }
        v126 = v154 - v138;
      }
      else
      {
        v126 = 0;
      }
      v139 = v154;
    }
    v140 = qsnprintf(&v137[v121], v6 - v121, "%s%.*s", v157, v136, (const char *)v166);
    if ( !v139 )
      v126 += *((_BYTE *)v166 + v136) == 0;
    v141 = v140 + v121;
    v142 = v149;
    if ( v136 <= v116 )
    {
      v143 = v116 + 1 - v136;
      memset(&v149[v141], 48, v143);
      v142 = v149;
      v141 += v143;
    }
    v142[v141] = 46;
    v123 = v141 + 1;
LABEL_156:
    v124 = 0;
    v123 += (int)qsnprintf(&v142[v123], v6 - v123, "%s", (const char *)v166 + v136);
    v122 = v126;
  }
  else
  {
LABEL_136:
    v121 = 0;
    if ( v49 > 0 )
      goto LABEL_137;
LABEL_112:
    if ( *v157 )
      a1[v121++] = *v157;
    v122 = v154;
    *(_WORD *)&a1[v121] = 11824;
    v123 = v121 + 2;
    if ( !v154 || (v124 = 0, (int)v116 <= (int)v154) )
    {
      v125 = v116 - 1;
      if ( v125 )
      {
        memset(&a1[v123], 48, v125);
        v122 = v154;
        v123 += v125;
        v126 = v154 - v125;
        if ( !v154 )
          v126 = 0;
      }
      else
      {
        v126 = v154;
      }
      v136 = 0;
      if ( v122 )
      {
        v144 = __strlen_chk(v166, 48);
        if ( v126 < v144 )
        {
          *((_BYTE *)v166 + v126) = 0;
          v144 = v126;
        }
        v126 -= v144;
      }
      v142 = v149;
      goto LABEL_156;
    }
  }
  if ( !v122 )
    goto LABEL_132;
LABEL_158:
  v145 = v6 - v123;
  if ( v122 <= (int)v6 - (int)v123 )
    v145 = v122;
  v134 = v149;
  if ( v145 )
  {
    v146 = v124;
    v147 = v145;
    memset(&v149[v123], 48, v145);
    v134 = v149;
    v123 += v147;
    v124 = v146;
    v149[v123] = 0;
  }
  if ( v124 )
LABEL_163:
    qsnprintf(&v134[v123], v6 - v123, "e%d", v124);
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 33EB0: using guessed type __int64 __fastcall __memmove_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 116174: using guessed type __int128 xmmword_116174;
// 116190: using guessed type __int64 qword_116190[2];
// 116210: using guessed type __int64 qword_116210;
// 116250: using guessed type __int64 qword_116250;
// 116260: using guessed type __int64 qword_116260[26];
// 116340: using guessed type __int64 qword_116340[6];
// 158B40: using guessed type __int64 under_debugger;
