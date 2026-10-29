/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433220
// Address: 0x0000000000433220

//----- (0000000000433220) ----------------------------------------------------
__int64 __fastcall sub_433220(__int64 a1)
{
  unsigned int v2; // w0
  __int64 v3; // x20
  char *v4; // x4
  __int64 v5; // x0
  char *v6; // x0
  __int64 *v7; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // [xsp+38h] [xbp-48h] BYREF
  __int64 v12; // [xsp+40h] [xbp-40h] BYREF
  __int64 v13; // [xsp+48h] [xbp-38h]
  __int64 v14; // [xsp+50h] [xbp-30h]
  __int64 v15[4]; // [xsp+58h] [xbp-28h] BYREF

  v12 = 0;
  v13 = 0;
  LOBYTE(v11) = 2;
  v2 = *(unsigned __int16 *)(a1 + 64);
  v14 = 0;
  if ( v2 != 5 )
  {
    if ( v2 > 5 )
    {
      if ( v2 == 7 )
      {
        sub_448310(&v11);
        v9 = *(_QWORD *)(a1 + 88);
        v10 = *(_QWORD *)(a1 + 96);
        LOBYTE(v11) = 3;
        v12 = v9;
        v13 = v10;
        goto LABEL_6;
      }
      if ( v2 == 8 )
      {
        v3 = *(_QWORD *)(a1 + 88);
        sub_448310(&v11);
        LOBYTE(v11) = 9;
        v12 = v3;
        goto LABEL_6;
      }
LABEL_13:
      if ( !under_debugger )
        sub_492270(1438);
      __break(0x3E8u);
      goto LABEL_15;
    }
    if ( v2 != 3 )
    {
      if ( v2 == 4 )
      {
        sub_448310(&v11);
        LOBYTE(v11) = 7;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        sub_433020((__int64)&v12, a1 + 40);
        goto LABEL_6;
      }
      goto LABEL_13;
    }
  }
LABEL_15:
  v12 = *(_QWORD *)(a1 + 72);
LABEL_6:
  memset(&v15[1], 0, 24);
  LOBYTE(v15[0]) = 2;
  sub_4488B8(v15, &v11);
  v4 = *(char **)(a1 + 424);
  v5 = *(_QWORD *)(a1 + 432);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 440) )
  {
    v6 = (char *)sub_491288(a1 + 424, *(void **)(a1 + 424), v5 + 1, 0x20u);
    *(_QWORD *)(a1 + 424) = v6;
    v4 = v6;
    v5 = *(_QWORD *)(a1 + 432);
  }
  v7 = (__int64 *)&v4[32 * v5];
  *(_BYTE *)v7 = 2;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  sub_4488B8(v7, v15);
  ++*(_QWORD *)(a1 + 432);
  sub_448310(v15);
  sub_448310(&v11);
  return 0;
}
// 433220: could not find valid save-restore pair for x21
// 52451C: using guessed type char under_debugger;
