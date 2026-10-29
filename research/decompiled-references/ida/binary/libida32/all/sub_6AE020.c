unsigned __int64 __fastcall sub_6AE020(__int64 a1, const char *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rbx
  const char *v5; // rsi
  const char *v6; // rax
  const char *v7; // rsi
  const char *v8; // rax
  __int64 v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rbx
  void *v12; // rdi
  size_t v13; // r13
  char *v14; // r12
  char *v15; // rax
  const void *v16; // rsi
  const char *v18; // [rsp+8h] [rbp-60h]
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  size_t v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = (_QWORD *)(a1 + 64);
  if ( a2 != (const char *)(a1 + 64) )
  {
    v4 = a2;
    do
    {
      v20 = 0;
      v13 = v4[8];
      v14 = nullptr;
      if ( v13 )
      {
        v15 = (char *)qalloc_or_throw(v4[8], a2);
        v16 = (const void *)v4[7];
        v20 = v13;
        v14 = v15;
        memcpy(v15, v16, v13);
      }
      v5 = haystack;
      if ( v4[5] )
        v5 = (const char *)v4[4];
      v6 = sub_6A9430(a1, v5, 1);
      v7 = haystack;
      v18 = v6;
      if ( v13 )
        v7 = v14;
      v8 = sub_6A9430(a1, v7, 0);
      sub_69E970(*(__int64 **)a1, v8, v18, 0xFFFFFFFF);
      v9 = std::_Rb_tree_rebalance_for_erase();
      v10 = *(void **)(v9 + 56);
      v11 = (_QWORD *)v9;
      if ( v10 )
      {
        *(_QWORD *)(v9 + 64) = 0;
        qfree(v10);
      }
      v12 = (void *)v11[4];
      if ( v12 )
      {
        v11[5] = 0;
        qfree(v12);
      }
      operator delete(v11, 0x50u);
      --*(_QWORD *)(a1 + 96);
      a2 = (const char *)v19;
      v19[0] = v14;
      v19[1] = v13;
      v4 = sub_6ADF10(a1 + 56, (__int64)v19);
      if ( v14 )
        qfree(v14);
    }
    while ( v4 != v2 );
  }
  return v21 - __readfsqword(0x28u);
}

