_QWORD *__fastcall sub_A3D440(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // r11d
  unsigned int v4; // r12d
  unsigned int v5; // eax
  char *v6; // rbp
  char *j; // rax
  char *v8; // rbp
  int v9; // eax
  __int16 v10; // si
  __int64 k; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // si
  int v15; // r15d
  int v16; // ecx
  __int16 v17; // dx
  __int16 v18; // cx
  int v19; // r14d
  int v20; // r11d
  int v21; // r10d
  int v22; // r9d
  int v23; // r8d
  int v24; // edi
  int v25; // ecx
  __int16 v26; // r14
  void *v27; // r14
  __m128i *v28; // r15
  __int64 v29; // rdx
  unsigned int *v30; // r14
  unsigned __int64 v31; // rcx
  const __m128i *m; // r15
  const __m128i *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r14
  char v36; // al
  __int64 v37; // rsi
  char v38; // dl
  char v39; // al
  char v40; // al
  int v41; // eax
  __int64 v42; // rax
  int v43; // ebp
  unsigned __int64 v44; // r12
  unsigned int v45; // r12d
  __int64 v46; // rax
  char *v47; // r13
  __int64 v48; // rsi
  char *v49; // rdx
  unsigned int v50; // ecx
  __int64 v51; // r15
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rbp
  char *v54; // r14
  char *v55; // r12
  __int128 *v56; // r15
  __int64 v57; // r12
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // rbp
  char *v60; // r13
  char *v61; // r14
  char *v63; // rax
  void *v64; // rdi
  char *v65; // rsi
  char *v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  char *v69; // rax
  _DWORD *v70; // rax
  _DWORD *v71; // r13
  _DWORD *v72; // rbx
  int v73; // ebp
  unsigned int v74; // r12d
  unsigned int v75; // r9d
  unsigned __int64 v76; // r15
  int v77; // r10d
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  char *v80; // rax
  _DWORD *i; // rax
  char *v82; // r15
  void *v83; // rdi
  char *v84; // rsi
  char *v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  char *v88; // rax
  int v89; // [rsp+0h] [rbp-11A8h]
  char *v90; // [rsp+0h] [rbp-11A8h]
  __int128 *v91; // [rsp+0h] [rbp-11A8h]
  int v92; // [rsp+0h] [rbp-11A8h]
  __int64 v93; // [rsp+8h] [rbp-11A0h]
  unsigned __int64 v94; // [rsp+8h] [rbp-11A0h]
  __int64 v95; // [rsp+8h] [rbp-11A0h]
  __int64 v96; // [rsp+8h] [rbp-11A0h]
  __int16 v99; // [rsp+4Eh] [rbp-115Ah] BYREF
  __int64 (__fastcall ***v100)(); // [rsp+50h] [rbp-1158h] BYREF
  int v101; // [rsp+58h] [rbp-1150h]
  __int64 (__fastcall ***v102)(); // [rsp+60h] [rbp-1148h] BYREF
  int v103; // [rsp+68h] [rbp-1140h]
  void *v104; // [rsp+70h] [rbp-1138h] BYREF
  __int64 v105; // [rsp+78h] [rbp-1130h]
  _BYTE v106[16]; // [rsp+80h] [rbp-1128h] BYREF
  char v107; // [rsp+90h] [rbp-1118h]
  __int64 (__fastcall **v108)(); // [rsp+A0h] [rbp-1108h] BYREF
  int v109; // [rsp+A8h] [rbp-1100h]
  __int128 v110; // [rsp+B0h] [rbp-10F8h]
  __int64 v111; // [rsp+C0h] [rbp-10E8h]
  char v112; // [rsp+C8h] [rbp-10E0h]
  int v113; // [rsp+CCh] [rbp-10DCh]
  void **v114; // [rsp+D0h] [rbp-10D8h]
  __int64 v115; // [rsp+E0h] [rbp-10C8h] BYREF
  __m128 v116; // [rsp+E8h] [rbp-10C0h] BYREF
  char *v117; // [rsp+F8h] [rbp-10B0h]
  __int64 v118; // [rsp+100h] [rbp-10A8h]
  char v119; // [rsp+108h] [rbp-10A0h] BYREF
  __int128 *v120; // [rsp+128h] [rbp-1080h]
  __int64 v121; // [rsp+130h] [rbp-1078h]
  __int128 v122; // [rsp+138h] [rbp-1070h] BYREF
  void *ptr; // [rsp+148h] [rbp-1060h]
  void *v124; // [rsp+150h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+158h] [rbp-1050h]
  _BYTE v126[4160]; // [rsp+168h] [rbp-1040h] BYREF

  v124 = v126;
  v117 = &v119;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v118 = 0x400000000LL;
  v116 = 0;
  v120 = &v122;
  v121 = 0;
  v122 = 0;
  v115 = 64;
  v2 = sub_A1F5F0();
  v3 = *(_DWORD *)(a1 + 864);
  ptr = v2;
  if ( !v3 )
    goto LABEL_2;
  v70 = *(_DWORD **)(a1 + 856);
  v71 = &v70[102 * *(unsigned int *)(a1 + 872)];
  if ( v70 == v71 )
    goto LABEL_2;
  while ( 1 )
  {
    v72 = v70;
    if ( *v70 != -1 )
      break;
    if ( v70[1] != -1 )
      goto LABEL_125;
LABEL_146:
    v70 += 102;
    if ( v71 == v70 )
      goto LABEL_2;
  }
  if ( *v70 == -2 && v70[1] == -2 )
    goto LABEL_146;
LABEL_125:
  if ( v71 == v70 )
    goto LABEL_2;
LABEL_129:
  v73 = *v72;
  v74 = v72[1];
  v75 = 2 * v115;
  ++HIDWORD(v115);
  if ( 4 * HIDWORD(v115) >= (unsigned int)(3 * v115) )
  {
    v92 = 2 * v115;
    v96 = v75;
    v82 = (char *)sub_A1F380(v75);
    v83 = ptr;
    if ( (_DWORD)v115 )
    {
      v84 = (char *)ptr;
      v85 = (char *)ptr + 16 * (unsigned int)v115;
      do
      {
        v86 = *((_QWORD *)v84 + 1);
        if ( v86 )
        {
          do
          {
            v87 = *(_QWORD *)(v86 + 408);
            v88 = &v82[16 * ((v96 - 1) & *(_QWORD *)(v86 + 416))];
            *(_QWORD *)(v86 + 408) = *((_QWORD *)v88 + 1);
            *((_QWORD *)v88 + 1) = v86;
            v86 = v87;
            ++*((_DWORD *)v88 + 1);
          }
          while ( v87 );
        }
        v84 += 16;
      }
      while ( v85 != v84 );
    }
    free(v83);
    ptr = v82;
    LODWORD(v115) = v92;
  }
  v76 = sub_A270B0((__int64 *)&v116, 424, 3u);
  *(_DWORD *)v76 = v73;
  *(_DWORD *)(v76 + 4) = v74;
  *(_QWORD *)(v76 + 16) = 0x100000000LL;
  v77 = v72[4];
  *(_QWORD *)(v76 + 8) = v76 + 24;
  if ( v77 )
    sub_A2FD60(v76 + 8, (__int64 *)v72 + 1);
  *(_QWORD *)(v76 + 408) = 0;
  v108 = (__int64 (__fastcall **)())__PAIR64__(v74, v73);
  v78 = sub_A22530(v73, (int *)&v108 + 1);
  v79 = (unsigned int)v115;
  *(_QWORD *)(v76 + 416) = v78;
  v80 = (char *)ptr + 16 * (v78 & (v79 - 1));
  *(_QWORD *)(v76 + 408) = *((_QWORD *)v80 + 1);
  ++*((_DWORD *)v80 + 1);
  *((_QWORD *)v80 + 1) = v76;
  for ( i = v72 + 102; v71 != i; i += 102 )
  {
    v72 = i;
    if ( *i == -1 )
    {
      if ( i[1] != -1 )
        goto LABEL_128;
    }
    else if ( *i != -2 || i[1] != -2 )
    {
LABEL_128:
      if ( v71 != i )
        goto LABEL_129;
      break;
    }
  }
LABEL_2:
  v110 = 0;
  v4 = 1;
  v109 = 2;
  v108 = &off_2BEBEE0;
  v112 = 0;
  v114 = &v124;
  v113 = 1;
  v111 = 0;
  sub_A1F700(&v108);
  LODWORD(v104) = 0;
  sub_227BF10(&v108, &v104, 4);
  v100 = &v108;
  v101 = 1;
  if ( HIDWORD(v115) > 2 && (unsigned int)(4 * HIDWORD(v115)) > 2 )
  {
    _BitScanReverse(&v5, 4 * HIDWORD(v115) / 3u);
    v4 = 1 << (32 - (v5 ^ 0x1F));
  }
  if ( (_DWORD)v115 == v4 )
  {
    v6 = (char *)ptr;
  }
  else
  {
    v63 = (char *)sub_A1F380(v4);
    v64 = ptr;
    v6 = v63;
    if ( (_DWORD)v115 )
    {
      v65 = (char *)ptr;
      v66 = (char *)ptr + 16 * (unsigned int)v115;
      do
      {
        v67 = *((_QWORD *)v65 + 1);
        if ( v67 )
        {
          do
          {
            v68 = *(_QWORD *)(v67 + 408);
            v69 = &v6[16 * ((v4 - 1LL) & *(_QWORD *)(v67 + 416))];
            *(_QWORD *)(v67 + 408) = *((_QWORD *)v69 + 1);
            *((_QWORD *)v69 + 1) = v67;
            v67 = v68;
            ++*((_DWORD *)v69 + 1);
          }
          while ( v68 );
        }
        v65 += 16;
      }
      while ( v66 != v65 );
    }
    free(v64);
    LODWORD(v115) = v4;
    ptr = v6;
  }
  v89 = 0;
  for ( j = v6; ; j = (char *)ptr )
  {
    v8 = &j[16 * v89];
    if ( *((_QWORD *)v8 + 1) )
    {
      v9 = sub_227AEE0(&v108);
      v10 = *((_WORD *)v8 + 2);
      *(_DWORD *)v8 = v9 + v111 - v110;
      sub_A20860((__int64 *)&v100, v10);
      for ( k = *((_QWORD *)v8 + 1); k; k = *(_QWORD *)(k + 408) )
      {
        sub_A20830((__int64)v100, *(_QWORD *)(k + 416), v101);
        v12 = *(_QWORD *)(k + 8);
        v13 = 384LL * *(unsigned int *)(k + 16);
        v93 = v12 + v13;
        if ( v12 == v12 + v13 )
        {
          v26 = 2;
        }
        else
        {
          v14 = 2;
          do
          {
            LOWORD(v15) = 4;
            v16 = ((char)HIBYTE(*(_QWORD *)v12) >> 31) & 4;
            v17 = v16 + 5;
            v18 = v16 + 9;
            if ( (BYTE3(*(_QWORD *)(v12 + 8)) & 0x80u) != 0 )
              v17 = v18;
            if ( (HIBYTE(*(_QWORD *)(v12 + 8)) & 0x80u) != 0 )
              v17 += 4;
            if ( *(_BYTE *)(v12 + 208) )
              v15 = *(_DWORD *)(v12 + 184) + 4;
            LOWORD(v19) = 0;
            if ( *(_BYTE *)(v12 + 248) )
              v19 = *(_DWORD *)(v12 + 224);
            LOWORD(v20) = 0;
            if ( *(_BYTE *)(v12 + 288) )
              v20 = *(_DWORD *)(v12 + 264);
            LOWORD(v21) = 0;
            if ( *(_BYTE *)(v12 + 328) )
              v21 = *(_DWORD *)(v12 + 304);
            LOWORD(v22) = 0;
            if ( *(_BYTE *)(v12 + 368) )
              v22 = *(_DWORD *)(v12 + 344);
            LOWORD(v23) = 4;
            if ( *(_BYTE *)(v12 + 120) )
              v23 = *(_DWORD *)(v12 + 96) + 4;
            LOWORD(v24) = 0;
            if ( *(_BYTE *)(v12 + 160) )
              v24 = *(_DWORD *)(v12 + 136);
            v25 = *(_DWORD *)(v12 + 24) + *(_QWORD *)(v12 + 64);
            v12 += 384;
            v14 += v24 + v23 + v22 + v21 + v20 + v15 + v17 + v25 + 14 + v19;
          }
          while ( v93 != v12 );
          v26 = v14;
        }
        v104 = &v108;
        LODWORD(v105) = 1;
        LOWORD(v102) = 12;
        sub_227BF10(&v108, &v102, 2);
        sub_A20860((__int64 *)&v104, v26);
        v27 = (void *)((unsigned __int64)*(unsigned int *)(k + 4) << 33);
        LODWORD(v104) = *(_DWORD *)k;
        sub_227BF10(&v108, &v104, 4);
        v104 = v27;
        sub_227BF10(&v108, &v104, 8);
        v28 = *(__m128i **)(k + 8);
        v29 = *(unsigned int *)(k + 16);
        v30 = (unsigned int *)&v28[24 * v29];
        if ( v28 != (__m128i *)v30 )
        {
          v94 = 384 * v29;
          _BitScanReverse64(&v31, 0xAAAAAAAAAAAAAAABLL * ((384 * v29) >> 7));
          sub_A3D0E0(v28, &v28[24 * v29], 2LL * (int)(63 - (v31 ^ 0x3F)));
          if ( v94 <= 0x1800 )
          {
            sub_A2EE10((unsigned int *)v28, v30);
          }
          else
          {
            sub_A2EE10((unsigned int *)v28, (unsigned int *)&v28[384]);
            for ( m = v28 + 384; v30 != (unsigned int *)m; m += 24 )
            {
              v33 = m;
              sub_A2ED70(v33);
            }
          }
          LODWORD(v29) = *(_DWORD *)(k + 16);
        }
        LOWORD(v104) = v29;
        sub_227BF10(&v108, &v104, 2);
        v34 = *(unsigned int *)(k + 16);
        v35 = *(_QWORD *)(k + 8);
        if ( v35 != v35 + 384 * v34 )
        {
          v95 = v35 + 384 * v34;
          do
          {
            sub_A1F510((__int64)&v108, v35);
            v102 = &v108;
            v38 = 0;
            v103 = 1;
            if ( *(_BYTE *)(v35 + 380) )
              v38 = 4 * *(_DWORD *)(v35 + 376) + 4;
            v39 = *(_BYTE *)(v35 + 168);
            if ( (v39 & 1) != 0 )
              v38 |= (2 * ((v39 & 2) != 0)) | 1;
            LOBYTE(v104) = v38;
            sub_227BF10(&v108, &v104, 1);
            v40 = *(_BYTE *)(v35 + 168);
            if ( (v40 & 4) != 0 )
              LOBYTE(v104) = ((v40 & 8) == 0) + 1;
            else
              LOBYTE(v104) = 0;
            sub_227BF10(v102, &v104, 1);
            v36 = *(_BYTE *)(v35 + 168);
            if ( (v36 & 0x10) != 0 )
              LOBYTE(v104) = ((v36 & 0x20) == 0) + 1;
            else
              LOBYTE(v104) = 0;
            sub_227BF10(v102, &v104, 1);
            v107 = 0;
            if ( *(_BYTE *)(v35 + 208) )
            {
              v104 = v106;
              sub_A1ECF0(&v104, *(_BYTE **)(v35 + 176), *(_QWORD *)(v35 + 176) + *(_QWORD *)(v35 + 184));
              v107 = 1;
              sub_A20860((__int64 *)&v102, v105 + 1);
              sub_227BF10(&v108, v104, v105);
            }
            else
            {
              v99 = 0;
              sub_227BF10(v102, &v99, 2);
            }
            if ( v107 && v104 != v106 )
              operator delete(v104);
            v107 = 0;
            if ( *(_BYTE *)(v35 + 248) )
            {
              v104 = v106;
              sub_A1ECF0(&v104, *(_BYTE **)(v35 + 216), *(_QWORD *)(v35 + 216) + *(_QWORD *)(v35 + 224));
              v107 = 1;
              sub_A20860((__int64 *)&v102, v105 + 1);
              sub_227BF10(&v108, v104, v105);
            }
            else
            {
              v99 = 0;
              sub_227BF10(v102, &v99, 2);
            }
            if ( v107 && v104 != v106 )
              operator delete(v104);
            v107 = 0;
            if ( *(_BYTE *)(v35 + 288) )
            {
              v104 = v106;
              sub_A1ECF0(&v104, *(_BYTE **)(v35 + 256), *(_QWORD *)(v35 + 256) + *(_QWORD *)(v35 + 264));
              v107 = 1;
              sub_A20860((__int64 *)&v102, v105 + 1);
              sub_227BF10(&v108, v104, v105);
            }
            else
            {
              v99 = 0;
              sub_227BF10(v102, &v99, 2);
            }
            if ( v107 && v104 != v106 )
              operator delete(v104);
            v107 = 0;
            if ( *(_BYTE *)(v35 + 328) )
            {
              v104 = v106;
              sub_A1ECF0(&v104, *(_BYTE **)(v35 + 296), *(_QWORD *)(v35 + 296) + *(_QWORD *)(v35 + 304));
              v107 = 1;
              sub_A20860((__int64 *)&v102, v105 + 1);
              sub_227BF10(&v108, v104, v105);
            }
            else
            {
              v99 = 0;
              sub_227BF10(v102, &v99, 2);
            }
            if ( v107 && v104 != v106 )
              operator delete(v104);
            v107 = 0;
            if ( *(_BYTE *)(v35 + 368) )
            {
              v104 = v106;
              sub_A1ECF0(&v104, *(_BYTE **)(v35 + 336), *(_QWORD *)(v35 + 336) + *(_QWORD *)(v35 + 344));
              v107 = 1;
              sub_A20860((__int64 *)&v102, v105 + 1);
              sub_227BF10(&v108, v104, v105);
            }
            else
            {
              v99 = 0;
              sub_227BF10(v102, &v99, 2);
            }
            if ( v107 && v104 != v106 )
              operator delete(v104);
            v37 = v35 + 16;
            v35 += 384;
            sub_A20A50((__int64)&v108, v37);
          }
          while ( v95 != v35 );
        }
      }
    }
    if ( (unsigned int)v115 <= ++v89 )
      break;
  }
  v41 = sub_227AEE0(&v108);
  v42 = (unsigned int)(v41 + v111 - v110);
  v43 = (v42 + 3) & 0xFFFFFFFC;
  v44 = ((v42 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v42 - 1;
  if ( ((v42 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v42 )
  {
    do
    {
      --v44;
      LOBYTE(v104) = 0;
      sub_227BF10(v100, &v104, 1);
    }
    while ( v44 != -1 );
  }
  sub_A20800((__int64)v100, v115, v101);
  sub_A20800((__int64)v100, HIDWORD(v115), v101);
  if ( (_DWORD)v115 )
  {
    v45 = 0;
    do
    {
      v46 = v45++;
      sub_A20800((__int64)v100, *((_DWORD *)ptr + 4 * v46), v101);
    }
    while ( (unsigned int)v115 > v45 );
  }
  LODWORD(v104) = v43;
  v108 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v108);
  free(ptr);
  v47 = v117;
  v48 = (unsigned int)v118;
  v90 = &v117[8 * (unsigned int)v118];
  if ( v117 != v90 )
  {
    v49 = v117;
    while ( 1 )
    {
      v50 = (unsigned int)((v47 - v49) >> 3) >> 7;
      v51 = 4096LL << v50;
      if ( v50 >= 0x1E )
        v51 = 0x40000000000LL;
      v52 = *(_QWORD *)v47 + v51;
      v53 = (*(_QWORD *)v47 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)v47 == *(_QWORD *)&v49[8 * v48 - 8] )
        v52 = v116.m128_u64[0];
      while ( 1 )
      {
        v53 += 424LL;
        if ( v52 < v53 )
          break;
        while ( 1 )
        {
          v54 = *(char **)(v53 - 416);
          v55 = &v54[384 * *(unsigned int *)(v53 - 408)];
          if ( v54 != v55 )
          {
            do
            {
              v55 -= 384;
              sub_A0A3E0((__int64)(v55 + 16));
            }
            while ( v54 != v55 );
            v55 = *(char **)(v53 - 424 + 8);
          }
          if ( v55 == (char *)(v53 - 400) )
            break;
          v53 += 424LL;
          free(v55);
          if ( v52 < v53 )
            goto LABEL_102;
        }
      }
LABEL_102:
      v47 += 8;
      if ( v90 == v47 )
        break;
      v49 = v117;
      v48 = (unsigned int)v118;
    }
  }
  v56 = v120;
  v57 = (unsigned int)v121;
  v91 = &v120[v57];
  if ( v120 != &v120[v57] )
  {
    do
    {
      v58 = *(_QWORD *)v56 + *((_QWORD *)v56 + 1);
      v59 = (*(_QWORD *)v56 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v59 += 424LL;
        if ( v58 < v59 )
          break;
        while ( 1 )
        {
          v60 = *(char **)(v59 - 416);
          v61 = &v60[384 * *(unsigned int *)(v59 - 408)];
          if ( v60 != v61 )
          {
            do
            {
              v61 -= 384;
              sub_A0A3E0((__int64)(v61 + 16));
            }
            while ( v60 != v61 );
            v61 = *(char **)(v59 - 424 + 8);
          }
          if ( v61 == (char *)(v59 - 400) )
            break;
          v59 += 424LL;
          free(v61);
          if ( v58 < v59 )
            goto LABEL_112;
        }
      }
LABEL_112:
      ++v56;
    }
    while ( v91 != v56 );
  }
  sub_A24B10(&v116);
  sub_9B7090((__int64)&v116);
  v115 = a2;
  v116.m128_i32[0] = sub_A246B0(a2);
  sub_A26A30((__int64)&v115, a1 + 40, (unsigned int *)&v104, (__int64)&v124);
  if ( v124 != v126 )
    free(v124);
  return sub_A25550(a2);
}
