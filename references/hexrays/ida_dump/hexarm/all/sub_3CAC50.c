unsigned __int64 __fastcall sub_3CAC50(__int64 *a1, __int64 a2)
{
  size_t v3; // r13
  size_t v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rax
  __m128i v10; // xmm0
  void *v11; // rax
  __m128i v12; // xmm1
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16; // rax
  void *v17; // rax
  const void *v18; // rsi
  _DWORD v19[4]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v20; // [rsp+10h] [rbp-88h]
  int v21; // [rsp+18h] [rbp-80h]
  void *v22; // [rsp+20h] [rbp-78h]
  __m128i v23; // [rsp+28h] [rbp-70h] BYREF
  void *v24; // [rsp+38h] [rbp-60h]
  __m128i v25; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+58h] [rbp-40h]
  __int64 v28; // [rsp+60h] [rbp-38h]
  unsigned __int64 v29; // [rsp+68h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v19[0] = 0;
  copy_argloc(v19, a2);
  v22 = nullptr;
  v23 = 0;
  v3 = *(_QWORD *)(a2 + 40);
  v20 = *(_QWORD *)(a2 + 16);
  v21 = *(_DWORD *)(a2 + 24);
  if ( v3 )
  {
    v14 = (void *)qalloc_or_throw(v3);
    v15 = *(const void **)(a2 + 32);
    v22 = v14;
    v23.m128i_i64[1] = v3;
    memcpy(v14, v15, v3);
    v23.m128i_i64[0] = v3;
  }
  v4 = *(_QWORD *)(a2 + 64);
  v24 = nullptr;
  v25 = 0;
  if ( v4 )
  {
    v17 = (void *)qalloc_or_throw(v4);
    v18 = *(const void **)(a2 + 56);
    v24 = v17;
    v25.m128i_i64[1] = v4;
    memcpy(v17, v18, v4);
    v25.m128i_i64[0] = v4;
  }
  v26 = 0;
  copy_tinfo_t(&v26, a2 + 80);
  v5 = a1[1];
  v6 = *a1;
  v27 = *(_QWORD *)(a2 + 88);
  v28 = *(_QWORD *)(a2 + 96);
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v16 = qvector_reserve(a1, v6, v5 + 1, 104);
    *a1 = v16;
    v5 = a1[1];
    v6 = v16;
  }
  v7 = v6 + 104 * v5;
  *(_DWORD *)v7 = 0;
  copy_argloc(v7, v19);
  v8 = v20;
  *(_QWORD *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 16) = v8;
  *(_DWORD *)(v7 + 24) = v21;
  v9 = v22;
  v22 = nullptr;
  v10 = _mm_loadu_si128(&v23);
  *(_QWORD *)(v7 + 32) = v9;
  *(__m128i *)(v7 + 40) = v10;
  v11 = v24;
  v12 = _mm_load_si128(&v25);
  v24 = nullptr;
  *(_QWORD *)(v7 + 56) = v11;
  *(__m128i *)(v7 + 64) = v12;
  v23 = 0;
  v25 = 0;
  copy_tinfo_t(v7 + 80, &v26);
  *(_QWORD *)(v7 + 88) = v27;
  *(_QWORD *)(v7 + 96) = v28;
  ++a1[1];
  clear_tinfo_t(&v26);
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22);
  }
  cleanup_argloc(v19);
  return v29 - __readfsqword(0x28u);
}
