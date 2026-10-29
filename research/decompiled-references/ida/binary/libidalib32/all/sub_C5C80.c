int *__fastcall sub_C5C80(unsigned int a1)
{
  _QWORD *v1; // rdx
  int *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax

  v1 = qword_2514D0;
  if ( !qword_2514D0 )
  {
    v3 = &dword_2514C8;
    goto LABEL_8;
  }
  v3 = &dword_2514C8;
  do
  {
    while ( 1 )
    {
      v4 = v1[2];
      v5 = v1[3];
      if ( *((_DWORD *)v1 + 8) < a1 )
        break;
      v3 = (int *)v1;
      v1 = (_QWORD *)v1[2];
      if ( !v4 )
        goto LABEL_6;
    }
    v1 = (_QWORD *)v1[3];
  }
  while ( v5 );
LABEL_6:
  if ( v3 == &dword_2514C8 || a1 < v3[8] )
  {
LABEL_8:
    if ( v3 == (int *)qword_2514D8 )
      return nullptr;
    v3 = (int *)std::_Rb_tree_decrement();
    if ( a1 < v3[8] )
      return nullptr;
  }
  v6 = v3[17];
  if ( !v6 || a1 < v3[16] + v6 )
    return v3 + 10;
  return nullptr;
}

