/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B80
// Address: 0x0000000000477B80

//----- (0000000000477B80) ----------------------------------------------------
__int64 __fastcall sub_477B80(__int64 a1, char *s2)
{
  __int64 v2; // x22
  __int64 v3; // x20
  __int64 v5; // x2
  __int64 v6; // x19

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return 0;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    ++v3;
    v6 = v5;
    if ( !strcmp(*(const char **)(v5 + 8), s2) )
      break;
    v5 = v6 + 24;
    if ( v3 == v2 )
      return 0;
  }
  return v6;
}
