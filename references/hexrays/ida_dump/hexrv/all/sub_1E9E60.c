__int64 __fastcall sub_1E9E60(unsigned __int8 *a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5; // edx

  result = ((int)a1[753] >> 3) & 1;
  if ( (((int)a1[753] >> 3) & 1) == 0 )
  {
    result = ((int)a1[754] >> 4) & 1;
    if ( (((int)a1[754] >> 4) & 1) == 0 )
    {
      v2 = (int)a1[753] >> 2;
      result = v2 & 1;
      if ( (v2 & 1) == 0 )
      {
        v3 = (int)a1[754] >> 5;
        result = v3 & 1;
        if ( (v3 & 1) == 0 )
        {
          v4 = a1[755];
          result = (v4 >> 1) & 1;
          if ( ((v4 >> 1) & 1) == 0 )
          {
            result = (v4 >> 2) & 1;
            if ( ((v4 >> 2) & 1) == 0 )
            {
              v5 = v4 >> 3;
              result = v5 & 1;
              if ( (v5 & 1) == 0 )
              {
                result = ((int)a1[756] >> 2) & 1;
                if ( (((int)a1[756] >> 2) & 1) == 0 )
                {
                  result = a1[758] & 1;
                  if ( (a1[758] & 1) == 0 )
                    return ((int)a1[759] >> 1) & 1;
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
