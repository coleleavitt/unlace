_QWORD *__fastcall sub_F5B200(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r12
  _QWORD *v5; // rax
  char v6; // dl
  unsigned __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v10; // rax

  v3 = (_QWORD *)a1[2];
  if ( !v3 )
  {
    if ( a1 + 1 != (_QWORD *)a1[3] )
    {
      v4 = *a2;
LABEL_11:
      v10 = std::_Rb_tree_decrement();
      if ( v4 <= *(_QWORD *)(v10 + 32) )
        return (_QWORD *)v10;
    }
LABEL_9:
    v8 = operator new(0x28u);
    *(_QWORD *)(v8 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return (_QWORD *)v8;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v4 >= v7 )
      break;
    v5 = (_QWORD *)v3[2];
    v6 = 1;
    if ( !v5 )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (_QWORD *)v3[3];
  v6 = 0;
  if ( v5 )
    goto LABEL_4;
LABEL_7:
  if ( v6 )
  {
    if ( v3 != (_QWORD *)a1[3] )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v4 > v7 )
    goto LABEL_9;
  return v3;
}

