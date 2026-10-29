void __fastcall sub_8EDAB0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  size_t v5; // r15
  size_t v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rbx
  size_t v9; // r15
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 96);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      v8 = *a1 + 96 * v4;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      v9 = *(_QWORD *)(a3 + 8);
      if ( v9 )
      {
        v10 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
        *(_QWORD *)(v8 + 16) = v9;
        *(_QWORD *)v8 = v10;
        memcpy(v10, *(const void **)a3, v9);
        *(_QWORD *)(v8 + 8) = v9;
      }
      *(_QWORD *)(v8 + 24) = 0;
      *(_OWORD *)(v8 + 32) = 0;
      v5 = *(_QWORD *)(a3 + 32);
      if ( v5 )
      {
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32));
        *(_QWORD *)(v8 + 24) = v12;
        *(_QWORD *)(v8 + 40) = v5;
        memcpy(v12, *(const void **)(a3 + 24), v5);
        *(_QWORD *)(v8 + 32) = v5;
      }
      *(_QWORD *)(v8 + 48) = 0;
      *(_OWORD *)(v8 + 56) = 0;
      v6 = *(_QWORD *)(a3 + 56);
      if ( v6 )
      {
        v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 56));
        *(_QWORD *)(v8 + 48) = v11;
        *(_QWORD *)(v8 + 64) = v6;
        memcpy(v11, *(const void **)(a3 + 48), v6);
        *(_QWORD *)(v8 + 56) = v6;
      }
      v7 = _mm_loadu_si128((const __m128i *)(a3 + 72));
      ++v4;
      *(_WORD *)(v8 + 88) = *(_WORD *)(a3 + 88);
      *(__m128i *)(v8 + 72) = v7;
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
