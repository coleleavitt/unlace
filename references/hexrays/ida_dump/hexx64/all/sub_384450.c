__int64 __fastcall sub_384450(__int64 *a1, char a2)
{
  __int64 not_tail; // rbp
  __int64 v3; // rdx

  not_tail = *a1;
  if ( (unsigned __int8)segtype(*a1) == 1 )
    return 0;
  if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(not_tail, 4, v3);
  if ( a2 && (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) != 0 || !get_func(not_tail) )
    return 0;
  *a1 = not_tail;
  return 1;
}
