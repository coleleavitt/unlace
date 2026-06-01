/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024F40
// Address: 0x0000000100024F40

//----- (0000000100024F40) ----------------------------------------------------
__int64 __fastcall sub_100024F40(__int64 a1)
{
  unsigned __int64 v1; // x8
  __int64 v3; // x21
  __int64 v4; // x8
  unsigned __int8 *v5; // x1
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8
  unsigned __int8 *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  _Unwind_Exception *v14; // x0
  int v15; // w1
  unsigned __int8 v16[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v17; // [xsp+10h] [xbp-60h]
  __int64 v18; // [xsp+18h] [xbp-58h]
  __int64 v19; // [xsp+20h] [xbp-50h]
  unsigned __int8 v20[8]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v21; // [xsp+30h] [xbp-40h]
  __int64 v22; // [xsp+38h] [xbp-38h]
  __int64 v23; // [xsp+40h] [xbp-30h]

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 <= 2 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1439);
    if ( v15 )
      sub_10000150C(v14);
    _Unwind_Resume(v14);
  }
  v3 = *(_QWORD *)(a1 + 424) + 32 * v1;
  if ( !(unsigned int)sub_10003B584((unsigned __int8 *)(v3 - 96)) )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)(v3 - 88) )
    v4 = -64;
  else
    v4 = -32;
  swap_idcvs((__int128 *)(v3 - 96), (__int128 *)(v3 + v4));
  v5 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
  v20[0] = 2;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  copy_idcv(v20, v5);
  v6 = *(_QWORD *)(a1 + 432);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 424);
    v8 = v6 - 1;
    *(_QWORD *)(a1 + 432) = v8;
    free_idcv((unsigned __int8 *)(v7 + 32 * v8));
  }
  free_idcv(v20);
  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
  v16[0] = 2;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  copy_idcv(v16, v9);
  v10 = *(_QWORD *)(a1 + 432);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 424);
    v12 = v10 - 1;
    *(_QWORD *)(a1 + 432) = v12;
    free_idcv((unsigned __int8 *)(v11 + 32 * v12));
  }
  free_idcv(v16);
  return 0;
}
// 10002509C: variable 'v15' is possibly undefined
// 1000250B8: variable 'v14' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
