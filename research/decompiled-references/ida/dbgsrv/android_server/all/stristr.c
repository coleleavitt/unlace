/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: stristr
// Address: 0x00000000000C69E4

//----- (00000000000C69E4) ----------------------------------------------------
const char *__fastcall stristr(_BYTE *a1, unsigned __int8 *a2)
{
  const char *v2; // x19
  int v4; // w20
  size_t v5; // x0
  unsigned __int8 v6; // w8
  size_t v7; // x21
  const char *i; // x22
  int v9; // t1

  v2 = (const char *)(a2 + 1);
  v4 = toupper(*a2);
  v5 = strlen(v2);
  v6 = *a1;
  if ( !*a1 )
    return nullptr;
  v7 = v5;
  for ( i = a1 + 1; toupper(v6) != v4 || strncasecmp(i, v2, v7); ++i )
  {
    v9 = *(unsigned __int8 *)i;
    v6 = v9;
    if ( !v9 )
      return nullptr;
  }
  return i - 1;
}
