void __fastcall sub_4AB270(__int64 *a1, const char *a2, const __m128i *a3)
{
  const char *v4; // r12
  unsigned __int64 v6; // rbx
  const char *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdi
  size_t v10; // r14
  void *v11; // rax
  const char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v21; // rdi
  void *v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = a1[2];
  if ( v6 < (unsigned __int64)a2 )
  {
    v12 = a2;
    a2 = nullptr;
    v13 = qvector_reserve(a1, 0, v12, 80);
    v14 = a1[2];
    a1[2] = v6;
    v15 = *a1;
    v24 = v13;
    v25 = v14;
    v16 = a1[1] - 1;
    if ( v16 >= 0 )
    {
      v17 = v13;
      do
      {
        *(_QWORD *)(v17 + 16) = 0;
        *(_DWORD *)(v17 + 24) = -1;
        *(_QWORD *)(v17 + 28) = 0xFFFFFFFFLL;
        *(_QWORD *)(v17 + 40) = 0;
        *(_OWORD *)v17 = 0;
        if ( v17 != v15 )
        {
          *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)v15);
          *(__m128i *)(v17 + 16) = _mm_loadu_si128((const __m128i *)(v15 + 16));
          *(_DWORD *)(v17 + 32) = *(_DWORD *)(v15 + 32);
          v18 = *(_QWORD *)(v15 + 40);
          if ( v18 )
            *(_QWORD *)(v17 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = *(_QWORD *)(v15 + 48);
        v20 = _mm_loadu_si128((const __m128i *)(v15 + 56));
        *(_QWORD *)(v15 + 48) = 0;
        *(_QWORD *)(v15 + 64) = 0;
        *(_QWORD *)(v17 + 48) = v19;
        *(__m128i *)(v17 + 56) = v20;
        *(_DWORD *)(v17 + 72) = *(_DWORD *)(v15 + 72);
        *(_DWORD *)(v17 + 76) = *(_DWORD *)(v15 + 76);
        v21 = *(void **)(v15 + 48);
        if ( v21 )
        {
          *(_QWORD *)(v15 + 56) = 0;
          qfree(v21);
        }
        v22 = *(void **)(v15 + 40);
        if ( v22 )
          qfree(v22);
        v15 += 80;
        v17 += 80;
      }
      while ( v16-- != 0 );
      v15 = *a1;
    }
    qfree((void *)v15);
    *a1 = v24;
    a1[2] = v25;
  }
  v7 = (const char *)a1[1];
  if ( v7 < v4 )
  {
    do
    {
      v8 = *a1 + 80LL * (_QWORD)v7;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = -1;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_OWORD *)v8 = 0;
      if ( (const __m128i *)v8 != a3 )
      {
        *(__m128i *)v8 = _mm_loadu_si128(a3);
        *(__m128i *)(v8 + 16) = _mm_loadu_si128(a3 + 1);
        *(_DWORD *)(v8 + 32) = a3[2].m128i_i32[0];
        v9 = a3[2].m128i_i64[1];
        if ( v9 )
          *(_QWORD *)(v8 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      *(_QWORD *)(v8 + 48) = 0;
      *(_OWORD *)(v8 + 56) = 0;
      v10 = a3[3].m128i_u64[1];
      if ( v10 )
      {
        v11 = (void *)qalloc_or_throw(a3[3].m128i_i64[1], a2);
        *(_QWORD *)(v8 + 48) = v11;
        *(_QWORD *)(v8 + 64) = v10;
        a2 = (const char *)a3[3].m128i_i64[0];
        memcpy(v11, a2, v10);
        *(_QWORD *)(v8 + 56) = v10;
      }
      ++v7;
      *(_DWORD *)(v8 + 72) = a3[4].m128i_i32[2];
      *(_DWORD *)(v8 + 76) = a3[4].m128i_i32[3];
    }
    while ( v4 != v7 );
  }
  a1[1] = (__int64)v4;
}

