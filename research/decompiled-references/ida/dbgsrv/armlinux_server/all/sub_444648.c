/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444648
// Address: 0x0000000000444648

//----- (0000000000444648) ----------------------------------------------------
__int64 __fastcall sub_444648(__int64 a1, int a2)
{
  __int64 v2; // x1

  v2 = (unsigned int)(a2 + *(_DWORD *)(a1 + 96));
  if ( (int)v2 < 0 || (v2 = (int)v2, (unsigned __int64)(int)v2 >= *(_QWORD *)(a1 + 32)) )
  {
    a1 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(287);
    __break(0x3E8u);
  }
  return *(_QWORD *)(a1 + 24) + 32 * v2;
}
// 52451C: using guessed type char under_debugger;
