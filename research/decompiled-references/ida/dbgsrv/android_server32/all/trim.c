/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: trim
// Address: 0x0008451C

//----- (0008451C) --------------------------------------------------------
char *__fastcall trim(char *s)
{
  char *v2; // r7
  char *v3; // r6

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
