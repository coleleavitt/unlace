__int64 sub_105620()
{
  __int64 v0; // rax
  char merge_state; // dl
  __int64 result; // rax

  if ( !dbg )
    return 7;
  if ( dword_252744 )
  {
    if ( !byte_252748 )
      goto LABEL_4;
    return 7;
  }
  if ( dword_25274C >= 0 )
    return 7;
LABEL_4:
  if ( dword_245174 < 0 )
    return 7;
  if ( dword_245174 >= (unsigned __int64)xmmword_2524F8 )
    return 7;
  v0 = qword_2524F0 + 56LL * dword_245174;
  if ( !v0 || (*(_BYTE *)(v0 + 36) & 2) != 0 )
    return 7;
  merge_state = get_merge_state();
  result = 3;
  if ( (merge_state & 3) != 0 )
    return 7;
  return result;
}

