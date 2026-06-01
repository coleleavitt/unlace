void __fastcall sub_5FE9F0(__int64 *a1, const char *a2, __int64 a3)
{
  const char *v4; // r13
  unsigned __int64 v6; // rbx
  const char *v7; // rbp
  __int128 v8; // xmm0
  size_t v9; // r14
  __int64 v10; // rbx
  size_t v11; // r14
  void *v12; // rax
  void *v13; // rax
  const char *v14; // rdx
  __int64 v15; // rax
  char *v16; // rdx
  char *v17; // rbp
  char *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r14
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v28; // [rsp+0h] [rbp-48h]
  char *v29; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = a1[2];
  if ( v6 < (unsigned __int64)a2 )
  {
    v14 = a2;
    a2 = nullptr;
    v15 = qvector_reserve(a1, 0, v14, 48);
    v16 = (char *)a1[2];
    v17 = (char *)a1[1];
    a1[2] = v6;
    v28 = v15;
    v18 = (char *)*a1;
    v29 = v16;
    v19 = (__int64)(v17 - 1);
    if ( v19 >= 0 )
    {
      v20 = v15;
      v21 = 0;
      do
      {
        v22 = *(_QWORD *)v18;
        v23 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = v21;
        *(_QWORD *)v20 = v22;
        *(__m128i *)(v20 + 8) = v23;
        v24 = *((_QWORD *)v18 + 3);
        v25 = _mm_loadu_si128((const __m128i *)v18 + 2);
        *((_QWORD *)v18 + 3) = 0;
        *(_QWORD *)(v20 + 24) = v24;
        *(__m128i *)(v20 + 32) = v25;
        v26 = *(void **)v18;
        *((_QWORD *)v18 + 5) = 0;
        if ( v26 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v26);
          v21 = 0;
        }
        v18 += 48;
        v20 += 48;
      }
      while ( v19-- != 0 );
      v18 = (char *)*a1;
    }
    qfree(v18);
    *a1 = v28;
    a1[2] = (__int64)v29;
  }
  v7 = (const char *)a1[1];
  if ( v7 < v4 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v10 = *a1 + 48LL * (_QWORD)v7;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = v8;
        v11 = *(_QWORD *)(a3 + 8);
        if ( v11 )
        {
          v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2);
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)v10 = v12;
          a2 = *(const char **)a3;
          memcpy(v12, *(const void **)a3, v11);
          *(_QWORD *)(v10 + 8) = v11;
          v8 = 0;
        }
        *(_QWORD *)(v10 + 24) = 0;
        *(_OWORD *)(v10 + 32) = v8;
        v9 = *(_QWORD *)(a3 + 32);
        if ( v9 )
          break;
        if ( v4 == ++v7 )
          goto LABEL_9;
      }
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32), a2);
      *(_QWORD *)(v10 + 24) = v13;
      ++v7;
      *(_QWORD *)(v10 + 40) = v9;
      a2 = *(const char **)(a3 + 24);
      memcpy(v13, a2, v9);
      *(_QWORD *)(v10 + 32) = v9;
      v8 = 0;
    }
    while ( v4 != v7 );
  }
LABEL_9:
  a1[1] = (__int64)v4;
}

