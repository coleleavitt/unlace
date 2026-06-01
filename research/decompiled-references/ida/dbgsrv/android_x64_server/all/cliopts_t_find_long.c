/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_long
// Address: 0x00000000000B32B0

//----- (00000000000B32B0) ----------------------------------------------------
__int64 __fastcall cliopts_t_find_long(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  const char *v5; // rdi

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(const char **)(v3 + 8);
    if ( v5 )
    {
      if ( !strcmp(v5, a2) )
        break;
    }
    ++v4;
    v3 += 40;
    if ( v4 >= v2 )
      return 0;
  }
  return v3;
}
