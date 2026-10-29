/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x00000000000BC21C

//----- (00000000000BC21C) ----------------------------------------------------
_BYTE *__fastcall qbasename(_BYTE *result)
{
  char v1; // w10
  _BYTE *v2; // x8
  _BYTE *i; // x9
  char v4; // t1

  if ( result )
  {
    v1 = *result;
    if ( *result )
    {
      v2 = nullptr;
      for ( i = result; ; ++i )
      {
        if ( v1 == 47 || v1 == 92 )
        {
          v2 = i;
        }
        else if ( !v1 )
        {
          if ( v2 )
            return v2 + 1;
          return result;
        }
        v4 = i[1];
        v1 = v4;
      }
    }
  }
  return result;
}
