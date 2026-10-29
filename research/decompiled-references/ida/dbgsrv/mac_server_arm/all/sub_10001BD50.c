/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BD50
// Address: 0x000000010001BD50

//----- (000000010001BD50) ----------------------------------------------------
__int64 __fastcall sub_10001BD50(__int64 a1)
{
  __int64 v3; // x0

  set_debug_event_code(a1, 5);
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5 )
    return a1 + 24;
  if ( under_debugger == 1 )
    __break(1u);
  interr(3298);
  return sub_10001BDA8(v3);
}
// 10001BDA5: variable 'v3' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
