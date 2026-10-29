unsigned int *__fastcall get_next_func(unsigned int a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int *result; // rax

  v2 = *(_QWORD *)(qword_2CA1698 + 1480) + 1624LL;
  while ( 1 )
  {
    v3 = sub_4ECA50(v2, a1);
    result = sub_4EE890(v2, v3);
    if ( !result || *((char *)result + 9) >= 0 )
      break;
    a1 = *result;
  }
  return result;
}

