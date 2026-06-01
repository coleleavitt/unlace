/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x000A6D30

//----- (000A6D30) --------------------------------------------------------
int __cdecl asctoreal(char **a1, int a2)
{
  char *v2; // esi
  char v3; // al
  char v4; // cl
  char *v5; // edx
  int v6; // edi
  char *v7; // esi
  char *v8; // edi
  int v9; // ecx
  char *v10; // esi
  int v12; // eax
  __int16 v13; // ax
  __int16 v14; // dx
  unsigned int v15; // et0
  __int16 v16; // ax
  __int16 v17; // dx
  __int16 v18; // ax
  __int16 v19; // dx
  __int16 v20; // si
  unsigned __int16 v21; // si
  unsigned __int16 v22; // bx
  unsigned __int16 v23; // di
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // edi
  unsigned int v28; // esi
  unsigned int v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  __int16 v35; // cx
  unsigned int v36; // et0
  unsigned __int16 v37; // si
  int v38; // edi
  int v39; // edi
  int v40; // ebx
  unsigned __int16 v41; // dx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ecx
  __m128i v45; // xmm0
  unsigned int v46; // edi
  __m128i v47; // xmm1
  unsigned int v48; // ecx
  __m128i v49; // xmm2
  unsigned int v50; // esi
  __m128i v51; // xmm3
  unsigned int v52; // ecx
  __m128i v53; // xmm4
  unsigned int v54; // edi
  __m128i v55; // xmm5
  unsigned int v56; // edx
  __m128i v57; // xmm6
  __int16 v58; // cx
  __m128i v59; // xmm7
  int v61; // eax
  __int16 v62; // di
  __int16 v63; // bx
  __int16 v64; // ax
  __int16 v65; // dx
  __int16 v66; // cx
  __int16 v67; // cx
  int v68; // eax
  char *v69; // esi
  char v70; // cl
  int v71; // eax
  int v72; // eax
  __int16 v73; // si
  int v74; // esi
  int v75; // ecx
  int v77; // edi
  char *v78; // ebx
  char v79; // [esp+4h] [ebp-118h]
  int v80; // [esp+4h] [ebp-118h]
  int v81; // [esp+4h] [ebp-118h]
  __int16 v82; // [esp+4h] [ebp-118h]
  int v83; // [esp+8h] [ebp-114h]
  int v84; // [esp+8h] [ebp-114h]
  __int16 v85; // [esp+8h] [ebp-114h]
  int v86; // [esp+8h] [ebp-114h]
  int v87; // [esp+Ch] [ebp-110h]
  int v88; // [esp+Ch] [ebp-110h]
  __int16 v89; // [esp+Ch] [ebp-110h]
  int v90; // [esp+Ch] [ebp-110h]
  int v91; // [esp+10h] [ebp-10Ch]
  int v92; // [esp+10h] [ebp-10Ch]
  __int16 v93; // [esp+10h] [ebp-10Ch]
  int v94; // [esp+14h] [ebp-108h]
  char *v95; // [esp+18h] [ebp-104h]
  char *v96; // [esp+18h] [ebp-104h]
  int v97; // [esp+1Ch] [ebp-100h]
  unsigned int v98; // [esp+20h] [ebp-FCh]
  char v99; // [esp+24h] [ebp-F8h]
  int v100; // [esp+28h] [ebp-F4h]
  int v101; // [esp+2Ch] [ebp-F0h]
  int v102; // [esp+30h] [ebp-ECh]
  unsigned int v103; // [esp+38h] [ebp-E4h]
  unsigned int v104; // [esp+3Ch] [ebp-E0h]
  int v105; // [esp+40h] [ebp-DCh]
  unsigned __int16 v106; // [esp+44h] [ebp-D8h]
  __int64 v107; // [esp+48h] [ebp-D4h] BYREF
  __int64 v108; // [esp+50h] [ebp-CCh]
  _BYTE v109[82]; // [esp+5Eh] [ebp-BEh] BYREF
  __int128 v110; // [esp+B0h] [ebp-6Ch] BYREF
  int v111; // [esp+C0h] [ebp-5Ch]
  __int16 v112; // [esp+C4h] [ebp-58h]
  _OWORD v113[2]; // [esp+D0h] [ebp-4Ch] BYREF
  _BYTE v114[24]; // [esp+F0h] [ebp-2Ch] BYREF
  unsigned int v115; // [esp+108h] [ebp-14h]

  v115 = __readgsdword(0x14u);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  v2 = *a1;
  v3 = **a1;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      v79 = v3;
      if ( !isspace((unsigned __int8)v3) )
        break;
      v3 = *++v2;
      if ( v3 < 0 )
        goto LABEL_6;
    }
    if ( !v79 )
      return 3;
  }
LABEL_6:
  *a1 = v2;
  qstrncpy((unsigned int)v109, (int)v2, 80);
  memset(v114, 0, 22);
  v4 = v109[0];
  if ( !v109[0] )
  {
    LOWORD(v97) = 0;
    v34 = 0;
    v99 = 0;
    v33 = 0;
    v5 = v109;
    goto LABEL_44;
  }
  v99 = 0;
  v5 = v109;
  v83 = 0;
  v91 = 0;
  v94 = 0;
  v97 = 0;
  v80 = 0;
  v87 = 0;
  while ( 1 )
  {
    if ( v4 >= 0 && (unsigned int)(unsigned __int8)v4 - 48 <= 9 )
    {
      v80 += v80 == 0;
      if ( (v4 - 48) | v87 | v91 )
      {
        if ( *(_WORD *)&v114[4] )
        {
          if ( v4 != 48 )
            v99 = 1;
        }
        else
        {
          v94 -= (v87 == 0) - 1;
          v13 = *(_WORD *)&v114[20];
          v95 = v5;
          *(_WORD *)&v114[20] *= 2;
          v14 = *(_WORD *)&v114[18];
          v106 = v4 - 48;
          HIWORD(v15) = *(_WORD *)&v114[18];
          LOWORD(v15) = v13;
          *(_WORD *)&v114[18] = v15 >> 15;
          v16 = *(_WORD *)&v114[16];
          LOWORD(v15) = v14;
          HIWORD(v15) = *(_WORD *)&v114[16];
          *(_WORD *)&v114[16] = v15 >> 15;
          v17 = *(_WORD *)&v114[14];
          LOWORD(v15) = v16;
          HIWORD(v15) = *(_WORD *)&v114[14];
          *(_WORD *)&v114[14] = v15 >> 15;
          v18 = *(_WORD *)&v114[12];
          LOWORD(v15) = v17;
          HIWORD(v15) = *(_WORD *)&v114[12];
          *(_WORD *)&v114[12] = v15 >> 15;
          v19 = *(_WORD *)&v114[8];
          v20 = *(_WORD *)&v114[10];
          LOWORD(v15) = v18;
          HIWORD(v15) = *(_WORD *)&v114[10];
          *(_WORD *)&v114[10] = v15 >> 15;
          LOWORD(v15) = v20;
          HIWORD(v15) = *(_WORD *)&v114[8];
          *(_WORD *)&v114[8] = v15 >> 15;
          LOWORD(v15) = v19;
          HIWORD(v15) = *(_WORD *)&v114[6];
          v105 = *(unsigned __int16 *)&v114[6] >> 15;
          *(_WORD *)&v114[6] = v15 >> 15;
          HIWORD(v15) = *(_WORD *)&v114[16];
          LOWORD(v15) = *(_WORD *)&v114[18];
          v21 = ((*(_WORD *)&v114[18] >> 14) & 1) + 2 * (v15 >> 15);
          HIWORD(v15) = *(_WORD *)&v114[14];
          LOWORD(v15) = *(_WORD *)&v114[16];
          v22 = ((*(_DWORD *)&v114[16] >> 14) & 1) + 2 * (v15 >> 15);
          HIWORD(v15) = *(_WORD *)&v114[12];
          LOWORD(v15) = *(_WORD *)&v114[14];
          v23 = ((*(_WORD *)&v114[14] >> 14) & 1) + 2 * (v15 >> 15);
          v24 = *(unsigned __int16 *)&v114[10];
          HIWORD(v15) = *(_WORD *)&v114[10];
          LOWORD(v15) = *(_WORD *)&v114[12];
          LOWORD(v24) = v15 >> 15;
          v101 = ((*(_DWORD *)&v114[12] >> 14) & 1) + 2 * v24;
          HIWORD(v25) = *(_WORD *)&v114[10];
          LOWORD(v15) = *(_WORD *)&v114[10];
          HIWORD(v15) = *(_WORD *)&v114[8];
          LOWORD(v25) = v15 >> 15;
          v102 = ((*(unsigned __int16 *)&v114[10] >> 14) & 1) + 2 * v25;
          HIWORD(v15) = *(_WORD *)&v114[6];
          LOWORD(v15) = *(_WORD *)&v114[8];
          LOWORD(v25) = v15 >> 15;
          v26 = (unsigned __int16)v105;
          HIWORD(v15) = v105;
          LOWORD(v15) = *(_WORD *)&v114[6];
          LOWORD(v26) = v15 >> 15;
          v98 = *(unsigned __int16 *)&v114[18] + 4 * (*(_WORD *)&v114[18] & 0x3FFF);
          v104 = HIWORD(v98) + v21 + *(unsigned __int16 *)&v114[16];
          v103 = (HIWORD(v104) & 1) + v22 + *(unsigned __int16 *)&v114[14];
          v27 = (HIWORD(v103) & 1) + v23 + *(unsigned __int16 *)&v114[12];
          v28 = (HIWORD(v27) & 1) + (unsigned __int16)v101 + *(unsigned __int16 *)&v114[10];
          v29 = (((unsigned int)((HIWORD(v28) & 1) + (unsigned __int16)v102 + *(unsigned __int16 *)&v114[8]) >> 16) & 1)
              + (unsigned __int16)(((*(_DWORD *)&v114[8] >> 14) & 1) + 2 * v25)
              + *(unsigned __int16 *)&v114[6];
          v100 = (HIWORD(v29) & 1) + v105 + ((*(unsigned __int16 *)&v114[6] >> 14) & 1) + 2 * v26;
          memset(v113, 0, 18);
          *(_DWORD *)((char *)&v113[1] + 2) = v106;
          *(_WORD *)&v114[18] = v106 + v98;
          *(_WORD *)&v114[16] = ((v106 + (unsigned int)(unsigned __int16)v98) >> 16) + v104;
          *(_WORD *)&v114[14] = ((((v106 + (unsigned int)(unsigned __int16)v98) >> 16) + (unsigned __int16)v104) >> 16)
                              + v103;
          v30 = ((((((v106 + (unsigned int)(unsigned __int16)v98) >> 16) + (unsigned __int16)v104) >> 16)
                + (unsigned __int16)v103) >> 16)
              + (unsigned __int16)v27;
          *(_WORD *)&v114[12] = v30;
          v30 >>= 16;
          *(_WORD *)&v114[10] = v30 + v28;
          v31 = ((v30 + (unsigned __int16)v28) >> 16) + (unsigned __int16)((BYTE2(v28) & 1) + v102 + *(_WORD *)&v114[8]);
          *(_WORD *)&v114[8] += ((v30 + (unsigned __int16)v28) >> 16) + (BYTE2(v28) & 1) + v102;
          v32 = HIWORD(v31) + (unsigned __int16)v29;
          v5 = v95;
          *(_WORD *)&v114[6] = v32;
          *(_WORD *)&v114[4] = v100 + HIWORD(v32);
        }
        ++v91;
      }
      goto LABEL_41;
    }
    if ( v4 == 122 )
    {
      if ( !v83 )
        goto LABEL_126;
      goto LABEL_41;
    }
    if ( v4 == 46 )
    {
      v6 = 3;
      if ( v87 )
        goto LABEL_105;
      v7 = v5;
      do
      {
        if ( (unsigned int)(unsigned __int8)v4 - 48 > 9 )
          break;
        v4 = *++v7;
      }
      while ( v4 >= 0 );
      v8 = v5;
      if ( tolower((unsigned __int8)v4) == 101 )
      {
        v9 = v80;
        v5 = v8;
        if ( !v80 && v7 == v8 )
          goto LABEL_126;
        if ( v7 <= v109 )
          goto LABEL_38;
      }
      else
      {
        *v7 = 0;
        v5 = v8;
        v9 = v80;
        if ( v7 <= v109 )
        {
LABEL_38:
          v80 = (v9 == 0) + v9;
          v87 = 1;
          goto LABEL_41;
        }
      }
      if ( *(v7 - 1) == 48 )
      {
        v10 = v7 - 1;
        do
        {
          *v10 = 122;
          v83 = 1;
          if ( v10 <= v109 )
            break;
        }
        while ( *--v10 == 48 );
      }
      goto LABEL_38;
    }
    if ( v4 != 45 && v4 != 43 )
      break;
    if ( v80 )
      goto LABEL_42;
    v12 = v97;
    if ( v4 == 45 )
      v12 = 0xFFFF;
    v97 = v12;
    v80 = -1;
LABEL_41:
    v4 = *++v5;
    if ( !v4 )
    {
LABEL_42:
      v33 = 0;
      v34 = v94;
      goto LABEL_44;
    }
  }
  v69 = v5;
  v6 = 3;
  if ( tolower((unsigned __int8)v4) == 101 )
  {
    v5 = v69;
    if ( !v80 )
      goto LABEL_105;
    v70 = v69[1];
    if ( v70 != 45 )
    {
      if ( v70 == 43 )
      {
        v71 = 1;
LABEL_112:
        v5 = v69 + 2;
        v70 = v69[2];
        if ( v70 < 0 )
          goto LABEL_105;
      }
      else
      {
        v5 = v69 + 1;
        v71 = 1;
        if ( v70 < 0 )
          goto LABEL_105;
      }
      if ( (unsigned int)(unsigned __int8)v70 - 48 > 9 )
        goto LABEL_105;
      v77 = 0;
      ++v5;
      do
      {
        v78 = v5;
        v77 = v70 + 10 * v77 - 48;
        if ( (v77 & 0x8000u) != 0 )
        {
          v6 = 3;
          goto LABEL_105;
        }
        v70 = *v5;
        if ( *v5 < 0 )
          break;
        ++v5;
      }
      while ( (unsigned int)(unsigned __int8)v70 - 48 < 0xA );
      if ( v71 >= 0 )
      {
        v5 = v78;
        v34 = v94;
        v33 = v77;
        goto LABEL_44;
      }
      v5 = v78;
      if ( v77 )
      {
        v33 = -v77;
        v34 = v94;
        goto LABEL_44;
      }
LABEL_126:
      v6 = 3;
      goto LABEL_105;
    }
    v71 = -1;
    goto LABEL_112;
  }
  v5 = v69;
  v34 = v94;
  if ( v80 )
  {
    v33 = 0;
    if ( v80 >= 0 || v91 )
    {
LABEL_44:
      v96 = v5;
      v81 = v33 - v34;
      if ( v33 - v34 > 0 )
      {
        if ( *(_WORD *)&v114[4] )
        {
          v35 = WORD2(v113[1]);
        }
        else
        {
          do
          {
            LODWORD(v113[0]) = *(_DWORD *)v114;
            HIWORD(v36) = *(_WORD *)&v114[16];
            LOWORD(v36) = *(_WORD *)&v114[18];
            v37 = ((*(_WORD *)&v114[18] >> 14) & 1) + 2 * (v36 >> 15);
            v38 = *(unsigned __int16 *)&v114[14];
            HIWORD(v36) = *(_WORD *)&v114[14];
            LOWORD(v36) = *(_WORD *)&v114[16];
            LOWORD(v38) = v36 >> 15;
            v84 = ((*(_DWORD *)&v114[16] >> 14) & 1) + 2 * v38;
            HIWORD(v38) = *(_WORD *)&v114[14];
            HIWORD(v36) = *(_WORD *)&v114[12];
            LOWORD(v36) = *(_WORD *)&v114[14];
            LOWORD(v38) = v36 >> 15;
            v88 = ((*(unsigned __int16 *)&v114[14] >> 14) & 1) + 2 * v38;
            v39 = *(unsigned __int16 *)&v114[10];
            HIWORD(v36) = *(_WORD *)&v114[10];
            LOWORD(v36) = *(_WORD *)&v114[12];
            LOWORD(v39) = v36 >> 15;
            v92 = ((*(_DWORD *)&v114[12] >> 14) & 1) + 2 * v39;
            HIWORD(v39) = *(_WORD *)&v114[10];
            LOWORD(v36) = *(_WORD *)&v114[10];
            HIWORD(v36) = *(_WORD *)&v114[8];
            LOWORD(v39) = v36 >> 15;
            v40 = ((*(unsigned __int16 *)&v114[10] >> 14) & 1) + 2 * v39;
            HIWORD(v36) = *(_WORD *)&v114[6];
            LOWORD(v36) = *(_WORD *)&v114[8];
            v41 = ((*(_DWORD *)&v114[8] >> 14) & 1) + 2 * (v36 >> 15);
            v42 = *(unsigned __int16 *)&v114[4];
            LOWORD(v36) = *(_WORD *)&v114[6];
            HIWORD(v36) = *(_WORD *)&v114[4];
            LOWORD(v42) = v36 >> 15;
            v43 = ((*(unsigned __int16 *)&v114[6] >> 14) & 1) + 2 * v42;
            v44 = *(unsigned __int16 *)&v114[18] + 4 * (*(_WORD *)&v114[18] & 0x3FFF);
            v45 = _mm_cvtsi32_si128(v44);
            v46 = HIWORD(v44) + *(unsigned __int16 *)&v114[16] + v37;
            v47 = _mm_cvtsi32_si128(v46);
            v48 = (HIWORD(v46) & 1) + *(unsigned __int16 *)&v114[14] + (unsigned __int16)v84;
            v49 = _mm_cvtsi32_si128(v48);
            v50 = (HIWORD(v48) & 1) + *(unsigned __int16 *)&v114[12] + (unsigned __int16)v88;
            v51 = _mm_cvtsi32_si128(v50);
            v52 = (HIWORD(v50) & 1) + *(unsigned __int16 *)&v114[10] + (unsigned __int16)v92;
            v53 = _mm_cvtsi32_si128(v52);
            v54 = (HIWORD(v52) & 1) + *(unsigned __int16 *)&v114[8] + (unsigned __int16)v40;
            v55 = _mm_cvtsi32_si128(v54);
            v56 = (HIWORD(v54) & 1) + *(unsigned __int16 *)&v114[6] + v41;
            v57 = _mm_cvtsi32_si128(v56);
            LOWORD(v43) = *(_WORD *)&v114[4] + v43;
            v58 = *(_WORD *)&v114[20];
            v59 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(
                      _mm_unpacklo_epi16(_mm_cvtsi32_si128((HIWORD(v56) & 1) + v43), v57),
                      _mm_unpacklo_epi16(v55, v53)),
                    _mm_unpacklo_epi32(_mm_unpacklo_epi16(v51, v49), _mm_unpacklo_epi16(v47, v45)));
            *(__m128i *)((char *)v113 + 4) = _mm_or_si128(
                                               _mm_add_epi16(v59, v59),
                                               _mm_srli_epi16(
                                                 _mm_unpacklo_epi64(
                                                   _mm_unpacklo_epi32(
                                                     _mm_unpacklo_epi16(v57, v55),
                                                     _mm_unpacklo_epi16(v53, v51)),
                                                   _mm_unpacklo_epi32(
                                                     _mm_unpacklo_epi16(v49, v47),
                                                     _mm_unpacklo_epi16(
                                                       v45,
                                                       _mm_cvtsi32_si128(*(unsigned int *)&v114[20])))),
                                                 0xFu));
            if ( (unsigned __int16)_mm_cvtsi128_si32(*(__m128i *)((char *)v113 + 4)) )
              break;
            *(_OWORD *)v114 = v113[0];
            *(_DWORD *)&v114[16] = v113[1];
            *(_WORD *)&v114[20] = 0;
            if ( v81-- < 2 )
              break;
          }
          while ( !*(_WORD *)&v114[4] );
          v35 = 2 * v58;
        }
        WORD2(v113[1]) = v35;
      }
      v61 = sub_A47E0((int)v114);
      if ( v61 >= 113 )
      {
        memset(v114, 0, 22);
        v82 = 0;
        v85 = 0;
        v89 = 0;
        v93 = 0;
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        goto LABEL_54;
      }
      v6 = 2;
      if ( emdnorm((int)v114, v99 & 1, 0, 16494 - v61, 112) )
      {
        v67 = v81;
        v86 = *(unsigned __int16 *)&v114[2];
        if ( v81 )
        {
          if ( v81 < 0 )
          {
            v72 = -v81;
            v90 = -1;
            if ( -v81 >= 4097 )
            {
              v110 = xmmword_EFD10;
              v111 = -2142563009;
              v112 = 0;
              sub_A5C30((int)&v110, v114);
              v86 -= 13606;
              LOWORD(v72) = -4096 - v81;
            }
            v67 = v72;
          }
          else
          {
            v90 = 1;
          }
          v108 = *(__int64 *)((char *)&qword_13ACD8 - 209380);
          v107 = *(__int64 *)((char *)&qword_13ACD8 - 209388);
          v73 = v67;
          if ( (v67 & 1) == 0 )
          {
            if ( (v67 & 2) == 0 )
              goto LABEL_73;
LABEL_88:
            emul(&v107, (__int16 *)dword_107BAC, (int)&v107);
            v67 = v73;
            if ( (v73 & 4) != 0 )
              goto LABEL_89;
LABEL_74:
            if ( (v67 & 8) == 0 )
              goto LABEL_75;
LABEL_90:
            emul(&v107, (__int16 *)dword_107B8C, (int)&v107);
            v67 = v73;
            if ( (v73 & 0x10) != 0 )
              goto LABEL_91;
LABEL_76:
            if ( (v67 & 0x20) == 0 )
              goto LABEL_77;
LABEL_92:
            emul(&v107, (__int16 *)&dword_107B6C, (int)&v107);
            v67 = v73;
            if ( (v73 & 0x40) != 0 )
              goto LABEL_93;
LABEL_78:
            if ( (v67 & 0x80u) == 0 )
              goto LABEL_79;
LABEL_94:
            emul(&v107, (__int16 *)dword_107B4C, (int)&v107);
            v67 = v73;
            if ( (v73 & 0x100) != 0 )
              goto LABEL_95;
LABEL_80:
            if ( (v67 & 0x200) == 0 )
              goto LABEL_81;
LABEL_96:
            emul(&v107, (__int16 *)dword_107B2C, (int)&v107);
            v67 = v73;
            if ( (v73 & 0x400) != 0 )
              goto LABEL_97;
LABEL_82:
            if ( (v67 & 0x800) == 0 )
              goto LABEL_83;
LABEL_98:
            emul(&v107, (__int16 *)dword_107B0C, (int)&v107);
            if ( (v73 & 0x1000) == 0 )
              goto LABEL_85;
LABEL_84:
            emul(&v107, (__int16 *)dword_107AFC, (int)&v107);
            goto LABEL_85;
          }
          emul(&v107, (__int16 *)dword_107BBC, (int)&v107);
          v67 = v73;
          if ( (v73 & 2) != 0 )
            goto LABEL_88;
LABEL_73:
          if ( (v67 & 4) == 0 )
            goto LABEL_74;
LABEL_89:
          emul(&v107, (__int16 *)dword_107B9C, (int)&v107);
          v67 = v73;
          if ( (v73 & 8) != 0 )
            goto LABEL_90;
LABEL_75:
          if ( (v67 & 0x10) == 0 )
            goto LABEL_76;
LABEL_91:
          emul(&v107, (__int16 *)dword_107B7C, (int)&v107);
          v67 = v73;
          if ( (v73 & 0x20) != 0 )
            goto LABEL_92;
LABEL_77:
          if ( (v67 & 0x40) == 0 )
            goto LABEL_78;
LABEL_93:
          emul(&v107, (__int16 *)dword_107B5C, (int)&v107);
          v67 = v73;
          if ( (v73 & 0x80u) != 0 )
            goto LABEL_94;
LABEL_79:
          if ( (v67 & 0x100) == 0 )
            goto LABEL_80;
LABEL_95:
          emul(&v107, (__int16 *)dword_107B3C, (int)&v107);
          v67 = v73;
          if ( (v73 & 0x200) != 0 )
            goto LABEL_96;
LABEL_81:
          if ( (v67 & 0x400) == 0 )
            goto LABEL_82;
LABEL_97:
          emul(&v107, (__int16 *)dword_107B1C, (int)&v107);
          v67 = v73;
          if ( (v73 & 0x800) != 0 )
            goto LABEL_98;
LABEL_83:
          if ( (v67 & 0x1000) != 0 )
            goto LABEL_84;
LABEL_85:
          LOWORD(v110) = SHIWORD(v108) >> 15;
          v74 = HIWORD(v108) & 0x7FFF;
          *(_DWORD *)((char *)&v110 + 2) = v74;
          WORD3(v110) = WORD2(v108);
          WORD4(v110) = WORD1(v108);
          WORD5(v110) = v108;
          WORD6(v110) = HIWORD(v107);
          HIWORD(v110) = WORD2(v107);
          LOWORD(v111) = WORD1(v107);
          HIWORD(v111) = v107;
          v112 = 0;
          if ( v90 < 0 )
          {
            v68 = sub_A5C30((int)&v110, v114);
            v75 = v86 + 0x3FFF - v74;
          }
          else
          {
            v68 = sub_A54C0((int)&v110, v114);
            v75 = v86 + v74 - 16382;
          }
          v86 = v75;
        }
        else
        {
          v68 = 0;
        }
        if ( emdnorm((int)v114, v68 != 0, 0, v86, 112) )
        {
          v65 = *(_WORD *)&v114[2];
          v64 = *(_WORD *)&v114[6];
          v63 = *(_WORD *)&v114[8];
          v62 = *(_WORD *)&v114[10];
          v93 = *(_WORD *)&v114[12];
          v89 = *(_WORD *)&v114[14];
          v85 = *(_WORD *)&v114[16];
          v82 = *(_WORD *)&v114[18];
LABEL_54:
          *(_WORD *)v114 = v97;
          v66 = v65 | 0x8000;
          if ( !(_WORD)v97 )
            v66 = v65;
          *(_WORD *)(a2 + 14) = v66;
          *(_WORD *)(a2 + 12) = v64;
          *(_WORD *)(a2 + 10) = v63;
          *(_WORD *)(a2 + 8) = v62;
          *(_WORD *)(a2 + 6) = v93;
          *(_WORD *)(a2 + 4) = v89;
          *(_WORD *)(a2 + 2) = v85;
          *(_WORD *)a2 = v82;
          v6 = 1;
        }
      }
      v5 = v96;
    }
  }
LABEL_105:
  *a1 += v5 - v109;
  return v6;
}
// A6EC6: conditional instruction was optimized away because cl.1==2E
// EFD10: using guessed type __int128 xmmword_EFD10;
// 107AFC: using guessed type int dword_107AFC[4];
// 107B0C: using guessed type int dword_107B0C[4];
// 107B1C: using guessed type int dword_107B1C[4];
// 107B2C: using guessed type int dword_107B2C[4];
// 107B3C: using guessed type int dword_107B3C[4];
// 107B4C: using guessed type int dword_107B4C[4];
// 107B5C: using guessed type int dword_107B5C[4];
// 107B6C: using guessed type int dword_107B6C;
// 107B7C: using guessed type int dword_107B7C[2];
// 107B8C: using guessed type int dword_107B8C[2];
// 107B9C: using guessed type int dword_107B9C[3];
// 107BAC: using guessed type int dword_107BAC[3];
// 107BBC: using guessed type int dword_107BBC[3];
// 13ACD8: using guessed type __int64 qword_13ACD8;
