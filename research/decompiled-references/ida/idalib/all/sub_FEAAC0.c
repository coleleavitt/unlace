void __fastcall sub_FEAAC0(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(a1 + 624); (_QWORD *)(a1 + 608) != i; i = (_QWORD *)std::_Rb_tree_increment(i) )
  {
    if ( (unsigned __int8)sub_228ED60(a2, i[4], i[5], i[8], i[9], 0) )
      break;
  }
}
