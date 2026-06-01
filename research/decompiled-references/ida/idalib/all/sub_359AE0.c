void __fastcall sub_359AE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  void *v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rax

  v3 = *(_QWORD **)(a1 + 1792);
  if ( v3[5] )
  {
    v4 = (_QWORD *)v3[2];
    v5 = a2;
    if ( a2 == -1 )
    {
      sub_359640(v4);
      v3[2] = 0;
      v3[3] = v3 + 1;
      v3[4] = v3 + 1;
      v3[5] = 0;
      return;
    }
    v7 = v3 + 1;
    if ( a3 == -1 )
    {
      v16 = (_QWORD *)v3[3];
      if ( v4 )
      {
        v17 = (__int64)(v3 + 1);
        v18 = (_QWORD *)v3[2];
        do
        {
          while ( 1 )
          {
            v19 = v18[2];
            v20 = v18[3];
            if ( v18[4] >= v5 )
              break;
            v18 = (_QWORD *)v18[3];
            if ( !v20 )
              goto LABEL_21;
          }
          v17 = (__int64)v18;
          v18 = (_QWORD *)v18[2];
        }
        while ( v19 );
LABEL_21:
        if ( v16 != (_QWORD *)v17 )
        {
          while ( v7 != (_QWORD *)v17 )
          {
            v21 = v17;
            v17 = std::_Rb_tree_increment(v17);
            v22 = (void *)std::_Rb_tree_rebalance_for_erase(v21, v3 + 1);
            operator delete(v22, 0x30u);
            --v3[5];
          }
          return;
        }
      }
      else if ( v7 != v16 )
      {
        return;
      }
      sub_359640(v4);
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
          v9 = v4[2];
          v10 = v4[3];
          if ( v4[4] >= a2 )
            break;
          v4 = (_QWORD *)v4[3];
          if ( !v10 )
            goto LABEL_9;
        }
        v8 = (__int64)v4;
        v4 = (_QWORD *)v4[2];
      }
      while ( v9 );
LABEL_9:
      while ( v7 != (_QWORD *)v8 )
      {
        v11 = *(_QWORD *)(v8 + 32);
        v12 = v11 - *(_QWORD *)(v8 + 40);
        if ( v12 >= a3 )
          break;
        if ( a3 >= v11 || (v13 = v11 - a3, v13 <= 0x1000) )
        {
          v14 = std::_Rb_tree_increment(v8, a2, v12, v5);
          v15 = (void *)std::_Rb_tree_rebalance_for_erase(v8, v3 + 1);
          a2 = 48;
          v8 = v14;
          operator delete(v15, 0x30u);
          --v3[5];
          continue;
        }
        *(_QWORD *)(v8 + 40) = v13;
        v8 = std::_Rb_tree_increment(v8, a2, v12, v5);
      }
    }
  }
}
