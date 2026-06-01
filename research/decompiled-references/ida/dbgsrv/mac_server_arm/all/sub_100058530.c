/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058530
// Address: 0x0000000100058530

//----- (0000000100058530) ----------------------------------------------------
__int64 __fastcall sub_100058530(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // x22
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  unsigned __int64 *v20; // x23
  __int64 v21; // x9
  __int64 v22; // x11
  _QWORD *i; // x10
  __int64 v25; // x0
  int v26; // w1
  unsigned __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v11 = *(_QWORD *)(a2 + 32);
  if ( v11 == -1 )
  {
    v12 = 24;
    if ( *(_QWORD *)(a2 + 24) == -1 )
      v12 = 8;
    v11 = *(_QWORD *)(a2 + v12);
  }
  v13 = sub_100058364((__int64)a1, *(_DWORD *)(a2 + 4), v11, a4, a5, a6, a7, a8);
  if ( !v13 )
    return 0;
  v20 = (unsigned __int64 *)v13;
  sub_1000560A0((__int64)a1, "%a: bptcnd yielded false\n", v14, v15, v16, v17, v18, v19, v11);
  *(_BYTE *)(a2 + 16) = 1;
  v21 = a1[45];
  if ( (v21 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v22 = 8 * v21;
    for ( i = (_QWORD *)a1[44]; v11 != *i; ++i )
    {
      v22 -= 8;
      if ( !v22 )
        return sub_100057E44(a1, v20, a2, a3);
    }
  }
  else
  {
    i = (_QWORD *)a1[44];
  }
  if ( i == (_QWORD *)(a1[44] + 8 * v21) )
    return sub_100057E44(a1, v20, a2, a3);
  if ( under_debugger == 1 )
    __break(1u);
  interr(617);
  return sub_100058660(v25, v26, v27, v28, v29, v30, v31, v32);
}
// 1000585B0: variable 'v14' is possibly undefined
// 1000585B0: variable 'v15' is possibly undefined
// 1000585B0: variable 'v16' is possibly undefined
// 1000585B0: variable 'v17' is possibly undefined
// 1000585B0: variable 'v18' is possibly undefined
// 1000585B0: variable 'v19' is possibly undefined
// 10005865D: variable 'v25' is possibly undefined
// 10005865D: variable 'v26' is possibly undefined
// 10005865D: variable 'v27' is possibly undefined
// 10005865D: variable 'v28' is possibly undefined
// 10005865D: variable 'v29' is possibly undefined
// 10005865D: variable 'v30' is possibly undefined
// 10005865D: variable 'v31' is possibly undefined
// 10005865D: variable 'v32' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
