/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlwr
// Address: 0x00080138

//----- (00080138) --------------------------------------------------------
_BYTE *__fastcall qstrlwr(_BYTE *a1)
{
  int v2; // r1
  _BYTE *v3; // r5

  if ( a1 )
  {
    LOBYTE(v2) = *a1;
    if ( *a1 )
    {
      v3 = a1;
      do
      {
        *v3 = tolower((unsigned __int8)v2);
        v2 = (unsigned __int8)*++v3;
      }
      while ( v2 );
    }
  }
  return a1;
}
