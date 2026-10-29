/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366AC
// Address: 0x000366AC

//----- (000366AC) --------------------------------------------------------
int __fastcall sub_366AC(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
    v2 = **(unsigned __int8 **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}
