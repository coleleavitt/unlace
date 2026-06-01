__int64 sub_1069B0()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( (~WORD4(xmmword_2528B0) & 0x600) != 0 )
    return 7;
  if ( dword_252744 )
  {
    if ( byte_252748 )
      return 7;
  }
  else if ( dword_25274C > 0 )
  {
    return 7;
  }
  if ( !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

