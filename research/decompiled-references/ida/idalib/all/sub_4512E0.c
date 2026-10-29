__int64 __fastcall sub_4512E0(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rdi
  void *v11; // rbx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r13
  void *v16; // r15
  __int64 v17; // r14
  void *v18; // rdi
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // rbx

  if ( !*(_QWORD *)(a1 + 160) )
    return 0;
  v2 = a1 + 128;
  while ( 1 )
  {
    v3 = *(_QWORD **)(a1 + 136);
    if ( v3 )
    {
      v4 = v2;
      do
      {
        while ( 1 )
        {
          v5 = v3[2];
          v6 = v3[3];
          if ( *(_QWORD *)(a1 + 48) < v3[4] )
            break;
          v3 = (_QWORD *)v3[3];
          if ( !v6 )
            goto LABEL_8;
        }
        v4 = (__int64)v3;
        v3 = (_QWORD *)v3[2];
      }
      while ( v5 );
    }
    else
    {
      v4 = v2;
    }
LABEL_8:
    if ( *(_QWORD *)(a1 + 144) != v4 )
      v4 = std::_Rb_tree_decrement(v4);
    v7 = *(_QWORD *)(v4 + 32);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)a1 = v7;
    if ( !v8 )
      break;
    if ( (int)get_func_chunknum(v8, v7) >= 0 )
      goto LABEL_18;
LABEL_12:
    v9 = std::_Rb_tree_rebalance_for_erase(v4, v2);
    v10 = *(void **)(v9 + 40);
    v11 = (void *)v9;
    if ( v10 )
    {
      *(_QWORD *)(v9 + 48) = 0;
      qfree(v10);
    }
    operator delete(v11, 0x48u);
    if ( (*(_QWORD *)(a1 + 160))-- == 1 )
      return 0;
  }
  v14 = *(unsigned __int64 **)(a1 + 40);
  if ( v7 < *v14 || v7 >= v14[1] )
    goto LABEL_12;
LABEL_18:
  *(_QWORD *)(a1 + 56) = -1;
  v15 = *(_QWORD *)(v4 + 48);
  v16 = nullptr;
  v17 = *(_QWORD *)(a1 + 8);
  if ( v15 )
  {
    v16 = (void *)qalloc_or_throw(40 * v15);
    memcpy(v16, *(const void **)(v4 + 40), 40 * v15);
  }
  v18 = *(void **)v17;
  if ( *(_QWORD *)v17 )
  {
    *(_QWORD *)(v17 + 8) = 0;
    qfree(v18);
  }
  *(_QWORD *)v17 = v16;
  *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(v4 + 64);
  v19 = std::_Rb_tree_rebalance_for_erase(v4, v2);
  v20 = *(void **)(v19 + 40);
  v21 = (void *)v19;
  if ( v20 )
  {
    *(_QWORD *)(v19 + 48) = 0;
    qfree(v20);
  }
  operator delete(v21, 0x48u);
  --*(_QWORD *)(a1 + 160);
  return 18;
}
