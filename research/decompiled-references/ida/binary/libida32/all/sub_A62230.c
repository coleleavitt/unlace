__int64 __fastcall sub_A62230(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  v4 = operator new(0x30u);
  *(_QWORD *)(v4 + 32) = *a3;
  *(_QWORD *)(v4 + 40) = a3[1];
  sub_A620D0(a1, a2, (unsigned __int64 *)(v4 + 32));
  if ( !v5 )
  {
    v7 = (_QWORD *)a1[2];
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v7[4] >= *(_QWORD *)(v4 + 32) )
        {
          v8 = (_QWORD *)v7[2];
          if ( !v8 )
            break;
        }
        else
        {
          v8 = (_QWORD *)v7[3];
          if ( !v8 )
            break;
        }
        v7 = v8;
      }
    }
  }
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v4;
}

