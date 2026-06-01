unsigned __int64 __fastcall sub_6888B0(__int64 *a1, char *a2, __int64 a3)
{
  const char *v4; // rsi
  size_t v6; // r14
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  char *v10; // r12
  void *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  void *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  const void *v18; // rsi
  _DWORD v19[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v20; // [rsp+10h] [rbp-78h]
  __m128i v21; // [rsp+18h] [rbp-70h] BYREF
  void *v22; // [rsp+28h] [rbp-60h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+48h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v4 = (const char *)a3;
  v26 = __readfsqword(0x28u);
  v19[0] = 0;
  copy_argloc(v19, a3);
  v20 = nullptr;
  v21 = 0;
  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 24), v4);
    v4 = *(const char **)(a3 + 16);
    v20 = v15;
    v21.m128i_i64[1] = v6;
    memcpy(v15, v4, v6);
    v21.m128i_i64[0] = v6;
  }
  v7 = *(_QWORD *)(a3 + 48);
  v22 = nullptr;
  v23 = 0;
  if ( v7 )
  {
    v17 = (void *)qalloc_or_throw(v7, v4);
    v18 = *(const void **)(a3 + 40);
    v22 = v17;
    v23.m128i_i64[1] = v7;
    memcpy(v17, v18, v7);
    v23.m128i_i64[0] = v7;
  }
  v24 = 0;
  copy_tinfo_t(&v24);
  v8 = *a1;
  v25 = *(_DWORD *)(a3 + 72);
  v9 = a1[1];
  v10 = &a2[-v8];
  if ( a1[2] < (unsigned __int64)(v9 + 1) )
  {
    v16 = qvector_reserve(a1, v8, v9 + 1, 80);
    *a1 = v16;
    a2 = &v10[v16];
    v9 = a1[1];
  }
  memmove(a2 + 80, a2, 80 * v9 - (_QWORD)v10);
  *(_DWORD *)a2 = 0;
  copy_argloc(a2, v19);
  v11 = v20;
  v12 = _mm_loadu_si128(&v21);
  *((_QWORD *)a2 + 8) = 0;
  *(__m128i *)(a2 + 24) = v12;
  *((_QWORD *)a2 + 2) = v11;
  v13 = _mm_load_si128(&v23);
  v21 = 0;
  *((_QWORD *)a2 + 5) = v22;
  *((__m128i *)a2 + 3) = v13;
  v20 = nullptr;
  v22 = nullptr;
  v23 = 0;
  copy_tinfo_t(a2 + 64);
  *((_DWORD *)a2 + 18) = v25;
  ++a1[1];
  clear_tinfo_t(&v24);
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  cleanup_argloc(v19);
  return v26 - __readfsqword(0x28u);
}

