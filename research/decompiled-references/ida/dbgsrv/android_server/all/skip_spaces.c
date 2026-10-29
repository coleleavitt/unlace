/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x00000000000C6BE8

//----- (00000000000C6BE8) ----------------------------------------------------
char *__fastcall skip_spaces(char *a1)
{
  char *v1; // x19
  int v2; // w8
  int v3; // t1

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( (v2 & 0x80000000) == 0 )
    {
      do
      {
        if ( !isspace((unsigned __int8)v2) )
          break;
        v3 = *++v1;
        LOBYTE(v2) = v3;
      }
      while ( (v3 & 0x80000000) == 0 );
    }
  }
  return v1;
}
