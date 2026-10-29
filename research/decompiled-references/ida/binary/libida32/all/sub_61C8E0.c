__int64 __fastcall sub_61C8E0(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  size_t v4; // rbp
  int v5; // eax
  __int64 v6; // rax
  char *v7; // r8
  int v8; // r9d
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm4
  __m128i v16; // xmm0
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  char **v24; // rbx
  char *v25; // r12
  unsigned int v26; // r14d
  __m128i v27; // xmm1
  __m128i v28; // xmm4
  __m128i v29; // xmm0
  __m128i v30; // xmm3
  __m128i v31; // xmm2
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i si128; // xmm0
  __int64 v36; // rax
  const char *v37; // rcx
  __int64 v38; // rax
  char *v39; // r12
  __int64 v40; // rbx
  char *v41; // rbp
  unsigned __int64 v42; // rdx
  char *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rax
  __m128i v49; // xmm6
  __int64 v50; // r14
  __int64 v51; // r12
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  char **v59; // rbx
  char *v60; // r12
  unsigned int v61; // r14d
  __m128i v62; // xmm1
  __m128i v63; // xmm4
  __m128i v64; // xmm0
  __m128i v65; // xmm3
  __m128i v66; // xmm2
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i *v71; // rbp
  __int64 v72; // rbx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  char *v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rbp
  size_t v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  const char *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // r12
  int v85; // r13d
  __int64 v86; // rbx
  __int64 v87; // rax
  __m128i v88; // xmm7
  __int64 v89; // rcx
  __int64 v90; // r14
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 view_options; // rax
  bool v96; // zf
  char *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rbp
  size_t v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 result; // rax
  __int64 v104; // r12
  int v105; // r13d
  __int64 v106; // rbx
  __int64 v107; // rax
  __m128i v108; // xmm6
  __int64 v109; // rcx
  __int64 v110; // r14
  __int64 v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rax
  char *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  void *v118; // rax
  __int64 v119; // rax
  void *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  void *v123; // rax
  __int64 v125; // [rsp+0h] [rbp-70h]
  __m128i src; // [rsp+8h] [rbp-68h] BYREF
  char *v127; // [rsp+18h] [rbp-58h]
  __m128i v128; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v129; // [rsp+33h] [rbp-3Dh]
  unsigned int v130; // [rsp+34h] [rbp-3Ch]

  *(_QWORD *)a1 = &off_2AFD020;
  v3 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v123 = (void *)qalloc_or_throw(v4, a2);
    *(_QWORD *)(a1 + 32) = v4;
    *(_QWORD *)(a1 + 16) = v123;
    memcpy(v123, *((const void **)a2 + 1), v4);
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(_QWORD *)(a1 + 40) = *((_QWORD *)a2 + 4);
  v5 = *((_DWORD *)a2 + 10);
  *(_QWORD *)(a1 + 120) = -1;
  *(_DWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  merge_handler_ctr();
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)a1 = &off_2B08F10;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v6 = qvector_reserve(a1 + 152, 0, 100, 64);
  v9 = qword_2B0AD60;
  *(_QWORD *)(a1 + 152) = v6;
  v10 = v6;
  do
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( *v9 )
      {
        v12 = *((_DWORD *)v9 + 14);
        if ( (v12 & 0x10000) == 0 )
          break;
      }
      v9 += 8;
      if ( &unk_2B0C660 == (_UNKNOWN *)v9 )
        goto LABEL_10;
    }
    v13 = *(_QWORD *)(a1 + 160);
    v14 = _mm_loadl_epi64((const __m128i *)(v9 + 1));
    v15 = _mm_loadl_epi64((const __m128i *)v9 + 1);
    v7 = (char *)v9[3];
    v8 = *((unsigned __int8 *)v9 + 32);
    v16 = _mm_loadl_epi64((const __m128i *)(v9 + 5));
    v17 = _mm_loadl_epi64((const __m128i *)v9 + 3);
    v18 = _mm_cvtsi32_si128(*((_DWORD *)v9 + 15));
    if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v13 + 1) )
    {
      v129 = *((_BYTE *)v9 + 32);
      v127 = v7;
      v130 = _mm_cvtsi128_si32(v18);
      v128.m128i_i64[1] = v17.m128i_i64[0];
      v128.m128i_i64[0] = v16.m128i_i64[0];
      src.m128i_i64[1] = v15.m128i_i64[0];
      src.m128i_i64[0] = v14.m128i_i64[0];
      v116 = qvector_reserve(a1 + 152, v10, v13 + 1, 64);
      *(_QWORD *)(a1 + 152) = v116;
      v10 = v116;
      v18 = _mm_cvtsi32_si128(v130);
      v13 = *(_QWORD *)(a1 + 160);
      v17 = _mm_loadl_epi64((const __m128i *)&v128.m128i_u64[1]);
      v16 = _mm_loadl_epi64(&v128);
      v8 = v129;
      v7 = v127;
      v15 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v14 = _mm_loadl_epi64(&src);
    }
    v9 += 8;
    v19 = v10 + (v13 << 6);
    *(__m128i *)(v19 + 40) = _mm_unpacklo_epi64(v16, v17);
    *(_QWORD *)v19 = v11;
    *(_QWORD *)(v19 + 24) = v7;
    *(_BYTE *)(v19 + 32) = v8;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v14, v15);
    *(_QWORD *)(v19 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v18).m128i_u64[0];
    v20 = *(_QWORD *)(a1 + 152);
    v21 = *(_QWORD *)(a1 + 160) + 1LL;
    *(_QWORD *)(a1 + 160) = v21;
    *(_DWORD *)(v20 + (v21 << 6) - 8) &= ~0x2000u;
    v10 = *(_QWORD *)(a1 + 152);
  }
  while ( &unk_2B0C660 != (_UNKNOWN *)v9 );
LABEL_10:
  v22 = *(_QWORD *)(a1 + 160);
  v23 = *(_QWORD *)(a1 + 168);
  if ( v23 < v22 + 107 )
  {
    v122 = qvector_reserve(a1 + 152, v10, v22 + 107, 64);
    *(_QWORD *)(a1 + 152) = v122;
    v10 = v122;
    v23 = *(_QWORD *)(a1 + 168);
    v22 = *(_QWORD *)(a1 + 160);
  }
  v24 = &off_2B092A0;
  do
  {
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 )
      {
        v26 = *((_DWORD *)v24 + 14);
        if ( (v26 & 0x10000) == 0 )
          break;
      }
      v24 += 8;
      if ( qword_2B0AD60 == v24 )
        goto LABEL_19;
    }
    v27 = _mm_loadl_epi64((const __m128i *)(v24 + 1));
    v28 = _mm_loadl_epi64((const __m128i *)v24 + 1);
    v7 = v24[3];
    v8 = *((unsigned __int8 *)v24 + 32);
    v29 = _mm_loadl_epi64((const __m128i *)(v24 + 5));
    v30 = _mm_loadl_epi64((const __m128i *)v24 + 3);
    v31 = _mm_cvtsi32_si128(*((_DWORD *)v24 + 15));
    if ( v23 < v22 + 1 )
    {
      v129 = *((_BYTE *)v24 + 32);
      v127 = v7;
      v130 = _mm_cvtsi128_si32(v31);
      v128.m128i_i64[1] = v30.m128i_i64[0];
      v128.m128i_i64[0] = v29.m128i_i64[0];
      src.m128i_i64[1] = v28.m128i_i64[0];
      src.m128i_i64[0] = v27.m128i_i64[0];
      v117 = qvector_reserve(a1 + 152, v10, v22 + 1, 64);
      *(_QWORD *)(a1 + 152) = v117;
      v10 = v117;
      v31 = _mm_cvtsi32_si128(v130);
      v22 = *(_QWORD *)(a1 + 160);
      v30 = _mm_loadl_epi64((const __m128i *)&v128.m128i_u64[1]);
      v29 = _mm_loadl_epi64(&v128);
      v8 = v129;
      v7 = v127;
      v28 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v27 = _mm_loadl_epi64(&src);
    }
    v24 += 8;
    v32 = v10 + (v22 << 6);
    *(__m128i *)(v32 + 40) = _mm_unpacklo_epi64(v29, v30);
    *(_QWORD *)v32 = v25;
    *(_QWORD *)(v32 + 24) = v7;
    *(_BYTE *)(v32 + 32) = v8;
    *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v27, v28);
    *(_QWORD *)(v32 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), v31).m128i_u64[0];
    v33 = *(_QWORD *)(a1 + 152);
    v34 = *(_QWORD *)(a1 + 160) + 1LL;
    *(_QWORD *)(a1 + 160) = v34;
    *(_DWORD *)(v33 + (v34 << 6) - 8) &= ~0x2000u;
    v10 = *(_QWORD *)(a1 + 152);
    v23 = *(_QWORD *)(a1 + 168);
    v22 = *(_QWORD *)(a1 + 160);
  }
  while ( qword_2B0AD60 != v24 );
LABEL_19:
  if ( v23 < v22 + 1 )
  {
    v121 = qvector_reserve(a1 + 152, v10, v22 + 1, 64);
    *(_QWORD *)(a1 + 152) = v121;
    v10 = v121;
    v22 = *(_QWORD *)(a1 + 160);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D40);
  v36 = v10 + (v22 << 6);
  *(_QWORD *)v36 = "analysis.got_address";
  v37 = "$ got";
  *(_QWORD *)(v36 + 24) = 0;
  *(_BYTE *)(v36 + 32) = 65;
  *(_QWORD *)(v36 + 40) = 0;
  *(_QWORD *)(v36 + 48) = "$ got";
  *(_QWORD *)(v36 + 56) = 513;
  *(__m128i *)(v36 + 8) = si128;
  v38 = *(_QWORD *)(a1 + 160);
  v39 = *(char **)(a1 + 152);
  *(_QWORD *)(a1 + 160) = v38 + 1;
  v40 = (v38 + 1) << 6;
  v41 = &v39[v40];
  if ( v39 != &v39[v40] )
  {
    if ( v40 >> 6 )
    {
      _BitScanReverse64(&v42, v40 >> 6);
      sub_61C3F0((__int64)v39, (__m128i *)&v39[v40], 2LL * (int)v42, (int)"$ got", (int)v7, v8);
      if ( v40 > 1024 )
      {
        v43 = v39 + 1024;
        v10 = (__int64)(v39 + 1024);
        sub_60D930(v39, v39 + 1024);
        do
        {
          v44 = (__int64)v43;
          v43 += 64;
          sub_60D880(v44);
        }
        while ( v41 != v43 );
        goto LABEL_26;
      }
    }
    else
    {
      sub_61C3F0((__int64)v39, (__m128i *)&v39[v40], -2, (int)"$ got", (int)v7, v8);
    }
    v10 = (__int64)&v39[v40];
    sub_60D930(v39, &v39[v40]);
  }
LABEL_26:
  v45 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = 0;
  if ( *(int *)(v45 + 28) > 0 )
  {
    v46 = 0;
    do
    {
      v47 = operator new(0x88u);
      v48 = *(_QWORD *)(a1 + 8);
      v49 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v50 = *(_QWORD *)(a1 + 160);
      v51 = *(_QWORD *)(a1 + 152);
      v52 = *(int *)(v48 + 4LL * (int)v46 + 16);
      *(_QWORD *)(v47 + 32) = v48;
      *(_DWORD *)(v47 + 12) = -1;
      *(_DWORD *)(v47 + 8) = v52;
      *(_QWORD *)v47 = &off_2B08F60;
      *(__m128i *)(v47 + 16) = v49;
      *(_QWORD *)(v47 + 40) = switch_dbctx(v52);
      v10 = 0xFFFFFFFFLL;
      *(_DWORD *)(v47 + 48) = -1;
      *(_QWORD *)(v47 + 104) = 0;
      *(_QWORD *)(v47 + 112) = v51;
      *(_QWORD *)(v47 + 120) = v50;
      *(_OWORD *)(v47 + 56) = 0;
      *(_OWORD *)(v47 + 72) = 0;
      *(_OWORD *)(v47 + 88) = 0;
      sub_616DF0(v47, 0xFFFFFFFF);
      *(_QWORD *)v47 = &off_2B08D50;
      v53 = *(int *)(v47 + 8);
      *(_WORD *)(v47 + 128) = 0;
      v54 = switch_dbctx(v53);
      v55 = v54 + 552;
      LODWORD(v54) = *(_DWORD *)(v54 + 1332);
      *(_DWORD *)(v47 + 12) = v46;
      *(_QWORD *)(a1 + 8 * v46++ + 56) = v47;
      *(_DWORD *)(v47 + 48) = v54;
      v56 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v47 + 72) = v55;
      *(_QWORD *)(v47 + 56) = v55;
    }
    while ( *(_DWORD *)(v56 + 28) > (int)v46 );
  }
  v57 = *(_QWORD *)(a1 + 184);
  v58 = *(_QWORD *)(a1 + 176);
  if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v57 + 10) )
  {
    v10 = *(_QWORD *)(a1 + 176);
    v119 = qvector_reserve(a1 + 176, v10, v57 + 10, 64);
    *(_QWORD *)(a1 + 176) = v119;
    v58 = v119;
    v57 = *(_QWORD *)(a1 + 184);
  }
  v59 = &off_2B09020;
  do
  {
    while ( 1 )
    {
      v60 = *v59;
      if ( *v59 )
      {
        v61 = *((_DWORD *)v59 + 14);
        if ( (v61 & 0x10000) == 0 )
          break;
      }
      v59 += 8;
      if ( &off_2B092A0 == v59 )
        goto LABEL_38;
    }
    v62 = _mm_loadl_epi64((const __m128i *)(v59 + 1));
    v63 = _mm_loadl_epi64((const __m128i *)v59 + 1);
    v7 = v59[3];
    v8 = *((unsigned __int8 *)v59 + 32);
    v64 = _mm_loadl_epi64((const __m128i *)(v59 + 5));
    v65 = _mm_loadl_epi64((const __m128i *)v59 + 3);
    v66 = _mm_cvtsi32_si128(*((_DWORD *)v59 + 15));
    if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v57 + 1) )
    {
      v10 = v58;
      v129 = *((_BYTE *)v59 + 32);
      v127 = v7;
      v130 = _mm_cvtsi128_si32(v66);
      v128.m128i_i64[1] = v65.m128i_i64[0];
      v128.m128i_i64[0] = v64.m128i_i64[0];
      src.m128i_i64[1] = v63.m128i_i64[0];
      src.m128i_i64[0] = v62.m128i_i64[0];
      v115 = qvector_reserve(a1 + 176, v58, v57 + 1, 64);
      *(_QWORD *)(a1 + 176) = v115;
      v58 = v115;
      v66 = _mm_cvtsi32_si128(v130);
      v57 = *(_QWORD *)(a1 + 184);
      v65 = _mm_loadl_epi64((const __m128i *)&v128.m128i_u64[1]);
      v64 = _mm_loadl_epi64(&v128);
      v8 = v129;
      v7 = v127;
      v63 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v62 = _mm_loadl_epi64(&src);
    }
    v59 += 8;
    v67 = v58 + (v57 << 6);
    *(__m128i *)(v67 + 40) = _mm_unpacklo_epi64(v64, v65);
    *(_QWORD *)v67 = v60;
    *(_QWORD *)(v67 + 24) = v7;
    *(_BYTE *)(v67 + 32) = v8;
    *(__m128i *)(v67 + 8) = _mm_unpacklo_epi64(v62, v63);
    *(_QWORD *)(v67 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v61), v66).m128i_u64[0];
    v68 = *(_QWORD *)(a1 + 176);
    v69 = *(_QWORD *)(a1 + 184) + 1LL;
    *(_QWORD *)(a1 + 184) = v69;
    *(_DWORD *)(v68 + (v69 << 6) - 8) &= ~0x2000u;
    v58 = *(_QWORD *)(a1 + 176);
    v57 = *(_QWORD *)(a1 + 184);
  }
  while ( &off_2B092A0 != v59 );
LABEL_38:
  v70 = v57 << 6;
  v71 = (__m128i *)(v58 + v70);
  v72 = v70;
  if ( v58 != v58 + v70 )
  {
    v73 = v70 >> 6;
    if ( v73 )
    {
      _BitScanReverse64(&v74, v73);
      src.m128i_i64[0] = v58;
      sub_61C3F0(v58, v71, 2LL * (int)v74, (int)v37, (int)v7, v8);
      v75 = (char *)src.m128i_i64[0];
      if ( v72 > 1024 )
      {
        v76 = src.m128i_i64[0] + 1024;
        v10 = src.m128i_i64[0] + 1024;
        sub_60D930((char *)src.m128i_i64[0], (char *)(src.m128i_i64[0] + 1024));
        do
        {
          v77 = v76;
          v76 += 64;
          sub_60D880(v77);
        }
        while ( v71 != (__m128i *)v76 );
        goto LABEL_43;
      }
    }
    else
    {
      src.m128i_i64[0] = v58;
      sub_61C3F0(v58, v71, -2, (int)v37, (int)v7, v8);
      v75 = (char *)src.m128i_i64[0];
    }
    v10 = (__int64)v71;
    sub_60D930(v75, v71->m128i_i8);
  }
LABEL_43:
  v78 = operator new(0x98u);
  *(_QWORD *)v78 = &off_2AFD020;
  v79 = *((_QWORD *)a2 + 2);
  v80 = *(_QWORD *)a2;
  *(_QWORD *)(v78 + 16) = 0;
  *(_OWORD *)(v78 + 24) = 0;
  *(_QWORD *)(v78 + 8) = v80;
  if ( v79 )
  {
    v118 = (void *)qalloc_or_throw(v79, (const char *)v10);
    *(_QWORD *)(v78 + 16) = v118;
    *(_QWORD *)(v78 + 32) = v79;
    memcpy(v118, *((const void **)a2 + 1), v79);
    *(_QWORD *)(v78 + 24) = v79;
  }
  *(_QWORD *)(v78 + 120) = -1;
  *(_QWORD *)(v78 + 128) = -1;
  v81 = *((_QWORD *)a2 + 4);
  *(_OWORD *)(v78 + 56) = 0;
  *(_DWORD *)(v78 + 144) = 0;
  *(_QWORD *)(v78 + 40) = v81;
  LODWORD(v81) = *((_DWORD *)a2 + 10);
  v82 = "Graph mode";
  *(_OWORD *)(v78 + 72) = 0;
  *(_DWORD *)(v78 + 48) = v81;
  *(_QWORD *)(v78 + 136) = 0xFFFFFFFFLL;
  *(_OWORD *)(v78 + 88) = 0;
  *(_OWORD *)(v78 + 104) = 0;
  merge_handler_ctr();
  v83 = *(_QWORD *)(v78 + 8);
  *(_QWORD *)(v78 + 72) = 0;
  if ( *(int *)(v83 + 28) > 0 )
  {
    v84 = 0;
    do
    {
      v85 = v84;
      v86 = operator new(0x88u);
      v87 = *(_QWORD *)(v78 + 8);
      v88 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v89 = *(_QWORD *)(a1 + 176);
      v90 = *(_QWORD *)(a1 + 184);
      v91 = *(int *)(v87 + 4LL * (int)v84 + 16);
      *(_QWORD *)(v86 + 32) = v87;
      *(_DWORD *)(v86 + 12) = -1;
      *(_DWORD *)(v86 + 8) = v91;
      *(_QWORD *)v86 = &off_2B08F60;
      *(__m128i *)(v86 + 16) = v88;
      src.m128i_i64[0] = v89;
      v92 = switch_dbctx(v91);
      v93 = src.m128i_i64[0];
      *(_QWORD *)(v86 + 40) = v92;
      *(_DWORD *)(v86 + 48) = -1;
      v82 = (const char *)0xFFFFFFFFLL;
      *(_QWORD *)(v86 + 104) = 0;
      *(_QWORD *)(v86 + 112) = v93;
      *(_QWORD *)(v86 + 120) = v90;
      *(_OWORD *)(v86 + 56) = 0;
      *(_OWORD *)(v86 + 72) = 0;
      *(_OWORD *)(v86 + 88) = 0;
      sub_616DF0(v86, 0xFFFFFFFF);
      v94 = *(int *)(v86 + 8);
      *(_QWORD *)v86 = &off_2B08E08;
      *(_WORD *)(v86 + 128) = 1;
      switch_dbctx(v94);
      view_options = get_view_options(*(unsigned __int8 *)(v86 + 128));
      v96 = *(_BYTE *)(v86 + 128) == 0;
      *(_QWORD *)(v86 + 72) = view_options;
      *(_QWORD *)(v86 + 56) = view_options;
      v97 = (char *)"text";
      *(_DWORD *)(v86 + 48) = -1;
      if ( !v96 )
        v97 = "graph";
      *(_QWORD *)(v78 + 8 * v84++ + 56) = v86;
      *(_QWORD *)(v86 + 104) = v97;
      v98 = *(_QWORD *)(v78 + 8);
      *(_DWORD *)(v86 + 12) = v85;
    }
    while ( *(_DWORD *)(v98 + 28) > (int)v84 );
  }
  v99 = operator new(0xA0u);
  *(_QWORD *)v99 = &off_2AFD020;
  v100 = *((_QWORD *)a2 + 2);
  v101 = *(_QWORD *)a2;
  *(_QWORD *)(v99 + 16) = 0;
  *(_OWORD *)(v99 + 24) = 0;
  *(_QWORD *)(v99 + 8) = v101;
  if ( v100 )
  {
    v120 = (void *)qalloc_or_throw(v100, v82);
    *(_QWORD *)(v99 + 16) = v120;
    *(_QWORD *)(v99 + 32) = v100;
    memcpy(v120, *((const void **)a2 + 1), v100);
    *(_QWORD *)(v99 + 24) = v100;
  }
  *(_QWORD *)(v99 + 120) = -1;
  *(_QWORD *)(v99 + 128) = -1;
  v102 = *((_QWORD *)a2 + 4);
  *(_OWORD *)(v99 + 56) = 0;
  *(_DWORD *)(v99 + 144) = 0;
  *(_QWORD *)(v99 + 40) = v102;
  LODWORD(v102) = *((_DWORD *)a2 + 10);
  *(_OWORD *)(v99 + 72) = 0;
  *(_DWORD *)(v99 + 48) = v102;
  *(_QWORD *)(v99 + 136) = 0xFFFFFFFFLL;
  *(_OWORD *)(v99 + 88) = 0;
  *(_OWORD *)(v99 + 104) = 0;
  merge_handler_ctr();
  *(_QWORD *)(v99 + 72) = 0;
  *(_QWORD *)v99 = &off_2B08EC0;
  result = *(_QWORD *)(v99 + 8);
  *(_QWORD *)(v99 + 148) = 0;
  *(_DWORD *)(v99 + 156) = 0;
  if ( *(int *)(result + 28) > 0 )
  {
    v104 = 0;
    do
    {
      v105 = v104;
      v106 = operator new(0x88u);
      v107 = *(_QWORD *)(v99 + 8);
      v108 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v109 = *(_QWORD *)(a1 + 176);
      v110 = *(_QWORD *)(a1 + 184);
      v111 = *(int *)(v107 + 4LL * (int)v104 + 16);
      *(_QWORD *)(v106 + 32) = v107;
      *(_DWORD *)(v106 + 12) = -1;
      *(_DWORD *)(v106 + 8) = v111;
      *(_QWORD *)v106 = &off_2B08F60;
      *(__m128i *)(v106 + 16) = v108;
      v125 = v109;
      *(_QWORD *)(v106 + 40) = switch_dbctx(v111);
      *(_DWORD *)(v106 + 48) = -1;
      *(_QWORD *)(v106 + 104) = 0;
      *(_QWORD *)(v106 + 112) = v125;
      *(_QWORD *)(v106 + 120) = v110;
      *(_OWORD *)(v106 + 56) = 0;
      *(_OWORD *)(v106 + 72) = 0;
      *(_OWORD *)(v106 + 88) = 0;
      sub_616DF0(v106, 0xFFFFFFFF);
      v112 = *(int *)(v106 + 8);
      *(_QWORD *)v106 = &off_2B08E08;
      *(_WORD *)(v106 + 128) = 0;
      switch_dbctx(v112);
      v113 = get_view_options(*(unsigned __int8 *)(v106 + 128));
      v96 = *(_BYTE *)(v106 + 128) == 0;
      *(_QWORD *)(v106 + 72) = v113;
      *(_QWORD *)(v106 + 56) = v113;
      v114 = (char *)"text";
      *(_DWORD *)(v106 + 48) = -1;
      if ( !v96 )
        v114 = "graph";
      *(_QWORD *)(v99 + 8 * v104++ + 56) = v106;
      *(_QWORD *)(v106 + 104) = v114;
      result = *(_QWORD *)(v99 + 8);
      *(_DWORD *)(v106 + 12) = v105;
    }
    while ( *(_DWORD *)(result + 28) > (int)v104 );
  }
  return result;
}

