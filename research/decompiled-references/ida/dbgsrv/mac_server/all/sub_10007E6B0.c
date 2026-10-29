/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E6B0
// Address: 0x000000010007E6B0

//----- (000000010007E6B0) ----------------------------------------------------
void *sub_10007E6B0()
{
  void *v1; // r14

  if ( !(_BYTE)byte_1000AED18 && __cxa_guard_acquire(&byte_1000AED18) )
  {
    v1 = operator new(0x50u);
    sub_10007DDF0((__int64)v1);
    qword_1000AED10 = v1;
    __cxa_guard_release(&byte_1000AED18);
  }
  sub_10007E3B0(qword_1000AED10);
  return qword_1000AED10;
}
