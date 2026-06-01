/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: trim
// Address: 0x00000000000C6B94

//----- (00000000000C6B94) ----------------------------------------------------
char *__fastcall trim(char *s)
{
  char *v2; // x21
  char *v3; // x20

  if ( s )
  {
    v2 = &s[strlen(s)];
    do
    {
      v3 = v2;
      if ( v2 <= s )
        break;
      --v2;
      if ( *(v3 - 1) < 0 )
        break;
    }
    while ( isspace((unsigned __int8)*(v3 - 1)) );
    *v3 = 0;
  }
  return s;
}
