__int64 sub_17BCD0()
{
  char merge_state; // dl
  __int64 result; // rax

  if ( (unsigned int)sub_3DA0C0() == -1 )
    return 7;
  if ( !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}
