__int64 __fastcall sub_5529E0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r12

  v2 = (_QWORD *)a1[2];
  v3 = *a2;
  if ( !v2 )
  {
    if ( a1 + 1 == (_QWORD *)a1[3] )
      goto LABEL_10;
    v7 = std::_Rb_tree_decrement();
    if ( *(_QWORD *)(v7 + 32) < v3 )
      goto LABEL_10;
    return v7;
  }
  while ( 1 )
  {
    v5 = v2[4];
    if ( v3 < v5 )
      break;
    v4 = (_QWORD *)v2[3];
    if ( !v4 )
    {
      v7 = (__int64)v2;
      goto LABEL_9;
    }
LABEL_4:
    v2 = v4;
  }
  v4 = (_QWORD *)v2[2];
  if ( v4 )
    goto LABEL_4;
  if ( (_QWORD *)a1[3] == v2 )
    goto LABEL_10;
  v6 = std::_Rb_tree_decrement();
  v5 = *(_QWORD *)(v6 + 32);
  v7 = v6;
LABEL_9:
  if ( v5 < v3 )
  {
LABEL_10:
    v7 = operator new(0x28u);
    *(_QWORD *)(v7 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  return v7;
}

