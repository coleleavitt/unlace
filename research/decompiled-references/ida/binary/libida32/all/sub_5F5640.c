unsigned __int64 __fastcall sub_5F5640(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // r13
  size_t v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  const void *v15; // rsi
  _DWORD v16[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v17; // [rsp+10h] [rbp-78h]
  __m128i v18; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+28h] [rbp-60h]
  __m128i v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v2 = a2;
  v16[0] = 0;
  copy_argloc(v16, a2);
  v17 = nullptr;
  v18 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v12 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 24), (const char *)a2);
    a2 = *(_QWORD *)(a2 + 16);
    v17 = v12;
    v18.m128i_i64[1] = v3;
    memcpy(v12, (const void *)a2, v3);
    v18.m128i_i64[0] = v3;
  }
  v4 = *(_QWORD *)(v2 + 48);
  ptr = nullptr;
  v20 = 0;
  if ( v4 )
  {
    v14 = (void *)qalloc_or_throw(v4, (const char *)a2);
    v15 = *(const void **)(v2 + 40);
    ptr = v14;
    v20.m128i_i64[1] = v4;
    memcpy(v14, v15, v4);
    v20.m128i_i64[0] = v4;
  }
  v21 = 0;
  copy_tinfo_t(&v21);
  v5 = a1[1];
  v6 = *a1;
  v22 = *(_DWORD *)(v2 + 72);
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v13 = qvector_reserve(a1, v6, v5 + 1, 80);
    *a1 = v13;
    v5 = a1[1];
    v6 = v13;
  }
  v7 = v6 + 80 * v5;
  *(_DWORD *)v7 = 0;
  copy_argloc(v7, v16);
  v8 = v17;
  v9 = _mm_loadu_si128(&v18);
  *(_QWORD *)(v7 + 64) = 0;
  *(__m128i *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 16) = v8;
  v10 = _mm_load_si128(&v20);
  v18 = 0;
  *(_QWORD *)(v7 + 40) = ptr;
  *(__m128i *)(v7 + 48) = v10;
  v17 = nullptr;
  ptr = nullptr;
  v20 = 0;
  copy_tinfo_t(v7 + 64);
  *(_DWORD *)(v7 + 72) = v22;
  ++a1[1];
  clear_tinfo_t(&v21);
  if ( ptr )
  {
    v20.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    v18.m128i_i64[0] = 0;
    qfree(v17);
  }
  cleanup_argloc(v16);
  return v23 - __readfsqword(0x28u);
}

