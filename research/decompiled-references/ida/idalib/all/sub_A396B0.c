_QWORD *__fastcall sub_A396B0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // edi
  unsigned int v4; // ebp
  char *v5; // rbx
  __int64 (__fastcall ***v6)(); // r14
  char *v7; // rax
  char *v8; // rbx
  int v9; // eax
  __int16 v10; // si
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int16 v15; // si
  int v16; // ecx
  __int16 v17; // ax
  __int16 v18; // cx
  __int64 v19; // rdi
  int v20; // ecx
  __int16 v21; // bx
  __int32 v22; // ebx
  unsigned int *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned int *v26; // rbp
  __m128i *v27; // rsi
  unsigned __int64 v28; // rax
  const __m128i *v29; // r12
  unsigned int v30; // esi
  unsigned int v31; // r8d
  unsigned __int32 v32; // ecx
  unsigned __int32 v33; // edi
  __int8 v34; // al
  __int8 v35; // al
  __int8 v36; // al
  __int8 v37; // al
  __m128i *v38; // rbx
  unsigned __int64 *v39; // r13
  unsigned __int32 v40; // r10d
  __m128i *v41; // r14
  __m128i *v42; // rsi
  __m128i *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int8 v46; // al
  __int8 v47; // al
  __int8 v48; // al
  unsigned __int64 *v49; // rax
  unsigned __int64 *v50; // rdi
  __int64 v51; // rdx
  __int8 v52; // al
  __m128i *v53; // rax
  __m128i *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rbx
  unsigned __int64 v57; // rbp
  unsigned __int8 v58; // al
  size_t v59; // rdx
  __int64 v60; // rdx
  size_t v61; // rdx
  size_t v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  int v65; // ebx
  unsigned __int64 v66; // rbp
  unsigned int v67; // ebp
  __int64 v68; // rax
  char *v69; // r12
  __int64 v70; // rsi
  char *v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // rbx
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r14
  _QWORD *v77; // r13
  _QWORD *v78; // rbp
  _QWORD *v79; // rdi
  _QWORD *v80; // rdi
  _QWORD *v81; // rdi
  char *v82; // rbx
  unsigned __int64 v83; // r12
  unsigned __int64 v84; // r14
  _QWORD *v85; // rbp
  unsigned __int64 v86; // rax
  _QWORD *v87; // r15
  _QWORD *v88; // rdi
  _QWORD *v89; // rdi
  _QWORD *v90; // rdi
  unsigned int v92; // eax
  char *v93; // rax
  void *v94; // rdi
  char *v95; // rsi
  char *v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  char *v99; // rax
  _DWORD *v100; // rax
  _DWORD *v101; // r13
  _DWORD *v102; // rbx
  int v103; // ebp
  unsigned int v104; // r12d
  unsigned int v105; // r14d
  _DWORD *v106; // rax
  _QWORD *v107; // r15
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  char *v110; // rax
  _DWORD *i; // rax
  char *v112; // rax
  void *v113; // rdi
  char *v114; // r15
  char *v115; // rsi
  char *v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  char *v119; // rax
  char *v120; // [rsp+8h] [rbp-1200h]
  __int64 v121; // [rsp+28h] [rbp-11E0h]
  __int64 (__fastcall ***v122)(); // [rsp+30h] [rbp-11D8h]
  __int64 v123; // [rsp+48h] [rbp-11C0h]
  __int64 v124; // [rsp+58h] [rbp-11B0h]
  __int16 v125; // [rsp+6Eh] [rbp-119Ah] BYREF
  __int64 (__fastcall ***v126)(); // [rsp+70h] [rbp-1198h] BYREF
  int v127; // [rsp+78h] [rbp-1190h]
  __int64 (__fastcall **v128)(); // [rsp+80h] [rbp-1188h] BYREF
  int v129; // [rsp+88h] [rbp-1180h]
  __int128 v130; // [rsp+90h] [rbp-1178h]
  __int64 v131; // [rsp+A0h] [rbp-1168h]
  char v132; // [rsp+A8h] [rbp-1160h]
  int v133; // [rsp+ACh] [rbp-115Ch]
  void **v134; // [rsp+B0h] [rbp-1158h]
  __int64 v135; // [rsp+C0h] [rbp-1148h]
  __m128 v136; // [rsp+C8h] [rbp-1140h] BYREF
  char *v137; // [rsp+D8h] [rbp-1130h]
  __int64 v138; // [rsp+E0h] [rbp-1128h]
  char v139; // [rsp+E8h] [rbp-1120h] BYREF
  char *v140; // [rsp+108h] [rbp-1100h]
  __int64 v141; // [rsp+110h] [rbp-10F8h]
  __int128 v142; // [rsp+118h] [rbp-10F0h] BYREF
  void *ptr; // [rsp+128h] [rbp-10E0h]
  __m128i v144; // [rsp+130h] [rbp-10D8h] BYREF
  __m128i v145[2]; // [rsp+140h] [rbp-10C8h] BYREF
  char v146; // [rsp+160h] [rbp-10A8h]
  __int64 v147[4]; // [rsp+168h] [rbp-10A0h] BYREF
  char v148; // [rsp+188h] [rbp-1080h]
  __int64 v149[4]; // [rsp+190h] [rbp-1078h] BYREF
  void *v150; // [rsp+1B0h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+1B8h] [rbp-1050h]
  _BYTE v152[4160]; // [rsp+1C8h] [rbp-1040h] BYREF

  v124 = a1;
  v150 = v152;
  v137 = &v139;
  v123 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v138 = 0x400000000LL;
  v136 = 0;
  v140 = (char *)&v142;
  v141 = 0;
  v142 = 0;
  v135 = 64;
  v2 = sub_A1F5F0();
  v3 = *(_DWORD *)(a1 + 792);
  ptr = v2;
  if ( !v3 )
    goto LABEL_2;
  v100 = *(_DWORD **)(v124 + 784);
  v101 = &v100[38 * *(unsigned int *)(v124 + 800)];
  if ( v100 == v101 )
    goto LABEL_2;
  while ( 1 )
  {
    v102 = v100;
    if ( *v100 != -1 )
      break;
    if ( v100[1] != -1 )
      goto LABEL_139;
LABEL_160:
    v100 += 38;
    if ( v101 == v100 )
      goto LABEL_2;
  }
  if ( *v100 == -2 && v100[1] == -2 )
    goto LABEL_160;
LABEL_139:
  if ( v101 == v100 )
    goto LABEL_2;
LABEL_143:
  v103 = *v102;
  v104 = v102[1];
  v105 = 2 * v135;
  ++HIDWORD(v135);
  if ( 4 * HIDWORD(v135) >= (unsigned int)(3 * v135) )
  {
    v112 = (char *)sub_A1F380(v105);
    v113 = ptr;
    v114 = v112;
    if ( (_DWORD)v135 )
    {
      v115 = (char *)ptr;
      v116 = (char *)ptr + 16 * (unsigned int)v135;
      do
      {
        v117 = *((_QWORD *)v115 + 1);
        if ( v117 )
        {
          do
          {
            v118 = *(_QWORD *)(v117 + 152);
            v119 = &v114[16 * ((v105 - 1LL) & *(_QWORD *)(v117 + 160))];
            *(_QWORD *)(v117 + 152) = *((_QWORD *)v119 + 1);
            *((_QWORD *)v119 + 1) = v117;
            v117 = v118;
            ++*((_DWORD *)v119 + 1);
          }
          while ( v118 );
        }
        v115 += 16;
      }
      while ( v116 != v115 );
    }
    free(v113);
    LODWORD(v135) = v105;
    ptr = v114;
  }
  v106 = (_DWORD *)sub_A270B0((__int64 *)&v136, 168, 3u);
  *v106 = v103;
  v107 = v106;
  v106 += 6;
  *(v106 - 5) = v104;
  v107[1] = v106;
  v107[2] = 0x100000000LL;
  if ( v102[4] )
    sub_A2F8F0((__int64)(v107 + 1), (__int64 *)v102 + 1);
  v107[19] = 0;
  v144.m128i_i64[0] = __PAIR64__(v104, v103);
  v108 = sub_A22530(v103, &v144.m128i_i32[1]);
  v109 = (unsigned int)v135;
  v107[20] = v108;
  v110 = (char *)ptr + 16 * (v108 & (v109 - 1));
  v107[19] = *((_QWORD *)v110 + 1);
  ++*((_DWORD *)v110 + 1);
  *((_QWORD *)v110 + 1) = v107;
  for ( i = v102 + 38; v101 != i; i += 38 )
  {
    v102 = i;
    if ( *i == -1 )
    {
      if ( i[1] != -1 )
        goto LABEL_142;
    }
    else if ( *i != -2 || i[1] != -2 )
    {
LABEL_142:
      if ( v101 != i )
        goto LABEL_143;
      break;
    }
  }
LABEL_2:
  v129 = 2;
  v4 = 1;
  v130 = 0;
  v132 = 0;
  v128 = &off_2BEBEE0;
  v133 = 1;
  v134 = &v150;
  v131 = 0;
  sub_A1F700(&v128);
  v144.m128i_i32[0] = 0;
  sub_227BF10(&v128, &v144, 4);
  v126 = &v128;
  v127 = 1;
  if ( HIDWORD(v135) <= 2 || (unsigned int)(4 * HIDWORD(v135)) <= 2 )
  {
    if ( (_DWORD)v135 != 1 )
      goto LABEL_130;
    goto LABEL_4;
  }
  _BitScanReverse(&v92, 4 * HIDWORD(v135) / 3u);
  v4 = 1 << (32 - (v92 ^ 0x1F));
  if ( (_DWORD)v135 == v4 )
  {
LABEL_4:
    v5 = (char *)ptr;
    goto LABEL_5;
  }
LABEL_130:
  v93 = (char *)sub_A1F380(v4);
  v94 = ptr;
  v5 = v93;
  if ( (_DWORD)v135 )
  {
    v95 = (char *)ptr;
    v96 = (char *)ptr + 16 * (unsigned int)v135;
    do
    {
      v97 = *((_QWORD *)v95 + 1);
      if ( v97 )
      {
        do
        {
          v98 = *(_QWORD *)(v97 + 152);
          v99 = &v5[16 * ((v4 - 1LL) & *(_QWORD *)(v97 + 160))];
          *(_QWORD *)(v97 + 152) = *((_QWORD *)v99 + 1);
          *((_QWORD *)v99 + 1) = v97;
          v97 = v98;
          ++*((_DWORD *)v99 + 1);
        }
        while ( v98 );
      }
      v95 += 16;
    }
    while ( v96 != v95 );
  }
  free(v94);
  LODWORD(v135) = v4;
  ptr = v5;
LABEL_5:
  LODWORD(v120) = 0;
  v6 = &v128;
  v7 = v5;
  while ( 2 )
  {
    v8 = &v7[16 * (unsigned int)v120];
    if ( *((_QWORD *)v8 + 1) )
    {
      v9 = sub_227AEE0(v6);
      v10 = *((_WORD *)v8 + 2);
      *(_DWORD *)v8 = v9 + v131 - v130;
      sub_A20860((__int64 *)&v126, v10);
      v11 = *((_QWORD *)v8 + 1);
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v11 + 160);
          if ( v127 != 1 )
            v12 = _byteswap_uint64(v12);
          v144.m128i_i64[0] = v12;
          sub_227BF10(v126, &v144, 8);
          v13 = *(_QWORD *)(v11 + 8);
          v14 = v13 + ((unsigned __int64)*(unsigned int *)(v11 + 16) << 7);
          if ( v13 == v14 )
          {
            v21 = 2;
          }
          else
          {
            v15 = 2;
            do
            {
              v16 = ((char)HIBYTE(*(_QWORD *)v13) >> 31) & 4;
              v17 = v16 + 5;
              v18 = v16 + 9;
              if ( (BYTE3(*(_QWORD *)(v13 + 8)) & 0x80u) != 0 )
                v17 = v18;
              v19 = *(_QWORD *)(v13 + 104);
              if ( (HIBYTE(*(_QWORD *)(v13 + 8)) & 0x80u) != 0 )
                v17 += 4;
              v20 = *(_DWORD *)(v13 + 24) + *(_QWORD *)(v13 + 64);
              v13 += 128;
              v15 += v20 + v19 + 9 + v17;
            }
            while ( v14 != v13 );
            v21 = v15;
          }
          v125 = 8;
          v144.m128i_i64[0] = (__int64)v6;
          v144.m128i_i32[2] = 1;
          sub_227BF10(v6, &v125, 2);
          sub_A20860(v144.m128i_i64, v21);
          v22 = *(_DWORD *)(v11 + 4);
          v144.m128i_i32[0] = *(_DWORD *)v11;
          sub_227BF10(v6, &v144, 4);
          v144.m128i_i32[0] = v22;
          sub_227BF10(v6, &v144, 4);
          v23 = *(unsigned int **)(v11 + 8);
          v24 = *(unsigned int *)(v11 + 16);
          v25 = v24 << 7;
          v26 = &v23[32 * v24];
          if ( v23 != v26 )
            break;
LABEL_46:
          v144.m128i_i16[0] = v24;
          sub_227BF10(v6, &v144, 2);
          v56 = *(_QWORD *)(v11 + 8);
          v57 = v56 + ((unsigned __int64)*(unsigned int *)(v11 + 16) << 7);
          while ( v57 != v56 )
          {
            sub_A1F510((__int64)v6, v56);
            sub_A20890((__int64)v6, v56 + 16);
            v144.m128i_i16[0] = 0;
            v58 = *(_BYTE *)(v56 + 88);
            if ( (v58 & 1) != 0 )
            {
              v144.m128i_i8[0] = 1;
              v144.m128i_i8[1] = (v58 >> 1) & 3;
            }
            v56 += 128;
            sub_227BF10(v6, &v144, 2);
            v125 = *(_QWORD *)(v56 - 24);
            sub_227BF10(v6, &v125, 2);
            sub_227BF10(v6, *(_QWORD *)(v56 - 32), *(_QWORD *)(v56 - 24));
          }
          v11 = *(_QWORD *)(v11 + 152);
          if ( !v11 )
            goto LABEL_51;
        }
        v27 = (__m128i *)&v23[32 * v24];
        _BitScanReverse64(&v28, v25 >> 7);
        sub_A390E0(*(__m128i **)(v11 + 8), v27, 2LL * (int)(63 - (v28 ^ 0x3F)));
        if ( (unsigned __int64)v25 <= 0x800 )
        {
          sub_A2B6F0(v23, v26);
        }
        else
        {
          sub_A2B6F0(v23, v23 + 512);
          if ( v26 != v23 + 512 )
          {
            v29 = (const __m128i *)(v23 + 516);
            v121 = v11;
            v122 = v6;
            while ( 1 )
            {
              v38 = (__m128i *)&v29[-2];
              v39 = &v29[-5].m128i_u64[1];
              v144 = _mm_loadu_si128(v29 - 1);
              sub_A0A1C0(v145, v29);
              while ( 1 )
              {
                v40 = v38[-7].m128i_u32[0];
                v41 = v38 - 7;
                if ( v40 <= v144.m128i_i32[0] )
                {
                  v30 = v38[-7].m128i_i32[2] & 0x7FFFFFFF;
                  v31 = v38[-7].m128i_i32[1] & 0x7FFFFFFF;
                  v32 = v144.m128i_i32[2] & 0x7FFFFFFF;
                  v33 = v144.m128i_i32[1] & 0x7FFFFFFF;
                  if ( v40 != v144.m128i_i32[0]
                    || v31 <= v33
                    && (v31 != v33
                     || v30 <= v32
                     && (v30 != v32 || (v38[-7].m128i_i32[3] & 0x7FFFFFFFu) <= (v144.m128i_i32[3] & 0x7FFFFFFFu))) )
                  {
                    break;
                  }
                }
                v42 = (__m128i *)v38[-6].m128i_i64[0];
                v43 = (__m128i *)v38[2].m128i_i64[0];
                v38[1] = _mm_loadu_si128(v38 - 7);
                if ( v42 == &v38[-5] )
                {
                  v61 = v38[-6].m128i_u64[1];
                  if ( v61 )
                  {
                    if ( v61 == 1 )
                      v43->m128i_i8[0] = v38[-5].m128i_i8[0];
                    else
                      memcpy(v43, v42, v61);
                    v61 = v38[-6].m128i_u64[1];
                    v43 = (__m128i *)v38[2].m128i_i64[0];
                  }
                  v38[2].m128i_i64[1] = v61;
                  v43->m128i_i8[v61] = 0;
                  v43 = (__m128i *)v38[-6].m128i_i64[0];
                }
                else
                {
                  if ( v43 == &v38[3] )
                  {
                    v60 = v38[-6].m128i_i64[1];
                    v38[2].m128i_i64[0] = (__int64)v42;
                    v38[2].m128i_i64[1] = v60;
                    v38[3].m128i_i64[0] = v38[-5].m128i_i64[0];
                  }
                  else
                  {
                    v44 = v38[-6].m128i_i64[1];
                    v45 = v38[3].m128i_i64[0];
                    v38[2].m128i_i64[0] = (__int64)v42;
                    v38[2].m128i_i64[1] = v44;
                    v38[3].m128i_i64[0] = v38[-5].m128i_i64[0];
                    if ( v43 )
                    {
                      v38[-6].m128i_i64[0] = (__int64)v43;
                      v38[-5].m128i_i64[0] = v45;
                      goto LABEL_35;
                    }
                  }
                  v38[-6].m128i_i64[0] = (__int64)v38[-5].m128i_i64;
                  v43 = v38 - 5;
                }
LABEL_35:
                v38[-6].m128i_i64[1] = 0;
                v43->m128i_i8[0] = 0;
                v46 = v41[3].m128i_i8[0] & 1 | v38[4].m128i_i8[0] & 0xFE;
                v38[4].m128i_i8[0] = v46;
                v47 = v41[3].m128i_i8[0] & 2 | v46 & 0xFD;
                v38[4].m128i_i8[0] = v47;
                v48 = v41[3].m128i_i8[0] & 4 | v47 & 0xFB;
                v38[4].m128i_i8[0] = v48;
                v38[4].m128i_i8[0] = v41[3].m128i_i8[0] & 8 | v48 & 0xF7;
                v49 = (unsigned __int64 *)v38[-4].m128i_i64[1];
                v50 = (unsigned __int64 *)v38[4].m128i_i64[1];
                if ( v49 == v39 )
                {
                  v59 = v38[-3].m128i_u64[0];
                  if ( v59 )
                  {
                    if ( v59 == 1 )
                      *(_BYTE *)v50 = v38[-3].m128i_i8[8];
                    else
                      memcpy(v50, v39, v59);
                    v59 = v38[-3].m128i_u64[0];
                    v50 = (unsigned __int64 *)v38[4].m128i_i64[1];
                  }
                  v38[5].m128i_i64[0] = v59;
                  *((_BYTE *)v50 + v59) = 0;
                  v50 = (unsigned __int64 *)v38[-4].m128i_i64[1];
                }
                else
                {
                  if ( v50 == &v38[5].m128i_u64[1] )
                  {
                    v38[4].m128i_i64[1] = (__int64)v49;
                    v38[5].m128i_i64[0] = v38[-3].m128i_i64[0];
                    v38[5].m128i_i64[1] = v38[-3].m128i_i64[1];
                  }
                  else
                  {
                    v38[4].m128i_i64[1] = (__int64)v49;
                    v51 = v38[5].m128i_i64[1];
                    v38[5].m128i_i64[0] = v38[-3].m128i_i64[0];
                    v38[5].m128i_i64[1] = v38[-3].m128i_i64[1];
                    if ( v50 )
                    {
                      v38[-4].m128i_i64[1] = (__int64)v50;
                      v38[-3].m128i_i64[1] = v51;
                      goto LABEL_39;
                    }
                  }
                  v38[-4].m128i_i64[1] = (__int64)v39;
                  v50 = v39;
                }
LABEL_39:
                v38[-3].m128i_i64[0] = 0;
                *(_BYTE *)v50 = 0;
                v52 = v41[5].m128i_i8[8] & 1 | v38[6].m128i_i8[8] & 0xFE;
                v38[6].m128i_i8[8] = v52;
                v38[6].m128i_i8[8] = v41[5].m128i_i8[8] & 6 | v52 & 0xF9;
                v53 = (__m128i *)v38[-1].m128i_i64[0];
                v54 = (__m128i *)v38[7].m128i_i64[0];
                if ( v53 == v38 )
                {
                  v62 = v38[-1].m128i_u64[1];
                  if ( v62 )
                  {
                    if ( v62 == 1 )
                      v54->m128i_i8[0] = v38->m128i_i8[0];
                    else
                      memcpy(v54, v38, v62);
                    v62 = v38[-1].m128i_u64[1];
                    v54 = (__m128i *)v38[7].m128i_i64[0];
                  }
                  v38[7].m128i_i64[1] = v62;
                  v54->m128i_i8[v62] = 0;
                  v54 = (__m128i *)v38[-1].m128i_i64[0];
                }
                else
                {
                  if ( v54 == &v38[8] )
                  {
                    v38[7].m128i_i64[0] = (__int64)v53;
                    v38[7].m128i_i64[1] = v38[-1].m128i_i64[1];
                    v38[8].m128i_i64[0] = v38->m128i_i64[0];
                  }
                  else
                  {
                    v38[7].m128i_i64[0] = (__int64)v53;
                    v55 = v38[8].m128i_i64[0];
                    v38[7].m128i_i64[1] = v38[-1].m128i_i64[1];
                    v38[8].m128i_i64[0] = v38->m128i_i64[0];
                    if ( v54 )
                    {
                      v38[-1].m128i_i64[0] = (__int64)v54;
                      v38->m128i_i64[0] = v55;
                      goto LABEL_43;
                    }
                  }
                  v38[-1].m128i_i64[0] = (__int64)v38;
                  v54 = v38;
                }
LABEL_43:
                v38[-1].m128i_i64[1] = 0;
                v39 -= 16;
                v38 -= 8;
                v54->m128i_i8[0] = 0;
              }
              v29 += 8;
              v38[1] = _mm_load_si128(&v144);
              sub_A0AAD0((__int64)v38[2].m128i_i64, v145);
              v34 = v146 & 1 | v38[4].m128i_i8[0] & 0xFE;
              v38[4].m128i_i8[0] = v34;
              v35 = v146 & 2 | v34 & 0xFD;
              v38[4].m128i_i8[0] = v35;
              v36 = v146 & 4 | v35 & 0xFB;
              v38[4].m128i_i8[0] = v36;
              v38[4].m128i_i8[0] = v146 & 8 | v36 & 0xF7;
              sub_A0AAD0((__int64)&v38[4].m128i_i64[1], v147);
              v37 = v148 & 1 | v38[6].m128i_i8[8] & 0xFE;
              v38[6].m128i_i8[8] = v37;
              v38[6].m128i_i8[8] = v148 & 6 | v37 & 0xF9;
              sub_A0AAD0((__int64)v38[7].m128i_i64, v149);
              sub_A09CE0((__int64)v145);
              if ( v26 + 4 == (unsigned int *)v29 )
              {
                v11 = v121;
                v6 = v122;
                LODWORD(v24) = *(_DWORD *)(v121 + 16);
                goto LABEL_46;
              }
            }
          }
        }
        LODWORD(v24) = *(_DWORD *)(v11 + 16);
        goto LABEL_46;
      }
    }
LABEL_51:
    LODWORD(v120) = (_DWORD)v120 + 1;
    if ( (unsigned int)v135 > (unsigned int)v120 )
    {
      v7 = (char *)ptr;
      continue;
    }
    break;
  }
  v63 = sub_227AEE0(v6);
  v64 = (unsigned int)(v63 + v131 - v130);
  v65 = (v64 + 3) & 0xFFFFFFFC;
  v66 = ((v64 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v64 - 1;
  if ( ((v64 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v64 )
  {
    do
    {
      --v66;
      v144.m128i_i8[0] = 0;
      sub_227BF10(v126, &v144, 1);
    }
    while ( v66 != -1 );
  }
  sub_A20800((__int64)v126, v135, v127);
  sub_A20800((__int64)v126, HIDWORD(v135), v127);
  if ( (_DWORD)v135 )
  {
    v67 = 0;
    do
    {
      v68 = v67++;
      sub_A20800((__int64)v126, *((_DWORD *)ptr + 4 * v68), v127);
    }
    while ( (unsigned int)v135 > v67 );
  }
  LODWORD(v126) = v65;
  v128 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(v6);
  free(ptr);
  v69 = v137;
  v70 = (unsigned int)v138;
  v120 = &v137[8 * (unsigned int)v138];
  if ( v137 != v120 )
  {
    v71 = v137;
    while ( 1 )
    {
      v72 = (unsigned int)((v69 - v71) >> 3) >> 7;
      v73 = 4096LL << v72;
      if ( v72 >= 0x1E )
        v73 = 0x40000000000LL;
      v74 = *(_QWORD *)v69 + v73;
      v75 = (*(_QWORD *)v69 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)v69 == *(_QWORD *)&v71[8 * v70 - 8] )
        v74 = v136.m128_u64[0];
      v76 = v75 + 168;
      if ( v75 + 168 > v74 )
      {
LABEL_101:
        v69 += 8;
        if ( v120 == v69 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v77 = *(_QWORD **)(v76 - 160);
            v78 = &v77[16 * (unsigned __int64)*(unsigned int *)(v76 - 152)];
            if ( v77 != v78 )
            {
              do
              {
                while ( 1 )
                {
                  v78 -= 16;
                  v79 = (_QWORD *)v78[12];
                  if ( v79 != v78 + 14 )
                    operator delete(v79);
                  v80 = (_QWORD *)v78[7];
                  if ( v80 != v78 + 9 )
                    operator delete(v80);
                  v81 = (_QWORD *)v78[2];
                  if ( v81 == v78 + 4 )
                    break;
                  operator delete(v81);
                  if ( v77 == v78 )
                    goto LABEL_98;
                }
              }
              while ( v77 != v78 );
LABEL_98:
              v78 = *(_QWORD **)(v76 - 168 + 8);
            }
            if ( v78 == (_QWORD *)(v76 - 144) )
              break;
            v76 += 168LL;
            free(v78);
            if ( v74 < v76 )
              goto LABEL_101;
          }
          v76 += 168LL;
        }
        while ( v76 <= v74 );
        v69 += 8;
        if ( v120 == v69 )
          break;
      }
      v71 = v137;
      v70 = (unsigned int)v138;
    }
  }
  v82 = v140;
  v120 = &v140[16 * (unsigned int)v141];
  if ( v140 != v120 )
  {
    do
    {
      while ( 1 )
      {
        v83 = *(_QWORD *)v82 + *((_QWORD *)v82 + 1);
        v84 = ((*(_QWORD *)v82 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 168;
        if ( v83 >= v84 )
          break;
LABEL_117:
        v82 += 16;
        if ( v120 == v82 )
          goto LABEL_118;
      }
      do
      {
        while ( 1 )
        {
          v85 = *(_QWORD **)(v84 - 160);
          v86 = (unsigned __int64)*(unsigned int *)(v84 - 152) << 7;
          v87 = (_QWORD *)((char *)v85 + v86);
          if ( v85 != (_QWORD *)((char *)v85 + v86) )
          {
            do
            {
              while ( 1 )
              {
                v87 -= 16;
                v88 = (_QWORD *)v87[12];
                if ( v88 != v87 + 14 )
                  operator delete(v88);
                v89 = (_QWORD *)v87[7];
                if ( v89 != v87 + 9 )
                  operator delete(v89);
                v90 = (_QWORD *)v87[2];
                if ( v90 == v87 + 4 )
                  break;
                operator delete(v90);
                if ( v85 == v87 )
                  goto LABEL_114;
              }
            }
            while ( v85 != v87 );
LABEL_114:
            v87 = *(_QWORD **)(v84 - 168 + 8);
          }
          if ( v87 == (_QWORD *)(v84 - 144) )
            break;
          v84 += 168LL;
          free(v87);
          if ( v83 < v84 )
            goto LABEL_117;
        }
        v84 += 168LL;
      }
      while ( v83 >= v84 );
      v82 += 16;
    }
    while ( v120 != v82 );
  }
LABEL_118:
  sub_A24B10(&v136);
  sub_9B7090((__int64)&v136);
  v144.m128i_i64[0] = v123;
  v144.m128i_i32[2] = sub_A246B0(v123);
  sub_A26A30((__int64)&v144, v124 + 40, (unsigned int *)&v126, (__int64)&v150);
  if ( v150 != v152 )
    free(v150);
  return sub_A25550(v123);
}
