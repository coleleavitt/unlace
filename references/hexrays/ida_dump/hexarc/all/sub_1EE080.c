void __fastcall sub_1EE080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx

  v3 = a2 + 8;
  if ( a2 + 8 != *(_QWORD *)(a2 + 24) )
  {
    v4 = a2;
    do
    {
      a2 = *(unsigned int *)(std::_Rb_tree_decrement(v3, a2, a3) + 32);
      sub_1EDF80(a1, a2);
      v3 = std::_Rb_tree_decrement(v3, a2, v5);
    }
    while ( v3 != *(_QWORD *)(v4 + 24) );
  }
}
