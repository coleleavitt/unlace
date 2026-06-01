unsigned __int64 *__fastcall rangeset_t_find_range(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)a1[3];
  if ( !result || a2 < *result || a2 >= result[1] )
  {
    result = (unsigned __int64 *)rangeset_t_lower_bound(a1, a2, a3);
    if ( result == (unsigned __int64 *)(*a1 + 16LL * a1[1]) || a2 < *result || a2 >= result[1] )
      return nullptr;
    else
      a1[3] = result;
  }
  return result;
}
