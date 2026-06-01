__int64 __fastcall sub_445930(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r13
  size_t v6; // rbp
  const char *v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  const char *v10; // rsi
  size_t v11; // r14
  __int64 v13; // r12
  size_t v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rax

  v4 = nullptr;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
  {
    v4 = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
    memcpy(v4, *(const void **)a4, v6);
    if ( v6 != 1 )
      strrpl(v4, 47, 2);
  }
  *(_QWORD *)a1 = 0;
  v7 = &s1;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a3 + 8) )
    v7 = *(const char **)a3;
  sub_169A50((__int64 *)a1, (__int64)"/%d@%s", *(_DWORD *)(a3 + 24), v7);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 2;
  if ( v8 )
    v9 = v8-- + 1;
  v10 = *(const char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v9 )
  {
    v16 = qvector_reserve(a1, v10, v9, 1);
    *(_QWORD *)a1 = v16;
    v10 = (const char *)v16;
  }
  *(_QWORD *)(a1 + 8) = v9;
  v10[v8] = 47;
  *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
  if ( v6 )
  {
    v11 = v6 - 1;
    if ( v6 != 1 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = v6 - 1;
      if ( v13 )
      {
        --v13;
        v14 = v11 + v13;
        v6 += v13;
      }
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v6 )
      {
        v18 = qvector_reserve(a1, v15, v6, 1);
        *(_QWORD *)a1 = v18;
        v15 = v18;
      }
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)(v15 + v14) = 0;
      v10 = (const char *)v4;
      memcpy((void *)(v13 + *(_QWORD *)a1), v4, v11);
    }
  }
  if ( v4 )
    qfree(v4, v10);
  return a1;
}
