/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qbasename
// Address: 0x000000010006E488

//----- (000000010006E488) ----------------------------------------------------
_BYTE *__fastcall qbasename(_BYTE *result)
{
  int v1; // w9
  _BYTE *v2; // x8
  _BYTE *i; // x10
  int v4; // t1

  if ( result )
  {
    v1 = (unsigned __int8)*result;
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
        v4 = (unsigned __int8)i[1];
        v1 = v4;
      }
    }
  }
  return result;
}
