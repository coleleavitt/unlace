/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60040
// Address: 0x0000000000060040

//----- (0000000000060040) ----------------------------------------------------
__int64 __fastcall sub_60040(_QWORD *a1)
{
  unsigned __int64 v1; // x22
  __int64 v2; // x23
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v16[4]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v17[5]; // [xsp+28h] [xbp-58h] BYREF

  v17[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = a1[54];
  if ( v1 <= 2 )
  {
    if ( !under_debugger )
      interr(1439);
    __break(1u);
    sub_39134(a1);
  }
  v2 = a1[53];
  if ( (sub_7785C((__int64 *)(v2 + 32 * (v1 - 3))) & 1) == 0 )
    return 0xFFFFFFFFLL;
  v4 = -2;
  if ( !*(_QWORD *)(v2 + 32 * (v1 - 3) + 8) )
    v4 = -1;
  swap_idcvs((__int128 *)(v2 + 32 * (v1 - 3)), (__int128 *)(v2 + 32 * (v4 + v1)));
  v5 = a1[53];
  v6 = a1[54];
  LOBYTE(v17[0]) = 2;
  memset(&v17[1], 0, 24);
  copy_idcv((unsigned __int8 *)v17, (unsigned __int8 *)(v5 + 32 * v6 - 32));
  v7 = a1[54];
  if ( v7 )
  {
    v8 = a1[53];
    v9 = v7 - 1;
    a1[54] = v9;
    free_idcv((__int64 *)(v8 + 32 * v9));
  }
  free_idcv(v17);
  v10 = a1[53];
  v11 = a1[54];
  LOBYTE(v16[0]) = 2;
  memset(&v16[1], 0, 24);
  copy_idcv((unsigned __int8 *)v16, (unsigned __int8 *)(v10 + 32 * v11 - 32));
  v12 = a1[54];
  if ( v12 )
  {
    v13 = a1[53];
    v14 = v12 - 1;
    a1[54] = v14;
    free_idcv((__int64 *)(v13 + 32 * v14));
  }
  free_idcv(v16);
  return 0;
}
// 168DF0: using guessed type char under_debugger;
