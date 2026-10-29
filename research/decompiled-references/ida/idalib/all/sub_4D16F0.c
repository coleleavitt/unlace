unsigned __int64 __fastcall sub_4D16F0(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  __m128i v10; // xmm0
  __int64 v11; // rax
  void *v12; // rcx
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  size_t v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  char *v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __m128i v27; // xmm0
  void *v28; // rdi
  void *v29; // rdi
  __int64 v31; // rax
  size_t v32; // r14
  void *v33; // rax
  const void *v34; // rsi
  size_t v35; // r14
  void *ptr; // [rsp+0h] [rbp-B8h]
  __m128i v37; // [rsp+8h] [rbp-B0h] BYREF
  void *v38; // [rsp+18h] [rbp-A0h]
  __m128i v39; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v2 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v40 = __readfsqword(0x28u);
  v37.m128i_i64[1] = v4;
  if ( v4 )
  {
    v16 = v4;
    v2 = (void *)qalloc_or_throw(v4);
    memcpy(v2, *(const void **)a2, v16);
  }
  v5 = *(_QWORD *)(a2 + 32);
  ptr = nullptr;
  v37.m128i_i64[0] = v5;
  if ( v5 )
  {
    v35 = v5;
    ptr = (void *)qalloc_or_throw(v5);
    memcpy(ptr, *(const void **)(a2 + 24), v35);
  }
  v38 = nullptr;
  v6 = *(_QWORD *)(a2 + 56);
  v39.m128i_i64[0] = v6;
  if ( v6 )
  {
    v32 = v6;
    v33 = (void *)qalloc_or_throw(v6);
    v34 = *(const void **)(a2 + 48);
    v38 = v33;
    memcpy(v33, v34, v32);
  }
  v7 = a1[1];
  v8 = a1[2];
  if ( v8 < v7 + 1 )
  {
    v9 = qvector_reserve(a1, 0, v7 + 1, 72);
    v17 = a1[1];
    v18 = a1[2];
    a1[2] = v8;
    v19 = (char *)*a1;
    v39.m128i_i64[1] = v18;
    v20 = v17 - 1;
    if ( v20 >= 0 )
    {
      v21 = v9;
      do
      {
        v22 = *(_QWORD *)v19;
        v23 = _mm_loadu_si128((const __m128i *)(v19 + 8));
        *(_QWORD *)v19 = 0;
        *(_OWORD *)(v19 + 8) = 0;
        *(_QWORD *)v21 = v22;
        *(__m128i *)(v21 + 8) = v23;
        v24 = *((_QWORD *)v19 + 3);
        v25 = _mm_loadu_si128((const __m128i *)v19 + 2);
        *((_QWORD *)v19 + 3) = 0;
        *(_QWORD *)(v21 + 24) = v24;
        *(__m128i *)(v21 + 32) = v25;
        v26 = *((_QWORD *)v19 + 6);
        v27 = _mm_loadu_si128((const __m128i *)(v19 + 56));
        *((_OWORD *)v19 + 2) = 0;
        *(_QWORD *)(v21 + 48) = v26;
        *(__m128i *)(v21 + 56) = v27;
        v28 = *((void **)v19 + 3);
        *((_QWORD *)v19 + 6) = 0;
        *((_QWORD *)v19 + 8) = 0;
        if ( v28 )
        {
          *((_QWORD *)v19 + 4) = 0;
          qfree(v28);
        }
        v29 = *(void **)v19;
        if ( *(_QWORD *)v19 )
        {
          *((_QWORD *)v19 + 1) = 0;
          qfree(v29);
        }
        v19 += 72;
        v21 += 72;
      }
      while ( v20-- != 0 );
      v19 = (char *)*a1;
    }
    qfree(v19);
    v31 = v39.m128i_i64[1];
    *a1 = v9;
    a1[2] = v31;
    v7 = a1[1];
  }
  else
  {
    v9 = *a1;
  }
  v10 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
  v11 = v9 + 72 * v7;
  *(_QWORD *)(v11 + 24) = ptr;
  v12 = v38;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v10, v10);
  v13 = _mm_loadl_epi64(&v37);
  *(_QWORD *)v11 = v2;
  *(_QWORD *)(v11 + 48) = v12;
  *(__m128i *)(v11 + 32) = _mm_unpacklo_epi64(v13, v13);
  v14 = _mm_loadl_epi64(&v39);
  *(__m128i *)(v11 + 56) = _mm_unpacklo_epi64(v14, v14);
  ++a1[1];
  return v40 - __readfsqword(0x28u);
}
