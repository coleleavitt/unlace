unsigned __int64 __fastcall sub_383B60(_QWORD *a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rdi
  const char *v4; // rdx
  __int64 v5; // rbx
  void *v6; // rdi
  const char *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _BOOL8 v20; // rdi
  _QWORD *v22; // [rsp+0h] [rbp-70h]
  void *v23; // [rsp+8h] [rbp-68h]
  __int64 *v24; // [rsp+18h] [rbp-58h] BYREF
  __int128 v25; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v25 = 0;
  v24 = nullptr;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v4 = &s1;
  if ( a1[8] )
    v4 = (const char *)a1[7];
  (*(void (__fastcall **)(__int64, __int64 **, const char *))(*(_QWORD *)bpt_kernel_interface + 48LL))(
    bpt_kernel_interface,
    &v24,
    v4);
  v5 = a1[19];
  while ( v5 )
  {
    sub_382200(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x30u);
  }
  v7 = (const char *)v25;
  v8 = v24;
  v9 = v25;
  v22 = a1 + 18;
  v10 = v24;
  a1[20] = a1 + 18;
  a1[21] = a1 + 18;
  v11 = 0;
  a1[19] = 0;
  a1[22] = 0;
  if ( 8 * v9 )
  {
    while ( 1 )
    {
      v12 = *v10;
      v13 = (__int64)(a1 + 18);
      v14 = *(_QWORD *)(*v10 + 32);
      if ( !v11 )
        goto LABEL_13;
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v11 + 16);
          v16 = *(_QWORD *)(v11 + 24);
          if ( (int)v14 > *(_DWORD *)(v11 + 32) )
            break;
          v13 = v11;
          v11 = *(_QWORD *)(v11 + 16);
          if ( !v15 )
            goto LABEL_11;
        }
        v11 = *(_QWORD *)(v11 + 24);
      }
      while ( v16 );
LABEL_11:
      if ( v22 == (_QWORD *)v13 || (int)v14 < *(_DWORD *)(v13 + 32) )
      {
LABEL_13:
        v17 = operator new(0x30u);
        *(_DWORD *)(v17 + 32) = v14;
        *(_QWORD *)(v17 + 40) = 0;
        v23 = (void *)v17;
        v18 = sub_381D70(a1 + 17, v13, v14);
        v13 = v18;
        if ( v19 )
        {
          v20 = v18 || v22 == (_QWORD *)v19 || (int)v14 < *(_DWORD *)(v19 + 32);
          std::_Rb_tree_insert_and_rebalance(v20, v23, v19, v22);
          v13 = (__int64)v23;
          v8 = v24;
          ++a1[22];
          v7 = (const char *)v25;
        }
        else
        {
          if ( v23 )
            operator delete(v23, 0x30u);
          v8 = v24;
          v7 = (const char *)v25;
        }
      }
      ++v10;
      *(_QWORD *)(v13 + 40) = v12;
      if ( v10 == &v8[(_QWORD)v7] )
        break;
      v11 = a1[19];
    }
  }
  if ( v8 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v8, v7);
  }
  return v26 - __readfsqword(0x28u);
}
