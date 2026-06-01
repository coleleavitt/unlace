void __fastcall sub_5DFA10(size_t *a1, char *a2, __int64 a3)
{
  char *v6; // rbx
  unsigned __int64 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // r15
  char *v10; // rbx
  __int64 v11; // r15
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  char *v15; // rsi
  char *v16; // r12
  char *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm0
  void *v24; // rdi
  void *v25; // rdi
  size_t n; // [rsp+0h] [rbp-48h]

  v6 = (char *)a1[2];
  if ( v6 < a2 )
  {
    v14 = qvector_reserve(a1, 0, a2, 64);
    v15 = (char *)a1[2];
    v16 = (char *)a1[1];
    a1[2] = (size_t)v6;
    n = v14;
    v17 = (char *)*a1;
    v18 = (__int64)(v16 - 1);
    if ( v18 >= 0 )
    {
      v19 = v14;
      do
      {
        *(_QWORD *)v19 = *(_QWORD *)v17;
        v20 = *((_QWORD *)v17 + 1);
        v21 = _mm_loadu_si128((const __m128i *)v17 + 1);
        *((_QWORD *)v17 + 1) = 0;
        *(_QWORD *)(v19 + 8) = v20;
        *(__m128i *)(v19 + 16) = v21;
        v22 = *((_QWORD *)v17 + 4);
        v23 = _mm_loadu_si128((const __m128i *)(v17 + 40));
        *((_OWORD *)v17 + 1) = 0;
        *(_QWORD *)(v19 + 32) = v22;
        *(__m128i *)(v19 + 40) = v23;
        LODWORD(v22) = *((_DWORD *)v17 + 14);
        *((_QWORD *)v17 + 4) = 0;
        *((_QWORD *)v17 + 6) = 0;
        *(_DWORD *)(v19 + 56) = v22;
        *(_BYTE *)(v19 + 60) = v17[60];
        *(_BYTE *)(v19 + 61) = v17[61];
        v24 = *((void **)v17 + 4);
        if ( v24 )
        {
          *((_QWORD *)v17 + 5) = 0;
          qfree(v24);
        }
        v25 = *((void **)v17 + 1);
        if ( v25 )
        {
          *((_QWORD *)v17 + 2) = 0;
          qfree(v25);
        }
        v17 += 64;
        v19 += 64;
      }
      while ( v18-- != 0 );
      v17 = (char *)*a1;
    }
    qfree(v17);
    *a1 = n;
    a1[2] = (size_t)v15;
  }
  v7 = a1[1];
  if ( v7 < (unsigned __int64)a2 )
  {
    v8 = 0;
    do
    {
      v10 = (char *)(*a1 + (v7 << 6));
      *(_QWORD *)v10 = *(_QWORD *)a3;
      *((_QWORD *)v10 + 1) = 0;
      *((_OWORD *)v10 + 1) = v8;
      v11 = *(_QWORD *)(a3 + 16);
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(4 * v11);
        *((_QWORD *)v10 + 3) = v11;
        *((_QWORD *)v10 + 1) = v12;
        memcpy(v12, *(const void **)(a3 + 8), 4 * v11);
        *((_QWORD *)v10 + 2) = v11;
        v8 = 0;
      }
      *((_QWORD *)v10 + 4) = 0;
      *(_OWORD *)(v10 + 40) = v8;
      v9 = *(_QWORD *)(a3 + 40);
      if ( v9 )
      {
        v13 = (void *)qalloc_or_throw(4 * v9);
        *((_QWORD *)v10 + 4) = v13;
        *((_QWORD *)v10 + 6) = v9;
        memcpy(v13, *(const void **)(a3 + 32), 4 * v9);
        *((_QWORD *)v10 + 5) = v9;
        v8 = 0;
      }
      ++v7;
      *((_DWORD *)v10 + 14) = *(_DWORD *)(a3 + 56);
      *((_WORD *)v10 + 30) = *(_WORD *)(a3 + 60);
    }
    while ( a2 != (char *)v7 );
  }
  a1[1] = (size_t)a2;
}
