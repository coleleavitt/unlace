/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrlwr
// Address: 0x00000000000C54B0

//----- (00000000000C54B0) ----------------------------------------------------
unsigned __int8 *__fastcall qstrlwr(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 *v2; // rbx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v2 = a1 + 1;
      do
      {
        *(v2 - 1) = tolower(v1);
        v1 = *v2++;
      }
      while ( v1 );
    }
  }
  return a1;
}
