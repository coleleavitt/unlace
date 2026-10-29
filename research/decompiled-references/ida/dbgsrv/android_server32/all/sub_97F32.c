/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97F32
// Address: 0x00097F32

//----- (00097F32) --------------------------------------------------------
unsigned __int8 *__fastcall sub_97F32(unsigned __int8 *result, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // r2
  unsigned __int8 *i; // r12
  int v5; // r3
  unsigned __int8 *v6; // r2
  int v7; // t1

  if ( result != a2 )
  {
    v2 = *result;
    if ( v2 == 95 )
    {
      if ( result + 1 != a2 )
      {
        v3 = result[1];
        if ( (unsigned int)(v3 - 48) > 9 )
        {
          if ( v3 == 95 )
          {
            for ( i = result + 2; a2 != i; ++i )
            {
              v5 = *i;
              if ( (unsigned int)(v5 - 48) > 9 )
              {
                if ( v5 == 95 )
                  return i + 1;
                return result;
              }
            }
          }
        }
        else
        {
          result += 2;
        }
      }
    }
    else if ( (unsigned int)(v2 - 48) <= 9 )
    {
      v6 = result + 1;
      while ( a2 != v6 )
      {
        v7 = *v6++;
        if ( (unsigned int)(v7 - 48) >= 0xA )
          return result;
      }
      return a2;
    }
  }
  return result;
}
