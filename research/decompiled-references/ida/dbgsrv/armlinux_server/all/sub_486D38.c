/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486D38
// Address: 0x0000000000486D38

//----- (0000000000486D38) ----------------------------------------------------
unsigned __int64 sub_486D38()
{
  return _ReadStatusReg(TPIDR_EL0) + 216;
}
