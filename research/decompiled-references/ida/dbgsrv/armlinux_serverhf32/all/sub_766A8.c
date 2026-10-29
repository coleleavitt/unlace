/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_766A8
// Address: 0x000766A8

//----- (000766A8) --------------------------------------------------------
int __fastcall sub_766A8(_BYTE *a1, _BYTE *a2)
{
  int v4; // r3
  int result; // r0
  unsigned __int8 *v6; // r1
  unsigned __int8 *v7; // r2
  bool v8; // zf
  int v9; // r0
  int v10; // t1
  int v11; // t1
  int v12; // r0
  int v13; // t1

  while ( 1 )
  {
    v4 = (unsigned __int8)*a2;
    if ( !*a1 )
      break;
    result = (unsigned __int8)*a1 == v4;
    if ( !*a2 )
      return result;
    if ( v4 == 63 )
      result = 1;
    if ( result )
    {
      v6 = a1 + 1;
      v7 = a2 + 1;
      do
      {
        a1 = v6;
        v10 = *v6++;
        v9 = v10;
        a2 = v7;
        v11 = *v7++;
        v4 = v11;
        if ( !v9 )
          goto LABEL_13;
        if ( !v4 )
          return 0;
        v8 = v9 == v4;
        if ( v9 != v4 )
          v8 = v4 == 63;
      }
      while ( v8 );
    }
    if ( v4 != 42 )
      return 0;
    result = sub_766A8(a1 + 1, a2);
    if ( result )
      return result;
    ++a2;
  }
LABEL_13:
  if ( v4 != 42 )
    return v4 == 0;
  do
  {
    v13 = (unsigned __int8)*++a2;
    v12 = v13;
  }
  while ( v13 == 42 );
  return v12 == 0;
}
