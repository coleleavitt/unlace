_QWORD *__fastcall sub_52B3D0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbp
  _QWORD *i; // rbx

  result = (_QWORD *)get_func_qty();
  if ( result )
  {
    v3 = result;
    for ( i = nullptr; i != v3; i = (_QWORD *)((char *)i + 1) )
    {
      result = (_QWORD *)getn_func(i);
      if ( result )
        result = (_QWORD *)dirtree_link_inode(*a2, *result, 1);
    }
  }
  return result;
}
