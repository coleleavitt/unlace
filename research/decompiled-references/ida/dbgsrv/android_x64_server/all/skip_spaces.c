/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x00000000000CC360

//----- (00000000000CC360) ----------------------------------------------------
char *__fastcall skip_spaces(char *a1)
{
  char *v1; // rbx
  char i; // al

  if ( !a1 )
    return nullptr;
  v1 = a1;
  for ( i = *a1; i >= 0; i = *++v1 )
  {
    if ( !isspace((unsigned __int8)i) )
      break;
  }
  return v1;
}
