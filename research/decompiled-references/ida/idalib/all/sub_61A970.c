void __fastcall sub_61A970(__int64 *a1, char *a2, __int64 a3)
{
  char *v5; // rbx
  unsigned __int64 v6; // rbp
  __int128 v7; // xmm0
  size_t v8; // r14
  __int64 v9; // rbx
  size_t v10; // r14
  void *v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  char *v14; // rdx
  char *v15; // rbp
  char *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r14
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm0
  void *v24; // rdi
  __int64 v26; // [rsp+0h] [rbp-48h]
  char *v27; // [rsp+8h] [rbp-40h]

  v5 = (char *)a1[2];
  if ( v5 < a2 )
  {
    v13 = qvector_reserve(a1, 0, a2, 48);
    v14 = (char *)a1[2];
    v15 = (char *)a1[1];
    a1[2] = (__int64)v5;
    v26 = v13;
    v16 = (char *)*a1;
    v27 = v14;
    v17 = (__int64)(v15 - 1);
    if ( v17 >= 0 )
    {
      v18 = v13;
      v19 = 0;
      do
      {
        v20 = *(_QWORD *)v16;
        v21 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = v19;
        *(_QWORD *)v18 = v20;
        *(__m128i *)(v18 + 8) = v21;
        v22 = *((_QWORD *)v16 + 3);
        v23 = _mm_loadu_si128((const __m128i *)v16 + 2);
        *((_QWORD *)v16 + 3) = 0;
        *(_QWORD *)(v18 + 24) = v22;
        *(__m128i *)(v18 + 32) = v23;
        v24 = *(void **)v16;
        *((_QWORD *)v16 + 5) = 0;
        if ( v24 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v24);
          v19 = 0;
        }
        v16 += 48;
        v18 += 48;
      }
      while ( v17-- != 0 );
      v16 = (char *)*a1;
    }
    qfree(v16);
    *a1 = v26;
    a1[2] = (__int64)v27;
  }
  v6 = a1[1];
  if ( v6 < (unsigned __int64)a2 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v9 = *a1 + 48 * v6;
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = v7;
        v10 = *(_QWORD *)(a3 + 8);
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
          *(_QWORD *)(v9 + 16) = v10;
          *(_QWORD *)v9 = v11;
          memcpy(v11, *(const void **)a3, v10);
          *(_QWORD *)(v9 + 8) = v10;
          v7 = 0;
        }
        *(_QWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 32) = v7;
        v8 = *(_QWORD *)(a3 + 32);
        if ( v8 )
          break;
        if ( a2 == (char *)++v6 )
          goto LABEL_9;
      }
      v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32));
      *(_QWORD *)(v9 + 24) = v12;
      ++v6;
      *(_QWORD *)(v9 + 40) = v8;
      memcpy(v12, *(const void **)(a3 + 24), v8);
      *(_QWORD *)(v9 + 32) = v8;
      v7 = 0;
    }
    while ( a2 != (char *)v6 );
  }
LABEL_9:
  a1[1] = (__int64)a2;
}
