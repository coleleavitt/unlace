/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x00000000000BA1C0

//----- (00000000000BA1C0) ----------------------------------------------------
__int64 __fastcall asctoreal(_BYTE **a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v4; // r15
  _BYTE *v5; // rbp
  char v6; // bl
  char *v7; // r14
  __m128i v8; // xmm0
  unsigned __int8 v9; // cl
  int v10; // r13d
  int v11; // ebx
  int v12; // r15d
  int v13; // edx
  int v14; // r12d
  int v15; // ecx
  unsigned int v16; // ebp
  int v17; // ebp
  int v18; // r12d
  char *v19; // rbx
  char *v20; // rbx
  __int16 v22; // ax
  __int16 v23; // dx
  unsigned int v24; // et0
  __int16 v25; // ax
  __int16 v26; // dx
  __int16 v27; // ax
  __int16 v28; // dx
  __int16 v29; // si
  int v30; // r8d
  __int16 v31; // r11
  __int16 v32; // bx
  char *v33; // r12
  __int16 v34; // r14
  int v35; // r8d
  __int16 v36; // di
  unsigned __int16 v37; // bp
  int v38; // eax
  int v39; // eax
  int v40; // r9d
  unsigned int v41; // esi
  unsigned int v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // ebp
  int v45; // r11d
  unsigned int v46; // edx
  int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // ecx
  unsigned int v51; // ecx
  int v52; // ebx
  int v53; // eax
  int v54; // ebx
  __int16 v55; // r14
  __int16 v56; // r15
  unsigned int v57; // et0
  __int16 v58; // r10
  __int16 v59; // r14
  __int16 v60; // di
  __int16 v61; // r9
  __int16 v62; // r8
  int v63; // r13d
  unsigned __int16 v64; // bp
  unsigned __int16 v65; // bx
  int v66; // r13d
  __int16 v67; // r14
  unsigned int v68; // r11d
  unsigned int v69; // r15d
  unsigned int v70; // edi
  unsigned int v71; // ebp
  unsigned int v72; // ebx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __m128i inserted; // xmm1
  int v76; // eax
  int v77; // eax
  __int16 v78; // r8
  __int16 v79; // r9
  __int16 v80; // dx
  __int16 v81; // si
  __int16 v82; // di
  __int16 v83; // bp
  __int16 v84; // bx
  __int16 v85; // cx
  __int16 v86; // ax
  int v87; // r13d
  int v88; // ecx
  int v89; // r15d
  char v90; // cl
  int v91; // eax
  int v92; // eax
  int v93; // r13d
  int v94; // ecx
  int v95; // ebx
  char *v96; // rdx
  int v97; // esp
  int v98; // r14d
  int v100; // [rsp+8h] [rbp-140h]
  int v101; // [rsp+8h] [rbp-140h]
  int v102; // [rsp+8h] [rbp-140h]
  int v104; // [rsp+18h] [rbp-130h]
  char v105; // [rsp+1Ch] [rbp-12Ch]
  int v106; // [rsp+20h] [rbp-128h]
  int v107; // [rsp+20h] [rbp-128h]
  int v108; // [rsp+2Ch] [rbp-11Ch]
  int v109; // [rsp+30h] [rbp-118h]
  int v110; // [rsp+34h] [rbp-114h]
  __int128 v112; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v113[96]; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v114; // [rsp+B0h] [rbp-98h] BYREF
  int v115; // [rsp+C0h] [rbp-88h]
  __int16 v116; // [rsp+C4h] [rbp-84h]
  _OWORD v117[2]; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE v118[24]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v119; // [rsp+110h] [rbp-38h]

  v4 = a1;
  v119 = __readfsqword(0x28u);
  *(_OWORD *)a2 = 0;
  v5 = *a1;
  v6 = **a1;
  if ( v6 >= 0 )
  {
    while ( isspace((unsigned __int8)v6) )
    {
      v6 = *++v5;
      if ( v6 < 0 )
        goto LABEL_6;
    }
    if ( !v6 )
      return 3;
  }
LABEL_6:
  v7 = v113;
  *a1 = v5;
  qstrncpy(v113, (__int64)v5, 80);
  v8.m128i_i64[0] = 0;
  memset(v118, 0, 22);
  v9 = v113[0];
  if ( !v113[0] )
  {
    LOWORD(v14) = 0;
    v53 = 0;
    v105 = 0;
    v52 = 0;
    goto LABEL_45;
  }
  v105 = 0;
  v7 = v113;
  v10 = 0;
  v11 = 0;
  v100 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    if ( (v9 & 0x80u) == 0 && (unsigned int)v9 - 48 <= 9 )
    {
      v12 += v12 == 0;
      v15 = (char)v9 - 48;
      if ( v15 | v13 | v11 )
      {
        if ( *(_WORD *)&v118[4] )
        {
          if ( v15 )
            v105 = 1;
        }
        else
        {
          v100 -= (v13 == 0) - 1;
          v22 = *(_WORD *)&v118[20];
          v110 = v13;
          *(_WORD *)&v118[20] *= 2;
          v23 = *(_WORD *)&v118[18];
          HIWORD(v24) = *(_WORD *)&v118[18];
          LOWORD(v24) = v22;
          *(_WORD *)&v118[18] = v24 >> 15;
          v25 = *(_WORD *)&v118[16];
          LOWORD(v24) = v23;
          HIWORD(v24) = *(_WORD *)&v118[16];
          *(_WORD *)&v118[16] = v24 >> 15;
          v26 = *(_WORD *)&v118[14];
          LOWORD(v24) = v25;
          HIWORD(v24) = *(_WORD *)&v118[14];
          *(_WORD *)&v118[14] = v24 >> 15;
          v27 = *(_WORD *)&v118[12];
          LOWORD(v24) = v26;
          HIWORD(v24) = *(_WORD *)&v118[12];
          *(_WORD *)&v118[12] = v24 >> 15;
          v28 = *(_WORD *)&v118[8];
          v29 = *(_WORD *)&v118[10];
          LOWORD(v24) = v27;
          HIWORD(v24) = *(_WORD *)&v118[10];
          *(_WORD *)&v118[10] = v24 >> 15;
          LOWORD(v24) = v29;
          HIWORD(v24) = *(_WORD *)&v118[8];
          *(_WORD *)&v118[8] = v24 >> 15;
          LOWORD(v24) = v28;
          HIWORD(v24) = *(_WORD *)&v118[6];
          v109 = *(unsigned __int16 *)&v118[6] >> 15;
          *(_WORD *)&v118[6] = v24 >> 15;
          HIWORD(v30) = *(_WORD *)&v118[18];
          LOWORD(v24) = *(_WORD *)&v118[18];
          HIWORD(v24) = *(_WORD *)&v118[16];
          LOWORD(v30) = v24 >> 15;
          HIWORD(v24) = *(_WORD *)&v118[14];
          LOWORD(v24) = *(_WORD *)&v118[16];
          v31 = v24 >> 15;
          v106 = v11;
          LOWORD(v24) = *(_WORD *)&v118[14];
          HIWORD(v24) = *(_WORD *)&v118[12];
          v32 = v24 >> 15;
          v104 = v14;
          v33 = v7;
          LOWORD(v24) = *(_WORD *)&v118[12];
          HIWORD(v24) = *(_WORD *)&v118[10];
          v34 = v24 >> 15;
          v35 = ((*(unsigned __int16 *)&v118[18] >> 14) & 1) + 2 * v30;
          LOWORD(v24) = *(_WORD *)&v118[10];
          HIWORD(v24) = *(_WORD *)&v118[8];
          v36 = v24 >> 15;
          v37 = ((*(_DWORD *)&v118[12] >> 14) & 1) + 2 * v34;
          v7 = v33;
          v14 = v104;
          v38 = *(unsigned __int16 *)&v118[6];
          LOWORD(v24) = *(_WORD *)&v118[8];
          HIWORD(v24) = *(_WORD *)&v118[6];
          LOWORD(v38) = v24 >> 15;
          v108 = ((*(_DWORD *)&v118[8] >> 14) & 1) + 2 * v38;
          v39 = (unsigned __int16)v109;
          HIWORD(v24) = v109;
          LOWORD(v24) = *(_WORD *)&v118[6];
          LOWORD(v39) = v24 >> 15;
          v40 = ((*(unsigned __int16 *)&v118[6] >> 14) & 1) + 2 * v39;
          v41 = (((((*(unsigned __int16 *)&v118[18] + 4 * (*(_WORD *)&v118[18] & 0x3FFFu)) >> 16)
                 + (unsigned __int16)v35
                 + *(unsigned __int16 *)&v118[16]) >> 16)
               & 1)
              + (unsigned __int16)(((*(_DWORD *)&v118[16] >> 14) & 1) + 2 * v31)
              + *(unsigned __int16 *)&v118[14];
          v42 = (HIWORD(v41) & 1)
              + (unsigned __int16)(((*(_WORD *)&v118[14] >> 14) & 1) + 2 * v32)
              + *(unsigned __int16 *)&v118[12];
          v43 = (HIWORD(v42) & 1) + v37 + *(unsigned __int16 *)&v118[10];
          v44 = (HIWORD(v43) & 1)
              + (unsigned __int16)(((*(_WORD *)&v118[10] >> 14) & 1) + 2 * v36)
              + *(unsigned __int16 *)&v118[8];
          v45 = (HIWORD(v44) & 1) + (unsigned __int16)v108 + *(unsigned __int16 *)&v118[6];
          v8.m128i_i64[0] = 0;
          memset(v117, 0, 22);
          WORD1(v117[1]) = v15;
          v46 = (unsigned __int16)v15 + (unsigned __int16)(*(_WORD *)&v118[18] + 4 * (*(_WORD *)&v118[18] & 0x3FFF));
          v47 = (unsigned __int16)(((*(unsigned __int16 *)&v118[18] + 4 * (*(_WORD *)&v118[18] & 0x3FFFu)) >> 16)
                                 + v35
                                 + *(_WORD *)&v118[16]);
          *(_WORD *)&v118[18] = v46;
          v48 = HIWORD(v46) + v47;
          *(_WORD *)&v118[16] = v48;
          *(_WORD *)&v118[14] = HIWORD(v48) + v41;
          v49 = ((unsigned int)(HIWORD(v48) + (unsigned __int16)v41) >> 16) + (unsigned __int16)v42;
          v13 = v110;
          v50 = (unsigned __int16)v43;
          v11 = v106;
          *(_WORD *)&v118[12] = v49;
          v51 = HIWORD(v49) + v50;
          *(_WORD *)&v118[10] = v51;
          *(_WORD *)&v118[8] = HIWORD(v51) + v44;
          *(_WORD *)&v118[6] = ((unsigned int)(HIWORD(v51) + (unsigned __int16)v44) >> 16) + v45;
          *(_WORD *)&v118[4] = (BYTE2(v45) & 1)
                             + v109
                             + v40
                             + ((((unsigned int)(HIWORD(v51) + (unsigned __int16)v44) >> 16) + (unsigned __int16)v45) >> 16);
        }
        ++v11;
      }
      goto LABEL_41;
    }
    if ( v9 != 122 )
      break;
    if ( !v10 )
    {
      v16 = 3;
      goto LABEL_65;
    }
LABEL_41:
    v9 = *++v7;
    if ( !v9 )
    {
LABEL_42:
      v52 = 0;
      v4 = a1;
LABEL_43:
      v53 = v100;
      goto LABEL_45;
    }
  }
  if ( v9 == 46 )
  {
    v16 = 3;
    if ( v13 )
      goto LABEL_65;
    v17 = v14;
    v18 = v11;
    v19 = v7;
    do
    {
      if ( (unsigned int)v9 - 48 > 9 )
        break;
      v9 = *++v19;
    }
    while ( (v9 & 0x80u) == 0 );
    if ( tolower(v9) == 101 )
    {
      if ( !v12 && v19 == v7 )
      {
        v4 = a1;
        v16 = 3;
        goto LABEL_124;
      }
    }
    else
    {
      *v19 = 0;
    }
    if ( v19 > v113 && *(v19 - 1) == 48 )
    {
      v20 = v19 - 1;
      do
      {
        *v20 = 122;
        v10 = 1;
        if ( v20 <= v113 )
          break;
      }
      while ( *--v20 == 48 );
    }
    v12 += v12 == 0;
    v13 = 1;
    v11 = v18;
    v14 = v17;
    goto LABEL_41;
  }
  if ( v9 == 45 || v9 == 43 )
  {
    if ( v12 )
      goto LABEL_42;
    if ( v9 == 45 )
      v14 = 0xFFFF;
    v12 = -1;
    goto LABEL_41;
  }
  v16 = 3;
  if ( tolower(v9) != 101 )
  {
    v53 = v100;
    if ( v12 )
    {
      v94 = v11;
      v52 = 0;
      if ( v12 >= 0 )
      {
        v4 = a1;
      }
      else
      {
        v4 = a1;
        if ( !v94 )
          goto LABEL_124;
      }
LABEL_45:
      v54 = v52 - v53;
      if ( v54 > 0 )
      {
        v107 = (int)v7;
        if ( *(_WORD *)&v118[4] )
        {
          v55 = WORD2(v117[1]);
        }
        else
        {
          while ( 1 )
          {
            v101 = v54;
            LODWORD(v117[0]) = *(_DWORD *)v118;
            LOWORD(v57) = *(_WORD *)&v118[18];
            HIWORD(v57) = *(_WORD *)&v118[16];
            v56 = v57 >> 15;
            HIWORD(v57) = *(_WORD *)&v118[14];
            LOWORD(v57) = *(_WORD *)&v118[16];
            v58 = v57 >> 15;
            LOWORD(v57) = *(_WORD *)&v118[14];
            HIWORD(v57) = *(_WORD *)&v118[12];
            v59 = v57 >> 15;
            LOWORD(v57) = *(_WORD *)&v118[12];
            HIWORD(v57) = *(_WORD *)&v118[10];
            v60 = v57 >> 15;
            LOWORD(v57) = *(_WORD *)&v118[10];
            HIWORD(v57) = *(_WORD *)&v118[8];
            v61 = v57 >> 15;
            LOWORD(v57) = *(_WORD *)&v118[8];
            HIWORD(v57) = *(_WORD *)&v118[6];
            v62 = v57 >> 15;
            v63 = *(unsigned __int16 *)&v118[4];
            LOWORD(v57) = *(_WORD *)&v118[6];
            HIWORD(v57) = *(_WORD *)&v118[4];
            LOWORD(v63) = v57 >> 15;
            v64 = ((*(_WORD *)&v118[14] >> 14) & 1) + 2 * v59;
            v65 = ((*(_DWORD *)&v118[12] >> 14) & 1) + 2 * v60;
            v66 = ((*(unsigned __int16 *)&v118[6] >> 14) & 1) + 2 * v63;
            v67 = *(_WORD *)&v118[20];
            v68 = *(unsigned __int16 *)&v118[18] + 4 * (*(_WORD *)&v118[18] & 0x3FFF);
            v69 = HIWORD(v68)
                + *(unsigned __int16 *)&v118[16]
                + (unsigned __int16)(((*(_WORD *)&v118[18] >> 14) & 1) + 2 * v56);
            v70 = (HIWORD(v69) & 1)
                + *(unsigned __int16 *)&v118[14]
                + (unsigned __int16)(((*(_DWORD *)&v118[16] >> 14) & 1) + 2 * v58);
            v71 = (HIWORD(v70) & 1) + *(unsigned __int16 *)&v118[12] + v64;
            v72 = (HIWORD(v71) & 1) + *(unsigned __int16 *)&v118[10] + v65;
            v73 = (HIWORD(v72) & 1)
                + *(unsigned __int16 *)&v118[8]
                + (unsigned __int16)(((*(_WORD *)&v118[10] >> 14) & 1) + 2 * v61);
            v74 = (HIWORD(v73) & 1)
                + *(unsigned __int16 *)&v118[6]
                + (unsigned __int16)(((*(_DWORD *)&v118[8] >> 14) & 1) + 2 * v62);
            LOWORD(v66) = *(_WORD *)&v118[4] + v66;
            v8 = _mm_srli_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v74), v73, 1), v72, 2),
                             v71,
                             3),
                           v70,
                           4),
                         v69,
                         5),
                       v68,
                       6),
                     *(unsigned int *)&v118[20],
                     7),
                   0xFu);
            inserted = _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(
                               _mm_insert_epi16(
                                 _mm_insert_epi16(
                                   _mm_insert_epi16(_mm_cvtsi32_si128((HIWORD(v74) & 1) + v66), v74, 1),
                                   v73,
                                   2),
                                 v72,
                                 3),
                               v71,
                               4),
                             v70,
                             5),
                           v69,
                           6),
                         v68,
                         7);
            a4 = (__m128)_mm_or_si128(_mm_add_epi16(inserted, inserted), v8);
            *(__m128 *)((char *)v117 + 4) = a4;
            if ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)a4) )
              break;
            v76 = v101 - 1;
            v8.m128i_i64[0] = *(_QWORD *)&v117[0];
            *(_OWORD *)v118 = v117[0];
            *(_DWORD *)&v118[16] = v117[1];
            *(_WORD *)&v118[20] = 0;
            if ( v101 >= 2 )
            {
              v54 = v101 - 1;
              if ( !*(_WORD *)&v118[4] )
                continue;
            }
            goto LABEL_54;
          }
          v76 = v101;
LABEL_54:
          v55 = 2 * v67;
          v54 = v76;
          v4 = a1;
        }
        WORD2(v117[1]) = v55;
        LODWORD(v7) = v107;
      }
      v77 = sub_B8110((__int64)v118);
      if ( v77 >= 113 )
      {
        memset(v118, 0, 22);
        v78 = 0;
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
LABEL_58:
        *(_WORD *)v118 = v14;
        v86 = v85 | 0x8000;
        if ( !(_WORD)v14 )
          v86 = v85;
        *(_WORD *)(a2 + 14) = v86;
        *(_WORD *)(a2 + 12) = v84;
        *(_WORD *)(a2 + 10) = v83;
        *(_WORD *)(a2 + 8) = v82;
        *(_WORD *)(a2 + 6) = v81;
        *(_WORD *)(a2 + 4) = v80;
        *(_WORD *)(a2 + 2) = v79;
        *(_WORD *)a2 = v78;
        v16 = 1;
        goto LABEL_124;
      }
      v87 = 0;
      v16 = 2;
      if ( !emdnorm((__int64)v118, v105 & 1, 0, 16494 - v77, 112, *(double *)v8.m128i_i64, a4) )
        goto LABEL_124;
      v88 = *(unsigned __int16 *)&v118[2];
      if ( !v54 )
      {
LABEL_110:
        if ( !emdnorm((__int64)v118, v87 != 0, 0, v88, 112, *(double *)v8.m128i_i64, a4) )
          goto LABEL_124;
        v85 = *(_WORD *)&v118[2];
        v84 = *(_WORD *)&v118[6];
        v83 = *(_WORD *)&v118[8];
        v82 = *(_WORD *)&v118[10];
        v81 = *(_WORD *)&v118[12];
        v80 = *(_WORD *)&v118[14];
        v79 = *(_WORD *)&v118[16];
        v78 = *(_WORD *)&v118[18];
        goto LABEL_58;
      }
      v89 = 1;
      if ( v54 < 0 )
      {
        v92 = -v54;
        v89 = -1;
        if ( -v54 < 4097 )
        {
          v102 = *(unsigned __int16 *)&v118[2];
        }
        else
        {
          v114 = xmmword_FE330;
          v115 = -2142563009;
          v116 = 0;
          v93 = *(unsigned __int16 *)&v118[2];
          sub_B9320((__int64)&v114, (__int64)v118);
          v102 = v93 - 13606;
          LOWORD(v92) = -4096 - v54;
        }
        LOWORD(v54) = v92;
      }
      else
      {
        v102 = *(unsigned __int16 *)&v118[2];
      }
      v8.m128i_i64[0] = 0;
      v112 = xmmword_116174;
      if ( (v54 & 1) != 0 )
      {
        emul(&v112, (__int16 *)&qword_116250, (__int64)&v112, 0.0, a4);
        if ( (v54 & 2) == 0 )
        {
LABEL_81:
          if ( (v54 & 4) == 0 )
            goto LABEL_82;
          goto LABEL_97;
        }
      }
      else if ( (v54 & 2) == 0 )
      {
        goto LABEL_81;
      }
      emul(&v112, (__int16 *)&qword_116240, (__int64)&v112, 0.0, a4);
      if ( (v54 & 4) == 0 )
      {
LABEL_82:
        if ( (v54 & 8) == 0 )
          goto LABEL_83;
        goto LABEL_98;
      }
LABEL_97:
      emul(&v112, (__int16 *)&qword_116230, (__int64)&v112, 0.0, a4);
      if ( (v54 & 8) == 0 )
      {
LABEL_83:
        if ( (v54 & 0x10) == 0 )
          goto LABEL_84;
        goto LABEL_99;
      }
LABEL_98:
      emul(&v112, (__int16 *)&qword_116220, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x10) == 0 )
      {
LABEL_84:
        if ( (v54 & 0x20) == 0 )
          goto LABEL_85;
        goto LABEL_100;
      }
LABEL_99:
      emul(&v112, (__int16 *)&qword_116210, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x20) == 0 )
      {
LABEL_85:
        if ( (v54 & 0x40) == 0 )
          goto LABEL_86;
        goto LABEL_101;
      }
LABEL_100:
      emul(&v112, (__int16 *)qword_116200, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x40) == 0 )
      {
LABEL_86:
        if ( (v54 & 0x80u) == 0 )
          goto LABEL_87;
        goto LABEL_102;
      }
LABEL_101:
      emul(&v112, (__int16 *)qword_1161F0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x80u) == 0 )
      {
LABEL_87:
        if ( (v54 & 0x100) == 0 )
          goto LABEL_88;
        goto LABEL_103;
      }
LABEL_102:
      emul(&v112, (__int16 *)qword_1161E0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x100) == 0 )
      {
LABEL_88:
        if ( (v54 & 0x200) == 0 )
          goto LABEL_89;
        goto LABEL_104;
      }
LABEL_103:
      emul(&v112, (__int16 *)qword_1161D0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x200) == 0 )
      {
LABEL_89:
        if ( (v54 & 0x400) == 0 )
          goto LABEL_90;
        goto LABEL_105;
      }
LABEL_104:
      emul(&v112, (__int16 *)qword_1161C0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x400) == 0 )
      {
LABEL_90:
        if ( (v54 & 0x800) == 0 )
          goto LABEL_91;
        goto LABEL_106;
      }
LABEL_105:
      emul(&v112, (__int16 *)qword_1161B0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x800) == 0 )
      {
LABEL_91:
        if ( (v54 & 0x1000) == 0 )
        {
LABEL_93:
          LOWORD(v114) = SHIWORD(v112) >> 15;
          v95 = HIWORD(v112) & 0x7FFF;
          *(_DWORD *)((char *)&v114 + 2) = v95;
          WORD3(v114) = WORD6(v112);
          WORD4(v114) = WORD5(v112);
          WORD5(v114) = WORD4(v112);
          WORD6(v114) = WORD3(v112);
          HIWORD(v114) = WORD2(v112);
          LOWORD(v115) = WORD1(v112);
          HIWORD(v115) = v112;
          v116 = 0;
          if ( v89 < 0 )
          {
            v87 = sub_B9320((__int64)&v114, (__int64)v118);
            v88 = v102 + 0x3FFF - v95;
          }
          else
          {
            v87 = sub_B8CF0((__int64)&v114, (int *)v118);
            v88 = v102 + v95 - 16382;
          }
          v4 = a1;
          goto LABEL_110;
        }
LABEL_92:
        emul(&v112, (__int16 *)qword_116190, (__int64)&v112, 0.0, a4);
        goto LABEL_93;
      }
LABEL_106:
      emul(&v112, (__int16 *)qword_1161A0, (__int64)&v112, 0.0, a4);
      if ( (v54 & 0x1000) == 0 )
        goto LABEL_93;
      goto LABEL_92;
    }
LABEL_65:
    v4 = a1;
    goto LABEL_124;
  }
  if ( !v12 )
    goto LABEL_65;
  v90 = v7[1];
  v4 = a1;
  if ( v90 == 45 )
  {
    v91 = -1;
LABEL_113:
    v7 += 2;
    v90 = *v7;
    if ( *v7 >= 0 )
      goto LABEL_116;
  }
  else
  {
    if ( v90 == 43 )
    {
      v91 = 1;
      goto LABEL_113;
    }
    ++v7;
    v91 = 1;
    if ( v90 >= 0 )
    {
LABEL_116:
      if ( (unsigned int)(unsigned __int8)v90 - 48 <= 9 )
      {
        v52 = 0;
        v96 = v7 + 1;
        while ( 1 )
        {
          LODWORD(v7) = (_DWORD)v96;
          v52 = v90 + 10 * v52 - 48;
          if ( (v52 & 0x8000u) != 0 )
            break;
          v90 = *v96;
          if ( *v96 >= 0 )
          {
            ++v96;
            if ( (unsigned int)(unsigned __int8)v90 - 48 < 0xA )
              continue;
          }
          if ( v91 >= 0 )
            goto LABEL_43;
          v53 = v100;
          if ( v52 )
          {
            v52 = -v52;
            goto LABEL_45;
          }
          break;
        }
      }
    }
  }
LABEL_124:
  v98 = (_DWORD)v7 - (v97 + 80);
  *v4 += v98;
  return v16;
}
// BA302: conditional instruction was optimized away because cl.1==2E
// BAFDC: variable 'v97' is possibly undefined
// FE330: using guessed type __int128 xmmword_FE330;
// 116174: using guessed type __int128 xmmword_116174;
// 116190: using guessed type __int64 qword_116190[2];
// 1161A0: using guessed type __int64 qword_1161A0[2];
// 1161B0: using guessed type __int64 qword_1161B0[2];
// 1161C0: using guessed type __int64 qword_1161C0[2];
// 1161D0: using guessed type __int64 qword_1161D0[2];
// 1161E0: using guessed type __int64 qword_1161E0[2];
// 1161F0: using guessed type __int64 qword_1161F0[2];
// 116200: using guessed type __int64 qword_116200[2];
// 116210: using guessed type __int64 qword_116210;
// 116220: using guessed type __int64 qword_116220;
// 116230: using guessed type __int64 qword_116230;
// 116240: using guessed type __int64 qword_116240;
// 116250: using guessed type __int64 qword_116250;
