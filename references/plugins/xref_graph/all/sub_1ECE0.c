_QWORD *__fastcall sub_1ECE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v9; // rax

  v4 = a2;
  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
  {
    v5 = (_QWORD *)(a1 + 8);
LABEL_12:
    if ( v5 != *(_QWORD **)(a1 + 24) )
    {
      v9 = std::_Rb_tree_decrement(v5, a2);
      v7 = *(_QWORD *)(v9 + 32);
      v5 = (_QWORD *)v9;
      if ( v7 >= v4 )
        goto LABEL_14;
    }
    return nullptr;
  }
  while ( 1 )
  {
    v7 = v5[4];
    if ( v4 < v7 || v7 == v4 && a3 < v5[5] )
      break;
    v6 = (_QWORD *)v5[3];
    a2 = 0;
    if ( !v6 )
      goto LABEL_9;
LABEL_6:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[2];
  a2 = 1;
  if ( v6 )
    goto LABEL_6;
LABEL_9:
  if ( (_BYTE)a2 )
    goto LABEL_12;
  if ( v7 < v4 )
    return nullptr;
LABEL_14:
  if ( v4 == v7 && v5[5] < a3 )
    return nullptr;
  return v5;
}
