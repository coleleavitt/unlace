void __fastcall sub_4AB6F0(__int64 *a1, const char *a2, __int64 a3)
{
  const char *v4; // r12
  unsigned __int64 v6; // rbx
  const char *v7; // r13
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rdi
  size_t v11; // r14
  void *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm0
  void *v22; // rdi
  void *v23; // rdi
  __int64 v25; // [rsp+0h] [rbp-48h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = a1[2];
  if ( v6 < (unsigned __int64)a2 )
  {
    v13 = a2;
    a2 = nullptr;
    v14 = qvector_reserve(a1, 0, v13, 96);
    v15 = a1[2];
    a1[2] = v6;
    v16 = *a1;
    v25 = v14;
    v26 = v15;
    v17 = a1[1] - 1;
    if ( v17 >= 0 )
    {
      v18 = v14;
      do
      {
        *(_QWORD *)(v18 + 16) = 0;
        *(_DWORD *)(v18 + 24) = -1;
        *(_QWORD *)(v18 + 28) = 0xFFFFFFFFLL;
        *(_QWORD *)(v18 + 40) = 0;
        *(_OWORD *)v18 = 0;
        if ( v18 != v16 )
        {
          *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)v16);
          *(__m128i *)(v18 + 16) = _mm_loadu_si128((const __m128i *)(v16 + 16));
          *(_DWORD *)(v18 + 32) = *(_DWORD *)(v16 + 32);
          v19 = *(_QWORD *)(v16 + 40);
          if ( v19 )
            *(_QWORD *)(v18 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = *(_QWORD *)(v16 + 48);
        v21 = _mm_loadu_si128((const __m128i *)(v16 + 56));
        *(_QWORD *)(v16 + 48) = 0;
        *(_QWORD *)(v16 + 64) = 0;
        *(_QWORD *)(v18 + 48) = v20;
        *(__m128i *)(v18 + 56) = v21;
        LODWORD(v20) = *(_DWORD *)(v16 + 88);
        *(__m128i *)(v18 + 72) = _mm_loadu_si128((const __m128i *)(v16 + 72));
        *(_DWORD *)(v18 + 88) = v20;
        v22 = *(void **)(v16 + 48);
        if ( v22 )
        {
          *(_QWORD *)(v16 + 56) = 0;
          qfree(v22);
        }
        v23 = *(void **)(v16 + 40);
        if ( v23 )
          qfree(v23);
        v16 += 96;
        v18 += 96;
      }
      while ( v17-- != 0 );
      v16 = *a1;
    }
    qfree((void *)v16);
    *a1 = v25;
    a1[2] = v26;
  }
  v7 = (const char *)a1[1];
  if ( v7 < v4 )
  {
    do
    {
      v9 = *a1 + 96LL * (_QWORD)v7;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = -1;
      *(_QWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) = 0;
      *(_OWORD *)v9 = 0;
      if ( v9 != a3 )
      {
        *(__m128i *)v9 = _mm_loadu_si128((const __m128i *)a3);
        *(__m128i *)(v9 + 16) = _mm_loadu_si128((const __m128i *)(a3 + 16));
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(a3 + 32);
        v10 = *(_QWORD *)(a3 + 40);
        if ( v10 )
          *(_QWORD *)(v9 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      *(_QWORD *)(v9 + 48) = 0;
      *(_OWORD *)(v9 + 56) = 0;
      v11 = *(_QWORD *)(a3 + 56);
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 56), a2);
        *(_QWORD *)(v9 + 48) = v12;
        *(_QWORD *)(v9 + 64) = v11;
        a2 = *(const char **)(a3 + 48);
        memcpy(v12, a2, v11);
        *(_QWORD *)(v9 + 56) = v11;
      }
      v8 = _mm_loadu_si128((const __m128i *)(a3 + 72));
      ++v7;
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(a3 + 88);
      *(__m128i *)(v9 + 72) = v8;
    }
    while ( v4 != v7 );
  }
  a1[1] = (__int64)v4;
}

