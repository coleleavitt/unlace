__int64 sub_105580()
{
  bool v0; // bp
  __int64 result; // rax

  if ( dword_252744 )
  {
    v0 = 0;
    if ( byte_252748 )
      goto LABEL_3;
  }
  else
  {
    v0 = 0;
    if ( dword_25274C >= 0 )
      goto LABEL_3;
  }
  v0 = 0;
  if ( (~WORD4(xmmword_2528B0) & 0x600) == 0 )
    v0 = sub_CCB10() == 0;
LABEL_3:
  if ( !dbg )
    return 7;
  if ( (get_merge_state() & 3) != 0 )
    return 7;
  if ( (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
    return 7;
  result = 3;
  if ( !v0 )
    return 7;
  return result;
}

