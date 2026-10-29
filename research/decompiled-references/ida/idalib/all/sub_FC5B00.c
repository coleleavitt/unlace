unsigned __int8 *__fastcall sub_FC5B00(unsigned __int8 *a1, unsigned __int8 *a2, char a3)
{
  unsigned __int8 *result; // rax
  int v4; // r8d
  unsigned __int8 *v5; // rdi
  unsigned __int8 v6; // cl
  unsigned __int8 *v7; // rcx
  __int64 i; // rdi

  result = a1;
  if ( a1 != a2 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *result;
        if ( v4 )
          break;
        if ( v6 == a3 )
          return result;
        v5 = result + 1;
LABEL_5:
        if ( v6 == 37 )
        {
          if ( a2 == v5 )
            return a2;
          if ( (*(_WORD *)&byte_2411740[2 * result[1]] & 0x388) != 0 )
          {
            result = v5 + 1;
          }
          else
          {
            v7 = result + 2;
            if ( a2 == result + 2 )
              return a2;
            for ( i = result[2]; (byte_2411740[2 * i] & 8) == 0; i = *v7 )
            {
              if ( (_BYTE)i == 123 )
                break;
              if ( a2 == ++v7 )
                return a2;
            }
            result = v7 + 1;
            v4 += (_BYTE)i == 123;
          }
        }
        else
        {
          result = v5;
        }
        if ( a2 == result )
          return result;
      }
      v5 = result + 1;
      if ( v6 != 125 )
        goto LABEL_5;
      ++result;
      --v4;
    }
    while ( a2 != v5 );
  }
  return result;
}
