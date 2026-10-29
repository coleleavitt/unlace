/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F2B0
// Address: 0x000000000049F2B0

//----- (000000000049F2B0) ----------------------------------------------------
unsigned __int64 sub_49F2B0()
{
  return _ReadStatusReg(TPIDR_EL0) + 272;
}
