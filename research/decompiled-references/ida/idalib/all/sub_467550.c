unsigned __int64 __fastcall sub_467550(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r15
  size_t v5; // r14
  void *v6; // r12
  __int64 v7; // rdx
  char *v8; // rsi
  char *v9; // rax
  size_t v10; // rbx
  __int64 v11; // r13
  void *v12; // rbp
  const char *v13; // rdx
  char *v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rbp
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 i; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v2 = *(int *)(a1 + 8);
  v27 = __readfsqword(0x28u);
  v3 = switch_dbctx(v2);
  v4 = *(_QWORD *)(a1 + 64);
  ptr = nullptr;
  v23 = v3;
  v22 = a1 + 48;
  for ( i = 0; v22 != v4; v4 = std::_Rb_tree_increment(v4, v8, v7, 7 * v7) )
  {
    v10 = *(_QWORD *)(v4 + 56);
    v11 = *(_QWORD *)(v4 + 40);
    v12 = nullptr;
    if ( v10 )
    {
      v12 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 56));
      v6 = nullptr;
      memcpy(v12, *(const void **)(v4 + 48), v10);
      v5 = *(_QWORD *)(v4 + 80);
      if ( v5 )
      {
LABEL_9:
        v6 = (void *)qalloc_or_throw(v5);
        memcpy(v6, *(const void **)(v4 + 72), v5);
      }
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 80);
      v6 = nullptr;
      if ( v5 )
        goto LABEL_9;
    }
    v7 = i;
    v8 = (char *)ptr;
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, i + 1, 56);
      v7 = i;
      v8 = (char *)ptr;
    }
    v9 = &v8[56 * v7];
    *(_QWORD *)v9 = v11;
    *((_QWORD *)v9 + 1) = v12;
    *((__m128i *)v9 + 1) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    *((_QWORD *)v9 + 4) = v6;
    *(__m128i *)(v9 + 40) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    *(_QWORD *)&i = i + 1;
  }
  v13 = haystack;
  if ( *(_QWORD *)(a1 + 96) )
    v13 = *(const char **)(a1 + 88);
  sub_3B0B60(*(_QWORD *)(v23 + 1672), (unsigned int **)&ptr, (__int64)v13);
  v14 = (char *)ptr;
  if ( ptr )
  {
    v15 = i;
    if ( (_QWORD)i )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = &v14[v16];
        v19 = *(void **)&v14[v16 + 32];
        if ( v19 )
        {
          *((_QWORD *)v18 + 5) = 0;
          qfree(v19);
        }
        v20 = *((void **)v18 + 1);
        if ( v20 )
        {
          *((_QWORD *)v18 + 2) = 0;
          qfree(v20);
        }
        ++v17;
        v14 = (char *)ptr;
        v16 += 56;
      }
      while ( v15 != v17 );
    }
    *(_QWORD *)&i = 0;
    qfree(v14);
  }
  return v27 - __readfsqword(0x28u);
}
