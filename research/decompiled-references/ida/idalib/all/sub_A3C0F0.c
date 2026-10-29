_QWORD *__fastcall sub_A3C0F0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // rbx
  int v4; // esi
  int *v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int *v7; // r13
  int *v8; // rdx
  unsigned int *v9; // r14
  int v10; // edx
  unsigned int v11; // r15d
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  char *v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // ebp
  char *v20; // rbx
  char *i; // rax
  char *v22; // rbx
  int v23; // eax
  __int16 v24; // si
  __int64 j; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // esi
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  __int16 v34; // bx
  unsigned int *v35; // rbp
  unsigned int v36; // edx
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  const __m128i *v39; // r12
  __m128i *v40; // rbx
  unsigned __int64 *v41; // r13
  unsigned __int32 v42; // r10d
  __int8 *v43; // r14
  unsigned int v44; // esi
  unsigned int v45; // edx
  unsigned __int32 v46; // ecx
  unsigned __int32 v47; // eax
  __int8 v48; // al
  __int8 v49; // al
  __int8 v50; // al
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rsi
  int v54; // ecx
  unsigned __int64 *v55; // rax
  __m128i *v56; // rdi
  __int64 v57; // rdx
  __int8 v58; // al
  __int8 v59; // al
  __int8 v60; // al
  __m128i *v61; // rax
  __m128i *v62; // rdi
  __int64 v63; // rdx
  size_t v64; // rdx
  size_t v65; // rdx
  char *v66; // rax
  void *v67; // rdi
  char *v68; // r12
  char *v69; // rax
  char *v70; // r11
  __int64 v71; // rcx
  __int64 v72; // rsi
  char *v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  __int32 v76; // ebx
  unsigned __int64 v77; // rbp
  unsigned int v78; // ebp
  __int64 v79; // rax
  char *v80; // rax
  __int64 v81; // rsi
  char *v82; // r13
  unsigned int v83; // ecx
  __int64 v84; // rbp
  unsigned __int64 v85; // rbp
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // r14
  _QWORD *v88; // rbx
  _QWORD *v89; // r15
  _QWORD *v90; // rdi
  _QWORD *v91; // rdi
  __int128 *v92; // r13
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // r14
  _QWORD *v95; // rbx
  _QWORD *v96; // r15
  _QWORD *v97; // rdi
  _QWORD *v98; // rdi
  unsigned int v100; // eax
  char *v101; // rax
  void *v102; // rdi
  char *v103; // r8
  char *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  char *v107; // rax
  unsigned __int64 v108; // [rsp+8h] [rbp-11E0h]
  char *v109; // [rsp+8h] [rbp-11E0h]
  __int128 *v110; // [rsp+8h] [rbp-11E0h]
  unsigned int *v111; // [rsp+10h] [rbp-11D8h]
  int v112; // [rsp+2Ch] [rbp-11BCh]
  __int64 v113; // [rsp+30h] [rbp-11B8h]
  __int16 v116; // [rsp+6Eh] [rbp-117Ah] BYREF
  __int64 (__fastcall ***v117)(); // [rsp+70h] [rbp-1178h] BYREF
  int v118; // [rsp+78h] [rbp-1170h]
  __int64 (__fastcall **v119)(); // [rsp+80h] [rbp-1168h] BYREF
  int v120; // [rsp+88h] [rbp-1160h]
  __int128 v121; // [rsp+90h] [rbp-1158h]
  __int64 v122; // [rsp+A0h] [rbp-1148h]
  char v123; // [rsp+A8h] [rbp-1140h]
  int v124; // [rsp+ACh] [rbp-113Ch]
  void **v125; // [rsp+B0h] [rbp-1138h]
  __m128i v126; // [rsp+C0h] [rbp-1128h] BYREF
  void *v127[2]; // [rsp+D0h] [rbp-1118h] BYREF
  __int64 v128; // [rsp+E0h] [rbp-1108h] BYREF
  char v129; // [rsp+F0h] [rbp-10F8h]
  void *v130; // [rsp+F8h] [rbp-10F0h] BYREF
  __int64 v131; // [rsp+108h] [rbp-10E0h] BYREF
  __int64 v132; // [rsp+120h] [rbp-10C8h] BYREF
  __m128 v133; // [rsp+128h] [rbp-10C0h] BYREF
  char *v134; // [rsp+138h] [rbp-10B0h]
  __int64 v135; // [rsp+140h] [rbp-10A8h]
  char v136; // [rsp+148h] [rbp-10A0h] BYREF
  __int128 *v137; // [rsp+168h] [rbp-1080h]
  __int64 v138; // [rsp+170h] [rbp-1078h]
  __int128 v139; // [rsp+178h] [rbp-1070h] BYREF
  void *ptr; // [rsp+188h] [rbp-1060h]
  void *v141; // [rsp+190h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+198h] [rbp-1050h]
  _BYTE v143[4160]; // [rsp+1A8h] [rbp-1040h] BYREF

  v141 = v143;
  v134 = &v136;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D90);
  v135 = 0x400000000LL;
  v133 = 0;
  v137 = &v139;
  v138 = 0;
  v139 = 0;
  v132 = 64;
  v2 = sub_A1F5F0();
  v3 = a1 + 832;
  v4 = *(_DWORD *)(a1 + 840);
  ptr = v2;
  if ( v4 )
  {
    sub_A249F0(
      (__m128 *)&v126,
      *(int **)(a1 + 832),
      (int *)(*(_QWORD *)(a1 + 832) + 112LL * *(unsigned int *)(a1 + 848)),
      v3,
      0);
  }
  else
  {
    v5 = (int *)(*(_QWORD *)(a1 + 832) + 112LL * *(unsigned int *)(a1 + 848));
    sub_A249F0((__m128 *)&v126, v5, v5, v3, 1);
  }
  v6 = v126.m128i_u64[1];
  v7 = (unsigned int *)v126.m128i_i64[0];
  v8 = (int *)(*(_QWORD *)(a1 + 832) + 112LL * *(unsigned int *)(a1 + 848));
  sub_A249F0((__m128 *)&v126, v8, v8, v3, 1);
  v108 = v126.m128i_i64[0];
  if ( (unsigned int *)v126.m128i_i64[0] != v7 )
  {
    v9 = (unsigned int *)v6;
    v10 = v132;
    do
    {
      v11 = 2 * v10;
      v12 = *v7;
      ++HIDWORD(v132);
      if ( 4 * HIDWORD(v132) >= (unsigned int)(3 * v10) )
      {
        v66 = (char *)sub_A1F380(v11);
        v67 = ptr;
        v68 = v66;
        if ( (_DWORD)v132 )
        {
          v69 = (char *)ptr;
          v70 = (char *)ptr + 16 * (unsigned int)v132;
          do
          {
            v71 = *((_QWORD *)v69 + 1);
            if ( v71 )
            {
              do
              {
                v72 = *(_QWORD *)(v71 + 112);
                v73 = &v68[16 * ((v11 - 1LL) & *(_QWORD *)(v71 + 120))];
                *(_QWORD *)(v71 + 112) = *((_QWORD *)v73 + 1);
                *((_QWORD *)v73 + 1) = v71;
                v71 = v72;
                ++*((_DWORD *)v73 + 1);
              }
              while ( v72 );
            }
            v69 += 16;
          }
          while ( v70 != v69 );
        }
        free(v67);
        LODWORD(v132) = v11;
        ptr = v68;
      }
      v13 = sub_A270B0((__int64 *)&v133, 128, 3u);
      *(_DWORD *)v13 = v12;
      v14 = v13;
      *(_QWORD *)(v13 + 8) = v13 + 24;
      *(_QWORD *)(v13 + 16) = 0x100000000LL;
      if ( v7[4] )
        sub_A25B10(v13 + 8, (__int64)(v7 + 2));
      v10 = v132;
      v15 = (unsigned int)v132 - 1LL;
      v16 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL
             * (((0x9DDFEA08EB382D69LL * (8 * v12 - 0xAE502812AA7333LL)) >> 47)
              ^ (0x9DDFEA08EB382D69LL * (8 * v12 - 0xAE502812AA7333LL)))) >> 47)
           ^ (0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (8 * v12 - 0xAE502812AA7333LL)) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (8 * v12 - 0xAE502812AA7333LL)))));
      *(_QWORD *)(v14 + 120) = v16;
      v17 = (char *)ptr + 16 * (v15 & v16);
      *(_QWORD *)(v14 + 112) = *((_QWORD *)v17 + 1);
      ++*((_DWORD *)v17 + 1);
      *((_QWORD *)v17 + 1) = v14;
      if ( v7 + 28 != v9 )
      {
        if ( v7[28] < 0xFFFFFFFE )
        {
          v7 += 28;
          continue;
        }
        v18 = v7 + 56;
        while ( 1 )
        {
          v7 = v18;
          if ( v18 == v9 )
            break;
          v18 += 28;
          if ( *v7 < 0xFFFFFFFE )
            goto LABEL_14;
        }
      }
      v7 = v9;
LABEL_14:
      ;
    }
    while ( (unsigned int *)v108 != v7 );
  }
  v120 = 2;
  v19 = 1;
  v121 = 0;
  v123 = 0;
  v119 = &off_2BEBEE0;
  v124 = 1;
  v125 = &v141;
  v122 = 0;
  sub_A1F700(&v119);
  v126.m128i_i32[0] = 0;
  sub_227BF10(&v119, &v126, 4);
  v117 = &v119;
  v118 = 1;
  if ( HIDWORD(v132) <= 2 || (unsigned int)(4 * HIDWORD(v132)) <= 2 )
  {
    if ( (_DWORD)v132 != 1 )
    {
LABEL_136:
      v101 = (char *)sub_A1F380(v19);
      v102 = ptr;
      v20 = v101;
      if ( (_DWORD)v132 )
      {
        v103 = (char *)ptr;
        v104 = (char *)ptr + 16 * (unsigned int)v132;
        do
        {
          v105 = *((_QWORD *)v103 + 1);
          if ( v105 )
          {
            do
            {
              v106 = *(_QWORD *)(v105 + 112);
              v107 = &v20[16 * ((v19 - 1LL) & *(_QWORD *)(v105 + 120))];
              *(_QWORD *)(v105 + 112) = *((_QWORD *)v107 + 1);
              *((_QWORD *)v107 + 1) = v105;
              v105 = v106;
              ++*((_DWORD *)v107 + 1);
            }
            while ( v106 );
          }
          v103 += 16;
        }
        while ( v104 != v103 );
      }
      free(v102);
      LODWORD(v132) = v19;
      ptr = v20;
      goto LABEL_18;
    }
  }
  else
  {
    _BitScanReverse(&v100, 4 * HIDWORD(v132) / 3u);
    v19 = 1 << (32 - (v100 ^ 0x1F));
    if ( (_DWORD)v132 != v19 )
      goto LABEL_136;
  }
  v20 = (char *)ptr;
LABEL_18:
  v112 = 0;
  for ( i = v20; ; i = (char *)ptr )
  {
    v22 = &i[16 * v112];
    if ( *((_QWORD *)v22 + 1) )
    {
      v23 = sub_227AEE0(&v119);
      v24 = *((_WORD *)v22 + 2);
      *(_DWORD *)v22 = v23 + v122 - v121;
      sub_A20860((__int64 *)&v117, v24);
      for ( j = *((_QWORD *)v22 + 1); j; j = *(_QWORD *)(j + 112) )
      {
        v26 = *(_QWORD *)(j + 120);
        if ( v118 != 1 )
          v26 = _byteswap_uint64(v26);
        v126.m128i_i64[0] = v26;
        sub_227BF10(v117, &v126, 8);
        v27 = *(_QWORD *)(j + 8);
        v28 = v27 + 88LL * *(unsigned int *)(j + 16);
        if ( v27 == v28 )
        {
          v34 = 2;
        }
        else
        {
          v29 = 2;
          do
          {
            while ( 1 )
            {
              v30 = ((char)HIBYTE(*(_QWORD *)v27) >> 31) & 4;
              v31 = v30 + 5;
              v32 = v30 + 9;
              if ( (BYTE3(*(_QWORD *)(v27 + 8)) & 0x80u) != 0 )
                v31 = v32;
              if ( (HIBYTE(*(_QWORD *)(v27 + 8)) & 0x80u) != 0 )
                break;
              v33 = *(_DWORD *)(v27 + 24) + *(_QWORD *)(v27 + 64);
              v27 += 88;
              v29 += v31 + v33 + 5;
              if ( v28 == v27 )
                goto LABEL_29;
            }
            v54 = *(_DWORD *)(v27 + 64) + *(_QWORD *)(v27 + 24);
            v27 += 88;
            v29 += v31 + v54 + 9;
          }
          while ( v28 != v27 );
LABEL_29:
          v34 = v29;
        }
        v126.m128i_i32[2] = 1;
        v116 = 4;
        v126.m128i_i64[0] = (__int64)&v119;
        sub_227BF10(&v119, &v116, 2);
        sub_A20860(v126.m128i_i64, v34);
        v126.m128i_i32[0] = *(_DWORD *)j;
        sub_227BF10(&v119, &v126, 4);
        v35 = *(unsigned int **)(j + 8);
        v36 = *(_DWORD *)(j + 16);
        v37 = 22LL * v36;
        v111 = &v35[v37];
        if ( v35 != &v35[v37] )
        {
          _BitScanReverse64(&v38, 0x2E8BA2E8BA2E8BA3LL * ((v37 * 4) >> 3));
          sub_A3BB40((__int64)v35, (__m128i *)&v35[v37], 2LL * (int)(63 - (v38 ^ 0x3F)));
          if ( (unsigned __int64)v37 > 352 )
          {
            v39 = (const __m128i *)(v35 + 352);
            sub_A28430(v35, v35 + 352);
            if ( &v35[v37] == v35 + 352 )
              goto LABEL_47;
            v113 = j;
            while ( 1 )
            {
              v40 = (__m128i *)&v39[-1];
              v41 = &v39[-4].m128i_u64[1];
              v126 = _mm_loadu_si128(v39);
              sub_A09F20((__int64)v127, (__int64)v39[1].m128i_i64);
              while ( 1 )
              {
                v42 = v40[-5].m128i_u32[2];
                v43 = &v40[-5].m128i_i8[8];
                if ( v42 <= v126.m128i_i32[0] )
                {
                  v44 = v40[-4].m128i_i32[0] & 0x7FFFFFFF;
                  v45 = v40[-5].m128i_i32[3] & 0x7FFFFFFF;
                  v46 = v126.m128i_i32[2] & 0x7FFFFFFF;
                  v47 = v126.m128i_i32[1] & 0x7FFFFFFF;
                  if ( v42 != v126.m128i_i32[0]
                    || v45 <= v47
                    && (v45 != v47
                     || v44 <= v46
                     && (v44 != v46 || (v40[-4].m128i_i32[1] & 0x7FFFFFFFu) <= (v126.m128i_i32[3] & 0x7FFFFFFFu))) )
                  {
                    break;
                  }
                }
                v55 = (unsigned __int64 *)v40[-4].m128i_i64[1];
                v56 = (__m128i *)v40[2].m128i_i64[0];
                v40[1] = _mm_loadu_si128((__m128i *)((char *)v40 - 72));
                if ( v55 == v41 )
                {
                  v64 = v40[-3].m128i_u64[0];
                  if ( v64 )
                  {
                    if ( v64 == 1 )
                      v56->m128i_i8[0] = v40[-3].m128i_i8[8];
                    else
                      memcpy(v56, v41, v64);
                    v64 = v40[-3].m128i_u64[0];
                    v56 = (__m128i *)v40[2].m128i_i64[0];
                  }
                  v40[2].m128i_i64[1] = v64;
                  v56->m128i_i8[v64] = 0;
                  v56 = (__m128i *)v40[-4].m128i_i64[1];
                }
                else
                {
                  if ( v56 == &v40[3] )
                  {
                    v40[2].m128i_i64[0] = (__int64)v55;
                    v40[2].m128i_i64[1] = v40[-3].m128i_i64[0];
                    v40[3].m128i_i64[0] = v40[-3].m128i_i64[1];
                  }
                  else
                  {
                    v40[2].m128i_i64[0] = (__int64)v55;
                    v57 = v40[3].m128i_i64[0];
                    v40[2].m128i_i64[1] = v40[-3].m128i_i64[0];
                    v40[3].m128i_i64[0] = v40[-3].m128i_i64[1];
                    if ( v56 )
                    {
                      v40[-4].m128i_i64[1] = (__int64)v56;
                      v40[-3].m128i_i64[1] = v57;
                      goto LABEL_59;
                    }
                  }
                  v40[-4].m128i_i64[1] = (__int64)v41;
                  v56 = (__m128i *)v41;
                }
LABEL_59:
                v40[-3].m128i_i64[0] = 0;
                v56->m128i_i8[0] = 0;
                v58 = v43[48] & 1 | v40[4].m128i_i8[0] & 0xFE;
                v40[4].m128i_i8[0] = v58;
                v59 = v43[48] & 2 | v58 & 0xFD;
                v40[4].m128i_i8[0] = v59;
                v60 = v43[48] & 4 | v59 & 0xFB;
                v40[4].m128i_i8[0] = v60;
                v40[4].m128i_i8[0] = v43[48] & 8 | v60 & 0xF7;
                v61 = (__m128i *)v40[-1].m128i_i64[0];
                v62 = (__m128i *)v40[4].m128i_i64[1];
                if ( v61 == v40 )
                {
                  v65 = v40[-1].m128i_u64[1];
                  if ( v65 )
                  {
                    if ( v65 == 1 )
                      v62->m128i_i8[0] = v40->m128i_i8[0];
                    else
                      memcpy(v62, v40, v65);
                    v65 = v40[-1].m128i_u64[1];
                    v62 = (__m128i *)v40[4].m128i_i64[1];
                  }
                  v40[5].m128i_i64[0] = v65;
                  v62->m128i_i8[v65] = 0;
                  v62 = (__m128i *)v40[-1].m128i_i64[0];
                }
                else
                {
                  if ( v62 == (__m128i *)&v40[5].m128i_u64[1] )
                  {
                    v40[4].m128i_i64[1] = (__int64)v61;
                    v40[5].m128i_i64[0] = v40[-1].m128i_i64[1];
                    v40[5].m128i_i64[1] = v40->m128i_i64[0];
                  }
                  else
                  {
                    v40[4].m128i_i64[1] = (__int64)v61;
                    v63 = v40[5].m128i_i64[1];
                    v40[5].m128i_i64[0] = v40[-1].m128i_i64[1];
                    v40[5].m128i_i64[1] = v40->m128i_i64[0];
                    if ( v62 )
                    {
                      v40[-1].m128i_i64[0] = (__int64)v62;
                      v40->m128i_i64[0] = v63;
                      goto LABEL_63;
                    }
                  }
                  v40[-1].m128i_i64[0] = (__int64)v40;
                  v62 = v40;
                }
LABEL_63:
                v40[-1].m128i_i64[1] = 0;
                v41 -= 11;
                v40 = (__m128i *)((char *)v40 - 88);
                v62->m128i_i8[0] = 0;
              }
              v40[1] = _mm_load_si128(&v126);
              sub_A0AAD0((__int64)v40[2].m128i_i64, v127);
              v48 = v129 & 1 | v40[4].m128i_i8[0] & 0xFE;
              v40[4].m128i_i8[0] = v48;
              v49 = v129 & 2 | v48 & 0xFD;
              v40[4].m128i_i8[0] = v49;
              v50 = v129 & 4 | v49 & 0xFB;
              v40[4].m128i_i8[0] = v50;
              v40[4].m128i_i8[0] = v129 & 8 | v50 & 0xF7;
              sub_A0AAD0((__int64)&v40[4].m128i_i64[1], &v130);
              if ( v130 != &v131 )
                operator delete(v130);
              if ( v127[0] != &v128 )
              {
                operator delete(v127[0]);
                v39 = (const __m128i *)((char *)v39 + 88);
                if ( v111 == (unsigned int *)v39 )
                  goto LABEL_46;
                continue;
              }
              v39 = (const __m128i *)((char *)v39 + 88);
              if ( v111 == (unsigned int *)v39 )
              {
LABEL_46:
                j = v113;
                goto LABEL_47;
              }
            }
          }
          sub_A28430(v35, v111);
LABEL_47:
          v36 = *(_DWORD *)(j + 16);
        }
        v126.m128i_i16[0] = v36;
        sub_227BF10(&v119, &v126, 2);
        v51 = *(_QWORD *)(j + 8);
        v52 = v51 + 88LL * *(unsigned int *)(j + 16);
        while ( v52 != v51 )
        {
          sub_A1F510((__int64)&v119, v51);
          v53 = v51 + 16;
          v51 += 88;
          sub_A20890((__int64)&v119, v53);
        }
      }
    }
    if ( (unsigned int)v132 <= ++v112 )
      break;
  }
  v74 = sub_227AEE0(&v119);
  v75 = (unsigned int)(v74 + v122 - v121);
  v76 = (v75 + 3) & 0xFFFFFFFC;
  v77 = ((v75 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v75 - 1;
  if ( ((v75 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v75 )
  {
    do
    {
      --v77;
      v126.m128i_i8[0] = 0;
      sub_227BF10(v117, &v126, 1);
    }
    while ( v77 != -1 );
  }
  sub_A20800((__int64)v117, v132, v118);
  sub_A20800((__int64)v117, HIDWORD(v132), v118);
  if ( (_DWORD)v132 )
  {
    v78 = 0;
    do
    {
      v79 = v78++;
      sub_A20800((__int64)v117, *((_DWORD *)ptr + 4 * v79), v118);
    }
    while ( (unsigned int)v132 > v78 );
  }
  v126.m128i_i32[0] = v76;
  v119 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v119);
  free(ptr);
  v80 = v134;
  v81 = (unsigned int)v135;
  v82 = v134;
  v109 = &v134[8 * (unsigned int)v135];
  if ( v134 != v109 )
  {
    while ( 1 )
    {
      v83 = (unsigned int)((v82 - v80) >> 3) >> 7;
      v84 = 4096LL << v83;
      if ( v83 >= 0x1E )
        v84 = 0x40000000000LL;
      v85 = *(_QWORD *)v82 + v84;
      v86 = (*(_QWORD *)v82 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)v82 == *(_QWORD *)&v80[8 * v81 - 8] )
        v85 = v133.m128_u64[0];
      v87 = v86 + 128;
      if ( v86 + 128 > v85 )
      {
LABEL_109:
        v82 += 8;
        if ( v109 == v82 )
          break;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v88 = *(_QWORD **)(v87 - 120);
            v89 = &v88[11 * *(unsigned int *)(v87 - 112)];
            if ( v88 != v89 )
            {
              do
              {
                while ( 1 )
                {
                  v89 -= 11;
                  v90 = (_QWORD *)v89[7];
                  if ( v90 != v89 + 9 )
                    operator delete(v90);
                  v91 = (_QWORD *)v89[2];
                  if ( v91 == v89 + 4 )
                    break;
                  operator delete(v91);
                  if ( v88 == v89 )
                    goto LABEL_106;
                }
              }
              while ( v88 != v89 );
LABEL_106:
              v89 = *(_QWORD **)(v87 - 128 + 8);
            }
            if ( v89 == (_QWORD *)(v87 - 104) )
              break;
            v87 += 128LL;
            free(v89);
            if ( v87 > v85 )
              goto LABEL_109;
          }
          v87 += 128LL;
        }
        while ( v87 <= v85 );
        v82 += 8;
        if ( v109 == v82 )
          break;
      }
      v80 = v134;
      v81 = (unsigned int)v135;
    }
  }
  v92 = v137;
  v110 = &v137[(unsigned int)v138];
  if ( v137 != v110 )
  {
    do
    {
      while ( 1 )
      {
        v93 = *(_QWORD *)v92 + *((_QWORD *)v92 + 1);
        v94 = ((*(_QWORD *)v92 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 128;
        if ( v93 >= v94 )
          break;
LABEL_125:
        if ( v110 == ++v92 )
          goto LABEL_126;
      }
      do
      {
        while ( 1 )
        {
          v95 = *(_QWORD **)(v94 - 120);
          v96 = &v95[11 * *(unsigned int *)(v94 - 112)];
          if ( v95 != v96 )
          {
            do
            {
              while ( 1 )
              {
                v96 -= 11;
                v97 = (_QWORD *)v96[7];
                if ( v97 != v96 + 9 )
                  operator delete(v97);
                v98 = (_QWORD *)v96[2];
                if ( v98 == v96 + 4 )
                  break;
                operator delete(v98);
                if ( v95 == v96 )
                  goto LABEL_122;
              }
            }
            while ( v95 != v96 );
LABEL_122:
            v96 = *(_QWORD **)(v94 - 128 + 8);
          }
          if ( v96 == (_QWORD *)(v94 - 104) )
            break;
          v94 += 128LL;
          free(v96);
          if ( v93 < v94 )
            goto LABEL_125;
        }
        v94 += 128LL;
      }
      while ( v93 >= v94 );
      ++v92;
    }
    while ( v110 != v92 );
  }
LABEL_126:
  sub_A24B10(&v133);
  sub_9B7090((__int64)&v133);
  v132 = a2;
  v133.m128_i32[0] = sub_A246B0(a2);
  sub_A26A30((__int64)&v132, a1 + 40, (unsigned int *)&v126, (__int64)&v141);
  if ( v141 != v143 )
    free(v141);
  return sub_A25550(a2);
}
