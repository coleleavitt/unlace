/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E700
// Address: 0x000000014001E700

//----- (000000014001E700) ----------------------------------------------------
char __fastcall sub_14001E700(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  int v3; // r8d
  unsigned __int64 *i; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( !v2 )
    return 0;
  for ( i = *(unsigned __int64 **)a1; a2 < *i || a2 >= i[1]; i += 3 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return 1;
}
