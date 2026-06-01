/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486D10
// Address: 0x0000000000486D10

//----- (0000000000486D10) ----------------------------------------------------
unsigned __int64 sub_486D10()
{
  return _ReadStatusReg(TPIDR_EL0) + 192;
}
