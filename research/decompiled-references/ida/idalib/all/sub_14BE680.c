__int64 __fastcall sub_14BE680(const __m128i *a1, __int64 a2, int a3, __m128i a4)
{
  __int64 v4; // r14
  __int64 v7; // rax
  char v8; // si
  int v9; // eax
  int v10; // r13d
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rbx
  __int16 v14; // ax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // r12
  char v18; // r12
  __int64 v19; // rbx
  int v20; // edi
  char v21; // si
  char v22; // dl
  int v23; // eax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __m128i v30; // xmm3
  __m128i v31; // xmm1
  __int64 *v32; // rdi
  int *v33; // rsi
  int v34; // eax
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  __int16 v39; // ax
  char v40; // bl
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 *v44; // rdi
  const char *v45; // rax
  size_t v46; // rax
  int v47; // eax
  unsigned __int64 v48; // r12
  __int64 v49; // rbp
  signed __int64 v50; // r12
  unsigned int v51; // ebx
  unsigned int v52; // eax
  __int64 v53; // rdi
  const __m128i *v54; // rsi
  __m128i v55; // xmm7
  __int64 v57; // rax
  unsigned __int64 v58; // rbx
  int v59; // r9d
  void *v60; // r13
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  void **v64; // rcx
  __int64 v65; // rax
  int *v66; // r13
  __m128 *v67; // r12
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  void **v75; // rax
  char v76; // al
  __int64 v77; // rax
  unsigned __int64 v78; // rbx
  int v79; // r9d
  __int64 v80; // r13
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  void **v85; // rax
  __int64 v86; // rbp
  unsigned int v87; // ebx
  unsigned int v88; // eax
  void *v89; // rax
  __m128i v90; // xmm6
  unsigned int v91; // ebx
  void **v92; // rbx
  __int64 v93; // rax
  unsigned __int64 v94; // rbp
  unsigned int v95; // eax
  unsigned __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // r13
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // r14
  unsigned __int64 v103; // r12
  __int64 v104; // rbx
  void *v105; // rdi
  unsigned __int64 v106; // rsi
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rdx
  int v109; // eax
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  int v113; // eax
  unsigned __int64 v114; // rax
  const char *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rbp
  __int64 v118; // r15
  __int64 v119; // rbp
  void *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rbp
  __int64 v123; // r15
  __int64 v124; // rbp
  void *v125; // rdi
  unsigned int s; // [rsp+0h] [rbp-168h]
  char *sa; // [rsp+0h] [rbp-168h]
  char *sb; // [rsp+0h] [rbp-168h]
  char *sc; // [rsp+0h] [rbp-168h]
  int sd; // [rsp+0h] [rbp-168h]
  int se; // [rsp+0h] [rbp-168h]
  __int16 sg; // [rsp+0h] [rbp-168h]
  int sh; // [rsp+0h] [rbp-168h]
  int si; // [rsp+0h] [rbp-168h]
  int sj; // [rsp+0h] [rbp-168h]
  int sf; // [rsp+0h] [rbp-168h]
  __int64 v137; // [rsp+8h] [rbp-160h] BYREF
  __m128i *v138; // [rsp+10h] [rbp-158h]
  void **v139; // [rsp+18h] [rbp-150h]
  int v140; // [rsp+20h] [rbp-148h]
  unsigned int v141; // [rsp+24h] [rbp-144h]
  char *v142; // [rsp+28h] [rbp-140h]
  __int64 v143; // [rsp+30h] [rbp-138h]
  __m128 *v144; // [rsp+38h] [rbp-130h]
  __int64 v145; // [rsp+44h] [rbp-124h] BYREF
  int v146; // [rsp+4Ch] [rbp-11Ch]
  __m128i v147; // [rsp+50h] [rbp-118h] BYREF
  __int64 v148; // [rsp+60h] [rbp-108h]
  __m128i v149; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v150; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v151; // [rsp+90h] [rbp-D8h]
  void *v152[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v153; // [rsp+B0h] [rbp-B8h]
  void *v154; // [rsp+B8h] [rbp-B0h]
  char v155; // [rsp+C8h] [rbp-A0h] BYREF
  __m128 v156; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v157; // [rsp+F0h] [rbp-78h] BYREF
  char v158[112]; // [rsp+F8h] [rbp-70h] BYREF

  v4 = (__int64)a1;
  v7 = a1->m128i_i64[1];
  v8 = a1[122].m128i_i8[0];
  v140 = a3;
  v9 = sub_FFF790(a1[2].m128i_u16[0], v8, (*(_BYTE *)(*(_QWORD *)(v7 + 56) + 1LL) & 0x10) != 0);
  v141 = 0;
  v10 = v9;
  v11 = a1[5].m128i_i64[0];
  v149 = _mm_loadu_si128(a1 + 3);
  v151 = v11;
  v150 = _mm_loadu_si128(a1 + 4);
  v138 = (__m128i *)&a1[1];
  if ( v10 < a3 )
    return a2;
  v12 = v10;
  v139 = v152;
  v142 = &v155;
  while ( 1 )
  {
    v31 = _mm_loadu_si128((const __m128i *)(v4 + 16));
    v32 = *(__int64 **)(v4 + 8);
    v33 = (int *)v138;
    v148 = *(_QWORD *)(v4 + 32);
    v34 = *(_DWORD *)(v4 + 16);
    v147 = v31;
    *(_DWORD *)(v4 + 40) = v34;
    sub_14634E0(v32, v33);
    if ( (unsigned __int16)(v148 - 52) > 0x17u )
      goto LABEL_36;
    v35 = &loc_804003;
    if ( !_bittest64((const __int64 *)&v35, (unsigned int)(unsigned __int16)v148 - 52) )
      goto LABEL_36;
    v36 = *(unsigned int *)(v4 + 2792);
    if ( !(_DWORD)v36
      || (v37 = *(_QWORD *)(v4 + 2784) + 24 * v36 - 24, *(_WORD *)(v4 + 88) != *(_WORD *)(v37 + 14))
      || *(_DWORD *)(v37 + 16) != *(_DWORD *)(v4 + 90) )
    {
      if ( (_WORD)v148 != 66 )
        goto LABEL_36;
      goto LABEL_66;
    }
    if ( (unsigned __int8)sub_1555D30(v4, v37, &v147) )
      return 1;
    if ( (_WORD)v148 != 66 )
      goto LABEL_36;
LABEL_66:
    if ( sub_14B6820(v4) )
    {
      v53 = *(_QWORD *)(v4 + 8);
      v54 = v138;
LABEL_68:
      sub_1479990(v53, v54, 1u);
      v55 = _mm_load_si128(&v147);
      *(_DWORD *)(v4 + 32) = v148;
      *(__m128i *)(v4 + 16) = v55;
      return a2;
    }
LABEL_36:
    v38 = *(_QWORD *)(v4 + 8);
    if ( (v10 & 0xFFFFFFF7) == 3 || v12 <= 0 )
    {
      v13 = *(_QWORD *)(v38 + 56);
      if ( (*(_BYTE *)(v13 + 2) & 4) == 0 )
      {
        if ( v10 != 3 )
          goto LABEL_10;
        goto LABEL_39;
      }
    }
    else
    {
      if ( *(_WORD *)(v4 + 32) == 27 )
      {
        sub_1479990(*(_QWORD *)(v4 + 8), v138, 1u);
        v90 = _mm_load_si128(&v147);
        *(_DWORD *)(v4 + 32) = v148;
        *(__m128i *)(v4 + 16) = v90;
        return a2;
      }
      v13 = *(_QWORD *)(v38 + 56);
      if ( (*(_BYTE *)(v13 + 2) & 4) == 0 )
      {
LABEL_10:
        v137 = 1;
        v15 = *(unsigned int *)(v4 + 16);
        v16 = a2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_11;
      }
    }
    if ( (*(_BYTE *)(v13 + 1) & 8) != 0 )
    {
      v14 = *(_WORD *)(v4 + 32);
      if ( v14 == 21 || v14 == 62 )
      {
        sg = v148;
        v76 = sub_141A630((unsigned __int16)v148);
        if ( sg != 1 && !v76 && v147.m128i_i64[1] )
        {
          v54 = v138;
          v53 = v38;
          goto LABEL_68;
        }
      }
    }
    if ( v10 != 3 )
      goto LABEL_10;
LABEL_39:
    v39 = *(_WORD *)(v4 + 32);
    if ( (*(_BYTE *)(v13 + 1) & 0x10) != 0 && v39 == 24 )
    {
      v91 = *(_DWORD *)(v4 + 16);
      a2 = sub_14EE310(v4);
      if ( a2 == 1 )
        goto LABEL_44;
      sub_1564820(&v156, v4, v91, 1705);
      sub_AE9DF0((unsigned __int8 **)&v156, 1, 2u);
      v92 = v139;
      sub_13D35F0(
        (__int64)v139,
        (__int64)&v147,
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL),
        nullptr);
      sub_AEC220((unsigned __int8 **)&v156, (_BYTE *)v152[0], (signed __int64)v152[1]);
      v93 = sub_18C0DD0(*(_QWORD *)(v4 + 96), a2 & 0xFFFFFFFFFFFFFFFELL);
      LOBYTE(v146) = 1;
      v145 = v93;
      sub_AEC610((__int64 *)&v156, &v145);
      if ( v152[0] != v92 + 2 )
        operator delete(v152[0]);
      v16 = 0;
      a2 = 1;
      sub_AEA040((__int64)&v156);
      v137 = 0;
    }
    else if ( v39 == 62 )
    {
      v16 = a2 & 0xFFFFFFFFFFFFFFFELL;
      sub_1564840(&v156, v4, v138, 1989);
      sub_AEA040((__int64)&v156);
      v137 = 0;
    }
    else
    {
      v40 = *(_BYTE *)(v4 + 2040);
      *(_BYTE *)(v4 + 2040) = 1;
      v41 = sub_14BDAD0(v4, 0, a4);
      v42 = sub_14BE680(v4, v41, 1);
      *(_BYTE *)(v4 + 2040) = v40;
      v137 = v42;
      if ( v42 == 1 )
      {
        a2 = 1;
LABEL_44:
        v137 = 0;
        v16 = 0;
        goto LABEL_45;
      }
      v16 = a2 & 0xFFFFFFFFFFFFFFFELL;
    }
LABEL_45:
    v43 = *(_DWORD *)(v4 + 16);
    v44 = *(__int64 **)(v4 + 8);
    if ( *(_WORD *)(v4 + 32) == 62 )
    {
      *(_DWORD *)(v4 + 40) = v43;
      sub_14634E0(v44, v138->m128i_i32);
      v15 = *(unsigned int *)(v4 + 16);
      v141 = *(_DWORD *)(v4 + 40);
      goto LABEL_11;
    }
    LODWORD(v145) = *(_DWORD *)(v4 + 16);
    sb = (char *)v44[11];
    if ( v43 >= 0 )
      goto LABEL_47;
    if ( (unsigned __int8)sub_13D1460(v43, v44[11], v44[7], (int *)&v145) )
    {
      v43 = v145;
LABEL_47:
      v156.m128_i8[0] = 0;
      v45 = sub_1021A70((__int64)sb, v43 - 1, &v156);
      if ( v156.m128_i8[0]
        || *v45 != 32
        || (v115 = sub_1021A70((__int64)sb, (int)v145 - 2, &v156), v156.m128_i8[0])
        || *v115 != 32 )
      {
        sc = ": ";
      }
      else
      {
        LODWORD(v145) = v145 - 1;
        sc = ":";
      }
      goto LABEL_50;
    }
    sc = ": ";
LABEL_50:
    sub_1564840(&v156, v4, v138, 14);
    sub_AE9DF0((unsigned __int8 **)&v156, 62, 4u);
    v46 = strlen(sc);
    sub_9EC740((__int64)v139, v145, sc, v46, 0);
    if ( LODWORD(v152[0]) && HIDWORD(v152[0]) )
      sub_14B8100((__int64 *)&v156, (unsigned __int64)v139);
    if ( v154 != v142 )
      operator delete(v154);
    sub_AEA040((__int64)&v156);
    sub_1564840(&v156, v4, &v147, 109);
    sub_AE9DF0((unsigned __int8 **)&v156, 61, 4u);
    sub_AEA040((__int64)&v156);
    v141 = *(_DWORD *)(v4 + 16);
    v15 = v141;
LABEL_11:
    sub_1703B10(v4 + 48, *(_QWORD *)(v4 + 96), v15, v16, (unsigned __int16)v148);
    v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL) + 1LL);
    if ( (v17 & 0x10) != 0 && *(_WORD *)(v4 + 32) == 24 )
    {
      v18 = 1;
      v19 = sub_14EE310(v4);
    }
    else
    {
      v18 = (v12 <= 3) & (v17 >> 3);
      if ( v18 )
      {
        v18 = 0;
        v19 = sub_14BDAD0(v4, 0, a4);
      }
      else
      {
        v19 = sub_14BDA20(v4, 0, 0, 0, 0, nullptr, a4);
      }
    }
    v20 = *(unsigned __int16 *)(v4 + 32);
    v21 = *(_BYTE *)(v4 + 1952);
    s = v10 - 2;
    v22 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL) + 1LL) & 0x10) != 0;
    if ( v19 != 1 )
    {
      v23 = sub_FFF790(v20, v21, v22);
      if ( v23 > v12 || s <= 1 && v23 == v10 )
      {
        if ( !v18 )
          goto LABEL_20;
        v66 = (int *)v138;
        v67 = &v156;
        sub_1564840(&v156, v4, v138, 1705);
        sub_AE9DF0((unsigned __int8 **)&v156, 0, 2u);
        sub_13D35F0(
          (__int64)v139,
          (__int64)v66,
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL),
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL),
          nullptr);
        sub_AEC220((unsigned __int8 **)&v156, (_BYTE *)v152[0], (signed __int64)v152[1]);
        v68 = sub_18C0DD0(*(_QWORD *)(v4 + 96), v19 & 0xFFFFFFFFFFFFFFFELL);
        v69 = v156.m128_u64[0];
        v70 = v68;
        if ( v156.m128_u64[0] )
        {
          v71 = *(unsigned int *)(v156.m128_u64[0] + 424);
          v72 = *(unsigned int *)(v156.m128_u64[0] + 428);
          v145 = v70;
          LOBYTE(v146) = 1;
          v73 = v71 + 1;
          if ( v71 + 1 <= v72 )
            goto LABEL_84;
LABEL_122:
          sub_2237220(v69 + 416, v69 + 432, v73, 12);
          v71 = *(unsigned int *)(v69 + 424);
        }
        else
        {
          v96 = v156.m128_u64[1];
          v97 = *(_DWORD *)(v156.m128_u64[1] + 14976);
          if ( v97 )
          {
            v98 = (unsigned int)(v97 - 1);
            *(_DWORD *)(v156.m128_u64[1] + 14976) = v98;
            v69 = *(_QWORD *)(v96 + 8 * v98 + 14848);
            v99 = *(unsigned int *)(v69 + 536);
            *(_BYTE *)v69 = 0;
            v100 = *(_QWORD *)(v69 + 528);
            *(_DWORD *)(v69 + 424) = 0;
            v101 = v100 + (v99 << 6);
            if ( v100 == v101 )
            {
              v73 = 1;
              v71 = 0;
            }
            else
            {
              v143 = v4;
              v102 = v70;
              v144 = &v156;
              v103 = v69;
              v104 = v100;
              do
              {
                while ( 1 )
                {
                  v101 -= 64;
                  v105 = *(void **)(v101 + 24);
                  if ( v105 == (void *)(v101 + 40) )
                    break;
                  operator delete(v105);
                  if ( v104 == v101 )
                    goto LABEL_118;
                }
              }
              while ( v104 != v101 );
LABEL_118:
              v69 = v103;
              v70 = v102;
              v67 = v144;
              v4 = v143;
              v71 = *(unsigned int *)(v69 + 424);
              v73 = v71 + 1;
            }
            *(_DWORD *)(v69 + 536) = 0;
            v106 = *(unsigned int *)(v69 + 428);
          }
          else
          {
            v143 = v70;
            v107 = operator new(0x3A0u);
            v106 = 8;
            v73 = 1;
            v69 = v107;
            *(_BYTE *)v107 = 0;
            *(_QWORD *)(v107 + 96) = v107 + 112;
            *(_QWORD *)(v107 + 128) = v107 + 144;
            *(_QWORD *)(v107 + 160) = v107 + 176;
            *(_QWORD *)(v107 + 192) = v107 + 208;
            *(_QWORD *)(v107 + 224) = v107 + 240;
            *(_QWORD *)(v107 + 256) = v107 + 272;
            *(_QWORD *)(v107 + 288) = v107 + 304;
            *(_QWORD *)(v107 + 320) = v107 + 336;
            *(_QWORD *)(v107 + 352) = v107 + 368;
            *(_QWORD *)(v107 + 384) = v107 + 400;
            *(_QWORD *)(v107 + 416) = v107 + 432;
            *(_QWORD *)(v107 + 104) = 0;
            *(_BYTE *)(v107 + 112) = 0;
            *(_QWORD *)(v107 + 136) = 0;
            *(_BYTE *)(v107 + 144) = 0;
            *(_QWORD *)(v107 + 168) = 0;
            *(_BYTE *)(v107 + 176) = 0;
            *(_QWORD *)(v107 + 200) = 0;
            *(_BYTE *)(v107 + 208) = 0;
            *(_QWORD *)(v107 + 232) = 0;
            *(_BYTE *)(v107 + 240) = 0;
            *(_QWORD *)(v107 + 264) = 0;
            *(_BYTE *)(v107 + 272) = 0;
            *(_QWORD *)(v107 + 296) = 0;
            *(_BYTE *)(v107 + 304) = 0;
            *(_QWORD *)(v107 + 328) = 0;
            *(_BYTE *)(v107 + 336) = 0;
            *(_QWORD *)(v107 + 360) = 0;
            *(_BYTE *)(v107 + 368) = 0;
            *(_QWORD *)(v107 + 392) = 0;
            *(_BYTE *)(v107 + 400) = 0;
            *(_QWORD *)(v107 + 424) = 0x800000000LL;
            v70 = v143;
            *(_QWORD *)(v107 + 528) = v107 + 544;
            *(_QWORD *)(v107 + 536) = 0x600000000LL;
            v71 = 0;
          }
          v156.m128_u64[0] = v69;
          v145 = v70;
          LOBYTE(v146) = 1;
          if ( v73 > v106 )
            goto LABEL_122;
        }
LABEL_84:
        v74 = *(_QWORD *)(v69 + 416) + 12 * v71;
        *(_QWORD *)v74 = v145;
        *(_DWORD *)(v74 + 8) = v146;
        v75 = v139;
        ++*(_DWORD *)(v69 + 424);
        if ( v152[0] != v75 + 2 )
          operator delete(v152[0]);
        v19 = 1;
        sub_AEA040((__int64)v67);
LABEL_20:
        v19 = sub_14BE680(v4, v19, v12 + (unsigned int)(s > 1));
        if ( v19 == 1 )
          a2 = 1;
        v12 = sub_FFF790(
                *(unsigned __int16 *)(v4 + 32),
                *(_BYTE *)(v4 + 1952),
                (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL) + 1LL) & 0x10) != 0);
        v10 = v12;
LABEL_23:
        if ( a2 != 1 )
        {
          v24 = a2 & 0xFFFFFFFFFFFFFFFELL;
          v25 = v19 & 0xFFFFFFFFFFFFFFFELL;
          v26 = *(_QWORD *)(v4 + 96);
          sa = (char *)v24;
          if ( v137 == 1 )
          {
            v27 = (unsigned __int16)v148;
            if ( !*(_BYTE *)(v4 + 1952) && (_WORD)v148 == 53 )
            {
              v94 = (unsigned __int64)sub_18C0DD0(v26, v25) >> 32;
              v95 = sub_18C0DD0(*(_QWORD *)(v4 + 96), sa);
              sub_15695F0(v4, v147.m128i_u32[0], 2080, (v94 << 32) | v95);
              v26 = *(_QWORD *)(v4 + 96);
              v27 = (unsigned __int16)v148;
            }
            v28 = *(_QWORD *)(v26 + 608);
            a2 = sub_192A3E0(v26, v28, v147.m128i_u32[0], v27, sa, v25);
            if ( a2 == 1 )
            {
              v137 = v25;
              v86 = *(_QWORD *)(v4 + 96);
              a4 = (__m128i)_mm_loadh_ps((const double *)&v137);
              v156 = (__m128)a4;
              v87 = sub_EEC140(v25);
              v88 = sub_EEB7E0((unsigned __int64)sa, v28, *(double *)a4.m128i_i64);
              a2 = sub_18C4330(v86, v88, v87, &v156, 2, 0);
            }
          }
          else
          {
            v48 = v137 & 0xFFFFFFFFFFFFFFFELL;
            a2 = sub_1923BC0(v26, v147.m128i_u32[0], v141, v24, v137 & 0xFFFFFFFFFFFFFFFELL, v25);
            if ( a2 == 1 )
            {
              v153 = 0;
              *(_OWORD *)v152 = 0;
              if ( v48 )
              {
                v137 = v48;
                v157 = v25;
                a4 = (__m128i)_mm_loadh_ps((const double *)&v137);
                v156 = (__m128)a4;
                sub_14B5AA0((char **)v139, (char *)&v156, v158);
              }
              else
              {
                v137 = v25;
                a4 = (__m128i)_mm_loadh_ps((const double *)&v137);
                v156 = (__m128)a4;
                sub_14B5AA0((char **)v139, (char *)&v156, &v157);
              }
              v49 = *(_QWORD *)(v4 + 96);
              v50 = (char *)v152[1] - (char *)v152[0];
              v137 = (__int64)v152[0];
              v51 = sub_EEC140(v25);
              v52 = sub_EEB7E0((unsigned __int64)sa, (__int64)&v156, *(double *)a4.m128i_i64);
              a2 = sub_18C4330(v49, v52, v51, v137, v50 >> 3, 0);
              if ( v152[0] )
                operator delete(v152[0]);
            }
          }
        }
        goto LABEL_30;
      }
      if ( !v18 )
      {
        v10 = v23;
        v12 = v23;
        goto LABEL_23;
      }
      if ( v10 == 2 )
      {
        si = v23;
        sub_1564840(&v156, v4, &v147, 2118);
        v89 = (void *)sub_18C0DD0(*(_QWORD *)(v4 + 96), v19 & 0xFFFFFFFFFFFFFFFELL);
        LOBYTE(v152[1]) = 1;
        v152[0] = v89;
        sub_AEC610((__int64 *)&v156, (__int64 *)v139);
        sub_AEA040((__int64)&v156);
        v10 = si;
        v12 = si;
        goto LABEL_23;
      }
      sd = v23;
      if ( v141 )
      {
        sub_1564820(&v156, v4, v141, 1705);
        sub_AE9DF0((unsigned __int8 **)&v156, 1, 2u);
        sub_AE9DF0((unsigned __int8 **)&v156, (__int64)":", 1u);
        v57 = sub_18C0DD0(*(_QWORD *)(v4 + 96), v19 & 0xFFFFFFFFFFFFFFFELL);
        v58 = v156.m128_u64[0];
        v59 = sd;
        v60 = (void *)v57;
        if ( v156.m128_u64[0] )
        {
          v61 = *(unsigned int *)(v156.m128_u64[0] + 424);
          v62 = *(unsigned int *)(v156.m128_u64[0] + 428);
          v63 = v61 + 1;
        }
        else
        {
          v112 = v156.m128_u64[1];
          v113 = *(_DWORD *)(v156.m128_u64[1] + 14976);
          if ( v113 )
          {
            v116 = (unsigned int)(v113 - 1);
            *(_DWORD *)(v156.m128_u64[1] + 14976) = v116;
            v58 = *(_QWORD *)(v112 + 8 * v116 + 14848);
            v117 = *(unsigned int *)(v58 + 536);
            *(_BYTE *)v58 = 0;
            v118 = *(_QWORD *)(v58 + 528);
            *(_DWORD *)(v58 + 424) = 0;
            v119 = v118 + (v117 << 6);
            if ( v118 == v119 )
            {
              v63 = 1;
              v61 = 0;
            }
            else
            {
              do
              {
                while ( 1 )
                {
                  v119 -= 64;
                  v120 = *(void **)(v119 + 24);
                  if ( v120 == (void *)(v119 + 40) )
                    break;
                  operator delete(v120);
                  if ( v118 == v119 )
                    goto LABEL_138;
                }
              }
              while ( v118 != v119 );
LABEL_138:
              v59 = sd;
              v61 = *(unsigned int *)(v58 + 424);
              v63 = v61 + 1;
            }
            *(_DWORD *)(v58 + 536) = 0;
            v62 = *(unsigned int *)(v58 + 428);
          }
          else
          {
            v114 = operator new(0x3A0u);
            v62 = 8;
            v63 = 1;
            v58 = v114;
            *(_BYTE *)v114 = 0;
            *(_QWORD *)(v114 + 96) = v114 + 112;
            *(_QWORD *)(v114 + 128) = v114 + 144;
            *(_QWORD *)(v114 + 160) = v114 + 176;
            *(_QWORD *)(v114 + 192) = v114 + 208;
            *(_QWORD *)(v114 + 224) = v114 + 240;
            *(_QWORD *)(v114 + 256) = v114 + 272;
            *(_QWORD *)(v114 + 288) = v114 + 304;
            *(_QWORD *)(v114 + 320) = v114 + 336;
            *(_QWORD *)(v114 + 352) = v114 + 368;
            *(_QWORD *)(v114 + 384) = v114 + 400;
            *(_QWORD *)(v114 + 416) = v114 + 432;
            *(_QWORD *)(v114 + 104) = 0;
            *(_BYTE *)(v114 + 112) = 0;
            *(_QWORD *)(v114 + 136) = 0;
            *(_BYTE *)(v114 + 144) = 0;
            *(_QWORD *)(v114 + 168) = 0;
            *(_BYTE *)(v114 + 176) = 0;
            *(_QWORD *)(v114 + 200) = 0;
            *(_BYTE *)(v114 + 208) = 0;
            *(_QWORD *)(v114 + 232) = 0;
            *(_BYTE *)(v114 + 240) = 0;
            *(_QWORD *)(v114 + 264) = 0;
            *(_BYTE *)(v114 + 272) = 0;
            *(_QWORD *)(v114 + 296) = 0;
            *(_BYTE *)(v114 + 304) = 0;
            *(_QWORD *)(v114 + 328) = 0;
            *(_BYTE *)(v114 + 336) = 0;
            *(_QWORD *)(v114 + 360) = 0;
            *(_BYTE *)(v114 + 368) = 0;
            *(_QWORD *)(v114 + 392) = 0;
            *(_BYTE *)(v114 + 400) = 0;
            *(_QWORD *)(v114 + 424) = 0x800000000LL;
            v59 = sd;
            *(_QWORD *)(v114 + 528) = v114 + 544;
            *(_QWORD *)(v114 + 536) = 0x600000000LL;
            v61 = 0;
          }
          v156.m128_u64[0] = v58;
        }
        v152[0] = v60;
        LOBYTE(v152[1]) = 1;
        if ( v63 > v62 )
        {
          sf = v59;
          sub_2237220(v58 + 416, v58 + 432, v63, 12);
          v61 = *(unsigned int *)(v58 + 424);
          v59 = sf;
        }
        v64 = v139;
        se = v59;
        v65 = *(_QWORD *)(v58 + 416) + 12 * v61;
        *(_QWORD *)v65 = *v139;
        *(_DWORD *)(v65 + 8) = *((_DWORD *)v64 + 2);
        ++*(_DWORD *)(v58 + 424);
        goto LABEL_81;
      }
      sub_1564840(&v156, v4, &v147, 1705);
      sub_AE9DF0((unsigned __int8 **)&v156, 1, 2u);
      sub_13D35F0(
        (__int64)v139,
        (__int64)&v147,
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL),
        nullptr);
      sub_AEC220((unsigned __int8 **)&v156, (_BYTE *)v152[0], (signed __int64)v152[1]);
      v77 = sub_18C0DD0(*(_QWORD *)(v4 + 96), v19 & 0xFFFFFFFFFFFFFFFELL);
      v78 = v156.m128_u64[0];
      v79 = sd;
      v80 = v77;
      if ( v156.m128_u64[0] )
      {
        v81 = *(unsigned int *)(v156.m128_u64[0] + 424);
        v82 = *(unsigned int *)(v156.m128_u64[0] + 428);
        v145 = v80;
        LOBYTE(v146) = 1;
        v83 = v81 + 1;
        if ( v81 + 1 <= v82 )
        {
LABEL_93:
          v84 = *(_QWORD *)(v78 + 416) + 12 * v81;
          *(_QWORD *)v84 = v145;
          *(_DWORD *)(v84 + 8) = v146;
          v85 = v139;
          ++*(_DWORD *)(v78 + 424);
          if ( v152[0] != v85 + 2 )
          {
            sh = v79;
            operator delete(v152[0]);
            v79 = sh;
          }
          se = v79;
LABEL_81:
          a2 = 1;
          sub_AEA040((__int64)&v156);
          v12 = se;
          v10 = se;
          goto LABEL_30;
        }
      }
      else
      {
        v108 = v156.m128_u64[1];
        v109 = *(_DWORD *)(v156.m128_u64[1] + 14976);
        if ( v109 )
        {
          v121 = (unsigned int)(v109 - 1);
          *(_DWORD *)(v156.m128_u64[1] + 14976) = v121;
          v78 = *(_QWORD *)(v108 + 8 * v121 + 14848);
          v122 = *(unsigned int *)(v78 + 536);
          *(_BYTE *)v78 = 0;
          v123 = *(_QWORD *)(v78 + 528);
          *(_DWORD *)(v78 + 424) = 0;
          v124 = v123 + (v122 << 6);
          if ( v123 == v124 )
          {
            v83 = 1;
            v81 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v124 -= 64;
                v125 = *(void **)(v124 + 24);
                if ( v125 == (void *)(v124 + 40) )
                  break;
                operator delete(v125);
                if ( v123 == v124 )
                  goto LABEL_145;
              }
            }
            while ( v123 != v124 );
LABEL_145:
            v79 = sd;
            v81 = *(unsigned int *)(v78 + 424);
            v83 = v81 + 1;
          }
          *(_DWORD *)(v78 + 536) = 0;
          v111 = *(unsigned int *)(v78 + 428);
        }
        else
        {
          v110 = operator new(0x3A0u);
          v111 = 8;
          v83 = 1;
          v78 = v110;
          *(_BYTE *)v110 = 0;
          *(_QWORD *)(v110 + 96) = v110 + 112;
          *(_QWORD *)(v110 + 128) = v110 + 144;
          *(_QWORD *)(v110 + 160) = v110 + 176;
          *(_QWORD *)(v110 + 192) = v110 + 208;
          *(_QWORD *)(v110 + 224) = v110 + 240;
          *(_QWORD *)(v110 + 256) = v110 + 272;
          *(_QWORD *)(v110 + 288) = v110 + 304;
          *(_QWORD *)(v110 + 320) = v110 + 336;
          *(_QWORD *)(v110 + 352) = v110 + 368;
          *(_QWORD *)(v110 + 384) = v110 + 400;
          *(_QWORD *)(v110 + 416) = v110 + 432;
          *(_QWORD *)(v110 + 104) = 0;
          *(_BYTE *)(v110 + 112) = 0;
          *(_QWORD *)(v110 + 136) = 0;
          *(_BYTE *)(v110 + 144) = 0;
          *(_QWORD *)(v110 + 168) = 0;
          *(_BYTE *)(v110 + 176) = 0;
          *(_QWORD *)(v110 + 200) = 0;
          *(_BYTE *)(v110 + 208) = 0;
          *(_QWORD *)(v110 + 232) = 0;
          *(_BYTE *)(v110 + 240) = 0;
          *(_QWORD *)(v110 + 264) = 0;
          *(_BYTE *)(v110 + 272) = 0;
          *(_QWORD *)(v110 + 296) = 0;
          *(_BYTE *)(v110 + 304) = 0;
          *(_QWORD *)(v110 + 328) = 0;
          *(_BYTE *)(v110 + 336) = 0;
          *(_QWORD *)(v110 + 360) = 0;
          *(_BYTE *)(v110 + 368) = 0;
          *(_QWORD *)(v110 + 392) = 0;
          *(_BYTE *)(v110 + 400) = 0;
          *(_QWORD *)(v110 + 424) = 0x800000000LL;
          v79 = sd;
          *(_QWORD *)(v110 + 528) = v110 + 544;
          *(_QWORD *)(v110 + 536) = 0x600000000LL;
          v81 = 0;
        }
        v156.m128_u64[0] = v78;
        v145 = v80;
        LOBYTE(v146) = 1;
        if ( v83 <= v111 )
          goto LABEL_93;
      }
      sj = v79;
      sub_2237220(v78 + 416, v78 + 432, v83, 12);
      v81 = *(unsigned int *)(v78 + 424);
      v79 = sj;
      goto LABEL_93;
    }
    v47 = sub_FFF790(v20, v21, v22);
    if ( v12 < v47 )
    {
      a2 = 1;
      goto LABEL_20;
    }
    if ( s <= 1 )
    {
      a2 = 1;
      if ( v47 == v10 )
        goto LABEL_20;
    }
    v12 = v47;
    v10 = v47;
    a2 = 1;
LABEL_30:
    v29 = v151;
    v30 = _mm_load_si128(&v150);
    *(__m128i *)(v4 + 48) = _mm_load_si128(&v149);
    *(__m128i *)(v4 + 64) = v30;
    *(_QWORD *)(v4 + 80) = v29;
    if ( v140 > v12 )
      return a2;
  }
}
