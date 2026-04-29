__int64 __fastcall sub_387360(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  int v5; // r13d
  __int64 i; // rbx
  int v7; // edx
  __int64 v8; // rax
  int *v9; // rdi
  unsigned int j; // ebx
  int v11; // eax
  void *v12; // rdi
  __int64 *v14; // [rsp+8h] [rbp-80h]
  int v15; // [rsp+18h] [rbp-70h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h]
  int *v17; // [rsp+28h] [rbp-60h]
  int *v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    return 0;
  v2 = *(__int64 **)(a1 + 40);
  v15 = 0;
  v16 = 0;
  v17 = &v15;
  v18 = &v15;
  v19 = 0;
  v14 = &v2[v1];
  if ( v2 == v14 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *v2;
    v5 = *(_DWORD *)(*v2 + 4);
    if ( v3 )
    {
      for ( i = v3; ; i = v8 )
      {
        v7 = *(_DWORD *)(i + 32);
        v8 = *(_QWORD *)(i + 24);
        if ( v5 < v7 )
          v8 = *(_QWORD *)(i + 16);
        if ( !v8 )
          break;
      }
      if ( v5 >= v7 )
        goto LABEL_11;
      if ( v17 != (int *)i )
        goto LABEL_22;
    }
    else if ( v17 != &v15 )
    {
LABEL_22:
      v7 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_11:
      if ( v5 <= v7 )
        goto LABEL_13;
    }
    *(_DWORD *)(operator new(0x28u) + 32) = *(_DWORD *)(v4 + 4);
    std::_Rb_tree_insert_and_rebalance();
    ++v19;
    v3 = v16;
LABEL_13:
    ++v2;
  }
  while ( v14 != v2 );
  v9 = v17;
  for ( j = 0; v9 != &v15; v9 = (int *)std::_Rb_tree_increment() )
  {
    v11 = v9[8];
    if ( v11 > (int)j )
      break;
    j = v11 + 1;
  }
  while ( v3 )
  {
    sub_387190(*(_QWORD **)(v3 + 24));
    v12 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v12, 0x28u);
  }
  return j;
}
