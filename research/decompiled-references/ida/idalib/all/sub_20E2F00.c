__int64 __fastcall sub_20E2F00(__int64 a1, float *a2)
{
  void *v4; // rdx
  __int64 v5; // rbx
  float v6; // eax
  void *v7; // rdx
  const __m128i *v8; // rax
  int v9; // ecx
  const __m128i *v10; // rsi
  __int64 v11; // rdx
  const __m128i *v12; // rdx
  const __m128i *v13; // rax
  void *v14; // rdi
  unsigned __int64 v15; // rax
  char **v16; // rax
  int v17; // ecx
  const __m128i *v18; // rsi
  __int64 v19; // rdx
  char **v20; // rdx
  const __m128i *v21; // rax
  void *v22; // rdi
  unsigned __int64 v23; // rax
  char **v24; // rax
  int v25; // ecx
  const __m128i *v26; // rsi
  __int64 v27; // rdx
  char **v28; // rdx
  const __m128i *v29; // rax
  void *v30; // rdi
  unsigned __int64 v31; // rax
  char **v32; // rax
  int v33; // ecx
  const __m128i *v34; // rsi
  __int64 v35; // rdx
  char **v36; // rdx
  const __m128i *v37; // rax
  void *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rcx
  __int64 v42; // rax
  __m128i *v43; // rdx
  __int64 v44; // rbx
  char **v45; // rax
  int v46; // ecx
  const __m128i *v47; // rsi
  __int64 v48; // rdx
  char **v49; // rdx
  const __m128i *v50; // rax
  __m128i *v51; // rdi
  unsigned __int64 v52; // rax
  char **v53; // rax
  int v54; // ecx
  const __m128i *v55; // rsi
  __int64 v56; // rdx
  char **v57; // rdx
  const __m128i *v58; // rax
  void *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  void *v62; // rcx
  __int64 v63; // rax
  void *v64; // rcx
  __int64 v65; // rax
  void *v66; // rdx
  __int64 v67; // rbx
  const __m128i *v68; // rax
  int v69; // ecx
  const __m128i *v70; // rsi
  __int64 v71; // rdx
  const __m128i *v72; // rdx
  const __m128i *v73; // rax
  _BYTE *v74; // rax
  _BYTE *v75; // rdi
  __m128i v77; // xmm2
  __int64 v78; // rax
  __m128i v79; // xmm1
  __m128i v80; // xmm7
  __int64 v81; // rax
  __m128i v82; // xmm6
  __int64 v83; // rax
  __m128i v84; // xmm5
  __int64 v85; // r13
  __int64 v86; // rax
  __m128i v87; // xmm4
  __int64 v88; // r13
  __int64 v89; // rax
  __m128i v90; // xmm3
  __int64 v91; // rax
  __m128i v92; // xmm0
  __m128i si128; // xmm0
  const __m128i *v94; // rax
  __m128i v95; // xmm1
  void *v96; // rdi

  v4 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v4 > 0xDu )
  {
    v5 = a1;
    qmemcpy(v4, "StaticSampler(", 14);
    *(_QWORD *)(a1 + 32) += 14LL;
  }
  else
  {
    v5 = sub_227BF10(a1, "StaticSampler(", 14);
  }
  v6 = *a2;
  if ( *(_DWORD *)a2 )
  {
    switch ( LODWORD(v6) )
    {
      case 1:
        v94 = (const __m128i *)&off_2BE88A8;
        break;
      case 2:
        v94 = (const __m128i *)&off_2BE88D0;
        break;
      case 3:
        v94 = (const __m128i *)&off_2BE88F8;
        break;
      default:
        goto LABEL_7;
    }
  }
  else
  {
    v94 = (const __m128i *)&off_2BE8880;
  }
  v95 = _mm_loadu_si128(v94);
  v96 = *(void **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v96 < v95.m128i_i64[1] )
  {
    sub_227BF10(v5, v95.m128i_i64[0], v95.m128i_i64[1]);
  }
  else if ( v95.m128i_i64[1] )
  {
    memcpy(v96, (const void *)v95.m128i_i64[0], v95.m128i_u64[1]);
    *(_QWORD *)(v5 + 32) += v95.m128i_i64[1];
  }
LABEL_7:
  sub_227B910(v5, *((unsigned int *)a2 + 1));
  v7 = *(void **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v7 > 0xAu )
  {
    qmemcpy(v7, ", filter = ", 11);
    *(_QWORD *)(v5 + 32) += 11LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", filter = ", 11);
  }
  v8 = (const __m128i *)sub_201F510();
  v9 = *((_DWORD *)a2 + 2);
  v10 = v8;
  v12 = (const __m128i *)((char *)v8 + 40 * v11);
  if ( v12 == v8 )
    goto LABEL_14;
  if ( v9 != v8[2].m128i_i32[0] )
  {
    v13 = (const __m128i *)((char *)v8 + 40);
    do
    {
      v10 = v13;
      if ( v12 == v13 )
        goto LABEL_14;
      v13 = (const __m128i *)((char *)v13 + 40);
    }
    while ( v9 != v13[-1].m128i_i32[2] );
  }
  v77 = _mm_loadu_si128(v10);
  v14 = *(void **)(v5 + 32);
  v15 = *(_QWORD *)(v5 + 24) - (_QWORD)v14;
  if ( v15 < v77.m128i_i64[1] )
  {
    sub_227BF10(v5, v77.m128i_i64[0], v77.m128i_i64[1]);
LABEL_14:
    v14 = *(void **)(v5 + 32);
    v15 = *(_QWORD *)(v5 + 24) - (_QWORD)v14;
    goto LABEL_15;
  }
  if ( v77.m128i_i64[1] )
  {
    memcpy(v14, (const void *)v77.m128i_i64[0], v77.m128i_u64[1]);
    v78 = *(_QWORD *)(v5 + 24);
    v14 = (void *)(v77.m128i_i64[1] + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v14;
    v15 = v78 - (_QWORD)v14;
  }
LABEL_15:
  if ( v15 > 0xC )
  {
    qmemcpy(v14, ", addressU = ", 13);
    *(_QWORD *)(v5 + 32) += 13LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", addressU = ", 13);
  }
  v16 = sub_201F520();
  v17 = *((_DWORD *)a2 + 3);
  v18 = (const __m128i *)v16;
  v20 = &v16[5 * v19];
  if ( v20 == v16 )
    goto LABEL_22;
  if ( v17 != *((_DWORD *)v16 + 8) )
  {
    v21 = (const __m128i *)(v16 + 5);
    do
    {
      v18 = v21;
      if ( v20 == (char **)v21 )
        goto LABEL_22;
      v21 = (const __m128i *)((char *)v21 + 40);
    }
    while ( v17 != v21[-1].m128i_i32[2] );
  }
  v90 = _mm_loadu_si128(v18);
  v22 = *(void **)(v5 + 32);
  v23 = *(_QWORD *)(v5 + 24) - (_QWORD)v22;
  if ( v90.m128i_i64[1] > v23 )
  {
    sub_227BF10(v5, v90.m128i_i64[0], v90.m128i_i64[1]);
LABEL_22:
    v22 = *(void **)(v5 + 32);
    v23 = *(_QWORD *)(v5 + 24) - (_QWORD)v22;
    goto LABEL_23;
  }
  if ( v90.m128i_i64[1] )
  {
    memcpy(v22, (const void *)v90.m128i_i64[0], v90.m128i_u64[1]);
    v91 = *(_QWORD *)(v5 + 24);
    v22 = (void *)(v90.m128i_i64[1] + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v22;
    v23 = v91 - (_QWORD)v22;
  }
LABEL_23:
  if ( v23 > 0xC )
  {
    qmemcpy(v22, ", addressV = ", 13);
    *(_QWORD *)(v5 + 32) += 13LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", addressV = ", 13);
  }
  v24 = sub_201F520();
  v25 = *((_DWORD *)a2 + 4);
  v26 = (const __m128i *)v24;
  v28 = &v24[5 * v27];
  if ( v28 == v24 )
    goto LABEL_30;
  if ( v25 != *((_DWORD *)v24 + 8) )
  {
    v29 = (const __m128i *)(v24 + 5);
    do
    {
      v26 = v29;
      if ( v28 == (char **)v29 )
        goto LABEL_30;
      v29 = (const __m128i *)((char *)v29 + 40);
    }
    while ( v25 != v29[-1].m128i_i32[2] );
  }
  v87 = _mm_loadu_si128(v26);
  v30 = *(void **)(v5 + 32);
  v88 = v87.m128i_i64[1];
  v31 = *(_QWORD *)(v5 + 24) - (_QWORD)v30;
  if ( v87.m128i_i64[1] > v31 )
  {
    sub_227BF10(v5, v87.m128i_i64[0], v87.m128i_i64[1]);
LABEL_30:
    v30 = *(void **)(v5 + 32);
    v31 = *(_QWORD *)(v5 + 24) - (_QWORD)v30;
    goto LABEL_31;
  }
  if ( v87.m128i_i64[1] )
  {
    memcpy(v30, (const void *)v87.m128i_i64[0], v87.m128i_u64[1]);
    v89 = *(_QWORD *)(v5 + 24);
    v30 = (void *)(v88 + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v30;
    v31 = v89 - (_QWORD)v30;
  }
LABEL_31:
  if ( v31 > 0xC )
  {
    qmemcpy(v30, ", addressW = ", 13);
    *(_QWORD *)(v5 + 32) += 13LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", addressW = ", 13);
  }
  v32 = sub_201F520();
  v33 = *((_DWORD *)a2 + 5);
  v34 = (const __m128i *)v32;
  v36 = &v32[5 * v35];
  if ( v36 == v32 )
    goto LABEL_38;
  if ( v33 != *((_DWORD *)v32 + 8) )
  {
    v37 = (const __m128i *)(v32 + 5);
    do
    {
      v34 = v37;
      if ( v36 == (char **)v37 )
        goto LABEL_38;
      v37 = (const __m128i *)((char *)v37 + 40);
    }
    while ( v33 != v37[-1].m128i_i32[2] );
  }
  v84 = _mm_loadu_si128(v34);
  v38 = *(void **)(v5 + 32);
  v85 = v84.m128i_i64[1];
  v39 = *(_QWORD *)(v5 + 24) - (_QWORD)v38;
  if ( v84.m128i_i64[1] > v39 )
  {
    sub_227BF10(v5, v84.m128i_i64[0], v84.m128i_i64[1]);
LABEL_38:
    v38 = *(void **)(v5 + 32);
    v39 = *(_QWORD *)(v5 + 24) - (_QWORD)v38;
    goto LABEL_39;
  }
  if ( v84.m128i_i64[1] )
  {
    memcpy(v38, (const void *)v84.m128i_i64[0], v84.m128i_u64[1]);
    v86 = *(_QWORD *)(v5 + 24);
    v38 = (void *)(v85 + *(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = v38;
    v39 = v86 - (_QWORD)v38;
  }
LABEL_39:
  if ( v39 > 0xE )
  {
    qmemcpy(v38, ", mipLODBias = ", 15);
    *(_QWORD *)(v5 + 32) += 15LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", mipLODBias = ", 15);
  }
  v40 = sub_227B9D0(v5, a2[6]);
  v41 = *(__m128i **)(v40 + 32);
  if ( *(_QWORD *)(v40 + 24) - (_QWORD)v41 > 0x11u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB1F0);
    v41[1].m128i_i16[0] = 8253;
    *v41 = si128;
    *(_QWORD *)(v40 + 32) += 18LL;
  }
  else
  {
    v40 = sub_227BF10(v40, ", maxAnisotropy = ", 18);
  }
  v42 = sub_227B910(v40, *((unsigned int *)a2 + 7));
  v43 = *(__m128i **)(v42 + 32);
  v44 = v42;
  if ( *(_QWORD *)(v42 + 24) - (_QWORD)v43 > 0x12u )
  {
    v92 = _mm_load_si128((const __m128i *)&xmmword_23AB200);
    v43[1].m128i_i8[2] = 32;
    v43[1].m128i_i16[0] = 15648;
    *v43 = v92;
    *(_QWORD *)(v42 + 32) += 19LL;
  }
  else
  {
    v44 = sub_227BF10(v42, ", comparisonFunc = ", 19);
  }
  v45 = sub_201F530();
  v46 = *((_DWORD *)a2 + 8);
  v47 = (const __m128i *)v45;
  v49 = &v45[5 * v48];
  if ( v49 == v45 )
    goto LABEL_50;
  if ( v46 != *((_DWORD *)v45 + 8) )
  {
    v50 = (const __m128i *)(v45 + 5);
    do
    {
      v47 = v50;
      if ( v49 == (char **)v50 )
        goto LABEL_50;
      v50 = (const __m128i *)((char *)v50 + 40);
    }
    while ( v46 != v50[-1].m128i_i32[2] );
  }
  v82 = _mm_loadu_si128(v47);
  v51 = *(__m128i **)(v44 + 32);
  v52 = *(_QWORD *)(v44 + 24) - (_QWORD)v51;
  if ( v82.m128i_i64[1] > v52 )
  {
    sub_227BF10(v44, v82.m128i_i64[0], v82.m128i_i64[1]);
LABEL_50:
    v51 = *(__m128i **)(v44 + 32);
    v52 = *(_QWORD *)(v44 + 24) - (_QWORD)v51;
    goto LABEL_51;
  }
  if ( v82.m128i_i64[1] )
  {
    memcpy(v51, (const void *)v82.m128i_i64[0], v82.m128i_u64[1]);
    v83 = *(_QWORD *)(v44 + 24);
    v51 = (__m128i *)(v82.m128i_i64[1] + *(_QWORD *)(v44 + 32));
    *(_QWORD *)(v44 + 32) = v51;
    v52 = v83 - (_QWORD)v51;
  }
LABEL_51:
  if ( v52 > 0xF )
  {
    *v51 = _mm_load_si128((const __m128i *)&xmmword_23AB210);
    *(_QWORD *)(v44 + 32) += 16LL;
  }
  else
  {
    v44 = sub_227BF10(v44, ", borderColor = ", 16);
  }
  v53 = sub_201F540();
  v54 = *((_DWORD *)a2 + 9);
  v55 = (const __m128i *)v53;
  v57 = &v53[5 * v56];
  if ( v57 == v53 )
    goto LABEL_58;
  if ( v54 != *((_DWORD *)v53 + 8) )
  {
    v58 = (const __m128i *)(v53 + 5);
    do
    {
      v55 = v58;
      if ( v57 == (char **)v58 )
        goto LABEL_58;
      v58 = (const __m128i *)((char *)v58 + 40);
    }
    while ( v54 != v58[-1].m128i_i32[2] );
  }
  v80 = _mm_loadu_si128(v55);
  v59 = *(void **)(v44 + 32);
  v60 = *(_QWORD *)(v44 + 24) - (_QWORD)v59;
  if ( v80.m128i_i64[1] > v60 )
  {
    sub_227BF10(v44, v80.m128i_i64[0], v80.m128i_i64[1]);
LABEL_58:
    v59 = *(void **)(v44 + 32);
    v60 = *(_QWORD *)(v44 + 24) - (_QWORD)v59;
    goto LABEL_59;
  }
  if ( v80.m128i_i64[1] )
  {
    memcpy(v59, (const void *)v80.m128i_i64[0], v80.m128i_u64[1]);
    v81 = *(_QWORD *)(v44 + 24);
    v59 = (void *)(v80.m128i_i64[1] + *(_QWORD *)(v44 + 32));
    *(_QWORD *)(v44 + 32) = v59;
    v60 = v81 - (_QWORD)v59;
  }
LABEL_59:
  if ( v60 > 0xA )
  {
    qmemcpy(v59, ", minLOD = ", 11);
    *(_QWORD *)(v44 + 32) += 11LL;
  }
  else
  {
    v44 = sub_227BF10(v44, ", minLOD = ", 11);
  }
  v61 = sub_227B9D0(v44, a2[10]);
  v62 = *(void **)(v61 + 32);
  if ( *(_QWORD *)(v61 + 24) - (_QWORD)v62 > 0xAu )
  {
    qmemcpy(v62, ", maxLOD = ", 11);
    *(_QWORD *)(v61 + 32) += 11LL;
  }
  else
  {
    v61 = sub_227BF10(v61, ", maxLOD = ", 11);
  }
  v63 = sub_227B9D0(v61, a2[11]);
  v64 = *(void **)(v63 + 32);
  if ( *(_QWORD *)(v63 + 24) - (_QWORD)v64 > 9u )
  {
    qmemcpy(v64, ", space = ", 10);
    *(_QWORD *)(v63 + 32) += 10LL;
  }
  else
  {
    v63 = sub_227BF10(v63, ", space = ", 10);
  }
  v65 = sub_227B910(v63, *((unsigned int *)a2 + 12));
  v66 = *(void **)(v65 + 32);
  v67 = v65;
  if ( *(_QWORD *)(v65 + 24) - (_QWORD)v66 > 0xEu )
  {
    qmemcpy(v66, ", visibility = ", 15);
    *(_QWORD *)(v65 + 32) += 15LL;
  }
  else
  {
    v67 = sub_227BF10(v65, ", visibility = ", 15);
  }
  v68 = (const __m128i *)sub_201F500();
  v69 = *((_DWORD *)a2 + 13);
  v70 = v68;
  v72 = (const __m128i *)((char *)v68 + 40 * v71);
  if ( v72 == v68 )
    goto LABEL_72;
  if ( v69 != v68[2].m128i_i32[0] )
  {
    v73 = (const __m128i *)((char *)v68 + 40);
    do
    {
      v70 = v73;
      if ( v72 == v73 )
        goto LABEL_72;
      v73 = (const __m128i *)((char *)v73 + 40);
    }
    while ( v69 != v73[-1].m128i_i32[2] );
  }
  v79 = _mm_loadu_si128(v70);
  v74 = *(_BYTE **)(v67 + 24);
  v75 = *(_BYTE **)(v67 + 32);
  if ( v79.m128i_i64[1] > (unsigned __int64)(v74 - v75) )
  {
    sub_227BF10(v67, v79.m128i_i64[0], v79.m128i_i64[1]);
LABEL_72:
    v74 = *(_BYTE **)(v67 + 24);
    v75 = *(_BYTE **)(v67 + 32);
    goto LABEL_73;
  }
  if ( v79.m128i_i64[1] )
  {
    memcpy(v75, (const void *)v79.m128i_i64[0], v79.m128i_u64[1]);
    v74 = *(_BYTE **)(v67 + 24);
    v75 = (_BYTE *)(v79.m128i_i64[1] + *(_QWORD *)(v67 + 32));
    *(_QWORD *)(v67 + 32) = v75;
  }
LABEL_73:
  if ( v74 == v75 )
  {
    sub_227BF10(v67, ")", 1);
    return a1;
  }
  else
  {
    *v75 = 41;
    ++*(_QWORD *)(v67 + 32);
    return a1;
  }
}
