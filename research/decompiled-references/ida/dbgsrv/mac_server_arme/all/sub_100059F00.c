/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059F00
// Address: 0x0000000100059F00

//----- (0000000100059F00) ----------------------------------------------------
__int64 __fastcall sub_100059F00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // x8
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  char vars0; // [xsp+0h] [xbp+0h]

  v8 = *(_QWORD *)(a1 + 552);
  if ( v8 )
  {
    if ( v8 > (int)a2 )
      return *(_QWORD *)(a1 + 544) + 32LL * (int)a2;
  }
  else
  {
    sub_10002EBB8("debmod_t::get_reginfo is not implemented", a2, a3, a4, a5, a6, a7, a8, vars0);
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(3256);
  return sub_100059F5C(v10, v11, v12, v13);
}
// 100059F38: variable 'vars0' is possibly undefined
// 100059F59: variable 'v10' is possibly undefined
// 100059F59: variable 'v11' is possibly undefined
// 100059F59: variable 'v12' is possibly undefined
// 100059F59: variable 'v13' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
