/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A58E8
// Address: 0x00000000000A58E8

//----- (00000000000A58E8) ----------------------------------------------------
__int64 __fastcall sub_A58E8(__int64 a1, char *s2)
{
  unsigned __int64 v2; // x21
  __int64 v3; // x19
  unsigned __int64 v5; // x22

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 72);
  v5 = 0;
  while ( strcmp(*(const char **)(v3 + 8), s2) )
  {
    ++v5;
    v3 += 24;
    if ( v5 >= v2 )
      return 0;
  }
  return v3;
}
