char __fastcall sub_3BD540(__int64 a1, __int64 a2)
{
  char result; // al

  result = sub_3FD360(a1, a2);
  if ( !result )
    return rangeset_t_find_range(a1 + 1040, a2) != 0;
  return result;
}
