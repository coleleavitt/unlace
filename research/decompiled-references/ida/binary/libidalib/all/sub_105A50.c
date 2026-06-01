__int64 sub_105A50()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  if ( dword_252744 )
    LOBYTE(v0) = byte_252748 ^ 1;
  else
    v0 = (unsigned int)dword_25274C >> 31;
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

