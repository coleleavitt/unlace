bool __fastcall sub_2938E0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  bool result; // al
  int v4; // ecx

  v2 = a2[1];
  result = 1;
  if ( a1[1] >= v2 )
  {
    result = 0;
    if ( a1[1] <= v2 )
    {
      result = 1;
      if ( *a1 >= *a2 )
      {
        result = 0;
        if ( *a1 <= *a2 )
        {
          v4 = a2[3];
          result = 1;
          if ( a1[3] >= v4 )
          {
            result = 0;
            if ( a1[3] <= v4 )
              return a1[2] < a2[2];
          }
        }
      }
    }
  }
  return result;
}
