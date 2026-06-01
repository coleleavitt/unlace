/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrupr
// Address: 0x00000000000C0778

//----- (00000000000C0778) ----------------------------------------------------
_BYTE *__fastcall qstrupr(_BYTE *a1)
{
  int v2; // w8
  unsigned __int8 *v3; // x20
  unsigned __int8 v4; // w0

  if ( a1 )
  {
    LOBYTE(v2) = *a1;
    if ( *a1 )
    {
      v3 = a1 + 1;
      do
      {
        v4 = toupper((unsigned __int8)v2);
        v2 = *v3;
        *(v3++ - 1) = v4;
      }
      while ( v2 );
    }
  }
  return a1;
}
