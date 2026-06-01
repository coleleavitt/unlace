/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BD8C
// Address: 0x0008BD8C

//----- (0008BD8C) --------------------------------------------------------
bool __fastcall sub_8BD8C(unsigned int *a1, unsigned int a2)
{
  return *a1 > a2 || a2 > a1[1] + *a1;
}
