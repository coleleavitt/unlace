/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: stristr
// Address: 0x000B9C80

//----- (000B9C80) --------------------------------------------------------
const char *__cdecl stristr(_BYTE *a1, const char *a2)
{
  int v2; // esi
  unsigned __int8 v3; // cl
  const char *result; // eax
  const char *v5; // edi
  size_t v6; // [esp+18h] [ebp-14h]

  v2 = toupper(*(unsigned __int8 *)a2);
  v6 = strlen(a2 + 1);
  v3 = *a1;
  result = nullptr;
  if ( *a1 )
  {
    v5 = a1 + 1;
    while ( toupper(v3) != v2 || strncasecmp(v5, a2 + 1, v6) )
    {
      v3 = *v5++;
      if ( !v3 )
        return nullptr;
    }
    return v5 - 1;
  }
  return result;
}
