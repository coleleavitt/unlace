void __fastcall sub_37A9D0(_QWORD *a1, int a2)
{
  _QWORD *v3; // r12
  _QWORD *v4; // r14
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // al
  __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  void *v13; // rax

  v3 = a1 + 1;
  v4 = a1 + 1;
  v5 = (_QWORD *)a1[2];
  if ( v5 )
  {
    v6 = a1[2];
    while ( 1 )
    {
      while ( a2 > *(_DWORD *)(v6 + 32) )
      {
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v6 )
          goto LABEL_7;
      }
      v7 = *(_QWORD *)(v6 + 16);
      if ( a2 >= *(_DWORD *)(v6 + 32) )
        break;
      v4 = (_QWORD *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v7 )
      {
LABEL_7:
        v8 = v3 == v4;
        goto LABEL_8;
      }
    }
    for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( a2 < *(_DWORD *)(i + 32) )
          break;
        i = *(_QWORD *)(i + 24);
        if ( !v10 )
          goto LABEL_16;
      }
      v4 = (_QWORD *)i;
    }
LABEL_16:
    while ( v7 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        if ( a2 <= *(_DWORD *)(v7 + 32) )
          break;
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v11 )
          goto LABEL_19;
      }
      v6 = v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
LABEL_19:
    if ( a1[3] != v6 )
      goto LABEL_23;
    if ( v4 != v3 )
    {
      while ( v4 != (_QWORD *)v6 )
      {
        v12 = v6;
        v6 = std::_Rb_tree_increment(v6);
        v13 = (void *)std::_Rb_tree_rebalance_for_erase(v12, v3);
        operator delete(v13, 0x28u);
        --a1[5];
LABEL_23:
        ;
      }
      return;
    }
LABEL_10:
    sub_37A730(v5);
    a1[2] = 0;
    a1[3] = v3;
    a1[4] = v3;
    a1[5] = 0;
    return;
  }
  v8 = 1;
LABEL_8:
  if ( (_QWORD *)a1[3] == v4 && v8 )
    goto LABEL_10;
}
