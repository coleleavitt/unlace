/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: trim
// Address: 0x00000000000CC310

//----- (00000000000CC310) ----------------------------------------------------
char *__fastcall trim(char *s)
{
  char *v2; // r15
  char *v3; // rbx
  int v4; // edi

  if ( s )
  {
    v2 = &s[strlen(s)];
    do
    {
      v3 = v2;
      if ( v2 <= s )
        break;
      v4 = (unsigned __int8)*(v2 - 1);
      if ( (v4 & 0x80u) != 0 )
        break;
      --v2;
    }
    while ( isspace(v4) );
    *v3 = 0;
  }
  return s;
}
