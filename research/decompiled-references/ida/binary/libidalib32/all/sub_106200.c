__int64 sub_106200()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( !dword_2515A4 || !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

