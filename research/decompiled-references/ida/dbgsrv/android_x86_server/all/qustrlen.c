/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrlen
// Address: 0x000A2CD0

//----- (000A2CD0) --------------------------------------------------------
int __cdecl qustrlen(_BYTE *a1)
{
  int v1; // esi
  bool v2; // zf
  _BYTE *v3; // eax

  if ( !*a1 )
    return 0;
  v1 = 0;
  do
  {
    v2 = get_utf8_char(&a1) == -1;
    v3 = a1;
    if ( v2 )
      v3 = ++a1;
    ++v1;
  }
  while ( *v3 );
  return v1;
}
