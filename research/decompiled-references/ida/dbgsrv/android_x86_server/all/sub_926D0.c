/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_926D0
// Address: 0x000926D0

//----- (000926D0) --------------------------------------------------------
int __cdecl sub_926D0(_DWORD *a1, int a2, int a3)
{
  int v3; // edi
  int result; // eax
  int v5; // edi
  int v6; // edi
  int v7; // edi

  v3 = a1[98];
  if ( v3 != a2 || (result = -1, a1[102] != a3) )
  {
    if ( v3 == -1 )
    {
      return 0;
    }
    else
    {
      v5 = a1[99];
      if ( v5 != a2 || (result = -1, a1[103] != a3) )
      {
        if ( v5 == -1 )
        {
          return 1;
        }
        else
        {
          v6 = a1[100];
          if ( v6 != a2 || (result = -1, a1[104] != a3) )
          {
            if ( v6 == -1 )
            {
              return 2;
            }
            else
            {
              v7 = a1[101];
              if ( v7 != a2 )
                return 4 * (v7 == -1) - 1;
              result = -1;
              if ( a1[105] != a3 )
                return 4 * (v7 == -1) - 1;
            }
          }
        }
      }
    }
  }
  return result;
}
