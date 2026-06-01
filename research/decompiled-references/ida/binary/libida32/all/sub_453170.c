unsigned __int64 __fastcall sub_453170(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r15
  size_t v6; // r14
  void *v7; // r12
  __int64 v8; // rdx
  char *v9; // rax
  size_t v10; // rbx
  __int64 v11; // r13
  void *v12; // rbp
  void *v13; // rax
  const char *v14; // rdx
  char *v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-78h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 i; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = *(int *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  v4 = switch_dbctx(v3);
  v5 = *(_QWORD *)(a1 + 64);
  ptr = nullptr;
  v24 = v4;
  v23 = a1 + 48;
  for ( i = 0; v23 != v5; v5 = std::_Rb_tree_increment() )
  {
    v10 = *(_QWORD *)(v5 + 56);
    v11 = *(_QWORD *)(v5 + 40);
    v12 = nullptr;
    if ( v10 )
    {
      v13 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 56), a2);
      a2 = *(const char **)(v5 + 48);
      v12 = v13;
      v7 = nullptr;
      memcpy(v13, a2, v10);
      v6 = *(_QWORD *)(v5 + 80);
      if ( v6 )
      {
LABEL_9:
        v7 = (void *)qalloc_or_throw(v6, a2);
        memcpy(v7, *(const void **)(v5 + 72), v6);
      }
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 80);
      v7 = nullptr;
      if ( v6 )
        goto LABEL_9;
    }
    v8 = i;
    a2 = (const char *)ptr;
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, i + 1, 56);
      v8 = i;
      a2 = (const char *)ptr;
    }
    v9 = (char *)&a2[56 * v8];
    *(_QWORD *)v9 = v11;
    *((_QWORD *)v9 + 1) = v12;
    *((__m128i *)v9 + 1) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    *((_QWORD *)v9 + 4) = v7;
    *(__m128i *)(v9 + 40) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    *(_QWORD *)&i = i + 1;
  }
  v14 = haystack;
  if ( *(_QWORD *)(a1 + 96) )
    v14 = *(const char **)(a1 + 88);
  sub_3AC420(*(_QWORD *)(v24 + 1480), (unsigned int **)&ptr, (__int64)v14);
  v15 = (char *)ptr;
  if ( ptr )
  {
    v16 = i;
    if ( (_QWORD)i )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = &v15[v17];
        v20 = *(void **)&v15[v17 + 32];
        if ( v20 )
        {
          *((_QWORD *)v19 + 5) = 0;
          qfree(v20);
        }
        v21 = *((void **)v19 + 1);
        if ( v21 )
        {
          *((_QWORD *)v19 + 2) = 0;
          qfree(v21);
        }
        ++v18;
        v15 = (char *)ptr;
        v17 += 56;
      }
      while ( v16 != v18 );
    }
    *(_QWORD *)&i = 0;
    qfree(v15);
  }
  return v28 - __readfsqword(0x28u);
}

