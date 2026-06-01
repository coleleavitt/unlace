_BOOL8 __fastcall sub_541480(__int64 a1, const char *a2)
{
  size_t v2; // rax
  double v3; // xmm0_8
  __int64 v4; // r12
  const __m128i *v5; // rbx
  __int64 v6; // r12
  const __m128i *v7; // r13
  __m128i *v8; // rbx
  volatile signed __int32 *v9; // rax
  void **v10; // r12
  const __m128i *v12; // rdi
  void **v13; // rbp
  volatile signed __int32 *v14; // rax
  bool v15; // [rsp+7h] [rbp-71h]
  __int64 v16; // [rsp+8h] [rbp-70h]
  void *ptr[11]; // [rsp+20h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  v3 = QT::QString::fromUtf8(ptr, v2, a2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4 || *(_DWORD *)v4 == 1 )
    v4 = 0;
  else
    _InterlockedAdd((volatile signed __int32 *)v4, 1u);
  sub_53DA20((void ***)(a1 + 40));
  v5 = (const __m128i *)sub_53E500(*(_QWORD *)(a1 + 40) + 8LL, (__int64)ptr);
  if ( v4 && !_InterlockedSub((volatile signed __int32 *)v4, 1u) )
  {
    sub_53BE30(*(void **)(v4 + 24));
    operator delete((void *)v4, 0x38u);
  }
  sub_53DA20((void ***)(a1 + 40));
  v6 = *(_QWORD *)(a1 + 40);
  v15 = v6 + 16 != (_QWORD)v5;
  if ( (const __m128i *)(v6 + 16) != v5 )
  {
    v16 = v5[3].m128i_i64[1];
    v7 = (const __m128i *)std::_Rb_tree_increment(v5);
    if ( *(_DWORD *)v6 == 1 )
    {
      if ( v5 == *(const __m128i **)(v6 + 32) && v7 == (const __m128i *)(v6 + 16) )
      {
        sub_53BE30(*(void **)(v6 + 24));
        *(_QWORD *)(v6 + 32) = v7;
        *(_QWORD *)(v6 + 24) = 0;
        *(_QWORD *)(v6 + 40) = v7;
        *(_QWORD *)(v6 + 48) = 0;
      }
      else
      {
        while ( v5 != v7 )
        {
          v12 = v5;
          v5 = (const __m128i *)std::_Rb_tree_increment(v5);
          v13 = (void **)std::_Rb_tree_rebalance_for_erase(v12, v6 + 16);
          v14 = (volatile signed __int32 *)v13[4];
          if ( v14 && !_InterlockedSub(v14, 1u) )
            free(v13[4]);
          operator delete(v13, 0x40u);
          --*(_QWORD *)(v6 + 48);
        }
      }
    }
    else
    {
      v8 = sub_541310(v6, v5, v7);
      v9 = *(volatile signed __int32 **)(a1 + 40);
      if ( v9 )
      {
        if ( !_InterlockedSub(v9, 1u) )
        {
          v10 = *(void ***)(a1 + 40);
          if ( v10 )
          {
            sub_53BE30(v10[3]);
            operator delete(v10, 0x38u);
          }
        }
      }
      *(_QWORD *)(a1 + 40) = v8;
      if ( v8 )
        _InterlockedAdd(v8->m128i_i32, 1u);
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v16 + 32LL))(v16, v3);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v15;
}
