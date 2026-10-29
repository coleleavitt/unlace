/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlwr
// Address: 0x00000000000C0734

//----- (00000000000C0734) ----------------------------------------------------
_BYTE *__fastcall qstrlwr(_BYTE *a1)
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
        v4 = tolower((unsigned __int8)v2);
        v2 = *v3;
        *(v3++ - 1) = v4;
      }
      while ( v2 );
    }
  }
  return a1;
}
