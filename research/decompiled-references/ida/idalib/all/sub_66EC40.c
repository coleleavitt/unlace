_QWORD *__fastcall sub_66EC40(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rdx
  char v4; // cl
  _QWORD *v5; // rax

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v3 = v2[4];
    v4 = 0;
    v5 = (_QWORD *)v2[3];
    if ( a2 < v3 )
    {
      v5 = (_QWORD *)v2[2];
      v4 = 1;
    }
    if ( !v5 )
      break;
    v2 = v5;
  }
  if ( v4 )
  {
LABEL_10:
    if ( v2 != *(_QWORD **)(a1 + 24) )
    {
      v2 = (_QWORD *)std::_Rb_tree_decrement(v2);
      if ( v2[4] >= a2 )
        return v2;
    }
    return nullptr;
  }
  if ( v3 < a2 )
    return nullptr;
  return v2;
}
