void __fastcall sub_4F980(__int64 a1)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a1 + 24); a1 + 8 != i; i = std::_Rb_tree_increment(i) )
    sub_4EDF0(*(_QWORD *)(i + 32), (char *)(i + 40));
}
