unsigned int *__fastcall get_func(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int *result; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480) + 1624LL;
  result = sub_4EE820(v1, a1);
  if ( result )
  {
    if ( *((char *)result + 9) < 0 )
      return sub_4EE820(v1, result[4]);
  }
  return result;
}

