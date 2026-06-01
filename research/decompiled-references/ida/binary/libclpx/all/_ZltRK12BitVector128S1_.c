bool __fastcall operator<(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx
  bool result; // al
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  v2 = a2[3];
  result = 1;
  if ( a1[3] >= v2 )
  {
    result = 0;
    if ( a1[3] <= v2 )
    {
      v4 = a2[2];
      result = 1;
      if ( a1[2] >= v4 )
      {
        result = 0;
        if ( a1[2] <= v4 )
        {
          v5 = a2[1];
          result = 1;
          if ( a1[1] >= v5 )
          {
            result = 0;
            if ( a1[1] <= v5 )
              return *a1 < *a2;
          }
        }
      }
    }
  }
  return result;
}

