char __fastcall is_mapped(unsigned int a1)
{
  __int64 v1; // rbp
  char result; // al

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  result = sub_3EA400(v1, a1);
  if ( !result )
    return rangeset_t_find_range(v1 + 1032, a1) != 0;
  return result;
}

