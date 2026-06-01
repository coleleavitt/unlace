__int64 sub_179AA0()
{
  __int64 result; // rax
  __int64 v1; // rdx

  if ( !get_debugger_plugins(0) || sub_19AFC0() )
    return 7;
  v1 = sub_384360();
  result = 3;
  if ( !v1 )
  {
    if ( !dbg )
      goto LABEL_10;
    if ( (*(_BYTE *)(dbg + 37LL) & 2) == 0 )
    {
      if ( *(_QWORD *)(dbg + 72LL) && *(_BYTE *)(dbg + 80LL) )
      {
LABEL_10:
        result = 3;
        if ( (~WORD4(xmmword_8CC820) & 0x600) == 0 )
          return result;
      }
      return 7;
    }
  }
  return result;
}
