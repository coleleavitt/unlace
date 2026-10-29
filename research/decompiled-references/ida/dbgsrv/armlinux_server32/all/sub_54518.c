/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54518
// Address: 0x00054518

//----- (00054518) --------------------------------------------------------
int __fastcall sub_54518(int a1)
{
  int v1; // r5
  int v2; // r3

  v1 = 1;
  v2 = *(_DWORD *)(a1 + 36);
  if ( !v2 )
    return v1;
  v1 = sub_5AAD4(a1, *(int **)(a1 + 32), *(char ***)(a1 + 44), v2);
  if ( !*(_DWORD *)(a1 + 36) )
    return v1;
  sub_5306C(a1);
  return v1;
}
