/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432EB0
// Address: 0x0000000000432EB0

//----- (0000000000432EB0) ----------------------------------------------------
__int64 __fastcall sub_432EB0(__int64 a1)
{
  unsigned __int64 v2; // x0
  __int64 v3; // x22
  __int64 v4; // x20
  unsigned __int64 v5; // x23
  _QWORD *v6; // x1
  _QWORD *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v19; // [xsp+38h] [xbp-28h] BYREF
  __int64 v20; // [xsp+40h] [xbp-20h]
  __int64 v21; // [xsp+48h] [xbp-18h]
  __int64 v22; // [xsp+50h] [xbp-10h]

  v2 = *(_QWORD *)(a1 + 432);
  if ( v2 <= 2 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1439);
  }
  v3 = *(_QWORD *)(a1 + 424);
  v4 = 32 * (v2 - 3);
  v5 = v3 + v4;
  if ( !(unsigned __int8)sub_449FB8((unsigned __int8 *)(v3 + v4)) )
    return 0xFFFFFFFFLL;
  v6 = (_QWORD *)(v3 + v4 + 32);
  v7 = (_QWORD *)(v3 + v4 + 64);
  if ( !*(_QWORD *)(v5 + 8) )
    v6 = v7;
  sub_444078(v5, v6);
  v9 = *(_QWORD *)(a1 + 424);
  v8 = *(_QWORD *)(a1 + 432);
  LOBYTE(v19) = 2;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  sub_4488B8(&v19, (__int64 *)(v9 + 32 * v8 - 32));
  v10 = *(_QWORD *)(a1 + 432);
  if ( v10 )
  {
    v11 = v10 - 1;
    v12 = *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 432) = v11;
    sub_448310((__int64 *)(v12 + 32 * v11));
  }
  sub_448310(&v19);
  v14 = *(_QWORD *)(a1 + 424);
  v13 = *(_QWORD *)(a1 + 432);
  v20 = 0;
  v21 = 0;
  LOBYTE(v19) = 2;
  v22 = 0;
  sub_4488B8(&v19, (__int64 *)(v14 + 32 * v13 - 32));
  v15 = *(_QWORD *)(a1 + 432);
  if ( v15 )
  {
    v16 = v15 - 1;
    v17 = *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 432) = v16;
    sub_448310((__int64 *)(v17 + 32 * v16));
  }
  sub_448310(&v19);
  return 0;
}
// 52451C: using guessed type char under_debugger;
