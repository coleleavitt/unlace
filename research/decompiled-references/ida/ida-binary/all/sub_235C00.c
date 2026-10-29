int *__fastcall sub_235C00(unsigned __int64 a1)
{
  int *v1; // rdx
  int *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = (int *)qword_8CC4F0;
  if ( !qword_8CC4F0 )
  {
    v3 = &dword_8CC4E8;
    goto LABEL_8;
  }
  v3 = &dword_8CC4E8;
  do
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v1 + 2);
      v5 = *((_QWORD *)v1 + 3);
      if ( *((_QWORD *)v1 + 4) < a1 )
        break;
      v3 = v1;
      v1 = *((int **)v1 + 2);
      if ( !v4 )
        goto LABEL_6;
    }
    v1 = *((int **)v1 + 3);
  }
  while ( v5 );
LABEL_6:
  if ( v3 == &dword_8CC4E8 || a1 < *((_QWORD *)v3 + 4) )
  {
LABEL_8:
    if ( v3 == (int *)qword_8CC4F8 )
      return nullptr;
    v3 = (int *)std::_Rb_tree_decrement(v3);
    if ( a1 < *((_QWORD *)v3 + 4) )
      return nullptr;
  }
  v6 = *((_QWORD *)v3 + 9);
  if ( !v6 || a1 < *((_QWORD *)v3 + 8) + v6 )
    return v3 + 10;
  return nullptr;
}
