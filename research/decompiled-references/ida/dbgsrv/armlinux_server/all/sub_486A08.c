/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486A08
// Address: 0x0000000000486A08

//----- (0000000000486A08) ----------------------------------------------------
__int64 __fastcall sub_486A08(unsigned int a1, __int64 a2)
{
  if ( a1 > 3 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(480);
    __break(0x3E8u);
  }
  *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 16 + 8LL * (int)a1) = a2;
  return 16;
}
// 52451C: using guessed type char under_debugger;
