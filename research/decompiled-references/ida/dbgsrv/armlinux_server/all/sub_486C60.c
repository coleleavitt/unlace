/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486C60
// Address: 0x0000000000486C60

//----- (0000000000486C60) ----------------------------------------------------
__int64 __fastcall sub_486C60(unsigned int a1)
{
  if ( a1 > 3 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(483);
    __break(0x3E8u);
  }
  return *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 16 + 24LL * (int)a1 + 32);
}
// 52451C: using guessed type char under_debugger;
