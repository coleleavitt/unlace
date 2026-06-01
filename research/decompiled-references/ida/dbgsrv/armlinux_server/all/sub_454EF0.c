/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454EF0
// Address: 0x0000000000454EF0

//----- (0000000000454EF0) ----------------------------------------------------
__int64 __fastcall sub_454EF0(__int64 a1)
{
  __int64 v1; // x19

  if ( *(_BYTE *)(a1 + 760) )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(302);
  }
  v1 = *(_QWORD *)(a1 + 696);
  *(_QWORD *)(a1 + 696) = 0;
  sub_454820(a1, 0, 0);
  return v1;
}
// 52451C: using guessed type char under_debugger;
