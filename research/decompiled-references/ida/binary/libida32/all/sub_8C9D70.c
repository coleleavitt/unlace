void __fastcall sub_8C9D70(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r14
  const char *v5; // r12
  size_t v6; // r15
  size_t v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // rbx
  size_t v10; // r15
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 96);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    do
    {
      v9 = (__int64)&(*a1)[96 * (_QWORD)v5];
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      v10 = *(_QWORD *)(a3 + 8);
      if ( v10 )
      {
        v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2);
        *(_QWORD *)(v9 + 16) = v10;
        *(_QWORD *)v9 = v11;
        a2 = *(const char **)a3;
        memcpy(v11, *(const void **)a3, v10);
        *(_QWORD *)(v9 + 8) = v10;
      }
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 32) = 0;
      v6 = *(_QWORD *)(a3 + 32);
      if ( v6 )
      {
        v13 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32), a2);
        *(_QWORD *)(v9 + 24) = v13;
        *(_QWORD *)(v9 + 40) = v6;
        a2 = *(const char **)(a3 + 24);
        memcpy(v13, a2, v6);
        *(_QWORD *)(v9 + 32) = v6;
      }
      *(_QWORD *)(v9 + 48) = 0;
      *(_OWORD *)(v9 + 56) = 0;
      v7 = *(_QWORD *)(a3 + 56);
      if ( v7 )
      {
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 56), a2);
        *(_QWORD *)(v9 + 48) = v12;
        *(_QWORD *)(v9 + 64) = v7;
        a2 = *(const char **)(a3 + 48);
        memcpy(v12, a2, v7);
        *(_QWORD *)(v9 + 56) = v7;
      }
      v8 = _mm_loadu_si128((const __m128i *)(a3 + 72));
      ++v5;
      *(_WORD *)(v9 + 88) = *(_WORD *)(a3 + 88);
      *(__m128i *)(v9 + 72) = v8;
    }
    while ( v3 != v5 );
  }
  a1[1] = v3;
}

