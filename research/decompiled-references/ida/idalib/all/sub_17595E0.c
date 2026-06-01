__int64 __fastcall sub_17595E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  __m128i v23; // xmm0
  void *v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // rcx
  void *v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  char v32; // al
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rax
  void *v36; // rdi
  const void *v37; // rsi
  size_t v38; // rdx
  __m128i v39; // xmm1
  void *v40; // rax
  unsigned int v41; // r12d
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  _QWORD *v44; // rax
  void *v45; // rdi
  unsigned __int64 v46; // r13
  unsigned int v47; // r14d
  size_t v48; // rdx
  size_t v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // r12d
  _QWORD *v55; // rax
  __int64 *v56; // r12
  __int64 v57; // rax
  unsigned __int64 v58; // rsi
  __int64 *v59; // r13
  __int64 v60; // rax
  __int64 *v61; // rdi
  char v62; // al
  __int64 v63; // r12
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r12
  char v67; // al
  __int64 v68; // r13
  unsigned __int64 v69; // r8
  __int64 v70; // r12
  __int64 v71; // r13
  unsigned __int64 v72; // r15
  void *v73; // rdi
  unsigned int v74; // r14d
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdi
  __int64 v82; // rax
  unsigned int v83; // r12d
  void *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  void *v90; // rax
  unsigned int v91; // r12d
  size_t v93; // rax
  void *v94; // rax
  int v95; // edx
  const void *v96; // rsi
  void *v97; // rax
  int v98; // edx
  const void *v99; // rsi
  size_t v100; // rdx
  size_t v101; // rdx
  __int64 v102; // rdi
  size_t v103; // rdx
  size_t v104; // rdx
  size_t v105; // rdx
  unsigned __int64 v106; // [rsp+8h] [rbp-40h]
  unsigned __int64 v107; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &off_2BC63E0;
  v8 = *(_BYTE *)(a2 + 8) & 7 | *(_BYTE *)(a1 + 8) & 0xF8;
  *(_BYTE *)(a1 + 8) = v8;
  v9 = *(_BYTE *)(a2 + 8) & 8 | v8 & 0xF7;
  *(_BYTE *)(a1 + 8) = v9;
  v10 = *(_BYTE *)(a2 + 8) & 0x10 | v9 & 0xEF;
  *(_BYTE *)(a1 + 8) = v10;
  v11 = *(_BYTE *)(a2 + 8) & 0x20 | v10 & 0xDF;
  *(_BYTE *)(a1 + 8) = v11;
  v12 = *(_BYTE *)(a2 + 8) & 0x40 | v11 & 0xBF;
  *(_BYTE *)(a1 + 8) = v12;
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8) & 0x80 | v12 & 0x7F;
  v13 = *(_BYTE *)(a2 + 9) & 1 | *(_BYTE *)(a1 + 9) & 0xFE;
  *(_BYTE *)(a1 + 9) = v13;
  v14 = *(_BYTE *)(a2 + 9) & 2 | v13 & 0xFD;
  *(_BYTE *)(a1 + 9) = v14;
  v15 = *(_BYTE *)(a2 + 9) & 4 | v14 & 0xFB;
  *(_BYTE *)(a1 + 9) = v15;
  v16 = *(_BYTE *)(a2 + 9) & 8 | v15 & 0xF7;
  *(_BYTE *)(a1 + 9) = v16;
  v17 = *(_BYTE *)(a2 + 9) & 0x10 | v16 & 0xEF;
  *(_BYTE *)(a1 + 9) = v17;
  v18 = *(_BYTE *)(a2 + 9) & 0x20 | v17 & 0xDF;
  *(_BYTE *)(a1 + 9) = v18;
  v19 = *(_BYTE *)(a2 + 9) & 0x40 | v18 & 0xBF;
  *(_BYTE *)(a1 + 9) = v19;
  *(_BYTE *)(a1 + 9) = *(_BYTE *)(a2 + 9) & 0x80 | v19 & 0x7F;
  v20 = *(_BYTE *)(a2 + 10) & 1 | *(_BYTE *)(a1 + 10) & 0xFE;
  *(_BYTE *)(a1 + 10) = v20;
  v21 = *(_BYTE *)(a2 + 10) & 2 | v20 & 0xFD;
  *(_BYTE *)(a1 + 10) = v21;
  v22 = *(_BYTE *)(a2 + 10) & 0xC | v21 & 0xF3;
  *(_BYTE *)(a1 + 10) = v22;
  *(_BYTE *)(a1 + 10) = *(_BYTE *)(a2 + 10) & 0x10 | v22 & 0xEF;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  v24 = (void *)(a1 + 72);
  *(_QWORD *)(a1 + 64) = 0x800000000LL;
  *(__m128i *)(a1 + 40) = v23;
  v25 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 56) = a1 + 72;
  if ( v25 )
  {
    v102 = a1 + 56;
    if ( v102 != a2 + 56 )
    {
      v103 = 8LL * v25;
      if ( v25 <= 8uLL
        || (sub_2237220(v102, v24, v25, 8), v24 = *(void **)(a1 + 56), (v103 = 8LL * *(unsigned int *)(a2 + 64)) != 0) )
      {
        memcpy(v24, *(const void **)(a2 + 56), v103);
      }
      *(_DWORD *)(a1 + 64) = v25;
    }
  }
  v26 = 0x400000000LL;
  v27 = (void *)(a1 + 152);
  *(_QWORD *)(a1 + 144) = 0x400000000LL;
  v28 = *(_DWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 136) = a1 + 152;
  if ( v28 && a1 + 136 != a2 + 136 )
  {
    v101 = 8LL * v28;
    if ( v28 <= 4uLL
      || (sub_2237220(a1 + 136, a1 + 152, v28, 8),
          v27 = *(void **)(a1 + 136),
          (v101 = 8LL * *(unsigned int *)(a2 + 144)) != 0) )
    {
      memcpy(v27, *(const void **)(a2 + 136), v101);
    }
    *(_DWORD *)(a1 + 144) = v28;
  }
  v29 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a1 + 192) = 1;
  v30 = -4096;
  *(_QWORD *)(a1 + 184) = v29;
  v31 = (_QWORD *)(a1 + 200);
  do
  {
    *v31 = -4096;
    v31 += 2;
  }
  while ( v31 != (_QWORD *)(a1 + 264) );
  if ( (*(_BYTE *)(a1 + 192) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 200), 16LL * *(unsigned int *)(a1 + 208), 8);
  v32 = *(_BYTE *)(a1 + 192) | 1;
  *(_BYTE *)(a1 + 192) = v32;
  if ( (*(_BYTE *)(a2 + 192) & 1) == 0 && *(_DWORD *)(a2 + 208) > 4u )
  {
    *(_BYTE *)(a1 + 192) = v32 & 0xFE;
    if ( (*(_BYTE *)(a2 + 192) & 1) != 0 )
    {
      v34 = 64;
      LODWORD(v33) = 4;
    }
    else
    {
      v33 = *(unsigned int *)(a2 + 208);
      v34 = 16 * v33;
    }
    v35 = sub_22300B0(v34, 8, v30, v26, a5, a6);
    *(_DWORD *)(a1 + 208) = v33;
    *(_QWORD *)(a1 + 200) = v35;
  }
  v36 = (void *)(a1 + 200);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192) & 0xFFFFFFFE | *(_DWORD *)(a1 + 192) & 1;
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
  if ( (*(_BYTE *)(a1 + 192) & 1) == 0 )
    v36 = *(void **)(a1 + 200);
  v37 = (const void *)(a2 + 200);
  if ( (*(_BYTE *)(a2 + 192) & 1) == 0 )
    v37 = *(const void **)(a2 + 200);
  v38 = 64;
  if ( (*(_BYTE *)(a1 + 192) & 1) == 0 )
    v38 = 16LL * *(unsigned int *)(a1 + 208);
  memcpy(v36, v37, v38);
  *(_QWORD *)(a1 + 264) = a1 + 280;
  *(_QWORD *)(a1 + 272) = 0x400000000LL;
  if ( *(_DWORD *)(a2 + 272) )
    sub_1747B90((__int64 *)(a1 + 264), (__int64 *)(a2 + 264));
  v39 = _mm_loadu_si128((const __m128i *)(a2 + 344));
  v40 = (void *)(a1 + 376);
  *(_QWORD *)(a1 + 368) = 0x400000000LL;
  *(__m128i *)(a1 + 344) = v39;
  v41 = *(_DWORD *)(a2 + 368);
  *(_QWORD *)(a1 + 360) = a1 + 376;
  if ( v41 && a1 + 360 != a2 + 360 )
  {
    v100 = 8LL * v41;
    if ( v41 <= 4uLL
      || (sub_2237220(a1 + 360, a1 + 376, v41, 8),
          v40 = *(void **)(a1 + 360),
          (v100 = 8LL * *(unsigned int *)(a2 + 368)) != 0) )
    {
      memcpy(v40, *(const void **)(a2 + 360), v100);
    }
    *(_DWORD *)(a1 + 368) = v41;
  }
  sub_2236890(a1 + 408, a1 + 432, a2 + 408);
  v42 = *(_QWORD *)(a2 + 440);
  *(_QWORD *)(a1 + 440) = v42;
  if ( v42 )
  {
    if ( (v42 & 4) != 0 )
    {
      v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v42 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v44 = (_QWORD *)operator new(0x30u);
        v45 = v44 + 2;
        v46 = (unsigned __int64)v44;
        *v44 = v44 + 2;
        v44[1] = 0x400000000LL;
        v47 = *(_DWORD *)(v43 + 8);
        if ( v44 != (_QWORD *)v43 && v47 )
        {
          v48 = 8LL * v47;
          if ( v47 <= 4uLL
            || (sub_2237220(v44, v45, v47, 8), v45 = *(void **)v46, (v48 = 8LL * *(unsigned int *)(v43 + 8)) != 0) )
          {
            memcpy(v45, *(const void **)v43, v48);
          }
          *(_DWORD *)(v46 + 8) = v47;
        }
        *(_QWORD *)(a1 + 440) = v46 | 4;
      }
    }
  }
  *(_QWORD *)(a1 + 448) = a1 + 464;
  *(_QWORD *)(a1 + 456) = 0x400000000LL;
  if ( *(_DWORD *)(a2 + 456) )
    sub_1757DF0(a1 + 448, (char ***)(a2 + 448));
  sub_2236890(a1 + 624, a1 + 648, a2 + 624);
  v52 = (void *)(a1 + 728);
  v53 = 0x400000000LL;
  *(_QWORD *)(a1 + 720) = 0x400000000LL;
  v54 = *(_DWORD *)(a2 + 720);
  *(_QWORD *)(a1 + 712) = a1 + 728;
  if ( v54 )
  {
    v49 = a2 + 712;
    if ( a1 + 712 != a2 + 712 )
    {
      v49 = 8LL * v54;
      if ( v54 <= 4uLL
        || (sub_2237220(a1 + 712, a1 + 728, v54, 8),
            v52 = *(void **)(a1 + 712),
            (v49 = 8LL * *(unsigned int *)(a2 + 720)) != 0) )
      {
        memcpy(v52, *(const void **)(a2 + 712), v49);
      }
      *(_DWORD *)(a1 + 720) = v54;
    }
  }
  v55 = (_QWORD *)(a1 + 768);
  *(_QWORD *)(a1 + 760) = 1;
  do
  {
    *v55 = 0;
    v55 += 8;
    *(v55 - 7) = 0;
  }
  while ( (_QWORD *)(a1 + 1280) != v55 );
  if ( (*(_BYTE *)(a1 + 760) & 1) == 0 )
  {
    v56 = *(__int64 **)(a1 + 768);
    v57 = *(unsigned int *)(a1 + 776);
    v58 = v57 << 6;
    if ( (_DWORD)v57 )
    {
      v59 = (__int64 *)((char *)v56 + v58);
      if ( (__int64 *)((char *)v56 + v58) != v56 )
      {
        v60 = *v56;
        if ( !*v56 )
          goto LABEL_44;
        goto LABEL_39;
      }
    }
    goto LABEL_86;
  }
  v56 = (__int64 *)(a1 + 768);
  v59 = (__int64 *)(a1 + 1280);
  do
  {
    while ( 1 )
    {
      v60 = *v56;
      if ( *v56 )
      {
LABEL_39:
        if ( v60 != 4 )
          break;
      }
LABEL_44:
      if ( v56[1] )
        break;
      v56 += 8;
      if ( v59 == v56 )
        goto LABEL_46;
    }
    v61 = (__int64 *)v56[2];
    if ( v61 != v56 + 4 )
      free(v61);
    v56 += 8;
  }
  while ( v59 != v56 );
LABEL_46:
  if ( (*(_BYTE *)(a1 + 760) & 1) == 0 )
  {
    v56 = *(__int64 **)(a1 + 768);
    v58 = (unsigned __int64)*(unsigned int *)(a1 + 776) << 6;
LABEL_86:
    operator delete(v56, v58, 8);
  }
  v62 = *(_BYTE *)(a1 + 760) | 1;
  *(_BYTE *)(a1 + 760) = v62;
  if ( (*(_BYTE *)(a2 + 760) & 1) == 0 && *(_DWORD *)(a2 + 776) > 8u )
  {
    *(_BYTE *)(a1 + 760) = v62 & 0xFE;
    if ( (*(_BYTE *)(a2 + 760) & 1) != 0 )
    {
      v64 = 512;
      LODWORD(v63) = 8;
    }
    else
    {
      v63 = *(unsigned int *)(a2 + 776);
      v64 = v63 << 6;
    }
    v65 = sub_22300B0(v64, 8, v49, v53, v50, v51);
    *(_DWORD *)(a1 + 776) = v63;
    *(_QWORD *)(a1 + 768) = v65;
  }
  v66 = a1 + 768;
  *(_DWORD *)(a1 + 760) = *(_DWORD *)(a2 + 760) & 0xFFFFFFFE | *(_DWORD *)(a1 + 760) & 1;
  *(_DWORD *)(a1 + 764) = *(_DWORD *)(a2 + 764);
  v67 = *(_BYTE *)(a1 + 760) & 1;
  if ( !v67 )
    v66 = *(_QWORD *)(a1 + 768);
  v68 = a2 + 768;
  if ( (*(_BYTE *)(a2 + 760) & 1) != 0 )
  {
    if ( !v67 )
      goto LABEL_56;
LABEL_84:
    v69 = 8;
    goto LABEL_57;
  }
  v68 = *(_QWORD *)(a2 + 768);
  if ( v67 )
    goto LABEL_84;
LABEL_56:
  v69 = *(unsigned int *)(a1 + 776);
  if ( *(_DWORD *)(a1 + 776) )
  {
LABEL_57:
    v70 = v66 + 16;
    v71 = v68 + 16;
    v72 = 0;
    do
    {
      v75 = *(_QWORD *)(v71 - 16);
      *(__m128i *)(v70 - 16) = _mm_loadu_si128((const __m128i *)(v71 - 16));
      if ( v75 && v75 != 4 || *(_QWORD *)(v70 - 8) )
      {
        *(_DWORD *)(v70 + 8) = 0;
        v73 = (void *)(v70 + 16);
        *(_DWORD *)(v70 + 12) = 4;
        v74 = *(_DWORD *)(v71 + 8);
        *(_QWORD *)v70 = v70 + 16;
        if ( v74 )
        {
          if ( v71 != v70 )
          {
            v93 = 8LL * v74;
            if ( v74 <= 4uLL
              || (v107 = v69,
                  sub_2237220(v70, v70 + 16, v74, 8),
                  v73 = *(void **)v70,
                  v69 = v107,
                  (v93 = 8LL * *(unsigned int *)(v71 + 8)) != 0) )
            {
              v106 = v69;
              memcpy(v73, *(const void **)v71, v93);
              v69 = v106;
            }
            *(_DWORD *)(v70 + 8) = v74;
          }
        }
      }
      ++v72;
      v70 += 64;
      v71 += 64;
    }
    while ( v69 > v72 );
  }
  *(_QWORD *)a1 = &off_2BC63C0;
  v76 = *(_DWORD *)(a2 + 1280);
  *(_QWORD *)(a1 + 1288) = 0;
  *(_DWORD *)(a1 + 1280) = v76;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 0;
  operator delete(0, 0, 8);
  v81 = *(unsigned int *)(a2 + 1304);
  *(_DWORD *)(a1 + 1304) = v81;
  if ( (_DWORD)v81 )
  {
    v97 = (void *)sub_22300B0(16 * v81, 8, v77, v78, v79, v80);
    v98 = *(_DWORD *)(a2 + 1296);
    *(_QWORD *)(a1 + 1288) = v97;
    v99 = *(const void **)(a2 + 1288);
    *(_DWORD *)(a1 + 1296) = v98;
    *(_DWORD *)(a1 + 1300) = *(_DWORD *)(a2 + 1300);
    memcpy(v97, v99, 16LL * *(unsigned int *)(a1 + 1304));
  }
  else
  {
    *(_QWORD *)(a1 + 1288) = 0;
    *(_QWORD *)(a1 + 1296) = 0;
  }
  *(_DWORD *)(a1 + 1312) = *(_DWORD *)(a2 + 1312);
  *(_QWORD *)(a1 + 1320) = a1 + 1336;
  *(_QWORD *)(a1 + 1328) = 0x400000000LL;
  if ( *(_DWORD *)(a2 + 1328) )
    sub_1747C80((__int64 *)(a1 + 1320), (__int64 *)(a2 + 1320));
  *(_BYTE *)(a1 + 1464) = *(_BYTE *)(a2 + 1464);
  *(_BYTE *)(a1 + 1465) = *(_BYTE *)(a2 + 1465);
  *(_QWORD *)(a1 + 1472) = *(_QWORD *)(a2 + 1472);
  *(_QWORD *)(a1 + 1480) = a1 + 1496;
  *(_QWORD *)(a1 + 1488) = 0x400000000LL;
  if ( *(_DWORD *)(a2 + 1488) )
    sub_1747DA0((void **)(a1 + 1480), (char **)(a2 + 1480));
  *(_DWORD *)(a1 + 1528) = *(_DWORD *)(a2 + 1528);
  *(_DWORD *)(a1 + 1532) = *(_DWORD *)(a2 + 1532);
  *(_QWORD *)(a1 + 1536) = a1 + 1552;
  *(_QWORD *)(a1 + 1544) = 0x400000000LL;
  if ( *(_DWORD *)(a2 + 1544) )
    sub_1747DA0((void **)(a1 + 1536), (char **)(a2 + 1536));
  *(_QWORD *)a1 = &off_2BC6440;
  *(_QWORD *)(a1 + 1584) = *(_QWORD *)(a2 + 1584);
  *(_QWORD *)(a1 + 1592) = *(_QWORD *)(a2 + 1592);
  *(_BYTE *)(a1 + 1600) = *(_BYTE *)(a2 + 1600);
  *(_QWORD *)(a1 + 1608) = *(_QWORD *)(a2 + 1608);
  *(_QWORD *)(a1 + 1616) = *(_QWORD *)(a2 + 1616);
  *(_DWORD *)(a1 + 1624) = *(_DWORD *)(a2 + 1624);
  *(_DWORD *)(a1 + 1628) = *(_DWORD *)(a2 + 1628);
  *(_BYTE *)(a1 + 1632) = *(_BYTE *)(a2 + 1632);
  *(_BYTE *)(a1 + 1633) = *(_BYTE *)(a2 + 1633);
  *(_WORD *)(a1 + 1634) = *(_WORD *)(a2 + 1634);
  *(_QWORD *)(a1 + 1636) = *(_QWORD *)(a2 + 1636);
  *(_QWORD *)(a1 + 1648) = *(_QWORD *)(a2 + 1648);
  v82 = *(_QWORD *)(a2 + 1656);
  *(_QWORD *)(a1 + 1672) = 0x400000000LL;
  *(_QWORD *)(a1 + 1656) = v82;
  v83 = *(_DWORD *)(a2 + 1672);
  v84 = (void *)(a1 + 1680);
  *(_QWORD *)(a1 + 1664) = a1 + 1680;
  if ( v83 && a1 + 1664 != a2 + 1664 )
  {
    v105 = 8LL * v83;
    if ( v83 <= 4uLL
      || (sub_2237220(a1 + 1664, a1 + 1680, v83, 8),
          v84 = *(void **)(a1 + 1664),
          (v105 = 8LL * *(unsigned int *)(a2 + 1672)) != 0) )
    {
      memcpy(v84, *(const void **)(a2 + 1664), v105);
    }
    *(_DWORD *)(a1 + 1672) = v83;
  }
  sub_2236890(a1 + 1712, a1 + 1736, a2 + 1712);
  *(_QWORD *)(a1 + 1800) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1816) = 0;
  operator delete(0, 0, 4);
  v89 = *(unsigned int *)(a2 + 1816);
  *(_DWORD *)(a1 + 1816) = v89;
  if ( (_DWORD)v89 )
  {
    v94 = (void *)sub_22300B0(12 * v89, 4, v85, v86, v87, v88);
    v95 = *(_DWORD *)(a2 + 1808);
    *(_QWORD *)(a1 + 1800) = v94;
    v96 = *(const void **)(a2 + 1800);
    *(_DWORD *)(a1 + 1808) = v95;
    *(_DWORD *)(a1 + 1812) = *(_DWORD *)(a2 + 1812);
    memcpy(v94, v96, 12LL * *(unsigned int *)(a1 + 1816));
  }
  else
  {
    *(_QWORD *)(a1 + 1800) = 0;
    *(_QWORD *)(a1 + 1808) = 0;
  }
  v90 = (void *)(a1 + 1840);
  *(_QWORD *)(a1 + 1832) = 0x400000000LL;
  v91 = *(_DWORD *)(a2 + 1832);
  *(_QWORD *)(a1 + 1824) = a1 + 1840;
  if ( v91 && a1 + 1824 != a2 + 1824 )
  {
    v104 = 16LL * v91;
    if ( v91 <= 4uLL
      || (sub_2237220(a1 + 1824, a1 + 1840, v91, 16),
          v90 = *(void **)(a1 + 1824),
          (v104 = 16LL * *(unsigned int *)(a2 + 1832)) != 0) )
    {
      memcpy(v90, *(const void **)(a2 + 1824), v104);
    }
    *(_DWORD *)(a1 + 1832) = v91;
  }
  *(_DWORD *)(a1 + 1904) = *(_DWORD *)(a2 + 1904);
  return sub_2236890(a1 + 1912, a1 + 1936, a2 + 1912);
}
