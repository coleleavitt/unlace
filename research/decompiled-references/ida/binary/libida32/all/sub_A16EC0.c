_QWORD *__fastcall sub_A16EC0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // eax
  char *v6; // rbx
  char *j; // rax
  char *v8; // rbx
  int v9; // eax
  __int16 v10; // si
  __int64 k; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rcx
  int m; // edx
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // esi
  __int16 v24; // bp
  __int32 v25; // ebp
  __int64 v26; // rdx
  unsigned int *v27; // rbp
  int v28; // eax
  __int64 v29; // r13
  unsigned int *v30; // r14
  unsigned __int64 v31; // rax
  const __m128i *v32; // r13
  unsigned int v33; // esi
  unsigned int v34; // r8d
  unsigned __int32 v35; // ecx
  unsigned __int32 v36; // edi
  __int64 m128i_i64; // rbp
  unsigned __int32 v38; // r10d
  __int64 v39; // rdi
  __int64 v40; // rbp
  __int64 v41; // r13
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rax
  int v45; // ebx
  unsigned __int64 v46; // rbp
  unsigned int v47; // ebp
  __int64 v48; // rax
  char *v49; // r13
  __int64 v50; // rdx
  char *v51; // rax
  unsigned int v52; // ecx
  __int64 v53; // rbp
  unsigned __int64 v54; // rbx
  _QWORD *v55; // r12
  _QWORD *v56; // rbp
  _QWORD *v57; // rdi
  _QWORD *v58; // r15
  _QWORD *v59; // r14
  char *v60; // rdi
  char *v61; // rdi
  _QWORD *v62; // rdi
  _QWORD *v63; // rdi
  _QWORD *v64; // rdi
  _QWORD *v65; // rdi
  __int128 *v66; // rbp
  unsigned __int64 v67; // rbx
  _QWORD *v68; // r13
  _QWORD *v69; // r12
  _QWORD *v70; // rdi
  _QWORD *v71; // r15
  _QWORD *v72; // r14
  char *v73; // rdi
  char *v74; // rdi
  _QWORD *v75; // rdi
  _QWORD *v76; // rdi
  _QWORD *v77; // rdi
  _QWORD *v78; // rdi
  char *v80; // rax
  void *v81; // rdi
  char *v82; // rsi
  char *v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  char *v86; // rax
  _DWORD *v87; // rax
  _DWORD *v88; // r13
  _DWORD *v89; // rbx
  int v90; // ebp
  unsigned int v91; // r12d
  unsigned int v92; // r9d
  unsigned __int64 v93; // r15
  int v94; // ecx
  unsigned __int64 v95; // rax
  __int64 v96; // rcx
  char *v97; // rax
  _DWORD *i; // rax
  char *v99; // r15
  void *v100; // rdi
  char *v101; // rsi
  char *v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  char *v105; // rax
  int v106; // [rsp+0h] [rbp-1238h]
  unsigned __int64 v107; // [rsp+0h] [rbp-1238h]
  unsigned __int64 v108; // [rsp+0h] [rbp-1238h]
  int v109; // [rsp+0h] [rbp-1238h]
  __int64 v110; // [rsp+8h] [rbp-1230h]
  char *v111; // [rsp+10h] [rbp-1228h]
  __int128 *v112; // [rsp+10h] [rbp-1228h]
  __int16 v115; // [rsp+5Eh] [rbp-11DAh] BYREF
  __int64 (__fastcall ***v116)(); // [rsp+60h] [rbp-11D8h] BYREF
  int v117; // [rsp+68h] [rbp-11D0h]
  __int64 (__fastcall **v118)(); // [rsp+70h] [rbp-11C8h] BYREF
  int v119; // [rsp+78h] [rbp-11C0h]
  __int128 v120; // [rsp+80h] [rbp-11B8h]
  __int64 v121; // [rsp+90h] [rbp-11A8h]
  char v122; // [rsp+98h] [rbp-11A0h]
  int v123; // [rsp+9Ch] [rbp-119Ch]
  void **v124; // [rsp+A0h] [rbp-1198h]
  __int64 v125; // [rsp+B0h] [rbp-1188h]
  __m128 v126; // [rsp+B8h] [rbp-1180h] BYREF
  char *v127; // [rsp+C8h] [rbp-1170h]
  __int64 v128; // [rsp+D0h] [rbp-1168h]
  char v129; // [rsp+D8h] [rbp-1160h] BYREF
  __int128 *v130; // [rsp+F8h] [rbp-1140h]
  __int64 v131; // [rsp+100h] [rbp-1138h]
  __int128 v132; // [rsp+108h] [rbp-1130h] BYREF
  void *ptr; // [rsp+118h] [rbp-1120h]
  __m128i v134; // [rsp+120h] [rbp-1118h] BYREF
  _BYTE v135[176]; // [rsp+130h] [rbp-1108h] BYREF
  void *v136; // [rsp+1E0h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+1E8h] [rbp-1050h]
  _BYTE v138[4160]; // [rsp+1F8h] [rbp-1040h] BYREF

  v136 = v138;
  v127 = &v129;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D50);
  v128 = 0x400000000LL;
  v126 = 0;
  v130 = &v132;
  v131 = 0;
  v132 = 0;
  v125 = 64;
  v2 = sub_9FB8B0();
  v3 = *(_DWORD *)(a1 + 816);
  ptr = v2;
  if ( !v3 )
    goto LABEL_2;
  v87 = *(_DWORD **)(a1 + 808);
  v88 = &v87[54 * *(unsigned int *)(a1 + 824)];
  if ( v87 == v88 )
    goto LABEL_2;
  while ( 1 )
  {
    v89 = v87;
    if ( *v87 != -1 )
      break;
    if ( v87[1] != -1 )
      goto LABEL_128;
LABEL_149:
    v87 += 54;
    if ( v88 == v87 )
      goto LABEL_2;
  }
  if ( *v87 == -2 && v87[1] == -2 )
    goto LABEL_149;
LABEL_128:
  if ( v88 == v87 )
    goto LABEL_2;
LABEL_132:
  v90 = *v89;
  v91 = v89[1];
  v92 = 2 * v125;
  ++HIDWORD(v125);
  if ( 4 * HIDWORD(v125) >= (unsigned int)(3 * v125) )
  {
    v109 = 2 * v125;
    v110 = v92;
    v99 = (char *)sub_9FB640(v92);
    v100 = ptr;
    if ( (_DWORD)v125 )
    {
      v101 = (char *)ptr;
      v102 = (char *)ptr + 16 * (unsigned int)v125;
      do
      {
        v103 = *((_QWORD *)v101 + 1);
        if ( v103 )
        {
          do
          {
            v104 = *(_QWORD *)(v103 + 216);
            v105 = &v99[16 * ((v110 - 1) & *(_QWORD *)(v103 + 224))];
            *(_QWORD *)(v103 + 216) = *((_QWORD *)v105 + 1);
            *((_QWORD *)v105 + 1) = v103;
            v103 = v104;
            ++*((_DWORD *)v105 + 1);
          }
          while ( v104 );
        }
        v101 += 16;
      }
      while ( v102 != v101 );
    }
    free(v100);
    ptr = v99;
    LODWORD(v125) = v109;
  }
  v93 = sub_A03370((__int64 *)&v126, 232, 3u);
  *(_DWORD *)v93 = v90;
  *(_DWORD *)(v93 + 4) = v91;
  *(_QWORD *)(v93 + 16) = 0x100000000LL;
  v94 = v89[4];
  *(_QWORD *)(v93 + 8) = v93 + 24;
  if ( v94 )
    sub_A0C650(v93 + 8, (__int64 *)v89 + 1);
  *(_QWORD *)(v93 + 216) = 0;
  v134.m128i_i64[0] = __PAIR64__(v91, v90);
  v95 = sub_9FE7F0(v90, &v134.m128i_i32[1]);
  v96 = (unsigned int)v125;
  *(_QWORD *)(v93 + 224) = v95;
  v97 = (char *)ptr + 16 * (v95 & (v96 - 1));
  *(_QWORD *)(v93 + 216) = *((_QWORD *)v97 + 1);
  ++*((_DWORD *)v97 + 1);
  *((_QWORD *)v97 + 1) = v93;
  for ( i = v89 + 54; v88 != i; i += 54 )
  {
    v89 = i;
    if ( *i == -1 )
    {
      if ( i[1] != -1 )
        goto LABEL_131;
    }
    else if ( *i != -2 || i[1] != -2 )
    {
LABEL_131:
      if ( v88 != i )
        goto LABEL_132;
      break;
    }
  }
LABEL_2:
  v119 = 2;
  v4 = 1;
  v120 = 0;
  v122 = 0;
  v118 = &off_2BC1F40;
  v123 = 1;
  v124 = &v136;
  v121 = 0;
  sub_9FB9C0(&v118);
  v134.m128i_i32[0] = 0;
  sub_22581D0(&v118, &v134, 4);
  v116 = &v118;
  v117 = 1;
  if ( HIDWORD(v125) > 2 && (unsigned int)(4 * HIDWORD(v125)) > 2 )
  {
    _BitScanReverse(&v5, 4 * HIDWORD(v125) / 3u);
    v4 = 1 << (32 - (v5 ^ 0x1F));
  }
  if ( (_DWORD)v125 == v4 )
  {
    v6 = (char *)ptr;
  }
  else
  {
    v80 = (char *)sub_9FB640(v4);
    v81 = ptr;
    v6 = v80;
    if ( (_DWORD)v125 )
    {
      v82 = (char *)ptr;
      v83 = (char *)ptr + 16 * (unsigned int)v125;
      do
      {
        v84 = *((_QWORD *)v82 + 1);
        if ( v84 )
        {
          do
          {
            v85 = *(_QWORD *)(v84 + 216);
            v86 = &v6[16 * ((v4 - 1LL) & *(_QWORD *)(v84 + 224))];
            *(_QWORD *)(v84 + 216) = *((_QWORD *)v86 + 1);
            *((_QWORD *)v86 + 1) = v84;
            v84 = v85;
            ++*((_DWORD *)v86 + 1);
          }
          while ( v85 );
        }
        v82 += 16;
      }
      while ( v83 != v82 );
    }
    free(v81);
    LODWORD(v125) = v4;
    ptr = v6;
  }
  v106 = 0;
  for ( j = v6; ; j = (char *)ptr )
  {
    v8 = &j[16 * v106];
    if ( *((_QWORD *)v8 + 1) )
    {
      v9 = sub_22571A0(&v118);
      v10 = *((_WORD *)v8 + 2);
      *(_DWORD *)v8 = v9 + v121 - v120;
      sub_9FCB20((__int64 *)&v116, v10);
      for ( k = *((_QWORD *)v8 + 1); k; k = *(_QWORD *)(k + 216) )
      {
        v12 = *(_QWORD *)(k + 224);
        if ( v117 != 1 )
          v12 = _byteswap_uint64(v12);
        v134.m128i_i64[0] = v12;
        sub_22581D0(v116, &v134, 8);
        v13 = *(_QWORD *)(k + 8);
        v14 = v13 + 192LL * *(unsigned int *)(k + 16);
        if ( v13 == v14 )
        {
          v24 = 2;
        }
        else
        {
          v15 = 2;
          do
          {
            v16 = *(_QWORD *)(v13 + 176);
            v17 = (((char)HIBYTE(*(_QWORD *)v13) >> 31) & 4) + 5;
            if ( (BYTE3(*(_QWORD *)(v13 + 8)) & 0x80u) != 0 )
              v17 = (((unsigned __int64)(char)HIBYTE(*(_QWORD *)v13) >> 32) & 4) + 9;
            v18 = *(_QWORD *)(v13 + 168);
            if ( (HIBYTE(*(_QWORD *)(v13 + 8)) & 0x80u) != 0 )
              v17 += 4;
            for ( m = *(_DWORD *)(v13 + 24) + *(_QWORD *)(v13 + 64) + 17;
                  v16 != v18;
                  m += *(_DWORD *)(v18 - 112) + v21 + v20 + 10 )
            {
              v20 = *(_QWORD *)(v18 + 88);
              v21 = *(_QWORD *)(v18 + 48);
              v18 += 120;
            }
            v22 = *(_QWORD *)(v13 + 112);
            v23 = *(_DWORD *)(v13 + 144) + v15;
            v13 += 192;
            v15 = v23 + v22 + 4 + v17 + m;
          }
          while ( v14 != v13 );
          v24 = v15;
        }
        v134.m128i_i64[0] = (__int64)&v118;
        v115 = 8;
        v134.m128i_i32[2] = 1;
        sub_22581D0(&v118, &v115, 2);
        sub_9FCB20(v134.m128i_i64, v24);
        v25 = *(_DWORD *)(k + 4);
        v134.m128i_i32[0] = *(_DWORD *)k;
        sub_22581D0(&v118, &v134, 4);
        v134.m128i_i32[0] = v25;
        sub_22581D0(&v118, &v134, 4);
        v26 = *(unsigned int *)(k + 16);
        v27 = *(unsigned int **)(k + 8);
        v28 = *(_DWORD *)(k + 16);
        v29 = 192 * v26;
        v30 = &v27[48 * v26];
        if ( v27 != v30 )
        {
          _BitScanReverse64(&v31, 0xAAAAAAAAAAAAAAABLL * (v29 >> 6));
          sub_A16B00(*(__m128i **)(k + 8), (__m128i *)&v27[48 * v26], 2LL * (int)(63 - (v31 ^ 0x3F)));
          if ( (unsigned __int64)v29 <= 0xC00 )
          {
            sub_A08940(v27, v30);
          }
          else
          {
            v32 = (const __m128i *)(v27 + 768);
            sub_A08940(v27, v27 + 768);
            if ( v30 != v27 + 768 )
            {
              do
              {
                m128i_i64 = (__int64)v32[1].m128i_i64;
                v134 = _mm_loadu_si128(v32);
                sub_9E6510((__int64)v135, (__int64)v32[1].m128i_i64);
                while ( 1 )
                {
                  v38 = *(_DWORD *)(m128i_i64 - 208);
                  if ( v38 <= v134.m128i_i32[0] )
                  {
                    v33 = *(_DWORD *)(m128i_i64 - 200) & 0x7FFFFFFF;
                    v34 = *(_DWORD *)(m128i_i64 - 204) & 0x7FFFFFFF;
                    v35 = v134.m128i_i32[2] & 0x7FFFFFFF;
                    v36 = v134.m128i_i32[1] & 0x7FFFFFFF;
                    if ( v38 != v134.m128i_i32[0]
                      || v34 <= v36
                      && (v34 != v36
                       || v33 <= v35
                       && (v33 != v35
                        || (*(_DWORD *)(m128i_i64 - 196) & 0x7FFFFFFFu) <= (v134.m128i_i32[3] & 0x7FFFFFFFu))) )
                    {
                      break;
                    }
                  }
                  v39 = m128i_i64;
                  *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 208));
                  m128i_i64 -= 192;
                  sub_9F9310(v39, m128i_i64);
                }
                v32 += 12;
                *(__m128i *)(m128i_i64 - 16) = _mm_load_si128(&v134);
                sub_9F9310(m128i_i64, (__int64)v135);
                sub_9E5FF0((__int64)v135);
              }
              while ( v30 != (unsigned int *)v32 );
            }
          }
          v28 = *(_DWORD *)(k + 16);
        }
        v134.m128i_i16[0] = v28;
        sub_22581D0(&v118, &v134, 2);
        v40 = *(_QWORD *)(k + 8);
        v41 = v40 + 192LL * *(unsigned int *)(k + 16);
        while ( v41 != v40 )
        {
          sub_9FB7D0((__int64)&v118, v40);
          v42 = v40 + 16;
          v40 += 192;
          sub_9FCE50((__int64)&v118, v42);
        }
      }
    }
    if ( (unsigned int)v125 <= ++v106 )
      break;
  }
  v43 = sub_22571A0(&v118);
  v44 = (unsigned int)(v43 + v121 - v120);
  v45 = (v44 + 3) & 0xFFFFFFFC;
  v46 = ((v44 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v44 - 1;
  if ( ((v44 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v44 )
  {
    do
    {
      --v46;
      v134.m128i_i8[0] = 0;
      sub_22581D0(v116, &v134, 1);
    }
    while ( v46 != -1 );
  }
  sub_9FCAC0((__int64)v116, v125, v117);
  sub_9FCAC0((__int64)v116, HIDWORD(v125), v117);
  if ( (_DWORD)v125 )
  {
    v47 = 0;
    do
    {
      v48 = v47++;
      sub_9FCAC0((__int64)v116, *((_DWORD *)ptr + 4 * v48), v117);
    }
    while ( (unsigned int)v125 > v47 );
  }
  LODWORD(v116) = v45;
  v118 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v118);
  free(ptr);
  v49 = v127;
  v50 = (unsigned int)v128;
  v111 = &v127[8 * (unsigned int)v128];
  if ( v127 != v111 )
  {
    v51 = v127;
    while ( 1 )
    {
      v52 = (unsigned int)((v49 - v51) >> 3) >> 7;
      v53 = 4096LL << v52;
      if ( v52 >= 0x1E )
        v53 = 0x40000000000LL;
      v54 = (*(_QWORD *)v49 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      v107 = *(_QWORD *)v49 + v53;
      if ( *(_QWORD *)v49 == *(_QWORD *)&v51[8 * v50 - 8] )
        v107 = v126.m128_u64[0];
      while ( 1 )
      {
        v54 += 232LL;
        if ( v54 > v107 )
          break;
        while ( 1 )
        {
          v55 = *(_QWORD **)(v54 - 224);
          v56 = &v55[24 * *(unsigned int *)(v54 - 216)];
          if ( v55 != v56 )
          {
            do
            {
              while ( 1 )
              {
                v56 -= 24;
                v57 = (_QWORD *)v56[21];
                v58 = (_QWORD *)v56[22];
                v59 = v57;
                if ( v58 != v57 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v60 = (char *)v59[10];
                      if ( v60 != (char *)(v59 + 12) )
                        operator delete(v60);
                      v61 = (char *)v59[5];
                      if ( v61 != (char *)(v59 + 7) )
                        operator delete(v61);
                      if ( (_QWORD *)*v59 == v59 + 2 )
                        break;
                      operator delete((void *)*v59);
                      v59 += 15;
                      if ( v59 == v58 )
                        goto LABEL_64;
                    }
                    v59 += 15;
                  }
                  while ( v58 != v59 );
LABEL_64:
                  v57 = (_QWORD *)v56[21];
                }
                if ( v57 )
                  operator delete(v57);
                v62 = (_QWORD *)v56[17];
                if ( v62 != v56 + 19 )
                  operator delete(v62);
                v63 = (_QWORD *)v56[13];
                if ( v63 != v56 + 15 )
                  operator delete(v63);
                v64 = (_QWORD *)v56[7];
                if ( v64 != v56 + 9 )
                  operator delete(v64);
                v65 = (_QWORD *)v56[2];
                if ( v65 == v56 + 4 )
                  break;
                operator delete(v65);
                if ( v55 == v56 )
                  goto LABEL_75;
              }
            }
            while ( v55 != v56 );
LABEL_75:
            v56 = *(_QWORD **)(v54 - 232 + 8);
          }
          if ( v56 == (_QWORD *)(v54 - 208) )
            break;
          v54 += 232LL;
          free(v56);
          if ( v107 < v54 )
            goto LABEL_78;
        }
      }
LABEL_78:
      v49 += 8;
      if ( v111 == v49 )
        break;
      v51 = v127;
      v50 = (unsigned int)v128;
    }
  }
  v66 = v130;
  v112 = &v130[(unsigned int)v131];
  if ( v130 != v112 )
  {
    do
    {
      while ( 1 )
      {
        v108 = *(_QWORD *)v66 + *((_QWORD *)v66 + 1);
        v67 = ((*(_QWORD *)v66 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 232;
        if ( v108 >= v67 )
          break;
LABEL_108:
        if ( v112 == ++v66 )
          goto LABEL_109;
      }
      do
      {
        while ( 1 )
        {
          v68 = *(_QWORD **)(v67 - 224);
          v69 = &v68[24 * *(unsigned int *)(v67 - 216)];
          if ( v68 != v69 )
          {
            do
            {
              while ( 1 )
              {
                v69 -= 24;
                v70 = (_QWORD *)v69[21];
                v71 = (_QWORD *)v69[22];
                v72 = v70;
                if ( v71 != v70 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v73 = (char *)v72[10];
                      if ( v73 != (char *)(v72 + 12) )
                        operator delete(v73);
                      v74 = (char *)v72[5];
                      if ( v74 != (char *)(v72 + 7) )
                        operator delete(v74);
                      if ( (_QWORD *)*v72 == v72 + 2 )
                        break;
                      operator delete((void *)*v72);
                      v72 += 15;
                      if ( v72 == v71 )
                        goto LABEL_94;
                    }
                    v72 += 15;
                  }
                  while ( v71 != v72 );
LABEL_94:
                  v70 = (_QWORD *)v69[21];
                }
                if ( v70 )
                  operator delete(v70);
                v75 = (_QWORD *)v69[17];
                if ( v75 != v69 + 19 )
                  operator delete(v75);
                v76 = (_QWORD *)v69[13];
                if ( v76 != v69 + 15 )
                  operator delete(v76);
                v77 = (_QWORD *)v69[7];
                if ( v77 != v69 + 9 )
                  operator delete(v77);
                v78 = (_QWORD *)v69[2];
                if ( v78 == v69 + 4 )
                  break;
                operator delete(v78);
                if ( v68 == v69 )
                  goto LABEL_105;
              }
            }
            while ( v68 != v69 );
LABEL_105:
            v69 = *(_QWORD **)(v67 - 232 + 8);
          }
          if ( v69 == (_QWORD *)(v67 - 208) )
            break;
          v67 += 232LL;
          free(v69);
          if ( v67 > v108 )
            goto LABEL_108;
        }
        v67 += 232LL;
      }
      while ( v108 >= v67 );
      ++v66;
    }
    while ( v112 != v66 );
  }
LABEL_109:
  sub_A00DD0(&v126);
  sub_993350((__int64)&v126);
  v134.m128i_i64[0] = a2;
  v134.m128i_i32[2] = sub_A00970(a2);
  sub_A02CF0((__int64)&v134, a1 + 40, (unsigned int *)&v116, (__int64)&v136);
  if ( v136 != v138 )
    free(v136);
  return sub_A01810(a2);
}

