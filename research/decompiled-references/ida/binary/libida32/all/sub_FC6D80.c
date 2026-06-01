void __fastcall sub_FC6D80(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a1 + 624); (_QWORD *)(a1 + 608) != i; i = (_QWORD *)std::_Rb_tree_increment() )
  {
    if ( (unsigned __int8)sub_226B020(a2, i[4], i[5], i[8], i[9], 0) )
      break;
  }
}

