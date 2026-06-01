_QWORD *__fastcall sub_40CDA0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  char v7; // si
  unsigned __int64 v8; // rcx
  __int64 v10; // rdx

  v5 = *(_QWORD **)(a1 + 72);
  if ( !v5 )
  {
    v5 = (_QWORD *)(a1 + 64);
LABEL_14:
    if ( v5 != *(_QWORD **)(a1 + 80) )
    {
      v10 = std::_Rb_tree_decrement(v5);
      v8 = *(_QWORD *)(v10 + 32);
      v5 = (_QWORD *)v10;
      goto LABEL_10;
    }
    return nullptr;
  }
  while ( 1 )
  {
    v8 = v5[4];
    if ( a2 < v8 || v8 >= a2 && a3 < v5[5] )
      break;
    v6 = (_QWORD *)v5[3];
    v7 = 0;
    if ( !v6 )
      goto LABEL_9;
LABEL_6:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[2];
  v7 = 1;
  if ( v6 )
    goto LABEL_6;
LABEL_9:
  if ( v7 )
    goto LABEL_14;
LABEL_10:
  if ( v8 < a2 || a2 >= v8 && v5[5] < a3 )
    return nullptr;
  return v5;
}
