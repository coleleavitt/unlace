unsigned __int64 __fastcall sub_5DC3A0(__int64 *a1, __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  void *v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  size_t v13; // rbp
  size_t v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r12
  __int128 v21; // xmm1
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  void *v26; // rdi
  __m128i v28; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+10h] [rbp-98h]
  __int64 v30; // [rsp+18h] [rbp-90h]
  __m128i v31; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)(a2 + 24);
  v32 = __readfsqword(0x28u);
  v28.m128i_i64[1] = v4;
  v31 = _mm_loadu_si128((const __m128i *)a2);
  if ( v4 )
  {
    v13 = 4 * v4;
    v6 = nullptr;
    v3 = (void *)qalloc_or_throw(4 * v4);
    memcpy(v3, *(const void **)(a2 + 16), v13);
    v5 = *(_QWORD *)(a2 + 48);
    v28.m128i_i64[0] = v5;
    if ( !v5 )
      goto LABEL_3;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 48);
    v6 = nullptr;
    v28.m128i_i64[0] = v5;
    if ( !v5 )
      goto LABEL_3;
  }
  v14 = 4 * v5;
  v6 = (void *)qalloc_or_throw(4 * v5);
  memcpy(v6, *(const void **)(a2 + 40), v14);
LABEL_3:
  v7 = a1[1];
  v8 = a1[2];
  if ( v8 < v7 + 1 )
  {
    v15 = qvector_reserve(a1, 0, v7 + 1, 64);
    v16 = a1[2];
    v17 = *a1;
    a1[2] = v8;
    v18 = a1[1];
    v29 = v15;
    v30 = v16;
    v19 = v18 - 1;
    if ( v19 >= 0 )
    {
      v20 = v15;
      v21 = 0;
      do
      {
        *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)v17);
        v22 = *(_QWORD *)(v17 + 16);
        v23 = _mm_loadu_si128((const __m128i *)(v17 + 24));
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v20 + 16) = v22;
        *(__m128i *)(v20 + 24) = v23;
        v24 = *(_QWORD *)(v17 + 40);
        v25 = _mm_loadu_si128((const __m128i *)(v17 + 48));
        *(_OWORD *)(v17 + 24) = v21;
        *(_QWORD *)(v20 + 40) = v24;
        *(__m128i *)(v20 + 48) = v25;
        v26 = *(void **)(v17 + 16);
        *(_QWORD *)(v17 + 40) = 0;
        *(_QWORD *)(v17 + 56) = 0;
        if ( v26 )
        {
          *(_QWORD *)(v17 + 24) = 0;
          qfree(v26);
          v21 = 0;
        }
        v17 += 64;
        v20 += 64;
      }
      while ( v19-- != 0 );
      v17 = *a1;
    }
    qfree((void *)v17);
    *a1 = v29;
    a1[2] = v30;
    v7 = a1[1];
  }
  else
  {
    v29 = *a1;
  }
  v9 = (v7 << 6) + v29;
  *(__m128i *)v9 = _mm_load_si128(&v31);
  v10 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
  *(_QWORD *)(v9 + 16) = v3;
  *(_QWORD *)(v9 + 40) = v6;
  *(__m128i *)(v9 + 24) = _mm_unpacklo_epi64(v10, v10);
  v11 = _mm_loadl_epi64(&v28);
  *(__m128i *)(v9 + 48) = _mm_unpacklo_epi64(v11, v11);
  ++a1[1];
  return v32 - __readfsqword(0x28u);
}
