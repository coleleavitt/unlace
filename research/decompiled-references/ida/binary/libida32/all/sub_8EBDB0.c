unsigned __int64 __fastcall sub_8EBDB0(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        const __m128i *a7,
        unsigned __int64 a8,
        int a9)
{
  const __m128i *v12; // rsi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int32 v16; // eax
  unsigned __int64 result; // rax
  int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int32 v25; // eax
  __int32 v26; // r12d
  __m128i v27; // xmm1
  __int32 v28; // eax
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm3
  __m128i v36; // xmm4
  __m128i v37; // xmm5
  __m128i v38; // xmm6
  __m128i v39; // xmm7
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm4
  __m128i v45; // xmm5
  __m128i v46; // xmm0
  __m128i v47; // xmm6
  __m128i v48; // xmm7
  char *v49; // r13
  int v50; // eax
  char *v51; // r12
  int v52; // eax
  int v53; // ecx
  void *v54; // rdi
  size_t v55; // rdx
  unsigned __int64 v56; // rax
  int v58; // [rsp+20h] [rbp-168h]
  __m128i v59; // [rsp+30h] [rbp-158h] BYREF
  __int64 v60; // [rsp+40h] [rbp-148h]
  __int32 v61; // [rsp+48h] [rbp-140h]
  __m128i v62; // [rsp+50h] [rbp-138h] BYREF
  __int64 v63; // [rsp+60h] [rbp-128h]
  unsigned int v64; // [rsp+68h] [rbp-120h]
  __m256i v65; // [rsp+70h] [rbp-118h] BYREF
  __m128i v66; // [rsp+90h] [rbp-F8h]
  __m128i v67; // [rsp+A0h] [rbp-E8h]
  __m128i v68; // [rsp+B0h] [rbp-D8h]
  __m128i v69; // [rsp+C0h] [rbp-C8h]
  __m128i v70; // [rsp+D0h] [rbp-B8h]
  __m128i v71; // [rsp+E0h] [rbp-A8h]
  __m128i v72; // [rsp+F0h] [rbp-98h]
  __m128i v73; // [rsp+100h] [rbp-88h]
  __m128i v74; // [rsp+110h] [rbp-78h]
  __m128i v75; // [rsp+120h] [rbp-68h]
  __m128i v76; // [rsp+130h] [rbp-58h]
  __int64 v77; // [rsp+140h] [rbp-48h]
  unsigned __int64 v78; // [rsp+148h] [rbp-40h]

  v12 = a7;
  v78 = __readfsqword(0x28u);
  if ( !a6 )
  {
    v14 = a3;
    v20 = a4;
    if ( &ZSTD_trace_compress_begin )
    {
      v21 = ZSTD_trace_compress_begin();
      v20 = a4;
      v12 = a7;
      *(_QWORD *)(a1 + 3736) = v21;
    }
    else
    {
      *(_QWORD *)(a1 + 3736) = 0;
    }
    v58 = v20;
    result = sub_8E8F40(a1, v12, a8, v14, 0, a9);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      if ( a2 && v14 > 7 )
      {
        result = sub_8EBC60(
                   *(_QWORD *)(a1 + 3200),
                   a1 + 3216,
                   (unsigned __int64 *)(a1 + 1032),
                   (_QWORD *)(a1 + 680),
                   (_DWORD *)(a1 + 232),
                   a2,
                   v14,
                   v58,
                   a5,
                   0,
                   *(_WORD **)(a1 + 3520));
LABEL_12:
        if ( result > 0xFFFFFFFFFFFFFF88LL )
          return result;
LABEL_16:
        *(_DWORD *)(a1 + 664) = result;
        *(_QWORD *)(a1 + 672) = v14;
        return 0;
      }
      LODWORD(result) = 0;
      if ( v58 != 2 )
        goto LABEL_16;
      return -32;
    }
    return result;
  }
  v14 = *(_QWORD *)(a6 + 8);
  if ( &ZSTD_trace_compress_begin )
  {
    v12 = a7;
    *(_QWORD *)(a1 + 3736) = ZSTD_trace_compress_begin();
  }
  else
  {
    *(_QWORD *)(a1 + 3736) = 0;
  }
  v15 = *(_QWORD *)(a6 + 8);
  if ( !v15
    || a8 - 0x20000 <= 0xFFFFFFFFFFFDFFFELL && 6 * v15 <= a8 && *(_DWORD *)(a6 + 6068)
    || (v16 = v12[4].m128i_i32[1], v16 == 3) )
  {
    result = sub_8E8F40(a1, v12, a8, v14, 0, a9);
    if ( result > 0xFFFFFFFFFFFFFF88LL )
      return result;
    v18 = *(_DWORD *)(a6 + 16);
    v19 = *(_QWORD *)(a6 + 8);
    if ( *(_QWORD *)a6 && v19 > 7 )
    {
      result = sub_8EBC60(
                 *(_QWORD *)(a1 + 3200),
                 a1 + 3216,
                 (unsigned __int64 *)(a1 + 1032),
                 (_QWORD *)(a1 + 680),
                 (_DWORD *)(a1 + 232),
                 *(_DWORD **)a6,
                 v19,
                 v18,
                 a5,
                 0,
                 *(_WORD **)(a1 + 3520));
      goto LABEL_12;
    }
    LODWORD(result) = 0;
    if ( v18 != 2 )
      goto LABEL_16;
    return -32;
  }
  v22 = *(_DWORD *)(a6 + 384);
  if ( *(_DWORD *)(a6 + 244) )
  {
    *(__m128i *)v65.m256i_i8 = _mm_loadu_si128(v12);
    *(__m128i *)&v65.m256i_u64[2] = _mm_loadu_si128(v12 + 1);
    v23 = v12[13].m128i_i64[0];
    v66 = _mm_loadu_si128(v12 + 2);
    v67 = _mm_loadu_si128(v12 + 3);
    v68 = _mm_loadu_si128(v12 + 4);
    v69 = _mm_loadu_si128(v12 + 5);
    v77 = v23;
    v24 = *(_QWORD *)(a6 + 376);
    v70 = _mm_loadu_si128(v12 + 6);
    v71 = _mm_loadu_si128(v12 + 7);
    v72 = _mm_loadu_si128(v12 + 8);
    v73 = _mm_loadu_si128(v12 + 9);
    v74 = _mm_loadu_si128(v12 + 10);
    v75 = _mm_loadu_si128(v12 + 11);
    v76 = _mm_loadu_si128(v12 + 12);
    v62 = _mm_loadu_si128((const __m128i *)(a6 + 360));
    v63 = v24;
    v25 = *(_DWORD *)(a6 + 368);
    v26 = v65.m256i_i32[1];
    if ( v22 - 3 <= 2 )
    {
      v25 -= 2;
      if ( v25 < 6 )
        v25 = 6;
    }
LABEL_30:
    v64 = v22;
    v62.m128i_i32[2] = v25;
    sub_8E5520(&v59, a8, v15, 1, v73.m128i_u32[0], a6, (__int128)_mm_load_si128(&v62), v63, v22);
    v27 = _mm_loadu_si128(&v59);
    *(__int64 *)((char *)&v65.m256i_i64[2] + 4) = v60;
    *(__m128i *)((char *)v65.m256i_i64 + 4) = v27;
    v65.m256i_i32[7] = v61;
    v28 = *(_DWORD *)(a6 + 6072);
    v65.m256i_i32[1] = v26;
    v73.m128i_i32[0] = v28;
    result = sub_8E8F40(a1, (const __m128i *)&v65, a8, 0, 0, a9);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      v29 = *(_QWORD *)(a6 + 104) - *(_QWORD *)(a6 + 112);
      if ( (_DWORD)v29 != *(_DWORD *)(a6 + 128) )
      {
        *(_QWORD *)(a1 + 3464) = a6 + 104;
        v30 = *(_DWORD *)(a1 + 3240);
        if ( (unsigned int)v29 > v30 )
        {
          *(_DWORD *)(a1 + 3244) = v29;
          v31 = *(_QWORD *)(a1 + 3224) + (unsigned int)v29;
          *(_DWORD *)(a1 + 3240) = v29;
          *(_QWORD *)(a1 + 3216) = v31;
          v30 = v29;
        }
        *(_DWORD *)(a1 + 3256) = v30;
      }
LABEL_35:
      *(_DWORD *)(a1 + 664) = *(_DWORD *)(a6 + 6064);
      *(_QWORD *)(a1 + 672) = *(_QWORD *)(a6 + 8);
      v32 = *(_QWORD **)(a1 + 3200);
      *v32 = *(_QWORD *)(a6 + 408);
      v32[703] = *(_QWORD *)(a6 + 6032);
      qmemcpy(
        (void *)((unsigned __int64)(v32 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(a6 + 408 - ((_QWORD)v32 - ((unsigned __int64)(v32 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v32 - (((_DWORD)v32 + 8) & 0xFFFFFFF8) + 5632) >> 3));
      return 0;
    }
    return result;
  }
  if ( (v16 == 1 || a8 == -1 || a8 <= qword_23B31C0[v22]) && v16 != 2 && !v12[3].m128i_i32[0] )
  {
    *(__m128i *)v65.m256i_i8 = _mm_loadu_si128(v12);
    *(__m128i *)&v65.m256i_u64[2] = _mm_loadu_si128(v12 + 1);
    v33 = v12[13].m128i_i64[0];
    v66 = _mm_loadu_si128(v12 + 2);
    v67 = _mm_loadu_si128(v12 + 3);
    v68 = _mm_loadu_si128(v12 + 4);
    v69 = _mm_loadu_si128(v12 + 5);
    v77 = v33;
    v34 = *(_QWORD *)(a6 + 376);
    v70 = _mm_loadu_si128(v12 + 6);
    v71 = _mm_loadu_si128(v12 + 7);
    v72 = _mm_loadu_si128(v12 + 8);
    v73 = _mm_loadu_si128(v12 + 9);
    v74 = _mm_loadu_si128(v12 + 10);
    v75 = _mm_loadu_si128(v12 + 11);
    v76 = _mm_loadu_si128(v12 + 12);
    v62 = _mm_loadu_si128((const __m128i *)(a6 + 360));
    v63 = v34;
    v25 = *(_DWORD *)(a6 + 368);
    v26 = v65.m256i_i32[1];
    goto LABEL_30;
  }
  v35 = _mm_loadu_si128(v12 + 2);
  v36 = _mm_loadu_si128(v12 + 3);
  v37 = _mm_loadu_si128(v12 + 4);
  v38 = _mm_loadu_si128(v12 + 5);
  v39 = _mm_loadu_si128(v12 + 6);
  *(__m128i *)v65.m256i_i8 = _mm_loadu_si128(v12);
  v40 = v12[13].m128i_i64[0];
  v41 = *(_QWORD *)(a6 + 376);
  v66 = v35;
  v42 = _mm_loadu_si128(v12 + 7);
  v43 = _mm_loadu_si128(v12 + 8);
  v67 = v36;
  v68 = v37;
  v44 = _mm_loadu_si128(v12 + 9);
  v45 = _mm_loadu_si128(v12 + 10);
  v69 = v38;
  v46 = _mm_loadu_si128((const __m128i *)(a6 + 360));
  v47 = _mm_loadu_si128(v12 + 11);
  v70 = v39;
  v48 = _mm_loadu_si128(v12 + 12);
  v77 = v40;
  LODWORD(v40) = v65.m256i_i32[1];
  *(__int64 *)((char *)&v65.m256i_i64[2] + 4) = v41;
  LODWORD(v41) = *(_DWORD *)(a6 + 384);
  v71 = v42;
  v72 = v43;
  v73 = v44;
  v74 = v45;
  v75 = v47;
  v76 = v48;
  *(__m128i *)((char *)v65.m256i_i64 + 4) = v46;
  v65.m256i_i32[7] = v41;
  v65.m256i_i32[1] = v40;
  v73.m128i_i32[0] = *(_DWORD *)(a6 + 6072);
  result = sub_8E8F40(a1, (const __m128i *)&v65, a8, 0, 1, a9);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    v49 = nullptr;
    *(_QWORD *)(a1 + 712) = *(_QWORD *)(a1 + 696);
    v50 = *(_DWORD *)(a6 + 384);
    if ( v50 != 1 && ((unsigned int)(v50 - 3) > 2 || *(_DWORD *)(a6 + 6072) != 1) )
      v49 = (char *)(1LL << *(_DWORD *)(a6 + 364));
    v51 = (char *)(1LL << *(_DWORD *)(a6 + 368));
    sub_8E6310(*(void **)(a1 + 3328), *(const void **)(a6 + 216), v51, a6 + 360);
    v52 = *(_DWORD *)(a1 + 260);
    if ( v52 != 1 && ((unsigned int)(v52 - 3) > 2 || *(_DWORD *)(a1 + 376) != 1) )
      sub_8E6310(*(void **)(a1 + 3344), *(const void **)(a6 + 232), v49, a6 + 360);
    if ( (unsigned int)(*(_DWORD *)(a6 + 384) - 3) <= 2 && *(_DWORD *)(a6 + 6072) == 1 )
    {
      memcpy(*(void **)(a1 + 3272), *(const void **)(a6 + 160), (size_t)v51);
      *(_QWORD *)(a1 + 3312) = *(_QWORD *)(a6 + 200);
    }
    v53 = *(_DWORD *)(a1 + 3264);
    v54 = *(void **)(a1 + 3336);
    v55 = 4LL << v53;
    if ( !v53 )
      v55 = 0;
    memset(v54, 0, v55);
    v56 = *(_QWORD *)(a1 + 704);
    if ( v56 > *(_QWORD *)(a1 + 712) )
      *(_QWORD *)(a1 + 712) = v56;
    *(__m128i *)(a1 + 3216) = _mm_loadu_si128((const __m128i *)(a6 + 104));
    *(__m128i *)(a1 + 3232) = _mm_loadu_si128((const __m128i *)(a6 + 120));
    *(_QWORD *)(a1 + 3248) = *(_QWORD *)(a6 + 136);
    *(_DWORD *)(a1 + 3260) = *(_DWORD *)(a6 + 148);
    *(_DWORD *)(a1 + 3256) = *(_DWORD *)(a6 + 144);
    goto LABEL_35;
  }
  return result;
}

