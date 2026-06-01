/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94786
// Address: 0x00094786

//----- (00094786) --------------------------------------------------------
int __fastcall sub_94786(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  v3 = *(unsigned __int8 **)(a1 + 12);
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_94836(v3);
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
