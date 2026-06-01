__int64 sub_106AB0()
{
  char merge_state; // dl
  __int64 result; // rax

  if ( dword_25159C )
  {
    if ( byte_2515A0 )
      return 7;
  }
  else if ( dword_2515A4 >= 0 )
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

