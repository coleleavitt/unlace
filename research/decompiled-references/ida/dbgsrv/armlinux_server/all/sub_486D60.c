/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486D60
// Address: 0x0000000000486D60

//----- (0000000000486D60) ----------------------------------------------------
unsigned __int64 sub_486D60()
{
  return _ReadStatusReg(TPIDR_EL0) + 240;
}
