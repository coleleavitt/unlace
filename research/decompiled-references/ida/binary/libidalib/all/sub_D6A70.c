__int64 __fastcall sub_D6A70(__int64 *a1, __int64 *a2, __int64 *a3)
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
  void *v13; // r11
  __int16 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
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
  __int64 v32; // rbp
  _QWORD *v33; // rbx
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rax
  __int16 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rax
  void *v42; // rsi
  __m128i v43; // xmm0
  void *v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rax
  void *v47; // rax
  const void *v48; // rsi
  void *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  __int64 *v53; // [rsp+8h] [rbp-110h]
  __m128i v55; // [rsp+18h] [rbp-100h] BYREF
  void *v56; // [rsp+28h] [rbp-F0h]
  void *v57; // [rsp+30h] [rbp-E8h]
  int v58; // [rsp+3Ch] [rbp-DCh]
  __int64 v59; // [rsp+40h] [rbp-D8h]
  __int64 v60; // [rsp+48h] [rbp-D0h]
  __int64 *v61; // [rsp+50h] [rbp-C8h]
  __int64 *v62; // [rsp+58h] [rbp-C0h]
  __int64 v63; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v64; // [rsp+68h] [rbp-B0h] BYREF
  __m128i v65; // [rsp+80h] [rbp-98h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-58h]
  __int16 v67; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+D8h] [rbp-40h]

  v62 = a1;
  v53 = a2;
  v68 = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    a2 = a3;
    return sub_BDF70(v62, a2);
  }
  v3 = a3[1];
  if ( !v3 )
    return sub_BDF70(v62, a2);
  v4 = 0;
  v5 = 0;
  v63 = 0;
  v6 = (unsigned __int64 *)*a2;
  v64 = 0;
  v58 = 0;
  v7 = *v6;
  while ( 1 )
  {
    v59 = v58;
    if ( v58 < v3 )
      break;
    if ( v4 != -1 )
    {
      v10 = -1;
      goto LABEL_17;
    }
LABEL_14:
    v22 = v59;
    if ( v59 == v3 )
      goto LABEL_23;
LABEL_15:
    v8 = 80 * v22;
    v9 = 80 * v22 + *a3;
LABEL_5:
    v11 = *(_QWORD *)(v9 + 24);
    v12 = nullptr;
    v65 = _mm_loadu_si128((const __m128i *)v9);
    if ( v11 )
    {
      v12 = (void *)qalloc_or_throw();
      memcpy(v12, *(const void **)(v9 + 16), v11);
    }
    v55.m128i_i64[1] = 0;
    v55.m128i_i64[0] = *(_QWORD *)(v9 + 48);
    if ( v55.m128i_i64[0] )
    {
      v51 = (void *)qalloc_or_throw();
      v52 = *(const void **)(v9 + 40);
      v55.m128i_i64[1] = (__int64)v51;
      memcpy(v51, v52, v55.m128i_u64[0]);
    }
    v13 = *(void **)(v9 + 64);
    v14 = *(_WORD *)(v9 + 72);
    v15 = v64.m128i_i64[0];
    v16 = v63;
    v66 = (__int64)v13;
    v67 = v14;
    if ( v64.m128i_i64[1] < (unsigned __int64)(v64.m128i_i64[0] + 1) )
    {
      v57 = v13;
      LOWORD(v56) = v14;
      v61 = &v63;
      v63 = qvector_reserve();
      v16 = v63;
      v13 = v57;
      v15 = v64.m128i_i64[0];
      v14 = (__int16)v56;
    }
    v17 = v55.m128i_i64[1];
    v18 = _mm_load_si128(&v65);
    ++v58;
    v19 = v16 + 80 * v15;
    *(__m128i *)v19 = v18;
    *(_QWORD *)(v19 + 16) = v12;
    *(__m128i *)(v19 + 24) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    v20 = _mm_loadl_epi64(&v55);
    *(_QWORD *)(v19 + 40) = v17;
    *(_QWORD *)(v19 + 64) = v13;
    *(_WORD *)(v19 + 72) = v14;
    *(__m128i *)(v19 + 48) = _mm_unpacklo_epi64(v20, v20);
    v21 = *a3;
    v3 = a3[1];
    ++v64.m128i_i64[0];
    v4 = *(_QWORD *)(v21 + v8 + 8);
  }
  v8 = 80LL * v58;
  v9 = v8 + *a3;
  v10 = *(_QWORD *)v9;
  if ( v4 == *(_QWORD *)v9 )
    goto LABEL_5;
LABEL_17:
  v23 = v5;
  if ( v5 >= (unsigned __int64)v53[1] || v7 >= v10 )
    goto LABEL_14;
  v24 = *v53;
  v25 = 4LL * v5;
  do
  {
    v26 = 16 * (v23 + v25);
    v27 = (const __m128i *)(v24 + v26);
    if ( v4 < *(_QWORD *)(v24 + v26 + 8) )
    {
      v35 = _mm_loadu_si128(v27);
      v36 = v27[1].m128i_i64[1];
      v56 = nullptr;
      v55.m128i_i64[0] = v36;
      v65 = v35;
      if ( v36 )
      {
        v49 = (void *)qalloc_or_throw();
        v50 = (const void *)v27[1].m128i_i64[0];
        v56 = v49;
        memcpy(v49, v50, v55.m128i_u64[0]);
      }
      v57 = nullptr;
      v55.m128i_i64[1] = v27[3].m128i_i64[0];
      if ( v55.m128i_i64[1] )
      {
        v47 = (void *)qalloc_or_throw();
        v48 = (const void *)v27[2].m128i_i64[1];
        v57 = v47;
        memcpy(v47, v48, v55.m128i_u64[1]);
      }
      v37 = v27[4].m128i_i64[0];
      v38 = v64.m128i_i64[0];
      v39 = v27[4].m128i_i16[4];
      v40 = v63;
      v66 = v37;
      v67 = v39;
      if ( v64.m128i_i64[1] < (unsigned __int64)(v64.m128i_i64[0] + 1) )
      {
        v60 = v37;
        v61 = &v63;
        v63 = qvector_reserve();
        v40 = v63;
        v37 = v60;
        v38 = v64.m128i_i64[0];
      }
      v41 = v40 + 80 * v38;
      v42 = v56;
      *(__m128i *)v41 = _mm_load_si128(&v65);
      v43 = _mm_loadl_epi64(&v55);
      *(_QWORD *)(v41 + 16) = v42;
      v44 = v57;
      *(_QWORD *)(v41 + 64) = v37;
      *(__m128i *)(v41 + 24) = _mm_unpacklo_epi64(v43, v43);
      v45 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
      *(_QWORD *)(v41 + 40) = v44;
      *(_WORD *)(v41 + 72) = v39;
      *(__m128i *)(v41 + 48) = _mm_unpacklo_epi64(v45, v45);
      v46 = ++v64.m128i_i64[0];
      if ( v4 >= v7 )
        *(_QWORD *)(v63 + 80 * v46 - 80) = v4;
      v24 = *v53;
      v4 = *(_QWORD *)(*v53 + v26 + 8);
      if ( v10 < v4 )
      {
        v7 = v10;
        *(_QWORD *)(v63 + 80 * v64.m128i_i64[0] - 72) = v10;
        v3 = a3[1];
        goto LABEL_14;
      }
    }
    v23 = ++v5;
    if ( v5 >= (unsigned __int64)v53[1] )
      break;
    v25 = 4LL * v5;
    v7 = *(_QWORD *)(v24 + 80LL * v5);
  }
  while ( v7 < v10 );
  v22 = v59;
  if ( v59 != a3[1] )
    goto LABEL_15;
LABEL_23:
  v28 = v62;
  v29 = _mm_loadu_si128(&v64);
  v30 = *v62;
  v31 = _mm_loadu_si128((const __m128i *)(v62 + 1));
  *v62 = v63;
  *(__m128i *)(v28 + 1) = v29;
  v63 = v30;
  v64 = v31;
  if ( v30 )
  {
    if ( v31.m128i_i64[0] )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 80 * v32);
        if ( v33[5] )
        {
          v33[6] = 0;
          qfree();
        }
        if ( v33[2] )
        {
          v33[3] = 0;
          qfree();
        }
        ++v32;
        v30 = v63;
      }
      while ( v32 != v31.m128i_i64[0] );
    }
    v64.m128i_i64[0] = 0;
    qfree();
  }
  return v68 - __readfsqword(0x28u);
}

