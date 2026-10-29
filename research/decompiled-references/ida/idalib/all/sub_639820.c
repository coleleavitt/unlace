__int64 __fastcall sub_639820(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  char *v9; // r8
  int v10; // r9d
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r14d
  __int64 v15; // rax
  __m128i v16; // xmm1
  __m128i v17; // xmm4
  __m128i v18; // xmm0
  __m128i v19; // xmm3
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  char **v26; // rbx
  char *v27; // r12
  unsigned int v28; // r14d
  __m128i v29; // xmm1
  __m128i v30; // xmm4
  __m128i v31; // xmm0
  __m128i v32; // xmm3
  __m128i v33; // xmm2
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i si128; // xmm0
  __int64 v38; // rax
  const char *v39; // rcx
  __int64 v40; // rax
  char *v41; // r12
  __int64 v42; // rbx
  char *v43; // rbp
  unsigned __int64 v44; // rdx
  char *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rbx
  __int64 v50; // rax
  __m128i v51; // xmm6
  __int64 v52; // r14
  __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  char **v62; // rbx
  char *v63; // r12
  unsigned int v64; // r14d
  __m128i v65; // xmm1
  __m128i v66; // xmm4
  __m128i v67; // xmm0
  __m128i v68; // xmm3
  __m128i v69; // xmm2
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __m128i *v74; // rbp
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  char *v78; // rdi
  __int64 v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // rbp
  size_t v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r12
  int v87; // r13d
  __int64 v88; // rbx
  __int64 v89; // rax
  __m128i v90; // xmm7
  __int64 v91; // rcx
  __int64 v92; // r14
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 view_options; // rax
  bool v98; // zf
  char *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rbp
  size_t v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 result; // rax
  __int64 v106; // r12
  int v107; // r13d
  __int64 v108; // rbx
  __int64 v109; // rax
  __m128i v110; // xmm6
  __int64 v111; // rcx
  __int64 v112; // r14
  __int64 v113; // rdi
  __int64 v114; // rdi
  __int64 v115; // rax
  char *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  void *v120; // rax
  __int64 v121; // rax
  void *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  void *v125; // rax
  __int64 v127; // [rsp+0h] [rbp-70h]
  __m128i src; // [rsp+8h] [rbp-68h] BYREF
  char *v129; // [rsp+18h] [rbp-58h]
  __m128i v130; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v131; // [rsp+33h] [rbp-3Dh]
  unsigned int v132; // [rsp+34h] [rbp-3Ch]

  *(_QWORD *)a1 = &off_2B26160;
  v5 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v5;
  *(_OWORD *)(a1 + 24) = 0;
  v6 = a2[2];
  if ( v6 )
  {
    v125 = (void *)qalloc_or_throw(v6);
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 16) = v125;
    memcpy(v125, (const void *)a2[1], v6);
    *(_QWORD *)(a1 + 24) = v6;
  }
  *(_QWORD *)(a1 + 40) = a2[4];
  v7 = *((_DWORD *)a2 + 10);
  *(_QWORD *)(a1 + 120) = -1;
  *(_DWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 128) = -1;
  *(_QWORD *)(a1 + 136) = -1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  merge_handler_ctr(a1, a3);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)a1 = &off_2B32ED0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v8 = qvector_reserve(a1 + 152, 0, 100, 64);
  v11 = qword_2B34D20;
  *(_QWORD *)(a1 + 152) = v8;
  v12 = v8;
  do
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 )
      {
        v14 = *((_DWORD *)v11 + 14);
        if ( (v14 & 0x10000) == 0 )
          break;
      }
      v11 += 8;
      if ( &unk_2B36620 == (_UNKNOWN *)v11 )
        goto LABEL_10;
    }
    v15 = *(_QWORD *)(a1 + 160);
    v16 = _mm_loadl_epi64((const __m128i *)(v11 + 1));
    v17 = _mm_loadl_epi64((const __m128i *)v11 + 1);
    v9 = (char *)v11[3];
    v10 = *((unsigned __int8 *)v11 + 32);
    v18 = _mm_loadl_epi64((const __m128i *)(v11 + 5));
    v19 = _mm_loadl_epi64((const __m128i *)v11 + 3);
    v20 = _mm_cvtsi32_si128(*((_DWORD *)v11 + 15));
    if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v15 + 1) )
    {
      v131 = *((_BYTE *)v11 + 32);
      v129 = v9;
      v132 = _mm_cvtsi128_si32(v20);
      v130.m128i_i64[1] = v19.m128i_i64[0];
      v130.m128i_i64[0] = v18.m128i_i64[0];
      src.m128i_i64[1] = v17.m128i_i64[0];
      src.m128i_i64[0] = v16.m128i_i64[0];
      v118 = qvector_reserve(a1 + 152, v12, v15 + 1, 64);
      *(_QWORD *)(a1 + 152) = v118;
      v12 = v118;
      v20 = _mm_cvtsi32_si128(v132);
      v15 = *(_QWORD *)(a1 + 160);
      v19 = _mm_loadl_epi64((const __m128i *)&v130.m128i_u64[1]);
      v18 = _mm_loadl_epi64(&v130);
      v10 = v131;
      v9 = v129;
      v17 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v16 = _mm_loadl_epi64(&src);
    }
    v11 += 8;
    v21 = v12 + (v15 << 6);
    *(__m128i *)(v21 + 40) = _mm_unpacklo_epi64(v18, v19);
    *(_QWORD *)v21 = v13;
    *(_QWORD *)(v21 + 24) = v9;
    *(_BYTE *)(v21 + 32) = v10;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v16, v17);
    *(_QWORD *)(v21 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v20).m128i_u64[0];
    v22 = *(_QWORD *)(a1 + 152);
    v23 = *(_QWORD *)(a1 + 160) + 1LL;
    *(_QWORD *)(a1 + 160) = v23;
    *(_DWORD *)(v22 + (v23 << 6) - 8) &= ~0x2000u;
    v12 = *(_QWORD *)(a1 + 152);
  }
  while ( &unk_2B36620 != (_UNKNOWN *)v11 );
LABEL_10:
  v24 = *(_QWORD *)(a1 + 160);
  v25 = *(_QWORD *)(a1 + 168);
  if ( v25 < v24 + 107 )
  {
    v124 = qvector_reserve(a1 + 152, v12, v24 + 107, 64);
    *(_QWORD *)(a1 + 152) = v124;
    v12 = v124;
    v25 = *(_QWORD *)(a1 + 168);
    v24 = *(_QWORD *)(a1 + 160);
  }
  v26 = &off_2B33260;
  do
  {
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 )
      {
        v28 = *((_DWORD *)v26 + 14);
        if ( (v28 & 0x10000) == 0 )
          break;
      }
      v26 += 8;
      if ( qword_2B34D20 == v26 )
        goto LABEL_19;
    }
    v29 = _mm_loadl_epi64((const __m128i *)(v26 + 1));
    v30 = _mm_loadl_epi64((const __m128i *)v26 + 1);
    v9 = v26[3];
    v10 = *((unsigned __int8 *)v26 + 32);
    v31 = _mm_loadl_epi64((const __m128i *)(v26 + 5));
    v32 = _mm_loadl_epi64((const __m128i *)v26 + 3);
    v33 = _mm_cvtsi32_si128(*((_DWORD *)v26 + 15));
    if ( v25 < v24 + 1 )
    {
      v131 = *((_BYTE *)v26 + 32);
      v129 = v9;
      v132 = _mm_cvtsi128_si32(v33);
      v130.m128i_i64[1] = v32.m128i_i64[0];
      v130.m128i_i64[0] = v31.m128i_i64[0];
      src.m128i_i64[1] = v30.m128i_i64[0];
      src.m128i_i64[0] = v29.m128i_i64[0];
      v119 = qvector_reserve(a1 + 152, v12, v24 + 1, 64);
      *(_QWORD *)(a1 + 152) = v119;
      v12 = v119;
      v33 = _mm_cvtsi32_si128(v132);
      v24 = *(_QWORD *)(a1 + 160);
      v32 = _mm_loadl_epi64((const __m128i *)&v130.m128i_u64[1]);
      v31 = _mm_loadl_epi64(&v130);
      v10 = v131;
      v9 = v129;
      v30 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v29 = _mm_loadl_epi64(&src);
    }
    v26 += 8;
    v34 = v12 + (v24 << 6);
    *(__m128i *)(v34 + 40) = _mm_unpacklo_epi64(v31, v32);
    *(_QWORD *)v34 = v27;
    *(_QWORD *)(v34 + 24) = v9;
    *(_BYTE *)(v34 + 32) = v10;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v29, v30);
    *(_QWORD *)(v34 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v33).m128i_u64[0];
    v35 = *(_QWORD *)(a1 + 152);
    v36 = *(_QWORD *)(a1 + 160) + 1LL;
    *(_QWORD *)(a1 + 160) = v36;
    *(_DWORD *)(v35 + (v36 << 6) - 8) &= ~0x2000u;
    v12 = *(_QWORD *)(a1 + 152);
    v25 = *(_QWORD *)(a1 + 168);
    v24 = *(_QWORD *)(a1 + 160);
  }
  while ( qword_2B34D20 != v26 );
LABEL_19:
  if ( v25 < v24 + 1 )
  {
    v123 = qvector_reserve(a1 + 152, v12, v24 + 1, 64);
    *(_QWORD *)(a1 + 152) = v123;
    v12 = v123;
    v24 = *(_QWORD *)(a1 + 160);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v38 = v12 + (v24 << 6);
  *(_QWORD *)v38 = "analysis.got_address";
  v39 = "$ got";
  *(_QWORD *)(v38 + 24) = 0;
  *(_BYTE *)(v38 + 32) = 65;
  *(_QWORD *)(v38 + 40) = 0;
  *(_QWORD *)(v38 + 48) = "$ got";
  *(_QWORD *)(v38 + 56) = 513;
  *(__m128i *)(v38 + 8) = si128;
  v40 = *(_QWORD *)(a1 + 160);
  v41 = *(char **)(a1 + 152);
  *(_QWORD *)(a1 + 160) = v40 + 1;
  v42 = (v40 + 1) << 6;
  v43 = &v41[v42];
  if ( v41 != &v41[v42] )
  {
    if ( v42 >> 6 )
    {
      _BitScanReverse64(&v44, v42 >> 6);
      sub_639330((__int64)v41, (__m128i *)&v41[v42], 2LL * (int)v44, (int)"$ got", (int)v9, v10);
      if ( v42 > 1024 )
      {
        v45 = v41 + 1024;
        sub_629D90(v41, v41 + 1024);
        do
        {
          v46 = (__int64)v45;
          v45 += 64;
          sub_629CE0(v46);
        }
        while ( v43 != v45 );
        goto LABEL_26;
      }
    }
    else
    {
      sub_639330((__int64)v41, (__m128i *)&v41[v42], -2, (int)"$ got", (int)v9, v10);
    }
    sub_629D90(v41, &v41[v42]);
  }
LABEL_26:
  v47 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = 0;
  if ( *(int *)(v47 + 28) > 0 )
  {
    v48 = 0;
    do
    {
      v49 = operator new(0x88u);
      v50 = *(_QWORD *)(a1 + 8);
      v51 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v52 = *(_QWORD *)(a1 + 160);
      v53 = *(_QWORD *)(a1 + 152);
      v54 = *(int *)(v50 + 4LL * (int)v48 + 16);
      *(_QWORD *)(v49 + 32) = v50;
      *(_DWORD *)(v49 + 12) = -1;
      *(_DWORD *)(v49 + 8) = v54;
      *(_QWORD *)v49 = &off_2B32F20;
      *(__m128i *)(v49 + 16) = v51;
      *(_QWORD *)(v49 + 40) = switch_dbctx(v54);
      *(_QWORD *)(v49 + 48) = -1;
      *(_QWORD *)(v49 + 104) = 0;
      *(_QWORD *)(v49 + 112) = v53;
      *(_QWORD *)(v49 + 120) = v52;
      *(_OWORD *)(v49 + 56) = 0;
      *(_OWORD *)(v49 + 72) = 0;
      *(_OWORD *)(v49 + 88) = 0;
      sub_633A00((_QWORD *)v49, -1);
      *(_QWORD *)v49 = &off_2B32D10;
      v55 = *(int *)(v49 + 8);
      *(_WORD *)(v49 + 128) = 0;
      v56 = switch_dbctx(v55);
      v57 = v56 + 640;
      v58 = *(_QWORD *)(v56 + 1520);
      *(_QWORD *)(a1 + 8 * v48 + 56) = v49;
      *(_DWORD *)(v49 + 12) = v48++;
      *(_QWORD *)(v49 + 48) = v58;
      v59 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v49 + 72) = v57;
      *(_QWORD *)(v49 + 56) = v57;
    }
    while ( *(_DWORD *)(v59 + 28) > (int)v48 );
  }
  v60 = *(_QWORD *)(a1 + 184);
  v61 = *(_QWORD *)(a1 + 176);
  if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v60 + 10) )
  {
    v121 = qvector_reserve(a1 + 176, *(_QWORD *)(a1 + 176), v60 + 10, 64);
    *(_QWORD *)(a1 + 176) = v121;
    v61 = v121;
    v60 = *(_QWORD *)(a1 + 184);
  }
  v62 = &off_2B32FE0;
  do
  {
    while ( 1 )
    {
      v63 = *v62;
      if ( *v62 )
      {
        v64 = *((_DWORD *)v62 + 14);
        if ( (v64 & 0x10000) == 0 )
          break;
      }
      v62 += 8;
      if ( &off_2B33260 == v62 )
        goto LABEL_38;
    }
    v65 = _mm_loadl_epi64((const __m128i *)(v62 + 1));
    v66 = _mm_loadl_epi64((const __m128i *)v62 + 1);
    v9 = v62[3];
    v10 = *((unsigned __int8 *)v62 + 32);
    v67 = _mm_loadl_epi64((const __m128i *)(v62 + 5));
    v68 = _mm_loadl_epi64((const __m128i *)v62 + 3);
    v69 = _mm_cvtsi32_si128(*((_DWORD *)v62 + 15));
    if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v60 + 1) )
    {
      v131 = *((_BYTE *)v62 + 32);
      v129 = v9;
      v132 = _mm_cvtsi128_si32(v69);
      v130.m128i_i64[1] = v68.m128i_i64[0];
      v130.m128i_i64[0] = v67.m128i_i64[0];
      src.m128i_i64[1] = v66.m128i_i64[0];
      src.m128i_i64[0] = v65.m128i_i64[0];
      v117 = qvector_reserve(a1 + 176, v61, v60 + 1, 64);
      *(_QWORD *)(a1 + 176) = v117;
      v61 = v117;
      v69 = _mm_cvtsi32_si128(v132);
      v60 = *(_QWORD *)(a1 + 184);
      v68 = _mm_loadl_epi64((const __m128i *)&v130.m128i_u64[1]);
      v67 = _mm_loadl_epi64(&v130);
      v10 = v131;
      v9 = v129;
      v66 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
      v65 = _mm_loadl_epi64(&src);
    }
    v62 += 8;
    v70 = v61 + (v60 << 6);
    *(__m128i *)(v70 + 40) = _mm_unpacklo_epi64(v67, v68);
    *(_QWORD *)v70 = v63;
    *(_QWORD *)(v70 + 24) = v9;
    *(_BYTE *)(v70 + 32) = v10;
    *(__m128i *)(v70 + 8) = _mm_unpacklo_epi64(v65, v66);
    *(_QWORD *)(v70 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64), v69).m128i_u64[0];
    v71 = *(_QWORD *)(a1 + 176);
    v72 = *(_QWORD *)(a1 + 184) + 1LL;
    *(_QWORD *)(a1 + 184) = v72;
    *(_DWORD *)(v71 + (v72 << 6) - 8) &= ~0x2000u;
    v61 = *(_QWORD *)(a1 + 176);
    v60 = *(_QWORD *)(a1 + 184);
  }
  while ( &off_2B33260 != v62 );
LABEL_38:
  v73 = v60 << 6;
  v74 = (__m128i *)(v61 + v73);
  v75 = v73;
  if ( v61 != v61 + v73 )
  {
    v76 = v73 >> 6;
    if ( v76 )
    {
      _BitScanReverse64(&v77, v76);
      src.m128i_i64[0] = v61;
      sub_639330(v61, v74, 2LL * (int)v77, (int)v39, (int)v9, v10);
      v78 = (char *)src.m128i_i64[0];
      if ( v75 > 1024 )
      {
        v79 = src.m128i_i64[0] + 1024;
        sub_629D90((char *)src.m128i_i64[0], (char *)(src.m128i_i64[0] + 1024));
        do
        {
          v80 = v79;
          v79 += 64;
          sub_629CE0(v80);
        }
        while ( v74 != (__m128i *)v79 );
        goto LABEL_43;
      }
    }
    else
    {
      src.m128i_i64[0] = v61;
      sub_639330(v61, v74, -2, (int)v39, (int)v9, v10);
      v78 = (char *)src.m128i_i64[0];
    }
    sub_629D90(v78, v74->m128i_i8);
  }
LABEL_43:
  v81 = operator new(0x98u);
  *(_QWORD *)v81 = &off_2B26160;
  v82 = a2[2];
  v83 = *a2;
  *(_QWORD *)(v81 + 16) = 0;
  *(_OWORD *)(v81 + 24) = 0;
  *(_QWORD *)(v81 + 8) = v83;
  if ( v82 )
  {
    v120 = (void *)qalloc_or_throw(v82);
    *(_QWORD *)(v81 + 16) = v120;
    *(_QWORD *)(v81 + 32) = v82;
    memcpy(v120, (const void *)a2[1], v82);
    *(_QWORD *)(v81 + 24) = v82;
  }
  *(_QWORD *)(v81 + 120) = -1;
  *(_QWORD *)(v81 + 128) = -1;
  v84 = a2[4];
  *(_OWORD *)(v81 + 56) = 0;
  *(_QWORD *)(v81 + 136) = -1;
  *(_QWORD *)(v81 + 40) = v84;
  LODWORD(v84) = *((_DWORD *)a2 + 10);
  *(_QWORD *)(v81 + 144) = 0;
  *(_DWORD *)(v81 + 48) = v84;
  *(_OWORD *)(v81 + 72) = 0;
  *(_OWORD *)(v81 + 88) = 0;
  *(_OWORD *)(v81 + 104) = 0;
  merge_handler_ctr(v81, "Graph mode");
  v85 = *(_QWORD *)(v81 + 8);
  *(_QWORD *)(v81 + 72) = 0;
  if ( *(int *)(v85 + 28) > 0 )
  {
    v86 = 0;
    do
    {
      v87 = v86;
      v88 = operator new(0x88u);
      v89 = *(_QWORD *)(v81 + 8);
      v90 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v91 = *(_QWORD *)(a1 + 176);
      v92 = *(_QWORD *)(a1 + 184);
      v93 = *(int *)(v89 + 4LL * (int)v86 + 16);
      *(_QWORD *)(v88 + 32) = v89;
      *(_DWORD *)(v88 + 12) = -1;
      *(_DWORD *)(v88 + 8) = v93;
      *(_QWORD *)v88 = &off_2B32F20;
      *(__m128i *)(v88 + 16) = v90;
      src.m128i_i64[0] = v91;
      v94 = switch_dbctx(v93);
      v95 = src.m128i_i64[0];
      *(_QWORD *)(v88 + 40) = v94;
      *(_QWORD *)(v88 + 48) = -1;
      *(_QWORD *)(v88 + 104) = 0;
      *(_QWORD *)(v88 + 112) = v95;
      *(_QWORD *)(v88 + 120) = v92;
      *(_OWORD *)(v88 + 56) = 0;
      *(_OWORD *)(v88 + 72) = 0;
      *(_OWORD *)(v88 + 88) = 0;
      sub_633A00((_QWORD *)v88, -1);
      v96 = *(int *)(v88 + 8);
      *(_QWORD *)v88 = &off_2B32DC8;
      *(_WORD *)(v88 + 128) = 1;
      switch_dbctx(v96);
      view_options = get_view_options(*(_BYTE *)(v88 + 128));
      v98 = *(_BYTE *)(v88 + 128) == 0;
      *(_QWORD *)(v88 + 72) = view_options;
      *(_QWORD *)(v88 + 56) = view_options;
      v99 = (char *)"text";
      *(_QWORD *)(v88 + 48) = -1;
      if ( !v98 )
        v99 = "graph";
      *(_QWORD *)(v81 + 8 * v86++ + 56) = v88;
      *(_QWORD *)(v88 + 104) = v99;
      v100 = *(_QWORD *)(v81 + 8);
      *(_DWORD *)(v88 + 12) = v87;
    }
    while ( *(_DWORD *)(v100 + 28) > (int)v86 );
  }
  v101 = operator new(0xA8u);
  *(_QWORD *)v101 = &off_2B26160;
  v102 = a2[2];
  v103 = *a2;
  *(_QWORD *)(v101 + 16) = 0;
  *(_OWORD *)(v101 + 24) = 0;
  *(_QWORD *)(v101 + 8) = v103;
  if ( v102 )
  {
    v122 = (void *)qalloc_or_throw(v102);
    *(_QWORD *)(v101 + 16) = v122;
    *(_QWORD *)(v101 + 32) = v102;
    memcpy(v122, (const void *)a2[1], v102);
    *(_QWORD *)(v101 + 24) = v102;
  }
  *(_QWORD *)(v101 + 120) = -1;
  *(_QWORD *)(v101 + 128) = -1;
  v104 = a2[4];
  *(_OWORD *)(v101 + 56) = 0;
  *(_QWORD *)(v101 + 136) = -1;
  *(_QWORD *)(v101 + 40) = v104;
  LODWORD(v104) = *((_DWORD *)a2 + 10);
  *(_QWORD *)(v101 + 144) = 0;
  *(_DWORD *)(v101 + 48) = v104;
  *(_OWORD *)(v101 + 72) = 0;
  *(_OWORD *)(v101 + 88) = 0;
  *(_OWORD *)(v101 + 104) = 0;
  merge_handler_ctr(v101, "Text mode");
  *(_QWORD *)(v101 + 72) = 0;
  *(_QWORD *)v101 = &off_2B32E80;
  result = *(_QWORD *)(v101 + 8);
  *(_QWORD *)(v101 + 152) = 0;
  *(_DWORD *)(v101 + 160) = 0;
  if ( *(int *)(result + 28) > 0 )
  {
    v106 = 0;
    do
    {
      v107 = v106;
      v108 = operator new(0x88u);
      v109 = *(_QWORD *)(v101 + 8);
      v110 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v111 = *(_QWORD *)(a1 + 176);
      v112 = *(_QWORD *)(a1 + 184);
      v113 = *(int *)(v109 + 4LL * (int)v106 + 16);
      *(_QWORD *)(v108 + 32) = v109;
      *(_DWORD *)(v108 + 12) = -1;
      *(_DWORD *)(v108 + 8) = v113;
      *(_QWORD *)v108 = &off_2B32F20;
      *(__m128i *)(v108 + 16) = v110;
      v127 = v111;
      *(_QWORD *)(v108 + 40) = switch_dbctx(v113);
      *(_QWORD *)(v108 + 48) = -1;
      *(_QWORD *)(v108 + 104) = 0;
      *(_QWORD *)(v108 + 112) = v127;
      *(_QWORD *)(v108 + 120) = v112;
      *(_OWORD *)(v108 + 56) = 0;
      *(_OWORD *)(v108 + 72) = 0;
      *(_OWORD *)(v108 + 88) = 0;
      sub_633A00((_QWORD *)v108, -1);
      v114 = *(int *)(v108 + 8);
      *(_QWORD *)v108 = &off_2B32DC8;
      *(_WORD *)(v108 + 128) = 0;
      switch_dbctx(v114);
      v115 = get_view_options(*(_BYTE *)(v108 + 128));
      v98 = *(_BYTE *)(v108 + 128) == 0;
      *(_QWORD *)(v108 + 72) = v115;
      *(_QWORD *)(v108 + 56) = v115;
      v116 = (char *)"text";
      *(_QWORD *)(v108 + 48) = -1;
      if ( !v98 )
        v116 = "graph";
      *(_QWORD *)(v101 + 8 * v106++ + 56) = v108;
      *(_QWORD *)(v108 + 104) = v116;
      result = *(_QWORD *)(v101 + 8);
      *(_DWORD *)(v108 + 12) = v107;
    }
    while ( *(_DWORD *)(result + 28) > (int)v106 );
  }
  return result;
}
