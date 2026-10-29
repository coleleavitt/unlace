__int64 __fastcall ZSTD_dParam_getBounds(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == 1002 )
    return 0;
  if ( a1 <= 0x3EA )
  {
    if ( a1 < 0x3E8 )
    {
      result = 0;
      if ( a1 == 100 )
        return result;
      return -40;
    }
    return 0;
  }
  if ( a1 <= 0x3EC )
    return 0;
  result = 0;
  if ( a1 != 1005 )
    return -40;
  return result;
}

