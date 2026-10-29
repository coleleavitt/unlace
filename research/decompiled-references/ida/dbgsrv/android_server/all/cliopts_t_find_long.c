/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_find_long
// Address: 0x00000000000AEA40

//----- (00000000000AEA40) ----------------------------------------------------
__int64 __fastcall cliopts_t_find_long(__int64 *a1, char *s2)
{
  unsigned __int64 v2; // x21
  __int64 v3; // x19
  unsigned __int64 v5; // x22
  const char *v6; // x0

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *a1;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(const char **)(v3 + 8);
    if ( v6 )
    {
      if ( !strcmp(v6, s2) )
        break;
    }
    ++v5;
    v3 += 40;
    if ( v5 >= v2 )
      return 0;
  }
  return v3;
}
