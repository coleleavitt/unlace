__int64 __fastcall sub_243ED0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r13
  int v5; // r12d
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  size_t v11; // r13
  void *v12; // r14
  unsigned __int64 v13; // rax
  _QWORD *v14; // r11
  __int16 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rdi
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbp
  const __m128i *v27; // r15
  __int64 *v28; // rbx
  __m128i v29; // xmm1
  __int64 v30; // rdi
  __m128i v31; // xmm0
  __int64 v32; // r12
  __int64 v33; // rbp
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // rax
  __int16 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rax
  void *v46; // rsi
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __int64 v49; // rax
  _QWORD *v50; // rax
  const void *v51; // rsi
  void *v52; // rax
  const void *v53; // rsi
  void *v54; // rax
  const void *v55; // rsi
  _QWORD *v56; // [rsp+8h] [rbp-110h]
  __m128i v58; // [rsp+18h] [rbp-100h] BYREF
  void *v59; // [rsp+28h] [rbp-F0h]
  _QWORD *v60; // [rsp+30h] [rbp-E8h]
  int v61; // [rsp+3Ch] [rbp-DCh]
  __int64 v62; // [rsp+40h] [rbp-D8h]
  __int64 v63; // [rsp+48h] [rbp-D0h]
  __int64 *v64; // [rsp+50h] [rbp-C8h]
  __int64 *v65; // [rsp+58h] [rbp-C0h]
  __int64 v66; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v67; // [rsp+68h] [rbp-B0h] BYREF
  __m128i v68; // [rsp+80h] [rbp-98h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-58h]
  __int16 v70; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-40h]

  v65 = a1;
  v56 = a2;
  v71 = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    a2 = a3;
    return sub_22BB70(v65, a2);
  }
  v3 = a3[1];
  if ( !v3 )
    return sub_22BB70(v65, a2);
  v4 = 0;
  v5 = 0;
  v66 = 0;
  v6 = (unsigned __int64 *)*a2;
  v67 = 0;
  v61 = 0;
  v7 = *v6;
  while ( 1 )
  {
    v62 = v61;
    if ( v61 < v3 )
      break;
    if ( v4 != -1 )
    {
      v10 = -1;
      goto LABEL_17;
    }
LABEL_14:
    v22 = v62;
    if ( v62 == v3 )
      goto LABEL_23;
LABEL_15:
    v8 = 80 * v22;
    v9 = 80 * v22 + *a3;
LABEL_5:
    v11 = *(_QWORD *)(v9 + 24);
    v12 = nullptr;
    v68 = _mm_loadu_si128((const __m128i *)v9);
    if ( v11 )
    {
      v12 = (void *)qalloc_or_throw(v11);
      memcpy(v12, *(const void **)(v9 + 16), v11);
    }
    v13 = *(_QWORD *)(v9 + 48);
    v58 = (__m128i)v13;
    if ( v13 )
    {
      v54 = (void *)qalloc_or_throw(v13);
      v55 = *(const void **)(v9 + 40);
      v58.m128i_i64[1] = (__int64)v54;
      memcpy(v54, v55, v58.m128i_u64[0]);
    }
    v14 = *(_QWORD **)(v9 + 64);
    v15 = *(_WORD *)(v9 + 72);
    v16 = v67.m128i_i64[0];
    a2 = (_QWORD *)v66;
    v69 = (__int64)v14;
    v70 = v15;
    if ( v67.m128i_i64[1] < (unsigned __int64)(v67.m128i_i64[0] + 1) )
    {
      v60 = v14;
      LOWORD(v59) = v15;
      v64 = &v66;
      v66 = qvector_reserve(&v66, v66, v67.m128i_i64[0] + 1, 80);
      a2 = (_QWORD *)v66;
      v14 = v60;
      v16 = v67.m128i_i64[0];
      v15 = (__int16)v59;
    }
    v17 = v58.m128i_i64[1];
    v18 = _mm_load_si128(&v68);
    ++v61;
    v19 = &a2[10 * v16];
    *(__m128i *)v19 = v18;
    v19[2] = v12;
    *(__m128i *)(v19 + 3) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    v20 = _mm_loadl_epi64(&v58);
    v19[5] = v17;
    v19[8] = v14;
    *((_WORD *)v19 + 36) = v15;
    *((__m128i *)v19 + 3) = _mm_unpacklo_epi64(v20, v20);
    v21 = *a3;
    v3 = a3[1];
    ++v67.m128i_i64[0];
    v4 = *(_QWORD *)(v21 + v8 + 8);
  }
  v8 = 80LL * v61;
  v9 = v8 + *a3;
  v10 = *(_QWORD *)v9;
  if ( v4 == *(_QWORD *)v9 )
    goto LABEL_5;
LABEL_17:
  a2 = v56;
  v23 = v5;
  if ( (unsigned __int64)v5 >= v56[1] || v7 >= v10 )
    goto LABEL_14;
  v24 = *v56;
  v25 = 4LL * v5;
  do
  {
    v26 = 16 * (v23 + v25);
    v27 = (const __m128i *)(v24 + v26);
    if ( v4 < *(_QWORD *)(v24 + v26 + 8) )
    {
      v38 = _mm_loadu_si128(v27);
      v39 = v27[1].m128i_i64[1];
      v59 = nullptr;
      v58.m128i_i64[0] = v39;
      v68 = v38;
      if ( v39 )
      {
        v52 = (void *)qalloc_or_throw(v39);
        v53 = (const void *)v27[1].m128i_i64[0];
        v59 = v52;
        memcpy(v52, v53, v58.m128i_u64[0]);
      }
      v60 = nullptr;
      v40 = v27[3].m128i_i64[0];
      v58.m128i_i64[1] = v40;
      if ( v40 )
      {
        v50 = (_QWORD *)qalloc_or_throw(v40);
        v51 = (const void *)v27[2].m128i_i64[1];
        v60 = v50;
        memcpy(v50, v51, v58.m128i_u64[1]);
      }
      v41 = v27[4].m128i_i64[0];
      v42 = v67.m128i_i64[0];
      v43 = v27[4].m128i_i16[4];
      v44 = v66;
      v69 = v41;
      v70 = v43;
      if ( v67.m128i_i64[1] < (unsigned __int64)(v67.m128i_i64[0] + 1) )
      {
        v63 = v41;
        v64 = &v66;
        v66 = qvector_reserve(&v66, v66, v67.m128i_i64[0] + 1, 80);
        v44 = v66;
        v41 = v63;
        v42 = v67.m128i_i64[0];
      }
      v45 = v44 + 80 * v42;
      v46 = v59;
      *(__m128i *)v45 = _mm_load_si128(&v68);
      v47 = _mm_loadl_epi64(&v58);
      *(_QWORD *)(v45 + 16) = v46;
      a2 = v60;
      *(_QWORD *)(v45 + 64) = v41;
      *(__m128i *)(v45 + 24) = _mm_unpacklo_epi64(v47, v47);
      v48 = _mm_loadl_epi64((const __m128i *)&v58.m128i_u64[1]);
      *(_QWORD *)(v45 + 40) = a2;
      *(_WORD *)(v45 + 72) = v43;
      *(__m128i *)(v45 + 48) = _mm_unpacklo_epi64(v48, v48);
      v49 = ++v67.m128i_i64[0];
      if ( v4 >= v7 )
        *(_QWORD *)(v66 + 80 * v49 - 80) = v4;
      v24 = *v56;
      v4 = *(_QWORD *)(*v56 + v26 + 8);
      if ( v10 < v4 )
      {
        v7 = v10;
        *(_QWORD *)(v66 + 80 * v67.m128i_i64[0] - 72) = v10;
        v3 = a3[1];
        goto LABEL_14;
      }
    }
    v23 = ++v5;
    if ( (unsigned __int64)v5 >= v56[1] )
      break;
    v25 = 4LL * v5;
    v7 = *(_QWORD *)(v24 + 80LL * v5);
  }
  while ( v7 < v10 );
  v22 = v62;
  if ( v62 != a3[1] )
    goto LABEL_15;
LABEL_23:
  v28 = v65;
  v29 = _mm_loadu_si128(&v67);
  v30 = *v65;
  v31 = _mm_loadu_si128((const __m128i *)(v65 + 1));
  *v65 = v66;
  *(__m128i *)(v28 + 1) = v29;
  v66 = v30;
  v67 = v31;
  if ( v30 )
  {
    v32 = v31.m128i_i64[0];
    if ( v31.m128i_i64[0] )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v30 + 80 * v33);
        v35 = v34[5];
        if ( v35 )
        {
          v34[6] = 0;
          *(double *)v31.m128i_i64 = qfree(v35, (const char *)a2);
        }
        v36 = v34[2];
        if ( v36 )
        {
          v34[3] = 0;
          *(double *)v31.m128i_i64 = qfree(v36, (const char *)a2, *(double *)v31.m128i_i64);
        }
        ++v33;
        v30 = v66;
      }
      while ( v33 != v32 );
    }
    v67.m128i_i64[0] = 0;
    qfree(v30, (const char *)a2);
  }
  return v71 - __readfsqword(0x28u);
}
