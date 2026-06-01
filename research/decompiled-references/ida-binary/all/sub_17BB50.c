__int64 sub_17BB50()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( !dword_8CC5F0 || !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}
