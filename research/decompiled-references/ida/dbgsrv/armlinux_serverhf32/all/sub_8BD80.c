/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BD80
// Address: 0x0008BD80

//----- (0008BD80) --------------------------------------------------------
unsigned int __fastcall sub_8BD80(int a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(a1 + 4) - a2;
  if ( result >= a3 )
    return a3;
  return result;
}
