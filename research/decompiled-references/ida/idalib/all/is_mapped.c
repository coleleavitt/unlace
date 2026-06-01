char __fastcall is_mapped(__int64 a1)
{
  __int64 v1; // rbp
  char result; // al

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  result = sub_3FD360(v1, a1);
  if ( !result )
    return rangeset_t_find_range(v1 + 1040, a1) != 0;
  return result;
}
