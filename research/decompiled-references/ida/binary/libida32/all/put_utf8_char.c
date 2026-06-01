__int64 __fastcall put_utf8_char(_BYTE *a1, unsigned int a2)
{
  if ( a2 > 0x7F )
  {
    if ( a2 > 0x7FF )
    {
      if ( a2 <= 0xFFFF )
      {
        *a1 = (a2 >> 12) | 0xE0;
        a1[2] = a2 & 0x3F | 0x80;
        a1[1] = (a2 >> 6) & 0x3F | 0x80;
        a1[3] = 0;
        return 3;
      }
      else if ( a2 > 0x10FFFF )
      {
        *a1 = 0;
        return -1;
      }
      else
      {
        *(_DWORD *)a1 = (unsigned __int8)(a2 >> 18)
                      | (((a2 >> 12) & 0x3F | (((a2 >> 6) & 0x3F | ((a2 & 0x3F) << 8)) << 8)) << 8)
                      | 0x808080F0;
        a1[4] = 0;
        return 4;
      }
    }
    else
    {
      a1[1] = a2 & 0x3F | 0x80;
      *a1 = (a2 >> 6) | 0xC0;
      a1[2] = 0;
      return 2;
    }
  }
  else
  {
    *a1 = a2;
    a1[1] = 0;
    return 1;
  }
}

