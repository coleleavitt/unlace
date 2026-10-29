/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: stristr
// Address: 0x00000000000CC150

//----- (00000000000CC150) ----------------------------------------------------
const char *__fastcall stristr(_BYTE *a1, const char *a2)
{
  int v2; // ebp
  size_t v3; // r12
  unsigned __int8 v4; // al
  const char *v5; // rbx
  __int64 v6; // r15

  v2 = toupper(*(unsigned __int8 *)a2);
  v3 = strlen(a2 + 1);
  v4 = *a1;
  if ( !*a1 )
    return nullptr;
  v5 = a1 + 1;
  v6 = 0;
  while ( toupper(v4) != v2 || strncasecmp(v5, a2 + 1, v3) )
  {
    v4 = *v5++;
    if ( !v4 )
      return (const char *)v6;
  }
  return v5 - 1;
}
