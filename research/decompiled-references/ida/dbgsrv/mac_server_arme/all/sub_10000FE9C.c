/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FE9C
// Address: 0x000000010000FE9C

//----- (000000010000FE9C) ----------------------------------------------------
__int64 __fastcall sub_10000FE9C(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned __int64 *v3; // x1
  __int64 v4; // x2
  int v5; // w3

  if ( *(_QWORD *)(a1 + 120) != -1 )
    return a1 + 164;
  if ( under_debugger == 1 )
    __break(1u);
  interr(20005);
  return sub_10000FEDC(v2, v3, v4, v5);
}
// 10000FED9: variable 'v2' is possibly undefined
// 10000FED9: variable 'v3' is possibly undefined
// 10000FED9: variable 'v4' is possibly undefined
// 10000FED9: variable 'v5' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
