_QWORD *__fastcall sub_A12CB0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // esi
  unsigned int v4; // r12d
  unsigned int v5; // eax
  char *v6; // rbx
  char *i; // rax
  char *v8; // rbx
  int v9; // eax
  __int16 v10; // si
  __int64 j; // rbx
  unsigned __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rax
  __int64 k; // rdi
  __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rsi
  int m; // ecx
  __int64 v22; // r10
  __int64 v23; // r8
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // r12d
  __int64 v28; // rdx
  __m128i *v29; // r13
  int v30; // eax
  __int64 v31; // r14
  __m128i *v32; // r12
  unsigned __int64 v33; // rax
  __m128i *v34; // r14
  const __m128i *v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rax
  int v41; // ebx
  unsigned __int64 v42; // r12
  unsigned int v43; // r12d
  __int64 v44; // rax
  char *v45; // r13
  __int64 v46; // rdx
  char *v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rbp
  unsigned __int64 v50; // rbx
  __int64 v51; // r12
  __int64 v52; // rbp
  _QWORD *v53; // rdi
  _QWORD *v54; // r15
  _QWORD *v55; // r14
  char *v56; // rdi
  char *v57; // rdi
  void *v58; // rdi
  void *v59; // rdi
  void *v60; // rdi
  void *v61; // rdi
  void *v62; // rdi
  void *v63; // rdi
  void *v64; // rdi
  __int128 *v65; // rbp
  unsigned __int64 v66; // rbx
  __int64 v67; // r13
  __int64 v68; // r12
  _QWORD *v69; // rdi
  _QWORD *v70; // r15
  _QWORD *v71; // r14
  char *v72; // rdi
  char *v73; // rdi
  void *v74; // rdi
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  void *v79; // rdi
  void *v80; // rdi
  void *v81; // rdi
  char *v82; // rax
  void *v83; // rdi
  char *v84; // rsi
  char *v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  char *v88; // rax
  int *v89; // rax
  int *v90; // r14
  int *v91; // rbx
  int v92; // r12d
  int v93; // r13d
  unsigned int v94; // ebp
  _DWORD *v95; // rax
  _QWORD *v96; // r15
  unsigned __int64 v97; // rax
  __int64 v98; // rcx
  char *v99; // rax
  int *v100; // rax
  char *v101; // rax
  void *v102; // rdi
  char *v103; // r15
  char *v104; // rsi
  char *v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  char *v108; // rax
  int v109; // [rsp+0h] [rbp-1178h]
  unsigned __int64 v110; // [rsp+0h] [rbp-1178h]
  unsigned __int64 v111; // [rsp+0h] [rbp-1178h]
  char *v112; // [rsp+18h] [rbp-1160h]
  __int128 *v113; // [rsp+18h] [rbp-1160h]
  __int16 v116; // [rsp+4Eh] [rbp-112Ah] BYREF
  __int64 (__fastcall ***v117)(); // [rsp+50h] [rbp-1128h] BYREF
  int v118; // [rsp+58h] [rbp-1120h]
  __int64 (__fastcall ***v119)(); // [rsp+60h] [rbp-1118h] BYREF
  int v120; // [rsp+68h] [rbp-1110h]
  __int64 (__fastcall **v121)(); // [rsp+70h] [rbp-1108h] BYREF
  int v122; // [rsp+78h] [rbp-1100h]
  __int128 v123; // [rsp+80h] [rbp-10F8h]
  __int64 v124; // [rsp+90h] [rbp-10E8h]
  char v125; // [rsp+98h] [rbp-10E0h]
  int v126; // [rsp+9Ch] [rbp-10DCh]
  void **v127; // [rsp+A0h] [rbp-10D8h]
  __int64 v128; // [rsp+B0h] [rbp-10C8h] BYREF
  __m128 v129; // [rsp+B8h] [rbp-10C0h] BYREF
  char *v130; // [rsp+C8h] [rbp-10B0h]
  __int64 v131; // [rsp+D0h] [rbp-10A8h]
  char v132; // [rsp+D8h] [rbp-10A0h] BYREF
  __int128 *v133; // [rsp+F8h] [rbp-1080h]
  __int64 v134; // [rsp+100h] [rbp-1078h]
  __int128 v135; // [rsp+108h] [rbp-1070h] BYREF
  void *ptr; // [rsp+118h] [rbp-1060h]
  void *v137; // [rsp+120h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+128h] [rbp-1050h]
  _BYTE v139[4160]; // [rsp+138h] [rbp-1040h] BYREF

  v137 = v139;
  v130 = &v132;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D50);
  v131 = 0x400000000LL;
  v129 = 0;
  v133 = &v135;
  v134 = 0;
  v135 = 0;
  v128 = 64;
  v2 = sub_9FB8B0();
  v3 = *(_DWORD *)(a1 + 744);
  ptr = v2;
  if ( !v3 )
    goto LABEL_2;
  v89 = *(int **)(a1 + 736);
  v90 = &v89[86 * *(unsigned int *)(a1 + 752)];
  if ( v89 == v90 )
    goto LABEL_2;
  while ( 1 )
  {
    v91 = v89;
    if ( *v89 != -1 )
      break;
    if ( v89[1] != -1 )
      goto LABEL_135;
LABEL_156:
    v89 += 86;
    if ( v90 == v89 )
      goto LABEL_2;
  }
  if ( *v89 == -2 && v89[1] == -2 )
    goto LABEL_156;
LABEL_135:
  if ( v90 == v89 )
    goto LABEL_2;
  while ( 2 )
  {
    v92 = *v91;
    v93 = v91[1];
    v94 = 2 * v128;
    ++HIDWORD(v128);
    if ( 4 * HIDWORD(v128) >= (unsigned int)(3 * v128) )
    {
      v101 = (char *)sub_9FB640(v94);
      v102 = ptr;
      v103 = v101;
      if ( (_DWORD)v128 )
      {
        v104 = (char *)ptr;
        v105 = (char *)ptr + 16 * (unsigned int)v128;
        do
        {
          v106 = *((_QWORD *)v104 + 1);
          if ( v106 )
          {
            do
            {
              v107 = *(_QWORD *)(v106 + 344);
              v108 = &v103[16 * ((v94 - 1LL) & *(_QWORD *)(v106 + 352))];
              *(_QWORD *)(v106 + 344) = *((_QWORD *)v108 + 1);
              *((_QWORD *)v108 + 1) = v106;
              v106 = v107;
              ++*((_DWORD *)v108 + 1);
            }
            while ( v107 );
          }
          v104 += 16;
        }
        while ( v105 != v104 );
      }
      free(v102);
      LODWORD(v128) = v94;
      ptr = v103;
    }
    v95 = (_DWORD *)sub_A03370((__int64 *)&v129, 360, 3u);
    *v95 = v92;
    v96 = v95;
    v95 += 6;
    *(v95 - 5) = v93;
    v96[1] = v95;
    v96[2] = 0x100000000LL;
    if ( v91[4] )
      sub_A0CE40((__int64)(v96 + 1), (__int64)(v91 + 2));
    v96[43] = 0;
    v121 = (__int64 (__fastcall **)())__PAIR64__(v93, v92);
    v97 = sub_9FE7F0(v92, (int *)&v121 + 1);
    v98 = (unsigned int)v128;
    v96[44] = v97;
    v99 = (char *)ptr + 16 * (v97 & (v98 - 1));
    v96[43] = *((_QWORD *)v99 + 1);
    ++*((_DWORD *)v99 + 1);
    *((_QWORD *)v99 + 1) = v96;
    v100 = v91 + 86;
    if ( v91 + 86 == v90 )
      break;
    while ( 2 )
    {
      v91 = v100;
      if ( *v100 == -1 )
      {
        if ( v100[1] != -1 )
          break;
        goto LABEL_145;
      }
      if ( *v100 == -2 && v100[1] == -2 )
      {
LABEL_145:
        v100 += 86;
        if ( v90 == v100 )
          goto LABEL_2;
        continue;
      }
      break;
    }
    if ( v90 != v100 )
      continue;
    break;
  }
LABEL_2:
  v123 = 0;
  v4 = 1;
  v122 = 2;
  v121 = &off_2BC1F40;
  v125 = 0;
  v127 = &v137;
  v126 = 1;
  v124 = 0;
  sub_9FB9C0(&v121);
  LODWORD(v119) = 0;
  sub_22581D0(&v121, &v119, 4);
  v117 = &v121;
  v118 = 1;
  if ( HIDWORD(v128) > 2 && (unsigned int)(4 * HIDWORD(v128)) > 2 )
  {
    _BitScanReverse(&v5, 4 * HIDWORD(v128) / 3u);
    v4 = 1 << (32 - (v5 ^ 0x1F));
  }
  if ( (_DWORD)v128 == v4 )
  {
    v6 = (char *)ptr;
  }
  else
  {
    v82 = (char *)sub_9FB640(v4);
    v83 = ptr;
    v6 = v82;
    if ( (_DWORD)v128 )
    {
      v84 = (char *)ptr;
      v85 = (char *)ptr + 16 * (unsigned int)v128;
      do
      {
        v86 = *((_QWORD *)v84 + 1);
        if ( v86 )
        {
          do
          {
            v87 = *(_QWORD *)(v86 + 344);
            v88 = &v6[16 * ((v4 - 1LL) & *(_QWORD *)(v86 + 352))];
            *(_QWORD *)(v86 + 344) = *((_QWORD *)v88 + 1);
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
    LODWORD(v128) = v4;
    ptr = v6;
  }
  v109 = 0;
  for ( i = v6; ; i = (char *)ptr )
  {
    v8 = &i[16 * v109];
    if ( *((_QWORD *)v8 + 1) )
    {
      v9 = sub_22571A0(&v121);
      v10 = *((_WORD *)v8 + 2);
      *(_DWORD *)v8 = v9 + v124 - v123;
      sub_9FCB20((__int64 *)&v117, v10);
      for ( j = *((_QWORD *)v8 + 1); j; j = *(_QWORD *)(j + 344) )
      {
        v12 = *(_QWORD *)(j + 352);
        if ( v118 != 1 )
          v12 = _byteswap_uint64(v12);
        v119 = (__int64 (__fastcall ***)())v12;
        v13 = 2;
        sub_22581D0(v117, &v119, 8);
        v14 = *(_QWORD *)(j + 8);
        for ( k = v14 + 320LL * *(unsigned int *)(j + 16); k != v14; v13 += v24 + v18 )
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v14 + 176);
            v17 = ((char)HIBYTE(*(_QWORD *)v14) >> 31) & 4;
            v18 = v17 + 5;
            v19 = v17 + 9;
            if ( (BYTE3(*(_QWORD *)(v14 + 8)) & 0x80u) != 0 )
              v18 = v19;
            v20 = *(_QWORD *)(v14 + 168);
            if ( (HIBYTE(*(_QWORD *)(v14 + 8)) & 0x80u) != 0 )
              v18 += 4;
            for ( m = *(_DWORD *)(v14 + 24) + *(_QWORD *)(v14 + 64) + 17;
                  v16 != v20;
                  m += *(_DWORD *)(v20 - 112) + v23 + v22 + 10 )
            {
              v22 = *(_QWORD *)(v20 + 88);
              v23 = *(_QWORD *)(v20 + 48);
              v20 += 120;
            }
            v24 = *(_DWORD *)(v14 + 112) + m + *(_QWORD *)(v14 + 144) + 5;
            if ( !*(_BYTE *)(v14 + 312) )
              break;
            v25 = *(_QWORD *)(v14 + 280);
            v26 = *(_QWORD *)(v14 + 240);
            v14 += 320;
            v13 += v24 + *(_DWORD *)(v14 - 120) + v26 + v25 + 10 + v18;
            if ( k == v14 )
              goto LABEL_21;
          }
          v14 += 320;
        }
LABEL_21:
        v119 = &v121;
        v116 = 8;
        v120 = 1;
        sub_22581D0(&v121, &v116, 2);
        sub_9FCB20((__int64 *)&v119, v13);
        v27 = *(_DWORD *)(j + 4);
        LODWORD(v119) = *(_DWORD *)j;
        sub_22581D0(&v121, &v119, 4);
        LODWORD(v119) = v27;
        sub_22581D0(&v121, &v119, 4);
        v28 = *(unsigned int *)(j + 16);
        v29 = *(__m128i **)(j + 8);
        v30 = *(_DWORD *)(j + 16);
        v31 = 320 * v28;
        v32 = &v29[20 * v28];
        if ( v29 != v32 )
        {
          _BitScanReverse64(&v33, 0xCCCCCCCCCCCCCCCDLL * (v31 >> 6));
          sub_A12950(*(__m128i **)(j + 8), &v29[20 * v28], 2LL * (int)(63 - (v33 ^ 0x3F)));
          if ( (unsigned __int64)v31 <= 0x1400 )
          {
            sub_A09690(v29, v32);
          }
          else
          {
            v34 = v29 + 320;
            sub_A09690(v29, v29 + 320);
            if ( v32 != &v29[320] )
            {
              do
              {
                v35 = v34;
                v34 += 20;
                sub_A095C0(v35);
              }
              while ( v32 != v34 );
            }
          }
          v30 = *(_DWORD *)(j + 16);
        }
        LOWORD(v119) = v30;
        sub_22581D0(&v121, &v119, 2);
        v36 = *(_QWORD *)(j + 8);
        v37 = v36 + 320LL * *(unsigned int *)(j + 16);
        while ( v37 != v36 )
        {
          while ( 1 )
          {
            sub_9FB7D0((__int64)&v121, v36);
            LOBYTE(v119) = *(_BYTE *)(v36 + 312);
            sub_22581D0(&v121, &v119, 1);
            sub_9FCE50((__int64)&v121, v36 + 16);
            if ( *(_BYTE *)(v36 + 312) )
              break;
            v36 += 320;
            if ( v37 == v36 )
              goto LABEL_31;
          }
          v38 = v36 + 192;
          v36 += 320;
          sub_9FCC80((__int64)&v121, v38);
        }
LABEL_31:
        ;
      }
    }
    if ( (unsigned int)v128 <= ++v109 )
      break;
  }
  v39 = sub_22571A0(&v121);
  v40 = (unsigned int)(v39 + v124 - v123);
  v41 = (v40 + 3) & 0xFFFFFFFC;
  v42 = ((v40 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v40 - 1;
  if ( ((v40 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v40 )
  {
    do
    {
      --v42;
      LOBYTE(v119) = 0;
      sub_22581D0(v117, &v119, 1);
    }
    while ( v42 != -1 );
  }
  sub_9FCAC0((__int64)v117, v128, v118);
  sub_9FCAC0((__int64)v117, HIDWORD(v128), v118);
  if ( (_DWORD)v128 )
  {
    v43 = 0;
    do
    {
      v44 = v43++;
      sub_9FCAC0((__int64)v117, *((_DWORD *)ptr + 4 * v44), v118);
    }
    while ( (unsigned int)v128 > v43 );
  }
  LODWORD(v119) = v41;
  v121 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v121);
  free(ptr);
  v45 = v130;
  v46 = (unsigned int)v131;
  v112 = &v130[8 * (unsigned int)v131];
  if ( v130 != v112 )
  {
    v47 = v130;
LABEL_44:
    v48 = (unsigned int)((v45 - v47) >> 3) >> 7;
    v49 = 4096LL << v48;
    if ( v48 >= 0x1E )
      v49 = 0x40000000000LL;
    v50 = (*(_QWORD *)v45 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    v110 = *(_QWORD *)v45 + v49;
    if ( *(_QWORD *)v45 == *(_QWORD *)&v47[8 * v46 - 8] )
      v110 = v129.m128_u64[0];
LABEL_48:
    v50 += 360LL;
    if ( v110 < v50 )
      goto LABEL_72;
LABEL_49:
    v51 = *(_QWORD *)(v50 - 352);
    v52 = v51 + 320LL * *(unsigned int *)(v50 - 344);
    if ( v51 == v52 )
      goto LABEL_70;
LABEL_50:
    v52 -= 320;
    if ( *(_BYTE *)(v52 + 312) )
      goto LABEL_76;
    while ( 1 )
    {
      do
      {
        v53 = *(_QWORD **)(v52 + 168);
        v54 = *(_QWORD **)(v52 + 176);
        v55 = v53;
        if ( v54 != v53 )
        {
          do
          {
            while ( 1 )
            {
              v56 = (char *)v55[10];
              if ( v56 != (char *)(v55 + 12) )
                operator delete(v56);
              v57 = (char *)v55[5];
              if ( v57 != (char *)(v55 + 7) )
                operator delete(v57);
              if ( (_QWORD *)*v55 == v55 + 2 )
                break;
              operator delete((void *)*v55);
              v55 += 15;
              if ( v55 == v54 )
                goto LABEL_58;
            }
            v55 += 15;
          }
          while ( v54 != v55 );
LABEL_58:
          v53 = *(_QWORD **)(v52 + 168);
        }
        if ( v53 )
          operator delete(v53);
        v58 = *(void **)(v52 + 136);
        if ( v58 != (void *)(v52 + 152) )
          operator delete(v58);
        v59 = *(void **)(v52 + 104);
        if ( v59 != (void *)(v52 + 120) )
          operator delete(v59);
        v60 = *(void **)(v52 + 56);
        if ( v60 != (void *)(v52 + 72) )
          operator delete(v60);
        v61 = *(void **)(v52 + 16);
        if ( v61 != (void *)(v52 + 32) )
        {
          operator delete(v61);
          if ( v51 == v52 )
            goto LABEL_69;
          goto LABEL_50;
        }
        if ( v51 == v52 )
        {
LABEL_69:
          v52 = *(_QWORD *)(v50 - 360 + 8);
LABEL_70:
          if ( v52 == v50 - 336 )
            goto LABEL_48;
          v50 += 360LL;
          free((void *)v52);
          if ( v110 < v50 )
          {
LABEL_72:
            v45 += 8;
            if ( v112 == v45 )
              goto LABEL_84;
            v47 = v130;
            v46 = (unsigned int)v131;
            goto LABEL_44;
          }
          goto LABEL_49;
        }
        v52 -= 320;
      }
      while ( !*(_BYTE *)(v52 + 312) );
LABEL_76:
      v62 = *(void **)(v52 + 272);
      if ( v62 != (void *)(v52 + 288) )
        operator delete(v62);
      v63 = *(void **)(v52 + 232);
      if ( v63 != (void *)(v52 + 248) )
        operator delete(v63);
      v64 = *(void **)(v52 + 192);
      if ( v64 != (void *)(v52 + 208) )
        operator delete(v64);
    }
  }
LABEL_84:
  v65 = v133;
  v113 = &v133[(unsigned int)v134];
  if ( v133 != v113 )
  {
    do
    {
      while ( 1 )
      {
        v111 = *(_QWORD *)v65 + *((_QWORD *)v65 + 1);
        v66 = ((*(_QWORD *)v65 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 360;
        if ( v111 >= v66 )
          break;
LABEL_109:
        if ( v113 == ++v65 )
          goto LABEL_110;
      }
      do
      {
        while ( 1 )
        {
          v67 = *(_QWORD *)(v66 - 352);
          v68 = v67 + 320LL * *(unsigned int *)(v66 - 344);
          if ( v67 != v68 )
          {
            do
            {
              while ( 1 )
              {
                v68 -= 320;
                if ( *(_BYTE *)(v68 + 312) )
                {
                  v79 = *(void **)(v68 + 272);
                  if ( v79 != (void *)(v68 + 288) )
                    operator delete(v79);
                  v80 = *(void **)(v68 + 232);
                  if ( v80 != (void *)(v68 + 248) )
                    operator delete(v80);
                  v81 = *(void **)(v68 + 192);
                  if ( v81 != (void *)(v68 + 208) )
                    operator delete(v81);
                }
                v69 = *(_QWORD **)(v68 + 168);
                v70 = *(_QWORD **)(v68 + 176);
                v71 = v69;
                if ( v70 != v69 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v72 = (char *)v71[10];
                      if ( v72 != (char *)(v71 + 12) )
                        operator delete(v72);
                      v73 = (char *)v71[5];
                      if ( v73 != (char *)(v71 + 7) )
                        operator delete(v73);
                      if ( (_QWORD *)*v71 == v71 + 2 )
                        break;
                      operator delete((void *)*v71);
                      v71 += 15;
                      if ( v71 == v70 )
                        goto LABEL_95;
                    }
                    v71 += 15;
                  }
                  while ( v70 != v71 );
LABEL_95:
                  v69 = *(_QWORD **)(v68 + 168);
                }
                if ( v69 )
                  operator delete(v69);
                v74 = *(void **)(v68 + 136);
                if ( v74 != (void *)(v68 + 152) )
                  operator delete(v74);
                v75 = *(void **)(v68 + 104);
                if ( v75 != (void *)(v68 + 120) )
                  operator delete(v75);
                v76 = *(void **)(v68 + 56);
                if ( v76 != (void *)(v68 + 72) )
                  operator delete(v76);
                v77 = *(void **)(v68 + 16);
                if ( v77 == (void *)(v68 + 32) )
                  break;
                operator delete(v77);
                if ( v67 == v68 )
                  goto LABEL_106;
              }
            }
            while ( v67 != v68 );
LABEL_106:
            v68 = *(_QWORD *)(v66 - 360 + 8);
          }
          if ( v68 == v66 - 336 )
            break;
          v66 += 360LL;
          free((void *)v68);
          if ( v111 < v66 )
            goto LABEL_109;
        }
        v66 += 360LL;
      }
      while ( v111 >= v66 );
      ++v65;
    }
    while ( v113 != v65 );
  }
LABEL_110:
  sub_A00DD0(&v129);
  sub_993350((__int64)&v129);
  v128 = a2;
  v129.m128_i32[0] = sub_A00970(a2);
  sub_A02CF0((__int64)&v128, a1 + 40, (unsigned int *)&v119, (__int64)&v137);
  if ( v137 != v139 )
    free(v137);
  return sub_A01810(a2);
}

