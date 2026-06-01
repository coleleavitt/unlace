__int64 __fastcall sub_105DFC0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 61);
  if ( a2 <= 0x1FF )
  {
    if ( a2 <= 0x3F )
    {
      if ( a2 > 0xF && (unsigned int)result < 0x20 )
        return 32;
    }
    else if ( (unsigned int)result < 0x40 )
    {
      return 64;
    }
  }
  else if ( (unsigned int)result < 0x80 )
  {
    return 128;
  }
  return result;
}
