/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400576B0
// Address: 0x00000001400576B0

//----- (00000001400576B0) ----------------------------------------------------
char *__fastcall sub_1400576B0(char *Source)
{
  size_t v2; // rsi
  char *v3; // rax
  char *v4; // rdi

  if ( !Source )
    return nullptr;
  v2 = strlen(Source) + 1;
  v3 = (char *)j__calloc_base(1u, v2);
  v4 = v3;
  if ( !v3 )
    return nullptr;
  strcpy_s(v3, v2, Source);
  return v4;
}
