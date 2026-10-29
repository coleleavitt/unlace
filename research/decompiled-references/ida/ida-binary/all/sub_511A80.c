unsigned __int64 __fastcall msg_entries_t__::vfunc_4(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  size_t v3; // r12
  const char *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // r13
  char *v9; // rbp
  __m128i v10; // xmm0
  void *v11; // rdi
  size_t v13; // rbp
  const char *v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  char *v17; // r14
  __m128i v18; // xmm0
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rax
  char *v25; // rax
  void *src; // [rsp+0h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-90h]
  __m128i v28; // [rsp+18h] [rbp-80h] BYREF
  int v29; // [rsp+28h] [rbp-70h]
  size_t v30; // [rsp+40h] [rbp-58h]
  __m128i v31; // [rsp+48h] [rbp-50h] BYREF
  int v32; // [rsp+58h] [rbp-40h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v2 = a1 + 2;
  v3 = *(_QWORD *)(a2 + 8);
  v33 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v3 )
  {
    v19 = (void *)qalloc_or_throw(v3);
    v20 = *(const void **)a2;
    n[1] = v3;
    src = v19;
    memcpy(v19, v20, v3);
    n[0] = v3;
  }
  v5 = (const char *)a1[2];
  v6 = a1[4];
  v28.m128i_i64[0] = 0;
  v28.m128i_i64[1] = -1;
  v29 = 0;
  if ( &src >= (void **)v5 && &src < (void **)&v5[48 * v6] )
  {
    v13 = n[0];
    v14 = nullptr;
    v30 = 0;
    if ( n[0] )
    {
      v25 = (char *)qalloc_or_throw(n[0]);
      v30 = v13;
      v14 = v25;
      memcpy(v25, src, v13);
      v6 = a1[4];
      v5 = (const char *)a1[2];
    }
    v15 = a1[3];
    v16 = _mm_loadu_si128(&v28);
    v32 = 0;
    v31 = v16;
    if ( v6 < v15 + 1 )
    {
      v24 = qvector_reserve(v2, v5, v15 + 1, 48);
      a1[2] = v24;
      v5 = (const char *)v24;
      v15 = a1[3];
    }
    v17 = (char *)&v5[48 * v15];
    *(_QWORD *)v17 = 0;
    *(_OWORD *)(v17 + 8) = 0;
    if ( v13 )
    {
      v23 = (void *)qalloc_or_throw(v13);
      *(_QWORD *)v17 = v23;
      v5 = v14;
      *((_QWORD *)v17 + 2) = v13;
      memcpy(v23, v14, v13);
      *((_QWORD *)v17 + 1) = v13;
    }
    v31.m128i_i64[0] = 0;
    v18 = _mm_loadu_si128(&v31);
    *((_DWORD *)v17 + 10) = 0;
    *(__m128i *)(v17 + 24) = v18;
    if ( v14 )
      qfree(v14, v5);
  }
  else
  {
    v7 = a1[3];
    if ( v6 < v7 + 1 )
    {
      v22 = qvector_reserve(v2, v5, v7 + 1, 48);
      a1[2] = v22;
      v5 = (const char *)v22;
      v7 = a1[3];
    }
    v8 = n[0];
    v9 = (char *)&v5[48 * v7];
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    if ( v8 )
    {
      v21 = (void *)qalloc_or_throw(v8);
      *(_QWORD *)v9 = v21;
      v5 = (const char *)src;
      *((_QWORD *)v9 + 2) = v8;
      memcpy(v21, v5, v8);
      *((_QWORD *)v9 + 1) = v8;
    }
    v10 = _mm_loadu_si128(&v28);
    *((_DWORD *)v9 + 10) = 0;
    *(__m128i *)(v9 + 24) = v10;
  }
  v11 = src;
  ++a1[3];
  if ( v11 )
    qfree(v11, v5);
  return v33 - __readfsqword(0x28u);
}
