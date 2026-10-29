void __fastcall sub_1193E0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  void *v7; // r15
  size_t v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  const void **v13; // [rsp+0h] [rbp-40h]

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
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24 * v6 + 8);
      if ( v8 )
      {
        v13 = (const void **)(*(_QWORD *)(a1 + 184) + 24 * v6);
        v7 = (void *)qalloc_or_throw();
        memcpy(v7, *v13, v8);
      }
      v9 = a2[1];
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
      {
        v12 = qvector_reserve();
        *a2 = v12;
        v9 = a2[1];
        v10 = v12;
      }
      ++v5;
      v11 = v10 + 24 * v9;
      *(_QWORD *)v11 = v7;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      ++a2[1];
    }
    while ( v5 < a3[1] );
  }
}

