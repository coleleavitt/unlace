__int64 sub_17C5C0()
{
  __int64 v0; // rax
  char merge_state; // dl
  __int64 result; // rax

  if ( !dbg )
    return 7;
  if ( dword_8CC5E8 )
  {
    if ( !byte_8CC5EC )
      goto LABEL_4;
    return 7;
  }
  if ( dword_8CC5F0 >= 0 )
    return 7;
LABEL_4:
  if ( dword_8BA594 < 0 )
    return 7;
  if ( dword_8BA594 >= (unsigned __int64)xmmword_8CC398 )
    return 7;
  v0 = qword_8CC390 + 56LL * dword_8BA594;
  if ( !v0 || (*(_BYTE *)(v0 + 36) & 2) != 0 )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}
