__int64 invalidate_regfinder_cache()
{
  __int64 result; // rax

  result = *(_QWORD *)(qword_2CCB598 + 320);
  if ( result )
    return reg_finder_invalidate_cache(*(_QWORD *)(qword_2CCB598 + 320));
  return result;
}
