/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4815D8
// Address: 0x00000000004815D8

//----- (00000000004815D8) ----------------------------------------------------
__int64 __fastcall sub_4815D8(__int64 *a1, char *s2)
{
  __int64 v2; // x23
  __int64 v4; // x20
  __int64 v5; // x19
  const char *v6; // x2
  __int64 v7; // x22

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = *a1;
  while ( 1 )
  {
    v6 = *(const char **)(v5 + 8);
    v7 = v5;
    ++v4;
    v5 += 40;
    if ( v6 )
    {
      if ( !strcmp(v6, s2) )
        break;
    }
    if ( v4 == v2 )
      return 0;
  }
  return v7;
}
