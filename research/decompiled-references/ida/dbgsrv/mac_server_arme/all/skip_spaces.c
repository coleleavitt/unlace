/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: skip_spaces
// Address: 0x000000010007961C

//----- (000000010007961C) ----------------------------------------------------
char *__fastcall skip_spaces(char *result)
{
  __int64 v1; // x9
  int v2; // t1

  if ( result && (*result & 0x80000000) == 0 )
  {
    v1 = (unsigned __int8)*result;
    do
    {
      if ( (_DefaultRuneLocale.__runetype[v1] & 0x4000) == 0 )
        break;
      v2 = *++result;
      v1 = (unsigned __int8)v2;
    }
    while ( (v2 & 0x80000000) == 0 );
  }
  return result;
}
