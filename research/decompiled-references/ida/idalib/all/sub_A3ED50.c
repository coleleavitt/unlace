_QWORD *__fastcall sub_A3ED50(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // esi
  unsigned int v4; // ebp
  char *v5; // rbx
  char *v6; // rax
  char *v7; // rbx
  int v8; // eax
  __int16 v9; // si
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // si
  int v15; // edi
  __int16 v16; // ax
  __int16 v17; // di
  int v18; // edi
  int v19; // r9d
  int v20; // r8d
  __int16 v21; // bx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __m128i *v24; // rbx
  int v25; // eax
  __int64 v26; // rbp
  __m128i *v27; // r12
  unsigned __int64 v28; // rax
  __m128i *v29; // r14
  unsigned int v30; // edi
  unsigned int v31; // r9d
  unsigned __int32 v32; // esi
  unsigned __int32 v33; // r8d
  __int8 v34; // al
  __int8 v35; // al
  __int8 v36; // al
  unsigned __int64 *v37; // rdi
  __m128i *v38; // rdi
  __m128i *v39; // r12
  char *v40; // rbx
  unsigned __int32 v41; // r11d
  __m128i *v42; // rbp
  __m128i *v43; // rcx
  __m128i *v44; // rsi
  __m128i *v45; // rdi
  __int64 v46; // rdx
  __int8 v47; // al
  __int8 v48; // al
  __int8 v49; // al
  char *v50; // rax
  unsigned __int64 *v51; // rdi
  __int64 v52; // rdx
  unsigned __int64 *v53; // rdi
  __m128i *v54; // rbp
  char v55; // al
  __m128i *v56; // rdi
  __int64 v57; // rax
  __m128i *v58; // rax
  __m128i *v59; // r12
  __m128i *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rbp
  __int64 v64; // rsi
  size_t v65; // rdx
  __int64 v66; // rdx
  size_t v67; // rdx
  unsigned __int64 *v68; // rdx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  int v72; // ebx
  unsigned __int64 v73; // rbp
  unsigned int v74; // ebp
  __int64 v75; // rax
  char *v76; // r12
  char *v77; // rax
  __int64 j; // rsi
  unsigned int v79; // ecx
  __int64 v80; // rbx
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // r14
  __int64 v84; // r13
  __int64 v85; // rbp
  void *v86; // rdi
  void *v87; // rdi
  void *v88; // rdi
  void *v89; // rdi
  __int128 *v90; // rbx
  unsigned __int64 v91; // r12
  unsigned __int64 v92; // r14
  __int64 v93; // rbp
  __int64 v94; // rax
  __int64 v95; // r15
  void *v96; // rdi
  void *v97; // rdi
  void *v98; // rdi
  void *v99; // rdi
  unsigned int v101; // eax
  char *v102; // rax
  void *v103; // rdi
  char *v104; // rsi
  char *v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  char *v108; // rax
  int *v109; // rax
  int *v110; // r13
  int *v111; // rbx
  int v112; // ebp
  int v113; // r12d
  unsigned int v114; // r14d
  _DWORD *v115; // rax
  _QWORD *v116; // r15
  unsigned __int64 v117; // rax
  __int64 v118; // rcx
  char *v119; // rax
  int *i; // rax
  char *v121; // rax
  void *v122; // rdi
  char *v123; // r15
  char *v124; // rsi
  char *v125; // r8
  __int64 v126; // rdx
  __int64 v127; // rcx
  char *v128; // rax
  char *v129; // [rsp+0h] [rbp-1238h]
  __int128 *v130; // [rsp+0h] [rbp-1238h]
  int v131; // [rsp+14h] [rbp-1224h]
  __m128i *v132; // [rsp+18h] [rbp-1220h]
  __int16 v135; // [rsp+6Eh] [rbp-11CAh] BYREF
  __int64 (__fastcall ***v136)(); // [rsp+70h] [rbp-11C8h] BYREF
  int v137; // [rsp+78h] [rbp-11C0h]
  __int64 (__fastcall **v138)(); // [rsp+80h] [rbp-11B8h] BYREF
  int v139; // [rsp+88h] [rbp-11B0h]
  __int128 v140; // [rsp+90h] [rbp-11A8h]
  __int64 v141; // [rsp+A0h] [rbp-1198h]
  char v142; // [rsp+A8h] [rbp-1190h]
  int v143; // [rsp+ACh] [rbp-118Ch]
  void **v144; // [rsp+B0h] [rbp-1188h]
  __int64 v145; // [rsp+C0h] [rbp-1178h]
  __m128 v146; // [rsp+C8h] [rbp-1170h] BYREF
  char *v147; // [rsp+D8h] [rbp-1160h]
  __int64 v148; // [rsp+E0h] [rbp-1158h]
  char v149; // [rsp+E8h] [rbp-1150h] BYREF
  __int128 *v150; // [rsp+108h] [rbp-1130h]
  __int64 v151; // [rsp+110h] [rbp-1128h]
  __int128 v152; // [rsp+118h] [rbp-1120h] BYREF
  void *ptr; // [rsp+128h] [rbp-1110h]
  __m128i v154; // [rsp+130h] [rbp-1108h] BYREF
  _QWORD v155[4]; // [rsp+140h] [rbp-10F8h] BYREF
  char v156; // [rsp+160h] [rbp-10D8h]
  __int64 v157[4]; // [rsp+168h] [rbp-10D0h] BYREF
  __m128i v158; // [rsp+188h] [rbp-10B0h] BYREF
  __m128i v159; // [rsp+198h] [rbp-10A0h] BYREF
  char v160; // [rsp+1A8h] [rbp-1090h]
  __m128i v161; // [rsp+1B0h] [rbp-1088h] BYREF
  __m128i v162; // [rsp+1C0h] [rbp-1078h] BYREF
  char v163; // [rsp+1D0h] [rbp-1068h]
  __int64 v164; // [rsp+1D8h] [rbp-1060h]
  void *v165; // [rsp+1E0h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+1E8h] [rbp-1050h]
  _BYTE v167[4160]; // [rsp+1F8h] [rbp-1040h] BYREF

  v165 = v167;
  v147 = &v149;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v148 = 0x400000000LL;
  v146 = 0;
  v150 = &v152;
  v151 = 0;
  v152 = 0;
  v145 = 64;
  v2 = sub_A1F5F0();
  v3 = *(_DWORD *)(a1 + 888);
  ptr = v2;
  if ( !v3 )
    goto LABEL_2;
  v109 = *(int **)(a1 + 880);
  v110 = &v109[50 * *(unsigned int *)(a1 + 896)];
  if ( v109 == v110 )
    goto LABEL_2;
  while ( 1 )
  {
    v111 = v109;
    if ( *v109 != -1 )
      break;
    if ( v109[1] != -1 )
      goto LABEL_180;
LABEL_201:
    v109 += 50;
    if ( v110 == v109 )
      goto LABEL_2;
  }
  if ( *v109 == -2 && v109[1] == -2 )
    goto LABEL_201;
LABEL_180:
  if ( v110 == v109 )
    goto LABEL_2;
LABEL_184:
  v112 = *v111;
  v113 = v111[1];
  v114 = 2 * v145;
  ++HIDWORD(v145);
  if ( 4 * HIDWORD(v145) >= (unsigned int)(3 * v145) )
  {
    v121 = (char *)sub_A1F380(v114);
    v122 = ptr;
    v123 = v121;
    if ( (_DWORD)v145 )
    {
      v124 = (char *)ptr;
      v125 = (char *)ptr + 16 * (unsigned int)v145;
      do
      {
        v126 = *((_QWORD *)v124 + 1);
        if ( v126 )
        {
          do
          {
            v127 = *(_QWORD *)(v126 + 200);
            v128 = &v123[16 * ((v114 - 1LL) & *(_QWORD *)(v126 + 208))];
            *(_QWORD *)(v126 + 200) = *((_QWORD *)v128 + 1);
            *((_QWORD *)v128 + 1) = v126;
            v126 = v127;
            ++*((_DWORD *)v128 + 1);
          }
          while ( v127 );
        }
        v124 += 16;
      }
      while ( v125 != v124 );
    }
    free(v122);
    LODWORD(v145) = v114;
    ptr = v123;
  }
  v115 = (_DWORD *)sub_A270B0((__int64 *)&v146, 216, 3u);
  *v115 = v112;
  v116 = v115;
  v115 += 6;
  *(v115 - 5) = v113;
  v116[1] = v115;
  v116[2] = 0x100000000LL;
  if ( v111[4] )
    sub_A2F4C0((__int64)(v116 + 1), (__int64)(v111 + 2));
  v116[25] = 0;
  v154.m128i_i64[0] = __PAIR64__(v113, v112);
  v117 = sub_A22530(v112, &v154.m128i_i32[1]);
  v118 = (unsigned int)v145;
  v116[26] = v117;
  v119 = (char *)ptr + 16 * (v117 & (v118 - 1));
  v116[25] = *((_QWORD *)v119 + 1);
  ++*((_DWORD *)v119 + 1);
  *((_QWORD *)v119 + 1) = v116;
  for ( i = v111 + 50; v110 != i; i += 50 )
  {
    v111 = i;
    if ( *i == -1 )
    {
      if ( i[1] != -1 )
        goto LABEL_183;
    }
    else if ( *i != -2 || i[1] != -2 )
    {
LABEL_183:
      if ( v110 != i )
        goto LABEL_184;
      break;
    }
  }
LABEL_2:
  v139 = 2;
  v4 = 1;
  v140 = 0;
  v142 = 0;
  v138 = &off_2BEBEE0;
  v143 = 1;
  v144 = &v165;
  v141 = 0;
  sub_A1F700(&v138);
  v154.m128i_i32[0] = 0;
  sub_227BF10(&v138, &v154, 4);
  v136 = &v138;
  v137 = 1;
  if ( HIDWORD(v145) <= 2 || (unsigned int)(4 * HIDWORD(v145)) <= 2 )
  {
    if ( (_DWORD)v145 != 1 )
      goto LABEL_171;
    goto LABEL_4;
  }
  _BitScanReverse(&v101, 4 * HIDWORD(v145) / 3u);
  v4 = 1 << (32 - (v101 ^ 0x1F));
  if ( (_DWORD)v145 == v4 )
  {
LABEL_4:
    v5 = (char *)ptr;
    goto LABEL_5;
  }
LABEL_171:
  v102 = (char *)sub_A1F380(v4);
  v103 = ptr;
  v5 = v102;
  if ( (_DWORD)v145 )
  {
    v104 = (char *)ptr;
    v105 = (char *)ptr + 16 * (unsigned int)v145;
    do
    {
      v106 = *((_QWORD *)v104 + 1);
      if ( v106 )
      {
        do
        {
          v107 = *(_QWORD *)(v106 + 200);
          v108 = &v5[16 * ((v4 - 1LL) & *(_QWORD *)(v106 + 208))];
          *(_QWORD *)(v106 + 200) = *((_QWORD *)v108 + 1);
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
  free(v103);
  LODWORD(v145) = v4;
  ptr = v5;
LABEL_5:
  v131 = 0;
  v6 = v5;
  while ( 2 )
  {
    v7 = &v6[16 * v131];
    if ( *((_QWORD *)v7 + 1) )
    {
      v8 = sub_227AEE0(&v138);
      v9 = *((_WORD *)v7 + 2);
      *(_DWORD *)v7 = v8 + v141 - v140;
      sub_A20860((__int64 *)&v136, v9);
      v10 = *((_QWORD *)v7 + 1);
      if ( v10 )
      {
        while ( 2 )
        {
          v11 = *(_QWORD *)(v10 + 208);
          if ( v137 != 1 )
            v11 = _byteswap_uint64(v11);
          v154.m128i_i64[0] = v11;
          sub_227BF10(v136, &v154, 8);
          v12 = *(_QWORD *)(v10 + 8);
          v13 = v12 + 176LL * *(unsigned int *)(v10 + 16);
          if ( v12 == v13 )
          {
            v21 = 2;
          }
          else
          {
            v14 = 2;
            do
            {
              v15 = ((char)HIBYTE(*(_QWORD *)v12) >> 31) & 4;
              v16 = v15 + 5;
              v17 = v15 + 9;
              if ( (BYTE3(*(_QWORD *)(v12 + 8)) & 0x80u) != 0 )
                v16 = v17;
              if ( (HIBYTE(*(_QWORD *)(v12 + 8)) & 0x80u) != 0 )
                v16 += 4;
              LOWORD(v18) = 4;
              if ( *(_BYTE *)(v12 + 120) )
                v18 = *(_DWORD *)(v12 + 96) + 4;
              LOWORD(v19) = 0;
              if ( *(_BYTE *)(v12 + 160) )
                v19 = *(_DWORD *)(v12 + 136);
              v20 = *(_DWORD *)(v12 + 24) + *(_QWORD *)(v12 + 64);
              v12 += 176;
              v14 += v19 + v18 + v16 + v20 + 6;
            }
            while ( v13 != v12 );
            v21 = v14;
          }
          v154.m128i_i32[2] = 1;
          v135 = 12;
          v154.m128i_i64[0] = (__int64)&v138;
          sub_227BF10(&v138, &v135, 2);
          sub_A20860(v154.m128i_i64, v21);
          v22 = (unsigned __int64)*(unsigned int *)(v10 + 4) << 33;
          v154.m128i_i32[0] = *(_DWORD *)v10;
          sub_227BF10(&v138, &v154, 4);
          v154.m128i_i64[0] = v22;
          sub_227BF10(&v138, &v154, 8);
          v23 = *(unsigned int *)(v10 + 16);
          v24 = *(__m128i **)(v10 + 8);
          v25 = *(_DWORD *)(v10 + 16);
          v26 = 176 * v23;
          v27 = &v24[11 * v23];
          v132 = v27;
          if ( v24 != v27 )
          {
            _BitScanReverse64(&v28, 0x2E8BA2E8BA2E8BA3LL * (v26 >> 4));
            sub_A3E530(v24, (__int64)v24[11 * v23].m128i_i64, 2LL * (int)(63 - (v28 ^ 0x3F)));
            if ( (unsigned __int64)v26 <= 0xB00 )
            {
              sub_A28FB0(v24, v27);
            }
            else
            {
              v29 = v24 + 176;
              sub_A28FB0(v24, v24 + 176);
              if ( v27 != &v24[176] )
              {
                while ( 1 )
                {
                  v39 = v29 + 8;
                  v40 = &v29[-7].m128i_i8[8];
                  v154 = _mm_loadu_si128(v29);
                  sub_A09F20((__int64)v155, (__int64)v29[1].m128i_i64);
                  sub_A20E90(&v158, (__m128i *)((char *)v29 + 88));
                  sub_A20E90(&v161, v29 + 8);
                  v164 = v29[10].m128i_i64[1];
                  while ( 1 )
                  {
                    v41 = v39[-19].m128i_u32[0];
                    v42 = v39 - 8;
                    v43 = v39 - 19;
                    if ( v41 <= v154.m128i_i32[0] )
                    {
                      v30 = v39[-19].m128i_i32[2] & 0x7FFFFFFF;
                      v31 = v39[-19].m128i_i32[1] & 0x7FFFFFFF;
                      v32 = v154.m128i_i32[2] & 0x7FFFFFFF;
                      v33 = v154.m128i_i32[1] & 0x7FFFFFFF;
                      if ( v41 != v154.m128i_i32[0]
                        || v31 <= v33
                        && (v31 != v33
                         || v30 <= v32
                         && (v30 != v32 || (v39[-19].m128i_i32[3] & 0x7FFFFFFFu) <= (v154.m128i_i32[3] & 0x7FFFFFFFu))) )
                      {
                        break;
                      }
                    }
                    v44 = *((__m128i **)v40 - 7);
                    v45 = *((__m128i **)v40 + 15);
                    *(__m128i *)(v40 + 104) = _mm_loadu_si128((const __m128i *)(v40 - 72));
                    if ( v44 == &v39[-17] )
                    {
                      v67 = *((_QWORD *)v40 - 6);
                      if ( v67 )
                      {
                        if ( v67 == 1 )
                        {
                          v45->m128i_i8[0] = *(v40 - 40);
                          v67 = *((_QWORD *)v40 - 6);
                          v45 = *((__m128i **)v40 + 15);
                        }
                        else
                        {
                          memcpy(v45, v44, v67);
                          v67 = *((_QWORD *)v40 - 6);
                          v45 = *((__m128i **)v40 + 15);
                          v43 = v39 - 19;
                        }
                      }
                      *((_QWORD *)v40 + 16) = v67;
                      v45->m128i_i8[v67] = 0;
                      v45 = *((__m128i **)v40 - 7);
                    }
                    else
                    {
                      if ( v45 == &v39[-6] )
                      {
                        v66 = *((_QWORD *)v40 - 6);
                        *((_QWORD *)v40 + 15) = v44;
                        *((_QWORD *)v40 + 16) = v66;
                        *((_QWORD *)v40 + 17) = *((_QWORD *)v40 - 5);
                      }
                      else
                      {
                        *((_QWORD *)v40 + 15) = v44;
                        v46 = *((_QWORD *)v40 + 17);
                        *((_QWORD *)v40 + 16) = *((_QWORD *)v40 - 6);
                        *((_QWORD *)v40 + 17) = *((_QWORD *)v40 - 5);
                        if ( v45 )
                        {
                          *((_QWORD *)v40 - 7) = v45;
                          *((_QWORD *)v40 - 5) = v46;
                          goto LABEL_47;
                        }
                      }
                      *((_QWORD *)v40 - 7) = v39 - 17;
                      v45 = v39 - 17;
                    }
LABEL_47:
                    *((_QWORD *)v40 - 6) = 0;
                    v45->m128i_i8[0] = 0;
                    v47 = v43[3].m128i_i8[0] & 1 | v42[3].m128i_i8[0] & 0xFE;
                    v42[3].m128i_i8[0] = v47;
                    v48 = v43[3].m128i_i8[0] & 2 | v47 & 0xFD;
                    v42[3].m128i_i8[0] = v48;
                    v49 = v43[3].m128i_i8[0] & 4 | v48 & 0xFB;
                    v42[3].m128i_i8[0] = v49;
                    v42[3].m128i_i8[0] = v43[3].m128i_i8[0] & 8 | v49 & 0xF7;
                    v50 = *((char **)v40 - 2);
                    v51 = *((unsigned __int64 **)v40 + 20);
                    if ( v50 == v40 )
                    {
                      v65 = *((_QWORD *)v40 - 1);
                      if ( v65 )
                      {
                        if ( v65 == 1 )
                          *(_BYTE *)v51 = *v40;
                        else
                          memcpy(v51, v40, v65);
                        v65 = *((_QWORD *)v40 - 1);
                        v51 = *((unsigned __int64 **)v40 + 20);
                      }
                      *((_QWORD *)v40 + 21) = v65;
                      *((_BYTE *)v51 + v65) = 0;
                      v51 = *((unsigned __int64 **)v40 - 2);
                    }
                    else
                    {
                      if ( v51 == &v39[-4].m128i_u64[1] )
                      {
                        *((_QWORD *)v40 + 20) = v50;
                        *((_QWORD *)v40 + 21) = *((_QWORD *)v40 - 1);
                        *((_QWORD *)v40 + 22) = *(_QWORD *)v40;
                      }
                      else
                      {
                        *((_QWORD *)v40 + 20) = v50;
                        v52 = *((_QWORD *)v40 + 22);
                        *((_QWORD *)v40 + 21) = *((_QWORD *)v40 - 1);
                        *((_QWORD *)v40 + 22) = *(_QWORD *)v40;
                        if ( v51 )
                        {
                          *((_QWORD *)v40 - 2) = v51;
                          *(_QWORD *)v40 = v52;
                          goto LABEL_51;
                        }
                      }
                      *((_QWORD *)v40 - 2) = v40;
                      v51 = (unsigned __int64 *)v40;
                    }
LABEL_51:
                    *((_QWORD *)v40 - 1) = 0;
                    *(_BYTE *)v51 = 0;
                    if ( v40[224] )
                    {
                      if ( v40[48] )
                      {
                        sub_A0AAD0((__int64)&v39[-3].m128i_i64[1], &v39[-14].m128i_i64[1]);
                      }
                      else
                      {
                        v53 = *((unsigned __int64 **)v40 + 24);
                        v40[224] = 0;
                        if ( v53 != &v39[-2].m128i_u64[1] )
                          operator delete(v53);
                      }
                    }
                    else if ( v40[48] )
                    {
                      v68 = *((unsigned __int64 **)v40 + 2);
                      *((_QWORD *)v40 + 24) = (char *)v39 - 24;
                      if ( v68 == &v39[-13].m128i_u64[1] )
                      {
                        *((__m128i *)v40 + 13) = _mm_loadu_si128((const __m128i *)v40 + 2);
                      }
                      else
                      {
                        *((_QWORD *)v40 + 24) = v68;
                        *((_QWORD *)v40 + 26) = *((_QWORD *)v40 + 4);
                      }
                      v69 = *((_QWORD *)v40 + 3);
                      *((_QWORD *)v40 + 2) = (char *)v39 - 200;
                      *((_QWORD *)v40 + 3) = 0;
                      *((_QWORD *)v40 + 25) = v69;
                      v40[32] = 0;
                      v40[224] = 1;
                    }
                    v54 = v39 - 11;
                    v55 = v40[88];
                    if ( v40[264] )
                    {
                      if ( v55 )
                      {
                        sub_A0AAD0((__int64)v39, (__m128i *)v39[-11].m128i_i64);
                      }
                      else
                      {
                        v56 = *((__m128i **)v40 + 29);
                        v40[264] = 0;
                        if ( v56 != &v39[1] )
                          operator delete(v56);
                      }
                    }
                    else if ( v55 )
                    {
                      v58 = v39 + 1;
                      v59 = v39 - 10;
                      *((_QWORD *)v40 + 29) = v58;
                      v60 = *((__m128i **)v40 + 7);
                      if ( v60 == v59 )
                      {
                        *(__m128i *)(v40 + 248) = _mm_loadu_si128((const __m128i *)(v40 + 72));
                      }
                      else
                      {
                        *((_QWORD *)v40 + 29) = v60;
                        *((_QWORD *)v40 + 31) = *((_QWORD *)v40 + 9);
                      }
                      v61 = *((_QWORD *)v40 + 8);
                      *((_QWORD *)v40 + 7) = v59;
                      *((_QWORD *)v40 + 8) = 0;
                      *((_QWORD *)v40 + 30) = v61;
                      v40[72] = 0;
                      v40[264] = 1;
                    }
                    v57 = *((_QWORD *)v40 + 12);
                    v39 = v54;
                    v40 -= 176;
                    *((_QWORD *)v40 + 56) = v57;
                  }
                  *v42 = _mm_load_si128(&v154);
                  sub_A0AAD0((__int64)v42[1].m128i_i64, v155);
                  v34 = v156 & 1 | v42[3].m128i_i8[0] & 0xFE;
                  v42[3].m128i_i8[0] = v34;
                  v35 = v156 & 2 | v34 & 0xFD;
                  v42[3].m128i_i8[0] = v35;
                  v36 = v156 & 4 | v35 & 0xFB;
                  v42[3].m128i_i8[0] = v36;
                  v42[3].m128i_i8[0] = v156 & 8 | v36 & 0xF7;
                  sub_A0AAD0((__int64)&v42[3].m128i_i64[1], v157);
                  if ( v42[7].m128i_i8[8] )
                  {
                    if ( v160 )
                    {
                      sub_A0AAD0((__int64)&v39[-3].m128i_i64[1], &v158);
                    }
                    else
                    {
                      v37 = (unsigned __int64 *)v42[5].m128i_i64[1];
                      v42[7].m128i_i8[8] = 0;
                      if ( v37 != &v42[6].m128i_u64[1] )
                        operator delete(v37);
                    }
                  }
                  else if ( v160 )
                  {
                    v42[5].m128i_i64[1] = (__int64)&v42[6].m128i_i64[1];
                    if ( (__m128i *)v158.m128i_i64[0] == &v159 )
                    {
                      *(__m128i *)((char *)v42 + 104) = _mm_loadu_si128(&v159);
                    }
                    else
                    {
                      v42[5].m128i_i64[1] = v158.m128i_i64[0];
                      v42[6].m128i_i64[1] = v159.m128i_i64[0];
                    }
                    v42[6].m128i_i64[0] = v158.m128i_i64[1];
                    v158.m128i_i64[0] = (__int64)&v159;
                    v158.m128i_i64[1] = 0;
                    v159.m128i_i8[0] = 0;
                    v42[7].m128i_i8[8] = 1;
                  }
                  if ( v42[10].m128i_i8[0] )
                  {
                    if ( v163 )
                    {
                      sub_A0AAD0((__int64)v39, &v161);
                    }
                    else
                    {
                      v38 = (__m128i *)v39->m128i_i64[0];
                      v42[10].m128i_i8[0] = 0;
                      if ( v38 != &v42[9] )
                        operator delete(v38);
                    }
                  }
                  else if ( v163 )
                  {
                    v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
                    if ( (__m128i *)v161.m128i_i64[0] == &v162 )
                    {
                      v42[9] = _mm_load_si128(&v162);
                    }
                    else
                    {
                      v39->m128i_i64[0] = v161.m128i_i64[0];
                      v42[9].m128i_i64[0] = v162.m128i_i64[0];
                    }
                    v42[8].m128i_i64[1] = v161.m128i_i64[1];
                    v161.m128i_i64[0] = (__int64)&v162;
                    v161.m128i_i64[1] = 0;
                    v162.m128i_i8[0] = 0;
                    v42[10].m128i_i8[0] = 1;
                  }
                  v29 += 11;
                  v42[10].m128i_i64[1] = v164;
                  sub_A09C70((__int64)v155);
                  if ( v132 == v29 )
                  {
                    v25 = *(_DWORD *)(v10 + 16);
                    goto LABEL_67;
                  }
                }
              }
            }
            v25 = *(_DWORD *)(v10 + 16);
          }
LABEL_67:
          v154.m128i_i16[0] = v25;
          sub_227BF10(&v138, &v154, 2);
          v62 = *(_QWORD *)(v10 + 8);
          v63 = v62 + 176LL * *(unsigned int *)(v10 + 16);
          while ( v63 != v62 )
          {
            sub_A1F510((__int64)&v138, v62);
            if ( *(_BYTE *)(v62 + 172) )
              v154.m128i_i8[0] = *(_DWORD *)(v62 + 168) + 1;
            else
              v154.m128i_i8[0] = 0;
            sub_227BF10(&v138, &v154, 1);
            v64 = v62 + 16;
            v62 += 176;
            sub_A20A50((__int64)&v138, v64);
          }
          v10 = *(_QWORD *)(v10 + 200);
          if ( v10 )
            continue;
          break;
        }
      }
    }
    if ( (unsigned int)v145 > ++v131 )
    {
      v6 = (char *)ptr;
      continue;
    }
    break;
  }
  v70 = sub_227AEE0(&v138);
  v71 = (unsigned int)(v70 + v141 - v140);
  v72 = (v71 + 3) & 0xFFFFFFFC;
  v73 = ((v71 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v71 - 1;
  if ( ((v71 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v71 )
  {
    do
    {
      --v73;
      v154.m128i_i8[0] = 0;
      sub_227BF10(v136, &v154, 1);
    }
    while ( v73 != -1 );
  }
  sub_A20800((__int64)v136, v145, v137);
  sub_A20800((__int64)v136, HIDWORD(v145), v137);
  if ( (_DWORD)v145 )
  {
    v74 = 0;
    do
    {
      v75 = v74++;
      sub_A20800((__int64)v136, *((_DWORD *)ptr + 4 * v75), v137);
    }
    while ( (unsigned int)v145 > v74 );
  }
  LODWORD(v136) = v72;
  v138 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v138);
  free(ptr);
  v76 = v147;
  v129 = &v147[8 * (unsigned int)v148];
  if ( v147 != v129 )
  {
    v77 = v147;
    for ( j = (unsigned int)v148; ; j = (unsigned int)v148 )
    {
      v79 = (unsigned int)((v76 - v77) >> 3) >> 7;
      v80 = 4096LL << v79;
      if ( v79 >= 0x1E )
        v80 = 0x40000000000LL;
      v81 = *(_QWORD *)v76 + v80;
      v82 = (*(_QWORD *)v76 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)v76 == *(_QWORD *)&v77[8 * j - 8] )
        v81 = v146.m128_u64[0];
      v83 = v82 + 216;
      if ( v82 + 216 > v81 )
      {
LABEL_138:
        v76 += 8;
        if ( v129 == v76 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v84 = *(_QWORD *)(v83 - 208);
            v85 = v84 + 176LL * *(unsigned int *)(v83 - 200);
            if ( v84 != v85 )
            {
              do
              {
                while ( 1 )
                {
                  v85 -= 176;
                  if ( *(_BYTE *)(v85 + 160) )
                  {
                    v86 = *(void **)(v85 + 128);
                    if ( v86 != (void *)(v85 + 144) )
                      operator delete(v86);
                  }
                  if ( *(_BYTE *)(v85 + 120) )
                  {
                    v87 = *(void **)(v85 + 88);
                    if ( v87 != (void *)(v85 + 104) )
                      operator delete(v87);
                  }
                  v88 = *(void **)(v85 + 56);
                  if ( v88 != (void *)(v85 + 72) )
                    operator delete(v88);
                  v89 = *(void **)(v85 + 16);
                  if ( v89 == (void *)(v85 + 32) )
                    break;
                  operator delete(v89);
                  if ( v84 == v85 )
                    goto LABEL_135;
                }
              }
              while ( v84 != v85 );
LABEL_135:
              v85 = *(_QWORD *)(v83 - 216 + 8);
            }
            if ( v85 == v83 - 192 )
              break;
            v83 += 216LL;
            free((void *)v85);
            if ( v83 > v81 )
              goto LABEL_138;
          }
          v83 += 216LL;
        }
        while ( v83 <= v81 );
        v76 += 8;
        if ( v129 == v76 )
          break;
      }
      v77 = v147;
    }
  }
  v90 = v150;
  v130 = &v150[(unsigned int)v151];
  if ( v150 != v130 )
  {
    do
    {
      while ( 1 )
      {
        v91 = *(_QWORD *)v90 + *((_QWORD *)v90 + 1);
        v92 = ((*(_QWORD *)v90 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 216;
        if ( v91 >= v92 )
          break;
LABEL_158:
        if ( v130 == ++v90 )
          goto LABEL_159;
      }
      do
      {
        while ( 1 )
        {
          v93 = *(_QWORD *)(v92 - 208);
          v94 = 176LL * *(unsigned int *)(v92 - 200);
          v95 = v93 + v94;
          if ( v93 != v93 + v94 )
          {
            do
            {
              while ( 1 )
              {
                v95 -= 176;
                if ( *(_BYTE *)(v95 + 160) )
                {
                  v96 = *(void **)(v95 + 128);
                  if ( v96 != (void *)(v95 + 144) )
                    operator delete(v96);
                }
                if ( *(_BYTE *)(v95 + 120) )
                {
                  v97 = *(void **)(v95 + 88);
                  if ( v97 != (void *)(v95 + 104) )
                    operator delete(v97);
                }
                v98 = *(void **)(v95 + 56);
                if ( v98 != (void *)(v95 + 72) )
                  operator delete(v98);
                v99 = *(void **)(v95 + 16);
                if ( v99 == (void *)(v95 + 32) )
                  break;
                operator delete(v99);
                if ( v93 == v95 )
                  goto LABEL_155;
              }
            }
            while ( v93 != v95 );
LABEL_155:
            v95 = *(_QWORD *)(v92 - 216 + 8);
          }
          if ( v95 == v92 - 192 )
            break;
          v92 += 216LL;
          free((void *)v95);
          if ( v92 > v91 )
            goto LABEL_158;
        }
        v92 += 216LL;
      }
      while ( v91 >= v92 );
      ++v90;
    }
    while ( v130 != v90 );
  }
LABEL_159:
  sub_A24B10(&v146);
  sub_9B7090((__int64)&v146);
  v154.m128i_i64[0] = a2;
  v154.m128i_i32[2] = sub_A246B0(a2);
  sub_A26A30((__int64)&v154, a1 + 40, (unsigned int *)&v136, (__int64)&v165);
  if ( v165 != v167 )
    free(v165);
  return sub_A25550(a2);
}
