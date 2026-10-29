__int64 __fastcall sub_FCECF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rbx
  int *v9; // r8
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  _QWORD *v15; // rcx
  _BOOL8 v16; // rdi
  __int64 v18; // rdx
  const void *v19; // rsi
  int v20; // eax
  void *v21; // rdi
  void *v22; // rdi
  size_t v23; // rdx
  int *v24; // [rsp+8h] [rbp-40h]
  int *v25; // [rsp+8h] [rbp-40h]

  v6 = operator new(0x88u);
  v7 = *(_DWORD *)(a3 + 32);
  v8 = v6;
  v9 = (int *)(v6 + 32);
  v10 = (void *)(v6 + 72);
  *(_DWORD *)(v6 + 32) = *(_DWORD *)a3;
  v11 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 56) = v8 + 72;
  *(_QWORD *)(v8 + 40) = v11;
  *(_DWORD *)(v8 + 48) = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(v8 + 52) = *(_BYTE *)(a3 + 20);
  *(_QWORD *)(v8 + 64) = 0x400000000LL;
  if ( v7 && v8 + 56 != a3 + 24 )
  {
    v18 = *(_QWORD *)(a3 + 24);
    v19 = (const void *)(a3 + 40);
    if ( v18 == a3 + 40 )
    {
      v22 = v10;
      v23 = 16LL * v7;
      if ( v7 <= 4uLL
        || (v25 = v9,
            sub_2237220(v8 + 56, v10, v7, 16),
            v22 = *(void **)(v8 + 56),
            v19 = *(const void **)(a3 + 24),
            v9 = v25,
            (v23 = 16LL * *(unsigned int *)(a3 + 32)) != 0) )
      {
        v24 = v9;
        memcpy(v22, v19, v23);
        v9 = v24;
      }
      *(_DWORD *)(v8 + 64) = v7;
      *(_DWORD *)(a3 + 32) = 0;
    }
    else
    {
      v20 = *(_DWORD *)(a3 + 36);
      *(_QWORD *)(v8 + 56) = v18;
      *(_DWORD *)(v8 + 64) = v7;
      *(_DWORD *)(v8 + 68) = v20;
      *(_QWORD *)(a3 + 24) = v19;
      *(_QWORD *)(a3 + 32) = 0;
    }
  }
  v12 = sub_FCEA40(a1, a2, v9);
  v14 = v12;
  if ( v13 )
  {
    v15 = a1 + 1;
    v16 = 1;
    if ( !v12 && (_QWORD *)v13 != v15 )
      v16 = *(_DWORD *)(v8 + 32) < *(_DWORD *)(v13 + 32);
    std::_Rb_tree_insert_and_rebalance(v16, v8, v13, v15);
    ++a1[5];
    return v8;
  }
  else
  {
    v21 = *(void **)(v8 + 56);
    if ( v10 != v21 )
      free(v21);
    operator delete((void *)v8);
    return v14;
  }
}
