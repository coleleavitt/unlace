__int64 sub_17C3E0()
{
  __int64 result; // rax
  char merge_state; // dl

  if ( (~WORD4(xmmword_8CC820) & 0x600) != 0 )
    return 7;
  if ( dword_8CC5E8 )
  {
    if ( byte_8CC5EC )
      return 7;
  }
  else if ( dword_8CC5F0 > 0 )
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
