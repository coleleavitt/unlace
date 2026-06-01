unsigned __int64 __fastcall get_prev_fixup_ea(unsigned __int64 a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdi
  _QWORD *i; // rax
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  v2 = (_QWORD *)(v1 + 2480);
  for ( i = *(_QWORD **)(v1 + 2488); i; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      v4 = i[3];
      if ( i[4] >= a1 )
        break;
      i = (_QWORD *)i[3];
      if ( !v4 )
        goto LABEL_6;
    }
    v2 = i;
  }
LABEL_6:
  if ( *(_QWORD **)(v1 + 2496) == v2 )
    return -1;
  result = *(_QWORD *)(std::_Rb_tree_decrement(v2) + 32);
  if ( result >= a1 )
  {
    if ( !under_debugger )
      interr(1548);
    BUG();
  }
  return result;
}
