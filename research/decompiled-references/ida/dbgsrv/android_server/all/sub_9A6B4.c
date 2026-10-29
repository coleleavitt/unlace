/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A6B4
// Address: 0x000000000009A6B4

//----- (000000000009A6B4) ----------------------------------------------------
__int64 __fastcall sub_9A6B4(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // x8
  int v6; // w8

  v4 = *(_QWORD *)(a1 + 552);
  if ( v4 )
  {
    if ( v4 > a2 )
      return *(_QWORD *)(a1 + 544) + 32LL * a2;
  }
  else
  {
    sub_3B1DC("debmod_t::get_reginfo is not implemented");
  }
  if ( !under_debugger )
    interr(3256);
  __break(1u);
  v6 = *(_DWORD *)(a3 + 20) & 0xFFFFFFF;
  if ( v6 != 5 )
  {
    if ( v6 != 7 )
      return 0;
    if ( *(_QWORD *)(a3 + 32) == a4 )
      return 1;
  }
  return *(_QWORD *)(a3 + 8) == a4;
}
// 9A704: variable 'a3' is possibly undefined
// 9A724: variable 'a4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
