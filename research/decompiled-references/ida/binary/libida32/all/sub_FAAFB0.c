__int64 __fastcall sub_FAAFB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rbx
  int *v9; // r8
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v15; // rdx
  const void *v16; // rsi
  int v17; // eax
  void *v18; // rdi
  void *v19; // rdi
  size_t v20; // rdx
  int *v21; // [rsp+8h] [rbp-40h]
  int *v22; // [rsp+8h] [rbp-40h]

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
    v15 = *(_QWORD *)(a3 + 24);
    v16 = (const void *)(a3 + 40);
    if ( v15 == a3 + 40 )
    {
      v19 = v10;
      v20 = 16LL * v7;
      if ( v7 <= 4uLL
        || (v22 = v9,
            sub_22134E0(v8 + 56, v10, v7, 16),
            v19 = *(void **)(v8 + 56),
            v16 = *(const void **)(a3 + 24),
            v9 = v22,
            (v20 = 16LL * *(unsigned int *)(a3 + 32)) != 0) )
      {
        v21 = v9;
        memcpy(v19, v16, v20);
        v9 = v21;
      }
      *(_DWORD *)(v8 + 64) = v7;
      *(_DWORD *)(a3 + 32) = 0;
    }
    else
    {
      v17 = *(_DWORD *)(a3 + 36);
      *(_QWORD *)(v8 + 56) = v15;
      *(_DWORD *)(v8 + 64) = v7;
      *(_DWORD *)(v8 + 68) = v17;
      *(_QWORD *)(a3 + 24) = v16;
      *(_QWORD *)(a3 + 32) = 0;
    }
  }
  v12 = sub_FAAD00(a1, a2, v9);
  if ( v13 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v8;
  }
  else
  {
    v18 = *(void **)(v8 + 56);
    if ( v10 != v18 )
      free(v18);
    operator delete((void *)v8);
    return v12;
  }
}

