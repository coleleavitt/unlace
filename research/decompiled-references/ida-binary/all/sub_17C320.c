__int64 sub_17C320()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( !dword_8CC5F0 )
    return 7;
  if ( !get_func(xmmword_8CC810) )
    return 7;
  if ( !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}
