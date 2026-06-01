char *__fastcall sub_20D85D0(char *a1, char *a2)
{
  char *result; // rax
  int v3; // ecx
  char *v4; // rdx
  int v5; // ecx

  result = a1;
  if ( a1 != a2 )
  {
    if ( *a1 == 95 )
    {
      if ( a2 != a1 + 1 )
      {
        v3 = a1[1];
        if ( (unsigned int)(v3 - 48) <= 9 )
          return a1 + 2;
        if ( (_BYTE)v3 == 95 )
        {
          v4 = a1 + 2;
          if ( a2 != a1 + 2 )
          {
            v5 = a1[2];
            if ( (unsigned int)(v5 - 48) <= 9 )
            {
              while ( a2 != ++v4 )
              {
                v5 = *v4;
                if ( (unsigned int)(v5 - 48) > 9 )
                  goto LABEL_10;
              }
              return a1;
            }
LABEL_10:
            result = v4 + 1;
            if ( (_BYTE)v5 != 95 )
              return a1;
          }
        }
      }
    }
    else if ( (unsigned int)(*a1 - 48) <= 9 )
    {
      result = a1 + 1;
      if ( a2 != a1 + 1 )
      {
        if ( (unsigned int)(a1[1] - 48) > 9 )
          return a1;
        while ( a2 != ++result )
        {
          if ( (unsigned int)(*result - 48) > 9 )
            return a1;
        }
      }
    }
  }
  return result;
}
