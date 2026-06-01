/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: stristr
// Address: 0x00084400

//----- (00084400) --------------------------------------------------------
const char *__fastcall stristr(_BYTE *a1, unsigned __int8 *a2)
{
  int v4; // r5
  const char *v5; // r6
  size_t v6; // r7
  int v7; // r1
  const char *result; // r0
  const char *v9; // r4

  v4 = toupper(*a2);
  v5 = (const char *)(a2 + 1);
  v6 = strlen(v5);
  LOBYTE(v7) = *a1;
  result = nullptr;
  if ( *a1 )
  {
    v9 = a1 + 1;
    while ( toupper((unsigned __int8)v7) != v4 || strncasecmp(v9, v5, v6) )
    {
      v7 = *(unsigned __int8 *)v9++;
      if ( !v7 )
        return nullptr;
    }
    return v9 - 1;
  }
  return result;
}
