/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486CC0
// Address: 0x0000000000486CC0

//----- (0000000000486CC0) ----------------------------------------------------
unsigned __int64 sub_486CC0()
{
  return _ReadStatusReg(TPIDR_EL0) + 144;
}
