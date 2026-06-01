/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x00084556

//----- (00084556) --------------------------------------------------------
char *__fastcall skip_spaces(char *a1)
{
  char *v1; // r4
  int v2; // r1

  v1 = nullptr;
  if ( a1 )
  {
    v2 = *a1;
    v1 = a1;
    if ( v2 >= 0 )
    {
      do
      {
        if ( !isspace((unsigned __int8)v2) )
          break;
        v2 = *++v1;
      }
      while ( v2 > -1 );
    }
  }
  return v1;
}
