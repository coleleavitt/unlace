void __fastcall sub_5C3D50(size_t *a1, const char *a2, __int64 a3)
{
  const char *v3; // r14
  unsigned __int64 v6; // rbx
  const char *v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // r15
  char *v10; // rbx
  __int64 v11; // r15
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  char *v15; // r12
  char *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __m128i v22; // xmm0
  void *v23; // rdi
  void *v24; // rdi
  size_t n; // [rsp+0h] [rbp-48h]

  v3 = a2;
  v6 = a1[2];
  if ( v6 < (unsigned __int64)a2 )
  {
    v14 = qvector_reserve(a1, 0, a2, 64);
    a2 = (const char *)a1[2];
    v15 = (char *)a1[1];
    a1[2] = v6;
    n = v14;
    v16 = (char *)*a1;
    v17 = (__int64)(v15 - 1);
    if ( v17 >= 0 )
    {
      v18 = v14;
      do
      {
        *(_DWORD *)v18 = *(_DWORD *)v16;
        v19 = *((_QWORD *)v16 + 1);
        v20 = _mm_loadu_si128((const __m128i *)v16 + 1);
        *((_QWORD *)v16 + 1) = 0;
        *(_QWORD *)(v18 + 8) = v19;
        *(__m128i *)(v18 + 16) = v20;
        v21 = *((_QWORD *)v16 + 4);
        v22 = _mm_loadu_si128((const __m128i *)(v16 + 40));
        *((_OWORD *)v16 + 1) = 0;
        *(_QWORD *)(v18 + 32) = v21;
        *(__m128i *)(v18 + 40) = v22;
        LODWORD(v21) = *((_DWORD *)v16 + 14);
        *((_QWORD *)v16 + 4) = 0;
        *((_QWORD *)v16 + 6) = 0;
        *(_DWORD *)(v18 + 56) = v21;
        *(_BYTE *)(v18 + 60) = v16[60];
        *(_BYTE *)(v18 + 61) = v16[61];
        v23 = *((void **)v16 + 4);
        if ( v23 )
        {
          *((_QWORD *)v16 + 5) = 0;
          qfree(v23);
        }
        v24 = *((void **)v16 + 1);
        if ( v24 )
        {
          *((_QWORD *)v16 + 2) = 0;
          qfree(v24);
        }
        v16 += 64;
        v18 += 64;
      }
      while ( v17-- != 0 );
      v16 = (char *)*a1;
    }
    qfree(v16);
    *a1 = n;
    a1[2] = (size_t)a2;
  }
  v7 = (const char *)a1[1];
  if ( v7 < v3 )
  {
    v8 = 0;
    do
    {
      v10 = (char *)(*a1 + ((_QWORD)v7 << 6));
      *(_DWORD *)v10 = *(_DWORD *)a3;
      *((_QWORD *)v10 + 1) = 0;
      *((_OWORD *)v10 + 1) = v8;
      v11 = *(_QWORD *)(a3 + 16);
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(4 * v11, a2);
        *((_QWORD *)v10 + 3) = v11;
        *((_QWORD *)v10 + 1) = v12;
        a2 = *(const char **)(a3 + 8);
        memcpy(v12, a2, 4 * v11);
        *((_QWORD *)v10 + 2) = v11;
        v8 = 0;
      }
      *((_QWORD *)v10 + 4) = 0;
      *(_OWORD *)(v10 + 40) = v8;
      v9 = *(_QWORD *)(a3 + 40);
      if ( v9 )
      {
        v13 = (void *)qalloc_or_throw(4 * v9, a2);
        *((_QWORD *)v10 + 4) = v13;
        *((_QWORD *)v10 + 6) = v9;
        a2 = *(const char **)(a3 + 32);
        memcpy(v13, a2, 4 * v9);
        *((_QWORD *)v10 + 5) = v9;
        v8 = 0;
      }
      ++v7;
      *((_DWORD *)v10 + 14) = *(_DWORD *)(a3 + 56);
      *((_WORD *)v10 + 30) = *(_WORD *)(a3 + 60);
    }
    while ( v3 != v7 );
  }
  a1[1] = (size_t)v3;
}

