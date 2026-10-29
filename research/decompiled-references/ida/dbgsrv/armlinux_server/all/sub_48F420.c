/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F420
// Address: 0x000000000048F420

//----- (000000000048F420) ----------------------------------------------------
_BYTE *__fastcall sub_48F420(_BYTE *result)
{
  int v1; // w1
  _BYTE *v2; // x2
  _BYTE *v3; // x3
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
        if ( v1 == 92 || v1 == 47 )
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
