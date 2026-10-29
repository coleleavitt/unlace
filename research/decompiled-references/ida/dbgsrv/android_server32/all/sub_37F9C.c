/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37F9C
// Address: 0x00037F9C

//----- (00037F9C) --------------------------------------------------------
int __fastcall sub_37F9C(int a1, int a2)
{
  int v2; // r2
  int v3; // r0

  v2 = *(_DWORD *)(a1 + 12);
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}
