/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BEB0
// Address: 0x000000000045BEB0

//----- (000000000045BEB0) ----------------------------------------------------
__int64 __fastcall sub_45BEB0(__int64 a1, int a2)
{
  unsigned __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 680);
  if ( !v2 )
    sub_40A608("debmod_t::get_reginfo is not implemented");
  if ( a2 >= v2 )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3256);
    __break(0x3E8u);
  }
  return *(_QWORD *)(a1 + 672) + 32LL * a2;
}
// 52451C: using guessed type char under_debugger;
