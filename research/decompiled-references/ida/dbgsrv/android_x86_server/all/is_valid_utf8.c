/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_valid_utf8
// Address: 0x000A2880

//----- (000A2880) --------------------------------------------------------
char __cdecl is_valid_utf8(_BYTE *a1)
{
  char result; // al

  result = 1;
  if ( *a1 )
  {
    while ( get_utf8_char(&a1) != -1 )
    {
      if ( !*a1 )
        return 1;
    }
    return 0;
  }
  return result;
}
