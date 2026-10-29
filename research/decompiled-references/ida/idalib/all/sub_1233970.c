__int64 __fastcall sub_1233970(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r13
  _QWORD *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rdi
  void *v11; // r15
  __int64 v12; // rax
  _QWORD *v14; // r12
  __int64 v15; // rbp
  void *v16; // rdi
  __int64 v17; // r14

  v3 = sub_1233750((__int64)a1, a2);
  v5 = a1[5];
  v6 = v4;
  v7 = v3;
  if ( v3 == a1[3] && (v14 = a1 + 1, v4 == a1 + 1) )
  {
    v15 = a1[2];
    if ( v15 )
    {
      while ( 1 )
      {
        sub_F7EAE0((__int64)a1, *(_QWORD **)(v15 + 24));
        v16 = *(void **)(v15 + 32);
        v17 = *(_QWORD *)(v15 + 16);
        if ( v16 == (void *)(v15 + 48) )
        {
          operator delete((void *)v15);
          if ( !v17 )
            break;
        }
        else
        {
          operator delete(v16);
          operator delete((void *)v15);
          if ( !v17 )
            break;
        }
        v15 = v17;
      }
    }
    a1[2] = 0;
    a1[3] = v14;
    a1[4] = v14;
    a1[5] = 0;
  }
  else if ( (_QWORD *)v3 == v4 )
  {
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = std::_Rb_tree_increment(v7);
      v9 = std::_Rb_tree_rebalance_for_erase(v7, a1 + 1);
      v10 = *(void **)(v9 + 32);
      v11 = (void *)v9;
      if ( v10 != (void *)(v9 + 48) )
        operator delete(v10);
      operator delete(v11);
      v12 = a1[5] - 1LL;
      a1[5] = v12;
      if ( v6 == (_QWORD *)v8 )
        break;
      v7 = v8;
    }
    v5 -= v12;
  }
  return v5;
}
