unsigned __int64 __fastcall sub_6A0430(__int64 *a1, const __m128i *a2)
{
  size_t v2; // rbp
  const __m128i *v3; // rbx
  size_t v4; // rbp
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int8 v8; // al
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rbx
  void *v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  const void *v21; // rsi
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  void *v23; // [rsp+10h] [rbp-98h]
  __m128i v24; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+28h] [rbp-80h]
  __m128i v26; // [rsp+30h] [rbp-78h] BYREF
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __m128i v28; // [rsp+48h] [rbp-60h] BYREF
  __m128i v29; // [rsp+58h] [rbp-50h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h]
  __int64 v31; // [rsp+70h] [rbp-38h]
  __int8 v32; // [rsp+78h] [rbp-30h]
  unsigned __int64 v33; // [rsp+88h] [rbp-20h]

  v2 = a2[1].m128i_u64[1];
  v33 = __readfsqword(0x28u);
  v3 = a2;
  v23 = nullptr;
  v22 = _mm_loadu_si128(a2);
  v24 = 0;
  if ( v2 )
  {
    v18 = (void *)qalloc_or_throw(v2, a2->m128i_i8);
    a2 = (const __m128i *)a2[1].m128i_i64[0];
    v24.m128i_i64[1] = v2;
    v23 = v18;
    memcpy(v18, a2, v2);
    v24.m128i_i64[0] = v2;
  }
  v4 = v3[3].m128i_u64[0];
  ptr = nullptr;
  v26 = 0;
  if ( v4 )
  {
    v20 = (void *)qalloc_or_throw(v4, a2->m128i_i8);
    v21 = (const void *)v3[2].m128i_i64[1];
    ptr = v20;
    v26.m128i_i64[1] = v4;
    memcpy(v20, v21, v4);
    v26.m128i_i64[0] = v4;
  }
  v27 = 0;
  copy_tinfo_t(&v27);
  v5 = _mm_loadu_si128((const __m128i *)((char *)v3 + 72));
  v6 = v3[7].m128i_i64[0];
  v7 = *a1;
  v30 = v3[6].m128i_i64[1];
  v8 = v3[7].m128i_i8[8];
  v31 = v6;
  v9 = a1[1];
  v28 = v5;
  v10 = _mm_loadu_si128((const __m128i *)((char *)v3 + 88));
  v32 = v8;
  v29 = v10;
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v19 = qvector_reserve(a1, v7, v9 + 1, 128);
    *a1 = v19;
    v9 = a1[1];
    v7 = v19;
  }
  v11 = v7 + (v9 << 7);
  *(__m128i *)v11 = _mm_load_si128(&v22);
  v12 = v23;
  v13 = _mm_loadu_si128(&v24);
  *(_QWORD *)(v11 + 64) = 0;
  *(__m128i *)(v11 + 24) = v13;
  *(_QWORD *)(v11 + 16) = v12;
  v14 = _mm_load_si128(&v26);
  v24 = 0;
  *(_QWORD *)(v11 + 40) = ptr;
  *(__m128i *)(v11 + 48) = v14;
  v23 = nullptr;
  ptr = nullptr;
  v26 = 0;
  copy_tinfo_t(v11 + 64);
  v15 = v30;
  *(__m128i *)(v11 + 72) = _mm_loadu_si128(&v28);
  v16 = _mm_loadu_si128(&v29);
  *(_QWORD *)(v11 + 104) = v15;
  *(__m128i *)(v11 + 88) = v16;
  *(_QWORD *)(v11 + 112) = v31;
  *(_BYTE *)(v11 + 120) = v32;
  ++a1[1];
  clear_tinfo_t(&v27);
  if ( ptr )
  {
    v26.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v23 )
  {
    v24.m128i_i64[0] = 0;
    qfree(v23);
  }
  return v33 - __readfsqword(0x28u);
}

