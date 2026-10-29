/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x0000000100081B80

//----- (0000000100081B80) ----------------------------------------------------
char *__fastcall skip_spaces(char *a1)
{
  char *result; // rax
  char i; // dl

  if ( !a1 )
    return nullptr;
  result = a1;
  for ( i = *a1; i >= 0; i = *++result )
  {
    if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)i] & 0x4000) == 0 )
      break;
  }
  return result;
}
