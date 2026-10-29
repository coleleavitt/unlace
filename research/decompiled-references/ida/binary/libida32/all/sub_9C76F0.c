_QWORD *__fastcall sub_9C76F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  char v4; // dl
  __int64 v5; // r14
  unsigned int v6; // ebp
  _QWORD *result; // rax
  __int64 v8; // r12
  unsigned int v9; // ebp
  bool v10; // cf

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v5 = v2[4];
    v6 = sub_B4F350(*a2);
    if ( v6 >= (unsigned int)sub_B4F350(v5) )
      break;
    v3 = (_QWORD *)v2[2];
    v4 = 1;
    if ( !v3 )
      goto LABEL_7;
LABEL_4:
    v2 = v3;
  }
  v3 = (_QWORD *)v2[3];
  v4 = 0;
  if ( v3 )
    goto LABEL_4;
LABEL_7:
  if ( !v4 )
    goto LABEL_10;
LABEL_8:
  result = nullptr;
  if ( v2 != *(_QWORD **)(a1 + 24) )
  {
    v2 = (_QWORD *)std::_Rb_tree_decrement();
LABEL_10:
    v8 = *a2;
    v9 = sub_B4F350(v2[4]);
    v10 = v9 < (unsigned int)sub_B4F350(v8);
    result = v2;
    if ( v10 )
      return nullptr;
  }
  return result;
}

