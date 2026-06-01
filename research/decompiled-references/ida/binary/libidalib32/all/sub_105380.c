__int64 sub_105380()
{
  __int64 v0; // rax
  char merge_state; // dl
  __int64 result; // rax

  if ( !dbg )
    return 7;
  if ( dword_25159C )
  {
    if ( !byte_2515A0 )
      goto LABEL_4;
    return 7;
  }
  if ( dword_2515A4 >= 0 )
    return 7;
LABEL_4:
  if ( dword_24411C < 0 )
    return 7;
  if ( dword_24411C >= (unsigned __int64)xmmword_251378 )
    return 7;
  v0 = qword_251370 + 56LL * dword_24411C;
  if ( !v0 || (*(_BYTE *)(v0 + 36) & 2) != 0 )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

