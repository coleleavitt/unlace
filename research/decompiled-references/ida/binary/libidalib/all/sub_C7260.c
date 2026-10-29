__int64 __fastcall sub_C7260(char *a1)
{
  __int64 v1; // rbx
  char *v3; // rdi

  v1 = qword_252658;
  if ( (int *)qword_252658 == &dword_252648 )
    return 0;
  while ( 1 )
  {
    v3 = (char *)s1;
    if ( *(_QWORD *)(v1 + 48) )
      v3 = *(char **)(v1 + 40);
    if ( (unsigned __int8)sub_B7D90(v3, a1) )
      break;
    v1 = std::_Rb_tree_increment();
    if ( (int *)v1 == &dword_252648 )
      return 0;
  }
  return v1 + 40;
}

