__int64 __fastcall sub_BED3A0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *i; // rax

  v2 = (_QWORD *)(a1 + 80);
  for ( i = *(_QWORD **)(a1 + 88); i; i = (_QWORD *)i[2] )
  {
    while ( i[4] <= a2 )
    {
      i = (_QWORD *)i[3];
      if ( !i )
        goto LABEL_6;
    }
    v2 = i;
  }
LABEL_6:
  if ( *(_QWORD **)(a1 + 96) != v2 && *(_QWORD *)(std::_Rb_tree_decrement() + 32) == a2 )
    return std::_Rb_tree_decrement() + 48;
  else
    return 0;
}

