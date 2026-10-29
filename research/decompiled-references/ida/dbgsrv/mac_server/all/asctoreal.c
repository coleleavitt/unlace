/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x0000000100076990

//----- (0000000100076990) ----------------------------------------------------
__int64 __fastcall asctoreal(char **a1, _OWORD *a2)
{
  char *v3; // rsi
  char v4; // al
  _BYTE *v5; // rbx
  unsigned __int8 v6; // cl
  int v7; // r14d
  int v8; // r15d
  int v9; // r13d
  int v10; // r8d
  unsigned __int8 v11; // al
  _BYTE *v12; // r15
  bool v13; // zf
  char v14; // cl
  bool v15; // al
  int v16; // ecx
  int v17; // eax
  _BYTE *v18; // r15
  __int16 v19; // si
  unsigned int v20; // et0
  unsigned __int16 v21; // di
  unsigned __int16 v22; // r15
  unsigned __int16 v23; // r10
  unsigned __int16 v24; // r12
  unsigned __int16 v25; // r9
  __int16 v26; // bx
  __int16 v27; // ax
  __int16 v28; // r11
  __int16 v29; // r9
  __int16 v30; // r10
  __int16 v31; // r12
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // bx
  unsigned __int16 v34; // r12
  unsigned __int16 v35; // r10
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r11
  unsigned int v38; // esi
  int v39; // eax
  unsigned int v40; // r15d
  unsigned int v41; // eax
  unsigned int v42; // edx
  unsigned int v43; // edi
  unsigned int v44; // ecx
  int v45; // esi
  unsigned int v46; // esi
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  int v51; // esi
  unsigned int v52; // r13d
  char **v53; // r12
  _BYTE *v54; // rdx
  char v55; // cl
  __int64 v56; // rax
  int v57; // esi
  unsigned __int16 v58; // r10
  unsigned __int16 epi16; // r14
  unsigned __int16 v60; // r8
  unsigned __int16 v61; // r9
  unsigned __int16 v62; // cx
  unsigned __int16 v63; // dx
  unsigned __int16 v64; // di
  int v65; // r15d
  __int16 v66; // r13
  unsigned int v67; // et0
  __int16 v68; // bx
  __int16 v69; // ax
  __int16 v70; // r12
  __int16 v71; // r15
  __int16 v72; // r10
  unsigned int v73; // r11d
  unsigned __int16 v74; // si
  unsigned __int16 v75; // ax
  unsigned __int16 v76; // bx
  unsigned __int16 v77; // r13
  unsigned __int16 v78; // r12
  unsigned __int16 v79; // r15
  __int16 v80; // r10
  unsigned int v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // esi
  unsigned int v84; // edi
  unsigned int v85; // r8d
  __m128i inserted; // xmm1
  __m128i v87; // xmm0
  unsigned int v88; // et0
  __m128i v89; // xmm1
  __m128i v90; // xmm0
  int v91; // eax
  __m128i v92; // xmm0
  __int16 v93; // ax
  __int16 v94; // cx
  __m128i v95; // xmm1
  __int16 v96; // dx
  int v97; // ecx
  int v98; // r14d
  int v99; // ebx
  int v100; // eax
  char v101; // al
  char *v102; // rdx
  int v103; // edi
  int v104; // eax
  _OWORD *v106; // [rsp+0h] [rbp-130h]
  int v107; // [rsp+10h] [rbp-120h]
  unsigned __int16 v108; // [rsp+14h] [rbp-11Ch]
  _BYTE *v109; // [rsp+18h] [rbp-118h]
  int v110; // [rsp+18h] [rbp-118h]
  unsigned __int16 v111; // [rsp+24h] [rbp-10Ch]
  unsigned __int16 v112; // [rsp+26h] [rbp-10Ah]
  unsigned __int16 v113; // [rsp+28h] [rbp-108h]
  unsigned __int16 v114; // [rsp+2Ah] [rbp-106h]
  int v115; // [rsp+30h] [rbp-100h]
  int v116; // [rsp+34h] [rbp-FCh]
  int v117; // [rsp+38h] [rbp-F8h]
  int v118; // [rsp+38h] [rbp-F8h]
  int v119; // [rsp+38h] [rbp-F8h]
  int v120; // [rsp+38h] [rbp-F8h]
  __int16 v122; // [rsp+48h] [rbp-E8h]
  unsigned int v123; // [rsp+48h] [rbp-E8h]
  int v124; // [rsp+4Ch] [rbp-E4h]
  __int16 v125; // [rsp+4Ch] [rbp-E4h]
  __int128 v126; // [rsp+50h] [rbp-E0h] BYREF
  _BYTE v127[96]; // [rsp+60h] [rbp-D0h] BYREF
  _BYTE v128[20]; // [rsp+C0h] [rbp-70h] BYREF
  __int16 v129; // [rsp+D4h] [rbp-5Ch]
  __m128i v130[2]; // [rsp+E0h] [rbp-50h] BYREF
  __int64 savedregs; // [rsp+130h] [rbp+0h] BYREF

  *a2 = 0;
  v3 = *a1;
  v4 = **a1;
  if ( v4 >= 0 )
  {
    while ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v4] & 0x4000) != 0 )
    {
      v4 = *++v3;
      if ( v4 < 0 )
        goto LABEL_6;
    }
    if ( !v4 )
      return 3;
  }
LABEL_6:
  v106 = a2;
  *a1 = v3;
  v5 = v127;
  qstrncpy(v127, (__int64)v3, 80);
  memset(v130, 0, 22);
  v6 = v127[0];
  if ( !v127[0] )
  {
    LOWORD(v115) = 0;
    v50 = 0;
    LOBYTE(v116) = 0;
    v51 = 0;
LABEL_55:
    v57 = v51 - v50;
    v110 = (int)v5;
    if ( v57 <= 0 || v130[0].i16[2] )
    {
      v65 = v57;
    }
    else
    {
      v58 = v130[0].u16[3];
      epi16 = v130[0].u16[4];
      v60 = v130[0].u16[5];
      v61 = v130[0].u16[6];
      v62 = v130[0].u16[7];
      v63 = v130[1].u16[0];
      v64 = v130[1].u16[1];
      LOWORD(v65) = v130[1].i16[2];
      while ( 1 )
      {
        v119 = v57;
        v125 = v65;
        HIWORD(v67) = v61;
        LOWORD(v67) = v62;
        v66 = v67 >> 15;
        HIWORD(v67) = v62;
        LOWORD(v67) = v63;
        v68 = v67 >> 15;
        HIWORD(v67) = v63;
        LOWORD(v67) = v64;
        v69 = v67 >> 15;
        HIWORD(v67) = v60;
        LOWORD(v67) = v61;
        v70 = v67 >> 15;
        HIWORD(v67) = epi16;
        LOWORD(v67) = v60;
        v71 = v67 >> 15;
        v123 = v58;
        HIWORD(v67) = v58;
        LOWORD(v67) = epi16;
        v72 = v67 >> 15;
        v73 = v123 >> 15;
        LOWORD(v67) = 2 * v64;
        HIWORD(v67) = v69;
        v74 = v67 >> 15;
        LOWORD(v67) = v69;
        HIWORD(v67) = v68;
        v75 = v67 >> 15;
        LOWORD(v67) = v68;
        HIWORD(v67) = v66;
        v76 = v67 >> 15;
        LOWORD(v67) = v66;
        HIWORD(v67) = v70;
        v77 = v67 >> 15;
        LOWORD(v67) = v70;
        HIWORD(v67) = v71;
        v78 = v67 >> 15;
        LOWORD(v67) = v71;
        HIWORD(v67) = v72;
        v79 = v67 >> 15;
        HIWORD(v67) = v123 >> 15;
        LOWORD(v67) = v72;
        LOWORD(v73) = v67 >> 15;
        v80 = 5 * v64;
        v81 = v63 + ((unsigned __int16)(5 * v64) < v64) + v74;
        v82 = HIWORD(v81) + v62 + v75;
        v83 = v61 + v76 + HIWORD(v82);
        v84 = v60 + v77 + HIWORD(v83);
        v85 = epi16 + v78 + HIWORD(v84);
        if ( v73 + ((HIWORD(v85) + v123 + v79) >> 16) )
          break;
        inserted = _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v85), v84, 1), v83, 2);
        v87 = _mm_insert_epi16(inserted, v82, 3);
        HIWORD(v88) = v82;
        LOWORD(v88) = v81;
        v62 = v88 >> 15;
        HIWORD(v88) = v81;
        LOWORD(v88) = v80;
        v63 = v88 >> 15;
        LOWORD(v88) = v125;
        HIWORD(v88) = v80;
        v64 = v88 >> 15;
        v130[0].i16[2] = 0;
        v89 = _mm_insert_epi16(_mm_slli_epi64(inserted, 0x10u), HIWORD(v85) + v123 + v79, 0);
        v90 = _mm_or_si128(_mm_srli_epi16(v87, 0xFu), _mm_add_epi16(v89, v89));
        *(__int64 *)((char *)v130[0].i64 + 6) = v90.i64[0];
        v130[0].i16[7] = v62;
        v130[1].i16[0] = v63;
        *(__int32 *)((char *)v130[1].i32 + 2) = v64;
        epi16 = _mm_extract_epi16(v90, 1);
        v60 = _mm_extract_epi16(v90, 2);
        v61 = _mm_extract_epi16(v90, 3);
        v58 = _mm_cvtsi128_si32(v90);
        v65 = 0;
        v57 = v119 - 1;
        if ( v119 <= 1 )
          goto LABEL_63;
      }
      v65 = v119;
    }
LABEL_63:
    v91 = sub_1000751F0((__int64)v130);
    if ( v91 > 112 )
    {
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v53 = a1;
      LODWORD(v5) = v110;
LABEL_65:
      v96 = v94 | 0x8000;
      if ( !(_WORD)v115 )
        v96 = v94;
      *((_WORD *)v106 + 7) = v96;
      *((_WORD *)v106 + 6) = v93;
      *((_DWORD *)v106 + 2) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(v95, 225));
      *(_QWORD *)v106 = _mm_shufflelo_epi16(v92, 27).u64[0];
      v52 = 1;
      goto LABEL_116;
    }
    v52 = 2;
    v53 = a1;
    LODWORD(v5) = v110;
    if ( !(unsigned __int8)emdnorm((__int64)v130, v116 & 1, 0, 16494 - v91, 112) )
      goto LABEL_116;
    v97 = v130[0].u16[1];
    if ( !v65 )
    {
      v101 = 0;
LABEL_107:
      if ( !(unsigned __int8)emdnorm((__int64)v130, v101, 0, v97, 112) )
        goto LABEL_116;
      v94 = v130[0].i16[1];
      v93 = v130[0].i16[3];
      v95 = _mm_loadl_epi64((const __m128i *)&v130[0].u64[1]);
      v92 = _mm_loadl_epi64((const __m128i *)((char *)&v130[0].u64[1] + 4));
      goto LABEL_65;
    }
    LOWORD(v98) = v65;
    if ( v65 < 0 )
    {
      v98 = -v65;
      if ( -v65 >= 4097 )
      {
        *(__m128i *)v128 = _mm_load_si128((const __m128i *)&xmmword_1000A1530);
        *(_DWORD *)&v128[16] = -2142563009;
        v129 = 0;
        v98 = v130[0].u16[1];
        sub_100075FE0(v128, v130[0].i32);
        v97 = v98 - 13606;
        LOWORD(v98) = -4096 - v65;
      }
    }
    v120 = v97;
    v126 = xmmword_1000A1550;
    if ( (v98 & 1) != 0 )
    {
      emul((__int16 *)&v126, (__int16 *)&qword_1000A1620, (__int64)&v126);
      if ( (v98 & 2) == 0 )
      {
LABEL_75:
        if ( (v98 & 4) == 0 )
          goto LABEL_76;
        goto LABEL_94;
      }
    }
    else if ( (v98 & 2) == 0 )
    {
      goto LABEL_75;
    }
    emul((__int16 *)&v126, (__int16 *)&qword_1000A1610, (__int64)&v126);
    if ( (v98 & 4) == 0 )
    {
LABEL_76:
      if ( (v98 & 8) == 0 )
        goto LABEL_77;
      goto LABEL_95;
    }
LABEL_94:
    emul((__int16 *)&v126, (__int16 *)&qword_1000A1600, (__int64)&v126);
    if ( (v98 & 8) == 0 )
    {
LABEL_77:
      if ( (v98 & 0x10) == 0 )
        goto LABEL_78;
      goto LABEL_96;
    }
LABEL_95:
    emul((__int16 *)&v126, (__int16 *)&qword_1000A15F0, (__int64)&v126);
    if ( (v98 & 0x10) == 0 )
    {
LABEL_78:
      if ( (v98 & 0x20) == 0 )
        goto LABEL_79;
      goto LABEL_97;
    }
LABEL_96:
    emul((__int16 *)&v126, (__int16 *)&qword_1000A15E0, (__int64)&v126);
    if ( (v98 & 0x20) == 0 )
    {
LABEL_79:
      if ( (v98 & 0x40) == 0 )
        goto LABEL_80;
      goto LABEL_98;
    }
LABEL_97:
    emul((__int16 *)&v126, (__int16 *)qword_1000A15D0, (__int64)&v126);
    if ( (v98 & 0x40) == 0 )
    {
LABEL_80:
      if ( (v98 & 0x80u) == 0 )
        goto LABEL_81;
      goto LABEL_99;
    }
LABEL_98:
    emul((__int16 *)&v126, (__int16 *)qword_1000A15C0, (__int64)&v126);
    if ( (v98 & 0x80u) == 0 )
    {
LABEL_81:
      if ( (v98 & 0x100) == 0 )
        goto LABEL_82;
      goto LABEL_100;
    }
LABEL_99:
    emul((__int16 *)&v126, (__int16 *)qword_1000A15B0, (__int64)&v126);
    if ( (v98 & 0x100) == 0 )
    {
LABEL_82:
      if ( (v98 & 0x200) == 0 )
        goto LABEL_83;
      goto LABEL_101;
    }
LABEL_100:
    emul((__int16 *)&v126, (__int16 *)qword_1000A15A0, (__int64)&v126);
    if ( (v98 & 0x200) == 0 )
    {
LABEL_83:
      if ( (v98 & 0x400) == 0 )
        goto LABEL_84;
      goto LABEL_102;
    }
LABEL_101:
    emul((__int16 *)&v126, (__int16 *)qword_1000A1590, (__int64)&v126);
    if ( (v98 & 0x400) == 0 )
    {
LABEL_84:
      if ( (v98 & 0x800) == 0 )
        goto LABEL_85;
      goto LABEL_103;
    }
LABEL_102:
    emul((__int16 *)&v126, (__int16 *)qword_1000A1580, (__int64)&v126);
    if ( (v98 & 0x800) == 0 )
    {
LABEL_85:
      if ( (v98 & 0x1000) == 0 )
      {
LABEL_87:
        v99 = HIWORD(v126) & 0x7FFF;
        *(_WORD *)v128 = (unsigned int)SHIWORD(v126) >> 15;
        *(_DWORD *)&v128[2] = v99;
        *(_QWORD *)&v128[6] = _mm_shufflelo_epi16(_mm_loadl_epi64((const __m128i *)((char *)&v126 + 6)), 27).u64[0];
        *(_DWORD *)&v128[14] = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(*(unsigned int *)((char *)&v126 + 2)), 225));
        *(_WORD *)&v128[18] = v126;
        v129 = 0;
        if ( v65 < 0 )
        {
          v100 = sub_100075FE0(v128, v130[0].i32);
          v97 = v120 - v99 + 0x3FFF;
        }
        else
        {
          v100 = sub_100075B30((__int64)v128, v130[0].i32);
          v97 = v99 + v120 - 16382;
        }
        v101 = v100 != 0;
        LODWORD(v5) = v110;
        goto LABEL_107;
      }
LABEL_86:
      emul((__int16 *)&v126, (__int16 *)qword_1000A1560, (__int64)&v126);
      goto LABEL_87;
    }
LABEL_103:
    emul((__int16 *)&v126, (__int16 *)qword_1000A1570, (__int64)&v126);
    if ( (v98 & 0x1000) == 0 )
      goto LABEL_87;
    goto LABEL_86;
  }
  v116 = 0;
  v7 = 0;
  v8 = 0;
  v124 = 0;
  v9 = 0;
  v10 = 0;
  v115 = 0;
  while ( 1 )
  {
    if ( (v6 & 0x80u) == 0 && (_DefaultRuneLocale.__runetype[v6] & 0x400) != 0 )
    {
      v9 += v9 == 0;
      v13 = v6 == 48;
      v14 = v6 - 48;
      if ( !v13 || v8 != 0 || v10 != 0 )
      {
        if ( v130[0].i16[2] )
        {
          v15 = v14 != 0;
          v16 = v116;
          LOBYTE(v16) = v15 | v116;
          v116 = v16;
        }
        else
        {
          v124 -= (v10 == 0) - 1;
          LOWORD(v20) = v130[1].i16[2];
          HIWORD(v20) = v130[1].i16[1];
          v19 = v20 >> 15;
          v118 = v8;
          LOWORD(v20) = v130[1].i16[1];
          HIWORD(v20) = v130[1].i16[0];
          v21 = v20 >> 15;
          LOWORD(v20) = v130[1].i16[0];
          HIWORD(v20) = v130[0].i16[7];
          v22 = v20 >> 15;
          LOWORD(v20) = v130[0].i16[7];
          HIWORD(v20) = v130[0].i16[6];
          v23 = v20 >> 15;
          LOWORD(v20) = v130[0].i16[6];
          HIWORD(v20) = v130[0].i16[5];
          v24 = v20 >> 15;
          LOWORD(v20) = v130[0].i16[5];
          HIWORD(v20) = v130[0].i16[4];
          v25 = v20 >> 15;
          LOWORD(v20) = v130[0].i16[4];
          HIWORD(v20) = v130[0].i16[3];
          v111 = v20 >> 15;
          v109 = v5;
          LOWORD(v20) = v19;
          HIWORD(v20) = v21;
          v26 = v20 >> 15;
          v107 = v130[0].u16[3] >> 15;
          HIWORD(v20) = (unsigned __int16)v130[0].i16[3] >> 15;
          LOWORD(v20) = v111;
          v122 = v20 >> 15;
          v112 = v25;
          HIWORD(v20) = v111;
          LOWORD(v20) = v25;
          v27 = v20 >> 15;
          v113 = v24;
          HIWORD(v20) = v25;
          LOWORD(v20) = v24;
          v28 = v20 >> 15;
          v114 = v23;
          HIWORD(v20) = v24;
          LOWORD(v20) = v23;
          v29 = v20 >> 15;
          HIWORD(v20) = v23;
          LOWORD(v20) = v22;
          v30 = v20 >> 15;
          HIWORD(v20) = v22;
          LOWORD(v20) = v21;
          v31 = v20 >> 15;
          LOWORD(v20) = 2 * v19;
          HIWORD(v20) = v26;
          v32 = v20 >> 15;
          LOWORD(v20) = v26;
          HIWORD(v20) = v31;
          v33 = v20 >> 15;
          LOWORD(v20) = v31;
          HIWORD(v20) = v30;
          v34 = v20 >> 15;
          LOWORD(v20) = v30;
          HIWORD(v20) = v29;
          v35 = v20 >> 15;
          LOWORD(v20) = v29;
          HIWORD(v20) = v28;
          v36 = v20 >> 15;
          LOWORD(v20) = v28;
          HIWORD(v20) = v27;
          v37 = v20 >> 15;
          HIWORD(v20) = v122;
          LOWORD(v20) = v27;
          v108 = 5 * v19;
          v38 = v32 + ((unsigned __int16)(5 * v19) < (unsigned __int16)(4 * v19)) + v21;
          v39 = v33;
          v5 = v109;
          v40 = HIWORD(v38) + v39 + v22;
          v41 = HIWORD(v40) + v34 + v114;
          v42 = HIWORD(v41) + v35 + v113;
          v43 = ((unsigned int)(HIWORD(v42) + v36 + v112) >> 16) + v37 + v111;
          v130[1].i16[2] *= 2;
          v130[1].i16[1] = v14 + v108;
          v44 = (((unsigned __int16)v14 + (unsigned int)v108) >> 16) + (unsigned __int16)v38;
          v45 = (unsigned __int16)v40;
          v8 = v118;
          v130[1].i16[0] = v44;
          v46 = HIWORD(v44) + v45;
          v130[0].i16[7] = v46;
          v47 = HIWORD(v46) + (unsigned __int16)v41;
          v130[0].i16[6] = v47;
          v48 = HIWORD(v47) + (unsigned __int16)v42;
          v130[0].i16[5] = HIWORD(v47) + v42;
          v130[0].i16[4] = HIWORD(v48) + HIWORD(v42) + v36 + v112;
          v49 = (unsigned int)(HIWORD(v48) + (unsigned __int16)(HIWORD(v42) + v36 + v112)) >> 16;
          v130[0].i16[3] = v49 + v43;
          v130[0].i16[2] = HIWORD(v43) + v107 + (v20 >> 15) + ((v49 + (unsigned __int16)v43) >> 16);
        }
        ++v8;
      }
      else
      {
        v10 = 0;
        v8 = 0;
      }
      goto LABEL_9;
    }
    if ( v6 == 122 )
    {
      v13 = v7 == 0;
      v7 = 1;
      if ( v13 )
      {
        v52 = 3;
        v53 = a1;
        goto LABEL_116;
      }
      goto LABEL_9;
    }
    if ( v6 != 46 )
      break;
    if ( v10 )
      goto LABEL_89;
    v117 = v8;
    v11 = 46;
    v12 = v5;
    do
    {
      if ( (_DefaultRuneLocale.__runetype[v11] & 0x400) == 0 )
        break;
      v11 = *++v12;
    }
    while ( (v11 & 0x80u) == 0 );
    if ( __tolower(v11) == 101 )
    {
      if ( !v9 && v12 == v5 )
        goto LABEL_89;
    }
    else
    {
      *v12 = 0;
    }
    if ( v12 > v127 && *(v12 - 1) == 48 )
    {
      v18 = v12 - 1;
      do
      {
        *v18 = 122;
        v7 = 1;
        if ( v18 <= v127 )
          break;
        v13 = *--v18 == 48;
      }
      while ( v13 );
    }
    v9 += v9 == 0;
    v10 = 1;
    v8 = v117;
LABEL_9:
    v6 = *++v5;
    if ( !v6 )
      goto LABEL_54;
  }
  if ( v6 == 45 || v6 == 43 )
  {
    if ( v9 )
      goto LABEL_54;
    v17 = v115;
    if ( v6 == 45 )
      v17 = 0xFFFF;
    v115 = v17;
    v9 = -1;
    goto LABEL_9;
  }
  if ( __tolower(v6) != 101 )
  {
    if ( v9 )
    {
      v53 = a1;
      if ( v9 >= 0 || v8 != 0 )
      {
LABEL_54:
        v51 = 0;
        v50 = v124;
        goto LABEL_55;
      }
      goto LABEL_90;
    }
LABEL_89:
    v53 = a1;
LABEL_90:
    v52 = 3;
    goto LABEL_116;
  }
  if ( !v9 )
    goto LABEL_89;
  v54 = v5 + 1;
  v55 = v5[1];
  if ( ((v55 - 43) & 0xFD) == 0 )
    v54 = v5 + 2;
  v56 = (char)v5[(((v55 - 43) & 0xFD) == 0) + 1];
  v53 = a1;
  v52 = 3;
  if ( v56 >= 0 && (_DefaultRuneLocale.__runetype[v56] & 0x400) != 0 )
  {
    v102 = v54 + 1;
    v103 = 0;
    while ( 1 )
    {
      LODWORD(v5) = (_DWORD)v102;
      v104 = (unsigned __int8)v56 + 10 * v103 - 48;
      if ( (v104 & 0x8000u) != 0 )
        break;
      v103 = v104;
      v56 = *v102;
      if ( v56 >= 0 )
      {
        ++v102;
        if ( (_DefaultRuneLocale.__runetype[v56] & 0x400) != 0 )
          continue;
      }
      if ( v55 == 45 )
      {
        v50 = v124;
        if ( !v103 )
          break;
        v51 = -v103;
      }
      else
      {
        v50 = v124;
        v51 = v103;
      }
      goto LABEL_55;
    }
  }
  else
  {
    LODWORD(v5) = (_DWORD)v54;
  }
LABEL_116:
  *v53 += (int)((_DWORD)v5 - ((unsigned int)&savedregs - 208));
  return v52;
}
// 1000A1530: using guessed type __int128 xmmword_1000A1530;
// 1000A1550: using guessed type __int128 xmmword_1000A1550;
// 1000A1560: using guessed type __int64 qword_1000A1560[2];
// 1000A1570: using guessed type __int64 qword_1000A1570[2];
// 1000A1580: using guessed type __int64 qword_1000A1580[2];
// 1000A1590: using guessed type __int64 qword_1000A1590[2];
// 1000A15A0: using guessed type __int64 qword_1000A15A0[2];
// 1000A15B0: using guessed type __int64 qword_1000A15B0[2];
// 1000A15C0: using guessed type __int64 qword_1000A15C0[2];
// 1000A15D0: using guessed type __int64 qword_1000A15D0[2];
// 1000A15E0: using guessed type __int64 qword_1000A15E0;
// 1000A15F0: using guessed type __int64 qword_1000A15F0;
// 1000A1600: using guessed type __int64 qword_1000A1600;
// 1000A1610: using guessed type __int64 qword_1000A1610;
// 1000A1620: using guessed type __int64 qword_1000A1620;
