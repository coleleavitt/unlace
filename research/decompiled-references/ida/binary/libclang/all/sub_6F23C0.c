__int64 __fastcall sub_6F23C0(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  v4 = operator new(0x30u);
  v5 = *a3;
  v6 = v4;
  *(_QWORD *)(v4 + 32) = *a3;
  *(_QWORD *)(v4 + 40) = a3[1];
  if ( a1 + 1 == a2 )
  {
    if ( !a1[5] || v5 < *(_QWORD *)(a1[4] + 32LL) )
    {
      v12 = (_QWORD *)a1[2];
      if ( v12 )
      {
        while ( 1 )
        {
          if ( v5 >= v12[4] )
          {
            v13 = (_QWORD *)v12[3];
            if ( !v13 )
              break;
          }
          else
          {
            v13 = (_QWORD *)v12[2];
            if ( !v13 )
              break;
          }
          v12 = v13;
        }
      }
    }
  }
  else if ( a2[4] < v5 )
  {
    if ( a2 != (_QWORD *)a1[4] && *(_QWORD *)(std::_Rb_tree_increment() + 32) < v5 )
    {
      v9 = (_QWORD *)a1[2];
      if ( v9 )
      {
        while ( 1 )
        {
          if ( v9[4] < v5 )
          {
            v10 = (_QWORD *)v9[3];
            if ( !v10 )
              break;
          }
          else
          {
            v10 = (_QWORD *)v9[2];
            if ( !v10 )
              break;
          }
          v9 = v10;
        }
      }
    }
  }
  else if ( (_QWORD *)a1[3] != a2 && v5 < *(_QWORD *)(std::_Rb_tree_decrement() + 32) )
  {
    v7 = (_QWORD *)a1[2];
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v5 >= v7[4] )
        {
          v8 = (_QWORD *)v7[3];
          if ( !v8 )
            break;
        }
        else
        {
          v8 = (_QWORD *)v7[2];
          if ( !v8 )
            break;
        }
        v7 = v8;
      }
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v6;
}

