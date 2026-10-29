/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA680
// Address: 0x00000000000AA680

//----- (00000000000AA680) ----------------------------------------------------
__int64 __fastcall sub_AA680(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  unsigned __int64 v4; // rbx

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  while ( strcmp(*(const char **)(v3 + 8), a2) )
  {
    ++v4;
    v3 += 24;
    if ( v4 >= v2 )
      return 0;
  }
  return v3;
}
