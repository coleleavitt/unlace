unsigned __int64 __fastcall sub_3EF890(__int64 *a1, __int64 a2)
{
  size_t v3; // r13
  size_t v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // rax
  void *v15; // rax
  const void *v16; // rsi
  _DWORD v17[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v18; // [rsp+10h] [rbp-78h]
  __m128i v19; // [rsp+18h] [rbp-70h] BYREF
  void *v20; // [rsp+28h] [rbp-60h]
  __m128i v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  int v23; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v17[0] = 0;
  copy_argloc(v17, a2);
  v18 = nullptr;
  v19 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v12 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 24));
    v13 = *(const void **)(a2 + 16);
    v18 = v12;
    v19.m128i_i64[1] = v3;
    memcpy(v12, v13, v3);
    v19.m128i_i64[0] = v3;
  }
  v4 = *(_QWORD *)(a2 + 48);
  v20 = nullptr;
  v21 = 0;
  if ( v4 )
  {
    v15 = (void *)qalloc_or_throw(v4);
    v16 = *(const void **)(a2 + 40);
    v20 = v15;
    v21.m128i_i64[1] = v4;
    memcpy(v15, v16, v4);
    v21.m128i_i64[0] = v4;
  }
  v22 = 0;
  copy_tinfo_t(&v22, a2 + 64);
  v5 = a1[1];
  v6 = *a1;
  v23 = *(_DWORD *)(a2 + 72);
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v14 = qvector_reserve(a1, v6, v5 + 1, 80);
    *a1 = v14;
    v5 = a1[1];
    v6 = v14;
  }
  v7 = v6 + 80 * v5;
  *(_DWORD *)v7 = 0;
  copy_argloc(v7, v17);
  v8 = v18;
  v9 = _mm_loadu_si128(&v19);
  *(_QWORD *)(v7 + 64) = 0;
  *(__m128i *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = v8;
  v10 = _mm_load_si128(&v21);
  v19 = 0;
  *(_QWORD *)(v7 + 40) = v20;
  *(__m128i *)(v7 + 48) = v10;
  v18 = nullptr;
  v20 = nullptr;
  v21 = 0;
  copy_tinfo_t(v7 + 64, &v22);
  *(_DWORD *)(v7 + 72) = v23;
  ++a1[1];
  clear_tinfo_t(&v22);
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree(v18);
  }
  cleanup_argloc(v17);
  return v24 - __readfsqword(0x28u);
}
