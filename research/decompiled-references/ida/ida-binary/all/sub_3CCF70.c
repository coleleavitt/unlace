__int64 __fastcall sub_3CCF70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rbp
  size_t v6; // r15
  size_t v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned int v12; // eax
  size_t v13; // r15
  int v14; // eax
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  bool v21; // [rsp+7h] [rbp-41h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v3 = a1 + 8;
  result = a2 + 96 * a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  v22 = result;
  if ( result != a2 )
  {
    v5 = a2;
    do
    {
      v8 = *(_DWORD *)v5;
      result = sub_3C44C0((_QWORD *)a1, v3, *(_DWORD *)v5);
      v10 = v9;
      if ( v9 )
      {
        v21 = v3 == v9 || result != 0;
        if ( !v21 )
          v21 = v8 < *(_DWORD *)(v9 + 32);
        v11 = operator new(0x80u);
        v12 = *(_DWORD *)v5;
        v13 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v11 + 48) = 0;
        *(_DWORD *)(v11 + 32) = v12;
        v14 = *(_DWORD *)(v5 + 8);
        *(_OWORD *)(v11 + 56) = 0;
        *(_DWORD *)(v11 + 40) = v14;
        if ( v13 )
        {
          v15 = (void *)qalloc_or_throw(v13);
          *(_QWORD *)(v11 + 48) = v15;
          v16 = *(const void **)(v5 + 16);
          *(_QWORD *)(v11 + 64) = v13;
          memcpy(v15, v16, v13);
          *(_QWORD *)(v11 + 56) = v13;
        }
        v6 = *(_QWORD *)(v5 + 48);
        *(_QWORD *)(v11 + 72) = 0;
        *(_OWORD *)(v11 + 80) = 0;
        if ( v6 )
        {
          v19 = (void *)qalloc_or_throw(v6);
          *(_QWORD *)(v11 + 72) = v19;
          v20 = *(const void **)(v5 + 40);
          *(_QWORD *)(v11 + 88) = v6;
          memcpy(v19, v20, v6);
          *(_QWORD *)(v11 + 80) = v6;
        }
        v7 = *(_QWORD *)(v5 + 72);
        *(_QWORD *)(v11 + 96) = 0;
        *(_OWORD *)(v11 + 104) = 0;
        if ( v7 )
        {
          v17 = (void *)qalloc_or_throw(v7);
          *(_QWORD *)(v11 + 96) = v17;
          v18 = *(const void **)(v5 + 64);
          *(_QWORD *)(v11 + 112) = v7;
          memcpy(v17, v18, v7);
          *(_QWORD *)(v11 + 104) = v7;
        }
        *(_WORD *)(v11 + 120) = *(_WORD *)(v5 + 88);
        result = std::_Rb_tree_insert_and_rebalance(v21, v11, v10, v3);
        ++*(_QWORD *)(a1 + 40);
      }
      v5 += 96;
    }
    while ( v22 != v5 );
  }
  return result;
}
