unsigned __int64 __fastcall sub_6C1060(__int64 *a1, __int64 a2)
{
  size_t v2; // rbp
  size_t v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rbx
  void *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v18; // rax
  const void *v19; // rsi
  __int64 v20; // rax
  void *v21; // rax
  const void *v22; // rsi
  __m128i v23; // [rsp+0h] [rbp-B8h] BYREF
  void *v24; // [rsp+10h] [rbp-A8h]
  __m128i v25; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+28h] [rbp-90h]
  __m128i v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  __m128i v29; // [rsp+48h] [rbp-70h] BYREF
  __m128i v30; // [rsp+58h] [rbp-60h] BYREF
  __m128i v31; // [rsp+68h] [rbp-50h] BYREF
  __int64 v32; // [rsp+78h] [rbp-40h]
  __int64 v33; // [rsp+80h] [rbp-38h]
  char v34; // [rsp+88h] [rbp-30h]
  unsigned __int64 v35; // [rsp+98h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 24);
  v35 = __readfsqword(0x28u);
  v24 = nullptr;
  v23 = _mm_loadu_si128((const __m128i *)a2);
  v25 = 0;
  if ( v2 )
  {
    v18 = (void *)qalloc_or_throw(v2);
    v19 = *(const void **)(a2 + 16);
    v25.m128i_i64[1] = v2;
    v24 = v18;
    memcpy(v18, v19, v2);
    v25.m128i_i64[0] = v2;
  }
  v4 = *(_QWORD *)(a2 + 48);
  ptr = nullptr;
  v27 = 0;
  if ( v4 )
  {
    v21 = (void *)qalloc_or_throw(v4);
    v22 = *(const void **)(a2 + 40);
    ptr = v21;
    v27.m128i_i64[1] = v4;
    memcpy(v21, v22, v4);
    v27.m128i_i64[0] = v4;
  }
  v28 = 0;
  copy_tinfo_t(&v28);
  v5 = *(_QWORD *)(a2 + 120);
  v6 = *(_QWORD *)(a2 + 128);
  v7 = *a1;
  v29 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v32 = v5;
  LOBYTE(v5) = *(_BYTE *)(a2 + 136);
  v33 = v6;
  v9 = a1[1];
  v30 = v8;
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v34 = v5;
  v31 = v10;
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v20 = qvector_reserve(a1, v7, v9 + 1, 144);
    *a1 = v20;
    v9 = a1[1];
    v7 = v20;
  }
  v11 = v7 + 144 * v9;
  *(__m128i *)v11 = _mm_load_si128(&v23);
  v12 = v24;
  v13 = _mm_loadu_si128(&v25);
  *(_QWORD *)(v11 + 64) = 0;
  *(__m128i *)(v11 + 24) = v13;
  *(_QWORD *)(v11 + 16) = v12;
  v14 = _mm_load_si128(&v27);
  v25 = 0;
  *(_QWORD *)(v11 + 40) = ptr;
  *(__m128i *)(v11 + 48) = v14;
  v24 = nullptr;
  ptr = nullptr;
  v27 = 0;
  copy_tinfo_t(v11 + 64);
  v15 = v32;
  *(__m128i *)(v11 + 72) = _mm_loadu_si128(&v29);
  v16 = _mm_loadu_si128(&v30);
  *(_QWORD *)(v11 + 120) = v15;
  *(__m128i *)(v11 + 88) = v16;
  *(__m128i *)(v11 + 104) = _mm_loadu_si128(&v31);
  *(_QWORD *)(v11 + 128) = v33;
  *(_BYTE *)(v11 + 136) = v34;
  ++a1[1];
  clear_tinfo_t(&v28);
  if ( ptr )
  {
    v27.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24);
  }
  return v35 - __readfsqword(0x28u);
}
