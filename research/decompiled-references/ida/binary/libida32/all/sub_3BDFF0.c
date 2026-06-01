__int64 __fastcall sub_3BDFF0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  bool v8; // cc

  v2 = a1[3];
  v3 = a2[3];
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      v5 = a1[1];
      v6 = a2[1];
      result = 0xFFFFFFFFLL;
      if ( v5 >= v6 )
      {
        result = 1;
        if ( v6 >= v5 )
        {
          result = 0xFFFFFFFFLL;
          if ( *a1 >= *a2 )
          {
            result = 1;
            if ( *a2 >= *a1 )
            {
              v7 = a2[2];
              v8 = a1[2] < v7;
              result = a1[2] > v7;
              if ( v8 )
                return 0xFFFFFFFFLL;
            }
          }
        }
      }
    }
  }
  return result;
}

