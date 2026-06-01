__int64 __fastcall sub_535040(char a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  result = 1;
  v2 = a1 & 0xF;
  if ( (a1 & 0xF) != 8 )
  {
    if ( v2 > 8u )
    {
      return 2 * (unsigned int)(v2 == 10);
    }
    else
    {
      result = 0;
      if ( (unsigned __int8)(v2 - 2) <= 5u )
        return (unsigned int)((a1 & 0x30) == 32) + 1;
    }
  }
  return result;
}
