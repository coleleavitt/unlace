/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A950
// Address: 0x0005A950

//----- (0005A950) --------------------------------------------------------
int __fastcall sub_5A950(int a1, int *a2, char **a3, int a4)
{
  int v4; // r0

  v4 = *(_DWORD *)(a1 + 248);
  if ( v4 )
    v4 -= 100;
  return sub_59E50(v4, a2, a3, a4);
}
