/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005BC60
// Address: 0x000000010005BC60

//----- (000000010005BC60) ----------------------------------------------------
__int64 __fastcall sub_10005BC60(
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
  _QWORD *v20; // x23
  __int64 v21; // x9
  __int64 v22; // x11
  _QWORD *v23; // x10
  __int64 v25; // x0
  int v26; // w1
  unsigned __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  __int64 _48; // [xsp+48h] [xbp+8h]

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
  v13 = sub_10005BA90((__int64)a1, *(_DWORD *)(a2 + 4), v11, a4, a5, a6, a7, a8);
  if ( !v13 )
    return 0;
  v20 = (_QWORD *)v13;
  sub_1000593FC((__int64)a1, "%a: bptcnd yielded false\n", v14, v15, v16, v17, v18, v19, v11);
  *(_BYTE *)(a2 + 16) = 1;
  v21 = a1[45];
  if ( (v21 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v22 = 8 * v21;
    v23 = (_QWORD *)a1[44];
    while ( v11 != *v23 )
    {
      ++v23;
      v22 -= 8;
      if ( !v22 )
        goto LABEL_15;
    }
  }
  else
  {
    v23 = (_QWORD *)a1[44];
  }
  if ( v23 == (_QWORD *)(a1[44] + 8 * v21) )
  {
LABEL_15:
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10005B470(a1, v20, a2, a3);
  }
  else
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(617);
    return sub_10005BDA4(v25, v26, v27, v28, v29, v30, v31, v32);
  }
}
// 10005BCE4: variable 'v14' is possibly undefined
// 10005BCE4: variable 'v15' is possibly undefined
// 10005BCE4: variable 'v16' is possibly undefined
// 10005BCE4: variable 'v17' is possibly undefined
// 10005BCE4: variable 'v18' is possibly undefined
// 10005BCE4: variable 'v19' is possibly undefined
// 10005BD74: variable '_48' is possibly undefined
// 10005BDA1: variable 'v25' is possibly undefined
// 10005BDA1: variable 'v26' is possibly undefined
// 10005BDA1: variable 'v27' is possibly undefined
// 10005BDA1: variable 'v28' is possibly undefined
// 10005BDA1: variable 'v29' is possibly undefined
// 10005BDA1: variable 'v30' is possibly undefined
// 10005BDA1: variable 'v31' is possibly undefined
// 10005BDA1: variable 'v32' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
