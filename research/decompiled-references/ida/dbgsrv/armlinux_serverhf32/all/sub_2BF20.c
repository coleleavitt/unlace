/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BF20
// Address: 0x0002BF20

//----- (0002BF20) --------------------------------------------------------
int __fastcall sub_2BF20(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 0x18 )
    sub_22E28();
  return *(_DWORD *)(a1 + 4 * a2 + 28);
}
