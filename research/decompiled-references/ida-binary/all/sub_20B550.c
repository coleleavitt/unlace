void __fastcall sub_20B550(_QWORD *a1, const char *a2)
{
  void *v3; // r8
  const char *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  bool v7; // al
  __int64 i; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r15
  __int64 v15; // r13
  __int64 j; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // [rsp+8h] [rbp-40h]

  v3 = (void *)a1[2];
  v19 = (const char *)(a1 + 1);
  if ( v3 )
  {
    v4 = (const char *)(a1 + 1);
    v5 = a1[2];
    while ( 1 )
    {
      while ( (int)a2 > *(_DWORD *)(v5 + 32) )
      {
        v5 = *(_QWORD *)(v5 + 24);
        if ( !v5 )
          goto LABEL_7;
      }
      v6 = *(_QWORD *)(v5 + 16);
      if ( (int)a2 >= *(_DWORD *)(v5 + 32) )
        break;
      v4 = (const char *)v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v6 )
      {
LABEL_7:
        v7 = v19 == v4;
        goto LABEL_8;
      }
    }
    for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(i + 24);
        if ( (int)a2 < *(_DWORD *)(i + 32) )
          break;
        i = *(_QWORD *)(i + 24);
        if ( !v9 )
          goto LABEL_16;
      }
      v4 = (const char *)i;
    }
LABEL_16:
    while ( v6 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v6 + 24);
        if ( (int)a2 <= *(_DWORD *)(v6 + 32) )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v10 )
          goto LABEL_19;
      }
      v5 = v6;
      v6 = *(_QWORD *)(v6 + 16);
    }
LABEL_19:
    if ( a1[3] == v5 && v19 == v4 )
      goto LABEL_10;
    while ( (const char *)v5 != v4 )
    {
      v11 = v5;
      v5 = std::_Rb_tree_increment(v5);
      v12 = std::_Rb_tree_rebalance_for_erase(v11, v19);
      v13 = *(_QWORD *)(v12 + 40);
      v14 = (_QWORD *)v12;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v12 + 48);
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = v13 + 32 * j;
            if ( *(int *)v17 >= -1 )
            {
              v18 = *(_QWORD *)(v17 + 8);
              if ( v18 )
              {
                *(_QWORD *)(v17 + 16) = 0;
                qfree(v18, v19);
                v13 = v14[5];
              }
            }
          }
        }
        v14[6] = 0;
        qfree(v13, v19);
      }
      operator delete(v14, 0x40u);
      --a1[5];
    }
  }
  else
  {
    v4 = (const char *)(a1 + 1);
    v7 = 1;
LABEL_8:
    if ( (const char *)a1[3] == v4 && v7 )
    {
LABEL_10:
      sub_20B4A0(v3, a2);
      a1[2] = 0;
      a1[5] = 0;
      a1[3] = v19;
      a1[4] = v19;
    }
  }
}
