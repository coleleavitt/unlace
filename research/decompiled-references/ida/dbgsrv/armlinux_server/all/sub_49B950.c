/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B950
// Address: 0x000000000049B950

//----- (000000000049B950) ----------------------------------------------------
const char *__fastcall sub_49B950(const char *a1, unsigned __int8 *a2)
{
  const char *v2; // x19
  const char *v3; // x20
  const char *v4; // x22
  int v5; // w21
  size_t v6; // x23
  int v7; // w0

  v2 = a1;
  v3 = a1 + 1;
  v4 = (const char *)(a2 + 1);
  v5 = toupper(*a2);
  v6 = strlen(v4);
  v7 = *(unsigned __int8 *)v2;
  if ( !*v2 )
    return nullptr;
  while ( v5 != toupper(v7) || strncasecmp(v3, v4, v6) )
  {
    v2 = v3++;
    v7 = *(unsigned __int8 *)v2;
    if ( !*v2 )
      return nullptr;
  }
  return v2;
}
