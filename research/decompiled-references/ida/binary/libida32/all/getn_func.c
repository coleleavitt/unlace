unsigned int *__fastcall getn_func(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int *result; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 1424LL);
  if ( a1 >= *(_QWORD *)(v2 + 24) )
    return nullptr;
  v3 = v1 + 1624;
  result = sub_4EE820(v1 + 1624, *(unsigned int *)(*(_QWORD *)(v2 + 16) + 8 * a1));
  if ( !result )
    return nullptr;
  if ( *((char *)result + 9) < 0 )
    return sub_4EE820(v3, result[4]);
  return result;
}

