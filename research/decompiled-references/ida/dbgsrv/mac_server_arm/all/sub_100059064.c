/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059064
// Address: 0x0000000100059064

//----- (0000000100059064) ----------------------------------------------------
__int64 __fastcall sub_100059064(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x1

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 32) == -1 )
        return sub_100004854(result, "%a: %s (exc.code %x, tid %d)\n", a3, a4, a5, a6, a7, a8, v8);
      else
        return sub_100004854(result, "%a: %s -> %a (exc.code %x, tid %d)\n", a3, a4, a5, a6, a7, a8, v8);
    }
    else
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(3299);
      return sub_100059130(v9, v10);
    }
  }
  return result;
}
// 10005912D: variable 'v9' is possibly undefined
// 10005912D: variable 'v10' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
