__int64 __fastcall sub_387360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // r13d
  int *i; // rbx
  int *v11; // rax
  bool v12; // r14
  int *v13; // rdi
  unsigned int j; // ebx
  int v15; // eax
  void *v16; // rdi
  __int64 *v18; // [rsp+8h] [rbp-80h]
  int v19; // [rsp+18h] [rbp-70h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h]
  int *v21; // [rsp+28h] [rbp-60h]
  int *v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 48);
  if ( !v5 )
    return 0;
  v6 = *(__int64 **)(a1 + 40);
  v19 = 0;
  v20 = 0;
  v21 = &v19;
  v22 = &v19;
  v23 = 0;
  v18 = &v6[v5];
  if ( v6 == v18 )
    return 0;
  v7 = 0;
  do
  {
    v8 = *v6;
    v9 = *(_DWORD *)(*v6 + 4);
    if ( v7 )
    {
      for ( i = (int *)v7; ; i = v11 )
      {
        a3 = (unsigned int)i[8];
        v11 = *((int **)i + 3);
        if ( v9 < (int)a3 )
          v11 = *((int **)i + 2);
        LOBYTE(a4) = v9 < (int)a3;
        if ( !v11 )
          break;
      }
      if ( v9 < (int)a3 )
      {
        if ( v21 == i )
        {
LABEL_12:
          v12 = 1;
          if ( i != &v19 )
            v12 = v9 < i[8];
          goto LABEL_14;
        }
LABEL_24:
        LODWORD(a3) = *(_DWORD *)(std::_Rb_tree_decrement(i, a2, a3, a4, a5) + 32);
      }
      if ( v9 <= (int)a3 )
        goto LABEL_15;
      goto LABEL_12;
    }
    i = &v19;
    if ( v21 != &v19 )
      goto LABEL_24;
    v12 = 1;
LABEL_14:
    a2 = operator new(0x28u);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(v8 + 4);
    std::_Rb_tree_insert_and_rebalance(v12, a2, i, &v19);
    ++v23;
    v7 = v20;
LABEL_15:
    ++v6;
  }
  while ( v18 != v6 );
  v13 = v21;
  for ( j = 0; v13 != &v19; v13 = (int *)std::_Rb_tree_increment(v13) )
  {
    v15 = v13[8];
    if ( v15 > (int)j )
      break;
    j = v15 + 1;
  }
  while ( v7 )
  {
    sub_387190(*(_QWORD **)(v7 + 24));
    v16 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v16, 0x28u);
  }
  return j;
}
