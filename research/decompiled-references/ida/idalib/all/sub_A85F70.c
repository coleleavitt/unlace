__int64 __fastcall sub_A85F70(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _BOOL8 v9; // rdi
  unsigned __int64 v11; // r8
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi

  v5 = operator new(0x30u);
  *(_QWORD *)(v5 + 32) = *a3;
  *(_QWORD *)(v5 + 40) = a3[1];
  v6 = sub_A85E10(a1, a2, (unsigned __int64 *)(v5 + 32));
  v8 = a1 + 1;
  if ( v7 )
  {
    v9 = 1;
    if ( !v6 && v7 != v8 )
      v9 = *(_QWORD *)(v5 + 32) < v7[4];
    goto LABEL_3;
  }
  v7 = (_QWORD *)a1[2];
  if ( !v7 )
  {
    v7 = a1 + 1;
    v9 = 1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v5 + 32);
  while ( 1 )
  {
    v13 = v7[4];
    if ( v13 < v11 )
      break;
    v12 = (_QWORD *)v7[2];
    if ( !v12 )
      goto LABEL_12;
LABEL_9:
    v7 = v12;
  }
  v12 = (_QWORD *)v7[3];
  if ( v12 )
    goto LABEL_9;
LABEL_12:
  v9 = 1;
  if ( v8 != v7 )
    v9 = v13 >= v11;
LABEL_3:
  std::_Rb_tree_insert_and_rebalance(v9, v5, v7, v8);
  ++a1[5];
  return v5;
}
