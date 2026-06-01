/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strarray
// Address: 0x000B9D20

//----- (000B9D20) --------------------------------------------------------
char *__cdecl strarray(int a1, int a2, int a3)
{
  char *result; // eax
  unsigned int i; // esi

  result = &byte_DCEE2;
  if ( a1 && a2 > 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      if ( *(_DWORD *)(a1 + 8 * i) == a3 )
        return *(char **)(a1 + 8 * i + 4);
    }
    if ( !*(_DWORD *)(a1 + 8 * a2 - 8) )
      return *(char **)(a1 + 8 * a2 - 4);
  }
  return result;
}
// DCEE2: using guessed type char byte_DCEE2;
