/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D77A
// Address: 0x0007D77A

//----- (0007D77A) --------------------------------------------------------
bool __fastcall sub_7D77A(unsigned __int8 *a1, _BYTE *a2)
{
  _BYTE *v3; // r5
  int v4; // r6
  unsigned __int8 v5; // r0
  int v6; // r0
  int v7; // r1
  _BOOL4 result; // r0
  _BYTE *v9; // r1
  int v10; // r1

  v3 = a1;
  v4 = *a1;
  v5 = 0;
  if ( v4 )
  {
    while ( 2 )
    {
      LOBYTE(v6) = *a2;
      ++v3;
      if ( *a2 )
      {
        ++a2;
        while ( (unsigned __int8)v4 != (unsigned __int8)v6 && (unsigned __int8)v6 != 63 )
        {
          if ( (unsigned __int8)v6 != 42 )
            return 0;
          v7 = sub_7D77A(v3, a2 - 1);
          result = 1;
          if ( v7 )
            return result;
          v9 = a2 + 1;
          v6 = (unsigned __int8)*a2++;
          if ( !v6 )
          {
            a2 = v9 - 1;
            goto LABEL_13;
          }
        }
        LOBYTE(v4) = *v3;
        v5 = 0;
        if ( *v3 )
          continue;
      }
      else
      {
LABEL_13:
        v5 = v4;
      }
      break;
    }
  }
  do
    v10 = (unsigned __int8)*a2++;
  while ( v10 == 42 );
  return v5 == v10;
}
