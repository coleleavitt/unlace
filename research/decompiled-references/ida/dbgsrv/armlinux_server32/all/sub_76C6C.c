/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76C6C
// Address: 0x00076C6C

//----- (00076C6C) --------------------------------------------------------
_BYTE *__fastcall sub_76C6C(_BYTE *result)
{
  int v1; // r3
  _BYTE *v2; // r2
  _BYTE *v3; // r1
  bool v4; // zf
  int v5; // t1

  if ( result )
  {
    v1 = (unsigned __int8)*result;
    if ( *result )
    {
      v2 = result;
      v3 = nullptr;
      do
      {
        v4 = v1 == 47;
        if ( v1 != 47 )
          v4 = v1 == 92;
        if ( v4 )
          v3 = v2;
        v5 = (unsigned __int8)*++v2;
        v1 = v5;
      }
      while ( v5 );
      if ( v3 )
        return v3 + 1;
    }
  }
  return result;
}
