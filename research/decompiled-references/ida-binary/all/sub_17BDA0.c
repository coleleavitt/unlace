__int64 sub_17BDA0()
{
  char merge_state; // dl
  __int64 result; // rax

  if ( dword_8BA590 == -1 || !dword_8CC5F0 || !dbg )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}
