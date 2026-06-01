__int64 sub_1052E0()
{
  bool v0; // bp
  __int64 result; // rax

  if ( dword_25159C )
  {
    v0 = 0;
    if ( byte_2515A0 )
      goto LABEL_3;
  }
  else
  {
    v0 = 0;
    if ( dword_2515A4 >= 0 )
      goto LABEL_3;
  }
  v0 = 0;
  if ( (~(_WORD)qword_251710 & 0x600) == 0 )
    v0 = sub_CB590() == 0;
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

