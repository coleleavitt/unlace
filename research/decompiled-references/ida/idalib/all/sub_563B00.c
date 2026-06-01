unsigned __int64 __fastcall sub_563B00(__int64 *a1, __m128i *a2, __int64 a3)
{
  size_t v4; // r13
  size_t v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int8 v10; // al
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int8 *v14; // rbp
  __m128i v15; // xmm0
  void *v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v22; // rax
  const void *v23; // rsi
  __int64 v24; // rax
  void *v25; // rax
  const void *v26; // rsi
  __m128i v27; // [rsp+0h] [rbp-C8h] BYREF
  void *v28; // [rsp+10h] [rbp-B8h]
  __m128i v29; // [rsp+18h] [rbp-B0h] BYREF
  void *ptr; // [rsp+28h] [rbp-A0h]
  __m128i v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+40h] [rbp-88h] BYREF
  __m128i v33; // [rsp+48h] [rbp-80h] BYREF
  __m128i v34; // [rsp+58h] [rbp-70h] BYREF
  __m128i v35; // [rsp+68h] [rbp-60h] BYREF
  __int64 v36; // [rsp+78h] [rbp-50h]
  __int64 v37; // [rsp+80h] [rbp-48h]
  __int8 v38; // [rsp+88h] [rbp-40h]
  unsigned __int64 v39; // [rsp+98h] [rbp-30h]

  v4 = *(_QWORD *)(a3 + 24);
  v39 = __readfsqword(0x28u);
  v28 = nullptr;
  v27 = _mm_loadu_si128((const __m128i *)a3);
  v29 = 0;
  if ( v4 )
  {
    v22 = (void *)qalloc_or_throw(v4);
    v23 = *(const void **)(a3 + 16);
    v29.m128i_i64[1] = v4;
    v28 = v22;
    memcpy(v22, v23, v4);
    v29.m128i_i64[0] = v4;
  }
  v6 = *(_QWORD *)(a3 + 48);
  ptr = nullptr;
  v31 = 0;
  if ( v6 )
  {
    v25 = (void *)qalloc_or_throw(v6);
    v26 = *(const void **)(a3 + 40);
    ptr = v25;
    v31.m128i_i64[1] = v6;
    memcpy(v25, v26, v6);
    v31.m128i_i64[0] = v6;
  }
  v32 = 0;
  copy_tinfo_t(&v32);
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 72));
  v8 = *(_QWORD *)(a3 + 128);
  v9 = *a1;
  v36 = *(_QWORD *)(a3 + 120);
  v10 = *(_BYTE *)(a3 + 136);
  v33 = v7;
  v11 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v38 = v10;
  v12 = a1[1];
  v34 = v11;
  v13 = _mm_loadu_si128((const __m128i *)(a3 + 104));
  v37 = v8;
  v14 = &a2->m128i_i8[-v9];
  v35 = v13;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v24 = qvector_reserve(a1, v9, v12 + 1, 144);
    *a1 = v24;
    a2 = (__m128i *)&v14[v24];
    v12 = a1[1];
  }
  memmove(&a2[9], a2, 144 * v12 - (_QWORD)v14);
  v15 = _mm_load_si128(&v27);
  a2[4].m128i_i64[0] = 0;
  *a2 = v15;
  v16 = v28;
  v17 = _mm_loadu_si128(&v29);
  v28 = nullptr;
  *(__m128i *)((char *)a2 + 24) = v17;
  a2[1].m128i_i64[0] = (__int64)v16;
  v18 = _mm_load_si128(&v31);
  v29 = 0;
  a2[2].m128i_i64[1] = (__int64)ptr;
  a2[3] = v18;
  ptr = nullptr;
  v31 = 0;
  copy_tinfo_t(&a2[4]);
  v19 = v36;
  *(__m128i *)((char *)a2 + 72) = _mm_loadu_si128(&v33);
  v20 = _mm_loadu_si128(&v34);
  a2[7].m128i_i64[1] = v19;
  *(__m128i *)((char *)a2 + 88) = v20;
  *(__m128i *)((char *)a2 + 104) = _mm_loadu_si128(&v35);
  a2[8].m128i_i64[0] = v37;
  a2[8].m128i_i8[8] = v38;
  ++a1[1];
  clear_tinfo_t(&v32);
  if ( ptr )
  {
    v31.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v28 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v28);
  }
  return v39 - __readfsqword(0x28u);
}
