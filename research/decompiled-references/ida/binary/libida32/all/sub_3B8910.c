char __fastcall sub_3B8910(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_3EA400(a1, a2);
  if ( !result )
    return rangeset_t_find_range(a1 + 1032, (unsigned int)a2) != 0;
  return result;
}

