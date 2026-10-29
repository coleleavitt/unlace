char *__fastcall sub_124DEF0(char *a1, char *a2)
{
  char *result; // rax
  char *v3; // rcx
  char *v4; // r8
  char v5; // al

  if ( a1 != a2 )
  {
    while ( a2 != a1 + 1 )
    {
      if ( *a1 == a1[1] )
      {
        if ( a2 == a1 )
          return a2;
        v3 = a1 + 2;
        v4 = a1 + 1;
        if ( a2 != a1 + 2 )
        {
          while ( 1 )
          {
            v5 = *v3;
            if ( *a1 == *v3 )
            {
              ++v3;
              result = a1 + 1;
              if ( v3 == a2 )
                return result;
            }
            else
            {
              ++v3;
              a1[1] = v5;
              result = v4 + 1;
              if ( v3 == a2 )
                return result;
              a1 = v4;
            }
            v4 = result;
          }
        }
        return a1 + 1;
      }
      ++a1;
    }
  }
  return a2;
}
