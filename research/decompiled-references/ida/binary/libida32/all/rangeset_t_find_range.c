unsigned int *__fastcall rangeset_t_find_range(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int *result; // rax

  result = (unsigned int *)a1[3];
  if ( !result || a2 < *result || a2 >= result[1] )
  {
    result = (unsigned int *)rangeset_t_lower_bound(a1, a2, a3);
    if ( result == (unsigned int *)(*a1 + 8LL * a1[1]) || a2 < *result || a2 >= result[1] )
      return nullptr;
    else
      a1[3] = result;
  }
  return result;
}

