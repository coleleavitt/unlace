/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_291B0
// Address: 0x000291B0

//----- (000291B0) --------------------------------------------------------
char __cdecl sub_291B0(int a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(a1 + 40);
  if ( (v1 & 0x3F) == 0 )
    return 0;
  *(_BYTE *)(a1 + 3440) = (v1 & 3) != 0;
  *(_BYTE *)(a1 + 3441) = (v1 & 0xC) != 0;
  *(_BYTE *)(a1 + 3442) = (v1 & 0x10) != 0;
  *(_BYTE *)(a1 + 3443) = (v1 & 0x20) != 0;
  return 1;
}
