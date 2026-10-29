__int64 __fastcall sub_436730(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r12d
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  void *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    v6 = (int)a2;
    a2 = *(const char **)v4;
    if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v15 = qvector_reserve(*(_QWORD *)(a1 + 16), a2, v5 + 1, 4);
      *(_QWORD *)v4 = v15;
      a2 = (const char *)v15;
      v5 = *(_QWORD *)(v4 + 8);
    }
    *(_DWORD *)&a2[4 * v5] = v6;
    ++*(_QWORD *)(v4 + 8);
  }
  v7 = *(__int64 **)(a1 + 24);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v9 = nullptr;
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw(4 * v8, a2);
      memcpy(v9, *(const void **)a3, 4 * v8);
    }
    v10 = v7[1];
    v11 = *v7;
    if ( v7[2] < (unsigned __int64)(v10 + 1) )
    {
      v14 = qvector_reserve(v7, v11, v10 + 1, 24);
      *v7 = v14;
      v10 = v7[1];
      v11 = v14;
    }
    v12 = v11 + 24 * v10;
    *(_QWORD *)v12 = v9;
    *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    ++v7[1];
  }
  return 0;
}

