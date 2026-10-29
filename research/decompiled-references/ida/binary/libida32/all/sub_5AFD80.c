unsigned int *__fastcall sub_5AFD80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
  if ( a2 >= *(_QWORD *)(v2 + 24) )
    return nullptr;
  result = sub_4EE820(a1 + 1624, *(unsigned int *)(*(_QWORD *)(v2 + 16) + 8 * a2));
  if ( !result )
    return nullptr;
  if ( *((char *)result + 9) < 0 )
    return sub_4EE820(a1 + 1624, result[4]);
  return result;
}

