__int64 __fastcall sub_44A440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  void *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = *(__int64 **)(a1 + 16);
  if ( v4 )
  {
    v5 = v4[1];
    v7 = *v4;
    if ( v4[2] < (unsigned __int64)(v5 + 1) )
    {
      v16 = qvector_reserve(*(_QWORD *)(a1 + 16), v7, v5 + 1, 8);
      *v4 = v16;
      v7 = v16;
      v5 = v4[1];
    }
    *(_QWORD *)(v7 + 8 * v5) = a2;
    ++v4[1];
  }
  v8 = *(__int64 **)(a1 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    v10 = nullptr;
    if ( v9 )
    {
      v10 = (void *)qalloc_or_throw(8 * v9);
      memcpy(v10, *(const void **)a3, 8 * v9);
    }
    v11 = v8[1];
    v12 = *v8;
    if ( v8[2] < (unsigned __int64)(v11 + 1) )
    {
      v15 = qvector_reserve(v8, v12, v11 + 1, 24);
      *v8 = v15;
      v11 = v8[1];
      v12 = v15;
    }
    v13 = v12 + 24 * v11;
    *(_QWORD *)v13 = v10;
    *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    ++v8[1];
  }
  return 0;
}
