/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrupr
// Address: 0x00080162

//----- (00080162) --------------------------------------------------------
_BYTE *__fastcall qstrupr(_BYTE *a1)
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
        *v3 = toupper((unsigned __int8)v2);
        v2 = (unsigned __int8)*++v3;
      }
      while ( v2 );
    }
  }
  return a1;
}
