unsigned int *__fastcall sub_513140(__int64 a1, _QWORD *a2)
{
  unsigned int *result; // rax
  unsigned int *v3; // rbp
  unsigned int *i; // rbx

  result = (unsigned int *)get_func_qty(a1);
  if ( result )
  {
    v3 = result;
    for ( i = nullptr; i != v3; i = (unsigned int *)((char *)i + 1) )
    {
      result = (unsigned int *)getn_func(i);
      if ( result )
        result = (unsigned int *)dirtree_link_inode(*a2, *result, 1);
    }
  }
  return result;
}

