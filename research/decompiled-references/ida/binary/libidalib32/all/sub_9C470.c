void __fastcall sub_9C470(_QWORD *a1, int a2)
{
  void *v3; // r8
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  bool v7; // al
  __int64 i; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // r15
  __int64 v14; // r13
  __int64 j; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // [rsp+8h] [rbp-40h]

  v3 = (void *)a1[2];
  v17 = a1 + 1;
  if ( v3 )
  {
    v4 = a1 + 1;
    v5 = a1[2];
    while ( 1 )
    {
      while ( a2 > *(_DWORD *)(v5 + 32) )
      {
        v5 = *(_QWORD *)(v5 + 24);
        if ( !v5 )
          goto LABEL_7;
      }
      v6 = *(_QWORD *)(v5 + 16);
      if ( a2 >= *(_DWORD *)(v5 + 32) )
        break;
      v4 = (_QWORD *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v6 )
      {
LABEL_7:
        v7 = v17 == v4;
        goto LABEL_8;
      }
    }
    for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(i + 24);
        if ( a2 < *(_DWORD *)(i + 32) )
          break;
        i = *(_QWORD *)(i + 24);
        if ( !v9 )
          goto LABEL_16;
      }
      v4 = (_QWORD *)i;
    }
LABEL_16:
    while ( v6 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v6 + 24);
        if ( a2 <= *(_DWORD *)(v6 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v10 )
          goto LABEL_19;
      }
      v5 = v6;
      v6 = *(_QWORD *)(v6 + 16);
    }
LABEL_19:
    if ( a1[3] == v5 && v17 == v4 )
      goto LABEL_10;
    while ( (_QWORD *)v5 != v4 )
    {
      v5 = std::_Rb_tree_increment();
      v11 = std::_Rb_tree_rebalance_for_erase();
      v12 = *(_QWORD *)(v11 + 40);
      v13 = (_QWORD *)v11;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v11 + 48);
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = v12 + 32 * j;
            if ( *(int *)v16 >= -1 && *(_QWORD *)(v16 + 8) )
            {
              *(_QWORD *)(v16 + 16) = 0;
              qfree();
              v12 = v13[5];
            }
          }
        }
        v13[6] = 0;
        qfree();
      }
      operator delete(v13, 0x40u);
      --a1[5];
    }
  }
  else
  {
    v4 = a1 + 1;
    v7 = 1;
LABEL_8:
    if ( (_QWORD *)a1[3] == v4 && v7 )
    {
LABEL_10:
      sub_9C3C0(v3);
      a1[2] = 0;
      a1[5] = 0;
      a1[3] = v17;
      a1[4] = v17;
    }
  }
}

