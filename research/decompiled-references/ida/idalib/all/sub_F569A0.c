bool __fastcall sub_F569A0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al

  v2 = *a1;
  result = 0;
  if ( a2 != *a1
    && ((unsigned __int8)a2 & (unsigned __int8)~(_BYTE)v2 & 7) == 0
    && (((v2 >> 4) & 3) == ((a2 >> 4) & 3) || (v2 & 0x30) != 0 && (a2 & 0x30) == 0) )
  {
    if ( (unsigned int)a2 >> 9 == (unsigned int)v2 >> 9
      || (result = 0, (v2 & 0xFFFFFE00) != 0) && (a2 & 0xFFFFFE00) == 0 )
    {
      result = 1;
      if ( ((a2 >> 6) & 7) != ((v2 >> 6) & 7) )
      {
        result = 0;
        if ( (v2 & 0x1C0) != 0 )
          return (a2 & 0x1C0) == 0;
      }
    }
  }
  return result;
}
