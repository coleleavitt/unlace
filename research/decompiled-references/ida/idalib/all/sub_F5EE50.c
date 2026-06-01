__int64 __fastcall sub_F5EE50(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  __int64 v4; // rax

  v3 = *a1;
  if ( *a1 > 1u )
  {
    if ( v3 > 3u )
      BUG();
  }
  else if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 2) != 0 )
    {
      v4 = 1;
    }
    else if ( (a3 & 4) != 0 )
    {
      v4 = 2;
    }
    else
    {
      v4 = 3;
      if ( (a3 & 8) == 0 )
        return 1;
    }
    if ( v3 != (_BYTE)v4 )
    {
      while ( v4 != 3 )
      {
        if ( (a3 & (1LL << ((unsigned __int8)v4 + 1))) != 0 )
        {
          ++v4;
        }
        else
        {
          if ( v4 != 1 || (a3 & 8) == 0 )
            return 1;
          v4 = 3;
        }
      }
      return 1;
    }
  }
  return 0;
}
