/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54394
// Address: 0x00054394

//----- (00054394) --------------------------------------------------------
int __fastcall sub_54394(int a1)
{
  int v1; // r5
  int v2; // r3

  v1 = 1;
  v2 = *(_DWORD *)(a1 + 36);
  if ( !v2 )
    return v1;
  v1 = sub_5A950(a1, *(int **)(a1 + 32), *(char ***)(a1 + 44), v2);
  if ( !*(_DWORD *)(a1 + 36) )
    return v1;
  sub_52EE8(a1);
  return v1;
}
