/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23CE0
// Address: 0x00023CE0

//----- (00023CE0) --------------------------------------------------------
char __cdecl sub_23CE0(_DWORD *a1)
{
  char result; // al
  _DWORD *v2; // edx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  int *v5; // edx
  int v6; // edx
  bool v7; // zf

  result = 1;
  if ( !a1[19] )
  {
    v2 = (_DWORD *)a1[142];
    if ( a1 + 143 == v2 )
    {
      return 0;
    }
    else
    {
      while ( !*((_BYTE *)v2 + 45) || v2[7] || v2[6] )
      {
        v3 = (_DWORD *)v2[1];
        if ( v3 )
        {
          do
          {
            v4 = v3;
            v3 = (_DWORD *)*v3;
          }
          while ( v3 );
        }
        else
        {
          v4 = (_DWORD *)v2[2];
          if ( (_DWORD *)*v4 != v2 )
          {
            v5 = v2 + 2;
            do
            {
              v6 = *v5;
              v4 = *(_DWORD **)(v6 + 8);
              v7 = *v4 == v6;
              v5 = (int *)(v6 + 8);
            }
            while ( !v7 );
          }
        }
        v2 = v4;
        if ( a1 + 143 == v4 )
          return 0;
      }
    }
  }
  return result;
}
