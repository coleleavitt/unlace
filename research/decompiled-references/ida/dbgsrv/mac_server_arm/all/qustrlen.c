/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x0000000100066D08

//----- (0000000100066D08) ----------------------------------------------------
__int64 __fastcall qustrlen(char *a1)
{
  __int64 v1; // x19
  int utf8_char; // w0
  char *v3; // x8
  char *v5; // [xsp+0h] [xbp-20h] BYREF

  v5 = a1;
  if ( !*a1 )
    return 0;
  v1 = 0;
  do
  {
    utf8_char = get_utf8_char(&v5);
    v3 = v5;
    if ( utf8_char == -1 )
      v3 = ++v5;
    ++v1;
  }
  while ( *v3 );
  return v1;
}
