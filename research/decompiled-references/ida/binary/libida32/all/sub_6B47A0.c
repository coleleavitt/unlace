unsigned __int64 __fastcall sub_6B47A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // r15
  void *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __m128i v16; // xmm0
  __int64 v17; // r9
  __int64 v18; // rdx
  char *v19; // rsi
  char *v20; // rax
  void *v21; // rax
  void *v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  char *v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  void *v31; // rax
  void *v32; // rax
  char *v33; // rax
  __m128i v34; // [rsp+8h] [rbp-98h] BYREF
  __m128i v35; // [rsp+18h] [rbp-88h] BYREF
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __m128i v37; // [rsp+30h] [rbp-70h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  size_t n; // [rsp+50h] [rbp-50h]
  __int64 v40; // [rsp+58h] [rbp-48h]
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v37 = 0;
  ptr = nullptr;
  v40 = 0;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
    v21 = nullptr;
    v9 = nullptr;
    if ( !a2 )
      return v41 - __readfsqword(0x28u);
    goto LABEL_17;
  }
  v5 = nullptr;
  v6 = sub_B68690(a3);
  v7 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v5 = *(__int64 **)sub_B68690(a3);
  v8 = 0;
  v9 = nullptr;
  if ( (__int64 *)v7 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v5;
        if ( *v5 )
        {
          if ( *(_WORD *)(v10 + 36) == 91 )
          {
            v11 = *(_QWORD *)(a1 + 48);
            src = v9;
            n = v8;
            v12 = sub_6B44D0((char **)&src, v10, v11);
            v8 = n;
            v9 = src;
            v16 = _mm_unpacklo_epi64((__m128i)n, (__m128i)n);
            if ( v12 )
              break;
          }
        }
        if ( (__int64 *)v7 == ++v5 )
          goto LABEL_15;
      }
      v17 = 0;
      if ( n )
      {
        v34 = v16;
        v31 = (void *)qalloc_or_throw(n, (const char *)v10, v13, v14, v15, 0);
        v32 = memcpy(v31, v9, v8);
        v16 = _mm_load_si128(&v34);
        v17 = (__int64)v32;
      }
      v18 = v37.m128i_i64[0];
      v19 = (char *)ptr;
      if ( v37.m128i_i64[1] < (unsigned __int64)(v37.m128i_i64[0] + 1) )
      {
        v34.m128i_i64[0] = v17;
        v35 = v16;
        v33 = (char *)qvector_reserve(&ptr, ptr, v37.m128i_i64[0] + 1, 24);
        v18 = v37.m128i_i64[0];
        v16 = _mm_load_si128(&v35);
        ptr = v33;
        v17 = v34.m128i_i64[0];
        v19 = v33;
      }
      ++v5;
      v20 = &v19[24 * v18];
      *(_QWORD *)v20 = v17;
      *(__m128i *)(v20 + 8) = v16;
      ++v37.m128i_i64[0];
    }
    while ( (__int64 *)v7 != v5 );
LABEL_15:
    if ( !a2 )
      goto LABEL_18;
    v21 = ptr;
LABEL_17:
    v22 = *(void **)a2;
    v23 = _mm_loadu_si128(&v37);
    *(_QWORD *)a2 = v21;
    v24 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    ptr = v22;
    *(__m128i *)(a2 + 8) = v23;
    v37 = v24;
LABEL_18:
    if ( v9 )
      qfree(v9);
    v25 = (char *)ptr;
    goto LABEL_21;
  }
  v25 = (char *)ptr;
  v21 = ptr;
  if ( a2 )
    goto LABEL_17;
LABEL_21:
  if ( v25 )
  {
    v26 = v37.m128i_i64[0];
    if ( v37.m128i_i64[0] )
    {
      v27 = 0;
      do
      {
        v28 = &v25[24 * v27];
        v29 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          qfree(v29);
          v25 = (char *)ptr;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    v37.m128i_i64[0] = 0;
    qfree(v25);
  }
  return v41 - __readfsqword(0x28u);
}

