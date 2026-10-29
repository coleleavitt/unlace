/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrupr
// Address: 0x000B3380

//----- (000B3380) --------------------------------------------------------
unsigned __int8 *__cdecl qstrupr(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 *v2; // edi

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v2 = a1 + 1;
      do
      {
        *(v2 - 1) = toupper(v1);
        v1 = *v2++;
      }
      while ( v1 );
    }
  }
  return a1;
}
