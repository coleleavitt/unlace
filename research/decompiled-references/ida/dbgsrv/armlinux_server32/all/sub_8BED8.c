/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BED8
// Address: 0x0008BED8

//----- (0008BED8) --------------------------------------------------------
bool __fastcall sub_8BED8(unsigned int *a1, unsigned int a2)
{
  return *a1 > a2 || a2 > a1[1] + *a1;
}
