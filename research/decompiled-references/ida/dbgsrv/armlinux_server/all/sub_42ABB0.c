/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42ABB0
// Address: 0x000000000042ABB0

//----- (000000000042ABB0) ----------------------------------------------------
__int64 __fastcall sub_42ABB0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 *v4; // x2

  if ( a3 == 1 )
  {
    v4 = (__int64 *)(a1 + 320);
  }
  else
  {
    if ( a3 != 2 )
    {
      a1 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(20086);
      __break(0x3E8u);
    }
    v4 = (__int64 *)(a1 + 352);
  }
  return sub_42AA98(a1, a2, v4, a4);
}
// 52451C: using guessed type char under_debugger;
