/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94760
// Address: 0x00094760

//----- (00094760) --------------------------------------------------------
int __fastcall sub_94760(int a1)
{
  int result; // r0
  int v3; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  v3 = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_94822(v3);
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
