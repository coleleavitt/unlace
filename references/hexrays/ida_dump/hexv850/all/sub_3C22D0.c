char *__fastcall sub_3C22D0(unsigned int a1)
{
  char *result; // rax

  result = "lightyellow";
  if ( a1 != 8454143 )
  {
    if ( a1 > 0x80FFFF )
    {
      result = "purple";
      if ( a1 != 15736992 )
      {
        if ( a1 > 0xF020A0 )
        {
          result = "lightmagenta";
          if ( a1 != 16744703 )
          {
            if ( a1 > 0xFF80FF )
            {
              result = "lightcyan";
              if ( a1 != 16777088 )
              {
                result = "white";
                if ( a1 != 0xFFFFFF )
                {
                  result = "?";
                  if ( a1 == 16776960 )
                    return "cyan";
                }
              }
            }
            else
            {
              result = "magenta";
              if ( a1 != 16711935 )
              {
                result = "lightblue";
                if ( a1 != 16744576 )
                {
                  result = "?";
                  if ( a1 == 16711680 )
                    return "blue";
                }
              }
            }
          }
        }
        else
        {
          result = "turquoise";
          if ( a1 != 13688896 )
          {
            if ( a1 > 0xD0E040 )
            {
              result = "orchid";
              if ( a1 != 14053594 )
              {
                result = "lilac";
                if ( a1 != 15631086 )
                {
                  result = "?";
                  if ( a1 == 13959039 )
                    return "aquamarine";
                }
              }
            }
            else
            {
              result = "lightgrey";
              if ( a1 != 11184810 )
              {
                result = "pink";
                if ( a1 != 13353215 )
                {
                  result = "?";
                  if ( a1 == 9234160 )
                    return "khaki";
                }
              }
            }
          }
        }
      }
    }
    else
    {
      result = "yellow";
      if ( a1 != 0xFFFF )
      {
        if ( a1 > 0xFFFF )
        {
          result = "darkmagenta";
          if ( a1 != 8388736 )
          {
            if ( a1 > 0x800080 )
            {
              result = "lightred";
              if ( a1 != 8421631 )
              {
                result = "lightgreen";
                if ( a1 != 8454016 )
                {
                  result = "?";
                  if ( a1 == 8421376 )
                    return "darkcyan";
                }
              }
            }
            else
            {
              result = "darkgrey";
              if ( a1 != 5592405 )
              {
                result = "darkblue";
                if ( a1 != 0x800000 )
                {
                  result = "?";
                  if ( a1 == (_DWORD)&algn_32CD96[4] )
                    return "yellowgreen";
                }
              }
            }
          }
        }
        else
        {
          result = "darkyellow";
          if ( a1 != 32896 )
          {
            if ( a1 > 0x8080 )
            {
              result = "gold";
              if ( a1 != 55295 )
              {
                result = "green";
                if ( a1 != 65280 )
                {
                  result = "?";
                  if ( a1 == 42495 )
                    return "orange";
                }
              }
            }
            else
            {
              result = "red";
              if ( a1 != 255 )
              {
                if ( a1 > 0xFF )
                {
                  result = "?";
                  if ( a1 == 0x8000 )
                    return "darkgreen";
                }
                else
                {
                  result = "black";
                  if ( a1 )
                  {
                    result = "?";
                    if ( a1 == 128 )
                      return "darkred";
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
