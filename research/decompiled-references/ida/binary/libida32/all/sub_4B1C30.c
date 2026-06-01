bool __fastcall sub_4B1C30(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  size_t v6; // r13
  void *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v13; // rax

  v2 = *a1;
  if ( !(24 * a1[1]) )
    return 0;
  do
  {
    if ( (unsigned __int8)sub_4B17B0(0, v2) )
    {
      v6 = *(_QWORD *)(v2 + 8);
      v7 = nullptr;
      if ( v6 )
      {
        v7 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 8), (const char *)v2);
        memcpy(v7, *(const void **)v2, v6);
      }
      v8 = a2[1];
      v9 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v13 = qvector_reserve(a2, v9, v8 + 1, 24);
        *a2 = v13;
        v8 = a2[1];
        v9 = v13;
      }
      v10 = v9 + 24 * v8;
      *(_QWORD *)v10 = v7;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
      ++a2[1];
      v11 = *(void **)v2;
      if ( *(_QWORD *)v2 )
      {
        *(_QWORD *)(v2 + 8) = 0;
        qfree(v11);
      }
      memmove((void *)v2, (const void *)(v2 + 24), *a1 + 24 * a1[1] - v2 - 24);
      v5 = a1[1] - 1;
      a1[1] = v5;
    }
    else
    {
      v5 = a1[1];
      v2 += 24;
    }
  }
  while ( v2 != *a1 + 24 * v5 );
  return a2[1] != 0;
}

