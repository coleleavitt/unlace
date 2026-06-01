/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x0007D246

//----- (0007D246) --------------------------------------------------------
_BYTE *__fastcall qbasename(_BYTE *result)
{
  char v1; // r3
  _BYTE *v2; // r2
  _BYTE *i; // r1

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
        v1 = i[1];
      }
    }
  }
  return result;
}
