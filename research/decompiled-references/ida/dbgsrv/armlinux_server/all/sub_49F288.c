/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F288
// Address: 0x000000000049F288

//----- (000000000049F288) ----------------------------------------------------
unsigned __int64 sub_49F288()
{
  return _ReadStatusReg(TPIDR_EL0) + 272;
}
