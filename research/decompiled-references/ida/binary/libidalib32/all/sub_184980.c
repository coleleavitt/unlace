__int64 __fastcall sub_184980(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  int *v3; // rbx
  int v4; // r13d
  int v5; // r12d
  int v6; // edx
  int *v7; // rax
  unsigned int v8; // ebp
  int *v9; // rdi
  int v11; // [rsp+8h] [rbp-70h] BYREF
  void *v12; // [rsp+10h] [rbp-68h]
  int *v13; // [rsp+18h] [rbp-60h]
  int *v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 208) == 0;
  v11 = 0;
  v12 = nullptr;
  v13 = &v11;
  v14 = &v11;
  v15 = 0;
  if ( v2 )
    return 1;
  v3 = nullptr;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 200) + 72 * v1 + 56);
      if ( v5 )
        break;
      v1 = ++v4;
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 208) )
        goto LABEL_18;
    }
    if ( !v3 )
    {
      if ( v13 == &v11 )
        goto LABEL_17;
      goto LABEL_20;
    }
    while ( 1 )
    {
      v6 = v3[8];
      v7 = *((int **)v3 + 3);
      if ( v5 < v6 )
        v7 = *((int **)v3 + 2);
      if ( !v7 )
        break;
      v3 = v7;
    }
    if ( v5 < v6 )
    {
      if ( v13 == v3 )
        goto LABEL_17;
LABEL_20:
      v6 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v5 <= v6 )
    {
      sub_92120((__int64)"Duplicate field id %d", v5);
      v3 = (int *)v12;
      v8 = 0;
      goto LABEL_14;
    }
LABEL_17:
    *(_DWORD *)(operator new(0x28u) + 32) = v5;
    ++v4;
    std::_Rb_tree_insert_and_rebalance();
    ++v15;
    v3 = (int *)v12;
    v1 = v4;
  }
  while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 208) );
LABEL_18:
  v8 = 1;
LABEL_14:
  while ( v3 )
  {
    sub_183DF0(*((_QWORD **)v3 + 3));
    v9 = v3;
    v3 = *((int **)v3 + 2);
    operator delete(v9, 0x28u);
  }
  return v8;
}

