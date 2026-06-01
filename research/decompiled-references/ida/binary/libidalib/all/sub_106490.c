__int64 sub_106490()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( !dword_25274C || !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

