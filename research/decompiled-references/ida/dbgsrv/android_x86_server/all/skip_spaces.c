/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x000B9EE0

//----- (000B9EE0) --------------------------------------------------------
char *__cdecl skip_spaces(char *a1)
{
  char *v1; // esi
  char i; // al

  v1 = a1;
  if ( !a1 )
    return nullptr;
  for ( i = *a1; i >= 0; i = *++v1 )
  {
    if ( !isspace((unsigned __int8)i) )
      break;
  }
  return v1;
}
