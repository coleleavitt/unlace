void __fastcall sub_31A2A0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  void *v7; // r15
  __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  const void **v14; // [rsp+0h] [rbp-40h]

  if ( a3[1] )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*a3 + 8 * v5);
        if ( v6 < *(_QWORD *)(a1 + 192) )
          break;
        if ( ++v5 >= a3[1] )
          return;
      }
      v7 = nullptr;
      v8 = *(_QWORD *)(a1 + 184) + 24 * v6;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v14 = (const void **)(*(_QWORD *)(a1 + 184) + 24 * v6);
        v7 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
        memcpy(v7, *v14, v9);
      }
      v10 = a2[1];
      v11 = *a2;
      if ( a2[2] < (unsigned __int64)(v10 + 1) )
      {
        v13 = qvector_reserve(a2, v11, v10 + 1, 24);
        *a2 = v13;
        v10 = a2[1];
        v11 = v13;
      }
      ++v5;
      v12 = v11 + 24 * v10;
      *(_QWORD *)v12 = v7;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      ++a2[1];
    }
    while ( v5 < a3[1] );
  }
}
