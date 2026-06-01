__int64 sub_1067F0()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  if ( dword_25159C )
    LOBYTE(v0) = byte_2515A0 ^ 1;
  else
    v0 = (unsigned int)dword_2515A4 >> 31;
  if ( !dbg )
    return 7;
  if ( (get_merge_state() & 3) != 0 )
    return 7;
  if ( (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
    return 7;
  result = 3;
  if ( !(_BYTE)v0 )
    return 7;
  return result;
}

