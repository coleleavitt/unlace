/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493290
// Address: 0x0000000000493290

//----- (0000000000493290) ----------------------------------------------------
_BYTE *__fastcall sub_493290(_BYTE *result)
{
  _BYTE *v1; // x22
  int v2; // w19
  _BYTE *v3; // x20
  _BYTE *v4; // x21
  int v5; // t1

  v1 = result;
  v2 = (unsigned __int8)*result;
  if ( *result )
  {
    v3 = result;
    v4 = result;
    do
    {
      if ( (v2 & 0x80) != 0 || !isspace(v2) )
        *v3++ = v2;
      v5 = (unsigned __int8)*++v4;
      v2 = v5;
    }
    while ( v5 );
    *v3 = 0;
    return v1;
  }
  else
  {
    *result = 0;
  }
  return result;
}
