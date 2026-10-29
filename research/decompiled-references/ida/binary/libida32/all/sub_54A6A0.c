unsigned __int64 __fastcall sub_54A6A0(__int64 *a1, const char *a2, __int64 a3)
{
  __m128i *v3; // rbx
  size_t v4; // r13
  size_t v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int8 v10; // al
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int8 *v13; // rbp
  __m128i v14; // xmm0
  void *v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm0
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // rax
  const void *v24; // rsi
  __m128i v25; // [rsp+0h] [rbp-B8h] BYREF
  void *v26; // [rsp+10h] [rbp-A8h]
  __m128i v27; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+28h] [rbp-90h]
  __m128i v29; // [rsp+30h] [rbp-88h] BYREF
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  __m128i v31; // [rsp+48h] [rbp-70h] BYREF
  __m128i v32; // [rsp+58h] [rbp-60h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  __int8 v35; // [rsp+78h] [rbp-40h]
  unsigned __int64 v36; // [rsp+88h] [rbp-30h]

  v3 = (__m128i *)a2;
  v4 = *(_QWORD *)(a3 + 24);
  v36 = __readfsqword(0x28u);
  v26 = nullptr;
  v25 = _mm_loadu_si128((const __m128i *)a3);
  v27 = 0;
  if ( v4 )
  {
    v21 = (void *)qalloc_or_throw(v4, a2);
    a2 = *(const char **)(a3 + 16);
    v27.m128i_i64[1] = v4;
    v26 = v21;
    memcpy(v21, a2, v4);
    v27.m128i_i64[0] = v4;
  }
  v6 = *(_QWORD *)(a3 + 48);
  ptr = nullptr;
  v29 = 0;
  if ( v6 )
  {
    v23 = (void *)qalloc_or_throw(v6, a2);
    v24 = *(const void **)(a3 + 40);
    ptr = v23;
    v29.m128i_i64[1] = v6;
    memcpy(v23, v24, v6);
    v29.m128i_i64[0] = v6;
  }
  v30 = 0;
  copy_tinfo_t(&v30);
  v7 = _mm_loadu_si128((const __m128i *)(a3 + 72));
  v8 = *(_QWORD *)(a3 + 112);
  v9 = *a1;
  v33 = *(_QWORD *)(a3 + 104);
  v10 = *(_BYTE *)(a3 + 120);
  v34 = v8;
  v11 = a1[1];
  v31 = v7;
  v12 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v35 = v10;
  v13 = &v3->m128i_i8[-v9];
  v32 = v12;
  if ( a1[2] < (unsigned __int64)(v11 + 1) )
  {
    v22 = qvector_reserve(a1, v9, v11 + 1, 128);
    *a1 = v22;
    v11 = a1[1];
    v3 = (__m128i *)&v13[v22];
  }
  memmove(&v3[8], v3, (v11 << 7) - (_QWORD)v13);
  v14 = _mm_load_si128(&v25);
  v3[4].m128i_i64[0] = 0;
  *v3 = v14;
  v15 = v26;
  v16 = _mm_loadu_si128(&v27);
  v26 = nullptr;
  *(__m128i *)((char *)v3 + 24) = v16;
  v3[1].m128i_i64[0] = (__int64)v15;
  v17 = _mm_load_si128(&v29);
  v27 = 0;
  v3[2].m128i_i64[1] = (__int64)ptr;
  v3[3] = v17;
  ptr = nullptr;
  v29 = 0;
  copy_tinfo_t(&v3[4]);
  v18 = v33;
  *(__m128i *)((char *)v3 + 72) = _mm_loadu_si128(&v31);
  v19 = _mm_loadu_si128(&v32);
  v3[6].m128i_i64[1] = v18;
  *(__m128i *)((char *)v3 + 88) = v19;
  v3[7].m128i_i64[0] = v34;
  v3[7].m128i_i8[8] = v35;
  ++a1[1];
  clear_tinfo_t(&v30);
  if ( ptr )
  {
    v29.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v26 )
  {
    v27.m128i_i64[0] = 0;
    qfree(v26);
  }
  return v36 - __readfsqword(0x28u);
}

