unsigned __int64 __fastcall sub_3CA710(__int64 *a1, __int64 a2)
{
  size_t v3; // r13
  size_t v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __m128i v8; // xmm0
  void *v9; // rax
  __m128i v10; // xmm1
  void *v12; // rax
  const void *v13; // rsi
  __int64 v14; // rax
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17; // [rsp+10h] [rbp-88h]
  int v18; // [rsp+18h] [rbp-80h]
  void *v19; // [rsp+20h] [rbp-78h]
  __m128i v20; // [rsp+28h] [rbp-70h] BYREF
  void *v21; // [rsp+38h] [rbp-60h]
  __m128i v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  __int64 v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  copy_argloc();
  v19 = nullptr;
  v20 = 0;
  v3 = *(_QWORD *)(a2 + 40);
  v17 = *(_QWORD *)(a2 + 16);
  v18 = *(_DWORD *)(a2 + 24);
  if ( v3 )
  {
    v12 = (void *)qalloc_or_throw();
    v13 = *(const void **)(a2 + 32);
    v19 = v12;
    v20.m128i_i64[1] = v3;
    memcpy(v12, v13, v3);
    v20.m128i_i64[0] = v3;
  }
  v4 = *(_QWORD *)(a2 + 64);
  v21 = nullptr;
  v22 = 0;
  if ( v4 )
  {
    v15 = (void *)qalloc_or_throw();
    v16 = *(const void **)(a2 + 56);
    v21 = v15;
    v22.m128i_i64[1] = v4;
    memcpy(v15, v16, v4);
    v22.m128i_i64[0] = v4;
  }
  v23 = 0;
  copy_tinfo_t();
  v5 = a1[1];
  v6 = *a1;
  v24 = *(_QWORD *)(a2 + 88);
  v25 = *(_QWORD *)(a2 + 96);
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v14 = qvector_reserve();
    *a1 = v14;
    v5 = a1[1];
    v6 = v14;
  }
  v7 = v6 + 104 * v5;
  *(_DWORD *)v7 = 0;
  copy_argloc();
  *(_QWORD *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 16) = v17;
  *(_DWORD *)(v7 + 24) = v18;
  v8 = _mm_loadu_si128(&v20);
  *(_QWORD *)(v7 + 32) = v19;
  *(__m128i *)(v7 + 40) = v8;
  v9 = v21;
  v10 = _mm_load_si128(&v22);
  v21 = nullptr;
  *(_QWORD *)(v7 + 56) = v9;
  *(__m128i *)(v7 + 64) = v10;
  v20 = 0;
  v22 = 0;
  copy_tinfo_t();
  *(_QWORD *)(v7 + 88) = v24;
  *(_QWORD *)(v7 + 96) = v25;
  ++a1[1];
  clear_tinfo_t();
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v26 - __readfsqword(0x28u);
}
