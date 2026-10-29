void __fastcall sub_356720(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r13
  __int64 v4; // rdi
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  void *v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  void *v20; // rax

  v3 = *(_QWORD **)(a1 + 1600);
  if ( v3[5] )
  {
    v4 = v3[2];
    if ( a2 == -1 )
    {
      sub_356280((_QWORD *)v4);
      v3[2] = 0;
      v3[3] = v3 + 1;
      v3[4] = v3 + 1;
      v3[5] = 0;
      return;
    }
    v7 = v3 + 1;
    if ( a3 == -1 )
    {
      v15 = (_QWORD *)v3[3];
      if ( v4 )
      {
        v16 = (__int64)(v3 + 1);
        v17 = v3[2];
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v17 + 16);
            v19 = *(_QWORD *)(v17 + 24);
            if ( *(_DWORD *)(v17 + 32) >= a2 )
              break;
            v17 = *(_QWORD *)(v17 + 24);
            if ( !v19 )
              goto LABEL_21;
          }
          v16 = v17;
          v17 = *(_QWORD *)(v17 + 16);
        }
        while ( v18 );
LABEL_21:
        if ( v15 != (_QWORD *)v16 )
        {
          while ( v7 != (_QWORD *)v16 )
          {
            v16 = std::_Rb_tree_increment();
            v20 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v20, 0x30u);
            --v3[5];
          }
          return;
        }
      }
      else if ( v15 != v7 )
      {
        return;
      }
      sub_356280((_QWORD *)v4);
      v3[2] = 0;
      v3[3] = v7;
      v3[4] = v7;
      v3[5] = 0;
      return;
    }
    if ( v4 )
    {
      v8 = (__int64)(v3 + 1);
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v4 + 16);
          v10 = *(_QWORD *)(v4 + 24);
          if ( *(_DWORD *)(v4 + 32) >= a2 )
            break;
          v4 = *(_QWORD *)(v4 + 24);
          if ( !v10 )
            goto LABEL_9;
        }
        v8 = v4;
        v4 = *(_QWORD *)(v4 + 16);
      }
      while ( v9 );
LABEL_9:
      while ( v7 != (_QWORD *)v8 )
      {
        v11 = *(_DWORD *)(v8 + 32);
        if ( v11 - *(_DWORD *)(v8 + 40) >= a3 )
          break;
        if ( a3 >= v11 || (v12 = v11 - a3, (unsigned int)v12 <= 0x1000) )
        {
          v13 = std::_Rb_tree_increment();
          v14 = (void *)std::_Rb_tree_rebalance_for_erase();
          v8 = v13;
          operator delete(v14, 0x30u);
          --v3[5];
          continue;
        }
        *(_QWORD *)(v8 + 40) = v12;
        v8 = std::_Rb_tree_increment();
      }
    }
  }
}

