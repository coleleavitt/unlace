/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4869A0
// Address: 0x00000000004869A0

//----- (00000000004869A0) ----------------------------------------------------
__int64 sub_4869A0()
{
  return *(unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 264);
}
