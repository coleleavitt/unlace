/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: trim
// Address: 0x000B9E80

//----- (000B9E80) --------------------------------------------------------
char *__cdecl trim(char *s)
{
  char *v1; // ecx
  size_t v2; // eax
  char *v3; // esi
  char *v4; // edi
  int v5; // eax

  v1 = s;
  if ( s )
  {
    v2 = strlen(s);
    v1 = s;
    v3 = &s[v2];
    do
    {
      v4 = v3;
      if ( v3 <= v1 )
        break;
      if ( *(v3 - 1) < 0 )
        break;
      --v3;
      v5 = isspace((unsigned __int8)*(v4 - 1));
      v1 = s;
    }
    while ( v5 );
    *v4 = 0;
  }
  return v1;
}
